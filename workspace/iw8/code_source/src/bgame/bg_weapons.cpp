/*
==============
PM_Weapon_FireAnimScriptWeaponRaiseEventForTime
==============
*/

void __fastcall PM_Weapon_FireAnimScriptWeaponRaiseEventForTime(pmove_t *pm, pml_t *pml, const float weaponTimeSec)
{
  ?PM_Weapon_FireAnimScriptWeaponRaiseEventForTime@@YAXPEAVpmove_t@@PEAUpml_t@@M@Z(pm, pml, weaponTimeSec);
}

/*
==============
BG_Offhand_ActiveOffhandIsInterruptable
==============
*/

bool __fastcall BG_Offhand_ActiveOffhandIsInterruptable(const pmove_t *pm)
{
  return ?BG_Offhand_ActiveOffhandIsInterruptable@@YA_NPEBVpmove_t@@@Z(pm);
}

/*
==============
BG_ShouldPlayAdditiveCrawlAnim
==============
*/

bool __fastcall BG_ShouldPlayAdditiveCrawlAnim(const playerState_s *ps, const PlayerHandIndex hand, const BgHandler *pmoveHandler)
{
  return ?BG_ShouldPlayAdditiveCrawlAnim@@YA_NPEBUplayerState_s@@W4PlayerHandIndex@@PEBVBgHandler@@@Z(ps, hand, pmoveHandler);
}

/*
==============
BG_GetOffhandGestureWeapon
==============
*/

const Weapon *__fastcall BG_GetOffhandGestureWeapon(const BgWeaponMap *const weaponMap, const playerState_s *ps)
{
  return ?BG_GetOffhandGestureWeapon@@YAAEBUWeapon@@QEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_IsUsingOffhandGestureWeaponADSActive
==============
*/

bool __fastcall BG_IsUsingOffhandGestureWeaponADSActive(const playerState_s *const ps)
{
  return ?BG_IsUsingOffhandGestureWeaponADSActive@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_SetMeleeChargeCmd
==============
*/

void __fastcall BG_SetMeleeChargeCmd(const AimOutput *aimOutput, usercmd_s *cmd)
{
  ?BG_SetMeleeChargeCmd@@YAXPEBUAimOutput@@PEAUusercmd_s@@@Z(aimOutput, cmd);
}

/*
==============
BG_OffhandGestureWeaponPutAway
==============
*/

void __fastcall BG_OffhandGestureWeaponPutAway(BgWeaponMap *weaponMap, playerState_s *ps, int time, bool immediate)
{
  ?BG_OffhandGestureWeaponPutAway@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@H_N@Z(weaponMap, ps, time, immediate);
}

/*
==============
BG_Heat_ApplyFireHeat
==============
*/

void __fastcall BG_Heat_ApplyFireHeat(WeaponHeat *const playerWeaponHeat, const Weapon *r_weapon, const bool isAlternate, const int time)
{
  ?BG_Heat_ApplyFireHeat@@YAXQEAUWeaponHeat@@AEBUWeapon@@_NH@Z(playerWeaponHeat, r_weapon, isAlternate, time);
}

/*
==============
BG_GetBestLadderWeapon
==============
*/

const Weapon *__fastcall BG_GetBestLadderWeapon(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_GetBestLadderWeapon@@YAAEBUWeapon@@PEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
PM_Weapon_GetFireButtonPressedState
==============
*/

void __fastcall PM_Weapon_GetFireButtonPressedState(const pmove_t *pm, const Weapon *r_weapon, const PlayerHandIndex hand, bool *outWasPressed, bool *outIsPressed)
{
  ?PM_Weapon_GetFireButtonPressedState@@YAXPEBVpmove_t@@AEBUWeapon@@W4PlayerHandIndex@@PEA_N3@Z(pm, r_weapon, hand, outWasPressed, outIsPressed);
}

/*
==============
BG_GetADSFracCurrentVelocity
==============
*/

double __fastcall BG_GetADSFracCurrentVelocity(const BgWeaponMap *weaponMap, const playerState_s *const ps, const Weapon *weapon, bool isAlternate, float adsVelocityTarget, bool *outIsFinishedAccel)
{
  double result; 

  *(float *)&result = ?BG_GetADSFracCurrentVelocity@@YAMPEBVBgWeaponMap@@QEBUplayerState_s@@AEBUWeapon@@_NMPEA_N@Z(weaponMap, ps, weapon, isAlternate, adsVelocityTarget, outIsFinishedAccel);
  return result;
}

/*
==============
BG_Get3PWeaponAnims
==============
*/

bool __fastcall BG_Get3PWeaponAnims(const Weapon *r_weapon, const bool isDualWielding, const bool isAlternate, XAnimParts **outFingerPoseRightAnim, XAnimParts **outFingerPoseRightAnimSecondary, XAnimParts **outFingerPoseLeftAnim, XAnimParts **outFingerPoseLeftAnimSecondary, XAnimParts **outAltOverrideAnim)
{
  return ?BG_Get3PWeaponAnims@@YA_NAEBUWeapon@@_N1PEAPEAUXAnimParts@@2222@Z(r_weapon, isDualWielding, isAlternate, outFingerPoseRightAnim, outFingerPoseRightAnimSecondary, outFingerPoseLeftAnim, outFingerPoseLeftAnimSecondary, outAltOverrideAnim);
}

/*
==============
PM_Weapon_InValidChangeWeaponState
==============
*/

int __fastcall PM_Weapon_InValidChangeWeaponState(pmove_t *pm, const bool mustExecuteActions)
{
  return ?PM_Weapon_InValidChangeWeaponState@@YAHPEAVpmove_t@@_N@Z(pm, mustExecuteActions);
}

/*
==============
BG_Offhand_ShouldStopTauntThirdPerson
==============
*/

bool __fastcall BG_Offhand_ShouldStopTauntThirdPerson(const BgWeaponMap *weaponMap, const playerState_s *ps, const OffhandGestureTypes gestureType, const Weapon *offhandWeapon, const int gameTime)
{
  return ?BG_Offhand_ShouldStopTauntThirdPerson@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@W4OffhandGestureTypes@@AEBUWeapon@@H@Z(weaponMap, ps, gestureType, offhandWeapon, gameTime);
}

/*
==============
BG_GetWeaponPriorityMap
==============
*/

unsigned __int8 *__fastcall BG_GetWeaponPriorityMap(const Weapon *weapon, bool isAlternate)
{
  return ?BG_GetWeaponPriorityMap@@YAPEAEAEBUWeapon@@_N@Z(weapon, isAlternate);
}

/*
==============
PM_Weapon_IsInInterruptibleState
==============
*/

bool __fastcall PM_Weapon_IsInInterruptibleState(const BgWeaponMap *weaponMap, const playerState_s *ps, PlayerHandIndex hand, const BgHandler *pmoveHandler)
{
  return ?PM_Weapon_IsInInterruptibleState@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@W4PlayerHandIndex@@PEBVBgHandler@@@Z(weaponMap, ps, hand, pmoveHandler);
}

/*
==============
BG_Offhand_GetGestureIdxForWeapon
==============
*/

unsigned int __fastcall BG_Offhand_GetGestureIdxForWeapon(const playerState_s *ps, const BgWeaponMap *weaponMap, const Weapon *r_weapon, bool isAlternate, OffhandGestureTypes gestureType)
{
  return ?BG_Offhand_GetGestureIdxForWeapon@@YAIPEBUplayerState_s@@PEBVBgWeaponMap@@AEBUWeapon@@_NW4OffhandGestureTypes@@@Z(ps, weaponMap, r_weapon, isAlternate, gestureType);
}

/*
==============
PM_GestureOffhandDisablesFiringPrimary
==============
*/

bool __fastcall PM_GestureOffhandDisablesFiringPrimary(const pmove_t *pm)
{
  return ?PM_GestureOffhandDisablesFiringPrimary@@YA_NPEBVpmove_t@@@Z(pm);
}

/*
==============
BG_Offhand_IsPlayingShieldGesture
==============
*/

bool __fastcall BG_Offhand_IsPlayingShieldGesture(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_Offhand_IsPlayingShieldGesture@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_IsUsingOffhandGestureWeapon
==============
*/

bool __fastcall BG_IsUsingOffhandGestureWeapon(const playerState_s *ps)
{
  return ?BG_IsUsingOffhandGestureWeapon@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
DelayedActionState::SetDelayedAction
==============
*/

void __fastcall DelayedActionState::SetDelayedAction(DelayedActionState *this, const playerState_s *ps, const PlayerHandIndex hand, const int isDelayedAction)
{
  ?SetDelayedAction@DelayedActionState@@QEAAXPEBUplayerState_s@@W4PlayerHandIndex@@H@Z(this, ps, hand, isDelayedAction);
}

/*
==============
PM_Weapon_BeginWeaponRaise
==============
*/

void __fastcall PM_Weapon_BeginWeaponRaise(pmove_t *pm, pml_t *pml, WeaponAnimNumber anim, unsigned int time, float aim, int altSwitch, PlayerHandIndex hand, int previousWeaponState)
{
  ?PM_Weapon_BeginWeaponRaise@@YAXPEAVpmove_t@@PEAUpml_t@@W4WeaponAnimNumber@@IMHW4PlayerHandIndex@@H@Z(pm, pml, anim, time, aim, altSwitch, hand, previousWeaponState);
}

/*
==============
PM_UpdateAimDownSightFlag
==============
*/

void __fastcall PM_UpdateAimDownSightFlag(pmove_t *pm, pml_t *pml)
{
  ?PM_UpdateAimDownSightFlag@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Heat_UpdateFlags
==============
*/

void __fastcall BG_Heat_UpdateFlags(WeaponHeat *const weaponHeat, const Weapon *r_weapon, const int time)
{
  ?BG_Heat_UpdateFlags@@YAXQEAUWeaponHeat@@AEBUWeapon@@H@Z(weaponHeat, r_weapon, time);
}

/*
==============
CompressedMeleeAnimData::Get
==============
*/

void __fastcall CompressedMeleeAnimData::Get(CompressedMeleeAnimData *this, int *outAnimType, int *outVariant, bool *outIsAlternate)
{
  ?Get@CompressedMeleeAnimData@@QEBAXPEAH0PEA_N@Z(this, outAnimType, outVariant, outIsAlternate);
}

/*
==============
PM_Weapon_AllowReload
==============
*/

int __fastcall PM_Weapon_AllowReload(const BgWeaponMap *weaponMap, playerState_s *ps, PlayerHandIndex hand)
{
  return ?PM_Weapon_AllowReload@@YAHPEBVBgWeaponMap@@PEAUplayerState_s@@W4PlayerHandIndex@@@Z(weaponMap, ps, hand);
}

/*
==============
PM_StartWeaponAnimBothHands
==============
*/

void __fastcall PM_StartWeaponAnimBothHands(playerState_s *ps, WeaponAnimNumber anim)
{
  ?PM_StartWeaponAnimBothHands@@YAXPEAUplayerState_s@@W4WeaponAnimNumber@@@Z(ps, anim);
}

/*
==============
BG_ShouldPlayAdditiveWalkAnim
==============
*/

bool __fastcall BG_ShouldPlayAdditiveWalkAnim(const BgWeaponMap *weaponMap, const playerState_s *ps, const BgHandler *pmoveHandler)
{
  return ?BG_ShouldPlayAdditiveWalkAnim@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@PEBVBgHandler@@@Z(weaponMap, ps, pmoveHandler);
}

/*
==============
BG_CanSprintFireOffhand
==============
*/

bool __fastcall BG_CanSprintFireOffhand(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_CanSprintFireOffhand@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
PM_Weapon_GetOffHandWeaponForSlot
==============
*/

const Weapon *__fastcall PM_Weapon_GetOffHandWeaponForSlot(const BgWeaponMap *weaponMap, const playerState_s *ps, OffhandSlot offHandSlot)
{
  return ?PM_Weapon_GetOffHandWeaponForSlot@@YAAEBUWeapon@@PEBVBgWeaponMap@@PEBUplayerState_s@@W4OffhandSlot@@@Z(weaponMap, ps, offHandSlot);
}

/*
==============
BG_GetCookingGrenadeCookPercentage
==============
*/

double __fastcall BG_GetCookingGrenadeCookPercentage(const Weapon *weapon, bool isAlternate, const playerState_s *const ps)
{
  double result; 

  *(float *)&result = ?BG_GetCookingGrenadeCookPercentage@@YAMAEBUWeapon@@_NQEBUplayerState_s@@@Z(weapon, isAlternate, ps);
  return result;
}

/*
==============
BG_Offhand_HasNonInterruptibleActiveOffhand
==============
*/

bool __fastcall BG_Offhand_HasNonInterruptibleActiveOffhand(const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime)
{
  return ?BG_Offhand_HasNonInterruptibleActiveOffhand@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@H@Z(weaponMap, ps, serverTime);
}

/*
==============
BG_GetHeldGrenadeFuse
==============
*/

int __fastcall BG_GetHeldGrenadeFuse(const Weapon *weapon, bool isAlternate, const playerState_s *const ps)
{
  return ?BG_GetHeldGrenadeFuse@@YAHAEBUWeapon@@_NQEBUplayerState_s@@@Z(weapon, isAlternate, ps);
}

/*
==============
BG_NightVisionGestureIsPlaying
==============
*/

bool __fastcall BG_NightVisionGestureIsPlaying(const playerState_s *const ps, Gesture *const nvgGesture, unsigned int *outSlot, unsigned int *outIndex)
{
  return ?BG_NightVisionGestureIsPlaying@@YA_NQEBUplayerState_s@@QEAUGesture@@PEAI2@Z(ps, nvgGesture, outSlot, outIndex);
}

/*
==============
BG_Offhand_IsGestureInterruptable
==============
*/

bool __fastcall BG_Offhand_IsGestureInterruptable(const BgWeaponMap *weaponMap, const playerState_s *ps, OffhandGestureTypes gestureType, const int gameTime)
{
  return ?BG_Offhand_IsGestureInterruptable@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@W4OffhandGestureTypes@@H@Z(weaponMap, ps, gestureType, gameTime);
}

/*
==============
BG_GetWeaponOrOffhandAdsFrac
==============
*/

double __fastcall BG_GetWeaponOrOffhandAdsFrac(const BgWeaponMap *const weaponMap, const playerState_s *const ps)
{
  double result; 

  *(float *)&result = ?BG_GetWeaponOrOffhandAdsFrac@@YAMQEBVBgWeaponMap@@QEBUplayerState_s@@@Z(weaponMap, ps);
  return result;
}

/*
==============
BG_UpdateWeaponAnimArrays
==============
*/

void __fastcall BG_UpdateWeaponAnimArrays(BgWeaponMap *const weaponMap, playerState_s *const ps, const BgHandler *const handler)
{
  ?BG_UpdateWeaponAnimArrays@@YAXQEAVBgWeaponMap@@QEAUplayerState_s@@QEBVBgHandler@@@Z(weaponMap, ps, handler);
}

/*
==============
BG_PlayerWeaponNeedsRechamber
==============
*/

bool __fastcall BG_PlayerWeaponNeedsRechamber(const playerState_s *ps, const Weapon *r_weapon, PlayerHandIndex hand)
{
  return ?BG_PlayerWeaponNeedsRechamber@@YA_NPEBUplayerState_s@@AEBUWeapon@@W4PlayerHandIndex@@@Z(ps, r_weapon, hand);
}

/*
==============
BG_IsWeaponMeleeOverride
==============
*/

bool __fastcall BG_IsWeaponMeleeOverride(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *heldWeapon)
{
  return ?BG_IsWeaponMeleeOverride@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, heldWeapon);
}

/*
==============
PM_InteruptWeaponWithProneMove
==============
*/

int __fastcall PM_InteruptWeaponWithProneMove(pmove_t *pm)
{
  return ?PM_InteruptWeaponWithProneMove@@YAHPEAVpmove_t@@@Z(pm);
}

/*
==============
BG_GetAltWeaponModeAsStoredInEntityState
==============
*/

bool __fastcall BG_GetAltWeaponModeAsStoredInEntityState(const playerState_s *ps, const BgWeaponMap *weaponMap)
{
  return ?BG_GetAltWeaponModeAsStoredInEntityState@@YA_NPEBUplayerState_s@@PEBVBgWeaponMap@@@Z(ps, weaponMap);
}

/*
==============
BG_PlayerIsUsingConeTargeting
==============
*/

bool __fastcall BG_PlayerIsUsingConeTargeting(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_PlayerIsUsingConeTargeting@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
PM_Weapon_SprintCancelsReload
==============
*/

bool __fastcall PM_Weapon_SprintCancelsReload(const pmove_t *pm)
{
  return ?PM_Weapon_SprintCancelsReload@@YA_NPEBVpmove_t@@@Z(pm);
}

/*
==============
BG_Offhand_StopGestureImmediate
==============
*/

void __fastcall BG_Offhand_StopGestureImmediate(const BgWeaponMap *weaponMap, playerState_s *ps, OffhandGestureTypes gestureType, int gameTime)
{
  ?BG_Offhand_StopGestureImmediate@@YAXPEBVBgWeaponMap@@PEAUplayerState_s@@W4OffhandGestureTypes@@H@Z(weaponMap, ps, gestureType, gameTime);
}

/*
==============
PM_WeaponOtherHandAvailable
==============
*/

bool __fastcall PM_WeaponOtherHandAvailable(const pmove_t *pm)
{
  return ?PM_WeaponOtherHandAvailable@@YA_NPEBVpmove_t@@@Z(pm);
}

/*
==============
PM_Weapon_CancelInspect
==============
*/

void __fastcall PM_Weapon_CancelInspect(pmove_t *pm)
{
  ?PM_Weapon_CancelInspect@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
BG_GetEquippedWeaponIndex
==============
*/

int __fastcall BG_GetEquippedWeaponIndex(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_weapon)
{
  return ?BG_GetEquippedWeaponIndex@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
PM_Weapon_IsAltToggleRequested
==============
*/

bool __fastcall PM_Weapon_IsAltToggleRequested(pmove_t *pm)
{
  return ?PM_Weapon_IsAltToggleRequested@@YA_NPEAVpmove_t@@@Z(pm);
}

/*
==============
BG_IsUsingOffhandGestureWeaponADSSupport
==============
*/

bool __fastcall BG_IsUsingOffhandGestureWeaponADSSupport(const BgWeaponMap *const weaponMap, const playerState_s *const ps)
{
  return ?BG_IsUsingOffhandGestureWeaponADSSupport@@YA_NQEBVBgWeaponMap@@QEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
PM_BeginWeaponChange
==============
*/

void __fastcall PM_BeginWeaponChange(pmove_t *pm, pml_t *pml, const Weapon *newweapon, bool isNewAlternate, bool quick)
{
  ?PM_BeginWeaponChange@@YAXPEAVpmove_t@@PEAUpml_t@@AEBUWeapon@@_N3@Z(pm, pml, newweapon, isNewAlternate, quick);
}

/*
==============
BG_Turret_ComputeBarrelSpinRate
==============
*/

double __fastcall BG_Turret_ComputeBarrelSpinRate(const WeaponDef *weaponDef, const LerpEntityStateTurret *turretLerp, const int curTime)
{
  double result; 

  *(float *)&result = ?BG_Turret_ComputeBarrelSpinRate@@YAMPEBUWeaponDef@@PEBULerpEntityStateTurret@@H@Z(weaponDef, turretLerp, curTime);
  return result;
}

/*
==============
PM_UpdateAimDownSightLerp
==============
*/

void __fastcall PM_UpdateAimDownSightLerp(pmove_t *pm, int msec)
{
  ?PM_UpdateAimDownSightLerp@@YAXPEAVpmove_t@@H@Z(pm, msec);
}

/*
==============
BG_Offhand_GrenadeGestureInterruptable
==============
*/

bool __fastcall BG_Offhand_GrenadeGestureInterruptable(const BgWeaponMap *weaponMap, const playerState_s *ps, int gameTime)
{
  return ?BG_Offhand_GrenadeGestureInterruptable@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@H@Z(weaponMap, ps, gameTime);
}

/*
==============
BG_ShouldTakeWeaponWhenEmpty
==============
*/

int __fastcall BG_ShouldTakeWeaponWhenEmpty(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  return ?BG_ShouldTakeWeaponWhenEmpty@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@AEBUWeapon@@_N@Z(weaponMap, ps, weapon, isAlternate);
}

/*
==============
BG_OFfhandGestureWeaponIsBeingPutAway
==============
*/

bool __fastcall BG_OFfhandGestureWeaponIsBeingPutAway(const playerState_s *ps)
{
  return ?BG_OFfhandGestureWeaponIsBeingPutAway@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Weapon_ViewModelScriptedBegin
==============
*/

bool __fastcall BG_Weapon_ViewModelScriptedBegin(const BgWeaponMap *weaponMap, playerState_s *ps, const int animIndex, const int startTime, const int durationMS, PlayerHandIndex hand)
{
  return ?BG_Weapon_ViewModelScriptedBegin@@YA_NPEBVBgWeaponMap@@PEAUplayerState_s@@HHHW4PlayerHandIndex@@@Z(weaponMap, ps, animIndex, startTime, durationMS, hand);
}

/*
==============
BG_ClearMeleeChargeCmd
==============
*/

void __fastcall BG_ClearMeleeChargeCmd(usercmd_s *cmd)
{
  ?BG_ClearMeleeChargeCmd@@YAXPEAUusercmd_s@@@Z(cmd);
}

/*
==============
PM_Weapon_OffHandHasAmmo
==============
*/

bool __fastcall PM_Weapon_OffHandHasAmmo(const playerState_s *ps, const BgWeaponMap *weaponMap, const Weapon *offHand)
{
  return ?PM_Weapon_OffHandHasAmmo@@YA_NPEBUplayerState_s@@PEBVBgWeaponMap@@AEBUWeapon@@@Z(ps, weaponMap, offHand);
}

/*
==============
BG_SetCurrentWeaponForPlayer
==============
*/

void __fastcall BG_SetCurrentWeaponForPlayer(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon, const BgHandler *const handler)
{
  ?BG_SetCurrentWeaponForPlayer@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@AEBUWeapon@@QEBVBgHandler@@@Z(weaponMap, ps, r_weapon, handler);
}

/*
==============
BG_IsUsingScripteOffhandWeaponWithScriptedAnimType
==============
*/

bool __fastcall BG_IsUsingScripteOffhandWeaponWithScriptedAnimType(const playerState_s *ps)
{
  return ?BG_IsUsingScripteOffhandWeaponWithScriptedAnimType@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
DelayedActionState::IsDelayedAction
==============
*/

int __fastcall DelayedActionState::IsDelayedAction(DelayedActionState *this, const playerState_s *ps, const PlayerHandIndex hand)
{
  return ?IsDelayedAction@DelayedActionState@@QEBAHPEBUplayerState_s@@W4PlayerHandIndex@@@Z(this, ps, hand);
}

/*
==============
PM_ResetWeaponState
==============
*/

void __fastcall PM_ResetWeaponState(BgWeaponMap *weaponMap, playerState_s *ps, const BgHandler *pmoveHandler)
{
  ?PM_ResetWeaponState@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@PEBVBgHandler@@@Z(weaponMap, ps, pmoveHandler);
}

/*
==============
BG_GetMeleeAttackProperties
==============
*/

void __fastcall BG_GetMeleeAttackProperties(const playerState_s *const inflictorPs, const Weapon *weapon, bool isAlternate, MeleeAnimType *outAnimType, WeaponMaterialType *outMaterial, bool *outIsAlternate, int *outVariation, MeleeResult *outResult)
{
  ?BG_GetMeleeAttackProperties@@YAXQEBUplayerState_s@@AEBUWeapon@@_NPEAW4MeleeAnimType@@PEAW4WeaponMaterialType@@PEA_NPEAHPEAW4MeleeResult@@@Z(inflictorPs, weapon, isAlternate, outAnimType, outMaterial, outIsAlternate, outVariation, outResult);
}

/*
==============
PM_Weapon_Mantle
==============
*/

void __fastcall PM_Weapon_Mantle(pmove_t *pm, int weaponTime)
{
  ?PM_Weapon_Mantle@@YAXPEAVpmove_t@@H@Z(pm, weaponTime);
}

/*
==============
PM_StartWeaponAnim
==============
*/

void __fastcall PM_StartWeaponAnim(playerState_s *ps, WeaponAnimNumber anim, PlayerHandIndex hand)
{
  ?PM_StartWeaponAnim@@YAXPEAUplayerState_s@@W4WeaponAnimNumber@@W4PlayerHandIndex@@@Z(ps, anim, hand);
}

/*
==============
BG_ShotLimitReached
==============
*/

int __fastcall BG_ShotLimitReached(const playerState_s *ps, const Weapon *weapon, PlayerHandIndex hand)
{
  return ?BG_ShotLimitReached@@YAHPEBUplayerState_s@@AEBUWeapon@@W4PlayerHandIndex@@@Z(ps, weapon, hand);
}

/*
==============
BG_WeaponIsPrefferedDrop
==============
*/

bool __fastcall BG_WeaponIsPrefferedDrop(const Weapon *r_weapon, const bool isAlternate)
{
  return ?BG_WeaponIsPrefferedDrop@@YA_NAEBUWeapon@@_N@Z(r_weapon, isAlternate);
}

/*
==============
BG_GetMeleeTraceGridOffsets
==============
*/

void __fastcall BG_GetMeleeTraceGridOffsets(const vec2_t **outOffsets, int *outOffsetCount)
{
  ?BG_GetMeleeTraceGridOffsets@@YAXPEAPEBTvec2_t@@PEAH@Z(outOffsets, outOffsetCount);
}

/*
==============
BG_CalcFingerPoseWeights
==============
*/

void __fastcall BG_CalcFingerPoseWeights(const XAnimInfo *info, float *outWeights, float *outAnimWeights)
{
  ?BG_CalcFingerPoseWeights@@YAXPEIBUXAnimInfo@@PEAM1@Z(info, outWeights, outAnimWeights);
}

/*
==============
BG_WeaponDropIsDisabled
==============
*/

bool __fastcall BG_WeaponDropIsDisabled(const Weapon *r_weapon, const bool isAlternate)
{
  return ?BG_WeaponDropIsDisabled@@YA_NAEBUWeapon@@_N@Z(r_weapon, isAlternate);
}

/*
==============
BG_GetEquippedWeaponCount
==============
*/

int __fastcall BG_GetEquippedWeaponCount(const BgWeaponMap *weaponMap, const playerState_s *ps, const weapInventoryType_t inventoryType, const WeaponSlot weaponSlot)
{
  return ?BG_GetEquippedWeaponCount@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@W4weapInventoryType_t@@W4WeaponSlot@@@Z(weaponMap, ps, inventoryType, weaponSlot);
}

/*
==============
BG_Weapons_UseCensorshipWorldModel
==============
*/

bool __fastcall BG_Weapons_UseCensorshipWorldModel()
{
  return ?BG_Weapons_UseCensorshipWorldModel@@YA_NXZ();
}

/*
==============
PM_AdjustAimSpreadScale
==============
*/

void __fastcall PM_AdjustAimSpreadScale(pmove_t *pm, float frametime)
{
  ?PM_AdjustAimSpreadScale@@YAXPEAVpmove_t@@M@Z(pm, frametime);
}

/*
==============
BG_GetOffhandScriptWeapon
==============
*/

const Weapon *__fastcall BG_GetOffhandScriptWeapon(const BgWeaponMap *const weaponMap, const playerState_s *ps)
{
  return ?BG_GetOffhandScriptWeapon@@YAAEBUWeapon@@QEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_CanSprintFire
==============
*/

bool __fastcall BG_CanSprintFire(const playerState_s *ps)
{
  return ?BG_CanSprintFire@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Heat_GetHeat
==============
*/

double __fastcall BG_Heat_GetHeat(const WeaponHeat *const playerWeaponHeat, const Weapon *r_weapon, const bool isAlternate, const int time)
{
  double result; 

  *(float *)&result = ?BG_Heat_GetHeat@@YAMQEBUWeaponHeat@@AEBUWeapon@@_NH@Z(playerWeaponHeat, r_weapon, isAlternate, time);
  return result;
}

/*
==============
BG_Offhand_IsPlayingGrenadeGesture
==============
*/

bool __fastcall BG_Offhand_IsPlayingGrenadeGesture(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_Offhand_IsPlayingGrenadeGesture@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
PM_Weapon_FinishWeaponChange
==============
*/

void __fastcall PM_Weapon_FinishWeaponChange(pmove_t *pm, pml_t *pml, int previousWeaponState, const bool forceIdle, const bool forceQuickRaise)
{
  ?PM_Weapon_FinishWeaponChange@@YAXPEAVpmove_t@@PEAUpml_t@@H_N2@Z(pm, pml, previousWeaponState, forceIdle, forceQuickRaise);
}

/*
==============
PM_Weapon_Idle
==============
*/

void __fastcall PM_Weapon_Idle(pmove_t *pm, PlayerHandIndex hand)
{
  ?PM_Weapon_Idle@@YAXPEAVpmove_t@@W4PlayerHandIndex@@@Z(pm, hand);
}

/*
==============
BG_Weapon_IsScriptedViewModelAnimPlaying
==============
*/

bool __fastcall BG_Weapon_IsScriptedViewModelAnimPlaying(playerState_s *ps)
{
  return ?BG_Weapon_IsScriptedViewModelAnimPlaying@@YA_NPEAUplayerState_s@@@Z(ps);
}

/*
==============
BG_IncrementWeaponMovementIdleTime
==============
*/

void __fastcall BG_IncrementWeaponMovementIdleTime(const BgWeaponMap *weaponMap, const playerState_s *ps, float frametime, int *weaponIdleTime)
{
  ?BG_IncrementWeaponMovementIdleTime@@YAXPEBVBgWeaponMap@@PEBUplayerState_s@@MPEAH@Z(weaponMap, ps, frametime, weaponIdleTime);
}

/*
==============
BG_PlayerOrEntityDualWielding
==============
*/

bool __fastcall BG_PlayerOrEntityDualWielding(const BgWeaponMap *weaponMap, const playerState_s *ps, const entityState_t *es, const characterInfo_t *ci)
{
  return ?BG_PlayerOrEntityDualWielding@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@PEBUentityState_t@@PEBUcharacterInfo_t@@@Z(weaponMap, ps, es, ci);
}

/*
==============
BG_ReBuildAllWeaponAnimArrays
==============
*/

void BG_ReBuildAllWeaponAnimArrays(void)
{
  ?BG_ReBuildAllWeaponAnimArrays@@YAXXZ();
}

/*
==============
PM_Weapon_MeleeEnd
==============
*/

int __fastcall PM_Weapon_MeleeEnd(pmove_t *pm, pml_t *pml, const bool delayedAction, PlayerHandIndex hand, const bool isInInterruptibleState, const bool isQuickMelee, const bool applyPendingDamage)
{
  return ?PM_Weapon_MeleeEnd@@YAHPEAVpmove_t@@PEAUpml_t@@_NW4PlayerHandIndex@@222@Z(pm, pml, delayedAction, hand, isInInterruptibleState, isQuickMelee, applyPendingDamage);
}

/*
==============
PM_CalcIsAdsAllowed
==============
*/

bool __fastcall PM_CalcIsAdsAllowed(const pmove_t *pm)
{
  return ?PM_CalcIsAdsAllowed@@YA_NPEBVpmove_t@@@Z(pm);
}

/*
==============
BG_CanSprintReload
==============
*/

bool __fastcall BG_CanSprintReload(const playerState_s *ps)
{
  return ?BG_CanSprintReload@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_OffhandGestureScriptWeaponEnd
==============
*/

void __fastcall BG_OffhandGestureScriptWeaponEnd(BgWeaponMap *weaponMap, playerState_s *ps, int time, bool immediate)
{
  ?BG_OffhandGestureScriptWeaponEnd@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@H_N@Z(weaponMap, ps, time, immediate);
}

/*
==============
BG_Offhand_ScriptWeaponInterruptable
==============
*/

bool __fastcall BG_Offhand_ScriptWeaponInterruptable(const BgWeaponMap *weaponMap, const playerState_s *ps, int gameTime)
{
  return ?BG_Offhand_ScriptWeaponInterruptable@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@H@Z(weaponMap, ps, gameTime);
}

/*
==============
BG_GetCookingGrenadeFuseMin
==============
*/

int __fastcall BG_GetCookingGrenadeFuseMin(const Weapon *weapon, bool isAlternate, const playerState_s *const ps)
{
  return ?BG_GetCookingGrenadeFuseMin@@YAHAEBUWeapon@@_NQEBUplayerState_s@@@Z(weapon, isAlternate, ps);
}

/*
==============
BG_IsMapLocationSelectorActive
==============
*/

bool __fastcall BG_IsMapLocationSelectorActive(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_IsMapLocationSelectorActive@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_IsUsingScriptedOffhandWeapon
==============
*/

bool __fastcall BG_IsUsingScriptedOffhandWeapon(const playerState_s *ps)
{
  return ?BG_IsUsingScriptedOffhandWeapon@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_NightVisionAnyGestureIsPlaying
==============
*/

bool __fastcall BG_NightVisionAnyGestureIsPlaying(const BgWeaponMap *weaponMap, const playerState_s *const ps, const int gameTime)
{
  return ?BG_NightVisionAnyGestureIsPlaying@@YA_NPEBVBgWeaponMap@@QEBUplayerState_s@@H@Z(weaponMap, ps, gameTime);
}

/*
==============
BG_GetCookingGrenadeMaxHoldPercentage
==============
*/

double __fastcall BG_GetCookingGrenadeMaxHoldPercentage(const Weapon *offhandWeapon, bool isAlternate, const playerState_s *const ps)
{
  double result; 

  *(float *)&result = ?BG_GetCookingGrenadeMaxHoldPercentage@@YAMAEBUWeapon@@_NQEBUplayerState_s@@@Z(offhandWeapon, isAlternate, ps);
  return result;
}

/*
==============
BG_IsSprintAdditive
==============
*/

bool __fastcall BG_IsSprintAdditive(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_IsSprintAdditive@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_GetCookingGrenadeScaleTime
==============
*/

double __fastcall BG_GetCookingGrenadeScaleTime(const playerState_s *const ps)
{
  double result; 

  *(float *)&result = ?BG_GetCookingGrenadeScaleTime@@YAMQEBUplayerState_s@@@Z(ps);
  return result;
}

/*
==============
PM_Weapon
==============
*/

void __fastcall PM_Weapon(pmove_t *pm, pml_t *pml)
{
  ?PM_Weapon@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_GetRequestedWeapon
==============
*/

const Weapon *__fastcall PM_GetRequestedWeapon(const pmove_t *pm)
{
  return ?PM_GetRequestedWeapon@@YAAEBUWeapon@@PEBVpmove_t@@@Z(pm);
}

/*
==============
BG_IsLocationSelectorActive
==============
*/

bool __fastcall BG_IsLocationSelectorActive(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_IsLocationSelectorActive@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_Offhand_IsPlayingGesture
==============
*/

bool __fastcall BG_Offhand_IsPlayingGesture(const BgWeaponMap *weaponMap, const playerState_s *ps, OffhandGestureTypes gestureType)
{
  return ?BG_Offhand_IsPlayingGesture@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@W4OffhandGestureTypes@@@Z(weaponMap, ps, gestureType);
}

/*
==============
BG_CanSprintMelee
==============
*/

bool __fastcall BG_CanSprintMelee(const playerState_s *ps)
{
  return ?BG_CanSprintMelee@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_WeaponCanAcceptCamo
==============
*/

bool __fastcall BG_WeaponCanAcceptCamo(const Weapon *__formal)
{
  return ?BG_WeaponCanAcceptCamo@@YA_NAEBUWeapon@@@Z(__formal);
}

/*
==============
BG_GetWeaponModels
==============
*/

XModel *__fastcall BG_GetWeaponModels(const PlayerHandIndex hand, const Weapon *r_weapon, const bool isViewModel, const bool isDefaultModel, const bool isDualWielding, const bool isUsingDetonator, const bool isUsingCensorshipWorldModel)
{
  return ?BG_GetWeaponModels@@YAPEAUXModel@@W4PlayerHandIndex@@AEBUWeapon@@_N2222@Z(hand, r_weapon, isViewModel, isDefaultModel, isDualWielding, isUsingDetonator, isUsingCensorshipWorldModel);
}

/*
==============
BG_OffhandGestureWeaponEnd
==============
*/

void __fastcall BG_OffhandGestureWeaponEnd(BgWeaponMap *weaponMap, playerState_s *ps, const BgHandler *const handler, int time, bool immediate)
{
  ?BG_OffhandGestureWeaponEnd@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@QEBVBgHandler@@H_N@Z(weaponMap, ps, handler, time, immediate);
}

/*
==============
BG_NightVisionInterruptable
==============
*/

bool __fastcall BG_NightVisionInterruptable(const BgWeaponMap *weaponMap, const playerState_s *const ps, const int gameTime)
{
  return ?BG_NightVisionInterruptable@@YA_NPEBVBgWeaponMap@@QEBUplayerState_s@@H@Z(weaponMap, ps, gameTime);
}

/*
==============
BG_GetSprintOutInterruptRemaining
==============
*/

int __fastcall BG_GetSprintOutInterruptRemaining(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_GetSprintOutInterruptRemaining@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
PM_ExitAimDownSight
==============
*/

void __fastcall PM_ExitAimDownSight(pmove_t *pm)
{
  ?PM_ExitAimDownSight@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
PM_UpdateMovementAdsFlag
==============
*/

void __fastcall PM_UpdateMovementAdsFlag(pmove_t *pm)
{
  ?PM_UpdateMovementAdsFlag@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
BG_GetCookingGrenadeFuseMax
==============
*/

int __fastcall BG_GetCookingGrenadeFuseMax(const Weapon *weapon, bool isAlternate, const playerState_s *const ps)
{
  return ?BG_GetCookingGrenadeFuseMax@@YAHAEBUWeapon@@_NQEBUplayerState_s@@@Z(weapon, isAlternate, ps);
}

/*
==============
BG_Weapon_CancelOffhand
==============
*/

void __fastcall BG_Weapon_CancelOffhand(playerState_s *ps, const BgHandler *handler, BgWeaponMap *weaponMap, const int serverTime, const bool cancelNonGestureOffhand)
{
  ?BG_Weapon_CancelOffhand@@YAXPEAUplayerState_s@@PEBVBgHandler@@PEAVBgWeaponMap@@H_N@Z(ps, handler, weaponMap, serverTime, cancelNonGestureOffhand);
}

/*
==============
BG_GetHeldGrenadeHoldTime
==============
*/

int __fastcall BG_GetHeldGrenadeHoldTime(const Weapon *weapon, bool isAlternate, const playerState_s *const ps)
{
  return ?BG_GetHeldGrenadeHoldTime@@YAHAEBUWeapon@@_NQEBUplayerState_s@@@Z(weapon, isAlternate, ps);
}

/*
==============
PM_IncrementMeleeComboSeqIdx
==============
*/

void __fastcall PM_IncrementMeleeComboSeqIdx(pmove_t *pm, const Weapon *r_weapon)
{
  ?PM_IncrementMeleeComboSeqIdx@@YAXPEAVpmove_t@@AEBUWeapon@@@Z(pm, r_weapon);
}

/*
==============
PM_Weapon_GetUsedOffHandWeapon
==============
*/

const Weapon *__fastcall PM_Weapon_GetUsedOffHandWeapon(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?PM_Weapon_GetUsedOffHandWeapon@@YAAEBUWeapon@@PEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_Offhand_GetGestureIdx
==============
*/

unsigned int __fastcall BG_Offhand_GetGestureIdx(const BgWeaponMap *weaponMap, const playerState_s *ps, OffhandGestureTypes gestureType)
{
  return ?BG_Offhand_GetGestureIdx@@YAIPEBVBgWeaponMap@@PEBUplayerState_s@@W4OffhandGestureTypes@@@Z(weaponMap, ps, gestureType);
}

/*
==============
BG_GetOffhandAdsFrac
==============
*/

double __fastcall BG_GetOffhandAdsFrac(const playerState_s *const ps)
{
  double result; 

  *(float *)&result = ?BG_GetOffhandAdsFrac@@YAMQEBUplayerState_s@@@Z(ps);
  return result;
}

/*
==============
BG_Weapons_SelectModel
==============
*/

XModel *__fastcall BG_Weapons_SelectModel(const PlayerHandIndex hand, XModel *model, XModel *leftModel, XModel *rightModel)
{
  return ?BG_Weapons_SelectModel@@YAPEAUXModel@@W4PlayerHandIndex@@PEAU1@11@Z(hand, model, leftModel, rightModel);
}

/*
==============
BG_OffhandGestureWeaponWillDetonate
==============
*/

bool __fastcall BG_OffhandGestureWeaponWillDetonate(const playerState_s *ps)
{
  return ?BG_OffhandGestureWeaponWillDetonate@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_CanCancelOffhandGestureWeapon
==============
*/

bool __fastcall BG_CanCancelOffhandGestureWeapon(const playerState_s *ps)
{
  return ?BG_CanCancelOffhandGestureWeapon@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_Weapon_ReloadCancel
==============
*/

void __fastcall PM_Weapon_ReloadCancel(pmove_t *pm, const pml_t *pml)
{
  ?PM_Weapon_ReloadCancel@@YAXPEAVpmove_t@@PEBUpml_t@@@Z(pm, pml);
}

/*
==============
BG_WeaponIsUsingCamo
==============
*/

bool __fastcall BG_WeaponIsUsingCamo(const Weapon *r_weapon)
{
  return ?BG_WeaponIsUsingCamo@@YA_NAEBUWeapon@@@Z(r_weapon);
}

/*
==============
DelayedActionState::DelayedActionState
==============
*/

void __fastcall DelayedActionState::DelayedActionState(DelayedActionState *this)
{
  ??0DelayedActionState@@QEAA@XZ(this);
}

/*
==============
CompressedMeleeAnimData::Set
==============
*/

void __fastcall CompressedMeleeAnimData::Set(CompressedMeleeAnimData *this, int animType, int variant, bool isAlternate)
{
  ?Set@CompressedMeleeAnimData@@QEAAXHH_N@Z(this, animType, variant, isAlternate);
}

/*
==============
PM_BuildWeaponAnimArrays
==============
*/

void __fastcall PM_BuildWeaponAnimArrays(BgWeaponMap *const weaponMap, playerState_s *const ps, const BgHandler *const pmoveHandler)
{
  ?PM_BuildWeaponAnimArrays@@YAXQEAVBgWeaponMap@@QEAUplayerState_s@@QEBVBgHandler@@@Z(weaponMap, ps, pmoveHandler);
}

/*
==============
PM_Weapon_GetFireWeaponAnim
==============
*/

WeaponAnimNumber __fastcall PM_Weapon_GetFireWeaponAnim(const BgWeaponMap *weaponMap, const playerState_s *ps, PlayerHandIndex hand)
{
  return ?PM_Weapon_GetFireWeaponAnim@@YA?AW4WeaponAnimNumber@@PEBVBgWeaponMap@@PEBUplayerState_s@@W4PlayerHandIndex@@@Z(weaponMap, ps, hand);
}

/*
==============
BG_Offhand_IsStoppingGesture
==============
*/

bool __fastcall BG_Offhand_IsStoppingGesture(const BgWeaponMap *weaponMap, const playerState_s *ps, OffhandGestureTypes gestureType)
{
  return ?BG_Offhand_IsStoppingGesture@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@W4OffhandGestureTypes@@@Z(weaponMap, ps, gestureType);
}

/*
==============
BG_OffhandClearFireGesture
==============
*/

void __fastcall BG_OffhandClearFireGesture(BgWeaponMap *weaponMap, playerState_s *ps, int time)
{
  ?BG_OffhandClearFireGesture@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@H@Z(weaponMap, ps, time);
}

/*
==============
BG_UseAnimatedWeaponMovement
==============
*/

bool __fastcall BG_UseAnimatedWeaponMovement(const BgWeaponMap *weaponMap, const playerState_s *ps, const BgHandler *pmoveHandler)
{
  return ?BG_UseAnimatedWeaponMovement@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@PEBVBgHandler@@@Z(weaponMap, ps, pmoveHandler);
}

/*
==============
BG_Heat_GetIsSmoking
==============
*/

bool __fastcall BG_Heat_GetIsSmoking(const WeaponHeat *const playerWeaponHeat, const Weapon *r_weapon)
{
  return ?BG_Heat_GetIsSmoking@@YA_NQEBUWeaponHeat@@AEBUWeapon@@@Z(playerWeaponHeat, r_weapon);
}

/*
==============
BG_WeaponCharge_CalcNumTagsUsed
==============
*/

int __fastcall BG_WeaponCharge_CalcNumTagsUsed(const Weapon *weapon, const bool isAlternate, const int chargeAmount)
{
  return ?BG_WeaponCharge_CalcNumTagsUsed@@YAHAEBUWeapon@@_NH@Z(weapon, isAlternate, chargeAmount);
}

/*
==============
BG_Offhand_HasActiveOffhand
==============
*/

bool __fastcall BG_Offhand_HasActiveOffhand(const playerState_s *ps)
{
  return ?BG_Offhand_HasActiveOffhand@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_GetADSVelocityScale
==============
*/

double __fastcall BG_GetADSVelocityScale(const BgWeaponMap *weaponMap, const playerState_s *const ps, const Weapon *weapon, bool isAlternate)
{
  double result; 

  *(float *)&result = ?BG_GetADSVelocityScale@@YAMPEBVBgWeaponMap@@QEBUplayerState_s@@AEBUWeapon@@_N@Z(weaponMap, ps, weapon, isAlternate);
  return result;
}

/*
==============
BG_GetShotCountForRecoil
==============
*/

unsigned int __fastcall BG_GetShotCountForRecoil(const playerState_s *ps)
{
  return ?BG_GetShotCountForRecoil@@YAIPEBUplayerState_s@@@Z(ps);
}

/*
==============
DelayedActionState::DelayedActionState
==============
*/
void DelayedActionState::DelayedActionState(DelayedActionState *this)
{
  *(_QWORD *)this->m_delayedAction = 0i64;
  *(_QWORD *)this->m_delayedActionOriginalState = 0i64;
}

/*
==============
BG_CalcFingerPoseWeights
==============
*/
void BG_CalcFingerPoseWeights(const XAnimInfo *info, float *outWeights, float *outAnimWeights)
{
  XAnimFingerNotetrackLeafFunctor v3; 

  XAnimCalcNotetrackWeights<2,XAnimFingerNotetrackLeafFunctor>(info, outWeights, outAnimWeights, v3);
}

/*
==============
BG_CanCancelOffhandGestureWeapon
==============
*/
bool BG_CanCancelOffhandGestureWeapon(const playerState_s *ps)
{
  int offhandGestureFlags; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14429, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (ps->weapCommon.offhandGestureFlags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14442, ASSERT_TYPE_ASSERT, "(BG_IsUsingOffhandGestureWeapon( ps ))", (const char *)&queryFormat, "BG_IsUsingOffhandGestureWeapon( ps )") )
    __debugbreak();
  offhandGestureFlags = ps->weapCommon.offhandGestureFlags;
  return (offhandGestureFlags & 0x20) == 0 && (offhandGestureFlags & 8) == 0;
}

/*
==============
BG_CanSprintFire
==============
*/
bool BG_CanSprintFire(const playerState_s *ps)
{
  const dvar_t *v2; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19183, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v2 = DCONST_DVARMPBOOL_movementAnimProto;
  if ( !DCONST_DVARMPBOOL_movementAnimProto && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movementAnimProto") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return !v2->current.enabled && BG_HasPerk(&ps->perks, 0x35u);
}

/*
==============
BG_CanSprintFireOffhand
==============
*/
bool BG_CanSprintFireOffhand(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const Weapon *OffHandWeaponForPlayer; 

  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(weaponMap, ps);
  return OffHandWeaponForPlayer->weaponIdx && BG_GetOffhandAllowsSprint(OffHandWeaponForPlayer, 0);
}

/*
==============
BG_CanSprintMelee
==============
*/
bool BG_CanSprintMelee(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19208, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BG_HasPerk(&ps->perks, 0x36u);
}

/*
==============
BG_CanSprintReload
==============
*/
bool BG_CanSprintReload(const playerState_s *ps)
{
  const dvar_t *v3; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19215, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature((Com_GameMode_Feature)129) )
    return BG_HasPerk(&ps->perks, 0x3Cu);
  v3 = DCONST_DVARMPBOOL_sprint_allowReload;
  if ( !DCONST_DVARMPBOOL_sprint_allowReload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprint_allowReload") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.enabled;
}

/*
==============
BG_ClearMeleeChargeCmd
==============
*/
void BG_ClearMeleeChargeCmd(usercmd_s *cmd)
{
  if ( cmd )
  {
    cmd->meleeChargeEnt = 2047;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18440, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
      __debugbreak();
    MEMORY[0xA0] = 2047;
  }
}

/*
==============
BG_Get3PWeaponAnims
==============
*/
char BG_Get3PWeaponAnims(const Weapon *r_weapon, const bool isDualWielding, const bool isAlternate, XAnimParts **outFingerPoseRightAnim, XAnimParts **outFingerPoseRightAnimSecondary, XAnimParts **outFingerPoseLeftAnim, XAnimParts **outFingerPoseLeftAnimSecondary, XAnimParts **outAltOverrideAnim)
{
  const WeaponDef *v10; 
  const WeaponDef *v11; 
  RawWeaponAnimArrays rawAnimArrays; 
  XAnimParts *normalAnimArray; 
  XAnimParts *v18; 
  XAnimParts *v19; 
  XAnimParts *v20; 
  XAnimParts *v21; 
  XAnimParts *altAnimArray; 
  XAnimParts *v23; 
  XAnimParts *v24; 
  XAnimParts *v25; 
  XAnimParts *v26; 

  if ( !outFingerPoseRightAnim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 774, ASSERT_TYPE_ASSERT, "(outFingerPoseRightAnim)", (const char *)&queryFormat, "outFingerPoseRightAnim") )
    __debugbreak();
  if ( !outFingerPoseLeftAnim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 775, ASSERT_TYPE_ASSERT, "(outFingerPoseLeftAnim)", (const char *)&queryFormat, "outFingerPoseLeftAnim") )
    __debugbreak();
  if ( !outAltOverrideAnim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 776, ASSERT_TYPE_ASSERT, "(outAltOverrideAnim)", (const char *)&queryFormat, "outAltOverrideAnim") )
    __debugbreak();
  BG_CheckThread();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 785, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  *outFingerPoseRightAnim = NULL;
  *outFingerPoseRightAnimSecondary = NULL;
  *outFingerPoseLeftAnim = NULL;
  *outFingerPoseLeftAnimSecondary = NULL;
  *outAltOverrideAnim = NULL;
  if ( !r_weapon->weaponIdx )
    return 0;
  v10 = BG_WeaponDef(r_weapon, 0);
  v11 = BG_WeaponDef(r_weapon, 1);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 800, ASSERT_TYPE_ASSERT, "(weaponDef)", (const char *)&queryFormat, "weaponDef") )
    __debugbreak();
  if ( !v10->szXAnims || !v11->szXAnims || isDualWielding && (!v10->szXAnimsRightHanded || !v10->szXAnimsLeftHanded) )
    return 0;
  normalAnimArray = NULL;
  v18 = NULL;
  v19 = NULL;
  v20 = NULL;
  v21 = NULL;
  altAnimArray = NULL;
  v23 = NULL;
  v24 = NULL;
  v25 = NULL;
  v26 = NULL;
  RawWeaponAnimArrays::RawWeaponAnimArrays(&rawAnimArrays);
  memcpy_0(&rawAnimArrays, v10->szXAnims->anims, 0x1330ui64);
  memcpy_0(rawAnimArrays.xAnimsAlt, v11->szXAnims->anims, sizeof(rawAnimArrays.xAnimsAlt));
  if ( isDualWielding )
  {
    if ( !v10->szXAnimsRightHanded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 816, ASSERT_TYPE_ASSERT, "(weaponDef->szXAnimsRightHanded)", (const char *)&queryFormat, "weaponDef->szXAnimsRightHanded") )
      __debugbreak();
    if ( !v10->szXAnimsLeftHanded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 817, ASSERT_TYPE_ASSERT, "(weaponDef->szXAnimsLeftHanded)", (const char *)&queryFormat, "weaponDef->szXAnimsLeftHanded") )
      __debugbreak();
    memcpy_0(rawAnimArrays.xAnimsRightHanded, v10->szXAnimsRightHanded->anims, sizeof(rawAnimArrays.xAnimsRightHanded));
    memcpy_0(rawAnimArrays.xAnimsLeftHanded, v10->szXAnimsLeftHanded->anims, sizeof(rawAnimArrays.xAnimsLeftHanded));
  }
  BG_BuildWeaponAnimArrays(NULL, r_weapon, isDualWielding, 0, &rawAnimArrays, &normalAnimArray, NULL, &altAnimArray, NULL, NULL, WEAP_ANIM_3P_FINGER_POSE_LEFT, 5);
  if ( isDualWielding )
  {
    *outFingerPoseRightAnim = v19;
    *outFingerPoseRightAnimSecondary = v20;
    *outFingerPoseLeftAnim = altAnimArray;
    *outFingerPoseLeftAnimSecondary = v23;
    *outAltOverrideAnim = v21;
    return 1;
  }
  else
  {
    if ( isAlternate )
    {
      *outFingerPoseLeftAnim = altAnimArray;
      *outFingerPoseLeftAnimSecondary = v23;
      *outFingerPoseRightAnim = v24;
      *outFingerPoseRightAnimSecondary = v25;
    }
    else
    {
      *outFingerPoseLeftAnim = normalAnimArray;
      *outFingerPoseLeftAnimSecondary = v18;
      *outFingerPoseRightAnim = v19;
      *outFingerPoseRightAnimSecondary = v20;
    }
    *outAltOverrideAnim = v26;
    return 1;
  }
}

/*
==============
BG_GetADSFracCurrentVelocity
==============
*/
float BG_GetADSFracCurrentVelocity(const BgWeaponMap *weaponMap, const playerState_s *const ps, const Weapon *weapon, bool isAlternate, float adsVelocityTarget, bool *outIsFinishedAccel)
{
  bool *v6; 
  double v12; 
  int v13; 
  float v14; 
  __int128 v15; 
  float outAdsInToOutAccelSec; 

  v6 = outIsFinishedAccel;
  if ( !outIsFinishedAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1693, ASSERT_TYPE_ASSERT, "( outIsFinishedAccel ) != ( nullptr )", "%s != %s\n\t%p, %p", "outIsFinishedAccel", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( ps->weapCommon.fWeaponPosFracMomentum )
  {
    v12 = MSG_UnpackSignedFloat(ps->weapCommon.fWeaponPosFracChangeFracVel, 20.0, 9u);
    v13 = ps->commandTime - ps->weapCommon.fWeaponPosFracChangeTime;
    BG_GetADSAccel(weaponMap, ps, weapon, isAlternate, (float *)&outIsFinishedAccel, &outAdsInToOutAccelSec);
    if ( adsVelocityTarget <= *(float *)&v12 )
      LODWORD(v14) = LODWORD(outAdsInToOutAccelSec) ^ _xmm;
    else
      v14 = *(float *)&outIsFinishedAccel;
    v15 = 0i64;
    *(float *)&v15 = (float)((float)((float)v13 * 0.001) * v14) + *(float *)&v12;
    _XMM4 = v15;
    if ( adsVelocityTarget <= *(float *)&v12 )
      __asm { vmaxss  xmm0, xmm4, xmm3 }
    else
      __asm { vminss  xmm0, xmm4, xmm3 }
    *v6 = *(float *)&_XMM0 == adsVelocityTarget;
  }
  else
  {
    *(float *)&_XMM0 = adsVelocityTarget;
    *v6 = 1;
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_GetADSVelocityScale
==============
*/
float BG_GetADSVelocityScale(const BgWeaponMap *weaponMap, const playerState_s *const ps, const Weapon *weapon, bool isAlternate)
{
  const dvar_t *v12; 
  unsigned int outNormalSpeedScale[4]; 
  float outSniperSpeedScale; 

  *(float *)&_XMM6 = FLOAT_1_0;
  if ( BG_HasPerk(&ps->perks, 0x11u) )
  {
    *(float *)outNormalSpeedScale = FLOAT_1_0;
    outSniperSpeedScale = FLOAT_1_0;
    BG_GetQuickDrawPerkMultipliers((float *)outNormalSpeedScale, &outSniperSpeedScale);
    _XMM0 = (unsigned int)BG_GetWeaponClass(weapon, isAlternate);
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = outNormalSpeedScale[0];
    __asm { vblendvps xmm6, xmm1, xmm2, xmm3 }
  }
  if ( !BG_IsThirdPersonMode(weaponMap, ps) )
    return *(float *)&_XMM6;
  v12 = DCONST_DVARFLT_camera_thirdPersonAdsTransScale;
  if ( !DCONST_DVARFLT_camera_thirdPersonAdsTransScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_thirdPersonAdsTransScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  return *(float *)&_XMM6 * v12->current.value;
}

/*
==============
BG_GetAltWeaponModeAsStoredInEntityState
==============
*/
bool BG_GetAltWeaponModeAsStoredInEntityState(const playerState_s *ps, const BgWeaponMap *weaponMap)
{
  const Weapon *CurrentWeaponForPlayer; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19555, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19556, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 899, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 900, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  return BG_HasUnderbarrelAmmo(CurrentWeaponForPlayer) && BG_UsingAlternate(ps);
}

/*
==============
BG_GetBestLadderWeapon
==============
*/
const Weapon *BG_GetBestLadderWeapon(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const dvar_t *v2; 

  v2 = DVARBOOL_ladderEnableKillstreakEarlyoutDropping;
  if ( !DVARBOOL_ladderEnableKillstreakEarlyoutDropping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableKillstreakEarlyoutDropping") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    return BG_GetBestLadderWeapon_KillStreakFixed(weaponMap, ps);
  else
    return BG_GetBestLadderWeapon_Old(weaponMap, ps);
}

/*
==============
BG_GetBestLadderWeapon_KillStreakFixed
==============
*/
const Weapon *BG_GetBestLadderWeapon_KillStreakFixed(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v5; 
  bool v6; 
  bool v7; 
  int i; 
  const Weapon *Weapon; 
  unsigned int weaponIdx; 
  bool v11; 
  WeaponDef **v12; 
  __int64 v14; 
  __int64 v15; 

  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v5 = CurrentWeaponForPlayer;
  v6 = BG_UsingAlternate(ps);
  v7 = !BG_IsLadderWeapon(CurrentWeaponForPlayer, v6) && BG_PlayerWeaponGetEquippedSlot(weaponMap, ps, CurrentWeaponForPlayer) != WEAPON_SLOT_PRIMARY;
  for ( i = 0; i < 15; ++i )
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (unsigned int)i >= 0xF )
    {
      LODWORD(v15) = 15;
      LODWORD(v14) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    Weapon = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->weaponsEquipped[i]);
    weaponIdx = Weapon->weaponIdx;
    if ( weaponIdx > bg_lastParsedWeaponIndex )
    {
      LODWORD(v15) = bg_lastParsedWeaponIndex;
      LODWORD(v14) = Weapon->weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v14, v15) )
        __debugbreak();
    }
    v11 = bg_weaponDefs[(unsigned __int16)weaponIdx] == NULL;
    v12 = &bg_weaponDefs[(unsigned __int16)weaponIdx];
    if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    if ( Weapon->weaponIdx )
    {
      if ( !v5->weaponIdx )
        goto LABEL_30;
      if ( (*v12)->ladderWeapon && BG_GetAmmoInClipForWeapon(ps, Weapon, 0, WEAPON_HAND_DEFAULT) )
      {
        v5 = Weapon;
        v7 = 0;
        if ( !memcmp_0(Weapon, CurrentWeaponForPlayer, 0x3Cui64) )
          return v5;
      }
      else if ( v7 && BG_PlayerWeaponGetEquippedSlot(weaponMap, ps, Weapon) == WEAPON_SLOT_PRIMARY )
      {
        v7 = 0;
LABEL_30:
        v5 = Weapon;
        continue;
      }
    }
  }
  return v5;
}

/*
==============
BG_GetBestLadderWeapon_Old
==============
*/
const Weapon *BG_GetBestLadderWeapon_Old(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v5; 
  unsigned int v6; 
  const Weapon *Weapon; 
  unsigned int weaponIdx; 
  bool v9; 
  WeaponDef **v10; 
  __int64 v12; 
  __int64 v13; 

  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v5 = CurrentWeaponForPlayer;
  v6 = 0;
  while ( 1 )
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v6 >= 0xF )
    {
      LODWORD(v13) = 15;
      LODWORD(v12) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    Weapon = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->weaponsEquipped[v6]);
    weaponIdx = Weapon->weaponIdx;
    if ( weaponIdx > bg_lastParsedWeaponIndex )
    {
      LODWORD(v13) = bg_lastParsedWeaponIndex;
      LODWORD(v12) = Weapon->weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v12, v13) )
        __debugbreak();
    }
    v9 = bg_weaponDefs[(unsigned __int16)weaponIdx] == NULL;
    v10 = &bg_weaponDefs[(unsigned __int16)weaponIdx];
    if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    if ( v5->weaponIdx || !Weapon->weaponIdx )
      break;
    v5 = Weapon;
LABEL_23:
    if ( (int)++v6 >= 15 )
      return v5;
  }
  if ( !(*v10)->ladderWeapon )
    goto LABEL_23;
  if ( !BG_GetAmmoInClipForWeapon(ps, Weapon, 0, WEAPON_HAND_DEFAULT) )
    goto LABEL_23;
  v5 = Weapon;
  if ( memcmp_0(Weapon, CurrentWeaponForPlayer, 0x3Cui64) )
    goto LABEL_23;
  return v5;
}

/*
==============
BG_GetCookingGrenadeCookPercentage
==============
*/
double BG_GetCookingGrenadeCookPercentage(const Weapon *weapon, bool isAlternate, const playerState_s *const ps)
{
  int v6; 
  float v7; 
  int CookingGrenadeFuseMax; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 333, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_GetWeaponFieldTime(ps, weapon, isAlternate, 0, 188i64) )
    v6 = BG_WeaponFuseTime(weapon, isAlternate);
  else
    v6 = 0;
  v7 = (float)v6;
  CookingGrenadeFuseMax = BG_GetCookingGrenadeFuseMax(weapon, isAlternate, ps);
  return I_fclamp(1.0 - (float)((float)((float)ps->grenadeTimeLeft - v7) / (float)((float)CookingGrenadeFuseMax - v7)), 0.0, 1.0);
}

/*
==============
BG_GetCookingGrenadeFuseMax
==============
*/
__int64 BG_GetCookingGrenadeFuseMax(const Weapon *weapon, bool isAlternate, const playerState_s *const ps)
{
  double CookingGrenadeScaleTime; 
  float v7; 
  float WeaponFieldTime; 

  CookingGrenadeScaleTime = BG_GetCookingGrenadeScaleTime(ps);
  v7 = 1.0 / *(float *)&CookingGrenadeScaleTime;
  if ( !BG_GetWeaponFieldTime(ps, weapon, isAlternate, 0, 188i64) )
    return (unsigned int)(int)(float)((float)BG_WeaponFuseTime(weapon, isAlternate) * v7);
  WeaponFieldTime = (float)BG_GetWeaponFieldTime(ps, weapon, isAlternate, 0, 188i64);
  return (unsigned int)((int)(float)(WeaponFieldTime * v7) + BG_WeaponFuseTime(weapon, isAlternate));
}

/*
==============
BG_GetCookingGrenadeFuseMin
==============
*/
int BG_GetCookingGrenadeFuseMin(const Weapon *weapon, bool isAlternate, const playerState_s *const ps)
{
  if ( BG_GetWeaponFieldTime(ps, weapon, isAlternate, 0, 188i64) )
    return BG_WeaponFuseTime(weapon, isAlternate);
  else
    return 0;
}

/*
==============
BG_GetCookingGrenadeMaxHoldPercentage
==============
*/
float BG_GetCookingGrenadeMaxHoldPercentage(const Weapon *offhandWeapon, bool isAlternate, const playerState_s *const ps)
{
  int OffhandMaxHoldTime; 
  double v6; 
  int CookingGrenadeFuseMax; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 344, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  OffhandMaxHoldTime = BG_GetOffhandMaxHoldTime(offhandWeapon, 0);
  if ( OffhandMaxHoldTime )
  {
    CookingGrenadeFuseMax = BG_GetCookingGrenadeFuseMax(offhandWeapon, 0, ps);
    v6 = I_fclamp((float)(CookingGrenadeFuseMax - ps->grenadeTimeLeft) / (float)OffhandMaxHoldTime, 0.0, 1.0);
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 348, ASSERT_TYPE_ASSERT, "(maxHoldTime != 0)", (const char *)&queryFormat, "maxHoldTime != 0") )
      __debugbreak();
    *(float *)&v6 = FLOAT_1_0;
  }
  return *(float *)&v6;
}

/*
==============
BG_GetCookingGrenadeScaleTime
==============
*/
float BG_GetCookingGrenadeScaleTime(const playerState_s *const ps)
{
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 292, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1159, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  MSG_UnpackSignedFloat(ps->grenadeCookScale, 5.0, 0xCu);
  _XMM2 = LODWORD(FLOAT_1_0);
  _XMM1 = 0i64;
  __asm
  {
    vcmpltss xmm3, xmm1, xmm0
    vblendvps xmm0, xmm2, xmm0, xmm3
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_GetEquippedWeaponCount
==============
*/
__int64 BG_GetEquippedWeaponCount(const BgWeaponMap *weaponMap, const playerState_s *ps, const weapInventoryType_t inventoryType, const WeaponSlot weaponSlot)
{
  unsigned int v4; 
  unsigned int i; 
  const Weapon *Weapon; 
  int EquippedWeaponIndex; 
  __int64 v12; 
  PlayerEquippedWeaponState *v13; 
  unsigned int weaponIdx; 
  bool v15; 
  WeaponDef **v16; 
  WeaponDef *v17; 
  __int64 v19; 
  __int64 v20; 

  v4 = 0;
  for ( i = 0; i < 0xF; ++i )
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->weaponsEquipped[i]);
    if ( Weapon->weaponIdx )
    {
      if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( Weapon->weaponIdx )
      {
        EquippedWeaponIndex = BG_GetEquippedWeaponIndex(weaponMap, ps, Weapon);
        if ( EquippedWeaponIndex >= 0 )
        {
          v12 = EquippedWeaponIndex;
          v13 = &ps->weapEquippedData[v12];
          if ( (const playerState_s *)((char *)ps + 4 * v12) != (const playerState_s *)-1540i64 )
          {
            weaponIdx = Weapon->weaponIdx;
            if ( weaponIdx > bg_lastParsedWeaponIndex )
            {
              LODWORD(v20) = bg_lastParsedWeaponIndex;
              LODWORD(v19) = weaponIdx;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v19, v20) )
                __debugbreak();
            }
            v15 = bg_weaponDefs[(unsigned __int16)weaponIdx] == NULL;
            v16 = &bg_weaponDefs[(unsigned __int16)weaponIdx];
            if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
              __debugbreak();
            v17 = *v16;
            if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16520, ASSERT_TYPE_ASSERT, "(equippedWeaponDef)", (const char *)&queryFormat, "equippedWeaponDef") )
              __debugbreak();
            if ( (inventoryType == WEAPINVENTORYCOUNT || v17->inventoryType == inventoryType) && (weaponSlot == WEAPON_SLOT_NONE || weaponSlot == WEAPON_SLOT_NUM || v13->slot == weaponSlot) )
              ++v4;
          }
        }
      }
    }
  }
  return v4;
}

/*
==============
BG_GetEquippedWeaponIndex
==============
*/
__int64 BG_GetEquippedWeaponIndex(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_weapon)
{
  const dvar_t *v6; 
  unsigned int v8; 
  const Weapon *Weapon; 
  __int64 v10; 
  __int64 v11; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19100, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19101, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = DVARBOOL_bg_giveAll;
  if ( DVARBOOL_bg_giveAll )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll);
    if ( v6->current.enabled )
      return 14i64;
  }
  v8 = 0;
  while ( 1 )
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v8 >= 0xF )
    {
      LODWORD(v11) = 15;
      LODWORD(v10) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    Weapon = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->weaponsEquipped[v8]);
    if ( !memcmp_0(Weapon, r_weapon, 0x3Cui64) )
      break;
    if ( (int)++v8 >= 15 )
      return 0xFFFFFFFFi64;
  }
  return v8;
}

/*
==============
BG_GetHeldGrenadeFuse
==============
*/
int BG_GetHeldGrenadeFuse(const Weapon *weapon, bool isAlternate, const playerState_s *const ps)
{
  double CookingGrenadeScaleTime; 

  CookingGrenadeScaleTime = BG_GetCookingGrenadeScaleTime(ps);
  if ( BG_GetWeaponFieldTime(ps, weapon, isAlternate, 0, 188i64) )
    return BG_WeaponFuseTime(weapon, isAlternate);
  else
    return (int)(float)((float)ps->grenadeTimeLeft * *(float *)&CookingGrenadeScaleTime);
}

/*
==============
BG_GetHeldGrenadeHoldTime
==============
*/
__int64 BG_GetHeldGrenadeHoldTime(const Weapon *weapon, bool isAlternate, const playerState_s *const ps)
{
  return (unsigned int)(BG_GetCookingGrenadeFuseMax(weapon, isAlternate, ps) - ps->grenadeTimeLeft);
}

/*
==============
BG_GetIdleSpeed
==============
*/
float BG_GetIdleSpeed(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  bitarray<64> perks; 
  bool outIsAlternate; 
  float hipIdleSpeed; 
  float adsIdleSpeed; 
  float adsIdleAmount; 
  float hipIdleAmount; 
  Weapon r_weapon; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18356, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18357, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelOrOffhandADSSupportWeapon = (Weapon *)BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
  perks = ps->perks;
  r_weapon = *ViewmodelOrOffhandADSSupportWeapon;
  BG_GetHipIdleValues(perks, &r_weapon, outIsAlternate, &hipIdleAmount, &adsIdleAmount, &hipIdleSpeed, &adsIdleSpeed);
  if ( BG_IsAimDownSight(&r_weapon, outIsAlternate) )
  {
    *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
    *(float *)&_XMM0 = (float)((float)(adsIdleSpeed - hipIdleSpeed) * *(float *)&_XMM0) + hipIdleSpeed;
  }
  else
  {
    _XMM2 = LODWORD(hipIdleSpeed);
    __asm { vcmpneqss xmm1, xmm2, xmm0 }
    _XMM0 = LODWORD(FLOAT_1_0);
    __asm { vblendvps xmm0, xmm0, xmm2, xmm1 }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_GetMeleeAttackProperties
==============
*/
void BG_GetMeleeAttackProperties(const playerState_s *const inflictorPs, const Weapon *weapon, bool isAlternate, MeleeAnimType *outAnimType, WeaponMaterialType *outMaterial, bool *outIsAlternate, int *outVariation, MeleeResult *outResult)
{
  WeaponMaterialType *v8; 
  int v9; 
  bool *v10; 
  int *v12; 
  MeleeResult *v14; 
  WeaponSFXPackage *SfxPackage; 
  bool v18; 
  int altMeleeVariation; 

  v8 = outMaterial;
  v9 = 0;
  v10 = outIsAlternate;
  v12 = outVariation;
  v14 = outResult;
  *outAnimType = COUNT|DODGE;
  *v8 = MOVEMENT;
  *v10 = 0;
  *v12 = 0;
  *v14 = HIT;
  if ( inflictorPs )
  {
    SfxPackage = BG_GetSfxPackage(weapon, isAlternate);
    if ( SfxPackage )
      *v8 = SfxPackage->sfxMaterialType;
    v18 = BG_UsingAlternateMelee(inflictorPs);
    *v10 = v18;
    if ( v18 )
      altMeleeVariation = inflictorPs->weapCommon.altMeleeVariation;
    else
      altMeleeVariation = inflictorPs->weapCommon.meleeVariation;
    *v12 = altMeleeVariation;
    LOBYTE(v9) = inflictorPs->weapState[0].weaponState == 23;
    *outResult = v9 + 1;
    BG_GetWeaponMeleeAnimProperties(inflictorPs, weapon, isAlternate, 0, *v10, (bool *)&outIsAlternate, outAnimType, (unsigned __int8 *)&outMaterial);
  }
}

/*
==============
BG_GetMeleeTraceGridOffsets
==============
*/
void BG_GetMeleeTraceGridOffsets(const vec2_t **outOffsets, int *outOffsetCount)
{
  *outOffsets = traceOffsets;
  *outOffsetCount = 9;
}

/*
==============
BG_GetOffhandAdsFrac
==============
*/
float BG_GetOffhandAdsFrac(const playerState_s *const ps)
{
  int offhandGestureFlags; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13793, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14429, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  offhandGestureFlags = ps->weapCommon.offhandGestureFlags;
  if ( (offhandGestureFlags & 1) == 0 )
    return 0.0;
  if ( (offhandGestureFlags & 0x200) != 0 )
    return FLOAT_1_0;
  return ps->weapCommon.offhandAdsFrac;
}

/*
==============
BG_GetOffhandGestureWeapon
==============
*/
Weapon *BG_GetOffhandGestureWeapon(const BgWeaponMap *const weaponMap, const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14499, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14500, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14429, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (ps->weapCommon.offhandGestureFlags & 1) != 0 )
    return (Weapon *)BG_GetOffHandWeaponForPlayer(weaponMap, ps);
  else
    return &NULL_WEAPON;
}

/*
==============
BG_GetOffhandScriptWeapon
==============
*/
Weapon *BG_GetOffhandScriptWeapon(const BgWeaponMap *const weaponMap, const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14513, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14514, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14460, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (ps->weapCommon.offhandGestureFlags & 0x40) != 0 )
    return (Weapon *)BG_GetOffHandWeaponForPlayer(weaponMap, ps);
  else
    return &NULL_WEAPON;
}

/*
==============
BG_GetQuickDrawPerkMultipliers
==============
*/
void BG_GetQuickDrawPerkMultipliers(float *outNormalSpeedScale, float *outSniperSpeedScale)
{
  const dvar_t *v4; 
  const dvar_t *v5; 
  const char *v6; 
  const dvar_t *v7; 

  if ( !outNormalSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1542, ASSERT_TYPE_ASSERT, "(outNormalSpeedScale)", (const char *)&queryFormat, "outNormalSpeedScale") )
    __debugbreak();
  if ( !outSniperSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1543, ASSERT_TYPE_ASSERT, "(outSniperSpeedScale)", (const char *)&queryFormat, "outSniperSpeedScale") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
  {
    v4 = DCONST_DVARFLT_perk_quickDrawSpeedScaleMP;
    if ( !DCONST_DVARFLT_perk_quickDrawSpeedScaleMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_quickDrawSpeedScaleMP") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    *outNormalSpeedScale = v4->current.value;
    v5 = DCONST_DVARFLT_perk_quickDrawSpeedScaleSniperMP;
    if ( !DCONST_DVARFLT_perk_quickDrawSpeedScaleSniperMP )
    {
      v6 = "perk_quickDrawSpeedScaleSniperMP";
      goto LABEL_18;
    }
  }
  else
  {
    v7 = DVARFLT_perk_quickDrawSpeedScaleSP;
    if ( !DVARFLT_perk_quickDrawSpeedScaleSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_quickDrawSpeedScaleSP") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    *outNormalSpeedScale = v7->current.value;
    v5 = DVARFLT_perk_quickDrawSpeedScaleSniperSP;
    if ( !DVARFLT_perk_quickDrawSpeedScaleSniperSP )
    {
      v6 = "perk_quickDrawSpeedScaleSniperSP";
LABEL_18:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v6) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(v5);
  *outSniperSpeedScale = v5->current.value;
}

/*
==============
BG_GetShotCountForRecoil
==============
*/
__int64 BG_GetShotCountForRecoil(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7955, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->weapState[0].weaponShotCount < ps->weapCommon.adsRecoilShotCountOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7956, ASSERT_TYPE_ASSERT, "(ps->weapState[WEAPON_HAND_DEFAULT].weaponShotCount >= ps->weapCommon.adsRecoilShotCountOffset)", (const char *)&queryFormat, "ps->weapState[WEAPON_HAND_DEFAULT].weaponShotCount >= ps->weapCommon.adsRecoilShotCountOffset") )
    __debugbreak();
  return ps->weapState[0].weaponShotCount - ps->weapCommon.adsRecoilShotCountOffset;
}

/*
==============
BG_GetSprintOutInterruptRemaining
==============
*/
__int64 BG_GetSprintOutInterruptRemaining(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  int serverTime; 
  bool v5; 
  bool IsSuperSprinting; 
  int v7; 
  int v8; 
  const Weapon *CurrentWeaponForPlayer; 
  int SprintOutInterruptTime; 
  bool v11; 
  int v12; 
  __int64 result; 
  int v14; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19232, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  serverTime = ps->serverTime;
  v5 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u);
  IsSuperSprinting = BG_IsSuperSprinting(ps);
  if ( v5 )
    v7 = 0;
  else
    v7 = serverTime - ps->sprintState.lastSprintEnd;
  if ( IsSuperSprinting )
    v8 = 0;
  else
    v8 = serverTime - ps->sprintState.lastSuperSprintEnd;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  SprintOutInterruptTime = GetSprintOutInterruptTime(weaponMap, ps, CurrentWeaponForPlayer);
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16031, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v11 = BG_UsingAlternate(ps);
  v12 = BG_PlayerDualWielding(ps);
  result = (unsigned int)(BG_SuperSprintOutInterruptTime(weaponMap, ps, CurrentWeaponForPlayer, v11, v12 == 1) - v8);
  v14 = SprintOutInterruptTime - v7;
  if ( v14 > (int)result )
    result = (unsigned int)v14;
  if ( (int)result < 0 )
    return 0i64;
  return result;
}

/*
==============
BG_GetWeaponModels
==============
*/
XModel *BG_GetWeaponModels(const PlayerHandIndex hand, const Weapon *r_weapon, const bool isViewModel, const bool isDefaultModel, const bool isDualWielding, const bool isUsingDetonator, const bool isUsingCensorshipWorldModel)
{
  const WeaponDef *v10; 
  const WeaponDef *v11; 
  XModel *result; 
  bool v13; 
  XModel *censorshipWorldModel; 

  v10 = BG_WeaponDef(r_weapon, 0);
  v11 = v10;
  if ( !isDefaultModel )
  {
    v13 = isDualWielding;
    if ( !isDualWielding )
    {
      if ( isViewModel )
        return v10->gunXModel;
      if ( isUsingDetonator )
        result = v10->detonatorWorldModel;
      else
        result = v10->worldModel;
      goto LABEL_33;
    }
    if ( isViewModel )
    {
      if ( hand == WEAPON_HAND_LEFT )
      {
        result = v10->gunXModelLeftHand;
        if ( result )
          return result;
      }
      else if ( hand == WEAPON_HAND_DEFAULT )
      {
        result = v10->gunXModelRightHand;
        if ( result )
          return result;
      }
      return v11->gunXModel;
    }
    if ( isUsingDetonator )
    {
      result = v10->detonatorWorldModel;
      goto LABEL_33;
    }
    if ( hand == WEAPON_HAND_LEFT )
    {
      result = v10->worldXModelLeftHand;
      if ( result )
        goto LABEL_33;
    }
    else if ( hand == WEAPON_HAND_DEFAULT )
    {
      result = v10->worldXModelRightHand;
      if ( result )
        goto LABEL_33;
    }
    result = v11->worldModel;
    goto LABEL_33;
  }
  if ( isViewModel )
    return v10->defaultViewModel;
  v13 = isDualWielding;
  if ( !isDualWielding )
  {
    result = v10->defaultWorldModel;
    goto LABEL_33;
  }
  if ( hand == WEAPON_HAND_LEFT )
  {
    result = v10->defaultWorldModelLeftHand;
    if ( result )
      goto LABEL_33;
LABEL_10:
    result = v11->defaultWorldModel;
    goto LABEL_33;
  }
  if ( hand )
    goto LABEL_10;
  result = v10->defaultWorldModelRightHand;
  if ( !result )
    goto LABEL_10;
LABEL_33:
  if ( isUsingCensorshipWorldModel )
  {
    if ( v13 )
    {
      if ( hand == WEAPON_HAND_LEFT )
      {
        if ( v11->censorshipWorldModelLeftHand )
          return v11->censorshipWorldModelLeftHand;
      }
      else if ( hand == WEAPON_HAND_DEFAULT && v11->censorshipWorldModelRightHand )
      {
        return v11->censorshipWorldModelRightHand;
      }
    }
    else
    {
      censorshipWorldModel = v11->censorshipWorldModel;
      if ( censorshipWorldModel )
        return censorshipWorldModel;
    }
  }
  return result;
}

/*
==============
BG_GetWeaponOrOffhandAdsFrac
==============
*/
float BG_GetWeaponOrOffhandAdsFrac(const BgWeaponMap *const weaponMap, const playerState_s *const ps)
{
  float result; 
  float v5; 
  const dvar_t *v6; 
  const Weapon *OffhandGestureWeapon; 
  int offhandGestureFlags; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13811, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13812, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = ps->weapCommon.fWeaponPosFrac;
  v5 = 0.0;
  if ( result <= 0.0 )
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13756, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( (ps->weapCommon.offhandGestureFlags & 1) == 0 || ps->weapCommon.fWeaponPosFrac > 0.0 )
      return 0.0;
    v6 = DVARBOOL_killswitch_offhand_ads_weapons;
    if ( !DVARBOOL_killswitch_offhand_ads_weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_offhand_ads_weapons") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled && (OffhandGestureWeapon = BG_GetOffhandGestureWeapon(weaponMap, ps), BG_IsAimDownSight(OffhandGestureWeapon, 0)) )
    {
      offhandGestureFlags = ps->weapCommon.offhandGestureFlags;
      if ( (offhandGestureFlags & 1) != 0 )
      {
        if ( (offhandGestureFlags & 0x200) != 0 )
          return FLOAT_1_0;
        return ps->weapCommon.offhandAdsFrac;
      }
      return v5;
    }
    else
    {
      return 0.0;
    }
  }
  return result;
}

/*
==============
BG_GetWeaponPriorityMap
==============
*/
unsigned __int8 *BG_GetWeaponPriorityMap(const Weapon *weapon, bool isAlternate)
{
  const WeaponDef *v3; 

  if ( !weapon->weaponIdx )
    return bg_defaultPriorityMap;
  v3 = BG_WeaponDef(weapon, isAlternate);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 284, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  return v3->hitLocPriorityMap;
}

/*
==============
BG_Heat_ApplyFireHeat
==============
*/
void BG_Heat_ApplyFireHeat(WeaponHeat *const playerWeaponHeat, const Weapon *r_weapon, const bool isAlternate, const int time)
{
  double Heat; 
  double v9; 
  float outDissipationPerSecond[6]; 
  float outAccumulationPerShot; 

  if ( playerWeaponHeat )
  {
    BG_GetHeatProperties(r_weapon, isAlternate, &outAccumulationPerShot, outDissipationPerSecond);
    Heat = BG_Heat_GetHeat(playerWeaponHeat, r_weapon, isAlternate, time);
    v9 = I_fclamp(*(float *)&Heat + outAccumulationPerShot, 0.0, 1.0);
    playerWeaponHeat->lastIncreaseTime = time;
    playerWeaponHeat->lastIncrease = *(float *)&v9;
    playerWeaponHeat->weapon = *r_weapon;
  }
}

/*
==============
BG_Heat_GetHeat
==============
*/
float BG_Heat_GetHeat(const WeaponHeat *const playerWeaponHeat, const Weapon *r_weapon, const bool isAlternate, const int time)
{
  float lastIncrease; 
  float v10; 
  int lastIncreaseTime; 
  float v13; 
  double v14; 
  float outAccumulationPerShot[4]; 
  __int128 v17; 
  float outDissipationPerSecond; 

  if ( !playerWeaponHeat || memcmp_0(r_weapon, &playerWeaponHeat->weapon, 0x3Cui64) )
    return 0.0;
  v17 = _XMM10;
  BG_GetHeatProperties(r_weapon, isAlternate, outAccumulationPerShot, &outDissipationPerSecond);
  lastIncrease = playerWeaponHeat->lastIncrease;
  v10 = outDissipationPerSecond;
  lastIncreaseTime = playerWeaponHeat->lastIncreaseTime;
  __asm { vxorpd  xmm10, xmm10, xmm10 }
  if ( (playerWeaponHeat->lastIncrease < 0.0 || lastIncrease > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9938, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( lastIncreaseValue ) && ( lastIncreaseValue ) <= ( 1.0f )", "lastIncreaseValue not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", lastIncrease, *(double *)&_XMM10, DOUBLE_1_0) )
    __debugbreak();
  if ( (v10 < 0.0 || v10 > 3.4028235e38) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9939, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( dissipationPerSecond ) && ( dissipationPerSecond ) <= ( 3.402823466e+38F )", "dissipationPerSecond not in [0.0f, FLT_MAX]\n\t%g not in [%g, %g]", v10, *(double *)&_XMM10, DOUBLE_3_402823466385289e38) )
    __debugbreak();
  v13 = (float)(time - lastIncreaseTime) * 0.001;
  if ( v13 > 0.0 )
  {
    v14 = I_fclamp(lastIncrease - (float)(v13 * v10), 0.0, 1.0);
    return *(float *)&v14;
  }
  return lastIncrease;
}

/*
==============
BG_Heat_GetIsSmoking
==============
*/
bool BG_Heat_GetIsSmoking(const WeaponHeat *const playerWeaponHeat, const Weapon *r_weapon)
{
  if ( playerWeaponHeat )
    return playerWeaponHeat->flags & 1;
  else
    return 0;
}

/*
==============
BG_Heat_UpdateFlags
==============
*/
void BG_Heat_UpdateFlags(WeaponHeat *const weaponHeat, const Weapon *r_weapon, const int time)
{
  double Heat; 
  WeaponHeat::Flags flags; 
  char v7; 
  float outSmokeStopThreshold; 
  float outSmokeStartThreshold; 

  if ( weaponHeat && weaponHeat->lastIncreaseTime )
  {
    Heat = BG_Heat_GetHeat(weaponHeat, r_weapon, 0, time);
    BG_GetHeatSmokeProperties(r_weapon, 0, &outSmokeStartThreshold, &outSmokeStopThreshold);
    flags = weaponHeat->flags;
    v7 = flags & 1;
    if ( outSmokeStartThreshold > *(float *)&Heat || v7 )
    {
      if ( outSmokeStopThreshold >= *(float *)&Heat )
      {
        if ( v7 )
          weaponHeat->flags = flags & 0xFE;
      }
    }
    else
    {
      weaponHeat->flags = flags | 1;
    }
  }
  else
  {
    weaponHeat->flags &= ~1u;
  }
}

/*
==============
BG_IncrementWeaponMovementIdleTime
==============
*/
void BG_IncrementWeaponMovementIdleTime(const BgWeaponMap *weaponMap, const playerState_s *ps, float frametime, int *weaponIdleTime)
{
  float IdleSpeed; 
  float holdBreathScale; 
  const dvar_t *v9; 
  int v10; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18404, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18405, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  IdleSpeed = BG_GetIdleSpeed(weaponMap, ps);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_LADDER_AIM) )
  {
    holdBreathScale = ps->holdBreathScale;
    v9 = DCONST_DVARBOOL_player_scope_prototype;
    if ( !DCONST_DVARBOOL_player_scope_prototype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_scope_prototype") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( !v9->current.enabled && holdBreathScale > 1.0 )
      holdBreathScale = (float)((float)(holdBreathScale - 1.0) * 0.5) + 1.0;
    v10 = (int)(float)((float)((float)(holdBreathScale * frametime) * 1000.0) * IdleSpeed);
  }
  else
  {
    v10 = (int)(float)((float)(frametime * 1000.0) * IdleSpeed);
  }
  *weaponIdleTime += v10;
}

/*
==============
BG_IsLocationSelectorActive
==============
*/
bool BG_IsLocationSelectorActive(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  char locationSelectionInfo; 
  const Weapon *CurrentWeaponForPlayer; 
  bool result; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 362, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 363, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  locationSelectionInfo = ps->locationSelectionInfo;
  result = 0;
  if ( (locationSelectionInfo & 1) != 0 )
  {
    if ( (locationSelectionInfo & 8) == 0 )
      return 1;
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    if ( CurrentWeaponForPlayer->weaponIdx )
    {
      if ( BG_WeaponDef(CurrentWeaponForPlayer, 0)->weapType == WEAPTYPE_LOCATION_SELECT )
        return 1;
    }
  }
  return result;
}

/*
==============
BG_IsMapLocationSelectorActive
==============
*/
bool BG_IsMapLocationSelectorActive(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  char locationSelectionInfo; 
  const Weapon *CurrentWeaponForPlayer; 
  bool result; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 396, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 397, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 362, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 363, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  locationSelectionInfo = ps->locationSelectionInfo;
  result = (locationSelectionInfo & 1) != 0 && ((locationSelectionInfo & 8) == 0 || (CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps), CurrentWeaponForPlayer->weaponIdx) && BG_WeaponDef(CurrentWeaponForPlayer, 0)->weapType == WEAPTYPE_LOCATION_SELECT) && (ps->locationSelectionInfo & 0xE0) == 0x80;
  return result;
}

/*
==============
BG_IsSprintAdditive
==============
*/
bool BG_IsSprintAdditive(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  bool v4; 
  bool v5; 
  const Weapon *CurrentWeaponForPlayer; 
  bool result; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15806, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15807, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = BG_UsingAlternate(ps);
  v5 = BG_PlayerDualWielding(ps) == 1;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  if ( BG_Suit_ShouldUseSuitAnim(ps, CurrentWeaponForPlayer, v4, v5, WEAP_ANIM_SPRINT_IN, WEAP_ANIM_ADDITIVE_SPRINT_IN) )
    return 1;
  if ( BG_Suit_ShouldUseSuitAnim(ps, CurrentWeaponForPlayer, v4, v5, WEAP_ANIM_SPRINT_LOOP, WEAP_ANIM_ADDITIVE_SPRINT_LOOP) )
    return 1;
  result = BG_Suit_ShouldUseSuitAnim(ps, CurrentWeaponForPlayer, v4, v5, WEAP_ANIM_SPRINT_OUT, WEAP_ANIM_ADDITIVE_SPRINT_OUT);
  if ( result )
    return 1;
  return result;
}

/*
==============
BG_IsUsingOffhandGestureWeapon
==============
*/
bool BG_IsUsingOffhandGestureWeapon(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14429, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->weapCommon.offhandGestureFlags & 1;
}

/*
==============
BG_IsUsingOffhandGestureWeaponADSActive
==============
*/
bool BG_IsUsingOffhandGestureWeaponADSActive(const playerState_s *const ps)
{
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13780, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14429, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  return (ps->weapCommon.offhandGestureFlags & 1) != 0 && (ps->weapCommon.offhandGestureFlags & 0x200) != 0;
}

/*
==============
BG_IsUsingOffhandGestureWeaponADSSupport
==============
*/
bool BG_IsUsingOffhandGestureWeaponADSSupport(const BgWeaponMap *const weaponMap, const playerState_s *const ps)
{
  const dvar_t *v4; 
  const Weapon *OffhandGestureWeapon; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13755, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13756, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14429, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (ps->weapCommon.offhandGestureFlags & 1) == 0 || ps->weapCommon.fWeaponPosFrac > 0.0 )
    return 0;
  v4 = DVARBOOL_killswitch_offhand_ads_weapons;
  if ( !DVARBOOL_killswitch_offhand_ads_weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_offhand_ads_weapons") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return 0;
  OffhandGestureWeapon = BG_GetOffhandGestureWeapon(weaponMap, ps);
  return BG_IsAimDownSight(OffhandGestureWeapon, 0);
}

/*
==============
BG_IsUsingScripteOffhandWeaponWithScriptedAnimType
==============
*/
bool BG_IsUsingScripteOffhandWeaponWithScriptedAnimType(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14486, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BYTE1(ps->weapCommon.offhandGestureFlags) & 1;
}

/*
==============
BG_IsUsingScriptedOffhandWeapon
==============
*/
bool BG_IsUsingScriptedOffhandWeapon(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14460, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return (ps->weapCommon.offhandGestureFlags & 0x40) != 0;
}

/*
==============
BG_IsWeaponMeleeOverride
==============
*/
bool BG_IsWeaponMeleeOverride(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *heldWeapon)
{
  const Weapon *FirstEquippedWeaponBySlot; 
  bool result; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19350, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19351, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = heldWeapon->weaponIdx && (FirstEquippedWeaponBySlot = BG_GetFirstEquippedWeaponBySlot(weaponMap, ps, WEAPON_SLOT_MELEE), FirstEquippedWeaponBySlot->weaponIdx) && memcmp_0(heldWeapon, FirstEquippedWeaponBySlot, 0x3Cui64) == 0;
  return result;
}

/*
==============
BG_NightVisionAnyGestureIsPlaying
==============
*/
bool BG_NightVisionAnyGestureIsPlaying(const BgWeaponMap *weaponMap, const playerState_s *const ps, const int gameTime)
{
  const Weapon *CurrentWeaponForPlayer; 
  bool v6; 
  bool v7; 
  const Gesture *Gesture; 
  Gesture *v9; 
  const Gesture *v10; 
  unsigned int v11; 
  unsigned int IndexFromGesture; 
  bool result; 
  unsigned int outSlot; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15467, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15468, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v6 = BG_UsingAlternate(ps);
  v7 = BG_PlayerDualWielding(ps) != 0;
  Gesture = BG_Suit_GetGesture(ps, WEAPON_HAND_DEFAULT, CurrentWeaponForPlayer, v6, v7, GESTUREANIMTYPE_NVG_ON);
  v9 = BG_Suit_GetGesture(ps, WEAPON_HAND_DEFAULT, CurrentWeaponForPlayer, v6, v7, GESTUREANIMTYPE_NVG_OFF);
  outSlot = 2;
  v10 = v9;
  result = 1;
  if ( !Gesture || (v11 = BG_Gesture_GetIndexFromGesture(Gesture), !BG_Gesture_IsPlayingByIndex(ps, v11, &outSlot)) )
  {
    outSlot = 2;
    if ( !v10 )
      return 0;
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(v10);
    if ( !BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot) )
      return 0;
  }
  return result;
}

/*
==============
BG_NightVisionGestureIsPlaying
==============
*/
bool BG_NightVisionGestureIsPlaying(const playerState_s *const ps, Gesture *const nvgGesture, unsigned int *outSlot, unsigned int *outIndex)
{
  bool result; 
  unsigned int v6; 
  unsigned int IndexFromGesture; 
  unsigned int outSlota; 

  result = 0;
  v6 = 2;
  outSlota = 2;
  IndexFromGesture = 256;
  if ( nvgGesture )
  {
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(nvgGesture);
    result = BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlota);
    v6 = outSlota;
  }
  if ( outIndex )
    *outIndex = IndexFromGesture;
  if ( outSlot )
    *outSlot = v6;
  return result;
}

/*
==============
BG_NightVisionInterruptable
==============
*/
bool BG_NightVisionInterruptable(const BgWeaponMap *weaponMap, const playerState_s *const ps, const int gameTime)
{
  const Weapon *CurrentWeaponForPlayer; 
  bool v7; 
  unsigned int v8; 
  bool v9; 
  Gesture *Gesture; 
  Gesture *v11; 
  bool IsPlayingByIndex; 
  unsigned int v13; 
  unsigned int IndexFromGesture; 
  const XAnimParts *v15; 
  double NotetrackTimeFromParts; 
  float v17; 
  double ElapsedTime; 
  const Gesture *v19; 
  bool v21; 
  unsigned int v22; 
  const XAnimParts *v23; 
  double v24; 
  float v25; 
  double AnimLengthInSeconds; 
  unsigned int outSlot; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15493, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15494, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v7 = BG_UsingAlternate(ps);
  v8 = 2;
  v9 = BG_PlayerDualWielding(ps) != 0;
  outSlot = 2;
  Gesture = BG_Suit_GetGesture(ps, WEAPON_HAND_DEFAULT, CurrentWeaponForPlayer, v7, v9, GESTUREANIMTYPE_NVG_ON);
  v11 = BG_Suit_GetGesture(ps, WEAPON_HAND_DEFAULT, CurrentWeaponForPlayer, v7, v9, GESTUREANIMTYPE_NVG_OFF);
  IsPlayingByIndex = 0;
  outSlot = 2;
  v13 = 2;
  if ( Gesture )
  {
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(Gesture);
    IsPlayingByIndex = BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot);
    v13 = outSlot;
  }
  if ( IsPlayingByIndex )
  {
    if ( !*Gesture->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15508, ASSERT_TYPE_ASSERT, "(nvgOnGesture->anims[GESTURE_ASSET_LEFT_CENTER])", (const char *)&queryFormat, "nvgOnGesture->anims[GESTURE_CENTER_ANIM_INDEX]") )
      __debugbreak();
    v15 = *Gesture->anims;
    if ( !v15 )
      return 0;
    NotetrackTimeFromParts = XAnimGetNotetrackTimeFromParts(v15, scr_const.interruptible);
    v17 = *(float *)&NotetrackTimeFromParts;
    if ( *(float *)&NotetrackTimeFromParts < 0.0 )
    {
      Com_PrintWarning(16, "NVG On Gesture %s, Missing 'interruptible' notetrack.\n", Gesture->name);
      return 0;
    }
    ElapsedTime = BG_Gesture_GetElapsedTime(ps, v13, gameTime);
    v19 = Gesture;
  }
  else
  {
    v21 = 0;
    outSlot = 2;
    if ( v11 )
    {
      v22 = BG_Gesture_GetIndexFromGesture(v11);
      v21 = BG_Gesture_IsPlayingByIndex(ps, v22, &outSlot);
      v8 = outSlot;
    }
    if ( !v21 )
      return 1;
    if ( !*v11->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15535, ASSERT_TYPE_ASSERT, "(nvgOffGesture->anims[GESTURE_ASSET_LEFT_CENTER])", (const char *)&queryFormat, "nvgOffGesture->anims[GESTURE_CENTER_ANIM_INDEX]") )
      __debugbreak();
    v23 = *v11->anims;
    if ( !v23 )
      return 0;
    v24 = XAnimGetNotetrackTimeFromParts(v23, scr_const.interruptible);
    v17 = *(float *)&v24;
    if ( *(float *)&v24 < 0.0 )
    {
      Com_PrintWarning(16, "NVG off Gesture %s, Missing 'interruptable' notetrack.\n", v11->name);
      return 0;
    }
    ElapsedTime = BG_Gesture_GetElapsedTime(ps, v8, gameTime);
    v19 = v11;
  }
  v25 = *(float *)&ElapsedTime;
  AnimLengthInSeconds = BG_Gesture_GetAnimLengthInSeconds(v19);
  return v25 >= (float)(*(float *)&AnimLengthInSeconds * v17);
}

/*
==============
BG_OFfhandGestureWeaponIsBeingPutAway
==============
*/
bool BG_OFfhandGestureWeaponIsBeingPutAway(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13617, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return (ps->weapCommon.offhandGestureFlags & 0x10) != 0;
}

/*
==============
BG_OffhandClearFireGesture
==============
*/
void BG_OffhandClearFireGesture(BgWeaponMap *weaponMap, playerState_s *ps, int time)
{
  const Weapon *OffHandWeaponForPlayer; 
  const WeaponDef *v7; 
  unsigned int IndexFromGesture; 
  const Weapon *CurrentWeaponForPlayer; 
  const Gesture *gestureThrowAlt; 
  unsigned int outSlot; 

  outSlot = 2;
  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(weaponMap, ps);
  v7 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
  IndexFromGesture = 256;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  if ( BG_PlayAltGesturesForOffhandWeapons(CurrentWeaponForPlayer) && (gestureThrowAlt = v7->gestureThrowAlt) != NULL || (gestureThrowAlt = v7->gestureThrow) != NULL )
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(gestureThrowAlt);
  BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot);
  if ( outSlot != 2 )
    BG_Gesture_StopBySlot(ps, outSlot, time, 1, 300, 1);
}

/*
==============
BG_OffhandGestureScriptWeaponEnd
==============
*/
void BG_OffhandGestureScriptWeaponEnd(BgWeaponMap *weaponMap, playerState_s *ps, int time, bool immediate)
{
  const Weapon *OffHandWeaponForPlayer; 
  const WeaponDef *v9; 
  unsigned int IndexFromGesture; 
  const Weapon *CurrentWeaponForPlayer; 
  const Gesture *gestureAnimation; 
  unsigned int outSlot; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13731, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13732, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  outSlot = 2;
  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(weaponMap, ps);
  v9 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
  IndexFromGesture = 256;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  BG_PlayAltGesturesForOffhandWeapons(CurrentWeaponForPlayer);
  gestureAnimation = v9->gestureAnimation;
  if ( gestureAnimation )
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(gestureAnimation);
  BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot);
  if ( outSlot != 2 )
    BG_Gesture_StopBySlot(ps, outSlot, time, immediate, 0, 0);
  *(_QWORD *)&ps->weapCommon.offhandGestureFlags = 0i64;
  *(_QWORD *)&ps->grenadeTimeLeft = 0i64;
  BG_AddPredictableEventToPlayerstate(EV_OFFHAND_END_NOTIFY, 0, time, weaponMap, ps);
}

/*
==============
BG_OffhandGestureWeaponEnd
==============
*/
void BG_OffhandGestureWeaponEnd(BgWeaponMap *weaponMap, playerState_s *ps, const BgHandler *const handler, int time, bool immediate)
{
  unsigned int v9; 
  char v10; 
  const Weapon *OffHandWeaponForPlayer; 
  const WeaponDef *v12; 
  unsigned int IndexFromGesture; 
  const Weapon *CurrentWeaponForPlayer; 
  const Gesture *gestureDetonateAlt; 
  const Weapon *v16; 
  const WeaponDef *v17; 
  unsigned int v18; 
  const Weapon *v19; 
  const Gesture *gesturePullbackAlt; 
  unsigned int outSlot; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14585, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14586, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13609, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = (unsigned int)ps->weapCommon.offhandGestureFlags >> 5;
  outSlot = 2;
  v10 = v9 & 1;
  if ( v10 )
  {
    OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(weaponMap, ps);
    v12 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
    IndexFromGesture = 256;
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    if ( BG_PlayAltGesturesForOffhandWeapons(CurrentWeaponForPlayer) && (gestureDetonateAlt = v12->gestureDetonateAlt) != NULL || (gestureDetonateAlt = v12->gestureDetonate) != NULL )
      IndexFromGesture = BG_Gesture_GetIndexFromGesture(gestureDetonateAlt);
    BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot);
    if ( outSlot != 2 )
      BG_Gesture_StopBySlot(ps, outSlot, time, immediate, 0, 0);
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x1Eu);
  }
  else
  {
    v16 = BG_GetOffHandWeaponForPlayer(weaponMap, ps);
    v17 = BG_WeaponDef(v16, 0);
    v18 = 256;
    v19 = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    if ( BG_PlayAltGesturesForOffhandWeapons(v19) && (gesturePullbackAlt = v17->gesturePullbackAlt) != NULL || (gesturePullbackAlt = v17->gesturePullback) != NULL )
      v18 = BG_Gesture_GetIndexFromGesture(gesturePullbackAlt);
    BG_Gesture_IsPlayingByIndex(ps, v18, &outSlot);
    if ( outSlot != 2 )
      BG_Gesture_StopBySlot(ps, outSlot, time, immediate, 0, 0);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      BG_AnimScriptEvent(handler, ps, ANIM_ET_CANCEL_GRENADE, 1, 1, NULL);
      if ( !PlayerASM_IsEnabled() )
        BG_ClearPrepareAnim(handler, ps);
    }
  }
  *(_QWORD *)&ps->weapCommon.offhandGestureFlags = 0i64;
  *(_QWORD *)&ps->grenadeTimeLeft = 0i64;
  if ( !v10 )
    BG_AddPredictableEventToPlayerstate(EV_OFFHAND_END_NOTIFY, 0, time, weaponMap, ps);
}

/*
==============
BG_OffhandGestureWeaponPutAway
==============
*/
void BG_OffhandGestureWeaponPutAway(BgWeaponMap *weaponMap, playerState_s *ps, int time, bool immediate)
{
  const Weapon *OffHandWeaponForPlayer; 
  const WeaponDef *v9; 
  unsigned int IndexFromGesture; 
  const Weapon *CurrentWeaponForPlayer; 
  const Gesture *gesturePullbackAlt; 
  const Gesture *AssetFromIndex; 
  GestureAnimationSettings *AnimationSettings; 
  float v15; 
  float outAnimLength; 
  double ElapsedTime; 
  int v18; 
  bool v19; 
  unsigned int outSlot; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14542, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14543, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  outSlot = 2;
  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(weaponMap, ps);
  v9 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
  IndexFromGesture = 256;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  if ( BG_PlayAltGesturesForOffhandWeapons(CurrentWeaponForPlayer) && (gesturePullbackAlt = v9->gesturePullbackAlt) != NULL || (gesturePullbackAlt = v9->gesturePullback) != NULL )
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(gesturePullbackAlt);
  if ( BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot) )
  {
    if ( outSlot == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14550, ASSERT_TYPE_ASSERT, "(pullbackGestureSlot != 2)", (const char *)&queryFormat, "pullbackGestureSlot != GESTURE_INVALID_SLOT") )
      __debugbreak();
    AssetFromIndex = BG_Gesture_GetAssetFromIndex(IndexFromGesture);
    AnimationSettings = BG_Gesture_GetAnimationSettings(AssetFromIndex);
    v15 = (float)AnimationSettings->inAnimLength * 0.001;
    outAnimLength = (float)AnimationSettings->outAnimLength;
    ElapsedTime = BG_Gesture_GetElapsedTime(ps, outSlot, time);
    v18 = 0;
    v19 = 0;
    if ( !immediate )
    {
      if ( *(float *)&ElapsedTime >= v15 * 0.9 )
      {
LABEL_19:
        BG_Gesture_StopBySlot(ps, outSlot, time, v19, v18, 0);
        ps->weapCommon.offhandGestureFlags &= 0xFFFFFFF1;
        ps->weapCommon.offhandGestureFlags |= 0x10u;
        return;
      }
      v18 = (int)(float)((float)(outAnimLength / v15) * *(float *)&ElapsedTime);
    }
    v19 = 1;
    goto LABEL_19;
  }
}

/*
==============
BG_OffhandGestureWeaponWillDetonate
==============
*/
bool BG_OffhandGestureWeaponWillDetonate(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13609, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return (ps->weapCommon.offhandGestureFlags & 0x20) != 0;
}

/*
==============
BG_Offhand_ActiveOffhandIsInterruptable
==============
*/
bool BG_Offhand_ActiveOffhandIsInterruptable(const pmove_t *pm)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14402, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14402, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BG_Offhand_ActiveOffhandIsInterruptable_Internal(pm->weaponMap, ps, pm->cmd.serverTime);
}

/*
==============
BG_Offhand_ActiveOffhandIsInterruptable_Internal
==============
*/
bool BG_Offhand_ActiveOffhandIsInterruptable_Internal(const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime)
{
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14383, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14384, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return (!BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_PULLBACK) && !BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_THROW) && !BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_DETONATE) || BG_Offhand_GrenadeGestureInterruptable(weaponMap, ps, serverTime)) && (!BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_WEAPON) || BG_Offhand_ScriptWeaponInterruptable(weaponMap, ps, serverTime));
}

/*
==============
BG_Offhand_GetGestureIdx
==============
*/
__int64 BG_Offhand_GetGestureIdx(const BgWeaponMap *weaponMap, const playerState_s *ps, OffhandGestureTypes gestureType)
{
  const Weapon *OffHandWeaponForPlayer; 
  const WeaponDef *v7; 
  unsigned int v8; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 
  const Gesture *gestureAnimation; 

  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(weaponMap, ps);
  v7 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
  v8 = 256;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v10 = BG_PlayAltGesturesForOffhandWeapons(CurrentWeaponForPlayer);
  switch ( gestureType )
  {
    case OHGT_WEAPON:
      gestureAnimation = v7->gestureAnimation;
      goto LABEL_17;
    case OHGT_PULLBACK:
      if ( v10 )
      {
        gestureAnimation = v7->gesturePullbackAlt;
        if ( gestureAnimation )
          return BG_Gesture_GetIndexFromGesture(gestureAnimation);
      }
      gestureAnimation = v7->gesturePullback;
      goto LABEL_17;
    case OHGT_THROW:
      if ( v10 )
      {
        gestureAnimation = v7->gestureThrowAlt;
        if ( gestureAnimation )
          return BG_Gesture_GetIndexFromGesture(gestureAnimation);
      }
      gestureAnimation = v7->gestureThrow;
      goto LABEL_17;
    case OHGT_DETONATE:
      if ( v10 )
      {
        gestureAnimation = v7->gestureDetonateAlt;
        if ( gestureAnimation )
          return BG_Gesture_GetIndexFromGesture(gestureAnimation);
      }
      gestureAnimation = v7->gestureDetonate;
LABEL_17:
      if ( !gestureAnimation )
        return v8;
      return BG_Gesture_GetIndexFromGesture(gestureAnimation);
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12861, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Can't Find Gesutre Index for Unknown Gesture Type %d\n", gestureType) )
    __debugbreak();
  return v8;
}

/*
==============
BG_Offhand_GetGestureIdxForWeapon
==============
*/
__int64 BG_Offhand_GetGestureIdxForWeapon(const playerState_s *ps, const BgWeaponMap *weaponMap, const Weapon *r_weapon, bool isAlternate, OffhandGestureTypes gestureType)
{
  const WeaponDef *v7; 
  unsigned int v8; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 
  const Gesture *gestureAnimation; 

  v7 = BG_WeaponDef(r_weapon, 0);
  v8 = 256;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v10 = BG_PlayAltGesturesForOffhandWeapons(CurrentWeaponForPlayer);
  switch ( gestureType )
  {
    case OHGT_WEAPON:
      gestureAnimation = v7->gestureAnimation;
      goto LABEL_17;
    case OHGT_PULLBACK:
      if ( v10 )
      {
        gestureAnimation = v7->gesturePullbackAlt;
        if ( gestureAnimation )
          return BG_Gesture_GetIndexFromGesture(gestureAnimation);
      }
      gestureAnimation = v7->gesturePullback;
      goto LABEL_17;
    case OHGT_THROW:
      if ( v10 )
      {
        gestureAnimation = v7->gestureThrowAlt;
        if ( gestureAnimation )
          return BG_Gesture_GetIndexFromGesture(gestureAnimation);
      }
      gestureAnimation = v7->gestureThrow;
      goto LABEL_17;
    case OHGT_DETONATE:
      if ( v10 )
      {
        gestureAnimation = v7->gestureDetonateAlt;
        if ( gestureAnimation )
          return BG_Gesture_GetIndexFromGesture(gestureAnimation);
      }
      gestureAnimation = v7->gestureDetonate;
LABEL_17:
      if ( !gestureAnimation )
        return v8;
      return BG_Gesture_GetIndexFromGesture(gestureAnimation);
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12861, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Can't Find Gesutre Index for Unknown Gesture Type %d\n", gestureType) )
    __debugbreak();
  return v8;
}

/*
==============
BG_Offhand_GrenadeGestureInterruptable
==============
*/
bool BG_Offhand_GrenadeGestureInterruptable(const BgWeaponMap *weaponMap, const playerState_s *ps, int gameTime)
{
  const Weapon *OffHandWeaponForPlayer; 
  const WeaponDef *v8; 
  unsigned int IndexFromGesture; 
  const Weapon *CurrentWeaponForPlayer; 
  const Gesture *gesturePullbackAlt; 
  const Gesture *AssetFromIndex; 
  GestureAnimationSettings *AnimationSettings; 
  const XAnimParts *v14; 
  double NotetrackTimeFromParts; 
  unsigned int outSlot; 

  if ( !BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_PULLBACK) && !BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_THROW) && !BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_DETONATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12898, ASSERT_TYPE_ASSERT, "(BG_Offhand_IsPlayingGrenadeGesture( weaponMap, ps ))", (const char *)&queryFormat, "BG_Offhand_IsPlayingGrenadeGesture( weaponMap, ps )") )
    __debugbreak();
  if ( BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_DETONATE) )
    return BG_Offhand_IsGestureInterruptable(weaponMap, ps, OHGT_DETONATE, gameTime);
  outSlot = 2;
  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(weaponMap, ps);
  v8 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
  IndexFromGesture = 256;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  if ( BG_PlayAltGesturesForOffhandWeapons(CurrentWeaponForPlayer) && (gesturePullbackAlt = v8->gesturePullbackAlt) != NULL || (gesturePullbackAlt = v8->gesturePullback) != NULL )
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(gesturePullbackAlt);
  if ( BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot) )
  {
    if ( outSlot == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12910, ASSERT_TYPE_ASSERT, "(pullbackSlot != 2)", (const char *)&queryFormat, "pullbackSlot != GESTURE_INVALID_SLOT") )
      __debugbreak();
    if ( !BG_Offhand_IsStoppingGesture(weaponMap, ps, OHGT_PULLBACK) )
      return 0;
    if ( (ps->weapCommon.offhandGestureFlags & 8) != 0 )
      return 0;
    AssetFromIndex = BG_Gesture_GetAssetFromIndex(IndexFromGesture);
    AnimationSettings = BG_Gesture_GetAnimationSettings(AssetFromIndex);
    v14 = (const XAnimParts *)*((_QWORD *)AssetFromIndex->anims + 11);
    if ( !v14 )
      return 0;
    NotetrackTimeFromParts = XAnimGetNotetrackTimeFromParts(v14, scr_const.interruptible);
    return *(float *)&NotetrackTimeFromParts >= 0.0 && (float)((float)BG_Gesture_GetRemainingTime(ps, outSlot, gameTime) * 0.001) <= (float)((float)((float)AnimationSettings->outAnimLength * 0.001) * (float)(1.0 - *(float *)&NotetrackTimeFromParts));
  }
  return BG_Offhand_IsGestureInterruptable(weaponMap, ps, OHGT_THROW, gameTime);
}

/*
==============
BG_Offhand_HasActiveOffhand
==============
*/
bool BG_Offhand_HasActiveOffhand(const playerState_s *ps)
{
  bool result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14429, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (ps->weapCommon.offhandGestureFlags & 1) != 0 )
    return 1;
  result = BG_IsUsingScriptedOffhandWeapon(ps);
  if ( result )
    return 1;
  return result;
}

/*
==============
BG_Offhand_HasNonInterruptibleActiveOffhand
==============
*/
bool BG_Offhand_HasNonInterruptibleActiveOffhand(const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime)
{
  bool result; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14410, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14411, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = BG_Offhand_HasActiveOffhand(ps);
  if ( result )
    return !BG_Offhand_ActiveOffhandIsInterruptable_Internal(weaponMap, ps, serverTime);
  return result;
}

/*
==============
BG_Offhand_IsGestureInterruptable
==============
*/
_BOOL8 BG_Offhand_IsGestureInterruptable(const BgWeaponMap *weaponMap, const playerState_s *ps, OffhandGestureTypes gestureType, const int gameTime)
{
  unsigned int GestureIdx; 
  const Gesture *AssetFromIndex; 
  float v10; 
  const XAnimParts **anims; 
  const XAnimParts *v12; 
  double NotetrackTimeFromParts; 
  double ElapsedTime; 
  float v16; 
  double AnimLengthInSeconds; 
  unsigned int outSlot; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13054, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  GestureIdx = BG_Offhand_GetGestureIdx(weaponMap, ps, gestureType);
  if ( BG_Gesture_IsPlayingByIndex(ps, GestureIdx, &outSlot) )
  {
    AssetFromIndex = BG_Gesture_GetAssetFromIndex(GestureIdx);
    v10 = 0.0;
    anims = (const XAnimParts **)AssetFromIndex->anims;
    if ( *anims )
    {
      v12 = *anims;
    }
    else
    {
      v12 = anims[5];
      if ( !v12 )
      {
LABEL_10:
        ElapsedTime = BG_Gesture_GetElapsedTime(ps, outSlot, gameTime);
        v16 = *(float *)&ElapsedTime;
        AnimLengthInSeconds = BG_Gesture_GetAnimLengthInSeconds(AssetFromIndex);
        return v16 >= (float)(*(float *)&AnimLengthInSeconds * v10);
      }
    }
    NotetrackTimeFromParts = XAnimGetNotetrackTimeFromParts(v12, scr_const.interruptible);
    v10 = *(float *)&NotetrackTimeFromParts;
    if ( *(float *)&NotetrackTimeFromParts < 0.0 )
      return 0i64;
    goto LABEL_10;
  }
  return 0i64;
}

/*
==============
BG_Offhand_IsPlayingGesture
==============
*/
char BG_Offhand_IsPlayingGesture(const BgWeaponMap *weaponMap, const playerState_s *ps, OffhandGestureTypes gestureType)
{
  int v6; 
  const Weapon *OffHandWeaponForPlayer; 
  const WeaponDef *v8; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 
  const Gesture *gestureAnimation; 
  unsigned int IndexFromGesture; 
  __int64 v14; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13092, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = 0;
  while ( 1 )
  {
    if ( gestureType != v6 && gestureType != OHGT_ANY_TYPE )
      goto LABEL_26;
    OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(weaponMap, ps);
    v8 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    v10 = BG_PlayAltGesturesForOffhandWeapons(CurrentWeaponForPlayer);
    if ( !v6 )
    {
      gestureAnimation = v8->gestureAnimation;
      goto LABEL_23;
    }
    if ( v6 == 1 )
      break;
    if ( v6 == 2 )
    {
      if ( v10 )
      {
        gestureAnimation = v8->gestureThrowAlt;
        if ( gestureAnimation )
          goto LABEL_24;
      }
      gestureAnimation = v8->gestureThrow;
    }
    else
    {
      if ( v6 != 3 )
      {
        LODWORD(v14) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12861, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Can't Find Gesutre Index for Unknown Gesture Type %d\n", v14) )
          __debugbreak();
        goto LABEL_26;
      }
      if ( v10 )
      {
        gestureAnimation = v8->gestureDetonateAlt;
        if ( gestureAnimation )
          goto LABEL_24;
      }
      gestureAnimation = v8->gestureDetonate;
    }
LABEL_23:
    if ( gestureAnimation )
      goto LABEL_24;
LABEL_26:
    if ( ++v6 >= 4 )
      return 0;
  }
  if ( !v10 || (gestureAnimation = v8->gesturePullbackAlt) == NULL )
  {
    gestureAnimation = v8->gesturePullback;
    goto LABEL_23;
  }
LABEL_24:
  IndexFromGesture = BG_Gesture_GetIndexFromGesture(gestureAnimation);
  if ( IndexFromGesture == 256 || !BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, NULL) )
    goto LABEL_26;
  return 1;
}

/*
==============
BG_Offhand_IsPlayingGrenadeGesture
==============
*/
bool BG_Offhand_IsPlayingGrenadeGesture(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  bool result; 

  if ( BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_PULLBACK) )
    return 1;
  if ( BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_THROW) )
    return 1;
  result = BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_DETONATE);
  if ( result )
    return 1;
  return result;
}

/*
==============
BG_Offhand_IsPlayingShieldGesture
==============
*/
bool BG_Offhand_IsPlayingShieldGesture(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return 0;
}

/*
==============
BG_Offhand_IsStoppingGesture
==============
*/
char BG_Offhand_IsStoppingGesture(const BgWeaponMap *weaponMap, const playerState_s *ps, OffhandGestureTypes gestureType)
{
  int v6; 
  const Weapon *OffHandWeaponForPlayer; 
  const WeaponDef *v8; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 
  const Gesture *gestureAnimation; 
  unsigned int IndexFromGesture; 
  __int64 v14; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13120, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = 0;
  while ( 1 )
  {
    if ( gestureType != v6 && gestureType != OHGT_ANY_TYPE )
      goto LABEL_26;
    OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(weaponMap, ps);
    v8 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    v10 = BG_PlayAltGesturesForOffhandWeapons(CurrentWeaponForPlayer);
    if ( !v6 )
    {
      gestureAnimation = v8->gestureAnimation;
      goto LABEL_23;
    }
    if ( v6 == 1 )
      break;
    if ( v6 == 2 )
    {
      if ( v10 )
      {
        gestureAnimation = v8->gestureThrowAlt;
        if ( gestureAnimation )
          goto LABEL_24;
      }
      gestureAnimation = v8->gestureThrow;
    }
    else
    {
      if ( v6 != 3 )
      {
        LODWORD(v14) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12861, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Can't Find Gesutre Index for Unknown Gesture Type %d\n", v14) )
          __debugbreak();
        goto LABEL_26;
      }
      if ( v10 )
      {
        gestureAnimation = v8->gestureDetonateAlt;
        if ( gestureAnimation )
          goto LABEL_24;
      }
      gestureAnimation = v8->gestureDetonate;
    }
LABEL_23:
    if ( gestureAnimation )
      goto LABEL_24;
LABEL_26:
    if ( ++v6 >= 4 )
      return 0;
  }
  if ( !v10 || (gestureAnimation = v8->gesturePullbackAlt) == NULL )
  {
    gestureAnimation = v8->gesturePullback;
    goto LABEL_23;
  }
LABEL_24:
  IndexFromGesture = BG_Gesture_GetIndexFromGesture(gestureAnimation);
  if ( IndexFromGesture == 256 || !BG_Gesture_IsStoppingByIndex(ps, IndexFromGesture) )
    goto LABEL_26;
  return 1;
}

/*
==============
BG_Offhand_ScriptWeaponInterruptable
==============
*/
bool BG_Offhand_ScriptWeaponInterruptable(const BgWeaponMap *weaponMap, const playerState_s *ps, int gameTime)
{
  if ( !BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_WEAPON) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12950, ASSERT_TYPE_ASSERT, "(BG_Offhand_IsPlayingGesture( weaponMap, ps, OHGT_WEAPON ))", (const char *)&queryFormat, "BG_Offhand_IsPlayingGesture( weaponMap, ps, OHGT_WEAPON )") )
    __debugbreak();
  return BG_Offhand_IsGestureInterruptable(weaponMap, ps, OHGT_WEAPON, gameTime);
}

/*
==============
BG_Offhand_ShouldStopTauntThirdPerson
==============
*/
char BG_Offhand_ShouldStopTauntThirdPerson(const BgWeaponMap *weaponMap, const playerState_s *ps, const OffhandGestureTypes gestureType, const Weapon *offhandWeapon, const int gameTime)
{
  unsigned int Animset; 
  PlayerASM_AnimSlot v10; 
  unsigned int v11; 
  unsigned int Anim; 
  SuitAnimType SuitAnimIndexFromPlayerState; 
  SuitAnimType v15; 
  int torsoAnim; 
  unsigned int GestureIdx; 
  char v18; 
  const Gesture *AssetFromIndex; 
  GestureAnimationSettings *AnimationSettings; 
  const XAnimParts **anims; 
  int v22; 
  const XAnimParts *v23; 
  float v24; 
  double NotetrackTimeFromParts; 
  double AnimLengthInSeconds; 
  int outStartTime; 
  double ElapsedTime; 
  __int64 v29; 
  unsigned int outSlot; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12964, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12965, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !offhandWeapon->weaponIdx )
    return 0;
  if ( PlayerASM_IsEnabled() )
  {
    Animset = BG_PlayerASM_GetAnimset(ps);
    LOBYTE(v10) = 1;
    v11 = Animset;
    Anim = BG_PlayerASM_GetAnim(ps, v10);
    if ( !Anim || !BG_PlayerASM_IsGestureAlias(Anim, v11) )
      return 0;
  }
  else
  {
    SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(ps);
    v15 = SuitAnimIndexFromPlayerState;
    if ( (unsigned int)SuitAnimIndexFromPlayerState >= NUM_ANIM_SUIT_STATE )
    {
      LODWORD(v29) = SuitAnimIndexFromPlayerState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12984, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v29, 4) )
        __debugbreak();
    }
    torsoAnim = ps->torsoAnim;
    if ( !torsoAnim || !BG_IsGestureAnim(torsoAnim, v15) )
      return 0;
  }
  if ( !BG_Offhand_HasActiveOffhand(ps) || BG_GetWeaponOffhandSlot(ps, weaponMap, offhandWeapon) != OFFHAND_SLOT_TAUNT || !BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_WEAPON) )
    return 0;
  GestureIdx = BG_Offhand_GetGestureIdx(weaponMap, ps, gestureType);
  v18 = 0;
  if ( BG_Gesture_IsPlayingByIndex(ps, GestureIdx, &outSlot) )
  {
    AssetFromIndex = BG_Gesture_GetAssetFromIndex(GestureIdx);
    if ( !AssetFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13005, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
      __debugbreak();
    AnimationSettings = BG_Gesture_GetAnimationSettings(AssetFromIndex);
    if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13008, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
      __debugbreak();
    if ( AnimationSettings->hasTransitions || AssetFromIndex->looping )
    {
      return BG_Gesture_IsStoppingByIndex(ps, GestureIdx);
    }
    else
    {
      anims = (const XAnimParts **)AssetFromIndex->anims;
      v22 = 0x7FFFFFFF;
      v23 = *anims;
      v24 = 0.0;
      if ( !*anims && (v23 = anims[5]) == NULL || (NotetrackTimeFromParts = XAnimGetNotetrackTimeFromParts(v23, scr_const.interruptible), v24 = *(float *)&NotetrackTimeFromParts, *(float *)&NotetrackTimeFromParts >= 0.0) )
      {
        AnimLengthInSeconds = BG_Gesture_GetAnimLengthInSeconds(AssetFromIndex);
        v22 = 0;
        if ( -100 - (int)(float)((float)(*(float *)&AnimLengthInSeconds * v24) * -1000.0) > 0 )
          v22 = -100 - (int)(float)((float)(*(float *)&AnimLengthInSeconds * v24) * -1000.0);
      }
      outStartTime = AnimationSettings->outStartTime;
      ElapsedTime = BG_Gesture_GetElapsedTime(ps, outSlot, gameTime);
      if ( v22 < outStartTime )
        outStartTime = v22;
      if ( *(float *)&ElapsedTime >= (float)((float)outStartTime * 0.001) )
        return 1;
    }
  }
  return v18;
}

/*
==============
BG_Offhand_StopGestureImmediate
==============
*/
void BG_Offhand_StopGestureImmediate(const BgWeaponMap *weaponMap, playerState_s *ps, OffhandGestureTypes gestureType, int gameTime)
{
  unsigned int GestureIdx; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13145, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  GestureIdx = BG_Offhand_GetGestureIdx(weaponMap, ps, gestureType);
  if ( BG_Gesture_IsPlayingByIndex(ps, GestureIdx, NULL) )
    BG_Gesture_StopByIndex(ps, GestureIdx, gameTime, 1, 0, 0);
}

/*
==============
BG_PlayerIsUsingConeTargeting
==============
*/
bool BG_PlayerIsUsingConeTargeting(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const Weapon *CurrentWeaponForPlayer; 
  bool v5; 
  bool result; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19276, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19277, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  result = CurrentWeaponForPlayer->weaponIdx && (v5 = BG_UsingAlternate(ps), BG_GetTargetAssistType(CurrentWeaponForPlayer, v5) == TARGET_ASSISTTYPPE_CONE) && BG_IsTargetAssistActive(ps, NULL, CurrentWeaponForPlayer, v5);
  return result;
}

/*
==============
BG_PlayerOrEntityDualWielding
==============
*/
bool BG_PlayerOrEntityDualWielding(const BgWeaponMap *weaponMap, const playerState_s *ps, const entityState_t *es, const characterInfo_t *ci)
{
  const Weapon *Weapon; 
  bool v10; 
  const Weapon *ViewmodelWeapon; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19253, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( ps )
  {
    ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
    v10 = BG_PlayerDualWieldingWeapon(weaponMap, ps, ViewmodelWeapon) == 0;
    return !v10;
  }
  if ( !es )
  {
    if ( !ci )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19254, ASSERT_TYPE_ASSERT, "(ps || es || ci)", (const char *)&queryFormat, "ps || es || ci") )
        __debugbreak();
      goto LABEL_9;
    }
    goto LABEL_17;
  }
  if ( ci )
  {
LABEL_17:
    v10 = ci->dualWielding == 0;
    return !v10;
  }
LABEL_9:
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, es->weaponHandle);
  return BG_WeaponIsDualWield(Weapon);
}

/*
==============
BG_PlayerWeaponNeedsRechamber
==============
*/
bool BG_PlayerWeaponNeedsRechamber(const playerState_s *ps, const Weapon *r_weapon, PlayerHandIndex hand)
{
  __int64 v3; 
  bool v6; 
  const ClipAmmo *ClipAmmoPtrConst; 
  bool v8; 
  AmmoStore result; 
  AmmoStore r_clipIndex; 

  v3 = hand;
  v6 = BG_UsingAlternate(ps);
  v8 = 0;
  if ( BG_IsBoltAction(r_weapon, v6) )
  {
    r_clipIndex = *BG_AmmoStoreForWeapon(&result, r_weapon, v6);
    ClipAmmoPtrConst = BG_GetClipAmmoPtrConst(ps, &r_clipIndex);
    if ( ClipAmmoPtrConst )
    {
      if ( ClipAmmoPtrConst->chamberedCount[v3] <= 0 )
        return 1;
    }
  }
  return v8;
}

/*
==============
BG_PlayerWeaponNeedsReloadEndRechamber
==============
*/
bool BG_PlayerWeaponNeedsReloadEndRechamber(const playerState_s *ps, const Weapon *r_weapon, PlayerHandIndex hand)
{
  __int64 v3; 
  bool v6; 
  const ClipAmmo *ClipAmmoPtrConst; 
  __int64 v8; 
  unsigned int ammoInClipBeforeReload; 
  unsigned int v10; 
  bool v11; 
  AmmoStore result; 
  AmmoStore r_clipIndex; 

  v3 = hand;
  if ( BG_PlayerWeaponNeedsRechamber(ps, r_weapon, hand) )
    return 1;
  v6 = BG_UsingAlternate(ps);
  r_clipIndex = *BG_AmmoStoreForWeapon(&result, r_weapon, v6);
  ClipAmmoPtrConst = BG_GetClipAmmoPtrConst(ps, &r_clipIndex);
  if ( !ClipAmmoPtrConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19333, ASSERT_TYPE_ASSERT, "( clip ) != ( nullptr )", "%s != %s\n\t%p, %p", "clip", "nullptr", NULL, NULL) )
    __debugbreak();
  v8 = v3;
  ammoInClipBeforeReload = ps->weapState[v3].ammoInClipBeforeReload;
  v10 = ClipAmmoPtrConst->ammoCount[v8];
  v11 = ClipAmmoPtrConst->chamberedCount[v8] < BG_GetMaxChamberedAmmo(r_weapon, v6);
  return ammoInClipBeforeReload < v10 && v11;
}

/*
==============
BG_ReBuildAllWeaponAnimArrays
==============
*/
void BG_ReBuildAllWeaponAnimArrays(void)
{
  LocalClientNum_t i; 
  cg_t *LocalClientGlobals; 

  for ( i = LOCAL_CLIENT_0; i < SLODWORD(cl_maxLocalClients); ++i )
  {
    CG_Weapons_RebuildWeaponsArray(i);
    LocalClientGlobals = CG_GetLocalClientGlobals(i);
    G_Weapons_RebuildWeaponsArray(LocalClientGlobals->clientNum);
  }
}

/*
==============
BG_SetCurrentWeaponForPlayer
==============
*/
void BG_SetCurrentWeaponForPlayer(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon, const BgHandler *const handler)
{
  const Weapon *CurrentWeaponForPlayer; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19569, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19570, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->weapState[0].nextFireTimeCounter = 0;
  ps->weapState[0].rechamberNextFireTime = 0;
  ps->weapState[1].nextFireTimeCounter = 0;
  ps->weapState[1].rechamberNextFireTime = 0;
  BG_HighPriorityWeapon_OnFinishWeaponChange(weaponMap, ps, r_weapon);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 874, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  weaponMap->SetWeapon(weaponMap, &ps->weapCommon.lastWeaponHandle, CurrentWeaponForPlayer);
  ps->weapCommon.meleeComboSeqIdx = 0;
  weaponMap->SetWeapon(weaponMap, &ps->weapCommon.weaponHandle, r_weapon);
  if ( !r_weapon->weaponIdx )
  {
    PM_ResetWeaponHand(weaponMap, ps, WEAPON_HAND_LEFT);
    PM_ResetWeaponHand(weaponMap, ps, WEAPON_HAND_DEFAULT);
  }
  PM_BuildWeaponAnimArrays(weaponMap, ps, handler);
}

/*
==============
BG_SetMeleeChargeCmd
==============
*/
void BG_SetMeleeChargeCmd(const AimOutput *aimOutput, usercmd_s *cmd)
{
  if ( !aimOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18431, ASSERT_TYPE_ASSERT, "(aimOutput)", (const char *)&queryFormat, "aimOutput") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18432, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  cmd->meleeChargeEnt = aimOutput->meleeChargeEnt;
}

/*
==============
BG_ShotLimitReached
==============
*/
__int64 BG_ShotLimitReached(const playerState_s *ps, const Weapon *weapon, PlayerHandIndex hand)
{
  __int64 v3; 
  bool v6; 
  weapFireType_t WeaponFireType; 
  bool v9; 
  const HyperBurstInfo *HyperBurstInfo; 

  v3 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7966, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_UseLeftTriggerAltFireMode(weapon) )
    v6 = ps && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Du);
  else
    v6 = BG_UsingAlternate(ps);
  WeaponFireType = BG_GetWeaponFireType(weapon, v6);
  if ( WeaponFireType != WEAPON_FIRETYPE_SINGLESHOT )
  {
    if ( WeaponFireType == WEAPON_FIRETYPE_BURST )
    {
      v9 = ps->weapState[v3].weaponShotCount < BG_GetWeaponBurstCount(weapon, v6);
      return !v9;
    }
    if ( (unsigned int)(WeaponFireType - 3) > 1 )
      return 0i64;
  }
  HyperBurstInfo = BG_GetHyperBurstInfo(weapon, v6);
  if ( !HyperBurstInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7980, ASSERT_TYPE_ASSERT, "(hyperBurstInfo)", (const char *)&queryFormat, "hyperBurstInfo") )
    __debugbreak();
  if ( HyperBurstInfo->enabled )
  {
    if ( BG_GetAmmoInClipForWeapon(ps, weapon, v6, (PlayerHandIndex)v3) <= 0 )
      return 1i64;
    v9 = ps->weapState[v3].weaponShotCount < 2;
  }
  else
  {
    v9 = ps->weapState[v3].weaponShotCount == 0;
  }
  return !v9;
}

/*
==============
BG_ShouldPlayAdditiveCrawlAnim
==============
*/
bool BG_ShouldPlayAdditiveCrawlAnim(const playerState_s *ps, const PlayerHandIndex hand, const BgHandler *pmoveHandler)
{
  __int64 v3; 
  int weaponState; 
  const BgWeaponMap *v7; 
  double WeaponOrOffhandAdsFrac; 
  double Float_Internal_DebugName; 

  v3 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15869, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_ViewModelAnimExists(ps, WEAP_ANIM_ADDITIVE_CRAWL_IN, (PlayerHandIndex)v3, pmoveHandler) )
    return 0;
  if ( !BG_ViewModelAnimExists(ps, WEAP_ANIM_ADDITIVE_CRAWL_LOOP, (PlayerHandIndex)v3, pmoveHandler) )
    return 0;
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
    return 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
    return 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
    return 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Eu) )
    return 0;
  weaponState = ps->weapState[v3].weaponState;
  if ( weaponState == 16 )
    return 0;
  if ( (unsigned int)(weaponState - 22) <= 2 )
    return 0;
  v7 = pmoveHandler->GetWeaponMap(pmoveHandler);
  WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(v7, ps);
  if ( *(float *)&WeaponOrOffhandAdsFrac > 0.0 )
    return 0;
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_crawlMinSpeed, "bg_crawlMinSpeed");
  return (float)((float)((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(ps->velocity.v[2] * ps->velocity.v[2])) >= (float)(*(float *)&Float_Internal_DebugName * *(float *)&Float_Internal_DebugName);
}

/*
==============
BG_ShouldPlayAdditiveWalkAnim
==============
*/
bool BG_ShouldPlayAdditiveWalkAnim(const BgWeaponMap *weaponMap, const playerState_s *ps, const BgHandler *pmoveHandler)
{
  weapAnimFiles_t v5; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15821, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15822, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) || BG_Skydive_IsSkydiving(ps) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
    return 0;
  v5 = WEAP_ANIM_ADDITIVE_WALK_START;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
  {
    if ( !BG_CanSprintFire(ps) || (unsigned int)(ps->weapState[0].weaponState - 34) <= 2 )
      return 0;
    v5 = WEAP_ANIM_ADDITIVE_GUNGHO_SPRINT;
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Eu) )
    return BG_ViewModelAnimExists(ps, v5, WEAPON_HAND_DEFAULT, pmoveHandler) != 0;
  return 0;
}

/*
==============
BG_ShouldTakeWeaponWhenEmpty
==============
*/

int __fastcall BG_ShouldTakeWeaponWhenEmpty(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  return BG_IsRemoveWeaponOnEmpty(weaponMap, ps, weapon, isAlternate);
}

/*
==============
BG_Turret_ComputeBarrelSpinRate
==============
*/
float BG_Turret_ComputeBarrelSpinRate(const WeaponDef *weaponDef, const LerpEntityStateTurret *turretLerp, const int curTime)
{
  float turretBarrelSpinUpTime; 
  float turretBarrelSpinDownTime; 
  int lastBarrelRotChangeTime; 
  __int128 v9; 
  __int128 v10; 
  __int128 v12; 
  float v13; 
  float v16; 
  float v17; 
  __int128 v18; 

  if ( !turretLerp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19031, ASSERT_TYPE_ASSERT, "(turretLerp)", (const char *)&queryFormat, "turretLerp") )
    __debugbreak();
  if ( !weaponDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19032, ASSERT_TYPE_ASSERT, "(weaponDef)", (const char *)&queryFormat, "weaponDef") )
    __debugbreak();
  if ( !weaponDef->turretBarrelSpinEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19034, ASSERT_TYPE_ASSERT, "(weaponDef->turretBarrelSpinEnabled)", (const char *)&queryFormat, "weaponDef->turretBarrelSpinEnabled") )
    __debugbreak();
  turretBarrelSpinUpTime = weaponDef->turretBarrelSpinUpTime;
  if ( turretBarrelSpinUpTime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19035, ASSERT_TYPE_ASSERT, "( ( weaponDef->turretBarrelSpinUpTime >= 0.0f ) )", "( weaponDef->turretBarrelSpinUpTime ) = %g", turretBarrelSpinUpTime) )
    __debugbreak();
  turretBarrelSpinDownTime = weaponDef->turretBarrelSpinDownTime;
  if ( turretBarrelSpinDownTime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19036, ASSERT_TYPE_ASSERT, "( ( weaponDef->turretBarrelSpinDownTime >= 0.0f ) )", "( weaponDef->turretBarrelSpinDownTime ) = %g", turretBarrelSpinDownTime) )
    __debugbreak();
  lastBarrelRotChangeTime = turretLerp->lastBarrelRotChangeTime;
  v9 = 0i64;
  *(float *)&v9 = (float)turretLerp->lastBarrelRotChangeRate * 0.000015259022;
  v10 = v9;
  if ( curTime <= lastBarrelRotChangeTime )
    return (float)turretLerp->lastBarrelRotChangeRate * 0.000015259022;
  v12 = 0i64;
  *(float *)&v12 = (float)(curTime - lastBarrelRotChangeTime) * 0.001;
  if ( (turretLerp->turretFlags & 1) != 0 )
  {
    v13 = weaponDef->turretBarrelSpinUpTime;
    if ( v13 <= 0.0 )
      return FLOAT_1_0;
    *(float *)&v12 = (float)(*(float *)&v12 / v13) + *(float *)&v10;
    _XMM1 = v12;
    __asm { vminss  xmm7, xmm1, xmm2 }
  }
  else
  {
    v16 = weaponDef->turretBarrelSpinDownTime;
    if ( v16 <= 0.0 )
      return 0.0;
    v17 = *(float *)&v12 / v16;
    v18 = v10;
    *(float *)&v18 = *(float *)&v10 - v17;
    _XMM1 = v18;
    __asm { vmaxss  xmm7, xmm1, xmm6 }
  }
  if ( *(float *)&_XMM7 < 0.0 || *(float *)&_XMM7 > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19062, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( spinRate ) && ( spinRate ) <= ( 1.0f )", "spinRate not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&_XMM7, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  return *(float *)&_XMM7;
}

/*
==============
BG_UpdateWeaponAnimArrays
==============
*/
void BG_UpdateWeaponAnimArrays(BgWeaponMap *const weaponMap, playerState_s *const ps, const BgHandler *const handler)
{
  __int16 v3; 
  const PlayerWeaponAnimArrays *v7; 
  XAnimParts *v8; 
  bool v9; 
  bool v10; 
  const Weapon *Weapon; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 725, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 726, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 727, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  v7 = handler->PlayerWeaponAnimsConst(handler, ps);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 732, ASSERT_TYPE_ASSERT, "(weaponAnimArrays)", (const char *)&queryFormat, "weaponAnimArrays") )
    __debugbreak();
  BG_GetViewmodelWeapon(weaponMap, ps);
  v8 = v7->normalAnimArray[236];
  v9 = v3 && !v8;
  v10 = !v3 && v8;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 954, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 955, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon(weaponMap, ps->weapCommon.weaponAnimArrayHandle);
  if ( v9 || v10 || memcmp_0(Weapon, &v7->weaponUsedForAnims, 0x3Cui64) || v7->meleeComboSeqIdx != ps->weapCommon.meleeComboSeqIdx || v7->carryObjectIndex != ps->carryState.carryObjectIndex || v7->suitIndex != ps->suitIndex )
    PM_BuildWeaponAnimArrays(weaponMap, ps, handler);
}

/*
==============
BG_UseAnimatedWeaponMovement
==============
*/
bool BG_UseAnimatedWeaponMovement(const BgWeaponMap *weaponMap, const playerState_s *ps, const BgHandler *pmoveHandler)
{
  weapAnimFiles_t v6; 
  int weaponState; 
  const BgWeaponMap *v8; 
  double WeaponOrOffhandAdsFrac; 
  double Float_Internal_DebugName; 
  bool result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15923, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15821, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15822, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) && !BG_Skydive_IsSkydiving(ps) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
  {
    v6 = WEAP_ANIM_ADDITIVE_WALK_START;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
    {
      if ( !BG_CanSprintFire(ps) || (unsigned int)(ps->weapState[0].weaponState - 34) <= 2 )
        goto LABEL_22;
      v6 = WEAP_ANIM_ADDITIVE_GUNGHO_SPRINT;
    }
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Eu) && BG_ViewModelAnimExists(ps, v6, WEAPON_HAND_DEFAULT, pmoveHandler) )
      return 1;
  }
LABEL_22:
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15869, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_ViewModelAnimExists(ps, WEAP_ANIM_ADDITIVE_CRAWL_IN, WEAPON_HAND_DEFAULT, pmoveHandler) )
  {
    if ( BG_ViewModelAnimExists(ps, WEAP_ANIM_ADDITIVE_CRAWL_LOOP, WEAPON_HAND_DEFAULT, pmoveHandler) )
    {
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Eu) )
      {
        weaponState = ps->weapState[0].weaponState;
        if ( weaponState != 16 && (unsigned int)(weaponState - 22) > 2 )
        {
          v8 = pmoveHandler->GetWeaponMap(pmoveHandler);
          WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(v8, ps);
          if ( *(float *)&WeaponOrOffhandAdsFrac <= 0.0 )
          {
            Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_crawlMinSpeed, "bg_crawlMinSpeed");
            if ( (float)((float)((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(ps->velocity.v[2] * ps->velocity.v[2])) >= (float)(*(float *)&Float_Internal_DebugName * *(float *)&Float_Internal_DebugName) )
              return 1;
          }
        }
      }
    }
  }
  result = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u);
  if ( result )
    return 1;
  return result;
}

/*
==============
BG_ValidateGestureBasedOffhand
==============
*/
void BG_ValidateGestureBasedOffhand(const Weapon *weapon, const WeaponDef *const weapDef)
{
  Gesture *gesturePullback; 
  char *v5; 
  unsigned int IndexFromName; 
  char *WeaponName; 
  Gesture *gestureThrow; 
  char *v9; 
  unsigned int v10; 
  char *v11; 
  Gesture *gestureDetonate; 
  char *v13; 
  unsigned int v14; 
  char *v15; 
  char output[1024]; 

  if ( weapDef->weapType == WEAPTYPE_GRENADE )
  {
    gesturePullback = weapDef->gesturePullback;
    if ( gesturePullback )
    {
      IndexFromName = BG_Gesture_GetIndexFromName(gesturePullback->name);
      if ( IndexFromName == 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13556, ASSERT_TYPE_ASSERT, "(gesturePullbackIdx != (1<<8))", (const char *)&queryFormat, "gesturePullbackIdx != GESTURE_INVALID_INDEX") )
        __debugbreak();
      if ( !BG_Gesture_GetAssetFromIndex(IndexFromName)->looping )
      {
        WeaponName = BG_GetWeaponName(weapon, output, 0x400u);
        Com_PrintWarning(16, "The Pullback Gesture for offhand grenade weapon %s needs be looping, the loop should correspond to the cook/hold state.\n", WeaponName);
      }
    }
    else
    {
      v5 = BG_GetWeaponName(weapon, output, 0x400u);
      Com_PrintWarning(16, "Offhand gesture grenade weapon %s must have a pullback gesture animation?.\n", v5);
    }
    gestureThrow = weapDef->gestureThrow;
    if ( gestureThrow )
    {
      v10 = BG_Gesture_GetIndexFromName(gestureThrow->name);
      if ( v10 == 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13573, ASSERT_TYPE_ASSERT, "(gestureThrowIdx != (1<<8))", (const char *)&queryFormat, "gestureThrowIdx != GESTURE_INVALID_INDEX") )
        __debugbreak();
      if ( BG_Gesture_GetAssetFromIndex(v10)->looping )
      {
        v11 = BG_GetWeaponName(weapon, output, 0x400u);
        Com_PrintWarning(16, "The Throw Gesture for offhand grenade weapon %s should not be looping, it should be a one shot gesture with just throw anim in it, it gets blended in from the pullback.\n", v11);
      }
    }
    else
    {
      v9 = BG_GetWeaponName(weapon, output, 0x400u);
      Com_PrintWarning(16, "Offhand gesture grenade weapon %s must have a throw gesture animation?.\n", v9);
    }
    if ( BG_WeapHasDetonator(weapon, 0) )
    {
      gestureDetonate = weapDef->gestureDetonate;
      if ( gestureDetonate )
      {
        v14 = BG_Gesture_GetIndexFromName(gestureDetonate->name);
        if ( v14 == 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13592, ASSERT_TYPE_ASSERT, "(gestureDetonateIdx != (1<<8))", (const char *)&queryFormat, "gestureDetonateIdx != GESTURE_INVALID_INDEX") )
          __debugbreak();
        if ( BG_Gesture_GetAssetFromIndex(v14)->looping )
        {
          v15 = BG_GetWeaponName(weapon, output, 0x400u);
          Com_PrintWarning(16, "The Detonate Gesture for offhand grenade weapon %s should not be looping, it should be a one shot gesture with just detonation anim in it.\n", v15);
        }
      }
      else
      {
        v13 = BG_GetWeaponName(weapon, output, 0x400u);
        Com_PrintWarning(16, "Offhand gesture grenade weapon %s must have a detonate gesture animation?.\n", v13);
      }
    }
  }
}

/*
==============
BG_WeaponCanAcceptCamo
==============
*/
char BG_WeaponCanAcceptCamo(const Weapon *__formal)
{
  return 1;
}

/*
==============
BG_WeaponCharge_CalcNumTagsUsed
==============
*/
int BG_WeaponCharge_CalcNumTagsUsed(const Weapon *weapon, const bool isAlternate, const int chargeAmount)
{
  int result; 
  int v5; 
  bool v6; 
  float v7; 

  result = BG_WeaponCharge_GetMeterBoneCount(weapon, isAlternate);
  if ( !result || !chargeAmount )
    return 0;
  if ( result == 1 || chargeAmount == 1 )
    return 1;
  if ( chargeAmount == 4095 )
    return result;
  v5 = result - 1;
  v6 = result == 1;
  if ( result - 1 < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2428, ASSERT_TYPE_ASSERT, "(otherBulbCount >= 0)", (const char *)&queryFormat, "otherBulbCount >= 0") )
      __debugbreak();
    v6 = v5 == 0;
  }
  if ( v6 )
    return 1;
  v7 = 4094.0 / (float)v5;
  if ( v7 <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2437, ASSERT_TYPE_ASSERT, "(chargeAmountForEachBulb > 0.001f)", (const char *)&queryFormat, "chargeAmountForEachBulb > EQUAL_EPSILON") )
    __debugbreak();
  return (int)(float)((float)(chargeAmount - 1) / v7) + 1;
}

/*
==============
BG_WeaponDropIsDisabled
==============
*/
__int64 BG_WeaponDropIsDisabled(const Weapon *r_weapon, const bool isAlternate)
{
  const WeaponDef *v2; 

  v2 = BG_WeaponDef(r_weapon, isAlternate);
  if ( v2 )
    return v2->disableDrop;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16550, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  return MEMORY[0x109F];
}

/*
==============
BG_WeaponIsPrefferedDrop
==============
*/
__int64 BG_WeaponIsPrefferedDrop(const Weapon *r_weapon, const bool isAlternate)
{
  const WeaponDef *v2; 

  v2 = BG_WeaponDef(r_weapon, isAlternate);
  if ( v2 )
    return v2->preferredDrop;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16542, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  return MEMORY[0x10A0];
}

/*
==============
BG_WeaponIsUsingCamo
==============
*/
bool BG_WeaponIsUsingCamo(const Weapon *r_weapon)
{
  return r_weapon->weaponCamo != 0;
}

/*
==============
BG_Weapon_CancelOffhand
==============
*/
void BG_Weapon_CancelOffhand(playerState_s *ps, const BgHandler *handler, BgWeaponMap *weaponMap, const int serverTime, const bool cancelNonGestureOffhand)
{
  char v9; 
  const Weapon *UsedOffHandWeapon; 
  const Weapon *v11; 
  const WeaponDef *v12; 
  const char **p_name; 
  unsigned int IndexFromName; 
  const Weapon *OffHandWeaponForPlayer; 
  const WeaponDef *v16; 
  const Weapon *CurrentWeaponForPlayer; 
  const Gesture *gesturePullbackAlt; 
  unsigned int IndexFromGesture; 
  unsigned int v20; 
  const Weapon *v21; 
  const WeaponDef *v22; 
  const Weapon *v23; 
  const Gesture *gestureThrowAlt; 
  unsigned int v25; 
  unsigned int v26; 
  const Weapon *v27; 
  const WeaponDef *v28; 
  const Weapon *v29; 
  const Gesture *gestureDetonateAlt; 
  unsigned int v31; 
  unsigned int v32; 
  int WeaponHand; 
  PlayerHandIndex v34; 
  unsigned int outSlot; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14218, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14219, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14220, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v9 = 0;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x1Eu) )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x1Eu);
  UsedOffHandWeapon = PM_Weapon_GetUsedOffHandWeapon(weaponMap, ps);
  v11 = UsedOffHandWeapon;
  if ( UsedOffHandWeapon->weaponIdx )
  {
    if ( BG_WeaponDoesNotFullyAnimateViewmodelPlayerState(ps, UsedOffHandWeapon, 0) )
    {
      v12 = BG_WeaponDef(v11, 0);
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14244, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
        __debugbreak();
      p_name = &v12->gestureAnimation->name;
      if ( p_name )
      {
        IndexFromName = BG_Gesture_GetIndexFromName(*p_name);
        if ( BG_Gesture_IsPlayingByIndex(ps, IndexFromName, &outSlot) )
          v9 = BG_Gesture_StopByIndex(ps, IndexFromName, serverTime, 1, 0, 1);
      }
      if ( v12->gesturePullback )
      {
        if ( (OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(weaponMap, ps), v16 = BG_WeaponDef(OffHandWeaponForPlayer, 0), CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps), BG_PlayAltGesturesForOffhandWeapons(CurrentWeaponForPlayer)) && (gesturePullbackAlt = v16->gesturePullbackAlt) != NULL || (gesturePullbackAlt = v16->gesturePullback) != NULL )
        {
          IndexFromGesture = BG_Gesture_GetIndexFromGesture(gesturePullbackAlt);
          v20 = IndexFromGesture;
          if ( IndexFromGesture != 256 && (BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot) || BG_Gesture_IsStoppingByIndex(ps, v20)) )
            v9 |= BG_Gesture_StopByIndex(ps, v20, serverTime, 1, 0, 1);
        }
      }
      if ( v12->gestureThrow )
      {
        if ( (v21 = BG_GetOffHandWeaponForPlayer(weaponMap, ps), v22 = BG_WeaponDef(v21, 0), v23 = BG_GetCurrentWeaponForPlayer(weaponMap, ps), BG_PlayAltGesturesForOffhandWeapons(v23)) && (gestureThrowAlt = v22->gestureThrowAlt) != NULL || (gestureThrowAlt = v22->gestureThrow) != NULL )
        {
          v25 = BG_Gesture_GetIndexFromGesture(gestureThrowAlt);
          v26 = v25;
          if ( v25 != 256 && (BG_Gesture_IsPlayingByIndex(ps, v25, &outSlot) || BG_Gesture_IsStoppingByIndex(ps, v26)) )
            v9 |= BG_Gesture_StopByIndex(ps, v26, serverTime, 1, 0, 1);
        }
      }
      if ( v12->gestureDetonate )
      {
        if ( (v27 = BG_GetOffHandWeaponForPlayer(weaponMap, ps), v28 = BG_WeaponDef(v27, 0), v29 = BG_GetCurrentWeaponForPlayer(weaponMap, ps), BG_PlayAltGesturesForOffhandWeapons(v29)) && (gestureDetonateAlt = v28->gestureDetonateAlt) != NULL || (gestureDetonateAlt = v28->gestureDetonate) != NULL )
        {
          v31 = BG_Gesture_GetIndexFromGesture(gestureDetonateAlt);
          v32 = v31;
          if ( v31 != 256 && (BG_Gesture_IsPlayingByIndex(ps, v31, &outSlot) || BG_Gesture_IsStoppingByIndex(ps, v32)) )
            v9 |= BG_Gesture_StopByIndex(ps, v32, serverTime, 1, 0, 1);
        }
      }
      *(_QWORD *)&ps->weapCommon.offhandGestureFlags = 0i64;
      if ( v9 )
        goto LABEL_50;
    }
    else if ( cancelNonGestureOffhand && (unsigned int)(ps->weapState[0].weaponState - 26) <= 6 )
    {
      WeaponHand = BG_PlayerLastWeaponHand(weaponMap, ps);
      v34 = WEAPON_HAND_DEFAULT;
      if ( WeaponHand >= 0 )
      {
        do
          BG_Weapon_Idle(ps, handler, weaponMap, v34++);
        while ( v34 <= WeaponHand );
LABEL_50:
        ps->grenadeTimeLeft = 0;
        BG_AnimScriptEvent(handler, ps, ANIM_ET_CANCEL_GRENADE, 1, 1, NULL);
        if ( !PlayerASM_IsEnabled() )
          BG_ClearTorsoAnim(handler, ps);
      }
    }
  }
}

/*
==============
BG_Weapon_Idle
==============
*/
void BG_Weapon_Idle(playerState_s *ps, const BgHandler *handler, BgWeaponMap *weaponMap, const PlayerHandIndex hand)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11748, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11749, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11750, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) )
    BG_SetPlayerUsingOffhandUnderbarrelWeapon(ps, 0);
  PM_ResetWeaponHand(weaponMap, ps, hand);
  PM_BuildWeaponAnimArrays(weaponMap, ps, handler);
  if ( PM_Weapon_IsSwimmingForward(weaponMap, ps) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11760, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
      __debugbreak();
    if ( ps->pm_type < 7 )
      PM_SetNextWeaponAnim(ps, WEAP_SWIM_LOOP, hand);
  }
}

/*
==============
BG_Weapon_IsScriptedViewModelAnimPlaying
==============
*/
bool BG_Weapon_IsScriptedViewModelAnimPlaying(playerState_s *ps)
{
  bool result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8794, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Au);
  if ( result || ps->weapState[0].weaponState == 62 )
    return 1;
  return result;
}

/*
==============
BG_Weapon_ViewModelScriptedBegin
==============
*/
char BG_Weapon_ViewModelScriptedBegin(const BgWeaponMap *weaponMap, playerState_s *ps, const int animIndex, const int startTime, const int durationMS, PlayerHandIndex hand)
{
  const Weapon *v10; 
  __int64 v12; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8733, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = BG_HighPriorityWeapon_Get(weaponMap, ps);
  if ( v10->weaponIdx )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8738, ASSERT_TYPE_ASSERT, "(BG_IsNullWeapon( r_highPriorityWeapon ))", "%s\n\tYou cannot play a scripted viewmodel animation when a high priority weapon is set. Player is most likely in the process of switching, or trying to switch, to a high priority weapon.", "BG_IsNullWeapon( r_highPriorityWeapon )") )
      __debugbreak();
    if ( v10->weaponIdx )
      return 0;
  }
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Au);
  ps->viewModelAnimScripted.animIndex = animIndex;
  ps->viewModelAnimScripted.animStartTime = startTime;
  v12 = hand;
  ps->weapState[v12].weaponState = 62;
  ps->weapState[v12].weaponTime = durationMS;
  BG_SetWeaponDelay(weaponMap, ps, hand, 0, NULL);
  if ( ps->pm_type < 7 )
    PM_SetNextWeaponAnim(ps, WEAP_ANIM_SCRIPTED, hand);
  return 1;
}

/*
==============
BG_Weapons_IsPrimaryWeaponSwitch
==============
*/
__int64 BG_Weapons_IsPrimaryWeaponSwitch(playerState_s *ps, const Weapon *weaponFrom, const Weapon *weaponTo, int sameWeaponAltSwitch)
{
  weapInventoryType_t inventoryType; 
  weapInventoryType_t v9; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5378, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  inventoryType = BG_WeaponDef(weaponFrom, 0)->inventoryType;
  v9 = BG_WeaponDef(weaponTo, 0)->inventoryType;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_spValue, 0x29u) )
  {
    if ( weaponFrom->weaponIdx )
      goto LABEL_9;
    if ( weaponTo->weaponIdx && v9 == WEAPINVENTORY_PRIMARY )
      return 1i64;
  }
  if ( !weaponFrom->weaponIdx )
    return 0i64;
LABEL_9:
  if ( !weaponTo->weaponIdx || sameWeaponAltSwitch )
    return 0i64;
  if ( inventoryType == WEAPINVENTORY_PRIMARY && v9 == WEAPINVENTORY_PRIMARY )
    return 1i64;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x15u) )
    return 0i64;
  if ( inventoryType )
  {
    if ( inventoryType != WEAPINVENTORY_ALTMODE || v9 )
      return 0i64;
  }
  else if ( v9 != WEAPINVENTORY_ALTMODE )
  {
    return 0i64;
  }
  return 1i64;
}

/*
==============
BG_Weapons_SelectModel
==============
*/
XModel *BG_Weapons_SelectModel(const PlayerHandIndex hand, XModel *model, XModel *leftModel, XModel *rightModel)
{
  XModel *result; 

  if ( hand == WEAPON_HAND_LEFT )
  {
    if ( leftModel )
      return leftModel;
    return model;
  }
  if ( hand )
    return model;
  result = rightModel;
  if ( !rightModel )
    return model;
  return result;
}

/*
==============
BG_Weapons_UseCensorshipWorldModel
==============
*/
bool BG_Weapons_UseCensorshipWorldModel()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_killswitch_execution_use_censorship_worldmodel_fix_enabled;
  if ( !DVARBOOL_killswitch_execution_use_censorship_worldmodel_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_execution_use_censorship_worldmodel_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled && (unsigned int)(g_currentRegion - 3) <= 1;
}

/*
==============
BG_Weapons_ViewModelOverride
==============
*/
char BG_Weapons_ViewModelOverride(pmove_t *pm, int msec)
{
  int v2; 
  BgWeaponMap *weaponMap; 
  playerState_s *ps; 
  const Weapon *Weapon; 
  PlayerHandIndex v7; 
  __int64 v8; 
  int *i; 
  int v10; 
  int v11; 
  const Weapon *v12; 
  int EquippedWeaponIndex; 
  const char *WeaponName; 
  __int64 forcedViewAnimWeaponState; 
  bool v16; 
  int AmmoInClipForWeapon; 
  bool v18; 
  int ammoInClip; 
  entity_event_t v20; 
  int v21; 
  const char *v22; 
  bool isDualWielding; 
  bool hasFastReloadOverride; 
  int fireTime; 
  int v27; 
  void *Buf1; 
  int fireDelay; 
  __int64 WeaponHand; 
  char output[1024]; 

  v27 = msec;
  v2 = msec;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17288, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  weaponMap = pm->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17291, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17294, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_FIRING) )
    return 0;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x36u) )
    return 0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17306, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_VIEW_ANIM_OVERRIDE ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_VIEW_ANIM_OVERRIDE )") )
    __debugbreak();
  Buf1 = (void *)BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 990, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 991, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon(weaponMap, ps->weapCommon.forcedViewAnimWeaponHandle);
  isDualWielding = BG_PlayerDualWieldingWeapon(weaponMap, ps, Weapon) == 1;
  v7 = WEAPON_HAND_DEFAULT;
  WeaponHand = BG_PlayerLastWeaponHand(weaponMap, ps);
  if ( WeaponHand >= 0 )
  {
    v8 = 0i64;
    for ( i = &ps->weapState[0].weaponTime; ; i += 20 )
    {
      if ( i[4] == ps->weapCommon.forcedViewAnimWeaponState && !memcmp_0(Buf1, Weapon, 0x3Cui64) )
      {
        v10 = *(i - 1);
        if ( v10 )
        {
          v11 = v10 - v2;
          if ( v11 < 0 )
            v11 = 0;
          *(i - 1) = v11;
        }
        *i -= v2;
        if ( *i <= 0 )
        {
          if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1008, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          v12 = BgWeaponMap::GetWeapon(weaponMap, ps->weapCommon.forcedViewAnimOriginalWeaponHandle);
          BG_SetCurrentWeaponForPlayer(weaponMap, ps, v12, pm->m_bgHandler);
          if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1063, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          EquippedWeaponIndex = BG_GetEquippedWeaponIndex(weaponMap, ps, v12);
          if ( EquippedWeaponIndex < 0 || (playerState_s *)((char *)ps + 16 * EquippedWeaponIndex) == (playerState_s *)-1540i64 )
          {
            WeaponName = BG_GetWeaponName(v12, output, 0x400u);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17372, ASSERT_TYPE_ASSERT, "(BG_GetEquippedWeaponState( weaponMap, ps, originalWeapon ))", "%s\n\tForcing viewmodel weapon %s, but we don't have that equipped or an iw4 weapon altmode is being used", "BG_GetEquippedWeaponState( weaponMap, ps, originalWeapon )", WeaponName) )
              __debugbreak();
          }
          BG_WeaponClearViewModelAnimOverride(weaponMap, ps);
          *i = 0;
          if ( ps->pm_type < 7 )
            PM_SetNextWeaponAnim(ps, WEAP_IDLE, v7);
        }
      }
      else
      {
        BG_WeaponDef(Weapon, 0);
        forcedViewAnimWeaponState = (unsigned int)ps->weapCommon.forcedViewAnimWeaponState;
        if ( (_DWORD)forcedViewAnimWeaponState == 16 )
        {
          BG_GetFireTime(weaponMap, ps, Weapon, 0, isDualWielding, i[8], &fireTime, &fireDelay);
          if ( ps->pm_type < 7 )
            PM_SetNextWeaponAnim(ps, WEAP_ATTACK, v7);
          *i = fireTime;
          v20 = EV_FIRE_WEAPON_LEFT;
          if ( v7 == WEAPON_HAND_DEFAULT )
            v20 = EV_FIRE_WEAPON;
        }
        else
        {
          if ( (_DWORD)forcedViewAnimWeaponState != 18 )
          {
            Com_PrintWarning(19, "Trying to force viewmodel to play an animation not supported by code: %u.\n", forcedViewAnimWeaponState);
            BG_WeaponClearViewModelAnimOverride(weaponMap, ps);
            return 0;
          }
          v16 = BG_UsingAlternate(ps);
          AmmoInClipForWeapon = BG_GetAmmoInClipForWeapon(ps, Weapon, v16, v7);
          v18 = ps->pm_type < 7;
          ammoInClip = AmmoInClipForWeapon;
          hasFastReloadOverride = 0;
          if ( v18 )
            PM_SetNextWeaponAnim(ps, WEAP_RELOAD_FIRST, v7);
          *i = BG_ReloadTime(ps, pm->m_bgHandler, v7, Weapon, 0, isDualWielding, ammoInClip, &hasFastReloadOverride);
          v20 = EV_RELOAD;
        }
        PM_AddEvent(pm, v20);
        BG_SetOriginalViewAnimWeaponForPlayer(weaponMap, ps, (const Weapon *)Buf1);
        BG_SetCurrentWeaponForPlayer(weaponMap, ps, Weapon, pm->m_bgHandler);
        if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1063, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        v21 = BG_GetEquippedWeaponIndex(weaponMap, ps, Weapon);
        if ( v21 < 0 || (playerState_s *)((char *)ps + 16 * v21) == (playerState_s *)-1540i64 )
        {
          v22 = BG_GetWeaponName(Weapon, output, 0x400u);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17355, ASSERT_TYPE_ASSERT, "(BG_GetEquippedWeaponState( weaponMap, ps, viewModelWeapon ))", "%s\n\tForcing viewmodel weapon %s, but we don't have that equipped or an iw4 weapon altmode is being used", "BG_GetEquippedWeaponState( weaponMap, ps, viewModelWeapon )", v22) )
            __debugbreak();
        }
        i[4] = ps->weapCommon.forcedViewAnimWeaponState;
      }
      ++v7;
      if ( ++v8 > WeaponHand )
        return 1;
      v2 = v27;
    }
  }
  return 1;
}

/*
==============
BgScopedWeaponOffsetsAdsUpdate
==============
*/
void BgScopedWeaponOffsetsAdsUpdate(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1785, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1785, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BG_WeaponOffsets_AdsUpdate(ps, pm->m_bgHandler);
}

/*
==============
BlastImpactAnimState
==============
*/
void BlastImpactAnimState(const BgWeaponMap *weaponMap, playerState_s *ps, WeaponAnimNumber animState, PlayerHandIndex hand, const BgHandler *handler, bool isAlternate, bool isDualWielding)
{
  __int64 handIndex; 
  const Weapon *CurrentWeaponForPlayer; 
  weapAnimFiles_t v12; 

  handIndex = hand;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16694, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16695, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v12 = BG_MapWeaponAnimStateToAnimIndex(weaponMap, ps, animState, 0, CurrentWeaponForPlayer, isAlternate, (PlayerHandIndex)handIndex, handler);
  if ( BG_ViewModelAnimExists(ps, v12, (PlayerHandIndex)handIndex, handler) )
  {
    ps->weapState[handIndex].weaponState = 45;
    BG_SetWeaponDelay(weaponMap, ps, (const PlayerHandIndex)handIndex, 0, NULL);
    ps->weapState[handIndex].weaponTime = BG_BlastBackTime(ps, CurrentWeaponForPlayer, isAlternate, isDualWielding);
    if ( ps->pm_type < 7 )
      PM_SetNextWeaponAnim(ps, animState, (PlayerHandIndex)handIndex);
  }
  else
  {
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x10u);
  }
}

/*
==============
CompressedMeleeAnimData::Get
==============
*/
void CompressedMeleeAnimData::Get(CompressedMeleeAnimData *this, int *outAnimType, int *outVariant, bool *outIsAlternate)
{
  int v8; 
  __int64 v9; 
  __int64 v10; 

  if ( !outAnimType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10649, ASSERT_TYPE_ASSERT, "( outAnimType ) != ( nullptr )", "%s != %s\n\t%p, %p", "outAnimType", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !outVariant && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10650, ASSERT_TYPE_ASSERT, "( outVariant ) != ( nullptr )", "%s != %s\n\t%p, %p", "outVariant", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !outIsAlternate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10651, ASSERT_TYPE_ASSERT, "( outIsAlternate ) != ( nullptr )", "%s != %s\n\t%p, %p", "outIsAlternate", "nullptr", NULL, NULL) )
    __debugbreak();
  v8 = this->m_packed >> 1;
  *outIsAlternate = this->m_packed & 1;
  *outVariant = v8 & 3;
  *outAnimType = (v8 >> 2) & 7;
  if ( (unsigned int)*outVariant >= 4 )
  {
    LODWORD(v10) = 4;
    LODWORD(v9) = *outVariant;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10665, ASSERT_TYPE_ASSERT, "(unsigned)( *outVariant ) < (unsigned)( (4) )", "*outVariant doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
}

/*
==============
GetSprintOutInterruptTime
==============
*/
int GetSprintOutInterruptTime(const BgWeaponMap *weaponMap, const playerState_s *const ps, const Weapon *r_weapon)
{
  bool v6; 
  int v7; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16018, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = BG_UsingAlternate(ps);
  v7 = BG_PlayerDualWielding(ps);
  return BG_SprintOutInterruptTime(weaponMap, ps, r_weapon, v6, v7 == 1);
}

/*
==============
GetSprintOutTime
==============
*/
int GetSprintOutTime(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_weapon)
{
  bool v6; 
  int v7; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16004, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16005, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = BG_UsingAlternate(ps);
  v7 = BG_PlayerDualWielding(ps);
  return BG_SprintOutTime(weaponMap, ps, r_weapon, v6, v7 == 1);
}

/*
==============
DelayedActionState::IsDelayedAction
==============
*/
__int64 DelayedActionState::IsDelayedAction(DelayedActionState *this, const playerState_s *ps, const PlayerHandIndex hand)
{
  __int64 v3; 
  __int64 v7; 

  v3 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 122, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 123, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>(hand) ) < (unsigned)( NUM_WEAPON_HANDS )", "static_cast<int>(hand) doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v7, 2) )
      __debugbreak();
  }
  if ( this->m_delayedActionOriginalState[v3] == ps->weapState[v3].weaponState )
    return (unsigned int)this->m_delayedAction[v3];
  else
    return 0i64;
}

/*
==============
Leap_State_Out
==============
*/
void Leap_State_Out(const BgWeaponMap *weaponMap, playerState_s *ps)
{
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v5; 
  int v6; 
  bool v7; 
  bool v8; 
  int v9; 
  bool v10; 
  bool v11; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17083, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17084, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  ps->weapState[0].weaponState = 56;
  v5 = CurrentWeaponForPlayer;
  v6 = 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Fu) )
  {
    ps->leapState.state = 3;
    v7 = BG_PlayerDualWielding(ps) == 1;
    v8 = BG_UsingAlternate(ps);
    v9 = BG_LeapCancelTime(ps, v5, v8, v7);
  }
  else
  {
    ps->leapState.state = 0;
    v10 = BG_PlayerDualWielding(ps) == 1;
    v11 = BG_UsingAlternate(ps);
    v9 = BG_LeapOutTime(ps, v5, v11, v10);
  }
  ps->weapState[0].weaponTime = v9;
  BG_SetWeaponDelay(weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
  LOBYTE(v6) = ps->leapState.state == 3;
  PM_StartWeaponAnimBothHands(ps, (WeaponAnimNumber)(v6 + 59));
}

/*
==============
PM_AdjustAimSpreadScale
==============
*/

void __fastcall PM_AdjustAimSpreadScale(pmove_t *pm, double frametime)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  float v12; 
  playerState_s *ps; 
  float fAimSpreadMovementScale; 
  float v16; 
  bool v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  int v29; 
  bool v30; 
  bool v31; 
  float v32; 
  bool v33; 
  bool v34; 
  float v35; 
  bool v36; 
  float v37; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 
  float v42; 
  float v43; 
  double v44; 
  float v45; 
  float v46; 
  bool v48; 
  float v49; 
  float v50; 
  float v51; 
  int v52; 
  float v53; 
  __int128 v54; 
  __int128 v56; 
  float aimSpreadScale; 
  float v60; 
  __int128 v62; 
  __int128 v64; 
  __int128 v65; 
  __int128 v66; 
  int v69; 
  const int *v70; 
  double v71; 
  float v72; 
  const int *v73; 
  double v74; 
  double v75; 
  __int128 v76; 
  const WeaponDef *v77; 
  float v78; 
  float v79; 
  double v80; 
  playerState_s *v81; 
  int aimSpreadStateCurrent; 
  const dvar_t *v83; 
  int serverTime; 
  double v85; 
  bool v86; 
  __int64 v87; 
  char *fmt; 
  float spreadOverrideScale; 
  float outSlideSpreadMin; 
  float outSlideSpreadMax; 
  float outSlideSpreadDecayRate; 
  float hipSpreadInAirMin; 
  float hipSpreadInAirMax; 
  float hipSpreadSprintMin; 
  float hipSpreadSprintMax; 
  float hipSpreadProneMin; 
  float hipSpreadProneMax; 
  float hipSpreadDuckedMin; 
  float hipSpreadDuckedMax; 
  float outSlideSpreadMoveMax; 
  float moveSpreadScale; 
  float staticSpreadScale; 
  float hipSpreadMoveAdd; 
  float outSlideSpreadTurnAdd; 
  float hipSpreadInAirDecay; 
  float hipSpreadInAirMoveMax; 
  float hipSpreadSprintDecay; 
  float hipSpreadSprintMoveMax; 
  float hipSpreadProneDecay; 
  float hipSpreadProneMoveMax; 
  float hipSpreadDuckedDecay; 
  float hipSpreadDuckedMoveMax; 
  int v114; 
  Weapon *r_weapon; 
  __int128 r_weapon_8; 
  __int128 v117; 
  __int128 v118; 
  __int128 v119; 
  __int128 v120; 
  __int128 v121; 
  __int128 v122; 
  __int128 v123; 
  __int128 v124; 
  bool v125; 
  bool v126; 

  v124 = v2;
  v123 = v3;
  v120 = v6;
  v117 = v9;
  r_weapon_8 = v10;
  v12 = *(float *)&frametime;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3705, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3705, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  fAimSpreadMovementScale = ps->weapCommon.fAimSpreadMovementScale;
  if ( fAimSpreadMovementScale < 0.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3706, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( ps->weapCommon.fAimSpreadMovementScale )", "%s <= %s\n\t%g, %g", "0.0f", "ps->weapCommon.fAimSpreadMovementScale", *(double *)&_XMM1, fAimSpreadMovementScale) )
      __debugbreak();
  }
  v16 = ps->weapCommon.fAimSpreadMovementScale;
  if ( v16 > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3707, ASSERT_TYPE_ASSERT, "( ps->weapCommon.fAimSpreadMovementScale ) <= ( 1.0f )", "%s <= %s\n\t%g, %g", "ps->weapCommon.fAimSpreadMovementScale", "1.0f", v16, DOUBLE_1_0) )
    __debugbreak();
  v122 = v4;
  v121 = v5;
  v119 = v7;
  v118 = v8;
  v17 = BG_UsingAlternate(ps);
  v126 = v17;
  r_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
  {
    BG_GetSlideSpreadWithDecay(r_weapon, v17, &outSlideSpreadMin, &outSlideSpreadMoveMax, &outSlideSpreadMax, &outSlideSpreadDecayRate, &outSlideSpreadTurnAdd);
    v18 = outSlideSpreadMin;
    v19 = outSlideSpreadMax;
    v20 = LODWORD(outSlideSpreadDecayRate);
    hipSpreadDuckedMin = outSlideSpreadMin;
    hipSpreadProneMin = outSlideSpreadMin;
    hipSpreadSprintMin = outSlideSpreadMin;
    hipSpreadInAirMin = outSlideSpreadMin;
    hipSpreadDuckedMax = outSlideSpreadMax;
    hipSpreadProneMax = outSlideSpreadMax;
    hipSpreadSprintMax = outSlideSpreadMax;
    hipSpreadInAirMax = outSlideSpreadMax;
    hipSpreadDuckedMoveMax = outSlideSpreadMoveMax;
    hipSpreadProneMoveMax = outSlideSpreadMoveMax;
    hipSpreadInAirMoveMax = outSlideSpreadMoveMax;
    hipSpreadSprintMoveMax = outSlideSpreadMoveMax;
    v21 = outSlideSpreadMin;
    v22 = outSlideSpreadMin;
    v23 = outSlideSpreadMin;
    v24 = outSlideSpreadMin;
    v25 = outSlideSpreadMax;
    v26 = outSlideSpreadMax;
    v27 = outSlideSpreadMax;
    v28 = outSlideSpreadMax;
    hipSpreadDuckedDecay = outSlideSpreadDecayRate;
    hipSpreadProneDecay = outSlideSpreadDecayRate;
    hipSpreadSprintDecay = outSlideSpreadDecayRate;
    hipSpreadInAirDecay = outSlideSpreadDecayRate;
    hipSpreadMoveAdd = 0.0;
  }
  else
  {
    BG_GetHipSpreadWithDecay(r_weapon, v17, &outSlideSpreadMin, &outSlideSpreadMoveMax, &outSlideSpreadMax, &hipSpreadDuckedMin, &hipSpreadDuckedMoveMax, &hipSpreadDuckedMax, &hipSpreadProneMin, &hipSpreadProneMoveMax, &hipSpreadProneMax, &hipSpreadSprintMin, &hipSpreadSprintMoveMax, &hipSpreadSprintMax, &hipSpreadInAirMin, &hipSpreadInAirMoveMax, &hipSpreadInAirMax, &outSlideSpreadDecayRate, &hipSpreadProneDecay, &hipSpreadDuckedDecay, &hipSpreadSprintDecay, &hipSpreadInAirDecay, &outSlideSpreadTurnAdd, &hipSpreadMoveAdd);
    v19 = outSlideSpreadMax;
    v18 = outSlideSpreadMin;
    v21 = hipSpreadDuckedMin;
    v22 = hipSpreadProneMin;
    v23 = hipSpreadSprintMin;
    v20 = LODWORD(outSlideSpreadDecayRate);
    v24 = hipSpreadInAirMin;
    v25 = hipSpreadDuckedMax;
    v26 = hipSpreadProneMax;
    v27 = hipSpreadSprintMax;
    v28 = hipSpreadInAirMax;
  }
  v29 = 4;
  spreadOverrideScale = FLOAT_1_0;
  if ( *(float *)&v20 == 0.0 )
  {
    v46 = FLOAT_1_0;
LABEL_76:
    v78 = ps->weapCommon.aimSpreadScale - (float)(v46 * 255.0);
    goto LABEL_77;
  }
  v30 = v28 < v24;
  v31 = v28 == v24;
  v32 = 0.0;
  v33 = !v30 && !v31;
  v34 = v27 > v23;
  v30 = v26 < v22;
  v31 = v26 == v22;
  v35 = 0.0;
  v36 = !v30 && !v31;
  v30 = v25 < v21;
  v31 = v25 == v21;
  v37 = 0.0;
  v125 = !v30 && !v31;
  v114 = PM_IsInAirForAimSpread(pm);
  if ( v114 )
  {
    v38 = v20;
    *(float *)&v38 = *(float *)&v20 * hipSpreadInAirDecay;
    v20 = v38;
    if ( v33 )
    {
      v37 = hipSpreadInAirMin;
      v35 = hipSpreadInAirMoveMax;
      v32 = hipSpreadInAirMax;
    }
  }
  else if ( BG_CanSprintFire(ps) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
  {
    v39 = v20;
    *(float *)&v39 = *(float *)&v20 * hipSpreadSprintDecay;
    v20 = v39;
    if ( v34 )
    {
      v37 = hipSpreadSprintMin;
      v35 = hipSpreadSprintMoveMax;
      v32 = hipSpreadSprintMax;
    }
  }
  else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 4u) )
  {
    v40 = v20;
    *(float *)&v40 = *(float *)&v20 * hipSpreadProneDecay;
    v20 = v40;
    if ( v36 )
    {
      v37 = hipSpreadProneMin;
      v35 = hipSpreadProneMoveMax;
      v32 = hipSpreadProneMax;
    }
  }
  else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 3u) )
  {
    v41 = v20;
    *(float *)&v41 = *(float *)&v20 * hipSpreadDuckedDecay;
    v20 = v41;
    if ( v125 )
    {
      v37 = hipSpreadDuckedMin;
      v35 = hipSpreadDuckedMoveMax;
      v32 = hipSpreadDuckedMax;
    }
  }
  else if ( v19 > v18 )
  {
    v37 = outSlideSpreadMin;
    v35 = outSlideSpreadMoveMax;
    v32 = outSlideSpreadMax;
  }
  v42 = v32 - v37;
  staticSpreadScale = 0.0;
  moveSpreadScale = FLOAT_255_0;
  if ( (float)(v32 - v37) > 0.0 )
  {
    v43 = 1.0 / v42;
    v44 = I_fclamp((float)((float)(v35 - v37) * ps->weapCommon.fAimSpreadMovementScale) * (float)(1.0 / v42), 0.0, 1.0);
    v45 = _mm_cvtepi32_ps((__m128i)(unsigned int)ps->weapCommon.spreadOverride).m128_f32[0];
    moveSpreadScale = *(float *)&v44 * 255.0;
    spreadOverrideScale = (float)(v45 - v37) * v43;
  }
  BG_GameInterface_ModifyAimSpreadScales(ps, &staticSpreadScale, &moveSpreadScale, &spreadOverrideScale);
  v46 = *(float *)&v20 * v12;
  if ( ps->weapCommon.spreadOverrideState == 1 )
  {
    if ( spreadOverrideScale > 0.0 )
      v46 = (float)(*(float *)&v20 * v12) / spreadOverrideScale;
    goto LABEL_37;
  }
  if ( 1.0 == ps->weapCommon.fWeaponPosFrac )
    goto LABEL_37;
  _XMM6 = LODWORD(staticSpreadScale);
  v48 = GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, GameModeFlagValues::ms_spValue, 8u);
  v49 = ps->velocity.v[0];
  if ( v48 )
  {
    v50 = (float)(v49 * v49) + (float)(ps->velocity.v[1] * ps->velocity.v[1]);
    v51 = ps->velocity.v[2] * ps->velocity.v[2];
  }
  else
  {
    v51 = ps->velocity.v[1] * ps->velocity.v[1];
    v50 = v49 * v49;
  }
  v52 = v114;
  v53 = v50 + v51;
  if ( !v114 && hipSpreadMoveAdd != 0.0 )
  {
    *((_QWORD *)&v54 + 1) = 0i64;
    if ( (float)ps->speed > 0.0 && (pm->cmd.forwardmove != (_BYTE)v114 || pm->cmd.rightmove != (_BYTE)v114 || v48) )
    {
      *(double *)&v54 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_aimSpreadMoveSpeedThreshold, "bg_aimSpreadMoveSpeedThreshold");
      v56 = v54;
      *(float *)&v56 = *(float *)&v54 * *(float *)&v54;
      _XMM1 = v56;
      __asm
      {
        vcmpltss xmm2, xmm1, xmm9
        vblendvps xmm1, xmm6, xmm0, xmm2
      }
      _XMM6 = _XMM1;
    }
  }
  aimSpreadScale = ps->weapCommon.aimSpreadScale;
  if ( aimSpreadScale < *(float *)&_XMM6 )
  {
    if ( aimSpreadScale >= staticSpreadScale )
      v60 = (float)(fsqrt(v53) * (float)(1.0 / (float)ps->speed)) * hipSpreadMoveAdd;
    else
      v60 = STATIC_SCALE;
    if ( (COERCE_UNSIGNED_INT(v60 * 255.0) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3878, ASSERT_TYPE_SANITY, "( !IS_NAN( spreadScaleIncreaseRate ) )", (const char *)&queryFormat, "!IS_NAN( spreadScaleIncreaseRate )") )
      __debugbreak();
    v62 = _XMM6;
    *(float *)&v62 = *(float *)&_XMM6 - ps->weapCommon.aimSpreadScale;
    _XMM1 = v62;
    __asm { vminss  xmm1, xmm1, xmm0 }
    v65 = _XMM1;
    *(float *)&v65 = *(float *)&_XMM1 * 0.0039215689;
    v64 = v65;
LABEL_64:
    v46 = 0.0;
    goto LABEL_65;
  }
  if ( *(float *)&_XMM6 >= aimSpreadScale )
  {
    if ( *(float *)&_XMM6 != aimSpreadScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3891, ASSERT_TYPE_ASSERT, "( baselineSpreadScale ) == ( ps->weapCommon.aimSpreadScale )", "%s == %s\n\t%g, %g", "baselineSpreadScale", "ps->weapCommon.aimSpreadScale", *(float *)&_XMM6, aimSpreadScale) )
      __debugbreak();
    v64 = 0i64;
    goto LABEL_64;
  }
  v66 = v20;
  *(float *)&v66 = (float)(*(float *)&v20 * 255.0) * v12;
  _XMM2 = v66;
  __asm { vminss  xmm2, xmm2, xmm1 }
  v46 = *(float *)&_XMM2 * 0.0039215689;
  v64 = 0i64;
LABEL_65:
  if ( !v52 && outSlideSpreadTurnAdd != 0.0 && v12 > 0.0 )
  {
    v69 = 0;
    do
    {
      v70 = base_vec3_t<int>::operator[](&pm->oldcmd.angles, v69);
      v71 = BG_UsrCmdUnpackAngle(*v70);
      v72 = *(float *)&v71;
      v73 = base_vec3_t<int>::operator[](&pm->cmd.angles, v69);
      v74 = BG_UsrCmdUnpackAngle(*v73);
      v75 = AngleDelta(*(const float *)&v74, v72);
      ++v69;
      v76 = v64;
      *(float *)&v76 = *(float *)&v64 + (float)((float)(*(float *)&v75 * TURN_SCALE) * outSlideSpreadTurnAdd);
      v64 = v76;
    }
    while ( v69 < 2 );
  }
  v77 = BG_WeaponDef(r_weapon, v126);
  if ( v52 && v77->jumpSpread )
    *(float *)&v64 = *(float *)&v64 + (float)(v12 * AIR_SCALE);
  if ( *(float *)&v64 > 0.0 )
  {
    v78 = (float)(*(float *)&v64 * 255.0) + ps->weapCommon.aimSpreadScale;
LABEL_77:
    ps->weapCommon.aimSpreadScale = v78;
    goto LABEL_78;
  }
LABEL_37:
  if ( v46 > 0.0 )
    goto LABEL_76;
LABEL_78:
  if ( ps->weapCommon.spreadOverrideState == 1 )
  {
    v79 = ps->weapCommon.aimSpreadScale;
    if ( (float)(v79 * spreadOverrideScale) < 255.0 )
    {
      ps->weapCommon.spreadOverrideState = 0;
      ps->weapCommon.aimSpreadScale = v79 * spreadOverrideScale;
    }
  }
  if ( (LODWORD(ps->weapCommon.aimSpreadScale) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3938, ASSERT_TYPE_SANITY, "( !IS_NAN( ps->weapCommon.aimSpreadScale ) )", (const char *)&queryFormat, "!IS_NAN( ps->weapCommon.aimSpreadScale )") )
    __debugbreak();
  v80 = I_fclamp(ps->weapCommon.aimSpreadScale, 0.0, 255.0);
  ps->weapCommon.aimSpreadScale = *(float *)&v80;
  v81 = pm->ps;
  if ( !v81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3632, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  aimSpreadStateCurrent = v81->weapCommon.aimSpreadStateCurrent;
  if ( aimSpreadStateCurrent >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3636, ASSERT_TYPE_ASSERT, "(lastState < AIM_SPREAD_STATE_COUNT)", (const char *)&queryFormat, "lastState < AIM_SPREAD_STATE_COUNT") )
    __debugbreak();
  if ( PM_IsInAirForAimSpread(pm) )
  {
    v29 = 6;
  }
  else if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v81->pm_flags, ACTIVE, 0x1Du) )
  {
    if ( BG_CanSprintFire(v81) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v81->pm_flags, ACTIVE, 0x14u) )
    {
      v29 = 5;
    }
    else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v81->eFlags, ACTIVE, 4u) )
    {
      v29 = 3;
    }
    else
    {
      v29 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v81->eFlags, ACTIVE, 3u) + 1;
    }
  }
  if ( v29 != aimSpreadStateCurrent )
  {
    v81->weapCommon.aimSpreadStateLast = aimSpreadStateCurrent;
    v81->weapCommon.aimSpreadStateCurrent = v29;
    v81->weapCommon.aimSpreadStateChangeTime = pm->cmd.serverTime;
  }
  v83 = DCONST_DVARBOOL_bg_aimSpreadDebugLog;
  if ( !DCONST_DVARBOOL_bg_aimSpreadDebugLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_aimSpreadDebugLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v83);
  if ( v83->current.enabled )
  {
    serverTime = pm->cmd.serverTime;
    v85 = ps->weapCommon.aimSpreadScale;
    v86 = pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler);
    LODWORD(fmt) = serverTime;
    v87 = 83i64;
    if ( v86 )
      v87 = 67i64;
    Com_Printf(17, "%c: PM_AdjustAimSpreadScale: Aim spread scale: %.5f Time: %d\n", v87, v85, fmt);
  }
}

/*
==============
PM_BeginWeaponChange
==============
*/
void PM_BeginWeaponChange(pmove_t *pm, pml_t *pml, const Weapon *newweapon, bool isNewAlternate, bool quick)
{
  playerState_s *ps; 
  __int64 weaponIdx; 
  const dvar_t *v10; 
  bool v11; 
  const char *szInternalName; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v14; 
  int v15; 
  bool v16; 
  bool v17; 
  WeaponSlot EquippedSlot; 
  bool v19; 
  int weaponState; 
  const dvar_t *v21; 
  bool v22; 
  const char *v23; 
  BgWeaponMap *weaponMap; 
  bool v25; 
  const dvar_t *v26; 
  bool v27; 
  const char *v28; 
  bool v29; 
  bool v30; 
  int v31; 
  const Weapon *ViewmodelWeapon; 
  BOOL v33; 
  bool v34; 
  int v35; 
  unsigned int v36; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  bool v39; 
  const Weapon *v40; 
  int PlayerAnimType; 
  bool IsDualWield; 
  const BgHandler *m_bgHandler; 
  bool IsSkydiving; 
  int WeaponHand; 
  int v46; 
  QueuedActionState *p_queuedActionState; 
  __int64 v48; 
  bool v49; 
  bool v50; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  int v52; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 
  bool usedBefore; 
  const dvar_t *v55; 
  bool v56; 
  const char *v57; 
  bool v58; 
  const WeaponDef *v59; 
  int EquippedWeaponIndex; 
  __int64 v61; 
  bool v62; 
  const dvar_t *v63; 
  bool v64; 
  weapInventoryType_t inventoryType; 
  const WeaponDef *v66; 
  const BgHandler *v67; 
  bool v68; 
  PlayerHandIndex v69; 
  char v70; 
  bool v71; 
  LadderDrop v72; 
  bool v73; 
  int v74; 
  int v75; 
  int pm_type; 
  WeaponAnimNumber v77; 
  bool v78; 
  PlayerHandIndex v79; 
  int *p_weaponTime; 
  bool v81; 
  bool v82; 
  bool v83; 
  const dvar_t *v84; 
  const char *v85; 
  int v86; 
  bool v87; 
  int v88; 
  const dvar_t *v89; 
  const dvar_t *v90; 
  bool IsScriptedSceneAnimFlagEnabled; 
  pml_t *v92; 
  bool v93; 
  float v94; 
  int v95; 
  unsigned int *holdrand; 
  unsigned int *holdranda; 
  int *outWeaponAnim; 
  unsigned int outWeaponAnima; 
  bool v100; 
  char v101; 
  bool v102; 
  bool v103; 
  bool IsWeaponMeleeOverride; 
  char v105; 
  char v106; 
  bool v107; 
  LadderDrop dropType; 
  WeaponAnimNumber anim; 
  Weapon weaponFrom; 

  if ( newweapon->weaponIdx >= BG_GetNumWeapons() )
  {
    outWeaponAnima = BG_GetNumWeapons();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5448, ASSERT_TYPE_ASSERT, "(unsigned)( newweapon.weaponIdx ) < (unsigned)( BG_GetNumWeapons() )", "newweapon.weaponIdx doesn't index BG_GetNumWeapons()\n\t%i not in [0, %i)", newweapon->weaponIdx, outWeaponAnima) )
      __debugbreak();
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5450, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5450, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_GetWeaponType(newweapon, isNewAlternate) == WEAPTYPE_MODEL_ONLY )
  {
    weaponIdx = newweapon->weaponIdx;
    if ( (unsigned int)weaponIdx > bg_lastParsedWeaponIndex )
    {
      LODWORD(outWeaponAnim) = bg_lastParsedWeaponIndex;
      LODWORD(holdrand) = newweapon->weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", holdrand, outWeaponAnim) )
        __debugbreak();
    }
    if ( !bg_weaponCompleteDefs[weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5456, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Player attempted to switch to a 'model only' weapon (%s).", bg_weaponCompleteDefs[weaponIdx]->szInternalName) )
      __debugbreak();
  }
  if ( newweapon->weaponIdx && !BG_PlayerHasWeapon(pm->weaponMap, ps, newweapon) )
  {
    v10 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
    {
      v11 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      szInternalName = BG_WeaponCompleteDef(newweapon, 0)->szInternalName;
      if ( v11 )
        Com_Printf(17, "HighPriorityDebug - PM_BeginWeaponChange SERVER with %s failed, !BG_PlayerHasWeapon\n", szInternalName);
      else
        Com_Printf(17, "HighPriorityDebug - PM_BeginWeaponChange CLIENT with %s failed, !BG_PlayerHasWeapon\n", szInternalName);
    }
    return;
  }
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v14 = (unsigned int)(ps->weapState[0].weaponState - 9) <= 1;
  v15 = memcmp_0(CurrentWeaponForPlayer, newweapon, 0x3Cui64);
  v16 = v15 == 0;
  v17 = v14 && v15;
  EquippedSlot = BG_PlayerWeaponGetEquippedSlot(pm->weaponMap, ps, CurrentWeaponForPlayer);
  v19 = BG_Ladder_ShouldEarlyOutDroppingCurrentNonPrimaryWeapon(ps, EquippedSlot, CurrentWeaponForPlayer, newweapon) && !v16;
  weaponState = ps->weapState[0].weaponState;
  if ( ((unsigned int)(weaponState - 7) <= 5 || weaponState == 50) && !v17 && !v19 )
  {
    v21 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.enabled )
    {
      v22 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      v23 = BG_WeaponCompleteDef(newweapon, 0)->szInternalName;
      if ( v22 )
        Com_Printf(17, "HighPriorityDebug - PM_BeginWeaponChange SERVER with %s failed, WEAPONSTATE_DROPPING\n", v23);
      else
        Com_Printf(17, "HighPriorityDebug - PM_BeginWeaponChange CLIENT with %s failed, WEAPONSTATE_DROPPING\n", v23);
    }
    return;
  }
  weaponMap = pm->weaponMap;
  v25 = BG_UsingAlternate(ps);
  if ( BG_WeaponDef(newweapon, v25)->disableSwitchToWhenEmpty && !BG_WeaponAmmo(weaponMap, ps, newweapon, v25) )
  {
    v26 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    if ( v26->current.enabled )
    {
      v27 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      v28 = BG_WeaponCompleteDef(newweapon, 0)->szInternalName;
      if ( v27 )
        Com_Printf(17, "HighPriorityDebug - PM_BeginWeaponChange SERVER with %s failed, BG_WeaponDisableSwitchToEmpty\n", v28);
      else
        Com_Printf(17, "HighPriorityDebug - PM_BeginWeaponChange CLIENT with %s failed, BG_WeaponDisableSwitchToEmpty\n", v28);
    }
    return;
  }
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x28u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x27u);
  IsWeaponMeleeOverride = BG_IsWeaponMeleeOverride(pm->weaponMap, ps, newweapon);
  PM_HighPriorityWeapon_OnBeginWeaponChange(pm, newweapon);
  v29 = isNewAlternate && BG_HasUnderbarrelAmmo(newweapon);
  v100 = v29;
  if ( newweapon->weaponIdx )
  {
    v30 = quick;
    if ( BG_GetWeaponClass(newweapon, v29) == WEAPCLASS_PISTOL )
      v30 = 1;
    v102 = v30;
  }
  else
  {
    v102 = quick;
  }
  v107 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_spValue, 0x29u);
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_spValue, 0x21u) )
  {
    v102 = 0;
  }
  else if ( v107 || IsWeaponMeleeOverride )
  {
    v102 = 1;
  }
  v31 = 1;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
    Slide_PlayOrStopGesture(ps, pm->weaponMap, pm->m_bgHandler, pm->cmd.serverTime, SLIDEGESTUREREQUEST_STOP);
  if ( BG_PWF_UseAlternateAsOffhand(ps) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
    ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
    v33 = BG_HasUnderbarrelWeapon(ViewmodelWeapon) && !BG_HasUnderbarrelWeapon(newweapon);
    v34 = v100;
    if ( !v100 )
    {
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u) )
        goto LABEL_87;
      v34 = 0;
    }
    v31 = 0;
    if ( v34 && !memcmp_0(CurrentWeaponForPlayer, newweapon, 0x3Cui64) && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u) )
    {
      v35 = 1;
LABEL_88:
      if ( v33 || v31 )
      {
        PM_Weapon_SetOffhandUnderbarrelMode(pm->weaponMap, ps, 0);
      }
      else if ( v35 )
      {
        BG_SetPlayerUsingOffhandUnderbarrelWeapon(ps, 0);
      }
      goto LABEL_93;
    }
LABEL_87:
    v35 = 0;
    goto LABEL_88;
  }
LABEL_93:
  v36 = ps->weapState[0].weaponState;
  if ( v36 - 18 <= 3 )
    BG_AddPredictableEventToPlayerstate(EV_STOP_WEAPON_SOUND, v36, pm->cmd.serverTime, pm->weaponMap, ps);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    CharacterInfo = BG_GetCharacterInfo(ActiveStatics, ps->clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5597, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    v39 = v100 && (!v16 || !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u));
    v40 = newweapon;
    PlayerAnimType = BG_WeaponGetPlayerAnimType(newweapon, v39);
    BG_SetConditionBit(CharacterInfo, 13, PlayerAnimType);
    IsDualWield = BG_WeaponIsDualWield(newweapon);
    BG_SetConditionValue(CharacterInfo, 14, IsDualWield);
    if ( v100 )
    {
      m_bgHandler = pm->m_bgHandler;
      holdranda = &pml->holdrand;
      if ( v39 )
        BG_AnimScriptEvent(m_bgHandler, ps, ANIM_ET_ENTERALTMODE, 0, 0, holdranda);
      else
        BG_AnimScriptEvent(m_bgHandler, ps, ANIM_ET_EXITALTMODE, 0, 0, holdranda);
    }
  }
  else
  {
    v40 = newweapon;
  }
  IsSkydiving = BG_Skydive_IsSkydiving(ps);
  if ( !IsSkydiving )
  {
    BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
    BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_LEFT, 0, NULL);
  }
  PM_Weapon_Charge_ClearState(pm, WEAPON_HAND_DEFAULT);
  PM_Weapon_Charge_ClearState(pm, WEAPON_HAND_LEFT);
  WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
  v46 = WeaponHand;
  if ( WeaponHand >= 0 )
  {
    p_queuedActionState = &ps->weapState[0].queuedActionState;
    v48 = WeaponHand + 1i64;
    do
    {
      *p_queuedActionState = QAS_STATE_NONE;
      p_queuedActionState += 20;
      --v48;
    }
    while ( v48 );
  }
  weaponFrom = *CurrentWeaponForPlayer;
  v50 = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT_ADS|0x80) )
  {
    v49 = BG_UsingAlternate(ps);
    if ( BG_IsFauxFists(ps, &weaponFrom, v49) )
      v50 = 1;
  }
  if ( weaponFrom.weaponIdx && !IsSkydiving && BG_PlayerHasWeapon(pm->weaponMap, ps, &weaponFrom) && (ps->grenadeTimeLeft <= 0 || BG_IsUsingOffhandGestureWeapon(ps)) )
  {
    p_weapFlags = &ps->weapCommon.weapFlags;
    if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x18u) && !v50 && !v19 )
    {
      v52 = 0;
      goto LABEL_129;
    }
  }
  else
  {
    p_weapFlags = &ps->weapCommon.weapFlags;
  }
  v52 = 1;
LABEL_129:
  EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(pm->weaponMap, ps, &weaponFrom);
  if ( EquippedWeaponStateNonConst )
  {
    usedBefore = EquippedWeaponStateNonConst->usedBefore;
    EquippedWeaponStateNonConst->usedBefore = 1;
  }
  else
  {
    usedBefore = 0;
  }
  if ( v100 && !usedBefore )
  {
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x11u);
    v55 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v55);
    if ( v55->current.enabled )
    {
      v56 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      v57 = BG_WeaponCompleteDef(v40, 0)->szInternalName;
      if ( v56 )
        Com_Printf(17, "HighPriorityDebug - PM_BeginWeaponChange SERVER with %s returned early, isNewAlternate\n", v57);
      else
        Com_Printf(17, "HighPriorityDebug - PM_BeginWeaponChange CLIENT with %s returned early, isNewAlternate\n", v57);
    }
    return;
  }
  if ( v52 )
  {
    G_DebugPlayerAnimScript_Print(ps->clientNum, "end weapon (begin weapon change)\n");
    if ( !BG_Offhand_HasActiveOffhand(ps) )
      ps->grenadeTimeLeft = 0;
    PM_SetProneMovementOverride(ps);
    PM_Weapon_FinishWeaponChange(pm, pml, ps->weapState[0].weaponState, 0, v102);
    return;
  }
  v58 = BG_WeaponIsDualWield(v40);
  v59 = BG_WeaponDef(CurrentWeaponForPlayer, v100);
  if ( !v58 || (v101 = 1, v59->dualWieldType != DUAL_WIELD_TYPE_ALT_MODE) )
    v101 = 0;
  dropType = BG_Ladder_GetDropType(pm, v40, CurrentWeaponForPlayer);
  if ( !BG_Offhand_HasActiveOffhand(ps) )
    ps->grenadeTimeLeft = 0;
  EquippedWeaponIndex = BG_GetEquippedWeaponIndex(pm->weaponMap, ps, v40);
  v61 = EquippedWeaponIndex;
  if ( (unsigned int)EquippedWeaponIndex >= 0xF )
  {
    LODWORD(outWeaponAnim) = 15;
    LODWORD(holdrand) = EquippedWeaponIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5710, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", holdrand, outWeaponAnim) )
      __debugbreak();
  }
  BG_AddPredictableEventToPlayerstate(EV_WEAPON_SWITCH_STARTED, ps->weaponsEquipped[v61].m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, ps);
  if ( dropType )
    BG_AddPredictableEventToPlayerstate(EV_WEAPON_SWITCH_CANCELED, ps->weaponsEquipped[v61].m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, ps);
  v62 = BG_PlayerDualWielding(ps) == 1;
  v103 = v62;
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x15u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x16u);
  if ( (unsigned int)BG_Weapons_IsPrimaryWeaponSwitch(ps, &weaponFrom, v40, v100) )
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x15u);
  if ( IsWeaponMeleeOverride )
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x16u);
  v63 = DVARBOOL_perk_quickswap_primary_item_swap_enabled;
  v64 = 0;
  if ( !DVARBOOL_perk_quickswap_primary_item_swap_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_quickswap_primary_item_swap_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v63);
  if ( v63->current.enabled )
    v64 = weaponFrom.weaponIdx && v40->weaponIdx && ((inventoryType = BG_WeaponDef(&weaponFrom, 0)->inventoryType, v66 = BG_WeaponDef(v40, 0), inventoryType == WEAPINVENTORY_PRIMARY) || inventoryType == WEAPINVENTORY_ALTMODE) && v66->inventoryType == WEAPINVENTORY_ITEM;
  v106 = 0;
  if ( BG_HasPerk(&ps->perks, 0x2Bu) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x15u) || v64) )
  {
    v67 = pm->m_bgHandler;
    v68 = BG_UsingAlternate(ps);
    if ( BG_UseQuickSwitchAnims(ps, CurrentWeaponForPlayer, v68, v62, v67, 0) )
      v102 = 1;
    else
      v106 = 1;
  }
  LOBYTE(v69) = 0;
  v105 = 0;
  if ( !v100 )
  {
    if ( ps->weapState[0].weaponState == 16 )
      PM_AddEvent(pm, EV_FIRE_WEAPON_END);
    PM_AddEvent(pm, EV_PUTAWAY_WEAPON);
    v69 = WEAPON_HAND_DEFAULT;
    if ( v46 < 0 )
    {
      v70 = v101;
      goto LABEL_206;
    }
    v72 = dropType;
    v73 = v102;
    while ( 1 )
    {
      if ( dropType )
      {
LABEL_204:
        v70 = v101;
        LOBYTE(v69) = 0;
        goto LABEL_207;
      }
      v75 = PM_WeaponClipEmpty(pm->weaponMap, ps, v69);
      pm_type = ps->pm_type;
      if ( v75 )
      {
        if ( pm_type < 7 )
        {
          v77 = WEAP_EMPTY_DROP;
LABEL_202:
          PM_SetNextWeaponAnim(ps, v77, v69);
        }
      }
      else if ( v102 )
      {
        if ( pm_type < 7 )
        {
          v77 = WEAP_QUICK_DROP;
          goto LABEL_202;
        }
      }
      else if ( pm_type < 7 )
      {
        v77 = WEAP_MELEE_LAST;
        goto LABEL_202;
      }
      if ( ++v69 > v46 )
        goto LABEL_204;
    }
  }
  PM_AddEvent(pm, EV_WEAPON_ALT);
  v70 = v101;
  if ( v101 )
  {
    PM_StartWeaponAnimBothHands(ps, WEAP_ALTSWITCHFROM_AKIMBO);
    if ( BG_Offhand_HasActiveOffhand(ps) && BG_Offhand_IsPlayingGesture(pm->weaponMap, ps, OHGT_WEAPON) )
      BG_OffhandGestureScriptWeaponEnd(pm->weaponMap, ps, pm->cmd.serverTime, 0);
  }
  else
  {
    if ( BG_InADS(ps) && !memcmp_0(CurrentWeaponForPlayer, v40, 0x3Cui64) )
    {
      v71 = BG_UsingAlternate(ps);
      if ( BG_IsAimDownSight(CurrentWeaponForPlayer, !v71) && BG_HasADSAltSwitchAnims(ps, pm->m_bgHandler) )
      {
        LOBYTE(v69) = 1;
        v105 = 1;
        PM_StartWeaponAnimBothHands(ps, WEAP_ALTSWITCHFROM_ADS);
        v72 = dropType;
        v73 = v102;
        goto LABEL_186;
      }
    }
    PM_StartWeaponAnimBothHands(ps, WEAP_RELOAD_LAST);
  }
LABEL_206:
  v72 = dropType;
  v73 = v102;
LABEL_207:
  if ( v70 )
  {
    v74 = 11;
    ps->weapState[0].weaponState = 11;
    goto LABEL_212;
  }
LABEL_186:
  if ( v100 )
  {
    v74 = (unsigned __int8)v69 + 9;
    ps->weapState[0].weaponState = v74;
  }
  else if ( v73 )
  {
    v74 = 8;
    ps->weapState[0].weaponState = 8;
  }
  else
  {
    ps->weapState[0].weaponState = 7;
    v74 = 7;
  }
LABEL_212:
  v78 = v103;
  if ( v103 )
    ps->weapState[1].weaponState = v74;
  PM_SetProneMovementOverride(ps);
  v79 = WEAPON_HAND_DEFAULT;
  if ( BG_PlayerLastWeaponHand(pm->weaponMap, ps) >= WEAPON_HAND_DEFAULT )
  {
    p_weaponTime = &ps->weapState[0].weaponTime;
    while ( 1 )
    {
      if ( dropType )
      {
        if ( BG_Ladder_DropSkipsAnim(dropType) )
        {
          p_weaponTime[4] = 7;
          *p_weaponTime = 0;
        }
        else
        {
          BG_Ladder_GetDropStateTimeAnim(pm, dropType, &weaponFrom, v79, &ps->weapState[v79].weaponState, &ps->weapState[v79].weaponTime, (int *)&anim);
          if ( ps->pm_type < 7 )
            PM_SetNextWeaponAnim(ps, anim, v79);
        }
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x32u);
        if ( ps->weapCommon.fWeaponPosFrac > 0.0 )
          PM_ExitAimDownSight(pm);
        goto LABEL_248;
      }
      if ( v101 )
      {
        v81 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Bu));
        *p_weaponTime = BG_AltDropAkimboTime(ps, &weaponFrom, v81, v78);
        goto LABEL_248;
      }
      if ( v100 )
      {
        v82 = BG_UsingAlternate(ps);
        if ( v105 )
          *p_weaponTime = BG_AltDropADSTime(ps, &weaponFrom, v82, v78);
        else
          *p_weaponTime = BG_AltDropTime(ps, &weaponFrom, v82, v78);
        goto LABEL_248;
      }
      if ( !v102 )
      {
        v86 = PM_WeaponClipEmpty(pm->weaponMap, ps, v79);
        v87 = BG_UsingAlternate(ps);
        if ( v86 )
          v88 = BG_EmptyDropTime(ps, &weaponFrom, v87, v103);
        else
          v88 = BG_DropTime(ps, &weaponFrom, v87, v103);
        *p_weaponTime = v88;
        goto LABEL_248;
      }
      v83 = BG_UsingAlternate(ps);
      *p_weaponTime = BG_QuickDropTime(ps, &weaponFrom, v83, v78);
      if ( IsWeaponMeleeOverride )
        break;
      if ( v107 )
      {
        v84 = DVARFLT_bg_quickWeaponSwitchSpeedScaleSP;
        if ( !DVARFLT_bg_quickWeaponSwitchSpeedScaleSP )
        {
          v85 = "bg_quickWeaponSwitchSpeedScaleSP";
          goto LABEL_241;
        }
LABEL_243:
        Dvar_CheckFrontendServerThread(v84);
        *p_weaponTime = (int)(float)((float)*p_weaponTime * v84->current.value);
      }
LABEL_248:
      if ( v106 )
      {
        v89 = DCONST_DVARFLT_perk_weapSwapMultiplier;
        if ( !DCONST_DVARFLT_perk_weapSwapMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_weapSwapMultiplier") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v89);
        *p_weaponTime = (int)(float)((float)*p_weaponTime * v89->current.value);
        if ( v107 )
        {
          v90 = DVARFLT_bg_quickWeaponSwitchSpeedScaleSP;
          if ( !DVARFLT_bg_quickWeaponSwitchSpeedScaleSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_quickWeaponSwitchSpeedScaleSP") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v90);
          *p_weaponTime = (int)(float)((float)*p_weaponTime * v90->current.value);
        }
      }
      ++v79;
      p_weaponTime += 20;
      v78 = v103;
      if ( v79 > BG_PlayerLastWeaponHand(pm->weaponMap, ps) )
      {
        v40 = newweapon;
        v72 = dropType;
        goto LABEL_259;
      }
    }
    v84 = DCONST_DVARFLT_player_meleeOverrideQuickDropScale;
    if ( !DCONST_DVARFLT_player_meleeOverrideQuickDropScale )
    {
      v85 = "player_meleeOverrideQuickDropScale";
LABEL_241:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v85) )
        __debugbreak();
    }
    goto LABEL_243;
  }
LABEL_259:
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) || (IsScriptedSceneAnimFlagEnabled = BG_IsScriptedSceneAnimFlagEnabled(ps), !BG_IsThrowingAxe(v40)) && v100 && !v101 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) || IsScriptedSceneAnimFlagEnabled || !BG_Ladder_DropLowersWeapon(v72) || IsWeaponMeleeOverride )
  {
    v92 = pml;
  }
  else
  {
    v92 = pml;
    if ( !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, ACTIVE, 2u) )
    {
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_DROPWEAPON, 0, 1, &pml->holdrand);
      v93 = v102;
      if ( v102 )
        BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_DROPWEAPONQUICK, 0, 1, &pml->holdrand);
      v94 = (float)ps->weapState[0].weaponTime * 0.001;
      if ( v94 > 0.2 )
      {
        if ( v94 > 0.40000001 )
        {
          if ( v94 > 0.60000002 )
          {
            if ( v94 > 0.80000001 )
            {
              if ( v94 > 1.0 )
                v95 = (v94 > 1.2) + 83;
              else
                v95 = 82;
            }
            else
            {
              v95 = 81;
            }
          }
          else
          {
            v95 = 80;
          }
        }
        else
        {
          v95 = 79;
        }
      }
      else
      {
        v95 = 78;
      }
      BG_AnimScriptEvent(pm->m_bgHandler, ps, (PlayerAnimScriptEventType)v95, 0, 0, &pml->holdrand);
      goto LABEL_284;
    }
  }
  v93 = v102;
LABEL_284:
  if ( !ps->weapState[0].weaponTime )
    PM_Weapon_FinishWeaponChange(pm, v92, ps->weapState[0].weaponState, 0, v93);
}

/*
==============
PM_BeginWeaponReload
==============
*/
void PM_BeginWeaponReload(playerState_s *ps, pmove_t *pm, pml_t *pml, PlayerHandIndex hand)
{
  __int64 v4; 
  unsigned int *holdrand; 
  bool v9; 
  bool v10; 
  int v11; 
  BgWeaponMap *weaponMap; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v14; 
  bool CanSprintReload; 
  char v16; 
  __int64 v17; 
  unsigned __int64 weaponState; 
  __int64 v19; 
  BOOL v20; 
  unsigned __int64 v21; 
  __int64 v22; 
  bool v23; 
  int ammoInClip; 
  const BgHandler *m_bgHandler; 
  int started; 
  bool v27; 
  int *p_weapHandFlags; 
  ReloadType ReloadType; 
  ReloadType v30; 
  WeaponAnimNumber v31; 
  const WeaponDef *v32; 
  const ClipAmmo *ClipAmmoPtrConst; 
  bool v34; 
  int IsClipOnly; 
  unsigned int *v36; 
  unsigned __int64 v37; 
  bool IsBulletClipEmpty; 
  bool v39; 
  WeaponAnimNumber v40; 
  const BgHandler *v41; 
  int v42; 
  unsigned __int64 v43; 
  int v44; 
  int v45; 
  bool hasFastReloadOverride; 
  bool v47; 
  int outAmmoInClip; 
  unsigned int *p_holdrand; 
  unsigned __int64 v50; 
  AmmoStore result; 
  AmmoStore r_clipIndex; 

  v4 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5203, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5204, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5205, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  holdrand = &pml->holdrand;
  p_holdrand = &pml->holdrand;
  v9 = PM_Weapon_CheckForPendingAltModeChange(pm, pml);
  v10 = BG_UsingAlternate(ps);
  v11 = BG_PlayerDualWielding(ps);
  weaponMap = pm->weaponMap;
  v47 = v11 == 1;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v50 = 80 * v4;
  v14 = (unsigned int)(ps->weapState[v4].weaponState - 34) > 2;
  CanSprintReload = BG_CanSprintReload(ps);
  v16 = v14;
  v17 = v4;
  if ( CanSprintReload )
    v16 = 1;
  weaponState = ps->weapState[v50 / 0x50].weaponState;
  v20 = 0;
  if ( (unsigned int)weaponState <= 0x3B )
  {
    v19 = 0xC01000000000001i64;
    if ( _bittest64(&v19, weaponState) )
      v20 = 1;
  }
  if ( v9 || v20 || (unsigned int)(weaponState - 16) <= 1 || !v16 || Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && (unsigned int)(ps->weapState[v17].weaponState - 28) <= 1 || (v21 = ps->weapState[v17].weaponState, (unsigned int)v21 <= 0x3D) && (v22 = 0x3E00401C00000000i64, _bittest64(&v22, v21)) || PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, (PlayerHandIndex)v4, pm->m_bgHandler) )
  {
    if ( CurrentWeaponForPlayer->weaponIdx && CurrentWeaponForPlayer->weaponIdx < BG_GetNumWeapons() )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      {
        v23 = BG_UsingAlternate(ps);
        if ( !BG_WeaponIsClipOnly(CurrentWeaponForPlayer, v23) )
          BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RELOAD, 0, 1, holdrand);
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
        Slide_PlayOrStopGesture(ps, pm->weaponMap, pm->m_bgHandler, pm->cmd.serverTime, SLIDEGESTUREREQUEST_STOP);
      PM_AddEvent(pm, EV_RELOAD_START_NOTIFY);
      if ( ps->weapState[v17].weaponState == 16 )
        PM_AddEvent(pm, EV_FIRE_WEAPON_END);
      PM_Weapon_Charge_ClearState(pm, (PlayerHandIndex)v4);
      BG_SetQAS(ps, (PlayerHandIndex)v4, QAS_STATE_NONE);
      ammoInClip = BG_GetAmmoInClipForWeapon(ps, CurrentWeaponForPlayer, v10, (PlayerHandIndex)v4);
      ps->weapState[v17].ammoInClipBeforeReload = ammoInClip;
      m_bgHandler = pm->m_bgHandler;
      outAmmoInClip = ammoInClip;
      hasFastReloadOverride = 0;
      started = BG_ReloadStartTime(ps, m_bgHandler, (const PlayerHandIndex)v4, CurrentWeaponForPlayer, v10, v47, ammoInClip, &hasFastReloadOverride);
      if ( hasFastReloadOverride && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      {
        v27 = BG_UsingAlternate(ps);
        if ( !BG_WeaponIsClipOnly(CurrentWeaponForPlayer, v27) )
          BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RELOADQUICK, 0, 1, p_holdrand);
      }
      p_weapHandFlags = &ps->weapState[v4].weapHandFlags;
      *p_weapHandFlags |= 8u;
      ReloadType = BG_GetReloadType(CurrentWeaponForPlayer, v10);
      v30 = ReloadType;
      if ( ReloadType == RELOAD_TYPE_SEGMENTED )
      {
        if ( started )
        {
          v31 = WEAP_RELOAD_START;
          v32 = BG_WeaponDef(CurrentWeaponForPlayer, v10);
          if ( v32 )
          {
            if ( v32->reloadTwoRound && BG_GetReloadType(CurrentWeaponForPlayer, v10) == RELOAD_TYPE_SEGMENTED )
            {
              r_clipIndex = *BG_AmmoStoreForWeapon(&result, CurrentWeaponForPlayer, v10);
              ClipAmmoPtrConst = BG_GetClipAmmoPtrConst(ps, &r_clipIndex);
              if ( ClipAmmoPtrConst )
              {
                if ( ClipAmmoPtrConst->chamberedCount[v4] % 2 != 1 && BG_GetAmmoNotInClip(ps, CurrentWeaponForPlayer, v10) >= 2 )
                {
                  *p_weapHandFlags |= 0x10u;
                  v31 = WEAP_RELOAD_START_TWO;
                }
              }
            }
          }
          if ( ps->pm_type < 7 )
            PM_SetNextWeaponAnim(ps, v31, (PlayerHandIndex)v4);
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
          {
            v34 = BG_UsingAlternate(ps);
            IsClipOnly = BG_WeaponIsClipOnly(CurrentWeaponForPlayer, v34);
            v36 = p_holdrand;
            if ( !IsClipOnly )
              BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RELOAD_START, 0, 1, p_holdrand);
          }
          else
          {
            v36 = p_holdrand;
          }
          v37 = v50;
          ps->weapState[v50 / 0x50].weaponTime = started;
          *(int *)((char *)&ps->weapState[0].weaponState + v37) = 19;
          PM_AddEvent(pm, EV_RELOAD_START);
          if ( BG_GetWeaponAltReloadAnimsEnabled(CurrentWeaponForPlayer, v10) )
            BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_ALT_RELOAD_ANIMS, 0, 1, v36);
          PM_SetWeaponReloadAddAmmoDelay(pm->weaponMap, ps, pm->m_bgHandler, (PlayerHandIndex)v4, 0);
          return;
        }
LABEL_57:
        PM_SetReloadingState(pm, (PlayerHandIndex)v4);
        return;
      }
      if ( (unsigned int)(ReloadType - 2) > 1 )
        goto LABEL_57;
      if ( (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5334, ASSERT_TYPE_ASSERT, "(hand == WEAPON_HAND_DEFAULT)", (const char *)&queryFormat, "hand == WEAPON_HAND_DEFAULT") )
        __debugbreak();
      IsBulletClipEmpty = PM_Weapon_IsBulletClipEmpty(ps, CurrentWeaponForPlayer, v10, (PlayerHandIndex)v4, &outAmmoInClip);
      v39 = IsBulletClipEmpty;
      if ( v30 == RELOAD_TYPE_MULTIPLE_PERCENTAGE && IsBulletClipEmpty )
      {
        if ( ps->pm_type >= 7 )
          goto LABEL_68;
        v40 = WEAP_RELOAD_EMPTY;
      }
      else
      {
        if ( ps->pm_type >= 7 )
          goto LABEL_68;
        v40 = WEAP_RELOAD_FIRST;
      }
      PM_SetNextWeaponAnim(ps, v40, (PlayerHandIndex)v4);
LABEL_68:
      v41 = pm->m_bgHandler;
      if ( v30 == RELOAD_TYPE_MULTIPLE_BULLET )
        v42 = BG_ReloadMultipleTimeBulletBased(ps, v41, (const PlayerHandIndex)v4, CurrentWeaponForPlayer, v10, &hasFastReloadOverride);
      else
        v42 = BG_ReloadMultipleTimePercentageBased(ps, v41, (const PlayerHandIndex)v4, CurrentWeaponForPlayer, v10, &hasFastReloadOverride);
      v43 = v50;
      ps->weapState[v50 / 0x50].weaponTime = v42;
      v44 = outAmmoInClip;
      *(int *)((char *)&ps->weapState[0].weaponState + v43) = 18;
      v45 = BG_ReloadStartAddTime(ps, CurrentWeaponForPlayer, v10, 0, v44, 0, &hasFastReloadOverride);
      BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v4, v45, "Reload Start Add Time");
      PM_AddEvent(pm, (const entity_event_t)(v39 + 23));
      if ( BG_GetWeaponAltReloadAnimsEnabled(CurrentWeaponForPlayer, v10) )
        BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_ALT_RELOAD_ANIMS, 0, 1, p_holdrand);
    }
  }
}

/*
==============
PM_BuildWeaponAnimArrays
==============
*/
void PM_BuildWeaponAnimArrays(BgWeaponMap *const weaponMap, playerState_s *const ps, const BgHandler *const pmoveHandler)
{
  PlayerWeaponAnimArrays *normalAnimArray; 
  bool v7; 
  bool v8; 
  Weapon r_weapon; 
  RawWeaponAnimArrays outAnimArrays; 

  RawWeaponAnimArrays::RawWeaponAnimArrays(&outAnimArrays);
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 698, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 699, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  normalAnimArray = pmoveHandler->PlayerWeaponAnims(pmoveHandler, ps);
  if ( !normalAnimArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 702, ASSERT_TYPE_ASSERT, "(weaponAnimArrays)", (const char *)&queryFormat, "weaponAnimArrays") )
    __debugbreak();
  r_weapon = *BG_GetViewmodelWeapon(weaponMap, ps);
  v7 = BG_PlayerDualWieldingWeapon(weaponMap, ps, &r_weapon) != 0;
  v8 = BG_UsingAlternate(ps);
  BG_Suit_GetOverriddenAnims(ps, &r_weapon, &outAnimArrays);
  memset_0(normalAnimArray, 0, 0x1330ui64);
  memset_0(normalAnimArray->altAnimArray, 0, sizeof(normalAnimArray->altAnimArray));
  normalAnimArray->blendSpaces[0] = NULL;
  normalAnimArray->blendSpaces[1] = NULL;
  normalAnimArray->blendSpaces[2] = NULL;
  normalAnimArray->blendSpaces[3] = NULL;
  normalAnimArray->blendSpaces[4] = NULL;
  normalAnimArray->blendSpaces[5] = NULL;
  normalAnimArray->blendSpaces[6] = NULL;
  normalAnimArray->blendSpaces[7] = NULL;
  normalAnimArray->blendSpacesAlt[0] = NULL;
  normalAnimArray->blendSpacesAlt[1] = NULL;
  normalAnimArray->blendSpacesAlt[2] = NULL;
  normalAnimArray->blendSpacesAlt[3] = NULL;
  normalAnimArray->blendSpacesAlt[4] = NULL;
  normalAnimArray->blendSpacesAlt[5] = NULL;
  normalAnimArray->blendSpacesAlt[6] = NULL;
  normalAnimArray->blendSpacesAlt[7] = NULL;
  BG_BuildWeaponAnimArrays(ps, &r_weapon, v7, v8, &outAnimArrays, normalAnimArray->normalAnimArray, normalAnimArray->blendSpaces, normalAnimArray->altAnimArray, normalAnimArray->blendSpacesAlt, normalAnimArray->footsteps, WEAP_ANIM_ROOT, 608);
  normalAnimArray->weaponUsedForAnims = r_weapon;
  normalAnimArray->meleeComboSeqIdx = ps->weapCommon.meleeComboSeqIdx;
  normalAnimArray->carryObjectIndex = ps->carryState.carryObjectIndex;
  normalAnimArray->suitIndex = ps->suitIndex;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 963, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  weaponMap->SetWeapon(weaponMap, &ps->weapCommon.weaponAnimArrayHandle, &r_weapon);
}

/*
==============
PM_CalcIsAdsAllowed
==============
*/
char PM_CalcIsAdsAllowed(const pmove_t *pm)
{
  playerState_s *ps; 
  const CarryObjectDef *PlayerCarryObjectDef; 
  playerState_s *v4; 
  const Weapon *ViewmodelWeapon; 
  bool v6; 
  bool v7; 
  bool v8; 
  const Weapon *v10; 
  const WeaponDef *v11; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 990, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 990, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_CarryObject_IsActive(ps) )
  {
    PlayerCarryObjectDef = BG_GetPlayerCarryObjectDef(ps);
    if ( !PlayerCarryObjectDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 995, ASSERT_TYPE_ASSERT, "(carryObjectDef)", (const char *)&queryFormat, "carryObjectDef") )
      __debugbreak();
    if ( !PlayerCarryObjectDef->allowADS )
      return 0;
  }
  if ( BG_PlayerDualWielding(ps) && !BG_IsTurretActive(ps) )
    return 0;
  v4 = pm->ps;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 982, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( pm->cmd.serverTime < v4->weapCommon.adsEnableTime || BG_Skydive_IsSkydiving(ps) || BG_IsPlayerInExecution(ps) || (unsigned int)(ps->pm_type - 2) <= 6 || !BG_IsCharacterPlayer(ps) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 5u) )
    return 0;
  if ( !BG_IsTurretActive(ps) && !BG_IsPlayerOnRemoteTurret(ps) )
  {
    ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
    if ( (!BG_Ladder_IsActive(ps) || BG_IsLadderWeapon(ViewmodelWeapon, 1) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 6u) && BG_GetAmmoInClipForWeapon(ps, ViewmodelWeapon, 0, WEAPON_HAND_DEFAULT) && ps->ladderState.mode != LADDER_MODE_SLIDE) && !BG_UseLeftTriggerAltFireMode(ViewmodelWeapon) && !BG_IsBallWeapon(ViewmodelWeapon) )
    {
      v6 = BG_UsingAlternate(ps);
      if ( BG_IsAimDownSight(ViewmodelWeapon, v6) )
      {
        v7 = BG_UsingAlternate(ps);
        if ( !BG_NoADSWhenMagIsEmpty(ViewmodelWeapon, v7) || (v8 = BG_UsingAlternate(ps), BG_GetAmmoInClipForWeapon(ps, ViewmodelWeapon, v8, WEAPON_HAND_DEFAULT)) )
        {
          if ( PM_Demeanor_CanADS(ps) && PM_WeaponOtherHandAvailable(pm) )
            return 1;
        }
      }
    }
    return 0;
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
    return Dvar_GetBool_Internal_DebugName(DVARBOOL_turret_adsEnabled, "turret_adsEnabled");
  v10 = pm->m_bgHandler->PlayerTurret(pm->m_bgHandler, ps);
  if ( !v10->weaponIdx )
    return 0;
  v11 = BG_WeaponDef(v10, 0);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1061, ASSERT_TYPE_ASSERT, "(weapDefTurret)", (const char *)&queryFormat, "weapDefTurret") )
    __debugbreak();
  return v11->turretADSEnabled;
}

/*
==============
PM_CalcRandomMeleeIndex
==============
*/
__int64 PM_CalcRandomMeleeIndex(const int animSetCount, const unsigned __int8 animSets, const int currentIndex, bool isRandomized, bool isWeaponChange, bool isMeleeComboWpn, unsigned int *holdrand)
{
  int v7; 
  int v9; 
  bool v11; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  unsigned int v17; 
  int v18; 
  unsigned int v19; 
  int v20; 
  int v21; 
  int v22; 
  bool v23; 
  int v24; 
  bool v25; 
  int v26; 
  unsigned int v27; 
  int v28; 
  int v29; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 

  v7 = animSets;
  v9 = animSets & 1;
  v11 = (animSets & 2) == 0;
  v13 = v9 + 1;
  if ( v11 )
    v13 = v9;
  v14 = v13 + 1;
  if ( (v7 & 4) == 0 )
    v14 = v13;
  v15 = v14 + 1;
  if ( (v7 & 8) == 0 )
    v15 = v14;
  if ( animSetCount != v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 603, ASSERT_TYPE_ASSERT, "( animSetCount ) == ( verifyAnimSetCount )", "%s == %s\n\t%i, %i", "animSetCount", "verifyAnimSetCount", animSetCount, v15) )
    __debugbreak();
  if ( (unsigned int)currentIndex >= 4 )
  {
    LODWORD(v32) = 4;
    LODWORD(v31) = currentIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 551, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (4) )", "index doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v31, v32) )
      __debugbreak();
  }
  v16 = -1;
  v17 = 0;
  while ( 1 )
  {
    if ( _bittest(&v7, v17) )
    {
      ++v16;
      if ( (v7 & (1 << currentIndex)) == 0 )
        break;
    }
    if ( v17 != currentIndex && (int)++v17 < 4 )
      continue;
    if ( v16 >= 0 )
    {
      if ( (unsigned int)v16 >= 4 )
      {
        LODWORD(v32) = 4;
        LODWORD(v31) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 528, ASSERT_TYPE_ASSERT, "(unsigned)( ordinal ) < (unsigned)( (4) )", "ordinal doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v31, v32) )
          __debugbreak();
      }
      v18 = 0;
      v19 = 0;
      while ( 1 )
      {
        v20 = v18 + 1;
        if ( !_bittest(&v7, v19) )
          v20 = v18;
        v18 = v20;
        if ( v20 == v16 + 1 )
          break;
        if ( (int)++v19 >= 4 )
        {
          v19 = 0;
          break;
        }
      }
      if ( currentIndex != v19 )
      {
        LODWORD(v34) = v19;
        LODWORD(v33) = currentIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 583, ASSERT_TYPE_ASSERT, "( index ) == ( verifyIndex )", "%s == %s\n\t%i, %i", "index", "verifyIndex", v33, v34) )
          __debugbreak();
      }
    }
    else
    {
      v16 = 0;
    }
    break;
  }
  if ( animSetCount > 1 )
  {
    if ( isRandomized )
    {
      if ( isWeaponChange || isMeleeComboWpn )
      {
        v21 = BG_irand(0, animSetCount, holdrand);
        v22 = animSetCount - 1;
      }
      else
      {
        v22 = animSetCount - 1;
        v21 = BG_irand(0, v22, holdrand);
        if ( v21 >= v16 )
          ++v21;
      }
      if ( v21 >= 0 && v21 <= v22 )
        goto LABEL_48;
      LODWORD(v33) = v22;
      LODWORD(v31) = v21;
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 629, ASSERT_TYPE_ASSERT, "( 0 ) <= ( newOrdinal ) && ( newOrdinal ) <= ( (animSetCount - 1) )", "newOrdinal not in [0, (animSetCount - 1)]\n\t%i not in [%i, %i]", v31, 0i64, v33);
    }
    else
    {
      v24 = (v16 + 1) % animSetCount;
      v21 = v24;
      if ( v24 >= 0 && v24 <= animSetCount - 1 )
      {
LABEL_48:
        v25 = (unsigned int)v21 < 4;
        if ( v21 >= 4 )
        {
          LODWORD(v34) = 4;
          LODWORD(v33) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 636, ASSERT_TYPE_ASSERT, "( newOrdinal ) < ( (4) )", "%s < %s\n\t%i, %i", "newOrdinal", "MAX_RANDOM_MELEE_ANIM_PACKAGES", v33, v34) )
            __debugbreak();
          v25 = (unsigned int)v21 < 4;
        }
        if ( !v25 )
        {
          LODWORD(v32) = 4;
          LODWORD(v31) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 528, ASSERT_TYPE_ASSERT, "(unsigned)( ordinal ) < (unsigned)( (4) )", "ordinal doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v31, v32) )
            __debugbreak();
        }
        goto LABEL_55;
      }
      LODWORD(v33) = animSetCount - 1;
      LODWORD(v31) = (v16 + 1) % animSetCount;
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 634, ASSERT_TYPE_ASSERT, "( 0 ) <= ( newOrdinal ) && ( newOrdinal ) <= ( (animSetCount - 1) )", "newOrdinal not in [0, (animSetCount - 1)]\n\t%i not in [%i, %i]", v31, 0i64, v33);
    }
    if ( v23 )
      __debugbreak();
    goto LABEL_48;
  }
  v21 = 0;
LABEL_55:
  v26 = 0;
  v27 = 0;
  v28 = v21 + 1;
  while ( 1 )
  {
    v29 = v26 + 1;
    if ( !_bittest(&v7, v27) )
      v29 = v26;
    v26 = v29;
    if ( v29 == v28 )
      break;
    if ( (int)++v27 >= 4 )
      return 0i64;
  }
  return v27;
}

/*
==============
PM_ExitAimDownSight
==============
*/
void PM_ExitAimDownSight(pmove_t *pm)
{
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1279, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1280, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
    __debugbreak();
  PM_AddEvent(pm, EV_RESET_ADS);
  pm->ps->pm_flags.m_flags[0] &= ~0x200u;
}

/*
==============
PM_GestureOffhandDisablesFiringPrimary
==============
*/
char PM_GestureOffhandDisablesFiringPrimary(const pmove_t *pm)
{
  playerState_s *ps; 
  const Weapon *OffhandGestureWeapon; 
  BgWeaponMap *weaponMap; 
  const Weapon *v5; 
  Weapon *OffHandWeaponForPlayer; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10290, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10290, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  OffhandGestureWeapon = BG_GetOffhandGestureWeapon(pm->weaponMap, ps);
  weaponMap = pm->weaponMap;
  v5 = OffhandGestureWeapon;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14513, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14514, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14460, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (ps->weapCommon.offhandGestureFlags & 0x40) != 0 )
    OffHandWeaponForPlayer = (Weapon *)BG_GetOffHandWeaponForPlayer(weaponMap, ps);
  else
    OffHandWeaponForPlayer = &NULL_WEAPON;
  if ( v5->weaponIdx )
  {
    if ( !BG_WeaponDef(v5, 0)->gesturesDisablePrimary )
      return 0;
  }
  else if ( !OffHandWeaponForPlayer->weaponIdx || !BG_WeaponDef(OffHandWeaponForPlayer, 0)->gesturesDisablePrimary || !BG_Offhand_IsPlayingGesture(pm->weaponMap, ps, OHGT_WEAPON) || BG_Offhand_ScriptWeaponInterruptable(pm->weaponMap, ps, pm->cmd.serverTime) )
  {
    return 0;
  }
  return 1;
}

/*
==============
PM_GetADSFracTargetVelocity
==============
*/
float PM_GetADSFracTargetVelocity(const pmove_t *const pm, const Weapon *weapon, bool isAlternate, bool adsIn)
{
  playerState_s *ps; 
  BgWeaponMap *weaponMap; 
  const dvar_t *v14; 
  float v15; 
  playerState_s *v16; 
  int weaponTime; 
  const dvar_t *v18; 
  const Weapon *ViewmodelWeapon; 
  bool v20; 
  bool v21; 
  int v22; 
  int v23; 
  int v24; 
  playerState_s *v25; 
  __int128 v29; 
  __int128 v31; 
  float outAdsTransInSpeedMs; 
  float outAdsTransOutSpeedMs[3]; 
  float outNormalSpeedScale; 
  float outSniperSpeedScale; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1668, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1668, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = pm->weaponMap;
  *(float *)&_XMM6 = FLOAT_1_0;
  if ( BG_HasPerk(&ps->perks, 0x11u) )
  {
    outNormalSpeedScale = FLOAT_1_0;
    outSniperSpeedScale = FLOAT_1_0;
    BG_GetQuickDrawPerkMultipliers(&outNormalSpeedScale, &outSniperSpeedScale);
    _XMM0 = (unsigned int)BG_GetWeaponClass(weapon, isAlternate);
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(outNormalSpeedScale);
    __asm { vblendvps xmm6, xmm1, xmm2, xmm3 }
  }
  if ( BG_IsThirdPersonMode(weaponMap, ps) )
  {
    v14 = DCONST_DVARFLT_camera_thirdPersonAdsTransScale;
    if ( !DCONST_DVARFLT_camera_thirdPersonAdsTransScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_thirdPersonAdsTransScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    *(float *)&_XMM6 = *(float *)&_XMM6 * v14->current.value;
  }
  BG_GetADSTransTimes(pm->weaponMap, ps, weapon, isAlternate, &outAdsTransInSpeedMs, outAdsTransOutSpeedMs);
  if ( adsIn )
    v15 = outAdsTransInSpeedMs;
  else
    LODWORD(v15) = LODWORD(outAdsTransOutSpeedMs[0]) ^ _xmm;
  if ( !adsIn || ps->weapState[0].weaponState != 36 )
    return (float)(v15 * 1000.0) * *(float *)&_XMM6;
  v16 = pm->ps;
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1589, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( v16->weapState[0].weaponState == 36 )
  {
    v18 = DCONST_DVARMPBOOL_movementAnimProto;
    if ( !DCONST_DVARMPBOOL_movementAnimProto && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movementAnimProto") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled )
    {
      weaponTime = v16->weapState[0].weaponTime;
    }
    else
    {
      ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, v16);
      v20 = BG_UsingAlternate(v16);
      v21 = BG_PlayerDualWielding(v16) == 1;
      v22 = BG_SprintOutTime(pm->weaponMap, v16, ViewmodelWeapon, v20, v21);
      v23 = BG_SprintOutInterruptTime(pm->weaponMap, v16, ViewmodelWeapon, v20, v21);
      v24 = v23 + v16->weapState[0].weaponTime - v22;
      if ( !v23 )
        v24 = v16->weapState[0].weaponTime;
      weaponTime = 0;
      if ( v24 > 0 )
        weaponTime = v24;
    }
  }
  else
  {
    weaponTime = 0;
  }
  v25 = pm->ps;
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1616, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( weaponTime <= 0 )
    goto LABEL_37;
  v29 = LODWORD(FLOAT_1_0);
  *(float *)&v29 = 1.0 - v25->weapCommon.fWeaponPosFrac;
  _XMM1 = v29;
  __asm { vmaxss  xmm2, xmm1, xmm0 }
  if ( *(float *)&_XMM2 <= 0.000001 )
  {
LABEL_37:
    _XMM0 = LODWORD(FLOAT_3_4028235e38);
    __asm { vminss  xmm0, xmm0, xmm6 }
  }
  else
  {
    v31 = LODWORD(FLOAT_1000_0);
    *(float *)&v31 = (float)(1000.0 / (float)weaponTime) * *(float *)&_XMM2;
    _XMM0 = v31;
    __asm { vminss  xmm0, xmm0, xmm6 }
  }
  return *(float *)&_XMM0;
}

/*
==============
PM_GetRequestedWeapon
==============
*/
Weapon *PM_GetRequestedWeapon(const pmove_t *pm)
{
  playerState_s *ps; 
  Weapon *result; 

  if ( !pm )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19069, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19071, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
  }
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19071, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x23u) )
    return &NULL_WEAPON;
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) )
    return &pm->cmd.weapon;
  result = (Weapon *)BG_GetFirstEquippedWeaponBySlot(pm->weaponMap, ps, WEAPON_SLOT_MELEE);
  if ( !result->weaponIdx )
    return &pm->cmd.weapon;
  return result;
}

/*
==============
PM_GetWeaponAltFireButton
==============
*/
unsigned __int64 PM_GetWeaponAltFireButton(const pmove_t *pm, const Weapon *weapon, PlayerHandIndex hand, bool fromGamepad)
{
  unsigned __int64 WeaponFireButton; 
  unsigned int v9; 

  if ( BG_IsBallWeapon(weapon) )
  {
    WeaponFireButton = PM_GetWeaponFireButton(pm, weapon, hand, fromGamepad);
    v9 = 1;
    if ( WeaponFireButton == 1 )
      return 0x20000;
    return v9;
  }
  else if ( hand || !BG_UseLeftTriggerAltFireMode(weapon) )
  {
    return 0i64;
  }
  else
  {
    return 512i64;
  }
}

/*
==============
PM_GetWeaponFireButton
==============
*/
unsigned __int64 PM_GetWeaponFireButton(const pmove_t *pm, const Weapon *weapon, PlayerHandIndex hand, bool fromGamepad)
{
  playerState_s *ps; 
  bool v9; 
  bool v10; 
  unsigned __int64 result; 
  unsigned int v12; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9122, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9122, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = BG_UsingAlternate(ps);
  if ( !BG_WeaponDef(weapon, v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9126, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v10 = BG_UsingAlternate(ps);
  if ( BG_IsOffhandWeaponType(weapon, v10) && BG_WeapHasDetonator(weapon, 0) )
    return 0x20000i64;
  if ( fromGamepad || !BG_PlayerDualWielding(ps) || BG_IsTurretActive(ps) )
  {
    result = 0x20000i64;
    if ( hand == WEAPON_HAND_DEFAULT )
      return 1i64;
  }
  else
  {
    v12 = 1;
    if ( hand == WEAPON_HAND_DEFAULT )
      return 0x20000;
    return v12;
  }
  return result;
}

/*
==============
PM_HoldBreathFire
==============
*/
void PM_HoldBreathFire(const BgWeaponMap *weaponMap, playerState_s *ps)
{
  const dvar_t *v4; 
  int v5; 
  const dvar_t *v6; 
  int v7; 
  int holdBreathTimer; 
  int v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2031, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2032, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = DCONST_DVARBOOL_player_scope_prototype;
  if ( !DCONST_DVARBOOL_player_scope_prototype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_scope_prototype") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled && BG_HasHoldBreathAbility(weaponMap, ps) )
  {
    v5 = BG_HoldBreathMaxTime(ps);
    v6 = DCONST_DVARFLT_player_breath_fire_delay;
    v7 = v5;
    if ( !DCONST_DVARFLT_player_breath_fire_delay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breath_fire_delay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    holdBreathTimer = ps->holdBreathTimer;
    if ( holdBreathTimer < v7 )
    {
      v9 = holdBreathTimer - (int)(float)(v6->current.value * -1000.0);
      if ( v9 > v7 )
        v9 = v7;
      ps->holdBreathTimer = v9;
    }
    v10 = DVARFLT_perk_fastSnipeScale;
    if ( !DVARFLT_perk_fastSnipeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastSnipeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.value <= 0.0 )
    {
      v11 = DVARFLT_perk_fastSnipeScale;
      if ( !DVARFLT_perk_fastSnipeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastSnipeScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2052, ASSERT_TYPE_ASSERT, "( ( Dvar_GetFloat_Internal_DebugName( DVARFLT_perk_fastSnipeScale, \"perk_fastSnipeScale\" ) > 0.0f ) )", "( Dvar_GetFloat_Internal_DebugName( DVARFLT_perk_fastSnipeScale, \"perk_fastSnipeScale\" ) ) = %g", v11->current.value) )
        __debugbreak();
    }
    if ( BG_HasPerk(&ps->perks, 0x29u) )
    {
      v12 = DVARFLT_perk_fastSnipeScale;
      if ( !DVARFLT_perk_fastSnipeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastSnipeScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      _XMM0 = 0i64;
      __asm { vroundss xmm1, xmm0, xmm3, 1 }
      ps->holdBreathTimer = (int)*(float *)&_XMM1;
    }
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 2u);
  }
}

/*
==============
PM_IncrementMeleeComboSeqIdx
==============
*/
void PM_IncrementMeleeComboSeqIdx(pmove_t *pm, const Weapon *r_weapon)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19505, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19505, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_IsMeleeComboWeapon(r_weapon) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19507, ASSERT_TYPE_ASSERT, "(BG_IsMeleeComboWeapon( r_weapon ))", (const char *)&queryFormat, "BG_IsMeleeComboWeapon( r_weapon )") )
    __debugbreak();
  ++ps->weapCommon.meleeComboSeqIdx;
  if ( ps->weapCommon.meleeComboSeqIdx >= BG_GetMeleeComboSeqCount(r_weapon) )
    ps->weapCommon.meleeComboSeqIdx = 0;
  PM_BuildWeaponAnimArrays(pm->weaponMap, ps, pm->m_bgHandler);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x38u);
}

/*
==============
PM_InteruptWeaponWithProneMove
==============
*/
__int64 PM_InteruptWeaponWithProneMove(pmove_t *pm)
{
  playerState_s *ps; 
  int WeaponHand; 
  unsigned __int64 weaponState; 
  int v5; 
  __int64 v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  unsigned __int64 v9; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3594, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3594, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
  weaponState = ps->weapState[0].weaponState;
  v5 = WeaponHand;
  if ( (unsigned int)weaponState > 0x35 || (v6 = 0x240000003E1FBFi64, !_bittest64(&v6, weaponState)) || WeaponHand >= 1 && ((v7 = ps->weapState[1].weaponState, (unsigned int)v7 > 0x35) || !_bittest64(&v6, v7)) )
  {
    v8 = 0x180001FDC18000i64;
    if ( (unsigned int)weaponState <= 0x34 && _bittest64(&v8, weaponState) )
      return 0i64;
    if ( v5 >= 1 )
    {
      v9 = ps->weapState[1].weaponState;
      if ( (unsigned int)v9 <= 0x34 )
      {
        if ( _bittest64(&v8, v9) )
          return 0i64;
      }
    }
    if ( (_DWORD)weaponState == 78 )
      PM_Weapon_CancelInspect(pm);
    else
      PM_Weapon_Idle(pm, WEAPON_HAND_DEFAULT);
  }
  return 1i64;
}

/*
==============
PM_IsADSBlockedByReload
==============
*/
bool PM_IsADSBlockedByReload(pmove_t *pm)
{
  playerState_s *ps; 
  const Weapon *ViewmodelWeapon; 
  bool v4; 
  bool v5; 
  ReloadType ReloadType; 
  bool v7; 
  ReloadType v8; 
  int v9; 
  int weaponState; 
  bool result; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1792, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1792, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
  v4 = BG_UsingAlternate(ps);
  v5 = PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, pm->m_bgHandler);
  ReloadType = BG_GetReloadType(ViewmodelWeapon, v4);
  v7 = ReloadType == RELOAD_TYPE_SEGMENTED;
  v8 = ReloadType;
  v9 = BG_ADSReloadTransTime(pm->weaponMap, ps, ViewmodelWeapon, v4);
  result = 1;
  if ( v8 == RELOAD_TYPE_SEGMENTED || ps->weapState[0].weaponState != 18 || ps->weapState[0].weaponTime - v9 <= 0 || v5 )
  {
    if ( !v7 )
      return 0;
    weaponState = ps->weapState[0].weaponState;
    if ( (unsigned int)(weaponState - 18) > 1 && ((unsigned int)(weaponState - 20) > 1 || ps->weapState[0].weaponTime - v9 <= 0) )
      return 0;
  }
  return result;
}

/*
==============
PM_IsInAirForAimSpread
==============
*/
_BOOL8 PM_IsInAirForAimSpread(const pmove_t *pm)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3622, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  return ps->groundEntityNum == 2047 && ps->pm_type != 1 && !BG_IsPlayerZeroG(ps);
}

/*
==============
PM_NightVisionStart
==============
*/
char PM_NightVisionStart(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v5; 
  bool v6; 
  PlayerAnimScriptEventType v7; 
  bool IsUsingNightVision; 
  Gesture *Gesture; 
  Gesture *v10; 
  const Gesture *v11; 
  bool v12; 
  int serverTime; 
  BgWeaponMap *weaponMap; 
  const dvar_t *v16; 
  unsigned int IndexFromGesture; 
  GesturePlayRequest request; 
  GesturePlayRequest result; 

  if ( !pm )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15597, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15598, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
  }
  ps = pm->ps;
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15598, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15600, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v5 = BG_UsingAlternate(ps);
  v6 = BG_PlayerDualWielding(ps) != 0;
  v7 = ANIM_ET_DEACTIVATE_NVG;
  IsUsingNightVision = BG_IsUsingNightVision(ps);
  Gesture = BG_Suit_GetGesture(ps, WEAPON_HAND_DEFAULT, CurrentWeaponForPlayer, v5, v6, GESTUREANIMTYPE_NVG_ON);
  v10 = BG_Suit_GetGesture(ps, WEAPON_HAND_DEFAULT, CurrentWeaponForPlayer, v5, v6, GESTUREANIMTYPE_NVG_OFF);
  v11 = v10;
  if ( IsUsingNightVision )
    v12 = v10 == NULL;
  else
    v12 = Gesture == NULL;
  if ( v12 )
    return 0;
  serverTime = pm->cmd.serverTime;
  weaponMap = pm->weaponMap;
  if ( !BG_Offhand_HasActiveOffhand(ps) && !BG_HasLadderHand(ps) && BG_NightVisionInterruptable(weaponMap, ps, serverTime) )
  {
    v16 = DVARBOOL_bg_allowNVGWhileADS;
    if ( !DVARBOOL_bg_allowNVGWhileADS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_allowNVGWhileADS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.enabled || ps->weapCommon.fWeaponPosFrac <= 0.0 )
    {
      if ( IsUsingNightVision )
      {
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15630, ASSERT_TYPE_ASSERT, "(nvgOffGesture)", (const char *)&queryFormat, "nvgOffGesture") )
          __debugbreak();
      }
      else
      {
        if ( !Gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15636, ASSERT_TYPE_ASSERT, "(nvgOnGesture)", (const char *)&queryFormat, "nvgOnGesture") )
          __debugbreak();
        v7 = ANIM_ET_ACTIVATE_NVG;
        v11 = Gesture;
      }
      IndexFromGesture = BG_Gesture_GetIndexFromGesture(v11);
      BG_AnimScriptEvent(pm->m_bgHandler, ps, v7, 0, 0, &pml->holdrand);
      request = *BG_GesturePriority_SetupRequest(&result, pm->weaponMap, ps, pm->m_bgHandler, IndexFromGesture, pm->cmd.serverTime);
      request.ignoreGamePlayState = 1;
      if ( BG_GesturePriority_TryPlay(&request, NULL, NULL) )
        PM_Weapon_ReturnMainWeaponToIdleForGesture(pm);
    }
  }
  return 1;
}

/*
==============
PM_NightVisionToggle
==============
*/
void PM_NightVisionToggle(pmove_t *pm)
{
  playerState_s *ps; 
  entity_event_t v3; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15657, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15660, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsUsingNightVision(ps) )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 7u);
    v3 = EV_NIGHTVISION_REMOVE;
  }
  else
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 7u);
    v3 = EV_NIGHTVISION_WEAR;
  }
  PM_AddEvent(pm, v3);
}

/*
==============
PM_NightVisionUpdate
==============
*/
void PM_NightVisionUpdate(pmove_t *pm)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v4; 
  unsigned int v5; 
  bool v6; 
  Gesture *Gesture; 
  Gesture *v8; 
  bool IsPlayingByIndex; 
  unsigned int v10; 
  unsigned int IndexFromGesture; 
  const XAnimParts *v12; 
  double NotetrackTimeFromParts; 
  float v14; 
  double ElapsedTime; 
  float v16; 
  double AnimLengthInSeconds; 
  bool v18; 
  unsigned int v19; 
  const XAnimParts *v20; 
  double v21; 
  float v22; 
  double v23; 
  float v24; 
  double v25; 
  unsigned int outSlot; 

  if ( !pm )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15677, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15678, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
  }
  ps = pm->ps;
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15678, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15680, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v4 = BG_UsingAlternate(ps);
  v5 = 2;
  v6 = BG_PlayerDualWielding(ps) != 0;
  outSlot = 2;
  Gesture = BG_Suit_GetGesture(ps, WEAPON_HAND_DEFAULT, CurrentWeaponForPlayer, v4, v6, GESTUREANIMTYPE_NVG_ON);
  v8 = BG_Suit_GetGesture(ps, WEAPON_HAND_DEFAULT, CurrentWeaponForPlayer, v4, v6, GESTUREANIMTYPE_NVG_OFF);
  IsPlayingByIndex = 0;
  outSlot = 2;
  v10 = 2;
  if ( Gesture )
  {
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(Gesture);
    IsPlayingByIndex = BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot);
    v10 = outSlot;
  }
  if ( IsPlayingByIndex && !BG_IsUsingNightVision(ps) )
  {
    if ( !*Gesture->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15694, ASSERT_TYPE_ASSERT, "(nvgOnGesture->anims[GESTURE_ASSET_LEFT_CENTER])", (const char *)&queryFormat, "nvgOnGesture->anims[GESTURE_CENTER_ANIM_INDEX]") )
      __debugbreak();
    v12 = *Gesture->anims;
    if ( v12 )
    {
      NotetrackTimeFromParts = XAnimGetNotetrackTimeFromParts(v12, scr_const.night_vision_on);
      v14 = *(float *)&NotetrackTimeFromParts;
      if ( *(float *)&NotetrackTimeFromParts < 0.0 )
      {
        PM_NightVisionToggle(pm);
        Com_PrintWarning(16, "NVG On Gesture %s, Missing 'night_vision_on' notetrack, toggling NVG immedietly.\n", Gesture->name);
      }
      else
      {
        ElapsedTime = BG_Gesture_GetElapsedTime(ps, v10, pm->cmd.serverTime);
        v16 = *(float *)&ElapsedTime;
        AnimLengthInSeconds = BG_Gesture_GetAnimLengthInSeconds(Gesture);
        if ( v16 >= (float)(*(float *)&AnimLengthInSeconds * v14) )
          PM_NightVisionToggle(pm);
      }
    }
  }
  v18 = 0;
  outSlot = 2;
  if ( v8 )
  {
    v19 = BG_Gesture_GetIndexFromGesture(v8);
    v18 = BG_Gesture_IsPlayingByIndex(ps, v19, &outSlot);
    v5 = outSlot;
  }
  if ( v18 && BG_IsUsingNightVision(ps) )
  {
    if ( !*v8->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15722, ASSERT_TYPE_ASSERT, "(nvgOffGesture->anims[GESTURE_ASSET_LEFT_CENTER])", (const char *)&queryFormat, "nvgOffGesture->anims[GESTURE_CENTER_ANIM_INDEX]") )
      __debugbreak();
    v20 = *v8->anims;
    if ( v20 )
    {
      v21 = XAnimGetNotetrackTimeFromParts(v20, scr_const.night_vision_off);
      v22 = *(float *)&v21;
      if ( *(float *)&v21 < 0.0 )
      {
        PM_NightVisionToggle(pm);
        Com_PrintWarning(16, "NVG off Gesture %s, Missing 'night_vision_off' notetrack, toggling NVG immedietly.\n", v8->name);
      }
      else
      {
        v23 = BG_Gesture_GetElapsedTime(ps, v5, pm->cmd.serverTime);
        v24 = *(float *)&v23;
        v25 = BG_Gesture_GetAnimLengthInSeconds(v8);
        if ( v24 >= (float)(*(float *)&v25 * v22) )
          PM_NightVisionToggle(pm);
      }
    }
  }
}

/*
==============
PM_OffhandThrow_HandleNonAnimated
==============
*/
char PM_OffhandThrow_HandleNonAnimated(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const Weapon *UsedOffHandWeapon; 
  const WeaponDef *v6; 
  bool v7; 
  bool v8; 
  unsigned int GestureIdx; 
  double Float_Internal_DebugName; 
  unsigned int *p_holdrand; 
  const char *v13; 
  const char *WeaponName; 
  GesturePlayRequest request; 
  GesturePlayRequest result; 
  char output[1024]; 

  if ( !pm )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13625, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13626, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
  }
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13626, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  UsedOffHandWeapon = PM_Weapon_GetUsedOffHandWeapon(pm->weaponMap, ps);
  v6 = BG_WeaponDef(UsedOffHandWeapon, 0);
  if ( v6->weapType != WEAPTYPE_GRENADE )
    return 0;
  v7 = BG_GetAmmoInClipForWeapon(ps, UsedOffHandWeapon, 0, WEAPON_HAND_DEFAULT) > 0;
  v8 = BG_WeapHasDetonator(UsedOffHandWeapon, 0) && (!v7 || (pm->cmd.buttons & 0x200000000000000i64) != 0);
  GestureIdx = BG_Offhand_GetGestureIdx(pm->weaponMap, ps, (OffhandGestureTypes)(2 * v8 + 1));
  if ( GestureIdx == 256 )
  {
    v13 = "pullback";
    if ( v8 )
      v13 = "detonate";
    WeaponName = BG_GetWeaponName(UsedOffHandWeapon, output, 0x400u);
    Com_PrintWarning(16, "Failed to fire offhand gesture weapon %s, could not locate %s gesture.\n", WeaponName, v13);
    return 1;
  }
  else
  {
    request = *BG_GesturePriority_SetupRequest(&result, pm->weaponMap, ps, pm->m_bgHandler, GestureIdx, pm->cmd.serverTime);
    request.ignoreGamePlayState = 1;
    if ( BG_GesturePriority_TryPlay(&request, NULL, NULL) )
    {
      ps->weapCommon.offhandGestureFlags = 1;
      if ( v8 )
      {
        ps->weapCommon.offhandGestureFlags = 33;
        if ( BG_UseFastOffhand(ps, pm->weaponMap) )
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_perk_fastOffhandMultiplier, "perk_fastOffhandMultiplier");
        else
          *(float *)&Float_Internal_DebugName = FLOAT_1_0;
        ps->weapCommon.offhandGestureFireTime = pm->cmd.serverTime - (int)(float)((float)(*(float *)&Float_Internal_DebugName * v6->gestureDetonationTime) * -1000.0);
      }
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      {
        p_holdrand = &pml->holdrand;
        if ( v8 )
          BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_DETONATE, 1, 1, p_holdrand);
        else
          PM_Weapon_PrepareThrowAnimScriptEvent(pm, ps, UsedOffHandWeapon, 0, p_holdrand);
      }
      if ( BG_HasLadderHand(ps) )
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x32u);
      pm->OnGestureOffhandTriggered(pm);
    }
    return 1;
  }
}

/*
==============
PM_ResetIdleCountersOnAds
==============
*/
void PM_ResetIdleCountersOnAds(const BgWeaponMap *weaponMap, playerState_s *ps, unsigned int *holdrand, const bool useSecondTimer)
{
  const Weapon *CurrentWeaponForPlayer; 
  bool v9; 
  int adsStartTime; 
  bool v11; 
  bool v12; 
  const Weapon *v13; 
  int v14; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  float adsIdleLerpStartTime; 
  float adsIdleLerpTime; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18501, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18502, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !holdrand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18503, ASSERT_TYPE_ASSERT, "(holdrand)", (const char *)&queryFormat, "holdrand") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v9 = BG_UsingAlternate(ps);
  if ( !BG_UsesContinousAdsIdleTransiton(CurrentWeaponForPlayer, v9) )
  {
    adsStartTime = ps->weapCommon.adsStartTime;
    v11 = ps->weapCommon.weaponIdleTime < adsStartTime;
    if ( ps->weapCommon.weaponIdleTime >= adsStartTime && useSecondTimer )
      v11 = ps->weapCommon.weaponIdleTime2 < adsStartTime;
    if ( v11 )
    {
      v12 = BG_UsingAlternate(ps);
      v13 = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
      BG_GetADSIdleLerpTime(v13, v12, &adsIdleLerpStartTime, &adsIdleLerpTime);
      v14 = ps->weapCommon.adsStartTime - (int)(float)(adsIdleLerpStartTime * -1000.0);
      ps->weapCommon.weaponIdleTime = v14;
      if ( useSecondTimer )
        ps->weapCommon.weaponIdleTime2 = v14;
      p_weapFlags = &ps->weapCommon.weapFlags;
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 0x20u);
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 0x21u);
      if ( BG_irand(0, 2, holdrand) )
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x20u);
      if ( BG_irand(0, 2, holdrand) )
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x21u);
    }
  }
}

/*
==============
PM_ResetWeaponHand
==============
*/
void PM_ResetWeaponHand(const BgWeaponMap *weaponMap, playerState_s *ps, PlayerHandIndex hand)
{
  __int64 v3; 

  v3 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11726, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Eu);
  ps->pm_flags.m_flags[0] &= ~0x4000u;
  G_DebugPlayerAnimScript_Print(ps->clientNum, "end weapon (idle)\n");
  ps->weapState[v3].weaponTime = 0;
  BG_SetWeaponDelay(weaponMap, ps, (const PlayerHandIndex)v3, 0, NULL);
  ps->weapState[v3].weaponState = 0;
  if ( ps->pm_type < 7 )
    PM_SetNextWeaponAnim(ps, WEAP_IDLE, (PlayerHandIndex)v3);
}

/*
==============
PM_ResetWeaponState
==============
*/
void PM_ResetWeaponState(BgWeaponMap *weaponMap, playerState_s *ps, const BgHandler *pmoveHandler)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19015, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  PM_ResetWeaponHand(weaponMap, ps, WEAPON_HAND_LEFT);
  PM_ResetWeaponHand(weaponMap, ps, WEAPON_HAND_DEFAULT);
  PM_BuildWeaponAnimArrays(weaponMap, ps, pmoveHandler);
}

/*
==============
PM_SendDetonateEvent
==============
*/
void PM_SendDetonateEvent(pmove_t *pm)
{
  playerState_s *ps; 
  unsigned int m_mapEntryId; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12499, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12499, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  m_mapEntryId = ps->weapCommon.offHandHandle.m_mapEntryId;
  if ( !m_mapEntryId )
    m_mapEntryId = ps->weapCommon.weaponHandle.m_mapEntryId;
  BG_AddPredictableEventToPlayerstate(EV_DETONATE, m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, ps);
}

/*
==============
PM_SetNextWeaponAnim
==============
*/
void PM_SetNextWeaponAnim(playerState_s *ps, WeaponAnimNumber anim, PlayerHandIndex hand)
{
  __int64 v3; 
  char *v6; 
  int v7; 
  int v8; 

  v3 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 448, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = (char *)ps + 80 * v3;
  v7 = *((_DWORD *)v6 + 330);
  v8 = *((_DWORD *)v6 + 331);
  *((_DWORD *)v6 + 330) = v8;
  if ( (v7 & 0xFFFFFF7F) != (anim & 0xFFFFFF7F) || (v7 & 0xFFFFFF7F) == (v8 & 0xFFFFFF7F) )
    LOBYTE(v7) = v8;
  *((_DWORD *)v6 + 331) = anim | ~(_BYTE)v7 & 0x80;
}

/*
==============
PM_SetReloadingState
==============
*/
void PM_SetReloadingState(pmove_t *pm, PlayerHandIndex hand)
{
  __int64 v2; 
  BgWeaponMap *weaponMap; 
  playerState_s *ps; 
  bool v6; 
  bool isDualWielding; 
  const Weapon *CurrentWeaponForPlayer; 
  int v9; 
  char *v10; 
  const WeaponDef *v11; 
  bool v12; 
  bool v13; 
  bool v14; 
  bool hasFastReloadOverride; 
  int outAmmoInClip; 

  v2 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5128, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  weaponMap = pm->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5131, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5134, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = BG_UsingAlternate(ps);
  isDualWielding = BG_PlayerDualWielding(ps) == 1;
  v14 = isDualWielding;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  hasFastReloadOverride = 0;
  outAmmoInClip = 0;
  if ( PM_Weapon_IsBulletClipEmpty(ps, CurrentWeaponForPlayer, v6, (PlayerHandIndex)v2, &outAmmoInClip) )
  {
    v9 = BG_ReloadEmptyTime(ps, pm->m_bgHandler, (const PlayerHandIndex)v2, CurrentWeaponForPlayer, v6, isDualWielding, &hasFastReloadOverride);
    if ( v9 != 0xFFFF )
    {
      if ( ps->pm_type < 7 )
        PM_SetNextWeaponAnim(ps, WEAP_RELOAD_EMPTY, (PlayerHandIndex)v2);
      v10 = (char *)ps + 80 * v2;
      *((_DWORD *)v10 + 335) = v9;
      PM_AddEvent(pm, EV_RELOAD_FROM_EMPTY);
      goto LABEL_26;
    }
    isDualWielding = v14;
  }
  v11 = BG_WeaponDef(CurrentWeaponForPlayer, v6);
  if ( v11 && v11->reloadTwoRound && BG_GetReloadType(CurrentWeaponForPlayer, v6) == RELOAD_TYPE_SEGMENTED )
    ps->weapState[v2].weapHandFlags |= 0x10u;
  if ( ps->pm_type < 7 )
    PM_SetNextWeaponAnim(ps, WEAP_RELOAD_FIRST, (PlayerHandIndex)v2);
  v10 = (char *)ps + 80 * v2;
  *((_DWORD *)v10 + 335) = BG_ReloadTime(ps, pm->m_bgHandler, (const PlayerHandIndex)v2, CurrentWeaponForPlayer, v6, isDualWielding, outAmmoInClip, &hasFastReloadOverride);
  PM_AddEvent(pm, EV_RELOAD);
  if ( BG_GetReloadType(CurrentWeaponForPlayer, v6) == RELOAD_TYPE_SEGMENTED && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    v12 = BG_UsingAlternate(ps);
    if ( !BG_WeaponIsClipOnly(CurrentWeaponForPlayer, v12) )
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RELOAD_LOOP, 0, 1, NULL);
  }
LABEL_26:
  if ( hasFastReloadOverride && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    v13 = BG_UsingAlternate(ps);
    if ( !BG_WeaponIsClipOnly(CurrentWeaponForPlayer, v13) )
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RELOADQUICK, 0, 1, NULL);
  }
  if ( BG_GetWeaponAltReloadAnimsEnabled(CurrentWeaponForPlayer, v6) )
    BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_ALT_RELOAD_ANIMS, 0, 1, NULL);
  *((_DWORD *)v10 + 339) = 18;
  PM_SetWeaponReloadAddAmmoDelay(weaponMap, ps, pm->m_bgHandler, (PlayerHandIndex)v2, 0);
}

/*
==============
PM_SetWeaponReloadAddAmmoDelay
==============
*/
void PM_SetWeaponReloadAddAmmoDelay(const BgWeaponMap *weaponMap, playerState_s *ps, const BgHandler *pmoveHandler, PlayerHandIndex hand, int isSecondRound)
{
  __int64 v5; 
  bool v9; 
  bool isDualWielding; 
  const Weapon *CurrentWeaponForPlayer; 
  char v12; 
  const Weapon *v13; 
  bool IsBulletClipEmpty; 
  int v15; 
  int started; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  char *v26; 
  bool hasFastReloadOverride; 

  v5 = hand;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4997, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4998, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = BG_UsingAlternate(ps);
  isDualWielding = BG_PlayerDualWielding(ps) == 1;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v12 = isSecondRound;
  v13 = CurrentWeaponForPlayer;
  if ( (_BYTE)isSecondRound && (ps->weapState[v5].weapHandFlags & 0x10) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5007, ASSERT_TYPE_ASSERT, "( (ps->weapState[hand].weapHandFlags & (1<<4)) ) == ( 0 )", "%s == %s\n\t%i, %i", "(ps->weapState[hand].weapHandFlags & PWHF_RELOAD_SECOND_ROUND_QUEUED)", "0", ps->weapState[v5].weapHandFlags & 0x10, 0i64) )
    __debugbreak();
  isSecondRound = 0;
  IsBulletClipEmpty = PM_Weapon_IsBulletClipEmpty(ps, v13, v9, (PlayerHandIndex)v5, &isSecondRound);
  hasFastReloadOverride = 0;
  v26 = (char *)ps + 80 * v5;
  if ( *((_DWORD *)v26 + 339) != 19 )
  {
    if ( IsBulletClipEmpty )
    {
      v19 = BG_ReloadEmptyTime(ps, pmoveHandler, (const PlayerHandIndex)v5, v13, v9, isDualWielding, &hasFastReloadOverride);
      v20 = isSecondRound;
      v18 = v19;
      v21 = BG_ReloadEmptyAddTime(ps, v13, v9, isDualWielding, isSecondRound, &hasFastReloadOverride);
      if ( v21 )
      {
LABEL_21:
        v17 = v18;
        if ( v21 && v21 < v18 )
          v17 = v21;
        goto LABEL_24;
      }
    }
    else
    {
      v20 = isSecondRound;
      v18 = BG_ReloadTime(ps, pmoveHandler, (const PlayerHandIndex)v5, v13, v9, isDualWielding, isSecondRound, &hasFastReloadOverride);
    }
    v21 = BG_ReloadAddTime(ps, v13, v9, isDualWielding, v20, v12, &hasFastReloadOverride);
    goto LABEL_21;
  }
  v15 = isSecondRound;
  started = BG_ReloadStartAddTime(ps, v13, v9, isDualWielding, isSecondRound, v12, &hasFastReloadOverride);
  if ( !started )
    return;
  v17 = BG_ReloadStartTime(ps, pmoveHandler, (const PlayerHandIndex)v5, v13, v9, isDualWielding, v15, &hasFastReloadOverride);
  v18 = v17;
  if ( started < v17 )
    v17 = started;
LABEL_24:
  if ( v17 )
  {
    if ( v12 && v18 > 0 )
    {
      v22 = v18 - *((_DWORD *)v26 + 335);
      v23 = 0;
      if ( v22 > 0 )
        v23 = v22;
      v24 = v17 - v23;
      v17 = 0;
      if ( v24 > 0 )
        v17 = v24;
    }
    BG_SetWeaponDelay(weaponMap, ps, (const PlayerHandIndex)v5, v17, "Reload Time");
  }
}

/*
==============
PM_StartWeaponAnim
==============
*/
void PM_StartWeaponAnim(playerState_s *ps, WeaponAnimNumber anim, PlayerHandIndex hand)
{
  if ( ps->pm_type < 7 )
    PM_SetNextWeaponAnim(ps, anim, hand);
}

/*
==============
PM_StartWeaponAnimBothHands
==============
*/
void PM_StartWeaponAnimBothHands(playerState_s *ps, WeaponAnimNumber anim)
{
  if ( ps->pm_type < 7 )
  {
    PM_SetNextWeaponAnim(ps, anim, WEAPON_HAND_DEFAULT);
    if ( BG_PlayerDualWielding(ps) || BG_HasLadderHand(ps) )
      PM_SetNextWeaponAnim(ps, anim, WEAPON_HAND_LEFT);
    else
      *(_QWORD *)&ps->weapState[1].prevWeapAnim = (unsigned int)ps->weapState[1].weapAnim;
  }
}

/*
==============
PM_UpdateADSFrac
==============
*/
void PM_UpdateADSFrac(const pmove_t *const pm, const Weapon *weapon, const bool isAlternate, const bool adsIn, float frameTimeMs)
{
  playerState_s *ps; 
  bool fWeaponPosFracIn; 
  float fWeaponPosFrac; 
  float ADSFracTargetVelocity; 
  int fWeaponPosFracChangeFracVel; 
  BgWeaponMap *weaponMap; 
  double v15; 
  int v16; 
  float v17; 
  __int128 v18; 
  bool v21; 
  const dvar_t *v22; 
  double v23; 
  float outAdsInToOutAccelSec[4]; 
  float outAdsOutToInAccelSec; 
  char v26; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1733, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1733, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  fWeaponPosFracIn = ps->weapCommon.fWeaponPosFracIn;
  fWeaponPosFrac = ps->weapCommon.fWeaponPosFrac;
  ADSFracTargetVelocity = PM_GetADSFracTargetVelocity(pm, weapon, isAlternate, fWeaponPosFracIn);
  if ( ps->weapCommon.fWeaponPosFracMomentum )
  {
    fWeaponPosFracChangeFracVel = ps->weapCommon.fWeaponPosFracChangeFracVel;
    weaponMap = pm->weaponMap;
    v26 = 0;
    v15 = MSG_UnpackSignedFloat(fWeaponPosFracChangeFracVel, 20.0, 9u);
    v16 = ps->commandTime - ps->weapCommon.fWeaponPosFracChangeTime;
    BG_GetADSAccel(weaponMap, ps, weapon, isAlternate, &outAdsOutToInAccelSec, outAdsInToOutAccelSec);
    if ( ADSFracTargetVelocity <= *(float *)&v15 )
      LODWORD(v17) = LODWORD(outAdsInToOutAccelSec[0]) ^ _xmm;
    else
      v17 = outAdsOutToInAccelSec;
    v18 = 0i64;
    *(float *)&v18 = (float)((float)((float)v16 * 0.001) * v17) + *(float *)&v15;
    _XMM3 = v18;
    if ( ADSFracTargetVelocity <= *(float *)&v15 )
      __asm { vmaxss  xmm0, xmm3, xmm6 }
    else
      __asm { vminss  xmm0, xmm3, xmm6 }
    v21 = *(float *)&_XMM0 == ADSFracTargetVelocity;
    ADSFracTargetVelocity = *(float *)&_XMM0;
    if ( v21 )
    {
      v26 = 1;
      ps->weapCommon.fWeaponPosFracMomentum = 0;
    }
    else
    {
      v26 = 0;
    }
  }
  if ( fWeaponPosFracIn != adsIn )
  {
    ps->weapCommon.fWeaponPosFracChangeTime = ps->commandTime;
    ps->weapCommon.fWeaponPosFracIn = adsIn;
    I_fclamp(ADSFracTargetVelocity, -20.0, 20.0);
    BG_SetADSVelocity(ps, ADSFracTargetVelocity);
  }
  if ( fWeaponPosFracIn != adsIn && fWeaponPosFrac > 0.0 && fWeaponPosFrac < 1.0 )
  {
    v22 = DCONST_DVARBOOL_bg_adsMomentumEnabled;
    if ( !DCONST_DVARBOOL_bg_adsMomentumEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_adsMomentumEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.enabled )
      ps->weapCommon.fWeaponPosFracMomentum = 1;
  }
  v23 = I_fclamp((float)((float)(frameTimeMs * 0.001) * ADSFracTargetVelocity) + fWeaponPosFrac, 0.0, 1.0);
  v21 = !ps->weapCommon.fWeaponPosFracMomentum;
  ps->weapCommon.fWeaponPosFrac = *(float *)&v23;
  if ( !v21 && (*(float *)&v23 <= 0.0 || *(float *)&v23 >= 1.0) )
    ps->weapCommon.fWeaponPosFracMomentum = 0;
}

/*
==============
PM_UpdateAimDownSightFlag
==============
*/
void PM_UpdateAimDownSightFlag(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  const Weapon *ViewmodelWeapon; 
  bool v7; 
  bool v8; 
  int weaponState; 
  char v10; 
  bool v11; 
  bool IsAdsAllowed; 
  unsigned __int64 buttons; 
  bool v14; 
  int v15; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  unsigned __int64 v18; 
  playerState_s *v19; 
  bool IsSprinting; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *v21; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1181, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1181, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->pm_flags.m_flags[0] &= ~0x200u;
  p_pm_flags = &ps->pm_flags;
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
  v7 = BG_UsingAlternate(ps);
  v8 = v7;
  weaponState = ps->weapState[0].weaponState;
  v10 = (pm->cmd.buttons & 0x200) != 0;
  if ( weaponState == 3 || weaponState == 10 )
    v10 = 1;
  if ( BG_IsADSFireOnly(ViewmodelWeapon, v7) )
  {
    v11 = ps->weapState[0].weaponDelay && ps->weapState[0].weaponState == 16 || ps->weapState[1].weaponDelay && ps->weapState[1].weaponState == 16;
    v10 |= v11;
  }
  if ( v10 )
  {
    IsAdsAllowed = PM_CalcIsAdsAllowed(pm);
    buttons = pm->cmd.buttons;
    v14 = IsAdsAllowed;
    if ( (buttons & 0x200000) != 0 && (buttons & 2) != 0 && (pm->oldcmd.buttons & 2) == 0 && !BG_HasHoldBreathAbility(pm->weaponMap, ps) && !BG_CanHybridToggle(ps, ViewmodelWeapon, v8) && !BG_HasVariableZoom(pm->weaponMap, ps, ViewmodelWeapon, v8) && (!Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) || !BG_IsThirdPersonMode(pm->weaponMap, ps) || ps->weapCommon.fWeaponPosFrac == 0.0) )
    {
      PM_ExitAimDownSight(pm);
      goto LABEL_48;
    }
    if ( v14 )
    {
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) || BG_UsingSniperScope(pm->weaponMap, ps) || BG_IsPlayerOnRemoteTurret(ps) )
      {
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 9u);
        if ( GameModeFlagValues::ms_mpValue != ACTIVE || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x22u) || Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x29u) )
          goto LABEL_48;
        v15 = 1252;
      }
      else
      {
        if ( (pm->oldcmd.buttons & 0x200) != 0 && (pm->cmd.forwardmove || pm->cmd.rightmove) )
          goto LABEL_48;
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 9u);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0xEu);
        if ( GameModeFlagValues::ms_mpValue != ACTIVE || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x22u) || Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x29u) )
          goto LABEL_48;
        v15 = 1246;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", v15, ASSERT_TYPE_ASSERT, "(BG_IsCharacterPlayer( ps ))", (const char *)&queryFormat, "BG_IsCharacterPlayer( ps )") )
        __debugbreak();
    }
  }
LABEL_48:
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u) )
    PM_Weapon_CheckForPendingAltModeChange(pm, pml);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    CharacterInfo = BG_GetCharacterInfo(ActiveStatics, ps->clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1265, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    v18 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 9u);
    BG_SetConditionValue(CharacterInfo, 6, v18);
  }
  v19 = pm->ps;
  IsSprinting = PM_IsSprinting(v19);
  v21 = &v19->pm_flags;
  if ( IsSprinting )
  {
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(v21, ACTIVE, 0x2Du);
  }
  else if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(v21, ACTIVE, 9u) )
  {
    v19->pm_flags.m_flags[1] &= ~0x2000u;
  }
}

/*
==============
PM_UpdateAimDownSightLerp
==============
*/
void PM_UpdateAimDownSightLerp(pmove_t *pm, int msec)
{
  playerState_s *ps; 
  playerState_s *v5; 
  int commandTime; 
  double v7; 
  double v8; 
  Weapon *ViewmodelWeapon; 
  bool v10; 
  float v11; 
  const dvar_t *v12; 
  BgWeaponMap *weaponMap; 
  const Weapon *v14; 
  float v15; 
  double v16; 
  bool v17; 
  bool v18; 
  bool IsADSBlockedByReload; 
  bool v20; 
  int weaponState; 
  bool v22; 
  bool v23; 
  bool v24; 
  int v25; 
  BOOL v26; 
  const char *v27; 
  const dvar_t *v28; 
  int Int_Internal_DebugName; 
  bool v30; 
  int adsDelayTime; 
  int v32; 
  bool v33; 
  Weapon *v34; 
  double Float_Internal_DebugName; 
  playerState_s *v36; 
  const dvar_t *v37; 
  float value; 
  float fWeaponPosFrac; 
  const Weapon *v40; 
  const WeaponDef *v41; 
  float turretADSTime; 
  const dvar_t *v43; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  float v45; 
  float v46; 
  double v47; 
  float outAdsTransInSpeedMs; 
  bool v53; 
  float outAdsTransOutSpeedMs; 
  Weapon *weapon; 

  Sys_ProfBeginNamedEvent(0xFF808080, "PM_UpdateAimDownSightLerp");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1838, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1838, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = pm->ps;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1813, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  commandTime = v5->commandTime;
  if ( PM_IsADSBlockedByReload(pm) )
  {
    if ( !v5->weapCommon.lastReloadStateChangeWasReloading )
    {
      v7 = BG_WeaponReloadingFraction(pm->weaponMap, v5);
      BG_SetLastReloadFraction(v5, *(float *)&v7);
      v5->weapCommon.lastReloadStateChangeWasReloading = 1;
LABEL_15:
      v5->weapCommon.lastReloadStateChangeTime = commandTime;
    }
  }
  else if ( v5->weapCommon.lastReloadStateChangeWasReloading )
  {
    v8 = BG_WeaponReloadingFraction(pm->weaponMap, v5);
    BG_SetLastReloadFraction(v5, *(float *)&v8);
    v5->weapCommon.lastReloadStateChangeWasReloading = 0;
    goto LABEL_15;
  }
  ViewmodelWeapon = (Weapon *)BG_GetViewmodelWeapon(pm->weaponMap, ps);
  weapon = ViewmodelWeapon;
  v10 = BG_UsingAlternate(ps);
  v53 = v10;
  v11 = (float)msec;
  ps->weapCommon.fPreviousWeaponPosFrac = ps->weapCommon.fWeaponPosFrac;
  v12 = DCONST_DVARBOOL_player_scopeExitOnDamage;
  if ( !DCONST_DVARBOOL_player_scopeExitOnDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_scopeExitOnDamage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled && ps->damageCount && BG_GetOverlay(ViewmodelWeapon, v10)->reticle )
  {
    PM_ExitAimDownSight(pm);
    ps->weapCommon.fWeaponPosFrac = 0.0;
    BG_WeaponResetADSReloadFraction(ps);
    *(_WORD *)&ps->weapCommon.fWeaponPosFracMomentum = 0;
    ps->weapCommon.fWeaponPosFracChangeTime = ps->commandTime;
    BG_SetADSVelocity(ps, 0.0);
LABEL_110:
    ps->weapCommon.adsDelayTime = 0;
    goto LABEL_111;
  }
  if ( BG_IsTurretActive(ps) || BG_IsPlayerOnRemoteTurret(ps) )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
    {
      v40 = pm->m_bgHandler->PlayerTurret(pm->m_bgHandler, ps);
      if ( !v40->weaponIdx )
      {
LABEL_92:
        ps->weapCommon.fWeaponPosFrac = 0.0;
LABEL_109:
        BG_WeaponResetADSReloadFraction(ps);
        goto LABEL_110;
      }
      v41 = BG_WeaponDef(v40, 0);
      if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1886, ASSERT_TYPE_ASSERT, "(weapDefTurret)", (const char *)&queryFormat, "weapDefTurret") )
        __debugbreak();
      turretADSTime = v41->turretADSTime;
    }
    else
    {
      v43 = DVARFLT_turret_adsTime;
      if ( !DVARFLT_turret_adsTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turret_adsTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v43);
      turretADSTime = v43->current.value;
    }
    p_pm_flags = &ps->pm_flags;
    if ( turretADSTime <= 0.0 )
    {
      _XMM0 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 9u);
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_1_0);
      __asm { vblendvps xmm0, xmm1, xmm6, xmm2 }
      ps->weapCommon.fWeaponPosFrac = *(float *)&_XMM0;
    }
    else
    {
      v45 = 1.0 / turretADSTime;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 9u) )
        v46 = (float)(v45 * v11) + ps->weapCommon.fWeaponPosFrac;
      else
        v46 = ps->weapCommon.fWeaponPosFrac - (float)(v45 * v11);
      ps->weapCommon.fWeaponPosFrac = v46;
      v47 = I_fclamp(v46, 0.0, 1.0);
      ps->weapCommon.fWeaponPosFrac = *(float *)&v47;
    }
    goto LABEL_109;
  }
  weaponMap = pm->weaponMap;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && BG_UsingAlternate(ps) )
  {
    v14 = BG_GetViewmodelWeapon(weaponMap, ps);
    if ( BG_IsSwimWeapon(v14) && (unsigned int)(ps->weapState[0].weaponState - 22) > 2 && ps->weapCommon.fAdditivePosFrac > 0.0 )
    {
      BG_GetADSTransTimes(weaponMap, ps, ViewmodelWeapon, 1, &outAdsTransInSpeedMs, &outAdsTransOutSpeedMs);
      v15 = (float)((float)msec * outAdsTransInSpeedMs) + ps->weapCommon.fAdditivePosFrac;
      ps->weapCommon.fAdditivePosFrac = v15;
      v16 = I_fclamp(v15, 0.0, 1.0);
      ps->weapCommon.fAdditivePosFrac = *(float *)&v16;
    }
  }
  v17 = PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, pm->m_bgHandler);
  if ( !BG_IsAimDownSight(ViewmodelWeapon, v10) || (unsigned int)(ps->weapState[0].weaponState - 22) <= 2 && !v17 )
    goto LABEL_92;
  v18 = BG_ADSReloadEnabled(pm->weaponMap, ps, ViewmodelWeapon, v10);
  IsADSBlockedByReload = PM_IsADSBlockedByReload(pm);
  v20 = BG_RechamberWhileADS(ViewmodelWeapon, v10);
  weaponState = ps->weapState[0].weaponState;
  v22 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u);
  v23 = (v18 || !IsADSBlockedByReload) && (v20 || weaponState != 17) && PM_CalcIsAdsAllowed(pm);
  v24 = v22 && v23;
  v25 = ps->weapState[0].weaponState;
  v26 = (unsigned int)(v25 - 7) <= 5 || v25 == 50;
  if ( (pm->cmd.buttons & 0x8000000000000i64) != 0 )
  {
    v27 = "player_adsExitDelayGamepad";
    v28 = DCONST_DVARMPSPINT_player_adsExitDelayGamepad;
  }
  else
  {
    v27 = "player_adsExitDelayMouse";
    v28 = DCONST_DVARMPSPINT_player_adsExitDelayMouse;
  }
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(v28, v27);
  if ( ps->weapCommon.fWeaponPosFrac < 1.0 || v24 || v26 || Int_Internal_DebugName <= 0 )
    goto LABEL_68;
  v30 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && (pm->cmd.forwardmove || pm->cmd.rightmove);
  adsDelayTime = ps->weapCommon.adsDelayTime;
  if ( !adsDelayTime && (pm->oldcmd.buttons & 0x200) != 0 && v23 && !v30 )
  {
    adsDelayTime = Int_Internal_DebugName + pm->cmd.serverTime;
    ps->weapCommon.adsDelayTime = adsDelayTime;
  }
  if ( adsDelayTime <= pm->cmd.serverTime )
LABEL_68:
    ps->weapCommon.adsDelayTime = 0;
  else
    v24 = 1;
  v32 = ps->weapState[0].weaponState;
  v33 = v53;
  v34 = weapon;
  if ( v32 != 3 && v32 != 10 )
    PM_UpdateADSFrac(pm, weapon, v53, v24, v11);
  if ( 1.0 == ps->weapCommon.fWeaponPosFrac )
  {
    if ( !ps->weapCommon.adsStartTime )
      ps->weapCommon.adsStartTime = pm->cmd.serverTime;
  }
  else if ( v24 )
  {
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_player_adsResetFraction, "player_adsResetFraction");
    if ( *(float *)&Float_Internal_DebugName >= ps->weapCommon.fWeaponPosFrac )
    {
      ps->weapCommon.adsStartTime = 0;
      if ( !BG_UsesContinousAdsIdleTransiton(v34, v33) )
        *(_QWORD *)&ps->weapCommon.weaponIdleTime = 0i64;
    }
  }
  v36 = pm->ps;
  if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1560, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v37 = DCONST_DVARFLT_player_adsRecoilShotCountResetFraction;
  if ( !DCONST_DVARFLT_player_adsRecoilShotCountResetFraction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_adsRecoilShotCountResetFraction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  value = v37->current.value;
  if ( value > 0.0 )
  {
    fWeaponPosFrac = v36->weapCommon.fWeaponPosFrac;
    if ( fWeaponPosFrac > 0.0 )
    {
      if ( fWeaponPosFrac >= value && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v36->weapCommon.weapFlags, ACTIVE, 0x2Cu) )
      {
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&v36->weapCommon.weapFlags, ACTIVE, 0x2Cu);
        v36->weapCommon.adsRecoilShotCountOffset = v36->weapState[0].weaponShotCount;
      }
    }
    else
    {
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&v36->weapCommon.weapFlags, ACTIVE, 0x2Cu);
    }
  }
  else
  {
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&v36->weapCommon.weapFlags, ACTIVE, 0x2Cu);
    v36->weapCommon.adsRecoilShotCountOffset = 0;
  }
LABEL_111:
  BgScopedWeaponOffsetsAdsUpdate(pm, NULL);
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_UpdateHoldBreath
==============
*/
void PM_UpdateHoldBreath(pmove_t *pm, int msec, float frametime)
{
  const dvar_t *v3; 
  playerState_s *ps; 
  int v8; 
  const dvar_t *v9; 
  int v10; 
  float v11; 
  const dvar_t *v12; 
  int v13; 
  float v14; 
  bool v15; 
  int holdBreathTimer; 
  int v17; 
  const dvar_t *v18; 
  float v19; 
  float value; 
  const dvar_t *v21; 
  float v22; 
  const Weapon *ViewmodelWeapon; 
  bool v24; 
  const dvar_t *v25; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  double Float_Internal_DebugName; 
  double v33; 
  AdvancedIdleSettings outAdvancedIdleSettings; 

  v3 = DCONST_DVARBOOL_player_scope_prototype;
  if ( !DCONST_DVARBOOL_player_scope_prototype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_scope_prototype") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
  {
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2071, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    ps = pm->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2071, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v8 = BG_HoldBreathMaxTime(ps);
    v9 = DCONST_DVARFLT_player_breath_gasp_time;
    v10 = v8;
    if ( !DCONST_DVARFLT_player_breath_gasp_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breath_gasp_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    v11 = 1000.0 * v9->current.value;
    v12 = DCONST_DVARFLT_player_breath_max_recovery_time;
    v13 = (int)v11;
    if ( !DCONST_DVARFLT_player_breath_max_recovery_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breath_max_recovery_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v14 = 1000.0 * v12->current.value;
    if ( v10 > 0 )
    {
      if ( 1.0 == ps->weapCommon.fWeaponPosFrac && (pm->cmd.buttons & 0x800) != 0 && BG_HasHoldBreathAbility(pm->weaponMap, ps) )
      {
        if ( !BG_HoldingBreath(ps) )
          GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 2u);
      }
      else
      {
        if ( (float)ps->holdBreathTimer > v14 )
          ps->holdBreathTimer = (int)v14;
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 2u);
      }
      v15 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 2u);
      holdBreathTimer = ps->holdBreathTimer;
      if ( v15 )
        v17 = msec + holdBreathTimer;
      else
        v17 = holdBreathTimer - msec;
      if ( v17 < 0 )
        v17 = 0;
      ps->holdBreathTimer = v17;
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 2u) && ps->holdBreathTimer > v10 )
      {
        ps->holdBreathTimer = v13 + v10;
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 2u);
      }
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 2u) )
      {
        v18 = DCONST_DVARMPSPFLT_player_breath_hold_lerp;
        v19 = 0.0;
        if ( !DCONST_DVARMPSPFLT_player_breath_hold_lerp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breath_hold_lerp") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v18);
        value = v18->current.value;
      }
      else
      {
        v21 = DCONST_DVARFLT_player_breath_gasp_scale;
        v22 = (float)ps->holdBreathTimer / (float)(v13 + v10);
        if ( !DCONST_DVARFLT_player_breath_gasp_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breath_gasp_scale") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v21);
        ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
        v24 = BG_UsingAlternate(ps);
        BG_GetAdvancedIdleSettings(ps->perks, ViewmodelWeapon, v24, &outAdvancedIdleSettings);
        v25 = DCONST_DVARFLT_player_breath_gasp_lerp;
        _XMM0 = outAdvancedIdleSettings.useAdvancedIdleSettings;
        __asm { vpcmpeqd xmm2, xmm0, xmm1 }
        _XMM1 = LODWORD(outAdvancedIdleSettings.breathGaspScaleOverride);
        __asm { vblendvps xmm0, xmm1, xmm6, xmm2 }
        v19 = (float)((float)(*(float *)&_XMM0 - 1.0) * v22) + 1.0;
        if ( !DCONST_DVARFLT_player_breath_gasp_lerp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breath_gasp_lerp") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v25);
        value = v25->current.value;
        v30 = DVARFLT_perk_fastSnipeScale;
        if ( !DVARFLT_perk_fastSnipeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastSnipeScale") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v30);
        if ( v30->current.value <= 0.0 )
        {
          v31 = DVARFLT_perk_fastSnipeScale;
          if ( !DVARFLT_perk_fastSnipeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastSnipeScale") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v31);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2137, ASSERT_TYPE_ASSERT, "( ( Dvar_GetFloat_Internal_DebugName( DVARFLT_perk_fastSnipeScale, \"perk_fastSnipeScale\" ) > 0.0f ) )", "( Dvar_GetFloat_Internal_DebugName( DVARFLT_perk_fastSnipeScale, \"perk_fastSnipeScale\" ) ) = %g", v31->current.value) )
            __debugbreak();
        }
        if ( BG_HasPerk(&ps->perks, 0x29u) )
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_fastSnipeScale, "perk_fastSnipeScale");
          value = value / *(float *)&Float_Internal_DebugName;
        }
      }
      v33 = DiffTrack((float)((float)(v19 - 1.0) * ps->weapCommon.fWeaponPosFrac) + 1.0, ps->holdBreathScale, value, frametime);
      ps->holdBreathScale = *(float *)&v33;
    }
    else
    {
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 2u);
      *(_QWORD *)&ps->holdBreathScale = 1065353216i64;
    }
  }
}

/*
==============
PM_UpdateHybridToggle
==============
*/
void PM_UpdateHybridToggle(pmove_t *pm)
{
  playerState_s *ps; 
  const Weapon *ViewmodelWeapon; 
  bool v4; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 
  bool v6; 
  bool v7; 
  PlayerEquippedWeaponState *v8; 
  int v9; 
  const char *v10; 
  int weaponDelay; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2292, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2292, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, pm->ps);
  v4 = BG_UsingAlternate(ps);
  if ( BG_CanHybridToggle(ps, ViewmodelWeapon, v4) )
  {
    if ( (unsigned int)(ps->weapState[0].weaponState - 76) > 1 && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x38u) )
    {
      ps->pm_flags.m_flags[1] &= ~0x1000000u;
      EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(pm->weaponMap, ps, ViewmodelWeapon);
      EquippedWeaponStateNonConst->hybridScope = !EquippedWeaponStateNonConst->hybridScope;
    }
    if ( BG_HybridToggleIsAllowed(pm->weaponMap, ps, pm->m_bgHandler) )
    {
      v6 = BG_UsingAlternate(ps);
      v7 = BG_PlayerDualWielding(ps) == 1;
      if ( (pm->cmd.buttons & 0x200000000i64) != 0 && (pm->oldcmd.buttons & 0x200000000i64) == 0 )
      {
        v8 = BG_GetEquippedWeaponStateNonConst(pm->weaponMap, pm->ps, ViewmodelWeapon);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0x38u);
        if ( v8->hybridScope )
        {
          ps->weapState[0].weaponState = 77;
          ps->weapState[0].weaponTime = BG_ScopeToggleOffTime(ps, ViewmodelWeapon, v6, v7);
          v9 = BG_ScopeToggleOffInterruptTime(ps, ViewmodelWeapon, v6, v7);
          v10 = "Scope Toggle Off Interrupt";
        }
        else
        {
          ps->weapState[0].weaponState = 76;
          ps->weapState[0].weaponTime = BG_ScopeToggleOnTime(ps, ViewmodelWeapon, v6, v7);
          v9 = BG_ScopeToggleOnInterruptTime(ps, ViewmodelWeapon, v6, v7);
          v10 = "Scope Toggle On Interrupt";
        }
        BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, v9, v10);
        weaponDelay = ps->weapState[0].weaponDelay;
        if ( weaponDelay <= 0 || weaponDelay > ps->weapState[0].weaponTime )
          BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, ps->weapState[0].weaponTime, "Scope Toggle Interrupt Fallback Timer");
        if ( (ps->weapState[0].weapAnim & 0xFFFFFF7F) != 0 && ps->pm_type < 7 )
          PM_SetNextWeaponAnim(ps, WEAP_IDLE, WEAPON_HAND_DEFAULT);
      }
    }
  }
  else
  {
    ps->pm_flags.m_flags[1] &= ~0x1000000u;
  }
}

/*
==============
PM_UpdateLeftTriggerAltFireMode
==============
*/
void PM_UpdateLeftTriggerAltFireMode(pmove_t *pm, const PlayerHandIndex hand)
{
  __int64 v2; 
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  FireButtonCheckResult v6; 
  bool v7; 
  bool v8; 
  bool v9; 
  bool v10; 
  int weaponState; 
  QueuedActionState v12; 
  bool buttonIsPressedNow; 

  v2 = hand;
  if ( !pm )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1490, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1493, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
  }
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1493, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  if ( !BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) )
    return;
  v6 = PM_Weapon_CheckForFireOrChargeButton(pm, (PlayerHandIndex)v2, 0, 0, &buttonIsPressedNow);
  v7 = v6 == HALF_HALF;
  v8 = v6 == HALF;
  if ( BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) )
  {
    if ( !ps )
      goto LABEL_16;
    v9 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Du);
  }
  else
  {
    v9 = BG_UsingAlternate(ps);
  }
  if ( v9 )
  {
    v10 = !v8;
    goto LABEL_17;
  }
LABEL_16:
  v10 = !v7;
LABEL_17:
  if ( v10 )
    return;
  weaponState = ps->weapState[v2].weaponState;
  if ( (unsigned int)(weaponState - 16) > 1 && (unsigned int)(weaponState - 22) > 2 )
  {
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Cu);
    return;
  }
  if ( !BG_IsChargeShotWeapon(CurrentWeaponForPlayer, v7) )
  {
    if ( v8 )
    {
      v12 = QAS_STATE_FIRE;
    }
    else
    {
      if ( !v7 )
        return;
      v12 = QAS_STATE_FIRE_ALT;
    }
    BG_SetQAS(ps, (PlayerHandIndex)v2, v12);
  }
}

/*
==============
PM_UpdateMeleeAnimSet
==============
*/
void PM_UpdateMeleeAnimSet(pmove_t *pm, unsigned int *holdrand, bool weaponChange, bool isUsingAlternateMelee)
{
  playerState_s *ps; 
  const Weapon *ViewmodelWeapon; 
  bool v9; 
  bool v10; 
  bool IsMeleeComboWeapon; 
  int altMeleeVariation; 
  int WeaponMeleeAnimProperties; 
  int v14; 
  int meleeVariation; 
  MeleeAnimType outAnimType[18]; 
  unsigned __int8 outAnimSets; 
  unsigned int *holdranda; 
  bool outIsRandomized; 

  holdranda = holdrand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 646, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 646, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
  v9 = BG_UsingAlternate(ps);
  v10 = BG_PlayerDualWielding(ps) == 1;
  IsMeleeComboWeapon = BG_IsMeleeComboWeapon(ViewmodelWeapon);
  if ( isUsingAlternateMelee )
    altMeleeVariation = ps->weapCommon.altMeleeVariation;
  else
    altMeleeVariation = ps->weapCommon.meleeVariation;
  WeaponMeleeAnimProperties = BG_GetWeaponMeleeAnimProperties(ps, ViewmodelWeapon, v9, v10, isUsingAlternateMelee, &outIsRandomized, outAnimType, &outAnimSets);
  v14 = PM_CalcRandomMeleeIndex(WeaponMeleeAnimProperties, outAnimSets, altMeleeVariation, outIsRandomized, weaponChange, IsMeleeComboWeapon, holdranda);
  meleeVariation = v14;
  if ( isUsingAlternateMelee )
  {
    if ( !weaponChange )
      meleeVariation = ps->weapCommon.altMeleeVariation;
    ps->weapCommon.altMeleeVariationPrev = meleeVariation;
    ps->weapCommon.altMeleeVariation = v14;
  }
  else
  {
    if ( !weaponChange )
      meleeVariation = ps->weapCommon.meleeVariation;
    ps->weapCommon.meleeVariationPrev = meleeVariation;
    ps->weapCommon.meleeVariation = v14;
  }
  ps->weapCommon.isMeleeVariationAlt = isUsingAlternateMelee;
}

/*
==============
PM_UpdateMovementAdsFlag
==============
*/
void PM_UpdateMovementAdsFlag(pmove_t *pm)
{
  playerState_s *ps; 
  bool IsSprinting; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1161, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  IsSprinting = PM_IsSprinting(ps);
  p_pm_flags = &ps->pm_flags;
  if ( IsSprinting )
  {
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(p_pm_flags, ACTIVE, 0x2Du);
  }
  else if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 9u) )
  {
    ps->pm_flags.m_flags[1] &= ~0x2000u;
  }
}

/*
==============
PM_UpdateOffHandThrow
==============
*/
char PM_UpdateOffHandThrow(pmove_t *pm, pml_t *pml, playerState_s *ps)
{
  int msec; 
  Weapon *UsedOffHandWeapon; 
  WeaponDef *v8; 
  int grenadeTimeLeft; 
  bool bCookOffHold; 
  int v12; 
  unsigned int m_mapEntryId; 
  __int64 v14; 
  Weapon r_weapon; 

  msec = pml->msec;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u) )
    goto LABEL_7;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14429, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (ps->weapCommon.offhandGestureFlags & 1) != 0 )
LABEL_7:
    UsedOffHandWeapon = (Weapon *)PM_Weapon_GetUsedOffHandWeapon(pm->weaponMap, ps);
  else
    UsedOffHandWeapon = (Weapon *)BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  r_weapon = *UsedOffHandWeapon;
  if ( !r_weapon.weaponIdx )
    return 0;
  if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v14) = r_weapon.weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v14, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  if ( !bg_weaponDefs[r_weapon.weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v8 = bg_weaponDefs[r_weapon.weaponIdx];
  if ( !BG_IsOffhandWeaponType(&r_weapon, 0) )
    return 0;
  grenadeTimeLeft = ps->grenadeTimeLeft;
  if ( !grenadeTimeLeft )
    return 0;
  bCookOffHold = v8->bCookOffHold;
  if ( grenadeTimeLeft < 0 )
  {
    if ( bCookOffHold )
    {
      if ( BG_IsUsingOffhandGestureWeapon(ps) )
        BG_OffhandGestureWeaponEnd(pm->weaponMap, ps, pm->m_bgHandler, pm->cmd.serverTime, 0);
      else
        PM_Weapon_OffHandEnd(pm, pml, ps);
      return 1;
    }
    goto LABEL_23;
  }
  if ( bCookOffHold && BG_IsUsingOffhandGestureWeapon(ps) && (ps->weapCommon.offhandGestureFlags & 0x10) != 0 )
    return 0;
  if ( v8->bCookOffHold || BG_ThrowingBackGrenade(ps) )
  {
    if ( BG_GetWeaponFieldTime(ps, &r_weapon, 0, 0, 188i64) )
      v12 = BG_WeaponFuseTime(&r_weapon, 0);
    else
      v12 = 0;
    if ( ps->grenadeTimeLeft - msec > v12 )
      v12 = ps->grenadeTimeLeft - msec;
    ps->grenadeTimeLeft = v12;
  }
  else
  {
    v12 = ps->grenadeTimeLeft;
  }
  if ( v12 > 0 )
    return 0;
  if ( BG_GetOffhandOverCookIsNotLethal(&r_weapon, 0) )
  {
    PM_AddEvent(pm, EV_OFFHAND_OVERCOOK_NOTIFY);
LABEL_23:
    ps->grenadeTimeLeft = 0;
    return 0;
  }
  m_mapEntryId = ps->weapCommon.offHandHandle.m_mapEntryId;
  ps->grenadeTimeLeft = -1;
  BG_AddPredictableEventToPlayerstate(EV_GRENADE_SUICIDE, m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, ps);
  if ( !BG_ThrowingBackGrenade(ps) && !BG_OffhandDoesNotConsumeAmmo(&r_weapon, 0) && BG_GetAmmoInClipForWeapon(ps, &r_weapon, 0, WEAPON_HAND_DEFAULT) > 0 )
    PM_WeaponUseAmmo(ps, &r_weapon, 0, 1, WEAPON_HAND_DEFAULT);
  return 1;
}

/*
==============
PM_UpdateScopeDrift
==============
*/
void PM_UpdateScopeDrift(pmove_t *pm, int msec, float frametime)
{
  const dvar_t *v3; 
  playerState_s *ps; 
  bool v7; 
  double ScopeDriftSteadyFactor; 
  float v9; 
  double ScopeDriftUnsteadyFactor; 
  float v11; 
  double ScopeDriftDelay; 
  int v13; 
  double ScopeDriftLerpInTime; 
  unsigned int v15; 
  int v16; 
  double ScopeDriftSteadyTime; 
  int v18; 
  double ScopeDriftLerpOutTime; 
  int v20; 
  int holdBreathTimer; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  Weapon r_weapon; 

  v3 = DCONST_DVARBOOL_player_scope_prototype;
  if ( !DCONST_DVARBOOL_player_scope_prototype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_scope_prototype") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2174, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    ps = pm->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2174, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( 1.0 != ps->weapCommon.fWeaponPosFrac || !BG_HasHoldBreathAbility(pm->weaponMap, ps) )
    {
      *(_QWORD *)&ps->holdBreathScale = 1065353216i64;
      return;
    }
    ps->holdBreathTimer += msec;
    r_weapon = *BG_GetViewmodelWeapon(pm->weaponMap, pm->ps);
    v7 = BG_UsingAlternate(ps);
    ScopeDriftSteadyFactor = BG_GetScopeDriftSteadyFactor(&r_weapon, v7);
    v9 = *(float *)&ScopeDriftSteadyFactor;
    ScopeDriftUnsteadyFactor = BG_GetScopeDriftUnsteadyFactor(&r_weapon, v7);
    v11 = *(float *)&ScopeDriftUnsteadyFactor;
    ScopeDriftDelay = BG_GetScopeDriftDelay(&r_weapon, v7);
    v13 = (int)(float)(*(float *)&ScopeDriftDelay * 1000.0);
    ScopeDriftLerpInTime = BG_GetScopeDriftLerpInTime(&r_weapon, v7);
    v15 = (int)(float)(*(float *)&ScopeDriftLerpInTime * 1000.0);
    v16 = v15 + v13;
    ScopeDriftSteadyTime = BG_GetScopeDriftSteadyTime(&r_weapon, v7);
    v18 = v15 + v13 - (int)(float)(*(float *)&ScopeDriftSteadyTime * -1000.0);
    ScopeDriftLerpOutTime = BG_GetScopeDriftLerpOutTime(&r_weapon, v7);
    v20 = v18 - (int)(float)(*(float *)&ScopeDriftLerpOutTime * -1000.0);
    holdBreathTimer = ps->holdBreathTimer;
    if ( holdBreathTimer <= v20 )
    {
      if ( holdBreathTimer > v18 )
      {
        if ( v20 <= v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2208, ASSERT_TYPE_ASSERT, "(time_lerp_out_end_ms > time_lerp_out_start_ms)", (const char *)&queryFormat, "time_lerp_out_end_ms > time_lerp_out_start_ms") )
          __debugbreak();
        v22 = _mm_cvtepi32_ps((__m128i)(unsigned int)-(int)(float)(*(float *)&ScopeDriftLerpOutTime * -1000.0)).m128_f32[0];
        v23 = _mm_cvtepi32_ps((__m128i)(unsigned int)(ps->holdBreathTimer - v18)).m128_f32[0];
        v24 = (float)((float)((float)(3.0 - (float)((float)(v23 / v22) * 2.0)) * (float)((float)(v23 / v22) * (float)(v23 / v22))) * (float)(v11 - v9)) + v9;
LABEL_19:
        ps->holdBreathScale = v24;
        return;
      }
      if ( holdBreathTimer > v16 )
      {
        ps->holdBreathScale = v9;
        return;
      }
      if ( holdBreathTimer > v13 )
      {
        if ( v16 <= v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2219, ASSERT_TYPE_ASSERT, "(time_lerp_in_end_ms > time_lerp_in_start_ms)", (const char *)&queryFormat, "time_lerp_in_end_ms > time_lerp_in_start_ms") )
          __debugbreak();
        v25 = _mm_cvtepi32_ps((__m128i)(unsigned int)(ps->holdBreathTimer - v13)).m128_f32[0];
        v26 = _mm_cvtepi32_ps((__m128i)v15).m128_f32[0];
        v24 = (float)((float)((float)(3.0 - (float)((float)(v25 / v26) * 2.0)) * (float)((float)(v25 / v26) * (float)(v25 / v26))) * (float)(v9 - v11)) + v11;
        goto LABEL_19;
      }
    }
    ps->holdBreathScale = v11;
  }
}

/*
==============
PM_UpdateSwayPrediction
==============
*/
void PM_UpdateSwayPrediction(const BgWeaponMap *weaponMap, playerState_s *ps, float frametime, unsigned int *holdrand)
{
  bool v7; 
  double WeaponOrOffhandAdsFrac; 
  float IdleSpeed; 
  float holdBreathScale; 
  const dvar_t *v11; 
  int v12; 
  bool outIsAlternate; 
  __int64 v14; 
  Weapon r_weapon; 
  Weapon v16; 
  AdvancedIdleSettings outAdvancedIdleSettings; 

  v14 = -2i64;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18569, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18570, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_UpdateSwayPrediction");
  r_weapon = *BG_GetViewmodelWeapon(weaponMap, ps);
  if ( LOWORD(frametime) )
  {
    v7 = BG_UsingAlternate(ps);
    BG_GetAdvancedIdleSettings(ps->perks, &r_weapon, v7, &outAdvancedIdleSettings);
    if ( outAdvancedIdleSettings.useAdvancedIdleSettings )
    {
      if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18550, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !holdrand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18552, ASSERT_TYPE_ASSERT, "(holdrand)", (const char *)&queryFormat, "holdrand") )
        __debugbreak();
      if ( !r_weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18553, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( weapon )") )
        __debugbreak();
      if ( !outAdvancedIdleSettings.useAdvancedIdleSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18555, ASSERT_TYPE_ASSERT, "(advancedIdleSettings->useAdvancedIdleSettings)", (const char *)&queryFormat, "advancedIdleSettings->useAdvancedIdleSettings") )
        __debugbreak();
      PM_ResetIdleCountersOnAds(weaponMap, ps, holdrand, 1);
      PM_Weapon_IncrementMovementIdleTime_AdvancedIdle(weaponMap, ps, frametime, &r_weapon, &outAdvancedIdleSettings);
    }
    else
    {
      PM_ResetIdleCountersOnAds(weaponMap, ps, holdrand, 0);
      if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18383, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      v16 = *BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
      if ( BG_GetOverlayReticle(ps, &v16, outIsAlternate) )
      {
        WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
        ps->weapCommon.weaponIdleTime += (int)(float)((float)((float)((float)(frametime * ps->holdBreathScale) * 1000.0) * BG_GetIdleSpeed(weaponMap, ps)) * *(float *)&WeaponOrOffhandAdsFrac);
      }
      if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18404, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      IdleSpeed = BG_GetIdleSpeed(weaponMap, ps);
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_LADDER_AIM) )
      {
        holdBreathScale = ps->holdBreathScale;
        v11 = DCONST_DVARBOOL_player_scope_prototype;
        if ( !DCONST_DVARBOOL_player_scope_prototype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_scope_prototype") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        if ( !v11->current.enabled && holdBreathScale > 1.0 )
          holdBreathScale = (float)((float)(holdBreathScale - 1.0) * 0.5) + 1.0;
        v12 = (int)(float)((float)((float)(holdBreathScale * frametime) * 1000.0) * IdleSpeed);
      }
      else
      {
        v12 = (int)(float)((float)(frametime * 1000.0) * IdleSpeed);
      }
      ps->weapCommon.weaponIdleTime += v12;
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_UpdateZoomLevel
==============
*/
void PM_UpdateZoomLevel(pmove_t *pm)
{
  const Weapon *ViewmodelOrOffhandADSWeapon; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 
  int v4; 
  int v5; 
  int v6; 
  BOOL v7; 
  playerState_s *ps; 
  bool v9; 
  double ADSZoomLevelFraction; 
  unsigned int v11; 
  playerState_s *v12; 
  __int64 v13; 
  __int64 v14; 
  bool outIsAlternate; 

  ViewmodelOrOffhandADSWeapon = BG_GetViewmodelOrOffhandADSWeapon(pm->weaponMap, pm->ps, &outIsAlternate);
  EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(pm->weaponMap, pm->ps, ViewmodelOrOffhandADSWeapon);
  if ( EquippedWeaponStateNonConst )
  {
    v4 = BG_ADSZoomCount(pm->weaponMap, pm->ps, ViewmodelOrOffhandADSWeapon, outIsAlternate);
    v5 = v4;
    if ( v4 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2264, ASSERT_TYPE_ASSERT, "( adsZoomCount ) <= ( 3 )", "%s <= %s\n\t%i, %i", "adsZoomCount", "WEAPON_VZSCOPE_MAXFOVS", v4, 3) )
      __debugbreak();
    if ( v5 > 1 )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2271, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_VARIABLE_ZOOM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_VARIABLE_ZOOM )") )
        __debugbreak();
      v6 = 1;
      v7 = BG_InADS(pm->ps) || BG_IsUsingOffhandGestureWeaponADSActive(pm->ps);
      if ( !BG_IsZoomButtonPressed(&pm->cmd) || BG_IsZoomButtonPressed(&pm->oldcmd) )
        v6 = 0;
      if ( v7 && v6 )
      {
        ps = pm->ps;
        v9 = outIsAlternate;
        if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2234, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        ADSZoomLevelFraction = BG_GetADSZoomLevelFraction(pm->weaponMap, ps, ViewmodelOrOffhandADSWeapon, v9, pm->cmd.serverTime);
        BG_SetAdsZoomLevelOnStateChange(ps, *(float *)&ADSZoomLevelFraction);
        ps->weapCommon.adsZoomLevelChangeTime = pm->cmd.serverTime;
        v11 = (EquippedWeaponStateNonConst->zoomLevelIndex + 1) % v5;
        EquippedWeaponStateNonConst->zoomLevelIndex = v11;
        if ( v11 >= v5 )
        {
          LODWORD(v14) = v5;
          LODWORD(v13) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2245, ASSERT_TYPE_ASSERT, "(unsigned)( state->zoomLevelIndex ) < (unsigned)( adsZoomCount )", "state->zoomLevelIndex doesn't index adsZoomCount\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        PM_AddEvent(pm, EV_VARIABLE_ZOOM_CHANGE);
      }
      else if ( EquippedWeaponStateNonConst->zoomLevelIndex )
      {
        v12 = pm->ps;
        if ( v12->weapCommon.fWeaponPosFrac == 0.0 && BG_ADSResetZoomLevelOnToggle(pm->weaponMap, v12, ViewmodelOrOffhandADSWeapon, outIsAlternate) )
          EquippedWeaponStateNonConst->zoomLevelIndex = 0;
      }
    }
    else
    {
      EquippedWeaponStateNonConst->zoomLevelIndex = 0;
    }
  }
}

/*
==============
PM_Update_OffhandGestureWeapons
==============
*/
void PM_Update_OffhandGestureWeapons(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const Weapon *OffHandWeaponForPlayer; 
  const WeaponDef *v6; 
  int v7; 
  BgWeaponMap *v8; 
  bool IsPlayingGesture; 
  BgWeaponMap *v10; 
  playerState_s *v11; 
  BgWeaponMap *v12; 
  const Weapon *v13; 
  const WeaponDef *v14; 
  unsigned int v15; 
  const Weapon *v16; 
  const Gesture *gesturePullbackAlt; 
  double v18; 
  float v19; 
  const Gesture *AssetFromIndex; 
  GestureAnimationSettings *AnimationSettings; 
  float adsTransitionOutTime; 
  int v23; 
  float v24; 
  float v25; 
  double v26; 
  bool v27; 
  BgWeaponMap *v28; 
  const Weapon *v29; 
  const WeaponDef *v30; 
  unsigned int v31; 
  const Weapon *v32; 
  const Gesture *gestureThrow; 
  double v34; 
  const Gesture *v35; 
  GestureAnimationSettings *v36; 
  float v37; 
  int v38; 
  float v39; 
  float v40; 
  __int128 v41; 
  double v42; 
  __int128 v44; 
  const Weapon *v46; 
  unsigned int v47; 
  const WeaponDef *v48; 
  const Weapon *v49; 
  const Gesture *gesturePullback; 
  double v51; 
  float *v52; 
  float v53; 
  const Gesture *v55; 
  GestureAnimationSettings *v56; 
  __int128 v57; 
  float v60; 
  int v61; 
  int OffhandMaxHoldTime; 
  int v63; 
  double v64; 
  BgWeaponMap *v67; 
  const Weapon *v68; 
  const WeaponDef *v69; 
  unsigned int v70; 
  const Weapon *v71; 
  const Gesture *gestureThrowAlt; 
  double v73; 
  float v74; 
  BgWeaponMap *weaponMap; 
  const Weapon *v76; 
  const WeaponDef *v77; 
  unsigned int IndexFromGesture; 
  const Weapon *CurrentWeaponForPlayer; 
  const Gesture *gestureAnimation; 
  double ElapsedTime; 
  int offhandGestureFlags; 
  PlayerAnimScriptEventType PowerAnimEvent; 
  double Float_Internal_DebugName; 
  unsigned int v85[2]; 
  GesturePlayRequest request; 
  GesturePlayRequest result; 
  unsigned int v88; 
  unsigned int outSlot; 
  WeaponDef *slot; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14719, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14719, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(pm->weaponMap, ps);
  v6 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
  ps->weapCommon.fPreviousOffhandAdsFrac = ps->weapCommon.offhandAdsFrac;
  slot = (WeaponDef *)v6;
  if ( BG_Offhand_HasActiveOffhand(ps) && !OffHandWeaponForPlayer->weaponIdx )
  {
    ps->weapCommon.offhandGestureFlags = 0;
    return;
  }
  if ( (ps->weapCommon.offhandGestureFlags & 1) == 0 )
  {
    if ( BG_IsUsingScriptedOffhandWeapon(ps) )
    {
      if ( (ps->weapCommon.offhandGestureFlags & 0x40) == 0 )
        goto LABEL_110;
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && BG_Offhand_ShouldStopTauntThirdPerson(pm->weaponMap, ps, OHGT_WEAPON, OffHandWeaponForPlayer, pm->cmd.serverTime) && !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_playerasm_disable_cancel_torso_stance_change, "playerasm_disable_cancel_torso_stance_change") )
        BG_ClearTorsoAnim(pm->m_bgHandler, ps);
      if ( BG_Offhand_IsPlayingGesture(pm->weaponMap, ps, OHGT_WEAPON) )
      {
LABEL_110:
        if ( SLOBYTE(ps->weapCommon.offhandGestureFlags) < 0 )
        {
          weaponMap = pm->weaponMap;
          v85[0] = 2;
          v76 = BG_GetOffHandWeaponForPlayer(weaponMap, ps);
          v77 = BG_WeaponDef(v76, 0);
          IndexFromGesture = 256;
          CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
          BG_PlayAltGesturesForOffhandWeapons(CurrentWeaponForPlayer);
          gestureAnimation = v77->gestureAnimation;
          if ( gestureAnimation )
            IndexFromGesture = BG_Gesture_GetIndexFromGesture(gestureAnimation);
          BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, v85);
          if ( v85[0] == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15068, ASSERT_TYPE_ASSERT, "(gestureSlot != 2)", (const char *)&queryFormat, "gestureSlot != GESTURE_INVALID_SLOT") )
            __debugbreak();
          ElapsedTime = BG_Gesture_GetElapsedTime(ps, v85[0], pm->cmd.serverTime);
          if ( *(float *)&ElapsedTime > (float)((float)BG_Gesture_GetSectionStartTime(IndexFromGesture, GESTURE_SECTION_OUT) * 0.001) )
          {
            offhandGestureFlags = ps->weapCommon.offhandGestureFlags;
            if ( (offhandGestureFlags & 4) == 0 )
              ps->weapCommon.offhandGestureFlags = offhandGestureFlags | 4;
            if ( PM_Weapon_OffHand_DesiresHolding(pm, ps) )
            {
              PowerAnimEvent = BG_AnimationMP_GetPowerAnimEvent(pm);
              BG_AnimScriptEvent(pm->m_bgHandler, ps, PowerAnimEvent, 0, 1, &pml->holdrand);
            }
            else
            {
              BG_OffhandGestureScriptWeaponEnd(pm->weaponMap, ps, pm->cmd.serverTime, 0);
              if ( BG_UseFastOffhand(ps, pm->weaponMap) )
                Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_perk_fastOffhandMultiplier, "perk_fastOffhandMultiplier");
              else
                *(float *)&Float_Internal_DebugName = FLOAT_1_0;
              ps->weapCommon.offhandGestureFireTime = pm->cmd.serverTime - (int)(float)((float)(*(float *)&Float_Internal_DebugName * v6->gestureFireTime) * -1000.0);
              BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_POWER_EXIT, 0, 1, &pml->holdrand);
            }
          }
        }
      }
      else
      {
        BG_OffhandGestureScriptWeaponEnd(pm->weaponMap, ps, pm->cmd.serverTime, 0);
      }
    }
    return;
  }
  if ( v6->weapType != WEAPTYPE_GRENADE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14746, ASSERT_TYPE_ASSERT, "(pWeapDef->weapType == WEAPTYPE_GRENADE)", (const char *)&queryFormat, "pWeapDef->weapType == WEAPTYPE_GRENADE") )
    __debugbreak();
  if ( !BG_OffhandGestureWeaponWillDetonate(ps) )
  {
    v7 = ps->weapCommon.offhandGestureFlags;
    v8 = pm->weaponMap;
    if ( (v7 & 0x10) != 0 )
    {
      IsPlayingGesture = BG_Offhand_IsPlayingGesture(v8, ps, OHGT_PULLBACK);
      v10 = pm->weaponMap;
      v11 = ps;
      v12 = v10;
      if ( IsPlayingGesture )
      {
        outSlot = 2;
        v13 = BG_GetOffHandWeaponForPlayer(v10, ps);
        v14 = BG_WeaponDef(v13, 0);
        v15 = 256;
        v16 = BG_GetCurrentWeaponForPlayer(v10, ps);
        if ( BG_PlayAltGesturesForOffhandWeapons(v16) && (gesturePullbackAlt = v14->gesturePullbackAlt) != NULL || (gesturePullbackAlt = v14->gesturePullback) != NULL )
          v15 = BG_Gesture_GetIndexFromGesture(gesturePullbackAlt);
        if ( !BG_Gesture_IsPlayingByIndex(ps, v15, &outSlot) )
          return;
        if ( outSlot == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14778, ASSERT_TYPE_ASSERT, "(gestureSlot != 2)", (const char *)&queryFormat, "gestureSlot != GESTURE_INVALID_SLOT") )
          __debugbreak();
        v18 = BG_Gesture_GetElapsedTime(ps, outSlot, pm->cmd.serverTime);
        v19 = *(float *)&v18;
        AssetFromIndex = BG_Gesture_GetAssetFromIndex(v15);
        AnimationSettings = BG_Gesture_GetAnimationSettings(AssetFromIndex);
        if ( !AnimationSettings->hasAdsTransitions )
          return;
        adsTransitionOutTime = (float)AnimationSettings->adsTransitionOutTime;
        v23 = ps->weapCommon.offhandGestureFlags;
        v25 = adsTransitionOutTime * 0.001;
        v24 = v25;
        if ( (v23 & 0x200) != 0 )
        {
          if ( *(float *)&v18 > v25 )
          {
            ps->weapCommon.offhandGestureFlags = v23 & 0xFFFFFDFF;
            pm->m_flags |= 0x800u;
            *(__m256i *)&pm->offhandAdsWeapon.weaponIdx = *(__m256i *)&OffHandWeaponForPlayer->weaponIdx;
            *(_OWORD *)&pm->offhandAdsWeapon.attachmentVariationIndices[5] = *(_OWORD *)&OffHandWeaponForPlayer->attachmentVariationIndices[5];
            *(double *)&pm->offhandAdsWeapon.attachmentVariationIndices[21] = *(double *)&OffHandWeaponForPlayer->attachmentVariationIndices[21];
            *(_DWORD *)&pm->offhandAdsWeapon.weaponCamo = *(_DWORD *)&OffHandWeaponForPlayer->weaponCamo;
            if ( v25 > 0.0 )
            {
LABEL_31:
              v26 = I_fclamp(v19 / v24, 0.0, 1.0);
              ps->weapCommon.offhandAdsFrac = 1.0 - *(float *)&v26;
              return;
            }
LABEL_47:
            ps->weapCommon.offhandAdsFrac = 1.0 - 1.0;
            return;
          }
          goto LABEL_48;
        }
        goto LABEL_49;
      }
    }
    else
    {
      if ( (v7 & 8) == 0 )
      {
        v88 = 2;
        v46 = BG_GetOffHandWeaponForPlayer(v8, ps);
        v47 = 256;
        v48 = BG_WeaponDef(v46, 0);
        v49 = BG_GetCurrentWeaponForPlayer(v8, ps);
        if ( BG_PlayAltGesturesForOffhandWeapons(v49) && (gesturePullback = v48->gesturePullbackAlt) != NULL || (gesturePullback = v48->gesturePullback) != NULL )
          v47 = BG_Gesture_GetIndexFromGesture(gesturePullback);
        if ( !BG_Gesture_IsPlayingByIndex(ps, v47, &v88) )
          goto LABEL_16;
        if ( v88 == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14877, ASSERT_TYPE_ASSERT, "(gestureSlot != 2)", (const char *)&queryFormat, "gestureSlot != GESTURE_INVALID_SLOT") )
          __debugbreak();
        v51 = BG_Gesture_GetElapsedTime(ps, v88, pm->cmd.serverTime);
        v52 = (float *)slot;
        v53 = *(float *)&v51;
        _XMM6 = LODWORD(slot->minPullbackTime);
        v55 = BG_Gesture_GetAssetFromIndex(v47);
        v56 = BG_Gesture_GetAnimationSettings(v55);
        *(_QWORD *)v85 = v56;
        v57 = 0i64;
        *(float *)&v57 = (float)v56->inAnimLength * 0.001;
        __asm
        {
          vcmpeqss xmm1, xmm6, xmm9
          vblendvps xmm10, xmm6, xmm7, xmm1
        }
        v60 = FLOAT_1_0;
        if ( *(float *)&v51 > *(float *)&_XMM10 )
        {
          v61 = ps->weapCommon.offhandGestureFlags;
          if ( (v61 & 4) == 0 )
          {
            ps->weapCommon.offhandGestureFlags = v61 | 4;
            ps->grenadeTimeLeft = BG_GetCookingGrenadeFuseMax(OffHandWeaponForPlayer, 0, ps);
          }
          OffhandMaxHoldTime = BG_GetOffhandMaxHoldTime(OffHandWeaponForPlayer, 0);
          v63 = BG_GetCookingGrenadeFuseMax(OffHandWeaponForPlayer, 0, ps) - ps->grenadeTimeLeft;
          if ( PM_Weapon_OffHand_DesiresHolding(pm, ps) && (OffhandMaxHoldTime <= 0 || v63 < OffhandMaxHoldTime) )
          {
            if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
              PM_Weapon_PrepareThrowAnimScriptEvent(pm, ps, OffHandWeaponForPlayer, 0, &pml->holdrand);
          }
          else
          {
            v64 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_offhandPullback_quickPercent, "offhandPullback_quickPercent");
            if ( v53 < (float)(*(float *)&v64 * *(float *)&v57) )
              BG_AddPredictableEventToPlayerstate(EV_PULLBACK_OFFHAND_QUICK, ps->weapCommon.offHandHandle.m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, ps);
            ps->weapCommon.offhandGestureFlags &= ~4u;
            ps->weapCommon.offhandGestureFlags |= 8u;
            if ( *(float *)&v57 <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14926, ASSERT_TYPE_ASSERT, "(inAnimLength > 1.0E-6)", (const char *)&queryFormat, "inAnimLength > ZERO_EPSILON") )
              __debugbreak();
            *(float *)&v57 = *(float *)&v57 - *(float *)&_XMM10;
            _XMM0 = v57;
            __asm { vmaxss  xmm1, xmm0, cs:__real@38d1b717 }
            *(double *)&_XMM0 = I_fclamp((float)(v53 - *(float *)&_XMM10) / *(float *)&_XMM1, 0.0, 1.0);
            BG_Gesture_StopBySlot(ps, v88, pm->cmd.serverTime, 1, (int)(float)((float)((float)((float)(1.0 - *(float *)&_XMM0) * v52[1076]) + (float)(*(float *)&_XMM0 * v52[1075])) * 1000.0), 1);
            v67 = pm->weaponMap;
            v68 = BG_GetOffHandWeaponForPlayer(v67, ps);
            v69 = BG_WeaponDef(v68, 0);
            v70 = 256;
            v71 = BG_GetCurrentWeaponForPlayer(v67, ps);
            if ( (!BG_PlayAltGesturesForOffhandWeapons(v71) || (gestureThrowAlt = v69->gestureThrowAlt) == NULL) && (gestureThrowAlt = v69->gestureThrow) == NULL || (v70 = BG_Gesture_GetIndexFromGesture(gestureThrowAlt), v70 == 256) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14938, ASSERT_TYPE_ASSERT, "(gestureOffIdx != (1<<8))", (const char *)&queryFormat, "gestureOffIdx != GESTURE_INVALID_INDEX") )
                __debugbreak();
            }
            request = *BG_GesturePriority_SetupRequest(&result, pm->weaponMap, ps, pm->m_bgHandler, v70, pm->cmd.serverTime);
            request.ignoreGamePlayState = 1;
            if ( !BG_GesturePriority_TryPlay(&request, NULL, NULL) )
            {
              Com_PrintWarning(16, "faild to play throw gesture for offhand weapon, canceling the action, is the priority of the assigned gesture set to offhand thrown weapon?\n");
              BG_OffhandGestureWeaponEnd(pm->weaponMap, ps, pm->m_bgHandler, pm->cmd.serverTime, 1);
            }
            if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
              PM_Weapon_FireWeaponAnimScriptEvent(pm, ps, OffHandWeaponForPlayer, 0, &pml->holdrand);
            v52 = (float *)slot;
          }
          if ( (ps->weapCommon.offhandGestureFlags & 8) != 0 && !ps->weapCommon.offhandGestureFireTime )
          {
            if ( BG_UseFastOffhand(ps, pm->weaponMap) )
              v73 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_perk_fastOffhandMultiplier, "perk_fastOffhandMultiplier");
            else
              *(float *)&v73 = FLOAT_1_0;
            ps->weapCommon.offhandGestureFireTime = pm->cmd.serverTime - (int)(float)((float)(*(float *)&v73 * v52[1082]) * -1000.0);
          }
          v56 = *(GestureAnimationSettings **)v85;
        }
        if ( v56->hasAdsTransitions )
        {
          if ( (ps->weapCommon.offhandGestureFlags & 0x200) != 0 )
          {
            ps->weapCommon.offhandAdsFrac = 1.0;
          }
          else
          {
            v74 = (float)v56->adsTransitionInTime * 0.001;
            if ( v53 > v74 && Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_offhand_ads_weapons, "killswitch_offhand_ads_weapons") )
            {
              ps->weapCommon.offhandGestureFlags |= 0x200u;
              pm->m_flags |= 0x400u;
              *(__m256i *)&pm->offhandAdsWeapon.weaponIdx = *(__m256i *)&OffHandWeaponForPlayer->weaponIdx;
              *(_OWORD *)&pm->offhandAdsWeapon.attachmentVariationIndices[5] = *(_OWORD *)&OffHandWeaponForPlayer->attachmentVariationIndices[5];
              *(double *)&pm->offhandAdsWeapon.attachmentVariationIndices[21] = *(double *)&OffHandWeaponForPlayer->attachmentVariationIndices[21];
              *(_DWORD *)&pm->offhandAdsWeapon.weaponCamo = *(_DWORD *)&OffHandWeaponForPlayer->weaponCamo;
            }
            else if ( v74 > 0.0 )
            {
              I_fclamp(v53 / v74, 0.0, 1.0);
              v60 = v53 / v74;
            }
            ps->weapCommon.offhandAdsFrac = v60;
          }
        }
        return;
      }
      v27 = BG_Offhand_IsPlayingGesture(v8, ps, OHGT_THROW);
      v28 = pm->weaponMap;
      v11 = ps;
      v12 = v28;
      if ( v27 )
      {
        LODWORD(slot) = 2;
        v29 = BG_GetOffHandWeaponForPlayer(v28, ps);
        v30 = BG_WeaponDef(v29, 0);
        v31 = 256;
        v32 = BG_GetCurrentWeaponForPlayer(v28, ps);
        if ( BG_PlayAltGesturesForOffhandWeapons(v32) && (gestureThrow = v30->gestureThrowAlt) != NULL || (gestureThrow = v30->gestureThrow) != NULL )
          v31 = BG_Gesture_GetIndexFromGesture(gestureThrow);
        if ( !BG_Gesture_IsPlayingByIndex(ps, v31, (unsigned int *)&slot) )
          return;
        if ( (_DWORD)slot == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14830, ASSERT_TYPE_ASSERT, "(gestureSlot != 2)", (const char *)&queryFormat, "gestureSlot != GESTURE_INVALID_SLOT") )
          __debugbreak();
        v34 = BG_Gesture_GetElapsedTime(ps, (const unsigned int)slot, pm->cmd.serverTime);
        v19 = *(float *)&v34;
        v35 = BG_Gesture_GetAssetFromIndex(v31);
        v36 = BG_Gesture_GetAnimationSettings(v35);
        if ( !v36->hasAdsTransitions )
          return;
        v37 = (float)v36->adsTransitionOutTime;
        v38 = ps->weapCommon.offhandGestureFlags;
        v39 = v37 * 0.001;
        v24 = v39;
        if ( (v38 & 0x200) != 0 )
        {
          if ( *(float *)&v34 > v39 )
          {
            ps->weapCommon.offhandGestureFlags = v38 & 0xFFFFFDFF;
            pm->m_flags |= 0x800u;
            *(__m256i *)&pm->offhandAdsWeapon.weaponIdx = *(__m256i *)&OffHandWeaponForPlayer->weaponIdx;
            *(_OWORD *)&pm->offhandAdsWeapon.attachmentVariationIndices[5] = *(_OWORD *)&OffHandWeaponForPlayer->attachmentVariationIndices[5];
            *(double *)&pm->offhandAdsWeapon.attachmentVariationIndices[21] = *(double *)&OffHandWeaponForPlayer->attachmentVariationIndices[21];
            *(_DWORD *)&pm->offhandAdsWeapon.weaponCamo = *(_DWORD *)&OffHandWeaponForPlayer->weaponCamo;
            if ( v39 > 0.0 )
              goto LABEL_31;
            goto LABEL_47;
          }
LABEL_48:
          ps->weapCommon.offhandAdsFrac = FLOAT_1_0;
          return;
        }
LABEL_49:
        if ( v24 <= 0.0 )
        {
          v41 = LODWORD(FLOAT_1_0);
          *(float *)&v42 = FLOAT_1_0;
        }
        else
        {
          v40 = v19 / v24;
          v41 = LODWORD(FLOAT_1_0);
          v42 = I_fclamp(v40, 0.0, 1.0);
        }
        v44 = v41;
        *(float *)&v44 = *(float *)&v41 - *(float *)&v42;
        _XMM0 = v44;
        __asm { vminss  xmm1, xmm0, dword ptr [rsi+714h] }
        ps->weapCommon.offhandAdsFrac = *(float *)&_XMM1;
        return;
      }
    }
    BG_OffhandGestureWeaponEnd(v12, v11, pm->m_bgHandler, pm->cmd.serverTime, 1);
    return;
  }
  if ( !BG_Offhand_IsPlayingGesture(pm->weaponMap, ps, OHGT_DETONATE) )
LABEL_16:
    BG_OffhandGestureWeaponEnd(pm->weaponMap, ps, pm->m_bgHandler, pm->cmd.serverTime, 1);
}

/*
==============
PM_UseLTriggerForDoubleBarrel
==============
*/
_BOOL8 PM_UseLTriggerForDoubleBarrel(const playerState_s *ps, const Weapon *weapon)
{
  bool v4; 
  weapFireType_t WeaponFireType; 
  _BOOL8 result; 

  result = 0;
  if ( weapon->weaponIdx )
  {
    v4 = BG_UsingAlternate(ps);
    WeaponFireType = BG_GetWeaponFireType(weapon, v4);
    if ( !BG_PlayerDualWielding(ps) && WeaponFireType == WEAPON_FIRETYPE_DOUBLEBARREL_DUALTRIGGER )
      return 1;
  }
  return result;
}

/*
==============
PM_Weapon
==============
*/
void PM_Weapon(pmove_t *pm, pml_t *pml)
{
  pml_t *v2; 
  playerState_s *ps; 
  playerState_s *v5; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  const dvar_t *v7; 
  bool v8; 
  const char *v9; 
  const Weapon *ViewmodelOrOffhandADSWeapon; 
  bool IsUsingOffhandGestureWeaponADSActive; 
  int v12; 
  int v13; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 
  const dvar_t *v15; 
  int v16; 
  int v17; 
  PlayerHandIndex v18; 
  int *m_delayedActionOriginalState; 
  int *p_weaponState; 
  int v21; 
  bool v22; 
  const dvar_t *v23; 
  int *v24; 
  PlayerHandIndex v25; 
  DelayedActionState *p_delayedAction; 
  int *v27; 
  int v28; 
  PlayerHandIndex i; 
  int IsDelayedAction; 
  int v31; 
  playerState_s *v32; 
  playerState_s *v33; 
  int offhandGestureFireTime; 
  bool v35; 
  PlayerHandIndex v40; 
  DelayedActionState *v41; 
  int v42; 
  playerState_s *v43; 
  unsigned __int64 weaponState; 
  __int64 v45; 
  playerState_s *v46; 
  int v47; 
  const Weapon *CurrentWeaponForPlayer; 
  __int64 isQuickMelee; 
  __int64 applyPendingDamage; 
  bool outIsAlternate; 
  pml_t *v52; 
  __int64 v53; 
  DelayedActionState delayedAction; 
  Weapon heldWeapon; 

  v53 = -2i64;
  v2 = pml;
  v52 = pml;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18803, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18803, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = pm->ps;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18788, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v5->weapCommon.weapFlags, ACTIVE, 0x2Au) && v5->weapState[0].weaponState != 62 )
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&v5->weapCommon.weapFlags, ACTIVE, 0x2Au);
  PM_Weapon_CheckExecution(pm, v2);
  if ( !PM_Weapon_Allowed(pm, v2->msec) )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon No Weapon Allowed");
    if ( BG_Turret_IsUsingNonRemoteTurret(ps) )
    {
      if ( ps->pm_type < 7 )
      {
        p_eFlags = &ps->eFlags;
        if ( !p_eFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2072, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
          __debugbreak();
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 7u) )
        {
          if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2076, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18820, ASSERT_TYPE_ASSERT, "(!BG_IsRemoteTurretActive( ps ))", (const char *)&queryFormat, "!BG_IsRemoteTurretActive( ps )") )
            __debugbreak();
        }
      }
      PM_Weapon_CheckForChangeWeapon(pm, v2);
      PM_UpdateAimDownSightLerp(pm, v2->msec);
      PM_Turret_UpdateFire(pm, v2, 0);
    }
    v7 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
    {
      v8 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      v9 = "HighPriorityDebug - PM_Weapon SERVER early-out, !PM_Weapon_Allowed\n";
      if ( !v8 )
        v9 = "HighPriorityDebug - PM_Weapon CLIENT early-out, !PM_Weapon_Allowed\n";
      Com_Printf(17, v9);
    }
    Sys_ProfEndNamedEvent();
    goto LABEL_147;
  }
  pm->m_flags |= 0x10u;
  PM_Turret_UpdateFire(pm, v2, 0);
  PM_UpdateAimDownSightLerp(pm, v2->msec);
  PM_UpdateZoomLevel(pm);
  PM_UpdateHoldBreath(pm, v2->msec, v2->frametime);
  PM_UpdateScopeDrift(pm, v2->msec, v2->frametime);
  PM_UpdateSwayPrediction(pm->weaponMap, ps, v2->frametime, &v2->holdrand);
  PM_UpdateHybridToggle(pm);
  ViewmodelOrOffhandADSWeapon = BG_GetViewmodelOrOffhandADSWeapon(pm->weaponMap, pm->ps, &outIsAlternate);
  if ( BG_CanThermalToggle(ViewmodelOrOffhandADSWeapon, outIsAlternate) )
  {
    if ( BG_InADS(pm->ps) || (IsUsingOffhandGestureWeaponADSActive = BG_IsUsingOffhandGestureWeaponADSActive(pm->ps), v12 = 0, IsUsingOffhandGestureWeaponADSActive) )
      v12 = 1;
    if ( (pm->cmd.buttons & 4) == 0 || (v13 = 1, (pm->oldcmd.buttons & 4) != 0) )
      v13 = 0;
    if ( v12 && v13 )
    {
      EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(pm->weaponMap, pm->ps, ViewmodelOrOffhandADSWeapon);
      EquippedWeaponStateNonConst->thermalEnabled = !EquippedWeaponStateNonConst->thermalEnabled;
    }
  }
  PM_Weapon_Charge_UpdateFrameDelta(pm, v2);
  if ( PM_UpdateOffHandThrow(pm, v2, ps) )
  {
    v15 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
    {
      if ( pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
        Com_Printf(17, "HighPriorityDebug - PM_Weapon SERVER early-out, PM_UpdateOffHandThrow\n");
      else
        Com_Printf(17, "HighPriorityDebug - PM_Weapon CLIENT early-out, PM_UpdateOffHandThrow\n");
    }
    goto LABEL_147;
  }
  PM_Update_OffhandGestureWeapons(pm, v2);
  v16 = 0;
  *(_QWORD *)delayedAction.m_delayedAction = 0i64;
  v17 = 0;
  *(_QWORD *)delayedAction.m_delayedActionOriginalState = 0i64;
  outIsAlternate = 0;
  v18 = WEAPON_HAND_DEFAULT;
  if ( BG_PlayerLastWeaponHandForViewWeapon(pm->weaponMap, ps) < WEAPON_HAND_DEFAULT )
    goto LABEL_85;
  m_delayedActionOriginalState = delayedAction.m_delayedActionOriginalState;
  p_weaponState = &ps->weapState[0].weaponState;
  do
  {
    v21 = PM_Weapon_WeaponTimeAdjust(pm, v2, v18);
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 112, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (unsigned int)v18 >= NUM_WEAPON_HANDS )
    {
      LODWORD(applyPendingDamage) = 2;
      LODWORD(isQuickMelee) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 113, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>(hand) ) < (unsigned)( NUM_WEAPON_HANDS )", "static_cast<int>(hand) doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", isQuickMelee, applyPendingDamage) )
        __debugbreak();
    }
    *(m_delayedActionOriginalState - 2) = v21;
    *m_delayedActionOriginalState = *p_weaponState;
    if ( PM_Weapon_BurstFirePending(pm->weaponMap, ps, v18) || PM_Weapon_HyperBurstFirePending(pm->weaponMap, ps, v18) )
    {
      v22 = 1;
      outIsAlternate = 1;
    }
    else
    {
      v22 = outIsAlternate;
    }
    ++v18;
    p_weaponState += 20;
    ++m_delayedActionOriginalState;
  }
  while ( v18 <= BG_PlayerLastWeaponHandForViewWeapon(pm->weaponMap, ps) );
  if ( !v22 )
  {
    v17 = delayedAction.m_delayedActionOriginalState[0];
    v16 = delayedAction.m_delayedAction[0];
LABEL_85:
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon Checks");
    PM_Weapon_CheckForBlast(pm);
    PM_Weapon_CheckForSlide(pm);
    PM_Weapon_CheckForInspect(pm, v2, &delayedAction);
    PM_Weapon_CheckForLeap(pm, v2);
    PM_Weapon_CheckForStunned(pm, &v2->holdrand);
    PM_Weapon_CheckForNightVision(pm, v2);
    for ( i = WEAPON_HAND_DEFAULT; i <= BG_PlayerLastWeaponHandForViewWeapon(pm->weaponMap, ps); PM_Weapon_CheckForSprint(pm, v2, 0, i++, IsDelayedAction) )
      IsDelayedAction = DelayedActionState::IsDelayedAction(&delayedAction, ps, i);
    PM_Weapon_CheckForOffHand(pm, v2);
    PM_Weapon_CheckForTakeOffhand(pm);
    PM_Ladder_CheckForLadderSlide(pm, v2);
    PM_Ladder_CheckForLadderAim(pm, v2);
    PM_Weapon_CheckForAutoAltToggle(pm, v2);
    PM_Weapon_CheckForChangeWeapon(pm, v2);
    PM_Weapon_CheckForReload(pm, v2, &delayedAction);
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 122, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v31 = delayedAction.m_delayedAction[1];
    if ( delayedAction.m_delayedActionOriginalState[1] != ps->weapState[1].weaponState )
      v31 = 0;
    v24 = &ps->weapState[0].weaponState;
    if ( v17 != ps->weapState[0].weaponState )
      v16 = 0;
    if ( v16 > v31 )
      v31 = v16;
    PM_GameInterface_CheckForMeleeAction(pm, v2, v31, &v2->holdrand);
    PM_Weapon_CheckForMelee(pm, v2, v31, &v2->holdrand);
    v32 = pm->ps;
    if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11166, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_LADDER_AIM|0x80) && (unsigned int)(v32->weapState[0].weaponState - 22) <= 2 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v32->pm_flags, ACTIVE, 0x14u) && PM_Weapon_IsInInterruptibleState(pm->weaponMap, v32, WEAPON_HAND_DEFAULT, pm->m_bgHandler) && (pm->cmd.buttons & 2) != 0 && !v32->sprintState.sprintButtonUpRequired )
      PM_Weapon_MeleeEnd(pm, v2, 0, WEAPON_HAND_DEFAULT, 0, 0, 0);
    PM_Weapon_CheckForDetonation(pm);
    PM_Weapon_CheckForOffHandThrowCancel(pm, v2);
    v33 = pm->ps;
    if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15401, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    offhandGestureFireTime = v33->weapCommon.offhandGestureFireTime;
    if ( offhandGestureFireTime && pm->cmd.serverTime >= offhandGestureFireTime )
    {
      if ( (v33->weapCommon.offhandGestureFlags & 0x20) != 0 )
        PM_SendDetonateEvent(pm);
      else
        PM_Weapon_OffHand(pm, v2);
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&v33->weapCommon.weapFlags, ACTIVE, 1u);
      v33->weapCommon.offhandGestureFireTime = 0;
    }
    Sys_ProfEndNamedEvent();
    goto LABEL_73;
  }
  v23 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
  if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.enabled )
  {
    if ( pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
      Com_Printf(17, "HighPriorityDebug - PM_Weapon SERVER skipped PM_Weapon_CheckForChangeWeapon, hasBurstFirePending\n");
    else
      Com_Printf(17, "HighPriorityDebug - PM_Weapon CLIENT skipped PM_Weapon_CheckForChangeWeapon, hasBurstFirePending\n");
  }
  v24 = &ps->weapState[0].weaponState;
LABEL_73:
  PM_Demeanor_ProcessState(pm);
  BG_GesturePriority_Update(pm);
  PM_Gesture_ProcessState(pm);
  v25 = WEAPON_HAND_DEFAULT;
  if ( BG_PlayerLastWeaponHandForViewWeapon(pm->weaponMap, ps) >= WEAPON_HAND_DEFAULT )
  {
    p_delayedAction = &delayedAction;
    v27 = v24;
    do
    {
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 122, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( (unsigned int)v25 >= NUM_WEAPON_HANDS )
      {
        LODWORD(applyPendingDamage) = 2;
        LODWORD(isQuickMelee) = v25;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 123, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>(hand) ) < (unsigned)( NUM_WEAPON_HANDS )", "static_cast<int>(hand) doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", isQuickMelee, applyPendingDamage) )
          __debugbreak();
      }
      if ( p_delayedAction->m_delayedActionOriginalState[0] == *v27 )
        v28 = p_delayedAction->m_delayedAction[0];
      else
        v28 = 0;
      PM_Weapon_UpdateQueuedFireAction(pm, v25++, v28);
      v27 += 20;
      p_delayedAction = (DelayedActionState *)((char *)p_delayedAction + 4);
    }
    while ( v25 <= BG_PlayerLastWeaponHandForViewWeapon(pm->weaponMap, ps) );
    v2 = v52;
    v24 = &ps->weapState[0].weaponState;
  }
  if ( (unsigned int)(*v24 - 22) <= 2 )
  {
    heldWeapon = *BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    if ( BG_IsWeaponMeleeOverride(pm->weaponMap, ps, &heldWeapon) )
      heldWeapon = pm->cmd.weapon;
    v35 = BG_UsingAlternate(ps);
    _XMM0 = BG_UsesReverseWeaponSpread(&heldWeapon, v35);
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = 0i64;
    __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
    ps->weapCommon.aimSpreadScale = *(float *)&_XMM0;
  }
  v40 = WEAPON_HAND_DEFAULT;
  if ( BG_PlayerLastWeaponHandForViewWeapon(pm->weaponMap, ps) >= WEAPON_HAND_DEFAULT )
  {
    v41 = &delayedAction;
    do
    {
      if ( (unsigned int)v40 >= NUM_WEAPON_HANDS )
      {
        LODWORD(applyPendingDamage) = 2;
        LODWORD(isQuickMelee) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 123, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>(hand) ) < (unsigned)( NUM_WEAPON_HANDS )", "static_cast<int>(hand) doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", isQuickMelee, applyPendingDamage) )
          __debugbreak();
      }
      v42 = 0;
      if ( v41->m_delayedActionOriginalState[0] == *v24 )
        v42 = v41->m_delayedAction[0];
      PM_Weapon_ProcessHand(pm, v2, v42, v40++);
      v24 += 20;
      v41 = (DelayedActionState *)((char *)v41 + 4);
    }
    while ( v40 <= BG_PlayerLastWeaponHandForViewWeapon(pm->weaponMap, ps) );
  }
  v43 = pm->ps;
  if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18598, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponState = v43->weapState[0].weaponState;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v43->weapCommon.weapFlags, ACTIVE, 0x22u) )
  {
    if ( (unsigned int)weaponState > 0x32 || (v45 = 0x4000001C01FBEi64, !_bittest64(&v45, weaponState)) )
      PM_Weapon_MeleeEnd(pm, v2, 0, WEAPON_HAND_DEFAULT, 0, 0, 1);
  }
  v46 = pm->ps;
  if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18615, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v47 = v46->weapState[0].weaponState;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v46->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x38u) && (unsigned int)(v47 - 22) > 2 )
  {
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, v46);
    if ( BG_IsMeleeComboWeapon(CurrentWeaponForPlayer) )
    {
      PM_IncrementMeleeComboSeqIdx(pm, CurrentWeaponForPlayer);
    }
    else
    {
      v46->weapCommon.meleeComboSeqIdx = 0;
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&v46->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x38u);
    }
  }
  PM_WeaponOffsets_Update(pm, v2);
LABEL_147:
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_WeaponOtherHandAvailable
==============
*/
char PM_WeaponOtherHandAvailable(const pmove_t *pm)
{
  playerState_s *ps; 
  int weaponState; 
  unsigned int v4; 
  const Weapon *CurrentWeaponForPlayer; 
  __int64 v6; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 886, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, pm->m_bgHandler) )
    goto LABEL_32;
  weaponState = ps->weapState[0].weaponState;
  v4 = weaponState;
  if ( weaponState >= 26 && weaponState <= 32 )
  {
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    if ( !BG_OffhandIsUnderbarrelWeapon(pm->weaponMap, ps, pm->cmd.buttons) || !BG_HasUnderbarrelShotgun(CurrentWeaponForPlayer) )
      return 0;
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 900, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
    v4 = ps->weapState[0].weaponState;
  }
  if ( v4 > 0x32 || (v6 = 0x4400001C01BB6i64, !_bittest64(&v6, (int)v4)) )
  {
LABEL_32:
    if ( ps->weapState[0].weaponState != 78 && (!BG_Offhand_IsPlayingGrenadeGesture(pm->weaponMap, ps) || BG_Offhand_GrenadeGestureInterruptable(pm->weaponMap, ps, pm->cmd.serverTime)) && (!BG_Offhand_IsPlayingGesture(pm->weaponMap, ps, OHGT_WEAPON) || BG_Offhand_ScriptWeaponInterruptable(pm->weaponMap, ps, pm->cmd.serverTime)) && (!BG_HasLadderHand(ps) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u)) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) && !BG_GameInterface_IsTakedownPending(ps) && BG_NightVisionInterruptable(pm->weaponMap, ps, pm->cmd.serverTime) )
      return 1;
  }
  return 0;
}

/*
==============
PM_Weapon_AllowReload
==============
*/
__int64 PM_Weapon_AllowReload(const BgWeaponMap *weaponMap, playerState_s *ps, PlayerHandIndex hand)
{
  bool v6; 
  const Weapon *CurrentWeaponForPlayer; 
  int AmmoInClipForWeapon; 
  int AmmoNotInClip; 
  int v10; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6856, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6857, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  AmmoInClipForWeapon = BG_GetAmmoInClipForWeapon(ps, CurrentWeaponForPlayer, v6, hand);
  AmmoNotInClip = BG_GetAmmoNotInClip(ps, CurrentWeaponForPlayer, v6);
  if ( BG_ReloadDisabled(CurrentWeaponForPlayer, v6) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) || !AmmoNotInClip || AmmoInClipForWeapon >= BG_GetClipSize(ps, CurrentWeaponForPlayer, v6) )
    return 0i64;
  if ( BG_NoPartialReload(CurrentWeaponForPlayer, v6) )
  {
    v10 = BG_ReloadAmmoAdd(CurrentWeaponForPlayer, v6);
    if ( v10 && v10 < BG_GetClipSize(ps, CurrentWeaponForPlayer, v6) )
    {
      if ( BG_GetClipSize(ps, CurrentWeaponForPlayer, v6) - AmmoInClipForWeapon < v10 )
        return 0i64;
    }
    else if ( AmmoInClipForWeapon )
    {
      return 0i64;
    }
  }
  return 1i64;
}

/*
==============
PM_Weapon_Allowed
==============
*/
char PM_Weapon_Allowed(pmove_t *pm, int msec)
{
  BgWeaponMap *weaponMap; 
  playerState_s *ps; 
  const dvar_t *v6; 
  bool v7; 
  const char *v8; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  bool v12; 
  const char *v13; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17389, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  weaponMap = pm->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17392, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17395, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->pm_type < 7 || !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
  {
    if ( BG_Weapons_ViewModelOverride(pm, msec) )
    {
      v10 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
      if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.enabled )
      {
        if ( pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
          Com_Printf(17, "HighPriorityDebug - PM_Weapon_Allowed SERVER false, BG_Weapons_ViewModelOverride\n");
        else
          Com_Printf(17, "HighPriorityDebug - PM_Weapon_Allowed CLIENT false, BG_Weapons_ViewModelOverride\n");
        return 0;
      }
    }
    else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xFu) )
    {
      v11 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
      if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v11->current.enabled )
      {
        if ( pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
          Com_Printf(17, "HighPriorityDebug - PM_Weapon_Allowed SERVER false, PMoveFlagsCommon::RESPAWNED\n");
        else
          Com_Printf(17, "HighPriorityDebug - PM_Weapon_Allowed CLIENT false, PMoveFlagsCommon::RESPAWNED\n");
        return 0;
      }
    }
    else
    {
      if ( !BG_Turret_IsUsingNonRemoteTurret(ps) )
        return 1;
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_highPriorityWeaponDebugPrint, "bg_highPriorityWeaponDebugPrint") )
      {
        v12 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
        v13 = "HighPriorityDebug - PM_Weapon_Allowed SERVER false, BG_IsTurretActive\n";
        if ( !v12 )
          v13 = "HighPriorityDebug - PM_Weapon_Allowed CLIENT false, BG_IsTurretActive\n";
        Com_Printf(17, v13);
      }
    }
    return 0;
  }
  v6 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
  if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    v7 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
    v8 = "HighPriorityDebug - PM_Weapon_Allowed SERVER false, ps->pm_type >= PM_DEAD\n";
    if ( !v7 )
      v8 = "HighPriorityDebug - PM_Weapon_Allowed CLIENT false, ps->pm_type >= PM_DEAD\n";
    Com_Printf(17, v8);
  }
  BG_SetCurrentWeaponForPlayer(weaponMap, ps, &NULL_WEAPON, pm->m_bgHandler);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u);
  return 0;
}

/*
==============
PM_Weapon_ApplyEmptyCooldown
==============
*/
void PM_Weapon_ApplyEmptyCooldown(pmove_t *pm, PlayerHandIndex hand, const Weapon *r_weapon, const bool isAlternate)
{
  __int64 v4; 
  playerState_s *ps; 
  double EmptyCooldown; 
  int v10; 

  v4 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2603, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2603, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  EmptyCooldown = BG_WeaponCharge_GetEmptyCooldown(r_weapon, isAlternate);
  if ( *(float *)&EmptyCooldown > 0.0 )
  {
    v10 = (int)(float)(*(float *)&EmptyCooldown * 1000.0);
    if ( v10 > 0x3FFF )
      v10 = 0x3FFF;
    if ( v10 < 0 )
      v10 = 0;
    ps->weapState[v4].weaponChargeCooldownTime = v10;
  }
}

/*
==============
PM_Weapon_BeginMelee
==============
*/
void PM_Weapon_BeginMelee(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  PlayerHandIndex i; 
  int meleeChargeEnt; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11097, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11098, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11100, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11100, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  for ( i = WEAPON_HAND_DEFAULT; i <= BG_PlayerLastWeaponHandForViewWeapon(pm->weaponMap, ps); PM_Weapon_ResetShotCount(ps, i++) )
    ;
  PM_Weapon_CheckForPendingAltModeChange(pm, pml);
  if ( (pm->cmd.buttons & 0x200000) != 0 )
    PM_ExitAimDownSight(pm);
  meleeChargeEnt = pm->cmd.meleeChargeEnt;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 374, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)(ps->weapState[0].queuedActionState - 3) <= 1 )
  {
    meleeChargeEnt = ps->meleeChargeEntQueued;
    ps->meleeChargeEntQueued = 2047;
    ps->weapState[0].queuedActionState = QAS_STATE_NONE;
  }
  PM_MeleeChargeStart(pm, pml, meleeChargeEnt);
  PM_Weapon_MeleeInit(pm, pml->msec, ps, &pml->holdrand);
}

/*
==============
PM_Weapon_BeginWeaponRaise
==============
*/
void PM_Weapon_BeginWeaponRaise(pmove_t *pm, pml_t *pml, WeaponAnimNumber anim, unsigned int time, float aim, int altSwitch, PlayerHandIndex hand, int previousWeaponState)
{
  playerState_s *ps; 
  bool IsSkydiving; 
  __int64 v14; 
  int *p_weaponState; 
  bool v16; 
  int v17; 
  const Weapon *CurrentWeaponForPlayer; 
  const WeaponDef *v19; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5999, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5999, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( aim < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6000, ASSERT_TYPE_ASSERT, "(aim >= 0)", (const char *)&queryFormat, "aim >= 0") )
    __debugbreak();
  ps->weapCommon.aimSpreadScale = aim;
  PM_SetProneMovementOverride(ps);
  IsSkydiving = BG_Skydive_IsSkydiving(ps);
  if ( time && !IsSkydiving )
  {
    if ( ps->ladderState.mode == LADDER_MODE_SLIDE )
    {
      anim = WEAP_LADDER_SLIDE;
      ps->weapState[hand].weaponState = 49;
    }
    else
    {
      if ( BG_Ladder_CanClimb(ps) )
      {
        v14 = hand;
        p_weaponState = &ps->weapState[hand].weaponState;
        if ( *p_weaponState == 47 )
          return;
        if ( hand == WEAPON_HAND_LEFT || (v16 = !BG_Ladder_CanAim(pm->weaponMap, ps), v17 = 6, v16) )
          v17 = 5;
        *p_weaponState = v17;
        goto LABEL_27;
      }
      if ( altSwitch )
      {
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
        v19 = BG_WeaponDef(CurrentWeaponForPlayer, 1);
        if ( BG_WeaponIsDualWield(CurrentWeaponForPlayer) && v19->dualWieldType == DUAL_WIELD_TYPE_ALT_MODE )
          ps->weapState[hand].weaponState = 4;
        else
          ps->weapState[hand].weaponState = (previousWeaponState == 10) + 2;
      }
      else
      {
        ps->weapState[hand].weaponState = 1;
      }
    }
    v14 = hand;
LABEL_27:
    ps->weapState[v14].weaponTime = time;
    if ( ps->pm_type < 7 )
      PM_SetNextWeaponAnim(ps, anim, hand);
    return;
  }
  if ( hand == WEAPON_HAND_DEFAULT )
    PM_Weapon_FinishWeaponRaise(pm, ps, pml, WEAPON_HAND_DEFAULT);
}

/*
==============
PM_Weapon_BurstFirePending
==============
*/
bool PM_Weapon_BurstFirePending(const BgWeaponMap *weaponMap, const playerState_s *ps, PlayerHandIndex hand)
{
  __int64 v3; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v7; 
  bool v8; 
  weapFireType_t WeaponFireType; 
  bool v10; 
  AmmoStore result; 
  AmmoStore r_clipIndex; 

  v3 = hand;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8021, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8022, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v7 = CurrentWeaponForPlayer;
  v10 = 0;
  if ( CurrentWeaponForPlayer->weaponIdx )
  {
    if ( BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) )
      v8 = ps && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Du);
    else
      v8 = BG_UsingAlternate(ps);
    r_clipIndex = *BG_AmmoStoreForWeapon(&result, v7, v8);
    if ( BG_GetAmmoInClipForClipType(ps, &r_clipIndex, (PlayerHandIndex)v3) )
    {
      WeaponFireType = BG_GetWeaponFireType(v7, v8);
      if ( WeaponFireType )
      {
        if ( (unsigned int)(WeaponFireType - 3) > 2 && ps->weapState[v3].weaponShotCount && !BG_ShotLimitReached(ps, v7, (PlayerHandIndex)v3) )
          return 1;
      }
    }
  }
  return v10;
}

/*
==============
PM_Weapon_CanUseOffhand
==============
*/
char PM_Weapon_CanUseOffhand(const pmove_t *pm, const playerState_s *ps, OffhandSlot triggeredOffhandSlot)
{
  OffhandDisableResult v6; 
  bool v7; 
  bool v8; 
  bool v9; 
  const Weapon *ViewmodelWeapon; 
  unsigned __int64 weaponState; 
  __int64 v12; 
  char v13; 
  bool v14; 
  bool HasDetonator; 
  int v16; 
  int v17; 
  const Weapon *OffHandWeaponForPlayer; 
  bool v19; 
  int v20; 
  Weapon r_weapon; 
  Weapon v23; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13158, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsTurretActive(ps) || BG_Skydive_IsSkydiving(ps) || BG_HasLadderHand(ps) || BG_Ladder_IsActive(ps) || BG_IsPlayerInExecution(ps) || ps->weapState[0].weaponState == 62 && triggeredOffhandSlot != OFFHAND_SLOT_TAUNT )
    return 0;
  v6 = BG_Weapon_OffhandDisabled(ps);
  if ( v6 )
  {
    if ( triggeredOffhandSlot != OFFHAND_SLOT_TAUNT || (unsigned int)(v6 - 1) > 1 )
      return 0;
  }
  if ( BG_IsVehicleActive(ps) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) || (unsigned int)(ps->weapState[0].weaponState - 22) <= 2 && BG_MeleeChargeShouldLockView(pm->weaponMap, ps, pm->m_bgHandler) )
    return 0;
  v7 = PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, pm->m_bgHandler);
  v8 = v7;
  if ( ps->weapState[0].weaponState == 46 && !v7 && !Slide_CanShootAndSlide(ps) )
    return 0;
  r_weapon = *BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v9 = BG_UsingAlternate(ps);
  if ( BG_IsForceUseWeapon(&r_weapon, v9) )
  {
    if ( !v8 )
      return 0;
  }
  if ( PM_Weapon_IsHoldingOffHand(pm) )
    return 0;
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
  if ( BG_IsBallWeapon(ViewmodelWeapon) && (unsigned __int8)(triggeredOffhandSlot - 1) <= 1u )
    return 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT_ADS|0x80) && BG_IsThrowingAxe(ViewmodelWeapon) )
  {
    weaponState = ps->weapState[0].weaponState;
    if ( (unsigned int)weaponState <= 0x35 )
    {
      v12 = 0x38000001C30000i64;
      if ( _bittest64(&v12, weaponState) )
        return 0;
    }
  }
  v13 = 0;
  v14 = 0;
  HasDetonator = 0;
  if ( triggeredOffhandSlot == OFFHAND_SLOT_SPECIAL )
  {
    v16 = ps->weapState[0].weaponState;
    if ( (unsigned int)(v16 - 26) > 6 || v16 == 26 )
    {
      v17 = pm->cmd.serverTime - ps->weapCommon.offhandUseTime;
      v14 = v17 <= Dvar_GetInt_Internal_DebugName(DCONST_DVARMPSPINT_offhand_special_activate_time_window, "offhand_special_activate_time_window");
    }
    OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(pm->weaponMap, ps);
    if ( OffHandWeaponForPlayer->weaponIdx && BG_GetEquippedWeaponStateConst(pm->weaponMap, ps, OffHandWeaponForPlayer)->offhandSlot == OFFHAND_SLOT_SPECIAL )
      v13 = 1;
  }
  else if ( (pm->cmd.buttons & 0x200000000000000i64) != 0 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x1Eu) && (unsigned __int8)(triggeredOffhandSlot - 1) <= 1u )
  {
    v23 = *PM_Weapon_GetOffHandWeaponForSlot(pm->weaponMap, ps, triggeredOffhandSlot);
    HasDetonator = BG_WeapHasDetonator(&v23, 0);
  }
  if ( !BG_NightVisionInterruptable(pm->weaponMap, ps, pm->cmd.serverTime) )
    return 0;
  v19 = 0;
  if ( BG_Offhand_IsPlayingGesture(pm->weaponMap, ps, OHGT_WEAPON) )
    v19 = !BG_Offhand_ScriptWeaponInterruptable(pm->weaponMap, ps, pm->cmd.serverTime);
  if ( BG_Offhand_IsPlayingGrenadeGesture(pm->weaponMap, ps) && !BG_Offhand_GrenadeGestureInterruptable(pm->weaponMap, ps, pm->cmd.serverTime) )
    v19 = 1;
  if ( ((v20 = ps->weapState[0].weaponState, (unsigned int)(v20 - 26) <= 6) && v20 != 32 || v19) && (triggeredOffhandSlot != OFFHAND_SLOT_SPECIAL || !v14 || v13) && ((unsigned __int8)(triggeredOffhandSlot - 1) > 1u || !HasDetonator) )
    return 0;
  else
    return 1;
}

/*
==============
PM_Weapon_CancelInspect
==============
*/
void PM_Weapon_CancelInspect(pmove_t *pm)
{
  playerState_s *ps; 
  PlayerHandIndex v3; 
  int WeaponHand; 
  __int64 v5; 
  QueuedActionState *p_queuedActionState; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7815, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7815, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = WEAPON_HAND_DEFAULT;
  WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
  if ( WeaponHand >= 0 )
  {
    v5 = WeaponHand + 1i64;
    p_queuedActionState = &ps->weapState[0].queuedActionState;
    do
    {
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 374, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( *p_queuedActionState == QAS_INSPECT )
      {
        if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 366, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        *p_queuedActionState = QAS_STATE_NONE;
      }
      if ( *((_DWORD *)p_queuedActionState - 10) == 78 )
      {
        PM_Weapon_Idle(pm, v3);
        if ( ps->pm_type < 7 )
          PM_SetNextWeaponAnim(ps, WEAP_FORCE_IDLE, v3);
      }
      ++v3;
      p_queuedActionState += 20;
      --v5;
    }
    while ( v5 );
  }
  ps->weapCommon.inspectCancelTime = ps->serverTime;
}

/*
==============
PM_Weapon_Charge_CanStartCharging
==============
*/
bool PM_Weapon_Charge_CanStartCharging(const pmove_t *pm, const PlayerHandIndex hand)
{
  __int64 v2; 
  playerState_s *ps; 
  int *v5; 
  int v6; 
  int v7; 
  __int64 v8; 
  const Weapon *CurrentWeaponForPlayer; 
  unsigned __int64 v10; 
  __int64 v11; 
  bool result; 

  v2 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2714, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2714, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = &ps->commandTime + 20 * v2;
  v6 = v5[339];
  result = 0;
  if ( (unsigned int)(v6 - 51) > 2 )
  {
    if ( (unsigned int)(v6 - 16) > 0x3E || (v7 = v6 - 16, v8 = 0x40000000000001C3i64, !_bittest64(&v8, v7)) )
    {
      CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
      if ( !BG_PlayerWeaponNeedsRechamber(ps, CurrentWeaponForPlayer, (PlayerHandIndex)v2) && v5[347] <= 0 )
      {
        if ( (unsigned int)(v5[339] - 18) > 3 || PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, (PlayerHandIndex)v2, pm->m_bgHandler) )
        {
          v10 = v5[339];
          if ( (unsigned int)v10 > 0x32 )
            return 1;
          v11 = 0x4006000001F80i64;
          if ( !_bittest64(&v11, v10) )
            return 1;
        }
        if ( v5[335] <= 0 )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
PM_Weapon_Charge_ClearState
==============
*/
void PM_Weapon_Charge_ClearState(pmove_t *pm, PlayerHandIndex hand)
{
  __int64 v2; 
  playerState_s *ps; 
  __int64 v5; 

  v2 = hand;
  if ( !pm )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2469, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2471, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
  }
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2471, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2473, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( ( sizeof( *array_counter( ps->weapState ) ) + 0 ) )", "hand doesn't index ARRAY_COUNT( ps->weapState )\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  ps->weapState[v2].weaponChargeCooldownTime = 0;
  PM_Weapon_Charge_SetChargeAmount(pm, (PlayerHandIndex)v2, 0);
}

/*
==============
PM_Weapon_Charge_ContinueIdleCharge
==============
*/
bool PM_Weapon_Charge_ContinueIdleCharge(const BgWeaponMap *weaponMap, playerState_s *ps, const WeaponDef *weapDef, PlayerHandIndex hand)
{
  __int64 v4; 

  v4 = hand;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3146, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3147, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->weapState[v4].weaponState == 52 && PM_Weapon_Charge_DoesWantToIdleCharge(weaponMap, ps);
}

/*
==============
PM_Weapon_Charge_DoesWantToIdleCharge
==============
*/
bool PM_Weapon_Charge_DoesWantToIdleCharge(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  bool v4; 
  const Weapon *CurrentWeaponForPlayer; 
  WeaponChargeType Type; 
  double v8; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3037, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3038, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  Type = BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v4);
  if ( Type == HALF_HALF )
    return 1;
  if ( Type != LONG )
    return 0;
  v8 = BG_WeaponADSFractionAffectedByReload(weaponMap, ps);
  return *(float *)&v8 >= 1.0;
}

/*
==============
PM_Weapon_Charge_EnterChargeState
==============
*/
void PM_Weapon_Charge_EnterChargeState(const pmove_t *pm, pml_t *pml, BgWeaponMap *weaponMap, PlayerHandIndex hand, unsigned int *holdrand)
{
  __int64 v5; 
  playerState_s *ps; 
  bool v11; 
  bool v12; 
  bool v13; 
  weapAnimFiles_t v14; 
  WeaponAnimNumber v15; 
  bool v16; 
  unsigned int *v17; 
  const Weapon *holdranda; 

  v5 = hand;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2482, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !holdrand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2483, ASSERT_TYPE_ASSERT, "(holdrand)", (const char *)&queryFormat, "holdrand") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2485, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2485, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v17) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2487, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( ( sizeof( *array_counter( ps->weapState ) ) + 0 ) )", "hand doesn't index ARRAY_COUNT( ps->weapState )\n\t%i not in [0, %i)", v17, 2) )
      __debugbreak();
  }
  holdranda = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v11 = BG_UseADSFireAnim(weaponMap, ps);
  ps->weapState[v5].weaponState = 51;
  v12 = BG_PlayerDualWielding(ps) == 1;
  v13 = BG_UsingAlternate(ps);
  v14 = WEAP_ANIM_ADS_CHARGE_IN;
  if ( !v11 )
    v14 = WEAP_ANIM_CHARGE_IN;
  ps->weapState[v5].weaponTime = BG_ChargeWeaponInTime(ps, v14, holdranda, v13, v12);
  BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v5, 0, NULL);
  if ( ps->pm_type < 7 )
  {
    v15 = WEAP_CHARGE_IN;
    if ( v11 )
      v15 = WEAP_ADS_CHARGE_IN;
    PM_SetNextWeaponAnim(ps, v15, (PlayerHandIndex)v5);
  }
  v16 = BG_UsingAlternate(ps);
  PM_Weapon_PrepareThrowAxeAnimScriptEvent(pm, ps, holdranda, v16, holdrand);
  BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_WEAPONCHARGEIN, 0, 0, &pml->holdrand);
}

/*
==============
PM_Weapon_Charge_FireWeapon
==============
*/
bool PM_Weapon_Charge_FireWeapon(pmove_t *pm, const WeaponDef *weapDef, PlayerHandIndex hand)
{
  __int64 v3; 
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v8; 
  WeaponChargeType Type; 
  __int64 v10; 
  int weaponChargeAmount; 
  BOOL v12; 
  bool v13; 
  double CostPerShot; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  bool v19; 
  bool result; 
  bool v21; 
  bool v22; 

  v3 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2619, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2619, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2621, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v8 = BG_UsingAlternate(ps);
  Type = BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v8);
  if ( Type == NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2626, ASSERT_TYPE_ASSERT, "(chargeType != WeaponChargeType::NONE)", (const char *)&queryFormat, "chargeType != WeaponChargeType::NONE") )
    __debugbreak();
  v10 = v3;
  weaponChargeAmount = ps->weapState[v3].weaponChargeAmount;
  v12 = weaponChargeAmount == 4095;
  switch ( Type )
  {
    case LONG_LONG:
      goto LABEL_38;
    case MAX_INT:
      if ( weaponChargeAmount == 4095 )
        ps->weapState[v10].weaponFiredAtMaxCharge = 1;
      v21 = weaponChargeAmount == 4095;
      if ( weaponChargeAmount != 4095 )
        goto LABEL_40;
      goto LABEL_39;
    case SIZE_T:
LABEL_38:
      ps->weapState[v10].weaponFiredAtMaxCharge = v12;
      v21 = 1;
LABEL_39:
      PM_Weapon_Charge_SendFiredEvent(pm, (PlayerHandIndex)v3);
LABEL_40:
      PM_Weapon_Charge_ClearState(pm, (PlayerHandIndex)v3);
      v22 = BG_UsingAlternate(ps);
      PM_Weapon_ApplyEmptyCooldown(pm, (PlayerHandIndex)v3, CurrentWeaponForPlayer, v22);
      return v21;
  }
  v13 = BG_UsingAlternate(ps);
  CostPerShot = BG_WeaponCharge_GetCostPerShot(CurrentWeaponForPlayer, v13);
  if ( *(float *)&CostPerShot <= 0.0 )
  {
    PM_Weapon_Charge_SendFiredEvent(pm, (PlayerHandIndex)v3);
    result = 1;
    ps->weapState[v10].weaponFiredAtMaxCharge = v12;
  }
  else
  {
    v15 = (int)(float)(*(float *)&CostPerShot * 4095.0);
    if ( v15 > 4095 )
      v15 = 4095;
    v16 = ps->weapState[v10].weaponChargeAmount;
    v17 = v16;
    if ( v15 < 0 )
      v15 = 0;
    if ( v16 >= v15 )
    {
      PM_Weapon_Charge_SendFiredEvent(pm, (PlayerHandIndex)v3);
      v17 = ps->weapState[v10].weaponChargeAmount;
    }
    v18 = v17 - v15;
    if ( v18 > 4095 )
      v18 = 4095;
    if ( v18 < 0 )
      v18 = 0;
    PM_Weapon_Charge_SetChargeAmount(pm, (PlayerHandIndex)v3, v18);
    if ( !ps->weapState[v10].weaponChargeAmount )
    {
      v19 = BG_UsingAlternate(ps);
      PM_Weapon_ApplyEmptyCooldown(pm, (PlayerHandIndex)v3, CurrentWeaponForPlayer, v19);
    }
    if ( v16 >= v15 )
      ps->weapState[v10].weaponFiredAtMaxCharge = v12;
    return v16 >= v15;
  }
  return result;
}

/*
==============
PM_Weapon_Charge_ProcessChargeInState
==============
*/
char PM_Weapon_Charge_ProcessChargeInState(pmove_t *pm, PlayerHandIndex currentHand, int delayedAction)
{
  __int64 v3; 
  playerState_s *ps; 
  int *v7; 
  bool v8; 
  const Weapon *CurrentWeaponForPlayer; 
  WeaponChargeType Type; 
  bool v11; 
  bool v12; 
  WeaponAnimNumber v13; 
  __int64 justTest; 

  v3 = currentHand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3059, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3059, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(justTest) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3060, ASSERT_TYPE_ASSERT, "(unsigned)( currentHand ) < (unsigned)( NUM_WEAPON_HANDS )", "currentHand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", justTest, 2) )
      __debugbreak();
  }
  v7 = &ps->commandTime + 20 * v3;
  v8 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  if ( !CurrentWeaponForPlayer->weaponIdx )
    return 1;
  Type = BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v8);
  if ( Type == NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3074, ASSERT_TYPE_ASSERT, "(chargeType != WeaponChargeType::NONE)", (const char *)&queryFormat, "chargeType != WeaponChargeType::NONE") )
    __debugbreak();
  v11 = PM_Weapon_ShouldBeChargingOrFiringShared(pm, delayedAction, (PlayerHandIndex)v3, 0, 0, 1, 0) != 0;
  if ( v7[335] <= 0 )
  {
    v12 = BG_UseADSFireAnim(pm->weaponMap, ps);
    v7[339] = 52;
    v7[335] = 0;
    v13 = WEAP_CHARGE_LOOP;
    if ( v12 )
      v13 = WEAP_ADS_CHARGE_LOOP;
    BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v3, 0, NULL);
    if ( (v7[331] & 0xFFFFFF7F) != v13 && ps->pm_type < 7 )
      PM_SetNextWeaponAnim(ps, v13, (PlayerHandIndex)v3);
  }
  if ( Type == HALF || (unsigned int)(Type - 6) <= 1 )
  {
    if ( !v11 || v7[346] != 4095 )
      return 1;
  }
  else if ( (unsigned int)(Type - 4) <= 1 && !v11 )
  {
    return 1;
  }
  return 0;
}

/*
==============
PM_Weapon_Charge_ProcessLoopState
==============
*/
char PM_Weapon_Charge_ProcessLoopState(pmove_t *pm, pml_t *pml, PlayerHandIndex hand, int delayedAction, unsigned int *holdrand)
{
  __int64 v6; 
  playerState_s *ps; 
  bool v9; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v11; 
  WeaponChargeType Type; 
  bool v13; 
  bool v14; 
  double Gain; 
  double LossWhenIdle; 
  int v17; 
  bool v18; 
  int v19; 
  bool v21; 
  bool v22; 
  bool v23; 
  bool v24; 
  bool v25; 

  v6 = hand;
  if ( !holdrand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3164, ASSERT_TYPE_ASSERT, "(holdrand)", (const char *)&queryFormat, "holdrand") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3166, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3166, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v11 = CurrentWeaponForPlayer;
  if ( !CurrentWeaponForPlayer->weaponIdx )
    return 1;
  Type = BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v9);
  if ( Type == NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3178, ASSERT_TYPE_ASSERT, "(chargeType != WeaponChargeType::NONE)", (const char *)&queryFormat, "chargeType != WeaponChargeType::NONE") )
    __debugbreak();
  v13 = PM_Weapon_ShouldBeChargingOrFiringShared(pm, delayedAction, (PlayerHandIndex)v6, 0, 0, 1, 0) != 0;
  v14 = 0;
  v25 = Type == HALF;
  v22 = Type == LONG_LONG;
  v23 = Type == MAX_INT;
  v24 = Type == SIZE_T;
  v21 = Type == PTRDIFF;
  if ( Type == HALF || Type == PTRDIFF )
  {
    v17 = delayedAction;
    v14 = v13;
  }
  else if ( Type == LONG_LONG || Type == MAX_INT || Type == SIZE_T )
  {
    v17 = delayedAction;
    if ( PM_Weapon_ShouldBeChargingOrFiringShared(pm, delayedAction, (PlayerHandIndex)v6, 0, 0, 1, 1) )
      v14 = 1;
  }
  else
  {
    Gain = BG_WeaponCharge_GetGain(v11, v9);
    if ( *(float *)&Gain <= 0.0 || (LossWhenIdle = BG_WeaponCharge_GetLossWhenIdle(v11, v9), ps->weapState[v6].weaponChargeAmount == 4095) && *(float *)&LossWhenIdle == 0.0 )
    {
      v17 = delayedAction;
    }
    else
    {
      v17 = delayedAction;
      if ( !v13 )
        v14 = 1;
    }
  }
  if ( v14 )
  {
    v18 = BG_UseADSFireAnim(pm->weaponMap, ps);
    v19 = 62;
    if ( v18 )
      v19 = 65;
    if ( (ps->weapState[v6].weapAnim & 0xFFFFFF7F) != v19 )
      PM_Weapon_Charge_ProcessChargeInState(pm, (PlayerHandIndex)v6, v17);
    PM_Weapon_PrepareThrowAxeAnimScriptEvent(pm, ps, v11, v9, holdrand);
  }
  else
  {
    PM_Weapon_Charge_TransitionToOut(pm, pml, pm->weaponMap, (PlayerHandIndex)v6);
  }
  if ( v25 || v21 )
  {
    if ( ps->weapState[v6].weaponChargeAmount != 4095 )
      return 1;
  }
  else if ( (v22 || v23 || v24) && !v13 )
  {
    return 1;
  }
  return 0;
}

/*
==============
PM_Weapon_Charge_SendFiredEvent
==============
*/
void PM_Weapon_Charge_SendFiredEvent(pmove_t *pm, PlayerHandIndex hand)
{
  __int64 v2; 
  playerState_s *ps; 

  v2 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2593, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2593, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BG_AddPredictableEventToPlayerstate(EV_WEAPON_CHARGED_WEAPON_FIRED, ps->weapState[v2].weaponChargeAmount, pm->cmd.serverTime, pm->weaponMap, ps);
}

/*
==============
PM_Weapon_Charge_SetChargeAmount
==============
*/
void PM_Weapon_Charge_SetChargeAmount(pmove_t *pm, PlayerHandIndex hand, int amount)
{
  __int64 v3; 
  playerState_s *ps; 
  __int64 v7; 

  v3 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2450, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2451, ASSERT_TYPE_ASSERT, "(pm->weaponMap)", (const char *)&queryFormat, "pm->weaponMap") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2453, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2455, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( ( sizeof( *array_counter( ps->weapState ) ) + 0 ) )", "hand doesn't index ARRAY_COUNT( ps->weapState )\n\t%i not in [0, %i)", v7, 2) )
      __debugbreak();
  }
  if ( amount < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2457, ASSERT_TYPE_ASSERT, "(amount >= ( 0 ))", (const char *)&queryFormat, "amount >= PLAYER_WEAPONCHARGE_MIN") )
    __debugbreak();
  if ( amount > 4095 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2458, ASSERT_TYPE_ASSERT, "(amount <= ( ( 1 << 12 ) - 1 ))", (const char *)&queryFormat, "amount <= PLAYER_WEAPONCHARGE_MAX") )
    __debugbreak();
  if ( ps->weapState[v3].weaponChargeAmount != amount )
    ps->weapState[v3].weaponChargeAmount = amount;
}

/*
==============
PM_Weapon_Charge_StartChargeTest
==============
*/
char PM_Weapon_Charge_StartChargeTest(pmove_t *pm, pml_t *pml, PlayerHandIndex hand, int delayedAction, const Weapon *r_weapon, unsigned int *holdrand)
{
  unsigned int *v6; 
  playerState_s *ps; 
  bool v11; 
  int v12; 
  int v13; 
  int AmmoNotInClip; 
  int AmmoInClipForWeapon; 

  v6 = holdrand;
  if ( !holdrand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2870, ASSERT_TYPE_ASSERT, "(holdrand)", (const char *)&queryFormat, "holdrand") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2872, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2872, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v11 = BG_UsingAlternate(ps);
  if ( !PM_Weapon_Charge_CanStartCharging(pm, hand) )
    return 0;
  v12 = 0;
  if ( !PM_Weapon_ShouldBeChargingOrFiringShared(pm, delayedAction, hand, 0, 0, 1, 1) )
    return 0;
  v13 = BG_RequiredAmmoPerShot(r_weapon, v11);
  AmmoInClipForWeapon = BG_GetAmmoInClipForWeapon(ps, r_weapon, v11, hand);
  if ( AmmoInClipForWeapon >= v13 )
  {
    PM_Weapon_Charge_EnterChargeState(pm, pml, pm->weaponMap, hand, v6);
  }
  else
  {
    LOBYTE(holdrand) = 0;
    PM_Weapon_CheckForFireOrChargeButton(pm, hand, 1, 0, (bool *)&holdrand);
    if ( (_BYTE)holdrand )
    {
      AmmoNotInClip = BG_GetAmmoNotInClip(ps, r_weapon, v11);
      LOBYTE(v12) = hand == WEAPON_HAND_LEFT;
      BG_AddPredictableEventToPlayerstate((const entity_event_t)(v12 + 16), AmmoNotInClip + AmmoInClipForWeapon >= v13, pm->cmd.serverTime, pm->weaponMap, ps);
      return 1;
    }
  }
  return 1;
}

/*
==============
PM_Weapon_Charge_StartChargingCheck
==============
*/
void PM_Weapon_Charge_StartChargingCheck(pmove_t *pm, pml_t *pml, PlayerHandIndex hand, int delayedAction, unsigned int *holdrand)
{
  playerState_s *ps; 
  bool v10; 
  const Weapon *CurrentWeaponForPlayer; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  bool v13; 

  if ( !holdrand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2912, ASSERT_TYPE_ASSERT, "(holdrand)", (const char *)&queryFormat, "holdrand") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2915, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2915, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  if ( (BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v10) == NONE || !PM_Weapon_Charge_StartChargeTest(pm, pml, hand, delayedAction, CurrentWeaponForPlayer, holdrand)) && BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) )
  {
    if ( BG_WeaponCharge_GetType(CurrentWeaponForPlayer, !v10) )
    {
      p_weapFlags = &ps->weapCommon.weapFlags;
      v13 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu);
      PM_Weapon_UpdateAltFireFlags(pm, hand, CurrentWeaponForPlayer, 0);
      if ( v13 != GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu) && !PM_Weapon_Charge_StartChargeTest(pm, pml, hand, delayedAction, CurrentWeaponForPlayer, holdrand) )
      {
        if ( v13 )
          GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x1Bu);
        else
          GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 0x1Bu);
      }
    }
  }
}

/*
==============
PM_Weapon_Charge_TransitionToOut
==============
*/
void PM_Weapon_Charge_TransitionToOut(pmove_t *pm, pml_t *pml, BgWeaponMap *weaponMap, PlayerHandIndex hand)
{
  __int64 v4; 
  playerState_s *ps; 
  bool v8; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 
  WeaponAnimNumber v11; 
  int v12; 
  weapAnimFiles_t v13; 
  unsigned int *holdrand; 

  v4 = hand;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3125, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(holdrand) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3126, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", holdrand, 2) )
      __debugbreak();
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3128, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3128, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v10 = BG_UseADSFireAnim(weaponMap, ps);
  v11 = WEAP_CHARGE_OUT;
  if ( v10 )
    v11 = WEAP_ADS_CHARGE_OUT;
  ps->weapState[v4].weaponState = 53;
  v12 = BG_PlayerDualWielding(ps);
  v13 = WEAP_ANIM_ADS_CHARGE_OUT;
  if ( !v10 )
    v13 = WEAP_ANIM_CHARGE_OUT;
  ps->weapState[v4].weaponTime = BG_ChargeWeaponOutTime(ps, v13, CurrentWeaponForPlayer, v8, v12 == 1);
  BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v4, 0, NULL);
  if ( (ps->weapState[v4].weapAnim & 0xFFFFFF7F) != v11 && ps->pm_type < 7 )
    PM_SetNextWeaponAnim(ps, v11, (PlayerHandIndex)v4);
  BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_WEAPONCHARGEOUT, 0, 0, &pml->holdrand);
}

/*
==============
PM_Weapon_Charge_UpdateFrameDelta
==============
*/
void PM_Weapon_Charge_UpdateFrameDelta(pmove_t *pm, const pml_t *pml)
{
  playerState_s *ps; 
  bool v5; 
  const Weapon *CurrentWeaponForPlayer; 
  __int64 Type; 
  int WeaponHand; 
  PlayerHandIndex v9; 
  __int64 v10; 
  int *p_weaponChargeCooldownTime; 
  __int64 v12; 
  double LossWhenIdle; 
  int v14; 
  int v15; 
  double Gain; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  double CostPerShot; 

  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon_Charge_UpdateFrameDelta");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2509, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm", -2i64) )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2509, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2511, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  v5 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  Type = BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v5);
  WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
  v9 = WEAPON_HAND_DEFAULT;
  if ( WeaponHand >= 0 )
  {
    v10 = Type;
    p_weaponChargeCooldownTime = &ps->weapState[0].weaponChargeCooldownTime;
    v12 = WeaponHand + 1i64;
    do
    {
      if ( !BG_PlayerWeaponNeedsRechamber(ps, CurrentWeaponForPlayer, v9) )
      {
        if ( v10 )
        {
          if ( (unsigned int)(*(p_weaponChargeCooldownTime - 8) - 51) <= 1 )
          {
            Gain = BG_WeaponCharge_GetGain(CurrentWeaponForPlayer, v5);
            if ( *(float *)&Gain > 0.0 )
            {
              v17 = (int)(float)((float)(pml->frametime / *(float *)&Gain) * 4095.0);
              if ( v17 > 4095 )
                v17 = 4095;
              if ( v17 < 0 )
                v17 = 0;
              v18 = v17 + *(p_weaponChargeCooldownTime - 1);
              if ( v18 > 4095 )
                v18 = 4095;
              if ( v18 < 0 )
                v18 = 0;
              PM_Weapon_Charge_SetChargeAmount(pm, v9, v18);
            }
            PM_SetProneMovementOverride(ps);
          }
          else if ( *(p_weaponChargeCooldownTime - 1) > 0 )
          {
            LossWhenIdle = BG_WeaponCharge_GetLossWhenIdle(CurrentWeaponForPlayer, v5);
            if ( *(float *)&LossWhenIdle > 0.0 )
            {
              v14 = (int)(float)((float)(pml->frametime / *(float *)&LossWhenIdle) * 4095.0);
              if ( v14 > 4095 )
                v14 = 4095;
              if ( v14 < 0 )
                v14 = 0;
              v15 = *(p_weaponChargeCooldownTime - 1) - v14;
              if ( v15 > 4095 )
                v15 = 4095;
              if ( v15 < 0 )
                v15 = 0;
              PM_Weapon_Charge_SetChargeAmount(pm, v9, v15);
            }
          }
        }
        if ( *p_weaponChargeCooldownTime > 0 )
        {
          v19 = *p_weaponChargeCooldownTime - WeaponTimeModifiers(ps, pm->m_bgHandler, pml->msec, v9, CurrentWeaponForPlayer);
          v20 = 0;
          if ( v19 > 0 )
            v20 = v19;
          *p_weaponChargeCooldownTime = v20;
        }
        if ( (v10 == 1 || v10 == 7) && *(p_weaponChargeCooldownTime - 8) == 16 )
        {
          CostPerShot = BG_WeaponCharge_GetCostPerShot(CurrentWeaponForPlayer, v5);
          if ( *(float *)&CostPerShot == 0.0 )
            PM_Weapon_Charge_SetChargeAmount(pm, v9, 4095);
        }
      }
      ++v9;
      p_weaponChargeCooldownTime += 20;
      --v12;
    }
    while ( v12 );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_Weapon_Charge_WeaponFireCheck
==============
*/
char PM_Weapon_Charge_WeaponFireCheck(pmove_t *pm, const WeaponDef *weapDef, PlayerHandIndex hand)
{
  __int64 v3; 
  playerState_s *ps; 
  bool v7; 
  const Weapon *CurrentWeaponForPlayer; 
  WeaponChargeType Type; 
  char *v11; 

  v3 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2966, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2966, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2968, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v7 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  Type = BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v7);
  if ( Type )
  {
    if ( Type == HALF || (unsigned int)(Type - 6) <= 1 )
    {
      v11 = (char *)ps + 80 * v3;
      if ( *((_DWORD *)v11 + 339) != 16 )
      {
        if ( *((_DWORD *)v11 + 346) == 4095 )
          return PM_Weapon_Charge_FireWeapon(pm, weapDef, (PlayerHandIndex)v3);
        return 0;
      }
    }
    else
    {
      if ( (unsigned int)(Type - 4) <= 1 )
        return PM_Weapon_Charge_FireWeapon(pm, weapDef, (PlayerHandIndex)v3);
      if ( Type != LONG || ps->weapState[v3].weaponState != 16 )
      {
        if ( ps->weapState[v3].weaponChargeAmount )
          return PM_Weapon_Charge_FireWeapon(pm, weapDef, (PlayerHandIndex)v3);
        return 0;
      }
    }
  }
  else
  {
    ps->weapState[v3].weaponFiredAtMaxCharge = 0;
  }
  return 1;
}

/*
==============
PM_Weapon_CheckFiringAmmo
==============
*/
__int64 PM_Weapon_CheckFiringAmmo(playerState_s *ps, pmove_t *pm, pml_t *pml, PlayerHandIndex hand)
{
  __int64 v4; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v9; 
  int AmmoInClipForWeapon; 
  int v11; 
  int *v12; 
  int AmmoNotInClip; 
  bool v14; 
  bool v15; 
  bool v16; 
  bool v18; 

  v4 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9799, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9800, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9801, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v9 = BG_UsingAlternate(ps);
  if ( !CurrentWeaponForPlayer->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9805, ASSERT_TYPE_ASSERT, "(currentWeapon.weaponIdx != 0)", (const char *)&queryFormat, "currentWeapon.weaponIdx != WP_NONE") )
    __debugbreak();
  AmmoInClipForWeapon = BG_GetAmmoInClipForWeapon(ps, CurrentWeaponForPlayer, v9, (PlayerHandIndex)v4);
  v11 = BG_RequiredAmmoPerShot(CurrentWeaponForPlayer, v9);
  if ( AmmoInClipForWeapon >= v11 )
    return 1i64;
  v12 = &ps->commandTime + 20 * v4;
  if ( v12[335] > 0 || BG_Offhand_HasActiveOffhand(ps) && !BG_Offhand_ActiveOffhandIsInterruptable(pm) )
    return 0i64;
  AmmoNotInClip = BG_GetAmmoNotInClip(ps, CurrentWeaponForPlayer, v9);
  v18 = AmmoNotInClip + AmmoInClipForWeapon >= v11;
  v14 = AmmoNotInClip + AmmoInClipForWeapon >= v11 && BG_WeaponCanAutoReload(ps, CurrentWeaponForPlayer, v9);
  v15 = BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v9) == PTRDIFF && v12[339] == 53 && PM_WeaponClipEmpty(pm->weaponMap, ps, (PlayerHandIndex)v4);
  if ( BG_IsOffhandWeaponType(CurrentWeaponForPlayer, v9) )
  {
    if ( !v14 )
    {
LABEL_31:
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
      {
        v16 = (v12[331] & 0xFFFFFF7F) == 0;
        v12[339] = 0;
        v12[335] = 0;
        if ( !v16 && ps->pm_type < 7 )
          PM_SetNextWeaponAnim(ps, WEAP_IDLE, (PlayerHandIndex)v4);
        ps->weapState[v4].weapHandFlags |= 2u;
      }
      return 0i64;
    }
  }
  else if ( !v14 )
  {
    if ( BG_GetClipSize(ps, CurrentWeaponForPlayer, v9) > 0 && !v15 )
      BG_AddPredictableEventToPlayerstate((const entity_event_t)(((_DWORD)v4 == 1) + 16), v18, pm->cmd.serverTime, pm->weaponMap, ps);
    goto LABEL_31;
  }
  PM_BeginWeaponReload(ps, pm, pml, (PlayerHandIndex)v4);
  return 0i64;
}

/*
==============
PM_Weapon_CheckForAutoAltToggle
==============
*/
void PM_Weapon_CheckForAutoAltToggle(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const Weapon *ViewmodelWeapon; 
  const Weapon *RequestedWeapon; 
  int v7; 
  unsigned __int64 weaponState; 
  int v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  playerState_s *v13; 
  BgWeaponMap *weaponMap; 
  const Weapon *v15; 
  const dvar_t *v16; 
  int integer; 
  playerState_s *v18; 
  int lastCombatTime; 
  int v20; 
  float fWeaponPosFrac; 
  double v22; 
  int v23; 
  WeaponAnimNumber v24; 
  BgWeaponMap *v25; 
  const Weapon *v26; 
  float fAdditivePosFrac; 
  const Weapon *v28; 
  int swimForwardState; 
  int v31; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4222, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4223, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4230, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4230, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
  if ( !BG_UseLeftTriggerAltFireMode(ViewmodelWeapon) && BG_IsSwimWeapon(ViewmodelWeapon) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4242, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
      __debugbreak();
    RequestedWeapon = PM_GetRequestedWeapon(pm);
    if ( !memcmp_0(RequestedWeapon, ViewmodelWeapon, 0x3Cui64) )
    {
      swimForwardState = ps->weapCommon.swimForwardState;
      PM_Weapon_UpdateSwimForwardState(pm);
      v7 = BG_UsingAlternate(ps);
      if ( pm->oldcmd.isAlternate != pm->cmd.isAlternate )
        PM_Weapon_RequestAltState(pm, v7 ^ 1);
      weaponState = ps->weapState[0].weaponState;
      v9 = PM_Weapon_StateJustFinished(ps, WEAPON_MELEE_END, WEAPON_HAND_DEFAULT);
      v31 = PM_Weapon_StateJustFinished(ps, WEAPON_SPRINT_DROP, WEAPON_HAND_DEFAULT);
      v10 = 0;
      if ( (unsigned int)(weaponState - 16) <= 1 || (unsigned int)(weaponState - 22) <= 2 )
      {
        v11 = 1;
      }
      else
      {
        v11 = 0;
        if ( !ps->damageCount )
          goto LABEL_27;
      }
      PM_Weapon_RequestAltState(pm, 0);
LABEL_27:
      if ( !PM_Weapon_InValidChangeWeaponState(pm, 0) && !v9 && !v11 )
        return;
      if ( (unsigned int)weaponState <= 0x32 )
      {
        v12 = 0x4000000001FBEi64;
        if ( _bittest64(&v12, weaponState) )
          return;
      }
      if ( (unsigned int)(weaponState - 34) <= 2 && !v31 || (unsigned int)(weaponState - 18) <= 3 || (_DWORD)weaponState == 78 )
        return;
      v13 = pm->ps;
      weaponMap = pm->weaponMap;
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3991, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v15 = BG_GetViewmodelWeapon(weaponMap, v13);
      if ( !BG_IsSwimWeapon(v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3993, ASSERT_TYPE_ASSERT, "(BG_IsSwimWeapon( BG_GetViewmodelWeapon( weaponMap, ps ) ))", (const char *)&queryFormat, "BG_IsSwimWeapon( BG_GetViewmodelWeapon( weaponMap, ps ) )") )
        __debugbreak();
      v16 = DCONST_DVARINT_player_swimCombatTimer;
      if ( !DCONST_DVARINT_player_swimCombatTimer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimCombatTimer") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      integer = v16->current.integer;
      v18 = pm->ps;
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3973, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      lastCombatTime = v18->weapCommon.lastCombatTime;
      if ( lastCombatTime && pm->cmd.serverTime - lastCombatTime < integer )
      {
        v20 = 0;
      }
      else
      {
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3984, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v20 = v13->weapCommon.swimForwardState < SWIMFORWARD_FORWARD;
      }
      fWeaponPosFrac = ps->weapCommon.fWeaponPosFrac;
      if ( !swimForwardState && ps->weapCommon.swimForwardState == SWIMFORWARD_FORWARD )
        v10 = 1;
      if ( v7 != v20 )
      {
        if ( !v20 && !v9 && !v31 && !v10 && fWeaponPosFrac != 1.0 && ps->weapCommon.fAdditivePosFrac == 0.0 )
        {
          v22 = I_fclamp(fWeaponPosFrac + 0.000099999997, 0.0, 1.0);
          ps->weapCommon.fAdditivePosFrac = *(float *)&v22;
        }
        goto LABEL_75;
      }
      if ( !v7 )
      {
        v23 = ps->weapCommon.swimForwardState;
        if ( swimForwardState >= 2 )
        {
          if ( v23 >= 2 || ps->pm_type >= 7 )
            goto LABEL_75;
          v24 = WEAP_IDLE;
        }
        else
        {
          if ( v23 < 2 || ps->pm_type >= 7 )
            goto LABEL_75;
          v24 = WEAP_SWIM_LOOP;
        }
        PM_SetNextWeaponAnim(ps, v24, WEAPON_HAND_DEFAULT);
      }
LABEL_75:
      v25 = pm->weaponMap;
      if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4031, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      v26 = BG_GetViewmodelWeapon(v25, ps);
      if ( !BG_IsSwimWeapon(v26) || !BG_UsingAlternate(ps) || (fAdditivePosFrac = ps->weapCommon.fAdditivePosFrac, fAdditivePosFrac <= 0.0) || fAdditivePosFrac >= 1.0 || v9 )
      {
        if ( v7 != v20 )
        {
          if ( v7 )
          {
            GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x18u);
            if ( v9 )
              ps->weapCommon.fAdditivePosFrac = 1.0;
          }
          v28 = PM_GetRequestedWeapon(pm);
          PM_BeginWeaponChange(pm, pml, v28, 1, 0);
        }
      }
    }
  }
}

/*
==============
PM_Weapon_CheckForBlast
==============
*/
void PM_Weapon_CheckForBlast(pmove_t *pm)
{
  playerState_s *ps; 
  unsigned __int64 weaponState; 
  __int64 v4; 
  playerState_s *v5; 
  double v6; 
  double v7; 
  bool isAlternate; 
  bool isDualWielding; 
  PlayerHandIndex v10; 
  int WeaponHand; 
  int v12; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16753, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16753, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x10u) )
  {
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x10u);
    weaponState = ps->weapState[0].weaponState;
    if ( (unsigned int)weaponState > 0x32 || (v4 = 0x42001FDFC1FBEi64, !_bittest64(&v4, weaponState)) )
    {
      v5 = pm->ps;
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16718, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v6 = AngleNormalize360(v5->viewangles.v[1]);
      v7 = AngleNormalize360((float)((float)v5->damageYaw * 1.40625) - *(float *)&v6);
      isAlternate = BG_UsingAlternate(v5);
      isDualWielding = BG_PlayerDualWielding(v5) == 1;
      v10 = WEAPON_HAND_DEFAULT;
      WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, v5);
      if ( WeaponHand >= 0 )
      {
        do
        {
          if ( *(float *)&v7 >= 45.0 )
          {
            if ( *(float *)&v7 >= 135.0 )
            {
              if ( *(float *)&v7 >= 225.0 )
                v12 = (*(float *)&v7 >= 315.0) + 49;
              else
                v12 = 48;
            }
            else
            {
              v12 = 51;
            }
          }
          else
          {
            v12 = 50;
          }
          BlastImpactAnimState(pm->weaponMap, v5, (WeaponAnimNumber)v12, v10++, pm->m_bgHandler, isAlternate, isDualWielding);
        }
        while ( v10 <= WeaponHand );
      }
    }
  }
}

/*
==============
PM_Weapon_CheckForChangeWeapon
==============
*/
void PM_Weapon_CheckForChangeWeapon(pmove_t *pm, pml_t *pml)
{
  pml_t *v2; 
  playerState_s *ps; 
  playerState_s *v5; 
  const Weapon *RequestedWeapon; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v8; 
  char v9; 
  bool v10; 
  bool v11; 
  const dvar_t *v12; 
  bool v13; 
  const char *v14; 
  const Weapon *v15; 
  const Weapon *v16; 
  int v17; 
  bool v18; 
  const dvar_t *v19; 
  bool v20; 
  const char *v21; 
  bool v22; 
  int WeaponHand; 
  PlayerHandIndex v24; 
  int *p_weaponTime; 
  __int64 v26; 
  int weaponShotCount; 
  int v28; 
  const dvar_t *v29; 
  int v30; 
  playerState_s *v31; 
  int EquippedWeaponIndex; 
  __int64 v33; 
  const dvar_t *v34; 
  bool v35; 
  const char *v36; 
  unsigned __int64 weaponState; 
  __int64 v38; 
  bool *outAltToggle; 
  int outAltTogglea; 
  bool *unsetOffhandUnderbarrelMode; 
  Weapon *outWeapon[4]; 
  bool v43; 
  pml_t *v44; 
  BOOL quickWeaponChange; 
  BOOL fireDelay; 

  v44 = pml;
  outWeapon[1] = (Weapon *)-2i64;
  v2 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8956, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8957, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon_CheckForChangeWeapon");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8960, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8960, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = pm->ps;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8917, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  RequestedWeapon = PM_GetRequestedWeapon(pm);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, v5);
  if ( BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v5->weapCommon.weapFlags, ACTIVE, 0x22u) || pm->cmd.isAlternate == GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v5->weapCommon.weapFlags, ACTIVE, 0x11u) || memcmp_0(RequestedWeapon, CurrentWeaponForPlayer, 0x3Cui64) )
    goto LABEL_26;
  v8 = 1;
  if ( BG_OffhandIsUnderbarrelWeapon(pm->weaponMap, v5, 0x3000ui64) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8937, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
    if ( !BG_HasUnderbarrelShotgun(CurrentWeaponForPlayer) )
    {
      v8 = (unsigned int)(v5->weapState[0].weaponState - 18) <= 3;
      goto LABEL_27;
    }
LABEL_26:
    v8 = 0;
  }
LABEL_27:
  outWeapon[0] = NULL;
  LOBYTE(quickWeaponChange) = 0;
  LOBYTE(fireDelay) = 0;
  v43 = 0;
  v9 = PM_Weapon_GetWeaponChangeType(pm, v2, v8, (const Weapon **)outWeapon, (bool *)&quickWeaponChange, (bool *)&fireDelay, &v43);
  v10 = v43;
  v11 = v9 || v43;
  if ( ps->weapState[0].weaponState == 62 )
  {
    v12 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
    {
      v13 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      v14 = "HighPriorityDebug - PM_Weapon_CheckForChangeWeapon SERVER early-out, WEAPONSTATE_ANIMSCRIPTED\n";
      if ( !v13 )
        v14 = "HighPriorityDebug - PM_Weapon_CheckForChangeWeapon CLIENT early-out, WEAPONSTATE_ANIMSCRIPTED\n";
      Com_Printf(17, v14);
    }
    if ( v11 )
    {
      v15 = PM_GetRequestedWeapon(pm);
      v16 = v15;
      if ( !v15->weaponIdx || BG_IsWeaponValid(pm->weaponMap, ps, v15) )
        BG_SetCurrentWeaponForPlayer(pm->weaponMap, ps, v16, pm->m_bgHandler);
    }
    goto LABEL_104;
  }
  v17 = PM_Weapon_InValidChangeWeaponState(pm, v11);
  v18 = v17 != 0;
  if ( !v11 )
  {
    ps->weapState[0].weapHandFlags &= ~1u;
    ps->weapState[1].weapHandFlags &= ~1u;
  }
  if ( v17 && v11 )
  {
    if ( v10 )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9038, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
        __debugbreak();
      BG_SetPlayerUsingOffhandUnderbarrelWeapon(ps, 0);
    }
    if ( v9 != 1 )
    {
      if ( v9 != 2 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9113, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tUnexpected weapon change type in PM_Weapon_CheckForChangeWeapon.", "0") )
          __debugbreak();
        goto LABEL_104;
      }
      v19 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
      if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      if ( v19->current.enabled )
      {
        v20 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
        v21 = "HighPriorityDebug - PM_Weapon_CheckForChangeWeapon SERVER, case WeaponChangeType::CANCEL\n";
        if ( !v20 )
          v21 = "HighPriorityDebug - PM_Weapon_CheckForChangeWeapon CLIENT, case WeaponChangeType::CANCEL\n";
        Com_Printf(17, v21);
      }
      v22 = BG_UsingAlternate(ps);
      v43 = v22;
      WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
      v24 = WEAPON_HAND_DEFAULT;
      if ( WeaponHand >= 0 )
      {
        p_weaponTime = &ps->weapState[0].weaponTime;
        v26 = WeaponHand + 1i64;
        do
        {
          PM_Weapon_Idle(pm, v24);
          if ( ps->pm_type < 7 )
            PM_SetNextWeaponAnim(ps, WEAP_FORCE_IDLE, v24);
          if ( !PM_WeaponClipEmpty(pm->weaponMap, ps, v24) )
          {
            quickWeaponChange = 0;
            fireDelay = 0;
            weaponShotCount = ps->weapState[0].weaponShotCount;
            v28 = BG_PlayerDualWielding(ps);
            outAltTogglea = weaponShotCount;
            v22 = v43;
            BG_GetFireTime(pm->weaponMap, ps, outWeapon[0], v43, v28 != 0, outAltTogglea, &quickWeaponChange, &fireDelay);
            *p_weaponTime = quickWeaponChange;
          }
          if ( v24 == WEAPON_HAND_DEFAULT && BG_IsAimDownSight(outWeapon[0], v22) )
          {
            v29 = DCONST_DVARFLT_bg_weaponSwitchCancelAdsDisableTimeIdleBlendScale;
            if ( !DCONST_DVARFLT_bg_weaponSwitchCancelAdsDisableTimeIdleBlendScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponSwitchCancelAdsDisableTimeIdleBlendScale") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v29);
            v30 = (int)(float)(500.0 * v29->current.value);
            if ( v30 > 0 )
            {
              v31 = pm->ps;
              if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 973, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
                __debugbreak();
              v31->weapCommon.adsEnableTime = v30 + pm->cmd.serverTime;
            }
          }
          ++v24;
          p_weaponTime += 20;
          --v26;
          v22 = v43;
        }
        while ( v26 );
        v2 = v44;
      }
      EquippedWeaponIndex = BG_GetEquippedWeaponIndex(pm->weaponMap, ps, outWeapon[0]);
      v33 = EquippedWeaponIndex;
      if ( (unsigned int)EquippedWeaponIndex >= 0xF )
      {
        LODWORD(unsetOffhandUnderbarrelMode) = 15;
        LODWORD(outAltToggle) = EquippedWeaponIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9096, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", outAltToggle, unsetOffhandUnderbarrelMode) )
          __debugbreak();
      }
      BG_AddPredictableEventToPlayerstate(EV_WEAPON_SWITCH_CANCELED, ps->weaponsEquipped[v33].m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, ps);
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      {
        BG_ClearDropWeaponAnim(pm->m_bgHandler, ps);
        BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_DROPWEAPONCANCEL, 0, 1, &v2->holdrand);
      }
      PM_HighPriorityWeapon_OnCancelWeaponChange(pm, outWeapon[0]);
LABEL_103:
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x28u);
      goto LABEL_104;
    }
    if ( !outWeapon[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9046, ASSERT_TYPE_ASSERT, "(weaponToUseForChange)", (const char *)&queryFormat, "weaponToUseForChange") )
      __debugbreak();
    PM_BeginWeaponChange(pm, v2, outWeapon[0], fireDelay, quickWeaponChange);
  }
  else
  {
    v34 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    if ( v34->current.enabled && (!v18 || v11) )
    {
      v35 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      v36 = "HighPriorityDebug - PM_Weapon_CheckForChangeWeapon SERVER early-out, inValidChangeWeaponState = %i, mustExecuteActions = %i\n";
      if ( !v35 )
        v36 = "HighPriorityDebug - PM_Weapon_CheckForChangeWeapon CLIENT early-out, inValidChangeWeaponState = %i, mustExecuteActions = %i\n";
      Com_Printf(17, v36, v18, v11);
    }
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x28u) )
    {
      weaponState = ps->weapState[0].weaponState;
      if ( (unsigned int)weaponState > 0x32 )
        goto LABEL_103;
      v38 = 0x4000000001FBEi64;
      if ( !_bittest64(&v38, weaponState) )
        goto LABEL_103;
    }
  }
LABEL_104:
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_Weapon_CheckForDetonation
==============
*/
void PM_Weapon_CheckForDetonation(pmove_t *pm)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v4; 
  unsigned __int64 weaponState; 
  __int64 v6; 
  unsigned __int16 WeaponFieldTime; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15233, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15233, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v4 = CurrentWeaponForPlayer;
  if ( CurrentWeaponForPlayer->weaponIdx )
  {
    if ( !BG_WeaponDef(CurrentWeaponForPlayer, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15240, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
      __debugbreak();
    if ( BG_GetWeaponType(v4, 0) == WEAPTYPE_GRENADE && BG_WeapHasDetonator(v4, 0) )
    {
      weaponState = ps->weapState[0].weaponState;
      if ( (unsigned int)weaponState > 0x32 || (v6 = 0x40003FDFF1FBEi64, !_bittest64(&v6, weaponState)) )
      {
        if ( (pm->cmd.buttons & 1) != 0 && (pm->oldcmd.buttons & 1) == 0 )
        {
          ps->weapState[0].weaponState = 33;
          ps->weapState[0].weaponTime = BG_GetWeaponFieldTime(ps, v4, 0, 0, 20i64);
          WeaponFieldTime = BG_GetWeaponFieldTime(ps, v4, 0, 0, 0i64);
          BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, WeaponFieldTime, "Detonate Delay");
          if ( ps->pm_type < 7 )
            PM_SetNextWeaponAnim(ps, WEAP_DETONATE, WEAPON_HAND_DEFAULT);
        }
      }
    }
  }
}

/*
==============
PM_Weapon_CheckForFireOrChargeButton
==============
*/
__int64 PM_Weapon_CheckForFireOrChargeButton(pmove_t *pm, PlayerHandIndex hand, bool checkForCharging, bool respectQueuedAltFireSwitchRequest, bool *buttonIsPressedNow)
{
  __int64 v5; 
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  playerState_s *v10; 
  const Weapon *v11; 
  unsigned __int64 buttons; 
  bool v13; 
  bool v14; 
  unsigned __int64 WeaponFireButton; 
  unsigned __int64 WeaponAltFireButton; 
  bool v17; 
  bool v18; 
  char v19; 
  char v20; 
  bool IsWeaponLastShotAltFire; 
  bool v23; 
  bool v24; 
  const Weapon *v25; 
  bool v26; 
  bool v27; 
  bool buttonIsPressedNowa; 

  v5 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1342, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !buttonIsPressedNow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1343, ASSERT_TYPE_ASSERT, "(buttonIsPressedNow)", (const char *)&queryFormat, "buttonIsPressedNow") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1346, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1346, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *buttonIsPressedNow = 0;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v10 = pm->ps;
  v11 = CurrentWeaponForPlayer;
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1318, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_IsThrowingAxe(v11) || BG_UsingAlternate(v10) )
  {
    WeaponFireButton = PM_GetWeaponFireButton(pm, v11, (PlayerHandIndex)v5, (pm->oldcmd.buttons & 0x8000000000000i64) != 0);
    buttons = pm->oldcmd.buttons;
    v13 = (WeaponFireButton & pm->cmd.buttons) != 0;
    v14 = (buttons & WeaponFireButton) != 0;
  }
  else
  {
    buttons = pm->oldcmd.buttons;
    v13 = (pm->cmd.buttons & 0x20000) != 0;
    v14 = (buttons & 0x20000) != 0;
  }
  v27 = v14;
  WeaponAltFireButton = PM_GetWeaponAltFireButton(pm, v11, (PlayerHandIndex)v5, (buttons & 0x8000000000000i64) != 0);
  v17 = 0;
  v18 = 0;
  buttonIsPressedNowa = 0;
  if ( WeaponAltFireButton )
  {
    v17 = (WeaponAltFireButton & pm->oldcmd.buttons) != 0;
    buttonIsPressedNowa = v17;
    v18 = (WeaponAltFireButton & pm->cmd.buttons) != 0;
  }
  if ( !v13 )
    ps->weapState[v5].weapHandFlags &= ~2u;
  if ( (ps->weapState[v5].weapHandFlags & 2) != 0 )
    v13 = 0;
  v19 = !v14 && v13;
  v20 = !v17 && v18;
  if ( !BG_GesturePriority_AllowFire(pm, hand) )
    return 0i64;
  if ( BG_IsBallWeapon(v11) )
  {
    if ( BG_IsBallPassValid(ps, v11) && (v20 || v18) )
    {
      *buttonIsPressedNow = v20;
      return 3i64;
    }
    if ( v13 || v19 )
    {
      *buttonIsPressedNow = v19;
      return 1i64;
    }
    return 0i64;
  }
  if ( respectQueuedAltFireSwitchRequest && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Cu) )
  {
    IsWeaponLastShotAltFire = BG_IsWeaponLastShotAltFire(ps, v11);
    v23 = IsWeaponLastShotAltFire && v13;
    v19 |= v23;
    v24 = !IsWeaponLastShotAltFire && v18;
    v20 |= v24;
  }
  if ( checkForCharging || (v25 = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps), v26 = BG_UsingAlternate(ps), (unsigned int)(BG_WeaponCharge_GetType(v25, v26) - 4) > 1) )
  {
    if ( v19 )
    {
      *buttonIsPressedNow = 1;
      return 1i64;
    }
    if ( v20 )
    {
      *buttonIsPressedNow = 1;
      return 2i64;
    }
  }
  else
  {
    v13 = v27 && !v13;
    v18 = buttonIsPressedNowa && !v18;
  }
  if ( v13 )
  {
    if ( !v18 || !BG_IsWeaponTriggerLeftAltFireFlagSet(ps) )
      return 1i64;
    return 2i64;
  }
  if ( v18 )
    return 2i64;
  return 0i64;
}

/*
==============
PM_Weapon_CheckForInspect
==============
*/
void PM_Weapon_CheckForInspect(pmove_t *pm, pml_t *pml, const DelayedActionState *delayedAction)
{
  playerState_s *ps; 
  const dvar_t *v7; 
  int WeaponHand; 
  __int64 v9; 
  int *p_weaponState; 
  int v11; 
  int IsDelayedAction; 
  const dvar_t *v13; 
  bool enabled; 
  unsigned __int64 buttons; 
  unsigned __int64 v16; 
  bool v17; 
  __int64 v18; 
  const Weapon *CurrentWeaponForPlayer; 
  bool IsWeaponLastShotAltFire; 
  pml_t *v21; 
  PlayerHandIndex v22; 
  PlayerHandIndex v23; 
  __int64 v24; 
  __int64 v25; 
  int *v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned __int64 v29; 
  __int64 v30; 
  const Weapon *v31; 
  bool v32; 
  int v33; 
  int WeaponInspectTime; 
  __int64 v35; 

  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon_CheckForInspect");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7840, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7841, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  v7 = DVARBOOL_killswitch_weapon_inspect_enabled;
  if ( !DVARBOOL_killswitch_weapon_inspect_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_inspect_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled || !Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT|0x80) )
    goto LABEL_62;
  WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
  v9 = WeaponHand;
  p_weaponState = &ps->weapState[0].weaponState;
  if ( ps->weapState[0].weaponState == 78 )
  {
    if ( (pm->cmd.buttons & ~(unsigned int)pm->oldcmd.buttons & 0x200205) != 0 )
    {
      v11 = 0;
      if ( WeaponHand >= 0 )
      {
        do
        {
          IsDelayedAction = DelayedActionState::IsDelayedAction((DelayedActionState *)delayedAction, ps, (const PlayerHandIndex)v11);
          if ( PM_Weapon_ShouldBeChargingOrFiringShared(pm, IsDelayedAction, (PlayerHandIndex)v11, 1, 1, 1, 0) )
            PM_Weapon_QueueFireAction(pm, (const PlayerHandIndex)v11, 1);
          ++v11;
        }
        while ( v11 <= (int)v9 );
      }
      PM_Weapon_CancelInspect(pm);
      goto LABEL_62;
    }
    if ( SLOBYTE(pm->m_flags) < 0 && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_weapon_inspect_prone_retrigger_animevent_enabled, "bg_weapon_inspect_prone_retrigger_animevent_enabled") )
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_INSPECT, 0, 1, &pml->holdrand);
  }
  v13 = DVARBOOL_killswitch_weapon_inspect_on_jump;
  if ( !DVARBOOL_killswitch_weapon_inspect_on_jump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_inspect_on_jump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  enabled = v13->current.enabled;
  buttons = pm->oldcmd.buttons;
  v16 = pm->cmd.buttons;
  v17 = BG_GetQAS(ps, WEAPON_HAND_DEFAULT) == QAS_INSPECT;
  v18 = 0x100000000100i64;
  if ( !enabled )
    v18 = 0x100000000000i64;
  if ( (~buttons & v18 & v16) == 0 )
  {
    if ( !v17 )
      goto LABEL_62;
    goto LABEL_35;
  }
  if ( v17 )
LABEL_35:
    BG_SetQAS(ps, WEAPON_HAND_DEFAULT, QAS_STATE_NONE);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  IsWeaponLastShotAltFire = BG_IsWeaponLastShotAltFire(ps, CurrentWeaponForPlayer);
  if ( BG_GetWeaponInspectEnabled(CurrentWeaponForPlayer, IsWeaponLastShotAltFire) )
  {
    v21 = pml;
    if ( PM_Weapon_IsStateValidForReload(pm, pml) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
    {
      v22 = WEAPON_HAND_DEFAULT;
      v23 = WEAPON_HAND_DEFAULT;
      v24 = v9;
      v35 = v9;
      if ( (int)v9 < 0 )
      {
LABEL_48:
        if ( v24 >= 0 )
        {
          v30 = v24 + 1;
          do
          {
            if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7780, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
              __debugbreak();
            v31 = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
            v32 = BG_UsingAlternate(ps);
            v33 = BG_PlayerDualWielding(ps);
            WeaponInspectTime = BG_GetWeaponInspectTime(ps, v31, v32, v33 == 1);
            if ( WeaponInspectTime != 0xFFFF )
            {
              if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
                BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_INSPECT, 0, 1, &pml->holdrand);
              if ( *p_weaponState == 16 )
                PM_AddEvent(pm, EV_FIRE_WEAPON_END);
              BG_SetQAS(ps, v22, QAS_STATE_NONE);
              if ( ps->pm_type < 7 )
                PM_SetNextWeaponAnim(ps, WEAP_INSPECT, v22);
              *(p_weaponState - 4) = WeaponInspectTime;
              *p_weaponState = 78;
            }
            ++v22;
            p_weaponState += 20;
            --v30;
            v21 = pml;
          }
          while ( v30 );
        }
      }
      else
      {
        v25 = 0i64;
        v26 = &ps->weapState[0].weaponState;
        v27 = 0xC01000000000001i64;
        while ( 1 )
        {
          v28 = v25;
          v29 = *v26;
          if ( (_DWORD)v29 == 78 )
            break;
          if ( (unsigned int)v29 > 0x3B || !_bittest64(&v27, v29) )
          {
            if ( !PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, v23, pm->m_bgHandler) )
              goto LABEL_62;
            v24 = v35;
            v27 = 0xC01000000000001i64;
          }
          ++v23;
          ++v25;
          v26 += 20;
          if ( v28 >= v24 )
          {
            v21 = pml;
            goto LABEL_48;
          }
        }
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_weapon_inspect_queueing_enabled, "bg_weapon_inspect_queueing_enabled") )
          BG_SetQAS(ps, WEAPON_HAND_DEFAULT, QAS_INSPECT);
      }
    }
  }
LABEL_62:
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_Weapon_CheckForLeap
==============
*/
void PM_Weapon_CheckForLeap(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  unsigned __int64 weaponState; 
  __int64 v6; 
  Physics_WorldId v7; 
  BgWeaponMap *weaponMap; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v10; 
  bool v11; 
  bool v12; 
  BgWeaponMap *v13; 
  int serverTime; 
  unsigned int v15; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17117, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17117, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PM_GetRequestedWeapon(pm)->weaponIdx )
  {
    weaponState = ps->weapState[0].weaponState;
    if ( (unsigned int)weaponState > 0x32 || (v6 = 0x40003FC001FBEi64, !_bittest64(&v6, weaponState)) )
    {
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_sprintLeap_useWeaponAnim, "sprintLeap_useWeaponAnim") )
      {
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_spValue, 0x3Au) )
        {
          if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2559, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
            __debugbreak();
          if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Fu) )
          {
            ps->pm_flags.m_flags[0] &= ~0x80000000;
            Leap_State_Out(pm->weaponMap, ps);
          }
        }
        else if ( (unsigned int)(ps->weapState[0].weaponState - 54) > 2 && Leap_IsSprintLeap(pm) && ps->jumpState.jumpTime + 100 >= pm->cmd.serverTime )
        {
          v7 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
          if ( Leap_CheckEnoughDistToLeap(pm, pml) && Leap_LeapingOverLowerTerrain(pm, v7, &pml->forward) )
          {
            weaponMap = pm->weaponMap;
            if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17055, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
              __debugbreak();
            CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
            ps->weapState[0].weaponState = 54;
            v10 = CurrentWeaponForPlayer;
            ps->leapState.state = 2;
            v11 = BG_PlayerDualWielding(ps) == 1;
            v12 = BG_UsingAlternate(ps);
            ps->weapState[0].weaponTime = BG_LeapInTime(ps, v10, v12, v11);
            BG_SetWeaponDelay(weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
            PM_StartWeaponAnimBothHands(ps, WEAP_LEAP_IN);
          }
          else
          {
            ps->leapState.state = 1;
          }
        }
        else if ( (unsigned int)(ps->weapState[0].weaponState - 54) > 1 || Leap_IsSprintLeap(pm) )
        {
          Leap_LeapUpdate(pm, pml);
        }
        else
        {
          if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Fu) )
          {
            v13 = pm->weaponMap;
            serverTime = pm->cmd.serverTime;
            v15 = PM_GroundSurfaceType(pm);
            BG_AddPredictableEventToPlayerstate(EV_LEAP_LAND, v15, serverTime, v13, ps);
          }
          Leap_State_Out(pm->weaponMap, ps);
        }
      }
    }
  }
}

/*
==============
PM_Weapon_CheckForMelee
==============
*/
void PM_Weapon_CheckForMelee(pmove_t *pm, pml_t *pml, int delayedAction, unsigned int *holdrand)
{
  __int16 v4; 
  playerState_s *ps; 
  bool v8; 
  int *p_weaponState; 
  PlayerHandIndex v10; 
  BgWeaponMap *weaponMap; 
  bool v12; 
  bool v13; 
  char v14; 
  int v15; 
  bool IsMeleeInterruptible; 
  const BgHandler *m_bgHandler; 
  BgWeaponMap *v18; 
  bool v19; 
  int v20; 
  unsigned __int64 buttons; 
  unsigned __int64 v22; 
  bool v23; 
  bool v24; 
  bool v25; 
  bool v26; 
  bool v27; 
  bool v28; 
  int v29; 
  QueuedActionState QAS; 
  char v31; 
  bool v32; 
  char v33; 
  const Weapon *CurrentWeaponForPlayer; 
  int WeaponHand; 
  __int64 v36; 
  const Weapon *v37; 
  bool v38; 
  __int64 i; 
  char v40; 
  int v41; 
  pml_t *v42; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  playerState_s *v44; 
  bool v45; 
  int AmmoInClipForWeapon; 
  bool v47; 
  bool v48; 
  bool outIsPressed; 
  bool v50; 
  bool v51; 
  bool outWasPressed; 
  bool v53; 
  bool v54; 
  bool v55; 
  int meleeChargeEnt; 
  int fireTime; 
  int interruptTime; 
  int fireDelay[2]; 
  pml_t *pmla; 
  int outToFireInterruptTime; 
  __int64 v62; 
  Weapon r_weapon; 
  Weapon newweapon; 

  v62 = -2i64;
  fireTime = delayedAction;
  pmla = pml;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon_CheckForMelee");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11378, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11378, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11379, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  v8 = BG_UsingAlternate(ps);
  v48 = v8;
  v55 = BG_PlayerDualWielding(ps) == 1;
  r_weapon = *BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  p_weaponState = &ps->weapState[0].weaponState;
  v10 = WEAPON_HAND_DEFAULT;
  if ( (unsigned int)(ps->weapState[0].weaponState - 22) > 2 )
    ps->weapState[0].meleeHitCount = 0;
  if ( BG_GameInterface_IsTakedownPending(ps) || (unsigned int)(*p_weaponState - 51) <= 2 && BG_IsThrowingAxe(&r_weapon) )
    goto LABEL_128;
  outIsPressed = BG_SupportsAlternateMelee(&r_weapon, v8);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x26u) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) || BG_Skydive_IsSkydiving(ps) || BG_IsPlayerInExecution(ps) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u) || BG_IsTurretActive(ps) && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
    goto LABEL_128;
  if ( BG_InADS(ps) )
  {
    weaponMap = pm->weaponMap;
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11081, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !BG_InADS(ps) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11083, ASSERT_TYPE_ASSERT, "(BG_InADS( ps ))", (const char *)&queryFormat, "BG_InADS( ps )") )
      __debugbreak();
    v12 = BG_UsingAlternate(ps);
    v13 = BG_ADSZoomCount(weaponMap, ps, &r_weapon, v12) > 1;
    if ( BG_CanHybridToggle(ps, &r_weapon, v12) || BG_CanThermalToggle(&r_weapon, v12) || BG_HasHoldBreathAbility(weaponMap, ps) || v13 )
      goto LABEL_128;
    v8 = v48;
  }
  if ( BG_Weapon_CheckFriendlyFire(ps) || ps->vehicleState.entity != 2047 || !BG_GetMeleeDamage(&r_weapon, v8) || BG_Offhand_HasActiveOffhand(ps) && !BG_Offhand_ActiveOffhandIsInterruptable(pm) || !BG_NightVisionInterruptable(pm->weaponMap, ps, pm->cmd.serverTime) )
    goto LABEL_128;
  v14 = 1;
  v50 = 1;
  v51 = 0;
  v15 = *p_weaponState;
  meleeChargeEnt = v15;
  if ( (unsigned int)(v15 - 22) <= 2 )
  {
    m_bgHandler = pm->m_bgHandler;
    v18 = pm->weaponMap;
    v19 = BG_UsingAlternate(ps);
    v20 = BG_PlayerDualWielding(ps);
    BG_GetMeleeInterruptTime(v18, ps, v19, v20 == 1, meleeChargeEnt == 23, &interruptTime, fireDelay, &outToFireInterruptTime);
    IsMeleeInterruptible = PM_Weapon_IsMeleeInterruptible(v18, ps, m_bgHandler, interruptTime);
    v51 = IsMeleeInterruptible;
  }
  else
  {
    if ( (unsigned int)(v15 - 26) > 6 && (unsigned int)(v15 - 37) > 1 )
      goto LABEL_47;
    IsMeleeInterruptible = PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, pm->m_bgHandler);
  }
  v50 = IsMeleeInterruptible;
  v14 = IsMeleeInterruptible;
LABEL_47:
  buttons = pm->cmd.buttons;
  v22 = pm->oldcmd.buttons;
  v23 = (v22 & 4) != 0;
  if ( outIsPressed )
  {
    v24 = (buttons & 0x20000) != 0;
    v25 = (v22 & 0x20000) != 0;
  }
  else
  {
    v24 = 0;
    v25 = 0;
  }
  v26 = (buttons & 4) != 0 && !v23;
  v27 = v26;
  v28 = v24 && !v25;
  if ( outIsPressed && (buttons & 0x8000000000000i64) == 0 )
  {
    v27 = v28;
    v28 = v26;
  }
  v29 = pm->cmd.meleeChargeEnt;
  meleeChargeEnt = v29;
  if ( !v14 || fireTime )
  {
    PM_Weapon_QueueMeleeAttack(pm, v29, v27, v28);
    goto LABEL_128;
  }
  QAS = BG_GetQAS(ps, WEAPON_HAND_DEFAULT);
  if ( !outIsPressed && QAS == QAS_STATE_MELEE_ALT )
  {
    BG_SetQAS(ps, WEAPON_HAND_DEFAULT, QAS_STATE_NONE);
    QAS = QAS_STATE_NONE;
  }
  if ( v27 || QAS == QAS_STATE_MELEE )
  {
    v47 = 1;
    v31 = 1;
  }
  else
  {
    v47 = 0;
    v31 = 0;
  }
  if ( v28 || QAS == QAS_STATE_MELEE_ALT )
  {
    v32 = 1;
    v33 = 1;
  }
  else
  {
    v32 = 0;
    v33 = 0;
  }
  if ( v31 || v33 )
  {
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    PM_Weapon_GetFireButtonPressedState(pm, CurrentWeaponForPlayer, WEAPON_HAND_DEFAULT, &outWasPressed, &outIsPressed);
    WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
    v36 = WeaponHand;
    if ( WeaponHand < 1 )
    {
      v38 = outIsPressed;
    }
    else
    {
      v37 = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
      PM_Weapon_GetFireButtonPressedState(pm, v37, WEAPON_HAND_LEFT, &v53, &v54);
      v38 = v54 || outIsPressed;
    }
    if ( (pm->cmd.buttons & 0x8000000000000i64) != 0 && !BG_IsMeleeOnlyWeapon(&r_weapon, v48) && v38 )
    {
      BG_GetFireTime(pm->weaponMap, ps, &r_weapon, v48, v55, 0, &fireTime, fireDelay);
      if ( fireTime )
      {
LABEL_106:
        PM_Weapon_QueueMeleeAttack(pm, meleeChargeEnt, v47, v32);
        goto LABEL_128;
      }
    }
    *(_QWORD *)fireDelay = v36;
    if ( (int)v36 >= 0 )
    {
      for ( i = 0i64; i <= *(__int64 *)fireDelay; ++i )
      {
        if ( *(p_weaponState - 3) && (unsigned int)(*p_weaponState - 18) > 6 )
          goto LABEL_106;
        v40 = v50;
        if ( v10 )
          v40 = PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, v10, pm->m_bgHandler);
        v41 = *p_weaponState;
        if ( *p_weaponState > 0 )
        {
          if ( v41 <= 4 )
          {
            if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_bg_allowMeleeDuringWeaponRaise, "bg_allowMeleeDuringWeaponRaise") )
            {
LABEL_95:
              if ( !v40 )
                goto LABEL_106;
            }
          }
          else if ( (unsigned int)(v41 - 7) <= 4 )
          {
            goto LABEL_95;
          }
        }
        ++v10;
        p_weaponState += 20;
      }
    }
    v42 = pmla;
    if ( v51 )
      PM_Weapon_MeleeEnd(pm, pmla, 0, WEAPON_HAND_DEFAULT, 0, 1, 1);
    if ( Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER|0x80) )
    {
      if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
        __debugbreak();
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x2Fu) && pm->cmd.scriptedMeleeTarget != 2047 )
      {
        BG_AddPredictableEventToPlayerstate(EV_FIRE_MELEE_SCRIPTED, 0, pm->cmd.serverTime, pm->weaponMap, ps);
        goto LABEL_128;
      }
    }
    if ( !v32 || v47 )
    {
      p_weapFlags = &ps->weapCommon.weapFlags;
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x26u);
    }
    else
    {
      p_weapFlags = &ps->weapCommon.weapFlags;
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x26u);
    }
    v44 = pm->ps;
    if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11337, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    newweapon = *BG_GetFirstEquippedWeaponBySlot(pm->weaponMap, v44, WEAPON_SLOT_MELEE);
    if ( v4 )
      v45 = !BG_IsMeleeOnlyWeapon(&r_weapon, v48) && !BG_IsBallWeapon(&r_weapon);
    else
      v45 = 0;
    if ( BG_IsMeleeComboWeapon(&r_weapon) )
    {
      if ( !v45 )
      {
        if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
          PM_IncrementMeleeComboSeqIdx(pm, &r_weapon);
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, GameModeFlagValues::ms_mpValue, 0x38u);
        goto LABEL_124;
      }
    }
    else if ( !v45 )
    {
LABEL_124:
      if ( !BG_IsThrowingAxe(&r_weapon) || v48 || (AmmoInClipForWeapon = BG_GetAmmoInClipForWeapon(ps, &r_weapon, 0, WEAPON_HAND_DEFAULT), BG_RequiredAmmoPerShot(&r_weapon, 0) <= AmmoInClipForWeapon) )
        PM_Weapon_BeginMelee(pm, v42);
      goto LABEL_128;
    }
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x22u);
    PM_BeginWeaponChange(pm, v42, &newweapon, 0, 1);
    PM_MeleeChargeStart(pm, v42, meleeChargeEnt);
  }
LABEL_128:
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_Weapon_CheckForNightVision
==============
*/
void PM_Weapon_CheckForNightVision(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const Weapon *ViewmodelWeapon; 
  bool v6; 
  bool IsAdsVisionSetActive; 
  bool v8; 
  bool v9; 
  bool IsBlockingNightVision; 
  entity_event_t v11; 
  const dvar_t *v12; 
  BgAdsVisionSetInfo outVisionSetInfo; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15753, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15753, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
  v6 = BG_UsingAlternate(ps);
  IsAdsVisionSetActive = BG_IsAdsVisionSetActive(pm->m_bgHandler, ps, ViewmodelWeapon, v6, &outVisionSetInfo);
  v8 = (pm->oldcmd.buttons & 0x10000) == 0 && (pm->cmd.buttons & 0x10000) != 0;
  v9 = BG_IsUsingNightVision(ps) && IsAdsVisionSetActive && BG_BlocksNVGADS(ViewmodelWeapon, v6);
  IsBlockingNightVision = BG_IsBlockingNightVision(ps);
  if ( v9 )
  {
    if ( !IsBlockingNightVision )
    {
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2260, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 9u);
      v11 = EV_NIGHTVISION_REMOVE_INSTANT;
      goto LABEL_28;
    }
  }
  else if ( IsBlockingNightVision )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2260, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 9u);
    if ( BG_IsUsingNightVision(ps) )
    {
      v11 = EV_NIGHTVISION_WEAR_INSTANT;
LABEL_28:
      PM_AddEvent(pm, v11);
    }
  }
  if ( v8 )
  {
    if ( !BG_IsBlockingNightVision(ps) )
      goto LABEL_40;
    v12 = DCONST_DVARMPBOOL_NVG_ADSVisionEnableToggle;
    if ( !DCONST_DVARMPBOOL_NVG_ADSVisionEnableToggle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "NVG_ADSVisionEnableToggle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
    {
LABEL_40:
      if ( !PM_NightVisionStart(pm, pml) )
        PM_NightVisionToggle(pm);
    }
  }
  PM_NightVisionUpdate(pm);
}

/*
==============
PM_Weapon_CheckForOffHand
==============
*/
void PM_Weapon_CheckForOffHand(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  playerState_s *v5; 
  BgWeaponMap *weaponMap; 
  const Weapon *Weapon; 
  playerState_s *v8; 
  const Weapon *OffHandWeaponForPlayer; 
  const Weapon *v10; 
  const char *WeaponName; 
  const Weapon *v12; 
  OffhandSlot outOffHandSlot[8]; 
  __int64 v14; 
  Weapon r_weapon; 
  char output[1032]; 

  v14 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon_CheckForOffHand");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14321, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14321, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  outOffHandSlot[0] = OFFHAND_SLOT_NONE;
  PM_Weapon_TriggeredOffHand(pm, outOffHandSlot);
  if ( PM_Weapon_CanUseOffhand(pm, pm->ps, outOffHandSlot[0]) )
  {
    if ( (pm->cmd.buttons & 0x1000) == 0 )
      goto LABEL_25;
    v5 = pm->ps;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12728, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v5->weapCommon.weapFlags, ACTIVE, 0x33u) || v5->throwbackGrenadeTimeLeft <= 0 || v5->cursorHintClass || v5->cursorHintEntIndex == 2047 || BG_IsUsingOffhandGestureWeapon(v5) && Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_scripted_offhand_throwback_fix_enabled, "killswitch_scripted_offhand_throwback_fix_enabled") )
      goto LABEL_25;
    weaponMap = pm->weaponMap;
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 767, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(weaponMap, v5->throwbackWeaponHandle);
    if ( !Weapon->weaponIdx )
    {
LABEL_25:
      if ( outOffHandSlot[0] )
      {
        v8 = pm->ps;
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14210, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        BG_Weapon_CancelOffhand(v8, pm->m_bgHandler, pm->weaponMap, pm->cmd.serverTime, 1);
        r_weapon = pm->cmd.offHand;
        if ( outOffHandSlot[0] == OFFHAND_SLOT_SCRIPTED )
          r_weapon = *PM_Weapon_GetOffHandWeaponForSlot(pm->weaponMap, ps, OFFHAND_SLOT_SCRIPTED);
        if ( BG_PlayerHasWeapon(pm->weaponMap, ps, &r_weapon) )
        {
          BG_SetOffHandWeaponForPlayer(pm->weaponMap, ps, &r_weapon);
          OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(pm->weaponMap, ps);
          v10 = OffHandWeaponForPlayer;
          if ( OffHandWeaponForPlayer->weaponIdx )
          {
            if ( BG_WeaponDef(OffHandWeaponForPlayer, 0)->offhandClass == OFFHAND_CLASS_NONE )
            {
              WeaponName = BG_GetWeaponName(v10, output, 0x400u);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14358, ASSERT_TYPE_ASSERT, "(offHandWeapon.weaponIdx == 0 || BG_WeaponDef( offHandWeapon, false )->offhandClass != OFFHAND_CLASS_NONE)", "%s\n\toffHandWeapon = %s\n", "offHandWeapon.weaponIdx == WP_NONE || BG_WeaponDef( offHandWeapon, false )->offhandClass != OFFHAND_CLASS_NONE", WeaponName) )
                __debugbreak();
            }
          }
        }
        if ( BG_OffhandIsUnderbarrelWeapon(pm->weaponMap, ps, pm->cmd.buttons) )
          PM_Weapon_StartUseOffHand_Underbarrel(pm, pml);
        else
          PM_Weapon_StartUseOffHand(pm, pml, outOffHandSlot[0]);
        if ( ((unsigned int)(ps->weapState[0].weaponState - 26) <= 6 || BG_Offhand_IsPlayingGesture(pm->weaponMap, ps, OHGT_WEAPON) || BG_Offhand_IsPlayingGrenadeGesture(pm->weaponMap, ps)) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
        {
          v12 = BG_GetOffHandWeaponForPlayer(pm->weaponMap, ps);
          if ( !v12->weaponIdx || !BG_GetOffhandAllowsSprint(v12, 0) )
            PM_EndSprint(ps, pm->cmd.serverTime, pm->cmd.buttons);
        }
      }
    }
    else
    {
      if ( BG_PWF_UseAlternateAsOffhand(v5) )
        PM_Weapon_SetOffhandUnderbarrelMode(pm->weaponMap, v5, 0);
      BG_AddPredictableEventToPlayerstate(EV_SWITCH_OFFHAND, v5->throwbackWeaponHandle.m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, v5);
      BG_SetOffHandWeaponForPlayer(pm->weaponMap, v5, Weapon);
      PM_Weapon_OffHandInit(pm, pml, 1);
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_Weapon_CheckForOffHandThrowCancel
==============
*/
void PM_Weapon_CheckForOffHandThrowCancel(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const Weapon *OffHandWeaponForPlayer; 
  const WeaponDef *v6; 
  bool v7; 
  bool v8; 
  bool v9; 
  bool v10; 
  int offhandGestureFlags; 
  BgWeaponMap *weaponMap; 
  int serverTime; 
  const Weapon *v14; 
  const WeaponDef *v15; 
  unsigned int IndexFromGesture; 
  const Weapon *v17; 
  const Gesture *gestureThrowAlt; 
  int weaponState; 
  const WeaponDef *v20; 
  const WeaponDef *v21; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v23; 
  const WeaponDef *v24; 
  unsigned int outSlot; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15277, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15277, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(pm->weaponMap, ps);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14429, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (ps->weapCommon.offhandGestureFlags & 1) == 0 )
  {
    weaponState = ps->weapState[0].weaponState;
    if ( weaponState == 27 )
    {
      if ( BG_PWF_UseAlternateAsOffhand(ps) )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15330, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
          __debugbreak();
        if ( (pm->cmd.buttons & 0x3000) == 0 && PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, pm->m_bgHandler) )
        {
          PM_Weapon_OffHandHold(pm, pml, ps);
          return;
        }
      }
      v20 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15340, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
        __debugbreak();
      if ( v20->holdButtonToThrow )
      {
        if ( (pm->cmd.buttons & 0x3000) != 0 )
          return;
        goto LABEL_52;
      }
      if ( !v20->offhandHoldIsCancelable )
        return;
    }
    else
    {
      if ( weaponState != 26 )
        goto LABEL_62;
      v21 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15361, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
        __debugbreak();
      if ( !v21->offhandHoldIsCancelable )
      {
LABEL_62:
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
        v23 = CurrentWeaponForPlayer;
        if ( CurrentWeaponForPlayer->weaponIdx )
        {
          v24 = BG_WeaponDef(CurrentWeaponForPlayer, 0);
          if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15378, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
            __debugbreak();
          if ( !BG_IsOffhandWeaponType(v23, 0) && ps->weapState[0].weaponState == 16 && v24->holdButtonToThrow && (pm->cmd.buttons & 1) == 0 )
          {
            PM_Weapon_Idle(pm, WEAPON_HAND_DEFAULT);
            if ( ps->pm_type < 7 )
              PM_SetNextWeaponAnim(ps, WEAP_FORCE_IDLE, WEAPON_HAND_DEFAULT);
          }
        }
        return;
      }
    }
    if ( (pm->cmd.buttons & 0x80000) == 0 )
      return;
LABEL_52:
    PM_Weapon_OffHandEnd(pm, pml, ps);
    return;
  }
  v6 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15284, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v7 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0xFu);
  v8 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0xAu);
  v9 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u);
  v10 = v7 || v8 || v9;
  if ( (ps->weapCommon.offhandGestureFlags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14442, ASSERT_TYPE_ASSERT, "(BG_IsUsingOffhandGestureWeapon( ps ))", (const char *)&queryFormat, "BG_IsUsingOffhandGestureWeapon( ps )") )
    __debugbreak();
  offhandGestureFlags = ps->weapCommon.offhandGestureFlags;
  if ( (offhandGestureFlags & 0x20) == 0 && (offhandGestureFlags & 8) == 0 )
  {
    if ( !v10 )
    {
      if ( v6->holdButtonToThrow )
      {
        if ( (pm->cmd.buttons & 0x3000) != 0 )
          return;
      }
      else if ( !v6->offhandHoldIsCancelable || (pm->cmd.buttons & 0x80000) == 0 )
      {
        return;
      }
    }
    BG_AddPredictableEventToPlayerstate(EV_PUTAWAY_OFFHAND, ps->weapCommon.offHandHandle.m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, ps);
    weaponMap = pm->weaponMap;
    serverTime = pm->cmd.serverTime;
    outSlot = 2;
    v14 = BG_GetOffHandWeaponForPlayer(weaponMap, ps);
    v15 = BG_WeaponDef(v14, 0);
    IndexFromGesture = 256;
    v17 = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    if ( BG_PlayAltGesturesForOffhandWeapons(v17) && (gestureThrowAlt = v15->gestureThrowAlt) != NULL || (gestureThrowAlt = v15->gestureThrow) != NULL )
      IndexFromGesture = BG_Gesture_GetIndexFromGesture(gestureThrowAlt);
    BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot);
    if ( outSlot != 2 )
      BG_Gesture_StopBySlot(ps, outSlot, serverTime, 1, 300, 1);
    BG_OffhandGestureWeaponPutAway(pm->weaponMap, ps, pm->cmd.serverTime, v8);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_CANCEL_GRENADE, 1, 1, &pml->holdrand);
      if ( !PlayerASM_IsEnabled() )
        BG_ClearPrepareAnim(pm->m_bgHandler, ps);
    }
  }
}

/*
==============
PM_Weapon_CheckForPendingAltModeChange
==============
*/
bool PM_Weapon_CheckForPendingAltModeChange(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  bool result; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18085, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18085, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x27u);
  if ( result )
  {
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x27u);
    PM_Weapon_FinishWeaponChange(pm, pml, 9, 1, 0);
    return 1;
  }
  return result;
}

/*
==============
PM_Weapon_CheckForRechamber
==============
*/
__int64 PM_Weapon_CheckForRechamber(pmove_t *pm, pml_t *pml, int delayedAction, PlayerHandIndex hand)
{
  __int64 v4; 
  playerState_s *ps; 
  int *v8; 
  bool v9; 
  const Weapon *CurrentWeaponForPlayer; 
  const dvar_t *v11; 
  bool enabled; 
  entity_event_t v13; 
  bool IsMeleeInterruptibleForFire; 
  int v15; 
  bool v16; 
  int v17; 
  int v18; 
  unsigned __int64 v19; 
  __int64 v21; 
  bool v22; 
  int v23; 
  bool v24; 
  int v25; 
  bool v26; 
  int v27; 
  int v28; 
  const char *v29; 
  bool v30; 
  bool v32; 

  v4 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4393, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4393, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = &ps->commandTime + 20 * v4;
  if ( (unsigned int)(v8[339] - 26) <= 6 )
    return 0i64;
  v9 = BG_UsingAlternate(ps);
  v32 = BG_PlayerDualWielding(ps) == 1;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  if ( !BG_IsBoltAction(CurrentWeaponForPlayer, v9) )
    return 0i64;
  if ( BG_Offhand_HasActiveOffhand(ps) && !BG_Offhand_ActiveOffhandIsInterruptable(pm) )
  {
    if ( v8[339] == 17 )
    {
      PM_Weapon_Idle(pm, (PlayerHandIndex)v4);
      if ( ps->pm_type < 7 )
        PM_SetNextWeaponAnim(ps, WEAP_FORCE_IDLE, (PlayerHandIndex)v4);
    }
    return 0i64;
  }
  v11 = DVARBOOL_killswitch_rechamber_fix_enabled;
  if ( !DVARBOOL_killswitch_rechamber_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_rechamber_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  enabled = v11->current.enabled;
  v30 = enabled;
  if ( BG_GetAmmoInClipForWeapon(ps, CurrentWeaponForPlayer, v9, (PlayerHandIndex)v4) <= 0 || !BG_PlayerWeaponNeedsRechamber(ps, CurrentWeaponForPlayer, (PlayerHandIndex)v4) )
  {
    if ( v8[339] == 17 && !v8[335] && !v8[336] )
      PM_Weapon_FinishRechamber(ps, CurrentWeaponForPlayer, v9, (PlayerHandIndex)v4, 1);
    return 0i64;
  }
  if ( v8[339] == 17 && delayedAction )
  {
    v13 = EV_EJECT_BRASS_LEFT;
    if ( !(_DWORD)v4 )
      v13 = EV_EJECT_BRASS;
    PM_AddEvent(pm, v13);
    if ( enabled )
      PM_WeaponRechamberAmmo(ps, CurrentWeaponForPlayer, v9, (PlayerHandIndex)v4);
    if ( v8[335] )
      return 1i64;
  }
  IsMeleeInterruptibleForFire = 0;
  switch ( v8[339] )
  {
    case 1:
      IsMeleeInterruptibleForFire = PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, (PlayerHandIndex)v4, pm->m_bgHandler);
      if ( !IsMeleeInterruptibleForFire )
        return 0i64;
      break;
    case 18:
      if ( BG_GetReloadType(CurrentWeaponForPlayer, v9) )
        return 0i64;
      v15 = v8[345];
      v16 = BG_BoltActionReloadIncludesRechamber(CurrentWeaponForPlayer, v9);
      if ( !v15 )
        return 0i64;
      if ( v16 )
        return 0i64;
      IsMeleeInterruptibleForFire = PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, (PlayerHandIndex)v4, pm->m_bgHandler);
      if ( !IsMeleeInterruptibleForFire )
        return 0i64;
      break;
    case 22:
      IsMeleeInterruptibleForFire = PM_Weapon_IsMeleeInterruptibleForFire(pm->weaponMap, ps, pm->m_bgHandler);
      if ( !IsMeleeInterruptibleForFire )
        return 0i64;
      break;
  }
  v17 = v8[335];
  if ( !v17 || (v18 = v8[339], (unsigned int)(v18 - 16) > 1) && (unsigned int)(v18 - 22) > 2 && !v8[336] || IsMeleeInterruptibleForFire )
  {
    v19 = v8[339];
    if ( (_DWORD)v19 != 17 )
    {
      if ( (unsigned int)v19 <= 0x3B && (v21 = 0xC01000000010001i64, _bittest64(&v21, v19)) || IsMeleeInterruptibleForFire )
      {
        if ( ps->pm_type < 7 )
          PM_SetNextWeaponAnim(ps, WEAP_RECHAMBER, (PlayerHandIndex)v4);
        v22 = BG_UsingAlternate(ps);
        v23 = BG_RechamberTime(ps, CurrentWeaponForPlayer, v22, v32);
        v24 = BG_UsingAlternate(ps);
        v25 = BG_RechamberTimeOneHanded(ps, CurrentWeaponForPlayer, v24, v32);
        v26 = BG_UsingAlternate(ps);
        v27 = BG_RechamberBoltTime(ps, CurrentWeaponForPlayer, v26, v32);
        v8[339] = 17;
        v28 = v27;
        if ( !v32 )
          v25 = v23;
        v8[335] = v25;
        if ( v30 )
          v8[342] = v25 + ps->serverTime;
        if ( v27 && v27 < v25 )
        {
          v29 = "Rechamber Bolt Time";
        }
        else
        {
          v29 = NULL;
          v28 = 1;
        }
        BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v4, v28, v29);
        BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RECHAMBER, 0, 0, &pml->holdrand);
        PM_AddEvent(pm, EV_RECHAMBER_WEAPON);
      }
      return 0i64;
    }
    PM_Weapon_FinishRechamber(ps, CurrentWeaponForPlayer, v9, (PlayerHandIndex)v4, v17 == 0);
    if ( delayedAction )
      return 1i64;
  }
  return 0i64;
}

/*
==============
PM_Weapon_CheckForReload
==============
*/
void PM_Weapon_CheckForReload(pmove_t *pm, pml_t *pml, const DelayedActionState *delayedActionState)
{
  playerState_s *ps; 
  playerState_s *v6; 
  playerState_s *v7; 
  int WeaponHand; 
  PlayerHandIndex v9; 
  int *p_weaponState; 
  __int64 v11; 
  Weapon *CurrentWeaponForPlayer; 
  const dvar_t *v13; 
  int v14; 
  int v15; 
  __int64 v16; 
  PlayerHandIndex v17; 
  PlayerHandIndex v18; 
  int *p_weaponTime; 
  bool v20; 
  ReloadType ReloadType; 
  int v22; 
  BOOL v23; 
  bool v24; 
  int AmmoInClipForWeapon; 
  playerState_s *v26; 
  _BOOL8 v27; 
  int AmmoNotInClip; 
  int v29; 
  OffhandUnderbarrelModeData offhandUnderbarrelModeData; 
  Weapon *r_weapon; 
  int v32; 
  int v33; 
  int *v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  bool v40; 
  PlayerHandIndex hasFastReloadOverride; 

  v39 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon_CheckForReload");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7581, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7581, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7582, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  v6 = pm->ps;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7400, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7401, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v6->weapCommon.weapFlags, ACTIVE, 0x25u) )
  {
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&v6->weapCommon.weapFlags, ACTIVE, 0x25u);
    v7 = pm->ps;
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7418, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, v7);
    v9 = WEAPON_HAND_DEFAULT;
    if ( WeaponHand >= 0 )
    {
      p_weaponState = &v7->weapState[0].weaponState;
      v11 = WeaponHand + 1i64;
      do
      {
        if ( (unsigned int)(*p_weaponState - 18) <= 3 )
        {
          PM_Weapon_Idle(pm, v9);
          if ( v7->pm_type < 7 )
            PM_SetNextWeaponAnim(v7, WEAP_FORCE_IDLE, v9);
        }
        ++v9;
        p_weaponState += 20;
        --v11;
      }
      while ( v11 );
    }
  }
  else
  {
    PM_Weapon_CheckForPendingAltModeChange(pm, pml);
    if ( PM_Weapon_IsStateValidForReload(pm, pml) )
    {
      CurrentWeaponForPlayer = (Weapon *)BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
      r_weapon = CurrentWeaponForPlayer;
      v40 = BG_UsingAlternate(ps);
      if ( !BG_IsMeleeOnlyWeapon(CurrentWeaponForPlayer, v40) )
        goto LABEL_106;
      v13 = DVARBOOL_killswitch_melee_only_weapon_no_reload_enabled;
      if ( !DVARBOOL_killswitch_melee_only_weapon_no_reload_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_melee_only_weapon_no_reload_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( !v13->current.enabled )
      {
LABEL_106:
        if ( (pm->cmd.buttons & 0x10) != 0 || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0) )
        {
          v14 = 1;
          v35 = 1i64;
        }
        else
        {
          v14 = 0;
          v35 = 0i64;
        }
        v33 = 0;
        v15 = BG_PlayerUsingOffhandUnderbarrelShotgun(ps, CurrentWeaponForPlayer);
        v16 = v15;
        if ( !v14 || (offhandUnderbarrelModeData.offhandUnderbarrelTempDisabled = 1, !v15) )
          offhandUnderbarrelModeData.offhandUnderbarrelTempDisabled = 0;
        PM_Weapon_TempDisableOffhandUnderbarrelMode(pm->weaponMap, ps, &offhandUnderbarrelModeData);
        v17 = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
        v18 = WEAPON_HAND_DEFAULT;
        hasFastReloadOverride = WEAPON_HAND_DEFAULT;
        v37 = v17;
        if ( (int)v17 < WEAPON_HAND_DEFAULT )
          goto $LN181;
        v38 = v16;
        v36 = 0i64;
        p_weaponTime = &ps->weapState[0].weaponTime;
        v34 = &ps->weapState[0].weaponTime;
        do
        {
          if ( BG_GesturePriority_AllowReload(pm, v18) )
          {
            switch ( p_weaponTime[4] )
            {
              case 1:
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
                if ( !PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, v18, pm->m_bgHandler) )
                  goto $LN181;
                goto LABEL_70;
              case 7:
              case 8:
              case 10:
              case 11:
              case 12:
              case 13:
              case 14:
                goto $LN181;
              case 9:
                PM_Weapon_RestoreOffhandUnderbarrelMode(pm->weaponMap, ps, &offhandUnderbarrelModeData);
                if ( PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, v18, pm->m_bgHandler) && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x27u) )
                  goto LABEL_70;
                goto LABEL_103;
              case 18:
                v20 = v40;
                ReloadType = BG_GetReloadType(CurrentWeaponForPlayer, v40);
                if ( (unsigned int)(ReloadType - 2) <= 1 && PM_Weapon_AllowReload(pm->weaponMap, ps, v18) )
                {
                  LOBYTE(hasFastReloadOverride) = 0;
                  if ( v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7637, ASSERT_TYPE_ASSERT, "(hand == WEAPON_HAND_DEFAULT)", (const char *)&queryFormat, "hand == WEAPON_HAND_DEFAULT") )
                    __debugbreak();
                  v22 = BG_ReloadAddTime(ps, CurrentWeaponForPlayer, v40, 0, p_weaponTime[10], 0, (bool *)&hasFastReloadOverride);
                  if ( p_weaponTime[1] <= 0 )
                  {
                    PM_ReloadClip(pm, v18);
                    PM_WeaponRechamberAmmo(ps, CurrentWeaponForPlayer, v40, v18);
                    PM_Weapon_ResetShotCount(ps, v18);
                    if ( *p_weaponTime > v22 )
                      BG_SetWeaponDelay(pm->weaponMap, ps, v18, v22, "Reload Add Time");
                  }
                  v20 = v40;
                }
                if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && SLOBYTE(pm->m_flags) < 0 && !BG_WeaponIsClipOnly(CurrentWeaponForPlayer, v20) )
                {
                  BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RELOAD, 0, 1, &pml->holdrand);
                  if ( ReloadType == RELOAD_TYPE_SEGMENTED )
                    BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RELOAD_LOOP, 0, 1, &pml->holdrand);
                }
                break;
              case 19:
                if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && SLOBYTE(pm->m_flags) < 0 && !BG_WeaponIsClipOnly(CurrentWeaponForPlayer, v40) )
                {
                  BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RELOAD, 0, 1, &pml->holdrand);
                  BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RELOAD_START, 0, 1, &pml->holdrand);
                }
                break;
              case 20:
              case 21:
                if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && SLOBYTE(pm->m_flags) < 0 && !BG_WeaponIsClipOnly(CurrentWeaponForPlayer, v40) )
                {
                  BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RELOAD, 0, 1, &pml->holdrand);
                  BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RELOAD_END, 0, 1, &pml->holdrand);
                }
                break;
              default:
LABEL_70:
                v32 = 0;
                if ( v35 && PM_Weapon_AllowReload(pm->weaponMap, ps, v18) )
                {
                  v33 = 1;
                  v32 = 1;
                }
                v23 = !BG_CanSprintReload(ps);
                v24 = p_weaponTime[4] == 16 && *p_weaponTime > 0;
                AmmoInClipForWeapon = BG_GetAmmoInClipForWeapon(ps, r_weapon, v40, v18);
                if ( AmmoInClipForWeapon >= BG_RequiredAmmoPerShot(r_weapon, v40) || !BG_GetAmmoNotInClip(ps, r_weapon, v40) || v24 && !PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, v18, pm->m_bgHandler) || (unsigned int)(p_weaponTime[4] - 34) <= 2 && v23 || v38 )
                  goto LABEL_96;
                v26 = pm->ps;
                if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7434, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
                  __debugbreak();
                if ( v37 < 1 )
                  goto LABEL_94;
                v27 = v18 == WEAPON_HAND_DEFAULT;
                if ( (unsigned int)(v26->weapState[v27].weaponState - 18) > 3 )
                  goto LABEL_94;
                AmmoNotInClip = BG_GetAmmoNotInClip(v26, r_weapon, v40);
                v29 = BG_RequiredAmmoPerShot(r_weapon, v40);
                if ( v26->weapState[v27].weaponDelay > 0 || DelayedActionState::IsDelayedAction((DelayedActionState *)delayedActionState, v26, (const PlayerHandIndex)v27) )
                  AmmoNotInClip -= PM_CalcBaselineAmmoAdd(pm, (const PlayerHandIndex)v27, r_weapon, v40, 0);
                if ( AmmoNotInClip < v29 )
                {
LABEL_96:
                  CurrentWeaponForPlayer = r_weapon;
                }
                else
                {
                  v18 = hasFastReloadOverride;
LABEL_94:
                  CurrentWeaponForPlayer = r_weapon;
                  if ( BG_WeaponCanAutoReload(ps, r_weapon, v40) )
                    goto LABEL_98;
                }
                v18 = hasFastReloadOverride;
                if ( !v32 )
                  goto LABEL_99;
LABEL_98:
                PM_BeginWeaponReload(ps, pm, pml, v18);
LABEL_99:
                p_weaponTime = v34;
                break;
            }
          }
          hasFastReloadOverride = ++v18;
          ++v36;
          p_weaponTime += 20;
          v34 = p_weaponTime;
        }
        while ( v36 <= v37 );
        if ( !v33 )
$LN181:
          PM_Weapon_RestoreOffhandUnderbarrelMode(pm->weaponMap, ps, &offhandUnderbarrelModeData);
      }
    }
  }
LABEL_103:
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_Weapon_CheckForSlide
==============
*/
void PM_Weapon_CheckForSlide(pmove_t *pm)
{
  playerState_s *ps; 
  const Weapon *RequestedWeapon; 
  bool v4; 
  unsigned __int64 weaponState; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int *p_weaponTime; 
  BgWeaponMap *weaponMap; 
  PlayerHandIndex v12; 
  int WeaponHand; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16794, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16794, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  RequestedWeapon = PM_GetRequestedWeapon(pm);
  v4 = BG_UsingAlternate(ps);
  if ( RequestedWeapon->weaponIdx )
  {
    weaponState = ps->weapState[0].weaponState;
    if ( (unsigned int)(weaponState - 16) > 1 && (unsigned int)(weaponState - 22) > 2 )
    {
      v6 = ps->weapState[1].weaponState;
      if ( (unsigned int)(v6 - 16) > 1 && (unsigned int)(v6 - 22) > 2 )
      {
        if ( (unsigned int)weaponState > 0x32 || (v7 = 0x4000000001FBEi64, !_bittest64(&v7, weaponState)) || PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, pm->m_bgHandler) )
        {
          v8 = ps->weapState[0].weaponState;
          if ( (unsigned int)(v8 - 26) > 6 && ((unsigned int)(v8 - 18) > 3 || BG_GetReloadType(RequestedWeapon, v4) == RELOAD_TYPE_NORMAL && PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, pm->m_bgHandler)) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u) && (unsigned int)(ps->weapState[0].weaponState - 51) > 2 && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) && !Slide_ShouldReadyWeapon(pm) )
          {
            v9 = ps->weapState[0].weaponState;
            if ( v9 != 46 && (v9 || !ps->weapState[0].weaponTime) )
            {
              p_weaponTime = &ps->weapState[0].weaponTime;
              weaponMap = pm->weaponMap;
              if ( !weaponMap )
              {
                p_weaponTime = &ps->weapState[0].weaponTime;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16776, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
                {
                  __debugbreak();
                  p_weaponTime = &ps->weapState[0].weaponTime;
                }
              }
              v12 = WEAPON_HAND_DEFAULT;
              WeaponHand = BG_PlayerLastWeaponHand(weaponMap, ps);
              if ( WeaponHand >= 0 )
              {
                v14 = WeaponHand + 1i64;
                do
                {
                  if ( (unsigned int)v12 >= NUM_WEAPON_HANDS )
                  {
                    LODWORD(v16) = 2;
                    LODWORD(v15) = v12;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16783, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v15, v16) )
                      __debugbreak();
                  }
                  p_weaponTime[4] = 46;
                  *p_weaponTime = 0;
                  BG_SetWeaponDelay(weaponMap, ps, v12, 0, NULL);
                  if ( (*(p_weaponTime - 4) & 0xFFFFFF7F) != 55 && ps->pm_type < 7 )
                    PM_SetNextWeaponAnim(ps, WEAP_SLIDE, v12);
                  ++v12;
                  p_weaponTime += 20;
                  --v14;
                }
                while ( v14 );
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
PM_Weapon_CheckForSprint
==============
*/
__int64 PM_Weapon_CheckForSprint(pmove_t *pm, pml_t *pml, const bool transitionToReadyCheck, const PlayerHandIndex hand, const int delayedAction)
{
  __int64 v5; 
  playerState_s *ps; 
  unsigned __int64 weaponState; 
  __int64 v11; 
  bool v12; 
  int v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  bool ShouldBeFiringOrCharging; 
  playerState_s *v17; 
  unsigned __int8 v18; 
  playerState_s *v19; 
  bool IsInterruptable; 
  playerState_s *v21; 
  const dvar_t *v22; 
  bool enabled; 
  const Weapon *v24; 
  WeaponAnimNumber v25; 
  BgWeaponMap *weaponMap; 
  playerState_s *v27; 
  const dvar_t *v28; 
  const Weapon *ViewmodelWeapon; 

  v5 = hand;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon_CheckForSprint");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16377, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16377, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16378, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !PM_GetRequestedWeapon(pm)->weaponIdx )
    goto LABEL_77;
  if ( BG_Skydive_IsSkydiving(ps) )
    goto LABEL_77;
  if ( BG_IsPlayerInExecution(ps) )
    goto LABEL_77;
  if ( BG_HasLadderHand(ps) )
    goto LABEL_77;
  weaponState = ps->weapState[v5].weaponState;
  if ( (unsigned int)weaponState <= 0x32 )
  {
    v11 = 0x4000000001D80i64;
    if ( _bittest64(&v11, weaponState) )
      goto LABEL_77;
  }
  v12 = PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, (PlayerHandIndex)v5, pm->m_bgHandler);
  if ( !v12 )
  {
    if ( !transitionToReadyCheck )
    {
      v13 = ps->weapState[v5].weaponState;
      if ( (unsigned int)(v13 - 16) <= 1 || (unsigned int)(v13 - 22) <= 2 )
        goto LABEL_77;
    }
    v14 = ps->weapState[v5].weaponState;
    if ( (unsigned int)v14 <= 0x32 )
    {
      v15 = 0x44001FDC01FBEi64;
      if ( _bittest64(&v15, v14) )
        goto LABEL_77;
    }
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
    goto LABEL_77;
  ShouldBeFiringOrCharging = PM_Weapon_ShouldBeFiringOrCharging(pm, delayedAction, (PlayerHandIndex)v5, 1, 1, 1);
  v17 = pm->ps;
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16097, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_CanSprintFire(v17) && v17->weapState[v5].weaponState == 60 && ShouldBeFiringOrCharging )
  {
    PM_Weapon_Sprint_CombatIdle(pm->weaponMap, ps, (PlayerHandIndex)v5, 0);
LABEL_77:
    v18 = 0;
    goto LABEL_78;
  }
  if ( !PM_Weapon_Sprint_ShouldRaiseHand(pm, (PlayerHandIndex)v5, ShouldBeFiringOrCharging, v12) )
  {
    v19 = pm->ps;
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16284, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (unsigned int)(v19->weapState[v5].weaponState - 34) > 1 || (!BG_Offhand_HasActiveOffhand(v19) ? (!BG_NightVisionAnyGestureIsPlaying(pm->weaponMap, v19, pm->cmd.serverTime) ? (IsInterruptable = BG_GesturePriority_AllowSprintAnims(pm)) : (IsInterruptable = BG_NightVisionInterruptable(pm->weaponMap, v19, pm->cmd.serverTime))) : (IsInterruptable = BG_Offhand_ActiveOffhandIsInterruptable(pm)), IsInterruptable && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v19->pm_flags, ACTIVE, 0x14u)) )
    {
      v27 = pm->ps;
      if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16325, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !BG_CanSprintFire(v27) || !ShouldBeFiringOrCharging || (unsigned int)(v27->weapState[v5].weaponState - 34) > 1 )
        goto LABEL_77;
      v21 = pm->ps;
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16351, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v28 = DCONST_DVARMPBOOL_movementAnimProto;
      if ( !DCONST_DVARMPBOOL_movementAnimProto && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movementAnimProto") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      if ( v28->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16353, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DCONST_DVARMPBOOL_movementAnimProto, \"movementAnimProto\" ))", (const char *)&queryFormat, "!DconstMP_GetBool( movementAnimProto )") )
        __debugbreak();
      ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, v21);
      v25 = WEAP_SPRINT_OUT;
      if ( v21->weapState[v5].weaponState == 34 && BG_ViewModelAnimExists(v21, WEAP_ANIM_SPRINT_IN_CANCEL, (PlayerHandIndex)v5, pm->m_bgHandler) )
        v25 = WEAP_SPRINT_IN_CANCEL;
      v21->weapState[v5].weaponState = 57;
      v21->weapState[v5].weaponTime = GetSprintOutTime(pm->weaponMap, v21, ViewmodelWeapon);
      BG_SetWeaponDelay(pm->weaponMap, v21, (const PlayerHandIndex)v5, 0, NULL);
    }
    else
    {
      v21 = pm->ps;
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16067, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v22 = DCONST_DVARMPBOOL_movementAnimProto;
      if ( !DCONST_DVARMPBOOL_movementAnimProto && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movementAnimProto") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      enabled = v22->current.enabled;
      v24 = BG_GetViewmodelWeapon(pm->weaponMap, v21);
      v25 = WEAP_SPRINT_OUT;
      if ( v21->weapState[v5].weaponState == 34 && BG_ViewModelAnimExists(v21, WEAP_ANIM_SPRINT_IN_CANCEL, (PlayerHandIndex)v5, pm->m_bgHandler) )
        v25 = WEAP_SPRINT_IN_CANCEL;
      v21->weapState[v5].weaponState = 36;
      BG_SetWeaponDelay(pm->weaponMap, v21, (const PlayerHandIndex)v5, 0, NULL);
      weaponMap = pm->weaponMap;
      if ( enabled )
      {
        v21->weapState[v5].weaponTime = BG_GetSprintOutInterruptRemaining(weaponMap, v21);
        goto LABEL_77;
      }
      v21->weapState[v5].weaponTime = GetSprintOutTime(weaponMap, v21, v24);
    }
    if ( v21->pm_type < 7 )
      PM_SetNextWeaponAnim(v21, v25, (PlayerHandIndex)v5);
    goto LABEL_77;
  }
  Sprint_State_Raise_Hand(pm, pml, (PlayerHandIndex)v5);
  v18 = 1;
LABEL_78:
  Sys_ProfEndNamedEvent();
  return v18;
}

/*
==============
PM_Weapon_CheckForStunned
==============
*/
void PM_Weapon_CheckForStunned(pmove_t *pm, unsigned int *holdrand)
{
  unsigned int *v2; 
  playerState_s *ps; 
  unsigned __int64 weaponState; 
  __int64 v6; 
  unsigned int v7; 
  BgWeaponMap *v8; 
  bool v9; 
  bool v10; 
  PlayerHandIndex v11; 
  int v12; 
  int *v13; 
  __int64 v14; 
  BgWeaponMap *weaponMap; 
  bool v16; 
  bool v17; 
  PlayerHandIndex v18; 
  int WeaponHand; 
  int *p_weaponTime; 
  __int64 v21; 
  Weapon *r_weapon; 
  Weapon *r_weapona; 

  v2 = holdrand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17237, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17237, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PM_GetRequestedWeapon(pm)->weaponIdx )
  {
    weaponState = ps->weapState[0].weaponState;
    if ( (unsigned int)weaponState > 0x32 || (v6 = 0x40001FC001FBEi64, !_bittest64(&v6, weaponState)) )
    {
      v7 = weaponState - 37;
      if ( ps->stunTime < pm->cmd.serverTime )
      {
        if ( v7 <= 1 )
        {
          weaponMap = pm->weaponMap;
          if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17214, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          v16 = BG_UsingAlternate(ps);
          v17 = BG_PlayerDualWielding(ps) == 1;
          r_weapona = (Weapon *)BG_GetCurrentWeaponForPlayer(weaponMap, ps);
          v18 = WEAPON_HAND_DEFAULT;
          WeaponHand = BG_PlayerLastWeaponHand(weaponMap, ps);
          if ( WeaponHand >= 0 )
          {
            p_weaponTime = &ps->weapState[0].weaponTime;
            v21 = WeaponHand + 1i64;
            do
            {
              p_weaponTime[4] = 39;
              *p_weaponTime = BG_StunnedTimeEnd(ps, r_weapona, v16, v17);
              BG_SetWeaponDelay(weaponMap, ps, v18, 0, NULL);
              if ( ps->pm_type < 7 )
                PM_SetNextWeaponAnim(ps, WEAP_STUNNED_END, v18);
              ++v18;
              p_weaponTime += 20;
              --v21;
            }
            while ( v21 );
          }
        }
      }
      else if ( v7 > 1 )
      {
        v8 = pm->weaponMap;
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17175, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        v9 = BG_UsingAlternate(ps);
        v10 = BG_PlayerDualWielding(ps) == 1;
        r_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(v8, ps);
        v11 = WEAPON_HAND_DEFAULT;
        v12 = BG_PlayerLastWeaponHand(v8, ps);
        if ( v12 >= 0 )
        {
          v13 = &ps->weapState[0].weaponTime;
          v14 = v12 + 1i64;
          do
          {
            v13[4] = 37;
            *v13 = BG_StunnedTimeBegin(ps, r_weapon, v9, v10);
            BG_SetWeaponDelay(pm->weaponMap, ps, v11, 0, NULL);
            if ( ps->pm_type < 7 )
              PM_SetNextWeaponAnim(ps, WEAP_STUNNED_START, v11);
            ++v11;
            v13 += 20;
            --v14;
          }
          while ( v14 );
          v2 = holdrand;
        }
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
          BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_FLINCH, 0, 1, v2);
      }
    }
  }
}

/*
==============
PM_Weapon_CheckForTakeOffhand
==============
*/
void PM_Weapon_CheckForTakeOffhand(pmove_t *pm)
{
  playerState_s *ps; 
  const Weapon *FirstEquippedOffhandBySlot; 
  const Weapon *OffHandWeaponForPlayer; 
  const WeaponDef *v5; 
  unsigned __int64 weaponState; 
  __int64 v7; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14647, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14647, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x24u) )
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x24u);
  FirstEquippedOffhandBySlot = BG_GetFirstEquippedOffhandBySlot(pm->weaponMap, ps, OFFHAND_SLOT_SCRIPTED);
  if ( !FirstEquippedOffhandBySlot->weaponIdx )
    return;
  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(pm->weaponMap, ps);
  v5 = BG_WeaponDef(FirstEquippedOffhandBySlot, 0);
  if ( memcmp_0(FirstEquippedOffhandBySlot, OffHandWeaponForPlayer, 0x3Cui64) )
  {
LABEL_22:
    BG_TakePlayerWeapon(pm->weaponMap, ps, pm->m_bgHandler, FirstEquippedOffhandBySlot, pm->cmd.serverTime);
    return;
  }
  if ( !BG_WeaponDoesNotFullyAnimateViewmodelPlayerState(ps, FirstEquippedOffhandBySlot, 0) )
  {
    weaponState = ps->weapState[0].weaponState;
    if ( (unsigned int)weaponState <= 0x32 )
    {
      v7 = 0x40001FC001FBEi64;
      if ( _bittest64(&v7, weaponState) )
        return;
    }
    goto LABEL_22;
  }
  if ( v5->weapType == WEAPTYPE_GRENADE && !BG_Offhand_IsPlayingGrenadeGesture(pm->weaponMap, ps) && !ps->weapCommon.offhandGestureFireTime )
    BG_TakePlayerWeapon(pm->weaponMap, ps, pm->m_bgHandler, FirstEquippedOffhandBySlot, pm->cmd.serverTime);
  if ( v5->weapType == WEAPTYPE_SCRIPT && !BG_Offhand_IsPlayingGesture(pm->weaponMap, ps, OHGT_WEAPON) && !ps->weapCommon.offhandGestureFireTime )
    goto LABEL_22;
}

/*
==============
PM_Weapon_ContinueOffhandUnderbarrel
==============
*/
void PM_Weapon_ContinueOffhandUnderbarrel(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  bool v5; 
  const Weapon *CurrentWeaponForPlayer; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7055, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7055, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1422, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
      __debugbreak();
  }
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x35u) )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) )
      goto LABEL_15;
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1426, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )");
  }
  else
  {
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7057, ASSERT_TYPE_ASSERT, "(BG_PWF_UseAlternateAsOffhand( ps ))", (const char *)&queryFormat, "BG_PWF_UseAlternateAsOffhand( ps )");
  }
  if ( v5 )
    __debugbreak();
LABEL_15:
  if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7058, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  if ( BG_HasUnderbarrelShotgun(CurrentWeaponForPlayer) || (pm->cmd.buttons & 0x3000) == 0 )
    PM_Weapon_OffHandEnd(pm, pml, ps);
  else
    PM_Weapon_OffHandHold(pm, pml, ps);
}

/*
==============
PM_Weapon_FinishFiring
==============
*/
void PM_Weapon_FinishFiring(pmove_t *pm, const PlayerHandIndex hand, const Weapon *currentWeapon, const bool isAlternate, const bool isDualWielding, const bool wasFiring, const WeaponDef *weapDef, unsigned int *holdrand)
{
  __int64 v9; 
  playerState_s *ps; 
  bool IsWeaponRecoilDelayed; 
  int v14; 
  int v15; 
  const HyperBurstInfo *HyperBurstInfo; 
  playerState_s *v17; 
  int v18; 
  unsigned int adsRecoilShotCountOffset; 
  ClipAmmo *ClipAmmoPtr; 
  int v21; 
  __int64 shotCount; 
  int *fireTime; 
  int *fireDelay; 
  int v25; 
  int v26; 
  unsigned int *v27; 
  AmmoStore result; 
  AmmoStore r_clipIndex; 

  v9 = hand;
  v27 = holdrand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9734, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9734, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->weapState[v9].weaponDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9735, ASSERT_TYPE_ASSERT, "( ps->weapState[hand].weaponDelay ) == ( 0 )", "%s == %s\n\t%i, %i", "ps->weapState[hand].weaponDelay", "0", ps->weapState[v9].weaponDelay, 0i64) )
    __debugbreak();
  if ( !BG_IsOffhandWeaponType(currentWeapon, isAlternate) )
  {
    PM_WeaponOffsets_FireWeapon(pm);
    IsWeaponRecoilDelayed = BG_IsWeaponRecoilDelayed(pm, ps);
    if ( !wasFiring && !IsWeaponRecoilDelayed )
    {
      BG_GetFireTime(pm->weaponMap, ps, currentWeapon, isAlternate, isDualWielding, ps->weapState[v9].weaponShotCount, &v25, &v26);
      v14 = BG_StartingKickBullets(currentWeapon, isAlternate);
      ps->weapState[v9].weaponStartingKickTime = v26 + v25 * v14;
      v15 = BG_EndingKickBullets(currentWeapon, isAlternate);
      ps->weapState[v9].weaponEndingKickTime = v26 + v25 * v15;
      if ( ps->weapState[v9].weaponStartingKickTime < 0 )
      {
        LODWORD(fireDelay) = ps->weapState[v9].weaponStartingKickTime;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9751, ASSERT_TYPE_ASSERT, "( ps->weapState[hand].weaponStartingKickTime ) >= ( 0 )", "%s >= %s\n\t%i, %i", "ps->weapState[hand].weaponStartingKickTime", "0", fireDelay, 0i64) )
          __debugbreak();
      }
      if ( ps->weapState[v9].weaponEndingKickTime < 0 )
      {
        LODWORD(fireDelay) = ps->weapState[v9].weaponEndingKickTime;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9752, ASSERT_TYPE_ASSERT, "( ps->weapState[hand].weaponEndingKickTime ) >= ( 0 )", "%s >= %s\n\t%i, %i", "ps->weapState[hand].weaponEndingKickTime", "0", fireDelay, 0i64) )
          __debugbreak();
      }
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      HyperBurstInfo = BG_GetHyperBurstInfo(currentWeapon, isAlternate);
      if ( !HyperBurstInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9759, ASSERT_TYPE_ASSERT, "(hyperBurstInfo)", (const char *)&queryFormat, "hyperBurstInfo") )
        __debugbreak();
      if ( !HyperBurstInfo->enabled || ps->weapState[v9].weaponShotCount != 1 )
        PM_Weapon_FireWeaponAnimScriptEvent(pm, ps, currentWeapon, isAlternate, v27);
    }
  }
  v17 = pm->ps;
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9709, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v9 >= 2 )
  {
    LODWORD(fireTime) = 2;
    LODWORD(shotCount) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9710, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", shotCount, fireTime) )
      __debugbreak();
  }
  v17->weapState[v9].weaponPrevFireTime = v17->weapState[v9].weaponFireTime;
  v17->weapState[v9].weaponFireTime = pm->cmd.serverTime;
  if ( (weapDef->changedFireTime == 0.0) != (weapDef->changedFireTimeNumBullets == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9772, ASSERT_TYPE_ASSERT, "((weapDef->changedFireTime == 0) == (weapDef->changedFireTimeNumBullets == 0))", (const char *)&queryFormat, "(weapDef->changedFireTime == 0) == (weapDef->changedFireTimeNumBullets == 0)") )
    __debugbreak();
  if ( weapDef->changedFireTimeNumBullets > 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9773, ASSERT_TYPE_ASSERT, "(weapDef->changedFireTimeNumBullets <= ( ( 1 << 5 ) - 1 ))", (const char *)&queryFormat, "weapDef->changedFireTimeNumBullets <= PLAYER_WEAPONSHOTCOUNT_MAX") )
    __debugbreak();
  ++ps->weapState[v9].weaponShotCount;
  v18 = 31;
  if ( ps->weapState[v9].weaponShotCount > 0x1F )
  {
    ps->weapState[v9].weaponShotCount = 31;
    adsRecoilShotCountOffset = ps->weapCommon.adsRecoilShotCountOffset;
    if ( adsRecoilShotCountOffset )
      ps->weapCommon.adsRecoilShotCountOffset = adsRecoilShotCountOffset - 1;
  }
  if ( BG_IsBoltAction(currentWeapon, isAlternate) )
  {
    r_clipIndex = *BG_AmmoStoreForWeapon(&result, currentWeapon, isAlternate);
    ClipAmmoPtr = BG_GetClipAmmoPtr(ps, &r_clipIndex);
    if ( !ClipAmmoPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9789, ASSERT_TYPE_ASSERT, "(clipAmmo != nullptr)", (const char *)&queryFormat, "clipAmmo != nullptr") )
      __debugbreak();
    v21 = ClipAmmoPtr->chamberedCount[v9] - 1;
    if ( v21 < 0 )
      v21 = 0;
    ClipAmmoPtr->chamberedCount[v9] = v21;
    if ( ClipAmmoPtr->shotsSinceRechamber[v9] + 1 < 31 )
      v18 = ClipAmmoPtr->shotsSinceRechamber[v9] + 1;
    ClipAmmoPtr->shotsSinceRechamber[v9] = v18;
  }
}

/*
==============
PM_Weapon_FinishRechamber
==============
*/
void PM_Weapon_FinishRechamber(playerState_s *ps, const Weapon *r_weapon, bool isAlternate, PlayerHandIndex hand, bool reachedEndOfRechamber)
{
  __int64 v5; 
  char *v9; 

  v5 = hand;
  BG_SetQAS(ps, hand, QAS_STATE_NONE);
  v9 = (char *)ps + 80 * v5;
  if ( (*((_DWORD *)v9 + 331) & 0xFFFFFF7F) != 0 && ps->pm_type < 7 )
    PM_SetNextWeaponAnim(ps, WEAP_IDLE, (PlayerHandIndex)v5);
  if ( BG_CanSprintFire(ps) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
  {
    *((_DWORD *)v9 + 339) = 58;
  }
  else if ( !BG_Ladder_CanAim(r_weapon, ps, isAlternate) || (_DWORD)v5 )
  {
    *((_DWORD *)v9 + 339) = BG_Ladder_CanClimb(ps) ? 0x2F : 0;
  }
  else
  {
    *((_DWORD *)v9 + 339) = 48;
  }
  if ( reachedEndOfRechamber )
    PM_WeaponRechamberAmmo(ps, r_weapon, isAlternate, (PlayerHandIndex)v5);
}

/*
==============
PM_Weapon_FinishReload
==============
*/
__int64 PM_Weapon_FinishReload(pmove_t *pm, pml_t *pml, int delayedAction, PlayerHandIndex hand)
{
  __int64 v4; 
  playerState_s *ps; 
  int *v8; 
  bool v9; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v11; 
  ReloadType ReloadType; 
  bool v14; 
  int v15; 
  BgWeaponMap *weaponMap; 
  weaponstate_t ReloadEndState; 
  bool v18; 
  int v19; 
  bool v20; 
  bool v21; 
  int v22; 
  bool v23; 
  WeaponAnimNumber v24; 
  int v25; 
  bool v26; 
  WeaponAnimNumber outWeaponAnimNumber; 
  pml_t *pmla; 
  int buttonIsPressedNow; 
  int outDelay; 

  pmla = pml;
  v4 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7099, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7099, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = &ps->commandTime + 20 * v4;
  if ( v8[339] != 18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7100, ASSERT_TYPE_ASSERT, "(ps->weapState[hand].weaponState == WEAPON_RELOADING)", (const char *)&queryFormat, "ps->weapState[hand].weaponState == WEAPON_RELOADING") )
    __debugbreak();
  v9 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v11 = CurrentWeaponForPlayer;
  if ( delayedAction )
  {
    PM_Weapon_ReloadDelayedAction(pm, (PlayerHandIndex)v4);
    if ( v8[335] )
      return 1i64;
  }
  else if ( v8[335] && !PM_Weapon_UsesBurstCooldown(CurrentWeaponForPlayer, ps) )
  {
    goto LABEL_16;
  }
  PM_Weapon_ResetShotCount(ps, (const PlayerHandIndex)v4);
LABEL_16:
  ReloadType = BG_GetReloadType(v11, v9);
  v14 = ReloadType == RELOAD_TYPE_SEGMENTED;
  LOBYTE(outDelay) = ReloadType == RELOAD_TYPE_SEGMENTED;
  if ( ReloadType != RELOAD_TYPE_SEGMENTED )
    goto LABEL_34;
  LOBYTE(buttonIsPressedNow) = 0;
  v15 = PM_Weapon_CheckForFireOrChargeButton(pm, (PlayerHandIndex)v4, 0, 0, (bool *)&buttonIsPressedNow);
  weaponMap = pm->weaponMap;
  buttonIsPressedNow = v15;
  if ( !PM_WeaponClipEmpty(weaponMap, ps, (PlayerHandIndex)v4) && buttonIsPressedNow )
  {
    ps->weapState[v4].weapHandFlags |= 4u;
    goto LABEL_24;
  }
  if ( v8[335] )
    goto LABEL_34;
  if ( PM_Weapon_AllowReload(pm->weaponMap, ps, (PlayerHandIndex)v4) )
  {
    PM_SetReloadingState(pm, (PlayerHandIndex)v4);
    return 1i64;
  }
  if ( v8[335] )
  {
LABEL_34:
    v20 = PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, (PlayerHandIndex)v4, pm->m_bgHandler);
    v21 = v20;
    if ( !v8[335] || v20 )
    {
      if ( BG_PWF_UseAlternateAsOffhand(ps) )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7186, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
          __debugbreak();
        if ( !BG_HasUnderbarrelShotgun(v11) || !v8[335] )
        {
          PM_Weapon_ContinueOffhandUnderbarrel(pm, pmla);
          return 1i64;
        }
      }
      else if ( v8[335] )
      {
        if ( !v14 && v21 )
        {
          v25 = v8[345];
          v26 = BG_BoltActionReloadIncludesRechamber(v11, v9);
          if ( !v25 || v26 )
            PM_Weapon_ReloadRechamber(pm, (PlayerHandIndex)v4, v11, v9);
        }
      }
      else
      {
        if ( (_BYTE)outDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7210, ASSERT_TYPE_ASSERT, "(!segmentedReload)", "%s\n\tShould only rechamber ammo during ReloadEnd state for segmented reloads.", "!segmentedReload") )
          __debugbreak();
        v22 = v8[345];
        v23 = BG_BoltActionReloadIncludesRechamber(v11, v9);
        if ( !v22 || v23 )
          PM_Weapon_ReloadRechamber(pm, (PlayerHandIndex)v4, v11, v9);
        if ( PM_Weapon_IsSwimmingForward(pm->weaponMap, ps) )
        {
          if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7221, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
            __debugbreak();
          v24 = WEAP_SWIM_LOOP;
        }
        else
        {
          v24 = WEAP_IDLE;
        }
        v8[339] = 0;
        if ( ps->pm_type < 7 )
          PM_SetNextWeaponAnim(ps, v24, (PlayerHandIndex)v4);
      }
    }
    return 0i64;
  }
LABEL_24:
  outWeaponAnimNumber = WEAP_ANIM_UNSET;
  buttonIsPressedNow = 0;
  outDelay = 0;
  ReloadEndState = PM_Weapon_GetReloadEndState(pm, (PlayerHandIndex)v4, &outWeaponAnimNumber, &buttonIsPressedNow, &outDelay);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    v18 = BG_UsingAlternate(ps);
    if ( !BG_WeaponIsClipOnly(v11, v18) )
    {
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RELOAD_END, 0, 1, &pmla->holdrand);
      if ( BG_GetWeaponAltReloadAnimsEnabled(v11, v9) )
        BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_ALT_RELOAD_ANIMS, 0, 1, NULL);
    }
  }
  if ( !buttonIsPressedNow )
  {
    v8[339] = 0;
    BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v4, 0, NULL);
    if ( ps->pm_type < 7 )
      PM_SetNextWeaponAnim(ps, WEAP_IDLE, (PlayerHandIndex)v4);
    return 0i64;
  }
  v19 = outDelay;
  v8[335] = buttonIsPressedNow;
  v8[339] = ReloadEndState;
  BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v4, v19, "Reload End Shell Eject Time");
  if ( ps->pm_type < 7 )
    PM_SetNextWeaponAnim(ps, outWeaponAnimNumber, (PlayerHandIndex)v4);
  PM_AddEvent(pm, EV_RELOAD_END);
  return 1i64;
}

/*
==============
PM_Weapon_FinishReloadEnd
==============
*/
_BOOL8 PM_Weapon_FinishReloadEnd(pmove_t *pm, pml_t *pml, PlayerHandIndex hand, const bool isInInterruptibleState, int delayedAction)
{
  __int64 v5; 
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 
  entity_event_t v11; 
  int weaponTime; 

  v5 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7286, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7286, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)(ps->weapState[v5].weaponState - 20) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7290, ASSERT_TYPE_ASSERT, "((weaponState.weaponState == WEAPON_RELOAD_END) || (weaponState.weaponState == WEAPON_RELOAD_END_RECHAMBER))", (const char *)&queryFormat, "(weaponState.weaponState == WEAPON_RELOAD_END) || (weaponState.weaponState == WEAPON_RELOAD_END_RECHAMBER)") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v10 = BG_UsingAlternate(ps);
  if ( BG_IsBoltAction(CurrentWeaponForPlayer, v10) && delayedAction )
  {
    v11 = EV_EJECT_BRASS_LEFT;
    if ( !(_DWORD)v5 )
      v11 = EV_EJECT_BRASS;
    BG_AddPredictableEventToPlayerstate(v11, 0, pm->cmd.serverTime, pm->weaponMap, pm->ps);
  }
  weaponTime = ps->weapState[v5].weaponTime;
  if ( (weaponTime <= 0 || isInInterruptibleState) && BG_PlayerWeaponNeedsReloadEndRechamber(ps, CurrentWeaponForPlayer, (PlayerHandIndex)v5) )
  {
    PM_WeaponRechamberAmmo(ps, CurrentWeaponForPlayer, v10, (PlayerHandIndex)v5);
    PM_Weapon_ValidateJitterModExploit(pm, CurrentWeaponForPlayer, v10, (const PlayerHandIndex)v5);
  }
  if ( weaponTime > 0 )
    return !isInInterruptibleState;
  if ( BG_PWF_UseAlternateAsOffhand(ps) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7318, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
    PM_Weapon_ContinueOffhandUnderbarrel(pm, pml);
    return 1i64;
  }
  else
  {
    ps->weapState[v5].weaponState = 0;
    if ( ps->pm_type < 7 )
      PM_SetNextWeaponAnim(ps, WEAP_IDLE, (PlayerHandIndex)v5);
    return 0i64;
  }
}

/*
==============
PM_Weapon_FinishReloadStart
==============
*/
void PM_Weapon_FinishReloadStart(pmove_t *pm, int delayedAction, PlayerHandIndex hand)
{
  __int64 v4; 
  playerState_s *ps; 
  char *v7; 
  int v8; 
  weaponstate_t ReloadEndState; 
  BgWeaponMap *weaponMap; 
  weaponstate_t v11; 
  bool v12; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v14; 
  int v15; 
  int v16; 
  int outDelay; 
  int buttonIsPressedNow; 
  WeaponAnimNumber outWeaponAnimNumber; 

  v4 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6984, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6984, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v7 = (char *)ps + 80 * v4;
  if ( *((_DWORD *)v7 + 339) != 19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6986, ASSERT_TYPE_ASSERT, "( ps->weapState[hand].weaponState ) == ( WEAPON_RELOAD_START )", "%s == %s\n\t%i, %i", "ps->weapState[hand].weaponState", "WEAPON_RELOAD_START", *((_DWORD *)v7 + 339), 19) )
    __debugbreak();
  if ( delayedAction )
    PM_Weapon_ReloadDelayedAction(pm, (PlayerHandIndex)v4);
  LOBYTE(buttonIsPressedNow) = 0;
  v8 = PM_Weapon_CheckForFireOrChargeButton(pm, (PlayerHandIndex)v4, 0, 0, (bool *)&buttonIsPressedNow);
  if ( PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, (PlayerHandIndex)v4, pm->m_bgHandler) && !PM_WeaponClipEmpty(pm->weaponMap, ps, (PlayerHandIndex)v4) && v8 )
  {
    ps->weapState[v4].weapHandFlags |= 4u;
LABEL_20:
    outWeaponAnimNumber = WEAP_ANIM_UNSET;
    buttonIsPressedNow = 0;
    outDelay = 0;
    ReloadEndState = PM_Weapon_GetReloadEndState(pm, (PlayerHandIndex)v4, &outWeaponAnimNumber, &buttonIsPressedNow, &outDelay);
    weaponMap = pm->weaponMap;
    v11 = ReloadEndState;
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7015, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    v12 = BG_UsingAlternate(ps);
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    if ( BG_GetReloadType(CurrentWeaponForPlayer, v12) == RELOAD_TYPE_SEGMENTED && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      v14 = BG_UsingAlternate(ps);
      if ( !BG_WeaponIsClipOnly(CurrentWeaponForPlayer, v14) )
      {
        BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RELOAD_END, 0, 1, NULL);
        if ( BG_GetWeaponAltReloadAnimsEnabled(CurrentWeaponForPlayer, v12) )
          BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_ALT_RELOAD_ANIMS, 0, 1, NULL);
      }
    }
    v15 = buttonIsPressedNow;
    if ( buttonIsPressedNow )
    {
      *((_DWORD *)v7 + 339) = v11;
      if ( ps->pm_type < 7 )
        PM_SetNextWeaponAnim(ps, outWeaponAnimNumber, (PlayerHandIndex)v4);
      v16 = outDelay;
      *((_DWORD *)v7 + 335) = v15;
      BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v4, v16, "Reload End Shell Eject Time");
      PM_AddEvent(pm, EV_RELOAD_END);
    }
    else
    {
      *((_DWORD *)v7 + 339) = 0;
      if ( ps->pm_type < 7 )
        PM_SetNextWeaponAnim(ps, WEAP_IDLE, (PlayerHandIndex)v4);
      BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v4, 0, NULL);
    }
    return;
  }
  if ( *((_DWORD *)v7 + 335) )
    return;
  if ( PM_Weapon_AllowReload(pm->weaponMap, ps, (PlayerHandIndex)v4) )
  {
    PM_SetReloadingState(pm, (PlayerHandIndex)v4);
    return;
  }
  if ( !*((_DWORD *)v7 + 335) )
    goto LABEL_20;
}

/*
==============
PM_Weapon_FinishWeaponChange
==============
*/
void PM_Weapon_FinishWeaponChange(pmove_t *pm, pml_t *pml, int previousWeaponState, const bool forceIdle, const bool forceQuickRaise)
{
  __int128 v5; 
  pml_t *v7; 
  playerState_s *ps; 
  bool v9; 
  const dvar_t *v10; 
  int v11; 
  const dvar_t *v12; 
  const Weapon *BestLadderWeapon; 
  const Weapon *RequestedWeapon; 
  const Weapon *v15; 
  bool v16; 
  BgWeaponMap *weaponMap; 
  int EquippedWeaponIndex; 
  const char *WeaponName; 
  const dvar_t *v20; 
  float v22; 
  int SprintLeftRaw; 
  int MaxSprintTime; 
  float v25; 
  const dvar_t *v26; 
  float v27; 
  int MeleeComboSeqCount; 
  int v29; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 
  BgWeaponMap *v31; 
  const PlayerEquippedWeaponState *EquippedWeaponStateConst; 
  int v33; 
  BOOL usedBefore; 
  BgWeaponMap *v35; 
  BgWeaponMap *v36; 
  bool v37; 
  bool v38; 
  char v39; 
  char inAltMode; 
  bool v41; 
  bool v42; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  int i; 
  playerState_s *v45; 
  bool v46; 
  bool IsDualWield; 
  __int64 v48; 
  bool v49; 
  WeaponDef *v50; 
  char v51; 
  bool v52; 
  bool v53; 
  bool v54; 
  char v55; 
  int v56; 
  BOOL v59; 
  BgWeaponMap *v60; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v62; 
  int v63; 
  int RaiseTime; 
  char v65; 
  bool IsThrowingAxe; 
  bool v67; 
  bool v68; 
  int v72; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  float v74; 
  double Float_Internal_DebugName; 
  int v76; 
  int v77; 
  unsigned int v78; 
  bool v79; 
  bool v80; 
  int v81; 
  bool v82; 
  bool HasPerk; 
  const dvar_t *v84; 
  bool v85; 
  bool v86; 
  weapInventoryType_t inventoryType; 
  weapInventoryType_t v88; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *v89; 
  const dvar_t *v90; 
  float v91; 
  const dvar_t *v92; 
  float v93; 
  unsigned int *p_holdrand; 
  PlayerAnimScriptEventType v95; 
  float v96; 
  float v97; 
  playerState_s *v98; 
  int v99; 
  playerState_s *v100; 
  bool IsSkydiving; 
  PlayerHandIndex v102; 
  int *p_weapHandFlags; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  bool v106; 
  int PlayerAnimType; 
  int WeaponClassForAnimCondition; 
  bool v109; 
  BgWeaponMap *v110; 
  int serverTime; 
  const BgHandler *m_bgHandler; 
  int v113; 
  bool v114; 
  __m256i v115; 
  int v116; 
  __int128 v117; 
  double v118; 
  __int64 checkRaise; 
  unsigned int *checkRaisea; 
  __int64 hand; 
  char v122; 
  char v123; 
  bool v124; 
  WeaponAnimNumber anim; 
  int v126; 
  bool v127; 
  float v128; 
  char v129; 
  char v130; 
  bool v131; 
  bool v132; 
  bool v133; 
  bool v134; 
  bool v135; 
  bool v137; 
  BOOL sameWeaponAltSwitch; 
  int v140; 
  WeaponAnimNumber v141; 
  unsigned int v143; 
  AmmoStore result; 
  Weapon r_weapon; 
  Weapon Buf1; 
  AmmoStore r_clip2; 
  char output[1024]; 
  _QWORD v149[3]; 

  v7 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6249, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6249, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  memset(&r_weapon, 0, 48);
  v130 = 0;
  v141 = WEAP_ANIM_UNSET;
  *(double *)&r_weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
  v143 = -1;
  v135 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u);
  v134 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x23u);
  v9 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u);
  if ( v9 )
  {
    v10 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
    if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
    {
      v12 = DCONST_DVARMPBOOL_ladderEnableWeapon;
      if ( !DCONST_DVARMPBOOL_ladderEnableWeapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableWeapon") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      if ( v12->current.enabled )
        BestLadderWeapon = BG_GetBestLadderWeapon(pm->weaponMap, ps);
      else
        BestLadderWeapon = PM_GetRequestedWeapon(pm);
      *(__m256i *)&r_weapon.weaponIdx = *(__m256i *)&BestLadderWeapon->weaponIdx;
      *(_OWORD *)&r_weapon.attachmentVariationIndices[5] = *(_OWORD *)&BestLadderWeapon->attachmentVariationIndices[5];
      *(_QWORD *)&r_weapon.attachmentVariationIndices[21] = *(_QWORD *)&BestLadderWeapon->attachmentVariationIndices[21];
      v11 = *(_DWORD *)&BestLadderWeapon->weaponCamo;
    }
    else
    {
      v11 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
      memset(&r_weapon, 0, 48);
      *(double *)&r_weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
    }
    *(_DWORD *)&r_weapon.weaponCamo = v11;
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Fu);
  }
  else
  {
    RequestedWeapon = PM_GetRequestedWeapon(pm);
    if ( !BG_PlayerHasWeapon(pm->weaponMap, ps, RequestedWeapon) || (v15 = PM_GetRequestedWeapon(pm), !BG_PlayerHasWeapon(pm->weaponMap, ps, v15)) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0xAu) || BG_IsVehicleActive(ps) || (r_weapon = *PM_GetRequestedWeapon(pm), r_weapon.weaponIdx >= BG_GetNumWeapons()) )
    {
      memset(&r_weapon, 0, 48);
      *(double *)&r_weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
      *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    }
  }
  if ( !BG_PlayerHasWeapon(pm->weaponMap, ps, &r_weapon) )
  {
    memset(&r_weapon, 0, 48);
    *(double *)&r_weapon.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
    *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  }
  Buf1 = *BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v16 = BG_UsingAlternate(ps);
  weaponMap = pm->weaponMap;
  v137 = v16;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1063, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1064, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  EquippedWeaponIndex = BG_GetEquippedWeaponIndex(weaponMap, ps, &r_weapon);
  if ( EquippedWeaponIndex < 0 || (playerState_s *)((char *)ps + 16 * EquippedWeaponIndex) == (playerState_s *)-1540i64 )
  {
    WeaponName = BG_GetWeaponName(&r_weapon, output, 0x400u);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6305, ASSERT_TYPE_ASSERT, "(BG_GetEquippedWeaponState( pm->weaponMap, ps, newweapon ))", "%s\n\tChanging to weapon %s, but we don't have that equipped", "BG_GetEquippedWeaponState( pm->weaponMap, ps, newweapon )", WeaponName) )
      __debugbreak();
  }
  v20 = DVARBOOL_killswitch_sprint_slide_exploit_fix;
  _XMM7 = 0i64;
  v22 = 0.0;
  if ( !DVARBOOL_killswitch_sprint_slide_exploit_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_sprint_slide_exploit_fix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( !v20->current.enabled || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
  {
    SprintLeftRaw = PM_GetSprintLeftRaw(pm->weaponMap, ps, pm->cmd.serverTime);
    MaxSprintTime = BG_GetMaxSprintTime(pm->weaponMap, ps);
    if ( !MaxSprintTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6313, ASSERT_TYPE_ASSERT, "(previousMaxTime != 0)", (const char *)&queryFormat, "previousMaxTime != 0") )
      __debugbreak();
    v25 = (float)SprintLeftRaw;
    v7 = pml;
    v22 = v25 / (float)MaxSprintTime;
  }
  BG_SetCurrentWeaponForPlayer(pm->weaponMap, ps, &r_weapon, pm->m_bgHandler);
  v26 = DVARBOOL_killswitch_sprint_slide_exploit_fix;
  if ( !DVARBOOL_killswitch_sprint_slide_exploit_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_sprint_slide_exploit_fix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( !v26->current.enabled || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
  {
    v27 = (float)BG_GetMaxSprintTime(pm->weaponMap, ps) * v22;
    PM_SetSprintLeft(pm->weaponMap, ps, pm->cmd.serverTime, (int)v27);
  }
  if ( BG_IsMeleeComboWeapon(&r_weapon) )
  {
    MeleeComboSeqCount = BG_GetMeleeComboSeqCount(&r_weapon);
    v29 = BG_irand(0, MeleeComboSeqCount - 1, &v7->holdrand);
    PM_SetMeleeComboSeqIdx(ps, v29);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x38u);
  }
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x18u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x28u);
  anim = WEAP_ALTSWITCHTO_AKIMBO;
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Bu);
  EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(pm->weaponMap, ps, &r_weapon);
  if ( !EquippedWeaponStateNonConst )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6343, ASSERT_TYPE_ASSERT, "(equippedWeapon)", (const char *)&queryFormat, "equippedWeapon") )
      __debugbreak();
    return;
  }
  v31 = pm->weaponMap;
  *(_OWORD *)&v149[1] = v5;
  if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1122, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1123, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  EquippedWeaponStateConst = BG_GetEquippedWeaponStateConst(v31, ps, &r_weapon);
  v33 = 0;
  if ( EquippedWeaponStateConst )
    usedBefore = EquippedWeaponStateConst->usedBefore;
  else
    usedBefore = 0;
  v35 = pm->weaponMap;
  LOBYTE(v33) = !usedBefore;
  v140 = v33;
  if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 936, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 937, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BgWeaponMap::GetWeapon(v35, ps->weapCommon.weaponSpawnHandle)->weaponIdx )
  {
    v36 = pm->weaponMap;
    v140 = 1;
    if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 945, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    v36->SetWeapon(v36, &ps->weapCommon.weaponSpawnHandle, &NULL_WEAPON);
  }
  EquippedWeaponStateNonConst->usedBefore = 1;
  ps->weapCommon.adsZoomLevelChangeTime = 0;
  BG_SetAdsZoomLevelOnStateChange(ps, (float)EquippedWeaponStateNonConst->zoomLevelIndex);
  v37 = BG_UseLeftTriggerAltFireMode(&r_weapon);
  v38 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u);
  v133 = v38;
  v39 = !v37 && !v38 && (!v9 || BG_HasUnderbarrelAmmo(&r_weapon)) && pm->cmd.isAlternate;
  inAltMode = EquippedWeaponStateNonConst->inAltMode;
  v127 = v39;
  v122 = inAltMode;
  sameWeaponAltSwitch = v39 != inAltMode && !memcmp_0(&Buf1, &r_weapon, 0x3Cui64);
  v124 = memcmp_0(&Buf1, &r_weapon, 0x3Cui64) != 0;
  v41 = BG_GetAmmoInClipForWeapon(ps, &Buf1, inAltMode, WEAPON_HAND_DEFAULT) != 0;
  if ( BG_IsSwimWeapon(&r_weapon) )
  {
    sameWeaponAltSwitch = 1;
    if ( v124 )
    {
      EquippedWeaponStateNonConst->inAltMode = 0;
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u);
      PM_Weapon_RequestAltState(pm, 1);
    }
    else
    {
      if ( v122 )
        v39 = 0;
      v127 = v39;
    }
  }
  if ( !BG_HasLadderHand(ps) || v9 || !v124 && (v42 = BG_UsingAlternate(ps), BG_IsLadderWeapon(&Buf1, v42)) && v41 )
  {
    p_weapFlags = &ps->weapCommon.weapFlags;
  }
  else
  {
    p_weapFlags = &ps->weapCommon.weapFlags;
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x32u);
  }
  if ( sameWeaponAltSwitch )
  {
    EquippedWeaponStateNonConst->inAltMode = !EquippedWeaponStateNonConst->inAltMode;
    p_weapFlags->m_flags[0] ^= 0x20000u;
  }
  else if ( !v37 && (EquippedWeaponStateNonConst->inAltMode || v39) )
  {
    EquippedWeaponStateNonConst->inAltMode = 1;
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x11u);
  }
  else
  {
    for ( i = 0; i < 2; ++i )
      PM_Weapon_ResetShotCount(ps, (const PlayerHandIndex)i);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 0x11u);
  }
  if ( (unsigned int)BG_Weapons_IsPrimaryWeaponSwitch(ps, &Buf1, &r_weapon, sameWeaponAltSwitch) )
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x15u);
  else
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 0x15u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 0x16u);
  v45 = pm->ps;
  if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6138, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v46 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v45->weapCommon.weapFlags, ACTIVE, 0x11u);
  IsDualWield = BG_WeaponIsDualWield(&r_weapon);
  LOWORD(v48) = r_weapon.weaponIdx;
  v49 = IsDualWield;
  if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(hand) = bg_lastParsedWeaponIndex;
    LODWORD(checkRaise) = r_weapon.weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", checkRaise, hand) )
      __debugbreak();
  }
  v48 = (unsigned __int16)v48;
  if ( !bg_weaponDefs[(unsigned __int16)v48] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v50 = bg_weaponDefs[v48];
  if ( !v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6145, ASSERT_TYPE_ASSERT, "(newWeapDef)", (const char *)&queryFormat, "newWeapDef") )
    __debugbreak();
  if ( v49 && v50->dualWieldType == DUAL_WIELD_TYPE_ALT_MODE )
  {
    EquippedWeaponStateNonConst->dualWielding = v46;
    if ( BG_AltSharesAmmo(&r_weapon) )
    {
      if ( EquippedWeaponStateNonConst->dualWielding )
      {
        PM_WeaponDistributeClipAmmoBetweenHands(v45, &r_weapon, v46);
        v51 = 1;
        goto LABEL_134;
      }
      PM_WeaponPassClipAmmoToRightHand(v45, &r_weapon, v46);
    }
    v51 = 1;
  }
  else
  {
    v51 = 0;
  }
LABEL_134:
  BG_UpdateLastWeaponHand(pm->weaponMap, v45, &r_weapon);
  v52 = v122;
  v53 = BG_PlayerDualWielding(ps) != 0;
  v132 = v53;
  v54 = BG_UseQuickSwitchAnims(ps, &r_weapon, v122, v53, pm->m_bgHandler, 1);
  v131 = v54;
  v123 = 0;
  v129 = 0;
  if ( sameWeaponAltSwitch )
  {
    v55 = 0;
    if ( v51 )
    {
      v56 = BG_AltRaiseAkimboTime(ps, &r_weapon, v127, v53);
    }
    else
    {
      if ( previousWeaponState == 10 )
      {
        v126 = BG_AltRaiseADSTime(ps, &r_weapon, v127, v53);
        anim = WEAP_ALTSWITCHTO_ADS;
        if ( !v126 )
          v55 = 1;
LABEL_142:
        _XMM0 = LODWORD(ps->weapCommon.aimSpreadScale);
        __asm { vmaxss  xmm7, xmm0, cs:__real@43000000 }
        v59 = v140 || v124;
        v60 = pm->weaponMap;
        if ( !v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4068, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v60, ps);
        if ( BG_IsSwimWeapon(CurrentWeaponForPlayer) )
        {
          if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4078, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
            __debugbreak();
          if ( v59 && PM_Weapon_IsFirstRaiseAllowed() )
          {
            v62 = BG_UsingAlternate(ps);
            v63 = BG_PlayerDualWielding(ps);
            anim = WEAP_FIRST_RAISE;
            RaiseTime = BG_FirstRaiseTime(ps, CurrentWeaponForPlayer, v62, v63 != 0);
LABEL_156:
            v126 = RaiseTime;
            goto LABEL_157;
          }
          if ( 1.0 == ps->weapCommon.fWeaponPosFrac || 1.0 == ps->weapCommon.fAdditivePosFrac )
          {
            RaiseTime = 0;
            anim = WEAP_IDLE;
            goto LABEL_156;
          }
        }
        if ( anim == WEAP_ALTSWITCHTO && v126 )
        {
          v65 = 1;
          goto LABEL_158;
        }
LABEL_157:
        v65 = 0;
LABEL_158:
        IsThrowingAxe = BG_IsThrowingAxe(&r_weapon);
        v67 = BG_Ladder_IsActive(ps) && BG_Ladder_GetDropType(pm, &r_weapon, &Buf1);
        v68 = !IsThrowingAxe;
        v52 = v122;
        if ( v68 && !v65 && !v67 && (v55 || !v51 && previousWeaponState != 10 && !v127 && v122 && !v124) )
          v130 = 1;
        goto LABEL_198;
      }
      v56 = BG_AltRaiseTime(ps, &r_weapon, v127, v53);
      anim = WEAP_ALTSWITCHTO;
    }
    v126 = v56;
    goto LABEL_142;
  }
  _XMM0 = BG_UsesReverseWeaponSpread(&r_weapon, v127);
  __asm
  {
    vpcmpeqd xmm3, xmm0, xmm1
    vblendvps xmm0, xmm7, xmm2, xmm3
  }
  v128 = *(float *)&_XMM0;
  if ( PM_WeaponClipEmpty(pm->weaponMap, ps, WEAPON_HAND_DEFAULT) )
  {
    anim = WEAP_EMPTY_RAISE;
    v72 = BG_EmptyRaiseTime(ps, &r_weapon, v122, v53);
  }
  else if ( v140 && PM_Weapon_IsFirstRaiseAllowed() )
  {
    anim = WEAP_FIRST_RAISE;
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_spValue, 0x21u) && BG_ViewModelAnimExists(ps, WEAP_ANIM_BREACH_RAISE, WEAPON_HAND_DEFAULT, pm->m_bgHandler) )
    {
      v72 = BG_BreachRaiseTime(ps, &r_weapon, v122, v53);
      v129 = 1;
    }
    else
    {
      v72 = BG_FirstRaiseTime(ps, &r_weapon, v122, v53);
      v129 = 1;
    }
  }
  else
  {
    p_otherFlags = &ps->otherFlags;
    if ( previousWeaponState == 8 )
    {
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, GameModeFlagValues::ms_spValue, 0x21u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6537, ASSERT_TYPE_ASSERT, "(!ps->otherFlags.TestFlag( POtherFlagsSP::BREACHING ))", (const char *)&queryFormat, "!ps->otherFlags.TestFlag( POtherFlagsSP::BREACHING )") )
        __debugbreak();
      v123 = 1;
      if ( v54 )
      {
        anim = WEAP_QUICK_RAISE;
        v72 = BG_QuickRaiseTime(ps, &r_weapon, v122, v53);
      }
      else
      {
        anim = WEAP_RAISE;
        v74 = (float)BG_RaiseTime(ps, &r_weapon, v122, v53);
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_perk_weapSwapMultiplier, "perk_weapSwapMultiplier");
        v72 = (int)(float)(*(float *)&Float_Internal_DebugName * v74);
      }
    }
    else
    {
      anim = WEAP_RAISE;
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, GameModeFlagValues::ms_spValue, 0x21u) && BG_ViewModelAnimExists(ps, WEAP_ANIM_BREACH_RAISE, WEAPON_HAND_DEFAULT, pm->m_bgHandler) )
        v72 = BG_BreachRaiseTime(ps, &r_weapon, v122, v53);
      else
        v72 = BG_RaiseTime(ps, &r_weapon, v122, v53);
    }
  }
  *(float *)&_XMM7 = v128;
  v126 = v72;
LABEL_198:
  if ( BG_Ladder_CanAim(&r_weapon, ps, 0) )
  {
    anim = WEAP_QUICK_RAISE;
    v76 = BG_ViewModelBlendSpaceExists(ps, WEAPON_BLEND_SPACE_LADDER_CLIMB_RAISE, pm->m_bgHandler);
    v77 = 29;
    if ( v76 )
      v77 = 44;
    v141 = v77;
    v78 = BG_LadderAimRaiseTime(ps, &r_weapon, v52, 0);
    v143 = BG_LadderClimbRaiseTime(ps, &r_weapon, v52, 0);
  }
  else if ( BG_Ladder_CanClimb(ps) )
  {
    v79 = BG_UsingAlternate(ps);
    if ( BG_IsLadderWeapon(&r_weapon, v79) && (v80 = BG_UsingAlternate(ps), BG_GetAmmoInClipForWeapon(ps, &r_weapon, v80, WEAPON_HAND_DEFAULT)) && BG_ViewModelBlendSpaceExists(ps, WEAPON_BLEND_SPACE_LADDER_WEAPON_CLIMB_RAISE, pm->m_bgHandler) )
    {
      anim = WEAP_RAISE_LADDER_WEAPON_CLIMB;
    }
    else
    {
      v81 = 29;
      if ( BG_ViewModelBlendSpaceExists(ps, WEAPON_BLEND_SPACE_LADDER_CLIMB_RAISE, pm->m_bgHandler) )
        v81 = 44;
      anim = v81;
    }
    v123 = 1;
    v78 = BG_LadderClimbRaiseTime(ps, &r_weapon, v52, 0);
  }
  else
  {
    v78 = v126;
  }
  v82 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_spValue, 0x29u);
  HasPerk = BG_HasPerk(&ps->perks, 0x2Bu);
  v84 = DVARBOOL_perk_quickswap_primary_item_swap_enabled;
  v85 = 0;
  v86 = HasPerk;
  if ( !DVARBOOL_perk_quickswap_primary_item_swap_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_quickswap_primary_item_swap_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v84);
  if ( v84->current.enabled )
  {
    v85 = 0;
    if ( Buf1.weaponIdx )
    {
      if ( r_weapon.weaponIdx )
      {
        inventoryType = BG_WeaponDef(&Buf1, 0)->inventoryType;
        v88 = BG_WeaponDef(&r_weapon, 0)->inventoryType;
        if ( inventoryType == WEAPINVENTORY_ITEM && (v88 == WEAPINVENTORY_PRIMARY || v88 == WEAPINVENTORY_ALTMODE) )
          v85 = 1;
      }
    }
  }
  if ( v123 )
    goto LABEL_235;
  if ( v82 || v86 || forceQuickRaise )
  {
    v89 = &ps->weapCommon.weapFlags;
    if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x15u) && !v85 )
    {
LABEL_236:
      if ( v82 && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(v89, ACTIVE, 0x15u) )
      {
        v92 = DVARFLT_bg_quickWeaponSwitchSpeedScaleSP;
        if ( !DVARFLT_bg_quickWeaponSwitchSpeedScaleSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_quickWeaponSwitchSpeedScaleSP") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v92);
        v93 = (float)v78;
        v78 = (int)(float)(v93 * v92->current.value);
      }
      goto LABEL_242;
    }
    v123 = 1;
    if ( v131 )
    {
      anim = WEAP_QUICK_RAISE;
      v78 = BG_QuickRaiseTime(ps, &r_weapon, v122, v132);
      goto LABEL_236;
    }
    v90 = DCONST_DVARFLT_perk_weapSwapMultiplier;
    if ( !DCONST_DVARFLT_perk_weapSwapMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_weapSwapMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v90);
    v91 = (float)v78;
    v78 = (int)(float)(v91 * v90->current.value);
LABEL_235:
    v89 = &ps->weapCommon.weapFlags;
    goto LABEL_236;
  }
LABEL_242:
  if ( !sameWeaponAltSwitch )
  {
    if ( r_weapon.weaponIdx )
    {
      PM_AddEvent(pm, (const entity_event_t)(v140 + 31));
      if ( Com_GameMode_SupportsFeature((Com_GameMode_Feature)(sameWeaponAltSwitch + 75)) )
      {
        if ( BG_Ladder_CanAim(&r_weapon, ps, 0) || BG_Ladder_CanClimb(ps) )
        {
          v100 = ps;
          checkRaisea = &pml->holdrand;
          v99 = 26;
LABEL_271:
          BG_AnimScriptEvent(pm->m_bgHandler, v100, (PlayerAnimScriptEventType)v99, 0, 0, checkRaisea);
          goto LABEL_272;
        }
        if ( !v133 && !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, (GameModeFlagValues::FlagMode)(sameWeaponAltSwitch + 1), sameWeaponAltSwitch + 2) )
        {
          p_holdrand = &pml->holdrand;
          BG_AnimScriptEvent(pm->m_bgHandler, ps, (PlayerAnimScriptEventType)(sameWeaponAltSwitch + 5), 0, 0, &pml->holdrand);
          if ( v129 )
          {
            v95 = sameWeaponAltSwitch + 70;
          }
          else
          {
            if ( !v123 )
            {
LABEL_254:
              v96 = (float)v78;
              v97 = v96 * 0.001;
              if ( v140 )
                goto LABEL_272;
              v98 = pm->ps;
              if ( !v98 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6191, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
                __debugbreak();
              if ( v97 >= 1.6 )
              {
                BG_AnimScriptEvent(pm->m_bgHandler, v98, ANIM_ET_RAISEWEAPON_TIME_1_6, 0, 0, p_holdrand);
                goto LABEL_272;
              }
              if ( v97 >= 1.4 )
              {
                BG_AnimScriptEvent(pm->m_bgHandler, v98, ANIM_ET_RAISEWEAPON_TIME_1_4, 0, 0, p_holdrand);
                goto LABEL_272;
              }
              if ( v97 >= 1.2 )
              {
                BG_AnimScriptEvent(pm->m_bgHandler, v98, ANIM_ET_RAISEWEAPON_TIME_1_2, 0, 0, p_holdrand);
                goto LABEL_272;
              }
              if ( v97 >= 1.0 )
              {
                BG_AnimScriptEvent(pm->m_bgHandler, v98, ANIM_ET_RAISEWEAPON_TIME_1_0, 0, 0, p_holdrand);
                goto LABEL_272;
              }
              checkRaisea = &pml->holdrand;
              if ( v97 < 0.80000001 )
                v99 = (v97 >= 0.60000002) + 71;
              else
                v99 = 73;
              v100 = v98;
              goto LABEL_271;
            }
            v95 = ANIM_ET_RAISEWEAPONQUICK;
          }
          BG_AnimScriptEvent(pm->m_bgHandler, ps, v95, 0, 0, p_holdrand);
          goto LABEL_254;
        }
      }
    }
  }
LABEL_272:
  IsSkydiving = BG_Skydive_IsSkydiving(ps);
  v102 = WEAPON_HAND_DEFAULT;
  if ( BG_PlayerLastWeaponHand(pm->weaponMap, ps) >= WEAPON_HAND_DEFAULT )
  {
    p_weapHandFlags = &ps->weapState[0].weapHandFlags;
    do
    {
      if ( v134 )
      {
        PM_Weapon_BeginExecution(pm, pml);
      }
      else
      {
        if ( IsSkydiving )
          goto LABEL_282;
        if ( v135 )
        {
          PM_Weapon_BeginMelee(pm, pml);
        }
        else
        {
          if ( !v130 && !forceIdle )
          {
LABEL_282:
            if ( v102 != WEAPON_HAND_LEFT || v141 == WEAP_ANIM_UNSET )
            {
              PM_Weapon_BeginWeaponRaise(pm, pml, anim, v78, *(float *)&_XMM7, sameWeaponAltSwitch, v102, previousWeaponState);
            }
            else
            {
              if ( v143 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6700, ASSERT_TYPE_ASSERT, "(weaponTimeLeftHandOverride != 0xffffffffui32)", (const char *)&queryFormat, "weaponTimeLeftHandOverride != UINT32_MAX") )
                __debugbreak();
              PM_Weapon_BeginWeaponRaise(pm, pml, v141, v143, *(float *)&_XMM7, sameWeaponAltSwitch, WEAPON_HAND_LEFT, previousWeaponState);
            }
            goto LABEL_289;
          }
          PM_Weapon_Idle(pm, v102);
        }
      }
LABEL_289:
      *p_weapHandFlags &= ~2u;
      ++v102;
      p_weapHandFlags += 20;
    }
    while ( v102 <= BG_PlayerLastWeaponHand(pm->weaponMap, ps) );
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    CharacterInfo = BG_GetCharacterInfo(ActiveStatics, ps->clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6718, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    v106 = BG_UsingAlternate(ps);
    PlayerAnimType = BG_WeaponGetPlayerAnimType(&r_weapon, v106);
    BG_SetConditionBit(CharacterInfo, 0, PlayerAnimType);
    BG_SetConditionBit(CharacterInfo, 15, PlayerAnimType);
    WeaponClassForAnimCondition = BG_GetWeaponClassForAnimCondition(ps, &r_weapon, 0);
    BG_SetConditionBit(CharacterInfo, 1, WeaponClassForAnimCondition);
  }
  v109 = BG_UsingAlternate(ps);
  if ( BG_Weapon_FiresOnWeaponSwitch(&r_weapon, v109) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
    PM_EndSprint(ps, pm->cmd.serverTime, pm->cmd.buttons);
  v110 = pm->weaponMap;
  serverTime = pm->cmd.serverTime;
  m_bgHandler = pm->m_bgHandler;
  if ( !v110 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6082, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( Buf1.weaponIdx && BG_PlayerHasWeapon(v110, ps, &Buf1) && BG_IsRemoveWeaponOnEmpty(v110, ps, &Buf1, 0) )
  {
    r_clip2 = *BG_AmmoStoreForWeapon(&result, &Buf1, 0);
    v113 = 0;
    while ( !BG_IsClipCompatible(&ps->weapCommon.ammoInClip[v113].clipIndex, &r_clip2) )
    {
      if ( (unsigned int)++v113 >= 0xF )
        goto LABEL_309;
    }
    if ( ps->weapCommon.ammoInClip[v113].ammoCount[0] + ps->weapCommon.ammoInClip[v113].ammoCount[1] )
      goto LABEL_312;
LABEL_309:
    if ( !BG_GetAmmoNotInClip(ps, &Buf1, 0) && !BG_WeapHasDetonator(&Buf1, 0) )
      BG_TakePlayerWeapon(v110, ps, m_bgHandler, &Buf1, serverTime);
  }
LABEL_312:
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) )
    ps->weapCommon.fAdditivePosFrac = 0.0;
  PM_UpdateMeleeAnimSet(pm, &pml->holdrand, 1, 0);
  v114 = BG_UsingAlternate(ps);
  if ( BG_SupportsAlternateMelee(&r_weapon, v114) )
    PM_UpdateMeleeAnimSet(pm, &pml->holdrand, 1, 1);
  if ( memcmp_0(&Buf1, &r_weapon, 0x3Cui64) )
  {
    ps->weapCommon.adsStartTime = 0;
    *(_QWORD *)&ps->weapCommon.weaponIdleTime = 0i64;
  }
  v115 = *(__m256i *)&Buf1.weaponIdx;
  v116 = *(_DWORD *)&Buf1.weaponCamo;
  v117 = *(_OWORD *)&Buf1.attachmentVariationIndices[5];
  pm->m_flags |= 0x20u;
  *(__m256i *)&pm->prevWeapon.weaponIdx = v115;
  v118 = *(double *)&Buf1.attachmentVariationIndices[21];
  *(_OWORD *)&pm->prevWeapon.attachmentVariationIndices[5] = v117;
  *(double *)&pm->prevWeapon.attachmentVariationIndices[21] = v118;
  *(_DWORD *)&pm->prevWeapon.weaponCamo = v116;
  pm->prevAlternate = v137;
  BG_Execution_MarkExecutionWeaponDirty(ps);
  BG_WeaponOffsets_OnWeaponChange(ps);
}

/*
==============
PM_Weapon_FinishWeaponRaise
==============
*/
void PM_Weapon_FinishWeaponRaise(pmove_t *pm, playerState_s *ps, pml_t *pml, PlayerHandIndex hand)
{
  __int64 v5; 
  WeaponAnimNumber v8; 
  bool v9; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  int *p_weaponState; 
  const Weapon *ViewmodelWeapon; 
  const Weapon *v13; 
  bool v14; 
  bool v15; 
  bool Bool_Internal_DebugName; 
  WeaponAnimNumber v17; 
  unsigned __int64 buttons; 
  const Weapon *v19; 

  v5 = hand;
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x18u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x15u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x16u);
  v8 = WEAP_IDLE;
  v9 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u);
  if ( PM_Weapon_IsSwimmingForward(pm->weaponMap, ps) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6786, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
      __debugbreak();
    v8 = WEAP_SWIM_LOOP;
  }
  p_weapFlags = &ps->weapCommon.weapFlags;
  if ( v9 )
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x32u);
  else
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 0x32u);
  if ( (unsigned int)(ps->weapState[0].weaponState - 63) > 0xC )
  {
    p_weaponState = &ps->weapState[v5].weaponState;
    if ( *p_weaponState == 5 )
    {
      ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
      *p_weaponState = 47;
      v13 = ViewmodelWeapon;
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_LADDER_CLIMB, 0, 1, &pml->holdrand);
      v14 = BG_UsingAlternate(ps);
      if ( !BG_IsLadderWeapon(v13, v14) || (_DWORD)v5 || (v15 = BG_UsingAlternate(ps), !BG_GetAmmoInClipForWeapon(ps, v13, v15, WEAPON_HAND_DEFAULT)) || (Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_ladderEnableWeapon, "ladderEnableWeapon"), v17 = WEAP_LADDER_CLIMB_WEAPON, !Bool_Internal_DebugName) )
        v17 = WEAP_LADDER_CLIMB;
      if ( ps->pm_type < 7 )
        PM_SetNextWeaponAnim(ps, v17, (PlayerHandIndex)v5);
    }
    else
    {
      ps->weapState[0].weaponState = 0;
      ps->weapState[1].weaponState = 0;
      PM_StartWeaponAnimBothHands(ps, v8);
    }
  }
  if ( BG_PWF_UseAlternateAsOffhand(ps) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6839, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
    buttons = pm->cmd.buttons;
    if ( (buttons & 0x3000) != 0 && BG_OffhandIsUnderbarrelWeapon(pm->weaponMap, ps, buttons) && (v19 = BG_GetViewmodelWeapon(pm->weaponMap, ps), BG_HasUnderbarrelWeapon(v19)) )
      PM_Weapon_OffHandInit(pm, pml, 0);
    else
      BG_SetPlayerUsingOffhandUnderbarrelWeapon(ps, 0);
  }
}

/*
==============
PM_Weapon_FireAnimScriptWeaponRaiseEventForTime
==============
*/
void PM_Weapon_FireAnimScriptWeaponRaiseEventForTime(pmove_t *pm, pml_t *pml, const float weaponTimeSec)
{
  playerState_s *ps; 
  int v6; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6191, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6191, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( weaponTimeSec < 1.6 )
  {
    if ( weaponTimeSec < 1.4 )
    {
      if ( weaponTimeSec < 1.2 )
      {
        if ( weaponTimeSec < 1.0 )
        {
          if ( weaponTimeSec < 0.80000001 )
            v6 = (weaponTimeSec >= 0.60000002) + 71;
          else
            v6 = 73;
        }
        else
        {
          v6 = 74;
        }
      }
      else
      {
        v6 = 75;
      }
    }
    else
    {
      v6 = 76;
    }
  }
  else
  {
    v6 = 77;
  }
  BG_AnimScriptEvent(pm->m_bgHandler, ps, (PlayerAnimScriptEventType)v6, 0, 0, &pml->holdrand);
}

/*
==============
PM_Weapon_FireCooldownCommon
==============
*/
void PM_Weapon_FireCooldownCommon(pmove_t *pm, pml_t *pml, const Weapon *currentWeapon, const PlayerHandIndex hand, const int cooldownMs)
{
  __int64 v5; 
  playerState_s *ps; 
  int v9; 
  int *v10; 
  bool v11; 
  unsigned int *holdrand; 

  v5 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8091, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8091, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(holdrand) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8092, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", holdrand, 2) )
      __debugbreak();
  }
  v9 = cooldownMs;
  v10 = &ps->commandTime + 20 * v5;
  v10[335] = cooldownMs;
  if ( cooldownMs > 2047 )
    v9 = 2047;
  v11 = (v10[331] & 0xFFFFFF7F) == 0;
  v10[334] = v9;
  v10[341] = 0;
  if ( !v11 && ps->pm_type < 7 )
    PM_SetNextWeaponAnim(ps, WEAP_IDLE, (PlayerHandIndex)v5);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) && BG_CanSprintFire(ps) )
  {
    v10[339] = 58;
  }
  else if ( !BG_Ladder_CanAim(pm->weaponMap, ps) || (_DWORD)v5 )
  {
    if ( BG_Ladder_CanClimb(ps) )
    {
      v10[339] = 47;
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_LADDER_CLIMB, 0, 1, &pml->holdrand);
    }
    else
    {
      v10[339] = 0;
    }
  }
  else
  {
    v10[339] = 48;
    BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_LADDER_AIM, 0, 1, &pml->holdrand);
  }
}

/*
==============
PM_Weapon_FireWeapon
==============
*/
void PM_Weapon_FireWeapon(pmove_t *pm, int delayedAction, pml_t *pml, PlayerHandIndex hand)
{
  __int128 v4; 
  __int64 v5; 
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 
  bool HasActiveOffhand; 
  bool IsADSFireOnly; 
  playerState_s *v13; 
  BgWeaponMap *v14; 
  int v15; 
  int v16; 
  bool Bool_Internal_DebugName; 
  WeaponDef *v18; 
  int v19; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  playerState_s *v21; 
  const HyperBurstInfo *HyperBurstInfo; 
  WeaponAnimNumber FireWeaponAnim; 
  int v24; 
  weapAnimFiles_t v25; 
  int FireAnimTime; 
  BgWeaponMap *weaponMap; 
  const Weapon *v28; 
  bool v29; 
  bool v30; 
  double v31; 
  playerState_s *v34; 
  WeaponChargeType Type; 
  int weaponTime; 
  const dvar_t *v37; 
  bool v38; 
  int v39; 
  int fireTime; 
  QueuedActionState qas; 
  int fireDelay; 
  Weapon *r_weapon; 
  WeaponDef *weapDef; 
  __int128 v45; 
  bool v46; 
  bool v47; 
  bool v50; 

  v5 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10368, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10368, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  PM_Weapon_UpdateAltFireFlags(pm, (const PlayerHandIndex)v5, CurrentWeaponForPlayer, 1);
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10374, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 374, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  qas = ps->weapState[v5].queuedActionState;
  if ( BG_IsQASWeaponFire(ps, (PlayerHandIndex)v5) || !PM_Weapon_BurstFirePending(pm->weaponMap, ps, (PlayerHandIndex)v5) || !PM_Weapon_HyperBurstFirePending(pm->weaponMap, ps, (const PlayerHandIndex)v5) )
    BG_SetQAS(ps, (PlayerHandIndex)v5, QAS_STATE_NONE);
  v10 = BG_UsingAlternate(ps);
  v50 = BG_PlayerDualWielding(ps) == 1;
  HasActiveOffhand = BG_Offhand_HasActiveOffhand(ps);
  IsADSFireOnly = BG_IsADSFireOnly(CurrentWeaponForPlayer, v10);
  if ( (unsigned int)PM_Weapon_CheckFiringAmmo(ps, pm, pml, (PlayerHandIndex)v5) && (!HasActiveOffhand && ps->weapState[v5].weaponState == 16 || !BG_PlayerWeaponNeedsRechamber(ps, CurrentWeaponForPlayer, (PlayerHandIndex)v5) && (!HasActiveOffhand || !IsADSFireOnly || !BG_Offhand_IsPlayingGrenadeGesture(pm->weaponMap, ps) || BG_Offhand_GrenadeGestureInterruptable(pm->weaponMap, ps, pm->cmd.serverTime))) )
  {
    weapDef = (WeaponDef *)BG_WeaponDef(CurrentWeaponForPlayer, v10);
    if ( PM_Weapon_Charge_WeaponFireCheck(pm, weapDef, (PlayerHandIndex)v5) )
    {
      if ( !PM_GestureOffhandDisablesFiringPrimary(pm) )
      {
        BG_GetFireTime(pm->weaponMap, ps, CurrentWeaponForPlayer, v10, v50, ps->weapState[v5].weaponShotCount, &fireTime, &fireDelay);
        if ( fireTime )
        {
          v13 = pm->ps;
          if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9538, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          if ( (unsigned int)(v13->weapState[v5].weaponState - 15) <= 1 || (v14 = pm->weaponMap, v46 = BG_UsingAlternate(v13), r_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(v14, v13), BG_IsOffhandWeaponType(r_weapon, v46)) || (v15 = BG_PlayerDualWielding(v13), v16 = BG_PreFireTime(v13, r_weapon, v46, v15 == 1), v16 <= 0) )
          {
            Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_jitter_mod_rechamber_protection_enabled, "jitter_mod_rechamber_protection_enabled");
            if ( Bool_Internal_DebugName && !PM_Weapon_ValidateFireRate(pm, (const PlayerHandIndex)v5, CurrentWeaponForPlayer, v10, v50) )
            {
              BG_SetQAS(ps, (PlayerHandIndex)v5, QAS_STATE_FIRE);
              return;
            }
            v47 = ps->weapState[v5].weaponState == 16;
            PM_Weapon_StartFiring(pm, delayedAction, &pml->holdrand, (PlayerHandIndex)v5);
            if ( !ps->weapState[v5].weaponDelay )
            {
              if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_spValue, 0x31u) )
              {
                if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10190, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
                  __debugbreak();
                PM_AddEvent(pm, EV_FIRE_WEAPON_DRY);
              }
              else
              {
                v18 = weapDef;
                if ( weapDef->requireLockonToFire && (ps->weapCommon.weapLockFlags & 2) == 0 )
                {
                  PM_AddEvent(pm, EV_LOCKON_REQUIRED_HINT);
                  return;
                }
                if ( !weapDef->lockonSupported )
                  goto LABEL_117;
                if ( (ps->weapCommon.weapLockFlags & 0x12) == 18 )
                {
                  PM_AddEvent(pm, EV_TARGET_TOO_CLOSE_HINT);
                  return;
                }
                if ( (ps->weapCommon.weapLockFlags & 0x20) != 0 )
                {
                  PM_AddEvent(pm, EV_TARGET_NOT_ENOUGH_CLEARANCE_HINT);
                }
                else
                {
LABEL_117:
                  if ( Bool_Internal_DebugName || PM_Weapon_ValidateFireRate(pm, (const PlayerHandIndex)v5, CurrentWeaponForPlayer, v10, v50) )
                  {
                    PM_Weapon_FinishFiring(pm, (const PlayerHandIndex)v5, CurrentWeaponForPlayer, v10, v50, v47, v18, &pml->holdrand);
                    if ( BG_GetAmmoInClipForWeapon(ps, CurrentWeaponForPlayer, v10, (PlayerHandIndex)v5) != -1 && !BG_IsTurretActive(ps) )
                    {
                      v19 = BG_AmmoUsedPerShot(CurrentWeaponForPlayer, v10);
                      PM_WeaponUseAmmo(ps, CurrentWeaponForPlayer, v10, v19, (PlayerHandIndex)v5);
                    }
                    if ( BG_IsOffhandWeaponType(CurrentWeaponForPlayer, v10) )
                      ps->weapState[v5].weaponTime = fireTime;
                    if ( PM_UseLTriggerForDoubleBarrel(ps, CurrentWeaponForPlayer) )
                    {
                      p_weapFlags = &ps->weapCommon.weapFlags;
                      if ( (pm->cmd.buttons & 0x20000) != 0 )
                        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0xBu);
                      else
                        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 0xBu);
                    }
                    v21 = pm->ps;
                    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9889, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
                      __debugbreak();
                    HyperBurstInfo = BG_GetHyperBurstInfo(CurrentWeaponForPlayer, v10);
                    if ( !HyperBurstInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9894, ASSERT_TYPE_ASSERT, "(hyperBurstInfo)", (const char *)&queryFormat, "hyperBurstInfo") )
                      __debugbreak();
                    if ( !HyperBurstInfo->enabled || v21->weapState[v5].weaponShotCount != 2 )
                    {
                      FireWeaponAnim = PM_Weapon_GetFireWeaponAnim(pm->weaponMap, v21, (PlayerHandIndex)v5);
                      if ( v21->pm_type < 7 )
                        PM_SetNextWeaponAnim(v21, FireWeaponAnim, (PlayerHandIndex)v5);
                    }
                    PM_Weapon_FireWeapon_SendFireWeaponEvent(pm, (PlayerHandIndex)v5);
                    if ( PM_WeaponClipEmpty(pm->weaponMap, ps, (PlayerHandIndex)v5) || BG_PlayerUsingOffhandUnderbarrelShotgun(ps, CurrentWeaponForPlayer) )
                    {
                      if ( BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v10) == PTRDIFF )
                      {
                        PM_Weapon_Charge_TransitionToOut(pm, pml, pm->weaponMap, (PlayerHandIndex)v5);
                      }
                      else
                      {
                        v24 = PM_Weapon_GetFireWeaponAnim(pm->weaponMap, ps, (PlayerHandIndex)v5);
                        v25 = BG_MapWeaponAnimStateToAnimIndex(pm->weaponMap, ps, v24, 0, CurrentWeaponForPlayer, v10, (PlayerHandIndex)v5, pm->m_bgHandler);
                        FireAnimTime = BG_GetFireAnimTime(CurrentWeaponForPlayer, v10, v50, ps, pm->m_bgHandler, v25);
                        if ( FireAnimTime )
                          ps->weapState[v5].weaponTime = FireAnimTime;
                      }
                    }
                    PM_HoldBreathFire(pm->weaponMap, ps);
                    weaponMap = pm->weaponMap;
                    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9908, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
                      __debugbreak();
                    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9909, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
                      __debugbreak();
                    if ( 1.0 != ps->weapCommon.fWeaponPosFrac )
                    {
                      v45 = v4;
                      v28 = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
                      v29 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du);
                      v30 = BG_UsingAlternate(ps);
                      if ( v29 )
                        v31 = BG_SlideSpreadFireAdd(v28, v30);
                      else
                        v31 = BG_HipSpreadFireAdd(v28, v30);
                      ps->weapCommon.aimSpreadScale = (float)(*(float *)&v31 * 255.0) + ps->weapCommon.aimSpreadScale;
                      BG_GameInterface_AddFiringAimSpreadScale(ps);
                      _XMM0 = LODWORD(ps->weapCommon.aimSpreadScale);
                      __asm { vminss  xmm1, xmm0, xmm6 }
                      ps->weapCommon.aimSpreadScale = *(float *)&_XMM1;
                    }
                    if ( PM_Weapon_ShouldSwitchWeaponsAfterFire(pm->weaponMap, ps) )
                      BG_AddPredictableEventToPlayerstate((const entity_event_t)(((_DWORD)v5 == 1) + 16), 0, pm->cmd.serverTime, pm->weaponMap, ps);
                    v34 = pm->ps;
                    if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10320, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
                      __debugbreak();
                    Type = BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v10);
                    weaponTime = v34->weapState[v5].weaponTime;
                    if ( Type && v34->weapState[v5].weaponChargeCooldownTime > weaponTime )
                      weaponTime = v34->weapState[v5].weaponChargeCooldownTime;
                    v37 = DVARBOOL_jitter_mod_rechamber_protection_enabled;
                    if ( !DVARBOOL_jitter_mod_rechamber_protection_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jitter_mod_rechamber_protection_enabled") )
                      __debugbreak();
                    Dvar_CheckFrontendServerThread(v37);
                    if ( v37->current.enabled && BG_PlayerWeaponNeedsRechamber(v34, CurrentWeaponForPlayer, (PlayerHandIndex)v5) && BG_GetAmmoInClipForWeapon(v34, CurrentWeaponForPlayer, v10, (PlayerHandIndex)v5) > 0 )
                    {
                      v38 = BG_UsingAlternate(v34);
                      if ( v50 )
                        v39 = BG_RechamberTimeOneHanded(v34, CurrentWeaponForPlayer, v38, v50);
                      else
                        v39 = BG_RechamberTime(v34, CurrentWeaponForPlayer, v38, 0);
                      weaponTime += v39;
                    }
                    if ( weaponTime > 2047 )
                      weaponTime = 2047;
                    v34->weapState[v5].nextFireTimeCounter = weaponTime;
                  }
                }
              }
            }
          }
          else
          {
            v13->weapState[v5].weaponTime = v16;
            v13->weapState[v5].weaponState = 15;
            BG_SetWeaponDelay(pm->weaponMap, v13, (const PlayerHandIndex)v5, 0, NULL);
            if ( v13->pm_type < 7 )
              PM_SetNextWeaponAnim(v13, WEAP_PRE_ATTACK, (PlayerHandIndex)v5);
            BG_AddPredictableEventToPlayerstate(EV_PRE_FIRE_WEAPON, 0, pm->cmd.serverTime, pm->weaponMap, v13);
            if ( ((qas - 1) & 0xFFFFFFFA) == 0 && qas != QAS_INSPECT )
              BG_SetQAS(v13, (PlayerHandIndex)v5, qas);
          }
        }
      }
    }
  }
}

/*
==============
PM_Weapon_FireWeaponAnimScriptEvent
==============
*/
void PM_Weapon_FireWeaponAnimScriptEvent(const pmove_t *pm, playerState_s *ps, const Weapon *r_weapon, const bool isAlternate, unsigned int *holdrand)
{
  int PlayerAnimType; 
  PlayerAnimScriptEventType GrenadeEvent; 
  bool IsBallWeapon; 
  int v12; 
  int v13; 
  bool v14; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9459, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  PlayerAnimType = BG_WeaponGetPlayerAnimType(r_weapon, isAlternate);
  if ( !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, ACTIVE, 2u) )
  {
    if ( BG_GetWeaponType(r_weapon, isAlternate) == WEAPTYPE_GRENADE )
    {
      GrenadeEvent = BG_AnimationMP_GetGrenadeEvent(1);
      BG_AnimScriptEvent(pm->m_bgHandler, ps, GrenadeEvent, 0, 1, holdrand);
    }
    else if ( PlayerAnimType == 32 && BG_IsThrowingAxe(r_weapon) )
    {
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_POWER_EXIT, 0, 1, holdrand);
    }
    else
    {
      IsBallWeapon = BG_IsBallWeapon(r_weapon);
      v12 = !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x15u) && !BG_Offhand_HasActiveOffhand(ps);
      v13 = 1;
      if ( IsBallWeapon )
      {
        v14 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagStrict(&ps->weapCommon.weapFlags, FOG_SCALE|PRONE|0x20);
        v12 = 1;
        v13 = v14 + 32;
      }
      BG_AnimScriptEvent(pm->m_bgHandler, ps, (PlayerAnimScriptEventType)v13, 0, v12, holdrand);
    }
  }
}

/*
==============
PM_Weapon_FireWeapon_SendFireWeaponEvent
==============
*/
void PM_Weapon_FireWeapon_SendFireWeaponEvent(pmove_t *pm, PlayerHandIndex hand)
{
  __int64 v2; 
  BgWeaponMap *weaponMap; 
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  weapFireType_t WeaponFireType; 
  weapFireType_t v8; 
  bool v9; 
  entity_event_t v10; 
  int v11; 
  const dvar_t *v12; 
  int v13; 
  bool v14; 
  const char *v15; 
  const dvar_t *v16; 
  int WeaponBurstCount; 
  char *fmt; 
  __int64 v19; 
  __int64 v20; 
  int AmmoInClipForWeapon; 
  bool v22; 

  v2 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10205, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  weaponMap = pm->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10208, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10211, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v22 = BG_UsingAlternate(ps);
  AmmoInClipForWeapon = BG_GetAmmoInClipForWeapon(ps, CurrentWeaponForPlayer, v22, (PlayerHandIndex)v2);
  WeaponFireType = BG_GetWeaponFireType(CurrentWeaponForPlayer, v22);
  v8 = WeaponFireType;
  v9 = AmmoInClipForWeapon <= 0 && (unsigned int)(WeaponFireType - 3) > 1;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
  {
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagStrict(&ps->weapCommon.weapFlags, FOG_SCALE|PRONE|0x20) )
    {
      v10 = EV_SV_FIRE_WEAPON_BALL_PASS;
      goto LABEL_25;
    }
    if ( v9 )
    {
      v10 = EV_SV_FIRE_WEAPON_LASTSHOT_LEFT;
      v11 = 69;
    }
    else
    {
      v10 = EV_SV_FIRE_WEAPON_LEFT;
      v11 = 68;
    }
  }
  else if ( v9 )
  {
    v10 = EV_FIRE_WEAPON_LASTSHOT_LEFT;
    v11 = 42;
  }
  else
  {
    v10 = EV_FIRE_WEAPON_LEFT;
    v11 = 40;
  }
  if ( !(_DWORD)v2 )
    v10 = v11;
LABEL_25:
  v12 = DVARBOOL_bg_debugUnintendedFireIssue;
  if ( !DVARBOOL_bg_debugUnintendedFireIssue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugUnintendedFireIssue") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = 0;
  if ( v12->current.enabled )
  {
    v14 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
    v15 = "CLIENT";
    if ( v14 )
      v15 = "SERVER";
    LODWORD(v19) = pm->cmd.serverTime;
    LODWORD(fmt) = ps->clientNum;
    LODWORD(v20) = pm->cmd.commandTime;
    Com_Printf(v14 + 14, "%s: Sent fire event %d for client %d. Server Time: %d Command Time: %d\n", v15, (unsigned int)v10, fmt, v19, v20);
  }
  PM_AddEvent(pm, v10);
  v16 = DVARBOOL_killswitch_burst_fire_lastshot_enabled;
  if ( !DVARBOOL_killswitch_burst_fire_lastshot_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_burst_fire_lastshot_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled && v8 == WEAPON_FIRETYPE_BURST )
  {
    WeaponBurstCount = BG_GetWeaponBurstCount(CurrentWeaponForPlayer, v22);
    if ( ps->weapState[v2].weaponShotCount == 1 && AmmoInClipForWeapon < WeaponBurstCount )
    {
      LOBYTE(v13) = (_DWORD)v2 != 0;
      PM_AddEvent(pm, (const entity_event_t)(v13 + 54));
    }
  }
}

/*
==============
PM_Weapon_GetFireButtonPressedState
==============
*/
void PM_Weapon_GetFireButtonPressedState(const pmove_t *pm, const Weapon *r_weapon, const PlayerHandIndex hand, bool *outWasPressed, bool *outIsPressed)
{
  playerState_s *ps; 
  bool v10; 
  unsigned __int64 WeaponFireButton; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1318, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1318, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outWasPressed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1320, ASSERT_TYPE_ASSERT, "(outWasPressed)", (const char *)&queryFormat, "outWasPressed") )
    __debugbreak();
  if ( !outIsPressed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1321, ASSERT_TYPE_ASSERT, "(outIsPressed)", (const char *)&queryFormat, "outIsPressed") )
    __debugbreak();
  if ( !BG_IsThrowingAxe(r_weapon) || BG_UsingAlternate(ps) )
  {
    WeaponFireButton = PM_GetWeaponFireButton(pm, r_weapon, hand, (pm->oldcmd.buttons & 0x8000000000000i64) != 0);
    *outWasPressed = (WeaponFireButton & pm->oldcmd.buttons) != 0;
    v10 = (WeaponFireButton & pm->cmd.buttons) != 0;
  }
  else
  {
    *outWasPressed = (pm->oldcmd.buttons & 0x20000) != 0;
    v10 = (pm->cmd.buttons & 0x20000) != 0;
  }
  *outIsPressed = v10;
}

/*
==============
PM_Weapon_GetFireWeaponAnim
==============
*/
__int64 PM_Weapon_GetFireWeaponAnim(const BgWeaponMap *weaponMap, const playerState_s *ps, PlayerHandIndex hand)
{
  bool v6; 
  BOOL v7; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9863, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9864, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = BG_UseADSFireAnim(weaponMap, ps);
  v7 = PM_WeaponClipEmpty(weaponMap, ps, hand) != 0;
  if ( v6 )
    return (unsigned int)(v7 + 6);
  else
    return (unsigned int)(v7 + 3);
}

/*
==============
PM_Weapon_GetOffHandWeaponForSlot
==============
*/
const Weapon *PM_Weapon_GetOffHandWeaponForSlot(const BgWeaponMap *weaponMap, const playerState_s *ps, OffhandSlot offHandSlot)
{
  const Weapon *FirstAvailableOffhandBySlot; 
  unsigned __int16 weaponIdx; 
  bool v8; 
  WeaponDef **v9; 
  const char *WeaponName; 
  __int64 v12; 
  char output[1024]; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13473, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13474, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  FirstAvailableOffhandBySlot = BG_GetFirstAvailableOffhandBySlot(weaponMap, ps, offHandSlot);
  weaponIdx = FirstAvailableOffhandBySlot->weaponIdx;
  if ( !FirstAvailableOffhandBySlot->weaponIdx )
    return BG_GetFirstEquippedOffhandBySlot(weaponMap, ps, offHandSlot);
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v12) = weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v12, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  v8 = bg_weaponDefs[weaponIdx] == NULL;
  v9 = &bg_weaponDefs[weaponIdx];
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  if ( (*v9)->offhandClass == OFFHAND_CLASS_NONE )
  {
    WeaponName = BG_GetWeaponName(FirstAvailableOffhandBySlot, output, 0x400u);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13481, ASSERT_TYPE_ASSERT, "(BG_IsNullWeapon( offHand ) || BG_WeaponDef( offHand, false )->offhandClass != OFFHAND_CLASS_NONE)", "%s\n\toffHand = %s\n", "BG_IsNullWeapon( offHand ) || BG_WeaponDef( offHand, false )->offhandClass != OFFHAND_CLASS_NONE", WeaponName) )
      __debugbreak();
  }
  if ( FirstAvailableOffhandBySlot->weaponIdx )
    return FirstAvailableOffhandBySlot;
  else
    return BG_GetFirstEquippedOffhandBySlot(weaponMap, ps, offHandSlot);
}

/*
==============
PM_Weapon_GetQueuedButton
==============
*/
QueuedActionState PM_Weapon_GetQueuedButton(const playerState_s *ps, const PlayerHandIndex hand)
{
  QueuedActionState result; 
  __int64 v5; 
  __int64 v6; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2762, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(v5) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2763, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  if ( !BG_IsQASWeaponFire(ps, hand) )
    return 0;
  result = BG_GetQAS(ps, hand);
  if ( result != QAS_STATE_FIRE && result != QAS_STATE_FIRE_ALT )
  {
    if ( result == QAS_STATE_BALL_PASS )
      return 3;
    LODWORD(v6) = result;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2785, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tUnexpected queued action state %d", "0", v6) )
      __debugbreak();
    return 0;
  }
  return result;
}

/*
==============
PM_Weapon_GetReloadEndState
==============
*/
__int64 PM_Weapon_GetReloadEndState(pmove_t *pm, PlayerHandIndex hand, WeaponAnimNumber *outWeaponAnimNumber, int *outStateTime, int *outDelay)
{
  __int64 v5; 
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 
  int v11; 
  bool isDualWielding; 
  bool v13; 
  int ammoInClip; 
  const BgHandler *m_bgHandler; 
  unsigned int v16; 
  int v17; 
  bool hasFastReloadOverride; 
  WeaponAnimNumber *v20; 

  v20 = outWeaponAnimNumber;
  v5 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6950, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6950, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)(ps->weapState[v5].weaponState - 18) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6952, ASSERT_TYPE_ASSERT, "((ps->weapState[hand].weaponState == WEAPON_RELOAD_START) || (ps->weapState[hand].weaponState == WEAPON_RELOADING))", (const char *)&queryFormat, "(ps->weapState[hand].weaponState == WEAPON_RELOAD_START) || (ps->weapState[hand].weaponState == WEAPON_RELOADING)") )
    __debugbreak();
  *outDelay = 0;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v10 = BG_UsingAlternate(ps);
  v11 = BG_PlayerDualWielding(ps);
  hasFastReloadOverride = 0;
  isDualWielding = v11 == 1;
  v13 = BG_PlayerWeaponNeedsReloadEndRechamber(ps, CurrentWeaponForPlayer, (PlayerHandIndex)v5);
  ammoInClip = ps->weapState[v5].ammoInClipBeforeReload;
  m_bgHandler = pm->m_bgHandler;
  if ( v13 )
  {
    v16 = 21;
    v17 = BG_ReloadEndRechamberTime(ps, m_bgHandler, (const PlayerHandIndex)v5, CurrentWeaponForPlayer, v10, isDualWielding, ammoInClip, outDelay, &hasFastReloadOverride);
  }
  else
  {
    v16 = 20;
    v17 = BG_ReloadEndTime(ps, m_bgHandler, (const PlayerHandIndex)v5, CurrentWeaponForPlayer, v10, isDualWielding, ammoInClip, &hasFastReloadOverride);
  }
  *outStateTime = v17;
  *v20 = v16;
  return v16;
}

/*
==============
PM_Weapon_GetUsedOffHandWeapon
==============
*/
const Weapon *PM_Weapon_GetUsedOffHandWeapon(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14023, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14024, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Eu) )
    return BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  else
    return BG_GetOffHandWeaponForPlayer(weaponMap, ps);
}

/*
==============
PM_Weapon_GetWeaponChangeType
==============
*/
char PM_Weapon_GetWeaponChangeType(pmove_t *pm, pml_t *pml, const bool altToggleRequested, const Weapon **outWeapon, bool *quickWeaponChange, bool *outAltToggle, bool *unsetOffhandUnderbarrelMode)
{
  playerState_s *ps; 
  const Weapon *RequestedWeapon; 
  const Weapon *CurrentWeaponForPlayer; 
  char result; 
  bool v13; 
  int weaponState; 
  const dvar_t *v15; 
  bool v16; 
  const char *v17; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8807, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8807, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outWeapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8809, ASSERT_TYPE_ASSERT, "(outWeapon)", (const char *)&queryFormat, "outWeapon") )
    __debugbreak();
  if ( !outAltToggle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8810, ASSERT_TYPE_ASSERT, "(outAltToggle)", (const char *)&queryFormat, "outAltToggle") )
    __debugbreak();
  if ( !quickWeaponChange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8811, ASSERT_TYPE_ASSERT, "(quickWeaponChange)", (const char *)&queryFormat, "quickWeaponChange") )
    __debugbreak();
  if ( !unsetOffhandUnderbarrelMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8812, ASSERT_TYPE_ASSERT, "(unsetOffhandUnderbarrelMode)", (const char *)&queryFormat, "unsetOffhandUnderbarrelMode") )
    __debugbreak();
  *outWeapon = NULL;
  *outAltToggle = 0;
  *quickWeaponChange = 0;
  *unsetOffhandUnderbarrelMode = 0;
  RequestedWeapon = PM_GetRequestedWeapon(pm);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) || BG_HasLadderHand(ps) )
  {
    if ( PM_Ladder_GetChangeWeapon(pm, outWeapon) )
    {
      *quickWeaponChange = 1;
      return 1;
    }
    v15 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
    {
      v16 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      v17 = "HighPriorityDebug - PM_Weapon_GetWeaponChangeType SERVER returning NONE, LADDER\n";
      if ( !v16 )
        v17 = "HighPriorityDebug - PM_Weapon_GetWeaponChangeType CLIENT returning NONE, LADDER\n";
      Com_Printf(17, v17);
    }
    *outWeapon = CurrentWeaponForPlayer;
    return 0;
  }
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0xAu) || BG_IsVehicleActive(ps) )
  {
    if ( CurrentWeaponForPlayer->weaponIdx )
    {
      *outWeapon = &NULL_WEAPON;
      return 1;
    }
    return 0;
  }
  if ( !memcmp_0(CurrentWeaponForPlayer, RequestedWeapon, 0x3Cui64) && BG_IsSwimWeapon(CurrentWeaponForPlayer) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8868, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
      __debugbreak();
    return 0;
  }
  if ( !memcmp_0(CurrentWeaponForPlayer, RequestedWeapon, 0x3Cui64) && !altToggleRequested || (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x10u) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xFu)) && CurrentWeaponForPlayer->weaponIdx || RequestedWeapon->weaponIdx && !BG_IsWeaponValid(pm->weaponMap, ps, RequestedWeapon) )
  {
    if ( !memcmp_0(CurrentWeaponForPlayer, RequestedWeapon, 0x3Cui64) )
    {
      weaponState = ps->weapState[0].weaponState;
      if ( (unsigned int)(weaponState - 7) <= 5 || weaponState == 50 )
      {
        *outWeapon = RequestedWeapon;
        return 2;
      }
    }
    if ( CurrentWeaponForPlayer->weaponIdx && !BG_PlayerHasWeapon(pm->weaponMap, ps, CurrentWeaponForPlayer) )
    {
      *outWeapon = &NULL_WEAPON;
      return 1;
    }
    if ( ps->weapState[0].weaponState == 34 && BG_PWF_UseAlternateAsOffhand(ps) )
      *unsetOffhandUnderbarrelMode = 1;
    return 0;
  }
  if ( BG_PlayerUsingOffhandUnderbarrelShotgun(ps, CurrentWeaponForPlayer) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8877, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
    *unsetOffhandUnderbarrelMode = 1;
  }
  v13 = (ps->mantleState.flags & 8) != 0;
  if ( BG_IsOffhandWeaponType(RequestedWeapon, 0) || BG_IsOffhandWeaponType(CurrentWeaponForPlayer, 0) )
    v13 = 1;
  *outWeapon = RequestedWeapon;
  *outAltToggle = altToggleRequested;
  result = 1;
  *quickWeaponChange = v13;
  return result;
}

/*
==============
PM_Weapon_HasOffhandWeapon
==============
*/
_BOOL8 PM_Weapon_HasOffhandWeapon(const BgWeaponMap *weaponMap, const playerState_s *ps, unsigned __int64 offhandButton)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11778, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BG_GetOffHandWeaponForPlayer(weaponMap, ps)->weaponIdx || BG_OffhandIsUnderbarrelWeapon(weaponMap, ps, offhandButton) || BG_PWF_UseAlternateAsOffhand(ps);
}

/*
==============
PM_Weapon_HyperBurstFirePending
==============
*/
bool PM_Weapon_HyperBurstFirePending(const BgWeaponMap *weaponMap, const playerState_s *ps, const PlayerHandIndex hand)
{
  __int64 v3; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v7; 
  const HyperBurstInfo *HyperBurstInfo; 
  __int64 v10; 

  v3 = hand;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 417, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 418, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 419, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v10, 2) )
      __debugbreak();
  }
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v7 = BG_UsingAlternate(ps);
  HyperBurstInfo = BG_GetHyperBurstInfo(CurrentWeaponForPlayer, v7);
  if ( !HyperBurstInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 425, ASSERT_TYPE_ASSERT, "(hyperBurstInfo)", (const char *)&queryFormat, "hyperBurstInfo") )
    __debugbreak();
  return HyperBurstInfo->enabled && BG_GetAmmoInClipForWeapon(ps, CurrentWeaponForPlayer, v7, (PlayerHandIndex)v3) > 0 && ps->weapState[v3].weaponShotCount == 1;
}

/*
==============
PM_Weapon_Idle
==============
*/
void PM_Weapon_Idle(pmove_t *pm, PlayerHandIndex hand)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11770, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11770, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BG_Weapon_Idle(ps, pm->m_bgHandler, pm->weaponMap, hand);
}

/*
==============
PM_Weapon_InValidChangeWeaponState
==============
*/
__int64 PM_Weapon_InValidChangeWeaponState(pmove_t *pm, const bool mustExecuteActions)
{
  playerState_s *ps; 
  Weapon *v4; 
  const dvar_t *v5; 
  const dvar_t *v7; 
  int *p_weaponState; 
  bool v9; 
  const char *v10; 
  BgWeaponMap *weaponMap; 
  PlayerHandIndex v12; 
  PlayerHandIndex v13; 
  unsigned int v14; 
  int WeaponHand; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  const BgHandler *m_bgHandler; 
  BgWeaponMap *v19; 
  bool v20; 
  int v21; 
  bool v22; 
  bool v23; 
  bool v24; 
  __int64 v25; 
  signed __int64 v26; 
  int *p_weapHandFlags; 
  signed __int64 v28; 
  bool v29; 
  __int16 v31; 
  Weapon *r_weapon; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8465, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8465, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  r_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v4 = r_weapon;
  v29 = BG_UsingAlternate(ps);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) && ps->pm_type >= 7 )
  {
    v5 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      if ( pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
        Com_Printf(17, "HighPriorityDebug - PM_Weapon_InValidChangeWeaponState SERVER return false, PM_DEAD\n");
      else
        Com_Printf(17, "HighPriorityDebug - PM_Weapon_InValidChangeWeaponState CLIENT return false, PM_DEAD\n");
      return 0i64;
    }
    return 0i64;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
  {
    v7 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
    {
      if ( pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
        Com_Printf(17, "HighPriorityDebug - PM_Weapon_InValidChangeWeaponState SERVER return false, MANTLE\n");
      else
        Com_Printf(17, "HighPriorityDebug - PM_Weapon_InValidChangeWeaponState CLIENT return false, MANTLE\n");
      return 0i64;
    }
    return 0i64;
  }
  if ( !BG_AllowWeaponSwitchWhileHoldingGrenade(v4, v29) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0xAu) )
  {
    if ( BG_Offhand_IsPlayingGrenadeGesture(pm->weaponMap, ps) && !BG_Offhand_GrenadeGestureInterruptable(pm->weaponMap, ps, pm->cmd.serverTime) )
    {
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_highPriorityWeaponDebugPrint, "bg_highPriorityWeaponDebugPrint") )
      {
        if ( pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
          Com_Printf(17, "HighPriorityDebug - PM_Weapon_InValidChangeWeaponState SERVER return false, BG_Offhand_IsPlayingGrenadeGesture\n");
        else
          Com_Printf(17, "HighPriorityDebug - PM_Weapon_InValidChangeWeaponState CLIENT return false, BG_Offhand_IsPlayingGrenadeGesture\n");
        return 0i64;
      }
      return 0i64;
    }
    if ( BG_Offhand_IsPlayingGesture(pm->weaponMap, ps, OHGT_WEAPON) && !BG_Offhand_ScriptWeaponInterruptable(pm->weaponMap, ps, pm->cmd.serverTime) )
    {
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_highPriorityWeaponDebugPrint, "bg_highPriorityWeaponDebugPrint") )
      {
        if ( pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
          Com_Printf(17, "HighPriorityDebug - PM_Weapon_InValidChangeWeaponState SERVER return false, BG_Offhand_IsPlayingGesture\n");
        else
          Com_Printf(17, "HighPriorityDebug - PM_Weapon_InValidChangeWeaponState CLIENT return false, BG_Offhand_IsPlayingGesture\n");
        return 0i64;
      }
      return 0i64;
    }
  }
  p_weaponState = &ps->weapState[0].weaponState;
  if ( (unsigned int)(ps->weapState[0].weaponState - 26) <= 6 )
  {
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_highPriorityWeaponDebugPrint, "bg_highPriorityWeaponDebugPrint") )
    {
      if ( pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
        Com_Printf(17, "HighPriorityDebug - PM_Weapon_InValidChangeWeaponState SERVER return false, WEAPONSTATE_OFFHAND\n");
      else
        Com_Printf(17, "HighPriorityDebug - PM_Weapon_InValidChangeWeaponState CLIENT return false, WEAPONSTATE_OFFHAND\n");
      return 0i64;
    }
    return 0i64;
  }
  if ( !BG_NightVisionInterruptable(pm->weaponMap, ps, pm->cmd.serverTime) )
  {
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_highPriorityWeaponDebugPrint, "bg_highPriorityWeaponDebugPrint") )
    {
      v9 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      v10 = "HighPriorityDebug - PM_Weapon_InValidChangeWeaponState SERVER return false, !BG_NightVisionInterruptable\n";
      if ( !v9 )
        v10 = "HighPriorityDebug - PM_Weapon_InValidChangeWeaponState CLIENT return false, !BG_NightVisionInterruptable\n";
      Com_Printf(17, v10);
    }
    return 0i64;
  }
  weaponMap = pm->weaponMap;
  v12 = WEAPON_HAND_DEFAULT;
  v13 = WEAPON_HAND_DEFAULT;
  v14 = 1;
  v31 = 0;
  WeaponHand = BG_PlayerLastWeaponHand(weaponMap, ps);
  v28 = WeaponHand;
  if ( WeaponHand < 0 )
    return v14;
  v17 = 0i64;
  do
  {
    if ( v17 >= 2 )
    {
      j___report_rangecheckfailure(v16);
      JUMPOUT(0x1410B24F8i64);
    }
    m_bgHandler = pm->m_bgHandler;
    v19 = pm->weaponMap;
    *((_BYTE *)&v31 + v17) = 0;
    v20 = PM_Weapon_IsInInterruptibleState(v19, ps, v13, m_bgHandler);
    v21 = *p_weaponState;
    v22 = v20;
    if ( v20 )
    {
      if ( v21 == 28 && BG_PWF_UseAlternateAsOffhand(ps) && BG_HasUnderbarrelGL(r_weapon) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8672, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
          __debugbreak();
LABEL_67:
        v14 = 0;
        goto LABEL_89;
      }
    }
    else
    {
      v16 = (unsigned int)(v21 - 22);
      if ( (unsigned int)v16 <= 2 )
      {
        v14 = 0;
        goto LABEL_89;
      }
    }
    if ( !BG_HasLadderHand(ps) || v13 != WEAPON_HAND_LEFT )
    {
      if ( BG_WeaponCharge_GetType(r_weapon, v29) == PTRDIFF && *p_weaponState == 53 && PM_WeaponClipEmpty(pm->weaponMap, ps, v13) )
      {
        v14 = 0;
      }
      else
      {
        v16 = (unsigned int)*p_weaponState;
        v23 = (unsigned int)(v16 - 16) <= 1 || (unsigned int)(v16 - 22) <= 2;
        v24 = (unsigned int)(v16 - 22) <= 2;
        if ( !*(p_weaponState - 4) )
          goto LABEL_88;
        v16 = (unsigned int)(v16 - 17);
        if ( (unsigned int)v16 <= 0x3D )
        {
          v25 = 0x20000000200E001Fi64;
          if ( _bittest64(&v25, v16) )
            goto LABEL_88;
        }
        if ( !v23 && !v24 && !*(p_weaponState - 3) )
          goto LABEL_88;
        if ( !v22 )
          goto LABEL_67;
        if ( !v24 && !BG_PlayerUsingOffhandUnderbarrelShotgun(ps, r_weapon) )
          v14 = 0;
        else
LABEL_88:
          *((_BYTE *)&v31 + v17) = 1;
      }
    }
LABEL_89:
    ++v13;
    ++v17;
    p_weaponState += 20;
  }
  while ( (__int64)v17 <= v28 );
  if ( !v14 && mustExecuteActions )
  {
    v26 = 0i64;
    p_weapHandFlags = &ps->weapState[0].weapHandFlags;
    do
    {
      if ( *((_BYTE *)&v31 + v26) )
      {
        *p_weapHandFlags |= 1u;
        PM_Weapon_Idle(pm, v12);
        if ( ps->pm_type < 7 )
          PM_SetNextWeaponAnim(ps, WEAP_FORCE_IDLE, v12);
      }
      ++v12;
      ++v26;
      p_weapHandFlags += 20;
    }
    while ( v26 <= v28 );
  }
  return v14;
}

/*
==============
PM_Weapon_IncrementMovementIdleTime_AdvancedIdle
==============
*/
void PM_Weapon_IncrementMovementIdleTime_AdvancedIdle(const BgWeaponMap *weaponMap, playerState_s *ps, float frametime, const Weapon *weapon, const AdvancedIdleSettings *advancedIdleSettings)
{
  bool v7; 
  float fWeaponPosFrac; 
  float idleSwaySetting1_HipIdleSpeed; 
  float idleSwaySetting2_HipIdleSpeed; 
  const dvar_t *v11; 
  float v12; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18468, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18469, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18470, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( weapon )") )
    __debugbreak();
  if ( !advancedIdleSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18471, ASSERT_TYPE_ASSERT, "(advancedIdleSettings)", (const char *)&queryFormat, "advancedIdleSettings") )
    __debugbreak();
  if ( !advancedIdleSettings->useAdvancedIdleSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18472, ASSERT_TYPE_ASSERT, "(advancedIdleSettings->useAdvancedIdleSettings)", (const char *)&queryFormat, "advancedIdleSettings->useAdvancedIdleSettings") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18448, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18449, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( weapon )") )
    __debugbreak();
  if ( !advancedIdleSettings->useAdvancedIdleSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18451, ASSERT_TYPE_ASSERT, "(advancedIdleSettings->useAdvancedIdleSettings)", (const char *)&queryFormat, "advancedIdleSettings->useAdvancedIdleSettings") )
    __debugbreak();
  v7 = BG_UsingAlternate(ps);
  if ( BG_IsAimDownSight(weapon, v7) )
  {
    fWeaponPosFrac = ps->weapCommon.fWeaponPosFrac;
    idleSwaySetting1_HipIdleSpeed = (float)((float)(advancedIdleSettings->idleSwaySetting1_AdsIdleSpeed - advancedIdleSettings->idleSwaySetting1_HipIdleSpeed) * fWeaponPosFrac) + advancedIdleSettings->idleSwaySetting1_HipIdleSpeed;
    idleSwaySetting2_HipIdleSpeed = (float)((float)(advancedIdleSettings->idleSwaySetting2_AdsIdleSpeed - advancedIdleSettings->idleSwaySetting2_HipIdleSpeed) * fWeaponPosFrac) + advancedIdleSettings->idleSwaySetting2_HipIdleSpeed;
  }
  else
  {
    idleSwaySetting1_HipIdleSpeed = advancedIdleSettings->idleSwaySetting1_HipIdleSpeed;
    idleSwaySetting2_HipIdleSpeed = advancedIdleSettings->idleSwaySetting2_HipIdleSpeed;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_LADDER_AIM) )
  {
    v11 = DCONST_DVARBOOL_player_scope_prototype;
    if ( !DCONST_DVARBOOL_player_scope_prototype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_scope_prototype") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
  }
  v12 = (float)(frametime * ps->holdBreathScale) * -1000.0;
  ps->weapCommon.weaponIdleTime -= (int)(float)(v12 * idleSwaySetting1_HipIdleSpeed);
  ps->weapCommon.weaponIdleTime2 -= (int)(float)(v12 * idleSwaySetting2_HipIdleSpeed);
}

/*
==============
PM_Weapon_IsAltToggleRequested
==============
*/
bool PM_Weapon_IsAltToggleRequested(pmove_t *pm)
{
  playerState_s *ps; 
  const Weapon *RequestedWeapon; 
  const Weapon *CurrentWeaponForPlayer; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8917, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8917, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  RequestedWeapon = PM_GetRequestedWeapon(pm);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  if ( !BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) && pm->cmd.isAlternate != GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u) && !memcmp_0(RequestedWeapon, CurrentWeaponForPlayer, 0x3Cui64) )
  {
    if ( !BG_OffhandIsUnderbarrelWeapon(pm->weaponMap, ps, 0x3000ui64) )
      return 1;
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8937, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
    if ( !BG_HasUnderbarrelShotgun(CurrentWeaponForPlayer) )
      return (unsigned int)(ps->weapState[0].weaponState - 18) <= 3;
  }
  return 0;
}

/*
==============
PM_Weapon_IsBulletClipEmpty
==============
*/
bool PM_Weapon_IsBulletClipEmpty(const playerState_s *ps, const Weapon *weapon, bool isAlternate, PlayerHandIndex hand, int *outAmmoInClip)
{
  int AmmoInClipForClipType; 
  AmmoStore result; 
  AmmoStore r_clipIndex; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4345, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outAmmoInClip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4346, ASSERT_TYPE_ASSERT, "(outAmmoInClip)", (const char *)&queryFormat, "outAmmoInClip") )
    __debugbreak();
  r_clipIndex = *BG_AmmoStoreForWeapon(&result, weapon, isAlternate);
  AmmoInClipForClipType = BG_GetAmmoInClipForClipType(ps, &r_clipIndex, hand);
  *outAmmoInClip = AmmoInClipForClipType;
  return !AmmoInClipForClipType && BG_GetWeaponType(weapon, isAlternate) == WEAPTYPE_BULLET;
}

/*
==============
PM_Weapon_IsFirstRaiseAllowed
==============
*/
bool PM_Weapon_IsFirstRaiseAllowed()
{
  const dvar_t *v1; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RELOADING|0x100) )
    return 1;
  v1 = DVARBOOL_bg_disableWeaponFirstRaiseAnims;
  if ( !DVARBOOL_bg_disableWeaponFirstRaiseAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_disableWeaponFirstRaiseAnims") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return !v1->current.enabled;
}

/*
==============
PM_Weapon_IsHoldingOffHand
==============
*/
char PM_Weapon_IsHoldingOffHand(const pmove_t *pm)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v4; 
  const WeaponDef *v5; 
  bool v6; 
  unsigned __int64 buttons; 
  unsigned __int64 WeaponFireButton; 
  bool v9; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12688, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12688, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v4 = CurrentWeaponForPlayer;
  if ( !CurrentWeaponForPlayer->weaponIdx )
    return 0;
  v5 = BG_WeaponDef(CurrentWeaponForPlayer, 0);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12699, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( (v6 = BG_UsingAlternate(ps), BG_IsOffhandWeaponType(v4, v6)) && ((buttons = pm->cmd.buttons, WeaponFireButton = PM_GetWeaponFireButton(pm, v4, WEAPON_HAND_DEFAULT, (buttons & 0x8000000000000i64) != 0), v9 = BG_Weapon_OffhandDisablesHold(v4, 0) != 0, (buttons & WeaponFireButton) != 0) || v9) && !v5->holdButtonToThrow )
    return 1;
  else
    return 0;
}

/*
==============
PM_Weapon_IsInInterruptibleState
==============
*/
bool PM_Weapon_IsInInterruptibleState(const BgWeaponMap *weaponMap, const playerState_s *ps, PlayerHandIndex hand, const BgHandler *pmoveHandler)
{
  __int64 v6; 
  bool bIsAlternate; 
  bool v10; 
  const Weapon *CurrentWeaponForPlayer; 
  int weaponTime; 
  int weapAnim; 
  unsigned __int64 weaponState; 
  int v15; 
  const XAnimParts *AnimParts; 
  const Weapon *ViewmodelWeapon; 
  __int64 v20; 
  __int64 v21; 
  char v22; 
  int SprintOutTime; 
  int v24; 
  __int128 v25; 
  __int128 v26; 
  int v27; 
  __int128 v28; 
  unsigned __int16 v29; 
  __int128 v30; 
  unsigned __int16 v32; 
  ReloadType ReloadType; 
  int started; 
  __int128 v35; 
  const Weapon *UsedOffHandWeapon; 
  const Weapon *v37; 
  unsigned __int16 v38; 
  __int128 v39; 
  const Weapon *v40; 
  unsigned __int16 v41; 
  __int128 v42; 
  int v43; 
  int v44; 
  bool v45; 
  int WeaponFieldTime; 
  unsigned __int16 v47; 
  __int128 v48; 
  __int128 v50; 
  int v51; 
  __int64 fmt; 
  int handIndex; 
  int v54; 
  weapAnimFiles_t anim; 
  int v56; 
  int outMeleeDamageTime; 
  int outToFireInterruptTime; 
  int outToMeleeInterruptTime[2]; 
  BgWeaponMap *weaponMapa; 
  int outMeleeTime; 
  PlayerHandIndex handa; 

  handa = hand;
  weaponMapa = (BgWeaponMap *)weaponMap;
  v6 = hand;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4589, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4590, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  bIsAlternate = BG_UsingAlternate(ps);
  v10 = BG_PlayerDualWielding(ps) == 1;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  *(_QWORD *)outToMeleeInterruptTime = 80 * v6;
  weaponTime = ps->weapState[v6].weaponTime;
  weapAnim = ps->weapState[v6].weapAnim;
  weaponState = ps->weapState[v6].weaponState;
  v15 = weapAnim & 0xFFFFFF7F;
  v56 = weaponTime;
  v54 = 0;
  anim = BG_MapWeaponAnimStateToAnimIndex(weaponMapa, ps, v15, 0, CurrentWeaponForPlayer, bIsAlternate, handa, pmoveHandler);
  AnimParts = BG_WeaponGetAnimParts(ps, handa, bIsAlternate, anim, pmoveHandler);
  if ( AnimParts )
  {
    *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(AnimParts, scr_const.interruptible);
    __asm { vmaxss  xmm7, xmm0, xmm6 }
  }
  else
  {
    LODWORD(_XMM7) = 0;
  }
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMapa, ps);
  if ( BG_IsSwimWeapon(ViewmodelWeapon) && (unsigned int)(weaponState - 1) <= 4 || (_DWORD)weaponState == 51 )
    return 1;
  if ( (((_DWORD)weaponState - 40) & 0xFFFFFFFD) == 0 )
    return 0;
  if ( (((_DWORD)weaponState - 41) & 0xFFFFFFFD) != 0 )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) && !(_DWORD)weaponState )
    {
      if ( !v56 )
        return 1;
      goto LABEL_37;
    }
    if ( (_DWORD)weaponState == 78 )
      return 1;
    if ( (unsigned int)weaponState <= 0x31 )
    {
      v20 = 0x2000000005060i64;
      if ( _bittest64(&v20, weaponState) )
        return 0;
    }
    if ( (unsigned int)weaponState > 0x3D || (v21 = 0x20000001083C001Ei64, !_bittest64(&v21, weaponState)) )
    {
      if ( (_DWORD)weaponState != 73 )
      {
        if ( (_DWORD)weaponState == 36 )
        {
          if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_movementAnimProto, "movementAnimProto") )
            goto LABEL_28;
        }
        else if ( (unsigned int)(weaponState - 22) <= 2 || (unsigned int)(weaponState - 76) <= 1 )
        {
          goto LABEL_28;
        }
LABEL_37:
        v22 = 0;
        goto LABEL_29;
      }
    }
LABEL_28:
    v22 = 1;
LABEL_29:
    if ( *(float *)&_XMM7 <= 0.0 && !v22 )
      return 0;
    if ( (_DWORD)weaponState == 16 && PM_WeaponClipEmpty(weaponMapa, ps, handa) )
      return (float)v56 <= (float)((float)BG_GetFireAnimTime(CurrentWeaponForPlayer, bIsAlternate, v10, ps, pmoveHandler, anim) * (float)(1.0 - *(float *)&_XMM7));
    outMeleeTime = 0;
    SprintOutTime = 0;
    if ( (unsigned int)(weaponState - 1) <= 4 )
    {
      if ( (((_DWORD)weaponState - 1) & 0xFFFFFFFB) != 0 )
      {
        switch ( (_DWORD)weaponState )
        {
          case 2:
            outMeleeTime = BG_AltRaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
            WeaponFieldTime = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10, 334i64);
            break;
          case 3:
            outMeleeTime = BG_AltRaiseADSTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
            WeaponFieldTime = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10, 336i64);
            break;
          case 4:
            outMeleeTime = BG_AltRaiseAkimboTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
            WeaponFieldTime = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10, 338i64);
            break;
          default:
            return 0;
        }
      }
      else
      {
        switch ( v15 )
        {
          case 14:
            outMeleeTime = BG_RaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
            v47 = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10, 320i64);
            fmt = 318i64;
            break;
          case 15:
            outMeleeTime = BG_FirstRaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
            v47 = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10, 324i64);
            fmt = 322i64;
            break;
          case 44:
            BG_LadderClimbRaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
            return 0;
          case 29:
            outMeleeTime = BG_QuickRaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
            v47 = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10, 328i64);
            fmt = 326i64;
            break;
          case 31:
            outMeleeTime = BG_EmptyRaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
            v47 = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10, 332i64);
            fmt = 330i64;
            break;
          default:
            return 0;
        }
        WeaponFieldTime = v47;
        v54 = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10, fmt);
      }
      if ( !WeaponFieldTime )
        return 0;
      SprintOutTime = outMeleeTime;
      if ( !outMeleeTime )
        return 0;
      v48 = 0i64;
      *(float *)&v48 = (float)WeaponFieldTime;
      v25 = v48;
      goto LABEL_133;
    }
    switch ( (_DWORD)weaponState )
    {
      case 9:
        SprintOutTime = BG_AltDropTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
        goto LABEL_134;
      case 0x4C:
        outMeleeTime = BG_ScopeToggleOnTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
        v24 = BG_ScopeToggleOnInterruptTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
        SprintOutTime = outMeleeTime;
        v26 = 0i64;
        *(float *)&v26 = (float)v24;
        v25 = v26;
LABEL_133:
        v50 = v25;
        *(float *)&v50 = *(float *)&v25 / (float)SprintOutTime;
        _XMM1 = v50;
        __asm { vminss  xmm7, xmm1, cs:__real@3f800000 }
        goto LABEL_134;
      case 0x4D:
        outMeleeTime = BG_ScopeToggleOffTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
        v27 = BG_ScopeToggleOffInterruptTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
        SprintOutTime = outMeleeTime;
        v28 = 0i64;
        *(float *)&v28 = (float)v27;
        v25 = v28;
        goto LABEL_133;
      case 0x49:
        if ( v15 == 83 )
        {
          outMeleeTime = BG_RaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
          v29 = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10, 320i64);
          v30 = 0i64;
          *(float *)&v30 = (float)v29 / (float)outMeleeTime;
          _XMM1 = v30;
          __asm { vminss  xmm7, xmm1, cs:__real@3f800000 }
          v32 = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10, 318i64);
          SprintOutTime = outMeleeTime;
          v54 = v32;
        }
        goto LABEL_134;
      case 0x12:
        ReloadType = BG_GetReloadType(CurrentWeaponForPlayer, bIsAlternate);
        LOBYTE(weaponMapa) = 0;
        switch ( ReloadType )
        {
          case RELOAD_TYPE_MULTIPLE_PERCENTAGE:
            if ( (unsigned int)(v15 - 16) > 1 )
              return 0;
            outMeleeTime = BG_ReloadMultipleTimePercentageBased(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, (bool *)&weaponMapa);
            started = BG_MultipleReloadInterruptTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v10, anim);
            break;
          case RELOAD_TYPE_MULTIPLE_BULLET:
            if ( (unsigned int)(v15 - 16) > 1 )
              return 0;
            outMeleeTime = BG_ReloadMultipleTimeBulletBased(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, (bool *)&weaponMapa);
            started = BG_MultipleReloadInterruptTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v10, anim);
            break;
          case RELOAD_TYPE_SEGMENTED:
            return 1;
          default:
            if ( ReloadType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4795, ASSERT_TYPE_ASSERT, "(reloadType == RELOAD_TYPE_NORMAL)", (const char *)&queryFormat, "reloadType == RELOAD_TYPE_NORMAL") )
              __debugbreak();
            if ( v15 == 17 )
            {
              outMeleeTime = BG_ReloadEmptyTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v10, (bool *)&weaponMapa);
              started = BG_ReloadEmptyInterruptTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v10);
            }
            else
            {
              outMeleeTime = BG_ReloadTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v10, *(unsigned int *)((char *)&ps->weapState[0].ammoInClipBeforeReload + *(_QWORD *)outToMeleeInterruptTime), (bool *)&weaponMapa);
              started = BG_ReloadInterruptTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v10);
            }
            break;
        }
        goto LABEL_62;
      case 0x13:
        LOBYTE(weaponMapa) = 0;
        outMeleeTime = BG_ReloadStartTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v10, *(unsigned int *)((char *)&ps->weapState[0].ammoInClipBeforeReload + *(_QWORD *)outToMeleeInterruptTime), (bool *)&weaponMapa);
        started = BG_ReloadStartInterruptTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v10);
        goto LABEL_62;
      case 0x14:
        LOBYTE(weaponMapa) = 0;
        outMeleeTime = BG_ReloadEndTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v10, *(unsigned int *)((char *)&ps->weapState[0].ammoInClipBeforeReload + *(_QWORD *)outToMeleeInterruptTime), (bool *)&weaponMapa);
        started = BG_ReloadEndInterruptTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v10);
        goto LABEL_62;
      case 0x15:
        LOBYTE(weaponMapa) = 0;
        handIndex = *(unsigned int *)((char *)&ps->weapState[0].ammoInClipBeforeReload + *(_QWORD *)outToMeleeInterruptTime);
        anim = WEAP_ANIM_ROOT;
        outMeleeTime = BG_ReloadEndRechamberTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v10, handIndex, (int *)&anim, (bool *)&weaponMapa);
        started = BG_ReloadEndRechamberInterruptTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v10);
        goto LABEL_62;
      case 0x20:
        if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && v15 == 25 )
        {
          if ( bIsAlternate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4862, ASSERT_TYPE_ASSERT, "(!isAlternate)", (const char *)&queryFormat, "!isAlternate") )
            __debugbreak();
          SprintOutTime = BG_AltRaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
          goto LABEL_134;
        }
        outMeleeTime = BG_QuickRaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
        *(float *)&_XMM7 = (float)BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10, 328i64) * 0.001;
        goto LABEL_79;
    }
    if ( (unsigned int)(weaponState - 22) <= 1 )
    {
      if ( (_DWORD)weaponState != 24 )
      {
        if ( (unsigned int)(weaponState - 22) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4881, ASSERT_TYPE_ASSERT, "((weaponState == WEAPON_MELEE) || (weaponState == WEAPON_MELEE_FATAL))", (const char *)&queryFormat, "(weaponState == WEAPON_MELEE) || (weaponState == WEAPON_MELEE_FATAL)") )
          __debugbreak();
        v45 = (_DWORD)weaponState == 23;
        BG_GetMeleeTime(weaponMapa, ps, bIsAlternate, v10, v45, &outMeleeTime, &outMeleeDamageTime, (int *)&anim);
        BG_GetMeleeInterruptTime(weaponMapa, ps, bIsAlternate, v10, v45, outToMeleeInterruptTime, (int *)&handa, &outToFireInterruptTime);
        SprintOutTime = outMeleeTime;
        if ( handa > WEAPON_HAND_DEFAULT && outMeleeTime > 0 )
        {
          *(float *)&_XMM7 = (float)handa / (float)outMeleeTime;
          goto LABEL_134;
        }
LABEL_105:
        *(float *)&_XMM7 = FLOAT_1_0;
LABEL_135:
        if ( SprintOutTime > 0 )
        {
          v51 = 0;
          if ( SprintOutTime - v56 > 0 )
            v51 = SprintOutTime - v56;
          if ( v51 >= (int)(float)((float)SprintOutTime * *(float *)&_XMM7) && (v54 <= 0 || v54 > v51) )
            return 1;
        }
        return 0;
      }
    }
    else if ( (_DWORD)weaponState != 24 )
    {
      switch ( (_DWORD)weaponState )
      {
        case 0x24:
        case 0x39:
          outMeleeTime = GetSprintOutTime(weaponMapa, ps, CurrentWeaponForPlayer);
          started = GetSprintOutInterruptTime(weaponMapa, ps, CurrentWeaponForPlayer);
LABEL_62:
          if ( !started )
            return 0;
          SprintOutTime = outMeleeTime;
          if ( !outMeleeTime )
            return 0;
          v35 = 0i64;
          *(float *)&v35 = (float)started;
          v25 = v35;
          goto LABEL_133;
        case 0x1C:
          UsedOffHandWeapon = PM_Weapon_GetUsedOffHandWeapon(weaponMapa, ps);
          SprintOutTime = BG_GetCookingGrenadeFuseMax(UsedOffHandWeapon, bIsAlternate, ps) - ps->grenadeTimeLeft;
          goto LABEL_134;
        case 0x1A:
          if ( ((v15 - 33) & 0xFFFFFFFD) == 0 )
            SprintOutTime = GetSprintOutTime(weaponMapa, ps, CurrentWeaponForPlayer);
LABEL_134:
          if ( *(float *)&_XMM7 <= 0.0 )
            return 0;
          goto LABEL_135;
        case 0x1B:
          if ( v15 != 25 )
          {
            if ( v15 != 39 )
              goto LABEL_134;
            v40 = PM_Weapon_GetUsedOffHandWeapon(weaponMapa, ps);
            outMeleeTime = BG_GetWeaponFieldTime(ps, v40, bIsAlternate, v10, 16i64);
            v41 = BG_GetWeaponFieldTime(ps, v40, bIsAlternate, v10, 342i64);
            SprintOutTime = outMeleeTime;
            v42 = 0i64;
            *(float *)&v42 = (float)v41;
            v25 = v42;
            goto LABEL_133;
          }
          if ( BG_PWF_UseAlternateAsOffhand(ps) )
          {
            SprintOutTime = BG_AltRaiseTime(ps, CurrentWeaponForPlayer, 1, v10);
            goto LABEL_134;
          }
          if ( BG_ThrowingBackGrenade(ps) )
          {
            v37 = PM_Weapon_GetUsedOffHandWeapon(weaponMapa, ps);
            outMeleeTime = BG_AltRaiseTime(ps, v37, bIsAlternate, v10);
            v38 = BG_GetWeaponFieldTime(ps, v37, bIsAlternate, v10, 334i64);
            SprintOutTime = outMeleeTime;
            v39 = 0i64;
            *(float *)&v39 = (float)v38;
            v25 = v39;
            goto LABEL_133;
          }
          break;
        case 0x10:
          if ( BG_PlayerUsingOffhandUnderbarrelShotgun(ps, CurrentWeaponForPlayer) )
          {
            SprintOutTime = BG_GetFireAnimTime(CurrentWeaponForPlayer, 1, v10, ps, pmoveHandler, anim);
            goto LABEL_134;
          }
          break;
        default:
          goto LABEL_134;
      }
LABEL_79:
      SprintOutTime = outMeleeTime;
      goto LABEL_134;
    }
    v43 = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10, 328i64);
    v44 = BG_QuickRaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v10);
    SprintOutTime = v44;
    if ( v43 && v44 > 0 )
    {
      *(float *)&_XMM7 = (float)v43 / (float)v44;
      goto LABEL_134;
    }
    goto LABEL_105;
  }
  return 1;
}

/*
==============
PM_Weapon_IsMeleeInterruptible
==============
*/
bool PM_Weapon_IsMeleeInterruptible(BgWeaponMap *weaponMap, playerState_s *ps, const BgHandler *handler, const int interruptTime)
{
  int weaponState; 
  bool result; 
  bool v10; 
  int v11; 
  float v12; 
  int outMeleeViewLockTime; 
  int outMeleeDamageTime[3]; 
  int outMeleeTime; 

  weaponState = ps->weapState[0].weaponState;
  if ( (unsigned int)(weaponState - 22) > 1 )
  {
    if ( weaponState == 24 )
      return PM_Weapon_IsInInterruptibleState(weaponMap, ps, WEAPON_HAND_DEFAULT, handler);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11252, ASSERT_TYPE_ASSERT, "(( (weaponState == WEAPON_MELEE) || (weaponState == WEAPON_MELEE_FATAL) || (weaponState == WEAPON_MELEE_END) ))", (const char *)&queryFormat, "WEAPONSTATE_MELEE( weaponState )") )
      __debugbreak();
  }
  if ( weaponState == 24 )
    return PM_Weapon_IsInInterruptibleState(weaponMap, ps, WEAPON_HAND_DEFAULT, handler);
  if ( (unsigned int)(weaponState - 22) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11257, ASSERT_TYPE_ASSERT, "((weaponState == WEAPON_MELEE) || (weaponState == WEAPON_MELEE_FATAL))", (const char *)&queryFormat, "(weaponState == WEAPON_MELEE) || (weaponState == WEAPON_MELEE_FATAL)") )
    __debugbreak();
  result = interruptTime > 0 && (v10 = BG_UsingAlternate(ps), v11 = BG_PlayerDualWielding(ps), BG_GetMeleeTime(weaponMap, ps, v10, v11 == 1, weaponState == 23, &outMeleeTime, outMeleeDamageTime, &outMeleeViewLockTime), outMeleeTime > 0) && (v12 = (float)interruptTime / (float)outMeleeTime, v12 > 0.0) && (float)((float)(1.0 - v12) * (float)outMeleeTime) >= (float)ps->weapState[0].weaponTime;
  return result;
}

/*
==============
PM_Weapon_IsMeleeInterruptibleForFire
==============
*/
bool PM_Weapon_IsMeleeInterruptibleForFire(BgWeaponMap *weaponMap, playerState_s *ps, const BgHandler *handler)
{
  int weaponState; 
  bool v7; 
  int v8; 
  int outToMeleeInterruptTime[10]; 
  int interruptTime; 
  int outInterruptTime; 

  weaponState = ps->weapState[0].weaponState;
  v7 = BG_UsingAlternate(ps);
  v8 = BG_PlayerDualWielding(ps);
  BG_GetMeleeInterruptTime(weaponMap, ps, v7, v8 == 1, weaponState == 23, outToMeleeInterruptTime, &outInterruptTime, &interruptTime);
  return PM_Weapon_IsMeleeInterruptible(weaponMap, ps, handler, interruptTime);
}

/*
==============
PM_Weapon_IsStateValidForReload
==============
*/
bool PM_Weapon_IsStateValidForReload(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7470, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7470, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7471, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  return !BG_Skydive_IsSkydiving(ps) && (unsigned int)(ps->weapState[0].weaponState - 26) > 6 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) && (unsigned int)(ps->weapState[0].weaponState - 40) > 3 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && !BG_IsPlayerInExecution(ps) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Au) && PM_Demeanor_CanReload(ps) && (!BG_Offhand_IsPlayingGrenadeGesture(pm->weaponMap, ps) || BG_Offhand_GrenadeGestureInterruptable(pm->weaponMap, ps, pm->cmd.serverTime)) && (!BG_Offhand_IsPlayingGesture(pm->weaponMap, ps, OHGT_WEAPON) || BG_Offhand_ScriptWeaponInterruptable(pm->weaponMap, ps, pm->cmd.serverTime)) && !ps->weapCommon.offhandGestureFireTime && !BG_HasLadderHand(ps) && BG_NightVisionInterruptable(pm->weaponMap, ps, ps->serverTime) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Cu);
}

/*
==============
PM_Weapon_IsSwimmingForward
==============
*/
_BOOL8 PM_Weapon_IsSwimmingForward(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const Weapon *ViewmodelWeapon; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4207, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4208, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  return BG_IsSwimWeapon(ViewmodelWeapon) && !BG_UsingAlternate(ps) && ps->weapCommon.swimForwardState >= SWIMFORWARD_FORWARD;
}

/*
==============
PM_Weapon_Mantle
==============
*/
void PM_Weapon_Mantle(pmove_t *pm, int weaponTime)
{
  playerState_s *ps; 
  __int64 WeaponHand; 
  bool IsWeaponDown; 
  PlayerHandIndex v6; 
  unsigned __int8 v7; 
  bool v8; 
  __int64 v9; 
  int *p_weaponTime; 
  int v11; 
  int v12; 
  unsigned int v13; 
  __int64 time; 
  __int64 v15; 
  Weapon *currentWeapon; 

  if ( !pm )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16588, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16590, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
  }
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16590, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  currentWeapon = (Weapon *)BG_GetViewmodelWeapon(pm->weaponMap, ps);
  WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
  IsWeaponDown = Mantle_IsWeaponDown(ps);
  v6 = WEAPON_HAND_DEFAULT;
  v7 = ps->mantleState.flags & 1;
  v8 = IsWeaponDown;
  if ( (int)WeaponHand >= 0 )
  {
    v9 = WeaponHand + 1;
    p_weaponTime = &ps->weapState[0].weaponTime;
    do
    {
      if ( (unsigned int)v6 >= NUM_WEAPON_HANDS )
      {
        LODWORD(v15) = 2;
        LODWORD(time) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16601, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", time, v15) )
          __debugbreak();
      }
      if ( (ps->mantleState.flags & 0x800) != 0 )
      {
        v11 = 44;
      }
      else
      {
        v12 = 2 * v7;
        if ( v8 )
        {
          PM_Weapon_ResetShotCount(ps, v6);
          v11 = v12 + 40;
        }
        else
        {
          v11 = v12 + 41;
        }
      }
      p_weaponTime[4] = v11;
      *p_weaponTime = weaponTime;
      BG_SetWeaponDelay(pm->weaponMap, ps, v6, 0, NULL);
      PM_Weapon_PlayMantleGestures(pm->weaponMap, ps, pm->m_bgHandler, v6++, currentWeapon, pm->cmd.serverTime);
      p_weaponTime += 20;
      --v9;
    }
    while ( v9 );
  }
  v13 = ps->weapState[0].weapAnim & 0xFFFFFF7F;
  if ( v13 == 28 || (ps->mantleState.flags & 0x800) == 0 )
  {
    if ( v13 > 1 )
      PM_StartWeaponAnimBothHands(ps, WEAP_FORCE_IDLE);
  }
  else if ( ps->pm_type < 7 )
  {
    PM_SetNextWeaponAnim(ps, WEAP_QUICK_DROP, WEAPON_HAND_DEFAULT);
    if ( BG_PlayerDualWielding(ps) || BG_HasLadderHand(ps) )
      PM_SetNextWeaponAnim(ps, WEAP_QUICK_DROP, WEAPON_HAND_LEFT);
    else
      *(_QWORD *)&ps->weapState[1].prevWeapAnim = (unsigned int)ps->weapState[1].weapAnim;
  }
}

/*
==============
PM_Weapon_MeleeEnd
==============
*/
__int64 PM_Weapon_MeleeEnd(pmove_t *pm, pml_t *pml, const bool delayedAction, PlayerHandIndex hand, const bool isInInterruptibleState, const bool isQuickMelee, const bool applyPendingDamage)
{
  __int64 v7; 
  playerState_s *ps; 
  int weaponTime; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v15; 
  bool IsMeleeComboWeapon; 
  bool v17; 
  bool v18; 
  bool v19; 
  int v20; 
  WeaponSFXPackage *SfxPackage; 
  WeaponMaterialType sfxMaterialType; 
  int altMeleeVariation; 
  unsigned int v24; 
  MeleeAnimType attackerAnim; 
  unsigned __int8 outAnimSets; 
  bool outIsRandomized; 

  v7 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10672, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10672, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponTime = ps->weapState[v7].weaponTime;
  if ( !delayedAction || weaponTime <= 0 )
  {
    if ( isInInterruptibleState && weaponTime > 0 )
      return 0i64;
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    v15 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u);
    IsMeleeComboWeapon = BG_IsMeleeComboWeapon(CurrentWeaponForPlayer);
    if ( !v15 && IsMeleeComboWeapon )
      PM_IncrementMeleeComboSeqIdx(pm, CurrentWeaponForPlayer);
    if ( !isQuickMelee )
    {
      if ( v15 )
      {
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u);
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x18u);
        v17 = BG_UsingAlternate(ps);
        PM_BeginWeaponChange(pm, pml, &pm->cmd.weapon, v17, 1);
      }
      else
      {
        PM_Weapon_Idle(pm, (PlayerHandIndex)v7);
      }
    }
    v18 = BG_UsingAlternateMelee(ps);
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x18u) )
    {
      ps->pm_flags.m_flags[0] &= ~0x1000000u;
      if ( applyPendingDamage )
      {
        v19 = BG_UsingAlternate(ps);
        v20 = BG_PlayerDualWielding(ps);
        BG_GetWeaponMeleeAnimProperties(ps, &pm->cmd.weapon, v19, v20 == 1, v18, &outIsRandomized, &attackerAnim, &outAnimSets);
        SfxPackage = BG_GetSfxPackage(&pm->cmd.weapon, v19);
        if ( SfxPackage )
          sfxMaterialType = SfxPackage->sfxMaterialType;
        else
          sfxMaterialType = MOVEMENT;
        if ( v18 )
          altMeleeVariation = ps->weapCommon.altMeleeVariation;
        else
          altMeleeVariation = ps->weapCommon.meleeVariation;
        v24 = BG_PackMeleeParam(attackerAnim, sfxMaterialType, v18, altMeleeVariation);
        BG_AddPredictableEventToPlayerstate(EV_FIRE_MELEE_DAMAGE, v24, pm->cmd.serverTime, pm->weaponMap, ps);
      }
    }
    ps->pm_flags.m_flags[0] &= ~0x800000u;
    PM_MeleeChargeClear(ps);
    ps->meleeChargeEnt = 2047;
    if ( !(_DWORD)v7 )
    {
      ps->weapCommon.altMeleeVariationPrev = ps->weapCommon.altMeleeVariation;
      ps->weapCommon.meleeVariationPrev = ps->weapCommon.meleeVariation;
      ps->weapCommon.isMeleeVariationAltPrev = ps->weapCommon.isMeleeVariationAlt;
    }
  }
  return 1i64;
}

/*
==============
PM_Weapon_MeleeHitAnyTarget
==============
*/
__int64 PM_Weapon_MeleeHitAnyTarget(const pmove_t *pm, __int16 meleeChargeEnt, __int16 *outHitEnt)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v6; 
  double MeleeRange; 
  float v8; 
  double MeleeWidth; 
  float v10; 
  double MeleeHeight; 
  const BgHandler *m_bgHandler; 
  __int64 v13; 
  Physics_WorldId v14; 
  float v15; 
  float v16; 
  vec3_t outOrigin; 
  vec3_t end; 
  tmat33_t<vec3_t> axis; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10858, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10858, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v6 = BG_UsingAlternate(ps);
  MeleeRange = BG_GetMeleeRange(pm->weaponMap, ps, 0);
  v8 = *(float *)&MeleeRange;
  MeleeWidth = BG_GetMeleeWidth(CurrentWeaponForPlayer, v6);
  v10 = *(float *)&MeleeWidth;
  MeleeHeight = BG_GetMeleeHeight(CurrentWeaponForPlayer, v6);
  AnglesToAxis(&ps->viewangles, &axis);
  BG_GetPlayerEyePosition(pm->weaponMap, ps, &outOrigin, pm->m_bgHandler);
  m_bgHandler = pm->m_bgHandler;
  outOrigin.v[0] = (float)(-10.0 * axis.m[0].v[0]) + outOrigin.v[0];
  outOrigin.v[1] = (float)(-10.0 * axis.m[0].v[1]) + outOrigin.v[1];
  outOrigin.v[2] = (float)(-10.0 * axis.m[0].v[2]) + outOrigin.v[2];
  v13 = 0i64;
  v14 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
  while ( 1 )
  {
    end.v[2] = (float)(v8 * axis.m[0].v[2]) + outOrigin.v[2];
    end.v[0] = (float)(v8 * axis.m[0].v[0]) + outOrigin.v[0];
    end.v[1] = (float)(v8 * axis.m[0].v[1]) + outOrigin.v[1];
    if ( v13 > 0 )
    {
      v15 = v10 * traceOffsets[v13].v[0];
      v16 = *(float *)&MeleeHeight * traceOffsets[v13].v[1];
      end.v[0] = (float)((float)(v15 * axis.m[1].v[0]) + (float)((float)(v8 * axis.m[0].v[0]) + outOrigin.v[0])) + (float)(v16 * axis.m[2].v[0]);
      end.v[2] = (float)((float)(v15 * axis.m[1].v[2]) + (float)((float)(v8 * axis.m[0].v[2]) + outOrigin.v[2])) + (float)(v16 * axis.m[2].v[2]);
      end.v[1] = (float)((float)(v15 * axis.m[1].v[1]) + (float)((float)(v8 * axis.m[0].v[1]) + outOrigin.v[1])) + (float)(v16 * axis.m[2].v[1]);
    }
    PhysicsQuery_LegacyTraceSkipEntities(v14, &results, &outOrigin, &end, &bounds_origin, &ps->clientNum, 1, 0, 41968017, 1, NULL, All);
    if ( results.fraction < 1.0 )
      break;
    if ( ++v13 >= 9 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
PM_Weapon_MeleeHitChargeTarget
==============
*/
_BOOL8 PM_Weapon_MeleeHitChargeTarget(const pmove_t *pm, __int16 meleeChargeEnt, __int16 *outHitEnt)
{
  playerState_s *ps; 
  int v7; 
  double MeleeRange; 
  int v9; 
  double UpContribution; 
  const Weapon *ViewmodelWeapon; 
  bool v12; 
  const WeaponDef *v13; 
  BgTrace *m_trace; 
  __int16 EntityHitId; 
  __int16 v16; 
  bool v17; 
  int contentMask; 
  vec3_t outAttackerPos; 
  vec3_t outVictimPos; 
  vec3_t vec; 
  vec3_t start; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10787, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10787, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v7 = meleeChargeEnt;
  if ( meleeChargeEnt < 0 )
    return 0i64;
  if ( (unsigned __int16)meleeChargeEnt > 0x7FEu )
    return 0i64;
  if ( (PM_GetEffectiveStance(ps) & 0xFFFFFFFD) != 0 )
    return 0i64;
  MeleeRange = BG_GetMeleeRange(pm->weaponMap, ps, 1);
  if ( (float)ps->meleeChargeDist > *(float *)&MeleeRange )
    return 0i64;
  v9 = 0;
  if ( !PM_MeleeGetEntityOriginVelocity(pm, v7, &outAttackerPos, &outVictimPos, NULL) )
    return 0i64;
  vec.v[0] = outVictimPos.v[0] - outAttackerPos.v[0];
  vec.v[2] = outVictimPos.v[2] - outAttackerPos.v[2];
  vec.v[1] = outVictimPos.v[1] - outAttackerPos.v[1];
  UpContribution = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &vec);
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
  if ( ViewmodelWeapon->weaponIdx )
  {
    v12 = BG_UsingAlternate(ps);
    v13 = BG_WeaponDef(ViewmodelWeapon, v12);
    if ( v13 )
    {
      LOBYTE(v9) = *(float *)&UpContribution <= v13->playerMeleeChargeHeightTolerance;
      if ( !v9 )
        return 0i64;
    }
  }
  m_trace = pm->m_trace;
  contentMask = pm->tracemask;
  start.v[0] = outAttackerPos.v[0];
  start.v[1] = outAttackerPos.v[1];
  start.v[2] = outAttackerPos.v[2] + 18.0;
  outVictimPos.v[2] = outVictimPos.v[2] + 18.0;
  BgTrace::LegacyTrace(m_trace, pm, &results, &start, &outVictimPos, &bounds_origin, ps->clientNum, contentMask);
  if ( results.allsolid )
    return 0i64;
  *outHitEnt = ps->meleeChargeEnt;
  EntityHitId = Trace_GetEntityHitId(&results);
  v16 = EntityHitId;
  if ( results.fraction >= 1.0 || EntityHitId == ps->meleeChargeEnt )
    return 1i64;
  *outHitEnt = EntityHitId;
  v17 = Com_GameMode_SupportsFeature(WEAPON_RAISING_LADDER_CLIMB|0x80);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  return v17 && v16 < (int)ComCharacterLimits::ms_gameData.m_characterCount;
}

/*
==============
PM_Weapon_MeleeInit
==============
*/
void PM_Weapon_MeleeInit(pmove_t *pm, int msec, playerState_s *ps, unsigned int *holdrand)
{
  int v7; 
  __int16 meleeChargeEnt; 
  MeleeResult v9; 
  playerState_s *v10; 
  BOOL v11; 
  bool v12; 
  __int16 v13; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v15; 
  __int16 v16; 
  signed int v17; 
  WeaponAnimNumber v18; 
  bool v19; 
  int weaponDelay; 
  int v21; 
  entity_event_t v22; 
  int *outCountToFinisher; 
  __int16 outHitEnt[2]; 
  int v25; 
  int outMeleeViewLockTime[16]; 
  bool v27; 
  bool v29; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10945, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10946, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v29 = BG_UsingAlternate(ps);
  v27 = BG_PlayerDualWielding(ps) == 1;
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0x18u);
  v7 = 23;
  if ( BG_Weapon_IsExecutionEnabled(ps) )
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&ps->pm_flags, ACTIVE, 0x17u);
  else
    ps->pm_flags.m_flags[0] &= ~0x800000u;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 366, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  meleeChargeEnt = ps->meleeChargeEnt;
  v9 = MISS;
  ps->weapState[0].queuedActionState = QAS_STATE_NONE;
  ps->weapState[1].queuedActionState = QAS_STATE_NONE;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10905, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  v10 = pm->ps;
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10905, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v11 = PM_Weapon_MeleeHitChargeTarget(pm, v10->meleeChargeEnt, outHitEnt);
  v12 = v11;
  if ( !v11 )
    v12 = (unsigned int)PM_Weapon_MeleeHitAnyTarget(pm, v10->meleeChargeEnt, outHitEnt) != 0;
  v13 = outHitEnt[0];
  if ( v12 )
  {
    if ( v10->meleeChargeEnt != outHitEnt[0] || outHitEnt[0] < 0 || (unsigned int)outHitEnt[0] > 0x7FE || (CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, v10), v15 = BG_UsingAlternate(v10), !PM_Damage_CalcMeleeCountToFinisher(pm->m_bgHandler, v10, CurrentWeaponForPlayer, v15, meleeChargeEnt, &v25)) || (v9 = FATAL, v10->weapState[0].meleeHitCount + 1 < v25) )
      v9 = HIT;
  }
  if ( v9 == MISS )
  {
    v18 = WEAP_MELEE_FIRST;
LABEL_32:
    v7 = 22;
    goto LABEL_33;
  }
  if ( v9 == HIT )
  {
    v18 = WEAP_MELEE_HIT;
    goto LABEL_32;
  }
  v18 = WEAP_MELEE_FATAL;
LABEL_33:
  ps->weapState[0].weaponState = v7;
  if ( v9 == HIT && (v16 = ps->meleeChargeEnt, v16 >= 0) && (unsigned __int16)v16 <= 0x7FEu && v13 == v16 )
  {
    v17 = ps->weapState[0].meleeHitCount + 1;
    if ( v17 > 7 )
      v17 = 7;
    if ( v17 < 0 )
      v17 = 0;
  }
  else
  {
    v17 = 0;
  }
  ps->weapState[0].meleeHitCount = v17;
  BG_GetMeleeTime(pm->weaponMap, ps, v29, v27, v7 == 23, &ps->weapState[0].weaponTime, &ps->weapState[0].weaponDelay, outMeleeViewLockTime);
  v19 = BG_UsingAlternateMelee(ps);
  PM_UpdateMeleeAnimSet(pm, holdrand, 0, v19);
  PM_StartWeaponAnimBothHands(ps, v18);
  ps->meleeStartTime = ps->commandTime;
  if ( BG_PlayerDualWielding(ps) )
  {
    weaponDelay = ps->weapState[0].weaponDelay;
    ps->weapState[1].weaponState = ps->weapState[0].weaponState;
    ps->weapState[1].weaponTime = ps->weapState[0].weaponTime;
    BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_LEFT, weaponDelay, NULL);
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    BG_AnimUpdatePlayerStateMeleeConditions(pm, v9);
    BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_MELEEATTACK, 0, 1, holdrand);
  }
  PM_SetProneMovementOverride(ps);
  PM_UpdateAimDownSightLerp(pm, msec);
  if ( BG_PWF_UseAlternateAsOffhand(ps) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
    PM_Weapon_SetOffhandUnderbarrelMode(pm->weaponMap, ps, 0);
  }
  v21 = v7 - 22;
  if ( !v21 )
  {
    v22 = EV_FIRE_MELEE_SWIPE;
    goto LABEL_59;
  }
  if ( v21 == 1 )
  {
    v22 = EV_FIRE_MELEE_CHARGE;
LABEL_59:
    BG_AddPredictableEventToPlayerstate(v22, 0, pm->cmd.serverTime, pm->weaponMap, pm->ps);
    return;
  }
  LODWORD(outCountToFinisher) = ps->weapState[0].weaponState;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11072, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Encountered unexpected meleeWeaponState %i", outCountToFinisher) )
    __debugbreak();
}

/*
==============
PM_Weapon_OffHand
==============
*/
void PM_Weapon_OffHand(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const Weapon *OffHandWeaponForPlayer; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12442, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12442, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PM_Weapon_HasOffhandWeapon(pm->weaponMap, ps, pm->cmd.buttons) )
  {
    BG_AddPredictableEventToPlayerstate(EV_USE_OFFHAND, ps->weapCommon.offHandHandle.m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, ps);
    OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(pm->weaponMap, ps);
    if ( !BG_ThrowingBackGrenade(ps) && !BG_OffhandDoesNotConsumeAmmo(OffHandWeaponForPlayer, 0) )
    {
      if ( BG_GetAmmoInClipForWeapon(ps, OffHandWeaponForPlayer, 0, WEAPON_HAND_DEFAULT) )
        PM_WeaponUseAmmo(ps, OffHandWeaponForPlayer, 0, 1, WEAPON_HAND_DEFAULT);
      else
        PM_AddEvent(pm, EV_EMPTY_OFFHAND_PRIMARY);
    }
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
  }
}

/*
==============
PM_Weapon_OffHandEnd
==============
*/
void PM_Weapon_OffHandEnd(pmove_t *pm, pml_t *pml, playerState_s *ps)
{
  const Weapon *CurrentWeaponForPlayer; 
  int clientNum; 
  PlayerHandIndex v7; 
  PlayerHandIndex v8; 
  int *p_weaponTime; 
  PlayerHandIndex v10; 
  BgWeaponMap *weaponMap; 
  int v12; 
  const PlayerEquippedWeaponState *EquippedWeaponStateConst; 
  BOOL v14; 
  bool v15; 
  __int64 v16; 
  bool v17; 
  bool v18; 
  const Weapon *v19; 
  const dvar_t *v20; 
  float v21; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 
  bool v26; 
  bool v27; 
  BgWeaponMap *v28; 
  __int64 v29; 
  Weapon *r_weapon; 
  __int64 p_weapFlags; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12526, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12527, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && !BG_PWF_UseAlternateAsOffhand(ps) && !PlayerASM_IsEnabled() )
    BG_ClearPrepareAnim(pm->m_bgHandler, ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  r_weapon = (Weapon *)CurrentWeaponForPlayer;
  if ( !CurrentWeaponForPlayer->weaponIdx )
  {
    ps->weapState[0].weaponTime = 0;
    BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 1, NULL);
    clientNum = ps->clientNum;
    ps->weapState[0].weaponState = 32;
    G_DebugPlayerAnimScript_Print(clientNum, "end weapon (offhand end)\n");
    goto LABEL_73;
  }
  p_weapFlags = (__int64)&ps->weapCommon.weapFlags;
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Eu) || !PM_Weapon_ShouldSwitchWeaponsAfterFire(pm->weaponMap, ps) )
  {
    p_weaponTime = &ps->weapState[0].weaponTime;
    v10 = WEAPON_HAND_DEFAULT;
    v29 = (BG_PlayerDualWieldingWeapon(pm->weaponMap, ps, CurrentWeaponForPlayer) != 0) + 1i64;
    while ( 1 )
    {
      weaponMap = pm->weaponMap;
      v12 = p_weaponTime[4];
      if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1135, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1136, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v14 = !BG_Skydive_IsSkydiving(ps) && BG_Ladder_IsDualWieldingAllowed(ps) && (EquippedWeaponStateConst = BG_GetEquippedWeaponStateConst(weaponMap, ps, CurrentWeaponForPlayer)) != NULL && EquippedWeaponStateConst->dualWielding;
      v15 = v14;
      if ( ps )
      {
        v16 = p_weapFlags;
        if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x22u) )
          goto LABEL_32;
      }
      else
      {
        v16 = 1832i64;
        p_weapFlags = 1832i64;
      }
      if ( !ps || !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v16, ACTIVE, 0x11u) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v16, ACTIVE, 0x1Bu) )
      {
LABEL_32:
        v17 = 0;
        goto LABEL_33;
      }
      v17 = 1;
LABEL_33:
      v18 = v15;
      v19 = r_weapon;
      *p_weaponTime = BG_QuickRaiseTime(ps, r_weapon, v17, v18);
      BG_SetWeaponDelay(pm->weaponMap, ps, v10, 0, NULL);
      p_weaponTime[4] = 32;
      if ( BG_UseFastOffhand(ps, pm->weaponMap) )
      {
        v20 = DCONST_DVARFLT_perk_fastOffhandMultiplier;
        if ( !DCONST_DVARFLT_perk_fastOffhandMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastOffhandMultiplier") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v20);
        v21 = (float)*p_weaponTime * v20->current.value;
        v19 = r_weapon;
        *p_weaponTime = (int)v21;
      }
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1422, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
        __debugbreak();
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v16, GameModeFlagValues::ms_mpValue, 0x35u) )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1426, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
          __debugbreak();
        if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12583, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
          __debugbreak();
        EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(pm->weaponMap, ps, v19);
        if ( !EquippedWeaponStateNonConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12586, ASSERT_TYPE_ASSERT, "(playerEquippedWeaponState)", (const char *)&queryFormat, "playerEquippedWeaponState") )
          __debugbreak();
        EquippedWeaponStateNonConst->inAltMode = 0;
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v16, ACTIVE, 0x11u);
        _XMM1 = LODWORD(ps->weapCommon.aimSpreadScale);
        __asm
        {
          vcmpltss xmm0, xmm1, xmm6
          vblendvps xmm1, xmm1, xmm6, xmm0
        }
        ps->weapCommon.aimSpreadScale = *(float *)&_XMM1;
        PM_SetProneMovementOverride(ps);
        if ( !BG_HasUnderbarrelShotgun(r_weapon) )
        {
          if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v16, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v16, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v16, ACTIVE, 0x1Bu)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12611, ASSERT_TYPE_ASSERT, "(!BG_UsingAlternate( ps ))", (const char *)&queryFormat, "!BG_UsingAlternate( ps )") )
            __debugbreak();
          v26 = BG_PlayerDualWielding(ps) == 1;
          v27 = BG_UsingAlternate(ps);
          CurrentWeaponForPlayer = r_weapon;
          *p_weaponTime = BG_AltRaiseTime(ps, r_weapon, v27, v26);
          if ( ps->pm_type < 7 )
            PM_SetNextWeaponAnim(ps, WEAP_ALTSWITCHTO, v10);
          goto LABEL_72;
        }
        if ( v12 == 18 )
        {
          PM_Weapon_Idle(pm, v10);
        }
        else
        {
          *p_weaponTime = 0;
          if ( ps->pm_type < 7 )
            PM_SetNextWeaponAnim(ps, WEAP_IDLE, v10);
        }
      }
      else
      {
        if ( ps->pm_type < 7 )
          PM_SetNextWeaponAnim(ps, WEAP_QUICK_RAISE, v10);
        BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RAISEWEAPON, 1, 1, &pml->holdrand);
        BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RAISEWEAPONQUICK, 1, 1, &pml->holdrand);
      }
      CurrentWeaponForPlayer = r_weapon;
LABEL_72:
      ++v10;
      p_weaponTime += 20;
      if ( !--v29 )
        goto LABEL_73;
    }
  }
  PM_AddEvent(pm, EV_FORCE_WEAPON_CHANGE);
  v7 = WEAPON_HAND_DEFAULT;
  v8 = BG_PlayerDualWieldingWeapon(pm->weaponMap, ps, CurrentWeaponForPlayer) != 0;
  do
    PM_Weapon_Idle(pm, v7++);
  while ( v7 <= v8 );
LABEL_73:
  ps->throwbackGrenadeTimeLeft = 0;
  ps->throwbackGrenadeOwner = 2047;
  v28 = pm->weaponMap;
  if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 776, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v28->SetWeapon(v28, &ps->throwbackWeaponHandle, &NULL_WEAPON);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
  ps->pm_flags.m_flags[0] &= ~0x4000u;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x1Eu) )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x1Eu);
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Eu) )
  {
    if ( r_weapon->weaponIdx )
      PM_BuildWeaponAnimArrays(pm->weaponMap, ps, pm->m_bgHandler);
    PM_AddEvent(pm, EV_OFFHAND_END_NOTIFY);
  }
}

/*
==============
PM_Weapon_OffHandHasAmmo
==============
*/
bool PM_Weapon_OffHandHasAmmo(const playerState_s *ps, const BgWeaponMap *weaponMap, const Weapon *offHand)
{
  int AmmoInClipForWeapon; 
  bool HasDetonator; 
  bool result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13988, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13989, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !BG_IsOffhandWeaponType(offHand, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13990, ASSERT_TYPE_ASSERT, "(BG_IsOffhandWeaponType( offHand, false ))", (const char *)&queryFormat, "BG_IsOffhandWeaponType( offHand, false )") )
    __debugbreak();
  result = 0;
  if ( offHand->weaponIdx )
  {
    if ( BG_GetWeaponOffhandSlot(ps, weaponMap, offHand) == OFFHAND_SLOT_TAUNT )
      return 1;
    AmmoInClipForWeapon = BG_GetAmmoInClipForWeapon(ps, offHand, 0, WEAPON_HAND_DEFAULT);
    HasDetonator = BG_WeapHasDetonator(offHand, 0);
    if ( AmmoInClipForWeapon > 0 || HasDetonator )
      return 1;
  }
  return result;
}

/*
==============
PM_Weapon_OffHandHold
==============
*/
void PM_Weapon_OffHandHold(pmove_t *pm, pml_t *pml, playerState_s *ps)
{
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *UsedOffHandWeapon; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12132, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12133, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PM_Weapon_HasOffhandWeapon(pm->weaponMap, ps, pm->cmd.buttons) )
  {
    ps->weapState[0].weaponState = 28;
    ps->weapState[0].weaponTime = 0;
    BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
    if ( !BG_ThrowingBackGrenade(ps) )
    {
      if ( BG_PWF_UseAlternateAsOffhand(ps) )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12147, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
          __debugbreak();
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u);
        ps->grenadeTimeLeft = 0;
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
        if ( PM_WeaponClipEmpty(pm->weaponMap, ps, WEAPON_HAND_DEFAULT) )
        {
          if ( BG_GetAmmoNotInClip(ps, CurrentWeaponForPlayer, 1) > 0 )
            PM_BeginWeaponReload(ps, pm, pml, WEAPON_HAND_DEFAULT);
        }
      }
      else
      {
        UsedOffHandWeapon = PM_Weapon_GetUsedOffHandWeapon(pm->weaponMap, ps);
        ps->grenadeTimeLeft = BG_GetCookingGrenadeFuseMax(UsedOffHandWeapon, 0, ps);
        if ( BG_GetWeaponFieldTime(ps, UsedOffHandWeapon, 0, 0, 188i64) && ps->pm_type < 7 )
          PM_SetNextWeaponAnim(ps, WEAP_GRENADE_PRIME, WEAPON_HAND_DEFAULT);
      }
    }
    G_DebugPlayerAnimScript_Print(ps->clientNum, "end weapon (offhand hold)\n");
  }
}

/*
==============
PM_Weapon_OffHandInit
==============
*/
void PM_Weapon_OffHandInit(pmove_t *pm, pml_t *pml, int throwingBack)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  char v8; 
  unsigned int m_mapEntryId; 
  bool v10; 
  playerState_s *v11; 
  PlayerHandIndex v12; 
  int *p_weaponState; 
  int weaponState; 
  bool v15; 
  int *p_weaponTime; 
  PlayerHandIndex v17; 
  int WeaponHand; 
  __int64 v19; 
  unsigned int v20; 
  WeaponAnimNumber v21; 
  int SprintOutTime; 
  bool v23; 
  bool v24; 
  float v25; 
  int v26; 
  const dvar_t *v27; 
  __int64 v28; 
  Weapon *r_weapon; 
  bool v30; 
  int weaponTime; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11809, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11809, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PM_Weapon_HasOffhandWeapon(pm->weaponMap, ps, pm->cmd.buttons) )
  {
    BG_HighPriorityWeapon_TryClearHighPriorityWeaponSwitch(pm);
    pm->OnOffHandInit(pm);
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    r_weapon = (Weapon *)BG_GetOffHandWeaponForPlayer(pm->weaponMap, ps);
    if ( (pm->cmd.buttons & 0x3000) != 0 && !throwingBack && BG_OffhandUnderbarrelInitAllowed(ps) && BG_OffhandIsUnderbarrelWeapon(pm->weaponMap, ps, pm->cmd.buttons) )
    {
      v8 = 1;
      if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11826, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
        __debugbreak();
      m_mapEntryId = ps->weapCommon.weaponHandle.m_mapEntryId;
    }
    else
    {
      m_mapEntryId = ps->weapCommon.offHandHandle.m_mapEntryId;
      v8 = 0;
    }
    v10 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80);
    BG_AddPredictableEventToPlayerstate((const entity_event_t)(v10 + 35), m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, ps);
    v11 = pm->ps;
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11788, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v12 = WEAPON_HAND_DEFAULT;
    if ( BG_PlayerLastWeaponHandForViewWeapon(pm->weaponMap, v11) >= WEAPON_HAND_DEFAULT )
    {
      p_weaponState = &v11->weapState[0].weaponState;
      do
      {
        if ( (unsigned int)(*p_weaponState - 22) <= 2 )
          PM_Weapon_MeleeEnd(pm, pml, 0, v12, 0, 0, 0);
        ++v12;
        p_weaponState += 20;
      }
      while ( v12 <= BG_PlayerLastWeaponHandForViewWeapon(pm->weaponMap, v11) );
    }
    weaponState = ps->weapState[0].weaponState;
    v15 = (unsigned int)(weaponState - 7) <= 5 || weaponState == 50;
    ps->weapState[0].weaponState = 26;
    p_weaponTime = &ps->weapState[0].weaponTime;
    weaponTime = ps->weapState[0].weaponTime;
    BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Eu);
    if ( BG_HasLadderHand(ps) )
    {
      ps->weapState[1].weaponState = 26;
      BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_LEFT, 0, NULL);
    }
    ps->throwbackGrenadeOwner = 2047;
    v30 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u);
    if ( !v8 || !BG_IsAimDownSight(CurrentWeaponForPlayer, 1) )
      PM_ExitAimDownSight(pm);
    if ( CurrentWeaponForPlayer->weaponIdx )
    {
      if ( !v15 )
      {
        if ( v8 )
          BG_SetPlayerUsingOffhandUnderbarrelWeapon(ps, 1);
        v17 = WEAPON_HAND_DEFAULT;
        WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
        v19 = WeaponHand;
        if ( WeaponHand >= 0 )
        {
          v20 = weaponState - 34;
          v28 = v19 + 1;
          do
          {
            if ( v20 > 2 )
            {
              if ( v8 )
              {
                if ( BG_HasUnderbarrelShotgun(CurrentWeaponForPlayer) )
                {
                  *p_weaponTime = 0;
                }
                else
                {
                  PM_AddEvent(pm, EV_WEAPON_ALT);
                  v23 = BG_PlayerDualWielding(ps) == 1;
                  v24 = BG_UsingAlternate(ps);
                  *p_weaponTime = BG_AltDropTime(ps, CurrentWeaponForPlayer, v24, v23);
                  if ( v17 == WEAPON_HAND_DEFAULT )
                    PM_StartWeaponAnimBothHands(ps, WEAP_RELOAD_LAST);
                  if ( v30 && !*p_weaponTime )
                    *p_weaponTime = BG_QuickDropTime(ps, CurrentWeaponForPlayer, 0, 0);
                }
              }
              else
              {
                *p_weaponTime = BG_QuickDropTime(ps, CurrentWeaponForPlayer, 0, 0);
                if ( ps->pm_type < 7 )
                  PM_SetNextWeaponAnim(ps, WEAP_QUICK_DROP, v17);
                BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_DROPWEAPON, 1, 1, &pml->holdrand);
                BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_DROPWEAPONQUICK, 1, 1, &pml->holdrand);
                v25 = (float)*p_weaponTime * 0.001;
                if ( v25 > 0.2 )
                {
                  if ( v25 > 0.40000001 )
                  {
                    if ( v25 > 0.60000002 )
                    {
                      if ( v25 > 0.80000001 )
                      {
                        if ( v25 > 1.0 )
                          v26 = (v25 > 1.2) + 83;
                        else
                          v26 = 82;
                      }
                      else
                      {
                        v26 = 81;
                      }
                    }
                    else
                    {
                      v26 = 80;
                    }
                  }
                  else
                  {
                    v26 = 79;
                  }
                }
                else
                {
                  v26 = 78;
                }
                BG_AnimScriptEvent(pm->m_bgHandler, ps, (PlayerAnimScriptEventType)v26, 0, 0, &pml->holdrand);
              }
            }
            else
            {
              *p_weaponTime = 0;
              if ( v8 )
              {
                v21 = WEAP_SPRINT_OUT;
                if ( weaponState == 34 && BG_ViewModelAnimExists(ps, WEAP_ANIM_SPRINT_IN_CANCEL, v17, pm->m_bgHandler) )
                  v21 = WEAP_SPRINT_IN_CANCEL;
                SprintOutTime = GetSprintOutTime(pm->weaponMap, ps, CurrentWeaponForPlayer);
                if ( weaponState == 36 && weaponTime == SprintOutTime )
                {
                  *p_weaponTime = SprintOutTime;
                  BG_SetWeaponDelay(pm->weaponMap, ps, v17, 0, NULL);
                  if ( ps->pm_type < 7 )
                    PM_SetNextWeaponAnim(ps, v21, v17);
                }
              }
            }
            if ( BG_UseFastOffhand(ps, pm->weaponMap) )
            {
              v27 = DCONST_DVARFLT_perk_fastOffhandMultiplier;
              if ( !DCONST_DVARFLT_perk_fastOffhandMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastOffhandMultiplier") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v27);
              *p_weaponTime = (int)(float)((float)*p_weaponTime * v27->current.value);
            }
            v20 = weaponState - 34;
            ++v17;
            p_weaponTime += 20;
            --v28;
          }
          while ( v28 );
        }
      }
    }
    else
    {
      *p_weaponTime = 100;
    }
    if ( BG_GetWeaponClass(r_weapon, 0) == WEAPCLASS_THROWINGKNIFE )
      PM_Weapon_OffHandPrepare(pm);
  }
}

/*
==============
PM_Weapon_OffHandPrepare
==============
*/
__int64 PM_Weapon_OffHandPrepare(pmove_t *pm)
{
  unsigned __int8 v1; 
  playerState_s *ps; 
  __int64 result; 
  const Weapon *UsedOffHandWeapon; 
  PlayerHandIndex v6; 
  const Weapon *RequestedWeapon; 
  unsigned __int16 WeaponFieldTime; 
  WeaponAnimNumber v9; 
  const Weapon *CurrentWeaponForPlayer; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 
  int v12; 
  int WeaponHand; 
  const dvar_t *v14; 

  v1 = 0;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12008, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12008, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = PM_Weapon_HasOffhandWeapon(pm->weaponMap, ps, pm->cmd.buttons);
  if ( (_DWORD)result )
  {
    if ( (pm->cmd.buttons & 0x3000) != 0 && BG_OffhandUnderbarrelInitAllowed(ps) && BG_OffhandIsUnderbarrelWeapon(pm->weaponMap, ps, pm->cmd.buttons) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12016, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
        __debugbreak();
      if ( (unsigned int)(ps->weapState[0].weaponState - 26) > 6 )
        BG_SetPlayerUsingOffhandUnderbarrelWeapon(ps, 1);
    }
    UsedOffHandWeapon = PM_Weapon_GetUsedOffHandWeapon(pm->weaponMap, ps);
    BG_WeaponDef(UsedOffHandWeapon, 0);
    ps->weapState[0].weaponState = 27;
    v6 = WEAPON_HAND_DEFAULT;
    ps->weapState[0].weaponTime = BG_GetWeaponFieldTime(ps, UsedOffHandWeapon, 0, 0, 16i64);
    BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
    if ( BG_HasLadderHand(ps) )
    {
      RequestedWeapon = PM_GetRequestedWeapon(pm);
      BG_SetCurrentWeaponForPlayer(pm->weaponMap, ps, RequestedWeapon, pm->m_bgHandler);
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x32u);
    }
    if ( BG_ThrowingBackGrenade(ps) )
    {
      if ( ps->pm_type < 7 )
        PM_SetNextWeaponAnim(ps, WEAP_ALTSWITCHTO, WEAPON_HAND_DEFAULT);
      ps->weapState[0].weaponTime = BG_AltRaiseTime(ps, UsedOffHandWeapon, 0, 0);
      if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) )
        BG_SetPlayerUsingOffhandUnderbarrelWeapon(ps, 0);
      goto LABEL_46;
    }
    if ( !BG_WeapHasDetonator(UsedOffHandWeapon, 0) || BG_WeaponAmmo(pm->weaponMap, ps, UsedOffHandWeapon, 0) )
    {
      if ( BG_PWF_UseAlternateAsOffhand(ps) )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12068, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
          __debugbreak();
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
        EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(pm->weaponMap, ps, CurrentWeaponForPlayer);
        if ( !EquippedWeaponStateNonConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12073, ASSERT_TYPE_ASSERT, "(playerEquippedWeaponState)", (const char *)&queryFormat, "playerEquippedWeaponState") )
          __debugbreak();
        EquippedWeaponStateNonConst->inAltMode = 1;
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u);
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
        if ( ps->weapCommon.aimSpreadScale < 128.0 )
          ps->weapCommon.aimSpreadScale = 128.0;
        PM_BuildWeaponAnimArrays(pm->weaponMap, ps, pm->m_bgHandler);
        PM_SetProneMovementOverride(ps);
        if ( BG_HasUnderbarrelShotgun(CurrentWeaponForPlayer) )
        {
          ps->weapState[0].weaponTime = 0;
        }
        else
        {
          v12 = BG_PlayerDualWielding(ps);
          ps->weapState[0].weaponTime = BG_AltRaiseTime(ps, CurrentWeaponForPlayer, 1, v12 == 1);
          WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
          if ( WeaponHand >= 0 )
          {
            do
            {
              if ( ps->pm_type < 7 )
                PM_SetNextWeaponAnim(ps, WEAP_ALTSWITCHTO, v6);
              ++v6;
            }
            while ( v6 <= WeaponHand );
          }
        }
        goto LABEL_46;
      }
      v1 = 1;
      if ( ps->pm_type < 7 )
      {
        v9 = WEAP_HOLD_FIRE;
        goto LABEL_45;
      }
    }
    else
    {
      ps->weapState[0].weaponState = 31;
      ps->weapState[0].weaponTime = BG_GetWeaponFieldTime(ps, UsedOffHandWeapon, 0, 0, 20i64);
      WeaponFieldTime = BG_GetWeaponFieldTime(ps, UsedOffHandWeapon, 0, 0, 0i64);
      BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, WeaponFieldTime, "Detonate Delay");
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
      if ( ps->pm_type < 7 )
      {
        v9 = WEAP_DETONATE;
LABEL_45:
        PM_SetNextWeaponAnim(ps, v9, WEAPON_HAND_DEFAULT);
      }
    }
LABEL_46:
    if ( BG_UseFastOffhand(ps, pm->weaponMap) )
    {
      v14 = DCONST_DVARFLT_perk_fastOffhandMultiplier;
      if ( !DCONST_DVARFLT_perk_fastOffhandMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastOffhandMultiplier") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      ps->weapState[0].weaponTime = (int)(float)((float)ps->weapState[0].weaponTime * v14->current.value);
    }
    PM_SetProneMovementOverride(ps);
    PM_BuildWeaponAnimArrays(pm->weaponMap, ps, pm->m_bgHandler);
    return v1;
  }
  return result;
}

/*
==============
PM_Weapon_OffHandPrimedStart
==============
*/
void PM_Weapon_OffHandPrimedStart(pmove_t *pm, pml_t *pml, int delayedAction)
{
  playerState_s *ps; 
  const Weapon *UsedOffHandWeapon; 
  const WeaponDef *v7; 
  bool v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  int fireTime; 
  int weaponDelay; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12394, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12394, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PM_Weapon_HasOffhandWeapon(pm->weaponMap, ps, pm->cmd.buttons) )
  {
    UsedOffHandWeapon = PM_Weapon_GetUsedOffHandWeapon(pm->weaponMap, ps);
    v7 = BG_WeaponDef(UsedOffHandWeapon, 0);
    v8 = BG_Weapon_OffhandDisabled(ps) != OFFHAND_DISABLE_NOT_DISABLED;
    if ( v7->holdButtonToThrow || v8 || !PM_Weapon_OffHand_DesiresHolding(pm, ps) )
    {
      BG_GetFireTime(pm->weaponMap, ps, UsedOffHandWeapon, 0, 0, ps->weapState[0].weaponShotCount, &fireTime, &weaponDelay);
      ps->weapState[0].weaponState = 30;
      ps->weapState[0].weaponTime = fireTime;
      BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, weaponDelay, "Fire Delay");
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
      if ( BG_UseFastOffhand(ps, pm->weaponMap) )
      {
        v9 = DCONST_DVARFLT_perk_fastOffhandMultiplier;
        if ( !DCONST_DVARFLT_perk_fastOffhandMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastOffhandMultiplier") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v9);
        ps->weapState[0].weaponTime = (int)(float)((float)ps->weapState[0].weaponTime * v9->current.value);
        v10 = DCONST_DVARFLT_perk_fastOffhandMultiplier;
        if ( !DCONST_DVARFLT_perk_fastOffhandMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastOffhandMultiplier") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v10);
        ps->weapState[0].weaponDelay = (int)(float)((float)ps->weapState[0].weaponDelay * v10->current.value);
      }
      if ( ps->pm_type < 7 )
        PM_SetNextWeaponAnim(ps, WEAP_ATTACK, WEAPON_HAND_DEFAULT);
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
        PM_Weapon_FireWeaponAnimScriptEvent(pm, ps, UsedOffHandWeapon, 0, &pml->holdrand);
    }
    else if ( v7->offhandHoldIsCancelable && (pm->cmd.buttons & 0x80000) != 0 )
    {
      PM_Weapon_OffHandEnd(pm, pml, ps);
      ps->grenadeTimeLeft = 0;
    }
    else
    {
      BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 1, NULL);
    }
  }
}

/*
==============
PM_Weapon_OffHandStart
==============
*/
void PM_Weapon_OffHandStart(pmove_t *pm, pml_t *pml, int delayedAction)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *OffHandWeaponForPlayer; 
  const WeaponDef *v9; 
  const Weapon *ViewmodelWeapon; 
  OffhandDisableResult v11; 
  bool v12; 
  int v13; 
  double Float_Internal_DebugName; 
  double v15; 
  int fireTime; 
  int weaponDelay; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12260, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12260, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !PM_Weapon_HasOffhandWeapon(pm->weaponMap, ps, pm->cmd.buttons) )
    return;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(pm->weaponMap, ps);
  v9 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
  if ( !BG_PWF_UseAlternateAsOffhand(ps) )
  {
    if ( !BG_GetWeaponFieldTime(ps, OffHandWeaponForPlayer, 0, 0, 188i64) )
      goto LABEL_27;
    if ( (unsigned __int8)BG_GetWeaponFieldTime(ps, OffHandWeaponForPlayer, 0, 0, 190i64) && ps->grenadeTimeLeft > BG_GetCookingGrenadeFuseMin(OffHandWeaponForPlayer, 0, ps) && !PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, pm->m_bgHandler) )
      return;
    if ( ps->grenadeTimeLeft > BG_GetCookingGrenadeFuseMin(OffHandWeaponForPlayer, 0, ps) )
    {
LABEL_27:
      v11 = BG_Weapon_OffhandDisabled(ps);
      v12 = PM_Weapon_OffHand_DesiresHolding(pm, ps);
      v13 = BG_Weapon_OffhandDisablesHold(OffHandWeaponForPlayer, 0);
      if ( v11 == OFFHAND_DISABLE_NOT_DISABLED && (v12 || v13) && !v9->holdButtonToThrow )
      {
        if ( v9->offhandHoldIsCancelable && (pm->cmd.buttons & 0x80000) != 0 )
        {
          PM_Weapon_OffHandEnd(pm, pml, ps);
          ps->grenadeTimeLeft = 0;
          return;
        }
        if ( !v13 )
          goto LABEL_35;
      }
      if ( !BG_GetWeaponFieldTime(ps, OffHandWeaponForPlayer, 0, 0, 188i64) )
      {
        BG_GetFireTime(pm->weaponMap, ps, OffHandWeaponForPlayer, 0, 0, ps->weapState[0].weaponShotCount, &fireTime, &weaponDelay);
        ps->weapState[0].weaponState = 30;
        ps->weapState[0].weaponTime = fireTime;
        BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, weaponDelay, "Fire Delay");
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
        if ( BG_UseFastOffhand(ps, pm->weaponMap) )
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_perk_fastOffhandMultiplier, "perk_fastOffhandMultiplier");
          ps->weapState[0].weaponTime = (int)(float)(*(float *)&Float_Internal_DebugName * (float)ps->weapState[0].weaponTime);
          v15 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_perk_fastOffhandMultiplier, "perk_fastOffhandMultiplier");
          ps->weapState[0].weaponDelay = (int)(float)(*(float *)&v15 * (float)ps->weapState[0].weaponDelay);
        }
        if ( ps->pm_type < 7 )
          PM_SetNextWeaponAnim(ps, WEAP_ATTACK, WEAPON_HAND_DEFAULT);
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
          PM_Weapon_FireWeaponAnimScriptEvent(pm, ps, OffHandWeaponForPlayer, 0, &pml->holdrand);
        return;
      }
    }
    ps->weapState[0].weaponState = 29;
    ps->weapState[0].weaponTime = BG_GetWeaponFieldTime(ps, OffHandWeaponForPlayer, 0, 0, 18i64);
    BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
    if ( ps->pm_type < 7 )
      PM_SetNextWeaponAnim(ps, WEAP_GRENADE_PRIME_READY_TO_THROW, WEAPON_HAND_DEFAULT);
    return;
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12272, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
    __debugbreak();
  if ( !BG_HasUnderbarrelShotgun(CurrentWeaponForPlayer) && (pm->cmd.buttons & 0x80000) != 0 )
  {
LABEL_20:
    PM_Weapon_OffHandEnd(pm, pml, ps);
    return;
  }
  if ( !BG_HasUnderbarrelShotgun(CurrentWeaponForPlayer) && PM_Weapon_OffHand_DesiresHolding(pm, ps) )
  {
LABEL_35:
    BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 1, NULL);
    return;
  }
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
  if ( BG_HasUnderbarrelWeapon(ViewmodelWeapon) )
  {
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u);
    if ( !PM_WeaponClipEmpty(pm->weaponMap, ps, WEAPON_HAND_DEFAULT) )
    {
      PM_Weapon_FireWeapon(pm, delayedAction, pml, WEAPON_HAND_DEFAULT);
      return;
    }
    BG_AddPredictableEventToPlayerstate(EV_NOAMMO, 0, pm->cmd.serverTime, pm->weaponMap, ps);
    goto LABEL_20;
  }
  BG_SetPlayerUsingOffhandUnderbarrelWeapon(ps, 0);
}

/*
==============
PM_Weapon_OffHand_DesiresHolding
==============
*/
char PM_Weapon_OffHand_DesiresHolding(const pmove_t *pm, const playerState_s *ps)
{
  const Weapon *OffHandWeaponForPlayer; 
  unsigned __int64 v5; 
  bool v7; 
  unsigned __int64 buttons; 
  unsigned __int64 v9; 
  int weaponState; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12181, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12182, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(pm->weaponMap, ps);
  if ( BG_WeaponDef(OffHandWeaponForPlayer, 0)->infiniteHold )
    return 1;
  if ( !BG_WeaponDef(OffHandWeaponForPlayer, 0)->autoHold )
  {
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Eu) )
    {
      if ( (pm->oldcmd.buttons & 1) == 0 )
        return 0;
      v7 = (pm->cmd.buttons & 1) == 0;
    }
    else
    {
      buttons = pm->cmd.buttons;
      v9 = pm->oldcmd.buttons;
      if ( (buttons & 0x10000000000000i64) == 0 )
      {
        if ( (v9 & 0x3000) == 0 && (buttons & 0x3000) != 0 )
          return 0;
        weaponState = ps->weapState[0].weaponState;
        if ( weaponState == 28 && !ps->weapCommon.offhandGestureFlags && ((v9 & 1) == 0 && (buttons & 1) != 0 || (v9 & 0x20000) == 0 && (buttons & 0x20000) != 0) )
          return 0;
        if ( ((ps->weapCommon.offhandGestureFlags & 4) == 0 || weaponState) && weaponState != 16 || (v9 & 0x20000) != 0 )
          return 1;
        return (buttons & 0x20000) == 0;
      }
      if ( (v9 & 0x3000) == 0 )
        return 0;
      v7 = (buttons & 0x3000) == 0;
    }
    return !v7;
  }
  v5 = pm->oldcmd.buttons;
  if ( (v5 & 0x1000) == 0 && (pm->cmd.buttons & 0x1000) != 0 || (v5 & 0x2000) == 0 && (pm->cmd.buttons & 0x2000) != 0 )
    return 0;
  return !PM_GameInterface_Weapon_ButtonJustPressed(pm, NULL);
}

/*
==============
PM_Weapon_OffHand_NonAnimated
==============
*/
_BOOL8 PM_Weapon_OffHand_NonAnimated(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const Weapon *UsedOffHandWeapon; 
  const WeaponDef *v6; 
  weapType_t weapType; 
  char v8; 
  bool v9; 
  const char **p_name; 
  unsigned int IndexFromName; 
  const Gesture *AssetFromIndex; 
  char v13; 
  double Float_Internal_DebugName; 
  float v15; 
  PlayerAnimScriptEventType PowerAnimEvent; 
  double v17; 
  float v18; 
  GesturePlayRequest request; 
  GesturePlayRequest result; 

  if ( !pm )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13831, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13832, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
  }
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13832, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  UsedOffHandWeapon = PM_Weapon_GetUsedOffHandWeapon(pm->weaponMap, ps);
  v6 = BG_WeaponDef(UsedOffHandWeapon, 0);
  weapType = v6->weapType;
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
  BG_ValidateGestureBasedOffhand(UsedOffHandWeapon, v6);
  v8 = PM_OffhandThrow_HandleNonAnimated(pm, pml);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13609, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = (ps->weapCommon.offhandGestureFlags & 0x20) == 0;
  if ( v8 )
  {
    PM_Weapon_ReturnMainWeaponToIdleForGesture(pm);
  }
  else
  {
    p_name = &v6->gestureAnimation->name;
    if ( p_name )
    {
      IndexFromName = BG_Gesture_GetIndexFromName(*p_name);
      request = *BG_GesturePriority_SetupRequest(&result, pm->weaponMap, ps, pm->m_bgHandler, IndexFromName, pm->cmd.serverTime);
      request.stopAllGestures = 1;
      request.ignoreGamePlayState = 1;
      if ( BG_GesturePriority_TryPlay(&request, NULL, NULL) )
      {
        PM_Weapon_ReturnMainWeaponToIdleForGesture(pm);
        AssetFromIndex = BG_Gesture_GetAssetFromIndex(IndexFromName);
        if ( weapType == WEAPTYPE_SCRIPT )
          ps->weapCommon.offhandGestureFlags |= 0x40u;
        if ( AssetFromIndex->looping && weapType == WEAPTYPE_SCRIPT )
        {
          ps->weapCommon.offhandGestureFlags |= 0x80u;
          v13 = 1;
        }
        else
        {
          v13 = 0;
          if ( BG_UseFastOffhand(ps, pm->weaponMap) )
          {
            Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_perk_fastOffhandMultiplier, "perk_fastOffhandMultiplier");
            v15 = *(float *)&Float_Internal_DebugName;
          }
          else
          {
            v15 = FLOAT_1_0;
          }
          ps->weapCommon.offhandGestureFireTime = pm->cmd.serverTime - (int)(float)((float)(v6->gestureFireStateTime * -1000.0) * v15);
        }
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && weapType == WEAPTYPE_SCRIPT && v6->scriptedAnimType )
        {
          ps->weapCommon.offhandGestureFlags |= 0x100u;
          PowerAnimEvent = BG_AnimationMP_GetPowerAnimEvent(pm);
          if ( v13 )
            PowerAnimEvent = ANIM_ET_POWER_START;
          BG_AnimScriptEvent(pm->m_bgHandler, ps, PowerAnimEvent, 0, 1, &pml->holdrand);
        }
      }
    }
    else
    {
      if ( BG_UseFastOffhand(ps, pm->weaponMap) )
      {
        v17 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_perk_fastOffhandMultiplier, "perk_fastOffhandMultiplier");
        v18 = *(float *)&v17;
      }
      else
      {
        v18 = FLOAT_1_0;
      }
      ps->weapCommon.offhandGestureFireTime = pm->cmd.serverTime - (int)(float)((float)(v6->gestureFireStateTime * -1000.0) * v18);
    }
  }
  return v9;
}

/*
==============
PM_Weapon_PlayMantleGestures
==============
*/
void PM_Weapon_PlayMantleGestures(const BgWeaponMap *weaponMap, playerState_s *ps, const BgHandler *pmHandler, PlayerHandIndex hand, const Weapon *currentWeapon, int time)
{
  gestureAnimType_t gestureAnimType; 
  bool v11; 
  bool v12; 
  const Gesture *Gesture; 
  unsigned int IndexFromGesture; 
  unsigned int v15; 
  int restarted; 
  bool IsPlayingByIndex; 
  int v18; 
  GesturePlayRequest request; 
  GesturePlayRequest result; 
  unsigned int outSlot; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16557, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16558, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16483, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16484, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  gestureAnimType = BG_Mantle_GetMantleType(ps);
  v11 = BG_PlayerDualWielding(ps) != 0;
  v12 = BG_UsingAlternate(ps);
  Gesture = BG_Suit_GetGesture(ps, hand, currentWeapon, v12, v11, gestureAnimType);
  if ( Gesture )
  {
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(Gesture);
    v15 = IndexFromGesture;
    if ( IndexFromGesture != 256 )
    {
      restarted = 0;
      IsPlayingByIndex = BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot);
      v18 = time;
      if ( IsPlayingByIndex )
      {
        restarted = BG_Gesture_CalcRestartTimeOutToIn(ps, v15, time);
        BG_Gesture_StopByIndex(ps, v15, v18, 1, 0, 0);
      }
      request = *BG_GesturePriority_SetupRequest(&result, weaponMap, ps, pmHandler, v15, v18);
      request.startTime = restarted;
      BG_GesturePriority_TryPlay(&request, NULL, NULL);
    }
  }
}

/*
==============
PM_Weapon_PrepareThrowAnimScriptEvent
==============
*/
void PM_Weapon_PrepareThrowAnimScriptEvent(const pmove_t *pm, playerState_s *ps, const Weapon *r_weapon, const bool isAlternate, unsigned int *holdrand)
{
  PlayerAnimScriptEventType GrenadeEvent; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9503, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !holdrand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9504, ASSERT_TYPE_ASSERT, "(holdrand)", (const char *)&queryFormat, "holdrand") )
    __debugbreak();
  if ( BG_GetWeaponType(r_weapon, isAlternate) == WEAPTYPE_GRENADE )
  {
    GrenadeEvent = BG_AnimationMP_GetGrenadeEvent(0);
    BG_AnimScriptEvent(pm->m_bgHandler, ps, GrenadeEvent, 1, 1, holdrand);
  }
}

/*
==============
PM_Weapon_PrepareThrowAxeAnimScriptEvent
==============
*/
void PM_Weapon_PrepareThrowAxeAnimScriptEvent(const pmove_t *pm, playerState_s *ps, const Weapon *r_weapon, const bool isAlternate, unsigned int *holdrand)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9516, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !holdrand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9517, ASSERT_TYPE_ASSERT, "(holdrand)", (const char *)&queryFormat, "holdrand") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && r_weapon->weaponIdx && BG_WeaponGetPlayerAnimType(r_weapon, isAlternate) == 32 && BG_IsThrowingAxe(r_weapon) )
    BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_POWER_START, 1, 1, holdrand);
}

/*
==============
PM_Weapon_ProcessHand
==============
*/
void PM_Weapon_ProcessHand(pmove_t *pm, pml_t *pml, int delayedAction, PlayerHandIndex hand)
{
  __int64 v4; 
  playerState_s *ps; 
  BgWeaponMap *weaponMap; 
  bool v10; 
  const Weapon *CurrentWeaponForPlayer; 
  char *WeaponName; 
  __int64 v13; 
  double MultipleReloadClipPercentage; 
  char *v15; 
  playerState_s *v16; 
  const Weapon *UsedOffHandWeapon; 
  bool v18; 
  bool v19; 
  int v20; 
  Weapon *v21; 
  playerState_s *v22; 
  const Weapon *v23; 
  bool v24; 
  PlayerAnimScriptEventType GrenadeEvent; 
  int v26; 
  playerState_s *v27; 
  const Weapon *v28; 
  bool v29; 
  unsigned __int64 buttons; 
  bool v31; 
  int v32; 
  playerState_s *v33; 
  bool v34; 
  Weapon *v35; 
  unsigned int *holdrand; 
  OffhandUnderbarrelModeData offhandUnderbarrelModeData; 
  int allowAnimReset; 
  Weapon *r_weapon; 
  weapFireType_t WeaponFireType; 
  __int64 v42; 
  char output[1032]; 

  v42 = -2i64;
  v4 = hand;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon_ProcessHand");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18126, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18126, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)PM_Weapon_CheckForRechamber(pm, pml, delayedAction, (PlayerHandIndex)v4) )
    goto LABEL_68;
  weaponMap = pm->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17958, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17959, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  if ( BG_WeaponDoesNotFullyAnimateViewmodelPlayerState(ps, CurrentWeaponForPlayer, v10) )
  {
    WeaponName = BG_GetWeaponName(CurrentWeaponForPlayer, output, 0x400u);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F510D0, 105i64, WeaponName);
  }
  v13 = v4;
  if ( (ps->weapState[v4].weaponTime < 0 || ps->weapState[v4].weaponDelay < 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17971, ASSERT_TYPE_ASSERT, "((ps->weapState[hand].weaponTime >= 0) && (ps->weapState[hand].weaponDelay >= 0))", (const char *)&queryFormat, "(ps->weapState[hand].weaponTime >= 0) && (ps->weapState[hand].weaponDelay >= 0)") )
    __debugbreak();
  if ( BG_GetReloadType(CurrentWeaponForPlayer, v10) == RELOAD_TYPE_MULTIPLE_PERCENTAGE )
  {
    MultipleReloadClipPercentage = BG_GetMultipleReloadClipPercentage(CurrentWeaponForPlayer, v10);
    if ( *(float *)&MultipleReloadClipPercentage <= 0.001 )
    {
      v15 = BG_GetWeaponName(CurrentWeaponForPlayer, output, 0x400u);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F51220, 106i64, v15);
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17484, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
      __debugbreak();
    v16 = pm->ps;
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17487, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !BG_PWF_UseAlternateAsOffhand(v16) && (unsigned int)(v16->weapState[v4].weaponState - 27) <= 2 )
    {
      UsedOffHandWeapon = PM_Weapon_GetUsedOffHandWeapon(pm->weaponMap, v16);
      if ( !BG_WeapHasDetonator(UsedOffHandWeapon, 0) || BG_WeaponAmmo(pm->weaponMap, v16, UsedOffHandWeapon, 0) )
      {
        v18 = BG_UsingAlternate(v16);
        PM_Weapon_PrepareThrowAnimScriptEvent(pm, v16, UsedOffHandWeapon, v18, &pml->holdrand);
      }
      else
      {
        BG_AnimScriptEvent(pm->m_bgHandler, v16, ANIM_ET_DETONATE, 1, 1, &pml->holdrand);
      }
      v13 = v4;
    }
  }
  if ( !(_DWORD)v4 )
    PM_UpdateLeftTriggerAltFireMode(pm, WEAPON_HAND_DEFAULT);
  if ( (unsigned int)(ps->weapState[v4].weaponState - 18) > 3 )
    ps->weapState[v13].weapHandFlags &= 0xFFFFFFEB;
  v19 = PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, (PlayerHandIndex)v4, pm->m_bgHandler);
  v20 = delayedAction;
  if ( delayedAction || !ps->weapState[v4].weaponTime && ps->weapState[v4].weaponDelay == delayedAction || v19 )
  {
    if ( PM_Weapon_ProcessState(pm, pml, delayedAction, (PlayerHandIndex)v4, v19) )
    {
LABEL_67:
      PM_Weapon_SendEndFireEvent(pm, pml, (const PlayerHandIndex)v4);
      goto LABEL_68;
    }
    v21 = (Weapon *)BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    r_weapon = v21;
    if ( !v21->weaponIdx )
    {
      ps->weapState[v4].weaponState = 0;
      goto LABEL_67;
    }
    if ( BG_Weapon_CheckFriendlyFire(ps) )
      goto LABEL_67;
    if ( delayedAction )
    {
      v22 = pm->ps;
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15208, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v23 = BG_GetCurrentWeaponForPlayer(pm->weaponMap, v22);
      if ( !v23->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15211, ASSERT_TYPE_ASSERT, "(currentWeapon.weaponIdx != 0)", (const char *)&queryFormat, "currentWeapon.weaponIdx != WP_NONE") )
        __debugbreak();
      if ( PM_Weapon_IsHoldingOffHand(pm) && !BG_Weapon_OffhandDisablesHold(v23, 0) )
      {
        BG_SetWeaponDelay(pm->weaponMap, v22, WEAPON_HAND_DEFAULT, 1, NULL);
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
        {
          v24 = BG_UsingAlternate(ps);
          if ( BG_GetWeaponType(r_weapon, v24) == WEAPTYPE_GRENADE )
          {
            GrenadeEvent = BG_AnimationMP_GetGrenadeEvent(0);
            BG_AnimScriptEvent(pm->m_bgHandler, ps, GrenadeEvent, 1, 1, &pml->holdrand);
          }
        }
        goto LABEL_67;
      }
      v20 = delayedAction;
      v21 = r_weapon;
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x10u) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
        goto LABEL_67;
LABEL_66:
      PM_Weapon_TransitionToReady(pm, pml, v20, (PlayerHandIndex)v4);
      goto LABEL_67;
    }
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2488, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (unsigned int)v4 >= 2 )
    {
      LODWORD(holdrand) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2489, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", holdrand, 2) )
        __debugbreak();
    }
    if ( BG_IsPlayerFireDisabled(ps) || (ps->weapState[v13].weapHandFlags & 1) != 0 )
      goto LABEL_66;
    if ( (unsigned int)(ps->weapState[0].weaponState - 22) <= 2 && !PM_Weapon_IsMeleeInterruptibleForFire(pm->weaponMap, ps, pm->m_bgHandler) )
      goto LABEL_67;
    if ( BG_IsTurretActive(ps) || BG_IsVehicleActive(ps) )
      goto LABEL_68;
    if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT_ADS|0x80) && BG_IsThrowingAxe(v21) && !BG_GesturePriority_AllowAxeThrow(pm) )
      goto LABEL_67;
    allowAnimReset = 1;
    offhandUnderbarrelModeData.offhandUnderbarrelTempDisabled = BG_PWF_UseAlternateAsOffhand(ps);
    PM_Weapon_TempDisableOffhandUnderbarrelMode(pm->weaponMap, ps, &offhandUnderbarrelModeData);
    v26 = 0;
    if ( offhandUnderbarrelModeData.offhandUnderbarrelTempDisabled )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18279, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
        __debugbreak();
      allowAnimReset = 0;
    }
    v27 = pm->ps;
    if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10599, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10600, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
      __debugbreak();
    v28 = BG_GetCurrentWeaponForPlayer(pm->weaponMap, v27);
    if ( v28->weaponIdx && (v29 = BG_UsingAlternate(v27), WeaponFireType = BG_GetWeaponFireType(v28, v29), !BG_PlayerDualWielding(v27)) && WeaponFireType == WEAPON_FIRETYPE_DOUBLEBARREL_DUALTRIGGER )
    {
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&v27->weapCommon.weapFlags, ACTIVE, 0xCu);
      buttons = pm->cmd.buttons;
      if ( (buttons & 0x20000) != 0 )
      {
        if ( (buttons & 1) != 0 )
        {
          v31 = BG_UsingAlternate(v27);
          if ( BG_GetAmmoInClipForWeapon(v27, v28, v31, WEAPON_HAND_DEFAULT) > 1 )
            GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&v27->weapCommon.weapFlags, ACTIVE, 0xCu);
        }
        v32 = delayedAction;
        PM_Weapon_FireWeapon(pm, delayedAction, pml, WEAPON_HAND_DEFAULT);
        goto LABEL_105;
      }
    }
    else
    {
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&v27->weapCommon.weapFlags, ACTIVE, 0xCu);
    }
    v32 = delayedAction;
LABEL_105:
    PM_Weapon_Charge_StartChargingCheck(pm, pml, (PlayerHandIndex)v4, v32, &pml->holdrand);
    if ( ps->weapState[v4].weaponState == 15 || PM_Weapon_ShouldBeChargingOrFiringShared(pm, v32, (PlayerHandIndex)v4, allowAnimReset, allowAnimReset, 0, 0) )
    {
      PM_Weapon_CheckForPendingAltModeChange(pm, pml);
      if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && offhandUnderbarrelModeData.offhandUnderbarrelTempDisabled && ps->weapState[v4].weaponState == 16 )
        PM_Weapon_ResetShotCount(ps, (const PlayerHandIndex)v4);
      v34 = BG_UsingAlternate(ps);
      v35 = r_weapon;
      if ( BG_IsOffhandWeaponType(r_weapon, v34) )
      {
        if ( BG_IsQASWeaponFire(ps, (PlayerHandIndex)v4) )
          BG_SetQAS(ps, (PlayerHandIndex)v4, QAS_STATE_NONE);
        if ( PM_Weapon_OffHandHasAmmo(ps, pm->weaponMap, v35) )
        {
          PM_Weapon_UseOffHand(pm, pml, v35, 1);
        }
        else
        {
          LOBYTE(v26) = (_DWORD)v4 == 1;
          BG_AddPredictableEventToPlayerstate((const entity_event_t)(v26 + 16), 0, pm->cmd.serverTime, pm->weaponMap, ps);
        }
      }
      else
      {
        PM_Weapon_FireWeapon(pm, v32, pml, (PlayerHandIndex)v4);
      }
      if ( (ps->weapState[v4].weaponTime < 0 || ps->weapState[v4].weaponDelay < 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18344, ASSERT_TYPE_ASSERT, "((ps->weapState[hand].weaponTime >= 0) && (ps->weapState[hand].weaponDelay >= 0))", (const char *)&queryFormat, "(ps->weapState[hand].weaponTime >= 0) && (ps->weapState[hand].weaponDelay >= 0)") )
        __debugbreak();
    }
    else
    {
      PM_Weapon_TransitionToReady(pm, pml, v32, (PlayerHandIndex)v4);
      PM_Weapon_SendEndFireEvent(pm, pml, (const PlayerHandIndex)v4);
      if ( pml == (pml_t *)-100i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3317, ASSERT_TYPE_ASSERT, "(holdrand)", (const char *)&queryFormat, "holdrand") )
        __debugbreak();
      v33 = pm->ps;
      if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3320, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( PM_Weapon_Charge_DoesWantToIdleCharge(pm->weaponMap, v33) && PM_Weapon_Charge_CanStartCharging(pm, (const PlayerHandIndex)v4) )
        PM_Weapon_Charge_EnterChargeState(pm, pml, pm->weaponMap, (PlayerHandIndex)v4, &pml->holdrand);
      PM_Weapon_RestoreOffhandUnderbarrelMode(pm->weaponMap, ps, &offhandUnderbarrelModeData);
    }
    goto LABEL_68;
  }
  if ( ps->weapState[v4].weaponState != 16 )
    goto LABEL_67;
LABEL_68:
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_Weapon_ProcessState
==============
*/
int PM_Weapon_ProcessState(pmove_t *pm, pml_t *pml, int delayedAction, PlayerHandIndex hand, const bool isInInterruptibleState)
{
  __int64 v6; 
  playerState_s *ps; 
  __int64 v10; 
  char *v11; 
  int v12; 
  unsigned int m_mapEntryId; 
  pml_t *v15; 
  pmove_t *v16; 
  playerState_s *v17; 
  const Weapon *CurrentWeaponForPlayer; 
  playerState_s *v19; 
  const Weapon *ViewmodelWeapon; 
  bool v21; 
  bool v22; 
  const Weapon *v23; 
  bool v24; 
  int v25; 
  bool v26; 
  BgWeaponMap *v27; 
  const dvar_t *v28; 
  bool v29; 
  PlayerHandIndex v30; 
  pmove_t *v31; 
  BgWeaponMap *weaponMap; 
  playerState_s *v33; 
  playerState_s *v34; 
  bool v35; 
  const Weapon *v36; 
  WeaponChargeType Type; 
  BgWeaponMap *v38; 
  playerState_s *v39; 
  playerState_s *v40; 
  char v41; 
  __int64 isQuickMelee; 
  __int64 v43; 
  Weapon *r_weapon; 
  char v45; 

  v6 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17544, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17544, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !(_DWORD)v6 && ps->weapState[0].weaponState != 9 )
    PM_Weapon_CheckForPendingAltModeChange(pm, pml);
  v10 = v6;
  v11 = (char *)ps + 80 * v6;
  v12 = *((_DWORD *)v11 + 339);
  switch ( v12 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      if ( v12 == 4 )
        BG_Gesture_StopAll(ps, pm->cmd.serverTime, 1, 150, 0);
      if ( *((int *)v11 + 335) > 0 )
        return 0;
      if ( !(_DWORD)v6 )
      {
        PM_Weapon_FinishWeaponRaise(pm, ps, pml, WEAPON_HAND_DEFAULT);
        return v6 == 0;
      }
      if ( (_DWORD)v6 != 1 || !BG_HasLadderHand(ps) )
        return v6 == 0;
      PM_Weapon_FinishWeaponRaise(pm, ps, pml, WEAPON_HAND_LEFT);
      return 1;
    case 7:
    case 8:
    case 10:
    case 11:
    case 12:
    case 14:
    case 50:
      if ( (_DWORD)v6 )
      {
        if ( (_DWORD)v6 != 1 || !BG_HasLadderHand(ps) )
          return 1;
        BG_Ladder_FinishLeftWeaponDrop(pm, pml);
        return 1;
      }
      else
      {
        PM_Weapon_FinishWeaponChange(pm, pml, ps->weapState[0].weaponState, 0, 0);
        return 1;
      }
    case 9:
      if ( *((_DWORD *)v11 + 335) )
      {
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x27u);
      }
      else
      {
        if ( v12 == 11 )
          BG_Gesture_StopAll(ps, pm->cmd.serverTime, 1, 150, 0);
        if ( !(_DWORD)v6 )
        {
          GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x27u);
          PM_Weapon_FinishWeaponChange(pm, pml, ps->weapState[0].weaponState, 0, 0);
        }
      }
      return BG_Ladder_IsActive(ps);
    case 18:
      return PM_Weapon_FinishReload(pm, pml, delayedAction, (PlayerHandIndex)v6);
    case 19:
      PM_Weapon_FinishReloadStart(pm, delayedAction, (PlayerHandIndex)v6);
      return 1;
    case 20:
    case 21:
      return PM_Weapon_FinishReloadEnd(pm, pml, (PlayerHandIndex)v6, isInInterruptibleState, delayedAction);
    case 22:
    case 23:
      return PM_Weapon_MeleeEnd(pm, pml, delayedAction != 0, (PlayerHandIndex)v6, isInInterruptibleState, 0, 1);
    case 24:
    case 32:
    case 39:
    case 45:
    case 56:
      goto LABEL_166;
    case 25:
      return PM_Weapon_Execution(pm, pml);
    case 26:
      if ( (_DWORD)v6 || !(unsigned __int8)PM_Weapon_OffHandPrepare(pm) )
        return 1;
      m_mapEntryId = ps->weapCommon.offHandHandle.m_mapEntryId;
      if ( !m_mapEntryId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17651, ASSERT_TYPE_ASSERT, "( BgWeaponHandle::INVALID_HANDLE ) != ( eventParm )", "%s != %s\n\t%u, %u", "BgWeaponHandle::INVALID_HANDLE", "eventParm", 0i64, 0) )
        __debugbreak();
      if ( !BgWeaponMap::GetWeapon(pm->weaponMap, ps->weapCommon.offHandHandle)->weaponIdx )
      {
        LODWORD(v43) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17654, ASSERT_TYPE_ASSERT, "( offhandWeapon.weaponIdx ) != ( 0 )", "%s != %s\n\t%i, %i", "offhandWeapon.weaponIdx", "WP_NONE", v43, 0i64) )
          __debugbreak();
      }
      BG_AddPredictableEventToPlayerstate(EV_PREP_OFFHAND, m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, ps);
      return 1;
    case 27:
      if ( (_DWORD)v6 )
        return 1;
      PM_Weapon_OffHandHold(pm, pml, ps);
      return 1;
    case 28:
      if ( (_DWORD)v6 )
        return 1;
      v15 = pml;
      v16 = pm;
      if ( ps->grenadeTimeLeft < 0 )
        goto LABEL_57;
      PM_Weapon_OffHandStart(pm, pml, delayedAction);
      return 1;
    case 29:
      if ( (_DWORD)v6 )
        return 1;
      PM_Weapon_OffHandPrimedStart(pm, pml, delayedAction);
      return 1;
    case 30:
      if ( (_DWORD)v6 )
        return 1;
      v15 = pml;
      v16 = pm;
      if ( delayedAction )
      {
        PM_Weapon_OffHand(pm, pml);
        return 1;
      }
      else
      {
LABEL_57:
        PM_Weapon_OffHandEnd(v16, v15, ps);
        return 1;
      }
    case 31:
      if ( (_DWORD)v6 )
        return 1;
      if ( delayedAction )
      {
        if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12518, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
LABEL_70:
        PM_SendDetonateEvent(pm);
        return 1;
      }
      else
      {
        PM_Weapon_OffHandEnd(pm, pml, ps);
        return 1;
      }
    case 33:
      v17 = pm->ps;
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15424, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, v17);
      if ( delayedAction && CurrentWeaponForPlayer->weaponIdx )
        goto LABEL_70;
      goto LABEL_182;
    case 34:
    case 61:
      Sprint_State_Loop(pm->weaponMap, ps, (PlayerHandIndex)v6);
      return 1;
    case 35:
    case 38:
    case 47:
    case 49:
    case 55:
    case 65:
    case 67:
      return 1;
    case 36:
      v19 = pm->ps;
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16043, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, v19);
      if ( BG_IsSwimWeapon(ViewmodelWeapon) && v19->weapState[v10].weaponTime > 0 )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16049, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
          __debugbreak();
        return 0;
      }
      else
      {
        PM_Weapon_Idle(pm, (PlayerHandIndex)v6);
        if ( BG_IsSwimWeapon(ViewmodelWeapon) && v19->weapCommon.swimForwardState >= SWIMFORWARD_FORWARD )
        {
          if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16057, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
            __debugbreak();
          if ( v19->pm_type < 7 )
            PM_SetNextWeaponAnim(v19, WEAP_SWIM_LOOP, (PlayerHandIndex)v6);
        }
        return 1;
      }
    case 37:
      weaponMap = pm->weaponMap;
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17202, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      *((_DWORD *)v11 + 339) = 38;
      *((_DWORD *)v11 + 335) = 0;
      BG_SetWeaponDelay(weaponMap, ps, (const PlayerHandIndex)v6, 0, NULL);
      if ( ps->pm_type >= 7 )
        return 1;
      PM_SetNextWeaponAnim(ps, WEAP_STUNNED_LOOP, (PlayerHandIndex)v6);
      return 1;
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
      v33 = pm->ps;
      if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16638, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( v33->weapState[v10].weaponTime > 0 )
        return 0;
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v33->pm_flags, ACTIVE, 5u) )
      {
        if ( (v33->mantleState.flags & 0x800) != 0 )
          return 1;
      }
      else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v33->pm_flags, ACTIVE, 6u) )
      {
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&v33->weapCommon.weapFlags, ACTIVE, 0x32u);
        PM_Weapon_FinishWeaponChange(pm, pml, v33->weapState[0].weaponState, 0, 0);
        if ( v33->ladderState.mode != LADDER_MODE_SLIDE )
        {
          v33->weapState[1].weaponState = 47;
          if ( v33->pm_type < 7 )
          {
            PM_SetNextWeaponAnim(v33, WEAP_LADDER_CLIMB, WEAPON_HAND_LEFT);
            return 1;
          }
        }
        return 1;
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v33->pm_flags, ACTIVE, 0x14u) )
      {
        Sprint_State_Raise_Hand(pm, pml, (PlayerHandIndex)v6);
        return 1;
      }
      if ( BG_PWF_UseAlternateAsOffhand(v33) )
      {
        PM_Weapon_ContinueOffhandUnderbarrel(pm, pml);
        return 1;
      }
      PM_Weapon_Idle(pm, (PlayerHandIndex)v6);
      return 1;
    case 46:
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) && !Slide_ShouldReadyWeapon(pm) )
        return 1;
      PM_Weapon_Idle(pm, (PlayerHandIndex)v6);
      return 0;
    case 51:
      return (unsigned __int8)PM_Weapon_Charge_ProcessChargeInState(pm, (PlayerHandIndex)v6, delayedAction);
    case 52:
      return (unsigned __int8)PM_Weapon_Charge_ProcessLoopState(pm, pml, (PlayerHandIndex)v6, delayedAction, &pml->holdrand);
    case 53:
      v34 = pm->ps;
      if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3277, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( (unsigned int)v6 >= 2 )
      {
        LODWORD(isQuickMelee) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3278, ASSERT_TYPE_ASSERT, "(unsigned)( currentHand ) < (unsigned)( NUM_WEAPON_HANDS )", "currentHand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", isQuickMelee, 2) )
          __debugbreak();
      }
      v35 = BG_UsingAlternate(v34);
      v36 = BG_GetCurrentWeaponForPlayer(pm->weaponMap, v34);
      if ( !v36->weaponIdx )
        return 1;
      Type = BG_WeaponCharge_GetType(v36, v35);
      if ( Type )
      {
        if ( Type == PTRDIFF && !PM_Weapon_ShouldBeChargingOrFiringShared(pm, delayedAction, (PlayerHandIndex)v6, 0, 0, 1, 1) )
          return 0;
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3289, ASSERT_TYPE_ASSERT, "(chargeType != WeaponChargeType::NONE)", (const char *)&queryFormat, "chargeType != WeaponChargeType::NONE") )
      {
        __debugbreak();
      }
      if ( BG_CanSprintFire(v34) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v34->pm_flags, ACTIVE, 0x14u) )
      {
        PM_Weapon_Sprint_CombatIdle(pm->weaponMap, v34, (PlayerHandIndex)v6, 0);
        return 1;
      }
      else
      {
LABEL_166:
        v30 = (int)v6;
        v31 = pm;
LABEL_167:
        PM_Weapon_Idle(v31, v30);
        return 1;
      }
    case 54:
      v38 = pm->weaponMap;
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17071, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      ps->weapState[0].weaponState = 55;
      ps->weapState[0].weaponTime = 0;
      BG_SetWeaponDelay(v38, ps, WEAPON_HAND_DEFAULT, 0, NULL);
      PM_StartWeaponAnimBothHands(ps, WEAP_LEAP_LOOP);
      return 1;
    case 57:
    case 58:
    case 59:
      r_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
      v21 = BG_UsingAlternate(ps);
      v22 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u);
      if ( BG_ReloadDisabled(r_weapon, v21) || !PM_WeaponClipEmpty(pm->weaponMap, ps, (PlayerHandIndex)v6) || (v23 = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps), !BG_GetAmmoNotInClip(ps, v23, v21)) || (v45 = 1, v22) )
        v45 = 0;
      v24 = BG_IsUsingOffhandGestureWeapon(ps) || BG_IsUsingScriptedOffhandWeapon(ps) || BG_Offhand_IsPlayingGrenadeGesture(pm->weaponMap, ps);
      if ( BG_PlayerWeaponNeedsRechamber(ps, r_weapon, (PlayerHandIndex)v6) )
        goto LABEL_166;
      v25 = 0;
      if ( v45 || PM_Weapon_ShouldBeFiringOrCharging(pm, delayedAction, WEAPON_HAND_DEFAULT, 1, 1, 1) || PM_Weapon_ShouldBeFiringOrCharging(pm, delayedAction, WEAPON_HAND_LEFT, 1, 1, 1) )
      {
        v26 = 0;
        goto LABEL_118;
      }
      if ( v24 )
      {
        v26 = 1;
LABEL_118:
        PM_Weapon_Sprint_CombatIdle(pm->weaponMap, ps, (PlayerHandIndex)v6, v26);
        goto LABEL_119;
      }
      if ( *((_DWORD *)v11 + 339) == 59 )
      {
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
          PM_Weapon_Sprint_CombatOut(pm, (PlayerHandIndex)v6);
        else
          PM_Weapon_Idle(pm, (PlayerHandIndex)v6);
      }
      else
      {
        v27 = pm->weaponMap;
        if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16143, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v28 = DCONST_DVARINT_perk_sprintFireCombatCooldown;
        if ( !DCONST_DVARINT_perk_sprintFireCombatCooldown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_sprintFireCombatCooldown") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v28);
        *((_DWORD *)v11 + 335) = v28->current.integer;
        BG_SetWeaponDelay(v27, ps, (const PlayerHandIndex)v6, 0, NULL);
        *((_DWORD *)v11 + 339) = 60;
        if ( ps->pm_type < 7 )
          PM_SetNextWeaponAnim(ps, WEAP_IDLE, (PlayerHandIndex)v6);
      }
LABEL_119:
      LOBYTE(v25) = (unsigned int)(*((_DWORD *)v11 + 339) - 58) > 1;
      return v25;
    case 60:
      v29 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u);
      v30 = (int)v6;
      v31 = pm;
      if ( !v29 )
        goto LABEL_167;
      PM_Weapon_Sprint_CombatOut(pm, (PlayerHandIndex)v6);
      return 1;
    case 62:
      v39 = pm->ps;
      if ( (_DWORD)v6 )
        return 1;
      if ( v39->weapState[v10].weaponState != 62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8781, ASSERT_TYPE_ASSERT, "(pm->ps->weapState[hand].weaponState == WEAPON_ANIM_SCRIPTED)", (const char *)&queryFormat, "pm->ps->weapState[hand].weaponState == WEAPON_ANIM_SCRIPTED") )
        __debugbreak();
      if ( v39->weapState[v10].weaponTime > 0 )
        return 1;
      v40 = pm->ps;
      if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8763, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&v40->weapCommon.weapFlags, ACTIVE, 0x2Au);
LABEL_182:
      PM_Weapon_Idle(pm, WEAPON_HAND_DEFAULT);
      return 1;
    case 63:
      PM_Skydive_Freefall_Raise(pm, pml);
      return 1;
    case 64:
      PM_Skydive_Freefall_Idle(pm, pml);
      return 1;
    case 66:
      PM_Skydive_EndDeployParachute(pm, pml);
      return 1;
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
      v41 = ps->skydivePlayerState.flagsExtra[0];
      if ( (v41 & 0x10) != 0 )
        ps->skydivePlayerState.flagsExtra[0] = v41 & 0xEF;
      PM_Skydive_End(pm, pml, 1);
      return 1;
    case 74:
      PM_Skydive_Chute_Cut_High_End(pm, pml);
      return 1;
    case 75:
      PM_Skydive_End(pm, pml, 0);
      return 1;
    case 76:
    case 77:
      return PM_Weapon_ScopeToggleCommon(pm, (PlayerHandIndex)v6, delayedAction, isInInterruptibleState);
    case 78:
      if ( *((int *)v11 + 335) > 0 )
        return 0;
      goto LABEL_166;
    default:
      return 0;
  }
}

/*
==============
PM_Weapon_QueueFireAction
==============
*/
char PM_Weapon_QueueFireAction(pmove_t *pm, const PlayerHandIndex hand, const bool checkForInitialButtonPress)
{
  playerState_s *ps; 
  int v7; 
  bool buttonIsPressedNow; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18642, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18642, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  buttonIsPressedNow = 0;
  v7 = PM_Weapon_CheckForFireOrChargeButton(pm, hand, 0, 1, &buttonIsPressedNow);
  if ( !v7 || checkForInitialButtonPress && !buttonIsPressedNow )
    return 0;
  switch ( v7 )
  {
    case 1:
      BG_SetQAS(ps, hand, QAS_STATE_FIRE);
      return 1;
    case 2:
      BG_SetQAS(ps, hand, QAS_STATE_FIRE_ALT);
      return 1;
    case 3:
      BG_SetQAS(ps, hand, QAS_STATE_BALL_PASS);
      return 1;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18666, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tUnhandled FireButtonCheckResult in PM_Weapon_QueueFireAction", "0") )
        __debugbreak();
      return 1;
  }
}

/*
==============
PM_Weapon_QueueMeleeAttack
==============
*/
void PM_Weapon_QueueMeleeAttack(const pmove_t *pm, int meleeChargeEnt, bool isMeleeActivated, bool isAltMeleeActivated)
{
  playerState_s *ps; 
  const dvar_t *v9; 
  bool v10; 
  int v11; 
  QueuedActionState v12; 
  int outMeleeDamageTime; 
  int outMeleeTime[3]; 
  int outMeleeViewLockTime; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11206, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11206, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = DCONST_DVARBOOL_melee_queueing;
  if ( !DCONST_DVARBOOL_melee_queueing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_queueing") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled && ps->weapState[0].weaponState != 23 )
  {
    v10 = BG_UsingAlternate(ps);
    v11 = BG_PlayerDualWielding(ps);
    BG_GetMeleeTime(pm->weaponMap, ps, v10, v11 == 1, 0, outMeleeTime, &outMeleeDamageTime, &outMeleeViewLockTime);
    if ( outMeleeViewLockTime > 0 )
    {
      if ( isMeleeActivated )
      {
        v12 = QAS_STATE_MELEE;
      }
      else
      {
        if ( !isAltMeleeActivated )
          return;
        v12 = QAS_STATE_MELEE_ALT;
      }
      BG_SetQAS(ps, WEAPON_HAND_DEFAULT, v12);
      ps->meleeChargeEntQueued = truncate_cast<short,int>(meleeChargeEnt);
    }
  }
}

/*
==============
PM_Weapon_ReloadCancel
==============
*/
void PM_Weapon_ReloadCancel(pmove_t *pm, const pml_t *pml)
{
  playerState_s *ps; 
  PlayerHandIndex v4; 
  int WeaponHand; 
  __int64 v6; 
  int *p_weaponState; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7418, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7418, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = WEAPON_HAND_DEFAULT;
  WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
  if ( WeaponHand >= 0 )
  {
    v6 = WeaponHand + 1i64;
    p_weaponState = &ps->weapState[0].weaponState;
    do
    {
      if ( (unsigned int)(*p_weaponState - 18) <= 3 )
      {
        PM_Weapon_Idle(pm, v4);
        if ( ps->pm_type < 7 )
          PM_SetNextWeaponAnim(ps, WEAP_FORCE_IDLE, v4);
      }
      ++v4;
      p_weaponState += 20;
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
PM_Weapon_ReloadDelayedAction
==============
*/
void PM_Weapon_ReloadDelayedAction(pmove_t *pm, PlayerHandIndex hand)
{
  __int64 v2; 
  BgWeaponMap *weaponMap; 
  playerState_s *ps; 
  bool v6; 
  const Weapon *CurrentWeaponForPlayer; 
  int EquippedWeaponIndex; 
  int fmt; 

  v2 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6908, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  weaponMap = pm->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6911, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6914, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1063, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1064, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  EquippedWeaponIndex = BG_GetEquippedWeaponIndex(weaponMap, ps, CurrentWeaponForPlayer);
  if ( (EquippedWeaponIndex < 0 || (playerState_s *)((char *)ps + 16 * EquippedWeaponIndex) == (playerState_s *)-1540i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6919, ASSERT_TYPE_ASSERT, "(BG_GetEquippedWeaponState( weaponMap, ps, r_currentWeapon ))", (const char *)&queryFormat, "BG_GetEquippedWeaponState( weaponMap, ps, r_currentWeapon )") )
    __debugbreak();
  if ( BG_GetEquippedWeaponState(weaponMap, ps, CurrentWeaponForPlayer) && (unsigned int)(BG_GetReloadType(CurrentWeaponForPlayer, v6) - 2) > 1 )
  {
    PM_ReloadClip(pm, (PlayerHandIndex)v2);
    PM_Weapon_ResetShotCount(ps, (const PlayerHandIndex)v2);
    if ( (ps->weapState[v2].weapHandFlags & 0x10) != 0 )
    {
      LOBYTE(fmt) = 1;
      ps->weapState[v2].weapHandFlags &= ~0x10u;
      PM_SetWeaponReloadAddAmmoDelay(pm->weaponMap, ps, pm->m_bgHandler, (PlayerHandIndex)v2, fmt);
    }
  }
}

/*
==============
PM_Weapon_ReloadRechamber
==============
*/
void PM_Weapon_ReloadRechamber(pmove_t *pm, PlayerHandIndex hand, const Weapon *currentWeapon, const bool isAlternate)
{
  __int64 v4; 
  playerState_s *ps; 

  v4 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7084, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7084, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (ps->weapState[v4].weapHandFlags & 8) != 0 )
  {
    PM_WeaponRechamberAmmo(ps, currentWeapon, isAlternate, (PlayerHandIndex)v4);
    ps->weapState[v4].weapHandFlags &= ~8u;
  }
}

/*
==============
PM_Weapon_RequestAltState
==============
*/
void PM_Weapon_RequestAltState(pmove_t *pm, int enableAlt)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4015, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4015, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( enableAlt )
    ps->weapCommon.lastCombatTime = 0;
  else
    ps->weapCommon.lastCombatTime = pm->cmd.serverTime;
}

/*
==============
PM_Weapon_ResetShotCount
==============
*/
void PM_Weapon_ResetShotCount(playerState_s *ps, const PlayerHandIndex handIndex)
{
  __int64 v2; 
  __int64 v4; 

  v2 = handIndex;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6181, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6182, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v4, 2) )
      __debugbreak();
  }
  ps->weapState[v2].weaponShotCount = 0;
  ps->weapCommon.adsRecoilShotCountOffset = 0;
}

/*
==============
PM_Weapon_RestoreOffhandUnderbarrelMode
==============
*/
void PM_Weapon_RestoreOffhandUnderbarrelMode(const BgWeaponMap *weaponMap, playerState_s *ps, const OffhandUnderbarrelModeData *offhandUnderbarrelModeData)
{
  const Weapon *CurrentWeaponForPlayer; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7369, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7370, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !offhandUnderbarrelModeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7371, ASSERT_TYPE_ASSERT, "(offhandUnderbarrelModeData)", (const char *)&queryFormat, "offhandUnderbarrelModeData") )
    __debugbreak();
  if ( offhandUnderbarrelModeData->offhandUnderbarrelTempDisabled )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7375, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(weaponMap, ps, CurrentWeaponForPlayer);
    if ( EquippedWeaponStateNonConst )
    {
      if ( offhandUnderbarrelModeData->restoreInAltMode )
        EquippedWeaponStateNonConst->inAltMode = 1;
      if ( offhandUnderbarrelModeData->restoreUseAlternateFlag )
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u);
      BG_SetPlayerUsingOffhandUnderbarrelWeapon(ps, 1);
    }
  }
}

/*
==============
PM_Weapon_ReturnMainWeaponToIdleForGesture
==============
*/
void PM_Weapon_ReturnMainWeaponToIdleForGesture(pmove_t *pm)
{
  playerState_s *ps; 
  int WeaponHand; 
  PlayerHandIndex v4; 
  __int64 v5; 
  int *v6; 
  int *p_weaponState; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 

  if ( !pm )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13698, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13699, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
  }
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13699, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
  v4 = WEAPON_HAND_DEFAULT;
  if ( WeaponHand < 0 )
  {
LABEL_13:
    if ( WeaponHand >= 0i64 )
    {
      p_weaponState = &ps->weapState[0].weaponState;
      v8 = WeaponHand + 1i64;
      v9 = 0x4000000001C30001i64;
      do
      {
        v10 = *p_weaponState;
        if ( (unsigned int)v10 > 0x3E || !_bittest64(&v9, v10) )
        {
          PM_Weapon_Idle(pm, v4);
          if ( ps->pm_type < 7 )
            PM_SetNextWeaponAnim(ps, WEAP_FORCE_IDLE, v4);
        }
        ++v4;
        p_weaponState += 20;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    v5 = 0i64;
    v6 = &ps->weapState[0].weaponState;
    while ( (unsigned int)(*v6 - 18) > 3 )
    {
      ++v5;
      v6 += 20;
      if ( v5 > WeaponHand )
        goto LABEL_13;
    }
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x25u);
  }
}

/*
==============
PM_Weapon_ScopeToggleCommon
==============
*/
_BOOL8 PM_Weapon_ScopeToggleCommon(pmove_t *pm, PlayerHandIndex currentHand, int delayedAction, const bool isInInterruptibleState)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  __int64 p_weapFlags; 
  bool v10; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17511, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17511, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( delayedAction )
  {
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    if ( ps )
    {
      p_weapFlags = (__int64)&ps->weapCommon.weapFlags;
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) )
        goto LABEL_10;
    }
    else
    {
      p_weapFlags = 1832i64;
    }
    if ( ps && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x1Bu)) )
    {
      v10 = 1;
      goto LABEL_11;
    }
LABEL_10:
    v10 = 0;
LABEL_11:
    if ( !BG_CanHybridToggle(ps, CurrentWeaponForPlayer, v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17517, ASSERT_TYPE_ASSERT, "(BG_CanHybridToggle( ps, weapon, BG_UsingAlternate( ps ) ))", (const char *)&queryFormat, "BG_CanHybridToggle( ps, weapon, BG_UsingAlternate( ps ) )") )
      __debugbreak();
    EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(pm->weaponMap, ps, CurrentWeaponForPlayer);
    EquippedWeaponStateNonConst->hybridScope = !EquippedWeaponStateNonConst->hybridScope;
    ps->pm_flags.m_flags[1] &= ~0x1000000u;
    return 1i64;
  }
  return !isInInterruptibleState;
}

/*
==============
PM_Weapon_SendEndFireEvent
==============
*/
void PM_Weapon_SendEndFireEvent(pmove_t *pm, const pml_t *pml, const PlayerHandIndex hand)
{
  __int64 v3; 
  playerState_s *ps; 

  v3 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18104, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18104, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18105, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( ps->weapState[v3].weaponState == 16 || pml->prevWeaponStates[v3] == 16 )
    PM_AddEvent(pm, EV_FIRE_WEAPON_END);
}

/*
==============
PM_Weapon_SetOffhandUnderbarrelMode
==============
*/
void PM_Weapon_SetOffhandUnderbarrelMode(const BgWeaponMap *weaponMap, playerState_s *ps, int enable)
{
  const Weapon *CurrentWeaponForPlayer; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 864, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 865, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 866, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(weaponMap, ps, CurrentWeaponForPlayer);
  if ( EquippedWeaponStateNonConst )
  {
    EquippedWeaponStateNonConst->inAltMode = enable == 1;
    p_weapFlags = &ps->weapCommon.weapFlags;
    if ( enable )
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x11u);
    else
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 0x11u);
    BG_SetPlayerUsingOffhandUnderbarrelWeapon(ps, enable);
  }
}

/*
==============
PM_Weapon_SetSwimState
==============
*/
void PM_Weapon_SetSwimState(playerState_s *ps, SwimForwardState newState, int newTime)
{
  if ( ps )
  {
    ps->weapCommon.swimForwardState = newState;
    ps->weapCommon.forwardStateTime = newTime;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4007, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    MEMORY[0x10D4] = newState;
    MEMORY[0x10D8] = newTime;
  }
}

/*
==============
PM_Weapon_ShouldBeChargingOrFiringShared
==============
*/
__int64 PM_Weapon_ShouldBeChargingOrFiringShared(pmove_t *pm, int delayedAction, PlayerHandIndex hand, int allowAnimReset, int allowBurstFireContinue, int justTest, int checkForCharging)
{
  __int64 v7; 
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  int v11; 
  int v12; 
  QueuedActionState QueuedButton; 
  QueuedActionState v14; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  bool v16; 
  const WeaponDef *v17; 
  const WeaponDef *v18; 
  unsigned int v19; 
  int v20; 
  bool v21; 
  const Weapon *v22; 
  WeaponChargeType Type; 
  char *v24; 
  int v25; 
  bool v26; 
  const WeaponDef *v27; 
  bool v28; 
  bool v29; 
  char *v30; 
  int v31; 
  BOOL v32; 
  WeaponAnimNumber v33; 
  WeaponAnimNumber v34; 
  Weapon *r_weapon; 
  const WeaponDef *buttonIsPressedNow; 
  int v38; 
  int v39; 

  v39 = allowAnimReset;
  v38 = delayedAction;
  v7 = hand;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon_ShouldBeChargingOrFiringShared");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9182, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9182, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  r_weapon = (Weapon *)CurrentWeaponForPlayer;
  LOBYTE(buttonIsPressedNow) = 0;
  v11 = checkForCharging;
  v12 = PM_Weapon_CheckForFireOrChargeButton(pm, (PlayerHandIndex)v7, checkForCharging != 0, 1, (bool *)&buttonIsPressedNow);
  QueuedButton = PM_Weapon_GetQueuedButton(ps, (const PlayerHandIndex)v7);
  v14 = QueuedButton;
  if ( QueuedButton )
  {
    if ( !justTest && !v11 && QueuedButton == QAS_STATE_FIRE_ALT && BG_IsThrowingAxe(CurrentWeaponForPlayer) && (PM_GetWeaponAltFireButton(pm, CurrentWeaponForPlayer, (PlayerHandIndex)v7, (pm->oldcmd.buttons & 0x8000000000000i64) != 0) & pm->cmd.buttons) != 0 )
      BG_SetQAS(ps, (PlayerHandIndex)v7, QAS_STATE_NONE);
    else
      v12 = v14;
  }
  p_weapFlags = &ps->weapCommon.weapFlags;
  if ( v12 == 3 )
  {
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagStrict(p_weapFlags, FOG_SCALE|PRONE|0x20);
  }
  else if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, GameModeFlagValues::ms_mpValue, 0x36u) )
  {
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagStrict(&ps->weapCommon.weapFlags, FOG_SCALE|PRONE|0x20);
  }
  v16 = BG_UsingAlternate(ps);
  v17 = BG_WeaponDef(CurrentWeaponForPlayer, v16);
  v18 = v17;
  buttonIsPressedNow = v17;
  v19 = 0;
  if ( !v17->disableFiring && !v17->meleeOnly && (!BG_HasLadderHand(ps) || (_DWORD)v7 != 1) && !BG_GameInterface_IsTakedownPending(ps) && !PM_Weapon_Charge_ContinueIdleCharge(pm->weaponMap, ps, v18, (PlayerHandIndex)v7) && !PM_GameInterface_WeaponFireDisabled(pm) )
  {
    v20 = v12 != 0;
    if ( v11 )
    {
      v22 = r_weapon;
    }
    else
    {
      v21 = v16;
      v22 = r_weapon;
      Type = BG_WeaponCharge_GetType(r_weapon, v21);
      v24 = (char *)ps + 80 * v7;
      v25 = *((_DWORD *)v24 + 339);
      if ( v25 != 16 && (Type == HALF || Type == PTRDIFF || Type == SIZE_T) && *((_DWORD *)v24 + 346) == 4095 )
      {
        v20 = 1;
LABEL_48:
        if ( !PM_Demeanor_CanFire(ps, (const PlayerHandIndex)v7, v20) )
          v20 = 0;
        if ( (unsigned int)(ps->weapState[0].weaponState - 26) > 7 )
        {
          v27 = buttonIsPressedNow;
          if ( buttonIsPressedNow->freezeMovementWhenFiring && ps->groundEntityNum == 2047 )
          {
            v20 = 0;
          }
          else if ( v20 )
          {
            if ( BG_CanSprintFire(ps) || !Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_enforce_sprint_out_fire_interrupt_enabled, "killswitch_enforce_sprint_out_fire_interrupt_enabled") || BG_GetSprintOutInterruptRemaining(pm->weaponMap, ps) <= 0 )
            {
              if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_rechamber_fix_enabled, "killswitch_rechamber_fix_enabled") && ps->serverTime < ps->weapState[v7].rechamberNextFireTime )
              {
                v20 = 0;
              }
              else if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_enforce_slide_fire_time_enabled, "killswitch_enforce_slide_fire_time_enabled") && (checkForCharging = 0, Slide_GetEarliestValidStartFireTime(pm, &checkForCharging)) && ps->serverTime < checkForCharging )
              {
                v20 = 0;
              }
              else if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT|0x80) && ps->serverTime - ps->weapCommon.inspectCancelTime < Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_weapon_inspect_cancel_fire_delay_ms, "bg_weapon_inspect_cancel_fire_delay_ms") )
              {
                v20 = 0;
              }
            }
            else
            {
              v20 = 0;
            }
          }
          v28 = allowBurstFireContinue && PM_Weapon_BurstFirePending(pm->weaponMap, ps, (PlayerHandIndex)v7);
          v29 = PM_Weapon_HyperBurstFirePending(pm->weaponMap, ps, (const PlayerHandIndex)v7);
          v30 = (char *)ps + 80 * v7;
          v31 = *((_DWORD *)v30 + 339);
          v32 = v31 == 16 && v38 || v28 || v29;
          if ( v20 || v32 )
          {
            v19 = 1;
          }
          else
          {
            if ( !justTest && v39 )
            {
              if ( v31 == 16 && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0xBu) )
              {
                v33 = WEAP_IDLE;
                if ( PM_Weapon_IsSwimmingForward(pm->weaponMap, ps) )
                {
                  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9395, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
                    __debugbreak();
                  v33 = WEAP_SWIM_LOOP;
                }
                if ( (*((_DWORD *)v30 + 331) & 0xFFFFFF7F) != v33 && ps->pm_type < 7 )
                  PM_SetNextWeaponAnim(ps, v33, (PlayerHandIndex)v7);
              }
              if ( *((_DWORD *)v30 + 339) == 53 )
              {
                v34 = WEAP_IDLE;
                if ( PM_Weapon_IsSwimmingForward(pm->weaponMap, ps) )
                {
                  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9409, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
                    __debugbreak();
                  v34 = WEAP_SWIM_LOOP;
                }
                if ( (*((_DWORD *)v30 + 331) & 0xFFFFFF7F) != v34 && ps->pm_type < 7 )
                  PM_SetNextWeaponAnim(ps, v34, (PlayerHandIndex)v7);
              }
            }
            PM_Weapon_Charge_ContinueIdleCharge(pm->weaponMap, ps, v27, (PlayerHandIndex)v7);
          }
        }
        goto LABEL_104;
      }
      if ( Type == HALF || Type == PTRDIFF || Type == LONG_LONG || Type == MAX_INT || Type == SIZE_T )
      {
        if ( (unsigned int)(v25 - 51) > 2 && v25 != 16 )
          goto LABEL_104;
        if ( (Type == MAX_INT || Type == SIZE_T) && *((int *)v24 + 346) < 4095 )
        {
          v20 = 0;
          goto LABEL_46;
        }
      }
    }
    if ( v12 )
      goto LABEL_48;
LABEL_46:
    v26 = BG_UsingAlternate(ps);
    if ( BG_Weapon_FiresOnWeaponSwitch(v22, v26) )
      v20 = 1;
    goto LABEL_48;
  }
LABEL_104:
  Sys_ProfEndNamedEvent();
  return v19;
}

/*
==============
PM_Weapon_ShouldBeFiringOrCharging
==============
*/
bool PM_Weapon_ShouldBeFiringOrCharging(pmove_t *pm, int delayedAction, PlayerHandIndex hand, int allowAnimReset)
{
  playerState_s *ps; 
  int ShouldBeChargingOrFiringShared; 
  bool v9; 
  bool v10; 
  const Weapon *CurrentWeaponForPlayer; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9442, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9442, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ShouldBeChargingOrFiringShared = PM_Weapon_ShouldBeChargingOrFiringShared(pm, delayedAction, hand, 1, 1, 1, 0);
  v9 = ShouldBeChargingOrFiringShared != 0;
  if ( ShouldBeChargingOrFiringShared )
    return v9;
  v10 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  if ( !BG_IsChargeShotWeapon(CurrentWeaponForPlayer, v10) )
    return v9;
  else
    return v9 | ((unsigned int)PM_Weapon_ShouldBeChargingOrFiringShared(pm, delayedAction, hand, 1, 1, 1, 1) == 1);
}

/*
==============
PM_Weapon_ShouldSwitchWeaponsAfterFire
==============
*/
bool PM_Weapon_ShouldSwitchWeaponsAfterFire(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const Weapon *CurrentWeaponForPlayer; 
  bool v5; 
  int v6; 
  int WeaponHand; 
  PlayerHandIndex v8; 
  int v9; 
  char v10; 
  int v11; 
  bool HasDetonator; 
  AmmoStore result; 
  AmmoStore r_clipIndex; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6104, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6105, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v5 = BG_UsingAlternate(ps);
  v6 = BG_RequiredAmmoPerShot(CurrentWeaponForPlayer, v5);
  WeaponHand = BG_PlayerLastWeaponHand(weaponMap, ps);
  v8 = WEAPON_HAND_DEFAULT;
  v9 = WeaponHand;
  if ( WeaponHand >= 0 )
  {
    do
    {
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      r_clipIndex = *BG_AmmoStoreForWeapon(&result, CurrentWeaponForPlayer, v5);
      if ( BG_GetAmmoInClipForClipType(ps, &r_clipIndex, v8) >= v6 )
        goto LABEL_15;
    }
    while ( ++v8 <= v9 );
  }
  if ( BG_GetAmmoNotInClip(ps, CurrentWeaponForPlayer, v5) && !BG_ReloadDisabled(CurrentWeaponForPlayer, v5) )
  {
LABEL_15:
    v10 = 0;
    goto LABEL_17;
  }
  v10 = 1;
LABEL_17:
  v11 = BG_Weapon_FiresOnWeaponSwitch(CurrentWeaponForPlayer, 0);
  HasDetonator = BG_WeapHasDetonator(CurrentWeaponForPlayer, 0);
  return (v10 || v11) && !HasDetonator;
}

/*
==============
PM_Weapon_SprintCancelsReload
==============
*/
bool PM_Weapon_SprintCancelsReload(const pmove_t *pm)
{
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1147, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  return (pm->cmd.buttons & 0x2000000000i64) != 0;
}

/*
==============
PM_Weapon_Sprint_CombatIdle
==============
*/
void PM_Weapon_Sprint_CombatIdle(const BgWeaponMap *weaponMap, playerState_s *ps, PlayerHandIndex hand, bool isUsingOffhand)
{
  __int64 v4; 
  const dvar_t *v8; 

  v4 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16120, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = DCONST_DVARMPBOOL_movementAnimProto;
  if ( !DCONST_DVARMPBOOL_movementAnimProto && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movementAnimProto") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16121, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DCONST_DVARMPBOOL_movementAnimProto, \"movementAnimProto\" ))", (const char *)&queryFormat, "!DconstMP_GetBool( movementAnimProto )") )
    __debugbreak();
  if ( (unsigned int)(ps->weapState[v4].weaponState - 58) > 1 && ps->pm_type < 7 )
    PM_SetNextWeaponAnim(ps, WEAP_FORCE_IDLE, (PlayerHandIndex)v4);
  ps->weapState[v4].weaponTime = 0;
  BG_SetWeaponDelay(weaponMap, ps, (const PlayerHandIndex)v4, 0, NULL);
  ps->weapState[v4].weaponState = isUsingOffhand + 58;
}

/*
==============
PM_Weapon_Sprint_CombatOut
==============
*/
void PM_Weapon_Sprint_CombatOut(pmove_t *pm, PlayerHandIndex hand)
{
  __int64 v2; 
  playerState_s *ps; 
  bool v5; 
  bool v6; 
  const Weapon *CurrentWeaponForPlayer; 

  v2 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16154, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16154, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = BG_UsingAlternate(ps);
  v6 = BG_PlayerDualWielding(ps) == 1;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  ps->weapState[v2].weaponState = 61;
  ps->weapState[v2].weaponTime = BG_SprintInTime(ps, CurrentWeaponForPlayer, v5, v6);
  BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v2, 0, NULL);
  if ( ps->pm_type < 7 )
    PM_SetNextWeaponAnim(ps, WEAP_SPRINT_IN, (PlayerHandIndex)v2);
}

/*
==============
PM_Weapon_Sprint_ShouldRaiseHand
==============
*/
char PM_Weapon_Sprint_ShouldRaiseHand(pmove_t *pm, PlayerHandIndex hand, const bool shouldBeFiring, const bool isInInterruptibleState)
{
  __int64 v4; 
  playerState_s *ps; 
  int weaponState; 
  const Weapon *CurrentWeaponForPlayer; 
  bool CanSprintFire; 
  PlayerHandIndex v10; 
  int WeaponHand; 
  __int64 v12; 
  __int64 v13; 
  int *p_weaponState; 
  bool v15; 
  bool v16; 
  bool IsInterruptable; 
  bool v19; 

  v4 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16171, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16171, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponState = ps->weapState[v4].weaponState;
  if ( (unsigned int)(weaponState - 51) > 2 )
  {
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    if ( weaponState != 17 && (unsigned int)(weaponState - 34) > 2 && (unsigned int)(weaponState - 57) > 4 && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
    {
      CanSprintFire = BG_CanSprintFire(ps);
      v19 = CanSprintFire;
      v10 = WEAPON_HAND_DEFAULT;
      WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
      v12 = WeaponHand;
      if ( WeaponHand < 0 )
      {
LABEL_26:
        if ( !shouldBeFiring || !CanSprintFire )
        {
          if ( BG_Offhand_HasActiveOffhand(ps) )
            IsInterruptable = BG_Offhand_ActiveOffhandIsInterruptable(pm);
          else
            IsInterruptable = BG_NightVisionAnyGestureIsPlaying(pm->weaponMap, ps, pm->cmd.serverTime) ? BG_NightVisionInterruptable(pm->weaponMap, ps, pm->cmd.serverTime) : BG_GesturePriority_AllowSprintAnims(pm);
          if ( IsInterruptable )
            return 1;
        }
      }
      else
      {
        v13 = 0i64;
        p_weaponState = &ps->weapState[0].weaponState;
        while ( 1 )
        {
          v15 = (unsigned int)(*p_weaponState - 18) <= 3 && !PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, v10, pm->m_bgHandler);
          if ( PM_WeaponClipEmpty(pm->weaponMap, ps, v10) )
          {
            v16 = BG_UsingAlternate(ps);
            BG_GetAmmoNotInClip(ps, CurrentWeaponForPlayer, v16);
          }
          if ( v15 || *p_weaponState == 16 || *p_weaponState == 78 && !PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, v10, pm->m_bgHandler) )
            break;
          ++v10;
          ++v13;
          p_weaponState += 20;
          if ( v13 > v12 )
          {
            CanSprintFire = v19;
            goto LABEL_26;
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
PM_Weapon_StartFiring
==============
*/
void PM_Weapon_StartFiring(pmove_t *pm, int delayedAction, unsigned int *holdrand, PlayerHandIndex hand)
{
  __int64 v7; 
  BgWeaponMap *weaponMap; 
  playerState_s *ps; 
  bool v10; 
  const Weapon *CurrentWeaponForPlayer; 
  int v12; 
  bool v13; 
  unsigned __int16 WeaponFieldTime; 
  char v15; 
  const dvar_t *v16; 
  int weaponTime; 
  float v18; 
  float v19; 
  float v20; 
  const char *fmt; 
  int v22; 
  const char *v23; 
  double v24; 
  int fireDelay; 
  float outNormalSpeedScale; 
  int fireTime; 
  float outAdsTransOutSpeedMs; 
  float outAdsTransInSpeedMs; 
  float outSniperSpeedScale; 

  v7 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9605, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  weaponMap = pm->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9608, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9611, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = BG_UsingAlternate(ps);
  LOBYTE(outSniperSpeedScale) = BG_PlayerDualWielding(ps) == 1;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  if ( !CurrentWeaponForPlayer->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9617, ASSERT_TYPE_ASSERT, "(currentWeapon.weaponIdx != 0)", (const char *)&queryFormat, "currentWeapon.weaponIdx != WP_NONE") )
    __debugbreak();
  BG_WeaponDef(CurrentWeaponForPlayer, v10);
  if ( !BG_IsOffhandWeaponType(CurrentWeaponForPlayer, v10) )
  {
    BG_GetADSTransTimes(weaponMap, ps, CurrentWeaponForPlayer, v10, &outAdsTransInSpeedMs, &outAdsTransOutSpeedMs);
    v15 = LOBYTE(outSniperSpeedScale);
    BG_GetFireTimeWithHand(weaponMap, ps, (const PlayerHandIndex)v7, 1, CurrentWeaponForPlayer, v10, SLOBYTE(outSniperSpeedScale), ps->weapState[v7].weaponShotCount, &fireTime, &fireDelay);
    fireDelay = BG_Gesture_GetFireDelayTime(ps, (const PlayerHandIndex)v7, v15, fireDelay, pm->cmd.serverTime);
    BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v7, fireDelay, "Fire Delay");
    ps->weapState[v7].weaponTime = fireTime;
    v16 = DCONST_DVARBOOL_bg_weaponSubtractFrameTimeRemainder;
    if ( !DCONST_DVARBOOL_bg_weaponSubtractFrameTimeRemainder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponSubtractFrameTimeRemainder") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.enabled )
    {
      weaponTime = ps->weapState[v7].weaponTime;
      if ( weaponTime > 0 )
        ps->weapState[v7].weaponTime = I_clamp(weaponTime - ps->weapState[v7].weaponFrameTimeRemainder, 1, weaponTime);
    }
    if ( !BG_IsADSFireOnly(CurrentWeaponForPlayer, v10) )
      goto LABEL_43;
    v18 = outAdsTransInSpeedMs;
    if ( outAdsTransInSpeedMs <= 0.0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9667, ASSERT_TYPE_ASSERT, "( ( adsTransInTime > 0.0f ) )", "( adsTransInTime ) = %g", outAdsTransInSpeedMs) )
        __debugbreak();
      v18 = outAdsTransInSpeedMs;
    }
    v19 = 1.0 / v18;
    if ( !BG_HasPerk(&ps->perks, 0x11u) )
    {
LABEL_42:
      v24 = BG_WeaponADSFractionAffectedByReload(weaponMap, ps);
      BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v7, (int)(float)((float)(1.0 - *(float *)&v24) * v19), "ADS Transition Time");
LABEL_43:
      PM_GameInterface_AddWeaponDelay(pm, (const PlayerHandIndex)v7);
      goto LABEL_44;
    }
    outNormalSpeedScale = FLOAT_1_0;
    outSniperSpeedScale = FLOAT_1_0;
    BG_GetQuickDrawPerkMultipliers(&outNormalSpeedScale, &outSniperSpeedScale);
    if ( BG_GetWeaponClass(CurrentWeaponForPlayer, v10) == WEAPCLASS_SNIPER )
    {
      v20 = outSniperSpeedScale;
      if ( outSniperSpeedScale <= 0.0 )
      {
        fmt = "( quickDrawSpeedScaleSniper ) = %g";
        v22 = 9678;
        v23 = "( ( quickDrawSpeedScaleSniper > 0.0f ) )";
        goto LABEL_39;
      }
    }
    else
    {
      v20 = outNormalSpeedScale;
      if ( outNormalSpeedScale <= 0.0 )
      {
        fmt = "( quickDrawSpeedScaleNormal ) = %g";
        v22 = 9683;
        v23 = "( ( quickDrawSpeedScaleNormal > 0.0f ) )";
LABEL_39:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", v22, ASSERT_TYPE_ASSERT, v23, fmt, v20) )
          __debugbreak();
      }
    }
    v19 = v19 / v20;
    goto LABEL_42;
  }
  if ( delayedAction )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      PM_Weapon_FireWeaponAnimScriptEvent(pm, ps, CurrentWeaponForPlayer, v10, holdrand);
  }
  else
  {
    if ( BG_GetAmmoInClipForWeapon(ps, CurrentWeaponForPlayer, v10, (PlayerHandIndex)v7) )
    {
      v12 = BG_WeaponFuseTime(CurrentWeaponForPlayer, v10);
      v13 = ps->pm_type < 7;
      ps->grenadeTimeLeft = v12;
      if ( v13 )
        PM_SetNextWeaponAnim(ps, WEAP_HOLD_FIRE, (PlayerHandIndex)v7);
      BG_AddPredictableEventToPlayerstate(EV_PULLBACK_WEAPON, ps->weapCommon.weaponHandle.m_mapEntryId, pm->cmd.serverTime, weaponMap, ps);
    }
    WeaponFieldTime = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, v10, 0, 16i64);
    BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v7, WeaponFieldTime, "Hold Fire Time");
    ps->weapState[v7].weaponTime = 0;
    G_DebugPlayerAnimScript_Print(ps->clientNum, "end weapon (start fire)\n");
  }
LABEL_44:
  if ( !(_DWORD)v7 && (unsigned int)(ps->weapState[0].weaponState - 1) <= 4 && (unsigned int)(ps->weapState[1].weaponState - 1) <= 4 )
  {
    ps->weapState[1].weaponState = 0;
    ps->weapState[1].weaponTime = 0;
  }
  ps->weapState[v7].weaponState = 16;
  PM_SetProneMovementOverride(ps);
}

/*
==============
PM_Weapon_StartUseOffHand
==============
*/
void PM_Weapon_StartUseOffHand(pmove_t *pm, pml_t *pml, OffhandSlot offHandSlot)
{
  __int16 v3; 
  playerState_s *ps; 
  entity_event_t v8; 
  bool v9; 
  int serverTime; 
  const BgHandler *m_bgHandler; 
  BgWeaponMap *weaponMap; 
  entity_event_t v13; 
  unsigned __int16 weaponIdx; 
  Weapon offHand; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14159, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14160, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14162, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14162, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_PWF_UseAlternateAsOffhand(ps) )
    PM_Weapon_SetOffhandUnderbarrelMode(pm->weaponMap, ps, 0);
  offHand = *PM_Weapon_GetOffHandWeaponForSlot(pm->weaponMap, ps, offHandSlot);
  if ( v3 && PM_Weapon_OffHandHasAmmo(ps, pm->weaponMap, &offHand) )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && BG_WeaponBlocksProne(&offHand, 0) )
    {
      v8 = EV_PRONE_PREVENTS_OFFHAND_HINT;
LABEL_35:
      PM_AddEvent(pm, v8);
      return;
    }
    PM_Weapon_UseOffHand(pm, pml, &offHand, 0);
    v9 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du);
    serverTime = pm->cmd.serverTime;
    m_bgHandler = pm->m_bgHandler;
    weaponMap = pm->weaponMap;
    if ( v9 )
      Slide_PlayOrStopGesture(ps, weaponMap, m_bgHandler, serverTime, SLIDEGESTUREREQUEST_STOP);
    else
      Slide_PlayOrStopGesture(ps, weaponMap, m_bgHandler, serverTime, SLIDEGESTUREREQUEST_STOP_NOW);
    return;
  }
  if ( PM_GameInterface_SendEmptyOffhandEvent(pm, offHandSlot) )
    return;
  if ( offHandSlot == OFFHAND_SLOT_SECONDARY )
  {
    v13 = EV_EMPTY_OFFHAND_SECONDARY;
  }
  else
  {
    if ( offHandSlot != OFFHAND_SLOT_PRIMARY )
      goto LABEL_29;
    v13 = EV_EMPTY_OFFHAND_PRIMARY;
  }
  PM_AddEvent(pm, v13);
LABEL_29:
  weaponIdx = BG_GetFirstEquippedOffhandBySlot(pm->weaponMap, pm->ps, offHandSlot)->weaponIdx;
  if ( offHandSlot == OFFHAND_SLOT_SECONDARY )
  {
    BG_AddPredictableEventToPlayerstate(EV_NO_SECONDARY_GRENADE_HINT, weaponIdx == 0, pm->cmd.serverTime, pm->weaponMap, pm->ps);
    return;
  }
  if ( offHandSlot == OFFHAND_SLOT_PRIMARY )
  {
    BG_AddPredictableEventToPlayerstate(EV_NO_PRIMARY_GRENADE_HINT, weaponIdx == 0, pm->cmd.serverTime, pm->weaponMap, pm->ps);
    return;
  }
  if ( weaponIdx )
  {
    v8 = EV_NO_SPECIAL_HINT;
    goto LABEL_35;
  }
}

/*
==============
PM_Weapon_StartUseOffHand_Underbarrel
==============
*/
void PM_Weapon_StartUseOffHand_Underbarrel(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v6; 
  int weaponState; 
  bool v8; 
  const Weapon *ViewmodelWeapon; 
  bool v10; 
  unsigned int m_mapEntryId; 
  __int64 v12; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13494, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13495, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13497, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13497, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13498, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v6 = PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, pm->m_bgHandler);
  weaponState = ps->weapState[0].weaponState;
  if ( (unsigned int)(weaponState - 18) > 3 || v6 )
  {
    if ( weaponState == 78 )
    {
      v8 = !v6;
    }
    else
    {
      if ( ((unsigned int)(weaponState - 16) <= 1 || (unsigned int)(weaponState - 22) <= 2) && !v6 || (unsigned int)(weaponState - 1) <= 4 && !v6 || (unsigned int)(weaponState - 7) <= 5 )
        return;
      v8 = weaponState == 50;
    }
    if ( !v8 && BG_OffhandUnderbarrelInitAllowed(ps) )
    {
      ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
      if ( BG_HasUnderbarrelWeapon(ViewmodelWeapon) )
      {
        v10 = BG_PWF_UseAlternateAsOffhand(ps) && ps->weapState[0].weaponState == 32;
        if ( BG_IsCursorHintEntityCleared(ps) && (!CurrentWeaponForPlayer->weaponIdx || v10) )
        {
          if ( (unsigned __int8)PM_Weapon_OffHandPrepare(pm) )
          {
            m_mapEntryId = ps->weapCommon.offHandHandle.m_mapEntryId;
            if ( !m_mapEntryId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13518, ASSERT_TYPE_ASSERT, "( BgWeaponHandle::INVALID_HANDLE ) != ( eventParm )", "%s != %s\n\t%u, %u", "BgWeaponHandle::INVALID_HANDLE", "eventParm", 0i64, 0) )
              __debugbreak();
            if ( !BgWeaponMap::GetWeapon(pm->weaponMap, ps->weapCommon.offHandHandle)->weaponIdx )
            {
              LODWORD(v12) = 0;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13521, ASSERT_TYPE_ASSERT, "( offhandWeapon.weaponIdx ) != ( 0 )", "%s != %s\n\t%i, %i", "offhandWeapon.weaponIdx", "WP_NONE", v12, 0i64) )
                __debugbreak();
            }
            BG_AddPredictableEventToPlayerstate(EV_PREP_OFFHAND, m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, ps);
          }
        }
        else
        {
          PM_Weapon_OffHandInit(pm, pml, 0);
        }
      }
      else
      {
        BG_SetPlayerUsingOffhandUnderbarrelWeapon(ps, 1);
      }
    }
  }
}

/*
==============
PM_Weapon_StateJustFinished
==============
*/
_BOOL8 PM_Weapon_StateJustFinished(const playerState_s *ps, const weaponstate_t weaponState, const PlayerHandIndex hand)
{
  __int64 v3; 

  v3 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 686, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->weapState[v3].weaponState == weaponState && ps->weapState[v3].weaponTime <= 0;
}

/*
==============
PM_Weapon_TempDisableOffhandUnderbarrelMode
==============
*/
void PM_Weapon_TempDisableOffhandUnderbarrelMode(const BgWeaponMap *weaponMap, playerState_s *ps, OffhandUnderbarrelModeData *offhandUnderbarrelModeData)
{
  const Weapon *CurrentWeaponForPlayer; 
  const PlayerEquippedWeaponState *EquippedWeaponState; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7337, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7338, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !offhandUnderbarrelModeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7339, ASSERT_TYPE_ASSERT, "(offhandUnderbarrelModeData)", (const char *)&queryFormat, "offhandUnderbarrelModeData") )
    __debugbreak();
  if ( offhandUnderbarrelModeData->offhandUnderbarrelTempDisabled )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7344, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    EquippedWeaponState = BG_GetEquippedWeaponState(weaponMap, ps, CurrentWeaponForPlayer);
    if ( EquippedWeaponState )
    {
      offhandUnderbarrelModeData->restoreInAltMode = EquippedWeaponState->inAltMode;
      offhandUnderbarrelModeData->restoreUseAlternateFlag = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u);
      PM_Weapon_SetOffhandUnderbarrelMode(weaponMap, ps, 0);
    }
    else
    {
      *(_WORD *)&offhandUnderbarrelModeData->offhandUnderbarrelTempDisabled = 0;
      offhandUnderbarrelModeData->restoreUseAlternateFlag = 0;
    }
  }
}

/*
==============
PM_Weapon_TransitionToReady
==============
*/
void PM_Weapon_TransitionToReady(pmove_t *pm, pml_t *pml, int delayedAction, PlayerHandIndex hand)
{
  __int64 v4; 
  playerState_s *ps; 
  char *v9; 
  int v10; 
  bool v11; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v13; 
  int v14; 

  v4 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18014, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm", -2i64) )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18015, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon_TransitionToReady");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18018, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18018, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = (char *)ps + 80 * v4;
  v10 = *((_DWORD *)v9 + 339);
  if ( (unsigned int)(v10 - 58) > 1 && v10 != 35 && v10 != 49 && *((int *)v9 + 335) <= 0 && !(unsigned __int8)PM_Weapon_CheckForSprint(pm, pml, 1, (const PlayerHandIndex)v4, delayedAction) )
  {
    v11 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u);
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    v13 = BG_UsingAlternate(ps);
    if ( v11 && BG_CanSprintFire(ps) )
    {
      *((_DWORD *)v9 + 339) = 58;
      goto LABEL_37;
    }
    if ( BG_Ladder_CanAim(pm->weaponMap, ps) && BG_HasLadderHand(ps) && !(_DWORD)v4 )
    {
LABEL_24:
      *((_DWORD *)v9 + 339) = 48;
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_LADDER_AIM, 0, 1, &pml->holdrand);
      goto LABEL_37;
    }
    if ( BG_Ladder_CanClimb(ps) )
    {
      if ( BG_IsLadderWeapon(CurrentWeaponForPlayer, 0) && !(_DWORD)v4 )
        goto LABEL_24;
      *((_DWORD *)v9 + 339) = 47;
      if ( ps->pm_type < 7 )
        PM_SetNextWeaponAnim(ps, WEAP_LADDER_CLIMB, (PlayerHandIndex)v4);
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_LADDER_CLIMB, 0, 1, &pml->holdrand);
    }
    else if ( BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v13) == PTRDIFF && *((_DWORD *)v9 + 339) == 16 )
    {
      PM_Weapon_Charge_TransitionToOut(pm, pml, pm->weaponMap, (PlayerHandIndex)v4);
    }
    else
    {
      v14 = 0;
      if ( *((_DWORD *)v9 + 339) == 74 )
        v14 = 65;
      *((_DWORD *)v9 + 339) = v14;
    }
  }
LABEL_37:
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_Weapon_TriggeredOffHand
==============
*/
char PM_Weapon_TriggeredOffHand(const pmove_t *pm, OffhandSlot *outOffHandSlot)
{
  playerState_s *ps; 
  bool v5; 
  unsigned __int64 buttons; 
  unsigned __int64 v8; 

  if ( !pm )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13410, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13412, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
  }
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13412, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER|0x80);
  buttons = pm->cmd.buttons;
  if ( !v5 && (buttons & 0x100000000i64) != 0 && (pm->oldcmd.buttons & 0x100000000i64) == 0 )
  {
    *outOffHandSlot = OFFHAND_SLOT_SPECIAL;
    return 1;
  }
  if ( (buttons & 0x200000000000000i64) != 0 && (pm->oldcmd.buttons & 0x200000000000000i64) == 0 )
  {
    if ( (buttons & 0x1000) == 0 )
    {
      if ( (buttons & 0x2000) != 0 )
      {
LABEL_17:
        *outOffHandSlot = OFFHAND_SLOT_SECONDARY;
        return 1;
      }
      return 1;
    }
LABEL_21:
    *outOffHandSlot = OFFHAND_SLOT_PRIMARY;
    return 1;
  }
  if ( (buttons & 0x1000) != 0 && (pm->oldcmd.buttons & 0x1000) == 0 && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x29u) )
    goto LABEL_21;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x24u) )
  {
    *outOffHandSlot = OFFHAND_SLOT_SCRIPTED;
    return 1;
  }
  if ( PM_GameInterface_Weapon_ButtonJustPressed(pm, outOffHandSlot) )
    return 1;
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x19u) )
  {
    v8 = pm->cmd.buttons;
    if ( (v8 & 0x2000) != 0 && (pm->oldcmd.buttons & 0x2000) == 0 )
      goto LABEL_17;
    if ( (v8 & 0x80000000) != 0 && (pm->oldcmd.buttons & 0x80000000) == 0 )
    {
      *outOffHandSlot = OFFHAND_SLOT_TAUNT;
      return 1;
    }
  }
  return 0;
}

/*
==============
PM_Weapon_UpdateAltFireFlags
==============
*/
void PM_Weapon_UpdateAltFireFlags(pmove_t *pm, const PlayerHandIndex hand, const Weapon *r_currentWeapon, const bool fired)
{
  __int64 v4; 
  playerState_s *ps; 
  bool v9; 
  int v10; 
  QueuedActionState QueuedButton; 
  bool v12; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  bool buttonIsPressedNow; 

  v4 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2797, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2797, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)(ps->weapState[v4].weaponState - 51) > 2 )
  {
    v9 = BG_UseLeftTriggerAltFireMode(r_currentWeapon);
    v10 = PM_Weapon_CheckForFireOrChargeButton(pm, (PlayerHandIndex)v4, !fired, 1, &buttonIsPressedNow);
    QueuedButton = PM_Weapon_GetQueuedButton(ps, (const PlayerHandIndex)v4);
    if ( QueuedButton )
      v10 = QueuedButton;
    if ( !v9 )
      goto LABEL_16;
    if ( PM_Weapon_BurstFirePending(pm->weaponMap, ps, (PlayerHandIndex)v4) )
    {
      if ( !BG_IsWeaponLastShotAltFire(ps, r_currentWeapon) )
        goto LABEL_17;
      goto LABEL_13;
    }
    if ( v10 == 2 )
    {
LABEL_13:
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Bu);
      goto LABEL_17;
    }
    if ( v10 == 1 )
LABEL_16:
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Bu);
LABEL_17:
    if ( fired )
    {
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Cu);
      v12 = BG_UsingAlternate(ps);
      p_weapFlags = &ps->weapCommon.weapFlags;
      if ( v12 )
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x1Du);
      else
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 0x1Du);
    }
  }
}

/*
==============
PM_Weapon_UpdateQueuedFireAction
==============
*/
void PM_Weapon_UpdateQueuedFireAction(pmove_t *pm, const PlayerHandIndex hand, const int delayedAction)
{
  __int64 v4; 
  playerState_s *ps; 
  const Weapon *ViewmodelWeapon; 
  bool v7; 
  int *v8; 
  unsigned __int64 v9; 
  weapFireType_t WeaponFireType; 
  const HyperBurstInfo *HyperBurstInfo; 
  bool v12; 
  bool v13; 
  __int64 v14; 
  bool v15; 
  __int64 v16; 
  char v17; 
  bool v18; 
  __int64 v19; 
  bool IsThrowingAxe; 
  unsigned __int8 v21; 

  v4 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18675, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18675, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
  v21 = 0;
  v7 = BG_UsingAlternate(ps);
  v8 = &ps->commandTime + 20 * v4;
  v9 = v8[339];
  IsThrowingAxe = BG_IsThrowingAxe(ViewmodelWeapon);
  if ( !IsThrowingAxe && BG_IsChargeShotWeapon(ViewmodelWeapon, v7) )
  {
    if ( BG_WeaponCharge_GetType(ViewmodelWeapon, v7) != SIZE_T )
      return;
    if ( (unsigned int)(v9 - 51) <= 2 )
    {
      PM_Weapon_QueueFireAction(pm, (const PlayerHandIndex)v4, 0);
      return;
    }
    v21 = 1;
  }
  WeaponFireType = BG_GetWeaponFireType(ViewmodelWeapon, v7);
  HyperBurstInfo = BG_GetHyperBurstInfo(ViewmodelWeapon, v7);
  if ( !HyperBurstInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18712, ASSERT_TYPE_ASSERT, "(hyperBurst)", (const char *)&queryFormat, "hyperBurst") )
    __debugbreak();
  v12 = WeaponFireType == WEAPON_FIRETYPE_BURST || HyperBurstInfo->enabled;
  v13 = Slide_CurrrentSlideStatePreventsFiring(pm);
  v15 = 0;
  if ( (unsigned int)v9 <= 0x3D )
  {
    v14 = 0x2200001400000000i64;
    if ( _bittest64(&v14, v9) )
      v15 = 1;
  }
  if ( !v21 )
  {
    if ( (unsigned int)v9 > 0x3B )
      goto LABEL_27;
    v19 = 0xC01000000000001i64;
    if ( !_bittest64(&v19, v9) || v8[335] <= 0 )
      goto LABEL_27;
LABEL_35:
    v17 = 1;
    goto LABEL_28;
  }
  if ( (unsigned int)v9 <= 0x3B )
  {
    v16 = 0xC01400000000001i64;
    if ( _bittest64(&v16, v9) )
      goto LABEL_35;
  }
LABEL_27:
  v17 = 0;
LABEL_28:
  v18 = !v12 && (_DWORD)v9 == 16 && !v8[336];
  if ( v17 || v18 )
  {
    if ( !v15 && !v13 )
      goto LABEL_45;
  }
  else if ( !v15 && !v13 )
  {
    if ( (_DWORD)v9 != 17 )
      return;
LABEL_45:
    if ( WeaponFireType == WEAPON_FIRETYPE_FULLAUTO )
      return;
  }
  if ( (unsigned int)PM_Weapon_ShouldBeChargingOrFiringShared(pm, delayedAction, (PlayerHandIndex)v4, 1, 1, 1, v21) )
  {
    PM_Weapon_QueueFireAction(pm, (const PlayerHandIndex)v4, 1);
    if ( IsThrowingAxe && BG_GetQAS(ps, (PlayerHandIndex)v4) == QAS_STATE_FIRE )
      v8[349] = 0;
  }
}

/*
==============
PM_Weapon_UpdateSwimForwardState
==============
*/
void PM_Weapon_UpdateSwimForwardState(pmove_t *pm)
{
  const dvar_t *v1; 
  float value; 
  const dvar_t *v4; 
  float v5; 
  const dvar_t *v6; 
  int integer; 
  const dvar_t *v8; 
  int v9; 
  const dvar_t *v10; 
  int v11; 
  playerState_s *ps; 
  int weaponState; 
  int serverTime; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  int v21; 
  BOOL v22; 
  SwimForwardState swimForwardState; 
  int v24; 
  SwimForwardState v25; 
  __int64 v26; 
  __int64 v27; 
  vec3_t forward; 

  v1 = DCONST_DVARFLT_player_swimForwardMinSpeed;
  if ( !DCONST_DVARFLT_player_swimForwardMinSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimForwardMinSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  value = v1->current.value;
  v4 = DCONST_DVARFLT_player_swimForwardMinAngle;
  if ( !DCONST_DVARFLT_player_swimForwardMinAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimForwardMinAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.value;
  v6 = DCONST_DVARINT_player_swimForwardWarmupTime;
  if ( !DCONST_DVARINT_player_swimForwardWarmupTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimForwardWarmupTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  v8 = DCONST_DVARMPINT_player_swimForwardSettleTime;
  if ( !DCONST_DVARMPINT_player_swimForwardSettleTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimForwardSettleTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.integer;
  v10 = DCONST_DVARINT_player_sprintForwardMinimum;
  if ( !DCONST_DVARINT_player_sprintForwardMinimum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintForwardMinimum") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.integer;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4119, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4119, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponState = ps->weapState[0].weaponState;
  serverTime = pm->cmd.serverTime;
  if ( (unsigned int)(weaponState - 34) <= 2 )
  {
    if ( weaponState == 34 )
    {
      PM_Weapon_SetSwimState(ps, SWIMFORWARD_NONE, serverTime);
    }
    else if ( weaponState == 35 )
    {
      PM_Weapon_SetSwimState(ps, SWIMFORWARD_FORWARD, serverTime);
    }
    return;
  }
  AngleVectors(&ps->viewangles, &forward, NULL, NULL);
  v15 = ps->velocity.v[1];
  v16 = ps->velocity.v[0];
  v17 = ps->velocity.v[2];
  v18 = (float)((float)(v16 * forward.v[0]) + (float)(v15 * forward.v[1])) + (float)(v17 * forward.v[2]);
  if ( v18 < COERCE_FLOAT(LODWORD(value) ^ _xmm) )
    goto LABEL_42;
  v19 = fsqrt((float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v17 * v17));
  v20 = 0.0;
  if ( v19 > 0.0 )
    v20 = acosf_0(v18 / v19) * 57.295776;
  v21 = 1;
  v22 = v18 > value && v20 < v5;
  swimForwardState = ps->weapCommon.swimForwardState;
  switch ( swimForwardState )
  {
    case SWIMFORWARD_NONE:
      if ( !v22 )
        return;
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) && (pm->cmd.buttons & 2) == 0 && pm->cmd.forwardmove > v11 )
        v21 = 2;
      v25 = v21;
      goto LABEL_54;
    case SWIMFORWARD_WARMUP:
      if ( !v22 )
      {
LABEL_42:
        v24 = 0;
        v25 = SWIMFORWARD_NONE;
LABEL_55:
        PM_Weapon_SetSwimState(ps, v25, v24);
        return;
      }
      if ( serverTime - ps->weapCommon.forwardStateTime <= integer )
        return;
      goto LABEL_47;
    case SWIMFORWARD_FORWARD:
      if ( v22 )
        return;
      v25 = SWIMFORWARD_SETTLE;
      goto LABEL_54;
    case SWIMFORWARD_SETTLE:
      if ( !v22 )
      {
        if ( serverTime - ps->weapCommon.forwardStateTime <= v9 )
          return;
        goto LABEL_42;
      }
LABEL_47:
      v25 = SWIMFORWARD_FORWARD;
LABEL_54:
      v24 = serverTime;
      goto LABEL_55;
  }
  LODWORD(v27) = ps->weapCommon.forwardStateTime;
  LODWORD(v26) = ps->weapCommon.swimForwardState;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4199, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown SwimForwardState: %d, forwardStateTime: %d", v26, v27) )
    __debugbreak();
}

/*
==============
PM_Weapon_UseOffHand
==============
*/
void PM_Weapon_UseOffHand(pmove_t *pm, pml_t *pml, const Weapon *offHand, int isPrimary)
{
  playerState_s *ps; 
  char v9; 
  const WeaponDef *v10; 
  const char *WeaponName; 
  int EquippedWeaponIndex; 
  __int64 v13; 
  const char *v14; 
  const char *v15; 
  const Weapon *CurrentWeaponForPlayer; 
  unsigned int m_mapEntryId; 
  entity_event_t v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  char output[1024]; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14039, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14040, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14042, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14042, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = 0;
  if ( offHand->weaponIdx && PM_Weapon_OffHandHasAmmo(ps, pm->weaponMap, offHand) )
  {
    v10 = BG_WeaponDef(offHand, 0);
    if ( v10->offhandClass == OFFHAND_CLASS_NONE )
    {
      WeaponName = BG_GetWeaponName(offHand, output, 0x400u);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14060, ASSERT_TYPE_ASSERT, "(weapDef->offhandClass != OFFHAND_CLASS_NONE)", "%s\n\toffHand = %s\n", "weapDef->offhandClass != OFFHAND_CLASS_NONE", WeaponName) )
        __debugbreak();
    }
    BG_AssertOffhandIndexOrNone(offHand);
    if ( !BG_WeaponIsClipOnly(offHand, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14064, ASSERT_TYPE_ASSERT, "(BG_WeaponIsClipOnly( offHand, false ))", (const char *)&queryFormat, "BG_WeaponIsClipOnly( offHand, false )") )
      __debugbreak();
    if ( !v10->freezeMovementWhenFiring || ps->groundEntityNum != 2047 )
    {
      *(_QWORD *)&ps->weapCommon.offhandGestureFlags = 0i64;
      if ( ps->grenadeTimeLeft < 0 )
        ps->grenadeTimeLeft = 0;
      ps->weapCommon.offhandUseTime = pm->cmd.serverTime;
      EquippedWeaponIndex = BG_GetEquippedWeaponIndex(pm->weaponMap, ps, offHand);
      v13 = EquippedWeaponIndex;
      if ( (unsigned int)EquippedWeaponIndex >= 0xF )
      {
        LODWORD(v20) = 15;
        LODWORD(v19) = EquippedWeaponIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14085, ASSERT_TYPE_ASSERT, "(unsigned)( equipIdx ) < (unsigned)( 15 )", "equipIdx doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      BG_SetOffHandWeaponForPlayer(pm->weaponMap, ps, offHand);
      if ( !BG_IsOffhandWeaponType(offHand, 0) )
      {
        v14 = BG_GetWeaponName(offHand, output, 0x400u);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14091, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "[%s] Only grenades/items are currently supported for off hand use\n", v14) )
          __debugbreak();
      }
      if ( v10->offhandClass == OFFHAND_CLASS_NONE )
      {
        v15 = BG_GetWeaponName(offHand, output, 0x400u);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14096, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "[%s] No offhand class set\n", v15) )
          __debugbreak();
      }
      CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
      if ( BG_WeapHasDetonator(offHand, 0) && (!BG_WeaponAmmo(pm->weaponMap, ps, offHand, 0) || (pm->cmd.buttons & 0x200000000000000i64) != 0) )
        GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&ps->otherFlags, ACTIVE, 0x1Eu);
      if ( BG_WeaponDoesNotFullyAnimateViewmodelPlayerState(ps, offHand, 0) )
      {
        if ( BG_OffhandIsUnderbarrelWeapon(pm->weaponMap, ps, pm->cmd.buttons) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14117, ASSERT_TYPE_ASSERT, "(!BG_OffhandIsUnderbarrelWeapon( pm->weaponMap, ps, pm->cmd.buttons ))", (const char *)&queryFormat, "!BG_OffhandIsUnderbarrelWeapon( pm->weaponMap, ps, pm->cmd.buttons )") )
          __debugbreak();
        v9 = PM_Weapon_OffHand_NonAnimated(pm, pml);
      }
      else if ( BG_IsCursorHintEntityCleared(ps) && (!CurrentWeaponForPlayer->weaponIdx || ps->weapState[0].weaponState == 32) )
      {
        v9 = PM_Weapon_OffHandPrepare(pm);
      }
      else if ( isPrimary )
      {
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Eu);
        v9 = PM_Weapon_OffHandPrepare(pm);
      }
      else
      {
        PM_Weapon_OffHandInit(pm, pml, 0);
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
        PM_SetSprintRestore(pm, ps, 1, 0, 3.4028235e38);
      m_mapEntryId = ps->weaponsEquipped[v13].m_mapEntryId;
      if ( !m_mapEntryId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14141, ASSERT_TYPE_ASSERT, "( BgWeaponHandle::INVALID_HANDLE ) != ( eventParm )", "%s != %s\n\t%u, %u", "BgWeaponHandle::INVALID_HANDLE", "eventParm", 0i64, 0) )
        __debugbreak();
      if ( !BgWeaponMap::GetWeapon(pm->weaponMap, ps->weaponsEquipped[v13])->weaponIdx )
      {
        LODWORD(v21) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14144, ASSERT_TYPE_ASSERT, "( testWeapon.weaponIdx ) != ( 0 )", "%s != %s\n\t%i, %i", "testWeapon.weaponIdx", "WP_NONE", v21, 0i64) )
          __debugbreak();
      }
      v18 = EV_SWITCH_AND_PREP_OFFHAND;
      if ( !v9 )
        v18 = EV_SWITCH_OFFHAND;
      BG_AddPredictableEventToPlayerstate(v18, m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, ps);
    }
  }
}

/*
==============
PM_Weapon_UsesBurstCooldown
==============
*/
bool PM_Weapon_UsesBurstCooldown(const Weapon *weapon, const playerState_s *ps)
{
  bool v5; 

  if ( !weapon->weaponIdx )
    return 0;
  if ( BG_UseLeftTriggerAltFireMode(weapon) )
    v5 = ps && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Du);
  else
    v5 = BG_UsingAlternate(ps);
  return BG_GetWeaponFireType(weapon, v5) == WEAPON_FIRETYPE_BURST;
}

/*
==============
PM_Weapon_ValidateFireRate
==============
*/
bool PM_Weapon_ValidateFireRate(pmove_t *pm, const PlayerHandIndex hand, const Weapon *currentWeapon, const bool isAlternate)
{
  __int64 v4; 
  playerState_s *ps; 
  const dvar_t *v7; 
  __int64 v9; 

  v4 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9719, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9719, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9720, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v9, 2) )
      __debugbreak();
  }
  v7 = DVARBOOL_jitter_mod_protection_enabled;
  if ( !DVARBOOL_jitter_mod_protection_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jitter_mod_protection_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  return !v7->current.enabled || !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) || ps->weapState[v4].nextFireTimeCounter <= 0;
}

/*
==============
PM_Weapon_ValidateJitterModExploit
==============
*/
void PM_Weapon_ValidateJitterModExploit(pmove_t *pm, const Weapon *weapon, const bool isAlternate, const PlayerHandIndex hand)
{
  playerState_s *ps; 
  int v8; 
  bool v9; 
  bool v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  const BgHandler *m_bgHandler; 
  int started; 
  const BgHandler *v16; 
  unsigned int v17; 
  int v18; 
  int v19; 
  int v20; 
  const char *WeaponName; 
  char *fmt; 
  __int64 shotCount; 
  int *fireTime; 
  int v25; 
  PlayerHandIndex v26; 
  int v27; 
  int fireDelay; 
  char output[1024]; 

  v26 = hand;
  if ( pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
  {
    ps = pm->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 7258, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v8 = BG_PlayerDualWielding(ps);
    v9 = v8 == 1;
    BG_GetFireTime(pm->weaponMap, ps, weapon, isAlternate, v8 == 1, 0, &v25, &fireDelay);
    v10 = v8 == 1;
    if ( v8 == 1 )
      v11 = BG_RechamberTimeOneHanded(ps, weapon, isAlternate, v10);
    else
      v11 = BG_RechamberTime(ps, weapon, isAlternate, v10);
    v12 = v26;
    v13 = v11;
    m_bgHandler = pm->m_bgHandler;
    v27 = v11 + v25;
    started = BG_ReloadStartInterruptTime(ps, m_bgHandler, v26, weapon, isAlternate, v9);
    v16 = pm->m_bgHandler;
    v17 = started;
    if ( ps->weapState[v12].weaponState == 21 )
      v18 = BG_ReloadEndRechamberInterruptTime(ps, v16, (const PlayerHandIndex)v12, weapon, isAlternate, v9);
    else
      v18 = BG_ReloadEndInterruptTime(ps, v16, (const PlayerHandIndex)v12, weapon, isAlternate, v9);
    v19 = v18;
    if ( (int)(v18 + v17) < v27 )
    {
      v20 = v25;
      WeaponName = BG_GetWeaponName(weapon, output, 0x400u);
      LODWORD(fireTime) = v13;
      LODWORD(shotCount) = v20;
      LODWORD(fmt) = v19;
      Com_PrintWarning(34, "JITTER MOD EXPLOIT: Weapon \"%s\"\nhas an accelerated fire cycle via interrupting reload. Please tune state timers.\n(reloadStartInterrupt:%ims + reloadEndInterrupt:%ims) < (fireTime:%ims + rechamberTime:%ims)\n", WeaponName, v17, fmt, shotCount, fireTime);
    }
  }
}

/*
==============
PM_Weapon_WeaponTimeAdjust
==============
*/
_BOOL8 PM_Weapon_WeaponTimeAdjust(pmove_t *pm, pml_t *pml, PlayerHandIndex hand)
{
  __int64 v4; 
  playerState_s *ps; 
  int v7; 
  int weaponStartingKickTime; 
  int v9; 
  int weaponEndingKickTime; 
  int v11; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v13; 
  int v14; 
  int nextFireTimeCounter; 
  int v16; 
  bool v17; 
  const HyperBurstInfo *HyperBurstInfo; 
  int weaponTime; 
  int weaponState; 
  int v21; 
  int v22; 
  bool v25; 
  bool v26; 
  bool v28; 
  const WeaponDef *v29; 
  int v30; 
  bool v31; 
  int v32; 
  bool v33; 
  char v34; 
  char v35; 
  weapFireType_t WeaponFireType; 
  char v37; 
  const Weapon *RequestedWeapon; 
  const Weapon *BestLadderWeapon; 
  const Weapon *v40; 
  LadderDrop DropType; 
  char v42; 
  bool v43; 
  int v44; 
  int v45; 
  PlayerAnimScriptEventType v46; 
  int weaponDelay; 
  int v48; 
  int v49; 
  unsigned int *holdrand; 
  char v51; 
  char v52; 
  bool v53; 
  int v54; 
  BOOL v55; 
  int AmmoInClipForWeapon; 
  const HyperBurstInfo *v57; 
  bool buttonIsPressedNow; 
  pml_t *pmla; 
  bool v60; 
  int v61; 

  pmla = pml;
  v4 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8142, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8142, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v7 = 0;
  weaponStartingKickTime = ps->weapState[v4].weaponStartingKickTime;
  if ( weaponStartingKickTime > 0 )
  {
    v9 = weaponStartingKickTime - pml->msec;
    if ( v9 > 0 )
      v7 = v9;
    ps->weapState[v4].weaponStartingKickTime = v7;
    v7 = 0;
  }
  weaponEndingKickTime = ps->weapState[v4].weaponEndingKickTime;
  if ( weaponEndingKickTime > 0 )
  {
    v11 = weaponEndingKickTime - pml->msec;
    if ( v11 > 0 )
      v7 = v11;
    ps->weapState[v4].weaponEndingKickTime = v7;
  }
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v13 = PM_Weapon_UsesBurstCooldown(CurrentWeaponForPlayer, ps);
  v53 = v13;
  v14 = WeaponTimeModifiers(ps, pm->m_bgHandler, pml->msec, (PlayerHandIndex)v4, CurrentWeaponForPlayer);
  nextFireTimeCounter = ps->weapState[v4].nextFireTimeCounter;
  v54 = v14;
  ps->weapState[v4].weaponFrameTimeRemainder = 0;
  if ( nextFireTimeCounter )
  {
    v16 = nextFireTimeCounter - v14;
    if ( v16 < 0 )
      v16 = 0;
    ps->weapState[v4].nextFireTimeCounter = v16;
  }
  if ( BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) )
    v17 = ps && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Du);
  else
    v17 = BG_UsingAlternate(ps);
  v60 = v17;
  HyperBurstInfo = BG_GetHyperBurstInfo(CurrentWeaponForPlayer, v17);
  v57 = HyperBurstInfo;
  if ( !HyperBurstInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8170, ASSERT_TYPE_ASSERT, "(hyperBurstInfo)", (const char *)&queryFormat, "hyperBurstInfo") )
      __debugbreak();
    HyperBurstInfo = NULL;
  }
  weaponTime = ps->weapState[v4].weaponTime;
  if ( !weaponTime )
  {
    if ( v13 || HyperBurstInfo->enabled || !BG_IsWeaponRecoilDelayed(pm, ps) )
      PM_Weapon_ResetShotCount(ps, (const PlayerHandIndex)v4);
    goto LABEL_158;
  }
  weaponState = ps->weapState[v4].weaponState;
  v21 = v54;
  v61 = weaponState;
  if ( weaponState == 16 && v54 >= weaponTime )
    ps->weapState[v4].weaponFrameTimeRemainder = v54 - weaponTime;
  v22 = weaponTime - v54;
  ps->weapState[v4].weaponTime = v22;
  if ( v22 <= 0 )
  {
    if ( weaponState == 16 && v53 && !PM_Weapon_BurstFirePending(pm->weaponMap, ps, (PlayerHandIndex)v4) )
    {
      BG_GetBurstFireCooldown(CurrentWeaponForPlayer, v60);
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm3, 1 }
      PM_Weapon_FireCooldownCommon(pm, pml, CurrentWeaponForPlayer, (const PlayerHandIndex)v4, (int)*(float *)&_XMM4);
      v25 = BG_UsingAlternate(ps);
      v26 = !BG_BurstFireIsAuto(CurrentWeaponForPlayer, v25);
      goto LABEL_94;
    }
    if ( BG_PWF_UseAlternateAsOffhand(ps) && weaponState == 16 )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8202, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
        __debugbreak();
      if ( PM_WeaponClipEmpty(pm->weaponMap, ps, (PlayerHandIndex)v4) && BG_GetAmmoNotInClip(ps, CurrentWeaponForPlayer, 1) )
      {
        PM_BeginWeaponReload(ps, pm, pml, (PlayerHandIndex)v4);
      }
      else
      {
        PM_Weapon_ResetShotCount(ps, (const PlayerHandIndex)v4);
        PM_Weapon_OffHandEnd(pm, pml, ps);
      }
      return 0i64;
    }
    v28 = BG_UsingAlternate(ps);
    v29 = BG_WeaponDef(CurrentWeaponForPlayer, v28);
    v30 = BG_ShotLimitReached(ps, CurrentWeaponForPlayer, (PlayerHandIndex)v4);
    v31 = BG_UsingAlternate(ps);
    v55 = BG_IsOffhandWeaponType(CurrentWeaponForPlayer, v31) && v29->holdButtonToThrow;
    buttonIsPressedNow = 0;
    v32 = PM_Weapon_CheckForFireOrChargeButton(pm, (PlayerHandIndex)v4, 0, 0, &buttonIsPressedNow);
    if ( (ps->weapState[v4].weapHandFlags & 2) != 0 && !buttonIsPressedNow )
      v30 = 1;
    if ( v60 && BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) )
      v33 = v32 == 2;
    else
      v33 = ((v32 - 1) & 0xFFFFFFFD) == 0;
    v34 = v33;
    if ( PM_UseLTriggerForDoubleBarrel(ps, CurrentWeaponForPlayer) )
    {
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0xBu) && v34 )
      {
        v30 = 0;
      }
      else if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0xBu) && (pm->cmd.buttons & 0x20000) != 0 )
      {
        v30 = 0;
      }
      if ( (pm->cmd.buttons & 0x20000) != 0 )
        v34 = 1;
    }
    AmmoInClipForWeapon = BG_GetAmmoInClipForWeapon(ps, CurrentWeaponForPlayer, v60, (PlayerHandIndex)v4);
    buttonIsPressedNow = BG_IsQASWeaponFire(ps, (PlayerHandIndex)v4);
    if ( v61 == 16 && v57->enabled )
    {
      v35 = 0;
      WeaponFireType = BG_GetWeaponFireType(CurrentWeaponForPlayer, v60);
      if ( WeaponFireType )
      {
        if ( WeaponFireType != WEAPON_FIRETYPE_SINGLESHOT && WeaponFireType != WEAPON_FIRETYPE_DOUBLEBARREL && WeaponFireType != WEAPON_FIRETYPE_DOUBLEBARREL_DUALTRIGGER )
        {
          LODWORD(holdrand) = WeaponFireType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8291, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled weapon fire type %d in PM_Weapon_WeaponTimeAdjust for a hyper burst weapon.", holdrand) )
            __debugbreak();
          goto LABEL_76;
        }
        if ( ps->weapState[v4].weaponShotCount < 2 )
          goto LABEL_76;
      }
      else
      {
        if ( v34 || buttonIsPressedNow || AmmoInClipForWeapon <= 0 || ps->weapState[v4].weaponShotCount < 2 )
          goto LABEL_76;
        v35 = 1;
      }
      PM_Weapon_FireCooldownCommon(pm, pmla, CurrentWeaponForPlayer, (const PlayerHandIndex)v4, v57->coolDownMs);
      v26 = v35 == 0;
LABEL_94:
      if ( !v26 )
        PM_Weapon_ResetShotCount(ps, (const PlayerHandIndex)v4);
      return 0i64;
    }
LABEL_76:
    LOBYTE(v61) = BG_Ladder_IsActive(ps);
    v37 = v61;
    RequestedWeapon = PM_GetRequestedWeapon(pm);
    if ( !memcmp_0(CurrentWeaponForPlayer, RequestedWeapon, 0x3Cui64) || !PM_Weapon_InValidChangeWeaponState(pm, 0) || (v51 = 1, v37) )
      v51 = 0;
    BestLadderWeapon = BG_GetBestLadderWeapon(pm->weaponMap, ps);
    v40 = BestLadderWeapon;
    if ( !(_BYTE)v61 || (v52 = 1, !memcmp_0(CurrentWeaponForPlayer, BestLadderWeapon, 0x3Cui64)) )
      v52 = 0;
    DropType = BG_Ladder_GetDropType(pm, v40, CurrentWeaponForPlayer);
    v42 = v61;
    v43 = (_BYTE)v61 && BG_Ladder_IsHandLadderDropping(DropType, (const PlayerHandIndex)v4);
    if ( !buttonIsPressedNow )
    {
      v44 = ps->weapState[v4].weaponState;
      if ( (unsigned int)(v44 - 63) > 0xC && (unsigned int)(v44 - 26) > 6 && (v30 || v55) && v34 && !v51 && !v52 && !v43 && AmmoInClipForWeapon > 0 )
      {
        ps->weapState[v4].weaponTime = 1;
        if ( (unsigned int)(v44 - 18) <= 3 )
        {
          G_DebugPlayerAnimScript_Print(ps->clientNum, "end weapon (timeout)\n");
          ps->weapState[v4].weaponTime = 0;
          PM_Weapon_ResetShotCount(ps, (const PlayerHandIndex)v4);
          v21 = v54;
          goto LABEL_159;
        }
        if ( v44 == 17 )
        {
          v45 = 0;
          v21 = v54;
          if ( ps->weapState[v4].weaponDelay - v54 > 0 )
            v45 = ps->weapState[v4].weaponDelay - v54;
          if ( v45 )
          {
            PM_Weapon_FinishRechamber(ps, CurrentWeaponForPlayer, v60, (PlayerHandIndex)v4, 0);
            v21 = v54;
          }
          goto LABEL_159;
        }
        if ( v44 == 16 || (unsigned int)(v44 - 22) <= 2 )
        {
          if ( (ps->weapState[v4].weapAnim & 0xFFFFFF7F) != 0 && ps->pm_type < 7 )
            PM_SetNextWeaponAnim(ps, WEAP_IDLE, (PlayerHandIndex)v4);
          if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) && BG_CanSprintFire(ps) )
          {
            v21 = v54;
            ps->weapState[v4].weaponState = 58;
            goto LABEL_159;
          }
          if ( BG_Ladder_CanAim(pm->weaponMap, ps) && !(_DWORD)v4 )
            goto LABEL_120;
          if ( BG_Ladder_CanClimb(ps) )
            goto LABEL_123;
        }
        else
        {
          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_ladderEnablePausedAfterFiringWeaponStateTimeout, "ladderEnablePausedAfterFiringWeaponStateTimeout") || !v42 )
            goto LABEL_128;
          if ( (BG_Ladder_CanAim(pm->weaponMap, ps) || v30) && !(_DWORD)v4 )
          {
LABEL_120:
            ps->weapState[v4].weaponState = 48;
            v46 = ANIM_ET_LADDER_AIM;
LABEL_121:
            BG_AnimScriptEvent(pm->m_bgHandler, ps, v46, 0, 1, &pmla->holdrand);
            v21 = v54;
            goto LABEL_159;
          }
          if ( BG_Ladder_CanClimb(ps) )
          {
LABEL_123:
            ps->weapState[v4].weaponState = 47;
            v46 = ANIM_ET_LADDER_CLIMB;
            goto LABEL_121;
          }
          if ( (ps->weapState[v4].weapAnim & 0xFFFFFF7F) != 0 && ps->pm_type < 7 )
            PM_SetNextWeaponAnim(ps, WEAP_IDLE, (PlayerHandIndex)v4);
        }
        ps->weapState[v4].weaponState = 0;
LABEL_128:
        v21 = v54;
        goto LABEL_159;
      }
    }
    G_DebugPlayerAnimScript_Print(ps->clientNum, "end weapon (timeout)\n");
    if ( v57->enabled )
    {
      if ( (PM_Weapon_HyperBurstFirePending(pm->weaponMap, ps, (const PlayerHandIndex)v4) || v34 || buttonIsPressedNow) && !v30 )
        goto LABEL_153;
    }
    else
    {
      if ( v34 && !buttonIsPressedNow || PM_Weapon_BurstFirePending(pm->weaponMap, ps, (PlayerHandIndex)v4) )
        goto LABEL_153;
      if ( !v53 && BG_IsWeaponRecoilDelayed(pm, ps) )
        goto LABEL_152;
    }
    PM_Weapon_ResetShotCount(ps, (const PlayerHandIndex)v4);
LABEL_152:
    ps->weapState[v4].weaponFrameTimeRemainder = 0;
LABEL_153:
    ps->weapState[v4].weaponTime = 0;
LABEL_158:
    v21 = v54;
  }
LABEL_159:
  weaponDelay = ps->weapState[v4].weaponDelay;
  if ( !weaponDelay )
    return 0i64;
  v48 = weaponDelay - v21;
  v49 = 0;
  if ( v48 > 0 )
    v49 = v48;
  BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v4, v49, NULL);
  return !ps->weapState[v4].weaponDelay;
}

/*
==============
CompressedMeleeAnimData::Set
==============
*/
void CompressedMeleeAnimData::Set(CompressedMeleeAnimData *this, int animType, int variant, bool isAlternate)
{
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 

  if ( (unsigned int)animType >= 8 )
  {
    v14 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10627, ASSERT_TYPE_ASSERT, "(unsigned)( animType ) < (unsigned)( static_cast<int>(MeleeAnimType::COUNT) )", "animType doesn't index static_cast<int>(MeleeAnimType::COUNT)\n\t%i not in [0, %i)", animType, v14) )
      __debugbreak();
  }
  if ( (unsigned int)variant >= 4 )
  {
    LODWORD(v13) = 4;
    LODWORD(v11) = variant;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10628, ASSERT_TYPE_ASSERT, "(unsigned)( variant ) < (unsigned)( (4) )", "variant doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  v8 = isAlternate | (2 * (variant & 3 | (4 * (animType & 7))));
  this->m_packed = v8;
  v8 >>= 1;
  v9 = v8 & 3;
  v10 = v8 >> 2;
  v19 = v9;
  v20 = v10;
  if ( v9 >= 4 )
  {
    LODWORD(v13) = 4;
    LODWORD(v11) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10665, ASSERT_TYPE_ASSERT, "(unsigned)( *outVariant ) < (unsigned)( (4) )", "*outVariant doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
    v10 = v20;
    v9 = v19;
  }
  if ( animType != v10 )
  {
    v18 = v10;
    v16 = animType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10640, ASSERT_TYPE_ASSERT, "( animType ) == ( unpackAnimType )", "%s == %s\n\t%i, %i", "animType", "unpackAnimType", v16, v18) )
      __debugbreak();
    v9 = v19;
  }
  if ( variant != v9 )
  {
    LODWORD(v17) = v9;
    LODWORD(v15) = variant;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10641, ASSERT_TYPE_ASSERT, "( variant ) == ( unpackVariant )", "%s == %s\n\t%i, %i", "variant", "unpackVariant", v15, v17) )
      __debugbreak();
  }
  if ( isAlternate != isAlternate )
  {
    LODWORD(v17) = isAlternate;
    LODWORD(v15) = isAlternate;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10642, ASSERT_TYPE_ASSERT, "( static_cast<int>(isAlternate) ) == ( static_cast<int>(unpackIsAlternate) )", "%s == %s\n\t%i, %i", "static_cast<int>(isAlternate)", "static_cast<int>(unpackIsAlternate)", v15, v17) )
      __debugbreak();
  }
}

/*
==============
DelayedActionState::SetDelayedAction
==============
*/
void DelayedActionState::SetDelayedAction(DelayedActionState *this, const playerState_s *ps, const PlayerHandIndex hand, const int isDelayedAction)
{
  __int64 v4; 
  __int64 v8; 

  v4 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 112, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 113, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>(hand) ) < (unsigned)( NUM_WEAPON_HANDS )", "static_cast<int>(hand) doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v8, 2) )
      __debugbreak();
  }
  this->m_delayedAction[v4] = isDelayedAction;
  this->m_delayedActionOriginalState[v4] = ps->weapState[v4].weaponState;
}

/*
==============
Sprint_State_Loop
==============
*/
void Sprint_State_Loop(const BgWeaponMap *weaponMap, playerState_s *ps, PlayerHandIndex hand)
{
  __int64 v3; 
  WeaponAnimNumber v6; 
  __int64 v7; 
  const dvar_t *v8; 
  unsigned int v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 

  v3 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15933, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = WEAP_IDLE;
  v7 = v3;
  ps->weapState[v7].weaponState = 35;
  ps->weapState[v7].weaponTime = 0;
  BG_SetWeaponDelay(weaponMap, ps, (const PlayerHandIndex)v3, 0, NULL);
  v8 = DCONST_DVARMPBOOL_movementAnimProto;
  if ( !DCONST_DVARMPBOOL_movementAnimProto && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movementAnimProto") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    v9 = ps->weapState[0].weapAnim & 0xFFFFFF7F;
    v10 = DCONST_DVARMPBOOL_movementAnimProtoDefaultIdle;
    if ( !DCONST_DVARMPBOOL_movementAnimProtoDefaultIdle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movementAnimProtoDefaultIdle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled || v9 == 15 || v9 - 10 <= 2 )
    {
      v11 = DVARBOOL_killswitch_movement_anim_force_idle_fix_enabled;
      if ( !DVARBOOL_killswitch_movement_anim_force_idle_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_movement_anim_force_idle_fix_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v11->current.enabled && v9 == 1 )
        v6 = WEAP_FORCE_IDLE;
      if ( ps->pm_type < 7 )
        PM_SetNextWeaponAnim(ps, v6, (PlayerHandIndex)v3);
    }
  }
  else if ( ps->pm_type < 7 )
  {
    PM_SetNextWeaponAnim(ps, WEAP_SPRINT_LOOP, (PlayerHandIndex)v3);
  }
}

/*
==============
Sprint_State_Raise_Hand
==============
*/
void Sprint_State_Raise_Hand(pmove_t *pm, pml_t *pml, PlayerHandIndex hand)
{
  __int64 v3; 
  playerState_s *ps; 
  char *v7; 
  const dvar_t *v8; 
  bool v9; 
  bool v10; 
  const Weapon *CurrentWeaponForPlayer; 

  v3 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15965, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15965, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15966, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  v7 = (char *)ps + 80 * v3;
  if ( *((_DWORD *)v7 + 339) == 9 && *((int *)v7 + 335) > 0 )
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x27u);
  PM_Weapon_CheckForPendingAltModeChange(pm, pml);
  BG_SetQAS(ps, (PlayerHandIndex)v3, QAS_STATE_NONE);
  v8 = DCONST_DVARMPBOOL_movementAnimProto;
  if ( !DCONST_DVARMPBOOL_movementAnimProto && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movementAnimProto") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    Sprint_State_Loop(pm->weaponMap, ps, (PlayerHandIndex)v3);
  }
  else
  {
    v9 = BG_UsingAlternate(ps);
    v10 = BG_PlayerDualWielding(ps) == 1;
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    *((_DWORD *)v7 + 339) = 34;
    *((_DWORD *)v7 + 335) = BG_SprintInTime(ps, CurrentWeaponForPlayer, v9, v10);
    BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v3, 0, NULL);
    if ( ps->pm_type < 7 )
      PM_SetNextWeaponAnim(ps, WEAP_SPRINT_IN, (PlayerHandIndex)v3);
  }
}

/*
==============
WeaponTimeModifiers
==============
*/
__int64 WeaponTimeModifiers(playerState_s *ps, const BgHandler *pmoveHandler, int msec, PlayerHandIndex hand, const Weapon *weapon)
{
  __int64 v5; 
  bool v9; 
  int v10; 
  bool IsUsingFastReloadStateTimer; 
  int ammoInClipBeforeReload; 
  bool v13; 
  const BgWeaponMap *v14; 
  double ReloadTimeScale; 

  v5 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8056, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = BG_UsingAlternate(ps);
  if ( (unsigned int)(ps->weapState[v5].weaponState - 18) > 3 )
    return (unsigned int)msec;
  v10 = BG_PlayerDualWielding(ps);
  IsUsingFastReloadStateTimer = BG_IsUsingFastReloadStateTimer(ps, pmoveHandler, (const PlayerHandIndex)v5, weapon, v9, v10 != 0);
  ammoInClipBeforeReload = ps->weapState[v5].ammoInClipBeforeReload;
  v13 = IsUsingFastReloadStateTimer;
  v14 = pmoveHandler->GetWeaponMap(pmoveHandler);
  ReloadTimeScale = BG_GetReloadTimeScale(v14, ps, weapon, v9, ammoInClipBeforeReload, v13);
  if ( *(float *)&ReloadTimeScale <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8067, ASSERT_TYPE_ASSERT, "(reloadTimeScale > 0.0f)", (const char *)&queryFormat, "reloadTimeScale > 0.0f") )
    __debugbreak();
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM1;
}

