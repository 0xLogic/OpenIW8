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

float __fastcall BG_CalcViewspeedBobRatio(double yaw, double prevYaw, const playerState_s *ps, const int frametimeMs)
{
  const SuitDef *SuitDef; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps xmm7, xmm0
    vmovaps xmm6, xmm1
  }
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
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vmovaps xmm1, xmm6; angle2
      vmovaps xmm0, xmm7; angle1
    }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vmovss  xmm1, cs:__real@447a0000
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, esi
      vdivss  xmm2, xmm1, xmm2
      vmulss  xmm6, xmm0, xmm2
      vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_viewBobMaxTurnSpeed, "bg_viewBobMaxTurnSpeed");
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vdivss  xmm0, xmm6, xmm0; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm2, xmm0; fraction }
    *(double *)&_XMM0 = GraphGetValueFromFraction(4, knots, *(const float *)&_XMM2);
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  return *(float *)&_XMM0;
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

__int64 __fastcall BG_CheckProneTurned(pmove_t *pm, playerState_s *ps, double newProneYaw, const BgHandler *handler)
{
  FeetDirection feetDirection; 
  Physics_WorldId worldId; 
  int isOnGround; 
  __int64 result; 
  float fmt; 
  float fYaw; 
  float v35; 
  char v36; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RBP = ps;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmm8, xmm2
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9809, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+1DCh]; angle2
    vmovaps xmm0, xmm8; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vandps  xmm1, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm7, xmm1, cs:__real@3b888889
    vmovss  xmm1, cs:__real@3f800000
    vsubss  xmm6, xmm1, xmm7
    vmulss  xmm0, xmm6, xmm0
    vsubss  xmm0, xmm8, xmm0; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm { vmovaps xmm8, xmm0 }
  feetDirection = PM_GetProneFeetDirection(_RBP);
  worldId = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
  isOnGround = _RBP->groundEntityNum != 2047;
  *(double *)&_XMM0 = BG_Suit_GetBoundsHeight(_RBP, PM_EFF_STANCE_PRONE);
  __asm
  {
    vmulss  xmm2, xmm6, cs:__real@42480000
    vmulss  xmm1, xmm7, cs:__real@42340000
    vaddss  xmm3, xmm2, xmm1
    vmovss  [rsp+0D8h+var_68], xmm3
    vmovss  xmm3, cs:__real@41700000; fSize
    vmovss  [rsp+0D8h+fYaw], xmm8
    vmovss  dword ptr [rsp+0D8h+fmt], xmm0
  }
  LOBYTE(result) = BG_CheckProne(_RBP, _RBP->clientNum, &_RBP->origin, *(const float *)&_XMM3, fmt, fYaw, &pm->fTorsoPitch, &pm->fWaistPitch, 1, isOnGround, 1, handler, worldId, PCT_CLIENT, v35, feetDirection, NULL, NULL);
  _R11 = &v36;
  result = (unsigned __int8)result;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r8d
    vsqrtss xmm2, xmm0, xmm0
    vcvtss2sd xmm1, xmm2, xmm2
    vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
    vxorps  xmm0, xmm0, xmm0
  }
  if ( !__CFADD__(rightMove * rightMove, forwardMove * forwardMove) && rightMove * rightMove + forwardMove * forwardMove != 0 )
  {
    __asm
    {
      vcvtsi2ss xmm0, xmm0, r10d
      vdivss  xmm0, xmm0, xmm2
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_CmdScale_CalcInputScale
==============
*/

float __fastcall BG_CmdScale_CalcInputScale(double forward, double side)
{
  char v2; 
  char v3; 

  __asm
  {
    vmovaps xmm3, xmm0
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm1, xmm0
  }
  if ( !v3 )
    goto LABEL_3;
  __asm { vucomiss xmm3, xmm0 }
  if ( !v3 )
  {
LABEL_3:
    __asm
    {
      vandps  xmm2, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm0, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm2, xmm0
    }
    if ( v2 | v3 )
    {
      __asm
      {
        vdivss  xmm0, xmm1, xmm3
        vmulss  xmm0, xmm0, xmm0
        vaddss  xmm1, xmm0, cs:__real@3f800000
        vsqrtss xmm0, xmm1, xmm1
      }
    }
    else
    {
      __asm
      {
        vdivss  xmm0, xmm3, xmm1
        vmulss  xmm0, xmm0, xmm0
        vaddss  xmm1, xmm0, cs:__real@3f800000
        vsqrtss xmm0, xmm1, xmm1
      }
    }
  }
  return *(float *)&_XMM0;
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

float __fastcall BG_GetBobCycleAnimTime(const int (*packedBobCycle)[2], double _XMM1_8)
{
  BobCycle v13; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  BobCycle::BobCycle(&v13, packedBobCycle);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm6, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm6, xmm1
  }
  if ( __CFSHL__(v13.maxGeneration + 1, 9) )
    goto LABEL_9;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !__CFSHL__(v13.maxGeneration + 1, 9) && (v13.maxGeneration + 1) << 9 != 0 )
  {
LABEL_9:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5296, ASSERT_TYPE_ASSERT, "(0.0f <= animTime && animTime <= 1.0f)", (const char *)&queryFormat, "0.0f <= animTime && animTime <= 1.0f") )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+68h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_GetBobValue
==============
*/
void BG_GetBobValue(const int (*packedBobCycle)[2], float *outViewCycle, float *outViewAmplitude, float *outAnimCycle)
{
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  BobCycle v22; 

  _RBP = outAnimCycle;
  _RSI = outViewCycle;
  _R14 = outViewAmplitude;
  BobCycle::BobCycle(&v22, packedBobCycle);
  if ( _RSI )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@3bc9d9b5
      vmulss  xmm2, xmm1, cs:__real@40000000
      vaddss  xmm3, xmm2, cs:__real@40c90fdb
      vmovss  dword ptr [rsi], xmm3
    }
    v12 = DCONST_DVARBOOL_bg_viewBobDisable;
    if ( !DCONST_DVARBOOL_bg_viewBobDisable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobDisable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
      *_RSI = 0.0;
  }
  if ( _R14 )
  {
    v13 = DCONST_DVARMPFLT_bg_viewBobMax;
    if ( !DCONST_DVARMPFLT_bg_viewBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    __asm
    {
      vmovss  xmm0, [rsp+78h+var_2C]
      vmulss  xmm1, xmm0, dword ptr [rbx+28h]
      vmovss  dword ptr [r14], xmm1
    }
    v15 = DCONST_DVARMPBOOL_bg_viewBobConstantAmplitude;
    if ( !DCONST_DVARMPBOOL_bg_viewBobConstantAmplitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobConstantAmplitude") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
    {
      v16 = DCONST_DVARMPFLT_bg_viewBobMax;
      if ( !DCONST_DVARMPFLT_bg_viewBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobMax") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      *_R14 = v16->current.value;
    }
  }
  if ( _RBP )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edi
      vmulss  xmm1, xmm0, cs:__real@3bc9d9b5
      vmulss  xmm2, xmm1, cs:__real@40000000
      vaddss  xmm3, xmm2, cs:__real@40c90fdb
      vmovss  dword ptr [rbp+0], xmm3
    }
  }
}

/*
==============
BG_GetLateralSpeed
==============
*/
float BG_GetLateralSpeed(const playerState_s *ps, const BgHandler *handler)
{
  const dvar_t *v6; 
  int integer; 
  vec3_t *p_velocity; 
  WorldUpReferenceFrame v16; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12897, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v16, ps, handler);
  v6 = DCONST_DVARINT_player_lateralPlane;
  if ( !DCONST_DVARINT_player_lateralPlane && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_lateralPlane") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  p_velocity = &ps->velocity;
  if ( integer )
  {
    if ( integer == 1 )
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetForwardContribution(&v16, p_velocity);
    else
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetRightContribution(&v16, p_velocity);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v16, &ps->velocity);
  }
  else
  {
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetForwardContribution(&v16, p_velocity);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetRightContribution(&v16, &ps->velocity);
  }
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm0, xmm1, xmm1
    vmovaps xmm6, [rsp+88h+var_18]
  }
  return *(float *)&_XMM0;
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
  const dvar_t *v17; 
  int integer; 
  const vec3_t *p_velocity; 
  WorldUpReferenceFrame v26; 

  _RBX = ps;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
  {
    if ( time - _RBX->jumpState.jumpTime >= 500 )
    {
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v26, _RBX, handler);
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v26, &_RBX->velocity);
    }
    else
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
  }
  else if ( BG_IsPlayerZeroG(_RBX) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+3Ch]
      vmovss  xmm2, dword ptr [rbx+40h]
      vmovss  xmm3, dword ptr [rbx+44h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
    }
  }
  else
  {
    __asm { vmovaps [rsp+88h+var_18], xmm6 }
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12897, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v26, _RBX, handler);
    v17 = DCONST_DVARINT_player_lateralPlane;
    if ( !DCONST_DVARINT_player_lateralPlane && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_lateralPlane") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    integer = v17->current.integer;
    p_velocity = &_RBX->velocity;
    if ( integer )
    {
      if ( integer == 1 )
        *(double *)&_XMM0 = WorldUpReferenceFrame::GetForwardContribution(&v26, p_velocity);
      else
        *(double *)&_XMM0 = WorldUpReferenceFrame::GetRightContribution(&v26, p_velocity);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v26, p_velocity);
    }
    else
    {
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetForwardContribution(&v26, p_velocity);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetRightContribution(&v26, p_velocity);
    }
    __asm
    {
      vmulss  xmm1, xmm6, xmm6
      vmovaps xmm6, [rsp+88h+var_18]
      vmulss  xmm0, xmm0, xmm0
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm0, xmm1, xmm1
    }
  }
  return *(float *)&_XMM0;
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

int __fastcall BG_GetViewDip(const playerState_s *ps, double fallHeight)
{
  bool v6; 
  bool v7; 
  int result; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v6 = ps == NULL;
  if ( !ps )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5182, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps");
    v6 = !v7;
    if ( v7 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:__real@41400000
    vcomiss xmm6, xmm0
    vxorps  xmm4, xmm4, xmm4
  }
  if ( v6 )
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm6, xmm0
      vmulss  xmm1, xmm0, cs:__real@3e1d89d9
      vaddss  xmm1, xmm1, cs:__real@40800000
    }
  }
  __asm
  {
    vminss  xmm3, xmm1, cs:__real@41c00000
    vmovaps xmm6, [rsp+48h+var_18]
  }
  _EAX = ps->slideState.flags & 0x20;
  _ECX = 0;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, ecx
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm4, xmm3, xmm2
    vmovss  [rsp+48h+arg_8], xmm0
    vcvttss2si eax, [rsp+48h+arg_8]
  }
  return result;
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

BobCycle *__fastcall BG_InterpolateBobCycle(BobCycle *result, const playerState_s *prevPs, const playerState_s *nextPs, double fraction)
{
  int commandTime; 
  int v13; 
  int maxGeneration; 
  int generation; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  __int64 v29; 
  int v30; 
  unsigned int v31; 
  bool v32; 
  bool v33; 
  bool v34; 
  bool v44; 
  BobCycle *v48; 
  BobCycle v50; 
  __int128 v51; 
  BobCycle v53; 
  char v56; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm7 }
  _R15 = result;
  __asm { vmovaps xmm7, xmm3 }
  if ( !prevPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5303, ASSERT_TYPE_ASSERT, "(prevPs)", (const char *)&queryFormat, "prevPs") )
    __debugbreak();
  if ( !nextPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5304, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
    __debugbreak();
  commandTime = prevPs->commandTime;
  v13 = nextPs->commandTime;
  if ( prevPs->clientNum != nextPs->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5311, ASSERT_TYPE_ASSERT, "(prevPs->clientNum == nextPs->clientNum)", "%s\n\tAttempted to interpolate between playerStates belonging to different entities, (%i, %i), times: (%i, %i)", "prevPs->clientNum == nextPs->clientNum", prevPs->clientNum, nextPs->clientNum, prevPs->commandTime, nextPs->commandTime) )
    __debugbreak();
  BobCycle::BobCycle(&v53, (const int (*)[2])prevPs->packedBobCycle);
  BobCycle::BobCycle(&v50, (const int (*)[2])nextPs->packedBobCycle);
  if ( commandTime < v13 )
  {
    __asm
    {
      vmovups xmm1, xmmword ptr [rbp+57h+var_70.animCycle]
      vmovsd  xmm0, qword ptr [rbp+57h+var_70.amplitudeRatioGun]
    }
    maxGeneration = v50.maxGeneration;
    generation = v50.generation;
    __asm
    {
      vpextrd rax, xmm1, 2
      vmovaps xmmword ptr [rsp+0F0h+var_38+8], xmm6
      vmovaps xmmword ptr [rsp+0F0h+var_58+8], xmm8
      vmovups [rbp+57h+var_88], xmm1
      vmovsd  [rbp+57h+var_78], xmm0
    }
    if ( (_DWORD)_RAX == v50.maxGeneration )
    {
      v21 = v53.generation;
    }
    else
    {
      v21 = v50.generation;
      if ( v50.maxGeneration > 0xFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5332, ASSERT_TYPE_ASSERT, "(0 <= prevBobCycle.maxGeneration && prevBobCycle.maxGeneration <= ((0x1 << 4) - 1))", (const char *)&queryFormat, "0 <= prevBobCycle.maxGeneration && prevBobCycle.maxGeneration <= MAX_BOB_GENERATION") )
        __debugbreak();
      if ( (generation < 0 || generation > maxGeneration) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5333, ASSERT_TYPE_ASSERT, "(0 <= prevBobCycle.generation && prevBobCycle.generation <= prevBobCycle.maxGeneration)", (const char *)&queryFormat, "0 <= prevBobCycle.generation && prevBobCycle.generation <= prevBobCycle.maxGeneration") )
        __debugbreak();
    }
    v22 = (maxGeneration + 1) << 9;
    v23 = ModuloWrap<int>(v53.animCycle + (v21 << 9), v22);
    v24 = ModuloWrap<int>(v50.animCycle + (generation << 9), v22);
    if ( v23 >= v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 580, ASSERT_TYPE_ASSERT, "(startVal < divisor)", (const char *)&queryFormat, "startVal < divisor") )
      __debugbreak();
    if ( v24 >= v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 581, ASSERT_TYPE_ASSERT, "(endVal < divisor)", (const char *)&queryFormat, "endVal < divisor") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vmulss  xmm1, xmm0, xmm7
      vcvttss2si ebx, xmm1
    }
    if ( v22 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 572, ASSERT_TYPE_ASSERT, "(divisor > 0)", (const char *)&queryFormat, "divisor > 0") )
      __debugbreak();
    v29 = (v22 + (_EBX + v23) % v22) % v22;
    v30 = (v22 + (_EBX + v23) % v22) % v22 / 512;
    v31 = (int)((((WORD2(v29) & 0x1FF) + v29) & 0x1FF) - (WORD2(v29) & 0x1FF) + 512) % 512;
    *(_QWORD *)&v51 = __PAIR64__(v30, v31);
    DWORD2(v51) = maxGeneration;
    if ( (unsigned int)maxGeneration > 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5363, ASSERT_TYPE_ASSERT, "(0 <= interpBobCycle.maxGeneration && interpBobCycle.maxGeneration <= ((0x1 << 4) - 1))", (const char *)&queryFormat, "0 <= interpBobCycle.maxGeneration && interpBobCycle.maxGeneration <= MAX_BOB_GENERATION") )
      __debugbreak();
    if ( (v30 < 0 || v30 > maxGeneration) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5364, ASSERT_TYPE_ASSERT, "(0 <= interpBobCycle.generation && interpBobCycle.generation <= interpBobCycle.maxGeneration)", (const char *)&queryFormat, "0 <= interpBobCycle.generation && interpBobCycle.generation <= interpBobCycle.maxGeneration") )
      __debugbreak();
    v32 = v31 < 0x1FF;
    v33 = v31 <= 0x1FF;
    if ( v31 > 0x1FF )
    {
      v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5365, ASSERT_TYPE_ASSERT, "(0 <= interpBobCycle.animCycle && interpBobCycle.animCycle <= ((0x1 << 9) - 1))", (const char *)&queryFormat, "0 <= interpBobCycle.animCycle && interpBobCycle.animCycle <= MAX_BOB_CYCLE");
      v32 = 0;
      v33 = !v34;
      if ( v34 )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm1, xmm7, [rbp+57h+var_A0.amplitudeRatio]
      vmovss  xmm6, cs:__real@3f800000
      vsubss  xmm3, xmm6, xmm7
      vmulss  xmm2, xmm3, [rbp+57h+var_70.amplitudeRatio]
      vmulss  xmm3, xmm3, [rbp+57h+var_70.amplitudeRatioGun]
      vaddss  xmm4, xmm2, xmm1
      vmulss  xmm1, xmm7, [rbp+57h+var_A0.amplitudeRatioGun]
      vxorps  xmm8, xmm8, xmm8
      vcomiss xmm4, xmm8
      vaddss  xmm7, xmm3, xmm1
      vmovss  dword ptr [rbp+57h+var_78], xmm7
      vmovss  dword ptr [rbp+57h+var_88+0Ch], xmm4
    }
    if ( v32 )
      goto LABEL_51;
    __asm { vcomiss xmm4, xmm6 }
    if ( !v33 )
    {
LABEL_51:
      v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5370, ASSERT_TYPE_ASSERT, "(0.0f <= interpBobCycle.amplitudeRatio && interpBobCycle.amplitudeRatio <= 1.0f)", (const char *)&queryFormat, "0.0f <= interpBobCycle.amplitudeRatio && interpBobCycle.amplitudeRatio <= 1.0f");
      v33 = !v44;
      if ( v44 )
        __debugbreak();
    }
    __asm
    {
      vcomiss xmm7, xmm8
      vmovaps xmm8, xmmword ptr [rsp+0F0h+var_58+8]
      vcomiss xmm7, xmm6
    }
    if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5371, ASSERT_TYPE_ASSERT, "(0.0f <= interpBobCycle.amplitudeRatioGun && interpBobCycle.amplitudeRatioGun <= 1.0f)", (const char *)&queryFormat, "0.0f <= interpBobCycle.amplitudeRatioGun && interpBobCycle.amplitudeRatioGun <= 1.0f") )
      __debugbreak();
    __asm
    {
      vmovups xmm0, [rbp+57h+var_88]
      vmovsd  xmm1, [rbp+57h+var_78]
      vmovaps xmm6, xmmword ptr [rsp+0F0h+var_38+8]
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+57h+var_A0.animCycle]
      vmovsd  xmm1, qword ptr [rbp+57h+var_A0.amplitudeRatioGun]
    }
  }
  _R11 = &v56;
  v48 = _R15;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovups xmmword ptr [r15], xmm0
    vmovsd  qword ptr [r15+10h], xmm1
  }
  return v48;
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
  const dvar_t *v7; 
  int integer; 
  vec3_t *p_velocity; 
  WorldUpReferenceFrame v16; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12927, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v16, ps, handler);
  v7 = DCONST_DVARINT_player_lateralPlane;
  if ( !DCONST_DVARINT_player_lateralPlane && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_lateralPlane") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  p_velocity = &ps->velocity;
  if ( integer )
  {
    if ( integer == 1 )
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetForwardContribution(&v16, p_velocity);
    else
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetRightContribution(&v16, p_velocity);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v16, &ps->velocity);
  }
  else
  {
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetForwardContribution(&v16, p_velocity);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetRightContribution(&v16, &ps->velocity);
  }
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rsi+4]
    vmulss  xmm0, xmm6, dword ptr [rsi]
    vaddss  xmm0, xmm1, xmm0
    vmovaps xmm6, [rsp+88h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_PlayerIsLinkedOrNotMoving
==============
*/
bool BG_PlayerIsLinkedOrNotMoving(const playerState_s *ps, const int gameTime, const BgHandler *handler)
{
  char v11; 

  if ( ps->pm_type == 1 && !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, GameModeFlagValues::ms_spValue, 8u) )
    return 1;
  _RBX = DCONST_DVARFLT_player_moveThreshhold;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !DCONST_DVARFLT_player_moveThreshhold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_moveThreshhold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  *(double *)&_XMM0 = BG_GetSpeed(ps, gameTime, handler);
  __asm
  {
    vcomiss xmm0, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return v11 != 0;
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
__int64 BG_Pmove_PlayerPronePossible(pmove_t *pm)
{
  FeetDirection feetDirection; 
  Physics_WorldId v7; 
  const BgHandler *handler; 
  Physics_WorldId worldId; 
  int isOnGround; 
  __int64 result; 
  float fmt; 
  float fYaw; 
  float v20; 
  char v21; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6369, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6370, ASSERT_TYPE_ASSERT, "(pm->bounds)", (const char *)&queryFormat, "pm->bounds") )
    __debugbreak();
  _R15 = pm->ps;
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6372, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  feetDirection = PM_GetProneFeetDirection(_R15);
  v7 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
  handler = pm->m_bgHandler;
  __asm { vmovss  xmm6, dword ptr [r15+1DCh] }
  worldId = v7;
  isOnGround = _R15->groundEntityNum != 2047;
  *(double *)&_XMM0 = BG_Suit_GetBoundsHeight(_R15, PM_EFF_STANCE_PRONE);
  __asm { vmovss  xmm1, cs:__real@42480000 }
  _R9 = pm->bounds;
  __asm
  {
    vmovss  xmm3, dword ptr [r9+0Ch]; fSize
    vmovss  [rsp+0B8h+var_48], xmm1
    vmovss  [rsp+0B8h+fYaw], xmm6
    vmovss  dword ptr [rsp+0B8h+fmt], xmm0
  }
  LOBYTE(result) = BG_CheckProne(_R15, _R15->clientNum, &_R15->origin, *(const float *)&_XMM3, fmt, fYaw, &pm->fTorsoPitch, &pm->fWaistPitch, 0, isOnGround, 1, handler, worldId, PCT_CLIENT, v20, feetDirection, NULL, NULL);
  _R11 = &v21;
  result = (unsigned __int8)result;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
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
  int pm_type; 
  bool v21; 
  char v22; 
  base_vec3_t<int> *p_angles; 
  int v29; 
  signed __int64 v30; 
  bool v31; 
  bool v50; 
  bool v51; 
  __int16 groundRefEnt; 
  bool IsPlayerZeroGWalking; 
  int v54; 
  __int64 v95; 
  __int64 v96; 
  char v101; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = DCONST_DVARMPFLT_player_view_pitch_up;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps [rsp+108h+var_98], xmm12
    vmovaps [rsp+108h+var_A8], xmm13
    vmovaps [rsp+108h+var_B8], xmm14
    vmovaps [rsp+108h+var_C8], xmm15
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_up") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm13, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARMPFLT_player_view_pitch_down;
  if ( !DCONST_DVARMPFLT_player_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_down") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm12, dword ptr [rbx+28h] }
  v21 = 0;
  if ( GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, ACTIVE, 0) )
  {
    pm_type = ps->pm_type;
    if ( pm_type == 1 || pm_type == 8 )
      v21 = 1;
  }
  v22 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) || v21;
  if ( ps->vehicleState.entity != 2047 )
    v22 = 1;
  if ( GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, ACTIVE, 2u) )
  {
    __asm
    {
      vmovss  xmm13, cs:__real@42aa0000
      vmovaps xmm12, xmm13
    }
  }
  __asm
  {
    vmovss  xmm15, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm14, cs:__real@43340000
    vmovss  xmm10, cs:__real@3b360b61
    vmovss  xmm9, cs:__real@3f000000
    vmovss  xmm11, cs:__real@43b40000
  }
  p_angles = &cmd->angles;
  v29 = 0;
  v30 = (char *)&cmd->angles - (char *)&ps->delta_angles;
  v31 = 1;
  _RDI = &ps->delta_angles;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  do
  {
    if ( !v31 )
    {
      LODWORD(v96) = 3;
      LODWORD(v95) = v29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 38, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v95, v96) )
        __debugbreak();
    }
    __asm { vmovaps xmm1, xmm14; maxAbsValueSize }
    *(double *)&_XMM0 = MSG_UnpackSignedFloat(*(_DWORD *)((char *)_RDI->v + v30), *(float *)&_XMM1, 0x14u);
    __asm
    {
      vmulss  xmm6, xmm0, xmm10
      vaddss  xmm2, xmm6, xmm9
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm0, xmm1, xmm2
      vroundss xmm7, xmm8, xmm0, 1
    }
    if ( (unsigned int)v29 >= 3 )
    {
      LODWORD(v96) = 3;
      LODWORD(v95) = v29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v95, v96) )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm2, xmm10, dword ptr [rdi]
      vsubss  xmm0, xmm6, xmm7
      vmulss  xmm3, xmm0, cs:__real@3f800000
      vaddss  xmm4, xmm3, xmm2
      vxorps  xmm0, xmm0, xmm0
      vaddss  xmm3, xmm4, xmm9
      vmovss  xmm1, xmm0, xmm3
      vroundss xmm2, xmm8, xmm1, 1
      vsubss  xmm0, xmm4, xmm2
      vmulss  xmm6, xmm0, xmm11
    }
    if ( !v22 && !v29 )
    {
      v50 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x2Au);
      v51 = !v50;
      if ( !v50 )
        goto LABEL_32;
      groundRefEnt = ps->groundRefEnt;
      if ( groundRefEnt != 2047 )
      {
        v51 = groundRefEnt == 0;
        if ( groundRefEnt )
          goto LABEL_32;
      }
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
        __debugbreak();
      IsPlayerZeroGWalking = BG_IsPlayerZeroGWalking(ps);
      v51 = !IsPlayerZeroGWalking;
      if ( IsPlayerZeroGWalking )
      {
LABEL_32:
        __asm { vcomiss xmm6, xmm12 }
        if ( v51 )
        {
          __asm
          {
            vxorps  xmm7, xmm13, xmm15
            vcomiss xmm6, xmm7
          }
        }
        else
        {
          v54 = base_vec3_t<int>::operator[](p_angles, 0);
          __asm { vmovaps xmm1, xmm14; maxAbsValueSize }
          *(double *)&_XMM0 = MSG_UnpackSignedFloat(v54, *(float *)&_XMM1, 0x14u);
          __asm
          {
            vmulss  xmm4, xmm0, xmm10
            vxorps  xmm1, xmm1, xmm1
            vaddss  xmm2, xmm4, xmm9
            vmovss  xmm0, xmm1, xmm2
            vroundss xmm3, xmm8, xmm0, 1
            vsubss  xmm1, xmm4, xmm3
            vmulss  xmm0, xmm1, xmm11
            vsubss  xmm2, xmm12, xmm0
            vmulss  xmm3, xmm2, cs:__real@43360b61
            vxorps  xmm0, xmm0, xmm0
            vaddss  xmm1, xmm3, xmm9
            vmovss  xmm1, xmm0, xmm1
            vroundss xmm2, xmm8, xmm1, 1
            vcvttss2si eax, xmm2
          }
          _ECX = (unsigned __int16)_EAX;
          __asm
          {
            vmovd   xmm0, ecx
            vcvtdq2ps xmm0, xmm0
            vmulss  xmm4, xmm0, cs:__real@37800000
            vaddss  xmm2, xmm4, xmm9
            vroundss xmm3, xmm8, xmm2, 1
            vsubss  xmm1, xmm4, xmm3
            vmulss  xmm0, xmm1, xmm11
            vmovss  dword ptr [rdi], xmm0
            vmovaps xmm6, xmm12
          }
        }
      }
    }
    __asm
    {
      vmulss  xmm3, xmm6, xmm10
      vxorps  xmm0, xmm0, xmm0
      vaddss  xmm1, xmm3, xmm9
      vmovss  xmm1, xmm0, xmm1
      vroundss xmm2, xmm8, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm6, xmm0, xmm11
    }
    if ( (unsigned int)v29 >= 3 )
    {
      LODWORD(v96) = 3;
      LODWORD(v95) = v29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v95, v96) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi+124h], xmm6 }
    _RDI = (vec3_t *)((char *)_RDI + 4);
    v31 = (unsigned int)++v29 < 3;
  }
  while ( v29 < 3 );
  __asm { vmovaps xmm14, [rsp+108h+var_B8] }
  _R11 = &v101;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm15, [rsp+108h+var_C8]
  }
}

/*
==============
BG_crandom
==============
*/
float BG_crandom(unsigned int *pHoldrand)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  *pHoldrand = 214013 * *pHoldrand + 2531011;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@38000000
    vmulss  xmm2, xmm1, cs:__real@40000000
    vsubss  xmm0, xmm2, cs:__real@3f800000
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_flrand
==============
*/

float __fastcall BG_flrand(float min, double max, unsigned int *pHoldrand)
{
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vsubss  xmm1, xmm1, xmm0
  }
  *pHoldrand = 214013 * *pHoldrand + 2531011;
  __asm
  {
    vcvtsi2ss xmm2, xmm2, eax
    vmulss  xmm2, xmm2, xmm1
    vmulss  xmm3, xmm2, cs:__real@38000000
    vaddss  xmm0, xmm3, xmm0
  }
  return *(float *)&_XMM0;
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
  __asm { vxorps  xmm0, xmm0, xmm0 }
  *pHoldrand = 214013 * *pHoldrand + 2531011;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, cs:__real@38000000
  }
  return *(float *)&_XMM0;
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

__int64 __fastcall BG_srand_timeangles(const int commandTime, const vec3_t *viewangles, double _XMM2_8, double _XMM3_8)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vmulss  xmm4, xmm0, cs:__real@3b360b61
    vaddss  xmm1, xmm4, cs:__real@3f000000
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm0, xmm2, xmm1, 1
    vmovss  xmm1, cs:precision
    vcomiss xmm1, xmm2
    vsubss  xmm0, xmm4, xmm0
    vmovaps [rsp+48h+var_18], xmm7
    vmulss  xmm7, xmm0, cs:__real@43b40000
  }
  if ( dword_14BB4768C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14BB4768C);
    if ( dword_14BB4768C == -1 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm1, xmm0, cs:precision
        vmovss  cs:invPrecision, xmm1
      }
      j__Init_thread_footer(&dword_14BB4768C);
    }
  }
  __asm
  {
    vmulss  xmm1, xmm7, cs:invPrecision
    vaddss  xmm2, xmm1, cs:__real@3f000000
    vmovaps xmm7, [rsp+48h+var_18]
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm2, 1
    vcvttss2si eax, xmm3
  }
  return (unsigned int)(159719620 - 570470319 * (commandTime + _EAX));
}

/*
==============
BgScopedCrouchAndProneBlendMapUpdate
==============
*/
void BgScopedCrouchAndProneBlendMapUpdate(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  char v20; 
  char v23; 
  bool v24; 
  int v31; 
  char v39; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RSI = pml;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
  }
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
  __asm { vmovss  xmm1, cs:__real@3f800000; maxAbsValueSize }
  *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(ps->weapCommon.crouchProneBlendMap, *(float *)&_XMM1, 0xCu);
  __asm
  {
    vmovaps xmm7, xmm0
    vxorps  xmm6, xmm6, xmm6
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
  {
    __asm { vmovss  xmm6, cs:__real@3f800000 }
  }
  else
  {
    _EAX = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u);
    _ECX = 0;
    __asm
    {
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@3f000000
      vblendvps xmm6, xmm1, xmm6, xmm2
    }
  }
  _RBX = DCONST_DVARFLT_player_crouchProneBlendTransitionTime;
  if ( !DCONST_DVARFLT_player_crouchProneBlendTransitionTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_crouchProneBlendTransitionTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm8, dword ptr [rbx+28h]
    vcvtss2sd xmm0, xmm8, xmm8
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v20 | v23 )
  {
    v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6620, ASSERT_TYPE_ASSERT, "(interpolationTimeSeconds > 1.0E-6)", (const char *)&queryFormat, "interpolationTimeSeconds > ZERO_EPSILON");
    v20 = 0;
    if ( v24 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm7, xmm6
    vmovss  xmm0, dword ptr [rsi+24h]
    vdivss  xmm1, xmm0, xmm8
  }
  if ( v20 )
  {
    __asm
    {
      vaddss  xmm0, xmm1, xmm7
      vminss  xmm0, xmm0, xmm6
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm7, xmm1
      vmaxss  xmm0, xmm0, xmm6; value
    }
  }
  __asm { vmovss  xmm1, cs:__real@3f800000; maxAbsValueSize }
  v31 = MSG_PackUnsignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0xCu);
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  _R11 = &v39;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  ps->weapCommon.crouchProneBlendMap = v31;
}

/*
==============
ClampAngleDeltaOverTime
==============
*/

float __fastcall ClampAngleDeltaOverTime(double angleDelta, double curAngle, double minAngle, double maxAngle, float angleRate)
{
  bool v16; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vcomiss xmm2, xmm3
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmm11, xmm1
    vmovaps xmm7, xmm3
    vmovaps xmm9, xmm2
    vmovaps xmm6, xmm0
  }
  v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4193, ASSERT_TYPE_ASSERT, "(minAngle <= maxAngle)", (const char *)&queryFormat, "minAngle <= maxAngle");
  if ( v16 )
    __debugbreak();
  __asm
  {
    vmovss  xmm10, [rsp+98h+angleRate]
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm10, xmm8
    vmulss  xmm4, xmm11, cs:__real@3b360b61
    vaddss  xmm1, xmm4, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm2, xmm0, xmm1
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm3, xmm1, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm5, xmm0, cs:__real@43b40000
    vmovss  xmm3, cs:__real@3a83126f
    vsubss  xmm1, xmm5, xmm7
    vcomiss xmm1, xmm3
    vsubss  xmm2, xmm9, xmm5
  }
  if ( v16 )
  {
    __asm
    {
      vxorps  xmm0, xmm10, cs:__xmm@80000000800000008000000080000000
      vsubss  xmm1, xmm7, xmm5
      vmaxss  xmm3, xmm1, xmm0
    }
  }
  else
  {
    __asm
    {
      vcomiss xmm2, xmm3
      vxorps  xmm3, xmm3, xmm3
    }
  }
  __asm
  {
    vmovss  xmm1, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm3, xmm1
    vcomiss xmm0, xmm8
  }
  if ( v16 )
  {
    __asm { vaddss  xmm0, xmm6, xmm3 }
  }
  else
  {
    __asm
    {
      vandps  xmm0, xmm6, xmm1
      vcomiss xmm0, xmm8
      vmovaps xmm0, xmm6
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
    vmovaps xmm9, [rsp+98h+var_48]
    vmovaps xmm10, [rsp+98h+var_58]
    vmovaps xmm11, [rsp+98h+var_68]
  }
  return *(float *)&_XMM0;
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
  unsigned int v33; 
  const dvar_t *v34; 
  vec3_t outOrigin; 

  _R14 = pml;
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
  _RSI = this->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 13133, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_player_viewMotionImpactSpeedThreshold;
  if ( !DCONST_DVARFLT_player_viewMotionImpactSpeedThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_viewMotionImpactSpeedThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm5, dword ptr [rbx+28h] }
  if ( !this->initialCall )
  {
    __asm { vcomiss xmm5, dword ptr [r14+2Ch] }
    if ( !this->initialCall )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+3Ch]
        vsubss  xmm4, xmm0, dword ptr [r14+4Ch]
        vmovss  xmm1, dword ptr [rsi+40h]
        vsubss  xmm2, xmm1, dword ptr [r14+50h]
        vmovss  xmm0, dword ptr [rsi+44h]
        vsubss  xmm3, xmm0, dword ptr [r14+54h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm4, xmm2, xmm1
        vmulss  xmm0, xmm3, xmm3
        vaddss  xmm3, xmm0, xmm4
        vmulss  xmm1, xmm5, xmm5
        vcomiss xmm1, xmm3
      }
      if ( !this->initialCall )
      {
        __asm
        {
          vsqrtss xmm0, xmm4, xmm4; val
          vmovss  xmm2, cs:__real@43960000; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovss  xmm1, cs:__real@43960000; maxAbsValueSize }
        v33 = MSG_PackUnsignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 8u);
        BG_AddPredictableEventToPlayerstate(EV_MOVEMENT_IMPACT, v33, this->cmd.serverTime, this->weaponMap, _RSI);
      }
    }
  }
  if ( !_R14->ranSlopeUpdate )
    PM_SlopeWorldmodel_Update(pm, _R14);
  v34 = DCONST_DVARINT_bg_slope_debug;
  if ( !DCONST_DVARINT_bg_slope_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_slope_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  if ( v34->current.integer == this->ps->clientNum && !pm->isExtrapolation && !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
  {
    BG_GetPlayerEyePosition(pm->weaponMap, pm->ps, &outOrigin, pm->m_bgHandler);
    __asm { vmovss  xmm2, cs:__real@3fc00000 }
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
  const dvar_t *v17; 
  float fmt; 
  vec3_t vec; 

  __asm
  {
    vmovaps [rsp+0F8h+var_88], xmm9
    vmovaps [rsp+0F8h+var_98], xmm10
  }
  _RDI = wishdir;
  __asm { vmovaps xmm9, xmm3 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2472, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2472, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm10, [rsp+0F8h+accel]
    vmovaps xmm3, xmm9; wishspeed
    vmovss  dword ptr [rsp+0F8h+fmt], xmm10
  }
  if ( !PM_GameInterface_Accelerate(pm, pml, _RDI, *(float *)&_XMM3, fmt) )
  {
    __asm { vmovaps [rsp+0F8h+var_58], xmm6 }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 6u) )
      goto LABEL_18;
    v17 = DCONST_DVARMPBOOL_player_altAcceleration;
    if ( !DCONST_DVARMPBOOL_player_altAcceleration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_altAcceleration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
    {
LABEL_18:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+3Ch]
        vmovss  xmm1, dword ptr [rbx+40h]
        vmulss  xmm6, xmm9, dword ptr [rdi]
        vmovaps [rsp+0F8h+var_68], xmm7
        vmulss  xmm7, xmm9, dword ptr [rdi+4]
        vmovss  dword ptr [rsp+0F8h+vec], xmm0
        vmovss  xmm0, dword ptr [rbx+44h]
        vmovaps [rsp+0F8h+var_78], xmm8
        vmulss  xmm8, xmm9, dword ptr [rdi+8]
        vmovss  dword ptr [rsp+0F8h+vec+4], xmm1
        vmovss  dword ptr [rsp+0F8h+vec+8], xmm0
      }
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 6u) )
      {
        __asm { vxorps  xmm1, xmm1, xmm1; height }
        WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
      }
      __asm
      {
        vsubss  xmm7, xmm7, dword ptr [rsp+0F8h+vec+4]
        vsubss  xmm8, xmm8, dword ptr [rsp+0F8h+vec+8]
        vsubss  xmm6, xmm6, dword ptr [rsp+0F8h+vec]
        vmulss  xmm1, xmm7, xmm7
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, xmm8
        vaddss  xmm2, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
        vdivss  xmm5, xmm1, xmm0
        vmulss  xmm0, xmm10, dword ptr [r15+24h]
        vmulss  xmm1, xmm0, xmm9
        vminss  xmm4, xmm1, xmm3
        vmulss  xmm0, xmm6, xmm5
        vmulss  xmm1, xmm0, xmm4
        vaddss  xmm2, xmm1, dword ptr [rbx+3Ch]
        vmulss  xmm0, xmm7, xmm5
        vmovaps xmm7, [rsp+0F8h+var_68]
        vmulss  xmm1, xmm0, xmm4
        vmovss  dword ptr [rbx+3Ch], xmm2
        vaddss  xmm2, xmm1, dword ptr [rbx+40h]
        vmulss  xmm0, xmm8, xmm5
        vmovaps xmm8, [rsp+0F8h+var_78]
        vmulss  xmm1, xmm0, xmm4
        vmovss  dword ptr [rbx+40h], xmm2
        vaddss  xmm2, xmm1, dword ptr [rbx+44h]
        vmovss  dword ptr [rbx+44h], xmm2
      }
    }
    else
    {
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2488, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x16u) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+40h]
          vmulss  xmm3, xmm0, dword ptr [rdi+4]
          vmovss  xmm1, dword ptr [rdi]
          vmulss  xmm2, xmm1, dword ptr [rbx+3Ch]
          vmovss  xmm0, dword ptr [rbx+44h]
          vmulss  xmm1, xmm0, dword ptr [rdi+8]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vsubss  xmm6, xmm9, xmm2
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm6, xmm0
        }
      }
    }
    __asm { vmovaps xmm6, [rsp+0F8h+var_58] }
  }
  __asm
  {
    vmovaps xmm9, [rsp+0F8h+var_88]
    vmovaps xmm10, [rsp+0F8h+var_98]
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
  __int64 v17; 
  BgGroundState *ground; 
  const SuitDef *SuitDef; 
  float fmt; 
  float fmta; 
  usercmd_s cmd; 
  Bounds bounds; 
  trace_t results; 
  char v105; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  _RBP = pml;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_AirMove");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3076, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3076, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !WorldUpReferenceFramePM::IsLockedTransitionActive(&pm->refFrame, pm->ps) )
  {
    PM_Friction(pm, _RBP);
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vcvtsi2ss xmm9, xmm9, eax
      vxorps  xmm10, xmm10, xmm10
      vcvtsi2ss xmm10, xmm10, eax
    }
    _RAX = &pm->cmd;
    _RCX = &cmd;
    v17 = 2i64;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rcx+20h], ymm0
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rcx+40h], ymm0
        vmovups xmm0, xmmword ptr [rax+60h]
        vmovups xmmword ptr [rcx+60h], xmm0
      }
      _RCX = (usercmd_s *)((char *)_RCX + 128);
      __asm
      {
        vmovups xmm1, xmmword ptr [rax+70h]
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      _RAX = (usercmd_s *)((char *)_RAX + 128);
      --v17;
    }
    while ( v17 );
    _RCX->buttons = _RAX->buttons;
    *(double *)&_XMM0 = PM_CmdScale(_RDI, &cmd);
    __asm
    {
      vmovaps xmm8, xmm0
      vxorps  xmm1, xmm1, xmm1; height
    }
    WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &_RBP->forward);
    __asm { vxorps  xmm1, xmm1, xmm1; height }
    WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &_RBP->right);
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+4]
      vmovss  xmm5, dword ptr [rbp+0]
      vmovss  xmm3, dword ptr [rbp+8]
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vmovss  xmm6, cs:__real@80000000
      vcmpless xmm0, xmm4, xmm6
      vmovss  xmm7, cs:__real@3f800000
      vblendvps xmm1, xmm4, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm1
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbp+0], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbp+4]
      vmovss  dword ptr [rbp+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbp+8]
      vmovss  dword ptr [rbp+8], xmm0
      vmovss  xmm0, dword ptr [rbp+10h]
      vmovss  xmm5, dword ptr [rbp+0Ch]
      vmovss  xmm3, dword ptr [rbp+14h]
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm0, xmm0
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, xmm6
      vblendvps xmm1, xmm4, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm1
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbp+0Ch], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbp+10h]
      vmovss  dword ptr [rbp+10h], xmm1
      vmulss  xmm4, xmm2, dword ptr [rbp+14h]
      vmovss  dword ptr [rbp+14h], xmm4
      vmulss  xmm1, xmm9, dword ptr [rbp+0]
      vmulss  xmm0, xmm10, dword ptr [rbp+0Ch]
      vaddss  xmm5, xmm1, xmm0
      vmulss  xmm1, xmm10, dword ptr [rbp+10h]
      vmulss  xmm0, xmm9, dword ptr [rbp+4]
      vaddss  xmm3, xmm1, xmm0
      vmulss  xmm2, xmm4, xmm10
      vmulss  xmm1, xmm9, dword ptr [rbp+8]
      vaddss  xmm4, xmm2, xmm1
    }
    _R8 = &_RBP->wishdir;
    __asm
    {
      vmovss  dword ptr [r8+4], xmm3
      vmovss  dword ptr [r8+8], xmm4
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm6
      vblendvps xmm1, xmm3, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm1
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [r8], xmm0
      vmulss  xmm1, xmm2, dword ptr [r8+4]
      vmovss  dword ptr [r8+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [r8+8]
      vmovss  dword ptr [r8+8], xmm0
      vmulss  xmm3, xmm3, xmm8; wishspeed
      vmovss  dword ptr [rsp+268h+fmt], xmm7
    }
    PM_Accelerate(pm, _RBP, &_RBP->wishdir, *(float *)&_XMM3, fmt);
    ground = pm->ground;
    if ( ground->groundPlane )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3a83126f
        vmovss  dword ptr [rsp+268h+fmt], xmm0
      }
      PM_ClipVelocityOverClip(NULL, &_RDI->velocity, &ground->trace.normal, NULL, fmta, &_RDI->velocity);
    }
    if ( BG_IsPushAffectingAirMovement(_RDI) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPONSTATES_NUM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3137, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_PUSH ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_PUSH )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+24h]
        vmulss  xmm0, xmm2, dword ptr [rdi+5274h]
        vaddss  xmm1, xmm0, dword ptr [rdi+3Ch]
        vmovss  dword ptr [rdi+3Ch], xmm1
        vmulss  xmm0, xmm2, dword ptr [rdi+5278h]
        vaddss  xmm1, xmm0, dword ptr [rdi+40h]
        vmovss  dword ptr [rdi+40h], xmm1
        vmulss  xmm0, xmm2, dword ptr [rdi+527Ch]
        vaddss  xmm1, xmm0, dword ptr [rdi+44h]
        vmovss  dword ptr [rdi+44h], xmm1
      }
    }
    PM_UpdatePlayerCollision(pm, _RBP, 1, 1, 0, 1);
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, ACTIVE, 0xBu) && _RDI->pm_type < 7 && !(unsigned int)BG_Pmove_PlayerPronePossible(pm) )
    {
      *(double *)&_XMM0 = BG_Suit_GetBoundsHeight(_RDI, PM_EFF_STANCE_DUCKED);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = BG_Suit_GetBoundsRadius(_RDI);
      __asm
      {
        vmulss  xmm4, xmm6, cs:__real@3f000000
        vaddss  xmm3, xmm4, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
        vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
        vmovss  dword ptr [rsp+268h+bounds.midPoint], xmm1
        vmovss  xmm2, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
        vmovss  dword ptr [rsp+268h+bounds.midPoint+4], xmm2
        vmovss  dword ptr [rsp+268h+bounds.midPoint+8], xmm3
        vmovss  dword ptr [rsp+268h+bounds.halfSize], xmm0
        vmovss  dword ptr [rsp+268h+bounds.halfSize+4], xmm0
        vmovss  dword ptr [rsp+268h+bounds.halfSize+8], xmm4
      }
      BgTrace::LegacyTrace(pm->m_trace, pm, &results, &_RDI->origin, &_RDI->origin, &bounds, _RDI->clientNum, pm->tracemask & 0xFDFFBFFF);
      if ( !results.allsolid )
      {
        SuitDef = BG_GetSuitDef(_RDI->suitIndex);
        if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3153, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
          __debugbreak();
        _RDI->viewHeightTarget = SuitDef->viewheight_crouch;
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_RDI->pm_flags, ACTIVE, 0);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_RDI->pm_flags, ACTIVE, 0x36u);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_RDI->pm_flags, ACTIVE, 1u);
        BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_CROUCH, 0, pm->cmd.serverTime, pm->weaponMap, _RDI);
      }
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      BG_UpdateMovementDir(pm, _RBP, 1);
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v105;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
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
  vec3_t vec; 
  vec3_t v75; 

  _RBP = pml;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_FIRING) )
  {
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2172, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    _RSI = pm->ps;
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2172, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (pm->tracemask & 0x2004000) != 0 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0]
        vmovss  xmm1, dword ptr [rbp+4]
        vmovaps [rsp+0B8h+var_18], xmm6
        vmovaps [rsp+0B8h+var_28], xmm7
        vmovss  dword ptr [rsp+0B8h+vec], xmm0
        vmovss  xmm0, dword ptr [rbp+8]
        vmovss  dword ptr [rsp+0B8h+vec+4], xmm1
        vmovaps [rsp+0B8h+var_38], xmm8
        vmovaps [rsp+0B8h+var_48], xmm9
        vxorps  xmm1, xmm1, xmm1; height
        vmovss  dword ptr [rsp+0B8h+vec+8], xmm0
        vmovaps [rsp+0B8h+var_58], xmm10
      }
      WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+0B8h+vec]
        vmovss  xmm6, dword ptr [rsp+0B8h+vec+4]
        vmovss  xmm5, dword ptr [rsp+0B8h+vec+8]
        vmovss  xmm10, cs:__real@3f800000
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm10, xmm0
        vdivss  xmm3, xmm10, xmm0
        vmulss  xmm0, xmm4, xmm3
        vmulss  xmm2, xmm6, xmm3
        vmovss  dword ptr [rsp+0B8h+vec], xmm0
        vmovss  dword ptr [rsp+0B8h+vec+4], xmm2
        vmovss  xmm2, dword ptr [rbp+0Ch]
        vmulss  xmm0, xmm5, xmm3
        vmovss  dword ptr [rsp+0B8h+vec+8], xmm0
        vmovss  xmm0, dword ptr [rbp+10h]
        vmovss  dword ptr [rsp+0B8h+var_78], xmm2
        vmovss  xmm2, dword ptr [rbp+14h]
        vxorps  xmm1, xmm1, xmm1; height
        vmovss  dword ptr [rsp+0B8h+var_78+4], xmm0
        vmovss  dword ptr [rsp+0B8h+var_78+8], xmm2
      }
      WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &v75);
      _EAX = pm->cmd.avoidForward;
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+0B8h+var_78]
        vmovss  xmm8, dword ptr [rsp+0B8h+var_78+4]
        vmovss  xmm9, dword ptr [rsp+0B8h+var_78+8]
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm8, xmm8
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm9, xmm9
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm10, xmm0
        vdivss  xmm7, xmm10, xmm0
        vmovd   xmm1, eax
      }
      _EAX = pm->cmd.avoidRight;
      __asm
      {
        vcvtdq2ps xmm1, xmm1
        vmulss  xmm6, xmm1, cs:__real@3c23d70a
        vmulss  xmm2, xmm6, dword ptr [rsp+0B8h+vec]
        vmulss  xmm1, xmm8, xmm7
        vmovd   xmm0, eax
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm5, xmm0, cs:__real@3c23d70a
        vmulss  xmm0, xmm4, xmm7
        vmulss  xmm3, xmm0, xmm5
        vaddss  xmm0, xmm3, xmm2
        vaddss  xmm3, xmm0, dword ptr [rsi+3Ch]
        vmulss  xmm2, xmm6, dword ptr [rsp+0B8h+vec+4]
        vmulss  xmm4, xmm1, xmm5
        vaddss  xmm1, xmm4, xmm2
        vmulss  xmm2, xmm6, dword ptr [rsp+0B8h+vec+8]
        vmulss  xmm0, xmm9, xmm7
        vmovss  dword ptr [rsi+3Ch], xmm3
        vaddss  xmm3, xmm1, dword ptr [rsi+40h]
        vmulss  xmm4, xmm0, xmm5
        vaddss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rsi+40h], xmm3
        vaddss  xmm3, xmm0, dword ptr [rsi+44h]
        vmovaps xmm10, [rsp+0B8h+var_58]
        vmovaps xmm9, [rsp+0B8h+var_48]
        vmovaps xmm8, [rsp+0B8h+var_38]
        vmovaps xmm7, [rsp+0B8h+var_28]
        vmovaps xmm6, [rsp+0B8h+var_18]
        vmovss  dword ptr [rsi+44h], xmm3
      }
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
  bool v9; 
  const dvar_t *v10; 
  char v13; 
  bool v15; 
  float fmt; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1502, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1502, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1464, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = BG_IsQASBoth(_RDI, QAS_STATE_NONE) && _RDI->sprintState.sprintRestore != 0;
  BG_GetSuitDef(_RDI->suitIndex);
  v10 = DVARBOOL_auto_sprint_enabled;
  if ( !DVARBOOL_auto_sprint_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "auto_sprint_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled )
    goto LABEL_20;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [r15+200h]
    vucomiss xmm0, dword ptr [rdi+1E8h]
  }
  if ( v10->current.enabled )
    goto LABEL_20;
  if ( (pm->cmd.buttons & 0x4000000000000i64) != 0 )
    v13 = 1;
  else
LABEL_20:
    v13 = 0;
  if ( !v9 && ((pm->cmd.buttons & 2) == 0 && !v13 || _RDI->sprintState.sprintButtonUpRequired) || PM_SprintStartInterferingButtons(pm, pm->cmd.forwardmove, pm->cmd.buttons, pm->cmd.serverTime) )
    return 0;
  v15 = PM_CanStartSprintStateCheck(pm, pml, ignoreReloadChecks);
  if ( !v15 && BG_Skydive_CanQueueSprint(ps) )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@7f7fffff
      vmovss  dword ptr [rsp+68h+fmt], xmm0
    }
    PM_SetSprintRestore(pm, ps, 1, 0, fmt);
  }
  return v15;
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
  float fmt; 
  bool v17; 

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
    v17 = BG_UsingAlternate(ps);
    v8 = WEAPON_HAND_DEFAULT;
    WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
    v10 = WeaponHand;
    if ( WeaponHand < 0 )
      return PM_DoesSprintMeterTestPass(pm);
    v11 = 0i64;
    for ( i = &ps->weapState[0].weaponState; ; i += 20 )
    {
      v13 = v11;
      if ( (unsigned int)(*i - 18) <= 3 && (BG_GetReloadType(ViewmodelWeapon, v17) == RELOAD_TYPE_SEGMENTED && (unsigned int)(*i - 20) > 1 || !PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, v8, pm->m_bgHandler)) )
        break;
      ++v8;
      ++v11;
      if ( v13 >= v10 )
        return PM_DoesSprintMeterTestPass(pm);
    }
  }
  __asm
  {
    vmovss  xmm0, cs:__real@7f7fffff
    vmovss  dword ptr [rsp+58h+fmt], xmm0
  }
  PM_SetSprintRestore(pm, ps, 1, 0, fmt);
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
  const SuitDef *SuitDef; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  unsigned __int64 buttons; 
  const dvar_t *v22; 
  Bounds *v23; 
  int Int_Internal_DebugName; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  char v28; 
  playerState_s *ps; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *v30; 
  const dvar_t *v31; 
  BgTrace *m_trace; 
  int contentMask; 
  int passEntityNum; 
  const Bounds *bounds; 
  bool v36; 
  bool v37; 
  bool v38; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *v39; 
  char v40; 
  entity_event_t v46; 
  int v47; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *v48; 
  unsigned __int64 v49; 
  unsigned __int64 v50; 
  unsigned int v51; 
  bool v52; 
  BgWeaponMap *weaponMap; 
  int serverTime; 
  entity_event_t v55; 
  unsigned __int64 v60; 
  int viewHeightTarget; 
  int viewheight_laststand; 
  int viewheight_crouch; 
  __int32 v68; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v69; 
  __int32 v70; 
  EffectiveStance v71; 
  char *fmt; 
  bool v82; 
  bool v83; 
  char v85; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6779, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6780, ASSERT_TYPE_ASSERT, "(pm->bounds)", (const char *)&queryFormat, "pm->bounds") )
    __debugbreak();
  _R14 = pm->ps;
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6782, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(_R14->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6785, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  Suit_Validate_ViewHeights("current", SuitDef);
  pm->m_flags &= ~0x80u;
  p_pm_flags = &_R14->pm_flags;
  if ( _R14->pm_type == 5 )
  {
    _RAX = pm->bounds;
    *(_QWORD *)_RAX->midPoint.v = 0i64;
    __asm
    {
      vmovss  xmm3, cs:SPECTATOR_TOP
      vaddss  xmm0, xmm3, cs:SPECTATOR_BOTTOM
      vmulss  xmm0, xmm0, cs:__real@3f000000
      vmovss  dword ptr [rax+8], xmm0
      vmovss  xmm1, cs:SPECTATOR_RADIUS
      vmovss  dword ptr [rax+0Ch], xmm1
      vmovss  dword ptr [rax+10h], xmm1
      vsubss  xmm0, xmm3, cs:SPECTATOR_BOTTOM
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vmovss  dword ptr [rax+14h], xmm1
    }
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(p_pm_flags, ACTIVE, 0);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0x36u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
    buttons = pm->cmd.buttons;
    if ( (buttons & 0x40) != 0 )
      pm->cmd.buttons = buttons & 0xFFFFFFFFFFFFFFBFui64;
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 2u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 3u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 4u);
    *(_QWORD *)&_R14->viewHeightTarget = 0i64;
    goto LABEL_198;
  }
  v83 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0);
  _RAX = BG_Suit_GetBounds(_R14->suitIndex, PM_EFF_STANCE_DEFAULT);
  _RCX = pm->bounds;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
    vmovsd  xmm1, qword ptr [rax+10h]
    vmovsd  qword ptr [rcx+10h], xmm1
  }
  if ( _R14->pm_type == 7 )
  {
    _R14->viewHeightTarget = SuitDef->viewheight_dead;
    _RAX = BG_Suit_GetBounds(_R14->suitIndex, PM_EFF_STANCE_PRONE);
    _RCX = pm->bounds;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rcx+10h], xmm1
    }
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 2u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 3u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 4u);
LABEL_197:
    PM_ViewHeightAdjust(pm, pml);
    goto LABEL_198;
  }
  if ( BG_IsPlayerSwimming(_R14) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6840, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
      __debugbreak();
    v22 = DCONST_DVARBOOL_player_alwaysUseSpaceCapsuleAndViewHeightWhileSwimming;
    if ( !DCONST_DVARBOOL_player_alwaysUseSpaceCapsuleAndViewHeightWhileSwimming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_alwaysUseSpaceCapsuleAndViewHeightWhileSwimming") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.enabled || Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_player_spaceEnabled, "player_spaceEnabled") )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_player_spaceCapsuleHeight, "player_spaceCapsuleHeight");
      _RAX = pm->bounds;
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@3f000000
        vmovss  dword ptr [rax+8], xmm1
        vmovss  dword ptr [rax+14h], xmm1
      }
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARMPINT_player_spaceViewHeight, "player_spaceViewHeight");
    }
    else
    {
      v23 = pm->bounds;
      v23->midPoint.v[2] = 15.0;
      v23->halfSize.v[2] = 15.0;
      Int_Internal_DebugName = SuitDef->viewheight_swim;
    }
    _R14->viewHeightTarget = Int_Internal_DebugName;
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_R14->eFlags, ACTIVE, 4u);
    p_eFlags = &_R14->eFlags;
    goto LABEL_31;
  }
  if ( BG_IsPlayerZeroG(_R14) )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_R14->eFlags, ACTIVE, 4u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0x36u);
    BG_ResetForcedStances(_R14);
    if ( !BG_IsPlayerZeroGWalking(_R14) )
    {
      _R14->viewHeightTarget = SuitDef->viewheight_stand;
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_R14->eFlags, ACTIVE, 3u);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
      goto LABEL_197;
    }
  }
  v28 = 0;
  v85 = 0;
  if ( BG_IsVehicleActive(_R14) )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) && _R14->vehicleType == VEH_HELICOPTER && Dvar_GetInt_Internal_DebugName(DVARINT_vehHelicopterControlsAltitude, "vehHelicopterControlsAltitude") == 3 )
    {
      _R14->viewHeightTarget = SuitDef->viewheight_stand;
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_R14->eFlags, ACTIVE, 4u);
      p_eFlags = &_R14->eFlags;
LABEL_31:
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(p_eFlags, ACTIVE, 3u);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0x36u);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
      BG_ResetForcedStances(_R14);
      goto LABEL_197;
    }
    v28 = 1;
    v85 = 1;
  }
  if ( !BGVehicles::IsRemoteDrivingVehicle(_R14) )
  {
    ps = pm->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6728, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v30 = &ps->pm_flags;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u) || BG_ContextMount_IsActive(ps) )
    {
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) && !BG_IsRemoteTurretActive(ps) )
      {
        v31 = DVARBOOL_auto_sprint_enabled;
        if ( !DVARBOOL_auto_sprint_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "auto_sprint_enabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v31);
        if ( !v31->current.enabled || (pm->cmd.buttons & 0x4000000000002i64) != 0x4000000000000i64 )
          goto LABEL_57;
      }
      if ( PM_IsInAir(pm) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(v30, ACTIVE, 0x13u) )
      {
LABEL_57:
        m_trace = pm->m_trace;
        contentMask = pm->tracemask & 0xFDFFBFFF;
        passEntityNum = _R14->clientNum;
        bounds = BG_Suit_GetBounds(_R14->suitIndex, PM_EFF_STANCE_DEFAULT);
        BgTrace::LegacyTrace(m_trace, pm, &results, &_R14->origin, &_R14->origin, bounds, passEntityNum, contentMask);
        v28 = v85;
        if ( !results.allsolid )
          v28 = 1;
      }
    }
  }
  v82 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 5u);
  v36 = v82 && (_R14->mantleState.flags & 2) != 0;
  v37 = 0;
  if ( pm->cmd.serverTime == _R14->slideState.slideEndTime && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 0) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 1u) )
    v37 = !PM_CanStand(_R14, pm, 1);
  v38 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 0x14u);
  v39 = &_R14->pm_flags;
  if ( v38 )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(v39, ACTIVE, 0) )
      goto LABEL_201;
    BG_Suit_GetProneViewHeight(SuitDef);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  xmm1, dword ptr [r14+1E8h]
      vcomiss xmm1, xmm0
    }
    if ( !v40 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [r13+204h]
        vcomiss xmm1, xmm0
      }
      if ( v40 )
      {
LABEL_201:
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_proneToSprintActive, "proneToSprintActive") )
          GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_R14->pm_flags, ACTIVE, 0x37u);
      }
    }
  }
  else
  {
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(v39, ACTIVE, 0x37u);
  }
  if ( v37 || v36 )
  {
    _R14->viewHeightTarget = SuitDef->viewheight_crouch;
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_R14->eFlags, ACTIVE, 3u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_R14->eFlags, ACTIVE, 4u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0x36u);
    v46 = EV_STANCE_FORCE_CROUCH;
    goto LABEL_196;
  }
  if ( v28 && (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 0) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 1u) || BG_ContextMount_IsActive(_R14)) )
  {
    _R14->viewHeightTarget = SuitDef->viewheight_stand;
    BG_ResetForcedStances(_R14);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_R14->eFlags, ACTIVE, 4u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_R14->eFlags, ACTIVE, 3u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0x36u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
    v46 = EV_STANCE_FORCE_STAND;
LABEL_196:
    BG_AddPredictableEventToPlayerstate(v46, 0, pm->cmd.serverTime, pm->weaponMap, _R14);
    goto LABEL_197;
  }
  v47 = 0;
  if ( BG_Turret_IsUsingNonRemoteTurret(_R14) )
  {
    BG_ResetForcedStances(_R14);
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_R14->eFlags, ACTIVE, 5u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_R14->eFlags, ACTIVE, 6u) )
    {
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_R14->eFlags, ACTIVE, 6u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_R14->eFlags, ACTIVE, 5u) )
      {
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0x36u);
        goto LABEL_153;
      }
      v48 = &_R14->pm_flags;
LABEL_88:
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(v48, ACTIVE, 0);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0x36u);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
      goto LABEL_153;
    }
LABEL_101:
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_R14->pm_flags, ACTIVE, 0);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
    goto LABEL_153;
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 0x10u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 0xFu) && !PM_IsPlayerFrozenByWeapon(pm->weaponMap, _R14) && _R14->vehicleState.entity == 2047 && !BG_IsRemoteTurretActive(_R14) )
  {
    if ( _R14->pm_type == 1 )
    {
      PM_HandleDisabledStances(pm, pml);
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R14->otherFlags, ACTIVE, 0xBu) )
        goto LABEL_101;
      v49 = pm->cmd.buttons;
      if ( (v49 & 0x40) != 0 )
        goto LABEL_101;
      v48 = &_R14->pm_flags;
      if ( (v49 & 0x80u) == 0i64 )
        goto LABEL_88;
LABEL_98:
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(v48, ACTIVE, 0);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0x36u);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
      goto LABEL_153;
    }
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R14->otherFlags, ACTIVE, 0xBu) )
    {
      BG_ResetForcedStances(_R14);
      goto LABEL_101;
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 6u) )
    {
      v50 = pm->cmd.buttons;
      if ( (v50 & 0xC0) != 0 )
      {
        pm->cmd.buttons = v50 & 0xFFFFFFFFFFFFFF3Fui64;
        BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_STAND, 0, pm->cmd.serverTime, pm->weaponMap, _R14);
      }
    }
    PM_HandleDisabledStances(pm, pml);
    if ( (pm->cmd.buttons & 0x40) != 0 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 0xFu) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 4u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 3u) )
    {
      if ( _R14->groundEntityNum != 2047 )
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 2u);
      if ( BG_Pmove_PlayerProneAllowed(pm) )
      {
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_R14->pm_flags, ACTIVE, 0);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
        if ( !Slide_IsInSprintDelay(_R14, pm->cmd.serverTime) )
          *(_QWORD *)&_R14->sprintState.sprintRestore = 0i64;
        if ( (pm->cmd.buttons & 0x100000000000000i64) != 0 )
          GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_R14->pm_flags, ACTIVE, 0x36u);
        goto LABEL_153;
      }
      if ( _R14->groundEntityNum == 2047 )
        goto LABEL_153;
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 0) )
      {
        v52 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
        fmt = (char *)_R14;
        weaponMap = pm->weaponMap;
        serverTime = pm->cmd.serverTime;
        v51 = 3;
        if ( !v52 )
        {
          v55 = EV_STANCE_FORCE_STAND;
LABEL_152:
          BG_AddPredictableEventToPlayerstate(v55, v51, serverTime, weaponMap, (playerState_s *)fmt);
          goto LABEL_153;
        }
LABEL_151:
        v55 = EV_STANCE_FORCE_CROUCH;
        goto LABEL_152;
      }
      v51 = 3;
LABEL_150:
      fmt = (char *)_R14;
      weaponMap = pm->weaponMap;
      serverTime = pm->cmd.serverTime;
      goto LABEL_151;
    }
    if ( SLOBYTE(pm->cmd.buttons) >= 0 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 2u) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 4u) )
    {
      v60 = pm->cmd.buttons;
      if ( (v60 & 0x80u) == 0i64 && (v60 & 0x40) == 0 )
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 4u);
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 0) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 2u) )
      {
        if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 1u) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 3u) || v82 )
          goto LABEL_153;
        BgTrace::LegacyTrace(pm->m_trace, pm, &results, &_R14->origin, &_R14->origin, pm->bounds, _R14->clientNum, pm->tracemask & 0xFDFFBFFF);
        if ( !results.allsolid )
        {
          GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
          goto LABEL_153;
        }
        if ( (pm->cmd.buttons & 0x400) != 0 )
          goto LABEL_153;
        v51 = 1;
        goto LABEL_150;
      }
      BgTrace::LegacyTrace(pm->m_trace, pm, &results, &_R14->origin, &_R14->origin, pm->bounds, _R14->clientNum, pm->tracemask & 0xFDFFBFFF);
      if ( !results.allsolid )
      {
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0x36u);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
        goto LABEL_153;
      }
      _RAX = BG_Suit_GetBounds(_R14->suitIndex, PM_EFF_STANCE_DUCKED);
      _RCX = pm->bounds;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rcx], xmm0
        vmovsd  xmm1, qword ptr [rax+10h]
        vmovsd  qword ptr [rcx+10h], xmm1
      }
      BgTrace::LegacyTrace(pm->m_trace, pm, &results, &_R14->origin, &_R14->origin, pm->bounds, _R14->clientNum, pm->tracemask & 0xFDFFBFFF);
      if ( !results.allsolid )
      {
        v48 = &_R14->pm_flags;
        goto LABEL_98;
      }
      if ( (pm->cmd.buttons & 0x400) == 0 )
        BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_PRONE, 1u, pm->cmd.serverTime, pm->weaponMap, _R14);
    }
    else
    {
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 3u);
      if ( PM_IsInAir(pm) )
        goto LABEL_153;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 0) )
      {
        _RAX = BG_Suit_GetBounds(_R14->suitIndex, PM_EFF_STANCE_DUCKED);
        _RCX = pm->bounds;
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rcx], xmm0
          vmovsd  xmm1, qword ptr [rax+10h]
          vmovsd  qword ptr [rcx+10h], xmm1
        }
        BgTrace::LegacyTrace(pm->m_trace, pm, &results, &_R14->origin, &_R14->origin, pm->bounds, _R14->clientNum, pm->tracemask & 0xFDFFBFFF);
        if ( !results.allsolid )
        {
          v48 = &_R14->pm_flags;
          goto LABEL_98;
        }
        if ( (pm->cmd.buttons & 0x400) == 0 )
          BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_PRONE, 2u, pm->cmd.serverTime, pm->weaponMap, _R14);
      }
      else
      {
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
        if ( !Slide_IsInSprintDelay(_R14, pm->cmd.serverTime) )
          *(_QWORD *)&_R14->sprintState.sprintRestore = 0i64;
      }
    }
  }
LABEL_153:
  if ( !_R14->viewHeightLerpTime && !BG_ContextMount_IsActive(_R14) )
  {
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R14->otherFlags, ACTIVE, 0xBu) )
    {
      if ( _R14->viewHeightTarget != SuitDef->viewheight_laststand )
      {
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
          v47 = 1;
        _R14->viewHeightTarget = SuitDef->viewheight_laststand;
        goto LABEL_176;
      }
    }
    else
    {
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 0x1Du) )
      {
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 0) )
        {
          if ( _R14->viewHeightTarget == SuitDef->viewheight_stand )
          {
            _R14->viewHeightTarget = SuitDef->viewheight_crouch;
            goto LABEL_181;
          }
          if ( _R14->viewHeightTarget == BG_Suit_GetProneViewHeight(SuitDef) )
            goto LABEL_181;
          _R14->viewHeightTarget = BG_Suit_GetProneViewHeight(SuitDef);
        }
        else
        {
          viewHeightTarget = _R14->viewHeightTarget;
          viewheight_laststand = SuitDef->viewheight_laststand;
          if ( viewHeightTarget == BG_Suit_GetProneViewHeight(SuitDef) )
          {
            _R14->viewHeightTarget = SuitDef->viewheight_crouch;
          }
          else
          {
            if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 1u) )
            {
              viewheight_crouch = SuitDef->viewheight_crouch;
            }
            else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 0x14u) && Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_enableSprintViewHeight, "enableSprintViewHeight") )
            {
              viewheight_crouch = BG_GetViewHeightSprint(_R14, SuitDef);
            }
            else
            {
              viewheight_crouch = SuitDef->viewheight_stand;
            }
            _R14->viewHeightTarget = viewheight_crouch;
            if ( viewHeightTarget != viewheight_laststand )
              goto LABEL_181;
          }
        }
LABEL_176:
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
        {
          pm->m_flags |= 0x80u;
          if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_playerasm_disable_cancel_torso_stance_change, "playerasm_disable_cancel_torso_stance_change") )
            BG_ClearTorsoAnim(pm->m_bgHandler, _R14);
          if ( v47 )
            BG_AnimScriptEvent(pm->m_bgHandler, _R14, ANIM_ET_ENTER_LAST_STAND, 0, 1, &pml->holdrand);
        }
        goto LABEL_181;
      }
      Slide_SetSlideViewHeight(pm);
    }
  }
LABEL_181:
  PM_ViewHeightAdjust(pm, pml);
  v68 = PM_GetEffectiveStance(_R14) - 1;
  v69 = &_R14->eFlags;
  if ( v68 )
  {
    v70 = v68 - 1;
    if ( v70 )
    {
      if ( v70 == 1 )
      {
        GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(v69, ACTIVE, 4u);
        GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_R14->eFlags, ACTIVE, 3u);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_R14->pm_flags, ACTIVE, 0);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0x36u);
        v71 = PM_EFF_STANCE_LASTSTANDCRAWL;
      }
      else
      {
        GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(v69, ACTIVE, 3u);
        GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_R14->eFlags, ACTIVE, 4u);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0x36u);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
        v71 = PM_EFF_STANCE_DEFAULT;
      }
    }
    else
    {
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(v69, ACTIVE, 3u);
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_R14->eFlags, ACTIVE, 4u);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0);
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 0x36u);
      v71 = PM_EFF_STANCE_DUCKED;
    }
  }
  else
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(v69, ACTIVE, 4u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_R14->eFlags, ACTIVE, 3u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_R14->pm_flags, ACTIVE, 0);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_R14->pm_flags, ACTIVE, 1u);
    v71 = PM_EFF_STANCE_PRONE;
  }
  _RAX = BG_Suit_GetBounds(_R14->suitIndex, v71);
  _RCX = pm->bounds;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
    vmovsd  xmm1, qword ptr [rax+10h]
    vmovsd  qword ptr [rcx+10h], xmm1
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 0x1Du) )
  {
    _RAX = BG_Suit_GetBounds(_R14->suitIndex, PM_EFF_STANCE_DUCKED);
    _RCX = pm->bounds;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rcx+10h], xmm1
    }
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 0) && !v83 )
    PM_CheckDuck_InitProne(pm);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 0x36u) )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [r13+204h]
      vcomiss xmm0, dword ptr [r14+1E8h]
    }
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_R14->eFlags, ACTIVE, 4u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_R14->eFlags, ACTIVE, 3u);
  }
LABEL_198:
  BgScopedCrouchAndProneBlendMapUpdate(pm, pml);
}

/*
==============
PM_CheckDuck_InitProne
==============
*/
void PM_CheckDuck_InitProne(pmove_t *pm)
{
  BgTrace *m_trace; 
  int tracemask; 
  BgTrace *v15; 
  BgTrace *v41; 
  char v51; 
  const dvar_t *v52; 
  char v56; 
  unsigned int contentMask; 
  unsigned int contentMaska; 
  int v65; 
  vec3_t end; 
  vec3_t v67; 
  trace_t results; 
  char v69; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6482, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6483, ASSERT_TYPE_ASSERT, "(pm->bounds)", (const char *)&queryFormat, "pm->bounds") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6485, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6487, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::PRONE ))", "%s\n\t%08x %08x", "ps->pm_flags.TestFlag( PMoveFlagsCommon::PRONE )", _RBX->pm_flags.m_flags[0], _RBX->pm_flags.m_flags[1]) )
    __debugbreak();
  if ( (pm->cmd.forwardmove || pm->cmd.rightmove) && !BG_UsingSniperScope(pm->weaponMap, _RBX) && _RBX->vehicleState.entity == 2047 )
  {
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_RBX->pm_flags, ACTIVE, 0xEu);
    PM_ExitAimDownSight(pm);
  }
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 1u) )
  {
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10587, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0) )
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_RBX->pm_flags, ACTIVE, 0xEu);
  }
  _RSI = &_RBX->origin;
  __asm { vmovss  xmm0, dword ptr [rsi] }
  m_trace = pm->m_trace;
  contentMask = pm->tracemask & 0xFDFFBFFF;
  __asm
  {
    vmovss  dword ptr [rbp+57h+end], xmm0
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rbp+57h+end+4], xmm1
    vmovss  xmm0, dword ptr [rsi+8]
    vaddss  xmm2, xmm0, cs:__real@41200000
    vmovss  dword ptr [rbp+57h+end+8], xmm2
  }
  BgTrace::LegacyTrace(m_trace, pm, &results, &_RBX->origin, &end, pm->bounds, _RBX->clientNum, contentMask);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+end]
    vsubss  xmm1, xmm0, dword ptr [rsi]
    vmovss  xmm5, [rbp+57h+results.fraction]
  }
  tracemask = pm->tracemask;
  v15 = pm->m_trace;
  __asm
  {
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm0, xmm1, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rbp+57h+end+4]
    vmovss  dword ptr [rbp+57h+end], xmm0
    vsubss  xmm0, xmm1, dword ptr [rsi+4]
    vmulss  xmm2, xmm0, xmm5
    vaddss  xmm3, xmm2, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rbp+57h+end+8]
    vmovss  dword ptr [rbp+57h+end+4], xmm3
    vsubss  xmm1, xmm0, dword ptr [rsi+8]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm3, xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+57h+end+8], xmm3
  }
  BgTrace::LegacyTrace(v15, pm, &results, &end, &_RBX->origin, pm->bounds, _RBX->clientNum, tracemask & 0xFDFFBFFF);
  __asm
  {
    vmovss  xmm4, [rbp+57h+results.fraction]
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm0, xmm0, dword ptr [rbp+57h+end]
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, dword ptr [rbp+57h+end]
    vmovss  dword ptr [rsi], xmm2
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm0, xmm0, dword ptr [rbp+57h+end+4]
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, dword ptr [rbp+57h+end+4]
    vmovss  dword ptr [rsi+4], xmm2
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm0, xmm0, dword ptr [rbp+57h+end+8]
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, dword ptr [rbp+57h+end+8]
    vmovss  dword ptr [rsi+8], xmm2
    vmovss  xmm0, dword ptr [rbx+1DCh]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v65 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6509, ASSERT_TYPE_ASSERT, "(!IS_NAN( ps->viewangles[YAW] ))", (const char *)&queryFormat, "!IS_NAN( ps->viewangles[YAW] )") )
    __debugbreak();
  _RBX->proneDirection = _RBX->viewangles.v[1];
  __asm { vmovss  xmm0, dword ptr [rsi] }
  v41 = pm->m_trace;
  contentMaska = pm->tracemask & 0xFDFFBFFF;
  __asm
  {
    vmovss  dword ptr [rbp+57h+var_A8], xmm0
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rbp+57h+var_A8+4], xmm1
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm2, xmm0, cs:__real@3e800000
    vmovss  dword ptr [rbp+57h+var_A8+8], xmm2
  }
  BgTrace::LegacyTrace(v41, pm, &results, &_RBX->origin, &v67, pm->bounds, _RBX->clientNum, contentMaska);
  if ( !results.startsolid )
  {
    __asm
    {
      vmovss  xmm0, [rbp+57h+results.fraction]
      vcomiss xmm0, cs:__real@3f800000
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0; angle1
    vmovss  dword ptr [rbx+270h], xmm0
    vmovss  xmm1, dword ptr [rbx+1D8h]; angle2
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  _RDI = DCONST_DVARFLT_player_prone_view_pitch_down;
  __asm { vmovaps xmm6, xmm0 }
  if ( !DCONST_DVARFLT_player_prone_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_down") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
    vcomiss xmm6, xmm1
  }
  if ( v51 )
  {
    v52 = DCONST_DVARFLT_player_prone_view_pitch_down;
    if ( !DCONST_DVARFLT_player_prone_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_down") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v52);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1D8h]
      vsubss  xmm1, xmm0, dword ptr [rdi+28h]
      vmovss  dword ptr [rbx+274h], xmm1
    }
  }
  else
  {
    _RDI = DCONST_DVARFLT_player_prone_view_pitch_up;
    if ( !DCONST_DVARFLT_player_prone_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_up") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vcomiss xmm6, dword ptr [rdi+28h] }
    if ( v51 | v56 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+270h]
        vmovss  dword ptr [rbx+274h], xmm0
      }
    }
    else
    {
      _RDI = DCONST_DVARFLT_player_prone_view_pitch_up;
      if ( !DCONST_DVARFLT_player_prone_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_up") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vaddss  xmm1, xmm0, dword ptr [rbx+1D8h]
        vmovss  dword ptr [rbx+274h], xmm1
      }
    }
  }
  _R11 = &v69;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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
  bool v6; 
  bool v7; 
  BgGroundState *ground; 
  unsigned int v9; 
  char v22; 
  vec3_t outUp; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10686, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10686, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  p_pm_flags = &ps->pm_flags;
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(p_pm_flags, ACTIVE, 7u);
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(p_pm_flags, ACTIVE, 8u);
  v6 = PM_IsInAir(pm);
  v7 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 6u);
  if ( !pm->ground && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10695, ASSERT_TYPE_ASSERT, "( pm->ground ) != ( nullptr )", "%s != %s\n\t%p, %p", "pm->ground", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !v6 && !v7 )
  {
    ground = pm->ground;
    if ( ground->groundPlane )
    {
      if ( (ground->trace.surfaceFlags & 0x200) != 0 )
      {
        v9 = 8;
LABEL_20:
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(p_pm_flags, ACTIVE, v9);
        return;
      }
      __asm { vmovaps [rsp+88h+var_18], xmm6 }
      WorldUpReferenceFrame::GetUpVector(&pm->refFrame, &outUp);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+88h+outUp+4]
        vmovss  xmm1, dword ptr [rsp+88h+outUp]
      }
      _RBX = DCONST_DVARFLT_player_slope_minAngle;
      __asm
      {
        vmulss  xmm3, xmm0, dword ptr [rax+14h]
        vmulss  xmm2, xmm1, dword ptr [rax+10h]
        vmovss  xmm0, dword ptr [rsp+88h+outUp+8]
        vmulss  xmm1, xmm0, dword ptr [rax+18h]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm6, xmm4, xmm1
      }
      if ( !DCONST_DVARFLT_player_slope_minAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_minAngle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
      }
      *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
      __asm
      {
        vcomiss xmm6, xmm0
        vmovaps xmm6, [rsp+88h+var_18]
      }
      if ( v22 )
      {
        v9 = 7;
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
  float v4; 

  __asm
  {
    vmovss  xmm0, cs:__real@3a83126f
    vmovss  [rsp+38h+var_18], xmm0
  }
  PM_ClipVelocityOverClip(NULL, in, normal, NULL, v4, out);
}

/*
==============
PM_ClipVelocityOverClip
==============
*/
void PM_ClipVelocityOverClip(const pmove_t *pm, const vec3_t *in, const vec3_t *normal, const vec3_t *walkableRefUp, const float overclip, vec3_t *out)
{
  const dvar_t *v13; 
  bool v16; 
  __int64 v48; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
  }
  _R12 = out;
  _RSI = walkableRefUp;
  _RBX = normal;
  v13 = DCONST_DVARBOOL_playerCharacterCollisionJumpCornerFix;
  _R14 = in;
  v16 = 1;
  if ( !DCONST_DVARBOOL_playerCharacterCollisionJumpCornerFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionJumpCornerFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled && pm )
    v16 = !BG_IsInAir(pm->ps, 0);
  __asm { vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  v48 = 0i64;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vmovss  [rsp+0C8h+var_88], xmm8
  }
  if ( _RSI && v16 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rsi+4]
      vmulss  xmm3, xmm0, dword ptr [rsi]
      vmulss  xmm2, xmm1, dword ptr [rbx+4]
      vmovss  xmm0, dword ptr [rsi+8]
      vmulss  xmm1, xmm0, dword ptr [rbx+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm6, xmm4, xmm1
      vcomiss xmm6, cs:__real@3f333333
    }
  }
  __asm
  {
    vmovss  xmm6, dword ptr [r14]
    vmovss  xmm0, dword ptr [rbx+4]
    vmulss  xmm1, xmm0, dword ptr [r14+4]
    vmulss  xmm2, xmm6, dword ptr [rbx]
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, dword ptr [rbx+8]
    vmulss  xmm0, xmm2, dword ptr [r14+8]
    vaddss  xmm4, xmm3, xmm0
    vandps  xmm1, xmm4, xmm7
    vmulss  xmm0, xmm1, [rsp+0C8h+overclip]
    vsubss  xmm3, xmm0, xmm4
    vmulss  xmm1, xmm3, dword ptr [rbx]
    vaddss  xmm2, xmm1, xmm6
    vmovss  dword ptr [r12], xmm2
    vmulss  xmm0, xmm3, dword ptr [rbx+4]
    vaddss  xmm1, xmm0, dword ptr [r14+4]
    vmovss  dword ptr [r12+4], xmm1
    vmulss  xmm0, xmm3, dword ptr [rbx+8]
    vaddss  xmm1, xmm0, dword ptr [r14+8]
    vmovss  dword ptr [r12+8], xmm1
    vmovaps xmm6, [rsp+0C8h+var_38]
    vmovaps xmm7, [rsp+0C8h+var_48]
    vmovaps xmm8, [rsp+0C8h+var_58]
  }
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
  bool v6; 
  const dvar_t *v7; 
  char v15; 

  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 840, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  v6 = !SuitDef->isMovementCameraIndependent;
  v7 = DCONST_DVARINT_player_sprintForwardMinimum;
  if ( v6 )
  {
    if ( !DCONST_DVARINT_player_sprintForwardMinimum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintForwardMinimum") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( cmd->forwardmove >= v7->current.integer )
      return 1;
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovaps [rsp+58h+var_18], xmm6
      vcvtsi2ss xmm0, xmm0, ecx
      vsqrtss xmm6, xmm0, xmm0
    }
    if ( !DCONST_DVARINT_player_sprintForwardMinimum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintForwardMinimum") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
      vcomiss xmm6, xmm0
      vmovaps xmm6, [rsp+58h+var_18]
    }
    if ( !v15 )
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
  int v6; 
  int v7; 
  int pm_type; 
  const dvar_t *v23; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2639, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = cmd->rightmove * cmd->rightmove;
  v7 = cmd->forwardmove * cmd->forwardmove;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vsqrtss xmm2, xmm0, xmm0
    vcvtss2sd xmm1, xmm2, xmm2
    vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( __CFADD__(v6, v7) || v6 + v7 == 0 )
  {
    __asm { vxorps  xmm2, xmm2, xmm2 }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r9d
      vdivss  xmm2, xmm0, xmm2
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3c010204
    vmulss  xmm6, xmm1, xmm2
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xBu) )
    __asm { vmulss  xmm6, xmm6, cs:__real@3ecccccd }
  pm_type = ps->pm_type;
  switch ( pm_type )
  {
    case 2:
      __asm
      {
        vmulss  xmm0, xmm6, cs:__real@40400000
        vmovaps xmm6, [rsp+58h+var_18]
      }
      break;
    case 3:
      __asm
      {
        vmulss  xmm0, xmm6, cs:__real@40c00000
        vmovaps xmm6, [rsp+58h+var_18]
      }
      break;
    case 5:
      v23 = DCONST_DVARFLT_player_spectateSpeedScale;
      if ( !DCONST_DVARFLT_player_spectateSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_spectateSpeedScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+28h]
        vmovaps xmm6, [rsp+58h+var_18]
      }
      break;
    default:
      __asm
      {
        vmovaps xmm0, xmm6
        vmovaps xmm6, [rsp+58h+var_18]
      }
      break;
  }
  return *(float *)&_XMM0;
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
  const dvar_t *v10; 
  const dvar_t *v14; 
  int ProneViewHeight; 
  char v19; 
  int viewheight_crouch; 
  int v25; 
  __int32 v30; 
  __int32 v31; 
  const dvar_t *v33; 

  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2712, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2714, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x37u) )
  {
    _RBX = DCONST_DVARFLT_proneToSprintSpeedScale;
    if ( !DCONST_DVARFLT_proneToSprintSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "proneToSprintSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm6
      vmovaps [rsp+98h+var_48], xmm7
      vmovaps [rsp+98h+var_58], xmm8
    }
    _R15 = BG_GetSuitDef(ps->suitIndex);
    if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2671, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    v10 = DCONST_DVARMPFLT_player_crouchSpeedScale;
    if ( !DCONST_DVARMPFLT_player_crouchSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_crouchSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    __asm
    {
      vmovss  xmm0, dword ptr [r15+4Ch]
      vmulss  xmm7, xmm0, dword ptr [rbx+28h]
    }
    _R15 = BG_GetSuitDef(ps->suitIndex);
    if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2682, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    v14 = DCONST_DVARMPFLT_player_proneSpeedScale;
    if ( !DCONST_DVARMPFLT_player_proneSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_proneSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    __asm
    {
      vmovss  xmm0, dword ptr [r15+50h]
      vmulss  xmm6, xmm0, dword ptr [rbx+28h]
    }
    ProneViewHeight = BG_Suit_GetProneViewHeight(SuitDef);
    *(float *)&_XMM0 = PM_GetViewHeightLerp(pm, SuitDef->viewheight_crouch, ProneViewHeight);
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vucomiss xmm0, xmm8
    }
    if ( v19 )
    {
      viewheight_crouch = SuitDef->viewheight_crouch;
      v25 = BG_Suit_GetProneViewHeight(SuitDef);
      *(float *)&_XMM0 = PM_GetViewHeightLerp(pm, v25, viewheight_crouch);
      __asm { vucomiss xmm0, xmm8 }
      if ( v19 )
      {
        if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2737, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
          __debugbreak();
        v30 = PM_GetEffectiveStance(pm->ps) - 1;
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( v31 )
          {
            if ( v31 == 1 )
            {
              _RDI = BG_GetSuitDef(ps->suitIndex);
              if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2693, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
                __debugbreak();
              v33 = DCONST_DVARFLT_player_lastStandCrawlSpeedScale;
              if ( !DCONST_DVARFLT_player_lastStandCrawlSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_lastStandCrawlSpeedScale") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v33);
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+54h]
                vmulss  xmm0, xmm0, dword ptr [rbx+28h]
              }
            }
            else
            {
              __asm { vmovss  xmm0, cs:__real@3f800000 }
            }
          }
          else
          {
            __asm { vmovaps xmm0, xmm7 }
          }
        }
        else
        {
          __asm { vmovaps xmm0, xmm6 }
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm1, cs:__real@3f800000
          vsubss  xmm2, xmm1, xmm0
          vmulss  xmm3, xmm2, xmm6
          vmulss  xmm0, xmm0, xmm7
          vaddss  xmm0, xmm3, xmm0
        }
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000
        vsubss  xmm2, xmm1, xmm0
        vmulss  xmm3, xmm2, xmm7
        vmulss  xmm0, xmm0, xmm6
        vaddss  xmm0, xmm3, xmm0
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+98h+var_48]
      vmovaps xmm6, [rsp+98h+var_38]
      vmovaps xmm8, [rsp+98h+var_58]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
PM_CmdScale_Walk
==============
*/
void PM_CmdScale_Walk(const pmove_t *pm, const pml_t *pml, const usercmd_s *cmd, float *outForwardScale, float *outSideScale)
{
  playerState_s *ps; 
  char v16; 
  int v17; 
  int v18; 
  unsigned int v19; 
  unsigned int v21; 
  bool v22; 
  int pm_type; 
  const dvar_t *v36; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v51; 
  bool v52; 
  bool v53; 
  const usercmd_s *v57; 
  char v96; 
  bool CanJog; 
  const dvar_t *v104; 
  const char *v105; 
  bool v116; 
  double v121; 
  double v122; 
  double v123; 
  double v124; 
  double v125; 
  double v126; 
  bool v127; 
  float moveSpeedScaleOut; 
  float adsMoveSpeedScaleOut; 
  const usercmd_s *v130; 
  const pml_t *v131; 
  const SuitDef *SuitDef; 
  vec3_t wishDir; 

  __asm { vmovaps [rsp+108h+var_58], xmm7 }
  _R15 = outSideScale;
  _RSI = outForwardScale;
  v130 = cmd;
  v131 = pml;
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
  v127 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du);
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
    goto LABEL_19;
  *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(pm->weaponMap, pm->ps);
  __asm { vcomiss xmm0, xmm7 }
  if ( v96 | v22 )
LABEL_19:
    v16 = 0;
  else
    v16 = 1;
  __asm { vmovaps [rsp+108h+var_48], xmm6 }
  *_RSI = 0.0;
  *outSideScale = 0.0;
  v17 = cmd->rightmove * cmd->rightmove;
  v18 = cmd->forwardmove * cmd->forwardmove;
  v19 = abs8(cmd->rightmove);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  v21 = abs8(cmd->forwardmove);
  v22 = v17 + v18 == 0;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, ecx
    vsqrtss xmm2, xmm0, xmm0
    vcvtss2sd xmm1, xmm2, xmm2
    vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( !__CFADD__(v17, v18) && !v22 )
  {
    v22 = v21 == v19;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r9d
      vdivss  xmm2, xmm0, xmm2
      vcomiss xmm2, xmm7
    }
    if ( v21 > v19 )
    {
      __asm
      {
        vmulss  xmm0, xmm2, cs:__real@3c010204
        vmovaps [rsp+108h+var_68], xmm8
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmovaps [rsp+108h+var_78], xmm9
        vmulss  xmm6, xmm1, xmm0
        vmovss  xmm9, cs:__real@3ecccccd
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xBu) || v16 )
        __asm { vmulss  xmm6, xmm6, xmm9 }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) || v127 )
      {
        PM_SprintScale(ps);
        __asm { vmulss  xmm6, xmm6, xmm0 }
      }
      pm_type = ps->pm_type;
      if ( pm_type == 2 )
      {
        __asm { vmulss  xmm6, xmm6, cs:__real@40400000 }
      }
      else if ( pm_type == 3 )
      {
        __asm { vmulss  xmm6, xmm6, cs:__real@40c00000 }
      }
      else
      {
        PM_CmdScaleForStance(pm);
        __asm { vmulss  xmm6, xmm6, xmm0 }
      }
      if ( BG_IsSuperSprinting(ps) )
      {
        v36 = DCONST_DVARFLT_superSprintSpeedScale;
        if ( !DCONST_DVARFLT_superSprintSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintSpeedScale") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v36);
        __asm { vmulss  xmm6, xmm6, dword ptr [r14+28h] }
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u) && BG_GameInterface_HasPerk_FastCrouch(ps) )
      {
        BG_GameInterface_FastCrouch_GetSpeedScale();
        __asm { vmulss  xmm6, xmm6, xmm0 }
      }
      if ( ps->damageTimer )
      {
        _R14 = DCONST_DVARFLT_player_dmgtimer_maxTime;
        if ( !DCONST_DVARFLT_player_dmgtimer_maxTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_dmgtimer_maxTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_R14);
        __asm
        {
          vmovss  xmm8, dword ptr [r14+28h]
          vucomiss xmm8, xmm7
        }
        if ( v22 )
        {
          __asm
          {
            vmovss  xmm8, cs:__real@3f800000
            vmovaps xmm0, xmm8
          }
        }
        else
        {
          _R14 = DCONST_DVARFLT_player_dmgtimer_minScale;
          if ( !DCONST_DVARFLT_player_dmgtimer_minScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_dmgtimer_minScale") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_R14);
          __asm
          {
            vmovss  xmm0, dword ptr [r14+28h]
            vdivss  xmm2, xmm0, xmm8
            vmovss  xmm8, cs:__real@3f800000
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, r13d
            vmulss  xmm3, xmm2, xmm1
            vsubss  xmm0, xmm8, xmm3
          }
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm8, cs:__real@3f800000
          vmovaps xmm0, xmm8
        }
      }
      __asm { vmulss  xmm6, xmm6, xmm0 }
      CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
      v51 = BG_UsingAlternate(ps);
      BG_GetMoveSpeedScale(pm->weaponMap, ps, CurrentWeaponForPlayer, v51, &moveSpeedScaleOut, &adsMoveSpeedScaleOut);
      v52 = !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xBu) && !v16;
      v53 = CurrentWeaponForPlayer->weaponIdx == 0;
      if ( CurrentWeaponForPlayer->weaponIdx )
      {
        __asm
        {
          vmovss  xmm0, [rsp+108h+moveSpeedScaleOut]
          vcomiss xmm0, xmm7
        }
        if ( CurrentWeaponForPlayer->weaponIdx )
        {
          v53 = !v52;
          if ( v52 )
            goto LABEL_60;
        }
        __asm
        {
          vmovss  xmm0, [rsp+108h+var_B0]
          vcomiss xmm0, xmm7
        }
        if ( !v53 )
LABEL_60:
          __asm { vmulss  xmm6, xmm6, xmm0 }
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x15u) && BG_GetShellshockParms(ps->shellshockIndex)->movement.affect )
        __asm { vmulss  xmm6, xmm6, xmm9 }
      __asm { vmovss  xmm1, cs:__real@40a00000; maxAbsValueSize }
      MSG_UnpackUnsignedFloat(ps->moveSpeedScaleMultiplier, *(float *)&_XMM1, 0xCu);
      v57 = v130;
      __asm { vmulss  xmm6, xmm6, xmm0 }
      Slide_SlideOutSpeedScale(ps, v130->serverTime);
      __asm { vmulss  xmm6, xmm6, xmm0 }
      Slide_SlideInSpeedScale(ps, v57->serverTime);
      _EAX = v57->rightmove;
      __asm
      {
        vmulss  xmm9, xmm6, xmm0
        vmovd   xmm2, eax
      }
      _EAX = v57->forwardmove;
      __asm
      {
        vcvtdq2ps xmm2, xmm2
        vmovd   xmm3, eax
        vcvtdq2ps xmm3, xmm3
        vmulss  xmm0, xmm2, dword ptr [rax+0Ch]
        vmulss  xmm1, xmm3, dword ptr [rax]
        vaddss  xmm4, xmm1, xmm0
        vmulss  xmm1, xmm2, dword ptr [rax+10h]
        vmulss  xmm0, xmm3, dword ptr [rax+4]
        vaddss  xmm5, xmm1, xmm0
        vmulss  xmm1, xmm2, dword ptr [rax+14h]
        vmulss  xmm0, xmm3, dword ptr [rax+8]
        vaddss  xmm6, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm0, xmm2, xmm2
        vcvtss2sd xmm3, xmm0, xmm0
        vcomisd xmm3, cs:__real@3eb0c6f7a0b5ed8d
        vmovss  dword ptr [rsp+108h+wishDir], xmm4
        vmovss  dword ptr [rsp+108h+wishDir+4], xmm5
        vmovss  dword ptr [rsp+108h+wishDir+8], xmm6
      }
      if ( v96 | v22 )
      {
        __asm
        {
          vmovsd  xmm0, cs:__real@3eb0c6f7a0000000
          vmovsd  [rsp+108h+var_C8], xmm3
          vmovsd  [rsp+108h+var_D0], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2917, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( Vec3Length( roughWishDir ) )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "Vec3Length( roughWishDir )", v121, v124) )
          __debugbreak();
        __asm
        {
          vmovss  xmm4, dword ptr [rsp+108h+wishDir]
          vmovss  xmm5, dword ptr [rsp+108h+wishDir+4]
          vmovss  xmm6, dword ptr [rsp+108h+wishDir+8]
        }
      }
      __asm
      {
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
        vdivss  xmm2, xmm8, xmm0
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rsp+108h+wishDir], xmm0
        vmulss  xmm0, xmm6, xmm2
        vmulss  xmm1, xmm5, xmm2
        vmovss  dword ptr [rsp+108h+wishDir+8], xmm0
        vmovss  dword ptr [rsp+108h+wishDir+4], xmm1
      }
      PM_Slope_GetSpeedScale(&wishDir, pm);
      __asm
      {
        vmovaps xmm8, [rsp+108h+var_68]
        vmulss  xmm6, xmm9, xmm0
        vmovaps xmm9, [rsp+108h+var_78]
      }
      *_RSI = 1.0;
      _EAX = v57->forwardmove;
      __asm
      {
        vmovd   xmm0, eax
        vcvtdq2ps xmm0, xmm0
        vcomiss xmm0, xmm7
      }
      if ( v96 | v22 || (CanJog = BG_CanJog(pm->weaponMap, ps), v96 = 0, !CanJog) )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vcomiss xmm0, xmm7
        }
        if ( !v96 )
          goto LABEL_78;
        v104 = DCONST_DVARFLT_player_backSpeedScale;
        if ( !DCONST_DVARFLT_player_backSpeedScale )
        {
          v105 = "player_backSpeedScale";
LABEL_75:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v105) )
            __debugbreak();
        }
      }
      else
      {
        v104 = DCONST_DVARFLT_player_jogForwardSpeedScale;
        if ( !DCONST_DVARFLT_player_jogForwardSpeedScale )
        {
          v105 = "player_jogForwardSpeedScale";
          goto LABEL_75;
        }
      }
      Dvar_CheckFrontendServerThread(v104);
      *_RSI = v104->current.value;
LABEL_78:
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rsi]
        vmovss  dword ptr [rsi], xmm0
      }
      _RBX = DCONST_DVARFLT_player_strafeSpeedScale;
      if ( !DCONST_DVARFLT_player_strafeSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_strafeSpeedScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vmovss  dword ptr [r15], xmm0
      }
      if ( v127 )
      {
        _RAX = SuitDef;
        __asm { vmovss  xmm0, dword ptr [rax+0F0h] }
      }
      __asm
      {
        vmulss  xmm0, xmm0, xmm6
        vmovss  dword ptr [r15], xmm0
      }
      goto LABEL_90;
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vucomiss xmm0, xmm7
  }
  if ( !v22 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vxorpd  xmm6, xmm6, xmm6
      vmovsd  [rsp+108h+var_C8], xmm6
      vmovsd  [rsp+108h+var_D0], xmm0
    }
    v116 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2810, ASSERT_TYPE_ASSERT, "( *outForwardScale ) == ( 0.0f )", "%s == %s\n\t%g, %g", "*outForwardScale", "0.0f", v122, v125);
    if ( v116 )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [r15]
      vucomiss xmm0, xmm7
    }
    if ( v116 )
    {
      __asm
      {
        vmovsd  [rsp+108h+var_C8], xmm6
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+108h+var_D0], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2811, ASSERT_TYPE_ASSERT, "( *outSideScale ) == ( 0.0f )", "%s == %s\n\t%g, %g", "*outSideScale", "0.0f", v123, v126) )
        __debugbreak();
    }
  }
LABEL_90:
  __asm
  {
    vmovaps xmm6, [rsp+108h+var_48]
    vmovaps xmm7, [rsp+108h+var_58]
  }
}

/*
==============
PM_DamageScale_Walk
==============
*/

float __fastcall PM_DamageScale_Walk(int damage_timer, double _XMM1_8)
{
  char v7; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !damage_timer )
    goto LABEL_10;
  _RBX = DCONST_DVARFLT_player_dmgtimer_maxTime;
  if ( !DCONST_DVARFLT_player_dmgtimer_maxTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_dmgtimer_maxTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+28h]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
  }
  if ( v7 )
  {
LABEL_10:
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  else
  {
    _RBX = DCONST_DVARFLT_player_dmgtimer_minScale;
    if ( !DCONST_DVARFLT_player_dmgtimer_minScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_dmgtimer_minScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vdivss  xmm2, xmm0, xmm6
      vmovss  xmm0, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, edi
      vmulss  xmm3, xmm2, xmm1
      vsubss  xmm0, xmm0, xmm3
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return *(float *)&_XMM0;
}

/*
==============
PM_DeadMove
==============
*/
void PM_DeadMove(pmove_t *pm, pml_t *pml)
{
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_DeadMove");
  if ( !pm )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4662, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm", -2i64) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4663, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
  }
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4663, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( pm->ground->walking && !BG_IsPlayerSwimming(_RBX) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+40h]
      vmovss  xmm4, dword ptr [rbx+3Ch]
      vmovss  xmm3, dword ptr [rbx+44h]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm0, xmm0
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vsubss  xmm5, xmm3, cs:__real@41700000
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm5, xmm0
    }
    *(_QWORD *)_RBX->velocity.v = 0i64;
    _RBX->velocity.v[2] = 0.0;
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
  const dvar_t *v10; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  BOOL walkable; 
  _BOOL8 isExtrapolation; 
  bool v36; 
  const char *v37; 
  const char *v38; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 

  v10 = DCONST_DVARBOOL_debugMispredict;
  if ( !DCONST_DVARBOOL_debugMispredict && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugMispredict") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    v14 = DCONST_DVARINT_debugMispredictSpecificId;
    if ( !DCONST_DVARINT_debugMispredictSpecificId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugMispredictSpecificId") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.integer <= -1 )
      goto LABEL_13;
    v15 = DCONST_DVARINT_debugMispredictSpecificId;
    if ( !DCONST_DVARINT_debugMispredictSpecificId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugMispredictSpecificId") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.integer == uniqueId )
    {
LABEL_13:
      v16 = DCONST_DVARINT_debugMispredictSpecificThread;
      if ( !DCONST_DVARINT_debugMispredictSpecificThread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugMispredictSpecificThread") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( v16->current.integer <= -1 )
        goto LABEL_23;
      v17 = DCONST_DVARINT_debugMispredictSpecificThread;
      if ( !DCONST_DVARINT_debugMispredictSpecificThread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugMispredictSpecificThread") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      if ( (v17->current.integer || pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler)) && !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
      {
LABEL_23:
        _RSI = pm->ps;
        _RAX = pm->ground;
        __asm
        {
          vmovaps [rsp+108h+var_28], xmm6
          vmovss  xmm6, dword ptr [rax+18h]
        }
        walkable = _RAX->trace.walkable;
        isExtrapolation = pm->isExtrapolation;
        __asm
        {
          vmovaps [rsp+108h+var_38], xmm7
          vmovss  xmm7, dword ptr [rsi+44h]
          vmovaps [rsp+108h+var_48], xmm8
          vmovss  xmm8, dword ptr [rsi+40h]
          vmovaps [rsp+108h+var_58], xmm9
          vmovss  xmm9, dword ptr [rsi+3Ch]
          vmovaps [rsp+108h+var_68], xmm10
          vmovss  xmm10, dword ptr [rsi+38h]
          vmovaps [rsp+108h+var_78], xmm11
          vmovss  xmm11, dword ptr [rsi+34h]
          vmovaps [rsp+108h+var_88], xmm12
          vmovss  xmm12, dword ptr [rsi+30h]
          vcvtss2sd xmm6, xmm6, xmm6
          vcvtss2sd xmm7, xmm7, xmm7
          vcvtss2sd xmm8, xmm8, xmm8
          vcvtss2sd xmm9, xmm9, xmm9
          vcvtss2sd xmm10, xmm10, xmm10
          vcvtss2sd xmm11, xmm11, xmm11
          vcvtss2sd xmm12, xmm12, xmm12
        }
        v36 = !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler);
        v37 = "server";
        v38 = (char *)&queryFormat.fmt + 3;
        if ( !v36 )
          v37 = "client";
        if ( message )
          v38 = message;
        __asm
        {
          vmovsd  [rsp+108h+var_B0], xmm6
          vmovsd  [rsp+108h+var_B8], xmm7
          vmovsd  [rsp+108h+var_C0], xmm8
          vmovsd  [rsp+108h+var_C8], xmm9
          vmovsd  [rsp+108h+var_D0], xmm10
          vmovsd  [rsp+108h+var_D8], xmm11
          vmovsd  [rsp+108h+var_E0], xmm12
        }
        Com_Printf(0, "\nTrack Mispredict: %d %d %s: %f %f %f: %f %f %f: %f %d: %d %s", (unsigned int)uniqueId, (unsigned int)_RSI->serverTime, v37, v46, v47, v48, v49, v50, v51, v52, walkable, isExtrapolation, v38);
        __asm
        {
          vmovaps xmm12, [rsp+108h+var_88]
          vmovaps xmm11, [rsp+108h+var_78]
          vmovaps xmm10, [rsp+108h+var_68]
          vmovaps xmm9, [rsp+108h+var_58]
          vmovaps xmm8, [rsp+108h+var_48]
          vmovaps xmm7, [rsp+108h+var_38]
          vmovaps xmm6, [rsp+108h+var_28]
        }
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
  const dvar_t *v7; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1315, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  MaxSprintTime = BG_GetMaxSprintTime(pm->weaponMap, pm->ps);
  if ( MaxSprintTime )
  {
    _RDI = DCONST_DVARFLT_player_sprintMinActivationTime;
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    if ( !DCONST_DVARFLT_player_sprintMinActivationTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintMinActivationTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    if ( (pm->cmd.buttons & 0x800000000000i64) != 0 )
    {
      v7 = DVARFLT_superSprintMinActivationChargePercent;
      if ( !DVARFLT_superSprintMinActivationChargePercent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintMinActivationChargePercent") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, esi
        vmulss  xmm0, xmm0, dword ptr [rdi+28h]
        vmulss  xmm6, xmm0, cs:__real@3a83126f
      }
    }
    MaxSprintTime = PM_GetSprintLeft(pm->weaponMap, pm, pm->cmd.serverTime);
    __asm
    {
      vmulss  xmm0, xmm6, cs:__real@447a0000
      vmovaps xmm6, [rsp+58h+var_18]
      vcvttss2si ecx, xmm0
    }
    LOBYTE(MaxSprintTime) = MaxSprintTime >= _ECX;
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
  SuitAnimType SuitAnimIndexFromPlayerState; 
  int clientNum; 
  int torsoTimer; 
  int v31; 
  int v32; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9449, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9450, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  _RBX = pm->ps;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( _RBX->legsTimer > 0 )
    {
      SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(_RBX);
      if ( BG_ShouldScaleTimedAnim(_RBX->legsAnim & 0xFFFFEFFF, SuitAnimIndexFromPlayerState) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+30h]
          vsubss  xmm3, xmm0, dword ptr [rdi+40h]
          vmovss  xmm1, dword ptr [rbx+34h]
          vsubss  xmm2, xmm1, dword ptr [rdi+44h]
          vmovss  xmm0, dword ptr [rbx+38h]
          vsubss  xmm4, xmm0, dword ptr [rdi+48h]
          vmulss  xmm0, xmm4, xmm4
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmovss  xmm1, cs:__real@3f800000
          vaddss  xmm2, xmm3, xmm0
          vdivss  xmm0, xmm1, dword ptr [rdi+24h]
          vsqrtss xmm4, xmm2, xmm2
          vmovaps [rsp+48h+var_18], xmm6
          vmulss  xmm6, xmm4, xmm0
        }
        *(double *)&_XMM0 = BG_CalculateDurationIntoAnimFromLegsTimer(_RBX->legsTimer, _RBX->legsAnim & 0xFFFFEFFF, SuitAnimIndexFromPlayerState);
        __asm
        {
          vmovaps xmm2, xmm0; durationIntoAnim
          vmovaps xmm0, xmm6; characterSpeed
        }
        BG_CalculateAnimRateFromCharacterSpeed(*(float *)&_XMM0, _RBX->legsAnim & 0xFFFFEFFF, *(float *)&_XMM2, SuitAnimIndexFromPlayerState);
        __asm
        {
          vmovaps xmm6, [rsp+48h+var_18]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vmulss  xmm0, xmm1, xmm0
          vcvttss2si eax, xmm0
        }
      }
      else
      {
        _EAX = -10 * pml->msec;
      }
      _RBX->legsTimer += _EAX;
      if ( _RBX->legsTimer < 0 )
      {
        clientNum = _RBX->clientNum;
        _RBX->legsTimer = 0;
        G_DebugPlayerAnimScript_Print(clientNum, "end legs\n");
      }
    }
    torsoTimer = _RBX->torsoTimer;
    if ( torsoTimer > 0 )
    {
      v31 = torsoTimer - 10 * pml->msec;
      _RBX->torsoTimer = v31;
      if ( v31 < 0 )
      {
        v32 = _RBX->clientNum;
        _RBX->torsoTimer = 0;
        G_DebugPlayerAnimScript_Print(v32, "end torso\n");
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
  playerState_s *v7; 
  bool v9; 
  bool IsPlayerZeroG; 
  bool v12; 
  WorldUpReferenceFramePM *p_refFrame; 
  bool performSlideMove; 
  char v25; 
  __int128 vec; 

  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  _RSI = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3537, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3537, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  PM_Friction(pm, _RSI);
  v7 = pm->ps;
  DWORD2(vec) = LODWORD(vec3_origin.v[2]);
  __asm
  {
    vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vmovsd  qword ptr [rsp+88h+vec], xmm0
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3205, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps", vec) )
    __debugbreak();
  v9 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 0x1Eu);
  IsPlayerZeroG = BG_IsPlayerZeroG(v7);
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v12 = BGMovingPlatforms::IsOnMovingPlatform(v7) != 0;
  if ( !v9 )
  {
    p_refFrame = &pm->refFrame;
LABEL_16:
    __asm { vxorps  xmm1, xmm1, xmm1; height }
    WorldUpReferenceFrame::SetUpContribution(p_refFrame, *(float *)&_XMM1, (vec3_t *)&vec);
    goto LABEL_17;
  }
  if ( !IsPlayerZeroG && !v12 )
  {
    p_refFrame = &pm->refFrame;
    if ( !pm->refFrame.m_axisAdjusted )
      goto LABEL_16;
  }
  p_refFrame = &pm->refFrame;
LABEL_17:
  *(_QWORD *)&_RSI->walkForwardScale = 0i64;
  if ( (pm->ground->trace.surfaceFlags & 2) != 0 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xDu) )
  {
    _RBX = &ps->velocity;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, dword ptr [rsi+24h]; height
    }
    WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &ps->velocity);
  }
  else
  {
    _RBX = &ps->velocity;
  }
  PM_ProjectVelocity(pm, _RBX, &pm->ground->trace.normal, _RBX);
  if ( Com_GameMode_SupportsFeature(WEAPONSTATES_NUM) )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rsi+24h]
      vmulss  xmm0, xmm2, dword ptr [r14+5274h]
      vaddss  xmm1, xmm0, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm1
      vmulss  xmm0, xmm2, dword ptr [r14+5278h]
      vaddss  xmm1, xmm0, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [r14+527Ch]
      vaddss  xmm1, xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm1
    }
  }
  performSlideMove = 0;
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetForwardContribution(p_refFrame, _RBX);
  __asm { vucomiss xmm0, xmm6 }
  if ( !v25 )
    goto LABEL_29;
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetRightContribution(p_refFrame, _RBX);
  __asm { vucomiss xmm0, xmm6 }
  if ( !v25 )
    goto LABEL_29;
  __asm { vucomiss xmm6, dword ptr [rsi+200h] }
  if ( !v25 )
    goto LABEL_29;
  __asm { vucomiss xmm6, dword ptr [rsi+204h] }
  if ( !v25 )
    goto LABEL_29;
  __asm { vucomiss xmm6, dword ptr [rsi+208h] }
  if ( !v25 || PM_CmdHasCollisionAvoid(&pm->cmd) )
LABEL_29:
    performSlideMove = 1;
  PM_UpdatePlayerCollision(pm, _RSI, 0, 1, 0, performSlideMove);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    BG_UpdateMovementDir(pm, _RSI, 0);
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
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
  char v12; 
  int v15; 
  bool v17; 
  float fmt; 
  __int64 performSlideMove; 
  __int64 performSlideMovea; 
  __int64 v45; 
  __int64 v46; 
  int v47[4]; 
  vec3_t wishdir; 

  __asm
  {
    vmovaps [rsp+0B8h+var_38], xmm6
    vmovaps [rsp+0B8h+var_48], xmm7
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3026, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3026, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  PM_Friction(pm, pml);
  *(double *)&_XMM0 = PM_CmdScale(ps, &pm->cmd);
  __asm
  {
    vxorps  xmm4, xmm4, xmm4
    vucomiss xmm0, xmm4
    vmovaps xmm7, xmm0
  }
  if ( v12 )
  {
    __asm
    {
      vxorps  xmm5, xmm5, xmm5
      vxorps  xmm6, xmm6, xmm6
    }
  }
  else
  {
    v15 = 0;
    _RBP = (char *)v47 - (char *)pml;
    v17 = 1;
    _RDI = pml;
    do
    {
      if ( !v17 )
      {
        LODWORD(v45) = 3;
        LODWORD(performSlideMove) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", performSlideMove, v45) )
          __debugbreak();
        LODWORD(v46) = 3;
        LODWORD(performSlideMovea) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", performSlideMovea, v46) )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm2, xmm0, dword ptr [rdi+0Ch]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, dword ptr [rdi]
        vaddss  xmm2, xmm2, xmm1
        vmulss  xmm6, xmm2, xmm7
      }
      if ( (unsigned int)v15 >= 3 )
      {
        LODWORD(v45) = 3;
        LODWORD(performSlideMove) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", performSlideMove, v45) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rdi+rbp], xmm6 }
      _RDI = (pml_t *)((char *)_RDI + 4);
      v17 = (unsigned int)++v15 < 3;
    }
    while ( v15 < 3 );
    __asm
    {
      vmovss  xmm6, [rsp+0B8h+var_70]
      vmovss  xmm5, [rsp+0B8h+var_74]
      vmovss  xmm4, [rsp+0B8h+var_78]
    }
  }
  __asm
  {
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2; wishspeed
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rsp+0B8h+wishdir], xmm0
    vmovss  dword ptr [rsp+0B8h+wishdir+4], xmm1
    vmovss  xmm1, cs:__real@41000000
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rsp+0B8h+wishdir+8], xmm0
    vmovss  dword ptr [rsp+0B8h+fmt], xmm1
  }
  PM_Accelerate(pm, pml, &wishdir, *(float *)&_XMM3, fmt);
  PM_UpdatePlayerCollision(pm, pml, 0, 1, 1, 1);
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_38]
    vmovaps xmm7, [rsp+0B8h+var_48]
  }
}

/*
==============
PM_FootstepEvent
==============
*/

void __fastcall PM_FootstepEvent(pmove_t *pm, pml_t *pml, bool isOnStairs, double stairsAscentRatio, float prevTime, float curTime, const FootstepTime *times, const MovementTime *mvmtTimes)
{
  playerState_s *ps; 
  entity_event_t *footstepEventType; 
  bool v20; 
  entity_event_t v21; 
  __int64 v24; 
  signed __int64 v26; 
  unsigned int v28; 
  const dvar_t *v29; 
  bool isLeft; 
  int v31; 
  unsigned int v32; 
  playerState_s *v33; 
  bool v34; 
  bool v36; 
  char v37; 
  char v38; 
  FootstepActionType_t v40; 
  bool v42; 
  int v43; 
  unsigned int v44; 
  __int64 v48; 
  EquipmentMoveType_t v49; 
  unsigned int v50; 
  __int64 v55; 

  __asm { vmovaps [rsp+0B8h+var_38], xmm6 }
  _RSI = pm;
  __asm
  {
    vmovaps [rsp+0B8h+var_48], xmm7
    vmovaps [rsp+0B8h+var_68], xmm9
    vmovaps xmm9, xmm3
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7602, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = _RSI->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7602, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _R15 = defaultTimes;
  __asm
  {
    vmovss  xmm6, [rsp+0B8h+prevTime]
    vmovss  xmm7, [rsp+0B8h+curTime]
  }
  if ( times )
    _R15 = times;
  __asm { vucomiss xmm6, xmm7 }
  if ( times )
  {
    footstepEventType = _RSI->footstepEventType;
    __asm { vmovaps [rsp+0B8h+var_58], xmm8 }
    prevTime = 0.0;
    v20 = footstepEventType == NULL;
    if ( footstepEventType )
    {
      v21 = *footstepEventType;
    }
    else
    {
      __asm { vmovss  xmm1, dword ptr [rsi+330h]; speed }
      v21 = PM_FootstepType(_RSI, *(const float *)&_XMM1, (FootstepMoveType_t *)&prevTime);
    }
    __asm
    {
      vmovss  xmm8, cs:__real@ff7fffff
      vucomiss xmm8, dword ptr [r15]
    }
    if ( !v20 )
    {
      __asm { vmovaps [rsp+0B8h+var_78], xmm10 }
      v24 = -4i64 - (_QWORD)_R15;
      __asm { vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000 }
      do
      {
        v26 = (unsigned __int64)(&_R15->isLeft + v24) & 0xFFFFFFFFFFFFFFF8ui64;
        if ( v26 >= 256 )
          break;
        __asm
        {
          vmovss  xmm0, dword ptr [r15]
          vcomiss xmm6, xmm0
        }
        if ( (unsigned __int64)v26 >= 0x100 )
        {
          __asm
          {
            vcomiss xmm7, xmm6
            vcomiss xmm0, xmm7
          }
        }
        else
        {
          __asm { vcomiss xmm0, xmm7 }
          ++ps->footstepCount;
          if ( PM_ShouldMakeFootsteps(_RSI) )
          {
            if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_spValue, 0x3Au) )
            {
              if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2559, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
                __debugbreak();
              v28 = BG_PackFootstepEventParm(_RSI->weaponMap, ps, 21, FOOTSTEP_ACTION_TYPE_STEP, _R15->isLeft);
              BG_AddPredictableEventToPlayerstate(EV_FOOTSTEP_PRONE, v28, _RSI->cmd.serverTime, _RSI->weaponMap, ps);
            }
            else if ( ps->groundEntityNum == 2047 )
            {
              if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
              {
                v29 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
                if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v29);
                if ( !v29->current.enabled )
                {
                  isLeft = _R15->isLeft;
                  v31 = PM_GroundSurfaceType(_RSI);
                  v32 = BG_PackFootstepEventParm(_RSI->weaponMap, ps, v31, FOOTSTEP_ACTION_TYPE_STEP, isLeft);
                  BG_AddPredictableEventToPlayerstate(EV_FOOTSTEP_RUN, v32, _RSI->cmd.serverTime, _RSI->weaponMap, ps);
                }
              }
            }
            else
            {
              if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE) && (PM_GetEffectiveStance(ps) == PM_EFF_STANCE_DUCKED || PM_GetEffectiveStance(ps) == PM_EFF_STANCE_PRONE) )
              {
                LODWORD(v55) = PM_GetEffectiveStance(ps);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7659, ASSERT_TYPE_ASSERT, "( ( Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_CROUCH_PRONE_FOOTSTEPS ) || ((PM_GetEffectiveStance( ps ) != PM_EFF_STANCE_DUCKED) && (PM_GetEffectiveStance( ps ) != PM_EFF_STANCE_PRONE)) ) )", "( PM_GetEffectiveStance( ps ) ) = %i", v55) )
                  __debugbreak();
              }
              v33 = _RSI->ps;
              if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7572, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
                __debugbreak();
              v34 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v33->pm_flags, ACTIVE, 8u);
              _RBX = DCONST_DVARFLT_player_stairs_footstep_sound_minratio;
              v36 = v34;
              if ( !DCONST_DVARFLT_player_stairs_footstep_sound_minratio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_footstep_sound_minratio") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(_RBX);
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+28h]
                vcomiss xmm0, xmm9
              }
              if ( v37 | v38 )
              {
                v40 = FOOTSTEP_ACTION_TYPE_STEP_STAIR_UP;
              }
              else
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm10
                  vcomiss xmm9, xmm0
                }
                if ( v37 | v38 )
                  v40 = FOOTSTEP_ACTION_TYPE_STEP_STAIR_DOWN;
                else
                  v40 = v36;
              }
              v42 = _R15->isLeft;
              v43 = PM_GroundSurfaceType(_RSI);
              v44 = BG_PackFootstepEventParm(_RSI->weaponMap, ps, v43, v40, v42);
              BG_AddPredictableEventToPlayerstate(v21, v44, _RSI->cmd.serverTime, _RSI->weaponMap, ps);
            }
          }
        }
        v20 = &_R15[1] == NULL;
        ++_R15;
        __asm { vucomiss xmm8, dword ptr [r15] }
      }
      while ( !v20 );
      __asm { vmovaps xmm10, [rsp+0B8h+var_78] }
    }
    _RBX = mvmtTimes;
    if ( mvmtTimes )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vucomiss xmm0, xmm8
      }
      v48 = 0i64;
      do
      {
        if ( (__int64)(v48 & 0xFFFFFFFFFFFFFFF8ui64) >= 256 )
          break;
        __asm { vcomiss xmm6, xmm0 }
        if ( (v48 & 0xFFFFFFFFFFFFFFF8ui64) < 0x100 )
        {
          __asm { vcomiss xmm0, xmm7 }
          if ( (v48 & 0xFFFFFFFFFFFFFFF8ui64) <= 0x100 )
            goto LABEL_61;
        }
        __asm { vcomiss xmm7, xmm6 }
        if ( (v48 & 0xFFFFFFFFFFFFFFF8ui64) < 0x100 )
        {
          __asm { vcomiss xmm6, xmm0 }
          if ( (v48 & 0xFFFFFFFFFFFFFFF8ui64) < 0x100 )
            goto LABEL_61;
        }
        __asm { vcomiss xmm0, xmm7 }
        if ( (v48 & 0xFFFFFFFFFFFFFFF8ui64) <= 0x100 )
        {
          __asm { vcomiss xmm7, xmm6 }
          if ( (v48 & 0xFFFFFFFFFFFFFFF8ui64) < 0x100 )
          {
LABEL_61:
            if ( PM_ShouldMakeFootsteps(_RSI) && v21 )
            {
              switch ( v21 )
              {
                case EV_FOOTSTEP_SUPERSPRINT:
                case EV_FOOTSTEP_SPRINT:
                  v49 = EQUIPMENT_MOVE_TYPE_SPRINT;
                  break;
                case EV_FOOTSTEP_RUN:
                case EV_JUMP:
                  v49 = EQUIPMENT_MOVE_TYPE_RUN;
                  break;
                case EV_FOOTSTEP_WALK:
                  v49 = EQUIPMENT_MOVE_TYPE_WALK;
                  break;
                case EV_FOOTSTEP_CREEP:
                  v49 = EQUIPMENT_MOVE_TYPE_CREEP;
                  break;
                case EV_FOOTSTEP_PRONE:
                  v49 = EQUIPMENT_MOVE_TYPE_PRONE;
                  break;
                default:
                  v49 = EQUIPMENT_MOVE_TYPE_INVALID;
                  break;
              }
              v50 = BG_PackEquipSoundEventParam((MovementLeadType_t)(2 - _RBX->isLeadIn), ps->clothType, 0, v49);
              BG_AddPredictableEventToPlayerstate(EV_CLOTH_MOVE_SOUND, v50, _RSI->cmd.serverTime, _RSI->weaponMap, ps);
            }
          }
        }
        __asm { vmovss  xmm0, dword ptr [rbx+8] }
        ++_RBX;
        v20 = v48 == -8;
        v48 += 8i64;
        __asm { vucomiss xmm0, xmm8 }
      }
      while ( !v20 );
    }
    __asm { vmovaps xmm8, [rsp+0B8h+var_58] }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_38]
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm9, [rsp+0B8h+var_68]
  }
}

/*
==============
PM_FootstepType
==============
*/

__int64 __fastcall PM_FootstepType(pmove_t *pm, double speed, FootstepMoveType_t *outMoveType)
{
  playerState_s *ps; 
  FootstepMoveType_t v9; 
  unsigned int v10; 
  char v11; 
  int lastSprintStart; 
  __int64 result; 

  __asm
  {
    vmovaps [rsp+58h+var_28], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4957, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4957, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = FOOTSTEP_MOVE_TYPE_WALK;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
  {
    v10 = 175;
    v9 = FOOTSTEP_MOVE_TYPE_PRONE;
    goto LABEL_29;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
  {
    v10 = 175;
    v9 = FOOTSTEP_MOVE_TYPE_PRONE;
    goto LABEL_29;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
  {
    v10 = 172;
    v9 = FOOTSTEP_MOVE_TYPE_RUN;
    goto LABEL_29;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u) )
  {
    v10 = 174;
    v9 = FOOTSTEP_MOVE_TYPE_STATE_BEGIN;
    goto LABEL_29;
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_creepThreshhold, "player_creepThreshhold");
  __asm { vcomiss xmm6, xmm0 }
  if ( v11 )
  {
    v10 = 174;
    v9 = FOOTSTEP_MOVE_TYPE_STATE_BEGIN;
    goto LABEL_29;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xBu) )
  {
    if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_ads_footstep_creep, "killswitch_ads_footstep_creep") )
    {
      v10 = 174;
      v9 = FOOTSTEP_MOVE_TYPE_STATE_BEGIN;
      goto LABEL_29;
    }
  }
  else
  {
    if ( BG_IsSuperSprinting(ps) )
    {
      v10 = 170;
      v9 = FOOTSTEP_MOVE_TYPE_SUPERSPRINT;
      goto LABEL_29;
    }
    lastSprintStart = ps->sprintState.lastSprintStart;
    if ( lastSprintStart && lastSprintStart > ps->sprintState.lastSprintEnd )
    {
      v10 = 171;
      v9 = FOOTSTEP_MOVE_TYPE_SPRINT;
      goto LABEL_29;
    }
    if ( (pm->cmd.buttons & 0x400000000i64) != 0 )
    {
      v10 = 172;
      v9 = FOOTSTEP_MOVE_TYPE_RUN;
      goto LABEL_29;
    }
  }
  v10 = 173;
LABEL_29:
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
  if ( !PM_GroundSurfaceType(pm) )
    v10 = 0;
  result = v10;
  if ( outMoveType )
    *outMoveType = v9;
  return result;
}

/*
==============
PM_Footstep_MoveTypeWeightToEvent
==============
*/

__int64 __fastcall PM_Footstep_MoveTypeWeightToEvent(double curMoveTypeWeight, FootstepMoveType_t *outMoveType, double _XMM2_8)
{
  const dvar_t *v14; 
  char v16; 
  FootstepMoveType_t v17; 
  __int64 result; 
  const dvar_t *v21; 
  const dvar_t *v25; 
  const dvar_t *v29; 
  double v33; 
  double v34; 
  double v35; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm6, xmm0
    vcomiss xmm0, cs:__real@3f800000
    vmovsd  xmm1, cs:__real@3ff0000000000000
    vmovsd  [rsp+68h+var_30], xmm1
    vxorpd  xmm2, xmm2, xmm2
    vmovsd  [rsp+68h+var_38], xmm2
    vcvtss2sd xmm3, xmm6, xmm6
    vmovsd  [rsp+68h+var_40], xmm3
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5082, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( curMoveTypeWeight ) && ( curMoveTypeWeight ) <= ( 1.0f )", "curMoveTypeWeight not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v33, v34, v35) )
    __debugbreak();
  _RBX = DCONST_DVARFLT_snd_footstep_movetypeblend_value_creep;
  if ( !DCONST_DVARFLT_snd_footstep_movetypeblend_value_creep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_movetypeblend_value_creep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  v14 = DCONST_DVARFLT_snd_foosteps_movetypeblend_bias;
  if ( !DCONST_DVARFLT_snd_foosteps_movetypeblend_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_foosteps_movetypeblend_bias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  __asm
  {
    vaddss  xmm0, xmm7, dword ptr [rbx+28h]
    vcomiss xmm6, xmm0
  }
  if ( v16 )
  {
    v17 = FOOTSTEP_MOVE_TYPE_STATE_BEGIN;
    result = 174i64;
  }
  else
  {
    _RBX = DCONST_DVARFLT_snd_footstep_movetypeblend_value_walk;
    if ( !DCONST_DVARFLT_snd_footstep_movetypeblend_value_walk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_movetypeblend_value_walk") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    v21 = DCONST_DVARFLT_snd_foosteps_movetypeblend_bias;
    if ( !DCONST_DVARFLT_snd_foosteps_movetypeblend_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_foosteps_movetypeblend_bias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [rbx+28h]
      vcomiss xmm6, xmm0
    }
    if ( v16 )
    {
      v17 = FOOTSTEP_MOVE_TYPE_WALK;
      result = 173i64;
    }
    else
    {
      _RBX = DCONST_DVARFLT_snd_footstep_movetypeblend_value_run;
      if ( !DCONST_DVARFLT_snd_footstep_movetypeblend_value_run && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_movetypeblend_value_run") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm7, dword ptr [rbx+28h] }
      v25 = DCONST_DVARFLT_snd_foosteps_movetypeblend_bias;
      if ( !DCONST_DVARFLT_snd_foosteps_movetypeblend_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_foosteps_movetypeblend_bias") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      __asm
      {
        vaddss  xmm0, xmm7, dword ptr [rbx+28h]
        vcomiss xmm6, xmm0
      }
      if ( v16 )
      {
        v17 = FOOTSTEP_MOVE_TYPE_RUN;
        result = 172i64;
      }
      else
      {
        _RBX = DCONST_DVARFLT_snd_footstep_movetypeblend_value_sprint;
        if ( !DCONST_DVARFLT_snd_footstep_movetypeblend_value_sprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_movetypeblend_value_sprint") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm7, dword ptr [rbx+28h] }
        v29 = DCONST_DVARFLT_snd_foosteps_movetypeblend_bias;
        if ( !DCONST_DVARFLT_snd_foosteps_movetypeblend_bias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_foosteps_movetypeblend_bias") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        __asm
        {
          vaddss  xmm0, xmm7, dword ptr [rbx+28h]
          vcomiss xmm6, xmm0
        }
        if ( v16 )
        {
          v17 = FOOTSTEP_MOVE_TYPE_SPRINT;
          result = 171i64;
        }
        else
        {
          v17 = FOOTSTEP_MOVE_TYPE_SUPERSPRINT;
          result = 170i64;
        }
      }
    }
  }
  if ( outMoveType )
    *outMoveType = v17;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
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
  PlayerAnimScriptMoveType v8; 
  __int64 turn; 

  _RBX = pm;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8756, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = _RBX->ps;
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
  __asm
  {
    vmovss  xmm0, cs:__real@42f00000
    vcomiss xmm0, dword ptr [rbx+330h]
  }
  switch ( effStance )
  {
    case PM_EFF_STANCE_PRONE:
      v8 = ANIM_MT_IDLEPRONE;
LABEL_19:
      if ( BG_AnimScriptAnimation(_RBX->m_bgHandler, ps, AISTATE_COMBAT, v8, 0, pml->turning) >= 0 )
        goto LABEL_24;
      break;
    case PM_EFF_STANCE_DUCKED:
      v8 = ANIM_MT_IDLECR;
      goto LABEL_19;
    case PM_EFF_STANCE_LASTSTANDCRAWL:
      v8 = ANIM_MT_IDLELASTSTAND;
      goto LABEL_19;
  }
  if ( effStance == PM_EFF_STANCE_LASTSTANDCRAWL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8800, ASSERT_TYPE_ASSERT, "(effStance != PM_EFF_STANCE_LASTSTANDCRAWL)", (const char *)&queryFormat, "effStance != PM_EFF_STANCE_LASTSTANDCRAWL") )
    __debugbreak();
  BG_AnimScriptAnimation(_RBX->m_bgHandler, ps, AISTATE_COMBAT, ANIM_MT_IDLE, 0, pml->turning);
LABEL_24:
  PM_UpdateFlinch(_RBX, ps, pml);
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_Footstep_UpdateMoveType
==============
*/

__int64 __fastcall PM_Footstep_UpdateMoveType(const int msec, pmove_t *pm, double speed, float *inOutMoveTypeWeight)
{
  unsigned int v11; 
  const dvar_t *v12; 
  FootstepMoveType_t v19; 
  char v20; 
  bool v21; 
  const dvar_t *v23; 
  const char *v24; 
  const dvar_t *v25; 
  const char *v26; 
  __int64 result; 
  double v40; 
  __int64 v41; 
  double v42; 
  double v43; 
  __int64 v44; 
  FootstepMoveType_t outMoveType; 

  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  _RBX = inOutMoveTypeWeight;
  __asm { vmovaps xmm6, xmm2 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5123, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  __asm { vmovaps xmm1, xmm6; speed }
  v11 = PM_FootstepType(pm, *(double *)&_XMM1, &outMoveType);
  if ( !_RBX )
    goto LABEL_39;
  v12 = DVARBOOL_killswitch_footstep_player_moveblend_enabled;
  if ( !DVARBOOL_killswitch_footstep_player_moveblend_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_footstep_player_moveblend_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( !v12->current.enabled || !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED|0x80) )
  {
    *_RBX = 0.0;
LABEL_39:
    result = v11;
    goto LABEL_40;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
    vmovaps [rsp+88h+var_48], xmm7
    vmovss  xmm7, cs:__real@3f800000
    vcomiss xmm0, xmm7
    vcvtss2sd xmm2, xmm0, xmm0
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vmovsd  [rsp+88h+var_50], xmm0
    vxorpd  xmm1, xmm1, xmm1
    vmovsd  [rsp+88h+var_58], xmm1
    vmovsd  [rsp+88h+var_60], xmm2
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5141, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( *inOutMoveTypeWeight ) && ( *inOutMoveTypeWeight ) <= ( 1.0f )", "*inOutMoveTypeWeight not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v40, v42, v43) )
    __debugbreak();
  v19 = outMoveType;
  v20 = 0;
  v21 = msec == 0;
  if ( msec > 0 )
  {
    switch ( outMoveType )
    {
      case FOOTSTEP_MOVE_TYPE_STATE_BEGIN:
      case FOOTSTEP_MOVE_TYPE_PRONE:
        _RSI = DCONST_DVARFLT_snd_footstep_movetypeblend_value_creep;
        if ( !DCONST_DVARFLT_snd_footstep_movetypeblend_value_creep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_footstep_movetypeblend_value_creep") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RSI);
        __asm { vmovss  xmm6, dword ptr [rsi+28h] }
        break;
      case FOOTSTEP_MOVE_TYPE_WALK:
        v23 = DCONST_DVARFLT_snd_footstep_movetypeblend_value_walk;
        v24 = "snd_footstep_movetypeblend_value_walk";
        goto LABEL_23;
      case FOOTSTEP_MOVE_TYPE_RUN:
        v23 = DCONST_DVARFLT_snd_footstep_movetypeblend_value_run;
        v24 = "snd_footstep_movetypeblend_value_run";
        goto LABEL_23;
      case FOOTSTEP_MOVE_TYPE_SPRINT:
        v23 = DCONST_DVARFLT_snd_footstep_movetypeblend_value_sprint;
        v24 = "snd_footstep_movetypeblend_value_sprint";
        goto LABEL_23;
      case FOOTSTEP_MOVE_TYPE_SUPERSPRINT:
        v23 = DCONST_DVARFLT_snd_footstep_movetypeblend_value_supersprint;
        v24 = "snd_footstep_movetypeblend_value_supersprint";
LABEL_23:
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v23, v24);
        __asm { vmovaps xmm6, xmm0 }
        break;
      default:
        break;
    }
    __asm { vcomiss xmm6, dword ptr [rbx]; jumptable 0000000141059585 default case }
    if ( v20 | v21 )
    {
      v25 = DCONST_DVARINT_snd_footstep_movetypeblend_window_down_ms;
      v26 = "snd_footstep_movetypeblend_window_down_ms";
    }
    else
    {
      v25 = DCONST_DVARINT_snd_footstep_movetypeblend_window_up_ms;
      v26 = "snd_footstep_movetypeblend_window_up_ms";
    }
    if ( Dvar_GetInt_Internal_DebugName(v25, v26) > 0 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, eax
        vcvtsi2ss xmm0, xmm0, r14d
        vdivss  xmm2, xmm1, xmm0
        vcomiss xmm2, xmm7
        vmovss  xmm1, dword ptr [rbx]
        vdivss  xmm3, xmm7, xmm2
        vmulss  xmm0, xmm3, xmm1
        vsubss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm6
        vaddss  xmm6, xmm2, xmm1
      }
    }
    __asm { vmovss  dword ptr [rbx], xmm6 }
  }
  __asm { vmovaps xmm7, [rsp+88h+var_48] }
  if ( (unsigned int)v19 > FOOTSTEP_MOVE_TYPE_STATE_END )
  {
    LODWORD(v44) = 6;
    LODWORD(v41) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5161, ASSERT_TYPE_ASSERT, "( FOOTSTEP_MOVE_TYPE_STATE_BEGIN ) <= ( goalMoveType ) && ( goalMoveType ) <= ( FOOTSTEP_MOVE_TYPE_STATE_END )", "goalMoveType not in [FOOTSTEP_MOVE_TYPE_STATE_BEGIN, FOOTSTEP_MOVE_TYPE_STATE_END]\n\t%i not in [%i, %i]", v41, 0i64, v44) )
      __debugbreak();
  }
  if ( (unsigned int)v19 > FOOTSTEP_MOVE_TYPE_SUPERSPRINT )
    goto LABEL_39;
  if ( v11 )
  {
    __asm { vmovss  xmm0, dword ptr [rbx]; curMoveTypeWeight }
    result = PM_Footstep_MoveTypeWeightToEvent(*(double *)&_XMM0, NULL, *(double *)&_XMM2);
  }
  else
  {
    result = 0i64;
  }
LABEL_40:
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
  return result;
}

/*
==============
PM_Footsteps
==============
*/
void PM_Footsteps(pmove_t *pm, pml_t *pml)
{
  EffectiveStance EffectiveStance; 
  const SuitDef *SuitDef; 
  int viewHeightTarget; 
  int viewHeightLerpTarget; 
  PlayerAnimScriptMoveType NotMovingAnim; 
  int v29; 
  int v30; 
  BOOL v31; 
  bool v32; 
  bool IsActive; 
  pmove_t *v34; 
  char v35; 
  bool v36; 
  playerState_s *v38; 
  int turning; 
  PlayerAnimScriptMoveType v40; 
  PlayerAnimScriptMoveType v41; 
  char v42; 
  playerState_s *ps; 
  char v51; 
  bool IsMoving; 
  int v53; 
  float v54; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  PlayerAnimStrafeStates v64; 
  __int64 v65; 
  unsigned int v66; 
  const dvar_t *v67; 
  bool v68; 
  int v69; 
  PlayerAnimScriptMoveType v70; 
  float fmt; 
  float moveRight; 
  __int64 sprinting; 
  int sprintinga; 
  int timeMs; 
  bool v80; 
  bool IsSuperSprinting; 
  bool v82; 
  bool SlideBackwards; 
  PmStanceFrontBack stance; 
  float outMoveRight; 
  int v86; 
  float outMoveForward; 
  int outRunBackwards; 
  __int64 v89; 
  vec3_t maxSpeeds; 
  char v91; 
  void *retaddr; 

  _RAX = &retaddr;
  v89 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RBP = pml;
  _RDI = pm;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9197, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = _RDI->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9197, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BG_CheckThread();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Footsteps");
  if ( _RSI->pm_type >= 7 || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RSI->eFlags, GameModeFlagValues::ms_mpValue, 0x18u) )
    goto LABEL_142;
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+40h]
    vmovss  xmm0, dword ptr [rsi+3Ch]
    vmovss  xmm3, dword ptr [rsi+44h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vsqrtss xmm0, xmm3, xmm3
    vmovss  dword ptr [rdi+330h], xmm0
  }
  if ( BG_ContextMount_IsActive(_RSI) )
  {
    *(double *)&_XMM0 = PM_ContextMount_CalcPlayerSpeed(_RDI, _RBP);
    __asm { vmovss  dword ptr [rdi+330h], xmm0 }
  }
  if ( !BG_ContextMount_IsActive(_RSI) )
  {
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 0xBu) )
    {
      SuitDef = BG_GetSuitDef(_RSI->suitIndex);
      if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 578, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
        __debugbreak();
      viewHeightTarget = _RSI->viewHeightTarget;
      if ( !viewHeightTarget || viewHeightTarget == SuitDef->viewheight_stand || viewHeightTarget == SuitDef->viewheight_crouch || viewHeightTarget == BG_Suit_GetProneViewHeight(SuitDef) )
      {
        viewHeightLerpTarget = _RSI->viewHeightLerpTarget;
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
    EffectiveStance = PM_GetEffectiveStance(_RSI);
    goto LABEL_28;
  }
  EffectiveStance = PM_EFF_STANCE_DEFAULT;
LABEL_28:
  if ( PlayerASM_IsEnabled() )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ecx
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, ecx; oldMoveRight
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, ecx; oldMoveForward
      vmovss  [rsp+0D8h+moveRight], xmm1
      vmovss  dword ptr [rsp+0D8h+fmt], xmm0
    }
    BG_PlayerASM_StoreCommandDir(_RSI->clientNum, _RSI->serverTime, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt, moveRight);
  }
  if ( BG_Skydive_IsSkydiving(_RSI) && EffectiveStance != PM_EFF_STANCE_LASTSTANDCRAWL )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_Footsteps in Parachute mode");
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      BG_AnimScriptAnimation(_RDI->m_bgHandler, _RSI, AISTATE_COMBAT, ANIM_MT_PARACHUTE, 1, 0);
      PM_UpdateFlinch(_RDI, _RSI, _RBP);
    }
LABEL_34:
    Sys_ProfEndNamedEvent();
    goto LABEL_142;
  }
  if ( BG_IsTurretActive(_RSI) )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_Footsteps in Turret");
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      NotMovingAnim = PM_GetNotMovingAnim(EffectiveStance);
      BG_AnimScriptAnimation(_RDI->m_bgHandler, _RSI, AISTATE_COMBAT, NotMovingAnim, 0, 0);
      PM_UpdateFlinch(_RDI, _RSI, _RBP);
    }
    goto LABEL_34;
  }
  v29 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0xBu);
  v30 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0x14u);
  v86 = v30;
  v31 = _RSI->pm_type == 1 && !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&_RSI->linkFlags, GameModeFlagValues::ms_spValue, 8u);
  if ( v30 && v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9270, ASSERT_TYPE_ASSERT, "(!sprinting || !walking)", (const char *)&queryFormat, "!sprinting || !walking") )
    __debugbreak();
  outRunBackwards = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0xAu);
  PM_GetNominalMaxSpeed(_RDI, _RBP, &maxSpeeds);
  stance = PM_GetStanceEx(EffectiveStance, outRunBackwards);
  v32 = EffectiveStance == PM_EFF_STANCE_LASTSTANDCRAWL && Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_last_stand_wm_restless_legs_enabled, "killswitch_last_stand_wm_restless_legs_enabled");
  v80 = v32;
  IsActive = BG_ContextMount_IsActive(_RSI);
  v34 = _RDI;
  if ( IsActive )
  {
    timeMs = _RBP->msec;
    sprintinga = v30;
LABEL_141:
    __asm { vmovss  xmm3, dword ptr [rdi+330h]; speed }
    PM_UpdateBobCycle(v34, _RBP, stance, *(float *)&_XMM3, &maxSpeeds, v29, sprintinga, timeMs);
    goto LABEL_142;
  }
  if ( (PM_IsInAir(_RDI) || BG_Ladder_IsActive(_RSI)) && !BG_IsPlayerZeroGFloating(_RSI) )
  {
    PM_KnockbackAnim(_RDI, _RBP);
    PM_Footstep_LadderMove(_RDI, _RBP);
    timeMs = _RBP->msec;
    sprintinga = v30;
LABEL_140:
    v34 = _RDI;
    goto LABEL_141;
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_moveThreshhold, "player_moveThreshhold");
  __asm { vcomiss xmm0, dword ptr [rdi+330h] }
  if ( v35 | v36 && !v31 || v32 || BG_IsPlayerZeroGFloating(_RSI) )
  {
    LODWORD(outMoveRight) = PM_IsAffectedByBlackHole(_RBP);
    v42 = _RDI->cmd.forwardmove || _RDI->cmd.rightmove;
    ps = _RDI->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9167, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
    {
      if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9175, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
        __debugbreak();
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+50h]
        vmovss  xmm0, dword ptr [rbp+4Ch]
        vmovss  xmm3, dword ptr [rbp+54h]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm4, xmm2, xmm1
      }
      if ( _RDI->oldcmd.forwardmove )
        goto LABEL_88;
      if ( _RDI->oldcmd.rightmove )
        goto LABEL_88;
      __asm { vcomiss xmm4, cs:__real@2b8cbccc }
      if ( _RDI->oldcmd.rightmove )
LABEL_88:
        v51 = 1;
      else
        v51 = 0;
      IsMoving = PM_LastStand_IsMoving(_RDI);
      v36 = v51 == 0;
      v30 = v86;
      if ( !v36 && !IsMoving )
        ps->lastStandMoveStopTime = ps->serverTime;
    }
    else
    {
      ps->lastStandMoveStopTime = 0;
    }
    if ( v80 )
    {
      v53 = _RSI->serverTime - _RSI->lastStandMoveStopTime;
      LOBYTE(v53) = v53 < Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_playerLastStandMovementRestlessLegsTimeMs, "playerLastStandMovementRestlessLegsTimeMs");
      v42 |= v53 | PM_LastStand_IsMoving(_RDI);
    }
    v54 = outMoveRight;
    if ( v42 || LODWORD(outMoveRight) || BG_IsPlayerZeroGFloating(_RSI) )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, eax
          vmovss  [rsp+0D8h+outMoveRight], xmm6
          vxorps  xmm7, xmm7, xmm7
          vcvtsi2ss xmm7, xmm7, eax
          vmovss  [rsp+0D8h+outMoveForward], xmm7
        }
        if ( !v42 && v54 != 0.0 )
        {
          PM_GetBlackHoleStrafeData(_RBP, &outRunBackwards, &outMoveForward, &outMoveRight);
          __asm
          {
            vmovss  xmm6, [rsp+0D8h+outMoveRight]
            vmovss  xmm7, [rsp+0D8h+outMoveForward]
          }
        }
        if ( !_RDI->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8675, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
          __debugbreak();
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8676, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
          __debugbreak();
        ActiveStatics = BgStatic::GetActiveStatics();
        CharacterInfo = BG_GetCharacterInfo(ActiveStatics, _RDI->ps->clientNum);
        BG_SetConditionValue(CharacterInfo, 17, LODWORD(v54) != 0);
        __asm
        {
          vmovaps xmm2, xmm6; rightMove
          vmovaps xmm1, xmm7; forwardMove
        }
        v64 = BG_DetermineStrafeCondition(_RDI, *(const float *)&_XMM1, *(const float *)&_XMM2);
        PM_SetStrafeCondition(_RDI, v64);
        v65 = PM_GetStanceEx(EffectiveStance, outRunBackwards);
        SlideBackwards = PM_GetSlideBackwards(_RDI, _RBP);
        v66 = v29;
        if ( EffectiveStance == PM_EFF_STANCE_DEFAULT )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_runbkThreshhold, "player_runbkThreshhold");
          __asm { vcomiss xmm0, dword ptr [rdi+330h] }
          if ( !v35 )
            v66 = 1;
        }
        IsSuperSprinting = BG_IsSuperSprinting(_RSI);
        v82 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0x14u);
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8565, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
          __debugbreak();
        v67 = DCONST_DVARMPBOOL_animscript_supersprint_enable;
        if ( !DCONST_DVARMPBOOL_animscript_supersprint_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_supersprint_enable") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v67);
        v68 = v67->current.enabled || PlayerASM_IsEnabled();
        v69 = *(_DWORD *)&asc_143F489A0[8 * v65 + 4 * v66];
        if ( !(_DWORD)v65 )
        {
          if ( IsSuperSprinting && v68 )
          {
            v69 = 19;
          }
          else if ( v82 )
          {
            v69 = 18;
          }
        }
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0x1Du) )
          v69 = SlideBackwards + 24;
        if ( BG_AnimScriptAnimation(_RDI->m_bgHandler, _RSI, AISTATE_COMBAT, (PlayerAnimScriptMoveType)v69, 0, 0) < 0 )
        {
          if ( EffectiveStance == PM_EFF_STANCE_LASTSTANDCRAWL )
          {
            if ( (unsigned int)(v69 - 22) > 1 )
            {
              LODWORD(sprinting) = v69;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9389, ASSERT_TYPE_ASSERT, "(animType == ANIM_MT_CRAWLLASTSTAND || animType == ANIM_MT_CRAWLLASTSTANDBK)", "%s\n\tanimType == %d", "animType == ANIM_MT_CRAWLLASTSTAND || animType == ANIM_MT_CRAWLLASTSTANDBK", sprinting) )
                __debugbreak();
            }
            v70 = v69;
          }
          else
          {
            v70 = ANIM_MT_IDLE;
          }
          BG_AnimScriptAnimation(_RDI->m_bgHandler, _RSI, AISTATE_COMBAT, v70, 0, 0);
        }
        PM_UpdateFlinch(_RDI, _RSI, _RBP);
      }
      timeMs = _RBP->msec;
      sprintinga = v86;
      goto LABEL_140;
    }
    __asm { vmovss  xmm3, dword ptr [rdi+330h]; speed }
    PM_UpdateBobCycle(_RDI, _RBP, stance, *(float *)&_XMM3, &maxSpeeds, v29, v30, _RBP->msec);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      PM_Footstep_NotTryingToMove(_RDI, _RBP, EffectiveStance);
  }
  else
  {
    __asm { vmovss  xmm3, dword ptr [rdi+330h]; speed }
    PM_UpdateBobCycle(_RDI, _RBP, stance, *(float *)&_XMM3, &maxSpeeds, v29, v30, _RBP->msec);
    v38 = _RDI->ps;
    if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7747, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      Sys_ProfBeginNamedEvent(0xFF808080, "PM_Footsteps_NotMoving");
      turning = _RBP->turning;
      v40 = PM_GetNotMovingAnim(EffectiveStance);
      if ( BG_AnimScriptAnimation(_RDI->m_bgHandler, v38, AISTATE_COMBAT, v40, 0, turning) < 0 )
      {
        if ( EffectiveStance == PM_EFF_STANCE_LASTSTANDCRAWL )
        {
          v41 = ANIM_MT_IDLELASTSTAND;
        }
        else
        {
          v41 = ANIM_MT_IDLECR;
          if ( EffectiveStance != PM_EFF_STANCE_DUCKED )
            v41 = ANIM_MT_IDLE;
        }
        BG_AnimScriptAnimation(_RDI->m_bgHandler, v38, AISTATE_COMBAT, v41, 0, _RBP->turning);
      }
      PM_UpdateFlinch(_RDI, v38, _RBP);
      Sys_ProfEndNamedEvent();
    }
  }
LABEL_142:
  Sys_ProfEndNamedEvent();
  _R11 = &v91;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
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
  BgGroundState *ground; 
  char v14; 
  bool v24; 
  bool v25; 
  BgGroundState *v26; 
  bool v27; 
  bool v28; 
  vec3_t vec; 

  __asm
  {
    vmovaps [rsp+0E8h+var_58], xmm7
    vmovaps [rsp+0E8h+var_88], xmm10
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2374, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ground && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2375, ASSERT_TYPE_ASSERT, "(pm->ground)", (const char *)&queryFormat, "pm->ground") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2379, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rbx+3Ch] }
  ground = pm->ground;
  __asm
  {
    vmovss  dword ptr [rsp+0E8h+vec], xmm0
    vmovss  xmm1, dword ptr [rbx+40h]
    vmovss  dword ptr [rsp+0E8h+vec+4], xmm1
    vmovss  xmm3, dword ptr [rbx+44h]
    vmovss  dword ptr [rsp+0E8h+vec+8], xmm3
  }
  v14 = 0;
  __asm { vxorps  xmm10, xmm10, xmm10 }
  if ( ground->walking )
  {
    __asm { vxorps  xmm1, xmm1, xmm1; height }
    WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+0E8h+vec+8]
      vmovss  xmm1, dword ptr [rsp+0E8h+vec+4]
      vmovss  xmm0, dword ptr [rsp+0E8h+vec]
    }
  }
  __asm
  {
    vmulss  xmm1, xmm1, xmm1
    vmulss  xmm0, xmm0, xmm0
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm7, xmm2, xmm2
    vcomiss xmm7, cs:__real@3f800000
  }
  if ( !v14 )
  {
    __asm
    {
      vmovaps [rsp+0E8h+var_68], xmm8
      vxorps  xmm8, xmm8, xmm8
    }
    v24 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0xDu);
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x16u) )
    {
      PM_MeleeChargeFriction(pm, pml);
LABEL_44:
      __asm { vmovaps xmm8, [rsp+0E8h+var_68] }
      goto LABEL_45;
    }
    if ( v24 )
    {
LABEL_41:
      if ( _RBX->pm_type == 5 )
      {
        __asm
        {
          vmulss  xmm0, xmm7, dword ptr [rbp+24h]
          vmulss  xmm1, xmm0, cs:__real@40a00000
          vaddss  xmm8, xmm8, xmm1
        }
      }
      __asm
      {
        vsubss  xmm0, xmm7, xmm8
        vmaxss  xmm0, xmm0, xmm10
        vdivss  xmm2, xmm0, xmm7
        vmulss  xmm1, xmm2, dword ptr [rbx+3Ch]
        vmulss  xmm0, xmm2, dword ptr [rbx+40h]
        vmovss  dword ptr [rbx+3Ch], xmm1
        vmulss  xmm1, xmm2, dword ptr [rbx+44h]
        vmovss  dword ptr [rbx+44h], xmm1
        vmovss  dword ptr [rbx+40h], xmm0
      }
      goto LABEL_44;
    }
    __asm { vmovaps [rsp+0E8h+var_78], xmm9 }
    v25 = PM_IsInAir(pm);
    v26 = pm->ground;
    v27 = (_RBX->slideState.flags & 0x40) != 0;
    v28 = v26->walking && (v26->trace.surfaceFlags & 2) == 0;
    *(double *)&_XMM0 = Slide_SlideOutInAirFrictionScale(_RBX, pm->cmd.serverTime);
    _R15 = DCONST_DVARFLT_stopspeed;
    __asm { vmovaps xmm9, xmm0 }
    if ( !DCONST_DVARFLT_stopspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stopspeed") )
      __debugbreak();
    __asm { vmovaps [rsp+0E8h+var_48], xmm6 }
    Dvar_CheckFrontendServerThread(_R15);
    __asm { vcomiss xmm7, dword ptr [r15+28h] }
    if ( v14 )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_stopspeed, "stopspeed");
      __asm { vmovaps xmm6, xmm0 }
    }
    else
    {
      __asm { vmovaps xmm6, xmm7 }
    }
    if ( v28 )
    {
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0xCu) )
      {
        __asm { vmulss  xmm6, xmm6, cs:__real@3e99999a }
      }
      else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x13u) )
      {
        Jump_ReduceFriction(pm, _RBX);
        __asm { vmulss  xmm6, xmm6, xmm0 }
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x1Du) )
      {
        Slide_FrictionScale(pm, pml);
        __asm { vmulss  xmm6, xmm6, xmm0 }
      }
      Slide_SlideOutFrictionScale(_RBX, pm->cmd.serverTime);
      __asm { vmulss  xmm6, xmm6, xmm0 }
    }
    else
    {
      if ( !v25 || !v27 )
        goto LABEL_40;
      __asm
      {
        vucomiss xmm9, cs:__real@ff7fffff
        vmulss  xmm6, xmm6, xmm9
      }
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_friction, "friction");
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm8, xmm1, dword ptr [rbp+24h]
    }
LABEL_40:
    __asm
    {
      vmovaps xmm6, [rsp+0E8h+var_48]
      vmovaps xmm9, [rsp+0E8h+var_78]
    }
    goto LABEL_41;
  }
  *(_QWORD *)_RBX->velocity.v = 0i64;
  _RBX->velocity.v[2] = 0.0;
LABEL_45:
  __asm
  {
    vmovaps xmm7, [rsp+0E8h+var_58]
    vmovaps xmm10, [rsp+0E8h+var_88]
  }
}

/*
==============
PM_GetAccelerationForStance
==============
*/
float PM_GetAccelerationForStance(const playerState_s *ps)
{
  __int32 v3; 
  __int32 v4; 
  const dvar_t *v7; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  v3 = PM_GetEffectiveStance(ps) - 1;
  if ( !v3 )
    goto LABEL_6;
  v4 = v3 - 1;
  if ( !v4 )
  {
    __asm { vmovss  xmm6, cs:__real@41400000 }
    goto LABEL_7;
  }
  if ( v4 == 1 )
  {
LABEL_6:
    __asm { vmovss  xmm6, cs:__real@41980000 }
    goto LABEL_7;
  }
  __asm { vmovss  xmm6, cs:__real@41100000 }
LABEL_7:
  if ( !BG_GetSuitDef(ps->suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3194, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
    __debugbreak();
  __asm { vmulss  xmm6, xmm6, dword ptr [rbx+48h] }
  v7 = DCONST_DVARMPFLT_player_globalAccelScale;
  if ( !DCONST_DVARMPFLT_player_globalAccelScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_globalAccelScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rbx+28h]
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
PM_GetBlackHoleStrafeData
==============
*/
void PM_GetBlackHoleStrafeData(const pml_t *pml, int *outRunBackwards, float *outMoveForward, float *outMoveRight)
{
  bool v10; 
  bool v11; 

  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  _RBP = outMoveRight;
  __asm { vmovaps [rsp+78h+var_48], xmm7 }
  _RSI = outMoveForward;
  _RBX = pml;
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8709, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !outRunBackwards && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8710, ASSERT_TYPE_ASSERT, "(outRunBackwards)", (const char *)&queryFormat, "outRunBackwards") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8711, ASSERT_TYPE_ASSERT, "(outMoveForward)", (const char *)&queryFormat, "outMoveForward") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8712, ASSERT_TYPE_ASSERT, "(outMoveRight)", (const char *)&queryFormat, "outMoveRight") )
    __debugbreak();
  v10 = _RBX == NULL;
  if ( !_RBX )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8692, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm7, dword ptr [rbx+200h]
  }
  if ( v10 )
  {
    __asm { vucomiss xmm7, dword ptr [rbx+204h] }
    if ( v10 )
    {
      __asm { vucomiss xmm7, dword ptr [rbx+208h] }
      if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8713, ASSERT_TYPE_ASSERT, "(PM_IsAffectedByBlackHole( pml ))", (const char *)&queryFormat, "PM_IsAffectedByBlackHole( pml )") )
        __debugbreak();
    }
  }
  __asm
  {
    vmovss  xmm5, dword ptr [rbx+204h]
    vmovss  xmm6, dword ptr [rbx+208h]
    vmovss  xmm4, dword ptr [rbx+200h]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm4, xmm4, xmm1
    vmulss  xmm0, xmm4, dword ptr [rbx]
    vmulss  xmm3, xmm5, xmm1
    vmulss  xmm5, xmm6, xmm1
    vmulss  xmm1, xmm3, dword ptr [rbx+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rbx+8]
    vmulss  xmm0, xmm4, dword ptr [rbx+0Ch]
    vaddss  xmm6, xmm2, xmm1
    vmulss  xmm1, xmm3, dword ptr [rbx+10h]
    vcomiss xmm6, xmm7
    vmovaps xmm7, [rsp+78h+var_48]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rbx+14h]
  }
  *outRunBackwards = 0;
  __asm
  {
    vmovss  dword ptr [rsi], xmm6
    vmovaps xmm6, [rsp+78h+var_38]
    vaddss  xmm0, xmm2, xmm1
    vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rbp+0], xmm3
  }
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

__int64 __fastcall PM_GetFootstepActionType(pmove_t *pm, double stairsAscentRatio)
{
  playerState_s *ps; 
  bool v6; 
  bool v8; 
  char v9; 
  char v10; 
  __int64 result; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7572, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7572, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 8u);
  _RBX = DCONST_DVARFLT_player_stairs_footstep_sound_minratio;
  v8 = v6;
  if ( !DCONST_DVARFLT_player_stairs_footstep_sound_minratio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_footstep_sound_minratio") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vcomiss xmm0, xmm6
  }
  if ( v9 | v10 )
  {
    result = 2i64;
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
      vcomiss xmm6, xmm0
    }
    if ( v9 | v10 )
    {
      result = 3i64;
      __asm { vmovaps xmm6, [rsp+58h+var_18] }
    }
    else
    {
      __asm { vmovaps xmm6, [rsp+58h+var_18] }
      return v8;
    }
  }
  return result;
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

void __fastcall PM_GetNominalMaxSpeed(const pmove_t *const pm, const pml_t *const pml, vec3_t *maxSpeeds, double _XMM3_8)
{
  unsigned int v24; 
  unsigned int v25; 
  bool v28; 
  playerState_s *ps; 
  const dvar_t *v57; 
  bool IsUsingOffhandGestureWeaponADSSupport; 
  playerState_s *v59; 
  bool v60; 
  BgWeaponMap *weaponMap; 
  const Weapon *OffhandGestureWeapon; 
  const Weapon *v63; 
  bool v64; 
  const dvar_t *v73; 
  char v77; 
  bool v78; 
  bool CanJog; 
  const char *v108; 
  unsigned int v128; 
  float adsMoveSpeedScaleOut; 
  float moveSpeedScaleOut; 
  vec3_t wishDir; 
  char v163; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _R15 = maxSpeeds;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7788, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7789, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
    __debugbreak();
  __asm
  {
    vxorps  xmm14, xmm14, xmm14
    vcvtsi2ss xmm14, xmm14, eax
  }
  _R14 = BG_GetSuitDef(pm->ps->suitIndex);
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7796, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  _ER9 = pm->cmd.rightmove;
  _ER10 = pm->cmd.forwardmove;
  __asm { vmovsd  xmm6, cs:__real@3eb0c6f7a0b5ed8d }
  v24 = abs8(pm->cmd.rightmove);
  v25 = abs8(pm->cmd.forwardmove);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm12, xmm12, xmm12
  }
  v28 = __CFADD__(_ER9 * _ER9, _ER10 * _ER10) || _ER9 * _ER9 + _ER10 * _ER10 == 0;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, edx
    vsqrtss xmm2, xmm0, xmm0
    vcvtss2sd xmm1, xmm2, xmm2
    vcomisd xmm1, xmm6
  }
  if ( v28 )
  {
    __asm { vxorps  xmm3, xmm3, xmm3 }
  }
  else
  {
    v28 = v25 <= v24;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r8d
      vdivss  xmm3, xmm0, xmm2
    }
  }
  __asm
  {
    vmovss  xmm13, cs:__real@3f800000
    vmovd   xmm0, r10d
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm0, xmm0, cs:__real@3c010204
    vmulss  xmm4, xmm0, xmm3
    vmulss  xmm0, xmm4, xmm4
    vmovd   xmm1, r9d
    vcvtdq2ps xmm1, xmm1
    vmulss  xmm2, xmm1, cs:__real@3c010204
    vmulss  xmm5, xmm2, xmm3
    vmulss  xmm3, xmm5, xmm5
    vaddss  xmm1, xmm3, xmm0
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm2, xmm0, xmm0
    vcomisd xmm2, xmm6
  }
  if ( v28 )
  {
    __asm
    {
      vmovaps xmm15, xmm13
      vxorps  xmm1, xmm1, xmm1
    }
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm13, xmm0
      vmulss  xmm15, xmm4, xmm0
      vmulss  xmm1, xmm5, xmm0
    }
  }
  ps = pm->ps;
  __asm
  {
    vmovss  xmm9, cs:__real@3ecccccd
    vmovss  [rsp+158h+var_114], xmm1
    vmovaps xmm7, xmm13
  }
  *(float *)&_XMM0 = PM_SprintScale(ps);
  __asm { vmovaps xmm8, xmm0 }
  if ( BG_IsSuperSprinting(pm->ps) )
  {
    v57 = DCONST_DVARFLT_superSprintSpeedScale;
    if ( !DCONST_DVARFLT_superSprintSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v57);
    __asm { vmulss  xmm8, xmm8, dword ptr [rdi+28h] }
  }
  IsUsingOffhandGestureWeaponADSSupport = BG_IsUsingOffhandGestureWeaponADSSupport(pm->weaponMap, pm->ps);
  v59 = pm->ps;
  v60 = IsUsingOffhandGestureWeaponADSSupport;
  weaponMap = pm->weaponMap;
  if ( IsUsingOffhandGestureWeaponADSSupport )
    OffhandGestureWeapon = BG_GetOffhandGestureWeapon(weaponMap, v59);
  else
    OffhandGestureWeapon = BG_GetCurrentWeaponForPlayer(weaponMap, v59);
  v63 = OffhandGestureWeapon;
  v64 = BG_UsingAlternate(pm->ps) && !v60;
  if ( v63->weaponIdx )
  {
    BG_GetMoveSpeedScale(pm->weaponMap, pm->ps, v63, v64, &moveSpeedScaleOut, &adsMoveSpeedScaleOut);
    *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(pm->weaponMap, pm->ps);
    __asm { vmovaps xmm6, xmm0 }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 0) )
    {
      __asm
      {
        vcomiss xmm6, xmm12
        vmovss  xmm7, [rsp+158h+var_118]
        vmulss  xmm9, xmm7, xmm9
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, [rsp+158h+var_118]
        vmovss  xmm7, [rsp+158h+moveSpeedScaleOut]
        vmulss  xmm9, xmm0, xmm9
      }
    }
    __asm { vmulss  xmm8, xmm8, xmm7 }
  }
  *(float *)&_XMM0 = PM_CmdScaleForStance(pm);
  __asm
  {
    vmovaps xmm6, xmm0
    vmulss  xmm7, xmm7, xmm0
    vmulss  xmm8, xmm8, xmm0
  }
  *(double *)&_XMM0 = BG_ADSBobRate(v63, v64);
  _RAX = pm->ps;
  __asm
  {
    vmulss  xmm1, xmm9, xmm6
    vmulss  xmm6, xmm0, xmm1
    vmovss  xmm0, dword ptr [rax+52E0h]
    vcomiss xmm0, xmm12
  }
  if ( !(v77 | v78) )
  {
    __asm
    {
      vmulss  xmm7, xmm0, xmm7
      vmulss  xmm6, xmm6, xmm0
      vmulss  xmm8, xmm8, xmm0
    }
  }
  v73 = DCONST_DVARBOOL_maxSpeedCalcDirectionIndependent;
  __asm
  {
    vmovaps xmm9, xmm7
    vmovaps xmm10, xmm6
    vmovaps xmm11, xmm8
  }
  if ( !DCONST_DVARBOOL_maxSpeedCalcDirectionIndependent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "maxSpeedCalcDirectionIndependent") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v73);
  v77 = 0;
  v78 = !v73->current.enabled;
  if ( v73->current.enabled )
  {
    _EAX = pm->cmd.rightmove;
    _ECX = pm->cmd.forwardmove;
    __asm
    {
      vmovd   xmm3, eax
      vcvtdq2ps xmm3, xmm3
      vmulss  xmm0, xmm3, dword ptr [rsi+0Ch]
      vmovd   xmm2, ecx
      vcvtdq2ps xmm2, xmm2
      vmulss  xmm1, xmm2, dword ptr [rsi]
      vaddss  xmm4, xmm1, xmm0
      vmulss  xmm0, xmm2, dword ptr [rsi+4]
      vmulss  xmm1, xmm3, dword ptr [rsi+10h]
      vaddss  xmm5, xmm1, xmm0
      vmulss  xmm0, xmm2, dword ptr [rsi+8]
      vmulss  xmm1, xmm3, dword ptr [rsi+14h]
      vaddss  xmm3, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm1, xmm2, xmm2
      vcvtss2sd xmm0, xmm1, xmm1
      vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
      vmovss  dword ptr [rsp+158h+wishDir], xmm4
      vmovss  dword ptr [rsp+158h+wishDir+4], xmm5
      vmovss  dword ptr [rsp+158h+wishDir+8], xmm3
    }
    if ( !v78 )
    {
      __asm
      {
        vdivss  xmm2, xmm13, xmm1
        vmulss  xmm0, xmm2, xmm4
        vmovss  dword ptr [rsp+158h+wishDir], xmm0
        vmulss  xmm0, xmm2, xmm3
        vmulss  xmm1, xmm2, xmm5
        vmovss  dword ptr [rsp+158h+wishDir+8], xmm0
        vmovss  dword ptr [rsp+158h+wishDir+4], xmm1
      }
      *(double *)&_XMM0 = PM_Slope_GetSpeedScale(&wishDir, pm);
      __asm
      {
        vmulss  xmm7, xmm7, xmm0
        vmulss  xmm6, xmm6, xmm0
        vmulss  xmm8, xmm8, xmm0
        vmulss  xmm9, xmm9, xmm0
        vmulss  xmm10, xmm10, xmm0
        vmulss  xmm11, xmm11, xmm0
      }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vcomiss xmm0, xmm12
    }
    if ( v77 | v78 || (CanJog = BG_CanJog(pm->weaponMap, pm->ps), v77 = 0, !CanJog) )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vcomiss xmm0, xmm12
      }
      if ( !v77 )
        goto LABEL_51;
      _RDI = DCONST_DVARFLT_player_backSpeedScale;
      if ( !DCONST_DVARFLT_player_backSpeedScale )
      {
        v108 = "player_backSpeedScale";
LABEL_48:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v108) )
          __debugbreak();
      }
    }
    else
    {
      _RDI = DCONST_DVARFLT_player_jogForwardSpeedScale;
      if ( !DCONST_DVARFLT_player_jogForwardSpeedScale )
      {
        v108 = "player_jogForwardSpeedScale";
        goto LABEL_48;
      }
    }
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm8, xmm8, xmm0
      vmulss  xmm6, xmm6, xmm0
      vmulss  xmm7, xmm7, xmm0
    }
LABEL_51:
    _RDI = DCONST_DVARFLT_player_strafeSpeedScale;
    if ( !DCONST_DVARFLT_player_strafeSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_strafeSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm9, xmm9, xmm0
      vmulss  xmm10, xmm10, xmm0
      vmulss  xmm11, xmm11, xmm0
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 0x1Du) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+0F0h]
        vmulss  xmm9, xmm0, xmm9
        vmulss  xmm10, xmm0, xmm10
        vmulss  xmm11, xmm0, xmm11
      }
    }
  }
  __asm
  {
    vmovss  xmm3, [rsp+158h+var_114]
    vmulss  xmm0, xmm7, xmm14
    vmulss  xmm1, xmm0, xmm15
    vmovss  [rsp+158h+var_F8], xmm1
    vmulss  xmm2, xmm6, xmm14
    vmulss  xmm0, xmm2, xmm15
    vmovss  [rsp+158h+var_F4], xmm0
    vmulss  xmm1, xmm8, xmm14
    vmulss  xmm2, xmm1, xmm15
    vmulss  xmm0, xmm9, xmm14
    vmulss  xmm1, xmm0, xmm3
    vmovss  [rsp+158h+var_F0], xmm2
    vmulss  xmm2, xmm10, xmm14
    vmulss  xmm0, xmm2, xmm3
    vmovss  dword ptr [rsp+158h+wishDir], xmm1
    vmulss  xmm1, xmm11, xmm14
    vmulss  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+158h+wishDir+8], xmm2
    vmovss  dword ptr [rsp+158h+wishDir+4], xmm0
  }
  v128 = 0;
  do
  {
    _RDI = (int)v128;
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+rdi*4+158h+wishDir]
      vmovss  xmm4, [rsp+rdi*4+158h+var_F8]
      vmulss  xmm1, xmm4, dword ptr [rsi]
      vmulss  xmm0, xmm6, dword ptr [rsi+0Ch]
      vmulss  xmm2, xmm4, dword ptr [rsi+4]
      vaddss  xmm5, xmm1, xmm0
      vmulss  xmm0, xmm6, dword ptr [rsi+10h]
      vmulss  xmm1, xmm6, dword ptr [rsi+14h]
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm0, xmm4, dword ptr [rsi+8]
      vaddss  xmm4, xmm1, xmm0
      vmulss  xmm2, xmm3, xmm3
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm6, xmm2, xmm2
    }
    ++v128;
    __asm { vmovss  dword ptr [r15+rdi*4], xmm6 }
  }
  while ( v128 <= 2 );
  _R11 = &v163;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
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
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8736, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8736, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+3Ch]
    vmovss  xmm4, dword ptr [rbx+40h]
    vmovss  xmm7, dword ptr [rbx+44h]
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm5, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm3, xmm0, dword ptr [rdi+4]
    vmulss  xmm1, xmm6, xmm5
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vmovaps xmm6, [rsp+58h+var_18]
    vmulss  xmm0, xmm7, xmm5
    vmulss  xmm1, xmm0, dword ptr [rdi+8]
    vmovaps xmm7, [rsp+58h+var_28]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm3, xmm4, xmm1
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm3, xmm2
  }
  return 0;
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
  int v11; 
  int v12; 
  const dvar_t *v15; 
  bool v16; 
  const dvar_t *v17; 
  const dvar_t *v20; 
  int v21; 
  int v26; 
  const dvar_t *v27; 
  int v33; 
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
  v11 = MaxSprintTime;
  v33 = lastSprintStart;
  v12 = 0;
  lastSuperSprintEnd = ps->sprintState.lastSuperSprintEnd;
  lastSuperSprintStart = ps->sprintState.lastSuperSprintStart;
  sprintStartMaxLength = ps->sprintState.sprintStartMaxLength;
  if ( ps->sprintState.sprintDelay )
  {
    _RBX = DCONST_DVARFLT_player_sprintRechargePause;
    if ( !DCONST_DVARFLT_player_sprintRechargePause && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintRechargePause") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si r12d, xmm1
    }
  }
  else
  {
    _ER12 = 0;
  }
  v15 = DVARBOOL_killswitch_sprint_slide_exploit_fix;
  if ( !DVARBOOL_killswitch_sprint_slide_exploit_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_sprint_slide_exploit_fix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v16 = !v15->current.enabled && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du);
  if ( lastSprintEnd < lastSprintStart || v16 )
  {
    _EBX = 0;
  }
  else
  {
    v17 = DCONST_DVARFLT_player_sprintRechargeScale;
    if ( !DCONST_DVARFLT_player_sprintRechargeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintRechargeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, dword ptr [rbx+28h]
      vcvttss2si ebx, xmm1
    }
  }
  v20 = DCONST_DVARMPBOOL_superSprintEnable;
  if ( !DCONST_DVARMPBOOL_superSprintEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v20->current.enabled )
  {
    if ( lastSuperSprintEnd >= lastSuperSprintStart )
      gametime = ps->sprintState.lastSuperSprintEnd;
    v21 = I_clamp(gametime - ps->sprintState.lastSuperSprintStart, 0, v11);
    if ( BG_GameInterface_HasPerk_SuperSprintEnhanced(ps) )
    {
      *(double *)&_XMM0 = BG_GameInterface_SuperSprint_Enhanced_GetRechargeScale();
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ebx
        vmulss  xmm2, xmm0, xmm1
        vcvttss2si ebx, xmm2
      }
      v26 = sprintStartMaxLength + _EBX - v21 - _ER12;
    }
    else
    {
      v27 = DVARFLT_superSprintRechargeScale;
      if ( !DVARFLT_superSprintRechargeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintRechargeScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v27);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebx
        vmulss  xmm2, xmm0, dword ptr [rdi+28h]
        vcvttss2si ebx, xmm2
      }
      v26 = sprintStartMaxLength + _EBX - v21 - _ER12;
    }
  }
  else
  {
    if ( lastSprintEnd >= v33 )
      gametime = ps->sprintState.lastSprintEnd;
    v26 = sprintStartMaxLength + _EBX - _ER12 - I_clamp(gametime - ps->sprintState.lastSprintStart, 0, v11);
  }
  if ( v26 > 0 )
    v12 = v26;
  if ( v12 < v11 )
    return (unsigned int)v12;
  return (unsigned int)v11;
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
    PM_GetViewHeightLerpTime(ps, ps->viewHeightLerpTarget, ps->viewHeightLerpDown);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ecx
      vdivss  xmm2, xmm1, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm2, xmm0
    }
    if ( pm->cmd.serverTime >= (unsigned int)ps->viewHeightLerpTime )
      __asm { vminss  xmm0, xmm2, cs:__real@3f800000 }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
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
  const dvar_t *v8; 
  const dvar_t *v9; 
  int v15; 

  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5654, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( iTarget == BG_Suit_GetProneViewHeight(SuitDef) )
  {
    v8 = DCONST_DVARBOOL_stretchDirectStandToProneTime;
    if ( !DCONST_DVARBOOL_stretchDirectStandToProneTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stretchDirectStandToProneTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x36u) )
    {
      v9 = DCONST_DVARINT_stanceStandToProneHoldTime;
      if ( !DCONST_DVARINT_stanceStandToProneHoldTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stanceStandToProneHoldTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.integer - 200 > 0 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, cs:__real@bf2aaaab
          vcvttss2si ecx, xmm1
        }
        return 400 - _ECX;
      }
    }
    return 400;
  }
  v15 = 200;
  if ( iTarget != SuitDef->viewheight_crouch )
    return v15;
  if ( bDown )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
      return Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_mantle_standToCrouchViewHeightLerpTimeMs, "mantle_standToCrouchViewHeightLerpTimeMs");
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_stretchDirectStandToProneTime, "stretchDirectStandToProneTime") && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x36u) && Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_stanceStandToProneHoldTime, "stanceStandToProneHoldTime") - 200 > 0 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@beaaaaab
        vcvttss2si ecx, xmm1
      }
      return 200 - _ECX;
    }
    return v15;
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
  bool v3; 
  bool v4; 

  _RBX = pml;
  v3 = pml == NULL;
  if ( !pml )
  {
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8692, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml");
    v3 = !v4;
    if ( v4 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rbx+200h]
  }
  if ( !v3 )
    return 1i64;
  __asm { vucomiss xmm0, dword ptr [rbx+204h] }
  if ( !v3 )
    return 1i64;
  __asm { vucomiss xmm0, dword ptr [rbx+208h] }
  return !v3;
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
  unsigned int Animset; 
  unsigned int Anim; 
  bool IsKnockbackAnim; 
  const SuitDef *SuitDef; 
  char v49; 
  char v50; 
  PlayerAnimStrafeStates v55; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5408, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5408, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x29u) )
  {
    if ( PlayerASM_IsEnabled() )
    {
      Animset = BG_PlayerASM_GetAnimset(_RDI);
      Anim = BG_PlayerASM_GetAnim(_RDI, MOVEMENT);
      IsKnockbackAnim = BG_PlayerASM_IsKnockbackAlias(Anim, Animset) != 0;
    }
    else
    {
      SuitDef = BG_GetSuitDef(_RDI->suitIndex);
      IsKnockbackAnim = BG_IsKnockbackAnim(_RDI->legsAnim, SuitDef->suitAnimType);
    }
    if ( !IsKnockbackAnim )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rdi+40h]
        vmovss  xmm4, dword ptr [rdi+3Ch]
      }
      _RBX = DCONST_DVARFLT_player_strafeAnimCosAngle;
      __asm
      {
        vmovaps [rsp+0A8h+var_38], xmm6
        vmovaps [rsp+0A8h+var_48], xmm7
        vmovaps [rsp+0A8h+var_58], xmm8
        vmovaps [rsp+0A8h+var_68], xmm11
        vmovss  xmm7, cs:__real@3f800000
        vmovss  xmm6, dword ptr [rdi+44h]
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm7, xmm0
        vdivss  xmm1, xmm7, xmm0
        vmulss  xmm4, xmm4, xmm1
        vmulss  xmm0, xmm4, dword ptr [rbp+0]
        vmulss  xmm3, xmm5, xmm1
        vmulss  xmm5, xmm6, xmm1
        vmulss  xmm1, xmm3, dword ptr [rbp+4]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, dword ptr [rbp+8]
        vmulss  xmm0, xmm4, dword ptr [rbp+0Ch]
        vaddss  xmm11, xmm2, xmm1
        vmulss  xmm1, xmm3, dword ptr [rbp+10h]
        vxorps  xmm6, xmm11, cs:__xmm@80000000800000008000000080000000
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, dword ptr [rbp+14h]
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm8, xmm2, xmm1
        vmulss  xmm2, xmm8, xmm8
        vaddss  xmm1, xmm2, xmm0
        vsqrtss xmm3, xmm1, xmm1
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm7, xmm0
        vdivss  xmm0, xmm7, xmm0
        vmovaps xmm7, [rsp+0A8h+var_48]
        vmulss  xmm6, xmm0, xmm6
      }
      if ( !DCONST_DVARFLT_player_strafeAnimCosAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_strafeAnimCosAngle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( !(v49 | v50) )
        goto LABEL_21;
      _RBX = DCONST_DVARFLT_player_strafeAnimCosAngle;
      if ( !DCONST_DVARFLT_player_strafeAnimCosAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_strafeAnimCosAngle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
        vcomiss xmm6, xmm1
      }
      if ( v49 )
      {
LABEL_21:
        v55 = ANIM_STRAFE_NOT;
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm8, xmm0
        }
        v55 = ANIM_STRAFE_LEFT;
      }
      PM_SetStrafeCondition(pm, v55);
      __asm { vcomiss xmm11, cs:__real@80000000 }
      BG_AnimScriptAnimation(pm->m_bgHandler, _RDI, AISTATE_COMBAT, ANIM_MT_KNOCKBACK, 0, 0);
      __asm
      {
        vmovaps xmm11, [rsp+0A8h+var_68]
        vmovaps xmm8, [rsp+0A8h+var_58]
        vmovaps xmm6, [rsp+0A8h+var_38]
      }
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
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9157, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9157, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( pm->cmd.forwardmove )
    return 1;
  if ( pm->cmd.rightmove )
    return 1;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+3Ch]
    vmovss  xmm2, dword ptr [rdi+40h]
    vmovss  xmm3, dword ptr [rdi+44h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, cs:__real@2b8cbccc
  }
  return pm->cmd.rightmove != 0;
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
__int64 PM_LocalCheckProne(pmove_t *pm, pml_t *pml, playerState_s *ps, int *penetrationEntity)
{
  Physics_WorldId worldId; 
  FeetDirection ProneFeetDirection; 
  BgGroundState *ground; 
  FeetDirection feetDirection; 
  const BgHandler *handler; 
  unsigned __int8 v15; 
  int isOnGround; 
  __int64 result; 
  float v23; 
  float v24; 
  float v25; 
  char v26; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _RBP = ps;
  worldId = ((unsigned int (__fastcall *)(const BgHandler *, pml_t *))pm->m_bgHandler->GetPhysicsWorldId)(pm->m_bgHandler, pml);
  ProneFeetDirection = PM_GetProneFeetDirection(_RBP);
  ground = pm->ground;
  feetDirection = ProneFeetDirection;
  handler = pm->m_bgHandler;
  v15 = !ground->groundPlane || ground->trace.walkable;
  __asm { vmovss  xmm6, dword ptr [rbp+26Ch] }
  isOnGround = _RBP->groundEntityNum != 2047;
  *(double *)&_XMM0 = BG_Suit_GetBoundsHeight(_RBP, PM_EFF_STANCE_PRONE);
  __asm
  {
    vmovss  xmm1, cs:__real@42480000
    vmovss  xmm3, cs:__real@41700000; fSize
    vmovss  [rsp+0C8h+var_58], xmm1
    vmovss  [rsp+0C8h+var_A0], xmm6
    vmovss  [rsp+0C8h+var_A8], xmm0
  }
  LOBYTE(result) = BG_CheckProne(_RBP, _RBP->clientNum, &_RBP->origin, *(const float *)&_XMM3, v23, v24, &pm->fTorsoPitch, &pm->fWaistPitch, 1, isOnGround, v15, handler, worldId, PCT_CLIENT, v25, feetDirection, penetrationEntity, NULL);
  _R11 = &v26;
  result = (unsigned __int8)result;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
PM_MeleeCalcChargeDist
==============
*/
unsigned __int8 PM_MeleeCalcChargeDist(const pmove_t *pm, const pml_t *pml, int meleeChargeEnt)
{
  int v7; 
  Bounds *bounds; 
  int v11; 
  unsigned int serverTime; 
  bool v32; 
  __int64 v33; 
  BOOL fmt; 
  char *fmta; 
  BgAntiLagEntityInfo *outInfo; 
  vec3_t outVictimPos; 
  vec3_t outAttackerPos; 
  char v44[12]; 
  vec2_t dir; 
  BgAntiLagEntityInfo v46; 

  v46.boneInfo.boneList.m_usedSize = 0;
  v46.boneInfo.boneList.m_maxSize = 0;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10782, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10782, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+168h+var_28], xmm6
    vmovaps [rsp+168h+var_38], xmm7
  }
  if ( meleeChargeEnt < 0 || (unsigned int)meleeChargeEnt > 0x7FE || !BgAntiLag::GetEntityInfoAtTime((BgAntiLag *)pm->antiLag, pm->ps->clientNum, meleeChargeEnt, 0, pm->cmd.serverTime, &v46) )
    goto LABEL_24;
  LOBYTE(fmt) = (v46.flags & 4) != 0;
  pm->GetEntityBounds((pmove_t *)pm, meleeChargeEnt, v46.suitIndex, PM_EFF_STANCE_DEFAULT, fmt, (Bounds *)v44);
  v7 = Vec2MinorAxis(&dir);
  _RBX = v7;
  if ( (unsigned int)v7 >= 3 )
  {
    LODWORD(outInfo) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outInfo, 3) )
      __debugbreak();
  }
  __asm { vmovss  xmm6, dword ptr [rsp+rbx*4+168h+dir] }
  bounds = pm->bounds;
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10798, ASSERT_TYPE_ASSERT, "( playerBounds ) != ( nullptr )", "%s != %s\n\t%p, %p", "playerBounds", "nullptr", NULL, NULL) )
    __debugbreak();
  v11 = Vec2MinorAxis((const vec2_t *)&bounds->halfSize);
  _RAX = vec3_t::operator[](&bounds->halfSize, v11);
  __asm { vmovss  xmm7, dword ptr [rax] }
  if ( PM_MeleeGetEntityOriginVelocity(pm, meleeChargeEnt, &outAttackerPos, &outVictimPos, NULL) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+168h+outVictimPos]
      vsubss  xmm3, xmm0, dword ptr [rsp+168h+outAttackerPos]
      vmovss  xmm1, dword ptr [rsp+168h+outVictimPos+4]
      vsubss  xmm2, xmm1, dword ptr [rsp+168h+outAttackerPos+4]
      vmovss  xmm0, dword ptr [rsp+168h+outVictimPos+8]
      vsubss  xmm4, xmm0, dword ptr [rsp+168h+outAttackerPos+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vmovss  xmm2, cs:__real@437f0000; max
      vsubss  xmm3, xmm1, xmm6
      vsubss  xmm0, xmm3, xmm7; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm6, xmm0 }
    if ( !pm->isExtrapolation && !pm->initialCall && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_melee_debug, "melee_debug") )
    {
      serverTime = pm->cmd.serverTime;
      v32 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      v33 = 67i64;
      __asm { vcvtss2sd xmm0, xmm6, xmm6 }
      if ( v32 )
        v33 = 83i64;
      __asm { vmovsd  [rsp+168h+fmt], xmm0 }
      Com_Printf(0, "CHARGEDIST [%c %i] dist %.2f\n", v33, serverTime, fmta);
    }
    __asm { vcvttss2si eax, xmm6 }
  }
  else
  {
LABEL_24:
    LOBYTE(_EAX) = 0;
  }
  __asm
  {
    vmovaps xmm7, [rsp+168h+var_38]
    vmovaps xmm6, [rsp+168h+var_28]
  }
  return _EAX;
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
  __int16 groundRefEnt; 
  __int16 meleeChargeEnt; 
  bool v8; 
  int EntityOriginVelocity; 
  vec3_t outAttackerPos; 
  vec3_t outVictimPos; 

  _RBP = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2302, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2302, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x2Au) )
  {
    groundRefEnt = _RBX->groundRefEnt;
    if ( groundRefEnt == 2047 || !groundRefEnt )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2304, ASSERT_TYPE_ASSERT, "(!BG_IsPlayerZeroG( ps ))", "%s\n\tZeroG melee not supported.", "!BG_IsPlayerZeroG( ps )") )
        __debugbreak();
    }
  }
  meleeChargeEnt = _RBX->meleeChargeEnt;
  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  v8 = 0;
  if ( meleeChargeEnt < 0 )
    goto LABEL_25;
  v8 = (unsigned __int16)meleeChargeEnt < 0x7FEu;
  if ( (unsigned __int16)meleeChargeEnt > 0x7FEu )
    goto LABEL_25;
  _RDI = DCONST_DVARFLT_player_meleeIdealEndDistance;
  if ( !DCONST_DVARFLT_player_meleeIdealEndDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_meleeIdealEndDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  EntityOriginVelocity = PM_MeleeGetEntityOriginVelocity(pm, _RBX->meleeChargeEnt, &outAttackerPos, &outVictimPos, NULL);
  v8 = 0;
  if ( EntityOriginVelocity )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+24h]
      vmulss  xmm0, xmm3, dword ptr [rbx+3Ch]
      vaddss  xmm2, xmm0, dword ptr [rsp+0A8h+outAttackerPos]
      vmulss  xmm0, xmm3, dword ptr [rbx+40h]
      vmovss  xmm1, dword ptr [rsp+0A8h+outVictimPos]
      vsubss  xmm4, xmm1, xmm2
      vaddss  xmm2, xmm0, dword ptr [rsp+0A8h+outAttackerPos+4]
      vmovss  xmm1, dword ptr [rsp+0A8h+outVictimPos+4]
      vsubss  xmm2, xmm1, xmm2
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm4, xmm3, xmm0
      vmulss  xmm1, xmm6, xmm6
      vcomiss xmm4, xmm1
    }
  }
  else
  {
LABEL_25:
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+40h]
      vmovss  xmm0, dword ptr [rbx+3Ch]
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm1, xmm1, xmm1
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm6, xmm2, xmm2
      vcomiss xmm6, cs:__real@3f800000
    }
    if ( v8 )
    {
      *(_QWORD *)_RBX->velocity.v = 0i64;
    }
    else
    {
      _RDI = DCONST_DVARFLT_player_meleeChargeFriction;
      if ( !DCONST_DVARFLT_player_meleeChargeFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_meleeChargeFriction") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vmulss  xmm1, xmm0, dword ptr [rbp+24h]
        vsubss  xmm3, xmm6, xmm1
        vxorps  xmm2, xmm2, xmm2
        vmaxss  xmm0, xmm3, xmm2
        vdivss  xmm4, xmm0, xmm6
        vmulss  xmm1, xmm4, dword ptr [rbx+3Ch]
        vmovss  dword ptr [rbx+3Ch], xmm1
        vmulss  xmm0, xmm4, dword ptr [rbx+40h]
        vmovss  dword ptr [rbx+40h], xmm0
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
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
  __int16 meleeChargeEnt; 
  int weaponDelay; 
  __int16 groundRefEnt; 
  char v41; 
  char v42; 
  bool v44; 
  unsigned int serverTime; 
  BgHandler_vtbl *v84; 
  char v95; 
  __int64 v98; 
  char *fmt; 
  __int64 v119; 
  __int64 v120; 
  __int64 v121; 
  __int64 v122; 
  __int64 v123; 
  __int64 v124; 
  __int64 v125; 
  __int64 v126; 
  __int64 v127; 
  __int64 v128; 
  __int64 v129; 
  __int64 v130; 
  __int64 v131; 
  __int64 v132; 
  vec3_t outVictimPos; 
  vec3_t outAttackerPos; 
  vec3_t outVictimVel; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10876, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10876, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !PM_MeleeIsValidCharge(pm) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10878, ASSERT_TYPE_ASSERT, "(PM_MeleeIsValidCharge( pm ))", (const char *)&queryFormat, "PM_MeleeIsValidCharge( pm )") )
    __debugbreak();
  meleeChargeEnt = _RBX->meleeChargeEnt;
  if ( (meleeChargeEnt < 0 || (unsigned __int16)meleeChargeEnt > 0x7FEu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10879, ASSERT_TYPE_ASSERT, "(PM_MeleeValidChargeTarget( ps->meleeChargeEnt ))", (const char *)&queryFormat, "PM_MeleeValidChargeTarget( ps->meleeChargeEnt )") )
    __debugbreak();
  if ( (PM_GetEffectiveStance(_RBX) & 0xFFFFFFFD) == 0 && PM_MeleeGetEntityOriginVelocity(pm, _RBX->meleeChargeEnt, &outAttackerPos, &outVictimPos, &outVictimVel) )
  {
    weaponDelay = _RBX->weapState[0].weaponDelay;
    __asm
    {
      vmovaps [rsp+1C8h+var_68], xmm9
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebp
      vmulss  xmm9, xmm0, cs:__real@3a83126f
      vmovaps [rsp+1C8h+var_88], xmm11
      vxorps  xmm11, xmm11, xmm11
      vcomiss xmm9, xmm11
      vmovaps [rsp+1C8h+var_38], xmm6
      vmovaps [rsp+1C8h+var_48], xmm7
      vmovaps [rsp+1C8h+var_58], xmm8
      vmovaps [rsp+1C8h+var_78], xmm10
      vmovaps [rsp+1C8h+var_98], xmm12
      vmovaps [rsp+1C8h+var_A8], xmm13
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x2Au) )
    {
      groundRefEnt = _RBX->groundRefEnt;
      if ( groundRefEnt == 2047 || !groundRefEnt )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10902, ASSERT_TYPE_ASSERT, "(!BG_IsPlayerZeroG( ps ))", "%s\n\tZero-G melee not supported.", "!BG_IsPlayerZeroG( ps )") )
          __debugbreak();
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1C8h+outAttackerPos]
      vsubss  xmm3, xmm0, dword ptr [rsp+1C8h+outVictimPos]
      vmovss  xmm1, dword ptr [rsp+1C8h+outAttackerPos+4]
      vsubss  xmm2, xmm1, dword ptr [rsp+1C8h+outVictimPos+4]
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm6, xmm1, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm0, xmm6, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
    }
    *(_QWORD *)_RBX->velocity.v = 0i64;
    _RSI = DCONST_DVARFLT_player_meleeIdealEndDistance;
    __asm
    {
      vmulss  xmm12, xmm3, xmm1
      vmulss  xmm13, xmm2, xmm1
    }
    if ( !DCONST_DVARFLT_player_meleeIdealEndDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_meleeIdealEndDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm7, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_player_meleeChargeMaxSpeed;
    if ( !DCONST_DVARFLT_player_meleeChargeMaxSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_meleeChargeMaxSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm10, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_player_meleeChargeMaxSpeedUp;
    if ( !DCONST_DVARFLT_player_meleeChargeMaxSpeedUp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_meleeChargeMaxSpeedUp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm8, dword ptr [rsi+28h]
      vcomiss xmm6, xmm7
    }
    v44 = !(v41 | v42);
    if ( !(v41 | v42) )
    {
      __asm
      {
        vmulss  xmm2, xmm9, dword ptr [rsp+1C8h+outVictimVel]
        vmulss  xmm0, xmm12, xmm7
        vaddss  xmm1, xmm0, dword ptr [rsp+1C8h+outVictimPos]
        vsubss  xmm3, xmm1, dword ptr [rsp+1C8h+outAttackerPos]
        vaddss  xmm0, xmm3, xmm2
        vmulss  xmm2, xmm9, dword ptr [rsp+1C8h+outVictimVel+4]
        vdivss  xmm6, xmm0, xmm9
        vmulss  xmm1, xmm13, xmm7
        vaddss  xmm0, xmm1, dword ptr [rsp+1C8h+outVictimPos+4]
        vsubss  xmm3, xmm0, dword ptr [rsp+1C8h+outAttackerPos+4]
        vmovss  xmm0, dword ptr [rsp+1C8h+outVictimPos+8]
        vaddss  xmm1, xmm3, xmm2
        vsubss  xmm2, xmm0, dword ptr [rsp+1C8h+outAttackerPos+8]
        vdivss  xmm7, xmm1, xmm9
        vmulss  xmm1, xmm11, xmm9
        vaddss  xmm2, xmm2, xmm1
        vdivss  xmm4, xmm2, xmm9
        vmulss  xmm0, xmm6, xmm6
        vmulss  xmm3, xmm7, xmm7
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm9, xmm2, xmm1
        vsqrtss xmm0, xmm9, xmm9
        vcomiss xmm0, xmm10
      }
      if ( !(v41 | v42) )
      {
        __asm
        {
          vcomiss xmm9, xmm11
          vmovaps xmm1, xmm9
          vrsqrtss xmm2, xmm1, xmm1
          vmulss  xmm0, xmm2, xmm6
          vmulss  xmm1, xmm2, xmm7
          vmulss  xmm6, xmm0, xmm10
          vmulss  xmm7, xmm1, xmm10
        }
      }
      __asm
      {
        vmovss  dword ptr [rbx+3Ch], xmm6
        vmovss  dword ptr [rbx+40h], xmm7
      }
    }
    if ( !PM_IsInAir(pm) )
      __asm { vcomiss xmm8, dword ptr [rbx+44h] }
    if ( !pm->isExtrapolation && !pm->initialCall && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_melee_debug, "melee_debug") )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1C8h+outVictimPos+8]
        vmovss  xmm1, dword ptr [rsp+1C8h+outAttackerPos+8]
        vmovss  xmm3, dword ptr [rsp+1C8h+outAttackerPos+4]
        vmovss  xmm5, dword ptr [rsp+1C8h+outAttackerPos]
        vmovss  xmm4, dword ptr [rsp+1C8h+outVictimPos]
        vmovss  xmm2, dword ptr [rsp+1C8h+outVictimPos+4]
        vmovss  xmm8, dword ptr [rbx+44h]
        vmovss  xmm9, dword ptr [rbx+40h]
        vmovss  xmm10, dword ptr [rbx+3Ch]
      }
      serverTime = pm->cmd.serverTime;
      __asm
      {
        vsubss  xmm6, xmm0, xmm1
        vcvtss2sd xmm12, xmm0, xmm0
      }
      v84 = pm->m_bgHandler->__vftable;
      __asm
      {
        vcvtss2sd xmm0, xmm3, xmm3
        vmovsd  [rsp+1C8h+var_118], xmm0
        vmovaps [rsp+1C8h+var_B8], xmm14
        vcvtss2sd xmm0, xmm5, xmm5
        vmovaps [rsp+1C8h+var_C8], xmm15
        vmovsd  [rsp+1C8h+var_110], xmm0
        vsubss  xmm11, xmm4, xmm5
        vsubss  xmm7, xmm2, xmm3
        vcvtss2sd xmm8, xmm8, xmm8
        vcvtss2sd xmm9, xmm9, xmm9
        vcvtss2sd xmm10, xmm10, xmm10
        vcvtss2sd xmm13, xmm2, xmm2
        vcvtss2sd xmm14, xmm4, xmm4
        vcvtss2sd xmm15, xmm1, xmm1
      }
      v95 = ((__int64 (*)(void))v84->IsServer)();
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+1C8h+outVictimVel+4]
        vmovss  xmm5, dword ptr [rsp+1C8h+outVictimVel]
        vmovsd  [rsp+1C8h+var_130], xmm8
        vmovsd  [rsp+1C8h+var_138], xmm9
        vmovsd  [rsp+1C8h+var_140], xmm10
      }
      v98 = 67i64;
      __asm { vcvtss2sd xmm0, xmm6, xmm6 }
      if ( v95 )
        v98 = 83i64;
      __asm
      {
        vcvtss2sd xmm1, xmm7, xmm7
        vmovsd  [rsp+1C8h+var_150], xmm0
        vmovsd  xmm0, [rsp+1C8h+var_118]
        vmovsd  [rsp+1C8h+var_158], xmm1
        vmovsd  xmm1, [rsp+1C8h+var_110]
        vxorps  xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm11, xmm11
        vmovsd  [rsp+1C8h+var_160], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+1C8h+var_168], xmm3
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  [rsp+1C8h+var_170], xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+1C8h+var_178], xmm5
        vmovsd  [rsp+1C8h+var_180], xmm12
        vmovsd  [rsp+1C8h+var_188], xmm13
        vmovsd  [rsp+1C8h+var_190], xmm14
        vmovsd  [rsp+1C8h+var_198], xmm15
        vmovsd  [rsp+1C8h+var_1A0], xmm0
        vmovsd  [rsp+1C8h+fmt], xmm1
      }
      Com_Printf(0, "MELEE [%c %i] attOrg %.2f %.2f %.2f | vicOrg %.2f %.2f %.2f | tarVel %.2f %.2f %.2f | attToVic %.2f, %.2f, %.2f | %c attVel %.2f %.2f %.2f | remain %i\n", v98, serverTime, fmt, v119, v120, v121, v122, v123, v124, v125, v126, v127, v128, v129, v44 + 48, v130, v131, v132, weaponDelay);
      __asm
      {
        vmovaps xmm15, [rsp+1C8h+var_C8]
        vmovaps xmm14, [rsp+1C8h+var_B8]
      }
    }
    __asm
    {
      vmovaps xmm12, [rsp+1C8h+var_98]
      vmovaps xmm10, [rsp+1C8h+var_78]
      vmovaps xmm8, [rsp+1C8h+var_58]
      vmovaps xmm7, [rsp+1C8h+var_48]
      vmovaps xmm6, [rsp+1C8h+var_38]
      vmovaps xmm13, [rsp+1C8h+var_A8]
      vmovaps xmm9, [rsp+1C8h+var_68]
      vmovaps xmm11, [rsp+1C8h+var_88]
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
  __int16 groundRefEnt; 
  int serverTime; 
  const dvar_t *v19; 
  const dvar_t *v26; 
  __int64 v28; 
  __int64 v30; 
  __int64 v31; 
  vec3_t outOrigin; 
  __int64 v34; 
  vec3_t origin; 
  vec3_t angles; 
  BgAntiLagEntityInfo v37; 
  BgAntiLagEntityInfo outInfo; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> in1; 
  tmat43_t<vec3_t> in2; 

  v34 = -2i64;
  __asm { vmovaps [rsp+2D0h+var_50], xmm6 }
  _R12 = outAttackerPos;
  _RDI = outVictimVel;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2199, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2199, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( meleeChargeEnt < 0 || (unsigned int)meleeChargeEnt > 0x7FE )
    goto LABEL_52;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x2Au) )
  {
    groundRefEnt = _RBX->groundRefEnt;
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
  _R12->v[0] = _RBX->origin.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+34h]
    vmovss  dword ptr [r12+4], xmm0
    vmovss  xmm1, dword ptr [rbx+38h]
    vmovss  dword ptr [r12+8], xmm1
  }
  serverTime = pm->cmd.serverTime;
  outInfo.boneInfo.boneList.m_usedSize = 0;
  outInfo.boneInfo.boneList.m_maxSize = 0;
  if ( !BgAntiLag::GetEntityInfoAtTime((BgAntiLag *)pm->antiLag, _RBX->clientNum, meleeChargeEnt, 9u, serverTime, &outInfo) )
    goto LABEL_52;
  if ( meleeChargeEnt != outInfo.entityIndex )
  {
    LODWORD(v31) = outInfo.entityIndex;
    LODWORD(v30) = meleeChargeEnt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2220, ASSERT_TYPE_ASSERT, "( meleeChargeEnt ) == ( victimInfo.entityIndex )", "%s == %s\n\t%i, %i", "meleeChargeEnt", "victimInfo.entityIndex", v30, v31) )
      __debugbreak();
  }
  BgAntiLagEntity_GetOrigin(&outInfo, outVictimPos);
  if ( outVictimVel )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+1D0h+var_1B0.velocity]
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm1, dword ptr [rbp+1D0h+var_1B0.velocity+4]
      vmovss  dword ptr [rdi+4], xmm1
      vmovss  xmm0, dword ptr [rbp+1D0h+var_1B0.velocity+8]
      vmovss  dword ptr [rdi+8], xmm0
    }
  }
  if ( !BGMovingPlatformPS::IsOnMovingPlatform(&_RBX->movingPlatforms) )
    goto LABEL_51;
  v19 = DVARBOOL_killswitch_mover_melee_fix_enabled;
  if ( !DVARBOOL_killswitch_mover_melee_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_mover_melee_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( !v19->current.enabled || !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_OUT|0x80) )
    goto LABEL_51;
  v37.boneInfo.boneList.m_usedSize = 0;
  v37.boneInfo.boneList.m_maxSize = 0;
  if ( !pm->antiLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2234, ASSERT_TYPE_ASSERT, "( pm->antiLag ) != ( nullptr )", "%s != %s\n\t%p, %p", "pm->antiLag", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !BgAntiLag::GetEntityInfoAtTime((BgAntiLag *)pm->antiLag, _RBX->clientNum, _RBX->movingPlatforms.m_movingPlatformEntity, 0xBu, serverTime, &v37) )
  {
LABEL_52:
    v28 = 0i64;
    goto LABEL_53;
  }
  if ( outVictimVel )
  {
    if ( _RBX->movingPlatforms.m_movingPlatformEntity != v37.entityIndex )
    {
      LODWORD(v31) = v37.entityIndex;
      LODWORD(v30) = _RBX->movingPlatforms.m_movingPlatformEntity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2250, ASSERT_TYPE_ASSERT, "( ps->movingPlatforms.GetMoverEntityID() ) == ( moverInfo.entityIndex )", "%s == %s\n\t%i, %i", "ps->movingPlatforms.GetMoverEntityID()", "moverInfo.entityIndex", v30, v31) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm1, xmm0, dword ptr [rbp+1D0h+var_240.velocity]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm0, dword ptr [rdi+4]
      vsubss  xmm1, xmm0, dword ptr [rbp+1D0h+var_240.velocity+4]
      vmovss  dword ptr [rdi+4], xmm1
      vmovss  xmm0, dword ptr [rdi+8]
      vsubss  xmm1, xmm0, dword ptr [rbp+1D0h+var_240.velocity+8]
      vmovss  dword ptr [rdi+8], xmm1
    }
  }
  v26 = DCONST_DVARBOOL_usePmoveMoverSystem;
  if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2258, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_usePmoveMoverSystem, \"usePmoveMoverSystem\" ))", (const char *)&queryFormat, "!Dconst_GetBool( usePmoveMoverSystem )") )
    __debugbreak();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rbp+1D0h+angles], xmm6
    vmovss  dword ptr [rbp+1D0h+angles+4], xmm6
    vmovss  dword ptr [rbp+1D0h+angles+8], xmm6
  }
  pm->m_bgHandler->GetEntityAngles((BgHandler *)pm->m_bgHandler, _RBX->movingPlatforms.m_movingPlatformEntity, &angles);
  __asm
  {
    vmovss  dword ptr [rsp+2D0h+origin], xmm6
    vmovss  dword ptr [rsp+2D0h+origin+4], xmm6
    vmovss  dword ptr [rsp+2D0h+origin+8], xmm6
  }
  pm->m_bgHandler->GetEntityOrigin((BgHandler *)pm->m_bgHandler, _RBX->movingPlatforms.m_movingPlatformEntity, &origin);
  AnglesAndOriginToMatrix43(&angles, &origin, &result);
  MatrixInverseOrthogonal43(&result, &out);
  BgAntiLagEntity_GetOrigin(&v37, &outOrigin);
  AnglesAndOriginToMatrix43(&v37.angles, &outOrigin, &in1);
  memset(&outOrigin, 0, sizeof(outOrigin));
  MatrixMultiply43(&in1, &out, &in2);
  MatrixTransformVector43(&_RBX->origin, &in2, outAttackerPos);
LABEL_51:
  v28 = 1i64;
LABEL_53:
  __asm { vmovaps xmm6, [rsp+2D0h+var_50] }
  return v28;
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

float __fastcall PM_MoveScale(playerState_s *ps, double fmove, double rmove, double umove)
{
  int pm_type; 
  const dvar_t *v35; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm5, xmm1, xmm6
    vandps  xmm4, xmm2, xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vcmpltss xmm0, xmm5, xmm4
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps [rsp+88h+var_48], xmm9
    vmovaps xmm8, xmm2
    vblendvps xmm2, xmm5, xmm4, xmm0
    vmovaps xmm9, xmm1
    vandps  xmm1, xmm3, xmm6
    vcmpltss xmm0, xmm2, xmm1
    vblendvps xmm6, xmm2, xmm1, xmm0
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
    vmovaps xmm7, xmm3
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2606, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _EAX = ps->speed;
  __asm
  {
    vmulss  xmm1, xmm9, xmm9
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, cs:__real@3c010204
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm2, xmm1
    vmovd   xmm1, eax
    vsqrtss xmm3, xmm2, xmm2
    vdivss  xmm4, xmm0, xmm3
    vcvtdq2ps xmm1, xmm1
    vmulss  xmm0, xmm1, xmm6
    vmulss  xmm6, xmm4, xmm0
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xBu) )
    __asm { vmulss  xmm6, xmm6, cs:__real@3ecccccd }
  pm_type = ps->pm_type;
  switch ( pm_type )
  {
    case 2:
      __asm { vmulss  xmm6, xmm6, cs:__real@40400000 }
      break;
    case 3:
      __asm { vmulss  xmm6, xmm6, cs:__real@40c00000 }
      break;
    case 5:
      v35 = DCONST_DVARFLT_player_spectateSpeedScale;
      if ( !DCONST_DVARFLT_player_spectateSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_spectateSpeedScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v35);
      __asm { vmulss  xmm6, xmm6, dword ptr [rbx+28h] }
      break;
  }
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
  }
  return *(float *)&_XMM0;
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
  const SuitDef *SuitDef; 
  const Weapon *CurrentWeaponForPlayer; 
  unsigned __int64 buttons; 
  const Weapon *v56; 
  bool v57; 
  bool v58; 
  unsigned __int64 v59; 
  bool v64; 
  float fmt; 
  __int64 v102; 
  __int64 v103; 
  __int64 v104; 
  __int64 v105; 
  __int64 v106; 
  __int64 v107; 
  int v109[4]; 
  vec3_t wishdir; 
  char v112; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0F8h+var_88], xmm11
  }
  _R15 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4708, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4708, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(_RSI->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4711, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  __asm { vmovss  xmm11, cs:__real@3f800000 }
  _RSI->viewHeightTarget = SuitDef->viewheight_stand;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+3Ch]
    vmovss  xmm2, dword ptr [rsi+40h]
    vmovss  xmm3, dword ptr [rsi+44h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
    vcomiss xmm6, xmm11
    vxorps  xmm7, xmm7, xmm7
  }
  _RBX = DCONST_DVARMPFLT_friction;
  if ( !DCONST_DVARMPFLT_friction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "friction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm8, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_stopspeed;
  if ( !DCONST_DVARFLT_stopspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stopspeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm6, dword ptr [rbx+28h] }
  if ( v64 )
  {
    _RBX = DCONST_DVARFLT_stopspeed;
    if ( !DCONST_DVARFLT_stopspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stopspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm
  {
    vmulss  xmm0, xmm0, xmm8
    vmulss  xmm1, xmm0, cs:__real@3fc00000
    vmulss  xmm2, xmm1, dword ptr [r15+24h]
    vsubss  xmm3, xmm6, xmm2
    vmaxss  xmm0, xmm3, xmm7
    vdivss  xmm2, xmm0, xmm6
    vmulss  xmm0, xmm2, dword ptr [rsi+3Ch]
    vmovss  dword ptr [rsi+3Ch], xmm0
    vmulss  xmm1, xmm2, dword ptr [rsi+40h]
    vmovss  dword ptr [rsi+40h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rsi+44h]
    vmovss  dword ptr [rsi+44h], xmm0
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm9, xmm9, eax
    vxorps  xmm10, xmm10, xmm10
    vcvtsi2ss xmm10, xmm10, eax
  }
  _RBX = 0i64;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|0x80) )
  {
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, eax
    }
  }
  else
  {
    __asm { vmovss  xmm3, cs:__real@42fe0000 }
    _RAX = pm->cmd.buttons & 1;
    __asm
    {
      vmovq   xmm0, rax
      vmovq   xmm1, rbx
      vpcmpeqq xmm2, xmm0, xmm1
      vblendvps xmm0, xmm3, xmm7, xmm2
      vmovaps xmm7, xmm0
      vmovss  [rsp+0F8h+var_B8], xmm0
    }
    if ( (pm->cmd.buttons & 0x20000) != 0 )
      __asm { vsubss  xmm7, xmm0, xmm3 }
  }
  __asm
  {
    vmovaps xmm3, xmm7; umove
    vmovaps xmm2, xmm10; rmove
    vmovaps xmm1, xmm9; fmove
  }
  *(float *)&_XMM0 = PM_MoveScale(_RSI, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3);
  __asm { vmovaps xmm8, xmm0 }
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, _RSI);
  buttons = pm->cmd.buttons;
  v56 = CurrentWeaponForPlayer;
  v58 = 0;
  if ( (buttons & 4) != 0 )
  {
    if ( (buttons & 1) == 0 || (v57 = BG_UsingAlternate(_RSI), !BG_IsMeleeOnlyWeapon(v56, v57)) )
      v58 = 1;
  }
  v59 = pm->cmd.buttons;
  if ( (v59 & 2) != 0 || v58 )
  {
    __asm { vmulss  xmm8, xmm8, cs:__real@41700000 }
  }
  else if ( (v59 & 0xC0) != 0 )
  {
    __asm { vmulss  xmm8, xmm8, cs:__real@3dcccccd }
  }
  _RDI = _R15;
  _R14 = (char *)((char *)v109 - (char *)_R15);
  v64 = 1;
  do
  {
    if ( !v64 )
    {
      LODWORD(v105) = 3;
      LODWORD(v102) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v102, v105) )
        __debugbreak();
      LODWORD(v106) = 3;
      LODWORD(v103) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v103, v106) )
        __debugbreak();
      LODWORD(v107) = 3;
      LODWORD(v104) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v104, v107) )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm1, xmm10, dword ptr [rdi+0Ch]
      vmulss  xmm0, xmm9, dword ptr [rdi]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, dword ptr [rdi+18h]
      vaddss  xmm6, xmm2, xmm1
    }
    if ( (unsigned int)_RBX >= 3 )
    {
      LODWORD(v105) = 3;
      LODWORD(v102) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v102, v105) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [r14+rdi], xmm6 }
    _RDI = (pml_t *)((char *)_RDI + 4);
    LODWORD(_RBX) = _RBX + 1;
    v64 = (unsigned int)_RBX < 3;
  }
  while ( (int)_RBX < 3 );
  __asm
  {
    vmovss  xmm3, [rsp+0F8h+var_B0]
    vmovss  xmm5, [rsp+0F8h+var_A8]
    vmovss  xmm6, [rsp+0F8h+var_AC]
    vmulss  xmm0, xmm3, xmm3
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm4, xmm0, xmm0
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm11, xmm0
    vdivss  xmm2, xmm11, xmm0
    vmulss  xmm0, xmm3, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+0F8h+wishdir], xmm0
    vmovss  dword ptr [rsp+0F8h+wishdir+4], xmm1
    vmovss  xmm1, cs:__real@41100000
    vmulss  xmm0, xmm5, xmm2
    vmulss  xmm3, xmm4, xmm8; wishspeed
    vmovss  dword ptr [rsp+0F8h+wishdir+8], xmm0
    vmovss  dword ptr [rsp+0F8h+fmt], xmm1
  }
  PM_Accelerate(pm, _R15, &wishdir, *(float *)&_XMM3, fmt);
  __asm
  {
    vmovss  xmm2, dword ptr [r15+24h]
    vmulss  xmm0, xmm2, dword ptr [rsi+3Ch]
    vaddss  xmm1, xmm0, dword ptr [rsi+30h]
    vmovss  dword ptr [rsi+30h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rsi+40h]
    vaddss  xmm1, xmm0, dword ptr [rsi+34h]
    vmovss  dword ptr [rsi+34h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rsi+44h]
    vaddss  xmm1, xmm0, dword ptr [rsi+38h]
    vmovss  dword ptr [rsi+38h], xmm1
  }
  _R11 = &v112;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
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

void __fastcall PM_Normal_UpdateCollide(pmove_t *pm, pml_t *pml, const EffectiveStance prevEffStance, double _XMM3_8)
{
  const dvar_t *v19; 
  bool enabled; 
  char v68; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps [rsp+108h+var_98], xmm12
    vmovaps [rsp+108h+var_A8], xmm13
    vmovaps [rsp+108h+var_B8], xmm14
  }
  _RDI = pml;
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11988, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Normal_UpdateCollide");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11992, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11992, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF008008, "PM_Normal_UpdateCollide Update States");
  PM_UpdateImpulseFields(pm, _RDI);
  PM_UpdatePronePitch(pm, _RDI);
  PM_DropTimers(pm, _RDI);
  if ( _RSI->pm_type >= 7 )
    PM_DeadMove(pm, _RDI);
  PM_CheckLadderMove(pm, _RDI);
  PM_CheckStairsMove(pm, _RDI);
  Slide_Update(pm, _RDI);
  Jump_HandleLateJump(pm, _RDI);
  PM_Skydive_Update(pm, _RDI);
  Sys_ProfEndNamedEvent();
  PM_PlayerMoveCollide(pm, _RDI);
  v19 = DCONST_DVARBOOL_bg_slope_use_cylinder_trace_normal;
  if ( !DCONST_DVARBOOL_bg_slope_use_cylinder_trace_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_slope_use_cylinder_trace_normal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  enabled = v19->current.enabled;
  if ( enabled )
    PM_SlopeWorldmodel_Update(pm, _RDI);
  PM_GroundTrace(pm, _RDI, 1);
  if ( !enabled )
    PM_SlopeWorldmodel_Update(pm, _RDI);
  PM_Skydive_UpdatePostGroundTrace(pm, _RDI);
  PM_CheckKnockbackFlag(pm, _RDI);
  PM_UpdateCustomAnimFlags(pm);
  PM_Footsteps(pm, _RDI);
  PM_StanceSounds(prevEffStance, pm, _RDI);
  PM_Weapon(pm, _RDI);
  if ( !BG_IsPlayerZeroG(_RSI) )
  {
    __asm
    {
      vmovss  xmm12, dword ptr [rsi+3Ch]
      vaddss  xmm7, xmm12, dword ptr [rdi+200h]
      vmovss  xmm13, dword ptr [rsi+40h]
      vaddss  xmm5, xmm13, dword ptr [rdi+204h]
      vmovss  xmm14, dword ptr [rsi+44h]
      vaddss  xmm6, xmm14, dword ptr [rdi+208h]
      vmovss  xmm0, dword ptr [rsi+30h]
      vsubss  xmm8, xmm0, dword ptr [rdi+40h]
      vmovss  xmm1, dword ptr [rsi+34h]
      vsubss  xmm9, xmm1, dword ptr [rdi+44h]
      vmovss  xmm0, dword ptr [rsi+38h]
      vsubss  xmm10, xmm0, dword ptr [rdi+48h]
      vmovss  xmm11, dword ptr [rdi+24h]
      vmulss  xmm1, xmm9, xmm9
      vmulss  xmm0, xmm8, xmm8
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm10, xmm10
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm11, xmm11
      vdivss  xmm4, xmm3, xmm0
      vmulss  xmm2, xmm5, xmm5
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm1, xmm2, cs:__real@3e800000
      vcomiss xmm4, xmm1
    }
  }
  PM_DropAnimTimers(pm, _RDI);
  if ( BG_IsPlayerVelocityQuantized(_RSI) )
  {
    __asm
    {
      vmovss  xmm4, cs:__real@3f000000
      vaddss  xmm0, xmm4, dword ptr [rsi+3Ch]
      vxorps  xmm2, xmm2, xmm2
      vroundss xmm2, xmm2, xmm0, 1
      vmovss  dword ptr [rsi+3Ch], xmm2
      vaddss  xmm1, xmm4, dword ptr [rsi+40h]
      vxorps  xmm3, xmm3, xmm3
      vroundss xmm3, xmm3, xmm1, 1
      vmovss  dword ptr [rsi+40h], xmm3
      vaddss  xmm1, xmm4, dword ptr [rsi+44h]
      vxorps  xmm3, xmm3, xmm3
      vroundss xmm3, xmm3, xmm1, 1
      vmovss  dword ptr [rsi+44h], xmm3
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v68;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+108h+var_B8]
  }
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
  __int64 v8; 
  int *p_weaponState; 
  int v10; 
  const dvar_t *v11; 
  int integer; 
  const dvar_t *v13; 
  int v14; 
  int commandTime; 

  _RDI = pml;
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11594, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11596, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11596, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  memset_0(_RDI, 0, sizeof(pml_t));
  WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
  if ( WeaponHand >= 0 )
  {
    prevWeaponStates = _RDI->prevWeaponStates;
    v8 = WeaponHand + 1i64;
    p_weaponState = &ps->weapState[0].weaponState;
    do
    {
      v10 = *p_weaponState;
      p_weaponState += 20;
      *prevWeaponStates++ = v10;
      --v8;
    }
    while ( v8 );
  }
  v11 = DCONST_DVARINT_com_userCmdMaxTimeStep;
  if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  integer = v11->current.integer;
  v13 = DCONST_DVARINT_com_userCmdMinTimeStep;
  if ( !DCONST_DVARINT_com_userCmdMinTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMinTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v13->current.integer;
  commandTime = ps->commandTime;
  if ( pm == (pmove_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  _RDI->msec = I_clamp(pm->cmd.commandTime - commandTime, v14, integer);
  _RDI->meleeFired = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vmovss  dword ptr [rdi+24h], xmm1
  }
  _RDI->previous_origin.v[0] = ps->origin.v[0];
  _RDI->previous_origin.v[1] = ps->origin.v[1];
  _RDI->previous_origin.v[2] = ps->origin.v[2];
  _RDI->previous_velocity.v[0] = ps->velocity.v[0];
  _RDI->previous_velocity.v[1] = ps->velocity.v[1];
  _RDI->previous_velocity.v[2] = ps->velocity.v[2];
  PM_ContextMount_CachePrevViewAngles(pm, _RDI);
  BGMovingPlatformClient::ResolvePlatformUp(pm->movingPlatforms, ps, &_RDI->platformUp);
  _RDI->prevEffectiveStance = PM_GetEffectiveStance(ps);
  _RDI->ladderWidth = 15.2496;
}

/*
==============
PM_PmoveLocal_SetViewAngles
==============
*/

void __fastcall PM_PmoveLocal_SetViewAngles(pmove_t *pm, pml_t *pml, double _XMM2_8, double _XMM3_8)
{
  bool v8; 
  bool v9; 
  int commandTime; 
  vec3_t angles; 

  __asm { vmovaps [rsp+78h+var_28], xmm7 }
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11645, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11647, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11647, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = &pm->cmd == NULL;
  if ( pm == (pmove_t *)-16i64 )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd");
    v8 = !v9;
    if ( v9 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1DCh]
    vmulss  xmm4, xmm0, cs:__real@3b360b61
    vaddss  xmm1, xmm4, cs:__real@3f000000
  }
  commandTime = pm->cmd.commandTime;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm0, xmm2, xmm1, 1
    vmovss  xmm1, cs:precision
    vcomiss xmm1, xmm2
    vsubss  xmm0, xmm4, xmm0
    vmulss  xmm7, xmm0, cs:__real@43b40000
  }
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12970, ASSERT_TYPE_ASSERT, "(precision > 0.0f)", (const char *)&queryFormat, "precision > 0.0f") )
    __debugbreak();
  if ( dword_14BB4768C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14BB4768C);
    if ( dword_14BB4768C == -1 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm1, xmm0, cs:precision
        vmovss  cs:invPrecision, xmm1
      }
      j__Init_thread_footer(&dword_14BB4768C);
    }
  }
  __asm
  {
    vmulss  xmm1, xmm7, cs:invPrecision
    vaddss  xmm2, xmm1, cs:__real@3f000000
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm2, 1
    vcvttss2si eax, xmm3
  }
  pml->holdrand = 159719620 - 570470319 * (commandTime + _EAX);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1D8h]
    vmovss  dword ptr [rsp+78h+angles], xmm0
    vmovss  xmm1, dword ptr [rdi+1DCh]
    vmovss  dword ptr [rsp+78h+angles+4], xmm1
    vmovss  xmm0, dword ptr [rdi+1E0h]
    vmovss  dword ptr [rsp+78h+angles+8], xmm0
  }
  WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&pm->refFrame, &angles);
  AngleVectors(&angles, &pml->forward, &pml->right, &pml->up);
  __asm { vmovaps xmm7, [rsp+78h+var_28] }
}

/*
==============
PM_Pmove_GetHoldRand
==============
*/

__int64 __fastcall PM_Pmove_GetHoldRand(const usercmd_s *const cmd, playerState_s *ps, double _XMM2_8, double _XMM3_8)
{
  bool v7; 
  bool v8; 
  int commandTime; 

  __asm { vmovaps [rsp+48h+var_18], xmm7 }
  _RDI = ps;
  v7 = cmd == NULL;
  if ( !cmd )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2169, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd");
    v7 = !v8;
    if ( v8 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1DCh]
    vmulss  xmm4, xmm0, cs:__real@3b360b61
    vaddss  xmm1, xmm4, cs:__real@3f000000
  }
  commandTime = cmd->commandTime;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm0, xmm2, xmm1, 1
    vmovss  xmm1, cs:precision
    vcomiss xmm1, xmm2
    vsubss  xmm0, xmm4, xmm0
    vmulss  xmm7, xmm0, cs:__real@43b40000
  }
  if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12970, ASSERT_TYPE_ASSERT, "(precision > 0.0f)", (const char *)&queryFormat, "precision > 0.0f") )
    __debugbreak();
  if ( dword_14BB4768C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14BB4768C);
    if ( dword_14BB4768C == -1 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm1, xmm0, cs:precision
        vmovss  cs:invPrecision, xmm1
      }
      j__Init_thread_footer(&dword_14BB4768C);
    }
  }
  __asm
  {
    vmulss  xmm1, xmm7, cs:invPrecision
    vaddss  xmm2, xmm1, cs:__real@3f000000
    vmovaps xmm7, [rsp+48h+var_18]
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm2, 1
    vcvttss2si eax, xmm3
  }
  return (unsigned int)(159719620 - 570470319 * (commandTime + _EAX));
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
  WorldUpReferenceFramePM *p_refFrame; 
  const vec3_t *v14; 
  char v20; 
  char v21; 
  vec3_t v51; 
  vec3_t vec; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm9
    vmovaps xmmword ptr [r11-68h], xmm10
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  dword ptr [rsp+0B8h+vec], xmm0
    vmovss  xmm0, dword ptr [rdx+8]
  }
  p_refFrame = &pm->refFrame;
  v14 = velInConst;
  _RDI = velOut;
  __asm
  {
    vmovss  dword ptr [rsp+0B8h+vec+8], xmm0
    vmovss  dword ptr [rsp+0B8h+vec+4], xmm1
  }
  _RBX = normalConst;
  WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&pm->refFrame, &vec);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+0B8h+var_98], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rsp+0B8h+var_98+8], xmm0
    vmovss  dword ptr [rsp+0B8h+var_98+4], xmm1
  }
  WorldUpReferenceFrame::RemoveReferenceFrameFromVector(p_refFrame, &v51);
  __asm
  {
    vmovss  xmm9, dword ptr [rsp+0B8h+vec+4]
    vmovss  xmm10, dword ptr [rsp+0B8h+vec]
    vmovss  xmm6, dword ptr [rsp+0B8h+var_98+8]
    vmulss  xmm1, xmm9, xmm9
    vmulss  xmm0, xmm10, xmm10
    vaddss  xmm4, xmm1, xmm0
    vandps  xmm1, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3a83126f
  }
  if ( v20 )
    goto LABEL_9;
  __asm
  {
    vxorps  xmm5, xmm5, xmm5
    vucomiss xmm4, xmm5
  }
  if ( v21 )
  {
LABEL_9:
    _RDI->v[0] = v14->v[0];
    _RDI->v[1] = v14->v[1];
    _RDI->v[2] = v14->v[2];
  }
  else
  {
    __asm
    {
      vmulss  xmm3, xmm9, dword ptr [rsp+0B8h+var_98+4]
      vmulss  xmm2, xmm10, dword ptr [rsp+0B8h+var_98]
      vaddss  xmm0, xmm3, xmm2
      vmovaps [rsp+0B8h+var_38], xmm7
      vmovaps [rsp+0B8h+var_48], xmm8
      vdivss  xmm8, xmm0, xmm6
      vxorps  xmm7, xmm8, cs:__xmm@80000000800000008000000080000000
      vmovss  xmm6, dword ptr [rsp+0B8h+vec+8]
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm3, xmm0, xmm4
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm2, xmm1, xmm4
      vdivss  xmm0, xmm3, xmm2
      vsqrtss xmm4, xmm0, xmm0
      vcomiss xmm4, cs:__real@3f800000
      vcomiss xmm8, cs:__real@80000000
    }
    if ( !(v20 | v21) )
      goto LABEL_6;
    __asm { vcomiss xmm6, xmm5 }
    if ( !(v20 | v21) )
    {
LABEL_6:
      __asm
      {
        vmulss  xmm0, xmm10, xmm4
        vmovss  dword ptr [rdi], xmm0
        vmulss  xmm0, xmm7, xmm4
        vmulss  xmm1, xmm9, xmm4
        vmovss  dword ptr [rdi+8], xmm0
        vmovss  dword ptr [rdi+4], xmm1
      }
      WorldUpReferenceFrame::ApplyReferenceFrameToVector(p_refFrame, _RDI);
    }
    __asm
    {
      vmovaps xmm7, [rsp+0B8h+var_38]
      vmovaps xmm8, [rsp+0B8h+var_48]
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_28]
    vmovaps xmm9, [rsp+0B8h+var_58]
    vmovaps xmm10, [rsp+0B8h+var_68]
  }
}

/*
==============
PM_ProjectVelocityWallRunZeroGrav
==============
*/
void PM_ProjectVelocityWallRunZeroGrav(const pmove_t *pm, const vec3_t *velInConst, const vec3_t *normalConst, vec3_t *velOut)
{
  __int64 v41; 
  float v42; 
  vec3_t out; 

  __asm
  {
    vmovaps [rsp+88h+var_38], xmm8
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  xmm4, dword ptr [rdx]
    vmovss  xmm3, dword ptr [rdx+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm0, xmm0
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm8, xmm2, xmm2
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm8, xmm0
  }
  _RBX = velOut;
  if ( (unsigned __int64)&v41 != _security_cookie )
  {
    __asm
    {
      vmovaps [rsp+88h+var_18], xmm6
      vmovaps [rsp+88h+var_28], xmm7
      vmovss  [rsp+88h+var_68], xmm0
    }
    PM_ClipVelocityOverClip(NULL, velInConst, normalConst, NULL, v42, &out);
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+88h+var_58+4]
      vmovss  xmm7, dword ptr [rsp+88h+var_58+8]
      vmovss  xmm5, dword ptr [rsp+88h+var_58]
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm0, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
      vdivss  xmm4, xmm1, xmm0
      vmulss  xmm2, xmm6, xmm4
      vmulss  xmm0, xmm5, xmm4
      vmulss  xmm1, xmm0, xmm8
      vmovss  dword ptr [rbx], xmm1
      vmulss  xmm1, xmm7, xmm4
      vmulss  xmm0, xmm2, xmm8
      vmulss  xmm2, xmm1, xmm8
      vmovss  dword ptr [rbx+4], xmm0
      vmovss  dword ptr [rbx+8], xmm2
      vmovaps xmm7, [rsp+88h+var_28]
      vmovaps xmm6, [rsp+88h+var_18]
    }
  }
  else
  {
    __asm { vmovss  dword ptr [r9], xmm4 }
    velOut->v[1] = velInConst->v[1];
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+8]
      vmovss  dword ptr [r9+8], xmm0
    }
  }
  __asm { vmovaps xmm8, [rsp+88h+var_38] }
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

void __fastcall PM_SetJumpStrafeCondition(pmove_t *pm, double _XMM1_8, double _XMM2_8)
{
  PlayerAnimStrafeStates v8; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8609, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( pm->cmd.forwardmove || pm->cmd.rightmove )
  {
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, eax; rightMove
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax; forwardMove
    }
    v8 = BG_DetermineStrafeCondition(pm, *(const float *)&_XMM1, *(const float *)&_XMM2);
    PM_SetStrafeCondition(pm, v8);
  }
}

/*
==============
PM_SetPitchValues
==============
*/
void PM_SetPitchValues(const playerState_s *ps, pmove_t *pm)
{
  _RDI = pm;
  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12491, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12492, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( ((PM_GetEffectiveStance(_RBX) - 1) & 0xFFFFFFFD) != 0 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    _RDI->fTorsoPitch = 0.0;
    __asm { vmovss  dword ptr [rdi+348h], xmm0 }
  }
  else
  {
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm7
      vmovaps [rsp+58h+var_28], xmm8
    }
    if ( _RBX->viewHeightLerpTime )
    {
      PM_GetViewHeightLerpTime(_RBX, _RBX->viewHeightLerpTarget, _RBX->viewHeightLerpDown);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ecx
        vdivss  xmm2, xmm1, xmm0
        vmovss  xmm0, cs:__real@3f800000
        vxorps  xmm4, xmm4, xmm4
        vcomiss xmm2, xmm4
      }
      if ( _RDI->cmd.serverTime >= (unsigned int)_RBX->viewHeightLerpTime )
        __asm { vminss  xmm4, xmm2, xmm0 }
      __asm
      {
        vsubss  xmm3, xmm0, xmm4
        vmovd   xmm0, dword ptr [rbx+1F4h]
      }
      _EAX = 0;
      __asm
      {
        vmovd   xmm1, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm8, xmm4, xmm3, xmm2
      }
    }
    else
    {
      __asm { vmovss  xmm8, cs:__real@3f800000 }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+344h]
      vmulss  xmm3, xmm0, cs:__real@3b360b61
      vaddss  xmm1, xmm3, cs:__real@3f000000
      vxorps  xmm7, xmm7, xmm7
      vroundss xmm2, xmm7, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, cs:__real@43b40000
      vmovss  xmm2, dword ptr [rdi+348h]
      vmulss  xmm3, xmm2, cs:__real@3b360b61
      vmulss  xmm1, xmm0, xmm8
      vmovss  dword ptr [rdi+344h], xmm1
      vaddss  xmm1, xmm3, cs:__real@3f000000
      vroundss xmm2, xmm7, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm0, cs:__real@43b40000
      vmulss  xmm2, xmm1, xmm8
      vmovss  dword ptr [rdi+348h], xmm2
      vmovaps xmm8, [rsp+58h+var_28]
      vmovaps xmm7, [rsp+58h+var_18]
    }
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
  char v17; 
  char v18; 

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
    _RAX = BG_WeaponDef(ViewmodelWeapon, v10);
    __asm
    {
      vmovss  xmm1, [rsp+48h+delayOverride]
      vcmpneqss xmm0, xmm1, cs:__real@7f7fffff
      vmovss  xmm2, dword ptr [rax+42Ch]
      vblendvps xmm3, xmm2, xmm1, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm3, xmm1
    }
    if ( v17 | v18 || !useDelay )
    {
      *(_QWORD *)&ps->sprintState.sprintRestore = 1i64;
    }
    else
    {
      __asm { vmulss  xmm0, xmm3, cs:__real@c47a0000 }
      ps->sprintState.sprintRestore = 0;
      __asm { vcvttss2si eax, xmm0 }
      ps->sprintState.sprintRestoreDelayStart = pm->cmd.serverTime - _EAX;
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
  entity_event_t v15; 

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
    _RAX = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_PRONE);
    _RCX = pm->bounds;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rcx+10h], xmm1
    }
    v15 = EV_STANCE_FORCE_PRONE;
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
    _RAX = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DUCKED);
    _RCX = pm->bounds;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rcx+10h], xmm1
    }
    v15 = EV_STANCE_FORCE_CROUCH;
    goto LABEL_20;
  }
  if ( v10 != 1 )
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(p_eFlags, ACTIVE, 3u);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 4u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
    _RAX = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DEFAULT);
    _RCX = pm->bounds;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rcx+10h], xmm1
    }
    v15 = EV_STANCE_FORCE_STAND;
LABEL_20:
    BG_AddPredictableEventToPlayerstate(v15, 0, pm->cmd.serverTime, pm->weaponMap, ps);
    goto LABEL_21;
  }
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(p_eFlags, ACTIVE, 4u);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 3u);
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0);
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 1u);
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&ps->pm_flags, ACTIVE, 0x36u);
  _RAX = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_LASTSTANDCRAWL);
  _RCX = pm->bounds;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
    vmovsd  xmm1, qword ptr [rax+10h]
    vmovsd  qword ptr [rcx+10h], xmm1
  }
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

void __fastcall PM_SetupMoveState(pmove_t *pm, double _XMM1_8)
{
  playerState_s *ps; 
  playerState_s *v6; 
  usercmd_s *p_cmd; 
  const dvar_t *v8; 
  _QWORD *v; 
  char v11; 
  char v12; 
  unsigned __int64 buttons; 
  bool v25; 
  bool IsUsingOffhandGestureWeaponADSActive; 
  char forwardmove; 
  WorldUpReferenceFrame v28; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11324, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11324, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = pm->ps;
  p_cmd = &pm->cmd;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11307, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( pm == (pmove_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11308, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|0x80) && (p_cmd->buttons & 0x8000000000i64) != 0 )
  {
    if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 138, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&v6->otherFlags, ACTIVE, 0x2Eu);
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
      v8 = DCONST_DVARMPBOOL_cursorHintControlLockSnapVelocity;
      if ( !DCONST_DVARMPBOOL_cursorHintControlLockSnapVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cursorHintControlLockSnapVelocity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v8->current.enabled )
      {
        v = (_QWORD *)ps->velocity.v;
        if ( BG_IsPlayerZeroGFloating(ps) )
        {
          *v = 0i64;
          ps->velocity.v[2] = 0.0;
        }
        else
        {
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v28, ps, pm->m_bgHandler);
          *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v28, &ps->velocity);
          *v = 0i64;
          __asm { vmovaps xmm1, xmm0; height }
          ps->velocity.v[2] = 0.0;
          WorldUpReferenceFrame::SetUpContribution(&v28, *(float *)&_XMM1, &ps->velocity);
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
    __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_player_limitedMovementLeftStickInputScale, "player_limitedMovementLeftStickInputScale");
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
      vmovaps xmm6, xmm0
    }
    if ( v11 )
      goto LABEL_88;
    __asm { vcomiss xmm0, cs:__real@3f800000 }
    if ( !(v11 | v12) )
    {
LABEL_88:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11415, ASSERT_TYPE_ASSERT, "((leftStickInputScale >= 0.f) && (leftStickInputScale <= 1.f))", (const char *)&queryFormat, "(leftStickInputScale >= 0.f) && (leftStickInputScale <= 1.f)") )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm6
      vcvttss2si eax, xmm1
    }
    pm->cmd.forwardmove = _EAX;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm6
      vmovaps xmm6, [rsp+0A8h+var_38]
      vcvttss2si eax, xmm1
    }
    pm->cmd.rightmove = _EAX;
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
  v25 = ((PM_GetEffectiveStance(ps) - 1) & 0xFFFFFFFD) == 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u) || (IsUsingOffhandGestureWeaponADSActive = BG_IsUsingOffhandGestureWeaponADSActive(ps)) )
    IsUsingOffhandGestureWeaponADSActive = 1;
  if ( v25 && IsUsingOffhandGestureWeaponADSActive && !BG_UsingSniperScope(pm->weaponMap, ps) && ps->vehicleState.entity == 2047 )
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
__int64 PM_ShouldMakeFootsteps(pmove_t *pm)
{
  const playerState_s *ps; 
  const SuitDef *SuitDef; 
  EffectiveStance EffectiveStance; 
  __int32 v7; 
  __int32 v8; 
  __int64 result; 
  const dvar_t *v10; 
  const char *v11; 

  _RBX = pm;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
    goto LABEL_31;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7476, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = _RBX->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7476, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PM_IsInAir(_RBX) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
    goto LABEL_20;
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7485, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( SuitDef->suitAnimType == ANIM_SUIT_C8 )
  {
LABEL_31:
    result = 1i64;
    goto LABEL_32;
  }
  EffectiveStance = PM_GetEffectiveStance(ps);
  if ( EffectiveStance == PM_EFF_STANCE_DEFAULT )
  {
    v10 = DCONST_DVARMPSPFLT_player_footstepsThreshhold;
    v11 = "player_footstepsThreshhold";
    goto LABEL_30;
  }
  v7 = EffectiveStance - 1;
  if ( !v7 )
  {
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7507, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::PRONE ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::PRONE )") )
      __debugbreak();
    goto LABEL_28;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
    {
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7503, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::DUCKED ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::DUCKED )") )
        __debugbreak();
      v10 = DCONST_DVARMPSPFLT_player_footstepsThreshholdCrouch;
      v11 = "player_footstepsThreshholdCrouch";
      goto LABEL_30;
    }
LABEL_20:
    result = 0i64;
    goto LABEL_32;
  }
  if ( v8 == 1 )
  {
LABEL_28:
    v10 = DCONST_DVARMPSPFLT_player_footstepsThreshholdProne;
    v11 = "player_footstepsThreshholdProne";
LABEL_30:
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v10, v11);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = PM_Slope_GetSpeedScale(&ps->velocity, _RBX);
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vcomiss xmm1, dword ptr [rbx+330h]
    }
    result = 1i64;
    goto LABEL_32;
  }
  result = 0i64;
LABEL_32:
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
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
  bool v9; 
  bool v10; 
  const dvar_t *v11; 
  playerState_s *v12; 
  unsigned __int64 v13; 
  bool v15; 
  float fmt; 

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
  v9 = (buttons & 0x8000000000000i64) != 0;
  v10 = (pm->oldcmd.buttons & 2) == 0 && (buttons & 2) != 0;
  v11 = DCONST_DVARINT_bg_disableToggleSprint;
  if ( !DCONST_DVARINT_bg_disableToggleSprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_disableToggleSprint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.integer == 1 || v9 || !v10 || PM_IsInAir(pm) )
  {
    if ( PM_SprintEndingButtons(pm, pml) )
      goto LABEL_48;
    v12 = pm->ps;
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1704, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v12->pm_flags, ACTIVE, 0x1Du) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v12->pm_flags, ACTIVE, 0x1Eu) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v12->pm_flags, ACTIVE, 0x19u) || (unsigned int)(v12->weapState[0].weaponState - 22) <= 2 && !BG_CanSprintMelee(v12) || PM_IsInAir(pm) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v12->pm_flags, ACTIVE, 0x13u) )
    {
LABEL_48:
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
      {
        __asm
        {
          vmovaps [rsp+78h+var_38], xmm6
          vmovss  xmm6, cs:__real@7f7fffff
        }
        v15 = PM_AnyAttackButtonPressed(pm);
        if ( !BG_CanSprintReload(ps) && (pm->cmd.buttons & 0x20) != 0 )
        {
          v15 = 1;
          Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_sprintReloadPredictionFixSprintRestoreDelay, "bg_sprintReloadPredictionFixSprintRestoreDelay");
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm6, xmm0, cs:__real@3a83126f
          }
        }
        __asm { vmovss  dword ptr [rsp+78h+fmt], xmm6 }
        PM_SetSprintRestore(pm, ps, 1, v15, fmt);
        __asm { vmovaps xmm6, [rsp+78h+var_38] }
      }
    }
    else if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) && !BG_IsPlayerInExecution(ps) && ps->pm_type <= 1u && BG_GetMaxSprintTime(pm->weaponMap, ps) > 0 )
    {
      v13 = pm->cmd.buttons;
      if ( (v13 & 0x400000000000i64) == 0 || (pm->oldcmd.buttons & 2) == 0 || (v13 & 2) != 0 )
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

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2765, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v2 = DCONST_DVARBOOL_suits_useAssets;
  if ( !DCONST_DVARBOOL_suits_useAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "suits_useAssets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    _RBX = BG_GetSuitDef(ps->suitIndex);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2769, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rbx+58h] }
  }
  else
  {
    _RBX = DCONST_DVARMPFLT_player_sprintSpeedScale;
    if ( !DCONST_DVARMPFLT_player_sprintSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  return *(float *)&_XMM0;
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
  const dvar_t *v9; 

  __asm { vmovaps [rsp+68h+var_28], xmm7 }
  _RSI = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3588, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3588, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3590, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
    __debugbreak();
  _RDI = DCONST_DVARMPFLT_player_swimFriction;
  if ( !DCONST_DVARMPFLT_player_swimFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimFriction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm7, dword ptr [rdi+28h] }
  v9 = DCONST_DVARMPFLT_player_swimVerticalFriction;
  if ( !DCONST_DVARMPFLT_player_swimVerticalFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimVerticalFriction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+40h]
    vmovss  xmm5, dword ptr [rbx+3Ch]
    vmovss  xmm3, dword ptr [rbx+44h]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm0, xmm0
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcomiss xmm4, cs:__real@3a83126f
    vmovss  xmm0, dword ptr [rsi+24h]
    vmovaps [rsp+68h+var_18], xmm6
    vmulss  xmm6, xmm0, dword ptr [rdi+28h]
    vmulss  xmm0, xmm0, xmm7
    vsubss  xmm1, xmm4, xmm0
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm1, xmm2
  }
  _RBX->velocity.v[0] = 0.0;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vsubss  xmm0, xmm4, xmm6
    vcomiss xmm0, xmm2
    vmovss  dword ptr [rbx+40h], xmm3
    vmovaps xmm6, [rsp+68h+var_18]
  }
  _RBX->velocity.v[2] = 0.0;
  __asm { vmovaps xmm7, [rsp+68h+var_28] }
}

/*
==============
PM_SwimMove
==============
*/
void PM_SwimMove(pmove_t *pm, pml_t *pml)
{
  char v25; 
  int v30; 
  unsigned __int64 v31; 
  int v32; 
  shellshock_parms_t *ShellshockParms; 
  char v70; 
  bool v71; 
  bool v72; 
  const dvar_t *v97; 
  char v138; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps [rsp+148h+var_D8], xmm15
  }
  _RSI = pml;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_SwimMove");
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3653, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3655, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3655, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBP = DCONST_DVARMPFLT_player_swimSpeed;
  if ( !DCONST_DVARMPFLT_player_swimSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBP);
  __asm { vmovss  xmm7, dword ptr [rbp+28h] }
  _RBP = DCONST_DVARMPFLT_player_swimAcceleration;
  if ( !DCONST_DVARMPFLT_player_swimAcceleration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimAcceleration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBP);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+28h]
    vmovss  [rsp+148h+var_104], xmm0
  }
  _RBP = DCONST_DVARMPFLT_player_swimVerticalSpeed;
  if ( !DCONST_DVARMPFLT_player_swimVerticalSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimVerticalSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBP);
  __asm { vmovss  xmm8, dword ptr [rbp+28h] }
  _RBP = DCONST_DVARMPFLT_player_swimVerticalAcceleration;
  if ( !DCONST_DVARMPFLT_player_swimVerticalAcceleration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimVerticalAcceleration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBP);
  __asm { vmovss  xmm10, dword ptr [rbp+28h] }
  _RBP = DCONST_DVARMPVEC3_player_swimWaterCurrent;
  if ( !DCONST_DVARMPVEC3_player_swimWaterCurrent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimWaterCurrent") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBP);
  __asm
  {
    vmovss  xmm14, dword ptr [rbp+28h]
    vmovss  xmm13, dword ptr [rbp+2Ch]
    vmovss  xmm12, dword ptr [rbp+30h]
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm14, xmm6
  }
  if ( !v25 )
    goto LABEL_29;
  __asm { vucomiss xmm13, xmm6 }
  if ( !v25 )
    goto LABEL_29;
  __asm { vucomiss xmm12, xmm6 }
  if ( v25 )
    v30 = 0;
  else
LABEL_29:
    v30 = 1;
  v31 = (pm->cmd.buttons >> 8) & 1;
  v32 = (pm->cmd.buttons & 0x480) != 0;
  LOBYTE(_EAX) = pm->cmd.forwardmove;
  if ( ((_BYTE)_EAX || pm->cmd.rightmove || (_DWORD)v31 != v32) && _RBX->pm_type < 7 )
  {
    _EAX = (char)_EAX;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, cs:__real@3c010204
    }
    _EAX = pm->cmd.rightmove;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm3, xmm0, cs:__real@3c010204
      vmulss  xmm1, xmm4, dword ptr [rsi]
      vmulss  xmm0, xmm3, dword ptr [rsi+0Ch]
      vaddss  xmm15, xmm1, xmm0
      vmulss  xmm2, xmm3, dword ptr [rsi+10h]
      vmulss  xmm0, xmm4, dword ptr [rsi+4]
      vaddss  xmm5, xmm2, xmm0
      vmovss  [rsp+148h+var_108], xmm5
      vmulss  xmm1, xmm3, dword ptr [rsi+14h]
      vmulss  xmm0, xmm4, dword ptr [rsi+8]
      vaddss  xmm11, xmm1, xmm0
      vmovss  xmm9, dword ptr [rbx+44h]
    }
    if ( (_DWORD)v31 != v32 )
    {
      __asm { vmulss  xmm0, xmm10, dword ptr [rsi+24h] }
      if ( (_DWORD)v31 )
        __asm { vaddss  xmm0, xmm9, xmm0 }
      else
        __asm { vsubss  xmm0, xmm9, xmm0; val }
      __asm { vcomiss xmm8, xmm6 }
      if ( (_DWORD)v31 )
      {
        __asm
        {
          vxorps  xmm1, xmm8, cs:__xmm@80000000800000008000000080000000; min
          vmovaps xmm2, xmm8; max
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovaps xmm9, xmm0
          vmovss  xmm5, [rsp+148h+var_108]
        }
      }
      else
      {
        __asm { vxorps  xmm9, xmm9, xmm9 }
      }
      __asm { vxorps  xmm11, xmm11, xmm11 }
      _RBX->velocity.v[2] = 0.0;
    }
    __asm
    {
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm15, xmm15
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm11, xmm11
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm8, xmm2, xmm2
      vcmpless xmm0, xmm8, cs:__real@80000000
      vmovss  xmm10, cs:__real@3f800000
      vblendvps xmm1, xmm8, xmm10, xmm0
      vmovss  [rsp+148h+var_100], xmm1
      vdivss  xmm0, xmm10, xmm1
      vmulss  xmm1, xmm15, xmm0
      vmovss  [rsp+148h+var_F8], xmm1
      vmulss  xmm1, xmm5, xmm0
      vmovss  [rsp+148h+var_FC], xmm1
      vmulss  xmm0, xmm0, xmm11
      vmovss  [rsp+148h+var_100], xmm0
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x15u) && (ShellshockParms = BG_GetShellshockParms(_RBX->shellshockIndex), v70 = 0, v71 = !ShellshockParms->movement.affect, ShellshockParms->movement.affect) )
    {
      __asm
      {
        vmulss  xmm8, xmm8, cs:__real@3ecccccd
        vmulss  xmm7, xmm7, cs:__real@3ecccccd
      }
    }
    else
    {
      v72 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x14u);
      v70 = 0;
      v71 = !v72;
      if ( v72 )
      {
        *(float *)&_XMM0 = PM_SprintScale(_RBX);
        __asm { vmulss  xmm8, xmm0, xmm8 }
        PM_SprintScale(_RBX);
        __asm { vmulss  xmm7, xmm7, xmm0 }
      }
    }
    __asm
    {
      vmovss  xmm0, [rsp+148h+var_104]
      vmulss  xmm1, xmm0, dword ptr [rsi+24h]
      vmulss  xmm0, xmm15, xmm1
      vaddss  xmm5, xmm0, dword ptr [rbx+3Ch]
      vmovss  dword ptr [rbx+3Ch], xmm5
      vmulss  xmm0, xmm1, [rsp+148h+var_108]
      vaddss  xmm4, xmm0, dword ptr [rbx+40h]
      vmovss  dword ptr [rbx+40h], xmm4
      vmulss  xmm0, xmm1, xmm11
      vaddss  xmm3, xmm0, dword ptr [rbx+44h]
      vmovss  dword ptr [rbx+44h], xmm3
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm2, xmm2, xmm2
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm1, xmm2, xmm10, xmm0
      vdivss  xmm0, xmm10, xmm1
      vmulss  xmm1, xmm5, xmm0
      vmulss  xmm5, xmm4, xmm0
      vmulss  xmm4, xmm3, xmm0
      vcomiss xmm2, xmm7
    }
    if ( !(v70 | v71) )
    {
      __asm
      {
        vmulss  xmm0, xmm1, xmm7
        vmovss  dword ptr [rbx+3Ch], xmm0
        vmulss  xmm1, xmm5, xmm7
        vmovss  dword ptr [rbx+40h], xmm1
        vmulss  xmm0, xmm4, xmm7
        vmovss  dword ptr [rbx+44h], xmm0
      }
    }
    __asm
    {
      vmulss  xmm0, xmm8, xmm7
      vcomiss xmm2, xmm0
    }
    if ( !(v70 | v71) )
      PM_SwimFriction(pm, _RSI);
    if ( (_DWORD)v31 != v32 )
      __asm { vmovss  dword ptr [rbx+44h], xmm9 }
    if ( pm->ground->groundPlane )
    {
      v97 = DCONST_DVARMPBOOL_player_spaceEnabled;
      if ( !DCONST_DVARMPBOOL_player_spaceEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_spaceEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v97);
      if ( !v97->current.enabled )
      {
        __asm
        {
          vmovss  xmm0, [rsp+148h+var_FC]
          vmulss  xmm1, xmm0, dword ptr [rax+14h]
          vmovss  xmm0, [rsp+148h+var_F8]
          vmulss  xmm0, xmm0, dword ptr [rax+10h]
          vaddss  xmm2, xmm1, xmm0
          vmovss  xmm3, [rsp+148h+var_100]
          vmulss  xmm1, xmm3, dword ptr [rax+18h]
          vaddss  xmm0, xmm2, xmm1
          vcomiss xmm0, xmm6
        }
      }
    }
  }
  else
  {
    PM_SwimFriction(pm, _RSI);
  }
  if ( v30 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rsi+24h]
      vmulss  xmm0, xmm3, xmm14
      vaddss  xmm1, xmm0, dword ptr [rbx+3Ch]
      vmovss  dword ptr [rbx+3Ch], xmm1
      vmulss  xmm2, xmm13, xmm3
      vaddss  xmm0, xmm2, dword ptr [rbx+40h]
      vmovss  dword ptr [rbx+40h], xmm0
      vmulss  xmm1, xmm12, xmm3
      vaddss  xmm2, xmm1, dword ptr [rbx+44h]
      vmovss  dword ptr [rbx+44h], xmm2
    }
  }
  __asm { vucomiss xmm6, dword ptr [rbx+3Ch] }
  if ( v30 )
  {
    PM_PlayerSwimSlideMove(pm, _RSI);
  }
  else
  {
    __asm
    {
      vucomiss xmm6, dword ptr [rbx+40h]
      vucomiss xmm6, dword ptr [rbx+44h]
    }
  }
  if ( v30 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+24h]
      vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm1, xmm3, xmm14
      vaddss  xmm0, xmm1, dword ptr [rbx+3Ch]
      vmovss  dword ptr [rbx+3Ch], xmm0
      vmulss  xmm2, xmm13, xmm3
      vaddss  xmm1, xmm2, dword ptr [rbx+40h]
      vmovss  dword ptr [rbx+40h], xmm1
      vmulss  xmm0, xmm12, xmm3
      vaddss  xmm2, xmm0, dword ptr [rbx+44h]
      vmovss  dword ptr [rbx+44h], xmm2
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v138;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, [rsp+148h+var_D8]
  }
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
  const SuitDef *SuitDef; 
  bool v28; 
  bool v29; 
  unsigned __int64 buttons; 
  unsigned __int64 v65; 
  const Weapon *CurrentWeaponForPlayer; 
  unsigned __int64 v71; 
  const Weapon *v72; 
  bool v73; 
  bool v74; 
  unsigned __int64 v75; 
  bool v84; 
  float fmt; 
  __int64 v122; 
  __int64 v123; 
  __int64 v124; 
  __int64 v125; 
  __int64 v126; 
  __int64 v127; 
  vec3_t vec; 
  vec3_t wishdir; 
  vec3_t cross; 
  char v138; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  _R13 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4804, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4804, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(_RSI->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4807, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  _RSI->viewHeightTarget = SuitDef->viewheight_stand;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm9, xmm9, eax
    vxorps  xmm10, xmm10, xmm10
    vcvtsi2ss xmm10, xmm10, eax
    vmovaps [rsp+138h+var_48], xmm6
    vmovss  xmm8, cs:__real@42fe0000
  }
  _RBX = 0i64;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|0x80) )
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, eax
    }
  }
  else
  {
    _RAX = pm->cmd.buttons & 1;
    __asm
    {
      vmovq   xmm0, rax
      vmovq   xmm1, rbx
      vpcmpeqq xmm2, xmm0, xmm1
      vblendvps xmm0, xmm8, xmm7, xmm2
      vmovaps xmm6, xmm0
      vmovss  [rsp+138h+var_F8], xmm0
    }
    if ( (pm->cmd.buttons & 0x20000) != 0 )
      __asm { vsubss  xmm6, xmm0, xmm8 }
  }
  v28 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 0x20u);
  v29 = !v28;
  if ( v28 )
  {
    if ( pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
    {
      *(_QWORD *)_RSI->velocity.v = 0i64;
      _RSI->velocity.v[2] = 0.0;
      goto LABEL_64;
    }
    buttons = pm->cmd.buttons;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    v29 = (buttons & 2) == 0;
    if ( (buttons & 2) == 0 )
    {
      _RAX = pm->cmd.buttons & 0x100;
      __asm
      {
        vmovq   xmm0, rax
        vmovq   xmm1, rbx
        vpcmpeqq xmm2, xmm0, xmm1
        vblendvps xmm0, xmm8, xmm7, xmm2
        vmovaps xmm6, xmm0
        vmovss  [rsp+138h+var_F8], xmm0
      }
      v29 = (buttons & 0xC0) == 0;
      if ( (buttons & 0xC0) != 0 )
        __asm { vsubss  xmm6, xmm0, xmm8 }
    }
  }
  __asm
  {
    vucomiss xmm9, xmm7
    vmovaps [rsp+138h+var_A8], xmm12
    vmovss  xmm12, cs:__real@3f800000
  }
  if ( !v29 )
    goto LABEL_24;
  __asm { vucomiss xmm10, xmm7 }
  if ( !v29 )
    goto LABEL_24;
  __asm { vucomiss xmm6, xmm7 }
  if ( v29 )
  {
    _R14 = &_RSI->velocity;
    __asm
    {
      vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
      vmovss  dword ptr [r14], xmm0
      vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
      vmovss  dword ptr [r14+4], xmm1
      vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
    }
  }
  else
  {
LABEL_24:
    _R14 = &_RSI->velocity;
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vmovss  xmm2, dword ptr [r14+4]
      vmovss  xmm3, dword ptr [r14+8]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm8, xmm2, xmm2
      vcomiss xmm8, xmm12
    }
    _RDI = DCONST_DVARMPFLT_friction;
    __asm { vmovaps [rsp+138h+var_98], xmm11 }
    if ( !DCONST_DVARMPFLT_friction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "friction") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm11, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_stopspeed;
    if ( !DCONST_DVARFLT_stopspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stopspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vcomiss xmm8, dword ptr [rdi+28h] }
    if ( v84 )
    {
      _RDI = DCONST_DVARFLT_stopspeed;
      if ( !DCONST_DVARFLT_stopspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stopspeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm0, dword ptr [rdi+28h] }
    }
    else
    {
      __asm { vmovaps xmm0, xmm8 }
    }
    __asm
    {
      vmulss  xmm0, xmm11, xmm0
      vmulss  xmm1, xmm0, cs:__real@3fc00000
      vmulss  xmm2, xmm1, dword ptr [r13+24h]
      vmovaps xmm11, [rsp+138h+var_98]
      vsubss  xmm3, xmm8, xmm2
      vmaxss  xmm0, xmm3, xmm7
      vdivss  xmm2, xmm0, xmm8
      vmulss  xmm0, xmm2, dword ptr [r14]
      vmovss  dword ptr [r14], xmm0
      vmulss  xmm1, xmm2, dword ptr [r14+4]
      vmovss  dword ptr [r14+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [r14+8]
    }
  }
  __asm { vmovss  dword ptr [r14+8], xmm0 }
  v65 = pm->cmd.buttons;
  if ( (v65 & 0x1000) != 0 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3e800000
      vmulss  xmm9, xmm9, xmm0
      vmulss  xmm10, xmm10, xmm0
      vmulss  xmm6, xmm6, xmm0
    }
  }
  if ( (v65 & 0x2000) != 0 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f000000
      vmulss  xmm9, xmm9, xmm0
      vmulss  xmm10, xmm10, xmm0
      vmulss  xmm6, xmm6, xmm0
    }
  }
  __asm
  {
    vmovaps xmm3, xmm6; umove
    vmovaps xmm2, xmm10; rmove
    vmovaps xmm1, xmm9; fmove
  }
  *(float *)&_XMM0 = PM_MoveScale(_RSI, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3);
  __asm { vmovaps xmm8, xmm0 }
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, _RSI);
  v71 = pm->cmd.buttons;
  v72 = CurrentWeaponForPlayer;
  v74 = 0;
  if ( (v71 & 4) != 0 )
  {
    if ( (v71 & 1) == 0 || (v73 = BG_UsingAlternate(_RSI), !BG_IsMeleeOnlyWeapon(v72, v73)) )
      v74 = 1;
  }
  v75 = pm->cmd.buttons;
  if ( (v75 & 2) != 0 || v74 )
  {
    __asm { vmulss  xmm8, xmm8, cs:__real@41700000 }
  }
  else if ( (v75 & 0xC0) != 0 )
  {
    __asm { vmulss  xmm8, xmm8, cs:__real@3dcccccd }
  }
  _EAX = BG_IsUfoViewmodel(_RSI);
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, ebx
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm12, xmm8, xmm2
    vmovss  [rsp+138h+var_F8], xmm0
    vmovss  dword ptr [rsp+138h+vec+4], xmm7
    vmovss  dword ptr [rsp+138h+vec], xmm7
    vmovss  dword ptr [rsp+138h+vec+8], xmm12
  }
  WorldUpReferenceFrame::ApplyReferenceFrameToVector(&pm->refFrame, &vec);
  Vec3Cross(&vec, &_R13->right, &cross);
  _RDI = 0i64;
  v84 = 1;
  do
  {
    if ( !v84 )
    {
      LODWORD(v125) = 3;
      LODWORD(v122) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v122, v125) )
        __debugbreak();
      LODWORD(v126) = 3;
      LODWORD(v123) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v123, v126) )
        __debugbreak();
      LODWORD(v127) = 3;
      LODWORD(v124) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v124, v127) )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm1, xmm10, dword ptr [r15+rax]
      vmulss  xmm0, xmm9, dword ptr [rax]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, dword ptr [rsp+rdi+138h+vec]
      vaddss  xmm7, xmm2, xmm1
    }
    if ( (unsigned int)_RBX >= 3 )
    {
      LODWORD(v125) = 3;
      LODWORD(v122) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v122, v125) )
        __debugbreak();
    }
    __asm { vmovss  [rsp+rdi+138h+var_E0], xmm7 }
    _RDI += 4i64;
    LODWORD(_RBX) = _RBX + 1;
    v84 = (unsigned int)_RBX < 3;
  }
  while ( (int)_RBX < 3 );
  __asm
  {
    vmovss  xmm3, [rsp+138h+var_E0]
    vmovss  xmm5, [rsp+138h+var_D8]
    vmovss  xmm6, [rsp+138h+var_DC]
    vmulss  xmm0, xmm3, xmm3
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm4, xmm0, xmm0
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm12, xmm0
    vdivss  xmm2, xmm12, xmm0
    vmulss  xmm0, xmm3, xmm2
    vmulss  xmm3, xmm4, [rsp+138h+var_F8]; wishspeed
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+138h+wishdir], xmm0
    vmovss  dword ptr [rsp+138h+wishdir+4], xmm1
    vmovss  xmm1, cs:__real@41100000
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+138h+wishdir+8], xmm0
    vmovss  dword ptr [rsp+138h+fmt], xmm1
  }
  PM_Accelerate(pm, _R13, &wishdir, *(float *)&_XMM3, fmt);
  __asm
  {
    vmovss  xmm2, dword ptr [r13+24h]
    vmulss  xmm0, xmm2, dword ptr [r14]
    vaddss  xmm1, xmm0, dword ptr [rsi+30h]
    vmovaps xmm12, [rsp+138h+var_A8]
    vmovss  dword ptr [rsi+30h], xmm1
    vmulss  xmm0, xmm2, dword ptr [r14+4]
    vaddss  xmm1, xmm0, dword ptr [rsi+34h]
    vmovss  dword ptr [rsi+34h], xmm1
    vmulss  xmm0, xmm2, dword ptr [r14+8]
    vaddss  xmm1, xmm0, dword ptr [rsi+38h]
    vmovss  dword ptr [rsi+38h], xmm1
  }
LABEL_64:
  __asm { vmovaps xmm6, [rsp+138h+var_48] }
  _R11 = &v138;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovaps xmm8, xmmword ptr [r11-40h]
    vmovaps xmm9, xmmword ptr [r11-50h]
    vmovaps xmm10, xmmword ptr [r11-60h]
  }
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
  const dvar_t *v10; 
  PmoveASMArgs pmoveArgs; 

  _RSI = pml;
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
    v7 = _RSI->initialSlideMoveBumped == 1;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+30h]
      vmovss  xmm1, dword ptr [rsi+34h]
    }
    pmoveArgs.delta = _RSI->msec;
    pmoveArgs.initialSlideMoveBumped = v7;
    pmoveArgs.handler = pm->m_bgHandler;
    pmoveArgs.holdrand = &_RSI->holdrand;
    __asm
    {
      vmovss  [rsp+78h+pmoveArgs.walkForwardScale], xmm0
      vmovss  [rsp+78h+pmoveArgs.walkSideScale], xmm1
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_OFF|WEAPON_LADDER_AIM|0x80) || Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM|0x80) )
    {
      v10 = DVARBOOL_killswitch_butt_collision_asm_predicted_velocity_correction_enabled;
      if ( !DVARBOOL_killswitch_butt_collision_asm_predicted_velocity_correction_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_butt_collision_asm_predicted_velocity_correction_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.enabled )
        pmoveArgs.initialSlideMoveBumped |= GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&ps->otherFlags, DEAD|0x20);
    }
    BG_AnimUpdatePlayerStateConditions(pm, _RSI);
    BgPlayer_Asm::TickPS(v5, ps, &pmoveArgs, 0, 0);
  }
}

/*
==============
PM_UpdateBobCycle
==============
*/

void __fastcall PM_UpdateBobCycle(pmove_t *pm, pml_t *pml, PmStanceFrontBack stance, double speed, const vec3_t *maxSpeeds, int walking, int sprinting, int timeMs)
{
  __int64 v22; 
  bool v26; 
  bool v27; 
  char v36; 
  char v37; 
  const SuitDef *v67; 
  const dvar_t *v78; 
  FootstepAnimType FootstepAnimType; 
  int generation; 
  int leftCount; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  bool v94; 
  bool v95; 
  const dvar_t *v96; 
  int integer; 
  const char *v100; 
  const dvar_t *v101; 
  int v103; 
  playerState_s *ps; 
  const dvar_t *v106; 
  unsigned __int64 weaponState; 
  __int64 v109; 
  int v115; 
  bool v116; 
  int v117; 
  SuitDef *v121; 
  int ProneViewHeight; 
  unsigned int viewHeightTarget; 
  unsigned int viewheight_crouch; 
  int viewheight_stand; 
  const dvar_t *v129; 
  const dvar_t *v134; 
  const dvar_t *v140; 
  const dvar_t *v152; 
  const dvar_t *v153; 
  bool v155; 
  bool v156; 
  bool v157; 
  const dvar_t *v158; 
  bool v163; 
  const dvar_t *v166; 
  const dvar_t *v173; 
  char v174; 
  char v175; 
  const dvar_t *v180; 
  const dvar_t *v187; 
  bool v193; 
  bool v194; 
  float fmt; 
  double curTimea; 
  float curTime; 
  FootstepTime *timesa; 
  const FootstepTime *times; 
  const MovementTime *mvmtTimes; 
  BobCycle v216; 
  unsigned int maxGeneration; 
  float outStairsAscentRatio; 
  MovementTime *movement; 
  FootstepTime *step; 
  float outFrequencyScale; 
  float outAmplitudeScale; 
  SuitDef *suitDef; 
  FootstepInfo outInfo; 
  int (*outPackedBobCycle)[2]; 
  int packedBobCycle[2]; 
  __int64 v227; 
  char v228; 
  void *retaddr; 

  _RAX = &retaddr;
  v227 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
    vmovaps xmm14, xmm3
  }
  v22 = stance;
  _RBX = maxSpeeds;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_UpdateBobCycle");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8322, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  v26 = _RDI == NULL;
  if ( !_RDI )
  {
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8322, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps");
    v26 = !v27;
    if ( v27 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, esi
    vmovss  [rbp+80h+timeMs], xmm0
    vxorps  xmm11, xmm11, xmm11
    vcomiss xmm0, xmm11
  }
  if ( v26 )
    goto LABEL_173;
  if ( walking )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+4]
      vmovss  [rbp+80h+arg_0], xmm6
    }
  }
  else
  {
    _RAX = (const vec3_t *)&maxSpeeds->v[2];
    if ( !sprinting )
      _RAX = maxSpeeds;
    __asm
    {
      vmovss  xmm6, dword ptr [rax]
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  [rbp+80h+arg_0], xmm0
    }
  }
  suitDef = (SuitDef *)BG_GetSuitDef(_RDI->suitIndex);
  if ( !suitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8334, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  _RBX = _RDI->packedBobCycle;
  outPackedBobCycle = (int (*)[2])_RDI->packedBobCycle;
  BobCycle::BobCycle(&v216, (const int (*)[2])_RDI->packedBobCycle);
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx]
    vmovsd  qword ptr [rbp+80h+packedBobCycle], xmm0
  }
  maxGeneration = v216.maxGeneration;
  __asm
  {
    vcvtss2sd xmm0, xmm6, xmm6
    vmovss  xmm15, cs:__real@3f800000
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v36 | v37 )
  {
    __asm { vxorps  xmm12, xmm12, xmm12 }
  }
  else
  {
    __asm { vcomiss xmm6, xmm14 }
    if ( v36 | v37 )
    {
      __asm { vdivss  xmm12, xmm14, xmm6 }
    }
    else
    {
      __asm
      {
        vdivss  xmm0, xmm14, xmm6; val
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm2, xmm0; fraction }
      *(double *)&_XMM0 = GraphGetValueFromFraction(4, &stru_147EB8E68, *(const float *)&_XMM2);
      __asm { vmovaps xmm12, xmm0 }
    }
  }
  __asm { vmovss  xmm1, cs:__real@43340000; maxAbsValueSize }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(pm->oldcmd.angles.v[1], *(float *)&_XMM1, 0x14u);
  __asm
  {
    vmulss  xmm4, xmm0, cs:__real@3b360b61
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm3, xmm0, xmm2
    vxorps  xmm7, xmm7, xmm7
    vroundss xmm0, xmm7, xmm3, 1
    vsubss  xmm0, xmm4, xmm0
    vmulss  xmm13, xmm0, cs:__real@43b40000
    vmovss  xmm1, cs:__real@43340000; maxAbsValueSize
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(pm->cmd.angles.v[1], *(float *)&_XMM1, 0x14u);
  __asm
  {
    vmulss  xmm4, xmm0, cs:__real@3b360b61
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm0, xmm1, xmm2
    vroundss xmm3, xmm7, xmm0, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm6, xmm0, cs:__real@43b40000
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  if ( timeMs > 0 )
  {
    if ( BG_IsInAir(_RDI, 0) )
    {
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vmovss  xmm13, [rbp+80h+timeMs]
      }
    }
    else
    {
      v67 = BG_GetSuitDef(_RDI->suitIndex);
      if ( !v67 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8269, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
        __debugbreak();
      if ( _RDI->viewHeightTarget == BG_Suit_GetProneViewHeight(v67) )
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vmovss  xmm13, [rbp+80h+timeMs]
        }
      }
      else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x14u) )
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vmovss  xmm13, [rbp+80h+timeMs]
        }
      }
      else if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, ACTIVE, 0xBu) )
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vmovss  xmm13, [rbp+80h+timeMs]
        }
      }
      else
      {
        __asm
        {
          vmovaps xmm1, xmm13; angle2
          vmovaps xmm0, xmm6; angle1
        }
        AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
        __asm
        {
          vmovss  xmm1, cs:__real@447a0000
          vmovss  xmm13, [rbp+80h+timeMs]
          vdivss  xmm2, xmm1, xmm13
          vmulss  xmm6, xmm2, xmm0
        }
        Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_viewBobMaxTurnSpeed, "bg_viewBobMaxTurnSpeed");
        __asm
        {
          vandps  xmm6, xmm6, xmm7
          vdivss  xmm0, xmm6, xmm0; val
          vmovaps xmm2, xmm15; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm2, xmm0; fraction }
        *(double *)&_XMM0 = GraphGetValueFromFraction(4, knots, *(const float *)&_XMM2);
        __asm { vmovaps xmm6, xmm0 }
      }
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovss  xmm13, [rbp+80h+timeMs]
    }
  }
  v78 = DVARFLT_player_viewmodelMoveAnimScale;
  if ( !DVARFLT_player_viewmodelMoveAnimScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_viewmodelMoveAnimScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v78);
  __asm
  {
    vmaxss  xmm0, xmm6, xmm12
    vmulss  xmm8, xmm0, dword ptr [rbx+28h]
  }
  LOBYTE(_EAX) = BG_ShouldPlayAdditiveCrawlAnim(_RDI, WEAPON_HAND_DEFAULT, pm->m_bgHandler) && (int)v22 >= 4;
  _EBX = 0;
  __asm { vmovd   xmm1, ebx }
  _EAX = (unsigned __int8)_EAX;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:__real@bf800000
    vblendvps xmm0, xmm1, xmm15, xmm2
    vmovss  [rbp+80h+timeMs], xmm0
    vxorps  xmm6, xmm6, xmm6
  }
  step = NULL;
  movement = NULL;
  PM_Slope_GetBobCycleScale(pm, &outStairsAscentRatio, &outFrequencyScale, &outAmplitudeScale);
  FootstepAnimType = (unsigned int)PM_GetFootstepAnimType(pm);
  if ( FootstepAnimType == FOOTSTEP_ANIM_INVALID || !BG_Suit_GetAnimFootstepInfo(_RDI, pm->m_bgHandler, pm->weaponMap, FootstepAnimType, &outInfo) )
  {
    generation = v216.generation;
  }
  else
  {
    if ( outInfo.animDurationMs <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8365, ASSERT_TYPE_ASSERT, "(footstepInfo.animDurationMs > 0)", (const char *)&queryFormat, "footstepInfo.animDurationMs > 0") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rbp+80h+outInfo.animDurationMs]
      vdivss  xmm6, xmm13, xmm0
    }
    v216.maxGeneration = I_clamp(outInfo.footstepAnim->leftCount - 1, 0, 15);
    generation = I_clamp(v216.generation, 0, v216.maxGeneration);
    leftCount = outInfo.footstepAnim->leftCount;
    if ( outInfo.footstepAnim->leftCount <= 0 )
      step = NULL;
    else
      step = outInfo.footstepAnim->step;
    if ( leftCount <= 0 )
      movement = NULL;
    else
      movement = outInfo.footstepAnim->movement;
  }
  p_pm_flags = &_RDI->pm_flags;
  v94 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x14u);
  v95 = v94;
  __asm { vucomiss xmm6, xmm11 }
  if ( v26 )
  {
    if ( v94 )
    {
      v96 = DCONST_DVARMPINT_player_viewmodelNoWeaponSprintCycleMs;
      if ( !DCONST_DVARMPINT_player_viewmodelNoWeaponSprintCycleMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_viewmodelNoWeaponSprintCycleMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v96);
      integer = v96->current.integer;
    }
    else
    {
      integer = *(_DWORD *)((char *)&dword_143F488B0[2 * v22] + (walking != 0 ? 4 : 0));
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 6u) )
    {
      __asm
      {
        vmovss  xmm14, dword ptr [rdi+44h]
        vandps  xmm14, xmm14, xmm7
      }
      if ( walking )
      {
        v100 = "player_ladderBobCycleDurationADS";
        v101 = DVARINT_player_ladderBobCycleDurationADS;
      }
      else
      {
        v100 = "player_ladderBobCycleDuration";
        v101 = DVARINT_player_ladderBobCycleDuration;
      }
      integer = Dvar_GetInt_Internal_DebugName(v101, v100);
    }
    if ( integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 8387, ASSERT_TYPE_ASSERT, "(cycleDuration > 0)", (const char *)&queryFormat, "cycleDuration > 0") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vdivss  xmm6, xmm13, xmm0
    }
    v103 = 0;
    v216.maxGeneration = 0;
    generation = 0;
    step = NULL;
    movement = NULL;
    p_pm_flags = &_RDI->pm_flags;
  }
  else
  {
    v103 = v216.maxGeneration;
  }
  if ( PM_IsInAir(pm) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 6u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 5u) )
  {
    Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_inAirBobCycleScale, "player_inAirBobCycleScale");
    __asm { vmulss  xmm6, xmm6, xmm0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_inAirMaxScaledSpeedRatio, "player_inAirMaxScaledSpeedRatio");
    __asm { vminss  xmm8, xmm0, xmm8 }
  }
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 7986, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v106 = DCONST_DVARMPBOOL_movementAnimProto;
  if ( !DCONST_DVARMPBOOL_movementAnimProto && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movementAnimProto") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v106);
  __asm { vmovss  xmm7, [rbp+80h+timeMs] }
  if ( !v106->current.enabled && ((weaponState = ps->weapState[0].weaponState, (unsigned int)weaponState <= 0x3D) && (v109 = 0x2200001400000E1Ci64, _bittest64(&v109, weaponState)) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du)) || maxGeneration != v103 )
  {
    __asm { vxorps  xmm10, xmm10, xmm10 }
    v116 = 0;
    if ( v103 <= 0 )
      v216.generation = 0;
    else
      v216.generation = generation % v103;
  }
  else
  {
    __asm
    {
      vmulss  xmm10, xmm6, xmm7
      vmulss  xmm0, xmm10, xmm8
      vmulss  xmm2, xmm0, [rsp+180h+outFrequencyScale]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, edx
      vmulss  xmm2, xmm2, xmm1
      vcvttss2si ecx, xmm2
    }
    v115 = _ECX + v216.animCycle;
    v216.generation = ModuloWrap<int>(_ECX + v216.animCycle + (generation << 9), (v103 + 1) << 9) / 512;
    v117 = (v115 % 512 + 512) & 0x800001FF;
    v116 = 0;
    if ( v117 < 0 )
    {
      v116 = 0;
      v117 = (((_WORD)v117 - 1) | 0xFFFFFE00) + 1;
    }
    v216.animCycle = v117;
  }
  __asm { vcomiss xmm7, xmm11 }
  v216.isAnimDecreasing = v116;
  *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(pm->weaponMap, _RDI);
  __asm { vmovaps xmm8, xmm0 }
  _RBX = DCONST_DVARMPFLT_bg_viewBobMax;
  if ( !DCONST_DVARMPFLT_bg_viewBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm12, dword ptr [rbx+28h] }
  v121 = suitDef;
  ProneViewHeight = BG_Suit_GetProneViewHeight(suitDef);
  viewHeightTarget = _RDI->viewHeightTarget;
  viewheight_crouch = v121->viewheight_crouch;
  viewheight_stand = v121->viewheight_stand;
  if ( viewHeightTarget == ProneViewHeight )
  {
    _RBX = DCONST_DVARMPFLT_bg_viewBobAmplitudeProne;
    if ( !DCONST_DVARMPFLT_bg_viewBobAmplitudeProne && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobAmplitudeProne") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm9, xmm0, xmm14
    }
    v129 = DCONST_DVARMPFLT_bg_viewBobAmplitudeProne;
    if ( !DCONST_DVARMPFLT_bg_viewBobAmplitudeProne && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobAmplitudeProne") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v129);
    __asm
    {
      vmovss  xmm2, [rbp+80h+arg_0]
      vmulss  xmm2, xmm2, dword ptr [rbx+28h]
    }
    goto LABEL_121;
  }
  if ( viewHeightTarget == viewheight_crouch )
  {
    _RBX = DCONST_DVARMPFLT_bg_viewBobAmplitudeDuckedAds;
    if ( !DCONST_DVARMPFLT_bg_viewBobAmplitudeDuckedAds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobAmplitudeDuckedAds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    v134 = DCONST_DVARMPFLT_bg_viewBobAmplitudeDucked;
    if ( !DCONST_DVARMPFLT_bg_viewBobAmplitudeDucked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobAmplitudeDucked") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v134);
    __asm
    {
      vsubss  xmm6, xmm15, xmm8
      vmulss  xmm1, xmm7, xmm8
      vmulss  xmm0, xmm6, dword ptr [rbx+28h]
      vaddss  xmm1, xmm1, xmm0
      vmulss  xmm9, xmm1, xmm14
    }
    _RBX = DCONST_DVARMPFLT_bg_viewBobAmplitudeDuckedAds;
    if ( !DCONST_DVARMPFLT_bg_viewBobAmplitudeDuckedAds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobAmplitudeDuckedAds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    v140 = DCONST_DVARMPFLT_bg_viewBobAmplitudeDucked;
    if ( !DCONST_DVARMPFLT_bg_viewBobAmplitudeDucked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobAmplitudeDucked") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v140);
    __asm
    {
      vmulss  xmm1, xmm7, xmm8
      vmulss  xmm0, xmm6, dword ptr [rbx+28h]
    }
    goto LABEL_120;
  }
  if ( !v95 )
  {
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_viewBobAmplitudeStandingAds, "bg_viewBobAmplitudeStandingAds");
    __asm { vmovaps xmm6, xmm0 }
    Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_viewBobAmplitudeStanding, "bg_viewBobAmplitudeStanding");
    __asm
    {
      vsubss  xmm7, xmm15, xmm8
      vmulss  xmm1, xmm6, xmm8
      vmulss  xmm0, xmm7, xmm0
      vaddss  xmm1, xmm1, xmm0
      vmulss  xmm9, xmm1, xmm14
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_viewBobAmplitudeStandingAds, "bg_viewBobAmplitudeStandingAds");
    __asm { vmovaps xmm6, xmm0 }
    Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_viewBobAmplitudeStanding, "bg_viewBobAmplitudeStanding");
    __asm
    {
      vmulss  xmm1, xmm6, xmm8
      vmulss  xmm0, xmm7, xmm0
    }
LABEL_120:
    __asm
    {
      vaddss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm1, [rbp+80h+arg_0]
    }
    goto LABEL_121;
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_viewBobAmplitudeSprinting, "bg_viewBobAmplitudeSprinting");
  __asm { vmulss  xmm9, xmm0, xmm14 }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_viewBobAmplitudeSprinting, "bg_viewBobAmplitudeSprinting");
  __asm { vmulss  xmm2, xmm0, [rbp+80h+arg_0] }
LABEL_121:
  __asm
  {
    vmulss  xmm0, xmm9, [rsp+180h+outAmplitudeScale]
    vmulss  xmm9, xmm0, dword ptr [rax+60h]
    vmulss  xmm6, xmm2, dword ptr [rax+60h]
  }
  if ( BG_HasPerk(&_RDI->perks, 0xFu) )
  {
    v152 = DVARFLT_perk_lightWeightViewBobScale;
    if ( !DVARFLT_perk_lightWeightViewBobScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_lightWeightViewBobScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v152);
    __asm { vmulss  xmm9, xmm9, dword ptr [rbx+28h] }
    v153 = DVARFLT_perk_lightWeightViewBobScale;
    if ( !DVARFLT_perk_lightWeightViewBobScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_lightWeightViewBobScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v153);
    __asm { vmulss  xmm6, xmm6, dword ptr [rbx+28h] }
  }
  __asm { vxorps  xmm7, xmm7, xmm7 }
  v155 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 8u);
  v156 = 0;
  v157 = !v155;
  if ( v155 )
  {
    if ( viewHeightTarget == viewheight_stand )
    {
      v158 = DCONST_DVARFLT_player_stairs_bobAmplitudeMinimum_stand;
      if ( !DCONST_DVARFLT_player_stairs_bobAmplitudeMinimum_stand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_bobAmplitudeMinimum_stand") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v158);
      __asm
      {
        vsubss  xmm0, xmm15, xmm8
        vmulss  xmm7, xmm0, dword ptr [rbx+28h]
      }
    }
    else
    {
      v156 = viewHeightTarget < viewheight_crouch;
      v157 = viewHeightTarget == viewheight_crouch;
      if ( viewHeightTarget == viewheight_crouch )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_player_stairs_bobAmplitudeMinimum_crouch, "player_stairs_bobAmplitudeMinimum_crouch");
        __asm
        {
          vsubss  xmm1, xmm15, xmm8
          vmulss  xmm7, xmm1, xmm0
        }
      }
    }
  }
  __asm
  {
    vmaxss  xmm7, xmm7, xmm9
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm8, xmm11
  }
  if ( !v156 && !v157 )
  {
    __asm { vcomiss xmm6, xmm11 }
    if ( v156 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+180h+times], xmm0
        vxorpd  xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+180h+curTime], xmm1
      }
      v163 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", curTimea, *(double *)&timesa);
      v156 = 0;
      v157 = !v163;
      if ( v163 )
        __debugbreak();
    }
    __asm
    {
      vmaxss  xmm0, xmm7, xmm11
      vminss  xmm9, xmm0, xmm6
    }
  }
  __asm { vcomiss xmm12, xmm11 }
  if ( v156 || v157 )
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm7, xmm12
      vmaxss  xmm0, xmm0, xmm11
      vminss  xmm6, xmm0, xmm15
    }
  }
  v166 = DCONST_DVARMPINT_bg_viewBobTransTime;
  if ( !DCONST_DVARMPINT_bg_viewBobTransTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewBobTransTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v166);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
    vdivss  xmm2, xmm13, xmm0
    vmovss  xmm1, [rsp+180h+var_140.amplitudeRatio]
    vcomiss xmm6, xmm1
  }
  if ( v36 | v26 )
  {
    __asm
    {
      vsubss  xmm0, xmm1, xmm2; val
      vmovaps xmm2, xmm1; max
      vmovaps xmm1, xmm6; min
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm0, xmm1, xmm2
      vmovaps xmm2, xmm6
    }
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  [rsp+180h+var_140.amplitudeRatio], xmm0 }
  v173 = DCONST_DVARMPFLT_bg_gunBobMax;
  if ( !DCONST_DVARMPFLT_bg_gunBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gunBobMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v173);
  __asm { vcomiss xmm12, xmm11 }
  if ( v174 | v175 )
  {
    __asm { vxorps  xmm7, xmm7, xmm7 }
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm9, dword ptr [rbx+28h]; val
      vmovaps xmm2, xmm15; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm7, xmm0 }
  }
  __asm
  {
    vmovss  xmm6, [rsp+180h+var_140.amplitudeRatioGun]
    vcomiss xmm7, xmm6
  }
  if ( v174 | v175 )
  {
    v187 = DCONST_DVARMPINT_bg_gunBobTransOutTime;
    if ( !DCONST_DVARMPINT_bg_gunBobTransOutTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gunBobTransOutTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v187);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
      vdivss  xmm1, xmm13, xmm0
      vsubss  xmm2, xmm6, xmm1
      vmaxss  xmm0, xmm2, xmm11
    }
  }
  else
  {
    v180 = DCONST_DVARMPINT_bg_gunBobTransInTime;
    if ( !DCONST_DVARMPINT_bg_gunBobTransInTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gunBobTransInTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v180);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
      vdivss  xmm2, xmm13, xmm0
      vaddss  xmm0, xmm2, xmm6; val
      vmovaps xmm2, xmm7; max
      vmovaps xmm1, xmm6; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  __asm { vmovss  [rsp+180h+var_140.amplitudeRatioGun], xmm0 }
  BobCycle::PackBobCycle(&v216, outPackedBobCycle);
  *(double *)&_XMM0 = BG_GetBobCycleAnimTime(outPackedBobCycle);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = BG_GetBobCycleAnimTime((const int (*)[2])packedBobCycle);
  v193 = maxGeneration < v216.maxGeneration;
  v194 = maxGeneration == v216.maxGeneration;
  if ( maxGeneration != v216.maxGeneration )
  {
    __asm
    {
      vsubss  xmm1, xmm6, xmm10
      vcvtss2sd xmm0, xmm1, xmm1; val
      vmovsd  xmm1, cs:__real@3ff0000000000000; divisor
    }
    *(double *)&_XMM0 = ModuloWrapD(*(long double *)&_XMM0, *(long double *)&_XMM1);
    __asm { vcvtsd2ss xmm0, xmm0, xmm0 }
  }
  __asm { vcomiss xmm10, xmm11 }
  if ( !v193 && !v194 )
  {
    mvmtTimes = movement;
    times = step;
    __asm
    {
      vmovss  [rsp+180h+curTime], xmm6
      vmovss  dword ptr [rsp+180h+fmt], xmm0
    }
LABEL_172:
    __asm { vmovss  xmm3, [rsp+180h+outStairsAscentRatio]; stairsAscentRatio }
    PM_FootstepEvent(pm, pml, v155, *(float *)&_XMM3, fmt, curTime, times, mvmtTimes);
    goto LABEL_173;
  }
  if ( v193 )
  {
    mvmtTimes = movement;
    times = step;
    __asm
    {
      vmovss  [rsp+180h+curTime], xmm0
      vmovss  dword ptr [rsp+180h+fmt], xmm6
    }
    goto LABEL_172;
  }
LABEL_173:
  Sys_ProfEndNamedEvent();
  _R11 = &v228;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
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
  char v10; 
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
        _RBX = DCONST_DVARFLT_player_moveThreshhold;
        __asm { vmovaps [rsp+58h+var_18], xmm6 }
        if ( !DCONST_DVARFLT_player_moveThreshhold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_moveThreshhold") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm6, dword ptr [rbx+28h] }
        *(double *)&_XMM0 = BG_GetSpeed(ps, serverTime, m_bgHandler);
        __asm
        {
          vcomiss xmm0, xmm6
          vmovaps xmm6, [rsp+58h+var_18]
        }
        if ( !v10 )
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
  bool v8; 
  int v9; 
  BgGroundState *ground; 
  unsigned int v11; 
  int v12; 
  char v20; 
  char v21; 
  char v40; 
  char v41; 
  int penetrationEntity; 
  vec3_t vec; 

  _RBP = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10498, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10498, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0) )
  {
    __asm
    {
      vmovaps [rsp+88h+var_18], xmm6
      vmovaps [rsp+88h+var_28], xmm9
      vmovaps [rsp+88h+var_38], xmm10
    }
    v8 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, ACTIVE, 0xBu);
    if ( _RDI->groundEntityNum == 2047 )
    {
      v9 = PM_LocalCheckProne(pm, _RBP, _RDI, NULL);
      if ( !v8 && !v9 )
        goto LABEL_20;
    }
    else
    {
      if ( !v8 )
      {
        ground = pm->ground;
        if ( ground->groundPlane && !ground->trace.walkable )
        {
          v11 = 0;
LABEL_21:
          BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_CROUCH, v11, pm->cmd.serverTime, pm->weaponMap, _RDI);
          goto LABEL_22;
        }
      }
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
      {
        v12 = PM_LocalCheckProne(pm, _RBP, _RDI, &penetrationEntity);
        if ( !v8 && !v12 && BGMovingPlatforms::IsMovingPlatform(penetrationEntity) )
        {
LABEL_20:
          v11 = 3;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    _RAX = pm->ground;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+10h]
      vmovss  dword ptr [rsp+88h+vec], xmm0
      vmovss  xmm1, dword ptr [rax+14h]
      vmovss  dword ptr [rsp+88h+vec+4], xmm1
      vmovss  xmm0, dword ptr [rax+18h]
      vmovss  dword ptr [rsp+88h+vec+8], xmm0
    }
    WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&pm->refFrame, &vec);
    __asm { vxorps  xmm6, xmm6, xmm6 }
    if ( pm->ground->groundPlane )
    {
      __asm { vmovss  xmm0, dword ptr [rdi+26Ch]; fYaw }
      *(double *)&_XMM0 = PitchForYawOnNormal(*(const float *)&_XMM0, &vec);
    }
    else
    {
      __asm { vxorps  xmm0, xmm0, xmm0; angle1 }
    }
    __asm { vmovss  xmm1, dword ptr [rdi+270h]; angle2 }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vucomiss xmm0, xmm6
      vmovss  xmm9, cs:__real@3f800000
      vmovss  xmm10, cs:__real@bf800000
      vmovaps xmm2, xmm0
    }
    if ( !v21 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+24h]
        vmulss  xmm3, xmm1, cs:__real@428c0000
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, xmm3
        vmovss  xmm4, dword ptr [rdi+270h]
      }
      if ( !(v20 | v21) )
      {
        __asm
        {
          vcmpless xmm0, xmm6, xmm2
          vblendvps xmm0, xmm10, xmm9, xmm0
          vmulss  xmm2, xmm0, xmm3
        }
      }
      __asm
      {
        vaddss  xmm0, xmm4, xmm2
        vmulss  xmm5, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm5, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm2, 1
        vsubss  xmm1, xmm5, xmm4
        vmulss  xmm0, xmm1, cs:__real@43b40000
        vmovss  dword ptr [rdi+270h], xmm0
      }
    }
    if ( pm->ground->groundPlane )
    {
      __asm { vmovss  xmm0, dword ptr [rdi+1DCh]; fYaw }
      *(double *)&_XMM0 = PitchForYawOnNormal(*(const float *)&_XMM0, &vec);
    }
    else
    {
      __asm { vxorps  xmm0, xmm0, xmm0; angle1 }
    }
    __asm { vmovss  xmm1, dword ptr [rdi+274h]; angle2 }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm { vucomiss xmm0, xmm6 }
    if ( !v41 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+24h]
        vmulss  xmm3, xmm1, cs:__real@428c0000
        vandps  xmm2, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm2, xmm3
        vmovss  xmm4, dword ptr [rdi+274h]
      }
      if ( !(v40 | v41) )
      {
        __asm
        {
          vcmpless xmm0, xmm6, xmm0
          vblendvps xmm0, xmm10, xmm9, xmm0
          vmulss  xmm0, xmm0, xmm3
        }
      }
      __asm
      {
        vaddss  xmm0, xmm4, xmm0
        vmulss  xmm5, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm5, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm2, 1
        vsubss  xmm1, xmm5, xmm4
        vmulss  xmm0, xmm1, cs:__real@43b40000
        vmovss  dword ptr [rdi+274h], xmm0
      }
    }
    __asm
    {
      vmovaps xmm9, [rsp+88h+var_28]
      vmovaps xmm6, [rsp+88h+var_18]
      vmovaps xmm10, [rsp+88h+var_38]
    }
  }
}

/*
==============
PM_UpdateSprint
==============
*/

void __fastcall PM_UpdateSprint(pmove_t *pm, const pml_t *pml, double _XMM2_8)
{
  playerState_s *ps; 
  const dvar_t *v6; 
  int integer; 
  playerState_s *v8; 
  unsigned __int64 buttons; 
  int serverTime; 
  int sprintRestoreDelayStart; 
  playerState_s *v12; 
  __int64 v13; 
  bool v14; 
  bool CanStartSprint; 
  bool v23; 
  char v26; 
  int WeaponHand; 
  __int64 v28; 
  int *p_weaponState; 
  char v30; 
  float fmt; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2001, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2001, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = DCONST_DVARINT_bg_disableToggleSprint;
  if ( !DCONST_DVARINT_bg_disableToggleSprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_disableToggleSprint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  if ( ps->sprintState.sprintButtonUpRequired && (pm->cmd.buttons & 2) == 0 )
    ps->sprintState.sprintButtonUpRequired = 0;
  if ( (pm->cmd.buttons & 0x800000000000i64) != 0 && !PM_DoesSprintMeterTestPass(pm) )
    pm->cmd.buttons &= ~0x800000000000ui64;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
  {
    if ( PM_UpdateSprint_IsInspecting(pm, pml) )
      PM_Weapon_CancelInspect(pm);
    v8 = pm->ps;
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1771, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v8->pm_flags, ACTIVE, 0x14u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1774, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::SPRINTING ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::SPRINTING )") )
      __debugbreak();
    if ( BG_IsSuperSprinting(v8) )
    {
      if ( PM_GetSprintLeft(pm->weaponMap, pm, pm->cmd.serverTime) <= 0 )
        v8->sprintState.lastSuperSprintEnd = pm->cmd.serverTime;
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
          v12 = pm->ps;
          if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1642, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v12->pm_flags, ACTIVE, 0x1Du) )
          {
            v13 = 4329733i64;
            if ( PM_IsInAir(pm) )
              v13 = 4329861i64;
            if ( (v13 & pm->cmd.buttons) != 0 )
            {
              v14 = PM_AnyAttackButtonPressed(pm);
              __asm
              {
                vmovss  xmm0, cs:__real@7f7fffff
                vmovss  dword ptr [rsp+68h+fmt], xmm0
              }
              PM_SetSprintRestore(pm, ps, 1, v14, fmt);
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
    _RBX = DCONST_DVARFLT_player_sprintRechargePause;
    if ( !DCONST_DVARFLT_player_sprintRechargePause && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintRechargePause") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, eax
      vcomiss xmm2, xmm1
    }
    if ( pm->cmd.serverTime >= (unsigned int)ps->sprintState.lastSprintEnd )
    {
LABEL_57:
      CanStartSprint = PM_CanStartSprint(pm, pml, 1);
      _RBX = pm->ps;
      v23 = CanStartSprint;
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 1926, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !PM_Weapon_SprintCancelsReload(pm) || ((LOBYTE(pm->cmd.buttons) >> 1) & ((unsigned __int8)~LOBYTE(pm->oldcmd.buttons) >> 1) & 1) == 0 || BG_CanSprintReload(_RBX) )
        goto LABEL_71;
      _RBP = DCONST_DVARMODEFLT_adsReloadSprintCancelMaxFraction;
      if ( !DCONST_DVARMODEFLT_adsReloadSprintCancelMaxFraction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "adsReloadSprintCancelMaxFraction") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBP);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+730h]
        vcomiss xmm0, dword ptr [rbp+28h]
      }
      if ( !v26 )
        goto LABEL_71;
      WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, _RBX);
      if ( WeaponHand < 0 )
        goto LABEL_71;
      v28 = 0i64;
      p_weaponState = &_RBX->weapState[0].weaponState;
      while ( (unsigned int)(*p_weaponState - 18) > 3 )
      {
        ++v28;
        p_weaponState += 20;
        if ( v28 > WeaponHand )
          goto LABEL_71;
      }
      if ( v23 )
      {
        v30 = 1;
        PM_Weapon_ReloadCancel(pm, pml);
      }
      else
      {
LABEL_71:
        v30 = 0;
      }
      if ( v23 && PM_UpdateSprint_IsInspecting(pm, pml) )
        PM_Weapon_CancelInspect(pm);
      if ( v30 || PM_CanStartSprint(pm, pml, 0) )
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
  float fmt; 

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
            __asm
            {
              vmovss  xmm0, cs:__real@7f7fffff
              vmovss  dword ptr [rsp+38h+fmt], xmm0
            }
            PM_SetSprintRestore(pm, ps, 1, v8, fmt);
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
  const BgHandler *m_bgHandler; 
  usercmd_s *p_cmd; 
  unsigned __int64 buttons; 
  BOOL v19; 
  bool v20; 
  __int16 viewlocked_entNum; 
  bool IsClientVehicleTurretCamera; 
  int v23; 
  char *v30; 
  bool v31; 
  EViewAngleEaseMode Int_Internal_DebugName; 
  EViewAngleEaseMode v60; 
  int v61; 
  int pm_type; 
  GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32> *p_linkFlags; 
  __int64 flags; 
  int flagsa; 
  __int64 v68; 
  vec2_t goalAngles; 

  __asm { vmovaps [rsp+108h+var_58], xmm7 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10295, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10295, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10296, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  m_bgHandler = pm->m_bgHandler;
  p_cmd = &pm->cmd;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, dword ptr [rbx+28h]
  }
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 0x20u) )
  {
    buttons = p_cmd->buttons;
    v19 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
    if ( (buttons & 0x800) != 0 || !v19 )
      BG_UpdateViewAngles_ClampDefault(_RSI, &pm->cmd);
    goto LABEL_45;
  }
  if ( _RSI->pm_type > 5 )
    goto LABEL_45;
  if ( !BG_Skydive_IsSkydiving(_RSI) && !BG_Skydive_IsWeaponRaise(_RSI) )
  {
    if ( BG_IsPlayerInExecution(_RSI) && BG_Execution_CanUpdateViewangles(_RSI) )
    {
      PM_Execution_UpdateViewAngles(pm);
      goto LABEL_45;
    }
    v20 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0x1Cu) || (p_cmd->buttons & 0x40000) != 0;
    viewlocked_entNum = _RSI->viewlocked_entNum;
    __asm { vmovaps [rsp+108h+var_48], xmm6 }
    IsClientVehicleTurretCamera = BG_IsClientVehicleTurretCamera(_RSI, m_bgHandler);
    if ( viewlocked_entNum == 2047 && v20 || IsClientVehicleTurretCamera )
    {
      __asm
      {
        vmovaps [rsp+108h+var_68], xmm8
        vmovaps [rsp+108h+var_78], xmm9
        vmovaps [rsp+108h+var_88], xmm10
        vmovaps [rsp+108h+var_98], xmm11
        vmovaps [rsp+108h+var_A8], xmm12
        vmovaps [rsp+108h+var_B8], xmm13
      }
      v23 = 0;
      if ( BG_IsClientVehicleCamera(_RSI, m_bgHandler) )
      {
        *(_QWORD *)_RSI->delta_angles.v = 0i64;
        _RSI->delta_angles.v[2] = 0.0;
      }
      __asm
      {
        vmovss  xmm11, cs:__real@43340000
        vmovss  xmm9, cs:__real@3b360b61
        vmovss  xmm10, cs:__real@3f000000
        vmovss  xmm12, cs:__real@3f800000
        vmovss  xmm13, cs:__real@43b40000
      }
      _RSI = &_RSI->delta_angles;
      v30 = (char *)((char *)&pm->cmd.angles - (char *)_RSI);
      v31 = 1;
      __asm { vxorps  xmm8, xmm8, xmm8 }
      do
      {
        if ( !v31 )
        {
          LODWORD(v68) = 3;
          LODWORD(flags) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", flags, v68) )
            __debugbreak();
        }
        __asm { vmovaps xmm1, xmm11; maxAbsValueSize }
        *(double *)&_XMM0 = MSG_UnpackSignedFloat(*(_DWORD *)((char *)_RSI->v + (_QWORD)v30), *(float *)&_XMM1, 0x14u);
        __asm
        {
          vmulss  xmm6, xmm0, xmm9
          vaddss  xmm2, xmm6, xmm10
          vxorps  xmm1, xmm1, xmm1
          vmovss  xmm0, xmm1, xmm2
          vroundss xmm7, xmm8, xmm0, 1
        }
        if ( (unsigned int)v23 >= 3 )
        {
          LODWORD(v68) = 3;
          LODWORD(flags) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", flags, v68) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm2, xmm9, dword ptr [rsi]
          vsubss  xmm0, xmm6, xmm7
          vmulss  xmm3, xmm0, xmm12
          vaddss  xmm4, xmm3, xmm2
          vxorps  xmm0, xmm0, xmm0
          vaddss  xmm3, xmm4, xmm10
          vmovss  xmm1, xmm0, xmm3
          vroundss xmm2, xmm8, xmm1, 1
          vsubss  xmm0, xmm4, xmm2
          vmulss  xmm6, xmm0, xmm13
        }
        if ( (unsigned int)v23 >= 3 )
        {
          LODWORD(v68) = 3;
          LODWORD(flags) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", flags, v68) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rsi+124h], xmm6 }
        _RSI = (vec3_t *)((char *)_RSI + 4);
        v31 = (unsigned int)++v23 < 3;
      }
      while ( v23 < 3 );
      __asm
      {
        vmovaps xmm13, [rsp+108h+var_B8]
        vmovaps xmm12, [rsp+108h+var_A8]
        vmovaps xmm11, [rsp+108h+var_98]
        vmovaps xmm10, [rsp+108h+var_88]
        vmovaps xmm9, [rsp+108h+var_78]
        vmovaps xmm8, [rsp+108h+var_68]
      }
LABEL_44:
      __asm { vmovaps xmm6, [rsp+108h+var_48] }
      goto LABEL_45;
    }
    __asm { vmovss  xmm6, dword ptr [rsi+1DCh] }
    if ( BG_IsRemoteTurretActive(_RSI) && !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&_RSI->linkFlags, ACTIVE, 2u) )
    {
      __asm { vmovaps xmm1, xmm7; msec }
      TurretUpdateViewClamp(pm, *(float *)&_XMM1);
    }
    PM_GameInterface_UpdateViewClamp(pm);
    BG_UpdateViewAngles_ClampDefault(_RSI, &pm->cmd);
    if ( (p_cmd->buttons & 0x4000000) != 0 )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_centerview_cameraPitchOffset, "centerview_cameraPitchOffset");
      __asm
      {
        vmovss  dword ptr [rsp+108h+goalAngles], xmm0
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+108h+goalAngles+4], xmm0
      }
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_centerview_cameraAlignmentEaseModeOut, "centerview_cameraAlignmentEaseModeOut");
      v60 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_centerview_cameraAlignmentEaseModeIn, "centerview_cameraAlignmentEaseModeIn");
      v61 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_centerview_cameraRotateTimeMs, "centerview_cameraRotateTimeMs");
      PM_StartViewAngleTransition(pm, v61, v60, Int_Internal_DebugName, &goalAngles, 1);
    }
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 0x10u) )
      PM_UpdateViewAnglesOverride(pm, &pm->cmd);
    pm_type = _RSI->pm_type;
    if ( pm_type == 1 || pm_type == 8 )
    {
      p_linkFlags = &_RSI->linkFlags;
      if ( !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&_RSI->linkFlags, ACTIVE, 0) )
        goto LABEL_67;
    }
    else
    {
      p_linkFlags = &_RSI->linkFlags;
    }
    if ( !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(p_linkFlags, ACTIVE, 2u) && !BG_IsTurretActive(_RSI) && !BG_Ladder_IsActive(_RSI) && !BG_ContextMount_IsActive(_RSI) )
    {
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0) && _RSI->vehicleState.entity == 2047 )
      {
        if ( BG_IsTurretActive(_RSI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10424, ASSERT_TYPE_ASSERT, "(!BG_IsTurretActive( ps ))", (const char *)&queryFormat, "!BG_IsTurretActive( ps )") )
          __debugbreak();
        __asm
        {
          vmovss  [rsp+108h+flags], xmm6
          vmovaps xmm2, xmm7; msec
        }
        PM_UpdateViewAngles_Prone(pm, _RSI, *(float *)&_XMM2, &pm->cmd, m_bgHandler, *(float *)&flagsa);
      }
      goto LABEL_44;
    }
LABEL_67:
    __asm { vmovaps xmm1, xmm6; oldYaw }
    PM_UpdateViewAngles_RangeLimited(_RSI, *(const float *)&_XMM1);
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0x21u) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0x22u) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0) && !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(p_linkFlags, ACTIVE, 2u) )
      _RSI->proneDirection = _RSI->viewangles.v[1];
    goto LABEL_44;
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 0x10u) )
    PM_UpdateViewAnglesOverride(pm, &pm->cmd);
  PM_Skydive_UpdateViewAngles(pm, pml);
LABEL_45:
  __asm { vmovaps xmm7, [rsp+108h+var_58] }
}

/*
==============
PM_UpdateViewAngles_Prone
==============
*/

void __fastcall PM_UpdateViewAngles_Prone(pmove_t *pm, playerState_s *ps, double msec, usercmd_s *cmd, const BgHandler *handler, float oldViewYaw)
{
  int v24; 
  const dvar_t *v30; 
  int v32; 
  bool v34; 
  int v35; 
  bool v36; 
  BOOL v37; 
  bool v44; 
  char v45; 
  bool v46; 
  int v59; 
  int isOnGround; 
  const vec3_t *p_origin; 
  FeetDirection v68; 
  int v71; 
  int v80; 
  int v82; 
  int v87; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fYaw; 
  float fYawa; 
  float fYawb; 
  float v125; 
  float v126; 
  float v127; 
  void *retaddr; 
  FeetDirection feetDirection; 
  FeetDirection v140; 
  FeetDirection v141; 
  Physics_WorldId worldId; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-58h], xmm7 }
  _R13 = pm;
  __asm { vmovaps xmmword ptr [rax-0C8h], xmm14 }
  _RDI = ps;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmm11, xmm2
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10137, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10138, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  __asm
  {
    vmovss  xmm14, dword ptr [rdi+1DCh]
    vmovss  xmm0, dword ptr [rdi+26Ch]; angle1
    vmovaps xmm1, xmm14; angle2
    vmovss  [rsp+178h+arg_18], xmm14
  }
  v24 = 0;
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  _RSI = DCONST_DVARFLT_bg_prone_yawcap;
  __asm { vmovaps xmm6, xmm0 }
  if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+28h]
    vmovss  xmm7, cs:__real@40a00000
    vsubss  xmm1, xmm0, xmm7
    vcomiss xmm6, xmm1
  }
  if ( !(v45 | v34) )
    goto LABEL_16;
  v30 = DCONST_DVARFLT_bg_prone_yawcap;
  if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  __asm
  {
    vsubss  xmm0, xmm7, dword ptr [rsi+28h]
    vcomiss xmm6, xmm0
  }
  if ( v45 )
LABEL_16:
    v32 = 1;
  else
    v32 = 0;
  __asm { vxorps  xmm10, xmm10, xmm10 }
  v34 = cmd->forwardmove == 0;
  if ( !cmd->forwardmove )
  {
    v34 = cmd->rightmove == 0;
    if ( !cmd->rightmove )
      goto LABEL_21;
  }
  __asm { vucomiss xmm6, xmm10 }
  if ( !v34 )
    v35 = 1;
  else
LABEL_21:
    v35 = 0;
  v36 = (cmd->buttons & 0x40) != 0;
  feetDirection = PM_GetProneFeetDirection(_RDI);
  v37 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, ACTIVE, 0xBu) || feetDirection == FEETDIR_FRONT;
  __asm { vmovaps [rsp+178h+var_68], xmm8 }
  worldId = _R13->m_bgHandler->GetPhysicsWorldId((BgHandler *)_R13->m_bgHandler);
  __asm
  {
    vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm13, cs:__real@bf800000
  }
  if ( v32 || v35 || v36 )
  {
    __asm
    {
      vmovss  xmm7, dword ptr [r13+348h]
      vmovss  xmm8, cs:__real@425c0000
      vandps  xmm7, xmm7, xmm12
    }
    v44 = Com_GameMode_SupportsFeature(WEAPON_STUNNED_START|0x80);
    v45 = 0;
    v46 = !v44;
    if ( v44 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@41200000
        vcomiss xmm7, xmm0
        vsubss  xmm0, xmm7, xmm0
        vmulss  xmm0, xmm0, cs:__real@3d4ccccd; val
        vmovaps xmm2, xmm9; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm1, xmm9, xmm0
        vmulss  xmm0, xmm0, cs:__real@43b40000
        vmulss  xmm2, xmm1, xmm8
        vaddss  xmm8, xmm2, xmm0
      }
    }
    __asm
    {
      vmulss  xmm0, xmm8, xmm11
      vmulss  xmm2, xmm0, cs:__real@3a83126f
      vandps  xmm1, xmm6, xmm12
      vcomiss xmm1, xmm2
    }
    if ( v45 )
    {
      __asm { vmovss  xmm8, dword ptr [rdi+1DCh] }
    }
    else
    {
      __asm
      {
        vcomiss xmm6, xmm10
        vmovss  xmm0, dword ptr [rdi+26Ch]
      }
      if ( v45 | v46 )
        __asm { vaddss  xmm8, xmm0, xmm2 }
      else
        __asm { vsubss  xmm8, xmm0, xmm2 }
    }
    __asm { vmovaps xmm2, xmm8; newProneYaw }
    v59 = 1;
    if ( !(unsigned int)BG_CheckProneTurned(_R13, _RDI, msec, handler) )
    {
      while ( !v37 )
      {
        if ( !v59 )
          goto LABEL_51;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+26Ch]; angle1
          vmovaps xmm1, xmm8; angle2
        }
        *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
        __asm
        {
          vandps  xmm1, xmm0, xmm12
          vcomiss xmm1, xmm9
          vmovaps xmm2, xmm0
        }
        v59 = 0;
        v24 = 1;
        __asm { vaddss  xmm0, xmm8, xmm2; angle }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm
        {
          vmovaps xmm2, xmm0; newProneYaw
          vmovaps xmm8, xmm0
        }
        if ( (unsigned int)BG_CheckProneTurned(_R13, _RDI, msec, handler) )
          goto LABEL_40;
      }
      goto LABEL_43;
    }
LABEL_40:
    if ( v37 )
    {
LABEL_43:
      __asm { vmovss  xmm11, cs:__real@42340000 }
      v68 = feetDirection;
      p_origin = &_RDI->origin;
      goto LABEL_44;
    }
    __asm { vmovss  xmm7, dword ptr [rdi+1DCh] }
    isOnGround = _RDI->groundEntityNum != 2047;
    *(double *)&_XMM0 = BG_Suit_GetBoundsHeight(_RDI, (const EffectiveStance)(v37 + 1));
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = BG_Suit_GetBoundsRadius(_RDI);
    p_origin = &_RDI->origin;
    v68 = feetDirection;
    __asm
    {
      vmovss  xmm11, cs:__real@42340000
      vmovss  [rsp+178h+var_108], xmm11
      vmovss  [rsp+178h+fYaw], xmm7
      vmovaps xmm3, xmm0; fSize
      vmovss  dword ptr [rsp+178h+fmt], xmm6
    }
    if ( BG_CheckProne(_RDI, _RDI->clientNum, &_RDI->origin, *(const float *)&_XMM3, fmt, fYaw, NULL, NULL, 1, isOnGround, 1, handler, worldId, PCT_CLIENT, v125, feetDirection, NULL, NULL) )
    {
LABEL_44:
      if ( v37 )
        goto LABEL_47;
      v71 = _RDI->groundEntityNum != 2047;
      *(double *)&_XMM0 = BG_Suit_GetBoundsHeight(_RDI, PM_EFF_STANCE_PRONE);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = BG_Suit_GetBoundsRadius(_RDI);
      __asm
      {
        vmovss  [rsp+178h+var_108], xmm11
        vmovss  [rsp+178h+fYaw], xmm8
        vmovaps xmm3, xmm0; fSize
        vmovss  dword ptr [rsp+178h+fmt], xmm6
      }
      if ( BG_CheckProne(_RDI, _RDI->clientNum, p_origin, *(const float *)&_XMM3, fmta, fYawa, NULL, NULL, 1, v71, 1, handler, worldId, PCT_CLIENT, v126, v68, NULL, NULL) )
      {
LABEL_47:
        __asm { vmovss  [rsp+178h+arg_0], xmm8 }
        if ( (v140 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10199, ASSERT_TYPE_ASSERT, "(!IS_NAN( newProneYaw ))", (const char *)&queryFormat, "!IS_NAN( newProneYaw )") )
          __debugbreak();
        __asm { vmovss  dword ptr [rdi+26Ch], xmm8 }
      }
      else
      {
        v24 = 1;
      }
      goto LABEL_52;
    }
    v24 = 1;
  }
  else
  {
LABEL_51:
    v68 = feetDirection;
  }
LABEL_52:
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+1DCh]; angle2
    vmovss  xmm0, dword ptr [rdi+26Ch]; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vucomiss xmm0, xmm10
    vmovaps xmm7, xmm0
  }
  if ( v34 )
    goto LABEL_67;
  __asm
  {
    vmovss  xmm8, dword ptr [rdi+26Ch]
    vmovss  xmm14, cs:__real@43360b61
    vmovss  xmm11, cs:__real@3f000000
    vmovaps [rsp+178h+var_D8], xmm15
  }
  v80 = 1;
  __asm { vmovss  xmm15, cs:__real@37800000 }
  while ( 1 )
  {
    if ( !v37 )
    {
      v82 = _RDI->groundEntityNum != 2047;
      *(double *)&_XMM0 = BG_Suit_GetBoundsHeight(_RDI, PM_EFF_STANCE_PRONE);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = BG_Suit_GetBoundsRadius(_RDI);
      __asm
      {
        vmovss  xmm1, cs:__real@42340000
        vmovss  [rsp+178h+var_108], xmm1
        vmovss  [rsp+178h+fYaw], xmm8
        vmovaps xmm3, xmm0; fSize
        vmovss  dword ptr [rsp+178h+fmt], xmm6
      }
      if ( !BG_CheckProne(_RDI, _RDI->clientNum, &_RDI->origin, *(const float *)&_XMM3, fmtb, fYawb, NULL, NULL, 1, v82, 1, handler, worldId, PCT_CLIENT, v127, v68, NULL, NULL) )
      {
        v87 = 0;
        goto LABEL_59;
      }
    }
    __asm { vmovaps xmm2, xmm8; newProneYaw }
    v87 = 1;
    if ( (unsigned int)BG_CheckProneTurned(_R13, _RDI, msec, handler) || v37 )
      break;
LABEL_59:
    if ( !v80 )
      goto LABEL_66;
    __asm
    {
      vandps  xmm0, xmm7, xmm12
      vcomiss xmm0, xmm9
    }
    v80 = 0;
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [rdi+0B8h]
      vmulss  xmm1, xmm0, xmm14
      vaddss  xmm3, xmm1, xmm11
      vxorps  xmm2, xmm2, xmm2
      vmovss  xmm0, xmm2, xmm3
      vxorps  xmm5, xmm5, xmm5
      vroundss xmm1, xmm5, xmm0, 1
      vcvttss2si eax, xmm1
    }
    _ECX = (unsigned __int16)_EAX;
    v24 = 1;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, xmm15
      vaddss  xmm2, xmm4, xmm11
      vroundss xmm3, xmm5, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, cs:__real@43b40000
      vmovss  dword ptr [rdi+0B8h], xmm0
      vaddss  xmm0, xmm7, dword ptr [rdi+1DCh]; angle
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmovss  dword ptr [rdi+1DCh], xmm0
      vmovaps xmm1, xmm0; angle2
      vmovss  xmm0, dword ptr [rdi+26Ch]; angle1
    }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm { vmovaps xmm7, xmm0 }
    if ( !v87 )
    {
      __asm { vaddss  xmm0, xmm8, xmm0; angle }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm { vmovaps xmm8, xmm0 }
    }
  }
  __asm { vmovss  [rsp+178h+arg_0], xmm8 }
  if ( (v141 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10244, ASSERT_TYPE_ASSERT, "(!IS_NAN( newProneYaw ))", (const char *)&queryFormat, "!IS_NAN( newProneYaw )") )
    __debugbreak();
  __asm { vmovss  dword ptr [rdi+26Ch], xmm8 }
LABEL_66:
  __asm
  {
    vmovss  xmm14, [rsp+178h+arg_18]
    vmovaps xmm15, [rsp+178h+var_D8]
  }
LABEL_67:
  __asm
  {
    vmovaps xmm13, [rsp+178h+var_B8]
    vmovaps xmm12, [rsp+178h+var_A8]
    vmovaps xmm11, [rsp+178h+var_98]
    vmovaps xmm10, [rsp+178h+var_88]
    vmovaps xmm9, [rsp+178h+var_78]
    vmovaps xmm8, [rsp+178h+var_68]
    vmovaps xmm6, [rsp+178h+var_48]
  }
  if ( v37 && v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10275, ASSERT_TYPE_ASSERT, "(!ignoreValidityResults || !proneBlocked)", (const char *)&queryFormat, "!ignoreValidityResults || !proneBlocked") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, [rsp+178h+oldViewYaw]; oldViewYaw
    vmovaps xmm1, xmm7; delta
    vmovss  dword ptr [rsp+178h+fmt], xmm14
  }
  PM_UpdateViewAngles_ProneYawClamp(_R13, *(float *)&_XMM1, v24, *(float *)&_XMM3, fmtc);
  __asm
  {
    vmovaps xmm7, [rsp+178h+var_58]
    vmovaps xmm14, [rsp+178h+var_C8]
  }
  PM_UpdateViewAngles_PronePitchClamp(_RDI);
}

/*
==============
PM_UpdateViewAngles_PronePitchClamp
==============
*/
void PM_UpdateViewAngles_PronePitchClamp(playerState_s *ps)
{
  const dvar_t *v12; 
  char v13; 
  char v14; 
  const dvar_t *v16; 
  const dvar_t *v35; 

  __asm
  {
    vmovss  xmm1, dword ptr [rcx+1D8h]; angle2
    vmovss  xmm0, dword ptr [rcx+274h]; angle1
    vmovaps [rsp+78h+var_28], xmm6
  }
  _RBX = ps;
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  _RDI = DCONST_DVARFLT_player_prone_view_pitch_up;
  __asm { vmovaps xmm6, xmm0 }
  if ( !DCONST_DVARFLT_player_prone_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_up") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vcomiss xmm6, dword ptr [rdi+28h] }
  if ( !(v13 | v14) )
    goto LABEL_9;
  _RDI = DCONST_DVARFLT_player_prone_view_pitch_down;
  if ( !DCONST_DVARFLT_player_prone_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_down") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
    vcomiss xmm6, xmm1
  }
  if ( v13 )
  {
LABEL_9:
    _RDI = DCONST_DVARFLT_player_prone_view_pitch_up;
    __asm { vmovaps [rsp+78h+var_38], xmm7 }
    if ( !DCONST_DVARFLT_player_prone_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_up") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vcomiss xmm6, dword ptr [rdi+28h] }
    if ( v13 | v14 )
    {
      v16 = DCONST_DVARFLT_player_prone_view_pitch_down;
      if ( !DCONST_DVARFLT_player_prone_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_down") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      __asm { vaddss  xmm5, xmm6, dword ptr [rdi+28h] }
    }
    else
    {
      v12 = DCONST_DVARFLT_player_prone_view_pitch_up;
      if ( !DCONST_DVARFLT_player_prone_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_up") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      __asm { vsubss  xmm5, xmm6, dword ptr [rdi+28h] }
    }
    __asm
    {
      vaddss  xmm0, xmm5, dword ptr [rbx+0B4h]
      vmulss  xmm1, xmm0, cs:__real@43360b61
      vmovss  xmm7, cs:__real@3f000000
      vaddss  xmm2, xmm1, xmm7
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm1, xmm0, xmm2
      vxorps  xmm6, xmm6, xmm6
      vroundss xmm3, xmm6, xmm1, 1
      vcvttss2si eax, xmm3
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, cs:__real@37800000
      vaddss  xmm2, xmm4, xmm7
      vroundss xmm3, xmm6, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, cs:__real@43b40000
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm5, xmm1
      vmovss  dword ptr [rbx+0B4h], xmm0
    }
    if ( v13 | v14 )
    {
      _RDI = DCONST_DVARFLT_player_prone_view_pitch_down;
      if ( !DCONST_DVARFLT_player_prone_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_down") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vaddss  xmm1, xmm0, dword ptr [rbx+274h]
      }
    }
    else
    {
      v35 = DCONST_DVARFLT_player_prone_view_pitch_up;
      if ( !DCONST_DVARFLT_player_prone_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_prone_view_pitch_up") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v35);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+274h]
        vsubss  xmm1, xmm0, dword ptr [rdi+28h]
      }
    }
    __asm
    {
      vmulss  xmm4, xmm1, cs:__real@3b360b61
      vaddss  xmm2, xmm4, xmm7
      vmovaps xmm7, [rsp+78h+var_38]
      vroundss xmm3, xmm6, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, cs:__real@43b40000
      vmovss  dword ptr [rbx+1D8h], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
}

/*
==============
PM_UpdateViewAngles_ProneYawClamp
==============
*/

void __fastcall PM_UpdateViewAngles_ProneYawClamp(pmove_t *pm, double delta, int proneBlocked, double oldViewYaw, float newViewYaw)
{
  BgWeaponMap *weaponMap; 
  const dvar_t *v24; 
  char v25; 
  char v26; 
  char v81; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmm9, xmm3
    vmovaps xmm6, xmm1
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10043, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  weaponMap = pm->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10046, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 10049, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RDI = DCONST_DVARFLT_bg_prone_yawcap;
  if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vcomiss xmm6, dword ptr [rdi+28h]
    vmovss  xmm8, cs:__real@3f000000
    vxorps  xmm7, xmm7, xmm7
  }
  if ( !(v25 | v26) )
    goto LABEL_18;
  _RDI = DCONST_DVARFLT_bg_prone_yawcap;
  if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
    vcomiss xmm6, xmm1
  }
  if ( v25 )
  {
LABEL_18:
    _RDI = DCONST_DVARFLT_bg_prone_yawcap;
    if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vcomiss xmm6, dword ptr [rdi+28h] }
    v24 = DCONST_DVARFLT_bg_prone_yawcap;
    if ( v25 | v26 )
    {
      if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      __asm { vaddss  xmm6, xmm6, dword ptr [rdi+28h] }
    }
    else
    {
      if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      __asm { vsubss  xmm6, xmm6, dword ptr [rdi+28h] }
    }
    __asm
    {
      vcomiss xmm6, xmm7
      vaddss  xmm0, xmm6, dword ptr [rbx+0B8h]
      vmulss  xmm1, xmm0, cs:__real@43360b61
      vaddss  xmm3, xmm1, xmm8
      vxorps  xmm2, xmm2, xmm2
      vmovss  xmm0, xmm2, xmm3
      vxorps  xmm5, xmm5, xmm5
      vroundss xmm1, xmm5, xmm0, 1
      vcvttss2si eax, xmm1
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, cs:__real@37800000
      vaddss  xmm2, xmm4, xmm8
      vroundss xmm3, xmm5, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, cs:__real@43b40000
      vmovss  dword ptr [rbx+0B8h], xmm0
    }
    _RDI = DCONST_DVARFLT_bg_prone_yawcap;
    if ( v25 | v26 )
    {
      if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vaddss  xmm0, xmm0, dword ptr [rbx+26Ch]; angle
      }
    }
    else
    {
      if ( !DCONST_DVARFLT_bg_prone_yawcap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_prone_yawcap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+26Ch]
        vsubss  xmm0, xmm0, dword ptr [rdi+28h]
      }
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vmovss  dword ptr [rbx+1DCh], xmm0 }
  }
  if ( proneBlocked )
  {
    BG_AddPredictableEventToPlayerstate(EV_STANCE_INVALID, 3u, pm->cmd.serverTime, weaponMap, _RBX);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+1DCh]; angle2
      vmovaps xmm0, xmm9; angle1
    }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vandps  xmm1, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm1, cs:__real@3f800000
      vmovaps xmm6, xmm0
    }
    if ( v25 | v26 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+1DCh]; angle2
        vmovss  xmm0, [rsp+0A8h+newViewYaw]; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, xmm6
        vcomiss xmm1, xmm7
      }
      if ( !(v25 | v26) )
      {
        __asm
        {
          vmulss  xmm6, xmm6, cs:__real@3f7ae148
          vaddss  xmm0, xmm6, dword ptr [rbx+1DCh]; angle
        }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm
        {
          vmovss  dword ptr [rbx+1DCh], xmm0
          vaddss  xmm0, xmm6, dword ptr [rbx+0B8h]
          vmulss  xmm1, xmm0, cs:__real@43360b61
          vaddss  xmm3, xmm1, xmm8
          vxorps  xmm2, xmm2, xmm2
          vmovss  xmm0, xmm2, xmm3
          vxorps  xmm5, xmm5, xmm5
          vroundss xmm1, xmm5, xmm0, 1
          vcvttss2si eax, xmm1
        }
        _ECX = (unsigned __int16)_EAX;
        __asm
        {
          vmovd   xmm0, ecx
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm4, xmm0, cs:__real@37800000
          vaddss  xmm2, xmm4, xmm8
          vroundss xmm3, xmm5, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, cs:__real@43b40000
          vmovss  dword ptr [rbx+0B8h], xmm0
        }
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  _R11 = &v81;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
}

/*
==============
PM_UpdateViewAngles_RangeLimited
==============
*/

void __fastcall PM_UpdateViewAngles_RangeLimited(playerState_s *ps, double oldYaw)
{
  unsigned int v16; 
  bool v21; 
  bool v22; 
  bool v26; 
  const dvar_t *v32; 
  bool v35; 
  bool IsActive; 
  bool v47; 
  bool v48; 
  bool v49; 
  bool v52; 
  bool v53; 
  bool v69; 
  bool v70; 
  __int64 v86; 
  __int64 v87; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 
  __int64 v91; 
  char v98; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovss  xmm9, cs:__real@3f000000
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovss  xmm10, cs:__real@43b40000
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovss  xmm11, cs:__real@43340000
    vmovaps [rsp+108h+var_98], xmm12
  }
  v16 = 0;
  __asm
  {
    vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps [rsp+108h+var_A8], xmm13
  }
  _RDI = ps;
  __asm { vmovaps [rsp+108h+var_B8], xmm14 }
  _RSI = 0i64;
  __asm
  {
    vmovss  xmm14, cs:__real@3b360b61
    vmovaps [rsp+108h+var_C8], xmm15
  }
  v21 = 1;
  v22 = 1;
  __asm
  {
    vmovss  xmm15, cs:__real@43360b61
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmm8, xmm1
    vxorps  xmm13, xmm13, xmm13
  }
  do
  {
    if ( !v21 )
    {
      LODWORD(v89) = 2;
      LODWORD(v86) = v16;
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v86, v89);
      v22 = !v26;
      if ( v26 )
        __debugbreak();
    }
    __asm { vcomiss xmm11, dword ptr [rsi+rdi+200h] }
    if ( !v22 )
    {
      if ( v16 == 1 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+1FCh]; angle1
          vmovaps xmm1, xmm8; angle2
        }
        *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+1DCh]; angle2
          vmovaps xmm6, xmm0
          vmovaps xmm0, xmm8; angle1
        }
        *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
        v32 = DVARBOOL_bg_ladder_get_smaller_view_clamp_delta_angle;
        __asm { vaddss  xmm6, xmm6, xmm0 }
        if ( !DVARBOOL_bg_ladder_get_smaller_view_clamp_delta_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_ladder_get_smaller_view_clamp_delta_angle") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v32);
        v35 = !v32->current.enabled;
        if ( v32->current.enabled )
        {
          IsActive = BG_Ladder_IsActive(_RDI);
          v35 = !IsActive;
          if ( IsActive )
          {
            __asm
            {
              vmulss  xmm4, xmm6, xmm14
              vaddss  xmm1, xmm4, xmm9
              vxorps  xmm0, xmm0, xmm0
              vmovss  xmm2, xmm0, xmm1
              vxorps  xmm1, xmm1, xmm1
              vroundss xmm3, xmm1, xmm2, 1
              vsubss  xmm0, xmm4, xmm3
              vmulss  xmm6, xmm0, xmm10
            }
          }
        }
      }
      else
      {
        if ( v16 >= 3 )
        {
          LODWORD(v89) = 3;
          LODWORD(v86) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v86, v89) )
            __debugbreak();
        }
        __asm { vmovss  xmm6, dword ptr [rsi+rdi+1D8h] }
        if ( v16 >= 2 )
        {
          LODWORD(v89) = 2;
          LODWORD(v86) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v86, v89) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+rdi+1F8h]; angle1
          vmovaps xmm1, xmm6; angle2
        }
        *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
        __asm { vmovaps xmm6, xmm0 }
        v35 = v16 <= 2;
        if ( v16 >= 2 )
        {
          LODWORD(v89) = 2;
          LODWORD(v86) = v16;
          v47 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v86, v89);
          v35 = !v47;
          if ( v47 )
            __debugbreak();
        }
      }
      __asm { vcomiss xmm6, dword ptr [rsi+rdi+200h] }
      if ( !v35 )
        goto LABEL_27;
      v48 = v16 < 2;
      if ( v16 >= 2 )
      {
        LODWORD(v89) = 2;
        LODWORD(v86) = v16;
        v49 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v86, v89);
        v48 = 0;
        if ( v49 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+rdi+200h]
        vxorps  xmm1, xmm0, xmm12
        vcomiss xmm6, xmm1
      }
      if ( v48 )
      {
LABEL_27:
        v52 = v16 <= 2;
        if ( v16 >= 2 )
        {
          LODWORD(v89) = 2;
          LODWORD(v86) = v16;
          v53 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v86, v89);
          v52 = !v53;
          if ( v53 )
            __debugbreak();
        }
        __asm { vcomiss xmm6, dword ptr [rsi+rdi+200h] }
        if ( v52 )
        {
          if ( v16 >= 2 )
          {
            LODWORD(v89) = 2;
            LODWORD(v86) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v86, v89) )
              __debugbreak();
          }
          __asm { vaddss  xmm6, xmm6, dword ptr [rsi+rdi+200h] }
        }
        else
        {
          if ( v16 >= 2 )
          {
            LODWORD(v89) = 2;
            LODWORD(v86) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v86, v89) )
              __debugbreak();
          }
          __asm { vsubss  xmm6, xmm6, dword ptr [rsi+rdi+200h] }
        }
        if ( v16 >= 3 )
        {
          LODWORD(v89) = 3;
          LODWORD(v86) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v86, v89) )
            __debugbreak();
        }
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [rsi+rdi+0B4h]
          vmovss  dword ptr [rsi+rdi+0B4h], xmm0
        }
        if ( v16 >= 3 )
        {
          LODWORD(v89) = 3;
          LODWORD(v86) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v86, v89) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm1, xmm15, dword ptr [rsi+rdi+0B4h]
          vaddss  xmm3, xmm1, xmm9
          vxorps  xmm5, xmm5, xmm5
          vroundss xmm1, xmm5, xmm3, 1
          vcvttss2si eax, xmm1
        }
        _ECX = (unsigned __int16)_EAX;
        __asm
        {
          vmovd   xmm0, ecx
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm4, xmm0, cs:__real@37800000
          vaddss  xmm2, xmm4, xmm9
          vroundss xmm3, xmm5, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm7, xmm1, xmm10
        }
        v69 = v16 <= 3;
        if ( v16 >= 3 )
        {
          LODWORD(v89) = 3;
          LODWORD(v86) = v16;
          v70 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v86, v89);
          v69 = !v70;
          if ( v70 )
            __debugbreak();
        }
        __asm
        {
          vcomiss xmm6, xmm13
          vmovss  dword ptr [rsi+rdi+0B4h], xmm7
        }
        if ( v69 )
        {
          if ( v16 >= 2 )
          {
            LODWORD(v89) = 2;
            LODWORD(v86) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v86, v89) )
              __debugbreak();
            LODWORD(v91) = 2;
            LODWORD(v88) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v88, v91) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+rdi+1F8h]
            vaddss  xmm0, xmm0, dword ptr [rsi+rdi+200h]; angle
          }
        }
        else
        {
          if ( v16 >= 2 )
          {
            LODWORD(v89) = 2;
            LODWORD(v86) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v86, v89) )
              __debugbreak();
            LODWORD(v90) = 2;
            LODWORD(v87) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v87, v90) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+rdi+1F8h]
            vsubss  xmm0, xmm0, dword ptr [rsi+rdi+200h]
          }
        }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm { vmovaps xmm6, xmm0 }
        if ( v16 >= 3 )
        {
          LODWORD(v89) = 3;
          LODWORD(v86) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v86, v89) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rsi+rdi+1D8h], xmm6 }
      }
    }
    ++v16;
    _RSI += 4i64;
    v21 = v16 < 2;
    v22 = v16 <= 2;
  }
  while ( (int)v16 < 2 );
  __asm { vmovaps xmm7, [rsp+108h+var_48] }
  _R11 = &v98;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm6, [rsp+108h+var_38]
    vmovaps xmm14, [rsp+108h+var_B8]
    vmovaps xmm15, [rsp+108h+var_C8]
  }
}

/*
==============
PM_ViewHeightAdjust
==============
*/

void __fastcall PM_ViewHeightAdjust(pmove_t *pm, pml_t *pml, double _XMM2_8, double _XMM3_8)
{
  const SuitDef *SuitDef; 
  int viewHeightTarget; 
  const dvar_t *v20; 
  bool Bool_Internal_DebugName; 
  bool v43; 
  bool IsSeated; 
  bool v52; 
  bool v53; 
  int lastSprintEnd; 
  int v55; 
  int v59; 
  bool v60; 
  bool v61; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  char v63; 
  bool v64; 
  char v68; 
  unsigned int v70; 
  unsigned int viewheight_slide; 
  unsigned int ViewHeightSprint; 
  unsigned int v78; 
  bool v79; 
  bool v80; 
  bool v81; 
  unsigned int v82; 
  bool v86; 
  bool v87; 
  int v92; 
  const dvar_t *v94; 
  const char *v95; 
  int viewHeightLerpTarget; 
  bool v105; 
  const char *v106; 
  int viewHeightLerpTime; 
  viewLerpWaypoint_s *v112; 
  int v114; 
  int v115; 
  bool v118; 
  bool v119; 
  bool v120; 
  int ProneViewHeight; 
  unsigned int v125; 
  unsigned int viewheight_crouch; 
  bool v129; 
  bool v130; 
  bool v131; 
  viewLerpWaypoint_s *v132; 
  bool v134; 
  int v143; 
  int viewheight_stand; 
  bool v145; 
  int viewHeightLerpDown; 
  int v147; 
  int v148; 
  int v149; 
  int v150; 
  int v151; 
  int v156; 
  int v159; 
  const dvar_t *v181; 
  const dvar_t *v186; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  char *fmtd; 
  char *fmte; 
  __int64 v195; 
  double v196; 
  double v197; 
  double v198; 
  __int64 v199; 
  __int64 v200; 
  double v201; 
  __int64 v202; 
  __int64 v203; 
  double v204; 
  double v205; 
  bool v206; 
  int v207; 
  vec3_t outUp; 

  *(_QWORD *)outUp.v = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5868, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5868, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(_RDI->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5871, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  viewHeightTarget = _RDI->viewHeightTarget;
  __asm { vmovaps [rsp+0C8h+var_48], xmm7 }
  if ( viewHeightTarget )
  {
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vucomiss xmm7, dword ptr [rdi+1E8h]
      vmovaps [rsp+0C8h+var_38], xmm6
    }
    if ( BG_ContextMount_IsActive(_RDI) )
    {
      WorldUpReferenceFrame::GetUpVector(&pm->refFrame, &outUp);
      *(double *)&_XMM0 = BG_ContextMount_GetViewHeightTarget(pm->weaponMap, _RDI, &outUp);
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+4C0h]
        vmovss  xmm1, cs:__real@3f800000
        vsubss  xmm2, xmm1, xmm3
        vmulss  xmm4, xmm2, dword ptr [rdi+4F0h]
        vmulss  xmm3, xmm3, xmm0
        vaddss  xmm1, xmm4, xmm3
        vmovss  dword ptr [rdi+1E8h], xmm1
      }
      v20 = DCONST_DVARBOOL_viewHeightDebugLogEnabled;
      __asm { vmovaps xmm6, xmm0 }
      if ( !DCONST_DVARBOOL_viewHeightDebugLogEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewHeightDebugLogEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      if ( v20->current.enabled && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+1E8h]
          vcvtss2sd xmm0, xmm6, xmm6
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+0C8h+var_A0], xmm0
          vmovsd  [rsp+0C8h+fmt], xmm1
        }
        Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Contextual mount set current view height to: %.2f. Target: %.2f\n", (unsigned int)_RDI->clientNum, (unsigned int)pm->cmd.serverTime, *(double *)&fmta, v196);
      }
      goto LABEL_104;
    }
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, ACTIVE, 0xBu) && Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_last_stand_rewrite_enabled, "killswitch_last_stand_rewrite_enabled") )
    {
      __asm { vmovss  xmm6, cs:__real@3f800000 }
      if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_lastStandViewHeightLerpTime, "lastStandViewHeightLerpTime") <= 0 )
      {
        __asm { vmovaps xmm0, xmm6; val }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, ebp
          vcvtsi2ss xmm0, xmm0, eax
          vdivss  xmm0, xmm1, xmm0
        }
      }
      __asm
      {
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm1, xmm0
        vcomiss xmm1, xmm6
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+20Ch]
      }
      if ( v63 )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+360h]; startHeight
          vmovaps xmm3, xmm0; endHeight
          vmovaps xmm0, xmm1; fFrac
        }
        *(float *)&_XMM0 = PM_ViewHeightTableLerp(*(float *)&_XMM0, viewLerp_lastStand, *(float *)&_XMM2, *(float *)&_XMM3);
      }
      __asm { vmovss  dword ptr [rdi+1E8h], xmm0 }
      _RDI->viewHeightLerpTime = 0;
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_viewHeightDebugLogEnabled, "viewHeightDebugLogEnabled") && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+1E8h]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+20Ch]
          vcvtss2sd xmm1, xmm0, xmm0
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+0C8h+var_A0], xmm1
          vmovsd  [rsp+0C8h+fmt], xmm2
        }
        Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Last Stand set current view height to: %.2f. Target: %.2f\n", (unsigned int)_RDI->clientNum, (unsigned int)pm->cmd.serverTime, *(double *)&fmtb, v197);
      }
      goto LABEL_104;
    }
    Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_player_vehicleSeatViewHeightLerpFixEnabled, "player_vehicleSeatViewHeightLerpFixEnabled");
    v43 = !Bool_Internal_DebugName;
    if ( Bool_Internal_DebugName )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rdi+1E4h]
        vucomiss xmm0, dword ptr [rdi+1E8h]
      }
      IsSeated = BG_VehicleOccupancy_PlayerIsSeated(_RDI);
      v43 = !IsSeated;
      if ( IsSeated )
      {
        _RDI->viewHeightLerpTarget = _RDI->viewHeightTarget;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
        }
        _RDI->viewHeightLerpTime = 0;
        __asm { vmovss  dword ptr [rdi+1E8h], xmm0 }
        GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&_RDI->otherFlags, ACTIVE, 0x1Au);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_RDI->pm_flags, ACTIVE, 0x37u);
        _RDI->mountState.flags &= ~8u;
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_viewHeightDebugLogEnabled, "viewHeightDebugLogEnabled") && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+1E8h]
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  [rsp+0C8h+var_A0], xmm0
          }
          LODWORD(fmt) = _RDI->viewHeightTarget;
          Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Player's vehicle occupancy set view height to: %d from the current value of %.2f\n", (unsigned int)_RDI->clientNum, (unsigned int)pm->cmd.serverTime, fmt, v198);
        }
        goto LABEL_104;
      }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+1E4h]
      vucomiss xmm0, dword ptr [rdi+1E8h]
    }
    if ( v43 && !_RDI->viewHeightLerpTime )
    {
LABEL_104:
      __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
      goto LABEL_105;
    }
    v207 = 0;
    v52 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x1Du);
    if ( !v52 )
      v52 = pm->cmd.serverTime - _RDI->slideState.slideEndTime <= SuitDef->slide_viewBlendOutTimeMs;
    v53 = 0;
    if ( !v52 && Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_enableSprintViewHeight, "enableSprintViewHeight") )
    {
      v53 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x14u);
      if ( !v53 && _RDI->viewHeightTarget >= SuitDef->bounds_height_crouch )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_sprintViewHeightLerpSpeed, "sprintViewHeightLerpSpeed");
        lastSprintEnd = _RDI->sprintState.lastSprintEnd;
        __asm { vmovaps xmm6, xmm0 }
        v55 = pm->ps->viewHeightTarget - BG_GetViewHeightSprint(_RDI, SuitDef);
        __asm { vcomiss xmm6, xmm7 }
        if ( ((v55 >> 31) ^ (unsigned int)v55) <= v55 >> 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5822, ASSERT_TYPE_ASSERT, "(lerpSpeed > 0.0f)", (const char *)&queryFormat, "lerpSpeed > 0.0f") )
          __debugbreak();
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ebp
          vdivss  xmm1, xmm0, xmm6
          vmulss  xmm2, xmm1, cs:__real@447a0000
          vcvttss2si ecx, xmm2
        }
        v53 = pm->cmd.serverTime - *(_DWORD *)(*(_QWORD *)outUp.v + 40i64) - lastSprintEnd <= _ECX;
      }
    }
    v59 = _RDI->viewHeightTarget;
    v60 = (_RDI->mountState.flags & 8) != 0;
    if ( v59 == BG_Suit_GetProneViewHeight(SuitDef) || v59 == SuitDef->viewheight_crouch || v59 == SuitDef->viewheight_stand )
    {
      if ( v52 )
        v61 = 1;
      else
        v61 = v53 || v60 || BG_IsPlayerSwimming(_RDI);
    }
    else
    {
      v61 = 1;
    }
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_allowSimpleLerpToProne, "allowSimpleLerpToProne") )
    {
      p_otherFlags = &_RDI->otherFlags;
    }
    else
    {
      p_otherFlags = &_RDI->otherFlags;
      v64 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, ACTIVE, 0x1Au);
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+1E8h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rdi+1E4h]
        vcomiss xmm0, xmm1
      }
      v206 = v64;
      if ( !v63 )
        goto LABEL_62;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+204h]
        vcomiss xmm1, xmm0
      }
      if ( v63 )
        goto LABEL_62;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x36u) || _RDI->viewHeightTarget == BG_Suit_GetProneViewHeight(SuitDef) )
        v68 = 1;
      else
LABEL_62:
        v68 = 0;
      if ( !v61 && !v206 )
        goto LABEL_70;
      if ( v68 )
      {
        GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&_RDI->otherFlags, ACTIVE, 0x1Au);
        goto LABEL_70;
      }
    }
    if ( v61 )
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(p_otherFlags, ACTIVE, 0x1Au);
LABEL_70:
    __asm { vmovaps [rsp+0C8h+var_58], xmm8 }
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x1Au) )
    {
      __asm { vmovss  xmm7, cs:__real@43340000 }
      if ( v52 )
      {
        v70 = _RDI->viewHeightTarget;
        viewheight_slide = SuitDef->viewheight_slide;
        __asm
        {
          vmovsd  xmm7, cs:__real@3eb0c6f7a0b5ed8d
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm8, xmm0, cs:__real@3a83126f
          vcvtss2sd xmm1, xmm8, xmm8
          vcomisd xmm1, xmm7
        }
        if ( v70 <= viewheight_slide && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6024, ASSERT_TYPE_ASSERT, "(viewAnglesBlendTimeSec > 1.0E-6)", (const char *)&queryFormat, "viewAnglesBlendTimeSec > ZERO_EPSILON") )
          __debugbreak();
        if ( v70 == viewheight_slide )
        {
          ViewHeightSprint = BG_GetViewHeightSprint(_RDI, SuitDef);
          v78 = SuitDef->viewheight_slide;
          v79 = v78 < ViewHeightSprint;
          v80 = v78 == ViewHeightSprint;
          v81 = v78 <= ViewHeightSprint;
        }
        else
        {
          v82 = SuitDef->viewheight_slide;
          v79 = v82 < _RDI->viewHeightTarget;
          v80 = v82 == _RDI->viewHeightTarget;
          v81 = v82 <= _RDI->viewHeightTarget;
        }
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, ecx
          vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcvtss2sd xmm0, xmm6, xmm6
          vcomisd xmm0, xmm7
        }
        if ( v81 )
        {
          v86 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6035, ASSERT_TYPE_ASSERT, "(distanceInInches > 1.0E-6)", (const char *)&queryFormat, "distanceInInches > ZERO_EPSILON");
          v79 = 0;
          v80 = !v86;
          if ( v86 )
            __debugbreak();
        }
        __asm { vdivss  xmm7, xmm6, xmm8 }
        p_otherFlags = &_RDI->otherFlags;
      }
      else if ( v53 || (v87 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x37u), v79 = 0, v80 = !v87, v87) )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rdi+1E4h]
          vsubss  xmm6, xmm0, dword ptr [rdi+1E8h]
          vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        }
        v92 = SuitDef->viewheight_crouch - BG_GetViewHeightSprint(_RDI, SuitDef);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rdi+1E4h]
          vcomiss xmm0, dword ptr [rdi+1E8h]
        }
        if ( ((v92 >> 31) ^ (unsigned int)v92) < v92 >> 31 && BG_IsSuperSprinting(_RDI) )
        {
          v94 = DCONST_DVARFLT_superSprintHeightBlendSpeed;
          v95 = "superSprintHeightBlendSpeed";
        }
        else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x37u) )
        {
          v94 = DCONST_DVARFLT_proneToSprintStandSpeed;
          v95 = "proneToSprintStandSpeed";
        }
        else
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ebx
            vcomiss xmm6, xmm0
          }
          v94 = DCONST_DVARFLT_sprintViewHeightLerpSpeed;
          v95 = "sprintViewHeightLerpSpeed";
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v94, v95);
        __asm { vmovaps xmm7, xmm0 }
      }
      __asm { vmovss  xmm1, dword ptr [rdi+1E8h] }
      _RDI->viewHeightLerpTarget = _RDI->viewHeightTarget;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vcomiss xmm1, xmm0
      }
      _RDI->viewHeightLerpTime = 0;
      __asm { vmulss  xmm2, xmm7, dword ptr [rax+24h] }
      if ( v79 )
      {
        __asm
        {
          vaddss  xmm1, xmm1, xmm2
          vcomiss xmm1, xmm0
          vmovss  dword ptr [rdi+1E8h], xmm1
        }
        if ( !v79 )
          goto LABEL_95;
      }
      else
      {
        __asm
        {
          vsubss  xmm1, xmm1, xmm2
          vcomiss xmm1, xmm0
          vmovss  dword ptr [rdi+1E8h], xmm1
        }
        if ( v79 || v80 )
        {
LABEL_95:
          __asm
          {
            vmovss  dword ptr [rdi+1E8h], xmm0
            vmovaps xmm1, xmm0
          }
        }
      }
      __asm { vucomiss xmm1, xmm0 }
      if ( v80 )
      {
        GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(p_otherFlags, ACTIVE, 0x1Au);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_RDI->pm_flags, ACTIVE, 0x37u);
        _RDI->mountState.flags &= ~8u;
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_viewHeightDebugLogEnabled, "viewHeightDebugLogEnabled") && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
      {
        __asm { vmovss  xmm6, dword ptr [rdi+1E8h] }
        viewHeightLerpTarget = _RDI->viewHeightLerpTarget;
        __asm { vcvtss2sd xmm6, xmm6, xmm6 }
        v105 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x1Au);
        v106 = "Finished";
        __asm { vmovsd  [rsp+0C8h+var_98], xmm6 }
        if ( v105 )
          v106 = "Active";
        __asm
        {
          vcvtss2sd xmm0, xmm7, xmm7
          vmovsd  [rsp+0C8h+var_A0], xmm0
        }
        Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Simple lerp status: %s Lerp Speed: %.2f Current: %.2f Target: %d\n", (unsigned int)_RDI->clientNum, (unsigned int)pm->cmd.serverTime, v106, v199, v200, viewHeightLerpTarget);
      }
      goto LABEL_103;
    }
    viewHeightLerpTime = _RDI->viewHeightLerpTime;
    v112 = viewLerp_CrouchProneDirect;
    __asm { vmovss  xmm8, cs:__real@3c23d70a }
    if ( viewHeightLerpTime )
    {
      v114 = PM_GetViewHeightLerpTime(_RDI, _RDI->viewHeightLerpTarget, _RDI->viewHeightLerpDown);
      v115 = pm->cmd.serverTime - _RDI->viewHeightLerpTime;
      LODWORD(outUp.v[0]) = v114;
      v207 = I_clamp(100 * v115 / v114, 0, 100);
      if ( v207 == 100 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rdi+1F0h]
        }
        _RDI->viewHeightLerpTime = 0;
        __asm { vmovss  dword ptr [rdi+1E8h], xmm0 }
        v118 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x36u);
        v119 = !v118;
        if ( v118 )
        {
          v120 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0);
          v119 = !v120;
          if ( v120 )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, dword ptr [rbx+204h]
              vucomiss xmm0, dword ptr [rdi+1E8h]
            }
          }
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rdi+1E4h]
          vucomiss xmm0, dword ptr [rdi+1E8h]
        }
        if ( v119 )
          GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::ClearFlagInternal(&_RDI->pm_flags, ACTIVE, 0x37u);
      }
      else
      {
        ProneViewHeight = BG_Suit_GetProneViewHeight(SuitDef);
        v125 = _RDI->viewHeightLerpTarget;
        viewheight_crouch = SuitDef->viewheight_crouch;
        if ( v125 == ProneViewHeight )
        {
          __asm
          {
            vxorps  xmm6, xmm6, xmm6
            vcvtsi2ss xmm6, xmm6, ecx
          }
          v129 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x36u);
          v130 = 0;
          v131 = !v129;
          v132 = viewLerp_CrouchProneDirect;
          if ( !v129 )
            v132 = viewLerp_CrouchProne;
        }
        else
        {
          v130 = v125 < viewheight_crouch;
          v131 = v125 == viewheight_crouch;
          if ( v125 == viewheight_crouch )
          {
            if ( _RDI->viewHeightLerpDown )
            {
              __asm
              {
                vxorps  xmm6, xmm6, xmm6
                vcvtsi2ss xmm6, xmm6, dword ptr [rbx+200h]
              }
              v134 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x36u);
              v130 = 0;
              v131 = !v134;
              v132 = viewLerp_StandCrouchDirect;
              if ( !v134 )
                v132 = viewLerp_StandCrouch;
            }
            else
            {
              BG_Suit_GetProneViewHeight(SuitDef);
              __asm
              {
                vxorps  xmm6, xmm6, xmm6
                vcvtsi2ss xmm6, xmm6, eax
              }
              v132 = viewLerp_ProneCrouch;
            }
          }
          else
          {
            __asm
            {
              vxorps  xmm6, xmm6, xmm6
              vcvtsi2ss xmm6, xmm6, ecx
            }
            v132 = viewLerp_CrouchStand;
          }
        }
        __asm { vcomiss xmm6, xmm7 }
        if ( v130 || v131 )
        {
          __asm
          {
            vxorpd  xmm0, xmm0, xmm0
            vmovsd  [rsp+0C8h+var_88], xmm0
            vcvtss2sd xmm1, xmm6, xmm6
            vmovsd  [rsp+0C8h+var_90], xmm1
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 6171, ASSERT_TYPE_ASSERT, "( startHeight ) > ( 0.0f )", "%s > %s\n\t%g, %g", "startHeight", "0.0f", v204, v205) )
            __debugbreak();
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, [rsp+0C8h+var_74]
          vxorps  xmm3, xmm3, xmm3
          vcvtsi2ss xmm3, xmm3, dword ptr [rdi+1F0h]; endHeight
          vmulss  xmm0, xmm0, xmm8; fFrac
          vmovaps xmm2, xmm6; startHeight
        }
        *(float *)&_XMM0 = PM_ViewHeightTableLerp(*(float *)&_XMM0, v132, *(float *)&_XMM2_8, *(float *)&_XMM3_8);
        __asm { vmovss  dword ptr [rdi+1E8h], xmm0 }
      }
      if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_viewHeightDebugLogEnabled, "viewHeightDebugLogEnabled") || !pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
        goto LABEL_103;
      __asm { vmovss  xmm0, dword ptr [rdi+1E8h] }
      LODWORD(v203) = _RDI->viewHeightLerpTarget;
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0C8h+var_98], xmm0
      }
      *(float *)&v195 = outUp.v[0];
      LODWORD(fmt) = _RDI->viewHeightLerpTime;
      Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Complex lerp start time: %d Lerp Completion Time: %d Current: %.2f Target: %d\n", (unsigned int)_RDI->clientNum, (unsigned int)pm->cmd.serverTime, fmt, v195, v201, v203);
      viewHeightLerpTime = _RDI->viewHeightLerpTime;
    }
    v143 = _RDI->viewHeightTarget;
    if ( viewHeightLerpTime )
    {
      viewheight_stand = _RDI->viewHeightLerpTarget;
      v145 = v143 <= viewheight_stand;
      if ( v143 != viewheight_stand )
      {
        if ( v143 < viewheight_stand )
        {
          viewHeightLerpDown = _RDI->viewHeightLerpDown;
          if ( !viewHeightLerpDown )
          {
LABEL_138:
            v147 = viewHeightLerpDown ^ 1;
            _RDI->viewHeightLerpDown = v147;
            if ( v147 )
            {
              v148 = SuitDef->viewheight_crouch;
              if ( viewheight_stand == SuitDef->viewheight_stand )
              {
                _RDI->viewHeightLerpTarget = v148;
                viewheight_stand = v148;
              }
              else if ( viewheight_stand == v148 )
              {
                v149 = BG_Suit_GetProneViewHeight(SuitDef);
                _RDI->viewHeightLerpTarget = v149;
                viewheight_stand = v149;
              }
            }
            else
            {
              v150 = BG_Suit_GetProneViewHeight(SuitDef);
              viewheight_stand = _RDI->viewHeightLerpTarget;
              v151 = SuitDef->viewheight_crouch;
              if ( viewheight_stand == v150 )
              {
                _RDI->viewHeightLerpTarget = v151;
                viewheight_stand = v151;
              }
              else if ( viewheight_stand == v151 )
              {
                viewheight_stand = SuitDef->viewheight_stand;
                _RDI->viewHeightLerpTarget = viewheight_stand;
              }
            }
            if ( v207 == 0 )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, edx
                vmovss  dword ptr [rdi+1E8h], xmm0
              }
              _RDI->viewHeightLerpTime = 0;
              if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_viewHeightDebugLogEnabled, "viewHeightDebugLogEnabled") && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rdi+1E8h]
                  vcvtss2sd xmm0, xmm0, xmm0
                }
                LODWORD(v195) = _RDI->viewHeightLerpTarget;
                __asm { vmovsd  [rsp+0C8h+fmt], xmm0 }
                Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Complex lerp direction changed but goal is already reached. Current: %.2f Target: %d\n", (unsigned int)_RDI->clientNum, (unsigned int)pm->cmd.serverTime, *(double *)&fmtc, v195);
              }
            }
            else
            {
              v156 = PM_GetViewHeightLerpTime(_RDI, viewheight_stand, _RDI->viewHeightLerpDown);
              __asm
              {
                vxorps  xmm2, xmm2, xmm2
                vcvtsi2ss xmm2, xmm2, r13d
              }
              v159 = _RDI->viewHeightLerpTarget;
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vmulss  xmm1, xmm2, xmm8
                vcvtsi2ss xmm0, xmm0, eax
                vmulss  xmm1, xmm1, xmm0
                vcvttss2si ecx, xmm1
              }
              _RDI->viewHeightLerpTime = pm->cmd.serverTime - _ECX;
              __asm { vmulss  xmm6, xmm2, xmm8 }
              if ( v159 == BG_Suit_GetProneViewHeight(SuitDef) )
              {
                if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x36u) )
                  v112 = viewLerp_CrouchProne;
                BG_Suit_GetProneViewHeight(SuitDef);
                __asm
                {
                  vxorps  xmm3, xmm3, xmm3
                  vxorps  xmm2, xmm2, xmm2
                  vcvtsi2ss xmm2, xmm2, dword ptr [rbx+204h]
                  vcvtsi2ss xmm3, xmm3, eax
                }
              }
              else if ( v159 == SuitDef->viewheight_crouch )
              {
                if ( _RDI->viewHeightLerpDown )
                {
                  v112 = viewLerp_StandCrouchDirect;
                  __asm
                  {
                    vxorps  xmm2, xmm2, xmm2
                    vcvtsi2ss xmm2, xmm2, dword ptr [rbx+200h]
                    vxorps  xmm3, xmm3, xmm3
                  }
                  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x36u) )
                    v112 = viewLerp_StandCrouch;
                  __asm { vcvtsi2ss xmm3, xmm3, r14d }
                }
                else
                {
                  v112 = viewLerp_ProneCrouch;
                  BG_Suit_GetProneViewHeight(SuitDef);
                  __asm
                  {
                    vxorps  xmm2, xmm2, xmm2
                    vxorps  xmm3, xmm3, xmm3
                    vcvtsi2ss xmm2, xmm2, eax
                    vcvtsi2ss xmm3, xmm3, r14d
                  }
                }
              }
              else
              {
                __asm
                {
                  vxorps  xmm2, xmm2, xmm2
                  vxorps  xmm3, xmm3, xmm3
                  vcvtsi2ss xmm3, xmm3, dword ptr [rbx+200h]; endHeight
                  vcvtsi2ss xmm2, xmm2, r14d; startHeight
                }
                v112 = viewLerp_CrouchStand;
              }
              __asm { vmovaps xmm0, xmm6; fFrac }
              PM_ViewHeightTableLerp(*(float *)&_XMM0, v112, *(float *)&_XMM2, *(float *)&_XMM3);
              if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_viewHeightDebugLogEnabled, "viewHeightDebugLogEnabled") && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
              {
                __asm { vmovss  xmm0, dword ptr [rdi+1E8h] }
                LODWORD(v203) = _RDI->viewHeightLerpTarget;
                __asm
                {
                  vcvtss2sd xmm0, xmm0, xmm0
                  vmovsd  [rsp+0C8h+var_98], xmm0
                }
                LODWORD(v195) = v156;
                LODWORD(fmt) = _RDI->viewHeightLerpTime;
                Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Complex lerp direction changed. Complex lerp start time: %d Lerp Completion Time: %d Current: %.2f Target: %d\n", (unsigned int)_RDI->clientNum, (unsigned int)pm->cmd.serverTime, fmt, v195, v202, v203);
              }
            }
            goto LABEL_103;
          }
          v145 = v143 <= viewheight_stand;
        }
        if ( !v145 )
        {
          viewHeightLerpDown = _RDI->viewHeightLerpDown;
          if ( viewHeightLerpDown )
            goto LABEL_138;
        }
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vucomiss xmm0, dword ptr [rdi+1E8h]
      }
    }
LABEL_103:
    __asm { vmovaps xmm8, [rsp+0C8h+var_58] }
    goto LABEL_104;
  }
  if ( _RDI->pm_type == 5 )
  {
    _RDI->viewHeightCurrent = 0.0;
    v181 = DCONST_DVARBOOL_viewHeightDebugLogEnabled;
    if ( !DCONST_DVARBOOL_viewHeightDebugLogEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewHeightDebugLogEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v181);
    if ( v181->current.enabled && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+1E8h]
        vcvtss2sd xmm0, xmm0, xmm0
      }
      LODWORD(v195) = _RDI->viewHeightTarget;
      __asm { vmovsd  [rsp+0C8h+fmt], xmm0 }
      Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Spectator set current view height to: %.2f. Target: %d\n", (unsigned int)_RDI->clientNum, (unsigned int)pm->cmd.serverTime, *(double *)&fmtd, v195);
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rdi+1E8h], xmm0
    }
    v186 = DCONST_DVARBOOL_viewHeightDebugLogEnabled;
    if ( !DCONST_DVARBOOL_viewHeightDebugLogEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewHeightDebugLogEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v186);
    if ( v186->current.enabled && pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+1E8h]
        vcvtss2sd xmm0, xmm0, xmm0
      }
      LODWORD(v195) = _RDI->viewHeightTarget;
      __asm { vmovsd  [rsp+0C8h+fmt], xmm0 }
      Com_Printf(34, "[VIEW_HEIGHT_LOG] Client: %d Server Time: %d Current view height is set to: %.2f. Target: %d\n", (unsigned int)_RDI->clientNum, (unsigned int)pm->cmd.serverTime, *(double *)&fmte, v195);
    }
  }
LABEL_105:
  __asm { vmovaps xmm7, [rsp+0C8h+var_48] }
}

/*
==============
PM_ViewHeightTableLerp
==============
*/

float __fastcall PM_ViewHeightTableLerp(double fFrac, viewLerpWaypoint_s *pTable, double startHeight, double endHeight)
{
  bool v15; 
  char v16; 
  int v18; 
  bool v22; 
  double v45; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps [rsp+88h+var_48], xmm9
    vmovaps [rsp+88h+var_58], xmm10
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm0, xmm10
    vmovaps xmm8, xmm3
    vmovaps xmm9, xmm2
    vmovaps xmm6, xmm0
    vmovaps [rsp+88h+var_28], xmm7
    vmovss  xmm7, cs:__real@3f800000
    vcomiss xmm6, xmm7
  }
  v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5727, ASSERT_TYPE_ASSERT, "(fFrac < 1.0f)", (const char *)&queryFormat, "fFrac < 1.0f");
  v16 = !v15;
  if ( v15 )
    __debugbreak();
  _RBX = pTable + 1;
  v18 = 1;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vucomiss xmm6, xmm0
  }
  if ( v15 )
  {
    __asm { vmovss  xmm1, cs:__real@bf800000 }
    _RAX = pTable + 1;
    while ( 1 )
    {
      __asm { vcomiss xmm0, xmm6 }
      if ( !v16 )
        break;
      __asm { vmovss  xmm0, dword ptr [rax+8] }
      v22 = __CFADD__(_RAX++, 8i64);
      v16 = v22 | (++v18 == 0);
      __asm { vucomiss xmm0, xmm1 }
      _RBX = _RAX;
      if ( !v18 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  [rsp+88h+var_60], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5757, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No encapsulating table entries found for fraction %f", v45) )
          __debugbreak();
        __asm
        {
          vsubss  xmm0, xmm7, dword ptr [rdi+4]
          vmulss  xmm1, xmm8, dword ptr [rdi+4]
        }
        goto LABEL_9;
      }
      __asm { vucomiss xmm6, xmm0 }
    }
    __asm
    {
      vsubss  xmm0, xmm0, dword ptr [rdi+rsi*8-8]
      vcomiss xmm0, xmm10
    }
    if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5746, ASSERT_TYPE_ASSERT, "((pCurr->fFrac - pPrev->fFrac) > 0.0f)", (const char *)&queryFormat, "(pCurr->fFrac - pPrev->fFrac) > 0.0f") )
      __debugbreak();
    __asm
    {
      vsubss  xmm2, xmm6, dword ptr [rdi+rsi*8-8]
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm1, xmm0, dword ptr [rdi+rsi*8-8]
      vdivss  xmm3, xmm2, xmm1
      vmovss  xmm2, dword ptr [rbx+4]
      vsubss  xmm0, xmm2, dword ptr [rdi+rsi*8-4]
      vmulss  xmm1, xmm3, xmm0
      vaddss  xmm4, xmm1, dword ptr [rdi+rsi*8-4]
      vsubss  xmm0, xmm7, xmm4
      vmulss  xmm1, xmm4, xmm8
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm7, dword ptr [rbx+4]
      vmulss  xmm1, xmm8, dword ptr [rbx+4]
    }
  }
LABEL_9:
  __asm
  {
    vmovaps xmm7, [rsp+88h+var_28]
    vmulss  xmm2, xmm0, xmm9
    vaddss  xmm0, xmm2, xmm1
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
    vmovaps xmm10, [rsp+88h+var_58]
  }
  return *(float *)&_XMM0;
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
  const dvar_t *v13; 
  __int64 v26; 
  int damageTimer; 
  __int32 v102; 
  __int32 v103; 
  playerState_s *v108; 
  int weaponState; 
  bool performSlideMove; 
  char v121; 
  float fmt; 
  float outForwardScale; 
  float outSideScale; 
  __int64 v131; 
  usercmd_s cmd; 
  vec3_t vec; 
  vec3_t velInConst; 
  char v135; 
  void *retaddr; 

  _RAX = &retaddr;
  v131 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  _RBP = pml;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_WalkMove");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3273, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3273, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _R15 = BG_GetSuitDef(ps->suitIndex);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3276, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) )
    Jump_ApplySlowdown(pm, ps);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) && !_R15->isMovementCameraIndependent )
  {
    v13 = DCONST_DVARFLT_player_sprintStrafeSpeedScale;
    if ( !DCONST_DVARFLT_player_sprintStrafeSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintStrafeSpeedScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm0, xmm0, dword ptr [rbx+28h]; val
      vmovss  xmm2, cs:__real@42fe0000; max
      vmovss  xmm1, cs:__real@c3000000; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vcvttss2si eax, xmm0 }
    pm->cmd.rightmove = _EAX;
  }
  if ( Jump_Check(pm, _RBP) )
  {
    PM_AirMove(pm, _RBP);
    goto LABEL_73;
  }
  PM_Friction(pm, _RBP);
  __asm
  {
    vxorps  xmm11, xmm11, xmm11
    vcvtsi2ss xmm11, xmm11, eax
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, eax
  }
  _RAX = &pm->cmd;
  _RCX = &cmd;
  v26 = 2i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX = (usercmd_s *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX = (usercmd_s *)((char *)_RAX + 128);
    --v26;
  }
  while ( v26 );
  _RCX->buttons = _RAX->buttons;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vxorps  xmm1, xmm1, xmm1; height
  }
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &_RBP->forward);
  __asm { vxorps  xmm1, xmm1, xmm1; height }
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &_RBP->right);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  xmm5, dword ptr [rbp+0]
    vmovss  xmm3, dword ptr [rbp+8]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm0, xmm0
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vmovss  xmm10, cs:__real@3f800000
    vblendvps xmm1, xmm4, xmm10, xmm0
    vmovss  [rsp+218h+outForwardScale], xmm1
    vdivss  xmm2, xmm10, xmm1
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+0], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbp+4]
    vmovss  dword ptr [rbp+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbp+8]
    vmovss  dword ptr [rbp+8], xmm0
    vmovss  xmm0, dword ptr [rbp+10h]
    vmovss  xmm5, dword ptr [rbp+0Ch]
    vmovss  xmm3, dword ptr [rbp+14h]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm0, xmm0
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm1, xmm4, xmm10, xmm0
    vmovss  [rsp+218h+outForwardScale], xmm1
    vdivss  xmm2, xmm10, xmm1
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+0Ch], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbp+10h]
    vmovss  dword ptr [rbp+10h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbp+14h]
    vmovss  dword ptr [rbp+14h], xmm0
  }
  PM_CmdScale_Walk(pm, _RBP, &cmd, &outForwardScale, &outSideScale);
  __asm
  {
    vmovss  xmm7, [rsp+218h+outSideScale]
    vmulss  xmm3, xmm6, xmm7
    vmovss  xmm6, [rsp+218h+outForwardScale]
    vmulss  xmm4, xmm11, xmm6
    vmulss  xmm1, xmm3, dword ptr [rbp+0Ch]
    vmulss  xmm0, xmm4, dword ptr [rbp+0]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rsp+218h+vec], xmm1
    vmulss  xmm2, xmm3, dword ptr [rbp+10h]
    vmulss  xmm0, xmm4, dword ptr [rbp+4]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rsp+218h+vec+4], xmm1
    vmulss  xmm2, xmm3, dword ptr [rbp+14h]
    vmulss  xmm0, xmm4, dword ptr [rbp+8]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rsp+218h+vec+8], xmm1
    vxorps  xmm1, xmm1, xmm1; height
  }
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+218h+vec+4]
    vmulss  xmm1, xmm5, xmm5
    vmovss  xmm3, dword ptr [rsp+218h+vec]
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm4, dword ptr [rsp+218h+vec+8]
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm11, xmm0, xmm0
    vcmpless xmm0, xmm11, cs:__real@80000000
    vblendvps xmm1, xmm11, xmm10, xmm0
    vdivss  xmm2, xmm10, xmm1
    vmulss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbp+58h], xmm0
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rbp+5Ch], xmm1
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbp+60h], xmm0
    vmovss  dword ptr [rbp+30h], xmm6
    vmovss  dword ptr [rbp+34h], xmm7
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+24h]
      vmulss  xmm1, xmm0, cs:__real@c47a0000
      vcvttss2si eax, xmm1
    }
    ps->damageTimer += _EAX;
    damageTimer = ps->damageTimer;
    if ( damageTimer <= 0 )
      damageTimer = 0;
    ps->damageTimer = damageTimer;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+58h]
    vmovss  dword ptr [rsp+218h+velInConst], xmm0
    vmovss  xmm1, dword ptr [rbp+5Ch]
    vmovss  dword ptr [rsp+218h+velInConst+4], xmm1
    vmovss  xmm0, dword ptr [rbp+60h]
    vmovss  dword ptr [rsp+218h+velInConst+8], xmm0
  }
  PM_ProjectVelocity(pm, &velInConst, &pm->ground->trace.normal, &velInConst);
  if ( BG_IsPlayerZeroG(ps) )
  {
    pm->ps->autoLevelTime = 0;
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&pm->ps->otherFlags, GameModeFlagValues::ms_spValue, 0x2Du);
  }
  if ( (pm->ground->trace.surfaceFlags & 2) == 0 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xDu) )
  {
    v102 = PM_GetEffectiveStance(ps) - 1;
    if ( v102 )
    {
      v103 = v102 - 1;
      if ( !v103 )
      {
        __asm { vmovss  xmm6, cs:__real@41400000 }
        goto LABEL_36;
      }
      if ( v103 != 1 )
      {
        __asm { vmovss  xmm6, cs:__real@41100000 }
        goto LABEL_36;
      }
    }
    __asm { vmovss  xmm6, cs:__real@41980000 }
LABEL_36:
    if ( !BG_GetSuitDef(ps->suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3194, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
      __debugbreak();
    __asm { vmulss  xmm6, xmm6, dword ptr [rbx+48h] }
    _RBX = DCONST_DVARMPFLT_player_globalAccelScale;
    if ( !DCONST_DVARMPFLT_player_globalAccelScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_globalAccelScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm10, xmm0, xmm6
    }
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xCu) )
    __asm { vmulss  xmm10, xmm10, cs:__real@3e800000 }
  if ( Slide_IsInSlideInState(ps, pm->cmd.serverTime) )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [r15+118h]
      vcmpltss xmm0, xmm9, xmm1
      vblendvps xmm10, xmm10, xmm1, xmm0
    }
  }
  v108 = pm->ps;
  if ( !v108 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3225, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponState = v108->weapState[0].weaponState;
  if ( (unsigned int)(weaponState - 69) > 2 )
    goto LABEL_58;
  __asm { vxorps  xmm11, xmm11, xmm11 }
  switch ( weaponState )
  {
    case 'G':
      *(double *)&_XMM0 = BG_SkydiveParachuteFastLandingVelocity(v108);
      break;
    case 'E':
      *(double *)&_XMM0 = BG_SkydiveParachuteSlowSoftLandingVelocity(v108);
      break;
    case 'F':
      *(double *)&_XMM0 = BG_SkydiveParachuteSlowHardLandingVelocity(v108);
      break;
    default:
      goto LABEL_58;
  }
  __asm { vmovaps xmm11, xmm0 }
LABEL_58:
  __asm
  {
    vmovss  dword ptr [rsp+218h+fmt], xmm10
    vmovaps xmm3, xmm11; wishspeed
  }
  PM_Accelerate(pm, _RBP, &velInConst, *(float *)&_XMM3, fmt);
  if ( (pm->ground->trace.surfaceFlags & 2) != 0 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xDu) )
  {
    _RBX = &ps->velocity;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, dword ptr [rbp+24h]; height
    }
    WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &ps->velocity);
  }
  else
  {
    _RBX = &ps->velocity;
  }
  PM_ProjectVelocity(pm, _RBX, &pm->ground->trace.normal, _RBX);
  if ( Com_GameMode_SupportsFeature(WEAPONSTATES_NUM) )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+24h]
      vmulss  xmm0, xmm2, dword ptr [rsi+5274h]
      vaddss  xmm1, xmm0, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm1
      vmulss  xmm0, xmm2, dword ptr [rsi+5278h]
      vaddss  xmm1, xmm0, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rsi+527Ch]
      vaddss  xmm1, xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm1
    }
  }
  performSlideMove = 0;
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetForwardContribution(&pm->refFrame, _RBX);
  __asm { vucomiss xmm0, xmm9 }
  if ( !v121 )
    goto LABEL_70;
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetRightContribution(&pm->refFrame, _RBX);
  __asm { vucomiss xmm0, xmm9 }
  if ( !v121 )
    goto LABEL_70;
  __asm { vucomiss xmm9, dword ptr [rbp+200h] }
  if ( !v121 )
    goto LABEL_70;
  __asm { vucomiss xmm9, dword ptr [rbp+204h] }
  if ( !v121 )
    goto LABEL_70;
  __asm { vucomiss xmm9, dword ptr [rbp+208h] }
  if ( !v121 || PM_CmdHasCollisionAvoid(&pm->cmd) )
LABEL_70:
    performSlideMove = 1;
  PM_UpdatePlayerCollision(pm, _RBP, 0, 1, 0, performSlideMove);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    BG_UpdateMovementDir(pm, _RBP, 0);
LABEL_73:
  Sys_ProfEndNamedEvent();
  _R11 = &v135;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
  }
}

/*
==============
PM_ZeroGravityFriction
==============
*/
void PM_ZeroGravityFriction(pmove_t *pm, const pml_t *pml)
{
  char v6; 
  char v7; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3800, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3800, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RDI = DVARFLT_player_zeroGravFriction;
  if ( !DVARFLT_player_zeroGravFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravFriction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+40h]
    vmovss  xmm5, dword ptr [rbx+3Ch]
    vmovss  xmm3, dword ptr [rbx+44h]
    vmovss  xmm6, dword ptr [rdi+28h]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm0, xmm0
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcomiss xmm4, cs:__real@3a83126f
  }
  if ( v6 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    *(_QWORD *)_RBX->velocity.v = 0i64;
    __asm { vmovss  dword ptr [rbx+44h], xmm0 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rsi+24h]
      vsubss  xmm2, xmm4, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm2, xmm1
    }
    if ( v6 | v7 )
    {
      *(_QWORD *)_RBX->velocity.v = 0i64;
      __asm { vmovss  dword ptr [rbx+44h], xmm1 }
    }
    else
    {
      __asm
      {
        vdivss  xmm2, xmm2, xmm4
        vmulss  xmm0, xmm5, xmm2
        vmovss  dword ptr [rbx+3Ch], xmm0
        vmulss  xmm1, xmm2, dword ptr [rbx+40h]
        vmulss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rbx+40h], xmm1
        vmovss  dword ptr [rbx+44h], xmm0
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
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
  bool v15; 
  char v32; 
  unsigned int v40; 
  signed __int64 v42; 
  bool v43; 
  __int64 v97; 
  char v149; 
  char v150; 
  const BgHandler *v172; 
  const BgWeaponMap *v173; 
  vec3_t *inAngleDelta; 
  tmat33_t<vec3_t> *outDeltaAxis; 
  bool v202; 
  vec3_t pmla; 
  vec3_t v204; 
  vec3_t angles; 
  vec3_t outFixedDir; 
  tmat33_t<vec3_t> v1; 
  vec3_t fixedUp; 
  tmat33_t<vec3_t> out; 
  vec3_t outAngles; 
  vec3_t v211; 
  tmat33_t<vec3_t> in2; 
  vec4_t to; 
  vec4_t result; 
  tmat33_t<vec3_t> worldUpAxisView; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v218; 
  tmat33_t<vec3_t> v219; 
  char v220; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  *(_QWORD *)angles.v = pm;
  *(_QWORD *)pmla.v = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4415, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4415, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v15 = PM_ZeroGravity_UseForcedDirection(&outFixedDir);
  _RBX = DVARVEC3_player_zeroGravWorldUp;
  v202 = v15;
  if ( !DVARVEC3_player_zeroGravWorldUp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravWorldUp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+28h]
    vmovss  xmm4, dword ptr [rbx+2Ch]
    vmovss  xmm5, dword ptr [rbx+30h]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( v43 | v150 )
  {
    v32 = 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000
      vsqrtss xmm1, xmm0, xmm0
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm2, xmm0
      vdivss  xmm2, xmm2, xmm0
      vmulss  xmm0, xmm3, xmm2
      vmovss  dword ptr [rbp+1F0h+fixedUp], xmm0
      vmulss  xmm0, xmm5, xmm2
      vmulss  xmm1, xmm4, xmm2
      vmovss  dword ptr [rbp+1F0h+fixedUp+8], xmm0
      vmovss  dword ptr [rbp+1F0h+fixedUp+4], xmm1
    }
    v32 = 1;
  }
  __asm
  {
    vmovss  xmm10, cs:__real@43340000
    vmovss  xmm14, cs:__real@3b360b61
    vmovss  xmm9, cs:__real@3f000000
    vmovss  xmm11, cs:__real@43b40000
    vmovss  xmm12, cs:__real@43360b61
    vmovss  xmm13, cs:__real@37800000
    vxorps  xmm15, xmm15, xmm15
  }
  v40 = 0;
  _RDI = 0i64;
  v42 = (char *)&pm->cmd.angles - (char *)&v204;
  v43 = 1;
  __asm
  {
    vmovss  dword ptr [rsp+2F0h+var_298], xmm15
    vmovss  dword ptr [rsp+2F0h+var_298+4], xmm15
    vmovss  dword ptr [rsp+2F0h+var_298+8], xmm15
    vxorps  xmm8, xmm8, xmm8
  }
  do
  {
    if ( !v43 )
    {
      LODWORD(outDeltaAxis) = 3;
      LODWORD(inAngleDelta) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
        __debugbreak();
    }
    _R14 = (char *)&v204 + _RDI;
    __asm { vmovaps xmm1, xmm10; maxAbsValueSize }
    *(double *)&_XMM0 = MSG_UnpackSignedFloat(*(_DWORD *)((char *)&v204 + _RDI + v42 + 264), *(float *)&_XMM1, 0x14u);
    __asm
    {
      vmulss  xmm4, xmm0, xmm14
      vxorps  xmm1, xmm1, xmm1
      vaddss  xmm2, xmm4, xmm9
      vmovss  xmm0, xmm1, xmm2
      vroundss xmm3, xmm8, xmm0, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm6, xmm1, xmm11
    }
    if ( v40 >= 3 )
    {
      LODWORD(outDeltaAxis) = 3;
      LODWORD(inAngleDelta) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
        __debugbreak();
    }
    __asm { vmovaps xmm1, xmm10; maxAbsValueSize }
    *(double *)&_XMM0 = MSG_UnpackSignedFloat(*(_DWORD *)&_R14[v42], *(float *)&_XMM1, 0x14u);
    __asm
    {
      vmulss  xmm5, xmm0, xmm14
      vxorps  xmm2, xmm2, xmm2
      vaddss  xmm3, xmm5, xmm9
      vmovss  xmm0, xmm2, xmm3
      vroundss xmm4, xmm8, xmm0, 1
      vsubss  xmm2, xmm5, xmm4
      vmulss  xmm7, xmm2, xmm11
      vucomiss xmm6, xmm7
    }
    if ( !v150 )
    {
      __asm
      {
        vmovaps xmm1, xmm6; angle2
        vmovaps xmm0, xmm7; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm { vmovaps xmm6, xmm0 }
      if ( v40 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [r14], xmm6 }
      if ( v40 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      __asm { vmovss  xmm6, dword ptr [r14] }
      if ( v40 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+rdi+0B4h]
        vsubss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rsi+rdi+0B4h], xmm1
      }
      if ( v40 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm4, xmm14, dword ptr [rsi+rdi+0B4h]
        vaddss  xmm2, xmm4, xmm9
        vroundss xmm3, xmm8, xmm2, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm6, xmm1, xmm11
      }
      if ( v40 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rsi+rdi+0B4h], xmm6 }
      if ( v40 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm1, xmm12, dword ptr [rsi+rdi+0B4h]
        vaddss  xmm3, xmm1, xmm9
        vroundss xmm1, xmm8, xmm3, 1
        vcvttss2si eax, xmm1
      }
      _ECX = (unsigned __int16)_EAX;
      __asm
      {
        vmovd   xmm0, ecx
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm4, xmm0, xmm13
        vaddss  xmm2, xmm4, xmm9
        vroundss xmm3, xmm8, xmm2, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm6, xmm1, xmm11
      }
      if ( v40 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rsi+rdi+0B4h], xmm6 }
      if ( v40 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      __asm
      {
        vaddss  xmm0, xmm7, dword ptr [rsi+rdi+0B4h]
        vmulss  xmm4, xmm0, xmm14
        vxorps  xmm1, xmm1, xmm1
        vaddss  xmm2, xmm4, xmm9
        vmovss  xmm0, xmm1, xmm2
        vroundss xmm3, xmm8, xmm0, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm6, xmm1, xmm11
      }
      if ( v40 >= 3 )
      {
        LODWORD(outDeltaAxis) = 3;
        LODWORD(inAngleDelta) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inAngleDelta, outDeltaAxis) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rsi+rdi+1D8h], xmm6 }
    }
    ++v40;
    _RDI += 4i64;
    v43 = v40 < 3;
  }
  while ( (int)v40 < 3 );
  _RDI = *(pml_t **)pmla.v;
  if ( v32 )
  {
    __asm { vmovss  xmm3, dword ptr [rsp+2F0h+var_298+8] }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+2F0h+var_298+8]
      vmovss  xmm0, dword ptr [rdi+24h]
      vmulss  xmm2, xmm0, dword ptr [rsi+48h]
      vaddss  xmm3, xmm1, xmm2
      vmovss  dword ptr [rsp+2F0h+var_298+8], xmm3
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+2F0h+var_298]
    vucomiss xmm0, xmm15
  }
  v97 = *(_QWORD *)angles.v;
  if ( v32 )
    goto LABEL_55;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+2F0h+var_298+4]
    vucomiss xmm0, xmm15
    vucomiss xmm3, xmm15
  }
  if ( v202 )
  {
LABEL_55:
    AnglesToAxis(&_RSI->viewangles, &axis);
    WorldUpReferenceFrame::ApplyReferenceFrameToAxis((WorldUpReferenceFrame *)(v97 + 852), &axis);
    MatrixTranspose(&axis, &out);
    WorldUpReferenceFrame::GetAngles((WorldUpReferenceFrame *)(v97 + 852), &outAngles);
    AnglesToAxis(&outAngles, &in1);
    MatrixMultiply(&in1, &out, &worldUpAxisView);
    if ( v202 )
    {
      _RBX = DVARFLT_player_zeroGravWorldUpRate;
      if ( !DVARFLT_player_zeroGravWorldUpRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravWorldUpRate") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm12, dword ptr [rbx+28h]
        vmovss  xmm5, dword ptr [rbp+1F0h+outFixedDir+8]
        vmovss  xmm6, dword ptr [rsp+2F0h+outFixedDir]
        vmovss  xmm7, dword ptr [rsp+2F0h+outFixedDir+4]
        vmulss  xmm2, xmm6, dword ptr [rbp+1F0h+out]
        vmulss  xmm1, xmm7, dword ptr [rbp+1F0h+out+0Ch]
        vmovss  xmm13, dword ptr [rdi+24h]
        vmulss  xmm0, xmm12, cs:__real@40000000
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm1, xmm5, dword ptr [rbp+1F0h+out+18h]
        vaddss  xmm2, xmm3, xmm1
        vmulss  xmm3, xmm6, dword ptr [rbp+1F0h+out+4]
        vmulss  xmm1, xmm5, dword ptr [rbp+1F0h+out+1Ch]
        vmovss  dword ptr [rbp+1F0h+v1], xmm2
        vmulss  xmm2, xmm7, dword ptr [rbp+1F0h+out+10h]
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm3, xmm6, dword ptr [rbp+1F0h+out+8]
        vaddss  xmm2, xmm4, xmm1
        vmulss  xmm1, xmm5, dword ptr [rbp+1F0h+out+20h]
        vmovss  dword ptr [rbp+1F0h+v1+4], xmm2
        vmulss  xmm2, xmm7, dword ptr [rbp+1F0h+out+14h]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vmovss  dword ptr [rbp+1F0h+v1+8], xmm2
        vmulss  xmm10, xmm0, xmm13
      }
      Vec3Cross(&worldUpAxisView.m[2], v1.m, &v1.m[1]);
      __asm
      {
        vmovss  xmm4, dword ptr [rbp+1F0h+cross]
        vmovss  xmm6, dword ptr [rbp+1F0h+cross+4]
        vmovss  xmm5, dword ptr [rbp+1F0h+cross+8]
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm0, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rbp+1F0h+cross], xmm0
        vmulss  xmm0, xmm5, xmm2
        vmulss  xmm1, xmm6, xmm2
        vmovss  dword ptr [rbp+1F0h+cross+8], xmm0
        vmovss  dword ptr [rbp+1F0h+cross+4], xmm1
      }
      Vec3Cross(v1.m, &v1.m[1], &v1.m[2]);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1F0h+v1]
        vmovss  dword ptr [rsp+2F0h+pml], xmm0
      }
      if ( (LODWORD(pmla.v[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_98;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1F0h+v1+4]
        vmovss  dword ptr [rsp+2F0h+pml], xmm0
      }
      if ( (LODWORD(pmla.v[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_98;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1F0h+v1+8]
        vmovss  dword ptr [rsp+2F0h+pml], xmm0
      }
      if ( (LODWORD(pmla.v[0]) & 0x7F800000) == 2139095040 )
      {
LABEL_98:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4490, ASSERT_TYPE_SANITY, "( !IS_NAN( ( localForcedAxis[0] )[0] ) && !IS_NAN( ( localForcedAxis[0] )[1] ) && !IS_NAN( ( localForcedAxis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( localForcedAxis[0] )[0] ) && !IS_NAN( ( localForcedAxis[0] )[1] ) && !IS_NAN( ( localForcedAxis[0] )[2] )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1F0h+cross]
        vmovss  dword ptr [rsp+2F0h+pml], xmm0
      }
      if ( (LODWORD(pmla.v[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_99;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1F0h+cross+4]
        vmovss  dword ptr [rsp+2F0h+pml], xmm0
      }
      if ( (LODWORD(pmla.v[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_99;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1F0h+cross+8]
        vmovss  dword ptr [rsp+2F0h+pml], xmm0
      }
      if ( (LODWORD(pmla.v[0]) & 0x7F800000) == 2139095040 )
      {
LABEL_99:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4491, ASSERT_TYPE_SANITY, "( !IS_NAN( ( localForcedAxis[1] )[0] ) && !IS_NAN( ( localForcedAxis[1] )[1] ) && !IS_NAN( ( localForcedAxis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( localForcedAxis[1] )[0] ) && !IS_NAN( ( localForcedAxis[1] )[1] ) && !IS_NAN( ( localForcedAxis[1] )[2] )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1F0h+var_250]
        vmovss  dword ptr [rsp+2F0h+pml], xmm0
      }
      if ( (LODWORD(pmla.v[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_100;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1F0h+var_250+4]
        vmovss  dword ptr [rsp+2F0h+pml], xmm0
      }
      if ( (LODWORD(pmla.v[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_100;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1F0h+var_250+8]
        vmovss  dword ptr [rsp+2F0h+pml], xmm0
      }
      if ( (LODWORD(pmla.v[0]) & 0x7F800000) == 2139095040 )
      {
LABEL_100:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4492, ASSERT_TYPE_SANITY, "( !IS_NAN( ( localForcedAxis[2] )[0] ) && !IS_NAN( ( localForcedAxis[2] )[1] ) && !IS_NAN( ( localForcedAxis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( localForcedAxis[2] )[0] ) && !IS_NAN( ( localForcedAxis[2] )[1] ) && !IS_NAN( ( localForcedAxis[2] )[2] )") )
          __debugbreak();
      }
      AxisToQuat(&v1, &to);
      __asm
      {
        vmulss  xmm0, xmm12, cs:__real@3d0efa35
        vmulss  xmm2, xmm0, xmm13; limit
      }
      QuatSlerpLimited(&quat_identity, &to, *(float *)&_XMM2, &result);
      QuatToAxis(&result, &in2);
      AxisToAngles(&in2, &angles);
      __asm
      {
        vmulss  xmm4, xmm14, dword ptr [rsp+2F0h+angles]
        vaddss  xmm2, xmm4, xmm9
        vroundss xmm3, xmm8, xmm2, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm4, xmm14, dword ptr [rsp+2F0h+angles+4]
        vaddss  xmm2, xmm4, xmm9
        vroundss xmm3, xmm8, xmm2, 1
        vxorps  xmm2, xmm10, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm6, xmm1, xmm11
        vsubss  xmm1, xmm4, xmm3
        vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm0, xmm6, xmm3
        vcomiss xmm0, xmm10
        vmovss  dword ptr [rsp+2F0h+angles+8], xmm15
        vmulss  xmm5, xmm1, xmm11
      }
      if ( !(v149 | v150) )
      {
        __asm
        {
          vcmpless xmm0, xmm15, xmm6
          vblendvps xmm1, xmm2, xmm10, xmm0
          vmovaps xmm6, xmm1
          vmovss  dword ptr [rsp+2F0h+angles], xmm1
        }
      }
      __asm
      {
        vandps  xmm0, xmm5, xmm3
        vcomiss xmm0, xmm10
      }
      if ( !(v149 | v150) )
      {
        __asm
        {
          vcmpless xmm0, xmm15, xmm5
          vblendvps xmm0, xmm2, xmm10, xmm0
          vmovaps xmm5, xmm0
          vmovss  dword ptr [rsp+2F0h+angles+4], xmm0
        }
      }
      __asm
      {
        vaddss  xmm1, xmm6, dword ptr [rsp+2F0h+var_298]
        vaddss  xmm0, xmm5, dword ptr [rsp+2F0h+var_298+4]
        vmovss  dword ptr [rsp+2F0h+var_298], xmm1
        vmovss  dword ptr [rsp+2F0h+var_298+4], xmm0
      }
    }
    if ( v32 )
      PM_ZeroGravityMoveAngular_FixedWorldUp(_RDI, &fixedUp, &in1, &worldUpAxisView, &out, &v204, &in2);
    else
      AnglesToAxis(&v204, &in2);
    MatrixMultiply(&worldUpAxisView, &in2, &v218);
    MatrixMultiply(&v218, &axis, &v219);
    AxisToAngles(&v219, &v211);
    _RBX = *(playerState_s **)(v97 + 8);
    v172 = *(const BgHandler **)(v97 + 904);
    v173 = *(const BgWeaponMap **)(v97 + 968);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4282, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v97 == -852 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4283, ASSERT_TYPE_ASSERT, "(refFrame)", (const char *)&queryFormat, "refFrame") )
      __debugbreak();
    if ( !v173 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4284, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+30h]
      vmovss  xmm7, dword ptr [rbx+34h]
      vmovss  xmm8, dword ptr [rbx+38h]
      vmovss  xmm9, dword ptr [rbx+2ACh]
      vmovss  xmm10, dword ptr [rbx+2B0h]
      vmovss  xmm11, dword ptr [rbx+2B4h]
      vmovss  dword ptr [rsp+2F0h+pml], xmm6
      vmovss  dword ptr [rsp+2F0h+pml+4], xmm7
      vmovss  [rsp+2F0h+var_2A0], xmm8
    }
    BG_GetPlayerEyePosition(v173, _RBX, &outFixedDir, v172);
    WorldUpReferenceFrame::SetAngles((WorldUpReferenceFrame *)(v97 + 852), _RBX, v172, &v211);
    BG_GetPlayerEyePosition(v173, _RBX, &angles, v172);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+2F0h+outFixedDir]
      vsubss  xmm1, xmm0, dword ptr [rsp+2F0h+angles]
      vaddss  xmm2, xmm1, dword ptr [rbx+30h]
      vmovss  xmm0, dword ptr [rsp+2F0h+outFixedDir+4]
      vsubss  xmm1, xmm0, dword ptr [rsp+2F0h+angles+4]
      vmovss  xmm0, dword ptr [rbp+1F0h+outFixedDir+8]
      vmovss  dword ptr [rbx+30h], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbx+34h]
      vsubss  xmm1, xmm0, dword ptr [rsp+2F0h+angles+8]
      vmovss  dword ptr [rbx+34h], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbx+38h]
      vmovss  dword ptr [rbx+38h], xmm2
    }
    if ( !PM_ZeroGravityMoveHandleAngularPenetration(_RBX, v172, &pmla) )
    {
      __asm
      {
        vmovss  dword ptr [rbx+2ACh], xmm9
        vmovss  dword ptr [rbx+2B0h], xmm10
        vmovss  dword ptr [rbx+2B4h], xmm11
      }
      WorldUpReferenceFrame::Init((WorldUpReferenceFrame *)(v97 + 852), _RBX, v172);
      __asm
      {
        vmovss  dword ptr [rbx+30h], xmm6
        vmovss  dword ptr [rbx+34h], xmm7
        vmovss  dword ptr [rbx+38h], xmm8
      }
    }
    if ( v202 )
    {
      *(_DWORD *)(*(_QWORD *)(v97 + 8) + 21176i64) = 0;
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)(*(_QWORD *)(v97 + 8) + 28i64), GameModeFlagValues::ms_spValue, 0x2Du);
    }
  }
  _R11 = &v220;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
PM_ZeroGravityMoveAngular_FixedWorldUp
==============
*/
void PM_ZeroGravityMoveAngular_FixedWorldUp(pml_t *pml, const vec3_t *fixedUp, const tmat33_t<vec3_t> *worldUpAxis, const tmat33_t<vec3_t> *worldUpAxisView, const tmat33_t<vec3_t> *invViewAxis, const vec3_t *inAngleDelta, tmat33_t<vec3_t> *outDeltaAxis)
{
  float fmt; 
  float fmta; 
  vec3_t v38; 
  vec3_t angles; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> aroundAxes; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> inAxis; 
  char v45; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4246, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  _RBX = DVARFLT_player_zeroGravWorldUpRate;
  if ( !DVARFLT_player_zeroGravWorldUpRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravWorldUpRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARMPFLT_player_view_pitch_up;
  __asm { vmulss  xmm8, xmm0, dword ptr [rdi+24h] }
  if ( !DCONST_DVARMPFLT_player_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_up") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARMPFLT_player_view_pitch_down;
  __asm { vxorps  xmm7, xmm0, cs:__xmm@80000000800000008000000080000000 }
  if ( !DCONST_DVARMPFLT_player_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_down") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  GenerateAxisFromUpVector(fixedUp, worldUpAxis, &outAxis);
  MatrixTranspose(&outAxis, &out);
  MatrixMultiply(worldUpAxis, &out, &axis);
  AxisToAngles(&axis, &angles);
  _RBX = inAngleDelta;
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+198h+angles]; curAngle
    vmovaps xmm3, xmm6; maxAngle
    vmovaps xmm2, xmm7; minAngle
    vmovss  xmm0, dword ptr [rbx]; angleDelta
    vmovss  dword ptr [rsp+198h+fmt], xmm8
  }
  *(float *)&_XMM0 = ClampAngleDeltaOverTime(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmt);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+198h+angles+8]; curAngle
    vmovss  dword ptr [rsp+198h+var_158], xmm0
    vmovss  xmm0, dword ptr [rbx+8]; angleDelta
    vxorps  xmm3, xmm3, xmm3; maxAngle
    vxorps  xmm2, xmm2, xmm2; minAngle
    vmovss  dword ptr [rsp+198h+fmt], xmm8
  }
  *(float *)&_XMM0 = ClampAngleDeltaOverTime(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmta);
  __asm
  {
    vmovss  dword ptr [rsp+198h+var_158+8], xmm0
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+198h+var_158+4], xmm0
  }
  AxisCopy(worldUpAxisView, &aroundAxes);
  MatrixTransformVector(&outAxis.m[2], invViewAxis, &aroundAxes.m[2]);
  AxisClear(&inAxis);
  RotateAxisAroundVectors(&inAxis, &aroundAxes, &v38, outDeltaAxis);
  _R11 = &v45;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
PM_ZeroGravityMoveCorrectWorldUp
==============
*/
void PM_ZeroGravityMoveCorrectWorldUp(pmove_t *pm)
{
  char v17; 
  char v18; 
  const BgHandler *m_bgHandler; 
  BgWeaponMap *weaponMap; 
  unsigned int v49; 
  bool v52; 
  const BgHandler *v95; 
  int v99; 
  const BgHandler *v108; 
  __int64 v155; 
  __int64 v156; 
  __int64 v157; 
  __int64 v158; 
  vec3_t v3; 
  vec3_t v2; 
  vec3_t v1; 
  vec3_t outOrigin; 
  vec3_t v175; 
  vec3_t originalOrigin; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4556, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4556, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+1D8h]
    vmovss  dword ptr [rbp+0E0h+v2], xmm0
    vmovss  xmm1, dword ptr [rsi+1DCh]
    vmovss  dword ptr [rbp+0E0h+v2+4], xmm1
    vmovss  xmm0, dword ptr [rsi+1E0h]
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [rbp+0E0h+v2+8], xmm0
    vmovss  dword ptr [rbp+0E0h+v1], xmm1
    vmovss  dword ptr [rbp+0E0h+v1+4], xmm1
    vmovss  dword ptr [rbp+0E0h+v1+8], xmm1
  }
  AnglesSubtract(&v1, &v2, &v3);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1E0h+v3]
    vmovss  xmm1, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm2, cs:__real@3a83126f
    vandps  xmm0, xmm0, xmm1
    vcomiss xmm0, xmm2
  }
  if ( !(v17 | v18) )
    goto LABEL_10;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1E0h+v3+4]
    vandps  xmm0, xmm0, xmm1
    vcomiss xmm0, xmm2
  }
  if ( !(v17 | v18) )
    goto LABEL_10;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0E0h+v3+8]
    vandps  xmm0, xmm0, xmm1
    vcomiss xmm0, xmm2
  }
  if ( !(v17 | v18) )
  {
LABEL_10:
    __asm { vmovss  xmm0, dword ptr [rsi+30h] }
    m_bgHandler = pm->m_bgHandler;
    weaponMap = pm->weaponMap;
    _RDI = &_RSI->delta_angles;
    __asm
    {
      vmovss  [rsp+1E0h+var_194], xmm0
      vmovss  dword ptr [rbp+0E0h+originalOrigin], xmm0
      vmovss  xmm0, dword ptr [rsi+34h]
      vmovss  [rsp+1E0h+var_190], xmm0
      vmovss  dword ptr [rbp+0E0h+originalOrigin+4], xmm0
      vmovss  xmm0, dword ptr [rsi+38h]
      vmovss  [rsp+1E0h+var_18C], xmm0
      vmovss  dword ptr [rbp+0E0h+originalOrigin+8], xmm0
      vmovss  xmm0, dword ptr [rsi+2ACh]
      vmovss  [rsp+1E0h+var_1A0], xmm0
      vmovss  xmm0, dword ptr [rsi+2B0h]
      vmovaps [rsp+1E0h+var_30], xmm6
      vmovss  [rsp+1E0h+var_19C], xmm0
      vmovss  xmm0, dword ptr [rsi+2B4h]
      vmovaps [rsp+1E0h+var_40], xmm7
      vmovss  [rsp+1E0h+var_198], xmm0
      vmovss  xmm0, dword ptr [rdi]
      vmovaps [rsp+1E0h+var_50], xmm8
      vmovss  [rsp+1E0h+var_180], xmm0
      vmovss  xmm0, dword ptr [rdi+4]
      vmovaps [rsp+1E0h+var_60], xmm9
      vmovss  [rsp+1E0h+var_188], xmm0
      vmovss  xmm0, dword ptr [rdi+8]
      vmovaps [rsp+1E0h+var_70], xmm10
      vmovss  [rsp+1E0h+var_184], xmm0
      vmovss  xmm0, dword ptr [rsi+1D8h]
      vmovaps [rsp+1E0h+var_80], xmm11
      vmovss  [rsp+1E0h+var_17C], xmm0
      vmovss  xmm0, dword ptr [rsi+1DCh]
      vmovaps [rsp+1E0h+var_90], xmm12
      vmovss  [rsp+1E0h+var_178], xmm0
      vmovss  xmm0, dword ptr [rsi+1E0h]
      vmovaps [rsp+1E0h+var_A0], xmm13
      vmovaps [rsp+1E0h+var_B0], xmm14
      vmovss  [rsp+1E0h+var_174], xmm0
      vmovaps [rsp+1E0h+var_C0], xmm15
    }
    BG_GetPlayerEyePosition(weaponMap, _RSI, &outOrigin, m_bgHandler);
    AnglesToAxis(&_RSI->viewangles, &axis);
    WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&pm->refFrame, &axis);
    AxisToAngles(&axis, &angles);
    WorldUpReferenceFrame::SetAngles(&pm->refFrame, _RSI, pm->m_bgHandler, &angles);
    __asm
    {
      vmovss  xmm10, cs:__real@3b360b61
      vmovss  xmm8, cs:__real@3f000000
      vmovss  xmm11, cs:__real@43b40000
      vmovss  xmm14, cs:__real@43360b61
      vmovss  xmm15, cs:__real@37800000
      vmovss  xmm12, cs:__real@43340000
      vmovss  xmm13, cs:__real@3f800000
    }
    v49 = 0;
    _R12 = (char *)&v3 - (char *)&pm->cmd.angles;
    __asm { vxorps  xmm7, xmm7, xmm7 }
    v52 = 1;
    do
    {
      if ( !v52 )
      {
        LODWORD(v157) = 3;
        LODWORD(v155) = v49;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v155, v157) )
          __debugbreak();
        LODWORD(v158) = 3;
        LODWORD(v156) = v49;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v156, v158) )
          __debugbreak();
      }
      _R14 = (int *)((char *)_RDI + (char *)&pm->cmd.angles - (char *)&_RSI->delta_angles);
      __asm
      {
        vmovss  xmm0, dword ptr [r14+r12]
        vaddss  xmm1, xmm0, dword ptr [rdi]
        vmulss  xmm4, xmm1, xmm10
        vaddss  xmm2, xmm4, xmm8
        vroundss xmm3, xmm7, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm6, xmm0, xmm11
      }
      if ( v49 >= 3 )
      {
        LODWORD(v157) = 3;
        LODWORD(v155) = v49;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v155, v157) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rdi], xmm6 }
      if ( v49 >= 3 )
      {
        LODWORD(v157) = 3;
        LODWORD(v155) = v49;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v155, v157) )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm1, xmm14, dword ptr [rdi]
        vaddss  xmm3, xmm1, xmm8
        vroundss xmm1, xmm7, xmm3, 1
        vcvttss2si eax, xmm1
      }
      _ECX = (unsigned __int16)_EAX;
      __asm
      {
        vmovd   xmm0, ecx
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm4, xmm0, xmm15
        vaddss  xmm2, xmm4, xmm8
        vroundss xmm3, xmm7, xmm2, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm6, xmm1, xmm11
      }
      if ( v49 >= 3 )
      {
        LODWORD(v157) = 3;
        LODWORD(v155) = v49;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v155, v157) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rdi], xmm6 }
      if ( v49 >= 3 )
      {
        LODWORD(v157) = 3;
        LODWORD(v155) = v49;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 39, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v155, v157) )
          __debugbreak();
      }
      __asm { vmovaps xmm1, xmm12; maxAbsValueSize }
      *(double *)&_XMM0 = MSG_UnpackSignedFloat(*_R14, *(float *)&_XMM1, 0x14u);
      __asm
      {
        vmulss  xmm6, xmm0, xmm10
        vaddss  xmm2, xmm6, xmm8
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm2
        vroundss xmm9, xmm7, xmm0, 1
      }
      if ( v49 >= 3 )
      {
        LODWORD(v157) = 3;
        LODWORD(v155) = v49;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v155, v157) )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm2, xmm10, dword ptr [rdi]
        vsubss  xmm0, xmm6, xmm9
        vmulss  xmm3, xmm0, xmm13
        vaddss  xmm4, xmm3, xmm2
        vxorps  xmm0, xmm0, xmm0
        vaddss  xmm3, xmm4, xmm8
        vmovss  xmm1, xmm0, xmm3
        vroundss xmm2, xmm7, xmm1, 1
        vsubss  xmm0, xmm4, xmm2
        vmulss  xmm6, xmm0, xmm11
      }
      if ( v49 >= 3 )
      {
        LODWORD(v157) = 3;
        LODWORD(v155) = v49;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v155, v157) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rdi+124h], xmm6 }
      _RDI = (vec3_t *)((char *)_RDI + 4);
      v52 = ++v49 < 3;
    }
    while ( (int)v49 < 3 );
    BG_GetPlayerEyePosition(pm->weaponMap, _RSI, &v175, pm->m_bgHandler);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0E0h+outOrigin]
      vsubss  xmm1, xmm0, dword ptr [rbp+0E0h+var_128]
      vaddss  xmm2, xmm1, dword ptr [rsi+30h]
      vmovss  xmm0, dword ptr [rbp+0E0h+outOrigin+4]
      vsubss  xmm1, xmm0, dword ptr [rbp+0E0h+var_128+4]
      vmovss  xmm0, dword ptr [rbp+0E0h+outOrigin+8]
    }
    v95 = pm->m_bgHandler;
    __asm
    {
      vmovss  dword ptr [rsi+30h], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsi+34h]
      vsubss  xmm1, xmm0, dword ptr [rbp+0E0h+var_128+8]
      vmovss  dword ptr [rsi+34h], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsi+38h]
      vmovss  dword ptr [rsi+38h], xmm2
    }
    v99 = PM_ZeroGravityMoveHandleAngularPenetration(_RSI, v95, &originalOrigin);
    __asm
    {
      vmovaps xmm13, [rsp+1E0h+var_A0]
      vmovaps xmm12, [rsp+1E0h+var_90]
      vmovaps xmm10, [rsp+1E0h+var_70]
      vmovaps xmm9, [rsp+1E0h+var_60]
      vmovaps xmm6, [rsp+1E0h+var_30]
    }
    if ( !v99 )
    {
      __asm
      {
        vmovss  xmm0, [rsp+1E0h+var_1A0]
        vmovss  xmm1, [rsp+1E0h+var_19C]
        vmovss  xmm2, [rsp+1E0h+var_198]
      }
      v108 = pm->m_bgHandler;
      __asm
      {
        vmovss  dword ptr [rsi+2ACh], xmm0
        vmovss  dword ptr [rsi+2B0h], xmm1
        vmovss  dword ptr [rsi+2B4h], xmm2
      }
      WorldUpReferenceFrame::Init(&pm->refFrame, _RSI, v108);
      __asm
      {
        vmovss  xmm0, [rsp+1E0h+var_194]
        vmovss  xmm1, [rsp+1E0h+var_190]
        vmovss  xmm2, [rsp+1E0h+var_18C]
        vmovss  dword ptr [rsi+30h], xmm0
        vmovss  xmm0, [rsp+1E0h+var_188]
        vmovss  dword ptr [rsi+34h], xmm1
        vmovss  xmm1, [rsp+1E0h+var_184]
        vmovss  dword ptr [rsi+38h], xmm2
        vmovss  dword ptr [rsi+0B8h], xmm0
        vmulss  xmm0, xmm14, [rsp+1E0h+var_180]
        vaddss  xmm2, xmm0, xmm8
        vmovss  dword ptr [rsi+0BCh], xmm1
        vroundss xmm0, xmm7, xmm2, 1
        vcvttss2si eax, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm4, xmm0, xmm15
        vaddss  xmm2, xmm4, xmm8
        vroundss xmm3, xmm7, xmm2, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm0, xmm1, xmm11
        vmovss  dword ptr [rsi+0B4h], xmm0
        vmulss  xmm0, xmm14, dword ptr [rsi+0B8h]
        vaddss  xmm3, xmm0, xmm8
        vroundss xmm0, xmm7, xmm3, 1
        vcvttss2si eax, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm4, xmm0, xmm15
        vaddss  xmm2, xmm4, xmm8
        vroundss xmm3, xmm7, xmm2, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm0, xmm1, xmm11
        vmovss  dword ptr [rsi+0B8h], xmm0
        vmulss  xmm0, xmm14, dword ptr [rsi+0BCh]
        vaddss  xmm3, xmm0, xmm8
        vroundss xmm0, xmm7, xmm3, 1
        vcvttss2si eax, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm4, xmm0, xmm15
        vaddss  xmm2, xmm4, xmm8
        vroundss xmm3, xmm7, xmm2, 1
        vmovss  xmm2, [rsp+1E0h+var_174]
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm0, xmm1, xmm11
        vmovss  xmm1, [rsp+1E0h+var_17C]
        vmovss  dword ptr [rsi+0BCh], xmm0
        vmovss  xmm0, [rsp+1E0h+var_178]
        vmovss  dword ptr [rsi+1DCh], xmm0
        vmovss  dword ptr [rsi+1D8h], xmm1
        vmovss  dword ptr [rsi+1E0h], xmm2
      }
    }
    __asm
    {
      vmovaps xmm14, [rsp+1E0h+var_B0]
      vmovaps xmm11, [rsp+1E0h+var_80]
      vmovaps xmm8, [rsp+1E0h+var_50]
      vmovaps xmm7, [rsp+1E0h+var_40]
      vmovaps xmm15, [rsp+1E0h+var_C0]
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
  Physics_WorldId v10; 
  const BgPlayerTraceInfo *v11; 
  int v15; 
  __int64 result; 
  bool outHadPenetration; 
  BgTrace v46; 
  vec3_t hintNormal; 
  vec3_t outOrigin; 
  trace_t results; 
  char v50; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RDI = ps;
  _R15 = originalOrigin;
  v10 = handler->GetPhysicsWorldId((BgHandler *)handler);
  v11 = handler->GetPlayerTraceInfo(handler, (unsigned int)_RDI->clientNum);
  BgTrace::BgTrace(&v46, v11);
  __asm
  {
    vmovss  xmm7, cs:__real@3a83126f
    vmovss  xmm8, cs:__real@80000000
    vmovss  xmm6, cs:__real@3f800000
  }
  v15 = 0;
  while ( 1 )
  {
    BgTrace::LegacyTraceHandler(&v46, v10, &results, &_RDI->origin, &_RDI->origin, &playerBox, _RDI->clientNum, 33636369, _RDI);
    if ( !results.allsolid )
      break;
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+30h]
      vmovss  xmm2, dword ptr [rdi+34h]
      vmovss  xmm0, dword ptr [r15]
      vmovss  xmm3, dword ptr [rdi+38h]
      vsubss  xmm4, xmm0, xmm1
      vmovss  xmm0, dword ptr [r15+8]
      vmovss  dword ptr [rsp+178h+outOrigin], xmm1
      vmovss  xmm1, dword ptr [r15+4]
      vsubss  xmm5, xmm1, xmm2
      vmulss  xmm1, xmm4, xmm4
      vmovss  dword ptr [rsp+178h+outOrigin+8], xmm3
      vsubss  xmm3, xmm0, xmm3
      vmulss  xmm0, xmm5, xmm5
      vmovss  dword ptr [rsp+178h+outOrigin+4], xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm0, xmm2, xmm1
      vcomiss xmm0, xmm7
      vmovss  dword ptr [rsp+178h+hintNormal], xmm4
      vmovss  dword ptr [rsp+178h+hintNormal+4], xmm5
      vmovss  dword ptr [rsp+178h+hintNormal+8], xmm3
      vsqrtss xmm1, xmm0, xmm0
      vcmpless xmm0, xmm1, xmm8
      vblendvps xmm0, xmm1, xmm6, xmm0
      vdivss  xmm2, xmm6, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rsp+178h+hintNormal], xmm0
      vmulss  xmm0, xmm2, xmm3
      vmulss  xmm1, xmm2, xmm5
      vmovss  dword ptr [rsp+178h+hintNormal+8], xmm0
      vmovss  dword ptr [rsp+178h+hintNormal+4], xmm1
    }
    if ( BG_ResolvePlayerPenetration(v10, _RDI, &playerBox, &_RDI->origin, NULL, &hintNormal, 33636369, 0, &outOrigin, &outHadPenetration) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+178h+outOrigin]
        vmovss  xmm1, dword ptr [rsp+178h+outOrigin+4]
        vmovss  dword ptr [rdi+30h], xmm0
        vmovss  xmm0, dword ptr [rsp+178h+outOrigin+8]
      }
      ++v15;
      __asm
      {
        vmovss  dword ptr [rdi+38h], xmm0
        vmovss  dword ptr [rdi+34h], xmm1
      }
      if ( v15 < 5 )
        continue;
    }
    result = 0i64;
    goto LABEL_7;
  }
  result = 1i64;
LABEL_7:
  _R11 = &v50;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
PM_ZeroGravityMoveLinear
==============
*/
void PM_ZeroGravityMoveLinear(pmove_t *pm, pml_t *pml)
{
  unsigned __int64 v14; 
  int v16; 
  int v17; 
  bool v18; 
  BOOL v20; 
  const dvar_t *v65; 
  const dvar_t *v67; 
  bool IsPushAffectingAirMovement; 
  bool v124; 
  bool v125; 
  bool v126; 
  vec3_t outFixedDir; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-88h], xmm10 }
  _RBP = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3861, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3861, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v14 = (pm->cmd.buttons >> 8) & 1;
  _R14 = pm->cmd.buttons & 0xC0;
  v16 = (pm->cmd.buttons & 0xC0) != 0;
  if ( pm->cmd.forwardmove || pm->cmd.rightmove || (v17 = 0, (_DWORD)v14 != v16) )
    v17 = 1;
  v18 = PM_ZeroGravity_UseForcedDirection(&outFixedDir);
  v20 = v18;
  __asm { vxorps  xmm10, xmm10, xmm10 }
  if ( !v17 && !v18 || _RBX->pm_type >= 7 )
    goto LABEL_34;
  _EAX = pm->cmd.forwardmove;
  __asm
  {
    vmovaps [rsp+118h+var_48], xmm6
    vmovaps [rsp+118h+var_58], xmm7
    vmovaps [rsp+118h+var_68], xmm8
    vmovaps [rsp+118h+var_78], xmm9
    vmovaps [rsp+118h+var_98], xmm11
    vmovaps [rsp+118h+var_A8], xmm12
    vmovaps [rsp+118h+var_B8], xmm13
    vmovss  xmm0, dword ptr [rbx+3Ch]
    vmovss  xmm2, dword ptr [rbx+40h]
    vmovss  xmm3, dword ptr [rbx+44h]
    vmovss  xmm12, cs:__real@3f800000
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vxorps  xmm13, xmm13, xmm13
    vroundss xmm13, xmm13, xmm0, 1
    vmovd   xmm0, eax
  }
  _EAX = pm->cmd.rightmove;
  __asm
  {
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm5, xmm0, cs:__real@3c010204
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm6, xmm0, cs:__real@3c010204
    vxorps  xmm4, xmm4, xmm4
  }
  if ( (_DWORD)v14 != v16 )
  {
    _R15 = 0i64;
    if ( (_DWORD)v14 )
    {
      __asm { vmovaps xmm4, xmm12 }
    }
    else
    {
      __asm
      {
        vmovq   xmm1, r15
        vmovq   xmm0, r14
        vpcmpeqq xmm2, xmm0, xmm1
        vmovss  xmm1, cs:__real@bf800000
        vblendvps xmm4, xmm1, xmm4, xmm2
      }
    }
  }
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rbp+0Ch]
    vmulss  xmm0, xmm5, dword ptr [rbp+0]
    vmulss  xmm3, xmm5, dword ptr [rbp+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm6, dword ptr [rbp+10h]
    vmulss  xmm1, xmm4, dword ptr [rbp+18h]
    vaddss  xmm7, xmm2, xmm1
    vmulss  xmm1, xmm4, dword ptr [rbp+1Ch]
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm6, dword ptr [rbp+14h]
    vmulss  xmm3, xmm5, dword ptr [rbp+8]
    vaddss  xmm8, xmm2, xmm1
    vmulss  xmm1, xmm4, dword ptr [rbp+20h]
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm9, xmm2, xmm1
    vmovaps xmm6, xmm12
  }
  if ( (pm->cmd.buttons & 2) != 0 )
  {
    _RSI = DVARFLT_player_zeroGravBoostScalar;
    if ( !DVARFLT_player_zeroGravBoostScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravBoostScalar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm6, dword ptr [rsi+28h] }
  }
  v65 = DVARFLT_player_zeroGravSpeed;
  if ( !DVARFLT_player_zeroGravSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v65);
  __asm { vmulss  xmm11, xmm6, dword ptr [rsi+28h] }
  v67 = DVARFLT_player_zeroGravAcceleration;
  if ( !DVARFLT_player_zeroGravAcceleration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravAcceleration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v67);
  __asm
  {
    vmulss  xmm3, xmm6, dword ptr [rsi+28h]
    vmulss  xmm2, xmm3, dword ptr [rbp+24h]
    vmulss  xmm0, xmm7, xmm2
    vaddss  xmm4, xmm0, dword ptr [rbx+3Ch]
    vmulss  xmm0, xmm8, xmm2
    vmovss  dword ptr [rbx+3Ch], xmm4
    vaddss  xmm1, xmm0, dword ptr [rbx+40h]
    vmulss  xmm2, xmm9, xmm2
    vmovss  dword ptr [rbx+40h], xmm1
    vaddss  xmm5, xmm2, dword ptr [rbx+44h]
    vmovss  dword ptr [rbx+44h], xmm5
  }
  if ( v20 )
  {
    __asm
    {
      vmulss  xmm0, xmm3, dword ptr [rbp+24h]
      vmulss  xmm2, xmm0, cs:__real@3e800000
      vmovss  xmm3, dword ptr [rsp+118h+outFixedDir]
      vmovss  xmm6, dword ptr [rsp+118h+outFixedDir+8]
      vmulss  xmm1, xmm3, xmm2
      vaddss  xmm0, xmm1, xmm4
      vmovss  xmm4, dword ptr [rsp+118h+outFixedDir+4]
      vmulss  xmm1, xmm4, xmm2
      vmovss  dword ptr [rbx+3Ch], xmm0
      vaddss  xmm0, xmm1, dword ptr [rbx+40h]
      vmulss  xmm1, xmm6, xmm2
      vaddss  xmm5, xmm1, xmm5
      vmulss  xmm1, xmm8, xmm8
      vmovss  dword ptr [rbx+40h], xmm0
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm9, xmm9
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, cs:__real@3a83126f
      vmovss  dword ptr [rbx+44h], xmm5
    }
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+40h]
    vmovss  xmm3, dword ptr [rbx+3Ch]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
    vcomiss xmm6, xmm13
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm12, xmm0
    vdivss  xmm1, xmm12, xmm0
    vmovaps xmm12, [rsp+118h+var_A8]
    vmulss  xmm0, xmm1, xmm3
    vmulss  xmm3, xmm1, xmm4
    vmulss  xmm4, xmm5, xmm1
    vcomiss xmm6, xmm11
  }
  if ( v20 )
  {
    __asm
    {
      vmaxss  xmm2, xmm11, xmm13
      vmulss  xmm0, xmm0, xmm2
      vmovss  dword ptr [rbx+3Ch], xmm0
      vmulss  xmm0, xmm4, xmm2
      vmulss  xmm1, xmm3, xmm2
      vmovss  dword ptr [rbx+44h], xmm0
      vmovss  dword ptr [rbx+40h], xmm1
    }
  }
  __asm
  {
    vmovaps xmm13, [rsp+118h+var_B8]
    vmulss  xmm1, xmm8, xmm8
    vmovaps xmm8, [rsp+118h+var_68]
    vmulss  xmm0, xmm7, xmm7
    vmovaps xmm7, [rsp+118h+var_58]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vmovaps xmm9, [rsp+118h+var_78]
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmulss  xmm3, xmm0, xmm11
    vmovaps xmm11, [rsp+118h+var_98]
    vcomiss xmm6, xmm3
    vmovaps xmm6, [rsp+118h+var_48]
  }
  if ( v20 )
LABEL_34:
    PM_ZeroGravityFriction(pm, _RBP);
  IsPushAffectingAirMovement = BG_IsPushAffectingAirMovement(_RBX);
  v124 = !IsPushAffectingAirMovement;
  if ( IsPushAffectingAirMovement )
  {
    v125 = Com_GameMode_SupportsFeature(WEAPONSTATES_NUM);
    v124 = !v125;
    if ( !v125 )
    {
      v126 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 3950, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_PUSH ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_PUSH )");
      v124 = !v126;
      if ( v126 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+24h]
      vmulss  xmm0, xmm2, dword ptr [rbx+5274h]
      vaddss  xmm1, xmm0, dword ptr [rbx+3Ch]
      vmovss  dword ptr [rbx+3Ch], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+5278h]
      vaddss  xmm1, xmm0, dword ptr [rbx+40h]
      vmovss  dword ptr [rbx+40h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+527Ch]
      vaddss  xmm1, xmm0, dword ptr [rbx+44h]
      vmovss  dword ptr [rbx+44h], xmm1
    }
  }
  __asm { vucomiss xmm10, dword ptr [rbx+3Ch] }
  if ( !v124 )
    goto LABEL_43;
  __asm { vucomiss xmm10, dword ptr [rbx+40h] }
  if ( !v124 )
    goto LABEL_43;
  __asm { vucomiss xmm10, dword ptr [rbx+44h] }
  if ( !v124 )
LABEL_43:
    PM_UpdatePlayerCollision(pm, _RBP, 0, 0, 0, 1);
  __asm { vmovaps xmm10, [rsp+118h+var_88] }
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
  const char *v15; 
  const char *v16; 
  int v17; 
  const char *v18; 
  Physics_WorldId v19; 
  CgHandler *Handler; 
  const BgHandler *v21; 
  const dvar_t *v23; 
  hknpShape *ShapeCylinder; 
  hknpShape *v42; 
  char v43; 
  hkMemoryAllocator *v48; 
  hkMemoryAllocator *v49; 
  float fmt; 
  char v56; 
  hknpShape *ShapeCapsuleUpAxis; 
  Physics_ShapecastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v60; 
  __int64 v61; 
  vec4_t quat; 
  WorldUpReferenceFrame v63; 
  char optionalInplaceBuffer[432]; 
  char v65; 
  void *retaddr; 

  _RAX = &retaddr;
  v61 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  _R13 = end;
  _R15 = start;
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
    v15 = "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )";
    v16 = "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))";
    v17 = 2575;
    v18 = "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h";
  }
  else
  {
    v15 = "BG_IsPlayerZeroG( ps )";
    v16 = "(BG_IsPlayerZeroG( ps ))";
    v17 = 5484;
    v18 = "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp";
  }
  if ( CoreAssert_Handler(v18, v17, ASSERT_TYPE_ASSERT, v16, (const char *)&queryFormat, v15) )
    __debugbreak();
LABEL_23:
  v19 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
  if ( !Physics_IsPredictiveWorld(v19) || Sys_IsMainThread() )
  {
    v56 = 0;
  }
  else
  {
    v56 = 1;
    Physics_LockWorld(v19);
  }
  HavokPhysics_CollisionQueryResult::Reset(outResults, 1);
  if ( (unsigned int)v19 > PHYSICS_WORLD_ID_SERVER_DETAIL )
    Handler = CgHandler::getHandler(pm->localClientNum);
  else
    Handler = (CgHandler *)GHandler::getHandler();
  v21 = Handler;
  if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5515, ASSERT_TYPE_ASSERT, "(handler != nullptr)", (const char *)&queryFormat, "handler != nullptr") )
    __debugbreak();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v63, ps, v21);
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
    vmovups xmmword ptr [rbp+240h+quat], xmm0
  }
  WorldUpReferenceFrame::ApplyReferenceFrameToQuat(&v63, &quat);
  v23 = DCONST_DVARMPBOOL_antilagZeroG;
  if ( !DCONST_DVARMPBOOL_antilagZeroG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagZeroG") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  _EAX = 0;
  __asm { vmovd   xmm1, eax }
  _EAX = v23->current.color[0];
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vxorps  xmm8, xmm8, xmm8
    vmovss  xmm0, cs:__real@41200000
    vblendvps xmm1, xmm0, xmm8, xmm2
    vmovss  dword ptr [rsp+340h+var_2F8], xmm1
    vaddss  xmm7, xmm1, dword ptr [rdx+0Ch]
    vaddss  xmm6, xmm1, dword ptr [rdx+14h]
    vsubss  xmm2, xmm6, xmm7; halfHeight
    vmovaps xmm3, xmm7; radius
  }
  ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis(v19, &pm->bounds->midPoint, *(float *)&_XMM2, *(float *)&_XMM3, optionalInplaceBuffer, 432, Temporary);
  __asm
  {
    vmovaps xmm2, xmm7; radius
    vmovaps xmm1, xmm6; halfHeight
  }
  ShapeCylinder = Physics_CreateShapeCylinder(&pm->bounds->midPoint, *(float *)&_XMM1, *(float *)&_XMM2, 32, 1);
  __asm
  {
    vmovss  xmm9, cs:__real@3e000000
    vaddss  xmm2, xmm7, xmm9; radius
    vaddss  xmm1, xmm6, xmm9; halfHeight
  }
  v42 = Physics_CreateShapeCylinder(&pm->bounds->midPoint, *(float *)&_XMM1, *(float *)&_XMM2, 32, 1);
  if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5541, ASSERT_TYPE_ASSERT, "(nonBrushShape)", (const char *)&queryFormat, "nonBrushShape") )
    __debugbreak();
  if ( !ShapeCylinder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5542, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5543, ASSERT_TYPE_ASSERT, "(paddedShape)", (const char *)&queryFormat, "paddedShape") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v60, 1, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v60, 0, ps->clientNum, 1, 0, 0, 0, 0);
  __asm
  {
    vmovss  xmm0, dword ptr [r13+0]
    vucomiss xmm0, dword ptr [r15]
  }
  if ( !v43 )
    goto LABEL_49;
  __asm
  {
    vmovss  xmm0, dword ptr [r13+4]
    vucomiss xmm0, dword ptr [r15+4]
  }
  if ( !v43 )
    goto LABEL_49;
  __asm
  {
    vmovss  xmm0, dword ptr [r13+8]
    vucomiss xmm0, dword ptr [r15+8]
  }
  if ( v43 )
  {
    LOBYTE(extendedData.startTolerance) = 0;
    __asm { vmovss  [rsp+340h+extendedData.collisionBuffer], xmm8 }
    LODWORD(extendedData.nonBrushShape) = 0;
    extendedData.contents = 1078198280;
    *(_QWORD *)&extendedData.accuracy = &v60;
    *(_QWORD *)&extendedData.collisionBuffer = ShapeCapsuleUpAxis;
    __asm { vmovss  dword ptr [rsp+340h+fmt], xmm8 }
    Physics_GetClosestPoints(v19, ShapeCylinder, _R15, &quat, fmt, (Physics_GetClosestPointsExtendedData *)&extendedData, outResults);
  }
  else
  {
LABEL_49:
    __asm
    {
      vmovss  dword ptr [rsp+340h+extendedData.simplify], xmm8
      vmovss  xmm0, cs:__real@3c83126f
      vmovss  dword ptr [rsp+340h+extendedData.ignoreBodies], xmm0
    }
    extendedData.simplifyStart = 0;
    extendedData.phaseSelection = All;
    extendedData.contents = 1078198280;
    extendedData.ignoreBodies = &v60;
    __asm { vmovss  dword ptr [rsp+340h+extendedData.nonBrushShape], xmm9 }
    extendedData.nonBrushShape = ShapeCapsuleUpAxis;
    extendedData.secondPassShape = v42;
    extendedData.permitOutwardTrace = 1;
    Physics_Shapecast(v19, ShapeCylinder, _R15, _R13, &quat, &extendedData, outResults, NULL);
  }
  Physics_ReleaseShape(v19, ShapeCylinder, 0);
  Physics_ReleaseShape(v19, v42, 0);
  if ( v56 )
    Physics_UnlockWorld(v19);
  v48 = hkMemHeapAllocator();
  v60.m_ignoreBodies.m_size = 0;
  if ( v60.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v48, v60.m_ignoreBodies.m_data, 4, v60.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v60.m_ignoreBodies.m_data = NULL;
  v60.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v49 = hkMemHeapAllocator();
  v60.m_ignoreEntities.m_size = 0;
  if ( v60.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v49, v60.m_ignoreEntities.m_data, 8, v60.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  _R11 = &v65;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
}

/*
==============
PM_ZeroGravity_SetWorldUpAngles
==============
*/
void PM_ZeroGravity_SetWorldUpAngles(playerState_s *ps, BgWeaponMap *weaponMap, WorldUpReferenceFrame *refFrame, const BgHandler *handler, const vec3_t *newWorldUpAngles)
{
  vec3_t outOrigin; 
  vec3_t v39; 
  vec3_t originalOrigin; 
  char v42; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps [rsp+108h+var_98], xmm11
  }
  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4282, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !refFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4283, ASSERT_TYPE_ASSERT, "(refFrame)", (const char *)&queryFormat, "refFrame") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4284, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+30h]
    vmovss  xmm7, dword ptr [rbx+34h]
    vmovss  xmm8, dword ptr [rbx+38h]
    vmovss  xmm9, dword ptr [rbx+2ACh]
    vmovss  xmm10, dword ptr [rbx+2B0h]
    vmovss  xmm11, dword ptr [rbx+2B4h]
    vmovss  dword ptr [rsp+108h+originalOrigin], xmm6
    vmovss  dword ptr [rsp+108h+originalOrigin+4], xmm7
    vmovss  dword ptr [rsp+108h+originalOrigin+8], xmm8
  }
  BG_GetPlayerEyePosition(weaponMap, _RBX, &outOrigin, handler);
  WorldUpReferenceFrame::SetAngles(refFrame, _RBX, handler, newWorldUpAngles);
  BG_GetPlayerEyePosition(weaponMap, _RBX, &v39, handler);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+108h+outOrigin]
    vsubss  xmm1, xmm0, dword ptr [rsp+108h+var_C8]
    vaddss  xmm2, xmm1, dword ptr [rbx+30h]
    vmovss  xmm0, dword ptr [rsp+108h+outOrigin+4]
    vsubss  xmm1, xmm0, dword ptr [rsp+108h+var_C8+4]
    vmovss  xmm0, dword ptr [rsp+108h+outOrigin+8]
    vmovss  dword ptr [rbx+30h], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbx+34h]
    vsubss  xmm1, xmm0, dword ptr [rsp+108h+var_C8+8]
    vmovss  dword ptr [rbx+34h], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbx+38h]
    vmovss  dword ptr [rbx+38h], xmm2
  }
  if ( !(unsigned int)PM_ZeroGravityMoveHandleAngularPenetration(_RBX, handler, &originalOrigin) )
  {
    __asm
    {
      vmovss  dword ptr [rbx+2ACh], xmm9
      vmovss  dword ptr [rbx+2B0h], xmm10
      vmovss  dword ptr [rbx+2B4h], xmm11
    }
    WorldUpReferenceFrame::Init(refFrame, _RBX, handler);
    __asm
    {
      vmovss  dword ptr [rbx+30h], xmm6
      vmovss  dword ptr [rbx+34h], xmm7
      vmovss  dword ptr [rbx+38h], xmm8
    }
  }
  _R11 = &v42;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
}

/*
==============
PM_ZeroGravity_UseForcedDirection
==============
*/
char PM_ZeroGravity_UseForcedDirection(vec3_t *outFixedDir)
{
  char v11; 
  char v12; 

  _RBX = DVARVEC3_player_zeroGravForceDir;
  _RDI = outFixedDir;
  if ( !DVARVEC3_player_zeroGravForceDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravForceDir") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+28h]
    vmovss  xmm4, dword ptr [rbx+2Ch]
    vmovss  xmm5, dword ptr [rbx+30h]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( v11 | v12 )
    return 0;
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm2, xmm0, xmm0
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm2, xmm3
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm2, xmm5
    vmulss  xmm1, xmm2, xmm4
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  dword ptr [rdi+4], xmm1
  }
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
  bool v6; 
  bool v7; 
  bool v8; 
  bool v11; 
  int v19; 
  bool isAnimDecreasing; 
  __int64 v25; 
  __int64 v26; 
  BobCycle v27; 

  v7 = this->maxGeneration <= 0xFu;
  __asm { vmovaps [rsp+88h+var_18], xmm7 }
  _RBX = this;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5215, ASSERT_TYPE_ASSERT, "(0 <= maxGeneration && maxGeneration <= ((0x1 << 4) - 1))", (const char *)&queryFormat, "0 <= maxGeneration && maxGeneration <= MAX_BOB_GENERATION") )
    __debugbreak();
  generation = _RBX->generation;
  if ( (generation < 0 || generation > _RBX->maxGeneration) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5216, ASSERT_TYPE_ASSERT, "(0 <= generation && generation <= maxGeneration)", (const char *)&queryFormat, "0 <= generation && generation <= maxGeneration") )
    __debugbreak();
  v6 = _RBX->animCycle < 0x1FFu;
  v7 = _RBX->animCycle <= 0x1FFu;
  if ( _RBX->animCycle > 0x1FFu )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5217, ASSERT_TYPE_ASSERT, "(0 <= animCycle && animCycle <= ((0x1 << 9) - 1))", (const char *)&queryFormat, "0 <= animCycle && animCycle <= MAX_BOB_CYCLE");
    v6 = 0;
    v7 = !v8;
    if ( v8 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm0, xmm7
  }
  if ( v6 )
    goto LABEL_37;
  __asm { vcomiss xmm0, cs:__real@3f800000 }
  if ( !v7 )
  {
LABEL_37:
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5218, ASSERT_TYPE_ASSERT, "(0.0f <= amplitudeRatio && amplitudeRatio <= 1.0f)", (const char *)&queryFormat, "0.0f <= amplitudeRatio && amplitudeRatio <= 1.0f");
    v7 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vcomiss xmm0, xmm7
    vcomiss xmm0, cs:__real@3f800000
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5219, ASSERT_TYPE_ASSERT, "(0.0f <= amplitudeRatioGun && amplitudeRatioGun <= 1.0f)", (const char *)&queryFormat, "0.0f <= amplitudeRatioGun && amplitudeRatioGun <= 1.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+10h]
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmulss  xmm2, xmm1, cs:__real@447fc000
    vmulss  xmm0, xmm0, cs:__real@437f0000
    vcvttss2si edx, xmm2
    vcvttss2si edi, xmm0
  }
  v19 = _RBX->animCycle & 0x1FF | (((unsigned __int8)_EDI | (_RBX->isAnimDecreasing << 8)) << 9);
  (*outPackedBobCycle)[1] = _RBX->generation & 0xF | (16 * (_RBX->maxGeneration & 0xF | (16 * (_EDX & 0x3FF))));
  (*outPackedBobCycle)[0] = v19;
  BobCycle::BobCycle(&v27, outPackedBobCycle);
  if ( _RBX->animCycle != v27.animCycle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5244, ASSERT_TYPE_ASSERT, "( animCycle ) == ( validateBobCycle.animCycle )", "%s == %s\n\t%i, %i", "animCycle", "validateBobCycle.animCycle", _RBX->animCycle, v27.animCycle) )
    __debugbreak();
  if ( _RBX->generation != v27.generation )
  {
    LODWORD(v26) = v27.generation;
    LODWORD(v25) = _RBX->generation;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5245, ASSERT_TYPE_ASSERT, "( generation ) == ( validateBobCycle.generation )", "%s == %s\n\t%i, %i", "generation", "validateBobCycle.generation", v25, v26) )
      __debugbreak();
  }
  if ( _RBX->maxGeneration != v27.maxGeneration )
  {
    LODWORD(v26) = v27.maxGeneration;
    LODWORD(v25) = _RBX->maxGeneration;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5246, ASSERT_TYPE_ASSERT, "( maxGeneration ) == ( validateBobCycle.maxGeneration )", "%s == %s\n\t%i, %i", "maxGeneration", "validateBobCycle.maxGeneration", v25, v26) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+88h+var_38.amplitudeRatio]
    vmulss  xmm1, xmm0, cs:__real@437f0000
    vcvttss2si eax, xmm1
  }
  if ( _EDI != _EAX )
  {
    LODWORD(v26) = _EAX;
    LODWORD(v25) = _EDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5248, ASSERT_TYPE_ASSERT, "( iAmplitude ) == ( iAmplitudeValidate )", "%s == %s\n\t%i, %i", "iAmplitude", "iAmplitudeValidate", v25, v26) )
      __debugbreak();
  }
  isAnimDecreasing = _RBX->isAnimDecreasing;
  if ( isAnimDecreasing != v27.isAnimDecreasing )
  {
    LODWORD(v26) = v27.isAnimDecreasing;
    LODWORD(v25) = isAnimDecreasing;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5251, ASSERT_TYPE_ASSERT, "( isAnimDecreasing ) == ( validateBobCycle.isAnimDecreasing )", "%s == %s\n\t%i, %i", "isAnimDecreasing", "validateBobCycle.isAnimDecreasing", v25, v26) )
      __debugbreak();
  }
  __asm { vmovaps xmm7, [rsp+88h+var_18] }
}

/*
==============
PmoveSingle
==============
*/
void PmoveSingle(pmove_t *pm, __int64 a2, double a3, double a4)
{
  EffectiveStance EffectiveStance; 
  int sprintStartMaxLength; 
  bool v10; 
  int commandTime; 
  int serverTime; 
  int inputTime; 
  playerState_s *ps; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  playerState_s *v26; 
  playerState_s *v27; 
  playerState_s *v28; 
  playerState_s *v29; 
  SprintState v32; 
  __int64 v33; 
  pml_t pml; 

  v33 = -2i64;
  pml.isSkydiveTraced = 0;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12360, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12360, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF008008, "PM_PreUpdate");
  EffectiveStance = PM_GetEffectiveStance(_RDI);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+328h]
    vmovups ymmword ptr [rsp+370h+var_338.sprintRestoreDelayStart], ymm0
  }
  sprintStartMaxLength = _RDI->sprintState.sprintStartMaxLength;
  v10 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x14u);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm0, xmm0, cs:__real@3e828f5c
    vcvttss2si ecx, xmm0
  }
  _RDI->netPerf.maxExtrapolationMs = _ECX;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm1, xmm0, cs:__real@3e828f5c
    vcvttss2si ecx, xmm1
  }
  _RDI->netPerf.maxInterpolationMs = _ECX;
  BG_UpdateWeaponAnimArrays(pm->weaponMap, _RDI, pm->m_bgHandler);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    BG_AnimClearDirtyPlayerStateConditions(pm);
  PM_SetupMoveState(pm, *(double *)&_XMM1);
  PM_PmoveLocal_Init(pm, &pml);
  commandTime = pm->cmd.commandTime;
  _RDI->commandTime = commandTime;
  _RDI->commandTimeInterpolated = commandTime;
  serverTime = pm->cmd.serverTime;
  _RDI->serverTime = serverTime;
  _RDI->serverTimeInterpolated = serverTime;
  inputTime = pm->cmd.inputTime;
  _RDI->inputTime = inputTime;
  _RDI->inputTimeInterpolated = inputTime;
  _RDI->lastInput.forwardmove = pm->cmd.forwardmove;
  _RDI->lastInput.rightmove = pm->cmd.rightmove;
  _RDI->lastInput.yawmove = pm->cmd.yawmove;
  _RDI->lastInput.pitchmove = pm->cmd.pitchmove;
  __asm { vmovss  xmm1, [rbp+270h+pml.frametime]; frametime }
  PM_AdjustAimSpreadScale(pm, *(float *)&_XMM1);
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 2154, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_FIRING) && (pm->cmd.avoidForward || pm->cmd.avoidRight) )
  {
    v24 = DCONST_DVARBOOL_collAvoid_useHardLanding;
    if ( !DCONST_DVARBOOL_collAvoid_useHardLanding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_useHardLanding") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    if ( v24->current.enabled )
    {
      v25 = DCONST_DVARINT_collAvoid_hardLandingTimeMs;
      if ( !DCONST_DVARINT_collAvoid_hardLandingTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "collAvoid_hardLandingTimeMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      ps->pm_time = v25->current.integer;
      GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0xCu);
    }
  }
  PM_UpdateViewAngles(pm, &pml);
  PM_PmoveLocal_SetViewAngles(pm, &pml, a3, a4);
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
  switch ( _RDI->pm_type )
  {
    case 1:
    case 8:
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+370h+var_338.sprintRestoreDelayStart]; jumptable 0000000141073EFA cases 1,8
        vmovups ymmword ptr [rsp+370h+var_338.sprintRestoreDelayStart], ymm0
      }
      v32.sprintStartMaxLength = sprintStartMaxLength;
      PM_Linked_Update(pm, &pml, v10, &v32);
      break;
    case 2:
      Sys_ProfBeginNamedEvent(0xFF808080, "PM_NoClip_Update");
      v27 = pm->ps;
      if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11688, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      PM_ClearLadderFlag(pm->weaponMap, v27);
      PM_UpdateAimDownSightFlag(pm, &pml);
      PM_UpdateSprint(pm, &pml, a3);
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
      v28 = pm->ps;
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11759, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      PM_ClearLadderFlag(pm->weaponMap, v28);
      PM_UpdateAimDownSightFlag(pm, &pml);
      PM_UpdateSprint(pm, &pml, a3);
      PM_UpdatePlayerWalkingFlag(pm);
      PM_UpdateCustomAnimFlags(pm);
      PM_DropTimers(pm, &pml);
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 4940, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      *(_QWORD *)&v28->velocity.y = 0i64;
      v28->velocity.v[0] = 0.0;
      PM_UpdateAimDownSightLerp(pm, pml.msec);
      PM_DropAnimTimers(pm, &pml);
      Sys_ProfEndNamedEvent();
      break;
    case 5:
      Sys_ProfBeginNamedEvent(0xFF808080, "PM_Spectator_Update");
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11663, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SPECTATOR ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SPECTATOR )") )
        __debugbreak();
      v26 = pm->ps;
      if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11665, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      PM_ClearLadderFlag(pm->weaponMap, v26);
      Mantle_CancelMantle(pm->m_bgHandler, pm->weaponMap, pm->ps, pm->cmd.serverTime);
      PM_UpdateAimDownSightFlag(pm, &pml);
      PM_UpdateSprint(pm, &pml, a3);
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
      v29 = pm->ps;
      if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 11782, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      PM_ClearLadderFlag(pm->weaponMap, v29);
      PM_UpdateAimDownSightFlag(pm, &pml);
      PM_UpdateSprint(pm, &pml, a3);
      PM_UpdateAimDownSightLerp(pm, pml.msec);
      Sys_ProfEndNamedEvent();
      break;
    default:
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+370h+var_338.sprintRestoreDelayStart]; jumptable 0000000141073EFA default case, case 7
        vmovups ymmword ptr [rsp+370h+var_338.sprintRestoreDelayStart], ymm0
      }
      v32.sprintStartMaxLength = sprintStartMaxLength;
      PM_Normal_Update(pm, &pml, v10, &v32, EffectiveStance);
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

void __fastcall TurretUpdateViewClamp(pmove_t *pm, double msec)
{
  __int16 viewlocked_entNum; 
  int v13; 
  char v68; 
  __int64 v83; 
  double v84; 
  __int64 v85; 
  double v86; 
  double v87; 
  double v88; 
  double v89; 
  vec4_t out; 
  vec3_t v91; 
  vec3_t v92; 
  vec3_t v93; 
  vec4_t in2; 
  vec3_t angles; 
  vec3_t up; 
  vec4_t quat; 
  vec4_t v98; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmm11, xmm1
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9836, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9836, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  viewlocked_entNum = _RBX->viewlocked_entNum;
  if ( (unsigned __int16)viewlocked_entNum >= 0x800u )
  {
    LODWORD(v83) = viewlocked_entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 9838, ASSERT_TYPE_ASSERT, "(unsigned)( ps->viewlocked_entNum ) < (unsigned)( ( 2048 ) )", "ps->viewlocked_entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v83, 2048) )
      __debugbreak();
  }
  v13 = *(_DWORD *)&pm->m_bgHandler->PlayerTurret(pm->m_bgHandler, _RBX)->weaponIdx;
  if ( (unsigned __int16)v13 > bg_lastParsedWeaponIndex )
  {
    LODWORD(v85) = bg_lastParsedWeaponIndex;
    LODWORD(v83) = (unsigned __int16)v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v83, v85) )
      __debugbreak();
  }
  if ( !bg_weaponDefs[(unsigned __int16)v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  _RSI = bg_weaponDefs[(unsigned __int16)v13];
  if ( pm->m_bgHandler->GetEntityAngles((BgHandler *)pm->m_bgHandler, _RBX->viewlocked_entNum, &angles) )
  {
    __asm
    {
      vmovaps [rsp+200h+var_38+8], xmm6
      vmovaps [rsp+200h+var_68+8], xmm9
    }
    AngleVectors(&angles, NULL, NULL, &up);
    AnglesToAxis(&_RBX->viewangles, &axis);
    GenerateAxisFromUpVector(&up, &axis, &outAxis);
    AxisToQuat(&outAxis, &out);
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+0C54h]
      vaddss  xmm0, xmm1, dword ptr [rsi+0C50h]
      vmulss  xmm0, xmm0, cs:__real@3f000000
      vsubss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rbp+100h+var_150], xmm1
      vmovss  xmm2, dword ptr [rsi+0C48h]
      vaddss  xmm0, xmm2, dword ptr [rsi+0C4Ch]
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vsubss  xmm2, xmm2, xmm1
      vxorps  xmm9, xmm9, xmm9
      vmovss  dword ptr [rbp+100h+var_150+4], xmm2
      vmovss  dword ptr [rbp+100h+var_150+8], xmm9
    }
    AnglesToQuat(&v92, &quat);
    if ( _RSI->softLeftRightArc )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rbp+100h+out]
        vmovss  xmm6, dword ptr [rbp+100h+out+4]
        vmovaps [rsp+200h+var_48+8], xmm7
        vmovss  xmm7, dword ptr [rbp+100h+out+8]
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmovaps [rsp+200h+var_58+8], xmm8
        vmovss  xmm8, dword ptr [rbp+100h+out+0Ch]
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm8, xmm8
        vmovaps [rsp+200h+var_78+8], xmm10
        vmovss  xmm10, cs:__real@3f800000
        vaddss  xmm2, xmm3, xmm0
        vsubss  xmm1, xmm2, xmm10
        vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm1, cs:__real@3b03126f
        vsqrtss xmm0, xmm2, xmm2
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  qword ptr [rsp+48h], xmm1
        vcvtss2sd xmm2, xmm8, xmm8
        vmovsd  [rsp+200h+var_1C0], xmm2
        vcvtss2sd xmm3, xmm7, xmm7
        vmovsd  [rsp+200h+var_1C8], xmm3
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+200h+var_1D0], xmm0
        vcvtss2sd xmm4, xmm5, xmm5
        vmovsd  [rsp+200h+var_1D8], xmm4
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 38, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v84, v86, v87, v88, v89) )
        __debugbreak();
      __asm
      {
        vmovss  xmm5, dword ptr [rbp+100h+out]
        vmovss  xmm6, dword ptr [rbp+100h+out+4]
        vmovss  xmm7, dword ptr [rbp+100h+out+8]
        vmovss  xmm8, dword ptr [rbp+100h+out+0Ch]
        vmovss  xmm4, cs:__real@40000000
        vmulss  xmm1, xmm5, xmm7
        vmulss  xmm0, xmm6, xmm8
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm2, xmm4
        vmovss  dword ptr [rbp+100h+var_140], xmm1
        vmulss  xmm3, xmm6, xmm7
        vmulss  xmm0, xmm5, xmm8
        vsubss  xmm1, xmm3, xmm0
        vmulss  xmm2, xmm1, xmm4
        vmulss  xmm0, xmm6, xmm6
        vmovss  dword ptr [rbp+100h+var_140+4], xmm2
        vmulss  xmm3, xmm5, xmm5
        vaddss  xmm1, xmm3, xmm0
        vmulss  xmm2, xmm1, xmm4
        vsubss  xmm0, xmm10, xmm2
        vmovss  dword ptr [rbp+100h+var_140+8], xmm0
        vmovss  xmm1, dword ptr [rbx+1DCh]
        vmulss  xmm0, xmm1, cs:__real@3c8efa35; radians
      }
      AngleRadAxisToQuat(*(float *)&_XMM0, &v93, &in2);
      __asm
      {
        vmovaps xmm10, [rsp+200h+var_78+8]
        vmovaps xmm8, [rsp+200h+var_58+8]
        vmovaps xmm7, [rsp+200h+var_48+8]
      }
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+100h+out]
        vmovdqa xmmword ptr [rbp+100h+in2], xmm0
      }
    }
    QuatMultiply(&quat, &in2, &v98);
    UnitQuatToAngles(&v98, &v91);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi+1308h]; rate
      vucomiss xmm2, xmm9
      vmulss  xmm6, xmm11, cs:__real@3a83126f
      vmovss  xmm0, dword ptr [rbp+100h+var_160]; tgt
    }
    if ( !v68 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+1F8h]; cur
        vmovaps xmm3, xmm6; deltaTime
      }
      *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    }
    __asm
    {
      vmovss  dword ptr [rbx+1F8h], xmm0
      vmovss  xmm2, dword ptr [rsi+130Ch]; rate
      vmovss  xmm0, dword ptr [rbp+100h+var_160+4]; tgt
      vucomiss xmm2, xmm9
      vmovaps xmm9, [rsp+200h+var_68+8]
    }
    if ( !v68 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+1FCh]; cur
        vmovaps xmm3, xmm6; deltaTime
      }
      *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    }
    __asm
    {
      vmovss  dword ptr [rbx+1FCh], xmm0
      vmovss  xmm0, dword ptr [rbx+1F8h]; angle
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmovss  dword ptr [rbx+1F8h], xmm0
      vmovss  xmm0, dword ptr [rbx+1FCh]; angle
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmovaps xmm6, [rsp+200h+var_38+8]
      vmovss  dword ptr [rbx+1FCh], xmm0
    }
  }
  __asm { vmovaps xmm11, [rsp+200h+var_88+8] }
}

/*
==============
BobCycle::UnpackBobCycle
==============
*/
void BobCycle::UnpackBobCycle(BobCycle *this, const int (*packedBobCycle)[2])
{
  int v4; 
  int v5; 
  int v10; 
  int v11; 
  bool v15; 
  bool v16; 
  bool v17; 
  bool v20; 

  v4 = (*packedBobCycle)[1];
  v5 = (*packedBobCycle)[0] >> 9;
  this->animCycle = (*packedBobCycle)[0] & 0x1FF;
  _RBX = this;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3b808081
  }
  v10 = v4 & 0xF;
  __asm { vmovss  dword ptr [rcx+0Ch], xmm1 }
  this->generation = v10;
  this->isAnimDecreasing = BYTE1(v5) & 1;
  v11 = (v4 >> 4) & 0xF;
  __asm { vmovaps [rsp+48h+var_18], xmm7 }
  _RBX->maxGeneration = v11;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r9d
    vmulss  xmm1, xmm0, cs:__real@3a802008
    vmovss  dword ptr [rbx+10h], xmm1
  }
  if ( v10 > v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5281, ASSERT_TYPE_ASSERT, "(0 <= generation && generation <= maxGeneration)", (const char *)&queryFormat, "0 <= generation && generation <= maxGeneration") )
    __debugbreak();
  v15 = _RBX->animCycle < 0x1FFu;
  v16 = _RBX->animCycle <= 0x1FFu;
  if ( _RBX->animCycle > 0x1FFu )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5282, ASSERT_TYPE_ASSERT, "(0 <= animCycle && animCycle <= ((0x1 << 9) - 1))", (const char *)&queryFormat, "0 <= animCycle && animCycle <= MAX_BOB_CYCLE");
    v15 = 0;
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm0, xmm7
  }
  if ( v15 )
    goto LABEL_18;
  __asm { vcomiss xmm0, cs:__real@3f800000 }
  if ( !v16 )
  {
LABEL_18:
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5283, ASSERT_TYPE_ASSERT, "(0.0f <= amplitudeRatio && amplitudeRatio <= 1.0f)", (const char *)&queryFormat, "0.0f <= amplitudeRatio && amplitudeRatio <= 1.0f");
    v16 = !v20;
    if ( v20 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vcomiss xmm0, xmm7
    vcomiss xmm0, cs:__real@3f800000
  }
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 5284, ASSERT_TYPE_ASSERT, "(0.0f <= amplitudeRatioGun && amplitudeRatioGun <= 1.0f)", (const char *)&queryFormat, "0.0f <= amplitudeRatioGun && amplitudeRatioGun <= 1.0f") )
    __debugbreak();
  __asm { vmovaps xmm7, [rsp+48h+var_18] }
}

