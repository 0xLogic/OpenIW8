/*
==============
BG_CalculateAimAnimValues
==============
*/

void __fastcall BG_CalculateAimAnimValues(aimAnimValues_t *values, float fAimFactor2, float fAimFactor4, float fAimFactor6, float fAimFactor8)
{
  ?BG_CalculateAimAnimValues@@YAXAEAUaimAnimValues_t@@MMMM@Z(values, fAimFactor2, fAimFactor4, fAimFactor6, fAimFactor8);
}

/*
==============
BG_IsThrowAnim
==============
*/

bool __fastcall BG_IsThrowAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsThrowAnim@@YA_NHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_GetMeleeAnimConditionsPacked
==============
*/

int __fastcall BG_GetMeleeAnimConditionsPacked(const playerState_s *const ps)
{
  return ?BG_GetMeleeAnimConditionsPacked@@YAHQEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Player_DoControllersSetup
==============
*/

void __fastcall BG_Player_DoControllersSetup(const entityState_t *es, characterInfo_t *ci, int frametime)
{
  ?BG_Player_DoControllersSetup@@YAXPEBUentityState_t@@PEAUcharacterInfo_t@@H@Z(es, ci, frametime);
}

/*
==============
BG_GetTransitionalMoveType
==============
*/

PlayerAnimScriptMoveType __fastcall BG_GetTransitionalMoveType(aistateEnum_t state, PlayerAnimScriptMoveType currentMoveType, PlayerAnimScriptMoveType nextMoveType, SuitAnimType suitAnimIndex)
{
  return ?BG_GetTransitionalMoveType@@YA?AW4PlayerAnimScriptMoveType@@W4aistateEnum_t@@W41@1W4SuitAnimType@@@Z(state, currentMoveType, nextMoveType, suitAnimIndex);
}

/*
==============
BG_IsTurretAnim
==============
*/

bool __fastcall BG_IsTurretAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsTurretAnim@@YA_NHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_AnimationMP_FindAnimTrees
==============
*/

void __fastcall BG_AnimationMP_FindAnimTrees(int animUser)
{
  ?BG_AnimationMP_FindAnimTrees@@YAXH@Z(animUser);
}

/*
==============
BG_AnimUpdatePlayerStateMeleeConditions
==============
*/

void __fastcall BG_AnimUpdatePlayerStateMeleeConditions(pmove_t *pmove, MeleeResult result)
{
  ?BG_AnimUpdatePlayerStateMeleeConditions@@YAXPEAVpmove_t@@W4MeleeResult@@@Z(pmove, result);
}

/*
==============
BG_AnimScriptGetConditionValue
==============
*/

int __fastcall BG_AnimScriptGetConditionValue(const playerState_s *ps, int condition)
{
  return ?BG_AnimScriptGetConditionValue@@YAHPEBUplayerState_s@@H@Z(ps, condition);
}

/*
==============
BG_AnimScriptGetVehicleType
==============
*/

animScriptVehicleType_t __fastcall BG_AnimScriptGetVehicleType(const scr_string_t vehicleType)
{
  return ?BG_AnimScriptGetVehicleType@@YA?AW4animScriptVehicleType_t@@W4scr_string_t@@@Z(vehicleType);
}

/*
==============
BG_IsLadderAnim
==============
*/

int __fastcall BG_IsLadderAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsLadderAnim@@YAHHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_IsFiringAnim
==============
*/

int __fastcall BG_IsFiringAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsFiringAnim@@YAHHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_IsPrepareAnim
==============
*/

int __fastcall BG_IsPrepareAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsPrepareAnim@@YAHHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_AnimScriptIsInVehicle
==============
*/

bool __fastcall BG_AnimScriptIsInVehicle(const playerState_s *ps)
{
  return ?BG_AnimScriptIsInVehicle@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_AnimationMP_GetXAnimIndex
==============
*/

int __fastcall BG_AnimationMP_GetXAnimIndex(const BgAnimStatic *const bgameAnim, const SuitAnimType suitAnimIndex, const int animIndex)
{
  return ?BG_AnimationMP_GetXAnimIndex@@YAHQEBUBgAnimStatic@@W4SuitAnimType@@H@Z(bgameAnim, suitAnimIndex, animIndex);
}

/*
==============
BG_IsHighJumpAnim
==============
*/

bool __fastcall BG_IsHighJumpAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsHighJumpAnim@@YA_NHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_LerpOffset
==============
*/

void __fastcall BG_LerpOffset(const vec3_t *offset_goal, float maxOffsetChange, vec3_t *inOutOffset)
{
  ?BG_LerpOffset@@YAXAEBTvec3_t@@MAEAT1@@Z(offset_goal, maxOffsetChange, inOutOffset);
}

/*
==============
BG_GetSuitAnimIndexFromCharacter
==============
*/

SuitAnimType __fastcall BG_GetSuitAnimIndexFromCharacter(const characterInfo_t *ci)
{
  return ?BG_GetSuitAnimIndexFromCharacter@@YA?AW4SuitAnimType@@PEBUcharacterInfo_t@@@Z(ci);
}

/*
==============
BG_ClearCharacterDObj
==============
*/

void __fastcall BG_ClearCharacterDObj(const entityState_t *es)
{
  ?BG_ClearCharacterDObj@@YAXPEBUentityState_t@@@Z(es);
}

/*
==============
BG_AnimationMP_UpdateCharacterInfoHeightOffset
==============
*/

void __fastcall BG_AnimationMP_UpdateCharacterInfoHeightOffset(const playerState_s *ps, characterInfo_t *ci, float stepHeight, int flags, int msec)
{
  ?BG_AnimationMP_UpdateCharacterInfoHeightOffset@@YAXPEBUplayerState_s@@PEAUcharacterInfo_t@@MHH@Z(ps, ci, stepHeight, flags, msec);
}

/*
==============
BG_ClearPrepareAnim
==============
*/

void __fastcall BG_ClearPrepareAnim(const BgHandler *handler, playerState_s *ps)
{
  ?BG_ClearPrepareAnim@@YAXPEBVBgHandler@@PEAUplayerState_s@@@Z(handler, ps);
}

/*
==============
BG_UpdateMovementDir
==============
*/

void __fastcall BG_UpdateMovementDir(pmove_t *pm, pml_t *pml, int clampOnly)
{
  ?BG_UpdateMovementDir@@YAXPEAVpmove_t@@PEAUpml_t@@H@Z(pm, pml, clampOnly);
}

/*
==============
BG_AnimationMP_GetXAnimIndexForCharacter
==============
*/

int __fastcall BG_AnimationMP_GetXAnimIndexForCharacter(const BgAnimStatic *const bgameAnim, const characterInfo_t *ci, const int animIndex)
{
  return ?BG_AnimationMP_GetXAnimIndexForCharacter@@YAHQEBUBgAnimStatic@@PEBUcharacterInfo_t@@H@Z(bgameAnim, ci, animIndex);
}

/*
==============
BG_IsSceneAnim
==============
*/

bool __fastcall BG_IsSceneAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsSceneAnim@@YA_NHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_AnimationMP_IsCharacterDObjDirty
==============
*/

bool __fastcall BG_AnimationMP_IsCharacterDObjDirty(const DObj *obj, const DObjPartBits *partBits, const characterInfo_t *ci, const Weapon *r_heldWeapon, const Weapon *r_stowedWeapon, const Weapon *r_thrownWeapon, const Weapon *r_executionWeapon, const Weapon *r_accessoryWeapon, const bool usingDetonator, const bool usingExecutionProp, const bool doOptimizedEveryFrameWeaponModelCheck)
{
  return ?BG_AnimationMP_IsCharacterDObjDirty@@YA_NPEBUDObj@@PEBUDObjPartBits@@PEBUcharacterInfo_t@@AEBUWeapon@@3333_N44@Z(obj, partBits, ci, r_heldWeapon, r_stowedWeapon, r_thrownWeapon, r_executionWeapon, r_accessoryWeapon, usingDetonator, usingExecutionProp, doOptimizedEveryFrameWeaponModelCheck);
}

/*
==============
BG_GetAnimMoveTypeFlags
==============
*/

int __fastcall BG_GetAnimMoveTypeFlags(aistateEnum_t state, PlayerAnimScriptMoveType animMoveType, SuitAnimType suitAnimIndex)
{
  return ?BG_GetAnimMoveTypeFlags@@YAHW4aistateEnum_t@@W4PlayerAnimScriptMoveType@@W4SuitAnimType@@@Z(state, animMoveType, suitAnimIndex);
}

/*
==============
BG_Animation_PrintCIConditionals
==============
*/

void __fastcall BG_Animation_PrintCIConditionals(const characterInfo_t *ci, unsigned int startIndex, unsigned int endIndex, char *buffer, int bufferSize, int *bufferPos, const char *baseColor)
{
  ?BG_Animation_PrintCIConditionals@@YAXPEBUcharacterInfo_t@@IIPEADHPEAHPEBD@Z(ci, startIndex, endIndex, buffer, bufferSize, bufferPos, baseColor);
}

/*
==============
BG_CalculateYawAimFactors
==============
*/

void __fastcall BG_CalculateYawAimFactors(float yawAimAngle, float maxYawAimAngle, float *aimFactor4, float *aimFactor6)
{
  ?BG_CalculateYawAimFactors@@YAXMMPEAM0@Z(yawAimAngle, maxYawAimAngle, aimFactor4, aimFactor6);
}

/*
==============
BG_IsGestureAnim
==============
*/

bool __fastcall BG_IsGestureAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsGestureAnim@@YA_NHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_AnimUpdateTurretConditions
==============
*/

void __fastcall BG_AnimUpdateTurretConditions(characterInfo_t *ci, const Weapon *r_weapon, const bool isRemote, const bool isTurretActive)
{
  ?BG_AnimUpdateTurretConditions@@YAXPEAUcharacterInfo_t@@AEBUWeapon@@_N2@Z(ci, r_weapon, isRemote, isTurretActive);
}

/*
==============
BG_CalculateDurationIntoAnimFromLegsTimer
==============
*/

double __fastcall BG_CalculateDurationIntoAnimFromLegsTimer(int legsTimer, int animIndex, SuitAnimType suitAnimIndex)
{
  double result; 

  *(float *)&result = ?BG_CalculateDurationIntoAnimFromLegsTimer@@YAMHHW4SuitAnimType@@@Z(legsTimer, animIndex, suitAnimIndex);
  return result;
}

/*
==============
BG_AnimationMP_PlayerToEntityAnimation
==============
*/

void __fastcall BG_AnimationMP_PlayerToEntityAnimation(const playerState_s *playerState, entityState_t *entityState)
{
  ?BG_AnimationMP_PlayerToEntityAnimation@@YAXPEBUplayerState_s@@PEAUentityState_t@@@Z(playerState, entityState);
}

/*
==============
BG_AnimationMP_SetTorsoAnimation
==============
*/

void __fastcall BG_AnimationMP_SetTorsoAnimation(entityState_t *entityState, const int torsoAnim, SuitAnimType suitAnimIndex)
{
  ?BG_AnimationMP_SetTorsoAnimation@@YAXPEAUentityState_t@@HW4SuitAnimType@@@Z(entityState, torsoAnim, suitAnimIndex);
}

/*
==============
BG_IsAdditiveTorsoAnim
==============
*/

int __fastcall BG_IsAdditiveTorsoAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsAdditiveTorsoAnim@@YAHHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_IsKnockbackAnim
==============
*/

bool __fastcall BG_IsKnockbackAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsKnockbackAnim@@YA_NHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_ShouldScaleTimedAnim
==============
*/

int __fastcall BG_ShouldScaleTimedAnim(int animIndex, SuitAnimType suitAnimIndex)
{
  return ?BG_ShouldScaleTimedAnim@@YAHHW4SuitAnimType@@@Z(animIndex, suitAnimIndex);
}

/*
==============
BG_DetermineStrafeCondition
==============
*/

PlayerAnimStrafeStates __fastcall BG_DetermineStrafeCondition(pmove_t *pm, const float forwardMove, const float rightMove)
{
  return ?BG_DetermineStrafeCondition@@YA?AW4PlayerAnimStrafeStates@@PEAVpmove_t@@MM@Z(pm, forwardMove, rightMove);
}

/*
==============
BG_AnimScriptSetConditionBit
==============
*/

void __fastcall BG_AnimScriptSetConditionBit(playerState_s *ps, int condition, int value)
{
  ?BG_AnimScriptSetConditionBit@@YAXPEAUplayerState_s@@HH@Z(ps, condition, value);
}

/*
==============
BG_AnimationMP_GetSuitAnimIndex
==============
*/

SuitAnimType __fastcall BG_AnimationMP_GetSuitAnimIndex(const entityState_t *entityState)
{
  return ?BG_AnimationMP_GetSuitAnimIndex@@YA?AW4SuitAnimType@@PEBUentityState_t@@@Z(entityState);
}

/*
==============
BG_Player_DoControllersInternal
==============
*/

void __fastcall BG_Player_DoControllersInternal(const entityState_t *es, const characterInfo_t *ci, clientControllers_t *info)
{
  ?BG_Player_DoControllersInternal@@YAXPEBUentityState_t@@PEBUcharacterInfo_t@@PEAUclientControllers_t@@@Z(es, ci, info);
}

/*
==============
BG_IsLadderSlideAnim
==============
*/

int __fastcall BG_IsLadderSlideAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsLadderSlideAnim@@YAHHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_AnimScriptAnimation
==============
*/

int __fastcall BG_AnimScriptAnimation(const BgHandler *const handler, playerState_s *ps, aistateEnum_t state, PlayerAnimScriptMoveType codeMoveType, int force, int turn)
{
  return ?BG_AnimScriptAnimation@@YAHQEBVBgHandler@@PEAUplayerState_s@@W4aistateEnum_t@@W4PlayerAnimScriptMoveType@@HH@Z(handler, ps, state, codeMoveType, force, turn);
}

/*
==============
BG_AnimationMP_ResetCharacterInfoHeightOffset
==============
*/

void __fastcall BG_AnimationMP_ResetCharacterInfoHeightOffset(characterInfo_t *ci)
{
  ?BG_AnimationMP_ResetCharacterInfoHeightOffset@@YAXPEAUcharacterInfo_t@@@Z(ci);
}

/*
==============
BG_PlayerAnimation
==============
*/

void __fastcall BG_PlayerAnimation(const BgHandler *handler, const BgWeaponMap *weaponMap, const entityState_t *es, characterInfo_t *ci, const vec3_t *playerOrigin, const vec3_t *movingPlatformOrigin, const vec3_t *movingPlatformAngles)
{
  ?BG_PlayerAnimation@@YAXPEBVBgHandler@@PEBVBgWeaponMap@@PEBUentityState_t@@PEAUcharacterInfo_t@@AEBTvec3_t@@44@Z(handler, weaponMap, es, ci, playerOrigin, movingPlatformOrigin, movingPlatformAngles);
}

/*
==============
BG_LerpPackedPolarCoordsToCartesian
==============
*/

vec2_t __fastcall BG_LerpPackedPolarCoordsToCartesian(unsigned __int16 packedPolarCoordStart, unsigned __int16 packedPolarCoordFinish, const float lerpRatio)
{
  return ?BG_LerpPackedPolarCoordsToCartesian@@YA?ATvec2_t@@GGM@Z(packedPolarCoordStart, packedPolarCoordFinish, lerpRatio);
}

/*
==============
BG_IsTransitionalAnim
==============
*/

int __fastcall BG_IsTransitionalAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsTransitionalAnim@@YAHHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_AnimScriptGetVehicleSide
==============
*/

animScriptVehicleSide_t __fastcall BG_AnimScriptGetVehicleSide(const scr_string_t vehicleSide)
{
  return ?BG_AnimScriptGetVehicleSide@@YA?AW4animScriptVehicleSide_t@@W4scr_string_t@@@Z(vehicleSide);
}

/*
==============
BG_SetConditionBit
==============
*/

void __fastcall BG_SetConditionBit(characterInfo_t *ci, int condition, int value)
{
  ?BG_SetConditionBit@@YAXPEAUcharacterInfo_t@@HH@Z(ci, condition, value);
}

/*
==============
BG_MovementDirNormalize180
==============
*/

int __fastcall BG_MovementDirNormalize180(int movementDir)
{
  return ?BG_MovementDirNormalize180@@YAHH@Z(movementDir);
}

/*
==============
BG_IsThrowOrPrepareAnim
==============
*/

int __fastcall BG_IsThrowOrPrepareAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsThrowOrPrepareAnim@@YAHHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_GetConditionValue
==============
*/

int __fastcall BG_GetConditionValue(const characterInfo_t *ci, const int condition)
{
  return ?BG_GetConditionValue@@YAHPEBUcharacterInfo_t@@H@Z(ci, condition);
}

/*
==============
BG_GetConditionString
==============
*/

const char *__fastcall BG_GetConditionString(int condition, int value)
{
  return ?BG_GetConditionString@@YAPEBDHH@Z(condition, value);
}

/*
==============
BG_AnimScriptGetParachuteState
==============
*/

animScriptParachuteState_t __fastcall BG_AnimScriptGetParachuteState(const scr_string_t parachuteState)
{
  return ?BG_AnimScriptGetParachuteState@@YA?AW4animScriptParachuteState_t@@W4scr_string_t@@@Z(parachuteState);
}

/*
==============
BG_PackedPolarCoordsToCartesian
==============
*/

vec2_t __fastcall BG_PackedPolarCoordsToCartesian(unsigned __int16 packedPolarCoord)
{
  return ?BG_PackedPolarCoordsToCartesian@@YA?ATvec2_t@@G@Z(packedPolarCoord);
}

/*
==============
BG_AnimationMP_QuantizePitch
==============
*/

double __fastcall BG_AnimationMP_QuantizePitch(float pitch)
{
  double result; 

  *(float *)&result = ?BG_AnimationMP_QuantizePitch@@YAMM@Z(pitch);
  return result;
}

/*
==============
BG_AnimationMP_UpdateAgentCorpseDObj
==============
*/

void __fastcall BG_AnimationMP_UpdateAgentCorpseDObj(LocalClientNum_t localClientNum, DObj *pDObj, const BgWeaponMap *weaponMap, const entityState_t *es, characterInfo_t *ci)
{
  ?BG_AnimationMP_UpdateAgentCorpseDObj@@YAXW4LocalClientNum_t@@PEAUDObj@@PEBVBgWeaponMap@@PEBUentityState_t@@PEAUcharacterInfo_t@@@Z(localClientNum, pDObj, weaponMap, es, ci);
}

/*
==============
BG_MovementDirToDegrees
==============
*/

double __fastcall BG_MovementDirToDegrees(int movementDir)
{
  double result; 

  *(float *)&result = ?BG_MovementDirToDegrees@@YAMH@Z(movementDir);
  return result;
}

/*
==============
BG_SetConditionValue
==============
*/

void __fastcall BG_SetConditionValue(characterInfo_t *ci, int condition, unsigned __int64 value)
{
  ?BG_SetConditionValue@@YAXPEAUcharacterInfo_t@@H_K@Z(ci, condition, value);
}

/*
==============
BG_AnimationMP_FrontendInitialization
==============
*/

void __fastcall BG_AnimationMP_FrontendInitialization(animScriptData_t *scriptData)
{
  ?BG_AnimationMP_FrontendInitialization@@YAXPEAUanimScriptData_t@@@Z(scriptData);
}

/*
==============
BG_AnimationMP_UnpackPitch
==============
*/

double __fastcall BG_AnimationMP_UnpackPitch(unsigned __int16 pitchPacked)
{
  double result; 

  *(float *)&result = ?BG_AnimationMP_UnpackPitch@@YAMG@Z(pitchPacked);
  return result;
}

/*
==============
BG_ScriptedAsmDebugPrint
==============
*/

void __fastcall BG_ScriptedAsmDebugPrint(const char *message, int time, const characterInfo_t *const ci, const clientState_t *const cs)
{
  ?BG_ScriptedAsmDebugPrint@@YAXPEBDHQEBUcharacterInfo_t@@QEBUclientState_t@@@Z(message, time, ci, cs);
}

/*
==============
BG_AnimationMP_SetLegsAnimation
==============
*/

void __fastcall BG_AnimationMP_SetLegsAnimation(entityState_t *entityState, const int legsAnim, SuitAnimType suitAnimIndex)
{
  ?BG_AnimationMP_SetLegsAnimation@@YAXPEAUentityState_t@@HW4SuitAnimType@@@Z(entityState, legsAnim, suitAnimIndex);
}

/*
==============
BG_Animation_PrintConditional
==============
*/

void __fastcall BG_Animation_PrintConditional(char *buffer, int bufferSize, int *bufferPos, int conditionType, const bool formatText, const unsigned int (*value)[8], const char *baseColor)
{
  ?BG_Animation_PrintConditional@@YAXPEADHPEAHH_NPEAY07$$CBIPEBD@Z(buffer, bufferSize, bufferPos, conditionType, formatText, value, baseColor);
}

/*
==============
BG_PlayerASM_DebugOverrideAnimTimers
==============
*/

void __fastcall BG_PlayerASM_DebugOverrideAnimTimers(const BgStatic *const bgameStatic, characterInfo_t *ci, int entnum)
{
  ?BG_PlayerASM_DebugOverrideAnimTimers@@YAXQEBVBgStatic@@PEAUcharacterInfo_t@@H@Z(bgameStatic, ci, entnum);
}

/*
==============
BG_CalculatePitchAimFactors
==============
*/

void __fastcall BG_CalculatePitchAimFactors(float pitchAimAngle, float maxPitchAimAngle, float *aimFactor2, float *aimFactor8)
{
  ?BG_CalculatePitchAimFactors@@YAXMMPEAM0@Z(pitchAimAngle, maxPitchAimAngle, aimFactor2, aimFactor8);
}

/*
==============
BG_UpdateCharacterDObj_SetupCharacterInfoForReferenceList
==============
*/

void __fastcall BG_UpdateCharacterDObj_SetupCharacterInfoForReferenceList(CharacterInfoBackUpForReferenceList *backup, characterInfo_t *ci)
{
  ?BG_UpdateCharacterDObj_SetupCharacterInfoForReferenceList@@YAXAEAUCharacterInfoBackUpForReferenceList@@PEAUcharacterInfo_t@@@Z(backup, ci);
}

/*
==============
BG_GetPlayerAnimParameterNameByIndex
==============
*/

scr_string_t *__fastcall BG_GetPlayerAnimParameterNameByIndex(int paramIndex)
{
  return ?BG_GetPlayerAnimParameterNameByIndex@@YAPEAW4scr_string_t@@H@Z(paramIndex);
}

/*
==============
BG_Player_SetPlayerInfo
==============
*/

void __fastcall BG_Player_SetPlayerInfo(const DObj *obj, clientControllers_t *control, CEntPlayerInfo *info)
{
  ?BG_Player_SetPlayerInfo@@YAXPEBUDObj@@PEAUclientControllers_t@@PEAUCEntPlayerInfo@@@Z(obj, control, info);
}

/*
==============
BG_GetSuitAnimIndexFromPlayerState
==============
*/

SuitAnimType __fastcall BG_GetSuitAnimIndexFromPlayerState(const playerState_s *ps)
{
  return ?BG_GetSuitAnimIndexFromPlayerState@@YA?AW4SuitAnimType@@PEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_ClearSceneAnim
==============
*/

void __fastcall BG_ClearSceneAnim(const BgHandler *handler, playerState_s *ps)
{
  ?BG_ClearSceneAnim@@YAXPEBVBgHandler@@PEAUplayerState_s@@@Z(handler, ps);
}

/*
==============
BG_AnimPlayerVehicleOccupancyConditions
==============
*/

void __fastcall BG_AnimPlayerVehicleOccupancyConditions(const BgHandler *handler, const BgWeaponMap *weaponMap, const entityState_t *es, characterInfo_t *ci)
{
  ?BG_AnimPlayerVehicleOccupancyConditions@@YAXPEBVBgHandler@@PEBVBgWeaponMap@@PEBUentityState_t@@PEAUcharacterInfo_t@@@Z(handler, weaponMap, es, ci);
}

/*
==============
BG_GetExitOfTransitionalMoveType
==============
*/

PlayerAnimScriptMoveType __fastcall BG_GetExitOfTransitionalMoveType(aistateEnum_t state, PlayerAnimScriptMoveType movetype, SuitAnimType suitAnimIndex)
{
  return ?BG_GetExitOfTransitionalMoveType@@YA?AW4PlayerAnimScriptMoveType@@W4aistateEnum_t@@W41@W4SuitAnimType@@@Z(state, movetype, suitAnimIndex);
}

/*
==============
BG_DegreesToMovementDir
==============
*/

int __fastcall BG_DegreesToMovementDir(float degrees)
{
  return ?BG_DegreesToMovementDir@@YAHM@Z(degrees);
}

/*
==============
BG_AnimationMP_PackPitch
==============
*/

unsigned __int16 __fastcall BG_AnimationMP_PackPitch(float pitch)
{
  return ?BG_AnimationMP_PackPitch@@YAGM@Z(pitch);
}

/*
==============
BG_AnimationMP_GetPowerAnimEvent
==============
*/

PlayerAnimScriptEventType __fastcall BG_AnimationMP_GetPowerAnimEvent(pmove_t *pm)
{
  return ?BG_AnimationMP_GetPowerAnimEvent@@YA?AW4PlayerAnimScriptEventType@@PEAVpmove_t@@@Z(pm);
}

/*
==============
BG_GetCharacterWeapons
==============
*/

void __fastcall BG_GetCharacterWeapons(const BgWeaponMap *weaponMap, const entityState_t *es, const characterInfo_t *ci, Weapon *r_heldWeapon, Weapon *r_thrownWeapon, Weapon *r_stowedWeapon, Weapon *r_executionWeapon, Weapon *r_accessoryWeapon, Weapon *r_turretWeapon)
{
  ?BG_GetCharacterWeapons@@YAXPEBVBgWeaponMap@@PEBUentityState_t@@PEBUcharacterInfo_t@@AEAUWeapon@@33333@Z(weaponMap, es, ci, r_heldWeapon, r_thrownWeapon, r_stowedWeapon, r_executionWeapon, r_accessoryWeapon, r_turretWeapon);
}

/*
==============
BG_GetExposedAnimEvent
==============
*/

int __fastcall BG_GetExposedAnimEvent(const char *eventName)
{
  return ?BG_GetExposedAnimEvent@@YAHPEBD@Z(eventName);
}

/*
==============
BG_AnimationMP_GetTorsoAnimation
==============
*/

int __fastcall BG_AnimationMP_GetTorsoAnimation(const entityState_t *entityState)
{
  return ?BG_AnimationMP_GetTorsoAnimation@@YAHPEBUentityState_t@@@Z(entityState);
}

/*
==============
BG_AnimationMP_UpdateWobbleAnimParams
==============
*/

void __fastcall BG_AnimationMP_UpdateWobbleAnimParams(const BgHandler *handler, characterInfo_t *ci, const entityState_t *es)
{
  ?BG_AnimationMP_UpdateWobbleAnimParams@@YAXPEBVBgHandler@@PEAUcharacterInfo_t@@PEBUentityState_t@@@Z(handler, ci, es);
}

/*
==============
BG_IsAdsAnim
==============
*/

int __fastcall BG_IsAdsAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsAdsAnim@@YAHHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_IsKillstreakTriggerAnim
==============
*/

int __fastcall BG_IsKillstreakTriggerAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsKillstreakTriggerAnim@@YAHHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_ClearReloadAnim
==============
*/

void __fastcall BG_ClearReloadAnim(const BgHandler *handler, playerState_s *ps)
{
  ?BG_ClearReloadAnim@@YAXPEBVBgHandler@@PEAUplayerState_s@@@Z(handler, ps);
}

/*
==============
BG_AnimationMP_TransferNonWeaponPartBits
==============
*/

void __fastcall BG_AnimationMP_TransferNonWeaponPartBits(LocalClientNum_t localClientNum, const DObj *fromDObj, const characterInfo_t *fromCI, entityState_t *toEntity, DObj *toDObj, characterInfo_t *toCI)
{
  ?BG_AnimationMP_TransferNonWeaponPartBits@@YAXW4LocalClientNum_t@@PEBUDObj@@PEBUcharacterInfo_t@@PEAUentityState_t@@PEAU2@PEAU3@@Z(localClientNum, fromDObj, fromCI, toEntity, toDObj, toCI);
}

/*
==============
BG_GetMoveType
==============
*/

PlayerAnimScriptMoveType __fastcall BG_GetMoveType(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_GetMoveType@@YA?AW4PlayerAnimScriptMoveType@@HW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_ClearDropWeaponAnim
==============
*/

void __fastcall BG_ClearDropWeaponAnim(const BgHandler *handler, playerState_s *ps)
{
  ?BG_ClearDropWeaponAnim@@YAXPEBVBgHandler@@PEAUplayerState_s@@@Z(handler, ps);
}

/*
==============
BG_ClearTorsoAnim
==============
*/

void __fastcall BG_ClearTorsoAnim(const BgHandler *handler, playerState_s *ps)
{
  ?BG_ClearTorsoAnim@@YAXPEBVBgHandler@@PEAUplayerState_s@@@Z(handler, ps);
}

/*
==============
BG_IsRootMotionAnim
==============
*/

int __fastcall BG_IsRootMotionAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsRootMotionAnim@@YAHHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_IsProneAnim
==============
*/

int __fastcall BG_IsProneAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsProneAnim@@YAHHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_AnimationMP_InitializeAnimations
==============
*/

void BG_AnimationMP_InitializeAnimations(void)
{
  ?BG_AnimationMP_InitializeAnimations@@YAXXZ();
}

/*
==============
BG_IsSlideAnim
==============
*/

int __fastcall BG_IsSlideAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsSlideAnim@@YAHHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_ClearLegsAnim
==============
*/

void __fastcall BG_ClearLegsAnim(const BgHandler *handler, playerState_s *ps)
{
  ?BG_ClearLegsAnim@@YAXPEBVBgHandler@@PEAUplayerState_s@@@Z(handler, ps);
}

/*
==============
BG_AnimationMP_GetAnimationForIndex
==============
*/

const PlayerAnimEntry *__fastcall BG_AnimationMP_GetAnimationForIndex(int index, SuitAnimType suitAnimIndex)
{
  return ?BG_AnimationMP_GetAnimationForIndex@@YAPEBUPlayerAnimEntry@@HW4SuitAnimType@@@Z(index, suitAnimIndex);
}

/*
==============
BG_Animation_PrintScriptItemConditionals
==============
*/

void __fastcall BG_Animation_PrintScriptItemConditionals(const PlayerAnimScriptItem *scriptItem, char *buffer, int bufferSize, int *bufferPos, const char *baseColor)
{
  ?BG_Animation_PrintScriptItemConditionals@@YAXPEBUPlayerAnimScriptItem@@PEADHPEAHPEBD@Z(scriptItem, buffer, bufferSize, bufferPos, baseColor);
}

/*
==============
BG_GetXAnimIndexForCharacterInternal
==============
*/

int __fastcall BG_GetXAnimIndexForCharacterInternal(const characterInfo_t *ci, const PlayerAnimScript *scriptData, const int animIndex)
{
  return ?BG_GetXAnimIndexForCharacterInternal@@YAHPEBUcharacterInfo_t@@PEBUPlayerAnimScript@@H@Z(ci, scriptData, animIndex);
}

/*
==============
BG_AnimationMP_GetLegsAnimation
==============
*/

int __fastcall BG_AnimationMP_GetLegsAnimation(const entityState_t *entityState)
{
  return ?BG_AnimationMP_GetLegsAnimation@@YAHPEBUentityState_t@@@Z(entityState);
}

/*
==============
BG_AnimationMP_UpdateWobble
==============
*/

void __fastcall BG_AnimationMP_UpdateWobble(const BgHandler *handler, characterInfo_t *ci, const entityState_t *es)
{
  ?BG_AnimationMP_UpdateWobble@@YAXPEBVBgHandler@@PEAUcharacterInfo_t@@PEBUentityState_t@@@Z(handler, ci, es);
}

/*
==============
BG_AnimClearDirtyPlayerStateConditions
==============
*/

void __fastcall BG_AnimClearDirtyPlayerStateConditions(pmove_t *pmove)
{
  ?BG_AnimClearDirtyPlayerStateConditions@@YAXPEAVpmove_t@@@Z(pmove);
}

/*
==============
BG_AnimationMP_RegisterSuitAnimIndexes
==============
*/

void __fastcall BG_AnimationMP_RegisterSuitAnimIndexes(bool isFullInit)
{
  ?BG_AnimationMP_RegisterSuitAnimIndexes@@YAX_N@Z(isFullInit);
}

/*
==============
BG_AnimationMP_FindAnims
==============
*/

void BG_AnimationMP_FindAnims(void)
{
  ?BG_AnimationMP_FindAnims@@YAXXZ();
}

/*
==============
BG_IsAirAnim
==============
*/

bool __fastcall BG_IsAirAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsAirAnim@@YA_NHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_AnimationMP_LoadWeaponAnims
==============
*/

void __fastcall BG_AnimationMP_LoadWeaponAnims(animScriptData_t *scriptData)
{
  ?BG_AnimationMP_LoadWeaponAnims@@YAXPEAUanimScriptData_t@@@Z(scriptData);
}

/*
==============
BG_IsSprintAnim
==============
*/

bool __fastcall BG_IsSprintAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsSprintAnim@@YA_NHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_PlayerMP_SetWeaponPackageAnims
==============
*/

void __fastcall BG_PlayerMP_SetWeaponPackageAnims(const Weapon *r_heldWeapon, const Weapon *r_executionWeapon, characterInfo_t *ci, const entityState_t *es, const XAnimTree *tree)
{
  ?BG_PlayerMP_SetWeaponPackageAnims@@YAXAEBUWeapon@@0PEAUcharacterInfo_t@@PEBUentityState_t@@PEBUXAnimTree@@@Z(r_heldWeapon, r_executionWeapon, ci, es, tree);
}

/*
==============
BG_IsCrouchingAnim
==============
*/

int __fastcall BG_IsCrouchingAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsCrouchingAnim@@YAHHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_PlayerAnimation_VerifyAnim
==============
*/

void __fastcall BG_PlayerAnimation_VerifyAnim(XAnimTree *pAnimTree, lerpFrame_t *lf, characterInfo_t *ci, const SuitAnimType suitAnimIndex)
{
  ?BG_PlayerAnimation_VerifyAnim@@YAXPEAUXAnimTree@@PEAUlerpFrame_t@@PEAUcharacterInfo_t@@W4SuitAnimType@@@Z(pAnimTree, lf, ci, suitAnimIndex);
}

/*
==============
BG_AnimFindScript
==============
*/

int __fastcall BG_AnimFindScript(int characterNum, const SuitAnimType suitAnimIndex, aistateEnum_t state, PlayerAnimScriptMoveType movetype, const PlayerAnimScriptEntry **script, const PlayerAnimScriptItem **scriptItem)
{
  return ?BG_AnimFindScript@@YAHHW4SuitAnimType@@W4aistateEnum_t@@W4PlayerAnimScriptMoveType@@PEAPEBUPlayerAnimScriptEntry@@PEAPEBUPlayerAnimScriptItem@@@Z(characterNum, suitAnimIndex, state, movetype, script, scriptItem);
}

/*
==============
BG_Player_DoControllersScripted
==============
*/

void __fastcall BG_Player_DoControllersScripted(const entityState_t *es, const characterInfo_t *ci, clientControllers_t *info)
{
  ?BG_Player_DoControllersScripted@@YAXPEBUentityState_t@@PEBUcharacterInfo_t@@PEAUclientControllers_t@@@Z(es, ci, info);
}

/*
==============
BG_UpdateCharacterDObj_RestoreCharacterInfoAfterReferenceList
==============
*/

void __fastcall BG_UpdateCharacterDObj_RestoreCharacterInfoAfterReferenceList(const CharacterInfoBackUpForReferenceList *backup, characterInfo_t *ci)
{
  ?BG_UpdateCharacterDObj_RestoreCharacterInfoAfterReferenceList@@YAXAEBUCharacterInfoBackUpForReferenceList@@PEAUcharacterInfo_t@@@Z(backup, ci);
}

/*
==============
BG_AnimationMP_FilterCorpseAttachmentModels
==============
*/

void __fastcall BG_AnimationMP_FilterCorpseAttachmentModels(char (*attachModelNames)[9][64], char (*attachModelTagNames)[9][64])
{
  ?BG_AnimationMP_FilterCorpseAttachmentModels@@YAXAEAY18EA@D0@Z(attachModelNames, attachModelTagNames);
}

/*
==============
BG_AnimScriptEvent
==============
*/

int __fastcall BG_AnimScriptEvent(const BgHandler *const handler, playerState_s *ps, PlayerAnimScriptEventType event, int isContinue, int force, unsigned int *holdrand)
{
  return ?BG_AnimScriptEvent@@YAHQEBVBgHandler@@PEAUplayerState_s@@W4PlayerAnimScriptEventType@@HHPEAI@Z(handler, ps, event, isContinue, force, holdrand);
}

/*
==============
BG_AnimScriptGetVehicleSeat
==============
*/

animScriptVehicleSeat_t __fastcall BG_AnimScriptGetVehicleSeat(const scr_string_t vehicleSeat)
{
  return ?BG_AnimScriptGetVehicleSeat@@YA?AW4animScriptVehicleSeat_t@@W4scr_string_t@@@Z(vehicleSeat);
}

/*
==============
BG_AnimScriptSetConditionValue
==============
*/

void __fastcall BG_AnimScriptSetConditionValue(playerState_s *ps, int condition, int value)
{
  ?BG_AnimScriptSetConditionValue@@YAXPEAUplayerState_s@@HH@Z(ps, condition, value);
}

/*
==============
BG_GetAnimMoveSpeed
==============
*/

int __fastcall BG_GetAnimMoveSpeed(const playerState_s *ps, characterInfo_t *ci, const PmoveASMArgs *pmoveArgs)
{
  return ?BG_GetAnimMoveSpeed@@YAHPEBUplayerState_s@@PEAUcharacterInfo_t@@AEBUPmoveASMArgs@@@Z(ps, ci, pmoveArgs);
}

/*
==============
BG_IsFastDurationAnim
==============
*/

bool __fastcall BG_IsFastDurationAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsFastDurationAnim@@YA_NHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_UpdateCharacterDObj
==============
*/

void __fastcall BG_UpdateCharacterDObj(LocalClientNum_t localClientNum, DObj *pDObj, const entityState_t *es, characterInfo_t *ci, const int attachIgnoreCollision, const Weapon *r_heldWeapon, const Weapon *r_stowedWeapon, const Weapon *r_thrownWeapon, const Weapon *r_executionWeapon, const Weapon *r_accessoryWeapon, const Weapon *r_turretWeapon, const bool forceUpdate)
{
  ?BG_UpdateCharacterDObj@@YAXW4LocalClientNum_t@@PEAUDObj@@PEBUentityState_t@@PEAUcharacterInfo_t@@HAEBUWeapon@@44444_N@Z(localClientNum, pDObj, es, ci, attachIgnoreCollision, r_heldWeapon, r_stowedWeapon, r_thrownWeapon, r_executionWeapon, r_accessoryWeapon, r_turretWeapon, forceUpdate);
}

/*
==============
BG_AnimFindScriptEvent
==============
*/

int __fastcall BG_AnimFindScriptEvent(int clientNum, const SuitAnimType suitAnimIndex, PlayerAnimScriptEventType event, const PlayerAnimScriptEntry **script, const PlayerAnimScriptItem **scriptItem)
{
  return ?BG_AnimFindScriptEvent@@YAHHW4SuitAnimType@@W4PlayerAnimScriptEventType@@PEAPEBUPlayerAnimScriptEntry@@PEAPEBUPlayerAnimScriptItem@@@Z(clientNum, suitAnimIndex, event, script, scriptItem);
}

/*
==============
BG_AnimationMP_ShutdownAnimations
==============
*/

void BG_AnimationMP_ShutdownAnimations(void)
{
  ?BG_AnimationMP_ShutdownAnimations@@YAXXZ();
}

/*
==============
BG_IsRunAnim
==============
*/

bool __fastcall BG_IsRunAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsRunAnim@@YA_NHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_IsDropWeaponAnim
==============
*/

int __fastcall BG_IsDropWeaponAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsDropWeaponAnim@@YAHHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_AnimationMP_GetGrenadeEvent
==============
*/

PlayerAnimScriptEventType __fastcall BG_AnimationMP_GetGrenadeEvent(const bool isThrow)
{
  return ?BG_AnimationMP_GetGrenadeEvent@@YA?AW4PlayerAnimScriptEventType@@_N@Z(isThrow);
}

/*
==============
BG_IsAnyJumpAnim
==============
*/

bool __fastcall BG_IsAnyJumpAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsAnyJumpAnim@@YA_NHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_LerpAngles
==============
*/

void __fastcall BG_LerpAngles(const vec3_t *angles_goal, float maxAngleChange, vec3_t *inOutAngles)
{
  ?BG_LerpAngles@@YAXAEBTvec3_t@@MAEAT1@@Z(angles_goal, maxAngleChange, inOutAngles);
}

/*
==============
BG_AnimationMP_ShutdownSuitAnimIndexes
==============
*/

void BG_AnimationMP_ShutdownSuitAnimIndexes(void)
{
  ?BG_AnimationMP_ShutdownSuitAnimIndexes@@YAXXZ();
}

/*
==============
BG_SetCondition
==============
*/

void __fastcall BG_SetCondition(characterInfo_t *ci, int condition, const unsigned int *value)
{
  ?BG_SetCondition@@YAXPEAUcharacterInfo_t@@HQEBI@Z(ci, condition, value);
}

/*
==============
BG_IsStrafeAnim
==============
*/

bool __fastcall BG_IsStrafeAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsStrafeAnim@@YA_NHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_AnimationMP_UpdatePlayerDObj
==============
*/

void __fastcall BG_AnimationMP_UpdatePlayerDObj(LocalClientNum_t localClientNum, DObj *pDObj, const BgWeaponMap *weaponMap, const entityState_t *es, characterInfo_t *ci, int attachIgnoreCollision)
{
  ?BG_AnimationMP_UpdatePlayerDObj@@YAXW4LocalClientNum_t@@PEAUDObj@@PEBVBgWeaponMap@@PEBUentityState_t@@PEAUcharacterInfo_t@@H@Z(localClientNum, pDObj, weaponMap, es, ci, attachIgnoreCollision);
}

/*
==============
BG_IsReloadAnim
==============
*/

int __fastcall BG_IsReloadAnim(int animNum, SuitAnimType suitAnimIndex)
{
  return ?BG_IsReloadAnim@@YAHHW4SuitAnimType@@@Z(animNum, suitAnimIndex);
}

/*
==============
BG_CalculateAnimRateFromCharacterSpeed
==============
*/

double __fastcall BG_CalculateAnimRateFromCharacterSpeed(float characterSpeed, int animIndex, float durationIntoAnim, SuitAnimType suitAnimIndex)
{
  double result; 

  *(float *)&result = ?BG_CalculateAnimRateFromCharacterSpeed@@YAMMHMW4SuitAnimType@@@Z(characterSpeed, animIndex, durationIntoAnim, suitAnimIndex);
  return result;
}

/*
==============
BG_AnimUpdatePlayerStateConditions
==============
*/

void __fastcall BG_AnimUpdatePlayerStateConditions(pmove_t *pmove, pml_t *pml)
{
  ?BG_AnimUpdatePlayerStateConditions@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pmove, pml);
}

/*
==============
BG_AnimClearDirtyPlayerStateConditions
==============
*/
void BG_AnimClearDirtyPlayerStateConditions(pmove_t *pmove)
{
  playerState_s *ps; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4227, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  ps = pmove->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4230, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, ps->clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4234, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  *(_QWORD *)CharacterInfo->dirtyConditions = 0i64;
  *(_QWORD *)&CharacterInfo->dirtyConditions[2] = 0i64;
  *(_QWORD *)&CharacterInfo->dirtyConditions[4] = 0i64;
  *(_QWORD *)&CharacterInfo->dirtyConditions[6] = 0i64;
}

/*
==============
BG_AnimFindScript
==============
*/
__int64 BG_AnimFindScript(int characterNum, const SuitAnimType suitAnimIndex, aistateEnum_t state, PlayerAnimScriptMoveType movetype, const PlayerAnimScriptEntry **script, const PlayerAnimScriptItem **scriptItem)
{
  __int64 v7; 
  __int64 v8; 
  CgStatic *ActiveStatics; 
  __int64 v11; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v13; 
  const PlayerAnimScript *v14; 
  const PlayerAnimScriptEntry *v15; 
  const PlayerAnimScriptItem *ValidItem; 
  const dvar_t *v17; 
  const dvar_t *v19; 
  __int64 v20; 
  __int64 v21; 

  v7 = movetype;
  v8 = suitAnimIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2276, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !script && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2277, ASSERT_TYPE_ASSERT, "(script)", (const char *)&queryFormat, "script") )
    __debugbreak();
  if ( !scriptItem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2278, ASSERT_TYPE_ASSERT, "(scriptItem)", (const char *)&queryFormat, "scriptItem") )
    __debugbreak();
  if ( state )
  {
    LODWORD(v20) = state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2279, ASSERT_TYPE_ASSERT, "( ( state == AISTATE_COMBAT ) )", "( state ) = %i", v20) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= 0x80 )
  {
    LODWORD(v20) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2280, ASSERT_TYPE_ASSERT, "(unsigned)( movetype ) < (unsigned)( NUM_ANIM_MOVETYPES )", "movetype doesn't index NUM_ANIM_MOVETYPES\n\t%i not in [0, %i)", v20, 128) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= 4 )
  {
    LODWORD(v21) = 4;
    LODWORD(v20) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2281, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  *script = NULL;
  *scriptItem = NULL;
  ActiveStatics = (CgStatic *)BgStatic::GetActiveStatics();
  v11 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2288, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( ActiveStatics->IsClient(ActiveStatics) )
    CharacterInfo = CgStatic::GetCharacterInfo(ActiveStatics, characterNum);
  else
    CharacterInfo = (const characterInfo_t *)ActiveStatics->GetClientInfo(ActiveStatics, characterNum);
  v13 = CharacterInfo;
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2291, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  v14 = *(const PlayerAnimScript **)(v11 + 8 * v8);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2294, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  v15 = &v14->scriptAnims[v7];
  *script = v15;
  ValidItem = BG_FirstValidItem(v13, v14, v15);
  *scriptItem = ValidItem;
  if ( !ValidItem )
  {
    v17 = DVARINT_xanim_debug;
    if ( !DVARINT_xanim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.integer >= 1 )
    {
      Com_Printf(19, "Failed playing animation, finding new animation\n");
      return 0i64;
    }
    return 0i64;
  }
  if ( !ValidItem->commandCount )
  {
    v19 = DVARINT_xanim_debug;
    if ( !DVARINT_xanim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( v19->current.integer >= 1 )
      Com_Printf(19, "Animation has no commands associated, finding new animation\n");
    return 0i64;
  }
  return 1i64;
}

/*
==============
BG_AnimFindScriptEvent
==============
*/
__int64 BG_AnimFindScriptEvent(int clientNum, const SuitAnimType suitAnimIndex, PlayerAnimScriptEventType event, const PlayerAnimScriptEntry **script, const PlayerAnimScriptItem **scriptItem)
{
  __int64 v6; 
  __int64 v7; 
  CgStatic *ActiveStatics; 
  __int64 v10; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v12; 
  const PlayerAnimScript *v13; 
  const PlayerAnimScriptEntry *v14; 
  const PlayerAnimScriptItem *ValidItem; 
  __int64 v17; 
  __int64 v18; 

  v6 = event;
  v7 = suitAnimIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2639, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !script && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2640, ASSERT_TYPE_ASSERT, "(script)", (const char *)&queryFormat, "script") )
    __debugbreak();
  if ( !scriptItem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2641, ASSERT_TYPE_ASSERT, "(scriptItem)", (const char *)&queryFormat, "scriptItem") )
    __debugbreak();
  if ( (unsigned int)v6 >= 0x5C )
  {
    LODWORD(v17) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2642, ASSERT_TYPE_ASSERT, "(unsigned)( event ) < (unsigned)( NUM_ANIM_EVENTTYPES )", "event doesn't index NUM_ANIM_EVENTTYPES\n\t%i not in [0, %i)", v17, 92) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= 4 )
  {
    LODWORD(v18) = 4;
    LODWORD(v17) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2643, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  *script = NULL;
  *scriptItem = NULL;
  ActiveStatics = (CgStatic *)BgStatic::GetActiveStatics();
  v10 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2650, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( ActiveStatics->IsClient(ActiveStatics) )
    CharacterInfo = CgStatic::GetCharacterInfo(ActiveStatics, clientNum);
  else
    CharacterInfo = (const characterInfo_t *)ActiveStatics->GetClientInfo(ActiveStatics, clientNum);
  v12 = CharacterInfo;
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2653, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  v13 = *(const PlayerAnimScript **)(v10 + 8 * v7);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2656, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  v14 = &v13->scriptEvents[v6];
  if ( !v14->itemCount )
    return 0i64;
  ValidItem = BG_FirstValidItem(v12, v13, &v13->scriptEvents[v6]);
  if ( !ValidItem || !ValidItem->commandCount )
    return 0i64;
  *script = v14;
  *scriptItem = ValidItem;
  return 1i64;
}

/*
==============
BG_AnimPlayerConditions
==============
*/
void BG_AnimPlayerConditions(const BgHandler *handler, const BgWeaponMap *weaponMap, const entityState_t *es, characterInfo_t *ci)
{
  const BgHandler *v8; 
  const Weapon *WeaponForEntity; 
  const Weapon *OffHandWeaponForPlayerEntity; 
  int PlayerAnimType; 
  int WeaponClassForAnimCondition; 
  int v13; 
  unsigned __int64 v14; 
  int AltModePlayerAnimType; 
  bool IsAdsEntity; 
  bool IsTurretActiveFlags; 
  bool IsRemoteTurretActiveFlags; 
  bool v19; 
  bool v20; 
  unsigned __int64 v21; 
  const dvar_t *v22; 
  unsigned __int64 v23; 
  PlayerASM_AnimSlot v24; 
  PlayerASM_AnimSlot v25; 
  unsigned __int64 v26; 
  BgStatic *ActiveStatics; 
  __int64 v28; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  __int64 v30; 
  __int64 v31; 
  unsigned int v32; 
  __int64 v33; 
  __int64 v34; 
  _DWORD *v35; 
  unsigned int v36; 
  __int64 v37; 
  int scriptedAnimType; 
  unsigned __int16 weaponIdx; 
  const WeaponDef *v40; 
  const dvar_t *v42; 
  const dvar_t *v43; 
  unsigned __int64 v44; 
  bool v45; 
  unsigned __int64 v46; 
  bool WeaponAltReloadAnimsEnabled; 
  AnimLinkedToType animLinkedToType; 
  const CarryObjectDef *CarryObjectDef; 
  const SuitDef *SuitDef; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  unsigned int Animset; 
  SuitAnimType SuitAnimIndex; 
  unsigned int value[2]; 
  __int128 v59; 
  __int64 v60; 

  v8 = handler;
  BG_CheckThread();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, es);
  OffHandWeaponForPlayerEntity = BG_GetOffHandWeaponForPlayerEntity(weaponMap, es);
  if ( BG_GetConditionBit(ci, 3) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8447, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED") )
    __debugbreak();
  if ( BG_GetConditionBit(ci, 3) >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8448, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES") )
    __debugbreak();
  PlayerAnimType = BG_WeaponGetPlayerAnimType(WeaponForEntity, es->inAltWeaponMode);
  BG_SetConditionBit(ci, 0, PlayerAnimType);
  BG_SetConditionBit(ci, 15, PlayerAnimType);
  WeaponClassForAnimCondition = BG_GetWeaponClassForAnimCondition(es, WeaponForEntity, 0);
  BG_SetConditionBit(ci, 1, WeaponClassForAnimCondition);
  v13 = BG_WeaponGetPlayerAnimType(OffHandWeaponForPlayerEntity, 0);
  BG_SetConditionBit(ci, 55, v13);
  BG_SetConditionValue(ci, 12, ci->dualWielding);
  BG_SetConditionValue(ci, 44, ci->skydiveAnimState);
  BG_SetConditionValue(ci, 60, ci->lastStandReviving);
  BG_SetConditionValue(ci, 61, ci->lastStandSelfReviving);
  v14 = 0i64;
  if ( es->inAltWeaponMode )
    AltModePlayerAnimType = BG_WeaponGetAltModePlayerAnimType(WeaponForEntity);
  else
    AltModePlayerAnimType = 0;
  BG_SetConditionBit(ci, 52, AltModePlayerAnimType);
  BG_SetConditionValue(ci, 24, ci->offhandShieldDeployed);
  IsAdsEntity = BG_IsAdsEntity(es);
  BG_SetConditionValue(ci, 6, IsAdsEntity);
  IsTurretActiveFlags = BG_IsTurretActiveFlags(&es->lerp.eFlags);
  IsRemoteTurretActiveFlags = BG_IsRemoteTurretActiveFlags(&es->lerp.eFlags);
  BG_AnimUpdateTurretConditions(ci, WeaponForEntity, IsRemoteTurretActiveFlags, IsTurretActiveFlags);
  if ( !v8->IsServer((BgHandler *)v8) )
  {
    v19 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 3u);
    v20 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 4u);
    if ( ((es->eType - 1) & 0xFFEF) != 0 || (LOBYTE(es->lerp.u.vehicle.bodyPitch) & 0x10) == 0 )
    {
      if ( v20 )
        v21 = 2i64;
      else
        v21 = v19;
    }
    else
    {
      v21 = 3i64;
    }
    _XMM0 = 0i64;
    if ( ci->mountAnimation.fraction > 0.0 )
    {
      v22 = DCONST_DVARFLT_mount_wm_pivot_height_crouch_threshold;
      if ( !DCONST_DVARFLT_mount_wm_pivot_height_crouch_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_wm_pivot_height_crouch_threshold") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      _XMM0 = LODWORD(ci->mount.pivotHeight);
      v21 = *(float *)&_XMM0 < v22->current.value;
    }
    BG_SetConditionValue(ci, 4, v21);
    v23 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0xAu);
    BG_SetConditionValue(ci, 5, v23);
  }
  BG_AnimPlayerConditionsMantle(es, ci);
  BG_SetConditionValue(ci, 16, ci->isFemale);
  if ( PlayerASM_IsEnabled() )
  {
    if ( ci->playerASMAnim.animSet != BG_PlayerASM_GetAnimset(es) )
    {
      Animset = BG_PlayerASM_GetAnimset(es);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8509, ASSERT_TYPE_ASSERT, "( ci->playerASMAnim.animSet ) == ( BG_PlayerASM_GetAnimset( es ) )", "%s == %s\n\t%i, %i", "ci->playerASMAnim.animSet", "BG_PlayerASM_GetAnimset( es )", ci->playerASMAnim.animSet, Animset) )
        __debugbreak();
    }
    if ( ci->playerAnim.legsAnim != BG_PlayerASM_GetAnim(es, MOVEMENT) )
    {
      LODWORD(v54) = BG_PlayerASM_GetAnim(es, MOVEMENT);
      LODWORD(v53) = ci->playerAnim.legsAnim;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8510, ASSERT_TYPE_ASSERT, "( ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::PRIMARY )] ) == ( BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::PRIMARY ) )", "%s == %s\n\t%i, %i", "ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::PRIMARY )]", "BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::PRIMARY )", v53, v54) )
        __debugbreak();
    }
    LOBYTE(v24) = 1;
    if ( ci->playerAnim.torsoAnim != BG_PlayerASM_GetAnim(es, v24) )
    {
      LOBYTE(v25) = 1;
      LODWORD(v54) = BG_PlayerASM_GetAnim(es, v25);
      LODWORD(v53) = ci->playerAnim.torsoAnim;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8511, ASSERT_TYPE_ASSERT, "( ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::SECONDARY )] ) == ( BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::SECONDARY ) )", "%s == %s\n\t%i, %i", "ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::SECONDARY )]", "BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::SECONDARY )", v53, v54) )
        __debugbreak();
    }
    v26 = 0i64;
  }
  else
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    v28 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
    if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8519, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(ci);
    v30 = SuitAnimIndexFromCharacter;
    if ( (unsigned int)SuitAnimIndexFromCharacter >= NUM_ANIM_SUIT_STATE )
    {
      LODWORD(v52) = 4;
      LODWORD(v51) = SuitAnimIndexFromCharacter;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8522, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v51, v52) )
        __debugbreak();
    }
    v31 = *(_QWORD *)(v28 + 8 * v30);
    if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8525, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
      __debugbreak();
    if ( ci->playerASMAnim.animSet != BG_AnimationMP_GetSuitAnimIndex(es) )
    {
      SuitAnimIndex = BG_AnimationMP_GetSuitAnimIndex(es);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8527, ASSERT_TYPE_ASSERT, "( ci->playerAnim.suitAnimIndex ) == ( BG_AnimationMP_GetSuitAnimIndex( es ) )", "%s == %s\n\t%i, %i", "ci->playerAnim.suitAnimIndex", "BG_AnimationMP_GetSuitAnimIndex( es )", ci->playerASMAnim.animSet, SuitAnimIndex) )
        __debugbreak();
    }
    if ( ci->playerAnim.legsAnim != BG_AnimationMP_GetLegsAnimation(es) )
    {
      LODWORD(v54) = BG_AnimationMP_GetLegsAnimation(es);
      LODWORD(v53) = ci->playerAnim.legsAnim;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8528, ASSERT_TYPE_ASSERT, "( ci->playerAnim.legsAnim ) == ( static_cast<uint>(BG_AnimationMP_GetLegsAnimation( es )) )", "%s == %s\n\t%i, %i", "ci->playerAnim.legsAnim", "static_cast<uint>(BG_AnimationMP_GetLegsAnimation( es ))", v53, v54) )
        __debugbreak();
    }
    v32 = ci->playerAnim.legsAnim & 0xFFFFEFFF;
    if ( v32 >= *(_DWORD *)(v31 + 8) )
    {
      LODWORD(v52) = *(_DWORD *)(v31 + 8);
      LODWORD(v51) = ci->playerAnim.legsAnim & 0xFFFFEFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8535, ASSERT_TYPE_ASSERT, "(unsigned)( legsAnim ) < (unsigned)( playerAnim->animationCount )", "legsAnim doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v51, v52) )
        __debugbreak();
    }
    v33 = 104i64 * (int)v32;
    v34 = *(_QWORD *)(v31 + 48);
    v35 = (_DWORD *)(v34 + v33 + 40);
    if ( v34 + v33 == -40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.h", 994, ASSERT_TYPE_ASSERT, "(array)", (const char *)&queryFormat, "array") )
      __debugbreak();
    v36 = 0;
    while ( !*v35 )
    {
      ++v36;
      ++v35;
      if ( v36 >= 8 )
        goto LABEL_66;
    }
    if ( !BG_CheckAnyBits((const unsigned int *)(*(_QWORD *)(v31 + 48) + v33 + 40), ci->clientConditions[3]) )
    {
      BG_SetCondition(ci, 3, (const unsigned int *)(*(_QWORD *)(v31 + 48) + v33 + 40));
      if ( BG_GetConditionBit(ci, 3) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8545, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED") )
        __debugbreak();
      if ( BG_GetConditionBit(ci, 3) >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8546, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES") )
        __debugbreak();
    }
LABEL_66:
    v37 = *(_QWORD *)(*(_QWORD *)(v31 + 48) + v33 + 16);
    v8 = handler;
    if ( (v37 & 0x20) != 0 )
      v26 = 1i64;
    else
      v26 = ((unsigned __int64)(unsigned __int8)v37 >> 5) & 2;
  }
  BG_SetConditionValue(ci, 7, v26);
  scriptedAnimType = 0;
  if ( es->eType != ET_AGENT_CORPSE )
  {
    weaponIdx = BG_GetOffHandWeaponForPlayerEntity(weaponMap, es)->weaponIdx;
    if ( weaponIdx )
    {
      v40 = BG_WeaponDefAtIndex(weaponIdx);
      if ( v40->weapType == WEAPTYPE_SCRIPT )
        scriptedAnimType = v40->scriptedAnimType;
    }
  }
  BG_SetConditionBit(ci, 23, scriptedAnimType);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v59 = _XMM0;
  *(bitarray<64> *)&_XMM0 = ci->perks;
  v60 = 0i64;
  *(double *)value = *(double *)&_XMM0;
  BG_SetCondition(ci, 25, value);
  BG_SetConditionValue(ci, 38, ci->usingNVG);
  BG_SetConditionValue(ci, 33, ci->zeroGravity);
  v42 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
  if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  BG_SetConditionValue(ci, 45, v42->current.color[0]);
  if ( !BG_IsLadderWeapon(WeaponForEntity, 0) )
    goto LABEL_81;
  v43 = DCONST_DVARMPBOOL_ladderEnableWeapon;
  if ( !DCONST_DVARMPBOOL_ladderEnableWeapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableWeapon") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  v44 = 1i64;
  if ( !v43->current.enabled )
LABEL_81:
    v44 = 0i64;
  BG_SetConditionValue(ci, 46, v44);
  if ( !BG_IsAdsEntity(es) || (v45 = BG_UseFastADSAnims(WeaponForEntity, es->inAltWeaponMode), v46 = 1i64, !v45) )
    v46 = 0i64;
  BG_SetConditionValue(ci, 34, v46);
  WeaponAltReloadAnimsEnabled = BG_GetWeaponAltReloadAnimsEnabled(WeaponForEntity, es->inAltWeaponMode);
  BG_SetConditionValue(ci, 62, WeaponAltReloadAnimsEnabled);
  animLinkedToType = ci->animLinkedToType;
  if ( animLinkedToType == ANIM_LINKEDTO_SEAT )
  {
    v14 = 1i64;
  }
  else if ( animLinkedToType == ANIM_LINKEDTO_ZIPLINE )
  {
    v14 = 2i64;
  }
  BG_SetConditionValue(ci, 35, v14);
  BG_SetConditionValue(ci, 36, ci->isOnWall);
  BG_AnimPlayerVehicleOccupancyConditions(v8, weaponMap, es, ci);
  if ( (ci->carryObjectFlags & 1) != 0 )
  {
    CarryObjectDef = BG_GetCarryObjectDef(ci->carryObjectIndex);
    if ( !CarryObjectDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8392, ASSERT_TYPE_ASSERT, "(carryObjectDef)", (const char *)&queryFormat, "carryObjectDef") )
      __debugbreak();
    if ( CarryObjectDef->type >= (unsigned int)CARRYOBJECTTYPE_COUNT )
    {
      LODWORD(v52) = 2;
      LODWORD(v51) = CarryObjectDef->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8393, ASSERT_TYPE_ASSERT, "(unsigned)( carryObjectDef->type ) < (unsigned)( NUM_ANIM_COND_CARRY_OBJECT_TYPE - 1 )", "carryObjectDef->type doesn't index NUM_ANIM_COND_CARRY_OBJECT_TYPE - 1\n\t%i not in [0, %i)", v51, v52) )
        __debugbreak();
    }
    BG_SetConditionBit(ci, 53, CarryObjectDef->type);
    BG_SetConditionValue(ci, 54, 1ui64);
  }
  else
  {
    BG_SetConditionValue(ci, 54, 0i64);
    BG_SetConditionBit(ci, 53, 2);
  }
  BG_GameInterface_AnimPlayerConditions(ci);
  SuitDef = BG_GetSuitDef(ci->suitIndex);
  BG_SetConditionBit(ci, 57, SuitDef->bodyAnimType);
}

/*
==============
BG_AnimPlayerConditionsMantle
==============
*/
void BG_AnimPlayerConditionsMantle(const entityState_t *es, characterInfo_t *ci)
{
  int flags; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  int v7; 
  int mantleSpeedAnimCond; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8327, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8328, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( BG_IsCharacterEntity(es) && BG_IsMantleEntity(es) )
  {
    BG_SetConditionValue(ci, 18, ((unsigned int)ci->animData.flags >> 2) & 1);
    flags = ci->animData.flags;
    v5 = 2i64;
    if ( (flags & 0x80u) == 0 )
      v6 = ((unsigned __int64)(unsigned __int8)flags >> 1) & 1;
    else
      v6 = 2i64;
    BG_SetConditionValue(ci, 19, v6);
    v7 = ci->animData.flags;
    if ( (v7 & 0x20) != 0 )
    {
      v5 = 1i64;
    }
    else if ( (v7 & 8) == 0 )
    {
      v5 = (v7 & 0x10) != 0 ? 3 : 0;
    }
    BG_SetConditionValue(ci, 20, v5);
    BG_SetConditionValue(ci, 21, ((unsigned int)ci->animData.flags >> 6) & 1);
    mantleSpeedAnimCond = ci->mantleSpeedAnimCond;
  }
  else
  {
    BG_SetConditionValue(ci, 18, 2ui64);
    BG_SetConditionValue(ci, 19, 3ui64);
    BG_SetConditionValue(ci, 20, 4ui64);
    BG_SetConditionValue(ci, 21, 0i64);
    mantleSpeedAnimCond = 0;
  }
  BG_SetConditionBit(ci, 58, mantleSpeedAnimCond);
}

/*
==============
BG_AnimPlayerVehicleOccupancyConditions
==============
*/
void BG_AnimPlayerVehicleOccupancyConditions(const BgHandler *handler, const BgWeaponMap *weaponMap, const entityState_t *es, characterInfo_t *ci)
{
  int LinkedVehicle; 
  int EnterSide; 
  animScriptVehicleType_t outVehicleType; 
  animScriptVehicleSeat_t outVehicleSeat; 

  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8404, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8405, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8406, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8407, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  BG_SetConditionBit(ci, 39, 0);
  BG_SetConditionBit(ci, 40, 0);
  BG_SetConditionValue(ci, 41, 0i64);
  BG_SetConditionBit(ci, 42, 0);
  BG_SetConditionBit(ci, 43, 0);
  LinkedVehicle = BG_VehicleOccupancy_GetLinkedVehicle(handler, es, ci, &outVehicleType, &outVehicleSeat);
  if ( LinkedVehicle != 2047 )
  {
    EnterSide = BG_VehicleOccupancy_GetEnterSide(handler, es, LinkedVehicle);
    BG_SetConditionBit(ci, 39, outVehicleType);
    BG_SetConditionBit(ci, 40, outVehicleSeat);
    BG_SetConditionValue(ci, 41, 1ui64);
    BG_SetConditionBit(ci, 42, EnterSide);
    BG_SetConditionBit(ci, 43, ci->vehicleAnimation.scrubFacing);
  }
}

/*
==============
BG_AnimScriptAnimation
==============
*/
__int64 BG_AnimScriptAnimation(const BgHandler *const handler, playerState_s *ps, aistateEnum_t state, PlayerAnimScriptMoveType codeMoveType, int force, int turn)
{
  int v6; 
  const BgHandler *v8; 
  unsigned int v9; 
  PlayerAnimScriptMoveType ExitOfTransitionalMoveType; 
  BgStatic *ActiveStatics; 
  __int64 v12; 
  characterInfo_t *CharacterInfo; 
  XAnimTree *pXAnimTree; 
  int v16; 
  SuitAnimType SuitAnimIndexFromPlayerState; 
  __int64 v18; 
  PlayerAnimScriptEntry *v19; 
  PlayerAnimScriptEntry *v20; 
  unsigned int v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned int *items; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  PlayerAnimScriptItem *v28; 
  __int64 v29; 
  __int64 v30; 
  PlayerAnimScriptCommand *commands; 
  BOOL v32; 
  PlayerAnimScriptItem *v33; 
  const PlayerAnimScriptCommand *v34; 
  bool v35; 
  PlayerAnimScriptItem *v36; 
  const PlayerAnimEntry *v37; 
  unsigned __int8 animMoveType; 
  const dvar_t *v39; 
  const char *AnimConditionString; 
  const char *AnimCodeMoveTypeString; 
  const dvar_t *v42; 
  const char *v43; 
  char *fmt; 
  char *fmta; 
  PlayerAnimScriptItem **scriptItem; 
  PlayerAnimScriptItem **scriptItema; 
  PlayerAnimScriptItem **scriptItemb; 
  PlayerAnimScriptItem **scriptItemc; 
  PlayerAnimScriptItem **scriptItemd; 
  __int64 v51; 
  SuitAnimType suitAnimIndex; 
  PlayerAnimScriptItem *v53; 
  PlayerAnimScriptEntry *v54; 
  PlayerAnimScriptEntry *script; 
  PlayerAnimScriptItem *v56; 
  characterInfo_t *v57; 
  __int64 v58; 
  __int64 v59; 
  BOOL forceLegsOnly; 

  v59 = -2i64;
  v6 = codeMoveType;
  v8 = handler;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2377, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  BG_CheckThread();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2383, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = 0;
  if ( (unsigned int)v6 > 0x26 )
  {
    LODWORD(scriptItem) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2385, ASSERT_TYPE_ASSERT, "( 0 ) <= ( codeMoveType ) && ( codeMoveType ) <= ( NUM_ANIM_CODEMOVETYPES )", "codeMoveType not in [0, NUM_ANIM_CODEMOVETYPES]\n\t%i not in [%i, %i]", scriptItem, 0i64, 38) )
      __debugbreak();
  }
  ExitOfTransitionalMoveType = v6;
  ActiveStatics = BgStatic::GetActiveStatics();
  v12 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  v58 = v12;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2390, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, ps->clientNum);
  v57 = CharacterInfo;
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2393, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() )
  {
    BG_SetConditionBit(CharacterInfo, 3, v6);
    ps->animMoveType = truncate_cast<unsigned char,enum PlayerAnimScriptMoveType>((PlayerAnimScriptMoveType)v6);
    return 0i64;
  }
  pXAnimTree = CharacterInfo->pXAnimTree;
  if ( !pXAnimTree || (v16 = 446, pXAnimTree->owner[0]) )
    v16 = 447;
  Profile_Begin(v16);
  v8->ProfBeginAnimUpdate((BgHandler *)v8);
  SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(ps);
  v18 = SuitAnimIndexFromPlayerState;
  suitAnimIndex = SuitAnimIndexFromPlayerState;
  if ( (unsigned int)SuitAnimIndexFromPlayerState >= NUM_ANIM_SUIT_STATE )
  {
    LODWORD(v51) = 4;
    LODWORD(scriptItem) = SuitAnimIndexFromPlayerState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2416, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", scriptItem, v51) )
      __debugbreak();
  }
  v19 = *(PlayerAnimScriptEntry **)(v12 + 8 * v18);
  v54 = v19;
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2419, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  forceLegsOnly = 0;
  if ( BG_GetConditionBit(CharacterInfo, 3) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2423, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED") )
    __debugbreak();
  if ( BG_GetConditionBit(CharacterInfo, 3) >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2424, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES") )
    __debugbreak();
  if ( ps->pm_type >= 7 )
  {
    v8->ProfEndAnimUpdate((BgHandler *)v8);
    Profile_EndInternal(NULL);
    return 0xFFFFFFFFi64;
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "BG_AnimScriptAnimation");
  if ( BG_AnimFindScript(ps->clientNum, (const SuitAnimType)v18, state, (PlayerAnimScriptMoveType)ps->animMoveType, (const PlayerAnimScriptEntry **)&script, (const PlayerAnimScriptItem **)&v56) )
  {
    LODWORD(v53) = 0;
    v20 = script;
    if ( script->transitionCount )
    {
      v21 = 0;
      while ( 1 )
      {
        v22 = v20->transitions[v21];
        if ( (unsigned int)v22 >= LODWORD(v19->items) )
        {
          LODWORD(v51) = v19->items;
          LODWORD(scriptItema) = v20->transitions[v21];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2443, ASSERT_TYPE_ASSERT, "(unsigned)( scriptTransitionIndex ) < (unsigned)( playerAnim->scriptTransitionCount )", "scriptTransitionIndex doesn't index playerAnim->scriptTransitionCount\n\t%i not in [0, %i)", scriptItema, v51) )
            __debugbreak();
        }
        v23 = 3 * v22;
        items = v19[2].items;
        v25 = items[3 * v22];
        if ( !v25 )
          break;
        v26 = v25 - 1;
        if ( !v26 )
        {
          if ( items[3 * v22 + 1] != ExitOfTransitionalMoveType )
            goto LABEL_54;
          v35 = CharacterInfo->clientConditions[7][0] == 0;
LABEL_78:
          if ( !v35 )
            goto LABEL_54;
          goto LABEL_79;
        }
        v27 = v26 - 1;
        if ( v27 )
        {
          if ( v27 != 1 )
            goto LABEL_54;
          v28 = v56;
          if ( !v56->commandCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2478, ASSERT_TYPE_ASSERT, "(prevScriptItem->commandCount)", (const char *)&queryFormat, "prevScriptItem->commandCount") )
            __debugbreak();
          v29 = ps->clientNum % v28->commandCount;
          v30 = v29;
          commands = v28->commands;
          if ( !commands[(unsigned int)v29].bodyPart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2480, ASSERT_TYPE_ASSERT, "(impendingScriptCommand->bodyPart)", (const char *)&queryFormat, "impendingScriptCommand->bodyPart") )
            __debugbreak();
          v32 = (ps->legsAnim & 0xFFFFEFFF) != commands[v30].animIndex;
          CharacterInfo = v57;
        }
        else
        {
          v32 = ps->legsTimer < 500;
        }
        if ( !v32 )
        {
LABEL_54:
          v6 = codeMoveType;
          goto LABEL_55;
        }
LABEL_79:
        ExitOfTransitionalMoveType = items[v23 + 2];
        v6 = codeMoveType;
        if ( ExitOfTransitionalMoveType == ANIM_MT_UNUSED )
          ExitOfTransitionalMoveType = codeMoveType;
        if ( ExitOfTransitionalMoveType != ps->animMoveType )
        {
LABEL_56:
          v8 = handler;
          v19 = v54;
          LODWORD(v18) = suitAnimIndex;
          goto LABEL_57;
        }
LABEL_55:
        ++v21;
        v20 = script;
        v19 = v54;
        if ( v21 >= script->transitionCount )
          goto LABEL_56;
      }
      v35 = items[3 * v22 + 1] == ExitOfTransitionalMoveType;
      goto LABEL_78;
    }
  }
LABEL_57:
  BG_SetConditionBit(CharacterInfo, 3, ExitOfTransitionalMoveType);
  if ( BG_GetConditionBit(CharacterInfo, 3) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2510, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED") )
    __debugbreak();
  if ( BG_GetConditionBit(CharacterInfo, 3) >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2511, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES") )
    __debugbreak();
  if ( !BG_AnimFindScript(ps->clientNum, (const SuitAnimType)v18, state, ExitOfTransitionalMoveType, (const PlayerAnimScriptEntry **)&v54, (const PlayerAnimScriptItem **)&v53) )
    goto LABEL_74;
  v33 = v53;
  if ( !v53->commandCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2524, ASSERT_TYPE_ASSERT, "(scriptItem->commandCount)", (const char *)&queryFormat, "scriptItem->commandCount") )
    __debugbreak();
  v34 = &v33->commands[ps->clientNum % v33->commandCount];
  if ( v34->bodyPart != 4 )
  {
LABEL_87:
    if ( v34->animIndex >= v19->transitionCount )
    {
      LODWORD(v51) = v19->transitionCount;
      LODWORD(scriptItemb) = v34->animIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2552, ASSERT_TYPE_ASSERT, "(unsigned)( scriptCommand->animIndex ) < (unsigned)( playerAnim->animationCount )", "scriptCommand->animIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", scriptItemb, v51) )
        __debugbreak();
    }
    v37 = (const PlayerAnimEntry *)&v19[1].items[26 * v34->animIndex];
    if ( BG_GameInterface_InteractionAnims_AllowedToPlayAnimScript(v37, ps) )
    {
      BG_GameInterface_InteractionAnims_AnimScriptAnimation(v37, v8, ps, state, codeMoveType, force, turn);
      if ( !force )
      {
        animMoveType = ps->animMoveType;
        if ( animMoveType >= 0x26u )
          forceLegsOnly = (v54->flags & 1) == 0 || animMoveType != ExitOfTransitionalMoveType;
      }
      if ( (v54->flags & 4) != 0 && ps->animMoveType != ExitOfTransitionalMoveType )
        BG_ClearTorsoAnim(NULL, ps);
      v39 = DVARINT_pmoveanim_debug;
      if ( !DVARINT_pmoveanim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmoveanim_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      if ( v39->current.integer >= 1 && Sys_IsServerThread() && ps->animMoveType != ExitOfTransitionalMoveType )
      {
        BG_CheckThread();
        AnimConditionString = BG_GameInterface_GetAnimConditionString(3, codeMoveType);
        if ( !AnimConditionString )
        {
          if ( (unsigned int)codeMoveType > (FIRST_TRANSITION_MOVETYPE|ANIM_MT_SLIDEBK|0x40) )
          {
            LODWORD(scriptItemc) = codeMoveType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 709, ASSERT_TYPE_ASSERT, "( ( value >= 0 && value < NUM_ANIM_MOVETYPES ) )", "( value ) = %i", scriptItemc) )
              __debugbreak();
          }
          if ( codeMoveType < NUM_ANIM_CODEMOVETYPES )
            AnimConditionString = BG_GetAnimCodeMoveTypeString(codeMoveType);
          else
            AnimConditionString = "transitionMoveType";
        }
        BG_CheckThread();
        AnimCodeMoveTypeString = BG_GameInterface_GetAnimConditionString(3, ExitOfTransitionalMoveType);
        if ( !AnimCodeMoveTypeString )
        {
          if ( (unsigned int)ExitOfTransitionalMoveType > (FIRST_TRANSITION_MOVETYPE|ANIM_MT_SLIDEBK|0x40) )
          {
            LODWORD(scriptItemc) = ExitOfTransitionalMoveType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 709, ASSERT_TYPE_ASSERT, "( ( value >= 0 && value < NUM_ANIM_MOVETYPES ) )", "( value ) = %i", scriptItemc) )
              __debugbreak();
          }
          if ( ExitOfTransitionalMoveType < NUM_ANIM_CODEMOVETYPES )
            AnimCodeMoveTypeString = BG_GetAnimCodeMoveTypeString(ExitOfTransitionalMoveType);
          else
            AnimCodeMoveTypeString = "transitionMoveType";
        }
        LODWORD(fmt) = ps->clientNum;
        Com_Printf(19, "%s:%i:e%i:[[%.3f]] moveType: %s (c %s)\n", "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2588i64, fmt, (float)((float)(*(_DWORD *)(v58 + 19528) % 60000) * 0.001), AnimCodeMoveTypeString, AnimConditionString);
      }
      ps->animMoveType = truncate_cast<unsigned char,enum PlayerAnimScriptMoveType>(ExitOfTransitionalMoveType);
      if ( v34->bodyPart == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2604, ASSERT_TYPE_ASSERT, "(!( BG_IsTransitionMoveType( FIRST_TRANSITION_MOVETYPE ) && scriptCommand->bodyPart == ANIM_BP_TORSO ))", (const char *)&queryFormat, "!( BG_IsTransitionMoveType( FIRST_TRANSITION_MOVETYPE ) && scriptCommand->bodyPart == ANIM_BP_TORSO )") )
        __debugbreak();
      LOBYTE(v9) = BG_ExecuteCommand(ps, v34, ExitOfTransitionalMoveType >= NUM_ANIM_CODEMOVETYPES, 1, force, forceLegsOnly, turn) != -1;
      v42 = DVARINT_pmoveanim_debug;
      if ( !DVARINT_pmoveanim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmoveanim_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v42);
      if ( v42->current.integer >= 2 && Sys_IsServerThread() )
      {
        BG_CheckThread();
        v43 = BG_GameInterface_GetAnimConditionString(3, ExitOfTransitionalMoveType);
        if ( !v43 )
        {
          if ( (unsigned int)ExitOfTransitionalMoveType > (FIRST_TRANSITION_MOVETYPE|ANIM_MT_SLIDEBK|0x40) )
          {
            LODWORD(scriptItemd) = ExitOfTransitionalMoveType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 709, ASSERT_TYPE_ASSERT, "( ( value >= 0 && value < NUM_ANIM_MOVETYPES ) )", "( value ) = %i", scriptItemd) )
              __debugbreak();
          }
          if ( ExitOfTransitionalMoveType < NUM_ANIM_CODEMOVETYPES )
            v43 = BG_GetAnimCodeMoveTypeString(ExitOfTransitionalMoveType);
          else
            v43 = "transitionMoveType";
        }
        LODWORD(scriptItemd) = ps->legsTimer;
        LODWORD(fmta) = ps->clientNum;
        Com_Printf(19, "%s:%i:e%i:legsTimer: %7d     mt: %s\n", "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2612i64, fmta, scriptItemd, v43);
      }
    }
    v8->ProfEndAnimUpdate((BgHandler *)v8);
    Profile_EndInternal(NULL);
    goto LABEL_137;
  }
  if ( ExitOfTransitionalMoveType < NUM_ANIM_CODEMOVETYPES && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2530, ASSERT_TYPE_ASSERT, "(BG_IsTransitionMoveType( movetype ))", (const char *)&queryFormat, "BG_IsTransitionMoveType( movetype )") )
    __debugbreak();
  ExitOfTransitionalMoveType = BG_GetExitOfTransitionalMoveType(AISTATE_COMBAT, ExitOfTransitionalMoveType, suitAnimIndex);
  if ( ExitOfTransitionalMoveType == ANIM_MT_UNUSED )
    ExitOfTransitionalMoveType = v6;
  if ( BG_AnimFindScript(ps->clientNum, suitAnimIndex, state, ExitOfTransitionalMoveType, (const PlayerAnimScriptEntry **)&v54, (const PlayerAnimScriptItem **)&v53) )
  {
    v36 = v53;
    if ( !v53->commandCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2548, ASSERT_TYPE_ASSERT, "(scriptItem->commandCount)", (const char *)&queryFormat, "scriptItem->commandCount") )
      __debugbreak();
    v34 = &v36->commands[ps->clientNum % v36->commandCount];
    goto LABEL_87;
  }
LABEL_74:
  v8->ProfEndAnimUpdate((BgHandler *)v8);
  Profile_EndInternal(NULL);
  v9 = -1;
LABEL_137:
  Sys_ProfEndNamedEvent();
  return v9;
}

/*
==============
BG_AnimScriptEvent
==============
*/
__int64 BG_AnimScriptEvent(const BgHandler *const handler, playerState_s *ps, PlayerAnimScriptEventType event, int isContinue, int force, unsigned int *holdrand)
{
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  XAnimTree *pXAnimTree; 
  int v13; 
  unsigned int *v15; 
  unsigned int *v16; 
  __int64 SuitAnimIndexFromPlayerState; 
  const char *AnimEventTypeString; 
  const char *v19; 
  PlayerAnimScriptItem *v20; 
  PlayerAnimScriptCommand *commands; 
  const PlayerAnimScriptCommand *v22; 
  __int64 v23; 
  __int64 v24; 
  const PlayerAnimEntry *v25; 
  int v26; 
  int v27; 
  unsigned int v28; 
  unsigned __int8 animMoveType; 
  PlayerAnimScriptMoveType ExitOfTransitionalMoveType; 
  int v31; 
  const char *AnimConditionString; 
  char *fmt; 
  __int64 forceLegsOnly; 
  __int64 forceLegsOnlya; 
  unsigned int *v36; 
  PlayerAnimScriptItem *scriptItem; 
  PlayerAnimScriptEntry *script; 
  int isContinuea; 

  isContinuea = isContinue;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2690, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  BG_CheckThread();
  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, ps->clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2699, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  pXAnimTree = CharacterInfo->pXAnimTree;
  if ( !pXAnimTree || (v13 = 448, pXAnimTree->owner[0]) )
    v13 = 449;
  Profile_Begin(v13);
  handler->ProfBeginAnimUpdate((BgHandler *)handler);
  if ( event && ps->pm_type >= 7 )
    goto LABEL_12;
  if ( PlayerASM_IsEnabled() )
  {
    Com_BitSetAssert(CharacterInfo->clientEvents.events, event, 32);
    CharacterInfo->clientEvents.hasEvents = 1;
    v15 = CharacterInfo->clientEvents.isContinue;
    if ( isContinue )
      Com_BitSetAssert(v15, event, 32);
    else
      Com_BitClearAssert(v15, event, 32);
    v16 = CharacterInfo->clientEvents.force;
    if ( force )
      Com_BitSetAssert(v16, event, 32);
    else
      Com_BitClearAssert(v16, event, 32);
LABEL_40:
    handler->ProfEndAnimUpdate((BgHandler *)handler);
    Profile_EndInternal(NULL);
    return 0i64;
  }
  SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(ps);
  if ( (unsigned int)SuitAnimIndexFromPlayerState >= 4 )
  {
    LODWORD(forceLegsOnly) = SuitAnimIndexFromPlayerState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2750, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", forceLegsOnly, 4) )
      __debugbreak();
  }
  AnimEventTypeString = BG_GetAnimEventTypeString(event);
  v19 = j_va("event: %s\n", AnimEventTypeString);
  G_DebugPlayerAnimScript_Print(ps->clientNum, v19);
  if ( !BG_AnimFindScriptEvent(ps->clientNum, (const SuitAnimType)SuitAnimIndexFromPlayerState, event, (const PlayerAnimScriptEntry **)&script, (const PlayerAnimScriptItem **)&scriptItem) )
  {
LABEL_12:
    handler->ProfEndAnimUpdate((BgHandler *)handler);
    Profile_EndInternal(NULL);
    return 0xFFFFFFFFi64;
  }
  v20 = scriptItem;
  if ( !scriptItem->commandCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2763, ASSERT_TYPE_ASSERT, "(scriptItem->commandCount)", (const char *)&queryFormat, "scriptItem->commandCount") )
    __debugbreak();
  commands = v20->commands;
  v22 = &commands[BG_rand(holdrand) % v20->commandCount];
  v23 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2767, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( (unsigned int)SuitAnimIndexFromPlayerState >= 4 )
  {
    LODWORD(v36) = 4;
    LODWORD(forceLegsOnly) = SuitAnimIndexFromPlayerState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2769, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", forceLegsOnly, v36) )
      __debugbreak();
  }
  v24 = *(_QWORD *)(v23 + 8 * SuitAnimIndexFromPlayerState);
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2771, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  if ( (unsigned int)v22->animIndex >= *(_DWORD *)(v24 + 8) )
  {
    LODWORD(v36) = *(_DWORD *)(v24 + 8);
    LODWORD(forceLegsOnly) = v22->animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2773, ASSERT_TYPE_ASSERT, "(unsigned)( scriptCommand->animIndex ) < (unsigned)( playerAnim->animationCount )", "scriptCommand->animIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", forceLegsOnly, v36) )
      __debugbreak();
  }
  v25 = (const PlayerAnimEntry *)(*(_QWORD *)(v24 + 48) + 104i64 * v22->animIndex);
  if ( !BG_GameInterface_InteractionAnims_AllowedToPlayAnimScriptEvent(event, v25, ps) )
    goto LABEL_40;
  v26 = force;
  v27 = isContinuea;
  BG_GameInterface_InteractionAnims_AnimScriptEvent(v25, handler, ps, event, isContinuea, force, holdrand);
  v28 = BG_ExecuteCommand(ps, v22, 1, v27, v26, 0, 0);
  if ( v28 != -1 )
  {
    animMoveType = ps->animMoveType;
    if ( animMoveType >= 0x26u )
    {
      ExitOfTransitionalMoveType = BG_GetExitOfTransitionalMoveType(AISTATE_COMBAT, (PlayerAnimScriptMoveType)animMoveType, (SuitAnimType)SuitAnimIndexFromPlayerState);
      ps->animMoveType = truncate_cast<unsigned char,enum PlayerAnimScriptMoveType>(ExitOfTransitionalMoveType);
    }
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_pmoveanim_debug, "pmoveanim_debug") >= 2 && Sys_IsServerThread() )
    {
      v31 = ps->animMoveType;
      BG_CheckThread();
      AnimConditionString = BG_GameInterface_GetAnimConditionString(3, v31);
      if ( !AnimConditionString )
      {
        if ( (unsigned __int8)v31 >= 0x80u )
        {
          LODWORD(forceLegsOnlya) = v31;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 709, ASSERT_TYPE_ASSERT, "( ( value >= 0 && value < NUM_ANIM_MOVETYPES ) )", "( value ) = %i", forceLegsOnlya) )
            __debugbreak();
        }
        if ( (unsigned __int8)v31 < 0x26u )
          AnimConditionString = BG_GetAnimCodeMoveTypeString(v31);
        else
          AnimConditionString = "transitionMoveType";
      }
      LODWORD(forceLegsOnlya) = ps->legsTimer;
      LODWORD(fmt) = ps->clientNum;
      Com_Printf(19, "%s:%i:e%i:legsTimer: %7d     mt: %s\n", "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2800i64, fmt, forceLegsOnlya, AnimConditionString);
    }
  }
  handler->ProfEndAnimUpdate((BgHandler *)handler);
  Profile_EndInternal(NULL);
  return v28;
}

/*
==============
BG_AnimScriptGetConditionValue
==============
*/
__int64 BG_AnimScriptGetConditionValue(const playerState_s *ps, int condition)
{
  __int64 v2; 
  BgStatic *ActiveStatics; 
  unsigned int clientNum; 
  CgStatic *v6; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v8; 
  __int64 v10; 

  v2 = condition;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3935, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3936, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  clientNum = ps->clientNum;
  v6 = (CgStatic *)ActiveStatics;
  if ( ActiveStatics->IsClient(ActiveStatics) )
    CharacterInfo = CgStatic::GetCharacterInfo(v6, clientNum);
  else
    CharacterInfo = (const characterInfo_t *)v6->GetClientInfo(v6, clientNum);
  v8 = CharacterInfo;
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3940, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( (unsigned int)v2 > 0x3E )
  {
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3923, ASSERT_TYPE_ASSERT, "( ( condition < NUM_ANIM_CONDITIONS && condition >= 0 ) )", "( condition ) = %i", v10) )
      __debugbreak();
  }
  return v8->clientConditions[v2][0];
}

/*
==============
BG_AnimScriptGetParachuteState
==============
*/
__int64 BG_AnimScriptGetParachuteState(const scr_string_t parachuteState)
{
  __int64 v2; 
  scr_string_t *v3; 

  v2 = 0i64;
  while ( 1 )
  {
    v3 = s_animConditionParachuteStateConstStr[v2];
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 600, ASSERT_TYPE_ASSERT, "(parachuteStateConstStr)", (const char *)&queryFormat, "parachuteStateConstStr") )
      __debugbreak();
    if ( *v3 == parachuteState )
      break;
    if ( (unsigned __int64)++v2 >= 0xC )
      return 0i64;
  }
  return (unsigned int)v2;
}

/*
==============
BG_AnimScriptGetVehicleSeat
==============
*/
__int64 BG_AnimScriptGetVehicleSeat(const scr_string_t vehicleSeat)
{
  __int64 v2; 
  scr_string_t *v3; 

  v2 = 0i64;
  while ( 1 )
  {
    v3 = s_animConditionVehicleSeatConstStr[v2];
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 556, ASSERT_TYPE_ASSERT, "(vehSeatConstStr)", (const char *)&queryFormat, "vehSeatConstStr") )
      __debugbreak();
    if ( *v3 == vehicleSeat )
      break;
    if ( (unsigned __int64)++v2 >= 0xB )
      return 0i64;
  }
  return (unsigned int)v2;
}

/*
==============
BG_AnimScriptGetVehicleSide
==============
*/
__int64 BG_AnimScriptGetVehicleSide(const scr_string_t vehicleSide)
{
  __int64 v2; 
  scr_string_t *v3; 

  v2 = 0i64;
  while ( 1 )
  {
    v3 = s_animConditionVehicleSideConstStr[v2];
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 578, ASSERT_TYPE_ASSERT, "(vehSideConstStr)", (const char *)&queryFormat, "vehSideConstStr") )
      __debugbreak();
    if ( *v3 == vehicleSide )
      break;
    if ( (unsigned __int64)++v2 >= 3 )
      return 0i64;
  }
  return (unsigned int)v2;
}

/*
==============
BG_AnimScriptGetVehicleType
==============
*/
__int64 BG_AnimScriptGetVehicleType(const scr_string_t vehicleType)
{
  __int64 v2; 
  scr_string_t *v3; 

  v2 = 0i64;
  while ( 1 )
  {
    v3 = s_animConditionVehicleTypeConstStr[v2];
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 534, ASSERT_TYPE_ASSERT, "(vehTypeConstStr)", (const char *)&queryFormat, "vehTypeConstStr") )
      __debugbreak();
    if ( *v3 == vehicleType )
      break;
    if ( (unsigned __int64)++v2 >= 0x1C )
      return 0i64;
  }
  return (unsigned int)v2;
}

/*
==============
BG_AnimScriptIsInVehicle
==============
*/
bool BG_AnimScriptIsInVehicle(const playerState_s *ps)
{
  BgStatic *ActiveStatics; 
  unsigned int clientNum; 
  CgStatic *v4; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v6; 
  int v7; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3935, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3936, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  clientNum = ps->clientNum;
  v4 = (CgStatic *)ActiveStatics;
  if ( ActiveStatics->IsClient(ActiveStatics) )
    CharacterInfo = CgStatic::GetCharacterInfo(v4, clientNum);
  else
    CharacterInfo = (const characterInfo_t *)v4->GetClientInfo(v4, clientNum);
  v6 = CharacterInfo;
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3940, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  v7 = v6->clientConditions[39][0];
  return v7 && v7 < 28;
}

/*
==============
BG_AnimScriptSetConditionBit
==============
*/
void BG_AnimScriptSetConditionBit(playerState_s *ps, int condition, int value)
{
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3877, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3878, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( ps->pm_type < 7 )
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    CharacterInfo = BG_GetCharacterInfo(ActiveStatics, ps->clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3887, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
      __debugbreak();
    BG_SetConditionBit(CharacterInfo, condition, value);
  }
}

/*
==============
BG_AnimScriptSetConditionValue
==============
*/
void BG_AnimScriptSetConditionValue(playerState_s *ps, int condition, int value)
{
  unsigned __int64 v3; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 

  v3 = value;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3900, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3901, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( ps->pm_type < 7 )
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    CharacterInfo = BG_GetCharacterInfo(ActiveStatics, ps->clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3910, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
      __debugbreak();
    BG_SetConditionValue(CharacterInfo, condition, v3);
  }
}

/*
==============
BG_AnimUpdatePlayerStateConditions
==============
*/
void BG_AnimUpdatePlayerStateConditions(pmove_t *pmove, pml_t *pml)
{
  playerState_s *ps; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  int type; 
  const CarryObjectDef *CarryObjectDef; 
  BgWeaponMap *weaponMap; 
  const Weapon *Weapon; 
  BgWeaponMap *v14; 
  const Weapon *v15; 
  const Weapon *v16; 
  int PlayerAnimType; 
  int v18; 
  int WeaponClassForAnimCondition; 
  int v20; 
  int v21; 
  const Weapon *ViewmodelWeapon; 
  int AltModePlayerAnimType; 
  bool v24; 
  bool WeaponAltReloadAnimsEnabled; 
  bool IsTurretActiveFlags; 
  bool IsRemoteTurretActiveFlags; 
  animScriptParachuteState_t skydiveAnimState; 
  bool v29; 
  bool v30; 
  int scriptedAnimType; 
  unsigned __int16 weaponIdx; 
  const WeaponDef *v33; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  unsigned __int64 v37; 
  _BOOL8 v38; 
  bool v39; 
  __int64 animType; 
  const ExecutionDef *Def; 
  int AmmoInClip; 
  const SuitDef *SuitDef; 
  __int64 v44; 
  bool v45; 
  bool outIsAlternate; 
  int outAnimType; 
  int outVariant; 
  pml_t *pmla; 
  unsigned int value[2]; 
  __int128 v51; 
  __int64 v52; 

  pmla = pml;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4325, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  ps = pmove->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4330, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, ps->clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4334, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  BG_AnimUpdatePlayerStateConditionsMantle(pmove, CharacterInfo);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4301, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v7 = 1i64;
  if ( (ps->carryState.flags & 1) != 0 )
  {
    CarryObjectDef = BG_GetCarryObjectDef(ps->carryState.carryObjectIndex);
    if ( !CarryObjectDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4311, ASSERT_TYPE_ASSERT, "(carryObjectDef)", (const char *)&queryFormat, "carryObjectDef") )
      __debugbreak();
    v8 = 2i64;
    if ( CarryObjectDef->type >= (unsigned int)CARRYOBJECTTYPE_COUNT )
    {
      LODWORD(v44) = CarryObjectDef->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4312, ASSERT_TYPE_ASSERT, "(unsigned)( carryObjectDef->type ) < (unsigned)( NUM_ANIM_COND_CARRY_OBJECT_TYPE - 1 )", "carryObjectDef->type doesn't index NUM_ANIM_COND_CARRY_OBJECT_TYPE - 1\n\t%i not in [0, %i)", v44, 2) )
        __debugbreak();
    }
    type = CarryObjectDef->type;
    v9 = 1i64;
  }
  else
  {
    v8 = 2i64;
    v9 = 0i64;
    type = 2;
  }
  BG_SetConditionBit(CharacterInfo, 53, type);
  BG_SetConditionValue(CharacterInfo, 54, v9);
  weaponMap = pmove->weaponMap;
  if ( !weaponMap )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 899, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
  }
  Weapon = BgWeaponMap::GetWeapon(weaponMap, ps->weapCommon.weaponHandle);
  v14 = pmove->weaponMap;
  v15 = Weapon;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 916, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v16 = BgWeaponMap::GetWeapon(v14, ps->weapCommon.offHandHandle);
  v45 = BG_UsingAlternate(ps);
  PlayerAnimType = BG_WeaponGetPlayerAnimType(v15, v45);
  BG_SetConditionBit(CharacterInfo, 0, PlayerAnimType);
  v18 = BG_WeaponGetPlayerAnimType(v15, v45);
  BG_SetConditionBit(CharacterInfo, 15, v18);
  WeaponClassForAnimCondition = BG_GetWeaponClassForAnimCondition(ps, v15, 0);
  BG_SetConditionBit(CharacterInfo, 1, WeaponClassForAnimCondition);
  if ( (unsigned int)(ps->weapState[0].weaponState - 26) > 6 && !BG_IsUsingOffhandGestureWeapon(ps) && !BG_IsUsingScriptedOffhandWeapon(ps) )
    v16 = &NULL_WEAPON;
  v20 = BG_WeaponGetPlayerAnimType(v16, 0);
  BG_SetConditionBit(CharacterInfo, 55, v20);
  v21 = BG_PlayerDualWielding(ps);
  BG_SetConditionValue(CharacterInfo, 12, v21);
  if ( v45 )
  {
    ViewmodelWeapon = BG_GetViewmodelWeapon(pmove->weaponMap, ps);
    AltModePlayerAnimType = BG_WeaponGetAltModePlayerAnimType(ViewmodelWeapon);
  }
  else
  {
    AltModePlayerAnimType = 0;
  }
  BG_SetConditionBit(CharacterInfo, 52, AltModePlayerAnimType);
  BG_SetConditionValue(CharacterInfo, 24, 0i64);
  v24 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u);
  BG_SetConditionValue(CharacterInfo, 6, v24);
  WeaponAltReloadAnimsEnabled = BG_GetWeaponAltReloadAnimsEnabled(v15, v45);
  BG_SetConditionValue(CharacterInfo, 62, WeaponAltReloadAnimsEnabled);
  IsTurretActiveFlags = BG_IsTurretActiveFlags(&ps->eFlags);
  IsRemoteTurretActiveFlags = BG_IsRemoteTurretActiveFlags(&ps->eFlags);
  BG_AnimUpdateTurretConditions(CharacterInfo, v15, IsRemoteTurretActiveFlags, IsTurretActiveFlags);
  BG_AnimUpdateStanceCondition(pmove, pmla, CharacterInfo);
  BG_SetConditionValue(CharacterInfo, 44, ps->skydivePlayerState.animState);
  skydiveAnimState = CharacterInfo->skydiveAnimState;
  v29 = BG_SkydiveAnimStateNeedParachuteModel((const animScriptParachuteState_t)ps->skydivePlayerState.animState);
  if ( BG_SkydiveAnimStateNeedParachuteModel(skydiveAnimState) != v29 )
    CharacterInfo->dobjDirty = 1;
  CharacterInfo->skydiveAnimState = ps->skydivePlayerState.animState;
  BG_SetConditionValue(CharacterInfo, 60, ps->lastStandReviving);
  BG_SetConditionValue(CharacterInfo, 61, ps->lastStandSelfReviving);
  CharacterInfo->lastStandReviving = ps->lastStandReviving;
  CharacterInfo->lastStandSelfReviving = ps->lastStandSelfReviving;
  v30 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 0xAu);
  BG_SetConditionValue(CharacterInfo, 5, v30);
  BG_SetConditionValue(CharacterInfo, 16, CharacterInfo->isFemale);
  scriptedAnimType = 0;
  weaponIdx = PM_Weapon_GetUsedOffHandWeapon(pmove->weaponMap, ps)->weaponIdx;
  if ( weaponIdx )
  {
    v33 = BG_WeaponDefAtIndex(weaponIdx);
    if ( v33->weapType == WEAPTYPE_SCRIPT )
      scriptedAnimType = v33->scriptedAnimType;
  }
  BG_SetConditionBit(CharacterInfo, 23, scriptedAnimType);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v51 = _XMM0;
  *(bitarray<64> *)&_XMM0 = ps->perks;
  v52 = 0i64;
  *(double *)value = *(double *)&_XMM0;
  BG_SetCondition(CharacterInfo, 25, value);
  BG_SetConditionValue(CharacterInfo, 33, CharacterInfo->zeroGravity);
  v35 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
  if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  BG_SetConditionValue(CharacterInfo, 45, v35->current.color[0]);
  if ( !BG_IsLadderWeapon(v15, 0) || !BG_GetAmmoInClip(ps, v15, v45, WEAPON_HAND_DEFAULT) )
    goto LABEL_52;
  v36 = DCONST_DVARMPBOOL_ladderEnableWeapon;
  if ( !DCONST_DVARMPBOOL_ladderEnableWeapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableWeapon") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  if ( v36->current.enabled )
    v37 = 1i64;
  else
LABEL_52:
    v37 = 0i64;
  BG_SetConditionValue(CharacterInfo, 46, v37);
  v38 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u) && BG_UseFastADSAnims(v15, v45);
  BG_SetConditionValue(CharacterInfo, 34, v38);
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Cu) )
    v8 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Bu);
  BG_SetConditionValue(CharacterInfo, 35, v8);
  v39 = BG_IsOnWallAnimFlagEnabled(ps);
  BG_SetConditionValue(CharacterInfo, 36, v39);
  CompressedMeleeAnimData::Get(&ps->meleeReaction, &outAnimType, &outVariant, &outIsAlternate);
  BG_SetConditionValue(CharacterInfo, 30, outAnimType);
  BG_SetConditionValue(CharacterInfo, 31, outVariant);
  BG_SetConditionValue(CharacterInfo, 32, outIsAlternate);
  LODWORD(animType) = 0;
  Def = BG_Execution_GetDef(ps->activeExecution);
  if ( Def )
  {
    animType = (int)Def->animType;
    if ( (unsigned int)animType > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", animType, "unsigned", (unsigned int)animType) )
      __debugbreak();
  }
  BG_SetConditionValue(CharacterInfo, 49, (int)animType);
  BG_SetConditionValue(CharacterInfo, 50, ps->activeExecutionVictimStance);
  BG_SetConditionValue(CharacterInfo, 51, ps->activeExecutionIsVictim);
  AmmoInClip = BG_GetAmmoInClip(ps, v15, v45, WEAPON_HAND_DEFAULT);
  BG_SetConditionValue(CharacterInfo, 48, AmmoInClip == 0);
  BG_GameInterface_AnimUpdatePlayerStateConditions(CharacterInfo);
  BG_SetConditionValue(CharacterInfo, 56, (unsigned int)(ps->weapState[0].weaponState - 51) <= 1);
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  BG_SetConditionBit(CharacterInfo, 57, SuitDef->bodyAnimType);
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x15u) || !BG_GetShellshockParms(ps->shellshockIndex)->movement.affect )
    v7 = 0i64;
  BG_SetConditionValue(CharacterInfo, 59, v7);
}

/*
==============
BG_AnimUpdatePlayerStateConditionsMantle
==============
*/
void BG_AnimUpdatePlayerStateConditionsMantle(pmove_t *pm, characterInfo_t *ci)
{
  playerState_s *ps; 
  unsigned int flags; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  int v8; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4242, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4242, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4243, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, GameModeFlagValues::ms_mpValue, 0x18u) )
  {
    flags = ps->mantleState.compressedAnimData.flags;
    BG_SetConditionValue(ci, 18, (flags >> 2) & 1);
    v6 = 2i64;
    if ( (flags & 0x80) != 0 )
      v7 = 2i64;
    else
      v7 = (flags >> 1) & 1;
    BG_SetConditionValue(ci, 19, v7);
    v8 = ps->mantleState.compressedAnimData.flags;
    if ( (v8 & 0x20) != 0 )
    {
      v6 = 1i64;
    }
    else if ( (v8 & 8) == 0 )
    {
      v6 = (v8 & 0x10) != 0 ? 3 : 0;
    }
    BG_SetConditionValue(ci, 20, v6);
    BG_SetConditionValue(ci, 21, ((unsigned int)ps->mantleState.compressedAnimData.flags >> 6) & 1);
    BG_SetConditionBit(ci, 58, ps->mantleState.mantleSpeedAnimCond);
    ci->mantleSpeedAnimCond = ps->mantleState.mantleSpeedAnimCond;
  }
  else
  {
    BG_SetConditionValue(ci, 18, 2ui64);
    BG_SetConditionValue(ci, 19, 3ui64);
    BG_SetConditionValue(ci, 20, 4ui64);
    BG_SetConditionValue(ci, 21, 0i64);
    BG_SetConditionBit(ci, 58, 0);
  }
}

/*
==============
BG_AnimUpdatePlayerStateMeleeConditions
==============
*/
void BG_AnimUpdatePlayerStateMeleeConditions(pmove_t *pmove, MeleeResult result)
{
  unsigned __int64 v3; 
  playerState_s *ps; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  const Weapon *ViewmodelWeapon; 
  bool v8; 
  bool v9; 
  bool v10; 
  int altMeleeVariation; 
  bool outIsRandomized; 
  unsigned __int8 outAnimSets; 
  MeleeAnimType outAnimType; 

  v3 = result;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4507, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  ps = pmove->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4510, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, ps->clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4514, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(pmove->weaponMap, ps);
  v8 = BG_UsingAlternate(ps);
  v9 = BG_PlayerDualWielding(ps) == 1;
  v10 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x26u);
  BG_GetWeaponMeleeAnimProperties(ps, ViewmodelWeapon, v8, v9, v10, &outIsRandomized, &outAnimType, &outAnimSets);
  if ( v10 )
    altMeleeVariation = ps->weapCommon.altMeleeVariation;
  else
    altMeleeVariation = ps->weapCommon.meleeVariation;
  BG_SetConditionValue(CharacterInfo, 26, outAnimType);
  BG_SetConditionValue(CharacterInfo, 27, altMeleeVariation);
  BG_SetConditionValue(CharacterInfo, 29, v10);
  BG_SetConditionValue(CharacterInfo, 28, v3);
}

/*
==============
BG_AnimUpdateScriptedAnimSceneTime
==============
*/
void BG_AnimUpdateScriptedAnimSceneTime(characterInfo_t *ci, DObj *obj, const int serverTime, const int deltaTime)
{
  unsigned int Animset; 
  unsigned int Anim; 
  unsigned int XAnimIndex; 
  double Length; 
  const char *v12; 
  float v13; 
  float v16; 
  float v17; 
  double v18; 
  const char *v19; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6548, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6549, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  Animset = BG_PlayerASM_GetAnimset(ci);
  Anim = BG_PlayerASM_GetAnim(ci, MOVEMENT);
  if ( BG_PlayerASM_IsSceneAlias(Anim, Animset) )
  {
    XAnimIndex = BG_PlayerASM_GetXAnimIndex(Animset, Anim);
    if ( XAnimIndex )
    {
      if ( !XAnimIsLeafNode(obj->tree->anims, XAnimIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6570, ASSERT_TYPE_ASSERT, "(XAnimIsLeafNode( obj->tree->anims, scriptedAnimIndex ))", (const char *)&queryFormat, "XAnimIsLeafNode( obj->tree->anims, scriptedAnimIndex )") )
        __debugbreak();
      Length = XAnimGetLength(obj->tree->anims, XAnimIndex);
      v12 = j_va("bg_animation update start %d %f", (unsigned int)deltaTime, (float)(*(float *)&Length * 1000.0));
      BG_ScriptedAsmDebugPrint(v12, serverTime, ci, NULL);
      if ( (float)(*(float *)&Length * 1000.0) == 0.0 )
      {
        BG_ScriptedAsmDebugPrint("bg_animation duration zero", serverTime, ci, NULL);
        Com_PrintWarning(19, "BG_AnimUpdateScriptedAnimSceneTime - current scripted anim (%i) has length of 0 milliseconds! Did you add your scripted anim to the player ASM?", XAnimIndex);
        if ( !XAnimIsLooped(obj->tree->anims, XAnimIndex) )
        {
          BG_ScriptedAsmDebugPrint("bg_animation clear duration zero", serverTime, ci, NULL);
          Com_BitSetAssert(ci->clientEvents.events, 43, 32);
          ci->clientEvents.hasEvents = 1;
          Com_BitClearAssert(ci->clientEvents.isContinue, 43, 32);
          Com_BitClearAssert(ci->clientEvents.force, 43, 32);
        }
      }
      else
      {
        if ( ci->playerASM_scripted_anim_start_time < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6602, ASSERT_TYPE_ASSERT, "(ci->playerASM_scripted_anim_start_time >= 0)", (const char *)&queryFormat, "ci->playerASM_scripted_anim_start_time >= 0") )
          __debugbreak();
        v13 = 1.0 / (float)(*(float *)&Length * 1000.0);
        if ( XAnimIsLooped(obj->tree->anims, XAnimIndex) )
        {
          BG_ScriptedAsmDebugPrint("bg_animation looped", serverTime, ci, NULL);
          _XMM0 = 0i64;
          __asm { vroundss xmm4, xmm0, xmm2, 1 }
          v16 = (float)((float)(serverTime - ci->playerASM_scripted_anim_start_time - deltaTime) * v13) - *(float *)&_XMM4;
        }
        else
        {
          v17 = (float)(serverTime - ci->playerASM_scripted_anim_start_time - deltaTime) * v13;
          v18 = I_fclamp(v17, 0.0, 1.0);
          v16 = v17;
          if ( *(float *)&v18 == 1.0 )
          {
            BG_ScriptedAsmDebugPrint("bg_animation complete", serverTime, ci, NULL);
            Com_BitSetAssert(ci->clientEvents.events, 43, 32);
            ci->clientEvents.hasEvents = 1;
            Com_BitClearAssert(ci->clientEvents.isContinue, 43, 32);
            Com_BitClearAssert(ci->clientEvents.force, 43, 32);
          }
        }
        v19 = j_va("bg_animation update end %f", v16);
        BG_ScriptedAsmDebugPrint(v19, serverTime, ci, NULL);
        XAnimSetTime(ci->pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, XAnimIndex, v16);
      }
    }
    else
    {
      Com_PrintWarning(19, "BG_AnimUpdateScriptedAnimSceneTime could not find the current scripted xanim index in animtree %s. Did you add your scripted anim to the player ASM?", ci->pXAnimTree->anims->debugName);
    }
  }
}

/*
==============
BG_AnimUpdateStanceCondition
==============
*/
void BG_AnimUpdateStanceCondition(const pmove_t *pm, pml_t *pml, characterInfo_t *ci)
{
  playerState_s *ps; 
  unsigned int v7; 
  unsigned int v8; 
  EffectiveStance EffectiveStanceForWorldModelAnimation; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4120, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4120, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4122, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v7 = ci->clientConditions[4][0];
  v8 = 0;
  EffectiveStanceForWorldModelAnimation = PM_GetEffectiveStanceForWorldModelAnimation(ps);
  switch ( EffectiveStanceForWorldModelAnimation )
  {
    case PM_EFF_STANCE_PRONE:
      v8 = 2;
      break;
    case PM_EFF_STANCE_DUCKED:
      v8 = 1;
      break;
    case PM_EFF_STANCE_LASTSTANDCRAWL:
      v8 = 3;
      break;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 0x1Du) && !v8 )
    v8 = 1;
  if ( v7 )
  {
    switch ( v7 )
    {
      case 1u:
        if ( !v8 )
        {
          BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_CROUCHTOSTAND, 0, 1, &pml->holdrand);
          goto LABEL_43;
        }
        if ( v8 == 2 )
        {
          BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_CROUCHTOPRONE, 0, 1, &pml->holdrand);
          goto LABEL_43;
        }
        break;
      case 2u:
        if ( !v8 )
        {
          BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_PRONETOSTAND, 0, 1, &pml->holdrand);
          goto LABEL_43;
        }
        if ( v8 == 1 )
        {
          BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_PRONETOCROUCH, 0, 1, &pml->holdrand);
          goto LABEL_43;
        }
        break;
      case 3u:
        if ( v8 == 3 )
          return;
        goto LABEL_43;
    }
    goto LABEL_35;
  }
  if ( v8 != 1 )
  {
    if ( v8 == 2 )
    {
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_STANDTOPRONE, 0, 1, &pml->holdrand);
      goto LABEL_43;
    }
LABEL_35:
    if ( v8 != 3 )
      return;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_CROUCHTOLASTSTAND, 0, 1, &pml->holdrand);
      }
      else if ( v7 == 2 )
      {
        BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_PRONETOLASTSTAND, 0, 1, &pml->holdrand);
      }
    }
    else
    {
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_STANDTOLASTSTAND, 0, 1, &pml->holdrand);
    }
    goto LABEL_43;
  }
  BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_STANDTOCROUCH, 0, 1, &pml->holdrand);
LABEL_43:
  BG_SetConditionValue(ci, 4, v8);
}

/*
==============
BG_AnimUpdateTurretConditions
==============
*/
void BG_AnimUpdateTurretConditions(characterInfo_t *ci, const Weapon *r_weapon, const bool isRemote, const bool isTurretActive)
{
  unsigned __int64 v6; 
  turret3pAnimType_t turret3pAnimType; 
  __int32 v8; 

  if ( isRemote )
  {
    v6 = 3i64;
  }
  else if ( isTurretActive )
  {
    turret3pAnimType = BG_WeaponDefAtIndex(r_weapon->weaponIdx)->turret3pAnimType;
    if ( turret3pAnimType )
    {
      v8 = turret3pAnimType - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
          v6 = 5i64;
        else
          v6 = BG_TurretWeaponUses3pIK(r_weapon, 0) + 1i64;
      }
      else
      {
        v6 = 4i64;
      }
    }
    else
    {
      v6 = 2i64;
    }
  }
  else
  {
    v6 = 0i64;
  }
  BG_SetConditionValue(ci, 2, v6);
}

/*
==============
BG_AnimationMP_FilterCorpseAttachmentModels
==============
*/
void BG_AnimationMP_FilterCorpseAttachmentModels(char (*attachModelNames)[9][64], char (*attachModelTagNames)[9][64])
{
  signed __int64 v2; 
  char (*v3)[9][64]; 
  signed __int64 v4; 
  char (*v5)[9][64]; 
  __int64 v6; 

  v2 = (char *)attachModelTagNames - (char *)attachModelNames;
  v3 = attachModelTagNames;
  v4 = (char *)attachModelNames - (char *)attachModelTagNames;
  v5 = attachModelNames;
  v6 = 9i64;
  do
  {
    if ( !I_stricmp(&(*v5)[0][v2], "J_Spine4") || BG_Weapons_IsRiotShieldModelName((const char *const)v5) )
    {
      (*v3)[0][v4] = 0;
      *(_BYTE *)v3 = 0;
    }
    v5 = (char (*)[9][64])((char *)v5 + 64);
    v3 = (char (*)[9][64])((char *)v3 + 64);
    --v6;
  }
  while ( v6 );
}

/*
==============
BG_AnimationMP_FindAnimTrees
==============
*/
void BG_AnimationMP_FindAnimTrees(int animUser)
{
  BgStatic *ActiveStatics; 
  __int64 v3; 
  scrContext_t *v4; 
  const Animset *Default; 
  const char *v6; 
  XAnim_s *anims; 
  const char *AnimTreeName; 
  BgStatic *v9; 
  __int64 v10; 
  scrContext_t *v11; 
  XAnim_s *v12; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10505, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  BG_CheckThread();
  if ( PlayerASM_IsEnabled() )
  {
    if ( !PlayerASM_IsConnectingPaths() )
    {
      ActiveStatics = BgStatic::GetActiveStatics();
      v3 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10521, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      v4 = ScriptContext_GetFromAnimUser(animUser);
      Default = Animset_FindDefault();
      if ( !Default )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F093A0, 1181i64);
      if ( !Default->animTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10530, ASSERT_TYPE_ASSERT, "(animset->animTree != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "animset->animTree != NULL_SCR_STRING") )
        __debugbreak();
      v6 = SL_ConvertToString(Default->animTree);
      anims = Scr_FindAnimTree(v4, v6).anims;
      if ( !anims )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F09360, 1180i64, v6);
      *(_QWORD *)(v3 + 17712) = anims;
    }
  }
  else
  {
    AnimTreeName = BG_Animation_GetAnimTreeName();
    v9 = BgStatic::GetActiveStatics();
    v10 = (__int64)v9->GetAnimStatics(v9);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10540, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    v11 = ScriptContext_GetFromAnimUser(animUser);
    v12 = Scr_FindAnimTree(v11, AnimTreeName).anims;
    if ( !v12 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F09360, 1180i64, AnimTreeName);
    *(_WORD *)(v10 + 40) = *(_WORD *)(v10 + 17720);
    *(_WORD *)(v10 + 42) = *(_WORD *)(v10 + 17728);
    *(_WORD *)(v10 + 46) = *(_WORD *)(v10 + 17736);
    *(_WORD *)(v10 + 48) = *(_WORD *)(v10 + 17744);
    *(_WORD *)(v10 + 50) = *(_WORD *)(v10 + 17752);
    *(_WORD *)(v10 + 52) = *(_WORD *)(v10 + 17760);
    *(_WORD *)(v10 + 54) = *(_WORD *)(v10 + 17768);
    *(_WORD *)(v10 + 56) = *(_WORD *)(v10 + 17776);
    *(_WORD *)(v10 + 58) = *(_WORD *)(v10 + 17784);
    *(_WORD *)(v10 + 60) = *(_WORD *)(v10 + 17792);
    *(_WORD *)(v10 + 62) = *(_WORD *)(v10 + 17800);
    *(_WORD *)(v10 + 64) = *(_WORD *)(v10 + 17808);
    *(_WORD *)(v10 + 66) = *(_WORD *)(v10 + 17816);
    *(_WORD *)(v10 + 68) = *(_WORD *)(v10 + 17824);
    *(_WORD *)(v10 + 70) = *(_WORD *)(v10 + 17832);
    *(_WORD *)(v10 + 72) = *(_WORD *)(v10 + 17840);
    *(_WORD *)(v10 + 74) = *(_WORD *)(v10 + 17848);
    *(_WORD *)(v10 + 76) = *(_WORD *)(v10 + 17856);
    *(_WORD *)(v10 + 78) = *(_WORD *)(v10 + 17864);
    *(_WORD *)(v10 + 80) = *(_WORD *)(v10 + 17872);
    *(_WORD *)(v10 + 82) = *(_WORD *)(v10 + 17904);
    *(_WORD *)(v10 + 84) = *(_WORD *)(v10 + 17912);
    *(_WORD *)(v10 + 86) = *(_WORD *)(v10 + 17920);
    *(_WORD *)(v10 + 88) = *(_WORD *)(v10 + 17928);
    *(_WORD *)(v10 + 90) = *(_WORD *)(v10 + 17936);
    *(_WORD *)(v10 + 92) = *(_WORD *)(v10 + 17944);
    *(_WORD *)(v10 + 94) = *(_WORD *)(v10 + 17952);
    *(_WORD *)(v10 + 96) = *(_WORD *)(v10 + 17960);
    *(_WORD *)(v10 + 98) = *(_WORD *)(v10 + 17968);
    *(_WORD *)(v10 + 100) = *(_WORD *)(v10 + 17976);
    *(_WORD *)(v10 + 102) = *(_WORD *)(v10 + 17984);
    *(_WORD *)(v10 + 44) = 0;
    *(_QWORD *)(v10 + 17712) = v12;
    *(_QWORD *)(v10 + 32) = v12;
  }
}

/*
==============
BG_AnimationMP_FindAnims
==============
*/
void BG_AnimationMP_FindAnims(void)
{
  const char *AnimTreeName; 
  BgStatic *ActiveStatics; 
  __int64 v2; 
  scrContext_t *v3; 
  scr_string_t String; 
  bool *v5; 
  SuitAnimType v6; 
  PlayerAnimScript *PlayerAnimScript; 
  PlayerAnimScript *v8; 
  unsigned __int16 v9; 
  __int64 v10; 
  scr_string_t v11; 
  const char *v12; 
  scr_string_t v13; 
  const char *v14; 
  SuitAnimType v15; 
  bool *v16; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10380, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  BG_CheckThread();
  if ( !PlayerASM_IsEnabled() )
  {
    AnimTreeName = BG_Animation_GetAnimTreeName();
    ActiveStatics = BgStatic::GetActiveStatics();
    v2 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10395, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    v3 = ScriptContext_GetFromAnimUser(*(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "torso", (scr_anim_t *)(v2 + 17720), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "legs", (scr_anim_t *)(v2 + 17728), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "stndrd_aim", (scr_anim_t *)(v2 + 17736), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "stndrd_aim_1", (scr_anim_t *)(v2 + 17744), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "stndrd_aim_2", (scr_anim_t *)(v2 + 17752), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "stndrd_aim_3", (scr_anim_t *)(v2 + 17760), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "stndrd_aim_4", (scr_anim_t *)(v2 + 17768), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "stndrd_aim_6", (scr_anim_t *)(v2 + 17776), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "stndrd_aim_7", (scr_anim_t *)(v2 + 17784), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "stndrd_aim_8", (scr_anim_t *)(v2 + 17792), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "stndrd_aim_9", (scr_anim_t *)(v2 + 17800), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "strafe_aim", (scr_anim_t *)(v2 + 17808), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "strafe_aim_1", (scr_anim_t *)(v2 + 17816), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "strafe_aim_2", (scr_anim_t *)(v2 + 17824), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "strafe_aim_3", (scr_anim_t *)(v2 + 17832), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "strafe_aim_4", (scr_anim_t *)(v2 + 17840), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "strafe_aim_6", (scr_anim_t *)(v2 + 17848), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "strafe_aim_7", (scr_anim_t *)(v2 + 17856), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "strafe_aim_8", (scr_anim_t *)(v2 + 17864), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "strafe_aim_9", (scr_anim_t *)(v2 + 17872), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "lean", (scr_anim_t *)(v2 + 17880), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "lean_left", (scr_anim_t *)(v2 + 17888), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "lean_right", (scr_anim_t *)(v2 + 17896), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "finger_pose_left", (scr_anim_t *)(v2 + 17904), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "finger_pose_right", (scr_anim_t *)(v2 + 17912), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "additive_adjust", (scr_anim_t *)(v2 + 17920), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "additive_torso", (scr_anim_t *)(v2 + 17928), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "additive_alt_override", (scr_anim_t *)(v2 + 17936), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "infil", (scr_anim_t *)(v2 + 17944), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "ik_ladder_wm", (scr_anim_t *)(v2 + 17952), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "ik_node", (scr_anim_t *)(v2 + 17960), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "ik_foot_antislide", (scr_anim_t *)(v2 + 17968), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "wobble", (scr_anim_t *)(v2 + 17976), *(_DWORD *)(v2 + 19544));
    Scr_FindAnim(AnimTreeName, "proc_node", (scr_anim_t *)(v2 + 17984), *(_DWORD *)(v2 + 19544));
    String = SL_FindString(AnimTreeName);
    Scr_RegisterSharedParameterPlayerTreeName(v3, String);
    v5 = s_suitAnimIndexActive;
    v6 = ANIM_SUIT_HUMAN;
    v15 = ANIM_SUIT_HUMAN;
    v16 = s_suitAnimIndexActive;
    do
    {
      if ( *v5 )
      {
        PlayerAnimScript = BG_Animation_GetPlayerAnimScript(v6);
        v8 = PlayerAnimScript;
        if ( PlayerAnimScript )
        {
          v9 = 0;
          if ( PlayerAnimScript->animationCount )
          {
            do
            {
              v10 = (__int64)&v8->animations[v9];
              v11 = *(_DWORD *)(v10 + 4);
              *(_QWORD *)(v10 + 24) = 0i64;
              *(_QWORD *)(v10 + 32) = 0i64;
              if ( v11 )
              {
                v12 = SL_ConvertToString(v11);
                Scr_FindAnim(AnimTreeName, v12, (scr_anim_t *)(v10 + 24), *(_DWORD *)(v2 + 19544));
              }
              v13 = *(_DWORD *)(v10 + 8);
              if ( v13 )
              {
                v14 = SL_ConvertToString(v13);
                Scr_FindAnim(AnimTreeName, v14, (scr_anim_t *)(v10 + 32), *(_DWORD *)(v2 + 19544));
              }
              ++v9;
            }
            while ( v9 < v8->animationCount );
            v6 = v15;
            v5 = v16;
          }
        }
      }
      ++v6;
      ++v5;
      v15 = v6;
      v16 = v5;
    }
    while ( (unsigned int)v6 < NUM_ANIM_SUIT_STATE );
  }
}

/*
==============
BG_AnimationMP_FrontendInitialization
==============
*/
void BG_AnimationMP_FrontendInitialization(animScriptData_t *scriptData)
{
  if ( !scriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1520, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
    __debugbreak();
  memset_0(scriptData, 0, sizeof(animScriptData_t));
}

/*
==============
BG_AnimationMP_GatherDObjModels
==============
*/
__int64 BG_AnimationMP_GatherDObjModels(const DObj *dobj, DObjModel (*outDObjModels)[32])
{
  int v4; 
  int NumModels; 
  __int64 v6; 
  const XModel *Model; 

  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10168, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  memset_0(outDObjModels, 0, sizeof(DObjModel[32]));
  v4 = 0;
  NumModels = DObjGetNumModels(dobj);
  v6 = NumModels;
  if ( NumModels > 0 )
  {
    do
    {
      Model = DObjGetModel(dobj, v4++);
      (*outDObjModels)[0].model = Model;
      outDObjModels = (DObjModel (*)[32])((char *)outDObjModels + 80);
      --v6;
    }
    while ( v6 );
  }
  return (unsigned int)NumModels;
}

/*
==============
BG_AnimationMP_GetAnimationForIndex
==============
*/
const PlayerAnimEntry *BG_AnimationMP_GetAnimationForIndex(int index, SuitAnimType suitAnimIndex)
{
  __int64 v2; 
  __int64 v3; 
  BgStatic *ActiveStatics; 
  __int64 v5; 
  __int64 v6; 
  __int64 v8; 

  v2 = index;
  v3 = suitAnimIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4014, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( (unsigned int)v3 >= 4 )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4015, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v8, 4) )
      __debugbreak();
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  v5 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4019, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v6 = *(_QWORD *)(v5 + 8 * v3);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4022, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  if ( (unsigned int)v2 >= *(_DWORD *)(v6 + 8) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F06018, 1177i64);
  return (const PlayerAnimEntry *)(*(_QWORD *)(v6 + 48) + 104 * v2);
}

/*
==============
BG_AnimationMP_GetGrenadeEvent
==============
*/
__int64 BG_AnimationMP_GetGrenadeEvent(const bool isThrow)
{
  return (unsigned int)isThrow + 15;
}

/*
==============
BG_AnimationMP_GetLegsAnimation
==============
*/
__int64 BG_AnimationMP_GetLegsAnimation(const entityState_t *entityState)
{
  __int64 v2; 
  unsigned int v3; 
  BgStatic *ActiveStatics; 
  __int64 v5; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v9; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10749, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  v2 = (entityState->animInfo.animData >> 13) & 0x7FF;
  v3 = (entityState->animInfo.animData >> 13) & 0x800;
  ActiveStatics = BgStatic::GetActiveStatics();
  v5 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10758, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v6 = *(_QWORD *)(v5 + 8i64 * ((entityState->animInfo.animData >> 1) & 3));
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10764, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  v7 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 144) + 2 * v2);
  if ( v7 >= *(_DWORD *)(v6 + 8) )
  {
    LODWORD(v9) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10767, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( playerAnim->animationCount )", "animIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v9, *(_DWORD *)(v6 + 8)) )
      __debugbreak();
  }
  return v7 | (v3 != 0 ? 0x1000 : 0);
}

/*
==============
BG_AnimationMP_GetPowerAnimEvent
==============
*/
__int64 BG_AnimationMP_GetPowerAnimEvent(pmove_t *pm)
{
  playerState_s *ps; 
  const Weapon *UsedOffHandWeapon; 
  scriptedAnimEvent_t ScriptedAnimEvent; 
  unsigned int v5; 

  if ( !pm )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3994, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3995, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
  }
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3995, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  UsedOffHandWeapon = PM_Weapon_GetUsedOffHandWeapon(pm->weaponMap, ps);
  ScriptedAnimEvent = BG_Weapons_GetScriptedAnimEvent(UsedOffHandWeapon);
  v5 = 24;
  if ( ScriptedAnimEvent == SCRIPTEDANIMEVENT_POWER_ACTIVE )
    return 22;
  return v5;
}

/*
==============
BG_AnimationMP_GetSuitAnimIndex
==============
*/
__int64 BG_AnimationMP_GetSuitAnimIndex(const entityState_t *entityState)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10681, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature(Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature(Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !entityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10682, ASSERT_TYPE_ASSERT, "(entityState)", (const char *)&queryFormat, "entityState") )
    __debugbreak();
  return (entityState->animInfo.animData >> 1) & 3;
}

/*
==============
BG_AnimationMP_GetTorsoAnimation
==============
*/
__int64 BG_AnimationMP_GetTorsoAnimation(const entityState_t *entityState)
{
  __int64 v2; 
  unsigned int v3; 
  BgStatic *ActiveStatics; 
  __int64 v5; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v9; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10775, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  v2 = (entityState->animInfo.animData >> 3) & 0x1FF;
  v3 = (entityState->animInfo.animData >> 3) & 0x200;
  ActiveStatics = BgStatic::GetActiveStatics();
  v5 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10784, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v6 = *(_QWORD *)(v5 + 8i64 * ((entityState->animInfo.animData >> 1) & 3));
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10790, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  v7 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 128) + 2 * v2);
  if ( v7 >= *(_DWORD *)(v6 + 8) )
  {
    LODWORD(v9) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10793, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( playerAnim->animationCount )", "animIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v9, *(_DWORD *)(v6 + 8)) )
      __debugbreak();
  }
  return v7 | (v3 != 0 ? 0x1000 : 0);
}

/*
==============
BG_AnimationMP_GetXAnimIndex
==============
*/
__int64 BG_AnimationMP_GetXAnimIndex(const BgAnimStatic *const bgameAnim, const SuitAnimType suitAnimIndex, const int animIndex)
{
  __int64 v4; 
  PlayerAnimScript *v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v10; 
  __int64 v11; 

  v4 = suitAnimIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 490, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !bgameAnim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 491, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( (unsigned int)v4 >= 4 )
  {
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 492, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v10, 4) )
      __debugbreak();
  }
  v6 = bgameAnim->animScriptData.suitScript[v4];
  v7 = animIndex & 0xFFFFEFFF;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 497, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
    __debugbreak();
  if ( v7 >= v6->animationCount )
  {
    LODWORD(v11) = v6->animationCount;
    LODWORD(v10) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 498, ASSERT_TYPE_ASSERT, "(unsigned)( animEntryIndex ) < (unsigned)( scriptData->animationCount )", "animEntryIndex doesn't index scriptData->animationCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v8 = (__int64)&v6->animations[v7];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 413, ASSERT_TYPE_ASSERT, "(animEntry)", (const char *)&queryFormat, "animEntry") )
    __debugbreak();
  return *(unsigned __int16 *)(v8 + 24);
}

/*
==============
BG_AnimationMP_GetXAnimIndexForCharacter
==============
*/
int BG_AnimationMP_GetXAnimIndexForCharacter(const BgAnimStatic *const bgameAnim, const characterInfo_t *ci, const int animIndex)
{
  SuitAnimType SuitAnimIndexFromCharacter; 
  __int64 v7; 
  const PlayerAnimScript *v8; 
  __int64 v10; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 511, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !bgameAnim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 512, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(ci);
  v7 = SuitAnimIndexFromCharacter;
  if ( (unsigned int)SuitAnimIndexFromCharacter >= NUM_ANIM_SUIT_STATE )
  {
    LODWORD(v10) = SuitAnimIndexFromCharacter;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 515, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v10, 4) )
      __debugbreak();
  }
  v8 = bgameAnim->animScriptData.suitScript[v7];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 518, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
    __debugbreak();
  return BG_GetXAnimIndexForCharacterInternal(ci, v8, animIndex);
}

/*
==============
BG_AnimationMP_InitializeAnimations
==============
*/
void BG_AnimationMP_InitializeAnimations(void)
{
  BgStatic *ActiveStatics; 
  __int64 v1; 
  bool *v2; 
  SuitAnimType v3; 
  _QWORD *v4; 

  if ( !PlayerASM_IsEnabled() )
  {
    if ( ((unsigned __int8)&s_suitAnimInitializeLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_suitAnimInitializeLock) )
      __debugbreak();
    if ( _InterlockedCompareExchange(&s_suitAnimInitializeLock, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1481, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_suitAnimInitializeLock, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_suitAnimInitializeLock, 1, 0 ) == 0") )
      __debugbreak();
    ActiveStatics = BgStatic::GetActiveStatics();
    v1 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
    if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1486, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    v2 = s_suitAnimIndexActive;
    v3 = ANIM_SUIT_HUMAN;
    v4 = (_QWORD *)v1;
    do
    {
      if ( *v2 )
      {
        BG_AnimationMP_SetSuitScriptProperties(v3, *(XAnim_s **)(v1 + 32));
        *v4 = BG_Animation_GetPlayerAnimScript(v3);
      }
      ++v3;
      ++v2;
      ++v4;
    }
    while ( (unsigned int)v3 < NUM_ANIM_SUIT_STATE );
    if ( ((unsigned __int64)&s_suitAnimInitializeLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_suitAnimInitializeLock) )
      __debugbreak();
    if ( _InterlockedCompareExchange(&s_suitAnimInitializeLock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1503, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_suitAnimInitializeLock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_suitAnimInitializeLock, 0, 1 ) == 1") )
      __debugbreak();
  }
}

/*
==============
BG_AnimationMP_IsCharacterDObjDirty
==============
*/
char BG_AnimationMP_IsCharacterDObjDirty(const DObj *obj, const DObjPartBits *partBits, const characterInfo_t *ci, const Weapon *r_heldWeapon, const Weapon *r_stowedWeapon, const Weapon *r_thrownWeapon, const Weapon *r_executionWeapon, const Weapon *r_accessoryWeapon, const bool usingDetonator, const bool usingExecutionProp, const bool doOptimizedEveryFrameWeaponModelCheck)
{
  BgStatic *ActiveStatics; 
  BgStatic *v17; 
  BgStatic *v18; 

  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9367, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9368, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !obj || ci->dobjDirty || memcmp_0(&ci->dobjHeldWeapon, r_heldWeapon, 0x3Cui64) || memcmp_0(&ci->dobjStowedWeapon, r_stowedWeapon, 0x3Cui64) || memcmp_0(&ci->dobjThrownWeapon, r_thrownWeapon, 0x3Cui64) || memcmp_0(&ci->dobjExecutionWeapon, r_executionWeapon, 0x3Cui64) || memcmp_0(&ci->dobjAccessoryWeapon, r_accessoryWeapon, 0x3Cui64) || ci->dobjUsingDetonator != usingDetonator || ci->dobjUsingExecutionProp != usingExecutionProp || !bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::isEqual<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&partBits->DObjPartBitsT<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > >, &ci->replicatedPartBits) )
    return 1;
  ActiveStatics = BgStatic::GetActiveStatics();
  if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9406, ASSERT_TYPE_ASSERT, "(bgameStatic)", (const char *)&queryFormat, "bgameStatic") )
    __debugbreak();
  if ( doOptimizedEveryFrameWeaponModelCheck && !ActiveStatics->WeaponModelLoadStatusMaybeDirtyThisFrame(ActiveStatics) )
  {
    ActiveStatics->WeaponModelLoadStatusMaybeDirtyThisFrameVerification(ActiveStatics, ci);
    return 0;
  }
  if ( ((v17 = BgStatic::GetActiveStatics(), v18 = v17, !ci->dobjHeldWeapon.weaponIdx) || ci->dobjHeldWeaponLoaded == v17->IsWeaponWorldModelLoaded(v17, &ci->dobjHeldWeapon)) && (!ci->dobjStowedWeapon.weaponIdx || ci->dobjStowedWeaponLoaded == v18->IsWeaponWorldModelLoaded(v18, &ci->dobjStowedWeapon)) && (!ci->dobjThrownWeapon.weaponIdx || ci->dobjThrownWeaponLoaded == v18->IsWeaponWorldModelLoaded(v18, &ci->dobjThrownWeapon)) && (!ci->dobjExecutionWeapon.weaponIdx || ci->dobjExecutionWeaponLoaded == v18->IsWeaponWorldModelLoaded(v18, &ci->dobjExecutionWeapon)) && (!ci->dobjAccessoryWeapon.weaponIdx || ci->dobjAccessoryWeaponLoaded == v18->IsWeaponWorldModelLoaded(v18, &ci->dobjAccessoryWeapon)) )
    return 0;
  else
    return 1;
}

/*
==============
BG_AnimationMP_LoadWeaponAnims
==============
*/
void BG_AnimationMP_LoadWeaponAnims(animScriptData_t *scriptData)
{
  unsigned __int16 v2; 
  const WeaponDef *v3; 
  const WeaponDef *v4; 
  unsigned int i; 
  AnimOverride *animOverrides; 
  __int64 v7; 

  if ( !scriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1451, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
    __debugbreak();
  if ( !PlayerASM_IsEnabled() )
  {
    v2 = 1;
    scriptData->weaponAnims.numAnimations = 0;
    if ( BG_GetNumWeapons() > 1 )
    {
      do
      {
        v3 = BG_WeaponDefAtIndex(v2);
        v4 = BG_WeaponDefAtIndex(v2);
        BG_AnimationMP_RegisterWeaponAnims(scriptData, v3->szXAnims);
        BG_AnimationMP_RegisterWeaponAnims(scriptData, v4->szXAnims);
        BG_AnimationMP_RegisterWeaponAnims(scriptData, v3->szXAnimsLeftHanded);
        BG_AnimationMP_RegisterWeaponAnims(scriptData, v3->szXAnimsRightHanded);
        for ( i = 0; i < v3->numAnimOverrides; ++i )
        {
          animOverrides = v3->animOverrides;
          v7 = i;
          if ( animOverrides[v7].numBindings )
          {
            BG_AnimationMP_RegisterWeaponAnims(scriptData, animOverrides[v7].overrides);
            BG_AnimationMP_RegisterWeaponAnims(scriptData, v3->animOverrides[v7].overridesAlt);
          }
        }
        ++v2;
      }
      while ( v2 < BG_GetNumWeapons() );
    }
  }
}

/*
==============
BG_AnimationMP_PackPitch
==============
*/
unsigned __int16 BG_AnimationMP_PackPitch(float pitch)
{
  int v1; 

  v1 = MSG_PackSignedFloat(pitch, 90.0, 0x10u);
  return truncate_cast<unsigned short,int>(v1);
}

/*
==============
BG_AnimationMP_PlayerToEntityAnimation
==============
*/
void BG_AnimationMP_PlayerToEntityAnimation(const playerState_s *playerState, entityState_t *entityState)
{
  SuitAnimType SuitAnimIndexFromPlayerState; 
  __int64 v5; 
  int v6; 
  unsigned int v7; 
  BgStatic *ActiveStatics; 
  __int64 v9; 
  __int64 v10; 
  bool v11; 
  int torsoAnim; 
  int v13; 
  unsigned int v14; 
  BgStatic *v15; 
  __int64 v16; 
  __int64 v17; 
  bool v18; 
  __int64 v19; 
  __int64 v20; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10656, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10657, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( !entityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10658, ASSERT_TYPE_ASSERT, "(entityState)", (const char *)&queryFormat, "entityState") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() )
  {
    BG_PlayerASM_CopyAnimDataToEntity(playerState, entityState);
    return;
  }
  SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(playerState);
  v5 = SuitAnimIndexFromPlayerState;
  if ( (unsigned int)SuitAnimIndexFromPlayerState >= NUM_ANIM_SUIT_STATE )
  {
    LODWORD(v19) = SuitAnimIndexFromPlayerState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10667, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v19, 4) )
      __debugbreak();
  }
  entityState->animInfo.animData &= 0xFFFFFFF9;
  entityState->animInfo.animData |= 2 * (v5 & 3);
  v6 = playerState->legsAnim & 0x1000;
  v7 = playerState->legsAnim & 0xFFFFEFFF;
  ActiveStatics = BgStatic::GetActiveStatics();
  v9 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10603, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( (unsigned int)v5 >= 4 )
  {
    LODWORD(v20) = 4;
    LODWORD(v19) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10604, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( ( sizeof( *array_counter( bgameAnim->animScriptData.suitScript ) ) + 0 ) )", "suitAnimIndex doesn't index ARRAY_COUNT( bgameAnim->animScriptData.suitScript )\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  v10 = *(_QWORD *)(v9 + 8 * v5);
  if ( !v10 )
  {
    if ( !v7 )
      goto LABEL_31;
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10616, ASSERT_TYPE_ASSERT, "(animIndex == 0)", "%s\n\tTrying to apply a leg animation to the player without having loaded the player's animation scripts.", "animIndex == 0");
    goto LABEL_29;
  }
  if ( v7 >= *(_DWORD *)(v10 + 8) )
  {
    LODWORD(v20) = *(_DWORD *)(v10 + 8);
    LODWORD(v19) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10609, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( playerAnim->animationCount )", "animIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  v7 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 136) + 2i64 * (int)v7);
  if ( v7 >= *(_DWORD *)(v10 + 40) )
  {
    LODWORD(v20) = *(_DWORD *)(v10 + 40);
    LODWORD(v19) = v7;
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10612, ASSERT_TYPE_ASSERT, "(unsigned)( packIndex ) < (unsigned)( playerAnim->legsAnimCount )", "packIndex doesn't index playerAnim->legsAnimCount\n\t%i not in [0, %i)", v19, v20);
LABEL_29:
    if ( v11 )
      __debugbreak();
  }
LABEL_31:
  entityState->animInfo.animData &= 0xFE001FFF;
  entityState->animInfo.animData |= (v7 & 0xFFF | (v6 != 0 ? 0x800 : 0)) << 13;
  torsoAnim = playerState->torsoAnim;
  v13 = torsoAnim & 0x1000;
  v14 = torsoAnim & 0xFFFFEFFF;
  v15 = BgStatic::GetActiveStatics();
  v16 = (__int64)v15->GetAnimStatics(v15);
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10633, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( (unsigned int)v5 >= 4 )
  {
    LODWORD(v20) = 4;
    LODWORD(v19) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10634, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( ( sizeof( *array_counter( bgameAnim->animScriptData.suitScript ) ) + 0 ) )", "suitAnimIndex doesn't index ARRAY_COUNT( bgameAnim->animScriptData.suitScript )\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  v17 = *(_QWORD *)(v16 + 8 * v5);
  if ( v17 )
  {
    if ( v14 >= *(_DWORD *)(v17 + 8) )
    {
      LODWORD(v20) = *(_DWORD *)(v17 + 8);
      LODWORD(v19) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10639, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( playerAnim->animationCount )", "animIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    v14 = *(unsigned __int16 *)(*(_QWORD *)(v17 + 120) + 2i64 * (int)v14);
    if ( v14 < *(_DWORD *)(v17 + 36) )
      goto LABEL_47;
    LODWORD(v20) = *(_DWORD *)(v17 + 36);
    LODWORD(v19) = v14;
    v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10642, ASSERT_TYPE_ASSERT, "(unsigned)( packIndex ) < (unsigned)( playerAnim->torsoAnimCount )", "packIndex doesn't index playerAnim->torsoAnimCount\n\t%i not in [0, %i)", v19, v20);
    goto LABEL_45;
  }
  if ( v14 )
  {
    v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10646, ASSERT_TYPE_ASSERT, "(animIndex == 0)", "%s\n\tTrying to apply a torso animation to the player without having loaded the player's animation scripts.", "animIndex == 0");
LABEL_45:
    if ( v18 )
      __debugbreak();
  }
LABEL_47:
  entityState->animInfo.animData &= 0xFFFFE007;
  entityState->animInfo.animData |= 8 * (v14 & 0x3FF | (v13 != 0 ? 0x200 : 0));
}

/*
==============
BG_AnimationMP_QuantizePitch
==============
*/
double BG_AnimationMP_QuantizePitch(float pitch)
{
  int v1; 
  unsigned __int16 v2; 

  v1 = MSG_PackSignedFloat(pitch, 90.0, 0x10u);
  v2 = truncate_cast<unsigned short,int>(v1);
  return MSG_UnpackSignedFloat(v2, 90.0, 0x10u);
}

/*
==============
BG_AnimationMP_RegisterSuit
==============
*/
void BG_AnimationMP_RegisterSuit(const unsigned int suitIndex, const char *suitName)
{
  SuitAnimType SuitAnimType; 

  SuitAnimType = BG_GetSuitAnimType(suitIndex);
  if ( (unsigned int)SuitAnimType <= ANIM_SUIT_REAPER )
    s_suitAnimIndexActive[SuitAnimType] = 1;
}

/*
==============
BG_AnimationMP_RegisterSuitAnimIndexes
==============
*/
void BG_AnimationMP_RegisterSuitAnimIndexes(bool isFullInit)
{
  if ( isFullInit )
  {
    *(_DWORD *)s_suitAnimIndexActive = 0;
    NetConstStrings_CallForAllSuitStrings(BG_AnimationMP_RegisterSuit);
  }
  else
  {
    NetConstStrings_CallForAllSuitStrings(BG_AnimationMP_VerifySuit);
  }
}

/*
==============
BG_AnimationMP_RegisterWeaponAnims
==============
*/
void BG_AnimationMP_RegisterWeaponAnims(animScriptData_t *scriptData, WeaponAnimPackage *const animPackage)
{
  WeaponAnimPackage *v2; 
  const char *AnimTreeName; 
  BgStatic *ActiveStatics; 
  __int64 v6; 
  unsigned int i; 
  const char **p_name; 
  int v9; 
  unsigned int numAnimations; 
  unsigned int v11; 
  int v12; 
  __int64 v13; 
  const char *v14; 
  char *szAnimName; 
  __int64 v16; 
  signed __int64 v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  int v21; 
  int v22; 
  loadAnim_t *v23; 
  const char *v24; 
  unsigned __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  const char *v29; 
  char *v30; 
  char v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  const char *v38; 

  v2 = animPackage;
  if ( !scriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1348, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
    __debugbreak();
  if ( v2 )
  {
    BG_CheckThread();
    AnimTreeName = BG_Animation_GetAnimTreeName();
    v38 = AnimTreeName;
    ActiveStatics = BgStatic::GetActiveStatics();
    v36 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
    v6 = v36;
    if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1362, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    for ( i = 609; i <= 0x265; ++i )
    {
      p_name = &v2->anims[i]->name;
      if ( p_name && **p_name )
      {
        v9 = BG_StringHashValue(*p_name);
        numAnimations = scriptData->weaponAnims.numAnimations;
        v11 = 0;
        v12 = v9;
        if ( numAnimations )
        {
          while ( 1 )
          {
            v13 = v11;
            if ( v12 == scriptData->weaponAnims.animations[v13].iNameHash )
              break;
LABEL_32:
            numAnimations = scriptData->weaponAnims.numAnimations;
            if ( ++v11 >= numAnimations )
            {
              v6 = v36;
              AnimTreeName = v38;
              goto LABEL_34;
            }
          }
          v14 = *p_name;
          szAnimName = scriptData->weaponAnims.animations[v13].szAnimName;
          v16 = 0x7FFFFFFFi64;
          if ( !*p_name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          if ( !szAnimName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          v17 = v14 - szAnimName;
          do
          {
            v18 = (unsigned __int8)szAnimName[v17];
            v19 = v16;
            v20 = (unsigned __int8)*szAnimName++;
            --v16;
            if ( !v19 )
              break;
            if ( v18 != v20 )
            {
              v21 = v18 + 32;
              if ( (unsigned int)(v18 - 65) > 0x19 )
                v21 = v18;
              v18 = v21;
              v22 = v20 + 32;
              if ( (unsigned int)(v20 - 65) > 0x19 )
                v22 = v20;
              if ( v18 != v22 )
                goto LABEL_32;
            }
          }
          while ( v18 );
          AnimTreeName = v38;
          v6 = v36;
        }
        else
        {
LABEL_34:
          if ( numAnimations >= 0xC8 )
          {
            LODWORD(v33) = 200;
            LODWORD(v32) = numAnimations;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1397, ASSERT_TYPE_ASSERT, "(unsigned)( scriptData->weaponAnims.numAnimations ) < (unsigned)( 200 )", "scriptData->weaponAnims.numAnimations doesn't index MAX_WEAPON_ANIMATIONS\n\t%i not in [0, %i)", v32, v33) )
              __debugbreak();
          }
          v23 = &scriptData->weaponAnims.animations[scriptData->weaponAnims.numAnimations];
          Scr_FindAnim(AnimTreeName, *p_name, &v23->anim, *(_DWORD *)(v6 + 19544));
          v24 = *p_name;
          v25 = -1i64;
          do
            ++v25;
          while ( v24[v25] );
          if ( v25 >= 0x3F )
          {
            v26 = -1i64;
            do
              ++v26;
            while ( v24[v26] );
            HIDWORD(v32) = 0;
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F03760, 1176i64);
            v24 = *p_name;
          }
          v27 = -1i64;
          do
            ++v27;
          while ( v24[v27] );
          if ( (unsigned __int64)(v27 + 1) >= 0x40 )
          {
            v28 = -1i64;
            do
              ++v28;
            while ( v24[v28] );
            LODWORD(v35) = 64;
            LODWORD(v34) = v28 + 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1405, ASSERT_TYPE_ASSERT, "( strlen( animPart->name ) + 1 ) < ( sizeof( loadAnim->szAnimName ) )", "%s < %s\n\t%i, %i", "strlen( animPart->name ) + 1", "sizeof( loadAnim->szAnimName )", v34, v35) )
              __debugbreak();
          }
          v29 = *p_name;
          v30 = v23->szAnimName;
          do
          {
            v31 = *v29++;
            *v30++ = v31;
          }
          while ( v31 );
          v23->iNameHash = v12;
          ++scriptData->weaponAnims.numAnimations;
        }
        v2 = animPackage;
      }
    }
  }
}

/*
==============
BG_AnimationMP_ResetCharacterInfoHeightOffset
==============
*/
void BG_AnimationMP_ResetCharacterInfoHeightOffset(characterInfo_t *ci)
{
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 11064, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  *(_QWORD *)&ci->prevHeightOffset = 0i64;
  *(_QWORD *)&ci->heightOffset = 0i64;
  ci->heightOffsetInOriginOffset = 0.0;
}

/*
==============
BG_AnimationMP_SetLegsAnimation
==============
*/
void BG_AnimationMP_SetLegsAnimation(entityState_t *entityState, const int legsAnim, SuitAnimType suitAnimIndex)
{
  __int64 v4; 
  __int64 v5; 
  BgStatic *ActiveStatics; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 

  v4 = suitAnimIndex;
  v5 = legsAnim;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10691, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( (v5 & 0x1000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10692, ASSERT_TYPE_ASSERT, "((legsAnim & (1<<(13-1))) == 0)", (const char *)&queryFormat, "(legsAnim & ANIM_TOGGLEBIT) == 0") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  v7 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10696, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( (unsigned int)v4 >= 4 )
  {
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10697, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( ( sizeof( *array_counter( bgameAnim->animScriptData.suitScript ) ) + 0 ) )", "suitAnimIndex doesn't index ARRAY_COUNT( bgameAnim->animScriptData.suitScript )\n\t%i not in [0, %i)", v10, 4) )
      __debugbreak();
  }
  v8 = *(_QWORD *)(v7 + 8 * v4);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10700, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  if ( (unsigned int)v5 >= *(_DWORD *)(v8 + 8) )
  {
    LODWORD(v11) = *(_DWORD *)(v8 + 8);
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10701, ASSERT_TYPE_ASSERT, "(unsigned)( legsAnim ) < (unsigned)( playerAnim->animationCount )", "legsAnim doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v9 = *(unsigned __int16 *)(*(_QWORD *)(v8 + 136) + 2 * v5);
  if ( v9 >= *(_DWORD *)(v8 + 40) )
  {
    LODWORD(v11) = *(_DWORD *)(v8 + 40);
    LODWORD(v10) = *(unsigned __int16 *)(*(_QWORD *)(v8 + 136) + 2 * v5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10705, ASSERT_TYPE_ASSERT, "(unsigned)( packedAnim ) < (unsigned)( playerAnim->legsAnimCount )", "packedAnim doesn't index playerAnim->legsAnimCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  entityState->animInfo.animData &= 0xFE001FF9;
  entityState->animInfo.animData |= 2 * (v4 & 3 | ((v9 & 0xFFF | ~(unsigned __int16)((unsigned int)v5 >> 1) & 0x800) << 12));
}

/*
==============
BG_AnimationMP_SetSuitScriptProperties
==============
*/
void BG_AnimationMP_SetSuitScriptProperties(const SuitAnimType suitAnimIndex, XAnim_s *xAnims)
{
  __int64 v2; 
  XAnim_s *v3; 
  bool *v4; 
  PlayerAnimScript *PlayerAnimScript; 
  unsigned int AnimTreeSize; 
  unsigned int v7; 
  const char *AnimTreeDebugName; 
  unsigned int animationCount; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int16 v13; 
  int v14; 
  unsigned __int16 v15; 
  unsigned __int16 v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int16 ShadowAnimationMapping; 
  unsigned int v20; 
  unsigned int v21; 
  const char *AnimName; 
  const char *v23; 
  const char *v24; 
  char *fmt; 
  __int64 v26; 
  __int64 v27; 
  shadowAnimMap_t shadowAnimMap; 

  v2 = suitAnimIndex;
  v3 = xAnims;
  if ( (unsigned int)suitAnimIndex >= NUM_ANIM_SUIT_STATE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1282, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", suitAnimIndex, 4) )
    __debugbreak();
  v4 = &s_suitAnimIndexInitialized[v2];
  if ( !s_suitAnimIndexInitialized[v2] )
  {
    PlayerAnimScript = BG_Animation_GetPlayerAnimScript((const SuitAnimType)v2);
    if ( !PlayerAnimScript && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1288, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
      __debugbreak();
    memset_0(&shadowAnimMap, 0, sizeof(shadowAnimMap));
    AnimTreeSize = XAnimGetAnimTreeSize(v3);
    v7 = 1;
    if ( AnimTreeSize > 0xFA0 )
    {
      AnimTreeDebugName = XAnimGetAnimTreeDebugName(v3);
      LODWORD(v26) = 4000;
      LODWORD(fmt) = AnimTreeSize;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F03590, 1174i64, AnimTreeDebugName, fmt, v26);
    }
    animationCount = PlayerAnimScript->animationCount;
    v10 = 1;
    if ( animationCount > 1 )
    {
      while ( 1 )
      {
        v11 = (__int64)&PlayerAnimScript->animations[v10];
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 413, ASSERT_TYPE_ASSERT, "(animEntry)", (const char *)&queryFormat, "animEntry") )
          __debugbreak();
        LOWORD(v12) = *(_WORD *)(v11 + 24);
        v13 = *(_WORD *)(v11 + 32);
        BG_Animation_SetAnimEntryProperties((PlayerAnimEntry *)v11, v3, v12, v13, (const SuitAnimType)v2);
        if ( !v13 )
          goto LABEL_24;
        v12 = (unsigned __int16)v12;
        v14 = v13;
        if ( !(_WORD)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 956, ASSERT_TYPE_ASSERT, "(xAnimIndex != 0)", (const char *)&queryFormat, "xAnimIndex != 0") )
          __debugbreak();
        if ( (unsigned int)v12 >= 0xFA0 )
        {
          LODWORD(v27) = 4000;
          LODWORD(v26) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 957, ASSERT_TYPE_ASSERT, "(unsigned)( xAnimIndex ) < (unsigned)( ( sizeof( *array_counter( shadowAnimMap->entries ) ) + 0 ) )", "xAnimIndex doesn't index ARRAY_COUNT( shadowAnimMap->entries )\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        v15 = shadowAnimMap.entries[v12];
        v16 = truncate_cast<unsigned short,int>(v14);
        if ( v15 )
        {
          if ( v15 != v16 )
          {
            ShadowAnimationMapping = BG_GetShadowAnimationMapping(&shadowAnimMap, v12);
            v20 = v14;
            v21 = ShadowAnimationMapping;
            v3 = xAnims;
            AnimName = XAnimGetAnimName(xAnims, v20);
            v23 = XAnimGetAnimName(xAnims, v21);
            v24 = XAnimGetAnimName(xAnims, v12);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F03620, 1175i64, v24, v23, AnimName);
            goto LABEL_24;
          }
        }
        else
        {
          shadowAnimMap.entries[v12] = v16;
        }
        v3 = xAnims;
LABEL_24:
        animationCount = PlayerAnimScript->animationCount;
        if ( ++v10 >= animationCount )
        {
          v4 = &s_suitAnimIndexInitialized[v2];
          break;
        }
      }
    }
    if ( animationCount > 1 )
    {
      do
      {
        v17 = (__int64)&PlayerAnimScript->animations[v7];
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 413, ASSERT_TYPE_ASSERT, "(animEntry)", (const char *)&queryFormat, "animEntry") )
          __debugbreak();
        v18 = *(unsigned __int16 *)(v17 + 24);
        if ( !*(_WORD *)(v17 + 24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 974, ASSERT_TYPE_ASSERT, "(xAnimIndex != 0)", (const char *)&queryFormat, "xAnimIndex != 0") )
          __debugbreak();
        if ( (unsigned int)v18 >= 0xFA0 )
        {
          LODWORD(v27) = 4000;
          LODWORD(v26) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 975, ASSERT_TYPE_ASSERT, "(unsigned)( xAnimIndex ) < (unsigned)( ( sizeof( *array_counter( shadowAnimMap->entries ) ) + 0 ) )", "xAnimIndex doesn't index ARRAY_COUNT( shadowAnimMap->entries )\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        ++v7;
        *(_WORD *)(v17 + 32) = shadowAnimMap.entries[v18];
      }
      while ( v7 < PlayerAnimScript->animationCount );
      v3 = xAnims;
      v4 = &s_suitAnimIndexInitialized[v2];
    }
    BG_Animation_SetItemProperties(PlayerAnimScript, v3);
    *v4 = 1;
  }
}

/*
==============
BG_AnimationMP_SetTorsoAnimation
==============
*/
void BG_AnimationMP_SetTorsoAnimation(entityState_t *entityState, const int torsoAnim, SuitAnimType suitAnimIndex)
{
  __int64 v4; 
  __int64 v5; 
  BgStatic *ActiveStatics; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 

  v4 = suitAnimIndex;
  v5 = torsoAnim;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10720, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( (v5 & 0x1000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10721, ASSERT_TYPE_ASSERT, "((torsoAnim & (1<<(13-1))) == 0)", (const char *)&queryFormat, "(torsoAnim & ANIM_TOGGLEBIT) == 0") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  v7 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10725, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( (unsigned int)v4 >= 4 )
  {
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10726, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( ( sizeof( *array_counter( bgameAnim->animScriptData.suitScript ) ) + 0 ) )", "suitAnimIndex doesn't index ARRAY_COUNT( bgameAnim->animScriptData.suitScript )\n\t%i not in [0, %i)", v10, 4) )
      __debugbreak();
  }
  v8 = *(_QWORD *)(v7 + 8 * v4);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10729, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  if ( (unsigned int)v5 >= *(_DWORD *)(v8 + 8) )
  {
    LODWORD(v11) = *(_DWORD *)(v8 + 8);
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10730, ASSERT_TYPE_ASSERT, "(unsigned)( torsoAnim ) < (unsigned)( playerAnim->animationCount )", "torsoAnim doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v9 = *(unsigned __int16 *)(*(_QWORD *)(v8 + 120) + 2 * v5);
  if ( v9 >= *(_DWORD *)(v8 + 36) )
  {
    LODWORD(v11) = *(_DWORD *)(v8 + 36);
    LODWORD(v10) = *(unsigned __int16 *)(*(_QWORD *)(v8 + 120) + 2 * v5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10734, ASSERT_TYPE_ASSERT, "(unsigned)( packedAnim ) < (unsigned)( playerAnim->torsoAnimCount )", "packedAnim doesn't index playerAnim->torsoAnimCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  entityState->animInfo.animData &= 0xFFFFE001;
  entityState->animInfo.animData |= 2 * (v4 & 3 | (4 * (v9 & 0x3FF | ~(unsigned __int16)((unsigned int)v5 >> 3) & 0x200)));
}

/*
==============
BG_AnimationMP_ShutdownAnimations
==============
*/
void BG_AnimationMP_ShutdownAnimations(void)
{
  if ( ((unsigned __int8)&s_suitAnimInitializeLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_suitAnimInitializeLock) )
    __debugbreak();
  if ( _InterlockedExchange(&s_suitAnimInitializeLock, 0) && !Com_ErrorEntered() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1511, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchange( &s_suitAnimInitializeLock, 0 ) == 0 || Com_ErrorEntered())", "%s\n\tAnimation initialization did not complete correctly or did not cleanly error before shutting down.", "Sys_InterlockedExchange( &s_suitAnimInitializeLock, 0 ) == 0 || Com_ErrorEntered()") )
    __debugbreak();
  *(_DWORD *)s_suitAnimIndexInitialized = 0;
}

/*
==============
BG_AnimationMP_ShutdownSuitAnimIndexes
==============
*/
void BG_AnimationMP_ShutdownSuitAnimIndexes(void)
{
  *(_DWORD *)s_suitAnimIndexActive = 0;
}

/*
==============
BG_AnimationMP_TransferNonWeaponPartBits
==============
*/
void BG_AnimationMP_TransferNonWeaponPartBits(LocalClientNum_t localClientNum, const DObj *fromDObj, const characterInfo_t *fromCI, entityState_t *toEntity, DObj *toDObj, characterInfo_t *toCI)
{
  int v9; 
  int numNewModels; 
  DObjPartBits partBits; 
  DObjModel newDobjModels[32]; 
  DObjModel outDObjModels[32]; 

  if ( !fromDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10181, ASSERT_TYPE_ASSERT, "(fromDObj)", (const char *)&queryFormat, "fromDObj") )
    __debugbreak();
  if ( !fromCI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10182, ASSERT_TYPE_ASSERT, "(fromCI)", (const char *)&queryFormat, "fromCI") )
    __debugbreak();
  if ( !toEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10183, ASSERT_TYPE_ASSERT, "(toEntity)", (const char *)&queryFormat, "toEntity") )
    __debugbreak();
  if ( !toDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10184, ASSERT_TYPE_ASSERT, "(toDObj)", (const char *)&queryFormat, "toDObj") )
    __debugbreak();
  if ( !toCI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10185, ASSERT_TYPE_ASSERT, "(toCI)", (const char *)&queryFormat, "toCI") )
    __debugbreak();
  v9 = BG_AnimationMP_GatherDObjModels(fromDObj, (DObjModel (*)[32])outDObjModels);
  DObjGetHidePartBits(fromDObj, &partBits);
  numNewModels = BG_AnimationMP_GatherDObjModels(toDObj, (DObjModel (*)[32])newDobjModels);
  BG_UpdateCharacterDObj_RestoreNonWeaponHideParts(toEntity, toDObj, (const DObjModel (*)[32])outDObjModels, (const CharacterModelType (*)[32])fromCI->dobjModelTypes, v9, (const DObjModel (*)[32])newDobjModels, (const CharacterModelType (*)[32])toCI->dobjModelTypes, numNewModels, &partBits, toCI->firstWeaponPartIndex, toCI->weaponBoneCount);
}

/*
==============
BG_AnimationMP_UnpackPitch
==============
*/
double BG_AnimationMP_UnpackPitch(unsigned __int16 pitchPacked)
{
  return MSG_UnpackSignedFloat(pitchPacked, 90.0, 0x10u);
}

/*
==============
BG_AnimationMP_UpdateAgentCorpseDObj
==============
*/
void BG_AnimationMP_UpdateAgentCorpseDObj(LocalClientNum_t localClientNum, DObj *pDObj, const BgWeaponMap *weaponMap, const entityState_t *es, characterInfo_t *ci)
{
  const Weapon *r_stowedWeapon; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10330, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10331, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 747, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 748, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( es->eType != ET_AGENT_CORPSE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 749, ASSERT_TYPE_ASSERT, "(es->eType == ET_AGENT_CORPSE)", (const char *)&queryFormat, "es->eType == ET_AGENT_CORPSE") )
    __debugbreak();
  r_stowedWeapon = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, es->staticState.player.offhandWeaponHandle);
  BG_UpdateCharacterDObj(localClientNum, pDObj, es, ci, 0, &NULL_WEAPON, r_stowedWeapon, &NULL_WEAPON, &NULL_WEAPON, &NULL_WEAPON, &NULL_WEAPON, 0);
  BG_PlayerMP_SetWeaponPackageAnims(&NULL_WEAPON, &NULL_WEAPON, ci, es, ci->pXAnimTree);
}

/*
==============
BG_AnimationMP_UpdateCharacterInfoHeightOffset
==============
*/
void BG_AnimationMP_UpdateCharacterInfoHeightOffset(const playerState_s *ps, characterInfo_t *ci, float stepHeight, int flags, int msec)
{
  __int16 v5; 
  float heightOffset; 
  float v9; 
  const dvar_t *v10; 
  double v11; 
  double v12; 

  v5 = flags;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 11076, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ps )
  {
    if ( (v5 & 0x100) != 0 )
    {
      if ( BG_UsingNewPlayerCollision() && stepHeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 11089, ASSERT_TYPE_ASSERT, "(stepHeight != 0.0f)", (const char *)&queryFormat, "stepHeight != 0.0f") )
        __debugbreak();
      heightOffset = ci->heightOffset;
      LODWORD(v9) = LODWORD(stepHeight) ^ _xmm;
      if ( heightOffset != 0.0 )
        v9 = (float)((float)(heightOffset + ci->baseHeight) - (float)(v9 + ps->origin.v[2])) + v9;
      ci->heightOffset = v9;
      ci->baseHeight = ps->origin.v[2];
    }
    else
    {
      v9 = ci->heightOffset;
      if ( v9 != 0.0 )
      {
        v10 = DCONST_DVARFLT_stepBlendSpeed;
        if ( !DCONST_DVARFLT_stepBlendSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stepBlendSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v10);
        v11 = I_fclamp(1.0 - (float)((float)((float)msec * 0.001) * v10->current.value), 0.001, 0.99900001);
        v9 = *(float *)&v11 * ci->heightOffset;
        ci->heightOffset = v9;
        if ( COERCE_FLOAT(LODWORD(v9) & _xmm) < 0.1 )
        {
          ci->heightOffset = 0.0;
          v9 = 0.0;
        }
      }
    }
    v12 = I_fclamp(v9, -20.0, 20.0);
    ci->heightOffset = *(float *)&v12;
  }
}

/*
==============
BG_AnimationMP_UpdatePlayerDObj
==============
*/
void BG_AnimationMP_UpdatePlayerDObj(LocalClientNum_t localClientNum, DObj *pDObj, const BgWeaponMap *weaponMap, const entityState_t *es, characterInfo_t *ci, int attachIgnoreCollision)
{
  Weapon r_turretWeapon; 
  Weapon r_executionWeapon; 
  Weapon r_heldWeapon; 
  Weapon r_accessoryWeapon; 
  Weapon r_thrownWeapon; 
  Weapon r_stowedWeapon; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10311, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10312, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  BG_GetCharacterWeapons(weaponMap, es, ci, &r_heldWeapon, &r_thrownWeapon, &r_stowedWeapon, &r_executionWeapon, &r_accessoryWeapon, &r_turretWeapon);
  BG_UpdateCharacterDObj(localClientNum, pDObj, es, ci, attachIgnoreCollision, &r_heldWeapon, &r_stowedWeapon, &r_thrownWeapon, &r_executionWeapon, &r_accessoryWeapon, &r_turretWeapon, 0);
  BG_PlayerMP_SetWeaponPackageAnims(&r_heldWeapon, &r_executionWeapon, ci, es, ci->pXAnimTree);
}

/*
==============
BG_AnimationMP_UpdateWobble
==============
*/
void BG_AnimationMP_UpdateWobble(const BgHandler *handler, characterInfo_t *ci, const entityState_t *es)
{
  BgStatic *ActiveStatics; 
  __int64 v7; 
  XAnimTree *pXAnimTree; 
  unsigned int number; 
  DObj *v10; 
  DObj *v11; 
  bool IsPlayingVehicleOccupancyAnims; 
  bool v13; 
  wobbleAnim_t *p_wobbleAnimParams; 
  unsigned int LinkedVehicle; 
  const BGVehicles *v16; 
  BgStatic *v17; 
  const BGVehicles *v18; 
  animScriptVehicleSeat_t outVehicleSeat; 
  animScriptVehicleType_t outVehicleType[13]; 
  unsigned __int16 outAnimIndex; 

  ActiveStatics = BgStatic::GetActiveStatics();
  v7 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10949, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  outAnimIndex = *(_WORD *)(v7 + 17976);
  if ( PlayerASM_IsEnabled() )
  {
    pXAnimTree = ci->pXAnimTree;
    if ( pXAnimTree )
      XAnimFindPublicNode(pXAnimTree->anims, scr_const.wobble, &outAnimIndex);
  }
  if ( outAnimIndex )
  {
    number = es->number;
    v10 = ActiveStatics->IsClient(ActiveStatics) ? Com_GetClientDObj(number, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable)) : (DObj *)((__int64 (__fastcall *)(BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, number);
    v11 = v10;
    if ( v10 )
    {
      if ( v10->tree )
      {
        IsPlayingVehicleOccupancyAnims = BG_IsPlayingVehicleOccupancyAnims(ci);
        v13 = IsPlayingVehicleOccupancyAnims;
        if ( !ci->wobbleAnimParams.nodeWeightUpdated || ci->wobbleAnimParams.nodeActive != IsPlayingVehicleOccupancyAnims )
        {
          XAnimSetGoalWeight(v11, 0, XANIM_SUBTREE_DEFAULT, outAnimIndex, (float)ci->enableVehicleOccupancyAnimations, 0.0, 1.0, (scr_string_t)0, 0, 1, LINEAR, NULL);
          ci->wobbleAnimParams.nodeWeightUpdated = 1;
          ci->wobbleAnimParams.nodeActive = v13;
        }
        p_wobbleAnimParams = &ci->wobbleAnimParams;
        if ( BG_IsPlayingVehicleOccupancyAnims(ci) )
        {
          if ( !BGVehicles::PhysicsIsValid(p_wobbleAnimParams->vehiclePhysicsId) )
          {
            LinkedVehicle = BG_VehicleOccupancy_GetLinkedVehicle(handler, es, ci, outVehicleType, &outVehicleSeat);
            if ( LinkedVehicle != 2047 )
            {
              v16 = handler->GetVehicleSystemConst(handler);
              p_wobbleAnimParams->vehiclePhysicsId = v16->PhysicsGetVehicleId((BGVehicles *)v16, LinkedVehicle);
            }
          }
          if ( BGVehicles::PhysicsIsValid(p_wobbleAnimParams->vehiclePhysicsId) )
          {
            v17 = BgStatic::GetActiveStatics();
            v17->GetAnimStatics(v17);
            v18 = handler->GetVehicleSystemConst(handler);
            ((void (__fastcall *)(const BGVehicles *, characterInfo_t *, _QWORD))v18->PhysicsUpdateCharacterWobbleAnimData)(v18, ci, p_wobbleAnimParams->vehiclePhysicsId);
          }
          else
          {
            *(_QWORD *)ci->wobbleAnimParams.amplitude.v = 0i64;
            ci->wobbleAnimParams.amplitude.v[2] = 0.0;
            ci->wobbleAnimParams.angleDirCurrent = 0.0;
            ci->wobbleAnimParams.intensity = 0;
          }
        }
        else
        {
          p_wobbleAnimParams->vehiclePhysicsId = BGVehicles::PhysicsInvalidId();
          ci->wobbleAnimParams.initialized = 0;
        }
        if ( v13 )
        {
          XAnimSetVec3GameParameterByIndex(v11, 0x2Fu, &ci->wobbleAnimParams.amplitude);
          XAnimSetFloatGameParameterByIndex(v11, 0x30u, ci->wobbleAnimParams.angleDirCurrent);
          XAnimSetIntGameParameterByIndex(v11, 0x31u, ci->wobbleAnimParams.intensity);
        }
      }
    }
  }
}

/*
==============
BG_AnimationMP_UpdateWobbleAnimParams
==============
*/
void BG_AnimationMP_UpdateWobbleAnimParams(const BgHandler *handler, characterInfo_t *ci, const entityState_t *es)
{
  wobbleAnim_t *p_wobbleAnimParams; 
  unsigned int LinkedVehicle; 
  const BGVehicles *v8; 
  BgStatic *ActiveStatics; 
  const BGVehicles *v10; 
  animScriptVehicleSeat_t outVehicleSeat; 
  animScriptVehicleType_t outVehicleType; 

  p_wobbleAnimParams = &ci->wobbleAnimParams;
  if ( BG_IsPlayingVehicleOccupancyAnims(ci) )
  {
    if ( !BGVehicles::PhysicsIsValid(p_wobbleAnimParams->vehiclePhysicsId) )
    {
      LinkedVehicle = BG_VehicleOccupancy_GetLinkedVehicle(handler, es, ci, &outVehicleType, &outVehicleSeat);
      if ( LinkedVehicle != 2047 )
      {
        v8 = handler->GetVehicleSystemConst(handler);
        p_wobbleAnimParams->vehiclePhysicsId = v8->PhysicsGetVehicleId((BGVehicles *)v8, LinkedVehicle);
      }
    }
    if ( BGVehicles::PhysicsIsValid(p_wobbleAnimParams->vehiclePhysicsId) )
    {
      ActiveStatics = BgStatic::GetActiveStatics();
      ActiveStatics->GetAnimStatics(ActiveStatics);
      v10 = handler->GetVehicleSystemConst(handler);
      ((void (__fastcall *)(const BGVehicles *, characterInfo_t *, _QWORD))v10->PhysicsUpdateCharacterWobbleAnimData)(v10, ci, p_wobbleAnimParams->vehiclePhysicsId);
    }
    else
    {
      *(_QWORD *)ci->wobbleAnimParams.amplitude.v = 0i64;
      ci->wobbleAnimParams.amplitude.v[2] = 0.0;
      ci->wobbleAnimParams.angleDirCurrent = 0.0;
      ci->wobbleAnimParams.intensity = 0;
    }
  }
  else
  {
    p_wobbleAnimParams->vehiclePhysicsId = BGVehicles::PhysicsInvalidId();
    p_wobbleAnimParams->initialized = 0;
  }
}

/*
==============
BG_AnimationMP_VerifySuit
==============
*/
void BG_AnimationMP_VerifySuit(const unsigned int suitIndex, const char *suitName)
{
  SuitAnimType SuitAnimType; 

  SuitAnimType = BG_GetSuitAnimType(suitIndex);
  if ( (unsigned int)SuitAnimType <= ANIM_SUIT_REAPER && !s_suitAnimIndexActive[SuitAnimType] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 855, ASSERT_TYPE_ASSERT, "(s_suitAnimIndexActive[suitAnimIndex])", "%s\n\tShould have been activated in the initial Register call", "s_suitAnimIndexActive[suitAnimIndex]") )
    __debugbreak();
}

/*
==============
BG_Animation_GetAnimEntryMoveSpeed
==============
*/
float BG_Animation_GetAnimEntryMoveSpeed(const PlayerAnimEntry *animEntry)
{
  float moveSpeedAdjust; 

  if ( !animEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1054, ASSERT_TYPE_ASSERT, "(animEntry)", (const char *)&queryFormat, "animEntry") )
    __debugbreak();
  if ( (animEntry->flags & 0x800000) == 0 )
    return animEntry->moveSpeed;
  moveSpeedAdjust = animEntry->moveSpeedAdjust;
  if ( moveSpeedAdjust == 0.0 )
    return animEntry->moveSpeed;
  else
    return animEntry->moveSpeed / moveSpeedAdjust;
}

/*
==============
BG_Animation_GetAnimIndex
==============
*/
__int64 BG_Animation_GetAnimIndex(const PlayerAnimEntry *animEntry)
{
  if ( animEntry )
    return LOWORD(animEntry->animIndex);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 413, ASSERT_TYPE_ASSERT, "(animEntry)", (const char *)&queryFormat, "animEntry") )
    __debugbreak();
  return MEMORY[0x18];
}

/*
==============
BG_Animation_GetAnimTreeName
==============
*/
const char *BG_Animation_GetAnimTreeName()
{
  char ActiveGameMode; 
  int v2; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode == 1 )
    return BG_ANIMATION_TREE_SP;
  if ( ActiveGameMode != 2 && ActiveGameMode != 3 )
  {
    v2 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 404, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Trying to retrieve player animation tree for game mode that does not support it %i", v2) )
      __debugbreak();
  }
  return BG_ANIMATION_TREE_MP;
}

/*
==============
BG_Animation_GetPlayerAnimScript
==============
*/
PlayerAnimScript *BG_Animation_GetPlayerAnimScript(const SuitAnimType suitAnimIndex)
{
  __int64 v1; 
  char ActiveGameMode; 
  const char *v4; 

  v1 = suitAnimIndex;
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  switch ( ActiveGameMode )
  {
    case 1:
      if ( (unsigned int)v1 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1034, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( ( sizeof( *array_counter( PLAYER_ANIM_SUIT_SCRIPT_SP ) ) + 0 ) )", "suitAnimIndex doesn't index ARRAY_COUNT( PLAYER_ANIM_SUIT_SCRIPT_SP )\n\t%i not in [0, %i)", v1, 4) )
        __debugbreak();
      v4 = PLAYER_ANIM_SUIT_SCRIPT_SP[v1];
      return DB_FindXAssetHeader(ASSET_TYPE_PLAYERANIM, v4, 1).playerAnim;
    case 2:
      if ( (unsigned int)v1 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1029, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( ( sizeof( *array_counter( PLAYER_ANIM_SUIT_SCRIPT_MP ) ) + 0 ) )", "suitAnimIndex doesn't index ARRAY_COUNT( PLAYER_ANIM_SUIT_SCRIPT_MP )\n\t%i not in [0, %i)", v1, 4) )
        __debugbreak();
      v4 = PLAYER_ANIM_SUIT_SCRIPT_MP[v1];
      return DB_FindXAssetHeader(ASSET_TYPE_PLAYERANIM, v4, 1).playerAnim;
    case 3:
      if ( (unsigned int)v1 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1022, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( ( sizeof( *array_counter( PLAYER_ANIM_SUIT_SCRIPT_CP ) ) + 0 ) )", "suitAnimIndex doesn't index ARRAY_COUNT( PLAYER_ANIM_SUIT_SCRIPT_CP )\n\t%i not in [0, %i)", v1, 4) )
        __debugbreak();
      v4 = PLAYER_ANIM_SUIT_SCRIPT_CP[v1];
      return DB_FindXAssetHeader(ASSET_TYPE_PLAYERANIM, v4, 1).playerAnim;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1039, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled game mode type") )
    __debugbreak();
  return 0i64;
}

/*
==============
BG_Animation_GetShadowAnimIndex
==============
*/
__int64 BG_Animation_GetShadowAnimIndex(const PlayerAnimEntry *animEntry)
{
  if ( animEntry )
    return LOWORD(animEntry->shadowAnimIndex);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 423, ASSERT_TYPE_ASSERT, "(animEntry)", (const char *)&queryFormat, "animEntry") )
    __debugbreak();
  return MEMORY[0x20];
}

/*
==============
BG_Animation_PrintBitField
==============
*/
void BG_Animation_PrintBitField(const unsigned int *bitField, int conditionType, bool formatText, char *buffer, int bufferSize, int *bufferPos)
{
  int v9; 
  char v10; 
  __int64 v11; 
  int v12; 
  const char *v13; 
  const char *ConditionString; 
  __int64 v15; 

  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1529, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !bufferPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1530, ASSERT_TYPE_ASSERT, "(bufferPos)", (const char *)&queryFormat, "bufferPos") )
    __debugbreak();
  if ( (unsigned int)conditionType >= 0x3F )
  {
    LODWORD(v15) = conditionType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1531, ASSERT_TYPE_ASSERT, "(unsigned)( conditionType ) < (unsigned)( NUM_ANIM_CONDITIONS )", "conditionType doesn't index NUM_ANIM_CONDITIONS\n\t%i not in [0, %i)", v15, 63) )
      __debugbreak();
  }
  v9 = 0;
  v10 = 1;
  v11 = 0i64;
  v12 = 1;
  do
  {
    if ( !bitField && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    if ( (v12 & bitField[v11 >> 5]) != 0 )
    {
      if ( !v10 )
      {
        v13 = ",";
        if ( formatText )
          v13 = " AND ";
        Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, v13);
      }
      ConditionString = BG_GetConditionString(conditionType, v9);
      Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, (const char *)&queryFormat, ConditionString);
      v10 = 0;
    }
    ++v9;
    v12 = __ROL4__(v12, 1);
    ++v11;
  }
  while ( v9 < 256 );
  if ( v10 )
    Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, "none");
}

/*
==============
BG_Animation_PrintCIConditionals
==============
*/
void BG_Animation_PrintCIConditionals(const characterInfo_t *ci, unsigned int startIndex, unsigned int endIndex, char *buffer, int bufferSize, int *bufferPos, const char *baseColor)
{
  __int64 v7; 
  const unsigned int (*value)[8]; 

  v7 = startIndex;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1612, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1613, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !bufferPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1614, ASSERT_TYPE_ASSERT, "(bufferPos)", (const char *)&queryFormat, "bufferPos") )
    __debugbreak();
  if ( !baseColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1615, ASSERT_TYPE_ASSERT, "(baseColor)", (const char *)&queryFormat, "baseColor") )
    __debugbreak();
  if ( endIndex > 0x3F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1616, ASSERT_TYPE_ASSERT, "(endIndex <= NUM_ANIM_CONDITIONS)", (const char *)&queryFormat, "endIndex <= NUM_ANIM_CONDITIONS") )
    __debugbreak();
  if ( (unsigned int)v7 >= 0x3F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1617, ASSERT_TYPE_ASSERT, "(startIndex < NUM_ANIM_CONDITIONS)", (const char *)&queryFormat, "startIndex < NUM_ANIM_CONDITIONS") )
    __debugbreak();
  if ( (unsigned int)v7 < endIndex )
  {
    value = (const unsigned int (*)[8])ci->clientConditions[v7];
    do
    {
      BG_Animation_PrintConditional(buffer, bufferSize, bufferPos, v7, 1, value, baseColor);
      LODWORD(v7) = v7 + 1;
      ++value;
    }
    while ( (unsigned int)v7 < endIndex );
  }
}

/*
==============
BG_Animation_PrintConditional
==============
*/
void BG_Animation_PrintConditional(char *buffer, int bufferSize, int *bufferPos, int conditionType, const bool formatText, const unsigned int (*value)[8], const char *baseColor)
{
  __int64 v7; 
  unsigned __int64 v9; 
  const char *ConditionString; 
  const char *v12; 

  v7 = conditionType;
  v9 = bufferSize;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1562, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1563, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  if ( formatText )
    Com_sprintfPos_truncate(buffer, v9, bufferPos, "        %s%s%s ", "^3", s_animConditionsStr[v7].string, baseColor);
  if ( BG_GetAnimConditionType(v7) )
  {
    ConditionString = BG_GetConditionString(v7, (*value)[0]);
    v12 = "none";
    if ( ConditionString )
      v12 = ConditionString;
    Com_sprintfPos_truncate(buffer, v9, bufferPos, "%s ", v12);
  }
  else
  {
    BG_Animation_PrintBitField((const unsigned int *)value, v7, formatText, buffer, v9, bufferPos);
  }
  if ( formatText )
    Com_sprintfPos_truncate(buffer, v9, bufferPos, "\n");
}

/*
==============
BG_Animation_PrintScriptItemConditionals
==============
*/
void BG_Animation_PrintScriptItemConditionals(const PlayerAnimScriptItem *scriptItem, char *buffer, int bufferSize, int *bufferPos, const char *baseColor)
{
  unsigned __int64 v5; 
  __int64 v9; 

  v5 = bufferSize;
  if ( !scriptItem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1589, ASSERT_TYPE_ASSERT, "(scriptItem)", (const char *)&queryFormat, "scriptItem") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1590, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !baseColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1591, ASSERT_TYPE_ASSERT, "(baseColor)", (const char *)&queryFormat, "baseColor") )
    __debugbreak();
  if ( !bufferPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1592, ASSERT_TYPE_ASSERT, "(bufferPos)", (const char *)&queryFormat, "bufferPos") )
    __debugbreak();
  if ( scriptItem->conditionCount )
  {
    v9 = 0i64;
    do
    {
      BG_Animation_PrintConditional(buffer, v5, bufferPos, scriptItem->conditions[v9].index, 1, (const unsigned int (*)[8])scriptItem->conditions[v9].value, baseColor);
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < scriptItem->conditionCount );
  }
  else
  {
    Com_sprintfPos_truncate(buffer, v5, bufferPos, "        default\n");
  }
}

/*
==============
BG_Animation_SetAnimEntryProperties
==============
*/
void BG_Animation_SetAnimEntryProperties(PlayerAnimEntry *animEntry, XAnim_s *xAnims, const unsigned __int16 xAnimIndex, const unsigned __int16 shadowXAnimIndex, const SuitAnimType suitAnimIndex)
{
  __int128 v5; 
  __int128 v6; 
  const char *scriptName; 
  const char *v12; 
  bool IsPrimitive; 
  unsigned __int64 flags; 
  __int16 initialLerp; 
  double Length; 
  float v17; 
  const dvar_t *v18; 
  float AnimEntryMoveSpeed; 
  float v20; 
  const char *v21; 
  unsigned __int64 v22; 
  const char *AnimName; 
  const char *v24; 
  double v25; 
  float v26; 
  double v27; 
  double v28; 
  double v29; 
  const char *v30; 
  double v31; 
  const char *v32; 
  __int64 time2; 
  vec3_t trans; 
  vec2_t rot; 
  __int128 v36; 
  __int128 v37; 

  if ( !animEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1195, ASSERT_TYPE_ASSERT, "(animEntry)", (const char *)&queryFormat, "animEntry") )
    __debugbreak();
  if ( !xAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1196, ASSERT_TYPE_ASSERT, "(xAnims)", (const char *)&queryFormat, "xAnims") )
    __debugbreak();
  if ( (unsigned int)suitAnimIndex >= NUM_ANIM_SUIT_STATE )
  {
    LODWORD(time2) = suitAnimIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1197, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", time2, 4) )
      __debugbreak();
  }
  if ( xAnimIndex )
  {
    IsPrimitive = XAnimIsPrimitive(xAnims, xAnimIndex);
    flags = animEntry->flags;
    initialLerp = animEntry->initialLerp;
    if ( IsPrimitive )
    {
      v36 = v6;
      animEntry->flags = flags & 0xFFFFFFFFFFFFFFFEui64;
      if ( !initialLerp )
        animEntry->initialLerp = -1;
      v37 = v5;
      Length = XAnimGetLength(xAnims, xAnimIndex);
      v17 = *(float *)&Length;
      if ( *(float *)&Length == 0.0 )
      {
        animEntry->moveSpeed = 0.0;
        animEntry->duration = 500;
      }
      else
      {
        animEntry->duration = float_to_integral_cast<unsigned short,float>(*(float *)&Length * 1000.0);
        XAnimGetRelDelta(xAnims, xAnimIndex, &rot, &trans, 0.0, 1.0);
        animEntry->moveSpeed = fsqrt((float)((float)(trans.v[0] * trans.v[0]) + (float)(trans.v[1] * trans.v[1])) + (float)(trans.v[2] * trans.v[2])) * (float)(1.0 / *(float *)&Length);
        if ( animEntry->duration < 0x1F4u && (animEntry->flags & 0x40000) == 0 )
          animEntry->duration = 500;
        v18 = DVARBOOL_anim_debugSpeeds;
        if ( !DVARBOOL_anim_debugSpeeds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "anim_debugSpeeds") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v18);
        if ( v18->current.enabled )
        {
          AnimEntryMoveSpeed = BG_Animation_GetAnimEntryMoveSpeed(animEntry);
          if ( AnimEntryMoveSpeed > 1.0 )
          {
            v20 = (float)((float)(trans.v[0] * trans.v[0]) + (float)(trans.v[1] * trans.v[1])) + (float)(trans.v[2] * trans.v[2]);
            v21 = SL_ConvertToString(animEntry->animName);
            Com_Printf(19, "Anim '%s' moves %.1f inches over %.2fs (speed of %.3f IPS)\n", v21, fsqrt(v20), v17, AnimEntryMoveSpeed);
          }
        }
      }
      v22 = animEntry->flags;
      if ( (v22 & 0x2380090) != 0 )
        animEntry->moveSpeed = 0.0;
      if ( (v22 & 2) != 0 && animEntry->moveSpeed == 0.0 )
        animEntry->flags = v22 & 0xFFFFFFFFFFFFFFFDui64;
      if ( XAnimIsLooped(xAnims, xAnimIndex) )
        animEntry->flags |= 0x100ui64;
      if ( shadowXAnimIndex )
      {
        if ( XAnimIsLooped(xAnims, xAnimIndex) && !XAnimIsLooped(xAnims, shadowXAnimIndex) )
        {
          AnimName = XAnimGetAnimName(xAnims, xAnimIndex);
          v24 = XAnimGetAnimName(xAnims, shadowXAnimIndex);
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F034B0, 1172i64, v24, AnimName);
        }
        v25 = XAnimGetLength(xAnims, xAnimIndex);
        v26 = *(float *)&v25;
        v27 = XAnimGetLength(xAnims, shadowXAnimIndex);
        if ( v26 != *(float *)&v27 )
        {
          v28 = XAnimGetLength(xAnims, xAnimIndex);
          v29 = *(float *)&v28;
          v30 = XAnimGetAnimName(xAnims, xAnimIndex);
          v31 = XAnimGetLength(xAnims, shadowXAnimIndex);
          v32 = XAnimGetAnimName(xAnims, shadowXAnimIndex);
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F03510, 1173i64, v32, *(float *)&v31, v30, v29);
        }
      }
    }
    else
    {
      animEntry->flags = flags | 1;
      animEntry->duration = 0;
      animEntry->moveSpeed = 0.0;
      if ( !initialLerp )
        animEntry->initialLerp = -1;
    }
  }
  else
  {
    scriptName = BG_Animation_GetPlayerAnimScript(suitAnimIndex)->scriptName;
    v12 = SL_ConvertToString(animEntry->animName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F03430, 1171i64, v12, scriptName);
  }
}

/*
==============
BG_Animation_SetItemProperties
==============
*/
void BG_Animation_SetItemProperties(PlayerAnimScript *playerAnim, const XAnim_s *xAnims)
{
  const XAnim_s *v2; 
  __int64 v4; 
  PlayerAnimScriptItem *v5; 
  __int64 v6; 
  PlayerAnimScriptCommand *commands; 
  unsigned __int16 animDuration; 
  PlayerAnimEntry *animations; 
  __int64 animIndex; 
  unsigned __int64 flags; 
  const char *scriptName; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  unsigned __int8 syncGroup; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  char *fmt; 
  __int64 v22; 
  __int64 v23; 
  int i; 

  v2 = xAnims;
  if ( !playerAnim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1135, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1136, ASSERT_TYPE_ASSERT, "(xAnims)", (const char *)&queryFormat, "xAnims") )
    __debugbreak();
  v4 = 0i64;
  for ( i = 0; (unsigned int)v4 < playerAnim->scriptItemCount; i = v4 )
  {
    v5 = &playerAnim->scriptItems[v4];
    BG_Animation_SetTwitchCycles(playerAnim, v5, v2);
    v6 = 0i64;
    if ( v5->commandCount )
    {
      do
      {
        commands = v5->commands;
        if ( commands[v6].animIndex >= playerAnim->animationCount )
        {
          LODWORD(v23) = playerAnim->animationCount;
          LODWORD(v22) = commands[v6].animIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1147, ASSERT_TYPE_ASSERT, "(unsigned)( scriptCommand->animIndex ) < (unsigned)( playerAnim->animationCount )", "scriptCommand->animIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v22, v23) )
            __debugbreak();
        }
        animDuration = commands[v6].animDuration;
        animations = playerAnim->animations;
        animIndex = commands[v6].animIndex;
        if ( !animDuration )
        {
          animDuration = animations[animIndex].duration;
          commands[v6].animDuration = animDuration;
        }
        flags = animations[animIndex].flags;
        if ( (flags & 0x40000) != 0 )
        {
          if ( (flags & 0x100) != 0 )
          {
            scriptName = playerAnim->scriptName;
            v13 = SL_ConvertToString(animations[animIndex].animName);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_143F03230, 1167i64, v13, scriptName);
          }
          else if ( (flags & 0x800000) != 0 )
          {
            if ( animDuration != animations[animIndex].duration )
            {
              v14 = playerAnim->scriptName;
              v15 = SL_ConvertToString(animations[animIndex].animName);
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F032A0, 1168i64, v15, v14);
            }
          }
          else
          {
            animations[animIndex].moveSpeed = 0.0;
          }
        }
        syncGroup = animations[animIndex].syncGroup;
        if ( syncGroup )
        {
          if ( commands[v6].animDuration != animations[animIndex].duration )
          {
            v17 = playerAnim->scriptName;
            v18 = SL_ConvertToString(animations[animIndex].animName);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F03330, 1169i64, v18, v17);
            syncGroup = animations[animIndex].syncGroup;
          }
          if ( syncGroup )
            goto LABEL_26;
        }
        if ( (animations[animIndex].flags & 0x40000) != 0 )
        {
LABEL_26:
          if ( 2 * (5 * (unsigned int)commands[v6].animDuration + 250) >= 0x80000 )
          {
            v19 = playerAnim->scriptName;
            v20 = SL_ConvertToString(animations[animIndex].animName);
            LODWORD(fmt) = 52378;
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F033A0, 1170i64, v20, fmt, v19);
          }
        }
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < v5->commandCount );
      v2 = xAnims;
    }
    v4 = (unsigned int)(i + 1);
  }
}

/*
==============
BG_Animation_SetTwitchCycles
==============
*/
void BG_Animation_SetTwitchCycles(PlayerAnimScript *playerAnim, PlayerAnimScriptItem *item, const XAnim_s *xAnims)
{
  unsigned int animIndex; 
  PlayerAnimEntry *v7; 
  unsigned __int16 v8; 
  unsigned __int8 twitches; 
  unsigned __int16 v10; 
  PlayerAnimScriptIdleTwitch *scriptIdleTwitches; 
  __int64 v12; 
  __int64 twitchCount; 
  double Length; 
  float v15; 
  __int64 v16; 
  float v17; 
  __int64 v18; 
  PlayerAnimEntry *v19; 
  double v20; 
  __int64 v21; 
  __int64 v22; 

  if ( !playerAnim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1086, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  if ( !item && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1087, ASSERT_TYPE_ASSERT, "(item)", (const char *)&queryFormat, "item") )
    __debugbreak();
  if ( !xAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1088, ASSERT_TYPE_ASSERT, "(xAnims)", (const char *)&queryFormat, "xAnims") )
    __debugbreak();
  if ( item->commandCount == 1 )
  {
    animIndex = item->commands->animIndex;
    if ( animIndex >= playerAnim->animationCount )
    {
      LODWORD(v21) = animIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1094, ASSERT_TYPE_ASSERT, "(unsigned)( baseIdleIndex ) < (unsigned)( playerAnim->animationCount )", "baseIdleIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v21, playerAnim->animationCount) )
        __debugbreak();
    }
    v7 = &playerAnim->animations[(unsigned __int16)animIndex];
    if ( (v7->flags & 0x80000) != 0 && v7->twitches )
    {
      v8 = BG_Animation_GetAnimIndex(v7);
      twitches = v7->twitches;
      v10 = v8;
      if ( !twitches || twitches > playerAnim->scriptIdleTwitchCount )
      {
        LODWORD(v22) = 1;
        LODWORD(v21) = twitches;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1105, ASSERT_TYPE_ASSERT, "( 1 ) <= ( animEntry->twitches ) && ( animEntry->twitches ) <= ( playerAnim->scriptIdleTwitchCount )", "animEntry->twitches not in [1, playerAnim->scriptIdleTwitchCount]\n\t%i not in [%i, %i]", v21, v22, playerAnim->scriptIdleTwitchCount) )
          __debugbreak();
      }
      scriptIdleTwitches = playerAnim->scriptIdleTwitches;
      v12 = v7->twitches;
      twitchCount = scriptIdleTwitches[v7->twitches - 1].twitchCount;
      Length = XAnimGetLength(xAnims, v10);
      v15 = (float)twitchCount;
      v16 = 0i64;
      v17 = (float)(*(float *)&Length - 0.1) * v15;
      for ( scriptIdleTwitches[v12 - 1].cycleLength = v17; (unsigned int)v16 < scriptIdleTwitches[v12 - 1].twitchCount; scriptIdleTwitches[v12 - 1].cycleLength = v17 )
      {
        v18 = scriptIdleTwitches[v12 - 1].twitches[v16];
        if ( (unsigned int)v18 >= playerAnim->animationCount )
        {
          LODWORD(v22) = playerAnim->animationCount;
          LODWORD(v21) = scriptIdleTwitches[v12 - 1].twitches[v16];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1115, ASSERT_TYPE_ASSERT, "(unsigned)( twitchAnimEntryIndex ) < (unsigned)( playerAnim->animationCount )", "twitchAnimEntryIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        v19 = &playerAnim->animations[v18];
        if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 413, ASSERT_TYPE_ASSERT, "(animEntry)", (const char *)&queryFormat, "animEntry") )
          __debugbreak();
        v20 = XAnimGetLength(xAnims, LOWORD(v19->animIndex));
        v17 = (float)(*(float *)&v20 - 0.1) + scriptIdleTwitches[v12 - 1].cycleLength;
        v16 = (unsigned int)(v16 + 1);
      }
      if ( v17 <= 0.0 )
        scriptIdleTwitches[v12 - 1].cycleLength = 1.0;
    }
  }
}

/*
==============
BG_CalculateAimAnimValues
==============
*/
void BG_CalculateAimAnimValues(aimAnimValues_t *values, float fAimFactor2, float fAimFactor4, float fAimFactor6, float fAimFactor8)
{
  const dvar_t *v6; 
  const dvar_t *v10; 
  float v11; 
  float value; 
  const dvar_t *v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 

  *(_QWORD *)&values->fTime1 = 0i64;
  *(_QWORD *)&values->fTime3 = 0i64;
  *(_QWORD *)&values->fTime6 = 0i64;
  *(_QWORD *)&values->fTime8 = 0i64;
  *(_QWORD *)&values->fStrength1 = 0i64;
  *(_QWORD *)&values->fStrength3 = 0i64;
  *(_QWORD *)&values->fStrength6 = 0i64;
  *(_QWORD *)&values->fStrength8 = 0i64;
  v6 = DVARINT_anim_aim_debug;
  if ( !DVARINT_anim_aim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "anim_aim_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer <= 0 )
  {
    v11 = fAimFactor8;
  }
  else
  {
    v10 = DVARFLT_anim_aim_debug_factor;
    v11 = 0.0;
    fAimFactor6 = 0.0;
    fAimFactor4 = 0.0;
    fAimFactor2 = 0.0;
    if ( !DVARFLT_anim_aim_debug_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "anim_aim_debug_factor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    value = v10->current.value;
    v13 = DVARINT_anim_aim_debug;
    if ( !DVARINT_anim_aim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "anim_aim_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    switch ( v13->current.integer )
    {
      case 1:
        fAimFactor4 = value;
        break;
      case 2:
        break;
      case 3:
        fAimFactor6 = value;
        fAimFactor2 = value;
        goto LABEL_34;
      case 4:
        fAimFactor4 = value;
        goto LABEL_16;
      case 5:
        goto LABEL_26;
      case 6:
        fAimFactor6 = value;
        goto LABEL_71;
      case 7:
        v11 = value;
        fAimFactor4 = value;
        goto LABEL_26;
      case 8:
        v11 = value;
        goto LABEL_26;
      case 9:
        v11 = value;
        fAimFactor6 = value;
        goto LABEL_26;
      default:
        goto LABEL_71;
    }
    fAimFactor2 = value;
  }
LABEL_34:
  if ( fAimFactor2 <= 0.0 )
  {
LABEL_26:
    if ( v11 <= 0.0 )
    {
LABEL_16:
      if ( fAimFactor4 <= 0.0 )
      {
        if ( fAimFactor2 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7397, ASSERT_TYPE_ASSERT, "(fAimFactor2 == 0.0f)", (const char *)&queryFormat, "fAimFactor2 == 0.0f") )
          __debugbreak();
        if ( v11 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7398, ASSERT_TYPE_ASSERT, "(fAimFactor8 == 0.0f)", (const char *)&queryFormat, "fAimFactor8 == 0.0f") )
          __debugbreak();
LABEL_71:
        values->fTime6 = fAimFactor6;
        values->fStrength6 = 1.0;
      }
      else
      {
        if ( fAimFactor2 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7388, ASSERT_TYPE_ASSERT, "(fAimFactor2 == 0.0f)", (const char *)&queryFormat, "fAimFactor2 == 0.0f") )
          __debugbreak();
        if ( v11 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7389, ASSERT_TYPE_ASSERT, "(fAimFactor8 == 0.0f)", (const char *)&queryFormat, "fAimFactor8 == 0.0f") )
          __debugbreak();
        values->fTime4 = fAimFactor4;
        values->fStrength4 = 1.0;
      }
    }
    else if ( fAimFactor6 <= 0.0 )
    {
      if ( fAimFactor4 <= 0.0 )
      {
        if ( fAimFactor4 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7378, ASSERT_TYPE_ASSERT, "(fAimFactor4 == 0.0f)", (const char *)&queryFormat, "fAimFactor4 == 0.0f") )
          __debugbreak();
        if ( fAimFactor6 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7379, ASSERT_TYPE_ASSERT, "(fAimFactor6 == 0.0f)", (const char *)&queryFormat, "fAimFactor6 == 0.0f") )
          __debugbreak();
        values->fTime8 = v11;
        values->fStrength8 = 1.0;
      }
      else
      {
        if ( fAimFactor4 <= v11 )
        {
          v17 = fAimFactor4 / v11;
          values->fTime8 = v11;
          values->fStrength8 = 1.0 - (float)(fAimFactor4 / v11);
          values->fTime7 = v11;
        }
        else
        {
          v17 = v11 / fAimFactor4;
          values->fTime4 = fAimFactor4;
          values->fStrength4 = 1.0 - (float)(v11 / fAimFactor4);
          values->fTime7 = fAimFactor4;
        }
        values->fStrength7 = v17;
      }
    }
    else
    {
      if ( fAimFactor6 <= v11 )
      {
        v14 = fAimFactor6 / v11;
        values->fTime8 = v11;
        values->fStrength8 = 1.0 - (float)(fAimFactor6 / v11);
        values->fTime9 = v11;
      }
      else
      {
        v14 = v11 / fAimFactor6;
        values->fTime6 = fAimFactor6;
        values->fStrength6 = 1.0 - (float)(v11 / fAimFactor6);
        values->fTime9 = fAimFactor6;
      }
      values->fStrength9 = v14;
    }
  }
  else if ( fAimFactor6 <= 0.0 )
  {
    if ( fAimFactor4 <= 0.0 )
    {
      if ( fAimFactor4 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7328, ASSERT_TYPE_ASSERT, "(fAimFactor4 == 0.0f)", (const char *)&queryFormat, "fAimFactor4 == 0.0f") )
        __debugbreak();
      if ( fAimFactor6 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7329, ASSERT_TYPE_ASSERT, "(fAimFactor6 == 0.0f)", (const char *)&queryFormat, "fAimFactor6 == 0.0f") )
        __debugbreak();
      values->fTime2 = fAimFactor2;
      values->fStrength2 = 1.0;
    }
    else
    {
      if ( fAimFactor4 <= fAimFactor2 )
      {
        v16 = fAimFactor4 / fAimFactor2;
        values->fTime2 = fAimFactor2;
        values->fStrength2 = 1.0 - (float)(fAimFactor4 / fAimFactor2);
        values->fTime1 = fAimFactor2;
      }
      else
      {
        v16 = fAimFactor2 / fAimFactor4;
        values->fTime4 = fAimFactor4;
        values->fStrength4 = 1.0 - (float)(fAimFactor2 / fAimFactor4);
        values->fTime1 = fAimFactor4;
      }
      values->fStrength1 = v16;
    }
  }
  else
  {
    if ( fAimFactor6 <= fAimFactor2 )
    {
      v15 = fAimFactor6 / fAimFactor2;
      values->fTime2 = fAimFactor2;
      values->fStrength2 = 1.0 - (float)(fAimFactor6 / fAimFactor2);
      values->fTime3 = fAimFactor2;
    }
    else
    {
      v15 = fAimFactor2 / fAimFactor6;
      values->fTime6 = fAimFactor6;
      values->fStrength6 = 1.0 - (float)(fAimFactor2 / fAimFactor6);
      values->fTime3 = fAimFactor6;
    }
    values->fStrength3 = v15;
  }
}

/*
==============
BG_CalculateAnimRateFromCharacterSpeed
==============
*/

float __fastcall BG_CalculateAnimRateFromCharacterSpeed(double characterSpeed, int animIndex, float durationIntoAnim, SuitAnimType suitAnimIndex)
{
  __int64 v4; 
  __int64 v5; 
  __int128 v6; 
  BgStatic *ActiveStatics; 
  __int64 v8; 
  __int64 v9; 
  const PlayerAnimEntry *v10; 
  unsigned __int64 flags; 
  const dvar_t *v12; 
  int v13; 
  float AnimEntryMoveSpeed; 
  float v15; 
  __int128 v17; 
  const dvar_t *v18; 
  float result; 
  __int128 v22; 
  __int64 v23; 
  __int64 v24; 

  v4 = suitAnimIndex;
  v5 = animIndex;
  v6 = *(_OWORD *)&characterSpeed;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3663, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !(_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3664, ASSERT_TYPE_ASSERT, "(animIndex)", (const char *)&queryFormat, "animIndex") )
    __debugbreak();
  if ( (v5 & 0x1000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3665, ASSERT_TYPE_ASSERT, "(!(animIndex & (1<<(13-1))))", (const char *)&queryFormat, "!(animIndex & ANIM_TOGGLEBIT)") )
    __debugbreak();
  if ( (unsigned int)v4 >= 4 )
  {
    LODWORD(v23) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3666, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v23, 4) )
      __debugbreak();
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  v8 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3670, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v9 = *(_QWORD *)(v8 + 8 * v4);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3673, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  if ( (unsigned int)v5 >= *(_DWORD *)(v9 + 8) )
  {
    LODWORD(v24) = *(_DWORD *)(v9 + 8);
    LODWORD(v23) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3674, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( playerAnim->animationCount )", "animIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v23, v24) )
      __debugbreak();
  }
  v10 = (const PlayerAnimEntry *)(*(_QWORD *)(v9 + 48) + 104 * v5);
  flags = v10->flags;
  if ( (flags & 0x800100) == 0 )
    return FLOAT_1_0;
  if ( (flags & 0x800000) != 0 )
  {
    v12 = DVARBOOL_anim_disableSpeedScaledTransitions;
    if ( !DVARBOOL_anim_disableSpeedScaledTransitions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "anim_disableSpeedScaledTransitions") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
      return FLOAT_1_0;
  }
  v13 = v10->flags & 2;
  AnimEntryMoveSpeed = BG_Animation_GetAnimEntryMoveSpeed(v10);
  v15 = AnimEntryMoveSpeed;
  if ( AnimEntryMoveSpeed == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3692, ASSERT_TYPE_ASSERT, "(animMoveSpeed != 0.0f)", (const char *)&queryFormat, "animMoveSpeed != 0.0f") )
    __debugbreak();
  v17 = v6;
  *(float *)&v17 = *(float *)&v6 / AnimEntryMoveSpeed;
  _XMM6 = v17;
  if ( (v10->flags & 0x800000) != 0 )
  {
    v18 = DCONST_DVARFLT_bg_animUnspeedScaledDuration;
    if ( !DCONST_DVARFLT_bg_animUnspeedScaledDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_animUnspeedScaledDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( durationIntoAnim < v18->current.value )
      __asm { vmaxss  xmm6, xmm6, cs:__real@3f800000 }
  }
  result = FLOAT_0_1;
  if ( *(float *)&_XMM6 < 0.1 )
  {
    if ( *(float *)&_XMM6 < 0.0099999998 )
    {
      if ( v13 )
        return 0.0;
    }
    return result;
  }
  result = FLOAT_2_0;
  if ( *(float *)&_XMM6 <= 2.0 )
    return *(float *)&_XMM6;
  if ( v13 )
  {
    __asm { vminss  xmm6, xmm6, cs:__real@40800000 }
    return *(float *)&_XMM6;
  }
  if ( v15 <= 150.0 )
  {
    if ( v15 >= 20.0 )
    {
      v22 = LODWORD(FLOAT_3_0);
      *(float *)&v22 = 3.0 - (float)((float)(v15 - 20.0) * 0.0076923077);
      _XMM2 = v22;
      __asm { vminss  xmm6, xmm2, xmm6 }
    }
    else
    {
      __asm { vminss  xmm6, xmm6, cs:__real@40400000 }
    }
    return *(float *)&_XMM6;
  }
  return result;
}

/*
==============
BG_CalculateDurationIntoAnimFromLegsTimer
==============
*/
float BG_CalculateDurationIntoAnimFromLegsTimer(int legsTimer, int animIndex, SuitAnimType suitAnimIndex)
{
  __int64 v4; 
  __int64 v5; 
  BgStatic *ActiveStatics; 
  __int64 v7; 
  __int64 v8; 
  __int64 v10; 
  __int64 v11; 

  v4 = suitAnimIndex;
  v5 = animIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3626, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( (unsigned int)v4 >= 4 )
  {
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3627, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v10, 4) )
      __debugbreak();
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  v7 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3631, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v8 = *(_QWORD *)(v7 + 8 * v4);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3634, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  if ( (unsigned int)v5 >= *(_DWORD *)(v8 + 8) )
  {
    LODWORD(v11) = *(_DWORD *)(v8 + 8);
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3635, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( playerAnim->animationCount )", "animIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  return (float)(2 * (5 * *(unsigned __int16 *)(104 * v5 + *(_QWORD *)(v8 + 48) + 84) + 250) - legsTimer) * 0.000099999997;
}

/*
==============
BG_CalculateNodeAnimRate
==============
*/
float BG_CalculateNodeAnimRate(const characterInfo_t *ci, const int newAnimIndex, const bool firstCall, float *outTotalWeight)
{
  XAnimTree *pXAnimTree; 
  float speed; 
  __int128 v10; 
  unsigned __int16 InfoIndex; 
  XAnimInfo *AnimInfo; 
  XAnimInfo *v13; 
  unsigned int animIndex; 
  double v15; 
  float v16; 
  double Length; 
  float v18; 
  float i; 
  double Weight; 
  unsigned __int16 children; 
  XAnimInfo *v23; 
  __int128 v24; 
  float outTotalWeighta; 
  vec3_t trans; 
  vec2_t rot; 

  pXAnimTree = ci->pXAnimTree;
  speed = (float)ci->speed;
  v10 = 0i64;
  InfoIndex = XAnimGetInfoIndex(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, newAnimIndex);
  AnimInfo = GetAnimInfo(InfoIndex);
  outTotalWeighta = 0.0;
  v13 = AnimInfo;
  if ( !AnimInfo->animToModel )
  {
    Weight = XAnimGetWeight(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, newAnimIndex);
    children = v13->children;
    for ( i = *(float *)&Weight; children; children = v23->next )
    {
      v23 = GetAnimInfo(children);
      if ( v23->animIndex )
      {
        v24 = v10;
        *(float *)&v24 = *(float *)&v10 + (float)(BG_CalculateNodeAnimRate(ci, v23->animIndex, 0, &outTotalWeighta) * i);
        v10 = v24;
      }
    }
    if ( !outTotalWeight )
    {
      outTotalWeighta = i;
      goto LABEL_18;
    }
    *outTotalWeight = i + *outTotalWeight;
    goto LABEL_16;
  }
  animIndex = AnimInfo->animIndex;
  v15 = XAnimGetWeight(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  v16 = *(float *)&v15;
  if ( *(float *)&v15 <= 0.0 || (Length = XAnimGetLength(pXAnimTree->anims, animIndex), *(float *)&Length == 0.0) )
  {
LABEL_16:
    i = outTotalWeighta;
    goto LABEL_18;
  }
  XAnimGetRelDelta(pXAnimTree->anims, animIndex, &rot, &trans, 0.0, 1.0);
  v18 = fsqrt((float)((float)(trans.v[0] * trans.v[0]) + (float)(trans.v[1] * trans.v[1])) + (float)(trans.v[2] * trans.v[2]));
  if ( v18 == 0.0 )
    return 0.0;
  if ( (float)(v18 / *(float *)&Length) == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6892, ASSERT_TYPE_ASSERT, "(animMoveSpeed)", (const char *)&queryFormat, "animMoveSpeed") )
    __debugbreak();
  i = outTotalWeighta;
  *(float *)&v10 = (float)(speed / (float)(v18 / *(float *)&Length)) * v16;
LABEL_18:
  if ( !v13->animToModel )
  {
    if ( *(float *)&v10 == 0.0 && firstCall )
    {
      *(float *)&v10 = FLOAT_1_0;
    }
    else if ( i != 1.0 && i > 0.0 )
    {
      *(float *)&v10 = *(float *)&v10 / i;
    }
  }
  return *(float *)&v10;
}

/*
==============
BG_CalculatePitchAimFactors
==============
*/
void BG_CalculatePitchAimFactors(float pitchAimAngle, float maxPitchAimAngle, float *aimFactor2, float *aimFactor8)
{
  __int128 v4; 
  __int128 v5; 

  v4 = LODWORD(FLOAT_1_0);
  *(float *)&v4 = 1.0 / maxPitchAimAngle;
  if ( pitchAimAngle <= 90.0 )
  {
    *(float *)&v4 = *(float *)&v4 * pitchAimAngle;
    _XMM0 = v4;
    __asm { vminss  xmm1, xmm0, xmm3 }
    *aimFactor2 = *(float *)&_XMM1;
    *aimFactor8 = 0;
  }
  else
  {
    v5 = LODWORD(FLOAT_180_0);
    *(float *)&v5 = (float)(180.0 - pitchAimAngle) * (float)(1.0 / maxPitchAimAngle);
    _XMM2 = v5;
    __asm { vminss  xmm3, xmm2, xmm3 }
    *aimFactor2 = 0;
    *aimFactor8 = *(float *)&_XMM3;
  }
}

/*
==============
BG_CalculateYawAimFactors
==============
*/

void __fastcall BG_CalculateYawAimFactors(double yawAimAngle, float maxYawAimAngle, float *aimFactor4, float *aimFactor6)
{
  __int128 v5; 

  v5 = *(_OWORD *)&yawAimAngle;
  *(float *)&v5 = *(float *)&yawAimAngle / maxYawAimAngle;
  _XMM3 = v5;
  if ( *(float *)&yawAimAngle >= 0.0 )
  {
    __asm { vminss  xmm0, xmm3, cs:__real@3f800000 }
    *aimFactor4 = *(float *)&_XMM0;
    *aimFactor6 = 0;
  }
  else
  {
    _XMM0 = v5 ^ _xmm;
    __asm { vminss  xmm1, xmm0, cs:__real@3f800000 }
    *aimFactor4 = 0;
    *aimFactor6 = *(float *)&_XMM1;
  }
}

/*
==============
BG_ClearCharacterDObj
==============
*/
void BG_ClearCharacterDObj(const entityState_t *es)
{
  BgStatic *ActiveStatics; 
  unsigned int number; 
  BgStatic *v4; 
  const DObj *ClientDObj; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9324, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  number = es->number;
  v4 = ActiveStatics;
  if ( ActiveStatics->IsClient(ActiveStatics) )
    ClientDObj = Com_GetClientDObj(number, (LocalClientNum_t)LODWORD(v4[1].__vftable));
  else
    ClientDObj = (const DObj *)((__int64 (__fastcall *)(BgStatic *, _QWORD))v4->__vftable[1].HasCharacterInfo)(v4, number);
  if ( ClientDObj && ClientDObj->tree )
    XAnimClearTree(ClientDObj);
  v4->SafeDObjFree(v4, es->number);
}

/*
==============
BG_ClearDropWeaponAnim
==============
*/
void BG_ClearDropWeaponAnim(const BgHandler *handler, playerState_s *ps)
{
  const dvar_t *v4; 
  unsigned int Animset; 
  PlayerASM_AnimSlot v6; 
  unsigned int v7; 
  unsigned int Anim; 
  bool v9; 
  SuitAnimType SuitAnimIndexFromPlayerState; 
  int torsoAnim; 
  SuitAnimType v12; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2210, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !PlayerASM_IsEnabled() )
    goto LABEL_10;
  v4 = DCONST_DVARBOOL_playerasm_disable_cancel_torso_stance_change;
  if ( !DCONST_DVARBOOL_playerasm_disable_cancel_torso_stance_change && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_disable_cancel_torso_stance_change") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
LABEL_10:
    SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(ps);
    torsoAnim = ps->torsoAnim;
    v12 = SuitAnimIndexFromPlayerState;
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4968, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
      __debugbreak();
    v9 = (BG_AnimationMP_GetAnimationForIndex(torsoAnim & 0xFFFFEFFF, v12)->flags & 0x2000) == 0;
  }
  else
  {
    Animset = BG_PlayerASM_GetAnimset(ps);
    LOBYTE(v6) = 1;
    v7 = Animset;
    Anim = BG_PlayerASM_GetAnim(ps, v6);
    v9 = BG_PlayerASM_IsDropWeaponAlias(Anim, v7) == 0;
  }
  if ( !v9 )
    BG_ClearTorsoAnim(handler, ps);
}

/*
==============
BG_ClearLegsAnim
==============
*/
void BG_ClearLegsAnim(const BgHandler *handler, playerState_s *ps)
{
  BgPlayer_Asm *v4; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2136, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() )
  {
    if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2140, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
      __debugbreak();
    v4 = handler->GetPlayerASM(handler);
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2142, ASSERT_TYPE_ASSERT, "(playerAsm)", (const char *)&queryFormat, "playerAsm") )
      __debugbreak();
    BgPlayer_Asm::EnterDefaultState(v4, ps, 0, 1);
  }
  else
  {
    BG_PlayAnim(ps, 0, ANIM_BP_LEGS, 0, 0, 1, 1, 0, 0);
  }
}

/*
==============
BG_ClearLegsAnimTree
==============
*/
void BG_ClearLegsAnimTree(DObj *obj, const characterInfo_t *ci, unsigned int legsAnimRoot)
{
  XAnimTree *pXAnimTree; 
  unsigned __int16 InfoIndex; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 children; 
  int i; 
  int j; 
  unsigned __int16 next; 
  signed int animIndex; 
  float v14; 
  XAnimInfo *v15; 
  float weight; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5714, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5715, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  pXAnimTree = ci->pXAnimTree;
  if ( !pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5718, ASSERT_TYPE_ASSERT, "(pAnimTree)", (const char *)&queryFormat, "pAnimTree") )
    __debugbreak();
  InfoIndex = XAnimGetInfoIndex(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, legsAnimRoot);
  if ( InfoIndex )
  {
    AnimInfo = GetAnimInfo(InfoIndex);
    if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5729, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    children = AnimInfo->children;
    for ( i = 0; children; children = GetAnimInfo(children)->next )
      ++i;
    for ( j = i - 8; j > 0; --j )
    {
      next = AnimInfo->children;
      animIndex = -1;
      v14 = FLOAT_3_4028235e38;
      if ( next )
      {
        do
        {
          v15 = GetAnimInfo(next);
          if ( v15 )
          {
            if ( v15->animToModel )
            {
              weight = v15->state.weight;
              if ( weight > 0.0 && v15->state.goalTime > 0.0 && weight < v14 )
              {
                animIndex = v15->animIndex;
                v14 = v15->state.weight;
              }
            }
          }
          next = v15->next;
        }
        while ( next );
        if ( animIndex > 0 )
          XAnimClearTreeGoalWeights(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, animIndex, 0.0, 1, obj, LINEAR);
      }
    }
  }
}

/*
==============
BG_ClearPrepareAnim
==============
*/
void BG_ClearPrepareAnim(const BgHandler *handler, playerState_s *ps)
{
  SuitAnimType SuitAnimIndexFromPlayerState; 
  int torsoAnim; 
  SuitAnimType v6; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2161, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2162, ASSERT_TYPE_ASSERT, "(!PlayerASM_IsEnabled())", (const char *)&queryFormat, "!PlayerASM_IsEnabled()") )
    __debugbreak();
  SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(ps);
  torsoAnim = ps->torsoAnim;
  v6 = SuitAnimIndexFromPlayerState;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4817, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( (BG_AnimationMP_GetAnimationForIndex(torsoAnim & 0xFFFFEFFF, v6)->flags & 0x1000) != 0 )
    BG_ClearTorsoAnim(handler, ps);
}

/*
==============
BG_ClearReloadAnim
==============
*/
void BG_ClearReloadAnim(const BgHandler *handler, playerState_s *ps)
{
  const dvar_t *v4; 
  unsigned int Animset; 
  PlayerASM_AnimSlot v6; 
  unsigned int v7; 
  unsigned int Anim; 
  bool v9; 
  SuitAnimType SuitAnimIndexFromPlayerState; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2241, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !PlayerASM_IsEnabled() )
    goto LABEL_10;
  v4 = DCONST_DVARBOOL_playerasm_disable_cancel_torso_stance_change;
  if ( !DCONST_DVARBOOL_playerasm_disable_cancel_torso_stance_change && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_disable_cancel_torso_stance_change") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
LABEL_10:
    SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(ps);
    v9 = (BG_AnimationMP_GetAnimationForIndex(ps->torsoAnim & 0xFFFFEFFF, SuitAnimIndexFromPlayerState)->flags & 0x10) == 0;
  }
  else
  {
    Animset = BG_PlayerASM_GetAnimset(ps);
    LOBYTE(v6) = 1;
    v7 = Animset;
    Anim = BG_PlayerASM_GetAnim(ps, v6);
    v9 = BG_PlayerASM_IsReloadAlias(Anim, v7) == 0;
  }
  if ( !v9 )
    BG_ClearTorsoAnim(handler, ps);
}

/*
==============
BG_ClearSceneAnim
==============
*/
void BG_ClearSceneAnim(const BgHandler *handler, playerState_s *ps)
{
  unsigned int Animset; 
  unsigned int Anim; 
  bool v6; 
  SuitAnimType SuitAnimIndexFromPlayerState; 
  int legsAnim; 
  SuitAnimType v9; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2179, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() )
  {
    Animset = BG_PlayerASM_GetAnimset(ps);
    Anim = BG_PlayerASM_GetAnim(ps, MOVEMENT);
    v6 = BG_PlayerASM_IsSceneAlias(Anim, Animset) == 0;
  }
  else
  {
    SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(ps);
    legsAnim = ps->legsAnim;
    v9 = SuitAnimIndexFromPlayerState;
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4590, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
      __debugbreak();
    v6 = (BG_AnimationMP_GetAnimationForIndex(legsAnim & 0xFFFFEFFF, v9)->flags & 0x20000000) == 0i64;
  }
  if ( !v6 )
    BG_ClearLegsAnim(handler, ps);
}

/*
==============
BG_ClearTorsoAnim
==============
*/
void BG_ClearTorsoAnim(const BgHandler *handler, playerState_s *ps)
{
  BgPlayer_Asm *v4; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2112, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() )
  {
    if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2116, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
      __debugbreak();
    v4 = handler->GetPlayerASM(handler);
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2118, ASSERT_TYPE_ASSERT, "(playerAsm)", (const char *)&queryFormat, "playerAsm") )
      __debugbreak();
    BgPlayer_Asm::EnterDefaultState(v4, ps, 1, 0);
  }
  else
  {
    BG_PlayAnim(ps, 0, ANIM_BP_TORSO, 0, 0, 1, 1, 0, 0);
  }
}

/*
==============
BG_DebugDumpHiddenBones
==============
*/
void BG_DebugDumpHiddenBones(const DObj *obj, const DObjPartBits *hidePartBits)
{
  const char *v4; 
  unsigned int v5; 
  unsigned __int64 v6; 
  const char *BoneName; 
  ScopedCriticalSection v8; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9428, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v8, CRITSECT_DEBUG_HIDDEN_BONES, SCOPED_CRITSECT_NORMAL);
  v4 = "U";
  if ( obj->tree )
  {
    v4 = "C";
    if ( !obj->tree->owner[0] )
      v4 = "S";
  }
  Com_Printf(34, "=== [%s] BEGIN DUMP HIDDEN BONES ===\n", v4);
  v5 = 0;
  v6 = 0i64;
  do
  {
    if ( ((0x80000000 >> (v5 & 0x1F)) & hidePartBits->array[v6 >> 5]) != 0 )
    {
      BoneName = DObjGetBoneName(obj, v5);
      Com_Printf(34, "Hidden bone: [%u] %s\n", v5, BoneName);
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 0x100 );
  Com_Printf(34, "=== [%s] END DUMP HIDDEN BONES ===\n", v4);
  ScopedCriticalSection::~ScopedCriticalSection(&v8);
}

/*
==============
BG_DebugDumpObjModelNames
==============
*/
void BG_DebugDumpObjModelNames(const DObj *obj)
{
  int NumModels; 
  int i; 
  const XModel *Model; 
  char *fmt; 
  char *fmta; 
  ScopedCriticalSection v7; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9473, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj", -2i64) )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v7, CRITSECT_DEBUG_HIDDEN_BONES, SCOPED_CRITSECT_NORMAL);
  LODWORD(fmt) = obj->entnum - 1;
  Com_Printf(34, "=== BEGIN DUMP DOBJ MODEL NAMES obj: %p model count: %d ent: %d ===\n", obj, obj->numModels, fmt);
  NumModels = DObjGetNumModels(obj);
  for ( i = 0; i < NumModels; ++i )
  {
    Model = DObjGetModel(obj, i);
    if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9483, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    Com_Printf(34, "Model %d: %s\n", (unsigned int)i, Model->name);
  }
  LODWORD(fmta) = obj->entnum - 1;
  Com_Printf(34, "=== END DUMP DOBJ MODEL NAMES obj: %p model count: %d ent: %d ===\n", obj, obj->numModels, fmta);
  ScopedCriticalSection::~ScopedCriticalSection(&v7);
}

/*
==============
BG_DebugDumpPartBits
==============
*/
void BG_DebugDumpPartBits(const DObjPartBits *hidePartBits)
{
  unsigned int v2; 
  unsigned __int64 v3; 
  ScopedCriticalSection v4; 

  ScopedCriticalSection::ScopedCriticalSection(&v4, CRITSECT_DEBUG_HIDDEN_BONES, SCOPED_CRITSECT_NORMAL);
  Com_Printf(34, "=== BEGIN DUMP PART BITS ===\n");
  v2 = 0;
  v3 = 0i64;
  do
  {
    if ( ((0x80000000 >> (v2 & 0x1F)) & hidePartBits->array[v3 >> 5]) != 0 )
      Com_Printf(34, "Bit set: %u\n", v2);
    ++v2;
    ++v3;
  }
  while ( v2 < 0x100 );
  Com_Printf(34, "=== END DUMP PART BITS ===\n");
  ScopedCriticalSection::~ScopedCriticalSection(&v4);
}

/*
==============
BG_DegreesToMovementDir
==============
*/
__int64 BG_DegreesToMovementDir(float degrees)
{
  double v1; 
  int v2; 
  __int64 v4; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2919, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  v1 = AngleNormalize360(degrees + 0.703125);
  v2 = (int)(float)(*(float *)&v1 * 0.71111113);
  if ( v2 < 0 )
  {
    LODWORD(v4) = (int)(float)(*(float *)&v1 * 0.71111113);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2927, ASSERT_TYPE_ASSERT, "( ( movementDir >= 0 ) )", "( movementDir ) = %i", v4) )
      __debugbreak();
  }
  if ( v2 >= 256 )
  {
    LODWORD(v4) = (int)(float)(*(float *)&v1 * 0.71111113);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2928, ASSERT_TYPE_ASSERT, "( ( movementDir < (1 << 8) ) )", "( movementDir ) = %i", v4) )
      __debugbreak();
  }
  return (unsigned int)v2;
}

/*
==============
BG_DetermineStrafeCondition
==============
*/

__int64 __fastcall BG_DetermineStrafeCondition(pmove_t *pm, double forwardMove, const float rightMove)
{
  float v4; 
  const SuitDef *SuitDef; 
  __int128 v7; 
  float v11; 
  bool v12; 
  double PlayerMovementViewDelta; 
  float v14; 
  float v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 

  v4 = *(float *)&forwardMove;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2827, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(pm->ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2842, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( SuitDef->isMovementCameraIndependent )
    return 0i64;
  v7 = *(_OWORD *)&forwardMove;
  *(float *)&v7 = fsqrt((float)(*(float *)&forwardMove * *(float *)&forwardMove) + (float)(rightMove * rightMove));
  _XMM2 = v7;
  __asm
  {
    vcmpless xmm1, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm0, xmm1
  }
  v11 = v4 / *(float *)&_XMM0;
  v12 = rightMove > 0.0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 0x1Du) )
  {
    PlayerMovementViewDelta = Slide_GetPlayerMovementViewDelta(pm->ps, pm);
    v14 = *(float *)&PlayerMovementViewDelta;
    v15 = *(float *)&PlayerMovementViewDelta * 0.017453292;
    cosf_0(*(float *)&PlayerMovementViewDelta * 0.017453292);
    v11 = v15;
    v12 = v14 > 0.0;
  }
  v16 = DCONST_DVARFLT_player_strafeAnimCosAngle;
  if ( !DCONST_DVARFLT_player_strafeAnimCosAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_strafeAnimCosAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v11 > v16->current.value )
    return 0i64;
  v17 = DCONST_DVARFLT_player_strafeAnimCosAngle;
  if ( !DCONST_DVARFLT_player_strafeAnimCosAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_strafeAnimCosAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v11 < COERCE_FLOAT(v17->current.integer ^ _xmm) )
    return 0i64;
  else
    return (unsigned int)v12 + 1;
}

/*
==============
BG_DetermineTwitchAnimAndTime
==============
*/
void BG_DetermineTwitchAnimAndTime(characterInfo_t *ci, const entityState_t *es, int baseIdleAnimIndex, int *chosenAnimIndex, float *animTime)
{
  __int64 v9; 
  BgStatic *ActiveStatics; 
  __int64 v11; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  __int64 v13; 
  const PlayerAnimScript *v14; 
  __int64 v15; 
  unsigned int XAnimIndex; 
  __int64 entityNum; 
  unsigned __int8 v20; 
  __int128 v21; 
  __int128 v22; 
  float *v23; 
  __int128 v26; 
  float v27; 
  PlayerAnimScriptIdleTwitch *scriptIdleTwitches; 
  __int64 v29; 
  double v31; 
  __int128 v33; 
  unsigned int twitchCount; 
  unsigned int v35; 
  float v38; 
  float v39; 
  __int128 v40; 
  int v41; 
  int v42; 
  unsigned int v43; 
  __int64 v44; 
  __int64 *v45; 
  int v46; 
  unsigned int v47; 
  __int128 v50; 
  __int128 v51; 
  unsigned int v52; 
  double Length; 
  __int64 v55; 
  __int64 v56; 
  __int16 outEntNum[2]; 
  float v58; 
  unsigned int pHoldrand; 
  float *v60; 
  __int64 v61[2]; 
  int v62; 

  v9 = baseIdleAnimIndex;
  v60 = animTime;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6332, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6333, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  v11 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6337, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(ci);
  v13 = SuitAnimIndexFromCharacter;
  if ( (unsigned int)SuitAnimIndexFromCharacter >= NUM_ANIM_SUIT_STATE )
  {
    LODWORD(v55) = SuitAnimIndexFromCharacter;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6340, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v55, 4) )
      __debugbreak();
  }
  v14 = *(const PlayerAnimScript **)(v11 + 8 * v13);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6343, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
    __debugbreak();
  *chosenAnimIndex = -1;
  v15 = (__int64)&v14->animations[v9];
  if ( (*(_DWORD *)(v15 + 16) & 0x80000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6348, ASSERT_TYPE_ASSERT, "(baseIdleAnim->flags & ANIMFL_BASEIDLEANIM)", (const char *)&queryFormat, "baseIdleAnim->flags & ANIMFL_BASEIDLEANIM") )
    __debugbreak();
  XAnimIndex = BG_GetXAnimIndex(v14, v9);
  *(double *)&_XMM0 = XAnimGetLength(ci->pXAnimTree->anims, XAnimIndex);
  entityNum = ci->entityNum;
  __asm
  {
    vcmpless xmm1, xmm0, xmm9
    vblendvps xmm0, xmm0, xmm12, xmm1
  }
  v58 = *(float *)&_XMM0;
  if ( (unsigned int)(entityNum + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)entityNum, "signed", entityNum) )
    __debugbreak();
  outEntNum[0] = entityNum;
  BG_GameInterface_InteractionAnims_GetSyncedEntNumForIdleTwitches(ci, es, outEntNum);
  v20 = *(_BYTE *)(v15 + 99);
  v22 = 0i64;
  *(float *)&v22 = (float)(*(_DWORD *)(v11 + 19528) + 12345 * (outEntNum[0] + 1)) * 0.001;
  v21 = v22;
  if ( v20 )
  {
    scriptIdleTwitches = v14->scriptIdleTwitches;
    v61[0] = 0i64;
    v29 = v20;
    v61[1] = 0i64;
    v62 = 0;
    pHoldrand = v9 + 7 * outEntNum[0];
    BG_srand(&pHoldrand);
    _XMM0 = LODWORD(scriptIdleTwitches[v29 - 1].cycleLength);
    if ( *(float *)&_XMM0 <= 0.0 )
    {
      v31 = *(float *)&_XMM0;
      __asm { vxorpd  xmm0, xmm0, xmm0 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6387, ASSERT_TYPE_ASSERT, "( twitches->cycleLength ) > ( 0.0f )", "%s > %s\n\t%g, %g", "twitches->cycleLength", "0.0f", v31, *(double *)&_XMM0) )
        __debugbreak();
    }
    v33 = v21;
    twitchCount = scriptIdleTwitches[v29 - 1].twitchCount;
    v35 = 0;
    _XMM8 = 0i64;
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v21 + 1);
    *(float *)&v33 = (float)((float)(*(float *)&v21 / scriptIdleTwitches[v29 - 1].cycleLength) - *(float *)&_XMM2) * scriptIdleTwitches[v29 - 1].cycleLength;
    v26 = v33;
    if ( twitchCount )
    {
      v38 = v58;
      v39 = v58 - 0.1;
      while ( *(float *)&v26 >= v39 )
      {
        v40 = v26;
        *(float *)&v40 = *(float *)&v26 - v39;
        v26 = v40;
        v41 = -1;
        v42 = BG_irand(0, twitchCount - v35, &pHoldrand);
        v43 = scriptIdleTwitches[v29 - 1].twitchCount;
        v44 = 0i64;
        if ( v43 )
        {
          v45 = v61;
          do
          {
            if ( !*(_DWORD *)v45 )
            {
              if ( !v42 )
              {
                v41 = v44;
                *((_DWORD *)v61 + v44) = 1;
                break;
              }
              --v42;
            }
            v44 = (unsigned int)(v44 + 1);
            v45 = (__int64 *)((char *)v45 + 4);
          }
          while ( (unsigned int)v44 < v43 );
        }
        if ( v41 >= v43 )
        {
          LODWORD(v56) = v43;
          LODWORD(v55) = v41;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6422, ASSERT_TYPE_ASSERT, "(unsigned)( nextTwitchIndex ) < (unsigned)( twitches->twitchCount )", "nextTwitchIndex doesn't index twitches->twitchCount\n\t%i not in [0, %i)", v55, v56) )
            __debugbreak();
        }
        v46 = scriptIdleTwitches[v29 - 1].twitches[v41];
        v47 = BG_GetXAnimIndex(v14, v46);
        *(double *)&_XMM0 = XAnimGetLength(ci->pXAnimTree->anims, v47);
        __asm
        {
          vcmpless xmm1, xmm0, xmm11
          vblendvps xmm2, xmm0, xmm12, xmm1
        }
        v50 = _XMM2;
        *(float *)&v50 = *(float *)&_XMM2 - 0.1;
        _XMM0 = v50;
        if ( *(float *)&v26 < (float)(*(float *)&_XMM2 - 0.1) )
        {
          *chosenAnimIndex = v46;
          v23 = v60;
          *v60 = *(float *)&v26 / *(float *)&_XMM2;
          goto LABEL_44;
        }
        twitchCount = scriptIdleTwitches[v29 - 1].twitchCount;
        ++v35;
        v51 = v26;
        *(float *)&v51 = *(float *)&v26 - *(float *)&_XMM0;
        v26 = v51;
        if ( v35 >= twitchCount )
          goto LABEL_43;
      }
      v23 = v60;
      *chosenAnimIndex = v9;
      *v23 = *(float *)&v26 / v38;
    }
    else
    {
LABEL_43:
      v23 = v60;
    }
  }
  else
  {
    v23 = v60;
    _XMM8 = 0i64;
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    *(float *)&v26 = (float)((float)(*(float *)&v22 / (float)(v58 - 0.1)) - *(float *)&_XMM2) * (float)(v58 - 0.1);
    v27 = *(float *)&v26 / v58;
    *chosenAnimIndex = v9;
    *v23 = v27;
  }
LABEL_44:
  if ( *chosenAnimIndex == -1 )
  {
    *chosenAnimIndex = v9;
    v52 = BG_GetXAnimIndex(v14, v9);
    Length = XAnimGetLength(ci->pXAnimTree->anims, v52);
    __asm { vroundss xmm3, xmm8, xmm0, 1 }
    *v23 = (float)(*(float *)&v26 / *(float *)&Length) - *(float *)&_XMM3;
  }
}

/*
==============
BG_EvaluateConditions
==============
*/
__int64 BG_EvaluateConditions(const characterInfo_t *ci, const PlayerAnimScriptItem *scriptItem)
{
  PlayerAnimScriptCondition *conditions; 
  unsigned int v5; 
  unsigned int *i; 
  PlayerAnimScriptConditionTypes AnimConditionType; 
  __int64 v8; 
  unsigned int *v9; 
  unsigned int v10; 
  unsigned int *v11; 
  char *v12; 
  __int64 index; 
  unsigned int *v15; 
  unsigned int v16; 
  unsigned int *v17; 
  char *v18; 

  if ( BG_GetConditionBit(ci, 3) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1646, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED") )
    __debugbreak();
  if ( BG_GetConditionBit(ci, 3) >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1647, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES") )
    __debugbreak();
  conditions = scriptItem->conditions;
  v5 = 0;
  if ( !scriptItem->conditionCount )
    return 1i64;
  for ( i = conditions->value; ; i += 9 )
  {
    AnimConditionType = BG_GetAnimConditionType(conditions->index);
    if ( AnimConditionType == ANIM_CONDTYPE_BITFLAGS )
    {
      index = conditions->index;
      v15 = ci->clientConditions[index];
      if ( (const characterInfo_t *)((char *)ci + index * 32) == (const characterInfo_t *)-2932i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.h", 1041, ASSERT_TYPE_ASSERT, "(array)", (const char *)&queryFormat, "array") )
        __debugbreak();
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.h", 1042, ASSERT_TYPE_ASSERT, "(array2)", (const char *)&queryFormat, "array2") )
        __debugbreak();
      v16 = 0;
      v17 = i;
      v18 = (char *)((char *)v15 - (char *)i);
      while ( (*(unsigned int *)((_BYTE *)v17 + (_QWORD)v18) & *v17) == 0 )
      {
        ++v16;
        ++v17;
        if ( v16 >= 8 )
          return 0i64;
      }
      goto LABEL_20;
    }
    if ( AnimConditionType == ANIM_CONDTYPE_VALUE )
      break;
LABEL_20:
    ++v5;
    ++conditions;
    if ( v5 >= scriptItem->conditionCount )
      return 1i64;
  }
  v8 = conditions->index;
  v9 = ci->clientConditions[v8];
  if ( (const characterInfo_t *)((char *)ci + v8 * 32) == (const characterInfo_t *)-2932i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.h", 1057, ASSERT_TYPE_ASSERT, "(array)", (const char *)&queryFormat, "array") )
    __debugbreak();
  if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.h", 1058, ASSERT_TYPE_ASSERT, "(array2)", (const char *)&queryFormat, "array2") )
    __debugbreak();
  v10 = 0;
  v11 = i;
  v12 = (char *)((char *)v9 - (char *)i);
  while ( *(unsigned int *)((char *)v11 + (_QWORD)v12) == *v11 )
  {
    ++v10;
    ++v11;
    if ( v10 >= 8 )
      goto LABEL_20;
  }
  return 0i64;
}

/*
==============
BG_ExecuteCommand
==============
*/
__int64 BG_ExecuteCommand(playerState_s *ps, const PlayerAnimScriptCommand *scriptCommand, int setTimer, int isContinue, int force, int forceLegsOnly, int turn)
{
  __int64 animIndex; 
  BgStatic *ActiveStatics; 
  __int64 v13; 
  SuitAnimType SuitAnimIndexFromPlayerState; 
  __int64 v15; 
  __int64 v16; 
  int animDuration; 
  int v18; 
  animBodyPart_t bodyPart; 
  int v20; 
  bool v21; 
  __int64 result; 
  __int64 isContinuea; 

  if ( scriptCommand->bodyPart >= 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2084, ASSERT_TYPE_ASSERT, "(scriptCommand->bodyPart < ANIM_BP_SKIP)", (const char *)&queryFormat, "scriptCommand->bodyPart < ANIM_BP_SKIP") )
    __debugbreak();
  if ( scriptCommand->bodyPart )
  {
    animIndex = scriptCommand->animIndex;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2047, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    ActiveStatics = BgStatic::GetActiveStatics();
    v13 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2052, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(ps);
    v15 = SuitAnimIndexFromPlayerState;
    if ( (unsigned int)SuitAnimIndexFromPlayerState >= NUM_ANIM_SUIT_STATE )
    {
      LODWORD(isContinuea) = SuitAnimIndexFromPlayerState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2055, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", isContinuea, 4) )
        __debugbreak();
    }
    v16 = *(_QWORD *)(v13 + 8 * v15);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2058, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
      __debugbreak();
    animDuration = scriptCommand->animDuration;
    if ( BG_IsFastDurationPerkActive(animIndex, (SuitAnimType)v15, &ps->perks) )
      animDuration = *(unsigned __int16 *)(104 * animIndex + *(_QWORD *)(v16 + 48) + 86);
    v18 = animDuration + 50;
    bodyPart = scriptCommand->bodyPart;
    v20 = scriptCommand->animIndex;
    if ( ((scriptCommand->bodyPart - 1) & 0xFFFD) != 0 )
    {
      BG_PlayAnim(ps, v20, bodyPart, v18, setTimer, isContinue, force, forceLegsOnly, turn);
    }
    else
    {
      v21 = BG_PlayAnim(ps, v20, bodyPart, v18, setTimer, isContinue, force, forceLegsOnly, turn) <= -1;
      result = (unsigned int)(animDuration + 50);
      if ( !v21 )
        return result;
    }
  }
  return 0xFFFFFFFFi64;
}

/*
==============
BG_FindWeaponXAnimIndex
==============
*/
__int64 BG_FindWeaponXAnimIndex(const animScriptData_t *scriptData, const char *animName)
{
  unsigned int v5; 
  int v6; 
  __int64 v7; 

  if ( !scriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5334, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
    __debugbreak();
  if ( !animName )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5335, ASSERT_TYPE_ASSERT, "(animName)", (const char *)&queryFormat, "animName") )
      __debugbreak();
    return 0xFFFFFFFFi64;
  }
  if ( !*animName )
    return 0xFFFFFFFFi64;
  v5 = 0;
  v6 = BG_StringHashValue(animName);
  if ( !scriptData->weaponAnims.numAnimations )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    v7 = v5;
    if ( v6 == scriptData->weaponAnims.animations[v7].iNameHash && !I_stricmp(animName, scriptData->weaponAnims.animations[v7].szAnimName) )
      break;
    if ( ++v5 >= scriptData->weaponAnims.numAnimations )
      return 0xFFFFFFFFi64;
  }
  return scriptData->weaponAnims.animations[v5].anim.index;
}

/*
==============
BG_FirstValidItem
==============
*/
PlayerAnimScriptItem *BG_FirstValidItem(const characterInfo_t *ci, const PlayerAnimScript *playerAnim, const PlayerAnimScriptEntry *script)
{
  __int64 v6; 
  __int64 v7; 
  PlayerAnimScriptItem *v8; 
  const dvar_t *v10; 
  int integer; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  __int64 v15; 
  __int64 v16; 

  BG_CheckThread();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1693, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !script && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1694, ASSERT_TYPE_ASSERT, "(script)", (const char *)&queryFormat, "script") )
    __debugbreak();
  v6 = 0i64;
  if ( !script->itemCount )
    return 0i64;
  while ( 1 )
  {
    v7 = script->items[v6];
    if ( (unsigned int)v7 >= playerAnim->scriptItemCount )
    {
      LODWORD(v16) = playerAnim->scriptItemCount;
      LODWORD(v15) = script->items[v6];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1699, ASSERT_TYPE_ASSERT, "(unsigned)( scriptItemIndex ) < (unsigned)( playerAnim->scriptItemCount )", "scriptItemIndex doesn't index playerAnim->scriptItemCount\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    v8 = &playerAnim->scriptItems[v7];
    if ( (unsigned int)BG_EvaluateConditions(ci, v8) )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= script->itemCount )
      return 0i64;
  }
  v10 = DVARINT_animscript_debug;
  if ( !DVARINT_animscript_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  integer = v10->current.integer;
  if ( integer >= 0 )
  {
    if ( integer == ci->entityNum && v8->commandCount )
    {
      v14 = DVARINT_animscript_debug_torso;
      if ( ((v8->commands->bodyPart - 1) & 0xFFFD) == 0 )
        v14 = DVARINT_animscript_debug_legs;
      Dvar_SetInt_Internal(v14, v7);
    }
  }
  else
  {
    v12 = DVARINT_animscript_debug_legs;
    if ( !DVARINT_animscript_debug_legs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug_legs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.integer != -1 )
      Dvar_SetInt_Internal(DVARINT_animscript_debug_legs, -1);
    v13 = DVARINT_animscript_debug_torso;
    if ( !DVARINT_animscript_debug_torso && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug_torso") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.integer != -1 )
    {
      Dvar_SetInt_Internal(DVARINT_animscript_debug_torso, -1);
      return v8;
    }
  }
  return v8;
}

/*
==============
BG_GetAnimMoveSpeed
==============
*/
__int64 BG_GetAnimMoveSpeed(const playerState_s *ps, characterInfo_t *ci, const PmoveASMArgs *pmoveArgs)
{
  float v6; 
  double ForwardContribution; 
  float v8; 
  double RightContribution; 
  float v10; 
  char v11; 
  unsigned int Animset; 
  unsigned int Anim; 
  unsigned int v14; 
  bool v15; 
  double UpContribution; 
  SuitAnimType SuitAnimType; 
  int legsAnim; 
  SuitAnimType v19; 
  const dvar_t *v20; 
  int v21; 
  const dvar_t *v24; 
  int integer; 
  int moveStartTimeNonReplicated; 
  const usercmd_s *cmd; 
  float v28; 
  float v29; 
  int v32; 
  vec3_t inOutPlayerVelocity; 
  WorldUpReferenceFrame v35; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10856, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = ps->velocity.v[1];
  inOutPlayerVelocity.v[0] = ps->velocity.v[0];
  inOutPlayerVelocity.v[2] = ps->velocity.v[2];
  inOutPlayerVelocity.v[1] = v6;
  BG_PlayerSecondaryCollision_ClipToVelocityPlane(ps, &inOutPlayerVelocity);
  BG_GameInterface_InteractionAnims_AdjustAnimMoveSpeedVelocity(pmoveArgs->handler, ps, &inOutPlayerVelocity);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v35, ps, pmoveArgs->handler);
  ForwardContribution = WorldUpReferenceFrame::GetForwardContribution(&v35, &inOutPlayerVelocity);
  v8 = *(float *)&ForwardContribution;
  RightContribution = WorldUpReferenceFrame::GetRightContribution(&v35, &inOutPlayerVelocity);
  v10 = fsqrt((float)(v8 * v8) + (float)(*(float *)&RightContribution * *(float *)&RightContribution));
  v11 = 0;
  if ( PlayerASM_IsEnabled() )
  {
    Animset = BG_PlayerASM_GetAnimset(ps);
    Anim = BG_PlayerASM_GetAnim(ps, MOVEMENT);
    v14 = Anim;
    if ( Anim && BG_PlayerASM_IsLadderAlias(Anim, Animset) )
    {
      v11 = 1;
      if ( !Com_GameMode_SupportsFeature(WEAPON_MANTLE_UP_WEAPON_UP|0x80) )
        goto LABEL_15;
      v15 = BG_PlayerASM_IsStrafeAlias(v14, Animset) == 0;
LABEL_9:
      if ( !v15 )
      {
        UpContribution = WorldUpReferenceFrame::GetForwardContribution(&v35, &inOutPlayerVelocity);
LABEL_16:
        LODWORD(v10) = LODWORD(UpContribution) & _xmm;
        goto LABEL_17;
      }
LABEL_15:
      UpContribution = WorldUpReferenceFrame::GetUpContribution(&v35, &inOutPlayerVelocity);
      goto LABEL_16;
    }
  }
  else
  {
    SuitAnimType = BG_GetSuitAnimType(ps->suitIndex);
    legsAnim = ps->legsAnim;
    v19 = SuitAnimType;
    if ( legsAnim && BG_IsLadderAnim(legsAnim, SuitAnimType) )
    {
      v11 = 1;
      if ( !Com_GameMode_SupportsFeature(WEAPON_MANTLE_UP_WEAPON_UP|0x80) )
        goto LABEL_15;
      v15 = !BG_IsStrafeAnim(ps->legsAnim, v19);
      goto LABEL_9;
    }
  }
LABEL_17:
  v20 = DCONST_DVARFLT_playerasm_clampvelocityvalue;
  v21 = 0;
  if ( !DCONST_DVARFLT_playerasm_clampvelocityvalue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_clampvelocityvalue") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v10 > v20->current.value || !pmoveArgs->initialSlideMoveBumped )
  {
    _XMM1 = 0i64;
    __asm { vroundss xmm3, xmm1, xmm2, 1 }
    v21 = (int)*(float *)&_XMM3;
  }
  if ( !v11 )
  {
    v24 = DCONST_DVARINT_playerasm_move_pred_window;
    if ( !DCONST_DVARINT_playerasm_move_pred_window && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_move_pred_window") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    if ( ci )
    {
      if ( pmoveArgs->cmd )
      {
        integer = v24->current.integer;
        if ( integer )
        {
          if ( v21 > 0 )
          {
            moveStartTimeNonReplicated = ci->moveStartTimeNonReplicated;
            if ( !moveStartTimeNonReplicated )
            {
              moveStartTimeNonReplicated = pmoveArgs->cmd->serverTime;
              ci->moveStartTimeNonReplicated = moveStartTimeNonReplicated;
            }
            if ( pmoveArgs->initialSlideMoveBumped || !pmoveArgs->walking )
              ci->disableMoveStartSpeedPredictionNonReplicated = 1;
            cmd = pmoveArgs->cmd;
            if ( pmoveArgs->cmd->serverTime - moveStartTimeNonReplicated <= integer && !ci->disableMoveStartSpeedPredictionNonReplicated )
            {
              v28 = _mm_cvtepi32_ps((__m128i)(unsigned int)cmd->forwardmove).m128_f32[0] * pmoveArgs->walkForwardScale;
              v29 = _mm_cvtepi32_ps((__m128i)(unsigned int)cmd->rightmove).m128_f32[0];
              fsqrt((float)((float)(v29 * pmoveArgs->walkSideScale) * (float)(v29 * pmoveArgs->walkSideScale)) + (float)(v28 * v28));
              _XMM0 = 0i64;
              __asm { vroundss xmm3, xmm0, xmm4, 1 }
              v32 = (int)*(float *)&_XMM3;
              if ( (int)*(float *)&_XMM3 < v21 )
                v32 = v21;
              v21 = v32;
            }
          }
          else
          {
            ci->moveStartTimeNonReplicated = 0;
            ci->disableMoveStartSpeedPredictionNonReplicated = 0;
          }
        }
      }
    }
  }
  if ( v21 > 511 )
    v21 = 511;
  if ( v21 < 0 )
    return 0;
  return (unsigned int)v21;
}

/*
==============
BG_GetAnimMoveTypeFlags
==============
*/
__int64 BG_GetAnimMoveTypeFlags(aistateEnum_t state, PlayerAnimScriptMoveType animMoveType, SuitAnimType suitAnimIndex)
{
  __int64 v3; 
  __int64 v4; 
  BgStatic *ActiveStatics; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v3 = suitAnimIndex;
  v4 = animMoveType;
  if ( state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2330, ASSERT_TYPE_ASSERT, "( ( state == AISTATE_COMBAT ) )", "( state ) = %i", state) )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x80 )
  {
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2331, ASSERT_TYPE_ASSERT, "(unsigned)( animMoveType ) < (unsigned)( NUM_ANIM_MOVETYPES )", "animMoveType doesn't index NUM_ANIM_MOVETYPES\n\t%i not in [0, %i)", v9, 128) )
      __debugbreak();
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2333, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( (int)v4 < 38 )
    return 0i64;
  ActiveStatics = BgStatic::GetActiveStatics();
  v7 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2342, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v8 = *(_QWORD *)(v7 + 8 * v3);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2345, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  return *(unsigned int *)(32 * v4 + *(_QWORD *)(v8 + 56));
}

/*
==============
BG_GetCharacterWeapons
==============
*/
void BG_GetCharacterWeapons(const BgWeaponMap *weaponMap, const entityState_t *es, const characterInfo_t *ci, Weapon *r_heldWeapon, Weapon *r_thrownWeapon, Weapon *r_stowedWeapon, Weapon *r_executionWeapon, Weapon *r_accessoryWeapon, Weapon *r_turretWeapon)
{
  const Weapon *OffHandWeaponForPlayerEntity; 
  weapType_t weapType; 
  bool v15; 
  int DoesNotFullyAnimateViewmodelEntityState; 
  const entityState_t *v17; 
  const BgWeaponMap *v18; 
  const Weapon *v19; 
  Weapon *v20; 
  int v21; 
  const Weapon *WeaponForEntity; 
  const Weapon *v23; 
  Weapon *v24; 
  int v25; 
  entityType_s eType; 
  int v27; 
  int v28; 
  const Weapon *StowedWeaponForPlayerEntity; 
  entityType_s v30; 
  entityType_s v31; 
  entityType_s v32; 
  bool v33; 
  bool v34; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10203, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10204, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10205, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  OffHandWeaponForPlayerEntity = BG_GetOffHandWeaponForPlayerEntity(weaponMap, es);
  weapType = BG_WeaponDefAtIndex(OffHandWeaponForPlayerEntity->weaponIdx)->weapType;
  v15 = weapType == WEAPTYPE_SCRIPT && BG_WeaponDefAtIndex(OffHandWeaponForPlayerEntity->weaponIdx)->worldModel;
  if ( !OffHandWeaponForPlayerEntity->weaponIdx )
  {
LABEL_21:
    WeaponForEntity = BG_GetWeaponForEntity(weaponMap, es);
    goto LABEL_22;
  }
  if ( weapType == WEAPTYPE_SCRIPT )
  {
    if ( v15 )
    {
      v17 = es;
      v18 = weaponMap;
      goto LABEL_17;
    }
    goto LABEL_21;
  }
  DoesNotFullyAnimateViewmodelEntityState = BG_WeaponDoesNotFullyAnimateViewmodelEntityState(es, OffHandWeaponForPlayerEntity, 0);
  v17 = es;
  v18 = weaponMap;
  if ( !DoesNotFullyAnimateViewmodelEntityState )
  {
    WeaponForEntity = BG_GetOffHandWeaponForPlayerEntity(weaponMap, es);
LABEL_22:
    v20 = r_thrownWeapon;
    *(__m256i *)&r_heldWeapon->weaponIdx = *(__m256i *)&WeaponForEntity->weaponIdx;
    *(_OWORD *)&r_heldWeapon->attachmentVariationIndices[5] = *(_OWORD *)&WeaponForEntity->attachmentVariationIndices[5];
    *(double *)&r_heldWeapon->attachmentVariationIndices[21] = *(double *)&WeaponForEntity->attachmentVariationIndices[21];
    *(_DWORD *)&r_heldWeapon->weaponCamo = *(_DWORD *)&WeaponForEntity->weaponCamo;
    *(__m256i *)&r_thrownWeapon->weaponIdx = *(__m256i *)&NULL_WEAPON.weaponIdx;
    *(_OWORD *)&r_thrownWeapon->attachmentVariationIndices[5] = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
    *(double *)&r_thrownWeapon->attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
    v21 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    goto LABEL_23;
  }
LABEL_17:
  *r_heldWeapon = *BG_GetWeaponForEntity(v18, v17);
  v19 = BG_GetOffHandWeaponForPlayerEntity(weaponMap, es);
  v20 = r_thrownWeapon;
  *(__m256i *)&r_thrownWeapon->weaponIdx = *(__m256i *)&v19->weaponIdx;
  *(_OWORD *)&r_thrownWeapon->attachmentVariationIndices[5] = *(_OWORD *)&v19->attachmentVariationIndices[5];
  *(double *)&r_thrownWeapon->attachmentVariationIndices[21] = *(double *)&v19->attachmentVariationIndices[21];
  v21 = *(_DWORD *)&v19->weaponCamo;
LABEL_23:
  *(_DWORD *)&v20->weaponCamo = v21;
  *r_stowedWeapon = *BG_GetStowedWeaponForPlayerEntity(weaponMap, es);
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2088, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !BG_IsTurretActiveFlags(&es->lerp.eFlags) )
    goto LABEL_32;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2102, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( BG_IsRemoteTurretActiveFlags(&es->lerp.eFlags) )
  {
LABEL_32:
    v24 = r_turretWeapon;
    *(__m256i *)&r_turretWeapon->weaponIdx = *(__m256i *)&NULL_WEAPON.weaponIdx;
    *(_OWORD *)&r_turretWeapon->attachmentVariationIndices[5] = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
    *(double *)&r_turretWeapon->attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
    v25 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  }
  else
  {
    *r_heldWeapon = NULL_WEAPON;
    *v20 = NULL_WEAPON;
    *r_stowedWeapon = *BG_GetStowedWeaponForPlayerEntity(weaponMap, es);
    v23 = BG_GetWeaponForEntity(weaponMap, es);
    v24 = r_turretWeapon;
    *(__m256i *)&r_turretWeapon->weaponIdx = *(__m256i *)&v23->weaponIdx;
    *(_OWORD *)&r_turretWeapon->attachmentVariationIndices[5] = *(_OWORD *)&v23->attachmentVariationIndices[5];
    *(double *)&r_turretWeapon->attachmentVariationIndices[21] = *(double *)&v23->attachmentVariationIndices[21];
    v25 = *(_DWORD *)&v23->weaponCamo;
  }
  *(_DWORD *)&v24->weaponCamo = v25;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 595, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = es->eType;
  v27 = 131111;
  if ( (unsigned __int16)eType <= ET_AGENT && _bittest(&v27, eType) )
  {
    if ( (((unsigned __int16)es->lerp.u.player.playerFlags >> 5) & 3) == 1 || (((unsigned __int16)es->lerp.u.player.playerFlags >> 5) & 3) == 2 )
    {
      *r_heldWeapon = *BG_GetWeaponForEntity(weaponMap, es);
      *v20 = NULL_WEAPON;
      StowedWeaponForPlayerEntity = BG_GetStowedWeaponForPlayerEntity(weaponMap, es);
      *(__m256i *)&r_stowedWeapon->weaponIdx = *(__m256i *)&StowedWeaponForPlayerEntity->weaponIdx;
      *(_OWORD *)&r_stowedWeapon->attachmentVariationIndices[5] = *(_OWORD *)&StowedWeaponForPlayerEntity->attachmentVariationIndices[5];
      *(double *)&r_stowedWeapon->attachmentVariationIndices[21] = *(double *)&StowedWeaponForPlayerEntity->attachmentVariationIndices[21];
      v28 = *(_DWORD *)&StowedWeaponForPlayerEntity->weaponCamo;
      goto LABEL_43;
    }
    if ( (((unsigned __int16)es->lerp.u.player.playerFlags >> 5) & 3) == 3 )
    {
      *r_heldWeapon = *BG_GetWeaponForEntity(weaponMap, es);
      *v20 = NULL_WEAPON;
      *(__m256i *)&r_stowedWeapon->weaponIdx = *(__m256i *)&NULL_WEAPON.weaponIdx;
      *(_OWORD *)&r_stowedWeapon->attachmentVariationIndices[5] = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
      *(double *)&r_stowedWeapon->attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
      v28 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
LABEL_43:
      *(_DWORD *)&r_stowedWeapon->weaponCamo = v28;
    }
  }
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 542, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v30 = es->eType;
  if ( ((unsigned __int16)v30 > ET_AGENT || !_bittest(&v27, v30)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 544, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
    __debugbreak();
  *r_executionWeapon = *BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, es->lerp.u.player.executionWeaponHandle);
  if ( BG_SkydiveAnimStateHidesPrimaryWeapon((const animScriptParachuteState_t)ci->skydiveAnimState) )
    *r_heldWeapon = NULL_WEAPON;
  if ( ci->dualWielding && r_stowedWeapon->weaponIdx && !BG_IsRiotShield(r_stowedWeapon, 0) )
    *r_stowedWeapon = NULL_WEAPON;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 737, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v31 = es->eType;
  if ( ((unsigned __int16)v31 > ET_AGENT || !_bittest(&v27, v31)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 739, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
    __debugbreak();
  *r_accessoryWeapon = *BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, es->lerp.u.player.accessoryWeaponHandle);
  v32 = es->eType;
  if ( (unsigned __int16)v32 <= ET_AGENT && _bittest(&v27, v32) )
  {
    v33 = (es->lerp.u.player.playerFlags & 0x1000) != 0;
    v34 = (es->lerp.u.player.playerFlags & 0x2000) != 0;
    if ( (es->lerp.u.player.playerFlags & 0x800) != 0 )
      *r_heldWeapon = NULL_WEAPON;
    if ( v33 )
      *r_stowedWeapon = NULL_WEAPON;
    if ( v34 )
      *r_accessoryWeapon = NULL_WEAPON;
  }
}

/*
==============
BG_GetConditionBit
==============
*/
__int64 BG_GetConditionBit(const characterInfo_t *ci, const int condition)
{
  __int64 v2; 
  unsigned int v4; 
  unsigned int *v5; 
  unsigned int v6; 
  __int64 v8; 

  v2 = condition;
  if ( (unsigned int)condition > 0x3E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 372, ASSERT_TYPE_ASSERT, "( ( condition < NUM_ANIM_CONDITIONS && condition >= 0 ) )", "( condition ) = %i", condition) )
    __debugbreak();
  if ( BG_GetAnimConditionType(v2) )
  {
    LODWORD(v8) = BG_GetAnimConditionType(v2);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 373, ASSERT_TYPE_ASSERT, "( ( BG_GetAnimConditionType( condition ) == ANIM_CONDTYPE_BITFLAGS ) )", "( BG_GetAnimConditionType( condition ) ) = %i", v8) )
      __debugbreak();
  }
  v4 = 0;
  v5 = ci->clientConditions[v2];
  while ( 1 )
  {
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v6 = v5[(__int64)(int)v4 >> 5];
    if ( _bittest((const int *)&v6, v4 & 0x1F) )
      break;
    if ( ++v4 >= 0x100 )
      return 0i64;
  }
  return v4;
}

/*
==============
BG_GetConditionString
==============
*/
const char *BG_GetConditionString(int condition, int value)
{
  const char *result; 

  BG_CheckThread();
  result = BG_GameInterface_GetAnimConditionString(condition, value);
  if ( !result )
  {
    switch ( condition )
    {
      case 0:
      case 13:
      case 15:
      case 55:
        result = BG_GetPlayerAnimTypeName(value);
        break;
      case 1:
        result = BG_GetAnimWeaponClassString(value);
        break;
      case 2:
        result = BG_GetAnimConditionTurretString(value);
        break;
      case 3:
        if ( (unsigned int)value > 0x7F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 709, ASSERT_TYPE_ASSERT, "( ( value >= 0 && value < NUM_ANIM_MOVETYPES ) )", "( value ) = %i", value) )
          __debugbreak();
        if ( value < 38 )
          result = BG_GetAnimCodeMoveTypeString(value);
        else
          result = "transitionMoveType";
        break;
      case 4:
        result = BG_GetAnimStanceString(value);
        break;
      case 5:
      case 12:
      case 14:
      case 16:
      case 17:
      case 21:
      case 22:
      case 24:
      case 29:
      case 32:
      case 33:
      case 34:
      case 36:
      case 38:
      case 41:
      case 45:
      case 46:
      case 48:
      case 51:
      case 54:
      case 56:
      case 59:
      case 60:
      case 61:
      case 62:
        result = "false";
        if ( value )
          result = "true";
        break;
      case 6:
        result = BG_GetAnimWeaponPositionString(value);
        break;
      case 7:
        result = BG_GetAnimStrafeStateString(value);
        break;
      case 8:
        result = BG_GetAnimDamageTypeString(value);
        break;
      case 9:
        result = BG_GetAnimHitLocationString(value);
        break;
      case 10:
        result = BG_GetAnimMoveDirectionString(value);
        break;
      case 11:
        result = BG_GetAnimHitDirectionString(value);
        break;
      case 18:
        result = BG_GetAnimMantleAnimWeaponStateString(value);
        break;
      case 19:
        result = BG_GetAnimMantleAnimTypeString(value);
        break;
      case 20:
        result = BG_GetAnimMantleAnimDirectionString(value);
        break;
      case 23:
        result = BG_GetScriptedAnimTypeName(value);
        break;
      case 25:
        result = BG_GetAnimPerkString(value);
        break;
      case 26:
      case 30:
        result = BG_GetAnimMeleeAnimTypeString(value);
        break;
      case 27:
      case 31:
        result = BG_GetAnimMeleeVariantString(value);
        break;
      case 28:
        result = BG_GetAnimMeleeResultString(value);
        break;
      case 35:
        result = BG_GetAnimConditionLinkedToString(value);
        break;
      case 37:
        result = BG_GetScriptedSceneAnimTypeName(value);
        break;
      case 39:
        result = BG_GetAnimConditionVehicleString(value);
        break;
      case 40:
        result = BG_GetAnimConditionVehicleSeatString(value);
        break;
      case 42:
        result = BG_GetAnimConditionVehicleSideString(value);
        break;
      case 43:
        result = BG_GetAnimConditionVehicleScrubFacingString(value);
        break;
      case 44:
        result = BG_GetAnimConditionParachuteStateString(value);
        break;
      case 47:
        result = BG_GetAnimConditionFootStateString(value);
        break;
      case 49:
        result = BG_GetExecutionAnimTypeName(value);
        break;
      case 50:
        result = BG_GetExecutionVictimStanceName(value);
        break;
      case 52:
        result = BG_GetAltModePlayerAnimTypeString(value);
        break;
      case 53:
        result = BG_GetAnimConditionCarryObjectTypeString(value);
        break;
      case 57:
        result = BG_GetAnimConditionSuitBodyAnimTypeString(value);
        break;
      case 58:
        result = BG_GetAnimConditionMantleSpeedString(value);
        break;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 803, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "BG_GetConditionString: unhandled case: %d", condition) )
          __debugbreak();
        result = NULL;
        break;
    }
  }
  return result;
}

/*
==============
BG_GetConditionValue
==============
*/
__int64 BG_GetConditionValue(const characterInfo_t *ci, const int condition)
{
  __int64 v2; 

  v2 = condition;
  if ( (unsigned int)condition > 0x3E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3923, ASSERT_TYPE_ASSERT, "( ( condition < NUM_ANIM_CONDITIONS && condition >= 0 ) )", "( condition ) = %i", condition) )
    __debugbreak();
  return ci->clientConditions[v2][0];
}

/*
==============
BG_GetExitOfTransitionalMoveType
==============
*/
__int64 BG_GetExitOfTransitionalMoveType(aistateEnum_t state, PlayerAnimScriptMoveType movetype, SuitAnimType suitAnimIndex)
{
  __int64 v4; 
  __int64 v5; 
  BgStatic *ActiveStatics; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v14; 
  __int64 v15; 

  v4 = suitAnimIndex;
  v5 = movetype;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5242, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5243, ASSERT_TYPE_ASSERT, "(state == AISTATE_COMBAT)", (const char *)&queryFormat, "state == AISTATE_COMBAT") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x80 )
  {
    LODWORD(v14) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5244, ASSERT_TYPE_ASSERT, "(unsigned)( movetype ) < (unsigned)( NUM_ANIM_MOVETYPES )", "movetype doesn't index NUM_ANIM_MOVETYPES\n\t%i not in [0, %i)", v14, 128) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 4 )
  {
    LODWORD(v15) = 4;
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5245, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  v7 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5249, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v8 = *(_QWORD *)(v7 + 8 * v4);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5252, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  v9 = 0i64;
  v10 = *(_QWORD *)(v8 + 56) + 32 * v5;
  if ( !*(_DWORD *)(v10 + 8) )
    return 0i64;
  while ( 1 )
  {
    v11 = *(unsigned int *)(*(_QWORD *)(v10 + 24) + 4 * v9);
    if ( (unsigned int)v11 >= *(_DWORD *)(v8 + 16) )
    {
      LODWORD(v15) = *(_DWORD *)(v8 + 16);
      LODWORD(v14) = *(_DWORD *)(*(_QWORD *)(v10 + 24) + 4 * v9);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5259, ASSERT_TYPE_ASSERT, "(unsigned)( scriptTransitionIndex ) < (unsigned)( playerAnim->scriptTransitionCount )", "scriptTransitionIndex doesn't index playerAnim->scriptTransitionCount\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    v12 = *(_QWORD *)(v8 + 80);
    if ( *(_DWORD *)(v12 + 12 * v11) == 2 )
      break;
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= *(_DWORD *)(v10 + 8) )
      return 0i64;
  }
  return *(unsigned int *)(v12 + 12 * v11 + 8);
}

/*
==============
BG_GetExposedAnimEvent
==============
*/
int BG_GetExposedAnimEvent(const char *eventName)
{
  int result; 
  int v3; 
  PlayerAnimScriptEventType *i; 

  if ( !eventName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 932, ASSERT_TYPE_ASSERT, "(eventName)", (const char *)&queryFormat, "eventName") )
    __debugbreak();
  result = BG_GetAnimEventIndex(eventName);
  v3 = 0;
  for ( i = exposedAnimEvents; *i != result; ++i )
  {
    if ( (unsigned int)++v3 >= 6 )
      return -1;
  }
  return result;
}

/*
==============
BG_GetMeleeAnimConditionsPacked
==============
*/
int BG_GetMeleeAnimConditionsPacked(const playerState_s *const ps)
{
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4537, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, ps->clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4541, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  return BG_PackMeleeAttackAnimParam((MeleeAnimType)CharacterInfo->clientConditions[26][0], (MeleeResult)CharacterInfo->clientConditions[28][0], CharacterInfo->clientConditions[29][0] != 0, CharacterInfo->clientConditions[27][0]);
}

/*
==============
BG_GetMoveType
==============
*/
__int64 BG_GetMoveType(int animNum, SuitAnimType suitAnimIndex)
{
  const PlayerAnimEntry *AnimationForIndex; 
  unsigned int *movetype; 
  int v6; 
  __int64 v7; 
  unsigned int v8; 
  int v10; 
  unsigned int i; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5221, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  AnimationForIndex = BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex);
  movetype = AnimationForIndex->movetype;
  if ( AnimationForIndex == (const PlayerAnimEntry *)-40i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 619, ASSERT_TYPE_ASSERT, "(condition)", (const char *)&queryFormat, "condition") )
    __debugbreak();
  v6 = 7;
  v7 = 7i64;
  while ( 1 )
  {
    v8 = movetype[v7];
    if ( v8 )
      break;
    --v6;
    if ( --v7 < 0 )
      return 0i64;
  }
  v10 = 0;
  for ( i = v8 >> 1; i; i >>= 1 )
    ++v10;
  return (unsigned int)(v10 + 32 * v6);
}

/*
==============
BG_GetPlayerAnimParameterNameByIndex
==============
*/
scr_string_t *BG_GetPlayerAnimParameterNameByIndex(int paramIndex)
{
  __int64 v1; 
  int v4; 

  v1 = paramIndex;
  if ( (unsigned int)paramIndex >= 0x41 )
  {
    v4 = 65;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 362, ASSERT_TYPE_ASSERT, "(unsigned)( paramIndex ) < (unsigned)( PLAYER_ANIM_PARAM_COUNT )", "paramIndex doesn't index PLAYER_ANIM_PARAM_COUNT\n\t%i not in [0, %i)", paramIndex, v4) )
      __debugbreak();
  }
  return g_playerAnimParameterNames[v1];
}

/*
==============
BG_GetShadowAnimationMapping
==============
*/
__int64 BG_GetShadowAnimationMapping(const shadowAnimMap_t *shadowAnimMap, int xAnimIndex)
{
  __int64 v2; 

  v2 = xAnimIndex;
  if ( !xAnimIndex )
  {
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 974, ASSERT_TYPE_ASSERT, "(xAnimIndex != 0)", (const char *)&queryFormat, "xAnimIndex != 0") )
      return shadowAnimMap->entries[v2];
    goto LABEL_6;
  }
  if ( (unsigned int)xAnimIndex >= 0xFA0 )
  {
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 975, ASSERT_TYPE_ASSERT, "(unsigned)( xAnimIndex ) < (unsigned)( ( sizeof( *array_counter( shadowAnimMap->entries ) ) + 0 ) )", "xAnimIndex doesn't index ARRAY_COUNT( shadowAnimMap->entries )\n\t%i not in [0, %i)", xAnimIndex, 4000) )
      return shadowAnimMap->entries[v2];
LABEL_6:
    __debugbreak();
    return shadowAnimMap->entries[v2];
  }
  return shadowAnimMap->entries[xAnimIndex];
}

/*
==============
BG_GetSuitAnimIndexFromCharacter
==============
*/
__int64 BG_GetSuitAnimIndexFromCharacter(const characterInfo_t *ci)
{
  __int64 result; 
  __int64 v3; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1765, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  result = ci->playerASMAnim.animSet;
  if ( (unsigned int)result >= 4 )
  {
    LODWORD(v3) = ci->playerAnim.suitAnimIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1766, ASSERT_TYPE_ASSERT, "(unsigned)( ci->playerAnim.suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "ci->playerAnim.suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v3, 4) )
      __debugbreak();
    return ci->playerASMAnim.animSet;
  }
  return result;
}

/*
==============
BG_GetSuitAnimIndexFromPlayerState
==============
*/
unsigned int BG_GetSuitAnimIndexFromPlayerState(const playerState_s *ps)
{
  unsigned int result; 
  unsigned int v3; 
  __int64 v4; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1749, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = BG_GetSuitAnimType(ps->suitIndex);
  v3 = result;
  if ( result >= 4 )
  {
    LODWORD(v4) = result;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1752, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v4, 4) )
      __debugbreak();
    return v3;
  }
  return result;
}

/*
==============
BG_GetTransitionalMoveType
==============
*/
__int64 BG_GetTransitionalMoveType(aistateEnum_t state, PlayerAnimScriptMoveType currentMoveType, PlayerAnimScriptMoveType nextMoveType, SuitAnimType suitAnimIndex)
{
  __int64 v5; 
  __int64 v6; 
  BgStatic *ActiveStatics; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v16; 
  __int64 v17; 

  v5 = suitAnimIndex;
  v6 = currentMoveType;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5282, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( state )
  {
    LODWORD(v16) = state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5283, ASSERT_TYPE_ASSERT, "( ( state == AISTATE_COMBAT ) )", "( state ) = %i", v16) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 0x80 )
  {
    LODWORD(v16) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5284, ASSERT_TYPE_ASSERT, "(unsigned)( currentMoveType ) < (unsigned)( NUM_ANIM_MOVETYPES )", "currentMoveType doesn't index NUM_ANIM_MOVETYPES\n\t%i not in [0, %i)", v16, 128) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 4 )
  {
    LODWORD(v17) = 4;
    LODWORD(v16) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5285, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  v9 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5289, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v10 = *(_QWORD *)(v9 + 8 * v5);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5292, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  v11 = 0i64;
  v12 = *(_QWORD *)(v10 + 56) + 32 * v6;
  if ( !*(_DWORD *)(v12 + 8) )
    return 0i64;
  while ( 1 )
  {
    v13 = *(unsigned int *)(*(_QWORD *)(v12 + 24) + 4 * v11);
    if ( (unsigned int)v13 >= *(_DWORD *)(v10 + 16) )
    {
      LODWORD(v17) = *(_DWORD *)(v10 + 16);
      LODWORD(v16) = *(_DWORD *)(*(_QWORD *)(v12 + 24) + 4 * v11);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5300, ASSERT_TYPE_ASSERT, "(unsigned)( scriptTransitionIndex ) < (unsigned)( playerAnim->scriptTransitionCount )", "scriptTransitionIndex doesn't index playerAnim->scriptTransitionCount\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    v14 = *(_QWORD *)(v10 + 80);
    if ( *(_DWORD *)(v14 + 12 * v13 + 4) == nextMoveType )
      break;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= *(_DWORD *)(v12 + 8) )
      return 0i64;
  }
  return *(unsigned int *)(v14 + 12 * v13 + 8);
}

/*
==============
BG_GetXAnimIndex
==============
*/
__int64 BG_GetXAnimIndex(const PlayerAnimScript *scriptData, const int animIndex)
{
  signed int v4; 
  PlayerAnimEntry *v5; 
  __int64 v7; 

  if ( !scriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 439, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
    __debugbreak();
  v4 = animIndex & 0xFFFFEFFF;
  if ( v4 >= scriptData->animationCount )
  {
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 442, ASSERT_TYPE_ASSERT, "(unsigned)( animEntryIndex ) < (unsigned)( scriptData->animationCount )", "animEntryIndex doesn't index scriptData->animationCount\n\t%i not in [0, %i)", v7, scriptData->animationCount) )
      __debugbreak();
  }
  if ( v4 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 443, ASSERT_TYPE_ASSERT, "(animEntryIndex >= 0)", (const char *)&queryFormat, "animEntryIndex >= 0") )
    __debugbreak();
  v5 = &scriptData->animations[v4];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 413, ASSERT_TYPE_ASSERT, "(animEntry)", (const char *)&queryFormat, "animEntry") )
    __debugbreak();
  return LOWORD(v5->animIndex);
}

/*
==============
BG_GetXAnimIndexForCharacterInternal
==============
*/
__int64 BG_GetXAnimIndexForCharacterInternal(const characterInfo_t *ci, const PlayerAnimScript *scriptData, const int animIndex)
{
  __int64 v6; 
  BgStatic *ActiveStatics; 
  __int64 v8; 
  __int64 result; 
  PlayerAnimEntry *v10; 
  __int64 v11; 

  if ( !scriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 459, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
    __debugbreak();
  LODWORD(v6) = animIndex & 0xFFFFEFFF;
  if ( (unsigned int)v6 >= scriptData->animationCount )
  {
    LODWORD(v11) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 462, ASSERT_TYPE_ASSERT, "(unsigned)( animEntryIndex ) < (unsigned)( scriptData->animationCount )", "animEntryIndex doesn't index scriptData->animationCount\n\t%i not in [0, %i)", v11, scriptData->animationCount) )
      __debugbreak();
  }
  if ( (int)v6 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 463, ASSERT_TYPE_ASSERT, "(animEntryIndex >= 0)", (const char *)&queryFormat, "animEntryIndex >= 0") )
    __debugbreak();
  if ( !ci->useShadowAnims )
  {
    v6 = (int)v6;
LABEL_20:
    v10 = &scriptData->animations[v6];
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 413, ASSERT_TYPE_ASSERT, "(animEntry)", (const char *)&queryFormat, "animEntry") )
      __debugbreak();
    return LOWORD(v10->animIndex);
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  v8 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 470, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( *(_DWORD *)(v8 + 19544) == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 471, ASSERT_TYPE_ASSERT, "(bgameAnim->anim_user != SCR_XANIM_SERVER)", (const char *)&queryFormat, "bgameAnim->anim_user != SCR_XANIM_SERVER") )
    __debugbreak();
  v6 = (int)v6;
  result = (unsigned __int16)BG_Animation_GetShadowAnimIndex(&scriptData->animations[(int)v6]);
  if ( !(_WORD)result )
    goto LABEL_20;
  return result;
}

/*
==============
BG_HideOccludedWeaponParts
==============
*/
void BG_HideOccludedWeaponParts(const XModel *model, DObjPartBits *partBits, int boneOffset)
{
  unsigned __int8 numBones; 
  __int64 v7; 
  unsigned __int64 v8; 
  char v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !model )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9587, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
  }
  numBones = model->numBones;
  if ( numBones )
  {
    v7 = numBones;
    do
    {
      if ( (unsigned int)boneOffset >= 0x100 )
      {
        LODWORD(v11) = 256;
        LODWORD(v10) = boneOffset;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v10, v11) )
          __debugbreak();
      }
      v8 = (unsigned __int64)(unsigned int)boneOffset >> 5;
      v9 = boneOffset++ & 0x1F;
      partBits->array[v8] |= 0x80000000 >> v9;
      --v7;
    }
    while ( v7 );
  }
}

/*
==============
BG_IsAdditiveTorsoAnim
==============
*/
_BOOL8 BG_IsAdditiveTorsoAnim(int animNum, SuitAnimType suitAnimIndex)
{
  __int64 v2; 
  BgStatic *ActiveStatics; 
  __int64 v5; 
  const PlayerAnimScript *v6; 
  const PlayerAnimEntry *AnimationForIndex; 
  unsigned int XAnimIndex; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  v2 = suitAnimIndex;
  ActiveStatics = BgStatic::GetActiveStatics();
  v5 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4740, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v6 = *(const PlayerAnimScript **)(v5 + 8 * v2);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4743, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
    __debugbreak();
  AnimationForIndex = BG_AnimationMP_GetAnimationForIndex(animNum, (SuitAnimType)v2);
  if ( !AnimationForIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4746, ASSERT_TYPE_ASSERT, "(anim)", (const char *)&queryFormat, "anim") )
    __debugbreak();
  if ( AnimationForIndex->bodyPart != 2 )
    return 0i64;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4719, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( (BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, (SuitAnimType)v2)->flags & 8) == 0 )
    return 0i64;
  XAnimIndex = BG_GetXAnimIndex(v6, animNum);
  v9 = *(_QWORD *)(v5 + 32);
  v10 = XAnimIndex;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4752, ASSERT_TYPE_ASSERT, "(xAnims)", (const char *)&queryFormat, "xAnims") )
    __debugbreak();
  v11 = v9 + 16 * (v10 + 5);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4755, ASSERT_TYPE_ASSERT, "(xAnimEntry)", (const char *)&queryFormat, "xAnimEntry") )
    __debugbreak();
  return *(_WORD *)(v11 + 4) == *(_WORD *)(v5 + 88);
}

/*
==============
BG_IsAdsAnim
==============
*/
_BOOL8 BG_IsAdsAnim(int animNum, SuitAnimType suitAnimIndex)
{
  unsigned int *movetype; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4660, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  movetype = BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->movetype;
  return Com_BitCheckAssert(movetype, 1, 32) || Com_BitCheckAssert(movetype, 2, 32) || Com_BitCheckAssert(movetype, 3, 32) || Com_BitCheckAssert(movetype, 4, 32) || Com_BitCheckAssert(movetype, 5, 32) || Com_BitCheckAssert(movetype, 6, 32) || Com_BitCheckAssert(movetype, 7, 32) || Com_BitCheckAssert(movetype, 8, 32) || Com_BitCheckAssert(movetype, 9, 32) || Com_BitCheckAssert(movetype, 26, 32) || Com_BitCheckAssert(movetype, 27, 32) || Com_BitCheckAssert(movetype, 28, 32);
}

/*
==============
BG_IsAirAnim
==============
*/
bool BG_IsAirAnim(int animNum, SuitAnimType suitAnimIndex)
{
  const PlayerAnimEntry *AnimationForIndex; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5121, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  AnimationForIndex = BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex);
  return Com_BitCheckAssert(AnimationForIndex->movetype, 34, 32);
}

/*
==============
BG_IsAnyJumpAnim
==============
*/
bool BG_IsAnyJumpAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4903, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->flags & 0x18000000) != 0i64;
}

/*
==============
BG_IsCrouchingAnim
==============
*/
_BOOL8 BG_IsCrouchingAnim(int animNum, SuitAnimType suitAnimIndex)
{
  unsigned int *movetype; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4609, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  movetype = BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->movetype;
  return Com_BitCheckAssert(movetype, 2, 32) || Com_BitCheckAssert(movetype, 6, 32) || Com_BitCheckAssert(movetype, 7, 32) || Com_BitCheckAssert(movetype, 12, 32) || Com_BitCheckAssert(movetype, 13, 32);
}

/*
==============
BG_IsDropWeaponAnim
==============
*/
__int64 BG_IsDropWeaponAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4968, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (LODWORD(BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->flags) >> 13) & 1;
}

/*
==============
BG_IsFastDurationAnim
==============
*/
bool BG_IsFastDurationAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1993, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->fastDuration != 0;
}

/*
==============
BG_IsFastDurationPerkActive
==============
*/
bool BG_IsFastDurationPerkActive(int animIndex, SuitAnimType suitAnimIndex, const bitarray<64> *r_perks)
{
  __int64 v3; 
  __int64 v5; 
  BgStatic *ActiveStatics; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v3 = animIndex;
  v5 = suitAnimIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1993, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !BG_AnimationMP_GetAnimationForIndex((unsigned int)v3 & 0xFFFFEFFF, (SuitAnimType)v5)->fastDuration )
    return 0;
  ActiveStatics = BgStatic::GetActiveStatics();
  v7 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2015, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v8 = *(_QWORD *)(v7 + 8 * v5);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2018, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  v9 = *(_QWORD *)(v8 + 48) + 104 * v3;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2021, ASSERT_TYPE_ASSERT, "(anim)", (const char *)&queryFormat, "anim") )
    __debugbreak();
  return (*(_BYTE *)(v9 + 16) & 0x10) != 0 && (BG_HasPerk(r_perks, 1u) || BG_HasPerk(r_perks, 2u) || BG_GameInterface_HasFastReloadPerkVariant(r_perks)) || (*(_DWORD *)(v9 + 16) & 0x2000i64) != 0 && BG_HasPerk(r_perks, 0x2Bu);
}

/*
==============
BG_IsFiringAnim
==============
*/
__int64 BG_IsFiringAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4719, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (LOBYTE(BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->flags) >> 3) & 1;
}

/*
==============
BG_IsGestureAnim
==============
*/
bool BG_IsGestureAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4882, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->flags & 0x4000000) != 0i64;
}

/*
==============
BG_IsHighJumpAnim
==============
*/
bool BG_IsHighJumpAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4924, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->flags & 0x10000000) != 0i64;
}

/*
==============
BG_IsKillstreakTriggerAnim
==============
*/
__int64 BG_IsKillstreakTriggerAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4989, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (LODWORD(BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->flags) >> 14) & 1;
}

/*
==============
BG_IsKnockbackAnim
==============
*/
bool BG_IsKnockbackAnim(int animNum, SuitAnimType suitAnimIndex)
{
  unsigned int *movetype; 
  bool result; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5097, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  movetype = BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->movetype;
  if ( Com_BitCheckAssert(movetype, 35, 32) )
    return 1;
  result = Com_BitCheckAssert(movetype, 36, 32);
  if ( result )
    return 1;
  return result;
}

/*
==============
BG_IsLadderAnim
==============
*/
__int64 BG_IsLadderAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4562, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (LOBYTE(BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->flags) >> 1) & 1;
}

/*
==============
BG_IsLadderSlideAnim
==============
*/
_BOOL8 BG_IsLadderSlideAnim(int animNum, SuitAnimType suitAnimIndex)
{
  const PlayerAnimEntry *AnimationForIndex; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5076, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  AnimationForIndex = BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex);
  return Com_BitCheckAssert(AnimationForIndex->movetype, 15, 32);
}

/*
==============
BG_IsPrepareAnim
==============
*/
__int64 BG_IsPrepareAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4817, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (LODWORD(BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->flags) >> 12) & 1;
}

/*
==============
BG_IsProneAnim
==============
*/
_BOOL8 BG_IsProneAnim(int animNum, SuitAnimType suitAnimIndex)
{
  unsigned int *movetype; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4694, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  movetype = BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->movetype;
  return Com_BitCheckAssert(movetype, 3, 32) || Com_BitCheckAssert(movetype, 8, 32) || Com_BitCheckAssert(movetype, 9, 32);
}

/*
==============
BG_IsReloadAnim
==============
*/
__int64 BG_IsReloadAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4775, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (LOBYTE(BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->flags) >> 4) & 1;
}

/*
==============
BG_IsRootMotionAnim
==============
*/
__int64 BG_IsRootMotionAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5010, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (LODWORD(BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->flags) >> 17) & 1;
}

/*
==============
BG_IsRunAnim
==============
*/
bool BG_IsRunAnim(int animNum, SuitAnimType suitAnimIndex)
{
  unsigned int *movetype; 
  bool result; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5168, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  movetype = BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->movetype;
  if ( Com_BitCheckAssert(movetype, 10, 32) )
    return 1;
  result = Com_BitCheckAssert(movetype, 11, 32);
  if ( result )
    return 1;
  return result;
}

/*
==============
BG_IsSceneAnim
==============
*/
bool BG_IsSceneAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4590, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->flags & 0x20000000) != 0i64;
}

/*
==============
BG_IsSlideAnim
==============
*/
_BOOL8 BG_IsSlideAnim(int animNum, SuitAnimType suitAnimIndex)
{
  unsigned int *movetype; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  movetype = BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->movetype;
  return Com_BitCheckAssert(movetype, 24, 32) || Com_BitCheckAssert(movetype, 25, 32);
}

/*
==============
BG_IsSprintAnim
==============
*/
bool BG_IsSprintAnim(int animNum, SuitAnimType suitAnimIndex)
{
  unsigned int *movetype; 
  bool result; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5144, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  movetype = BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->movetype;
  if ( Com_BitCheckAssert(movetype, 18, 32) )
    return 1;
  result = Com_BitCheckAssert(movetype, 19, 32);
  if ( result )
    return 1;
  return result;
}

/*
==============
BG_IsStrafeAnim
==============
*/
bool BG_IsStrafeAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4796, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->flags & 0x60) != 0;
}

/*
==============
BG_IsThrowAnim
==============
*/
bool BG_IsThrowAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4838, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->flags & 0x800) != 0;
}

/*
==============
BG_IsThrowOrPrepareAnim
==============
*/
_BOOL8 BG_IsThrowOrPrepareAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4861, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->flags & 0x1800) != 0;
}

/*
==============
BG_IsTransitionalAnim
==============
*/
__int64 BG_IsTransitionalAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5031, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (LODWORD(BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->flags) >> 18) & 1;
}

/*
==============
BG_IsTurretAnim
==============
*/
bool BG_IsTurretAnim(int animNum, SuitAnimType suitAnimIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4576, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->flags & 4) != 0;
}

/*
==============
BG_IsWalkAnim
==============
*/
_BOOL8 BG_IsWalkAnim(int animNum, SuitAnimType suitAnimIndex)
{
  unsigned int *movetype; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4636, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  movetype = BG_AnimationMP_GetAnimationForIndex(animNum & 0xFFFFEFFF, suitAnimIndex)->movetype;
  return Com_BitCheckAssert(movetype, 4, 32) || Com_BitCheckAssert(movetype, 5, 32);
}

/*
==============
BG_LerpAngles
==============
*/
void BG_LerpAngles(const vec3_t *angles_goal, float maxAngleChange, vec3_t *inOutAngles)
{
  signed __int64 v3; 
  unsigned int v4; 
  vec3_t *v5; 
  bool v6; 
  float v7; 
  float v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  v3 = (char *)angles_goal - (char *)inOutAngles;
  v4 = 0;
  v5 = inOutAngles;
  v6 = 1;
  do
  {
    if ( !v6 )
    {
      LODWORD(v11) = 3;
      LODWORD(v9) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
      LODWORD(v12) = 3;
      LODWORD(v10) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v10, v12) )
        __debugbreak();
    }
    v7 = *(float *)((char *)v5->v + v3) - v5->v[0];
    if ( v7 <= maxAngleChange )
    {
      if ( v7 >= COERCE_FLOAT(LODWORD(maxAngleChange) ^ _xmm) )
      {
        if ( v4 >= 3 )
        {
          LODWORD(v11) = 3;
          LODWORD(v9) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v11) )
            __debugbreak();
        }
        v8 = *(float *)((char *)v5->v + v3);
        if ( v4 >= 3 )
        {
          LODWORD(v11) = 3;
          LODWORD(v9) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v11) )
            __debugbreak();
        }
        v5->v[0] = v8;
      }
      else
      {
        if ( v4 >= 3 )
        {
          LODWORD(v11) = 3;
          LODWORD(v9) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v11) )
            __debugbreak();
        }
        v5->v[0] = v5->v[0] - maxAngleChange;
      }
    }
    else
    {
      if ( v4 >= 3 )
      {
        LODWORD(v11) = 3;
        LODWORD(v9) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v9, v11) )
          __debugbreak();
      }
      v5->v[0] = maxAngleChange + v5->v[0];
    }
    ++v4;
    v5 = (vec3_t *)((char *)v5 + 4);
    v6 = v4 < 3;
  }
  while ( (int)v4 < 3 );
}

/*
==============
BG_LerpOffset
==============
*/
void BG_LerpOffset(const vec3_t *offset_goal, float maxOffsetChange, vec3_t *inOutOffset)
{
  float v5; 
  float v6; 
  float v7; 
  __int128 v9; 
  float v12; 
  float v13; 

  v9 = LODWORD(offset_goal->v[0]);
  v5 = offset_goal->v[0] - inOutOffset->v[0];
  v6 = offset_goal->v[1] - inOutOffset->v[1];
  v7 = offset_goal->v[2] - inOutOffset->v[2];
  *(float *)&v9 = (float)((float)(v5 * v5) + (float)(v6 * v6)) + (float)(v7 * v7);
  if ( *(float *)&v9 != 0.0 )
  {
    if ( *(float *)&v9 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    _XMM1 = v9;
    __asm { vrsqrtss xmm2, xmm1, xmm6 }
    v12 = *(float *)&_XMM2 * maxOffsetChange;
    if ( (float)(*(float *)&_XMM2 * maxOffsetChange) >= 1.0 )
    {
      inOutOffset->v[0] = offset_goal->v[0];
      inOutOffset->v[1] = offset_goal->v[1];
      inOutOffset->v[2] = offset_goal->v[2];
    }
    else
    {
      v13 = (float)(v6 * v12) + inOutOffset->v[1];
      inOutOffset->v[0] = (float)(v5 * v12) + inOutOffset->v[0];
      inOutOffset->v[2] = (float)(v7 * v12) + inOutOffset->v[2];
      inOutOffset->v[1] = v13;
    }
  }
}

/*
==============
BG_LerpPackedPolarCoordsToCartesian
==============
*/
vec2_t BG_LerpPackedPolarCoordsToCartesian(unsigned __int16 packedPolarCoordStart, unsigned __int16 packedPolarCoordFinish, const float lerpRatio)
{
  float v4; 
  float v5; 
  float v6; 
  float outAnglesInDegrees; 
  float v11; 
  float v12; 
  float outRadius; 
  vec2_t outCartesianCoords; 

  v4 = 0.0;
  if ( packedPolarCoordStart )
  {
    MSG_UnpackPolarFromShort(packedPolarCoordStart, &outAnglesInDegrees, &outRadius);
    v5 = outAnglesInDegrees;
  }
  else
  {
    v5 = 0.0;
    outAnglesInDegrees = 0.0;
    outRadius = 0.0;
  }
  if ( packedPolarCoordFinish )
  {
    MSG_UnpackPolarFromShort(packedPolarCoordFinish, &v11, &v12);
    v6 = v12;
    v5 = outAnglesInDegrees;
    v4 = v11;
  }
  else
  {
    v6 = 0.0;
    v12 = 0.0;
    v11 = 0.0;
  }
  _XMM0 = 0i64;
  __asm { vroundss xmm5, xmm0, xmm4, 1 }
  PolarToCartesian((float)((float)((float)((float)((float)(v4 - v5) * 0.0027777778) - *(float *)&_XMM5) * 360.0) * lerpRatio) + v5, (float)((float)(1.0 - lerpRatio) * outRadius) + (float)(lerpRatio * v6), &outCartesianCoords);
  return outCartesianCoords;
}

/*
==============
BG_MovementDirNormalize180
==============
*/
__int64 BG_MovementDirNormalize180(int movementDir)
{
  int v1; 
  int v2; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 

  v1 = movementDir;
  if ( movementDir < 128 )
  {
    if ( movementDir >= -128 )
      goto LABEL_8;
    v2 = 256;
  }
  else
  {
    v2 = -256;
  }
  v1 = movementDir + v2;
  if ( movementDir + v2 < -128 )
  {
    v7 = -128;
    v5 = movementDir + v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2972, ASSERT_TYPE_ASSERT, "( movementDir ) >= ( -( (1 << 8) / 2 ) )", "%s >= %s\n\t%i, %i", "movementDir", "-MOVEMENTDIR_180_DEGREES", v5, v7) )
      __debugbreak();
  }
LABEL_8:
  if ( v1 >= 128 )
  {
    LODWORD(v6) = 128;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2973, ASSERT_TYPE_ASSERT, "( movementDir ) < ( ( (1 << 8) / 2 ) )", "%s < %s\n\t%i, %i", "movementDir", "MOVEMENTDIR_180_DEGREES", v4, v6) )
      __debugbreak();
  }
  return (unsigned int)v1;
}

/*
==============
BG_MovementDirNormalize360
==============
*/
__int64 BG_MovementDirNormalize360(int movementDir)
{
  int v1; 
  __int64 v3; 
  int v4; 
  __int64 v5; 

  v1 = movementDir;
  if ( movementDir >= 0 )
  {
    if ( movementDir >= 256 )
      v1 = movementDir - 256;
  }
  else
  {
    v1 = movementDir + 256;
  }
  if ( v1 < 0 )
  {
    v4 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2949, ASSERT_TYPE_ASSERT, "( movementDir ) >= ( 0 )", "%s >= %s\n\t%i, %i", "movementDir", "0", v4, 0i64) )
      __debugbreak();
  }
  if ( v1 >= 256 )
  {
    LODWORD(v5) = 256;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2950, ASSERT_TYPE_ASSERT, "( movementDir ) < ( (1 << 8) )", "%s < %s\n\t%i, %i", "movementDir", "MOVEMENTDIR_360_DEGREES", v3, v5) )
      __debugbreak();
  }
  return (unsigned int)v1;
}

/*
==============
BG_MovementDirToDegrees
==============
*/
float BG_MovementDirToDegrees(int movementDir)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2907, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  return (float)movementDir * 1.40625;
}

/*
==============
BG_PackedPolarCoordsToCartesian
==============
*/
vec2_t BG_PackedPolarCoordsToCartesian(unsigned __int16 packedPolarCoord)
{
  float outRadius; 
  float outAnglesInDegrees; 
  vec2_t outCartesianCoords; 

  if ( packedPolarCoord )
  {
    MSG_UnpackPolarFromShort(packedPolarCoord, &outAnglesInDegrees, &outRadius);
    PolarToCartesian(outAnglesInDegrees, outRadius, &outCartesianCoords);
  }
  else
  {
    outCartesianCoords.v[0] = 0.0;
    outCartesianCoords.v[1] = 0.0;
  }
  return outCartesianCoords;
}

/*
==============
BG_PlayAnim
==============
*/
__int64 BG_PlayAnim(playerState_s *ps, int animNum, animBodyPart_t bodyPart, int forceDuration, int setTimer, int isContinue, int force, int forceLegsOnly, int turn)
{
  __int64 v12; 
  BgStatic *ActiveStatics; 
  __int64 v15; 
  __int64 SuitAnimIndexFromPlayerState; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int8 v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned __int16 v22; 
  int v23; 
  int v24; 
  int v25; 
  const char *v26; 
  const char *v27; 
  int legsAnim; 
  int v29; 
  unsigned int v30; 
  __int64 v31; 
  __int64 v32; 
  char v33; 
  int legsTimer; 
  BgStatic *v35; 
  __int64 v36; 
  __int64 v37; 
  float v38; 
  __int64 v39; 
  float v40; 
  float v41; 
  int v42; 
  const dvar_t *v43; 
  const char *v44; 
  const char *v45; 
  const dvar_t *v46; 
  const char *v47; 
  int v48; 
  const dvar_t *v49; 
  const char *v50; 
  char *fmt; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  int v57; 
  int v59; 
  int forceLegsOnlya; 

  v12 = animNum;
  v57 = 0;
  if ( (unsigned int)animNum >= 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1781, ASSERT_TYPE_ASSERT, "(unsigned)( animNum ) < (unsigned)( (1<<(13-1)) )", "animNum doesn't index ANIM_TOGGLEBIT\n\t%i not in [0, %i)", animNum, 4096) )
    __debugbreak();
  if ( forceLegsOnly && bodyPart != ANIM_BP_BOTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1782, ASSERT_TYPE_ASSERT, "(!( forceLegsOnly && bodyPart != ANIM_BP_BOTH ))", (const char *)&queryFormat, "!( forceLegsOnly && bodyPart != ANIM_BP_BOTH )") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  v15 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1786, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(ps);
  v59 = SuitAnimIndexFromPlayerState;
  if ( (unsigned int)SuitAnimIndexFromPlayerState >= 4 )
  {
    LODWORD(v54) = 4;
    LODWORD(v53) = SuitAnimIndexFromPlayerState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1789, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v53, v54) )
      __debugbreak();
  }
  v17 = *(_QWORD *)(v15 + 8 * SuitAnimIndexFromPlayerState);
  v56 = SuitAnimIndexFromPlayerState;
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1792, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  if ( ((bodyPart - 1) & 0xFFFFFFFD) == 0 && (v18 = *(_QWORD *)(v17 + 48), (*(_DWORD *)(104 * v12 + v18 + 16) & 0x80000) != 0) && (v19 = *(_BYTE *)(104 * v12 + v18 + 98)) != 0 && turn )
  {
    v20 = (unsigned int)v19 - 1;
    if ( (unsigned int)v20 >= *(_DWORD *)(v17 + 20) )
    {
      LODWORD(v54) = *(_DWORD *)(v17 + 20);
      LODWORD(v53) = v19 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1809, ASSERT_TYPE_ASSERT, "(unsigned)( idleTurnIndex ) < (unsigned)( playerAnim->scriptIdleTurnCount )", "idleTurnIndex doesn't index playerAnim->scriptIdleTurnCount\n\t%i not in [0, %i)", v53, v54) )
        __debugbreak();
    }
    v21 = *(_QWORD *)(v17 + 88);
    if ( ps->turnDirection )
      v22 = *(_WORD *)(v21 + 4 * v20);
    else
      v22 = *(_WORD *)(v21 + 4 * v20 + 2);
    if ( (v22 & 0x1000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1814, ASSERT_TYPE_ASSERT, "(!(idleTurnAnimIndex & (1<<(13-1))))", (const char *)&queryFormat, "!(idleTurnAnimIndex & ANIM_TOGGLEBIT)") )
      __debugbreak();
    LODWORD(v12) = v22;
    if ( (unsigned int)v22 >= *(_DWORD *)(v17 + 8) )
    {
      LODWORD(v54) = *(_DWORD *)(v17 + 8);
      LODWORD(v53) = v22;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1817, ASSERT_TYPE_ASSERT, "(unsigned)( animNum ) < (unsigned)( playerAnim->animationCount )", "animNum doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v53, v54) )
        __debugbreak();
    }
    if ( (*(_DWORD *)(104i64 * v22 + *(_QWORD *)(v17 + 48) + 16) & 0x100i64) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1818, ASSERT_TYPE_ASSERT, "(!(playerAnim->animations[animNum].flags & ANIMFL_LOOPED))", (const char *)&queryFormat, "!(playerAnim->animations[animNum].flags & ANIMFL_LOOPED)") )
      __debugbreak();
    v23 = isContinue;
    if ( !isContinue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1820, ASSERT_TYPE_ASSERT, "(isContinue)", (const char *)&queryFormat, "isContinue") )
      __debugbreak();
    LODWORD(SuitAnimIndexFromPlayerState) = v59;
    if ( turn == 2 )
      v23 = 0;
  }
  else
  {
    v23 = isContinue;
  }
  forceLegsOnlya = v23;
  if ( !forceDuration )
    forceDuration = *(unsigned __int16 *)(104i64 * (int)v12 + *(_QWORD *)(v17 + 48) + 84) + 50;
  v24 = force;
  v25 = setTimer;
  if ( bodyPart == ANIM_BP_LEGS )
    goto LABEL_48;
  if ( bodyPart != ANIM_BP_TORSO )
  {
    if ( bodyPart != ANIM_BP_BOTH )
      goto LABEL_142;
LABEL_48:
    if ( ps->legsTimer >= 500 && !force && !forceLegsOnly )
    {
LABEL_57:
      if ( bodyPart != ANIM_BP_BOTH )
        goto LABEL_142;
      LODWORD(v12) = 0;
      goto LABEL_122;
    }
    if ( v23 && (ps->legsAnim & 0xFFFFEFFF) == (_DWORD)v12 )
    {
      if ( setTimer && (*(_DWORD *)(104i64 * (int)v12 + *(_QWORD *)(v17 + 48) + 16) & 0x100i64) != 0 )
      {
        ps->legsTimer = 10 * forceDuration;
      }
      else
      {
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_xanim_debug, "xanim_debug") >= 1 && (ps->legsAnim & 0xFFFFEFFF) != (_DWORD)v12 )
        {
          Com_Printf(19, "anim failed because");
          if ( (ps->legsAnim & 0xFFFFEFFF) == (_DWORD)v12 )
          {
            Com_Printf(19, ", isContinue is true");
            v26 = SL_ConvertToString((scr_string_t)*(_DWORD *)(104i64 * (int)v12 + *(_QWORD *)(v17 + 48) + 4));
            v27 = SL_ConvertToString((scr_string_t)*(_DWORD *)(104 * (ps->legsAnim & 0xFFFFFFFFFFFFEFFFui64) + *(_QWORD *)(v17 + 48) + 4));
            Com_Printf(19, ", legsAnim is %s, asking to play %s", v27, v26);
          }
          if ( setTimer )
          {
            if ( (*(_DWORD *)(104i64 * (int)v12 + *(_QWORD *)(v17 + 48) + 16) & 0x100i64) == 0 )
              Com_Printf(19, ", on a non-looped anim");
          }
          else
          {
            Com_Printf(19, ", setTimer is false");
          }
          Com_Printf(19, "\n");
        }
        v25 = setTimer;
      }
      v24 = force;
      goto LABEL_57;
    }
    legsAnim = ps->legsAnim;
    v57 = 1;
    v29 = ~(_WORD)legsAnim & 0x1000;
    v30 = legsAnim & 0xFFFFEFFF;
    ps->legsAnim = v12 | v29;
    if ( v30 >= *(_DWORD *)(v17 + 8) )
    {
      LODWORD(v54) = *(_DWORD *)(v17 + 8);
      LODWORD(v53) = v30;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1849, ASSERT_TYPE_ASSERT, "(unsigned)( previousLegsAnim ) < (unsigned)( playerAnim->animationCount )", "previousLegsAnim doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v53, v54) )
        __debugbreak();
    }
    if ( (ps->legsAnim & 0xFFFFEFFF) >= *(_DWORD *)(v17 + 8) )
    {
      LODWORD(v54) = *(_DWORD *)(v17 + 8);
      LODWORD(v53) = ps->legsAnim & 0xFFFFEFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1850, ASSERT_TYPE_ASSERT, "(unsigned)( (ps->legsAnim & ~(1<<(13-1))) ) < (unsigned)( playerAnim->animationCount )", "(ps->legsAnim & ~ANIM_TOGGLEBIT) doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v53, v54) )
        __debugbreak();
    }
    if ( *(_WORD *)(*(_QWORD *)(v17 + 136) + 2 * (ps->legsAnim & 0xFFFFFFFFFFFFEFFFui64)) == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1851, ASSERT_TYPE_ASSERT, "(playerAnim->legsAnimPackMap[ps->legsAnim & ~(1<<(13-1))] != 0xffff)", (const char *)&queryFormat, "playerAnim->legsAnimPackMap[ps->legsAnim & ~ANIM_TOGGLEBIT] != INVALID_ANIM_MAP_ENTRY") )
      __debugbreak();
    if ( setTimer )
    {
      v31 = 104i64 * (int)v30;
      v32 = *(_QWORD *)(v17 + 48);
      v33 = *(_BYTE *)(v31 + v32 + 100);
      if ( !v33 || (v55 = 104i64 * (int)v12, v33 != *(_BYTE *)(v55 + v32 + 100)) )
      {
        v42 = 10 * forceDuration;
        goto LABEL_104;
      }
      legsTimer = ps->legsTimer;
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3626, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
        __debugbreak();
      if ( (unsigned int)SuitAnimIndexFromPlayerState >= 4 )
      {
        LODWORD(v54) = 4;
        LODWORD(v53) = SuitAnimIndexFromPlayerState;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3627, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      v35 = BgStatic::GetActiveStatics();
      v36 = (__int64)v35->GetAnimStatics(v35);
      if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3631, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      v37 = *(_QWORD *)(v36 + 8 * v56);
      if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3634, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
        __debugbreak();
      if ( v30 >= *(_DWORD *)(v37 + 8) )
      {
        LODWORD(v54) = *(_DWORD *)(v37 + 8);
        LODWORD(v53) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3635, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( playerAnim->animationCount )", "animIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      v38 = (float)(2 * (5 * *(unsigned __int16 *)(*(_QWORD *)(v37 + 48) + v31 + 84) + 250) - legsTimer);
      if ( !*(_WORD *)(v31 + *(_QWORD *)(v17 + 48) + 84) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1865, ASSERT_TYPE_ASSERT, "(playerAnim->animations[previousLegsAnim].duration > 0)", (const char *)&queryFormat, "playerAnim->animations[previousLegsAnim].duration > 0") )
        __debugbreak();
      v39 = *(_QWORD *)(v17 + 48);
      v40 = 1.0 - (float)((float)(0.099999994 / (float)*(unsigned __int16 *)(v31 + v39 + 84)) * v38);
      if ( forceDuration != *(unsigned __int16 *)(v39 + v55 + 84) + 50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1869, ASSERT_TYPE_ASSERT, "( duration ) == ( playerAnim->animations[animNum].duration + 50 )", "%s == %s\n\t%i, %i", "duration", "playerAnim->animations[animNum].duration + ANIM_TIMER_DURATION_PADDING", forceDuration, *(unsigned __int16 *)(v39 + v55 + 84) + 50) )
        __debugbreak();
      v41 = (float)((float)(10 * *(unsigned __int16 *)(v55 + *(_QWORD *)(v17 + 48) + 84)) * v40) + 0.5;
      ps->legsTimer = (int)v41 + 500;
      if ( (int)v41 + 500 >= 0 )
        goto LABEL_105;
    }
    v42 = 0;
LABEL_104:
    ps->legsTimer = v42;
LABEL_105:
    v43 = DVARINT_xanim_debug;
    if ( !DVARINT_xanim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    if ( v43->current.integer >= 1 )
    {
      if ( bodyPart == ANIM_BP_BOTH )
      {
        v44 = "body";
      }
      else
      {
        v44 = "torso";
        if ( bodyPart == ANIM_BP_LEGS )
          v44 = "legs";
      }
      v45 = SL_ConvertToString((scr_string_t)*(_DWORD *)(104i64 * (int)v12 + *(_QWORD *)(v17 + 48) + 4));
      Com_Printf(19, "Playing (client %i) %s on %s\n", (unsigned int)ps->clientNum, v45, v44);
    }
    v46 = DVARINT_pmoveanim_debug;
    if ( !DVARINT_pmoveanim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmoveanim_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    if ( v46->current.integer >= 1 && Sys_IsServerThread() )
    {
      v47 = SL_ConvertToString((scr_string_t)*(_DWORD *)(104i64 * (int)v12 + *(_QWORD *)(v17 + 48) + 4));
      LODWORD(v53) = ps->legsTimer;
      LODWORD(fmt) = ps->clientNum;
      Com_Printf(19, "%s:%i:e%i: %7i     legsAnim: %s\n", "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1892i64, fmt, v53, v47);
    }
    v25 = setTimer;
    v24 = force;
    goto LABEL_57;
  }
LABEL_122:
  if ( ps->torsoTimer < 500 || v24 )
  {
    if ( forceLegsOnlya && (ps->torsoAnim & 0xFFFFEFFF) == (_DWORD)v12 )
    {
      if ( v25 && (*(_DWORD *)(104i64 * (int)v12 + *(_QWORD *)(v17 + 48) + 16) & 0x100i64) != 0 )
        ps->torsoTimer = 10 * forceDuration;
    }
    else
    {
      v48 = v12 | ~ps->torsoAnim & 0x1000;
      ps->torsoAnim = v48;
      if ( (v48 & 0xFFFFEFFF) >= *(_DWORD *)(v17 + 8) )
      {
        LODWORD(v54) = *(_DWORD *)(v17 + 8);
        LODWORD(v53) = v48 & 0xFFFFEFFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1947, ASSERT_TYPE_ASSERT, "(unsigned)( (ps->torsoAnim & ~(1<<(13-1))) ) < (unsigned)( playerAnim->animationCount )", "(ps->torsoAnim & ~ANIM_TOGGLEBIT) doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      if ( *(_WORD *)(*(_QWORD *)(v17 + 120) + 2 * (ps->torsoAnim & 0xFFFFFFFFFFFFEFFFui64)) == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1948, ASSERT_TYPE_ASSERT, "(playerAnim->torsoAnimPackMap[ps->torsoAnim & ~(1<<(13-1))] != 0xffff)", (const char *)&queryFormat, "playerAnim->torsoAnimPackMap[ps->torsoAnim & ~ANIM_TOGGLEBIT] != INVALID_ANIM_MAP_ENTRY") )
        __debugbreak();
      if ( setTimer )
        ps->torsoTimer = 10 * forceDuration;
      v49 = DVARINT_xanim_debug;
      if ( !DVARINT_xanim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v49);
      if ( v49->current.integer >= 1 )
      {
        v50 = SL_ConvertToString((scr_string_t)*(_DWORD *)(104i64 * (int)v12 + *(_QWORD *)(v17 + 48) + 4));
        Com_Printf(19, "Playing (client %i) %s on torso\n", (unsigned int)ps->clientNum, v50);
      }
    }
  }
LABEL_142:
  if ( ps->legsTimer >= 0x80000u )
  {
    LODWORD(v54) = 0x80000;
    LODWORD(v53) = ps->legsTimer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1972, ASSERT_TYPE_ASSERT, "(unsigned)( ps->legsTimer ) < (unsigned)( (1 << 19) )", "ps->legsTimer doesn't index (1 << ANIM_TIMER_BITS)\n\t%i not in [0, %i)", v53, v54) )
      __debugbreak();
  }
  if ( ps->torsoTimer >= 0x80000u )
  {
    LODWORD(v54) = 0x80000;
    LODWORD(v53) = ps->torsoTimer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1973, ASSERT_TYPE_ASSERT, "(unsigned)( ps->torsoTimer ) < (unsigned)( (1 << 19) )", "ps->torsoTimer doesn't index (1 << ANIM_TIMER_BITS)\n\t%i not in [0, %i)", v53, v54) )
      __debugbreak();
  }
  if ( !v57 )
    return (unsigned int)-1;
  return (unsigned int)forceDuration;
}

/*
==============
BG_PlayerASM_DebugOverrideAnimTimers
==============
*/
void BG_PlayerASM_DebugOverrideAnimTimers(const BgStatic *const bgameStatic, characterInfo_t *ci, int entnum)
{
  const dvar_t *v3; 
  DObj *v7; 
  DObj *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  PlayerASM_AnimSlot v13; 

  v3 = DCONST_DVARINT_playerasm_debug_override_entnum;
  if ( !DCONST_DVARINT_playerasm_debug_override_entnum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_entnum") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( entnum == v3->current.integer )
  {
    v7 = bgameStatic->IsClient((BgStatic *)bgameStatic) ? Com_GetClientDObj(entnum, (LocalClientNum_t)LODWORD(bgameStatic[1].__vftable)) : (DObj *)((__int64 (__fastcall *)(const BgStatic *const, _QWORD))bgameStatic->__vftable[1].HasCharacterInfo)(bgameStatic, (unsigned int)entnum);
    v8 = v7;
    if ( v7 )
    {
      v9 = DVARFLT_playerasm_debug_override_main_state_time;
      if ( !DVARFLT_playerasm_debug_override_main_state_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_main_state_time") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.value >= 0.0 )
      {
        v10 = DVARFLT_playerasm_debug_override_main_state_time;
        if ( !DVARFLT_playerasm_debug_override_main_state_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_main_state_time") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v10);
        BG_PlayerASM_DebugOverrideAnimTimersSlot(v8, ci, MOVEMENT, v10->current.value);
      }
      v11 = DVARFLT_playerasm_debug_override_sub_state_time;
      if ( !DVARFLT_playerasm_debug_override_sub_state_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_sub_state_time") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v11->current.value >= 0.0 )
      {
        v12 = DVARFLT_playerasm_debug_override_sub_state_time;
        if ( !DVARFLT_playerasm_debug_override_sub_state_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_sub_state_time") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        LOBYTE(v13) = 1;
        BG_PlayerASM_DebugOverrideAnimTimersSlot(v8, ci, v13, v12->current.value);
      }
    }
  }
}

/*
==============
BG_PlayerAngles
==============
*/
void BG_PlayerAngles(const BgHandler *handler, const entityState_t *es, characterInfo_t *ci)
{
  BgStatic *ActiveStatics; 
  unsigned int Animset; 
  unsigned int Anim; 
  PlayerASM_AnimSlot v8; 
  unsigned int v9; 
  int IsTransitionalAlias; 
  __int64 v11; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  bool v18; 
  unsigned int torsoAnim; 
  unsigned int *movetype; 
  const PlayerAnimEntry *AnimationForIndex; 
  const PlayerAnimEntry *v22; 
  unsigned __int64 v23; 
  float lerpMoveDir; 
  float v26; 
  double v27; 
  float v28; 
  bool IsRemoteTurretActiveFlags; 
  float v30; 
  const dvar_t *v31; 
  float value; 
  double v33; 
  float v34; 
  bool v35; 
  float v36; 
  double v37; 
  double v38; 
  unsigned int XAnimIndex; 
  unsigned int ladderMantleAnimIndex; 
  DObj *DObj; 
  double Weight; 
  float v43; 
  double Float_Internal_DebugName; 
  float v45; 
  double v46; 
  const dvar_t *v50; 
  float v51; 
  const dvar_t *v52; 
  int *p_yawing; 
  PlayerASM_AnimSlot v63; 
  const char *v64; 
  const char *v65; 
  int v66; 
  float v67; 
  int v68; 
  const dvar_t *v69; 
  const dvar_t *v70; 
  float v71; 
  const dvar_t *v72; 
  const char *v73; 
  float v74; 
  const dvar_t *v75; 
  const dvar_t *v76; 
  XAnimTree *pXAnimTree; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 
  double v82; 
  __int64 v83; 
  __int64 v84; 
  __int64 v85; 
  __int64 v86; 
  double v87; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 
  __int64 v91; 
  double v92; 
  __int64 v93; 
  __int64 v94; 
  __int64 v95; 
  __int64 v96; 
  double v97; 
  __int64 v98; 
  __int64 v99; 
  __int64 v100; 
  __int64 v101; 
  double v102; 
  unsigned int *edgeLadderQueryHint; 
  unsigned int *edgeWidthQueryHint; 
  bool v105; 
  char v106; 
  bool v107; 
  bool v108; 
  char v109; 
  bool IsPlayingVehicleOccupancyAnims; 
  char v111; 
  bool v112; 
  bool IsStrafeAnim; 
  char v114; 
  int v115; 
  unsigned int v116; 
  bool v117; 
  bool v118; 
  int v119; 
  BOOL v120; 
  vec3_t trBase; 
  vec3_t bgStatic; 
  BgHandler *handlera; 
  __int64 v124; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v127; 
  vec3_t v128; 
  vec3_t outSlopeNormal; 
  LadderInfo outLadderInfo; 

  v124 = -2i64;
  handlera = (BgHandler *)handler;
  BG_CheckThread();
  ActiveStatics = BgStatic::GetActiveStatics();
  *(_QWORD *)bgStatic.v = ActiveStatics;
  *(_QWORD *)end.v = BG_GetSuitDef(ci->suitIndex);
  if ( !*(_QWORD *)end.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7835, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() )
  {
    Animset = BG_PlayerASM_GetAnimset(ci);
    Anim = BG_PlayerASM_GetAnim(ci, MOVEMENT);
    LOBYTE(v8) = 1;
    v9 = BG_PlayerASM_GetAnim(ci, v8);
    IsTransitionalAlias = BG_PlayerASM_IsTransitionalAlias(Anim, Animset);
    v120 = BG_PlayerASM_IsNoPitchAimingAlias(Anim, Animset) || BG_PlayerASM_IsNoPitchAimingAlias(v9, Animset) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 4u) && BG_PlayerASM_IsReloadAlias(v9, Animset);
    v107 = BG_PlayerASM_IsSlideAlias(Anim, Animset) != 0;
    BG_PlayerASM_IsAirAlias(Anim, Animset);
    IsStrafeAnim = BG_PlayerASM_IsStrafeAlias(Anim, Animset) != 0;
    if ( BG_PlayerASM_IsExecutionAttackerAlias(Anim, Animset) || (v106 = 0, BG_PlayerASM_IsExecutionVictimAlias(Anim, Animset)) )
      v106 = 1;
    if ( BG_PlayerASM_IsLadderAlias(Anim, Animset) || (v105 = 0, BG_PlayerASM_IsLadderAimAlias(Anim, Animset)) )
      v105 = 1;
    LOBYTE(trBase.v[0]) = BG_PlayerASM_IsNoAimingIfProneAlias(v9, Animset) != 0;
    goto LABEL_56;
  }
  v11 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7857, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(ci);
  v13 = SuitAnimIndexFromCharacter;
  if ( (unsigned int)SuitAnimIndexFromCharacter >= NUM_ANIM_SUIT_STATE )
  {
    LODWORD(edgeLadderQueryHint) = SuitAnimIndexFromCharacter;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7860, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", edgeLadderQueryHint, 4) )
      __debugbreak();
  }
  v14 = *(_QWORD *)(v11 + 8 * v13);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7863, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  Anim = ci->playerAnim.legsAnim & 0xFFFFEFFF;
  v9 = ci->playerAnim.torsoAnim & 0xFFFFEFFF;
  if ( Anim >= *(_DWORD *)(v14 + 8) )
  {
    LODWORD(edgeWidthQueryHint) = *(_DWORD *)(v14 + 8);
    LODWORD(edgeLadderQueryHint) = ci->playerAnim.legsAnim & 0xFFFFEFFF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7868, ASSERT_TYPE_ASSERT, "(unsigned)( legsAnimIndex ) < (unsigned)( playerAnim->animationCount )", "legsAnimIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", edgeLadderQueryHint, edgeWidthQueryHint) )
      __debugbreak();
  }
  v15 = *(_DWORD *)(104i64 * Anim + *(_QWORD *)(v14 + 48) + 16);
  v115 = v15 & 0x400000;
  v16 = v15 & 0x10000;
  v17 = v16;
  if ( v9 )
  {
    if ( v9 >= *(_DWORD *)(v14 + 8) )
    {
      LODWORD(edgeWidthQueryHint) = *(_DWORD *)(v14 + 8);
      LODWORD(edgeLadderQueryHint) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7874, ASSERT_TYPE_ASSERT, "(unsigned)( torsoAnimIndex ) < (unsigned)( playerAnim->animationCount )", "torsoAnimIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", edgeLadderQueryHint, edgeWidthQueryHint) )
        __debugbreak();
    }
    if ( v17 )
      goto LABEL_45;
    v18 = (*(_DWORD *)(104i64 * v9 + *(_QWORD *)(v14 + 48) + 16) & 0x10000) == 0i64;
  }
  else
  {
    v18 = v16 == 0;
  }
  if ( v18 )
  {
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 4u) )
    {
      v120 = 0;
      goto LABEL_46;
    }
    torsoAnim = ci->playerAnim.torsoAnim;
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4775, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
      __debugbreak();
    if ( (BG_AnimationMP_GetAnimationForIndex(torsoAnim & 0xFFFFEFFF, (SuitAnimType)v13)->flags & 0x10) == 0 )
    {
      v120 = 0;
      goto LABEL_46;
    }
  }
LABEL_45:
  v120 = 1;
LABEL_46:
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  movetype = BG_AnimationMP_GetAnimationForIndex(Anim & 0xFFFFEFFF, (SuitAnimType)v13)->movetype;
  if ( Com_BitCheckAssert(movetype, 24, 32) || (v107 = 0, Com_BitCheckAssert(movetype, 25, 32)) )
    v107 = 1;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5121, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  AnimationForIndex = BG_AnimationMP_GetAnimationForIndex(Anim & 0xFFFFEFFF, (SuitAnimType)v13);
  Com_BitCheckAssert(AnimationForIndex->movetype, 34, 32);
  IsStrafeAnim = BG_IsStrafeAnim(Anim, (SuitAnimType)v13);
  v106 = 0;
  v105 = BG_IsLadderAnim(Anim, (SuitAnimType)v13) != 0;
  v22 = BG_AnimationMP_GetAnimationForIndex(v9 & 0xFFFFEFFF, (SuitAnimType)v13);
  v23 = (unsigned __int64)LODWORD(v22->flags) >> 15;
  LOBYTE(v23) = (v22->flags & 0x8000) != 0;
  *(_QWORD *)trBase.v = v23;
  IsTransitionalAlias = v115;
LABEL_56:
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7886, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  _XMM9 = 0i64;
  v108 = ci->mountAnimation.fraction > 0.0;
  lerpMoveDir = ci->lerpMoveDir;
  v26 = ci->playerAngles.v[0];
  v128.v[0] = v26;
  v128.v[2] = ci->playerAngles.v[2];
  v27 = AngleNormalize360(ci->playerAngles.v[1]);
  v28 = *(float *)&v27;
  v128.v[1] = *(float *)&v27;
  v127.v[0] = 0.0;
  v127.v[1] = 0.0;
  v127.v[2] = 0.0;
  start.v[0] = 0.0;
  start.v[1] = 0.0;
  start.v[2] = 0.0;
  if ( (int)BG_GetConditionBit(ci, 3) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7906, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED") )
    __debugbreak();
  if ( (int)BG_GetConditionBit(ci, 3) >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7907, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES") )
    __debugbreak();
  if ( !PlayerASM_IsEnabled() )
  {
    if ( IsTransitionalAlias || (ci->clientConditions[3][0] & 0x20000E) != 0 )
      goto LABEL_68;
LABEL_80:
    v119 = 0;
    goto LABEL_69;
  }
  if ( !IsTransitionalAlias && (float)ci->speed != 0.0 )
    goto LABEL_80;
LABEL_68:
  v119 = 1;
LABEL_69:
  IsPlayingVehicleOccupancyAnims = BG_IsPlayingVehicleOccupancyAnims(ci);
  v116 = ci->clientConditions[44][0] - 1;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2102, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  IsRemoteTurretActiveFlags = BG_IsRemoteTurretActiveFlags(&es->lerp.eFlags);
  v117 = IsRemoteTurretActiveFlags;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2088, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( BG_IsTurretActiveFlags(&es->lerp.eFlags) && !IsRemoteTurretActiveFlags )
  {
    v114 = 1;
    goto LABEL_90;
  }
  v114 = 0;
  if ( IsPlayingVehicleOccupancyAnims || v116 <= 0xA || v105 || BG_IsMantleEntity(es) || v108 || !v119 || ci->clientConditions[5][0] )
    goto LABEL_90;
  if ( v120 )
  {
LABEL_91:
    ci->torso.pitching = 1;
    goto LABEL_92;
  }
  if ( v106 )
  {
LABEL_90:
    ci->torso.yawing = 1;
    goto LABEL_91;
  }
LABEL_92:
  ci->legs.yawing = 1;
  v30 = lerpMoveDir;
  v127.v[1] = lerpMoveDir;
  v109 = 0;
  BG_SlopeWorldmodel_Unpack(&es->lerp.u.player.slopePacked, &outSlopeNormal);
  v31 = DVARFLT_g_anim_mp_prone_max_slope;
  if ( !DVARFLT_g_anim_mp_prone_max_slope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_anim_mp_prone_max_slope") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  value = v31->current.value;
  v33 = I_fclamp(outSlopeNormal.v[2], -1.0, 1.0);
  v34 = acosf_0(*(float *)&v33) * 57.295776;
  v112 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0xAu);
  v118 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 3u);
  if ( !Com_GameMode_SupportsFeature(WEAPON_STUNNED_START|0x80) || !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 4u) || (v111 = 1, value >= v34) )
    v111 = 0;
  v35 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 4u);
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2004, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0x11u) )
  {
    v36 = FLOAT_90_0;
LABEL_138:
    v127.v[1] = v28;
    v30 = v28;
    goto LABEL_139;
  }
  if ( v117 )
  {
    v36 = FLOAT_90_0;
LABEL_139:
    v45 = v28;
    goto LABEL_140;
  }
  if ( IsPlayingVehicleOccupancyAnims || v116 <= 0xA )
    goto LABEL_137;
  if ( v105 )
  {
    if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_ladderEnableEnhanced, "ladderEnableEnhanced") || !PlayerASM_IsEnabled() )
    {
      v45 = v30;
      v36 = FLOAT_90_0;
LABEL_140:
      start.v[1] = v45;
      goto LABEL_141;
    }
    Trajectory_GetTrBase(&es->lerp.pos, &trBase);
    BG_GetLadderInfo(&trBase, handlera, &outLadderInfo, NULL, 0, &ci->edgeQueryLadderHintNodeCharInfo, &ci->edgeQueryLadderWidthHintNodeCharInfo);
    v37 = vectoyaw((const vec2_t *)&outLadderInfo);
    v30 = *(float *)&v37;
    v38 = vectoyaw((const vec2_t *)&outLadderInfo);
    XAnimIndex = BG_PlayerASM_GetXAnimIndex(ci->legs.animsetIndex, ci->legs.animationNumber);
    ladderMantleAnimIndex = ci->ladderMantleAnimIndex;
    if ( !ladderMantleAnimIndex || !XAnimIndex )
    {
      v30 = *(float *)&v38 + 180.0;
      v127.v[1] = *(float *)&v38 + 180.0;
      v45 = ci->playerAngles.v[1];
      start.v[1] = v45;
      v36 = FLOAT_90_0;
      goto LABEL_119;
    }
    if ( XAnimIndex == ladderMantleAnimIndex )
    {
      v45 = v30;
      start.v[1] = v30;
      v127.v[1] = v30;
    }
    else
    {
      DObj = BG_GetDObj(*(const BgStatic **)bgStatic.v, ci->entityNum);
      Weight = XAnimGetWeight(DObj->tree, 0, XANIM_SUBTREE_DEFAULT, XAnimIndex);
      v43 = *(float *)&Weight;
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ladderCounterYawAngle, "ladderCounterYawAngle");
      v30 = (float)(*(float *)&Float_Internal_DebugName * v43) + v30;
      v45 = v30;
      start.v[1] = v30;
      v127.v[1] = v30;
      if ( v43 >= 1.0 )
      {
        ci->ladderMantleAnimIndex = 0;
        v36 = 0.0;
LABEL_119:
        memset(&trBase, 0, sizeof(trBase));
        goto LABEL_141;
      }
    }
    v36 = 0.0;
    goto LABEL_119;
  }
  if ( !BG_IsMantleEntity(es) )
  {
    if ( v108 )
    {
      v36 = (float)(1.0 - ci->mountAnimation.fraction) * 90.0;
      goto LABEL_138;
    }
    if ( !ci->useShadowAnims || v35 )
    {
      if ( v107 )
      {
        _XMM0 = v112;
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm0, xmm9, xmm1, xmm2
        }
        v36 = *(float *)&_XMM0;
        goto LABEL_138;
      }
      if ( !v111 && (!v35 || !LOBYTE(trBase.v[0])) )
      {
        if ( !v106 )
        {
          v45 = v28;
          start.v[1] = v28;
          if ( v112 )
          {
            v36 = FLOAT_45_0;
            v109 = 1;
          }
          else
          {
            v36 = FLOAT_90_0;
          }
          goto LABEL_141;
        }
        v109 = 1;
      }
    }
LABEL_137:
    v36 = 0.0;
    goto LABEL_138;
  }
  if ( ci->clientConditions[19][0] == 2 && PlayerASM_IsEnabled() )
  {
    Trajectory_GetTrBase(&es->lerp.pos, &bgStatic);
    BG_GetLadderInfo(&bgStatic, handlera, &outLadderInfo, NULL, 0, &ci->edgeQueryLadderHintNodeCharInfo, &ci->edgeQueryLadderWidthHintNodeCharInfo);
    v46 = vectoyaw((const vec2_t *)&outLadderInfo);
    v30 = *(float *)&v46;
    v45 = *(float *)&v46;
    start.v[1] = *(float *)&v46;
    v127.v[1] = *(float *)&v46;
    ci->ladderMantleAnimIndex = BG_PlayerASM_GetXAnimIndex(ci->legs.animsetIndex, ci->legs.animationNumber);
    memset(&bgStatic, 0, sizeof(bgStatic));
    v36 = FLOAT_90_0;
  }
  else
  {
    v45 = v28;
    start.v[1] = v28;
    v30 = v28;
    v127.v[1] = v28;
    start.v[0] = FLOAT_90_0;
    v36 = FLOAT_90_0;
  }
LABEL_141:
  v50 = DVARFLT_bg_torsoSwingSpeed;
  if ( !DVARFLT_bg_torsoSwingSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_torsoSwingSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v50);
  v51 = v50->current.value;
  if ( *(_BYTE *)(*(_QWORD *)end.v + 436i64) )
  {
    v52 = DVARFLT_bg_torsoSwingSpeedCameraIndependentMovement;
    if ( !DVARFLT_bg_torsoSwingSpeedCameraIndependentMovement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_torsoSwingSpeedCameraIndependentMovement") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v52);
    v51 = v52->current.value;
  }
  BG_SwingAngles(v45, 0.0, v36, v51, 0.5, &ci->torso.yawAngle, &ci->torso.yawing);
  *(float *)&_XMM6 = FLOAT_150_0;
  if ( !Anim && !v9 || !ci->legs.animationNumber && !ci->torso.animationNumber )
  {
    LODWORD(_XMM6) = 0;
    p_yawing = &ci->legs.yawing;
    ci->legs.yawing = 0;
    goto LABEL_169;
  }
  if ( v106 || v105 )
  {
    LODWORD(_XMM6) = 0;
    goto LABEL_168;
  }
  if ( v108 )
  {
    *(float *)&_XMM6 = (float)(1.0 - ci->mountAnimation.fraction) * 90.0;
LABEL_168:
    p_yawing = &ci->legs.yawing;
    goto LABEL_169;
  }
  if ( !ci->useShadowAnims )
    goto LABEL_168;
  if ( v107 )
  {
    *(float *)&_XMM6 = FLOAT_30_0;
    goto LABEL_168;
  }
  _XMM0 = 0i64;
  __asm
  {
    vroundss xmm1, xmm0, xmm3, 1
    vcmpltss xmm3, xmm9, xmm1
  }
  _XMM0 = LODWORD(FLOAT_120_0);
  __asm { vblendvps xmm1, xmm0, xmm2, xmm3 }
  p_yawing = &ci->legs.yawing;
  if ( v118 )
  {
    _XMM0 = IsStrafeAnim;
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_15_0);
    __asm { vblendvps xmm6, xmm1, xmm2, xmm3 }
  }
  else
  {
    LODWORD(_XMM6) = _XMM1;
  }
LABEL_169:
  if ( PlayerASM_IsEnabled() )
  {
    if ( ci->playerAnim.legsAnim != BG_PlayerASM_GetAnim(es, MOVEMENT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8211, ASSERT_TYPE_ASSERT, "(ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::PRIMARY )] == BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::PRIMARY ))", (const char *)&queryFormat, "ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::PRIMARY )] == BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::PRIMARY )") )
      __debugbreak();
    LOBYTE(v63) = 1;
    if ( ci->playerAnim.torsoAnim != BG_PlayerASM_GetAnim(es, v63) )
    {
      v64 = "ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::SECONDARY )] == BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::SECONDARY )";
      v65 = "(ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::SECONDARY )] == BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::SECONDARY ))";
      v66 = 8212;
      goto LABEL_180;
    }
  }
  else
  {
    if ( ci->playerASMAnim.animSet != BG_AnimationMP_GetSuitAnimIndex(es) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8216, ASSERT_TYPE_ASSERT, "(ci->playerAnim.suitAnimIndex == BG_AnimationMP_GetSuitAnimIndex( es ))", (const char *)&queryFormat, "ci->playerAnim.suitAnimIndex == BG_AnimationMP_GetSuitAnimIndex( es )") )
      __debugbreak();
    if ( ci->playerAnim.legsAnim != BG_AnimationMP_GetLegsAnimation(es) )
    {
      v64 = "ci->playerAnim.legsAnim == static_cast<uint>(BG_AnimationMP_GetLegsAnimation( es ))";
      v65 = "(ci->playerAnim.legsAnim == static_cast<uint>(BG_AnimationMP_GetLegsAnimation( es )))";
      v66 = 8217;
LABEL_180:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", v66, ASSERT_TYPE_ASSERT, v65, (const char *)&queryFormat, v64) )
        __debugbreak();
    }
  }
  v67 = FLOAT_0_5;
  v68 = v119;
  if ( !v119 )
  {
    v69 = DCONST_DVARFLT_bg_legsMinSwingSpeedScaleWhenMoving;
    if ( !DCONST_DVARFLT_bg_legsMinSwingSpeedScaleWhenMoving && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_legsMinSwingSpeedScaleWhenMoving") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v69);
    v67 = v69->current.value;
    v68 = 0;
  }
  if ( !v109 )
  {
    if ( PlayerASM_IsEnabled() )
    {
      if ( v68 )
      {
        v72 = DCONST_DVARFLT_playerasm_idleSwingSpeed;
        if ( !DCONST_DVARFLT_playerasm_idleSwingSpeed )
        {
          v73 = "playerasm_idleSwingSpeed";
          goto LABEL_200;
        }
LABEL_202:
        Dvar_CheckFrontendServerThread(v72);
        v71 = v72->current.value;
        goto LABEL_203;
      }
      v72 = DCONST_DVARFLT_playerasm_movingSwingSpeed;
      if ( DCONST_DVARFLT_playerasm_movingSwingSpeed )
        goto LABEL_202;
      v73 = "playerasm_movingSwingSpeed";
    }
    else
    {
      v72 = DVARFLT_bg_swingSpeed;
      if ( DVARFLT_bg_swingSpeed )
        goto LABEL_202;
      v73 = "bg_swingSpeed";
    }
LABEL_200:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v73) )
      __debugbreak();
    goto LABEL_202;
  }
  v70 = DVARFLT_bg_fastSwingSpeed;
  if ( !DVARFLT_bg_fastSwingSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_fastSwingSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v70);
  v71 = v70->current.value;
LABEL_203:
  BG_SwingAngles(v30, 0.0, *(float *)&_XMM6, v71, v67, &ci->legs.yawAngle, p_yawing);
  if ( v114 )
  {
    ci->torso.yawAngle = v28;
    ci->legs.yawAngle = v28;
  }
  if ( v120 )
  {
    v74 = 0.0;
  }
  else if ( BG_IsDeadEntity(es) )
  {
    v74 = 0.0;
  }
  else if ( v114 )
  {
    v74 = 0.0;
  }
  else
  {
    v75 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
    if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v75);
    if ( v75->current.enabled || !v105 )
    {
      if ( BG_IsMantleEntity(es) )
      {
        v74 = 0.0;
      }
      else if ( v106 )
      {
        v74 = 0.0;
      }
      else
      {
        v74 = v26 * 2.0;
        if ( v26 > 180.0 )
          v74 = (float)(v26 * 2.0) - 720.0;
      }
    }
    else
    {
      v74 = 0.0;
    }
  }
  BG_SwingAngles(v74, 0.0, 140.0, 0.15000001, 0.5, &ci->torso.pitchAngle, &ci->torso.pitching);
  end = v127;
  v127 = start;
  start = v128;
  BG_GameInterface_PlayerAngles(ci, &start, &v127, &end);
  v76 = DVARINT_xanim_debug;
  if ( !DVARINT_xanim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v76);
  if ( v76->current.integer >= 2 )
  {
    pXAnimTree = ci->pXAnimTree;
    if ( pXAnimTree )
    {
      if ( pXAnimTree->owner[0] == 1 )
      {
        Trajectory_GetTrBase(&es->lerp.pos, &start);
        end.v[2] = start.v[2];
        v82 = j___libm_sse2_sincosf_(v79, v78, v80, v81);
        end.v[0] = (float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)&v82, (__m128)*(unsigned __int64 *)&v82, 1).m128_f32[0] * 20.0) + start.v[0];
        end.v[1] = (float)(*(float *)&v82 * 20.0) + start.v[1];
        CG_DebugLine(&start, &end, &colorRed, 1, 1);
        end.v[2] = start.v[2];
        v87 = j___libm_sse2_sincosf_(v84, v83, v85, v86);
        end.v[0] = (float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)&v87, (__m128)*(unsigned __int64 *)&v87, 1).m128_f32[0] * 40.0) + start.v[0];
        end.v[1] = (float)(*(float *)&v87 * 40.0) + start.v[1];
        CG_DebugLine(&start, &end, &colorGreen, 1, 1);
        end.v[2] = start.v[2];
        v92 = j___libm_sse2_sincosf_(v89, v88, v90, v91);
        end.v[0] = (float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)&v92, (__m128)*(unsigned __int64 *)&v92, 1).m128_f32[0] * 60.0) + start.v[0];
        end.v[1] = (float)(*(float *)&v92 * 60.0) + start.v[1];
        CG_DebugLine(&start, &end, &colorBlue, 1, 1);
        end.v[2] = start.v[2];
        v97 = j___libm_sse2_sincosf_(v94, v93, v95, v96);
        end.v[0] = (float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)&v97, (__m128)*(unsigned __int64 *)&v97, 1).m128_f32[0] * 80.0) + start.v[0];
        end.v[1] = (float)(*(float *)&v97 * 80.0) + start.v[1];
        CG_DebugLine(&start, &end, &colorBlack, 1, 1);
        end.v[2] = start.v[2];
        v102 = j___libm_sse2_sincosf_(v99, v98, v100, v101);
        end.v[0] = (float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)&v102, (__m128)*(unsigned __int64 *)&v102, 1).m128_f32[0] * 100.0) + start.v[0];
        end.v[1] = (float)(*(float *)&v102 * 100.0) + start.v[1];
        CG_DebugLine(&start, &end, &colorLtOrange, 0, 1);
        memset(&start, 0, sizeof(start));
      }
    }
  }
}

/*
==============
BG_PlayerAnimation
==============
*/
void BG_PlayerAnimation(const BgHandler *handler, const BgWeaponMap *weaponMap, const entityState_t *es, characterInfo_t *ci, const vec3_t *playerOrigin, const vec3_t *movingPlatformOrigin, const vec3_t *movingPlatformAngles)
{
  signed __int64 v7; 
  void *v8; 
  const BgHandler *v12; 
  const BgStatic *ActiveStatics; 
  __int64 v14; 
  unsigned int number; 
  DObj *ClientDObj; 
  const DObj *v17; 
  bool v18; 
  unsigned int Anim; 
  PlayerASM_AnimSlot v20; 
  unsigned int v21; 
  int v22; 
  const dvar_t *v23; 
  bool enabled; 
  double ClientLodFloat; 
  int v26; 
  int lastFullAnimUpdateTime; 
  bool v28; 
  const char *v29; 
  const dvar_t *v30; 
  unsigned __int8 v31; 
  PlayerASM_AnimSlot v32; 
  PlayerASM_AnimSlot v33; 
  PlayerASM_AnimSlot v34; 
  int v35; 
  PlayerASM_AnimSlot v36; 
  unsigned int v37; 
  DObj *v38; 
  unsigned int v39; 
  DObj *v40; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  MountWorldmodelAbbreviatedProperties *properties; 
  MountWorldmodelDerivedProperties *outDerivedProperties; 
  bool previousSlotStateChanged; 
  XAnimTree *pAnimTree; 
  PlayerASM_AnimOverrides animOverride; 
  XModelNameMap modelNameMap; 

  v8 = alloca(v7);
  v12 = handler;
  modelNameMap.initialized = 0;
  Sys_ProfBeginNamedEvent(0xFF44CCFF, "BG_PlayerAnimation");
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9142, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  v14 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9145, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  number = es->number;
  if ( ActiveStatics->IsClient((BgStatic *)ActiveStatics) )
    ClientDObj = Com_GetClientDObj(number, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable));
  else
    ClientDObj = (DObj *)((__int64 (__fastcall *)(const BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, number);
  v17 = ClientDObj;
  if ( ClientDObj )
    BG_UpdateVehicleAnimCharacterInfo(v12, ClientDObj, es, (float)*(int *)(v14 + 19540) * 0.001, ci);
  BG_AnimPlayerConditions(v12, weaponMap, es, ci);
  BG_PlayerAngles(v12, es, ci);
  pAnimTree = ci->pXAnimTree;
  v18 = 0;
  previousSlotStateChanged = 0;
  if ( ci->leftHandGun && (ci->torso.animationNumber & 0xFFFFEFFF) == 0 )
  {
    ci->leftHandGun = 0;
    ci->dobjDirty = 1;
  }
  BG_ContextMount_CalcWorldmodelDerivedProperties(v12, *(_DWORD *)(v14 + 19528), playerOrigin, &ci->playerAngles, ci->entityNum, &ci->dobjHeldWeapon, ci->isUsingWeaponAltMode != 0, &ci->mount, &ci->mountAnimation);
  if ( PlayerASM_IsEnabled() )
  {
    Anim = BG_PlayerASM_GetAnim(ci, MOVEMENT);
    v18 = ci->pXAnimTree && Anim && ci->legs.animationNumber != Anim;
    LOBYTE(v20) = 1;
    v21 = BG_PlayerASM_GetAnim(ci, v20);
    if ( !ci->pXAnimTree || !v21 || (previousSlotStateChanged = 1, ci->torso.animationNumber == v21) )
      previousSlotStateChanged = 0;
  }
  BG_UpdateCustomNodeParameters(v12, ci, es, v18);
  v22 = *(_DWORD *)(v14 + 19528);
  if ( v17 && DObjHasClientFlag(v17) )
  {
    v23 = DCONST_DVARBOOL_playerasm_client_update_interval_enable;
    if ( !DCONST_DVARBOOL_playerasm_client_update_interval_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_client_update_interval_enable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    enabled = v23->current.enabled;
    ClientLodFloat = XAnimGetClientLodFloat(v17);
    v26 = v22 + 27 * es->number;
    lastFullAnimUpdateTime = ci->lastFullAnimUpdateTime;
    v28 = PlayerASM_IsEnabled() && BG_PlayerASM_IsForceUpdate(es, ci);
    if ( lastFullAnimUpdateTime && lastFullAnimUpdateTime < v26 && *(float *)&ClientLodFloat > 0.0 && !v28 && enabled )
    {
      if ( *(float *)&ClientLodFloat < 3.0 )
      {
        if ( *(float *)&ClientLodFloat < 2.0 )
        {
          v29 = "playerasm_client_update_interval_lod1";
          v30 = DCONST_DVARINT_playerasm_client_update_interval_lod1;
        }
        else
        {
          v29 = "playerasm_client_update_interval_lod2";
          v30 = DCONST_DVARINT_playerasm_client_update_interval_lod2;
        }
      }
      else
      {
        v29 = "playerasm_client_update_interval_lod3";
        v30 = DCONST_DVARINT_playerasm_client_update_interval_lod3;
      }
      if ( v26 - lastFullAnimUpdateTime < Dvar_GetInt_Internal_DebugName(v30, v29) )
      {
        v31 = 1;
        v12 = handler;
        goto LABEL_48;
      }
    }
    ci->lastFullAnimUpdateTime = v26;
    v12 = handler;
  }
  v31 = 0;
LABEL_48:
  if ( PlayerASM_IsEnabled() )
  {
    BG_PlayerASM_CheckAnimsetIndex(es, ci, MOVEMENT);
    LOBYTE(v32) = 1;
    BG_PlayerASM_CheckAnimsetIndex(es, ci, v32);
    if ( ci->playerASMAnim.animSet != BG_PlayerASM_GetAnimset(es) )
    {
      LODWORD(outDerivedProperties) = BG_PlayerASM_GetAnimset(es);
      LODWORD(properties) = ci->playerAnim.suitAnimIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9192, ASSERT_TYPE_ASSERT, "( ci->playerASMAnim.animSet ) == ( BG_PlayerASM_GetAnimset( es ) )", "%s == %s\n\t%i, %i", "ci->playerASMAnim.animSet", "BG_PlayerASM_GetAnimset( es )", properties, outDerivedProperties) )
        __debugbreak();
    }
    if ( ci->playerAnim.legsAnim != BG_PlayerASM_GetAnim(es, MOVEMENT) )
    {
      LODWORD(outDerivedProperties) = BG_PlayerASM_GetAnim(es, MOVEMENT);
      LODWORD(properties) = ci->playerAnim.legsAnim;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9193, ASSERT_TYPE_ASSERT, "( ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::PRIMARY )] ) == ( BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::PRIMARY ) )", "%s == %s\n\t%i, %i", "ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::PRIMARY )]", "BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::PRIMARY )", properties, outDerivedProperties) )
        __debugbreak();
    }
    LOBYTE(v33) = 1;
    if ( ci->playerAnim.torsoAnim != BG_PlayerASM_GetAnim(es, v33) )
    {
      LOBYTE(v34) = 1;
      LODWORD(outDerivedProperties) = BG_PlayerASM_GetAnim(es, v34);
      LODWORD(properties) = ci->playerAnim.torsoAnim;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9194, ASSERT_TYPE_ASSERT, "( ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::SECONDARY )] ) == ( BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::SECONDARY ) )", "%s == %s\n\t%i, %i", "ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::SECONDARY )]", "BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::SECONDARY )", properties, outDerivedProperties) )
        __debugbreak();
    }
    BG_PlayerASM_ClearAnimOverrides(&animOverride);
    v35 = (16 * v31) | (BG_PlayerASM_IsForceUpdate(es, ci) ? 2 : 0) | (ci->playerASMLocomotion.instantBlend ? 4 : 0);
    BG_PlayerASM_ApplyAnim(es, ci, MOVEMENT, &ci->legs, v35, movingPlatformOrigin, movingPlatformAngles, &animOverride, &modelNameMap, previousSlotStateChanged);
    LOBYTE(v36) = 1;
    BG_PlayerASM_ApplyAnim(es, ci, v36, &ci->torso, v35, movingPlatformOrigin, movingPlatformAngles, &animOverride, &modelNameMap, v18);
    if ( BG_PlayerASM_FindValidAliasAddonOverrides(&animOverride, (scr_string_t)0, NULL) )
    {
      v37 = es->number;
      v38 = ActiveStatics->IsClient((BgStatic *)ActiveStatics) ? Com_GetClientDObj(v37, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable)) : (DObj *)((__int64 (__fastcall *)(const BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, v37);
      if ( v38 )
        BG_PlayerASM_ApplyAliasAddonOverrides(v38, ci, &animOverride, (scr_string_t)0, 0, &modelNameMap, v35);
    }
    v39 = es->number;
    if ( ActiveStatics->IsClient((BgStatic *)ActiveStatics) )
      v40 = Com_GetClientDObj(v39, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable));
    else
      v40 = (DObj *)((__int64 (__fastcall *)(const BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, v39);
    if ( v40 )
      BG_PlayerASM_DebugOverrideParameters(v40, ci);
    BG_PlayerASM_DebugOverrideAnimTimers(ActiveStatics, ci, es->number);
    ci->playerASMLocomotion.forceUpdate = 0;
  }
  else
  {
    SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(ci);
    BG_PlayerAnimation_CheckSuitAnimIndex(SuitAnimIndexFromCharacter, &ci->legs);
    BG_PlayerAnimation_CheckSuitAnimIndex(SuitAnimIndexFromCharacter, &ci->torso);
    BG_PlayerAnimation_VerifyAnim(pAnimTree, &ci->legs, ci, SuitAnimIndexFromCharacter);
    BG_PlayerAnimation_VerifyAnim(pAnimTree, &ci->torso, ci, SuitAnimIndexFromCharacter);
    if ( ci->playerASMAnim.animSet != BG_AnimationMP_GetSuitAnimIndex(es) )
    {
      LODWORD(outDerivedProperties) = BG_AnimationMP_GetSuitAnimIndex(es);
      LODWORD(properties) = ci->playerAnim.suitAnimIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9237, ASSERT_TYPE_ASSERT, "( ci->playerAnim.suitAnimIndex ) == ( BG_AnimationMP_GetSuitAnimIndex( es ) )", "%s == %s\n\t%i, %i", "ci->playerAnim.suitAnimIndex", "BG_AnimationMP_GetSuitAnimIndex( es )", properties, outDerivedProperties) )
        __debugbreak();
    }
    if ( ci->playerAnim.legsAnim != BG_AnimationMP_GetLegsAnimation(es) )
    {
      LODWORD(outDerivedProperties) = BG_AnimationMP_GetLegsAnimation(es);
      LODWORD(properties) = ci->playerAnim.legsAnim;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9238, ASSERT_TYPE_ASSERT, "( ci->playerAnim.legsAnim ) == ( static_cast<uint>(BG_AnimationMP_GetLegsAnimation( es )) )", "%s == %s\n\t%i, %i", "ci->playerAnim.legsAnim", "static_cast<uint>(BG_AnimationMP_GetLegsAnimation( es ))", properties, outDerivedProperties) )
        __debugbreak();
    }
    if ( ci->playerAnim.torsoAnim != BG_AnimationMP_GetTorsoAnimation(es) )
    {
      LODWORD(outDerivedProperties) = BG_AnimationMP_GetTorsoAnimation(es);
      LODWORD(properties) = ci->playerAnim.torsoAnim;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9239, ASSERT_TYPE_ASSERT, "( ci->playerAnim.torsoAnim ) == ( static_cast<uint>(BG_AnimationMP_GetTorsoAnimation( es )) )", "%s == %s\n\t%i, %i", "ci->playerAnim.torsoAnim", "static_cast<uint>(BG_AnimationMP_GetTorsoAnimation( es ))", properties, outDerivedProperties) )
        __debugbreak();
    }
    BG_RunLerpFrameRate(ci, &ci->legs, ci->playerAnim.legsAnim, es, movingPlatformOrigin, movingPlatformAngles);
    BG_RunLerpFrameRate(ci, &ci->torso, ci->characterAnim.animTime, es, movingPlatformOrigin, movingPlatformAngles);
  }
  if ( !v31 )
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5697, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    BG_PlayerMP_FingerPoseWeaponAnims(weaponMap, ci, es, &modelNameMap);
    BG_PlayerMP_AltOverrideWeaponAnim(weaponMap, ci, es, &modelNameMap);
    if ( !PlayerASM_IsEnabled() && !BG_GameInterface_UpdateAimAnimBlends(ci, es) )
      BG_UpdateAimAnimBlends(ci, es);
    BG_AnimationMP_UpdateWobble(v12, ci, es);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
BG_PlayerAnimation_CheckSuitAnimIndex
==============
*/
void BG_PlayerAnimation_CheckSuitAnimIndex(const SuitAnimType suitAnimIndex, lerpFrame_t *lf)
{
  int v5; 

  if ( (unsigned int)suitAnimIndex >= NUM_ANIM_SUIT_STATE )
  {
    v5 = 4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7644, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", suitAnimIndex, v5) )
      __debugbreak();
  }
  if ( lf->suitAnimIndex != suitAnimIndex )
  {
    lf->suitAnimIndex = suitAnimIndex;
    lf->animationNumber = 0;
    lf->animation = NULL;
    lf->animationTime = 150;
  }
}

/*
==============
BG_PlayerAnimation_VerifyAnim
==============
*/
void BG_PlayerAnimation_VerifyAnim(XAnimTree *pAnimTree, lerpFrame_t *lf, characterInfo_t *ci, const SuitAnimType suitAnimIndex)
{
  __int64 v7; 
  BgStatic *ActiveStatics; 
  __int64 v9; 
  const PlayerAnimScript *v10; 
  unsigned int XAnimIndexForCharacterInternal; 
  double Weight; 
  __int64 v13; 
  __int64 v14; 

  v7 = suitAnimIndex;
  BG_CheckThread();
  if ( (unsigned int)v7 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7666, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v7, 4) )
    __debugbreak();
  if ( lf->suitAnimIndex != (_DWORD)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7667, ASSERT_TYPE_ASSERT, "(lf->suitAnimIndex == static_cast<int>( suitAnimIndex ))", (const char *)&queryFormat, "lf->suitAnimIndex == static_cast<int>( suitAnimIndex )") )
    __debugbreak();
  if ( lf->animationNumber )
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    v9 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7673, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    v10 = *(const PlayerAnimScript **)(v9 + 8 * v7);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7676, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
      __debugbreak();
    if ( (lf->animationNumber & 0xFFFFEFFF) >= v10->animationCount )
    {
      LODWORD(v14) = v10->animationCount;
      LODWORD(v13) = lf->animationNumber & 0xFFFFEFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7678, ASSERT_TYPE_ASSERT, "(unsigned)( (lf->animationNumber & ~(1<<(13-1))) ) < (unsigned)( scriptData->animationCount )", "(lf->animationNumber & ~ANIM_TOGGLEBIT) doesn't index scriptData->animationCount\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    XAnimIndexForCharacterInternal = BG_GetXAnimIndexForCharacterInternal(ci, v10, lf->animationNumber & 0xFFFFEFFF);
    Weight = XAnimGetWeight(pAnimTree, 0, XANIM_SUBTREE_DEFAULT, XAnimIndexForCharacterInternal);
    if ( *(float *)&Weight == 0.0 )
    {
      lf->animationTime = 150;
      lf->animationNumber = 0;
      lf->animation = NULL;
    }
  }
  if ( !lf->animationNumber && lf->animation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7692, ASSERT_TYPE_ASSERT, "(!lf->animation)", (const char *)&queryFormat, "!lf->animation") )
    __debugbreak();
}

/*
==============
BG_PlayerMP_AltOverrideWeaponAnim
==============
*/
void BG_PlayerMP_AltOverrideWeaponAnim(const BgWeaponMap *weaponMap, characterInfo_t *ci, const entityState_t *es, XModelNameMap *modelNameMap)
{
  BgStatic *ActiveStatics; 
  __int64 v8; 
  unsigned int number; 
  DObj *v10; 
  const DObj *v11; 
  XAnimTree *pXAnimTree; 
  const Weapon *WeaponForEntity; 
  int altOverrideXAnim; 
  bool v15; 
  unsigned int Animset; 
  PlayerASM_AnimSlot v17; 
  unsigned int v18; 
  unsigned int Anim; 
  float v20; 
  unsigned int v21; 
  int altOverrideXAnimParent; 
  float v23; 
  signed int WeaponPackageKnobNode; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5614, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5615, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5616, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  BG_CheckThread();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5622, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  v8 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5626, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( !*(_DWORD *)(v8 + 19544) )
  {
    number = es->number;
    v10 = ActiveStatics->IsClient(ActiveStatics) ? Com_GetClientDObj(number, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable)) : (DObj *)((__int64 (__fastcall *)(BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, number);
    v11 = v10;
    if ( v10 )
    {
      pXAnimTree = ci->pXAnimTree;
      WeaponForEntity = BG_GetWeaponForEntity(weaponMap, es);
      if ( WeaponForEntity->weaponIdx )
      {
        altOverrideXAnim = ci->weaponAnims.altOverrideXAnim;
        v15 = 0;
        if ( PlayerASM_IsEnabled() )
        {
          Animset = BG_PlayerASM_GetAnimset(ci);
          LOBYTE(v17) = 1;
          v18 = Animset;
          Anim = BG_PlayerASM_GetAnim(ci, v17);
          v15 = Anim && BG_PlayerASM_IsReloadAlias(Anim, v18);
        }
        if ( ci->weaponAnims.altOverrideADSOnly && (!BG_IsAdsEntity(es) || v15) || altOverrideXAnim <= 0 || !ci->hybridScopeState )
        {
          v23 = FLOAT_0_1;
          if ( PlayerASM_IsEnabled() )
            WeaponPackageKnobNode = BG_PlayerASM_FindWeaponPackageKnobNode(ci, PLAYER_CUSTOM_ANIM_HANDLER_ALT_OVERRIDE);
          else
            WeaponPackageKnobNode = *(unsigned __int16 *)(v8 + 90);
          if ( altOverrideXAnim > 0 )
            v23 = (float)BG_AltOverride3POutTime(WeaponForEntity, es->inAltWeaponMode, ci->dualWielding != 0) * 0.001;
          if ( WeaponPackageKnobNode > 0 )
          {
            XAnimSetGoalWeight(v11, 0, XANIM_SUBTREE_DEFAULT, WeaponPackageKnobNode, 0.0, v23, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
            XAnimClearChildGoalWeights(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, WeaponPackageKnobNode, v23, LINEAR);
          }
        }
        else
        {
          v20 = (float)BG_AltOverride3PInTime(WeaponForEntity, es->inAltWeaponMode, ci->dualWielding != 0) * 0.001;
          v21 = 0;
          if ( !PlayerASM_IsEnabled() )
            v21 = *(unsigned __int16 *)(v8 + 44);
          if ( PlayerASM_IsEnabled() )
            altOverrideXAnimParent = ci->weaponAnims.altOverrideXAnimParent;
          else
            altOverrideXAnimParent = *(unsigned __int16 *)(v8 + 90);
          XAnimSetCompleteGoalWeightRel(v11, 0, XANIM_SUBTREE_DEFAULT, altOverrideXAnimParent, v21, 1.0, v20, 1.0, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
          XAnimSetCompleteGoalWeightRel(v11, 0, XANIM_SUBTREE_DEFAULT, altOverrideXAnim, v21, 1.0, v20, 1.0, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
        }
      }
    }
  }
}

/*
==============
BG_PlayerMP_ClearFingerPoseAnims
==============
*/
void BG_PlayerMP_ClearFingerPoseAnims(DObj *obj, const characterInfo_t *ci, const BgAnimStatic *const bgameAnim, XAnimTree *pAnimTree, float blendTime)
{
  signed int WeaponPackageKnobNode; 
  signed int finger_pose_right; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5365, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !bgameAnim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5366, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( !pAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5367, ASSERT_TYPE_ASSERT, "(pAnimTree)", (const char *)&queryFormat, "pAnimTree") )
    __debugbreak();
  if ( blendTime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5368, ASSERT_TYPE_ASSERT, "(blendTime >= 0.f)", (const char *)&queryFormat, "blendTime >= 0.f") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() )
    WeaponPackageKnobNode = BG_PlayerASM_FindWeaponPackageKnobNode(ci, PLAYER_CUSTOM_ANIM_HANDLER_FINGERS_LEFT);
  else
    WeaponPackageKnobNode = bgameAnim->animScriptData.finger_pose_left;
  if ( PlayerASM_IsEnabled() )
    finger_pose_right = BG_PlayerASM_FindWeaponPackageKnobNode(ci, PLAYER_CUSTOM_ANIM_HANDLER_FINGERS_RIGHT);
  else
    finger_pose_right = bgameAnim->animScriptData.finger_pose_right;
  if ( WeaponPackageKnobNode > 0 )
  {
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, WeaponPackageKnobNode, 0.0, blendTime, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    XAnimClearChildGoalWeights(pAnimTree, 0, XANIM_SUBTREE_DEFAULT, WeaponPackageKnobNode, blendTime, LINEAR);
  }
  if ( finger_pose_right > 0 )
  {
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, finger_pose_right, 0.0, blendTime, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    XAnimClearChildGoalWeights(pAnimTree, 0, XANIM_SUBTREE_DEFAULT, finger_pose_right, blendTime, LINEAR);
  }
}

/*
==============
BG_PlayerMP_FingerPoseWeaponAnims
==============
*/
void BG_PlayerMP_FingerPoseWeaponAnims(const BgWeaponMap *weaponMap, characterInfo_t *ci, const entityState_t *es, XModelNameMap *modelNameMap)
{
  BgStatic *ActiveStatics; 
  const BgAnimStatic *v9; 
  unsigned int number; 
  DObj *ClientDObj; 
  DObj *v12; 
  const dvar_t *v13; 
  XAnimTree *pXAnimTree; 
  unsigned int Animset; 
  unsigned int Anim; 
  PlayerFingerPoseSlot FingerPoseSlot; 
  __int64 v18; 
  __int64 v19; 
  signed int v20; 
  BOOL requiresBlending; 
  signed int v22; 
  __int128 goalTime; 
  unsigned __int16 children; 
  const XAnimInfo *AnimInfo; 
  double v29; 
  float goalWeight; 
  double v31; 
  unsigned int codeAnim; 
  int leftFingerPoseXAnimParent; 
  int rightFingerPoseXAnimParent; 
  __int64 outWeights; 
  __int64 outAnimWeights; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5516, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5517, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5518, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  BG_CheckThread();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5524, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  v9 = ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5528, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  number = es->number;
  if ( ActiveStatics->IsClient(ActiveStatics) )
    ClientDObj = Com_GetClientDObj(number, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable));
  else
    ClientDObj = (DObj *)((__int64 (__fastcall *)(BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, number);
  v12 = ClientDObj;
  if ( ClientDObj )
  {
    v13 = DCONST_DVARBOOL_xanim_finger_pose_disable;
    pXAnimTree = ci->pXAnimTree;
    if ( !DCONST_DVARBOOL_xanim_finger_pose_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_finger_pose_disable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled || !BG_GetWeaponForEntity(weaponMap, es)->weaponIdx )
    {
      BG_PlayerMP_ClearFingerPoseAnims(v12, ci, v9, pXAnimTree, 0.0);
      return;
    }
    Animset = BG_PlayerASM_GetAnimset(ci);
    Anim = BG_PlayerASM_GetAnim(ci, MOVEMENT);
    if ( Anim && (FingerPoseSlot = BG_PlayerASM_GetFingerPoseSlot(Anim, Animset), FingerPoseSlot == PLAYER_FINGER_POSE_SLOT_SECONDARY) )
    {
      if ( ci->weaponAnims.leftFingerPoseXAnim[1] > 0 )
      {
        v18 = 5252i64;
        goto LABEL_31;
      }
    }
    else
    {
      FingerPoseSlot = PLAYER_FINGER_POSE_SLOT_PRIMARY;
    }
    v18 = 5248i64;
    if ( FingerPoseSlot == PLAYER_FINGER_POSE_SLOT_PRIMARY )
    {
LABEL_32:
      v19 = 5256i64;
LABEL_33:
      v20 = *(int *)((char *)&ci->entityNum + v19);
      requiresBlending = ci->weaponAnims.requiresBlending;
      v22 = *(int *)((char *)&ci->entityNum + v18);
      outWeights = 0i64;
      outAnimWeights = 0i64;
      _XMM0 = requiresBlending;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM0 = LODWORD(FLOAT_0_1);
      __asm { vblendvps xmm1, xmm0, xmm6, xmm2 }
      if ( pXAnimTree )
      {
        children = pXAnimTree->children;
        if ( children )
        {
          if ( v22 || v20 )
          {
            AnimInfo = GetAnimInfo(children);
            BG_CalcFingerPoseWeights(AnimInfo, (float *)&outWeights, (float *)&outAnimWeights);
          }
        }
      }
      v29 = I_fclamp(*(float *)&outWeights, 0.0, 1.0);
      goalWeight = *(float *)&v29;
      v31 = I_fclamp(*((float *)&outWeights + 1), 0.0, 1.0);
      BG_PlayerMP_ClearFingerPoseAnims(v12, ci, v9, pXAnimTree, *(float *)&goalTime);
      codeAnim = 0;
      if ( !PlayerASM_IsEnabled() )
        codeAnim = v9->animScriptData.codeAnim;
      if ( v22 > 0 && goalWeight > 0.0 )
      {
        if ( PlayerASM_IsEnabled() )
          leftFingerPoseXAnimParent = ci->weaponAnims.leftFingerPoseXAnimParent;
        else
          leftFingerPoseXAnimParent = v9->animScriptData.finger_pose_left;
        XAnimSetCompleteGoalWeightRel(v12, 0, XANIM_SUBTREE_DEFAULT, leftFingerPoseXAnimParent, codeAnim, goalWeight, *(float *)&goalTime, 1.0, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
        XAnimSetGoalWeight(v12, 0, XANIM_SUBTREE_DEFAULT, v22, 1.0, *(float *)&goalTime, 1.0, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
      }
      if ( v20 > 0 && *(float *)&v31 > 0.0 )
      {
        if ( PlayerASM_IsEnabled() )
          rightFingerPoseXAnimParent = ci->weaponAnims.rightFingerPoseXAnimParent;
        else
          rightFingerPoseXAnimParent = v9->animScriptData.finger_pose_right;
        XAnimSetCompleteGoalWeightRel(v12, 0, XANIM_SUBTREE_DEFAULT, rightFingerPoseXAnimParent, codeAnim, *(float *)&v31, *(float *)&goalTime, 1.0, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
        XAnimSetGoalWeight(v12, 0, XANIM_SUBTREE_DEFAULT, v20, 1.0, *(float *)&goalTime, 1.0, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
      }
      return;
    }
LABEL_31:
    v19 = 5260i64;
    if ( ci->weaponAnims.rightFingerPoseXAnim[1] > 0 )
      goto LABEL_33;
    goto LABEL_32;
  }
}

/*
==============
BG_PlayerMP_SetWeaponPackageAnims
==============
*/
void BG_PlayerMP_SetWeaponPackageAnims(const Weapon *r_heldWeapon, const Weapon *r_executionWeapon, characterInfo_t *ci, const entityState_t *es, const XAnimTree *tree)
{
  const XAnimTree *v9; 
  unsigned int eType; 
  char v11; 
  int v12; 
  bool inAltWeaponMode; 
  BgStatic *ActiveStatics; 
  const animScriptData_t *v15; 
  const dvar_t *v16; 
  int WeaponPackageAnim; 
  int v18; 
  int v19; 
  int v20; 
  int leftFingerPoseXAnimParent; 
  XAnimParts *v22; 
  __int64 v23; 
  XAnimParts *v24; 
  int WeaponXAnimIndex; 
  int v26; 
  int v27; 
  int v28; 
  int rightFingerPoseXAnimParent; 
  int v30; 
  bool v31; 
  XAnimParts *outFingerPoseLeftAnimSecondary; 
  XAnimParts *outFingerPoseRightAnim; 
  XAnimParts *outFingerPoseRightAnimSecondary; 
  XAnimParts *outAltOverrideAnim; 
  XAnimParts *parts; 

  outFingerPoseRightAnim = NULL;
  outFingerPoseRightAnimSecondary = NULL;
  parts = NULL;
  outFingerPoseLeftAnimSecondary = NULL;
  outAltOverrideAnim = NULL;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5399, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v9 = tree;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5400, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !es )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5401, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 595, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
  }
  eType = (unsigned __int16)es->eType;
  v11 = 0;
  if ( (unsigned __int16)eType <= 0x11u && (v12 = 131111, _bittest(&v12, eType)) && ((((unsigned __int16)es->lerp.u.player.playerFlags >> 5) & 3) == 1 || (((unsigned __int16)es->lerp.u.player.playerFlags >> 5) & 3) == 2) )
  {
    v11 = 1;
    inAltWeaponMode = 0;
  }
  else
  {
    inAltWeaponMode = es->inAltWeaponMode;
  }
  if ( ci->weaponAnimsNeedUpdate || inAltWeaponMode != ci->usingAltWeaponAnims )
  {
    ci->weaponAnimsNeedUpdate = 0;
    ci->usingAltWeaponAnims = inAltWeaponMode;
    if ( !v11 )
      r_executionWeapon = r_heldWeapon;
    *(_QWORD *)ci->weaponAnims.leftFingerPoseXAnim = 0i64;
    *(_QWORD *)ci->weaponAnims.rightFingerPoseXAnim = 0i64;
    *(_QWORD *)&ci->weaponAnims.altOverrideXAnim = 0i64;
    *(_QWORD *)&ci->weaponAnims.rightFingerPoseXAnimParent = 0i64;
    *(_DWORD *)&ci->weaponAnims.altOverrideADSOnly = 0;
    if ( BG_Get3PWeaponAnims(r_executionWeapon, ci->dualWielding != 0, inAltWeaponMode, &outFingerPoseRightAnim, &outFingerPoseRightAnimSecondary, &parts, &outFingerPoseLeftAnimSecondary, &outAltOverrideAnim) )
    {
      ActiveStatics = BgStatic::GetActiveStatics();
      if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5425, ASSERT_TYPE_ASSERT, "(bgameStatic)", (const char *)&queryFormat, "bgameStatic") )
        __debugbreak();
      v15 = (const animScriptData_t *)ActiveStatics->GetAnimStatics(ActiveStatics);
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5427, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      v16 = DCONST_DVARBOOL_xanim_finger_pose_disable;
      if ( !DCONST_DVARBOOL_xanim_finger_pose_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_finger_pose_disable") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( !v16->current.enabled )
      {
        if ( parts )
        {
          if ( PlayerASM_IsEnabled() )
            WeaponPackageAnim = BG_PlayerASM_FindWeaponPackageAnim(ci, v9, PLAYER_CUSTOM_ANIM_HANDLER_FINGERS_LEFT, parts, &ci->weaponAnims.leftFingerPoseXAnimParent);
          else
            WeaponPackageAnim = BG_FindWeaponXAnimIndex(v15, parts->name);
          ci->weaponAnims.leftFingerPoseXAnim[0] = WeaponPackageAnim;
        }
        if ( outFingerPoseLeftAnimSecondary )
        {
          LODWORD(tree) = -1;
          v18 = PlayerASM_IsEnabled() ? BG_PlayerASM_FindWeaponPackageAnim(ci, v9, PLAYER_CUSTOM_ANIM_HANDLER_FINGERS_LEFT, outFingerPoseLeftAnimSecondary, (int *)&tree) : BG_FindWeaponXAnimIndex(v15, outFingerPoseLeftAnimSecondary->name);
          v19 = v18;
          ci->weaponAnims.leftFingerPoseXAnim[1] = v18;
          v20 = (int)tree;
          if ( (_DWORD)tree != -1 )
          {
            if ( !v19 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5451, ASSERT_TYPE_ASSERT, "(ci->weaponAnims.leftFingerPoseXAnim[static_cast<uint>( PlayerFingerPoseSlot::PLAYER_FINGER_POSE_SLOT_SECONDARY )])", (const char *)&queryFormat, "ci->weaponAnims.leftFingerPoseXAnim[static_cast<uint>( PlayerFingerPoseSlot::PLAYER_FINGER_POSE_SLOT_SECONDARY )]") )
                __debugbreak();
              v20 = (int)tree;
            }
            leftFingerPoseXAnimParent = ci->weaponAnims.leftFingerPoseXAnimParent;
            if ( leftFingerPoseXAnimParent > 0 && leftFingerPoseXAnimParent != v20 )
            {
              v22 = parts;
              v23 = 6424i64;
              v24 = outFingerPoseLeftAnimSecondary;
LABEL_50:
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F06410, v23, v24->name, v22->name);
              return;
            }
            ci->weaponAnims.leftFingerPoseXAnimParent = v20;
          }
        }
        if ( outFingerPoseRightAnim )
        {
          if ( PlayerASM_IsEnabled() )
            WeaponXAnimIndex = BG_PlayerASM_FindWeaponPackageAnim(ci, v9, PLAYER_CUSTOM_ANIM_HANDLER_FINGERS_RIGHT, outFingerPoseRightAnim, &ci->weaponAnims.rightFingerPoseXAnimParent);
          else
            WeaponXAnimIndex = BG_FindWeaponXAnimIndex(v15, outFingerPoseRightAnim->name);
          ci->weaponAnims.rightFingerPoseXAnim[0] = WeaponXAnimIndex;
        }
        if ( outFingerPoseRightAnimSecondary )
        {
          LODWORD(tree) = -1;
          v26 = PlayerASM_IsEnabled() ? BG_PlayerASM_FindWeaponPackageAnim(ci, v9, PLAYER_CUSTOM_ANIM_HANDLER_FINGERS_RIGHT, outFingerPoseRightAnimSecondary, (int *)&tree) : BG_FindWeaponXAnimIndex(v15, outFingerPoseRightAnimSecondary->name);
          v27 = v26;
          ci->weaponAnims.rightFingerPoseXAnim[1] = v26;
          v28 = (int)tree;
          if ( (_DWORD)tree != -1 )
          {
            if ( !v27 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5481, ASSERT_TYPE_ASSERT, "(ci->weaponAnims.rightFingerPoseXAnim[static_cast<uint>( PlayerFingerPoseSlot::PLAYER_FINGER_POSE_SLOT_SECONDARY )])", (const char *)&queryFormat, "ci->weaponAnims.rightFingerPoseXAnim[static_cast<uint>( PlayerFingerPoseSlot::PLAYER_FINGER_POSE_SLOT_SECONDARY )]") )
                __debugbreak();
              v28 = (int)tree;
            }
            rightFingerPoseXAnimParent = ci->weaponAnims.rightFingerPoseXAnimParent;
            if ( rightFingerPoseXAnimParent > 0 && rightFingerPoseXAnimParent != v28 )
            {
              v22 = outFingerPoseRightAnim;
              v23 = 6525i64;
              v24 = outFingerPoseRightAnimSecondary;
              goto LABEL_50;
            }
            ci->weaponAnims.rightFingerPoseXAnimParent = v28;
          }
        }
      }
      if ( outAltOverrideAnim )
      {
        if ( PlayerASM_IsEnabled() )
          v30 = BG_PlayerASM_FindWeaponPackageAnim(ci, v9, PLAYER_CUSTOM_ANIM_HANDLER_ALT_OVERRIDE, outAltOverrideAnim, &ci->weaponAnims.altOverrideXAnimParent);
        else
          v30 = BG_FindWeaponXAnimIndex(v15, outAltOverrideAnim->name);
        v31 = ci->dualWielding == 0;
        ci->weaponAnims.altOverrideXAnim = v30;
        ci->weaponAnims.altOverrideADSOnly = BG_AltOverride3PIsADS(r_executionWeapon, inAltWeaponMode, !v31);
      }
    }
  }
}

/*
==============
BG_Player_DoControllersInternal
==============
*/
void BG_Player_DoControllersInternal(const entityState_t *es, const characterInfo_t *ci, clientControllers_t *info)
{
  LerpEntityState *p_lerp; 
  const dvar_t *v7; 
  float v8; 
  const dvar_t *v9; 
  unsigned int Animset; 
  unsigned int Anim; 
  const dvar_t *v12; 
  double ZAdjustment; 
  float fTorsoPitch; 
  float v17; 
  float v18; 
  float v19; 
  float fWaistPitch; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  __m128 v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  const dvar_t *v40; 
  bool IsPlayingVehicleOccupancyAnims; 
  float v42; 
  float v43; 
  float v44; 
  vec3_t trBase; 
  __int64 v46; 
  vec3_t v2; 
  vec3_t v1; 
  tmat33_t<vec3_t> axis; 

  v46 = -2i64;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8718, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  *(_QWORD *)info->hand_ik_local_pos[0].v = 0i64;
  *(_QWORD *)&info->hand_ik_local_pos[0].z = 0i64;
  *(_QWORD *)&info->hand_ik_local_pos[1].y = 0i64;
  *(_QWORD *)info->hand_ik_local_ang[0].v = 0i64;
  *(_QWORD *)&info->hand_ik_local_ang[0].z = 0i64;
  *(_QWORD *)&info->hand_ik_local_ang[1].y = 0i64;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2088, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  p_lerp = &es->lerp;
  if ( BG_IsTurretActiveFlags(&es->lerp.eFlags) )
  {
    if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2102, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( !BG_IsRemoteTurretActiveFlags(&es->lerp.eFlags) )
    {
      memset_0(info, 0, sizeof(clientControllers_t));
      info->hand_ik_local_pos[0].v[0] = ci->IKHandPos[0].v[0];
      info->hand_ik_local_pos[0].v[1] = ci->IKHandPos[0].v[1];
      info->hand_ik_local_pos[0].v[2] = ci->IKHandPos[0].v[2];
      info->hand_ik_local_pos[1].v[0] = ci->IKHandPos[1].v[0];
      info->hand_ik_local_pos[1].v[1] = ci->IKHandPos[1].v[1];
      info->hand_ik_local_pos[1].v[2] = ci->IKHandPos[1].v[2];
      info->hand_ik_local_ang[0].v[0] = ci->IKHandAng[0].v[0];
      info->hand_ik_local_ang[0].v[1] = ci->IKHandAng[0].v[1];
      info->hand_ik_local_ang[0].v[2] = ci->IKHandAng[0].v[2];
      info->hand_ik_local_ang[1].v[0] = ci->IKHandAng[1].v[0];
      info->hand_ik_local_ang[1].v[1] = ci->IKHandAng[1].v[1];
      info->hand_ik_local_ang[1].v[2] = ci->IKHandAng[1].v[2];
      return;
    }
  }
  IsPlayingVehicleOccupancyAnims = BG_IsPlayingVehicleOccupancyAnims(ci);
  if ( IsPlayingVehicleOccupancyAnims )
  {
    if ( ci->vehicleAnimation.hasSeatIK[0] )
    {
      info->hand_ik_local_pos[0].v[0] = ci->IKHandPos[0].v[0];
      info->hand_ik_local_pos[0].v[1] = ci->IKHandPos[0].v[1];
      info->hand_ik_local_pos[0].v[2] = ci->IKHandPos[0].v[2];
      info->hand_ik_local_ang[0].v[0] = ci->IKHandAng[0].v[0];
      info->hand_ik_local_ang[0].v[1] = ci->IKHandAng[0].v[1];
      info->hand_ik_local_ang[0].v[2] = ci->IKHandAng[0].v[2];
    }
    if ( ci->vehicleAnimation.hasSeatIK[1] )
    {
      info->hand_ik_local_pos[1].v[0] = ci->IKHandPos[1].v[0];
      info->hand_ik_local_pos[1].v[1] = ci->IKHandPos[1].v[1];
      info->hand_ik_local_pos[1].v[2] = ci->IKHandPos[1].v[2];
      info->hand_ik_local_ang[1].v[0] = ci->IKHandAng[1].v[0];
      info->hand_ik_local_ang[1].v[1] = ci->IKHandAng[1].v[1];
      info->hand_ik_local_ang[1].v[2] = ci->IKHandAng[1].v[2];
    }
  }
  if ( (ci->carryObjectFlags & 1) != 0 && ci->carryObjectIKEnabled )
  {
    info->hand_ik_local_pos[0].v[0] = ci->IKHandPos[0].v[0];
    info->hand_ik_local_pos[0].v[1] = ci->IKHandPos[0].v[1];
    info->hand_ik_local_pos[0].v[2] = ci->IKHandPos[0].v[2];
    info->hand_ik_local_ang[0].v[0] = ci->IKHandAng[0].v[0];
    info->hand_ik_local_ang[0].v[1] = ci->IKHandAng[0].v[1];
    info->hand_ik_local_ang[0].v[2] = ci->IKHandAng[0].v[2];
  }
  if ( ci->isScriptedSceneAnim )
  {
    memset_0(info, 0, sizeof(clientControllers_t));
    v7 = DCONST_DVARBOOL_anim_debugScrAnimatedCharController;
    if ( !DCONST_DVARBOOL_anim_debugScrAnimatedCharController && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "anim_debugScrAnimatedCharController") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled && Sys_IsMainThread() )
    {
      AnglesToAxis(&ci->playerAngles, &axis);
      Trajectory_GetTrBase(&es->lerp.pos, &trBase);
      CG_DebugAxis(&axis, &trBase, 5.0, 0, 1);
      memset(&trBase, 0, sizeof(trBase));
    }
    *(_QWORD *)info->tag_origin_angles.v = 0i64;
    info->tag_origin_angles.v[2] = 0.0;
    return;
  }
  if ( ci->entityNum != es->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8763, ASSERT_TYPE_ASSERT, "(ci->entityNum == es->clientNum)", (const char *)&queryFormat, "ci->entityNum == es->clientNum") )
    __debugbreak();
  v8 = 0.0;
  v2.v[0] = 0.0;
  v2.v[2] = 0.0;
  v1.v[0] = 0.0;
  v1.v[2] = 0.0;
  v2.v[1] = ci->legs.yawAngle;
  v1.v[1] = ci->torso.yawAngle;
  if ( (int)BG_GetConditionBit(ci, 3) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8772, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED") )
    __debugbreak();
  if ( (int)BG_GetConditionBit(ci, 3) >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8773, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES") )
    __debugbreak();
  v9 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
  if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
  {
    if ( PlayerASM_IsEnabled() )
    {
      Animset = BG_PlayerASM_GetAnimset(ci);
      Anim = BG_PlayerASM_GetAnim(ci, MOVEMENT);
      if ( BG_PlayerASM_IsLadderAlias(Anim, Animset) || BG_PlayerASM_IsLadderAimAlias(Anim, Animset) )
        goto LABEL_48;
    }
    else if ( (ci->clientConditions[3][0] & 0x1C000) != 0 )
    {
      goto LABEL_48;
    }
    v1.v[0] = ci->torso.pitchAngle;
  }
LABEL_48:
  AnglesSubtract(&v1, &v2, &v1);
  v1.v[2] = 0.0;
  v44 = 0.0;
  v12 = DCONST_DVARBOOL_bg_slope_worldmodel_code_z_offset;
  if ( !DCONST_DVARBOOL_bg_slope_worldmodel_code_z_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_slope_worldmodel_code_z_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    ZAdjustment = BG_SlopeWorldmodel_GetZAdjustment(ci->suitIndex, &ci->groundNormalInterpolated);
    v44 = *(float *)&ZAdjustment;
  }
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0x11u) )
  {
    _XMM1 = 0i64;
    __asm { vroundss xmm4, xmm1, xmm2, 1 }
    v2.v[1] = (float)((float)((float)(v2.v[1] - ci->playerAngles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
  }
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 4u) )
  {
    fTorsoPitch = ci->fTorsoPitch;
    v17 = v2.v[0] + fTorsoPitch;
    v2.v[0] = v2.v[0] + fTorsoPitch;
    v18 = 0.0;
    v19 = v1.v[2] * 0.30000001;
    v42 = v1.v[2] * 0.30000001;
    fWaistPitch = ci->fWaistPitch;
    if ( fTorsoPitch != 0.0 || fWaistPitch != 0.0 )
    {
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      v18 = (float)((float)((float)(fTorsoPitch - fWaistPitch) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
      v19 = v1.v[2] * 0.30000001;
    }
    v23 = 0.0;
    v24 = 0.0;
    v43 = v1.v[2] * 0.2;
    v25 = 0.0;
    v26 = 0.0;
    v27 = v1.v[2] * -0.2;
  }
  else
  {
    v28 = v1.v[2];
    if ( v1.v[2] == 0.0 )
    {
      v33 = 0.0;
      v34 = 0.0;
      v35 = 0.0;
    }
    else
    {
      _XMM1 = 0i64;
      __asm { vroundss xmm4, xmm1, xmm2, 1 }
      v31.m128_u64[1] = 0i64;
      *(double *)v31.m128_u64 = j___libm_sse2_sincosf4_();
      v32 = _mm_shuffle_ps(v31, v31, 1).m128_f32[0];
      v33 = (float)(_mm_shuffle_ps(v31, v31, 171).m128_f32[0] * v32) * v28;
      v34 = (float)(_mm_shuffle_ps(v31, v31, 14).m128_f32[0] * v32) * v28;
      v35 = v31.m128_f32[0] * v28;
    }
    v23 = v34 * 0.5;
    v18 = v34 * 0.5;
    v24 = v35 * 0.5;
    v19 = v33 * 0.5;
    v42 = v33 * 0.5;
    fTorsoPitch = ci->fTorsoPitch;
    fWaistPitch = ci->fWaistPitch;
    if ( fTorsoPitch != 0.0 || fWaistPitch != 0.0 )
    {
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      v18 = (float)((float)((float)((float)(fTorsoPitch - fWaistPitch) * 0.0027777778) - *(float *)&_XMM4) * 360.0) + v23;
      v19 = v33 * 0.5;
    }
    v43 = v19;
    v25 = v34 * -0.60000002;
    v26 = v35 * -0.60000002;
    v27 = v33 * -0.60000002;
    v17 = v2.v[0];
  }
  if ( fWaistPitch != 0.0 || fTorsoPitch != 0.0 )
  {
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm2, 1 }
    v8 = (float)((float)((float)(fWaistPitch - fTorsoPitch) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
    v19 = v42;
  }
  info->angles[0].v[0] = v18;
  info->angles[0].v[1] = v24;
  info->angles[0].v[2] = v19;
  info->angles[1].v[0] = v23;
  info->angles[1].v[1] = v24;
  info->angles[1].v[2] = v43;
  info->angles[2].v[0] = v25;
  info->angles[2].v[1] = v26;
  info->angles[2].v[2] = v27;
  info->angles[3].v[0] = v8;
  *(_QWORD *)&info->angles[3].y = 0i64;
  if ( IsPlayingVehicleOccupancyAnims )
  {
    *(_QWORD *)info->tag_origin_angles.v = 0i64;
    info->tag_origin_angles.v[2] = 0.0;
  }
  else
  {
    info->tag_origin_angles.v[0] = v17;
    info->tag_origin_angles.v[1] = v2.v[1];
    info->tag_origin_angles.v[2] = v2.v[2];
  }
  *(_QWORD *)info->tag_origin_offset.v = 0i64;
  info->tag_origin_offset.v[2] = v44;
  v40 = DCONST_DVARBOOL_stepBlendActive;
  if ( !DCONST_DVARBOOL_stepBlendActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stepBlendActive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  if ( v40->current.enabled )
    info->tag_origin_offset.v[2] = ci->heightOffset + info->tag_origin_offset.v[2];
}

/*
==============
BG_Player_DoControllersScripted
==============
*/
void BG_Player_DoControllersScripted(const entityState_t *es, const characterInfo_t *ci, clientControllers_t *info)
{
  const dvar_t *v6; 
  vec3_t trBase; 
  __int64 v8; 
  tmat33_t<vec3_t> axis; 

  v8 = -2i64;
  memset_0(info, 0, sizeof(clientControllers_t));
  v6 = DCONST_DVARBOOL_anim_debugScrAnimatedCharController;
  if ( !DCONST_DVARBOOL_anim_debugScrAnimatedCharController && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "anim_debugScrAnimatedCharController") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && Sys_IsMainThread() )
  {
    AnglesToAxis(&ci->playerAngles, &axis);
    Trajectory_GetTrBase(&es->lerp.pos, &trBase);
    CG_DebugAxis(&axis, &trBase, 5.0, 0, 1);
    memset(&trBase, 0, sizeof(trBase));
  }
  *(_QWORD *)info->tag_origin_angles.v = 0i64;
  info->tag_origin_angles.v[2] = 0.0;
}

/*
==============
BG_Player_DoControllersSetup
==============
*/
void BG_Player_DoControllersSetup(const entityState_t *es, characterInfo_t *ci, int frametime)
{
  float v6; 
  float v7; 
  __int64 v8; 
  clientControllers_t *p_control; 
  unsigned int v10; 
  float *v11; 
  bool v12; 
  float v13; 
  float v14; 
  float v15; 
  const dvar_t *v16; 
  vec3_t *p_tag_origin_offset; 
  float v18; 
  float v19; 
  __int64 v20; 
  __int64 v21; 
  clientControllers_t info; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9019, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  BG_Player_DoControllersInternal(es, ci, &info);
  v6 = (float)frametime;
  v7 = (float)frametime * 0.36000001;
  v8 = 4i64;
  p_control = &ci->control;
  do
  {
    v10 = 0;
    v11 = (float *)p_control;
    v12 = 1;
    do
    {
      if ( !v12 )
      {
        LODWORD(v21) = 3;
        LODWORD(v20) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
        LODWORD(v21) = 3;
        LODWORD(v20) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v13 = *(float *)((char *)v11 + (char *)&info - (char *)ci - 2812);
      v14 = v13 - *v11;
      if ( v14 <= v7 )
      {
        if ( v14 >= COERCE_FLOAT(LODWORD(v7) ^ _xmm) )
        {
          if ( v10 >= 3 )
          {
            LODWORD(v21) = 3;
            LODWORD(v20) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v21) )
              __debugbreak();
            LODWORD(v21) = 3;
            LODWORD(v20) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v21) )
              __debugbreak();
          }
          *v11 = v13;
        }
        else
        {
          if ( v10 >= 3 )
          {
            LODWORD(v21) = 3;
            LODWORD(v20) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v21) )
              __debugbreak();
          }
          *v11 = *v11 - v7;
        }
      }
      else
      {
        if ( v10 >= 3 )
        {
          LODWORD(v21) = 3;
          LODWORD(v20) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        *v11 = v7 + *v11;
      }
      ++v10;
      ++v11;
      v12 = v10 < 3;
    }
    while ( (int)v10 < 3 );
    p_control = (clientControllers_t *)((char *)p_control + 12);
    --v8;
  }
  while ( v8 );
  v15 = info.tag_origin_angles.v[1];
  ci->control.tag_origin_angles.v[0] = info.tag_origin_angles.v[0];
  ci->control.tag_origin_angles.v[2] = info.tag_origin_angles.v[2];
  ci->control.tag_origin_angles.v[1] = v15;
  v16 = DCONST_DVARBOOL_stepBlendActive;
  if ( !DCONST_DVARBOOL_stepBlendActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stepBlendActive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  p_tag_origin_offset = &ci->control.tag_origin_offset;
  v18 = v6 * 0.1;
  if ( v16->current.enabled )
  {
    v19 = ci->control.tag_origin_offset.v[2];
    info.tag_origin_offset.v[2] = info.tag_origin_offset.v[2] - ci->heightOffset;
    ci->control.tag_origin_offset.v[2] = v19 - ci->heightOffsetInOriginOffset;
    BG_LerpOffset(&info.tag_origin_offset, v18, p_tag_origin_offset);
    ci->control.tag_origin_offset.v[2] = ci->control.tag_origin_offset.v[2] + ci->heightOffset;
    ci->heightOffsetInOriginOffset = ci->heightOffset;
  }
  else
  {
    BG_LerpOffset(&info.tag_origin_offset, v18, p_tag_origin_offset);
  }
  *(__m256i *)ci->control.hand_ik_local_pos[0].v = *(__m256i *)info.hand_ik_local_pos[0].v;
  *(_OWORD *)&ci->control.hand_ik_local_ang[0].z = *(_OWORD *)&info.hand_ik_local_ang[0].z;
}

/*
==============
BG_Player_SetPlayerInfo
==============
*/
void BG_Player_SetPlayerInfo(const DObj *obj, clientControllers_t *control, CEntPlayerInfo *info)
{
  unsigned __int8 *tag; 
  __int64 v7; 
  unsigned __int8 *v8; 
  scr_string_t **v9; 
  int modelIndex; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8930, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !control && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8931, ASSERT_TYPE_ASSERT, "(control)", (const char *)&queryFormat, "control") )
    __debugbreak();
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8932, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  tag = info->tag;
  v7 = 4i64;
  v8 = info->tag;
  v9 = controller_names;
  do
  {
    *tag = -2;
    DObjGetBoneIndexInternal_18(obj, **v9, v8++, &modelIndex);
    ++tag;
    ++v9;
    --v7;
  }
  while ( v7 );
  info->IKHandBone[0] = -2;
  DObjGetBoneIndexInternal_18(obj, scr_const.tag_ik_target_left, info->IKHandBone, &modelIndex);
  info->IKHandBone[1] = -2;
  DObjGetBoneIndexInternal_18(obj, scr_const.tag_ik_target_right, &info->IKHandBone[1], &modelIndex);
  info->animCtrl = 1;
  info->control = control;
}

/*
==============
BG_RunLerpFrameRate
==============
*/
void BG_RunLerpFrameRate(characterInfo_t *ci, lerpFrame_t *lf, int newAnimation, const entityState_t *es, const vec3_t *movingPlatformOrigin, const vec3_t *movingPlatformAngles)
{
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  const PlayerAnimScript *v15; 
  XAnimTree *pXAnimTree; 
  int v17; 
  int v18; 
  int v19; 
  signed int v20; 
  PlayerAnimEntry *animations; 
  PlayerAnimEntry *v22; 
  BOOL v23; 
  char v24; 
  bool SyncedAnimTime; 
  int v26; 
  __int64 v27; 
  int oldFrameSnapshotTime; 
  bool v29; 
  const BgAnimStatic *v30; 
  int latestSnapshotTime; 
  unsigned __int16 slowAnimIndex; 
  __int128 v33; 
  const PlayerAnimEntry *v34; 
  float AnimEntryMoveSpeed; 
  float v36; 
  int v39; 
  unsigned int v40; 
  XAnimTree *v41; 
  unsigned int v42; 
  XAnim_s *anims; 
  unsigned int v44; 
  double Time; 
  float v46; 
  double Length; 
  double v48; 
  int XAnimIndex; 
  vec3_t *v50; 
  entityState_t *v51; 
  int animationNumber; 
  unsigned __int64 v53; 
  unsigned int v54; 
  int v55; 
  int v56; 
  unsigned int v57; 
  int v58; 
  int v59; 
  unsigned int animationCount; 
  __int64 v61; 
  __int128 animSpeedScale_low; 
  __int128 v65; 
  float v66; 
  unsigned int *movetype; 
  unsigned int *v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  const DObj *DObj; 
  int anim_user; 
  unsigned __int8 v75; 
  unsigned int v76; 
  unsigned int notifyType; 
  unsigned __int8 v78; 
  float v79; 
  float v80; 
  XAnimTree *v83; 
  float animSpeedScale; 
  unsigned int XAnimIndexForCharacterInternal; 
  float v86; 
  unsigned int v87; 
  const dvar_t *v88; 
  unsigned int v89; 
  double v90; 
  double v91; 
  unsigned int v92; 
  const XAnim_s *v93; 
  unsigned int v94; 
  unsigned int v95; 
  double v96; 
  float v97; 
  double v98; 
  double v99; 
  unsigned int v100; 
  double v101; 
  const char *v102; 
  char *fmt; 
  __int64 goalTime; 
  __int64 rate; 
  unsigned __int8 v106; 
  SuitAnimType suitAnimIndex; 
  int chosenAnimIndex; 
  XAnimTree *tree; 
  float animTime; 
  entityState_t *v111; 
  vec3_t *v112; 
  int v113; 
  const BgAnimStatic *v114; 
  vec3_t *v115; 
  BgStatic *bgStatic; 
  unsigned __int64 v117; 
  vec3_t outAngleDela; 
  __int128 v119; 
  __int128 v120; 
  __int128 v121; 
  __int128 v122; 
  __int128 v123; 

  v115 = (vec3_t *)movingPlatformOrigin;
  v112 = (vec3_t *)movingPlatformAngles;
  v111 = (entityState_t *)es;
  BG_CheckThread();
  bgStatic = BgStatic::GetActiveStatics();
  v114 = bgStatic->GetAnimStatics(bgStatic);
  if ( !v114 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6965, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  suitAnimIndex = BG_GetSuitAnimIndexFromCharacter(ci);
  v15 = v114->animScriptData.suitScript[suitAnimIndex];
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6969, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
    __debugbreak();
  pXAnimTree = ci->pXAnimTree;
  v17 = newAnimation & 0xFFFFEFFF;
  v106 = 0;
  tree = pXAnimTree;
  animTime = FLOAT_N1_0;
  if ( !pXAnimTree || (v18 = 444, pXAnimTree->owner[0]) )
    v18 = 445;
  Profile_Begin(v18);
  if ( lf == &ci->legs )
  {
    if ( v17 >= v15->animationCount )
    {
      LODWORD(goalTime) = newAnimation & 0xFFFFEFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6992, ASSERT_TYPE_ASSERT, "(unsigned)( newAnimationIndex ) < (unsigned)( scriptData->animationCount )", "newAnimationIndex doesn't index scriptData->animationCount\n\t%i not in [0, %i)", goalTime, v15->animationCount) )
        __debugbreak();
    }
    if ( (v15->animations[v17].flags & 0x80001) == 0x80000i64 )
    {
      v106 = 1;
      BG_DetermineTwitchAnimAndTime(ci, es, v17, &chosenAnimIndex, &animTime);
      v19 = chosenAnimIndex;
      if ( chosenAnimIndex != v17 )
      {
        if ( (chosenAnimIndex & 0x1000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7008, ASSERT_TYPE_ASSERT, "(!(twitchOrIdleAnimIndex & (1<<(13-1))))", (const char *)&queryFormat, "!(twitchOrIdleAnimIndex & ANIM_TOGGLEBIT)") )
          __debugbreak();
        newAnimation = v19 | ~(_WORD)newAnimation & 0x1000;
      }
    }
  }
  else if ( v15->animations[v17].turns && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7016, ASSERT_TYPE_ASSERT, "(!scriptData->animations[newAnimationIndex].turns)", (const char *)&queryFormat, "!scriptData->animations[newAnimationIndex].turns") )
  {
    __debugbreak();
  }
  v20 = newAnimation & 0xFFFFEFFF;
  if ( (newAnimation & 0xFFFFEFFF) >= v15->animationCount )
  {
    LODWORD(rate) = v15->animationCount;
    LODWORD(goalTime) = newAnimation & 0xFFFFEFFF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7021, ASSERT_TYPE_ASSERT, "(unsigned)( newAnimationIndex ) < (unsigned)( scriptData->animationCount )", "newAnimationIndex doesn't index scriptData->animationCount\n\t%i not in [0, %i)", goalTime, rate) )
      __debugbreak();
  }
  animations = v15->animations;
  v117 = 104i64 * v20;
  v22 = &animations[v117 / 0x68];
  v23 = v22 && SLOBYTE(v22->flags) < 0;
  if ( newAnimation == lf->animationNumber && (lf->animation || !v20) )
  {
    v24 = 0;
  }
  else
  {
    v24 = 1;
    BG_SetNewAnimation(ci, lf, newAnimation, v111);
  }
  if ( v20 )
  {
    v123 = v6;
    v122 = v7;
    v119 = v10;
    SyncedAnimTime = BG_GameInterface_InteractionAnims_GetSyncedAnimTime(v22, ci, lf, v111, &animTime);
    v26 = v106;
    if ( SyncedAnimTime )
      v26 = 1;
    v113 = v26;
    BGMovingPlatformPlayerAnim::PlayerAnimApplyRotation(&lf->movingPlatformPlayerAnim, v111, v112, lf, &outAngleDela);
    v27 = v22->flags & 0x2000001;
    if ( v27 == 1 || BG_Animation_GetAnimEntryMoveSpeed(v22) != 0.0 )
    {
      oldFrameSnapshotTime = lf->oldFrameSnapshotTime;
      if ( oldFrameSnapshotTime )
      {
        if ( !v23 )
        {
          v29 = v24 && v22->slowAnimIndex;
          v30 = v114;
          latestSnapshotTime = v114->latestSnapshotTime;
          if ( v27 == 1 )
          {
            if ( latestSnapshotTime != oldFrameSnapshotTime )
            {
              XAnimIndex = BG_GetXAnimIndex(v15, v20);
              lf->animSpeedScale = BG_CalculateNodeAnimRate(ci, XAnimIndex, 1, NULL);
            }
          }
          else if ( latestSnapshotTime != oldFrameSnapshotTime || v29 )
          {
            slowAnimIndex = v22->slowAnimIndex;
            v33 = 0i64;
            *(float *)&v33 = (float)ci->speed;
            if ( slowAnimIndex )
            {
              if ( (slowAnimIndex & 0xEFFFu) >= v15->animationCount )
              {
                LODWORD(rate) = v15->animationCount;
                LODWORD(goalTime) = slowAnimIndex & 0xEFFF;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7062, ASSERT_TYPE_ASSERT, "(unsigned)( (anim->slowAnimIndex & ~(1<<(13-1))) ) < (unsigned)( scriptData->animationCount )", "(anim->slowAnimIndex & ~ANIM_TOGGLEBIT) doesn't index scriptData->animationCount\n\t%i not in [0, %i)", goalTime, rate) )
                  __debugbreak();
              }
              v34 = &v15->animations[v22->slowAnimIndex & 0xEFFF];
              if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7064, ASSERT_TYPE_ASSERT, "(slowAnim)", (const char *)&queryFormat, "slowAnim") )
                __debugbreak();
              AnimEntryMoveSpeed = BG_Animation_GetAnimEntryMoveSpeed(v22);
              v36 = BG_Animation_GetAnimEntryMoveSpeed(v34);
              if ( (float)(AnimEntryMoveSpeed - v36) == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7068, ASSERT_TYPE_ASSERT, "((animMoveSpeed - slowAnimMoveSpeed) != 0.0f)", "%s\n\tInvalid speed scale calculated from %f to %f\n", "(animMoveSpeed - slowAnimMoveSpeed) != 0.0f", AnimEntryMoveSpeed, v36) )
                __debugbreak();
              *(float *)&v33 = (float)(*(float *)&v33 - v36) / (float)(AnimEntryMoveSpeed - v36);
              _XMM1 = v33;
              lf->animSpeedScale = *(float *)&v33;
              __asm { vmaxss  xmm0, xmm1, xmm13 }
              lf->animSpeedScale = *(float *)&_XMM0;
              v39 = v30->latestSnapshotTime;
            }
            else
            {
              v40 = BG_GetXAnimIndex(v15, v20);
              v41 = tree;
              v42 = v40;
              anims = tree->anims;
              v44 = BG_GetXAnimIndex(v15, v20);
              Time = XAnimGetTime(v41, 0, XANIM_SUBTREE_DEFAULT, v44);
              v46 = *(float *)&Time;
              Length = XAnimGetLength(anims, v42);
              v48 = BG_CalculateAnimRateFromCharacterSpeed(*(float *)&v33, v20, *(float *)&Length * v46, suitAnimIndex);
              lf->animSpeedScale = *(float *)&v48;
              v39 = v30->latestSnapshotTime;
            }
LABEL_69:
            v50 = v115;
            v51 = v111;
            lf->oldFrameSnapshotTime = v39;
            BGMovingPlatformPlayerAnim::PlayerAnimCachePosition(&lf->movingPlatformPlayerAnim, v51, lf, v50, v112);
          }
          if ( (lf->animationNumber & 0xFFFFEFFF) >= v15->animationCount )
          {
            LODWORD(rate) = v15->animationCount;
            LODWORD(goalTime) = lf->animationNumber & 0xFFFFEFFF;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7106, ASSERT_TYPE_ASSERT, "(unsigned)( (lf->animationNumber & ~(1<<(13-1))) ) < (unsigned)( scriptData->animationCount )", "(lf->animationNumber & ~ANIM_TOGGLEBIT) doesn't index scriptData->animationCount\n\t%i not in [0, %i)", goalTime, rate) )
              __debugbreak();
          }
          animationNumber = lf->animationNumber;
          v121 = v8;
          v120 = v9;
          v53 = (unsigned __int64)&v15->animations[animationNumber & 0xFFFFFFFFFFFFEFFFui64];
          if ( animationNumber )
          {
            v54 = animationNumber & 0xFFFFEFFF;
            if ( !*(_WORD *)(v53 + 90) )
            {
              animSpeedScale = lf->animSpeedScale;
              XAnimIndexForCharacterInternal = BG_GetXAnimIndexForCharacterInternal(ci, v15, v54);
              v83 = tree;
              XAnimSetAnimRate(tree, 0, XANIM_SUBTREE_DEFAULT, XAnimIndexForCharacterInternal, animSpeedScale);
LABEL_111:
              if ( (_BYTE)v113 )
              {
                v86 = animTime;
                v87 = BG_GetXAnimIndexForCharacterInternal(ci, v15, lf->animationNumber & 0xFFFFEFFF);
                XAnimSetTime(v83, 0, XANIM_SUBTREE_DEFAULT, v87, v86);
              }
              v88 = DVARINT_xanim_debug;
              if ( !DVARINT_xanim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debug") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v88);
              if ( v88->current.integer >= 3 && Sys_IsMainThread() && lf == &ci->legs )
              {
                v89 = BG_GetXAnimIndex(v15, v20);
                v90 = XAnimGetRate(v83, 0, XANIM_SUBTREE_DEFAULT, v89);
                v91 = *(float *)&v90;
                v92 = BG_GetXAnimIndex(v15, v20);
                v93 = v83->anims;
                v94 = v92;
                v95 = BG_GetXAnimIndex(v15, v20);
                v96 = XAnimGetTime(v83, 0, XANIM_SUBTREE_DEFAULT, v95);
                v97 = *(float *)&v96;
                v98 = XAnimGetLength(v93, v94);
                v99 = (float)(*(float *)&v98 * v97);
                v100 = BG_GetXAnimIndex(v15, v20);
                v101 = XAnimGetTime(v83, 0, XANIM_SUBTREE_DEFAULT, v100);
                v102 = SL_ConvertToString(v15->animations[v117 / 0x68].animName);
                LODWORD(fmt) = v111->number;
                Com_Printf(19, "%s:%i:e%i: %s (%.3f) [%.2fs] r%.2f\n", "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7209i64, fmt, v102, *(float *)&v101, v99, v91);
              }
              goto LABEL_120;
            }
            v55 = BG_GetXAnimIndexForCharacterInternal(ci, v15, v54);
            v56 = *(unsigned __int16 *)(v53 + 90);
            LODWORD(v112) = v55;
            v57 = v55;
            v58 = BG_GetXAnimIndexForCharacterInternal(ci, v15, v56);
            v59 = *(unsigned __int16 *)(v53 + 90);
            animationCount = v15->animationCount;
            chosenAnimIndex = v58;
            if ( (v59 & 0xEFFFu) >= animationCount )
            {
              LODWORD(rate) = animationCount;
              LODWORD(goalTime) = v59 & 0xFFFFEFFF;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7122, ASSERT_TYPE_ASSERT, "(unsigned)( (currentAnim->slowAnimIndex & ~(1<<(13-1))) ) < (unsigned)( scriptData->animationCount )", "(currentAnim->slowAnimIndex & ~ANIM_TOGGLEBIT) doesn't index scriptData->animationCount\n\t%i not in [0, %i)", goalTime, rate) )
                __debugbreak();
            }
            v61 = (__int64)&v15->animations[*(_WORD *)(v53 + 90) & 0xEFFF];
            if ( !v61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7124, ASSERT_TYPE_ASSERT, "(slowAnim)", (const char *)&queryFormat, "slowAnim") )
              __debugbreak();
            animSpeedScale_low = LODWORD(lf->animSpeedScale);
            *(double *)&animSpeedScale_low = I_fclamp(*(float *)&animSpeedScale_low, 0.0, 1.0);
            _XMM10 = animSpeedScale_low;
            v65 = LODWORD(FLOAT_1_0);
            *(float *)&v65 = 1.0 - *(float *)&animSpeedScale_low;
            _XMM11 = v65;
            *(double *)&animSpeedScale_low = XAnimGetTime(tree, 0, XANIM_SUBTREE_DEFAULT, v57);
            v66 = *(float *)&animSpeedScale_low;
            if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5168, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
              __debugbreak();
            movetype = BG_AnimationMP_GetAnimationForIndex(v54, suitAnimIndex)->movetype;
            if ( Com_BitCheckAssert(movetype, 10, 32) || Com_BitCheckAssert(movetype, 11, 32) )
              goto LABEL_95;
            if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5144, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
              __debugbreak();
            v68 = BG_AnimationMP_GetAnimationForIndex(v54, suitAnimIndex)->movetype;
            if ( Com_BitCheckAssert(v68, 18, 32) || Com_BitCheckAssert(v68, 19, 32) )
            {
LABEL_95:
              v71 = (float)*(unsigned __int16 *)(v61 + 84);
              v72 = 1.0 / (float)((float)((float)*(unsigned __int16 *)(v53 + 84) * *(float *)&_XMM10) + (float)(v71 * *(float *)&v65));
              v70 = v72 * (float)*(unsigned __int16 *)(v53 + 84);
              v69 = v72 * v71;
            }
            else
            {
              if ( !*(_WORD *)(v53 + 84) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7136, ASSERT_TYPE_ASSERT, "(currentAnim->duration != 0)", (const char *)&queryFormat, "currentAnim->duration != 0") )
                __debugbreak();
              v69 = (float)*(unsigned __int16 *)(v61 + 84) / (float)*(unsigned __int16 *)(v53 + 84);
              v70 = FLOAT_1_0;
            }
            DObj = BG_GetDObj(bgStatic, v111->number);
            if ( DObj )
            {
              anim_user = v114->anim_user;
              if ( *(float *)&_XMM10 <= *(float *)&v65 )
              {
                if ( anim_user )
                  v78 = *(_BYTE *)(v61 + 93);
                else
                  v78 = *(_BYTE *)(v61 + 94);
                v76 = v78;
                notifyType = 0;
              }
              else
              {
                if ( anim_user )
                  v75 = *(_BYTE *)(v53 + 93);
                else
                  v75 = *(_BYTE *)(v53 + 94);
                v76 = 0;
                notifyType = v75;
              }
              v79 = lf->animSpeedScale;
              v80 = (float)lf->animationTime * 0.001;
              if ( v79 > 1.0 )
              {
                v70 = v70 * v79;
                v69 = v69 * v79;
              }
              XAnimSetAnimRate(tree, 0, XANIM_SUBTREE_DEFAULT, (unsigned int)v112, v70);
              XAnimSetAnimRate(tree, 0, XANIM_SUBTREE_DEFAULT, chosenAnimIndex, v69);
              __asm { vmaxss  xmm0, xmm10, xmm13 }
              XAnimSetGoalWeight(DObj, 0, XANIM_SUBTREE_DEFAULT, (unsigned int)v112, *(float *)&_XMM0, v80, v70, (scr_string_t)0, notifyType, 0, LINEAR, NULL);
              __asm { vmaxss  xmm0, xmm11, xmm13 }
              XAnimSetGoalWeight(DObj, 0, XANIM_SUBTREE_DEFAULT, chosenAnimIndex, *(float *)&_XMM0, v80, v69, (scr_string_t)0, v76, 0, LINEAR, NULL);
              v83 = tree;
              XAnimSetTime(tree, 0, XANIM_SUBTREE_DEFAULT, chosenAnimIndex, v66);
              goto LABEL_111;
            }
          }
          v83 = tree;
          goto LABEL_111;
        }
      }
    }
    lf->animSpeedScale = 1.0;
    if ( BG_IsFastDurationPerkActive(v20, suitAnimIndex, &ci->perks) )
    {
      if ( !v22->fastDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7096, ASSERT_TYPE_ASSERT, "(anim->fastDuration > 0)", (const char *)&queryFormat, "anim->fastDuration > 0") )
        __debugbreak();
      lf->animSpeedScale = (float)v22->duration / (float)(v22->fastDuration + 50);
    }
    v39 = v114->latestSnapshotTime;
    goto LABEL_69;
  }
LABEL_120:
  Profile_EndInternal(NULL);
}

/*
==============
BG_ScriptedAsmDebugPrint
==============
*/
void BG_ScriptedAsmDebugPrint(const char *message, int time, const characterInfo_t *const ci, const clientState_t *const cs)
{
  const dvar_t *v4; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  v4 = DCONST_DVARBOOL_scriptedAsmDebug;
  if ( !DCONST_DVARBOOL_scriptedAsmDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptedAsmDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    if ( ci )
    {
      LODWORD(v11) = time;
      LODWORD(v10) = ci->playerASM_scripted_anim_start_time;
      LODWORD(v9) = ci->entityNum;
      Com_Printf(0, "Scripted ASM: %s: (%p) %d %d %d\n", message, ci, v9, v10, v11);
    }
    else if ( cs )
    {
      LODWORD(v11) = time;
      LODWORD(v10) = cs->playerASM_scripted_anim_start_time;
      LODWORD(v9) = cs->clientIndex;
      Com_Printf(0, "Scripted ASM (C): %s: (%p) %d %d %d\n", message, cs, v9, v10, v11);
    }
    else
    {
      Com_Printf(0, "Scripted ASM (N): %s %d\n", message, (unsigned int)time);
    }
  }
}

/*
==============
BG_SetCondition
==============
*/
void BG_SetCondition(characterInfo_t *ci, int condition, const unsigned int *value)
{
  __int64 v3; 
  int ConditionValue; 
  const char *ConditionString; 
  __int64 v8; 

  v3 = condition;
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3793, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3794, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  BG_CheckThread();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3800, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x3F )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3801, ASSERT_TYPE_ASSERT, "(unsigned)( condition ) < (unsigned)( NUM_ANIM_CONDITIONS )", "condition doesn't index NUM_ANIM_CONDITIONS\n\t%i not in [0, %i)", v8, 63) )
      __debugbreak();
  }
  if ( !BG_CheckEqualBits(ci->clientConditions[v3], value) && G_IsServerGameSystem(ci->entityNum) )
  {
    if ( BG_GetAnimConditionType(v3) )
      ConditionValue = BG_GetConditionValue(ci, v3);
    else
      ConditionValue = BG_GetConditionBit(ci, v3);
    ConditionString = BG_GetConditionString(v3, ConditionValue);
    Com_Printf(19, "condition: %s: %s\n", s_animConditionsStr[v3].string, ConditionString);
  }
  if ( PlayerASM_IsEnabled() && memcmp_0(ci->clientConditions[v3], value, 0x20ui64) )
    Com_BitSetAssert(ci->dirtyConditions, v3, 32);
  *(__m256i *)&ci->clientConditions[v3][0] = *(__m256i *)value;
}

/*
==============
BG_SetConditionBit
==============
*/
void BG_SetConditionBit(characterInfo_t *ci, int condition, int value)
{
  __int64 v4; 
  __int64 v5; 
  __m256i *v6; 
  int v7; 
  __int64 v8; 
  const char *ConditionString; 
  __int64 v10; 
  __int64 v11; 
  __m256i Buf2; 

  v4 = value;
  v5 = condition;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3834, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  BG_CheckThread();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3839, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( BG_GetAnimConditionType(v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3840, ASSERT_TYPE_ASSERT, "(BG_GetAnimConditionType( condition ) == ANIM_CONDTYPE_BITFLAGS)", (const char *)&queryFormat, "BG_GetAnimConditionType( condition ) == ANIM_CONDTYPE_BITFLAGS") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x100 )
  {
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3841, ASSERT_TYPE_ASSERT, "(unsigned)( value ) < (unsigned)( (8 * (8 * sizeof( unsigned int ))) )", "value doesn't index ANIMTYPES_PER_CONDITION\n\t%i not in [0, %i)", v10, 256) )
      __debugbreak();
  }
  v6 = (__m256i *)ci->clientConditions[v5];
  if ( (characterInfo_t *)((char *)ci + 32 * v5) == (characterInfo_t *)-2932i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v7 = 1 << (v4 & 0x1F);
  v8 = v4 >> 5;
  if ( (v7 & v6->m256i_i32[v8]) == 0 && G_IsServerGameSystem(ci->entityNum) )
  {
    ConditionString = BG_GetConditionString(v5, v4);
    Com_Printf(19, "condition: %s: %s\n", s_animConditionsStr[v5].string, ConditionString);
  }
  memset(&Buf2, 0, sizeof(Buf2));
  if ( (unsigned int)v4 >= 0x100 )
  {
    LODWORD(v11) = 256;
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  Buf2.m256i_i32[v8] |= v7;
  if ( PlayerASM_IsEnabled() && memcmp_0(ci->clientConditions[v5], &Buf2, 0x20ui64) )
    Com_BitSetAssert(ci->dirtyConditions, v5, 32);
  *v6 = Buf2;
}

/*
==============
BG_SetConditionValue
==============
*/
void BG_SetConditionValue(characterInfo_t *ci, int condition, unsigned __int64 value)
{
  __int64 v4; 
  unsigned int *v6; 
  int ConditionValue; 
  const char *ConditionString; 
  __int64 v9; 

  v4 = condition;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3747, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  BG_CheckThread();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3753, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x3F )
  {
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3754, ASSERT_TYPE_ASSERT, "(unsigned)( condition ) < (unsigned)( NUM_ANIM_CONDITIONS )", "condition doesn't index NUM_ANIM_CONDITIONS\n\t%i not in [0, %i)", v9, 63) )
      __debugbreak();
  }
  v6 = ci->clientConditions[v4];
  if ( __PAIR64__(ci->clientConditions[v4 + 1][0], *v6) != value && G_IsServerGameSystem(ci->entityNum) )
  {
    if ( BG_GetAnimConditionType(v4) )
      ConditionValue = BG_GetConditionValue(ci, v4);
    else
      ConditionValue = BG_GetConditionBit(ci, v4);
    ConditionString = BG_GetConditionString(v4, ConditionValue);
    Com_Printf(19, "condition: %s: %s\n", s_animConditionsStr[v4].string, ConditionString);
  }
  if ( PlayerASM_IsEnabled() && *(_QWORD *)v6 != value )
    Com_BitSetAssert(ci->dirtyConditions, v4, 32);
  *(_QWORD *)v6 = 0i64;
  *(_QWORD *)&ci->clientConditions[v4][2] = 0i64;
  *(_QWORD *)&ci->clientConditions[v4][4] = 0i64;
  *(_QWORD *)&ci->clientConditions[v4][6] = 0i64;
  *v6 = value;
  ci->clientConditions[v4][1] = HIDWORD(value);
}

/*
==============
BG_SetNewAnimation
==============
*/
void BG_SetNewAnimation(characterInfo_t *ci, lerpFrame_t *lf, int newAnimation, const entityState_t *es)
{
  float v6; 
  characterInfo_t *v7; 
  int v8; 
  BgStatic *ActiveStatics; 
  __int64 v10; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  unsigned int number; 
  DObj *ClientDObj; 
  DObj *objID; 
  bool v15; 
  const PlayerAnimEntry *animation; 
  unsigned int v17; 
  PlayerAnimScript *v18; 
  XAnimTree *pXAnimTree; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  __int64 v23; 
  int IsCrouchingAnim; 
  int IsProneAnim; 
  BOOL v26; 
  lerpFrame_t *v27; 
  char v28; 
  int v29; 
  double Time; 
  float v31; 
  double Length; 
  BOOL v33; 
  int v34; 
  int v35; 
  const PlayerAnimEntry *AnimationForIndex; 
  XAnimTree *v37; 
  double v38; 
  double v39; 
  float v40; 
  float v41; 
  double GoalWeight; 
  SuitAnimType v43; 
  int v44; 
  unsigned __int16 slowAnimIndex; 
  unsigned int v46; 
  XAnimTree *v47; 
  lerpFrame_t *v48; 
  const char *v49; 
  unsigned __int8 v50; 
  double Weight; 
  int v52; 
  float v53; 
  unsigned __int8 v54; 
  unsigned int v55; 
  unsigned __int16 v56; 
  unsigned int v57; 
  unsigned int v58; 
  bool v59; 
  unsigned __int16 v60; 
  const PlayerAnimScript *v61; 
  unsigned int v62; 
  lerpFrame_t *v63; 
  unsigned __int8 v64; 
  SuitAnimType v65; 
  unsigned int v66; 
  unsigned __int16 v67; 
  const PlayerAnimEntry *v68; 
  __int64 v69; 
  __int64 v70; 
  unsigned __int16 v71; 
  unsigned __int8 v72; 
  unsigned int v73; 
  unsigned int v74; 
  int v75; 
  const PlayerAnimEntry *v76; 
  bool v77; 
  bool v78; 
  unsigned int v79; 
  __int16 v83; 
  unsigned int v84; 
  __int64 forceBlendTime; 
  SuitAnimType suitAnimIndex; 
  int animIndex; 
  PlayerAnimScript *scriptData; 
  int XAnimIndexForCharacterInternal; 
  BOOL v90; 
  int v91; 
  int v92; 
  XAnimTree *tree; 
  BOOL v94; 
  BOOL v95; 
  XAnim_s *anims; 
  lerpFrame_t *p_legs; 
  LerpEntityState *p_lerp; 
  unsigned int animNuma; 

  v6 = 0.0;
  v7 = ci;
  v8 = -1;
  BG_CheckThread();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5817, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  v10 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5821, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(v7);
  suitAnimIndex = SuitAnimIndexFromCharacter;
  if ( (unsigned int)SuitAnimIndexFromCharacter >= NUM_ANIM_SUIT_STATE )
  {
    LODWORD(forceBlendTime) = SuitAnimIndexFromCharacter;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5824, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", forceBlendTime, 4) )
      __debugbreak();
  }
  number = es->number;
  if ( ActiveStatics->IsClient(ActiveStatics) )
    ClientDObj = Com_GetClientDObj(number, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable));
  else
    ClientDObj = (DObj *)((__int64 (__fastcall *)(BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, number);
  objID = ClientDObj;
  if ( !ClientDObj )
    return;
  p_lerp = &es->lerp;
  v15 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Bu);
  animation = lf->animation;
  v95 = v15;
  animIndex = lf->animationNumber;
  lf->animationNumber = newAnimation;
  v17 = newAnimation & 0xFFFFEFFF;
  p_legs = &v7->legs;
  lf->suitAnimIndex = suitAnimIndex;
  animNuma = newAnimation & 0xFFFFEFFF;
  v18 = *(PlayerAnimScript **)(v10 + 8i64 * (int)suitAnimIndex);
  scriptData = v18;
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5845, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
    __debugbreak();
  if ( v17 >= v18->animationCount )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F065C0, 1178i64);
  pXAnimTree = v7->pXAnimTree;
  tree = pXAnimTree;
  anims = *(XAnim_s **)(v10 + 32);
  if ( objID->tree != pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5855, ASSERT_TYPE_ASSERT, "(obj->tree == pAnimTree)", (const char *)&queryFormat, "obj->tree == pAnimTree") )
    __debugbreak();
  _XMM7 = LODWORD(FLOAT_1_0);
  if ( !animation && lf == &v7->legs )
  {
    XAnimClearTreeGoalWeights(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 42), 0.050000001, 1, objID, LINEAR);
    XAnimClearTreeGoalWeights(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 40), 0.050000001, 1, objID, LINEAR);
    XAnimSetGoalWeight(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 44), 1.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    v21 = DCONST_DVARBOOL_xanim_ik_disable;
    if ( !DCONST_DVARBOOL_xanim_ik_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_disable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( !v21->current.enabled )
      XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 96), *(unsigned __int16 *)(v10 + 44), 1.0, 1.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    v22 = DVARBOOL_xanim_ik_antislide_enable;
    if ( !DVARBOOL_xanim_ik_antislide_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_enable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.enabled )
      XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 98), *(unsigned __int16 *)(v10 + 44), 1.0, 1.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 102), *(unsigned __int16 *)(v10 + 44), 1.0, 1.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
  }
  XAnimIndexForCharacterInternal = BG_GetXAnimIndexForCharacterInternal(v7, scriptData, animIndex);
  v92 = BG_GetXAnimIndexForCharacterInternal(v7, scriptData, v17);
  if ( v17 )
  {
    v23 = (__int64)&scriptData->animations[v17];
    if ( lf == &v7->legs && v23 && (*(_BYTE *)(v23 + 16) & 2) != 0 )
      XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 94), *(unsigned __int16 *)(v10 + 44), 1.0, 0.1, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    lf->animation = (const PlayerAnimEntry *)v23;
    lf->animationTime = *(__int16 *)(v23 + 80);
    IsCrouchingAnim = BG_IsCrouchingAnim(animIndex, suitAnimIndex);
    v90 = BG_IsCrouchingAnim(animNuma, suitAnimIndex) == IsCrouchingAnim;
    IsProneAnim = BG_IsProneAnim(animIndex, suitAnimIndex);
    v94 = BG_IsProneAnim(animNuma, suitAnimIndex) == IsProneAnim;
    v26 = BG_IsTransitionalAnim(animNuma, suitAnimIndex) || BG_IsTransitionalAnim(animIndex, suitAnimIndex);
    v27 = &v7->legs;
    if ( lf == &v7->legs && !v26 && (!v90 || !v94) )
      v7->stanceTransitionTime = *(_DWORD *)(v10 + 19528) + 400;
    if ( animation )
    {
      v28 = *(_BYTE *)(v23 + 100);
      if ( v28 )
      {
        if ( v28 == animation->syncGroup )
        {
          v29 = 1;
          v91 = 1;
          goto LABEL_55;
        }
      }
    }
  }
  else
  {
    lf->animationTime = 200;
    v23 = 0i64;
    lf->animation = NULL;
    v27 = &v7->legs;
  }
  v29 = 0;
  v91 = 0;
LABEL_55:
  if ( !animation && lf == v27 )
  {
    lf->animationTime = 0;
    goto LABEL_97;
  }
  if ( !v23 )
    goto LABEL_205;
  if ( lf->animationTime > 0 )
  {
    if ( v29 )
    {
      Time = XAnimGetTime(tree, 0, XANIM_SUBTREE_DEFAULT, XAnimIndexForCharacterInternal);
      v31 = *(float *)&Time;
      Length = XAnimGetLength(tree->anims, XAnimIndexForCharacterInternal);
      if ( (float)(*(float *)&Length * v31) > 0.17 )
        v8 = 120;
    }
    goto LABEL_87;
  }
  if ( BG_Animation_GetAnimEntryMoveSpeed((const PlayerAnimEntry *)v23) == 0.0 )
  {
LABEL_205:
    if ( !animation || (v8 = 250, BG_Animation_GetAnimEntryMoveSpeed(animation) == 0.0) )
      v8 = 170;
    goto LABEL_87;
  }
  v8 = 300;
  v33 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 3u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 4u) || BG_IsAdsEntity(es);
  if ( !animation )
    goto LABEL_79;
  if ( !BG_IsCrouchingAnim(animNuma, suitAnimIndex) || !BG_IsCrouchingAnim(animIndex, suitAnimIndex) )
  {
    if ( BG_IsWalkAnim(animNuma, suitAnimIndex) && BG_IsWalkAnim(animIndex, suitAnimIndex) )
    {
      v8 = 250;
      goto LABEL_87;
    }
    if ( BG_IsProneAnim(animNuma, suitAnimIndex) && BG_IsProneAnim(animIndex, suitAnimIndex) )
    {
      v8 = 250;
      goto LABEL_87;
    }
LABEL_79:
    if ( lf == &v7->legs && animation && BG_Animation_GetAnimEntryMoveSpeed(animation) != 0.0 && v33 )
      v8 = 250;
    goto LABEL_87;
  }
  v8 = 250;
LABEL_87:
  v34 = v7->stanceTransitionTime - *(_DWORD *)(v10 + 19528);
  if ( v34 <= v8 )
    v34 = v8;
  v35 = v34;
  if ( v23 )
  {
    if ( animation )
    {
      if ( (*(_DWORD *)(v23 + 16) & 0x80000) != 0 && (animation->flags & 0x100000) != 0 )
      {
        AnimationForIndex = BG_AnimationMP_GetAnimationForIndex(v7->playerAnim.torsoAnim & 0xFFFFEFFF, suitAnimIndex);
        v35 = v34;
        if ( (AnimationForIndex->flags & 8) != 0 )
          v35 = 30;
      }
    }
  }
  if ( lf->animationTime < v35 )
    lf->animationTime = v35;
LABEL_97:
  if ( v23 && BG_Animation_GetAnimEntryMoveSpeed((const PlayerAnimEntry *)v23) != 0.0 && XAnimIsLooped(anims, v92) && animation && BG_Animation_GetAnimEntryMoveSpeed(animation) != 0.0 && XAnimIsLooped(anims, XAnimIndexForCharacterInternal) )
  {
    v37 = tree;
    v38 = XAnimGetTime(tree, 0, XANIM_SUBTREE_DEFAULT, XAnimIndexForCharacterInternal);
    v6 = *(float *)&v38;
  }
  else
  {
    v37 = tree;
  }
  if ( v91 )
  {
    v39 = XAnimGetTime(v37, 0, XANIM_SUBTREE_DEFAULT, XAnimIndexForCharacterInternal);
    v6 = *(float *)&v39;
  }
  v41 = (float)lf->animationTime * 0.001;
  v40 = v41;
  if ( !animation )
  {
    v43 = suitAnimIndex;
    v44 = animNuma;
LABEL_120:
    v47 = tree;
    goto LABEL_121;
  }
  if ( (animation->flags & 0x20000000) != 0 )
  {
    GoalWeight = XAnimGetGoalWeight(v37, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 92));
    if ( *(float *)&GoalWeight != 0.0 )
      XAnimClearTreeGoalWeights(v37, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 92), v41, 1, objID, LINEAR);
  }
  if ( lf == &v7->legs && (animation->flags & 2) != 0 && (*(_BYTE *)(v23 + 16) & 2) == 0 )
    XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 94), *(unsigned __int16 *)(v10 + 44), 0.0, 0.1, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
  BG_ClearLegsAnimTree(objID, v7, *(unsigned __int16 *)(v10 + 42));
  XAnimClearTreeGoalWeights(v37, 0, XANIM_SUBTREE_DEFAULT, XAnimIndexForCharacterInternal, v41, 1, objID, LINEAR);
  v43 = suitAnimIndex;
  v44 = animNuma;
  if ( BG_IsAdditiveTorsoAnim(animNuma, suitAnimIndex) )
    XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 40), *(unsigned __int16 *)(v10 + 44), 0.0, v41, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
  slowAnimIndex = animation->slowAnimIndex;
  if ( !slowAnimIndex )
    goto LABEL_120;
  v46 = BG_GetXAnimIndexForCharacterInternal(v7, scriptData, slowAnimIndex);
  v47 = tree;
  XAnimClearTreeGoalWeights(tree, 0, XANIM_SUBTREE_DEFAULT, v46, v41, 1, objID, LINEAR);
LABEL_121:
  v48 = &v7->legs;
  if ( v44 )
  {
    if ( lf != v48 && v7->leftHandGun )
    {
      v7->leftHandGun = 0;
      v7->dobjDirty = 1;
    }
    if ( *(char *)(v23 + 16) >= 0 )
    {
      if ( BG_Animation_GetAnimEntryMoveSpeed((const PlayerAnimEntry *)v23) != 0.0 )
      {
        Weight = XAnimGetWeight(v47, 0, XANIM_SUBTREE_DEFAULT, v92);
        if ( *(float *)&Weight == 0.0 )
          goto LABEL_143;
      }
      if ( (*(_DWORD *)(v23 + 16) & 0x200000) != 0 || v91 )
        goto LABEL_143;
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5010, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
        __debugbreak();
      if ( (BG_AnimationMP_GetAnimationForIndex(v44, v43)->flags & 0x20000) != 0 )
LABEL_143:
        v52 = 1;
      else
        v52 = 0;
      v53 = FLOAT_1_0;
      if ( *(_DWORD *)(v10 + 19544) )
        v54 = *(_BYTE *)(v23 + 93);
      else
        v54 = *(_BYTE *)(v23 + 94);
      v55 = v54;
      v56 = *(_WORD *)(v23 + 90);
      if ( v56 )
      {
        v57 = *(unsigned __int16 *)(v10 + 44);
        v53 = FLOAT_0_001;
        v58 = BG_GetXAnimIndexForCharacterInternal(ci, scriptData, v56);
        XAnimSetCompleteGoalWeightRel(objID, v58, v57, 0.99900001, v41, 1.0, (scr_string_t)0, v55, lf != p_legs);
      }
      v59 = lf != p_legs;
      if ( lf == p_legs )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4903, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
          __debugbreak();
        if ( (BG_AnimationMP_GetAnimationForIndex(animNuma, suitAnimIndex)->flags & 0x18000000) != 0 )
          v59 = 1;
      }
      XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, v92, *(unsigned __int16 *)(v10 + 44), v53, v41, 1.0, (scr_string_t)0, v55, v59, LINEAR, NULL);
      if ( v52 )
      {
        XAnimSetTime(v47, 0, XANIM_SUBTREE_DEFAULT, v92, v6);
        v60 = *(_WORD *)(v23 + 90);
        v7 = ci;
        if ( v60 )
        {
          v61 = scriptData;
          v62 = BG_GetXAnimIndexForCharacterInternal(ci, scriptData, v60);
          XAnimSetTime(v47, 0, XANIM_SUBTREE_DEFAULT, v62, v6);
LABEL_160:
          v63 = &v7->legs;
          if ( lf == &v7->legs )
          {
            if ( !BG_GameInterface_HandleAimSet(v7, lf, objID, v47, v61, v41) )
            {
              v68 = lf->animation;
              if ( v68 && v68->aimSet )
              {
                v69 = 64i64;
                v70 = 46i64;
                if ( (v61->animations[v7->playerAnim.legsAnim & 0xFFFFEFFF].flags & 0x60) != 0 )
                  v69 = 46i64;
                if ( (v61->animations[v7->playerAnim.legsAnim & 0xFFFFEFFF].flags & 0x60) != 0 )
                  v70 = 64i64;
                XAnimSetGoalWeight(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v70 + v10), 1.0, v41, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
                XAnimSetGoalWeight(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v69 + v10), 0.0, v41, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
                XAnimClearTreeGoalWeights(v47, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v69 + v10), v41, 1, NULL, LINEAR);
                v63 = &v7->legs;
              }
              else
              {
                XAnimSetGoalWeight(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 46), 0.0, v41, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
                XAnimSetGoalWeight(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 64), 0.0, v41, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
                XAnimClearTreeGoalWeights(v47, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 46), v41, 1, NULL, LINEAR);
                XAnimClearTreeGoalWeights(v47, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 64), v41, 1, NULL, LINEAR);
              }
            }
            v65 = suitAnimIndex;
          }
          else
          {
            if ( *(_DWORD *)(v10 + 19544) )
              v64 = *(_BYTE *)(v23 + 93);
            else
              v64 = *(_BYTE *)(v23 + 94);
            v65 = suitAnimIndex;
            v66 = v64;
            if ( BG_IsAdditiveTorsoAnim(animNuma, suitAnimIndex) )
              v67 = *(_WORD *)(v10 + 88);
            else
              v67 = *(_WORD *)(v10 + 40);
            XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, v67, *(unsigned __int16 *)(v10 + 44), 1.0, v41, 1.0, (scr_string_t)0, v66, 0, LINEAR, NULL);
            XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 42), *(unsigned __int16 *)(v10 + 44), 1.0, v41, 1.0, (scr_string_t)0, v66, 0, LINEAR, NULL);
            v63 = &v7->legs;
          }
          v71 = *(_WORD *)(v23 + 88);
          if ( v71 )
          {
            if ( *(_DWORD *)(v10 + 19544) )
              v72 = *(_BYTE *)(v23 + 93);
            else
              v72 = *(_BYTE *)(v23 + 94);
            v73 = v72;
            v74 = BG_GetXAnimIndexForCharacterInternal(v7, scriptData, v71);
            XAnimClearChildGoalWeights(v47, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 86), v41, LINEAR);
            XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, v74, *(unsigned __int16 *)(v10 + 44), 1.0, v41, 1.0, (scr_string_t)0, v73, 0, LINEAR, NULL);
            v75 = v7->playerAnim.torsoAnim & 0xFFFFEFFF;
            v76 = BG_AnimationMP_GetAnimationForIndex(v75, v65);
            v77 = v76 && (v76->flags & 0x1000000) != 0;
            v78 = !v75 || !v77;
            v79 = 0;
            if ( v78 )
              v79 = v73;
            _XMM0 = v78;
            __asm
            {
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm0, xmm7, xmm8, xmm2
            }
            XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 86), *(unsigned __int16 *)(v10 + 44), *(float *)&_XMM0, v41, 1.0, (scr_string_t)0, v79, 0, LINEAR, NULL);
          }
          else
          {
            v83 = *(_WORD *)(v23 + 82);
            if ( v83 != -1 )
              v40 = (float)v83 * 0.001;
            if ( lf != v63 || (*(_QWORD *)(v23 + 16) & 0x300000i64) != 0 )
            {
              if ( (*(_QWORD *)(v23 + 16) & 0x1000000i64) != 0 )
                XAnimSetGoalWeight(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 86), 0.0, v40, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
            }
            else
            {
              v84 = BG_GetXAnimIndexForCharacterInternal(v7, scriptData, 0);
              XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 86), *(unsigned __int16 *)(v10 + 44), 0.0, v40, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
              XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, v84, *(unsigned __int16 *)(v10 + 44), 0.0, v40, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
            }
          }
          return;
        }
      }
      else
      {
        v7 = ci;
      }
    }
    else
    {
      if ( XAnimIsLooped(anims, v92) )
      {
        v49 = SL_ConvertToString((scr_string_t)*(_DWORD *)(v23 + 4));
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F06668, 1179i64, v49);
      }
      if ( v95 )
      {
        if ( *(_DWORD *)(v10 + 19544) )
          v50 = *(_BYTE *)(v23 + 93);
        else
          v50 = *(_BYTE *)(v23 + 94);
        XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, v92, *(unsigned __int16 *)(v10 + 44), 1.0, v41, 1.0, (scr_string_t)0, v50, 0, LINEAR, NULL);
      }
      else
      {
        XAnimSetGoalWeightKnobAll(objID, 0, XANIM_SUBTREE_DEFAULT, v92, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 44), 1.0, 0.0, 1.0, (scr_string_t)0, 0, LINEAR);
        XAnimSetTime(v47, 0, XANIM_SUBTREE_DEFAULT, v92, 1.0);
      }
    }
    v61 = scriptData;
    goto LABEL_160;
  }
  if ( lf != v48 )
  {
    XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 40), *(unsigned __int16 *)(v10 + 44), 0.0, v41, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 88), *(unsigned __int16 *)(v10 + 44), 0.0, v41, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    XAnimSetCompleteGoalWeightRel(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 42), *(unsigned __int16 *)(v10 + 44), 1.0, v41, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    if ( scriptData->animations[v7->playerAnim.legsAnim & 0xFFFFEFFF].additiveAdjustAnim )
      XAnimSetGoalWeight(objID, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v10 + 86), 1.0, v41, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
  }
}

/*
==============
BG_SetupAimAnimBranch
==============
*/
void BG_SetupAimAnimBranch(DObj *obj, characterInfo_t *ci, int index, const aimAnimSet_t *knobAimAnimSet, const aimAnimValues_t *animAnimValues)
{
  __int64 v8; 
  const PlayerAnimEntry *animation; 
  __int64 v10; 
  XAnimTree *pXAnimTree; 
  const PlayerAnimScript *v12; 
  char v13; 
  BgStatic *ActiveStatics; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int16 v17; 
  unsigned __int16 v18; 
  float v19; 
  float v20; 
  unsigned int v21; 
  unsigned int v22; 
  float v23; 
  unsigned int XAnimIndexForCharacterInternal; 

  v8 = index;
  if ( !knobAimAnimSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7424, ASSERT_TYPE_ASSERT, "(knobAimAnimSet)", (const char *)&queryFormat, "knobAimAnimSet") )
    __debugbreak();
  if ( !animAnimValues && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7425, ASSERT_TYPE_ASSERT, "(animAnimValues)", (const char *)&queryFormat, "animAnimValues") )
    __debugbreak();
  if ( (unsigned int)v8 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7426, ASSERT_TYPE_ASSERT, "(index >=0 && index < 8)", (const char *)&queryFormat, "index >=0 && index < 8") )
    __debugbreak();
  animation = ci->legs.animation;
  v10 = 0i64;
  pXAnimTree = ci->pXAnimTree;
  v12 = NULL;
  if ( animation && animation->aimSet )
  {
    v13 = 1;
    ActiveStatics = BgStatic::GetActiveStatics();
    v15 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7445, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    v12 = *(const PlayerAnimScript **)(v15 + 8i64 * (int)ci->legs.suitAnimIndex);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7447, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
      __debugbreak();
    v10 = (__int64)&v12->scriptAimSets[ci->legs.animation->aimSet - 1];
  }
  else
  {
    v13 = 0;
  }
  v16 = v8;
  v17 = *(unsigned __int16 *)((char *)&knobAimAnimSet->aim_parent + KNOB_AIM_ANIM_OFFSETS[v8]);
  if ( v13 )
    v18 = *(_WORD *)(v10 + CHILD_AIM_ANIM_OFFSETS[v8]);
  else
    v18 = 0;
  v19 = *(float *)((char *)&animAnimValues->fTime1 + ANIM_WEIGHT_OFFSETS[v16]);
  v20 = *(float *)((char *)&animAnimValues->fTime1 + ANIM_TIME_OFFSETS[v16]);
  if ( v19 == 0.0 )
  {
    v21 = v17;
    XAnimClearChildGoalWeights(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, v17, 0.0, LINEAR);
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v21, v19, 0.0, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
  }
  else if ( v13 )
  {
    v22 = v17;
    v23 = (float)ci->legs.animationTime * 0.001;
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v17, v19, 0.0, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    XAnimIndexForCharacterInternal = BG_GetXAnimIndexForCharacterInternal(ci, v12, v18);
    XAnimSetGoalWeightKnob(obj, 0, XANIM_SUBTREE_DEFAULT, XAnimIndexForCharacterInternal, 1.0, v23, 0.0, (scr_string_t)0, 0, LINEAR);
    XAnimSetChildTimes(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, v22, v20);
  }
}

/*
==============
BG_ShouldScaleTimedAnim
==============
*/
_BOOL8 BG_ShouldScaleTimedAnim(int animIndex, SuitAnimType suitAnimIndex)
{
  __int64 v2; 
  __int64 v3; 
  BgStatic *ActiveStatics; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 

  v2 = animIndex;
  v3 = suitAnimIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3588, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( (unsigned int)v3 >= 4 )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3589, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v9, 4) )
      __debugbreak();
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  v5 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3593, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v6 = *(_QWORD *)(v5 + 8 * v3);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3596, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  if ( (unsigned int)v2 >= *(_DWORD *)(v6 + 8) )
  {
    LODWORD(v10) = *(_DWORD *)(v6 + 8);
    LODWORD(v9) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3597, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( playerAnim->animationCount )", "animIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v7 = *(_QWORD *)(v6 + 48) + 104 * v2;
  return BG_Animation_GetAnimEntryMoveSpeed((const PlayerAnimEntry *)v7) != 0.0 && (*(_DWORD *)(v7 + 16) & 0x840000) == 8650752i64;
}

/*
==============
BG_StopTurning
==============
*/
void BG_StopTurning(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2986, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2986, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  pml->turning = 0;
  *(_QWORD *)&ps->turnStartTime = 0i64;
}

/*
==============
BG_StringHashValue
==============
*/
__int64 BG_StringHashValue(const char *fname)
{
  char v1; 
  unsigned int v2; 
  const char *v3; 
  unsigned int v4; 
  int v5; 
  int v6; 
  int v7; 

  v1 = *fname;
  v2 = 0;
  v3 = fname;
  v4 = 0;
  if ( *fname )
  {
    v5 = 119;
    do
    {
      v6 = (char)tolower(v1);
      v1 = *++v3;
      v7 = v5 * v6;
      ++v5;
      v4 += v7;
    }
    while ( *v3 );
  }
  if ( v4 != -1 )
    return v4;
  return v2;
}

/*
==============
BG_SwingAngles
==============
*/

void __fastcall BG_SwingAngles(double destination, float swingTolerance, float clampTolerance, float speed, float minSpeedScale, float *angle, int *swinging)
{
  float v9; 
  BgStatic *ActiveStatics; 
  __int64 v11; 
  float v14; 
  __int128 v15; 
  __int128 v20; 
  int v22; 
  float v23; 
  bool v24; 
  double v26; 
  float v28; 
  float v29; 
  double v30; 

  v9 = *(float *)&destination;
  BG_CheckThread();
  ActiveStatics = BgStatic::GetActiveStatics();
  v11 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7723, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( !*swinging )
  {
    _XMM1 = 0i64;
    __asm { vroundss xmm4, xmm1, xmm2, 1 }
    v14 = (float)((float)((float)(*angle - *(float *)&destination) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
    if ( v14 <= swingTolerance && v14 >= COERCE_FLOAT(LODWORD(swingTolerance) ^ _xmm) )
      return;
    *swinging = 1;
  }
  v15 = *(_OWORD *)&destination;
  _XMM9 = 0i64;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  *(float *)&v15 = (float)((float)((float)(*(float *)&destination - *angle) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  _XMM4 = v15;
  v20 = v15 & _xmm;
  *(float *)&v20 = *(float *)&v20 * 0.050000001;
  _XMM0 = v20;
  __asm { vmaxss  xmm2, xmm0, [rsp+0B8h+minSpeedScale] }
  v22 = 0;
  v23 = (float)((float)*(int *)(v11 + 19540) * *(float *)&_XMM2) * speed;
  if ( *(float *)&_XMM4 < 0.0 )
  {
    v24 = *(float *)&_XMM4 < COERCE_FLOAT(LODWORD(v23) ^ _xmm);
    __asm { vmaxss  xmm0, xmm4, xmm3 }
  }
  else
  {
    v24 = v23 < *(float *)&_XMM4;
    __asm { vminss  xmm0, xmm4, xmm2 }
  }
  LOBYTE(v22) = v24;
  *swinging = v22;
  v26 = AngleNormalize360(*(float *)&_XMM0 + *angle);
  *angle = *(float *)&v26;
  __asm { vroundss xmm3, xmm9, xmm1, 1 }
  v28 = (float)((float)((float)(v9 - *angle) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  if ( v28 <= clampTolerance )
  {
    if ( v28 >= COERCE_FLOAT(LODWORD(clampTolerance) ^ _xmm) )
      return;
    v29 = v9 + clampTolerance;
  }
  else
  {
    v29 = v9 - clampTolerance;
  }
  v30 = AngleNormalize360(v29);
  *angle = *(float *)&v30;
}

/*
==============
BG_TurnMovementDir
==============
*/
__int64 BG_TurnMovementDir(pmove_t *pm, pml_t *pml, int onlyClamp)
{
  __int128 v3; 
  __int128 v4; 
  playerState_s *ps; 
  const SuitDef *SuitDef; 
  unsigned int movementDir; 
  float v11; 
  double v12; 
  float v13; 
  float frametime; 
  const dvar_t *v15; 
  float v16; 
  int v17; 
  int Int_Internal_DebugName; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  const char *v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  float value; 
  const dvar_t *v25; 
  float v26; 
  float v27; 
  double Float_Internal_DebugName; 
  const dvar_t *v29; 
  const char *v30; 
  double v31; 
  int v32; 
  int v33; 
  int v34; 
  unsigned int v35; 
  int v36; 
  int v37; 
  int v38; 
  const dvar_t *v39; 
  const char *v40; 
  int turnRemaining; 
  int v42; 
  int v43; 
  float v44; 
  int v45; 
  int v46; 
  int v47; 
  signed int v48; 
  __int64 v50; 
  __int64 v51; 
  int v52; 
  int integer; 
  vec3_t v54; 
  vec3_t forward; 
  vec3_t outAngles; 
  vec3_t angles; 
  __int128 v58; 
  __int128 v59; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3009, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3009, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3019, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  movementDir = ps->movementDir;
  if ( SuitDef->isMovementCameraIndependent )
  {
    Vec3ShortToAngle(&pm->oldcmd.angles, &outAngles);
    AngleVectors(&outAngles, &forward, NULL, NULL);
    Vec3ShortToAngle(&pm->cmd.angles, &angles);
    AngleVectors(&angles, &v54, NULL, NULL);
    v11 = 0.0;
    v12 = I_fclamp((float)((float)(v54.v[0] * forward.v[0]) + (float)(v54.v[1] * forward.v[1])) + (float)(v54.v[2] * forward.v[2]), 0.0, 1.0);
    v13 = acosf_0(*(float *)&v12);
    frametime = pml->frametime;
    if ( frametime > 0.0 )
      v11 = (float)(v13 * 57.295776) / frametime;
    v15 = DCONST_DVARFLT_g_anim_mp_idle_turn_camera_independent_max_speed;
    if ( !DCONST_DVARFLT_g_anim_mp_idle_turn_camera_independent_max_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_anim_mp_idle_turn_camera_independent_max_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v11 >= v15->current.value )
    {
      BG_StopTurning(pm, pml);
      return movementDir;
    }
  }
  if ( (ps->linkFlags.m_flags[0] & 4) != 0 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 1u) )
    v16 = ps->linkWeaponAngles.v[1];
  else
    v16 = ps->viewangles.v[1];
  v52 = BG_DegreesToMovementDir(v16);
  v17 = v52;
  pml->turning = 0;
  if ( !onlyClamp )
  {
    if ( PlayerASM_IsEnabled() )
    {
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_playerasm_idleTurnLastStandAnimDuration, "playerasm_idleTurnLastStandAnimDuration");
      }
      else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 4u) )
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_playerasm_idleTurnProneAnimDuration, "playerasm_idleTurnProneAnimDuration");
      }
      else
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_playerasm_idleTurnAnimDuration, "playerasm_idleTurnAnimDuration");
      }
    }
    else
    {
      v19 = DCONST_DVARINT_g_anim_mp_idle_turn_anim_duration;
      if ( !DCONST_DVARINT_g_anim_mp_idle_turn_anim_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_anim_mp_idle_turn_anim_duration") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      Int_Internal_DebugName = v19->current.integer;
    }
    if ( SuitDef->isMovementCameraIndependent )
    {
      v20 = DCONST_DVARINT_g_anim_mp_idle_turn_delay_camera_independent;
      if ( !DCONST_DVARINT_g_anim_mp_idle_turn_delay_camera_independent )
      {
        v21 = "g_anim_mp_idle_turn_delay_camera_independent";
        goto LABEL_39;
      }
    }
    else
    {
      v20 = DCONST_DVARINT_g_anim_mp_idle_turn_delay;
      if ( !DCONST_DVARINT_g_anim_mp_idle_turn_delay )
      {
        v21 = "g_anim_mp_idle_turn_delay";
LABEL_39:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v21) )
          __debugbreak();
      }
    }
    Dvar_CheckFrontendServerThread(v20);
    integer = v20->current.integer;
    if ( SuitDef->isMovementCameraIndependent )
    {
      v22 = DCONST_DVARINT_g_anim_mp_idle_turn_anim_duration_camera_independent;
      if ( !DCONST_DVARINT_g_anim_mp_idle_turn_anim_duration_camera_independent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_anim_mp_idle_turn_anim_duration_camera_independent") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      Int_Internal_DebugName = v22->current.integer;
    }
    v59 = v3;
    v58 = v4;
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
    {
      v23 = DCONST_DVARFLT_g_anim_mp_idle_turn_laststand_angle;
      if ( !DCONST_DVARFLT_g_anim_mp_idle_turn_laststand_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_anim_mp_idle_turn_laststand_angle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      value = v23->current.value;
      v25 = DCONST_DVARFLT_g_anim_mp_idle_turn_trigger_laststand_angle;
      v26 = value * 0.71111113;
      if ( !DCONST_DVARFLT_g_anim_mp_idle_turn_trigger_laststand_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_anim_mp_idle_turn_trigger_laststand_angle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      v27 = v25->current.value * 0.71111113;
    }
    else
    {
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 4u) )
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_g_anim_mp_idle_turn_prone_angle, "g_anim_mp_idle_turn_prone_angle");
        v29 = DCONST_DVARFLT_g_anim_mp_idle_turn_trigger_prone_angle;
        v30 = "g_anim_mp_idle_turn_trigger_prone_angle";
      }
      else
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_g_anim_mp_idle_turn_angle, "g_anim_mp_idle_turn_angle");
        v29 = DCONST_DVARFLT_g_anim_mp_idle_turn_trigger_angle;
        v30 = "g_anim_mp_idle_turn_trigger_angle";
      }
      v26 = (float)(*(float *)&Float_Internal_DebugName * 256.0) * 0.0027777778;
      v31 = Dvar_GetFloat_Internal_DebugName(v29, v30);
      v27 = (float)(*(float *)&v31 * 256.0) * 0.0027777778;
    }
    v32 = pm->cmd.serverTime - ps->turnStartTime - integer;
    if ( v32 < 0 )
    {
      v17 = v52;
    }
    else
    {
      if ( Int_Internal_DebugName - v32 <= 100 )
      {
        v33 = BG_MovementDirNormalize180(v52 - movementDir);
        v34 = abs32(v33);
        if ( v34 > (int)(float)(v27 + 0.5) )
        {
          ps->turnStartTime = pm->cmd.serverTime;
          ps->turnDirection = v33 > 0;
          if ( SuitDef->isMovementCameraIndependent )
          {
            v35 = 127;
            if ( v34 < 127 )
              v35 = v34;
          }
          else
          {
            v35 = (int)(float)(v26 + 0.5);
          }
          ps->turnRemaining = v35;
          if ( v35 >= 0x80 )
          {
            LODWORD(v51) = 128;
            LODWORD(v50) = v35;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3125, ASSERT_TYPE_ASSERT, "(unsigned)( ps->turnRemaining ) < (unsigned)( (1 << 7) )", "ps->turnRemaining doesn't index (1 << MOVEMENTDIR_TURN_BITS)\n\t%i not in [0, %i)", v50, v51) )
              __debugbreak();
          }
          pml->turning = 2;
          v32 = 0;
        }
      }
      if ( v32 >= Int_Internal_DebugName )
      {
        v17 = v52;
        if ( ps->turnRemaining )
          ps->turnRemaining = 0;
      }
      else
      {
        if ( PlayerASM_IsEnabled() )
        {
          v36 = 0;
          v37 = Int_Internal_DebugName;
        }
        else
        {
          if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 4u) )
          {
            v38 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_g_anim_mp_idle_turn_rotate_prone_start, "g_anim_mp_idle_turn_rotate_prone_start");
            v39 = DCONST_DVARINT_g_anim_mp_idle_turn_rotate_prone_end;
            v40 = "g_anim_mp_idle_turn_rotate_prone_end";
          }
          else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 3u) )
          {
            v38 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_g_anim_mp_idle_turn_rotate_crouch_start, "g_anim_mp_idle_turn_rotate_crouch_start");
            v39 = DCONST_DVARINT_g_anim_mp_idle_turn_rotate_crouch_end;
            v40 = "g_anim_mp_idle_turn_rotate_crouch_end";
          }
          else
          {
            v38 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_g_anim_mp_idle_turn_rotate_stand_start, "g_anim_mp_idle_turn_rotate_stand_start");
            v39 = DCONST_DVARINT_g_anim_mp_idle_turn_rotate_stand_end;
            v40 = "g_anim_mp_idle_turn_rotate_stand_end";
          }
          v36 = v38;
          v37 = Dvar_GetInt_Internal_DebugName(v39, v40);
        }
        if ( Int_Internal_DebugName < v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3154, ASSERT_TYPE_ASSERT, "(animDuration >= rotateStart)", (const char *)&queryFormat, "animDuration >= rotateStart") )
          __debugbreak();
        if ( Int_Internal_DebugName < v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3155, ASSERT_TYPE_ASSERT, "(animDuration >= rotateEnd)", (const char *)&queryFormat, "animDuration >= rotateEnd") )
          __debugbreak();
        if ( v37 < v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3156, ASSERT_TYPE_ASSERT, "(rotateEnd >= rotateStart)", (const char *)&queryFormat, "rotateEnd >= rotateStart") )
          __debugbreak();
        if ( v32 > v36 && v32 < v37 )
        {
          turnRemaining = ps->turnRemaining;
          v42 = v37 - v32;
          v43 = turnRemaining;
          v44 = (float)((float)((float)pml->msec * (float)turnRemaining) / (float)v42) + 0.5;
          if ( (int)v44 <= turnRemaining )
            v43 = (int)v44;
          v45 = turnRemaining - v43;
          ps->turnRemaining = v45;
          if ( v45 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3175, ASSERT_TYPE_ASSERT, "( ps->turnRemaining ) >= ( 0 )", "%s >= %s\n\t%i, %i", "ps->turnRemaining", "0", v45, 0i64) )
            __debugbreak();
          v46 = -1;
          if ( ps->turnDirection )
            v46 = 1;
          movementDir = BG_MovementDirNormalize360(movementDir + v43 * v46);
        }
        v17 = v52;
        if ( !pml->turning )
          pml->turning = 1;
      }
    }
    goto LABEL_103;
  }
  BG_StopTurning(pm, pml);
LABEL_103:
  if ( !SuitDef->isMovementCameraIndependent )
  {
    v47 = BG_MovementDirNormalize180(v17 - movementDir);
    v48 = abs32(v47) - 50;
    if ( v48 > 0 )
    {
      if ( v47 < 0 )
        v48 = -v48;
      movementDir = BG_MovementDirNormalize360(v48 + movementDir);
    }
  }
  if ( (unsigned __int8)movementDir != movementDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3211, ASSERT_TYPE_ASSERT, "(( currentDir & ( (1 << 8) - 1 ) ) == currentDir)", (const char *)&queryFormat, "( currentDir & ( (1 << MOVEMENTDIR_BITS) - 1 ) ) == currentDir") )
    __debugbreak();
  return movementDir;
}

/*
==============
BG_UpdateAimAnimBlends
==============
*/
void BG_UpdateAimAnimBlends(characterInfo_t *ci, const entityState_t *es)
{
  BgStatic *ActiveStatics; 
  __int64 v5; 
  unsigned int number; 
  DObj *ClientDObj; 
  DObj *v8; 
  __int128 yawAngle_low; 
  __int128 v13; 
  float v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v22; 
  __int128 v25; 
  int j; 
  __int128 v28; 
  __int128 v31; 
  int i; 
  aimAnimValues_t values; 

  BG_CheckThread();
  ActiveStatics = BgStatic::GetActiveStatics();
  v5 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7540, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  number = es->number;
  if ( ActiveStatics->IsClient(ActiveStatics) )
    ClientDObj = Com_GetClientDObj(number, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable));
  else
    ClientDObj = (DObj *)((__int64 (__fastcall *)(BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, number);
  v8 = ClientDObj;
  if ( ClientDObj && (ci->playerAnim.legsAnim & 0xFFFFEFFF) != 0 )
  {
    yawAngle_low = LODWORD(ci->torso.yawAngle);
    _XMM1 = 0i64;
    __asm { vroundss xmm4, xmm1, xmm2, 1 }
    LODWORD(_XMM6) = 0;
    *(float *)&yawAngle_low = (float)((float)((float)(ci->torso.yawAngle - ci->legs.yawAngle) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
    v13 = yawAngle_low;
    if ( ci->legs.pitchAngle != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7551, ASSERT_TYPE_ASSERT, "(ci->legs.pitchAngle == 0.0f)", (const char *)&queryFormat, "ci->legs.pitchAngle == 0.0f") )
      __debugbreak();
    v15 = LODWORD(FLOAT_0_5);
    *(float *)&v15 = 0.5 * ci->torso.pitchAngle;
    v14 = *(float *)&v15;
    if ( *(float *)&v15 <= 90.0 )
    {
      *(float *)&v15 = *(float *)&v15 * 0.014285714;
      _XMM0 = v15;
      __asm { vminss  xmm10, xmm0, xmm7 }
      LODWORD(_XMM11) = 0;
    }
    else
    {
      v16 = LODWORD(FLOAT_180_0);
      *(float *)&v16 = (float)(180.0 - v14) * 0.014285714;
      _XMM2 = v16;
      __asm { vminss  xmm11, xmm2, xmm7 }
      LODWORD(_XMM10) = 0;
    }
    if ( BG_IsStrafeAnim(ci->playerAnim.legsAnim, ci->playerAnim.suitAnimIndex) )
    {
      if ( *(float *)&v13 >= 0.0 )
      {
        v31 = v13;
        *(float *)&v31 = *(float *)&v13 * 0.033333335;
        _XMM0 = v31;
        __asm { vminss  xmm2, xmm0, xmm7; fAimFactor4 }
      }
      else
      {
        v28 = v13;
        *(float *)&v28 = *(float *)&v13 * -0.033333335;
        _XMM0 = v28;
        __asm { vminss  xmm6, xmm0, xmm7 }
        LODWORD(_XMM2) = 0;
      }
      BG_CalculateAimAnimValues(&values, *(float *)&_XMM10, *(float *)&_XMM2, *(float *)&_XMM6, *(float *)&_XMM11);
      for ( i = 0; i < 8; ++i )
        BG_SetupAimAnimBranch(v8, ci, i, (const aimAnimSet_t *)(v5 + 64), &values);
    }
    else
    {
      if ( *(float *)&v13 >= 0.0 )
      {
        v25 = v13;
        *(float *)&v25 = *(float *)&v13 * 0.014285714;
        _XMM0 = v25;
        __asm { vminss  xmm2, xmm0, xmm7; fAimFactor4 }
      }
      else
      {
        v22 = v13;
        *(float *)&v22 = *(float *)&v13 * -0.014285714;
        _XMM0 = v22;
        __asm { vminss  xmm6, xmm0, xmm7 }
        LODWORD(_XMM2) = 0;
      }
      BG_CalculateAimAnimValues(&values, *(float *)&_XMM10, *(float *)&_XMM2, *(float *)&_XMM6, *(float *)&_XMM11);
      for ( j = 0; j < 8; ++j )
        BG_SetupAimAnimBranch(v8, ci, j, (const aimAnimSet_t *)(v5 + 46), &values);
    }
  }
}

/*
==============
BG_UpdateCharacterDObj
==============
*/
void BG_UpdateCharacterDObj(LocalClientNum_t localClientNum, DObj *pDObj, const entityState_t *es, characterInfo_t *ci, const int attachIgnoreCollision, const Weapon *r_heldWeapon, const Weapon *r_stowedWeapon, const Weapon *r_thrownWeapon, const Weapon *r_executionWeapon, const Weapon *r_accessoryWeapon, const Weapon *r_turretWeapon, const bool forceUpdate)
{
  signed __int64 v12; 
  void *v14; 
  const entityState_t *v16; 
  DObj *v17; 
  const Weapon *v18; 
  const Weapon *v19; 
  unsigned int v20; 
  bool *attachTagIndexChanged; 
  BgStatic *ActiveStatics; 
  DObj *pXAnimTree; 
  DObjPartBits *p_replicatedPartBits; 
  bool usingExecutionProp; 
  bool usingDetonator; 
  unsigned int v27; 
  DObjPartBits *p_hidePartBitsFromOldDObj; 
  entityState_t *v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  Weapon *v33; 
  const Weapon *v34; 
  Weapon *v35; 
  const Weapon *v36; 
  PlayerASM_AnimSlot v37; 
  unsigned int Anim; 
  unsigned int Animset; 
  unsigned __int16 weaponIdx; 
  __int128 v41; 
  double v42; 
  __int128 v43; 
  double v44; 
  int v45; 
  const dvar_t *v46; 
  const dvar_t *v47; 
  int v48; 
  CharacterModelType *v49; 
  DObjModel *v50; 
  corpseReferenceCharacterInfo_t *p_corpseReferenceInfo; 
  unsigned int carryObjectFlags; 
  int v53; 
  entityState_t *v54; 
  entityState_t *v55; 
  const dvar_t *v56; 
  const dvar_t *v57; 
  bool v58; 
  const char *v59; 
  int numModels; 
  int v61; 
  CharacterModelType *v62; 
  DObjModel *v63; 
  int v64; 
  unsigned __int16 weaponBoneCount; 
  int v66; 
  unsigned int v67; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *v68; 
  DObj *v69; 
  entityState_t *v70; 
  int numberOfBonesBeforeWeapons; 
  DObjModel *v72; 
  CharacterModelType *v73; 
  __int64 v74; 
  Weapon *v75; 
  int v76; 
  bool v77; 
  const dvar_t *v78; 
  const dvar_t *v79; 
  const dvar_t *v80; 
  char v81; 
  int v82; 
  DObjModel *v83; 
  CharacterModelType *v84; 
  DObjPartBits *v85; 
  const XModel *model; 
  __int64 v87; 
  int v88; 
  const dvar_t *v89; 
  const dvar_t *v90; 
  Weapon *v91; 
  Weapon *v92; 
  LocalClientNum_t v93; 
  char *fmt; 
  char *fmta; 
  __int64 forceBlendTime; 
  __int64 forceBlendTimea; 
  void *objID; 
  BOOL objIDa; 
  __int64 curveID; 
  __int64 curveIDa; 
  char v102; 
  unsigned __int8 inOutIndex; 
  bool hideWeapon; 
  entityState_t *v105; 
  bool stowHeldWeapon; 
  DObjPartBits *partBits; 
  bool v108[2][2]; 
  int oldNumModels; 
  const Weapon *v110; 
  int numRefModels[2]; 
  Weapon *r_heldWeapona; 
  DObj *obj; 
  DObj *pDObja; 
  LocalClientNum_t localClientNuma; 
  Weapon *r_stowedWeapona; 
  DObj *v117; 
  Weapon *r_executionWeapona; 
  __int64 v119; 
  __m256i v120; 
  FxMarkDObjUpdateContext context; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v122; 
  BgCharacterModelListBuildResults outModelListBuildResults; 
  DObjPartBits outFixedUpHidePartBits; 
  DObjPartBits hidePartBitsFromOldDObj; 
  XAnimBonePhysicsStateBuffer bonePhysicsState; 
  CharacterModelType outModelTypes[32]; 
  CharacterModelType refModelTypes[32]; 
  CharacterModelType actualModelTypes[32]; 
  DObjModel outDobjModels[32]; 
  DObjModel refDobjModels[32]; 
  DObjModel actualDobjModels[32]; 
  DObjModel oldDObjModels[32]; 
  __int128 v134; 

  v14 = alloca(v12);
  v119 = -2i64;
  v134 = _XMM6;
  v16 = es;
  v105 = (entityState_t *)es;
  v17 = pDObj;
  v117 = pDObj;
  localClientNuma = localClientNum;
  pDObja = pDObj;
  r_heldWeapona = (Weapon *)r_heldWeapon;
  r_stowedWeapona = (Weapon *)r_stowedWeapon;
  v18 = r_thrownWeapon;
  *(_QWORD *)numRefModels = r_thrownWeapon;
  r_executionWeapona = (Weapon *)r_executionWeapon;
  v19 = r_accessoryWeapon;
  v110 = r_accessoryWeapon;
  Sys_ProfBeginNamedEvent(0xFF0000FF, "BG_UpdateCharacterDObj");
  memset_0(outModelTypes, 0, sizeof(outModelTypes));
  memset_0(refModelTypes, 0, sizeof(refModelTypes));
  memset_0(actualModelTypes, 0, sizeof(actualModelTypes));
  BG_CheckThread();
  memset_0(&bonePhysicsState, 0, sizeof(bonePhysicsState));
  if ( PlayerASM_IsEnabled() && PlayerASM_IsConnectingPaths() )
    goto LABEL_229;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9761, ASSERT_TYPE_ASSERT, "(ci != nullptr)", (const char *)&queryFormat, "ci != nullptr") )
    __debugbreak();
  if ( ci->infoValid )
  {
    if ( ci->modelIndexChanged && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9765, ASSERT_TYPE_ASSERT, "(!ci->modelIndexChanged)", "%s\n\tBG_UpdateCharacterDObj: Body model changed without properly updating the character info model name.", "!ci->modelIndexChanged") )
      __debugbreak();
    v20 = 0;
    attachTagIndexChanged = ci->attachTagIndexChanged;
    do
    {
      if ( *(attachTagIndexChanged - 9) )
      {
        LODWORD(objID) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9768, ASSERT_TYPE_ASSERT, "(!ci->attachModelIndexChanged[attachIndex])", "%s\n\tBG_UpdateCharacterDObj: Attachment model[%d] changed without properly updating the character info model name.", "!ci->attachModelIndexChanged[attachIndex]", objID) )
          __debugbreak();
      }
      if ( *attachTagIndexChanged )
      {
        LODWORD(objID) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9769, ASSERT_TYPE_ASSERT, "(!ci->attachTagIndexChanged[attachIndex])", "%s\n\tBG_UpdateCharacterDObj: Attachment tag[%d] changed without properly updating the character info model name.", "!ci->attachTagIndexChanged[attachIndex]", objID) )
          __debugbreak();
      }
      ++v20;
      ++attachTagIndexChanged;
    }
    while ( v20 < 9 );
    v17 = v117;
    v18 = *(const Weapon **)numRefModels;
    v19 = v110;
    v16 = v105;
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  v117 = (DObj *)ActiveStatics;
  pXAnimTree = (DObj *)ci->pXAnimTree;
  obj = pXAnimTree;
  if ( !pXAnimTree )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9779, ASSERT_TYPE_ASSERT, "(pAnimTree)", (const char *)&queryFormat, "pAnimTree") )
      __debugbreak();
    pXAnimTree = obj;
  }
  if ( ci->animTreeDirty )
  {
    if ( v17 )
      XAnimClearTreeGoalWeights((XAnimTree *)pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, 0, 0.0, 1, v17, LINEAR);
    ci->animTreeDirty = 0;
  }
  if ( !ci->infoValid || !ci->model[0] )
  {
    v55 = (entityState_t *)v16;
    goto LABEL_228;
  }
  if ( !ActiveStatics->IsClient(ActiveStatics) || (v102 = 1, v16->eType != ET_PLAYER_CORPSE) )
    v102 = 0;
  if ( !ActiveStatics->IsClient(ActiveStatics) || (v77 = v16->eType == ET_PLAYER, inOutIndex = 1, !v77) )
    inOutIndex = 0;
  if ( v102 )
  {
    if ( !ci->corpseReferenceInfo.infoValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9809, ASSERT_TYPE_ASSERT, "(ci->corpseReferenceInfo.infoValid)", (const char *)&queryFormat, "ci->corpseReferenceInfo.infoValid") )
      __debugbreak();
    p_replicatedPartBits = &ci->corpseReferenceInfo.replicatedPartBits;
  }
  else
  {
    p_replicatedPartBits = &v16->partBits;
  }
  partBits = p_replicatedPartBits;
  ActiveStatics->GetPlayerWorldIkStatus(ActiveStatics, v16->number, v108);
  if ( *(_WORD *)&v108[0][0] != *(_WORD *)ci->worldIKStatus )
    ci->dobjDirty = 1;
  ci->weaponAnimsNeedUpdate = 0;
  if ( !forceUpdate )
  {
    usingExecutionProp = BG_GetExecutionFlagsIsUsingProp(v16);
    usingDetonator = BG_IsPlayerUsingDetonator(v105);
    if ( !BG_AnimationMP_IsCharacterDObjDirty(v17, partBits, ci, r_heldWeapona, r_stowedWeapona, v18, r_executionWeapona, v19, usingDetonator, usingExecutionProp, 0) )
      goto LABEL_229;
  }
  ci->weaponAnimsNeedUpdate = 1;
  if ( localClientNuma != LOCAL_CLIENT_INVALID )
    FX_MarkEntUpdateBegin(&context, v17, 0, 0);
  oldNumModels = 0;
  v27 = 0;
  __asm { vpxor   xmm6, xmm6, xmm6 }
  p_hidePartBitsFromOldDObj = &hidePartBitsFromOldDObj;
  do
  {
    *(_OWORD *)p_hidePartBitsFromOldDObj->array = _XMM6;
    ++v27;
    p_hidePartBitsFromOldDObj = (DObjPartBits *)((char *)p_hidePartBitsFromOldDObj + 16);
  }
  while ( v27 < 2 );
  if ( v17 )
  {
    v30 = v105;
    BG_UpdateCharacterDObj_HandleExistingDObj(v105, ci, &pDObja, v102, ActiveStatics, &bonePhysicsState, (DObjModel (*)[32])oldDObjModels, &oldNumModels, (const DObjPartBits **)&partBits, &hidePartBitsFromOldDObj);
  }
  else
  {
    v31 = DCONST_DVARINT_bg_debugCharDobjUpdate;
    if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    if ( v31->current.integer == -1 )
    {
      v30 = v105;
    }
    else
    {
      v32 = DCONST_DVARINT_bg_debugCharDobjUpdate;
      if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      v30 = v105;
      if ( v32->current.integer != v105->number )
        goto LABEL_63;
    }
    if ( ActiveStatics->IsClient(ActiveStatics) )
      Com_Printf(34, "BG_UpdateCharacterDObj: Obj does not exist\n");
  }
LABEL_63:
  ci->dobjHeldWeapon = *r_heldWeapona;
  v33 = r_stowedWeapona;
  ci->dobjStowedWeapon = *r_stowedWeapona;
  v34 = *(const Weapon **)numRefModels;
  *(__m256i *)&ci->dobjThrownWeapon.weaponIdx = **(__m256i **)numRefModels;
  *(_OWORD *)&ci->dobjThrownWeapon.attachmentVariationIndices[5] = *(_OWORD *)&v34->attachmentVariationIndices[5];
  *(double *)&ci->dobjThrownWeapon.attachmentVariationIndices[21] = *(double *)&v34->attachmentVariationIndices[21];
  *(_DWORD *)&ci->dobjThrownWeapon.weaponCamo = *(_DWORD *)&v34->weaponCamo;
  if ( ci->usingThrownWeapon && !ci->dobjThrownWeapon.weaponIdx )
    ci->usingThrownWeapon = 0;
  v35 = r_executionWeapona;
  ci->dobjExecutionWeapon = *r_executionWeapona;
  v36 = v110;
  *(__m256i *)&ci->dobjAccessoryWeapon.weaponIdx = *(__m256i *)&v110->weaponIdx;
  *(_OWORD *)&ci->dobjAccessoryWeapon.attachmentVariationIndices[5] = *(_OWORD *)&v36->attachmentVariationIndices[5];
  *(double *)&ci->dobjAccessoryWeapon.attachmentVariationIndices[21] = *(double *)&v36->attachmentVariationIndices[21];
  *(_DWORD *)&ci->dobjAccessoryWeapon.weaponCamo = *(_DWORD *)&v36->weaponCamo;
  ci->dobjTurretWeapon = *r_turretWeapon;
  ci->dobjUsingDetonator = BG_IsPlayerUsingDetonator(v30);
  ci->dobjUsingExecutionProp = BG_GetExecutionFlagsIsUsingProp(v30);
  ci->dobjHeldWeaponLoaded = ActiveStatics->IsWeaponWorldModelLoaded(ActiveStatics, r_heldWeapona);
  ci->dobjStowedWeaponLoaded = ActiveStatics->IsWeaponWorldModelLoaded(ActiveStatics, v33);
  ci->dobjThrownWeaponLoaded = ActiveStatics->IsWeaponWorldModelLoaded(ActiveStatics, v34);
  ci->dobjExecutionWeaponLoaded = ActiveStatics->IsWeaponWorldModelLoaded(ActiveStatics, v35);
  ci->dobjAccessoryWeaponLoaded = ActiveStatics->IsWeaponWorldModelLoaded(ActiveStatics, v36);
  ci->dobjForceCheckWeaponModelLoaded = 0;
  if ( v30->eType == ET_PLAYER )
  {
    LOBYTE(v37) = 1;
    Anim = BG_PlayerASM_GetAnim(v30, v37);
    Animset = BG_PlayerASM_GetAnimset(v30);
    if ( BG_PlayerASM_IsRaiseWeaponAlias(Anim, Animset) && ci->torso.animationNumber != Anim && ci->torso.animsetIndex == Animset )
    {
      weaponIdx = ci->dobjHeldWeapon.weaponIdx;
      if ( weaponIdx && BG_WeaponDefAtIndex(weaponIdx)->stowTag && BG_WeaponDefAtIndex(ci->dobjHeldWeapon.weaponIdx)->stowTag != scr_const.none )
        *(_WORD *)&ci->hideWeapon = 257;
    }
    else if ( ci->stowHeldWeapon && BG_GetWeaponType(&ci->dobjHeldWeapon, ci->isUsingWeaponAltMode != 0) == WEAPTYPE_GRENADE )
    {
      ci->stowHeldWeapon = 0;
    }
  }
  v120 = *(__m256i *)&ci->dobjHeldWeapon.weaponIdx;
  v41 = *(_OWORD *)&ci->dobjHeldWeapon.attachmentVariationIndices[5];
  v42 = *(double *)&ci->dobjHeldWeapon.attachmentVariationIndices[21];
  LODWORD(v110) = *(_DWORD *)&ci->dobjHeldWeapon.weaponCamo;
  outFixedUpHidePartBits = *(DObjPartBits *)&ci->dobjTurretWeapon.weaponIdx;
  v43 = *(_OWORD *)&ci->dobjTurretWeapon.attachmentVariationIndices[5];
  v44 = *(double *)&ci->dobjTurretWeapon.attachmentVariationIndices[21];
  LODWORD(pDObja) = *(_DWORD *)&ci->dobjTurretWeapon.weaponCamo;
  hideWeapon = ci->hideWeapon;
  stowHeldWeapon = ci->stowHeldWeapon;
  *(__m256i *)&ci->dobjHeldWeapon.weaponIdx = *(__m256i *)&ci->serverDobjHeldWeapon.weaponIdx;
  *(_OWORD *)&ci->dobjHeldWeapon.attachmentVariationIndices[5] = *(_OWORD *)&ci->serverDobjHeldWeapon.attachmentVariationIndices[5];
  *(double *)&ci->dobjHeldWeapon.attachmentVariationIndices[21] = *(double *)&ci->serverDobjHeldWeapon.attachmentVariationIndices[21];
  *(_DWORD *)&ci->dobjHeldWeapon.weaponCamo = *(_DWORD *)&ci->serverDobjHeldWeapon.weaponCamo;
  *(__m256i *)&ci->dobjTurretWeapon.weaponIdx = *(__m256i *)&ci->serverDobjTurretWeapon.weaponIdx;
  *(_OWORD *)&ci->dobjTurretWeapon.attachmentVariationIndices[5] = *(_OWORD *)&ci->serverDobjTurretWeapon.attachmentVariationIndices[5];
  *(double *)&ci->dobjTurretWeapon.attachmentVariationIndices[21] = *(double *)&ci->serverDobjTurretWeapon.attachmentVariationIndices[21];
  *(_DWORD *)&ci->dobjTurretWeapon.weaponCamo = *(_DWORD *)&ci->serverDobjTurretWeapon.weaponCamo;
  ci->hideWeapon = ci->serverDobjHideWeapon;
  ci->stowHeldWeapon = ci->serverDobjStowHeldWeapon;
  v45 = ActiveStatics->BuildReferenceCharacterModels(ActiveStatics, v30->number, attachIgnoreCollision, (DObjModel (*)[32])refDobjModels, (CharacterModelType (*)[32])refModelTypes);
  numRefModels[0] = v45;
  v46 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  if ( v46->current.integer == -1 )
    goto LABEL_232;
  v47 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v47);
  if ( v47->current.integer == v30->number )
  {
LABEL_232:
    if ( ActiveStatics->IsClient(ActiveStatics) )
    {
      Com_Printf(34, "BG_UpdateCharacterDObj: Server reference models\n");
      if ( (unsigned int)v45 > 0x20 )
      {
        LODWORD(curveID) = 32;
        LODWORD(forceBlendTime) = v45;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9494, ASSERT_TYPE_ASSERT, "( 0 ) <= ( numModels ) && ( numModels ) <= ( ( 32 ) )", "numModels not in [0, DOBJ_MAX_CHARACTER_SUBMODELS]\n\t%i not in [%i, %i]", forceBlendTime, 0i64, curveID) )
          __debugbreak();
      }
      ScopedCriticalSection::ScopedCriticalSection((ScopedCriticalSection *)&v122, CRITSECT_DEBUG_HIDDEN_BONES, SCOPED_CRITSECT_NORMAL);
      Com_Printf(34, "=== BEGIN DUMP MODEL NAMES  ===\n");
      v48 = 0;
      if ( v45 > 0 )
      {
        v49 = refModelTypes;
        v50 = refDobjModels;
        do
        {
          SLODWORD(fmt) = *v49;
          Com_Printf(34, "Model %d: %s Character Type: %d\n", (unsigned int)v48++, v50->model->name, fmt);
          ++v50;
          ++v49;
        }
        while ( v48 < v45 );
      }
      Com_Printf(34, "=== END DUMP MODEL NAMES  ===\n");
      ScopedCriticalSection::~ScopedCriticalSection((ScopedCriticalSection *)&v122);
    }
  }
  if ( inOutIndex )
  {
    p_corpseReferenceInfo = &ci->corpseReferenceInfo;
    if ( ci == (characterInfo_t *)-14684i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9572, ASSERT_TYPE_ASSERT, "(corpseRef)", (const char *)&queryFormat, "corpseRef") )
      __debugbreak();
    ci->corpseReferenceInfo.modelIndex = ci->modelIndex;
    *(__m256i *)ci->corpseReferenceInfo.attachModelIndex = *(__m256i *)ci->attachModelIndex;
    ci->corpseReferenceInfo.attachModelIndex[8] = ci->attachModelIndex[8];
    ci->corpseReferenceInfo.suitIndex = ci->suitIndex;
    ci->corpseReferenceInfo.skydiveAnimState = ci->skydiveAnimState;
    carryObjectFlags = ci->carryObjectFlags;
    if ( carryObjectFlags > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)carryObjectFlags, "unsigned", ci->carryObjectFlags) )
      __debugbreak();
    ci->corpseReferenceInfo.carryObjectFlags = carryObjectFlags;
    ci->corpseReferenceInfo.carryObjectIndex = ci->carryObjectIndex;
    p_corpseReferenceInfo->infoValid = 0;
    v53 = ActiveStatics->BuildReferenceCorpseModels(ActiveStatics, v105->number, attachIgnoreCollision, (DObjModel (*)[32])actualDobjModels, (CharacterModelType (*)[32])actualModelTypes);
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&ci->corpseReferenceInfo.replicatedPartBits);
    BgStatic::FixUpHidePartBits(ActiveStatics, v105->number, (const DObjModel (*)[32])refDobjModels, (const CharacterModelType (*)[32])refModelTypes, v45, (const DObjModel (*)[32])actualDobjModels, (const CharacterModelType (*)[32])actualModelTypes, v53, partBits, &ci->corpseReferenceInfo.replicatedPartBits);
    p_corpseReferenceInfo->infoValid = 1;
  }
  *(__m256i *)&ci->dobjHeldWeapon.weaponIdx = v120;
  *(_OWORD *)&ci->dobjHeldWeapon.attachmentVariationIndices[5] = v41;
  *(double *)&ci->dobjHeldWeapon.attachmentVariationIndices[21] = v42;
  *(_DWORD *)&ci->dobjHeldWeapon.weaponCamo = (_DWORD)v110;
  *(DObjPartBits *)&ci->dobjTurretWeapon.weaponIdx = outFixedUpHidePartBits;
  *(_OWORD *)&ci->dobjTurretWeapon.attachmentVariationIndices[5] = v43;
  *(double *)&ci->dobjTurretWeapon.attachmentVariationIndices[21] = v44;
  *(_DWORD *)&ci->dobjTurretWeapon.weaponCamo = (_DWORD)pDObja;
  ci->hideWeapon = hideWeapon;
  ci->stowHeldWeapon = stowHeldWeapon;
  v54 = v105;
  if ( !BgStatic::BuildCharacterModelList(ActiveStatics, ci, v105, attachIgnoreCollision, 0, (DObjModel (*)[32])outDobjModels, (CharacterModelType (*)[32])outModelTypes, &outModelListBuildResults) )
  {
    v55 = v105;
LABEL_228:
    BG_ClearCharacterDObj(v55);
    goto LABEL_229;
  }
  v56 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  if ( v56->current.integer == -1 )
    goto LABEL_111;
  v57 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v57);
  if ( v57->current.integer == v105->number )
  {
LABEL_111:
    v58 = ActiveStatics->IsClient(ActiveStatics);
    v59 = "SERVER";
    if ( v58 )
      v59 = "CLIENT";
    Com_Printf(34, "BG_UpdateCharacterDObj: Actual models (%s)\n", v59);
    numModels = outModelListBuildResults.numModels;
    if ( outModelListBuildResults.numModels > 0x20u )
    {
      LODWORD(curveIDa) = 32;
      LODWORD(forceBlendTimea) = outModelListBuildResults.numModels;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9494, ASSERT_TYPE_ASSERT, "( 0 ) <= ( numModels ) && ( numModels ) <= ( ( 32 ) )", "numModels not in [0, DOBJ_MAX_CHARACTER_SUBMODELS]\n\t%i not in [%i, %i]", forceBlendTimea, 0i64, curveIDa) )
        __debugbreak();
    }
    ScopedCriticalSection::ScopedCriticalSection((ScopedCriticalSection *)&v122, CRITSECT_DEBUG_HIDDEN_BONES, SCOPED_CRITSECT_NORMAL);
    Com_Printf(34, "=== BEGIN DUMP MODEL NAMES  ===\n");
    v61 = 0;
    if ( numModels > 0 )
    {
      v62 = outModelTypes;
      v63 = outDobjModels;
      do
      {
        SLODWORD(fmta) = *v62;
        Com_Printf(34, "Model %d: %s Character Type: %d\n", (unsigned int)v61++, v63->model->name, fmta);
        ++v63;
        ++v62;
      }
      while ( v61 < numModels );
      v54 = v105;
    }
    Com_Printf(34, "=== END DUMP MODEL NAMES  ===\n");
    ScopedCriticalSection::~ScopedCriticalSection((ScopedCriticalSection *)&v122);
    ActiveStatics = (BgStatic *)v117;
  }
  v64 = outModelListBuildResults.numModels;
  LODWORD(pDObja) = outModelListBuildResults.numModels;
  ci->firstWeaponPartIndex = outModelListBuildResults.firstWeaponPartIndex;
  weaponBoneCount = outModelListBuildResults.weaponBoneCount;
  ci->weaponBoneCount = outModelListBuildResults.weaponBoneCount;
  v66 = weaponBoneCount || ci->hideRocket || ci->skydiveAnimState || ci->heldWeaponOccluded || ci->stowedWeaponOccluded || v102;
  LODWORD(v110) = v66;
  LOBYTE(objIDa) = BG_IsCharacterEntity(v54);
  obj = ActiveStatics->CreateDObj(ActiveStatics, outDobjModels, v64, (XAnimTree *)obj, v54->number, ci->entityNum, objIDa);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9968, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  hideWeapon = oldNumModels > 0;
  v67 = 0;
  v68 = &v122;
  do
  {
    *(_OWORD *)v68->array = _XMM6;
    ++v67;
    v68 = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)v68 + 16);
  }
  while ( v67 < 2 );
  v69 = obj;
  if ( hideWeapon && v66 || (v70 = v105, BgStatic::FixUpHidePartBits(ActiveStatics, v105->number, (const DObjModel (*)[32])refDobjModels, (const CharacterModelType (*)[32])refModelTypes, numRefModels[0], (const DObjModel (*)[32])outDobjModels, (const CharacterModelType (*)[32])outModelTypes, v64, partBits, &outFixedUpHidePartBits), bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v122, &outFixedUpHidePartBits), v66) )
  {
    numberOfBonesBeforeWeapons = outModelListBuildResults.numberOfBonesBeforeWeapons;
    if ( (int)outModelListBuildResults.numberOfModelsBeforeWeapons < v64 )
    {
      v72 = &outDobjModels[outModelListBuildResults.numberOfModelsBeforeWeapons];
      v73 = &outModelTypes[outModelListBuildResults.numberOfModelsBeforeWeapons];
      v74 = (unsigned int)pDObja - outModelListBuildResults.numberOfModelsBeforeWeapons;
      v75 = r_executionWeapona;
      while ( 1 )
      {
        v76 = XModelNumBones(v72->model);
        if ( r_stowedWeapona->weaponIdx && *v73 == CHAR_MODEL_WEAPON_STOWED )
        {
          BG_UpdateWeaponHidePartBitsForModel(r_stowedWeapona, v72->model, (DObjPartBits *)&v122, numberOfBonesBeforeWeapons);
          if ( ci->stowedWeaponOccluded )
          {
            v77 = !BG_StowedOcclusionTestEnabled(r_stowedWeapona);
            goto LABEL_149;
          }
        }
        else if ( v75->weaponIdx && *v73 == CHAR_MODEL_WEAPON_EXECUTION )
        {
          BG_UpdateWeaponHidePartBitsForModel(v75, v72->model, (DObjPartBits *)&v122, numberOfBonesBeforeWeapons);
        }
        else if ( r_heldWeapona->weaponIdx && (unsigned int)(*v73 - 12) <= 1 )
        {
          BG_UpdateWeaponHidePartBitsForModel(r_heldWeapona, v72->model, (DObjPartBits *)&v122, numberOfBonesBeforeWeapons);
          v77 = !ci->heldWeaponOccluded;
LABEL_149:
          if ( !v77 )
            BG_HideOccludedWeaponParts(v72->model, (DObjPartBits *)&v122, numberOfBonesBeforeWeapons);
        }
        numberOfBonesBeforeWeapons += v76;
        ++v73;
        ++v72;
        if ( !--v74 )
        {
          v69 = obj;
          ActiveStatics = (BgStatic *)v117;
          v64 = (int)pDObja;
          v66 = (int)v110;
          break;
        }
      }
    }
    if ( ci->hideRocket )
    {
      inOutIndex = -2;
      if ( DObjGetBoneIndexInternal_18(v69, scr_const.tag_rocket, &inOutIndex, numRefModels) )
        bitarray_base<bitarray<256>>::setBit(&v122, inOutIndex);
    }
    v70 = v105;
  }
  DObjSetHidePartBits(v69, (const DObjPartBits *)&v122);
  v78 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v78);
  if ( v78->current.integer == -1 )
    goto LABEL_233;
  v79 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v79);
  if ( v79->current.integer == v70->number )
  {
LABEL_233:
    if ( ActiveStatics->IsClient(ActiveStatics) )
    {
      Com_Printf(34, "BG_UpdateCharacterDObj: Dumping hide part bits\n");
      BG_DebugDumpHiddenBones(v69, &v69->hidePartBits);
    }
  }
  if ( hideWeapon )
    BG_UpdateCharacterDObj_RestoreNonWeaponHideParts(v70, v69, (const DObjModel (*)[32])oldDObjModels, (const CharacterModelType (*)[32])ci->dobjModelTypes, oldNumModels, (const DObjModel (*)[32])outDobjModels, (const CharacterModelType (*)[32])outModelTypes, v64, &hidePartBitsFromOldDObj, outModelListBuildResults.numberOfBonesBeforeWeapons, outModelListBuildResults.weaponBoneCount);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&ci->replicatedPartBits, partBits);
  if ( !ci->stowedWeaponOccluded || !ci->attachModelIsOnBack )
    goto LABEL_176;
  v80 = DVARBOOL_killswitch_weapon_visibility_attachedmodel_check_enabled;
  if ( !DVARBOOL_killswitch_weapon_visibility_attachedmodel_check_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_visibility_attachedmodel_check_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v80);
  if ( v80->current.enabled )
    v81 = 1;
  else
LABEL_176:
    v81 = 0;
  if ( v66 && v81 )
  {
    if ( !ActiveStatics->IsClient(ActiveStatics) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10064, ASSERT_TYPE_ASSERT, "(bgameStatic->IsClient())", (const char *)&queryFormat, "bgameStatic->IsClient()") )
      __debugbreak();
    DObjGetHidePartBits(v69, (DObjPartBits *)&v122);
    v82 = 0;
    if ( v64 > 0 )
    {
      v83 = outDobjModels;
      v84 = outModelTypes;
      v85 = (DObjPartBits *)(unsigned int)v64;
      partBits = (DObjPartBits *)(unsigned int)v64;
      do
      {
        model = v83->model;
        if ( !v83->model )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          v85 = partBits;
        }
        numRefModels[0] = model->numBones;
        v87 = *(int *)v84;
        if ( (unsigned int)(v87 - 2) <= 7 )
        {
          if ( ci == (characterInfo_t *)-1344i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v88 = *(_DWORD *)&ci->attachTagIndexChanged[4 * ((v87 - 2) >> 5) + 12];
          if ( _bittest(&v88, ((_BYTE)v87 - 2) & 0x1F) )
          {
            if ( !ci->stowedWeaponOccluded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10081, ASSERT_TYPE_ASSERT, "(ci->stowedWeaponOccluded)", (const char *)&queryFormat, "ci->stowedWeaponOccluded") )
              __debugbreak();
            BG_HideOccludedWeaponParts(v83->model, (DObjPartBits *)&v122, v82);
          }
          v85 = partBits;
        }
        v82 += numRefModels[0];
        ++v84;
        ++v83;
        v85 = (DObjPartBits *)((char *)v85 - 1);
        partBits = v85;
      }
      while ( v85 );
      v69 = obj;
      ActiveStatics = (BgStatic *)v117;
    }
    DObjSetHidePartBits(v69, (const DObjPartBits *)&v122);
    ci->replicatedPartBitsOverriden = 1;
    v89 = DCONST_DVARINT_bg_debugCharDobjUpdate;
    if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v89);
    if ( v89->current.integer == -1 )
      goto LABEL_234;
    v90 = DCONST_DVARINT_bg_debugCharDobjUpdate;
    if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v90);
    if ( v90->current.integer == v105->number )
    {
LABEL_234:
      if ( ActiveStatics->IsClient(ActiveStatics) )
      {
        Com_Printf(34, "BG_UpdateCharacterDObj: Dumping hide part bits (post-client OR)\n");
        BG_DebugDumpHiddenBones(v69, &v69->hidePartBits);
      }
    }
  }
  else
  {
    ci->replicatedPartBitsOverriden = 0;
  }
  *(_WORD *)ci->worldIKStatus = *(_WORD *)&v108[0][0];
  *(__m256i *)ci->dobjModelTypes = *(__m256i *)outModelTypes;
  *(__m256i *)&ci->dobjModelTypes[8] = *(__m256i *)&outModelTypes[8];
  *(__m256i *)&ci->dobjModelTypes[16] = *(__m256i *)&outModelTypes[16];
  *(__m256i *)&ci->dobjModelTypes[24] = *(__m256i *)&outModelTypes[24];
  v91 = r_heldWeapona;
  if ( outModelListBuildResults.heldWeapon1Idx >= 0 && !ci->heldWeaponOccluded )
    BG_UpdatedWeaponBones(r_heldWeapona, v69, outModelListBuildResults.heldWeapon1Idx);
  if ( outModelListBuildResults.heldWeapon2Idx >= 0 && !ci->heldWeaponOccluded )
    BG_UpdatedWeaponBones(v91, v69, outModelListBuildResults.heldWeapon2Idx);
  v92 = r_stowedWeapona;
  if ( r_stowedWeapona->weaponIdx && outModelListBuildResults.stowedWeaponIdx >= 0 && !ci->stowedWeaponOccluded )
    BG_UpdatedWeaponBones(r_stowedWeapona, v69, outModelListBuildResults.stowedWeaponIdx);
  v93 = localClientNuma;
  if ( localClientNuma != LOCAL_CLIENT_INVALID )
  {
    FX_Dismemberment_DObjUpdate(localClientNuma, v69);
    FX_MarkEntUpdateEnd(&context, v93, v105->number, v69, 0, 0, 0);
  }
  ci->dobjDirty = 0;
  BG_UpdateVisibilitySlingBones(v105, v69, v102, v91, v92, outModelListBuildResults.heldWeapon1Idx, outModelListBuildResults.stowedWeaponIdx, 1, oldNumModels > 0);
  XAnimBonePhysicsRestoreState(v69, &bonePhysicsState);
  if ( ci->dobjHeldWeapon.weaponIdx )
    ActiveStatics->CreateWeaponPhysics(ActiveStatics, v69, &ci->dobjHeldWeapon);
  if ( ci->dobjStowedWeapon.weaponIdx )
    ((void (__fastcall *)(BgStatic *, DObj *))ActiveStatics->CreateWeaponPhysics)(ActiveStatics, v69);
LABEL_229:
  Sys_ProfEndNamedEvent();
}

/*
==============
BG_UpdateCharacterDObj_HandleExistingDObj
==============
*/
void BG_UpdateCharacterDObj_HandleExistingDObj(const entityState_t *es, characterInfo_t *ci, DObj **pDObj, const bool isClientCorpse, BgStatic *const bgameStatic, XAnimBonePhysicsStateBuffer *bonePhysicsState, DObjModel (*oldDObjModels)[32], int *oldNumModels, const DObjPartBits **replicatedPartBits, DObjPartBits *hidePartBitsFromOldDObj)
{
  DObjModel (*v13)[32]; 
  int NumModels; 
  int v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const entityState_t *v18; 
  DObjPartBits *v19; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  bool v24; 

  if ( !bgameStatic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9602, ASSERT_TYPE_ASSERT, "(bgameStatic)", (const char *)&queryFormat, "bgameStatic") )
    __debugbreak();
  if ( !isClientCorpse )
    XAnimBonePhysicsSaveState(*pDObj, bonePhysicsState);
  v13 = oldDObjModels;
  memset_0(oldDObjModels, 0, sizeof(DObjModel[32]));
  NumModels = DObjGetNumModels(*pDObj);
  v15 = 0;
  for ( *oldNumModels = NumModels; v15 < *oldNumModels; ++v15 )
  {
    (*v13)[0].model = DObjGetModel(*pDObj, v15);
    v13 = (DObjModel (*)[32])((char *)v13 + 80);
  }
  if ( !bgameStatic->IsClient(bgameStatic) )
  {
    if ( !*replicatedPartBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9663, ASSERT_TYPE_ASSERT, "(replicatedPartBits)", (const char *)&queryFormat, "replicatedPartBits") )
      __debugbreak();
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(hidePartBitsFromOldDObj, *replicatedPartBits);
    v20 = DCONST_DVARINT_bg_debugCharDobjUpdate;
    if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.integer == -1 )
    {
      v18 = es;
    }
    else
    {
      v21 = DCONST_DVARINT_bg_debugCharDobjUpdate;
      if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      v18 = es;
      if ( v21->current.integer != es->number )
        goto LABEL_41;
    }
    Com_Printf(34, "BG_UpdateCharacterDObj_HandleExistingDObj (SERVER): Existing model\n");
    BG_DebugDumpObjModelNames(*pDObj);
    Com_Printf(34, "BG_UpdateCharacterDObj_HandleExistingDObj (SERVER): Old replicated part bits\n");
    BG_DebugDumpPartBits(&ci->replicatedPartBits);
    Com_Printf(34, "BG_UpdateCharacterDObj_HandleExistingDObj (SERVER): New replicated part bits\n");
    BG_DebugDumpPartBits(*replicatedPartBits);
    Com_Printf(34, "BG_UpdateCharacterDObj_HandleExistingDObj (SERVER): hidePartBitsFromOldDObj\n");
    v19 = hidePartBitsFromOldDObj;
    goto LABEL_40;
  }
  v24 = bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::isEqual<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&(*replicatedPartBits)->DObjPartBitsT<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > >, &ci->replicatedPartBits);
  if ( !v24 || ci->replicatedPartBitsOverriden )
    *oldNumModels = 0;
  else
    DObjGetHidePartBits(*pDObj, hidePartBitsFromOldDObj);
  v16 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.integer == -1 )
  {
    v18 = es;
  }
  else
  {
    v17 = DCONST_DVARINT_bg_debugCharDobjUpdate;
    if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v18 = es;
    if ( v17->current.integer != es->number )
      goto LABEL_41;
  }
  Com_Printf(34, "BG_UpdateCharacterDObj_HandleExistingDObj (CLIENT): Existing model\n");
  BG_DebugDumpObjModelNames(*pDObj);
  Com_Printf(34, "BG_UpdateCharacterDObj_HandleExistingDObj (CLIENT): Old replicated part bits\n");
  BG_DebugDumpPartBits(&ci->replicatedPartBits);
  Com_Printf(34, "BG_UpdateCharacterDObj_HandleExistingDObj (CLIENT): New replicated part bits\n");
  BG_DebugDumpPartBits(*replicatedPartBits);
  if ( v24 )
  {
    Com_Printf(34, "BG_UpdateCharacterDObj_HandleExistingDObj (CLIENT): hidePartBitsFromOldDObj replicatedPartBitsSame: true\n");
    v19 = hidePartBitsFromOldDObj;
LABEL_40:
    BG_DebugDumpHiddenBones(*pDObj, v19);
    goto LABEL_41;
  }
  Com_Printf(34, "BG_UpdateCharacterDObj_HandleExistingDObj (CLIENT): hidePartBitsFromOldDObj replicatedPartBitsSame: false\n");
LABEL_41:
  bgameStatic->SafeDObjFree(bgameStatic, v18->number);
  *pDObj = NULL;
}

/*
==============
BG_UpdateCharacterDObj_RestoreCharacterInfoAfterReferenceList
==============
*/
void BG_UpdateCharacterDObj_RestoreCharacterInfoAfterReferenceList(const CharacterInfoBackUpForReferenceList *backup, characterInfo_t *ci)
{
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9709, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  *(__m256i *)&ci->dobjHeldWeapon.weaponIdx = *(__m256i *)&backup->dobjHeldWeapon.weaponIdx;
  *(_OWORD *)&ci->dobjHeldWeapon.attachmentVariationIndices[5] = *(_OWORD *)&backup->dobjHeldWeapon.attachmentVariationIndices[5];
  *(double *)&ci->dobjHeldWeapon.attachmentVariationIndices[21] = *(double *)&backup->dobjHeldWeapon.attachmentVariationIndices[21];
  *(_DWORD *)&ci->dobjHeldWeapon.weaponCamo = *(_DWORD *)&backup->dobjHeldWeapon.weaponCamo;
  *(__m256i *)&ci->dobjTurretWeapon.weaponIdx = *(__m256i *)&backup->dobjTurretWeapon.weaponIdx;
  *(_OWORD *)&ci->dobjTurretWeapon.attachmentVariationIndices[5] = *(_OWORD *)&backup->dobjTurretWeapon.attachmentVariationIndices[5];
  *(double *)&ci->dobjTurretWeapon.attachmentVariationIndices[21] = *(double *)&backup->dobjTurretWeapon.attachmentVariationIndices[21];
  *(_DWORD *)&ci->dobjTurretWeapon.weaponCamo = *(_DWORD *)&backup->dobjTurretWeapon.weaponCamo;
  ci->hideWeapon = backup->hideWeapon;
  ci->stowHeldWeapon = backup->stowHeldWeapon;
}

/*
==============
BG_UpdateCharacterDObj_RestoreNonWeaponHideParts
==============
*/
void BG_UpdateCharacterDObj_RestoreNonWeaponHideParts(const entityState_t *es, DObj *newDObj, const DObjModel (*oldDObjModels)[32], const CharacterModelType (*oldModelTypes)[32], const int oldNumModels, const DObjModel (*newDobjModels)[32], const CharacterModelType (*newModelTypes)[32], const int numNewModels, const DObjPartBits *hidePartBitsFromOldDObj, const unsigned int numberOfBonesBeforeWeapons, const unsigned int newWeaponBoneCount)
{
  __int128 v11; 
  const entityState_t *v12; 
  DObj *v15; 
  BgStatic *v16; 
  unsigned int v17; 
  unsigned __int64 v18; 
  unsigned int v19; 
  unsigned __int64 v20; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  BgStatic *ActiveStatics; 
  DObjPartBits partBits; 
  DObjPartBits outFixedUpHidePartBits; 
  __int128 v30; 

  v12 = es;
  v15 = newDObj;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9523, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9524, ASSERT_TYPE_ASSERT, "(newDObj)", (const char *)&queryFormat, "newDObj") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  v16 = ActiveStatics;
  if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9527, ASSERT_TYPE_ASSERT, "(bgameStatic)", (const char *)&queryFormat, "bgameStatic") )
    __debugbreak();
  BgStatic::FixUpHidePartBits(ActiveStatics, v12->number, oldDObjModels, oldModelTypes, oldNumModels, newDobjModels, newModelTypes, numNewModels, hidePartBitsFromOldDObj, &outFixedUpHidePartBits);
  DObjGetHidePartBits(v15, &partBits);
  v17 = 0;
  if ( newWeaponBoneCount )
  {
    v18 = 0i64;
    do
    {
      if ( v17 < numberOfBonesBeforeWeapons || v17 > numberOfBonesBeforeWeapons + newWeaponBoneCount - 1 )
      {
        v19 = 0x80000000 >> (v17 & 0x1F);
        v20 = v18 >> 5;
        if ( (v19 & outFixedUpHidePartBits.array[v20]) != 0 )
          partBits.array[v20] |= v19;
        else
          partBits.array[v20] &= ~v19;
      }
      ++v17;
      ++v18;
    }
    while ( v17 < 0x100 );
    v16 = ActiveStatics;
    v15 = newDObj;
    v12 = es;
  }
  else
  {
    v30 = v11;
    _RDI = 0i64;
    do
    {
      __asm { vlddqu  xmm6, xmmword ptr [rsp+rdi+108h+var_80.baseclass_0.baseclass_0.baseclass_0.array] }
      *(_OWORD *)&partBits.array[_RDI] = _XMM6;
      _RDI += 4i64;
      ++v17;
    }
    while ( v17 < 2 );
  }
  DObjSetHidePartBits(v15, &partBits);
  v16->OverridePlayerHideParts(v16, v12->number, &partBits);
  v23 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.integer == -1 )
    goto LABEL_33;
  v24 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  if ( v24->current.integer == v12->number )
  {
LABEL_33:
    if ( v16->IsClient(v16) )
    {
      Com_Printf(34, "BG_UpdateCharacterDObj_RestoreNonWeaponHideParts: Dumping hide part bits\n");
      BG_DebugDumpHiddenBones(v15, &v15->hidePartBits);
    }
  }
}

/*
==============
BG_UpdateCharacterDObj_SetupCharacterInfoForReferenceList
==============
*/
void BG_UpdateCharacterDObj_SetupCharacterInfoForReferenceList(CharacterInfoBackUpForReferenceList *backup, characterInfo_t *ci)
{
  __int128 v4; 
  int v5; 
  double v6; 
  __int128 v7; 
  double v8; 
  int v9; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9691, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  memset_0(backup, 0, sizeof(CharacterInfoBackUpForReferenceList));
  *(__m256i *)&backup->dobjHeldWeapon.weaponIdx = *(__m256i *)&ci->dobjHeldWeapon.weaponIdx;
  *(_OWORD *)&backup->dobjHeldWeapon.attachmentVariationIndices[5] = *(_OWORD *)&ci->dobjHeldWeapon.attachmentVariationIndices[5];
  *(double *)&backup->dobjHeldWeapon.attachmentVariationIndices[21] = *(double *)&ci->dobjHeldWeapon.attachmentVariationIndices[21];
  *(_DWORD *)&backup->dobjHeldWeapon.weaponCamo = *(_DWORD *)&ci->dobjHeldWeapon.weaponCamo;
  *(__m256i *)&backup->dobjTurretWeapon.weaponIdx = *(__m256i *)&ci->dobjTurretWeapon.weaponIdx;
  *(_OWORD *)&backup->dobjTurretWeapon.attachmentVariationIndices[5] = *(_OWORD *)&ci->dobjTurretWeapon.attachmentVariationIndices[5];
  *(double *)&backup->dobjTurretWeapon.attachmentVariationIndices[21] = *(double *)&ci->dobjTurretWeapon.attachmentVariationIndices[21];
  *(_DWORD *)&backup->dobjTurretWeapon.weaponCamo = *(_DWORD *)&ci->dobjTurretWeapon.weaponCamo;
  backup->hideWeapon = ci->hideWeapon;
  backup->stowHeldWeapon = ci->stowHeldWeapon;
  v4 = *(_OWORD *)&ci->serverDobjHeldWeapon.attachmentVariationIndices[5];
  v5 = *(_DWORD *)&ci->serverDobjHeldWeapon.weaponCamo;
  *(__m256i *)&ci->dobjHeldWeapon.weaponIdx = *(__m256i *)&ci->serverDobjHeldWeapon.weaponIdx;
  v6 = *(double *)&ci->serverDobjHeldWeapon.attachmentVariationIndices[21];
  *(_OWORD *)&ci->dobjHeldWeapon.attachmentVariationIndices[5] = v4;
  v7 = *(_OWORD *)&ci->serverDobjTurretWeapon.attachmentVariationIndices[5];
  *(double *)&ci->dobjHeldWeapon.attachmentVariationIndices[21] = v6;
  *(__m256i *)&ci->dobjTurretWeapon.weaponIdx = *(__m256i *)&ci->serverDobjTurretWeapon.weaponIdx;
  v8 = *(double *)&ci->serverDobjTurretWeapon.attachmentVariationIndices[21];
  *(_DWORD *)&ci->dobjHeldWeapon.weaponCamo = v5;
  v9 = *(_DWORD *)&ci->serverDobjTurretWeapon.weaponCamo;
  *(_OWORD *)&ci->dobjTurretWeapon.attachmentVariationIndices[5] = v7;
  *(double *)&ci->dobjTurretWeapon.attachmentVariationIndices[21] = v8;
  *(_DWORD *)&ci->dobjTurretWeapon.weaponCamo = v9;
  ci->hideWeapon = ci->serverDobjHideWeapon;
  ci->stowHeldWeapon = ci->serverDobjStowHeldWeapon;
}

/*
==============
BG_UpdateCustomNodeParameters
==============
*/
void BG_UpdateCustomNodeParameters(const BgHandler *handler, characterInfo_t *ci, const entityState_t *es, bool isNewAnim)
{
  BgStatic *ActiveStatics; 
  __int64 v9; 
  unsigned int number; 
  DObj *ClientDObj; 
  DObj *v12; 
  double v13; 
  const dvar_t *v14; 
  double ZAdjustment; 
  double v16; 
  double v17; 
  double v18; 
  float skydivePitchInterpolated; 
  double v20; 
  double v21; 
  unsigned __int8 SuitFacialAnimType; 
  unsigned int Animset; 
  unsigned int Anim; 
  PlayerASM_AnimSlot v25; 
  unsigned int v26; 
  unsigned int v27; 
  const PlayerAnimEntry *animation; 
  float outForwardSlope; 
  float outRightSlope; 
  vec2_t cartesianCoords; 
  vec3_t value; 

  BG_CheckThread();
  ActiveStatics = BgStatic::GetActiveStatics();
  v9 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6748, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  number = es->number;
  if ( ActiveStatics->IsClient(ActiveStatics) )
    ClientDObj = Com_GetClientDObj(number, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable));
  else
    ClientDObj = (DObj *)((__int64 (__fastcall *)(BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, number);
  v12 = ClientDObj;
  if ( ClientDObj && ClientDObj->tree )
  {
    XAnimSetFloatGameParameterByIndex(ClientDObj, 0, (float)ci->speed);
    BG_UpdateStickInputParameters(v12, ci);
    XAnimSetFloatGameParameterByIndex(v12, 0x2Du, ci->vehicleAnimation.yaw);
    XAnimSetFloatGameParameterByIndex(v12, 0x2Cu, ci->vehicleAnimation.pitch);
    handler->GetEntityOrigin((BgHandler *)handler, es->number, &value);
    XAnimSetVec3GameParameterByIndex(v12, 1u, &value);
    XAnimSetFloatGameParameterByIndex(v12, 2u, ci->playerAngles.v[1]);
    XAnimSetFloatGameParameterByIndex(v12, 0xBu, ci->animData.distance2D);
    XAnimSetFloatGameParameterByIndex(v12, 0xCu, ci->animData.distanceZ);
    XAnimSetFloatGameParameterByIndex(v12, 0xDu, ci->animData.angle);
    XAnimSetFloatGameParameterByIndex(v12, 0xEu, ci->mountAnimation.fraction);
    XAnimSetFloatGameParameterByIndex(v12, 0xFu, ci->mountAnimation.angles.v[0]);
    XAnimSetFloatGameParameterByIndex(v12, 0x10u, ci->mountAnimation.angles.v[1]);
    XAnimSetVec3GameParameterByIndex(v12, 0x11u, &ci->mountAnimation.pivotPoint);
    XAnimSetFloatGameParameterByIndex(v12, 0x12u, ci->mount.pivotHeight);
    v13 = vectosignedyaw((const vec2_t *)&ci->mountAnimation.worldmodelForwardDir);
    XAnimSetFloatGameParameterByIndex(v12, 0x13u, *(float *)&v13);
    XAnimSetFloatGameParameterByIndex(v12, 0x14u, ci->mountAnimation.yawVelocity);
    v14 = DCONST_DVARBOOL_bg_slope_worldmodel_anims;
    outForwardSlope = 0.0;
    outRightSlope = 0.0;
    if ( !DCONST_DVARBOOL_bg_slope_worldmodel_anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_slope_worldmodel_anims") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
      BG_SlopeWorldmodel_GetBSCoord(ci->legs.yawAngle, &ci->groundNormalInterpolated, &outForwardSlope, &outRightSlope);
    XAnimSetFloatGameParameterByIndex(v12, 0x3Au, outForwardSlope);
    XAnimSetFloatGameParameterByIndex(v12, 0x3Bu, outRightSlope);
    ZAdjustment = BG_SlopeWorldmodel_GetZAdjustment(ci->suitIndex, &ci->groundNormalInterpolated);
    XAnimSetFloatGameParameterByIndex(v12, 0x3Cu, *(float *)&ZAdjustment);
    XAnimSetBoolGameParameterByIndex(v12, 0x3Du, ci->isOnStairs);
    v16 = AngleDelta(ci->fWaistPitch, ci->fTorsoPitch);
    v17 = I_fclamp(*(float *)&v16, -90.0, 90.0);
    XAnimSetFloatGameParameterByIndex(v12, 0x3Fu, *(float *)&v17);
    XAnimSetFloatGameParameterByIndex(v12, 0x40u, ci->fTorsoPitch);
    v18 = I_fclamp(ci->weaponOccludedAdjustFrac, 0.0, 1.0);
    XAnimSetFloatGameParameterByIndex(v12, 0x3Eu, *(float *)&v18);
    BG_UpdateLadderNodeParameters(handler, ci, es);
    BG_Execution_UpdateScrubTime(ci, v12, *(_DWORD *)(v9 + 19528), *(_DWORD *)(v9 + 19532));
    XAnimSetFloatGameParameterByIndex(v12, 0x33u, ci->skydivePitchInterpolated);
    XAnimSetFloatGameParameterByIndex(v12, 0x34u, ci->skydiveRollInterpolated);
    XAnimSetFloatGameParameterByIndex(v12, 0x35u, ci->skydiveThrottleInterpolated);
    *(float *)&v18 = ci->skydiveRollInterpolated;
    skydivePitchInterpolated = ci->skydivePitchInterpolated;
    *(_QWORD *)&ci->skydivePolarAngleInterpolated = 0i64;
    cartesianCoords.v[0] = *(float *)&v18;
    cartesianCoords.v[1] = skydivePitchInterpolated;
    CartesianToPolar(&cartesianCoords, &ci->skydivePolarAngleInterpolated, &ci->skydivePolarRadiusInterpolated);
    v20 = I_fclamp(ci->skydivePolarRadiusInterpolated, 0.0, 1.0);
    ci->skydivePolarRadiusInterpolated = *(float *)&v20;
    v21 = AngleNormalize360(ci->skydivePolarAngleInterpolated);
    ci->skydivePolarAngleInterpolated = *(float *)&v21;
    XAnimSetFloatGameParameterByIndex(v12, 0x36u, *(float *)&v21);
    XAnimSetFloatGameParameterByIndex(v12, 0x37u, ci->skydivePolarRadiusInterpolated);
    SuitFacialAnimType = BG_GetSuitFacialAnimType(ci->suitIndex);
    XAnimSetByteGameParameterByIndex(v12, 0x38u, SuitFacialAnimType);
    if ( PlayerASM_IsEnabled() )
    {
      Animset = BG_PlayerASM_GetAnimset(ci);
      Anim = BG_PlayerASM_GetAnim(ci, MOVEMENT);
      LOBYTE(v25) = 1;
      v26 = Anim;
      v27 = BG_PlayerASM_GetAnim(ci, v25);
      if ( BG_PlayerASM_IsTurretAlias(v26, Animset) )
        XAnimSetFloatGameParameterByIndex(v12, 0x20u, ci->turretYawFraction);
      XAnimSetFloatGameParameterByIndex(v12, 0x22u, ci->turretPlayerAngles.v[1]);
      XAnimSetFloatGameParameterByIndex(v12, 0x21u, ci->turretPlayerAngles.v[0]);
      XAnimSetFloatGameParameterByIndex(v12, 0x23u, ci->turretPlayerHeight);
      XAnimSetIntGameParameterByIndex(v12, 0x39u, v27 + 7 * v26);
      BG_PlayerASM_UpdateTreeParameters(v12, ci, isNewAnim);
      BG_AnimUpdateScriptedAnimSceneTime(ci, v12, *(_DWORD *)(v9 + 19528), *(_DWORD *)(v9 + 19532));
    }
    else
    {
      animation = ci->legs.animation;
      if ( animation && (animation->flags & 4) != 0 )
        XAnimSetFloatGameParameterByIndex(v12, 0x20u, ci->turretYawFraction);
    }
    BG_GameInterface_UpdateCustomNodeParameters(ci, es);
  }
}

/*
==============
BG_UpdateLadderNodeParameters
==============
*/
void BG_UpdateLadderNodeParameters(const BgHandler *handler, characterInfo_t *ci, const entityState_t *es)
{
  BgStatic *ActiveStatics; 
  unsigned int number; 
  DObj *ClientDObj; 
  DObj *v9; 
  const SuitDef *SuitDef; 
  double v11; 
  double TargetAnimationTime; 
  vec3_t trBase; 
  vec3_t outAnchorPos; 
  vec3_t angles; 
  LadderInfo outLadderInfo; 

  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6492, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6493, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6494, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  BG_Ladder_HandleAnimTransition(ci, es);
  if ( BG_IsPlayingLadderAnims(ci) )
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6504, ASSERT_TYPE_ASSERT, "(bgameStatic)", (const char *)&queryFormat, "bgameStatic") )
      __debugbreak();
    number = es->number;
    if ( ActiveStatics->IsClient(ActiveStatics) )
      ClientDObj = Com_GetClientDObj(number, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable));
    else
      ClientDObj = (DObj *)((__int64 (__fastcall *)(BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, number);
    v9 = ClientDObj;
    Trajectory_GetTrBase(&es->lerp.pos, &trBase);
    if ( BG_GetLadderInfo(&trBase, handler, &outLadderInfo, NULL, 0, &ci->edgeQueryLadderHintNodeCharInfo, &ci->edgeQueryLadderWidthHintNodeCharInfo) )
    {
      BG_Ladder_GetAnchorWorldPosition(&trBase, ci->suitIndex, ci->isFirstPerson != 0, &outAnchorPos);
      SuitDef = BG_GetSuitDef(ci->suitIndex);
      if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6520, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
        __debugbreak();
      AxisToAngles(&outLadderInfo.axis, &angles);
      XAnimSetVec3GameParameterByIndex(v9, 0x15u, &outAnchorPos);
      XAnimSetVec3GameParameterByIndex(v9, 0x16u, &outLadderInfo.bottom);
      XAnimSetVec3GameParameterByIndex(v9, 0x17u, &outLadderInfo.top);
      XAnimSetFloatGameParameterByIndex(v9, 0x18u, (float)ci->speed);
      XAnimSetFloatGameParameterByIndex(v9, 0x19u, outLadderInfo.rungDistance);
      XAnimSetFloatGameParameterByIndex(v9, 0x1Au, SuitDef->ladder_handDistance);
      XAnimSetVec3GameParameterByIndex(v9, 0x1Bu, &angles);
      XAnimSetFloatGameParameterByIndex(v9, 0x1Cu, outLadderInfo.width);
      v11 = AngleDelta(ci->torso.yawAngle, ci->legs.yawAngle);
      _XMM1 = 0i64;
      __asm { vroundss xmm5, xmm1, xmm3, 1 }
      XAnimSetFloatGameParameterByIndex(v9, 0x1Du, (float)((float)(ci->torso.pitchAngle * 0.0027777778) - *(float *)&_XMM5) * -360.0);
      XAnimSetFloatGameParameterByIndex(v9, 0x1Eu, *(float *)&v11);
      TargetAnimationTime = BG_Ladder_GetTargetAnimationTime(&outAnchorPos, &outLadderInfo.bottom, &outLadderInfo.top, SuitDef->ladder_handDistance);
      XAnimSetFloatGameParameterByIndex(v9, 0x1Fu, *(float *)&TargetAnimationTime);
    }
  }
}

/*
==============
BG_UpdateMovementDir
==============
*/
void BG_UpdateMovementDir(pmove_t *pm, pml_t *pml, int clampOnly)
{
  __int128 v3; 
  playerState_s *ps; 
  __int64 v8; 
  float v10; 
  int v11; 
  EdgeQueryCache *v12; 
  double v13; 
  int v14; 
  __int16 linkEnt; 
  double v16; 
  int v17; 
  __int16 v18; 
  double v19; 
  float v20; 
  double v21; 
  double v22; 
  int v23; 
  bool v24; 
  __int128 v25; 
  tmat33_t<vec3_t> *p_m_axis; 
  float v27; 
  float v28; 
  double v32; 
  double v33; 
  float v34; 
  int v35; 
  bool v36; 
  bool v37; 
  __int16 groundEntityNum; 
  bool v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  bool IsEnabled; 
  float v45; 
  float v46; 
  double v47; 
  float v48; 
  const dvar_t *v51; 
  const char *v52; 
  double Float_Internal_DebugName; 
  PlayerAnimStrafeStates v54; 
  double v55; 
  double v56; 
  int v57; 
  int v58; 
  int v59; 
  __int64 animMoveType; 
  int v61; 
  int v62; 
  BgStatic *ActiveStatics; 
  __int64 v64; 
  __int64 v65; 
  __int64 v66; 
  unsigned int Animset; 
  PlayerASM_AnimSlot v68; 
  unsigned int v69; 
  unsigned int Anim; 
  bool v71; 
  unsigned __int8 v72; 
  int v73; 
  int v74; 
  double v75; 
  double v76; 
  int v77; 
  unsigned int *edgeLadderQueryHint; 
  SuitAnimType suitAnimIndex; 
  vec3_t vec; 
  vec2_t v82; 
  float v83; 
  vec3_t outVictimPos; 
  vec3_t outAttackerPos; 
  LadderInfo outLadderInfo; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3228, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3230, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3230, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->vehicleState.entity == 2047 )
  {
    suitAnimIndex = BG_GetSuitAnimIndexFromPlayerState(ps);
    *(_QWORD *)vec.v = BG_GetSuitDef(ps->suitIndex);
    v8 = *(_QWORD *)vec.v;
    if ( !*(_QWORD *)vec.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3242, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    *(double *)&v3 = MSG_UnpackUnsignedFloat(ps->movementDirPrecise, 360.0, 0x10u);
    _XMM7 = v3;
    BG_SetPreciseMovementDir(ps, 0.0);
    if ( !BG_GameInterface_UpdateMovementDir(pm, pml, clampOnly) )
    {
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
      {
        v10 = ps->velocity.v[1];
        vec.v[0] = ps->velocity.v[0];
        vec.v[2] = ps->velocity.v[2];
        vec.v[1] = v10;
        WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&pm->refFrame, &vec);
        v11 = BG_DegreesToMovementDir(ps->viewangles.v[1]);
        ps->movementDir = v11;
        if ( (unsigned __int8)v11 != v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3263, ASSERT_TYPE_ASSERT, "(( ps->movementDir & ( (1 << 8) - 1 ) ) == ps->movementDir)", (const char *)&queryFormat, "( ps->movementDir & ( (1 << MOVEMENTDIR_BITS) - 1 ) ) == ps->movementDir") )
          __debugbreak();
        goto LABEL_124;
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
      {
        v12 = pm->m_bgHandler->GetEdgeQueryCache(pm->m_bgHandler, (unsigned int)ps->clientNum);
        BG_GetLadderInfo(&ps->origin, pm->m_bgHandler, &outLadderInfo, NULL, 0, &v12->ladderHintNode, &v12->ladderWidthHintNode);
        v13 = vectoyaw((const vec2_t *)&outLadderInfo);
        v14 = BG_DegreesToMovementDir(*(float *)&v13 + 180.0);
        ps->movementDir = v14;
        if ( (unsigned __int8)v14 != v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3281, ASSERT_TYPE_ASSERT, "((ps->movementDir & ((1 << 8) - 1)) == ps->movementDir)", (const char *)&queryFormat, "(ps->movementDir & ((1 << MOVEMENTDIR_BITS) - 1)) == ps->movementDir") )
          __debugbreak();
        BG_StopTurning(pm, pml);
        return;
      }
      if ( BG_IsScriptedSceneAnimFlagEnabled(ps) )
      {
        linkEnt = ps->linkEnt;
        if ( linkEnt != 2047 )
        {
          pm->m_bgHandler->GetEntityAngles((BgHandler *)pm->m_bgHandler, linkEnt, (vec3_t *)&v82);
          v16 = AngleNormalize360(v82.v[1]);
          v17 = BG_DegreesToMovementDir(*(float *)&v16);
          ps->movementDir = v17;
          if ( (unsigned __int8)v17 != v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3296, ASSERT_TYPE_ASSERT, "((ps->movementDir & ((1 << 8) - 1)) == ps->movementDir)", (const char *)&queryFormat, "(ps->movementDir & ((1 << MOVEMENTDIR_BITS) - 1)) == ps->movementDir") )
            __debugbreak();
          BG_StopTurning(pm, pml);
          return;
        }
      }
      if ( BG_IsLinkedToAnimFlagEnabled(ps) )
      {
        v18 = ps->linkEnt;
        if ( v18 != 2047 )
        {
          pm->m_bgHandler->GetEntityAngles((BgHandler *)pm->m_bgHandler, v18, (vec3_t *)&v82);
          v19 = AngleNormalize360(v82.v[1]);
          v20 = *(float *)&v19;
          v21 = AngleNormalize360(ps->viewangles.v[1]);
          v22 = AngleClamp(*(const float *)&v21, v20, 30.0);
          v23 = BG_DegreesToMovementDir(*(float *)&v22);
          ps->movementDir = v23;
          if ( (unsigned __int8)v23 != v23 )
          {
            v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3316, ASSERT_TYPE_ASSERT, "((ps->movementDir & ((1 << 8) - 1)) == ps->movementDir)", (const char *)&queryFormat, "(ps->movementDir & ((1 << MOVEMENTDIR_BITS) - 1)) == ps->movementDir");
            goto LABEL_122;
          }
LABEL_124:
          BG_StopTurning(pm, pml);
          return;
        }
      }
      if ( BG_IsThirdPersonMode(pm->weaponMap, ps) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x16u) && ps->meleeChargeEnt >= 0 && ps->meleeChargeEnt <= 0x7FEu )
      {
        if ( !PM_MeleeGetEntityOriginVelocity(pm, ps->meleeChargeEnt, &outAttackerPos, &outVictimPos, NULL) )
        {
          Com_PrintWarning(34, "BG_UpdateMovementDir: Could not fetch melee charge target ent. Keeping movementDir from last frame\n");
          goto LABEL_124;
        }
        vec.v[0] = outVictimPos.v[0] - outAttackerPos.v[0];
        vec.v[2] = outVictimPos.v[2] - outAttackerPos.v[2];
        vec.v[1] = outVictimPos.v[1] - outAttackerPos.v[1];
        WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &vec);
        v25 = LODWORD(vec.v[1]);
        *(float *)&v25 = (float)((float)(*(float *)&v25 * *(float *)&v25) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]);
        p_m_axis = &pm->refFrame.m_axis;
        if ( *(float *)&v25 >= 0.001 )
        {
          *(float *)&v25 = fsqrt(*(float *)&v25);
          _XMM2 = v25;
          __asm
          {
            vcmpless xmm0, xmm2, cs:__real@80000000
            vblendvps xmm0, xmm2, xmm1, xmm0
          }
          *(float *)&_XMM2 = 1.0 / *(float *)&_XMM0;
          vec.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM0);
          v28 = vec.v[2] * (float)(1.0 / *(float *)&_XMM0);
          v27 = vec.v[1] * *(float *)&_XMM2;
        }
        else
        {
          v27 = pm->refFrame.m_axis.m[0].v[1];
          vec.v[0] = p_m_axis->m[0].v[0];
          v28 = pm->refFrame.m_axis.m[0].v[2];
        }
        vec.v[2] = v28;
        vec.v[1] = v27;
        MatrixTranspose(p_m_axis, &outLadderInfo.axis);
        v82.v[0] = (float)((float)(vec.v[1] * outLadderInfo.axis.m[1].v[0]) + (float)(vec.v[0] * outLadderInfo.axis.m[0].v[0])) + (float)(vec.v[2] * outLadderInfo.axis.m[2].v[0]);
        v82.v[1] = (float)((float)(vec.v[1] * outLadderInfo.axis.m[1].v[1]) + (float)(vec.v[0] * outLadderInfo.axis.m[0].v[1])) + (float)(vec.v[2] * outLadderInfo.axis.m[2].v[1]);
        v83 = (float)((float)(vec.v[1] * outLadderInfo.axis.m[1].v[2]) + (float)(vec.v[0] * outLadderInfo.axis.m[0].v[2])) + (float)(vec.v[2] * outLadderInfo.axis.m[2].v[2]);
        v32 = vectoyaw(&v82);
        v33 = I_fclamp(*(float *)&v32, 0.0, 360.0);
        v34 = *(float *)&v33;
        v35 = BG_DegreesToMovementDir(*(float *)&v33);
        ps->movementDir = v35;
        if ( (unsigned __int8)v35 != v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3347, ASSERT_TYPE_ASSERT, "((ps->movementDir & ((1 << 8) - 1)) == ps->movementDir)", (const char *)&queryFormat, "(ps->movementDir & ((1 << MOVEMENTDIR_BITS) - 1)) == ps->movementDir") )
          __debugbreak();
        v36 = *(_BYTE *)(v8 + 436) == 0;
LABEL_47:
        if ( !v36 )
          BG_SetPreciseMovementDir(ps, v34);
        goto LABEL_124;
      }
      v37 = pm->cmd.forwardmove || pm->cmd.rightmove;
      groundEntityNum = ps->groundEntityNum;
      v39 = *(_BYTE *)(*(_QWORD *)vec.v + 436i64) || !clampOnly && groundEntityNum != 2047;
      if ( v37 && v39 )
      {
        v40 = ps->origin.v[0] - pml->previous_origin.v[0];
        v41 = ps->origin.v[1] - pml->previous_origin.v[1];
        v42 = ps->origin.v[2] - pml->previous_origin.v[2];
        v43 = fsqrt((float)((float)(v41 * v41) + (float)(v40 * v40)) + (float)(v42 * v42));
        IsEnabled = PlayerASM_IsEnabled();
        v45 = IsEnabled ? 0.0 : pml->frametime * 5.0;
        if ( v43 > v45 )
        {
          if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && !IsEnabled )
          {
            v46 = pml->wishdir.v[1];
            vec.v[0] = pml->wishdir.v[0];
            vec.v[2] = pml->wishdir.v[2];
            vec.v[1] = v46;
            WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&pm->refFrame, &vec);
            v47 = vectoyaw((const vec2_t *)&vec);
            v48 = *(float *)&v47;
            if ( *(_BYTE *)(v8 + 436) )
            {
              BG_MovementDirToDegrees(ps->movementDir);
              if ( *(float *)&_XMM7 == 0.0 )
              {
                _XMM1 = LODWORD(FLOAT_1_40625);
                __asm
                {
                  vcmpltss xmm3, xmm1, xmm2
                  vblendvps xmm7, xmm7, xmm0, xmm3
                }
              }
              if ( groundEntityNum == 2047 )
              {
                v51 = DCONST_DVARFLT_bg_cameraIndependentMovementDirRateInAir;
                v52 = "bg_cameraIndependentMovementDirRateInAir";
              }
              else
              {
                v51 = DCONST_DVARFLT_bg_cameraIndependentMovementDirRate;
                v52 = "bg_cameraIndependentMovementDirRate";
              }
              Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v51, v52);
              AngleClamp(v48, *(const float *)&_XMM7, *(float *)&Float_Internal_DebugName * pml->frametime);
            }
            else
            {
              v54 = BG_DetermineStrafeCondition(pm, (float)pm->cmd.forwardmove, (float)pm->cmd.rightmove);
              if ( v54 == ANIM_STRAFE_LEFT )
              {
                v48 = *(float *)&v47 + -90.0;
              }
              else if ( v54 == ANIM_STRAFE_RIGHT )
              {
                v48 = *(float *)&v47 + 90.0;
              }
              else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xAu) )
              {
                v48 = *(float *)&v47 + -180.0;
              }
            }
            v55 = AngleNormalize360(v48);
            v56 = I_fclamp(*(float *)&v55, 0.0, 360.0);
            v34 = *(float *)&v56;
            v57 = BG_DegreesToMovementDir(*(float *)&v56);
            ps->movementDir = v57;
            if ( (unsigned __int8)v57 != v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3447, ASSERT_TYPE_ASSERT, "(( ps->movementDir & ( (1 << 8) - 1 ) ) == ps->movementDir)", (const char *)&queryFormat, "( ps->movementDir & ( (1 << MOVEMENTDIR_BITS) - 1 ) ) == ps->movementDir") )
              __debugbreak();
            v36 = *(_BYTE *)(v8 + 436) == 0;
            goto LABEL_47;
          }
          v58 = BG_DegreesToMovementDir(ps->viewangles.v[1]);
          ps->movementDir = v58;
          if ( (unsigned __int8)v58 == v58 )
            goto LABEL_124;
          v59 = 3388;
LABEL_121:
          v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", v59, ASSERT_TYPE_ASSERT, "(( ps->movementDir & ( (1 << 8) - 1 ) ) == ps->movementDir)", (const char *)&queryFormat, "( ps->movementDir & ( (1 << MOVEMENTDIR_BITS) - 1 ) ) == ps->movementDir");
LABEL_122:
          if ( v24 )
            __debugbreak();
          goto LABEL_124;
        }
      }
      animMoveType = ps->animMoveType;
      if ( (unsigned __int8)animMoveType >= 0x80u )
      {
        LODWORD(edgeLadderQueryHint) = ps->animMoveType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2331, ASSERT_TYPE_ASSERT, "(unsigned)( animMoveType ) < (unsigned)( NUM_ANIM_MOVETYPES )", "animMoveType doesn't index NUM_ANIM_MOVETYPES\n\t%i not in [0, %i)", edgeLadderQueryHint, 128) )
          __debugbreak();
      }
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2333, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
        __debugbreak();
      v61 = 0;
      if ( (unsigned int)animMoveType >= 0x26 )
      {
        ActiveStatics = BgStatic::GetActiveStatics();
        v64 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
        if ( !v64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2342, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
          __debugbreak();
        v65 = *(_QWORD *)(v64 + 8i64 * (int)suitAnimIndex);
        if ( !v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2345, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
          __debugbreak();
        v66 = *(_QWORD *)(v65 + 56);
        v8 = *(_QWORD *)vec.v;
        v62 = *(_DWORD *)(32 * animMoveType + v66);
      }
      else
      {
        LOBYTE(v62) = 0;
      }
      if ( PlayerASM_IsEnabled() )
      {
        Animset = BG_PlayerASM_GetAnimset(ps);
        LOBYTE(v68) = 1;
        v69 = Animset;
        Anim = BG_PlayerASM_GetAnim(ps, v68);
        v71 = BG_PlayerASM_IsNoAimingIfProneAlias(Anim, v69) != 0;
      }
      else
      {
        v71 = (BG_AnimationMP_GetAnimationForIndex(ps->torsoAnim & 0xFFFFEFFF, suitAnimIndex)->flags & 0x8000) != 0;
      }
      if ( (v62 & 2) != 0 || ps->animMoveType == 3 && v71 || BG_ContextMount_IsActive(ps) )
      {
        v77 = BG_DegreesToMovementDir(ps->viewangles.v[1]);
        ps->movementDir = v77;
        if ( (unsigned __int8)v77 == v77 )
          goto LABEL_124;
        v59 = 3497;
        goto LABEL_121;
      }
      v72 = ps->animMoveType;
      if ( (unsigned __int8)(v72 - 1) <= 2u || (v73 = 0, v72 == 21) )
        v73 = 1;
      if ( clampOnly || !v73 )
        v61 = 1;
      v74 = BG_TurnMovementDir(pm, pml, v61);
      ps->movementDir = v74;
      if ( (unsigned __int8)v74 != v74 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3506, ASSERT_TYPE_ASSERT, "(( ps->movementDir & ( (1 << 8) - 1 ) ) == ps->movementDir)", (const char *)&queryFormat, "( ps->movementDir & ( (1 << MOVEMENTDIR_BITS) - 1 ) ) == ps->movementDir") )
        __debugbreak();
      if ( *(_BYTE *)(v8 + 436) )
      {
        v75 = BG_MovementDirToDegrees(ps->movementDir);
        v76 = I_fclamp(*(float *)&v75, 0.0, 360.0);
        BG_SetPreciseMovementDir(ps, *(float *)&v76);
      }
    }
  }
}

/*
==============
BG_UpdateStickInputParameters
==============
*/
void BG_UpdateStickInputParameters(DObj *obj, characterInfo_t *ci)
{
  BgStatic *ActiveStatics; 
  __int64 v5; 
  float v6; 
  const dvar_t *v7; 
  float value; 
  double v9; 
  float v10; 
  double v11; 
  float v12; 
  double v13; 
  float v14; 
  double v15; 
  const dvar_t *v16; 
  float v17; 
  double v18; 
  float v19; 
  double v20; 
  float v21; 
  double v22; 
  float v23; 
  double v24; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6452, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6453, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6456, ASSERT_TYPE_ASSERT, "(bgameStatic)", (const char *)&queryFormat, "bgameStatic") )
    __debugbreak();
  v5 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6458, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v6 = (float)*(int *)(v5 + 19540) * 0.001;
  if ( v6 > 0.0 )
  {
    v7 = DCONST_DVARFLT_animscript_player_input_smoothing_fast;
    if ( !DCONST_DVARFLT_animscript_player_input_smoothing_fast && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_player_input_smoothing_fast") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    value = v7->current.value;
    v9 = DiffTrack(ci->leftStickInputInterpolated.v[0], ci->leftStickInputFastLerp.v[0], value, v6);
    v10 = ci->leftStickInputFastLerp.v[1];
    ci->leftStickInputFastLerp.v[0] = *(float *)&v9;
    v11 = DiffTrack(ci->leftStickInputInterpolated.v[1], v10, value, v6);
    v12 = ci->rightStickInputFastLerp.v[0];
    ci->leftStickInputFastLerp.v[1] = *(float *)&v11;
    v13 = DiffTrack(ci->rightStickInputInterpolated.v[0], v12, value, v6);
    v14 = ci->rightStickInputFastLerp.v[1];
    ci->rightStickInputFastLerp.v[0] = *(float *)&v13;
    v15 = DiffTrack(ci->rightStickInputInterpolated.v[1], v14, value, v6);
    ci->rightStickInputFastLerp.v[1] = *(float *)&v15;
    v16 = DCONST_DVARFLT_animscript_player_input_smoothing_slow;
    if ( !DCONST_DVARFLT_animscript_player_input_smoothing_slow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_player_input_smoothing_slow") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v17 = v16->current.value;
    v18 = DiffTrack(ci->leftStickInputInterpolated.v[0], ci->leftStickInputSlowLerp.v[0], v17, v6);
    v19 = ci->leftStickInputSlowLerp.v[1];
    ci->leftStickInputSlowLerp.v[0] = *(float *)&v18;
    v20 = DiffTrack(ci->leftStickInputInterpolated.v[1], v19, v17, v6);
    v21 = ci->rightStickInputSlowLerp.v[0];
    ci->leftStickInputSlowLerp.v[1] = *(float *)&v20;
    v22 = DiffTrack(ci->rightStickInputInterpolated.v[0], v21, v17, v6);
    v23 = ci->rightStickInputSlowLerp.v[1];
    ci->rightStickInputSlowLerp.v[0] = *(float *)&v22;
    v24 = DiffTrack(ci->rightStickInputInterpolated.v[1], v23, v17, v6);
    ci->rightStickInputSlowLerp.v[1] = *(float *)&v24;
  }
  XAnimSetFloatGameParameterByIndex(obj, 3u, ci->leftStickInputFastLerp.v[0]);
  XAnimSetFloatGameParameterByIndex(obj, 4u, ci->leftStickInputFastLerp.v[1]);
  XAnimSetFloatGameParameterByIndex(obj, 5u, ci->rightStickInputFastLerp.v[0]);
  XAnimSetFloatGameParameterByIndex(obj, 6u, ci->rightStickInputFastLerp.v[1]);
  XAnimSetFloatGameParameterByIndex(obj, 7u, ci->leftStickInputSlowLerp.v[0]);
  XAnimSetFloatGameParameterByIndex(obj, 8u, ci->leftStickInputSlowLerp.v[1]);
  XAnimSetFloatGameParameterByIndex(obj, 9u, ci->rightStickInputSlowLerp.v[0]);
  XAnimSetFloatGameParameterByIndex(obj, 0xAu, ci->rightStickInputSlowLerp.v[1]);
}

/*
==============
BG_UpdateVehicleAnimCharacterInfo
==============
*/
void BG_UpdateVehicleAnimCharacterInfo(const BgHandler *handler, DObj *obj, const entityState_t *es, const float deltaTime, characterInfo_t *ci)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  int LinkedVehicle; 
  BGVehicles *v13; 
  float v14; 
  float v17; 
  double v18; 
  double v21; 
  double v22; 
  float pitch; 
  double v24; 
  double v25; 
  int v26; 
  animScriptVehicleScrubFacing_t v27; 
  __int64 v28; 
  animScriptVehicleSeat_t outVehicleSeat; 
  animScriptVehicleType_t outVehicleType; 
  vec3_t v3; 
  __int128 v32; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 

  v32 = v8;
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6646, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6647, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v35 = v5;
  v34 = v6;
  v33 = v7;
  LinkedVehicle = BG_VehicleOccupancy_GetLinkedVehicle(handler, es, ci, &outVehicleType, &outVehicleSeat);
  v13 = (BGVehicles *)handler->GetVehicleSystemConst(handler);
  if ( !v13 || !BGVehicles::PhysicsUpdateVehicleAnimationParams(v13, LinkedVehicle, outVehicleSeat, &ci->vehicleAnimation) )
  {
    if ( LinkedVehicle == 2047 || outVehicleSeat == VEHICLE_SEAT_DRIVER )
    {
      *(_QWORD *)&ci->vehicleAnimation.yaw = 0i64;
    }
    else
    {
      AnglesSubtract(&ci->vehicleAnimation.viewAngles, &ci->playerAngles, &v3);
      AnglesNormalize360(&v3, &v3);
      v14 = v3.v[1];
      _XMM9 = 0i64;
      __asm { vroundss xmm2, xmm9, xmm1, 1 }
      v17 = (float)((float)(v3.v[0] * 0.0027777778) - *(float *)&_XMM2) * 360.0;
      v18 = I_fclamp(v17, -90.0, 90.0);
      if ( ci->vehicleSeatChanged )
      {
        ci->vehicleAnimation.yaw = v14;
      }
      else
      {
        __asm
        {
          vroundss xmm2, xmm9, xmm1, 1
          vroundss xmm5, xmm9, xmm4, 1
        }
        v21 = DiffTrackAngle((float)((float)(v14 * 0.0027777778) - *(float *)&_XMM5) * 360.0, (float)((float)(ci->vehicleAnimation.yaw * 0.0027777778) - *(float *)&_XMM2) * 360.0, TRACK_SPEED, deltaTime);
        v22 = AngleNormalize360(*(const float *)&v21);
        *(float *)&_XMM2 = TRACK_SPEED;
        pitch = ci->vehicleAnimation.pitch;
        ci->vehicleAnimation.yaw = *(float *)&v22;
        v24 = DiffTrackAngle(v17, pitch, *(float *)&_XMM2, deltaTime);
        v18 = I_fclamp(*(float *)&v24, -90.0, 90.0);
      }
      ci->vehicleAnimation.pitch = *(float *)&v18;
    }
  }
  if ( LinkedVehicle == 2047 )
  {
    ci->vehicleAnimation.scrubFacing = VEHICLE_SCRUB_FACING_UNUSED;
  }
  else
  {
    v25 = AngleNormalize360(ci->vehicleAnimation.yaw);
    v26 = 7;
    if ( (int)(float)(*(float *)&v25 * 0.022222223) < 7 )
      v26 = (int)(float)(*(float *)&v25 * 0.022222223);
    v27 = v26 + 1;
    if ( (unsigned int)v27 >= NUM_ANIM_COND_VEHICLE_SCRUB_FACING )
    {
      LODWORD(v28) = v27;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6701, ASSERT_TYPE_ASSERT, "(unsigned)( scrubFacingIndex ) < (unsigned)( NUM_ANIM_COND_VEHICLE_SCRUB_FACING )", "scrubFacingIndex doesn't index NUM_ANIM_COND_VEHICLE_SCRUB_FACING\n\t%i not in [0, %i)", v28, 9) )
        __debugbreak();
    }
    ci->vehicleAnimation.scrubFacing = v27;
  }
}

/*
==============
BG_UpdateWeaponHidePartBitsForModel
==============
*/
void BG_UpdateWeaponHidePartBitsForModel(const Weapon *weapon, const XModel *model, DObjPartBits *partBits, int boneOffset)
{
  unsigned __int64 v7; 
  scr_string_t v8; 
  int v9; 
  const dvar_t *v10; 
  unsigned __int8 index; 
  unsigned __int8 childIndex[7]; 
  unsigned __int64 outHideTagCount; 
  scr_string_t name[324]; 

  v7 = 0i64;
  outHideTagCount = 0i64;
  BG_GetWeaponExplicitHideTags(weapon, 0, 0, 0x142ui64, name, &outHideTagCount);
  if ( outHideTagCount )
  {
    do
    {
      if ( !name[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9298, ASSERT_TYPE_ASSERT, "(hideTags[tagIndex] != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "hideTags[tagIndex] != NULL_SCR_STRING") )
        __debugbreak();
      v8 = name[v7];
      index = -2;
      if ( XModelGetBoneIndex(model, v8, boneOffset, &index) )
      {
        partBits->array[(unsigned __int64)index >> 5] |= 0x80000000 >> (index & 0x1F);
        v9 = index - boneOffset;
        if ( (v9 < 0 || (unsigned int)v9 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)(index - boneOffset), "signed", v9) )
          __debugbreak();
        for ( childIndex[0] = -2; XModelGetNextChildBoneIndex(model, v9, boneOffset, childIndex); partBits->array[(unsigned __int64)childIndex[0] >> 5] |= 0x80000000 >> (childIndex[0] & 0x1F) )
          ;
      }
      ++v7;
    }
    while ( v7 < outHideTagCount );
  }
  v10 = DCONST_DVARMPBOOL_player_isInZeroGLevel;
  if ( !DCONST_DVARMPBOOL_player_isInZeroGLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_isInZeroGLevel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    index = -2;
    if ( XModelGetBoneIndex(model, scr_const.tag_zerog_off, boneOffset, &index) )
      bitarray_base<bitarray<256>>::setBit(partBits, index);
    index = -2;
    if ( XModelGetBoneIndex(model, scr_const.tag_zerog_off2, boneOffset, &index) )
      bitarray_base<bitarray<256>>::setBit(partBits, index);
  }
}

/*
==============
Vec3ShortToAngle
==============
*/
void Vec3ShortToAngle(const base_vec3_t<int> *shortAngles, vec3_t *outAngles)
{
  double v4; 
  double v7; 
  double v9; 

  v4 = MSG_UnpackSignedFloat(shortAngles->v[0], 180.0, 0x14u);
  _XMM10 = 0i64;
  __asm { vroundss xmm2, xmm10, xmm1, 1 }
  outAngles->v[0] = (float)((float)(*(float *)&v4 * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  v7 = MSG_UnpackSignedFloat(shortAngles->v[1], 180.0, 0x14u);
  __asm { vroundss xmm4, xmm10, xmm0, 1 }
  outAngles->v[1] = (float)((float)(*(float *)&v7 * 0.0027777778) - *(float *)&_XMM4) * 360.0;
  v9 = MSG_UnpackSignedFloat(shortAngles->v[2], 180.0, 0x14u);
  __asm { vroundss xmm3, xmm10, xmm0, 1 }
  outAngles->v[2] = (float)((float)(*(float *)&v9 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
}

