/*
==============
BG_irand
==============
*/

int __fastcall BG_irand(int min, int max, unsigned int *pHoldrand)
{
  return ?BG_irand@@YAHHHPEAI@Z(min, max, pHoldrand);
}

/*
==============
BG_IsOnWallAnimFlagEnabled
==============
*/

bool __fastcall BG_IsOnWallAnimFlagEnabled(const playerState_s *ps)
{
  return ?BG_IsOnWallAnimFlagEnabled@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_CmdScale_Walk
==============
*/

void __fastcall PM_CmdScale_Walk(const pmove_t *pm, const pml_t *pml, const usercmd_s *cmd, float *outForwardScale, float *outSideScale)
{
  ?PM_CmdScale_Walk@@YAXPEBVpmove_t@@PEBUpml_t@@PEBUusercmd_s@@PEAM3@Z(pm, pml, cmd, outForwardScale, outSideScale);
}

/*
==============
PM_IsZeroGAntiLag
==============
*/

bool __fastcall PM_IsZeroGAntiLag(const playerState_s *ps)
{
  return ?PM_IsZeroGAntiLag@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_GetSuperSprintViewHeight
==============
*/

int __fastcall BG_GetSuperSprintViewHeight(const playerState_s *ps, const SuitDef *const suitDef)
{
  return ?BG_GetSuperSprintViewHeight@@YAHPEBUplayerState_s@@QEBUSuitDef@@@Z(ps, suitDef);
}

/*
==============
BG_rand
==============
*/

int __fastcall BG_rand(unsigned int *pHoldrand)
{
  return ?BG_rand@@YAHPEAI@Z(pHoldrand);
}

/*
==============
pmove_t::OnPMoveSingleEnd
==============
*/

void __fastcall pmove_t::OnPMoveSingleEnd(pmove_t *this, pmove_t *pm, pml_t *pml)
{
  ?OnPMoveSingleEnd@pmove_t@@QEAAXPEAV1@PEAUpml_t@@@Z(this, pm, pml);
}

/*
==============
PM_CheckKnockbackFlag
==============
*/

void __fastcall PM_CheckKnockbackFlag(pmove_t *pm, pml_t *pml)
{
  ?PM_CheckKnockbackFlag@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_GetBobCycleAnimTime
==============
*/

double __fastcall BG_GetBobCycleAnimTime(const int (*packedBobCycle)[2])
{
  double result; 

  *(float *)&result = ?BG_GetBobCycleAnimTime@@YAMAEAY01$$CBH@Z(packedBobCycle);
  return result;
}

/*
==============
BG_GetViewDip
==============
*/

int __fastcall BG_GetViewDip(const playerState_s *ps, float fallHeight)
{
  return ?BG_GetViewDip@@YAHPEBUplayerState_s@@M@Z(ps, fallHeight);
}

/*
==============
BG_GetBobValue
==============
*/

void __fastcall BG_GetBobValue(const int (*packedBobCycle)[2], float *outViewCycle, float *outViewAmplitude, float *outAnimCycle)
{
  ?BG_GetBobValue@@YAXAEAY01$$CBHPEAM11@Z(packedBobCycle, outViewCycle, outViewAmplitude, outAnimCycle);
}

/*
==============
PM_EndSprint
==============
*/

void __fastcall PM_EndSprint(playerState_s *ps, int serverTime, unsigned __int64 buttons)
{
  ?PM_EndSprint@@YAXPEAUplayerState_s@@H_K@Z(ps, serverTime, buttons);
}

/*
==============
PM_SetStance
==============
*/

void __fastcall PM_SetStance(pmove_t *pm, pml_t *pml, const EffectiveStance stance)
{
  ?PM_SetStance@@YAXPEAVpmove_t@@PEAUpml_t@@W4EffectiveStance@@@Z(pm, pml, stance);
}

/*
==============
PM_UpdateViewAngles
==============
*/

void __fastcall PM_UpdateViewAngles(pmove_t *pm, pml_t *pml)
{
  ?PM_UpdateViewAngles@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_SetSprintLeft
==============
*/

void __fastcall PM_SetSprintLeft(const BgWeaponMap *weaponMap, playerState_s *ps, const int gametime, int remainingTime)
{
  ?PM_SetSprintLeft@@YAXPEBVBgWeaponMap@@PEAUplayerState_s@@HH@Z(weaponMap, ps, gametime, remainingTime);
}

/*
==============
PM_AddTouchEnt
==============
*/

void __fastcall PM_AddTouchEnt(pmove_t *pm, int entityNum, PM_ToucherFlags toucherFlag)
{
  ?PM_AddTouchEnt@@YAXPEAVpmove_t@@HW4PM_ToucherFlags@@@Z(pm, entityNum, toucherFlag);
}

/*
==============
PM_Footstep_UpdateMoveType
==============
*/

entity_event_t __fastcall PM_Footstep_UpdateMoveType(const int msec, pmove_t *pm, const float speed, float *inOutMoveTypeWeight)
{
  return ?PM_Footstep_UpdateMoveType@@YA?AW4entity_event_t@@HPEAVpmove_t@@MPEAM@Z(msec, pm, speed, inOutMoveTypeWeight);
}

/*
==============
PM_MeleeChargeClear
==============
*/

void __fastcall PM_MeleeChargeClear(playerState_s *ps)
{
  ?PM_MeleeChargeClear@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
BG_srand
==============
*/

void __fastcall BG_srand(unsigned int *pHoldrand)
{
  ?BG_srand@@YAXPEAI@Z(pHoldrand);
}

/*
==============
BG_PlayerIsLinkedOrNotMoving
==============
*/

bool __fastcall BG_PlayerIsLinkedOrNotMoving(const playerState_s *ps, const int gameTime, const BgHandler *handler)
{
  return ?BG_PlayerIsLinkedOrNotMoving@@YA_NPEBUplayerState_s@@HPEBVBgHandler@@@Z(ps, gameTime, handler);
}

/*
==============
BG_GetLateralSpeed
==============
*/

double __fastcall BG_GetLateralSpeed(const playerState_s *ps, const BgHandler *handler)
{
  double result; 

  *(float *)&result = ?BG_GetLateralSpeed@@YAMPEBUplayerState_s@@PEBVBgHandler@@@Z(ps, handler);
  return result;
}

/*
==============
PM_GroundSurfaceType
==============
*/

unsigned int __fastcall PM_GroundSurfaceType(const pmove_t *pm)
{
  return ?PM_GroundSurfaceType@@YAIPEBVpmove_t@@@Z(pm);
}

/*
==============
BG_GetViewHeightSprint
==============
*/

int __fastcall BG_GetViewHeightSprint(const playerState_s *ps, const SuitDef *const suitDef)
{
  return ?BG_GetViewHeightSprint@@YAHPEBUplayerState_s@@QEBUSuitDef@@@Z(ps, suitDef);
}

/*
==============
PM_IsInAir
==============
*/

bool __fastcall PM_IsInAir(const pmove_t *pm)
{
  return ?PM_IsInAir@@YA_NPEBVpmove_t@@@Z(pm);
}

/*
==============
BG_SetOnWallAnimFlag
==============
*/

void __fastcall BG_SetOnWallAnimFlag(playerState_s *ps, bool enable)
{
  ?BG_SetOnWallAnimFlag@@YAXPEAUplayerState_s@@_N@Z(ps, enable);
}

/*
==============
PM_ForceStartSprint
==============
*/

bool __fastcall PM_ForceStartSprint(pmove_t *pm, const pml_t *pml)
{
  return ?PM_ForceStartSprint@@YA_NPEAVpmove_t@@PEBUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Pmove_GetHoldRand
==============
*/

unsigned int __fastcall PM_Pmove_GetHoldRand(const usercmd_s *const cmd, playerState_s *ps)
{
  return ?PM_Pmove_GetHoldRand@@YAIQEBUusercmd_s@@PEAUplayerState_s@@@Z(cmd, ps);
}

/*
==============
PM_ClipVelocityOverClip
==============
*/

void __fastcall PM_ClipVelocityOverClip(const pmove_t *pm, const vec3_t *in, const vec3_t *normal, const vec3_t *walkableRefUp, const float overclip, vec3_t *out)
{
  ?PM_ClipVelocityOverClip@@YAXPEBVpmove_t@@AEBTvec3_t@@1PEBT2@MAEAT2@@Z(pm, in, normal, walkableRefUp, overclip, out);
}

/*
==============
PM_ShouldMakeFootsteps
==============
*/

int __fastcall PM_ShouldMakeFootsteps(pmove_t *pm)
{
  return ?PM_ShouldMakeFootsteps@@YAHPEAVpmove_t@@@Z(pm);
}

/*
==============
PM_RefreshSprint
==============
*/

void __fastcall PM_RefreshSprint(playerState_s *ps, const BgWeaponMap *weaponMap)
{
  ?PM_RefreshSprint@@YAXPEAUplayerState_s@@PEBVBgWeaponMap@@@Z(ps, weaponMap);
}

/*
==============
BG_IsScriptedSceneAnimFlagEnabled
==============
*/

bool __fastcall BG_IsScriptedSceneAnimFlagEnabled(const playerState_s *ps)
{
  return ?BG_IsScriptedSceneAnimFlagEnabled@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_UpdateViewAngles_RangeLimited
==============
*/

void __fastcall PM_UpdateViewAngles_RangeLimited(playerState_s *ps, const float oldYaw)
{
  ?PM_UpdateViewAngles_RangeLimited@@YAXPEAUplayerState_s@@M@Z(ps, oldYaw);
}

/*
==============
BG_CmdScale_CalcInputScale
==============
*/

double __fastcall BG_CmdScale_CalcInputScale(float forward, float side)
{
  double result; 

  *(float *)&result = ?BG_CmdScale_CalcInputScale@@YAMMM@Z(forward, side);
  return result;
}

/*
==============
PM_ExtrapolateMove
==============
*/

void __fastcall PM_ExtrapolateMove(pmove_t *pm)
{
  ?PM_ExtrapolateMove@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
PM_SetProneMovementOverride
==============
*/

void __fastcall PM_SetProneMovementOverride(playerState_s *ps)
{
  ?PM_SetProneMovementOverride@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
PM_ZeroGravityMoveUpdateRollVelocity
==============
*/

void __fastcall PM_ZeroGravityMoveUpdateRollVelocity(pmove_t *pm, pml_t *pml)
{
  ?PM_ZeroGravityMoveUpdateRollVelocity@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_GetEffectiveStance
==============
*/

EffectiveStance __fastcall PM_GetEffectiveStance(const playerState_s *ps)
{
  return ?PM_GetEffectiveStance@@YA?AW4EffectiveStance@@PEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_GetRemoteControlledVehicleEntityNum
==============
*/

int __fastcall BG_GetRemoteControlledVehicleEntityNum(const playerState_s *ps, const BgHandler *handler)
{
  return ?BG_GetRemoteControlledVehicleEntityNum@@YAHPEBUplayerState_s@@PEBVBgHandler@@@Z(ps, handler);
}

/*
==============
PM_CanStartSuperSprint
==============
*/

bool __fastcall PM_CanStartSuperSprint(pmove_t *pm)
{
  return ?PM_CanStartSuperSprint@@YA_NPEAVpmove_t@@@Z(pm);
}

/*
==============
PM_AirMove
==============
*/

void __fastcall PM_AirMove(pmove_t *pm, pml_t *pml)
{
  ?PM_AirMove@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_CanStand
==============
*/

bool __fastcall PM_CanStand(playerState_s *ps, pmove_t *pm, const bool ignoreCurrentStance)
{
  return ?PM_CanStand@@YA_NPEAUplayerState_s@@PEAVpmove_t@@_N@Z(ps, pm, ignoreCurrentStance);
}

/*
==============
PM_GetViewHeightLerpTime
==============
*/

int __fastcall PM_GetViewHeightLerpTime(const playerState_s *ps, int iTarget, int bDown)
{
  return ?PM_GetViewHeightLerpTime@@YAHPEBUplayerState_s@@HH@Z(ps, iTarget, bDown);
}

/*
==============
PM_CmdHasCollisionAvoid
==============
*/

int __fastcall PM_CmdHasCollisionAvoid(const usercmd_s *cmd)
{
  return ?PM_CmdHasCollisionAvoid@@YAHPEBUusercmd_s@@@Z(cmd);
}

/*
==============
PM_Accelerate
==============
*/

void __fastcall PM_Accelerate(pmove_t *pm, const pml_t *pml, const vec3_t *wishdir, float wishspeed, float accel)
{
  ?PM_Accelerate@@YAXPEAVpmove_t@@PEBUpml_t@@AEBTvec3_t@@MM@Z(pm, pml, wishdir, wishspeed, accel);
}

/*
==============
PM_DebugMispredict
==============
*/

void __fastcall PM_DebugMispredict(const pmove_t *pm, int uniqueId, const char *message)
{
  ?PM_DebugMispredict@@YAXPEBVpmove_t@@HPEBD@Z(pm, uniqueId, message);
}

/*
==============
PM_ProjectVelocity
==============
*/

void __fastcall PM_ProjectVelocity(const pmove_t *pm, const vec3_t *velInConst, const vec3_t *normalConst, vec3_t *velOut)
{
  ?PM_ProjectVelocity@@YAXPEBVpmove_t@@AEBTvec3_t@@1AEAT2@@Z(pm, velInConst, normalConst, velOut);
}

/*
==============
BG_IsLinkedToAnimFlagEnabled
==============
*/

bool __fastcall BG_IsLinkedToAnimFlagEnabled(const playerState_s *ps)
{
  return ?BG_IsLinkedToAnimFlagEnabled@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_MeleeChargeStart
==============
*/

void __fastcall PM_MeleeChargeStart(pmove_t *pm, pml_t *pml, int meleeChargeEnt)
{
  ?PM_MeleeChargeStart@@YAXPEAVpmove_t@@PEAUpml_t@@H@Z(pm, pml, meleeChargeEnt);
}

/*
==============
BG_IsPlayerFireDisabled
==============
*/

bool __fastcall BG_IsPlayerFireDisabled(const playerState_s *ps)
{
  return ?BG_IsPlayerFireDisabled@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_random
==============
*/

double __fastcall BG_random(unsigned int *pHoldrand)
{
  double result; 

  *(float *)&result = ?BG_random@@YAMPEAI@Z(pHoldrand);
  return result;
}

/*
==============
PM_ProjectVelocityWallRunZeroGrav
==============
*/

void __fastcall PM_ProjectVelocityWallRunZeroGrav(const pmove_t *pm, const vec3_t *velInConst, const vec3_t *normalConst, vec3_t *velOut)
{
  ?PM_ProjectVelocityWallRunZeroGrav@@YAXPEBVpmove_t@@AEBTvec3_t@@1AEAT2@@Z(pm, velInConst, normalConst, velOut);
}

/*
==============
PM_ClipVelocity
==============
*/

void __fastcall PM_ClipVelocity(const vec3_t *in, const vec3_t *normal, vec3_t *out)
{
  ?PM_ClipVelocity@@YAXAEBTvec3_t@@0AEAT1@@Z(in, normal, out);
}

/*
==============
PM_CmdScale
==============
*/

double __fastcall PM_CmdScale(playerState_s *ps, usercmd_s *cmd)
{
  double result; 

  *(float *)&result = ?PM_CmdScale@@YAMPEAUplayerState_s@@PEAUusercmd_s@@@Z(ps, cmd);
  return result;
}

/*
==============
BG_LateralVelocityVecDot
==============
*/

double __fastcall BG_LateralVelocityVecDot(const playerState_s *ps, const vec3_t *otherVector, const BgHandler *handler)
{
  double result; 

  *(float *)&result = ?BG_LateralVelocityVecDot@@YAMPEBUplayerState_s@@AEBTvec3_t@@PEBVBgHandler@@@Z(ps, otherVector, handler);
  return result;
}

/*
==============
PM_ExtrapolateSingle
==============
*/

void __fastcall PM_ExtrapolateSingle(pmove_t *pm)
{
  ?PM_ExtrapolateSingle@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
PM_WalkMove
==============
*/

void __fastcall PM_WalkMove(pmove_t *pm, pml_t *pml)
{
  ?PM_WalkMove@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_MeleeGetEntityOriginVelocity
==============
*/

int __fastcall PM_MeleeGetEntityOriginVelocity(const pmove_t *pm, int meleeChargeEnt, vec3_t *outAttackerPos, vec3_t *outVictimPos, vec3_t *outVictimVel)
{
  return ?PM_MeleeGetEntityOriginVelocity@@YAHPEBVpmove_t@@HAEATvec3_t@@1PEAT2@@Z(pm, meleeChargeEnt, outAttackerPos, outVictimPos, outVictimVel);
}

/*
==============
PM_AddTraceTouchEnt
==============
*/

void __fastcall PM_AddTraceTouchEnt(const trace_t *const traceResults, pmove_t *const pm)
{
  ?PM_AddTraceTouchEnt@@YAXQEBUtrace_t@@QEAVpmove_t@@@Z(traceResults, pm);
}

/*
==============
PM_GetAccelerationForStance
==============
*/

double __fastcall PM_GetAccelerationForStance(const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?PM_GetAccelerationForStance@@YAMPEBUplayerState_s@@@Z(ps);
  return result;
}

/*
==============
BG_CanJog
==============
*/

bool __fastcall BG_CanJog(const BgWeaponMap *const weaponMap, const playerState_s *const ps)
{
  return ?BG_CanJog@@YA_NQEBVBgWeaponMap@@QEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_CalcViewspeedBobRatio
==============
*/

double __fastcall BG_CalcViewspeedBobRatio(const float yaw, const float prevYaw, const playerState_s *ps, const int frametimeMs)
{
  double result; 

  *(float *)&result = ?BG_CalcViewspeedBobRatio@@YAMMMPEBUplayerState_s@@H@Z(yaw, prevYaw, ps, frametimeMs);
  return result;
}

/*
==============
BG_GetSpeed
==============
*/

double __fastcall BG_GetSpeed(const playerState_s *ps, const int time, const BgHandler *handler)
{
  double result; 

  *(float *)&result = ?BG_GetSpeed@@YAMPEBUplayerState_s@@HPEBVBgHandler@@@Z(ps, time, handler);
  return result;
}

/*
==============
BG_SetKnockbackFlag
==============
*/

void __fastcall BG_SetKnockbackFlag(playerState_s *ps)
{
  ?BG_SetKnockbackFlag@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
PM_ViewRangeLimited
==============
*/

bool __fastcall PM_ViewRangeLimited(const playerState_s *ps)
{
  return ?PM_ViewRangeLimited@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_UpdateViewAngles_ClampDefault
==============
*/

void __fastcall BG_UpdateViewAngles_ClampDefault(playerState_s *ps, const usercmd_s *cmd)
{
  ?BG_UpdateViewAngles_ClampDefault@@YAXPEAUplayerState_s@@PEBUusercmd_s@@@Z(ps, cmd);
}

/*
==============
PM_CanStartSprint
==============
*/

bool __fastcall PM_CanStartSprint(pmove_t *pm, const pml_t *pml, bool ignoreReloadChecks)
{
  return ?PM_CanStartSprint@@YA_NPEAVpmove_t@@PEBUpml_t@@_N@Z(pm, pml, ignoreReloadChecks);
}

/*
==============
PM_MoveTypesFromFootstepType
==============
*/

bool __fastcall PM_MoveTypesFromFootstepType(entity_event_t event, FootstepMoveType_t *outMoveType, EquipmentMoveType_t *outEquipmentType)
{
  return ?PM_MoveTypesFromFootstepType@@YA_NW4entity_event_t@@PEAW4FootstepMoveType_t@@PEAW4EquipmentMoveType_t@@@Z(event, outMoveType, outEquipmentType);
}

/*
==============
BG_IsInAir
==============
*/

bool __fastcall BG_IsInAir(const playerState_s *const ps, const bool almostGroundPlane)
{
  return ?BG_IsInAir@@YA_NQEBUplayerState_s@@_N@Z(ps, almostGroundPlane);
}

/*
==============
PM_AddEvent
==============
*/

void __fastcall PM_AddEvent(pmove_t *pm, const entity_event_t newEvent)
{
  ?PM_AddEvent@@YAXPEAVpmove_t@@W4entity_event_t@@@Z(pm, newEvent);
}

/*
==============
PM_ZeroGravityIsWalkingDisabled
==============
*/

int __fastcall PM_ZeroGravityIsWalkingDisabled(const pmove_t *pm, const vec3_t *start, const vec3_t *end)
{
  return ?PM_ZeroGravityIsWalkingDisabled@@YAHPEBVpmove_t@@AEBTvec3_t@@1@Z(pm, start, end);
}

/*
==============
PM_GetEffectiveStanceForWorldModelAnimation
==============
*/

EffectiveStance __fastcall PM_GetEffectiveStanceForWorldModelAnimation(const playerState_s *ps)
{
  return ?PM_GetEffectiveStanceForWorldModelAnimation@@YA?AW4EffectiveStance@@PEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_InterpolateBobCycle
==============
*/

BobCycle *__fastcall BG_InterpolateBobCycle(BobCycle *result, const playerState_s *prevPs, const playerState_s *nextPs, float fraction)
{
  return ?BG_InterpolateBobCycle@@YA?AUBobCycle@@PEBUplayerState_s@@0M@Z(result, prevPs, nextPs, fraction);
}

/*
==============
PM_DamageScale_Walk
==============
*/

double __fastcall PM_DamageScale_Walk(int damage_timer)
{
  double result; 

  *(float *)&result = ?PM_DamageScale_Walk@@YAMH@Z(damage_timer);
  return result;
}

/*
==============
BG_CmdScale_CalcCmdScale
==============
*/

double __fastcall BG_CmdScale_CalcCmdScale(const char forwardMove, const char rightMove)
{
  double result; 

  *(float *)&result = ?BG_CmdScale_CalcCmdScale@@YAMCC@Z(forwardMove, rightMove);
  return result;
}

/*
==============
PM_CheckDuck
==============
*/

void __fastcall PM_CheckDuck(pmove_t *pm, pml_t *pml)
{
  ?PM_CheckDuck@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_GetSprintLeftRaw
==============
*/

int __fastcall PM_GetSprintLeftRaw(const BgWeaponMap *weaponMap, const playerState_s *ps, const int gametime)
{
  return ?PM_GetSprintLeftRaw@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@H@Z(weaponMap, ps, gametime);
}

/*
==============
BG_UpdateControlLockForInterract
==============
*/

void __fastcall BG_UpdateControlLockForInterract(playerState_s *ps, const usercmd_s *cmd)
{
  ?BG_UpdateControlLockForInterract@@YAXPEAUplayerState_s@@PEBUusercmd_s@@@Z(ps, cmd);
}

/*
==============
PM_HasIntentToRestoreSprint
==============
*/

bool __fastcall PM_HasIntentToRestoreSprint(const pmove_t *pm)
{
  return ?PM_HasIntentToRestoreSprint@@YA_NPEBVpmove_t@@@Z(pm);
}

/*
==============
BG_srand_timeangles
==============
*/

unsigned int __fastcall BG_srand_timeangles(const int commandTime, const vec3_t *viewangles)
{
  return ?BG_srand_timeangles@@YAIHAEBTvec3_t@@@Z(commandTime, viewangles);
}

/*
==============
PM_Friction
==============
*/

void __fastcall PM_Friction(pmove_t *pm, pml_t *pml)
{
  ?PM_Friction@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_ApplyCollisionAvoid
==============
*/

void __fastcall PM_ApplyCollisionAvoid(pmove_t *pm, pml_t *pml)
{
  ?PM_ApplyCollisionAvoid@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_ZeroGravity_SetWorldUpAngles
==============
*/

void __fastcall PM_ZeroGravity_SetWorldUpAngles(playerState_s *ps, BgWeaponMap *weaponMap, WorldUpReferenceFrame *refFrame, const BgHandler *handler, const vec3_t *newWorldUpAngles)
{
  ?PM_ZeroGravity_SetWorldUpAngles@@YAXPEAUplayerState_s@@PEAVBgWeaponMap@@PEAVWorldUpReferenceFrame@@PEBVBgHandler@@AEBTvec3_t@@@Z(ps, weaponMap, refFrame, handler, newWorldUpAngles);
}

/*
==============
PM_FootstepEvent
==============
*/

void __fastcall PM_FootstepEvent(pmove_t *pm, pml_t *pml, bool isOnStairs, float stairsAscentRatio, float prevTime, float curTime, const FootstepTime *times, const MovementTime *mvmtTimes)
{
  ?PM_FootstepEvent@@YAXPEAVpmove_t@@PEAUpml_t@@_NMMMPEBUFootstepTime@@PEBUMovementTime@@@Z(pm, pml, isOnStairs, stairsAscentRatio, prevTime, curTime, times, mvmtTimes);
}

/*
==============
PM_IsSprinting
==============
*/

bool __fastcall PM_IsSprinting(const playerState_s *ps)
{
  return ?PM_IsSprinting@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_SetLinkedToAnimFlag
==============
*/

void __fastcall BG_SetLinkedToAnimFlag(playerState_s *ps, const PMoveFlagsMP flag, bool enable)
{
  ?BG_SetLinkedToAnimFlag@@YAXPEAUplayerState_s@@W4PMoveFlagsMP@@_N@Z(ps, flag, enable);
}

/*
==============
BG_IsSuperSprinting
==============
*/

bool __fastcall BG_IsSuperSprinting(const playerState_s *ps)
{
  return ?BG_IsSuperSprinting@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BobCycle::UnpackBobCycle
==============
*/

void __fastcall BobCycle::UnpackBobCycle(BobCycle *this, const int (*packedBobCycle)[2])
{
  ?UnpackBobCycle@BobCycle@@QEAAXAEAY01$$CBH@Z(this, packedBobCycle);
}

/*
==============
PM_UpdateCustomAnimFlags
==============
*/

void __fastcall PM_UpdateCustomAnimFlags(pmove_t *pm)
{
  ?PM_UpdateCustomAnimFlags@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
PM_SetStrafeCondition
==============
*/

void __fastcall PM_SetStrafeCondition(pmove_t *pm, const PlayerAnimStrafeStates strafeState)
{
  ?PM_SetStrafeCondition@@YAXPEAVpmove_t@@W4PlayerAnimStrafeStates@@@Z(pm, strafeState);
}

/*
==============
PM_SprintRestoreShouldTry
==============
*/

bool __fastcall PM_SprintRestoreShouldTry(playerState_s *ps)
{
  return ?PM_SprintRestoreShouldTry@@YA_NPEAUplayerState_s@@@Z(ps);
}

/*
==============
BG_EstimateEffectiveStance
==============
*/

EffectiveStance __fastcall BG_EstimateEffectiveStance(const entityState_t *es)
{
  return ?BG_EstimateEffectiveStance@@YA?AW4EffectiveStance@@PEBUentityState_t@@@Z(es);
}

/*
==============
BG_GetLinkedToAnimType
==============
*/

AnimLinkedToType __fastcall BG_GetLinkedToAnimType(const playerState_s *ps)
{
  return ?BG_GetLinkedToAnimType@@YA?AW4AnimLinkedToType@@PEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_UpdateSprintRestore
==============
*/

void __fastcall PM_UpdateSprintRestore(playerState_s *ps, pmove_t *pm, const pml_t *pml)
{
  ?PM_UpdateSprintRestore@@YAXPEAUplayerState_s@@PEAVpmove_t@@PEBUpml_t@@@Z(ps, pm, pml);
}

/*
==============
PM_SetSprintRestore
==============
*/

void __fastcall PM_SetSprintRestore(pmove_t *pm, playerState_s *ps, const bool sprintRestore, const bool useDelay, const float delayOverride)
{
  ?PM_SetSprintRestore@@YAXPEAVpmove_t@@PEAUplayerState_s@@_N2M@Z(pm, ps, sprintRestore, useDelay, delayOverride);
}

/*
==============
PM_GetSprintLeft
==============
*/

int __fastcall PM_GetSprintLeft(const BgWeaponMap *weaponMap, const pmove_t *pm, const int gametime)
{
  return ?PM_GetSprintLeft@@YAHPEBVBgWeaponMap@@PEBVpmove_t@@H@Z(weaponMap, pm, gametime);
}

/*
==============
PM_ZeroGravityPlayerTriggerTrace
==============
*/

void __fastcall PM_ZeroGravityPlayerTriggerTrace(const pmove_t *pm, const vec3_t *start, const vec3_t *end, HavokPhysics_CollisionQueryResult *outResults)
{
  ?PM_ZeroGravityPlayerTriggerTrace@@YAXPEBVpmove_t@@AEBTvec3_t@@1PEAVHavokPhysics_CollisionQueryResult@@@Z(pm, start, end, outResults);
}

/*
==============
PM_SetJumpStrafeCondition
==============
*/

void __fastcall PM_SetJumpStrafeCondition(pmove_t *pm)
{
  ?PM_SetJumpStrafeCondition@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
BG_IsPlayerZeroGWalking
==============
*/

bool __fastcall BG_IsPlayerZeroGWalking(const playerState_s *ps)
{
  return ?BG_IsPlayerZeroGWalking@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_UpdateASM
==============
*/

void __fastcall PM_UpdateASM(pmove_t *pm, pml_t *pml)
{
  ?PM_UpdateASM@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_ClearLinkedToAnimFlags
==============
*/

void __fastcall BG_ClearLinkedToAnimFlags(playerState_s *ps)
{
  ?BG_ClearLinkedToAnimFlags@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
PM_GetFootstepActionType
==============
*/

FootstepActionType_t __fastcall PM_GetFootstepActionType(pmove_t *pm, float stairsAscentRatio)
{
  return ?PM_GetFootstepActionType@@YA?AW4FootstepActionType_t@@PEAVpmove_t@@M@Z(pm, stairsAscentRatio);
}

/*
==============
PM_ZeroGravityMoveCorrectWorldUp
==============
*/

void __fastcall PM_ZeroGravityMoveCorrectWorldUp(pmove_t *pm)
{
  ?PM_ZeroGravityMoveCorrectWorldUp@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
PM_DropTimers
==============
*/

void __fastcall PM_DropTimers(pmove_t *pm, pml_t *pml)
{
  ?PM_DropTimers@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_UpdateCollisionAvoid
==============
*/

void __fastcall PM_UpdateCollisionAvoid(pmove_t *pm)
{
  ?PM_UpdateCollisionAvoid@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
BG_flrand
==============
*/

double __fastcall BG_flrand(float min, float max, unsigned int *pHoldrand)
{
  double result; 

  *(float *)&result = ?BG_flrand@@YAMMMPEAI@Z(min, max, pHoldrand);
  return result;
}

/*
==============
BobCycle::PackBobCycle
==============
*/

void __fastcall BobCycle::PackBobCycle(BobCycle *this, int (*outPackedBobCycle)[2])
{
  ?PackBobCycle@BobCycle@@QEBAXAEAY01H@Z(this, outPackedBobCycle);
}

/*
==============
BG_crandom
==============
*/

double __fastcall BG_crandom(unsigned int *pHoldrand)
{
  double result; 

  *(float *)&result = ?BG_crandom@@YAMPEAI@Z(pHoldrand);
  return result;
}

/*
==============
BG_CalcViewspeedBobRatio
==============
*/
float BG_CalcViewspeedBobRatio(const float yaw, const float prevYaw, const playerState_s *ps, const int frametimeMs)
{
  const SuitDef *SuitDef; 
  double v7; 
  float v8; 
  double Float_Internal_DebugName; 
  float v10; 
  double ValueFromFraction; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8253, ASSERT_TYPE_ASSERT, "( ps ) != ( nullptr )", "%s != %s\n\t%p, %p", "ps", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( frametimeMs <= 0 || BG_IsInAir(ps, 0) )
    goto LABEL_13;
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8269, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( ps->viewHeightTarget == BG_Suit_GetProneViewHeight(SuitDef) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
  {
LABEL_13:
    LODWORD(ValueFromFraction) = 0;
  }
  else
  {
    v7 = AngleDelta(yaw, prevYaw);
    v8 = *(float *)&v7 * (float)(1000.0 / (float)frametimeMs);
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_viewBobMaxTurnSpeed, "bg_viewBobMaxTurnSpeed");
    v10 = COERCE_FLOAT(LODWORD(v8) & _xmm) / *(float *)&Float_Internal_DebugName;
    I_fclamp(v10, 0.0, 1.0);
    ValueFromFraction = GraphGetValueFromFraction(4, knots, v10);
  }
  return *(float *)&ValueFromFraction;
}

/*
==============
BG_CanJog
==============
*/
char BG_CanJog(const BgWeaponMap *const weaponMap, const playerState_s *const ps)
{
  const dvar_t *v2; 
  shellshock_parms_t *ShellshockParms; 
  int WeaponHand; 
  __int64 v7; 
  __int64 v8; 
  int *i; 

  v2 = DCONST_DVARMPBOOL_enableJog;
  if ( !DCONST_DVARMPBOOL_enableJog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "enableJog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) && PM_GetEffectiveStance(ps) == PM_EFF_STANCE_DEFAULT && (!GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x15u) || (ShellshockParms = BG_GetShellshockParms(ps->shellshockIndex)) == NULL || !ShellshockParms->movement.breakJog) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Bu) )
  {
    WeaponHand = BG_PlayerLastWeaponHand(weaponMap, ps);
    v7 = WeaponHand;
    if ( WeaponHand < 0 )
      return 1;
    v8 = 0i64;
    for ( i = &ps->weapState[0].weaponState; !*i; i += 20 )
    {
      if ( ++v8 > v7 )
        return 1;
    }
  }
  return 0;
}

/*
==============
BG_CheckProneTurned
==============
*/
_BOOL8 BG_CheckProneTurned(pmove_t *pm, playerState_s *ps, float newProneYaw, const BgHandler *handler)
{
  double v7; 
  float v8; 
  float fYaw; 
  FeetDirection feetDirection; 
  Physics_WorldId worldId; 
  int isOnGround; 
  double BoundsHeight; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9809, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v7 = AngleDelta(newProneYaw, ps->viewangles.v[1]);
  v8 = COERCE_FLOAT(LODWORD(v7) & _xmm) * 0.0041666669;
  fYaw = newProneYaw - (float)((float)(1.0 - v8) * *(float *)&v7);
  AngleNormalize360(fYaw);
  feetDirection = PM_GetProneFeetDirection(ps);
  worldId = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
  isOnGround = ps->groundEntityNum != 2047;
  BoundsHeight = BG_Suit_GetBoundsHeight(ps, PM_EFF_STANCE_PRONE);
  return BG_CheckProne(ps, ps->clientNum, &ps->origin, 15.0, *(const float *)&BoundsHeight, fYaw, &pm->fTorsoPitch, &pm->fWaistPitch, 1, isOnGround, 1, handler, worldId, PCT_CLIENT, (float)((float)(1.0 - v8) * 50.0) + (float)(v8 * 45.0), feetDirection, NULL, NULL);
}

/*
==============
BG_ClearLinkedToAnimFlags
==============
*/
void BG_ClearLinkedToAnimFlags(playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8910, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_MANTLE_UP_WEAPON_DOWN|0x80) && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Bu);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Cu);
  }
}

/*
==============
BG_CmdScale_CalcCmdScale
==============
*/
float BG_CmdScale_CalcCmdScale(const char forwardMove, const char rightMove)
{
  int v2; 
  int v3; 
  float v4; 
  float result; 

  v2 = abs8(rightMove);
  v3 = abs8(forwardMove);
  v4 = fsqrt((float)(rightMove * rightMove + forwardMove * forwardMove));
  result = 0.0;
  if ( v4 > 0.000001 )
  {
    if ( v3 > v2 )
      v2 = v3;
    return (float)v2 / v4;
  }
  return result;
}

/*
==============
BG_CmdScale_CalcInputScale
==============
*/
float BG_CmdScale_CalcInputScale(float forward, float side)
{
  float result; 

  result = 0.0;
  if ( side != 0.0 || forward != 0.0 )
  {
    if ( COERCE_FLOAT(LODWORD(side) & _xmm) <= COERCE_FLOAT(LODWORD(forward) & _xmm) )
      return fsqrt((float)((float)(side / forward) * (float)(side / forward)) + 1.0);
    else
      return fsqrt((float)((float)(forward / side) * (float)(forward / side)) + 1.0);
  }
  return result;
}

/*
==============
BG_EstimateEffectiveStance
==============
*/
__int64 BG_EstimateEffectiveStance(const entityState_t *es)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((es->eType - 1) & 0xFFEF) != 0 )
    return 0i64;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 4u) )
    return 1i64;
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 3u) )
    return 0i64;
  else
    return 2i64;
}

/*
==============
BG_GetBobCycleAnimTime
==============
*/
float BG_GetBobCycleAnimTime(const int (*packedBobCycle)[2])
{
  float v1; 
  BobCycle v3; 

  BobCycle::BobCycle(&v3, packedBobCycle);
  v1 = (float)(v3.animCycle + (v3.generation << 9)) / (float)((v3.maxGeneration + 1) << 9);
  if ( (v1 < 0.0 || v1 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5296, ASSERT_TYPE_ASSERT, "(0.0f <= animTime && animTime <= 1.0f)", (const char *)&queryFormat, "0.0f <= animTime && animTime <= 1.0f") )
    __debugbreak();
  return v1;
}

/*
==============
BG_GetBobValue
==============
*/
void BG_GetBobValue(const int (*packedBobCycle)[2], float *outViewCycle, float *outViewAmplitude, float *outAnimCycle)
{
  __int16 animCycle; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  BobCycle v12; 

  BobCycle::BobCycle(&v12, packedBobCycle);
  animCycle = v12.animCycle;
  if ( outViewCycle )
  {
    *outViewCycle = (float)((float)((float)(v12.animCycle & 0x1FF) * 0.0061599859) * 2.0) + 6.2831855;
    v8 = DCONST_DVARBOOL_bg_viewBobDisable;
    if ( !DCONST_DVARBOOL_bg_viewBobDisable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobDisable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
      *outViewCycle = 0.0;
  }
  if ( outViewAmplitude )
  {
    v9 = DCONST_DVARMPFLT_bg_viewBobMax;
    if ( !DCONST_DVARMPFLT_bg_viewBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    *outViewAmplitude = v12.amplitudeRatio * v9->current.value;
    v10 = DCONST_DVARMPBOOL_bg_viewBobConstantAmplitude;
    if ( !DCONST_DVARMPBOOL_bg_viewBobConstantAmplitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobConstantAmplitude") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
    {
      v11 = DCONST_DVARMPFLT_bg_viewBobMax;
      if ( !DCONST_DVARMPFLT_bg_viewBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobMax") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      *outViewAmplitude = v11->current.value;
    }
  }
  if ( outAnimCycle )
    *outAnimCycle = (float)((float)((float)(animCycle & 0x1FF) * 0.0061599859) * 2.0) + 6.2831855;
}

/*
==============
BG_GetLateralSpeed
==============
*/
float BG_GetLateralSpeed(const playerState_s *ps, const BgHandler *handler)
{
  const dvar_t *v4; 
  int integer; 
  vec3_t *p_velocity; 
  double v7; 
  float v8; 
  double UpContribution; 
  double ForwardContribution; 
  WorldUpReferenceFrame v12; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12897, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v12, ps, handler);
  v4 = DCONST_DVARINT_player_lateralPlane;
  if ( !DCONST_DVARINT_player_lateralPlane && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_lateralPlane") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  p_velocity = &ps->velocity;
  if ( integer )
  {
    if ( integer == 1 )
      ForwardContribution = WorldUpReferenceFrame::GetForwardContribution(&v12, p_velocity);
    else
      ForwardContribution = WorldUpReferenceFrame::GetRightContribution(&v12, p_velocity);
    v8 = *(float *)&ForwardContribution;
    UpContribution = WorldUpReferenceFrame::GetUpContribution(&v12, &ps->velocity);
  }
  else
  {
    v7 = WorldUpReferenceFrame::GetForwardContribution(&v12, p_velocity);
    v8 = *(float *)&v7;
    UpContribution = WorldUpReferenceFrame::GetRightContribution(&v12, &ps->velocity);
  }
  return fsqrt((float)(*(float *)&UpContribution * *(float *)&UpContribution) + (float)(v8 * v8));
}

/*
==============
BG_GetLinkedToAnimType
==============
*/
__int64 BG_GetLinkedToAnimType(const playerState_s *ps)
{
  unsigned int v2; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8938, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v2 = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_MANTLE_UP_WEAPON_DOWN|0x80) && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Bu) )
      return 1i64;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Cu) )
      return 2;
  }
  return v2;
}

/*
==============
BG_GetRemoteControlledVehicleEntityNum
==============
*/
int BG_GetRemoteControlledVehicleEntityNum(const playerState_s *ps, const BgHandler *handler)
{
  int remoteControlEnt; 
  const entityState_t *EntityState; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  centity_t *v9; 

  remoteControlEnt = ps->remoteControlEnt;
  EntityState = NULL;
  if ( remoteControlEnt == 2047 )
  {
    if ( !BG_IsRemoteTurretActive(ps) )
      return remoteControlEnt;
    remoteControlEnt = ps->viewlocked_entNum;
  }
  else
  {
    if ( handler->IsClient((BgHandler *)handler) )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)LODWORD(handler[1].__vftable), remoteControlEnt);
      if ( Entity )
        p_nextState = &Entity->nextState;
      else
        p_nextState = NULL;
    }
    else
    {
      p_nextState = GHandler::GetEntityState((GHandler *)handler, remoteControlEnt);
    }
    if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 13091, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( p_nextState->eType != ET_TURRET )
      return BG_GameInterface_GetRemoteControlledVehicleEntityNumFromType(ps, p_nextState);
  }
  if ( handler->IsClient((BgHandler *)handler) )
  {
    v9 = CG_GetEntity((const LocalClientNum_t)LODWORD(handler[1].__vftable), remoteControlEnt);
    if ( v9 )
      EntityState = &v9->nextState;
  }
  else
  {
    EntityState = GHandler::GetEntityState((GHandler *)handler, remoteControlEnt);
  }
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 13116, ASSERT_TYPE_ASSERT, "(turretEntState)", (const char *)&queryFormat, "turretEntState") )
    __debugbreak();
  if ( (*(_DWORD *)&EntityState->clientLinkInfo & 0x7FF) == 0 )
    return 2047;
  return (*(_DWORD *)&EntityState->clientLinkInfo & 0x7FF) - 1;
}

/*
==============
BG_GetSpeed
==============
*/
float BG_GetSpeed(const playerState_s *ps, const int time, const BgHandler *handler)
{
  double UpContribution; 
  const dvar_t *v7; 
  int integer; 
  vec3_t *p_velocity; 
  double v10; 
  float v11; 
  double ForwardContribution; 
  WorldUpReferenceFrame v14; 

  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
  {
    if ( time - ps->jumpState.jumpTime >= 500 )
    {
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v14, ps, handler);
      UpContribution = WorldUpReferenceFrame::GetUpContribution(&v14, &ps->velocity);
    }
    else
    {
      LODWORD(UpContribution) = 0;
    }
  }
  else if ( BG_IsPlayerZeroG(ps) )
  {
    LODWORD(UpContribution) = fsqrt((float)((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(ps->velocity.v[2] * ps->velocity.v[2]));
  }
  else
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12897, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v14, ps, handler);
    v7 = DCONST_DVARINT_player_lateralPlane;
    if ( !DCONST_DVARINT_player_lateralPlane && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_lateralPlane") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    integer = v7->current.integer;
    p_velocity = &ps->velocity;
    if ( integer )
    {
      if ( integer == 1 )
        ForwardContribution = WorldUpReferenceFrame::GetForwardContribution(&v14, p_velocity);
      else
        ForwardContribution = WorldUpReferenceFrame::GetRightContribution(&v14, p_velocity);
      v11 = *(float *)&ForwardContribution;
      UpContribution = WorldUpReferenceFrame::GetUpContribution(&v14, p_velocity);
    }
    else
    {
      v10 = WorldUpReferenceFrame::GetForwardContribution(&v14, p_velocity);
      v11 = *(float *)&v10;
      UpContribution = WorldUpReferenceFrame::GetRightContribution(&v14, p_velocity);
    }
    LODWORD(UpContribution) = fsqrt((float)(v11 * v11) + (float)(*(float *)&UpContribution * *(float *)&UpContribution));
  }
  return *(float *)&UpContribution;
}

/*
==============
BG_GetSuperSprintViewHeight
==============
*/
__int64 BG_GetSuperSprintViewHeight(const playerState_s *ps, const SuitDef *const suitDef)
{
  const dvar_t *v3; 
  const dvar_t *v4; 
  int viewheight_crouch; 
  const dvar_t *v7; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 802, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !suitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 803, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  v3 = DCONST_DVARMPBOOL_superSprintEnable;
  if ( !DCONST_DVARMPBOOL_superSprintEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
    return (unsigned int)suitDef->viewheight_sprint;
  v4 = DCONST_DVARINT_superSprintHeightOffset;
  if ( !DCONST_DVARINT_superSprintHeightOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintHeightOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  viewheight_crouch = suitDef->viewheight_crouch;
  if ( suitDef->viewheight_sprint - v4->current.integer <= viewheight_crouch )
    return (unsigned int)(viewheight_crouch + 1);
  v7 = DCONST_DVARINT_superSprintHeightOffset;
  if ( !DCONST_DVARINT_superSprintHeightOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintHeightOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  return (unsigned int)(suitDef->viewheight_sprint - v7->current.integer);
}

/*
==============
BG_GetViewDip
==============
*/

__int64 __fastcall BG_GetViewDip(const playerState_s *ps, double fallHeight)
{
  __int128 v5; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5182, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _XMM4 = 0i64;
  if ( *(float *)&fallHeight > 12.0 )
  {
    v5 = *(_OWORD *)&fallHeight;
    *(float *)&v5 = (float)((float)(*(float *)&fallHeight - 12.0) * 0.15384616) + 4.0;
    _XMM1 = v5;
  }
  else
  {
    _XMM1 = 0i64;
  }
  __asm { vminss  xmm3, xmm1, cs:__real@41c00000 }
  _XMM0 = ps->slideState.flags & 0x20;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm4, xmm3, xmm2
  }
  return (unsigned int)(int)*(float *)&_XMM0;
}

/*
==============
BG_GetViewHeightSprint
==============
*/
__int64 BG_GetViewHeightSprint(const playerState_s *ps, const SuitDef *const suitDef)
{
  const dvar_t *v4; 
  const dvar_t *v5; 
  int viewheight_crouch; 
  const dvar_t *v8; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 825, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !suitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 826, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( !BG_IsSuperSprinting(ps) )
    return (unsigned int)suitDef->viewheight_sprint;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 802, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !suitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 803, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  v4 = DCONST_DVARMPBOOL_superSprintEnable;
  if ( !DCONST_DVARMPBOOL_superSprintEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return (unsigned int)suitDef->viewheight_sprint;
  v5 = DCONST_DVARINT_superSprintHeightOffset;
  if ( !DCONST_DVARINT_superSprintHeightOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintHeightOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  viewheight_crouch = suitDef->viewheight_crouch;
  if ( suitDef->viewheight_sprint - v5->current.integer <= viewheight_crouch )
    return (unsigned int)(viewheight_crouch + 1);
  v8 = DCONST_DVARINT_superSprintHeightOffset;
  if ( !DCONST_DVARINT_superSprintHeightOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintHeightOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  return (unsigned int)(suitDef->viewheight_sprint - v8->current.integer);
}

/*
==============
BG_InterpolateBobCycle
==============
*/
BobCycle *BG_InterpolateBobCycle(BobCycle *result, const playerState_s *prevPs, const playerState_s *nextPs, float fraction)
{
  __int128 v4; 
  int commandTime; 
  int v9; 
  __int128 v10; 
  double v11; 
  signed int maxGeneration; 
  int generation; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  bool isAnimDecreasing; 
  int v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  unsigned int v25; 
  float v26; 
  float v27; 
  BobCycle *v28; 
  BobCycle v29; 
  BobCycle v30; 
  BobCycle v31; 
  _QWORD v32[3]; 

  if ( !prevPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5303, ASSERT_TYPE_ASSERT, "(prevPs)", (const char *)&queryFormat, "prevPs") )
    __debugbreak();
  if ( !nextPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5304, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
    __debugbreak();
  commandTime = prevPs->commandTime;
  v9 = nextPs->commandTime;
  if ( prevPs->clientNum != nextPs->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5311, ASSERT_TYPE_ASSERT, "(prevPs->clientNum == nextPs->clientNum)", "%s\n\tAttempted to interpolate between playerStates belonging to different entities, (%i, %i), times: (%i, %i)", "prevPs->clientNum == nextPs->clientNum", prevPs->clientNum, nextPs->clientNum, prevPs->commandTime, nextPs->commandTime) )
    __debugbreak();
  BobCycle::BobCycle(&v31, (const int (*)[2])prevPs->packedBobCycle);
  BobCycle::BobCycle(&v29, (const int (*)[2])nextPs->packedBobCycle);
  if ( commandTime < v9 )
  {
    _XMM1 = *(_OWORD *)&v31.animCycle;
    maxGeneration = v29.maxGeneration;
    generation = v29.generation;
    __asm { vpextrd rax, xmm1, 2 }
    *(_OWORD *)&v32[1] = v4;
    v30 = v31;
    if ( (_DWORD)_RAX == v29.maxGeneration )
    {
      v16 = v31.generation;
    }
    else
    {
      v16 = v29.generation;
      if ( v29.maxGeneration > 0xFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5332, ASSERT_TYPE_ASSERT, "(0 <= prevBobCycle.maxGeneration && prevBobCycle.maxGeneration <= ((0x1 << 4) - 1))", (const char *)&queryFormat, "0 <= prevBobCycle.maxGeneration && prevBobCycle.maxGeneration <= MAX_BOB_GENERATION") )
        __debugbreak();
      if ( (generation < 0 || generation > maxGeneration) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5333, ASSERT_TYPE_ASSERT, "(0 <= prevBobCycle.generation && prevBobCycle.generation <= prevBobCycle.maxGeneration)", (const char *)&queryFormat, "0 <= prevBobCycle.generation && prevBobCycle.generation <= prevBobCycle.maxGeneration") )
        __debugbreak();
    }
    v17 = (maxGeneration + 1) << 9;
    v18 = ModuloWrap<int>(v31.animCycle + (v16 << 9), v17);
    v19 = ModuloWrap<int>(v29.animCycle + (generation << 9), v17);
    isAnimDecreasing = v29.isAnimDecreasing;
    v21 = v19;
    if ( v31.isAnimDecreasing != v29.isAnimDecreasing )
    {
      if ( (int)abs32(v19 - v18) > v17 / 2 )
        isAnimDecreasing = v19 > v18;
      else
        isAnimDecreasing = v19 < v18;
    }
    if ( v18 >= v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 580, ASSERT_TYPE_ASSERT, "(startVal < divisor)", (const char *)&queryFormat, "startVal < divisor") )
      __debugbreak();
    if ( v21 >= v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 581, ASSERT_TYPE_ASSERT, "(endVal < divisor)", (const char *)&queryFormat, "endVal < divisor") )
      __debugbreak();
    if ( isAnimDecreasing )
    {
      if ( v21 > v18 )
        v21 -= v17;
    }
    else if ( v21 < v18 )
    {
      v21 += v17;
    }
    v22 = (int)(float)((float)(v21 - v18) * fraction);
    if ( v17 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 572, ASSERT_TYPE_ASSERT, "(divisor > 0)", (const char *)&queryFormat, "divisor > 0") )
      __debugbreak();
    v23 = (v17 + (v22 + v18) % v17) % v17;
    v24 = (v17 + (v22 + v18) % v17) % v17 / 512;
    v25 = (int)((((WORD2(v23) & 0x1FF) + v23) & 0x1FF) - (WORD2(v23) & 0x1FF) + 512) % 512;
    *(_QWORD *)&v30.animCycle = __PAIR64__(v24, v25);
    v30.maxGeneration = maxGeneration;
    if ( (unsigned int)maxGeneration > 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5363, ASSERT_TYPE_ASSERT, "(0 <= interpBobCycle.maxGeneration && interpBobCycle.maxGeneration <= ((0x1 << 4) - 1))", (const char *)&queryFormat, "0 <= interpBobCycle.maxGeneration && interpBobCycle.maxGeneration <= MAX_BOB_GENERATION") )
      __debugbreak();
    if ( (v24 < 0 || v24 > maxGeneration) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5364, ASSERT_TYPE_ASSERT, "(0 <= interpBobCycle.generation && interpBobCycle.generation <= interpBobCycle.maxGeneration)", (const char *)&queryFormat, "0 <= interpBobCycle.generation && interpBobCycle.generation <= interpBobCycle.maxGeneration") )
      __debugbreak();
    if ( v25 > 0x1FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5365, ASSERT_TYPE_ASSERT, "(0 <= interpBobCycle.animCycle && interpBobCycle.animCycle <= ((0x1 << 9) - 1))", (const char *)&queryFormat, "0 <= interpBobCycle.animCycle && interpBobCycle.animCycle <= MAX_BOB_CYCLE") )
      __debugbreak();
    v26 = (float)((float)(1.0 - fraction) * v31.amplitudeRatio) + (float)(fraction * v29.amplitudeRatio);
    v27 = (float)((float)(1.0 - fraction) * v31.amplitudeRatioGun) + (float)(fraction * v29.amplitudeRatioGun);
    v30.amplitudeRatioGun = v27;
    v30.amplitudeRatio = v26;
    if ( (v26 < 0.0 || v26 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5370, ASSERT_TYPE_ASSERT, "(0.0f <= interpBobCycle.amplitudeRatio && interpBobCycle.amplitudeRatio <= 1.0f)", (const char *)&queryFormat, "0.0f <= interpBobCycle.amplitudeRatio && interpBobCycle.amplitudeRatio <= 1.0f") )
      __debugbreak();
    if ( (v27 < 0.0 || v27 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5371, ASSERT_TYPE_ASSERT, "(0.0f <= interpBobCycle.amplitudeRatioGun && interpBobCycle.amplitudeRatioGun <= 1.0f)", (const char *)&queryFormat, "0.0f <= interpBobCycle.amplitudeRatioGun && interpBobCycle.amplitudeRatioGun <= 1.0f") )
      __debugbreak();
    v10 = *(_OWORD *)&v30.animCycle;
    v11 = *(double *)&v30.amplitudeRatioGun;
  }
  else
  {
    v10 = *(_OWORD *)&v29.animCycle;
    v11 = *(double *)&v29.amplitudeRatioGun;
  }
  v28 = result;
  *(_OWORD *)&result->animCycle = v10;
  *(double *)&result->amplitudeRatioGun = v11;
  return v28;
}

/*
==============
BG_IsInAir
==============
*/
bool BG_IsInAir(const playerState_s *const ps, const bool almostGroundPlane)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9001, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BG_IsPlayerZeroGFloating(ps) || ps->groundEntityNum == 2047 && ps->pm_type != 1 && (!GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) || Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_last_stand_air_movetype_enabled, "killswitch_last_stand_air_movetype_enabled")) && (!almostGroundPlane || !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80)) && !BG_IsPlayerSwimming(ps) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u);
}

/*
==============
BG_IsLinkedToAnimFlagEnabled
==============
*/
bool BG_IsLinkedToAnimFlagEnabled(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8923, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return Com_GameMode_SupportsFeature(WEAPON_MANTLE_UP_WEAPON_DOWN|0x80) && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Bu) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Cu));
}

/*
==============
BG_IsOnWallAnimFlagEnabled
==============
*/
bool BG_IsOnWallAnimFlagEnabled(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8855, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return Com_GameMode_SupportsFeature(WEAPON_MANTLE_UP_WEAPON_UP|0x80) && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Eu);
}

/*
==============
BG_IsPlayerFireDisabled
==============
*/
bool BG_IsPlayerFireDisabled(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2975, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x25u) || BG_IsPlayerInExecution(ps) && BG_Execution_CanUpdateViewangles(ps);
}

/*
==============
BG_IsPlayerZeroGWalking
==============
*/
bool BG_IsPlayerZeroGWalking(const playerState_s *ps)
{
  __int16 groundEntityNum; 
  bool result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 13036, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = 0;
  if ( BG_IsPlayerZeroG(ps) )
  {
    groundEntityNum = ps->groundEntityNum;
    if ( groundEntityNum != 2047 && (!BGMovingPlatforms::IsMovingPlatform(groundEntityNum) || ps->groundEntityNum == ps->movingPlatforms.m_movingPlatformEntity) )
      return 1;
  }
  return result;
}

/*
==============
BG_IsScriptedSceneAnimFlagEnabled
==============
*/
bool BG_IsScriptedSceneAnimFlagEnabled(const playerState_s *ps)
{
  unsigned int Animset; 
  unsigned int Anim; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8869, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    return 0;
  if ( !PlayerASM_IsEnabled() )
    return GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Du);
  Animset = BG_PlayerASM_GetAnimset(ps);
  Anim = BG_PlayerASM_GetAnim(ps, MOVEMENT);
  return BG_PlayerASM_IsSceneAlias(Anim, Animset) != 0;
}

/*
==============
BG_IsSuperSprinting
==============
*/
bool BG_IsSuperSprinting(const playerState_s *ps)
{
  const dvar_t *v2; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 660, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v2 = DCONST_DVARMPBOOL_superSprintEnable;
  if ( !DCONST_DVARMPBOOL_superSprintEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.enabled && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) && ps->sprintState.lastSuperSprintEnd < ps->sprintState.lastSuperSprintStart;
}

/*
==============
BG_LateralVelocityVecDot
==============
*/
float BG_LateralVelocityVecDot(const playerState_s *ps, const vec3_t *otherVector, const BgHandler *handler)
{
  const dvar_t *v6; 
  int integer; 
  vec3_t *p_velocity; 
  double v9; 
  float v10; 
  double UpContribution; 
  double ForwardContribution; 
  WorldUpReferenceFrame v14; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12927, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v14, ps, handler);
  v6 = DCONST_DVARINT_player_lateralPlane;
  if ( !DCONST_DVARINT_player_lateralPlane && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_lateralPlane") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  p_velocity = &ps->velocity;
  if ( integer )
  {
    if ( integer == 1 )
      ForwardContribution = WorldUpReferenceFrame::GetForwardContribution(&v14, p_velocity);
    else
      ForwardContribution = WorldUpReferenceFrame::GetRightContribution(&v14, p_velocity);
    v10 = *(float *)&ForwardContribution;
    UpContribution = WorldUpReferenceFrame::GetUpContribution(&v14, &ps->velocity);
  }
  else
  {
    v9 = WorldUpReferenceFrame::GetForwardContribution(&v14, p_velocity);
    v10 = *(float *)&v9;
    UpContribution = WorldUpReferenceFrame::GetRightContribution(&v14, &ps->velocity);
  }
  return (float)(*(float *)&UpContribution * otherVector->v[1]) + (float)(v10 * otherVector->v[0]);
}

/*
==============
BG_PlayerIsLinkedOrNotMoving
==============
*/
bool BG_PlayerIsLinkedOrNotMoving(const playerState_s *ps, const int gameTime, const BgHandler *handler)
{
  const dvar_t *v6; 
  float value; 
  double Speed; 

  if ( ps->pm_type == 1 && !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, GameModeFlagValues::ms_spValue, 8u) )
    return 1;
  v6 = DCONST_DVARFLT_player_moveThreshhold;
  if ( !DCONST_DVARFLT_player_moveThreshhold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_moveThreshhold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  value = v6->current.value;
  Speed = BG_GetSpeed(ps, gameTime, handler);
  return *(float *)&Speed < value;
}

/*
==============
BG_Pmove_PlayerProneAllowed
==============
*/
_BOOL8 BG_Pmove_PlayerProneAllowed(pmove_t *pm)
{
  playerState_s *ps; 
  bool v3; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *RequestedWeapon; 
  const Weapon *OffHandWeaponForPlayer; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6384, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6384, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsPlayerZeroG(ps) )
    return 0i64;
  v3 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  if ( BG_WeaponBlocksProne(CurrentWeaponForPlayer, v3) )
    return 0i64;
  RequestedWeapon = PM_GetRequestedWeapon(pm);
  if ( BG_WeaponBlocksProne(RequestedWeapon, v3) )
    return 0i64;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u) )
  {
    OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(pm->weaponMap, ps);
    if ( BG_WeaponBlocksProne(OffHandWeaponForPlayer, v3) )
      return 0i64;
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2526, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return (!BG_IsPlayerInExecution(ps) || ps->activeExecutionIsVictim) && (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) || ps->groundEntityNum != 2047 && BG_Pmove_PlayerPronePossible(pm));
}

/*
==============
BG_Pmove_PlayerPronePossible
==============
*/
_BOOL8 BG_Pmove_PlayerPronePossible(pmove_t *pm)
{
  playerState_s *ps; 
  FeetDirection feetDirection; 
  Physics_WorldId v4; 
  const BgHandler *handler; 
  float fYaw; 
  Physics_WorldId worldId; 
  int isOnGround; 
  double BoundsHeight; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6369, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6370, ASSERT_TYPE_ASSERT, "(pm->bounds)", (const char *)&queryFormat, "pm->bounds") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6372, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  feetDirection = PM_GetProneFeetDirection(ps);
  v4 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
  handler = pm->m_bgHandler;
  fYaw = ps->viewangles.v[1];
  worldId = v4;
  isOnGround = ps->groundEntityNum != 2047;
  BoundsHeight = BG_Suit_GetBoundsHeight(ps, PM_EFF_STANCE_PRONE);
  return BG_CheckProne(ps, ps->clientNum, &ps->origin, pm->bounds->halfSize.v[0], *(const float *)&BoundsHeight, fYaw, &pm->fTorsoPitch, &pm->fWaistPitch, 0, isOnGround, 1, handler, worldId, PCT_CLIENT, 50.0, feetDirection, NULL, NULL);
}

/*
==============
BG_ResetForcedStances
==============
*/
void BG_ResetForcedStances(playerState_s *ps)
{
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 

  p_pm_flags = &ps->pm_flags;
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 2u);
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(p_pm_flags, ACTIVE, 3u);
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(p_pm_flags, ACTIVE, 4u);
}

/*
==============
BG_SetKnockbackFlag
==============
*/
void BG_SetKnockbackFlag(playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8825, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0x29u);
}

/*
==============
BG_SetLinkedToAnimFlag
==============
*/
void BG_SetLinkedToAnimFlag(playerState_s *ps, const PMoveFlagsMP flag, bool enable)
{
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8891, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_MANTLE_UP_WEAPON_DOWN|0x80) && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    p_pm_flags = &ps->pm_flags;
    if ( enable )
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(p_pm_flags, GameModeFlagValues::ms_mpValue, flag);
    else
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(p_pm_flags, GameModeFlagValues::ms_mpValue, flag);
  }
}

/*
==============
BG_SetOnWallAnimFlag
==============
*/
void BG_SetOnWallAnimFlag(playerState_s *ps, bool enable)
{
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8836, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_MANTLE_UP_WEAPON_UP|0x80) && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    p_pm_flags = &ps->pm_flags;
    if ( enable )
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(p_pm_flags, GameModeFlagValues::ms_mpValue, 0x3Eu);
    else
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(p_pm_flags, GameModeFlagValues::ms_mpValue, 0x3Eu);
  }
}

/*
==============
BG_UpdateControlLockForInterract
==============
*/
void BG_UpdateControlLockForInterract(playerState_s *ps, const usercmd_s *cmd)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11307, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11308, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|0x80) && (cmd->buttons & 0x8000000000i64) != 0 )
  {
    if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 138, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&ps->otherFlags, ACTIVE, 0x2Eu);
  }
}

/*
==============
BG_UpdateViewAngles_ClampDefault
==============
*/
void BG_UpdateViewAngles_ClampDefault(playerState_s *ps, const usercmd_s *cmd)
{
  __int128 v2; 
  const dvar_t *v3; 
  __int128 unsignedInt; 
  const dvar_t *v7; 
  __int128 v8; 
  int pm_type; 
  bool v10; 
  char v11; 
  base_vec3_t<int> *p_angles; 
  int v13; 
  signed __int64 v14; 
  bool v15; 
  vec3_t *p_delta_angles; 
  __int128 v18; 
  __int128 v21; 
  __int16 groundRefEnt; 
  int v23; 
  int v27; 
  double v28; 
  __int64 v32; 
  __int64 v33; 

  v3 = DCONST_DVARMPFLT_player_view_pitch_up;
  if ( !DCONST_DVARMPFLT_player_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_up") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  unsignedInt = v3->current.unsignedInt;
  v7 = DCONST_DVARMPFLT_player_view_pitch_down;
  if ( !DCONST_DVARMPFLT_player_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_down") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.unsignedInt;
  v10 = 0;
  if ( GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, ACTIVE, 0) )
  {
    pm_type = ps->pm_type;
    if ( pm_type == 1 || pm_type == 8 )
      v10 = 1;
  }
  v11 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) || v10;
  if ( ps->vehicleState.entity != 2047 )
    v11 = 1;
  if ( GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, ACTIVE, 2u) )
  {
    unsignedInt = LODWORD(FLOAT_85_0);
    v8 = LODWORD(FLOAT_85_0);
  }
  p_angles = &cmd->angles;
  v13 = 0;
  v14 = (char *)&cmd->angles - (char *)&ps->delta_angles;
  v15 = 1;
  p_delta_angles = &ps->delta_angles;
  _XMM8 = 0i64;
  do
  {
    if ( !v15 )
    {
      LODWORD(v33) = 3;
      LODWORD(v32) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 38, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    *(double *)&v2 = MSG_UnpackSignedFloat(*(_DWORD *)((char *)p_delta_angles->v + v14), 180.0, 0x14u);
    v18 = v2;
    *(float *)&v18 = *(float *)&v2 * 0.0027777778;
    __asm { vroundss xmm7, xmm8, xmm0, 1 }
    if ( (unsigned int)v13 >= 3 )
    {
      LODWORD(v33) = 3;
      LODWORD(v32) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    *(float *)&v18 = (float)((float)((float)((float)(*(float *)&v18 - *(float *)&_XMM7) * 1.0) + (float)(0.0027777778 * p_delta_angles->v[0])) - *(float *)&_XMM2) * 360.0;
    v21 = v18;
    if ( !v11 && !v13 )
    {
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x2Au) )
        goto LABEL_32;
      groundRefEnt = ps->groundRefEnt;
      if ( groundRefEnt != 2047 )
      {
        if ( groundRefEnt )
          goto LABEL_32;
      }
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
        __debugbreak();
      if ( BG_IsPlayerZeroGWalking(ps) )
      {
LABEL_32:
        if ( *(float *)&v18 <= *(float *)&v8 )
        {
          if ( *(float *)&v18 < COERCE_FLOAT(unsignedInt ^ _xmm) )
          {
            v27 = base_vec3_t<int>::operator[](p_angles, 0);
            v28 = BG_UsrCmdUnpackAngle(v27);
            *vec3_t::operator[](&ps->delta_angles, 0) = COERCE_FLOAT(unsignedInt ^ _xmm) - *(float *)&v28;
            vec3_t::operator[](&ps->delta_angles, 0);
            __asm
            {
              vroundss xmm1, xmm8, xmm3, 1
              vroundss xmm2, xmm8, xmm1, 1
            }
            *vec3_t::operator[](&ps->delta_angles, 0) = (float)((float)((float)(unsigned __int16)(int)*(float *)&_XMM1 * 0.000015258789) - *(float *)&_XMM2) * 360.0;
            v21 = unsignedInt ^ (unsigned int)_xmm;
          }
        }
        else
        {
          v23 = base_vec3_t<int>::operator[](p_angles, 0);
          MSG_UnpackSignedFloat(v23, 180.0, 0x14u);
          __asm
          {
            vroundss xmm3, xmm8, xmm0, 1
            vroundss xmm2, xmm8, xmm1, 1
            vroundss xmm3, xmm8, xmm2, 1
          }
          p_delta_angles->v[0] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM2).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
          v21 = v8;
        }
      }
    }
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    *((_QWORD *)&v2 + 1) = *((_QWORD *)&v21 + 1);
    if ( (unsigned int)v13 >= 3 )
    {
      LODWORD(v33) = 3;
      LODWORD(v32) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    p_delta_angles[24].v[1] = (float)((float)(*(float *)&v21 * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    p_delta_angles = (vec3_t *)((char *)p_delta_angles + 4);
    v15 = (unsigned int)++v13 < 3;
  }
  while ( v13 < 3 );
}

/*
==============
BG_crandom
==============
*/
float BG_crandom(unsigned int *pHoldrand)
{
  unsigned int v1; 

  v1 = 214013 * *pHoldrand + 2531011;
  *pHoldrand = v1;
  return (float)((float)((float)(v1 >> 17) * 0.000030517578) * 2.0) - 1.0;
}

/*
==============
BG_flrand
==============
*/
float BG_flrand(float min, float max, unsigned int *pHoldrand)
{
  unsigned int v3; 

  v3 = 214013 * *pHoldrand + 2531011;
  *pHoldrand = v3;
  return (float)((float)((float)(v3 >> 17) * (float)(max - min)) * 0.000030517578) + min;
}

/*
==============
BG_irand
==============
*/
__int64 BG_irand(int min, int max, unsigned int *pHoldrand)
{
  unsigned __int64 v3; 

  v3 = 214013 * *pHoldrand + 2531011;
  *pHoldrand = v3;
  return min + (unsigned int)((__int64)((max - min) * (v3 >> 17)) >> 15);
}

/*
==============
BG_rand
==============
*/
__int64 BG_rand(unsigned int *pHoldrand)
{
  unsigned int v1; 

  v1 = 214013 * *pHoldrand + 2531011;
  *pHoldrand = v1;
  return v1 >> 17;
}

/*
==============
BG_random
==============
*/
float BG_random(unsigned int *pHoldrand)
{
  unsigned int v1; 

  v1 = 214013 * *pHoldrand + 2531011;
  *pHoldrand = v1;
  return (float)(v1 >> 17) * 0.000030517578;
}

/*
==============
BG_srand
==============
*/
void BG_srand(unsigned int *pHoldrand)
{
  *pHoldrand = 159719620 - 570470319 * *pHoldrand;
}

/*
==============
BG_srand_timeangles
==============
*/
__int64 BG_srand_timeangles(const int commandTime, const vec3_t *viewangles)
{
  _XMM2 = 0i64;
  __asm { vroundss xmm0, xmm2, xmm1, 1 }
  if ( precision <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12970, ASSERT_TYPE_ASSERT, "(precision > 0.0f)", (const char *)&queryFormat, "precision > 0.0f") )
    __debugbreak();
  if ( dword_14BB4768C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14BB4768C);
    if ( dword_14BB4768C == -1 )
    {
      invPrecision = 1.0 / precision;
      j__Init_thread_footer(&dword_14BB4768C);
    }
  }
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  return (unsigned int)(159719620 - 570470319 * (commandTime + (int)*(float *)&_XMM3));
}

/*
==============
BgScopedCrouchAndProneBlendMapUpdate
==============
*/
void BgScopedCrouchAndProneBlendMapUpdate(pmove_t *pm, pml_t *pml)
{
  __int128 v2; 
  playerState_s *ps; 
  __int128 v6; 
  const dvar_t *v11; 
  float value; 
  __int128 frametime_low; 
  __int128 v17; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6604, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6604, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1188, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  *(double *)&v2 = MSG_UnpackUnsignedFloat(ps->weapCommon.crouchProneBlendMap, 1.0, 0xCu);
  v6 = v2;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
  {
    *(float *)&_XMM6 = FLOAT_1_0;
  }
  else
  {
    _XMM0 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u);
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_0_5);
    __asm { vblendvps xmm6, xmm1, xmm6, xmm2 }
  }
  v11 = DCONST_DVARFLT_player_crouchProneBlendTransitionTime;
  if ( !DCONST_DVARFLT_player_crouchProneBlendTransitionTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_crouchProneBlendTransitionTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  value = v11->current.value;
  if ( value <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6620, ASSERT_TYPE_ASSERT, "(interpolationTimeSeconds > 1.0E-6)", (const char *)&queryFormat, "interpolationTimeSeconds > ZERO_EPSILON") )
    __debugbreak();
  frametime_low = LODWORD(pml->frametime);
  *(float *)&frametime_low = pml->frametime / value;
  if ( *(float *)&v6 >= *(float *)&_XMM6 )
  {
    v17 = v6;
    *(float *)&v17 = *(float *)&v6 - (float)(pml->frametime / value);
    _XMM0 = v17;
    __asm { vmaxss  xmm0, xmm0, xmm6; value }
  }
  else
  {
    *(float *)&frametime_low = *(float *)&frametime_low + *(float *)&v6;
    _XMM0 = frametime_low;
    __asm { vminss  xmm0, xmm0, xmm6 }
  }
  ps->weapCommon.crouchProneBlendMap = MSG_PackUnsignedFloat(*(float *)&_XMM0, 1.0, 0xCu);
}

/*
==============
ClampAngleDeltaOverTime
==============
*/

float __fastcall ClampAngleDeltaOverTime(double angleDelta, float curAngle, double minAngle, double maxAngle, float angleRate)
{
  __int128 v6; 
  float v10; 
  __int128 v12; 
  __int128 v14; 
  __int128 v17; 

  v6 = *(_OWORD *)&maxAngle;
  _XMM6 = *(_OWORD *)&angleDelta;
  if ( *(float *)&minAngle > *(float *)&maxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4193, ASSERT_TYPE_ASSERT, "(minAngle <= maxAngle)", (const char *)&queryFormat, "minAngle <= maxAngle") )
    __debugbreak();
  if ( angleRate < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4194, ASSERT_TYPE_ASSERT, "(angleRate >= 0.0f)", (const char *)&queryFormat, "angleRate >= 0.0f") )
    __debugbreak();
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm2, 1 }
  v10 = (float)((float)(curAngle * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  v12 = *(_OWORD *)&minAngle;
  *(float *)&v12 = *(float *)&minAngle - v10;
  _XMM2 = v12;
  if ( (float)(v10 - *(float *)&v6) <= 0.001 )
  {
    if ( *(float *)&v12 <= 0.001 )
      LODWORD(_XMM3) = 0;
    else
      __asm { vminss  xmm3, xmm2, xmm10 }
  }
  else
  {
    v14 = v6;
    *(float *)&v14 = *(float *)&v6 - v10;
    _XMM1 = v14;
    __asm { vmaxss  xmm3, xmm1, xmm0 }
  }
  if ( COERCE_FLOAT(_XMM3 & _xmm) > 0.0 )
    return *(float *)&angleDelta + *(float *)&_XMM3;
  if ( COERCE_FLOAT(LODWORD(angleDelta) & _xmm) > 0.0 )
  {
    v17 = *(_OWORD *)&angleDelta;
    *(float *)&v17 = *(float *)&angleDelta + v10;
    _XMM0 = v17;
    if ( (float)(*(float *)&_XMM6 + v10) <= *(float *)&v6 )
    {
      __asm
      {
        vcmpltss xmm0, xmm0, xmm9
        vblendvps xmm0, xmm6, xmm2, xmm0
      }
    }
    else
    {
      *(float *)&angleDelta = *(float *)&v6 - v10;
    }
  }
  return *(float *)&angleDelta;
}

/*
==============
pmove_t::OnPMoveSingleEnd
==============
*/
void pmove_t::OnPMoveSingleEnd(pmove_t *this, pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  playerState_s *v7; 
  playerState_s *v8; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 
  const WeaponDef *v11; 
  __int64 v12; 
  int *p_weaponState; 
  playerState_s *v14; 
  const dvar_t *v15; 
  float value; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  double v21; 
  unsigned int v22; 
  const dvar_t *v23; 
  vec3_t outOrigin; 

  Sys_ProfBeginNamedEvent(0xFF808080, "OnPMoveSingleEnd");
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&this->ps->eFlags, ACTIVE, 0xAu);
  ps = this->ps;
  if ( ps->pm_type != 6 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xFu) )
  {
    v7 = this->ps;
    if ( (v7->weapState[0].weaponState & 0xFFFFFFEF) == 0 || BG_PlayerLastWeaponHand(pm->weaponMap, v7) >= WEAPON_HAND_LEFT && (this->ps->weapState[1].weaponState & 0xFFFFFFEF) == 0 )
    {
      if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11072, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
        __debugbreak();
      v8 = pm->ps;
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11072, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, v8);
      v10 = BG_UsingAlternate(v8);
      v11 = BG_WeaponDef(CurrentWeaponForPlayer, v10);
      if ( !v11->requireLockonToFire || (v8->weapCommon.weapLockFlags & 2) != 0 )
      {
        if ( v11->lockonSupported )
        {
          if ( (v8->weapCommon.weapLockFlags & 0x12) == 18 )
          {
            BG_AddPredictableEventToPlayerstate(EV_TARGET_TOO_CLOSE_HINT, 0, pm->cmd.serverTime, pm->weaponMap, pm->ps);
            goto LABEL_26;
          }
          if ( (v8->weapCommon.weapLockFlags & 0x20) != 0 )
          {
            BG_AddPredictableEventToPlayerstate(EV_TARGET_NOT_ENOUGH_CLEARANCE_HINT, 0, pm->cmd.serverTime, pm->weaponMap, pm->ps);
            goto LABEL_26;
          }
        }
        if ( !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&v8->linkFlags, ACTIVE, 2u) )
        {
          v12 = 0i64;
          p_weaponState = &v8->weapState[0].weaponState;
          while ( *(p_weaponState - 3) > 0 || *p_weaponState != 16 )
          {
            ++v12;
            p_weaponState += 20;
            if ( v12 >= 2 )
              goto LABEL_26;
          }
          GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&this->ps->eFlags, ACTIVE, 0xAu);
        }
      }
    }
  }
LABEL_26:
  BG_FovLerp_Update(this);
  v14 = this->ps;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 13133, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v15 = DCONST_DVARFLT_player_viewMotionImpactSpeedThreshold;
  if ( !DCONST_DVARFLT_player_viewMotionImpactSpeedThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_viewMotionImpactSpeedThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  value = v15->current.value;
  if ( !this->initialCall && value <= pml->impactSpeed )
  {
    v17 = v14->velocity.v[0] - pml->previous_velocity.v[0];
    v18 = v14->velocity.v[1] - pml->previous_velocity.v[1];
    v19 = v14->velocity.v[2] - pml->previous_velocity.v[2];
    v20 = (float)(v18 * v18) + (float)(v17 * v17);
    if ( (float)(value * value) <= (float)((float)(v19 * v19) + v20) )
    {
      v21 = I_fclamp(fsqrt(v20), 0.0, 300.0);
      v22 = MSG_PackUnsignedFloat(*(float *)&v21, 300.0, 8u);
      BG_AddPredictableEventToPlayerstate(EV_MOVEMENT_IMPACT, v22, this->cmd.serverTime, this->weaponMap, v14);
    }
  }
  if ( !pml->ranSlopeUpdate )
    PM_SlopeWorldmodel_Update(pm, pml);
  v23 = DCONST_DVARINT_bg_slope_debug;
  if ( !DCONST_DVARINT_bg_slope_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_slope_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.integer == this->ps->clientNum && !pm->isExtrapolation && !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
  {
    BG_GetPlayerEyePosition(pm->weaponMap, pm->ps, &outOrigin, pm->m_bgHandler);
    ((void (__fastcall *)(const BgHandler *, vec3_t *))pm->m_bgHandler->DebugSphereAll)(pm->m_bgHandler, &outOrigin);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_Accelerate
==============
*/

void __fastcall PM_Accelerate(pmove_t *pm, const pml_t *pml, const vec3_t *wishdir, double wishspeed, float accel)
{
  float v8; 
  playerState_s *ps; 
  const dvar_t *v10; 
  __int128 v12; 
  float v16; 
  float v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __int128 v27; 
  vec3_t vec; 

  v8 = *(float *)&wishspeed;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2472, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2472, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !PM_GameInterface_Accelerate(pm, pml, wishdir, *(float *)&wishspeed, accel) )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
      goto LABEL_19;
    v10 = DCONST_DVARMPBOOL_player_altAcceleration;
    if ( !DCONST_DVARMPBOOL_player_altAcceleration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_altAcceleration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
    {
LABEL_19:
      v16 = ps->velocity.v[1];
      v17 = *(float *)&wishspeed * wishdir->v[0];
      v18 = *(_OWORD *)&wishspeed;
      *(float *)&v18 = *(float *)&wishspeed * wishdir->v[1];
      vec.v[0] = ps->velocity.v[0];
      v19 = ps->velocity.v[2];
      v20 = *(float *)&wishspeed * wishdir->v[2];
      vec.v[1] = v16;
      vec.v[2] = v19;
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
        WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &vec);
      v21 = *(float *)&v18 - vec.v[1];
      v22 = v20 - vec.v[2];
      v23 = v17 - vec.v[0];
      *(float *)&v18 = fsqrt((float)((float)(v21 * v21) + (float)(v23 * v23)) + (float)(v22 * v22));
      _XMM3 = v18;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
      }
      v27 = LODWORD(accel);
      *(float *)&v27 = (float)(accel * pml->frametime) * v8;
      _XMM1 = v27;
      __asm { vminss  xmm4, xmm1, xmm3 }
      ps->velocity.v[0] = (float)((float)(v23 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM4) + ps->velocity.v[0];
      ps->velocity.v[1] = (float)((float)(v21 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM4) + ps->velocity.v[1];
      ps->velocity.v[2] = (float)((float)(v22 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM4) + ps->velocity.v[2];
    }
    else
    {
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2488, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x16u) )
      {
        _XMM0 = 0i64;
        if ( (float)(*(float *)&wishspeed - (float)((float)((float)(ps->velocity.v[1] * wishdir->v[1]) + (float)(wishdir->v[0] * ps->velocity.v[0])) + (float)(ps->velocity.v[2] * wishdir->v[2]))) > 0.0 )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_stopspeed, "stopspeed");
          v12 = LODWORD(accel);
          __asm { vmaxss  xmm2, xmm0, xmm9 }
          *(float *)&v12 = (float)(accel * pml->frametime) * *(float *)&_XMM2;
          _XMM0 = v12;
          __asm { vminss  xmm3, xmm0, xmm6 }
          ps->velocity.v[0] = (float)(*(float *)&_XMM3 * wishdir->v[0]) + ps->velocity.v[0];
          ps->velocity.v[1] = (float)(*(float *)&_XMM3 * wishdir->v[1]) + ps->velocity.v[1];
          ps->velocity.v[2] = (float)(*(float *)&_XMM3 * wishdir->v[2]) + ps->velocity.v[2];
        }
      }
    }
  }
}

/*
==============
PM_AddEvent
==============
*/
void PM_AddEvent(pmove_t *pm, const entity_event_t newEvent)
{
  BG_AddPredictableEventToPlayerstate(newEvent, 0, pm->cmd.serverTime, pm->weaponMap, pm->ps);
}

/*
==============
PM_AddTouchEnt
==============
*/
void PM_AddTouchEnt(pmove_t *pm, int entityNum, PM_ToucherFlags toucherFlag)
{
  __int64 v3; 
  int numtouch; 
  int v7; 
  __int16 *touchents; 

  v3 = entityNum;
  if ( entityNum != 2046 )
  {
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 364, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    numtouch = pm->numtouch;
    if ( numtouch != 32 )
    {
      v7 = 0;
      if ( numtouch <= 0 )
      {
LABEL_10:
        if ( (unsigned int)(v3 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v3, "signed", v3) )
          __debugbreak();
        pm->touchents[pm->numtouch] = v3;
        pm->toucherflags[pm->numtouch++] |= toucherFlag;
      }
      else
      {
        touchents = pm->touchents;
        while ( *touchents != (_DWORD)v3 )
        {
          ++v7;
          ++touchents;
          if ( v7 >= numtouch )
            goto LABEL_10;
        }
        pm->toucherflags[v7] |= toucherFlag;
      }
    }
  }
}

/*
==============
PM_AddTraceTouchEnt
==============
*/
void PM_AddTraceTouchEnt(const trace_t *const traceResults, pmove_t *const pm)
{
  int EntityHitId; 
  int numtouch; 
  int v6; 
  __int16 *touchents; 

  if ( !traceResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 335, ASSERT_TYPE_ASSERT, "(traceResults)", (const char *)&queryFormat, "traceResults") )
    __debugbreak();
  if ( pm )
  {
    if ( traceResults->startsolid )
    {
      EntityHitId = Trace_GetEntityHitId(traceResults);
      if ( EntityHitId != 2046 )
      {
        numtouch = pm->numtouch;
        if ( numtouch != 32 )
        {
          v6 = 0;
          if ( numtouch <= 0 )
          {
LABEL_12:
            pm->touchents[pm->numtouch] = truncate_cast<short,int>(EntityHitId);
            pm->toucherflags[pm->numtouch++] |= 1u;
          }
          else
          {
            touchents = pm->touchents;
            while ( *touchents != EntityHitId )
            {
              ++v6;
              ++touchents;
              if ( v6 >= numtouch )
                goto LABEL_12;
            }
            pm->toucherflags[v6] |= 1u;
          }
        }
      }
    }
    if ( traceResults->allsolid )
      pm->m_flags |= 1u;
  }
}

/*
==============
PM_AirMove
==============
*/
void PM_AirMove(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  float forwardmove; 
  __int128 v6; 
  __int128 v7; 
  usercmd_s *p_cmd; 
  usercmd_s *v9; 
  __int64 v10; 
  double v11; 
  float v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v18; 
  __int128 v19; 
  __int128 v23; 
  BgGroundState *ground; 
  float frametime; 
  double BoundsHeight; 
  float v30; 
  double BoundsRadius; 
  const SuitDef *SuitDef; 
  usercmd_s cmd; 
  Bounds bounds; 
  trace_t results; 

  Sys_ProfBeginNamedEvent(0xFF808080, "PM_AirMove");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3076, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3076, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !WorldUpReferenceFramePM::IsLockedTransitionActive(&pm->refFrame, pm->ps) )
  {
    PM_Friction(pm, pml);
    forwardmove = (float)pm->cmd.forwardmove;
    v7 = 0i64;
    *(float *)&v7 = (float)pm->cmd.rightmove;
    v6 = v7;
    p_cmd = &pm->cmd;
    v9 = &cmd;
    v10 = 2i64;
    do
    {
      *(__m256i *)&v9->buttons = *(__m256i *)&p_cmd->buttons;
      *(__m256i *)(&v9->angles.xy + 1) = *(__m256i *)(&p_cmd->angles.xy + 1);
      *(__m256i *)&v9->weapon.attachmentVariationIndices[1] = *(__m256i *)&p_cmd->weapon.attachmentVariationIndices[1];
      *(_OWORD *)&v9->offHand.weaponIdx = *(_OWORD *)&p_cmd->offHand.weaponIdx;
      v9 = (usercmd_s *)((char *)v9 + 128);
      *(_OWORD *)&v9[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_cmd->offHand.weaponAttachments[2];
      p_cmd = (usercmd_s *)((char *)p_cmd + 128);
      --v10;
    }
    while ( v10 );
    v9->buttons = p_cmd->buttons;
    v11 = PM_CmdScale(ps, &cmd);
    v12 = *(float *)&v11;
    WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &pml->forward);
    WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &pml->right);
    v13 = LODWORD(pml->forward.v[0]);
    v14 = v13;
    *(float *)&v14 = fsqrt((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(pml->forward.v[1] * pml->forward.v[1])) + (float)(pml->forward.v[2] * pml->forward.v[2]));
    _XMM4 = v14;
    __asm
    {
      vcmpless xmm0, xmm4, xmm6
      vblendvps xmm1, xmm4, xmm7, xmm0
    }
    pml->forward.v[0] = *(float *)&v13 * (float)(1.0 / *(float *)&_XMM1);
    pml->forward.v[1] = (float)(1.0 / *(float *)&_XMM1) * pml->forward.v[1];
    pml->forward.v[2] = (float)(1.0 / *(float *)&_XMM1) * pml->forward.v[2];
    v18 = LODWORD(pml->right.v[0]);
    v19 = v18;
    *(float *)&v19 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)(pml->right.v[1] * pml->right.v[1])) + (float)(pml->right.v[2] * pml->right.v[2]));
    _XMM4 = v19;
    __asm
    {
      vcmpless xmm0, xmm4, xmm6
      vblendvps xmm1, xmm4, xmm7, xmm0
    }
    pml->right.v[0] = *(float *)&v18 * (float)(1.0 / *(float *)&_XMM1);
    pml->right.v[1] = (float)(1.0 / *(float *)&_XMM1) * pml->right.v[1];
    *(float *)&_XMM4 = (float)(1.0 / *(float *)&_XMM1) * pml->right.v[2];
    pml->right.v[2] = *(float *)&_XMM4;
    *(float *)&v18 = (float)(forwardmove * pml->forward.v[0]) + (float)(*(float *)&v6 * pml->right.v[0]);
    v23 = v6;
    *(float *)&v23 = (float)(*(float *)&v6 * pml->right.v[1]) + (float)(forwardmove * pml->forward.v[1]);
    *(float *)&_XMM4 = (float)(*(float *)&_XMM4 * *(float *)&v6) + (float)(forwardmove * pml->forward.v[2]);
    pml->wishdir.v[1] = *(float *)&v23;
    pml->wishdir.v[2] = *(float *)&_XMM4;
    *(float *)&v23 = fsqrt((float)((float)(*(float *)&v23 * *(float *)&v23) + (float)(*(float *)&v18 * *(float *)&v18)) + (float)(*(float *)&_XMM4 * *(float *)&_XMM4));
    _XMM3 = v23;
    __asm
    {
      vcmpless xmm0, xmm3, xmm6
      vblendvps xmm1, xmm3, xmm7, xmm0
    }
    pml->wishdir.v[0] = *(float *)&v18 * (float)(1.0 / *(float *)&_XMM1);
    pml->wishdir.v[1] = (float)(1.0 / *(float *)&_XMM1) * pml->wishdir.v[1];
    pml->wishdir.v[2] = (float)(1.0 / *(float *)&_XMM1) * pml->wishdir.v[2];
    PM_Accelerate(pm, pml, &pml->wishdir, *(float *)&v23 * v12, 1.0);
    ground = pm->ground;
    if ( ground->groundPlane )
      PM_ClipVelocityOverClip(NULL, &ps->velocity, &ground->trace.normal, NULL, 0.001, &ps->velocity);
    if ( BG_IsPushAffectingAirMovement(ps) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPONSTATES_NUM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3137, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_PUSH ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_PUSH )") )
        __debugbreak();
      frametime = pml->frametime;
      ps->velocity.v[0] = (float)(frametime * ps->pushVector.v[0]) + ps->velocity.v[0];
      ps->velocity.v[1] = (float)(frametime * ps->pushVector.v[1]) + ps->velocity.v[1];
      ps->velocity.v[2] = (float)(frametime * ps->pushVector.v[2]) + ps->velocity.v[2];
    }
    PM_UpdatePlayerCollision(pm, pml, 1, 1, 0, 1);
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) && ps->pm_type < 7 && !BG_Pmove_PlayerPronePossible(pm) )
    {
      BoundsHeight = BG_Suit_GetBoundsHeight(ps, PM_EFF_STANCE_DUCKED);
      v30 = *(float *)&BoundsHeight;
      BoundsRadius = BG_Suit_GetBoundsRadius(ps);
      bounds.midPoint.v[0] = vec3_origin.v[0];
      bounds.midPoint.v[1] = vec3_origin.v[1];
      bounds.midPoint.v[2] = (float)(v30 * 0.5) + 0.0;
      bounds.halfSize.v[0] = *(float *)&BoundsRadius;
      bounds.halfSize.v[1] = *(float *)&BoundsRadius;
      bounds.halfSize.v[2] = v30 * 0.5;
      BgTrace::LegacyTrace(pm->m_trace, pm, &results, &ps->origin, &ps->origin, &bounds, ps->clientNum, pm->tracemask & 0xFDFFBFFF);
      if ( !results.allsolid )
      {
        SuitDef = BG_GetSuitDef(ps->suitIndex);
        if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3153, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
          __debugbreak();
        ps->viewHeightTarget = SuitDef->viewheight_crouch;
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 1u);
        BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_CROUCH, 0, pm->cmd.serverTime, pm->weaponMap, ps);
      }
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      BG_UpdateMovementDir(pm, pml, 1);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_AnyAttackButtonPressed
==============
*/
bool PM_AnyAttackButtonPressed(pmove_t *pm)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 317, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 317, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return (pm->cmd.buttons & 1) != 0 || BG_PlayerDualWielding(ps) && (pm->cmd.buttons & 0x20000) != 0;
}

/*
==============
PM_ApplyCollisionAvoid
==============
*/
void PM_ApplyCollisionAvoid(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  float v5; 
  float v6; 
  __int128 v7; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  vec3_t vec; 
  vec3_t v22; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_FIRING) )
  {
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2172, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    ps = pm->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2172, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (pm->tracemask & 0x2004000) != 0 )
    {
      v5 = pml->forward.v[1];
      vec.v[0] = pml->forward.v[0];
      v6 = pml->forward.v[2];
      vec.v[1] = v5;
      vec.v[2] = v6;
      WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &vec);
      v7 = LODWORD(vec.v[1]);
      *(float *)&v7 = fsqrt((float)((float)(*(float *)&v7 * *(float *)&v7) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]));
      _XMM3 = v7;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm10, xmm0
      }
      vec.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM0);
      vec.v[1] = vec.v[1] * (float)(1.0 / *(float *)&_XMM0);
      v11 = pml->right.v[0];
      vec.v[2] = vec.v[2] * (float)(1.0 / *(float *)&_XMM0);
      *(float *)&_XMM0 = pml->right.v[1];
      v22.v[0] = v11;
      v12 = pml->right.v[2];
      v22.v[1] = *(float *)&_XMM0;
      v22.v[2] = v12;
      WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &v22);
      v13 = LODWORD(v22.v[1]);
      *(float *)&v13 = fsqrt((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(v22.v[0] * v22.v[0])) + (float)(v22.v[2] * v22.v[2]));
      _XMM3 = v13;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm10, xmm0
      }
      v17 = _mm_cvtepi32_ps((__m128i)(unsigned int)pm->cmd.avoidForward).m128_f32[0] * 0.0099999998;
      v18 = _mm_cvtepi32_ps((__m128i)(unsigned int)pm->cmd.avoidRight).m128_f32[0] * 0.0099999998;
      v19 = (float)((float)(v22.v[1] * (float)(1.0 / *(float *)&_XMM0)) * v18) + (float)(v17 * vec.v[1]);
      v20 = v17 * vec.v[2];
      *(float *)&v13 = v22.v[2] * (float)(1.0 / *(float *)&_XMM0);
      ps->velocity.v[0] = (float)((float)((float)(v22.v[0] * (float)(1.0 / *(float *)&_XMM0)) * v18) + (float)(v17 * vec.v[0])) + ps->velocity.v[0];
      ps->velocity.v[1] = v19 + ps->velocity.v[1];
      ps->velocity.v[2] = (float)((float)(*(float *)&v13 * v18) + v20) + ps->velocity.v[2];
    }
  }
}

/*
==============
PM_CanStand
==============
*/
bool PM_CanStand(playerState_s *ps, pmove_t *pm, const bool ignoreCurrentStance)
{
  Physics_WorldId v6; 
  BgTrace *m_trace; 
  playerState_s *v8; 
  Physics_WorldId v9; 
  int contentMask; 
  int passEntityNum; 
  const Bounds *bounds; 
  trace_t results; 

  if ( !ignoreCurrentStance && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u) )
    return 1;
  v6 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
  m_trace = pm->m_trace;
  v8 = pm->ps;
  v9 = v6;
  contentMask = pm->tracemask & 0xFDFFBFFF;
  passEntityNum = ps->clientNum;
  bounds = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DEFAULT);
  BgTrace::LegacyTraceHandler(m_trace, v9, &results, &ps->origin, &ps->origin, bounds, passEntityNum, contentMask, v8);
  return !results.allsolid;
}

/*
==============
PM_CanStartSprint
==============
*/
bool PM_CanStartSprint(pmove_t *pm, const pml_t *pml, bool ignoreReloadChecks)
{
  playerState_s *ps; 
  playerState_s *v7; 
  bool v8; 
  const SuitDef *SuitDef; 
  const dvar_t *v10; 
  const SuitDef *v11; 
  bool v12; 
  bool v14; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1502, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1502, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v7 = pm->ps;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1464, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = BG_IsQASBoth(v7, QAS_STATE_NONE) && v7->sprintState.sprintRestore != 0;
  SuitDef = BG_GetSuitDef(v7->suitIndex);
  v10 = DVARBOOL_auto_sprint_enabled;
  v11 = SuitDef;
  if ( !DVARBOOL_auto_sprint_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "auto_sprint_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v12 = v10->current.enabled && (float)v11->viewheight_stand == v7->viewHeightCurrent && (pm->cmd.buttons & 0x4000000000000i64) != 0;
  if ( !v8 && ((pm->cmd.buttons & 2) == 0 && !v12 || v7->sprintState.sprintButtonUpRequired) || PM_SprintStartInterferingButtons(pm, pm->cmd.forwardmove, pm->cmd.buttons, pm->cmd.serverTime) )
    return 0;
  v14 = PM_CanStartSprintStateCheck(pm, pml, ignoreReloadChecks);
  if ( !v14 && BG_Skydive_CanQueueSprint(ps) )
    PM_SetSprintRestore(pm, ps, 1, 0, 3.4028235e38);
  return v14;
}

/*
==============
PM_CanStartSprintStateCheck
==============
*/
bool PM_CanStartSprintStateCheck(pmove_t *pm, const pml_t *pml, bool ignoreReloadChecks)
{
  playerState_s *ps; 
  shellshock_parms_t *ShellshockParms; 
  const Weapon *ViewmodelWeapon; 
  PlayerHandIndex v8; 
  int WeaponHand; 
  __int64 v10; 
  __int64 v11; 
  int *i; 
  __int64 v13; 
  bool v15; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1340, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1340, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x19u) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u) )
    return 0;
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) && !Slide_IsInSprintDelay(ps, pm->cmd.serverTime) )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Eu) )
      return 0;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x15u) )
    {
      ShellshockParms = BG_GetShellshockParms(ps->shellshockIndex);
      if ( ShellshockParms )
      {
        if ( ShellshockParms->movement.breakSprint )
          return 0;
      }
    }
    if ( PM_IsInAir(pm) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) || BG_IsPlayerInExecution(ps) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Au) || ps->pm_type > 1u || !PM_CanStand(ps, pm, 0) || BG_Weapon_UsingAutoFireOnSwitchWeapon(pm->weaponMap, ps) || !PM_Demeanor_CanSprint(pm) )
      return 0;
    if ( BG_CanSprintReload(ps) )
      return PM_DoesSprintMeterTestPass(pm);
    if ( ignoreReloadChecks )
      return PM_DoesSprintMeterTestPass(pm);
    ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
    v15 = BG_UsingAlternate(ps);
    v8 = WEAPON_HAND_DEFAULT;
    WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
    v10 = WeaponHand;
    if ( WeaponHand < 0 )
      return PM_DoesSprintMeterTestPass(pm);
    v11 = 0i64;
    for ( i = &ps->weapState[0].weaponState; ; i += 20 )
    {
      v13 = v11;
      if ( (unsigned int)(*i - 18) <= 3 && (BG_GetReloadType(ViewmodelWeapon, v15) == RELOAD_TYPE_SEGMENTED && (unsigned int)(*i - 20) > 1 || !PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, v8, pm->m_bgHandler)) )
        break;
      ++v8;
      ++v11;
      if ( v13 >= v10 )
        return PM_DoesSprintMeterTestPass(pm);
    }
  }
  PM_SetSprintRestore(pm, ps, 1, 0, 3.4028235e38);
  return 0;
}

/*
==============
PM_CanStartSuperSprint
==============
*/
bool PM_CanStartSuperSprint(pmove_t *pm)
{
  playerState_s *ps; 

  if ( (pm->cmd.buttons & 0x800000000000i64) == 0 )
    return 0;
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1526, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x35u);
}

/*
==============
PM_CheckDuck
==============
*/
void PM_CheckDuck(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const SuitDef *SuitDef; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  Bounds *v6; 
  float v7; 
  float v8; 
  unsigned __int64 buttons; 
  const dvar_t *v10; 
  Bounds *v11; 
  int Int_Internal_DebugName; 
  double Float_Internal_DebugName; 
  Bounds *v14; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  char v16; 
  playerState_s *v17; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *v18; 
  const dvar_t *v19; 
  BgTrace *m_trace; 
  int contentMask; 
  int passEntityNum; 
  const Bounds *bounds; 
  bool v24; 
  bool v25; 
  bool v26; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *v27; 
  float ProneViewHeight; 
  float viewHeightCurrent; 
  entity_event_t v30; 
  int v31; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  unsigned int v35; 
  bool v36; 
  BgWeaponMap *weaponMap; 
  int serverTime; 
  entity_event_t v39; 
  unsigned __int64 v40; 
  int viewHeightTarget; 
  int viewheight_laststand; 
  int viewheight_crouch; 
  __int32 v44; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v45; 
  __int32 v46; 
  EffectiveStance v47; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v48; 
  char *fmt; 
  bool v50; 
  bool v51; 
  char v53; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6779, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6780, ASSERT_TYPE_ASSERT, "(pm->bounds)", (const char *)&queryFormat, "pm->bounds") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6782, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6785, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  Suit_Validate_ViewHeights("current", SuitDef);
  pm->m_flags &= ~0x80u;
  p_pm_flags = &ps->pm_flags;
  if ( ps->pm_type == 5 )
  {
    v6 = pm->bounds;
    *(_QWORD *)v6->midPoint.v = 0i64;
    v7 = SPECTATOR_TOP;
    v6->midPoint.v[2] = (float)(SPECTATOR_TOP + SPECTATOR_BOTTOM) * 0.5;
    v8 = SPECTATOR_RADIUS;
    v6->halfSize.v[0] = SPECTATOR_RADIUS;
    v6->halfSize.v[1] = v8;
    v6->halfSize.v[2] = (float)(v7 - SPECTATOR_BOTTOM) * 0.5;
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(p_pm_flags, ACTIVE, 0);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
    buttons = pm->cmd.buttons;
    if ( (buttons & 0x40) != 0 )
      pm->cmd.buttons = buttons & 0xFFFFFFFFFFFFFFBFui64;
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 2u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 3u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 4u);
    *(_QWORD *)&ps->viewHeightTarget = 0i64;
    goto LABEL_200;
  }
  v51 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0);
  *pm->bounds = *BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DEFAULT);
  if ( ps->pm_type == 7 )
  {
    ps->viewHeightTarget = SuitDef->viewheight_dead;
    *pm->bounds = *BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_PRONE);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 2u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 3u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 4u);
LABEL_199:
    PM_ViewHeightAdjust(pm, pml);
    goto LABEL_200;
  }
  if ( BG_IsPlayerSwimming(ps) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6840, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
      __debugbreak();
    v10 = DCONST_DVARBOOL_player_alwaysUseSpaceCapsuleAndViewHeightWhileSwimming;
    if ( !DCONST_DVARBOOL_player_alwaysUseSpaceCapsuleAndViewHeightWhileSwimming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_alwaysUseSpaceCapsuleAndViewHeightWhileSwimming") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled || Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_player_spaceEnabled, "player_spaceEnabled") )
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_player_spaceCapsuleHeight, "player_spaceCapsuleHeight");
      v14 = pm->bounds;
      v14->midPoint.v[2] = *(float *)&Float_Internal_DebugName * 0.5;
      v14->halfSize.v[2] = *(float *)&Float_Internal_DebugName * 0.5;
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARMPINT_player_spaceViewHeight, "player_spaceViewHeight");
    }
    else
    {
      v11 = pm->bounds;
      v11->midPoint.v[2] = 15.0;
      v11->halfSize.v[2] = 15.0;
      Int_Internal_DebugName = SuitDef->viewheight_swim;
    }
    ps->viewHeightTarget = Int_Internal_DebugName;
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 4u);
    p_eFlags = &ps->eFlags;
    goto LABEL_31;
  }
  if ( BG_IsPlayerZeroG(ps) )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 4u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
    BG_ResetForcedStances(ps);
    if ( !BG_IsPlayerZeroGWalking(ps) )
    {
      ps->viewHeightTarget = SuitDef->viewheight_stand;
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 3u);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
      goto LABEL_199;
    }
  }
  v16 = 0;
  v53 = 0;
  if ( BG_IsVehicleActive(ps) )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) && ps->vehicleType == VEH_HELICOPTER && Dvar_GetInt_Internal_DebugName(DVARINT_vehHelicopterControlsAltitude, "vehHelicopterControlsAltitude") == 3 )
    {
      ps->viewHeightTarget = SuitDef->viewheight_stand;
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 4u);
      p_eFlags = &ps->eFlags;
LABEL_31:
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(p_eFlags, ACTIVE, 3u);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
      BG_ResetForcedStances(ps);
      goto LABEL_199;
    }
    v16 = 1;
    v53 = 1;
  }
  if ( !BGVehicles::IsRemoteDrivingVehicle(ps) )
  {
    v17 = pm->ps;
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6728, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v18 = &v17->pm_flags;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v17->pm_flags, ACTIVE, 0) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v17->pm_flags, ACTIVE, 1u) || BG_ContextMount_IsActive(v17) )
    {
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v17->pm_flags, ACTIVE, 0x14u) && !BG_IsRemoteTurretActive(v17) )
      {
        v19 = DVARBOOL_auto_sprint_enabled;
        if ( !DVARBOOL_auto_sprint_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "auto_sprint_enabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v19);
        if ( !v19->current.enabled || (pm->cmd.buttons & 0x4000000000002i64) != 0x4000000000000i64 )
          goto LABEL_57;
      }
      if ( PM_IsInAir(pm) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(v18, ACTIVE, 0x13u) )
      {
LABEL_57:
        m_trace = pm->m_trace;
        contentMask = pm->tracemask & 0xFDFFBFFF;
        passEntityNum = ps->clientNum;
        bounds = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DEFAULT);
        BgTrace::LegacyTrace(m_trace, pm, &results, &ps->origin, &ps->origin, bounds, passEntityNum, contentMask);
        v16 = v53;
        if ( !results.allsolid )
          v16 = 1;
      }
    }
  }
  v50 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u);
  v24 = v50 && (ps->mantleState.flags & 2) != 0;
  v25 = 0;
  if ( pm->cmd.serverTime == ps->slideState.slideEndTime && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u) )
    v25 = !PM_CanStand(ps, pm, 1);
  v26 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u);
  v27 = &ps->pm_flags;
  if ( v26 )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(v27, ACTIVE, 0) || (ProneViewHeight = (float)BG_Suit_GetProneViewHeight(SuitDef), viewHeightCurrent = ps->viewHeightCurrent, viewHeightCurrent >= ProneViewHeight) && viewHeightCurrent < (float)SuitDef->viewheight_crouch )
    {
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_proneToSprintActive, "proneToSprintActive") )
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0x37u);
    }
  }
  else
  {
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(v27, ACTIVE, 0x37u);
  }
  if ( v25 || v24 )
  {
    ps->viewHeightTarget = SuitDef->viewheight_crouch;
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&ps->eFlags, ACTIVE, 3u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 4u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 1u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
    v30 = EV_STANCE_FORCE_CROUCH;
    goto LABEL_198;
  }
  if ( v16 && (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u) || BG_ContextMount_IsActive(ps)) )
  {
    ps->viewHeightTarget = SuitDef->viewheight_stand;
    BG_ResetForcedStances(ps);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 4u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 3u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
    v30 = EV_STANCE_FORCE_STAND;
LABEL_198:
    BG_AddPredictableEventToPlayerstate(v30, 0, pm->cmd.serverTime, pm->weaponMap, ps);
    goto LABEL_199;
  }
  v31 = 0;
  if ( BG_Turret_IsUsingNonRemoteTurret(ps) )
  {
    BG_ResetForcedStances(ps);
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 5u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 6u) )
    {
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 6u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 5u) )
      {
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 1u);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
        goto LABEL_153;
      }
      v32 = &ps->pm_flags;
LABEL_88:
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(v32, ACTIVE, 0);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
      goto LABEL_153;
    }
LABEL_101:
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
    goto LABEL_153;
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x10u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xFu) && !PM_IsPlayerFrozenByWeapon(pm->weaponMap, ps) && ps->vehicleState.entity == 2047 && !BG_IsRemoteTurretActive(ps) )
  {
    if ( ps->pm_type == 1 )
    {
      PM_HandleDisabledStances(pm, pml);
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
        goto LABEL_101;
      v33 = pm->cmd.buttons;
      if ( (v33 & 0x40) != 0 )
        goto LABEL_101;
      v32 = &ps->pm_flags;
      if ( (v33 & 0x80u) == 0i64 )
        goto LABEL_88;
LABEL_98:
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(v32, ACTIVE, 0);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 1u);
      goto LABEL_153;
    }
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
    {
      BG_ResetForcedStances(ps);
      goto LABEL_101;
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
    {
      v34 = pm->cmd.buttons;
      if ( (v34 & 0xC0) != 0 )
      {
        pm->cmd.buttons = v34 & 0xFFFFFFFFFFFFFF3Fui64;
        BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_STAND, 0, pm->cmd.serverTime, pm->weaponMap, ps);
      }
    }
    PM_HandleDisabledStances(pm, pml);
    if ( (pm->cmd.buttons & 0x40) != 0 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xFu) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 4u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 3u) )
    {
      if ( ps->groundEntityNum != 2047 )
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 2u);
      if ( BG_Pmove_PlayerProneAllowed(pm) )
      {
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
        if ( !Slide_IsInSprintDelay(ps, pm->cmd.serverTime) )
          *(_QWORD *)&ps->sprintState.sprintRestore = 0i64;
        if ( (pm->cmd.buttons & 0x100000000000000i64) != 0 )
          GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
        goto LABEL_153;
      }
      if ( ps->groundEntityNum == 2047 )
        goto LABEL_153;
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
      {
        v36 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u);
        fmt = (char *)ps;
        weaponMap = pm->weaponMap;
        serverTime = pm->cmd.serverTime;
        v35 = 3;
        if ( !v36 )
        {
          v39 = EV_STANCE_FORCE_STAND;
LABEL_152:
          BG_AddPredictableEventToPlayerstate(v39, v35, serverTime, weaponMap, (playerState_s *)fmt);
          goto LABEL_153;
        }
LABEL_151:
        v39 = EV_STANCE_FORCE_CROUCH;
        goto LABEL_152;
      }
      v35 = 3;
LABEL_150:
      fmt = (char *)ps;
      weaponMap = pm->weaponMap;
      serverTime = pm->cmd.serverTime;
      goto LABEL_151;
    }
    if ( SLOBYTE(pm->cmd.buttons) >= 0 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 2u) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 4u) )
    {
      v40 = pm->cmd.buttons;
      if ( (v40 & 0x80u) == 0i64 && (v40 & 0x40) == 0 )
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 4u);
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 2u) )
      {
        if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 3u) || v50 )
          goto LABEL_153;
        BgTrace::LegacyTrace(pm->m_trace, pm, &results, &ps->origin, &ps->origin, pm->bounds, ps->clientNum, pm->tracemask & 0xFDFFBFFF);
        if ( !results.allsolid )
        {
          GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
          goto LABEL_153;
        }
        if ( (pm->cmd.buttons & 0x400) != 0 )
          goto LABEL_153;
        v35 = 1;
        goto LABEL_150;
      }
      BgTrace::LegacyTrace(pm->m_trace, pm, &results, &ps->origin, &ps->origin, pm->bounds, ps->clientNum, pm->tracemask & 0xFDFFBFFF);
      if ( !results.allsolid )
      {
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
        goto LABEL_153;
      }
      *pm->bounds = *BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DUCKED);
      BgTrace::LegacyTrace(pm->m_trace, pm, &results, &ps->origin, &ps->origin, pm->bounds, ps->clientNum, pm->tracemask & 0xFDFFBFFF);
      if ( !results.allsolid )
      {
        v32 = &ps->pm_flags;
        goto LABEL_98;
      }
      if ( (pm->cmd.buttons & 0x400) == 0 )
        BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_PRONE, 1u, pm->cmd.serverTime, pm->weaponMap, ps);
    }
    else
    {
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 3u);
      if ( PM_IsInAir(pm) )
        goto LABEL_153;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
      {
        *pm->bounds = *BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DUCKED);
        BgTrace::LegacyTrace(pm->m_trace, pm, &results, &ps->origin, &ps->origin, pm->bounds, ps->clientNum, pm->tracemask & 0xFDFFBFFF);
        if ( !results.allsolid )
        {
          v32 = &ps->pm_flags;
          goto LABEL_98;
        }
        if ( (pm->cmd.buttons & 0x400) == 0 )
          BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_PRONE, 2u, pm->cmd.serverTime, pm->weaponMap, ps);
      }
      else
      {
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 1u);
        if ( !Slide_IsInSprintDelay(ps, pm->cmd.serverTime) )
          *(_QWORD *)&ps->sprintState.sprintRestore = 0i64;
      }
    }
  }
LABEL_153:
  if ( !ps->viewHeightLerpTime && !BG_ContextMount_IsActive(ps) )
  {
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
    {
      if ( ps->viewHeightTarget != SuitDef->viewheight_laststand )
      {
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
          v31 = 1;
        ps->viewHeightTarget = SuitDef->viewheight_laststand;
        goto LABEL_176;
      }
    }
    else
    {
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
      {
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
        {
          if ( ps->viewHeightTarget == SuitDef->viewheight_stand )
          {
            ps->viewHeightTarget = SuitDef->viewheight_crouch;
            goto LABEL_181;
          }
          if ( ps->viewHeightTarget == BG_Suit_GetProneViewHeight(SuitDef) )
            goto LABEL_181;
          ps->viewHeightTarget = BG_Suit_GetProneViewHeight(SuitDef);
        }
        else
        {
          viewHeightTarget = ps->viewHeightTarget;
          viewheight_laststand = SuitDef->viewheight_laststand;
          if ( viewHeightTarget == BG_Suit_GetProneViewHeight(SuitDef) )
          {
            ps->viewHeightTarget = SuitDef->viewheight_crouch;
          }
          else
          {
            if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u) )
            {
              viewheight_crouch = SuitDef->viewheight_crouch;
            }
            else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) && Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_enableSprintViewHeight, "enableSprintViewHeight") )
            {
              viewheight_crouch = BG_GetViewHeightSprint(ps, SuitDef);
            }
            else
            {
              viewheight_crouch = SuitDef->viewheight_stand;
            }
            ps->viewHeightTarget = viewheight_crouch;
            if ( viewHeightTarget != viewheight_laststand )
              goto LABEL_181;
          }
        }
LABEL_176:
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
        {
          pm->m_flags |= 0x80u;
          if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_playerasm_disable_cancel_torso_stance_change, "playerasm_disable_cancel_torso_stance_change") )
            BG_ClearTorsoAnim(pm->m_bgHandler, ps);
          if ( v31 )
            BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_ENTER_LAST_STAND, 0, 1, &pml->holdrand);
        }
        goto LABEL_181;
      }
      Slide_SetSlideViewHeight(pm);
    }
  }
LABEL_181:
  PM_ViewHeightAdjust(pm, pml);
  v44 = PM_GetEffectiveStance(ps) - 1;
  v45 = &ps->eFlags;
  if ( v44 )
  {
    v46 = v44 - 1;
    if ( v46 )
    {
      if ( v46 == 1 )
      {
        GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(v45, ACTIVE, 4u);
        GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 3u);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
        v47 = PM_EFF_STANCE_LASTSTANDCRAWL;
      }
      else
      {
        GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(v45, ACTIVE, 3u);
        GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 4u);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
        v47 = PM_EFF_STANCE_DEFAULT;
      }
    }
    else
    {
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(v45, ACTIVE, 3u);
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 4u);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 1u);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
      v47 = PM_EFF_STANCE_DUCKED;
    }
  }
  else
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(v45, ACTIVE, 4u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 3u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
    v47 = PM_EFF_STANCE_PRONE;
  }
  *pm->bounds = *BG_Suit_GetBounds(ps->suitIndex, v47);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
    *pm->bounds = *BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DUCKED);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && !v51 )
    PM_CheckDuck_InitProne(pm);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x36u) )
  {
    v48 = &ps->eFlags;
    if ( (float)SuitDef->viewheight_crouch > ps->viewHeightCurrent )
    {
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(v48, ACTIVE, 4u);
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 3u);
    }
    else
    {
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(v48, ACTIVE, 3u);
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 4u);
    }
  }
LABEL_200:
  BgScopedCrouchAndProneBlendMapUpdate(pm, pml);
}

/*
==============
PM_CheckDuck_InitProne
==============
*/
void PM_CheckDuck_InitProne(pmove_t *pm)
{
  playerState_s *ps; 
  float *v; 
  BgTrace *m_trace; 
  int tracemask; 
  BgTrace *v6; 
  float fraction; 
  BgTrace *v8; 
  double v9; 
  double v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  unsigned int contentMask; 
  unsigned int contentMaska; 
  vec3_t end; 
  vec3_t v18; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6482, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6483, ASSERT_TYPE_ASSERT, "(pm->bounds)", (const char *)&queryFormat, "pm->bounds") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6485, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6487, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::PRONE ))", "%s\n\t%08x %08x", "ps->pm_flags.TestFlag( PMoveFlagsCommon::PRONE )", ps->pm_flags.m_flags[0], ps->pm_flags.m_flags[1]) )
    __debugbreak();
  if ( (pm->cmd.forwardmove || pm->cmd.rightmove) && !BG_UsingSniperScope(pm->weaponMap, ps) && ps->vehicleState.entity == 2047 )
  {
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0xEu);
    PM_ExitAimDownSight(pm);
  }
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u) )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10587, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0xEu);
  }
  v = ps->origin.v;
  m_trace = pm->m_trace;
  contentMask = pm->tracemask & 0xFDFFBFFF;
  *(_QWORD *)end.v = *(_QWORD *)ps->origin.v;
  end.v[2] = ps->origin.v[2] + 10.0;
  BgTrace::LegacyTrace(m_trace, pm, &results, &ps->origin, &end, pm->bounds, ps->clientNum, contentMask);
  tracemask = pm->tracemask;
  v6 = pm->m_trace;
  end.v[0] = (float)((float)(end.v[0] - *v) * results.fraction) + *v;
  end.v[1] = (float)((float)(end.v[1] - ps->origin.v[1]) * results.fraction) + ps->origin.v[1];
  end.v[2] = (float)((float)(end.v[2] - ps->origin.v[2]) * results.fraction) + ps->origin.v[2];
  BgTrace::LegacyTrace(v6, pm, &results, &end, &ps->origin, pm->bounds, ps->clientNum, tracemask & 0xFDFFBFFF);
  fraction = results.fraction;
  ps->origin.v[0] = (float)((float)(ps->origin.v[0] - end.v[0]) * results.fraction) + end.v[0];
  ps->origin.v[1] = (float)((float)(ps->origin.v[1] - end.v[1]) * fraction) + end.v[1];
  ps->origin.v[2] = (float)((float)(ps->origin.v[2] - end.v[2]) * fraction) + end.v[2];
  if ( (LODWORD(ps->viewangles.v[1]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6509, ASSERT_TYPE_ASSERT, "(!IS_NAN( ps->viewangles[YAW] ))", (const char *)&queryFormat, "!IS_NAN( ps->viewangles[YAW] )") )
    __debugbreak();
  ps->proneDirection = ps->viewangles.v[1];
  v8 = pm->m_trace;
  contentMaska = pm->tracemask & 0xFDFFBFFF;
  v18.v[0] = *v;
  v18.v[1] = ps->origin.v[1];
  v18.v[2] = ps->origin.v[2] - 0.25;
  BgTrace::LegacyTrace(v8, pm, &results, &ps->origin, &v18, pm->bounds, ps->clientNum, contentMaska);
  if ( results.startsolid || results.fraction >= 1.0 )
  {
    LODWORD(v9) = 0;
  }
  else
  {
    if ( results.normal.v[0] == 0.0 && results.normal.v[1] == 0.0 && results.normal.v[2] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6519, ASSERT_TYPE_ASSERT, "(trace.normal[0] || trace.normal[1] || trace.normal[2])", (const char *)&queryFormat, "trace.normal[0] || trace.normal[1] || trace.normal[2]") )
      __debugbreak();
    v9 = PitchForYawOnNormal(ps->proneDirection, &results.normal);
  }
  ps->proneDirectionPitch = *(float *)&v9;
  v10 = AngleDelta(*(const float *)&v9, ps->viewangles.v[0]);
  v11 = DCONST_DVARFLT_player_prone_view_pitch_down;
  if ( !DCONST_DVARFLT_player_prone_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_down") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( *(float *)&v10 >= COERCE_FLOAT(v11->current.integer ^ _xmm) )
  {
    v13 = DCONST_DVARFLT_player_prone_view_pitch_up;
    if ( !DCONST_DVARFLT_player_prone_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_up") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( *(float *)&v10 <= v13->current.value )
    {
      ps->proneTorsoPitch = ps->proneDirectionPitch;
    }
    else
    {
      v14 = DCONST_DVARFLT_player_prone_view_pitch_up;
      if ( !DCONST_DVARFLT_player_prone_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_up") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      ps->proneTorsoPitch = v14->current.value + ps->viewangles.v[0];
    }
  }
  else
  {
    v12 = DCONST_DVARFLT_player_prone_view_pitch_down;
    if ( !DCONST_DVARFLT_player_prone_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_down") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    ps->proneTorsoPitch = ps->viewangles.v[0] - v12->current.value;
  }
}

/*
==============
PM_CheckKnockbackFlag
==============
*/
void PM_CheckKnockbackFlag(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8811, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8811, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x29u) && !PM_IsInAir(pm) )
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x29u);
}

/*
==============
PM_CheckStairsMove
==============
*/
void PM_CheckStairsMove(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  bool v5; 
  bool v6; 
  BgGroundState *ground; 
  unsigned int v8; 
  BgGroundState *v9; 
  const dvar_t *v10; 
  float v11; 
  vec3_t outUp; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10686, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10686, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  p_pm_flags = &ps->pm_flags;
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(p_pm_flags, ACTIVE, 7u);
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(p_pm_flags, ACTIVE, 8u);
  v5 = PM_IsInAir(pm);
  v6 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 6u);
  if ( !pm->ground && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10695, ASSERT_TYPE_ASSERT, "( pm->ground ) != ( nullptr )", "%s != %s\n\t%p, %p", "pm->ground", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !v5 && !v6 )
  {
    ground = pm->ground;
    if ( ground->groundPlane )
    {
      if ( (ground->trace.surfaceFlags & 0x200) != 0 )
      {
        v8 = 8;
LABEL_20:
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(p_pm_flags, ACTIVE, v8);
        return;
      }
      WorldUpReferenceFrame::GetUpVector(&pm->refFrame, &outUp);
      v9 = pm->ground;
      v10 = DCONST_DVARFLT_player_slope_minAngle;
      v11 = (float)((float)(outUp.v[1] * v9->trace.normal.v[1]) + (float)(outUp.v[0] * v9->trace.normal.v[0])) + (float)(outUp.v[2] * v9->trace.normal.v[2]);
      if ( !DCONST_DVARFLT_player_slope_minAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_minAngle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v11 < cosf_0(v10->current.value * 0.017453292) )
      {
        v8 = 7;
        goto LABEL_20;
      }
    }
  }
}

/*
==============
PM_ClipVelocity
==============
*/
void PM_ClipVelocity(const vec3_t *in, const vec3_t *normal, vec3_t *out)
{
  PM_ClipVelocityOverClip(NULL, in, normal, NULL, 0.001, out);
}

/*
==============
PM_ClipVelocityOverClip
==============
*/
void PM_ClipVelocityOverClip(const pmove_t *pm, const vec3_t *in, const vec3_t *normal, const vec3_t *walkableRefUp, const float overclip, vec3_t *out)
{
  const dvar_t *v8; 
  bool v11; 
  __int128 v12; 
  float v13; 
  __int128 v14; 
  float v15; 
  float v16; 
  const vec3_t *v20; 
  float v21; 
  float v22; 
  float v23; 
  __int64 v24; 

  v8 = DCONST_DVARBOOL_playerCharacterCollisionJumpCornerFix;
  v11 = 1;
  if ( !DCONST_DVARBOOL_playerCharacterCollisionJumpCornerFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionJumpCornerFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled && pm )
    v11 = !BG_IsInAir(pm->ps, 0);
  v24 = 0i64;
  v23 = 0.0;
  if ( walkableRefUp )
  {
    if ( v11 )
    {
      v12 = LODWORD(normal->v[0]);
      *(float *)&v12 = (float)((float)(normal->v[0] * walkableRefUp->v[0]) + (float)(walkableRefUp->v[1] * normal->v[1])) + (float)(walkableRefUp->v[2] * normal->v[2]);
      if ( *(float *)&v12 <= 0.69999999 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v12 - -1.0) & _xmm) >= 0.001 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(v12 & _xmm) - 1.0) & _xmm) < 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 422, ASSERT_TYPE_ASSERT, "(!Vec3IsParallel( normal, *walkableRefUp ))", (const char *)&queryFormat, "!Vec3IsParallel( normal, *walkableRefUp )") )
          __debugbreak();
        v13 = (float)(COERCE_FLOAT(v12 ^ _xmm) * walkableRefUp->v[0]) + normal->v[0];
        v14 = v12 ^ _xmm;
        v15 = (float)(*(float *)&v14 * walkableRefUp->v[1]) + normal->v[1];
        v16 = (float)(*(float *)&v14 * walkableRefUp->v[2]) + normal->v[2];
        *(float *)&v14 = fsqrt((float)((float)(v15 * v15) + (float)(v13 * v13)) + (float)(v16 * v16));
        _XMM1 = v14;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm9, xmm0
        }
        *(float *)&_XMM1 = 1.0 / *(float *)&_XMM0;
        v20 = (const vec3_t *)&v23;
        v21 = v16 * (float)(1.0 / *(float *)&_XMM0);
        *(float *)&v14 = (float)(v15 * (float)(1.0 / *(float *)&_XMM0)) * in->v[1];
        *(float *)&v24 = v15 * (float)(1.0 / *(float *)&_XMM0);
        *(float *)&_XMM0 = (float)(v13 * (float)(1.0 / *(float *)&_XMM0)) * in->v[0];
        v23 = v13 * *(float *)&_XMM1;
        *(float *)&_XMM1 = (float)(v16 * *(float *)&_XMM1) * in->v[2];
        *((float *)&v24 + 1) = v21;
        if ( (float)((float)(*(float *)&v14 + *(float *)&_XMM0) + *(float *)&_XMM1) > 0.0 )
          v20 = normal;
        normal = v20;
      }
    }
  }
  v22 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(in->v[0] * normal->v[0]) + (float)(normal->v[1] * in->v[1])) + (float)(normal->v[2] * in->v[2])) & _xmm) * overclip) - (float)((float)((float)(in->v[0] * normal->v[0]) + (float)(normal->v[1] * in->v[1])) + (float)(normal->v[2] * in->v[2]));
  out->v[0] = (float)(v22 * normal->v[0]) + in->v[0];
  out->v[1] = (float)(v22 * normal->v[1]) + in->v[1];
  out->v[2] = (float)(v22 * normal->v[2]) + in->v[2];
}

/*
==============
PM_CmdHasCollisionAvoid
==============
*/
_BOOL8 PM_CmdHasCollisionAvoid(const usercmd_s *cmd)
{
  return Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_FIRING) && (cmd->avoidForward || cmd->avoidRight);
}

/*
==============
PM_CmdHasMinimumSprintMovement
==============
*/
char PM_CmdHasMinimumSprintMovement(const playerState_s *ps, const usercmd_s *cmd)
{
  const SuitDef *SuitDef; 
  bool v4; 
  const dvar_t *v5; 
  float v7; 

  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 840, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  v4 = !SuitDef->isMovementCameraIndependent;
  v5 = DCONST_DVARINT_player_sprintForwardMinimum;
  if ( v4 )
  {
    if ( !DCONST_DVARINT_player_sprintForwardMinimum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintForwardMinimum") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( cmd->forwardmove >= v5->current.integer )
      return 1;
  }
  else
  {
    v7 = fsqrt((float)(cmd->rightmove * cmd->rightmove + cmd->forwardmove * cmd->forwardmove));
    if ( !DCONST_DVARINT_player_sprintForwardMinimum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintForwardMinimum") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v7 >= (float)v5->current.integer )
      return 1;
  }
  return 0;
}

/*
==============
PM_CmdScale
==============
*/
float PM_CmdScale(playerState_s *ps, usercmd_s *cmd)
{
  int v4; 
  int v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  int pm_type; 
  const dvar_t *v12; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2639, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = abs8(cmd->rightmove);
  v5 = abs8(cmd->forwardmove);
  v6 = fsqrt((float)(cmd->rightmove * cmd->rightmove + cmd->forwardmove * cmd->forwardmove));
  if ( v6 > 0.000001 )
  {
    if ( v5 > v4 )
      v4 = v5;
    v7 = (float)v4 / v6;
  }
  else
  {
    v7 = 0.0;
  }
  v9 = (float)((float)ps->speed * 0.0078740157) * v7;
  v8 = v9;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xBu) )
    v8 = v9 * 0.40000001;
  pm_type = ps->pm_type;
  if ( pm_type == 2 )
    return v8 * 3.0;
  if ( pm_type == 3 )
    return v8 * 6.0;
  if ( pm_type != 5 )
    return v8;
  v12 = DCONST_DVARFLT_player_spectateSpeedScale;
  if ( !DCONST_DVARFLT_player_spectateSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_spectateSpeedScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  return v8 * v12->current.value;
}

/*
==============
PM_CmdScaleForStance
==============
*/
float PM_CmdScaleForStance(const pmove_t *pm)
{
  playerState_s *ps; 
  const SuitDef *SuitDef; 
  const dvar_t *v4; 
  const SuitDef *v6; 
  const dvar_t *v7; 
  float v8; 
  const SuitDef *v9; 
  const dvar_t *v10; 
  float v11; 
  int ProneViewHeight; 
  float ViewHeightLerp; 
  int viewheight_crouch; 
  int v15; 
  float v16; 
  __int32 v17; 
  __int32 v18; 
  const SuitDef *v19; 
  const dvar_t *v20; 

  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2712, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2714, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x37u) )
  {
    v4 = DCONST_DVARFLT_proneToSprintSpeedScale;
    if ( !DCONST_DVARFLT_proneToSprintSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "proneToSprintSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    return v4->current.value;
  }
  else
  {
    v6 = BG_GetSuitDef(ps->suitIndex);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2671, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    v7 = DCONST_DVARMPFLT_player_crouchSpeedScale;
    if ( !DCONST_DVARMPFLT_player_crouchSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_crouchSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    v8 = v6->player_crouchSpeedScale * v7->current.value;
    v9 = BG_GetSuitDef(ps->suitIndex);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2682, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    v10 = DCONST_DVARMPFLT_player_proneSpeedScale;
    if ( !DCONST_DVARMPFLT_player_proneSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_proneSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v11 = v9->player_proneSpeedScale * v10->current.value;
    ProneViewHeight = BG_Suit_GetProneViewHeight(SuitDef);
    ViewHeightLerp = PM_GetViewHeightLerp(pm, SuitDef->viewheight_crouch, ProneViewHeight);
    if ( ViewHeightLerp == 0.0 )
    {
      viewheight_crouch = SuitDef->viewheight_crouch;
      v15 = BG_Suit_GetProneViewHeight(SuitDef);
      v16 = PM_GetViewHeightLerp(pm, v15, viewheight_crouch);
      if ( v16 == 0.0 )
      {
        if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2737, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
          __debugbreak();
        v17 = PM_GetEffectiveStance(pm->ps) - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            if ( v18 == 1 )
            {
              v19 = BG_GetSuitDef(ps->suitIndex);
              if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2693, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
                __debugbreak();
              v20 = DCONST_DVARFLT_player_lastStandCrawlSpeedScale;
              if ( !DCONST_DVARFLT_player_lastStandCrawlSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_lastStandCrawlSpeedScale") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v20);
              return v19->player_lastStandCrawlSpeedScale * v20->current.value;
            }
            else
            {
              return FLOAT_1_0;
            }
          }
          else
          {
            return v8;
          }
        }
        else
        {
          return v11;
        }
      }
      else
      {
        return (float)((float)(1.0 - v16) * v11) + (float)(v16 * v8);
      }
    }
    else
    {
      return (float)((float)(1.0 - ViewHeightLerp) * v8) + (float)(ViewHeightLerp * v11);
    }
  }
}

/*
==============
PM_CmdScale_Walk
==============
*/
void PM_CmdScale_Walk(const pmove_t *pm, const pml_t *pml, const usercmd_s *cmd, float *outForwardScale, float *outSideScale)
{
  __int128 v6; 
  __int128 v7; 
  playerState_s *ps; 
  double WeaponOrOffhandAdsFrac; 
  bool v13; 
  int v14; 
  int v15; 
  float v16; 
  float v17; 
  int speed; 
  float v19; 
  float v20; 
  int pm_type; 
  float v22; 
  const dvar_t *v23; 
  double SpeedScale; 
  int damageTimer; 
  float v26; 
  float v27; 
  const dvar_t *v28; 
  float value; 
  const dvar_t *v30; 
  float v31; 
  float v32; 
  float v33; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v35; 
  bool v36; 
  float v37; 
  double v38; 
  const usercmd_s *v39; 
  float v40; 
  double v41; 
  float v42; 
  double v43; 
  float v44; 
  __m128 v45; 
  float v46; 
  float v47; 
  __m128 v48; 
  __m128 v49; 
  float v50; 
  double v51; 
  __m128 v52; 
  float v56; 
  const dvar_t *v57; 
  const char *v58; 
  const dvar_t *v59; 
  float slide_strafe_speed_scale; 
  bool v62; 
  float moveSpeedScaleOut; 
  float adsMoveSpeedScaleOut; 
  const usercmd_s *v65; 
  const pml_t *v66; 
  const SuitDef *SuitDef; 
  vec3_t wishDir; 
  __int128 v69; 
  __int128 v70; 
  __int128 v71; 

  v65 = cmd;
  v66 = pml;
  if ( !outForwardScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2789, ASSERT_TYPE_ASSERT, "(outForwardScale)", (const char *)&queryFormat, "outForwardScale") )
    __debugbreak();
  if ( !outSideScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2790, ASSERT_TYPE_ASSERT, "(outSideScale)", (const char *)&queryFormat, "outSideScale") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2791, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2791, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2796, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  v62 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du);
  v13 = 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
  {
    WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(pm->weaponMap, pm->ps);
    if ( *(float *)&WeaponOrOffhandAdsFrac > 0.0 )
      v13 = 1;
  }
  v71 = _XMM6;
  *outForwardScale = 0.0;
  *outSideScale = 0.0;
  v14 = abs8(cmd->rightmove);
  v15 = abs8(cmd->forwardmove);
  v16 = fsqrt((float)(cmd->rightmove * cmd->rightmove + cmd->forwardmove * cmd->forwardmove));
  if ( v16 > 0.000001 )
  {
    if ( v15 > v14 )
      v14 = v15;
    v17 = (float)v14 / v16;
    if ( v17 > 0.0 )
    {
      speed = ps->speed;
      v70 = v6;
      v69 = v7;
      v20 = (float)speed * (float)(v17 * 0.0078740157);
      v19 = v20;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xBu) || v13 )
        v19 = v20 * 0.40000001;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) || v62 )
        v19 = v19 * PM_SprintScale(ps);
      pm_type = ps->pm_type;
      if ( pm_type == 2 )
      {
        v22 = v19 * 3.0;
      }
      else if ( pm_type == 3 )
      {
        v22 = v19 * 6.0;
      }
      else
      {
        v22 = v19 * PM_CmdScaleForStance(pm);
      }
      if ( BG_IsSuperSprinting(ps) )
      {
        v23 = DCONST_DVARFLT_superSprintSpeedScale;
        if ( !DCONST_DVARFLT_superSprintSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintSpeedScale") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v23);
        v22 = v22 * v23->current.value;
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u) && BG_GameInterface_HasPerk_FastCrouch(ps) )
      {
        SpeedScale = BG_GameInterface_FastCrouch_GetSpeedScale();
        v22 = v22 * *(float *)&SpeedScale;
      }
      damageTimer = ps->damageTimer;
      if ( damageTimer )
      {
        v28 = DCONST_DVARFLT_player_dmgtimer_maxTime;
        if ( !DCONST_DVARFLT_player_dmgtimer_maxTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_dmgtimer_maxTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v28);
        value = v28->current.value;
        if ( value == 0.0 )
        {
          v26 = FLOAT_1_0;
          v27 = FLOAT_1_0;
        }
        else
        {
          v30 = DCONST_DVARFLT_player_dmgtimer_minScale;
          if ( !DCONST_DVARFLT_player_dmgtimer_minScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_dmgtimer_minScale") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v30);
          v31 = v30->current.value / value;
          v26 = FLOAT_1_0;
          v27 = 1.0 - (float)(v31 * (float)damageTimer);
        }
      }
      else
      {
        v26 = FLOAT_1_0;
        v27 = FLOAT_1_0;
      }
      v33 = v22 * v27;
      v32 = v22 * v27;
      CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
      v35 = BG_UsingAlternate(ps);
      BG_GetMoveSpeedScale(pm->weaponMap, ps, CurrentWeaponForPlayer, v35, &moveSpeedScaleOut, &adsMoveSpeedScaleOut);
      v36 = !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xBu) && !v13;
      if ( CurrentWeaponForPlayer->weaponIdx )
      {
        if ( (v37 = moveSpeedScaleOut, moveSpeedScaleOut > 0.0) && v36 || (v37 = adsMoveSpeedScaleOut, adsMoveSpeedScaleOut > 0.0) )
          v32 = v33 * v37;
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x15u) && BG_GetShellshockParms(ps->shellshockIndex)->movement.affect )
        v32 = v32 * 0.40000001;
      v38 = MSG_UnpackUnsignedFloat(ps->moveSpeedScaleMultiplier, 5.0, 0xCu);
      v39 = v65;
      v40 = v32 * *(float *)&v38;
      v41 = Slide_SlideOutSpeedScale(ps, v65->serverTime);
      v42 = v40 * *(float *)&v41;
      v43 = Slide_SlideInSpeedScale(ps, v39->serverTime);
      v44 = v42 * *(float *)&v43;
      v45 = _mm_cvtepi32_ps((__m128i)(unsigned int)v39->rightmove);
      v46 = _mm_cvtepi32_ps((__m128i)(unsigned int)v39->forwardmove).m128_f32[0];
      v47 = (float)(v46 * v66->forward.v[0]) + (float)(v45.m128_f32[0] * v66->right.v[0]);
      v48 = v45;
      v48.m128_f32[0] = (float)(v45.m128_f32[0] * v66->right.v[1]) + (float)(v46 * v66->forward.v[1]);
      v49 = v48;
      v50 = (float)(v45.m128_f32[0] * v66->right.v[2]) + (float)(v46 * v66->forward.v[2]);
      v51 = fsqrt((float)((float)(v49.m128_f32[0] * v49.m128_f32[0]) + (float)(v47 * v47)) + (float)(v50 * v50));
      wishDir.v[0] = v47;
      wishDir.v[1] = v49.m128_f32[0];
      wishDir.v[2] = v50;
      if ( v51 <= 0.000001 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2917, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( Vec3Length( roughWishDir ) )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "Vec3Length( roughWishDir )", DOUBLE_9_999999974752427eN7, v51) )
          __debugbreak();
        v47 = wishDir.v[0];
        v49 = (__m128)LODWORD(wishDir.v[1]);
        v50 = wishDir.v[2];
      }
      v52 = v49;
      v52.m128_f32[0] = fsqrt((float)((float)(v49.m128_f32[0] * v49.m128_f32[0]) + (float)(v47 * v47)) + (float)(v50 * v50));
      _XMM3 = v52;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
      }
      wishDir.v[0] = v47 * (float)(v26 / *(float *)&_XMM0);
      wishDir.v[2] = v50 * (float)(v26 / *(float *)&_XMM0);
      wishDir.v[1] = v49.m128_f32[0] * (float)(v26 / *(float *)&_XMM0);
      *(double *)&_XMM0 = PM_Slope_GetSpeedScale(&wishDir, pm);
      v56 = v44 * *(float *)&_XMM0;
      *outForwardScale = 1.0;
      if ( _mm_cvtepi32_ps((__m128i)(unsigned int)v39->forwardmove).m128_f32[0] > 0.0 && BG_CanJog(pm->weaponMap, ps) )
      {
        v57 = DCONST_DVARFLT_player_jogForwardSpeedScale;
        if ( !DCONST_DVARFLT_player_jogForwardSpeedScale )
        {
          v58 = "player_jogForwardSpeedScale";
          goto LABEL_77;
        }
      }
      else
      {
        if ( (float)v39->forwardmove >= 0.0 )
          goto LABEL_80;
        v57 = DCONST_DVARFLT_player_backSpeedScale;
        if ( !DCONST_DVARFLT_player_backSpeedScale )
        {
          v58 = "player_backSpeedScale";
LABEL_77:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v58) )
            __debugbreak();
        }
      }
      Dvar_CheckFrontendServerThread(v57);
      *outForwardScale = v57->current.value;
LABEL_80:
      *outForwardScale = v56 * *outForwardScale;
      v59 = DCONST_DVARFLT_player_strafeSpeedScale;
      if ( !DCONST_DVARFLT_player_strafeSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_strafeSpeedScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v59);
      slide_strafe_speed_scale = v59->current.value;
      *outSideScale = slide_strafe_speed_scale;
      if ( v62 )
        slide_strafe_speed_scale = SuitDef->slide_strafe_speed_scale;
      *outSideScale = slide_strafe_speed_scale * v56;
      return;
    }
  }
  if ( *outForwardScale != 0.0 )
  {
    __asm { vxorpd  xmm6, xmm6, xmm6 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2810, ASSERT_TYPE_ASSERT, "( *outForwardScale ) == ( 0.0f )", "%s == %s\n\t%g, %g", "*outForwardScale", "0.0f", *outForwardScale, *(double *)&_XMM6) )
      __debugbreak();
    if ( *outSideScale != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2811, ASSERT_TYPE_ASSERT, "( *outSideScale ) == ( 0.0f )", "%s == %s\n\t%g, %g", "*outSideScale", "0.0f", *outSideScale, *(double *)&_XMM6) )
      __debugbreak();
  }
}

/*
==============
PM_DamageScale_Walk
==============
*/
float PM_DamageScale_Walk(int damage_timer)
{
  const dvar_t *v2; 
  float value; 
  const dvar_t *v4; 

  if ( !damage_timer )
    return FLOAT_1_0;
  v2 = DCONST_DVARFLT_player_dmgtimer_maxTime;
  if ( !DCONST_DVARFLT_player_dmgtimer_maxTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_dmgtimer_maxTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  if ( value == 0.0 )
    return FLOAT_1_0;
  v4 = DCONST_DVARFLT_player_dmgtimer_minScale;
  if ( !DCONST_DVARFLT_player_dmgtimer_minScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_dmgtimer_minScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  return 1.0 - (float)((float)(v4->current.value / value) * (float)damage_timer);
}

/*
==============
PM_DeadMove
==============
*/
void PM_DeadMove(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  __int128 v4; 
  __int128 v5; 
  float v7; 

  Sys_ProfBeginNamedEvent(0xFF808080, "PM_DeadMove");
  if ( !pm )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4662, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm", -2i64) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4663, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
  }
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4663, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( pm->ground->walking && !BG_IsPlayerSwimming(ps) )
  {
    v4 = LODWORD(ps->velocity.v[0]);
    v5 = v4;
    *(float *)&v5 = fsqrt((float)((float)(*(float *)&v4 * *(float *)&v4) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(ps->velocity.v[2] * ps->velocity.v[2]));
    _XMM3 = v5;
    v7 = *(float *)&v5 - 15.0;
    if ( v7 > 0.0 )
    {
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm2, xmm0
      }
      ps->velocity.v[0] = *(float *)&v4 * (float)(1.0 / *(float *)&_XMM1);
      ps->velocity.v[1] = (float)(1.0 / *(float *)&_XMM1) * ps->velocity.v[1];
      ps->velocity.v[2] = (float)(1.0 / *(float *)&_XMM1) * ps->velocity.v[2];
      ps->velocity.v[0] = v7 * ps->velocity.v[0];
      ps->velocity.v[1] = v7 * ps->velocity.v[1];
      ps->velocity.v[2] = v7 * ps->velocity.v[2];
    }
    else
    {
      *(_QWORD *)ps->velocity.v = 0i64;
      ps->velocity.v[2] = 0.0;
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_DebugMispredict
==============
*/
void PM_DebugMispredict(const pmove_t *pm, int uniqueId, const char *message)
{
  const dvar_t *v3; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  playerState_s *ps; 
  BgGroundState *ground; 
  BOOL walkable; 
  _BOOL8 isExtrapolation; 
  double v15; 
  double v16; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 
  double v21; 
  bool v22; 
  const char *v23; 
  const char *v24; 

  v3 = DCONST_DVARBOOL_debugMispredict;
  if ( !DCONST_DVARBOOL_debugMispredict && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugMispredict") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    v7 = DCONST_DVARINT_debugMispredictSpecificId;
    if ( !DCONST_DVARINT_debugMispredictSpecificId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugMispredictSpecificId") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.integer <= -1 )
      goto LABEL_13;
    v8 = DCONST_DVARINT_debugMispredictSpecificId;
    if ( !DCONST_DVARINT_debugMispredictSpecificId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugMispredictSpecificId") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.integer == uniqueId )
    {
LABEL_13:
      v9 = DCONST_DVARINT_debugMispredictSpecificThread;
      if ( !DCONST_DVARINT_debugMispredictSpecificThread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugMispredictSpecificThread") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.integer <= -1 )
        goto LABEL_23;
      v10 = DCONST_DVARINT_debugMispredictSpecificThread;
      if ( !DCONST_DVARINT_debugMispredictSpecificThread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugMispredictSpecificThread") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( (v10->current.integer || pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler)) && !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
      {
LABEL_23:
        ps = pm->ps;
        ground = pm->ground;
        walkable = ground->trace.walkable;
        isExtrapolation = pm->isExtrapolation;
        v15 = ground->trace.normal.v[2];
        v16 = ps->velocity.v[2];
        v17 = ps->velocity.v[1];
        v18 = ps->velocity.v[0];
        v19 = ps->origin.v[2];
        v20 = ps->origin.v[1];
        v21 = ps->origin.v[0];
        v22 = !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler);
        v23 = "server";
        v24 = (char *)&queryFormat.fmt + 3;
        if ( !v22 )
          v23 = "client";
        if ( message )
          v24 = message;
        Com_Printf(0, "\nTrack Mispredict: %d %d %s: %f %f %f: %f %f %f: %f %d: %d %s", (unsigned int)uniqueId, (unsigned int)ps->serverTime, v23, v21, v20, v19, v18, v17, v16, v15, walkable, isExtrapolation, v24);
      }
    }
  }
}

/*
==============
PM_DoesSprintMeterTestPass
==============
*/
bool PM_DoesSprintMeterTestPass(pmove_t *pm)
{
  int MaxSprintTime; 
  int v3; 
  const dvar_t *v4; 
  float value; 
  const dvar_t *v6; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1315, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  MaxSprintTime = BG_GetMaxSprintTime(pm->weaponMap, pm->ps);
  v3 = MaxSprintTime;
  if ( MaxSprintTime )
  {
    v4 = DCONST_DVARFLT_player_sprintMinActivationTime;
    if ( !DCONST_DVARFLT_player_sprintMinActivationTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintMinActivationTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    value = v4->current.value;
    if ( (pm->cmd.buttons & 0x800000000000i64) != 0 )
    {
      v6 = DVARFLT_superSprintMinActivationChargePercent;
      if ( !DVARFLT_superSprintMinActivationChargePercent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintMinActivationChargePercent") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      value = (float)((float)v3 * v6->current.value) * 0.001;
    }
    LOBYTE(MaxSprintTime) = PM_GetSprintLeft(pm->weaponMap, pm, pm->cmd.serverTime) >= (int)(float)(value * 1000.0);
  }
  return MaxSprintTime;
}

/*
==============
PM_DropAnimTimers
==============
*/
void PM_DropAnimTimers(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  SuitAnimType SuitAnimIndexFromPlayerState; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  double v10; 
  double v11; 
  int v12; 
  int clientNum; 
  int torsoTimer; 
  int v15; 
  int v16; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9449, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9450, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  ps = pm->ps;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( ps->legsTimer > 0 )
    {
      SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(ps);
      if ( BG_ShouldScaleTimedAnim(ps->legsAnim & 0xFFFFEFFF, SuitAnimIndexFromPlayerState) )
      {
        v6 = ps->origin.v[0] - pml->previous_origin.v[0];
        v7 = ps->origin.v[1] - pml->previous_origin.v[1];
        v8 = ps->origin.v[2] - pml->previous_origin.v[2];
        v9 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8)) * (float)(1.0 / pml->frametime);
        v10 = BG_CalculateDurationIntoAnimFromLegsTimer(ps->legsTimer, ps->legsAnim & 0xFFFFEFFF, SuitAnimIndexFromPlayerState);
        v11 = BG_CalculateAnimRateFromCharacterSpeed(v9, ps->legsAnim & 0xFFFFEFFF, *(float *)&v10, SuitAnimIndexFromPlayerState);
        v12 = (int)(float)((float)(-10 * pml->msec) * *(float *)&v11);
      }
      else
      {
        v12 = -10 * pml->msec;
      }
      ps->legsTimer += v12;
      if ( ps->legsTimer < 0 )
      {
        clientNum = ps->clientNum;
        ps->legsTimer = 0;
        G_DebugPlayerAnimScript_Print(clientNum, "end legs\n");
      }
    }
    torsoTimer = ps->torsoTimer;
    if ( torsoTimer > 0 )
    {
      v15 = torsoTimer - 10 * pml->msec;
      ps->torsoTimer = v15;
      if ( v15 < 0 )
      {
        v16 = ps->clientNum;
        ps->torsoTimer = 0;
        G_DebugPlayerAnimScript_Print(v16, "end torso\n");
      }
    }
  }
}

/*
==============
PM_DropTimers
==============
*/
void PM_DropTimers(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  int pm_time; 
  int msec; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9412, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  pm_time = ps->pm_time;
  if ( pm_time )
  {
    msec = pml->msec;
    if ( msec < pm_time )
    {
      ps->pm_time = pm_time - msec;
    }
    else
    {
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) )
        Jump_ClearState(pm);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0xCu);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0xDu);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x13u);
      ps->pm_time = 0;
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    pml->flinch = ps->flinch;
    ps->flinch = 0;
  }
}

/*
==============
PM_EndSprint
==============
*/
void PM_EndSprint(playerState_s *ps, int serverTime, unsigned __int64 buttons)
{
  char v3; 

  v3 = buttons;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
  {
    if ( BG_IsSuperSprinting(ps) )
      ps->sprintState.lastSuperSprintEnd = serverTime;
    ps->sprintState.sprintDelay = 0;
    ps->sprintState.lastSprintEnd = serverTime;
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x14u);
    if ( (v3 & 2) != 0 )
      ps->sprintState.sprintButtonUpRequired = 1;
  }
}

/*
==============
PM_ExecutionMove
==============
*/
void PM_ExecutionMove(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  playerState_s *v5; 
  bool v6; 
  bool IsPlayerZeroG; 
  bool v8; 
  WorldUpReferenceFramePM *p_refFrame; 
  vec3_t *p_velocity; 
  float frametime; 
  bool performSlideMove; 
  double ForwardContribution; 
  double RightContribution; 
  __int128 vec; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3537, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3537, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  PM_Friction(pm, pml);
  v5 = pm->ps;
  *(vec3_t *)&vec = vec3_origin;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3205, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps", vec) )
    __debugbreak();
  v6 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 0x1Eu);
  IsPlayerZeroG = BG_IsPlayerZeroG(v5);
  v8 = BGMovingPlatforms::IsOnMovingPlatform(v5) != 0;
  if ( !v6 )
  {
    p_refFrame = &pm->refFrame;
LABEL_16:
    WorldUpReferenceFrame::SetUpContribution(p_refFrame, 0.0, (vec3_t *)&vec);
    goto LABEL_17;
  }
  if ( !IsPlayerZeroG && !v8 )
  {
    p_refFrame = &pm->refFrame;
    if ( !pm->refFrame.m_axisAdjusted )
      goto LABEL_16;
  }
  p_refFrame = &pm->refFrame;
LABEL_17:
  *(_QWORD *)&pml->walkForwardScale = 0i64;
  if ( (pm->ground->trace.surfaceFlags & 2) != 0 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xDu) )
  {
    p_velocity = &ps->velocity;
    WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, (float)-ps->gravity * pml->frametime, &ps->velocity);
  }
  else
  {
    p_velocity = &ps->velocity;
  }
  PM_ProjectVelocity(pm, p_velocity, &pm->ground->trace.normal, p_velocity);
  if ( Com_GameMode_SupportsFeature(WEAPONSTATES_NUM) )
  {
    frametime = pml->frametime;
    p_velocity->v[0] = (float)(frametime * ps->pushVector.v[0]) + p_velocity->v[0];
    p_velocity->v[1] = (float)(frametime * ps->pushVector.v[1]) + p_velocity->v[1];
    p_velocity->v[2] = (float)(frametime * ps->pushVector.v[2]) + p_velocity->v[2];
  }
  performSlideMove = 0;
  ForwardContribution = WorldUpReferenceFrame::GetForwardContribution(p_refFrame, p_velocity);
  if ( *(float *)&ForwardContribution != 0.0 || (RightContribution = WorldUpReferenceFrame::GetRightContribution(p_refFrame, p_velocity), *(float *)&RightContribution != 0.0) || pml->impulseFieldVelocity.v[0] != 0.0 || pml->impulseFieldVelocity.v[1] != 0.0 || pml->impulseFieldVelocity.v[2] != 0.0 || PM_CmdHasCollisionAvoid(&pm->cmd) )
    performSlideMove = 1;
  PM_UpdatePlayerCollision(pm, pml, 0, 1, 0, performSlideMove);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    BG_UpdateMovementDir(pm, pml, 0);
}

/*
==============
PM_ExtrapolateMove
==============
*/
void PM_ExtrapolateMove(pmove_t *pm)
{
  playerState_s *ps; 
  int v3; 
  int v4; 
  int v5; 
  const dvar_t *v6; 
  int integer; 
  BgTrace v8; 
  int outMoveTime; 

  Profile_Begin(824);
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12827, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12827, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pm->movingPlatforms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12829, ASSERT_TYPE_ASSERT, "(pm->movingPlatforms)", (const char *)&queryFormat, "pm->movingPlatforms") )
    __debugbreak();
  if ( !pm->vehicles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12830, ASSERT_TYPE_ASSERT, "(pm->vehicles)", (const char *)&queryFormat, "pm->vehicles") )
    __debugbreak();
  if ( PM_SetupMoveCommand(pm, &outMoveTime) )
  {
    BgTrace::BgTrace(&v8);
    v3 = outMoveTime;
    v4 = outMoveTime - ps->commandTime;
    v5 = 0;
    for ( pm->m_trace = &v8; v5 < v4; v5 += integer )
    {
      v6 = DCONST_DVARINT_com_userCmdMaxTimeStep;
      if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      integer = v6->current.integer;
      if ( v3 - ps->commandTime < integer )
        integer = v3 - ps->commandTime;
      pm->cmd.commandTime = ps->commandTime + integer;
      BgPlayerTraceInfo::UpdatePrePmove(pm->m_playerTraceInfo, pm);
      BGMovingPlatformClient::UpdatePrePmove(pm->movingPlatforms, pm);
      PM_ExtrapolateSingle(pm);
      BgPlayerTraceInfo::UpdatePostPmove(pm->m_playerTraceInfo, pm);
      PM_SetPitchValues(ps, pm);
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
PM_ExtrapolateMove_Normal
==============
*/
void PM_ExtrapolateMove_Normal(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const dvar_t *v5; 
  const dvar_t *v6; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12709, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12709, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_IsTurretActive(ps) )
  {
    if ( PM_IsUsingNoCollMovement(pm) )
    {
      PM_PlayerMoveNoCollide(pm, pml);
    }
    else
    {
      if ( ps->pm_type >= 7 )
        PM_DeadMove(pm, pml);
      v5 = DCONST_DVARBOOL_extrap_useGroundTraceOnClient;
      if ( !DCONST_DVARBOOL_extrap_useGroundTraceOnClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "extrap_useGroundTraceOnClient") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( v5->current.enabled && pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
        goto LABEL_22;
      v6 = DCONST_DVARBOOL_extrap_useGroundTraceOnServer;
      if ( !DCONST_DVARBOOL_extrap_useGroundTraceOnServer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "extrap_useGroundTraceOnServer") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v6->current.enabled && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
      {
LABEL_22:
        PM_GroundTrace(pm, pml, 0);
        PM_SlopeWorldmodel_Update(pm, pml);
      }
      PM_UpdatePronePitch(pm, pml);
      PM_PlayerMoveCollide(pm, pml);
      PM_Footsteps(pm, pml);
      PM_UpdateASM(pm, pml);
    }
  }
}

/*
==============
PM_ExtrapolateSingle
==============
*/
void PM_ExtrapolateSingle(pmove_t *pm)
{
  playerState_s *ps; 
  int commandTime; 
  int serverTime; 
  int inputTime; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  pml_t pml; 

  pml.isSkydiveTraced = 0;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12751, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12751, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BG_UpdateWeaponAnimArrays(pm->weaponMap, ps, pm->m_bgHandler);
  PM_SetupMoveState(pm);
  PM_PmoveLocal_Init(pm, &pml);
  commandTime = pm->cmd.commandTime;
  ps->commandTime = commandTime;
  ps->commandTimeInterpolated = commandTime;
  serverTime = pm->cmd.serverTime;
  ps->serverTime = serverTime;
  ps->serverTimeInterpolated = serverTime;
  inputTime = pm->cmd.inputTime;
  ps->inputTime = inputTime;
  ps->inputTimeInterpolated = inputTime;
  PM_UpdateViewAngles(pm, &pml);
  PM_PmoveLocal_SetViewAngles(pm, &pml);
  PM_ProneOverride_Update(pm);
  BG_VehicleMove(pm, &pml);
  PM_ContextMount_UpdateState_Extrapolation(pm, &pml);
  v6 = DCONST_DVARBOOL_bg_adsExtrapolationEnabled;
  if ( !DCONST_DVARBOOL_bg_adsExtrapolationEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_adsExtrapolationEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
    PM_UpdateAimDownSightLerp(pm, pml.msec);
  v7 = DCONST_DVARBOOL_bg_viewHeightExtrapolationEnabled;
  if ( !DCONST_DVARBOOL_bg_viewHeightExtrapolationEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewHeightExtrapolationEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
    PM_ViewHeightAdjust(pm, &pml);
  switch ( ps->pm_type )
  {
    case 1:
    case 8:
      PM_Footsteps(pm, &pml);
      break;
    case 2:
      PM_NoclipMove(pm, &pml);
      break;
    case 3:
      PM_UFOMove(pm, &pml);
      break;
    case 4:
      PM_ModelPreviewerMove(ps);
      break;
    case 5:
      PM_FlyMove(pm, &pml);
      break;
    case 6:
      return;
    default:
      PM_ExtrapolateMove_Normal(pm, &pml);
      break;
  }
}

/*
==============
PM_FlyMove
==============
*/
void PM_FlyMove(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  double v5; 
  float v6; 
  __int128 v7; 
  float v8; 
  int v9; 
  bool v10; 
  pml_t *v11; 
  float v12; 
  __int128 v13; 
  __int64 performSlideMove; 
  __int64 performSlideMovea; 
  __int64 v19; 
  __int64 v20; 
  int v21[4]; 
  vec3_t wishdir; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3026, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3026, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  PM_Friction(pm, pml);
  v5 = PM_CmdScale(ps, &pm->cmd);
  v6 = 0.0;
  if ( *(float *)&v5 == 0.0 )
  {
    v7 = 0i64;
    v8 = 0.0;
  }
  else
  {
    v9 = 0;
    v10 = 1;
    v11 = pml;
    do
    {
      if ( !v10 )
      {
        LODWORD(v19) = 3;
        LODWORD(performSlideMove) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", performSlideMove, v19) )
          __debugbreak();
        LODWORD(v20) = 3;
        LODWORD(performSlideMovea) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", performSlideMovea, v20) )
          __debugbreak();
      }
      v12 = (float)((float)((float)pm->cmd.rightmove * v11->right.v[0]) + (float)((float)pm->cmd.forwardmove * v11->forward.v[0])) * *(float *)&v5;
      if ( (unsigned int)v9 >= 3 )
      {
        LODWORD(v19) = 3;
        LODWORD(performSlideMove) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", performSlideMove, v19) )
          __debugbreak();
      }
      *(float *)((char *)v11->forward.v + (char *)v21 - (char *)pml) = v12;
      v11 = (pml_t *)((char *)v11 + 4);
      v10 = (unsigned int)++v9 < 3;
    }
    while ( v9 < 3 );
    v8 = *(float *)&v21[2];
    v7 = (unsigned int)v21[1];
    v6 = *(float *)v21;
  }
  v13 = v7;
  *(float *)&v13 = fsqrt((float)((float)(*(float *)&v7 * *(float *)&v7) + (float)(v6 * v6)) + (float)(v8 * v8));
  _XMM3 = v13;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  wishdir.v[0] = v6 * (float)(1.0 / *(float *)&_XMM0);
  wishdir.v[1] = *(float *)&v7 * (float)(1.0 / *(float *)&_XMM0);
  wishdir.v[2] = v8 * (float)(1.0 / *(float *)&_XMM0);
  PM_Accelerate(pm, pml, &wishdir, *(float *)&v13, 8.0);
  PM_UpdatePlayerCollision(pm, pml, 0, 1, 1, 1);
}

/*
==============
PM_FootstepEvent
==============
*/
void PM_FootstepEvent(pmove_t *pm, pml_t *pml, bool isOnStairs, float stairsAscentRatio, float prevTime, float curTime, const FootstepTime *times, const MovementTime *mvmtTimes)
{
  playerState_s *ps; 
  const FootstepTime *v10; 
  float v11; 
  float v12; 
  entity_event_t *footstepEventType; 
  entity_event_t v14; 
  __int64 v15; 
  float time; 
  unsigned int v17; 
  const dvar_t *v18; 
  bool isLeft; 
  int v20; 
  unsigned int v21; 
  playerState_s *v22; 
  bool v23; 
  const dvar_t *v24; 
  bool v25; 
  float value; 
  FootstepActionType_t v27; 
  bool v28; 
  int v29; 
  unsigned int v30; 
  const MovementTime *v31; 
  float v32; 
  __int64 v33; 
  EquipmentMoveType_t v34; 
  unsigned int v35; 
  __int64 v36; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7602, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7602, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = defaultTimes;
  v11 = prevTime;
  v12 = curTime;
  if ( times )
    v10 = times;
  if ( prevTime != curTime )
  {
    footstepEventType = pm->footstepEventType;
    prevTime = 0.0;
    if ( footstepEventType )
      v14 = *footstepEventType;
    else
      v14 = PM_FootstepType(pm, pm->speed, (FootstepMoveType_t *)&prevTime);
    if ( -3.4028235e38 != v10->time )
    {
      v15 = -4i64 - (_QWORD)v10;
      do
      {
        if ( (__int64)((unsigned __int64)(&v10->isLeft + v15) & 0xFFFFFFFFFFFFFFF8ui64) >= 256 )
          break;
        time = v10->time;
        if ( v11 < v10->time && time <= v12 || v12 < v11 && v11 < time || time <= v12 && v12 < v11 )
        {
          ++ps->footstepCount;
          if ( PM_ShouldMakeFootsteps(pm) )
          {
            if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_spValue, 0x3Au) )
            {
              if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2559, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
                __debugbreak();
              v17 = BG_PackFootstepEventParm(pm->weaponMap, ps, 21, FOOTSTEP_ACTION_TYPE_STEP, v10->isLeft);
              BG_AddPredictableEventToPlayerstate(EV_FOOTSTEP_PRONE, v17, pm->cmd.serverTime, pm->weaponMap, ps);
            }
            else if ( ps->groundEntityNum == 2047 )
            {
              if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
              {
                v18 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
                if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v18);
                if ( !v18->current.enabled )
                {
                  isLeft = v10->isLeft;
                  v20 = PM_GroundSurfaceType(pm);
                  v21 = BG_PackFootstepEventParm(pm->weaponMap, ps, v20, FOOTSTEP_ACTION_TYPE_STEP, isLeft);
                  BG_AddPredictableEventToPlayerstate(EV_FOOTSTEP_RUN, v21, pm->cmd.serverTime, pm->weaponMap, ps);
                }
              }
            }
            else
            {
              if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE) && (PM_GetEffectiveStance(ps) == PM_EFF_STANCE_DUCKED || PM_GetEffectiveStance(ps) == PM_EFF_STANCE_PRONE) )
              {
                LODWORD(v36) = PM_GetEffectiveStance(ps);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7659, ASSERT_TYPE_ASSERT, "( ( Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_CROUCH_PRONE_FOOTSTEPS ) || ((PM_GetEffectiveStance( ps ) != PM_EFF_STANCE_DUCKED) && (PM_GetEffectiveStance( ps ) != PM_EFF_STANCE_PRONE)) ) )", "( PM_GetEffectiveStance( ps ) ) = %i", v36) )
                  __debugbreak();
              }
              v22 = pm->ps;
              if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7572, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
                __debugbreak();
              v23 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v22->pm_flags, ACTIVE, 8u);
              v24 = DCONST_DVARFLT_player_stairs_footstep_sound_minratio;
              v25 = v23;
              if ( !DCONST_DVARFLT_player_stairs_footstep_sound_minratio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_footstep_sound_minratio") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v24);
              value = v24->current.value;
              if ( value > stairsAscentRatio )
              {
                if ( stairsAscentRatio > COERCE_FLOAT(LODWORD(value) ^ _xmm) )
                  v27 = v25;
                else
                  v27 = FOOTSTEP_ACTION_TYPE_STEP_STAIR_DOWN;
              }
              else
              {
                v27 = FOOTSTEP_ACTION_TYPE_STEP_STAIR_UP;
              }
              v28 = v10->isLeft;
              v29 = PM_GroundSurfaceType(pm);
              v30 = BG_PackFootstepEventParm(pm->weaponMap, ps, v29, v27, v28);
              BG_AddPredictableEventToPlayerstate(v14, v30, pm->cmd.serverTime, pm->weaponMap, ps);
            }
          }
        }
        ++v10;
      }
      while ( -3.4028235e38 != v10->time );
    }
    v31 = mvmtTimes;
    if ( mvmtTimes )
    {
      v32 = mvmtTimes->time;
      if ( mvmtTimes->time != -3.4028235e38 )
      {
        v33 = 0i64;
        do
        {
          if ( (__int64)(v33 & 0xFFFFFFFFFFFFFFF8ui64) >= 256 )
            break;
          if ( (v11 < v32 && v32 <= v12 || v12 < v11 && v11 < v32 || v32 <= v12 && v12 < v11) && PM_ShouldMakeFootsteps(pm) && v14 )
          {
            switch ( v14 )
            {
              case EV_FOOTSTEP_SUPERSPRINT:
              case EV_FOOTSTEP_SPRINT:
                v34 = EQUIPMENT_MOVE_TYPE_SPRINT;
                break;
              case EV_FOOTSTEP_RUN:
              case EV_JUMP:
                v34 = EQUIPMENT_MOVE_TYPE_RUN;
                break;
              case EV_FOOTSTEP_WALK:
                v34 = EQUIPMENT_MOVE_TYPE_WALK;
                break;
              case EV_FOOTSTEP_CREEP:
                v34 = EQUIPMENT_MOVE_TYPE_CREEP;
                break;
              case EV_FOOTSTEP_PRONE:
                v34 = EQUIPMENT_MOVE_TYPE_PRONE;
                break;
              default:
                v34 = EQUIPMENT_MOVE_TYPE_INVALID;
                break;
            }
            v35 = BG_PackEquipSoundEventParam((MovementLeadType_t)(2 - v31->isLeadIn), ps->clothType, 0, v34);
            BG_AddPredictableEventToPlayerstate(EV_CLOTH_MOVE_SOUND, v35, pm->cmd.serverTime, pm->weaponMap, ps);
          }
          v32 = v31[1].time;
          ++v31;
          v33 += 8i64;
        }
        while ( v32 != -3.4028235e38 );
      }
    }
  }
}

/*
==============
PM_FootstepType
==============
*/
__int64 PM_FootstepType(pmove_t *pm, const float speed, FootstepMoveType_t *outMoveType)
{
  playerState_s *ps; 
  FootstepMoveType_t v6; 
  unsigned int v7; 
  double Float_Internal_DebugName; 
  int lastSprintStart; 
  __int64 result; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4957, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4957, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = FOOTSTEP_MOVE_TYPE_WALK;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
  {
    v7 = 175;
    v6 = FOOTSTEP_MOVE_TYPE_PRONE;
    goto LABEL_29;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
  {
    v7 = 175;
    v6 = FOOTSTEP_MOVE_TYPE_PRONE;
    goto LABEL_29;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
  {
    v7 = 172;
    v6 = FOOTSTEP_MOVE_TYPE_RUN;
    goto LABEL_29;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u) )
  {
    v7 = 174;
    v6 = FOOTSTEP_MOVE_TYPE_STATE_BEGIN;
    goto LABEL_29;
  }
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_creepThreshhold, "player_creepThreshhold");
  if ( speed < *(float *)&Float_Internal_DebugName )
  {
    v7 = 174;
    v6 = FOOTSTEP_MOVE_TYPE_STATE_BEGIN;
    goto LABEL_29;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xBu) )
  {
    if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_ads_footstep_creep, "killswitch_ads_footstep_creep") )
    {
      v7 = 174;
      v6 = FOOTSTEP_MOVE_TYPE_STATE_BEGIN;
      goto LABEL_29;
    }
  }
  else
  {
    if ( BG_IsSuperSprinting(ps) )
    {
      v7 = 170;
      v6 = FOOTSTEP_MOVE_TYPE_SUPERSPRINT;
      goto LABEL_29;
    }
    lastSprintStart = ps->sprintState.lastSprintStart;
    if ( lastSprintStart && lastSprintStart > ps->sprintState.lastSprintEnd )
    {
      v7 = 171;
      v6 = FOOTSTEP_MOVE_TYPE_SPRINT;
      goto LABEL_29;
    }
    if ( (pm->cmd.buttons & 0x400000000i64) != 0 )
    {
      v7 = 172;
      v6 = FOOTSTEP_MOVE_TYPE_RUN;
      goto LABEL_29;
    }
  }
  v7 = 173;
LABEL_29:
  if ( !PM_GroundSurfaceType(pm) )
    v7 = 0;
  result = v7;
  if ( outMoveType )
    *outMoveType = v6;
  return result;
}

/*
==============
PM_Footstep_MoveTypeWeightToEvent
==============
*/

__int64 __fastcall PM_Footstep_MoveTypeWeightToEvent(const float curMoveTypeWeight, FootstepMoveType_t *outMoveType, double _XMM2_8)
{
  const dvar_t *v5; 
  float value; 
  const dvar_t *v7; 
  FootstepMoveType_t v8; 
  __int64 result; 
  const dvar_t *v10; 
  float v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  float v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  float v17; 
  const dvar_t *v18; 

  if ( curMoveTypeWeight < 0.0 || curMoveTypeWeight > 1.0 )
  {
    __asm { vxorpd  xmm2, xmm2, xmm2 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5082, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( curMoveTypeWeight ) && ( curMoveTypeWeight ) <= ( 1.0f )", "curMoveTypeWeight not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", curMoveTypeWeight, *(double *)&_XMM2, DOUBLE_1_0) )
      __debugbreak();
  }
  v5 = DCONST_DVARFLT_snd_footstep_movetypeblend_value_creep;
  if ( !DCONST_DVARFLT_snd_footstep_movetypeblend_value_creep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_movetypeblend_value_creep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  v7 = DCONST_DVARFLT_snd_foosteps_movetypeblend_bias;
  if ( !DCONST_DVARFLT_snd_foosteps_movetypeblend_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_foosteps_movetypeblend_bias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( curMoveTypeWeight >= (float)(value + v7->current.value) )
  {
    v10 = DCONST_DVARFLT_snd_footstep_movetypeblend_value_walk;
    if ( !DCONST_DVARFLT_snd_footstep_movetypeblend_value_walk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_movetypeblend_value_walk") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v11 = v10->current.value;
    v12 = DCONST_DVARFLT_snd_foosteps_movetypeblend_bias;
    if ( !DCONST_DVARFLT_snd_foosteps_movetypeblend_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_foosteps_movetypeblend_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( curMoveTypeWeight >= (float)(v11 + v12->current.value) )
    {
      v13 = DCONST_DVARFLT_snd_footstep_movetypeblend_value_run;
      if ( !DCONST_DVARFLT_snd_footstep_movetypeblend_value_run && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_movetypeblend_value_run") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      v14 = v13->current.value;
      v15 = DCONST_DVARFLT_snd_foosteps_movetypeblend_bias;
      if ( !DCONST_DVARFLT_snd_foosteps_movetypeblend_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_foosteps_movetypeblend_bias") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( curMoveTypeWeight >= (float)(v14 + v15->current.value) )
      {
        v16 = DCONST_DVARFLT_snd_footstep_movetypeblend_value_sprint;
        if ( !DCONST_DVARFLT_snd_footstep_movetypeblend_value_sprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_movetypeblend_value_sprint") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        v17 = v16->current.value;
        v18 = DCONST_DVARFLT_snd_foosteps_movetypeblend_bias;
        if ( !DCONST_DVARFLT_snd_foosteps_movetypeblend_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_foosteps_movetypeblend_bias") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v18);
        if ( curMoveTypeWeight >= (float)(v17 + v18->current.value) )
        {
          v8 = FOOTSTEP_MOVE_TYPE_SUPERSPRINT;
          result = 170i64;
        }
        else
        {
          v8 = FOOTSTEP_MOVE_TYPE_SPRINT;
          result = 171i64;
        }
      }
      else
      {
        v8 = FOOTSTEP_MOVE_TYPE_RUN;
        result = 172i64;
      }
    }
    else
    {
      v8 = FOOTSTEP_MOVE_TYPE_WALK;
      result = 173i64;
    }
  }
  else
  {
    v8 = FOOTSTEP_MOVE_TYPE_STATE_BEGIN;
    result = 174i64;
  }
  if ( outMoveType )
    *outMoveType = v8;
  return result;
}

/*
==============
PM_Footstep_NotTryingToMove
==============
*/
void PM_Footstep_NotTryingToMove(pmove_t *pm, pml_t *pml, EffectiveStance effStance)
{
  playerState_s *ps; 
  int v7; 
  __int64 turn; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8756, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8756, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)effStance >= PM_EFF_STANCE_COUNT )
  {
    LODWORD(turn) = effStance;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8758, ASSERT_TYPE_ASSERT, "(unsigned)( effStance ) < (unsigned)( PM_EFF_STANCE_COUNT )", "effStance doesn't index PM_EFF_STANCE_COUNT\n\t%i not in [0, %i)", turn, 4) )
      __debugbreak();
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8759, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Footstep_NotTryingToMove");
  if ( pm->speed <= 120.0 )
  {
    switch ( effStance )
    {
      case PM_EFF_STANCE_PRONE:
        v7 = 3;
        break;
      case PM_EFF_STANCE_DUCKED:
        v7 = 2;
        break;
      case PM_EFF_STANCE_LASTSTANDCRAWL:
        v7 = 21;
        break;
      default:
        goto LABEL_24;
    }
LABEL_23:
    if ( BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, (PlayerAnimScriptMoveType)v7, 0, pml->turning) >= 0 )
    {
LABEL_28:
      PM_UpdateFlinch(pm, ps, pml);
      goto LABEL_29;
    }
LABEL_24:
    if ( effStance == PM_EFF_STANCE_LASTSTANDCRAWL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8800, ASSERT_TYPE_ASSERT, "(effStance != PM_EFF_STANCE_LASTSTANDCRAWL)", (const char *)&queryFormat, "effStance != PM_EFF_STANCE_LASTSTANDCRAWL") )
      __debugbreak();
    BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, ANIM_MT_IDLE, 0, pml->turning);
    goto LABEL_28;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) && effStance == PM_EFF_STANCE_DEFAULT )
  {
    v7 = PM_GetSlideBackwards(pm, pml) + 24;
    goto LABEL_23;
  }
LABEL_29:
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_Footstep_UpdateMoveType
==============
*/

__int64 __fastcall PM_Footstep_UpdateMoveType(const int msec, pmove_t *pm, double speed, float *inOutMoveTypeWeight)
{
  unsigned int v8; 
  const dvar_t *v9; 
  float v10; 
  float value; 
  FootstepMoveType_t v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const char *v16; 
  double Float_Internal_DebugName; 
  const dvar_t *v18; 
  const char *v19; 
  int Int_Internal_DebugName; 
  double v21; 
  float v22; 
  double v23; 
  __int64 v25; 
  __int64 v26; 
  FootstepMoveType_t outMoveType; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5123, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _XMM1 = *(_OWORD *)&speed;
  v8 = PM_FootstepType(pm, *(const float *)&speed, &outMoveType);
  if ( !inOutMoveTypeWeight )
    return v8;
  v9 = DVARBOOL_killswitch_footstep_player_moveblend_enabled;
  if ( !DVARBOOL_killswitch_footstep_player_moveblend_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_footstep_player_moveblend_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled || !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED|0x80) )
  {
    *inOutMoveTypeWeight = 0.0;
    return v8;
  }
  v10 = *inOutMoveTypeWeight;
  value = 0.0;
  if ( *inOutMoveTypeWeight < 0.0 || v10 > 1.0 )
  {
    speed = v10;
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5141, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( *inOutMoveTypeWeight ) && ( *inOutMoveTypeWeight ) <= ( 1.0f )", "*inOutMoveTypeWeight not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v10, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  v13 = outMoveType;
  if ( msec > 0 )
  {
    switch ( outMoveType )
    {
      case FOOTSTEP_MOVE_TYPE_STATE_BEGIN:
      case FOOTSTEP_MOVE_TYPE_PRONE:
        v14 = DCONST_DVARFLT_snd_footstep_movetypeblend_value_creep;
        if ( !DCONST_DVARFLT_snd_footstep_movetypeblend_value_creep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_movetypeblend_value_creep") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v14);
        value = v14->current.value;
        break;
      case FOOTSTEP_MOVE_TYPE_WALK:
        v15 = DCONST_DVARFLT_snd_footstep_movetypeblend_value_walk;
        v16 = "snd_footstep_movetypeblend_value_walk";
        goto LABEL_24;
      case FOOTSTEP_MOVE_TYPE_RUN:
        v15 = DCONST_DVARFLT_snd_footstep_movetypeblend_value_run;
        v16 = "snd_footstep_movetypeblend_value_run";
        goto LABEL_24;
      case FOOTSTEP_MOVE_TYPE_SPRINT:
        v15 = DCONST_DVARFLT_snd_footstep_movetypeblend_value_sprint;
        v16 = "snd_footstep_movetypeblend_value_sprint";
        goto LABEL_24;
      case FOOTSTEP_MOVE_TYPE_SUPERSPRINT:
        v15 = DCONST_DVARFLT_snd_footstep_movetypeblend_value_supersprint;
        v16 = "snd_footstep_movetypeblend_value_supersprint";
LABEL_24:
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v15, v16);
        value = *(float *)&Float_Internal_DebugName;
        break;
      default:
        break;
    }
    if ( value > *inOutMoveTypeWeight )
    {
      v18 = DCONST_DVARINT_snd_footstep_movetypeblend_window_up_ms;
      v19 = "snd_footstep_movetypeblend_window_up_ms";
    }
    else
    {
      v18 = DCONST_DVARINT_snd_footstep_movetypeblend_window_down_ms;
      v19 = "snd_footstep_movetypeblend_window_down_ms";
    }
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(v18, v19);
    if ( Int_Internal_DebugName > 0 )
    {
      HIDWORD(v21) = 0;
      *(float *)&v21 = (float)Int_Internal_DebugName / (float)msec;
      speed = v21;
      if ( *(float *)&v21 > 1.0 )
      {
        v22 = 1.0 / *(float *)&v21;
        *(_QWORD *)&v23 = *(unsigned int *)inOutMoveTypeWeight;
        *(float *)&v23 = *inOutMoveTypeWeight - (float)((float)(1.0 / *(float *)&speed) * *inOutMoveTypeWeight);
        speed = v23;
        value = *(float *)&v23 + (float)(v22 * value);
      }
    }
    *inOutMoveTypeWeight = value;
  }
  if ( (unsigned int)v13 > FOOTSTEP_MOVE_TYPE_STATE_END )
  {
    LODWORD(v26) = 6;
    LODWORD(v25) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5161, ASSERT_TYPE_ASSERT, "( FOOTSTEP_MOVE_TYPE_STATE_BEGIN ) <= ( goalMoveType ) && ( goalMoveType ) <= ( FOOTSTEP_MOVE_TYPE_STATE_END )", "goalMoveType not in [FOOTSTEP_MOVE_TYPE_STATE_BEGIN, FOOTSTEP_MOVE_TYPE_STATE_END]\n\t%i not in [%i, %i]", v25, 0i64, v26) )
      __debugbreak();
  }
  if ( (unsigned int)v13 > FOOTSTEP_MOVE_TYPE_SUPERSPRINT )
    return v8;
  if ( v8 )
    return PM_Footstep_MoveTypeWeightToEvent(*inOutMoveTypeWeight, NULL, speed);
  else
    return 0i64;
}

/*
==============
PM_Footsteps
==============
*/
void PM_Footsteps(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  double v5; 
  EffectiveStance EffectiveStance; 
  const SuitDef *SuitDef; 
  int viewHeightTarget; 
  int viewHeightLerpTarget; 
  PlayerAnimScriptMoveType NotMovingAnim; 
  int v11; 
  int v12; 
  BOOL v13; 
  bool v14; 
  double Float_Internal_DebugName; 
  playerState_s *v16; 
  int turning; 
  PlayerAnimScriptMoveType v18; 
  PlayerAnimScriptMoveType v19; 
  char v20; 
  playerState_s *v21; 
  bool v22; 
  bool IsMoving; 
  bool v24; 
  int v25; 
  float v26; 
  float rightmove; 
  float forwardmove; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  PlayerAnimStrafeStates v31; 
  __int64 v32; 
  unsigned int v33; 
  double v34; 
  const dvar_t *v35; 
  bool v36; 
  int v37; 
  PlayerAnimScriptMoveType v38; 
  __int64 sprinting; 
  int sprintinga; 
  int timeMs; 
  bool v42; 
  bool IsSuperSprinting; 
  bool v44; 
  bool SlideBackwards; 
  PmStanceFrontBack stance; 
  float outMoveRight; 
  int v48; 
  float outMoveForward; 
  int outRunBackwards; 
  __int64 v51; 
  vec3_t maxSpeeds; 

  v51 = -2i64;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9197, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9197, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BG_CheckThread();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Footsteps");
  if ( ps->pm_type >= 7 || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, GameModeFlagValues::ms_mpValue, 0x18u) )
    goto LABEL_141;
  pm->speed = fsqrt((float)((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(ps->velocity.v[2] * ps->velocity.v[2]));
  if ( BG_ContextMount_IsActive(ps) )
  {
    v5 = PM_ContextMount_CalcPlayerSpeed(pm, pml);
    pm->speed = *(float *)&v5;
  }
  if ( !BG_ContextMount_IsActive(ps) )
  {
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
    {
      SuitDef = BG_GetSuitDef(ps->suitIndex);
      if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 578, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
        __debugbreak();
      viewHeightTarget = ps->viewHeightTarget;
      if ( !viewHeightTarget || viewHeightTarget == SuitDef->viewheight_stand || viewHeightTarget == SuitDef->viewheight_crouch || viewHeightTarget == BG_Suit_GetProneViewHeight(SuitDef) )
      {
        viewHeightLerpTarget = ps->viewHeightLerpTarget;
        if ( viewHeightLerpTarget == BG_Suit_GetProneViewHeight(SuitDef) )
        {
          EffectiveStance = PM_EFF_STANCE_PRONE;
          goto LABEL_28;
        }
        if ( viewHeightLerpTarget == SuitDef->viewheight_crouch )
        {
          EffectiveStance = PM_EFF_STANCE_DUCKED;
          goto LABEL_28;
        }
        if ( viewHeightLerpTarget == SuitDef->viewheight_stand )
        {
          EffectiveStance = PM_EFF_STANCE_DEFAULT;
          goto LABEL_28;
        }
      }
    }
    EffectiveStance = PM_GetEffectiveStance(ps);
    goto LABEL_28;
  }
  EffectiveStance = PM_EFF_STANCE_DEFAULT;
LABEL_28:
  if ( PlayerASM_IsEnabled() )
    BG_PlayerASM_StoreCommandDir(ps->clientNum, ps->serverTime, (float)pm->oldcmd.forwardmove, (float)pm->oldcmd.rightmove, (float)pm->cmd.forwardmove, (float)pm->cmd.rightmove);
  if ( BG_Skydive_IsSkydiving(ps) && EffectiveStance != PM_EFF_STANCE_LASTSTANDCRAWL )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_Footsteps in Parachute mode");
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, ANIM_MT_PARACHUTE, 1, 0);
      PM_UpdateFlinch(pm, ps, pml);
    }
LABEL_34:
    Sys_ProfEndNamedEvent();
    goto LABEL_141;
  }
  if ( BG_IsTurretActive(ps) )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_Footsteps in Turret");
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      NotMovingAnim = PM_GetNotMovingAnim(EffectiveStance);
      BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, NotMovingAnim, 0, 0);
      PM_UpdateFlinch(pm, ps, pml);
    }
    goto LABEL_34;
  }
  v11 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xBu);
  v12 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u);
  v48 = v12;
  v13 = ps->pm_type == 1 && !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, GameModeFlagValues::ms_spValue, 8u);
  if ( v12 && v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9270, ASSERT_TYPE_ASSERT, "(!sprinting || !walking)", (const char *)&queryFormat, "!sprinting || !walking") )
    __debugbreak();
  outRunBackwards = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xAu);
  PM_GetNominalMaxSpeed(pm, pml, &maxSpeeds);
  stance = PM_GetStanceEx(EffectiveStance, outRunBackwards);
  v14 = EffectiveStance == PM_EFF_STANCE_LASTSTANDCRAWL && Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_last_stand_wm_restless_legs_enabled, "killswitch_last_stand_wm_restless_legs_enabled");
  v42 = v14;
  if ( BG_ContextMount_IsActive(ps) )
  {
    PM_UpdateBobCycle(pm, pml, stance, pm->speed, &maxSpeeds, v11, v12, pml->msec);
    goto LABEL_141;
  }
  if ( (PM_IsInAir(pm) || BG_Ladder_IsActive(ps)) && !BG_IsPlayerZeroGFloating(ps) )
  {
    PM_KnockbackAnim(pm, pml);
    PM_Footstep_LadderMove(pm, pml);
    timeMs = pml->msec;
    sprintinga = v12;
LABEL_140:
    PM_UpdateBobCycle(pm, pml, stance, pm->speed, &maxSpeeds, v11, sprintinga, timeMs);
    goto LABEL_141;
  }
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_moveThreshhold, "player_moveThreshhold");
  if ( *(float *)&Float_Internal_DebugName <= pm->speed && !v13 || v14 || BG_IsPlayerZeroGFloating(ps) )
  {
    outMoveRight = COERCE_FLOAT(PM_IsAffectedByBlackHole(pml));
    v20 = pm->cmd.forwardmove || pm->cmd.rightmove;
    v21 = pm->ps;
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9167, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v21->otherFlags, ACTIVE, 0xBu) )
    {
      if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9175, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
        __debugbreak();
      v22 = pm->oldcmd.forwardmove || pm->oldcmd.rightmove || (float)((float)((float)(pml->previous_velocity.v[0] * pml->previous_velocity.v[0]) + (float)(pml->previous_velocity.v[1] * pml->previous_velocity.v[1])) + (float)(pml->previous_velocity.v[2] * pml->previous_velocity.v[2])) > 1.0e-12;
      IsMoving = PM_LastStand_IsMoving(pm);
      v24 = !v22;
      v12 = v48;
      if ( !v24 && !IsMoving )
        v21->lastStandMoveStopTime = v21->serverTime;
    }
    else
    {
      v21->lastStandMoveStopTime = 0;
    }
    if ( v42 )
    {
      v25 = ps->serverTime - ps->lastStandMoveStopTime;
      LOBYTE(v25) = v25 < Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_playerLastStandMovementRestlessLegsTimeMs, "playerLastStandMovementRestlessLegsTimeMs");
      v20 |= v25 | PM_LastStand_IsMoving(pm);
    }
    v26 = outMoveRight;
    if ( v20 || outMoveRight != 0.0 || BG_IsPlayerZeroGFloating(ps) )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      {
        rightmove = (float)pm->cmd.rightmove;
        outMoveRight = rightmove;
        forwardmove = (float)pm->cmd.forwardmove;
        outMoveForward = forwardmove;
        if ( !v20 && v26 != 0.0 )
        {
          PM_GetBlackHoleStrafeData(pml, &outRunBackwards, &outMoveForward, &outMoveRight);
          rightmove = outMoveRight;
          forwardmove = outMoveForward;
        }
        if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8675, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
          __debugbreak();
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8676, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
          __debugbreak();
        ActiveStatics = BgStatic::GetActiveStatics();
        CharacterInfo = BG_GetCharacterInfo(ActiveStatics, pm->ps->clientNum);
        BG_SetConditionValue(CharacterInfo, 17, LODWORD(v26) != 0);
        v31 = BG_DetermineStrafeCondition(pm, forwardmove, rightmove);
        PM_SetStrafeCondition(pm, v31);
        v32 = PM_GetStanceEx(EffectiveStance, outRunBackwards);
        SlideBackwards = PM_GetSlideBackwards(pm, pml);
        v33 = v11;
        if ( EffectiveStance == PM_EFF_STANCE_DEFAULT )
        {
          v34 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_runbkThreshhold, "player_runbkThreshhold");
          if ( *(float *)&v34 >= pm->speed )
            v33 = 1;
        }
        IsSuperSprinting = BG_IsSuperSprinting(ps);
        v44 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u);
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8565, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
          __debugbreak();
        v35 = DCONST_DVARMPBOOL_animscript_supersprint_enable;
        if ( !DCONST_DVARMPBOOL_animscript_supersprint_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_supersprint_enable") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v35);
        v36 = v35->current.enabled || PlayerASM_IsEnabled();
        v37 = *(_DWORD *)&asc_143F489A0[8 * v32 + 4 * v33];
        if ( !(_DWORD)v32 )
        {
          if ( IsSuperSprinting && v36 )
          {
            v37 = 19;
          }
          else if ( v44 )
          {
            v37 = 18;
          }
        }
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
          v37 = SlideBackwards + 24;
        if ( BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, (PlayerAnimScriptMoveType)v37, 0, 0) < 0 )
        {
          if ( EffectiveStance == PM_EFF_STANCE_LASTSTANDCRAWL )
          {
            if ( (unsigned int)(v37 - 22) > 1 )
            {
              LODWORD(sprinting) = v37;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9389, ASSERT_TYPE_ASSERT, "(animType == ANIM_MT_CRAWLLASTSTAND || animType == ANIM_MT_CRAWLLASTSTANDBK)", "%s\n\tanimType == %d", "animType == ANIM_MT_CRAWLLASTSTAND || animType == ANIM_MT_CRAWLLASTSTANDBK", sprinting) )
                __debugbreak();
            }
            v38 = v37;
          }
          else
          {
            v38 = ANIM_MT_IDLE;
          }
          BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, v38, 0, 0);
        }
        PM_UpdateFlinch(pm, ps, pml);
      }
      timeMs = pml->msec;
      sprintinga = v48;
      goto LABEL_140;
    }
    PM_UpdateBobCycle(pm, pml, stance, pm->speed, &maxSpeeds, v11, v12, pml->msec);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      PM_Footstep_NotTryingToMove(pm, pml, EffectiveStance);
  }
  else
  {
    PM_UpdateBobCycle(pm, pml, stance, pm->speed, &maxSpeeds, v11, v12, pml->msec);
    v16 = pm->ps;
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7747, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      Sys_ProfBeginNamedEvent(0xFF808080, "PM_Footsteps_NotMoving");
      turning = pml->turning;
      v18 = PM_GetNotMovingAnim(EffectiveStance);
      if ( BG_AnimScriptAnimation(pm->m_bgHandler, v16, AISTATE_COMBAT, v18, 0, turning) < 0 )
      {
        if ( EffectiveStance == PM_EFF_STANCE_LASTSTANDCRAWL )
        {
          v19 = ANIM_MT_IDLELASTSTAND;
        }
        else
        {
          v19 = ANIM_MT_IDLECR;
          if ( EffectiveStance != PM_EFF_STANCE_DUCKED )
            v19 = ANIM_MT_IDLE;
        }
        BG_AnimScriptAnimation(pm->m_bgHandler, v16, AISTATE_COMBAT, v19, 0, pml->turning);
      }
      PM_UpdateFlinch(pm, v16, pml);
      Sys_ProfEndNamedEvent();
    }
  }
LABEL_141:
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_ForceStartSprint
==============
*/
bool PM_ForceStartSprint(pmove_t *pm, const pml_t *pml)
{
  playerState_s *ps; 
  int lastSprintStart; 
  playerState_s *v7; 
  int v8; 

  ps = pm->ps;
  lastSprintStart = ps->sprintState.lastSprintStart;
  if ( lastSprintStart && lastSprintStart > ps->sprintState.lastSprintEnd || !PM_CanStartSprintStateCheck(pm, pml, 0) )
  {
    v7 = pm->ps;
    v8 = v7->sprintState.lastSprintStart;
    return v8 && v8 > v7->sprintState.lastSprintEnd;
  }
  else
  {
    PM_StartSprint(pm->ps, pm, pml);
    return 1;
  }
}

/*
==============
PM_Friction
==============
*/
void PM_Friction(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  float v5; 
  BgGroundState *ground; 
  __int128 v7; 
  float v8; 
  float v9; 
  __int128 v10; 
  float v11; 
  bool v12; 
  bool v13; 
  BgGroundState *v14; 
  bool v15; 
  bool v16; 
  double v17; 
  const dvar_t *v18; 
  float v19; 
  double Float_Internal_DebugName; 
  float v21; 
  double v22; 
  double v23; 
  double v24; 
  float v25; 
  double v26; 
  float v29; 
  vec3_t vec; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2374, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ground && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2375, ASSERT_TYPE_ASSERT, "(pm->ground)", (const char *)&queryFormat, "pm->ground") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2379, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = ps->velocity.v[0];
  ground = pm->ground;
  vec.v[0] = v5;
  v7 = LODWORD(ps->velocity.v[1]);
  vec.v[1] = ps->velocity.v[1];
  v8 = ps->velocity.v[2];
  vec.v[2] = v8;
  if ( ground->walking )
  {
    WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &vec);
    v8 = vec.v[2];
    v7 = LODWORD(vec.v[1]);
    v5 = vec.v[0];
  }
  v10 = v7;
  *(float *)&v10 = fsqrt((float)((float)(*(float *)&v7 * *(float *)&v7) + (float)(v5 * v5)) + (float)(v8 * v8));
  v9 = *(float *)&v10;
  if ( *(float *)&v10 < 1.0 )
  {
    *(_QWORD *)ps->velocity.v = 0i64;
    ps->velocity.v[2] = 0.0;
    return;
  }
  v11 = 0.0;
  v12 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xDu);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x16u) )
  {
    PM_MeleeChargeFriction(pm, pml);
    return;
  }
  if ( !v12 )
  {
    v13 = PM_IsInAir(pm);
    v14 = pm->ground;
    v15 = (ps->slideState.flags & 0x40) != 0;
    v16 = v14->walking && (v14->trace.surfaceFlags & 2) == 0;
    v17 = Slide_SlideOutInAirFrictionScale(ps, pm->cmd.serverTime);
    v18 = DCONST_DVARFLT_stopspeed;
    v19 = *(float *)&v17;
    if ( !DCONST_DVARFLT_stopspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stopspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( *(float *)&v10 >= v18->current.value )
    {
      v21 = *(float *)&v10;
    }
    else
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_stopspeed, "stopspeed");
      v21 = *(float *)&Float_Internal_DebugName;
    }
    if ( v16 )
    {
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xCu) )
      {
        v21 = v21 * 0.30000001;
      }
      else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) )
      {
        v22 = Jump_ReduceFriction(pm, ps);
        v21 = v21 * *(float *)&v22;
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
      {
        v23 = Slide_FrictionScale(pm, pml);
        v21 = v21 * *(float *)&v23;
      }
      v24 = Slide_SlideOutFrictionScale(ps, pm->cmd.serverTime);
      v25 = v21 * *(float *)&v24;
      goto LABEL_39;
    }
    if ( v13 && v15 && v19 != -3.4028235e38 )
    {
      v25 = v21 * v19;
LABEL_39:
      v26 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_friction, "friction");
      v11 = (float)(*(float *)&v26 * v25) * pml->frametime;
    }
  }
  if ( ps->pm_type == 5 )
    v11 = v11 + (float)((float)(*(float *)&v10 * pml->frametime) * 5.0);
  *(float *)&v10 = *(float *)&v10 - v11;
  _XMM0 = v10;
  __asm { vmaxss  xmm0, xmm0, xmm10 }
  v29 = (float)(*(float *)&_XMM0 / v9) * ps->velocity.v[1];
  ps->velocity.v[0] = (float)(*(float *)&_XMM0 / v9) * ps->velocity.v[0];
  ps->velocity.v[2] = (float)(*(float *)&_XMM0 / v9) * ps->velocity.v[2];
  ps->velocity.v[1] = v29;
}

/*
==============
PM_GetAccelerationForStance
==============
*/
float PM_GetAccelerationForStance(const playerState_s *ps)
{
  __int32 v2; 
  __int32 v3; 
  float v4; 
  const SuitDef *SuitDef; 
  float v6; 
  const dvar_t *v7; 

  v2 = PM_GetEffectiveStance(ps) - 1;
  if ( !v2 )
    goto LABEL_6;
  v3 = v2 - 1;
  if ( !v3 )
  {
    v4 = FLOAT_12_0;
    goto LABEL_7;
  }
  if ( v3 == 1 )
  {
LABEL_6:
    v4 = FLOAT_19_0;
    goto LABEL_7;
  }
  v4 = FLOAT_9_0;
LABEL_7:
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3194, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
    __debugbreak();
  v6 = v4 * SuitDef->player_globalAccelScale;
  v7 = DCONST_DVARMPFLT_player_globalAccelScale;
  if ( !DCONST_DVARMPFLT_player_globalAccelScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_globalAccelScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  return v6 * v7->current.value;
}

/*
==============
PM_GetBlackHoleStrafeData
==============
*/
void PM_GetBlackHoleStrafeData(const pml_t *pml, int *outRunBackwards, float *outMoveForward, float *outMoveRight)
{
  __int128 v8; 
  float v9; 
  float v10; 
  __int128 v11; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 

  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8709, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !outRunBackwards && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8710, ASSERT_TYPE_ASSERT, "(outRunBackwards)", (const char *)&queryFormat, "outRunBackwards") )
    __debugbreak();
  if ( !outMoveForward && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8711, ASSERT_TYPE_ASSERT, "(outMoveForward)", (const char *)&queryFormat, "outMoveForward") )
    __debugbreak();
  if ( !outMoveRight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8712, ASSERT_TYPE_ASSERT, "(outMoveRight)", (const char *)&queryFormat, "outMoveRight") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8692, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( pml->impulseFieldVelocity.v[0] == 0.0 && pml->impulseFieldVelocity.v[1] == 0.0 && pml->impulseFieldVelocity.v[2] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8713, ASSERT_TYPE_ASSERT, "(PM_IsAffectedByBlackHole( pml ))", (const char *)&queryFormat, "PM_IsAffectedByBlackHole( pml )") )
    __debugbreak();
  v8 = LODWORD(pml->impulseFieldVelocity.v[1]);
  v9 = pml->impulseFieldVelocity.v[2];
  v10 = pml->impulseFieldVelocity.v[0];
  v11 = v8;
  *(float *)&v11 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(v10 * v10)) + (float)(v9 * v9));
  _XMM3 = v11;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  v15 = v10 * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&v11 = *(float *)&v8 * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&v8 = v9 * (float)(1.0 / *(float *)&_XMM0);
  v16 = (float)((float)(*(float *)&v11 * pml->forward.v[1]) + (float)(v15 * pml->forward.v[0])) + (float)(*(float *)&v8 * pml->forward.v[2]);
  v17 = (float)(*(float *)&v11 * pml->right.v[1]) + (float)(v15 * pml->right.v[0]);
  v18 = *(float *)&v8 * pml->right.v[2];
  *outRunBackwards = v16 > 0.0;
  *outMoveForward = v16;
  *outMoveRight = COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 + v18) ^ _xmm);
}

/*
==============
PM_GetEffectiveStance
==============
*/
__int64 PM_GetEffectiveStance(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 517, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
    return 3i64;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u) )
    return 2i64;
  return GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0);
}

/*
==============
PM_GetEffectiveStanceForWorldModelAnimation
==============
*/
EffectiveStance PM_GetEffectiveStanceForWorldModelAnimation(const playerState_s *ps)
{
  const SuitDef *SuitDef; 
  int viewHeightTarget; 
  int viewHeightLerpTarget; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 566, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_ContextMount_IsActive(ps) )
    return 0;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
    return PM_GetEffectiveStance(ps);
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 578, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  viewHeightTarget = ps->viewHeightTarget;
  if ( viewHeightTarget )
  {
    if ( viewHeightTarget != SuitDef->viewheight_stand && viewHeightTarget != SuitDef->viewheight_crouch && viewHeightTarget != BG_Suit_GetProneViewHeight(SuitDef) )
      return PM_GetEffectiveStance(ps);
  }
  viewHeightLerpTarget = ps->viewHeightLerpTarget;
  if ( viewHeightLerpTarget == BG_Suit_GetProneViewHeight(SuitDef) )
    return 1;
  if ( viewHeightLerpTarget == SuitDef->viewheight_crouch )
    return 2;
  if ( viewHeightLerpTarget == SuitDef->viewheight_stand )
    return 0;
  else
    return PM_GetEffectiveStance(ps);
}

/*
==============
PM_GetFootstepActionType
==============
*/
__int64 PM_GetFootstepActionType(pmove_t *pm, float stairsAscentRatio)
{
  playerState_s *ps; 
  bool v4; 
  const dvar_t *v5; 
  bool v6; 
  float value; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7572, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7572, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 8u);
  v5 = DCONST_DVARFLT_player_stairs_footstep_sound_minratio;
  v6 = v4;
  if ( !DCONST_DVARFLT_player_stairs_footstep_sound_minratio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_footstep_sound_minratio") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  if ( value <= stairsAscentRatio )
    return 2i64;
  if ( stairsAscentRatio > COERCE_FLOAT(LODWORD(value) ^ _xmm) )
    return v6;
  return 3i64;
}

/*
==============
PM_GetFootstepAnimType
==============
*/
__int64 PM_GetFootstepAnimType(const pmove_t *pm)
{
  playerState_s *ps; 
  const dvar_t *v3; 
  playerState_s *v4; 
  bool v5; 
  __int64 result; 
  bool ShouldPlayAdditiveWalkAnim; 
  unsigned int v8; 
  bool v9; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8118, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8118, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = DCONST_DVARMPBOOL_movementAnimProto;
  if ( !DCONST_DVARMPBOOL_movementAnimProto && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movementAnimProto") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
  {
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
    {
      if ( (unsigned int)(ps->weapState[0].weaponState - 34) <= 2 || BG_CanSprintMelee(ps) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) && (unsigned int)(ps->weapState[0].weaponState - 22) <= 2 )
        return BG_IsSprintAdditive(pm->weaponMap, ps) ? 4 : 0;
      if ( BG_ShouldPlayAdditiveWalkAnim(pm->weaponMap, ps, pm->m_bgHandler) )
      {
        if ( BG_CanSprintFire(ps) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
          return 2i64;
        else
          return 1i64;
      }
      v9 = !BG_ShouldPlayAdditiveCrawlAnim(ps, WEAPON_HAND_DEFAULT, pm->m_bgHandler);
      result = 3i64;
      if ( !v9 )
        return result;
    }
    return 0xFFFFFFFFi64;
  }
  v4 = pm->ps;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8082, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v4->pm_flags, ACTIVE, 0x14u);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v4->pm_flags, ACTIVE, 6u) )
    return 0xFFFFFFFFi64;
  if ( BG_ShouldPlayAdditiveCrawlAnim(v4, WEAPON_HAND_DEFAULT, pm->m_bgHandler) )
    return 3i64;
  if ( v5 )
    return (unsigned int)BG_IsSuperSprinting(v4) + 7;
  ShouldPlayAdditiveWalkAnim = BG_ShouldPlayAdditiveWalkAnim(pm->weaponMap, v4, pm->m_bgHandler);
  v8 = -1;
  if ( ShouldPlayAdditiveWalkAnim )
    return 5;
  return v8;
}

/*
==============
PM_GetNominalMaxSpeed
==============
*/
void PM_GetNominalMaxSpeed(const pmove_t *const pm, const pml_t *const pml, vec3_t *maxSpeeds)
{
  playerState_s *ps; 
  float speed; 
  const SuitDef *SuitDef; 
  unsigned int rightmove; 
  unsigned int forwardmove; 
  int v11; 
  int v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  playerState_s *v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  const dvar_t *v25; 
  bool IsUsingOffhandGestureWeaponADSSupport; 
  playerState_s *v27; 
  bool v28; 
  BgWeaponMap *weaponMap; 
  const Weapon *OffhandGestureWeapon; 
  const Weapon *v31; 
  bool v32; 
  double WeaponOrOffhandAdsFrac; 
  float v34; 
  float v35; 
  float v36; 
  double v37; 
  float v38; 
  float v39; 
  float bobScale; 
  const dvar_t *v41; 
  float v42; 
  float v43; 
  float v44; 
  unsigned int v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  double SpeedScale; 
  const dvar_t *v53; 
  const char *v54; 
  float value; 
  const dvar_t *v56; 
  float v57; 
  float slide_strafe_speed_scale; 
  unsigned int i; 
  __int64 v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float adsMoveSpeedScaleOut; 
  float v67; 
  float moveSpeedScaleOut; 
  vec3_t wishDir; 
  int v70[4]; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7788, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7789, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
    __debugbreak();
  ps = pm->ps;
  speed = (float)ps->speed;
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7796, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  rightmove = pm->cmd.rightmove;
  forwardmove = pm->cmd.forwardmove;
  v11 = abs8(pm->cmd.rightmove);
  v12 = abs8(pm->cmd.forwardmove);
  v13 = fsqrt((float)(int)(rightmove * rightmove + forwardmove * forwardmove));
  if ( v13 > 0.000001 )
  {
    if ( v12 > v11 )
      v11 = v12;
    v14 = (float)v11 / v13;
  }
  else
  {
    v14 = 0.0;
  }
  v15 = (float)(_mm_cvtepi32_ps((__m128i)forwardmove).m128_f32[0] * 0.0078740157) * v14;
  v16 = (float)(_mm_cvtepi32_ps((__m128i)rightmove).m128_f32[0] * 0.0078740157) * v14;
  v17 = fsqrt((float)(v16 * v16) + (float)(v15 * v15));
  if ( v17 <= 0.000001 )
  {
    v18 = FLOAT_1_0;
    v19 = 0.0;
  }
  else
  {
    v18 = v15 * (float)(1.0 / v17);
    v19 = v16 * (float)(1.0 / v17);
  }
  v20 = pm->ps;
  v21 = FLOAT_0_40000001;
  v67 = v19;
  v22 = FLOAT_1_0;
  v23 = PM_SprintScale(v20);
  v24 = v23;
  if ( BG_IsSuperSprinting(pm->ps) )
  {
    v25 = DCONST_DVARFLT_superSprintSpeedScale;
    if ( !DCONST_DVARFLT_superSprintSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    v24 = v23 * v25->current.value;
  }
  IsUsingOffhandGestureWeaponADSSupport = BG_IsUsingOffhandGestureWeaponADSSupport(pm->weaponMap, pm->ps);
  v27 = pm->ps;
  v28 = IsUsingOffhandGestureWeaponADSSupport;
  weaponMap = pm->weaponMap;
  if ( IsUsingOffhandGestureWeaponADSSupport )
    OffhandGestureWeapon = BG_GetOffhandGestureWeapon(weaponMap, v27);
  else
    OffhandGestureWeapon = BG_GetCurrentWeaponForPlayer(weaponMap, v27);
  v31 = OffhandGestureWeapon;
  v32 = BG_UsingAlternate(pm->ps) && !v28;
  if ( v31->weaponIdx )
  {
    BG_GetMoveSpeedScale(pm->weaponMap, pm->ps, v31, v32, &moveSpeedScaleOut, &adsMoveSpeedScaleOut);
    WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(pm->weaponMap, pm->ps);
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 0) && *(float *)&WeaponOrOffhandAdsFrac > 0.0 )
    {
      v22 = adsMoveSpeedScaleOut;
      v21 = adsMoveSpeedScaleOut * 0.40000001;
    }
    else
    {
      v22 = moveSpeedScaleOut;
      v21 = adsMoveSpeedScaleOut * 0.40000001;
    }
    v24 = v24 * v22;
  }
  v34 = PM_CmdScaleForStance(pm);
  v35 = v22 * v34;
  v36 = v24 * v34;
  v37 = BG_ADSBobRate(v31, v32);
  v39 = *(float *)&v37 * (float)(v21 * v34);
  v38 = v39;
  bobScale = pm->ps->bobScale;
  if ( bobScale > 0.0 )
  {
    v35 = bobScale * v35;
    v38 = v39 * bobScale;
    v36 = v36 * bobScale;
  }
  v41 = DCONST_DVARBOOL_maxSpeedCalcDirectionIndependent;
  v42 = v35;
  v43 = v38;
  v44 = v36;
  if ( !DCONST_DVARBOOL_maxSpeedCalcDirectionIndependent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "maxSpeedCalcDirectionIndependent") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v41);
  if ( v41->current.enabled )
  {
    v45 = pm->cmd.forwardmove;
    v46 = _mm_cvtepi32_ps((__m128i)(unsigned int)pm->cmd.rightmove).m128_f32[0];
    v47 = _mm_cvtepi32_ps((__m128i)v45).m128_f32[0];
    v48 = (float)(v47 * pml->forward.v[0]) + (float)(v46 * pml->right.v[0]);
    v49 = (float)(v46 * pml->right.v[1]) + (float)(v47 * pml->forward.v[1]);
    v50 = (float)(v46 * pml->right.v[2]) + (float)(v47 * pml->forward.v[2]);
    v51 = fsqrt((float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)(v50 * v50));
    wishDir.v[0] = v48;
    wishDir.v[1] = v49;
    wishDir.v[2] = v50;
    if ( v51 > 0.000001 )
    {
      wishDir.v[0] = (float)(1.0 / v51) * v48;
      wishDir.v[2] = (float)(1.0 / v51) * v50;
      wishDir.v[1] = (float)(1.0 / v51) * v49;
      SpeedScale = PM_Slope_GetSpeedScale(&wishDir, pm);
      LOBYTE(v45) = pm->cmd.forwardmove;
      v35 = v35 * *(float *)&SpeedScale;
      v38 = v38 * *(float *)&SpeedScale;
      v36 = v36 * *(float *)&SpeedScale;
      v42 = v42 * *(float *)&SpeedScale;
      v43 = v43 * *(float *)&SpeedScale;
      v44 = v44 * *(float *)&SpeedScale;
    }
    if ( (float)(char)v45 > 0.0 && BG_CanJog(pm->weaponMap, pm->ps) )
    {
      v53 = DCONST_DVARFLT_player_jogForwardSpeedScale;
      if ( !DCONST_DVARFLT_player_jogForwardSpeedScale )
      {
        v54 = "player_jogForwardSpeedScale";
        goto LABEL_51;
      }
    }
    else
    {
      if ( (float)pm->cmd.forwardmove >= 0.0 )
        goto LABEL_54;
      v53 = DCONST_DVARFLT_player_backSpeedScale;
      if ( !DCONST_DVARFLT_player_backSpeedScale )
      {
        v54 = "player_backSpeedScale";
LABEL_51:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v54) )
          __debugbreak();
      }
    }
    Dvar_CheckFrontendServerThread(v53);
    value = v53->current.value;
    v36 = v36 * value;
    v38 = v38 * value;
    v35 = v35 * value;
LABEL_54:
    v56 = DCONST_DVARFLT_player_strafeSpeedScale;
    if ( !DCONST_DVARFLT_player_strafeSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_strafeSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v56);
    v57 = v56->current.value;
    v42 = v42 * v57;
    v43 = v43 * v57;
    v44 = v44 * v57;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 0x1Du) )
    {
      slide_strafe_speed_scale = SuitDef->slide_strafe_speed_scale;
      v42 = slide_strafe_speed_scale * v42;
      v43 = slide_strafe_speed_scale * v43;
      v44 = slide_strafe_speed_scale * v44;
    }
  }
  *(float *)v70 = (float)(v35 * speed) * v18;
  *(float *)&v70[1] = (float)(v38 * speed) * v18;
  *(float *)&v70[2] = (float)(v36 * speed) * v18;
  wishDir.v[0] = (float)(v42 * speed) * v67;
  wishDir.v[2] = (float)(v44 * speed) * v67;
  wishDir.v[1] = (float)(v43 * speed) * v67;
  for ( i = 0; i <= 2; ++i )
  {
    v60 = (int)i;
    v61 = wishDir.v[i];
    v62 = *(float *)&v70[i];
    v63 = (float)(v62 * pml->forward.v[0]) + (float)(v61 * pml->right.v[0]);
    v64 = (float)(v62 * pml->forward.v[1]) + (float)(v61 * pml->right.v[1]);
    v65 = (float)(v61 * pml->right.v[2]) + (float)(v62 * pml->forward.v[2]);
    maxSpeeds->v[v60] = fsqrt((float)((float)(v64 * v64) + (float)(v63 * v63)) + (float)(v65 * v65));
  }
}

/*
==============
PM_GetNotMovingAnim
==============
*/
__int64 PM_GetNotMovingAnim(EffectiveStance stance)
{
  __int64 v1; 
  int v4; 

  v1 = stance;
  if ( (unsigned int)stance >= PM_EFF_STANCE_COUNT )
  {
    v4 = 4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7716, ASSERT_TYPE_ASSERT, "(unsigned)( stance ) < (unsigned)( PM_EFF_STANCE_COUNT )", "stance doesn't index PM_EFF_STANCE_COUNT\n\t%i not in [0, %i)", stance, v4) )
      __debugbreak();
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7717, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (unsigned int)notMovingAnims[v1];
}

/*
==============
PM_GetSlideBackwards
==============
*/
bool PM_GetSlideBackwards(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  float v5; 
  __int128 v6; 
  float v7; 
  __int128 v8; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8736, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8736, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = ps->velocity.v[0];
  v6 = LODWORD(ps->velocity.v[1]);
  v7 = ps->velocity.v[2];
  v8 = v6;
  *(float *)&v8 = fsqrt((float)((float)(*(float *)&v6 * *(float *)&v6) + (float)(v5 * v5)) + (float)(v7 * v7));
  _XMM3 = v8;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  return (float)((float)((float)((float)(*(float *)&v6 * (float)(1.0 / *(float *)&_XMM0)) * pml->forward.v[1]) + (float)((float)(v5 * (float)(1.0 / *(float *)&_XMM0)) * pml->forward.v[0])) + (float)((float)(v7 * (float)(1.0 / *(float *)&_XMM0)) * pml->forward.v[2])) < 0.0;
}

/*
==============
PM_GetSprintLeft
==============
*/
int PM_GetSprintLeft(const BgWeaponMap *weaponMap, const pmove_t *pm, const int gametime)
{
  playerState_s *ps; 
  int MaxSprintTime; 
  playerState_s *v8; 
  int v9; 
  const SuitDef *SuitDef; 
  bool player_sprintUnlimited; 
  bool HasPerk; 
  const dvar_t *v13; 
  bool v14; 
  int result; 
  int v16; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 751, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 752, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  MaxSprintTime = BG_GetMaxSprintTime(weaponMap, ps);
  v8 = pm->ps;
  v9 = MaxSprintTime;
  SuitDef = BG_GetSuitDef(v8->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 685, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
    __debugbreak();
  if ( !BG_IsSuperSprinting(v8) && (pm->cmd.buttons & 0x800000000000i64) == 0 )
  {
    player_sprintUnlimited = SuitDef->player_sprintUnlimited;
    HasPerk = BG_HasPerk(&v8->perks, 0x10u);
    v13 = DCONST_DVARMPBOOL_player_sprintUnlimited;
    v14 = HasPerk;
    if ( !DCONST_DVARMPBOOL_player_sprintUnlimited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintUnlimited") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled || player_sprintUnlimited || v14 )
      return v9;
  }
  if ( !ps->sprintState.lastSprintStart )
    return v9;
  result = PM_GetSprintLeftRaw(weaponMap, ps, gametime);
  v16 = result;
  if ( result > v9 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 771, ASSERT_TYPE_ASSERT, "(sprintLeft <= maxSprintTime)", (const char *)&queryFormat, "sprintLeft <= maxSprintTime") )
      __debugbreak();
    return v16;
  }
  return result;
}

/*
==============
PM_GetSprintLeftRaw
==============
*/
__int64 PM_GetSprintLeftRaw(const BgWeaponMap *weaponMap, const playerState_s *ps, const int gametime)
{
  int MaxSprintTime; 
  int lastSprintStart; 
  int lastSprintEnd; 
  int v9; 
  int v10; 
  const dvar_t *v11; 
  int v12; 
  const dvar_t *v13; 
  bool v14; 
  const dvar_t *v15; 
  int v16; 
  const dvar_t *v17; 
  int v18; 
  double RechargeScale; 
  int v20; 
  const dvar_t *v21; 
  int v23; 
  int sprintStartMaxLength; 
  int lastSuperSprintStart; 
  int lastSuperSprintEnd; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 702, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 703, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  MaxSprintTime = BG_GetMaxSprintTime(weaponMap, ps);
  lastSprintStart = ps->sprintState.lastSprintStart;
  lastSprintEnd = ps->sprintState.lastSprintEnd;
  v9 = MaxSprintTime;
  v23 = lastSprintStart;
  v10 = 0;
  lastSuperSprintEnd = ps->sprintState.lastSuperSprintEnd;
  lastSuperSprintStart = ps->sprintState.lastSuperSprintStart;
  sprintStartMaxLength = ps->sprintState.sprintStartMaxLength;
  if ( ps->sprintState.sprintDelay )
  {
    v11 = DCONST_DVARFLT_player_sprintRechargePause;
    if ( !DCONST_DVARFLT_player_sprintRechargePause && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintRechargePause") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = (int)(float)(v11->current.value * 1000.0);
  }
  else
  {
    v12 = 0;
  }
  v13 = DVARBOOL_killswitch_sprint_slide_exploit_fix;
  if ( !DVARBOOL_killswitch_sprint_slide_exploit_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_sprint_slide_exploit_fix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = !v13->current.enabled && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du);
  if ( lastSprintEnd < lastSprintStart || v14 )
  {
    v16 = 0;
  }
  else
  {
    v15 = DCONST_DVARFLT_player_sprintRechargeScale;
    if ( !DCONST_DVARFLT_player_sprintRechargeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintRechargeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = (int)(float)((float)(gametime - ps->sprintState.lastSprintEnd) * v15->current.value);
  }
  v17 = DCONST_DVARMPBOOL_superSprintEnable;
  if ( !DCONST_DVARMPBOOL_superSprintEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled )
  {
    if ( lastSuperSprintEnd >= lastSuperSprintStart )
      gametime = ps->sprintState.lastSuperSprintEnd;
    v18 = I_clamp(gametime - ps->sprintState.lastSuperSprintStart, 0, v9);
    if ( BG_GameInterface_HasPerk_SuperSprintEnhanced(ps) )
    {
      RechargeScale = BG_GameInterface_SuperSprint_Enhanced_GetRechargeScale();
      v20 = sprintStartMaxLength + (int)(float)(*(float *)&RechargeScale * (float)v16) - v18 - v12;
    }
    else
    {
      v21 = DVARFLT_superSprintRechargeScale;
      if ( !DVARFLT_superSprintRechargeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintRechargeScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      v20 = sprintStartMaxLength + (int)(float)((float)v16 * v21->current.value) - v18 - v12;
    }
  }
  else
  {
    if ( lastSprintEnd >= v23 )
      gametime = ps->sprintState.lastSprintEnd;
    v20 = sprintStartMaxLength + v16 - v12 - I_clamp(gametime - ps->sprintState.lastSprintStart, 0, v9);
  }
  if ( v20 > 0 )
    v10 = v20;
  if ( v10 < v9 )
    return (unsigned int)v10;
  return (unsigned int)v9;
}

/*
==============
PM_GetStanceEx
==============
*/
__int64 PM_GetStanceEx(EffectiveStance stance, int backward)
{
  __int64 result; 

  if ( (unsigned int)stance >= PM_EFF_STANCE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 614, ASSERT_TYPE_ASSERT, "(unsigned)( stance ) < (unsigned)( PM_STANCE_BACKWARD_FIRST )", "stance doesn't index PM_STANCE_BACKWARD_FIRST\n\t%i not in [0, %i)", stance, 4) )
    __debugbreak();
  result = (unsigned int)(stance + 4);
  if ( !backward )
    return (unsigned int)stance;
  return result;
}

/*
==============
PM_GetViewHeightLerp
==============
*/
float PM_GetViewHeightLerp(const pmove_t *pm, int iFromHeight, int iToHeight)
{
  playerState_s *ps; 
  const SuitDef *SuitDef; 
  __int128 v9; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5773, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5773, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5776, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( ps->viewHeightLerpTime && (iFromHeight == -1 || iToHeight == -1 || iToHeight == ps->viewHeightLerpTarget && (iToHeight != SuitDef->viewheight_crouch || iFromHeight == BG_Suit_GetProneViewHeight(SuitDef) && !ps->viewHeightLerpDown || iFromHeight == SuitDef->viewheight_stand && ps->viewHeightLerpDown)) )
  {
    v9 = 0i64;
    *(float *)&v9 = (float)(pm->cmd.serverTime - ps->viewHeightLerpTime) / (float)PM_GetViewHeightLerpTime(ps, ps->viewHeightLerpTarget, ps->viewHeightLerpDown);
    _XMM2 = v9;
    LODWORD(_XMM0) = 0;
    if ( *(float *)&v9 >= 0.0 )
      __asm { vminss  xmm0, xmm2, cs:__real@3f800000 }
  }
  else
  {
    LODWORD(_XMM0) = 0;
  }
  return *(float *)&_XMM0;
}

/*
==============
PM_GetViewHeightLerpTime
==============
*/
int PM_GetViewHeightLerpTime(const playerState_s *ps, int iTarget, int bDown)
{
  const SuitDef *SuitDef; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  int v10; 
  int v11; 

  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5654, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( iTarget == BG_Suit_GetProneViewHeight(SuitDef) )
  {
    v7 = DCONST_DVARBOOL_stretchDirectStandToProneTime;
    if ( !DCONST_DVARBOOL_stretchDirectStandToProneTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stretchDirectStandToProneTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x36u) )
    {
      v8 = DCONST_DVARINT_stanceStandToProneHoldTime;
      if ( !DCONST_DVARINT_stanceStandToProneHoldTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stanceStandToProneHoldTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v8->current.integer - 200 > 0 )
        return 400 - (int)(float)((float)(v8->current.integer - 200) * -0.66666669);
    }
    return 400;
  }
  v10 = 200;
  if ( iTarget != SuitDef->viewheight_crouch )
    return v10;
  if ( bDown )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
      return Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_mantle_standToCrouchViewHeightLerpTimeMs, "mantle_standToCrouchViewHeightLerpTimeMs");
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_stretchDirectStandToProneTime, "stretchDirectStandToProneTime") && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x36u) )
    {
      v11 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_stanceStandToProneHoldTime, "stanceStandToProneHoldTime") - 200;
      if ( v11 > 0 )
        return 200 - (int)(float)((float)v11 * -0.33333334);
    }
    return v10;
  }
  return 400;
}

/*
==============
PM_GroundSurfaceType
==============
*/
__int64 PM_GroundSurfaceType(const pmove_t *pm)
{
  int surfaceFlags; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2995, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ground && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2996, ASSERT_TYPE_ASSERT, "(pm->ground)", (const char *)&queryFormat, "pm->ground") )
    __debugbreak();
  surfaceFlags = pm->ground->trace.surfaceFlags;
  if ( (surfaceFlags & 0x2000) != 0 )
    return 0i64;
  else
    return (surfaceFlags >> 19) & 0x3F;
}

/*
==============
PM_HandleDisabledStances
==============
*/
void PM_HandleDisabledStances(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  bool v4; 
  bool v5; 
  bool v6; 
  bool v7; 
  unsigned __int64 buttons; 
  entity_event_t v9; 
  unsigned __int64 v10; 
  __int64 v11; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6640, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6640, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x21u);
  v5 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x22u);
  v6 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x23u);
  v7 = v6;
  if ( v4 )
  {
    if ( v5 && v6 )
    {
      Com_PrintError(34, "All stances disallowed for player %i. Skipping stance update.\n", (unsigned int)pm->ps->clientNum);
      pm->cmd.buttons &= 0xFFFFFFFFFFFFFF3Fui64;
      return;
    }
LABEL_14:
    buttons = pm->cmd.buttons;
    if ( (buttons & 0x40) != 0 )
    {
      if ( !v7 )
        return;
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u) && !v4 || v5 )
      {
LABEL_20:
        v9 = EV_STANCE_FORCE_STAND;
        goto LABEL_33;
      }
LABEL_32:
      v9 = EV_STANCE_FORCE_CROUCH;
LABEL_33:
      v10 = pm->cmd.buttons & 0xFFFFFFFFFFFFFF3Fui64;
      pm->cmd.buttons = v10;
      if ( v9 == EV_STANCE_FORCE_PRONE )
      {
        v11 = v10 | 0x40;
      }
      else
      {
        if ( v9 != EV_STANCE_FORCE_CROUCH )
        {
LABEL_38:
          BG_AddPredictableEventToPlayerstate(v9, 0, pm->cmd.serverTime, pm->weaponMap, ps);
          return;
        }
        v11 = v10 | 0x80;
      }
      pm->cmd.buttons = v11;
      goto LABEL_38;
    }
    if ( (buttons & 0x80u) == 0i64 )
    {
      if ( !v4 )
        return;
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) || v7 )
      {
        v9 = EV_STANCE_FORCE_PRONE;
        if ( v5 )
          goto LABEL_33;
        goto LABEL_32;
      }
    }
    else
    {
      if ( !v5 )
        return;
      if ( (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u) || v7) && !v4 )
        goto LABEL_20;
    }
    v9 = EV_STANCE_FORCE_PRONE;
    goto LABEL_33;
  }
  if ( v5 || v6 )
    goto LABEL_14;
}

/*
==============
PM_HasIntentToRestoreSprint
==============
*/
bool PM_HasIntentToRestoreSprint(const pmove_t *pm)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1567, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1567, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BG_IsQASBoth(ps, QAS_STATE_NONE) && PM_CmdHasMinimumSprintMovement(ps, &pm->cmd) && (ps->sprintState.sprintRestore || ps->sprintState.sprintRestoreDelayStart > 0);
}

/*
==============
PM_IsAffectedByBlackHole
==============
*/
_BOOL8 PM_IsAffectedByBlackHole(const pml_t *pml)
{
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8692, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  return pml->impulseFieldVelocity.v[0] != 0.0 || pml->impulseFieldVelocity.v[1] != 0.0 || pml->impulseFieldVelocity.v[2] != 0.0;
}

/*
==============
PM_IsInAir
==============
*/
bool PM_IsInAir(const pmove_t *pm)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9039, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9039, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BG_IsInAir(ps, pm->ground->almostGroundPlane);
}

/*
==============
PM_IsPlayerFrozenByWeapon
==============
*/
bool PM_IsPlayerFrozenByWeapon(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const Weapon *OffHandWeaponForPlayer; 
  bool v5; 
  const Weapon *CurrentWeaponForPlayer; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6454, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6455, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)(ps->weapState[0].weaponState - 26) > 5 )
  {
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    OffHandWeaponForPlayer = CurrentWeaponForPlayer;
    if ( ps->weapState[0].weaponState != 16 && ps->weapState[1].weaponState != 16 || !CurrentWeaponForPlayer->weaponIdx )
      return 0;
    v5 = BG_UsingAlternate(ps);
  }
  else
  {
    OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(weaponMap, ps);
    v5 = 0;
  }
  return BG_WeaponDef(OffHandWeaponForPlayer, v5)->freezeMovementWhenFiring;
}

/*
==============
PM_IsSprinting
==============
*/
bool PM_IsSprinting(const playerState_s *ps)
{
  int lastSprintStart; 

  lastSprintStart = ps->sprintState.lastSprintStart;
  return lastSprintStart && lastSprintStart > ps->sprintState.lastSprintEnd;
}

/*
==============
PM_IsZeroGAntiLag
==============
*/
bool PM_IsZeroGAntiLag(const playerState_s *ps)
{
  const dvar_t *v1; 

  v1 = DCONST_DVARMPBOOL_antilagZeroG;
  if ( !DCONST_DVARMPBOOL_antilagZeroG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagZeroG") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.enabled && BG_IsPlayerZeroG(ps) && !BG_IsPlayerZeroGWalking(ps);
}

/*
==============
PM_KnockbackAnim
==============
*/
void PM_KnockbackAnim(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  unsigned int Animset; 
  unsigned int Anim; 
  bool IsKnockbackAnim; 
  const SuitDef *SuitDef; 
  __int128 v9; 
  float v10; 
  const dvar_t *v11; 
  float v12; 
  __int128 v13; 
  float v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v24; 
  const dvar_t *v25; 
  int v26; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5408, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5408, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x29u) )
  {
    if ( PlayerASM_IsEnabled() )
    {
      Animset = BG_PlayerASM_GetAnimset(ps);
      Anim = BG_PlayerASM_GetAnim(ps, MOVEMENT);
      IsKnockbackAnim = BG_PlayerASM_IsKnockbackAlias(Anim, Animset) != 0;
    }
    else
    {
      SuitDef = BG_GetSuitDef(ps->suitIndex);
      IsKnockbackAnim = BG_IsKnockbackAnim(ps->legsAnim, SuitDef->suitAnimType);
    }
    if ( !IsKnockbackAnim )
    {
      v9 = LODWORD(ps->velocity.v[1]);
      v10 = ps->velocity.v[0];
      v11 = DCONST_DVARFLT_player_strafeAnimCosAngle;
      v12 = ps->velocity.v[2];
      v13 = v9;
      *(float *)&v13 = fsqrt((float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(v10 * v10)) + (float)(v12 * v12));
      _XMM3 = v13;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm7, xmm0
      }
      v17 = v10 * (float)(1.0 / *(float *)&_XMM0);
      v18 = v9;
      v19 = (float)((float)((float)(*(float *)&v9 * (float)(1.0 / *(float *)&_XMM0)) * pml->forward.v[1]) + (float)(v17 * pml->forward.v[0])) + (float)((float)(v12 * (float)(1.0 / *(float *)&_XMM0)) * pml->forward.v[2]);
      v20 = (float)((float)((float)(*(float *)&v9 * (float)(1.0 / *(float *)&_XMM0)) * pml->right.v[1]) + (float)(v17 * pml->right.v[0])) + (float)((float)(v12 * (float)(1.0 / *(float *)&_XMM0)) * pml->right.v[2]);
      *(float *)&v18 = fsqrt((float)(v20 * v20) + (float)(COERCE_FLOAT(LODWORD(v19) ^ _xmm) * COERCE_FLOAT(LODWORD(v19) ^ _xmm)));
      _XMM3 = v18;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm7, xmm0
      }
      v24 = (float)(1.0 / *(float *)&_XMM0) * COERCE_FLOAT(LODWORD(v19) ^ _xmm);
      if ( !DCONST_DVARFLT_player_strafeAnimCosAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_strafeAnimCosAngle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v24 > v11->current.value )
        goto LABEL_21;
      v25 = DCONST_DVARFLT_player_strafeAnimCosAngle;
      if ( !DCONST_DVARFLT_player_strafeAnimCosAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_strafeAnimCosAngle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      if ( v24 < COERCE_FLOAT(v25->current.integer ^ _xmm) )
LABEL_21:
        v26 = 0;
      else
        v26 = (v20 > 0.0) + 1;
      PM_SetStrafeCondition(pm, (const PlayerAnimStrafeStates)v26);
      BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, (PlayerAnimScriptMoveType)((v19 < -0.0) + 35), 0, 0);
    }
  }
}

/*
==============
PM_LastStand_IsMoving
==============
*/
bool PM_LastStand_IsMoving(pmove_t *pm)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9157, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9157, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return pm->cmd.forwardmove || pm->cmd.rightmove || (float)((float)((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(ps->velocity.v[2] * ps->velocity.v[2])) > 1.0e-12;
}

/*
==============
PM_Linked_Update
==============
*/
void PM_Linked_Update(pmove_t *pm, pml_t *pml, const bool lastSprinting, const SprintState *lastSprintState)
{
  playerState_s *ps; 
  playerState_s *v7; 

  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12268, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml", -2i64) )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12270, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12270, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Linked_Update");
  PM_ClearLadderFlag(pm->weaponMap, ps);
  ps->groundEntityNum = 2047;
  pm->ground->groundPlane = 0;
  PM_SetAlmostGroundPlane(pm, 0);
  pm->ground->walking = 0;
  if ( !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, GameModeFlagValues::ms_spValue, 8u) && !BG_IsVehicleActive(ps) )
  {
    *(_QWORD *)ps->velocity.v = 0i64;
    ps->velocity.v[2] = 0.0;
  }
  PM_UpdateAimDownSightFlag(pm, pml);
  PM_UpdateSprint(pm, pml);
  PM_UpdatePlayerWalkingFlag(pm);
  PM_UpdateCustomAnimFlags(pm);
  if ( BG_IsLinkedToAnimFlagEnabled(ps) || BG_IsScriptedSceneAnimFlagEnabled(ps) && ps->linkEnt != 2047 )
    BG_UpdateMovementDir(pm, pml, 0);
  PM_DropTimers(pm, pml);
  PM_CheckDuck(pm, pml);
  PM_Footsteps(pm, pml);
  PM_Weapon(pm, pml);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 0x1Du) )
  {
    v7 = pm->ps;
    if ( v7->pm_type == 1 )
      Slide_Interrupt(v7, pm->weaponMap, pm->m_bgHandler, pm->cmd.serverTime);
  }
  PM_UpdateASM(pm, pml);
  PM_DropAnimTimers(pm, pml);
  PM_Door_Update(pm, pml);
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_LocalCheckProne
==============
*/
_BOOL8 PM_LocalCheckProne(pmove_t *pm, pml_t *pml, playerState_s *ps, int *penetrationEntity)
{
  Physics_WorldId worldId; 
  FeetDirection ProneFeetDirection; 
  BgGroundState *ground; 
  FeetDirection feetDirection; 
  const BgHandler *handler; 
  unsigned __int8 v12; 
  float proneDirection; 
  int isOnGround; 
  double BoundsHeight; 

  worldId = ((unsigned int (__fastcall *)(const BgHandler *, pml_t *))pm->m_bgHandler->GetPhysicsWorldId)(pm->m_bgHandler, pml);
  ProneFeetDirection = PM_GetProneFeetDirection(ps);
  ground = pm->ground;
  feetDirection = ProneFeetDirection;
  handler = pm->m_bgHandler;
  v12 = !ground->groundPlane || ground->trace.walkable;
  proneDirection = ps->proneDirection;
  isOnGround = ps->groundEntityNum != 2047;
  BoundsHeight = BG_Suit_GetBoundsHeight(ps, PM_EFF_STANCE_PRONE);
  return BG_CheckProne(ps, ps->clientNum, &ps->origin, 15.0, *(const float *)&BoundsHeight, proneDirection, &pm->fTorsoPitch, &pm->fWaistPitch, 1, isOnGround, v12, handler, worldId, PCT_CLIENT, 50.0, feetDirection, penetrationEntity, NULL);
}

/*
==============
PM_MeleeCalcChargeDist
==============
*/
unsigned __int8 PM_MeleeCalcChargeDist(const pmove_t *pm, const pml_t *pml, int meleeChargeEnt)
{
  int v5; 
  __int64 v6; 
  float v7; 
  Bounds *bounds; 
  int v9; 
  float v10; 
  double v11; 
  unsigned int serverTime; 
  bool v13; 
  __int64 v14; 
  int v15; 
  BOOL fmt; 
  BgAntiLagEntityInfo *outInfo; 
  vec3_t outVictimPos; 
  vec3_t outAttackerPos; 
  char v21[12]; 
  vec2_t dir; 
  BgAntiLagEntityInfo v23; 

  v23.boneInfo.boneList.m_usedSize = 0;
  v23.boneInfo.boneList.m_maxSize = 0;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10782, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10782, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( meleeChargeEnt < 0 || (unsigned int)meleeChargeEnt > 0x7FE || !BgAntiLag::GetEntityInfoAtTime((BgAntiLag *)pm->antiLag, pm->ps->clientNum, meleeChargeEnt, 0, pm->cmd.serverTime, &v23) )
    goto LABEL_24;
  LOBYTE(fmt) = (v23.flags & 4) != 0;
  pm->GetEntityBounds((pmove_t *)pm, meleeChargeEnt, v23.suitIndex, PM_EFF_STANCE_DEFAULT, fmt, (Bounds *)v21);
  v5 = Vec2MinorAxis(&dir);
  v6 = v5;
  if ( (unsigned int)v5 >= 3 )
  {
    LODWORD(outInfo) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outInfo, 3) )
      __debugbreak();
  }
  v7 = dir.v[v6];
  bounds = pm->bounds;
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10798, ASSERT_TYPE_ASSERT, "( playerBounds ) != ( nullptr )", "%s != %s\n\t%p, %p", "playerBounds", "nullptr", NULL, NULL) )
    __debugbreak();
  v9 = Vec2MinorAxis((const vec2_t *)&bounds->halfSize);
  v10 = *vec3_t::operator[](&bounds->halfSize, v9);
  if ( PM_MeleeGetEntityOriginVelocity(pm, meleeChargeEnt, &outAttackerPos, &outVictimPos, NULL) )
  {
    v11 = I_fclamp((float)(fsqrt((float)((float)((float)(outVictimPos.v[1] - outAttackerPos.v[1]) * (float)(outVictimPos.v[1] - outAttackerPos.v[1])) + (float)((float)(outVictimPos.v[0] - outAttackerPos.v[0]) * (float)(outVictimPos.v[0] - outAttackerPos.v[0]))) + (float)((float)(outVictimPos.v[2] - outAttackerPos.v[2]) * (float)(outVictimPos.v[2] - outAttackerPos.v[2]))) - v7) - v10, 0.0, 255.0);
    if ( !pm->isExtrapolation && !pm->initialCall && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_melee_debug, "melee_debug") )
    {
      serverTime = pm->cmd.serverTime;
      v13 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      v14 = 67i64;
      if ( v13 )
        v14 = 83i64;
      Com_Printf(0, "CHARGEDIST [%c %i] dist %.2f\n", v14, serverTime, *(float *)&v11);
    }
    return (int)*(float *)&v11;
  }
  else
  {
LABEL_24:
    LOBYTE(v15) = 0;
  }
  return v15;
}

/*
==============
PM_MeleeChargeClear
==============
*/
void PM_MeleeChargeClear(playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10725, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x16u);
  ps->meleeChargeDist = 0;
}

/*
==============
PM_MeleeChargeFriction
==============
*/
void PM_MeleeChargeFriction(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  __int16 groundRefEnt; 
  __int16 meleeChargeEnt; 
  const dvar_t *v7; 
  float value; 
  float frametime; 
  float v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  const dvar_t *v14; 
  vec3_t outAttackerPos; 
  vec3_t outVictimPos; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2302, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2302, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x2Au) )
  {
    groundRefEnt = ps->groundRefEnt;
    if ( groundRefEnt == 2047 || !groundRefEnt )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2304, ASSERT_TYPE_ASSERT, "(!BG_IsPlayerZeroG( ps ))", "%s\n\tZeroG melee not supported.", "!BG_IsPlayerZeroG( ps )") )
        __debugbreak();
    }
  }
  meleeChargeEnt = ps->meleeChargeEnt;
  if ( meleeChargeEnt >= 0 && (unsigned __int16)meleeChargeEnt <= 0x7FEu )
  {
    v7 = DCONST_DVARFLT_player_meleeIdealEndDistance;
    if ( !DCONST_DVARFLT_player_meleeIdealEndDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_meleeIdealEndDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    value = v7->current.value;
    if ( PM_MeleeGetEntityOriginVelocity(pm, ps->meleeChargeEnt, &outAttackerPos, &outVictimPos, NULL) )
    {
      frametime = pml->frametime;
      v10 = outVictimPos.v[0] - (float)((float)(frametime * ps->velocity.v[0]) + outAttackerPos.v[0]);
      v11 = outVictimPos.v[1] - (float)((float)(frametime * ps->velocity.v[1]) + outAttackerPos.v[1]);
      if ( (float)((float)(v11 * v11) + (float)(v10 * v10)) > (float)(value * value) )
        return;
      goto LABEL_24;
    }
  }
  v13 = LODWORD(ps->velocity.v[0]);
  *(float *)&v13 = fsqrt((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1]));
  v12 = *(float *)&v13;
  if ( *(float *)&v13 < 1.0 )
  {
LABEL_24:
    *(_QWORD *)ps->velocity.v = 0i64;
    return;
  }
  v14 = DCONST_DVARFLT_player_meleeChargeFriction;
  if ( !DCONST_DVARFLT_player_meleeChargeFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_meleeChargeFriction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  *(float *)&v13 = *(float *)&v13 - (float)(v14->current.value * pml->frametime);
  _XMM3 = v13;
  __asm { vmaxss  xmm0, xmm3, xmm2 }
  ps->velocity.v[0] = (float)(*(float *)&_XMM0 / v12) * ps->velocity.v[0];
  ps->velocity.v[1] = (float)(*(float *)&_XMM0 / v12) * ps->velocity.v[1];
}

/*
==============
PM_MeleeChargeStart
==============
*/
void PM_MeleeChargeStart(pmove_t *pm, pml_t *pml, int meleeChargeEnt)
{
  playerState_s *ps; 
  playerState_s *v7; 
  const entityState_t *EntityState; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10855, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10855, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x16u) )
  {
    v7 = pm->ps;
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10830, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( PM_MeleeIsValidChargeCommon(v7) && meleeChargeEnt >= 0 && (unsigned int)meleeChargeEnt <= 0x7FE && (EntityState = BG_GetEntityState(pm->m_bgHandler, meleeChargeEnt), BGMovingPlatformClient::ShouldMelee(pm->movingPlatforms, v7, EntityState)) )
    {
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0x16u);
      ps->meleeChargeEnt = truncate_cast<short,int>(meleeChargeEnt);
      ps->meleeChargeDist = PM_MeleeCalcChargeDist(pm, pml, meleeChargeEnt);
    }
    else
    {
      PM_MeleeChargeClear(ps);
    }
  }
}

/*
==============
PM_MeleeChargeUpdateVelocity
==============
*/
void PM_MeleeChargeUpdateVelocity(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  __int16 meleeChargeEnt; 
  int weaponDelay; 
  float v6; 
  __int16 groundRefEnt; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  const dvar_t *v16; 
  __int128 v17; 
  float value; 
  const dvar_t *v19; 
  float v20; 
  const dvar_t *v21; 
  float v22; 
  bool v23; 
  float v24; 
  float v25; 
  float v28; 
  float v29; 
  float v30; 
  unsigned int serverTime; 
  float v32; 
  double v33; 
  float v34; 
  float v35; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 
  double v41; 
  char v42; 
  __int64 v43; 
  double v44; 
  double v45; 
  vec3_t outVictimPos; 
  vec3_t outAttackerPos; 
  vec3_t outVictimVel; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10876, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10876, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !PM_MeleeIsValidCharge(pm) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10878, ASSERT_TYPE_ASSERT, "(PM_MeleeIsValidCharge( pm ))", (const char *)&queryFormat, "PM_MeleeIsValidCharge( pm )") )
    __debugbreak();
  meleeChargeEnt = ps->meleeChargeEnt;
  if ( (meleeChargeEnt < 0 || (unsigned __int16)meleeChargeEnt > 0x7FEu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10879, ASSERT_TYPE_ASSERT, "(PM_MeleeValidChargeTarget( ps->meleeChargeEnt ))", (const char *)&queryFormat, "PM_MeleeValidChargeTarget( ps->meleeChargeEnt )") )
    __debugbreak();
  if ( (PM_GetEffectiveStance(ps) & 0xFFFFFFFD) == 0 )
  {
    if ( PM_MeleeGetEntityOriginVelocity(pm, ps->meleeChargeEnt, &outAttackerPos, &outVictimPos, &outVictimVel) )
    {
      weaponDelay = ps->weapState[0].weaponDelay;
      v6 = (float)weaponDelay * 0.001;
      if ( v6 > 0.0 )
      {
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x2Au) )
        {
          groundRefEnt = ps->groundRefEnt;
          if ( groundRefEnt == 2047 || !groundRefEnt )
          {
            if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10902, ASSERT_TYPE_ASSERT, "(!BG_IsPlayerZeroG( ps ))", "%s\n\tZero-G melee not supported.", "!BG_IsPlayerZeroG( ps )") )
              __debugbreak();
          }
        }
        v9 = LODWORD(outAttackerPos.v[0]);
        *(float *)&v9 = outAttackerPos.v[0] - outVictimPos.v[0];
        v8 = v9;
        v11 = LODWORD(outAttackerPos.v[1]);
        *(float *)&v11 = outAttackerPos.v[1] - outVictimPos.v[1];
        v10 = v11;
        v12 = v8;
        *(float *)&v12 = fsqrt((float)(*(float *)&v8 * *(float *)&v8) + (float)(*(float *)&v10 * *(float *)&v10));
        _XMM6 = v12;
        __asm
        {
          vcmpless xmm0, xmm6, cs:__real@80000000
          vblendvps xmm0, xmm6, xmm1, xmm0
        }
        *(_QWORD *)ps->velocity.v = 0i64;
        v16 = DCONST_DVARFLT_player_meleeIdealEndDistance;
        v17 = v10;
        if ( !DCONST_DVARFLT_player_meleeIdealEndDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_meleeIdealEndDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        value = v16->current.value;
        v19 = DCONST_DVARFLT_player_meleeChargeMaxSpeed;
        if ( !DCONST_DVARFLT_player_meleeChargeMaxSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_meleeChargeMaxSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v19);
        v20 = v19->current.value;
        v21 = DCONST_DVARFLT_player_meleeChargeMaxSpeedUp;
        if ( !DCONST_DVARFLT_player_meleeChargeMaxSpeedUp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_meleeChargeMaxSpeedUp") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v21);
        v22 = v21->current.value;
        v23 = *(float *)&_XMM6 > value;
        if ( *(float *)&_XMM6 > value )
        {
          v24 = (float)((float)((float)((float)((float)(*(float *)&v8 * (float)(1.0 / *(float *)&_XMM0)) * value) + outVictimPos.v[0]) - outAttackerPos.v[0]) + (float)(v6 * outVictimVel.v[0])) / v6;
          v25 = (float)((float)((float)((float)((float)(*(float *)&v10 * (float)(1.0 / *(float *)&_XMM0)) * value) + outVictimPos.v[1]) - outAttackerPos.v[1]) + (float)(v6 * outVictimVel.v[1])) / v6;
          *(float *)&v17 = (float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)((float)((float)((float)(outVictimPos.v[2] - outAttackerPos.v[2]) + (float)(0.0 * v6)) / v6) * (float)((float)((float)(outVictimPos.v[2] - outAttackerPos.v[2]) + (float)(0.0 * v6)) / v6));
          if ( fsqrt(*(float *)&v17) > v20 )
          {
            if ( *(float *)&v17 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
              __debugbreak();
            _XMM1 = v17;
            __asm { vrsqrtss xmm2, xmm1, xmm1 }
            v24 = (float)(*(float *)&_XMM2 * v24) * v20;
            v25 = (float)(*(float *)&_XMM2 * v25) * v20;
          }
          ps->velocity.v[0] = v24;
          ps->velocity.v[1] = v25;
        }
        if ( !PM_IsInAir(pm) && v22 < ps->velocity.v[2] )
          ps->velocity.v[2] = v22;
        if ( !pm->isExtrapolation && !pm->initialCall && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_melee_debug, "melee_debug") )
        {
          v28 = ps->velocity.v[2];
          v29 = ps->velocity.v[1];
          v30 = ps->velocity.v[0];
          serverTime = pm->cmd.serverTime;
          v32 = outVictimPos.v[2] - outAttackerPos.v[2];
          v33 = outVictimPos.v[2];
          v44 = outAttackerPos.v[1];
          v45 = outAttackerPos.v[0];
          v34 = outVictimPos.v[0] - outAttackerPos.v[0];
          v35 = outVictimPos.v[1] - outAttackerPos.v[1];
          v36 = v28;
          v37 = v29;
          v38 = v30;
          v39 = outVictimPos.v[1];
          v40 = outVictimPos.v[0];
          v41 = outAttackerPos.v[2];
          v42 = ((__int64 (*)(void))pm->m_bgHandler->IsServer)();
          v43 = 67i64;
          if ( v42 )
            v43 = 83i64;
          Com_Printf(0, "MELEE [%c %i] attOrg %.2f %.2f %.2f | vicOrg %.2f %.2f %.2f | tarVel %.2f %.2f %.2f | attToVic %.2f, %.2f, %.2f | %c attVel %.2f %.2f %.2f | remain %i\n", v43, serverTime, v45, v44, v41, v40, v39, v33, outVictimVel.v[0], outVictimVel.v[1], 0.0, v34, v35, v32, v23 + 48, v38, v37, v36, weaponDelay);
        }
      }
    }
  }
}

/*
==============
PM_MeleeGetEntityOriginVelocity
==============
*/
__int64 PM_MeleeGetEntityOriginVelocity(const pmove_t *pm, int meleeChargeEnt, vec3_t *outAttackerPos, vec3_t *outVictimPos, vec3_t *outVictimVel)
{
  playerState_s *ps; 
  __int16 groundRefEnt; 
  int serverTime; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  __int64 v15; 
  __int64 v16; 
  vec3_t outOrigin; 
  __int64 v19; 
  vec3_t origin; 
  vec3_t angles; 
  BgAntiLagEntityInfo v22; 
  BgAntiLagEntityInfo outInfo; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> in1; 
  tmat43_t<vec3_t> in2; 

  v19 = -2i64;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2199, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2199, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( meleeChargeEnt >= 0 && (unsigned int)meleeChargeEnt <= 0x7FE )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x2Au) )
    {
      groundRefEnt = ps->groundRefEnt;
      if ( groundRefEnt == 2047 || !groundRefEnt )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2206, ASSERT_TYPE_ASSERT, "(!BG_IsPlayerZeroG( ps ))", "%s\n\tZero-G melee not supported.", "!BG_IsPlayerZeroG( ps )") )
          __debugbreak();
      }
    }
    if ( !pm->antiLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2207, ASSERT_TYPE_ASSERT, "( pm->antiLag ) != ( nullptr )", "%s != %s\n\t%p, %p", "pm->antiLag", "nullptr", NULL, NULL) )
      __debugbreak();
    outAttackerPos->v[0] = ps->origin.v[0];
    outAttackerPos->v[1] = ps->origin.v[1];
    outAttackerPos->v[2] = ps->origin.v[2];
    serverTime = pm->cmd.serverTime;
    outInfo.boneInfo.boneList.m_usedSize = 0;
    outInfo.boneInfo.boneList.m_maxSize = 0;
    if ( BgAntiLag::GetEntityInfoAtTime((BgAntiLag *)pm->antiLag, ps->clientNum, meleeChargeEnt, 9u, serverTime, &outInfo) )
    {
      if ( meleeChargeEnt != outInfo.entityIndex )
      {
        LODWORD(v16) = outInfo.entityIndex;
        LODWORD(v15) = meleeChargeEnt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2220, ASSERT_TYPE_ASSERT, "( meleeChargeEnt ) == ( victimInfo.entityIndex )", "%s == %s\n\t%i, %i", "meleeChargeEnt", "victimInfo.entityIndex", v15, v16) )
          __debugbreak();
      }
      BgAntiLagEntity_GetOrigin(&outInfo, outVictimPos);
      if ( outVictimVel )
        *outVictimVel = outInfo.velocity;
      if ( !BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) )
        return 1i64;
      v12 = DVARBOOL_killswitch_mover_melee_fix_enabled;
      if ( !DVARBOOL_killswitch_mover_melee_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_mover_melee_fix_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      if ( !v12->current.enabled || !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_OUT|0x80) )
        return 1i64;
      v22.boneInfo.boneList.m_usedSize = 0;
      v22.boneInfo.boneList.m_maxSize = 0;
      if ( !pm->antiLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2234, ASSERT_TYPE_ASSERT, "( pm->antiLag ) != ( nullptr )", "%s != %s\n\t%p, %p", "pm->antiLag", "nullptr", NULL, NULL) )
        __debugbreak();
      if ( BgAntiLag::GetEntityInfoAtTime((BgAntiLag *)pm->antiLag, ps->clientNum, ps->movingPlatforms.m_movingPlatformEntity, 0xBu, serverTime, &v22) )
      {
        if ( outVictimVel )
        {
          if ( ps->movingPlatforms.m_movingPlatformEntity != v22.entityIndex )
          {
            LODWORD(v16) = v22.entityIndex;
            LODWORD(v15) = ps->movingPlatforms.m_movingPlatformEntity;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2250, ASSERT_TYPE_ASSERT, "( ps->movingPlatforms.GetMoverEntityID() ) == ( moverInfo.entityIndex )", "%s == %s\n\t%i, %i", "ps->movingPlatforms.GetMoverEntityID()", "moverInfo.entityIndex", v15, v16) )
              __debugbreak();
          }
          outVictimVel->v[0] = outVictimVel->v[0] - v22.velocity.v[0];
          outVictimVel->v[1] = outVictimVel->v[1] - v22.velocity.v[1];
          outVictimVel->v[2] = outVictimVel->v[2] - v22.velocity.v[2];
        }
        v13 = DCONST_DVARBOOL_usePmoveMoverSystem;
        if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v13);
        if ( v13->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2258, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_usePmoveMoverSystem, \"usePmoveMoverSystem\" ))", (const char *)&queryFormat, "!Dconst_GetBool( usePmoveMoverSystem )") )
          __debugbreak();
        angles.v[0] = 0.0;
        angles.v[1] = 0.0;
        angles.v[2] = 0.0;
        pm->m_bgHandler->GetEntityAngles((BgHandler *)pm->m_bgHandler, ps->movingPlatforms.m_movingPlatformEntity, &angles);
        origin.v[0] = 0.0;
        origin.v[1] = 0.0;
        origin.v[2] = 0.0;
        pm->m_bgHandler->GetEntityOrigin((BgHandler *)pm->m_bgHandler, ps->movingPlatforms.m_movingPlatformEntity, &origin);
        AnglesAndOriginToMatrix43(&angles, &origin, &result);
        MatrixInverseOrthogonal43(&result, &out);
        BgAntiLagEntity_GetOrigin(&v22, &outOrigin);
        AnglesAndOriginToMatrix43(&v22.angles, &outOrigin, &in1);
        memset(&outOrigin, 0, sizeof(outOrigin));
        MatrixMultiply43(&in1, &out, &in2);
        MatrixTransformVector43(&ps->origin, &in2, outAttackerPos);
        return 1i64;
      }
    }
  }
  return 0i64;
}

/*
==============
PM_MeleeIsValidCharge
==============
*/
int PM_MeleeIsValidCharge(const pmove_t *pm)
{
  playerState_s *ps; 
  int result; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10766, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10766, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = PM_MeleeIsValidChargeCommon(ps);
  if ( result )
    return GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x16u);
  return result;
}

/*
==============
PM_MeleeIsValidChargeCommon
==============
*/
_BOOL8 PM_MeleeIsValidChargeCommon(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10734, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return !ps->pm_type && !BG_IsTurretActive(ps) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) && !BG_IsPlayerInExecution(ps);
}

/*
==============
PM_MeleeUpdate
==============
*/
void PM_MeleeUpdate(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  int weaponState; 
  bool v6; 
  int weaponDelay; 
  bool v8; 
  bool v9; 
  bool v10; 
  bool v11; 
  bool v12; 
  WeaponSFXPackage *SfxPackage; 
  WeaponMaterialType sfxMaterialType; 
  int altMeleeVariation; 
  unsigned int v16; 
  unsigned __int8 outAnimSets; 
  bool outIsRandomized; 
  MeleeAnimType attackerAnim; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10969, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10969, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10970, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  v6 = 0;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) )
  {
    weaponState = ps->weapState[0].weaponState;
    if ( (unsigned int)(weaponState - 7) <= 5 || weaponState == 50 )
      v6 = 1;
  }
  if ( BG_IsPlayerInExecution(ps) || (unsigned int)(ps->weapState[0].weaponState - 22) > 2 && !v6 )
  {
    PM_MeleeChargeClear(ps);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x18u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x17u);
    ps->meleeChargeEnt = 2047;
  }
  else
  {
    if ( PM_MeleeIsValidCharge(pm) )
      PM_MeleeChargeUpdateVelocity(pm, pml);
    else
      PM_MeleeChargeClear(ps);
    if ( ((LOBYTE(pm->oldcmd.buttons) >> 2) & ((unsigned __int8)~LOBYTE(pm->cmd.buttons) >> 2) & 1) != 0 )
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x17u);
    weaponDelay = ps->weapState[0].weaponDelay;
    v8 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x18u);
    v9 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x17u);
    if ( weaponDelay <= 0 )
    {
      if ( v8 && !v9 )
      {
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x18u);
        v10 = BG_UsingAlternate(ps);
        v11 = BG_PlayerDualWielding(ps) == 1;
        v12 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x26u);
        BG_GetWeaponMeleeAnimProperties(ps, &pm->cmd.weapon, v10, v11, v12, &outIsRandomized, &attackerAnim, &outAnimSets);
        SfxPackage = BG_GetSfxPackage(&pm->cmd.weapon, v10);
        if ( SfxPackage )
          sfxMaterialType = SfxPackage->sfxMaterialType;
        else
          sfxMaterialType = MOVEMENT;
        if ( v12 )
          altMeleeVariation = ps->weapCommon.altMeleeVariation;
        else
          altMeleeVariation = ps->weapCommon.meleeVariation;
        v16 = BG_PackMeleeParam(attackerAnim, sfxMaterialType, v12, altMeleeVariation);
        pml->meleeFired = 1;
        BG_AddPredictableEventToPlayerstate(EV_FIRE_MELEE_DAMAGE, v16, pm->cmd.serverTime, pm->weaponMap, ps);
      }
      PM_MeleeChargeClear(ps);
    }
  }
}

/*
==============
PM_ModelPreviewerMove
==============
*/
void PM_ModelPreviewerMove(playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4940, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(_QWORD *)&ps->velocity.y = 0i64;
  ps->velocity.v[0] = 0.0;
}

/*
==============
PM_MoveScale
==============
*/

float __fastcall PM_MoveScale(playerState_s *ps, double fmove, float rmove, float umove)
{
  float result; 
  float v12; 
  float v13; 
  int pm_type; 
  const dvar_t *v15; 

  _XMM5 = *(_OWORD *)&fmove & (unsigned int)_xmm;
  __asm
  {
    vcmpltss xmm0, xmm5, xmm4
    vblendvps xmm2, xmm5, xmm4, xmm0
    vcmpltss xmm0, xmm2, xmm1
    vblendvps xmm6, xmm2, xmm1, xmm0
  }
  result = 0.0;
  if ( *(float *)&_XMM6 != 0.0 )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2606, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v13 = (float)(0.0078740157 / fsqrt((float)((float)(*(float *)&fmove * *(float *)&fmove) + (float)(rmove * rmove)) + (float)(umove * umove))) * (float)(_mm_cvtepi32_ps((__m128i)ps->speed).m128_f32[0] * *(float *)&_XMM6);
    v12 = v13;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xBu) )
      v12 = v13 * 0.40000001;
    pm_type = ps->pm_type;
    switch ( pm_type )
    {
      case 2:
        return v12 * 3.0;
      case 3:
        return v12 * 6.0;
      case 5:
        v15 = DCONST_DVARFLT_player_spectateSpeedScale;
        if ( !DCONST_DVARFLT_player_spectateSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_spectateSpeedScale") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        return v12 * v15->current.value;
    }
    return v12;
  }
  return result;
}

/*
==============
PM_MoveTypesFromFootstepType
==============
*/
bool PM_MoveTypesFromFootstepType(entity_event_t event, FootstepMoveType_t *outMoveType, EquipmentMoveType_t *outEquipmentType)
{
  bool result; 

  switch ( event )
  {
    case EV_FOOTSTEP_SUPERSPRINT:
      *outMoveType = FOOTSTEP_MOVE_TYPE_SUPERSPRINT;
      result = 1;
      *outEquipmentType = EQUIPMENT_MOVE_TYPE_SPRINT;
      break;
    case EV_FOOTSTEP_SPRINT:
      *outMoveType = FOOTSTEP_MOVE_TYPE_SPRINT;
      result = 1;
      *outEquipmentType = EQUIPMENT_MOVE_TYPE_SPRINT;
      break;
    case EV_FOOTSTEP_RUN:
      *outMoveType = FOOTSTEP_MOVE_TYPE_RUN;
      result = 1;
      *outEquipmentType = EQUIPMENT_MOVE_TYPE_RUN;
      break;
    case EV_FOOTSTEP_WALK:
      *outMoveType = FOOTSTEP_MOVE_TYPE_WALK;
      result = 1;
      *outEquipmentType = EQUIPMENT_MOVE_TYPE_WALK;
      break;
    case EV_FOOTSTEP_CREEP:
      result = 1;
      *outMoveType = FOOTSTEP_MOVE_TYPE_STATE_BEGIN;
      *outEquipmentType = EQUIPMENT_MOVE_TYPE_CREEP;
      break;
    case EV_FOOTSTEP_PRONE:
      *outMoveType = FOOTSTEP_MOVE_TYPE_PRONE;
      result = 1;
      *outEquipmentType = EQUIPMENT_MOVE_TYPE_PRONE;
      break;
    case EV_JUMP:
      *outMoveType = FOOTSTEP_MOVE_TYPE_JUMP;
      result = 1;
      *outEquipmentType = EQUIPMENT_MOVE_TYPE_RUN;
      break;
    default:
      *outMoveType = FOOTSTEP_MOVE_TYPE_INVALID;
      result = 0;
      *outEquipmentType = EQUIPMENT_MOVE_TYPE_INVALID;
      break;
  }
  return result;
}

/*
==============
PM_NoclipMove
==============
*/
void PM_NoclipMove(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const SuitDef *SuitDef; 
  float v6; 
  __int128 v7; 
  float v8; 
  const dvar_t *v9; 
  float value; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  float v13; 
  float v16; 
  double v17; 
  float rightmove; 
  int v19; 
  int v20; 
  char v21; 
  float v22; 
  float v27; 
  float v28; 
  const Weapon *CurrentWeaponForPlayer; 
  unsigned __int64 buttons; 
  const Weapon *v31; 
  bool v32; 
  bool v33; 
  unsigned __int64 v34; 
  pml_t *v35; 
  bool v36; 
  float v37; 
  __int128 v38; 
  float frametime; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  float v49; 
  float v50; 
  float v51; 
  vec3_t wishdir; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4708, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4708, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4711, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  ps->viewHeightTarget = SuitDef->viewheight_stand;
  v7 = LODWORD(ps->velocity.v[0]);
  *(float *)&v7 = fsqrt((float)((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(ps->velocity.v[2] * ps->velocity.v[2]));
  v6 = *(float *)&v7;
  if ( *(float *)&v7 >= 1.0 )
  {
    v9 = DCONST_DVARMPFLT_friction;
    if ( !DCONST_DVARMPFLT_friction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "friction") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    value = v9->current.value;
    v11 = DCONST_DVARFLT_stopspeed;
    if ( !DCONST_DVARFLT_stopspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stopspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( *(float *)&v7 >= v11->current.value )
    {
      v13 = *(float *)&v7;
    }
    else
    {
      v12 = DCONST_DVARFLT_stopspeed;
      if ( !DCONST_DVARFLT_stopspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stopspeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      v13 = v12->current.value;
    }
    *(float *)&v7 = *(float *)&v7 - (float)((float)((float)(v13 * value) * 1.5) * pml->frametime);
    _XMM3 = v7;
    __asm { vmaxss  xmm0, xmm3, xmm7 }
    ps->velocity.v[0] = (float)(*(float *)&_XMM0 / v6) * ps->velocity.v[0];
    ps->velocity.v[1] = (float)(*(float *)&_XMM0 / v6) * ps->velocity.v[1];
    v8 = (float)(*(float *)&_XMM0 / v6) * ps->velocity.v[2];
  }
  else
  {
    ps->velocity.v[0] = vec3_origin.v[0];
    ps->velocity.v[1] = vec3_origin.v[1];
    v8 = vec3_origin.v[2];
  }
  ps->velocity.v[2] = v8;
  HIDWORD(v17) = 0;
  *(float *)&v17 = (float)pm->cmd.forwardmove;
  v16 = *(float *)&v17;
  rightmove = (float)pm->cmd.rightmove;
  v19 = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|0x80) )
  {
    v20 = pm->cmd.upmove - pm->cmd.downmove;
    if ( v20 > 127 )
      v20 = 127;
    v21 = v20;
    if ( v20 < -128 )
      v21 = 0x80;
    v22 = (float)v21;
  }
  else
  {
    _XMM3 = LODWORD(FLOAT_127_0);
    _XMM0 = pm->cmd.buttons & 1;
    __asm
    {
      vpcmpeqq xmm2, xmm0, xmm1
      vblendvps xmm0, xmm3, xmm7, xmm2
    }
    v22 = *(float *)&_XMM0;
    if ( (pm->cmd.buttons & 0x20000) != 0 )
      v22 = *(float *)&_XMM0 - 127.0;
  }
  v27 = PM_MoveScale(ps, v17, rightmove, v22);
  v28 = v27;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  buttons = pm->cmd.buttons;
  v31 = CurrentWeaponForPlayer;
  v33 = 0;
  if ( (buttons & 4) != 0 )
  {
    if ( (buttons & 1) == 0 || (v32 = BG_UsingAlternate(ps), !BG_IsMeleeOnlyWeapon(v31, v32)) )
      v33 = 1;
  }
  v34 = pm->cmd.buttons;
  if ( (v34 & 2) != 0 || v33 )
  {
    v28 = v27 * 15.0;
  }
  else if ( (v34 & 0xC0) != 0 )
  {
    v28 = v27 * 0.1;
  }
  v35 = pml;
  v36 = 1;
  do
  {
    if ( !v36 )
    {
      LODWORD(v46) = 3;
      LODWORD(v43) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v43, v46) )
        __debugbreak();
      LODWORD(v47) = 3;
      LODWORD(v44) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v44, v47) )
        __debugbreak();
      LODWORD(v48) = 3;
      LODWORD(v45) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v45, v48) )
        __debugbreak();
    }
    v37 = (float)((float)(rightmove * v35->right.v[0]) + (float)(v16 * v35->forward.v[0])) + (float)(v22 * v35->up.v[0]);
    if ( (unsigned int)v19 >= 3 )
    {
      LODWORD(v46) = 3;
      LODWORD(v43) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v43, v46) )
        __debugbreak();
    }
    *(float *)((char *)v35->forward.v + (char *)&v49 - (char *)pml) = v37;
    v35 = (pml_t *)((char *)v35 + 4);
    v36 = (unsigned int)++v19 < 3;
  }
  while ( v19 < 3 );
  v38 = LODWORD(v50);
  *(float *)&v38 = fsqrt((float)((float)(*(float *)&v38 * *(float *)&v38) + (float)(v49 * v49)) + (float)(v51 * v51));
  _XMM4 = v38;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm11, xmm0
  }
  wishdir.v[0] = v49 * (float)(1.0 / *(float *)&_XMM0);
  wishdir.v[1] = v50 * (float)(1.0 / *(float *)&_XMM0);
  wishdir.v[2] = v51 * (float)(1.0 / *(float *)&_XMM0);
  PM_Accelerate(pm, pml, &wishdir, *(float *)&v38 * v28, 9.0);
  frametime = pml->frametime;
  ps->origin.v[0] = (float)(frametime * ps->velocity.v[0]) + ps->origin.v[0];
  ps->origin.v[1] = (float)(frametime * ps->velocity.v[1]) + ps->origin.v[1];
  ps->origin.v[2] = (float)(frametime * ps->velocity.v[2]) + ps->origin.v[2];
}

/*
==============
PM_Normal_Update
==============
*/
void PM_Normal_Update(pmove_t *pm, pml_t *pml, const bool lastSprinting, const SprintState *lastSprintState, const EffectiveStance prevEffStance)
{
  playerState_s *ps; 
  playerState_s *v10; 
  entity_event_t v11; 
  BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelWeapon; 
  const WeaponDef *v14; 
  bool v15; 
  bool IsUsingNoCollMovement; 
  playerState_s *v17; 

  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12130, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml", -2i64) )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12132, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12132, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsTurretActive(ps) )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_Normal_Update Turret");
    PM_ClearLadderFlag(pm->weaponMap, ps);
    if ( BG_Turret_HasPmoveMovement(pm->weaponMap, ps) )
    {
      if ( BG_IsInAir(ps, 0) )
        goto LABEL_15;
    }
    else
    {
      ps->groundEntityNum = 2047;
      pm->ground->groundPlane = 0;
      PM_SetAlmostGroundPlane(pm, 0);
      pm->ground->walking = 0;
    }
    ps->velocity.v[2] = 0.0;
    *(_QWORD *)ps->velocity.v = 0i64;
LABEL_15:
    PM_UpdateAimDownSightFlag(pm, pml);
    PM_UpdateSprint(pm, pml);
    PM_UpdatePlayerWalkingFlag(pm);
    PM_UpdateCustomAnimFlags(pm);
    v10 = pm->ps;
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11049, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (pm->oldcmd.buttons & 0x10000) == 0 && (pm->cmd.buttons & 0x10000) != 0 )
    {
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2222, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v10->weapCommon.weapFlags, ACTIVE, 7u) )
      {
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&v10->weapCommon.weapFlags, ACTIVE, 7u);
        v11 = EV_NIGHTVISION_REMOVE;
      }
      else
      {
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&v10->weapCommon.weapFlags, ACTIVE, 7u);
        v11 = EV_NIGHTVISION_WEAR;
      }
      BG_AddPredictableEventToPlayerstate(v11, 0, pm->cmd.serverTime, pm->weaponMap, pm->ps);
    }
    PM_DropTimers(pm, pml);
    PM_CheckDuck(pm, pml);
    PM_UpdateAimDownSightLerp(pm, pml->msec);
    PM_Footsteps(pm, pml);
    if ( BG_Turret_HasPmoveMovement(pm->weaponMap, ps) )
    {
      PM_GroundTrace(pm, pml, 0);
      PM_TurretMove(pm, pml);
    }
    weaponMap = pm->weaponMap;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1508, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1509, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
    v14 = BG_WeaponDef(ViewmodelWeapon, 0);
    v15 = v14->weapClass == WEAPCLASS_TURRET && v14->useTurretViewmodelAnims;
    if ( BG_IsRemoteTurretActive(ps) || !v15 )
    {
      PM_Weapon(pm, pml);
      PM_Door_Update(pm, pml);
    }
    else
    {
      PM_Turret_UpdateFire(pm, pml, v15);
    }
    PM_DropAnimTimers(pm, pml);
    PM_UpdateASM(pm, pml);
    Sys_ProfEndNamedEvent();
    return;
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Normal_Update");
  IsUsingNoCollMovement = PM_IsUsingNoCollMovement(pm);
  if ( !IsUsingNoCollMovement )
  {
    PM_UpdateAimDownSightFlag(pm, pml);
    PM_UpdateSprint(pm, pml);
    PM_UpdatePlayerWalkingFlag(pm);
    PM_UpdateCustomAnimFlags(pm);
    PM_CheckDuck(pm, pml);
    PM_GroundTrace(pm, pml, 0);
    PM_CheckKnockbackFlag(pm, pml);
  }
  Mantle_Update(pm, pml, lastSprinting, lastSprintState);
  Jump_Update(pm);
  if ( IsUsingNoCollMovement )
  {
    if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11924, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
      __debugbreak();
    v17 = pm->ps;
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11926, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_Normal_UpdateNoCollide");
    PM_ClearLadderFlag(pm->weaponMap, v17);
    v17->groundEntityNum = 2047;
    pm->ground->groundPlane = 0;
    pm->ground->walking = 0;
    PM_CheckDuck(pm, pml);
    PM_UpdateAimDownSightFlag(pm, pml);
    PM_UpdateSprint(pm, pml);
    PM_UpdatePlayerWalkingFlag(pm);
    PM_UpdateCustomAnimFlags(pm);
    PM_PlayerMoveNoCollide(pm, pml);
    PM_Weapon(pm, pml);
    Sys_ProfEndNamedEvent();
  }
  else
  {
    PM_Normal_UpdateCollide(pm, pml, prevEffStance);
  }
  PM_CarryObject_UpdateGestureState(pm, pml);
  PM_UpdateASM(pm, pml);
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_Normal_UpdateCollide
==============
*/
void PM_Normal_UpdateCollide(pmove_t *pm, pml_t *pml, const EffectiveStance prevEffStance)
{
  playerState_s *ps; 
  const dvar_t *v7; 
  bool enabled; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float frametime; 

  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11988, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Normal_UpdateCollide");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11992, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11992, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF008008, "PM_Normal_UpdateCollide Update States");
  PM_UpdateImpulseFields(pm, pml);
  PM_UpdatePronePitch(pm, pml);
  PM_DropTimers(pm, pml);
  if ( ps->pm_type >= 7 )
    PM_DeadMove(pm, pml);
  PM_CheckLadderMove(pm, pml);
  PM_CheckStairsMove(pm, pml);
  Slide_Update(pm, pml);
  Jump_HandleLateJump(pm, pml);
  PM_Skydive_Update(pm, pml);
  Sys_ProfEndNamedEvent();
  PM_PlayerMoveCollide(pm, pml);
  v7 = DCONST_DVARBOOL_bg_slope_use_cylinder_trace_normal;
  if ( !DCONST_DVARBOOL_bg_slope_use_cylinder_trace_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_slope_use_cylinder_trace_normal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  enabled = v7->current.enabled;
  if ( enabled )
    PM_SlopeWorldmodel_Update(pm, pml);
  PM_GroundTrace(pm, pml, 1);
  if ( !enabled )
    PM_SlopeWorldmodel_Update(pm, pml);
  PM_Skydive_UpdatePostGroundTrace(pm, pml);
  PM_CheckKnockbackFlag(pm, pml);
  PM_UpdateCustomAnimFlags(pm);
  PM_Footsteps(pm, pml);
  PM_StanceSounds(prevEffStance, pm, pml);
  PM_Weapon(pm, pml);
  if ( !BG_IsPlayerZeroG(ps) )
  {
    v9 = ps->velocity.v[0];
    v10 = ps->velocity.v[1];
    v11 = ps->velocity.v[2];
    v12 = ps->origin.v[0] - pml->previous_origin.v[0];
    v13 = ps->origin.v[1] - pml->previous_origin.v[1];
    v14 = ps->origin.v[2] - pml->previous_origin.v[2];
    frametime = pml->frametime;
    if ( (float)((float)((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14)) / (float)(frametime * frametime)) < (float)((float)((float)((float)((float)(v10 + pml->impulseFieldVelocity.v[1]) * (float)(v10 + pml->impulseFieldVelocity.v[1])) + (float)((float)(v9 + pml->impulseFieldVelocity.v[0]) * (float)(v9 + pml->impulseFieldVelocity.v[0]))) + (float)((float)(v11 + pml->impulseFieldVelocity.v[2]) * (float)(v11 + pml->impulseFieldVelocity.v[2]))) * 0.25) )
    {
      if ( (float)((float)((float)(v13 * v10) + (float)(v12 * v9)) + (float)(v14 * v11)) >= 0.0 )
      {
        ps->velocity.v[0] = (float)(1.0 / frametime) * v12;
        ps->velocity.v[1] = v13 * (float)(1.0 / frametime);
        ps->velocity.v[2] = v14 * (float)(1.0 / frametime);
      }
      else
      {
        *(_QWORD *)ps->velocity.v = 0i64;
        ps->velocity.v[2] = 0.0;
      }
    }
  }
  PM_DropAnimTimers(pm, pml);
  if ( BG_IsPlayerVelocityQuantized(ps) )
  {
    _XMM2 = 0i64;
    __asm { vroundss xmm2, xmm2, xmm0, 1 }
    ps->velocity.v[0] = *(float *)&_XMM2;
    _XMM3 = 0i64;
    __asm { vroundss xmm3, xmm3, xmm1, 1 }
    ps->velocity.v[1] = *(float *)&_XMM3;
    _XMM3 = 0i64;
    __asm { vroundss xmm3, xmm3, xmm1, 1 }
    ps->velocity.v[2] = *(float *)&_XMM3;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_PlayerMoveCollide
==============
*/
void PM_PlayerMoveCollide(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  playerState_s *v5; 
  const dvar_t *v6; 

  Sys_ProfBeginNamedEvent(0xFF808080, "PM_PlayerMoveCollide");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11833, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11833, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->vehicleState.entity != 2047 )
  {
    if ( !BG_IsInAir(ps, 0) )
      goto LABEL_35;
    *(_DWORD *)&pm->cmd.forwardmove = 0;
  }
  if ( !BG_GameInterface_UpdatePlayerMoveCollide(pm, pml) )
  {
    if ( BG_ContextMount_IsActive(ps) )
    {
      PM_ContextMount_UpdateMove(pm, pml);
    }
    else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
    {
      PM_LadderMove(pm, pml);
    }
    else if ( BG_IsPlayerInExecution(ps) )
    {
      PM_ExecutionMove(pm, pml);
    }
    else if ( BG_IsPlayerSwimming(ps) )
    {
      PM_SwimMove(pm, pml);
    }
    else if ( BG_IsPlayerZeroGFloating(ps) )
    {
      v5 = pm->ps;
      Sys_ProfBeginNamedEvent(0xFF808080, "PM_ZeroGravityMove");
      v6 = DCONST_DVARMPBOOL_antilagZeroG;
      if ( !DCONST_DVARMPBOOL_antilagZeroG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagZeroG") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v6->current.enabled && BG_IsPlayerZeroG(v5) && !BG_IsPlayerZeroGWalking(v5) )
        PM_ResolvePlayerPenetration(pm, &v5->origin, NULL, pm->bounds, NULL, pm->tracemask, 0, &v5->origin, NULL);
      PM_ZeroGravityMoveLinear(pm, pml);
      PM_ZeroGravityMoveAngular(pm, pml);
      PM_ZeroGravityMoveCorrectWorldUp(pm);
      Sys_ProfEndNamedEvent();
    }
    else if ( BG_Skydive_IsSkydiving(ps) || BG_Skydive_IsWeaponRaise(ps) )
    {
      PM_Skydive_Move(pm, pml);
    }
    else if ( pm->ground->walking )
    {
      PM_WalkMove(pm, pml);
    }
    else if ( !BG_IsPlayerZeroG(ps) )
    {
      PM_AirMove(pm, pml);
    }
  }
LABEL_35:
  PM_PostPlayerMoveCollide(pm, pml);
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_PlayerMoveNoCollide
==============
*/
void PM_PlayerMoveNoCollide(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11793, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11793, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
  {
    Mantle_Move(pm, pml);
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11813, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled PM_PlayerMoveNoCollide type") )
  {
    __debugbreak();
  }
}

/*
==============
PM_PmoveLocal_Init
==============
*/
void PM_PmoveLocal_Init(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  int WeaponHand; 
  int *prevWeaponStates; 
  __int64 v7; 
  int *p_weaponState; 
  int v9; 
  const dvar_t *v10; 
  int integer; 
  const dvar_t *v12; 
  int v13; 
  int commandTime; 
  int v15; 

  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11594, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11596, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11596, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  memset_0(pml, 0, sizeof(pml_t));
  WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
  if ( WeaponHand >= 0 )
  {
    prevWeaponStates = pml->prevWeaponStates;
    v7 = WeaponHand + 1i64;
    p_weaponState = &ps->weapState[0].weaponState;
    do
    {
      v9 = *p_weaponState;
      p_weaponState += 20;
      *prevWeaponStates++ = v9;
      --v7;
    }
    while ( v7 );
  }
  v10 = DCONST_DVARINT_com_userCmdMaxTimeStep;
  if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  integer = v10->current.integer;
  v12 = DCONST_DVARINT_com_userCmdMinTimeStep;
  if ( !DCONST_DVARINT_com_userCmdMinTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMinTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = v12->current.integer;
  commandTime = ps->commandTime;
  if ( pm == (pmove_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  v15 = I_clamp(pm->cmd.commandTime - commandTime, v13, integer);
  pml->msec = v15;
  pml->meleeFired = 0;
  pml->frametime = (float)v15 * 0.001;
  pml->previous_origin.v[0] = ps->origin.v[0];
  pml->previous_origin.v[1] = ps->origin.v[1];
  pml->previous_origin.v[2] = ps->origin.v[2];
  pml->previous_velocity.v[0] = ps->velocity.v[0];
  pml->previous_velocity.v[1] = ps->velocity.v[1];
  pml->previous_velocity.v[2] = ps->velocity.v[2];
  PM_ContextMount_CachePrevViewAngles(pm, pml);
  BGMovingPlatformClient::ResolvePlatformUp(pm->movingPlatforms, ps, &pml->platformUp);
  pml->prevEffectiveStance = PM_GetEffectiveStance(ps);
  pml->ladderWidth = 15.2496;
}

/*
==============
PM_PmoveLocal_SetViewAngles
==============
*/
void PM_PmoveLocal_SetViewAngles(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  int commandTime; 
  vec3_t angles; 

  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11645, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11647, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11647, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( pm == (pmove_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  commandTime = pm->cmd.commandTime;
  _XMM2 = 0i64;
  __asm { vroundss xmm0, xmm2, xmm1, 1 }
  if ( precision <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12970, ASSERT_TYPE_ASSERT, "(precision > 0.0f)", (const char *)&queryFormat, "precision > 0.0f") )
    __debugbreak();
  if ( dword_14BB4768C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14BB4768C);
    if ( dword_14BB4768C == -1 )
    {
      invPrecision = 1.0 / precision;
      j__Init_thread_footer(&dword_14BB4768C);
    }
  }
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  pml->holdrand = 159719620 - 570470319 * (commandTime + (int)*(float *)&_XMM3);
  angles = ps->viewangles;
  WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&pm->refFrame, &angles);
  AngleVectors(&angles, &pml->forward, &pml->right, &pml->up);
}

/*
==============
PM_Pmove_GetHoldRand
==============
*/
__int64 PM_Pmove_GetHoldRand(const usercmd_s *const cmd, playerState_s *ps)
{
  int commandTime; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  commandTime = cmd->commandTime;
  _XMM2 = 0i64;
  __asm { vroundss xmm0, xmm2, xmm1, 1 }
  if ( precision <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12970, ASSERT_TYPE_ASSERT, "(precision > 0.0f)", (const char *)&queryFormat, "precision > 0.0f") )
    __debugbreak();
  if ( dword_14BB4768C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14BB4768C);
    if ( dword_14BB4768C == -1 )
    {
      invPrecision = 1.0 / precision;
      j__Init_thread_footer(&dword_14BB4768C);
    }
  }
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  return (unsigned int)(159719620 - 570470319 * (commandTime + (int)*(float *)&_XMM3));
}

/*
==============
PM_PostPlayerMoveCollide
==============
*/
void PM_PostPlayerMoveCollide(pmove_t *pm, pml_t *pml)
{
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11820, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11820, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml->ranSkydiveUpdate )
    PM_Skydive_End(pm, pml, 0);
}

/*
==============
PM_ProjectVelocity
==============
*/
void PM_ProjectVelocity(const pmove_t *pm, const vec3_t *velInConst, const vec3_t *normalConst, vec3_t *velOut)
{
  float v4; 
  WorldUpReferenceFramePM *p_refFrame; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  vec3_t v13; 
  vec3_t vec; 

  v4 = velInConst->v[1];
  vec.v[0] = velInConst->v[0];
  p_refFrame = &pm->refFrame;
  vec.v[2] = velInConst->v[2];
  vec.v[1] = v4;
  WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&pm->refFrame, &vec);
  v9 = normalConst->v[1];
  v13.v[0] = normalConst->v[0];
  v13.v[2] = normalConst->v[2];
  v13.v[1] = v9;
  WorldUpReferenceFrame::RemoveReferenceFrameFromVector(p_refFrame, &v13);
  v10 = vec.v[1];
  if ( COERCE_FLOAT(LODWORD(v13.v[2]) & _xmm) < 0.001 || (float)((float)(vec.v[1] * vec.v[1]) + (float)(vec.v[0] * vec.v[0])) == 0.0 )
  {
    velOut->v[0] = velInConst->v[0];
    velOut->v[1] = velInConst->v[1];
    velOut->v[2] = velInConst->v[2];
  }
  else
  {
    LODWORD(v11) = COERCE_UNSIGNED_INT((float)((float)(vec.v[1] * v13.v[1]) + (float)(vec.v[0] * v13.v[0])) / v13.v[2]) ^ _xmm;
    v12 = fsqrt((float)((float)(vec.v[2] * vec.v[2]) + (float)((float)(vec.v[1] * vec.v[1]) + (float)(vec.v[0] * vec.v[0]))) / (float)((float)(v11 * v11) + (float)((float)(vec.v[1] * vec.v[1]) + (float)(vec.v[0] * vec.v[0]))));
    if ( v12 < 1.0 || (float)((float)((float)(vec.v[1] * v13.v[1]) + (float)(vec.v[0] * v13.v[0])) / v13.v[2]) > -0.0 || vec.v[2] > 0.0 )
    {
      velOut->v[0] = vec.v[0] * v12;
      velOut->v[2] = v11 * v12;
      velOut->v[1] = v10 * v12;
      WorldUpReferenceFrame::ApplyReferenceFrameToVector(p_refFrame, velOut);
    }
  }
}

/*
==============
PM_ProjectVelocityWallRunZeroGrav
==============
*/
void PM_ProjectVelocityWallRunZeroGrav(const pmove_t *pm, const vec3_t *velInConst, const vec3_t *normalConst, vec3_t *velOut)
{
  float v4; 
  float v5; 
  float v7; 
  __int128 v8; 
  vec3_t out; 

  v4 = velInConst->v[0];
  v5 = fsqrt((float)((float)(v4 * v4) + (float)(velInConst->v[1] * velInConst->v[1])) + (float)(velInConst->v[2] * velInConst->v[2]));
  if ( v5 == 0.0 )
  {
    velOut->v[0] = v4;
    velOut->v[1] = velInConst->v[1];
    velOut->v[2] = velInConst->v[2];
  }
  else
  {
    PM_ClipVelocityOverClip(NULL, velInConst, normalConst, NULL, 0.0, &out);
    v7 = out.v[2];
    v8 = LODWORD(out.v[0]);
    *(float *)&v8 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(out.v[1] * out.v[1])) + (float)(v7 * v7));
    _XMM3 = v8;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    *(float *)&v8 = out.v[1] * (float)(1.0 / *(float *)&_XMM0);
    velOut->v[0] = (float)(out.v[0] * (float)(1.0 / *(float *)&_XMM0)) * v5;
    velOut->v[1] = *(float *)&v8 * v5;
    velOut->v[2] = (float)(v7 * (float)(1.0 / *(float *)&_XMM0)) * v5;
  }
}

/*
==============
PM_ProneOverride_Update
==============
*/
void PM_ProneOverride_Update(pmove_t *pm)
{
  playerState_s *ps; 
  unsigned __int64 weaponState; 
  __int64 v4; 
  unsigned __int64 v5; 
  const Weapon *UsedOffHandWeapon; 
  const Weapon *v7; 
  unsigned int GestureIdxForWeapon; 
  int v9; 
  int Int_Internal_DebugName; 
  int v11; 
  unsigned int outSlot; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11515, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11515, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) || BG_UsingSniperScope(pm->weaponMap, ps) || ps->vehicleState.entity != 2047 )
  {
LABEL_17:
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0xEu);
    goto LABEL_18;
  }
  if ( !pm->cmd.forwardmove && !pm->cmd.rightmove )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u) )
      goto LABEL_18;
    weaponState = ps->weapState[0].weaponState;
    if ( (unsigned int)weaponState > 0x32 )
      goto LABEL_18;
    v4 = 0x4000000041FBFi64;
    if ( !_bittest64(&v4, weaponState) )
      goto LABEL_18;
    v5 = ps->weapState[1].weaponState;
    if ( (unsigned int)v5 > 0x32 || !_bittest64(&v4, v5) )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( PM_InteruptWeaponWithProneMove(pm) )
  {
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0xEu);
    PM_ExitAimDownSight(pm);
  }
LABEL_18:
  if ( ((PM_GetEffectiveStance(ps) - 1) & 0xFFFFFFFD) == 0 )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xEu) )
      goto LABEL_27;
    UsedOffHandWeapon = PM_Weapon_GetUsedOffHandWeapon(pm->weaponMap, ps);
    v7 = UsedOffHandWeapon;
    if ( UsedOffHandWeapon->weaponIdx )
    {
      if ( BG_WeaponDoesNotFullyAnimateViewmodelPlayerState(ps, UsedOffHandWeapon, 0) )
      {
        GestureIdxForWeapon = BG_Offhand_GetGestureIdxForWeapon(ps, pm->weaponMap, v7, 0, OHGT_THROW);
        if ( GestureIdxForWeapon != 256 )
        {
          outSlot = 2;
          if ( BG_Gesture_IsPlayingByIndex(ps, GestureIdxForWeapon, &outSlot) )
          {
            v9 = pm->cmd.serverTime - BG_Gesture_GetStartTime(ps, outSlot);
            Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_gestureOffhandThrowProneMovementBlockTime, "bg_gestureOffhandThrowProneMovementBlockTime");
            v11 = 0;
            if ( v9 > 0 )
              v11 = v9;
            if ( v11 <= Int_Internal_DebugName )
LABEL_27:
              *(_WORD *)&pm->cmd.forwardmove = 0;
          }
        }
      }
    }
  }
}

/*
==============
PM_RefreshSprint
==============
*/
void PM_RefreshSprint(playerState_s *ps, const BgWeaponMap *weaponMap)
{
  const dvar_t *v4; 
  int serverTime; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1876, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1877, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v4 = DCONST_DVARMPBOOL_superSprintEnable;
  serverTime = ps->serverTime;
  if ( !DCONST_DVARMPBOOL_superSprintEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    if ( BG_IsSuperSprinting(ps) )
    {
      ps->sprintState.lastSuperSprintStart = serverTime;
LABEL_17:
      ps->sprintState.sprintStartMaxLength = BG_GetMaxSprintTime(weaponMap, ps);
      return;
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
    {
      ps->sprintState.lastSuperSprintEnd = ps->sprintState.lastSuperSprintStart;
      goto LABEL_17;
    }
  }
  else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
  {
    ps->sprintState.lastSprintStart = serverTime;
    goto LABEL_17;
  }
  ps->sprintState.lastSprintEnd -= 99999;
  ps->sprintState.lastSprintStart -= 99999;
}

/*
==============
PM_RestartSprintTimers
==============
*/
void PM_RestartSprintTimers(pmove_t *pm, const pml_t *pml, const bool startSuperSprint)
{
  playerState_s *ps; 
  int SprintLeftRaw; 
  int serverTime; 
  BgWeaponMap *weaponMap; 
  int MaxSprintTime; 
  int v11; 
  __int64 v12; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 884, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 885, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  ps = pm->ps;
  SprintLeftRaw = PM_GetSprintLeftRaw(pm->weaponMap, ps, pm->cmd.serverTime);
  ps->sprintState.lastSprintStart = pm->cmd.serverTime;
  if ( startSuperSprint )
    ps->sprintState.lastSuperSprintStart = pm->cmd.serverTime;
  else
    ps->sprintState.lastSuperSprintEnd = ps->sprintState.lastSuperSprintStart;
  serverTime = ps->serverTime;
  weaponMap = pm->weaponMap;
  if ( SprintLeftRaw < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 786, ASSERT_TYPE_ASSERT, "(remainingTime >= 0)", (const char *)&queryFormat, "remainingTime >= 0") )
    __debugbreak();
  MaxSprintTime = BG_GetMaxSprintTime(weaponMap, ps);
  v11 = SprintLeftRaw + ps->sprintState.sprintStartMaxLength - PM_GetSprintLeftRaw(weaponMap, ps, serverTime);
  if ( MaxSprintTime < 0 )
  {
    LODWORD(v12) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v12, MaxSprintTime) )
      __debugbreak();
  }
  if ( MaxSprintTime < v11 )
    v11 = MaxSprintTime;
  if ( v11 < 0 )
    v11 = 0;
  ps->sprintState.sprintStartMaxLength = v11;
}

/*
==============
PM_SetJumpStrafeCondition
==============
*/
void PM_SetJumpStrafeCondition(pmove_t *pm)
{
  char forwardmove; 
  PlayerAnimStrafeStates v3; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8609, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  forwardmove = pm->cmd.forwardmove;
  if ( forwardmove || pm->cmd.rightmove )
  {
    v3 = BG_DetermineStrafeCondition(pm, (float)forwardmove, (float)pm->cmd.rightmove);
    PM_SetStrafeCondition(pm, v3);
  }
}

/*
==============
PM_SetPitchValues
==============
*/
void PM_SetPitchValues(const playerState_s *ps, pmove_t *pm)
{
  __int128 v4; 
  float v12; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12491, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12492, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( ((PM_GetEffectiveStance(ps) - 1) & 0xFFFFFFFD) != 0 )
  {
    pm->fTorsoPitch = 0.0;
    pm->fWaistPitch = 0;
  }
  else
  {
    if ( ps->viewHeightLerpTime )
    {
      v4 = 0i64;
      *(float *)&v4 = (float)(pm->cmd.serverTime - ps->viewHeightLerpTime) / (float)PM_GetViewHeightLerpTime(ps, ps->viewHeightLerpTarget, ps->viewHeightLerpDown);
      _XMM2 = v4;
      _XMM4 = 0i64;
      if ( *(float *)&v4 >= 0.0 )
        __asm { vminss  xmm4, xmm2, xmm0 }
      _XMM0 = (unsigned int)ps->viewHeightLerpDown;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm8, xmm4, xmm3, xmm2
      }
    }
    else
    {
      *(float *)&_XMM8 = FLOAT_1_0;
    }
    _XMM7 = 0i64;
    __asm { vroundss xmm2, xmm7, xmm1, 1 }
    v12 = pm->fWaistPitch * 0.0027777778;
    pm->fTorsoPitch = (float)((float)((float)(pm->fTorsoPitch * 0.0027777778) - *(float *)&_XMM2) * 360.0) * *(float *)&_XMM8;
    __asm { vroundss xmm2, xmm7, xmm1, 1 }
    pm->fWaistPitch = (float)((float)(v12 - *(float *)&_XMM2) * 360.0) * *(float *)&_XMM8;
  }
}

/*
==============
PM_SetProneMovementOverride
==============
*/
void PM_SetProneMovementOverride(playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10587, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0xEu);
}

/*
==============
PM_SetSprintLeft
==============
*/
void PM_SetSprintLeft(const BgWeaponMap *weaponMap, playerState_s *ps, const int gametime, int remainingTime)
{
  int MaxSprintTime; 
  int v9; 
  __int64 v10; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 785, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( remainingTime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 786, ASSERT_TYPE_ASSERT, "(remainingTime >= 0)", (const char *)&queryFormat, "remainingTime >= 0") )
    __debugbreak();
  MaxSprintTime = BG_GetMaxSprintTime(weaponMap, ps);
  v9 = remainingTime + ps->sprintState.sprintStartMaxLength - PM_GetSprintLeftRaw(weaponMap, ps, gametime);
  if ( MaxSprintTime < 0 )
  {
    LODWORD(v10) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v10, MaxSprintTime) )
      __debugbreak();
  }
  if ( MaxSprintTime < v9 )
    v9 = MaxSprintTime;
  if ( v9 < 0 )
    v9 = 0;
  ps->sprintState.sprintStartMaxLength = v9;
}

/*
==============
PM_SetSprintRestore
==============
*/
void PM_SetSprintRestore(pmove_t *pm, playerState_s *ps, const bool sprintRestore, const bool useDelay, const float delayOverride)
{
  const dvar_t *v8; 
  const Weapon *ViewmodelWeapon; 
  bool v10; 

  if ( !sprintRestore )
    goto LABEL_10;
  v8 = DVARBOOL_sprint_allowRestore;
  if ( !DVARBOOL_sprint_allowRestore && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprint_allowRestore") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
    v10 = BG_UsingAlternate(ps);
    _XMM1 = LODWORD(delayOverride);
    __asm { vcmpneqss xmm0, xmm1, cs:__real@7f7fffff }
    _XMM2 = LODWORD(BG_WeaponDef(ViewmodelWeapon, v10)->sprintRestoreDelay);
    __asm { vblendvps xmm3, xmm2, xmm1, xmm0 }
    if ( *(float *)&_XMM3 > 0.0 && useDelay )
    {
      ps->sprintState.sprintRestore = 0;
      ps->sprintState.sprintRestoreDelayStart = pm->cmd.serverTime - (int)(float)(*(float *)&_XMM3 * -1000.0);
    }
    else
    {
      *(_QWORD *)&ps->sprintState.sprintRestore = 1i64;
    }
  }
  else
  {
LABEL_10:
    *(_QWORD *)&ps->sprintState.sprintRestore = 0i64;
  }
}

/*
==============
PM_SetStance
==============
*/
void PM_SetStance(pmove_t *pm, pml_t *pml, const EffectiveStance stance)
{
  playerState_s *ps; 
  const SuitDef *SuitDef; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  __int32 v9; 
  __int32 v10; 
  entity_event_t v11; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6542, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6543, ASSERT_TYPE_ASSERT, "(pm->bounds)", (const char *)&queryFormat, "pm->bounds") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6545, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6548, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  p_eFlags = &ps->eFlags;
  v9 = stance - 1;
  if ( !v9 )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(p_eFlags, ACTIVE, 4u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 3u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
    *pm->bounds = *BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_PRONE);
    v11 = EV_STANCE_FORCE_PRONE;
    goto LABEL_20;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(p_eFlags, ACTIVE, 3u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 4u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 1u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
    *pm->bounds = *BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DUCKED);
    v11 = EV_STANCE_FORCE_CROUCH;
    goto LABEL_20;
  }
  if ( v10 != 1 )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(p_eFlags, ACTIVE, 3u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 4u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
    *pm->bounds = *BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DEFAULT);
    v11 = EV_STANCE_FORCE_STAND;
LABEL_20:
    BG_AddPredictableEventToPlayerstate(v11, 0, pm->cmd.serverTime, pm->weaponMap, ps);
    goto LABEL_21;
  }
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(p_eFlags, ACTIVE, 4u);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 3u);
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0);
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
  *pm->bounds = *BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_LASTSTANDCRAWL);
LABEL_21:
  ps->viewHeightTarget = SuitDef->viewheight_stand;
  PM_ViewHeightAdjust(pm, pml);
}

/*
==============
PM_SetStrafeCondition
==============
*/
void PM_SetStrafeCondition(pmove_t *pm, const PlayerAnimStrafeStates strafeState)
{
  unsigned __int64 v2; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 

  v2 = strafeState;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8628, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8629, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8630, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, pm->ps->clientNum);
  BG_SetConditionValue(CharacterInfo, 7, v2);
}

/*
==============
PM_SetupMoveCommand
==============
*/
char PM_SetupMoveCommand(pmove_t *pm, int *outMoveTime)
{
  playerState_s *ps; 
  usercmd_s *p_cmd; 
  int commandTime; 
  __int64 v7; 
  int v8; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12537, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12537, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outMoveTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12539, ASSERT_TYPE_ASSERT, "(outMoveTime)", (const char *)&queryFormat, "outMoveTime") )
    __debugbreak();
  p_cmd = &pm->cmd;
  if ( pm == (pmove_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  commandTime = pm->cmd.commandTime;
  *outMoveTime = commandTime;
  if ( pm->cmd.serverTime < ps->serverTime || commandTime < ps->commandTime )
    return 0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x10u) )
    {
      p_cmd->buttons &= 0x400C0ui64;
    }
    else
    {
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xFu) )
        goto LABEL_21;
      p_cmd->buttons &= 0x400C1ui64;
    }
    *(_WORD *)&pm->cmd.forwardmove = 0;
  }
LABEL_21:
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Cu) || (p_cmd->buttons & 0x40000) != 0 )
  {
    *(_WORD *)&pm->cmd.forwardmove = 0;
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 7u) )
      v7 = p_cmd->buttons & 0x2402C1;
    else
      v7 = p_cmd->buttons & 0x400C0;
    p_cmd->buttons = v7;
  }
  if ( GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, ACTIVE, 2u) && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_player_disableMovementInWeaponViewOnly, "player_disableMovementInWeaponViewOnly") )
  {
    p_cmd->buttons &= 0xFFFFFFFFFFFFFEF9ui64;
    *(_WORD *)&pm->cmd.forwardmove = 0;
  }
  if ( *outMoveTime > ps->commandTime + 1000 )
  {
    v8 = *outMoveTime - 1000;
    ps->commandTime = v8;
    ps->commandTimeInterpolated = v8;
  }
  return 1;
}

/*
==============
PM_SetupMoveState
==============
*/
void PM_SetupMoveState(pmove_t *pm)
{
  __int128 v1; 
  playerState_s *ps; 
  playerState_s *v4; 
  usercmd_s *p_cmd; 
  const dvar_t *v6; 
  _QWORD *v; 
  double UpContribution; 
  double Float_Internal_DebugName; 
  unsigned __int64 buttons; 
  bool v11; 
  bool IsUsingOffhandGestureWeaponADSActive; 
  char forwardmove; 
  WorldUpReferenceFrame v14; 
  __int128 v15; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11324, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11324, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = pm->ps;
  p_cmd = &pm->cmd;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11307, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( pm == (pmove_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11308, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|0x80) && (p_cmd->buttons & 0x8000000000i64) != 0 )
  {
    if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 138, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&v4->otherFlags, ACTIVE, 0x2Eu);
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x16u) && !BG_IsPlayerZeroGFloating(ps) && !BG_IsThirdPersonMode(pm->weaponMap, ps) )
    *(_WORD *)&pm->cmd.forwardmove = 127;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x10u) )
  {
    p_cmd->buttons &= 0x4C0ui64;
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0);
    *(_WORD *)&pm->cmd.forwardmove = 0;
    *(_QWORD *)ps->velocity.v = 0i64;
    ps->velocity.v[2] = 0.0;
    if ( ps->vehicleState.entity != 2047 )
    {
      *(_QWORD *)ps->vehicleState.velocity.v = 0i64;
      ps->vehicleState.velocity.v[2] = 0.0;
    }
    goto LABEL_50;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|0x80) )
  {
    if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x2Eu) )
    {
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0);
      *(_WORD *)&pm->cmd.forwardmove = 0;
      v6 = DCONST_DVARMPBOOL_cursorHintControlLockSnapVelocity;
      if ( !DCONST_DVARMPBOOL_cursorHintControlLockSnapVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cursorHintControlLockSnapVelocity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v6->current.enabled )
      {
        v = (_QWORD *)ps->velocity.v;
        if ( BG_IsPlayerZeroGFloating(ps) )
        {
          *v = 0i64;
          ps->velocity.v[2] = 0.0;
        }
        else
        {
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v14, ps, pm->m_bgHandler);
          UpContribution = WorldUpReferenceFrame::GetUpContribution(&v14, &ps->velocity);
          *v = 0i64;
          ps->velocity.v[2] = 0.0;
          WorldUpReferenceFrame::SetUpContribution(&v14, *(float *)&UpContribution, &ps->velocity);
        }
      }
      goto LABEL_50;
    }
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xFu) )
  {
    p_cmd->buttons &= 0x4C1ui64;
LABEL_41:
    *(_WORD *)&pm->cmd.forwardmove = 0;
    *(_QWORD *)ps->velocity.v = 0i64;
    ps->velocity.v[2] = 0.0;
    goto LABEL_50;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x20u) )
    goto LABEL_41;
  if ( PM_IsPlayerFrozenByWeapon(pm->weaponMap, ps) )
  {
    p_cmd->buttons &= ~0x100ui64;
    *(_WORD *)&pm->cmd.forwardmove = 0;
    *(_QWORD *)ps->velocity.v = 0i64;
    ps->velocity.v[2] = 0.0;
  }
  else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x2Bu) )
  {
    v15 = v1;
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_player_limitedMovementLeftStickInputScale, "player_limitedMovementLeftStickInputScale");
    if ( (*(float *)&Float_Internal_DebugName < 0.0 || *(float *)&Float_Internal_DebugName > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11415, ASSERT_TYPE_ASSERT, "((leftStickInputScale >= 0.f) && (leftStickInputScale <= 1.f))", (const char *)&queryFormat, "(leftStickInputScale >= 0.f) && (leftStickInputScale <= 1.f)") )
      __debugbreak();
    pm->cmd.forwardmove = (int)(float)((float)pm->cmd.forwardmove * *(float *)&Float_Internal_DebugName);
    pm->cmd.rightmove = (int)(float)((float)pm->cmd.rightmove * *(float *)&Float_Internal_DebugName);
  }
LABEL_50:
  buttons = p_cmd->buttons;
  if ( (p_cmd->buttons & 0x800000) != 0 )
  {
    *(_WORD *)&pm->cmd.forwardmove = 0;
    p_cmd->buttons = buttons & 0x8106C2;
  }
  if ( ps->locationSelectionInfo && !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) && (ps->locationSelectionInfo & 0xE0) != 0x80 )
  {
    p_cmd->buttons &= 0x6C2ui64;
    *(_WORD *)&pm->cmd.forwardmove = 0;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x25u) || BG_IsPlayerInExecution(ps) && BG_Execution_CanUpdateViewangles(ps) )
    p_cmd->buttons &= ~1ui64;
  if ( ps->pm_type >= 7 )
    pm->tracemask &= 0xFDFFBFFF;
  v11 = ((PM_GetEffectiveStance(ps) - 1) & 0xFFFFFFFD) == 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u) || (IsUsingOffhandGestureWeaponADSActive = BG_IsUsingOffhandGestureWeaponADSActive(ps)) )
    IsUsingOffhandGestureWeaponADSActive = 1;
  if ( v11 && IsUsingOffhandGestureWeaponADSActive && !BG_UsingSniperScope(pm->weaponMap, ps) && ps->vehicleState.entity == 2047 )
    *(_WORD *)&pm->cmd.forwardmove = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) )
  {
    if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 149, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x3Au);
  }
  if ( ps->pm_type < 7 && (p_cmd->buttons & 0x41) == 0 )
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0xFu);
  if ( !BG_GetSuitDef(ps->suitIndex)->isMovementCameraIndependent )
  {
    forwardmove = pm->cmd.forwardmove;
    if ( forwardmove < 0 )
    {
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0xAu);
      goto LABEL_84;
    }
    if ( forwardmove <= 0 && !pm->cmd.rightmove )
      goto LABEL_84;
  }
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0xAu);
LABEL_84:
  if ( ps->pm_type >= 7 )
    *(_WORD *)&pm->cmd.forwardmove = 0;
}

/*
==============
PM_ShouldMakeFootsteps
==============
*/
_BOOL8 PM_ShouldMakeFootsteps(pmove_t *pm)
{
  playerState_s *ps; 
  const SuitDef *SuitDef; 
  EffectiveStance EffectiveStance; 
  __int32 v5; 
  __int32 v6; 
  const dvar_t *v8; 
  const char *v9; 
  double Float_Internal_DebugName; 
  float v11; 
  double SpeedScale; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
  {
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7476, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    ps = pm->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7476, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( PM_IsInAir(pm) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
      return 0i64;
    SuitDef = BG_GetSuitDef(ps->suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7485, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    if ( SuitDef->suitAnimType != ANIM_SUIT_C8 )
    {
      EffectiveStance = PM_GetEffectiveStance(ps);
      if ( EffectiveStance == PM_EFF_STANCE_DEFAULT )
      {
        v8 = DCONST_DVARMPSPFLT_player_footstepsThreshhold;
        v9 = "player_footstepsThreshhold";
        goto LABEL_30;
      }
      v5 = EffectiveStance - 1;
      if ( !v5 )
      {
        if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7507, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::PRONE ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::PRONE )") )
          __debugbreak();
LABEL_28:
        v8 = DCONST_DVARMPSPFLT_player_footstepsThreshholdProne;
        v9 = "player_footstepsThreshholdProne";
LABEL_30:
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v8, v9);
        v11 = *(float *)&Float_Internal_DebugName;
        SpeedScale = PM_Slope_GetSpeedScale(&ps->velocity, pm);
        return (float)(*(float *)&SpeedScale * v11) <= pm->speed;
      }
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          return 0i64;
        goto LABEL_28;
      }
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
      {
        if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7503, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::DUCKED ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::DUCKED )") )
          __debugbreak();
        v8 = DCONST_DVARMPSPFLT_player_footstepsThreshholdCrouch;
        v9 = "player_footstepsThreshholdCrouch";
        goto LABEL_30;
      }
      return 0i64;
    }
  }
  return 1i64;
}

/*
==============
PM_ShouldSprintEnd
==============
*/
char PM_ShouldSprintEnd(pmove_t *pm, const pml_t *pml)
{
  playerState_s *ps; 
  unsigned __int64 buttons; 
  bool v7; 
  bool v8; 
  const dvar_t *v9; 
  playerState_s *v10; 
  unsigned __int64 v11; 
  float v12; 
  bool v13; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1799, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1799, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PM_GetSprintLeft(pm->weaponMap, pm, pm->cmd.serverTime) <= 0 )
  {
    ps->sprintState.sprintDelay = 1;
    return 1;
  }
  buttons = pm->cmd.buttons;
  v7 = (buttons & 0x8000000000000i64) != 0;
  v8 = (pm->oldcmd.buttons & 2) == 0 && (buttons & 2) != 0;
  v9 = DCONST_DVARINT_bg_disableToggleSprint;
  if ( !DCONST_DVARINT_bg_disableToggleSprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_disableToggleSprint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.integer == 1 || v7 || !v8 || PM_IsInAir(pm) )
  {
    if ( PM_SprintEndingButtons(pm, pml) )
      goto LABEL_48;
    v10 = pm->ps;
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1704, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v10->pm_flags, ACTIVE, 0x1Du) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v10->pm_flags, ACTIVE, 0x1Eu) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v10->pm_flags, ACTIVE, 0x19u) || (unsigned int)(v10->weapState[0].weaponState - 22) <= 2 && !BG_CanSprintMelee(v10) || PM_IsInAir(pm) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v10->pm_flags, ACTIVE, 0x13u) )
    {
LABEL_48:
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
      {
        v12 = FLOAT_3_4028235e38;
        v13 = PM_AnyAttackButtonPressed(pm);
        if ( !BG_CanSprintReload(ps) && (pm->cmd.buttons & 0x20) != 0 )
        {
          v13 = 1;
          v12 = (float)Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_sprintReloadPredictionFixSprintRestoreDelay, "bg_sprintReloadPredictionFixSprintRestoreDelay") * 0.001;
        }
        PM_SetSprintRestore(pm, ps, 1, v13, v12);
      }
    }
    else if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) && !BG_IsPlayerInExecution(ps) && ps->pm_type <= 1u && BG_GetMaxSprintTime(pm->weaponMap, ps) > 0 )
    {
      v11 = pm->cmd.buttons;
      if ( (v11 & 0x400000000000i64) == 0 || (pm->oldcmd.buttons & 2) == 0 || (v11 & 2) != 0 )
        return 0;
    }
  }
  else
  {
    ps->sprintState.sprintButtonUpRequired = 1;
  }
  return 1;
}

/*
==============
PM_SprintEndingButtons
==============
*/
char PM_SprintEndingButtons(const pmove_t *pm, const pml_t *pml)
{
  playerState_s *ps; 
  shellshock_parms_t *ShellshockParms; 
  bool CanSprintReload; 
  __int64 v7; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v9; 
  bool v10; 
  int v11; 
  bool CanSprintMelee; 
  const Weapon *ViewmodelWeapon; 
  bool v14; 
  int WeaponHand; 
  __int64 v16; 
  int *p_weaponState; 
  bool CanSprintFire; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1107, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1107, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1108, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Eu) )
  {
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x15u) || (ShellshockParms = BG_GetShellshockParms(ps->shellshockIndex), BG_IsPlayerSwimming(ps)) || !ShellshockParms || !ShellshockParms->movement.breakSprint )
    {
      if ( PM_CmdHasMinimumSprintMovement(ps, &pm->cmd) )
      {
        CanSprintReload = BG_CanSprintReload(ps);
        if ( CanSprintReload || (pm->cmd.buttons & 0x20) == 0 || !PM_Weapon_AllowReload(pm->weaponMap, ps, WEAPON_HAND_DEFAULT) )
        {
          v7 = 965i64;
          CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
          if ( BG_IsThrowingAxe(CurrentWeaponForPlayer) )
          {
            v9 = BG_UsingAlternate(ps);
            if ( !BG_IsFauxFists(ps, CurrentWeaponForPlayer, v9) )
              v7 = 132037i64;
          }
          CanSprintFire = BG_CanSprintFire(ps);
          if ( CanSprintFire )
          {
            v10 = BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer);
            v11 = BG_PlayerDualWielding(ps);
            if ( v10 || v11 )
              v7 &= ~0x200ui64;
            v7 &= ~1ui64;
          }
          if ( BG_Demeanor_GetTargetState(ps) == DEMEANOR_STATE_SAFE )
            v7 &= ~1ui64;
          CanSprintMelee = BG_CanSprintMelee(ps);
          if ( CanSprintMelee )
          {
            v7 &= ~4ui64;
            ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
            v14 = BG_UsingAlternate(ps);
            if ( BG_IsMeleeOnlyWeapon(ViewmodelWeapon, v14) )
              v7 &= ~1ui64;
          }
          if ( BG_IsPlayerSwimming(ps) )
            v7 &= 0xFFFFFFFFFFFFFF3Fui64;
          if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
            v7 &= 0xFFFFFFFFFFFFFEFBui64;
          if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x23u) )
            v7 &= ~0x40ui64;
          if ( (v7 & pm->cmd.buttons) == 0 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
          {
            WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
            if ( WeaponHand < 0 )
              goto LABEL_48;
            v16 = 0i64;
            p_weaponState = &ps->weapState[0].weaponState;
            while ( (unsigned int)(*p_weaponState - 18) > 3 )
            {
              ++v16;
              p_weaponState += 20;
              if ( v16 > WeaponHand )
                goto LABEL_48;
            }
            if ( CanSprintReload )
            {
LABEL_48:
              if ( (CanSprintMelee || (unsigned int)(ps->weapState[0].weaponState - 22) > 2) && (BG_CanSprintFireOffhand(pm->weaponMap, ps) || (unsigned int)(ps->weapState[0].weaponState - 26) > 6 && (CanSprintFire || (!BG_Offhand_IsPlayingGesture(pm->weaponMap, ps, OHGT_WEAPON) || BG_Offhand_ScriptWeaponInterruptable(pm->weaponMap, ps, pm->cmd.serverTime)) && (!BG_Offhand_IsPlayingGrenadeGesture(pm->weaponMap, ps) || BG_Offhand_GrenadeGestureInterruptable(pm->weaponMap, ps, pm->cmd.serverTime)))) && BG_NightVisionInterruptable(pm->weaponMap, ps, pm->cmd.serverTime) )
                return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

/*
==============
PM_SprintRestoreShouldTry
==============
*/
bool PM_SprintRestoreShouldTry(playerState_s *ps)
{
  bool result; 

  result = BG_IsQASBoth(ps, QAS_STATE_NONE);
  if ( result )
    return ps->sprintState.sprintRestore != 0;
  return result;
}

/*
==============
PM_SprintScale
==============
*/
float PM_SprintScale(const playerState_s *ps)
{
  const dvar_t *v2; 
  const SuitDef *SuitDef; 
  const dvar_t *v5; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2765, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v2 = DCONST_DVARBOOL_suits_useAssets;
  if ( !DCONST_DVARBOOL_suits_useAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "suits_useAssets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    SuitDef = BG_GetSuitDef(ps->suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2769, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
      __debugbreak();
    return SuitDef->player_sprintSpeedScale;
  }
  else
  {
    v5 = DCONST_DVARMPFLT_player_sprintSpeedScale;
    if ( !DCONST_DVARMPFLT_player_sprintSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    return v5->current.value;
  }
}

/*
==============
PM_SprintStartInterferingButtons
==============
*/
bool PM_SprintStartInterferingButtons(const pmove_t *pm, const int forwardSpeed, const unsigned __int64 buttons, const int gameTime)
{
  playerState_s *ps; 
  BgWeaponMap *weaponMap; 
  const SuitDef *SuitDef; 
  const dvar_t *v9; 
  __int64 v10; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v12; 
  bool v13; 
  bool v14; 
  bool CanSprintMelee; 
  const Weapon *ViewmodelWeapon; 
  bool v17; 
  bool CanSprintFireOffhand; 
  shellshock_parms_t *ShellshockParms; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 959, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 959, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = pm->weaponMap;
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 966, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
    return 1;
  if ( !SuitDef->isMovementCameraIndependent )
  {
    v9 = DCONST_DVARINT_player_sprintForwardMinimum;
    if ( !DCONST_DVARINT_player_sprintForwardMinimum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintForwardMinimum") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( forwardSpeed <= v9->current.integer )
      return 1;
  }
  v10 = 13077i64;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  if ( BG_IsThrowingAxe(CurrentWeaponForPlayer) )
  {
    v12 = BG_UsingAlternate(ps);
    if ( !BG_IsFauxFists(ps, CurrentWeaponForPlayer, v12) )
      v10 = 144149i64;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
    v10 &= 0x3FEFBui64;
  if ( BG_CanSprintFire(ps) )
  {
    v13 = BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer);
    v14 = BG_PlayerDualWielding(ps) != 0;
    if ( v13 || v14 )
      v10 &= ~0x200ui64;
    v10 &= ~1ui64;
  }
  CanSprintMelee = BG_CanSprintMelee(ps);
  if ( CanSprintMelee )
  {
    v10 &= ~4ui64;
    ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
    v17 = BG_UsingAlternate(ps);
    if ( BG_IsMeleeOnlyWeapon(ViewmodelWeapon, v17) )
      v10 &= ~1ui64;
  }
  CanSprintFireOffhand = BG_CanSprintFireOffhand(weaponMap, ps);
  if ( CanSprintFireOffhand )
    v10 &= 0xFFFFFFFFFFFFCFFFui64;
  if ( (v10 & buttons) != 0 )
    return 1;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u) )
    return 1;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
    return 1;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x15u) )
  {
    ShellshockParms = BG_GetShellshockParms(ps->shellshockIndex);
    if ( !BG_IsPlayerSwimming(ps) && ShellshockParms && ShellshockParms->movement.breakSprint )
      return 1;
  }
  return (!GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) || ps->pm_time) && (!CanSprintFireOffhand && (unsigned int)(ps->weapState[0].weaponState - 26) <= 6 || !CanSprintMelee && (unsigned int)(ps->weapState[0].weaponState - 22) <= 2 && !PM_Weapon_IsInInterruptibleState(weaponMap, ps, WEAPON_HAND_DEFAULT, pm->m_bgHandler) || !BG_NightVisionInterruptable(weaponMap, ps, gameTime) || !CanSprintFireOffhand && (BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_WEAPON) && !BG_Offhand_ScriptWeaponInterruptable(weaponMap, ps, gameTime) || BG_Offhand_IsPlayingGrenadeGesture(weaponMap, ps) && !BG_Offhand_GrenadeGestureInterruptable(weaponMap, ps, gameTime)));
}

/*
==============
PM_StanceSounds
==============
*/
void PM_StanceSounds(EffectiveStance previous, const pmove_t *pm, const pml_t *pml)
{
  playerState_s *ps; 
  EffectiveStance v6; 
  int EffectiveStance; 
  int v8; 
  entity_event_t v9; 
  int v10; 
  unsigned int v11; 
  __int64 v12; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9060, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9060, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( previous >= PM_EFF_STANCE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9061, ASSERT_TYPE_ASSERT, "(previous < PM_EFF_STANCE_COUNT)", (const char *)&queryFormat, "previous < PM_EFF_STANCE_COUNT") )
    __debugbreak();
  v6 = PM_EFF_STANCE_PRONE;
  if ( previous != PM_EFF_STANCE_LASTSTANDCRAWL )
    v6 = previous;
  EffectiveStance = PM_GetEffectiveStance(ps);
  v8 = EffectiveStance;
  if ( EffectiveStance == 3 )
  {
    v8 = 1;
  }
  else if ( EffectiveStance >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9066, ASSERT_TYPE_ASSERT, "(current < PM_EFF_STANCE_COUNT)", (const char *)&queryFormat, "current < PM_EFF_STANCE_COUNT") )
  {
    __debugbreak();
  }
  if ( v6 != v8 )
  {
    v9 = EV_NONE;
    switch ( v8 )
    {
      case 0:
        v9 = EV_STANCE_TO_STAND;
        goto LABEL_31;
      case 1:
        v9 = EV_STANCE_TO_PRONE;
        goto LABEL_31;
      case 2:
        if ( v6 == PM_EFF_STANCE_PRONE )
        {
          v9 = EV_STANCE_PRONE_TO_CROUCH;
LABEL_31:
          v10 = PM_GroundSurfaceType(pm);
          v11 = BG_PackStanceEventParm(pm->weaponMap, ps, v10);
          BG_AddPredictableEventToPlayerstate(v9, v11, pm->cmd.serverTime, pm->weaponMap, ps);
          return;
        }
        if ( v6 == PM_EFF_STANCE_DEFAULT )
        {
          v9 = EV_STANCE_STAND_TO_CROUCH;
          goto LABEL_31;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9098, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tUnexpected previous stance in PM_StanceSounds(), %i", "false", v6) )
          __debugbreak();
        break;
    }
    LODWORD(v12) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9101, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tUnexpected current stance in PM_StanceSounds(), %i", "false", v12) )
      __debugbreak();
    goto LABEL_31;
  }
}

/*
==============
PM_StartSprint
==============
*/
void PM_StartSprint(playerState_s *ps, pmove_t *pm, const pml_t *pml)
{
  PM_RestartSprintTimers(pm, pml, 0);
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0xBu);
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0x14u);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    BG_ClearReloadAnim(pm->m_bgHandler, ps);
}

/*
==============
PM_SwimFriction
==============
*/
void PM_SwimFriction(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const dvar_t *v5; 
  float value; 
  const dvar_t *v7; 
  float v8; 
  float v9; 
  float v10; 
  float frametime; 
  float v12; 
  float v13; 
  float v14; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3588, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3588, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3590, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
    __debugbreak();
  v5 = DCONST_DVARMPFLT_player_swimFriction;
  if ( !DCONST_DVARMPFLT_player_swimFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimFriction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  v7 = DCONST_DVARMPFLT_player_swimVerticalFriction;
  if ( !DCONST_DVARMPFLT_player_swimVerticalFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimVerticalFriction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = ps->velocity.v[0];
  v10 = fsqrt((float)((float)(v8 * v8) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(ps->velocity.v[2] * ps->velocity.v[2]));
  v9 = v10;
  if ( v10 >= 0.001 )
  {
    frametime = pml->frametime;
    v12 = frametime * v7->current.value;
    v13 = v10 - (float)(frametime * value);
    if ( v13 <= 0.0 )
    {
      ps->velocity.v[0] = 0.0;
      v14 = 0.0;
    }
    else
    {
      ps->velocity.v[0] = v8 * (float)(v13 / v9);
      v14 = (float)(v13 / v9) * ps->velocity.v[1];
    }
    ps->velocity.v[1] = v14;
    if ( (float)(v9 - v12) > 0.0 )
    {
      ps->velocity.v[2] = (float)((float)(v9 - v12) / v9) * ps->velocity.v[2];
      return;
    }
  }
  else
  {
    *(_QWORD *)ps->velocity.v = 0i64;
  }
  ps->velocity.v[2] = 0.0;
}

/*
==============
PM_SwimMove
==============
*/
void PM_SwimMove(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const dvar_t *v5; 
  float value; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  float v9; 
  const dvar_t *v10; 
  float v11; 
  const dvar_t *v12; 
  float v13; 
  float v14; 
  float v15; 
  BOOL v16; 
  unsigned __int64 v17; 
  int v18; 
  char forwardmove; 
  float v20; 
  float v21; 
  float v22; 
  __m128 v23; 
  __m128 v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  double v29; 
  __m128 v31; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  __int128 v39; 
  float v42; 
  float v43; 
  const dvar_t *v44; 
  float v45; 
  float v46; 
  double v47; 
  float frametime; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 

  Sys_ProfBeginNamedEvent(0xFF808080, "PM_SwimMove");
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3653, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3655, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3655, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = DCONST_DVARMPFLT_player_swimSpeed;
  if ( !DCONST_DVARMPFLT_player_swimSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  v7 = DCONST_DVARMPFLT_player_swimAcceleration;
  if ( !DCONST_DVARMPFLT_player_swimAcceleration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimAcceleration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v51 = v7->current.value;
  v8 = DCONST_DVARMPFLT_player_swimVerticalSpeed;
  if ( !DCONST_DVARMPFLT_player_swimVerticalSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimVerticalSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.value;
  v10 = DCONST_DVARMPFLT_player_swimVerticalAcceleration;
  if ( !DCONST_DVARMPFLT_player_swimVerticalAcceleration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimVerticalAcceleration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.value;
  v12 = DCONST_DVARMPVEC3_player_swimWaterCurrent;
  if ( !DCONST_DVARMPVEC3_player_swimWaterCurrent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimWaterCurrent") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = v12->current.value;
  v14 = v12->current.vector.v[1];
  v15 = v12->current.vector.v[2];
  v16 = v13 != 0.0 || v14 != 0.0 || v15 != 0.0;
  v17 = (pm->cmd.buttons >> 8) & 1;
  v18 = (pm->cmd.buttons & 0x480) != 0;
  forwardmove = pm->cmd.forwardmove;
  if ( (forwardmove || pm->cmd.rightmove || (_DWORD)v17 != v18) && ps->pm_type < 7 )
  {
    v20 = _mm_cvtepi32_ps((__m128i)(unsigned int)forwardmove).m128_f32[0] * 0.0078740157;
    v24 = _mm_cvtepi32_ps((__m128i)(unsigned int)pm->cmd.rightmove);
    v21 = v24.m128_f32[0] * 0.0078740157;
    v22 = (float)(v20 * pml->forward.v[0]) + (float)((float)(v24.m128_f32[0] * 0.0078740157) * pml->right.v[0]);
    v24.m128_f32[0] = (float)((float)(v24.m128_f32[0] * 0.0078740157) * pml->right.v[1]) + (float)(v20 * pml->forward.v[1]);
    v23 = v24;
    v50 = v24.m128_f32[0];
    v25 = (float)(v21 * pml->right.v[2]) + (float)(v20 * pml->forward.v[2]);
    v26 = ps->velocity.v[2];
    if ( (_DWORD)v17 != v18 )
    {
      v27 = v11 * pml->frametime;
      if ( (_DWORD)v17 )
        v28 = v26 + v27;
      else
        v28 = v26 - v27;
      if ( v9 <= 0.0 )
      {
        v26 = 0.0;
      }
      else
      {
        v29 = I_fclamp(v28, COERCE_FLOAT(LODWORD(v9) ^ _xmm), v9);
        v26 = *(float *)&v29;
        v23 = (__m128)v24.m128_u32[0];
      }
      v25 = 0.0;
      ps->velocity.v[2] = 0.0;
    }
    v31 = v23;
    v31.m128_f32[0] = fsqrt((float)((float)(v23.m128_f32[0] * v23.m128_f32[0]) + (float)(v22 * v22)) + (float)(v25 * v25));
    _XMM8 = v31;
    __asm
    {
      vcmpless xmm0, xmm8, cs:__real@80000000
      vblendvps xmm1, xmm8, xmm10, xmm0
    }
    v54 = v22 * (float)(1.0 / *(float *)&_XMM1);
    v53 = v23.m128_f32[0] * (float)(1.0 / *(float *)&_XMM1);
    v52 = (float)(1.0 / *(float *)&_XMM1) * v25;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x15u) && BG_GetShellshockParms(ps->shellshockIndex)->movement.affect )
    {
      _XMM8.m128_f32[0] = v31.m128_f32[0] * 0.40000001;
      value = value * 0.40000001;
    }
    else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
    {
      _XMM8.m128_f32[0] = PM_SprintScale(ps) * v31.m128_f32[0];
      value = value * PM_SprintScale(ps);
    }
    v39 = LODWORD(v51);
    v34 = v51 * pml->frametime;
    v35 = (float)(v22 * v34) + ps->velocity.v[0];
    ps->velocity.v[0] = v35;
    v36 = (float)(v34 * v50) + ps->velocity.v[1];
    ps->velocity.v[1] = v36;
    v37 = (float)(v34 * v25) + ps->velocity.v[2];
    ps->velocity.v[2] = v37;
    *(float *)&v39 = fsqrt((float)((float)(v36 * v36) + (float)(v35 * v35)) + (float)(v37 * v37));
    _XMM2 = v39;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm1, xmm2, xmm10, xmm0
    }
    v42 = 1.0 / *(float *)&_XMM1;
    v43 = v35 * (float)(1.0 / *(float *)&_XMM1);
    if ( *(float *)&v39 > value )
    {
      ps->velocity.v[0] = v43 * value;
      ps->velocity.v[1] = (float)(v36 * v42) * value;
      ps->velocity.v[2] = (float)(v37 * v42) * value;
    }
    if ( *(float *)&v39 > (float)(_XMM8.m128_f32[0] * value) )
      PM_SwimFriction(pm, pml);
    if ( (_DWORD)v17 != v18 )
      ps->velocity.v[2] = v26;
    if ( pm->ground->groundPlane )
    {
      v44 = DCONST_DVARMPBOOL_player_spaceEnabled;
      if ( !DCONST_DVARMPBOOL_player_spaceEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_spaceEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v44);
      if ( !v44->current.enabled )
      {
        v45 = (float)((float)(v53 * pm->ground->trace.normal.v[1]) + (float)(v54 * pm->ground->trace.normal.v[0])) + (float)(v52 * pm->ground->trace.normal.v[2]);
        if ( v45 < 0.0 )
        {
          v46 = acosf_0(COERCE_FLOAT(LODWORD(v45) & _xmm)) * 57.295776;
          if ( v46 < 45.0 )
          {
            v47 = I_fclamp(v46 * 0.022222223, 0.5, 1.0);
            ps->velocity.v[0] = *(float *)&v47 * ps->velocity.v[0];
            ps->velocity.v[1] = *(float *)&v47 * ps->velocity.v[1];
            ps->velocity.v[2] = *(float *)&v47 * ps->velocity.v[2];
          }
        }
      }
    }
  }
  else
  {
    PM_SwimFriction(pm, pml);
  }
  if ( v16 )
  {
    frametime = pml->frametime;
    ps->velocity.v[0] = (float)(frametime * v13) + ps->velocity.v[0];
    ps->velocity.v[1] = (float)(v14 * frametime) + ps->velocity.v[1];
    ps->velocity.v[2] = (float)(v15 * frametime) + ps->velocity.v[2];
  }
  if ( ps->velocity.v[0] != 0.0 || ps->velocity.v[1] != 0.0 || ps->velocity.v[2] != 0.0 )
    PM_PlayerSwimSlideMove(pm, pml);
  if ( v16 )
  {
    LODWORD(v49) = LODWORD(pml->frametime) ^ _xmm;
    ps->velocity.v[0] = (float)(v49 * v13) + ps->velocity.v[0];
    ps->velocity.v[1] = (float)(v14 * v49) + ps->velocity.v[1];
    ps->velocity.v[2] = (float)(v15 * v49) + ps->velocity.v[2];
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_TryStartSuperSprint
==============
*/
char PM_TryStartSuperSprint(pmove_t *pm, const pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1755, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1755, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (pm->cmd.buttons & 0x800000000000i64) == 0 )
    return 0;
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1526, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x35u) )
    return 0;
  PM_RestartSprintTimers(pm, pml, 1);
  return 1;
}

/*
==============
PM_UFOMove
==============
*/
void PM_UFOMove(pmove_t *pm, pml_t *pml)
{
  __int128 v2; 
  playerState_s *ps; 
  const SuitDef *SuitDef; 
  double v7; 
  double v8; 
  float rightmove; 
  int v11; 
  int v12; 
  char v13; 
  float v14; 
  unsigned __int64 buttons; 
  float *v; 
  float v24; 
  __int128 v25; 
  float v26; 
  const dvar_t *v27; 
  float value; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  float v31; 
  unsigned __int64 v34; 
  double v35; 
  double v36; 
  const Weapon *CurrentWeaponForPlayer; 
  unsigned __int64 v38; 
  const Weapon *v39; 
  bool v40; 
  __int64 v44; 
  bool v45; 
  float v46; 
  __int128 v47; 
  float frametime; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  float v58; 
  vec3_t vec; 
  float v60; 
  float v61; 
  float v62; 
  vec3_t wishdir; 
  vec3_t cross; 
  __int128 v65; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4804, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4804, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4807, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  ps->viewHeightTarget = SuitDef->viewheight_stand;
  HIDWORD(v8) = 0;
  *(float *)&v8 = (float)pm->cmd.forwardmove;
  v7 = v8;
  rightmove = (float)pm->cmd.rightmove;
  _XMM8 = LODWORD(FLOAT_127_0);
  v11 = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|0x80) )
  {
    v12 = pm->cmd.upmove - pm->cmd.downmove;
    if ( v12 > 127 )
      v12 = 127;
    v13 = v12;
    if ( v12 < -128 )
      v13 = 0x80;
    v14 = (float)v13;
  }
  else
  {
    _XMM0 = pm->cmd.buttons & 1;
    __asm
    {
      vpcmpeqq xmm2, xmm0, xmm1
      vblendvps xmm0, xmm8, xmm7, xmm2
    }
    v14 = *(float *)&_XMM0;
    if ( (pm->cmd.buttons & 0x20000) != 0 )
      v14 = *(float *)&_XMM0 - 127.0;
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x20u) )
  {
    if ( pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
    {
      *(_QWORD *)ps->velocity.v = 0i64;
      ps->velocity.v[2] = 0.0;
      return;
    }
    buttons = pm->cmd.buttons;
    v14 = 0.0;
    if ( (buttons & 2) == 0 )
    {
      _XMM0 = buttons & 0x100;
      __asm
      {
        vpcmpeqq xmm2, xmm0, xmm1
        vblendvps xmm0, xmm8, xmm7, xmm2
      }
      v14 = *(float *)&_XMM0;
      if ( (buttons & 0xC0) != 0 )
        v14 = *(float *)&_XMM0 - 127.0;
    }
  }
  _XMM12 = LODWORD(FLOAT_1_0);
  if ( *(float *)&v8 == 0.0 && rightmove == 0.0 && v14 == 0.0 )
  {
    v = ps->velocity.v;
  }
  else
  {
    v = ps->velocity.v;
    v25 = LODWORD(ps->velocity.v[0]);
    *(float *)&v25 = fsqrt((float)((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(ps->velocity.v[2] * ps->velocity.v[2]));
    v24 = *(float *)&v25;
    if ( *(float *)&v25 >= 1.0 )
    {
      v27 = DCONST_DVARMPFLT_friction;
      v65 = v2;
      if ( !DCONST_DVARMPFLT_friction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "friction") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v27);
      value = v27->current.value;
      v29 = DCONST_DVARFLT_stopspeed;
      if ( !DCONST_DVARFLT_stopspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stopspeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      if ( *(float *)&v25 >= v29->current.value )
      {
        v31 = *(float *)&v25;
      }
      else
      {
        v30 = DCONST_DVARFLT_stopspeed;
        if ( !DCONST_DVARFLT_stopspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stopspeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v30);
        v31 = v30->current.value;
      }
      *(float *)&v25 = *(float *)&v25 - (float)((float)((float)(value * v31) * 1.5) * pml->frametime);
      _XMM3 = v25;
      __asm { vmaxss  xmm0, xmm3, xmm7 }
      *v = (float)(*(float *)&_XMM0 / v24) * *v;
      ps->velocity.v[1] = (float)(*(float *)&_XMM0 / v24) * ps->velocity.v[1];
      v26 = (float)(*(float *)&_XMM0 / v24) * ps->velocity.v[2];
      goto LABEL_43;
    }
  }
  *v = vec3_origin.v[0];
  v[1] = vec3_origin.v[1];
  v26 = vec3_origin.v[2];
LABEL_43:
  v[2] = v26;
  v34 = pm->cmd.buttons;
  if ( (v34 & 0x1000) != 0 )
  {
    HIDWORD(v35) = HIDWORD(v7);
    *(float *)&v35 = *(float *)&v7 * 0.25;
    v7 = v35;
    rightmove = rightmove * 0.25;
    v14 = v14 * 0.25;
  }
  if ( (v34 & 0x2000) != 0 )
  {
    HIDWORD(v36) = HIDWORD(v7);
    *(float *)&v36 = *(float *)&v7 * 0.5;
    v7 = v36;
    rightmove = rightmove * 0.5;
    v14 = v14 * 0.5;
  }
  PM_MoveScale(ps, v7, rightmove, v14);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v38 = pm->cmd.buttons;
  v39 = CurrentWeaponForPlayer;
  if ( (v38 & 4) != 0 && (v38 & 1) != 0 )
  {
    v40 = BG_UsingAlternate(ps);
    BG_IsMeleeOnlyWeapon(v39, v40);
  }
  _XMM0 = BG_IsUfoViewmodel(ps);
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm12, xmm8, xmm2
  }
  v58 = *(float *)&_XMM0;
  vec.v[1] = 0.0;
  vec.v[0] = 0.0;
  vec.v[2] = FLOAT_1_0;
  WorldUpReferenceFrame::ApplyReferenceFrameToVector(&pm->refFrame, &vec);
  Vec3Cross(&vec, &pml->right, &cross);
  v44 = 0i64;
  v45 = 1;
  do
  {
    if ( !v45 )
    {
      LODWORD(v55) = 3;
      LODWORD(v52) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v55) )
        __debugbreak();
      LODWORD(v56) = 3;
      LODWORD(v53) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v53, v56) )
        __debugbreak();
      LODWORD(v57) = 3;
      LODWORD(v54) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v54, v57) )
        __debugbreak();
    }
    v46 = (float)((float)(rightmove * *(float *)((char *)&cross.v[v44] + (char *)&pml->right - (char *)&cross)) + (float)(*(float *)&v7 * cross.v[v44])) + (float)(v14 * vec.v[v44]);
    if ( (unsigned int)v11 >= 3 )
    {
      LODWORD(v55) = 3;
      LODWORD(v52) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v55) )
        __debugbreak();
    }
    *(float *)((char *)&v60 + v44 * 4) = v46;
    ++v44;
    v45 = (unsigned int)++v11 < 3;
  }
  while ( v11 < 3 );
  v47 = LODWORD(v61);
  *(float *)&v47 = fsqrt((float)((float)(*(float *)&v47 * *(float *)&v47) + (float)(v60 * v60)) + (float)(v62 * v62));
  _XMM4 = v47;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm12, xmm0
  }
  wishdir.v[0] = v60 * (float)(1.0 / *(float *)&_XMM0);
  wishdir.v[1] = v61 * (float)(1.0 / *(float *)&_XMM0);
  wishdir.v[2] = v62 * (float)(1.0 / *(float *)&_XMM0);
  PM_Accelerate(pm, pml, &wishdir, *(float *)&v47 * v58, 9.0);
  frametime = pml->frametime;
  ps->origin.v[0] = (float)(frametime * *v) + ps->origin.v[0];
  ps->origin.v[1] = (float)(frametime * v[1]) + ps->origin.v[1];
  ps->origin.v[2] = (float)(frametime * v[2]) + ps->origin.v[2];
}

/*
==============
PM_UFO_Update
==============
*/
void PM_UFO_Update(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  Sys_ProfBeginNamedEvent(0xFF808080, "PM_UFO_Update");
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11707, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml", -2i64) )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11709, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11709, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  PM_ClearLadderFlag(pm->weaponMap, ps);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x20u) )
  {
    ps->pm_type = 0;
    if ( (pm->cmd.buttons & 0x20) != 0 )
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0);
  }
  PM_UpdateAimDownSightFlag(pm, pml);
  PM_UpdateSprint(pm, pml);
  PM_UpdatePlayerWalkingFlag(pm);
  PM_UpdateCustomAnimFlags(pm);
  PM_DropTimers(pm, pml);
  PM_UFOMove(pm, pml);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x20u) )
  {
    PM_Weapon(pm, pml);
    PM_UpdateASM(pm, pml);
  }
  PM_UpdateAimDownSightLerp(pm, pml->msec);
  ps->pm_type = 3;
  PM_DropAnimTimers(pm, pml);
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_UpdateASM
==============
*/
void PM_UpdateASM(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  BgPlayer_Asm *v5; 
  BgGroundState *ground; 
  bool v7; 
  float walkForwardScale; 
  float walkSideScale; 
  const dvar_t *v10; 
  PmoveASMArgs pmoveArgs; 

  if ( PlayerASM_IsEnabled() )
  {
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9509, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    ps = pm->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9509, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v5 = pm->m_bgHandler->GetPlayerASM(pm->m_bgHandler);
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9512, ASSERT_TYPE_ASSERT, "(playerAsm)", (const char *)&queryFormat, "playerAsm") )
      __debugbreak();
    *(_WORD *)(&pmoveArgs.walking + 1) = 0;
    *(&pmoveArgs.walking + 3) = 0;
    *(_WORD *)(&pmoveArgs.initialSlideMoveBumped + 1) = 0;
    *(&pmoveArgs.initialSlideMoveBumped + 3) = 0;
    *(&pmoveArgs.delta + 1) = 0;
    pmoveArgs.cmd = &pm->cmd;
    ground = pm->ground;
    if ( !ground || (v7 = !ground->walking, pmoveArgs.walking = 1, v7) )
      pmoveArgs.walking = 0;
    v7 = pml->initialSlideMoveBumped == 1;
    walkForwardScale = pml->walkForwardScale;
    walkSideScale = pml->walkSideScale;
    pmoveArgs.delta = pml->msec;
    pmoveArgs.initialSlideMoveBumped = v7;
    pmoveArgs.handler = pm->m_bgHandler;
    pmoveArgs.holdrand = &pml->holdrand;
    pmoveArgs.walkForwardScale = walkForwardScale;
    pmoveArgs.walkSideScale = walkSideScale;
    if ( Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_OFF|WEAPON_LADDER_AIM|0x80) || Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM|0x80) )
    {
      v10 = DVARBOOL_killswitch_butt_collision_asm_predicted_velocity_correction_enabled;
      if ( !DVARBOOL_killswitch_butt_collision_asm_predicted_velocity_correction_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_butt_collision_asm_predicted_velocity_correction_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.enabled )
        pmoveArgs.initialSlideMoveBumped |= GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&ps->otherFlags, DEAD|0x20);
    }
    BG_AnimUpdatePlayerStateConditions(pm, pml);
    BgPlayer_Asm::TickPS(v5, ps, &pmoveArgs, 0, 0);
  }
}

/*
==============
PM_UpdateBobCycle
==============
*/
void PM_UpdateBobCycle(pmove_t *pm, pml_t *pml, PmStanceFrontBack stance, float speed, const vec3_t *maxSpeeds, int walking, int sprinting, int timeMs)
{
  __int64 v8; 
  playerState_s *ps; 
  float v12; 
  const vec3_t *v13; 
  double v14; 
  float v15; 
  float v18; 
  double v19; 
  __int128 v22; 
  const SuitDef *v23; 
  double v24; 
  __int128 v25; 
  double Float_Internal_DebugName; 
  __int128 v27; 
  __int128 v28; 
  const dvar_t *v29; 
  bool v32; 
  float v37; 
  FootstepAnimType FootstepAnimType; 
  int generation; 
  int leftCount; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  bool v42; 
  bool v43; 
  const dvar_t *v44; 
  int integer; 
  const char *v46; 
  const dvar_t *v47; 
  int v48; 
  playerState_s *v49; 
  const dvar_t *v50; 
  unsigned __int64 weaponState; 
  __int64 v52; 
  int v53; 
  float v54; 
  __int128 v55; 
  int v56; 
  double WeaponOrOffhandAdsFrac; 
  float v58; 
  const dvar_t *v59; 
  float value; 
  SuitDef *v61; 
  int ProneViewHeight; 
  int viewHeightTarget; 
  int viewheight_crouch; 
  int viewheight_stand; 
  const dvar_t *v66; 
  const dvar_t *v67; 
  float v68; 
  const dvar_t *v69; 
  const dvar_t *v70; 
  const dvar_t *v71; 
  __int128 unsignedInt; 
  const dvar_t *v73; 
  __int128 v74; 
  __int128 v75; 
  float v76; 
  double v77; 
  __int128 v78; 
  __int128 v79; 
  __int128 v80; 
  __int128 v81; 
  float v82; 
  float v83; 
  const dvar_t *v84; 
  const dvar_t *v85; 
  bool v87; 
  const dvar_t *v88; 
  __int128 v89; 
  double v90; 
  __int128 v91; 
  __int128 v97; 
  const dvar_t *v100; 
  float v101; 
  float amplitudeRatio; 
  float v103; 
  float v104; 
  double v105; 
  const dvar_t *v106; 
  float v107; 
  float v108; 
  __int128 amplitudeRatioGun_low; 
  const dvar_t *v110; 
  const dvar_t *v112; 
  __int128 v114; 
  __int128 curTime; 
  BobCycle v117; 
  int maxGeneration; 
  float outStairsAscentRatio; 
  MovementTime *mvmtTimes; 
  FootstepTime *times; 
  float outFrequencyScale; 
  float outAmplitudeScale; 
  SuitDef *suitDef; 
  FootstepInfo outInfo; 
  int (*outPackedBobCycle)[2]; 
  int packedBobCycle[2]; 
  __int64 v128; 
  float v129; 
  float timeMsa; 
  int timeMsb; 

  v128 = -2i64;
  v8 = stance;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_UpdateBobCycle");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8322, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8322, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  timeMsa = (float)timeMs;
  if ( timeMsa > 0.0 )
  {
    if ( walking )
    {
      v12 = maxSpeeds->v[1];
      v129 = v12;
    }
    else
    {
      v13 = (const vec3_t *)&maxSpeeds->v[2];
      if ( !sprinting )
        v13 = maxSpeeds;
      v12 = v13->v[0];
      v129 = maxSpeeds->v[1];
    }
    suitDef = (SuitDef *)BG_GetSuitDef(ps->suitIndex);
    if ( !suitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8334, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    outPackedBobCycle = (int (*)[2])ps->packedBobCycle;
    BobCycle::BobCycle(&v117, (const int (*)[2])ps->packedBobCycle);
    *(_QWORD *)packedBobCycle = *(_QWORD *)ps->packedBobCycle;
    maxGeneration = v117.maxGeneration;
    if ( v12 > 0.000001 && v12 > speed )
    {
      I_fclamp(speed / v12, 0.0, 1.0);
      GraphGetValueFromFraction(4, &stru_147EB8E68, speed / v12);
    }
    v14 = MSG_UnpackSignedFloat(pm->oldcmd.angles.v[1], 180.0, 0x14u);
    v15 = *(float *)&v14 * 0.0027777778;
    _XMM7 = 0i64;
    __asm { vroundss xmm0, xmm7, xmm3, 1 }
    v18 = (float)(v15 - *(float *)&_XMM0) * 360.0;
    v19 = MSG_UnpackSignedFloat(pm->cmd.angles.v[1], 180.0, 0x14u);
    __asm { vroundss xmm3, xmm7, xmm0, 1 }
    if ( timeMs > 0 )
    {
      if ( BG_IsInAir(ps, 0) )
      {
        _XMM6 = 0i64;
        v22 = LODWORD(timeMsa);
      }
      else
      {
        v23 = BG_GetSuitDef(ps->suitIndex);
        if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8269, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
          __debugbreak();
        if ( ps->viewHeightTarget == BG_Suit_GetProneViewHeight(v23) )
        {
          _XMM6 = 0i64;
          v22 = LODWORD(timeMsa);
        }
        else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
        {
          _XMM6 = 0i64;
          v22 = LODWORD(timeMsa);
        }
        else if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
        {
          _XMM6 = 0i64;
          v22 = LODWORD(timeMsa);
        }
        else
        {
          v24 = AngleDelta((float)((float)(*(float *)&v19 * 0.0027777778) - *(float *)&_XMM3) * 360.0, v18);
          v22 = LODWORD(timeMsa);
          v25 = LODWORD(FLOAT_1000_0);
          *(float *)&v25 = (float)(1000.0 / timeMsa) * *(float *)&v24;
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_viewBobMaxTurnSpeed, "bg_viewBobMaxTurnSpeed");
          v28 = v25 & (unsigned int)_xmm;
          *(float *)&v28 = *(float *)&v28 / *(float *)&Float_Internal_DebugName;
          *((_QWORD *)&v27 + 1) = *((_QWORD *)&v28 + 1);
          I_fclamp(*(float *)&v28, 0.0, 1.0);
          *(double *)&v27 = GraphGetValueFromFraction(4, knots, *(const float *)&v28);
          _XMM6 = v27;
        }
      }
    }
    else
    {
      _XMM6 = 0i64;
      v22 = LODWORD(timeMsa);
    }
    v29 = DVARFLT_player_viewmodelMoveAnimScale;
    if ( !DVARFLT_player_viewmodelMoveAnimScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_viewmodelMoveAnimScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    __asm { vmaxss  xmm0, xmm6, xmm12 }
    *(float *)&_XMM8 = *(float *)&_XMM0 * v29->current.value;
    v32 = BG_ShouldPlayAdditiveCrawlAnim(ps, WEAPON_HAND_DEFAULT, pm->m_bgHandler) && (int)v8 >= 4;
    _XMM0 = v32;
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_N1_0);
    __asm { vblendvps xmm0, xmm1, xmm15, xmm2 }
    timeMsb = _XMM0;
    v37 = 0.0;
    times = NULL;
    mvmtTimes = NULL;
    PM_Slope_GetBobCycleScale(pm, &outStairsAscentRatio, &outFrequencyScale, &outAmplitudeScale);
    FootstepAnimType = (unsigned int)PM_GetFootstepAnimType(pm);
    if ( FootstepAnimType == FOOTSTEP_ANIM_INVALID || !BG_Suit_GetAnimFootstepInfo(ps, pm->m_bgHandler, pm->weaponMap, FootstepAnimType, &outInfo) )
    {
      generation = v117.generation;
    }
    else
    {
      if ( outInfo.animDurationMs <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8365, ASSERT_TYPE_ASSERT, "(footstepInfo.animDurationMs > 0)", (const char *)&queryFormat, "footstepInfo.animDurationMs > 0") )
        __debugbreak();
      *((_QWORD *)&_XMM0 + 1) = 0i64;
      v37 = *(float *)&v22 / (float)outInfo.animDurationMs;
      v117.maxGeneration = I_clamp(outInfo.footstepAnim->leftCount - 1, 0, 15);
      generation = I_clamp(v117.generation, 0, v117.maxGeneration);
      leftCount = outInfo.footstepAnim->leftCount;
      if ( outInfo.footstepAnim->leftCount <= 0 )
        times = NULL;
      else
        times = outInfo.footstepAnim->step;
      if ( leftCount <= 0 )
        mvmtTimes = NULL;
      else
        mvmtTimes = outInfo.footstepAnim->movement;
    }
    p_pm_flags = &ps->pm_flags;
    v42 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u);
    v43 = v42;
    if ( v37 == 0.0 )
    {
      if ( v42 )
      {
        v44 = DCONST_DVARMPINT_player_viewmodelNoWeaponSprintCycleMs;
        if ( !DCONST_DVARMPINT_player_viewmodelNoWeaponSprintCycleMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_viewmodelNoWeaponSprintCycleMs") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v44);
        integer = v44->current.integer;
      }
      else
      {
        integer = *(_DWORD *)((char *)&dword_143F488B0[2 * v8] + (walking != 0 ? 4 : 0));
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
      {
        if ( walking )
        {
          v46 = "player_ladderBobCycleDurationADS";
          v47 = DVARINT_player_ladderBobCycleDurationADS;
        }
        else
        {
          v46 = "player_ladderBobCycleDuration";
          v47 = DVARINT_player_ladderBobCycleDuration;
        }
        integer = Dvar_GetInt_Internal_DebugName(v47, v46);
      }
      if ( integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8387, ASSERT_TYPE_ASSERT, "(cycleDuration > 0)", (const char *)&queryFormat, "cycleDuration > 0") )
        __debugbreak();
      *((_QWORD *)&_XMM0 + 1) = 0i64;
      v37 = *(float *)&v22 / (float)integer;
      v48 = 0;
      v117.maxGeneration = 0;
      generation = 0;
      times = NULL;
      mvmtTimes = NULL;
      p_pm_flags = &ps->pm_flags;
    }
    else
    {
      v48 = v117.maxGeneration;
    }
    if ( PM_IsInAir(pm) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 6u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 5u) )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_inAirBobCycleScale, "player_inAirBobCycleScale");
      v37 = v37 * *(float *)&_XMM0;
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_inAirMaxScaledSpeedRatio, "player_inAirMaxScaledSpeedRatio");
      __asm { vminss  xmm8, xmm0, xmm8 }
    }
    v49 = pm->ps;
    if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7986, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v50 = DCONST_DVARMPBOOL_movementAnimProto;
    if ( !DCONST_DVARMPBOOL_movementAnimProto && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movementAnimProto") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    if ( !v50->current.enabled && ((weaponState = v49->weapState[0].weaponState, (unsigned int)weaponState <= 0x3D) && (v52 = 0x2200001400000E1Ci64, _bittest64(&v52, weaponState)) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v49->pm_flags, ACTIVE, 0x1Du)) || maxGeneration != v48 )
    {
      v54 = 0.0;
      if ( v48 <= 0 )
        v117.generation = 0;
      else
        v117.generation = generation % v48;
    }
    else
    {
      v53 = (v48 + 1) << 9;
      v54 = v37 * *(float *)&timeMsb;
      v55 = 0i64;
      *(float *)&v55 = (float)v53;
      _XMM1 = v55;
      v56 = (int)(float)((float)((float)((float)(v37 * *(float *)&timeMsb) * *(float *)&_XMM8) * outFrequencyScale) * *(float *)&v55) + v117.animCycle;
      v117.generation = ModuloWrap<int>(v56 + (generation << 9), v53) / 512;
      v117.animCycle = (v56 % 512 + 512) % 512;
    }
    v117.isAnimDecreasing = *(float *)&timeMsb < 0.0;
    WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(pm->weaponMap, ps);
    v58 = *(float *)&WeaponOrOffhandAdsFrac;
    v59 = DCONST_DVARMPFLT_bg_viewBobMax;
    if ( !DCONST_DVARMPFLT_bg_viewBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v59);
    value = v59->current.value;
    v61 = suitDef;
    ProneViewHeight = BG_Suit_GetProneViewHeight(suitDef);
    viewHeightTarget = ps->viewHeightTarget;
    viewheight_crouch = v61->viewheight_crouch;
    viewheight_stand = v61->viewheight_stand;
    if ( viewHeightTarget == ProneViewHeight )
    {
      v66 = DCONST_DVARMPFLT_bg_viewBobAmplitudeProne;
      if ( !DCONST_DVARMPFLT_bg_viewBobAmplitudeProne && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobAmplitudeProne") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v66);
      v67 = DCONST_DVARMPFLT_bg_viewBobAmplitudeProne;
      if ( !DCONST_DVARMPFLT_bg_viewBobAmplitudeProne && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobAmplitudeProne") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v67);
      v68 = v129 * v67->current.value;
      goto LABEL_117;
    }
    if ( viewHeightTarget == viewheight_crouch )
    {
      v69 = DCONST_DVARMPFLT_bg_viewBobAmplitudeDuckedAds;
      if ( !DCONST_DVARMPFLT_bg_viewBobAmplitudeDuckedAds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobAmplitudeDuckedAds") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v69);
      v70 = DCONST_DVARMPFLT_bg_viewBobAmplitudeDucked;
      if ( !DCONST_DVARMPFLT_bg_viewBobAmplitudeDucked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobAmplitudeDucked") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v70);
      v71 = DCONST_DVARMPFLT_bg_viewBobAmplitudeDuckedAds;
      if ( !DCONST_DVARMPFLT_bg_viewBobAmplitudeDuckedAds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobAmplitudeDuckedAds") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v71);
      unsignedInt = v71->current.unsignedInt;
      v73 = DCONST_DVARMPFLT_bg_viewBobAmplitudeDucked;
      if ( !DCONST_DVARMPFLT_bg_viewBobAmplitudeDucked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobAmplitudeDucked") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v73);
      v75 = unsignedInt;
      *(float *)&v75 = *(float *)&unsignedInt * *(float *)&WeaponOrOffhandAdsFrac;
      v74 = v75;
      v76 = (float)(1.0 - *(float *)&WeaponOrOffhandAdsFrac) * v73->current.value;
    }
    else
    {
      if ( v43 )
      {
        Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_viewBobAmplitudeSprinting, "bg_viewBobAmplitudeSprinting");
        v77 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_viewBobAmplitudeSprinting, "bg_viewBobAmplitudeSprinting");
        v68 = *(float *)&v77 * v129;
LABEL_117:
        v83 = v68 * suitDef->player_viewBobScale;
        v82 = v83;
        if ( BG_HasPerk(&ps->perks, 0xFu) )
        {
          v84 = DVARFLT_perk_lightWeightViewBobScale;
          if ( !DVARFLT_perk_lightWeightViewBobScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_lightWeightViewBobScale") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v84);
          v85 = DVARFLT_perk_lightWeightViewBobScale;
          if ( !DVARFLT_perk_lightWeightViewBobScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_lightWeightViewBobScale") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v85);
          v82 = v83 * v85->current.value;
        }
        _XMM7 = 0i64;
        v87 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 8u);
        if ( v87 )
        {
          if ( viewHeightTarget == viewheight_stand )
          {
            v88 = DCONST_DVARFLT_player_stairs_bobAmplitudeMinimum_stand;
            if ( !DCONST_DVARFLT_player_stairs_bobAmplitudeMinimum_stand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_bobAmplitudeMinimum_stand") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v88);
            v89 = LODWORD(FLOAT_1_0);
            *(float *)&v89 = (float)(1.0 - v58) * v88->current.value;
            _XMM7 = v89;
          }
          else if ( viewHeightTarget == viewheight_crouch )
          {
            v90 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_stairs_bobAmplitudeMinimum_crouch, "player_stairs_bobAmplitudeMinimum_crouch");
            v91 = LODWORD(FLOAT_1_0);
            *(float *)&v91 = 1.0 - v58;
            _XMM1 = v91;
            *(float *)&v91 = (float)(1.0 - v58) * *(float *)&v90;
            _XMM7 = v91;
          }
        }
        __asm { vmaxss  xmm7, xmm7, xmm9 }
        LODWORD(_XMM9) = 0;
        if ( v58 > 0.0 )
        {
          if ( v82 < 0.0 )
          {
            __asm { vxorpd  xmm1, xmm1, xmm1 }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&_XMM1, v82) )
              __debugbreak();
          }
          __asm
          {
            vmaxss  xmm0, xmm7, xmm11
            vminss  xmm9, xmm0, xmm6
          }
        }
        if ( value <= 0.0 )
        {
          LODWORD(_XMM6) = 0;
        }
        else
        {
          v97 = _XMM7;
          *(float *)&v97 = *(float *)&_XMM7 / value;
          _XMM0 = v97;
          __asm
          {
            vmaxss  xmm0, xmm0, xmm11
            vminss  xmm6, xmm0, xmm15
          }
        }
        v100 = DCONST_DVARMPINT_bg_viewBobTransTime;
        if ( !DCONST_DVARMPINT_bg_viewBobTransTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobTransTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v100);
        v101 = *(float *)&v22 / (float)v100->current.integer;
        amplitudeRatio = v117.amplitudeRatio;
        if ( *(float *)&_XMM6 <= v117.amplitudeRatio )
        {
          v103 = v117.amplitudeRatio - v101;
          v104 = v117.amplitudeRatio;
          amplitudeRatio = *(float *)&_XMM6;
        }
        else
        {
          v103 = v117.amplitudeRatio + v101;
          v104 = *(float *)&_XMM6;
        }
        v105 = I_fclamp(v103, amplitudeRatio, v104);
        v117.amplitudeRatio = *(float *)&v105;
        v106 = DCONST_DVARMPFLT_bg_gunBobMax;
        if ( !DCONST_DVARMPFLT_bg_gunBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gunBobMax") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v106);
        if ( value <= 0.0 )
        {
          v108 = 0.0;
        }
        else
        {
          v107 = *(float *)&_XMM9 / v106->current.value;
          I_fclamp(v107, 0.0, 1.0);
          v108 = v107;
        }
        amplitudeRatioGun_low = LODWORD(v117.amplitudeRatioGun);
        if ( v108 <= v117.amplitudeRatioGun )
        {
          v112 = DCONST_DVARMPINT_bg_gunBobTransOutTime;
          if ( !DCONST_DVARMPINT_bg_gunBobTransOutTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gunBobTransOutTime") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v112);
          v114 = amplitudeRatioGun_low;
          *(float *)&v114 = *(float *)&amplitudeRatioGun_low - (float)(*(float *)&v22 / (float)v112->current.integer);
          _XMM2 = v114;
          __asm { vmaxss  xmm0, xmm2, xmm11 }
        }
        else
        {
          v110 = DCONST_DVARMPINT_bg_gunBobTransInTime;
          if ( !DCONST_DVARMPINT_bg_gunBobTransInTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gunBobTransInTime") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v110);
          *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v22 + 1);
          *(double *)&_XMM0 = I_fclamp((float)(*(float *)&v22 / (float)v110->current.integer) + *(float *)&amplitudeRatioGun_low, *(float *)&amplitudeRatioGun_low, v108);
        }
        v117.amplitudeRatioGun = *(float *)&_XMM0;
        BobCycle::PackBobCycle(&v117, outPackedBobCycle);
        *(double *)&_XMM0 = BG_GetBobCycleAnimTime(outPackedBobCycle);
        curTime = _XMM0;
        *(double *)&_XMM0 = BG_GetBobCycleAnimTime((const int (*)[2])packedBobCycle);
        if ( maxGeneration != v117.maxGeneration )
        {
          *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&curTime + 1);
          *(double *)&_XMM0 = ModuloWrapD((float)(*(float *)&curTime - v54), 1.0);
          __asm { vcvtsd2ss xmm0, xmm0, xmm0 }
        }
        if ( v54 <= 0.0 )
        {
          if ( v54 < 0.0 )
            PM_FootstepEvent(pm, pml, v87, outStairsAscentRatio, *(float *)&curTime, *(float *)&_XMM0, times, mvmtTimes);
        }
        else
        {
          PM_FootstepEvent(pm, pml, v87, outStairsAscentRatio, *(float *)&_XMM0, *(float *)&curTime, times, mvmtTimes);
        }
        goto LABEL_168;
      }
      Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_viewBobAmplitudeStandingAds, "bg_viewBobAmplitudeStandingAds");
      Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_viewBobAmplitudeStanding, "bg_viewBobAmplitudeStanding");
      *((_QWORD *)&v78 + 1) = 0i64;
      *(double *)&v78 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_viewBobAmplitudeStandingAds, "bg_viewBobAmplitudeStandingAds");
      v79 = v78;
      *(double *)&v78 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_viewBobAmplitudeStanding, "bg_viewBobAmplitudeStanding");
      v80 = v79;
      *(float *)&v80 = *(float *)&v79 * v58;
      v74 = v80;
      v76 = (float)(1.0 - v58) * *(float *)&v78;
    }
    v81 = v74;
    *(float *)&v81 = *(float *)&v74 + v76;
    _XMM1 = v81;
    v68 = *(float *)&v81 * v129;
    goto LABEL_117;
  }
LABEL_168:
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_UpdateCollisionAvoid
==============
*/
void PM_UpdateCollisionAvoid(pmove_t *pm)
{
  playerState_s *ps; 
  const dvar_t *v3; 
  const dvar_t *v4; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2154, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2154, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_FIRING) && (pm->cmd.avoidForward || pm->cmd.avoidRight) )
  {
    v3 = DCONST_DVARBOOL_collAvoid_useHardLanding;
    if ( !DCONST_DVARBOOL_collAvoid_useHardLanding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_useHardLanding") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
    {
      v4 = DCONST_DVARINT_collAvoid_hardLandingTimeMs;
      if ( !DCONST_DVARINT_collAvoid_hardLandingTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_hardLandingTimeMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      ps->pm_time = v4->current.integer;
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0xCu);
    }
  }
}

/*
==============
PM_UpdateCustomAnimFlags
==============
*/
void PM_UpdateCustomAnimFlags(pmove_t *pm)
{
  playerState_s *ps; 
  const BgHandler *m_bgHandler; 
  int serverTime; 
  const dvar_t *v5; 
  float value; 
  double Speed; 
  SuitAnimType SuitAnimIndexFromPlayerState; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8961, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8961, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_MANTLE_UP_WEAPON_DOWN|0x80) && BG_IsLinkedToAnimFlagEnabled(ps) )
    {
      m_bgHandler = pm->m_bgHandler;
      serverTime = pm->cmd.serverTime;
      if ( ps->pm_type != 1 || GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, GameModeFlagValues::ms_spValue, 8u) )
      {
        v5 = DCONST_DVARFLT_player_moveThreshhold;
        if ( !DCONST_DVARFLT_player_moveThreshhold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_moveThreshhold") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v5);
        value = v5->current.value;
        Speed = BG_GetSpeed(ps, serverTime, m_bgHandler);
        if ( *(float *)&Speed >= value )
          goto LABEL_18;
      }
      if ( ps->pm_type >= 7 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
      {
LABEL_18:
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Bu);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Cu);
      }
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_MANTLE_UP_WEAPON_UP|0x80) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Eu) && (!GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) || ps->pm_type >= 7) )
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Eu);
    if ( BG_IsScriptedSceneAnimFlagEnabled(ps) && !PlayerASM_IsEnabled() )
    {
      SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(ps);
      if ( !BG_IsSceneAnim(ps->legsAnim, SuitAnimIndexFromPlayerState) )
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Du);
    }
  }
}

/*
==============
PM_UpdateFlinch
==============
*/
void PM_UpdateFlinch(const pmove_t *pm, playerState_s *ps, pml_t *pml)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7730, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )", -2i64) )
    __debugbreak();
  if ( pml->flinch )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_UpdateFlinch");
    BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_FLINCH, 0, 1, &pml->holdrand);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
PM_UpdatePlayerWalkingFlag
==============
*/
void PM_UpdatePlayerWalkingFlag(pmove_t *pm)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v4; 
  playerState_s *v5; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10602, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10602, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0xBu);
  if ( ps->pm_type < 7 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && !BG_PlayerDualWielding(ps) && (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u) || BG_IsUsingOffhandGestureWeaponADSActive(ps)) && !BG_IsTurretActive(ps) )
  {
    if ( (unsigned int)(ps->weapState[0].weaponState - 18) > 3 || (CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps), v4 = BG_UsingAlternate(ps), BG_ADSReloadEnabled(pm->weaponMap, ps, CurrentWeaponForPlayer, v4)) )
    {
      if ( !BG_HasPerk(&ps->perks, 0x16u) )
      {
        if ( GameModeFlagValues::ms_mpValue != ACTIVE || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x22u) || Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x29u) )
        {
          v5 = pm->ps;
        }
        else
        {
          v5 = pm->ps;
          if ( v5->pm_type != 5 )
            return;
        }
        if ( (unsigned int)(v5->pm_type - 2) > 1 )
          GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0xBu);
      }
    }
  }
}

/*
==============
PM_UpdatePronePitch
==============
*/
void PM_UpdatePronePitch(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  bool v5; 
  BOOL v6; 
  BgGroundState *ground; 
  unsigned int v8; 
  BOOL v9; 
  double v11; 
  double v12; 
  float v14; 
  float v15; 
  double v20; 
  float v22; 
  float v24; 
  int penetrationEntity; 
  vec3_t vec; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10498, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10498, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
  {
    v5 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu);
    if ( ps->groundEntityNum == 2047 )
    {
      v6 = PM_LocalCheckProne(pm, pml, ps, NULL);
      if ( !v5 && !v6 )
        goto LABEL_20;
    }
    else
    {
      if ( !v5 )
      {
        ground = pm->ground;
        if ( ground->groundPlane && !ground->trace.walkable )
        {
          v8 = 0;
LABEL_21:
          BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_CROUCH, v8, pm->cmd.serverTime, pm->weaponMap, ps);
          goto LABEL_22;
        }
      }
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
      {
        v9 = PM_LocalCheckProne(pm, pml, ps, &penetrationEntity);
        if ( !v5 && !v9 && BGMovingPlatforms::IsMovingPlatform(penetrationEntity) )
        {
LABEL_20:
          v8 = 3;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    vec = pm->ground->trace.normal;
    WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&pm->refFrame, &vec);
    _XMM6 = 0i64;
    if ( pm->ground->groundPlane )
      v11 = PitchForYawOnNormal(ps->proneDirection, &vec);
    else
      LODWORD(v11) = 0;
    v12 = AngleDelta(*(const float *)&v11, ps->proneDirectionPitch);
    _XMM10 = LODWORD(FLOAT_N1_0);
    v14 = *(float *)&v12;
    if ( *(float *)&v12 != 0.0 )
    {
      v15 = pml->frametime * 70.0;
      if ( COERCE_FLOAT(LODWORD(v12) & _xmm) > v15 )
      {
        __asm
        {
          vcmpless xmm0, xmm6, xmm2
          vblendvps xmm0, xmm10, xmm9, xmm0
        }
        v14 = *(float *)&_XMM0 * v15;
      }
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      ps->proneDirectionPitch = (float)((float)((float)(ps->proneDirectionPitch + v14) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
    }
    if ( pm->ground->groundPlane )
      v20 = PitchForYawOnNormal(ps->viewangles.v[1], &vec);
    else
      LODWORD(v20) = 0;
    *(double *)&_XMM0 = AngleDelta(*(const float *)&v20, ps->proneTorsoPitch);
    if ( *(float *)&_XMM0 != 0.0 )
    {
      v22 = pml->frametime * 70.0;
      if ( COERCE_FLOAT(_XMM0 & _xmm) > v22 )
      {
        __asm
        {
          vcmpless xmm0, xmm6, xmm0
          vblendvps xmm0, xmm10, xmm9, xmm0
        }
        *(float *)&_XMM0 = *(float *)&_XMM0 * v22;
      }
      v24 = (float)(ps->proneTorsoPitch + *(float *)&_XMM0) * 0.0027777778;
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      ps->proneTorsoPitch = (float)(v24 - *(float *)&_XMM4) * 360.0;
    }
  }
}

/*
==============
PM_UpdateSprint
==============
*/
void PM_UpdateSprint(pmove_t *pm, const pml_t *pml)
{
  playerState_s *ps; 
  const dvar_t *v5; 
  int integer; 
  playerState_s *v7; 
  unsigned __int64 buttons; 
  int serverTime; 
  int sprintRestoreDelayStart; 
  playerState_s *v11; 
  __int64 v12; 
  bool v13; 
  const dvar_t *v14; 
  bool CanStartSprint; 
  playerState_s *v16; 
  bool v17; 
  const dvar_t *v18; 
  int WeaponHand; 
  __int64 v20; 
  int *p_weaponState; 
  char v22; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2001, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2001, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = DCONST_DVARINT_bg_disableToggleSprint;
  if ( !DCONST_DVARINT_bg_disableToggleSprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_disableToggleSprint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  integer = v5->current.integer;
  if ( ps->sprintState.sprintButtonUpRequired && (pm->cmd.buttons & 2) == 0 )
    ps->sprintState.sprintButtonUpRequired = 0;
  if ( (pm->cmd.buttons & 0x800000000000i64) != 0 && !PM_DoesSprintMeterTestPass(pm) )
    pm->cmd.buttons &= ~0x800000000000ui64;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
  {
    if ( PM_UpdateSprint_IsInspecting(pm, pml) )
      PM_Weapon_CancelInspect(pm);
    v7 = pm->ps;
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1771, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v7->pm_flags, ACTIVE, 0x14u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1774, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::SPRINTING ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::SPRINTING )") )
      __debugbreak();
    if ( BG_IsSuperSprinting(v7) )
    {
      if ( PM_GetSprintLeft(pm->weaponMap, pm, pm->cmd.serverTime) <= 0 )
        v7->sprintState.lastSuperSprintEnd = pm->cmd.serverTime;
    }
    else
    {
      PM_TryStartSuperSprint(pm, pml);
    }
    if ( PM_ShouldSprintEnd(pm, pml) )
    {
      buttons = pm->cmd.buttons;
      serverTime = pm->cmd.serverTime;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
      {
        if ( BG_IsSuperSprinting(ps) )
          ps->sprintState.lastSuperSprintEnd = serverTime;
        ps->sprintState.sprintDelay = 0;
        ps->sprintState.lastSprintEnd = serverTime;
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x14u);
        if ( (buttons & 2) != 0 )
          ps->sprintState.sprintButtonUpRequired = 1;
      }
    }
  }
  else
  {
    if ( ps->sprintState.sprintRestore )
    {
      if ( !BG_Skydive_CanQueueSprint(ps) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) && !Slide_IsInSprintDelay(ps, pm->cmd.serverTime) && !PM_CmdHasMinimumSprintMovement(ps, &pm->cmd) )
        *(_QWORD *)&ps->sprintState.sprintRestore = 0i64;
    }
    else
    {
      sprintRestoreDelayStart = ps->sprintState.sprintRestoreDelayStart;
      if ( sprintRestoreDelayStart > 0 )
      {
        if ( sprintRestoreDelayStart >= pm->cmd.serverTime )
        {
          v11 = pm->ps;
          if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1642, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v11->pm_flags, ACTIVE, 0x1Du) )
          {
            v12 = 4329733i64;
            if ( PM_IsInAir(pm) )
              v12 = 4329861i64;
            if ( (v12 & pm->cmd.buttons) != 0 )
            {
              v13 = PM_AnyAttackButtonPressed(pm);
              PM_SetSprintRestore(pm, ps, 1, v13, 3.4028235e38);
            }
          }
        }
        else
        {
          *(_QWORD *)&ps->sprintState.sprintRestore = 1i64;
        }
      }
    }
    if ( !ps->sprintState.sprintDelay )
      goto LABEL_57;
    v14 = DCONST_DVARFLT_player_sprintRechargePause;
    if ( !DCONST_DVARFLT_player_sprintRechargePause && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintRechargePause") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( (float)(pm->cmd.serverTime - ps->sprintState.lastSprintEnd) >= (float)(v14->current.value * 1000.0) )
    {
LABEL_57:
      CanStartSprint = PM_CanStartSprint(pm, pml, 1);
      v16 = pm->ps;
      v17 = CanStartSprint;
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1926, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !PM_Weapon_SprintCancelsReload(pm) || ((LOBYTE(pm->cmd.buttons) >> 1) & ((unsigned __int8)~LOBYTE(pm->oldcmd.buttons) >> 1) & 1) == 0 || BG_CanSprintReload(v16) )
        goto LABEL_71;
      v18 = DCONST_DVARMODEFLT_adsReloadSprintCancelMaxFraction;
      if ( !DCONST_DVARMODEFLT_adsReloadSprintCancelMaxFraction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "adsReloadSprintCancelMaxFraction") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      if ( v16->weapCommon.fWeaponPosFrac >= v18->current.value )
        goto LABEL_71;
      WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, v16);
      if ( WeaponHand < 0 )
        goto LABEL_71;
      v20 = 0i64;
      p_weaponState = &v16->weapState[0].weaponState;
      while ( (unsigned int)(*p_weaponState - 18) > 3 )
      {
        ++v20;
        p_weaponState += 20;
        if ( v20 > WeaponHand )
          goto LABEL_71;
      }
      if ( v17 )
      {
        v22 = 1;
        PM_Weapon_ReloadCancel(pm, pml);
      }
      else
      {
LABEL_71:
        v22 = 0;
      }
      if ( v17 && PM_UpdateSprint_IsInspecting(pm, pml) )
        PM_Weapon_CancelInspect(pm);
      if ( v22 || PM_CanStartSprint(pm, pml, 0) )
      {
        *(_QWORD *)&ps->sprintState.sprintRestore = 0i64;
        PM_StartSprint(ps, pm, pml);
        if ( integer == 1 )
          PM_TryStartSuperSprint(pm, pml);
      }
    }
  }
}

/*
==============
PM_UpdateSprintRestore
==============
*/
void PM_UpdateSprintRestore(playerState_s *ps, pmove_t *pm, const pml_t *pml)
{
  int sprintRestoreDelayStart; 
  playerState_s *v6; 
  __int64 v7; 
  bool v8; 

  if ( ps->sprintState.sprintRestore )
  {
    if ( !BG_Skydive_CanQueueSprint(ps) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) && !Slide_IsInSprintDelay(ps, pm->cmd.serverTime) && !PM_CmdHasMinimumSprintMovement(ps, &pm->cmd) )
      *(_QWORD *)&ps->sprintState.sprintRestore = 0i64;
  }
  else
  {
    sprintRestoreDelayStart = ps->sprintState.sprintRestoreDelayStart;
    if ( sprintRestoreDelayStart > 0 )
    {
      if ( sprintRestoreDelayStart >= pm->cmd.serverTime )
      {
        v6 = pm->ps;
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1642, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v6->pm_flags, ACTIVE, 0x1Du) )
        {
          v7 = 4329733i64;
          if ( PM_IsInAir(pm) )
            v7 = 4329861i64;
          if ( (v7 & pm->cmd.buttons) != 0 )
          {
            v8 = PM_AnyAttackButtonPressed(pm);
            PM_SetSprintRestore(pm, ps, 1, v8, 3.4028235e38);
          }
        }
      }
      else
      {
        *(_QWORD *)&ps->sprintState.sprintRestore = 1i64;
      }
    }
  }
}

/*
==============
PM_UpdateSprint_IsInspecting
==============
*/
char PM_UpdateSprint_IsInspecting(pmove_t *pm, const pml_t *pml)
{
  playerState_s *ps; 
  int WeaponHand; 
  __int64 v5; 
  __int64 v6; 
  int *i; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1974, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1974, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
  v5 = WeaponHand;
  if ( WeaponHand < 0 )
    return 0;
  v6 = 0i64;
  for ( i = &ps->weapState[0].weaponState; *i != 78; i += 20 )
  {
    if ( ++v6 > v5 )
      return 0;
  }
  return 1;
}

/*
==============
PM_UpdateViewAngles
==============
*/
void PM_UpdateViewAngles(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const BgHandler *m_bgHandler; 
  usercmd_s *p_cmd; 
  float msec; 
  unsigned __int64 buttons; 
  BOOL v9; 
  bool v10; 
  __int16 viewlocked_entNum; 
  bool IsClientVehicleTurretCamera; 
  int v13; 
  float *v; 
  char *v15; 
  bool v16; 
  double v18; 
  float v21; 
  float v22; 
  double Float_Internal_DebugName; 
  EViewAngleEaseMode Int_Internal_DebugName; 
  EViewAngleEaseMode v25; 
  int v26; 
  int pm_type; 
  GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32> *p_linkFlags; 
  __int64 flags; 
  __int64 v30; 
  vec2_t goalAngles; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10295, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10295, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10296, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  m_bgHandler = pm->m_bgHandler;
  p_cmd = &pm->cmd;
  msec = (float)pml->msec;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x20u) )
  {
    buttons = p_cmd->buttons;
    v9 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
    if ( (buttons & 0x800) != 0 || !v9 )
      BG_UpdateViewAngles_ClampDefault(ps, &pm->cmd);
    return;
  }
  if ( ps->pm_type > 5 )
    return;
  if ( !BG_Skydive_IsSkydiving(ps) && !BG_Skydive_IsWeaponRaise(ps) )
  {
    if ( BG_IsPlayerInExecution(ps) && BG_Execution_CanUpdateViewangles(ps) )
    {
      PM_Execution_UpdateViewAngles(pm);
      return;
    }
    v10 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Cu) || (p_cmd->buttons & 0x40000) != 0;
    viewlocked_entNum = ps->viewlocked_entNum;
    IsClientVehicleTurretCamera = BG_IsClientVehicleTurretCamera(ps, m_bgHandler);
    if ( viewlocked_entNum == 2047 && v10 || IsClientVehicleTurretCamera )
    {
      v13 = 0;
      if ( BG_IsClientVehicleCamera(ps, m_bgHandler) )
      {
        *(_QWORD *)ps->delta_angles.v = 0i64;
        ps->delta_angles.v[2] = 0.0;
      }
      v = ps->delta_angles.v;
      v15 = (char *)((char *)&pm->cmd.angles - (char *)v);
      v16 = 1;
      _XMM8 = 0i64;
      do
      {
        if ( !v16 )
        {
          LODWORD(v30) = 3;
          LODWORD(flags) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", flags, v30) )
            __debugbreak();
        }
        v18 = MSG_UnpackSignedFloat(*(_DWORD *)((char *)v + (_QWORD)v15), 180.0, 0x14u);
        __asm { vroundss xmm7, xmm8, xmm0, 1 }
        if ( (unsigned int)v13 >= 3 )
        {
          LODWORD(v30) = 3;
          LODWORD(flags) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", flags, v30) )
            __debugbreak();
        }
        __asm { vroundss xmm2, xmm8, xmm1, 1 }
        v21 = (float)((float)((float)((float)((float)(*(float *)&v18 * 0.0027777778) - *(float *)&_XMM7) * 1.0) + (float)(0.0027777778 * *v)) - *(float *)&_XMM2) * 360.0;
        if ( (unsigned int)v13 >= 3 )
        {
          LODWORD(v30) = 3;
          LODWORD(flags) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", flags, v30) )
            __debugbreak();
        }
        v[73] = v21;
        ++v;
        v16 = (unsigned int)++v13 < 3;
      }
      while ( v13 < 3 );
      return;
    }
    v22 = ps->viewangles.v[1];
    if ( BG_IsRemoteTurretActive(ps) && !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, ACTIVE, 2u) )
      TurretUpdateViewClamp(pm, msec);
    PM_GameInterface_UpdateViewClamp(pm);
    BG_UpdateViewAngles_ClampDefault(ps, &pm->cmd);
    if ( (p_cmd->buttons & 0x4000000) != 0 )
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_centerview_cameraPitchOffset, "centerview_cameraPitchOffset");
      goalAngles.v[0] = *(float *)&Float_Internal_DebugName;
      goalAngles.v[1] = 0.0;
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_centerview_cameraAlignmentEaseModeOut, "centerview_cameraAlignmentEaseModeOut");
      v25 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_centerview_cameraAlignmentEaseModeIn, "centerview_cameraAlignmentEaseModeIn");
      v26 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_centerview_cameraRotateTimeMs, "centerview_cameraRotateTimeMs");
      PM_StartViewAngleTransition(pm, v26, v25, Int_Internal_DebugName, &goalAngles, 1);
    }
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x10u) )
      PM_UpdateViewAnglesOverride(pm, &pm->cmd);
    pm_type = ps->pm_type;
    if ( pm_type == 1 || pm_type == 8 )
    {
      p_linkFlags = &ps->linkFlags;
      if ( !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, ACTIVE, 0) )
      {
LABEL_65:
        PM_UpdateViewAngles_RangeLimited(ps, v22);
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x21u) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x22u) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(p_linkFlags, ACTIVE, 2u) )
          ps->proneDirection = ps->viewangles.v[1];
        return;
      }
    }
    else
    {
      p_linkFlags = &ps->linkFlags;
    }
    if ( !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(p_linkFlags, ACTIVE, 2u) && !BG_IsTurretActive(ps) && !BG_Ladder_IsActive(ps) && !BG_ContextMount_IsActive(ps) )
    {
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && ps->vehicleState.entity == 2047 )
      {
        if ( BG_IsTurretActive(ps) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10424, ASSERT_TYPE_ASSERT, "(!BG_IsTurretActive( ps ))", (const char *)&queryFormat, "!BG_IsTurretActive( ps )") )
          __debugbreak();
        PM_UpdateViewAngles_Prone(pm, ps, msec, &pm->cmd, m_bgHandler, v22);
      }
      return;
    }
    goto LABEL_65;
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x10u) )
    PM_UpdateViewAnglesOverride(pm, &pm->cmd);
  PM_Skydive_UpdateViewAngles(pm, pml);
}

/*
==============
PM_UpdateViewAngles_Prone
==============
*/
void PM_UpdateViewAngles_Prone(pmove_t *pm, playerState_s *ps, float msec, usercmd_s *cmd, const BgHandler *handler, float oldViewYaw)
{
  float v9; 
  int v10; 
  double v11; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  int v15; 
  BOOL v17; 
  bool v18; 
  BOOL v19; 
  float v21; 
  float v22; 
  double v23; 
  float v24; 
  __int128 v25; 
  float proneDirection; 
  __int128 v27; 
  __int128 proneDirection_low; 
  BOOL v29; 
  double v30; 
  __int128 v33; 
  float fYaw; 
  int isOnGround; 
  double BoundsHeight; 
  float v37; 
  double BoundsRadius; 
  vec3_t *p_origin; 
  FeetDirection v40; 
  float v41; 
  int v42; 
  double v43; 
  float v44; 
  double v45; 
  double v46; 
  __int128 v48; 
  BOOL v49; 
  int v50; 
  double v51; 
  float v52; 
  double v53; 
  int v54; 
  float v59; 
  double v60; 
  double v61; 
  __int128 v62; 
  FeetDirection feetDirection; 
  Physics_WorldId worldId; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10137, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10138, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  v9 = ps->viewangles.v[1];
  v10 = 0;
  v11 = AngleDelta(ps->proneDirection, v9);
  v12 = DCONST_DVARFLT_bg_prone_yawcap;
  v13 = *(float *)&v11;
  if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( *(float *)&v11 > (float)(v12->current.value - 5.0) )
    goto LABEL_16;
  v14 = DCONST_DVARFLT_bg_prone_yawcap;
  if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( *(float *)&v11 < (float)(5.0 - v14->current.value) )
LABEL_16:
    v15 = 1;
  else
    v15 = 0;
  _XMM10 = 0i64;
  v17 = (cmd->forwardmove || cmd->rightmove) && *(float *)&v11 != 0.0;
  v18 = (cmd->buttons & 0x40) != 0;
  feetDirection = PM_GetProneFeetDirection(ps);
  v19 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) || feetDirection == FEETDIR_FRONT;
  worldId = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
  _XMM13 = LODWORD(FLOAT_N1_0);
  if ( v15 || v17 || v18 )
  {
    v21 = FLOAT_55_0;
    LODWORD(v22) = LODWORD(pm->fWaistPitch) & _xmm;
    if ( Com_GameMode_SupportsFeature(WEAPON_STUNNED_START|0x80) && v22 >= 10.0 )
    {
      v23 = I_fclamp((float)(v22 - 10.0) * 0.050000001, 0.0, 1.0);
      v21 = (float)((float)(1.0 - *(float *)&v23) * 55.0) + (float)(*(float *)&v23 * 360.0);
    }
    v24 = (float)(v21 * msec) * 0.001;
    if ( COERCE_FLOAT(LODWORD(v13) & _xmm) >= v24 )
    {
      proneDirection = ps->proneDirection;
      if ( v13 <= 0.0 )
      {
        proneDirection_low = LODWORD(ps->proneDirection);
        *(float *)&proneDirection_low = proneDirection + v24;
        v25 = proneDirection_low;
      }
      else
      {
        v27 = LODWORD(ps->proneDirection);
        *(float *)&v27 = proneDirection - v24;
        v25 = v27;
      }
    }
    else
    {
      v25 = LODWORD(ps->viewangles.v[1]);
    }
    v29 = 1;
    if ( !BG_CheckProneTurned(pm, ps, *(float *)&v25, handler) )
    {
      while ( !v19 )
      {
        if ( !v29 )
          goto LABEL_55;
        v30 = AngleDelta(ps->proneDirection, *(const float *)&v25);
        LODWORD(_XMM2) = LODWORD(v30);
        v29 = COERCE_FLOAT(LODWORD(v30) & _xmm) > 1.0;
        if ( COERCE_FLOAT(LODWORD(v30) & _xmm) <= 1.0 )
        {
          v10 = 1;
        }
        else
        {
          __asm
          {
            vcmpltss xmm0, xmm10, xmm2
            vblendvps xmm2, xmm13, xmm9, xmm0
          }
        }
        v33 = v25;
        *(float *)&v33 = *(float *)&v25 + *(float *)&_XMM2;
        AngleNormalize360(*(float *)&v25 + *(float *)&_XMM2);
        v25 = v33;
        if ( BG_CheckProneTurned(pm, ps, *(float *)&v33, handler) )
          goto LABEL_44;
      }
      goto LABEL_47;
    }
LABEL_44:
    if ( v19 )
    {
LABEL_47:
      v41 = FLOAT_45_0;
      v40 = feetDirection;
      p_origin = &ps->origin;
      goto LABEL_48;
    }
    fYaw = ps->viewangles.v[1];
    isOnGround = ps->groundEntityNum != 2047;
    BoundsHeight = BG_Suit_GetBoundsHeight(ps, PM_EFF_STANCE_PRONE);
    v37 = *(float *)&BoundsHeight;
    BoundsRadius = BG_Suit_GetBoundsRadius(ps);
    p_origin = &ps->origin;
    v40 = feetDirection;
    v41 = FLOAT_45_0;
    if ( BG_CheckProne(ps, ps->clientNum, &ps->origin, *(const float *)&BoundsRadius, v37, fYaw, NULL, NULL, 1, isOnGround, 1, handler, worldId, PCT_CLIENT, 45.0, feetDirection, NULL, NULL) )
    {
LABEL_48:
      if ( v19 || (v42 = ps->groundEntityNum != 2047, v43 = BG_Suit_GetBoundsHeight(ps, PM_EFF_STANCE_PRONE), v44 = *(float *)&v43, v45 = BG_Suit_GetBoundsRadius(ps), BG_CheckProne(ps, ps->clientNum, p_origin, *(const float *)&v45, v44, *(const float *)&v25, NULL, NULL, 1, v42, 1, handler, worldId, PCT_CLIENT, v41, v40, NULL, NULL)) )
      {
        if ( (v25 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10199, ASSERT_TYPE_ASSERT, "(!IS_NAN( newProneYaw ))", (const char *)&queryFormat, "!IS_NAN( newProneYaw )") )
          __debugbreak();
        ps->proneDirection = *(float *)&v25;
      }
      else
      {
        v10 = 1;
      }
      goto LABEL_56;
    }
    v10 = 1;
  }
  else
  {
LABEL_55:
    v40 = feetDirection;
  }
LABEL_56:
  v46 = AngleDelta(ps->proneDirection, ps->viewangles.v[1]);
  LODWORD(_XMM7) = LODWORD(v46);
  if ( *(float *)&v46 == 0.0 )
    goto LABEL_72;
  v48 = LODWORD(ps->proneDirection);
  v49 = 1;
  while ( 1 )
  {
    if ( !v19 )
    {
      v50 = ps->groundEntityNum != 2047;
      v51 = BG_Suit_GetBoundsHeight(ps, PM_EFF_STANCE_PRONE);
      v52 = *(float *)&v51;
      v53 = BG_Suit_GetBoundsRadius(ps);
      if ( !BG_CheckProne(ps, ps->clientNum, &ps->origin, *(const float *)&v53, v52, *(const float *)&v48, NULL, NULL, 1, v50, 1, handler, worldId, PCT_CLIENT, 45.0, v40, NULL, NULL) )
      {
        v54 = 0;
        goto LABEL_63;
      }
    }
    v54 = 1;
    if ( BG_CheckProneTurned(pm, ps, *(float *)&v48, handler) || v19 )
      break;
LABEL_63:
    if ( !v49 )
      goto LABEL_72;
    v49 = COERCE_FLOAT(_XMM7 & _xmm) > 1.0;
    if ( COERCE_FLOAT(_XMM7 & _xmm) > 1.0 )
    {
      __asm
      {
        vcmpltss xmm0, xmm10, xmm7
        vblendvps xmm7, xmm13, xmm9, xmm0
      }
    }
    _XMM5 = 0i64;
    __asm { vroundss xmm1, xmm5, xmm0, 1 }
    v10 = 1;
    __asm { vroundss xmm3, xmm5, xmm2, 1 }
    ps->delta_angles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    v59 = *(float *)&_XMM7 + ps->viewangles.v[1];
    v60 = AngleNormalize360(v59);
    ps->viewangles.v[1] = *(float *)&v60;
    v61 = AngleDelta(ps->proneDirection, v59);
    LODWORD(_XMM7) = LODWORD(v61);
    if ( !v54 )
    {
      v62 = v48;
      *(float *)&v62 = *(float *)&v48 + *(float *)&v61;
      AngleNormalize360(*(float *)&v48 + *(float *)&v61);
      v48 = v62;
    }
  }
  if ( (v48 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10244, ASSERT_TYPE_ASSERT, "(!IS_NAN( newProneYaw ))", (const char *)&queryFormat, "!IS_NAN( newProneYaw )") )
    __debugbreak();
  ps->proneDirection = *(float *)&v48;
LABEL_72:
  if ( v19 && v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10275, ASSERT_TYPE_ASSERT, "(!ignoreValidityResults || !proneBlocked)", (const char *)&queryFormat, "!ignoreValidityResults || !proneBlocked") )
    __debugbreak();
  PM_UpdateViewAngles_ProneYawClamp(pm, *(float *)&_XMM7, v10, oldViewYaw, v9);
  PM_UpdateViewAngles_PronePitchClamp(ps);
}

/*
==============
PM_UpdateViewAngles_PronePitchClamp
==============
*/
void PM_UpdateViewAngles_PronePitchClamp(playerState_s *ps)
{
  double v2; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  float v7; 
  const dvar_t *v8; 
  float v11; 
  const dvar_t *v13; 
  float v14; 
  const dvar_t *v15; 

  v2 = AngleDelta(ps->proneTorsoPitch, ps->viewangles.v[0]);
  v3 = DCONST_DVARFLT_player_prone_view_pitch_up;
  if ( !DCONST_DVARFLT_player_prone_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_up") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( *(float *)&v2 > v3->current.value )
    goto LABEL_9;
  v4 = DCONST_DVARFLT_player_prone_view_pitch_down;
  if ( !DCONST_DVARFLT_player_prone_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_down") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( *(float *)&v2 < COERCE_FLOAT(v4->current.integer ^ _xmm) )
  {
LABEL_9:
    v5 = DCONST_DVARFLT_player_prone_view_pitch_up;
    if ( !DCONST_DVARFLT_player_prone_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_up") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( *(float *)&v2 <= v5->current.value )
    {
      v8 = DCONST_DVARFLT_player_prone_view_pitch_down;
      if ( !DCONST_DVARFLT_player_prone_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_down") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      v7 = *(float *)&v2 + v8->current.value;
    }
    else
    {
      v6 = DCONST_DVARFLT_player_prone_view_pitch_up;
      if ( !DCONST_DVARFLT_player_prone_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_up") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      v7 = *(float *)&v2 - v6->current.value;
    }
    _XMM6 = 0i64;
    __asm { vroundss xmm3, xmm6, xmm1, 1 }
    v11 = _mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM3).m128_f32[0] * 0.000015258789;
    __asm { vroundss xmm3, xmm6, xmm2, 1 }
    ps->delta_angles.v[0] = (float)(v11 - *(float *)&_XMM3) * 360.0;
    if ( v7 <= 0.0 )
    {
      v15 = DCONST_DVARFLT_player_prone_view_pitch_down;
      if ( !DCONST_DVARFLT_player_prone_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_down") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      v14 = v15->current.value + ps->proneTorsoPitch;
    }
    else
    {
      v13 = DCONST_DVARFLT_player_prone_view_pitch_up;
      if ( !DCONST_DVARFLT_player_prone_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_up") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      v14 = ps->proneTorsoPitch - v13->current.value;
    }
    __asm { vroundss xmm3, xmm6, xmm2, 1 }
    ps->viewangles.v[0] = (float)((float)(v14 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  }
}

/*
==============
PM_UpdateViewAngles_ProneYawClamp
==============
*/
void PM_UpdateViewAngles_ProneYawClamp(pmove_t *pm, float delta, int proneBlocked, float oldViewYaw, float newViewYaw)
{
  BgWeaponMap *weaponMap; 
  playerState_s *ps; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  bool v13; 
  const dvar_t *v14; 
  float v15; 
  const dvar_t *v19; 
  float v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10043, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  weaponMap = pm->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10046, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10049, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = DCONST_DVARFLT_bg_prone_yawcap;
  if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( delta > v10->current.value )
    goto LABEL_18;
  v11 = DCONST_DVARFLT_bg_prone_yawcap;
  if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( delta < COERCE_FLOAT(v11->current.integer ^ _xmm) )
  {
LABEL_18:
    v12 = DCONST_DVARFLT_bg_prone_yawcap;
    if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = delta <= v12->current.value;
    v14 = DCONST_DVARFLT_bg_prone_yawcap;
    if ( v13 )
    {
      if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      v15 = delta + v14->current.value;
    }
    else
    {
      if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      v15 = delta - v14->current.value;
    }
    _XMM5 = 0i64;
    __asm
    {
      vroundss xmm1, xmm5, xmm0, 1
      vroundss xmm3, xmm5, xmm2, 1
    }
    ps->delta_angles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    v19 = DCONST_DVARFLT_bg_prone_yawcap;
    if ( v15 <= 0.0 )
    {
      if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      v20 = v19->current.value + ps->proneDirection;
    }
    else
    {
      if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      v20 = ps->proneDirection - v19->current.value;
    }
    v21 = AngleNormalize360(v20);
    ps->viewangles.v[1] = *(float *)&v21;
  }
  if ( proneBlocked )
  {
    BG_AddPredictableEventToPlayerstate(EV_STANCE_INVALID, 3u, pm->cmd.serverTime, weaponMap, ps);
    v22 = AngleDelta(oldViewYaw, ps->viewangles.v[1]);
    if ( COERCE_FLOAT(LODWORD(v22) & _xmm) <= 1.0 )
    {
      v23 = AngleDelta(newViewYaw, ps->viewangles.v[1]);
      if ( (float)(*(float *)&v23 * oldViewYaw) > 0.0 )
      {
        v24 = AngleNormalize360((float)(oldViewYaw * 0.98000002) + ps->viewangles.v[1]);
        ps->viewangles.v[1] = *(float *)&v24;
        _XMM5 = 0i64;
        __asm
        {
          vroundss xmm1, xmm5, xmm0, 1
          vroundss xmm3, xmm5, xmm2, 1
        }
        ps->delta_angles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
      }
    }
  }
}

/*
==============
PM_UpdateViewAngles_RangeLimited
==============
*/
void PM_UpdateViewAngles_RangeLimited(playerState_s *ps, const float oldYaw)
{
  unsigned int v2; 
  __int64 v4; 
  bool v5; 
  double v7; 
  float v8; 
  double v9; 
  const dvar_t *v10; 
  float v11; 
  float v12; 
  float v15; 
  double v16; 
  float v17; 
  float v21; 
  float v22; 
  double v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 

  v2 = 0;
  v4 = 0i64;
  v5 = 1;
  do
  {
    if ( !v5 )
    {
      LODWORD(v27) = 2;
      LODWORD(v24) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v27) )
        __debugbreak();
    }
    if ( ps->viewAngleClampRange.v[v4] < 180.0 )
    {
      if ( v2 == 1 )
      {
        v7 = AngleDelta(ps->viewAngleClampBase.v[1], oldYaw);
        v8 = *(float *)&v7;
        v9 = AngleDelta(oldYaw, ps->viewangles.v[1]);
        v10 = DVARBOOL_bg_ladder_get_smaller_view_clamp_delta_angle;
        v12 = v8 + *(float *)&v9;
        v11 = v8 + *(float *)&v9;
        if ( !DVARBOOL_bg_ladder_get_smaller_view_clamp_delta_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_get_smaller_view_clamp_delta_angle") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v10);
        if ( v10->current.enabled && BG_Ladder_IsActive(ps) )
        {
          _XMM1 = 0i64;
          __asm { vroundss xmm3, xmm1, xmm2, 1 }
          v11 = (float)((float)(v12 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
        }
      }
      else
      {
        if ( v2 >= 3 )
        {
          LODWORD(v27) = 3;
          LODWORD(v24) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v27) )
            __debugbreak();
        }
        v15 = ps->viewangles.v[v4];
        if ( v2 >= 2 )
        {
          LODWORD(v27) = 2;
          LODWORD(v24) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v27) )
            __debugbreak();
        }
        v16 = AngleDelta(ps->viewAngleClampBase.v[v4], v15);
        v11 = *(float *)&v16;
        if ( v2 >= 2 )
        {
          LODWORD(v27) = 2;
          LODWORD(v24) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v27) )
            __debugbreak();
        }
      }
      if ( v11 > ps->viewAngleClampRange.v[v4] )
        goto LABEL_68;
      if ( v2 >= 2 )
      {
        LODWORD(v27) = 2;
        LODWORD(v24) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v27) )
          __debugbreak();
      }
      if ( v11 < COERCE_FLOAT(LODWORD(ps->viewAngleClampRange.v[v4]) ^ _xmm) )
      {
LABEL_68:
        if ( v2 >= 2 )
        {
          LODWORD(v27) = 2;
          LODWORD(v24) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v27) )
            __debugbreak();
        }
        if ( v11 <= ps->viewAngleClampRange.v[v4] )
        {
          if ( v2 >= 2 )
          {
            LODWORD(v27) = 2;
            LODWORD(v24) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v27) )
              __debugbreak();
          }
          v17 = v11 + ps->viewAngleClampRange.v[v4];
        }
        else
        {
          if ( v2 >= 2 )
          {
            LODWORD(v27) = 2;
            LODWORD(v24) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v27) )
              __debugbreak();
          }
          v17 = v11 - ps->viewAngleClampRange.v[v4];
        }
        if ( v2 >= 3 )
        {
          LODWORD(v27) = 3;
          LODWORD(v24) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v27) )
            __debugbreak();
        }
        ps->delta_angles.v[v4] = v17 + ps->delta_angles.v[v4];
        if ( v2 >= 3 )
        {
          LODWORD(v27) = 3;
          LODWORD(v24) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v27) )
            __debugbreak();
        }
        _XMM5 = 0i64;
        __asm
        {
          vroundss xmm1, xmm5, xmm3, 1
          vroundss xmm3, xmm5, xmm2, 1
        }
        v21 = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
        if ( v2 >= 3 )
        {
          LODWORD(v27) = 3;
          LODWORD(v24) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v27) )
            __debugbreak();
        }
        ps->delta_angles.v[v4] = v21;
        if ( v17 <= 0.0 )
        {
          if ( v2 >= 2 )
          {
            LODWORD(v27) = 2;
            LODWORD(v24) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v27) )
              __debugbreak();
            LODWORD(v29) = 2;
            LODWORD(v26) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v29) )
              __debugbreak();
          }
          v22 = ps->viewAngleClampBase.v[v4] + ps->viewAngleClampRange.v[v4];
        }
        else
        {
          if ( v2 >= 2 )
          {
            LODWORD(v27) = 2;
            LODWORD(v24) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v27) )
              __debugbreak();
            LODWORD(v28) = 2;
            LODWORD(v25) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v25, v28) )
              __debugbreak();
          }
          v22 = ps->viewAngleClampBase.v[v4] - ps->viewAngleClampRange.v[v4];
        }
        v23 = AngleNormalize360(v22);
        if ( v2 >= 3 )
        {
          LODWORD(v27) = 3;
          LODWORD(v24) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v27) )
            __debugbreak();
        }
        ps->viewangles.v[v4] = *(float *)&v23;
      }
    }
    ++v2;
    ++v4;
    v5 = v2 < 2;
  }
  while ( (int)v2 < 2 );
}

/*
==============
PM_ViewHeightAdjust
==============
*/
void PM_ViewHeightAdjust(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const SuitDef *SuitDef; 
  int viewHeightTarget; 
  double v6; 
  const dvar_t *v7; 
  int v8; 
  int Int_Internal_DebugName; 
  float v10; 
  double v11; 
  float v12; 
  bool v13; 
  float viewheight_laststand; 
  int v15; 
  __int128 v17; 
  int v18; 
  bool v19; 
  bool v20; 
  double Float_Internal_DebugName; 
  int lastSprintEnd; 
  float v23; 
  int v24; 
  __int128 v25; 
  int v26; 
  bool v27; 
  bool v28; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  bool v30; 
  float viewHeightCurrent; 
  __int128 v32; 
  __int128 v33; 
  bool v34; 
  float v35; 
  int v36; 
  int viewheight_slide; 
  int slide_viewBlendInTimeMs; 
  float v39; 
  int v40; 
  float v41; 
  float v42; 
  int v43; 
  const dvar_t *v44; 
  const char *v45; 
  int v46; 
  float v47; 
  float v48; 
  __int64 v49; 
  float v50; 
  float v51; 
  int viewHeightLerpTarget; 
  double v53; 
  bool v54; 
  const char *v55; 
  int viewHeightLerpTime; 
  viewLerpWaypoint_s *v57; 
  int v58; 
  int v59; 
  float v60; 
  int v61; 
  int v62; 
  int v63; 
  float v64; 
  viewLerpWaypoint_s *v65; 
  int v67; 
  int viewheight_stand; 
  bool v69; 
  int viewHeightLerpDown; 
  int v71; 
  int v72; 
  int viewheight_crouch; 
  int ProneViewHeight; 
  int v75; 
  int v76; 
  int v77; 
  float v78; 
  int v79; 
  float v80; 
  int v81; 
  float v82; 
  float v83; 
  int v84; 
  bool v85; 
  int v86; 
  int v87; 
  int v88; 
  bool Bool_Internal_DebugName; 
  int v90; 
  const char *v91; 
  const dvar_t *v92; 
  const dvar_t *v93; 
  char *fmt; 
  __int64 v95; 
  __int64 v96; 
  bool v97; 
  int v98; 
  int v99; 
  vec3_t outUp; 

  *(_QWORD *)outUp.v = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5868, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5868, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5871, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  viewHeightTarget = ps->viewHeightTarget;
  if ( !viewHeightTarget || ps->viewHeightCurrent == 0.0 )
  {
    if ( ps->pm_type == 5 )
    {
      ps->viewHeightCurrent = 0.0;
      v92 = DCONST_DVARBOOL_viewHeightDebugLogEnabled;
      if ( !DCONST_DVARBOOL_viewHeightDebugLogEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewHeightDebugLogEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v92);
      if ( v92->current.enabled && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
      {
        LODWORD(v95) = ps->viewHeightTarget;
        Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Spectator set current view height to: %.2f. Target: %d\n", (unsigned int)ps->clientNum, (unsigned int)pm->cmd.serverTime, ps->viewHeightCurrent, v95);
      }
    }
    else
    {
      ps->viewHeightCurrent = (float)viewHeightTarget;
      v93 = DCONST_DVARBOOL_viewHeightDebugLogEnabled;
      if ( !DCONST_DVARBOOL_viewHeightDebugLogEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewHeightDebugLogEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v93);
      if ( v93->current.enabled && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
      {
        LODWORD(v95) = ps->viewHeightTarget;
        Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Current view height is set to: %.2f. Target: %d\n", (unsigned int)ps->clientNum, (unsigned int)pm->cmd.serverTime, ps->viewHeightCurrent, v95);
      }
    }
    return;
  }
  if ( BG_ContextMount_IsActive(ps) )
  {
    WorldUpReferenceFrame::GetUpVector(&pm->refFrame, &outUp);
    v6 = BG_ContextMount_GetViewHeightTarget(pm->weaponMap, ps, &outUp);
    ps->viewHeightCurrent = (float)((float)(1.0 - ps->mountState.mountFraction) * ps->mountState.mountViewHeight) + (float)(ps->mountState.mountFraction * *(float *)&v6);
    v7 = DCONST_DVARBOOL_viewHeightDebugLogEnabled;
    if ( !DCONST_DVARBOOL_viewHeightDebugLogEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewHeightDebugLogEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
      Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Contextual mount set current view height to: %.2f. Target: %.2f\n", (unsigned int)ps->clientNum, (unsigned int)pm->cmd.serverTime, ps->viewHeightCurrent, *(float *)&v6);
    return;
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) && Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_last_stand_rewrite_enabled, "killswitch_last_stand_rewrite_enabled") )
  {
    v8 = ps->serverTime - ps->lastStandTime;
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_lastStandViewHeightLerpTime, "lastStandViewHeightLerpTime");
    if ( Int_Internal_DebugName <= 0 )
      v10 = FLOAT_1_0;
    else
      v10 = (float)v8 / (float)Int_Internal_DebugName;
    v11 = I_fclamp(v10, 0.0, 1.0);
    v12 = *(float *)&v11;
    v13 = *(float *)&v11 < 1.0;
    viewheight_laststand = (float)SuitDef->viewheight_laststand;
    if ( v13 )
      viewheight_laststand = PM_ViewHeightTableLerp(v12, viewLerp_lastStand, ps->lastStandStartViewHeight, (float)SuitDef->viewheight_laststand);
    ps->viewHeightCurrent = viewheight_laststand;
    ps->viewHeightLerpTime = 0;
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_viewHeightDebugLogEnabled, "viewHeightDebugLogEnabled") && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
      Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Last Stand set current view height to: %.2f. Target: %.2f\n", (unsigned int)ps->clientNum, (unsigned int)pm->cmd.serverTime, ps->viewHeightCurrent, (float)SuitDef->viewheight_laststand);
    return;
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_player_vehicleSeatViewHeightLerpFixEnabled, "player_vehicleSeatViewHeightLerpFixEnabled") && (float)ps->viewHeightTarget != ps->viewHeightCurrent && BG_VehicleOccupancy_PlayerIsSeated(ps) )
  {
    v15 = ps->viewHeightTarget;
    ps->viewHeightLerpTarget = v15;
    ps->viewHeightLerpTime = 0;
    ps->viewHeightCurrent = (float)v15;
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x1Au);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x37u);
    ps->mountState.flags &= ~8u;
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_viewHeightDebugLogEnabled, "viewHeightDebugLogEnabled") && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
    {
      LODWORD(fmt) = ps->viewHeightTarget;
      Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Player's vehicle occupancy set view height to: %d from the current value of %.2f\n", (unsigned int)ps->clientNum, (unsigned int)pm->cmd.serverTime, fmt, ps->viewHeightCurrent);
    }
    return;
  }
  v17 = 0i64;
  *(float *)&v17 = (float)ps->viewHeightTarget;
  _XMM0 = v17;
  if ( *(float *)&v17 == ps->viewHeightCurrent && !ps->viewHeightLerpTime )
    return;
  v18 = 0;
  v98 = 0;
  v19 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du);
  if ( !v19 )
    v19 = pm->cmd.serverTime - ps->slideState.slideEndTime <= SuitDef->slide_viewBlendOutTimeMs;
  v20 = 0;
  if ( !v19 && Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_enableSprintViewHeight, "enableSprintViewHeight") )
  {
    v20 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u);
    if ( !v20 && ps->viewHeightTarget >= SuitDef->bounds_height_crouch )
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_sprintViewHeightLerpSpeed, "sprintViewHeightLerpSpeed");
      lastSprintEnd = ps->sprintState.lastSprintEnd;
      v23 = *(float *)&Float_Internal_DebugName;
      v24 = abs32(pm->ps->viewHeightTarget - BG_GetViewHeightSprint(ps, SuitDef));
      if ( *(float *)&Float_Internal_DebugName <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5822, ASSERT_TYPE_ASSERT, "(lerpSpeed > 0.0f)", (const char *)&queryFormat, "lerpSpeed > 0.0f") )
        __debugbreak();
      v25 = 0i64;
      *(float *)&v25 = (float)v24;
      _XMM0 = v25;
      v20 = pm->cmd.serverTime - *(_DWORD *)(*(_QWORD *)outUp.v + 40i64) - lastSprintEnd <= (int)(float)((float)(*(float *)&v25 / v23) * 1000.0);
    }
  }
  v26 = ps->viewHeightTarget;
  v27 = (ps->mountState.flags & 8) != 0;
  if ( v26 == BG_Suit_GetProneViewHeight(SuitDef) || v26 == SuitDef->viewheight_crouch || v26 == SuitDef->viewheight_stand )
  {
    if ( v19 )
      v28 = 1;
    else
      v28 = v20 || v27 || BG_IsPlayerSwimming(ps);
  }
  else
  {
    v28 = 1;
  }
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_allowSimpleLerpToProne, "allowSimpleLerpToProne") )
  {
    p_otherFlags = &ps->otherFlags;
    goto LABEL_70;
  }
  p_otherFlags = &ps->otherFlags;
  v30 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x1Au);
  viewHeightCurrent = ps->viewHeightCurrent;
  v32 = 0i64;
  *(float *)&v32 = (float)ps->viewHeightTarget;
  _XMM0 = v32;
  v97 = v30;
  v34 = 0;
  if ( *(float *)&v32 < viewHeightCurrent )
  {
    v33 = 0i64;
    *(float *)&v33 = (float)SuitDef->viewheight_crouch;
    _XMM0 = v33;
    if ( viewHeightCurrent >= *(float *)&v33 && (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x36u) || ps->viewHeightTarget == BG_Suit_GetProneViewHeight(SuitDef)) )
      v34 = 1;
  }
  if ( !v28 && !v97 )
    goto LABEL_72;
  if ( !v34 )
  {
LABEL_70:
    if ( v28 )
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(p_otherFlags, ACTIVE, 0x1Au);
    goto LABEL_72;
  }
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x1Au);
LABEL_72:
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x1Au) )
  {
    v35 = FLOAT_180_0;
    if ( v19 )
    {
      v36 = ps->viewHeightTarget;
      viewheight_slide = SuitDef->viewheight_slide;
      if ( v36 == viewheight_slide )
        slide_viewBlendInTimeMs = SuitDef->slide_viewBlendInTimeMs;
      else
        slide_viewBlendInTimeMs = SuitDef->slide_viewBlendOutTimeMs;
      v39 = (float)slide_viewBlendInTimeMs * 0.001;
      if ( v39 <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6024, ASSERT_TYPE_ASSERT, "(viewAnglesBlendTimeSec > 1.0E-6)", (const char *)&queryFormat, "viewAnglesBlendTimeSec > ZERO_EPSILON") )
        __debugbreak();
      if ( v36 == viewheight_slide )
        v40 = SuitDef->viewheight_slide - BG_GetViewHeightSprint(ps, SuitDef);
      else
        v40 = SuitDef->viewheight_slide - ps->viewHeightTarget;
      LODWORD(v41) = COERCE_UNSIGNED_INT((float)v40) & _xmm;
      if ( v41 <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6035, ASSERT_TYPE_ASSERT, "(distanceInInches > 1.0E-6)", (const char *)&queryFormat, "distanceInInches > ZERO_EPSILON") )
        __debugbreak();
      v35 = v41 / v39;
      p_otherFlags = &ps->otherFlags;
    }
    else if ( v20 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x37u) )
    {
      LODWORD(v42) = COERCE_UNSIGNED_INT((float)ps->viewHeightTarget - ps->viewHeightCurrent) & _xmm;
      v43 = abs32(SuitDef->viewheight_crouch - BG_GetViewHeightSprint(ps, SuitDef));
      if ( (float)ps->viewHeightTarget < ps->viewHeightCurrent && BG_IsSuperSprinting(ps) )
      {
        v44 = DCONST_DVARFLT_superSprintHeightBlendSpeed;
        v45 = "superSprintHeightBlendSpeed";
      }
      else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x37u) )
      {
        v44 = DCONST_DVARFLT_proneToSprintStandSpeed;
        v45 = "proneToSprintStandSpeed";
      }
      else
      {
        if ( v42 > (float)v43 )
          goto LABEL_97;
        v44 = DCONST_DVARFLT_sprintViewHeightLerpSpeed;
        v45 = "sprintViewHeightLerpSpeed";
      }
      LODWORD(v35) = COERCE_UNSIGNED_INT64(Dvar_GetFloat_Internal_DebugName(v44, v45));
    }
LABEL_97:
    v46 = ps->viewHeightTarget;
    v47 = ps->viewHeightCurrent;
    ps->viewHeightLerpTarget = v46;
    v48 = (float)v46;
    v49 = *(_QWORD *)outUp.v;
    ps->viewHeightLerpTime = 0;
    v50 = v35 * *(float *)(v49 + 36);
    if ( v47 >= v48 )
    {
      v51 = v47 - v50;
      ps->viewHeightCurrent = v51;
      if ( v51 <= v48 )
      {
LABEL_101:
        ps->viewHeightCurrent = v48;
        v51 = v48;
      }
    }
    else
    {
      v51 = v47 + v50;
      ps->viewHeightCurrent = v51;
      if ( v51 >= v48 )
        goto LABEL_101;
    }
    if ( v51 == v48 )
    {
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(p_otherFlags, ACTIVE, 0x1Au);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x37u);
      ps->mountState.flags &= ~8u;
    }
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_viewHeightDebugLogEnabled, "viewHeightDebugLogEnabled") && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
    {
      viewHeightLerpTarget = ps->viewHeightLerpTarget;
      v53 = ps->viewHeightCurrent;
      v54 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x1Au);
      v55 = "Finished";
      if ( v54 )
        v55 = "Active";
      Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Simple lerp status: %s Lerp Speed: %.2f Current: %.2f Target: %d\n", (unsigned int)ps->clientNum, (unsigned int)pm->cmd.serverTime, v55, v35, v53, viewHeightLerpTarget);
    }
    return;
  }
  viewHeightLerpTime = ps->viewHeightLerpTime;
  v57 = viewLerp_CrouchProneDirect;
  if ( !viewHeightLerpTime )
  {
LABEL_136:
    v67 = ps->viewHeightTarget;
    if ( viewHeightLerpTime )
    {
      viewheight_stand = ps->viewHeightLerpTarget;
      v69 = v67 <= viewheight_stand;
      if ( v67 == viewheight_stand )
        return;
      if ( v67 < viewheight_stand )
      {
        viewHeightLerpDown = ps->viewHeightLerpDown;
        if ( !viewHeightLerpDown )
        {
LABEL_143:
          v71 = 100 - v98;
          v72 = viewHeightLerpDown ^ 1;
          ps->viewHeightLerpDown = v72;
          if ( v72 )
          {
            viewheight_crouch = SuitDef->viewheight_crouch;
            if ( viewheight_stand == SuitDef->viewheight_stand )
            {
              ps->viewHeightLerpTarget = viewheight_crouch;
              viewheight_stand = viewheight_crouch;
            }
            else if ( viewheight_stand == viewheight_crouch )
            {
              ProneViewHeight = BG_Suit_GetProneViewHeight(SuitDef);
              ps->viewHeightLerpTarget = ProneViewHeight;
              viewheight_stand = ProneViewHeight;
            }
          }
          else
          {
            v75 = BG_Suit_GetProneViewHeight(SuitDef);
            viewheight_stand = ps->viewHeightLerpTarget;
            v76 = SuitDef->viewheight_crouch;
            if ( viewheight_stand == v75 )
            {
              ps->viewHeightLerpTarget = v76;
              viewheight_stand = v76;
            }
            else if ( viewheight_stand == v76 )
            {
              viewheight_stand = SuitDef->viewheight_stand;
              ps->viewHeightLerpTarget = viewheight_stand;
            }
          }
          if ( v71 == 100 )
          {
            ps->viewHeightCurrent = (float)viewheight_stand;
            ps->viewHeightLerpTime = 0;
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_viewHeightDebugLogEnabled, "viewHeightDebugLogEnabled") && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
            {
              LODWORD(v95) = ps->viewHeightLerpTarget;
              Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Complex lerp direction changed but goal is already reached. Current: %.2f Target: %d\n", (unsigned int)ps->clientNum, (unsigned int)pm->cmd.serverTime, ps->viewHeightCurrent, v95);
            }
          }
          else
          {
            v77 = PM_GetViewHeightLerpTime(ps, viewheight_stand, ps->viewHeightLerpDown);
            v78 = (float)v71;
            v79 = ps->viewHeightLerpTarget;
            v99 = v77;
            ps->viewHeightLerpTime = pm->cmd.serverTime - (int)(float)((float)(v78 * 0.0099999998) * (float)v77);
            v80 = v78 * 0.0099999998;
            if ( v79 == BG_Suit_GetProneViewHeight(SuitDef) )
            {
              if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x36u) )
                v57 = viewLerp_CrouchProne;
              v81 = BG_Suit_GetProneViewHeight(SuitDef);
              v82 = (float)SuitDef->viewheight_crouch;
              v83 = (float)v81;
            }
            else
            {
              v84 = SuitDef->viewheight_crouch;
              if ( v79 == v84 )
              {
                if ( ps->viewHeightLerpDown )
                {
                  v85 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
                  v57 = viewLerp_StandCrouchDirect;
                  v82 = (float)SuitDef->viewheight_stand;
                  if ( !v85 )
                    v57 = viewLerp_StandCrouch;
                  v83 = (float)SuitDef->viewheight_crouch;
                }
                else
                {
                  v57 = viewLerp_ProneCrouch;
                  v82 = (float)BG_Suit_GetProneViewHeight(SuitDef);
                  v83 = (float)v84;
                }
              }
              else
              {
                v83 = (float)SuitDef->viewheight_stand;
                v82 = (float)v84;
                v57 = viewLerp_CrouchStand;
              }
              v77 = v99;
            }
            PM_ViewHeightTableLerp(v80, v57, v82, v83);
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_viewHeightDebugLogEnabled, "viewHeightDebugLogEnabled") && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
            {
              LODWORD(v96) = ps->viewHeightLerpTarget;
              LODWORD(v95) = v77;
              LODWORD(fmt) = ps->viewHeightLerpTime;
              Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Complex lerp direction changed. Complex lerp start time: %d Lerp Completion Time: %d Current: %.2f Target: %d\n", (unsigned int)ps->clientNum, (unsigned int)pm->cmd.serverTime, fmt, v95, ps->viewHeightCurrent, v96);
            }
          }
          return;
        }
        v69 = v67 <= viewheight_stand;
      }
      if ( v69 )
        return;
      viewHeightLerpDown = ps->viewHeightLerpDown;
      if ( !viewHeightLerpDown )
        return;
      goto LABEL_143;
    }
    if ( (float)v67 == ps->viewHeightCurrent )
      return;
    ps->viewHeightLerpTime = pm->cmd.serverTime;
    v86 = BG_Suit_GetProneViewHeight(SuitDef);
    v87 = ps->viewHeightTarget;
    if ( v87 == v86 )
    {
      ps->viewHeightLerpDown = 1;
      v88 = SuitDef->viewheight_crouch;
      if ( (float)v88 >= ps->viewHeightCurrent )
      {
        ps->viewHeightLerpTarget = BG_Suit_GetProneViewHeight(SuitDef);
LABEL_185:
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_viewHeightDebugLogEnabled, "viewHeightDebugLogEnabled") && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
        {
          v91 = "Up";
          if ( ps->viewHeightLerpDown )
            v91 = "Down";
          LODWORD(v95) = ps->viewHeightLerpTarget;
          Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d New lerp started. Current: %.2f Target: %d Dir: %s\n", (unsigned int)ps->clientNum, (unsigned int)pm->cmd.serverTime, ps->viewHeightCurrent, v95, v91);
        }
        return;
      }
    }
    else
    {
      if ( v87 == SuitDef->viewheight_crouch )
      {
        LOBYTE(v18) = (float)v87 < ps->viewHeightCurrent;
        ps->viewHeightLerpDown = v18;
        ps->viewHeightLerpTarget = SuitDef->viewheight_crouch;
        goto LABEL_185;
      }
      if ( v87 != SuitDef->viewheight_stand )
      {
        Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_viewheight_assert_fix_enabled, "killswitch_viewheight_assert_fix_enabled");
        v90 = ps->viewHeightTarget;
        if ( Bool_Internal_DebugName )
        {
          ps->viewHeightCurrent = (float)v90;
          ps->viewHeightLerpTime = 0;
          ps->viewHeightLerpTarget = v90;
          ps->viewHeightLerpDown = 0;
        }
        else
        {
          LODWORD(v95) = ps->viewHeightTarget;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6350, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "View height lerp to %i reached bad place\n", v95) )
            __debugbreak();
        }
        goto LABEL_185;
      }
      ps->viewHeightLerpDown = 0;
      v88 = SuitDef->viewheight_crouch;
      if ( (float)v88 <= ps->viewHeightCurrent )
        v88 = SuitDef->viewheight_stand;
    }
    ps->viewHeightLerpTarget = v88;
    goto LABEL_185;
  }
  v58 = PM_GetViewHeightLerpTime(ps, ps->viewHeightLerpTarget, ps->viewHeightLerpDown);
  v59 = pm->cmd.serverTime - ps->viewHeightLerpTime;
  LODWORD(outUp.v[0]) = v58;
  v98 = I_clamp(100 * v59 / v58, 0, 100);
  if ( v98 == 100 )
  {
    v60 = (float)ps->viewHeightLerpTarget;
    ps->viewHeightLerpTime = 0;
    ps->viewHeightCurrent = v60;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x36u) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && (float)SuitDef->viewheight_crouch == ps->viewHeightCurrent )
      ps->viewHeightTarget = BG_Suit_GetProneViewHeight(SuitDef);
    if ( (float)ps->viewHeightTarget == ps->viewHeightCurrent )
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x37u);
  }
  else
  {
    v61 = BG_Suit_GetProneViewHeight(SuitDef);
    v62 = ps->viewHeightLerpTarget;
    v63 = SuitDef->viewheight_crouch;
    if ( v62 == v61 )
    {
      v64 = (float)v63;
      v65 = viewLerp_CrouchProneDirect;
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x36u) )
        v65 = viewLerp_CrouchProne;
    }
    else if ( v62 == v63 )
    {
      if ( ps->viewHeightLerpDown )
      {
        v64 = (float)SuitDef->viewheight_stand;
        v65 = viewLerp_StandCrouchDirect;
        if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x36u) )
          v65 = viewLerp_StandCrouch;
      }
      else
      {
        v64 = (float)BG_Suit_GetProneViewHeight(SuitDef);
        v65 = viewLerp_ProneCrouch;
      }
    }
    else
    {
      v64 = (float)v63;
      v65 = viewLerp_CrouchStand;
    }
    if ( v64 <= 0.0 )
    {
      __asm { vxorpd  xmm0, xmm0, xmm0 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6171, ASSERT_TYPE_ASSERT, "( startHeight ) > ( 0.0f )", "%s > %s\n\t%g, %g", "startHeight", "0.0f", v64, *(double *)&_XMM0) )
        __debugbreak();
    }
    ps->viewHeightCurrent = PM_ViewHeightTableLerp((float)v98 * 0.0099999998, v65, v64, (float)ps->viewHeightLerpTarget);
  }
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_viewHeightDebugLogEnabled, "viewHeightDebugLogEnabled") && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
  {
    LODWORD(v96) = ps->viewHeightLerpTarget;
    *(float *)&v95 = outUp.v[0];
    LODWORD(fmt) = ps->viewHeightLerpTime;
    Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Complex lerp start time: %d Lerp Completion Time: %d Current: %.2f Target: %d\n", (unsigned int)ps->clientNum, (unsigned int)pm->cmd.serverTime, fmt, v95, ps->viewHeightCurrent, v96);
    viewHeightLerpTime = ps->viewHeightLerpTime;
    goto LABEL_136;
  }
}

/*
==============
PM_ViewHeightTableLerp
==============
*/
float PM_ViewHeightTableLerp(float fFrac, viewLerpWaypoint_s *pTable, float startHeight, float endHeight)
{
  viewLerpWaypoint_s *v7; 
  int v8; 
  float v9; 
  int v10; 
  viewLerpWaypoint_s *v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  float v15; 

  if ( fFrac <= 0.0 )
    return (float)((float)(1.0 - pTable->fLerp) * startHeight) + (float)(endHeight * pTable->fLerp);
  if ( fFrac >= 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5727, ASSERT_TYPE_ASSERT, "(fFrac < 1.0f)", (const char *)&queryFormat, "fFrac < 1.0f") )
    __debugbreak();
  v7 = pTable + 1;
  v8 = 1;
  v9 = pTable[1].fFrac;
  v10 = 1;
  if ( fFrac == v9 )
  {
LABEL_11:
    v12 = 1.0 - v7->fLerp;
    v13 = endHeight * v7->fLerp;
  }
  else
  {
    v11 = pTable + 1;
    while ( v9 <= fFrac )
    {
      v9 = v11[1].fFrac;
      ++v11;
      ++v8;
      v7 = v11;
      if ( v9 == -1.0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5757, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No encapsulating table entries found for fraction %f", fFrac) )
          __debugbreak();
        v12 = 1.0 - pTable->fLerp;
        v13 = endHeight * pTable->fLerp;
        return (float)(v12 * startHeight) + v13;
      }
      v10 = v8;
      if ( fFrac == v9 )
        goto LABEL_11;
    }
    v14 = v10;
    if ( (float)(v9 - pTable[v10 - 1].fFrac) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5746, ASSERT_TYPE_ASSERT, "((pCurr->fFrac - pPrev->fFrac) > 0.0f)", (const char *)&queryFormat, "(pCurr->fFrac - pPrev->fFrac) > 0.0f") )
      __debugbreak();
    v15 = (float)((float)((float)(fFrac - pTable[v14 - 1].fFrac) / (float)(v7->fFrac - pTable[v14 - 1].fFrac)) * (float)(v7->fLerp - pTable[v14 - 1].fLerp)) + pTable[v14 - 1].fLerp;
    v12 = 1.0 - v15;
    v13 = v15 * endHeight;
  }
  return (float)(v12 * startHeight) + v13;
}

/*
==============
PM_ViewRangeLimited
==============
*/
bool PM_ViewRangeLimited(const playerState_s *ps)
{
  int pm_type; 
  GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32> *p_linkFlags; 
  bool result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  pm_type = ps->pm_type;
  if ( pm_type == 1 || pm_type == 8 )
  {
    p_linkFlags = &ps->linkFlags;
    if ( !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, ACTIVE, 0) )
      return 1;
  }
  else
  {
    p_linkFlags = &ps->linkFlags;
  }
  if ( GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(p_linkFlags, ACTIVE, 2u) )
    return 1;
  if ( BG_IsTurretActive(ps) )
    return 1;
  if ( BG_Ladder_IsActive(ps) )
    return 1;
  result = BG_ContextMount_IsActive(ps);
  if ( result )
    return 1;
  return result;
}

/*
==============
PM_WalkMove
==============
*/
void PM_WalkMove(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const SuitDef *SuitDef; 
  const dvar_t *v6; 
  double v7; 
  float forwardmove; 
  float rightmove; 
  usercmd_s *p_cmd; 
  usercmd_s *v11; 
  __int64 v12; 
  __int128 v14; 
  __int128 v15; 
  __int128 v20; 
  __int128 v21; 
  float v25; 
  float v26; 
  float v27; 
  __int128 v28; 
  __int128 v29; 
  float v30; 
  int damageTimer; 
  __int32 v35; 
  __int32 v36; 
  float v37; 
  const SuitDef *v38; 
  float v39; 
  const dvar_t *v40; 
  __int128 unsignedInt; 
  __int128 v42; 
  playerState_s *v44; 
  int weaponState; 
  double v46; 
  vec3_t *p_velocity; 
  float frametime; 
  bool performSlideMove; 
  double ForwardContribution; 
  double RightContribution; 
  float outForwardScale; 
  float outSideScale; 
  __int64 v54; 
  usercmd_s cmd; 
  vec3_t vec; 
  vec3_t velInConst; 

  v54 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_WalkMove");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3273, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3273, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3276, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) )
    Jump_ApplySlowdown(pm, ps);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) && !SuitDef->isMovementCameraIndependent )
  {
    v6 = DCONST_DVARFLT_player_sprintStrafeSpeedScale;
    if ( !DCONST_DVARFLT_player_sprintStrafeSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintStrafeSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = I_fclamp((float)pm->cmd.rightmove * v6->current.value, -128.0, 127.0);
    pm->cmd.rightmove = (int)*(float *)&v7;
  }
  if ( Jump_Check(pm, pml) )
  {
    PM_AirMove(pm, pml);
    goto LABEL_73;
  }
  PM_Friction(pm, pml);
  forwardmove = (float)pm->cmd.forwardmove;
  rightmove = (float)pm->cmd.rightmove;
  p_cmd = &pm->cmd;
  v11 = &cmd;
  v12 = 2i64;
  do
  {
    *(__m256i *)&v11->buttons = *(__m256i *)&p_cmd->buttons;
    *(__m256i *)(&v11->angles.xy + 1) = *(__m256i *)(&p_cmd->angles.xy + 1);
    *(__m256i *)&v11->weapon.attachmentVariationIndices[1] = *(__m256i *)&p_cmd->weapon.attachmentVariationIndices[1];
    *(_OWORD *)&v11->offHand.weaponIdx = *(_OWORD *)&p_cmd->offHand.weaponIdx;
    v11 = (usercmd_s *)((char *)v11 + 128);
    *(_OWORD *)&v11[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_cmd->offHand.weaponAttachments[2];
    p_cmd = (usercmd_s *)((char *)p_cmd + 128);
    --v12;
  }
  while ( v12 );
  v11->buttons = p_cmd->buttons;
  _XMM9 = 0i64;
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &pml->forward);
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &pml->right);
  v14 = LODWORD(pml->forward.v[0]);
  v15 = v14;
  *(float *)&v15 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(pml->forward.v[1] * pml->forward.v[1])) + (float)(pml->forward.v[2] * pml->forward.v[2]));
  _XMM4 = v15;
  __asm { vcmpless xmm0, xmm4, cs:__real@80000000 }
  _XMM10 = LODWORD(FLOAT_1_0);
  __asm { vblendvps xmm1, xmm4, xmm10, xmm0 }
  outForwardScale = *(float *)&_XMM1;
  pml->forward.v[0] = *(float *)&v14 * (float)(1.0 / *(float *)&_XMM1);
  pml->forward.v[1] = (float)(1.0 / *(float *)&_XMM1) * pml->forward.v[1];
  pml->forward.v[2] = (float)(1.0 / *(float *)&_XMM1) * pml->forward.v[2];
  v20 = LODWORD(pml->right.v[0]);
  v21 = v20;
  *(float *)&v21 = fsqrt((float)((float)(*(float *)&v20 * *(float *)&v20) + (float)(pml->right.v[1] * pml->right.v[1])) + (float)(pml->right.v[2] * pml->right.v[2]));
  _XMM4 = v21;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm1, xmm4, xmm10, xmm0
  }
  outForwardScale = *(float *)&_XMM1;
  pml->right.v[0] = *(float *)&v20 * (float)(1.0 / *(float *)&_XMM1);
  pml->right.v[1] = (float)(1.0 / *(float *)&_XMM1) * pml->right.v[1];
  pml->right.v[2] = (float)(1.0 / *(float *)&_XMM1) * pml->right.v[2];
  PM_CmdScale_Walk(pm, pml, &cmd, &outForwardScale, &outSideScale);
  v25 = outSideScale;
  v26 = rightmove * outSideScale;
  v27 = outForwardScale;
  vec.v[0] = (float)(v26 * pml->right.v[0]) + (float)((float)(forwardmove * outForwardScale) * pml->forward.v[0]);
  vec.v[1] = (float)(v26 * pml->right.v[1]) + (float)((float)(forwardmove * outForwardScale) * pml->forward.v[1]);
  vec.v[2] = (float)(v26 * pml->right.v[2]) + (float)((float)(forwardmove * outForwardScale) * pml->forward.v[2]);
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &vec);
  v28 = LODWORD(vec.v[1]);
  v29 = v28;
  v30 = vec.v[2];
  *(float *)&v29 = fsqrt((float)((float)(*(float *)&v28 * *(float *)&v28) + (float)(vec.v[0] * vec.v[0])) + (float)(v30 * v30));
  _XMM11 = v29;
  __asm
  {
    vcmpless xmm0, xmm11, cs:__real@80000000
    vblendvps xmm1, xmm11, xmm10, xmm0
  }
  pml->wishdir.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM1);
  pml->wishdir.v[1] = *(float *)&v28 * (float)(1.0 / *(float *)&_XMM1);
  pml->wishdir.v[2] = v30 * (float)(1.0 / *(float *)&_XMM1);
  pml->walkForwardScale = v27;
  pml->walkSideScale = v25;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    ps->damageTimer += (int)(float)(pml->frametime * -1000.0);
    damageTimer = ps->damageTimer;
    if ( damageTimer <= 0 )
      damageTimer = 0;
    ps->damageTimer = damageTimer;
  }
  velInConst = pml->wishdir;
  PM_ProjectVelocity(pm, &velInConst, &pm->ground->trace.normal, &velInConst);
  if ( BG_IsPlayerZeroG(ps) )
  {
    pm->ps->autoLevelTime = 0;
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&pm->ps->otherFlags, GameModeFlagValues::ms_spValue, 0x2Du);
  }
  if ( (pm->ground->trace.surfaceFlags & 2) == 0 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xDu) )
  {
    v35 = PM_GetEffectiveStance(ps) - 1;
    if ( v35 )
    {
      v36 = v35 - 1;
      if ( !v36 )
      {
        v37 = FLOAT_12_0;
        goto LABEL_36;
      }
      if ( v36 != 1 )
      {
        v37 = FLOAT_9_0;
        goto LABEL_36;
      }
    }
    v37 = FLOAT_19_0;
LABEL_36:
    v38 = BG_GetSuitDef(ps->suitIndex);
    if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3194, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
      __debugbreak();
    v39 = v37 * v38->player_globalAccelScale;
    v40 = DCONST_DVARMPFLT_player_globalAccelScale;
    if ( !DCONST_DVARMPFLT_player_globalAccelScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_globalAccelScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    unsignedInt = v40->current.unsignedInt;
    *(float *)&unsignedInt = v40->current.value * v39;
    _XMM10 = unsignedInt;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xCu) )
  {
    v42 = _XMM10;
    *(float *)&v42 = *(float *)&_XMM10 * 0.25;
    _XMM10 = v42;
  }
  if ( Slide_IsInSlideInState(ps, pm->cmd.serverTime) )
  {
    __asm
    {
      vcmpltss xmm0, xmm9, xmm1
      vblendvps xmm10, xmm10, xmm1, xmm0
    }
  }
  v44 = pm->ps;
  if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3225, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponState = v44->weapState[0].weaponState;
  if ( (unsigned int)(weaponState - 69) > 2 )
    goto LABEL_58;
  LODWORD(_XMM11) = 0;
  switch ( weaponState )
  {
    case 'G':
      v46 = BG_SkydiveParachuteFastLandingVelocity(v44);
      break;
    case 'E':
      v46 = BG_SkydiveParachuteSlowSoftLandingVelocity(v44);
      break;
    case 'F':
      v46 = BG_SkydiveParachuteSlowHardLandingVelocity(v44);
      break;
    default:
      goto LABEL_58;
  }
  LODWORD(_XMM11) = LODWORD(v46);
LABEL_58:
  PM_Accelerate(pm, pml, &velInConst, *(float *)&_XMM11, *(float *)&_XMM10);
  if ( (pm->ground->trace.surfaceFlags & 2) != 0 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xDu) )
  {
    p_velocity = &ps->velocity;
    WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, (float)-ps->gravity * pml->frametime, &ps->velocity);
  }
  else
  {
    p_velocity = &ps->velocity;
  }
  PM_ProjectVelocity(pm, p_velocity, &pm->ground->trace.normal, p_velocity);
  if ( Com_GameMode_SupportsFeature(WEAPONSTATES_NUM) )
  {
    frametime = pml->frametime;
    p_velocity->v[0] = (float)(frametime * ps->pushVector.v[0]) + p_velocity->v[0];
    p_velocity->v[1] = (float)(frametime * ps->pushVector.v[1]) + p_velocity->v[1];
    p_velocity->v[2] = (float)(frametime * ps->pushVector.v[2]) + p_velocity->v[2];
  }
  performSlideMove = 0;
  ForwardContribution = WorldUpReferenceFrame::GetForwardContribution(&pm->refFrame, p_velocity);
  if ( *(float *)&ForwardContribution != 0.0 || (RightContribution = WorldUpReferenceFrame::GetRightContribution(&pm->refFrame, p_velocity), *(float *)&RightContribution != 0.0) || pml->impulseFieldVelocity.v[0] != 0.0 || pml->impulseFieldVelocity.v[1] != 0.0 || pml->impulseFieldVelocity.v[2] != 0.0 || PM_CmdHasCollisionAvoid(&pm->cmd) )
    performSlideMove = 1;
  PM_UpdatePlayerCollision(pm, pml, 0, 1, 0, performSlideMove);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    BG_UpdateMovementDir(pm, pml, 0);
LABEL_73:
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_ZeroGravityFriction
==============
*/
void PM_ZeroGravityFriction(pmove_t *pm, const pml_t *pml)
{
  playerState_s *ps; 
  const dvar_t *v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3800, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3800, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = DVARFLT_player_zeroGravFriction;
  if ( !DVARFLT_player_zeroGravFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravFriction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = ps->velocity.v[0];
  v7 = ps->velocity.v[2];
  v9 = fsqrt((float)((float)(v6 * v6) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(v7 * v7));
  v8 = v9;
  if ( v9 >= 0.001 )
  {
    v10 = v9 - (float)(v5->current.value * pml->frametime);
    if ( v10 <= 0.0 )
    {
      *(_QWORD *)ps->velocity.v = 0i64;
      ps->velocity.v[2] = 0;
    }
    else
    {
      ps->velocity.v[0] = v6 * (float)(v10 / v8);
      ps->velocity.v[1] = (float)(v10 / v8) * ps->velocity.v[1];
      ps->velocity.v[2] = (float)(v10 / v8) * v7;
    }
  }
  else
  {
    *(_QWORD *)ps->velocity.v = 0i64;
    ps->velocity.v[2] = 0;
  }
}

/*
==============
PM_ZeroGravityIsWalkingDisabled
==============
*/
_BOOL8 PM_ZeroGravityIsWalkingDisabled(const pmove_t *pm, const vec3_t *start, const vec3_t *end)
{
  const dvar_t *v3; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5584, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  v3 = DVARBOOL_player_zeroGravDisableWalk;
  if ( !DVARBOOL_player_zeroGravDisableWalk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravDisableWalk") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.enabled;
}

/*
==============
PM_ZeroGravityMoveAngular
==============
*/
void PM_ZeroGravityMoveAngular(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  bool v4; 
  const dvar_t *v5; 
  float value; 
  __int128 v7; 
  float v8; 
  __int128 v9; 
  char v13; 
  unsigned int v15; 
  __int64 v16; 
  signed __int64 v17; 
  bool v18; 
  float *v20; 
  double v21; 
  float v23; 
  double v24; 
  float v26; 
  float v27; 
  float v28; 
  float v30; 
  float v33; 
  float v35; 
  pml_t *v36; 
  float v37; 
  __int64 v38; 
  const dvar_t *v39; 
  __int128 unsignedInt; 
  float v41; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 
  float v49; 
  float v52; 
  float v53; 
  playerState_s *v58; 
  const BgHandler *v59; 
  const BgWeaponMap *v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  vec3_t *inAngleDelta; 
  tmat33_t<vec3_t> *outDeltaAxis; 
  bool v72; 
  vec3_t pmla; 
  vec3_t v74; 
  vec3_t angles; 
  vec3_t outFixedDir; 
  tmat33_t<vec3_t> v1; 
  vec3_t fixedUp; 
  tmat33_t<vec3_t> out; 
  vec3_t outAngles; 
  vec3_t v81; 
  tmat33_t<vec3_t> in2; 
  vec4_t to; 
  vec4_t result; 
  tmat33_t<vec3_t> worldUpAxisView; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v88; 
  tmat33_t<vec3_t> v89; 

  *(_QWORD *)angles.v = pm;
  *(_QWORD *)pmla.v = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4415, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4415, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = PM_ZeroGravity_UseForcedDirection(&outFixedDir);
  v5 = DVARVEC3_player_zeroGravWorldUp;
  v72 = v4;
  if ( !DVARVEC3_player_zeroGravWorldUp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravWorldUp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  v7 = LODWORD(v5->current.vector.v[1]);
  v8 = v5->current.vector.v[2];
  v9 = v7;
  *(float *)&v9 = (float)((float)(*(float *)&v7 * *(float *)&v7) + (float)(value * value)) + (float)(v8 * v8);
  if ( *(float *)&v9 <= 0.001 )
  {
    v13 = 0;
  }
  else
  {
    *(float *)&v9 = fsqrt(*(float *)&v9);
    _XMM1 = v9;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm2, xmm0
    }
    fixedUp.v[0] = value * (float)(1.0 / *(float *)&_XMM0);
    fixedUp.v[2] = v8 * (float)(1.0 / *(float *)&_XMM0);
    fixedUp.v[1] = *(float *)&v7 * (float)(1.0 / *(float *)&_XMM0);
    v13 = 1;
  }
  _XMM15 = 0i64;
  v15 = 0;
  v16 = 0i64;
  v17 = (char *)&pm->cmd.angles - (char *)&v74;
  v18 = 1;
  v74.v[0] = 0.0;
  v74.v[1] = 0.0;
  v74.v[2] = 0.0;
  _XMM8 = 0i64;
  do
  {
    if ( !v18 )
    {
      LODWORD(outDeltaAxis) = 3;
      LODWORD(inAngleDelta) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
        __debugbreak();
    }
    v20 = &v74.v[v16];
    v21 = MSG_UnpackSignedFloat(*(_DWORD *)((char *)&v74 + v16 * 4 + v17 + 264), 180.0, 0x14u);
    __asm { vroundss xmm3, xmm8, xmm0, 1 }
    v23 = (float)((float)(*(float *)&v21 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    if ( v15 >= 3 )
    {
      LODWORD(outDeltaAxis) = 3;
      LODWORD(inAngleDelta) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
        __debugbreak();
    }
    v24 = MSG_UnpackSignedFloat(*(_DWORD *)((char *)v20 + v17), 180.0, 0x14u);
    __asm { vroundss xmm4, xmm8, xmm0, 1 }
    v27 = (float)((float)(*(float *)&v24 * 0.0027777778) - *(float *)&_XMM4) * 360.0;
    v26 = v27;
    if ( v23 != v27 )
    {
      AngleDelta(v27, v23);
      if ( v15 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      *v20 = v27;
      if ( v15 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      v28 = *v20;
      if ( v15 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      ps->delta_angles.v[v16] = ps->delta_angles.v[v16] - v28;
      if ( v15 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      __asm { vroundss xmm3, xmm8, xmm2, 1 }
      v30 = (float)((float)(0.0027777778 * ps->delta_angles.v[v16]) - *(float *)&_XMM3) * 360.0;
      if ( v15 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      ps->delta_angles.v[v16] = v30;
      if ( v15 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      __asm
      {
        vroundss xmm1, xmm8, xmm3, 1
        vroundss xmm3, xmm8, xmm2, 1
      }
      v33 = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
      if ( v15 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      ps->delta_angles.v[v16] = v33;
      if ( v15 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      __asm { vroundss xmm3, xmm8, xmm0, 1 }
      v35 = (float)((float)((float)(v26 + ps->delta_angles.v[v16]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
      if ( v15 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      ps->viewangles.v[v16] = v35;
    }
    ++v15;
    ++v16;
    v18 = v15 < 3;
  }
  while ( (int)v15 < 3 );
  v36 = *(pml_t **)pmla.v;
  if ( v13 )
  {
    v37 = v74.v[2];
  }
  else
  {
    v37 = v74.v[2] + (float)(*(float *)(*(_QWORD *)pmla.v + 36i64) * ps->rollVelocity);
    v74.v[2] = v37;
  }
  v38 = *(_QWORD *)angles.v;
  if ( v74.v[0] != 0.0 || v74.v[1] != 0.0 || v37 != 0.0 || v13 || v72 )
  {
    AnglesToAxis(&ps->viewangles, &axis);
    WorldUpReferenceFrame::ApplyReferenceFrameToAxis((WorldUpReferenceFrame *)(v38 + 852), &axis);
    MatrixTranspose(&axis, &out);
    WorldUpReferenceFrame::GetAngles((WorldUpReferenceFrame *)(v38 + 852), &outAngles);
    AnglesToAxis(&outAngles, &in1);
    MatrixMultiply(&in1, &out, &worldUpAxisView);
    if ( v72 )
    {
      v39 = DVARFLT_player_zeroGravWorldUpRate;
      if ( !DVARFLT_player_zeroGravWorldUpRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravWorldUpRate") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      unsignedInt = v39->current.unsignedInt;
      v41 = *(float *)(*(_QWORD *)pmla.v + 36i64);
      v42 = unsignedInt;
      v1.m[0].v[0] = (float)((float)(outFixedDir.v[0] * out.m[0].v[0]) + (float)(outFixedDir.v[1] * out.m[1].v[0])) + (float)(outFixedDir.v[2] * out.m[2].v[0]);
      v1.m[0].v[1] = (float)((float)(outFixedDir.v[0] * out.m[0].v[1]) + (float)(outFixedDir.v[1] * out.m[1].v[1])) + (float)(outFixedDir.v[2] * out.m[2].v[1]);
      v1.m[0].v[2] = (float)((float)(outFixedDir.v[0] * out.m[0].v[2]) + (float)(outFixedDir.v[1] * out.m[1].v[2])) + (float)(outFixedDir.v[2] * out.m[2].v[2]);
      *(float *)&v42 = (float)(*(float *)&unsignedInt * 2.0) * v41;
      v43 = v42;
      Vec3Cross(&worldUpAxisView.m[2], v1.m, &v1.m[1]);
      v44 = LODWORD(v1.m[1].v[1]);
      *(float *)&v44 = fsqrt((float)((float)(*(float *)&v44 * *(float *)&v44) + (float)(v1.m[1].v[0] * v1.m[1].v[0])) + (float)(v1.m[1].v[2] * v1.m[1].v[2]));
      _XMM3 = v44;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
      }
      v1.m[1].v[0] = v1.m[1].v[0] * (float)(1.0 / *(float *)&_XMM0);
      v1.m[1].v[2] = v1.m[1].v[2] * (float)(1.0 / *(float *)&_XMM0);
      v1.m[1].v[1] = v1.m[1].v[1] * (float)(1.0 / *(float *)&_XMM0);
      Vec3Cross(v1.m, &v1.m[1], &v1.m[2]);
      pmla.v[0] = v1.m[0].v[0];
      if ( (LODWORD(v1.m[0].v[0]) & 0x7F800000) == 2139095040 || (pmla.v[0] = v1.m[0].v[1], (LODWORD(v1.m[0].v[1]) & 0x7F800000) == 2139095040) || (pmla.v[0] = v1.m[0].v[2], (LODWORD(v1.m[0].v[2]) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4490, ASSERT_TYPE_SANITY, "( !IS_NAN( ( localForcedAxis[0] )[0] ) && !IS_NAN( ( localForcedAxis[0] )[1] ) && !IS_NAN( ( localForcedAxis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( localForcedAxis[0] )[0] ) && !IS_NAN( ( localForcedAxis[0] )[1] ) && !IS_NAN( ( localForcedAxis[0] )[2] )") )
          __debugbreak();
      }
      pmla.v[0] = v1.m[1].v[0];
      if ( (LODWORD(v1.m[1].v[0]) & 0x7F800000) == 2139095040 || (pmla.v[0] = v1.m[1].v[1], (LODWORD(v1.m[1].v[1]) & 0x7F800000) == 2139095040) || (pmla.v[0] = v1.m[1].v[2], (LODWORD(v1.m[1].v[2]) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4491, ASSERT_TYPE_SANITY, "( !IS_NAN( ( localForcedAxis[1] )[0] ) && !IS_NAN( ( localForcedAxis[1] )[1] ) && !IS_NAN( ( localForcedAxis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( localForcedAxis[1] )[0] ) && !IS_NAN( ( localForcedAxis[1] )[1] ) && !IS_NAN( ( localForcedAxis[1] )[2] )") )
          __debugbreak();
      }
      pmla.v[0] = v1.m[2].v[0];
      if ( (LODWORD(v1.m[2].v[0]) & 0x7F800000) == 2139095040 || (pmla.v[0] = v1.m[2].v[1], (LODWORD(v1.m[2].v[1]) & 0x7F800000) == 2139095040) || (pmla.v[0] = v1.m[2].v[2], (LODWORD(v1.m[2].v[2]) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4492, ASSERT_TYPE_SANITY, "( !IS_NAN( ( localForcedAxis[2] )[0] ) && !IS_NAN( ( localForcedAxis[2] )[1] ) && !IS_NAN( ( localForcedAxis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( localForcedAxis[2] )[0] ) && !IS_NAN( ( localForcedAxis[2] )[1] ) && !IS_NAN( ( localForcedAxis[2] )[2] )") )
          __debugbreak();
      }
      AxisToQuat(&v1, &to);
      QuatSlerpLimited(&quat_identity, &to, (float)(*(float *)&unsignedInt * 0.034906585) * v41, &result);
      QuatToAxis(&result, &in2);
      AxisToAngles(&in2, &angles);
      __asm { vroundss xmm3, xmm8, xmm2, 1 }
      v49 = (float)(0.0027777778 * angles.v[0]) - *(float *)&_XMM3;
      __asm { vroundss xmm3, xmm8, xmm2, 1 }
      _XMM2 = v43 ^ _xmm;
      v52 = v49 * 360.0;
      angles.v[2] = 0.0;
      v53 = (float)((float)(0.0027777778 * angles.v[1]) - *(float *)&_XMM3) * 360.0;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v49 * 360.0) & _xmm) > *(float *)&v43 )
      {
        __asm
        {
          vcmpless xmm0, xmm15, xmm6
          vblendvps xmm1, xmm2, xmm10, xmm0
        }
        v52 = *(float *)&_XMM1;
        angles.v[0] = *(float *)&_XMM1;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(0.0027777778 * angles.v[1]) - *(float *)&_XMM3) * 360.0) & _xmm) > *(float *)&v43 )
      {
        __asm
        {
          vcmpless xmm0, xmm15, xmm5
          vblendvps xmm0, xmm2, xmm10, xmm0
        }
        v53 = *(float *)&_XMM0;
        angles.v[1] = *(float *)&_XMM0;
      }
      v74.v[0] = v52 + v74.v[0];
      v74.v[1] = v53 + v74.v[1];
    }
    if ( v13 )
      PM_ZeroGravityMoveAngular_FixedWorldUp(v36, &fixedUp, &in1, &worldUpAxisView, &out, &v74, &in2);
    else
      AnglesToAxis(&v74, &in2);
    MatrixMultiply(&worldUpAxisView, &in2, &v88);
    MatrixMultiply(&v88, &axis, &v89);
    AxisToAngles(&v89, &v81);
    v58 = *(playerState_s **)(v38 + 8);
    v59 = *(const BgHandler **)(v38 + 904);
    v60 = *(const BgWeaponMap **)(v38 + 968);
    if ( !v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4282, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v38 == -852 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4283, ASSERT_TYPE_ASSERT, "(refFrame)", (const char *)&queryFormat, "refFrame") )
      __debugbreak();
    if ( !v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4284, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    v61 = v58->origin.v[0];
    v62 = v58->origin.v[1];
    v63 = v58->origin.v[2];
    v64 = v58->worldUpAngles.v[0];
    v65 = v58->worldUpAngles.v[1];
    v66 = v58->worldUpAngles.v[2];
    pmla.v[0] = v61;
    pmla.v[1] = v62;
    pmla.v[2] = v63;
    BG_GetPlayerEyePosition(v60, v58, &outFixedDir, v59);
    WorldUpReferenceFrame::SetAngles((WorldUpReferenceFrame *)(v38 + 852), v58, v59, &v81);
    BG_GetPlayerEyePosition(v60, v58, &angles, v59);
    v67 = outFixedDir.v[1] - angles.v[1];
    v68 = outFixedDir.v[2];
    v58->origin.v[0] = (float)(outFixedDir.v[0] - angles.v[0]) + v58->origin.v[0];
    v69 = v68 - angles.v[2];
    v58->origin.v[1] = v67 + v58->origin.v[1];
    v58->origin.v[2] = v69 + v58->origin.v[2];
    if ( !PM_ZeroGravityMoveHandleAngularPenetration(v58, v59, &pmla) )
    {
      v58->worldUpAngles.v[0] = v64;
      v58->worldUpAngles.v[1] = v65;
      v58->worldUpAngles.v[2] = v66;
      WorldUpReferenceFrame::Init((WorldUpReferenceFrame *)(v38 + 852), v58, v59);
      v58->origin.v[0] = v61;
      v58->origin.v[1] = v62;
      v58->origin.v[2] = v63;
    }
    if ( v72 )
    {
      *(_DWORD *)(*(_QWORD *)(v38 + 8) + 21176i64) = 0;
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(*(_QWORD *)(v38 + 8) + 28i64), GameModeFlagValues::ms_spValue, 0x2Du);
    }
  }
}

/*
==============
PM_ZeroGravityMoveAngular_FixedWorldUp
==============
*/
void PM_ZeroGravityMoveAngular_FixedWorldUp(pml_t *pml, const vec3_t *fixedUp, const tmat33_t<vec3_t> *worldUpAxis, const tmat33_t<vec3_t> *worldUpAxisView, const tmat33_t<vec3_t> *invViewAxis, const vec3_t *inAngleDelta, tmat33_t<vec3_t> *outDeltaAxis)
{
  const dvar_t *v11; 
  float value; 
  const dvar_t *v13; 
  float v14; 
  __int64 unsignedInt; 
  const dvar_t *v16; 
  double v17; 
  vec3_t v18; 
  vec3_t angles; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> aroundAxes; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> inAxis; 

  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4246, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  v11 = DVARFLT_player_zeroGravWorldUpRate;
  if ( !DVARFLT_player_zeroGravWorldUpRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravWorldUpRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  value = v11->current.value;
  v13 = DCONST_DVARMPFLT_player_view_pitch_up;
  v14 = value * pml->frametime;
  if ( !DCONST_DVARMPFLT_player_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_up") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  unsignedInt = v13->current.unsignedInt;
  v16 = DCONST_DVARMPFLT_player_view_pitch_down;
  if ( !DCONST_DVARMPFLT_player_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_down") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  *(_QWORD *)&v17 = v16->current.unsignedInt;
  GenerateAxisFromUpVector(fixedUp, worldUpAxis, &outAxis);
  MatrixTranspose(&outAxis, &out);
  MatrixMultiply(worldUpAxis, &out, &axis);
  AxisToAngles(&axis, &angles);
  v18.v[0] = ClampAngleDeltaOverTime(COERCE_DOUBLE((unsigned __int64)LODWORD(inAngleDelta->v[0])), angles.v[0], COERCE_DOUBLE(unsignedInt ^ _xmm), v17, v14);
  v18.v[2] = ClampAngleDeltaOverTime(COERCE_DOUBLE((unsigned __int64)LODWORD(inAngleDelta->v[2])), angles.v[2], 0.0, 0.0, v14);
  v18.v[1] = inAngleDelta->v[1];
  AxisCopy(worldUpAxisView, &aroundAxes);
  MatrixTransformVector(&outAxis.m[2], invViewAxis, &aroundAxes.m[2]);
  AxisClear(&inAxis);
  RotateAxisAroundVectors(&inAxis, &aroundAxes, &v18, outDeltaAxis);
}

/*
==============
PM_ZeroGravityMoveCorrectWorldUp
==============
*/
void PM_ZeroGravityMoveCorrectWorldUp(pmove_t *pm)
{
  playerState_s *ps; 
  const BgHandler *m_bgHandler; 
  BgWeaponMap *weaponMap; 
  float *v; 
  unsigned int v6; 
  bool v8; 
  float v10; 
  float v12; 
  double v14; 
  float v17; 
  float v18; 
  float v19; 
  const BgHandler *v20; 
  float v21; 
  const BgHandler *v22; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  vec3_t v3; 
  vec3_t v2; 
  vec3_t v1; 
  vec3_t outOrigin; 
  vec3_t v48; 
  vec3_t originalOrigin; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4556, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4556, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v2 = ps->viewangles;
  v1.v[0] = 0.0;
  v1.v[1] = 0.0;
  v1.v[2] = 0.0;
  AnglesSubtract(&v1, &v2, &v3);
  if ( COERCE_FLOAT(LODWORD(v3.v[0]) & _xmm) > 0.001 || COERCE_FLOAT(LODWORD(v3.v[1]) & _xmm) > 0.001 || COERCE_FLOAT(LODWORD(v3.v[2]) & _xmm) > 0.001 )
  {
    m_bgHandler = pm->m_bgHandler;
    weaponMap = pm->weaponMap;
    v = ps->delta_angles.v;
    v36 = ps->origin.v[0];
    originalOrigin.v[0] = v36;
    v37 = ps->origin.v[1];
    originalOrigin.v[1] = v37;
    v38 = ps->origin.v[2];
    originalOrigin.v[2] = v38;
    v33 = ps->worldUpAngles.v[0];
    v34 = ps->worldUpAngles.v[1];
    v35 = ps->worldUpAngles.v[2];
    v39 = ps->delta_angles.v[1];
    v40 = ps->delta_angles.v[2];
    v41 = ps->viewangles.v[0];
    v42 = ps->viewangles.v[1];
    v43 = ps->viewangles.v[2];
    BG_GetPlayerEyePosition(weaponMap, ps, &outOrigin, m_bgHandler);
    AnglesToAxis(&ps->viewangles, &axis);
    WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&pm->refFrame, &axis);
    AxisToAngles(&axis, &angles);
    WorldUpReferenceFrame::SetAngles(&pm->refFrame, ps, pm->m_bgHandler, &angles);
    v6 = 0;
    _XMM7 = 0i64;
    v8 = 1;
    do
    {
      if ( !v8 )
      {
        LODWORD(v31) = 3;
        LODWORD(v29) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v31) )
          __debugbreak();
        LODWORD(v32) = 3;
        LODWORD(v30) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v32) )
          __debugbreak();
      }
      __asm { vroundss xmm3, xmm7, xmm2, 1 }
      v10 = (float)((float)((float)(*(float *)((char *)v3.v + (char *)v - (char *)&ps->delta_angles) + *v) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
      if ( v6 >= 3 )
      {
        LODWORD(v31) = 3;
        LODWORD(v29) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v31) )
          __debugbreak();
      }
      *v = v10;
      if ( v6 >= 3 )
      {
        LODWORD(v31) = 3;
        LODWORD(v29) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v31) )
          __debugbreak();
      }
      __asm { vroundss xmm1, xmm7, xmm3, 1 }
      LODWORD(v12) = _mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_u32[0];
      __asm { vroundss xmm3, xmm7, xmm2, 1 }
      if ( v6 >= 3 )
      {
        LODWORD(v31) = 3;
        LODWORD(v29) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v31) )
          __debugbreak();
      }
      *v = (float)((float)(v12 * 0.000015258789) - *(float *)&_XMM3) * 360.0;
      if ( v6 >= 3 )
      {
        LODWORD(v31) = 3;
        LODWORD(v29) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v31) )
          __debugbreak();
      }
      v14 = MSG_UnpackSignedFloat(*(_DWORD *)((char *)v + (char *)&pm->cmd.angles - (char *)&ps->delta_angles), 180.0, 0x14u);
      __asm { vroundss xmm9, xmm7, xmm0, 1 }
      if ( v6 >= 3 )
      {
        LODWORD(v31) = 3;
        LODWORD(v29) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v31) )
          __debugbreak();
      }
      __asm { vroundss xmm2, xmm7, xmm1, 1 }
      v17 = (float)((float)((float)((float)((float)(*(float *)&v14 * 0.0027777778) - *(float *)&_XMM9) * 1.0) + (float)(0.0027777778 * *v)) - *(float *)&_XMM2) * 360.0;
      if ( v6 >= 3 )
      {
        LODWORD(v31) = 3;
        LODWORD(v29) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v31) )
          __debugbreak();
      }
      v[73] = v17;
      ++v;
      v8 = ++v6 < 3;
    }
    while ( (int)v6 < 3 );
    BG_GetPlayerEyePosition(pm->weaponMap, ps, &v48, pm->m_bgHandler);
    v18 = outOrigin.v[1] - v48.v[1];
    v19 = outOrigin.v[2];
    v20 = pm->m_bgHandler;
    ps->origin.v[0] = (float)(outOrigin.v[0] - v48.v[0]) + ps->origin.v[0];
    v21 = v19 - v48.v[2];
    ps->origin.v[1] = v18 + ps->origin.v[1];
    ps->origin.v[2] = v21 + ps->origin.v[2];
    if ( !PM_ZeroGravityMoveHandleAngularPenetration(ps, v20, &originalOrigin) )
    {
      v22 = pm->m_bgHandler;
      ps->worldUpAngles.v[0] = v33;
      ps->worldUpAngles.v[1] = v34;
      ps->worldUpAngles.v[2] = v35;
      WorldUpReferenceFrame::Init(&pm->refFrame, ps, v22);
      ps->origin.v[0] = v36;
      ps->origin.v[1] = v37;
      ps->origin.v[2] = v38;
      ps->delta_angles.v[1] = v39;
      ps->delta_angles.v[2] = v40;
      __asm
      {
        vroundss xmm0, xmm7, xmm2, 1
        vroundss xmm3, xmm7, xmm2, 1
      }
      ps->delta_angles.v[0] = (float)((float)((float)(unsigned __int16)(int)*(float *)&_XMM0 * 0.000015258789) - *(float *)&_XMM3) * 360.0;
      __asm
      {
        vroundss xmm0, xmm7, xmm3, 1
        vroundss xmm3, xmm7, xmm2, 1
      }
      ps->delta_angles.v[1] = (float)((float)((float)(unsigned __int16)(int)*(float *)&_XMM0 * 0.000015258789) - *(float *)&_XMM3) * 360.0;
      __asm
      {
        vroundss xmm0, xmm7, xmm3, 1
        vroundss xmm3, xmm7, xmm2, 1
      }
      ps->delta_angles.v[2] = (float)((float)((float)(unsigned __int16)(int)*(float *)&_XMM0 * 0.000015258789) - *(float *)&_XMM3) * 360.0;
      ps->viewangles.v[1] = v42;
      ps->viewangles.v[0] = v41;
      ps->viewangles.v[2] = v43;
    }
  }
}

/*
==============
PM_ZeroGravityMoveHandleAngularPenetration
==============
*/
__int64 PM_ZeroGravityMoveHandleAngularPenetration(playerState_s *ps, const BgHandler *handler, const vec3_t *originalOrigin)
{
  Physics_WorldId v6; 
  const BgPlayerTraceInfo *v7; 
  int v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  __int128 v15; 
  vec3_t *p_hintNormal; 
  float v20; 
  bool outHadPenetration; 
  BgTrace v23; 
  vec3_t hintNormal; 
  vec3_t outOrigin; 
  trace_t results; 

  v6 = handler->GetPhysicsWorldId((BgHandler *)handler);
  v7 = handler->GetPlayerTraceInfo(handler, (unsigned int)ps->clientNum);
  BgTrace::BgTrace(&v23, v7);
  v8 = 0;
  while ( 1 )
  {
    BgTrace::LegacyTraceHandler(&v23, v6, &results, &ps->origin, &ps->origin, &playerBox, ps->clientNum, 33636369, ps);
    if ( !results.allsolid )
      break;
    v9 = ps->origin.v[1];
    v10 = ps->origin.v[2];
    v15 = LODWORD(originalOrigin->v[0]);
    v11 = originalOrigin->v[0] - ps->origin.v[0];
    v12 = originalOrigin->v[2];
    outOrigin.v[0] = ps->origin.v[0];
    v13 = originalOrigin->v[1] - v9;
    outOrigin.v[2] = v10;
    v14 = v12 - v10;
    outOrigin.v[1] = v9;
    *(float *)&v15 = (float)((float)(v11 * v11) + (float)(v13 * v13)) + (float)(v14 * v14);
    hintNormal.v[0] = v11;
    hintNormal.v[1] = v13;
    hintNormal.v[2] = v14;
    if ( *(float *)&v15 <= 0.001 )
    {
      p_hintNormal = NULL;
    }
    else
    {
      *(float *)&v15 = fsqrt(*(float *)&v15);
      _XMM1 = v15;
      __asm
      {
        vcmpless xmm0, xmm1, xmm8
        vblendvps xmm0, xmm1, xmm6, xmm0
      }
      hintNormal.v[0] = v11 * (float)(1.0 / *(float *)&_XMM0);
      hintNormal.v[2] = (float)(1.0 / *(float *)&_XMM0) * v14;
      hintNormal.v[1] = (float)(1.0 / *(float *)&_XMM0) * v13;
      p_hintNormal = &hintNormal;
    }
    if ( BG_ResolvePlayerPenetration(v6, ps, &playerBox, &ps->origin, NULL, p_hintNormal, 33636369, 0, &outOrigin, &outHadPenetration) )
    {
      v20 = outOrigin.v[1];
      ps->origin.v[0] = outOrigin.v[0];
      ++v8;
      ps->origin.v[2] = outOrigin.v[2];
      ps->origin.v[1] = v20;
      if ( v8 < 5 )
        continue;
    }
    return 0i64;
  }
  return 1i64;
}

/*
==============
PM_ZeroGravityMoveLinear
==============
*/
void PM_ZeroGravityMoveLinear(pmove_t *pm, pml_t *pml)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  playerState_s *ps; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  int v14; 
  int v15; 
  bool v16; 
  BOOL v17; 
  unsigned int forwardmove; 
  float v21; 
  float v22; 
  float v27; 
  float v28; 
  float v29; 
  __int128 unsignedInt; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  __int128 v34; 
  const dvar_t *v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  __int128 v47; 
  __int128 v49; 
  float v52; 
  float v53; 
  float frametime; 
  vec3_t outFixedDir; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 
  __int128 v63; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3861, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3861, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v12 = (pm->cmd.buttons >> 8) & 1;
  v13 = pm->cmd.buttons & 0xC0;
  v14 = (pm->cmd.buttons & 0xC0) != 0;
  if ( pm->cmd.forwardmove || pm->cmd.rightmove || (v15 = 0, (_DWORD)v12 != v14) )
    v15 = 1;
  v16 = PM_ZeroGravity_UseForcedDirection(&outFixedDir);
  v17 = v16;
  if ( !v15 && !v16 || ps->pm_type >= 7 )
    goto LABEL_36;
  forwardmove = pm->cmd.forwardmove;
  v63 = v2;
  v62 = v3;
  v61 = v4;
  v60 = v5;
  v59 = v6;
  v58 = v7;
  v57 = v8;
  fsqrt((float)((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(ps->velocity.v[2] * ps->velocity.v[2]));
  _XMM13 = 0i64;
  __asm { vroundss xmm13, xmm13, xmm0, 1 }
  v21 = _mm_cvtepi32_ps((__m128i)forwardmove).m128_f32[0] * 0.0078740157;
  v22 = _mm_cvtepi32_ps((__m128i)(unsigned int)pm->cmd.rightmove).m128_f32[0] * 0.0078740157;
  LODWORD(_XMM4) = 0;
  if ( (_DWORD)v12 != v14 )
  {
    if ( (_DWORD)v12 )
    {
      *(float *)&_XMM4 = FLOAT_1_0;
    }
    else
    {
      _XMM0 = v13;
      __asm { vpcmpeqq xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_N1_0);
      __asm { vblendvps xmm4, xmm1, xmm4, xmm2 }
    }
  }
  v27 = (float)((float)(v22 * pml->right.v[0]) + (float)(v21 * pml->forward.v[0])) + (float)(*(float *)&_XMM4 * pml->up.v[0]);
  v28 = (float)((float)(v21 * pml->forward.v[1]) + (float)(v22 * pml->right.v[1])) + (float)(*(float *)&_XMM4 * pml->up.v[1]);
  v29 = (float)((float)(v21 * pml->forward.v[2]) + (float)(v22 * pml->right.v[2])) + (float)(*(float *)&_XMM4 * pml->up.v[2]);
  unsignedInt = LODWORD(FLOAT_1_0);
  if ( (pm->cmd.buttons & 2) != 0 )
  {
    v31 = DVARFLT_player_zeroGravBoostScalar;
    if ( !DVARFLT_player_zeroGravBoostScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravBoostScalar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    unsignedInt = v31->current.unsignedInt;
  }
  v32 = DVARFLT_player_zeroGravSpeed;
  if ( !DVARFLT_player_zeroGravSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  v34 = unsignedInt;
  *(float *)&v34 = *(float *)&unsignedInt * v32->current.value;
  _XMM11 = v34;
  v35 = DVARFLT_player_zeroGravAcceleration;
  if ( !DVARFLT_player_zeroGravAcceleration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravAcceleration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  v36 = *(float *)&unsignedInt * v35->current.value;
  v37 = v36 * pml->frametime;
  v38 = (float)(v27 * v37) + ps->velocity.v[0];
  ps->velocity.v[0] = v38;
  ps->velocity.v[1] = (float)(v28 * v37) + ps->velocity.v[1];
  v39 = (float)(v29 * v37) + ps->velocity.v[2];
  ps->velocity.v[2] = v39;
  if ( v17 )
  {
    v40 = (float)(v36 * pml->frametime) * 0.25;
    v41 = outFixedDir.v[0];
    v42 = outFixedDir.v[2];
    v43 = (float)(outFixedDir.v[0] * v40) + v38;
    v44 = outFixedDir.v[1];
    v45 = outFixedDir.v[1] * v40;
    ps->velocity.v[0] = v43;
    v39 = (float)(v42 * v40) + v39;
    ps->velocity.v[1] = v45 + ps->velocity.v[1];
    ps->velocity.v[2] = v39;
    if ( (float)((float)((float)(v28 * v28) + (float)(v27 * v27)) + (float)(v29 * v29)) < 0.001 )
    {
      v27 = v41;
      v28 = v44;
      v29 = v42;
    }
  }
  v46 = ps->velocity.v[1];
  v47 = LODWORD(ps->velocity.v[0]);
  v49 = v47;
  *(float *)&v49 = fsqrt((float)((float)(*(float *)&v47 * *(float *)&v47) + (float)(v46 * v46)) + (float)(v39 * v39));
  _XMM6 = v49;
  __asm
  {
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm12, xmm0
  }
  v52 = 1.0 / *(float *)&_XMM0;
  v53 = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v47;
  if ( *(float *)&v49 >= *(float *)&_XMM13 && *(float *)&v49 > *(float *)&_XMM11 )
  {
    __asm { vmaxss  xmm2, xmm11, xmm13 }
    ps->velocity.v[0] = v53 * *(float *)&_XMM2;
    ps->velocity.v[2] = (float)(v39 * v52) * *(float *)&_XMM2;
    ps->velocity.v[1] = (float)(v52 * v46) * *(float *)&_XMM2;
  }
  if ( *(float *)&v49 > (float)(fsqrt((float)((float)(v28 * v28) + (float)(v27 * v27)) + (float)(v29 * v29)) * *(float *)&_XMM11) )
LABEL_36:
    PM_ZeroGravityFriction(pm, pml);
  if ( BG_IsPushAffectingAirMovement(ps) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPONSTATES_NUM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3950, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_PUSH ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_PUSH )") )
      __debugbreak();
    frametime = pml->frametime;
    ps->velocity.v[0] = (float)(frametime * ps->pushVector.v[0]) + ps->velocity.v[0];
    ps->velocity.v[1] = (float)(frametime * ps->pushVector.v[1]) + ps->velocity.v[1];
    ps->velocity.v[2] = (float)(frametime * ps->pushVector.v[2]) + ps->velocity.v[2];
  }
  if ( ps->velocity.v[0] != 0.0 || ps->velocity.v[1] != 0.0 || ps->velocity.v[2] != 0.0 )
    PM_UpdatePlayerCollision(pm, pml, 0, 0, 0, 1);
}

/*
==============
PM_ZeroGravityMoveUpdateRollVelocity
==============
*/
void PM_ZeroGravityMoveUpdateRollVelocity(pmove_t *pm, pml_t *pml)
{
  ;
}

/*
==============
PM_ZeroGravityPlayerTriggerTrace
==============
*/
void PM_ZeroGravityPlayerTriggerTrace(const pmove_t *pm, const vec3_t *start, const vec3_t *end, HavokPhysics_CollisionQueryResult *outResults)
{
  playerState_s *ps; 
  __int16 groundRefEnt; 
  const char *v10; 
  const char *v11; 
  int v12; 
  const char *v13; 
  Physics_WorldId v14; 
  CgHandler *Handler; 
  const BgHandler *v16; 
  const dvar_t *v17; 
  Bounds *bounds; 
  float v23; 
  float v24; 
  hknpShape *ShapeCylinder; 
  hknpShape *v26; 
  hkMemoryAllocator *v27; 
  hkMemoryAllocator *v28; 
  char v29; 
  hknpShape *ShapeCapsuleUpAxis; 
  Physics_ShapecastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v32; 
  __int64 v33; 
  vec4_t quat; 
  WorldUpReferenceFrame v35; 
  char optionalInplaceBuffer[432]; 

  v33 = -2i64;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5479, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !outResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5480, ASSERT_TYPE_ASSERT, "(outResults)", (const char *)&queryFormat, "outResults") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5482, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5482, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x2Au) && ((groundRefEnt = ps->groundRefEnt, groundRefEnt == 2047) || !groundRefEnt) )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) )
      goto LABEL_23;
    v10 = "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )";
    v11 = "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))";
    v12 = 2575;
    v13 = "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h";
  }
  else
  {
    v10 = "BG_IsPlayerZeroG( ps )";
    v11 = "(BG_IsPlayerZeroG( ps ))";
    v12 = 5484;
    v13 = "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp";
  }
  if ( CoreAssert_Handler(v13, v12, ASSERT_TYPE_ASSERT, v11, (const char *)&queryFormat, v10) )
    __debugbreak();
LABEL_23:
  v14 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
  if ( !Physics_IsPredictiveWorld(v14) || Sys_IsMainThread() )
  {
    v29 = 0;
  }
  else
  {
    v29 = 1;
    Physics_LockWorld(v14);
  }
  HavokPhysics_CollisionQueryResult::Reset(outResults, 1);
  if ( (unsigned int)v14 > PHYSICS_WORLD_ID_SERVER_DETAIL )
    Handler = CgHandler::getHandler(pm->localClientNum);
  else
    Handler = (CgHandler *)GHandler::getHandler();
  v16 = Handler;
  if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5515, ASSERT_TYPE_ASSERT, "(handler != nullptr)", (const char *)&queryFormat, "handler != nullptr") )
    __debugbreak();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v35, ps, v16);
  quat = quat_identity;
  WorldUpReferenceFrame::ApplyReferenceFrameToQuat(&v35, &quat);
  v17 = DCONST_DVARMPBOOL_antilagZeroG;
  if ( !DCONST_DVARMPBOOL_antilagZeroG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagZeroG") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  _XMM0 = v17->current.color[0];
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_10_0);
  __asm { vblendvps xmm1, xmm0, xmm8, xmm2 }
  bounds = pm->bounds;
  v23 = *(float *)&_XMM1 + bounds->halfSize.v[0];
  v24 = *(float *)&_XMM1 + bounds->halfSize.v[2];
  ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis(v14, &bounds->midPoint, v24 - v23, v23, optionalInplaceBuffer, 432, Temporary);
  ShapeCylinder = Physics_CreateShapeCylinder(&pm->bounds->midPoint, v24, v23, 32, 1);
  v26 = Physics_CreateShapeCylinder(&pm->bounds->midPoint, v24 + 0.125, v23 + 0.125, 32, 1);
  if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5541, ASSERT_TYPE_ASSERT, "(nonBrushShape)", (const char *)&queryFormat, "nonBrushShape") )
    __debugbreak();
  if ( !ShapeCylinder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5542, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5543, ASSERT_TYPE_ASSERT, "(paddedShape)", (const char *)&queryFormat, "paddedShape") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v32, 1, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v32, 0, ps->clientNum, 1, 0, 0, 0, 0);
  if ( end->v[0] == start->v[0] && end->v[1] == start->v[1] && end->v[2] == start->v[2] )
  {
    LOBYTE(extendedData.startTolerance) = 0;
    *(float *)&extendedData.ignoreBodies = 0.0;
    LODWORD(extendedData.nonBrushShape) = 0;
    extendedData.contents = 1078198280;
    *(_QWORD *)&extendedData.accuracy = &v32;
    *(_QWORD *)&extendedData.collisionBuffer = ShapeCapsuleUpAxis;
    Physics_GetClosestPoints(v14, ShapeCylinder, start, &quat, 0.0, (Physics_GetClosestPointsExtendedData *)&extendedData, outResults);
  }
  else
  {
    extendedData.startTolerance = 0.0;
    extendedData.accuracy = FLOAT_0_016000001;
    extendedData.simplifyStart = 0;
    extendedData.phaseSelection = All;
    extendedData.contents = 1078198280;
    extendedData.ignoreBodies = &v32;
    extendedData.collisionBuffer = FLOAT_0_125;
    extendedData.nonBrushShape = ShapeCapsuleUpAxis;
    extendedData.secondPassShape = v26;
    extendedData.permitOutwardTrace = 1;
    Physics_Shapecast(v14, ShapeCylinder, start, end, &quat, &extendedData, outResults, NULL);
  }
  Physics_ReleaseShape(v14, ShapeCylinder, 0);
  Physics_ReleaseShape(v14, v26, 0);
  if ( v29 )
    Physics_UnlockWorld(v14);
  v27 = hkMemHeapAllocator();
  v32.m_ignoreBodies.m_size = 0;
  if ( v32.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v27, v32.m_ignoreBodies.m_data, 4, v32.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v32.m_ignoreBodies.m_data = NULL;
  v32.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v28 = hkMemHeapAllocator();
  v32.m_ignoreEntities.m_size = 0;
  if ( v32.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v28, v32.m_ignoreEntities.m_data, 8, v32.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
PM_ZeroGravity_SetWorldUpAngles
==============
*/
void PM_ZeroGravity_SetWorldUpAngles(playerState_s *ps, BgWeaponMap *weaponMap, WorldUpReferenceFrame *refFrame, const BgHandler *handler, const vec3_t *newWorldUpAngles)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  vec3_t outOrigin; 
  vec3_t v19; 
  vec3_t originalOrigin; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4282, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !refFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4283, ASSERT_TYPE_ASSERT, "(refFrame)", (const char *)&queryFormat, "refFrame") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4284, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v9 = ps->origin.v[0];
  v10 = ps->origin.v[1];
  v11 = ps->origin.v[2];
  v12 = ps->worldUpAngles.v[0];
  v13 = ps->worldUpAngles.v[1];
  v14 = ps->worldUpAngles.v[2];
  originalOrigin.v[0] = v9;
  originalOrigin.v[1] = v10;
  originalOrigin.v[2] = v11;
  BG_GetPlayerEyePosition(weaponMap, ps, &outOrigin, handler);
  WorldUpReferenceFrame::SetAngles(refFrame, ps, handler, newWorldUpAngles);
  BG_GetPlayerEyePosition(weaponMap, ps, &v19, handler);
  v15 = outOrigin.v[1] - v19.v[1];
  v16 = outOrigin.v[2];
  ps->origin.v[0] = (float)(outOrigin.v[0] - v19.v[0]) + ps->origin.v[0];
  v17 = v16 - v19.v[2];
  ps->origin.v[1] = v15 + ps->origin.v[1];
  ps->origin.v[2] = v17 + ps->origin.v[2];
  if ( !(unsigned int)PM_ZeroGravityMoveHandleAngularPenetration(ps, handler, &originalOrigin) )
  {
    ps->worldUpAngles.v[0] = v12;
    ps->worldUpAngles.v[1] = v13;
    ps->worldUpAngles.v[2] = v14;
    WorldUpReferenceFrame::Init(refFrame, ps, handler);
    ps->origin.v[0] = v9;
    ps->origin.v[1] = v10;
    ps->origin.v[2] = v11;
  }
}

/*
==============
PM_ZeroGravity_UseForcedDirection
==============
*/
char PM_ZeroGravity_UseForcedDirection(vec3_t *outFixedDir)
{
  const dvar_t *v1; 
  float value; 
  __int128 v4; 
  float v5; 
  __int128 v6; 

  v1 = DVARVEC3_player_zeroGravForceDir;
  if ( !DVARVEC3_player_zeroGravForceDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravForceDir") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  value = v1->current.value;
  v4 = LODWORD(v1->current.vector.v[1]);
  v5 = v1->current.vector.v[2];
  v6 = v4;
  *(float *)&v6 = (float)((float)(*(float *)&v4 * *(float *)&v4) + (float)(value * value)) + (float)(v5 * v5);
  if ( *(float *)&v6 <= 0.001 )
    return 0;
  *(float *)&v6 = fsqrt(*(float *)&v6);
  _XMM2 = v6;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  outFixedDir->v[0] = (float)(1.0 / *(float *)&_XMM0) * value;
  outFixedDir->v[2] = (float)(1.0 / *(float *)&_XMM0) * v5;
  outFixedDir->v[1] = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v4;
  return 1;
}

/*
==============
BobCycle::PackBobCycle
==============
*/
void BobCycle::PackBobCycle(BobCycle *this, int (*outPackedBobCycle)[2])
{
  int generation; 
  float amplitudeRatio; 
  float amplitudeRatioGun; 
  int v7; 
  int v8; 
  bool isAnimDecreasing; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int animCycle; 
  BobCycle v14; 

  if ( this->maxGeneration > 0xFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5215, ASSERT_TYPE_ASSERT, "(0 <= maxGeneration && maxGeneration <= ((0x1 << 4) - 1))", (const char *)&queryFormat, "0 <= maxGeneration && maxGeneration <= MAX_BOB_GENERATION") )
    __debugbreak();
  generation = this->generation;
  if ( (generation < 0 || generation > this->maxGeneration) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5216, ASSERT_TYPE_ASSERT, "(0 <= generation && generation <= maxGeneration)", (const char *)&queryFormat, "0 <= generation && generation <= maxGeneration") )
    __debugbreak();
  if ( this->animCycle > 0x1FFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5217, ASSERT_TYPE_ASSERT, "(0 <= animCycle && animCycle <= ((0x1 << 9) - 1))", (const char *)&queryFormat, "0 <= animCycle && animCycle <= MAX_BOB_CYCLE") )
    __debugbreak();
  amplitudeRatio = this->amplitudeRatio;
  if ( (amplitudeRatio < 0.0 || amplitudeRatio > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5218, ASSERT_TYPE_ASSERT, "(0.0f <= amplitudeRatio && amplitudeRatio <= 1.0f)", (const char *)&queryFormat, "0.0f <= amplitudeRatio && amplitudeRatio <= 1.0f") )
    __debugbreak();
  amplitudeRatioGun = this->amplitudeRatioGun;
  if ( (amplitudeRatioGun < 0.0 || amplitudeRatioGun > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5219, ASSERT_TYPE_ASSERT, "(0.0f <= amplitudeRatioGun && amplitudeRatioGun <= 1.0f)", (const char *)&queryFormat, "0.0f <= amplitudeRatioGun && amplitudeRatioGun <= 1.0f") )
    __debugbreak();
  v7 = (int)(float)(this->amplitudeRatio * 255.0);
  v8 = this->animCycle & 0x1FF | (((unsigned __int8)v7 | (this->isAnimDecreasing << 8)) << 9);
  (*outPackedBobCycle)[1] = this->generation & 0xF | (16 * (this->maxGeneration & 0xF | (16 * ((int)(float)(this->amplitudeRatioGun * 1023.0) & 0x3FF))));
  (*outPackedBobCycle)[0] = v8;
  BobCycle::BobCycle(&v14, outPackedBobCycle);
  if ( this->animCycle != v14.animCycle )
  {
    animCycle = v14.animCycle;
    v11 = this->animCycle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5244, ASSERT_TYPE_ASSERT, "( animCycle ) == ( validateBobCycle.animCycle )", "%s == %s\n\t%i, %i", "animCycle", "validateBobCycle.animCycle", v11, animCycle) )
      __debugbreak();
  }
  if ( this->generation != v14.generation )
  {
    LODWORD(v12) = v14.generation;
    LODWORD(v10) = this->generation;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5245, ASSERT_TYPE_ASSERT, "( generation ) == ( validateBobCycle.generation )", "%s == %s\n\t%i, %i", "generation", "validateBobCycle.generation", v10, v12) )
      __debugbreak();
  }
  if ( this->maxGeneration != v14.maxGeneration )
  {
    LODWORD(v12) = v14.maxGeneration;
    LODWORD(v10) = this->maxGeneration;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5246, ASSERT_TYPE_ASSERT, "( maxGeneration ) == ( validateBobCycle.maxGeneration )", "%s == %s\n\t%i, %i", "maxGeneration", "validateBobCycle.maxGeneration", v10, v12) )
      __debugbreak();
  }
  if ( v7 != (int)(float)(v14.amplitudeRatio * 255.0) )
  {
    LODWORD(v12) = (int)(float)(v14.amplitudeRatio * 255.0);
    LODWORD(v10) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5248, ASSERT_TYPE_ASSERT, "( iAmplitude ) == ( iAmplitudeValidate )", "%s == %s\n\t%i, %i", "iAmplitude", "iAmplitudeValidate", v10, v12) )
      __debugbreak();
  }
  isAnimDecreasing = this->isAnimDecreasing;
  if ( isAnimDecreasing != v14.isAnimDecreasing )
  {
    LODWORD(v12) = v14.isAnimDecreasing;
    LODWORD(v10) = isAnimDecreasing;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5251, ASSERT_TYPE_ASSERT, "( isAnimDecreasing ) == ( validateBobCycle.isAnimDecreasing )", "%s == %s\n\t%i, %i", "isAnimDecreasing", "validateBobCycle.isAnimDecreasing", v10, v12) )
      __debugbreak();
  }
}

/*
==============
PmoveSingle
==============
*/
void PmoveSingle(pmove_t *pm)
{
  playerState_s *ps; 
  EffectiveStance EffectiveStance; 
  int sprintStartMaxLength; 
  bool v5; 
  int commandTime; 
  int serverTime; 
  int inputTime; 
  playerState_s *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  playerState_s *v12; 
  playerState_s *v13; 
  playerState_s *v14; 
  playerState_s *v15; 
  SprintState v16; 
  __int64 v17; 
  pml_t pml; 

  v17 = -2i64;
  pml.isSkydiveTraced = 0;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12360, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12360, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF008008, "PM_PreUpdate");
  EffectiveStance = PM_GetEffectiveStance(ps);
  *(__m256i *)&v16.sprintButtonUpRequired = *(__m256i *)&ps->sprintState.sprintButtonUpRequired;
  sprintStartMaxLength = ps->sprintState.sprintStartMaxLength;
  v5 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u);
  ps->netPerf.maxExtrapolationMs = (int)(float)((float)pm->cmd.extrapolationMax * 0.255);
  ps->netPerf.maxInterpolationMs = (int)(float)((float)pm->cmd.interpolationMax * 0.255);
  BG_UpdateWeaponAnimArrays(pm->weaponMap, ps, pm->m_bgHandler);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    BG_AnimClearDirtyPlayerStateConditions(pm);
  PM_SetupMoveState(pm);
  PM_PmoveLocal_Init(pm, &pml);
  commandTime = pm->cmd.commandTime;
  ps->commandTime = commandTime;
  ps->commandTimeInterpolated = commandTime;
  serverTime = pm->cmd.serverTime;
  ps->serverTime = serverTime;
  ps->serverTimeInterpolated = serverTime;
  inputTime = pm->cmd.inputTime;
  ps->inputTime = inputTime;
  ps->inputTimeInterpolated = inputTime;
  ps->lastInput.forwardmove = pm->cmd.forwardmove;
  ps->lastInput.rightmove = pm->cmd.rightmove;
  ps->lastInput.yawmove = pm->cmd.yawmove;
  ps->lastInput.pitchmove = pm->cmd.pitchmove;
  PM_AdjustAimSpreadScale(pm, pml.frametime);
  v9 = pm->ps;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2154, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_FIRING) && (pm->cmd.avoidForward || pm->cmd.avoidRight) )
  {
    v10 = DCONST_DVARBOOL_collAvoid_useHardLanding;
    if ( !DCONST_DVARBOOL_collAvoid_useHardLanding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_useHardLanding") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
    {
      v11 = DCONST_DVARINT_collAvoid_hardLandingTimeMs;
      if ( !DCONST_DVARINT_collAvoid_hardLandingTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_hardLandingTimeMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      v9->pm_time = v11->current.integer;
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&v9->pm_flags, ACTIVE, 0xCu);
    }
  }
  PM_UpdateViewAngles(pm, &pml);
  PM_PmoveLocal_SetViewAngles(pm, &pml);
  PM_Debug_TestPlayerCollisionPoint(pm);
  PM_ProneOverride_Update(pm);
  PM_Debug_TestPlayerCollisionPoint(pm);
  BG_VehicleMove(pm, &pml);
  PM_Debug_TestPlayerCollisionPoint(pm);
  PM_Debug_TestPlayerCollisionPoint(pm);
  Mantle_ClearFlags(pm);
  PM_GameInterface_MeleeActionUpdate(pm, &pml);
  PM_MeleeUpdate(pm, &pml);
  PM_ContextMount_UpdateState(pm, &pml);
  PM_PlayerSecondaryCollision_UpdateState(pm);
  Sys_ProfEndNamedEvent();
  PM_Debug_TestPlayerCollisionPoint(pm);
  switch ( ps->pm_type )
  {
    case 1:
    case 8:
      v16.sprintStartMaxLength = sprintStartMaxLength;
      PM_Linked_Update(pm, &pml, v5, &v16);
      break;
    case 2:
      Sys_ProfBeginNamedEvent(0xFF808080, "PM_NoClip_Update");
      v13 = pm->ps;
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11688, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      PM_ClearLadderFlag(pm->weaponMap, v13);
      PM_UpdateAimDownSightFlag(pm, &pml);
      PM_UpdateSprint(pm, &pml);
      PM_UpdatePlayerWalkingFlag(pm);
      PM_UpdateCustomAnimFlags(pm);
      PM_DropTimers(pm, &pml);
      PM_NoclipMove(pm, &pml);
      PM_UpdateAimDownSightLerp(pm, pml.msec);
      PM_DropAnimTimers(pm, &pml);
      Sys_ProfEndNamedEvent();
      break;
    case 3:
      PM_UFO_Update(pm, &pml);
      break;
    case 4:
      Sys_ProfBeginNamedEvent(0xFF808080, "PM_MPViewer_Update");
      v14 = pm->ps;
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11759, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      PM_ClearLadderFlag(pm->weaponMap, v14);
      PM_UpdateAimDownSightFlag(pm, &pml);
      PM_UpdateSprint(pm, &pml);
      PM_UpdatePlayerWalkingFlag(pm);
      PM_UpdateCustomAnimFlags(pm);
      PM_DropTimers(pm, &pml);
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4940, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      *(_QWORD *)&v14->velocity.y = 0i64;
      v14->velocity.v[0] = 0.0;
      PM_UpdateAimDownSightLerp(pm, pml.msec);
      PM_DropAnimTimers(pm, &pml);
      Sys_ProfEndNamedEvent();
      break;
    case 5:
      Sys_ProfBeginNamedEvent(0xFF808080, "PM_Spectator_Update");
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11663, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SPECTATOR ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SPECTATOR )") )
        __debugbreak();
      v12 = pm->ps;
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11665, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      PM_ClearLadderFlag(pm->weaponMap, v12);
      Mantle_CancelMantle(pm->m_bgHandler, pm->weaponMap, pm->ps, pm->cmd.serverTime);
      PM_UpdateAimDownSightFlag(pm, &pml);
      PM_UpdateSprint(pm, &pml);
      PM_UpdatePlayerWalkingFlag(pm);
      PM_UpdateCustomAnimFlags(pm);
      PM_CheckDuck(pm, &pml);
      PM_DropTimers(pm, &pml);
      PM_FlyMove(pm, &pml);
      PM_UpdateAimDownSightLerp(pm, pml.msec);
      PM_DropAnimTimers(pm, &pml);
      Sys_ProfEndNamedEvent();
      break;
    case 6:
      Sys_ProfBeginNamedEvent(0xFF808080, "PM_Intermission_Update");
      if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11780, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_INTERMISSION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_INTERMISSION )") )
        __debugbreak();
      v15 = pm->ps;
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11782, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      PM_ClearLadderFlag(pm->weaponMap, v15);
      PM_UpdateAimDownSightFlag(pm, &pml);
      PM_UpdateSprint(pm, &pml);
      PM_UpdateAimDownSightLerp(pm, pml.msec);
      Sys_ProfEndNamedEvent();
      break;
    default:
      v16.sprintStartMaxLength = sprintStartMaxLength;
      PM_Normal_Update(pm, &pml, v5, &v16, EffectiveStance);
      PM_Debug_TestPlayerCollisionPoint(pm);
      break;
  }
  PM_Debug_TestPlayerCollisionPoint(pm);
  pmove_t::OnPMoveSingleEnd(pm, pm, &pml);
  PM_Debug_TestPlayerCollisionPoint(pm);
}

/*
==============
TurretUpdateViewClamp
==============
*/
void TurretUpdateViewClamp(pmove_t *pm, float msec)
{
  playerState_s *ps; 
  __int16 viewlocked_entNum; 
  int v5; 
  WeaponDef *v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float viewClampPitchCatchUpTimeSec; 
  float v13; 
  double v14; 
  float viewClampYawCatchUpTimeSec; 
  double v16; 
  double v17; 
  __int64 v18; 
  __int64 v19; 
  vec4_t out; 
  vec3_t v21; 
  vec3_t v22; 
  vec3_t v23; 
  vec4_t in2; 
  vec3_t angles; 
  vec3_t up; 
  vec4_t quat; 
  vec4_t v28; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9836, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9836, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  viewlocked_entNum = ps->viewlocked_entNum;
  if ( (unsigned __int16)viewlocked_entNum >= 0x800u )
  {
    LODWORD(v18) = viewlocked_entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9838, ASSERT_TYPE_ASSERT, "(unsigned)( ps->viewlocked_entNum ) < (unsigned)( ( 2048 ) )", "ps->viewlocked_entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, 2048) )
      __debugbreak();
  }
  v5 = *(_DWORD *)&pm->m_bgHandler->PlayerTurret(pm->m_bgHandler, ps)->weaponIdx;
  if ( (unsigned __int16)v5 > bg_lastParsedWeaponIndex )
  {
    LODWORD(v19) = bg_lastParsedWeaponIndex;
    LODWORD(v18) = (unsigned __int16)v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v18, v19) )
      __debugbreak();
  }
  if ( !bg_weaponDefs[(unsigned __int16)v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v6 = bg_weaponDefs[(unsigned __int16)v5];
  if ( pm->m_bgHandler->GetEntityAngles((BgHandler *)pm->m_bgHandler, ps->viewlocked_entNum, &angles) )
  {
    AngleVectors(&angles, NULL, NULL, &up);
    AnglesToAxis(&ps->viewangles, &axis);
    GenerateAxisFromUpVector(&up, &axis, &outAxis);
    AxisToQuat(&outAxis, &out);
    v22.v[0] = v6->bottomArc - (float)((float)(v6->bottomArc + v6->topArc) * 0.5);
    v22.v[1] = v6->leftArc - (float)((float)(v6->leftArc + v6->rightArc) * 0.5);
    v22.v[2] = 0.0;
    AnglesToQuat(&v22, &quat);
    if ( v6->softLeftRightArc )
    {
      v7 = out.v[0];
      v8 = out.v[1];
      v9 = out.v[2];
      v10 = out.v[3];
      v11 = (float)((float)((float)(v7 * v7) + (float)(v8 * v8)) + (float)(v9 * v9)) + (float)(v10 * v10);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - 1.0) & _xmm) >= 0.0020000001 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 38, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", out.v[0], out.v[1], out.v[2], out.v[3], fsqrt(v11)) )
          __debugbreak();
        v7 = out.v[0];
        v8 = out.v[1];
        v9 = out.v[2];
        v10 = out.v[3];
      }
      v23.v[0] = (float)((float)(v7 * v9) + (float)(v8 * v10)) * 2.0;
      v23.v[1] = (float)((float)(v8 * v9) - (float)(v7 * v10)) * 2.0;
      v23.v[2] = 1.0 - (float)((float)((float)(v7 * v7) + (float)(v8 * v8)) * 2.0);
      AngleRadAxisToQuat(ps->viewangles.v[1] * 0.017453292, &v23, &in2);
    }
    else
    {
      in2 = out;
    }
    QuatMultiply(&quat, &in2, &v28);
    UnitQuatToAngles(&v28, &v21);
    viewClampPitchCatchUpTimeSec = v6->viewClampPitchCatchUpTimeSec;
    v13 = msec * 0.001;
    *(float *)&v14 = v21.v[0];
    if ( viewClampPitchCatchUpTimeSec != 0.0 )
      v14 = DiffTrackAngle(v21.v[0], ps->viewAngleClampBase.v[0], viewClampPitchCatchUpTimeSec, v13);
    ps->viewAngleClampBase.v[0] = *(float *)&v14;
    viewClampYawCatchUpTimeSec = v6->viewClampYawCatchUpTimeSec;
    *(float *)&v14 = v21.v[1];
    if ( viewClampYawCatchUpTimeSec != 0.0 )
      v14 = DiffTrackAngle(v21.v[1], ps->viewAngleClampBase.v[1], viewClampYawCatchUpTimeSec, v13);
    ps->viewAngleClampBase.v[1] = *(float *)&v14;
    v16 = AngleNormalize360(ps->viewAngleClampBase.v[0]);
    ps->viewAngleClampBase.v[0] = *(float *)&v16;
    v17 = AngleNormalize360(ps->viewAngleClampBase.v[1]);
    ps->viewAngleClampBase.v[1] = *(float *)&v17;
  }
}

/*
==============
BobCycle::UnpackBobCycle
==============
*/
void BobCycle::UnpackBobCycle(BobCycle *this, const int (*packedBobCycle)[2])
{
  int v2; 
  int v3; 
  char v5; 
  int v6; 
  int v7; 
  float amplitudeRatio; 
  float amplitudeRatioGun; 

  v2 = (*packedBobCycle)[1];
  v3 = (*packedBobCycle)[0] >> 9;
  this->animCycle = (*packedBobCycle)[0] & 0x1FF;
  v5 = v2;
  v2 >>= 4;
  v6 = v5 & 0xF;
  this->amplitudeRatio = (float)(unsigned __int8)v3 * 0.0039215689;
  this->generation = v6;
  this->isAnimDecreasing = BYTE1(v3) & 1;
  v7 = v2 & 0xF;
  this->maxGeneration = v7;
  this->amplitudeRatioGun = (float)((v2 >> 4) & 0x3FF) * 0.00097751711;
  if ( v6 > v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5281, ASSERT_TYPE_ASSERT, "(0 <= generation && generation <= maxGeneration)", (const char *)&queryFormat, "0 <= generation && generation <= maxGeneration") )
    __debugbreak();
  if ( this->animCycle > 0x1FFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5282, ASSERT_TYPE_ASSERT, "(0 <= animCycle && animCycle <= ((0x1 << 9) - 1))", (const char *)&queryFormat, "0 <= animCycle && animCycle <= MAX_BOB_CYCLE") )
    __debugbreak();
  amplitudeRatio = this->amplitudeRatio;
  if ( (amplitudeRatio < 0.0 || amplitudeRatio > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5283, ASSERT_TYPE_ASSERT, "(0.0f <= amplitudeRatio && amplitudeRatio <= 1.0f)", (const char *)&queryFormat, "0.0f <= amplitudeRatio && amplitudeRatio <= 1.0f") )
    __debugbreak();
  amplitudeRatioGun = this->amplitudeRatioGun;
  if ( (amplitudeRatioGun < 0.0 || amplitudeRatioGun > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5284, ASSERT_TYPE_ASSERT, "(0.0f <= amplitudeRatioGun && amplitudeRatioGun <= 1.0f)", (const char *)&queryFormat, "0.0f <= amplitudeRatioGun && amplitudeRatioGun <= 1.0f") )
    __debugbreak();
}

