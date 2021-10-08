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
  unsigned __int64 v22; 
  PlayerASM_AnimSlot v23; 
  PlayerASM_AnimSlot v24; 
  unsigned __int64 v25; 
  BgStatic *ActiveStatics; 
  __int64 v27; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  __int64 v29; 
  __int64 v30; 
  unsigned int v31; 
  __int64 v32; 
  __int64 v33; 
  _DWORD *v34; 
  unsigned int v35; 
  __int64 v36; 
  int scriptedAnimType; 
  unsigned __int16 weaponIdx; 
  const WeaponDef *v39; 
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
  __int64 v60; 

  _RDI = ci;
  v8 = handler;
  BG_CheckThread();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, es);
  OffHandWeaponForPlayerEntity = BG_GetOffHandWeaponForPlayerEntity(weaponMap, es);
  if ( BG_GetConditionBit(_RDI, 3) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8447, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED") )
    __debugbreak();
  if ( BG_GetConditionBit(_RDI, 3) >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8448, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES") )
    __debugbreak();
  PlayerAnimType = BG_WeaponGetPlayerAnimType(WeaponForEntity, es->inAltWeaponMode);
  BG_SetConditionBit(_RDI, 0, PlayerAnimType);
  BG_SetConditionBit(_RDI, 15, PlayerAnimType);
  WeaponClassForAnimCondition = BG_GetWeaponClassForAnimCondition(es, WeaponForEntity, 0);
  BG_SetConditionBit(_RDI, 1, WeaponClassForAnimCondition);
  v13 = BG_WeaponGetPlayerAnimType(OffHandWeaponForPlayerEntity, 0);
  BG_SetConditionBit(_RDI, 55, v13);
  BG_SetConditionValue(_RDI, 12, _RDI->dualWielding);
  BG_SetConditionValue(_RDI, 44, _RDI->skydiveAnimState);
  BG_SetConditionValue(_RDI, 60, _RDI->lastStandReviving);
  BG_SetConditionValue(_RDI, 61, _RDI->lastStandSelfReviving);
  v14 = 0i64;
  if ( es->inAltWeaponMode )
    AltModePlayerAnimType = BG_WeaponGetAltModePlayerAnimType(WeaponForEntity);
  else
    AltModePlayerAnimType = 0;
  BG_SetConditionBit(_RDI, 52, AltModePlayerAnimType);
  BG_SetConditionValue(_RDI, 24, _RDI->offhandShieldDeployed);
  IsAdsEntity = BG_IsAdsEntity(es);
  BG_SetConditionValue(_RDI, 6, IsAdsEntity);
  IsTurretActiveFlags = BG_IsTurretActiveFlags(&es->lerp.eFlags);
  IsRemoteTurretActiveFlags = BG_IsRemoteTurretActiveFlags(&es->lerp.eFlags);
  BG_AnimUpdateTurretConditions(_RDI, WeaponForEntity, IsRemoteTurretActiveFlags, IsTurretActiveFlags);
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
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rdi+998h]
    }
    BG_SetConditionValue(_RDI, 4, v21);
    v22 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0xAu);
    BG_SetConditionValue(_RDI, 5, v22);
  }
  BG_AnimPlayerConditionsMantle(es, _RDI);
  BG_SetConditionValue(_RDI, 16, _RDI->isFemale);
  if ( PlayerASM_IsEnabled() )
  {
    if ( _RDI->playerASMAnim.animSet != BG_PlayerASM_GetAnimset(es) )
    {
      Animset = BG_PlayerASM_GetAnimset(es);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8509, ASSERT_TYPE_ASSERT, "( ci->playerASMAnim.animSet ) == ( BG_PlayerASM_GetAnimset( es ) )", "%s == %s\n\t%i, %i", "ci->playerASMAnim.animSet", "BG_PlayerASM_GetAnimset( es )", _RDI->playerASMAnim.animSet, Animset) )
        __debugbreak();
    }
    if ( _RDI->playerAnim.legsAnim != BG_PlayerASM_GetAnim(es, MOVEMENT) )
    {
      LODWORD(v54) = BG_PlayerASM_GetAnim(es, MOVEMENT);
      LODWORD(v53) = _RDI->playerAnim.legsAnim;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8510, ASSERT_TYPE_ASSERT, "( ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::PRIMARY )] ) == ( BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::PRIMARY ) )", "%s == %s\n\t%i, %i", "ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::PRIMARY )]", "BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::PRIMARY )", v53, v54) )
        __debugbreak();
    }
    LOBYTE(v23) = 1;
    if ( _RDI->playerAnim.torsoAnim != BG_PlayerASM_GetAnim(es, v23) )
    {
      LOBYTE(v24) = 1;
      LODWORD(v54) = BG_PlayerASM_GetAnim(es, v24);
      LODWORD(v53) = _RDI->playerAnim.torsoAnim;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8511, ASSERT_TYPE_ASSERT, "( ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::SECONDARY )] ) == ( BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::SECONDARY ) )", "%s == %s\n\t%i, %i", "ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::SECONDARY )]", "BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::SECONDARY )", v53, v54) )
        __debugbreak();
    }
    v25 = 0i64;
  }
  else
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    v27 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
    if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8519, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(_RDI);
    v29 = SuitAnimIndexFromCharacter;
    if ( (unsigned int)SuitAnimIndexFromCharacter >= NUM_ANIM_SUIT_STATE )
    {
      LODWORD(v51) = SuitAnimIndexFromCharacter;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8522, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v51, 4) )
        __debugbreak();
    }
    v30 = *(_QWORD *)(v27 + 8 * v29);
    if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8525, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
      __debugbreak();
    if ( _RDI->playerASMAnim.animSet != BG_AnimationMP_GetSuitAnimIndex(es) )
    {
      SuitAnimIndex = BG_AnimationMP_GetSuitAnimIndex(es);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8527, ASSERT_TYPE_ASSERT, "( ci->playerAnim.suitAnimIndex ) == ( BG_AnimationMP_GetSuitAnimIndex( es ) )", "%s == %s\n\t%i, %i", "ci->playerAnim.suitAnimIndex", "BG_AnimationMP_GetSuitAnimIndex( es )", _RDI->playerASMAnim.animSet, SuitAnimIndex) )
        __debugbreak();
    }
    if ( _RDI->playerAnim.legsAnim != BG_AnimationMP_GetLegsAnimation(es) )
    {
      LODWORD(v54) = BG_AnimationMP_GetLegsAnimation(es);
      LODWORD(v53) = _RDI->playerAnim.legsAnim;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8528, ASSERT_TYPE_ASSERT, "( ci->playerAnim.legsAnim ) == ( static_cast<uint>(BG_AnimationMP_GetLegsAnimation( es )) )", "%s == %s\n\t%i, %i", "ci->playerAnim.legsAnim", "static_cast<uint>(BG_AnimationMP_GetLegsAnimation( es ))", v53, v54) )
        __debugbreak();
    }
    v31 = _RDI->playerAnim.legsAnim & 0xFFFFEFFF;
    if ( v31 >= *(_DWORD *)(v30 + 8) )
    {
      LODWORD(v52) = *(_DWORD *)(v30 + 8);
      LODWORD(v51) = _RDI->playerAnim.legsAnim & 0xFFFFEFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8535, ASSERT_TYPE_ASSERT, "(unsigned)( legsAnim ) < (unsigned)( playerAnim->animationCount )", "legsAnim doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v51, v52) )
        __debugbreak();
    }
    v32 = 104i64 * (int)v31;
    v33 = *(_QWORD *)(v30 + 48);
    v34 = (_DWORD *)(v33 + v32 + 40);
    if ( v33 + v32 == -40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.h", 994, ASSERT_TYPE_ASSERT, "(array)", (const char *)&queryFormat, "array") )
      __debugbreak();
    v35 = 0;
    while ( !*v34 )
    {
      ++v35;
      ++v34;
      if ( v35 >= 8 )
        goto LABEL_61;
    }
    if ( !BG_CheckAnyBits((const unsigned int *)(*(_QWORD *)(v30 + 48) + v32 + 40), _RDI->clientConditions[3]) )
    {
      BG_SetCondition(_RDI, 3, (const unsigned int *)(*(_QWORD *)(v30 + 48) + v32 + 40));
      if ( BG_GetConditionBit(_RDI, 3) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8545, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED") )
        __debugbreak();
      if ( BG_GetConditionBit(_RDI, 3) >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8546, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES") )
        __debugbreak();
    }
LABEL_61:
    v36 = *(_QWORD *)(*(_QWORD *)(v30 + 48) + v32 + 16);
    v8 = handler;
    if ( (v36 & 0x20) != 0 )
      v25 = 1i64;
    else
      v25 = ((unsigned __int64)(unsigned __int8)v36 >> 5) & 2;
  }
  BG_SetConditionValue(_RDI, 7, v25);
  scriptedAnimType = 0;
  if ( es->eType != ET_AGENT_CORPSE )
  {
    weaponIdx = BG_GetOffHandWeaponForPlayerEntity(weaponMap, es)->weaponIdx;
    if ( weaponIdx )
    {
      v39 = BG_WeaponDefAtIndex(weaponIdx);
      if ( v39->weapType == WEAPTYPE_SCRIPT )
        scriptedAnimType = v39->scriptedAnimType;
    }
  }
  BG_SetConditionBit(_RDI, 23, scriptedAnimType);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rsp+0C8h+var_68], xmm0
    vmovsd  xmm0, qword ptr [rdi+0AD8h]
  }
  v60 = 0i64;
  __asm { vmovsd  qword ptr [rsp+0C8h+value], xmm0 }
  BG_SetCondition(_RDI, 25, value);
  BG_SetConditionValue(_RDI, 38, _RDI->usingNVG);
  BG_SetConditionValue(_RDI, 33, _RDI->zeroGravity);
  v42 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
  if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  BG_SetConditionValue(_RDI, 45, v42->current.color[0]);
  if ( !BG_IsLadderWeapon(WeaponForEntity, 0) )
    goto LABEL_76;
  v43 = DCONST_DVARMPBOOL_ladderEnableWeapon;
  if ( !DCONST_DVARMPBOOL_ladderEnableWeapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableWeapon") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  v44 = 1i64;
  if ( !v43->current.enabled )
LABEL_76:
    v44 = 0i64;
  BG_SetConditionValue(_RDI, 46, v44);
  if ( !BG_IsAdsEntity(es) || (v45 = BG_UseFastADSAnims(WeaponForEntity, es->inAltWeaponMode), v46 = 1i64, !v45) )
    v46 = 0i64;
  BG_SetConditionValue(_RDI, 34, v46);
  WeaponAltReloadAnimsEnabled = BG_GetWeaponAltReloadAnimsEnabled(WeaponForEntity, es->inAltWeaponMode);
  BG_SetConditionValue(_RDI, 62, WeaponAltReloadAnimsEnabled);
  animLinkedToType = _RDI->animLinkedToType;
  if ( animLinkedToType == ANIM_LINKEDTO_SEAT )
  {
    v14 = 1i64;
  }
  else if ( animLinkedToType == ANIM_LINKEDTO_ZIPLINE )
  {
    v14 = 2i64;
  }
  BG_SetConditionValue(_RDI, 35, v14);
  BG_SetConditionValue(_RDI, 36, _RDI->isOnWall);
  BG_AnimPlayerVehicleOccupancyConditions(v8, weaponMap, es, _RDI);
  if ( (_RDI->carryObjectFlags & 1) != 0 )
  {
    CarryObjectDef = BG_GetCarryObjectDef(_RDI->carryObjectIndex);
    if ( !CarryObjectDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8392, ASSERT_TYPE_ASSERT, "(carryObjectDef)", (const char *)&queryFormat, "carryObjectDef") )
      __debugbreak();
    if ( CarryObjectDef->type >= (unsigned int)CARRYOBJECTTYPE_COUNT )
    {
      LODWORD(v52) = 2;
      LODWORD(v51) = CarryObjectDef->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8393, ASSERT_TYPE_ASSERT, "(unsigned)( carryObjectDef->type ) < (unsigned)( NUM_ANIM_COND_CARRY_OBJECT_TYPE - 1 )", "carryObjectDef->type doesn't index NUM_ANIM_COND_CARRY_OBJECT_TYPE - 1\n\t%i not in [0, %i)", v51, v52) )
        __debugbreak();
    }
    BG_SetConditionBit(_RDI, 53, CarryObjectDef->type);
    BG_SetConditionValue(_RDI, 54, 1ui64);
  }
  else
  {
    BG_SetConditionValue(_RDI, 54, 0i64);
    BG_SetConditionBit(_RDI, 53, 2);
  }
  BG_GameInterface_AnimPlayerConditions(_RDI);
  SuitDef = BG_GetSuitDef(_RDI->suitIndex);
  BG_SetConditionBit(_RDI, 57, SuitDef->bodyAnimType);
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
  int v7; 
  const BgHandler *v9; 
  unsigned int v10; 
  PlayerAnimScriptMoveType ExitOfTransitionalMoveType; 
  BgStatic *ActiveStatics; 
  __int64 v13; 
  characterInfo_t *CharacterInfo; 
  XAnimTree *pXAnimTree; 
  int v17; 
  SuitAnimType SuitAnimIndexFromPlayerState; 
  __int64 v19; 
  PlayerAnimScriptEntry *v20; 
  PlayerAnimScriptEntry *v21; 
  unsigned int v22; 
  __int64 v23; 
  __int64 v24; 
  unsigned int *items; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  PlayerAnimScriptItem *v29; 
  __int64 v30; 
  __int64 v31; 
  PlayerAnimScriptCommand *commands; 
  BOOL v33; 
  PlayerAnimScriptItem *v34; 
  const PlayerAnimScriptCommand *v35; 
  bool v36; 
  PlayerAnimScriptItem *v37; 
  const PlayerAnimEntry *v38; 
  unsigned __int8 animMoveType; 
  const dvar_t *v40; 
  const char *AnimConditionString; 
  const char *AnimCodeMoveTypeString; 
  const dvar_t *v47; 
  const char *v48; 
  char *fmt; 
  char *fmta; 
  PlayerAnimScriptItem **scriptItem; 
  PlayerAnimScriptItem **scriptItema; 
  PlayerAnimScriptItem **scriptItemb; 
  PlayerAnimScriptItem **scriptItemc; 
  PlayerAnimScriptItem **scriptIteme; 
  PlayerAnimScriptItem **scriptItemd; 
  __int64 v57; 
  SuitAnimType suitAnimIndex; 
  PlayerAnimScriptItem *v59; 
  PlayerAnimScriptEntry *v60; 
  PlayerAnimScriptEntry *script; 
  PlayerAnimScriptItem *v62; 
  characterInfo_t *v63; 
  __int64 v64; 
  __int64 v65; 
  BOOL forceLegsOnly; 

  v65 = -2i64;
  v7 = codeMoveType;
  v9 = handler;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2377, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  BG_CheckThread();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2383, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = 0;
  if ( (unsigned int)v7 > 0x26 )
  {
    LODWORD(scriptItem) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2385, ASSERT_TYPE_ASSERT, "( 0 ) <= ( codeMoveType ) && ( codeMoveType ) <= ( NUM_ANIM_CODEMOVETYPES )", "codeMoveType not in [0, NUM_ANIM_CODEMOVETYPES]\n\t%i not in [%i, %i]", scriptItem, 0i64, 38) )
      __debugbreak();
  }
  ExitOfTransitionalMoveType = v7;
  ActiveStatics = BgStatic::GetActiveStatics();
  v13 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  v64 = v13;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2390, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, ps->clientNum);
  v63 = CharacterInfo;
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2393, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() )
  {
    BG_SetConditionBit(CharacterInfo, 3, v7);
    ps->animMoveType = truncate_cast<unsigned char,enum PlayerAnimScriptMoveType>((PlayerAnimScriptMoveType)v7);
    return 0i64;
  }
  pXAnimTree = CharacterInfo->pXAnimTree;
  if ( !pXAnimTree || (v17 = 446, pXAnimTree->owner[0]) )
    v17 = 447;
  Profile_Begin(v17);
  v9->ProfBeginAnimUpdate((BgHandler *)v9);
  SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(ps);
  v19 = SuitAnimIndexFromPlayerState;
  suitAnimIndex = SuitAnimIndexFromPlayerState;
  if ( (unsigned int)SuitAnimIndexFromPlayerState >= NUM_ANIM_SUIT_STATE )
  {
    LODWORD(v57) = 4;
    LODWORD(scriptItem) = SuitAnimIndexFromPlayerState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2416, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", scriptItem, v57) )
      __debugbreak();
  }
  v20 = *(PlayerAnimScriptEntry **)(v13 + 8 * v19);
  v60 = v20;
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2419, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  forceLegsOnly = 0;
  if ( BG_GetConditionBit(CharacterInfo, 3) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2423, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED") )
    __debugbreak();
  if ( BG_GetConditionBit(CharacterInfo, 3) >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2424, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES") )
    __debugbreak();
  if ( ps->pm_type >= 7 )
  {
    v9->ProfEndAnimUpdate((BgHandler *)v9);
    Profile_EndInternal(NULL);
    return 0xFFFFFFFFi64;
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "BG_AnimScriptAnimation");
  if ( BG_AnimFindScript(ps->clientNum, (const SuitAnimType)v19, state, (PlayerAnimScriptMoveType)ps->animMoveType, (const PlayerAnimScriptEntry **)&script, (const PlayerAnimScriptItem **)&v62) )
  {
    LODWORD(v59) = 0;
    v21 = script;
    if ( script->transitionCount )
    {
      v22 = 0;
      while ( 1 )
      {
        v23 = v21->transitions[v22];
        if ( (unsigned int)v23 >= LODWORD(v20->items) )
        {
          LODWORD(v57) = v20->items;
          LODWORD(scriptItema) = v21->transitions[v22];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2443, ASSERT_TYPE_ASSERT, "(unsigned)( scriptTransitionIndex ) < (unsigned)( playerAnim->scriptTransitionCount )", "scriptTransitionIndex doesn't index playerAnim->scriptTransitionCount\n\t%i not in [0, %i)", scriptItema, v57) )
            __debugbreak();
        }
        v24 = 3 * v23;
        items = v20[2].items;
        v26 = items[3 * v23];
        if ( !v26 )
          break;
        v27 = v26 - 1;
        if ( !v27 )
        {
          if ( items[3 * v23 + 1] != ExitOfTransitionalMoveType )
            goto LABEL_54;
          v36 = CharacterInfo->clientConditions[7][0] == 0;
LABEL_78:
          if ( !v36 )
            goto LABEL_54;
          goto LABEL_79;
        }
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 != 1 )
            goto LABEL_54;
          v29 = v62;
          if ( !v62->commandCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2478, ASSERT_TYPE_ASSERT, "(prevScriptItem->commandCount)", (const char *)&queryFormat, "prevScriptItem->commandCount") )
            __debugbreak();
          v30 = ps->clientNum % v29->commandCount;
          v31 = v30;
          commands = v29->commands;
          if ( !commands[(unsigned int)v30].bodyPart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2480, ASSERT_TYPE_ASSERT, "(impendingScriptCommand->bodyPart)", (const char *)&queryFormat, "impendingScriptCommand->bodyPart") )
            __debugbreak();
          v33 = (ps->legsAnim & 0xFFFFEFFF) != commands[v31].animIndex;
          CharacterInfo = v63;
        }
        else
        {
          v33 = ps->legsTimer < 500;
        }
        if ( !v33 )
        {
LABEL_54:
          v7 = codeMoveType;
          goto LABEL_55;
        }
LABEL_79:
        ExitOfTransitionalMoveType = items[v24 + 2];
        v7 = codeMoveType;
        if ( ExitOfTransitionalMoveType == ANIM_MT_UNUSED )
          ExitOfTransitionalMoveType = codeMoveType;
        if ( ExitOfTransitionalMoveType != ps->animMoveType )
        {
LABEL_56:
          v9 = handler;
          v20 = v60;
          LODWORD(v19) = suitAnimIndex;
          goto LABEL_57;
        }
LABEL_55:
        ++v22;
        v21 = script;
        v20 = v60;
        if ( v22 >= script->transitionCount )
          goto LABEL_56;
      }
      v36 = items[3 * v23 + 1] == ExitOfTransitionalMoveType;
      goto LABEL_78;
    }
  }
LABEL_57:
  BG_SetConditionBit(CharacterInfo, 3, ExitOfTransitionalMoveType);
  if ( BG_GetConditionBit(CharacterInfo, 3) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2510, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED") )
    __debugbreak();
  if ( BG_GetConditionBit(CharacterInfo, 3) >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2511, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES") )
    __debugbreak();
  if ( !BG_AnimFindScript(ps->clientNum, (const SuitAnimType)v19, state, ExitOfTransitionalMoveType, (const PlayerAnimScriptEntry **)&v60, (const PlayerAnimScriptItem **)&v59) )
    goto LABEL_74;
  v34 = v59;
  if ( !v59->commandCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2524, ASSERT_TYPE_ASSERT, "(scriptItem->commandCount)", (const char *)&queryFormat, "scriptItem->commandCount") )
    __debugbreak();
  v35 = &v34->commands[ps->clientNum % v34->commandCount];
  if ( v35->bodyPart != 4 )
  {
LABEL_87:
    if ( v35->animIndex >= v20->transitionCount )
    {
      LODWORD(v57) = v20->transitionCount;
      LODWORD(scriptItemb) = v35->animIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2552, ASSERT_TYPE_ASSERT, "(unsigned)( scriptCommand->animIndex ) < (unsigned)( playerAnim->animationCount )", "scriptCommand->animIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", scriptItemb, v57) )
        __debugbreak();
    }
    v38 = (const PlayerAnimEntry *)&v20[1].items[26 * v35->animIndex];
    if ( BG_GameInterface_InteractionAnims_AllowedToPlayAnimScript(v38, ps) )
    {
      BG_GameInterface_InteractionAnims_AnimScriptAnimation(v38, v9, ps, state, codeMoveType, force, turn);
      if ( !force )
      {
        animMoveType = ps->animMoveType;
        if ( animMoveType >= 0x26u )
          forceLegsOnly = (v60->flags & 1) == 0 || animMoveType != ExitOfTransitionalMoveType;
      }
      if ( (v60->flags & 4) != 0 && ps->animMoveType != ExitOfTransitionalMoveType )
        BG_ClearTorsoAnim(NULL, ps);
      v40 = DVARINT_pmoveanim_debug;
      if ( !DVARINT_pmoveanim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmoveanim_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v40);
      if ( v40->current.integer >= 1 && Sys_IsServerThread() && ps->animMoveType != ExitOfTransitionalMoveType )
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
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ecx
          vmulss  xmm1, xmm0, cs:__real@3a83126f
          vcvtss2sd xmm2, xmm1, xmm1
          vmovsd  [rsp+0D8h+scriptItem], xmm2
        }
        LODWORD(fmt) = ps->clientNum;
        Com_Printf(19, "%s:%i:e%i:[[%.3f]] moveType: %s (c %s)\n", "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2588i64, fmt, *(double *)&scriptIteme, AnimCodeMoveTypeString, AnimConditionString);
      }
      ps->animMoveType = truncate_cast<unsigned char,enum PlayerAnimScriptMoveType>(ExitOfTransitionalMoveType);
      if ( v35->bodyPart == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2604, ASSERT_TYPE_ASSERT, "(!( BG_IsTransitionMoveType( FIRST_TRANSITION_MOVETYPE ) && scriptCommand->bodyPart == ANIM_BP_TORSO ))", (const char *)&queryFormat, "!( BG_IsTransitionMoveType( FIRST_TRANSITION_MOVETYPE ) && scriptCommand->bodyPart == ANIM_BP_TORSO )") )
        __debugbreak();
      LOBYTE(v10) = BG_ExecuteCommand(ps, v35, ExitOfTransitionalMoveType >= NUM_ANIM_CODEMOVETYPES, 1, force, forceLegsOnly, turn) != -1;
      v47 = DVARINT_pmoveanim_debug;
      if ( !DVARINT_pmoveanim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmoveanim_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v47);
      if ( v47->current.integer >= 2 && Sys_IsServerThread() )
      {
        BG_CheckThread();
        v48 = BG_GameInterface_GetAnimConditionString(3, ExitOfTransitionalMoveType);
        if ( !v48 )
        {
          if ( (unsigned int)ExitOfTransitionalMoveType > (FIRST_TRANSITION_MOVETYPE|ANIM_MT_SLIDEBK|0x40) )
          {
            LODWORD(scriptItemd) = ExitOfTransitionalMoveType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 709, ASSERT_TYPE_ASSERT, "( ( value >= 0 && value < NUM_ANIM_MOVETYPES ) )", "( value ) = %i", scriptItemd) )
              __debugbreak();
          }
          if ( ExitOfTransitionalMoveType < NUM_ANIM_CODEMOVETYPES )
            v48 = BG_GetAnimCodeMoveTypeString(ExitOfTransitionalMoveType);
          else
            v48 = "transitionMoveType";
        }
        LODWORD(scriptItemd) = ps->legsTimer;
        LODWORD(fmta) = ps->clientNum;
        Com_Printf(19, "%s:%i:e%i:legsTimer: %7d     mt: %s\n", "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2612i64, fmta, scriptItemd, v48);
      }
    }
    v9->ProfEndAnimUpdate((BgHandler *)v9);
    Profile_EndInternal(NULL);
    goto LABEL_137;
  }
  if ( ExitOfTransitionalMoveType < NUM_ANIM_CODEMOVETYPES && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2530, ASSERT_TYPE_ASSERT, "(BG_IsTransitionMoveType( movetype ))", (const char *)&queryFormat, "BG_IsTransitionMoveType( movetype )") )
    __debugbreak();
  ExitOfTransitionalMoveType = BG_GetExitOfTransitionalMoveType(AISTATE_COMBAT, ExitOfTransitionalMoveType, suitAnimIndex);
  if ( ExitOfTransitionalMoveType == ANIM_MT_UNUSED )
    ExitOfTransitionalMoveType = v7;
  if ( BG_AnimFindScript(ps->clientNum, suitAnimIndex, state, ExitOfTransitionalMoveType, (const PlayerAnimScriptEntry **)&v60, (const PlayerAnimScriptItem **)&v59) )
  {
    v37 = v59;
    if ( !v59->commandCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2548, ASSERT_TYPE_ASSERT, "(scriptItem->commandCount)", (const char *)&queryFormat, "scriptItem->commandCount") )
      __debugbreak();
    v35 = &v37->commands[ps->clientNum % v37->commandCount];
    goto LABEL_87;
  }
LABEL_74:
  v9->ProfEndAnimUpdate((BgHandler *)v9);
  Profile_EndInternal(NULL);
  v10 = -1;
LABEL_137:
  Sys_ProfEndNamedEvent();
  return v10;
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
  const dvar_t *v36; 
  const dvar_t *v37; 
  unsigned __int64 v38; 
  _BOOL8 v39; 
  bool v40; 
  __int64 animType; 
  const ExecutionDef *Def; 
  int AmmoInClip; 
  const SuitDef *SuitDef; 
  __int64 v45; 
  bool v46; 
  bool outIsAlternate; 
  int outAnimType; 
  int outVariant; 
  pml_t *pmla; 
  unsigned int value[2]; 
  __int64 v53; 

  pmla = pml;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4325, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  _RBP = pmove->ps;
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4330, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, _RBP->clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4334, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  BG_AnimUpdatePlayerStateConditionsMantle(pmove, CharacterInfo);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4301, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v7 = 1i64;
  if ( (_RBP->carryState.flags & 1) != 0 )
  {
    CarryObjectDef = BG_GetCarryObjectDef(_RBP->carryState.carryObjectIndex);
    if ( !CarryObjectDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4311, ASSERT_TYPE_ASSERT, "(carryObjectDef)", (const char *)&queryFormat, "carryObjectDef") )
      __debugbreak();
    v8 = 2i64;
    if ( CarryObjectDef->type >= (unsigned int)CARRYOBJECTTYPE_COUNT )
    {
      LODWORD(v45) = CarryObjectDef->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4312, ASSERT_TYPE_ASSERT, "(unsigned)( carryObjectDef->type ) < (unsigned)( NUM_ANIM_COND_CARRY_OBJECT_TYPE - 1 )", "carryObjectDef->type doesn't index NUM_ANIM_COND_CARRY_OBJECT_TYPE - 1\n\t%i not in [0, %i)", v45, 2) )
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
  Weapon = BgWeaponMap::GetWeapon(weaponMap, _RBP->weapCommon.weaponHandle);
  v14 = pmove->weaponMap;
  v15 = Weapon;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 916, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v16 = BgWeaponMap::GetWeapon(v14, _RBP->weapCommon.offHandHandle);
  v46 = BG_UsingAlternate(_RBP);
  PlayerAnimType = BG_WeaponGetPlayerAnimType(v15, v46);
  BG_SetConditionBit(CharacterInfo, 0, PlayerAnimType);
  v18 = BG_WeaponGetPlayerAnimType(v15, v46);
  BG_SetConditionBit(CharacterInfo, 15, v18);
  WeaponClassForAnimCondition = BG_GetWeaponClassForAnimCondition(_RBP, v15, 0);
  BG_SetConditionBit(CharacterInfo, 1, WeaponClassForAnimCondition);
  if ( (unsigned int)(_RBP->weapState[0].weaponState - 26) > 6 && !BG_IsUsingOffhandGestureWeapon(_RBP) && !BG_IsUsingScriptedOffhandWeapon(_RBP) )
    v16 = &NULL_WEAPON;
  v20 = BG_WeaponGetPlayerAnimType(v16, 0);
  BG_SetConditionBit(CharacterInfo, 55, v20);
  v21 = BG_PlayerDualWielding(_RBP);
  BG_SetConditionValue(CharacterInfo, 12, v21);
  if ( v46 )
  {
    ViewmodelWeapon = BG_GetViewmodelWeapon(pmove->weaponMap, _RBP);
    AltModePlayerAnimType = BG_WeaponGetAltModePlayerAnimType(ViewmodelWeapon);
  }
  else
  {
    AltModePlayerAnimType = 0;
  }
  BG_SetConditionBit(CharacterInfo, 52, AltModePlayerAnimType);
  BG_SetConditionValue(CharacterInfo, 24, 0i64);
  v24 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBP->pm_flags, ACTIVE, 9u);
  BG_SetConditionValue(CharacterInfo, 6, v24);
  WeaponAltReloadAnimsEnabled = BG_GetWeaponAltReloadAnimsEnabled(v15, v46);
  BG_SetConditionValue(CharacterInfo, 62, WeaponAltReloadAnimsEnabled);
  IsTurretActiveFlags = BG_IsTurretActiveFlags(&_RBP->eFlags);
  IsRemoteTurretActiveFlags = BG_IsRemoteTurretActiveFlags(&_RBP->eFlags);
  BG_AnimUpdateTurretConditions(CharacterInfo, v15, IsRemoteTurretActiveFlags, IsTurretActiveFlags);
  BG_AnimUpdateStanceCondition(pmove, pmla, CharacterInfo);
  BG_SetConditionValue(CharacterInfo, 44, _RBP->skydivePlayerState.animState);
  skydiveAnimState = CharacterInfo->skydiveAnimState;
  v29 = BG_SkydiveAnimStateNeedParachuteModel((const animScriptParachuteState_t)_RBP->skydivePlayerState.animState);
  if ( BG_SkydiveAnimStateNeedParachuteModel(skydiveAnimState) != v29 )
    CharacterInfo->dobjDirty = 1;
  CharacterInfo->skydiveAnimState = _RBP->skydivePlayerState.animState;
  BG_SetConditionValue(CharacterInfo, 60, _RBP->lastStandReviving);
  BG_SetConditionValue(CharacterInfo, 61, _RBP->lastStandSelfReviving);
  CharacterInfo->lastStandReviving = _RBP->lastStandReviving;
  CharacterInfo->lastStandSelfReviving = _RBP->lastStandSelfReviving;
  v30 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBP->eFlags, ACTIVE, 0xAu);
  BG_SetConditionValue(CharacterInfo, 5, v30);
  BG_SetConditionValue(CharacterInfo, 16, CharacterInfo->isFemale);
  scriptedAnimType = 0;
  weaponIdx = PM_Weapon_GetUsedOffHandWeapon(pmove->weaponMap, _RBP)->weaponIdx;
  if ( weaponIdx )
  {
    v33 = BG_WeaponDefAtIndex(weaponIdx);
    if ( v33->weapType == WEAPTYPE_SCRIPT )
      scriptedAnimType = v33->scriptedAnimType;
  }
  BG_SetConditionBit(CharacterInfo, 23, scriptedAnimType);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rsp+0C8h+var_58], xmm0
    vmovsd  xmm0, qword ptr [rbp+1170h]
  }
  v53 = 0i64;
  __asm { vmovsd  qword ptr [rsp+0C8h+value], xmm0 }
  BG_SetCondition(CharacterInfo, 25, value);
  BG_SetConditionValue(CharacterInfo, 33, CharacterInfo->zeroGravity);
  v36 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
  if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  BG_SetConditionValue(CharacterInfo, 45, v36->current.color[0]);
  if ( !BG_IsLadderWeapon(v15, 0) || !BG_GetAmmoInClip(_RBP, v15, v46, WEAPON_HAND_DEFAULT) )
    goto LABEL_52;
  v37 = DCONST_DVARMPBOOL_ladderEnableWeapon;
  if ( !DCONST_DVARMPBOOL_ladderEnableWeapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableWeapon") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  if ( v37->current.enabled )
    v38 = 1i64;
  else
LABEL_52:
    v38 = 0i64;
  BG_SetConditionValue(CharacterInfo, 46, v38);
  v39 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBP->pm_flags, ACTIVE, 9u) && BG_UseFastADSAnims(v15, v46);
  BG_SetConditionValue(CharacterInfo, 34, v39);
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBP->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Cu) )
    v8 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBP->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Bu);
  BG_SetConditionValue(CharacterInfo, 35, v8);
  v40 = BG_IsOnWallAnimFlagEnabled(_RBP);
  BG_SetConditionValue(CharacterInfo, 36, v40);
  CompressedMeleeAnimData::Get(&_RBP->meleeReaction, &outAnimType, &outVariant, &outIsAlternate);
  BG_SetConditionValue(CharacterInfo, 30, outAnimType);
  BG_SetConditionValue(CharacterInfo, 31, outVariant);
  BG_SetConditionValue(CharacterInfo, 32, outIsAlternate);
  LODWORD(animType) = 0;
  Def = BG_Execution_GetDef(_RBP->activeExecution);
  if ( Def )
  {
    animType = (int)Def->animType;
    if ( (unsigned int)animType > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", animType, "unsigned", (unsigned int)animType) )
      __debugbreak();
  }
  BG_SetConditionValue(CharacterInfo, 49, (int)animType);
  BG_SetConditionValue(CharacterInfo, 50, _RBP->activeExecutionVictimStance);
  BG_SetConditionValue(CharacterInfo, 51, _RBP->activeExecutionIsVictim);
  AmmoInClip = BG_GetAmmoInClip(_RBP, v15, v46, WEAPON_HAND_DEFAULT);
  BG_SetConditionValue(CharacterInfo, 48, AmmoInClip == 0);
  BG_GameInterface_AnimUpdatePlayerStateConditions(CharacterInfo);
  BG_SetConditionValue(CharacterInfo, 56, (unsigned int)(_RBP->weapState[0].weaponState - 51) <= 1);
  SuitDef = BG_GetSuitDef(_RBP->suitIndex);
  BG_SetConditionBit(CharacterInfo, 57, SuitDef->bodyAnimType);
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBP->pm_flags, ACTIVE, 0x15u) || !BG_GetShellshockParms(_RBP->shellshockIndex)->movement.affect )
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
  const char *v19; 
  char v21; 
  const char *v38; 
  float fmt; 

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
      __asm
      {
        vmovaps [rsp+78h+var_28], xmm6
        vmovaps [rsp+78h+var_48], xmm8
      }
      if ( !XAnimIsLeafNode(obj->tree->anims, XAnimIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6570, ASSERT_TYPE_ASSERT, "(XAnimIsLeafNode( obj->tree->anims, scriptedAnimIndex ))", (const char *)&queryFormat, "XAnimIsLeafNode( obj->tree->anims, scriptedAnimIndex )") )
        __debugbreak();
      *(double *)&_XMM0 = XAnimGetLength(obj->tree->anims, XAnimIndex);
      __asm
      {
        vmulss  xmm6, xmm0, cs:__real@447a0000
        vcvtss2sd xmm2, xmm6, xmm6
        vmovq   r8, xmm2
      }
      v19 = j_va("bg_animation update start %d %f", (unsigned int)deltaTime, _R8);
      BG_ScriptedAsmDebugPrint(v19, serverTime, ci, NULL);
      __asm
      {
        vxorps  xmm8, xmm8, xmm8
        vucomiss xmm6, xmm8
      }
      if ( v21 )
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
        __asm { vmovaps [rsp+78h+var_38], xmm7 }
        if ( ci->playerASM_scripted_anim_start_time < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6602, ASSERT_TYPE_ASSERT, "(ci->playerASM_scripted_anim_start_time >= 0)", (const char *)&queryFormat, "ci->playerASM_scripted_anim_start_time >= 0") )
          __debugbreak();
        __asm
        {
          vmovss  xmm7, cs:__real@3f800000
          vdivss  xmm6, xmm7, xmm6
        }
        if ( XAnimIsLooped(obj->tree->anims, XAnimIndex) )
        {
          BG_ScriptedAsmDebugPrint("bg_animation looped", serverTime, ci, NULL);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm5, xmm0, xmm6
            vmovaps xmm2, xmm5
            vxorps  xmm0, xmm0, xmm0
            vroundss xmm4, xmm0, xmm2, 1
            vsubss  xmm6, xmm5, xmm4
          }
        }
        else
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm0, xmm0, xmm6; val
            vmovaps xmm2, xmm7; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vucomiss xmm0, xmm7
            vmovaps xmm6, xmm0
          }
          if ( v21 )
          {
            BG_ScriptedAsmDebugPrint("bg_animation complete", serverTime, ci, NULL);
            Com_BitSetAssert(ci->clientEvents.events, 43, 32);
            ci->clientEvents.hasEvents = 1;
            Com_BitClearAssert(ci->clientEvents.isContinue, 43, 32);
            Com_BitClearAssert(ci->clientEvents.force, 43, 32);
          }
        }
        __asm
        {
          vcvtss2sd xmm1, xmm6, xmm6
          vmovq   rdx, xmm1
        }
        v38 = j_va("bg_animation update end %f", _RDX);
        BG_ScriptedAsmDebugPrint(v38, serverTime, ci, NULL);
        __asm { vmovss  dword ptr [rsp+78h+fmt], xmm6 }
        XAnimSetTime(ci->pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, XAnimIndex, fmt);
        __asm { vmovaps xmm7, [rsp+78h+var_38] }
      }
      __asm
      {
        vmovaps xmm6, [rsp+78h+var_28]
        vmovaps xmm8, [rsp+78h+var_48]
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
  int v2; 

  __asm { vmovss  xmm1, cs:__real@42b40000; maxAbsValueSize }
  v2 = MSG_PackSignedFloat(pitch, *(float *)&_XMM1, 0x10u);
  return truncate_cast<unsigned short,int>(v2);
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
  int v2; 
  unsigned __int16 v3; 

  __asm { vmovss  xmm1, cs:__real@42b40000; maxAbsValueSize }
  v2 = MSG_PackSignedFloat(pitch, *(float *)&_XMM1, 0x10u);
  v3 = truncate_cast<unsigned short,int>(v2);
  __asm { vmovss  xmm1, cs:__real@42b40000; maxAbsValueSize }
  return MSG_UnpackSignedFloat(v3, *(float *)&_XMM1, 0x10u);
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
  __asm { vmovss  xmm1, cs:__real@42b40000; maxAbsValueSize }
  return MSG_UnpackSignedFloat(pitchPacked, *(float *)&_XMM1, 0x10u);
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

void __fastcall BG_AnimationMP_UpdateCharacterInfoHeightOffset(const playerState_s *ps, characterInfo_t *ci, double stepHeight, int flags)
{
  __int16 v7; 
  char v11; 
  bool v12; 
  const dvar_t *v20; 
  char v30; 

  __asm { vmovaps [rsp+68h+var_28], xmm7 }
  v7 = flags;
  _RBX = ci;
  __asm { vmovaps xmm7, xmm2 }
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 11076, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ps )
  {
    __asm { vmovaps [rsp+68h+var_18], xmm6 }
    if ( (v7 & 0x100) != 0 )
    {
      v12 = BG_UsingNewPlayerCollision();
      __asm { vxorps  xmm6, xmm6, xmm6 }
      if ( v12 )
        __asm { vucomiss xmm7, xmm6 }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+38E0h]
        vucomiss xmm0, xmm6
        vxorps  xmm3, xmm7, cs:__xmm@80000000800000008000000080000000
      }
      if ( v12 )
      {
        __asm
        {
          vaddss  xmm1, xmm0, dword ptr [rbx+38E4h]
          vaddss  xmm0, xmm3, dword ptr [rdi+38h]
          vsubss  xmm1, xmm1, xmm0
          vaddss  xmm3, xmm1, xmm3
        }
      }
      __asm { vmovss  dword ptr [rbx+38E0h], xmm3 }
      _RBX->baseHeight = ps->origin.v[2];
    }
    else
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+38E0h]
        vxorps  xmm6, xmm6, xmm6
        vucomiss xmm3, xmm6
      }
      if ( !v11 )
      {
        v20 = DCONST_DVARFLT_stepBlendSpeed;
        if ( !DCONST_DVARFLT_stepBlendSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stepBlendSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v20);
        __asm
        {
          vmovss  xmm2, cs:__real@3f800000
          vmovss  xmm1, cs:__real@3a83126f; min
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, [rsp+68h+msec]
          vmulss  xmm0, xmm0, xmm1
          vmulss  xmm3, xmm0, dword ptr [rdi+28h]
          vsubss  xmm0, xmm2, xmm3; val
          vmovss  xmm2, cs:__real@3f7fbe77; max
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmulss  xmm3, xmm0, dword ptr [rbx+38E0h]
          vandps  xmm0, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm0, cs:__real@3dcccccd
          vmovss  dword ptr [rbx+38E0h], xmm3
        }
        if ( v30 )
        {
          _RBX->heightOffset = 0.0;
          __asm { vxorps  xmm3, xmm3, xmm3 }
        }
      }
    }
    __asm
    {
      vmovss  xmm2, cs:__real@41a00000; max
      vmovss  xmm1, cs:__real@c1a00000; min
      vmovaps xmm0, xmm3; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm6, [rsp+68h+var_18]
      vmovss  dword ptr [rbx+38E0h], xmm0
    }
  }
  __asm { vmovaps xmm7, [rsp+68h+var_28] }
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
  __int64 v10; 
  const XAnim_s **p_anims; 
  unsigned int number; 
  DObj *v13; 
  DObj *v14; 
  bool IsPlayingVehicleOccupancyAnims; 
  bool v16; 
  unsigned int *p_vehiclePhysicsId; 
  unsigned int LinkedVehicle; 
  const BGVehicles *v22; 
  BgStatic *v23; 
  const BGVehicles *v24; 
  float fmt; 
  float goalTime; 
  float v31; 
  animScriptVehicleSeat_t outVehicleSeat; 
  animScriptVehicleType_t outVehicleType[13]; 
  unsigned __int16 outAnimIndex; 

  _RDI = ci;
  ActiveStatics = BgStatic::GetActiveStatics();
  v10 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10949, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  outAnimIndex = *(_WORD *)(v10 + 17976);
  if ( PlayerASM_IsEnabled() )
  {
    p_anims = (const XAnim_s **)&_RDI->pXAnimTree->anims;
    if ( p_anims )
      XAnimFindPublicNode(*p_anims, scr_const.wobble, &outAnimIndex);
  }
  if ( outAnimIndex )
  {
    number = es->number;
    v13 = ActiveStatics->IsClient(ActiveStatics) ? Com_GetClientDObj(number, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable)) : (DObj *)((__int64 (__fastcall *)(BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, number);
    v14 = v13;
    if ( v13 )
    {
      if ( v13->tree )
      {
        IsPlayingVehicleOccupancyAnims = BG_IsPlayingVehicleOccupancyAnims(_RDI);
        v16 = IsPlayingVehicleOccupancyAnims;
        if ( !_RDI->wobbleAnimParams.nodeWeightUpdated || _RDI->wobbleAnimParams.nodeActive != IsPlayingVehicleOccupancyAnims )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vmovss  [rsp+98h+var_68], xmm0
            vxorps  xmm2, xmm2, xmm2
            vcvtsi2ss xmm2, xmm2, dword ptr [rdi+1404h]
            vxorps  xmm1, xmm1, xmm1
            vmovss  [rsp+98h+goalTime], xmm1
            vmovss  dword ptr [rsp+98h+fmt], xmm2
          }
          XAnimSetGoalWeight(v14, 0, XANIM_SUBTREE_DEFAULT, outAnimIndex, fmt, goalTime, v31, (scr_string_t)0, 0, 1, LINEAR, NULL);
          _RDI->wobbleAnimParams.nodeWeightUpdated = 1;
          _RDI->wobbleAnimParams.nodeActive = v16;
        }
        p_vehiclePhysicsId = &_RDI->wobbleAnimParams.vehiclePhysicsId;
        if ( BG_IsPlayingVehicleOccupancyAnims(_RDI) )
        {
          if ( !BGVehicles::PhysicsIsValid(*p_vehiclePhysicsId) )
          {
            LinkedVehicle = BG_VehicleOccupancy_GetLinkedVehicle(handler, es, _RDI, outVehicleType, &outVehicleSeat);
            if ( LinkedVehicle != 2047 )
            {
              v22 = handler->GetVehicleSystemConst(handler);
              *p_vehiclePhysicsId = v22->PhysicsGetVehicleId((BGVehicles *)v22, LinkedVehicle);
            }
          }
          if ( BGVehicles::PhysicsIsValid(*p_vehiclePhysicsId) )
          {
            v23 = BgStatic::GetActiveStatics();
            v23->GetAnimStatics(v23);
            v24 = handler->GetVehicleSystemConst(handler);
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, dword ptr [rbx+4C54h]
              vmulss  xmm3, xmm0, cs:__real@3a83126f
            }
            ((void (__fastcall *)(const BGVehicles *, characterInfo_t *, _QWORD))v24->PhysicsUpdateCharacterWobbleAnimData)(v24, _RDI, *p_vehiclePhysicsId);
          }
          else
          {
            *(_QWORD *)_RDI->wobbleAnimParams.amplitude.v = 0i64;
            _RDI->wobbleAnimParams.amplitude.v[2] = 0.0;
            _RDI->wobbleAnimParams.angleDirCurrent = 0.0;
            _RDI->wobbleAnimParams.intensity = 0;
          }
        }
        else
        {
          *p_vehiclePhysicsId = BGVehicles::PhysicsInvalidId();
          _RDI->wobbleAnimParams.initialized = 0;
        }
        if ( v16 )
        {
          XAnimSetVec3GameParameterByIndex(v14, 0x2Fu, &_RDI->wobbleAnimParams.amplitude);
          __asm { vmovss  xmm2, dword ptr [rdi+1434h]; value }
          XAnimSetFloatGameParameterByIndex(v14, 0x30u, *(float *)&_XMM2);
          XAnimSetIntGameParameterByIndex(v14, 0x31u, _RDI->wobbleAnimParams.intensity);
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
  const BGVehicles *v9; 
  BgStatic *ActiveStatics; 
  const BGVehicles *v11; 
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
        v9 = handler->GetVehicleSystemConst(handler);
        p_wobbleAnimParams->vehiclePhysicsId = v9->PhysicsGetVehicleId((BGVehicles *)v9, LinkedVehicle);
      }
    }
    if ( BGVehicles::PhysicsIsValid(p_wobbleAnimParams->vehiclePhysicsId) )
    {
      ActiveStatics = BgStatic::GetActiveStatics();
      ActiveStatics->GetAnimStatics(ActiveStatics);
      v11 = handler->GetVehicleSystemConst(handler);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+4C54h]
        vmulss  xmm3, xmm0, cs:__real@3a83126f
      }
      ((void (__fastcall *)(const BGVehicles *, characterInfo_t *, _QWORD))v11->PhysicsUpdateCharacterWobbleAnimData)(v11, ci, p_wobbleAnimParams->vehiclePhysicsId);
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
  char v3; 

  _RBX = animEntry;
  if ( !animEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1054, ASSERT_TYPE_ASSERT, "(animEntry)", (const char *)&queryFormat, "animEntry") )
    __debugbreak();
  if ( (_RBX->flags & 0x800000) == 0 )
    goto LABEL_7;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+4Ch]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm1, xmm0
  }
  if ( v3 )
  {
LABEL_7:
    __asm { vmovss  xmm0, dword ptr [rbx+48h] }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+48h]
      vdivss  xmm0, xmm0, xmm1
    }
  }
  return *(float *)&_XMM0;
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
  const char *scriptName; 
  const char *v15; 
  bool IsPrimitive; 
  unsigned __int64 flags; 
  __int16 initialLerp; 
  unsigned __int64 v21; 
  const char *AnimName; 
  const char *v25; 
  char v27; 
  const char *v29; 
  const char *v31; 
  char *fmt; 
  __int64 time2; 
  __int64 v36; 

  _RDI = animEntry;
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
    flags = _RDI->flags;
    initialLerp = _RDI->initialLerp;
    if ( IsPrimitive )
    {
      __asm
      {
        vmovaps [rsp+0E8h+var_58], xmm7
        vmovaps [rsp+0E8h+var_78], xmm9
      }
      _RDI->flags = flags & 0xFFFFFFFFFFFFFFFEui64;
      if ( !initialLerp )
        _RDI->initialLerp = -1;
      __asm
      {
        vmovaps [rsp+0E8h+var_48], xmm6
        vmovaps [rsp+0E8h+var_68], xmm8
      }
      *(double *)&_XMM0 = XAnimGetLength(xAnims, xAnimIndex);
      __asm
      {
        vxorps  xmm7, xmm7, xmm7
        vucomiss xmm0, xmm7
        vmovaps xmm9, xmm0
      }
      _RDI->moveSpeed = 0.0;
      _RDI->duration = 500;
      v21 = _RDI->flags;
      __asm
      {
        vmovaps xmm9, [rsp+0E8h+var_78]
        vmovaps xmm8, [rsp+0E8h+var_68]
      }
      if ( (v21 & 0x2380090) != 0 )
        _RDI->moveSpeed = 0.0;
      if ( (v21 & 2) != 0 )
      {
        __asm { vucomiss xmm7, dword ptr [rdi+48h] }
        if ( (v21 & 2) == 0 )
          _RDI->flags = v21 & 0xFFFFFFFFFFFFFFFDui64;
      }
      if ( XAnimIsLooped(xAnims, xAnimIndex) )
        _RDI->flags |= 0x100ui64;
      if ( shadowXAnimIndex )
      {
        if ( XAnimIsLooped(xAnims, xAnimIndex) && !XAnimIsLooped(xAnims, shadowXAnimIndex) )
        {
          AnimName = XAnimGetAnimName(xAnims, xAnimIndex);
          v25 = XAnimGetAnimName(xAnims, shadowXAnimIndex);
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F034B0, 1172i64, v25, AnimName);
        }
        *(double *)&_XMM0 = XAnimGetLength(xAnims, xAnimIndex);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = XAnimGetLength(xAnims, shadowXAnimIndex);
        __asm { vucomiss xmm6, xmm0 }
        if ( !v27 )
        {
          *(double *)&_XMM0 = XAnimGetLength(xAnims, xAnimIndex);
          __asm { vcvtss2sd xmm7, xmm0, xmm0 }
          v29 = XAnimGetAnimName(xAnims, xAnimIndex);
          *(double *)&_XMM0 = XAnimGetLength(xAnims, shadowXAnimIndex);
          __asm { vcvtss2sd xmm6, xmm0, xmm0 }
          v31 = XAnimGetAnimName(xAnims, shadowXAnimIndex);
          __asm
          {
            vmovsd  [rsp+0E8h+var_B8], xmm7
            vmovsd  [rsp+0E8h+fmt], xmm6
          }
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F03510, 1173i64, v31, fmt, v29, v36);
        }
      }
      __asm
      {
        vmovaps xmm6, [rsp+0E8h+var_48]
        vmovaps xmm7, [rsp+0E8h+var_58]
      }
    }
    else
    {
      _RDI->flags = flags | 1;
      _RDI->duration = 0;
      _RDI->moveSpeed = 0.0;
      if ( !initialLerp )
        _RDI->initialLerp = -1;
    }
  }
  else
  {
    scriptName = BG_Animation_GetPlayerAnimScript(suitAnimIndex)->scriptName;
    v15 = SL_ConvertToString(_RDI->animName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F03430, 1171i64, v15, scriptName);
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
  PlayerAnimEntry *v9; 
  unsigned __int16 v10; 
  unsigned __int8 twitches; 
  unsigned __int16 v12; 
  __int64 v19; 
  bool v21; 
  __int64 v22; 
  PlayerAnimEntry *v23; 
  __int64 v27; 
  __int64 v28; 

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
      LODWORD(v27) = animIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1094, ASSERT_TYPE_ASSERT, "(unsigned)( baseIdleIndex ) < (unsigned)( playerAnim->animationCount )", "baseIdleIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v27, playerAnim->animationCount) )
        __debugbreak();
    }
    v9 = &playerAnim->animations[(unsigned __int16)animIndex];
    if ( (v9->flags & 0x80000) != 0 && v9->twitches )
    {
      __asm { vmovaps [rsp+78h+var_38], xmm6 }
      v10 = BG_Animation_GetAnimIndex(v9);
      twitches = v9->twitches;
      v12 = v10;
      if ( !twitches || twitches > playerAnim->scriptIdleTwitchCount )
      {
        LODWORD(v28) = 1;
        LODWORD(v27) = twitches;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1105, ASSERT_TYPE_ASSERT, "( 1 ) <= ( animEntry->twitches ) && ( animEntry->twitches ) <= ( playerAnim->scriptIdleTwitchCount )", "animEntry->twitches not in [1, playerAnim->scriptIdleTwitchCount]\n\t%i not in [%i, %i]", v27, v28, playerAnim->scriptIdleTwitchCount) )
          __debugbreak();
      }
      _RBP = playerAnim->scriptIdleTwitches;
      _RSI = v9->twitches;
      *(double *)&_XMM0 = XAnimGetLength(xAnims, v12);
      __asm
      {
        vmovss  xmm6, cs:__real@3dcccccd
        vsubss  xmm1, xmm0, xmm6
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rbx
      }
      v19 = 0i64;
      __asm
      {
        vmulss  xmm2, xmm1, xmm0
        vmovss  dword ptr [rbp+rsi*8-0Ch], xmm2
      }
      v21 = _RBP[_RSI - 1].twitchCount == 0;
      if ( _RBP[_RSI - 1].twitchCount )
      {
        do
        {
          v22 = _RBP[_RSI - 1].twitches[v19];
          if ( (unsigned int)v22 >= playerAnim->animationCount )
          {
            LODWORD(v28) = playerAnim->animationCount;
            LODWORD(v27) = _RBP[_RSI - 1].twitches[v19];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1115, ASSERT_TYPE_ASSERT, "(unsigned)( twitchAnimEntryIndex ) < (unsigned)( playerAnim->animationCount )", "twitchAnimEntryIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v27, v28) )
              __debugbreak();
          }
          v23 = &playerAnim->animations[v22];
          if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 413, ASSERT_TYPE_ASSERT, "(animEntry)", (const char *)&queryFormat, "animEntry") )
            __debugbreak();
          *(double *)&_XMM0 = XAnimGetLength(xAnims, LOWORD(v23->animIndex));
          __asm
          {
            vsubss  xmm1, xmm0, xmm6
            vaddss  xmm2, xmm1, dword ptr [rbp+rsi*8-0Ch]
          }
          v19 = (unsigned int)(v19 + 1);
          __asm { vmovss  dword ptr [rbp+rsi*8-0Ch], xmm2 }
          v21 = (unsigned int)v19 <= _RBP[_RSI - 1].twitchCount;
        }
        while ( (unsigned int)v19 < _RBP[_RSI - 1].twitchCount );
      }
      __asm
      {
        vmovaps xmm6, [rsp+78h+var_38]
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm2, xmm0
      }
      if ( v21 )
        _RBP[_RSI - 1].cycleLength = 1.0;
    }
  }
}

/*
==============
BG_CalculateAimAnimValues
==============
*/

void __fastcall BG_CalculateAimAnimValues(aimAnimValues_t *values, double fAimFactor2, double fAimFactor4, double fAimFactor6, float fAimFactor8)
{
  const dvar_t *v13; 
  bool v17; 
  char v18; 
  const dvar_t *v23; 
  char v24; 
  bool v25; 
  bool v32; 
  char v42; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
  }
  _RBX = values;
  *(_QWORD *)&values->fTime1 = 0i64;
  *(_QWORD *)&values->fTime3 = 0i64;
  *(_QWORD *)&values->fTime6 = 0i64;
  *(_QWORD *)&values->fTime8 = 0i64;
  *(_QWORD *)&values->fStrength1 = 0i64;
  *(_QWORD *)&values->fStrength3 = 0i64;
  *(_QWORD *)&values->fStrength6 = 0i64;
  *(_QWORD *)&values->fStrength8 = 0i64;
  v13 = DVARINT_anim_aim_debug;
  __asm
  {
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
    vmovaps xmm10, xmm1
  }
  if ( !DVARINT_anim_aim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "anim_aim_debug") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm8
    vmovaps [rsp+0A8h+var_68], xmm11
  }
  Dvar_CheckFrontendServerThread(v13);
  v17 = v13->current.integer == 0;
  v18 = v17;
  __asm { vxorps  xmm9, xmm9, xmm9 }
  if ( v13->current.integer <= 0 )
  {
    __asm { vmovss  xmm8, [rsp+0A8h+fAimFactor8] }
  }
  else
  {
    _RDI = DVARFLT_anim_aim_debug_factor;
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm10, xmm10, xmm10
    }
    if ( !DVARFLT_anim_aim_debug_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "anim_aim_debug_factor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm11, dword ptr [rdi+28h] }
    v23 = DVARINT_anim_aim_debug;
    if ( !DVARINT_anim_aim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "anim_aim_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    v17 = v23->current.integer == 1;
    v18 = v24 | v17;
    switch ( v23->current.integer )
    {
      case 1:
        __asm { vmovaps xmm6, xmm11; jumptable 0000000140FD7098 case 1 }
        break;
      case 2:
        break;
      case 3:
        __asm
        {
          vmovaps xmm7, xmm11; jumptable 0000000140FD7098 case 3
          vmovaps xmm10, xmm11
        }
        goto LABEL_31;
      case 4:
        __asm { vmovaps xmm6, xmm11; jumptable 0000000140FD7098 case 4 }
        goto LABEL_16;
      case 5:
        goto LABEL_26;
      case 6:
        __asm { vmovaps xmm7, xmm11; jumptable 0000000140FD7098 case 6 }
        goto LABEL_39;
      case 7:
        __asm
        {
          vmovaps xmm8, xmm11; jumptable 0000000140FD7098 case 7
          vmovaps xmm6, xmm11
        }
        goto LABEL_26;
      case 8:
        __asm { vmovaps xmm8, xmm11; jumptable 0000000140FD7098 case 8 }
        goto LABEL_26;
      case 9:
        __asm
        {
          vmovaps xmm8, xmm11; jumptable 0000000140FD7098 case 9
          vmovaps xmm7, xmm11
        }
        goto LABEL_26;
      default:
        goto LABEL_39;
    }
    __asm { vmovaps xmm10, xmm11; jumptable 0000000140FD7098 case 2 }
  }
LABEL_31:
  __asm { vcomiss xmm10, xmm9 }
  if ( v18 )
  {
LABEL_26:
    __asm { vcomiss xmm8, xmm9; jumptable 0000000140FD7098 case 5 }
    if ( v18 )
    {
LABEL_16:
      __asm { vcomiss xmm6, xmm9 }
      if ( v18 )
      {
        __asm { vucomiss xmm10, xmm9 }
        if ( !v17 )
        {
          v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7397, ASSERT_TYPE_ASSERT, "(fAimFactor2 == 0.0f)", (const char *)&queryFormat, "fAimFactor2 == 0.0f");
          v17 = !v32;
          if ( v32 )
            __debugbreak();
        }
        __asm { vucomiss xmm8, xmm9 }
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7398, ASSERT_TYPE_ASSERT, "(fAimFactor8 == 0.0f)", (const char *)&queryFormat, "fAimFactor8 == 0.0f") )
          __debugbreak();
LABEL_39:
        __asm { vmovss  dword ptr [rbx+10h], xmm7; jumptable 0000000140FD7098 default case }
        _RBX->fStrength6 = 1.0;
      }
      else
      {
        __asm { vucomiss xmm10, xmm9 }
        if ( !v17 )
        {
          v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7388, ASSERT_TYPE_ASSERT, "(fAimFactor2 == 0.0f)", (const char *)&queryFormat, "fAimFactor2 == 0.0f");
          v17 = !v25;
          if ( v25 )
            __debugbreak();
        }
        __asm { vucomiss xmm8, xmm9 }
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7389, ASSERT_TYPE_ASSERT, "(fAimFactor8 == 0.0f)", (const char *)&queryFormat, "fAimFactor8 == 0.0f") )
          __debugbreak();
        __asm { vmovss  dword ptr [rbx+0Ch], xmm6 }
        _RBX->fStrength4 = 1.0;
      }
    }
    else
    {
      __asm
      {
        vcomiss xmm7, xmm9
        vcomiss xmm7, xmm8
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm2, xmm8, xmm7
        vmovss  dword ptr [rbx+10h], xmm7
        vsubss  xmm1, xmm0, xmm2
        vmovss  dword ptr [rbx+30h], xmm1
        vmovss  dword ptr [rbx+1Ch], xmm7
        vmovss  dword ptr [rbx+3Ch], xmm2
      }
    }
  }
  else
  {
    __asm
    {
      vcomiss xmm7, xmm9
      vcomiss xmm7, xmm10
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm2, xmm10, xmm7
      vmovss  dword ptr [rbx+10h], xmm7
      vsubss  xmm1, xmm0, xmm2
      vmovss  dword ptr [rbx+30h], xmm1
      vmovss  dword ptr [rbx+8], xmm7
      vmovss  dword ptr [rbx+28h], xmm2
    }
  }
  __asm { vmovaps xmm11, [rsp+0A8h+var_68] }
  _R11 = &v42;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm8, [rsp+0A8h+var_38]
  }
}

/*
==============
BG_CalculateAnimRateFromCharacterSpeed
==============
*/

float __fastcall BG_CalculateAnimRateFromCharacterSpeed(double characterSpeed, int animIndex, double durationIntoAnim, SuitAnimType suitAnimIndex)
{
  __int64 v9; 
  __int64 v10; 
  BgStatic *ActiveStatics; 
  __int64 v13; 
  __int64 v14; 
  const PlayerAnimEntry *v15; 
  unsigned __int64 flags; 
  const dvar_t *v17; 
  int v18; 
  int v19; 
  bool v23; 
  char v24; 
  __int64 v48; 
  __int64 v49; 
  char v54; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_48], xmm9
    vmovaps xmm9, xmm2
  }
  v9 = suitAnimIndex;
  v10 = animIndex;
  __asm { vmovaps xmm6, xmm0 }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3663, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !(_DWORD)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3664, ASSERT_TYPE_ASSERT, "(animIndex)", (const char *)&queryFormat, "animIndex") )
    __debugbreak();
  if ( (v10 & 0x1000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3665, ASSERT_TYPE_ASSERT, "(!(animIndex & (1<<(13-1))))", (const char *)&queryFormat, "!(animIndex & ANIM_TOGGLEBIT)") )
    __debugbreak();
  if ( (unsigned int)v9 >= 4 )
  {
    LODWORD(v48) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3666, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v48, 4) )
      __debugbreak();
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  v13 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3670, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v14 = *(_QWORD *)(v13 + 8 * v9);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3673, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  if ( (unsigned int)v10 >= *(_DWORD *)(v14 + 8) )
  {
    LODWORD(v49) = *(_DWORD *)(v14 + 8);
    LODWORD(v48) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3674, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( playerAnim->animationCount )", "animIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v48, v49) )
      __debugbreak();
  }
  v15 = (const PlayerAnimEntry *)(*(_QWORD *)(v14 + 48) + 104 * v10);
  flags = v15->flags;
  if ( (flags & 0x800100) == 0 )
    goto LABEL_48;
  if ( (flags & 0x800000) != 0 )
  {
    v17 = DVARBOOL_anim_disableSpeedScaledTransitions;
    if ( !DVARBOOL_anim_disableSpeedScaledTransitions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "anim_disableSpeedScaledTransitions") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
    {
LABEL_48:
      __asm { vmovss  xmm0, cs:__real@3f800000 }
      goto LABEL_49;
    }
  }
  v18 = v15->flags;
  __asm { vmovaps [rsp+88h+var_28], xmm7 }
  v19 = v18 & 2;
  __asm { vmovaps [rsp+88h+var_38], xmm8 }
  *(float *)&characterSpeed = BG_Animation_GetAnimEntryMoveSpeed(v15);
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm0, xmm8
    vmovaps xmm7, xmm0
  }
  if ( v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3692, ASSERT_TYPE_ASSERT, "(animMoveSpeed != 0.0f)", (const char *)&queryFormat, "animMoveSpeed != 0.0f") )
    __debugbreak();
  __asm { vdivss  xmm6, xmm6, xmm7 }
  v23 = (v15->flags & 0x800000) != 0i64;
  if ( (v15->flags & 0x800000) != 0 )
  {
    _RBX = DCONST_DVARFLT_bg_animUnspeedScaledDuration;
    if ( !DCONST_DVARFLT_bg_animUnspeedScaledDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_animUnspeedScaledDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vcomiss xmm9, dword ptr [rbx+28h] }
    if ( v23 )
      __asm { vmaxss  xmm6, xmm6, cs:__real@3f800000 }
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3dcccccd
    vcomiss xmm6, xmm0
  }
  if ( !v23 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@40000000
      vcomiss xmm6, xmm0
    }
    if ( !(v23 | v24) )
    {
      if ( !v19 )
      {
        __asm
        {
          vcomiss xmm7, cs:__real@43160000
          vmovss  xmm0, cs:__real@41a00000
          vcomiss xmm7, xmm0
          vmovss  xmm1, cs:__real@40400000
          vmovaps xmm8, [rsp+88h+var_38]
          vsubss  xmm0, xmm7, xmm0
          vmulss  xmm2, xmm0, cs:__real@3bfc0fc1
          vmovaps xmm7, [rsp+88h+var_28]
          vsubss  xmm2, xmm1, xmm2
          vminss  xmm6, xmm2, xmm6
          vmovaps xmm0, xmm6
        }
        goto LABEL_49;
      }
      __asm { vminss  xmm6, xmm6, cs:__real@40800000 }
    }
    __asm
    {
      vmovaps xmm8, [rsp+88h+var_38]
      vmovaps xmm7, [rsp+88h+var_28]
      vmovaps xmm0, xmm6
    }
    goto LABEL_49;
  }
  __asm { vcomiss xmm6, cs:__real@3c23d70a }
  if ( v23 && v19 )
  {
    __asm
    {
      vmovaps xmm8, [rsp+88h+var_38]
      vmovaps xmm7, [rsp+88h+var_28]
      vxorps  xmm6, xmm6, xmm6
      vmovaps xmm0, xmm6
    }
  }
  else
  {
    __asm
    {
      vmovaps xmm8, [rsp+88h+var_38]
      vmovaps xmm7, [rsp+88h+var_28]
      vmovaps xmm6, xmm0
    }
  }
LABEL_49:
  _R11 = &v54;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm6, [rsp+88h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_CalculateDurationIntoAnimFromLegsTimer
==============
*/
float BG_CalculateDurationIntoAnimFromLegsTimer(int legsTimer, int animIndex, SuitAnimType suitAnimIndex)
{
  __int64 v4; 
  BgStatic *ActiveStatics; 
  __int64 v7; 
  __int64 v8; 
  __int64 v13; 
  __int64 v14; 

  v4 = suitAnimIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3626, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( (unsigned int)v4 >= 4 )
  {
    LODWORD(v13) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3627, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v13, 4) )
      __debugbreak();
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  v7 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3631, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v8 = *(_QWORD *)(v7 + 8 * v4);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3634, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  if ( (unsigned int)animIndex >= *(_DWORD *)(v8 + 8) )
  {
    LODWORD(v14) = *(_DWORD *)(v8 + 8);
    LODWORD(v13) = animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3635, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( playerAnim->animationCount )", "animIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, cs:__real@38d1b717
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_CalculateNodeAnimRate
==============
*/
float BG_CalculateNodeAnimRate(const characterInfo_t *ci, const int newAnimIndex, const bool firstCall, float *outTotalWeight)
{
  XAnimTree *pXAnimTree; 
  unsigned __int16 InfoIndex; 
  XAnimInfo *AnimInfo; 
  XAnimInfo *v24; 
  unsigned int animIndex; 
  char v27; 
  char v29; 
  unsigned __int16 children; 
  XAnimInfo *v44; 
  bool v47; 
  float fmt; 
  float v57; 
  float outTotalWeighta; 
  vec3_t trans; 
  vec2_t rot; 
  char v62; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0E8h+var_88], xmm11
  }
  pXAnimTree = ci->pXAnimTree;
  _RSI = outTotalWeight;
  __asm
  {
    vxorps  xmm11, xmm11, xmm11
    vcvtsi2ss xmm11, xmm11, dword ptr [rcx+147Ch]
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm6, xmm6, xmm6
  }
  InfoIndex = XAnimGetInfoIndex(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, newAnimIndex);
  AnimInfo = GetAnimInfo(InfoIndex);
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vmovss  [rsp+0E8h+outTotalWeight], xmm8
  }
  v24 = AnimInfo;
  if ( !AnimInfo->animToModel )
  {
    *(double *)&_XMM0 = XAnimGetWeight(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, newAnimIndex);
    children = v24->children;
    __asm { vmovaps xmm7, xmm0 }
    for ( ; children; children = v44->next )
    {
      v44 = GetAnimInfo(children);
      if ( v44->animIndex )
      {
        *(float *)&_XMM0 = BG_CalculateNodeAnimRate(ci, v44->animIndex, 0, &outTotalWeighta);
        __asm
        {
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm6, xmm6, xmm1
        }
      }
    }
    if ( !_RSI )
    {
      __asm { vmovss  [rsp+0E8h+outTotalWeight], xmm7 }
      goto LABEL_18;
    }
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm0
    }
    goto LABEL_16;
  }
  animIndex = AnimInfo->animIndex;
  *(double *)&_XMM0 = XAnimGetWeight(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  __asm
  {
    vcomiss xmm0, xmm8
    vmovaps xmm9, xmm0
  }
  if ( v27 | v29 )
    goto LABEL_16;
  *(double *)&_XMM0 = XAnimGetLength(pXAnimTree->anims, animIndex);
  __asm
  {
    vucomiss xmm0, xmm8
    vmovaps xmm7, xmm0
  }
  if ( v29 )
  {
LABEL_16:
    __asm { vmovss  xmm7, [rsp+0E8h+outTotalWeight] }
    goto LABEL_18;
  }
  __asm
  {
    vmovss  dword ptr [rsp+0E8h+var_C0], xmm10
    vmovss  dword ptr [rsp+0E8h+fmt], xmm8
  }
  XAnimGetRelDelta(pXAnimTree->anims, animIndex, &rot, &trans, fmt, v57);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0E8h+trans]
    vmovss  xmm2, dword ptr [rsp+0E8h+trans+4]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm4, xmm1, xmm1
    vmovss  xmm1, dword ptr [rsp+0E8h+trans+8]
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm5, xmm4, xmm3
    vaddss  xmm3, xmm5, xmm2
    vsqrtss xmm0, xmm3, xmm3
    vucomiss xmm0, xmm8
  }
  if ( v29 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    goto LABEL_26;
  }
  __asm
  {
    vdivss  xmm6, xmm0, xmm7
    vucomiss xmm6, xmm8
  }
  if ( v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6892, ASSERT_TYPE_ASSERT, "(animMoveSpeed)", (const char *)&queryFormat, "animMoveSpeed") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, [rsp+0E8h+outTotalWeight]
    vdivss  xmm0, xmm11, xmm6
    vmulss  xmm6, xmm0, xmm9
  }
LABEL_18:
  v47 = v24->animToModel == NULL;
  if ( !v24->animToModel )
  {
    __asm { vucomiss xmm6, xmm8 }
    if ( v24->animToModel || (v47 = !firstCall) )
    {
      __asm { vucomiss xmm7, xmm10 }
      if ( !v47 )
      {
        __asm
        {
          vcomiss xmm7, xmm8
          vdivss  xmm6, xmm6, xmm7
        }
      }
    }
    else
    {
      __asm { vmovaps xmm6, xmm10 }
    }
  }
  __asm { vmovaps xmm0, xmm6 }
LABEL_26:
  _R11 = &v62;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_CalculatePitchAimFactors
==============
*/

void __fastcall BG_CalculatePitchAimFactors(double pitchAimAngle, float maxPitchAimAngle, float *aimFactor2, float *aimFactor8)
{
  char v4; 
  char v5; 

  __asm
  {
    vcomiss xmm0, cs:__real@42b40000
    vmovss  xmm3, cs:__real@3f800000
    vdivss  xmm4, xmm3, xmm1
  }
  if ( v4 | v5 )
  {
    __asm
    {
      vmulss  xmm0, xmm4, xmm0
      vminss  xmm1, xmm0, xmm3
      vxorps  xmm2, xmm2, xmm2
      vmovss  dword ptr [r8], xmm1
      vmovss  dword ptr [r9], xmm2
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, cs:__real@43340000
      vsubss  xmm0, xmm1, xmm0
      vmulss  xmm2, xmm0, xmm4
      vxorps  xmm0, xmm0, xmm0
      vminss  xmm3, xmm2, xmm3
      vmovss  dword ptr [r8], xmm0
      vmovss  dword ptr [r9], xmm3
    }
  }
}

/*
==============
BG_CalculateYawAimFactors
==============
*/

void __fastcall BG_CalculateYawAimFactors(double yawAimAngle, float maxYawAimAngle, float *aimFactor4, float *aimFactor6)
{
  char v4; 

  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm0, xmm2
    vdivss  xmm3, xmm0, xmm1
  }
  if ( v4 )
  {
    __asm
    {
      vxorps  xmm0, xmm3, cs:__xmm@80000000800000008000000080000000
      vminss  xmm1, xmm0, cs:__real@3f800000
      vmovss  dword ptr [r8], xmm2
      vmovss  dword ptr [r9], xmm1
    }
  }
  else
  {
    __asm
    {
      vminss  xmm0, xmm3, cs:__real@3f800000
      vmovss  dword ptr [r8], xmm0
      vmovss  dword ptr [r9], xmm2
    }
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
  int v13; 
  unsigned __int16 next; 

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
    v13 = i - 8;
    if ( i - 8 > 0 )
    {
      __asm
      {
        vmovaps [rsp+88h+var_28], xmm6
        vmovaps [rsp+88h+var_38], xmm7
        vmovaps [rsp+88h+var_48], xmm8
        vmovss  xmm8, cs:__real@7f7fffff
        vxorps  xmm7, xmm7, xmm7
      }
      do
      {
        next = AnimInfo->children;
        __asm { vmovaps xmm6, xmm8 }
        for ( ; next; next = _RAX->next )
        {
          _RAX = GetAnimInfo(next);
          if ( _RAX && _RAX->animToModel )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rax+3Ch]
              vcomiss xmm0, xmm7
            }
            if ( _RAX->animToModel )
              __asm { vcomiss xmm7, dword ptr [rax+34h] }
          }
        }
        --v13;
      }
      while ( v13 > 0 );
      __asm
      {
        vmovaps xmm8, [rsp+88h+var_48]
        vmovaps xmm7, [rsp+88h+var_38]
        vmovaps xmm6, [rsp+88h+var_28]
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

__int64 __fastcall BG_DegreesToMovementDir(double degrees)
{
  __int64 v8; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2919, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  __asm { vaddss  xmm0, xmm6, cs:__real@3f340000; angle }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@3f360b61
    vcvttss2si ebx, xmm1
  }
  if ( _EBX < 0 )
  {
    LODWORD(v8) = _EBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2927, ASSERT_TYPE_ASSERT, "( ( movementDir >= 0 ) )", "( movementDir ) = %i", v8) )
      __debugbreak();
  }
  if ( _EBX >= 256 )
  {
    LODWORD(v8) = _EBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2928, ASSERT_TYPE_ASSERT, "( ( movementDir < (1 << 8) ) )", "( movementDir ) = %i", v8) )
      __debugbreak();
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return (unsigned int)_EBX;
}

/*
==============
BG_DetermineStrafeCondition
==============
*/

__int64 __fastcall BG_DetermineStrafeCondition(pmove_t *pm, double forwardMove, double rightMove)
{
  const SuitDef *SuitDef; 
  bool isMovementCameraIndependent; 
  char v22; 
  char v23; 
  __int64 result; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_38], xmm7
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm2
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2827, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(pm->ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2842, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( SuitDef->isMovementCameraIndependent )
    goto LABEL_19;
  __asm
  {
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm1, xmm1, xmm0
    vmovss  xmm0, cs:__real@3f800000
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm1, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm0, xmm1
    vmovaps [rsp+88h+var_48], xmm8
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm6, xmm8
    vdivss  xmm7, xmm7, xmm0
  }
  isMovementCameraIndependent = SuitDef->isMovementCameraIndependent;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 0x1Du) )
  {
    *(double *)&_XMM0 = Slide_GetPlayerMovementViewDelta(pm->ps, pm);
    __asm
    {
      vmovaps xmm6, xmm0
      vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
    }
    *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
    __asm
    {
      vcomiss xmm6, xmm8
      vmovaps xmm7, xmm0
    }
    isMovementCameraIndependent = !(v22 | v23);
  }
  _RBX = DCONST_DVARFLT_player_strafeAnimCosAngle;
  __asm { vmovaps xmm8, [rsp+88h+var_48] }
  if ( !DCONST_DVARFLT_player_strafeAnimCosAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_strafeAnimCosAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm7, dword ptr [rbx+28h] }
  if ( !(v22 | v23) )
    goto LABEL_19;
  _RBX = DCONST_DVARFLT_player_strafeAnimCosAngle;
  if ( !DCONST_DVARFLT_player_strafeAnimCosAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_strafeAnimCosAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
    vcomiss xmm7, xmm1
  }
  if ( v22 )
LABEL_19:
    result = 0i64;
  else
    result = (unsigned int)isMovementCameraIndependent + 1;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm7, [rsp+88h+var_38]
  }
  return result;
}

/*
==============
BG_DetermineTwitchAnimAndTime
==============
*/
void BG_DetermineTwitchAnimAndTime(characterInfo_t *ci, const entityState_t *es, int baseIdleAnimIndex, int *chosenAnimIndex, float *animTime)
{
  __int64 v17; 
  BgStatic *ActiveStatics; 
  __int64 v19; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  __int64 v21; 
  const PlayerAnimScript *v22; 
  __int64 v23; 
  unsigned int XAnimIndex; 
  __int64 entityNum; 
  unsigned __int8 v31; 
  char v48; 
  unsigned int twitchCount; 
  unsigned int v53; 
  bool v56; 
  int v59; 
  int v60; 
  unsigned int v61; 
  __int64 v62; 
  __int64 *v63; 
  int v64; 
  unsigned int v65; 
  unsigned int v72; 
  __int64 v83; 
  __int64 v84; 
  double v85; 
  double v86; 
  __int16 outEntNum[2]; 
  unsigned int pHoldrand; 
  float *v90; 
  __int64 v91[2]; 
  int v92; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm6
    vmovaps xmmword ptr [r11-88h], xmm9
    vmovaps xmmword ptr [r11-0B8h], xmm12
  }
  v17 = baseIdleAnimIndex;
  v90 = animTime;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6332, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6333, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  v19 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6337, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(ci);
  v21 = SuitAnimIndexFromCharacter;
  if ( (unsigned int)SuitAnimIndexFromCharacter >= NUM_ANIM_SUIT_STATE )
  {
    LODWORD(v83) = SuitAnimIndexFromCharacter;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6340, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v83, 4) )
      __debugbreak();
  }
  v22 = *(const PlayerAnimScript **)(v19 + 8 * v21);
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6343, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
    __debugbreak();
  *chosenAnimIndex = -1;
  v23 = (__int64)&v22->animations[v17];
  if ( (*(_DWORD *)(v23 + 16) & 0x80000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6348, ASSERT_TYPE_ASSERT, "(baseIdleAnim->flags & ANIMFL_BASEIDLEANIM)", (const char *)&queryFormat, "baseIdleAnim->flags & ANIMFL_BASEIDLEANIM") )
    __debugbreak();
  XAnimIndex = BG_GetXAnimIndex(v22, v17);
  *(double *)&_XMM0 = XAnimGetLength(ci->pXAnimTree->anims, XAnimIndex);
  entityNum = ci->entityNum;
  __asm
  {
    vmovss  xmm9, cs:__real@3dcccccd
    vmovss  xmm12, cs:__real@3f800000
    vcmpless xmm1, xmm0, xmm9
    vblendvps xmm0, xmm0, xmm12, xmm1
    vmovss  [rsp+148h+var_F4], xmm0
  }
  if ( (unsigned int)(entityNum + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)entityNum, "signed", entityNum) )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+148h+var_68], xmm7
    vmovaps [rsp+148h+var_78], xmm8
    vmovaps [rsp+148h+var_98], xmm10
  }
  outEntNum[0] = entityNum;
  BG_GameInterface_InteractionAnims_GetSyncedEntNumForIdleTwitches(ci, es, outEntNum);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  v31 = *(_BYTE *)(v23 + 99);
  __asm
  {
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm6, xmm0, cs:__real@3a83126f
  }
  if ( v31 )
  {
    _RBP = v22->scriptIdleTwitches;
    v91[0] = 0i64;
    _RSI = v31;
    v91[1] = 0i64;
    v92 = 0;
    __asm { vmovaps [rsp+148h+var_A8], xmm11 }
    pHoldrand = v17 + 7 * outEntNum[0];
    BG_srand(&pHoldrand);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+rsi*8-0Ch]
      vxorps  xmm11, xmm11, xmm11
      vcomiss xmm0, xmm11
    }
    if ( v56 | v48 )
    {
      __asm
      {
        vcvtss2sd xmm1, xmm0, xmm0
        vxorpd  xmm0, xmm0, xmm0
        vmovsd  [rsp+148h+var_108], xmm0
        vmovsd  [rsp+148h+var_110], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6387, ASSERT_TYPE_ASSERT, "( twitches->cycleLength ) > ( 0.0f )", "%s > %s\n\t%g, %g", "twitches->cycleLength", "0.0f", v85, v86) )
        __debugbreak();
    }
    __asm { vdivss  xmm3, xmm6, dword ptr [rbp+rsi*8-0Ch] }
    twitchCount = _RBP[_RSI - 1].twitchCount;
    v53 = 0;
    __asm
    {
      vmovaps xmm1, xmm3
      vxorps  xmm8, xmm8, xmm8
      vroundss xmm2, xmm8, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm6, xmm0, dword ptr [rbp+rsi*8-0Ch]
    }
    v56 = 0;
    if ( twitchCount )
    {
      __asm
      {
        vmovss  xmm10, [rsp+148h+var_F4]
        vsubss  xmm7, xmm10, xmm9
      }
      while ( 1 )
      {
        __asm { vcomiss xmm6, xmm7 }
        if ( v56 )
          break;
        __asm { vsubss  xmm6, xmm6, xmm7 }
        v59 = -1;
        v60 = BG_irand(0, twitchCount - v53, &pHoldrand);
        v61 = _RBP[_RSI - 1].twitchCount;
        v62 = 0i64;
        if ( v61 )
        {
          v63 = v91;
          do
          {
            if ( !*(_DWORD *)v63 )
            {
              if ( !v60 )
              {
                v59 = v62;
                *((_DWORD *)v91 + v62) = 1;
                break;
              }
              --v60;
            }
            v62 = (unsigned int)(v62 + 1);
            v63 = (__int64 *)((char *)v63 + 4);
          }
          while ( (unsigned int)v62 < v61 );
        }
        if ( v59 >= v61 )
        {
          LODWORD(v84) = v61;
          LODWORD(v83) = v59;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6422, ASSERT_TYPE_ASSERT, "(unsigned)( nextTwitchIndex ) < (unsigned)( twitches->twitchCount )", "nextTwitchIndex doesn't index twitches->twitchCount\n\t%i not in [0, %i)", v83, v84) )
            __debugbreak();
        }
        v64 = _RBP[_RSI - 1].twitches[v59];
        v65 = BG_GetXAnimIndex(v22, v64);
        *(double *)&_XMM0 = XAnimGetLength(ci->pXAnimTree->anims, v65);
        __asm
        {
          vcmpless xmm1, xmm0, xmm11
          vblendvps xmm2, xmm0, xmm12, xmm1
          vsubss  xmm0, xmm2, xmm9
          vcomiss xmm6, xmm0
        }
        if ( v56 )
        {
          *chosenAnimIndex = v64;
          _RBX = v90;
          __asm
          {
            vdivss  xmm0, xmm6, xmm2
            vmovss  dword ptr [rbx], xmm0
          }
          goto LABEL_44;
        }
        twitchCount = _RBP[_RSI - 1].twitchCount;
        ++v53;
        __asm { vsubss  xmm6, xmm6, xmm0 }
        v56 = v53 < twitchCount;
        if ( v53 >= twitchCount )
          goto LABEL_43;
      }
      _RBX = v90;
      __asm { vdivss  xmm0, xmm6, xmm10 }
      *chosenAnimIndex = v17;
      __asm { vmovss  dword ptr [rbx], xmm0 }
    }
    else
    {
LABEL_43:
      _RBX = v90;
    }
LABEL_44:
    __asm { vmovaps xmm11, [rsp+148h+var_A8] }
  }
  else
  {
    __asm { vmovss  xmm5, [rsp+148h+var_F4] }
    _RBX = v90;
    __asm
    {
      vsubss  xmm4, xmm5, xmm9
      vdivss  xmm3, xmm6, xmm4
      vmovaps xmm1, xmm3
      vxorps  xmm8, xmm8, xmm8
      vroundss xmm2, xmm8, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm6, xmm0, xmm4
      vdivss  xmm0, xmm6, xmm5
    }
    *chosenAnimIndex = v17;
    __asm { vmovss  dword ptr [rbx], xmm0 }
  }
  __asm
  {
    vmovaps xmm12, [rsp+148h+var_B8]
    vmovaps xmm10, [rsp+148h+var_98]
    vmovaps xmm9, [rsp+148h+var_88]
    vmovaps xmm7, [rsp+148h+var_68]
  }
  if ( *chosenAnimIndex == -1 )
  {
    *chosenAnimIndex = v17;
    v72 = BG_GetXAnimIndex(v22, v17);
    XAnimGetLength(ci->pXAnimTree->anims, v72);
    __asm
    {
      vdivss  xmm4, xmm6, xmm0
      vxorps  xmm1, xmm1, xmm1
      vmovaps xmm2, xmm4
      vmovss  xmm0, xmm1, xmm2
      vroundss xmm3, xmm8, xmm0, 1
      vsubss  xmm1, xmm4, xmm3
      vmovss  dword ptr [rbx], xmm1
    }
  }
  __asm
  {
    vmovaps xmm8, [rsp+148h+var_78]
    vmovaps xmm6, [rsp+148h+var_58]
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
  char v15; 
  unsigned int Animset; 
  unsigned int Anim; 
  unsigned int v18; 
  bool v19; 
  SuitAnimType SuitAnimType; 
  int legsAnim; 
  SuitAnimType v22; 
  char v25; 
  const dvar_t *v31; 
  int integer; 
  int moveStartTimeNonReplicated; 
  const usercmd_s *cmd; 
  __int64 result; 
  vec3_t inOutPlayerVelocity; 
  WorldUpReferenceFrame v54; 

  __asm { vmovaps [rsp+0C8h+var_48], xmm6 }
  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10856, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3Ch]
    vmovss  xmm1, dword ptr [rbx+40h]
    vmovss  dword ptr [rsp+0C8h+inOutPlayerVelocity], xmm0
    vmovss  xmm0, dword ptr [rbx+44h]
    vmovss  dword ptr [rsp+0C8h+inOutPlayerVelocity+8], xmm0
    vmovss  dword ptr [rsp+0C8h+inOutPlayerVelocity+4], xmm1
  }
  BG_PlayerSecondaryCollision_ClipToVelocityPlane(_RBX, &inOutPlayerVelocity);
  BG_GameInterface_InteractionAnims_AdjustAnimMoveSpeedVelocity(pmoveArgs->handler, _RBX, &inOutPlayerVelocity);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v54, _RBX, pmoveArgs->handler);
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetForwardContribution(&v54, &inOutPlayerVelocity);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetRightContribution(&v54, &inOutPlayerVelocity);
  __asm
  {
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm0, xmm0
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm6, xmm1, xmm1
  }
  v15 = 0;
  if ( PlayerASM_IsEnabled() )
  {
    Animset = BG_PlayerASM_GetAnimset(_RBX);
    Anim = BG_PlayerASM_GetAnim(_RBX, MOVEMENT);
    v18 = Anim;
    if ( Anim && BG_PlayerASM_IsLadderAlias(Anim, Animset) )
    {
      v15 = 1;
      if ( !Com_GameMode_SupportsFeature(WEAPON_MANTLE_UP_WEAPON_UP|0x80) )
        goto LABEL_15;
      v19 = BG_PlayerASM_IsStrafeAlias(v18, Animset) == 0;
LABEL_9:
      if ( !v19 )
      {
        *(double *)&_XMM0 = WorldUpReferenceFrame::GetForwardContribution(&v54, &inOutPlayerVelocity);
LABEL_16:
        __asm { vandps  xmm6, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
        goto LABEL_17;
      }
LABEL_15:
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v54, &inOutPlayerVelocity);
      goto LABEL_16;
    }
  }
  else
  {
    SuitAnimType = BG_GetSuitAnimType(_RBX->suitIndex);
    legsAnim = _RBX->legsAnim;
    v22 = SuitAnimType;
    if ( legsAnim && BG_IsLadderAnim(legsAnim, SuitAnimType) )
    {
      v15 = 1;
      if ( !Com_GameMode_SupportsFeature(WEAPON_MANTLE_UP_WEAPON_UP|0x80) )
        goto LABEL_15;
      v19 = !BG_IsStrafeAnim(_RBX->legsAnim, v22);
      goto LABEL_9;
    }
  }
LABEL_17:
  _RBP = DCONST_DVARFLT_playerasm_clampvelocityvalue;
  _EBX = 0;
  if ( !DCONST_DVARFLT_playerasm_clampvelocityvalue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_clampvelocityvalue") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBP);
  __asm { vcomiss xmm6, dword ptr [rbp+28h] }
  if ( !(v25 | v19) || !pmoveArgs->initialSlideMoveBumped )
  {
    __asm
    {
      vaddss  xmm1, xmm6, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm2, xmm0, xmm1
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm3, xmm1, xmm2, 1
      vcvttss2si ebx, xmm3
    }
  }
  if ( !v15 )
  {
    v31 = DCONST_DVARINT_playerasm_move_pred_window;
    if ( !DCONST_DVARINT_playerasm_move_pred_window && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_move_pred_window") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    if ( ci )
    {
      if ( pmoveArgs->cmd )
      {
        integer = v31->current.integer;
        if ( integer )
        {
          if ( _EBX > 0 )
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
              _EAX = cmd->forwardmove;
              __asm { vmovd   xmm0, eax }
              _EAX = cmd->rightmove;
              __asm
              {
                vcvtdq2ps xmm0, xmm0
                vmulss  xmm2, xmm0, dword ptr [rsi+0Ch]
                vmovd   xmm1, eax
                vcvtdq2ps xmm1, xmm1
                vmulss  xmm0, xmm1, dword ptr [rsi+10h]
                vmulss  xmm3, xmm0, xmm0
                vmulss  xmm2, xmm2, xmm2
                vaddss  xmm1, xmm3, xmm2
                vsqrtss xmm0, xmm1, xmm1
                vaddss  xmm4, xmm0, cs:__real@3f000000
                vxorps  xmm0, xmm0, xmm0
                vroundss xmm3, xmm0, xmm4, 1
                vcvttss2si eax, xmm3
              }
              if ( _EAX < _EBX )
                _EAX = _EBX;
              _EBX = _EAX;
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
  if ( _EBX > 511 )
    _EBX = 511;
  if ( _EBX < 0 )
    _EBX = 0;
  result = (unsigned int)_EBX;
  __asm { vmovaps xmm6, [rsp+0C8h+var_48] }
  return result;
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
  int v28; 
  int v56; 
  entityType_s eType; 
  int v61; 
  int v72; 
  entityType_s v84; 
  entityType_s v96; 
  entityType_s v102; 
  bool v103; 
  bool v104; 

  _RSI = r_heldWeapon;
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
    _RAX = BG_GetWeaponForEntity(weaponMap, es);
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
    _RAX = BG_GetOffHandWeaponForPlayerEntity(weaponMap, es);
LABEL_22:
    __asm { vmovups ymm0, ymmword ptr [rax] }
    _R14 = r_thrownWeapon;
    __asm
    {
      vmovups ymmword ptr [rsi], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rsi+20h], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rsi+30h], xmm0
    }
    *(_DWORD *)&_RSI->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups ymmword ptr [r14], ymm0
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovups xmmword ptr [r14+20h], xmm1
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
      vmovsd  qword ptr [r14+30h], xmm0
    }
    v28 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    goto LABEL_23;
  }
LABEL_17:
  _RAX = BG_GetWeaponForEntity(v18, v17);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsi], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsi+20h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsi+30h], xmm0
  }
  *(_DWORD *)&_RSI->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  _RAX = BG_GetOffHandWeaponForPlayerEntity(weaponMap, es);
  _R14 = r_thrownWeapon;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [r14], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [r14+20h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [r14+30h], xmm0
  }
  v28 = *(_DWORD *)&_RAX->weaponCamo;
LABEL_23:
  *(_DWORD *)&_R14->weaponCamo = v28;
  _RAX = BG_GetStowedWeaponForPlayerEntity(weaponMap, es);
  _RDI = r_stowedWeapon;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rdi], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rdi+20h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rdi+30h], xmm0
  }
  *(_DWORD *)&r_stowedWeapon->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2088, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !BG_IsTurretActiveFlags(&es->lerp.eFlags) )
    goto LABEL_32;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2102, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( BG_IsRemoteTurretActiveFlags(&es->lerp.eFlags) )
  {
LABEL_32:
    __asm { vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON }
    _RCX = r_turretWeapon;
    __asm
    {
      vmovups ymmword ptr [rcx], ymm0
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovups xmmword ptr [rcx+20h], xmm1
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
      vmovsd  qword ptr [rcx+30h], xmm0
    }
    v56 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups ymmword ptr [rsi], ymm0
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovups xmmword ptr [rsi+20h], xmm1
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
      vmovsd  qword ptr [rsi+30h], xmm0
    }
    *(_DWORD *)&_RSI->weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups ymmword ptr [r14], ymm0
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovups xmmword ptr [r14+20h], xmm1
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
      vmovsd  qword ptr [r14+30h], xmm0
    }
    *(_DWORD *)&_R14->weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    _RAX = BG_GetStowedWeaponForPlayerEntity(weaponMap, es);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rdi], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rdi+20h], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rdi+30h], xmm0
    }
    *(_DWORD *)&r_stowedWeapon->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    _RAX = BG_GetWeaponForEntity(weaponMap, es);
    _RCX = r_turretWeapon;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rcx+30h], xmm0
    }
    v56 = *(_DWORD *)&_RAX->weaponCamo;
  }
  *(_DWORD *)&_RCX->weaponCamo = v56;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 595, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = es->eType;
  v61 = 131111;
  if ( (unsigned __int16)eType <= ET_AGENT && _bittest(&v61, eType) )
  {
    if ( (((unsigned __int16)es->lerp.u.player.playerFlags >> 5) & 3) == 1 || (((unsigned __int16)es->lerp.u.player.playerFlags >> 5) & 3) == 2 )
    {
      _RAX = BG_GetWeaponForEntity(weaponMap, es);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsi], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rsi+20h], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rsi+30h], xmm0
      }
      *(_DWORD *)&_RSI->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
      __asm
      {
        vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
        vmovups ymmword ptr [r14], ymm0
        vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
        vmovups xmmword ptr [r14+20h], xmm1
        vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
        vmovsd  qword ptr [r14+30h], xmm0
      }
      *(_DWORD *)&_R14->weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
      _RAX = BG_GetStowedWeaponForPlayerEntity(weaponMap, es);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rdi], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rdi+20h], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rdi+30h], xmm0
      }
      v72 = *(_DWORD *)&_RAX->weaponCamo;
      goto LABEL_43;
    }
    if ( (((unsigned __int16)es->lerp.u.player.playerFlags >> 5) & 3) == 3 )
    {
      _RAX = BG_GetWeaponForEntity(weaponMap, es);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsi], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rsi+20h], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rsi+30h], xmm0
      }
      *(_DWORD *)&_RSI->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
      __asm
      {
        vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
        vmovups ymmword ptr [r14], ymm0
        vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
        vmovups xmmword ptr [r14+20h], xmm1
        vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
        vmovsd  qword ptr [r14+30h], xmm0
      }
      *(_DWORD *)&_R14->weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
      __asm
      {
        vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
        vmovups ymmword ptr [rdi], ymm0
        vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
        vmovups xmmword ptr [rdi+20h], xmm1
        vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
        vmovsd  qword ptr [rdi+30h], xmm0
      }
      v72 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
LABEL_43:
      *(_DWORD *)&r_stowedWeapon->weaponCamo = v72;
    }
  }
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 542, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v84 = es->eType;
  if ( ((unsigned __int16)v84 > ET_AGENT || !_bittest(&v61, v84)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 544, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
    __debugbreak();
  _RAX = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, es->lerp.u.player.executionWeaponHandle);
  _RCX = r_executionWeapon;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rcx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rcx+20h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rcx+30h], xmm0
  }
  *(_DWORD *)&r_executionWeapon->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  if ( BG_SkydiveAnimStateHidesPrimaryWeapon((const animScriptParachuteState_t)ci->skydiveAnimState) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups ymmword ptr [rsi], ymm0
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovups xmmword ptr [rsi+20h], xmm1
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
      vmovsd  qword ptr [rsi+30h], xmm0
    }
    *(_DWORD *)&_RSI->weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  }
  if ( ci->dualWielding && r_stowedWeapon->weaponIdx && !BG_IsRiotShield(r_stowedWeapon, 0) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups ymmword ptr [rdi], ymm0
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovups xmmword ptr [rdi+20h], xmm1
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
      vmovsd  qword ptr [rdi+30h], xmm0
    }
    *(_DWORD *)&r_stowedWeapon->weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  }
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 737, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v96 = es->eType;
  if ( ((unsigned __int16)v96 > ET_AGENT || !_bittest(&v61, v96)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 739, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
    __debugbreak();
  _RAX = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, es->lerp.u.player.accessoryWeaponHandle);
  _RCX = r_accessoryWeapon;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rcx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rcx+20h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rcx+30h], xmm0
  }
  *(_DWORD *)&r_accessoryWeapon->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  v102 = es->eType;
  if ( (unsigned __int16)v102 <= ET_AGENT && _bittest(&v61, v102) )
  {
    v103 = (es->lerp.u.player.playerFlags & 0x1000) != 0;
    v104 = (es->lerp.u.player.playerFlags & 0x2000) != 0;
    if ( (es->lerp.u.player.playerFlags & 0x800) != 0 )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
        vmovups ymmword ptr [rsi], ymm0
        vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
        vmovups xmmword ptr [rsi+20h], xmm1
        vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
        vmovsd  qword ptr [rsi+30h], xmm0
      }
      *(_DWORD *)&_RSI->weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    }
    if ( v103 )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
        vmovups ymmword ptr [rdi], ymm0
        vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
        vmovups xmmword ptr [rdi+20h], xmm1
        vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
        vmovsd  qword ptr [rdi+30h], xmm0
      }
      *(_DWORD *)&r_stowedWeapon->weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    }
    if ( v104 )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
        vmovups ymmword ptr [rcx], ymm0
        vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
        vmovups xmmword ptr [rcx+20h], xmm1
        vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
        vmovsd  qword ptr [rcx+30h], xmm0
      }
      *(_DWORD *)&r_accessoryWeapon->weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    }
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

void __fastcall BG_LerpAngles(const vec3_t *angles_goal, double maxAngleChange, vec3_t *inOutAngles)
{
  unsigned int v8; 
  bool v10; 
  bool v11; 
  bool v13; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  char v32; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  _RSI = (char *)angles_goal - (char *)inOutAngles;
  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  v8 = 0;
  _RDI = inOutAngles;
  v10 = 1;
  v11 = 1;
  __asm { vmovaps xmm7, xmm1 }
  do
  {
    if ( !v10 )
    {
      LODWORD(v27) = 3;
      LODWORD(v25) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v25, v27) )
        __debugbreak();
      LODWORD(v28) = 3;
      LODWORD(v26) = v8;
      v13 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v28);
      v10 = 0;
      v11 = !v13;
      if ( v13 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+rdi]
      vsubss  xmm1, xmm0, dword ptr [rdi]
      vcomiss xmm1, xmm7
    }
    if ( v11 )
    {
      __asm
      {
        vxorps  xmm0, xmm7, xmm8
        vcomiss xmm1, xmm0
      }
      if ( v10 )
      {
        if ( v8 >= 3 )
        {
          LODWORD(v27) = 3;
          LODWORD(v25) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v25, v27) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vsubss  xmm1, xmm0, xmm7
          vmovss  dword ptr [rdi], xmm1
        }
      }
      else
      {
        if ( v8 >= 3 )
        {
          LODWORD(v27) = 3;
          LODWORD(v25) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v25, v27) )
            __debugbreak();
        }
        __asm { vmovss  xmm6, dword ptr [rsi+rdi] }
        if ( v8 >= 3 )
        {
          LODWORD(v27) = 3;
          LODWORD(v25) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v25, v27) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rdi], xmm6 }
      }
    }
    else
    {
      if ( v8 >= 3 )
      {
        LODWORD(v27) = 3;
        LODWORD(v25) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v25, v27) )
          __debugbreak();
      }
      __asm
      {
        vaddss  xmm0, xmm7, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm0
      }
    }
    ++v8;
    _RDI = (vec3_t *)((char *)_RDI + 4);
    v10 = v8 < 3;
    v11 = v8 <= 3;
  }
  while ( (int)v8 < 3 );
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  _R11 = &v32;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
BG_LerpOffset
==============
*/

void __fastcall BG_LerpOffset(const vec3_t *offset_goal, double maxOffsetChange, vec3_t *inOutOffset)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vsubss  xmm7, xmm0, dword ptr [r8]
    vmovss  xmm0, dword ptr [rcx+4]
    vmovaps [rsp+88h+var_38], xmm8
    vsubss  xmm8, xmm0, dword ptr [r8+4]
    vmovss  xmm0, dword ptr [rcx+8]
    vmovaps [rsp+88h+var_48], xmm9
    vsubss  xmm9, xmm0, dword ptr [r8+8]
    vmulss  xmm0, xmm8, xmm8
    vmovaps [rsp+88h+var_58], xmm10
    vmovaps xmm10, xmm1
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm6, xmm2, xmm1
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
    vcomiss xmm6, xmm0
    vmovaps xmm1, xmm6
    vrsqrtss xmm2, xmm1, xmm6
    vmulss  xmm3, xmm2, xmm10
    vcomiss xmm3, cs:__real@3f800000
  }
  *inOutOffset = *offset_goal;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
    vmovaps xmm10, [rsp+88h+var_58]
  }
}

/*
==============
BG_LerpPackedPolarCoordsToCartesian
==============
*/

vec2_t __fastcall BG_LerpPackedPolarCoordsToCartesian(unsigned __int16 packedPolarCoordStart, unsigned __int16 packedPolarCoordFinish, double lerpRatio)
{
  vec2_t result; 
  float outAnglesInDegrees; 
  float v34; 
  float v35; 
  float outRadius; 
  vec2_t outCartesianCoords; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps xmm8, xmm2
    vxorps  xmm6, xmm6, xmm6
  }
  if ( packedPolarCoordStart )
  {
    MSG_UnpackPolarFromShort(packedPolarCoordStart, &outAnglesInDegrees, &outRadius);
    __asm { vmovss  xmm7, [rsp+78h+outAnglesInDegrees] }
  }
  else
  {
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vmovss  [rsp+78h+outAnglesInDegrees], xmm7
      vmovss  [rsp+78h+outRadius], xmm6
    }
  }
  if ( packedPolarCoordFinish )
  {
    MSG_UnpackPolarFromShort(packedPolarCoordFinish, &v34, &v35);
    __asm
    {
      vmovss  xmm4, [rsp+78h+var_50]
      vmovss  xmm7, [rsp+78h+outAnglesInDegrees]
      vmovss  xmm6, [rsp+78h+var_54]
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm4, xmm4, xmm4
      vmovss  [rsp+78h+var_50], xmm4
      vmovss  [rsp+78h+var_54], xmm6
    }
  }
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vsubss  xmm2, xmm1, xmm8
    vmulss  xmm3, xmm2, [rsp+78h+outRadius]
    vsubss  xmm0, xmm6, xmm7
    vmulss  xmm6, xmm0, cs:__real@3b360b61
    vmulss  xmm0, xmm8, xmm4
    vaddss  xmm4, xmm6, cs:__real@3f000000
    vaddss  xmm1, xmm3, xmm0; radius
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm5, xmm0, xmm4, 1
    vsubss  xmm2, xmm6, xmm5
    vmulss  xmm0, xmm2, cs:__real@43b40000
    vmulss  xmm3, xmm0, xmm8
    vaddss  xmm0, xmm3, xmm7; angleInDegrees
  }
  PolarToCartesian(*(const float *)&_XMM0, *(const float *)&_XMM1, &outCartesianCoords);
  result = outCartesianCoords;
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
  return result;
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vmulss  xmm0, xmm0, cs:__real@3fb40000
  }
  return *(float *)&_XMM0;
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
    __asm
    {
      vmovss  xmm1, [rsp+48h+outRadius]; radius
      vmovss  xmm0, [rsp+48h+outAnglesInDegrees]; angleInDegrees
    }
    PolarToCartesian(*(const float *)&_XMM0, *(const float *)&_XMM1, &outCartesianCoords);
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+48h+outCartesianCoords], xmm0
      vmovss  dword ptr [rsp+48h+outCartesianCoords+4], xmm0
    }
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
  __int64 v14; 
  BgStatic *ActiveStatics; 
  __int64 v17; 
  __int64 SuitAnimIndexFromPlayerState; 
  __int64 v19; 
  __int64 v20; 
  unsigned __int8 v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned __int16 v24; 
  int v25; 
  int v26; 
  int v27; 
  const char *v28; 
  const char *v29; 
  int legsAnim; 
  int v31; 
  unsigned int v32; 
  __int64 v33; 
  __int64 v34; 
  char v35; 
  BgStatic *v36; 
  __int64 v37; 
  __int64 v38; 
  int v54; 
  const dvar_t *v55; 
  const char *v56; 
  const char *v57; 
  const dvar_t *v58; 
  const char *v59; 
  int v60; 
  const dvar_t *v61; 
  const char *v62; 
  char *fmt; 
  __int64 v65; 
  __int64 v66; 
  __int64 v67; 
  __int64 v69; 
  int v70; 
  int v72; 
  int forceLegsOnlya; 

  v14 = animNum;
  v70 = 0;
  if ( (unsigned int)animNum >= 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1781, ASSERT_TYPE_ASSERT, "(unsigned)( animNum ) < (unsigned)( (1<<(13-1)) )", "animNum doesn't index ANIM_TOGGLEBIT\n\t%i not in [0, %i)", animNum, 4096) )
    __debugbreak();
  if ( forceLegsOnly && bodyPart != ANIM_BP_BOTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1782, ASSERT_TYPE_ASSERT, "(!( forceLegsOnly && bodyPart != ANIM_BP_BOTH ))", (const char *)&queryFormat, "!( forceLegsOnly && bodyPart != ANIM_BP_BOTH )") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  v17 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1786, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(ps);
  v72 = SuitAnimIndexFromPlayerState;
  if ( (unsigned int)SuitAnimIndexFromPlayerState >= 4 )
  {
    LODWORD(v66) = 4;
    LODWORD(v65) = SuitAnimIndexFromPlayerState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1789, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v65, v66) )
      __debugbreak();
  }
  v19 = *(_QWORD *)(v17 + 8 * SuitAnimIndexFromPlayerState);
  v69 = SuitAnimIndexFromPlayerState;
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1792, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  if ( ((bodyPart - 1) & 0xFFFFFFFD) == 0 && (v20 = *(_QWORD *)(v19 + 48), (*(_DWORD *)(104 * v14 + v20 + 16) & 0x80000) != 0) && (v21 = *(_BYTE *)(104 * v14 + v20 + 98)) != 0 && turn )
  {
    v22 = (unsigned int)v21 - 1;
    if ( (unsigned int)v22 >= *(_DWORD *)(v19 + 20) )
    {
      LODWORD(v66) = *(_DWORD *)(v19 + 20);
      LODWORD(v65) = v21 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1809, ASSERT_TYPE_ASSERT, "(unsigned)( idleTurnIndex ) < (unsigned)( playerAnim->scriptIdleTurnCount )", "idleTurnIndex doesn't index playerAnim->scriptIdleTurnCount\n\t%i not in [0, %i)", v65, v66) )
        __debugbreak();
    }
    v23 = *(_QWORD *)(v19 + 88);
    if ( ps->turnDirection )
      v24 = *(_WORD *)(v23 + 4 * v22);
    else
      v24 = *(_WORD *)(v23 + 4 * v22 + 2);
    if ( (v24 & 0x1000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1814, ASSERT_TYPE_ASSERT, "(!(idleTurnAnimIndex & (1<<(13-1))))", (const char *)&queryFormat, "!(idleTurnAnimIndex & ANIM_TOGGLEBIT)") )
      __debugbreak();
    LODWORD(v14) = v24;
    if ( (unsigned int)v24 >= *(_DWORD *)(v19 + 8) )
    {
      LODWORD(v66) = *(_DWORD *)(v19 + 8);
      LODWORD(v65) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1817, ASSERT_TYPE_ASSERT, "(unsigned)( animNum ) < (unsigned)( playerAnim->animationCount )", "animNum doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v65, v66) )
        __debugbreak();
    }
    if ( (*(_DWORD *)(104i64 * v24 + *(_QWORD *)(v19 + 48) + 16) & 0x100i64) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1818, ASSERT_TYPE_ASSERT, "(!(playerAnim->animations[animNum].flags & ANIMFL_LOOPED))", (const char *)&queryFormat, "!(playerAnim->animations[animNum].flags & ANIMFL_LOOPED)") )
      __debugbreak();
    v25 = isContinue;
    if ( !isContinue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1820, ASSERT_TYPE_ASSERT, "(isContinue)", (const char *)&queryFormat, "isContinue") )
      __debugbreak();
    LODWORD(SuitAnimIndexFromPlayerState) = v72;
    if ( turn == 2 )
      v25 = 0;
  }
  else
  {
    v25 = isContinue;
  }
  forceLegsOnlya = v25;
  if ( !forceDuration )
    forceDuration = *(unsigned __int16 *)(104i64 * (int)v14 + *(_QWORD *)(v19 + 48) + 84) + 50;
  v26 = force;
  v27 = setTimer;
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
      LODWORD(v14) = 0;
      goto LABEL_122;
    }
    if ( v25 && (ps->legsAnim & 0xFFFFEFFF) == (_DWORD)v14 )
    {
      if ( setTimer && (*(_DWORD *)(104i64 * (int)v14 + *(_QWORD *)(v19 + 48) + 16) & 0x100i64) != 0 )
      {
        ps->legsTimer = 10 * forceDuration;
      }
      else
      {
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_xanim_debug, "xanim_debug") >= 1 && (ps->legsAnim & 0xFFFFEFFF) != (_DWORD)v14 )
        {
          Com_Printf(19, "anim failed because");
          if ( (ps->legsAnim & 0xFFFFEFFF) == (_DWORD)v14 )
          {
            Com_Printf(19, ", isContinue is true");
            v28 = SL_ConvertToString((scr_string_t)*(_DWORD *)(104i64 * (int)v14 + *(_QWORD *)(v19 + 48) + 4));
            v29 = SL_ConvertToString((scr_string_t)*(_DWORD *)(104 * (ps->legsAnim & 0xFFFFFFFFFFFFEFFFui64) + *(_QWORD *)(v19 + 48) + 4));
            Com_Printf(19, ", legsAnim is %s, asking to play %s", v29, v28);
          }
          if ( setTimer )
          {
            if ( (*(_DWORD *)(104i64 * (int)v14 + *(_QWORD *)(v19 + 48) + 16) & 0x100i64) == 0 )
              Com_Printf(19, ", on a non-looped anim");
          }
          else
          {
            Com_Printf(19, ", setTimer is false");
          }
          Com_Printf(19, "\n");
        }
        v27 = setTimer;
      }
      v26 = force;
      goto LABEL_57;
    }
    legsAnim = ps->legsAnim;
    v70 = 1;
    v31 = ~(_WORD)legsAnim & 0x1000;
    v32 = legsAnim & 0xFFFFEFFF;
    ps->legsAnim = v14 | v31;
    if ( v32 >= *(_DWORD *)(v19 + 8) )
    {
      LODWORD(v66) = *(_DWORD *)(v19 + 8);
      LODWORD(v65) = v32;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1849, ASSERT_TYPE_ASSERT, "(unsigned)( previousLegsAnim ) < (unsigned)( playerAnim->animationCount )", "previousLegsAnim doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v65, v66) )
        __debugbreak();
    }
    if ( (ps->legsAnim & 0xFFFFEFFF) >= *(_DWORD *)(v19 + 8) )
    {
      LODWORD(v66) = *(_DWORD *)(v19 + 8);
      LODWORD(v65) = ps->legsAnim & 0xFFFFEFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1850, ASSERT_TYPE_ASSERT, "(unsigned)( (ps->legsAnim & ~(1<<(13-1))) ) < (unsigned)( playerAnim->animationCount )", "(ps->legsAnim & ~ANIM_TOGGLEBIT) doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v65, v66) )
        __debugbreak();
    }
    if ( *(_WORD *)(*(_QWORD *)(v19 + 136) + 2 * (ps->legsAnim & 0xFFFFFFFFFFFFEFFFui64)) == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1851, ASSERT_TYPE_ASSERT, "(playerAnim->legsAnimPackMap[ps->legsAnim & ~(1<<(13-1))] != 0xffff)", (const char *)&queryFormat, "playerAnim->legsAnimPackMap[ps->legsAnim & ~ANIM_TOGGLEBIT] != INVALID_ANIM_MAP_ENTRY") )
      __debugbreak();
    if ( setTimer )
    {
      v33 = 104i64 * (int)v32;
      v34 = *(_QWORD *)(v19 + 48);
      v35 = *(_BYTE *)(v33 + v34 + 100);
      if ( !v35 || v35 != *(_BYTE *)(104i64 * (int)v14 + v34 + 100) )
      {
        v54 = 10 * forceDuration;
        goto LABEL_104;
      }
      __asm { vmovaps [rsp+0B8h+var_58], xmm6 }
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3626, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
        __debugbreak();
      if ( (unsigned int)SuitAnimIndexFromPlayerState >= 4 )
      {
        LODWORD(v66) = 4;
        LODWORD(v65) = SuitAnimIndexFromPlayerState;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3627, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v65, v66) )
          __debugbreak();
      }
      v36 = BgStatic::GetActiveStatics();
      v37 = (__int64)v36->GetAnimStatics(v36);
      if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3631, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      v38 = *(_QWORD *)(v37 + 8 * v69);
      if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3634, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
        __debugbreak();
      if ( v32 >= *(_DWORD *)(v38 + 8) )
      {
        LODWORD(v66) = *(_DWORD *)(v38 + 8);
        LODWORD(v65) = v32;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3635, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( playerAnim->animationCount )", "animIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v65, v66) )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, eax
      }
      if ( !*(_WORD *)(v33 + *(_QWORD *)(v19 + 48) + 84) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1865, ASSERT_TYPE_ASSERT, "(playerAnim->animations[previousLegsAnim].duration > 0)", (const char *)&queryFormat, "playerAnim->animations[previousLegsAnim].duration > 0") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, cs:__real@3dcccccc
        vmovss  xmm2, cs:__real@3f800000
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vdivss  xmm1, xmm0, xmm1
      }
      v67 = 104i64 * (int)v14;
      __asm
      {
        vmulss  xmm3, xmm1, xmm6
        vsubss  xmm6, xmm2, xmm3
      }
      if ( forceDuration != *(unsigned __int16 *)(*(_QWORD *)(v19 + 48) + v67 + 84) + 50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1869, ASSERT_TYPE_ASSERT, "( duration ) == ( playerAnim->animations[animNum].duration + 50 )", "%s == %s\n\t%i, %i", "duration", "playerAnim->animations[animNum].duration + ANIM_TIMER_DURATION_PADDING", forceDuration, *(unsigned __int16 *)(*(_QWORD *)(v19 + 48) + v67 + 84) + 50) )
        __debugbreak();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm2, xmm1, cs:__real@3f000000
        vmovaps xmm6, [rsp+0B8h+var_58]
        vcvttss2si eax, xmm2
      }
      ps->legsTimer = _EAX + 500;
      if ( _EAX + 500 >= 0 )
        goto LABEL_105;
    }
    v54 = 0;
LABEL_104:
    ps->legsTimer = v54;
LABEL_105:
    v55 = DVARINT_xanim_debug;
    if ( !DVARINT_xanim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v55);
    if ( v55->current.integer >= 1 )
    {
      if ( bodyPart == ANIM_BP_BOTH )
      {
        v56 = "body";
      }
      else
      {
        v56 = "torso";
        if ( bodyPart == ANIM_BP_LEGS )
          v56 = "legs";
      }
      v57 = SL_ConvertToString((scr_string_t)*(_DWORD *)(104i64 * (int)v14 + *(_QWORD *)(v19 + 48) + 4));
      Com_Printf(19, "Playing (client %i) %s on %s\n", (unsigned int)ps->clientNum, v57, v56);
    }
    v58 = DVARINT_pmoveanim_debug;
    if ( !DVARINT_pmoveanim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmoveanim_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v58);
    if ( v58->current.integer >= 1 && Sys_IsServerThread() )
    {
      v59 = SL_ConvertToString((scr_string_t)*(_DWORD *)(104i64 * (int)v14 + *(_QWORD *)(v19 + 48) + 4));
      LODWORD(v65) = ps->legsTimer;
      LODWORD(fmt) = ps->clientNum;
      Com_Printf(19, "%s:%i:e%i: %7i     legsAnim: %s\n", "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1892i64, fmt, v65, v59);
    }
    v27 = setTimer;
    v26 = force;
    goto LABEL_57;
  }
LABEL_122:
  if ( ps->torsoTimer < 500 || v26 )
  {
    if ( forceLegsOnlya && (ps->torsoAnim & 0xFFFFEFFF) == (_DWORD)v14 )
    {
      if ( v27 && (*(_DWORD *)(104i64 * (int)v14 + *(_QWORD *)(v19 + 48) + 16) & 0x100i64) != 0 )
        ps->torsoTimer = 10 * forceDuration;
    }
    else
    {
      v60 = v14 | ~ps->torsoAnim & 0x1000;
      ps->torsoAnim = v60;
      if ( (v60 & 0xFFFFEFFF) >= *(_DWORD *)(v19 + 8) )
      {
        LODWORD(v66) = *(_DWORD *)(v19 + 8);
        LODWORD(v65) = v60 & 0xFFFFEFFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1947, ASSERT_TYPE_ASSERT, "(unsigned)( (ps->torsoAnim & ~(1<<(13-1))) ) < (unsigned)( playerAnim->animationCount )", "(ps->torsoAnim & ~ANIM_TOGGLEBIT) doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v65, v66) )
          __debugbreak();
      }
      if ( *(_WORD *)(*(_QWORD *)(v19 + 120) + 2 * (ps->torsoAnim & 0xFFFFFFFFFFFFEFFFui64)) == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1948, ASSERT_TYPE_ASSERT, "(playerAnim->torsoAnimPackMap[ps->torsoAnim & ~(1<<(13-1))] != 0xffff)", (const char *)&queryFormat, "playerAnim->torsoAnimPackMap[ps->torsoAnim & ~ANIM_TOGGLEBIT] != INVALID_ANIM_MAP_ENTRY") )
        __debugbreak();
      if ( setTimer )
        ps->torsoTimer = 10 * forceDuration;
      v61 = DVARINT_xanim_debug;
      if ( !DVARINT_xanim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v61);
      if ( v61->current.integer >= 1 )
      {
        v62 = SL_ConvertToString((scr_string_t)*(_DWORD *)(104i64 * (int)v14 + *(_QWORD *)(v19 + 48) + 4));
        Com_Printf(19, "Playing (client %i) %s on torso\n", (unsigned int)ps->clientNum, v62);
      }
    }
  }
LABEL_142:
  if ( ps->legsTimer >= 0x80000u )
  {
    LODWORD(v66) = 0x80000;
    LODWORD(v65) = ps->legsTimer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1972, ASSERT_TYPE_ASSERT, "(unsigned)( ps->legsTimer ) < (unsigned)( (1 << 19) )", "ps->legsTimer doesn't index (1 << ANIM_TIMER_BITS)\n\t%i not in [0, %i)", v65, v66) )
      __debugbreak();
  }
  if ( ps->torsoTimer >= 0x80000u )
  {
    LODWORD(v66) = 0x80000;
    LODWORD(v65) = ps->torsoTimer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 1973, ASSERT_TYPE_ASSERT, "(unsigned)( ps->torsoTimer ) < (unsigned)( (1 << 19) )", "ps->torsoTimer doesn't index (1 << ANIM_TIMER_BITS)\n\t%i not in [0, %i)", v65, v66) )
      __debugbreak();
  }
  if ( !v70 )
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
  const dvar_t *v4; 
  DObj *v8; 
  DObj *v9; 
  char v12; 
  char v13; 
  PlayerASM_AnimSlot v20; 

  v4 = DCONST_DVARINT_playerasm_debug_override_entnum;
  if ( !DCONST_DVARINT_playerasm_debug_override_entnum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_entnum") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( entnum == v4->current.integer )
  {
    v8 = bgameStatic->IsClient((BgStatic *)bgameStatic) ? Com_GetClientDObj(entnum, (LocalClientNum_t)LODWORD(bgameStatic[1].__vftable)) : (DObj *)((__int64 (__fastcall *)(const BgStatic *const, _QWORD))bgameStatic->__vftable[1].HasCharacterInfo)(bgameStatic, (unsigned int)entnum);
    v9 = v8;
    if ( v8 )
    {
      _RBX = DVARFLT_playerasm_debug_override_main_state_time;
      __asm { vmovaps [rsp+68h+var_28], xmm6 }
      if ( !DVARFLT_playerasm_debug_override_main_state_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_main_state_time") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcomiss xmm6, dword ptr [rbx+28h]
      }
      if ( v12 | v13 )
      {
        _RBX = DVARFLT_playerasm_debug_override_main_state_time;
        if ( !DVARFLT_playerasm_debug_override_main_state_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_main_state_time") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm3, dword ptr [rbx+28h]; time }
        BG_PlayerASM_DebugOverrideAnimTimersSlot(v9, ci, MOVEMENT, *(const float *)&_XMM3);
      }
      _RBX = DVARFLT_playerasm_debug_override_sub_state_time;
      if ( !DVARFLT_playerasm_debug_override_sub_state_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_sub_state_time") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vcomiss xmm6, dword ptr [rbx+28h]
        vmovaps xmm6, [rsp+68h+var_28]
      }
      if ( v12 | v13 )
      {
        _RBX = DVARFLT_playerasm_debug_override_sub_state_time;
        if ( !DVARFLT_playerasm_debug_override_sub_state_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_sub_state_time") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm3, dword ptr [rbx+28h]; time }
        LOBYTE(v20) = 1;
        BG_PlayerASM_DebugOverrideAnimTimersSlot(v9, ci, v20, *(const float *)&_XMM3);
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
  PlayerASM_AnimSlot v19; 
  unsigned int v20; 
  int IsTransitionalAlias; 
  __int64 v23; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  __int64 v25; 
  __int64 v26; 
  int v27; 
  int v28; 
  int v29; 
  bool v30; 
  unsigned int torsoAnim; 
  unsigned int *movetype; 
  const PlayerAnimEntry *AnimationForIndex; 
  const PlayerAnimEntry *v34; 
  unsigned __int64 v35; 
  bool IsRemoteTurretActiveFlags; 
  bool v53; 
  unsigned int XAnimIndex; 
  unsigned int ladderMantleAnimIndex; 
  DObj *DObj; 
  char v62; 
  int *p_yawing; 
  PlayerASM_AnimSlot v95; 
  const char *v96; 
  const char *v97; 
  int v98; 
  int v100; 
  const char *v105; 
  const dvar_t *v111; 
  const dvar_t *v118; 
  XAnimTree *pXAnimTree; 
  __int64 v125; 
  __int64 v126; 
  __int64 v127; 
  __int64 v128; 
  __int64 v137; 
  __int64 v138; 
  __int64 v139; 
  __int64 v140; 
  __int64 v149; 
  __int64 v150; 
  __int64 v151; 
  __int64 v152; 
  __int64 v161; 
  __int64 v162; 
  __int64 v163; 
  __int64 v164; 
  __int64 v173; 
  __int64 v174; 
  __int64 v175; 
  __int64 v176; 
  float fmt; 
  float fmta; 
  float fmtb; 
  unsigned int *edgeLadderQueryHint; 
  unsigned int *edgeWidthQueryHint; 
  bool v198; 
  char v199; 
  bool v200; 
  char v201; 
  bool IsPlayingVehicleOccupancyAnims; 
  bool v203; 
  bool IsStrafeAnim; 
  char v205; 
  int v206; 
  unsigned int v207; 
  bool v210; 
  bool v211; 
  int v212; 
  BOOL v213; 
  vec3_t trBase; 
  vec3_t bgStatic; 
  BgHandler *handlera; 
  __int64 v218; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v221; 
  float v223; 
  vec3_t outSlopeNormal; 
  LadderInfo outLadderInfo; 
  char v226; 
  void *retaddr; 

  _RAX = &retaddr;
  v218 = -2i64;
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
  _RBX = ci;
  handlera = (BgHandler *)handler;
  BG_CheckThread();
  ActiveStatics = BgStatic::GetActiveStatics();
  *(_QWORD *)bgStatic.v = ActiveStatics;
  *(_QWORD *)end.v = BG_GetSuitDef(_RBX->suitIndex);
  if ( !*(_QWORD *)end.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7835, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() )
  {
    Animset = BG_PlayerASM_GetAnimset(_RBX);
    Anim = BG_PlayerASM_GetAnim(_RBX, MOVEMENT);
    LOBYTE(v19) = 1;
    v20 = BG_PlayerASM_GetAnim(_RBX, v19);
    IsTransitionalAlias = BG_PlayerASM_IsTransitionalAlias(Anim, Animset);
    _ER13 = 0;
    v213 = BG_PlayerASM_IsNoPitchAimingAlias(Anim, Animset) || BG_PlayerASM_IsNoPitchAimingAlias(v20, Animset) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 4u) && BG_PlayerASM_IsReloadAlias(v20, Animset);
    v200 = BG_PlayerASM_IsSlideAlias(Anim, Animset) != 0;
    BG_PlayerASM_IsAirAlias(Anim, Animset);
    IsStrafeAnim = BG_PlayerASM_IsStrafeAlias(Anim, Animset) != 0;
    if ( BG_PlayerASM_IsExecutionAttackerAlias(Anim, Animset) || (v199 = 0, BG_PlayerASM_IsExecutionVictimAlias(Anim, Animset)) )
      v199 = 1;
    if ( BG_PlayerASM_IsLadderAlias(Anim, Animset) || (v198 = 0, BG_PlayerASM_IsLadderAimAlias(Anim, Animset)) )
      v198 = 1;
    LOBYTE(trBase.v[0]) = BG_PlayerASM_IsNoAimingIfProneAlias(v20, Animset) != 0;
    goto LABEL_56;
  }
  v23 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7857, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(_RBX);
  v25 = SuitAnimIndexFromCharacter;
  if ( (unsigned int)SuitAnimIndexFromCharacter >= NUM_ANIM_SUIT_STATE )
  {
    LODWORD(edgeLadderQueryHint) = SuitAnimIndexFromCharacter;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7860, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", edgeLadderQueryHint, 4) )
      __debugbreak();
  }
  v26 = *(_QWORD *)(v23 + 8 * v25);
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7863, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  Anim = _RBX->playerAnim.legsAnim & 0xFFFFEFFF;
  v20 = _RBX->playerAnim.torsoAnim & 0xFFFFEFFF;
  if ( Anim >= *(_DWORD *)(v26 + 8) )
  {
    LODWORD(edgeWidthQueryHint) = *(_DWORD *)(v26 + 8);
    LODWORD(edgeLadderQueryHint) = _RBX->playerAnim.legsAnim & 0xFFFFEFFF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7868, ASSERT_TYPE_ASSERT, "(unsigned)( legsAnimIndex ) < (unsigned)( playerAnim->animationCount )", "legsAnimIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", edgeLadderQueryHint, edgeWidthQueryHint) )
      __debugbreak();
  }
  v27 = *(_DWORD *)(104i64 * Anim + *(_QWORD *)(v26 + 48) + 16);
  v206 = v27 & 0x400000;
  v28 = v27 & 0x10000;
  v29 = v28;
  if ( v20 )
  {
    if ( v20 >= *(_DWORD *)(v26 + 8) )
    {
      LODWORD(edgeWidthQueryHint) = *(_DWORD *)(v26 + 8);
      LODWORD(edgeLadderQueryHint) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7874, ASSERT_TYPE_ASSERT, "(unsigned)( torsoAnimIndex ) < (unsigned)( playerAnim->animationCount )", "torsoAnimIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", edgeLadderQueryHint, edgeWidthQueryHint) )
        __debugbreak();
    }
    if ( v29 )
      goto LABEL_45;
    v30 = (*(_DWORD *)(104i64 * v20 + *(_QWORD *)(v26 + 48) + 16) & 0x10000) == 0i64;
  }
  else
  {
    v30 = v28 == 0;
  }
  if ( v30 )
  {
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 4u) )
    {
      v213 = 0;
      goto LABEL_46;
    }
    torsoAnim = _RBX->playerAnim.torsoAnim;
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4775, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
      __debugbreak();
    if ( (BG_AnimationMP_GetAnimationForIndex(torsoAnim & 0xFFFFEFFF, (SuitAnimType)v25)->flags & 0x10) == 0 )
    {
      v213 = 0;
      goto LABEL_46;
    }
  }
LABEL_45:
  v213 = 1;
LABEL_46:
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  movetype = BG_AnimationMP_GetAnimationForIndex(Anim & 0xFFFFEFFF, (SuitAnimType)v25)->movetype;
  if ( Com_BitCheckAssert(movetype, 24, 32) || (v200 = 0, Com_BitCheckAssert(movetype, 25, 32)) )
    v200 = 1;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5121, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  AnimationForIndex = BG_AnimationMP_GetAnimationForIndex(Anim & 0xFFFFEFFF, (SuitAnimType)v25);
  Com_BitCheckAssert(AnimationForIndex->movetype, 34, 32);
  IsStrafeAnim = BG_IsStrafeAnim(Anim, (SuitAnimType)v25);
  v199 = 0;
  v198 = BG_IsLadderAnim(Anim, (SuitAnimType)v25) != 0;
  v34 = BG_AnimationMP_GetAnimationForIndex(v20 & 0xFFFFEFFF, (SuitAnimType)v25);
  v35 = (unsigned __int64)LODWORD(v34->flags) >> 15;
  LOBYTE(v35) = (v34->flags & 0x8000) != 0;
  *(_QWORD *)trBase.v = v35;
  IsTransitionalAlias = v206;
  _ER13 = 0;
LABEL_56:
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7886, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm9, dword ptr [rbx+998h]
    vmovss  xmm6, dword ptr [rbx+8BCh]
    vmovss  dword ptr [rsp+210h+var_1B8+4], xmm6
    vmovss  xmm14, dword ptr [rbx+9C0h]
    vmovss  dword ptr [rbp+110h+var_150], xmm14
    vmovss  xmm1, dword ptr [rbx+9C8h]
    vmovss  [rbp+110h+var_148], xmm1
    vmovss  xmm0, dword ptr [rbx+9C4h]; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovss  dword ptr [rbp+110h+var_150+4], xmm0
    vmovss  dword ptr [rbp+110h+var_160], xmm9
    vmovss  dword ptr [rbp+110h+var_160+4], xmm9
    vmovss  [rbp+110h+var_158], xmm9
    vmovss  dword ptr [rbp+110h+start], xmm9
    vmovss  dword ptr [rbp+110h+start+4], xmm9
    vmovss  dword ptr [rbp+110h+start+8], xmm9
  }
  if ( (int)BG_GetConditionBit(_RBX, 3) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7906, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED") )
    __debugbreak();
  if ( (int)BG_GetConditionBit(_RBX, 3) >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7907, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() )
  {
    if ( !IsTransitionalAlias )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+147Ch]
        vucomiss xmm0, xmm9
      }
    }
  }
  else if ( !IsTransitionalAlias && (_RBX->clientConditions[3][0] & 0x20000E) == 0 )
  {
    v212 = 0;
    goto LABEL_69;
  }
  v212 = 1;
LABEL_69:
  IsPlayingVehicleOccupancyAnims = BG_IsPlayingVehicleOccupancyAnims(_RBX);
  v207 = _RBX->clientConditions[44][0] - 1;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2102, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  IsRemoteTurretActiveFlags = BG_IsRemoteTurretActiveFlags(&es->lerp.eFlags);
  v210 = IsRemoteTurretActiveFlags;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2088, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( BG_IsTurretActiveFlags(&es->lerp.eFlags) && !IsRemoteTurretActiveFlags )
  {
    v205 = 1;
    goto LABEL_89;
  }
  v205 = 0;
  if ( IsPlayingVehicleOccupancyAnims || v207 <= 0xA || v198 || BG_IsMantleEntity(es) || !v212 || _RBX->clientConditions[5][0] )
    goto LABEL_89;
  if ( v213 )
  {
LABEL_90:
    _RBX->torso.pitching = 1;
    goto LABEL_91;
  }
  if ( v199 )
  {
LABEL_89:
    _RBX->torso.yawing = 1;
    goto LABEL_90;
  }
LABEL_91:
  _RBX->legs.yawing = 1;
  __asm
  {
    vmovaps xmm8, xmm6
    vmovss  dword ptr [rbp+110h+var_160+4], xmm6
  }
  v201 = 0;
  BG_SlopeWorldmodel_Unpack(&es->lerp.u.player.slopePacked, &outSlopeNormal);
  _R12 = DVARFLT_g_anim_mp_prone_max_slope;
  if ( !DVARFLT_g_anim_mp_prone_max_slope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_anim_mp_prone_max_slope") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R12);
  __asm
  {
    vmovss  xmm6, dword ptr [r12+28h]
    vmovss  xmm13, cs:__real@3f800000
    vmovaps xmm2, xmm13; max
    vmovss  xmm1, cs:__real@bf800000; min
    vmovss  xmm0, dword ptr [rbp+110h+outSlopeNormal+8]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm { vmulss  xmm7, xmm0, cs:__real@42652ee0 }
  v203 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0xAu);
  v211 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 3u);
  if ( Com_GameMode_SupportsFeature(WEAPON_STUNNED_START|0x80) && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 4u) )
    __asm { vcomiss xmm6, xmm7 }
  v53 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 4u);
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2004, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  __asm
  {
    vmovss  xmm15, cs:__real@43340000
    vmovss  xmm11, cs:__real@42b40000
  }
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0x11u) )
  {
    __asm { vmovaps xmm6, xmm11 }
LABEL_133:
    __asm
    {
      vmovss  dword ptr [rbp+110h+var_160+4], xmm10
      vmovaps xmm8, xmm10
    }
    goto LABEL_134;
  }
  if ( v210 )
  {
    __asm { vmovaps xmm6, xmm11 }
LABEL_134:
    __asm { vmovaps xmm7, xmm10 }
    goto LABEL_135;
  }
  if ( IsPlayingVehicleOccupancyAnims || v207 <= 0xA )
    goto LABEL_132;
  if ( v198 )
  {
    if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_ladderEnableEnhanced, "ladderEnableEnhanced") || !PlayerASM_IsEnabled() )
    {
      __asm
      {
        vmovaps xmm7, xmm8
        vmovaps xmm6, xmm11
      }
LABEL_135:
      __asm { vmovss  dword ptr [rbp+110h+start+4], xmm7 }
      goto LABEL_136;
    }
    Trajectory_GetTrBase(&es->lerp.pos, &trBase);
    BG_GetLadderInfo(&trBase, handlera, &outLadderInfo, NULL, 0, &_RBX->edgeQueryLadderHintNodeCharInfo, &_RBX->edgeQueryLadderWidthHintNodeCharInfo);
    *(double *)&_XMM0 = vectoyaw((const vec2_t *)&outLadderInfo);
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = vectoyaw((const vec2_t *)&outLadderInfo);
    __asm { vaddss  xmm6, xmm0, xmm15 }
    XAnimIndex = BG_PlayerASM_GetXAnimIndex(_RBX->legs.animsetIndex, _RBX->legs.animationNumber);
    ladderMantleAnimIndex = _RBX->ladderMantleAnimIndex;
    if ( !ladderMantleAnimIndex || !XAnimIndex )
    {
      __asm
      {
        vmovaps xmm8, xmm6
        vmovss  dword ptr [rbp+110h+var_160+4], xmm6
        vmovss  xmm7, dword ptr [rbx+9C4h]
        vmovss  dword ptr [rbp+110h+start+4], xmm7
        vmovaps xmm6, xmm11
      }
      goto LABEL_117;
    }
    if ( XAnimIndex == ladderMantleAnimIndex )
    {
      __asm
      {
        vmovaps xmm7, xmm8
        vmovss  dword ptr [rbp+110h+start+4], xmm7
        vmovss  dword ptr [rbp+110h+var_160+4], xmm8
      }
    }
    else
    {
      DObj = BG_GetDObj(*(const BgStatic **)bgStatic.v, _RBX->entityNum);
      *(double *)&_XMM0 = XAnimGetWeight(DObj->tree, 0, XANIM_SUBTREE_DEFAULT, XAnimIndex);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_ladderCounterYawAngle, "ladderCounterYawAngle");
      __asm
      {
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm8, xmm1, xmm8
        vmovaps xmm7, xmm8
        vmovss  dword ptr [rbp+110h+start+4], xmm7
        vmovss  dword ptr [rbp+110h+var_160+4], xmm8
        vcomiss xmm6, xmm13
      }
      if ( !v62 )
      {
        _RBX->ladderMantleAnimIndex = 0;
        __asm { vxorps  xmm6, xmm6, xmm6 }
LABEL_117:
        memset(&trBase, 0, sizeof(trBase));
        goto LABEL_136;
      }
    }
    __asm { vxorps  xmm6, xmm6, xmm6 }
    goto LABEL_117;
  }
  if ( !BG_IsMantleEntity(es) )
  {
    if ( !_RBX->useShadowAnims || v53 )
    {
      if ( v200 )
      {
        __asm { vmovd   xmm1, r13d }
        _EAX = v203;
        __asm
        {
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vmovss  xmm1, cs:__real@41200000
          vblendvps xmm0, xmm9, xmm1, xmm2
          vmovaps xmm6, xmm0
          vmovss  [rsp+210h+var_1C4], xmm0
        }
        goto LABEL_133;
      }
      if ( !v53 || !LOBYTE(trBase.v[0]) )
      {
        if ( !v199 )
        {
          __asm
          {
            vmovaps xmm7, xmm10
            vmovss  dword ptr [rbp+110h+start+4], xmm7
          }
          if ( v203 )
          {
            __asm { vmovss  xmm6, cs:__real@42340000 }
            v201 = 1;
          }
          else
          {
            __asm { vmovaps xmm6, xmm11 }
          }
          goto LABEL_136;
        }
        v201 = 1;
      }
    }
LABEL_132:
    __asm { vxorps  xmm6, xmm6, xmm6 }
    goto LABEL_133;
  }
  if ( _RBX->clientConditions[19][0] == 2 && PlayerASM_IsEnabled() )
  {
    Trajectory_GetTrBase(&es->lerp.pos, &bgStatic);
    BG_GetLadderInfo(&bgStatic, handlera, &outLadderInfo, NULL, 0, &_RBX->edgeQueryLadderHintNodeCharInfo, &_RBX->edgeQueryLadderWidthHintNodeCharInfo);
    *(double *)&_XMM0 = vectoyaw((const vec2_t *)&outLadderInfo);
    __asm
    {
      vmovaps xmm8, xmm0
      vmovaps xmm7, xmm0
      vmovss  dword ptr [rbp+110h+start+4], xmm0
      vmovss  dword ptr [rbp+110h+var_160+4], xmm0
    }
    _RBX->ladderMantleAnimIndex = BG_PlayerASM_GetXAnimIndex(_RBX->legs.animsetIndex, _RBX->legs.animationNumber);
    memset(&bgStatic, 0, sizeof(bgStatic));
    __asm { vmovaps xmm6, xmm11 }
  }
  else
  {
    __asm
    {
      vmovaps xmm7, xmm10
      vmovss  dword ptr [rbp+110h+start+4], xmm7
      vmovaps xmm8, xmm10
      vmovss  dword ptr [rbp+110h+var_160+4], xmm10
      vmovss  dword ptr [rbp+110h+start], xmm11
      vmovaps xmm6, xmm11
    }
  }
LABEL_136:
  _RDI = DVARFLT_bg_torsoSwingSpeed;
  if ( !DVARFLT_bg_torsoSwingSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_torsoSwingSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm3, dword ptr [rdi+28h] }
  if ( *(_BYTE *)(*(_QWORD *)end.v + 436i64) )
  {
    _RDI = DVARFLT_bg_torsoSwingSpeedCameraIndependentMovement;
    if ( !DVARFLT_bg_torsoSwingSpeedCameraIndependentMovement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_torsoSwingSpeedCameraIndependentMovement") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm3, dword ptr [rdi+28h]; speed }
  }
  _R12 = &_RBX->torso;
  __asm
  {
    vmovss  xmm12, cs:__real@3f000000
    vmovss  dword ptr [rsp+210h+fmt], xmm12
    vmovaps xmm2, xmm6; clampTolerance
    vxorps  xmm1, xmm1, xmm1; swingTolerance
    vmovaps xmm0, xmm7; destination
  }
  BG_SwingAngles(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, &_RBX->torso.yawAngle, &_RBX->torso.yawing);
  __asm { vmovss  xmm6, cs:__real@43160000 }
  if ( !Anim && !v20 || !_RBX->legs.animationNumber && !_RBX->torso.animationNumber )
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
    p_yawing = &_RBX->legs.yawing;
    _RBX->legs.yawing = 0;
    goto LABEL_162;
  }
  if ( v199 || v198 )
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
    goto LABEL_161;
  }
  if ( !_RBX->useShadowAnims )
  {
LABEL_161:
    p_yawing = &_RBX->legs.yawing;
    goto LABEL_162;
  }
  if ( v200 )
  {
    __asm { vmovss  xmm6, cs:__real@41f00000 }
    goto LABEL_161;
  }
  __asm
  {
    vsubss  xmm0, xmm8, dword ptr [rbx+800h]
    vmulss  xmm4, xmm0, cs:__real@3b360b61
    vaddss  xmm2, xmm4, xmm12
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vsubss  xmm0, xmm4, xmm1
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vcmpltss xmm3, xmm9, xmm1
    vmovss  xmm2, cs:__real@42960000
    vmovss  xmm0, cs:__real@42f00000
    vblendvps xmm1, xmm0, xmm2, xmm3
    vmovss  [rsp+210h+var_1C4], xmm1
  }
  p_yawing = &_RBX->legs.yawing;
  if ( v211 )
  {
    __asm { vmovd   xmm1, r13d }
    _EAX = IsStrafeAnim;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm2, [rsp+210h+var_1C4]
      vmovss  xmm1, cs:__real@41700000
      vblendvps xmm6, xmm1, xmm2, xmm3
    }
  }
  else
  {
    __asm { vmovss  xmm6, [rsp+210h+var_1C4] }
  }
LABEL_162:
  if ( PlayerASM_IsEnabled() )
  {
    if ( _RBX->playerAnim.legsAnim != BG_PlayerASM_GetAnim(es, MOVEMENT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8211, ASSERT_TYPE_ASSERT, "(ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::PRIMARY )] == BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::PRIMARY ))", (const char *)&queryFormat, "ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::PRIMARY )] == BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::PRIMARY )") )
      __debugbreak();
    LOBYTE(v95) = 1;
    if ( _RBX->playerAnim.torsoAnim != BG_PlayerASM_GetAnim(es, v95) )
    {
      v96 = "ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::SECONDARY )] == BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::SECONDARY )";
      v97 = "(ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::SECONDARY )] == BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::SECONDARY ))";
      v98 = 8212;
      goto LABEL_173;
    }
  }
  else
  {
    if ( _RBX->playerASMAnim.animSet != BG_AnimationMP_GetSuitAnimIndex(es) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8216, ASSERT_TYPE_ASSERT, "(ci->playerAnim.suitAnimIndex == BG_AnimationMP_GetSuitAnimIndex( es ))", (const char *)&queryFormat, "ci->playerAnim.suitAnimIndex == BG_AnimationMP_GetSuitAnimIndex( es )") )
      __debugbreak();
    if ( _RBX->playerAnim.legsAnim != BG_AnimationMP_GetLegsAnimation(es) )
    {
      v96 = "ci->playerAnim.legsAnim == static_cast<uint>(BG_AnimationMP_GetLegsAnimation( es ))";
      v97 = "(ci->playerAnim.legsAnim == static_cast<uint>(BG_AnimationMP_GetLegsAnimation( es )))";
      v98 = 8217;
LABEL_173:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", v98, ASSERT_TYPE_ASSERT, v97, (const char *)&queryFormat, v96) )
        __debugbreak();
    }
  }
  __asm { vmovaps xmm7, xmm12 }
  v100 = v212;
  if ( !v212 )
  {
    _RDI = DCONST_DVARFLT_bg_legsMinSwingSpeedScaleWhenMoving;
    if ( !DCONST_DVARFLT_bg_legsMinSwingSpeedScaleWhenMoving && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_legsMinSwingSpeedScaleWhenMoving") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm7, dword ptr [rdi+28h] }
    v100 = 0;
  }
  if ( !v201 )
  {
    if ( PlayerASM_IsEnabled() )
    {
      if ( v100 )
      {
        _RDI = DCONST_DVARFLT_playerasm_idleSwingSpeed;
        if ( !DCONST_DVARFLT_playerasm_idleSwingSpeed )
        {
          v105 = "playerasm_idleSwingSpeed";
          goto LABEL_193;
        }
LABEL_195:
        Dvar_CheckFrontendServerThread(_RDI);
        __asm { vmovss  xmm3, dword ptr [rdi+28h]; speed }
        goto LABEL_196;
      }
      _RDI = DCONST_DVARFLT_playerasm_movingSwingSpeed;
      if ( DCONST_DVARFLT_playerasm_movingSwingSpeed )
        goto LABEL_195;
      v105 = "playerasm_movingSwingSpeed";
    }
    else
    {
      _RDI = DVARFLT_bg_swingSpeed;
      if ( DVARFLT_bg_swingSpeed )
        goto LABEL_195;
      v105 = "bg_swingSpeed";
    }
LABEL_193:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v105) )
      __debugbreak();
    goto LABEL_195;
  }
  _RSI = DVARFLT_bg_fastSwingSpeed;
  if ( !DVARFLT_bg_fastSwingSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_fastSwingSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm3, dword ptr [rsi+28h] }
LABEL_196:
  _RDI = &_RBX->legs;
  __asm
  {
    vmovss  dword ptr [rsp+210h+fmt], xmm7
    vmovaps xmm2, xmm6; clampTolerance
    vxorps  xmm1, xmm1, xmm1; swingTolerance
    vmovaps xmm0, xmm8; destination
  }
  BG_SwingAngles(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, &_RBX->legs.yawAngle, p_yawing);
  if ( v205 )
  {
    __asm
    {
      vmovss  dword ptr [r12], xmm10
      vmovss  dword ptr [rdi], xmm10
    }
  }
  if ( v213 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else if ( BG_IsDeadEntity(es) )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else if ( v205 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    v111 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
    if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v111);
    if ( v111->current.enabled || !v198 )
    {
      if ( BG_IsMantleEntity(es) )
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      else if ( v199 )
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      else
      {
        __asm
        {
          vmulss  xmm0, xmm14, cs:__real@40000000
          vcomiss xmm14, xmm15
        }
      }
    }
    else
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
  }
  __asm
  {
    vmovss  dword ptr [rsp+210h+fmt], xmm12
    vmovss  xmm3, cs:__real@3e19999a; speed
    vmovss  xmm2, cs:__real@430c0000; clampTolerance
    vxorps  xmm1, xmm1, xmm1; swingTolerance
  }
  BG_SwingAngles(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, &_RBX->torso.pitchAngle, &_RBX->torso.pitching);
  __asm
  {
    vmovsd  xmm0, [rbp+110h+var_160]
    vmovsd  qword ptr [rbp+110h+end], xmm0
  }
  end.v[2] = v221.v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rbp+110h+start]
    vmovsd  [rbp+110h+var_160], xmm0
  }
  v221.v[2] = start.v[2];
  __asm
  {
    vmovsd  xmm0, [rbp+110h+var_150]
    vmovsd  qword ptr [rbp+110h+start], xmm0
  }
  start.v[2] = v223;
  BG_GameInterface_PlayerAngles(_RBX, &start, &v221, &end);
  v118 = DVARINT_xanim_debug;
  if ( !DVARINT_xanim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v118);
  if ( v118->current.integer >= 2 )
  {
    pXAnimTree = _RBX->pXAnimTree;
    if ( pXAnimTree )
    {
      if ( pXAnimTree->owner[0] == 1 )
      {
        Trajectory_GetTrBase(&es->lerp.pos, &start);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+110h+start+8]
          vmovss  dword ptr [rbp+110h+end+8], xmm0
          vmovss  xmm6, cs:__real@3c8efa35
          vmulss  xmm1, xmm10, xmm6
          vxorps  xmm0, xmm0, xmm0
          vmovss  xmm0, xmm0, xmm1
        }
        *(double *)&_XMM0 = j___libm_sse2_sincosf_(v126, v125, v127, v128);
        __asm
        {
          vshufps xmm1, xmm0, xmm0, 1
          vmulss  xmm2, xmm1, cs:__real@41a00000
          vaddss  xmm2, xmm2, dword ptr [rbp+110h+start]
          vmovss  dword ptr [rbp+110h+end], xmm2
          vmulss  xmm1, xmm0, cs:__real@41a00000
          vaddss  xmm1, xmm1, dword ptr [rbp+110h+start+4]
          vmovss  dword ptr [rbp+110h+end+4], xmm1
        }
        CG_DebugLine(&start, &end, &colorRed, 1, 1);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+110h+start+8]
          vmovss  dword ptr [rbp+110h+end+8], xmm0
          vmovss  xmm1, dword ptr [rsp+210h+var_1B8+4]
          vmulss  xmm0, xmm1, xmm6
        }
        *(double *)&_XMM0 = j___libm_sse2_sincosf_(v138, v137, v139, v140);
        __asm
        {
          vshufps xmm1, xmm0, xmm0, 1
          vmulss  xmm1, xmm1, cs:__real@42200000
          vaddss  xmm2, xmm1, dword ptr [rbp+110h+start]
          vmovss  dword ptr [rbp+110h+end], xmm2
          vmulss  xmm0, xmm0, cs:__real@42200000
          vaddss  xmm1, xmm0, dword ptr [rbp+110h+start+4]
          vmovss  dword ptr [rbp+110h+end+4], xmm1
        }
        CG_DebugLine(&start, &end, &colorGreen, 1, 1);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+110h+start+8]
          vmovss  dword ptr [rbp+110h+end+8], xmm0
          vmovss  xmm1, dword ptr [rdi]
          vmulss  xmm0, xmm1, xmm6
        }
        *(double *)&_XMM0 = j___libm_sse2_sincosf_(v150, v149, v151, v152);
        __asm
        {
          vshufps xmm1, xmm0, xmm0, 1
          vmulss  xmm2, xmm1, cs:__real@42700000
          vaddss  xmm2, xmm2, dword ptr [rbp+110h+start]
          vmovss  dword ptr [rbp+110h+end], xmm2
          vmulss  xmm1, xmm0, cs:__real@42700000
          vaddss  xmm1, xmm1, dword ptr [rbp+110h+start+4]
          vmovss  dword ptr [rbp+110h+end+4], xmm1
        }
        CG_DebugLine(&start, &end, &colorBlue, 1, 1);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+110h+start+8]
          vmovss  dword ptr [rbp+110h+end+8], xmm0
          vmovss  xmm1, dword ptr [r12]
          vmulss  xmm0, xmm1, xmm6
        }
        *(double *)&_XMM0 = j___libm_sse2_sincosf_(v162, v161, v163, v164);
        __asm
        {
          vshufps xmm1, xmm0, xmm0, 1
          vmulss  xmm2, xmm1, cs:__real@42a00000
          vaddss  xmm2, xmm2, dword ptr [rbp+110h+start]
          vmovss  dword ptr [rbp+110h+end], xmm2
          vmulss  xmm1, xmm0, cs:__real@42a00000
          vaddss  xmm1, xmm1, dword ptr [rbp+110h+start+4]
          vmovss  dword ptr [rbp+110h+end+4], xmm1
        }
        CG_DebugLine(&start, &end, &colorBlack, 1, 1);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+110h+start+8]
          vmovss  dword ptr [rbp+110h+end+8], xmm0
          vmovss  xmm1, dword ptr [rbx+0A10h]
          vmulss  xmm0, xmm1, xmm6
        }
        *(double *)&_XMM0 = j___libm_sse2_sincosf_(v174, v173, v175, v176);
        __asm
        {
          vshufps xmm1, xmm0, xmm0, 1
          vmulss  xmm2, xmm1, cs:__real@42c80000
          vaddss  xmm2, xmm2, dword ptr [rbp+110h+start]
          vmovss  dword ptr [rbp+110h+end], xmm2
          vmulss  xmm1, xmm0, cs:__real@42c80000
          vaddss  xmm1, xmm1, dword ptr [rbp+110h+start+4]
          vmovss  dword ptr [rbp+110h+end+4], xmm1
        }
        CG_DebugLine(&start, &end, &colorLtOrange, 0, 1);
        memset(&start, 0, sizeof(start));
      }
    }
  }
  _R11 = &v226;
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
BG_PlayerAnimation
==============
*/
void BG_PlayerAnimation(const BgHandler *handler, const BgWeaponMap *weaponMap, const entityState_t *es, characterInfo_t *ci, const vec3_t *playerOrigin, const vec3_t *movingPlatformOrigin, const vec3_t *movingPlatformAngles)
{
  signed __int64 v7; 
  void *v10; 
  const BgHandler *v14; 
  const BgStatic *ActiveStatics; 
  __int64 v16; 
  unsigned int number; 
  DObj *ClientDObj; 
  const DObj *v19; 
  bool v22; 
  unsigned int Anim; 
  PlayerASM_AnimSlot v24; 
  unsigned int v25; 
  int v26; 
  const dvar_t *v27; 
  bool enabled; 
  int v30; 
  int lastFullAnimUpdateTime; 
  bool v32; 
  unsigned __int8 v34; 
  PlayerASM_AnimSlot v35; 
  PlayerASM_AnimSlot v36; 
  PlayerASM_AnimSlot v37; 
  int v38; 
  PlayerASM_AnimSlot v39; 
  unsigned int v40; 
  DObj *v41; 
  unsigned int v42; 
  DObj *v43; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  MountWorldmodelAbbreviatedProperties *properties; 
  MountWorldmodelDerivedProperties *outDerivedProperties; 
  bool previousSlotStateChanged; 
  XAnimTree *pAnimTree; 
  PlayerASM_AnimOverrides animOverride; 
  XModelNameMap modelNameMap; 

  v10 = alloca(v7);
  __asm { vmovaps [rsp+32D8h+var_58], xmm6 }
  v14 = handler;
  modelNameMap.initialized = 0;
  Sys_ProfBeginNamedEvent(0xFF44CCFF, "BG_PlayerAnimation");
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9142, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  v16 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9145, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  number = es->number;
  if ( ActiveStatics->IsClient((BgStatic *)ActiveStatics) )
    ClientDObj = Com_GetClientDObj(number, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable));
  else
    ClientDObj = (DObj *)((__int64 (__fastcall *)(const BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, number);
  v19 = ClientDObj;
  if ( ClientDObj )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbp+4C54h]
      vmulss  xmm3, xmm0, cs:__real@3a83126f; deltaTime
    }
    BG_UpdateVehicleAnimCharacterInfo(v14, ClientDObj, es, *(const float *)&_XMM3, ci);
  }
  BG_AnimPlayerConditions(v14, weaponMap, es, ci);
  BG_PlayerAngles(v14, es, ci);
  pAnimTree = ci->pXAnimTree;
  v22 = 0;
  previousSlotStateChanged = 0;
  if ( ci->leftHandGun && (ci->torso.animationNumber & 0xFFFFEFFF) == 0 )
  {
    ci->leftHandGun = 0;
    ci->dobjDirty = 1;
  }
  BG_ContextMount_CalcWorldmodelDerivedProperties(v14, *(_DWORD *)(v16 + 19528), playerOrigin, &ci->playerAngles, ci->entityNum, &ci->dobjHeldWeapon, ci->isUsingWeaponAltMode != 0, &ci->mount, &ci->mountAnimation);
  if ( PlayerASM_IsEnabled() )
  {
    Anim = BG_PlayerASM_GetAnim(ci, MOVEMENT);
    v22 = ci->pXAnimTree && Anim && ci->legs.animationNumber != Anim;
    LOBYTE(v24) = 1;
    v25 = BG_PlayerASM_GetAnim(ci, v24);
    if ( !ci->pXAnimTree || !v25 || (previousSlotStateChanged = 1, ci->torso.animationNumber == v25) )
      previousSlotStateChanged = 0;
  }
  BG_UpdateCustomNodeParameters(v14, ci, es, v22);
  v26 = *(_DWORD *)(v16 + 19528);
  if ( v19 && DObjHasClientFlag(v19) )
  {
    v27 = DCONST_DVARBOOL_playerasm_client_update_interval_enable;
    if ( !DCONST_DVARBOOL_playerasm_client_update_interval_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_client_update_interval_enable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    enabled = v27->current.enabled;
    *(double *)&_XMM0 = XAnimGetClientLodFloat(v19);
    __asm { vmovaps xmm6, xmm0 }
    v30 = v26 + 27 * es->number;
    lastFullAnimUpdateTime = ci->lastFullAnimUpdateTime;
    v32 = PlayerASM_IsEnabled() && BG_PlayerASM_IsForceUpdate(es, ci);
    if ( lastFullAnimUpdateTime )
    {
      if ( lastFullAnimUpdateTime < v30 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm6, xmm0
        }
        if ( lastFullAnimUpdateTime > (unsigned int)v30 && !v32 && enabled )
        {
          __asm { vcomiss xmm6, cs:__real@40400000 }
          if ( v30 - lastFullAnimUpdateTime < Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_playerasm_client_update_interval_lod3, "playerasm_client_update_interval_lod3") )
          {
            v34 = 1;
            v14 = handler;
            goto LABEL_43;
          }
        }
      }
    }
    ci->lastFullAnimUpdateTime = v30;
    v14 = handler;
  }
  v34 = 0;
LABEL_43:
  if ( PlayerASM_IsEnabled() )
  {
    BG_PlayerASM_CheckAnimsetIndex(es, ci, MOVEMENT);
    LOBYTE(v35) = 1;
    BG_PlayerASM_CheckAnimsetIndex(es, ci, v35);
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
    LOBYTE(v36) = 1;
    if ( ci->playerAnim.torsoAnim != BG_PlayerASM_GetAnim(es, v36) )
    {
      LOBYTE(v37) = 1;
      LODWORD(outDerivedProperties) = BG_PlayerASM_GetAnim(es, v37);
      LODWORD(properties) = ci->playerAnim.torsoAnim;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9194, ASSERT_TYPE_ASSERT, "( ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::SECONDARY )] ) == ( BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::SECONDARY ) )", "%s == %s\n\t%i, %i", "ci->playerASMAnim.anims[static_cast<uint>( PlayerASM_AnimSlot::SECONDARY )]", "BG_PlayerASM_GetAnim( es, PlayerASM_AnimSlot::SECONDARY )", properties, outDerivedProperties) )
        __debugbreak();
    }
    BG_PlayerASM_ClearAnimOverrides(&animOverride);
    v38 = (16 * v34) | (BG_PlayerASM_IsForceUpdate(es, ci) ? 2 : 0) | (ci->playerASMLocomotion.instantBlend ? 4 : 0);
    BG_PlayerASM_ApplyAnim(es, ci, MOVEMENT, &ci->legs, v38, movingPlatformOrigin, movingPlatformAngles, &animOverride, &modelNameMap, previousSlotStateChanged);
    LOBYTE(v39) = 1;
    BG_PlayerASM_ApplyAnim(es, ci, v39, &ci->torso, v38, movingPlatformOrigin, movingPlatformAngles, &animOverride, &modelNameMap, v22);
    if ( BG_PlayerASM_FindValidAliasAddonOverrides(&animOverride, (scr_string_t)0, NULL) )
    {
      v40 = es->number;
      v41 = ActiveStatics->IsClient((BgStatic *)ActiveStatics) ? Com_GetClientDObj(v40, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable)) : (DObj *)((__int64 (__fastcall *)(const BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, v40);
      if ( v41 )
        BG_PlayerASM_ApplyAliasAddonOverrides(v41, ci, &animOverride, (scr_string_t)0, 0, &modelNameMap, v38);
    }
    v42 = es->number;
    if ( ActiveStatics->IsClient((BgStatic *)ActiveStatics) )
      v43 = Com_GetClientDObj(v42, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable));
    else
      v43 = (DObj *)((__int64 (__fastcall *)(const BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, v42);
    if ( v43 )
      BG_PlayerASM_DebugOverrideParameters(v43, ci);
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
  if ( !v34 )
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5697, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    BG_PlayerMP_FingerPoseWeaponAnims(weaponMap, ci, es, &modelNameMap);
    BG_PlayerMP_AltOverrideWeaponAnim(weaponMap, ci, es, &modelNameMap);
    if ( !PlayerASM_IsEnabled() && !BG_GameInterface_UpdateAimAnimBlends(ci, es) )
      BG_UpdateAimAnimBlends(ci, es);
    BG_AnimationMP_UpdateWobble(v14, ci, es);
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+32D8h+var_58] }
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
  __int64 v9; 
  BgStatic *ActiveStatics; 
  __int64 v11; 
  const PlayerAnimScript *v12; 
  unsigned int XAnimIndexForCharacterInternal; 
  char v15; 
  __int64 v16; 
  __int64 v17; 

  v9 = suitAnimIndex;
  BG_CheckThread();
  if ( (unsigned int)v9 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7666, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v9, 4) )
    __debugbreak();
  if ( lf->suitAnimIndex != (_DWORD)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7667, ASSERT_TYPE_ASSERT, "(lf->suitAnimIndex == static_cast<int>( suitAnimIndex ))", (const char *)&queryFormat, "lf->suitAnimIndex == static_cast<int>( suitAnimIndex )") )
    __debugbreak();
  if ( lf->animationNumber )
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    v11 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7673, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    v12 = *(const PlayerAnimScript **)(v11 + 8 * v9);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7676, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
      __debugbreak();
    if ( (lf->animationNumber & 0xFFFFEFFF) >= v12->animationCount )
    {
      LODWORD(v17) = v12->animationCount;
      LODWORD(v16) = lf->animationNumber & 0xFFFFEFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7678, ASSERT_TYPE_ASSERT, "(unsigned)( (lf->animationNumber & ~(1<<(13-1))) ) < (unsigned)( scriptData->animationCount )", "(lf->animationNumber & ~ANIM_TOGGLEBIT) doesn't index scriptData->animationCount\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    XAnimIndexForCharacterInternal = BG_GetXAnimIndexForCharacterInternal(ci, v12, lf->animationNumber & 0xFFFFEFFF);
    *(double *)&_XMM0 = XAnimGetWeight(pAnimTree, 0, XANIM_SUBTREE_DEFAULT, XAnimIndexForCharacterInternal);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm0, xmm1
    }
    if ( v15 )
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
  __int64 v11; 
  unsigned int number; 
  DObj *v13; 
  const DObj *v14; 
  XAnimTree *pXAnimTree; 
  const Weapon *WeaponForEntity; 
  int altOverrideXAnim; 
  bool v18; 
  unsigned int Animset; 
  PlayerASM_AnimSlot v20; 
  unsigned int v21; 
  unsigned int Anim; 
  unsigned int v26; 
  int altOverrideXAnimParent; 
  signed int WeaponPackageKnobNode; 
  float fmt; 
  float fmta; 
  float goalWeight; 
  float goalWeighta; 
  float goalWeightb; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 

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
  v11 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5626, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( !*(_DWORD *)(v11 + 19544) )
  {
    number = es->number;
    v13 = ActiveStatics->IsClient(ActiveStatics) ? Com_GetClientDObj(number, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable)) : (DObj *)((__int64 (__fastcall *)(BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, number);
    v14 = v13;
    if ( v13 )
    {
      pXAnimTree = ci->pXAnimTree;
      WeaponForEntity = BG_GetWeaponForEntity(weaponMap, es);
      if ( WeaponForEntity->weaponIdx )
      {
        altOverrideXAnim = ci->weaponAnims.altOverrideXAnim;
        v18 = 0;
        if ( PlayerASM_IsEnabled() )
        {
          Animset = BG_PlayerASM_GetAnimset(ci);
          LOBYTE(v20) = 1;
          v21 = Animset;
          Anim = BG_PlayerASM_GetAnim(ci, v20);
          v18 = Anim && BG_PlayerASM_IsReloadAlias(Anim, v21);
        }
        __asm { vmovaps [rsp+0B8h+var_38], xmm6 }
        if ( ci->weaponAnims.altOverrideADSOnly && (!BG_IsAdsEntity(es) || v18) || altOverrideXAnim <= 0 || !ci->hybridScopeState )
        {
          __asm { vmovss  xmm6, cs:__real@3dcccccd }
          if ( PlayerASM_IsEnabled() )
            WeaponPackageKnobNode = BG_PlayerASM_FindWeaponPackageKnobNode(ci, PLAYER_CUSTOM_ANIM_HANDLER_ALT_OVERRIDE);
          else
            WeaponPackageKnobNode = *(unsigned __int16 *)(v11 + 90);
          if ( altOverrideXAnim > 0 )
          {
            BG_AltOverride3POutTime(WeaponForEntity, es->inAltWeaponMode, ci->dualWielding != 0);
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm6, xmm0, cs:__real@3a83126f
            }
          }
          if ( WeaponPackageKnobNode > 0 )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vmovss  [rsp+0B8h+var_88], xmm0
              vmovss  [rsp+0B8h+goalWeight], xmm6
              vmovss  dword ptr [rsp+0B8h+fmt], xmm0
            }
            XAnimSetGoalWeight(v14, 0, XANIM_SUBTREE_DEFAULT, WeaponPackageKnobNode, fmt, goalWeightb, v42, (scr_string_t)0, 0, 0, LINEAR, NULL);
            __asm { vmovss  dword ptr [rsp+0B8h+fmt], xmm6 }
            XAnimClearChildGoalWeights(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, WeaponPackageKnobNode, fmta, LINEAR);
          }
        }
        else
        {
          __asm { vmovaps [rsp+0B8h+var_48], xmm7 }
          BG_AltOverride3PInTime(WeaponForEntity, es->inAltWeaponMode, ci->dualWielding != 0);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm7, xmm0, cs:__real@3a83126f
          }
          v26 = 0;
          if ( !PlayerASM_IsEnabled() )
            v26 = *(unsigned __int16 *)(v11 + 44);
          if ( PlayerASM_IsEnabled() )
            altOverrideXAnimParent = ci->weaponAnims.altOverrideXAnimParent;
          else
            altOverrideXAnimParent = *(unsigned __int16 *)(v11 + 90);
          __asm
          {
            vmovss  xmm6, cs:__real@3f800000
            vmovss  [rsp+0B8h+var_80], xmm6
            vmovss  [rsp+0B8h+var_88], xmm7
            vmovss  [rsp+0B8h+goalWeight], xmm6
          }
          XAnimSetCompleteGoalWeightRel(v14, 0, XANIM_SUBTREE_DEFAULT, altOverrideXAnimParent, v26, goalWeight, v40, v43, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
          __asm
          {
            vmovss  [rsp+0B8h+var_80], xmm6
            vmovss  [rsp+0B8h+var_88], xmm7
            vmovss  [rsp+0B8h+goalWeight], xmm6
          }
          XAnimSetCompleteGoalWeightRel(v14, 0, XANIM_SUBTREE_DEFAULT, altOverrideXAnim, v26, goalWeighta, v41, v44, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
          __asm { vmovaps xmm7, [rsp+0B8h+var_48] }
        }
        __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
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
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float goalTime; 
  float goalTimea; 
  float v28; 
  float v29; 
  char v31; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5365, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !bgameAnim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5366, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( !pAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5367, ASSERT_TYPE_ASSERT, "(pAnimTree)", (const char *)&queryFormat, "pAnimTree") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, [rsp+98h+blendTime]
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  if ( PlayerASM_IsEnabled() )
    WeaponPackageKnobNode = BG_PlayerASM_FindWeaponPackageKnobNode(ci, PLAYER_CUSTOM_ANIM_HANDLER_FINGERS_LEFT);
  else
    WeaponPackageKnobNode = bgameAnim->animScriptData.finger_pose_left;
  if ( PlayerASM_IsEnabled() )
    finger_pose_right = BG_PlayerASM_FindWeaponPackageKnobNode(ci, PLAYER_CUSTOM_ANIM_HANDLER_FINGERS_RIGHT);
  else
    finger_pose_right = bgameAnim->animScriptData.finger_pose_right;
  __asm { vmovss  xmm8, cs:__real@3f800000 }
  if ( WeaponPackageKnobNode > 0 )
  {
    __asm
    {
      vmovss  [rsp+98h+var_68], xmm8
      vmovss  [rsp+98h+goalTime], xmm6
      vmovss  dword ptr [rsp+98h+fmt], xmm7
    }
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, WeaponPackageKnobNode, fmt, goalTime, v28, (scr_string_t)0, 0, 0, LINEAR, NULL);
    __asm { vmovss  dword ptr [rsp+98h+fmt], xmm6 }
    XAnimClearChildGoalWeights(pAnimTree, 0, XANIM_SUBTREE_DEFAULT, WeaponPackageKnobNode, fmta, LINEAR);
  }
  if ( finger_pose_right > 0 )
  {
    __asm
    {
      vmovss  [rsp+98h+var_68], xmm8
      vmovss  [rsp+98h+goalTime], xmm6
      vmovss  dword ptr [rsp+98h+fmt], xmm7
    }
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, finger_pose_right, fmtb, goalTimea, v29, (scr_string_t)0, 0, 0, LINEAR, NULL);
    __asm { vmovss  dword ptr [rsp+98h+fmt], xmm6 }
    XAnimClearChildGoalWeights(pAnimTree, 0, XANIM_SUBTREE_DEFAULT, finger_pose_right, fmtc, LINEAR);
  }
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v31;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
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
  const BgAnimStatic *v15; 
  unsigned int number; 
  DObj *ClientDObj; 
  DObj *v18; 
  const dvar_t *v19; 
  XAnimTree *pXAnimTree; 
  unsigned int Animset; 
  unsigned int Anim; 
  PlayerFingerPoseSlot FingerPoseSlot; 
  __int64 v24; 
  __int64 v25; 
  signed int v26; 
  signed int v28; 
  unsigned __int16 children; 
  const XAnimInfo *AnimInfo; 
  unsigned int codeAnim; 
  int leftFingerPoseXAnimParent; 
  int rightFingerPoseXAnimParent; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float goalWeight; 
  float goalWeighta; 
  float goalWeightb; 
  float goalWeightc; 
  float goalTime; 
  float goalTimea; 
  float goalTimeb; 
  float goalTimec; 
  float v68; 
  float v69; 
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
  v15 = ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5528, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  number = es->number;
  if ( ActiveStatics->IsClient(ActiveStatics) )
    ClientDObj = Com_GetClientDObj(number, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable));
  else
    ClientDObj = (DObj *)((__int64 (__fastcall *)(BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, number);
  v18 = ClientDObj;
  if ( ClientDObj )
  {
    v19 = DCONST_DVARBOOL_xanim_finger_pose_disable;
    pXAnimTree = ci->pXAnimTree;
    if ( !DCONST_DVARBOOL_xanim_finger_pose_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_finger_pose_disable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( v19->current.enabled || !BG_GetWeaponForEntity(weaponMap, es)->weaponIdx )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+0F8h+fmt], xmm0
      }
      BG_PlayerMP_ClearFingerPoseAnims(v18, ci, v15, pXAnimTree, fmtc);
      return;
    }
    __asm
    {
      vmovaps [rsp+0F8h+var_48], xmm6
      vmovaps [rsp+0F8h+var_58], xmm7
      vmovaps [rsp+0F8h+var_68], xmm8
      vmovaps [rsp+0F8h+var_78], xmm9
      vmovaps [rsp+0F8h+var_88], xmm10
    }
    Animset = BG_PlayerASM_GetAnimset(ci);
    Anim = BG_PlayerASM_GetAnim(ci, MOVEMENT);
    if ( Anim && (FingerPoseSlot = BG_PlayerASM_GetFingerPoseSlot(Anim, Animset), FingerPoseSlot == PLAYER_FINGER_POSE_SLOT_SECONDARY) )
    {
      if ( ci->weaponAnims.leftFingerPoseXAnim[1] > 0 )
      {
        v24 = 5252i64;
        goto LABEL_31;
      }
    }
    else
    {
      FingerPoseSlot = PLAYER_FINGER_POSE_SLOT_PRIMARY;
    }
    v24 = 5248i64;
    if ( FingerPoseSlot == PLAYER_FINGER_POSE_SLOT_PRIMARY )
    {
LABEL_32:
      v25 = 5256i64;
LABEL_33:
      v26 = *(int *)((char *)&ci->entityNum + v25);
      _EAX = ci->weaponAnims.requiresBlending;
      v28 = *(int *)((char *)&ci->entityNum + v24);
      outWeights = 0i64;
      outAnimWeights = 0i64;
      __asm
      {
        vmovd   xmm0, eax
        vmovd   xmm1, r12d
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm0, cs:__real@3dcccccd
        vxorps  xmm6, xmm6, xmm6
        vblendvps xmm1, xmm0, xmm6, xmm2
        vmovss  [rsp+0F8h+arg_0], xmm1
      }
      if ( pXAnimTree )
      {
        children = pXAnimTree->children;
        if ( children )
        {
          if ( v28 || v26 )
          {
            AnimInfo = GetAnimInfo(children);
            BG_CalcFingerPoseWeights(AnimInfo, (float *)&outWeights, (float *)&outAnimWeights);
          }
        }
      }
      __asm
      {
        vmovss  xmm7, cs:__real@3f800000
        vmovss  xmm0, dword ptr [rsp+0F8h+outWeights]; val
        vmovaps xmm2, xmm7; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm9, xmm0
        vmovss  xmm0, dword ptr [rsp+0F8h+outWeights+4]; val
        vmovaps xmm2, xmm7; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm8, [rsp+0F8h+arg_0]
        vmovss  dword ptr [rsp+0F8h+fmt], xmm8
        vmovaps xmm10, xmm0
      }
      BG_PlayerMP_ClearFingerPoseAnims(v18, ci, v15, pXAnimTree, fmt);
      codeAnim = 0;
      if ( !PlayerASM_IsEnabled() )
        codeAnim = v15->animScriptData.codeAnim;
      if ( v28 > 0 )
      {
        __asm { vcomiss xmm9, xmm6 }
        if ( PlayerASM_IsEnabled() )
          leftFingerPoseXAnimParent = ci->weaponAnims.leftFingerPoseXAnimParent;
        else
          leftFingerPoseXAnimParent = v15->animScriptData.finger_pose_left;
        __asm
        {
          vmovss  [rsp+0F8h+var_C0], xmm7
          vmovss  [rsp+0F8h+goalTime], xmm8
          vmovss  [rsp+0F8h+goalWeight], xmm9
        }
        XAnimSetCompleteGoalWeightRel(v18, 0, XANIM_SUBTREE_DEFAULT, leftFingerPoseXAnimParent, codeAnim, goalWeight, goalTime, v68, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
        __asm
        {
          vmovss  [rsp+0F8h+goalTime], xmm7
          vmovss  [rsp+0F8h+goalWeight], xmm8
          vmovss  dword ptr [rsp+0F8h+fmt], xmm7
        }
        XAnimSetGoalWeight(v18, 0, XANIM_SUBTREE_DEFAULT, v28, fmta, goalWeighta, goalTimea, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
      }
      __asm { vmovaps xmm9, [rsp+0F8h+var_78] }
      if ( v26 > 0 )
      {
        __asm { vcomiss xmm10, xmm6 }
        if ( PlayerASM_IsEnabled() )
          rightFingerPoseXAnimParent = ci->weaponAnims.rightFingerPoseXAnimParent;
        else
          rightFingerPoseXAnimParent = v15->animScriptData.finger_pose_right;
        __asm
        {
          vmovss  [rsp+0F8h+var_C0], xmm7
          vmovss  [rsp+0F8h+goalTime], xmm8
          vmovss  [rsp+0F8h+goalWeight], xmm10
        }
        XAnimSetCompleteGoalWeightRel(v18, 0, XANIM_SUBTREE_DEFAULT, rightFingerPoseXAnimParent, codeAnim, goalWeightb, goalTimeb, v69, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
        __asm
        {
          vmovss  [rsp+0F8h+goalTime], xmm7
          vmovss  [rsp+0F8h+goalWeight], xmm8
          vmovss  dword ptr [rsp+0F8h+fmt], xmm7
        }
        XAnimSetGoalWeight(v18, 0, XANIM_SUBTREE_DEFAULT, v26, fmtb, goalWeightc, goalTimec, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
      }
      __asm
      {
        vmovaps xmm8, [rsp+0F8h+var_68]
        vmovaps xmm7, [rsp+0F8h+var_58]
        vmovaps xmm6, [rsp+0F8h+var_48]
        vmovaps xmm10, [rsp+0F8h+var_88]
      }
      return;
    }
LABEL_31:
    v25 = 5260i64;
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
  const dvar_t *v30; 
  const dvar_t *v35; 
  unsigned int Animset; 
  unsigned int Anim; 
  const dvar_t *v39; 
  bool v51; 
  const dvar_t *v89; 
  bool IsPlayingVehicleOccupancyAnims; 
  vec3_t trBase; 
  __int64 v109; 
  vec3_t v2; 
  vec3_t v1; 
  tmat33_t<vec3_t> axis; 
  char v113; 
  void *retaddr; 

  _RAX = &retaddr;
  v109 = -2i64;
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
  _RBX = info;
  _RDI = ci;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8718, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  *(_QWORD *)_RBX->hand_ik_local_pos[0].v = 0i64;
  *(_QWORD *)&_RBX->hand_ik_local_pos[0].z = 0i64;
  *(_QWORD *)&_RBX->hand_ik_local_pos[1].y = 0i64;
  *(_QWORD *)_RBX->hand_ik_local_ang[0].v = 0i64;
  *(_QWORD *)&_RBX->hand_ik_local_ang[0].z = 0i64;
  *(_QWORD *)&_RBX->hand_ik_local_ang[1].y = 0i64;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2088, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  p_lerp = &es->lerp;
  if ( BG_IsTurretActiveFlags(&es->lerp.eFlags) )
  {
    if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2102, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( !BG_IsRemoteTurretActiveFlags(&es->lerp.eFlags) )
    {
      memset_0(_RBX, 0, sizeof(clientControllers_t));
      _RBX->hand_ik_local_pos[0].v[0] = _RDI->IKHandPos[0].v[0];
      _RBX->hand_ik_local_pos[0].v[1] = _RDI->IKHandPos[0].v[1];
      _RBX->hand_ik_local_pos[0].v[2] = _RDI->IKHandPos[0].v[2];
      _RBX->hand_ik_local_pos[1].v[0] = _RDI->IKHandPos[1].v[0];
      _RBX->hand_ik_local_pos[1].v[1] = _RDI->IKHandPos[1].v[1];
      _RBX->hand_ik_local_pos[1].v[2] = _RDI->IKHandPos[1].v[2];
      _RBX->hand_ik_local_ang[0].v[0] = _RDI->IKHandAng[0].v[0];
      _RBX->hand_ik_local_ang[0].v[1] = _RDI->IKHandAng[0].v[1];
      _RBX->hand_ik_local_ang[0].v[2] = _RDI->IKHandAng[0].v[2];
      _RBX->hand_ik_local_ang[1].v[0] = _RDI->IKHandAng[1].v[0];
      _RBX->hand_ik_local_ang[1].v[1] = _RDI->IKHandAng[1].v[1];
      _RBX->hand_ik_local_ang[1].v[2] = _RDI->IKHandAng[1].v[2];
      goto LABEL_69;
    }
  }
  IsPlayingVehicleOccupancyAnims = BG_IsPlayingVehicleOccupancyAnims(_RDI);
  if ( IsPlayingVehicleOccupancyAnims )
  {
    if ( _RDI->vehicleAnimation.hasSeatIK[0] )
    {
      _RBX->hand_ik_local_pos[0].v[0] = _RDI->IKHandPos[0].v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+38A8h]
        vmovss  dword ptr [rbx+4Ch], xmm0
        vmovss  xmm1, dword ptr [rdi+38ACh]
        vmovss  dword ptr [rbx+50h], xmm1
      }
      _RBX->hand_ik_local_ang[0].v[0] = _RDI->IKHandAng[0].v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+38C0h]
        vmovss  dword ptr [rbx+64h], xmm0
        vmovss  xmm1, dword ptr [rdi+38C4h]
        vmovss  dword ptr [rbx+68h], xmm1
      }
    }
    if ( _RDI->vehicleAnimation.hasSeatIK[1] )
    {
      _RBX->hand_ik_local_pos[1].v[0] = _RDI->IKHandPos[1].v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+38B4h]
        vmovss  dword ptr [rbx+58h], xmm0
        vmovss  xmm1, dword ptr [rdi+38B8h]
        vmovss  dword ptr [rbx+5Ch], xmm1
      }
      _RBX->hand_ik_local_ang[1].v[0] = _RDI->IKHandAng[1].v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+38CCh]
        vmovss  dword ptr [rbx+70h], xmm0
        vmovss  xmm1, dword ptr [rdi+38D0h]
        vmovss  dword ptr [rbx+74h], xmm1
      }
    }
  }
  if ( (_RDI->carryObjectFlags & 1) != 0 && _RDI->carryObjectIKEnabled )
  {
    _RBX->hand_ik_local_pos[0].v[0] = _RDI->IKHandPos[0].v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+38A8h]
      vmovss  dword ptr [rbx+4Ch], xmm0
      vmovss  xmm1, dword ptr [rdi+38ACh]
      vmovss  dword ptr [rbx+50h], xmm1
    }
    _RBX->hand_ik_local_ang[0].v[0] = _RDI->IKHandAng[0].v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+38C0h]
      vmovss  dword ptr [rbx+64h], xmm0
      vmovss  xmm1, dword ptr [rdi+38C4h]
      vmovss  dword ptr [rbx+68h], xmm1
    }
  }
  if ( _RDI->isScriptedSceneAnim )
  {
    memset_0(_RBX, 0, sizeof(clientControllers_t));
    v30 = DCONST_DVARBOOL_anim_debugScrAnimatedCharController;
    if ( !DCONST_DVARBOOL_anim_debugScrAnimatedCharController && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "anim_debugScrAnimatedCharController") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    if ( v30->current.enabled && Sys_IsMainThread() )
    {
      AnglesToAxis(&_RDI->playerAngles, &axis);
      Trajectory_GetTrBase(&es->lerp.pos, &trBase);
      __asm { vmovss  xmm2, cs:__real@40a00000; length }
      CG_DebugAxis(&axis, &trBase, *(float *)&_XMM2, 0, 1);
      memset(&trBase, 0, sizeof(trBase));
    }
    *(_QWORD *)_RBX->tag_origin_angles.v = 0i64;
    _RBX->tag_origin_angles.v[2] = 0.0;
    goto LABEL_69;
  }
  if ( _RDI->entityNum != es->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8763, ASSERT_TYPE_ASSERT, "(ci->entityNum == es->clientNum)", (const char *)&queryFormat, "ci->entityNum == es->clientNum") )
    __debugbreak();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rsp+1A0h+v2], xmm6
    vmovss  dword ptr [rsp+1A0h+v2+8], xmm6
    vmovss  dword ptr [rbp+0A0h+v1], xmm6
    vmovss  dword ptr [rbp+0A0h+v1+8], xmm6
    vmovss  xmm0, dword ptr [rdi+800h]
    vmovss  dword ptr [rsp+1A0h+v2+4], xmm0
    vmovss  xmm1, dword ptr [rdi+858h]
    vmovss  dword ptr [rbp+0A0h+v1+4], xmm1
  }
  if ( (int)BG_GetConditionBit(_RDI, 3) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8772, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) >= ANIM_MT_UNUSED") )
    __debugbreak();
  if ( (int)BG_GetConditionBit(_RDI, 3) >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 8773, ASSERT_TYPE_ASSERT, "(BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES)", (const char *)&queryFormat, "BG_GetConditionBit( ci, ANIM_COND_MOVETYPE ) < NUM_ANIM_MOVETYPES") )
    __debugbreak();
  v35 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
  if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  if ( !v35->current.enabled )
  {
    if ( PlayerASM_IsEnabled() )
    {
      Animset = BG_PlayerASM_GetAnimset(_RDI);
      Anim = BG_PlayerASM_GetAnim(_RDI, MOVEMENT);
      if ( BG_PlayerASM_IsLadderAlias(Anim, Animset) || BG_PlayerASM_IsLadderAimAlias(Anim, Animset) )
        goto LABEL_48;
    }
    else if ( (_RDI->clientConditions[3][0] & 0x1C000) != 0 )
    {
      goto LABEL_48;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+860h]
      vmovss  dword ptr [rbp+0A0h+v1], xmm0
    }
  }
LABEL_48:
  AnglesSubtract(&v1, &v2, &v1);
  __asm
  {
    vmovss  dword ptr [rbp+0A0h+v1+8], xmm6
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+1A0h+var_150], xmm7
  }
  v39 = DCONST_DVARBOOL_bg_slope_worldmodel_code_z_offset;
  if ( !DCONST_DVARBOOL_bg_slope_worldmodel_code_z_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_slope_worldmodel_code_z_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v39);
  if ( v39->current.enabled )
  {
    *(double *)&_XMM0 = BG_SlopeWorldmodel_GetZAdjustment(_RDI->suitIndex, &_RDI->groundNormalInterpolated);
    __asm { vmovss  [rsp+1A0h+var_150], xmm0 }
  }
  __asm
  {
    vmovss  xmm13, cs:__real@3b360b61
    vmovss  xmm9, cs:__real@3f000000
    vmovss  xmm10, cs:__real@43b40000
  }
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0x11u) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1A0h+v2+4]
      vsubss  xmm1, xmm0, dword ptr [rdi+9C4h]
      vmulss  xmm5, xmm1, xmm13
      vaddss  xmm2, xmm5, xmm9
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm4, xmm1, xmm2, 1
      vsubss  xmm0, xmm5, xmm4
      vmulss  xmm1, xmm0, xmm10
      vmovss  dword ptr [rsp+1A0h+v2+4], xmm1
    }
  }
  v51 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 4u);
  if ( v51 )
  {
    __asm
    {
      vmovss  xmm8, dword ptr [rdi+0AD0h]
      vmovss  xmm0, dword ptr [rsp+1A0h+v2]
      vaddss  xmm14, xmm0, xmm8
      vmovss  dword ptr [rsp+1A0h+v2], xmm14
      vxorps  xmm12, xmm12, xmm12
      vmovss  xmm11, dword ptr [rbp+0A0h+v1+8]
      vmulss  xmm2, xmm11, cs:__real@3e99999a
      vmovss  [rsp+1A0h+var_15C], xmm2
      vmovss  xmm7, dword ptr [rdi+0AD4h]
      vucomiss xmm8, xmm6
      vsubss  xmm0, xmm8, xmm7
      vmulss  xmm5, xmm0, xmm13
      vaddss  xmm2, xmm5, xmm9
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm4, xmm0, xmm2, 1
      vsubss  xmm1, xmm5, xmm4
      vmulss  xmm12, xmm1, xmm10
      vmulss  xmm2, xmm11, cs:__real@3e99999a
      vxorps  xmm13, xmm13, xmm13
      vxorps  xmm10, xmm10, xmm10
      vmulss  xmm1, xmm11, cs:__real@3e4ccccd
      vmovss  [rsp+1A0h+var_158], xmm1
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm15, xmm15, xmm15
      vmulss  xmm11, xmm11, cs:__real@be4ccccd
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rbp+0A0h+v1+8]
      vucomiss xmm7, xmm6
      vxorps  xmm11, xmm11, xmm11
      vxorps  xmm14, xmm14, xmm14
      vxorps  xmm15, xmm15, xmm15
      vmulss  xmm13, xmm14, xmm9
      vmovaps xmm12, xmm13
      vmulss  xmm10, xmm15, xmm9
      vmulss  xmm2, xmm11, xmm9
      vmovss  [rsp+1A0h+var_15C], xmm2
      vmovss  xmm8, dword ptr [rdi+0AD0h]
      vmovss  xmm7, dword ptr [rdi+0AD4h]
      vucomiss xmm8, xmm6
      vucomiss xmm7, xmm6
      vmovss  [rsp+1A0h+var_158], xmm2
      vmovss  xmm0, cs:__real@bf19999a
      vmulss  xmm1, xmm14, xmm0
      vmulss  xmm15, xmm15, xmm0
      vmulss  xmm11, xmm11, xmm0
      vmovss  xmm14, dword ptr [rsp+1A0h+v2]
    }
  }
  __asm
  {
    vmovss  [rsp+1A0h+var_154], xmm1
    vucomiss xmm7, xmm6
  }
  if ( v51 )
  {
    __asm
    {
      vsubss  xmm0, xmm7, xmm8
      vmulss  xmm5, xmm0, cs:__real@3b360b61
      vaddss  xmm2, xmm5, xmm9
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm4, xmm0, xmm2, 1
      vsubss  xmm1, xmm5, xmm4
      vmulss  xmm6, xmm1, cs:__real@43b40000
      vmovss  xmm2, [rsp+1A0h+var_15C]
    }
  }
  else
  {
    __asm { vucomiss xmm8, xmm6 }
  }
  __asm
  {
    vmovss  dword ptr [rbx], xmm12
    vmovss  dword ptr [rbx+4], xmm10
    vmovss  dword ptr [rbx+8], xmm2
    vmovss  dword ptr [rbx+0Ch], xmm13
    vmovss  dword ptr [rbx+10h], xmm10
    vmovss  xmm0, [rsp+1A0h+var_158]
    vmovss  dword ptr [rbx+14h], xmm0
    vmovss  xmm1, [rsp+1A0h+var_154]
    vmovss  dword ptr [rbx+18h], xmm1
    vmovss  dword ptr [rbx+1Ch], xmm15
    vmovss  dword ptr [rbx+20h], xmm11
    vmovss  dword ptr [rbx+24h], xmm6
  }
  *(_QWORD *)&_RBX->angles[3].y = 0i64;
  if ( IsPlayingVehicleOccupancyAnims )
  {
    *(_QWORD *)_RBX->tag_origin_angles.v = 0i64;
    _RBX->tag_origin_angles.v[2] = 0.0;
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rbx+30h], xmm14
      vmovss  xmm0, dword ptr [rsp+1A0h+v2+4]
      vmovss  dword ptr [rbx+34h], xmm0
      vmovss  xmm1, dword ptr [rsp+1A0h+v2+8]
      vmovss  dword ptr [rbx+38h], xmm1
    }
  }
  *(_QWORD *)_RBX->tag_origin_offset.v = 0i64;
  __asm
  {
    vmovss  xmm0, [rsp+1A0h+var_150]
    vmovss  dword ptr [rbx+44h], xmm0
  }
  v89 = DCONST_DVARBOOL_stepBlendActive;
  if ( !DCONST_DVARBOOL_stepBlendActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stepBlendActive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v89);
  if ( v89->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+38E0h]
      vaddss  xmm1, xmm0, dword ptr [rbx+44h]
      vmovss  dword ptr [rbx+44h], xmm1
    }
  }
LABEL_69:
  _R11 = &v113;
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
BG_Player_DoControllersScripted
==============
*/
void BG_Player_DoControllersScripted(const entityState_t *es, const characterInfo_t *ci, clientControllers_t *info)
{
  const dvar_t *v6; 
  vec3_t trBase; 
  __int64 v9; 
  tmat33_t<vec3_t> axis; 

  v9 = -2i64;
  memset_0(info, 0, sizeof(clientControllers_t));
  v6 = DCONST_DVARBOOL_anim_debugScrAnimatedCharController;
  if ( !DCONST_DVARBOOL_anim_debugScrAnimatedCharController && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "anim_debugScrAnimatedCharController") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && Sys_IsMainThread() )
  {
    AnglesToAxis(&ci->playerAngles, &axis);
    Trajectory_GetTrBase(&es->lerp.pos, &trBase);
    __asm { vmovss  xmm2, cs:__real@40a00000; length }
    CG_DebugAxis(&axis, &trBase, *(float *)&_XMM2, 0, 1);
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
  __int64 v14; 
  clientControllers_t *p_control; 
  unsigned int v17; 
  bool v19; 
  bool v20; 
  bool v21; 
  const dvar_t *v31; 
  vec3_t *p_tag_origin_offset; 
  __int64 v47; 
  __int64 v48; 
  clientControllers_t info; 
  char v50; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  _RBP = ci;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9019, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  BG_Player_DoControllersInternal(es, _RBP, &info);
  __asm
  {
    vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm9, xmm9, ebx
    vmulss  xmm7, xmm9, cs:__real@3eb851ec
  }
  v14 = 4i64;
  p_control = &_RBP->control;
  _RSI = (char *)((char *)&info - (char *)_RBP);
  do
  {
    v17 = 0;
    _RDI = p_control;
    v19 = 1;
    v20 = 1;
    do
    {
      if ( !v19 )
      {
        LODWORD(v48) = 3;
        LODWORD(v47) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v47, v48) )
          __debugbreak();
        LODWORD(v48) = 3;
        LODWORD(v47) = v17;
        v21 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v47, v48);
        v19 = 0;
        v20 = !v21;
        if ( v21 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm6, dword ptr [rdi+rsi-0AFCh]
        vsubss  xmm1, xmm6, dword ptr [rdi]
        vcomiss xmm1, xmm7
      }
      if ( v20 )
      {
        __asm
        {
          vxorps  xmm0, xmm7, xmm8
          vcomiss xmm1, xmm0
        }
        if ( v19 )
        {
          if ( v17 >= 3 )
          {
            LODWORD(v48) = 3;
            LODWORD(v47) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v47, v48) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rdi]
            vsubss  xmm1, xmm0, xmm7
            vmovss  dword ptr [rdi], xmm1
          }
        }
        else
        {
          if ( v17 >= 3 )
          {
            LODWORD(v48) = 3;
            LODWORD(v47) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v47, v48) )
              __debugbreak();
            LODWORD(v48) = 3;
            LODWORD(v47) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v47, v48) )
              __debugbreak();
          }
          __asm { vmovss  dword ptr [rdi], xmm6 }
        }
      }
      else
      {
        if ( v17 >= 3 )
        {
          LODWORD(v48) = 3;
          LODWORD(v47) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v47, v48) )
            __debugbreak();
        }
        __asm
        {
          vaddss  xmm0, xmm7, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm0
        }
      }
      ++v17;
      _RDI = (clientControllers_t *)((char *)_RDI + 4);
      v19 = v17 < 3;
      v20 = v17 <= 3;
    }
    while ( (int)v17 < 3 );
    p_control = (clientControllers_t *)((char *)p_control + 12);
    --v14;
  }
  while ( v14 );
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+138h+info.tag_origin_angles]
    vmovss  xmm1, dword ptr [rsp+138h+info.tag_origin_angles+4]
    vmovss  dword ptr [rbp+0B2Ch], xmm0
    vmovss  xmm0, dword ptr [rsp+138h+info.tag_origin_angles+8]
    vmovss  dword ptr [rbp+0B34h], xmm0
    vmovss  dword ptr [rbp+0B30h], xmm1
  }
  v31 = DCONST_DVARBOOL_stepBlendActive;
  if ( !DCONST_DVARBOOL_stepBlendActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stepBlendActive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  p_tag_origin_offset = &_RBP->control.tag_origin_offset;
  __asm { vmulss  xmm1, xmm9, cs:__real@3dcccccd; maxOffsetChange }
  if ( v31->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+138h+info.tag_origin_offset+8]
      vsubss  xmm2, xmm0, dword ptr [rbp+38E0h]
      vmovss  xmm0, dword ptr [rbp+0B40h]
      vmovss  dword ptr [rsp+138h+info.tag_origin_offset+8], xmm2
      vsubss  xmm2, xmm0, dword ptr [rbp+38E8h]
      vmovss  dword ptr [rbp+0B40h], xmm2
    }
    BG_LerpOffset(&info.tag_origin_offset, *(float *)&_XMM1, p_tag_origin_offset);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0B40h]
      vaddss  xmm1, xmm0, dword ptr [rbp+38E0h]
      vmovss  dword ptr [rbp+0B40h], xmm1
    }
    _RBP->heightOffsetInOriginOffset = _RBP->heightOffset;
  }
  else
  {
    BG_LerpOffset(&info.tag_origin_offset, *(float *)&_XMM1, p_tag_origin_offset);
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+138h+info.hand_ik_local_pos]
    vmovups ymmword ptr [rbp+0B44h], ymm0
    vmovups xmm0, xmmword ptr [rsp+138h+info.hand_ik_local_ang+8]
    vmovups xmmword ptr [rbp+0B64h], xmm0
  }
  _R11 = &v50;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
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
  const PlayerAnimScript *v19; 
  XAnimTree *pXAnimTree; 
  int v22; 
  int v23; 
  int v24; 
  signed int v25; 
  PlayerAnimEntry *animations; 
  PlayerAnimEntry *v27; 
  BOOL v28; 
  char v29; 
  bool SyncedAnimTime; 
  int v31; 
  __int64 v33; 
  char v35; 
  int oldFrameSnapshotTime; 
  bool v37; 
  const BgAnimStatic *v38; 
  int latestSnapshotTime; 
  unsigned __int16 slowAnimIndex; 
  const PlayerAnimEntry *v43; 
  int v50; 
  unsigned int v51; 
  XAnimTree *v52; 
  unsigned int v53; 
  XAnim_s *anims; 
  unsigned int v55; 
  int XAnimIndex; 
  vec3_t *v62; 
  entityState_t *v63; 
  int animationNumber; 
  unsigned __int64 v65; 
  unsigned int v66; 
  int v67; 
  int v68; 
  unsigned int v69; 
  int v70; 
  int v71; 
  unsigned int animationCount; 
  unsigned int *movetype; 
  unsigned int *v83; 
  const DObj *DObj; 
  unsigned __int8 v97; 
  unsigned int v98; 
  XAnimTree *v104; 
  unsigned int XAnimIndexForCharacterInternal; 
  unsigned int v113; 
  const dvar_t *v114; 
  unsigned int v115; 
  unsigned int v117; 
  const XAnim_s *v118; 
  unsigned int v119; 
  unsigned int v120; 
  unsigned int v124; 
  const char *v126; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  __int64 goalTime; 
  float goalTimea; 
  float goalTimeb; 
  __int64 rate; 
  double ratea; 
  float rateb; 
  float ratec; 
  double rated; 
  double notifyName; 
  double notifyNamea; 
  double notifyType; 
  unsigned __int8 v149; 
  SuitAnimType suitAnimIndex; 
  int chosenAnimIndex; 
  XAnimTree *tree; 
  float animTime; 
  entityState_t *v154; 
  vec3_t *v155; 
  int v156; 
  const BgAnimStatic *v157; 
  vec3_t *v158; 
  BgStatic *bgStatic; 
  unsigned __int64 v160; 
  vec3_t outAngleDela; 

  v158 = (vec3_t *)movingPlatformOrigin;
  _RSI = lf;
  v155 = (vec3_t *)movingPlatformAngles;
  v154 = (entityState_t *)es;
  BG_CheckThread();
  bgStatic = BgStatic::GetActiveStatics();
  v157 = bgStatic->GetAnimStatics(bgStatic);
  if ( !v157 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6965, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  suitAnimIndex = BG_GetSuitAnimIndexFromCharacter(ci);
  v19 = v157->animScriptData.suitScript[suitAnimIndex];
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6969, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
    __debugbreak();
  pXAnimTree = ci->pXAnimTree;
  __asm { vmovss  xmm0, cs:__real@bf800000 }
  v22 = newAnimation & 0xFFFFEFFF;
  v149 = 0;
  tree = pXAnimTree;
  __asm { vmovss  [rsp+198h+animTime], xmm0 }
  if ( !pXAnimTree || (v23 = 444, pXAnimTree->owner[0]) )
    v23 = 445;
  Profile_Begin(v23);
  if ( _RSI == &ci->legs )
  {
    if ( v22 >= v19->animationCount )
    {
      LODWORD(goalTime) = newAnimation & 0xFFFFEFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6992, ASSERT_TYPE_ASSERT, "(unsigned)( newAnimationIndex ) < (unsigned)( scriptData->animationCount )", "newAnimationIndex doesn't index scriptData->animationCount\n\t%i not in [0, %i)", goalTime, v19->animationCount) )
        __debugbreak();
    }
    if ( (v19->animations[v22].flags & 0x80001) == 0x80000i64 )
    {
      v149 = 1;
      BG_DetermineTwitchAnimAndTime(ci, es, v22, &chosenAnimIndex, &animTime);
      v24 = chosenAnimIndex;
      if ( chosenAnimIndex != v22 )
      {
        if ( (chosenAnimIndex & 0x1000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7008, ASSERT_TYPE_ASSERT, "(!(twitchOrIdleAnimIndex & (1<<(13-1))))", (const char *)&queryFormat, "!(twitchOrIdleAnimIndex & ANIM_TOGGLEBIT)") )
          __debugbreak();
        newAnimation = v24 | ~(_WORD)newAnimation & 0x1000;
      }
    }
  }
  else if ( v19->animations[v22].turns && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7016, ASSERT_TYPE_ASSERT, "(!scriptData->animations[newAnimationIndex].turns)", (const char *)&queryFormat, "!scriptData->animations[newAnimationIndex].turns") )
  {
    __debugbreak();
  }
  v25 = newAnimation & 0xFFFFEFFF;
  if ( (newAnimation & 0xFFFFEFFF) >= v19->animationCount )
  {
    LODWORD(rate) = v19->animationCount;
    LODWORD(goalTime) = newAnimation & 0xFFFFEFFF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7021, ASSERT_TYPE_ASSERT, "(unsigned)( newAnimationIndex ) < (unsigned)( scriptData->animationCount )", "newAnimationIndex doesn't index scriptData->animationCount\n\t%i not in [0, %i)", goalTime, rate) )
      __debugbreak();
  }
  animations = v19->animations;
  v160 = 104i64 * v25;
  v27 = &animations[v160 / 0x68];
  v28 = v27 && SLOBYTE(v27->flags) < 0;
  if ( newAnimation == _RSI->animationNumber && (_RSI->animation || !v25) )
  {
    v29 = 0;
  }
  else
  {
    v29 = 1;
    BG_SetNewAnimation(ci, _RSI, newAnimation, v154);
  }
  if ( v25 )
  {
    __asm
    {
      vmovaps [rsp+198h+var_58], xmm6
      vmovaps [rsp+198h+var_68], xmm7
      vmovaps [rsp+198h+var_78], xmm8
      vmovaps [rsp+198h+var_88], xmm9
      vmovaps [rsp+198h+var_98], xmm10
      vmovaps [rsp+198h+var_C8], xmm13
    }
    SyncedAnimTime = BG_GameInterface_InteractionAnims_GetSyncedAnimTime(v27, ci, _RSI, v154, &animTime);
    v31 = v149;
    if ( SyncedAnimTime )
      v31 = 1;
    v156 = v31;
    BGMovingPlatformPlayerAnim::PlayerAnimApplyRotation(&_RSI->movingPlatformPlayerAnim, v154, v155, _RSI, &outAngleDela);
    __asm { vmovss  xmm13, cs:__real@3a83126f }
    v33 = v27->flags & 0x2000001;
    __asm { vxorps  xmm10, xmm10, xmm10 }
    if ( v33 == 1 )
      goto LABEL_41;
    *(float *)&_XMM0 = BG_Animation_GetAnimEntryMoveSpeed(v27);
    __asm { vucomiss xmm0, xmm10 }
    if ( !v35 )
    {
LABEL_41:
      oldFrameSnapshotTime = _RSI->oldFrameSnapshotTime;
      if ( oldFrameSnapshotTime )
      {
        if ( !v28 )
        {
          v37 = v29 && v27->slowAnimIndex;
          v38 = v157;
          latestSnapshotTime = v157->latestSnapshotTime;
          if ( v33 == 1 )
          {
            if ( latestSnapshotTime != oldFrameSnapshotTime )
            {
              XAnimIndex = BG_GetXAnimIndex(v19, v25);
              *(float *)&_XMM0 = BG_CalculateNodeAnimRate(ci, XAnimIndex, 1, NULL);
              __asm { vmovss  dword ptr [rsi+30h], xmm0 }
            }
          }
          else if ( latestSnapshotTime != oldFrameSnapshotTime || v37 )
          {
            slowAnimIndex = v27->slowAnimIndex;
            __asm
            {
              vxorps  xmm9, xmm9, xmm9
              vcvtsi2ss xmm9, xmm9, dword ptr [r15+147Ch]
            }
            if ( slowAnimIndex )
            {
              if ( (slowAnimIndex & 0xEFFFu) >= v19->animationCount )
              {
                LODWORD(rate) = v19->animationCount;
                LODWORD(goalTime) = slowAnimIndex & 0xEFFF;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7062, ASSERT_TYPE_ASSERT, "(unsigned)( (anim->slowAnimIndex & ~(1<<(13-1))) ) < (unsigned)( scriptData->animationCount )", "(anim->slowAnimIndex & ~ANIM_TOGGLEBIT) doesn't index scriptData->animationCount\n\t%i not in [0, %i)", goalTime, rate) )
                  __debugbreak();
              }
              v43 = &v19->animations[v27->slowAnimIndex & 0xEFFF];
              if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7064, ASSERT_TYPE_ASSERT, "(slowAnim)", (const char *)&queryFormat, "slowAnim") )
                __debugbreak();
              *(float *)&_XMM0 = BG_Animation_GetAnimEntryMoveSpeed(v27);
              __asm { vmovaps xmm7, xmm0 }
              *(float *)&_XMM0 = BG_Animation_GetAnimEntryMoveSpeed(v43);
              __asm
              {
                vsubss  xmm8, xmm7, xmm0
                vucomiss xmm8, xmm10
                vmovaps xmm6, xmm0
              }
              if ( v35 )
              {
                __asm
                {
                  vcvtss2sd xmm1, xmm6, xmm0
                  vmovsd  qword ptr [rsp+198h+notifyName], xmm1
                  vcvtss2sd xmm2, xmm7, xmm7
                  vmovsd  qword ptr [rsp+198h+rate], xmm2
                }
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7068, ASSERT_TYPE_ASSERT, "((animMoveSpeed - slowAnimMoveSpeed) != 0.0f)", "%s\n\tInvalid speed scale calculated from %f to %f\n", "(animMoveSpeed - slowAnimMoveSpeed) != 0.0f", ratea, notifyName) )
                  __debugbreak();
              }
              __asm
              {
                vsubss  xmm0, xmm9, xmm6
                vdivss  xmm1, xmm0, xmm8
                vmovss  dword ptr [rsi+30h], xmm1
                vmaxss  xmm0, xmm1, xmm13
                vmovss  dword ptr [rsi+30h], xmm0
              }
              v50 = v38->latestSnapshotTime;
            }
            else
            {
              v51 = BG_GetXAnimIndex(v19, v25);
              v52 = tree;
              v53 = v51;
              anims = tree->anims;
              v55 = BG_GetXAnimIndex(v19, v25);
              *(double *)&_XMM0 = XAnimGetTime(v52, 0, XANIM_SUBTREE_DEFAULT, v55);
              __asm { vmovaps xmm6, xmm0 }
              *(double *)&_XMM0 = XAnimGetLength(anims, v53);
              __asm
              {
                vmulss  xmm2, xmm0, xmm6; durationIntoAnim
                vmovaps xmm0, xmm9; characterSpeed
              }
              *(double *)&_XMM0 = BG_CalculateAnimRateFromCharacterSpeed(*(float *)&_XMM0, v25, *(float *)&_XMM2, suitAnimIndex);
              __asm { vmovss  dword ptr [rsi+30h], xmm0 }
              v50 = v38->latestSnapshotTime;
            }
LABEL_69:
            v62 = v158;
            v63 = v154;
            _RSI->oldFrameSnapshotTime = v50;
            BGMovingPlatformPlayerAnim::PlayerAnimCachePosition(&_RSI->movingPlatformPlayerAnim, v63, _RSI, v62, v155);
          }
          if ( (_RSI->animationNumber & 0xFFFFEFFF) >= v19->animationCount )
          {
            LODWORD(rate) = v19->animationCount;
            LODWORD(goalTime) = _RSI->animationNumber & 0xFFFFEFFF;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7106, ASSERT_TYPE_ASSERT, "(unsigned)( (lf->animationNumber & ~(1<<(13-1))) ) < (unsigned)( scriptData->animationCount )", "(lf->animationNumber & ~ANIM_TOGGLEBIT) doesn't index scriptData->animationCount\n\t%i not in [0, %i)", goalTime, rate) )
              __debugbreak();
          }
          animationNumber = _RSI->animationNumber;
          __asm
          {
            vmovaps [rsp+198h+var_A8], xmm11
            vmovaps [rsp+198h+var_B8], xmm12
          }
          v65 = (unsigned __int64)&v19->animations[animationNumber & 0xFFFFFFFFFFFFEFFFui64];
          if ( animationNumber )
          {
            v66 = animationNumber & 0xFFFFEFFF;
            if ( !*(_WORD *)(v65 + 90) )
            {
              __asm { vmovss  xmm6, dword ptr [rsi+30h] }
              XAnimIndexForCharacterInternal = BG_GetXAnimIndexForCharacterInternal(ci, v19, v66);
              v104 = tree;
              __asm { vmovss  dword ptr [rsp+198h+fmt], xmm6 }
              XAnimSetAnimRate(tree, 0, XANIM_SUBTREE_DEFAULT, XAnimIndexForCharacterInternal, fmtf);
LABEL_103:
              __asm
              {
                vmovaps xmm13, [rsp+198h+var_C8]
                vmovaps xmm12, [rsp+198h+var_B8]
                vmovaps xmm11, [rsp+198h+var_A8]
                vmovaps xmm10, [rsp+198h+var_98]
                vmovaps xmm9, [rsp+198h+var_88]
              }
              if ( (_BYTE)v156 )
              {
                __asm { vmovss  xmm6, [rsp+198h+animTime] }
                v113 = BG_GetXAnimIndexForCharacterInternal(ci, v19, _RSI->animationNumber & 0xFFFFEFFF);
                __asm { vmovss  dword ptr [rsp+198h+fmt], xmm6 }
                XAnimSetTime(v104, 0, XANIM_SUBTREE_DEFAULT, v113, fmtg);
              }
              v114 = DVARINT_xanim_debug;
              if ( !DVARINT_xanim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debug") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v114);
              if ( v114->current.integer >= 3 && Sys_IsMainThread() && _RSI == &ci->legs )
              {
                v115 = BG_GetXAnimIndex(v19, v25);
                *(double *)&_XMM0 = XAnimGetRate(v104, 0, XANIM_SUBTREE_DEFAULT, v115);
                __asm { vcvtss2sd xmm8, xmm0, xmm0 }
                v117 = BG_GetXAnimIndex(v19, v25);
                v118 = v104->anims;
                v119 = v117;
                v120 = BG_GetXAnimIndex(v19, v25);
                *(double *)&_XMM0 = XAnimGetTime(v104, 0, XANIM_SUBTREE_DEFAULT, v120);
                __asm { vmovaps xmm6, xmm0 }
                *(double *)&_XMM0 = XAnimGetLength(v118, v119);
                __asm
                {
                  vmulss  xmm1, xmm0, xmm6
                  vcvtss2sd xmm7, xmm1, xmm1
                }
                v124 = BG_GetXAnimIndex(v19, v25);
                *(double *)&_XMM0 = XAnimGetTime(v104, 0, XANIM_SUBTREE_DEFAULT, v124);
                __asm { vcvtss2sd xmm6, xmm0, xmm0 }
                v126 = SL_ConvertToString(v19->animations[v160 / 0x68].animName);
                __asm
                {
                  vmovsd  qword ptr [rsp+198h+notifyType], xmm8
                  vmovsd  qword ptr [rsp+198h+notifyName], xmm7
                  vmovsd  qword ptr [rsp+198h+rate], xmm6
                }
                LODWORD(fmt) = v154->number;
                Com_Printf(19, "%s:%i:e%i: %s (%.3f) [%.2fs] r%.2f\n", "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7209i64, fmt, v126, rated, notifyNamea, notifyType);
              }
              __asm
              {
                vmovaps xmm7, [rsp+198h+var_68]
                vmovaps xmm6, [rsp+198h+var_58]
                vmovaps xmm8, [rsp+198h+var_78]
              }
              goto LABEL_113;
            }
            v67 = BG_GetXAnimIndexForCharacterInternal(ci, v19, v66);
            v68 = *(unsigned __int16 *)(v65 + 90);
            LODWORD(v155) = v67;
            v69 = v67;
            v70 = BG_GetXAnimIndexForCharacterInternal(ci, v19, v68);
            v71 = *(unsigned __int16 *)(v65 + 90);
            animationCount = v19->animationCount;
            chosenAnimIndex = v70;
            if ( (v71 & 0xEFFFu) >= animationCount )
            {
              LODWORD(rate) = animationCount;
              LODWORD(goalTime) = v71 & 0xFFFFEFFF;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7122, ASSERT_TYPE_ASSERT, "(unsigned)( (currentAnim->slowAnimIndex & ~(1<<(13-1))) ) < (unsigned)( scriptData->animationCount )", "(currentAnim->slowAnimIndex & ~ANIM_TOGGLEBIT) doesn't index scriptData->animationCount\n\t%i not in [0, %i)", goalTime, rate) )
                __debugbreak();
            }
            if ( !&v19->animations[*(_WORD *)(v65 + 90) & 0xEFFF] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7124, ASSERT_TYPE_ASSERT, "(slowAnim)", (const char *)&queryFormat, "slowAnim") )
              __debugbreak();
            __asm
            {
              vmovss  xmm9, cs:__real@3f800000
              vmovss  xmm0, dword ptr [rsi+30h]; val
              vmovaps xmm2, xmm9; max
              vxorps  xmm1, xmm1, xmm1; min
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vmovaps xmm10, xmm0
              vsubss  xmm11, xmm9, xmm0
            }
            *(double *)&_XMM0 = XAnimGetTime(tree, 0, XANIM_SUBTREE_DEFAULT, v69);
            __asm { vmovaps xmm12, xmm0 }
            if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5168, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
              __debugbreak();
            movetype = BG_AnimationMP_GetAnimationForIndex(v66, suitAnimIndex)->movetype;
            if ( Com_BitCheckAssert(movetype, 10, 32) || Com_BitCheckAssert(movetype, 11, 32) )
              goto LABEL_95;
            if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5144, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
              __debugbreak();
            v83 = BG_AnimationMP_GetAnimationForIndex(v66, suitAnimIndex)->movetype;
            if ( Com_BitCheckAssert(v83, 18, 32) || Com_BitCheckAssert(v83, 19, 32) )
            {
LABEL_95:
              __asm
              {
                vxorps  xmm5, xmm5, xmm5
                vcvtsi2ss xmm5, xmm5, eax
                vxorps  xmm4, xmm4, xmm4
                vcvtsi2ss xmm4, xmm4, eax
                vmulss  xmm1, xmm4, xmm10
                vmulss  xmm0, xmm5, xmm11
                vaddss  xmm2, xmm1, xmm0
                vdivss  xmm3, xmm9, xmm2
                vmulss  xmm6, xmm3, xmm4
                vmulss  xmm7, xmm3, xmm5
              }
            }
            else
            {
              if ( !*(_WORD *)(v65 + 84) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7136, ASSERT_TYPE_ASSERT, "(currentAnim->duration != 0)", (const char *)&queryFormat, "currentAnim->duration != 0") )
                __debugbreak();
              __asm
              {
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2ss xmm1, xmm1, eax
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vdivss  xmm7, xmm1, xmm0
                vmovaps xmm6, xmm9
              }
            }
            DObj = BG_GetDObj(bgStatic, v154->number);
            if ( DObj )
            {
              __asm { vcomiss xmm10, xmm11 }
              if ( v157->anim_user )
                v97 = *(_BYTE *)(v65 + 93);
              else
                v97 = *(_BYTE *)(v65 + 94);
              v98 = v97;
              __asm
              {
                vmovss  xmm1, dword ptr [rsi+30h]
                vcomiss xmm1, xmm9
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, dword ptr [rsi+20h]
                vmulss  xmm8, xmm0, xmm13
                vmovss  dword ptr [rsp+198h+fmt], xmm6
              }
              XAnimSetAnimRate(tree, 0, XANIM_SUBTREE_DEFAULT, (unsigned int)v155, fmta);
              __asm { vmovss  dword ptr [rsp+198h+fmt], xmm7 }
              XAnimSetAnimRate(tree, 0, XANIM_SUBTREE_DEFAULT, chosenAnimIndex, fmtb);
              __asm
              {
                vmovss  [rsp+198h+rate], xmm6
                vmaxss  xmm0, xmm10, xmm13
                vmovss  [rsp+198h+goalTime], xmm8
                vmovss  dword ptr [rsp+198h+fmt], xmm0
              }
              XAnimSetGoalWeight(DObj, 0, XANIM_SUBTREE_DEFAULT, (unsigned int)v155, fmtc, goalTimea, rateb, (scr_string_t)0, v98, 0, LINEAR, NULL);
              __asm
              {
                vmovss  [rsp+198h+rate], xmm7
                vmaxss  xmm0, xmm11, xmm13
                vmovss  [rsp+198h+goalTime], xmm8
                vmovss  dword ptr [rsp+198h+fmt], xmm0
              }
              XAnimSetGoalWeight(DObj, 0, XANIM_SUBTREE_DEFAULT, chosenAnimIndex, fmtd, goalTimeb, ratec, (scr_string_t)0, 0, 0, LINEAR, NULL);
              v104 = tree;
              __asm { vmovss  dword ptr [rsp+198h+fmt], xmm12 }
              XAnimSetTime(tree, 0, XANIM_SUBTREE_DEFAULT, chosenAnimIndex, fmte);
              goto LABEL_103;
            }
          }
          v104 = tree;
          goto LABEL_103;
        }
      }
    }
    _RSI->animSpeedScale = 1.0;
    if ( BG_IsFastDurationPerkActive(v25, suitAnimIndex, &ci->perks) )
    {
      if ( !v27->fastDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7096, ASSERT_TYPE_ASSERT, "(anim->fastDuration > 0)", (const char *)&queryFormat, "anim->fastDuration > 0") )
        __debugbreak();
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm1, xmm1, xmm0
        vmovss  dword ptr [rsi+30h], xmm1
      }
    }
    v50 = v157->latestSnapshotTime;
    goto LABEL_69;
  }
LABEL_113:
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
  __int64 v10; 

  v3 = condition;
  _RBP = value;
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3793, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3794, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  BG_CheckThread();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3800, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x3F )
  {
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3801, ASSERT_TYPE_ASSERT, "(unsigned)( condition ) < (unsigned)( NUM_ANIM_CONDITIONS )", "condition doesn't index NUM_ANIM_CONDITIONS\n\t%i not in [0, %i)", v10, 63) )
      __debugbreak();
  }
  _R14 = ci->clientConditions[v3];
  if ( !BG_CheckEqualBits(_R14, _RBP) && G_IsServerGameSystem(ci->entityNum) )
  {
    if ( BG_GetAnimConditionType(v3) )
      ConditionValue = BG_GetConditionValue(ci, v3);
    else
      ConditionValue = BG_GetConditionBit(ci, v3);
    ConditionString = BG_GetConditionString(v3, ConditionValue);
    Com_Printf(19, "condition: %s: %s\n", s_animConditionsStr[v3].string, ConditionString);
  }
  if ( PlayerASM_IsEnabled() && memcmp_0(ci->clientConditions[v3], _RBP, 0x20ui64) )
    Com_BitSetAssert(ci->dirtyConditions, v3, 32);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0]
    vmovups ymmword ptr [r14], ymm0
  }
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
  int v7; 
  __int64 v8; 
  const char *ConditionString; 
  __int64 v11; 
  __int64 v12; 
  _BYTE Buf2[32]; 

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
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3841, ASSERT_TYPE_ASSERT, "(unsigned)( value ) < (unsigned)( (8 * (8 * sizeof( unsigned int ))) )", "value doesn't index ANIMTYPES_PER_CONDITION\n\t%i not in [0, %i)", v11, 256) )
      __debugbreak();
  }
  _RDI = ci->clientConditions[v5];
  if ( (characterInfo_t *)((char *)ci + 32 * v5) == (characterInfo_t *)-2932i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v7 = 1 << (v4 & 0x1F);
  v8 = v4 >> 5;
  if ( (v7 & _RDI[v8]) == 0 && G_IsServerGameSystem(ci->entityNum) )
  {
    ConditionString = BG_GetConditionString(v5, v4);
    Com_Printf(19, "condition: %s: %s\n", s_animConditionsStr[v5].string, ConditionString);
  }
  memset(Buf2, 0, sizeof(Buf2));
  if ( (unsigned int)v4 >= 0x100 )
  {
    LODWORD(v12) = 256;
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  *(_DWORD *)&Buf2[v8 * 4] |= v7;
  if ( PlayerASM_IsEnabled() && memcmp_0(ci->clientConditions[v5], Buf2, 0x20ui64) )
    Com_BitSetAssert(ci->dirtyConditions, v5, 32);
  __asm
  {
    vmovups ymm0, [rsp+0A8h+Buf2]
    vmovups ymmword ptr [rdi], ymm0
  }
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
  characterInfo_t *v15; 
  int v16; 
  BgStatic *ActiveStatics; 
  __int64 v19; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  unsigned int number; 
  DObj *ClientDObj; 
  DObj *v23; 
  bool v24; 
  const PlayerAnimEntry *animation; 
  unsigned int v26; 
  PlayerAnimScript *v27; 
  XAnimTree *pXAnimTree; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  __int64 v34; 
  int IsCrouchingAnim; 
  int IsProneAnim; 
  BOOL v37; 
  lerpFrame_t *v38; 
  char v39; 
  int v40; 
  char v43; 
  char v44; 
  BOOL v45; 
  int v46; 
  int v47; 
  const PlayerAnimEntry *AnimationForIndex; 
  XAnimTree *v49; 
  SuitAnimType v54; 
  int v55; 
  unsigned __int16 slowAnimIndex; 
  unsigned int v57; 
  XAnimTree *v58; 
  lerpFrame_t *v59; 
  const char *v60; 
  unsigned __int8 v61; 
  int v62; 
  unsigned __int8 v64; 
  unsigned int v65; 
  unsigned __int16 v66; 
  unsigned int v67; 
  unsigned int v68; 
  bool v70; 
  unsigned __int16 v71; 
  const PlayerAnimScript *v72; 
  unsigned int v73; 
  lerpFrame_t *v74; 
  unsigned __int8 v75; 
  SuitAnimType v76; 
  unsigned int v77; 
  unsigned __int16 v78; 
  const PlayerAnimEntry *v79; 
  __int64 v80; 
  __int64 v81; 
  unsigned __int16 v82; 
  unsigned __int8 v83; 
  unsigned int v84; 
  unsigned int v85; 
  int v87; 
  const PlayerAnimEntry *v88; 
  bool v89; 
  unsigned int v91; 
  unsigned int v98; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  float fmtk; 
  float fmtl; 
  float fmtm; 
  float fmtn; 
  float fmto; 
  float fmtp; 
  float fmtq; 
  float fmtr; 
  float fmts; 
  __int64 forceBlendTime; 
  int forceBlendTimea; 
  int forceBlendTimeb; 
  int forceBlendTimec; 
  int forceBlendTimed; 
  int forceBlendTimee; 
  int forceBlendTimef; 
  int forceBlendTimeg; 
  int forceBlendTimeh; 
  int forceBlendTimei; 
  int forceBlendTimej; 
  int forceBlendTimek; 
  int forceBlendTimel; 
  int forceBlendTimem; 
  int forceBlendTimen; 
  int forceBlendTimeo; 
  int forceBlendTimep; 
  int forceBlendTimeq; 
  int forceBlendTimer; 
  int forceBlendTimes; 
  int forceBlendTimet; 
  int forceBlendTimeu; 
  int forceBlendTimev; 
  int forceBlendTimew; 
  int forceBlendTimex; 
  int forceBlendTimey; 
  int forceBlendTimez; 
  float objID; 
  float objIDa; 
  float objIDb; 
  float objIDc; 
  float objIDd; 
  float objIDe; 
  float objIDf; 
  float objIDg; 
  float objIDh; 
  float objIDi; 
  float objIDj; 
  float objIDk; 
  float objIDl; 
  float objIDm; 
  float objIDn; 
  float objIDo; 
  float objIDp; 
  float objIDq; 
  float objIDr; 
  float objIDs; 
  float objIDt; 
  float objIDu; 
  float objIDv; 
  float objIDw; 
  float objIDx; 
  float curveID; 
  float curveIDa; 
  float curveIDb; 
  float curveIDc; 
  float curveIDd; 
  float curveIDe; 
  float curveIDf; 
  float curveIDg; 
  float curveIDh; 
  float curveIDi; 
  float curveIDj; 
  float curveIDk; 
  float curveIDl; 
  float curveIDm; 
  float curveIDn; 
  float curveIDo; 
  float curveIDp; 
  float curveIDq; 
  float notifyType; 
  SuitAnimType suitAnimIndex; 
  int animIndex; 
  PlayerAnimScript *scriptData; 
  int XAnimIndexForCharacterInternal; 
  BOOL v201; 
  int v202; 
  int v203; 
  XAnimTree *tree; 
  BOOL v205; 
  BOOL v206; 
  XAnim_s *anims; 
  lerpFrame_t *p_legs; 
  LerpEntityState *p_lerp; 
  char v214; 
  void *retaddr; 
  unsigned int animNuma; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-98h], xmm11
    vxorps  xmm11, xmm11, xmm11
  }
  v15 = ci;
  v16 = -1;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  BG_CheckThread();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5817, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  v19 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5821, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(v15);
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
  v23 = ClientDObj;
  if ( ClientDObj )
  {
    __asm
    {
      vmovaps [rsp+158h+var_48], xmm6
      vmovaps [rsp+158h+var_58], xmm7
      vmovaps [rsp+158h+var_78], xmm9
      vmovaps [rsp+158h+var_88], xmm10
    }
    p_lerp = &es->lerp;
    v24 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Bu);
    animation = lf->animation;
    v206 = v24;
    animIndex = lf->animationNumber;
    lf->animationNumber = newAnimation;
    v26 = newAnimation & 0xFFFFEFFF;
    p_legs = &v15->legs;
    lf->suitAnimIndex = suitAnimIndex;
    animNuma = newAnimation & 0xFFFFEFFF;
    v27 = *(PlayerAnimScript **)(v19 + 8i64 * (int)suitAnimIndex);
    scriptData = v27;
    if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5845, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
      __debugbreak();
    if ( v26 >= v27->animationCount )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F065C0, 1178i64);
    pXAnimTree = v15->pXAnimTree;
    tree = pXAnimTree;
    anims = *(XAnim_s **)(v19 + 32);
    if ( v23->tree != pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5855, ASSERT_TYPE_ASSERT, "(obj->tree == pAnimTree)", (const char *)&queryFormat, "obj->tree == pAnimTree") )
      __debugbreak();
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    if ( !animation && lf == &v15->legs )
    {
      __asm
      {
        vmovss  xmm6, cs:__real@3d4ccccd
        vmovss  dword ptr [rsp+158h+fmt], xmm6
      }
      XAnimClearTreeGoalWeights(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 42), fmt, 1, v23, LINEAR);
      __asm { vmovss  dword ptr [rsp+158h+fmt], xmm6 }
      XAnimClearTreeGoalWeights(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 40), fmta, 1, v23, LINEAR);
      __asm
      {
        vmovss  dword ptr [rsp+158h+objID], xmm7
        vmovss  [rsp+158h+forceBlendTime], xmm8
        vmovss  dword ptr [rsp+158h+fmt], xmm7
      }
      XAnimSetGoalWeight(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 44), fmtb, *(float *)&forceBlendTimea, objID, (scr_string_t)0, 0, 0, LINEAR, NULL);
      v31 = DCONST_DVARBOOL_xanim_ik_disable;
      if ( !DCONST_DVARBOOL_xanim_ik_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_disable") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      if ( !v31->current.enabled )
      {
        __asm
        {
          vmovss  dword ptr [rsp+158h+curveID], xmm7
          vmovss  dword ptr [rsp+158h+objID], xmm7
          vmovss  [rsp+158h+forceBlendTime], xmm7
        }
        XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 96), *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimeb, objIDa, curveID, (scr_string_t)0, 0, 0, LINEAR, NULL);
      }
      v32 = DVARBOOL_xanim_ik_antislide_enable;
      if ( !DVARBOOL_xanim_ik_antislide_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_enable") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      if ( v32->current.enabled )
      {
        __asm
        {
          vmovss  dword ptr [rsp+158h+curveID], xmm7
          vmovss  dword ptr [rsp+158h+objID], xmm7
          vmovss  [rsp+158h+forceBlendTime], xmm7
        }
        XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 98), *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimec, objIDb, curveIDa, (scr_string_t)0, 0, 0, LINEAR, NULL);
      }
      __asm
      {
        vmovss  dword ptr [rsp+158h+curveID], xmm7
        vmovss  dword ptr [rsp+158h+objID], xmm7
        vmovss  [rsp+158h+forceBlendTime], xmm7
      }
      XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 102), *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimed, objIDc, curveIDb, (scr_string_t)0, 0, 0, LINEAR, NULL);
    }
    XAnimIndexForCharacterInternal = BG_GetXAnimIndexForCharacterInternal(v15, scriptData, animIndex);
    v203 = BG_GetXAnimIndexForCharacterInternal(v15, scriptData, v26);
    __asm { vmovss  xmm9, cs:__real@3dcccccd }
    if ( v26 )
    {
      v34 = (__int64)&scriptData->animations[v26];
      if ( lf == &v15->legs && v34 && (*(_BYTE *)(v34 + 16) & 2) != 0 )
      {
        __asm
        {
          vmovss  dword ptr [rsp+158h+curveID], xmm8
          vmovss  dword ptr [rsp+158h+objID], xmm9
          vmovss  [rsp+158h+forceBlendTime], xmm7
        }
        XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 94), *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimee, objIDd, curveIDc, (scr_string_t)0, 0, 0, LINEAR, NULL);
      }
      lf->animation = (const PlayerAnimEntry *)v34;
      lf->animationTime = *(__int16 *)(v34 + 80);
      IsCrouchingAnim = BG_IsCrouchingAnim(animIndex, suitAnimIndex);
      v201 = BG_IsCrouchingAnim(animNuma, suitAnimIndex) == IsCrouchingAnim;
      IsProneAnim = BG_IsProneAnim(animIndex, suitAnimIndex);
      v205 = BG_IsProneAnim(animNuma, suitAnimIndex) == IsProneAnim;
      v37 = BG_IsTransitionalAnim(animNuma, suitAnimIndex) || BG_IsTransitionalAnim(animIndex, suitAnimIndex);
      v38 = &v15->legs;
      if ( lf == &v15->legs && !v37 && (!v201 || !v205) )
        v15->stanceTransitionTime = *(_DWORD *)(v19 + 19528) + 400;
      if ( animation )
      {
        v39 = *(_BYTE *)(v34 + 100);
        if ( v39 )
        {
          if ( v39 == animation->syncGroup )
          {
            v40 = 1;
            v202 = 1;
            goto LABEL_55;
          }
        }
      }
    }
    else
    {
      lf->animationTime = 200;
      v34 = 0i64;
      lf->animation = NULL;
      v38 = &v15->legs;
    }
    v40 = 0;
    v202 = 0;
LABEL_55:
    if ( !animation && lf == v38 )
    {
      lf->animationTime = 0;
      goto LABEL_97;
    }
    if ( !v34 )
      goto LABEL_207;
    if ( lf->animationTime > 0 )
    {
      if ( v40 )
      {
        *(double *)&_XMM0 = XAnimGetTime(tree, 0, XANIM_SUBTREE_DEFAULT, XAnimIndexForCharacterInternal);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = XAnimGetLength(tree->anims, XAnimIndexForCharacterInternal);
        __asm
        {
          vmulss  xmm1, xmm0, xmm6
          vcomiss xmm1, cs:__real@3e2e147b
        }
        if ( !(v43 | v44) )
          v16 = 120;
      }
      goto LABEL_87;
    }
    *(float *)&_XMM0 = BG_Animation_GetAnimEntryMoveSpeed((const PlayerAnimEntry *)v34);
    __asm { vucomiss xmm0, xmm8 }
    if ( v44 )
    {
LABEL_207:
      if ( !animation )
        goto LABEL_86;
      *(float *)&_XMM0 = BG_Animation_GetAnimEntryMoveSpeed(animation);
      __asm { vucomiss xmm0, xmm8 }
      v16 = 250;
      if ( v44 )
LABEL_86:
        v16 = 170;
      goto LABEL_87;
    }
    v16 = 300;
    v45 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 3u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 4u) || BG_IsAdsEntity(es);
    if ( animation )
    {
      if ( BG_IsCrouchingAnim(animNuma, suitAnimIndex) && BG_IsCrouchingAnim(animIndex, suitAnimIndex) )
      {
        v16 = 250;
LABEL_87:
        v46 = v15->stanceTransitionTime - *(_DWORD *)(v19 + 19528);
        if ( v46 <= v16 )
          v46 = v16;
        v47 = v46;
        if ( v34 )
        {
          if ( animation )
          {
            if ( (*(_DWORD *)(v34 + 16) & 0x80000) != 0 && (animation->flags & 0x100000) != 0 )
            {
              AnimationForIndex = BG_AnimationMP_GetAnimationForIndex(v15->playerAnim.torsoAnim & 0xFFFFEFFF, suitAnimIndex);
              v47 = v46;
              if ( (AnimationForIndex->flags & 8) != 0 )
                v47 = 30;
            }
          }
        }
        if ( lf->animationTime < v47 )
          lf->animationTime = v47;
        if ( !v34 )
          goto LABEL_104;
        *(float *)&_XMM0 = BG_Animation_GetAnimEntryMoveSpeed((const PlayerAnimEntry *)v34);
        __asm { vucomiss xmm0, xmm8 }
        if ( v44 )
          goto LABEL_104;
        if ( !XAnimIsLooped(anims, v203) )
          goto LABEL_104;
        if ( !animation )
          goto LABEL_104;
        *(float *)&_XMM0 = BG_Animation_GetAnimEntryMoveSpeed(animation);
        __asm { vucomiss xmm0, xmm8 }
        if ( v44 )
          goto LABEL_104;
LABEL_97:
        if ( XAnimIsLooped(anims, XAnimIndexForCharacterInternal) )
        {
          v49 = tree;
          *(double *)&_XMM0 = XAnimGetTime(tree, 0, XANIM_SUBTREE_DEFAULT, XAnimIndexForCharacterInternal);
          __asm { vmovaps xmm11, xmm0 }
        }
        else
        {
LABEL_104:
          v49 = tree;
        }
        if ( v202 )
        {
          *(double *)&_XMM0 = XAnimGetTime(v49, 0, XANIM_SUBTREE_DEFAULT, XAnimIndexForCharacterInternal);
          __asm { vmovaps xmm11, xmm0 }
        }
        __asm
        {
          vmovss  xmm10, cs:__real@3a83126f
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [r14+20h]
          vmulss  xmm6, xmm0, xmm10
        }
        if ( animation )
        {
          if ( (animation->flags & 0x20000000) != 0 )
          {
            *(double *)&_XMM0 = XAnimGetGoalWeight(v49, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 92));
            __asm { vucomiss xmm0, xmm8 }
            if ( !v44 )
            {
              __asm { vmovss  dword ptr [rsp+158h+fmt], xmm6 }
              XAnimClearTreeGoalWeights(v49, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 92), fmtc, 1, v23, LINEAR);
            }
          }
          if ( lf == &v15->legs && (animation->flags & 2) != 0 && (*(_BYTE *)(v34 + 16) & 2) == 0 )
          {
            __asm
            {
              vmovss  dword ptr [rsp+158h+curveID], xmm8
              vmovss  dword ptr [rsp+158h+objID], xmm9
              vmovss  [rsp+158h+forceBlendTime], xmm8
            }
            XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 94), *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimef, objIDe, curveIDd, (scr_string_t)0, 0, 0, LINEAR, NULL);
          }
          BG_ClearLegsAnimTree(v23, v15, *(unsigned __int16 *)(v19 + 42));
          __asm { vmovss  dword ptr [rsp+158h+fmt], xmm6 }
          XAnimClearTreeGoalWeights(v49, 0, XANIM_SUBTREE_DEFAULT, XAnimIndexForCharacterInternal, fmtd, 1, v23, LINEAR);
          v54 = suitAnimIndex;
          v55 = animNuma;
          if ( BG_IsAdditiveTorsoAnim(animNuma, suitAnimIndex) )
          {
            __asm
            {
              vmovss  dword ptr [rsp+158h+curveID], xmm7
              vmovss  dword ptr [rsp+158h+objID], xmm6
              vmovss  [rsp+158h+forceBlendTime], xmm8
            }
            XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 40), *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimeg, objIDf, curveIDe, (scr_string_t)0, 0, 0, LINEAR, NULL);
          }
          slowAnimIndex = animation->slowAnimIndex;
          if ( slowAnimIndex )
          {
            v57 = BG_GetXAnimIndexForCharacterInternal(v15, scriptData, slowAnimIndex);
            v58 = tree;
            __asm { vmovss  dword ptr [rsp+158h+fmt], xmm6 }
            XAnimClearTreeGoalWeights(tree, 0, XANIM_SUBTREE_DEFAULT, v57, fmte, 1, v23, LINEAR);
            goto LABEL_121;
          }
        }
        else
        {
          v54 = suitAnimIndex;
          v55 = animNuma;
        }
        v58 = tree;
LABEL_121:
        v59 = &v15->legs;
        if ( !v55 )
        {
          if ( lf != v59 )
          {
            __asm
            {
              vmovss  dword ptr [rsp+158h+curveID], xmm7
              vmovss  dword ptr [rsp+158h+objID], xmm6
              vmovss  [rsp+158h+forceBlendTime], xmm8
            }
            XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 40), *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimew, objIDu, curveIDo, (scr_string_t)0, 0, 0, LINEAR, NULL);
            __asm
            {
              vmovss  dword ptr [rsp+158h+curveID], xmm7
              vmovss  dword ptr [rsp+158h+objID], xmm6
              vmovss  [rsp+158h+forceBlendTime], xmm8
            }
            XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 88), *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimex, objIDv, curveIDp, (scr_string_t)0, 0, 0, LINEAR, NULL);
            __asm
            {
              vmovss  dword ptr [rsp+158h+curveID], xmm7
              vmovss  dword ptr [rsp+158h+objID], xmm6
              vmovss  [rsp+158h+forceBlendTime], xmm7
            }
            XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 42), *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimey, objIDw, curveIDq, (scr_string_t)0, 0, 0, LINEAR, NULL);
            if ( scriptData->animations[v15->playerAnim.legsAnim & 0xFFFFEFFF].additiveAdjustAnim )
            {
              __asm
              {
                vmovss  dword ptr [rsp+158h+objID], xmm7
                vmovss  [rsp+158h+forceBlendTime], xmm6
                vmovss  dword ptr [rsp+158h+fmt], xmm7
              }
              XAnimSetGoalWeight(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 86), fmts, *(float *)&forceBlendTimez, objIDx, (scr_string_t)0, 0, 0, LINEAR, NULL);
            }
          }
          goto LABEL_203;
        }
        if ( lf != v59 && v15->leftHandGun )
        {
          v15->leftHandGun = 0;
          v15->dobjDirty = 1;
        }
        if ( *(char *)(v34 + 16) >= 0 )
        {
          *(float *)&_XMM0 = BG_Animation_GetAnimEntryMoveSpeed((const PlayerAnimEntry *)v34);
          __asm { vucomiss xmm0, xmm8 }
          if ( !v44 )
          {
            *(double *)&_XMM0 = XAnimGetWeight(v58, 0, XANIM_SUBTREE_DEFAULT, v203);
            __asm { vucomiss xmm0, xmm8 }
            if ( v44 )
              goto LABEL_143;
          }
          if ( (*(_DWORD *)(v34 + 16) & 0x200000) != 0 || v202 )
            goto LABEL_143;
          if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 5010, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
            __debugbreak();
          if ( (BG_AnimationMP_GetAnimationForIndex(v55, v54)->flags & 0x20000) != 0 )
LABEL_143:
            v62 = 1;
          else
            v62 = 0;
          __asm { vmovaps xmm9, xmm7 }
          if ( *(_DWORD *)(v19 + 19544) )
            v64 = *(_BYTE *)(v34 + 93);
          else
            v64 = *(_BYTE *)(v34 + 94);
          v65 = v64;
          v66 = *(_WORD *)(v34 + 90);
          if ( v66 )
          {
            v67 = *(unsigned __int16 *)(v19 + 44);
            __asm { vmovaps xmm9, xmm10 }
            v68 = BG_GetXAnimIndexForCharacterInternal(ci, scriptData, v66);
            __asm
            {
              vmovss  xmm3, cs:__real@3f7fbe77; goalWeight
              vmovss  [rsp+158h+forceBlendTime], xmm7
              vmovss  dword ptr [rsp+158h+fmt], xmm6
            }
            XAnimSetCompleteGoalWeightRel(v23, v68, v67, *(float *)&_XMM3, fmtg, *(float *)&forceBlendTimei, (scr_string_t)0, v65, lf != p_legs);
          }
          v70 = lf != p_legs;
          if ( lf == p_legs )
          {
            if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 4903, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
              __debugbreak();
            if ( (BG_AnimationMP_GetAnimationForIndex(animNuma, suitAnimIndex)->flags & 0x18000000) != 0 )
              v70 = 1;
          }
          __asm
          {
            vmovss  dword ptr [rsp+158h+curveID], xmm7
            vmovss  dword ptr [rsp+158h+objID], xmm6
            vmovss  [rsp+158h+forceBlendTime], xmm9
          }
          XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, v203, *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimej, objIDi, curveIDh, (scr_string_t)0, v65, v70, LINEAR, NULL);
          if ( v62 )
          {
            __asm { vmovss  dword ptr [rsp+158h+fmt], xmm11 }
            XAnimSetTime(v58, 0, XANIM_SUBTREE_DEFAULT, v203, fmth);
            v71 = *(_WORD *)(v34 + 90);
            v15 = ci;
            if ( v71 )
            {
              v72 = scriptData;
              v73 = BG_GetXAnimIndexForCharacterInternal(ci, scriptData, v71);
              __asm { vmovss  dword ptr [rsp+158h+fmt], xmm11 }
              XAnimSetTime(v58, 0, XANIM_SUBTREE_DEFAULT, v73, fmti);
LABEL_160:
              v74 = &v15->legs;
              if ( lf == &v15->legs )
              {
                __asm { vmovss  [rsp+158h+forceBlendTime], xmm6 }
                if ( !BG_GameInterface_HandleAimSet(v15, lf, v23, v58, v72, *(const float *)&forceBlendTimem) )
                {
                  v79 = lf->animation;
                  if ( v79 && v79->aimSet )
                  {
                    v80 = 64i64;
                    v81 = 46i64;
                    if ( (v72->animations[v15->playerAnim.legsAnim & 0xFFFFEFFF].flags & 0x60) != 0 )
                      v80 = 46i64;
                    if ( (v72->animations[v15->playerAnim.legsAnim & 0xFFFFEFFF].flags & 0x60) != 0 )
                      v81 = 64i64;
                    __asm
                    {
                      vmovss  dword ptr [rsp+158h+objID], xmm8
                      vmovss  [rsp+158h+forceBlendTime], xmm6
                      vmovss  dword ptr [rsp+158h+fmt], xmm7
                    }
                    XAnimSetGoalWeight(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v81 + v19), fmtj, *(float *)&forceBlendTimen, objIDl, (scr_string_t)0, 0, 0, LINEAR, NULL);
                    __asm
                    {
                      vmovss  dword ptr [rsp+158h+objID], xmm8
                      vmovss  [rsp+158h+forceBlendTime], xmm6
                      vmovss  dword ptr [rsp+158h+fmt], xmm8
                    }
                    XAnimSetGoalWeight(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v80 + v19), fmtk, *(float *)&forceBlendTimeo, objIDm, (scr_string_t)0, 0, 0, LINEAR, NULL);
                    __asm { vmovss  dword ptr [rsp+158h+fmt], xmm6 }
                    XAnimClearTreeGoalWeights(v58, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v80 + v19), fmtl, 1, NULL, LINEAR);
                    v74 = &v15->legs;
                  }
                  else
                  {
                    __asm
                    {
                      vmovss  dword ptr [rsp+158h+objID], xmm8
                      vmovss  [rsp+158h+forceBlendTime], xmm6
                      vmovss  dword ptr [rsp+158h+fmt], xmm8
                    }
                    XAnimSetGoalWeight(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 46), fmtm, *(float *)&forceBlendTimep, objIDn, (scr_string_t)0, 0, 0, LINEAR, NULL);
                    __asm
                    {
                      vmovss  dword ptr [rsp+158h+objID], xmm8
                      vmovss  [rsp+158h+forceBlendTime], xmm6
                      vmovss  dword ptr [rsp+158h+fmt], xmm8
                    }
                    XAnimSetGoalWeight(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 64), fmtn, *(float *)&forceBlendTimeq, objIDo, (scr_string_t)0, 0, 0, LINEAR, NULL);
                    __asm { vmovss  dword ptr [rsp+158h+fmt], xmm6 }
                    XAnimClearTreeGoalWeights(v58, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 46), fmto, 1, NULL, LINEAR);
                    __asm { vmovss  dword ptr [rsp+158h+fmt], xmm6 }
                    XAnimClearTreeGoalWeights(v58, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 64), fmtp, 1, NULL, LINEAR);
                  }
                }
                v76 = suitAnimIndex;
              }
              else
              {
                if ( *(_DWORD *)(v19 + 19544) )
                  v75 = *(_BYTE *)(v34 + 93);
                else
                  v75 = *(_BYTE *)(v34 + 94);
                v76 = suitAnimIndex;
                v77 = v75;
                if ( BG_IsAdditiveTorsoAnim(animNuma, suitAnimIndex) )
                  v78 = *(_WORD *)(v19 + 88);
                else
                  v78 = *(_WORD *)(v19 + 40);
                __asm
                {
                  vmovss  dword ptr [rsp+158h+curveID], xmm7
                  vmovss  dword ptr [rsp+158h+objID], xmm6
                  vmovss  [rsp+158h+forceBlendTime], xmm7
                }
                XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, v78, *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimek, objIDj, curveIDi, (scr_string_t)0, v77, 0, LINEAR, NULL);
                __asm
                {
                  vmovss  dword ptr [rsp+158h+curveID], xmm7
                  vmovss  dword ptr [rsp+158h+objID], xmm6
                  vmovss  [rsp+158h+forceBlendTime], xmm7
                }
                XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 42), *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimel, objIDk, curveIDj, (scr_string_t)0, v77, 0, LINEAR, NULL);
                v74 = &v15->legs;
              }
              v82 = *(_WORD *)(v34 + 88);
              if ( v82 )
              {
                if ( *(_DWORD *)(v19 + 19544) )
                  v83 = *(_BYTE *)(v34 + 93);
                else
                  v83 = *(_BYTE *)(v34 + 94);
                v84 = v83;
                v85 = BG_GetXAnimIndexForCharacterInternal(v15, scriptData, v82);
                __asm { vmovss  dword ptr [rsp+158h+fmt], xmm6 }
                XAnimClearChildGoalWeights(v58, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 86), fmtq, LINEAR);
                _ER14 = 0;
                __asm
                {
                  vmovss  dword ptr [rsp+158h+curveID], xmm7
                  vmovss  dword ptr [rsp+158h+objID], xmm6
                  vmovss  [rsp+158h+forceBlendTime], xmm7
                }
                XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, v85, *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimer, objIDp, curveIDk, (scr_string_t)0, v84, 0, LINEAR, NULL);
                v87 = v15->playerAnim.torsoAnim & 0xFFFFEFFF;
                v88 = BG_AnimationMP_GetAnimationForIndex(v87, v76);
                v89 = v88 && (v88->flags & 0x1000000) != 0;
                LOBYTE(_EAX) = !v87 || !v89;
                v91 = 0;
                if ( (_BYTE)_EAX )
                  v91 = v84;
                _EAX = (unsigned __int8)_EAX;
                __asm
                {
                  vmovd   xmm0, eax
                  vmovss  dword ptr [rsp+158h+curveID], xmm7
                  vmovd   xmm1, r14d
                  vpcmpeqd xmm2, xmm0, xmm1
                  vblendvps xmm0, xmm7, xmm8, xmm2
                  vmovss  dword ptr [rsp+158h+objID], xmm6
                  vmovss  [rsp+158h+forceBlendTime], xmm0
                }
                XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 86), *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimes, objIDq, curveIDl, (scr_string_t)0, v91, 0, LINEAR, NULL);
              }
              else
              {
                if ( *(_WORD *)(v34 + 82) != 0xFFFF )
                {
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, eax
                    vmulss  xmm6, xmm0, xmm10
                  }
                }
                if ( lf != v74 || (*(_QWORD *)(v34 + 16) & 0x300000i64) != 0 )
                {
                  if ( (*(_QWORD *)(v34 + 16) & 0x1000000i64) != 0 )
                  {
                    __asm
                    {
                      vmovss  dword ptr [rsp+158h+objID], xmm8
                      vmovss  [rsp+158h+forceBlendTime], xmm6
                      vmovss  dword ptr [rsp+158h+fmt], xmm8
                    }
                    XAnimSetGoalWeight(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 86), fmtr, *(float *)&forceBlendTimev, objIDt, (scr_string_t)0, 0, 0, LINEAR, NULL);
                  }
                }
                else
                {
                  v98 = BG_GetXAnimIndexForCharacterInternal(v15, scriptData, 0);
                  __asm
                  {
                    vmovss  dword ptr [rsp+158h+curveID], xmm7
                    vmovss  dword ptr [rsp+158h+objID], xmm6
                    vmovss  [rsp+158h+forceBlendTime], xmm8
                  }
                  XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 86), *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimet, objIDr, curveIDm, (scr_string_t)0, 0, 0, LINEAR, NULL);
                  __asm
                  {
                    vmovss  dword ptr [rsp+158h+curveID], xmm7
                    vmovss  dword ptr [rsp+158h+objID], xmm6
                    vmovss  [rsp+158h+forceBlendTime], xmm8
                  }
                  XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, v98, *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimeu, objIDs, curveIDn, (scr_string_t)0, 0, 0, LINEAR, NULL);
                }
              }
LABEL_203:
              __asm
              {
                vmovaps xmm9, [rsp+158h+var_78]
                vmovaps xmm7, [rsp+158h+var_58]
                vmovaps xmm6, [rsp+158h+var_48]
                vmovaps xmm10, [rsp+158h+var_88]
              }
              goto LABEL_204;
            }
          }
          else
          {
            v15 = ci;
          }
        }
        else
        {
          if ( XAnimIsLooped(anims, v203) )
          {
            v60 = SL_ConvertToString((scr_string_t)*(_DWORD *)(v34 + 4));
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F06668, 1179i64, v60);
          }
          if ( v206 )
          {
            if ( *(_DWORD *)(v19 + 19544) )
              v61 = *(_BYTE *)(v34 + 93);
            else
              v61 = *(_BYTE *)(v34 + 94);
            __asm
            {
              vmovss  dword ptr [rsp+158h+curveID], xmm7
              vmovss  dword ptr [rsp+158h+objID], xmm6
              vmovss  [rsp+158h+forceBlendTime], xmm7
            }
            XAnimSetCompleteGoalWeightRel(v23, 0, XANIM_SUBTREE_DEFAULT, v203, *(unsigned __int16 *)(v19 + 44), *(float *)&forceBlendTimeh, objIDg, curveIDf, (scr_string_t)0, v61, 0, LINEAR, NULL);
          }
          else
          {
            __asm
            {
              vmovss  [rsp+158h+notifyType], xmm7
              vmovss  dword ptr [rsp+158h+curveID], xmm8
              vmovss  dword ptr [rsp+158h+objID], xmm7
            }
            XAnimSetGoalWeightKnobAll(v23, 0, XANIM_SUBTREE_DEFAULT, v203, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v19 + 44), objIDh, curveIDg, notifyType, (scr_string_t)0, 0, LINEAR);
            __asm { vmovss  dword ptr [rsp+158h+fmt], xmm7 }
            XAnimSetTime(v58, 0, XANIM_SUBTREE_DEFAULT, v203, fmtf);
          }
        }
        v72 = scriptData;
        goto LABEL_160;
      }
      if ( BG_IsWalkAnim(animNuma, suitAnimIndex) && BG_IsWalkAnim(animIndex, suitAnimIndex) )
      {
        v16 = 250;
        goto LABEL_87;
      }
      if ( BG_IsProneAnim(animNuma, suitAnimIndex) && BG_IsProneAnim(animIndex, suitAnimIndex) )
      {
        v16 = 250;
        goto LABEL_87;
      }
    }
    if ( lf == &v15->legs )
    {
      if ( animation )
      {
        *(float *)&_XMM0 = BG_Animation_GetAnimEntryMoveSpeed(animation);
        __asm { vucomiss xmm0, xmm8 }
        if ( !v44 )
        {
          if ( v45 )
            v16 = 250;
        }
      }
    }
    goto LABEL_87;
  }
LABEL_204:
  _R11 = &v214;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
BG_SetupAimAnimBranch
==============
*/
void BG_SetupAimAnimBranch(DObj *obj, characterInfo_t *ci, int index, const aimAnimSet_t *knobAimAnimSet, const aimAnimValues_t *animAnimValues)
{
  __int64 v14; 
  const PlayerAnimEntry *animation; 
  __int64 v17; 
  XAnimTree *pXAnimTree; 
  const PlayerAnimScript *v19; 
  char v20; 
  BgStatic *ActiveStatics; 
  __int64 v22; 
  __int64 v23; 
  unsigned __int16 v24; 
  unsigned __int16 v25; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int XAnimIndexForCharacterInternal; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float curveID; 
  float curveIDa; 
  float curveIDb; 
  float v51; 
  float v52; 
  float v53; 
  char v55; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  v14 = index;
  if ( !knobAimAnimSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7424, ASSERT_TYPE_ASSERT, "(knobAimAnimSet)", (const char *)&queryFormat, "knobAimAnimSet") )
    __debugbreak();
  _RBP = animAnimValues;
  if ( !animAnimValues && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7425, ASSERT_TYPE_ASSERT, "(animAnimValues)", (const char *)&queryFormat, "animAnimValues") )
    __debugbreak();
  if ( (unsigned int)v14 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7426, ASSERT_TYPE_ASSERT, "(index >=0 && index < 8)", (const char *)&queryFormat, "index >=0 && index < 8") )
    __debugbreak();
  animation = ci->legs.animation;
  v17 = 0i64;
  pXAnimTree = ci->pXAnimTree;
  v19 = NULL;
  if ( animation && animation->aimSet )
  {
    v20 = 1;
    ActiveStatics = BgStatic::GetActiveStatics();
    v22 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7445, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    v19 = *(const PlayerAnimScript **)(v22 + 8i64 * (int)ci->legs.suitAnimIndex);
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7447, ASSERT_TYPE_ASSERT, "(scriptData)", (const char *)&queryFormat, "scriptData") )
      __debugbreak();
    v17 = (__int64)&v19->scriptAimSets[ci->legs.animation->aimSet - 1];
  }
  else
  {
    v20 = 0;
  }
  v23 = v14;
  v24 = *(unsigned __int16 *)((char *)&knobAimAnimSet->aim_parent + KNOB_AIM_ANIM_OFFSETS[v14]);
  if ( v20 )
    v25 = *(_WORD *)(v17 + CHILD_AIM_ANIM_OFFSETS[v14]);
  else
    v25 = 0;
  _RAX = ANIM_WEIGHT_OFFSETS[v23];
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  xmm8, dword ptr [rax+rbp]
    vucomiss xmm8, xmm7
  }
  _RAX = ANIM_TIME_OFFSETS[v23];
  __asm { vmovss  xmm9, dword ptr [rax+rbp] }
  if ( v20 )
  {
    v32 = v24;
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+820h]
      vmulss  xmm6, xmm0, cs:__real@3a83126f
      vmovss  [rsp+0C8h+var_98], xmm7
      vmovss  dword ptr [rsp+0C8h+curveID], xmm7
      vmovss  dword ptr [rsp+0C8h+fmt], xmm8
    }
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v24, fmtb, curveIDa, v52, (scr_string_t)0, 0, 0, LINEAR, NULL);
    XAnimIndexForCharacterInternal = BG_GetXAnimIndexForCharacterInternal(ci, v19, v25);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+0C8h+var_98], xmm7
      vmovss  dword ptr [rsp+0C8h+curveID], xmm6
      vmovss  dword ptr [rsp+0C8h+fmt], xmm0
    }
    XAnimSetGoalWeightKnob(obj, 0, XANIM_SUBTREE_DEFAULT, XAnimIndexForCharacterInternal, fmtc, curveIDb, v53, (scr_string_t)0, 0, LINEAR);
    __asm { vmovss  dword ptr [rsp+0C8h+fmt], xmm9 }
    XAnimSetChildTimes(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, v32, fmtd);
    __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
  }
  else
  {
    v31 = v24;
    __asm { vmovss  dword ptr [rsp+0C8h+fmt], xmm7 }
    XAnimClearChildGoalWeights(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, v24, fmt, LINEAR);
    __asm
    {
      vmovss  [rsp+0C8h+var_98], xmm7
      vmovss  dword ptr [rsp+0C8h+curveID], xmm7
      vmovss  dword ptr [rsp+0C8h+fmt], xmm8
    }
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v31, fmta, curveID, v51, (scr_string_t)0, 0, 0, LINEAR, NULL);
  }
  _R11 = &v55;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
BG_ShouldScaleTimedAnim
==============
*/
_BOOL8 BG_ShouldScaleTimedAnim(int animIndex, SuitAnimType suitAnimIndex)
{
  __int64 v4; 
  __int64 v5; 
  BgStatic *ActiveStatics; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  char v11; 
  __int64 v13; 
  __int64 v14; 

  v4 = animIndex;
  v5 = suitAnimIndex;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3588, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( (unsigned int)v5 >= 4 )
  {
    LODWORD(v13) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3589, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v13, 4) )
      __debugbreak();
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  v7 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3593, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v8 = *(_QWORD *)(v7 + 8 * v5);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3596, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
    __debugbreak();
  if ( (unsigned int)v4 >= *(_DWORD *)(v8 + 8) )
  {
    LODWORD(v14) = *(_DWORD *)(v8 + 8);
    LODWORD(v13) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3597, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( playerAnim->animationCount )", "animIndex doesn't index playerAnim->animationCount\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v9 = *(_QWORD *)(v8 + 48) + 104 * v4;
  *(float *)&_XMM0 = BG_Animation_GetAnimEntryMoveSpeed((const PlayerAnimEntry *)v9);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
  }
  return !v11 && (*(_DWORD *)(v9 + 16) & 0x840000) == 8650752i64;
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

void __fastcall BG_SwingAngles(double destination, double swingTolerance, double clampTolerance, double speed, float minSpeedScale, float *angle, int *swinging)
{
  BgStatic *ActiveStatics; 
  char v55; 
  char v64; 
  __int128 v76; 
  char v77; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = angle;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0B8h+var_88], xmm13
    vmovaps xmm13, xmm3
    vmovaps xmm6, xmm2
    vmovaps xmm9, xmm1
    vmovaps xmm7, xmm0
  }
  BG_CheckThread();
  ActiveStatics = BgStatic::GetActiveStatics();
  if ( !ActiveStatics->GetAnimStatics(ActiveStatics) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7723, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim", v76) )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm10, cs:__real@3b360b61
    vmovss  xmm11, cs:__real@3f000000
    vmovss  xmm12, cs:__real@43b40000
  }
  if ( *swinging )
  {
LABEL_8:
    __asm
    {
      vsubss  xmm0, xmm7, dword ptr [rbx]
      vmulss  xmm3, xmm0, xmm10
      vxorps  xmm0, xmm0, xmm0
      vaddss  xmm1, xmm3, xmm11
      vmovss  xmm1, xmm0, xmm1
      vxorps  xmm9, xmm9, xmm9
      vroundss xmm2, xmm9, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm4, xmm0, xmm12
      vandps  xmm1, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmulss  xmm0, xmm1, cs:__real@3d4ccccd
      vmaxss  xmm2, xmm0, [rsp+0B8h+minSpeedScale]
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+4C54h]
    }
    _RDI = angle;
    __asm
    {
      vcomiss xmm4, xmm1
      vmulss  xmm1, xmm0, xmm2
      vmulss  xmm2, xmm1, xmm13
      vcomiss xmm2, xmm4
      vminss  xmm0, xmm4, xmm2
    }
    *swinging = 0;
    __asm { vaddss  xmm0, xmm0, dword ptr [rbx]; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmovss  dword ptr [rdi], xmm0
      vsubss  xmm1, xmm7, dword ptr [rbx]
      vmulss  xmm4, xmm1, xmm10
      vxorps  xmm0, xmm0, xmm0
      vaddss  xmm2, xmm4, xmm11
      vmovss  xmm1, xmm0, xmm2
      vroundss xmm3, xmm9, xmm1, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm12
      vcomiss xmm1, xmm6
    }
    if ( v55 | v64 )
    {
      __asm
      {
        vxorps  xmm0, xmm6, xmm8
        vcomiss xmm1, xmm0
      }
      if ( !v55 )
        goto LABEL_13;
      __asm { vaddss  xmm0, xmm7, xmm6; angle }
    }
    else
    {
      __asm { vsubss  xmm0, xmm7, xmm6 }
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vmovss  dword ptr [rbx], xmm0 }
    goto LABEL_13;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm0, xmm7
    vmulss  xmm5, xmm1, xmm10
    vxorps  xmm1, xmm1, xmm1
    vaddss  xmm2, xmm5, xmm11
    vroundss xmm4, xmm1, xmm2, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm1, xmm0, xmm12
    vcomiss xmm1, xmm9
  }
  if ( *swinging )
  {
    *swinging = 1;
    goto LABEL_8;
  }
  __asm
  {
    vxorps  xmm0, xmm9, xmm8
    vcomiss xmm1, xmm0
  }
LABEL_13:
  _R11 = &v77;
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
  }
}

/*
==============
BG_TurnMovementDir
==============
*/
__int64 BG_TurnMovementDir(pmove_t *pm, pml_t *pml, int onlyClamp)
{
  const SuitDef *SuitDef; 
  bool v12; 
  unsigned int movementDir; 
  char v26; 
  int v29; 
  int Int_Internal_DebugName; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  const char *v33; 
  const dvar_t *v34; 
  const dvar_t *v41; 
  const char *v42; 
  int v44; 
  int v46; 
  int v47; 
  int v50; 
  int v51; 
  int v52; 
  const dvar_t *v53; 
  const char *v54; 
  int turnRemaining; 
  int v61; 
  int v67; 
  int v68; 
  int v71; 
  signed int v72; 
  __int64 v75; 
  __int64 v76; 
  int v77; 
  int integer; 
  vec3_t v79; 
  vec3_t forward; 
  vec3_t outAngles; 
  vec3_t angles; 

  _R13 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3009, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3009, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(_RBX->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3019, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  v12 = !SuitDef->isMovementCameraIndependent;
  movementDir = _RBX->movementDir;
  __asm { vmovaps [rsp+108h+var_48], xmm6 }
  if ( !v12 )
  {
    Vec3ShortToAngle(&pm->oldcmd.angles, &outAngles);
    AngleVectors(&outAngles, &forward, NULL, NULL);
    Vec3ShortToAngle(&pm->cmd.angles, &angles);
    AngleVectors(&angles, &v79, NULL, NULL);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+108h+var_B0]
      vmulss  xmm3, xmm0, dword ptr [rsp+108h+forward]
      vmovss  xmm1, dword ptr [rsp+108h+var_B0+4]
      vmulss  xmm2, xmm1, dword ptr [rsp+108h+forward+4]
      vmovss  xmm0, dword ptr [rsp+108h+var_B0+8]
      vmulss  xmm1, xmm0, dword ptr [rsp+108h+forward+8]
      vaddss  xmm4, xmm3, xmm2
      vmovss  xmm2, cs:__real@3f800000; max
      vaddss  xmm0, xmm4, xmm1; val
      vxorps  xmm1, xmm1, xmm1; min
      vxorps  xmm6, xmm6, xmm6
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
    __asm
    {
      vmovss  xmm1, dword ptr [r13+24h]
      vcomiss xmm1, xmm6
      vmulss  xmm2, xmm0, cs:__real@42652ee0
    }
    if ( !(v26 | v12) )
      __asm { vdivss  xmm6, xmm2, xmm1 }
    _RDI = DCONST_DVARFLT_g_anim_mp_idle_turn_camera_independent_max_speed;
    if ( !DCONST_DVARFLT_g_anim_mp_idle_turn_camera_independent_max_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_anim_mp_idle_turn_camera_independent_max_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vcomiss xmm6, dword ptr [rdi+28h] }
    if ( !v26 )
    {
      BG_StopTurning(pm, _R13);
      goto LABEL_112;
    }
  }
  if ( (_RBX->linkFlags.m_flags[0] & 4) != 0 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->otherFlags, ACTIVE, 1u) )
    __asm { vmovss  xmm0, dword ptr [rbx+290h]; degrees }
  else
    __asm { vmovss  xmm0, dword ptr [rbx+1DCh] }
  v77 = BG_DegreesToMovementDir(*(float *)&_XMM0);
  v29 = v77;
  _R13->turning = 0;
  if ( !onlyClamp )
  {
    if ( PlayerASM_IsEnabled() )
    {
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->otherFlags, ACTIVE, 0xBu) )
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_playerasm_idleTurnLastStandAnimDuration, "playerasm_idleTurnLastStandAnimDuration");
      }
      else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->eFlags, ACTIVE, 4u) )
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
      v31 = DCONST_DVARINT_g_anim_mp_idle_turn_anim_duration;
      if ( !DCONST_DVARINT_g_anim_mp_idle_turn_anim_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_anim_mp_idle_turn_anim_duration") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      Int_Internal_DebugName = v31->current.integer;
    }
    if ( SuitDef->isMovementCameraIndependent )
    {
      v32 = DCONST_DVARINT_g_anim_mp_idle_turn_delay_camera_independent;
      if ( !DCONST_DVARINT_g_anim_mp_idle_turn_delay_camera_independent )
      {
        v33 = "g_anim_mp_idle_turn_delay_camera_independent";
        goto LABEL_39;
      }
    }
    else
    {
      v32 = DCONST_DVARINT_g_anim_mp_idle_turn_delay;
      if ( !DCONST_DVARINT_g_anim_mp_idle_turn_delay )
      {
        v33 = "g_anim_mp_idle_turn_delay";
LABEL_39:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v33) )
          __debugbreak();
      }
    }
    Dvar_CheckFrontendServerThread(v32);
    integer = v32->current.integer;
    if ( SuitDef->isMovementCameraIndependent )
    {
      v34 = DCONST_DVARINT_g_anim_mp_idle_turn_anim_duration_camera_independent;
      if ( !DCONST_DVARINT_g_anim_mp_idle_turn_anim_duration_camera_independent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_anim_mp_idle_turn_anim_duration_camera_independent") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      Int_Internal_DebugName = v34->current.integer;
    }
    __asm
    {
      vmovaps [rsp+108h+var_58], xmm7
      vmovaps [rsp+108h+var_68], xmm8
    }
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->otherFlags, ACTIVE, 0xBu) )
    {
      _RDI = DCONST_DVARFLT_g_anim_mp_idle_turn_laststand_angle;
      if ( !DCONST_DVARFLT_g_anim_mp_idle_turn_laststand_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_anim_mp_idle_turn_laststand_angle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm0, dword ptr [rdi+28h] }
      _RDI = DCONST_DVARFLT_g_anim_mp_idle_turn_trigger_laststand_angle;
      __asm
      {
        vmovss  xmm6, cs:__real@3f360b61
        vmulss  xmm8, xmm0, xmm6
      }
      if ( !DCONST_DVARFLT_g_anim_mp_idle_turn_trigger_laststand_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_anim_mp_idle_turn_trigger_laststand_angle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vmulss  xmm6, xmm0, xmm6
      }
    }
    else
    {
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->eFlags, ACTIVE, 4u) )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_g_anim_mp_idle_turn_prone_angle, "g_anim_mp_idle_turn_prone_angle");
        v41 = DCONST_DVARFLT_g_anim_mp_idle_turn_trigger_prone_angle;
        v42 = "g_anim_mp_idle_turn_trigger_prone_angle";
      }
      else
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_g_anim_mp_idle_turn_angle, "g_anim_mp_idle_turn_angle");
        v41 = DCONST_DVARFLT_g_anim_mp_idle_turn_trigger_angle;
        v42 = "g_anim_mp_idle_turn_trigger_angle";
      }
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@43800000
        vmulss  xmm8, xmm1, cs:__real@3b360b61
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v41, v42);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@43800000
        vmulss  xmm6, xmm1, cs:__real@3b360b61
      }
    }
    v44 = pm->cmd.serverTime - _RBX->turnStartTime - integer;
    if ( v44 < 0 )
    {
      v29 = v77;
    }
    else
    {
      __asm { vmovss  xmm7, cs:__real@3f000000 }
      if ( Int_Internal_DebugName - v44 <= 100 )
      {
        v46 = BG_MovementDirNormalize180(v77 - movementDir);
        __asm { vaddss  xmm0, xmm6, xmm7 }
        v47 = abs32(v46);
        __asm { vcvttss2si ecx, xmm0 }
        if ( v47 > _ECX )
        {
          _RBX->turnStartTime = pm->cmd.serverTime;
          _RBX->turnDirection = v46 > 0;
          if ( SuitDef->isMovementCameraIndependent )
          {
            _EAX = 127;
            if ( v47 < 127 )
              _EAX = v47;
          }
          else
          {
            __asm
            {
              vaddss  xmm0, xmm8, xmm7
              vcvttss2si eax, xmm0
            }
          }
          _RBX->turnRemaining = _EAX;
          if ( _EAX >= 0x80 )
          {
            LODWORD(v76) = 128;
            LODWORD(v75) = _EAX;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3125, ASSERT_TYPE_ASSERT, "(unsigned)( ps->turnRemaining ) < (unsigned)( (1 << 7) )", "ps->turnRemaining doesn't index (1 << MOVEMENTDIR_TURN_BITS)\n\t%i not in [0, %i)", v75, v76) )
              __debugbreak();
          }
          _R13->turning = 2;
          v44 = 0;
        }
      }
      if ( v44 >= Int_Internal_DebugName )
      {
        v29 = v77;
        if ( _RBX->turnRemaining )
          _RBX->turnRemaining = 0;
      }
      else
      {
        if ( PlayerASM_IsEnabled() )
        {
          v50 = 0;
          v51 = Int_Internal_DebugName;
        }
        else
        {
          if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->eFlags, ACTIVE, 4u) )
          {
            v52 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_g_anim_mp_idle_turn_rotate_prone_start, "g_anim_mp_idle_turn_rotate_prone_start");
            v53 = DCONST_DVARINT_g_anim_mp_idle_turn_rotate_prone_end;
            v54 = "g_anim_mp_idle_turn_rotate_prone_end";
          }
          else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->eFlags, ACTIVE, 3u) )
          {
            v52 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_g_anim_mp_idle_turn_rotate_crouch_start, "g_anim_mp_idle_turn_rotate_crouch_start");
            v53 = DCONST_DVARINT_g_anim_mp_idle_turn_rotate_crouch_end;
            v54 = "g_anim_mp_idle_turn_rotate_crouch_end";
          }
          else
          {
            v52 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_g_anim_mp_idle_turn_rotate_stand_start, "g_anim_mp_idle_turn_rotate_stand_start");
            v53 = DCONST_DVARINT_g_anim_mp_idle_turn_rotate_stand_end;
            v54 = "g_anim_mp_idle_turn_rotate_stand_end";
          }
          v50 = v52;
          v51 = Dvar_GetInt_Internal_DebugName(v53, v54);
        }
        if ( Int_Internal_DebugName < v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3154, ASSERT_TYPE_ASSERT, "(animDuration >= rotateStart)", (const char *)&queryFormat, "animDuration >= rotateStart") )
          __debugbreak();
        if ( Int_Internal_DebugName < v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3155, ASSERT_TYPE_ASSERT, "(animDuration >= rotateEnd)", (const char *)&queryFormat, "animDuration >= rotateEnd") )
          __debugbreak();
        if ( v51 < v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3156, ASSERT_TYPE_ASSERT, "(rotateEnd >= rotateStart)", (const char *)&queryFormat, "rotateEnd >= rotateStart") )
          __debugbreak();
        if ( v44 > v50 && v44 < v51 )
        {
          turnRemaining = _RBX->turnRemaining;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ecx
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, dword ptr [r13+28h]
            vmulss  xmm2, xmm1, xmm0
          }
          v61 = turnRemaining;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ebp
            vdivss  xmm1, xmm2, xmm0
            vaddss  xmm2, xmm1, xmm7
            vcvttss2si eax, xmm2
          }
          if ( _EAX <= turnRemaining )
            v61 = _EAX;
          v67 = turnRemaining - v61;
          _RBX->turnRemaining = v67;
          if ( v67 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3175, ASSERT_TYPE_ASSERT, "( ps->turnRemaining ) >= ( 0 )", "%s >= %s\n\t%i, %i", "ps->turnRemaining", "0", v67, 0i64) )
            __debugbreak();
          v68 = -1;
          if ( _RBX->turnDirection )
            v68 = 1;
          movementDir = BG_MovementDirNormalize360(movementDir + v61 * v68);
        }
        v29 = v77;
        if ( !_R13->turning )
          _R13->turning = 1;
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+108h+var_58]
      vmovaps xmm8, [rsp+108h+var_68]
    }
    goto LABEL_104;
  }
  BG_StopTurning(pm, _R13);
LABEL_104:
  if ( !SuitDef->isMovementCameraIndependent )
  {
    v71 = BG_MovementDirNormalize180(v29 - movementDir);
    v72 = abs32(v71) - 50;
    if ( v72 > 0 )
    {
      if ( v71 < 0 )
        v72 = -v72;
      movementDir = BG_MovementDirNormalize360(v72 + movementDir);
    }
  }
  if ( (unsigned __int8)movementDir != movementDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3211, ASSERT_TYPE_ASSERT, "(( currentDir & ( (1 << 8) - 1 ) ) == currentDir)", (const char *)&queryFormat, "( currentDir & ( (1 << MOVEMENTDIR_BITS) - 1 ) ) == currentDir") )
    __debugbreak();
LABEL_112:
  __asm { vmovaps xmm6, [rsp+108h+var_48] }
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
  __int64 v11; 
  unsigned int number; 
  DObj *ClientDObj; 
  DObj *v14; 
  bool v15; 
  bool v26; 
  int j; 
  int i; 
  float fmt; 
  float fmta; 
  aimAnimValues_t values; 

  _RDI = ci;
  BG_CheckThread();
  ActiveStatics = BgStatic::GetActiveStatics();
  v11 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7540, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  number = es->number;
  if ( ActiveStatics->IsClient(ActiveStatics) )
    ClientDObj = Com_GetClientDObj(number, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable));
  else
    ClientDObj = (DObj *)((__int64 (__fastcall *)(BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, number);
  v14 = ClientDObj;
  if ( ClientDObj )
  {
    v15 = (_RDI->playerAnim.legsAnim & 0xFFFFEFFF) == 0;
    if ( (_RDI->playerAnim.legsAnim & 0xFFFFEFFF) != 0 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+858h]
        vsubss  xmm1, xmm0, dword ptr [rdi+800h]
        vmulss  xmm5, xmm1, cs:__real@3b360b61
        vmovaps [rsp+0F8h+var_28], xmm6
        vmovaps [rsp+0F8h+var_38], xmm7
        vmovss  xmm7, cs:__real@3f000000
        vaddss  xmm2, xmm5, xmm7
        vxorps  xmm1, xmm1, xmm1
        vroundss xmm4, xmm1, xmm2, 1
        vxorps  xmm6, xmm6, xmm6
        vucomiss xmm6, dword ptr [rdi+808h]
        vsubss  xmm0, xmm5, xmm4
        vmovaps [rsp+0F8h+var_48], xmm8
        vmulss  xmm8, xmm0, cs:__real@43b40000
      }
      if ( !v15 )
      {
        v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 7551, ASSERT_TYPE_ASSERT, "(ci->legs.pitchAngle == 0.0f)", (const char *)&queryFormat, "ci->legs.pitchAngle == 0.0f");
        v15 = !v26;
        if ( v26 )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rdi+860h]
        vcomiss xmm1, cs:__real@42b40000
        vmovss  xmm7, cs:__real@3f800000
        vmovaps [rsp+0F8h+var_58], xmm9
        vmovss  xmm9, cs:__real@3c6a0ea1
        vmovaps [rsp+0F8h+var_68], xmm10
        vmovaps [rsp+0F8h+var_78], xmm11
      }
      if ( v15 )
      {
        __asm
        {
          vmulss  xmm0, xmm1, xmm9
          vminss  xmm10, xmm0, xmm7
          vxorps  xmm11, xmm11, xmm11
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, cs:__real@43340000
          vsubss  xmm1, xmm0, xmm1
          vmulss  xmm2, xmm1, xmm9
          vminss  xmm11, xmm2, xmm7
          vxorps  xmm10, xmm10, xmm10
        }
      }
      if ( BG_IsStrafeAnim(_RDI->playerAnim.legsAnim, _RDI->playerAnim.suitAnimIndex) )
      {
        __asm
        {
          vcomiss xmm8, xmm6
          vmulss  xmm0, xmm8, cs:__real@3d088889
          vminss  xmm2, xmm0, xmm7; fAimFactor4
          vmovaps xmm3, xmm6; fAimFactor6
          vmovaps xmm1, xmm10; fAimFactor2
          vmovss  dword ptr [rsp+0F8h+fmt], xmm11
        }
        BG_CalculateAimAnimValues(&values, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta);
        for ( i = 0; i < 8; ++i )
          BG_SetupAimAnimBranch(v14, _RDI, i, (const aimAnimSet_t *)(v11 + 64), &values);
      }
      else
      {
        __asm
        {
          vcomiss xmm8, xmm6
          vmulss  xmm0, xmm8, xmm9
          vminss  xmm2, xmm0, xmm7; fAimFactor4
          vmovaps xmm3, xmm6; fAimFactor6
          vmovaps xmm1, xmm10; fAimFactor2
          vmovss  dword ptr [rsp+0F8h+fmt], xmm11
        }
        BG_CalculateAimAnimValues(&values, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
        for ( j = 0; j < 8; ++j )
          BG_SetupAimAnimBranch(v14, _RDI, j, (const aimAnimSet_t *)(v11 + 46), &values);
      }
      __asm
      {
        vmovaps xmm10, [rsp+0F8h+var_68]
        vmovaps xmm9, [rsp+0F8h+var_58]
        vmovaps xmm11, [rsp+0F8h+var_78]
        vmovaps xmm7, [rsp+0F8h+var_38]
        vmovaps xmm6, [rsp+0F8h+var_28]
        vmovaps xmm8, [rsp+0F8h+var_48]
      }
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
  void *v19; 
  const entityState_t *v21; 
  DObj *v22; 
  const Weapon *v23; 
  const Weapon *v24; 
  unsigned int v25; 
  bool *attachTagIndexChanged; 
  BgStatic *ActiveStatics; 
  DObj *pXAnimTree; 
  DObjPartBits *p_replicatedPartBits; 
  bool usingExecutionProp; 
  bool usingDetonator; 
  unsigned int v33; 
  entityState_t *v36; 
  const dvar_t *v37; 
  const dvar_t *v38; 
  PlayerASM_AnimSlot v63; 
  unsigned int Anim; 
  unsigned int Animset; 
  unsigned __int16 weaponIdx; 
  int v79; 
  const dvar_t *v80; 
  const dvar_t *v81; 
  int v82; 
  CharacterModelType *v83; 
  DObjModel *v84; 
  unsigned int carryObjectFlags; 
  int v88; 
  entityState_t *v91; 
  entityState_t *v92; 
  const dvar_t *v93; 
  const dvar_t *v94; 
  bool v95; 
  const char *v96; 
  int numModels; 
  int v98; 
  CharacterModelType *v99; 
  DObjModel *v100; 
  int v101; 
  unsigned __int16 weaponBoneCount; 
  int v103; 
  unsigned int v104; 
  DObj *v106; 
  entityState_t *v107; 
  int numberOfBonesBeforeWeapons; 
  DObjModel *v109; 
  CharacterModelType *v110; 
  __int64 v111; 
  Weapon *v112; 
  int v113; 
  bool v114; 
  const dvar_t *v115; 
  const dvar_t *v116; 
  const dvar_t *v117; 
  char v118; 
  int v119; 
  DObjModel *v120; 
  CharacterModelType *v121; 
  DObjPartBits *v122; 
  const XModel *model; 
  __int64 v124; 
  int v125; 
  const dvar_t *v126; 
  const dvar_t *v127; 
  Weapon *v132; 
  Weapon *v133; 
  LocalClientNum_t v134; 
  float fmtb; 
  char *fmt; 
  char *fmta; 
  __int64 forceBlendTime; 
  __int64 forceBlendTimea; 
  void *objID; 
  BOOL objIDa; 
  __int64 curveID; 
  __int64 curveIDa; 
  char v150; 
  unsigned __int8 inOutIndex; 
  bool hideWeapon; 
  entityState_t *v153; 
  bool stowHeldWeapon; 
  DObjPartBits *partBits; 
  bool v156[2][2]; 
  int oldNumModels; 
  const Weapon *v158; 
  int numRefModels[2]; 
  Weapon *r_heldWeapona; 
  DObj *obj; 
  DObj *pDObja; 
  LocalClientNum_t localClientNuma; 
  Weapon *r_stowedWeapona; 
  DObj *v165; 
  Weapon *r_executionWeapona; 
  __int64 v167; 
  FxMarkDObjUpdateContext context; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v170; 
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
  char v187; 

  v19 = alloca(v12);
  v167 = -2i64;
  __asm
  {
    vmovaps [rsp+6AB8h+var_48], xmm6
    vmovaps [rsp+6AB8h+var_58], xmm7
    vmovaps [rsp+6AB8h+var_68], xmm8
    vmovaps [rsp+6AB8h+var_78], xmm9
    vmovaps [rsp+6AB8h+var_88], xmm10
  }
  _RSI = ci;
  v21 = es;
  v153 = (entityState_t *)es;
  v22 = pDObj;
  v165 = pDObj;
  localClientNuma = localClientNum;
  pDObja = pDObj;
  r_heldWeapona = (Weapon *)r_heldWeapon;
  r_stowedWeapona = (Weapon *)r_stowedWeapon;
  v23 = r_thrownWeapon;
  *(_QWORD *)numRefModels = r_thrownWeapon;
  r_executionWeapona = (Weapon *)r_executionWeapon;
  v24 = r_accessoryWeapon;
  v158 = r_accessoryWeapon;
  Sys_ProfBeginNamedEvent(0xFF0000FF, "BG_UpdateCharacterDObj");
  memset_0(outModelTypes, 0, sizeof(outModelTypes));
  memset_0(refModelTypes, 0, sizeof(refModelTypes));
  memset_0(actualModelTypes, 0, sizeof(actualModelTypes));
  BG_CheckThread();
  memset_0(&bonePhysicsState, 0, sizeof(bonePhysicsState));
  if ( PlayerASM_IsEnabled() && PlayerASM_IsConnectingPaths() )
    goto LABEL_229;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9761, ASSERT_TYPE_ASSERT, "(ci != nullptr)", (const char *)&queryFormat, "ci != nullptr") )
    __debugbreak();
  if ( _RSI->infoValid )
  {
    if ( _RSI->modelIndexChanged && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9765, ASSERT_TYPE_ASSERT, "(!ci->modelIndexChanged)", "%s\n\tBG_UpdateCharacterDObj: Body model changed without properly updating the character info model name.", "!ci->modelIndexChanged") )
      __debugbreak();
    v25 = 0;
    attachTagIndexChanged = _RSI->attachTagIndexChanged;
    do
    {
      if ( *(attachTagIndexChanged - 9) )
      {
        LODWORD(objID) = v25;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9768, ASSERT_TYPE_ASSERT, "(!ci->attachModelIndexChanged[attachIndex])", "%s\n\tBG_UpdateCharacterDObj: Attachment model[%d] changed without properly updating the character info model name.", "!ci->attachModelIndexChanged[attachIndex]", objID) )
          __debugbreak();
      }
      if ( *attachTagIndexChanged )
      {
        LODWORD(objID) = v25;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9769, ASSERT_TYPE_ASSERT, "(!ci->attachTagIndexChanged[attachIndex])", "%s\n\tBG_UpdateCharacterDObj: Attachment tag[%d] changed without properly updating the character info model name.", "!ci->attachTagIndexChanged[attachIndex]", objID) )
          __debugbreak();
      }
      ++v25;
      ++attachTagIndexChanged;
    }
    while ( v25 < 9 );
    v22 = v165;
    v23 = *(const Weapon **)numRefModels;
    v24 = v158;
    v21 = v153;
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  v165 = (DObj *)ActiveStatics;
  pXAnimTree = (DObj *)_RSI->pXAnimTree;
  obj = pXAnimTree;
  if ( !pXAnimTree )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9779, ASSERT_TYPE_ASSERT, "(pAnimTree)", (const char *)&queryFormat, "pAnimTree") )
      __debugbreak();
    pXAnimTree = obj;
  }
  if ( _RSI->animTreeDirty )
  {
    if ( v22 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+6AB8h+fmt], xmm0
      }
      XAnimClearTreeGoalWeights((XAnimTree *)pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, 0, fmtb, 1, v22, LINEAR);
    }
    _RSI->animTreeDirty = 0;
  }
  if ( !_RSI->infoValid || !_RSI->model[0] )
  {
    v92 = (entityState_t *)v21;
    goto LABEL_228;
  }
  if ( !ActiveStatics->IsClient(ActiveStatics) || (v150 = 1, v21->eType != ET_PLAYER_CORPSE) )
    v150 = 0;
  if ( !ActiveStatics->IsClient(ActiveStatics) || (v114 = v21->eType == ET_PLAYER, inOutIndex = 1, !v114) )
    inOutIndex = 0;
  if ( v150 )
  {
    if ( !_RSI->corpseReferenceInfo.infoValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9809, ASSERT_TYPE_ASSERT, "(ci->corpseReferenceInfo.infoValid)", (const char *)&queryFormat, "ci->corpseReferenceInfo.infoValid") )
      __debugbreak();
    p_replicatedPartBits = &_RSI->corpseReferenceInfo.replicatedPartBits;
  }
  else
  {
    p_replicatedPartBits = &v21->partBits;
  }
  partBits = p_replicatedPartBits;
  ActiveStatics->GetPlayerWorldIkStatus(ActiveStatics, v21->number, v156);
  if ( *(_WORD *)&v156[0][0] != *(_WORD *)_RSI->worldIKStatus )
    _RSI->dobjDirty = 1;
  _RSI->weaponAnimsNeedUpdate = 0;
  if ( !forceUpdate )
  {
    usingExecutionProp = BG_GetExecutionFlagsIsUsingProp(v21);
    usingDetonator = BG_IsPlayerUsingDetonator(v153);
    if ( !BG_AnimationMP_IsCharacterDObjDirty(v22, partBits, _RSI, r_heldWeapona, r_stowedWeapona, v23, r_executionWeapona, v24, usingDetonator, usingExecutionProp, 0) )
      goto LABEL_229;
  }
  _RSI->weaponAnimsNeedUpdate = 1;
  if ( localClientNuma != LOCAL_CLIENT_INVALID )
    FX_MarkEntUpdateBegin(&context, v22, 0, 0);
  oldNumModels = 0;
  v33 = 0;
  __asm { vpxor   xmm6, xmm6, xmm6 }
  _RDI = &hidePartBitsFromOldDObj;
  do
  {
    __asm { vmovdqu xmmword ptr [rdi], xmm6 }
    ++v33;
    _RDI = (DObjPartBits *)((char *)_RDI + 16);
  }
  while ( v33 < 2 );
  if ( v22 )
  {
    v36 = v153;
    BG_UpdateCharacterDObj_HandleExistingDObj(v153, _RSI, &pDObja, v150, ActiveStatics, &bonePhysicsState, (DObjModel (*)[32])oldDObjModels, &oldNumModels, (const DObjPartBits **)&partBits, &hidePartBitsFromOldDObj);
  }
  else
  {
    v37 = DCONST_DVARINT_bg_debugCharDobjUpdate;
    if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    if ( v37->current.integer == -1 )
    {
      v36 = v153;
    }
    else
    {
      v38 = DCONST_DVARINT_bg_debugCharDobjUpdate;
      if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v38);
      v36 = v153;
      if ( v38->current.integer != v153->number )
        goto LABEL_63;
    }
    if ( ActiveStatics->IsClient(ActiveStatics) )
      Com_Printf(34, "BG_UpdateCharacterDObj: Obj does not exist\n");
  }
LABEL_63:
  _RAX = r_heldWeapona;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsi+5F4h], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsi+614h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsi+624h], xmm0
  }
  *(_DWORD *)&_RSI->dobjHeldWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  _R12 = r_stowedWeapona;
  __asm
  {
    vmovups ymm0, ymmword ptr [r12]
    vmovups ymmword ptr [rsi+630h], ymm0
    vmovups xmm1, xmmword ptr [r12+20h]
    vmovups xmmword ptr [rsi+650h], xmm1
    vmovsd  xmm0, qword ptr [r12+30h]
    vmovsd  qword ptr [rsi+660h], xmm0
  }
  *(_DWORD *)&_RSI->dobjStowedWeapon.weaponCamo = *(_DWORD *)&_R12->weaponCamo;
  _R13 = *(const Weapon **)numRefModels;
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+0]
    vmovups ymmword ptr [rsi+66Ch], ymm0
    vmovups xmm1, xmmword ptr [r13+20h]
    vmovups xmmword ptr [rsi+68Ch], xmm1
    vmovsd  xmm0, qword ptr [r13+30h]
    vmovsd  qword ptr [rsi+69Ch], xmm0
  }
  *(_DWORD *)&_RSI->dobjThrownWeapon.weaponCamo = *(_DWORD *)&_R13->weaponCamo;
  if ( _RSI->usingThrownWeapon && !_RSI->dobjThrownWeapon.weaponIdx )
    _RSI->usingThrownWeapon = 0;
  _RDI = r_executionWeapona;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rsi+6ACh], ymm0
    vmovups xmm1, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rsi+6CCh], xmm1
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rsi+6DCh], xmm0
  }
  *(_DWORD *)&_RSI->dobjExecutionWeapon.weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
  _RBX = (__int64)v158;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rsi+724h], ymm0
    vmovups xmm1, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rsi+744h], xmm1
    vmovsd  xmm0, qword ptr [rbx+30h]
    vmovsd  qword ptr [rsi+754h], xmm0
  }
  *(_DWORD *)&_RSI->dobjAccessoryWeapon.weaponCamo = *(_DWORD *)(_RBX + 56);
  _RAX = r_turretWeapon;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsi+6E8h], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsi+708h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsi+718h], xmm0
  }
  *(_DWORD *)&_RSI->dobjTurretWeapon.weaponCamo = *(_DWORD *)&r_turretWeapon->weaponCamo;
  _RSI->dobjUsingDetonator = BG_IsPlayerUsingDetonator(v36);
  _RSI->dobjUsingExecutionProp = BG_GetExecutionFlagsIsUsingProp(v36);
  _RSI->dobjHeldWeaponLoaded = ActiveStatics->IsWeaponWorldModelLoaded(ActiveStatics, r_heldWeapona);
  _RSI->dobjStowedWeaponLoaded = ActiveStatics->IsWeaponWorldModelLoaded(ActiveStatics, _R12);
  _RSI->dobjThrownWeaponLoaded = ActiveStatics->IsWeaponWorldModelLoaded(ActiveStatics, _R13);
  _RSI->dobjExecutionWeaponLoaded = ActiveStatics->IsWeaponWorldModelLoaded(ActiveStatics, _RDI);
  _RSI->dobjAccessoryWeaponLoaded = ActiveStatics->IsWeaponWorldModelLoaded(ActiveStatics, (const Weapon *)_RBX);
  _RSI->dobjForceCheckWeaponModelLoaded = 0;
  if ( v36->eType == ET_PLAYER )
  {
    LOBYTE(v63) = 1;
    Anim = BG_PlayerASM_GetAnim(v36, v63);
    Animset = BG_PlayerASM_GetAnimset(v36);
    if ( BG_PlayerASM_IsRaiseWeaponAlias(Anim, Animset) && _RSI->torso.animationNumber != Anim && _RSI->torso.animsetIndex == Animset )
    {
      weaponIdx = _RSI->dobjHeldWeapon.weaponIdx;
      if ( weaponIdx && BG_WeaponDefAtIndex(weaponIdx)->stowTag && BG_WeaponDefAtIndex(_RSI->dobjHeldWeapon.weaponIdx)->stowTag != scr_const.none )
        *(_WORD *)&_RSI->hideWeapon = 257;
    }
    else if ( _RSI->stowHeldWeapon && BG_GetWeaponType(&_RSI->dobjHeldWeapon, _RSI->isUsingWeaponAltMode != 0) == WEAPTYPE_GRENADE )
    {
      _RSI->stowHeldWeapon = 0;
    }
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+5F4h]
    vmovups [rsp+6AB8h+var_69E0], ymm0
    vmovups xmm7, xmmword ptr [rsi+614h]
    vmovsd  xmm8, qword ptr [rsi+624h]
  }
  LODWORD(v158) = *(_DWORD *)&_RSI->dobjHeldWeapon.weaponCamo;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+6E8h]
    vmovups ymmword ptr [rsp+6AB8h+outFixedUpHidePartBits.baseclass_0.baseclass_0.baseclass_0.array], ymm0
    vmovups xmm9, xmmword ptr [rsi+708h]
    vmovsd  xmm10, qword ptr [rsi+718h]
  }
  LODWORD(pDObja) = *(_DWORD *)&_RSI->dobjTurretWeapon.weaponCamo;
  hideWeapon = _RSI->hideWeapon;
  stowHeldWeapon = _RSI->stowHeldWeapon;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+760h]
    vmovups ymmword ptr [rsi+5F4h], ymm0
    vmovups xmm1, xmmword ptr [rsi+780h]
    vmovups xmmword ptr [rsi+614h], xmm1
    vmovsd  xmm0, qword ptr [rsi+790h]
    vmovsd  qword ptr [rsi+624h], xmm0
  }
  *(_DWORD *)&_RSI->dobjHeldWeapon.weaponCamo = *(_DWORD *)&_RSI->serverDobjHeldWeapon.weaponCamo;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+79Ch]
    vmovups ymmword ptr [rsi+6E8h], ymm0
    vmovups xmm1, xmmword ptr [rsi+7BCh]
    vmovups xmmword ptr [rsi+708h], xmm1
    vmovsd  xmm0, qword ptr [rsi+7CCh]
    vmovsd  qword ptr [rsi+718h], xmm0
  }
  *(_DWORD *)&_RSI->dobjTurretWeapon.weaponCamo = *(_DWORD *)&_RSI->serverDobjTurretWeapon.weaponCamo;
  _RSI->hideWeapon = _RSI->serverDobjHideWeapon;
  _RSI->stowHeldWeapon = _RSI->serverDobjStowHeldWeapon;
  v79 = ActiveStatics->BuildReferenceCharacterModels(ActiveStatics, v36->number, attachIgnoreCollision, (DObjModel (*)[32])refDobjModels, (CharacterModelType (*)[32])refModelTypes);
  numRefModels[0] = v79;
  v80 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v80);
  if ( v80->current.integer == -1 )
    goto LABEL_232;
  v81 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v81);
  if ( v81->current.integer == v36->number )
  {
LABEL_232:
    if ( ActiveStatics->IsClient(ActiveStatics) )
    {
      Com_Printf(34, "BG_UpdateCharacterDObj: Server reference models\n");
      if ( (unsigned int)v79 > 0x20 )
      {
        LODWORD(curveID) = 32;
        LODWORD(forceBlendTime) = v79;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9494, ASSERT_TYPE_ASSERT, "( 0 ) <= ( numModels ) && ( numModels ) <= ( ( 32 ) )", "numModels not in [0, DOBJ_MAX_CHARACTER_SUBMODELS]\n\t%i not in [%i, %i]", forceBlendTime, 0i64, curveID) )
          __debugbreak();
      }
      ScopedCriticalSection::ScopedCriticalSection((ScopedCriticalSection *)&v170, CRITSECT_DEBUG_HIDDEN_BONES, SCOPED_CRITSECT_NORMAL);
      Com_Printf(34, "=== BEGIN DUMP MODEL NAMES  ===\n");
      v82 = 0;
      if ( v79 > 0 )
      {
        v83 = refModelTypes;
        v84 = refDobjModels;
        do
        {
          SLODWORD(fmt) = *v83;
          Com_Printf(34, "Model %d: %s Character Type: %d\n", (unsigned int)v82++, v84->model->name, fmt);
          ++v84;
          ++v83;
        }
        while ( v82 < v79 );
      }
      Com_Printf(34, "=== END DUMP MODEL NAMES  ===\n");
      ScopedCriticalSection::~ScopedCriticalSection((ScopedCriticalSection *)&v170);
    }
  }
  if ( inOutIndex )
  {
    _R14 = &_RSI->corpseReferenceInfo;
    if ( _RSI == (characterInfo_t *)-14684i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9572, ASSERT_TYPE_ASSERT, "(corpseRef)", (const char *)&queryFormat, "corpseRef") )
      __debugbreak();
    _RSI->corpseReferenceInfo.modelIndex = _RSI->modelIndex;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+18h]
      vmovups ymmword ptr [r14+8], ymm0
    }
    _RSI->corpseReferenceInfo.attachModelIndex[8] = _RSI->attachModelIndex[8];
    _RSI->corpseReferenceInfo.suitIndex = _RSI->suitIndex;
    _RSI->corpseReferenceInfo.skydiveAnimState = _RSI->skydiveAnimState;
    carryObjectFlags = _RSI->carryObjectFlags;
    if ( carryObjectFlags > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)carryObjectFlags, "unsigned", _RSI->carryObjectFlags) )
      __debugbreak();
    _RSI->corpseReferenceInfo.carryObjectFlags = carryObjectFlags;
    _RSI->corpseReferenceInfo.carryObjectIndex = _RSI->carryObjectIndex;
    _R14->infoValid = 0;
    v88 = ActiveStatics->BuildReferenceCorpseModels(ActiveStatics, v153->number, attachIgnoreCollision, (DObjModel (*)[32])actualDobjModels, (CharacterModelType (*)[32])actualModelTypes);
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&_RSI->corpseReferenceInfo.replicatedPartBits);
    BgStatic::FixUpHidePartBits(ActiveStatics, v153->number, (const DObjModel (*)[32])refDobjModels, (const CharacterModelType (*)[32])refModelTypes, v79, (const DObjModel (*)[32])actualDobjModels, (const CharacterModelType (*)[32])actualModelTypes, v88, partBits, &_RSI->corpseReferenceInfo.replicatedPartBits);
    _R14->infoValid = 1;
  }
  __asm
  {
    vmovups ymm0, [rsp+6AB8h+var_69E0]
    vmovups ymmword ptr [rsi+5F4h], ymm0
    vmovups xmmword ptr [rsi+614h], xmm7
    vmovsd  qword ptr [rsi+624h], xmm8
  }
  *(_DWORD *)&_RSI->dobjHeldWeapon.weaponCamo = (_DWORD)v158;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+6AB8h+outFixedUpHidePartBits.baseclass_0.baseclass_0.baseclass_0.array]
    vmovups ymmword ptr [rsi+6E8h], ymm0
    vmovups xmmword ptr [rsi+708h], xmm9
    vmovsd  qword ptr [rsi+718h], xmm10
  }
  *(_DWORD *)&_RSI->dobjTurretWeapon.weaponCamo = (_DWORD)pDObja;
  _RSI->hideWeapon = hideWeapon;
  _RSI->stowHeldWeapon = stowHeldWeapon;
  v91 = v153;
  if ( !BgStatic::BuildCharacterModelList(ActiveStatics, _RSI, v153, attachIgnoreCollision, 0, (DObjModel (*)[32])outDobjModels, (CharacterModelType (*)[32])outModelTypes, &outModelListBuildResults) )
  {
    v92 = v153;
LABEL_228:
    BG_ClearCharacterDObj(v92);
    goto LABEL_229;
  }
  v93 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v93);
  if ( v93->current.integer == -1 )
    goto LABEL_111;
  v94 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v94);
  if ( v94->current.integer == v153->number )
  {
LABEL_111:
    v95 = ActiveStatics->IsClient(ActiveStatics);
    v96 = "SERVER";
    if ( v95 )
      v96 = "CLIENT";
    Com_Printf(34, "BG_UpdateCharacterDObj: Actual models (%s)\n", v96);
    numModels = outModelListBuildResults.numModels;
    if ( outModelListBuildResults.numModels > 0x20u )
    {
      LODWORD(curveIDa) = 32;
      LODWORD(forceBlendTimea) = outModelListBuildResults.numModels;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9494, ASSERT_TYPE_ASSERT, "( 0 ) <= ( numModels ) && ( numModels ) <= ( ( 32 ) )", "numModels not in [0, DOBJ_MAX_CHARACTER_SUBMODELS]\n\t%i not in [%i, %i]", forceBlendTimea, 0i64, curveIDa) )
        __debugbreak();
    }
    ScopedCriticalSection::ScopedCriticalSection((ScopedCriticalSection *)&v170, CRITSECT_DEBUG_HIDDEN_BONES, SCOPED_CRITSECT_NORMAL);
    Com_Printf(34, "=== BEGIN DUMP MODEL NAMES  ===\n");
    v98 = 0;
    if ( numModels > 0 )
    {
      v99 = outModelTypes;
      v100 = outDobjModels;
      do
      {
        SLODWORD(fmta) = *v99;
        Com_Printf(34, "Model %d: %s Character Type: %d\n", (unsigned int)v98++, v100->model->name, fmta);
        ++v100;
        ++v99;
      }
      while ( v98 < numModels );
      v91 = v153;
    }
    Com_Printf(34, "=== END DUMP MODEL NAMES  ===\n");
    ScopedCriticalSection::~ScopedCriticalSection((ScopedCriticalSection *)&v170);
    ActiveStatics = (BgStatic *)v165;
  }
  v101 = outModelListBuildResults.numModels;
  LODWORD(pDObja) = outModelListBuildResults.numModels;
  _RSI->firstWeaponPartIndex = outModelListBuildResults.firstWeaponPartIndex;
  weaponBoneCount = outModelListBuildResults.weaponBoneCount;
  _RSI->weaponBoneCount = outModelListBuildResults.weaponBoneCount;
  v103 = weaponBoneCount || _RSI->hideRocket || _RSI->skydiveAnimState || _RSI->heldWeaponOccluded || _RSI->stowedWeaponOccluded || v150;
  LODWORD(v158) = v103;
  LOBYTE(objIDa) = BG_IsCharacterEntity(v91);
  obj = ActiveStatics->CreateDObj(ActiveStatics, outDobjModels, v101, (XAnimTree *)obj, v91->number, _RSI->entityNum, objIDa);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9968, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  hideWeapon = oldNumModels > 0;
  v104 = 0;
  _RDI = &v170;
  do
  {
    __asm { vmovdqu xmmword ptr [rdi], xmm6 }
    ++v104;
    _RDI = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)_RDI + 16);
  }
  while ( v104 < 2 );
  v106 = obj;
  if ( hideWeapon && v103 || (v107 = v153, BgStatic::FixUpHidePartBits(ActiveStatics, v153->number, (const DObjModel (*)[32])refDobjModels, (const CharacterModelType (*)[32])refModelTypes, numRefModels[0], (const DObjModel (*)[32])outDobjModels, (const CharacterModelType (*)[32])outModelTypes, v101, partBits, &outFixedUpHidePartBits), bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v170, &outFixedUpHidePartBits), v103) )
  {
    numberOfBonesBeforeWeapons = outModelListBuildResults.numberOfBonesBeforeWeapons;
    if ( (int)outModelListBuildResults.numberOfModelsBeforeWeapons < v101 )
    {
      v109 = &outDobjModels[outModelListBuildResults.numberOfModelsBeforeWeapons];
      v110 = &outModelTypes[outModelListBuildResults.numberOfModelsBeforeWeapons];
      v111 = (unsigned int)pDObja - outModelListBuildResults.numberOfModelsBeforeWeapons;
      v112 = r_executionWeapona;
      while ( 1 )
      {
        v113 = XModelNumBones(v109->model);
        if ( r_stowedWeapona->weaponIdx && *v110 == CHAR_MODEL_WEAPON_STOWED )
        {
          BG_UpdateWeaponHidePartBitsForModel(r_stowedWeapona, v109->model, (DObjPartBits *)&v170, numberOfBonesBeforeWeapons);
          if ( _RSI->stowedWeaponOccluded )
          {
            v114 = !BG_StowedOcclusionTestEnabled(r_stowedWeapona);
            goto LABEL_149;
          }
        }
        else if ( v112->weaponIdx && *v110 == CHAR_MODEL_WEAPON_EXECUTION )
        {
          BG_UpdateWeaponHidePartBitsForModel(v112, v109->model, (DObjPartBits *)&v170, numberOfBonesBeforeWeapons);
        }
        else if ( r_heldWeapona->weaponIdx && (unsigned int)(*v110 - 12) <= 1 )
        {
          BG_UpdateWeaponHidePartBitsForModel(r_heldWeapona, v109->model, (DObjPartBits *)&v170, numberOfBonesBeforeWeapons);
          v114 = !_RSI->heldWeaponOccluded;
LABEL_149:
          if ( !v114 )
            BG_HideOccludedWeaponParts(v109->model, (DObjPartBits *)&v170, numberOfBonesBeforeWeapons);
        }
        numberOfBonesBeforeWeapons += v113;
        ++v110;
        ++v109;
        if ( !--v111 )
        {
          v106 = obj;
          ActiveStatics = (BgStatic *)v165;
          v101 = (int)pDObja;
          v103 = (int)v158;
          break;
        }
      }
    }
    if ( _RSI->hideRocket )
    {
      inOutIndex = -2;
      if ( DObjGetBoneIndexInternal_18(v106, scr_const.tag_rocket, &inOutIndex, numRefModels) )
        bitarray_base<bitarray<256>>::setBit(&v170, inOutIndex);
    }
    v107 = v153;
  }
  DObjSetHidePartBits(v106, (const DObjPartBits *)&v170);
  v115 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v115);
  if ( v115->current.integer == -1 )
    goto LABEL_233;
  v116 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v116);
  if ( v116->current.integer == v107->number )
  {
LABEL_233:
    if ( ActiveStatics->IsClient(ActiveStatics) )
    {
      Com_Printf(34, "BG_UpdateCharacterDObj: Dumping hide part bits\n");
      BG_DebugDumpHiddenBones(v106, &v106->hidePartBits);
    }
  }
  if ( hideWeapon )
    BG_UpdateCharacterDObj_RestoreNonWeaponHideParts(v107, v106, (const DObjModel (*)[32])oldDObjModels, (const CharacterModelType (*)[32])_RSI->dobjModelTypes, oldNumModels, (const DObjModel (*)[32])outDobjModels, (const CharacterModelType (*)[32])outModelTypes, v101, &hidePartBitsFromOldDObj, outModelListBuildResults.numberOfBonesBeforeWeapons, outModelListBuildResults.weaponBoneCount);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&_RSI->replicatedPartBits, partBits);
  if ( !_RSI->stowedWeaponOccluded || !_RSI->attachModelIsOnBack )
    goto LABEL_176;
  v117 = DVARBOOL_killswitch_weapon_visibility_attachedmodel_check_enabled;
  if ( !DVARBOOL_killswitch_weapon_visibility_attachedmodel_check_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_visibility_attachedmodel_check_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v117);
  if ( v117->current.enabled )
    v118 = 1;
  else
LABEL_176:
    v118 = 0;
  if ( v103 && v118 )
  {
    if ( !ActiveStatics->IsClient(ActiveStatics) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10064, ASSERT_TYPE_ASSERT, "(bgameStatic->IsClient())", (const char *)&queryFormat, "bgameStatic->IsClient()") )
      __debugbreak();
    DObjGetHidePartBits(v106, (DObjPartBits *)&v170);
    v119 = 0;
    if ( v101 > 0 )
    {
      v120 = outDobjModels;
      v121 = outModelTypes;
      v122 = (DObjPartBits *)(unsigned int)v101;
      partBits = (DObjPartBits *)(unsigned int)v101;
      do
      {
        model = v120->model;
        if ( !v120->model )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          v122 = partBits;
        }
        numRefModels[0] = model->numBones;
        v124 = *(int *)v121;
        if ( (unsigned int)(v124 - 2) <= 7 )
        {
          if ( _RSI == (characterInfo_t *)-1344i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v125 = *(_DWORD *)&_RSI->attachTagIndexChanged[4 * ((v124 - 2) >> 5) + 12];
          if ( _bittest(&v125, ((_BYTE)v124 - 2) & 0x1F) )
          {
            if ( !_RSI->stowedWeaponOccluded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 10081, ASSERT_TYPE_ASSERT, "(ci->stowedWeaponOccluded)", (const char *)&queryFormat, "ci->stowedWeaponOccluded") )
              __debugbreak();
            BG_HideOccludedWeaponParts(v120->model, (DObjPartBits *)&v170, v119);
          }
          v122 = partBits;
        }
        v119 += numRefModels[0];
        ++v121;
        ++v120;
        v122 = (DObjPartBits *)((char *)v122 - 1);
        partBits = v122;
      }
      while ( v122 );
      v106 = obj;
      ActiveStatics = (BgStatic *)v165;
    }
    DObjSetHidePartBits(v106, (const DObjPartBits *)&v170);
    _RSI->replicatedPartBitsOverriden = 1;
    v126 = DCONST_DVARINT_bg_debugCharDobjUpdate;
    if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v126);
    if ( v126->current.integer == -1 )
      goto LABEL_234;
    v127 = DCONST_DVARINT_bg_debugCharDobjUpdate;
    if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v127);
    if ( v127->current.integer == v153->number )
    {
LABEL_234:
      if ( ActiveStatics->IsClient(ActiveStatics) )
      {
        Com_Printf(34, "BG_UpdateCharacterDObj: Dumping hide part bits (post-client OR)\n");
        BG_DebugDumpHiddenBones(v106, &v106->hidePartBits);
      }
    }
  }
  else
  {
    _RSI->replicatedPartBitsOverriden = 0;
  }
  *(_WORD *)_RSI->worldIKStatus = *(_WORD *)&v156[0][0];
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+6AB8h+outModelTypes]
    vmovups ymmword ptr [rsi+544h], ymm0
    vmovups ymm1, ymmword ptr [rsp+6AB8h+outModelTypes+20h]
    vmovups ymmword ptr [rsi+564h], ymm1
    vmovups ymm0, ymmword ptr [rsp+6AB8h+outModelTypes+40h]
    vmovups ymmword ptr [rsi+584h], ymm0
    vmovups ymm1, ymmword ptr [rsp+6AB8h+outModelTypes+60h]
    vmovups ymmword ptr [rsi+5A4h], ymm1
  }
  v132 = r_heldWeapona;
  if ( outModelListBuildResults.heldWeapon1Idx >= 0 && !_RSI->heldWeaponOccluded )
    BG_UpdatedWeaponBones(r_heldWeapona, v106, outModelListBuildResults.heldWeapon1Idx);
  if ( outModelListBuildResults.heldWeapon2Idx >= 0 && !_RSI->heldWeaponOccluded )
    BG_UpdatedWeaponBones(v132, v106, outModelListBuildResults.heldWeapon2Idx);
  v133 = r_stowedWeapona;
  if ( r_stowedWeapona->weaponIdx && outModelListBuildResults.stowedWeaponIdx >= 0 && !_RSI->stowedWeaponOccluded )
    BG_UpdatedWeaponBones(r_stowedWeapona, v106, outModelListBuildResults.stowedWeaponIdx);
  v134 = localClientNuma;
  if ( localClientNuma != LOCAL_CLIENT_INVALID )
  {
    FX_Dismemberment_DObjUpdate(localClientNuma, v106);
    FX_MarkEntUpdateEnd(&context, v134, v153->number, v106, 0, 0, 0);
  }
  _RSI->dobjDirty = 0;
  BG_UpdateVisibilitySlingBones(v153, v106, v150, v132, v133, outModelListBuildResults.heldWeapon1Idx, outModelListBuildResults.stowedWeaponIdx, 1, oldNumModels > 0);
  XAnimBonePhysicsRestoreState(v106, &bonePhysicsState);
  if ( _RSI->dobjHeldWeapon.weaponIdx )
    ActiveStatics->CreateWeaponPhysics(ActiveStatics, v106, &_RSI->dobjHeldWeapon);
  if ( _RSI->dobjStowedWeapon.weaponIdx )
    ((void (__fastcall *)(BgStatic *, DObj *))ActiveStatics->CreateWeaponPhysics)(ActiveStatics, v106);
LABEL_229:
  Sys_ProfEndNamedEvent();
  _R11 = &v187;
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
  _RBX = ci;
  _RDI = backup;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9709, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbx+5F4h], ymm0
    vmovups xmm1, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rbx+614h], xmm1
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rbx+624h], xmm0
  }
  *(_DWORD *)&_RBX->dobjHeldWeapon.weaponCamo = *(_DWORD *)&_RDI->dobjHeldWeapon.weaponCamo;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+3Ch]
    vmovups ymmword ptr [rbx+6E8h], ymm0
    vmovups xmm1, xmmword ptr [rdi+5Ch]
    vmovups xmmword ptr [rbx+708h], xmm1
    vmovsd  xmm0, qword ptr [rdi+6Ch]
    vmovsd  qword ptr [rbx+718h], xmm0
  }
  *(_DWORD *)&_RBX->dobjTurretWeapon.weaponCamo = *(_DWORD *)&_RDI->dobjTurretWeapon.weaponCamo;
  _RBX->hideWeapon = _RDI->hideWeapon;
  _RBX->stowHeldWeapon = _RDI->stowHeldWeapon;
}

/*
==============
BG_UpdateCharacterDObj_RestoreNonWeaponHideParts
==============
*/
void BG_UpdateCharacterDObj_RestoreNonWeaponHideParts(const entityState_t *es, DObj *newDObj, const DObjModel (*oldDObjModels)[32], const CharacterModelType (*oldModelTypes)[32], const int oldNumModels, const DObjModel (*newDobjModels)[32], const CharacterModelType (*newModelTypes)[32], const int numNewModels, const DObjPartBits *hidePartBitsFromOldDObj, const unsigned int numberOfBonesBeforeWeapons, const unsigned int newWeaponBoneCount)
{
  const entityState_t *v12; 
  DObj *v15; 
  BgStatic *v16; 
  unsigned int v17; 
  unsigned __int64 v18; 
  unsigned int v19; 
  unsigned __int64 v20; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  BgStatic *ActiveStatics; 
  DObjPartBits partBits; 
  DObjPartBits outFixedUpHidePartBits; 

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
    __asm { vmovaps [rsp+108h+var_58], xmm6 }
    _RDI = 0i64;
    do
    {
      __asm
      {
        vlddqu  xmm6, xmmword ptr [rsp+rdi+108h+var_80.baseclass_0.baseclass_0.baseclass_0.array]
        vmovdqu xmmword ptr [rsp+rdi+108h+partBits.baseclass_0.baseclass_0.baseclass_0.array], xmm6
      }
      _RDI += 16i64;
      ++v17;
    }
    while ( v17 < 2 );
    __asm { vmovaps xmm6, [rsp+108h+var_58] }
  }
  DObjSetHidePartBits(v15, &partBits);
  v16->OverridePlayerHideParts(v16, v12->number, &partBits);
  v24 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  if ( v24->current.integer == -1 )
    goto LABEL_34;
  v25 = DCONST_DVARINT_bg_debugCharDobjUpdate;
  if ( !DCONST_DVARINT_bg_debugCharDobjUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugCharDobjUpdate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( v25->current.integer == v12->number )
  {
LABEL_34:
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
  int v12; 
  int v17; 

  _RBX = ci;
  _RDI = backup;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 9691, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  memset_0(_RDI, 0, sizeof(CharacterInfoBackUpForReferenceList));
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+5F4h]
    vmovups ymmword ptr [rdi], ymm0
    vmovups xmm1, xmmword ptr [rbx+614h]
    vmovups xmmword ptr [rdi+20h], xmm1
    vmovsd  xmm0, qword ptr [rbx+624h]
    vmovsd  qword ptr [rdi+30h], xmm0
  }
  *(_DWORD *)&_RDI->dobjHeldWeapon.weaponCamo = *(_DWORD *)&_RBX->dobjHeldWeapon.weaponCamo;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+6E8h]
    vmovups ymmword ptr [rdi+3Ch], ymm0
    vmovups xmm1, xmmword ptr [rbx+708h]
    vmovups xmmword ptr [rdi+5Ch], xmm1
    vmovsd  xmm0, qword ptr [rbx+718h]
    vmovsd  qword ptr [rdi+6Ch], xmm0
  }
  *(_DWORD *)&_RDI->dobjTurretWeapon.weaponCamo = *(_DWORD *)&_RBX->dobjTurretWeapon.weaponCamo;
  _RDI->hideWeapon = _RBX->hideWeapon;
  _RDI->stowHeldWeapon = _RBX->stowHeldWeapon;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+760h]
    vmovups xmm1, xmmword ptr [rbx+780h]
  }
  v12 = *(_DWORD *)&_RBX->serverDobjHeldWeapon.weaponCamo;
  __asm
  {
    vmovups ymmword ptr [rbx+5F4h], ymm0
    vmovsd  xmm0, qword ptr [rbx+790h]
    vmovups xmmword ptr [rbx+614h], xmm1
    vmovups xmm1, xmmword ptr [rbx+7BCh]
    vmovsd  qword ptr [rbx+624h], xmm0
    vmovups ymm0, ymmword ptr [rbx+79Ch]
    vmovups ymmword ptr [rbx+6E8h], ymm0
    vmovsd  xmm0, qword ptr [rbx+7CCh]
  }
  *(_DWORD *)&_RBX->dobjHeldWeapon.weaponCamo = v12;
  v17 = *(_DWORD *)&_RBX->serverDobjTurretWeapon.weaponCamo;
  __asm
  {
    vmovups xmmword ptr [rbx+708h], xmm1
    vmovsd  qword ptr [rbx+718h], xmm0
  }
  *(_DWORD *)&_RBX->dobjTurretWeapon.weaponCamo = v17;
  _RBX->hideWeapon = _RBX->serverDobjHideWeapon;
  _RBX->stowHeldWeapon = _RBX->serverDobjStowHeldWeapon;
}

/*
==============
BG_UpdateCustomNodeParameters
==============
*/
void BG_UpdateCustomNodeParameters(const BgHandler *handler, characterInfo_t *ci, const entityState_t *es, bool isNewAnim)
{
  BgStatic *ActiveStatics; 
  __int64 v12; 
  unsigned int number; 
  DObj *ClientDObj; 
  DObj *v15; 
  const dvar_t *v30; 
  unsigned __int8 SuitFacialAnimType; 
  bool IsEnabled; 
  unsigned int Animset; 
  unsigned int Anim; 
  PlayerASM_AnimSlot v61; 
  unsigned int v62; 
  unsigned int v63; 
  const PlayerAnimEntry *animation; 
  float outForwardSlope; 
  float outRightSlope; 
  vec2_t cartesianCoords; 
  vec3_t value; 

  _RSI = ci;
  BG_CheckThread();
  ActiveStatics = BgStatic::GetActiveStatics();
  v12 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6748, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  number = es->number;
  if ( ActiveStatics->IsClient(ActiveStatics) )
    ClientDObj = Com_GetClientDObj(number, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable));
  else
    ClientDObj = (DObj *)((__int64 (__fastcall *)(BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, number);
  v15 = ClientDObj;
  if ( ClientDObj && ClientDObj->tree )
  {
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, dword ptr [rsi+147Ch]; value
      vmovaps [rsp+0C8h+var_58], xmm7
    }
    XAnimSetFloatGameParameterByIndex(ClientDObj, 0, *(float *)&_XMM2);
    BG_UpdateStickInputParameters(v15, _RSI);
    __asm { vmovss  xmm2, dword ptr [rsi+9F0h]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0x2Du, *(float *)&_XMM2);
    __asm { vmovss  xmm2, dword ptr [rsi+9F4h]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0x2Cu, *(float *)&_XMM2);
    handler->GetEntityOrigin((BgHandler *)handler, es->number, &value);
    XAnimSetVec3GameParameterByIndex(v15, 1u, &value);
    __asm { vmovss  xmm2, dword ptr [rsi+9C4h]; value }
    XAnimSetFloatGameParameterByIndex(v15, 2u, *(float *)&_XMM2);
    __asm { vmovss  xmm2, dword ptr [rsi+0AE4h]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0xBu, *(float *)&_XMM2);
    __asm { vmovss  xmm2, dword ptr [rsi+0AE8h]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0xCu, *(float *)&_XMM2);
    __asm { vmovss  xmm2, dword ptr [rsi+0AECh]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0xDu, *(float *)&_XMM2);
    __asm { vmovss  xmm2, dword ptr [rsi+998h]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0xEu, *(float *)&_XMM2);
    __asm { vmovss  xmm2, dword ptr [rsi+9B4h]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0xFu, *(float *)&_XMM2);
    __asm { vmovss  xmm2, dword ptr [rsi+9B8h]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0x10u, *(float *)&_XMM2);
    XAnimSetVec3GameParameterByIndex(v15, 0x11u, &_RSI->mountAnimation.pivotPoint);
    __asm { vmovss  xmm2, dword ptr [rsi+994h]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0x12u, *(float *)&_XMM2);
    *(double *)&_XMM0 = vectosignedyaw((const vec2_t *)&_RSI->mountAnimation.worldmodelForwardDir);
    __asm { vmovaps xmm2, xmm0; value }
    XAnimSetFloatGameParameterByIndex(v15, 0x13u, *(float *)&_XMM2);
    __asm { vmovss  xmm2, dword ptr [rsi+9BCh]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0x14u, *(float *)&_XMM2);
    v30 = DCONST_DVARBOOL_bg_slope_worldmodel_anims;
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vmovss  [rsp+0C8h+outForwardSlope], xmm7
      vmovss  [rsp+0C8h+outRightSlope], xmm7
    }
    if ( !DCONST_DVARBOOL_bg_slope_worldmodel_anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_slope_worldmodel_anims") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    if ( v30->current.enabled )
    {
      __asm { vmovss  xmm0, dword ptr [rsi+800h]; legsYaw }
      BG_SlopeWorldmodel_GetBSCoord(*(const float *)&_XMM0, &_RSI->groundNormalInterpolated, &outForwardSlope, &outRightSlope);
    }
    __asm { vmovss  xmm2, [rsp+0C8h+outForwardSlope]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0x3Au, *(float *)&_XMM2);
    __asm { vmovss  xmm2, [rsp+0C8h+outRightSlope]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0x3Bu, *(float *)&_XMM2);
    *(double *)&_XMM0 = BG_SlopeWorldmodel_GetZAdjustment(_RSI->suitIndex, &_RSI->groundNormalInterpolated);
    __asm { vmovaps xmm2, xmm0; value }
    XAnimSetFloatGameParameterByIndex(v15, 0x3Cu, *(float *)&_XMM2);
    XAnimSetBoolGameParameterByIndex(v15, 0x3Du, _RSI->isOnStairs);
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+0AD0h]; angle2
      vmovss  xmm0, dword ptr [rsi+0AD4h]; angle1
    }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vmovss  xmm2, cs:__real@42b40000; max
      vmovss  xmm1, cs:__real@c2b40000; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm2, xmm0; value }
    XAnimSetFloatGameParameterByIndex(v15, 0x3Fu, *(float *)&_XMM2);
    __asm { vmovss  xmm2, dword ptr [rsi+0AD0h]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0x40u, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vmovss  xmm0, dword ptr [rsi+918h]; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm2, xmm0; value }
    XAnimSetFloatGameParameterByIndex(v15, 0x3Eu, *(float *)&_XMM2);
    BG_UpdateLadderNodeParameters(handler, _RSI, es);
    BG_Execution_UpdateScrubTime(_RSI, v15, *(_DWORD *)(v12 + 19528), *(_DWORD *)(v12 + 19532));
    __asm { vmovss  xmm2, dword ptr [rsi+904h]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0x33u, *(float *)&_XMM2);
    __asm { vmovss  xmm2, dword ptr [rsi+908h]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0x34u, *(float *)&_XMM2);
    __asm { vmovss  xmm2, dword ptr [rsi+90Ch]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0x35u, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+908h]
      vmovss  xmm3, dword ptr [rsi+904h]
    }
    *(_QWORD *)&_RSI->skydivePolarAngleInterpolated = 0i64;
    __asm
    {
      vmovss  dword ptr [rsp+0C8h+cartesianCoords], xmm0
      vmovss  dword ptr [rsp+0C8h+cartesianCoords+4], xmm3
    }
    CartesianToPolar(&cartesianCoords, &_RSI->skydivePolarAngleInterpolated, &_RSI->skydivePolarRadiusInterpolated);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vmovss  xmm0, dword ptr [rsi+914h]; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  dword ptr [rsi+914h], xmm0
      vmovss  xmm0, dword ptr [rsi+910h]; angle
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmovss  dword ptr [rsi+910h], xmm0
      vmovaps xmm2, xmm0; value
    }
    XAnimSetFloatGameParameterByIndex(v15, 0x36u, *(float *)&_XMM2);
    __asm { vmovss  xmm2, dword ptr [rsi+914h]; value }
    XAnimSetFloatGameParameterByIndex(v15, 0x37u, *(float *)&_XMM2);
    SuitFacialAnimType = BG_GetSuitFacialAnimType(_RSI->suitIndex);
    XAnimSetByteGameParameterByIndex(v15, 0x38u, SuitFacialAnimType);
    IsEnabled = PlayerASM_IsEnabled();
    __asm { vmovaps xmm7, [rsp+0C8h+var_58] }
    if ( IsEnabled )
    {
      Animset = BG_PlayerASM_GetAnimset(_RSI);
      Anim = BG_PlayerASM_GetAnim(_RSI, MOVEMENT);
      LOBYTE(v61) = 1;
      v62 = Anim;
      v63 = BG_PlayerASM_GetAnim(_RSI, v61);
      if ( BG_PlayerASM_IsTurretAlias(v62, Animset) )
      {
        __asm { vmovss  xmm2, dword ptr [rsi+8C4h]; value }
        XAnimSetFloatGameParameterByIndex(v15, 0x20u, *(float *)&_XMM2);
      }
      __asm { vmovss  xmm2, dword ptr [rsi+8CCh]; value }
      XAnimSetFloatGameParameterByIndex(v15, 0x22u, *(float *)&_XMM2);
      __asm { vmovss  xmm2, dword ptr [rsi+8C8h]; value }
      XAnimSetFloatGameParameterByIndex(v15, 0x21u, *(float *)&_XMM2);
      __asm { vmovss  xmm2, dword ptr [rsi+8D0h]; value }
      XAnimSetFloatGameParameterByIndex(v15, 0x23u, *(float *)&_XMM2);
      XAnimSetIntGameParameterByIndex(v15, 0x39u, v63 + 7 * v62);
      BG_PlayerASM_UpdateTreeParameters(v15, _RSI, isNewAnim);
      BG_AnimUpdateScriptedAnimSceneTime(_RSI, v15, *(_DWORD *)(v12 + 19528), *(_DWORD *)(v12 + 19532));
    }
    else
    {
      animation = _RSI->legs.animation;
      if ( animation && (animation->flags & 4) != 0 )
      {
        __asm { vmovss  xmm2, dword ptr [rsi+8C4h]; value }
        XAnimSetFloatGameParameterByIndex(v15, 0x20u, *(float *)&_XMM2);
      }
    }
    BG_GameInterface_UpdateCustomNodeParameters(_RSI, es);
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
  DObj *v12; 
  int suitIndex; 
  bool v14; 
  vec3_t trBase; 
  vec3_t outAnchorPos; 
  vec3_t angles; 
  LadderInfo outLadderInfo; 

  _RBX = ci;
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6492, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6493, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6494, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  BG_Ladder_HandleAnimTransition(_RBX, es);
  if ( BG_IsPlayingLadderAnims(_RBX) )
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6504, ASSERT_TYPE_ASSERT, "(bgameStatic)", (const char *)&queryFormat, "bgameStatic") )
      __debugbreak();
    number = es->number;
    if ( ActiveStatics->IsClient(ActiveStatics) )
      ClientDObj = Com_GetClientDObj(number, (LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable));
    else
      ClientDObj = (DObj *)((__int64 (__fastcall *)(BgStatic *, _QWORD))ActiveStatics->__vftable[1].HasCharacterInfo)(ActiveStatics, number);
    v12 = ClientDObj;
    Trajectory_GetTrBase(&es->lerp.pos, &trBase);
    if ( BG_GetLadderInfo(&trBase, handler, &outLadderInfo, NULL, 0, &_RBX->edgeQueryLadderHintNodeCharInfo, &_RBX->edgeQueryLadderWidthHintNodeCharInfo) )
    {
      suitIndex = _RBX->suitIndex;
      v14 = _RBX->isFirstPerson != 0;
      __asm
      {
        vmovaps [rsp+118h+var_38], xmm6
        vmovaps [rsp+118h+var_48], xmm7
      }
      BG_Ladder_GetAnchorWorldPosition(&trBase, suitIndex, v14, &outAnchorPos);
      _RSI = BG_GetSuitDef(_RBX->suitIndex);
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6520, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
        __debugbreak();
      AxisToAngles(&outLadderInfo.axis, &angles);
      XAnimSetVec3GameParameterByIndex(v12, 0x15u, &outAnchorPos);
      XAnimSetVec3GameParameterByIndex(v12, 0x16u, &outLadderInfo.bottom);
      XAnimSetVec3GameParameterByIndex(v12, 0x17u, &outLadderInfo.top);
      __asm
      {
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, dword ptr [rbx+147Ch]; value
      }
      XAnimSetFloatGameParameterByIndex(v12, 0x18u, *(float *)&_XMM2);
      __asm { vmovss  xmm2, [rsp+118h+outLadderInfo.rungDistance]; value }
      XAnimSetFloatGameParameterByIndex(v12, 0x19u, *(float *)&_XMM2);
      __asm { vmovss  xmm2, dword ptr [rsi+1ACh]; value }
      XAnimSetFloatGameParameterByIndex(v12, 0x1Au, *(float *)&_XMM2);
      XAnimSetVec3GameParameterByIndex(v12, 0x1Bu, &angles);
      __asm { vmovss  xmm2, [rsp+118h+outLadderInfo.width]; value }
      XAnimSetFloatGameParameterByIndex(v12, 0x1Cu, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+800h]; angle2
        vmovss  xmm0, dword ptr [rbx+858h]; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+860h]
        vmulss  xmm6, xmm1, cs:__real@3b360b61
        vaddss  xmm3, xmm6, cs:__real@3f000000
        vxorps  xmm1, xmm1, xmm1
        vroundss xmm5, xmm1, xmm3, 1
        vsubss  xmm2, xmm6, xmm5
        vmulss  xmm2, xmm2, cs:__real@c3b40000; value
        vmovaps xmm7, xmm0
      }
      XAnimSetFloatGameParameterByIndex(v12, 0x1Du, *(float *)&_XMM2);
      __asm { vmovaps xmm2, xmm7; value }
      XAnimSetFloatGameParameterByIndex(v12, 0x1Eu, *(float *)&_XMM2);
      __asm { vmovss  xmm3, dword ptr [rsi+1ACh]; handDistance }
      *(double *)&_XMM0 = BG_Ladder_GetTargetAnimationTime(&outAnchorPos, &outLadderInfo.bottom, &outLadderInfo.top, *(float *)&_XMM3);
      __asm { vmovaps xmm2, xmm0; value }
      XAnimSetFloatGameParameterByIndex(v12, 0x1Fu, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm7, [rsp+118h+var_48]
        vmovaps xmm6, [rsp+118h+var_38]
      }
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
  __int64 v12; 
  int v22; 
  EdgeQueryCache *v23; 
  int v25; 
  __int16 linkEnt; 
  int v28; 
  __int16 v29; 
  int v35; 
  bool v36; 
  char v53; 
  int v84; 
  bool v85; 
  bool v87; 
  __int16 groundEntityNum; 
  bool v89; 
  bool IsEnabled; 
  char v102; 
  const dvar_t *v112; 
  const char *v113; 
  PlayerAnimStrafeStates v120; 
  int v124; 
  int v126; 
  int v127; 
  __int64 animMoveType; 
  int v129; 
  int v130; 
  BgStatic *ActiveStatics; 
  __int64 v132; 
  __int64 v133; 
  __int64 v134; 
  unsigned int Animset; 
  PlayerASM_AnimSlot v136; 
  unsigned int v137; 
  unsigned int Anim; 
  bool v139; 
  unsigned __int8 v140; 
  int v141; 
  int v142; 
  int v147; 
  unsigned int *edgeLadderQueryHint; 
  SuitAnimType suitAnimIndex; 
  vec3_t vec; 
  vec2_t v156; 
  vec3_t outVictimPos; 
  vec3_t outAttackerPos; 
  LadderInfo outLadderInfo; 

  _R14 = pml;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3228, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3230, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3230, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( _RDI->vehicleState.entity == 2047 )
  {
    __asm
    {
      vmovaps [rsp+160h+var_50], xmm7
      vmovaps [rsp+160h+var_60], xmm8
      vmovaps [rsp+160h+var_70], xmm9
    }
    suitAnimIndex = BG_GetSuitAnimIndexFromPlayerState(_RDI);
    *(_QWORD *)vec.v = BG_GetSuitDef(_RDI->suitIndex);
    v12 = *(_QWORD *)vec.v;
    if ( !*(_QWORD *)vec.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3242, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    __asm
    {
      vmovss  xmm9, cs:__real@43b40000
      vmovaps xmm1, xmm9; maxAbsValueSize
    }
    *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(_RDI->movementDirPrecise, *(float *)&_XMM1, 0x10u);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1; value
      vmovaps xmm7, xmm0
      vxorps  xmm8, xmm8, xmm8
    }
    BG_SetPreciseMovementDir(_RDI, *(float *)&_XMM1);
    if ( BG_GameInterface_UpdateMovementDir(pm, _R14, clampOnly) )
      goto LABEL_126;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x1Du) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+3Ch]
        vmovss  xmm1, dword ptr [rdi+40h]
        vmovss  dword ptr [rsp+160h+vec], xmm0
        vmovss  xmm0, dword ptr [rdi+44h]
        vmovss  dword ptr [rsp+160h+vec+8], xmm0
        vmovss  dword ptr [rsp+160h+vec+4], xmm1
      }
      WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&pm->refFrame, &vec);
      __asm { vmovss  xmm0, dword ptr [rdi+1DCh]; degrees }
      v22 = BG_DegreesToMovementDir(*(float *)&_XMM0);
      _RDI->movementDir = v22;
      if ( (unsigned __int8)v22 != v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3263, ASSERT_TYPE_ASSERT, "(( ps->movementDir & ( (1 << 8) - 1 ) ) == ps->movementDir)", (const char *)&queryFormat, "( ps->movementDir & ( (1 << MOVEMENTDIR_BITS) - 1 ) ) == ps->movementDir") )
        __debugbreak();
      BG_StopTurning(pm, _R14);
      goto LABEL_126;
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 6u) )
    {
      v23 = pm->m_bgHandler->GetEdgeQueryCache(pm->m_bgHandler, (unsigned int)_RDI->clientNum);
      BG_GetLadderInfo(&_RDI->origin, pm->m_bgHandler, &outLadderInfo, NULL, 0, &v23->ladderHintNode, &v23->ladderWidthHintNode);
      *(double *)&_XMM0 = vectoyaw((const vec2_t *)&outLadderInfo);
      __asm { vaddss  xmm0, xmm0, cs:__real@43340000; degrees }
      v25 = BG_DegreesToMovementDir(*(float *)&_XMM0);
      _RDI->movementDir = v25;
      if ( (unsigned __int8)v25 != v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3281, ASSERT_TYPE_ASSERT, "((ps->movementDir & ((1 << 8) - 1)) == ps->movementDir)", (const char *)&queryFormat, "(ps->movementDir & ((1 << MOVEMENTDIR_BITS) - 1)) == ps->movementDir") )
        __debugbreak();
      BG_StopTurning(pm, _R14);
      goto LABEL_126;
    }
    if ( BG_IsScriptedSceneAnimFlagEnabled(_RDI) )
    {
      linkEnt = _RDI->linkEnt;
      if ( linkEnt != 2047 )
      {
        pm->m_bgHandler->GetEntityAngles((BgHandler *)pm->m_bgHandler, linkEnt, (vec3_t *)&v156);
        __asm { vmovss  xmm0, dword ptr [rsp+160h+var_108+4]; angle }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        v28 = BG_DegreesToMovementDir(*(float *)&_XMM0);
        _RDI->movementDir = v28;
        if ( (unsigned __int8)v28 != v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3296, ASSERT_TYPE_ASSERT, "((ps->movementDir & ((1 << 8) - 1)) == ps->movementDir)", (const char *)&queryFormat, "(ps->movementDir & ((1 << MOVEMENTDIR_BITS) - 1)) == ps->movementDir") )
          __debugbreak();
        BG_StopTurning(pm, _R14);
        goto LABEL_126;
      }
    }
    __asm { vmovaps [rsp+160h+var_40], xmm6 }
    if ( BG_IsLinkedToAnimFlagEnabled(_RDI) )
    {
      v29 = _RDI->linkEnt;
      if ( v29 != 2047 )
      {
        pm->m_bgHandler->GetEntityAngles((BgHandler *)pm->m_bgHandler, v29, (vec3_t *)&v156);
        __asm { vmovss  xmm0, dword ptr [rsp+160h+var_108+4]; angle }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm
        {
          vmovaps xmm6, xmm0
          vmovss  xmm0, dword ptr [rdi+1DCh]; angle
        }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm
        {
          vmovss  xmm2, cs:__real@41f00000; range
          vmovaps xmm1, xmm6; angle2
        }
        *(double *)&_XMM0 = AngleClamp(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2);
        v35 = BG_DegreesToMovementDir(*(float *)&_XMM0);
        _RDI->movementDir = v35;
        if ( (unsigned __int8)v35 != v35 )
        {
          v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3316, ASSERT_TYPE_ASSERT, "((ps->movementDir & ((1 << 8) - 1)) == ps->movementDir)", (const char *)&queryFormat, "(ps->movementDir & ((1 << MOVEMENTDIR_BITS) - 1)) == ps->movementDir");
          goto LABEL_122;
        }
LABEL_124:
        BG_StopTurning(pm, _R14);
LABEL_125:
        __asm { vmovaps xmm6, [rsp+160h+var_40] }
LABEL_126:
        __asm
        {
          vmovaps xmm7, [rsp+160h+var_50]
          vmovaps xmm8, [rsp+160h+var_60]
          vmovaps xmm9, [rsp+160h+var_70]
        }
        return;
      }
    }
    if ( BG_IsThirdPersonMode(pm->weaponMap, _RDI) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x16u) && _RDI->meleeChargeEnt >= 0 && _RDI->meleeChargeEnt <= 0x7FEu )
    {
      if ( !PM_MeleeGetEntityOriginVelocity(pm, _RDI->meleeChargeEnt, &outAttackerPos, &outVictimPos, NULL) )
      {
        Com_PrintWarning(34, "BG_UpdateMovementDir: Could not fetch melee charge target ent. Keeping movementDir from last frame\n");
        goto LABEL_124;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+160h+outVictimPos]
        vsubss  xmm1, xmm0, dword ptr [rsp+160h+outAttackerPos]
        vmovss  xmm2, dword ptr [rsp+160h+outVictimPos+4]
        vsubss  xmm0, xmm2, dword ptr [rsp+160h+outAttackerPos+4]
        vmovss  dword ptr [rsp+160h+vec], xmm1
        vmovss  xmm1, dword ptr [rsp+160h+outVictimPos+8]
        vsubss  xmm2, xmm1, dword ptr [rbp+60h+outAttackerPos+8]
        vxorps  xmm1, xmm1, xmm1; height
        vmovss  dword ptr [rsp+160h+vec+8], xmm2
        vmovss  dword ptr [rsp+160h+vec+4], xmm0
      }
      WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
      __asm
      {
        vmovss  xmm3, dword ptr [rsp+160h+vec+4]
        vmovss  xmm4, dword ptr [rsp+160h+vec]
        vmovss  xmm5, dword ptr [rsp+160h+vec+8]
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm0, xmm2, xmm1
        vcomiss xmm0, cs:__real@3a83126f
      }
      _RCX = &pm->refFrame.m_axis;
      if ( v53 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rcx]
          vmovss  xmm1, dword ptr [rcx+4]
          vmovss  dword ptr [rsp+160h+vec], xmm0
          vmovss  xmm0, dword ptr [rcx+8]
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm1, cs:__real@3f800000
          vsqrtss xmm2, xmm0, xmm0
          vcmpless xmm0, xmm2, cs:__real@80000000
          vblendvps xmm0, xmm2, xmm1, xmm0
          vdivss  xmm2, xmm1, xmm0
          vmulss  xmm0, xmm4, xmm2
          vmovss  dword ptr [rsp+160h+vec], xmm0
          vmulss  xmm0, xmm5, xmm2
          vmulss  xmm1, xmm3, xmm2
        }
      }
      __asm
      {
        vmovss  dword ptr [rsp+160h+vec+8], xmm0
        vmovss  dword ptr [rsp+160h+vec+4], xmm1
      }
      MatrixTranspose(_RCX, &outLadderInfo.axis);
      __asm
      {
        vmovss  xmm5, dword ptr [rsp+160h+vec+4]
        vmovss  xmm7, dword ptr [rsp+160h+vec]
        vmulss  xmm2, xmm5, dword ptr [rbp+60h+outLadderInfo.axis+0Ch]
        vmovss  xmm6, dword ptr [rsp+160h+vec+8]
        vmulss  xmm0, xmm7, dword ptr [rbp+60h+outLadderInfo.axis]
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm0, xmm6, dword ptr [rbp+60h+outLadderInfo.axis+18h]
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm3, xmm5, dword ptr [rbp+60h+outLadderInfo.axis+10h]
        vmulss  xmm0, xmm6, dword ptr [rbp+60h+outLadderInfo.axis+1Ch]
        vmulss  xmm5, xmm5, dword ptr [rbp+60h+outLadderInfo.axis+14h]
        vmovss  dword ptr [rsp+160h+var_108], xmm2
        vmulss  xmm2, xmm7, dword ptr [rbp+60h+outLadderInfo.axis+4]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm3, xmm4, xmm0
        vmulss  xmm0, xmm6, dword ptr [rbp+60h+outLadderInfo.axis+20h]
        vmovss  dword ptr [rsp+160h+var_108+4], xmm3
        vmulss  xmm3, xmm7, dword ptr [rbp+60h+outLadderInfo.axis+8]
        vaddss  xmm3, xmm5, xmm3
        vaddss  xmm3, xmm3, xmm0
        vmovss  [rsp+160h+var_100], xmm3
      }
      *(double *)&_XMM0 = vectoyaw(&v156);
      __asm
      {
        vmovaps xmm2, xmm9; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
      v84 = BG_DegreesToMovementDir(*(float *)&_XMM0);
      _RDI->movementDir = v84;
      if ( (unsigned __int8)v84 != v84 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3347, ASSERT_TYPE_ASSERT, "((ps->movementDir & ((1 << 8) - 1)) == ps->movementDir)", (const char *)&queryFormat, "(ps->movementDir & ((1 << MOVEMENTDIR_BITS) - 1)) == ps->movementDir") )
        __debugbreak();
      v85 = *(_BYTE *)(v12 + 436) == 0;
LABEL_47:
      if ( !v85 )
      {
        __asm { vmovaps xmm1, xmm6; value }
        BG_SetPreciseMovementDir(_RDI, *(float *)&_XMM1);
      }
      goto LABEL_124;
    }
    v87 = pm->cmd.forwardmove || pm->cmd.rightmove;
    groundEntityNum = _RDI->groundEntityNum;
    v89 = *(_BYTE *)(*(_QWORD *)vec.v + 436i64) || !clampOnly && groundEntityNum != 2047;
    if ( !v87 || !v89 )
      goto LABEL_86;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+30h]
      vsubss  xmm3, xmm0, dword ptr [r14+40h]
      vmovss  xmm1, dword ptr [rdi+34h]
      vsubss  xmm2, xmm1, dword ptr [r14+44h]
      vmovss  xmm0, dword ptr [rdi+38h]
      vsubss  xmm4, xmm0, dword ptr [r14+48h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm6, xmm2, xmm2
    }
    IsEnabled = PlayerASM_IsEnabled();
    v102 = IsEnabled;
    if ( IsEnabled )
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+24h]
        vmulss  xmm0, xmm0, cs:__real@40a00000
      }
    }
    __asm { vcomiss xmm6, xmm0 }
    if ( IsEnabled )
    {
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0) && !v102 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+58h]
          vmovss  xmm1, dword ptr [r14+5Ch]
          vmovss  dword ptr [rsp+160h+vec], xmm0
          vmovss  xmm0, dword ptr [r14+60h]
          vmovss  dword ptr [rsp+160h+vec+8], xmm0
          vmovss  dword ptr [rsp+160h+vec+4], xmm1
        }
        WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&pm->refFrame, &vec);
        *(double *)&_XMM0 = vectoyaw((const vec2_t *)&vec);
        __asm { vmovaps xmm6, xmm0 }
        if ( *(_BYTE *)(v12 + 436) == v102 )
        {
          __asm
          {
            vxorps  xmm2, xmm2, xmm2
            vcvtsi2ss xmm2, xmm2, eax; rightMove
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax; forwardMove
          }
          v120 = BG_DetermineStrafeCondition(pm, *(const float *)&_XMM1, *(const float *)&_XMM2);
          if ( v120 == ANIM_STRAFE_LEFT )
          {
            __asm { vaddss  xmm6, xmm6, cs:__real@c2b40000 }
          }
          else if ( v120 == ANIM_STRAFE_RIGHT )
          {
            __asm { vaddss  xmm6, xmm6, cs:__real@42b40000 }
          }
          else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0xAu) )
          {
            __asm { vaddss  xmm6, xmm6, cs:__real@c3340000 }
          }
        }
        else
        {
          *(double *)&_XMM0 = BG_MovementDirToDegrees(_RDI->movementDir);
          __asm { vucomiss xmm7, xmm8 }
          if ( v85 )
          {
            __asm
            {
              vmovss  xmm1, cs:__real@3fb40000
              vsubss  xmm2, xmm0, xmm7
              vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
              vcmpltss xmm3, xmm1, xmm2
              vblendvps xmm7, xmm7, xmm0, xmm3
            }
          }
          if ( groundEntityNum == 2047 )
          {
            v112 = DCONST_DVARFLT_bg_cameraIndependentMovementDirRateInAir;
            v113 = "bg_cameraIndependentMovementDirRateInAir";
          }
          else
          {
            v112 = DCONST_DVARFLT_bg_cameraIndependentMovementDirRate;
            v113 = "bg_cameraIndependentMovementDirRate";
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v112, v113);
          __asm
          {
            vmulss  xmm2, xmm0, dword ptr [r14+24h]; range
            vmovaps xmm0, xmm6; angle1
            vmovaps xmm1, xmm7; angle2
          }
          *(double *)&_XMM0 = AngleClamp(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2);
          __asm { vmovaps xmm6, xmm0 }
        }
        __asm { vmovaps xmm0, xmm6; angle }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm
        {
          vmovaps xmm2, xmm9; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm6, xmm0 }
        v124 = BG_DegreesToMovementDir(*(float *)&_XMM0);
        _RDI->movementDir = v124;
        if ( (unsigned __int8)v124 != v124 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3447, ASSERT_TYPE_ASSERT, "(( ps->movementDir & ( (1 << 8) - 1 ) ) == ps->movementDir)", (const char *)&queryFormat, "( ps->movementDir & ( (1 << MOVEMENTDIR_BITS) - 1 ) ) == ps->movementDir") )
          __debugbreak();
        v85 = *(_BYTE *)(v12 + 436) == 0;
        goto LABEL_47;
      }
      __asm { vmovss  xmm0, dword ptr [rdi+1DCh]; degrees }
      v126 = BG_DegreesToMovementDir(*(float *)&_XMM0);
      _RDI->movementDir = v126;
      if ( (unsigned __int8)v126 == v126 )
        goto LABEL_124;
      v127 = 3388;
    }
    else
    {
LABEL_86:
      animMoveType = _RDI->animMoveType;
      if ( (unsigned __int8)animMoveType >= 0x80u )
      {
        LODWORD(edgeLadderQueryHint) = _RDI->animMoveType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2331, ASSERT_TYPE_ASSERT, "(unsigned)( animMoveType ) < (unsigned)( NUM_ANIM_MOVETYPES )", "animMoveType doesn't index NUM_ANIM_MOVETYPES\n\t%i not in [0, %i)", edgeLadderQueryHint, 128) )
          __debugbreak();
      }
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2333, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
        __debugbreak();
      v129 = 0;
      if ( (unsigned int)animMoveType >= 0x26 )
      {
        ActiveStatics = BgStatic::GetActiveStatics();
        v132 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
        if ( !v132 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2342, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
          __debugbreak();
        v133 = *(_QWORD *)(v132 + 8i64 * (int)suitAnimIndex);
        if ( !v133 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 2345, ASSERT_TYPE_ASSERT, "(playerAnim)", (const char *)&queryFormat, "playerAnim") )
          __debugbreak();
        v134 = *(_QWORD *)(v133 + 56);
        v12 = *(_QWORD *)vec.v;
        v130 = *(_DWORD *)(32 * animMoveType + v134);
      }
      else
      {
        LOBYTE(v130) = 0;
      }
      if ( PlayerASM_IsEnabled() )
      {
        Animset = BG_PlayerASM_GetAnimset(_RDI);
        LOBYTE(v136) = 1;
        v137 = Animset;
        Anim = BG_PlayerASM_GetAnim(_RDI, v136);
        v139 = BG_PlayerASM_IsNoAimingIfProneAlias(Anim, v137) != 0;
      }
      else
      {
        v139 = (BG_AnimationMP_GetAnimationForIndex(_RDI->torsoAnim & 0xFFFFEFFF, suitAnimIndex)->flags & 0x8000) != 0;
      }
      if ( (v130 & 2) == 0 && (_RDI->animMoveType != 3 || !v139) && !BG_ContextMount_IsActive(_RDI) )
      {
        v140 = _RDI->animMoveType;
        if ( (unsigned __int8)(v140 - 1) <= 2u || (v141 = 0, v140 == 21) )
          v141 = 1;
        if ( clampOnly || !v141 )
          v129 = 1;
        v142 = BG_TurnMovementDir(pm, _R14, v129);
        _RDI->movementDir = v142;
        if ( (unsigned __int8)v142 != v142 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 3506, ASSERT_TYPE_ASSERT, "(( ps->movementDir & ( (1 << 8) - 1 ) ) == ps->movementDir)", (const char *)&queryFormat, "( ps->movementDir & ( (1 << MOVEMENTDIR_BITS) - 1 ) ) == ps->movementDir") )
          __debugbreak();
        if ( *(_BYTE *)(v12 + 436) )
        {
          *(double *)&_XMM0 = BG_MovementDirToDegrees(_RDI->movementDir);
          __asm
          {
            vmovaps xmm2, xmm9; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovaps xmm1, xmm0; value }
          BG_SetPreciseMovementDir(_RDI, *(float *)&_XMM1);
        }
        goto LABEL_125;
      }
      __asm { vmovss  xmm0, dword ptr [rdi+1DCh]; degrees }
      v147 = BG_DegreesToMovementDir(*(float *)&_XMM0);
      _RDI->movementDir = v147;
      if ( (unsigned __int8)v147 == v147 )
        goto LABEL_124;
      v127 = 3497;
    }
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", v127, ASSERT_TYPE_ASSERT, "(( ps->movementDir & ( (1 << 8) - 1 ) ) == ps->movementDir)", (const char *)&queryFormat, "( ps->movementDir & ( (1 << MOVEMENTDIR_BITS) - 1 ) ) == ps->movementDir");
LABEL_122:
    if ( v36 )
      __debugbreak();
    goto LABEL_124;
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
  __int64 v9; 
  bool v10; 
  bool v11; 

  __asm { vmovaps [rsp+68h+var_28], xmm7 }
  _RBX = ci;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6452, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6453, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6456, ASSERT_TYPE_ASSERT, "(bgameStatic)", (const char *)&queryFormat, "bgameStatic") )
    __debugbreak();
  v9 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  v10 = v9 == 0;
  if ( !v9 )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6458, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rsi+4C54h]
    vmulss  xmm7, xmm0, cs:__real@3a83126f
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm7, xmm1
  }
  if ( !v10 )
  {
    _RSI = DCONST_DVARFLT_animscript_player_input_smoothing_fast;
    __asm { vmovaps [rsp+68h+var_18], xmm6 }
    if ( !DCONST_DVARFLT_animscript_player_input_smoothing_fast && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_player_input_smoothing_fast") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm6, dword ptr [rsi+28h]
      vmovss  xmm1, dword ptr [rbx+8DCh]; cur
      vmovss  xmm0, dword ptr [rbx+8D4h]; tgt
      vmovaps xmm2, xmm6; rate
      vmovaps xmm3, xmm7; deltaTime
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+8E0h]; cur
      vmovss  dword ptr [rbx+8DCh], xmm0
      vmovss  xmm0, dword ptr [rbx+8D8h]; tgt
      vmovaps xmm3, xmm7; deltaTime
      vmovaps xmm2, xmm6; rate
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+8F4h]; cur
      vmovss  dword ptr [rbx+8E0h], xmm0
      vmovss  xmm0, dword ptr [rbx+8ECh]; tgt
      vmovaps xmm3, xmm7; deltaTime
      vmovaps xmm2, xmm6; rate
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+8F8h]; cur
      vmovss  dword ptr [rbx+8F4h], xmm0
      vmovss  xmm0, dword ptr [rbx+8F0h]; tgt
      vmovaps xmm3, xmm7; deltaTime
      vmovaps xmm2, xmm6; rate
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovss  dword ptr [rbx+8F8h], xmm0 }
    _RSI = DCONST_DVARFLT_animscript_player_input_smoothing_slow;
    if ( !DCONST_DVARFLT_animscript_player_input_smoothing_slow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_player_input_smoothing_slow") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm6, dword ptr [rsi+28h]
      vmovss  xmm1, dword ptr [rbx+8E4h]; cur
      vmovss  xmm0, dword ptr [rbx+8D4h]; tgt
      vmovaps xmm2, xmm6; rate
      vmovaps xmm3, xmm7; deltaTime
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+8E8h]; cur
      vmovss  dword ptr [rbx+8E4h], xmm0
      vmovss  xmm0, dword ptr [rbx+8D8h]; tgt
      vmovaps xmm3, xmm7; deltaTime
      vmovaps xmm2, xmm6; rate
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+8FCh]; cur
      vmovss  dword ptr [rbx+8E8h], xmm0
      vmovss  xmm0, dword ptr [rbx+8ECh]; tgt
      vmovaps xmm3, xmm7; deltaTime
      vmovaps xmm2, xmm6; rate
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+900h]; cur
      vmovss  dword ptr [rbx+8FCh], xmm0
      vmovss  xmm0, dword ptr [rbx+8F0h]; tgt
      vmovaps xmm3, xmm7; deltaTime
      vmovaps xmm2, xmm6; rate
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovaps xmm6, [rsp+68h+var_18]
      vmovss  dword ptr [rbx+900h], xmm0
    }
  }
  __asm { vmovss  xmm2, dword ptr [rbx+8DCh]; value }
  XAnimSetFloatGameParameterByIndex(obj, 3u, *(float *)&_XMM2);
  __asm { vmovss  xmm2, dword ptr [rbx+8E0h]; value }
  XAnimSetFloatGameParameterByIndex(obj, 4u, *(float *)&_XMM2);
  __asm { vmovss  xmm2, dword ptr [rbx+8F4h]; value }
  XAnimSetFloatGameParameterByIndex(obj, 5u, *(float *)&_XMM2);
  __asm { vmovss  xmm2, dword ptr [rbx+8F8h]; value }
  XAnimSetFloatGameParameterByIndex(obj, 6u, *(float *)&_XMM2);
  __asm { vmovss  xmm2, dword ptr [rbx+8E4h]; value }
  XAnimSetFloatGameParameterByIndex(obj, 7u, *(float *)&_XMM2);
  __asm { vmovss  xmm2, dword ptr [rbx+8E8h]; value }
  XAnimSetFloatGameParameterByIndex(obj, 8u, *(float *)&_XMM2);
  __asm { vmovss  xmm2, dword ptr [rbx+8FCh]; value }
  XAnimSetFloatGameParameterByIndex(obj, 9u, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+900h]; value
    vmovaps xmm7, [rsp+68h+var_28]
  }
  XAnimSetFloatGameParameterByIndex(obj, 0xAu, *(float *)&_XMM2);
}

/*
==============
BG_UpdateVehicleAnimCharacterInfo
==============
*/

void __fastcall BG_UpdateVehicleAnimCharacterInfo(const BgHandler *handler, DObj *obj, const entityState_t *es, double deltaTime, characterInfo_t *ci)
{
  int LinkedVehicle; 
  BGVehicles *v16; 
  int v54; 
  animScriptVehicleScrubFacing_t v55; 
  __int64 v56; 
  animScriptVehicleSeat_t outVehicleSeat; 
  animScriptVehicleType_t outVehicleType; 
  vec3_t v3; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = ci;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm14
    vmovaps xmm14, xmm3
  }
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6646, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6647, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0C8h+var_38], xmm6
    vmovaps [rsp+0C8h+var_48], xmm7
    vmovaps [rsp+0C8h+var_58], xmm9
  }
  LinkedVehicle = BG_VehicleOccupancy_GetLinkedVehicle(handler, es, ci, &outVehicleType, &outVehicleSeat);
  v16 = (BGVehicles *)handler->GetVehicleSystemConst(handler);
  if ( !v16 || !BGVehicles::PhysicsUpdateVehicleAnimationParams(v16, LinkedVehicle, outVehicleSeat, &ci->vehicleAnimation) )
  {
    if ( LinkedVehicle == 2047 || outVehicleSeat == VEHICLE_SEAT_DRIVER )
    {
      *(_QWORD *)&ci->vehicleAnimation.yaw = 0i64;
    }
    else
    {
      AnglesSubtract(&ci->vehicleAnimation.viewAngles, &ci->playerAngles, &v3);
      AnglesNormalize360(&v3, &v3);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0C8h+v3]
        vmulss  xmm3, xmm0, cs:__real@3b360b61
        vaddss  xmm1, xmm3, cs:__real@3f000000
        vmovss  xmm6, dword ptr [rsp+0C8h+v3+4]
        vxorps  xmm9, xmm9, xmm9
        vroundss xmm2, xmm9, xmm1, 1
        vmovss  xmm1, cs:__real@c2b40000; min
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm0, xmm0, cs:__real@43b40000; val
        vmovss  xmm2, cs:__real@42b40000; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm7, xmm0 }
      if ( ci->vehicleSeatChanged )
      {
        __asm
        {
          vmovss  dword ptr [rbx+9F0h], xmm6
          vmovss  dword ptr [rbx+9F4h], xmm0
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+9F0h]
          vmulss  xmm3, xmm0, cs:__real@3b360b61
          vaddss  xmm1, xmm3, cs:__real@3f000000
          vmulss  xmm6, xmm6, cs:__real@3b360b61
          vaddss  xmm4, xmm6, cs:__real@3f000000
          vroundss xmm2, xmm9, xmm1, 1
          vsubss  xmm0, xmm3, xmm2
          vmulss  xmm1, xmm0, cs:__real@43b40000; cur
          vroundss xmm5, xmm9, xmm4, 1
          vsubss  xmm2, xmm6, xmm5
          vmulss  xmm0, xmm2, cs:__real@43b40000; tgt
          vmovss  xmm2, cs:TRACK_SPEED; rate
          vmovaps xmm3, xmm14; deltaTime
        }
        *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm
        {
          vmovss  xmm2, cs:TRACK_SPEED; rate
          vmovss  xmm1, dword ptr [rbx+9F4h]; cur
          vmovss  dword ptr [rbx+9F0h], xmm0
          vmovaps xmm0, xmm7; tgt
          vmovaps xmm3, xmm14; deltaTime
        }
        *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
        __asm
        {
          vmovss  xmm2, cs:__real@42b40000; max
          vmovss  xmm1, cs:__real@c2b40000; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovss  dword ptr [rbx+9F4h], xmm0 }
      }
    }
  }
  __asm
  {
    vmovaps xmm14, [rsp+0C8h+var_68]
    vmovaps xmm9, [rsp+0C8h+var_58]
    vmovaps xmm7, [rsp+0C8h+var_48]
    vmovaps xmm6, [rsp+0C8h+var_38]
  }
  if ( LinkedVehicle == 2047 )
  {
    ci->vehicleAnimation.scrubFacing = VEHICLE_SCRUB_FACING_UNUSED;
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rbx+9F0h]; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3cb60b61
      vcvttss2si eax, xmm1
    }
    v54 = 7;
    if ( _EAX < 7 )
      v54 = _EAX;
    v55 = v54 + 1;
    if ( (unsigned int)v55 >= NUM_ANIM_COND_VEHICLE_SCRUB_FACING )
    {
      LODWORD(v56) = v55;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animation_mp.cpp", 6701, ASSERT_TYPE_ASSERT, "(unsigned)( scrubFacingIndex ) < (unsigned)( NUM_ANIM_COND_VEHICLE_SCRUB_FACING )", "scrubFacingIndex doesn't index NUM_ANIM_COND_VEHICLE_SCRUB_FACING\n\t%i not in [0, %i)", v56, 9) )
        __debugbreak();
    }
    ci->vehicleAnimation.scrubFacing = v55;
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
  __asm
  {
    vmovss  xmm1, cs:__real@43340000; maxAbsValueSize
    vmovaps [rsp+38h+var_18], xmm10
  }
  _RDI = outAngles;
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(shortAngles->v[0], *(float *)&_XMM1, 0x14u);
  __asm
  {
    vmulss  xmm3, xmm0, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm1
    vxorps  xmm10, xmm10, xmm10
    vroundss xmm2, xmm10, xmm1, 1
    vmovss  xmm1, cs:__real@43340000; maxAbsValueSize
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, cs:__real@43b40000
    vmovss  dword ptr [rdi], xmm0
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(shortAngles->v[1], *(float *)&_XMM1, 0x14u);
  __asm
  {
    vmulss  xmm5, xmm0, cs:__real@3b360b61
    vaddss  xmm3, xmm5, cs:__real@3f000000
    vmovss  xmm1, cs:__real@43340000; maxAbsValueSize
    vxorps  xmm2, xmm2, xmm2
    vmovss  xmm0, xmm2, xmm3
    vroundss xmm4, xmm10, xmm0, 1
    vsubss  xmm2, xmm5, xmm4
    vmulss  xmm0, xmm2, cs:__real@43b40000
    vmovss  dword ptr [rdi+4], xmm0
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(shortAngles->v[2], *(float *)&_XMM1, 0x14u);
  __asm
  {
    vmulss  xmm4, xmm0, cs:__real@3b360b61
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm0, xmm1, xmm2
    vroundss xmm3, xmm10, xmm0, 1
    vmovaps xmm10, [rsp+38h+var_18]
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm0, xmm1, cs:__real@43b40000
    vmovss  dword ptr [rdi+8], xmm0
  }
}

