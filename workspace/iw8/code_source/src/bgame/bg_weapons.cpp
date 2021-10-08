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
  bool *v8; 
  char v16; 
  char v17; 
  float outAdsInToOutAccelSec; 

  v8 = outIsFinishedAccel;
  if ( !outIsFinishedAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1693, ASSERT_TYPE_ASSERT, "( outIsFinishedAccel ) != ( nullptr )", "%s != %s\n\t%p, %p", "outIsFinishedAccel", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( ps->weapCommon.fWeaponPosFracMomentum )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@41a00000; maxAbsValueSize
      vmovaps [rsp+78h+var_28], xmm6
    }
    *(double *)&_XMM0 = MSG_UnpackSignedFloat(ps->weapCommon.fWeaponPosFracChangeFracVel, *(float *)&_XMM1, 9u);
    __asm { vmovaps xmm6, xmm0 }
    BG_GetADSAccel(weaponMap, ps, weapon, isAlternate, (float *)&outIsFinishedAccel, &outAdsInToOutAccelSec);
    __asm
    {
      vmovss  xmm3, [rsp+78h+adsVelocityTarget]
      vcomiss xmm3, xmm6
    }
    if ( v16 | v17 )
    {
      __asm
      {
        vmovss  xmm0, [rsp+78h+arg_8]
        vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
      }
    }
    else
    {
      __asm { vmovss  xmm2, dword ptr [rsp+78h+outIsFinishedAccel] }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vmulss  xmm2, xmm1, xmm2
      vaddss  xmm4, xmm2, xmm6
      vmovaps xmm6, [rsp+78h+var_28]
    }
    if ( v16 | v17 )
      __asm { vmaxss  xmm0, xmm4, xmm3 }
    else
      __asm { vminss  xmm0, xmm4, xmm3 }
    __asm { vucomiss xmm0, xmm3 }
    *v8 = !!(v16 | v17);
  }
  else
  {
    __asm { vmovss  xmm0, [rsp+78h+adsVelocityTarget] }
    *v8 = 1;
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
  const dvar_t *v17; 
  float outNormalSpeedScale[4]; 
  float outSniperSpeedScale; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
  }
  if ( BG_HasPerk(&ps->perks, 0x11u) )
  {
    __asm
    {
      vmovss  [rsp+68h+outNormalSpeedScale], xmm6
      vmovss  [rsp+68h+outSniperSpeedScale], xmm6
    }
    BG_GetQuickDrawPerkMultipliers(outNormalSpeedScale, &outSniperSpeedScale);
    _EAX = BG_GetWeaponClass(weapon, isAlternate);
    __asm { vmovss  xmm2, [rsp+68h+outSniperSpeedScale] }
    _ECX = 1;
    __asm
    {
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, [rsp+68h+outNormalSpeedScale]
      vblendvps xmm6, xmm1, xmm2, xmm3
    }
  }
  if ( BG_IsThirdPersonMode(weaponMap, ps) )
  {
    v17 = DCONST_DVARFLT_camera_thirdPersonAdsTransScale;
    if ( !DCONST_DVARFLT_camera_thirdPersonAdsTransScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_thirdPersonAdsTransScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    __asm { vmulss  xmm0, xmm6, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  return *(float *)&_XMM0;
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
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 333, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_GetWeaponFieldTime(ps, weapon, isAlternate, 0, 188i64) )
    BG_WeaponFuseTime(weapon, isAlternate);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, eax
  }
  BG_GetCookingGrenadeFuseMax(weapon, isAlternate, ps);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+78h]
    vsubss  xmm2, xmm0, xmm6
    vcvtsi2ss xmm1, xmm1, eax
    vsubss  xmm1, xmm1, xmm6
    vdivss  xmm3, xmm2, xmm1
    vmovss  xmm2, cs:__real@3f800000; max
    vsubss  xmm0, xmm2, xmm3; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
BG_GetCookingGrenadeFuseMax
==============
*/
int BG_GetCookingGrenadeFuseMax(const Weapon *weapon, bool isAlternate, const playerState_s *const ps)
{
  int result; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  *(double *)&_XMM0 = BG_GetCookingGrenadeScaleTime(ps);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vdivss  xmm6, xmm1, xmm0
  }
  if ( BG_GetWeaponFieldTime(ps, weapon, isAlternate, 0, 188i64) )
  {
    BG_GetWeaponFieldTime(ps, weapon, isAlternate, 0, 188i64);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm6
      vcvttss2si ebx, xmm1
    }
    result = _EBX + BG_WeaponFuseTime(weapon, isAlternate);
  }
  else
  {
    BG_WeaponFuseTime(weapon, isAlternate);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm6
      vcvttss2si eax, xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
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
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 344, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_GetOffhandMaxHoldTime(offhandWeapon, 0) )
  {
    BG_GetCookingGrenadeFuseMax(offhandWeapon, 0, ps);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, eax
      vcvtsi2ss xmm0, xmm0, edi
      vdivss  xmm0, xmm1, xmm0; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 348, ASSERT_TYPE_ASSERT, "(maxHoldTime != 0)", (const char *)&queryFormat, "maxHoldTime != 0") )
      __debugbreak();
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
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
  __asm { vmovss  xmm1, cs:__real@40a00000; maxAbsValueSize }
  MSG_UnpackSignedFloat(ps->grenadeCookScale, *(float *)&_XMM1, 0xCu);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
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
  int result; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  *(double *)&_XMM0 = BG_GetCookingGrenadeScaleTime(ps);
  __asm { vmovaps xmm6, xmm0 }
  if ( BG_GetWeaponFieldTime(ps, weapon, isAlternate, 0, 188i64) )
  {
    result = BG_WeaponFuseTime(weapon, isAlternate);
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+78h]
      vmulss  xmm1, xmm0, xmm6
      vcvttss2si eax, xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
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
  _RAX = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
  perks = ps->perks;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0A8h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0A8h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0A8h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  BG_GetHipIdleValues(perks, &r_weapon, outIsAlternate, &hipIdleAmount, &adsIdleAmount, &hipIdleSpeed, &adsIdleSpeed);
  if ( BG_IsAimDownSight(&r_weapon, outIsAlternate) )
  {
    BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
    __asm
    {
      vmovss  xmm1, [rsp+0A8h+var_60]
      vsubss  xmm2, xmm1, [rsp+0A8h+var_64]
      vmulss  xmm0, xmm2, xmm0
      vaddss  xmm0, xmm0, [rsp+0A8h+var_64]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, [rsp+0A8h+var_64]
      vxorps  xmm0, xmm0, xmm0
      vcmpneqss xmm1, xmm2, xmm0
      vmovss  xmm0, cs:__real@3f800000
      vblendvps xmm0, xmm0, xmm2, xmm1
    }
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

  _RBX = ps;
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13793, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14429, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  offhandGestureFlags = _RBX->weapCommon.offhandGestureFlags;
  if ( (offhandGestureFlags & 1) != 0 )
  {
    if ( (offhandGestureFlags & 0x200) != 0 )
      __asm { vmovss  xmm0, cs:__real@3f800000 }
    else
      __asm { vmovss  xmm0, dword ptr [rbx+714h] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
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
  const char *v6; 
  const dvar_t *v7; 

  _RDI = outSniperSpeedScale;
  if ( !outNormalSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1542, ASSERT_TYPE_ASSERT, "(outNormalSpeedScale)", (const char *)&queryFormat, "outNormalSpeedScale") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1543, ASSERT_TYPE_ASSERT, "(outSniperSpeedScale)", (const char *)&queryFormat, "outSniperSpeedScale") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
  {
    v4 = DCONST_DVARFLT_perk_quickDrawSpeedScaleMP;
    if ( !DCONST_DVARFLT_perk_quickDrawSpeedScaleMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_quickDrawSpeedScaleMP") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    *outNormalSpeedScale = v4->current.value;
    _RBX = DCONST_DVARFLT_perk_quickDrawSpeedScaleSniperMP;
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
    _RBX = DVARFLT_perk_quickDrawSpeedScaleSniperSP;
    if ( !DVARFLT_perk_quickDrawSpeedScaleSniperSP )
    {
      v6 = "perk_quickDrawSpeedScaleSniperSP";
LABEL_18:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v6) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  dword ptr [rdi], xmm0
  }
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
  bool v5; 
  bool v6; 
  const dvar_t *v9; 
  const Weapon *OffhandGestureWeapon; 
  int offhandGestureFlags; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = ps;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13811, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v5 = _RBX == NULL;
  if ( !_RBX )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13812, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps");
    v5 = !v6;
    if ( v6 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+730h]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
  }
  if ( v5 )
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13756, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( (_RBX->weapCommon.offhandGestureFlags & 1) == 0 )
      goto LABEL_22;
    __asm { vcomiss xmm6, dword ptr [rbx+730h] }
    v9 = DVARBOOL_killswitch_offhand_ads_weapons;
    if ( !DVARBOOL_killswitch_offhand_ads_weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_offhand_ads_weapons") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( !v9->current.enabled || (OffhandGestureWeapon = BG_GetOffhandGestureWeapon(weaponMap, _RBX), !BG_IsAimDownSight(OffhandGestureWeapon, 0)) )
    {
LABEL_22:
      __asm { vxorps  xmm0, xmm0, xmm0 }
      goto LABEL_23;
    }
    offhandGestureFlags = _RBX->weapCommon.offhandGestureFlags;
    if ( (offhandGestureFlags & 1) != 0 )
    {
      if ( (offhandGestureFlags & 0x200) != 0 )
      {
        __asm
        {
          vmovss  xmm6, cs:__real@3f800000
          vmovaps xmm0, xmm6
        }
        goto LABEL_23;
      }
      __asm { vmovss  xmm6, dword ptr [rbx+714h] }
    }
    __asm { vmovaps xmm0, xmm6 }
  }
LABEL_23:
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return *(float *)&_XMM0;
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
  float outDissipationPerSecond[6]; 
  float outAccumulationPerShot; 

  if ( playerWeaponHeat )
  {
    _RDI = r_weapon;
    _RBX = playerWeaponHeat;
    BG_GetHeatProperties(r_weapon, isAlternate, &outAccumulationPerShot, outDissipationPerSecond);
    *(double *)&_XMM0 = BG_Heat_GetHeat(_RBX, _RDI, isAlternate, time);
    __asm
    {
      vaddss  xmm0, xmm0, [rsp+38h+outAccumulationPerShot]; val
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    _RBX->lastIncreaseTime = time;
    __asm
    {
      vmovss  dword ptr [rbx], xmm0
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rbx+0Ah], ymm0
      vmovups xmm1, xmmword ptr [rdi+20h]
      vmovups xmmword ptr [rbx+2Ah], xmm1
      vmovsd  xmm0, qword ptr [rdi+30h]
      vmovsd  qword ptr [rbx+3Ah], xmm0
    }
    *(_DWORD *)&_RBX->weapon.weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
  }
}

/*
==============
BG_Heat_GetHeat
==============
*/
float BG_Heat_GetHeat(const WeaponHeat *const playerWeaponHeat, const Weapon *r_weapon, const bool isAlternate, const int time)
{
  char v13; 
  bool v14; 
  unsigned int lastIncreaseTime; 
  bool v21; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 
  double v41; 
  float outAccumulationPerShot[4]; 
  float outDissipationPerSecond; 

  _RBX = playerWeaponHeat;
  if ( playerWeaponHeat && !memcmp_0(r_weapon, &playerWeaponHeat->weapon, 0x3Cui64) )
  {
    __asm
    {
      vmovaps [rsp+98h+var_18], xmm6
      vmovaps [rsp+98h+var_28], xmm7
      vmovaps [rsp+98h+var_38], xmm8
      vmovaps [rsp+98h+var_48], xmm10
    }
    BG_GetHeatProperties(r_weapon, isAlternate, outAccumulationPerShot, &outDissipationPerSecond);
    __asm
    {
      vmovss  xmm6, dword ptr [rbx]
      vmovss  xmm7, [rsp+98h+outDissipationPerSecond]
    }
    lastIncreaseTime = _RBX->lastIncreaseTime;
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vcomiss xmm6, xmm8
      vxorpd  xmm10, xmm10, xmm10
    }
    if ( v13 )
      goto LABEL_18;
    __asm { vcomiss xmm6, cs:__real@3f800000 }
    if ( !(v13 | v14) )
    {
LABEL_18:
      __asm
      {
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vmovsd  [rsp+98h+var_60], xmm0
        vcvtss2sd xmm1, xmm6, xmm6
        vmovsd  [rsp+98h+var_68], xmm10
        vmovsd  [rsp+98h+var_70], xmm1
      }
      v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9938, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( lastIncreaseValue ) && ( lastIncreaseValue ) <= ( 1.0f )", "lastIncreaseValue not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v36, v38, v40);
      v13 = 0;
      v14 = !v21;
      if ( v21 )
        __debugbreak();
    }
    __asm
    {
      vcomiss xmm7, xmm8
      vcomiss xmm7, cs:__real@7f7fffff
    }
    if ( !(v13 | v14) )
    {
      __asm
      {
        vmovsd  xmm0, cs:__real@47efffffe0000000
        vmovsd  [rsp+98h+var_60], xmm0
        vcvtss2sd xmm1, xmm7, xmm7
        vmovsd  [rsp+98h+var_68], xmm10
        vmovsd  [rsp+98h+var_70], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9939, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( dissipationPerSecond ) && ( dissipationPerSecond ) <= ( 3.402823466e+38F )", "dissipationPerSecond not in [0.0f, FLT_MAX]\n\t%g not in [%g, %g]", v37, v39, v41) )
        __debugbreak();
    }
    __asm
    {
      vmovaps xmm10, [rsp+98h+var_48]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edi
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vcomiss xmm1, xmm8
    }
    if ( time > lastIncreaseTime )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000; max
        vmulss  xmm0, xmm1, xmm7
        vsubss  xmm0, xmm6, xmm0; val
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
    }
    __asm
    {
      vmovaps xmm8, [rsp+98h+var_38]
      vmovaps xmm7, [rsp+98h+var_28]
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+98h+var_18]
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
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
  char v8; 
  WeaponHeat::Flags flags; 
  float outSmokeStopThreshold; 
  float outSmokeStartThreshold; 

  if ( weaponHeat && weaponHeat->lastIncreaseTime )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    *(double *)&_XMM0 = BG_Heat_GetHeat(weaponHeat, r_weapon, 0, time);
    __asm { vmovaps xmm6, xmm0 }
    BG_GetHeatSmokeProperties(r_weapon, 0, &outSmokeStartThreshold, &outSmokeStopThreshold);
    __asm { vmovss  xmm1, [rsp+38h+outSmokeStopThreshold] }
    flags = weaponHeat->flags;
    __asm
    {
      vcomiss xmm1, xmm6
      vmovss  xmm1, [rsp+38h+outSmokeStartThreshold]
      vcomiss xmm1, xmm6
      vmovaps xmm6, [rsp+38h+var_18]
    }
    if ( (flags & 1) != 0 )
    {
      if ( !v8 && (flags & 1) != 0 )
        weaponHeat->flags = flags & 0xFE;
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

void __fastcall BG_IncrementWeaponMovementIdleTime(const BgWeaponMap *weaponMap, const playerState_s *ps, double frametime, int *weaponIdleTime)
{
  const dvar_t *v15; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
  }
  _RBX = ps;
  __asm { vmovaps xmm8, xmm2 }
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18404, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18405, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(float *)&_XMM0 = BG_GetIdleSpeed(weaponMap, _RBX);
  __asm { vmovaps xmm7, xmm0 }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_LADDER_AIM) )
  {
    __asm
    {
      vmovaps [rsp+78h+var_18], xmm6
      vmovss  xmm6, dword ptr [rbx+34Ch]
    }
    v15 = DCONST_DVARBOOL_player_scope_prototype;
    if ( !DCONST_DVARBOOL_player_scope_prototype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_scope_prototype") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( !v15->current.enabled )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000
        vcomiss xmm6, xmm2
      }
      if ( v15->current.enabled )
      {
        __asm
        {
          vsubss  xmm0, xmm6, xmm2
          vmulss  xmm1, xmm0, cs:__real@3f000000
          vaddss  xmm6, xmm1, xmm2
        }
      }
    }
    __asm
    {
      vmulss  xmm0, xmm6, xmm8
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vmovaps xmm6, [rsp+78h+var_18]
      vmulss  xmm2, xmm1, xmm7
      vcvttss2si eax, xmm2
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm8, cs:__real@447a0000
      vmulss  xmm1, xmm0, xmm7
      vcvttss2si eax, xmm1
    }
  }
  *weaponIdleTime += _EAX;
  __asm
  {
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
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
  const dvar_t *v6; 
  const Weapon *OffhandGestureWeapon; 

  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13755, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13756, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14429, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (_RBX->weapCommon.offhandGestureFlags & 1) == 0 )
    return 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+730h]
  }
  v6 = DVARBOOL_killswitch_offhand_ads_weapons;
  if ( !DVARBOOL_killswitch_offhand_ads_weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_offhand_ads_weapons") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
    return 0;
  OffhandGestureWeapon = BG_GetOffhandGestureWeapon(weaponMap, _RBX);
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
  bool v11; 
  unsigned int v12; 
  bool v13; 
  Gesture *Gesture; 
  Gesture *v15; 
  bool IsPlayingByIndex; 
  unsigned int v17; 
  unsigned int IndexFromGesture; 
  const XAnimParts *v19; 
  char v22; 
  const Gesture *v23; 
  bool result; 
  bool v25; 
  unsigned int v26; 
  const XAnimParts *v27; 
  unsigned int outSlot; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15493, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15494, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v11 = BG_UsingAlternate(ps);
  v12 = 2;
  v13 = BG_PlayerDualWielding(ps) != 0;
  outSlot = 2;
  Gesture = BG_Suit_GetGesture(ps, WEAPON_HAND_DEFAULT, CurrentWeaponForPlayer, v11, v13, GESTUREANIMTYPE_NVG_ON);
  v15 = BG_Suit_GetGesture(ps, WEAPON_HAND_DEFAULT, CurrentWeaponForPlayer, v11, v13, GESTUREANIMTYPE_NVG_OFF);
  IsPlayingByIndex = 0;
  outSlot = 2;
  v17 = 2;
  if ( Gesture )
  {
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(Gesture);
    IsPlayingByIndex = BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot);
    v17 = outSlot;
  }
  __asm
  {
    vmovaps [rsp+78h+var_38], xmm6
    vmovaps [rsp+78h+var_48], xmm7
  }
  if ( !IsPlayingByIndex )
  {
    v25 = 0;
    outSlot = 2;
    if ( v15 )
    {
      v26 = BG_Gesture_GetIndexFromGesture(v15);
      v25 = BG_Gesture_IsPlayingByIndex(ps, v26, &outSlot);
      v12 = outSlot;
    }
    if ( !v25 )
      goto LABEL_27;
    if ( !*v15->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15535, ASSERT_TYPE_ASSERT, "(nvgOffGesture->anims[GESTURE_ASSET_LEFT_CENTER])", (const char *)&queryFormat, "nvgOffGesture->anims[GESTURE_CENTER_ANIM_INDEX]") )
      __debugbreak();
    v27 = *v15->anims;
    if ( !v27 )
    {
LABEL_30:
      result = 0;
      goto LABEL_28;
    }
    *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(v27, scr_const.interruptible);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
      vmovaps xmm7, xmm0
    }
    if ( v22 )
    {
      Com_PrintWarning(16, "NVG off Gesture %s, Missing 'interruptable' notetrack.\n", v15->name);
      goto LABEL_30;
    }
    *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(ps, v12, gameTime);
    v23 = v15;
LABEL_26:
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = BG_Gesture_GetAnimLengthInSeconds(v23);
    __asm
    {
      vmulss  xmm1, xmm0, xmm7
      vcomiss xmm6, xmm1
    }
    if ( !v22 )
    {
LABEL_27:
      result = 1;
      goto LABEL_28;
    }
    goto LABEL_30;
  }
  if ( !*Gesture->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15508, ASSERT_TYPE_ASSERT, "(nvgOnGesture->anims[GESTURE_ASSET_LEFT_CENTER])", (const char *)&queryFormat, "nvgOnGesture->anims[GESTURE_CENTER_ANIM_INDEX]") )
    __debugbreak();
  v19 = *Gesture->anims;
  if ( !v19 )
    goto LABEL_30;
  *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(v19, scr_const.interruptible);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps xmm7, xmm0
  }
  if ( !v22 )
  {
    *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(ps, v17, gameTime);
    v23 = Gesture;
    goto LABEL_26;
  }
  Com_PrintWarning(16, "NVG On Gesture %s, Missing 'interruptible' notetrack.\n", Gesture->name);
  result = 0;
LABEL_28:
  __asm
  {
    vmovaps xmm7, [rsp+78h+var_48]
    vmovaps xmm6, [rsp+78h+var_38]
  }
  return result;
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
  const WeaponDef *v12; 
  unsigned int IndexFromGesture; 
  const Weapon *CurrentWeaponForPlayer; 
  const Gesture *gesturePullbackAlt; 
  const Gesture *AssetFromIndex; 
  bool v22; 
  unsigned int outSlot; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14542, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14543, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  outSlot = 2;
  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(weaponMap, ps);
  v12 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
  IndexFromGesture = 256;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  if ( BG_PlayAltGesturesForOffhandWeapons(CurrentWeaponForPlayer) && (gesturePullbackAlt = v12->gesturePullbackAlt) != NULL || (gesturePullbackAlt = v12->gesturePullback) != NULL )
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(gesturePullbackAlt);
  if ( BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot) )
  {
    __asm
    {
      vmovaps [rsp+78h+var_38], xmm6
      vmovaps [rsp+78h+var_48], xmm7
    }
    if ( outSlot == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14550, ASSERT_TYPE_ASSERT, "(pullbackGestureSlot != 2)", (const char *)&queryFormat, "pullbackGestureSlot != GESTURE_INVALID_SLOT") )
      __debugbreak();
    AssetFromIndex = BG_Gesture_GetAssetFromIndex(IndexFromGesture);
    BG_Gesture_GetAnimationSettings(AssetFromIndex);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm0, xmm0, dword ptr [rax+4]
      vmulss  xmm6, xmm0, cs:__real@3a83126f
      vcvtsi2ss xmm7, xmm7, dword ptr [rax+8]
    }
    *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(ps, outSlot, time);
    v22 = 0;
    __asm { vmovaps xmm3, xmm0 }
    if ( immediate )
    {
      v22 = 1;
    }
    else
    {
      __asm
      {
        vcvtss2sd xmm2, xmm3, xmm0
        vcvtss2sd xmm0, xmm6, xmm6
        vmulsd  xmm1, xmm0, cs:__real@3feccccccccccccd
        vcomisd xmm2, xmm1
      }
    }
    BG_Gesture_StopBySlot(ps, outSlot, time, v22, 0, 0);
    ps->weapCommon.offhandGestureFlags &= 0xFFFFFFF1;
    ps->weapCommon.offhandGestureFlags |= 0x10u;
    __asm
    {
      vmovaps xmm7, [rsp+78h+var_48]
      vmovaps xmm6, [rsp+78h+var_38]
    }
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
  bool result; 
  const Weapon *OffHandWeaponForPlayer; 
  const WeaponDef *v11; 
  unsigned int IndexFromGesture; 
  const Weapon *CurrentWeaponForPlayer; 
  const Gesture *gesturePullbackAlt; 
  const Gesture *AssetFromIndex; 
  const XAnimParts *v16; 
  char v19; 
  char v29; 
  unsigned int outSlot; 

  if ( !BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_PULLBACK) && !BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_THROW) && !BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_DETONATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12898, ASSERT_TYPE_ASSERT, "(BG_Offhand_IsPlayingGrenadeGesture( weaponMap, ps ))", (const char *)&queryFormat, "BG_Offhand_IsPlayingGrenadeGesture( weaponMap, ps )") )
    __debugbreak();
  if ( BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_DETONATE) )
    return BG_Offhand_IsGestureInterruptable(weaponMap, ps, OHGT_DETONATE, gameTime);
  outSlot = 2;
  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(weaponMap, ps);
  v11 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
  IndexFromGesture = 256;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  if ( BG_PlayAltGesturesForOffhandWeapons(CurrentWeaponForPlayer) && (gesturePullbackAlt = v11->gesturePullbackAlt) != NULL || (gesturePullbackAlt = v11->gesturePullback) != NULL )
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(gesturePullbackAlt);
  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  if ( BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot) )
  {
    if ( outSlot == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12910, ASSERT_TYPE_ASSERT, "(pullbackSlot != 2)", (const char *)&queryFormat, "pullbackSlot != GESTURE_INVALID_SLOT") )
      __debugbreak();
    if ( !BG_Offhand_IsStoppingGesture(weaponMap, ps, OHGT_PULLBACK) )
      goto LABEL_21;
    if ( (ps->weapCommon.offhandGestureFlags & 8) != 0 )
      goto LABEL_21;
    AssetFromIndex = BG_Gesture_GetAssetFromIndex(IndexFromGesture);
    BG_Gesture_GetAnimationSettings(AssetFromIndex);
    v16 = (const XAnimParts *)*((_QWORD *)AssetFromIndex->anims + 11);
    if ( !v16 )
      goto LABEL_21;
    *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(v16, scr_const.interruptible);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
      vmovaps xmm6, xmm0
    }
    if ( v19 )
      goto LABEL_21;
    BG_Gesture_GetRemainingTime(ps, outSlot, gameTime);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm4, xmm1, cs:__real@3a83126f
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rsi+8]
      vmulss  xmm3, xmm1, cs:__real@3a83126f
      vsubss  xmm2, xmm0, xmm6
      vmulss  xmm1, xmm3, xmm2
      vcomiss xmm4, xmm1
    }
    if ( !(v19 | v29) )
      goto LABEL_21;
LABEL_24:
    result = 1;
    goto LABEL_22;
  }
  if ( BG_Offhand_IsGestureInterruptable(weaponMap, ps, OHGT_THROW, gameTime) )
    goto LABEL_24;
LABEL_21:
  result = 0;
LABEL_22:
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
  return result;
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
  const XAnimParts **anims; 
  const XAnimParts *v16; 
  char v18; 
  _BOOL8 result; 
  unsigned int outSlot; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13054, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  GestureIdx = BG_Offhand_GetGestureIdx(weaponMap, ps, gestureType);
  if ( BG_Gesture_IsPlayingByIndex(ps, GestureIdx, &outSlot) )
  {
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm6
      vmovaps [rsp+58h+var_28], xmm7
    }
    AssetFromIndex = BG_Gesture_GetAssetFromIndex(GestureIdx);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm7, xmm7, xmm7
    }
    anims = (const XAnimParts **)AssetFromIndex->anims;
    if ( *anims )
    {
      v16 = *anims;
    }
    else
    {
      v16 = anims[5];
      if ( !v16 )
        goto LABEL_11;
    }
    *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(v16, scr_const.interruptible);
    __asm
    {
      vcomiss xmm0, xmm6
      vmovaps xmm7, xmm0
    }
    if ( v18 )
    {
      result = 0i64;
LABEL_10:
      __asm
      {
        vmovaps xmm6, [rsp+58h+var_18]
        vmovaps xmm7, [rsp+58h+var_28]
      }
      return result;
    }
LABEL_11:
    *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(ps, outSlot, gameTime);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = BG_Gesture_GetAnimLengthInSeconds(AssetFromIndex);
    __asm
    {
      vmulss  xmm1, xmm0, xmm7
      vcomiss xmm6, xmm1
    }
    result = !v18;
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
  PlayerASM_AnimSlot v14; 
  unsigned int v15; 
  unsigned int Anim; 
  SuitAnimType SuitAnimIndexFromPlayerState; 
  SuitAnimType v19; 
  int torsoAnim; 
  unsigned int GestureIdx; 
  char v22; 
  const Gesture *AssetFromIndex; 
  GestureAnimationSettings *AnimationSettings; 
  const XAnimParts **anims; 
  unsigned int v26; 
  const XAnimParts *v28; 
  char v31; 
  unsigned int outStartTime; 
  __int64 v40; 
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
    LOBYTE(v14) = 1;
    v15 = Animset;
    Anim = BG_PlayerASM_GetAnim(ps, v14);
    if ( !Anim || !BG_PlayerASM_IsGestureAlias(Anim, v15) )
      return 0;
  }
  else
  {
    SuitAnimIndexFromPlayerState = BG_GetSuitAnimIndexFromPlayerState(ps);
    v19 = SuitAnimIndexFromPlayerState;
    if ( (unsigned int)SuitAnimIndexFromPlayerState >= NUM_ANIM_SUIT_STATE )
    {
      LODWORD(v40) = SuitAnimIndexFromPlayerState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12984, ASSERT_TYPE_ASSERT, "(unsigned)( suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", v40, 4) )
        __debugbreak();
    }
    torsoAnim = ps->torsoAnim;
    if ( !torsoAnim || !BG_IsGestureAnim(torsoAnim, v19) )
      return 0;
  }
  if ( !BG_Offhand_HasActiveOffhand(ps) || BG_GetWeaponOffhandSlot(ps, weaponMap, offhandWeapon) != OFFHAND_SLOT_TAUNT || !BG_Offhand_IsPlayingGesture(weaponMap, ps, OHGT_WEAPON) )
    return 0;
  GestureIdx = BG_Offhand_GetGestureIdx(weaponMap, ps, gestureType);
  v22 = 0;
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
      v26 = 0x7FFFFFFF;
      __asm
      {
        vmovaps [rsp+78h+var_28], xmm6
        vmovaps [rsp+78h+var_38], xmm7
        vxorps  xmm7, xmm7, xmm7
      }
      v28 = *anims;
      __asm { vxorps  xmm6, xmm6, xmm6 }
      if ( !*anims )
      {
        v28 = anims[5];
        if ( !v28 )
          goto LABEL_32;
      }
      *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(v28, scr_const.interruptible);
      __asm
      {
        vcomiss xmm0, xmm7
        vmovaps xmm6, xmm0
      }
      if ( !v31 )
      {
LABEL_32:
        *(double *)&_XMM0 = BG_Gesture_GetAnimLengthInSeconds(AssetFromIndex);
        v26 = 0;
        __asm
        {
          vmulss  xmm1, xmm0, xmm6
          vmulss  xmm2, xmm1, cs:__real@c47a0000
          vcvttss2si eax, xmm2
        }
        if ( -100 - _EAX > 0 )
          v26 = -100 - _EAX;
      }
      outStartTime = AnimationSettings->outStartTime;
      *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(ps, outSlot, gameTime);
      __asm
      {
        vmovaps xmm7, [rsp+78h+var_38]
        vmovaps xmm6, [rsp+78h+var_28]
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ebx
        vmulss  xmm2, xmm1, cs:__real@3a83126f
        vcomiss xmm0, xmm2
      }
      if ( v26 >= outStartTime )
        return 1;
    }
  }
  return v22;
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
  AmmoStore result; 
  AmmoStore r_clipIndex; 

  v3 = hand;
  v6 = BG_UsingAlternate(ps);
  if ( !BG_IsBoltAction(r_weapon, v6) )
    return 0;
  _RAX = BG_AmmoStoreForWeapon(&result, r_weapon, v6);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0C8h+r_clipIndex.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+0C8h+r_clipIndex.weapon.attachmentVariationIndices+5], ymm1
  }
  ClipAmmoPtrConst = BG_GetClipAmmoPtrConst(ps, &r_clipIndex);
  if ( !ClipAmmoPtrConst )
    return 0;
  return ClipAmmoPtrConst->chamberedCount[v3] <= 0;
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
  __int64 v11; 
  unsigned int ammoInClipBeforeReload; 
  unsigned int v13; 
  bool v14; 
  AmmoStore result; 
  AmmoStore r_clipIndex; 

  v3 = hand;
  if ( BG_PlayerWeaponNeedsRechamber(ps, r_weapon, hand) )
    return 1;
  v6 = BG_UsingAlternate(ps);
  _RAX = BG_AmmoStoreForWeapon(&result, r_weapon, v6);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+108h+r_clipIndex.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+108h+r_clipIndex.weapon.attachmentVariationIndices+5], ymm1
  }
  ClipAmmoPtrConst = BG_GetClipAmmoPtrConst(ps, &r_clipIndex);
  if ( !ClipAmmoPtrConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19333, ASSERT_TYPE_ASSERT, "( clip ) != ( nullptr )", "%s != %s\n\t%p, %p", "clip", "nullptr", NULL, NULL) )
    __debugbreak();
  v11 = v3;
  ammoInClipBeforeReload = ps->weapState[v3].ammoInClipBeforeReload;
  v13 = ClipAmmoPtrConst->ammoCount[v11];
  v14 = ClipAmmoPtrConst->chamberedCount[v11] < BG_GetMaxChamberedAmmo(r_weapon, v6);
  return ammoInClipBeforeReload < v13 && v14;
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
  __int64 v5; 
  int weaponState; 
  const BgWeaponMap *v9; 
  char v11; 
  char v12; 

  v5 = hand;
  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15869, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_ViewModelAnimExists(_RBX, WEAP_ANIM_ADDITIVE_CRAWL_IN, (PlayerHandIndex)v5, pmoveHandler) )
    return 0;
  if ( !BG_ViewModelAnimExists(_RBX, WEAP_ANIM_ADDITIVE_CRAWL_LOOP, (PlayerHandIndex)v5, pmoveHandler) )
    return 0;
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0) )
    return 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x14u) )
    return 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 6u) )
    return 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x1Eu) )
    return 0;
  weaponState = _RBX->weapState[v5].weaponState;
  if ( weaponState == 16 )
    return 0;
  if ( (unsigned int)(weaponState - 22) <= 2 )
    return 0;
  v9 = pmoveHandler->GetWeaponMap(pmoveHandler);
  *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(v9, _RBX);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( !(v11 | v12) )
    return 0;
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_crawlMinSpeed, "bg_crawlMinSpeed");
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+3Ch]
    vmovss  xmm3, dword ptr [rbx+40h]
    vmovss  xmm4, dword ptr [rbx+44h]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm0, xmm0, xmm0
    vcomiss xmm4, xmm0
  }
  return !v11;
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
  double v31; 
  double v32; 
  double v33; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RBX = weaponDef;
  if ( !turretLerp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19031, ASSERT_TYPE_ASSERT, "(turretLerp)", (const char *)&queryFormat, "turretLerp") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19032, ASSERT_TYPE_ASSERT, "(weaponDef)", (const char *)&queryFormat, "weaponDef") )
    __debugbreak();
  if ( !_RBX->turretBarrelSpinEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19034, ASSERT_TYPE_ASSERT, "(weaponDef->turretBarrelSpinEnabled)", (const char *)&queryFormat, "weaponDef->turretBarrelSpinEnabled") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0DECh]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
    vmovss  xmm0, dword ptr [rbx+0DF0h]
    vcomiss xmm0, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+10h]
    vmulss  xmm1, xmm0, cs:__real@37800080
  }
  if ( curTime > turretLerp->lastBarrelRotChangeTime )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000
      vmovaps [rsp+68h+var_28], xmm7
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmulss  xmm3, xmm0, cs:__real@3a83126f
    }
    if ( (turretLerp->turretFlags & 1) != 0 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0DECh]
        vcomiss xmm0, xmm6
      }
      if ( (turretLerp->turretFlags & 1) == 0 )
      {
        __asm { vmovaps xmm0, xmm2 }
LABEL_23:
        __asm { vmovaps xmm7, [rsp+68h+var_28] }
        goto LABEL_24;
      }
      __asm
      {
        vdivss  xmm0, xmm3, xmm0
        vaddss  xmm1, xmm0, xmm1
        vminss  xmm7, xmm1, xmm2
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0DF0h]
        vcomiss xmm0, xmm6
      }
      if ( (turretLerp->turretFlags & 1) == 0 )
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
        goto LABEL_23;
      }
      __asm
      {
        vdivss  xmm0, xmm3, xmm0
        vsubss  xmm1, xmm1, xmm0
        vmaxss  xmm7, xmm1, xmm6
      }
    }
    __asm
    {
      vcomiss xmm7, xmm6
      vcomiss xmm7, xmm2
    }
    if ( (turretLerp->turretFlags & 1) != 0 )
    {
      __asm
      {
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vmovsd  [rsp+68h+var_30], xmm0
        vxorpd  xmm1, xmm1, xmm1
        vmovsd  [rsp+68h+var_38], xmm1
        vcvtss2sd xmm2, xmm7, xmm7
        vmovsd  [rsp+68h+var_40], xmm2
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 19062, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( spinRate ) && ( spinRate ) <= ( 1.0f )", "spinRate not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v31, v32, v33) )
        __debugbreak();
    }
    __asm { vmovaps xmm0, xmm7 }
    goto LABEL_23;
  }
  __asm { vmovaps xmm0, xmm1 }
LABEL_24:
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  return *(float *)&_XMM0;
}

/*
==============
BG_UpdateWeaponAnimArrays
==============
*/
void BG_UpdateWeaponAnimArrays(BgWeaponMap *const weaponMap, playerState_s *const ps, const BgHandler *const handler)
{
  const PlayerWeaponAnimArrays *v7; 
  XAnimParts *v10; 
  bool v12; 
  bool v13; 
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
  _RAX = BG_GetViewmodelWeapon(weaponMap, ps);
  __asm { vmovups ymm2, ymmword ptr [rax] }
  v10 = v7->normalAnimArray[236];
  __asm { vmovd   ecx, xmm2 }
  v12 = (_WORD)_ECX && !v10;
  v13 = !(_WORD)_ECX && v10;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 954, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 955, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon(weaponMap, ps->weapCommon.weaponAnimArrayHandle);
  if ( v12 || v13 || memcmp_0(Weapon, &v7->weaponUsedForAnims, 0x3Cui64) || v7->meleeComboSeqIdx != ps->weapCommon.meleeComboSeqIdx || v7->carryObjectIndex != ps->carryState.carryObjectIndex || v7->suitIndex != ps->suitIndex )
    PM_BuildWeaponAnimArrays(weaponMap, ps, handler);
}

/*
==============
BG_UseAnimatedWeaponMovement
==============
*/
bool BG_UseAnimatedWeaponMovement(const BgWeaponMap *weaponMap, const playerState_s *ps, const BgHandler *pmoveHandler)
{
  weapAnimFiles_t v8; 
  int weaponState; 
  const BgWeaponMap *v10; 
  char v12; 
  char v13; 
  bool result; 

  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15923, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15821, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !_RBX )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15822, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) && !BG_Skydive_IsSkydiving(_RBX) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0) )
  {
    v8 = WEAP_ANIM_ADDITIVE_WALK_START;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x14u) )
    {
      if ( !BG_CanSprintFire(_RBX) || (unsigned int)(_RBX->weapState[0].weaponState - 34) <= 2 )
        goto LABEL_22;
      v8 = WEAP_ANIM_ADDITIVE_GUNGHO_SPRINT;
    }
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 6u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x1Eu) && BG_ViewModelAnimExists(_RBX, v8, WEAPON_HAND_DEFAULT, pmoveHandler) )
      return 1;
  }
LABEL_22:
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15869, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_ViewModelAnimExists(_RBX, WEAP_ANIM_ADDITIVE_CRAWL_IN, WEAPON_HAND_DEFAULT, pmoveHandler) )
  {
    if ( BG_ViewModelAnimExists(_RBX, WEAP_ANIM_ADDITIVE_CRAWL_LOOP, WEAPON_HAND_DEFAULT, pmoveHandler) )
    {
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x14u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 6u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x1Eu) )
      {
        weaponState = _RBX->weapState[0].weaponState;
        if ( weaponState != 16 && (unsigned int)(weaponState - 22) > 2 )
        {
          v10 = pmoveHandler->GetWeaponMap(pmoveHandler);
          *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(v10, _RBX);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcomiss xmm0, xmm1
          }
          if ( v12 | v13 )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_crawlMinSpeed, "bg_crawlMinSpeed");
            __asm
            {
              vmovss  xmm1, dword ptr [rbx+3Ch]
              vmovss  xmm3, dword ptr [rbx+40h]
              vmovss  xmm4, dword ptr [rbx+44h]
              vmulss  xmm2, xmm1, xmm1
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm2, xmm4, xmm4
              vaddss  xmm4, xmm3, xmm2
              vmulss  xmm0, xmm0, xmm0
              vcomiss xmm4, xmm0
            }
            if ( !v12 )
              return 1;
          }
        }
      }
    }
  }
  result = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x14u);
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
unsigned int BG_WeaponCharge_CalcNumTagsUsed(const Weapon *weapon, const bool isAlternate, const int chargeAmount)
{
  unsigned int result; 
  unsigned int v7; 
  bool v8; 

  result = BG_WeaponCharge_GetMeterBoneCount(weapon, isAlternate);
  if ( !result || !chargeAmount )
    return 0;
  if ( result == 1 || chargeAmount == 1 )
    return 1;
  if ( chargeAmount == 4095 )
    return result;
  v7 = result - 1;
  v8 = result == 1;
  if ( (int)(result - 1) < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2428, ASSERT_TYPE_ASSERT, "(otherBulbCount >= 0)", (const char *)&queryFormat, "otherBulbCount >= 0") )
      __debugbreak();
    v8 = v7 == 0;
  }
  if ( v8 )
    return 1;
  __asm
  {
    vmovss  xmm0, cs:__real@457fe000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, edi
    vmovaps [rsp+48h+var_18], xmm6
    vdivss  xmm6, xmm0, xmm1
    vcomiss xmm6, cs:__real@3a83126f
  }
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2437, ASSERT_TYPE_ASSERT, "(chargeAmountForEachBulb > 0.001f)", (const char *)&queryFormat, "chargeAmountForEachBulb > EQUAL_EPSILON") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm1, xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vcvttss2si eax, xmm1
  }
  return _EAX + 1;
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
  bool v16; 
  bool v17; 
  bool v24; 
  char v25; 
  char v26; 
  int v40; 
  bool v44; 
  bool v62; 
  bool v66; 
  int v76; 
  const WeaponDef *v84; 
  bool v85; 
  playerState_s *ps; 
  int aimSpreadStateCurrent; 
  const dvar_t *v109; 
  int serverTime; 
  bool v113; 
  __int64 v114; 
  char *fmt; 
  float *hipSpreadDuckedMax; 
  float *hipSpreadDuckedMaxa; 
  float *hipSpreadProneMin; 
  float *hipSpreadProneMina; 
  float spreadOverrideScale; 
  float outSlideSpreadMin; 
  float outSlideSpreadMax; 
  float outSlideSpreadDecayRate; 
  float hipSpreadInAirMin; 
  float hipSpreadInAirMax; 
  float hipSpreadSprintMin; 
  float hipSpreadSprintMax; 
  float v131; 
  float hipSpreadProneMax; 
  float hipSpreadDuckedMin; 
  float v134; 
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
  int v148; 
  Weapon *r_weapon; 
  void *retaddr; 
  int v161; 
  bool v162; 
  bool v163; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
    vmovaps xmm15, xmm1
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3705, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  v16 = _RDI == NULL;
  if ( !_RDI )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3705, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps");
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+770h]
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm0, xmm7
    vmovss  xmm0, dword ptr [rdi+770h]
    vmovss  xmm11, cs:__real@3f800000
    vcomiss xmm0, xmm11
  }
  if ( !v16 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+200h+hipSpreadProneMin], xmm0
      vmovsd  [rsp+200h+hipSpreadDuckedMax], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3707, ASSERT_TYPE_ASSERT, "( ps->weapCommon.fAimSpreadMovementScale ) <= ( 1.0f )", "%s <= %s\n\t%g, %g", "ps->weapCommon.fAimSpreadMovementScale", "1.0f", *(double *)&hipSpreadDuckedMax, *(double *)&hipSpreadProneMin) )
      __debugbreak();
  }
  __asm
  {
    vmovaps [rsp+200h+var_48+8], xmm6
    vmovaps [rsp+200h+var_78+8], xmm9
    vmovaps [rsp+200h+var_88+8], xmm10
    vmovaps [rsp+200h+var_A8+8], xmm12
    vmovaps [rsp+200h+var_B8+8], xmm13
  }
  v24 = BG_UsingAlternate(_RDI);
  v163 = v24;
  r_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(pm->weaponMap, _RDI);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x1Du) )
  {
    BG_GetSlideSpreadWithDecay(r_weapon, v24, &outSlideSpreadMin, &outSlideSpreadMoveMax, &outSlideSpreadMax, &outSlideSpreadDecayRate, &outSlideSpreadTurnAdd);
    __asm
    {
      vmovss  xmm1, [rbp+0C0h+outSlideSpreadMin]
      vmovss  xmm2, [rbp+0C0h+outSlideSpreadMax]
      vmovss  xmm0, [rbp+0C0h+outSlideSpreadMoveMax]
      vmovss  xmm8, [rbp+0C0h+var_134]
      vmovss  [rbp+0C0h+hipSpreadDuckedMin], xmm1
      vmovss  [rbp+0C0h+var_120], xmm1
      vmovss  [rbp+0C0h+var_128], xmm1
      vmovss  [rbp+0C0h+var_130], xmm1
      vmovss  [rbp+0C0h+var_114], xmm2
      vmovss  [rbp+0C0h+var_11C], xmm2
      vmovss  [rbp+0C0h+var_124], xmm2
      vmovss  [rbp+0C0h+var_12C], xmm2
      vmovss  [rbp+0C0h+hipSpreadDuckedMoveMax], xmm0
      vmovss  [rbp+0C0h+var_E8], xmm0
      vmovss  [rbp+0C0h+var_F8], xmm0
      vmovss  [rbp+0C0h+var_F0], xmm0
      vmovaps xmm3, xmm1
      vmovaps xmm4, xmm1
      vmovaps xmm5, xmm1
      vmovaps xmm6, xmm1
      vmovaps xmm9, xmm2
      vmovaps xmm10, xmm2
      vmovaps xmm12, xmm2
      vmovaps xmm13, xmm2
      vmovss  [rbp+0C0h+var_E4], xmm8
      vmovss  [rbp+0C0h+var_EC], xmm8
      vmovss  [rbp+0C0h+var_F4], xmm8
      vmovss  [rbp+0C0h+var_FC], xmm8
      vmovss  [rbp+0C0h+hipSpreadMoveAdd], xmm7
    }
  }
  else
  {
    BG_GetHipSpreadWithDecay(r_weapon, v24, &outSlideSpreadMin, &outSlideSpreadMoveMax, &outSlideSpreadMax, &hipSpreadDuckedMin, &hipSpreadDuckedMoveMax, &v134, &v131, &hipSpreadProneMoveMax, &hipSpreadProneMax, &hipSpreadSprintMin, &hipSpreadSprintMoveMax, &hipSpreadSprintMax, &hipSpreadInAirMin, &hipSpreadInAirMoveMax, &hipSpreadInAirMax, &outSlideSpreadDecayRate, &hipSpreadProneDecay, &hipSpreadDuckedDecay, &hipSpreadSprintDecay, &hipSpreadInAirDecay, &outSlideSpreadTurnAdd, &hipSpreadMoveAdd);
    __asm
    {
      vmovss  xmm2, [rbp+0C0h+outSlideSpreadMax]
      vmovss  xmm1, [rbp+0C0h+outSlideSpreadMin]
      vmovss  xmm3, [rbp+0C0h+hipSpreadDuckedMin]
      vmovss  xmm4, [rbp+0C0h+var_120]
      vmovss  xmm5, [rbp+0C0h+var_128]
      vmovss  xmm8, [rbp+0C0h+var_134]
      vmovss  xmm6, [rbp+0C0h+var_130]
      vmovss  xmm9, [rbp+0C0h+var_114]
      vmovss  xmm10, [rbp+0C0h+var_11C]
      vmovss  xmm12, [rbp+0C0h+var_124]
      vmovss  xmm13, [rbp+0C0h+var_12C]
    }
  }
  __asm
  {
    vucomiss xmm8, xmm7
    vmovss  xmm14, cs:__real@437f0000
  }
  v40 = 4;
  __asm { vmovss  [rbp+0C0h+spreadOverrideScale], xmm11 }
  if ( v26 )
  {
    __asm { vmovaps xmm10, xmm11 }
    goto LABEL_53;
  }
  __asm { vcomiss xmm2, xmm1 }
  v162 = !(v25 | v26);
  __asm
  {
    vcomiss xmm13, xmm6
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm12, xmm5
    vcomiss xmm10, xmm4
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm9, xmm3
    vxorps  xmm9, xmm9, xmm9
  }
  v148 = PM_IsInAirForAimSpread(pm);
  if ( v148 )
  {
    __asm { vmulss  xmm8, xmm8, [rbp+0C0h+var_FC] }
    v44 = !v162;
    if ( v162 )
    {
      __asm
      {
        vmovss  xmm9, [rbp+0C0h+var_130]
        vmovss  xmm10, [rbp+0C0h+var_F8]
        vmovss  xmm6, [rbp+0C0h+var_12C]
      }
    }
  }
  else if ( BG_CanSprintFire(_RDI) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x14u) )
  {
    __asm { vmulss  xmm8, xmm8, [rbp+0C0h+var_F4] }
    v44 = !v162;
    if ( v162 )
    {
      __asm
      {
        vmovss  xmm9, [rbp+0C0h+var_128]
        vmovss  xmm10, [rbp+0C0h+var_F0]
        vmovss  xmm6, [rbp+0C0h+var_124]
      }
    }
  }
  else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RDI->eFlags, ACTIVE, 4u) )
  {
    __asm { vmulss  xmm8, xmm8, [rbp+0C0h+var_EC] }
    v44 = !v162;
    if ( v162 )
    {
      __asm
      {
        vmovss  xmm9, [rbp+0C0h+var_120]
        vmovss  xmm10, [rbp+0C0h+var_E8]
        vmovss  xmm6, [rbp+0C0h+var_11C]
      }
    }
  }
  else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RDI->eFlags, ACTIVE, 3u) )
  {
    v44 = !v162;
    __asm { vmulss  xmm8, xmm8, [rbp+0C0h+var_E4] }
    if ( v162 )
    {
      __asm
      {
        vmovss  xmm9, [rbp+0C0h+hipSpreadDuckedMin]
        vmovss  xmm10, [rbp+0C0h+hipSpreadDuckedMoveMax]
        vmovss  xmm6, [rbp+0C0h+var_114]
      }
    }
  }
  else
  {
    v44 = !v162;
    if ( v162 )
    {
      __asm
      {
        vmovss  xmm9, [rbp+0C0h+outSlideSpreadMin]
        vmovss  xmm10, [rbp+0C0h+outSlideSpreadMoveMax]
        vmovss  xmm6, [rbp+0C0h+outSlideSpreadMax]
      }
    }
  }
  __asm
  {
    vsubss  xmm2, xmm6, xmm9
    vcomiss xmm2, xmm7
    vmovss  [rbp+0C0h+staticSpreadScale], xmm7
    vmovss  [rbp+0C0h+moveSpreadScale], xmm14
  }
  if ( !v44 )
  {
    __asm
    {
      vdivss  xmm6, xmm11, xmm2
      vsubss  xmm0, xmm10, xmm9
      vmulss  xmm1, xmm0, dword ptr [rdi+770h]
      vmulss  xmm0, xmm1, xmm6; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm11; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovd   xmm2, dword ptr [rdi+75Ch]
      vmulss  xmm1, xmm0, xmm14
      vcvtdq2ps xmm2, xmm2
      vsubss  xmm0, xmm2, xmm9
      vmovss  [rbp+0C0h+moveSpreadScale], xmm1
      vmulss  xmm1, xmm0, xmm6
      vmovss  [rbp+0C0h+spreadOverrideScale], xmm1
    }
  }
  BG_GameInterface_ModifyAimSpreadScales(_RDI, &staticSpreadScale, &moveSpreadScale, &spreadOverrideScale);
  v62 = _RDI->weapCommon.spreadOverrideState <= 1u;
  __asm { vmulss  xmm10, xmm8, xmm15 }
  if ( _RDI->weapCommon.spreadOverrideState == 1 )
  {
    __asm
    {
      vmovss  xmm0, [rbp+0C0h+spreadOverrideScale]
      vcomiss xmm0, xmm7
    }
    if ( _RDI->weapCommon.spreadOverrideState > 1u )
      __asm { vdivss  xmm10, xmm10, xmm0 }
  }
  else
  {
    __asm { vucomiss xmm11, dword ptr [rdi+730h] }
    if ( _RDI->weapCommon.spreadOverrideState != 1 )
    {
      __asm { vmovss  xmm6, [rbp+0C0h+staticSpreadScale] }
      v66 = GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&_RDI->linkFlags, GameModeFlagValues::ms_spValue, 8u);
      __asm { vmovss  xmm0, dword ptr [rdi+3Ch] }
      if ( v66 )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+40h]
          vmovss  xmm3, dword ptr [rdi+44h]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+40h]
          vmulss  xmm1, xmm1, xmm1
          vmulss  xmm2, xmm0, xmm0
        }
      }
      v76 = v148;
      __asm { vaddss  xmm9, xmm2, xmm1 }
      if ( !v148 )
      {
        __asm
        {
          vmovss  xmm0, [rbp+0C0h+hipSpreadMoveAdd]
          vucomiss xmm0, xmm7
        }
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+744h]
        vcomiss xmm1, xmm6
        vcomiss xmm6, xmm1
        vucomiss xmm6, xmm1
      }
      if ( v148 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm1, xmm1
          vmovsd  [rsp+200h+hipSpreadProneMin], xmm0
          vcvtss2sd xmm1, xmm6, xmm6
          vmovsd  [rsp+200h+hipSpreadDuckedMax], xmm1
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3891, ASSERT_TYPE_ASSERT, "( baselineSpreadScale ) == ( ps->weapCommon.aimSpreadScale )", "%s == %s\n\t%g, %g", "baselineSpreadScale", "ps->weapCommon.aimSpreadScale", *(double *)&hipSpreadDuckedMaxa, *(double *)&hipSpreadProneMina) )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm9, xmm9, xmm9
        vxorps  xmm10, xmm10, xmm10
      }
      if ( !v76 )
      {
        __asm
        {
          vmovss  xmm0, [rbp+0C0h+var_100]
          vucomiss xmm0, xmm7
        }
      }
      v84 = BG_WeaponDef(r_weapon, v163);
      v85 = v76 == 0;
      v62 = v76 == 0;
      if ( v76 )
      {
        v85 = !v84->jumpSpread;
        v62 = v85;
        if ( v84->jumpSpread )
        {
          __asm
          {
            vmulss  xmm1, xmm15, cs:AIR_SCALE
            vaddss  xmm9, xmm9, xmm1
          }
        }
      }
      __asm { vcomiss xmm9, xmm7 }
      if ( !v85 )
      {
        __asm
        {
          vmulss  xmm0, xmm9, xmm14
          vaddss  xmm1, xmm0, dword ptr [rdi+744h]
        }
LABEL_54:
        __asm { vmovss  dword ptr [rdi+744h], xmm1 }
        goto LABEL_55;
      }
    }
  }
  __asm { vcomiss xmm10, xmm7 }
  if ( !v62 )
  {
LABEL_53:
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+744h]
      vmulss  xmm1, xmm10, xmm14
      vsubss  xmm1, xmm0, xmm1
    }
    goto LABEL_54;
  }
LABEL_55:
  __asm
  {
    vmovaps xmm15, xmmword ptr [rsp+200h+r_weapon+8]
    vmovaps xmm13, [rsp+200h+var_B8+8]
    vmovaps xmm12, [rsp+200h+var_A8+8]
    vmovaps xmm11, [rsp+200h+var_98+8]
    vmovaps xmm10, [rsp+200h+var_88+8]
    vmovaps xmm9, [rsp+200h+var_78+8]
    vmovaps xmm8, [rsp+200h+var_68+8]
  }
  if ( _RDI->weapCommon.spreadOverrideState == 1 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+744h]
      vmulss  xmm0, xmm1, [rbp+0C0h+spreadOverrideScale]
      vcomiss xmm0, xmm14
    }
    if ( !_RDI->weapCommon.spreadOverrideState )
    {
      _RDI->weapCommon.spreadOverrideState = 0;
      __asm
      {
        vmulss  xmm0, xmm1, [rbp+0C0h+spreadOverrideScale]
        vmovss  dword ptr [rdi+744h], xmm0
      }
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+744h]
    vmovss  [rbp+0C0h+arg_0], xmm0
  }
  if ( (v161 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3938, ASSERT_TYPE_SANITY, "( !IS_NAN( ps->weapCommon.aimSpreadScale ) )", (const char *)&queryFormat, "!IS_NAN( ps->weapCommon.aimSpreadScale )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+744h]; val
    vmovaps xmm2, xmm14; max
    vmovaps xmm1, xmm7; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm14, [rsp+200h+var_C8+8]
    vmovaps xmm7, [rsp+200h+var_58+8]
    vmovss  dword ptr [rdi+744h], xmm0
  }
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3632, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  aimSpreadStateCurrent = ps->weapCommon.aimSpreadStateCurrent;
  if ( aimSpreadStateCurrent >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3636, ASSERT_TYPE_ASSERT, "(lastState < AIM_SPREAD_STATE_COUNT)", (const char *)&queryFormat, "lastState < AIM_SPREAD_STATE_COUNT") )
    __debugbreak();
  if ( PM_IsInAirForAimSpread(pm) )
  {
    v40 = 6;
  }
  else if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
  {
    if ( BG_CanSprintFire(ps) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
    {
      v40 = 5;
    }
    else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 4u) )
    {
      v40 = 3;
    }
    else
    {
      v40 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 3u) + 1;
    }
  }
  if ( v40 != aimSpreadStateCurrent )
  {
    ps->weapCommon.aimSpreadStateLast = aimSpreadStateCurrent;
    ps->weapCommon.aimSpreadStateCurrent = v40;
    ps->weapCommon.aimSpreadStateChangeTime = pm->cmd.serverTime;
  }
  v109 = DCONST_DVARBOOL_bg_aimSpreadDebugLog;
  if ( !DCONST_DVARBOOL_bg_aimSpreadDebugLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_aimSpreadDebugLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v109);
  if ( v109->current.enabled )
  {
    __asm { vmovss  xmm6, dword ptr [rdi+744h] }
    serverTime = pm->cmd.serverTime;
    __asm { vcvtss2sd xmm6, xmm6, xmm6 }
    v113 = pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler);
    LODWORD(fmt) = serverTime;
    v114 = 83i64;
    __asm { vmovaps xmm3, xmm6 }
    if ( v113 )
      v114 = 67i64;
    __asm { vmovq   r9, xmm3 }
    Com_Printf(17, "%c: PM_AdjustAimSpreadScale: Aim spread scale: %.5f Time: %d\n", v114, _R9, fmt);
  }
  __asm { vmovaps xmm6, [rsp+200h+var_48+8] }
}

/*
==============
PM_BeginWeaponChange
==============
*/
void PM_BeginWeaponChange(pmove_t *pm, pml_t *pml, const Weapon *newweapon, bool isNewAlternate, bool quick)
{
  __int64 weaponIdx; 
  const dvar_t *v11; 
  bool v12; 
  const char *szInternalName; 
  bool v15; 
  int v16; 
  bool v17; 
  bool v18; 
  WeaponSlot EquippedSlot; 
  bool v20; 
  int weaponState; 
  const dvar_t *v22; 
  bool v23; 
  const char *v24; 
  BgWeaponMap *weaponMap; 
  bool v26; 
  const dvar_t *v27; 
  bool v28; 
  const char *v29; 
  bool v30; 
  bool v31; 
  int v32; 
  const Weapon *ViewmodelWeapon; 
  BOOL v34; 
  bool v35; 
  int v36; 
  unsigned int v37; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  bool v40; 
  const Weapon *v41; 
  int PlayerAnimType; 
  bool IsDualWield; 
  const BgHandler *m_bgHandler; 
  bool IsSkydiving; 
  int WeaponHand; 
  int v47; 
  QueuedActionState *p_queuedActionState; 
  __int64 v49; 
  bool v53; 
  bool v54; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  int v56; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 
  bool usedBefore; 
  const dvar_t *v59; 
  bool v60; 
  const char *v61; 
  bool v62; 
  const WeaponDef *v63; 
  int EquippedWeaponIndex; 
  __int64 v65; 
  bool v66; 
  const dvar_t *v67; 
  bool v68; 
  weapInventoryType_t inventoryType; 
  const WeaponDef *v70; 
  const BgHandler *v71; 
  bool v72; 
  PlayerHandIndex v73; 
  char v74; 
  bool v75; 
  LadderDrop v76; 
  bool v77; 
  int v78; 
  int v79; 
  int pm_type; 
  WeaponAnimNumber v81; 
  bool v82; 
  PlayerHandIndex v83; 
  int *p_weaponTime; 
  bool v86; 
  bool v87; 
  bool v88; 
  const dvar_t *v89; 
  const char *v90; 
  int v94; 
  bool v95; 
  int v96; 
  const dvar_t *v97; 
  const dvar_t *v101; 
  bool IsScriptedSceneAnimFlagEnabled; 
  pml_t *v107; 
  bool v108; 
  char v109; 
  bool v110; 
  PlayerAnimScriptEventType v114; 
  unsigned int *holdrand; 
  unsigned int *holdranda; 
  int *outWeaponAnim; 
  unsigned int outWeaponAnima; 
  bool v119; 
  char v120; 
  bool v121; 
  bool v122; 
  bool IsWeaponMeleeOverride; 
  char v124; 
  char v125; 
  bool v126; 
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
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5450, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
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
  if ( newweapon->weaponIdx && !BG_PlayerHasWeapon(pm->weaponMap, _RDI, newweapon) )
  {
    v11 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
    {
      v12 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      szInternalName = BG_WeaponCompleteDef(newweapon, 0)->szInternalName;
      if ( v12 )
        Com_Printf(17, "HighPriorityDebug - PM_BeginWeaponChange SERVER with %s failed, !BG_PlayerHasWeapon\n", szInternalName);
      else
        Com_Printf(17, "HighPriorityDebug - PM_BeginWeaponChange CLIENT with %s failed, !BG_PlayerHasWeapon\n", szInternalName);
    }
    return;
  }
  _R13 = BG_GetCurrentWeaponForPlayer(pm->weaponMap, _RDI);
  v15 = (unsigned int)(_RDI->weapState[0].weaponState - 9) <= 1;
  v16 = memcmp_0(_R13, newweapon, 0x3Cui64);
  v17 = v16 == 0;
  v18 = v15 && v16;
  EquippedSlot = BG_PlayerWeaponGetEquippedSlot(pm->weaponMap, _RDI, _R13);
  v20 = BG_Ladder_ShouldEarlyOutDroppingCurrentNonPrimaryWeapon(_RDI, EquippedSlot, _R13, newweapon) && !v17;
  weaponState = _RDI->weapState[0].weaponState;
  if ( ((unsigned int)(weaponState - 7) <= 5 || weaponState == 50) && !v18 && !v20 )
  {
    v22 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.enabled )
    {
      v23 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      v24 = BG_WeaponCompleteDef(newweapon, 0)->szInternalName;
      if ( v23 )
        Com_Printf(17, "HighPriorityDebug - PM_BeginWeaponChange SERVER with %s failed, WEAPONSTATE_DROPPING\n", v24);
      else
        Com_Printf(17, "HighPriorityDebug - PM_BeginWeaponChange CLIENT with %s failed, WEAPONSTATE_DROPPING\n", v24);
    }
    return;
  }
  weaponMap = pm->weaponMap;
  v26 = BG_UsingAlternate(_RDI);
  if ( BG_WeaponDef(newweapon, v26)->disableSwitchToWhenEmpty && !BG_WeaponAmmo(weaponMap, _RDI, newweapon, v26) )
  {
    v27 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( v27->current.enabled )
    {
      v28 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      v29 = BG_WeaponCompleteDef(newweapon, 0)->szInternalName;
      if ( v28 )
        Com_Printf(17, "HighPriorityDebug - PM_BeginWeaponChange SERVER with %s failed, BG_WeaponDisableSwitchToEmpty\n", v29);
      else
        Com_Printf(17, "HighPriorityDebug - PM_BeginWeaponChange CLIENT with %s failed, BG_WeaponDisableSwitchToEmpty\n", v29);
    }
    return;
  }
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x28u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x27u);
  IsWeaponMeleeOverride = BG_IsWeaponMeleeOverride(pm->weaponMap, _RDI, newweapon);
  PM_HighPriorityWeapon_OnBeginWeaponChange(pm, newweapon);
  v30 = isNewAlternate && BG_HasUnderbarrelAmmo(newweapon);
  v119 = v30;
  if ( newweapon->weaponIdx )
  {
    v31 = quick;
    if ( BG_GetWeaponClass(newweapon, v30) == WEAPCLASS_PISTOL )
      v31 = 1;
    v121 = v31;
  }
  else
  {
    v121 = quick;
  }
  v126 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, GameModeFlagValues::ms_spValue, 0x29u);
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, GameModeFlagValues::ms_spValue, 0x21u) )
  {
    v121 = 0;
  }
  else if ( v126 || IsWeaponMeleeOverride )
  {
    v121 = 1;
  }
  v32 = 1;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x1Du) )
    Slide_PlayOrStopGesture(_RDI, pm->weaponMap, pm->m_bgHandler, pm->cmd.serverTime, SLIDEGESTUREREQUEST_STOP);
  if ( BG_PWF_UseAlternateAsOffhand(_RDI) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
    ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, _RDI);
    v34 = BG_HasUnderbarrelWeapon(ViewmodelWeapon) && !BG_HasUnderbarrelWeapon(newweapon);
    v35 = v119;
    if ( !v119 )
    {
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x11u) )
        goto LABEL_87;
      v35 = 0;
    }
    v32 = 0;
    if ( v35 && !memcmp_0(_R13, newweapon, 0x3Cui64) && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x11u) )
    {
      v36 = 1;
LABEL_88:
      if ( v34 || v32 )
      {
        PM_Weapon_SetOffhandUnderbarrelMode(pm->weaponMap, _RDI, 0);
      }
      else if ( v36 )
      {
        BG_SetPlayerUsingOffhandUnderbarrelWeapon(_RDI, 0);
      }
      goto LABEL_93;
    }
LABEL_87:
    v36 = 0;
    goto LABEL_88;
  }
LABEL_93:
  v37 = _RDI->weapState[0].weaponState;
  if ( v37 - 18 <= 3 )
    BG_AddPredictableEventToPlayerstate(EV_STOP_WEAPON_SOUND, v37, pm->cmd.serverTime, pm->weaponMap, _RDI);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    CharacterInfo = BG_GetCharacterInfo(ActiveStatics, _RDI->clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5597, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    v40 = v119 && (!v17 || !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x11u));
    v41 = newweapon;
    PlayerAnimType = BG_WeaponGetPlayerAnimType(newweapon, v40);
    BG_SetConditionBit(CharacterInfo, 13, PlayerAnimType);
    IsDualWield = BG_WeaponIsDualWield(newweapon);
    BG_SetConditionValue(CharacterInfo, 14, IsDualWield);
    if ( v119 )
    {
      m_bgHandler = pm->m_bgHandler;
      holdranda = &pml->holdrand;
      if ( v40 )
        BG_AnimScriptEvent(m_bgHandler, _RDI, ANIM_ET_ENTERALTMODE, 0, 0, holdranda);
      else
        BG_AnimScriptEvent(m_bgHandler, _RDI, ANIM_ET_EXITALTMODE, 0, 0, holdranda);
    }
  }
  else
  {
    v41 = newweapon;
  }
  IsSkydiving = BG_Skydive_IsSkydiving(_RDI);
  if ( !IsSkydiving )
  {
    BG_SetWeaponDelay(pm->weaponMap, _RDI, WEAPON_HAND_DEFAULT, 0, NULL);
    BG_SetWeaponDelay(pm->weaponMap, _RDI, WEAPON_HAND_LEFT, 0, NULL);
  }
  PM_Weapon_Charge_ClearState(pm, WEAPON_HAND_DEFAULT);
  PM_Weapon_Charge_ClearState(pm, WEAPON_HAND_LEFT);
  WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, _RDI);
  v47 = WeaponHand;
  if ( WeaponHand >= 0 )
  {
    p_queuedActionState = &_RDI->weapState[0].queuedActionState;
    v49 = WeaponHand + 1i64;
    do
    {
      *p_queuedActionState = QAS_STATE_NONE;
      p_queuedActionState += 20;
      --v49;
    }
    while ( v49 );
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+0]
    vmovups ymmword ptr [rsp+118h+weaponFrom.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [r13+20h]
    vmovups xmmword ptr [rsp+118h+weaponFrom.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [r13+30h]
    vmovsd  qword ptr [rsp+118h+weaponFrom.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&weaponFrom.weaponCamo = *(_DWORD *)&_R13->weaponCamo;
  v54 = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT_ADS|0x80) )
  {
    v53 = BG_UsingAlternate(_RDI);
    if ( BG_IsFauxFists(_RDI, &weaponFrom, v53) )
      v54 = 1;
  }
  if ( weaponFrom.weaponIdx && !IsSkydiving && BG_PlayerHasWeapon(pm->weaponMap, _RDI, &weaponFrom) && (_RDI->grenadeTimeLeft <= 0 || BG_IsUsingOffhandGestureWeapon(_RDI)) )
  {
    p_weapFlags = &_RDI->weapCommon.weapFlags;
    if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x18u) && !v54 && !v20 )
    {
      v56 = 0;
      goto LABEL_129;
    }
  }
  else
  {
    p_weapFlags = &_RDI->weapCommon.weapFlags;
  }
  v56 = 1;
LABEL_129:
  EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(pm->weaponMap, _RDI, &weaponFrom);
  if ( EquippedWeaponStateNonConst )
  {
    usedBefore = EquippedWeaponStateNonConst->usedBefore;
    EquippedWeaponStateNonConst->usedBefore = 1;
  }
  else
  {
    usedBefore = 0;
  }
  if ( v119 && !usedBefore )
  {
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x11u);
    v59 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v59);
    if ( v59->current.enabled )
    {
      v60 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      v61 = BG_WeaponCompleteDef(v41, 0)->szInternalName;
      if ( v60 )
        Com_Printf(17, "HighPriorityDebug - PM_BeginWeaponChange SERVER with %s returned early, isNewAlternate\n", v61);
      else
        Com_Printf(17, "HighPriorityDebug - PM_BeginWeaponChange CLIENT with %s returned early, isNewAlternate\n", v61);
    }
    return;
  }
  if ( v56 )
  {
    G_DebugPlayerAnimScript_Print(_RDI->clientNum, "end weapon (begin weapon change)\n");
    if ( !BG_Offhand_HasActiveOffhand(_RDI) )
      _RDI->grenadeTimeLeft = 0;
    PM_SetProneMovementOverride(_RDI);
    PM_Weapon_FinishWeaponChange(pm, pml, _RDI->weapState[0].weaponState, 0, v121);
    return;
  }
  v62 = BG_WeaponIsDualWield(v41);
  v63 = BG_WeaponDef(_R13, v119);
  if ( !v62 || (v120 = 1, v63->dualWieldType != DUAL_WIELD_TYPE_ALT_MODE) )
    v120 = 0;
  dropType = BG_Ladder_GetDropType(pm, v41, _R13);
  if ( !BG_Offhand_HasActiveOffhand(_RDI) )
    _RDI->grenadeTimeLeft = 0;
  EquippedWeaponIndex = BG_GetEquippedWeaponIndex(pm->weaponMap, _RDI, v41);
  v65 = EquippedWeaponIndex;
  if ( (unsigned int)EquippedWeaponIndex >= 0xF )
  {
    LODWORD(outWeaponAnim) = 15;
    LODWORD(holdrand) = EquippedWeaponIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5710, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", holdrand, outWeaponAnim) )
      __debugbreak();
  }
  BG_AddPredictableEventToPlayerstate(EV_WEAPON_SWITCH_STARTED, _RDI->weaponsEquipped[v65].m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, _RDI);
  if ( dropType )
    BG_AddPredictableEventToPlayerstate(EV_WEAPON_SWITCH_CANCELED, _RDI->weaponsEquipped[v65].m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, _RDI);
  v66 = BG_PlayerDualWielding(_RDI) == 1;
  v122 = v66;
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x15u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x16u);
  if ( (unsigned int)BG_Weapons_IsPrimaryWeaponSwitch(_RDI, &weaponFrom, v41, v119) )
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x15u);
  if ( IsWeaponMeleeOverride )
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x16u);
  v67 = DVARBOOL_perk_quickswap_primary_item_swap_enabled;
  v68 = 0;
  if ( !DVARBOOL_perk_quickswap_primary_item_swap_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_quickswap_primary_item_swap_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v67);
  if ( v67->current.enabled )
    v68 = weaponFrom.weaponIdx && v41->weaponIdx && ((inventoryType = BG_WeaponDef(&weaponFrom, 0)->inventoryType, v70 = BG_WeaponDef(v41, 0), inventoryType == WEAPINVENTORY_PRIMARY) || inventoryType == WEAPINVENTORY_ALTMODE) && v70->inventoryType == WEAPINVENTORY_ITEM;
  v125 = 0;
  if ( BG_HasPerk(&_RDI->perks, 0x2Bu) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x15u) || v68) )
  {
    v71 = pm->m_bgHandler;
    v72 = BG_UsingAlternate(_RDI);
    if ( BG_UseQuickSwitchAnims(_RDI, _R13, v72, v66, v71, 0) )
      v121 = 1;
    else
      v125 = 1;
  }
  LOBYTE(v73) = 0;
  v124 = 0;
  if ( !v119 )
  {
    if ( _RDI->weapState[0].weaponState == 16 )
      PM_AddEvent(pm, EV_FIRE_WEAPON_END);
    PM_AddEvent(pm, EV_PUTAWAY_WEAPON);
    v73 = WEAPON_HAND_DEFAULT;
    if ( v47 < 0 )
    {
      v74 = v120;
      goto LABEL_206;
    }
    v76 = dropType;
    v77 = v121;
    while ( 1 )
    {
      if ( dropType )
      {
LABEL_204:
        v74 = v120;
        LOBYTE(v73) = 0;
        goto LABEL_207;
      }
      v79 = PM_WeaponClipEmpty(pm->weaponMap, _RDI, v73);
      pm_type = _RDI->pm_type;
      if ( v79 )
      {
        if ( pm_type < 7 )
        {
          v81 = WEAP_EMPTY_DROP;
LABEL_202:
          PM_SetNextWeaponAnim(_RDI, v81, v73);
        }
      }
      else if ( v121 )
      {
        if ( pm_type < 7 )
        {
          v81 = WEAP_QUICK_DROP;
          goto LABEL_202;
        }
      }
      else if ( pm_type < 7 )
      {
        v81 = WEAP_MELEE_LAST;
        goto LABEL_202;
      }
      if ( ++v73 > v47 )
        goto LABEL_204;
    }
  }
  PM_AddEvent(pm, EV_WEAPON_ALT);
  v74 = v120;
  if ( v120 )
  {
    PM_StartWeaponAnimBothHands(_RDI, WEAP_ALTSWITCHFROM_AKIMBO);
    if ( BG_Offhand_HasActiveOffhand(_RDI) && BG_Offhand_IsPlayingGesture(pm->weaponMap, _RDI, OHGT_WEAPON) )
      BG_OffhandGestureScriptWeaponEnd(pm->weaponMap, _RDI, pm->cmd.serverTime, 0);
  }
  else
  {
    if ( BG_InADS(_RDI) && !memcmp_0(_R13, v41, 0x3Cui64) )
    {
      v75 = BG_UsingAlternate(_RDI);
      if ( BG_IsAimDownSight(_R13, !v75) && BG_HasADSAltSwitchAnims(_RDI, pm->m_bgHandler) )
      {
        LOBYTE(v73) = 1;
        v124 = 1;
        PM_StartWeaponAnimBothHands(_RDI, WEAP_ALTSWITCHFROM_ADS);
        v76 = dropType;
        v77 = v121;
        goto LABEL_186;
      }
    }
    PM_StartWeaponAnimBothHands(_RDI, WEAP_RELOAD_LAST);
  }
LABEL_206:
  v76 = dropType;
  v77 = v121;
LABEL_207:
  if ( v74 )
  {
    v78 = 11;
    _RDI->weapState[0].weaponState = 11;
    goto LABEL_212;
  }
LABEL_186:
  if ( v119 )
  {
    v78 = (unsigned __int8)v73 + 9;
    _RDI->weapState[0].weaponState = v78;
  }
  else if ( v77 )
  {
    v78 = 8;
    _RDI->weapState[0].weaponState = 8;
  }
  else
  {
    _RDI->weapState[0].weaponState = 7;
    v78 = 7;
  }
LABEL_212:
  v82 = v122;
  if ( v122 )
    _RDI->weapState[1].weaponState = v78;
  PM_SetProneMovementOverride(_RDI);
  v83 = WEAPON_HAND_DEFAULT;
  if ( BG_PlayerLastWeaponHand(pm->weaponMap, _RDI) >= WEAPON_HAND_DEFAULT )
  {
    __asm { vmovaps [rsp+118h+var_58], xmm6 }
    p_weaponTime = &_RDI->weapState[0].weaponTime;
    __asm { vxorps  xmm6, xmm6, xmm6 }
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
          BG_Ladder_GetDropStateTimeAnim(pm, dropType, &weaponFrom, v83, &_RDI->weapState[v83].weaponState, &_RDI->weapState[v83].weaponTime, (int *)&anim);
          if ( _RDI->pm_type < 7 )
            PM_SetNextWeaponAnim(_RDI, anim, v83);
        }
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x32u);
        __asm { vcomiss xmm6, dword ptr [rdi+730h] }
        if ( v109 )
          PM_ExitAimDownSight(pm);
        goto LABEL_248;
      }
      if ( v120 )
      {
        v86 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x1Bu));
        *p_weaponTime = BG_AltDropAkimboTime(_RDI, &weaponFrom, v86, v82);
        goto LABEL_248;
      }
      if ( v119 )
      {
        v87 = BG_UsingAlternate(_RDI);
        if ( v124 )
          *p_weaponTime = BG_AltDropADSTime(_RDI, &weaponFrom, v87, v82);
        else
          *p_weaponTime = BG_AltDropTime(_RDI, &weaponFrom, v87, v82);
        goto LABEL_248;
      }
      if ( !v121 )
      {
        v94 = PM_WeaponClipEmpty(pm->weaponMap, _RDI, v83);
        v95 = BG_UsingAlternate(_RDI);
        if ( v94 )
          v96 = BG_EmptyDropTime(_RDI, &weaponFrom, v95, v122);
        else
          v96 = BG_DropTime(_RDI, &weaponFrom, v95, v122);
        *p_weaponTime = v96;
        goto LABEL_248;
      }
      v88 = BG_UsingAlternate(_RDI);
      *p_weaponTime = BG_QuickDropTime(_RDI, &weaponFrom, v88, v82);
      if ( IsWeaponMeleeOverride )
        break;
      if ( v126 )
      {
        v89 = DVARFLT_bg_quickWeaponSwitchSpeedScaleSP;
        if ( !DVARFLT_bg_quickWeaponSwitchSpeedScaleSP )
        {
          v90 = "bg_quickWeaponSwitchSpeedScaleSP";
          goto LABEL_241;
        }
LABEL_243:
        Dvar_CheckFrontendServerThread(v89);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [r14]
          vmulss  xmm0, xmm0, dword ptr [rbx+28h]
          vcvttss2si eax, xmm0
        }
        *p_weaponTime = _EAX;
      }
LABEL_248:
      if ( v125 )
      {
        v97 = DCONST_DVARFLT_perk_weapSwapMultiplier;
        if ( !DCONST_DVARFLT_perk_weapSwapMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_weapSwapMultiplier") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v97);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [r14]
          vmulss  xmm0, xmm0, dword ptr [rbx+28h]
          vcvttss2si eax, xmm0
        }
        *p_weaponTime = _EAX;
        if ( v126 )
        {
          v101 = DVARFLT_bg_quickWeaponSwitchSpeedScaleSP;
          if ( !DVARFLT_bg_quickWeaponSwitchSpeedScaleSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_quickWeaponSwitchSpeedScaleSP") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v101);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [r14]
            vmulss  xmm0, xmm0, dword ptr [rbx+28h]
            vcvttss2si eax, xmm0
          }
          *p_weaponTime = _EAX;
        }
      }
      ++v83;
      p_weaponTime += 20;
      v82 = v122;
      if ( v83 > BG_PlayerLastWeaponHand(pm->weaponMap, _RDI) )
      {
        v41 = newweapon;
        v76 = dropType;
        __asm { vmovaps xmm6, [rsp+118h+var_58] }
        goto LABEL_259;
      }
    }
    v89 = DCONST_DVARFLT_player_meleeOverrideQuickDropScale;
    if ( !DCONST_DVARFLT_player_meleeOverrideQuickDropScale )
    {
      v90 = "player_meleeOverrideQuickDropScale";
LABEL_241:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v90) )
        __debugbreak();
    }
    goto LABEL_243;
  }
LABEL_259:
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) || (IsScriptedSceneAnimFlagEnabled = BG_IsScriptedSceneAnimFlagEnabled(_RDI), !BG_IsThrowingAxe(v41)) && v119 && !v120 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 5u) || IsScriptedSceneAnimFlagEnabled || !BG_Ladder_DropLowersWeapon(v76) || IsWeaponMeleeOverride )
  {
    v107 = pml;
  }
  else
  {
    v107 = pml;
    if ( !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&_RDI->linkFlags, ACTIVE, 2u) )
    {
      BG_AnimScriptEvent(pm->m_bgHandler, _RDI, ANIM_ET_DROPWEAPON, 0, 1, &pml->holdrand);
      v108 = v121;
      v109 = 0;
      v110 = !v121;
      if ( v121 )
        BG_AnimScriptEvent(pm->m_bgHandler, _RDI, ANIM_ET_DROPWEAPONQUICK, 0, 1, &pml->holdrand);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rdi+53Ch]
        vmulss  xmm1, xmm0, cs:__real@3a83126f
        vcomiss xmm1, cs:__real@3e4ccccd
      }
      if ( v109 | v110 )
      {
        v114 = ANIM_ET_DROPWEAPON_TIME_0_2;
      }
      else
      {
        __asm { vcomiss xmm1, cs:__real@3ecccccd }
        if ( v109 | v110 )
        {
          v114 = ANIM_ET_DROPWEAPON_TIME_0_4;
        }
        else
        {
          __asm { vcomiss xmm1, cs:__real@3f19999a }
          if ( v109 | v110 )
          {
            v114 = ANIM_ET_DROPWEAPON_TIME_0_6;
          }
          else
          {
            __asm { vcomiss xmm1, cs:__real@3f4ccccd }
            if ( v109 | v110 )
            {
              v114 = ANIM_ET_DROPWEAPON_TIME_0_8;
            }
            else
            {
              __asm { vcomiss xmm1, cs:__real@3f800000 }
              if ( v109 | v110 )
              {
                v114 = ANIM_ET_DROPWEAPON_TIME_1_0;
              }
              else
              {
                __asm { vcomiss xmm1, cs:__real@3f99999a }
                v114 = ANIM_ET_DROPWEAPON_TIME_1_2;
              }
            }
          }
        }
      }
      BG_AnimScriptEvent(pm->m_bgHandler, _RDI, v114, 0, 0, &pml->holdrand);
      goto LABEL_284;
    }
  }
  v108 = v121;
LABEL_284:
  if ( !_RDI->weapState[0].weaponTime )
    PM_Weapon_FinishWeaponChange(pm, v107, _RDI->weapState[0].weaponState, 0, v108);
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
  bool v37; 
  int IsClipOnly; 
  unsigned int *v39; 
  unsigned __int64 v40; 
  bool IsBulletClipEmpty; 
  bool v42; 
  WeaponAnimNumber v43; 
  const BgHandler *v44; 
  int v45; 
  unsigned __int64 v46; 
  int v47; 
  int v48; 
  bool hasFastReloadOverride; 
  bool v50; 
  int outAmmoInClip; 
  unsigned int *p_holdrand; 
  unsigned __int64 v53; 
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
  v50 = v11 == 1;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v53 = 80 * v4;
  v14 = (unsigned int)(ps->weapState[v4].weaponState - 34) > 2;
  CanSprintReload = BG_CanSprintReload(ps);
  v16 = v14;
  v17 = v4;
  if ( CanSprintReload )
    v16 = 1;
  weaponState = ps->weapState[v53 / 0x50].weaponState;
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
      started = BG_ReloadStartTime(ps, m_bgHandler, (const PlayerHandIndex)v4, CurrentWeaponForPlayer, v10, v50, ammoInClip, &hasFastReloadOverride);
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
              _RAX = BG_AmmoStoreForWeapon(&result, CurrentWeaponForPlayer, v10);
              __asm
              {
                vmovups ymm0, ymmword ptr [rax]
                vmovups ymmword ptr [rsp+138h+r_clipIndex.weapon.weaponIdx], ymm0
                vmovups ymm1, ymmword ptr [rax+20h]
                vmovups ymmword ptr [rsp+138h+r_clipIndex.weapon.attachmentVariationIndices+5], ymm1
              }
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
            v37 = BG_UsingAlternate(ps);
            IsClipOnly = BG_WeaponIsClipOnly(CurrentWeaponForPlayer, v37);
            v39 = p_holdrand;
            if ( !IsClipOnly )
              BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RELOAD_START, 0, 1, p_holdrand);
          }
          else
          {
            v39 = p_holdrand;
          }
          v40 = v53;
          ps->weapState[v53 / 0x50].weaponTime = started;
          *(int *)((char *)&ps->weapState[0].weaponState + v40) = 19;
          PM_AddEvent(pm, EV_RELOAD_START);
          if ( BG_GetWeaponAltReloadAnimsEnabled(CurrentWeaponForPlayer, v10) )
            BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_ALT_RELOAD_ANIMS, 0, 1, v39);
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
      v42 = IsBulletClipEmpty;
      if ( v30 == RELOAD_TYPE_MULTIPLE_PERCENTAGE && IsBulletClipEmpty )
      {
        if ( ps->pm_type >= 7 )
          goto LABEL_68;
        v43 = WEAP_RELOAD_EMPTY;
      }
      else
      {
        if ( ps->pm_type >= 7 )
          goto LABEL_68;
        v43 = WEAP_RELOAD_FIRST;
      }
      PM_SetNextWeaponAnim(ps, v43, (PlayerHandIndex)v4);
LABEL_68:
      v44 = pm->m_bgHandler;
      if ( v30 == RELOAD_TYPE_MULTIPLE_BULLET )
        v45 = BG_ReloadMultipleTimeBulletBased(ps, v44, (const PlayerHandIndex)v4, CurrentWeaponForPlayer, v10, &hasFastReloadOverride);
      else
        v45 = BG_ReloadMultipleTimePercentageBased(ps, v44, (const PlayerHandIndex)v4, CurrentWeaponForPlayer, v10, &hasFastReloadOverride);
      v46 = v53;
      ps->weapState[v53 / 0x50].weaponTime = v45;
      v47 = outAmmoInClip;
      *(int *)((char *)&ps->weapState[0].weaponState + v46) = 18;
      v48 = BG_ReloadStartAddTime(ps, CurrentWeaponForPlayer, v10, 0, v47, 0, &hasFastReloadOverride);
      BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v4, v48, "Reload Start Add Time");
      PM_AddEvent(pm, (const entity_event_t)(v42 + 23));
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
  bool v11; 
  bool v12; 
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
  _RAX = BG_GetViewmodelWeapon(weaponMap, ps);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0B778h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0B778h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0B778h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  v11 = BG_PlayerDualWieldingWeapon(weaponMap, ps, &r_weapon) != 0;
  v12 = BG_UsingAlternate(ps);
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
  BG_BuildWeaponAnimArrays(ps, &r_weapon, v11, v12, &outAnimArrays, normalAnimArray->normalAnimArray, normalAnimArray->blendSpaces, normalAnimArray->altAnimArray, normalAnimArray->blendSpacesAlt, normalAnimArray->footsteps, WEAP_ANIM_ROOT, 608);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0B778h+r_weapon.weaponIdx]
    vmovups ymmword ptr [r15+4114h], ymm0
    vmovups xmm1, xmmword ptr [rsp+0B778h+r_weapon.attachmentVariationIndices+5]
    vmovups xmmword ptr [r15+4134h], xmm1
    vmovsd  xmm0, qword ptr [rsp+0B778h+r_weapon.attachmentVariationIndices+15h]
    vmovsd  qword ptr [r15+4144h], xmm0
  }
  *(_DWORD *)&normalAnimArray->weaponUsedForAnims.weaponCamo = *(_DWORD *)&r_weapon.weaponCamo;
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
  const dvar_t *v22; 
  playerState_s *v29; 
  int weaponTime; 
  const dvar_t *v31; 
  const Weapon *ViewmodelWeapon; 
  bool v33; 
  bool v34; 
  int v35; 
  int v36; 
  int v37; 
  float outAdsTransInSpeedMs; 
  float outAdsTransOutSpeedMs[3]; 
  float outNormalSpeedScale; 
  float outSniperSpeedScale; 

  __asm
  {
    vmovaps [rsp+0B8h+var_48], xmm6
    vmovaps [rsp+0B8h+var_58], xmm7
    vmovaps [rsp+0B8h+var_68], xmm8
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1668, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1668, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  weaponMap = pm->weaponMap;
  __asm { vmovaps xmm6, xmm7 }
  if ( BG_HasPerk(&ps->perks, 0x11u) )
  {
    __asm
    {
      vmovss  [rsp+0B8h+outNormalSpeedScale], xmm7
      vmovss  [rsp+0B8h+outSniperSpeedScale], xmm7
    }
    BG_GetQuickDrawPerkMultipliers(&outNormalSpeedScale, &outSniperSpeedScale);
    _EAX = BG_GetWeaponClass(weapon, isAlternate);
    __asm { vmovss  xmm2, [rsp+0B8h+outSniperSpeedScale] }
    _ECX = 1;
    __asm
    {
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, [rsp+0B8h+outNormalSpeedScale]
      vblendvps xmm6, xmm1, xmm2, xmm3
    }
  }
  if ( BG_IsThirdPersonMode(weaponMap, ps) )
  {
    v22 = DCONST_DVARFLT_camera_thirdPersonAdsTransScale;
    if ( !DCONST_DVARFLT_camera_thirdPersonAdsTransScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_thirdPersonAdsTransScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    __asm { vmulss  xmm6, xmm6, dword ptr [rdi+28h] }
  }
  BG_GetADSTransTimes(pm->weaponMap, ps, weapon, isAlternate, &outAdsTransInSpeedMs, outAdsTransOutSpeedMs);
  if ( adsIn )
  {
    __asm { vmovss  xmm0, [rsp+0B8h+outAdsTransInSpeedMs] }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+0B8h+var_74]
      vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
    }
  }
  __asm
  {
    vmovss  xmm8, cs:__real@447a0000
    vmulss  xmm0, xmm0, xmm8
    vmulss  xmm6, xmm0, xmm6
  }
  if ( adsIn && ps->weapState[0].weaponState == 36 )
  {
    v29 = pm->ps;
    if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1589, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v29->weapState[0].weaponState == 36 )
    {
      v31 = DCONST_DVARMPBOOL_movementAnimProto;
      if ( !DCONST_DVARMPBOOL_movementAnimProto && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movementAnimProto") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      if ( v31->current.enabled )
      {
        weaponTime = v29->weapState[0].weaponTime;
      }
      else
      {
        ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, v29);
        v33 = BG_UsingAlternate(v29);
        v34 = BG_PlayerDualWielding(v29) == 1;
        v35 = BG_SprintOutTime(pm->weaponMap, v29, ViewmodelWeapon, v33, v34);
        v36 = BG_SprintOutInterruptTime(pm->weaponMap, v29, ViewmodelWeapon, v33, v34);
        v37 = v36 + v29->weapState[0].weaponTime - v35;
        if ( !v36 )
          v37 = v29->weapState[0].weaponTime;
        weaponTime = 0;
        if ( v37 > 0 )
          weaponTime = v37;
      }
    }
    else
    {
      weaponTime = 0;
    }
    if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1616, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( weaponTime > 0 )
    {
      __asm
      {
        vsubss  xmm1, xmm7, dword ptr [rdi+730h]
        vxorps  xmm0, xmm0, xmm0
        vmaxss  xmm2, xmm1, xmm0
        vcvtss2sd xmm1, xmm2, xmm2
        vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebx
        vdivss  xmm0, xmm8, xmm0
        vmulss  xmm0, xmm0, xmm2
        vminss  xmm0, xmm0, xmm6
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:__real@7f7fffff
        vminss  xmm0, xmm0, xmm6
      }
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_48]
    vmovaps xmm7, [rsp+0B8h+var_58]
    vmovaps xmm8, [rsp+0B8h+var_68]
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
  const dvar_t *v5; 
  int v6; 
  int v8; 
  int holdBreathTimer; 
  int v12; 
  char v15; 
  const dvar_t *v18; 
  double v26; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2031, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2032, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = DCONST_DVARBOOL_player_scope_prototype;
  if ( !DCONST_DVARBOOL_player_scope_prototype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_scope_prototype") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled && BG_HasHoldBreathAbility(weaponMap, ps) )
  {
    v6 = BG_HoldBreathMaxTime(ps);
    _RDI = DCONST_DVARFLT_player_breath_fire_delay;
    v8 = v6;
    if ( !DCONST_DVARFLT_player_breath_fire_delay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breath_fire_delay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    holdBreathTimer = ps->holdBreathTimer;
    if ( holdBreathTimer < v8 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vmulss  xmm1, xmm0, cs:__real@c47a0000
        vcvttss2si eax, xmm1
      }
      v12 = holdBreathTimer - _EAX;
      if ( v12 > v8 )
        v12 = v8;
      ps->holdBreathTimer = v12;
    }
    _RDI = DVARFLT_perk_fastSnipeScale;
    if ( !DVARFLT_perk_fastSnipeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastSnipeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rdi+28h]
    }
    if ( !v15 )
    {
      _RDI = DVARFLT_perk_fastSnipeScale;
      if ( !DVARFLT_perk_fastSnipeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastSnipeScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+48h+var_20], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2052, ASSERT_TYPE_ASSERT, "( ( Dvar_GetFloat_Internal_DebugName( DVARFLT_perk_fastSnipeScale, \"perk_fastSnipeScale\" ) > 0.0f ) )", "( Dvar_GetFloat_Internal_DebugName( DVARFLT_perk_fastSnipeScale, \"perk_fastSnipeScale\" ) ) = %g", v26) )
        __debugbreak();
    }
    if ( BG_HasPerk(&ps->perks, 0x29u) )
    {
      v18 = DVARFLT_perk_fastSnipeScale;
      if ( !DVARFLT_perk_fastSnipeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastSnipeScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+350h]
        vdivss  xmm1, xmm0, dword ptr [rdi+28h]
        vaddss  xmm3, xmm1, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm1, xmm0, xmm3, 1
        vcvttss2si eax, xmm1
      }
      ps->holdBreathTimer = _EAX;
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
  const Weapon *CurrentWeaponForPlayer; 
  bool v6; 
  bool v7; 
  PlayerAnimScriptEventType v8; 
  bool IsUsingNightVision; 
  Gesture *Gesture; 
  Gesture *v11; 
  const Gesture *v12; 
  bool v13; 
  int serverTime; 
  BgWeaponMap *weaponMap; 
  const dvar_t *v17; 
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
  _R14 = pm->ps;
  if ( !_R14 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15598, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15600, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, _R14);
  v6 = BG_UsingAlternate(_R14);
  v7 = BG_PlayerDualWielding(_R14) != 0;
  v8 = ANIM_ET_DEACTIVATE_NVG;
  IsUsingNightVision = BG_IsUsingNightVision(_R14);
  Gesture = BG_Suit_GetGesture(_R14, WEAPON_HAND_DEFAULT, CurrentWeaponForPlayer, v6, v7, GESTUREANIMTYPE_NVG_ON);
  v11 = BG_Suit_GetGesture(_R14, WEAPON_HAND_DEFAULT, CurrentWeaponForPlayer, v6, v7, GESTUREANIMTYPE_NVG_OFF);
  v12 = v11;
  if ( IsUsingNightVision )
    v13 = v11 == NULL;
  else
    v13 = Gesture == NULL;
  if ( v13 )
    return 0;
  serverTime = pm->cmd.serverTime;
  weaponMap = pm->weaponMap;
  if ( !BG_Offhand_HasActiveOffhand(_R14) && !BG_HasLadderHand(_R14) && BG_NightVisionInterruptable(weaponMap, _R14, serverTime) )
  {
    v17 = DVARBOOL_bg_allowNVGWhileADS;
    if ( !DVARBOOL_bg_allowNVGWhileADS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_allowNVGWhileADS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( !v17->current.enabled )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm0, dword ptr [r14+730h]
      }
    }
    if ( IsUsingNightVision )
    {
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15630, ASSERT_TYPE_ASSERT, "(nvgOffGesture)", (const char *)&queryFormat, "nvgOffGesture") )
        __debugbreak();
    }
    else
    {
      if ( !Gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15636, ASSERT_TYPE_ASSERT, "(nvgOnGesture)", (const char *)&queryFormat, "nvgOnGesture") )
        __debugbreak();
      v8 = ANIM_ET_ACTIVATE_NVG;
      v12 = Gesture;
    }
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(v12);
    BG_AnimScriptEvent(pm->m_bgHandler, _R14, v8, 0, 0, &pml->holdrand);
    _RAX = BG_GesturePriority_SetupRequest(&result, pm->weaponMap, _R14, pm->m_bgHandler, IndexFromGesture, pm->cmd.serverTime);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+0D8h+request.weaponMap], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rsp+0D8h+request.startTime], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rsp+0D8h+request.cancelTransitions], xmm0
    }
    request.ignoreGamePlayState = 1;
    if ( BG_GesturePriority_TryPlay(&request, NULL, NULL) )
      PM_Weapon_ReturnMainWeaponToIdleForGesture(pm);
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
  bool v9; 
  unsigned int v10; 
  bool v11; 
  Gesture *Gesture; 
  Gesture *v13; 
  bool IsPlayingByIndex; 
  unsigned int v15; 
  unsigned int IndexFromGesture; 
  const XAnimParts *v18; 
  char v20; 
  bool v23; 
  unsigned int v24; 
  const XAnimParts *v25; 
  void *retaddr; 
  unsigned int outSlot; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-58h], xmm8 }
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
  v9 = BG_UsingAlternate(ps);
  v10 = 2;
  v11 = BG_PlayerDualWielding(ps) != 0;
  outSlot = 2;
  Gesture = BG_Suit_GetGesture(ps, WEAPON_HAND_DEFAULT, CurrentWeaponForPlayer, v9, v11, GESTUREANIMTYPE_NVG_ON);
  v13 = BG_Suit_GetGesture(ps, WEAPON_HAND_DEFAULT, CurrentWeaponForPlayer, v9, v11, GESTUREANIMTYPE_NVG_OFF);
  IsPlayingByIndex = 0;
  outSlot = 2;
  v15 = 2;
  if ( Gesture )
  {
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(Gesture);
    IsPlayingByIndex = BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot);
    v15 = outSlot;
  }
  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps [rsp+88h+var_48], xmm7
    vxorps  xmm8, xmm8, xmm8
  }
  if ( IsPlayingByIndex && !BG_IsUsingNightVision(ps) )
  {
    if ( !*Gesture->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15694, ASSERT_TYPE_ASSERT, "(nvgOnGesture->anims[GESTURE_ASSET_LEFT_CENTER])", (const char *)&queryFormat, "nvgOnGesture->anims[GESTURE_CENTER_ANIM_INDEX]") )
      __debugbreak();
    v18 = *Gesture->anims;
    if ( v18 )
    {
      *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(v18, scr_const.night_vision_on);
      __asm
      {
        vcomiss xmm0, xmm8
        vmovaps xmm7, xmm0
      }
      if ( v20 )
      {
        PM_NightVisionToggle(pm);
        Com_PrintWarning(16, "NVG On Gesture %s, Missing 'night_vision_on' notetrack, toggling NVG immedietly.\n", Gesture->name);
      }
      else
      {
        *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(ps, v15, pm->cmd.serverTime);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = BG_Gesture_GetAnimLengthInSeconds(Gesture);
        __asm
        {
          vmulss  xmm1, xmm0, xmm7
          vcomiss xmm6, xmm1
        }
        if ( !v20 )
          PM_NightVisionToggle(pm);
      }
    }
  }
  v23 = 0;
  outSlot = 2;
  if ( v13 )
  {
    v24 = BG_Gesture_GetIndexFromGesture(v13);
    v23 = BG_Gesture_IsPlayingByIndex(ps, v24, &outSlot);
    v10 = outSlot;
  }
  if ( v23 && BG_IsUsingNightVision(ps) )
  {
    if ( !*v13->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15722, ASSERT_TYPE_ASSERT, "(nvgOffGesture->anims[GESTURE_ASSET_LEFT_CENTER])", (const char *)&queryFormat, "nvgOffGesture->anims[GESTURE_CENTER_ANIM_INDEX]") )
      __debugbreak();
    v25 = *v13->anims;
    if ( v25 )
    {
      *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(v25, scr_const.night_vision_off);
      __asm
      {
        vcomiss xmm0, xmm8
        vmovaps xmm7, xmm0
      }
      if ( v20 )
      {
        PM_NightVisionToggle(pm);
        Com_PrintWarning(16, "NVG off Gesture %s, Missing 'night_vision_off' notetrack, toggling NVG immedietly.\n", v13->name);
      }
      else
      {
        *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(ps, v10, pm->cmd.serverTime);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = BG_Gesture_GetAnimLengthInSeconds(v13);
        __asm
        {
          vmulss  xmm1, xmm0, xmm7
          vcomiss xmm6, xmm1
        }
        if ( !v20 )
          PM_NightVisionToggle(pm);
      }
    }
  }
  __asm
  {
    vmovaps xmm7, [rsp+88h+var_48]
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm8, [rsp+88h+var_58]
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
  bool v6; 
  bool v7; 
  unsigned int GestureIdx; 
  unsigned int *p_holdrand; 
  const char *v18; 
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
  if ( BG_WeaponDef(UsedOffHandWeapon, 0)->weapType != WEAPTYPE_GRENADE )
    return 0;
  v6 = BG_GetAmmoInClipForWeapon(ps, UsedOffHandWeapon, 0, WEAPON_HAND_DEFAULT) > 0;
  v7 = BG_WeapHasDetonator(UsedOffHandWeapon, 0) && (!v6 || (pm->cmd.buttons & 0x200000000000000i64) != 0);
  GestureIdx = BG_Offhand_GetGestureIdx(pm->weaponMap, ps, (OffhandGestureTypes)(2 * v7 + 1));
  if ( GestureIdx == 256 )
  {
    v18 = "pullback";
    if ( v7 )
      v18 = "detonate";
    WeaponName = BG_GetWeaponName(UsedOffHandWeapon, output, 0x400u);
    Com_PrintWarning(16, "Failed to fire offhand gesture weapon %s, could not locate %s gesture.\n", WeaponName, v18);
    return 1;
  }
  else
  {
    _RAX = BG_GesturePriority_SetupRequest(&result, pm->weaponMap, ps, pm->m_bgHandler, GestureIdx, pm->cmd.serverTime);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+4D8h+request.weaponMap], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rsp+4D8h+request.startTime], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rsp+4D8h+request.cancelTransitions], xmm0
    }
    request.ignoreGamePlayState = 1;
    if ( BG_GesturePriority_TryPlay(&request, NULL, NULL) )
    {
      ps->weapCommon.offhandGestureFlags = 1;
      if ( v7 )
      {
        ps->weapCommon.offhandGestureFlags = 33;
        if ( BG_UseFastOffhand(ps, pm->weaponMap) )
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_perk_fastOffhandMultiplier, "perk_fastOffhandMultiplier");
        else
          __asm { vmovss  xmm0, cs:__real@3f800000 }
        __asm
        {
          vmulss  xmm0, xmm0, dword ptr [r14+1100h]
          vmulss  xmm1, xmm0, cs:__real@c47a0000
          vcvttss2si eax, xmm1
        }
        ps->weapCommon.offhandGestureFireTime = pm->cmd.serverTime - _EAX;
      }
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      {
        p_holdrand = &pml->holdrand;
        if ( v7 )
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
  int v17; 
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
      __asm
      {
        vmovss  xmm0, [rsp+48h+adsIdleLerpStartTime]
        vmulss  xmm1, xmm0, cs:__real@c47a0000
        vcvttss2si eax, xmm1
      }
      v17 = ps->weapCommon.adsStartTime - _EAX;
      ps->weapCommon.weaponIdleTime = v17;
      if ( useSecondTimer )
        ps->weapCommon.weaponIdleTime2 = v17;
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
  unsigned __int8 fWeaponPosFracIn; 
  int fWeaponPosFracChangeFracVel; 
  BgWeaponMap *weaponMap; 
  char v24; 
  bool v25; 
  const dvar_t *v41; 
  float outAdsInToOutAccelSec[4]; 
  void *retaddr; 
  float outAdsOutToInAccelSec; 
  char v59; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1733, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1733, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  fWeaponPosFracIn = _RDI->weapCommon.fWeaponPosFracIn;
  __asm { vmovss  xmm9, dword ptr [rdi+730h] }
  *(float *)&_XMM0 = PM_GetADSFracTargetVelocity(pm, weapon, isAlternate, fWeaponPosFracIn);
  __asm
  {
    vmovss  xmm8, cs:__real@41a00000
    vmovaps xmm6, xmm0
  }
  if ( _RDI->weapCommon.fWeaponPosFracMomentum )
  {
    fWeaponPosFracChangeFracVel = _RDI->weapCommon.fWeaponPosFracChangeFracVel;
    weaponMap = pm->weaponMap;
    __asm { vmovaps xmm1, xmm8; maxAbsValueSize }
    v59 = 0;
    *(double *)&_XMM0 = MSG_UnpackSignedFloat(fWeaponPosFracChangeFracVel, *(float *)&_XMM1, 9u);
    __asm { vmovaps xmm7, xmm0 }
    BG_GetADSAccel(weaponMap, _RDI, weapon, isAlternate, &outAdsOutToInAccelSec, outAdsInToOutAccelSec);
    __asm { vcomiss xmm6, xmm7 }
    if ( v24 | v25 )
    {
      __asm
      {
        vmovss  xmm0, [rsp+0B8h+var_78]
        vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
      }
    }
    else
    {
      __asm { vmovss  xmm2, [rsp+0B8h+outAdsOutToInAccelSec] }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r12d
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vmulss  xmm2, xmm1, xmm2
      vaddss  xmm3, xmm2, xmm7
    }
    if ( v24 | v25 )
      __asm { vmaxss  xmm0, xmm3, xmm6 }
    else
      __asm { vminss  xmm0, xmm3, xmm6 }
    __asm
    {
      vucomiss xmm0, xmm6
      vmovaps xmm6, xmm0
    }
    if ( v24 | v25 )
    {
      v59 = 1;
      _RDI->weapCommon.fWeaponPosFracMomentum = 0;
    }
    else
    {
      v59 = 0;
    }
  }
  if ( fWeaponPosFracIn != adsIn )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@c1a00000; min
      vmovaps xmm2, xmm8; max
      vmovaps xmm0, xmm6; val
    }
    _RDI->weapCommon.fWeaponPosFracChangeTime = _RDI->commandTime;
    _RDI->weapCommon.fWeaponPosFracIn = adsIn;
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm1, xmm0; value
      vmovaps xmm6, xmm0
    }
    BG_SetADSVelocity(_RDI, *(float *)&_XMM1);
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm8, xmm8, xmm8
  }
  if ( fWeaponPosFracIn != adsIn )
  {
    __asm { vcomiss xmm9, xmm8 }
    if ( fWeaponPosFracIn > (unsigned __int8)adsIn )
    {
      __asm { vcomiss xmm9, xmm7 }
      if ( fWeaponPosFracIn < (unsigned __int8)adsIn )
      {
        v41 = DCONST_DVARBOOL_bg_adsMomentumEnabled;
        if ( !DCONST_DVARBOOL_bg_adsMomentumEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_adsMomentumEnabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v41);
        if ( v41->current.enabled )
          _RDI->weapCommon.fWeaponPosFracMomentum = 1;
      }
    }
  }
  __asm
  {
    vmovss  xmm0, [rsp+0B8h+frameTimeMs]
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm0, xmm2, xmm9; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  v25 = !_RDI->weapCommon.fWeaponPosFracMomentum;
  __asm
  {
    vmovaps xmm9, [rsp+0B8h+var_68]
    vmovaps xmm6, [rsp+0B8h+var_38]
    vmovss  dword ptr [rdi+730h], xmm0
  }
  if ( !v25 )
  {
    __asm
    {
      vcomiss xmm0, xmm8
      vcomiss xmm0, xmm7
    }
    _RDI->weapCommon.fWeaponPosFracMomentum = 0;
  }
  __asm
  {
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm8, [rsp+0B8h+var_58]
  }
}

/*
==============
PM_UpdateAimDownSightFlag
==============
*/
void PM_UpdateAimDownSightFlag(pmove_t *pm, pml_t *pml)
{
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  const Weapon *ViewmodelWeapon; 
  bool v8; 
  bool v9; 
  int weaponState; 
  char v11; 
  bool v12; 
  bool IsAdsAllowed; 
  unsigned __int64 buttons; 
  bool v15; 
  int v17; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  unsigned __int64 v20; 
  playerState_s *ps; 
  bool IsSprinting; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *v23; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1181, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1181, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RDI->pm_flags.m_flags[0] &= ~0x200u;
  p_pm_flags = &_RDI->pm_flags;
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, _RDI);
  v8 = BG_UsingAlternate(_RDI);
  v9 = v8;
  weaponState = _RDI->weapState[0].weaponState;
  v11 = (pm->cmd.buttons & 0x200) != 0;
  if ( weaponState == 3 || weaponState == 10 )
    v11 = 1;
  if ( BG_IsADSFireOnly(ViewmodelWeapon, v8) )
  {
    v12 = _RDI->weapState[0].weaponDelay && _RDI->weapState[0].weaponState == 16 || _RDI->weapState[1].weaponDelay && _RDI->weapState[1].weaponState == 16;
    v11 |= v12;
  }
  if ( v11 )
  {
    IsAdsAllowed = PM_CalcIsAdsAllowed(pm);
    buttons = pm->cmd.buttons;
    v15 = IsAdsAllowed;
    if ( (buttons & 0x200000) != 0 && (buttons & 2) != 0 && (pm->oldcmd.buttons & 2) == 0 && !BG_HasHoldBreathAbility(pm->weaponMap, _RDI) && !BG_CanHybridToggle(_RDI, ViewmodelWeapon, v9) && !BG_HasVariableZoom(pm->weaponMap, _RDI, ViewmodelWeapon, v9) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) || !BG_IsThirdPersonMode(pm->weaponMap, _RDI) )
      {
        PM_ExitAimDownSight(pm);
        goto LABEL_48;
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm0, dword ptr [rdi+730h]
      }
    }
    if ( v15 )
    {
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0) || BG_UsingSniperScope(pm->weaponMap, _RDI) || BG_IsPlayerOnRemoteTurret(_RDI) )
      {
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_RDI->pm_flags, ACTIVE, 9u);
        if ( GameModeFlagValues::ms_mpValue != ACTIVE || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, ACTIVE, 0x22u) || Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, GameModeFlagValues::ms_mpValue, 0x29u) )
          goto LABEL_48;
        v17 = 1252;
      }
      else
      {
        if ( (pm->oldcmd.buttons & 0x200) != 0 && (pm->cmd.forwardmove || pm->cmd.rightmove) )
          goto LABEL_48;
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_RDI->pm_flags, ACTIVE, 9u);
        GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_RDI->pm_flags, ACTIVE, 0xEu);
        if ( GameModeFlagValues::ms_mpValue != ACTIVE || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, ACTIVE, 0x22u) || Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, GameModeFlagValues::ms_mpValue, 0x29u) )
          goto LABEL_48;
        v17 = 1246;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", v17, ASSERT_TYPE_ASSERT, "(BG_IsCharacterPlayer( ps ))", (const char *)&queryFormat, "BG_IsCharacterPlayer( ps )") )
        __debugbreak();
    }
  }
LABEL_48:
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 9u) )
    PM_Weapon_CheckForPendingAltModeChange(pm, pml);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    CharacterInfo = BG_GetCharacterInfo(ActiveStatics, _RDI->clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1265, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    v20 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 9u);
    BG_SetConditionValue(CharacterInfo, 6, v20);
  }
  ps = pm->ps;
  IsSprinting = PM_IsSprinting(ps);
  v23 = &ps->pm_flags;
  if ( IsSprinting )
  {
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(v23, ACTIVE, 0x2Du);
  }
  else if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(v23, ACTIVE, 9u) )
  {
    ps->pm_flags.m_flags[1] &= ~0x2000u;
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
  int commandTime; 
  Weapon *ViewmodelWeapon; 
  bool v15; 
  const dvar_t *v18; 
  BgWeaponMap *weaponMap; 
  const Weapon *v23; 
  bool v24; 
  bool v25; 
  bool IsADSBlockedByReload; 
  bool v27; 
  int weaponState; 
  bool v29; 
  bool v30; 
  bool v31; 
  int v32; 
  BOOL v33; 
  const char *v34; 
  const dvar_t *v35; 
  int Int_Internal_DebugName; 
  bool v37; 
  int adsDelayTime; 
  int v39; 
  bool v40; 
  Weapon *v41; 
  bool v42; 
  char v45; 
  char v46; 
  const Weapon *v49; 
  char v51; 
  bool v52; 
  bool v53; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  float fmt; 
  char v79; 
  void *retaddr; 
  bool v81; 
  Weapon *weapon; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps [rsp+0F8h+var_88], xmm9
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_UpdateAimDownSightLerp");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1838, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1838, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _ER13 = 0;
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1813, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  commandTime = ps->commandTime;
  if ( PM_IsADSBlockedByReload(pm) )
  {
    if ( !ps->weapCommon.lastReloadStateChangeWasReloading )
    {
      *(double *)&_XMM0 = BG_WeaponReloadingFraction(pm->weaponMap, ps);
      __asm { vmovaps xmm1, xmm0; value }
      BG_SetLastReloadFraction(ps, *(float *)&_XMM1);
      ps->weapCommon.lastReloadStateChangeWasReloading = 1;
LABEL_15:
      ps->weapCommon.lastReloadStateChangeTime = commandTime;
    }
  }
  else if ( ps->weapCommon.lastReloadStateChangeWasReloading )
  {
    *(double *)&_XMM0 = BG_WeaponReloadingFraction(pm->weaponMap, ps);
    __asm { vmovaps xmm1, xmm0; value }
    BG_SetLastReloadFraction(ps, *(float *)&_XMM1);
    ps->weapCommon.lastReloadStateChangeWasReloading = 0;
    goto LABEL_15;
  }
  ViewmodelWeapon = (Weapon *)BG_GetViewmodelWeapon(pm->weaponMap, _RDI);
  weapon = ViewmodelWeapon;
  v15 = BG_UsingAlternate(_RDI);
  v81 = v15;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm9, xmm9, r14d
  }
  _RDI->weapCommon.fPreviousWeaponPosFrac = _RDI->weapCommon.fWeaponPosFrac;
  v18 = DCONST_DVARBOOL_player_scopeExitOnDamage;
  if ( !DCONST_DVARBOOL_player_scopeExitOnDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_scopeExitOnDamage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.enabled && _RDI->damageCount && BG_GetOverlay(ViewmodelWeapon, v15)->reticle )
  {
    PM_ExitAimDownSight(pm);
    _RDI->weapCommon.fWeaponPosFrac = 0.0;
    BG_WeaponResetADSReloadFraction(_RDI);
    *(_WORD *)&_RDI->weapCommon.fWeaponPosFracMomentum = 0;
    _RDI->weapCommon.fWeaponPosFracChangeTime = _RDI->commandTime;
    __asm { vxorps  xmm1, xmm1, xmm1; value }
    BG_SetADSVelocity(_RDI, *(float *)&_XMM1);
LABEL_109:
    _RDI->weapCommon.adsDelayTime = 0;
    goto LABEL_110;
  }
  if ( BG_IsTurretActive(_RDI) || BG_IsPlayerOnRemoteTurret(_RDI) )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
    {
      v49 = pm->m_bgHandler->PlayerTurret(pm->m_bgHandler, _RDI);
      if ( !v49->weaponIdx )
      {
LABEL_91:
        _RDI->weapCommon.fWeaponPosFrac = 0.0;
LABEL_108:
        BG_WeaponResetADSReloadFraction(_RDI);
        goto LABEL_109;
      }
      _RBX = BG_WeaponDef(v49, 0);
      v51 = 0;
      v52 = _RBX == NULL;
      if ( !_RBX )
      {
        v53 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1886, ASSERT_TYPE_ASSERT, "(weapDefTurret)", (const char *)&queryFormat, "weapDefTurret");
        v51 = 0;
        v52 = !v53;
        if ( v53 )
          __debugbreak();
      }
      __asm { vmovss  xmm0, dword ptr [rbx+0DB4h] }
    }
    else
    {
      _RBX = DVARFLT_turret_adsTime;
      if ( !DVARFLT_turret_adsTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turret_adsTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    __asm { vxorps  xmm6, xmm6, xmm6 }
    p_pm_flags = &_RDI->pm_flags;
    __asm { vcomiss xmm0, xmm6 }
    if ( v51 | v52 )
    {
      _EAX = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 9u);
      __asm
      {
        vmovd   xmm1, r13d
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vblendvps xmm0, xmm1, xmm6, xmm2
        vmovss  dword ptr [rdi+730h], xmm0
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm8, cs:__real@3f800000
        vdivss  xmm7, xmm8, xmm0
      }
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 9u) )
      {
        __asm
        {
          vmulss  xmm0, xmm7, xmm9
          vaddss  xmm0, xmm0, dword ptr [rdi+730h]
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm3, xmm7, xmm9
          vmovss  xmm0, dword ptr [rdi+730h]
          vsubss  xmm0, xmm0, xmm3; val
        }
      }
      __asm
      {
        vmovss  dword ptr [rdi+730h], xmm0
        vmovaps xmm2, xmm8; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rdi+730h], xmm0 }
    }
    goto LABEL_108;
  }
  weaponMap = pm->weaponMap;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm6, xmm6, xmm6
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && BG_UsingAlternate(_RDI) )
  {
    v23 = BG_GetViewmodelWeapon(weaponMap, _RDI);
    if ( BG_IsSwimWeapon(v23) && (unsigned int)(_RDI->weapState[0].weaponState - 22) > 2 )
      __asm { vcomiss xmm6, dword ptr [rdi+10D0h] }
  }
  v24 = PM_Weapon_IsInInterruptibleState(pm->weaponMap, _RDI, WEAPON_HAND_DEFAULT, pm->m_bgHandler);
  if ( !BG_IsAimDownSight(ViewmodelWeapon, v15) || (unsigned int)(_RDI->weapState[0].weaponState - 22) <= 2 && !v24 )
    goto LABEL_91;
  v25 = BG_ADSReloadEnabled(pm->weaponMap, _RDI, ViewmodelWeapon, v15);
  IsADSBlockedByReload = PM_IsADSBlockedByReload(pm);
  v27 = BG_RechamberWhileADS(ViewmodelWeapon, v15);
  weaponState = _RDI->weapState[0].weaponState;
  v29 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 9u);
  v30 = (v25 || !IsADSBlockedByReload) && (v27 || weaponState != 17) && PM_CalcIsAdsAllowed(pm);
  v31 = v29 && v30;
  v32 = _RDI->weapState[0].weaponState;
  v33 = (unsigned int)(v32 - 7) <= 5 || v32 == 50;
  if ( (pm->cmd.buttons & 0x8000000000000i64) != 0 )
  {
    v34 = "player_adsExitDelayGamepad";
    v35 = DCONST_DVARMPSPINT_player_adsExitDelayGamepad;
  }
  else
  {
    v34 = "player_adsExitDelayMouse";
    v35 = DCONST_DVARMPSPINT_player_adsExitDelayMouse;
  }
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(v35, v34);
  __asm { vcomiss xmm7, dword ptr [rdi+730h] }
  if ( !(v45 | v42) || v31 || v33 || Int_Internal_DebugName <= 0 )
    goto LABEL_67;
  v37 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0) && (pm->cmd.forwardmove || pm->cmd.rightmove);
  adsDelayTime = _RDI->weapCommon.adsDelayTime;
  if ( !adsDelayTime && (pm->oldcmd.buttons & 0x200) != 0 && v30 && !v37 )
  {
    adsDelayTime = Int_Internal_DebugName + pm->cmd.serverTime;
    _RDI->weapCommon.adsDelayTime = adsDelayTime;
  }
  if ( adsDelayTime <= pm->cmd.serverTime )
LABEL_67:
    _RDI->weapCommon.adsDelayTime = 0;
  else
    v31 = 1;
  v39 = _RDI->weapState[0].weaponState;
  v40 = v81;
  v41 = weapon;
  v42 = v39 == 3;
  if ( v39 != 3 )
  {
    v42 = v39 == 10;
    if ( v39 != 10 )
    {
      __asm { vmovss  dword ptr [rsp+0F8h+fmt], xmm9 }
      PM_UpdateADSFrac(pm, weapon, v81, v31, fmt);
    }
  }
  __asm { vucomiss xmm7, dword ptr [rdi+730h] }
  if ( v42 )
  {
    if ( !_RDI->weapCommon.adsStartTime )
      _RDI->weapCommon.adsStartTime = pm->cmd.serverTime;
  }
  else if ( v31 )
  {
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_player_adsResetFraction, "player_adsResetFraction");
    __asm { vcomiss xmm0, dword ptr [rdi+730h] }
    if ( !v45 )
    {
      _RDI->weapCommon.adsStartTime = 0;
      if ( !BG_UsesContinousAdsIdleTransiton(v41, v40) )
        *(_QWORD *)&_RDI->weapCommon.weaponIdleTime = 0i64;
    }
  }
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 1560, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RDI = DCONST_DVARFLT_player_adsRecoilShotCountResetFraction;
  if ( !DCONST_DVARFLT_player_adsRecoilShotCountResetFraction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_adsRecoilShotCountResetFraction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+28h]
    vcomiss xmm1, xmm6
  }
  if ( v45 | v46 )
  {
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 0x2Cu);
    _RBX->weapCommon.adsRecoilShotCountOffset = 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+730h]
      vcomiss xmm0, xmm6
    }
    if ( v45 | v46 )
    {
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 0x2Cu);
    }
    else
    {
      __asm { vcomiss xmm0, xmm1 }
      if ( !v45 && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 0x2Cu) )
      {
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 0x2Cu);
        _RBX->weapCommon.adsRecoilShotCountOffset = _RBX->weapState[0].weaponShotCount;
      }
    }
  }
LABEL_110:
  BgScopedWeaponOffsetsAdsUpdate(pm, NULL);
  Sys_ProfEndNamedEvent();
  _R11 = &v79;
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
PM_UpdateHoldBreath
==============
*/

void __fastcall PM_UpdateHoldBreath(pmove_t *pm, int msec, double frametime)
{
  const dvar_t *v8; 
  int v13; 
  const dvar_t *v14; 
  int v15; 
  const dvar_t *v18; 
  bool v25; 
  int holdBreathTimer; 
  int v27; 
  const Weapon *ViewmodelWeapon; 
  bool v40; 
  char v52; 
  double v66; 
  AdvancedIdleSettings outAdvancedIdleSettings; 

  __asm { vmovaps [rsp+178h+var_78], xmm9 }
  v8 = DCONST_DVARBOOL_player_scope_prototype;
  __asm { vmovaps xmm9, xmm2 }
  if ( !DCONST_DVARBOOL_player_scope_prototype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_scope_prototype") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
  {
    __asm { vmovaps [rsp+178h+var_48], xmm6 }
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2071, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    _RDI = pm->ps;
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2071, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v13 = BG_HoldBreathMaxTime(_RDI);
    v14 = DCONST_DVARFLT_player_breath_gasp_time;
    v15 = v13;
    if ( !DCONST_DVARFLT_player_breath_gasp_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breath_gasp_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    __asm
    {
      vmovss  xmm6, cs:__real@447a0000
      vmulss  xmm0, xmm6, dword ptr [rbx+28h]
    }
    v18 = DCONST_DVARFLT_player_breath_max_recovery_time;
    __asm { vcvttss2si r15d, xmm0 }
    if ( !DCONST_DVARFLT_player_breath_max_recovery_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breath_max_recovery_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    __asm { vmulss  xmm6, xmm6, dword ptr [rbx+28h] }
    if ( v15 > 0 )
    {
      __asm
      {
        vmovaps [rsp+178h+var_58], xmm7
        vmovss  xmm7, cs:__real@3f800000
        vucomiss xmm7, dword ptr [rdi+730h]
        vmovaps [rsp+178h+var_68], xmm8
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rdi+350h]
        vcomiss xmm0, xmm6
        vcvttss2si eax, xmm6
      }
      _RDI->holdBreathTimer = _EAX;
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 2u);
      v25 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 2u);
      holdBreathTimer = _RDI->holdBreathTimer;
      if ( v25 )
        v27 = msec + holdBreathTimer;
      else
        v27 = holdBreathTimer - msec;
      _ESI = 0;
      if ( v27 < 0 )
        v27 = 0;
      _RDI->holdBreathTimer = v27;
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 2u) && _RDI->holdBreathTimer > v15 )
      {
        _RDI->holdBreathTimer = _ER15 + v15;
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 2u);
      }
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 2u) )
      {
        _RBX = DCONST_DVARMPSPFLT_player_breath_hold_lerp;
        __asm { vxorps  xmm8, xmm8, xmm8 }
        if ( !DCONST_DVARMPSPFLT_player_breath_hold_lerp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breath_hold_lerp") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      }
      else
      {
        _RBX = DCONST_DVARFLT_player_breath_gasp_scale;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, dword ptr [rdi+350h]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vdivss  xmm8, xmm1, xmm0
        }
        if ( !DCONST_DVARFLT_player_breath_gasp_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breath_gasp_scale") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm6, dword ptr [rbx+28h] }
        ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, _RDI);
        v40 = BG_UsingAlternate(_RDI);
        BG_GetAdvancedIdleSettings(_RDI->perks, ViewmodelWeapon, v40, &outAdvancedIdleSettings);
        _EAX = outAdvancedIdleSettings.useAdvancedIdleSettings;
        _RBX = DCONST_DVARFLT_player_breath_gasp_lerp;
        __asm
        {
          vmovd   xmm0, eax
          vmovd   xmm1, esi
          vpcmpeqd xmm2, xmm0, xmm1
          vmovss  xmm1, [rsp+178h+outAdvancedIdleSettings.breathGaspScaleOverride]
          vblendvps xmm0, xmm1, xmm6, xmm2
          vsubss  xmm0, xmm0, xmm7
          vmulss  xmm1, xmm0, xmm8
          vaddss  xmm8, xmm1, xmm7
        }
        if ( !DCONST_DVARFLT_player_breath_gasp_lerp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_breath_gasp_lerp") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm6, dword ptr [rbx+28h] }
        _RBX = DVARFLT_perk_fastSnipeScale;
        if ( !DVARFLT_perk_fastSnipeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastSnipeScale") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm0, dword ptr [rbx+28h]
        }
        if ( !v52 )
        {
          _RBX = DVARFLT_perk_fastSnipeScale;
          if ( !DVARFLT_perk_fastSnipeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastSnipeScale") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RBX);
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+28h]
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  [rsp+178h+var_150], xmm0
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2137, ASSERT_TYPE_ASSERT, "( ( Dvar_GetFloat_Internal_DebugName( DVARFLT_perk_fastSnipeScale, \"perk_fastSnipeScale\" ) > 0.0f ) )", "( Dvar_GetFloat_Internal_DebugName( DVARFLT_perk_fastSnipeScale, \"perk_fastSnipeScale\" ) ) = %g", v66) )
            __debugbreak();
        }
        if ( BG_HasPerk(&_RDI->perks, 0x29u) )
        {
          Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_fastSnipeScale, "perk_fastSnipeScale");
          __asm { vdivss  xmm6, xmm6, xmm0 }
        }
      }
      __asm
      {
        vsubss  xmm0, xmm8, xmm7
        vmulss  xmm1, xmm0, dword ptr [rdi+730h]
        vaddss  xmm0, xmm1, xmm7; tgt
        vmovss  xmm1, dword ptr [rdi+34Ch]; cur
        vmovaps xmm3, xmm9; deltaTime
        vmovaps xmm2, xmm6; rate
      }
      *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm
      {
        vmovaps xmm8, [rsp+178h+var_68]
        vmovaps xmm7, [rsp+178h+var_58]
        vmovss  dword ptr [rdi+34Ch], xmm0
      }
    }
    else
    {
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 2u);
      *(_QWORD *)&_RDI->holdBreathScale = 1065353216i64;
    }
    __asm { vmovaps xmm6, [rsp+178h+var_48] }
  }
  __asm { vmovaps xmm9, [rsp+178h+var_78] }
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
  WeaponDef *v11; 
  int grenadeTimeLeft; 
  bool bCookOffHold; 
  int v15; 
  unsigned int m_mapEntryId; 
  __int64 v17; 
  Weapon r_weapon; 

  msec = pml->msec;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u) )
    goto LABEL_7;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14429, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (ps->weapCommon.offhandGestureFlags & 1) != 0 )
LABEL_7:
    _RAX = PM_Weapon_GetUsedOffHandWeapon(pm->weaponMap, ps);
  else
    _RAX = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0C8h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0C8h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0C8h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  if ( !r_weapon.weaponIdx )
    return 0;
  if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v17) = r_weapon.weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v17, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  if ( !bg_weaponDefs[r_weapon.weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v11 = bg_weaponDefs[r_weapon.weaponIdx];
  if ( !BG_IsOffhandWeaponType(&r_weapon, 0) )
    return 0;
  grenadeTimeLeft = ps->grenadeTimeLeft;
  if ( !grenadeTimeLeft )
    return 0;
  bCookOffHold = v11->bCookOffHold;
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
  if ( v11->bCookOffHold || BG_ThrowingBackGrenade(ps) )
  {
    if ( BG_GetWeaponFieldTime(ps, &r_weapon, 0, 0, 188i64) )
      v15 = BG_WeaponFuseTime(&r_weapon, 0);
    else
      v15 = 0;
    if ( ps->grenadeTimeLeft - msec > v15 )
      v15 = ps->grenadeTimeLeft - msec;
    ps->grenadeTimeLeft = v15;
  }
  else
  {
    v15 = ps->grenadeTimeLeft;
  }
  if ( v15 > 0 )
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
  const dvar_t *v5; 
  bool v9; 
  bool v10; 
  playerState_s *ps; 
  BgWeaponMap *weaponMap; 
  bool v18; 
  int v25; 
  int v28; 
  int v31; 
  int holdBreathTimer; 
  Weapon r_weapon; 

  v5 = DCONST_DVARBOOL_player_scope_prototype;
  if ( !DCONST_DVARBOOL_player_scope_prototype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_scope_prototype") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2174, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    _RDI = pm->ps;
    v9 = _RDI == NULL;
    if ( !_RDI )
    {
      v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2174, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps");
      v9 = !v10;
      if ( v10 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vucomiss xmm0, dword ptr [rdi+730h]
    }
    if ( !v9 || !BG_HasHoldBreathAbility(pm->weaponMap, _RDI) )
    {
      *(_QWORD *)&_RDI->holdBreathScale = 1065353216i64;
      return;
    }
    _RDI->holdBreathTimer += msec;
    ps = pm->ps;
    weaponMap = pm->weaponMap;
    __asm
    {
      vmovaps [rsp+0D8h+var_38], xmm7
      vmovaps [rsp+0D8h+var_48], xmm8
    }
    _RAX = BG_GetViewmodelWeapon(weaponMap, ps);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+0D8h+r_weapon.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rsp+0D8h+r_weapon.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rsp+0D8h+r_weapon.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    v18 = BG_UsingAlternate(_RDI);
    *(double *)&_XMM0 = BG_GetScopeDriftSteadyFactor(&r_weapon, v18);
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = BG_GetScopeDriftUnsteadyFactor(&r_weapon, v18);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = BG_GetScopeDriftDelay(&r_weapon, v18);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si ebp, xmm1
    }
    *(double *)&_XMM0 = BG_GetScopeDriftLerpInTime(&r_weapon, v18);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si r15d, xmm1
    }
    v25 = _ER15 + _EBP;
    *(double *)&_XMM0 = BG_GetScopeDriftSteadyTime(&r_weapon, v18);
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@c47a0000
      vcvttss2si eax, xmm0
    }
    v28 = _ER15 + _EBP - _EAX;
    *(double *)&_XMM0 = BG_GetScopeDriftLerpOutTime(&r_weapon, v18);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@c47a0000
      vcvttss2si eax, xmm1
    }
    v31 = v28 - _EAX;
    holdBreathTimer = _RDI->holdBreathTimer;
    if ( holdBreathTimer <= v31 )
    {
      if ( holdBreathTimer > v28 )
      {
        if ( v31 <= v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2208, ASSERT_TYPE_ASSERT, "(time_lerp_out_end_ms > time_lerp_out_start_ms)", (const char *)&queryFormat, "time_lerp_out_end_ms > time_lerp_out_start_ms") )
          __debugbreak();
        _EAX = _RDI->holdBreathTimer - v28;
        _EBX = v31 - v28;
        __asm
        {
          vmovd   xmm0, ebx
          vcvtdq2ps xmm0, xmm0
          vmovd   xmm1, eax
          vcvtdq2ps xmm1, xmm1
          vdivss  xmm4, xmm1, xmm0
          vmulss  xmm2, xmm4, cs:__real@40000000
          vmovss  xmm1, cs:__real@40400000
          vsubss  xmm3, xmm1, xmm2
          vmulss  xmm0, xmm4, xmm4
          vmulss  xmm4, xmm3, xmm0
          vsubss  xmm1, xmm7, xmm8
          vmulss  xmm2, xmm4, xmm1
          vaddss  xmm0, xmm2, xmm8
        }
LABEL_19:
        __asm { vmovss  dword ptr [rdi+34Ch], xmm0 }
LABEL_20:
        __asm
        {
          vmovaps xmm7, [rsp+0D8h+var_38]
          vmovaps xmm8, [rsp+0D8h+var_48]
        }
        return;
      }
      if ( holdBreathTimer > v25 )
      {
        __asm { vmovss  dword ptr [rdi+34Ch], xmm8 }
        goto LABEL_20;
      }
      if ( holdBreathTimer > _EBP )
      {
        if ( v25 <= _EBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2219, ASSERT_TYPE_ASSERT, "(time_lerp_in_end_ms > time_lerp_in_start_ms)", (const char *)&queryFormat, "time_lerp_in_end_ms > time_lerp_in_start_ms") )
          __debugbreak();
        _EAX = _RDI->holdBreathTimer - _EBP;
        __asm
        {
          vmovd   xmm1, eax
          vcvtdq2ps xmm1, xmm1
          vmovd   xmm0, r15d
          vcvtdq2ps xmm0, xmm0
          vdivss  xmm4, xmm1, xmm0
          vmulss  xmm2, xmm4, cs:__real@40000000
          vmovss  xmm1, cs:__real@40400000
          vsubss  xmm3, xmm1, xmm2
          vmulss  xmm0, xmm4, xmm4
          vmulss  xmm4, xmm3, xmm0
          vsubss  xmm1, xmm8, xmm7
          vmulss  xmm2, xmm4, xmm1
          vaddss  xmm0, xmm2, xmm7
        }
        goto LABEL_19;
      }
    }
    __asm { vmovss  dword ptr [rdi+34Ch], xmm7 }
    goto LABEL_20;
  }
}

/*
==============
PM_UpdateSwayPrediction
==============
*/

void __fastcall PM_UpdateSwayPrediction(const BgWeaponMap *weaponMap, playerState_s *ps, double frametime, unsigned int *holdrand)
{
  bool v16; 
  const dvar_t *v29; 
  bool outIsAlternate; 
  __int64 v44; 
  Weapon r_weapon; 
  Weapon v46; 
  AdvancedIdleSettings outAdvancedIdleSettings; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  v44 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmm9, xmm2
  }
  _RBX = ps;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18569, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18570, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_UpdateSwayPrediction");
  _RAX = BG_GetViewmodelWeapon(weaponMap, _RBX);
  __asm
  {
    vmovups ymm2, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+1D8h+r_weapon.weaponIdx], ymm2
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+1D8h+r_weapon.attachmentVariationIndices+5], xmm0
    vmovsd  xmm1, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+1D8h+r_weapon.attachmentVariationIndices+15h], xmm1
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  __asm { vmovd   eax, xmm2 }
  if ( (_WORD)_RAX )
  {
    v16 = BG_UsingAlternate(_RBX);
    BG_GetAdvancedIdleSettings(_RBX->perks, &r_weapon, v16, &outAdvancedIdleSettings);
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
      PM_ResetIdleCountersOnAds(weaponMap, _RBX, holdrand, 1);
      __asm { vmovaps xmm2, xmm9; frametime }
      PM_Weapon_IncrementMovementIdleTime_AdvancedIdle(weaponMap, _RBX, *(float *)&_XMM2, &r_weapon, &outAdvancedIdleSettings);
    }
    else
    {
      PM_ResetIdleCountersOnAds(weaponMap, _RBX, holdrand, 0);
      if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18383, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      _RAX = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, _RBX, &outIsAlternate);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+1D8h+var_148.weaponIdx], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rsp+1D8h+var_148.attachmentVariationIndices+5], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rsp+1D8h+var_148.attachmentVariationIndices+15h], xmm0
      }
      *(_DWORD *)&v46.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
      if ( BG_GetOverlayReticle(_RBX, &v46, outIsAlternate) )
      {
        *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(weaponMap, _RBX);
        __asm { vmovaps xmm6, xmm0 }
        BG_GetIdleSpeed(weaponMap, _RBX);
        __asm
        {
          vmulss  xmm1, xmm9, dword ptr [rbx+34Ch]
          vmulss  xmm2, xmm1, cs:__real@447a0000
          vmulss  xmm3, xmm2, xmm0
          vmulss  xmm0, xmm3, xmm6
          vcvttss2si eax, xmm0
        }
        _RBX->weapCommon.weaponIdleTime += _EAX;
      }
      if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18404, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      *(float *)&_XMM0 = BG_GetIdleSpeed(weaponMap, _RBX);
      __asm { vmovaps xmm7, xmm0 }
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_LADDER_AIM) )
      {
        __asm { vmovss  xmm6, dword ptr [rbx+34Ch] }
        v29 = DCONST_DVARBOOL_player_scope_prototype;
        if ( !DCONST_DVARBOOL_player_scope_prototype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_scope_prototype") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        if ( !v29->current.enabled )
        {
          __asm
          {
            vmovss  xmm2, cs:__real@3f800000
            vcomiss xmm6, xmm2
          }
          if ( v29->current.enabled )
          {
            __asm
            {
              vsubss  xmm0, xmm6, xmm2
              vmulss  xmm1, xmm0, cs:__real@3f000000
              vaddss  xmm6, xmm1, xmm2
            }
          }
        }
        __asm
        {
          vmulss  xmm0, xmm6, xmm9
          vmulss  xmm1, xmm0, cs:__real@447a0000
          vmulss  xmm2, xmm1, xmm7
          vcvttss2si eax, xmm2
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm0, xmm9, cs:__real@447a0000
          vmulss  xmm1, xmm0, xmm7
          vcvttss2si eax, xmm1
        }
      }
      _RBX->weapCommon.weaponIdleTime += _EAX;
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v48;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
  }
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
  int v5; 
  int v6; 
  int v7; 
  BOOL v8; 
  playerState_s *ps; 
  bool v10; 
  unsigned int v12; 
  __int64 v15; 
  __int64 v16; 
  bool outIsAlternate; 

  ViewmodelOrOffhandADSWeapon = BG_GetViewmodelOrOffhandADSWeapon(pm->weaponMap, pm->ps, &outIsAlternate);
  EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(pm->weaponMap, pm->ps, ViewmodelOrOffhandADSWeapon);
  if ( EquippedWeaponStateNonConst )
  {
    v5 = BG_ADSZoomCount(pm->weaponMap, pm->ps, ViewmodelOrOffhandADSWeapon, outIsAlternate);
    v6 = v5;
    if ( v5 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2264, ASSERT_TYPE_ASSERT, "( adsZoomCount ) <= ( 3 )", "%s <= %s\n\t%i, %i", "adsZoomCount", "WEAPON_VZSCOPE_MAXFOVS", v5, 3) )
      __debugbreak();
    if ( v6 > 1 )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2271, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_VARIABLE_ZOOM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_VARIABLE_ZOOM )") )
        __debugbreak();
      v7 = 1;
      v8 = BG_InADS(pm->ps) || BG_IsUsingOffhandGestureWeaponADSActive(pm->ps);
      if ( !BG_IsZoomButtonPressed(&pm->cmd) || BG_IsZoomButtonPressed(&pm->oldcmd) )
        v7 = 0;
      if ( v8 && v7 )
      {
        ps = pm->ps;
        v10 = outIsAlternate;
        if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2234, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        *(double *)&_XMM0 = BG_GetADSZoomLevelFraction(pm->weaponMap, ps, ViewmodelOrOffhandADSWeapon, v10, pm->cmd.serverTime);
        __asm { vmovaps xmm1, xmm0; value }
        BG_SetAdsZoomLevelOnStateChange(ps, *(float *)&_XMM1);
        ps->weapCommon.adsZoomLevelChangeTime = pm->cmd.serverTime;
        v12 = (EquippedWeaponStateNonConst->zoomLevelIndex + 1) % v6;
        EquippedWeaponStateNonConst->zoomLevelIndex = v12;
        if ( v12 >= v6 )
        {
          LODWORD(v16) = v6;
          LODWORD(v15) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2245, ASSERT_TYPE_ASSERT, "(unsigned)( state->zoomLevelIndex ) < (unsigned)( adsZoomCount )", "state->zoomLevelIndex doesn't index adsZoomCount\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        PM_AddEvent(pm, EV_VARIABLE_ZOOM_CHANGE);
      }
      else if ( EquippedWeaponStateNonConst->zoomLevelIndex )
      {
        _RDX = pm->ps;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vucomiss xmm0, dword ptr [rdx+730h]
        }
        if ( !EquippedWeaponStateNonConst->zoomLevelIndex && BG_ADSResetZoomLevelOnToggle(pm->weaponMap, _RDX, ViewmodelOrOffhandADSWeapon, outIsAlternate) )
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
  const WeaponDef *v13; 
  int v14; 
  const BgWeaponMap *v15; 
  bool IsPlayingGesture; 
  const BgWeaponMap *v17; 
  playerState_s *v18; 
  BgWeaponMap *v19; 
  const Weapon *v20; 
  const WeaponDef *v21; 
  unsigned int v22; 
  const Weapon *v23; 
  const Gesture *gesturePullbackAlt; 
  const Gesture *AssetFromIndex; 
  int v29; 
  bool v31; 
  char v32; 
  bool v41; 
  const BgWeaponMap *v42; 
  const Weapon *v43; 
  const WeaponDef *v44; 
  unsigned int v45; 
  const Weapon *v46; 
  const Gesture *gestureThrow; 
  const Gesture *v48; 
  int v50; 
  char v51; 
  const Weapon *v68; 
  unsigned int v69; 
  const WeaponDef *v70; 
  const Weapon *v71; 
  const Gesture *gesturePullback; 
  const Gesture *v76; 
  GestureAnimationSettings *AnimationSettings; 
  char v85; 
  int v86; 
  int OffhandMaxHoldTime; 
  int v88; 
  const BgWeaponMap *v103; 
  const Weapon *v104; 
  const WeaponDef *v105; 
  unsigned int v106; 
  const Weapon *v107; 
  const Gesture *gestureThrowAlt; 
  bool v113; 
  bool Bool_Internal_DebugName; 
  const BgWeaponMap *weaponMap; 
  const Weapon *OffHandWeaponForPlayer; 
  const WeaponDef *v130; 
  unsigned int IndexFromGesture; 
  const Weapon *CurrentWeaponForPlayer; 
  const Gesture *gestureAnimation; 
  int offhandGestureFlags; 
  PlayerAnimScriptEventType PowerAnimEvent; 
  unsigned int v143[2]; 
  GesturePlayRequest request; 
  GesturePlayRequest result; 
  unsigned int v151; 
  unsigned int outSlot; 
  const WeaponDef *slot; 

  _RBP = pm;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14719, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = _RBP->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14719, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RDI = BG_GetOffHandWeaponForPlayer(_RBP->weaponMap, _RSI);
  v13 = BG_WeaponDef(_RDI, 0);
  _RSI->weapCommon.fPreviousOffhandAdsFrac = _RSI->weapCommon.offhandAdsFrac;
  slot = v13;
  if ( BG_Offhand_HasActiveOffhand(_RSI) && !_RDI->weaponIdx )
  {
    _RSI->weapCommon.offhandGestureFlags = 0;
    return;
  }
  v31 = (_RSI->weapCommon.offhandGestureFlags & 1) == 0;
  __asm { vmovaps [rsp+138h+var_48], xmm6 }
  if ( v31 )
  {
    if ( BG_IsUsingScriptedOffhandWeapon(_RSI) )
    {
      if ( (_RSI->weapCommon.offhandGestureFlags & 0x40) == 0 )
        goto LABEL_105;
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && BG_Offhand_ShouldStopTauntThirdPerson(_RBP->weaponMap, _RSI, OHGT_WEAPON, _RDI, _RBP->cmd.serverTime) && !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_playerasm_disable_cancel_torso_stance_change, "playerasm_disable_cancel_torso_stance_change") )
        BG_ClearTorsoAnim(_RBP->m_bgHandler, _RSI);
      if ( BG_Offhand_IsPlayingGesture(_RBP->weaponMap, _RSI, OHGT_WEAPON) )
      {
LABEL_105:
        if ( SLOBYTE(_RSI->weapCommon.offhandGestureFlags) < 0 )
        {
          weaponMap = _RBP->weaponMap;
          v143[0] = 2;
          OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(weaponMap, _RSI);
          v130 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
          IndexFromGesture = 256;
          CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, _RSI);
          BG_PlayAltGesturesForOffhandWeapons(CurrentWeaponForPlayer);
          gestureAnimation = v130->gestureAnimation;
          if ( gestureAnimation )
            IndexFromGesture = BG_Gesture_GetIndexFromGesture(gestureAnimation);
          BG_Gesture_IsPlayingByIndex(_RSI, IndexFromGesture, v143);
          if ( v143[0] == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15068, ASSERT_TYPE_ASSERT, "(gestureSlot != 2)", (const char *)&queryFormat, "gestureSlot != GESTURE_INVALID_SLOT") )
            __debugbreak();
          *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(_RSI, v143[0], _RBP->cmd.serverTime);
          __asm { vmovaps xmm6, xmm0 }
          BG_Gesture_GetSectionStartTime(IndexFromGesture, GESTURE_SECTION_OUT);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vmulss  xmm2, xmm1, cs:__real@3a83126f
            vcomiss xmm6, xmm2
          }
          if ( !(v85 | v31) )
          {
            offhandGestureFlags = _RSI->weapCommon.offhandGestureFlags;
            if ( (offhandGestureFlags & 4) == 0 )
              _RSI->weapCommon.offhandGestureFlags = offhandGestureFlags | 4;
            if ( PM_Weapon_OffHand_DesiresHolding(_RBP, _RSI) )
            {
              PowerAnimEvent = BG_AnimationMP_GetPowerAnimEvent(_RBP);
              BG_AnimScriptEvent(_RBP->m_bgHandler, _RSI, PowerAnimEvent, 0, 1, &pml->holdrand);
            }
            else
            {
              BG_OffhandGestureScriptWeaponEnd(_RBP->weaponMap, _RSI, _RBP->cmd.serverTime, 0);
              if ( BG_UseFastOffhand(_RSI, _RBP->weaponMap) )
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_perk_fastOffhandMultiplier, "perk_fastOffhandMultiplier");
              else
                __asm { vmovss  xmm0, cs:__real@3f800000 }
              __asm
              {
                vmulss  xmm0, xmm0, dword ptr [r15+10E8h]
                vmulss  xmm1, xmm0, cs:__real@c47a0000
                vcvttss2si eax, xmm1
              }
              _RSI->weapCommon.offhandGestureFireTime = _RBP->cmd.serverTime - _EAX;
              BG_AnimScriptEvent(_RBP->m_bgHandler, _RSI, ANIM_ET_POWER_EXIT, 0, 1, &pml->holdrand);
            }
          }
        }
      }
      else
      {
        BG_OffhandGestureScriptWeaponEnd(_RBP->weaponMap, _RSI, _RBP->cmd.serverTime, 0);
      }
    }
    goto LABEL_95;
  }
  if ( v13->weapType != WEAPTYPE_GRENADE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14746, ASSERT_TYPE_ASSERT, "(pWeapDef->weapType == WEAPTYPE_GRENADE)", (const char *)&queryFormat, "pWeapDef->weapType == WEAPTYPE_GRENADE") )
    __debugbreak();
  if ( !BG_OffhandGestureWeaponWillDetonate(_RSI) )
  {
    v14 = _RSI->weapCommon.offhandGestureFlags;
    v15 = _RBP->weaponMap;
    if ( (v14 & 0x10) != 0 )
    {
      IsPlayingGesture = BG_Offhand_IsPlayingGesture(v15, _RSI, OHGT_PULLBACK);
      v17 = _RBP->weaponMap;
      v18 = _RSI;
      v19 = (BgWeaponMap *)v17;
      if ( IsPlayingGesture )
      {
        outSlot = 2;
        v20 = BG_GetOffHandWeaponForPlayer(v17, _RSI);
        v21 = BG_WeaponDef(v20, 0);
        v22 = 256;
        v23 = BG_GetCurrentWeaponForPlayer(v17, _RSI);
        if ( BG_PlayAltGesturesForOffhandWeapons(v23) && (gesturePullbackAlt = v21->gesturePullbackAlt) != NULL || (gesturePullbackAlt = v21->gesturePullback) != NULL )
          v22 = BG_Gesture_GetIndexFromGesture(gesturePullbackAlt);
        if ( !BG_Gesture_IsPlayingByIndex(_RSI, v22, &outSlot) )
          goto LABEL_95;
        if ( outSlot == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14778, ASSERT_TYPE_ASSERT, "(gestureSlot != 2)", (const char *)&queryFormat, "gestureSlot != GESTURE_INVALID_SLOT") )
          __debugbreak();
        *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(_RSI, outSlot, _RBP->cmd.serverTime);
        __asm { vmovaps xmm6, xmm0 }
        AssetFromIndex = BG_Gesture_GetAssetFromIndex(v22);
        if ( !BG_Gesture_GetAnimationSettings(AssetFromIndex)->hasAdsTransitions )
          goto LABEL_95;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, dword ptr [rax+34h]
        }
        v29 = _RSI->weapCommon.offhandGestureFlags;
        __asm { vmulss  xmm2, xmm1, cs:__real@3a83126f }
        v32 = (v29 & 0x200) != 0 || v31;
        if ( (v29 & 0x200) != 0 )
        {
          __asm { vcomiss xmm6, xmm2 }
          if ( (v29 & 0x200) == 0 && !v31 )
          {
            _RSI->weapCommon.offhandGestureFlags = v29 & 0xFFFFFDFF;
            _RBP->m_flags |= 0x800u;
            __asm
            {
              vmovups ymm0, ymmword ptr [rdi]
              vmovups ymmword ptr [rbp+2E8h], ymm0
              vmovups xmm1, xmmword ptr [rdi+20h]
              vmovups xmmword ptr [rbp+308h], xmm1
              vmovsd  xmm0, qword ptr [rdi+30h]
              vmovsd  qword ptr [rbp+318h], xmm0
              vxorps  xmm1, xmm1, xmm1; min
              vcomiss xmm2, xmm1
            }
            *(_DWORD *)&_RBP->offhandAdsWeapon.weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
            __asm
            {
              vdivss  xmm0, xmm6, xmm2; val
              vmovss  xmm6, cs:__real@3f800000
              vmovaps xmm2, xmm6; max
            }
            I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vsubss  xmm0, xmm6, xmm0
              vmovss  dword ptr [rsi+714h], xmm0
            }
            goto LABEL_95;
          }
LABEL_46:
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vmovss  dword ptr [rsi+714h], xmm0
          }
          goto LABEL_95;
        }
        goto LABEL_47;
      }
    }
    else
    {
      if ( (v14 & 8) == 0 )
      {
        v151 = 2;
        v68 = BG_GetOffHandWeaponForPlayer(v15, _RSI);
        v69 = 256;
        v70 = BG_WeaponDef(v68, 0);
        v71 = BG_GetCurrentWeaponForPlayer(v15, _RSI);
        if ( BG_PlayAltGesturesForOffhandWeapons(v71) && (gesturePullback = v70->gesturePullbackAlt) != NULL || (gesturePullback = v70->gesturePullback) != NULL )
          v69 = BG_Gesture_GetIndexFromGesture(gesturePullback);
        if ( BG_Gesture_IsPlayingByIndex(_RSI, v69, &v151) )
        {
          __asm
          {
            vmovaps [rsp+138h+var_58], xmm7
            vmovaps [rsp+138h+var_68], xmm8
            vmovaps [rsp+138h+var_78], xmm9
            vmovaps [rsp+138h+var_88], xmm10
          }
          if ( v151 == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14877, ASSERT_TYPE_ASSERT, "(gestureSlot != 2)", (const char *)&queryFormat, "gestureSlot != GESTURE_INVALID_SLOT") )
            __debugbreak();
          *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(_RSI, v151, _RBP->cmd.serverTime);
          _R13 = (__int64)slot;
          __asm
          {
            vmovaps xmm8, xmm0
            vmovss  xmm6, dword ptr [r13+10C8h]
          }
          v76 = BG_Gesture_GetAssetFromIndex(v69);
          AnimationSettings = BG_Gesture_GetAnimationSettings(v76);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vxorps  xmm9, xmm9, xmm9
          }
          *(_QWORD *)v143 = AnimationSettings;
          __asm
          {
            vcvtsi2ss xmm1, xmm1, dword ptr [rax+4]
            vmulss  xmm7, xmm1, cs:__real@3a83126f
            vcmpeqss xmm1, xmm6, xmm9
            vblendvps xmm10, xmm6, xmm7, xmm1
            vcomiss xmm8, xmm10
            vmovss  xmm6, cs:__real@3f800000
          }
          if ( !(v85 | v31) )
          {
            v86 = _RSI->weapCommon.offhandGestureFlags;
            if ( (v86 & 4) == 0 )
            {
              _RSI->weapCommon.offhandGestureFlags = v86 | 4;
              _RSI->grenadeTimeLeft = BG_GetCookingGrenadeFuseMax(_RDI, 0, _RSI);
            }
            OffhandMaxHoldTime = BG_GetOffhandMaxHoldTime(_RDI, 0);
            v88 = BG_GetCookingGrenadeFuseMax(_RDI, 0, _RSI) - _RSI->grenadeTimeLeft;
            if ( PM_Weapon_OffHand_DesiresHolding(_RBP, _RSI) && (OffhandMaxHoldTime <= 0 || v88 < OffhandMaxHoldTime) )
            {
              if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
                PM_Weapon_PrepareThrowAnimScriptEvent(_RBP, _RSI, _RDI, 0, &pml->holdrand);
            }
            else
            {
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_offhandPullback_quickPercent, "offhandPullback_quickPercent");
              __asm
              {
                vmulss  xmm1, xmm0, xmm7
                vcomiss xmm8, xmm1
              }
              if ( v85 )
                BG_AddPredictableEventToPlayerstate(EV_PULLBACK_OFFHAND_QUICK, _RSI->weapCommon.offHandHandle.m_mapEntryId, _RBP->cmd.serverTime, _RBP->weaponMap, _RSI);
              _RSI->weapCommon.offhandGestureFlags &= ~4u;
              _RSI->weapCommon.offhandGestureFlags |= 8u;
              __asm
              {
                vcvtss2sd xmm0, xmm7, xmm7
                vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
                vsubss  xmm2, xmm8, xmm10
                vsubss  xmm0, xmm7, xmm10
                vmaxss  xmm1, xmm0, cs:__real@38d1b717
                vdivss  xmm0, xmm2, xmm1; val
                vmovaps xmm2, xmm6; max
                vxorps  xmm1, xmm1, xmm1; min
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vsubss  xmm1, xmm6, xmm0
                vmulss  xmm2, xmm1, dword ptr [r13+10D0h]
                vmulss  xmm0, xmm0, dword ptr [r13+10CCh]
                vaddss  xmm1, xmm2, xmm0
                vmulss  xmm2, xmm1, cs:__real@447a0000
                vcvttss2si eax, xmm2
              }
              BG_Gesture_StopBySlot(_RSI, v151, _RBP->cmd.serverTime, 1, _EAX, 1);
              v103 = _RBP->weaponMap;
              v104 = BG_GetOffHandWeaponForPlayer(v103, _RSI);
              v105 = BG_WeaponDef(v104, 0);
              v106 = 256;
              v107 = BG_GetCurrentWeaponForPlayer(v103, _RSI);
              if ( (!BG_PlayAltGesturesForOffhandWeapons(v107) || (gestureThrowAlt = v105->gestureThrowAlt) == NULL) && (gestureThrowAlt = v105->gestureThrow) == NULL || (v106 = BG_Gesture_GetIndexFromGesture(gestureThrowAlt), v106 == 256) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14938, ASSERT_TYPE_ASSERT, "(gestureOffIdx != (1<<8))", (const char *)&queryFormat, "gestureOffIdx != GESTURE_INVALID_INDEX") )
                  __debugbreak();
              }
              _RAX = BG_GesturePriority_SetupRequest(&result, _RBP->weaponMap, _RSI, _RBP->m_bgHandler, v106, _RBP->cmd.serverTime);
              __asm
              {
                vmovups ymm0, ymmword ptr [rax]
                vmovups ymmword ptr [rsp+138h+request.weaponMap], ymm0
                vmovups xmm1, xmmword ptr [rax+20h]
                vmovups xmmword ptr [rsp+138h+request.startTime], xmm1
                vmovsd  xmm0, qword ptr [rax+30h]
                vmovsd  qword ptr [rsp+138h+request.cancelTransitions], xmm0
              }
              request.ignoreGamePlayState = 1;
              if ( !BG_GesturePriority_TryPlay(&request, NULL, NULL) )
              {
                Com_PrintWarning(16, "faild to play throw gesture for offhand weapon, canceling the action, is the priority of the assigned gesture set to offhand thrown weapon?\n");
                BG_OffhandGestureWeaponEnd(_RBP->weaponMap, _RSI, _RBP->m_bgHandler, _RBP->cmd.serverTime, 1);
              }
              if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
                PM_Weapon_FireWeaponAnimScriptEvent(_RBP, _RSI, _RDI, 0, &pml->holdrand);
            }
            if ( (_RSI->weapCommon.offhandGestureFlags & 8) != 0 && !_RSI->weapCommon.offhandGestureFireTime )
            {
              if ( BG_UseFastOffhand(_RSI, _RBP->weaponMap) )
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_perk_fastOffhandMultiplier, "perk_fastOffhandMultiplier");
              else
                __asm { vmovaps xmm0, xmm6 }
              __asm
              {
                vmulss  xmm0, xmm0, dword ptr [r13+10E8h]
                vmulss  xmm1, xmm0, cs:__real@c47a0000
                vcvttss2si eax, xmm1
              }
              _RSI->weapCommon.offhandGestureFireTime = _RBP->cmd.serverTime - _EAX;
            }
            AnimationSettings = *(GestureAnimationSettings **)v143;
          }
          __asm { vmovaps xmm10, [rsp+138h+var_88] }
          if ( AnimationSettings->hasAdsTransitions )
          {
            v113 = (_RSI->weapCommon.offhandGestureFlags & 0x200) == 0;
            if ( (_RSI->weapCommon.offhandGestureFlags & 0x200) != 0 )
            {
              _RSI->weapCommon.offhandAdsFrac = 1.0;
            }
            else
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, dword ptr [rax+30h]
                vmulss  xmm7, xmm0, cs:__real@3a83126f
                vcomiss xmm8, xmm7
              }
              if ( (_RSI->weapCommon.offhandGestureFlags & 0x200) != 0 && (Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_offhand_ads_weapons, "killswitch_offhand_ads_weapons"), v113 = !Bool_Internal_DebugName, Bool_Internal_DebugName) )
              {
                _RSI->weapCommon.offhandGestureFlags |= 0x200u;
                _RBP->m_flags |= 0x400u;
                __asm
                {
                  vmovups ymm0, ymmword ptr [rdi]
                  vmovups ymmword ptr [rbp+2E8h], ymm0
                  vmovups xmm1, xmmword ptr [rdi+20h]
                  vmovups xmmword ptr [rbp+308h], xmm1
                  vmovsd  xmm0, qword ptr [rdi+30h]
                  vmovsd  qword ptr [rbp+318h], xmm0
                }
                *(_DWORD *)&_RBP->offhandAdsWeapon.weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
              }
              else
              {
                __asm { vcomiss xmm7, xmm9 }
                if ( !v113 )
                {
                  __asm
                  {
                    vdivss  xmm0, xmm8, xmm7; val
                    vmovaps xmm2, xmm6; max
                    vxorps  xmm1, xmm1, xmm1; min
                  }
                  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                  __asm { vmovaps xmm6, xmm0 }
                }
              }
              __asm { vmovss  dword ptr [rsi+714h], xmm6 }
            }
          }
          __asm
          {
            vmovaps xmm8, [rsp+138h+var_68]
            vmovaps xmm7, [rsp+138h+var_58]
            vmovaps xmm9, [rsp+138h+var_78]
          }
          goto LABEL_95;
        }
        goto LABEL_16;
      }
      v41 = BG_Offhand_IsPlayingGesture(v15, _RSI, OHGT_THROW);
      v42 = _RBP->weaponMap;
      v18 = _RSI;
      v19 = (BgWeaponMap *)v42;
      if ( v41 )
      {
        LODWORD(slot) = 2;
        v43 = BG_GetOffHandWeaponForPlayer(v42, _RSI);
        v44 = BG_WeaponDef(v43, 0);
        v45 = 256;
        v46 = BG_GetCurrentWeaponForPlayer(v42, _RSI);
        if ( BG_PlayAltGesturesForOffhandWeapons(v46) && (gestureThrow = v44->gestureThrowAlt) != NULL || (gestureThrow = v44->gestureThrow) != NULL )
          v45 = BG_Gesture_GetIndexFromGesture(gestureThrow);
        if ( !BG_Gesture_IsPlayingByIndex(_RSI, v45, (unsigned int *)&slot) )
          goto LABEL_95;
        if ( (_DWORD)slot == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14830, ASSERT_TYPE_ASSERT, "(gestureSlot != 2)", (const char *)&queryFormat, "gestureSlot != GESTURE_INVALID_SLOT") )
          __debugbreak();
        *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(_RSI, (const unsigned int)slot, _RBP->cmd.serverTime);
        __asm { vmovaps xmm6, xmm0 }
        v48 = BG_Gesture_GetAssetFromIndex(v45);
        if ( !BG_Gesture_GetAnimationSettings(v48)->hasAdsTransitions )
          goto LABEL_95;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, dword ptr [rax+34h]
        }
        v50 = _RSI->weapCommon.offhandGestureFlags;
        __asm { vmulss  xmm2, xmm1, cs:__real@3a83126f }
        v32 = ((v50 & 0x200) != 0) | v51;
        if ( (v50 & 0x200) != 0 )
        {
          __asm { vcomiss xmm6, xmm2 }
          if ( !(((v50 & 0x200) != 0) | v51) )
          {
            _RSI->weapCommon.offhandGestureFlags = v50 & 0xFFFFFDFF;
            _RBP->m_flags |= 0x800u;
            __asm
            {
              vmovups ymm0, ymmword ptr [rdi]
              vmovups ymmword ptr [rbp+2E8h], ymm0
              vmovups xmm1, xmmword ptr [rdi+20h]
              vmovups xmmword ptr [rbp+308h], xmm1
              vmovsd  xmm0, qword ptr [rdi+30h]
              vmovsd  qword ptr [rbp+318h], xmm0
              vxorps  xmm1, xmm1, xmm1; min
              vcomiss xmm2, xmm1
            }
            *(_DWORD *)&_RBP->offhandAdsWeapon.weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
            __asm
            {
              vdivss  xmm0, xmm6, xmm2; val
              vmovss  xmm6, cs:__real@3f800000
              vmovaps xmm2, xmm6; max
            }
            I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vsubss  xmm0, xmm6, xmm0
              vmovss  dword ptr [rsi+714h], xmm0
            }
            goto LABEL_95;
          }
          goto LABEL_46;
        }
LABEL_47:
        __asm
        {
          vxorps  xmm1, xmm1, xmm1; min
          vcomiss xmm2, xmm1
        }
        if ( v32 )
        {
          __asm
          {
            vmovss  xmm6, cs:__real@3f800000
            vmovaps xmm0, xmm6
          }
        }
        else
        {
          __asm
          {
            vdivss  xmm0, xmm6, xmm2; val
            vmovss  xmm6, cs:__real@3f800000
            vmovaps xmm2, xmm6; max
          }
          I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        }
        __asm
        {
          vsubss  xmm0, xmm6, xmm0
          vminss  xmm1, xmm0, dword ptr [rsi+714h]
          vmovss  dword ptr [rsi+714h], xmm1
        }
        goto LABEL_95;
      }
    }
    BG_OffhandGestureWeaponEnd(v19, v18, _RBP->m_bgHandler, _RBP->cmd.serverTime, 1);
    goto LABEL_95;
  }
  if ( !BG_Offhand_IsPlayingGesture(_RBP->weaponMap, _RSI, OHGT_DETONATE) )
LABEL_16:
    BG_OffhandGestureWeaponEnd(_RBP->weaponMap, _RSI, _RBP->m_bgHandler, _RBP->cmd.serverTime, 1);
LABEL_95:
  __asm { vmovaps xmm6, [rsp+138h+var_48] }
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
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *ps; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  const dvar_t *v7; 
  bool v8; 
  const char *v9; 
  const Weapon *ViewmodelOrOffhandADSWeapon; 
  bool IsUsingOffhandGestureWeaponADSActive; 
  int v15; 
  int v16; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 
  const dvar_t *v18; 
  int v19; 
  int v20; 
  PlayerHandIndex v21; 
  int *m_delayedActionOriginalState; 
  int *p_weaponState; 
  int v24; 
  bool v25; 
  const dvar_t *v26; 
  int *v27; 
  PlayerHandIndex v29; 
  DelayedActionState *p_delayedAction; 
  int *v31; 
  int v32; 
  PlayerHandIndex i; 
  int IsDelayedAction; 
  int v35; 
  bool v36; 
  const playerState_s *v37; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *v38; 
  int v39; 
  bool v47; 
  PlayerHandIndex v55; 
  DelayedActionState *v56; 
  int v57; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *v58; 
  unsigned __int64 v59; 
  __int64 v60; 
  const playerState_s *v61; 
  int weaponState; 
  const Weapon *CurrentWeaponForPlayer; 
  __int64 isQuickMelee; 
  __int64 applyPendingDamage; 
  bool outIsAlternate; 
  pml_t *v67; 
  __int64 v68; 
  DelayedActionState delayedAction; 
  Weapon heldWeapon; 

  v68 = -2i64;
  _R15 = pml;
  v67 = pml;
  _RDI = pm;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon");
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18803, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = _RDI->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18803, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)_RDI->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18788, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(ps + 229, ACTIVE, 0x2Au) && ps[169].m_flags[1] != 62 )
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(ps + 229, ACTIVE, 0x2Au);
  PM_Weapon_CheckExecution(_RDI, _R15);
  if ( !PM_Weapon_Allowed(_RDI, _R15->msec) )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon No Weapon Allowed");
    if ( BG_Turret_IsUsingNonRemoteTurret(_RSI) )
    {
      if ( _RSI->pm_type < 7 )
      {
        p_eFlags = &_RSI->eFlags;
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
      PM_Weapon_CheckForChangeWeapon(_RDI, _R15);
      PM_UpdateAimDownSightLerp(_RDI, _R15->msec);
      PM_Turret_UpdateFire(_RDI, _R15, 0);
    }
    v7 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
    {
      v8 = _RDI->m_bgHandler->IsServer((BgHandler *)_RDI->m_bgHandler);
      v9 = "HighPriorityDebug - PM_Weapon SERVER early-out, !PM_Weapon_Allowed\n";
      if ( !v8 )
        v9 = "HighPriorityDebug - PM_Weapon CLIENT early-out, !PM_Weapon_Allowed\n";
      Com_Printf(17, v9);
    }
    Sys_ProfEndNamedEvent();
    goto LABEL_147;
  }
  _RDI->m_flags |= 0x10u;
  PM_Turret_UpdateFire(_RDI, _R15, 0);
  PM_UpdateAimDownSightLerp(_RDI, _R15->msec);
  PM_UpdateZoomLevel(_RDI);
  __asm { vmovss  xmm2, dword ptr [r15+24h]; frametime }
  PM_UpdateHoldBreath(_RDI, _R15->msec, *(double *)&_XMM2);
  __asm { vmovss  xmm2, dword ptr [r15+24h]; frametime }
  PM_UpdateScopeDrift(_RDI, _R15->msec, *(float *)&_XMM2);
  __asm { vmovss  xmm2, dword ptr [r15+24h]; frametime }
  PM_UpdateSwayPrediction(_RDI->weaponMap, _RSI, *(double *)&_XMM2, &_R15->holdrand);
  PM_UpdateHybridToggle(_RDI);
  ViewmodelOrOffhandADSWeapon = BG_GetViewmodelOrOffhandADSWeapon(_RDI->weaponMap, _RDI->ps, &outIsAlternate);
  if ( BG_CanThermalToggle(ViewmodelOrOffhandADSWeapon, outIsAlternate) )
  {
    if ( BG_InADS(_RDI->ps) || (IsUsingOffhandGestureWeaponADSActive = BG_IsUsingOffhandGestureWeaponADSActive(_RDI->ps), v15 = 0, IsUsingOffhandGestureWeaponADSActive) )
      v15 = 1;
    if ( (_RDI->cmd.buttons & 4) == 0 || (v16 = 1, (_RDI->oldcmd.buttons & 4) != 0) )
      v16 = 0;
    if ( v15 && v16 )
    {
      EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(_RDI->weaponMap, _RDI->ps, ViewmodelOrOffhandADSWeapon);
      EquippedWeaponStateNonConst->thermalEnabled = !EquippedWeaponStateNonConst->thermalEnabled;
    }
  }
  PM_Weapon_Charge_UpdateFrameDelta(_RDI, _R15);
  if ( PM_UpdateOffHandThrow(_RDI, _R15, _RSI) )
  {
    v18 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled )
    {
      if ( _RDI->m_bgHandler->IsServer((BgHandler *)_RDI->m_bgHandler) )
        Com_Printf(17, "HighPriorityDebug - PM_Weapon SERVER early-out, PM_UpdateOffHandThrow\n");
      else
        Com_Printf(17, "HighPriorityDebug - PM_Weapon CLIENT early-out, PM_UpdateOffHandThrow\n");
    }
    goto LABEL_147;
  }
  PM_Update_OffhandGestureWeapons(_RDI, _R15);
  v19 = 0;
  *(_QWORD *)delayedAction.m_delayedAction = 0i64;
  v20 = 0;
  *(_QWORD *)delayedAction.m_delayedActionOriginalState = 0i64;
  outIsAlternate = 0;
  v21 = WEAPON_HAND_DEFAULT;
  if ( BG_PlayerLastWeaponHandForViewWeapon(_RDI->weaponMap, _RSI) < WEAPON_HAND_DEFAULT )
    goto LABEL_85;
  m_delayedActionOriginalState = delayedAction.m_delayedActionOriginalState;
  p_weaponState = &_RSI->weapState[0].weaponState;
  do
  {
    v24 = PM_Weapon_WeaponTimeAdjust(_RDI, _R15, v21);
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 112, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (unsigned int)v21 >= NUM_WEAPON_HANDS )
    {
      LODWORD(applyPendingDamage) = 2;
      LODWORD(isQuickMelee) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 113, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>(hand) ) < (unsigned)( NUM_WEAPON_HANDS )", "static_cast<int>(hand) doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", isQuickMelee, applyPendingDamage) )
        __debugbreak();
    }
    *(m_delayedActionOriginalState - 2) = v24;
    *m_delayedActionOriginalState = *p_weaponState;
    if ( PM_Weapon_BurstFirePending(_RDI->weaponMap, _RSI, v21) || PM_Weapon_HyperBurstFirePending(_RDI->weaponMap, _RSI, v21) )
    {
      v25 = 1;
      outIsAlternate = 1;
    }
    else
    {
      v25 = outIsAlternate;
    }
    ++v21;
    p_weaponState += 20;
    ++m_delayedActionOriginalState;
  }
  while ( v21 <= BG_PlayerLastWeaponHandForViewWeapon(_RDI->weaponMap, _RSI) );
  if ( !v25 )
  {
    v20 = delayedAction.m_delayedActionOriginalState[0];
    v19 = delayedAction.m_delayedAction[0];
LABEL_85:
    Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon Checks");
    PM_Weapon_CheckForBlast(_RDI);
    PM_Weapon_CheckForSlide(_RDI);
    PM_Weapon_CheckForInspect(_RDI, _R15, &delayedAction);
    PM_Weapon_CheckForLeap(_RDI, _R15);
    PM_Weapon_CheckForStunned(_RDI, &_R15->holdrand);
    PM_Weapon_CheckForNightVision(_RDI, _R15);
    for ( i = WEAPON_HAND_DEFAULT; i <= BG_PlayerLastWeaponHandForViewWeapon(_RDI->weaponMap, _RSI); PM_Weapon_CheckForSprint(_RDI, _R15, 0, i++, IsDelayedAction) )
      IsDelayedAction = DelayedActionState::IsDelayedAction(&delayedAction, _RSI, i);
    PM_Weapon_CheckForOffHand(_RDI, _R15);
    PM_Weapon_CheckForTakeOffhand(_RDI);
    PM_Ladder_CheckForLadderSlide(_RDI, _R15);
    PM_Ladder_CheckForLadderAim(_RDI, _R15);
    PM_Weapon_CheckForAutoAltToggle(_RDI, _R15);
    PM_Weapon_CheckForChangeWeapon(_RDI, _R15);
    PM_Weapon_CheckForReload(_RDI, _R15, &delayedAction);
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 122, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v35 = delayedAction.m_delayedAction[1];
    if ( delayedAction.m_delayedActionOriginalState[1] != _RSI->weapState[1].weaponState )
      v35 = 0;
    v27 = &_RSI->weapState[0].weaponState;
    v36 = v20 == _RSI->weapState[0].weaponState;
    _ER12 = 0;
    if ( !v36 )
      v19 = 0;
    if ( v19 > v35 )
      v35 = v19;
    PM_GameInterface_CheckForMeleeAction(_RDI, _R15, v35, &_R15->holdrand);
    PM_Weapon_CheckForMelee(_RDI, _R15, v35, &_R15->holdrand);
    v37 = _RDI->ps;
    if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11166, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_LADDER_AIM|0x80) && (unsigned int)(v37->weapState[0].weaponState - 22) <= 2 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v37->pm_flags, ACTIVE, 0x14u) && PM_Weapon_IsInInterruptibleState(_RDI->weaponMap, v37, WEAPON_HAND_DEFAULT, _RDI->m_bgHandler) && (_RDI->cmd.buttons & 2) != 0 && !v37->sprintState.sprintButtonUpRequired )
      PM_Weapon_MeleeEnd(_RDI, _R15, 0, WEAPON_HAND_DEFAULT, 0, 0, 0);
    PM_Weapon_CheckForDetonation(_RDI);
    PM_Weapon_CheckForOffHandThrowCancel(_RDI, _R15);
    v38 = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)_RDI->ps;
    if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15401, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v39 = v38[225].m_flags[1];
    if ( v39 && _RDI->cmd.serverTime >= v39 )
    {
      if ( (v38[225].m_flags[0] & 0x20) != 0 )
        PM_SendDetonateEvent(_RDI);
      else
        PM_Weapon_OffHand(_RDI, _R15);
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(v38 + 229, ACTIVE, 1u);
      v38[225].m_flags[1] = 0;
    }
    Sys_ProfEndNamedEvent();
    goto LABEL_73;
  }
  v26 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
  if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.enabled )
  {
    if ( _RDI->m_bgHandler->IsServer((BgHandler *)_RDI->m_bgHandler) )
      Com_Printf(17, "HighPriorityDebug - PM_Weapon SERVER skipped PM_Weapon_CheckForChangeWeapon, hasBurstFirePending\n");
    else
      Com_Printf(17, "HighPriorityDebug - PM_Weapon CLIENT skipped PM_Weapon_CheckForChangeWeapon, hasBurstFirePending\n");
  }
  v27 = &_RSI->weapState[0].weaponState;
  _ER12 = 0;
LABEL_73:
  PM_Demeanor_ProcessState(_RDI);
  BG_GesturePriority_Update(_RDI);
  PM_Gesture_ProcessState(_RDI);
  v29 = WEAPON_HAND_DEFAULT;
  if ( BG_PlayerLastWeaponHandForViewWeapon(_RDI->weaponMap, _RSI) >= WEAPON_HAND_DEFAULT )
  {
    p_delayedAction = &delayedAction;
    v31 = v27;
    do
    {
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 122, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( (unsigned int)v29 >= NUM_WEAPON_HANDS )
      {
        LODWORD(applyPendingDamage) = 2;
        LODWORD(isQuickMelee) = v29;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 123, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>(hand) ) < (unsigned)( NUM_WEAPON_HANDS )", "static_cast<int>(hand) doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", isQuickMelee, applyPendingDamage) )
          __debugbreak();
      }
      if ( p_delayedAction->m_delayedActionOriginalState[0] == *v31 )
        v32 = p_delayedAction->m_delayedAction[0];
      else
        v32 = 0;
      PM_Weapon_UpdateQueuedFireAction(_RDI, v29++, v32);
      v31 += 20;
      p_delayedAction = (DelayedActionState *)((char *)p_delayedAction + 4);
    }
    while ( v29 <= BG_PlayerLastWeaponHandForViewWeapon(_RDI->weaponMap, _RSI) );
    _R15 = v67;
    v27 = &_RSI->weapState[0].weaponState;
    _ER12 = 0;
  }
  if ( (unsigned int)(*v27 - 22) <= 2 )
  {
    _RAX = BG_GetCurrentWeaponForPlayer(_RDI->weaponMap, _RSI);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+57h+heldWeapon.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rbp+57h+heldWeapon.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rbp+57h+heldWeapon.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&heldWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    if ( BG_IsWeaponMeleeOverride(_RDI->weaponMap, _RSI, &heldWeapon) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi+34h]
        vmovups ymmword ptr [rbp+57h+heldWeapon.weaponIdx], ymm0
        vmovups xmm1, xmmword ptr [rdi+54h]
        vmovups xmmword ptr [rbp+57h+heldWeapon.attachmentVariationIndices+5], xmm1
        vmovsd  xmm0, qword ptr [rdi+64h]
        vmovsd  qword ptr [rbp+57h+heldWeapon.attachmentVariationIndices+15h], xmm0
      }
      *(_DWORD *)&heldWeapon.weaponCamo = *(_DWORD *)&_RDI->cmd.weapon.weaponCamo;
    }
    v47 = BG_UsingAlternate(_RSI);
    __asm { vmovd   xmm1, r12d }
    _EAX = BG_UsesReverseWeaponSpread(&heldWeapon, v47);
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm2, cs:__real@437f0000
      vxorps  xmm1, xmm1, xmm1
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovss  dword ptr [rsi+744h], xmm0
    }
  }
  v55 = WEAPON_HAND_DEFAULT;
  if ( BG_PlayerLastWeaponHandForViewWeapon(_RDI->weaponMap, _RSI) >= WEAPON_HAND_DEFAULT )
  {
    v56 = &delayedAction;
    do
    {
      if ( (unsigned int)v55 >= NUM_WEAPON_HANDS )
      {
        LODWORD(applyPendingDamage) = 2;
        LODWORD(isQuickMelee) = v55;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 123, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>(hand) ) < (unsigned)( NUM_WEAPON_HANDS )", "static_cast<int>(hand) doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", isQuickMelee, applyPendingDamage) )
          __debugbreak();
      }
      v57 = 0;
      if ( v56->m_delayedActionOriginalState[0] == *v27 )
        v57 = v56->m_delayedAction[0];
      PM_Weapon_ProcessHand(_RDI, _R15, v57, v55++);
      v27 += 20;
      v56 = (DelayedActionState *)((char *)v56 + 4);
    }
    while ( v55 <= BG_PlayerLastWeaponHandForViewWeapon(_RDI->weaponMap, _RSI) );
  }
  v58 = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)_RDI->ps;
  if ( !v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18598, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v59 = (int)v58[169].m_flags[1];
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(v58 + 229, ACTIVE, 0x22u) )
  {
    if ( (unsigned int)v59 > 0x32 || (v60 = 0x4000001C01FBEi64, !_bittest64(&v60, v59)) )
      PM_Weapon_MeleeEnd(_RDI, _R15, 0, WEAPON_HAND_DEFAULT, 0, 0, 1);
  }
  v61 = _RDI->ps;
  if ( !v61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18615, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponState = v61->weapState[0].weaponState;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v61->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x38u) && (unsigned int)(weaponState - 22) > 2 )
  {
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(_RDI->weaponMap, v61);
    if ( BG_IsMeleeComboWeapon(CurrentWeaponForPlayer) )
    {
      PM_IncrementMeleeComboSeqIdx(_RDI, CurrentWeaponForPlayer);
    }
    else
    {
      v61->weapCommon.meleeComboSeqIdx = 0;
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&v61->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x38u);
    }
  }
  PM_WeaponOffsets_Update(_RDI, _R15);
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
  __int64 v6; 
  playerState_s *ps; 
  char v12; 
  char v13; 

  v6 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2603, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2603, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(double *)&_XMM0 = BG_WeaponCharge_GetEmptyCooldown(r_weapon, isAlternate);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( !(v12 | v13) )
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@447a0000
      vcvttss2si edx, xmm0
    }
    if ( _EDX > 0x3FFF )
      _EDX = 0x3FFF;
    if ( _EDX < 0 )
      _EDX = 0;
    ps->weapState[v6].weaponChargeCooldownTime = _EDX;
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
  bool IsSkydiving; 
  __int64 v18; 
  int *p_weaponState; 
  bool v20; 
  int v21; 
  const Weapon *CurrentWeaponForPlayer; 
  const WeaponDef *v23; 

  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5999, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 5999, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, [rsp+58h+aim]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vmovss  dword ptr [rdi+744h], xmm6
  }
  PM_SetProneMovementOverride(_RDI);
  IsSkydiving = BG_Skydive_IsSkydiving(_RDI);
  if ( time && !IsSkydiving )
  {
    if ( _RDI->ladderState.mode == LADDER_MODE_SLIDE )
    {
      anim = WEAP_LADDER_SLIDE;
      _RDI->weapState[hand].weaponState = 49;
    }
    else
    {
      if ( BG_Ladder_CanClimb(_RDI) )
      {
        v18 = hand;
        p_weaponState = &_RDI->weapState[hand].weaponState;
        if ( *p_weaponState == 47 )
          goto LABEL_28;
        if ( hand == WEAPON_HAND_LEFT || (v20 = !BG_Ladder_CanAim(pm->weaponMap, _RDI), v21 = 6, v20) )
          v21 = 5;
        *p_weaponState = v21;
        goto LABEL_24;
      }
      if ( altSwitch )
      {
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, _RDI);
        v23 = BG_WeaponDef(CurrentWeaponForPlayer, 1);
        if ( BG_WeaponIsDualWield(CurrentWeaponForPlayer) && v23->dualWieldType == DUAL_WIELD_TYPE_ALT_MODE )
          _RDI->weapState[hand].weaponState = 4;
        else
          _RDI->weapState[hand].weaponState = (previousWeaponState == 10) + 2;
      }
      else
      {
        _RDI->weapState[hand].weaponState = 1;
      }
    }
    v18 = hand;
LABEL_24:
    _RDI->weapState[v18].weaponTime = time;
    if ( _RDI->pm_type < 7 )
      PM_SetNextWeaponAnim(_RDI, anim, hand);
    goto LABEL_28;
  }
  if ( hand == WEAPON_HAND_DEFAULT )
    PM_Weapon_FinishWeaponRaise(pm, _RDI, pml, WEAPON_HAND_DEFAULT);
LABEL_28:
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
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
  AmmoStore result; 
  AmmoStore r_clipIndex; 

  v3 = hand;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8021, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8022, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v7 = CurrentWeaponForPlayer;
  if ( !CurrentWeaponForPlayer->weaponIdx )
    return 0;
  if ( BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) )
    v8 = ps && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Du);
  else
    v8 = BG_UsingAlternate(ps);
  _RAX = BG_AmmoStoreForWeapon(&result, v7, v8);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0D8h+r_clipIndex.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+0D8h+r_clipIndex.weapon.attachmentVariationIndices+5], ymm1
  }
  if ( !BG_GetAmmoInClipForClipType(ps, &r_clipIndex, (PlayerHandIndex)v3) )
    return 0;
  WeaponFireType = BG_GetWeaponFireType(v7, v8);
  return WeaponFireType && (unsigned int)(WeaponFireType - 3) > 2 && ps->weapState[v3].weaponShotCount && !BG_ShotLimitReached(ps, v7, (PlayerHandIndex)v3);
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
  bool v13; 
  const Weapon *ViewmodelWeapon; 
  unsigned __int64 weaponState; 
  __int64 v16; 
  char v17; 
  bool v18; 
  bool HasDetonator; 
  int v20; 
  int v21; 
  const Weapon *OffHandWeaponForPlayer; 
  bool v27; 
  int v28; 
  Weapon r_weapon; 
  Weapon v31; 

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
  _RAX = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0F8h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0F8h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0F8h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  v13 = BG_UsingAlternate(ps);
  if ( BG_IsForceUseWeapon(&r_weapon, v13) )
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
      v16 = 0x38000001C30000i64;
      if ( _bittest64(&v16, weaponState) )
        return 0;
    }
  }
  v17 = 0;
  v18 = 0;
  HasDetonator = 0;
  if ( triggeredOffhandSlot == OFFHAND_SLOT_SPECIAL )
  {
    v20 = ps->weapState[0].weaponState;
    if ( (unsigned int)(v20 - 26) > 6 || v20 == 26 )
    {
      v21 = pm->cmd.serverTime - ps->weapCommon.offhandUseTime;
      v18 = v21 <= Dvar_GetInt_Internal_DebugName(DCONST_DVARMPSPINT_offhand_special_activate_time_window, "offhand_special_activate_time_window");
    }
    OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(pm->weaponMap, ps);
    if ( OffHandWeaponForPlayer->weaponIdx && BG_GetEquippedWeaponStateConst(pm->weaponMap, ps, OffHandWeaponForPlayer)->offhandSlot == OFFHAND_SLOT_SPECIAL )
      v17 = 1;
  }
  else if ( (pm->cmd.buttons & 0x200000000000000i64) != 0 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x1Eu) && (unsigned __int8)(triggeredOffhandSlot - 1) <= 1u )
  {
    _RAX = PM_Weapon_GetOffHandWeaponForSlot(pm->weaponMap, ps, triggeredOffhandSlot);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+0F8h+var_88.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rsp+0F8h+var_88.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rsp+0F8h+var_88.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&v31.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    HasDetonator = BG_WeapHasDetonator(&v31, 0);
  }
  if ( !BG_NightVisionInterruptable(pm->weaponMap, ps, pm->cmd.serverTime) )
    return 0;
  v27 = 0;
  if ( BG_Offhand_IsPlayingGesture(pm->weaponMap, ps, OHGT_WEAPON) )
    v27 = !BG_Offhand_ScriptWeaponInterruptable(pm->weaponMap, ps, pm->cmd.serverTime);
  if ( BG_Offhand_IsPlayingGrenadeGesture(pm->weaponMap, ps) && !BG_Offhand_GrenadeGestureInterruptable(pm->weaponMap, ps, pm->cmd.serverTime) )
    v27 = 1;
  if ( ((v28 = ps->weapState[0].weaponState, (unsigned int)(v28 - 26) <= 6) && v28 != 32 || v27) && (triggeredOffhandSlot != OFFHAND_SLOT_SPECIAL || !v18 || v17) && ((unsigned __int8)(triggeredOffhandSlot - 1) > 1u || !HasDetonator) )
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
  bool v5; 
  const Weapon *CurrentWeaponForPlayer; 
  WeaponChargeType Type; 
  char v9; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3037, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3038, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  Type = BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v5);
  if ( Type == HALF_HALF )
    return 1;
  if ( Type != LONG )
    return 0;
  *(double *)&_XMM0 = BG_WeaponADSFractionAffectedByReload(weaponMap, ps);
  __asm { vcomiss xmm0, cs:__real@3f800000 }
  return !v9;
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
  __int64 v5; 
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 
  WeaponChargeType Type; 
  __int64 v12; 
  int weaponChargeAmount; 
  BOOL v14; 
  bool v15; 
  char v17; 
  char v18; 
  int v21; 
  int v22; 
  int v23; 
  bool v24; 
  bool result; 
  bool v26; 
  bool v27; 

  v5 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2619, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2619, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2621, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v10 = BG_UsingAlternate(ps);
  Type = BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v10);
  if ( Type == NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2626, ASSERT_TYPE_ASSERT, "(chargeType != WeaponChargeType::NONE)", (const char *)&queryFormat, "chargeType != WeaponChargeType::NONE") )
    __debugbreak();
  v12 = v5;
  weaponChargeAmount = ps->weapState[v5].weaponChargeAmount;
  v14 = weaponChargeAmount == 4095;
  switch ( Type )
  {
    case LONG_LONG:
      goto LABEL_38;
    case MAX_INT:
      if ( weaponChargeAmount == 4095 )
        ps->weapState[v12].weaponFiredAtMaxCharge = 1;
      v26 = weaponChargeAmount == 4095;
      if ( weaponChargeAmount != 4095 )
        goto LABEL_40;
      goto LABEL_39;
    case SIZE_T:
LABEL_38:
      ps->weapState[v12].weaponFiredAtMaxCharge = v14;
      v26 = 1;
LABEL_39:
      PM_Weapon_Charge_SendFiredEvent(pm, (PlayerHandIndex)v5);
LABEL_40:
      PM_Weapon_Charge_ClearState(pm, (PlayerHandIndex)v5);
      v27 = BG_UsingAlternate(ps);
      PM_Weapon_ApplyEmptyCooldown(pm, (PlayerHandIndex)v5, CurrentWeaponForPlayer, v27);
      return v26;
  }
  v15 = BG_UsingAlternate(ps);
  *(double *)&_XMM0 = BG_WeaponCharge_GetCostPerShot(CurrentWeaponForPlayer, v15);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( v17 | v18 )
  {
    PM_Weapon_Charge_SendFiredEvent(pm, (PlayerHandIndex)v5);
    result = 1;
    ps->weapState[v12].weaponFiredAtMaxCharge = v14;
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@457ff000
      vcvttss2si r15d, xmm0
    }
    if ( _ER15 > 4095 )
      _ER15 = 4095;
    v21 = ps->weapState[v12].weaponChargeAmount;
    v22 = v21;
    if ( _ER15 < 0 )
      _ER15 = 0;
    if ( v21 >= _ER15 )
    {
      PM_Weapon_Charge_SendFiredEvent(pm, (PlayerHandIndex)v5);
      v22 = ps->weapState[v12].weaponChargeAmount;
    }
    v23 = v22 - _ER15;
    if ( v23 > 4095 )
      v23 = 4095;
    if ( v23 < 0 )
      v23 = 0;
    PM_Weapon_Charge_SetChargeAmount(pm, (PlayerHandIndex)v5, v23);
    if ( !ps->weapState[v12].weaponChargeAmount )
    {
      v24 = BG_UsingAlternate(ps);
      PM_Weapon_ApplyEmptyCooldown(pm, (PlayerHandIndex)v5, CurrentWeaponForPlayer, v24);
    }
    if ( v21 >= _ER15 )
      ps->weapState[v12].weaponFiredAtMaxCharge = v14;
    return v21 >= _ER15;
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
  __int64 v8; 
  playerState_s *ps; 
  bool v11; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v13; 
  WeaponChargeType Type; 
  bool v15; 
  bool v16; 
  char v18; 
  char v19; 
  int v20; 
  bool v22; 
  int v23; 
  bool v25; 
  bool v26; 
  bool v27; 
  bool v28; 
  bool v30; 

  v8 = hand;
  if ( !holdrand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3164, ASSERT_TYPE_ASSERT, "(holdrand)", (const char *)&queryFormat, "holdrand") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3166, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3166, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v11 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v13 = CurrentWeaponForPlayer;
  if ( !CurrentWeaponForPlayer->weaponIdx )
    return 1;
  Type = BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v11);
  if ( Type == NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3178, ASSERT_TYPE_ASSERT, "(chargeType != WeaponChargeType::NONE)", (const char *)&queryFormat, "chargeType != WeaponChargeType::NONE") )
    __debugbreak();
  v15 = PM_Weapon_ShouldBeChargingOrFiringShared(pm, delayedAction, (PlayerHandIndex)v8, 0, 0, 1, 0) != 0;
  v16 = 0;
  v30 = Type == HALF;
  v26 = Type == LONG_LONG;
  v27 = Type == MAX_INT;
  v28 = Type == SIZE_T;
  v25 = Type == PTRDIFF;
  if ( Type == HALF || Type == PTRDIFF )
  {
    v20 = delayedAction;
    v16 = v15;
  }
  else if ( Type == LONG_LONG || Type == MAX_INT || Type == SIZE_T )
  {
    v20 = delayedAction;
    if ( PM_Weapon_ShouldBeChargingOrFiringShared(pm, delayedAction, (PlayerHandIndex)v8, 0, 0, 1, 1) )
      v16 = 1;
  }
  else
  {
    __asm { vmovaps [rsp+98h+var_48], xmm6 }
    *(double *)&_XMM0 = BG_WeaponCharge_GetGain(v13, v11);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm0, xmm6
    }
    if ( v18 | v19 )
      goto LABEL_27;
    *(double *)&_XMM0 = BG_WeaponCharge_GetLossWhenIdle(v13, v11);
    if ( ps->weapState[v8].weaponChargeAmount != 4095 )
      goto LABEL_22;
    __asm { vucomiss xmm0, xmm6 }
    if ( ps->weapState[v8].weaponChargeAmount == 4095 )
    {
LABEL_27:
      v20 = delayedAction;
    }
    else
    {
LABEL_22:
      v20 = delayedAction;
      if ( !v15 )
        v16 = 1;
    }
    __asm { vmovaps xmm6, [rsp+98h+var_48] }
  }
  if ( v16 )
  {
    v22 = BG_UseADSFireAnim(pm->weaponMap, ps);
    v23 = 62;
    if ( v22 )
      v23 = 65;
    if ( (ps->weapState[v8].weapAnim & 0xFFFFFF7F) != v23 )
      PM_Weapon_Charge_ProcessChargeInState(pm, (PlayerHandIndex)v8, v20);
    PM_Weapon_PrepareThrowAxeAnimScriptEvent(pm, ps, v13, v11, holdrand);
  }
  else
  {
    PM_Weapon_Charge_TransitionToOut(pm, pml, pm->weaponMap, (PlayerHandIndex)v8);
  }
  if ( v30 || v25 )
  {
    if ( ps->weapState[v8].weaponChargeAmount != 4095 )
      return 1;
  }
  else if ( (v26 || v27 || v28) && !v15 )
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
  bool v9; 
  const Weapon *CurrentWeaponForPlayer; 
  __int64 Type; 
  int WeaponHand; 
  PlayerHandIndex v13; 
  __int64 v14; 
  int *p_weaponChargeCooldownTime; 
  __int64 v16; 
  char v19; 
  char v20; 
  int v25; 
  int v30; 
  int v31; 
  int v32; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon_Charge_UpdateFrameDelta");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2509, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm", -2i64) )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2509, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 2511, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  v9 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  Type = BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v9);
  WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
  v13 = WEAPON_HAND_DEFAULT;
  if ( WeaponHand >= 0 )
  {
    v14 = Type;
    p_weaponChargeCooldownTime = &ps->weapState[0].weaponChargeCooldownTime;
    v16 = WeaponHand + 1i64;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovss  xmm7, cs:__real@457ff000
    }
    do
    {
      if ( !BG_PlayerWeaponNeedsRechamber(ps, CurrentWeaponForPlayer, v13) )
      {
        if ( v14 )
        {
          if ( (unsigned int)(*(p_weaponChargeCooldownTime - 8) - 51) <= 1 )
          {
            *(double *)&_XMM0 = BG_WeaponCharge_GetGain(CurrentWeaponForPlayer, v9);
            __asm { vcomiss xmm0, xmm6 }
            if ( !(v19 | v20) )
            {
              _RAX = pml;
              __asm
              {
                vmovss  xmm1, dword ptr [rax+24h]
                vdivss  xmm0, xmm1, xmm0
                vmulss  xmm2, xmm0, xmm7
                vcvttss2si ecx, xmm2
              }
              if ( _ECX > 4095 )
                _ECX = 4095;
              if ( _ECX < 0 )
                _ECX = 0;
              v30 = _ECX + *(p_weaponChargeCooldownTime - 1);
              if ( v30 > 4095 )
                v30 = 4095;
              if ( v30 < 0 )
                v30 = 0;
              PM_Weapon_Charge_SetChargeAmount(pm, v13, v30);
            }
            PM_SetProneMovementOverride(ps);
          }
          else if ( *(p_weaponChargeCooldownTime - 1) > 0 )
          {
            *(double *)&_XMM0 = BG_WeaponCharge_GetLossWhenIdle(CurrentWeaponForPlayer, v9);
            __asm { vcomiss xmm0, xmm6 }
            if ( !(v19 | v20) )
            {
              _RAX = pml;
              __asm
              {
                vmovss  xmm1, dword ptr [rax+24h]
                vdivss  xmm0, xmm1, xmm0
                vmulss  xmm2, xmm0, xmm7
                vcvttss2si eax, xmm2
              }
              if ( _EAX > 4095 )
                _EAX = 4095;
              if ( _EAX < 0 )
                _EAX = 0;
              v25 = *(p_weaponChargeCooldownTime - 1) - _EAX;
              if ( v25 > 4095 )
                v25 = 4095;
              if ( v25 < 0 )
                v25 = 0;
              PM_Weapon_Charge_SetChargeAmount(pm, v13, v25);
            }
          }
        }
        if ( *p_weaponChargeCooldownTime > 0 )
        {
          v31 = *p_weaponChargeCooldownTime - WeaponTimeModifiers(ps, pm->m_bgHandler, pml->msec, v13, CurrentWeaponForPlayer);
          v32 = 0;
          if ( v31 > 0 )
            v32 = v31;
          *p_weaponChargeCooldownTime = v32;
        }
        if ( (v14 == 1 || v14 == 7) && *(p_weaponChargeCooldownTime - 8) == 16 )
        {
          *(double *)&_XMM0 = BG_WeaponCharge_GetCostPerShot(CurrentWeaponForPlayer, v9);
          __asm { vucomiss xmm0, xmm6 }
          if ( v20 )
            PM_Weapon_Charge_SetChargeAmount(pm, v13, 4095);
        }
      }
      ++v13;
      p_weaponChargeCooldownTime += 20;
      --v16;
    }
    while ( v16 );
  }
  Sys_ProfEndNamedEvent();
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
  }
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
  const Weapon *ViewmodelWeapon; 
  const Weapon *RequestedWeapon; 
  int v9; 
  unsigned __int64 weaponState; 
  int v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  playerState_s *ps; 
  BgWeaponMap *weaponMap; 
  const Weapon *v17; 
  const dvar_t *v18; 
  int integer; 
  playerState_s *v20; 
  int lastCombatTime; 
  int v22; 
  bool v23; 
  int v24; 
  BOOL v26; 
  bool v28; 
  int v32; 
  WeaponAnimNumber v33; 
  BgWeaponMap *v34; 
  const Weapon *v35; 
  const Weapon *v37; 
  int swimForwardState; 
  int v42; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4222, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4223, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4230, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4230, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, _RBX);
  if ( !BG_UseLeftTriggerAltFireMode(ViewmodelWeapon) && BG_IsSwimWeapon(ViewmodelWeapon) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4242, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
      __debugbreak();
    RequestedWeapon = PM_GetRequestedWeapon(pm);
    if ( !memcmp_0(RequestedWeapon, ViewmodelWeapon, 0x3Cui64) )
    {
      swimForwardState = _RBX->weapCommon.swimForwardState;
      PM_Weapon_UpdateSwimForwardState(pm);
      v9 = BG_UsingAlternate(_RBX);
      if ( pm->oldcmd.isAlternate != pm->cmd.isAlternate )
        PM_Weapon_RequestAltState(pm, v9 ^ 1);
      weaponState = _RBX->weapState[0].weaponState;
      v11 = PM_Weapon_StateJustFinished(_RBX, WEAPON_MELEE_END, WEAPON_HAND_DEFAULT);
      v42 = PM_Weapon_StateJustFinished(_RBX, WEAPON_SPRINT_DROP, WEAPON_HAND_DEFAULT);
      v12 = 0;
      if ( (unsigned int)(weaponState - 16) <= 1 || (unsigned int)(weaponState - 22) <= 2 )
      {
        v13 = 1;
      }
      else
      {
        v13 = 0;
        if ( !_RBX->damageCount )
          goto LABEL_27;
      }
      PM_Weapon_RequestAltState(pm, 0);
LABEL_27:
      if ( !PM_Weapon_InValidChangeWeaponState(pm, 0) && !v11 && !v13 )
        return;
      if ( (unsigned int)weaponState <= 0x32 )
      {
        v14 = 0x4000000001FBEi64;
        if ( _bittest64(&v14, weaponState) )
          return;
      }
      if ( (unsigned int)(weaponState - 34) <= 2 && !v42 || (unsigned int)(weaponState - 18) <= 3 || (_DWORD)weaponState == 78 )
        return;
      ps = pm->ps;
      weaponMap = pm->weaponMap;
      __asm { vmovaps [rsp+88h+var_48], xmm6 }
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3991, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v17 = BG_GetViewmodelWeapon(weaponMap, ps);
      if ( !BG_IsSwimWeapon(v17) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3993, ASSERT_TYPE_ASSERT, "(BG_IsSwimWeapon( BG_GetViewmodelWeapon( weaponMap, ps ) ))", (const char *)&queryFormat, "BG_IsSwimWeapon( BG_GetViewmodelWeapon( weaponMap, ps ) )") )
        __debugbreak();
      v18 = DCONST_DVARINT_player_swimCombatTimer;
      if ( !DCONST_DVARINT_player_swimCombatTimer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimCombatTimer") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      integer = v18->current.integer;
      v20 = pm->ps;
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3973, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      lastCombatTime = v20->weapCommon.lastCombatTime;
      if ( lastCombatTime && (v22 = pm->cmd.serverTime - lastCombatTime, v23 = v22 == integer, v22 < integer) )
      {
        v24 = 0;
      }
      else
      {
        if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3984, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v23 = ps->weapCommon.swimForwardState == SWIMFORWARD_FORWARD;
        v24 = ps->weapCommon.swimForwardState < SWIMFORWARD_FORWARD;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+730h]
        vucomiss xmm0, cs:__real@3f800000
      }
      v26 = v23;
      if ( !swimForwardState && _RBX->weapCommon.swimForwardState == SWIMFORWARD_FORWARD )
        v12 = 1;
      __asm { vxorps  xmm6, xmm6, xmm6 }
      if ( v9 != v24 )
      {
        if ( !v24 && !v11 && !v42 && !v12 )
        {
          v28 = !v23;
          if ( !v26 )
          {
            __asm { vucomiss xmm6, dword ptr [rbx+10D0h] }
            if ( v28 )
            {
              __asm
              {
                vaddss  xmm0, xmm0, cs:__real@38d1b717; val
                vmovss  xmm2, cs:__real@3f800000; max
                vxorps  xmm1, xmm1, xmm1; min
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm { vmovss  dword ptr [rbx+10D0h], xmm0 }
            }
          }
        }
        goto LABEL_75;
      }
      if ( !v9 )
      {
        v32 = _RBX->weapCommon.swimForwardState;
        if ( swimForwardState >= 2 )
        {
          if ( v32 >= 2 || _RBX->pm_type >= 7 )
            goto LABEL_75;
          v33 = WEAP_IDLE;
        }
        else
        {
          if ( v32 < 2 || _RBX->pm_type >= 7 )
            goto LABEL_75;
          v33 = WEAP_SWIM_LOOP;
        }
        PM_SetNextWeaponAnim(_RBX, v33, WEAPON_HAND_DEFAULT);
      }
LABEL_75:
      v34 = pm->weaponMap;
      if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4031, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      v35 = BG_GetViewmodelWeapon(v34, _RBX);
      if ( BG_IsSwimWeapon(v35) && BG_UsingAlternate(_RBX) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+10D0h]
          vcomiss xmm0, xmm6
          vcomiss xmm0, cs:__real@3f800000
        }
      }
      if ( v9 != v24 )
      {
        if ( v9 )
        {
          GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 0x18u);
          if ( v11 )
            _RBX->weapCommon.fAdditivePosFrac = 1.0;
        }
        v37 = PM_GetRequestedWeapon(pm);
        PM_BeginWeaponChange(pm, pml, v37, 1, 0);
      }
      __asm { vmovaps xmm6, [rsp+88h+var_48] }
    }
  }
}

/*
==============
PM_Weapon_CheckForBlast
==============
*/

void __fastcall PM_Weapon_CheckForBlast(pmove_t *pm, double _XMM1_8)
{
  playerState_s *ps; 
  unsigned __int64 weaponState; 
  __int64 v10; 
  bool isAlternate; 
  bool isDualWielding; 
  PlayerHandIndex v20; 
  int WeaponHand; 
  bool v22; 
  WeaponAnimNumber v27; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16753, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16753, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x10u) )
  {
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x10u);
    weaponState = ps->weapState[0].weaponState;
    if ( (unsigned int)weaponState > 0x32 || (v10 = 0x42001FDFC1FBEi64, !_bittest64(&v10, weaponState)) )
    {
      _RSI = pm->ps;
      __asm { vmovaps [rsp+0A8h+var_28], xmm6 }
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 16718, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      __asm { vmovss  xmm0, dword ptr [rsi+1DCh]; angle }
      AngleNormalize360(*(const float *)&_XMM0);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm2, xmm1, cs:__real@3fb40000
        vsubss  xmm0, xmm2, xmm0; angle
      }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm { vmovaps xmm6, xmm0 }
      isAlternate = BG_UsingAlternate(_RSI);
      isDualWielding = BG_PlayerDualWielding(_RSI) == 1;
      v20 = WEAPON_HAND_DEFAULT;
      WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, _RSI);
      v22 = 0;
      if ( WeaponHand >= 0 )
      {
        __asm
        {
          vmovaps [rsp+0A8h+var_38], xmm7
          vmovss  xmm7, cs:__real@42340000
          vmovaps [rsp+0A8h+var_48], xmm8
          vmovss  xmm8, cs:__real@43070000
          vmovaps [rsp+0A8h+var_58], xmm9
          vmovss  xmm9, cs:__real@43610000
          vmovaps [rsp+0A8h+var_68], xmm10
          vmovss  xmm10, cs:__real@439d8000
        }
        do
        {
          __asm { vcomiss xmm6, xmm7 }
          if ( v22 )
          {
            v27 = WEAP_BLAST_IMPACT_BACK;
          }
          else
          {
            __asm { vcomiss xmm6, xmm8 }
            if ( v22 )
            {
              v27 = WEAP_BLAST_IMPACT_RIGHT;
            }
            else
            {
              __asm { vcomiss xmm6, xmm9 }
              if ( v22 )
              {
                v27 = WEAP_BLAST_IMPACT_FRONT;
              }
              else
              {
                __asm { vcomiss xmm6, xmm10 }
                v27 = WEAP_BLAST_IMPACT_BACK;
              }
            }
          }
          BlastImpactAnimState(pm->weaponMap, _RSI, v27, v20++, pm->m_bgHandler, isAlternate, isDualWielding);
          v22 = v20 < (unsigned int)WeaponHand;
        }
        while ( v20 <= WeaponHand );
        __asm
        {
          vmovaps xmm10, [rsp+0A8h+var_68]
          vmovaps xmm9, [rsp+0A8h+var_58]
          vmovaps xmm8, [rsp+0A8h+var_48]
          vmovaps xmm7, [rsp+0A8h+var_38]
        }
      }
      __asm { vmovaps xmm6, [rsp+0A8h+var_28] }
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
  pml_t *v3; 
  playerState_s *ps; 
  playerState_s *v6; 
  const Weapon *RequestedWeapon; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v9; 
  char v10; 
  bool v11; 
  bool v12; 
  const dvar_t *v13; 
  bool v14; 
  const char *v15; 
  const Weapon *v16; 
  const Weapon *v17; 
  int v18; 
  bool v19; 
  const dvar_t *v20; 
  bool v21; 
  const char *v22; 
  bool v23; 
  int WeaponHand; 
  PlayerHandIndex v25; 
  int *p_weaponTime; 
  __int64 v27; 
  int weaponShotCount; 
  int v30; 
  const dvar_t *v31; 
  playerState_s *v34; 
  int EquippedWeaponIndex; 
  __int64 v36; 
  const dvar_t *v37; 
  bool v38; 
  const char *v39; 
  unsigned __int64 weaponState; 
  __int64 v41; 
  bool *outAltToggle; 
  int outAltTogglea; 
  bool *unsetOffhandUnderbarrelMode; 
  Weapon *outWeapon[4]; 
  bool v48; 
  pml_t *v49; 
  BOOL quickWeaponChange; 
  BOOL fireDelay; 

  v49 = pml;
  outWeapon[1] = (Weapon *)-2i64;
  __asm { vmovaps [rsp+0B8h+var_58], xmm6 }
  v3 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8956, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8957, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon_CheckForChangeWeapon");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8960, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8960, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = pm->ps;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8917, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  RequestedWeapon = PM_GetRequestedWeapon(pm);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, v6);
  if ( BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v6->weapCommon.weapFlags, ACTIVE, 0x22u) || pm->cmd.isAlternate == GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v6->weapCommon.weapFlags, ACTIVE, 0x11u) || memcmp_0(RequestedWeapon, CurrentWeaponForPlayer, 0x3Cui64) )
    goto LABEL_26;
  v9 = 1;
  if ( BG_OffhandIsUnderbarrelWeapon(pm->weaponMap, v6, 0x3000ui64) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8937, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
    if ( !BG_HasUnderbarrelShotgun(CurrentWeaponForPlayer) )
    {
      v9 = (unsigned int)(v6->weapState[0].weaponState - 18) <= 3;
      goto LABEL_27;
    }
LABEL_26:
    v9 = 0;
  }
LABEL_27:
  outWeapon[0] = NULL;
  LOBYTE(quickWeaponChange) = 0;
  LOBYTE(fireDelay) = 0;
  v48 = 0;
  v10 = PM_Weapon_GetWeaponChangeType(pm, v3, v9, (const Weapon **)outWeapon, (bool *)&quickWeaponChange, (bool *)&fireDelay, &v48);
  v11 = v48;
  v12 = v10 || v48;
  if ( ps->weapState[0].weaponState == 62 )
  {
    v13 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
    {
      v14 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      v15 = "HighPriorityDebug - PM_Weapon_CheckForChangeWeapon SERVER early-out, WEAPONSTATE_ANIMSCRIPTED\n";
      if ( !v14 )
        v15 = "HighPriorityDebug - PM_Weapon_CheckForChangeWeapon CLIENT early-out, WEAPONSTATE_ANIMSCRIPTED\n";
      Com_Printf(17, v15);
    }
    if ( v12 )
    {
      v16 = PM_GetRequestedWeapon(pm);
      v17 = v16;
      if ( !v16->weaponIdx || BG_IsWeaponValid(pm->weaponMap, ps, v16) )
        BG_SetCurrentWeaponForPlayer(pm->weaponMap, ps, v17, pm->m_bgHandler);
    }
    goto LABEL_104;
  }
  v18 = PM_Weapon_InValidChangeWeaponState(pm, v12);
  v19 = v18 != 0;
  if ( !v12 )
  {
    ps->weapState[0].weapHandFlags &= ~1u;
    ps->weapState[1].weapHandFlags &= ~1u;
  }
  if ( v18 && v12 )
  {
    if ( v11 )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9038, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
        __debugbreak();
      BG_SetPlayerUsingOffhandUnderbarrelWeapon(ps, 0);
    }
    if ( v10 != 1 )
    {
      if ( v10 != 2 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9113, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tUnexpected weapon change type in PM_Weapon_CheckForChangeWeapon.", "0") )
          __debugbreak();
        goto LABEL_104;
      }
      v20 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
      if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      if ( v20->current.enabled )
      {
        v21 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
        v22 = "HighPriorityDebug - PM_Weapon_CheckForChangeWeapon SERVER, case WeaponChangeType::CANCEL\n";
        if ( !v21 )
          v22 = "HighPriorityDebug - PM_Weapon_CheckForChangeWeapon CLIENT, case WeaponChangeType::CANCEL\n";
        Com_Printf(17, v22);
      }
      v23 = BG_UsingAlternate(ps);
      v48 = v23;
      WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
      v25 = WEAPON_HAND_DEFAULT;
      if ( WeaponHand >= 0 )
      {
        p_weaponTime = &ps->weapState[0].weaponTime;
        v27 = WeaponHand + 1i64;
        __asm { vmovss  xmm6, cs:__real@43fa0000 }
        do
        {
          PM_Weapon_Idle(pm, v25);
          if ( ps->pm_type < 7 )
            PM_SetNextWeaponAnim(ps, WEAP_FORCE_IDLE, v25);
          if ( !PM_WeaponClipEmpty(pm->weaponMap, ps, v25) )
          {
            quickWeaponChange = 0;
            fireDelay = 0;
            weaponShotCount = ps->weapState[0].weaponShotCount;
            v30 = BG_PlayerDualWielding(ps);
            outAltTogglea = weaponShotCount;
            v23 = v48;
            BG_GetFireTime(pm->weaponMap, ps, outWeapon[0], v48, v30 != 0, outAltTogglea, &quickWeaponChange, &fireDelay);
            *p_weaponTime = quickWeaponChange;
          }
          if ( v25 == WEAPON_HAND_DEFAULT && BG_IsAimDownSight(outWeapon[0], v23) )
          {
            v31 = DCONST_DVARFLT_bg_weaponSwitchCancelAdsDisableTimeIdleBlendScale;
            if ( !DCONST_DVARFLT_bg_weaponSwitchCancelAdsDisableTimeIdleBlendScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponSwitchCancelAdsDisableTimeIdleBlendScale") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v31);
            __asm
            {
              vmulss  xmm1, xmm6, dword ptr [rbx+28h]
              vcvttss2si r14d, xmm1
            }
            if ( _ER14 > 0 )
            {
              v34 = pm->ps;
              if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 973, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
                __debugbreak();
              v34->weapCommon.adsEnableTime = _ER14 + pm->cmd.serverTime;
            }
          }
          ++v25;
          p_weaponTime += 20;
          --v27;
          v23 = v48;
        }
        while ( v27 );
        v3 = v49;
      }
      EquippedWeaponIndex = BG_GetEquippedWeaponIndex(pm->weaponMap, ps, outWeapon[0]);
      v36 = EquippedWeaponIndex;
      if ( (unsigned int)EquippedWeaponIndex >= 0xF )
      {
        LODWORD(unsetOffhandUnderbarrelMode) = 15;
        LODWORD(outAltToggle) = EquippedWeaponIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9096, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", outAltToggle, unsetOffhandUnderbarrelMode) )
          __debugbreak();
      }
      BG_AddPredictableEventToPlayerstate(EV_WEAPON_SWITCH_CANCELED, ps->weaponsEquipped[v36].m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, ps);
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      {
        BG_ClearDropWeaponAnim(pm->m_bgHandler, ps);
        BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_DROPWEAPONCANCEL, 0, 1, &v3->holdrand);
      }
      PM_HighPriorityWeapon_OnCancelWeaponChange(pm, outWeapon[0]);
LABEL_103:
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x28u);
      goto LABEL_104;
    }
    if ( !outWeapon[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9046, ASSERT_TYPE_ASSERT, "(weaponToUseForChange)", (const char *)&queryFormat, "weaponToUseForChange") )
      __debugbreak();
    PM_BeginWeaponChange(pm, v3, outWeapon[0], fireDelay, quickWeaponChange);
  }
  else
  {
    v37 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    if ( v37->current.enabled && (!v19 || v12) )
    {
      v38 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
      v39 = "HighPriorityDebug - PM_Weapon_CheckForChangeWeapon SERVER early-out, inValidChangeWeaponState = %i, mustExecuteActions = %i\n";
      if ( !v38 )
        v39 = "HighPriorityDebug - PM_Weapon_CheckForChangeWeapon CLIENT early-out, inValidChangeWeaponState = %i, mustExecuteActions = %i\n";
      Com_Printf(17, v39, v19, v12);
    }
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x28u) )
    {
      weaponState = ps->weapState[0].weaponState;
      if ( (unsigned int)weaponState > 0x32 )
        goto LABEL_103;
      v41 = 0x4000000001FBEi64;
      if ( !_bittest64(&v41, weaponState) )
        goto LABEL_103;
    }
  }
LABEL_104:
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+0B8h+var_58] }
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
  playerState_s *ps; 
  bool v8; 
  int *p_weaponState; 
  PlayerHandIndex v14; 
  BgWeaponMap *weaponMap; 
  bool v16; 
  bool v17; 
  char v18; 
  int v19; 
  bool IsMeleeInterruptible; 
  const BgHandler *m_bgHandler; 
  BgWeaponMap *v22; 
  bool v23; 
  int v24; 
  unsigned __int64 buttons; 
  unsigned __int64 v26; 
  bool v27; 
  bool v28; 
  bool v29; 
  bool v30; 
  bool v31; 
  bool v32; 
  int v33; 
  QueuedActionState QAS; 
  char v35; 
  bool v36; 
  char v37; 
  const Weapon *CurrentWeaponForPlayer; 
  int WeaponHand; 
  __int64 v40; 
  const Weapon *v41; 
  bool v42; 
  __int64 i; 
  char v44; 
  int v45; 
  pml_t *v46; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  playerState_s *v48; 
  bool v53; 
  int AmmoInClipForWeapon; 
  bool v55; 
  bool v56; 
  bool outIsPressed; 
  bool v58; 
  bool v59; 
  bool outWasPressed; 
  bool v61; 
  bool v62; 
  bool v63; 
  int meleeChargeEnt; 
  int fireTime; 
  int interruptTime; 
  int fireDelay[2]; 
  pml_t *pmla; 
  int outToFireInterruptTime; 
  __int64 v70; 
  Weapon r_weapon; 
  Weapon newweapon; 

  v70 = -2i64;
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
  v56 = v8;
  v63 = BG_PlayerDualWielding(ps) == 1;
  _RAX = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+140h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbp+40h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rbp+40h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  p_weaponState = &ps->weapState[0].weaponState;
  v14 = WEAPON_HAND_DEFAULT;
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
    v16 = BG_UsingAlternate(ps);
    v17 = BG_ADSZoomCount(weaponMap, ps, &r_weapon, v16) > 1;
    if ( BG_CanHybridToggle(ps, &r_weapon, v16) || BG_CanThermalToggle(&r_weapon, v16) || BG_HasHoldBreathAbility(weaponMap, ps) || v17 )
      goto LABEL_128;
    v8 = v56;
  }
  if ( BG_Weapon_CheckFriendlyFire(ps) || ps->vehicleState.entity != 2047 || !BG_GetMeleeDamage(&r_weapon, v8) || BG_Offhand_HasActiveOffhand(ps) && !BG_Offhand_ActiveOffhandIsInterruptable(pm) || !BG_NightVisionInterruptable(pm->weaponMap, ps, pm->cmd.serverTime) )
    goto LABEL_128;
  v18 = 1;
  v58 = 1;
  v59 = 0;
  v19 = *p_weaponState;
  meleeChargeEnt = v19;
  if ( (unsigned int)(v19 - 22) <= 2 )
  {
    m_bgHandler = pm->m_bgHandler;
    v22 = pm->weaponMap;
    v23 = BG_UsingAlternate(ps);
    v24 = BG_PlayerDualWielding(ps);
    BG_GetMeleeInterruptTime(v22, ps, v23, v24 == 1, meleeChargeEnt == 23, &interruptTime, fireDelay, &outToFireInterruptTime);
    IsMeleeInterruptible = PM_Weapon_IsMeleeInterruptible(v22, ps, m_bgHandler, interruptTime);
    v59 = IsMeleeInterruptible;
  }
  else
  {
    if ( (unsigned int)(v19 - 26) > 6 && (unsigned int)(v19 - 37) > 1 )
      goto LABEL_47;
    IsMeleeInterruptible = PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, pm->m_bgHandler);
  }
  v58 = IsMeleeInterruptible;
  v18 = IsMeleeInterruptible;
LABEL_47:
  buttons = pm->cmd.buttons;
  v26 = pm->oldcmd.buttons;
  v27 = (v26 & 4) != 0;
  if ( outIsPressed )
  {
    v28 = (buttons & 0x20000) != 0;
    v29 = (v26 & 0x20000) != 0;
  }
  else
  {
    v28 = 0;
    v29 = 0;
  }
  v30 = (buttons & 4) != 0 && !v27;
  v31 = v30;
  v32 = v28 && !v29;
  if ( outIsPressed && (buttons & 0x8000000000000i64) == 0 )
  {
    v31 = v32;
    v32 = v30;
  }
  v33 = pm->cmd.meleeChargeEnt;
  meleeChargeEnt = v33;
  if ( !v18 || fireTime )
  {
    PM_Weapon_QueueMeleeAttack(pm, v33, v31, v32);
    goto LABEL_128;
  }
  QAS = BG_GetQAS(ps, WEAPON_HAND_DEFAULT);
  if ( !outIsPressed && QAS == QAS_STATE_MELEE_ALT )
  {
    BG_SetQAS(ps, WEAPON_HAND_DEFAULT, QAS_STATE_NONE);
    QAS = QAS_STATE_NONE;
  }
  if ( v31 || QAS == QAS_STATE_MELEE )
  {
    v55 = 1;
    v35 = 1;
  }
  else
  {
    v55 = 0;
    v35 = 0;
  }
  if ( v32 || QAS == QAS_STATE_MELEE_ALT )
  {
    v36 = 1;
    v37 = 1;
  }
  else
  {
    v36 = 0;
    v37 = 0;
  }
  if ( v35 || v37 )
  {
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    PM_Weapon_GetFireButtonPressedState(pm, CurrentWeaponForPlayer, WEAPON_HAND_DEFAULT, &outWasPressed, &outIsPressed);
    WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
    v40 = WeaponHand;
    if ( WeaponHand < 1 )
    {
      v42 = outIsPressed;
    }
    else
    {
      v41 = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
      PM_Weapon_GetFireButtonPressedState(pm, v41, WEAPON_HAND_LEFT, &v61, &v62);
      v42 = v62 || outIsPressed;
    }
    if ( (pm->cmd.buttons & 0x8000000000000i64) != 0 && !BG_IsMeleeOnlyWeapon(&r_weapon, v56) && v42 )
    {
      BG_GetFireTime(pm->weaponMap, ps, &r_weapon, v56, v63, 0, &fireTime, fireDelay);
      if ( fireTime )
      {
LABEL_106:
        PM_Weapon_QueueMeleeAttack(pm, meleeChargeEnt, v55, v36);
        goto LABEL_128;
      }
    }
    *(_QWORD *)fireDelay = v40;
    if ( (int)v40 >= 0 )
    {
      for ( i = 0i64; i <= *(__int64 *)fireDelay; ++i )
      {
        if ( *(p_weaponState - 3) && (unsigned int)(*p_weaponState - 18) > 6 )
          goto LABEL_106;
        v44 = v58;
        if ( v14 )
          v44 = PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, v14, pm->m_bgHandler);
        v45 = *p_weaponState;
        if ( *p_weaponState > 0 )
        {
          if ( v45 <= 4 )
          {
            if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_bg_allowMeleeDuringWeaponRaise, "bg_allowMeleeDuringWeaponRaise") )
            {
LABEL_95:
              if ( !v44 )
                goto LABEL_106;
            }
          }
          else if ( (unsigned int)(v45 - 7) <= 4 )
          {
            goto LABEL_95;
          }
        }
        ++v14;
        p_weaponState += 20;
      }
    }
    v46 = pmla;
    if ( v59 )
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
    if ( !v36 || v55 )
    {
      p_weapFlags = &ps->weapCommon.weapFlags;
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x26u);
    }
    else
    {
      p_weapFlags = &ps->weapCommon.weapFlags;
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x26u);
    }
    v48 = pm->ps;
    if ( !v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11337, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    _RAX = BG_GetFirstEquippedWeaponBySlot(pm->weaponMap, v48, WEAPON_SLOT_MELEE);
    __asm
    {
      vmovups ymm2, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+40h+newweapon.weaponIdx], ymm2
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rbp+40h+newweapon.attachmentVariationIndices+5], xmm0
      vmovsd  xmm1, qword ptr [rax+30h]
      vmovsd  qword ptr [rbp+40h+newweapon.attachmentVariationIndices+15h], xmm1
    }
    *(_DWORD *)&newweapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    __asm { vmovd   eax, xmm2 }
    if ( (_WORD)_RAX )
      v53 = !BG_IsMeleeOnlyWeapon(&r_weapon, v56) && !BG_IsBallWeapon(&r_weapon);
    else
      v53 = 0;
    if ( BG_IsMeleeComboWeapon(&r_weapon) )
    {
      if ( !v53 )
      {
        if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
          PM_IncrementMeleeComboSeqIdx(pm, &r_weapon);
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, GameModeFlagValues::ms_mpValue, 0x38u);
        goto LABEL_124;
      }
    }
    else if ( !v53 )
    {
LABEL_124:
      if ( !BG_IsThrowingAxe(&r_weapon) || v56 || (AmmoInClipForWeapon = BG_GetAmmoInClipForWeapon(ps, &r_weapon, 0, WEAPON_HAND_DEFAULT), BG_RequiredAmmoPerShot(&r_weapon, 0) <= AmmoInClipForWeapon) )
        PM_Weapon_BeginMelee(pm, v46);
      goto LABEL_128;
    }
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x22u);
    PM_BeginWeaponChange(pm, v46, &newweapon, 0, 1);
    PM_MeleeChargeStart(pm, v46, meleeChargeEnt);
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
  const Weapon *v17; 
  const char *WeaponName; 
  const Weapon *v19; 
  OffhandSlot outOffHandSlot[8]; 
  __int64 v21; 
  Weapon r_weapon; 
  char output[1032]; 

  v21 = -2i64;
  _RBX = pm;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon_CheckForOffHand");
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14321, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = _RBX->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14321, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  outOffHandSlot[0] = OFFHAND_SLOT_NONE;
  PM_Weapon_TriggeredOffHand(_RBX, outOffHandSlot);
  if ( PM_Weapon_CanUseOffhand(_RBX, _RBX->ps, outOffHandSlot[0]) )
  {
    if ( (_RBX->cmd.buttons & 0x1000) == 0 )
      goto LABEL_25;
    v5 = _RBX->ps;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12728, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v5->weapCommon.weapFlags, ACTIVE, 0x33u) || v5->throwbackGrenadeTimeLeft <= 0 || v5->cursorHintClass || v5->cursorHintEntIndex == 2047 || BG_IsUsingOffhandGestureWeapon(v5) && Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_scripted_offhand_throwback_fix_enabled, "killswitch_scripted_offhand_throwback_fix_enabled") )
      goto LABEL_25;
    weaponMap = _RBX->weaponMap;
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 767, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(weaponMap, v5->throwbackWeaponHandle);
    if ( !Weapon->weaponIdx )
    {
LABEL_25:
      if ( outOffHandSlot[0] )
      {
        v8 = _RBX->ps;
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14210, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        BG_Weapon_CancelOffhand(v8, _RBX->m_bgHandler, _RBX->weaponMap, _RBX->cmd.serverTime, 1);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbx+70h]
          vmovups ymmword ptr [rsp+4C8h+r_weapon.weaponIdx], ymm0
          vmovups xmm1, xmmword ptr [rbx+90h]
          vmovups xmmword ptr [rsp+4C8h+r_weapon.attachmentVariationIndices+5], xmm1
          vmovsd  xmm0, qword ptr [rbx+0A0h]
          vmovsd  qword ptr [rsp+4C8h+r_weapon.attachmentVariationIndices+15h], xmm0
        }
        *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RBX->cmd.offHand.weaponCamo;
        if ( outOffHandSlot[0] == OFFHAND_SLOT_SCRIPTED )
        {
          _RAX = PM_Weapon_GetOffHandWeaponForSlot(_RBX->weaponMap, ps, OFFHAND_SLOT_SCRIPTED);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rsp+4C8h+r_weapon.weaponIdx], ymm0
            vmovups xmm1, xmmword ptr [rax+20h]
            vmovups xmmword ptr [rsp+4C8h+r_weapon.attachmentVariationIndices+5], xmm1
            vmovsd  xmm0, qword ptr [rax+30h]
            vmovsd  qword ptr [rsp+4C8h+r_weapon.attachmentVariationIndices+15h], xmm0
          }
          *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
        }
        if ( BG_PlayerHasWeapon(_RBX->weaponMap, ps, &r_weapon) )
        {
          BG_SetOffHandWeaponForPlayer(_RBX->weaponMap, ps, &r_weapon);
          OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(_RBX->weaponMap, ps);
          v17 = OffHandWeaponForPlayer;
          if ( OffHandWeaponForPlayer->weaponIdx )
          {
            if ( BG_WeaponDef(OffHandWeaponForPlayer, 0)->offhandClass == OFFHAND_CLASS_NONE )
            {
              WeaponName = BG_GetWeaponName(v17, output, 0x400u);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14358, ASSERT_TYPE_ASSERT, "(offHandWeapon.weaponIdx == 0 || BG_WeaponDef( offHandWeapon, false )->offhandClass != OFFHAND_CLASS_NONE)", "%s\n\toffHandWeapon = %s\n", "offHandWeapon.weaponIdx == WP_NONE || BG_WeaponDef( offHandWeapon, false )->offhandClass != OFFHAND_CLASS_NONE", WeaponName) )
                __debugbreak();
            }
          }
        }
        if ( BG_OffhandIsUnderbarrelWeapon(_RBX->weaponMap, ps, _RBX->cmd.buttons) )
          PM_Weapon_StartUseOffHand_Underbarrel(_RBX, pml);
        else
          PM_Weapon_StartUseOffHand(_RBX, pml, outOffHandSlot[0]);
        if ( ((unsigned int)(ps->weapState[0].weaponState - 26) <= 6 || BG_Offhand_IsPlayingGesture(_RBX->weaponMap, ps, OHGT_WEAPON) || BG_Offhand_IsPlayingGrenadeGesture(_RBX->weaponMap, ps)) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
        {
          v19 = BG_GetOffHandWeaponForPlayer(_RBX->weaponMap, ps);
          if ( !v19->weaponIdx || !BG_GetOffhandAllowsSprint(v19, 0) )
            PM_EndSprint(ps, _RBX->cmd.serverTime, _RBX->cmd.buttons);
        }
      }
    }
    else
    {
      if ( BG_PWF_UseAlternateAsOffhand(v5) )
        PM_Weapon_SetOffhandUnderbarrelMode(_RBX->weaponMap, v5, 0);
      BG_AddPredictableEventToPlayerstate(EV_SWITCH_OFFHAND, v5->throwbackWeaponHandle.m_mapEntryId, _RBX->cmd.serverTime, _RBX->weaponMap, v5);
      BG_SetOffHandWeaponForPlayer(_RBX->weaponMap, v5, Weapon);
      PM_Weapon_OffHandInit(_RBX, pml, 1);
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
  __int64 v10; 
  playerState_s *ps; 
  bool IsWeaponRecoilDelayed; 
  int v15; 
  int v16; 
  const HyperBurstInfo *HyperBurstInfo; 
  playerState_s *v18; 
  int serverTime; 
  int v22; 
  unsigned int adsRecoilShotCountOffset; 
  ClipAmmo *ClipAmmoPtr; 
  int v28; 
  __int64 shotCount; 
  int *fireTime; 
  int *fireDelay; 
  int v32; 
  int v33; 
  unsigned int *v34; 
  AmmoStore result; 
  AmmoStore r_clipIndex; 

  v10 = hand;
  v34 = holdrand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9734, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9734, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->weapState[v10].weaponDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9735, ASSERT_TYPE_ASSERT, "( ps->weapState[hand].weaponDelay ) == ( 0 )", "%s == %s\n\t%i, %i", "ps->weapState[hand].weaponDelay", "0", ps->weapState[v10].weaponDelay, 0i64) )
    __debugbreak();
  if ( !BG_IsOffhandWeaponType(currentWeapon, isAlternate) )
  {
    PM_WeaponOffsets_FireWeapon(pm);
    IsWeaponRecoilDelayed = BG_IsWeaponRecoilDelayed(pm, ps);
    if ( !wasFiring && !IsWeaponRecoilDelayed )
    {
      BG_GetFireTime(pm->weaponMap, ps, currentWeapon, isAlternate, isDualWielding, ps->weapState[v10].weaponShotCount, &v32, &v33);
      v15 = BG_StartingKickBullets(currentWeapon, isAlternate);
      ps->weapState[v10].weaponStartingKickTime = v33 + v32 * v15;
      v16 = BG_EndingKickBullets(currentWeapon, isAlternate);
      ps->weapState[v10].weaponEndingKickTime = v33 + v32 * v16;
      if ( ps->weapState[v10].weaponStartingKickTime < 0 )
      {
        LODWORD(fireDelay) = ps->weapState[v10].weaponStartingKickTime;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9751, ASSERT_TYPE_ASSERT, "( ps->weapState[hand].weaponStartingKickTime ) >= ( 0 )", "%s >= %s\n\t%i, %i", "ps->weapState[hand].weaponStartingKickTime", "0", fireDelay, 0i64) )
          __debugbreak();
      }
      if ( ps->weapState[v10].weaponEndingKickTime < 0 )
      {
        LODWORD(fireDelay) = ps->weapState[v10].weaponEndingKickTime;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9752, ASSERT_TYPE_ASSERT, "( ps->weapState[hand].weaponEndingKickTime ) >= ( 0 )", "%s >= %s\n\t%i, %i", "ps->weapState[hand].weaponEndingKickTime", "0", fireDelay, 0i64) )
          __debugbreak();
      }
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      HyperBurstInfo = BG_GetHyperBurstInfo(currentWeapon, isAlternate);
      if ( !HyperBurstInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9759, ASSERT_TYPE_ASSERT, "(hyperBurstInfo)", (const char *)&queryFormat, "hyperBurstInfo") )
        __debugbreak();
      if ( !HyperBurstInfo->enabled || ps->weapState[v10].weaponShotCount != 1 )
        PM_Weapon_FireWeaponAnimScriptEvent(pm, ps, currentWeapon, isAlternate, v34);
    }
  }
  v18 = pm->ps;
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9709, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v10 >= 2 )
  {
    LODWORD(fireTime) = 2;
    LODWORD(shotCount) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9710, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", shotCount, fireTime) )
      __debugbreak();
  }
  v18->weapState[v10].weaponPrevFireTime = v18->weapState[v10].weaponFireTime;
  serverTime = pm->cmd.serverTime;
  _RSI = weapDef;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  v18->weapState[v10].weaponFireTime = serverTime;
  __asm { vucomiss xmm0, dword ptr [rsi+1114h] }
  if ( weapDef->changedFireTimeNumBullets != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9772, ASSERT_TYPE_ASSERT, "((weapDef->changedFireTime == 0) == (weapDef->changedFireTimeNumBullets == 0))", (const char *)&queryFormat, "(weapDef->changedFireTime == 0) == (weapDef->changedFireTimeNumBullets == 0)") )
    __debugbreak();
  if ( weapDef->changedFireTimeNumBullets > 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9773, ASSERT_TYPE_ASSERT, "(weapDef->changedFireTimeNumBullets <= ( ( 1 << 5 ) - 1 ))", (const char *)&queryFormat, "weapDef->changedFireTimeNumBullets <= PLAYER_WEAPONSHOTCOUNT_MAX") )
    __debugbreak();
  ++ps->weapState[v10].weaponShotCount;
  v22 = 31;
  if ( ps->weapState[v10].weaponShotCount > 0x1F )
  {
    ps->weapState[v10].weaponShotCount = 31;
    adsRecoilShotCountOffset = ps->weapCommon.adsRecoilShotCountOffset;
    if ( adsRecoilShotCountOffset )
      ps->weapCommon.adsRecoilShotCountOffset = adsRecoilShotCountOffset - 1;
  }
  if ( BG_IsBoltAction(currentWeapon, isAlternate) )
  {
    _RAX = BG_AmmoStoreForWeapon(&result, currentWeapon, isAlternate);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+138h+r_clipIndex.weapon.weaponIdx], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rsp+138h+r_clipIndex.weapon.attachmentVariationIndices+5], ymm1
    }
    ClipAmmoPtr = BG_GetClipAmmoPtr(ps, &r_clipIndex);
    if ( !ClipAmmoPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9789, ASSERT_TYPE_ASSERT, "(clipAmmo != nullptr)", (const char *)&queryFormat, "clipAmmo != nullptr") )
      __debugbreak();
    v28 = ClipAmmoPtr->chamberedCount[v10] - 1;
    if ( v28 < 0 )
      v28 = 0;
    ClipAmmoPtr->chamberedCount[v10] = v28;
    if ( ClipAmmoPtr->shotsSinceRechamber[v10] + 1 < 31 )
      v22 = ClipAmmoPtr->shotsSinceRechamber[v10] + 1;
    ClipAmmoPtr->shotsSinceRechamber[v10] = v22;
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
  pml_t *v10; 
  bool v15; 
  const dvar_t *v16; 
  int v19; 
  const dvar_t *v21; 
  const Weapon *RequestedWeapon; 
  const Weapon *v27; 
  bool v42; 
  const BgWeaponMap *weaponMap; 
  int EquippedWeaponIndex; 
  const char *WeaponName; 
  const dvar_t *v46; 
  const dvar_t *v51; 
  int MeleeComboSeqCount; 
  int v56; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 
  const BgWeaponMap *v58; 
  const PlayerEquippedWeaponState *EquippedWeaponStateConst; 
  int v60; 
  BOOL usedBefore; 
  BgWeaponMap *v62; 
  BgWeaponMap *v63; 
  bool v66; 
  bool v67; 
  char v68; 
  char inAltMode; 
  bool v70; 
  bool v71; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  int i; 
  playerState_s *ps; 
  bool v75; 
  bool IsDualWield; 
  __int64 v77; 
  bool v78; 
  WeaponDef *v79; 
  char v80; 
  bool v81; 
  bool v82; 
  bool v84; 
  char v85; 
  int v86; 
  BOOL v89; 
  const BgWeaponMap *v90; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v92; 
  bool IsFirstRaiseAllowed; 
  bool v94; 
  int v95; 
  int RaiseTime; 
  char v97; 
  bool IsThrowingAxe; 
  bool v99; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  int v111; 
  int v112; 
  bool v114; 
  bool v115; 
  int v116; 
  bool v117; 
  bool HasPerk; 
  const dvar_t *v119; 
  bool v120; 
  bool v121; 
  weapInventoryType_t inventoryType; 
  weapInventoryType_t v123; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *v124; 
  const dvar_t *v125; 
  const dvar_t *v128; 
  unsigned int *p_holdrand; 
  PlayerAnimScriptEventType v132; 
  playerState_s *v136; 
  bool IsSkydiving; 
  PlayerHandIndex v138; 
  int WeaponHand; 
  int *p_weapHandFlags; 
  unsigned int v142; 
  WeaponAnimNumber v143; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  bool v146; 
  int PlayerAnimType; 
  int WeaponClassForAnimCondition; 
  bool v149; 
  BgWeaponMap *v150; 
  int serverTime; 
  const BgHandler *m_bgHandler; 
  int v156; 
  bool v157; 
  int v159; 
  float fmt; 
  __int64 checkRaise; 
  __int64 hand; 
  PlayerHandIndex handa; 
  int previousWeaponStatea; 
  char v170; 
  char v171; 
  bool v172; 
  WeaponAnimNumber anim; 
  int v174; 
  bool v175; 
  char v177; 
  char v178; 
  bool v179; 
  bool v180; 
  bool v181; 
  bool v182; 
  bool v183; 
  bool v185; 
  BOOL sameWeaponAltSwitch; 
  int v188; 
  int v189; 
  int v191; 
  AmmoStore result; 
  Weapon r_weapon; 
  Weapon Buf1; 
  AmmoStore r_clip2; 
  char output[1024]; 
  char v198; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RSI = pm;
  v10 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6249, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = _RSI->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6249, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  __asm
  {
    vmovups ymmword ptr [rbp+4F0h+r_weapon.weaponIdx], ymm0
    vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
  }
  v178 = 0;
  v189 = -1;
  __asm
  {
    vmovups xmmword ptr [rbp+4F0h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  qword ptr [rbp+4F0h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  v191 = -1;
  v183 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x22u);
  v182 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x23u);
  v15 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 6u);
  if ( v15 )
  {
    v16 = DCONST_DVARMPBOOL_ladderEnableEnhanced;
    if ( !DCONST_DVARMPBOOL_ladderEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableEnhanced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.enabled )
    {
      v21 = DCONST_DVARMPBOOL_ladderEnableWeapon;
      if ( !DCONST_DVARMPBOOL_ladderEnableWeapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ladderEnableWeapon") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      if ( v21->current.enabled )
        _RAX = BG_GetBestLadderWeapon(_RSI->weaponMap, _RDI);
      else
        _RAX = PM_GetRequestedWeapon(_RSI);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+4F0h+r_weapon.weaponIdx], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rbp+4F0h+r_weapon.attachmentVariationIndices+5], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rbp+4F0h+r_weapon.attachmentVariationIndices+15h], xmm0
      }
      v19 = *(_DWORD *)&_RAX->weaponCamo;
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
        vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      }
      v19 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
      __asm
      {
        vmovups ymmword ptr [rbp+4F0h+r_weapon.weaponIdx], ymm0
        vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
        vmovsd  qword ptr [rbp+4F0h+r_weapon.attachmentVariationIndices+15h], xmm0
        vmovups xmmword ptr [rbp+4F0h+r_weapon.attachmentVariationIndices+5], xmm1
      }
    }
    *(_DWORD *)&r_weapon.weaponCamo = v19;
    GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::SetFlagInternal(&_RDI->pm_flags, GameModeFlagValues::ms_mpValue, 0x3Fu);
  }
  else
  {
    RequestedWeapon = PM_GetRequestedWeapon(_RSI);
    if ( !BG_PlayerHasWeapon(_RSI->weaponMap, _RDI, RequestedWeapon) )
      goto LABEL_26;
    v27 = PM_GetRequestedWeapon(_RSI);
    if ( !BG_PlayerHasWeapon(_RSI->weaponMap, _RDI, v27) )
      goto LABEL_26;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0xAu) )
      goto LABEL_26;
    if ( BG_IsVehicleActive(_RDI) )
      goto LABEL_26;
    _RAX = PM_GetRequestedWeapon(_RSI);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+4F0h+r_weapon.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rbp+4F0h+r_weapon.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rbp+4F0h+r_weapon.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    if ( r_weapon.weaponIdx >= BG_GetNumWeapons() )
    {
LABEL_26:
      __asm
      {
        vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
        vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
        vmovups ymmword ptr [rbp+4F0h+r_weapon.weaponIdx], ymm0
        vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
        vmovsd  qword ptr [rbp+4F0h+r_weapon.attachmentVariationIndices+15h], xmm0
        vmovups xmmword ptr [rbp+4F0h+r_weapon.attachmentVariationIndices+5], xmm1
      }
      *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    }
  }
  if ( !BG_PlayerHasWeapon(_RSI->weaponMap, _RDI, &r_weapon) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovups ymmword ptr [rbp+4F0h+r_weapon.weaponIdx], ymm0
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
      vmovsd  qword ptr [rbp+4F0h+r_weapon.attachmentVariationIndices+15h], xmm0
      vmovups xmmword ptr [rbp+4F0h+r_weapon.attachmentVariationIndices+5], xmm1
    }
    *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  }
  _RAX = BG_GetCurrentWeaponForPlayer(_RSI->weaponMap, _RDI);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rbp+4F0h+Buf1], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups [rbp+4F0h+var_4D0], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  [rbp+4F0h+var_4C0], xmm0
  }
  *(_DWORD *)&Buf1.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  v42 = BG_UsingAlternate(_RDI);
  weaponMap = _RSI->weaponMap;
  v185 = v42;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1063, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1064, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  EquippedWeaponIndex = BG_GetEquippedWeaponIndex(weaponMap, _RDI, &r_weapon);
  if ( EquippedWeaponIndex < 0 || (playerState_s *)((char *)_RDI + 16 * EquippedWeaponIndex) == (playerState_s *)-1540i64 )
  {
    WeaponName = BG_GetWeaponName(&r_weapon, output, 0x400u);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6305, ASSERT_TYPE_ASSERT, "(BG_GetEquippedWeaponState( pm->weaponMap, ps, newweapon ))", "%s\n\tChanging to weapon %s, but we don't have that equipped", "BG_GetEquippedWeaponState( pm->weaponMap, ps, newweapon )", WeaponName) )
      __debugbreak();
  }
  v46 = DVARBOOL_killswitch_sprint_slide_exploit_fix;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm6, xmm6, xmm6
  }
  if ( !DVARBOOL_killswitch_sprint_slide_exploit_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_sprint_slide_exploit_fix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  if ( !v46->current.enabled || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x14u) )
  {
    PM_GetSprintLeftRaw(_RSI->weaponMap, _RDI, _RSI->cmd.serverTime);
    if ( !BG_GetMaxSprintTime(_RSI->weaponMap, _RDI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6313, ASSERT_TYPE_ASSERT, "(previousMaxTime != 0)", (const char *)&queryFormat, "previousMaxTime != 0") )
      __debugbreak();
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, r14d
    }
    v10 = pml;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vdivss  xmm6, xmm1, xmm0
    }
  }
  BG_SetCurrentWeaponForPlayer(_RSI->weaponMap, _RDI, &r_weapon, _RSI->m_bgHandler);
  v51 = DVARBOOL_killswitch_sprint_slide_exploit_fix;
  if ( !DVARBOOL_killswitch_sprint_slide_exploit_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_sprint_slide_exploit_fix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v51);
  if ( !v51->current.enabled || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x14u) )
  {
    BG_GetMaxSprintTime(_RSI->weaponMap, _RDI);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm6
      vcvttss2si r9d, xmm1; remainingTime
    }
    PM_SetSprintLeft(_RSI->weaponMap, _RDI, _RSI->cmd.serverTime, _ER9);
  }
  if ( BG_IsMeleeComboWeapon(&r_weapon) )
  {
    MeleeComboSeqCount = BG_GetMeleeComboSeqCount(&r_weapon);
    v56 = BG_irand(0, MeleeComboSeqCount - 1, &v10->holdrand);
    PM_SetMeleeComboSeqIdx(_RDI, v56);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RDI->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x38u);
  }
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x18u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x28u);
  anim = WEAP_ALTSWITCHTO_AKIMBO;
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x1Bu);
  EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(_RSI->weaponMap, _RDI, &r_weapon);
  if ( !EquippedWeaponStateNonConst )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6343, ASSERT_TYPE_ASSERT, "(equippedWeapon)", (const char *)&queryFormat, "equippedWeapon") )
      __debugbreak();
    goto LABEL_308;
  }
  v58 = _RSI->weaponMap;
  __asm { vmovaps xmmword ptr [rsp+5F0h+var_68+8], xmm8 }
  if ( !v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1122, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1123, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  EquippedWeaponStateConst = BG_GetEquippedWeaponStateConst(v58, _RDI, &r_weapon);
  v60 = 0;
  if ( EquippedWeaponStateConst )
    usedBefore = EquippedWeaponStateConst->usedBefore;
  else
    usedBefore = 0;
  v62 = _RSI->weaponMap;
  LOBYTE(v60) = !usedBefore;
  v188 = v60;
  if ( !v62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 936, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 937, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BgWeaponMap::GetWeapon(v62, _RDI->weapCommon.weaponSpawnHandle)->weaponIdx )
  {
    v63 = _RSI->weaponMap;
    v188 = 1;
    if ( !v63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 945, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    v63->SetWeapon(v63, &_RDI->weapCommon.weaponSpawnHandle, &NULL_WEAPON);
  }
  EquippedWeaponStateNonConst->usedBefore = 1;
  __asm { vxorps  xmm1, xmm1, xmm1 }
  _RDI->weapCommon.adsZoomLevelChangeTime = 0;
  __asm { vcvtsi2ss xmm1, xmm1, dword ptr [r13+4]; value }
  BG_SetAdsZoomLevelOnStateChange(_RDI, *(float *)&_XMM1);
  v66 = BG_UseLeftTriggerAltFireMode(&r_weapon);
  v67 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x22u);
  v181 = v67;
  v68 = !v66 && !v67 && (!v15 || BG_HasUnderbarrelAmmo(&r_weapon)) && _RSI->cmd.isAlternate;
  inAltMode = EquippedWeaponStateNonConst->inAltMode;
  v175 = v68;
  v170 = inAltMode;
  sameWeaponAltSwitch = v68 != inAltMode && !memcmp_0(&Buf1, &r_weapon, 0x3Cui64);
  v172 = memcmp_0(&Buf1, &r_weapon, 0x3Cui64) != 0;
  v70 = BG_GetAmmoInClipForWeapon(_RDI, &Buf1, inAltMode, WEAPON_HAND_DEFAULT) != 0;
  if ( BG_IsSwimWeapon(&r_weapon) )
  {
    sameWeaponAltSwitch = 1;
    if ( v172 )
    {
      EquippedWeaponStateNonConst->inAltMode = 0;
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x11u);
      PM_Weapon_RequestAltState(_RSI, 1);
    }
    else
    {
      if ( v170 )
        v68 = 0;
      v175 = v68;
    }
  }
  if ( !BG_HasLadderHand(_RDI) || v15 || !v172 && (v71 = BG_UsingAlternate(_RDI), BG_IsLadderWeapon(&Buf1, v71)) && v70 )
  {
    p_weapFlags = &_RDI->weapCommon.weapFlags;
  }
  else
  {
    p_weapFlags = &_RDI->weapCommon.weapFlags;
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x32u);
  }
  if ( sameWeaponAltSwitch )
  {
    EquippedWeaponStateNonConst->inAltMode = !EquippedWeaponStateNonConst->inAltMode;
    p_weapFlags->m_flags[0] ^= 0x20000u;
  }
  else if ( !v66 && (EquippedWeaponStateNonConst->inAltMode || v68) )
  {
    EquippedWeaponStateNonConst->inAltMode = 1;
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x11u);
  }
  else
  {
    for ( i = 0; i < 2; ++i )
      PM_Weapon_ResetShotCount(_RDI, (const PlayerHandIndex)i);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 0x11u);
  }
  if ( (unsigned int)BG_Weapons_IsPrimaryWeaponSwitch(_RDI, &Buf1, &r_weapon, sameWeaponAltSwitch) )
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x15u);
  else
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 0x15u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 0x16u);
  ps = _RSI->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6138, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v75 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u);
  IsDualWield = BG_WeaponIsDualWield(&r_weapon);
  LOWORD(v77) = r_weapon.weaponIdx;
  v78 = IsDualWield;
  if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(hand) = bg_lastParsedWeaponIndex;
    LODWORD(checkRaise) = r_weapon.weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", checkRaise, hand) )
      __debugbreak();
  }
  v77 = (unsigned __int16)v77;
  if ( !bg_weaponDefs[(unsigned __int16)v77] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v79 = bg_weaponDefs[v77];
  if ( !v79 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6145, ASSERT_TYPE_ASSERT, "(newWeapDef)", (const char *)&queryFormat, "newWeapDef") )
    __debugbreak();
  if ( v78 && v79->dualWieldType == DUAL_WIELD_TYPE_ALT_MODE )
  {
    EquippedWeaponStateNonConst->dualWielding = v75;
    if ( BG_AltSharesAmmo(&r_weapon) )
    {
      if ( EquippedWeaponStateNonConst->dualWielding )
      {
        PM_WeaponDistributeClipAmmoBetweenHands(ps, &r_weapon, v75);
        v80 = 1;
        goto LABEL_134;
      }
      PM_WeaponPassClipAmmoToRightHand(ps, &r_weapon, v75);
    }
    v80 = 1;
  }
  else
  {
    v80 = 0;
  }
LABEL_134:
  BG_UpdateLastWeaponHand(_RSI->weaponMap, ps, &r_weapon);
  v81 = v170;
  v82 = BG_PlayerDualWielding(_RDI) != 0;
  v180 = v82;
  __asm { vmovss  xmm8, cs:__real@3f800000 }
  v84 = BG_UseQuickSwitchAnims(_RDI, &r_weapon, v170, v82, _RSI->m_bgHandler, 1);
  v179 = v84;
  v171 = 0;
  v177 = 0;
  if ( sameWeaponAltSwitch )
  {
    v85 = 0;
    if ( v80 )
    {
      v86 = BG_AltRaiseAkimboTime(_RDI, &r_weapon, v175, v82);
    }
    else
    {
      if ( previousWeaponState == 10 )
      {
        v174 = BG_AltRaiseADSTime(_RDI, &r_weapon, v175, v82);
        anim = WEAP_ALTSWITCHTO_ADS;
        if ( !v174 )
          v85 = 1;
LABEL_142:
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+744h]
          vmaxss  xmm7, xmm0, cs:__real@43000000
        }
        v89 = v188 || v172;
        v90 = _RSI->weaponMap;
        if ( !v90 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4068, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v90, _RDI);
        if ( BG_IsSwimWeapon(CurrentWeaponForPlayer) )
        {
          if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4078, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )") )
            __debugbreak();
          v92 = !v89;
          if ( v89 )
          {
            IsFirstRaiseAllowed = PM_Weapon_IsFirstRaiseAllowed();
            v92 = !IsFirstRaiseAllowed;
            if ( IsFirstRaiseAllowed )
            {
              v94 = BG_UsingAlternate(_RDI);
              v95 = BG_PlayerDualWielding(_RDI);
              anim = WEAP_FIRST_RAISE;
              RaiseTime = BG_FirstRaiseTime(_RDI, CurrentWeaponForPlayer, v94, v95 != 0);
LABEL_156:
              v174 = RaiseTime;
              goto LABEL_157;
            }
          }
          __asm { vucomiss xmm8, dword ptr [rdi+730h] }
          if ( v92 )
            goto LABEL_163;
          __asm { vucomiss xmm8, dword ptr [rdi+10D0h] }
          if ( v92 )
          {
LABEL_163:
            RaiseTime = 0;
            anim = WEAP_IDLE;
            goto LABEL_156;
          }
        }
        if ( anim == WEAP_ALTSWITCHTO && v174 )
        {
          v97 = 1;
          goto LABEL_158;
        }
LABEL_157:
        v97 = 0;
LABEL_158:
        IsThrowingAxe = BG_IsThrowingAxe(&r_weapon);
        v99 = BG_Ladder_IsActive(_RDI) && BG_Ladder_GetDropType(_RSI, &r_weapon, &Buf1);
        v92 = !IsThrowingAxe;
        v81 = v170;
        if ( v92 && !v97 && !v99 && (v85 || !v80 && previousWeaponState != 10 && !v175 && v170 && !v172) )
          v178 = 1;
        goto LABEL_198;
      }
      v86 = BG_AltRaiseTime(_RDI, &r_weapon, v175, v82);
      anim = WEAP_ALTSWITCHTO;
    }
    v174 = v86;
    goto LABEL_142;
  }
  LOBYTE(_EAX) = BG_UsesReverseWeaponSpread(&r_weapon, v175);
  __asm { vmovss  xmm2, cs:__real@437f0000 }
  _ECX = 0;
  _EAX = (unsigned __int8)_EAX;
  __asm
  {
    vmovd   xmm1, ecx
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vblendvps xmm0, xmm7, xmm2, xmm3
    vmovss  dword ptr [rsp+5F0h+var_5A4], xmm0
  }
  if ( PM_WeaponClipEmpty(_RSI->weaponMap, _RDI, WEAPON_HAND_DEFAULT) )
  {
    anim = WEAP_EMPTY_RAISE;
    _EAX = BG_EmptyRaiseTime(_RDI, &r_weapon, v170, v82);
  }
  else if ( v188 && PM_Weapon_IsFirstRaiseAllowed() )
  {
    anim = WEAP_FIRST_RAISE;
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, GameModeFlagValues::ms_spValue, 0x21u) && BG_ViewModelAnimExists(_RDI, WEAP_ANIM_BREACH_RAISE, WEAPON_HAND_DEFAULT, _RSI->m_bgHandler) )
    {
      _EAX = BG_BreachRaiseTime(_RDI, &r_weapon, v170, v82);
      v177 = 1;
    }
    else
    {
      _EAX = BG_FirstRaiseTime(_RDI, &r_weapon, v170, v82);
      v177 = 1;
    }
  }
  else
  {
    p_otherFlags = &_RDI->otherFlags;
    if ( previousWeaponState == 8 )
    {
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, GameModeFlagValues::ms_spValue, 0x21u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6537, ASSERT_TYPE_ASSERT, "(!ps->otherFlags.TestFlag( POtherFlagsSP::BREACHING ))", (const char *)&queryFormat, "!ps->otherFlags.TestFlag( POtherFlagsSP::BREACHING )") )
        __debugbreak();
      v171 = 1;
      if ( v84 )
      {
        anim = WEAP_QUICK_RAISE;
        _EAX = BG_QuickRaiseTime(_RDI, &r_weapon, v170, v82);
      }
      else
      {
        anim = WEAP_RAISE;
        BG_RaiseTime(_RDI, &r_weapon, v170, v82);
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, eax
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_perk_weapSwapMultiplier, "perk_weapSwapMultiplier");
        __asm
        {
          vmulss  xmm1, xmm0, xmm6
          vcvttss2si eax, xmm1
        }
      }
    }
    else
    {
      anim = WEAP_RAISE;
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, GameModeFlagValues::ms_spValue, 0x21u) && BG_ViewModelAnimExists(_RDI, WEAP_ANIM_BREACH_RAISE, WEAPON_HAND_DEFAULT, _RSI->m_bgHandler) )
        _EAX = BG_BreachRaiseTime(_RDI, &r_weapon, v170, v82);
      else
        _EAX = BG_RaiseTime(_RDI, &r_weapon, v170, v82);
    }
  }
  __asm { vmovss  xmm7, dword ptr [rsp+5F0h+var_5A4] }
  v174 = _EAX;
LABEL_198:
  if ( BG_Ladder_CanAim(&r_weapon, _RDI, 0) )
  {
    anim = WEAP_QUICK_RAISE;
    v111 = BG_ViewModelBlendSpaceExists(_RDI, WEAPON_BLEND_SPACE_LADDER_CLIMB_RAISE, _RSI->m_bgHandler);
    v112 = 29;
    if ( v111 )
      v112 = 44;
    v189 = v112;
    _ER13 = BG_LadderAimRaiseTime(_RDI, &r_weapon, v81, 0);
    v191 = BG_LadderClimbRaiseTime(_RDI, &r_weapon, v81, 0);
  }
  else if ( BG_Ladder_CanClimb(_RDI) )
  {
    v114 = BG_UsingAlternate(_RDI);
    if ( BG_IsLadderWeapon(&r_weapon, v114) && (v115 = BG_UsingAlternate(_RDI), BG_GetAmmoInClipForWeapon(_RDI, &r_weapon, v115, WEAPON_HAND_DEFAULT)) && BG_ViewModelBlendSpaceExists(_RDI, WEAPON_BLEND_SPACE_LADDER_WEAPON_CLIMB_RAISE, _RSI->m_bgHandler) )
    {
      anim = WEAP_RAISE_LADDER_WEAPON_CLIMB;
    }
    else
    {
      v116 = 29;
      if ( BG_ViewModelBlendSpaceExists(_RDI, WEAPON_BLEND_SPACE_LADDER_CLIMB_RAISE, _RSI->m_bgHandler) )
        v116 = 44;
      anim = v116;
    }
    v171 = 1;
    _ER13 = BG_LadderClimbRaiseTime(_RDI, &r_weapon, v81, 0);
  }
  else
  {
    _ER13 = v174;
  }
  v117 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, GameModeFlagValues::ms_spValue, 0x29u);
  HasPerk = BG_HasPerk(&_RDI->perks, 0x2Bu);
  v119 = DVARBOOL_perk_quickswap_primary_item_swap_enabled;
  v120 = 0;
  v121 = HasPerk;
  if ( !DVARBOOL_perk_quickswap_primary_item_swap_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_quickswap_primary_item_swap_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v119);
  if ( v119->current.enabled )
  {
    v120 = 0;
    if ( Buf1.weaponIdx )
    {
      if ( r_weapon.weaponIdx )
      {
        inventoryType = BG_WeaponDef(&Buf1, 0)->inventoryType;
        v123 = BG_WeaponDef(&r_weapon, 0)->inventoryType;
        if ( inventoryType == WEAPINVENTORY_ITEM && (v123 == WEAPINVENTORY_PRIMARY || v123 == WEAPINVENTORY_ALTMODE) )
          v120 = 1;
      }
    }
  }
  if ( v171 )
    goto LABEL_235;
  if ( v117 || v121 || forceQuickRaise )
  {
    v124 = &_RDI->weapCommon.weapFlags;
    if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x15u) && !v120 )
    {
LABEL_236:
      if ( v117 && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(v124, ACTIVE, 0x15u) )
      {
        v128 = DVARFLT_bg_quickWeaponSwitchSpeedScaleSP;
        if ( !DVARFLT_bg_quickWeaponSwitchSpeedScaleSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_quickWeaponSwitchSpeedScaleSP") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v128);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm0, xmm0, dword ptr [rbx+28h]
          vcvttss2si r13d, xmm0
        }
      }
      goto LABEL_242;
    }
    v171 = 1;
    if ( v179 )
    {
      anim = WEAP_QUICK_RAISE;
      _ER13 = BG_QuickRaiseTime(_RDI, &r_weapon, v170, v180);
      goto LABEL_236;
    }
    v125 = DCONST_DVARFLT_perk_weapSwapMultiplier;
    if ( !DCONST_DVARFLT_perk_weapSwapMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_weapSwapMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v125);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm0, xmm0, dword ptr [rbx+28h]
      vcvttss2si r13d, xmm0
    }
LABEL_235:
    v124 = &_RDI->weapCommon.weapFlags;
    goto LABEL_236;
  }
LABEL_242:
  if ( !sameWeaponAltSwitch )
  {
    if ( r_weapon.weaponIdx )
    {
      PM_AddEvent(_RSI, (const entity_event_t)(v188 + 31));
      if ( Com_GameMode_SupportsFeature((Com_GameMode_Feature)(sameWeaponAltSwitch + 75)) )
      {
        if ( BG_Ladder_CanAim(&r_weapon, _RDI, 0) || BG_Ladder_CanClimb(_RDI) )
        {
          BG_AnimScriptEvent(_RSI->m_bgHandler, _RDI, ANIM_ET_RAISE_LADDER, 0, 0, &pml->holdrand);
          goto LABEL_260;
        }
        if ( !v181 && !GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&_RDI->linkFlags, (GameModeFlagValues::FlagMode)(sameWeaponAltSwitch + 1), sameWeaponAltSwitch + 2) )
        {
          p_holdrand = &pml->holdrand;
          BG_AnimScriptEvent(_RSI->m_bgHandler, _RDI, (PlayerAnimScriptEventType)(sameWeaponAltSwitch + 5), 0, 0, &pml->holdrand);
          if ( v177 )
          {
            v132 = sameWeaponAltSwitch + 70;
          }
          else
          {
            if ( !v171 )
              goto LABEL_254;
            v132 = ANIM_ET_RAISEWEAPONQUICK;
          }
          BG_AnimScriptEvent(_RSI->m_bgHandler, _RDI, v132, 0, 0, p_holdrand);
LABEL_254:
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm6, xmm0, cs:__real@3a83126f
          }
          if ( !v188 )
          {
            v136 = _RSI->ps;
            if ( !v136 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6191, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
              __debugbreak();
            __asm { vcomiss xmm6, cs:__real@3fcccccd }
            BG_AnimScriptEvent(_RSI->m_bgHandler, v136, ANIM_ET_RAISEWEAPON_TIME_1_6, 0, 0, p_holdrand);
          }
        }
      }
    }
  }
LABEL_260:
  IsSkydiving = BG_Skydive_IsSkydiving(_RDI);
  v138 = WEAPON_HAND_DEFAULT;
  WeaponHand = BG_PlayerLastWeaponHand(_RSI->weaponMap, _RDI);
  __asm { vmovaps xmm8, xmmword ptr [rsp+5F0h+var_68+8] }
  if ( WeaponHand >= 0 )
  {
    p_weapHandFlags = &_RDI->weapState[0].weapHandFlags;
    do
    {
      if ( v182 )
      {
        PM_Weapon_BeginExecution(_RSI, pml);
      }
      else
      {
        if ( IsSkydiving )
          goto LABEL_270;
        if ( v183 )
        {
          PM_Weapon_BeginMelee(_RSI, pml);
        }
        else
        {
          if ( !v178 && !forceIdle )
          {
LABEL_270:
            if ( v138 != WEAPON_HAND_LEFT || v189 == -1 )
            {
              v142 = _ER13;
              v143 = anim;
              previousWeaponStatea = previousWeaponState;
              handa = v138;
            }
            else
            {
              if ( v191 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6700, ASSERT_TYPE_ASSERT, "(weaponTimeLeftHandOverride != 0xffffffffui32)", (const char *)&queryFormat, "weaponTimeLeftHandOverride != UINT32_MAX") )
                __debugbreak();
              v142 = v191;
              v143 = v189;
              previousWeaponStatea = previousWeaponState;
              handa = WEAPON_HAND_LEFT;
            }
            __asm { vmovss  dword ptr [rsp+5F0h+fmt], xmm7 }
            PM_Weapon_BeginWeaponRaise(_RSI, pml, v143, v142, fmt, sameWeaponAltSwitch, handa, previousWeaponStatea);
            goto LABEL_278;
          }
          PM_Weapon_Idle(_RSI, v138);
        }
      }
LABEL_278:
      *p_weapHandFlags &= ~2u;
      ++v138;
      p_weapHandFlags += 20;
    }
    while ( v138 <= BG_PlayerLastWeaponHand(_RSI->weaponMap, _RDI) );
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    CharacterInfo = BG_GetCharacterInfo(ActiveStatics, _RDI->clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6718, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    v146 = BG_UsingAlternate(_RDI);
    PlayerAnimType = BG_WeaponGetPlayerAnimType(&r_weapon, v146);
    BG_SetConditionBit(CharacterInfo, 0, PlayerAnimType);
    BG_SetConditionBit(CharacterInfo, 15, PlayerAnimType);
    WeaponClassForAnimCondition = BG_GetWeaponClassForAnimCondition(_RDI, &r_weapon, 0);
    BG_SetConditionBit(CharacterInfo, 1, WeaponClassForAnimCondition);
  }
  v149 = BG_UsingAlternate(_RDI);
  if ( BG_Weapon_FiresOnWeaponSwitch(&r_weapon, v149) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x14u) )
    PM_EndSprint(_RDI, _RSI->cmd.serverTime, _RSI->cmd.buttons);
  v150 = _RSI->weaponMap;
  serverTime = _RSI->cmd.serverTime;
  m_bgHandler = _RSI->m_bgHandler;
  if ( !v150 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6082, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( Buf1.weaponIdx && BG_PlayerHasWeapon(v150, _RDI, &Buf1) && BG_IsRemoveWeaponOnEmpty(v150, _RDI, &Buf1, 0) )
  {
    _RAX = BG_AmmoStoreForWeapon(&result, &Buf1, 0);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+4F0h+r_clip2.weapon.weaponIdx], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
    }
    v156 = 0;
    __asm { vmovups ymmword ptr [rbp+4F0h+r_clip2.weapon.attachmentVariationIndices+5], ymm1 }
    while ( !BG_IsClipCompatible(&_RDI->weapCommon.ammoInClip[v156].clipIndex, &r_clip2) )
    {
      if ( (unsigned int)++v156 >= 0xF )
        goto LABEL_298;
    }
    if ( _RDI->weapCommon.ammoInClip[v156].ammoCount[0] + _RDI->weapCommon.ammoInClip[v156].ammoCount[1] )
      goto LABEL_301;
LABEL_298:
    if ( !BG_GetAmmoNotInClip(_RDI, &Buf1, 0) && !BG_WeapHasDetonator(&Buf1, 0) )
      BG_TakePlayerWeapon(v150, _RDI, m_bgHandler, &Buf1, serverTime);
  }
LABEL_301:
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) )
    _RDI->weapCommon.fAdditivePosFrac = 0.0;
  PM_UpdateMeleeAnimSet(_RSI, &pml->holdrand, 1, 0);
  v157 = BG_UsingAlternate(_RDI);
  if ( BG_SupportsAlternateMelee(&r_weapon, v157) )
    PM_UpdateMeleeAnimSet(_RSI, &pml->holdrand, 1, 1);
  if ( memcmp_0(&Buf1, &r_weapon, 0x3Cui64) )
  {
    _RDI->weapCommon.adsStartTime = 0;
    *(_QWORD *)&_RDI->weapCommon.weaponIdleTime = 0i64;
  }
  __asm { vmovups ymm0, [rbp+4F0h+Buf1] }
  v159 = *(_DWORD *)&Buf1.weaponCamo;
  __asm { vmovups xmm1, [rbp+4F0h+var_4D0] }
  _RSI->m_flags |= 0x20u;
  __asm
  {
    vmovups ymmword ptr [rsi+2A4h], ymm0
    vmovsd  xmm0, [rbp+4F0h+var_4C0]
    vmovups xmmword ptr [rsi+2C4h], xmm1
    vmovsd  qword ptr [rsi+2D4h], xmm0
  }
  *(_DWORD *)&_RSI->prevWeapon.weaponCamo = v159;
  _RSI->prevAlternate = v185;
  BG_Execution_MarkExecutionWeaponDirty(_RDI);
  BG_WeaponOffsets_OnWeaponChange(_RDI);
LABEL_308:
  _R11 = &v198;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
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

void __fastcall PM_Weapon_FireAnimScriptWeaponRaiseEventForTime(pmove_t *pm, pml_t *pml, double weaponTimeSec)
{
  playerState_s *ps; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6191, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 6191, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vcomiss xmm6, cs:__real@3fcccccd }
  BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RAISEWEAPON_TIME_1_6, 0, 0, &pml->holdrand);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
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
  __int64 v5; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 
  bool HasActiveOffhand; 
  bool IsADSFireOnly; 
  playerState_s *ps; 
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
  bool v28; 
  bool v29; 
  const Weapon *v31; 
  bool v32; 
  bool v33; 
  playerState_s *v40; 
  WeaponChargeType Type; 
  int weaponTime; 
  const dvar_t *v43; 
  bool v44; 
  int v45; 
  int fireTime; 
  QueuedActionState qas; 
  int fireDelay; 
  Weapon *r_weapon; 
  WeaponDef *weapDef; 
  bool v52; 
  bool v53; 
  bool v56; 

  v5 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10368, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10368, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, _RDI);
  PM_Weapon_UpdateAltFireFlags(pm, (const PlayerHandIndex)v5, CurrentWeaponForPlayer, 1);
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10374, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 374, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  qas = _RDI->weapState[v5].queuedActionState;
  if ( BG_IsQASWeaponFire(_RDI, (PlayerHandIndex)v5) || !PM_Weapon_BurstFirePending(pm->weaponMap, _RDI, (PlayerHandIndex)v5) || !PM_Weapon_HyperBurstFirePending(pm->weaponMap, _RDI, (const PlayerHandIndex)v5) )
    BG_SetQAS(_RDI, (PlayerHandIndex)v5, QAS_STATE_NONE);
  v10 = BG_UsingAlternate(_RDI);
  v56 = BG_PlayerDualWielding(_RDI) == 1;
  HasActiveOffhand = BG_Offhand_HasActiveOffhand(_RDI);
  IsADSFireOnly = BG_IsADSFireOnly(CurrentWeaponForPlayer, v10);
  if ( (unsigned int)PM_Weapon_CheckFiringAmmo(_RDI, pm, pml, (PlayerHandIndex)v5) && (!HasActiveOffhand && _RDI->weapState[v5].weaponState == 16 || !BG_PlayerWeaponNeedsRechamber(_RDI, CurrentWeaponForPlayer, (PlayerHandIndex)v5) && (!HasActiveOffhand || !IsADSFireOnly || !BG_Offhand_IsPlayingGrenadeGesture(pm->weaponMap, _RDI) || BG_Offhand_GrenadeGestureInterruptable(pm->weaponMap, _RDI, pm->cmd.serverTime))) )
  {
    weapDef = (WeaponDef *)BG_WeaponDef(CurrentWeaponForPlayer, v10);
    if ( PM_Weapon_Charge_WeaponFireCheck(pm, weapDef, (PlayerHandIndex)v5) )
    {
      if ( !PM_GestureOffhandDisablesFiringPrimary(pm) )
      {
        BG_GetFireTime(pm->weaponMap, _RDI, CurrentWeaponForPlayer, v10, v56, _RDI->weapState[v5].weaponShotCount, &fireTime, &fireDelay);
        if ( fireTime )
        {
          ps = pm->ps;
          if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9538, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          if ( (unsigned int)(ps->weapState[v5].weaponState - 15) <= 1 || (v14 = pm->weaponMap, v52 = BG_UsingAlternate(ps), r_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(v14, ps), BG_IsOffhandWeaponType(r_weapon, v52)) || (v15 = BG_PlayerDualWielding(ps), v16 = BG_PreFireTime(ps, r_weapon, v52, v15 == 1), v16 <= 0) )
          {
            Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_jitter_mod_rechamber_protection_enabled, "jitter_mod_rechamber_protection_enabled");
            if ( Bool_Internal_DebugName && !PM_Weapon_ValidateFireRate(pm, (const PlayerHandIndex)v5, CurrentWeaponForPlayer, v10, v56) )
            {
              BG_SetQAS(_RDI, (PlayerHandIndex)v5, QAS_STATE_FIRE);
              return;
            }
            v53 = _RDI->weapState[v5].weaponState == 16;
            PM_Weapon_StartFiring(pm, delayedAction, &pml->holdrand, (PlayerHandIndex)v5);
            if ( !_RDI->weapState[v5].weaponDelay )
            {
              if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, GameModeFlagValues::ms_spValue, 0x31u) )
              {
                if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10190, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
                  __debugbreak();
                PM_AddEvent(pm, EV_FIRE_WEAPON_DRY);
              }
              else
              {
                v18 = weapDef;
                if ( weapDef->requireLockonToFire && (_RDI->weapCommon.weapLockFlags & 2) == 0 )
                {
                  PM_AddEvent(pm, EV_LOCKON_REQUIRED_HINT);
                  return;
                }
                if ( !weapDef->lockonSupported )
                  goto LABEL_117;
                if ( (_RDI->weapCommon.weapLockFlags & 0x12) == 18 )
                {
                  PM_AddEvent(pm, EV_TARGET_TOO_CLOSE_HINT);
                  return;
                }
                if ( (_RDI->weapCommon.weapLockFlags & 0x20) != 0 )
                {
                  PM_AddEvent(pm, EV_TARGET_NOT_ENOUGH_CLEARANCE_HINT);
                }
                else
                {
LABEL_117:
                  if ( Bool_Internal_DebugName || PM_Weapon_ValidateFireRate(pm, (const PlayerHandIndex)v5, CurrentWeaponForPlayer, v10, v56) )
                  {
                    PM_Weapon_FinishFiring(pm, (const PlayerHandIndex)v5, CurrentWeaponForPlayer, v10, v56, v53, v18, &pml->holdrand);
                    if ( BG_GetAmmoInClipForWeapon(_RDI, CurrentWeaponForPlayer, v10, (PlayerHandIndex)v5) != -1 && !BG_IsTurretActive(_RDI) )
                    {
                      v19 = BG_AmmoUsedPerShot(CurrentWeaponForPlayer, v10);
                      PM_WeaponUseAmmo(_RDI, CurrentWeaponForPlayer, v10, v19, (PlayerHandIndex)v5);
                    }
                    if ( BG_IsOffhandWeaponType(CurrentWeaponForPlayer, v10) )
                      _RDI->weapState[v5].weaponTime = fireTime;
                    if ( PM_UseLTriggerForDoubleBarrel(_RDI, CurrentWeaponForPlayer) )
                    {
                      p_weapFlags = &_RDI->weapCommon.weapFlags;
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
                    if ( PM_WeaponClipEmpty(pm->weaponMap, _RDI, (PlayerHandIndex)v5) || BG_PlayerUsingOffhandUnderbarrelShotgun(_RDI, CurrentWeaponForPlayer) )
                    {
                      if ( BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v10) == PTRDIFF )
                      {
                        PM_Weapon_Charge_TransitionToOut(pm, pml, pm->weaponMap, (PlayerHandIndex)v5);
                      }
                      else
                      {
                        v24 = PM_Weapon_GetFireWeaponAnim(pm->weaponMap, _RDI, (PlayerHandIndex)v5);
                        v25 = BG_MapWeaponAnimStateToAnimIndex(pm->weaponMap, _RDI, v24, 0, CurrentWeaponForPlayer, v10, (PlayerHandIndex)v5, pm->m_bgHandler);
                        FireAnimTime = BG_GetFireAnimTime(CurrentWeaponForPlayer, v10, v56, _RDI, pm->m_bgHandler, v25);
                        if ( FireAnimTime )
                          _RDI->weapState[v5].weaponTime = FireAnimTime;
                      }
                    }
                    PM_HoldBreathFire(pm->weaponMap, _RDI);
                    weaponMap = pm->weaponMap;
                    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9908, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
                      __debugbreak();
                    v28 = _RDI == NULL;
                    if ( !_RDI )
                    {
                      v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9909, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps");
                      v28 = !v29;
                      if ( v29 )
                        __debugbreak();
                    }
                    __asm
                    {
                      vmovss  xmm0, cs:__real@3f800000
                      vucomiss xmm0, dword ptr [rdi+730h]
                    }
                    if ( !v28 )
                    {
                      __asm { vmovaps [rsp+0B8h+var_58], xmm6 }
                      v31 = BG_GetCurrentWeaponForPlayer(weaponMap, _RDI);
                      v32 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x1Du);
                      v33 = BG_UsingAlternate(_RDI);
                      if ( v32 )
                        *(double *)&_XMM0 = BG_SlideSpreadFireAdd(v31, v33);
                      else
                        *(double *)&_XMM0 = BG_HipSpreadFireAdd(v31, v33);
                      __asm
                      {
                        vmovss  xmm6, cs:__real@437f0000
                        vmulss  xmm0, xmm0, xmm6
                        vaddss  xmm1, xmm0, dword ptr [rdi+744h]
                        vmovss  dword ptr [rdi+744h], xmm1
                      }
                      BG_GameInterface_AddFiringAimSpreadScale(_RDI);
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rdi+744h]
                        vminss  xmm1, xmm0, xmm6
                        vmovaps xmm6, [rsp+0B8h+var_58]
                        vmovss  dword ptr [rdi+744h], xmm1
                      }
                    }
                    if ( PM_Weapon_ShouldSwitchWeaponsAfterFire(pm->weaponMap, _RDI) )
                      BG_AddPredictableEventToPlayerstate((const entity_event_t)(((_DWORD)v5 == 1) + 16), 0, pm->cmd.serverTime, pm->weaponMap, _RDI);
                    v40 = pm->ps;
                    if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10320, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
                      __debugbreak();
                    Type = BG_WeaponCharge_GetType(CurrentWeaponForPlayer, v10);
                    weaponTime = v40->weapState[v5].weaponTime;
                    if ( Type && v40->weapState[v5].weaponChargeCooldownTime > weaponTime )
                      weaponTime = v40->weapState[v5].weaponChargeCooldownTime;
                    v43 = DVARBOOL_jitter_mod_rechamber_protection_enabled;
                    if ( !DVARBOOL_jitter_mod_rechamber_protection_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jitter_mod_rechamber_protection_enabled") )
                      __debugbreak();
                    Dvar_CheckFrontendServerThread(v43);
                    if ( v43->current.enabled && BG_PlayerWeaponNeedsRechamber(v40, CurrentWeaponForPlayer, (PlayerHandIndex)v5) && BG_GetAmmoInClipForWeapon(v40, CurrentWeaponForPlayer, v10, (PlayerHandIndex)v5) > 0 )
                    {
                      v44 = BG_UsingAlternate(v40);
                      if ( v56 )
                        v45 = BG_RechamberTimeOneHanded(v40, CurrentWeaponForPlayer, v44, v56);
                      else
                        v45 = BG_RechamberTime(v40, CurrentWeaponForPlayer, v44, 0);
                      weaponTime += v45;
                    }
                    if ( weaponTime > 2047 )
                      weaponTime = 2047;
                    v40->weapState[v5].nextFireTimeCounter = weaponTime;
                  }
                }
              }
            }
          }
          else
          {
            ps->weapState[v5].weaponTime = v16;
            ps->weapState[v5].weaponState = 15;
            BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v5, 0, NULL);
            if ( ps->pm_type < 7 )
              PM_SetNextWeaponAnim(ps, WEAP_PRE_ATTACK, (PlayerHandIndex)v5);
            BG_AddPredictableEventToPlayerstate(EV_PRE_FIRE_WEAPON, 0, pm->cmd.serverTime, pm->weaponMap, ps);
            if ( ((qas - 1) & 0xFFFFFFFA) == 0 && qas != QAS_INSPECT )
              BG_SetQAS(ps, (PlayerHandIndex)v5, qas);
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

void __fastcall PM_Weapon_IncrementMovementIdleTime_AdvancedIdle(const BgWeaponMap *weaponMap, playerState_s *ps, double frametime, const Weapon *weapon, const AdvancedIdleSettings *advancedIdleSettings)
{
  bool v13; 
  const dvar_t *v25; 
  char v38; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RDI = ps;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmm8, xmm2
  }
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18468, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18469, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18470, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( weapon )") )
    __debugbreak();
  _RBX = advancedIdleSettings;
  if ( !advancedIdleSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18471, ASSERT_TYPE_ASSERT, "(advancedIdleSettings)", (const char *)&queryFormat, "advancedIdleSettings") )
    __debugbreak();
  if ( !advancedIdleSettings->useAdvancedIdleSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18472, ASSERT_TYPE_ASSERT, "(advancedIdleSettings->useAdvancedIdleSettings)", (const char *)&queryFormat, "advancedIdleSettings->useAdvancedIdleSettings") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18448, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18449, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( weapon )") )
    __debugbreak();
  if ( !advancedIdleSettings->useAdvancedIdleSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18451, ASSERT_TYPE_ASSERT, "(advancedIdleSettings->useAdvancedIdleSettings)", (const char *)&queryFormat, "advancedIdleSettings->useAdvancedIdleSettings") )
    __debugbreak();
  v13 = BG_UsingAlternate(_RDI);
  if ( BG_IsAimDownSight(weapon, v13) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+30h]
      vsubss  xmm1, xmm0, dword ptr [rbx+0Ch]
      vmovss  xmm4, dword ptr [rdi+730h]
      vmovss  xmm0, dword ptr [rbx+78h]
      vmulss  xmm2, xmm1, xmm4
      vsubss  xmm1, xmm0, dword ptr [rbx+54h]
      vaddss  xmm6, xmm2, dword ptr [rbx+0Ch]
      vmulss  xmm2, xmm1, xmm4
      vaddss  xmm7, xmm2, dword ptr [rbx+54h]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+0Ch]
      vmovss  xmm7, dword ptr [rbx+54h]
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_LADDER_AIM) )
  {
    v25 = DCONST_DVARBOOL_player_scope_prototype;
    if ( !DCONST_DVARBOOL_player_scope_prototype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_scope_prototype") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
  }
  __asm
  {
    vmulss  xmm0, xmm8, dword ptr [rdi+34Ch]
    vmulss  xmm2, xmm0, cs:__real@c47a0000
  }
  _R11 = &v38;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmulss  xmm1, xmm2, xmm6
    vmovaps xmm6, [rsp+88h+var_28]
    vcvttss2si eax, xmm1
  }
  _RDI->weapCommon.weaponIdleTime -= _EAX;
  __asm
  {
    vmulss  xmm0, xmm2, xmm7
    vmovaps xmm7, [rsp+88h+var_38]
    vcvttss2si eax, xmm0
  }
  _RDI->weapCommon.weaponIdleTime2 -= _EAX;
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
  _RAX = BG_AmmoStoreForWeapon(&result, weapon, isAlternate);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0E8h+r_clipIndex.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+0E8h+r_clipIndex.weapon.attachmentVariationIndices+5], ymm1
  }
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
  __int64 v10; 
  bool bIsAlternate; 
  bool v14; 
  const Weapon *CurrentWeaponForPlayer; 
  int weaponTime; 
  int weapAnim; 
  unsigned __int64 weaponState; 
  unsigned int v19; 
  const XAnimParts *AnimParts; 
  const Weapon *ViewmodelWeapon; 
  bool result; 
  __int64 v27; 
  __int64 v28; 
  char v29; 
  bool Bool_Internal_DebugName; 
  char v31; 
  int SprintOutTime; 
  bool v40; 
  bool v41; 
  unsigned __int16 v49; 
  ReloadType ReloadType; 
  int started; 
  const Weapon *UsedOffHandWeapon; 
  unsigned int CookingGrenadeFuseMax; 
  bool v56; 
  const Weapon *v57; 
  const Weapon *v59; 
  int v61; 
  int v62; 
  int v63; 
  bool v68; 
  int WeaponFieldTime; 
  unsigned __int16 v73; 
  int v77; 
  __int64 fmt; 
  int handIndex; 
  int v84; 
  weapAnimFiles_t anim; 
  int v86; 
  int outMeleeDamageTime; 
  int outToFireInterruptTime; 
  int outToMeleeInterruptTime[2]; 
  BgWeaponMap *weaponMapa; 
  int outMeleeTime; 
  PlayerHandIndex handa; 

  handa = hand;
  weaponMapa = (BgWeaponMap *)weaponMap;
  v10 = hand;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4589, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4590, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0C0h+var_40], xmm6
    vmovaps [rsp+0C0h+var_50], xmm7
  }
  bIsAlternate = BG_UsingAlternate(ps);
  v14 = BG_PlayerDualWielding(ps) == 1;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  *(_QWORD *)outToMeleeInterruptTime = 80 * v10;
  weaponTime = ps->weapState[v10].weaponTime;
  weapAnim = ps->weapState[v10].weapAnim;
  weaponState = ps->weapState[v10].weaponState;
  v19 = weapAnim & 0xFFFFFF7F;
  v86 = weaponTime;
  v84 = 0;
  anim = BG_MapWeaponAnimStateToAnimIndex(weaponMapa, ps, v19, 0, CurrentWeaponForPlayer, bIsAlternate, handa, pmoveHandler);
  AnimParts = BG_WeaponGetAnimParts(ps, handa, bIsAlternate, anim, pmoveHandler);
  if ( AnimParts )
  {
    *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(AnimParts, scr_const.interruptible);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmaxss  xmm7, xmm0, xmm6
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm7, xmm7, xmm7
    }
  }
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMapa, ps);
  if ( BG_IsSwimWeapon(ViewmodelWeapon) && (unsigned int)(weaponState - 1) <= 4 || (_DWORD)weaponState == 51 )
    goto LABEL_18;
  if ( (((_DWORD)weaponState - 40) & 0xFFFFFFFD) == 0 )
    goto LABEL_141;
  if ( (((_DWORD)weaponState - 41) & 0xFFFFFFFD) != 0 )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) && !(_DWORD)weaponState )
    {
      if ( !v86 )
        goto LABEL_18;
      goto LABEL_37;
    }
    if ( (_DWORD)weaponState == 78 )
      goto LABEL_18;
    if ( (unsigned int)weaponState <= 0x31 )
    {
      v27 = 0x2000000005060i64;
      if ( _bittest64(&v27, weaponState) )
      {
LABEL_141:
        result = 0;
        goto LABEL_19;
      }
    }
    if ( (unsigned int)weaponState > 0x3D || (v28 = 0x20000001083C001Ei64, v40 = _bittest64(&v28, weaponState), v29 = v40 || v41, !v40) )
    {
      v29 = (unsigned int)weaponState <= 0x49;
      if ( (_DWORD)weaponState != 73 )
      {
        if ( (_DWORD)weaponState == 36 )
        {
          Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_movementAnimProto, "movementAnimProto");
          v29 = !Bool_Internal_DebugName;
          if ( !Bool_Internal_DebugName )
            goto LABEL_28;
        }
        else
        {
          v29 = (unsigned int)(weaponState - 22) <= 2;
          if ( (unsigned int)(weaponState - 22) <= 2 )
            goto LABEL_28;
          v29 = (unsigned int)(weaponState - 76) <= 1;
          if ( (unsigned int)(weaponState - 76) <= 1 )
            goto LABEL_28;
        }
LABEL_37:
        v31 = 0;
        v29 = 1;
        goto LABEL_29;
      }
    }
LABEL_28:
    v31 = 1;
LABEL_29:
    __asm { vcomiss xmm7, xmm6 }
    if ( v29 && !v31 )
      goto LABEL_141;
    if ( (_DWORD)weaponState == 16 && PM_WeaponClipEmpty(weaponMapa, ps, handa) )
    {
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, [rbp+57h+var_68]
      }
      BG_GetFireAnimTime(CurrentWeaponForPlayer, bIsAlternate, v14, ps, pmoveHandler, anim);
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, eax
        vsubss  xmm1, xmm0, xmm7
        vmulss  xmm2, xmm2, xmm1
        vcomiss xmm6, xmm2
      }
      if ( v40 || v41 )
        goto LABEL_18;
      goto LABEL_141;
    }
    outMeleeTime = 0;
    SprintOutTime = 0;
    if ( (unsigned int)(weaponState - 1) <= 4 )
    {
      if ( (((_DWORD)weaponState - 1) & 0xFFFFFFFB) != 0 )
      {
        switch ( (_DWORD)weaponState )
        {
          case 2:
            outMeleeTime = BG_AltRaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
            WeaponFieldTime = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14, 334i64);
            break;
          case 3:
            outMeleeTime = BG_AltRaiseADSTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
            WeaponFieldTime = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14, 336i64);
            break;
          case 4:
            outMeleeTime = BG_AltRaiseAkimboTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
            WeaponFieldTime = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14, 338i64);
            break;
          default:
            goto LABEL_141;
        }
      }
      else
      {
        switch ( v19 )
        {
          case 0xEu:
            outMeleeTime = BG_RaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
            v73 = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14, 320i64);
            fmt = 318i64;
            break;
          case 0xFu:
            outMeleeTime = BG_FirstRaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
            v73 = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14, 324i64);
            fmt = 322i64;
            break;
          case 0x2Cu:
            BG_LadderClimbRaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
            result = 0;
            goto LABEL_19;
          case 0x1Du:
            outMeleeTime = BG_QuickRaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
            v73 = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14, 328i64);
            fmt = 326i64;
            break;
          case 0x1Fu:
            outMeleeTime = BG_EmptyRaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
            v73 = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14, 332i64);
            fmt = 330i64;
            break;
          default:
            goto LABEL_141;
        }
        WeaponFieldTime = v73;
        v84 = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14, fmt);
      }
      if ( !WeaponFieldTime )
        goto LABEL_141;
      SprintOutTime = outMeleeTime;
      v40 = 0;
      v41 = outMeleeTime == 0;
      if ( !outMeleeTime )
        goto LABEL_141;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ebx
      }
      goto LABEL_133;
    }
    switch ( (_DWORD)weaponState )
    {
      case 9:
        SprintOutTime = BG_AltDropTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
        goto LABEL_134;
      case 0x4C:
        outMeleeTime = BG_ScopeToggleOnTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
        BG_ScopeToggleOnInterruptTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
        SprintOutTime = outMeleeTime;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
        }
LABEL_133:
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ecx
          vdivss  xmm1, xmm1, xmm0
          vminss  xmm7, xmm1, cs:__real@3f800000
        }
        goto LABEL_134;
      case 0x4D:
        outMeleeTime = BG_ScopeToggleOffTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
        BG_ScopeToggleOffInterruptTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
        SprintOutTime = outMeleeTime;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
        }
        goto LABEL_133;
      case 0x49:
        v40 = v19 < 0x53;
        v41 = v19 == 83;
        if ( v19 == 83 )
        {
          outMeleeTime = BG_RaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
          BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14, 320i64);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, [rbp+57h+outMeleeTime]
            vcvtsi2ss xmm1, xmm1, eax
            vdivss  xmm1, xmm1, xmm0
            vminss  xmm7, xmm1, cs:__real@3f800000
          }
          v49 = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14, 318i64);
          SprintOutTime = outMeleeTime;
          v84 = v49;
        }
        goto LABEL_134;
      case 0x12:
        ReloadType = BG_GetReloadType(CurrentWeaponForPlayer, bIsAlternate);
        LOBYTE(weaponMapa) = 0;
        switch ( ReloadType )
        {
          case RELOAD_TYPE_MULTIPLE_PERCENTAGE:
            if ( v19 - 16 > 1 )
              goto LABEL_141;
            outMeleeTime = BG_ReloadMultipleTimePercentageBased(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, (bool *)&weaponMapa);
            started = BG_MultipleReloadInterruptTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v14, anim);
            break;
          case RELOAD_TYPE_MULTIPLE_BULLET:
            if ( v19 - 16 > 1 )
              goto LABEL_141;
            outMeleeTime = BG_ReloadMultipleTimeBulletBased(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, (bool *)&weaponMapa);
            started = BG_MultipleReloadInterruptTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v14, anim);
            break;
          case RELOAD_TYPE_SEGMENTED:
            goto LABEL_18;
          default:
            if ( ReloadType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4795, ASSERT_TYPE_ASSERT, "(reloadType == RELOAD_TYPE_NORMAL)", (const char *)&queryFormat, "reloadType == RELOAD_TYPE_NORMAL") )
              __debugbreak();
            if ( v19 == 17 )
            {
              outMeleeTime = BG_ReloadEmptyTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v14, (bool *)&weaponMapa);
              started = BG_ReloadEmptyInterruptTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v14);
            }
            else
            {
              outMeleeTime = BG_ReloadTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v14, *(unsigned int *)((char *)&ps->weapState[0].ammoInClipBeforeReload + *(_QWORD *)outToMeleeInterruptTime), (bool *)&weaponMapa);
              started = BG_ReloadInterruptTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v14);
            }
            break;
        }
        goto LABEL_62;
      case 0x13:
        LOBYTE(weaponMapa) = 0;
        outMeleeTime = BG_ReloadStartTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v14, *(unsigned int *)((char *)&ps->weapState[0].ammoInClipBeforeReload + *(_QWORD *)outToMeleeInterruptTime), (bool *)&weaponMapa);
        started = BG_ReloadStartInterruptTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v14);
        goto LABEL_62;
      case 0x14:
        LOBYTE(weaponMapa) = 0;
        outMeleeTime = BG_ReloadEndTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v14, *(unsigned int *)((char *)&ps->weapState[0].ammoInClipBeforeReload + *(_QWORD *)outToMeleeInterruptTime), (bool *)&weaponMapa);
        started = BG_ReloadEndInterruptTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v14);
        goto LABEL_62;
      case 0x15:
        LOBYTE(weaponMapa) = 0;
        handIndex = *(unsigned int *)((char *)&ps->weapState[0].ammoInClipBeforeReload + *(_QWORD *)outToMeleeInterruptTime);
        anim = WEAP_ANIM_ROOT;
        outMeleeTime = BG_ReloadEndRechamberTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v14, handIndex, (int *)&anim, (bool *)&weaponMapa);
        started = BG_ReloadEndRechamberInterruptTime(ps, pmoveHandler, handa, CurrentWeaponForPlayer, bIsAlternate, v14);
        goto LABEL_62;
      case 0x20:
        if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && v19 == 25 )
        {
          if ( bIsAlternate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4862, ASSERT_TYPE_ASSERT, "(!isAlternate)", (const char *)&queryFormat, "!isAlternate") )
            __debugbreak();
          SprintOutTime = BG_AltRaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
          goto LABEL_134;
        }
        outMeleeTime = BG_QuickRaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
        BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14, 328i64);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm7, xmm0, cs:__real@3a83126f
        }
        goto LABEL_79;
    }
    if ( (unsigned int)(weaponState - 22) <= 1 )
    {
      if ( (_DWORD)weaponState != 24 )
      {
        if ( (unsigned int)(weaponState - 22) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4881, ASSERT_TYPE_ASSERT, "((weaponState == WEAPON_MELEE) || (weaponState == WEAPON_MELEE_FATAL))", (const char *)&queryFormat, "(weaponState == WEAPON_MELEE) || (weaponState == WEAPON_MELEE_FATAL)") )
          __debugbreak();
        v68 = (_DWORD)weaponState == 23;
        BG_GetMeleeTime(weaponMapa, ps, bIsAlternate, v14, v68, &outMeleeTime, &outMeleeDamageTime, (int *)&anim);
        BG_GetMeleeInterruptTime(weaponMapa, ps, bIsAlternate, v14, v68, outToMeleeInterruptTime, (int *)&handa, &outToFireInterruptTime);
        SprintOutTime = outMeleeTime;
        if ( handa > WEAPON_HAND_DEFAULT )
        {
          v40 = 0;
          v41 = outMeleeTime == 0;
          if ( outMeleeTime > 0 )
          {
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm1, xmm1, eax
              vcvtsi2ss xmm0, xmm0, ecx
              vdivss  xmm7, xmm1, xmm0
            }
            goto LABEL_134;
          }
        }
LABEL_105:
        __asm { vmovss  xmm7, cs:__real@3f800000 }
LABEL_135:
        if ( SprintOutTime > 0 )
        {
          v77 = 0;
          __asm { vxorps  xmm0, xmm0, xmm0 }
          if ( SprintOutTime - v86 > 0 )
            v77 = SprintOutTime - v86;
          __asm
          {
            vcvtsi2ss xmm0, xmm0, ecx
            vmulss  xmm1, xmm0, xmm7
            vcvttss2si eax, xmm1
          }
          if ( v77 >= _EAX && (v84 <= 0 || v84 > v77) )
            goto LABEL_18;
        }
        goto LABEL_141;
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
            goto LABEL_141;
          SprintOutTime = outMeleeTime;
          v40 = 0;
          v41 = outMeleeTime == 0;
          if ( !outMeleeTime )
            goto LABEL_141;
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
          }
          goto LABEL_133;
        case 0x1C:
          UsedOffHandWeapon = PM_Weapon_GetUsedOffHandWeapon(weaponMapa, ps);
          CookingGrenadeFuseMax = BG_GetCookingGrenadeFuseMax(UsedOffHandWeapon, bIsAlternate, ps);
          v40 = CookingGrenadeFuseMax < ps->grenadeTimeLeft;
          v41 = CookingGrenadeFuseMax == ps->grenadeTimeLeft;
          SprintOutTime = CookingGrenadeFuseMax - ps->grenadeTimeLeft;
          goto LABEL_134;
        case 0x1A:
          v40 = 0;
          v41 = ((v19 - 33) & 0xFFFFFFFD) == 0;
          if ( ((v19 - 33) & 0xFFFFFFFD) == 0 )
            SprintOutTime = GetSprintOutTime(weaponMapa, ps, CurrentWeaponForPlayer);
LABEL_134:
          __asm { vcomiss xmm7, xmm6 }
          if ( v40 || v41 )
            goto LABEL_141;
          goto LABEL_135;
        case 0x1B:
          if ( v19 != 25 )
          {
            v40 = v19 < 0x27;
            v41 = v19 == 39;
            if ( v19 != 39 )
              goto LABEL_134;
            v59 = PM_Weapon_GetUsedOffHandWeapon(weaponMapa, ps);
            outMeleeTime = BG_GetWeaponFieldTime(ps, v59, bIsAlternate, v14, 16i64);
            BG_GetWeaponFieldTime(ps, v59, bIsAlternate, v14, 342i64);
            SprintOutTime = outMeleeTime;
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, eax
            }
            goto LABEL_133;
          }
          if ( BG_PWF_UseAlternateAsOffhand(ps) )
          {
            SprintOutTime = BG_AltRaiseTime(ps, CurrentWeaponForPlayer, 1, v14);
            goto LABEL_134;
          }
          v56 = BG_ThrowingBackGrenade(ps);
          v40 = 0;
          v41 = !v56;
          if ( v56 )
          {
            v57 = PM_Weapon_GetUsedOffHandWeapon(weaponMapa, ps);
            outMeleeTime = BG_AltRaiseTime(ps, v57, bIsAlternate, v14);
            BG_GetWeaponFieldTime(ps, v57, bIsAlternate, v14, 334i64);
            SprintOutTime = outMeleeTime;
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, eax
            }
            goto LABEL_133;
          }
          break;
        default:
          v40 = (unsigned int)weaponState < 0x10;
          v41 = (_DWORD)weaponState == 16;
          if ( (_DWORD)weaponState != 16 )
            goto LABEL_134;
          v61 = BG_PlayerUsingOffhandUnderbarrelShotgun(ps, CurrentWeaponForPlayer);
          v40 = 0;
          v41 = v61 == 0;
          if ( v61 )
          {
            SprintOutTime = BG_GetFireAnimTime(CurrentWeaponForPlayer, 1, v14, ps, pmoveHandler, anim);
            goto LABEL_134;
          }
          break;
      }
LABEL_79:
      SprintOutTime = outMeleeTime;
      goto LABEL_134;
    }
    v62 = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14, 328i64);
    v63 = BG_QuickRaiseTime(ps, CurrentWeaponForPlayer, bIsAlternate, v14);
    SprintOutTime = v63;
    if ( v62 )
    {
      v40 = 0;
      v41 = v63 == 0;
      if ( v63 > 0 )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm1, xmm1, ebx
          vcvtsi2ss xmm0, xmm0, eax
          vdivss  xmm7, xmm1, xmm0
        }
        goto LABEL_134;
      }
    }
    goto LABEL_105;
  }
LABEL_18:
  result = 1;
LABEL_19:
  __asm
  {
    vmovaps xmm7, [rsp+0C0h+var_50]
    vmovaps xmm6, [rsp+0C0h+var_40]
  }
  return result;
}

/*
==============
PM_Weapon_IsMeleeInterruptible
==============
*/
char PM_Weapon_IsMeleeInterruptible(BgWeaponMap *weaponMap, playerState_s *ps, const BgHandler *handler, const int interruptTime)
{
  int weaponState; 
  bool v14; 
  int v15; 
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
  if ( interruptTime <= 0 )
    return 0;
  v14 = BG_UsingAlternate(ps);
  v15 = BG_PlayerDualWielding(ps);
  BG_GetMeleeTime(weaponMap, ps, v14, v15 == 1, weaponState == 23, &outMeleeTime, outMeleeDamageTime, &outMeleeViewLockTime);
  if ( outMeleeTime <= 0 )
    return 0;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm2, xmm2, eax
    vcvtsi2ss xmm0, xmm0, ebp
    vdivss  xmm4, xmm0, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm4, xmm1
  }
  if ( !outMeleeTime )
    return 0;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm1, xmm0, xmm4
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, dword ptr [rsi+53Ch]
    vmulss  xmm2, xmm1, xmm2
    vcomiss xmm2, xmm3
  }
  return 1;
}

/*
==============
PM_Weapon_IsMeleeInterruptibleForFire
==============
*/
char PM_Weapon_IsMeleeInterruptibleForFire(BgWeaponMap *weaponMap, playerState_s *ps, const BgHandler *handler)
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
  bool v14; 
  const BgHandler *m_bgHandler; 
  __int64 v27; 
  Physics_WorldId v28; 
  char v50; 
  __int64 result; 
  vec3_t outOrigin; 
  vec3_t end; 
  tmat33_t<vec3_t> axis; 
  trace_t results; 
  char v63; 
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
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10858, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10858, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v14 = BG_UsingAlternate(ps);
  *(double *)&_XMM0 = BG_GetMeleeRange(pm->weaponMap, ps, 0);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = BG_GetMeleeWidth(CurrentWeaponForPlayer, v14);
  __asm { vmovaps xmm10, xmm0 }
  *(double *)&_XMM0 = BG_GetMeleeHeight(CurrentWeaponForPlayer, v14);
  __asm { vmovaps xmm11, xmm0 }
  AnglesToAxis(&ps->viewangles, &axis);
  BG_GetPlayerEyePosition(pm->weaponMap, ps, &outOrigin, pm->m_bgHandler);
  __asm
  {
    vmovss  xmm4, cs:__real@c1200000
    vmulss  xmm3, xmm4, dword ptr [rbp+0A0h+axis]
    vaddss  xmm3, xmm3, dword ptr [rsp+1A0h+outOrigin]
    vmulss  xmm2, xmm4, dword ptr [rbp+0A0h+axis+4]
    vaddss  xmm2, xmm2, dword ptr [rsp+1A0h+outOrigin+4]
  }
  m_bgHandler = pm->m_bgHandler;
  __asm
  {
    vmovss  dword ptr [rsp+1A0h+outOrigin], xmm3
    vmulss  xmm3, xmm4, dword ptr [rbp+0A0h+axis+8]
    vmovss  dword ptr [rsp+1A0h+outOrigin+4], xmm2
    vaddss  xmm2, xmm3, dword ptr [rsp+1A0h+outOrigin+8]
    vmovss  dword ptr [rsp+1A0h+outOrigin+8], xmm2
    vmovss  xmm9, cs:__real@3f800000
  }
  v27 = 0i64;
  v28 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
  while ( 1 )
  {
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rbp+0A0h+axis]
      vaddss  xmm2, xmm1, dword ptr [rsp+1A0h+outOrigin]
      vmulss  xmm1, xmm6, dword ptr [rbp+0A0h+axis+4]
      vaddss  xmm7, xmm1, dword ptr [rsp+1A0h+outOrigin+4]
      vmulss  xmm1, xmm6, dword ptr [rbp+0A0h+axis+8]
      vaddss  xmm8, xmm1, dword ptr [rsp+1A0h+outOrigin+8]
      vmovss  dword ptr [rsp+1A0h+end+8], xmm8
      vmovss  dword ptr [rsp+1A0h+end], xmm2
      vmovss  dword ptr [rsp+1A0h+end+4], xmm7
    }
    if ( v27 > 0 )
    {
      __asm
      {
        vmulss  xmm5, xmm10, dword ptr [r12+rbx*8]
        vmulss  xmm4, xmm11, dword ptr [r12+rbx*8+4]
        vmulss  xmm1, xmm5, dword ptr [rbp+0A0h+axis+0Ch]
        vmulss  xmm0, xmm4, dword ptr [rbp+0A0h+axis+18h]
        vaddss  xmm3, xmm1, xmm2
        vmulss  xmm2, xmm4, dword ptr [rbp+0A0h+axis+1Ch]
        vaddss  xmm1, xmm3, xmm0
        vmulss  xmm0, xmm5, dword ptr [rbp+0A0h+axis+10h]
        vaddss  xmm3, xmm0, xmm7
        vaddss  xmm0, xmm3, xmm2
        vmulss  xmm2, xmm5, dword ptr [rbp+0A0h+axis+14h]
        vmovss  dword ptr [rsp+1A0h+end], xmm1
        vmulss  xmm1, xmm4, dword ptr [rbp+0A0h+axis+20h]
        vaddss  xmm3, xmm2, xmm8
        vaddss  xmm2, xmm3, xmm1
        vmovss  dword ptr [rsp+1A0h+end+8], xmm2
        vmovss  dword ptr [rsp+1A0h+end+4], xmm0
      }
    }
    PhysicsQuery_LegacyTraceSkipEntities(v28, &results, &outOrigin, &end, &bounds_origin, &ps->clientNum, 1, 0, 41968017, 1, NULL, All);
    __asm
    {
      vmovss  xmm0, [rbp+0A0h+results.fraction]
      vcomiss xmm0, xmm9
    }
    if ( v50 )
      break;
    if ( ++v27 >= 9 )
    {
      result = 0i64;
      goto LABEL_14;
    }
  }
  result = 1i64;
LABEL_14:
  _R11 = &v63;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return result;
}

/*
==============
PM_Weapon_MeleeHitChargeTarget
==============
*/
__int64 PM_Weapon_MeleeHitChargeTarget(const pmove_t *pm, __int16 meleeChargeEnt, __int16 *outHitEnt)
{
  playerState_s *ps; 
  int v10; 
  char v13; 
  char v14; 
  int v15; 
  const Weapon *ViewmodelWeapon; 
  bool v24; 
  BgTrace *m_trace; 
  __int16 EntityHitId; 
  __int16 v34; 
  bool v35; 
  __int64 result; 
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
  __asm { vmovaps [rsp+130h+var_40], xmm6 }
  v10 = meleeChargeEnt;
  if ( meleeChargeEnt < 0 )
    goto LABEL_24;
  if ( (unsigned __int16)meleeChargeEnt > 0x7FEu )
    goto LABEL_24;
  if ( (PM_GetEffectiveStance(ps) & 0xFFFFFFFD) != 0 )
    goto LABEL_24;
  *(double *)&_XMM0 = BG_GetMeleeRange(pm->weaponMap, ps, 1);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vcomiss xmm1, xmm0
  }
  if ( !(v13 | v14) )
    goto LABEL_24;
  v15 = 0;
  if ( !PM_MeleeGetEntityOriginVelocity(pm, v10, &outAttackerPos, &outVictimPos, NULL) )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+130h+outVictimPos]
    vsubss  xmm1, xmm0, dword ptr [rsp+130h+outAttackerPos]
    vmovss  xmm2, dword ptr [rsp+130h+outVictimPos+4]
    vsubss  xmm0, xmm2, dword ptr [rsp+130h+outAttackerPos+4]
    vmovss  dword ptr [rbp+57h+vec], xmm1
    vmovss  xmm1, dword ptr [rsp+130h+outVictimPos+8]
    vsubss  xmm2, xmm1, dword ptr [rsp+130h+outAttackerPos+8]
    vmovss  dword ptr [rbp+57h+vec+8], xmm2
    vmovss  dword ptr [rbp+57h+vec+4], xmm0
  }
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &vec);
  __asm { vmovaps xmm6, xmm0 }
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
  if ( ViewmodelWeapon->weaponIdx )
  {
    v24 = BG_UsingAlternate(ps);
    _RAX = BG_WeaponDef(ViewmodelWeapon, v24);
    if ( _RAX )
    {
      __asm { vcomiss xmm6, dword ptr [rax+0EB8h] }
      LOBYTE(v15) = _RAX == NULL;
      if ( !v15 )
        goto LABEL_24;
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+130h+outAttackerPos]
    vmovss  xmm1, dword ptr [rsp+130h+outAttackerPos+4]
    vmovss  xmm3, cs:__real@41900000
  }
  m_trace = pm->m_trace;
  contentMask = pm->tracemask;
  __asm
  {
    vmovss  dword ptr [rbp+57h+start], xmm0
    vaddss  xmm0, xmm3, dword ptr [rsp+130h+outVictimPos+8]
    vmovss  dword ptr [rbp+57h+start+4], xmm1
    vaddss  xmm1, xmm3, dword ptr [rsp+130h+outAttackerPos+8]
    vmovss  dword ptr [rbp+57h+start+8], xmm1
    vmovss  dword ptr [rsp+130h+outVictimPos+8], xmm0
  }
  BgTrace::LegacyTrace(m_trace, pm, &results, &start, &outVictimPos, &bounds_origin, ps->clientNum, contentMask);
  if ( results.allsolid )
    goto LABEL_24;
  *outHitEnt = ps->meleeChargeEnt;
  EntityHitId = Trace_GetEntityHitId(&results);
  __asm
  {
    vmovss  xmm0, [rbp+57h+results.fraction]
    vcomiss xmm0, cs:__real@3f800000
  }
  v34 = EntityHitId;
  if ( !v13 || EntityHitId == ps->meleeChargeEnt )
    goto LABEL_23;
  *outHitEnt = EntityHitId;
  v35 = Com_GameMode_SupportsFeature(WEAPON_RAISING_LADDER_CLIMB|0x80);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( !v35 || v34 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
LABEL_24:
    result = 0i64;
  else
LABEL_23:
    result = 1i64;
  __asm { vmovaps xmm6, [rsp+130h+var_40] }
  return result;
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
  int v11; 
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
  v12 = v11 != 0;
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
  PlayerHandIndex v9; 
  PlayerHandIndex v10; 
  int *p_weaponTime; 
  PlayerHandIndex v12; 
  BgWeaponMap *weaponMap; 
  int v15; 
  const PlayerEquippedWeaponState *EquippedWeaponStateConst; 
  BOOL v17; 
  bool v18; 
  __int64 v19; 
  bool v20; 
  bool v21; 
  const Weapon *v22; 
  const dvar_t *v23; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 
  bool v30; 
  bool v31; 
  BgWeaponMap *v33; 
  __int64 v34; 
  Weapon *r_weapon; 
  __int64 p_weapFlags; 

  _RDI = ps;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12526, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12527, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && !BG_PWF_UseAlternateAsOffhand(_RDI) && !PlayerASM_IsEnabled() )
    BG_ClearPrepareAnim(pm->m_bgHandler, _RDI);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, _RDI);
  r_weapon = (Weapon *)CurrentWeaponForPlayer;
  if ( !CurrentWeaponForPlayer->weaponIdx )
  {
    _RDI->weapState[0].weaponTime = 0;
    BG_SetWeaponDelay(pm->weaponMap, _RDI, WEAPON_HAND_DEFAULT, 1, NULL);
    clientNum = _RDI->clientNum;
    _RDI->weapState[0].weaponState = 32;
    G_DebugPlayerAnimScript_Print(clientNum, "end weapon (offhand end)\n");
    goto LABEL_74;
  }
  p_weapFlags = (__int64)&_RDI->weapCommon.weapFlags;
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x1Eu) || !PM_Weapon_ShouldSwitchWeaponsAfterFire(pm->weaponMap, _RDI) )
  {
    p_weaponTime = &_RDI->weapState[0].weaponTime;
    __asm { vmovaps [rsp+0A8h+var_58], xmm6 }
    v12 = WEAPON_HAND_DEFAULT;
    __asm { vmovss  xmm6, cs:__real@43000000 }
    v34 = (BG_PlayerDualWieldingWeapon(pm->weaponMap, _RDI, CurrentWeaponForPlayer) != 0) + 1i64;
    while ( 1 )
    {
      weaponMap = pm->weaponMap;
      v15 = p_weaponTime[4];
      if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1135, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1136, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v17 = !BG_Skydive_IsSkydiving(_RDI) && BG_Ladder_IsDualWieldingAllowed(_RDI) && (EquippedWeaponStateConst = BG_GetEquippedWeaponStateConst(weaponMap, _RDI, CurrentWeaponForPlayer)) != NULL && EquippedWeaponStateConst->dualWielding;
      v18 = v17;
      if ( _RDI )
      {
        v19 = p_weapFlags;
        if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x22u) )
          goto LABEL_32;
      }
      else
      {
        v19 = 1832i64;
        p_weapFlags = 1832i64;
      }
      if ( !_RDI || !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v19, ACTIVE, 0x11u) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v19, ACTIVE, 0x1Bu) )
      {
LABEL_32:
        v20 = 0;
        goto LABEL_33;
      }
      v20 = 1;
LABEL_33:
      v21 = v18;
      v22 = r_weapon;
      *p_weaponTime = BG_QuickRaiseTime(_RDI, r_weapon, v20, v21);
      BG_SetWeaponDelay(pm->weaponMap, _RDI, v12, 0, NULL);
      p_weaponTime[4] = 32;
      if ( BG_UseFastOffhand(_RDI, pm->weaponMap) )
      {
        v23 = DCONST_DVARFLT_perk_fastOffhandMultiplier;
        if ( !DCONST_DVARFLT_perk_fastOffhandMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastOffhandMultiplier") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v23);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [r15]
          vmulss  xmm0, xmm0, dword ptr [rbx+28h]
        }
        v22 = r_weapon;
        __asm { vcvttss2si eax, xmm0 }
        *p_weaponTime = _EAX;
      }
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1422, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
        __debugbreak();
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v19, GameModeFlagValues::ms_mpValue, 0x35u) )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1426, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
          __debugbreak();
        if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12583, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
          __debugbreak();
        EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(pm->weaponMap, _RDI, v22);
        if ( !EquippedWeaponStateNonConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12586, ASSERT_TYPE_ASSERT, "(playerEquippedWeaponState)", (const char *)&queryFormat, "playerEquippedWeaponState") )
          __debugbreak();
        EquippedWeaponStateNonConst->inAltMode = 0;
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v19, ACTIVE, 0x11u);
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+744h]
          vcmpltss xmm0, xmm1, xmm6
          vblendvps xmm1, xmm1, xmm6, xmm0
          vmovss  dword ptr [rdi+744h], xmm1
        }
        PM_SetProneMovementOverride(_RDI);
        if ( !BG_HasUnderbarrelShotgun(r_weapon) )
        {
          if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v19, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v19, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)v19, ACTIVE, 0x1Bu)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12611, ASSERT_TYPE_ASSERT, "(!BG_UsingAlternate( ps ))", (const char *)&queryFormat, "!BG_UsingAlternate( ps )") )
            __debugbreak();
          v30 = BG_PlayerDualWielding(_RDI) == 1;
          v31 = BG_UsingAlternate(_RDI);
          CurrentWeaponForPlayer = r_weapon;
          *p_weaponTime = BG_AltRaiseTime(_RDI, r_weapon, v31, v30);
          if ( _RDI->pm_type < 7 )
            PM_SetNextWeaponAnim(_RDI, WEAP_ALTSWITCHTO, v12);
          goto LABEL_72;
        }
        if ( v15 == 18 )
        {
          PM_Weapon_Idle(pm, v12);
        }
        else
        {
          *p_weaponTime = 0;
          if ( _RDI->pm_type < 7 )
            PM_SetNextWeaponAnim(_RDI, WEAP_IDLE, v12);
        }
      }
      else
      {
        if ( _RDI->pm_type < 7 )
          PM_SetNextWeaponAnim(_RDI, WEAP_QUICK_RAISE, v12);
        BG_AnimScriptEvent(pm->m_bgHandler, _RDI, ANIM_ET_RAISEWEAPON, 1, 1, &pml->holdrand);
        BG_AnimScriptEvent(pm->m_bgHandler, _RDI, ANIM_ET_RAISEWEAPONQUICK, 1, 1, &pml->holdrand);
      }
      CurrentWeaponForPlayer = r_weapon;
LABEL_72:
      ++v12;
      p_weaponTime += 20;
      if ( !--v34 )
      {
        __asm { vmovaps xmm6, [rsp+0A8h+var_58] }
        goto LABEL_74;
      }
    }
  }
  PM_AddEvent(pm, EV_FORCE_WEAPON_CHANGE);
  v9 = WEAPON_HAND_DEFAULT;
  v10 = BG_PlayerDualWieldingWeapon(pm->weaponMap, _RDI, CurrentWeaponForPlayer) != 0;
  do
    PM_Weapon_Idle(pm, v9++);
  while ( v9 <= v10 );
LABEL_74:
  _RDI->throwbackGrenadeTimeLeft = 0;
  _RDI->throwbackGrenadeOwner = 2047;
  v33 = pm->weaponMap;
  if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 776, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v33->SetWeapon(v33, &_RDI->throwbackWeaponHandle, &NULL_WEAPON);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 1u);
  _RDI->pm_flags.m_flags[0] &= ~0x4000u;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, ACTIVE, 0x1Eu) )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&_RDI->otherFlags, ACTIVE, 0x1Eu);
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->weapCommon.weapFlags, ACTIVE, 0x1Eu) )
  {
    if ( r_weapon->weaponIdx )
      PM_BuildWeaponAnimArrays(pm->weaponMap, _RDI, pm->m_bgHandler);
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
  char v16; 
  unsigned int m_mapEntryId; 
  bool v18; 
  playerState_s *v19; 
  PlayerHandIndex v20; 
  int *p_weaponState; 
  int weaponState; 
  bool v23; 
  int *p_weaponTime; 
  PlayerHandIndex v25; 
  int WeaponHand; 
  __int64 v27; 
  unsigned int v28; 
  WeaponAnimNumber v36; 
  int SprintOutTime; 
  bool v38; 
  bool v39; 
  char v40; 
  char v41; 
  PlayerAnimScriptEventType v44; 
  const dvar_t *v45; 
  __int64 v56; 
  Weapon *r_weapon; 
  bool v65; 
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
      v16 = 1;
      if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11826, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
        __debugbreak();
      m_mapEntryId = ps->weapCommon.weaponHandle.m_mapEntryId;
    }
    else
    {
      m_mapEntryId = ps->weapCommon.offHandHandle.m_mapEntryId;
      v16 = 0;
    }
    v18 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80);
    BG_AddPredictableEventToPlayerstate((const entity_event_t)(v18 + 35), m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, ps);
    v19 = pm->ps;
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 11788, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v20 = WEAPON_HAND_DEFAULT;
    if ( BG_PlayerLastWeaponHandForViewWeapon(pm->weaponMap, v19) >= WEAPON_HAND_DEFAULT )
    {
      p_weaponState = &v19->weapState[0].weaponState;
      do
      {
        if ( (unsigned int)(*p_weaponState - 22) <= 2 )
          PM_Weapon_MeleeEnd(pm, pml, 0, v20, 0, 0, 0);
        ++v20;
        p_weaponState += 20;
      }
      while ( v20 <= BG_PlayerLastWeaponHandForViewWeapon(pm->weaponMap, v19) );
    }
    weaponState = ps->weapState[0].weaponState;
    v23 = (unsigned int)(weaponState - 7) <= 5 || weaponState == 50;
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
    v65 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u);
    if ( !v16 || !BG_IsAimDownSight(CurrentWeaponForPlayer, 1) )
      PM_ExitAimDownSight(pm);
    if ( CurrentWeaponForPlayer->weaponIdx )
    {
      if ( !v23 )
      {
        if ( v16 )
          BG_SetPlayerUsingOffhandUnderbarrelWeapon(ps, 1);
        v25 = WEAPON_HAND_DEFAULT;
        WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
        v27 = WeaponHand;
        if ( WeaponHand >= 0 )
        {
          __asm { vmovaps [rsp+108h+var_48], xmm6 }
          v28 = weaponState - 34;
          __asm
          {
            vmovss  xmm6, cs:__real@3ecccccd
            vmovaps [rsp+108h+var_58], xmm7
            vmovss  xmm7, cs:__real@3f19999a
            vmovaps [rsp+108h+var_68], xmm8
            vmovss  xmm8, cs:__real@3f4ccccd
            vmovaps [rsp+108h+var_78], xmm9
            vmovss  xmm9, cs:__real@3f800000
            vmovaps [rsp+108h+var_88], xmm10
            vmovss  xmm10, cs:__real@3f99999a
            vmovaps [rsp+108h+var_98], xmm11
            vmovss  xmm11, cs:__real@3a83126f
            vmovaps [rsp+108h+var_A8], xmm12
            vmovss  xmm12, cs:__real@3e4ccccd
          }
          v56 = v27 + 1;
          do
          {
            if ( v28 > 2 )
            {
              if ( v16 )
              {
                if ( BG_HasUnderbarrelShotgun(CurrentWeaponForPlayer) )
                {
                  *p_weaponTime = 0;
                }
                else
                {
                  PM_AddEvent(pm, EV_WEAPON_ALT);
                  v38 = BG_PlayerDualWielding(ps) == 1;
                  v39 = BG_UsingAlternate(ps);
                  *p_weaponTime = BG_AltDropTime(ps, CurrentWeaponForPlayer, v39, v38);
                  if ( v25 == WEAPON_HAND_DEFAULT )
                    PM_StartWeaponAnimBothHands(ps, WEAP_RELOAD_LAST);
                  if ( v65 && !*p_weaponTime )
                    *p_weaponTime = BG_QuickDropTime(ps, CurrentWeaponForPlayer, 0, 0);
                }
              }
              else
              {
                *p_weaponTime = BG_QuickDropTime(ps, CurrentWeaponForPlayer, 0, 0);
                if ( ps->pm_type < 7 )
                  PM_SetNextWeaponAnim(ps, WEAP_QUICK_DROP, v25);
                BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_DROPWEAPON, 1, 1, &pml->holdrand);
                BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_DROPWEAPONQUICK, 1, 1, &pml->holdrand);
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, dword ptr [r14]
                  vmulss  xmm1, xmm0, xmm11
                  vcomiss xmm1, xmm12
                }
                if ( v40 | v41 )
                {
                  v44 = ANIM_ET_DROPWEAPON_TIME_0_2;
                }
                else
                {
                  __asm { vcomiss xmm1, xmm6 }
                  if ( v40 | v41 )
                  {
                    v44 = ANIM_ET_DROPWEAPON_TIME_0_4;
                  }
                  else
                  {
                    __asm { vcomiss xmm1, xmm7 }
                    if ( v40 | v41 )
                    {
                      v44 = ANIM_ET_DROPWEAPON_TIME_0_6;
                    }
                    else
                    {
                      __asm { vcomiss xmm1, xmm8 }
                      if ( v40 | v41 )
                      {
                        v44 = ANIM_ET_DROPWEAPON_TIME_0_8;
                      }
                      else
                      {
                        __asm { vcomiss xmm1, xmm9 }
                        if ( v40 | v41 )
                        {
                          v44 = ANIM_ET_DROPWEAPON_TIME_1_0;
                        }
                        else
                        {
                          __asm { vcomiss xmm1, xmm10 }
                          v44 = ANIM_ET_DROPWEAPON_TIME_1_2;
                        }
                      }
                    }
                  }
                }
                BG_AnimScriptEvent(pm->m_bgHandler, ps, v44, 0, 0, &pml->holdrand);
              }
            }
            else
            {
              *p_weaponTime = 0;
              if ( v16 )
              {
                v36 = WEAP_SPRINT_OUT;
                if ( weaponState == 34 && BG_ViewModelAnimExists(ps, WEAP_ANIM_SPRINT_IN_CANCEL, v25, pm->m_bgHandler) )
                  v36 = WEAP_SPRINT_IN_CANCEL;
                SprintOutTime = GetSprintOutTime(pm->weaponMap, ps, CurrentWeaponForPlayer);
                if ( weaponState == 36 && weaponTime == SprintOutTime )
                {
                  *p_weaponTime = SprintOutTime;
                  BG_SetWeaponDelay(pm->weaponMap, ps, v25, 0, NULL);
                  if ( ps->pm_type < 7 )
                    PM_SetNextWeaponAnim(ps, v36, v25);
                }
              }
            }
            if ( BG_UseFastOffhand(ps, pm->weaponMap) )
            {
              v45 = DCONST_DVARFLT_perk_fastOffhandMultiplier;
              if ( !DCONST_DVARFLT_perk_fastOffhandMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastOffhandMultiplier") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v45);
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, dword ptr [r14]
                vmulss  xmm0, xmm0, dword ptr [rbx+28h]
                vcvttss2si eax, xmm0
              }
              *p_weaponTime = _EAX;
            }
            v28 = weaponState - 34;
            ++v25;
            p_weaponTime += 20;
            --v56;
          }
          while ( v56 );
          __asm
          {
            vmovaps xmm12, [rsp+108h+var_A8]
            vmovaps xmm11, [rsp+108h+var_98]
            vmovaps xmm10, [rsp+108h+var_88]
            vmovaps xmm9, [rsp+108h+var_78]
            vmovaps xmm8, [rsp+108h+var_68]
            vmovaps xmm7, [rsp+108h+var_58]
            vmovaps xmm6, [rsp+108h+var_48]
          }
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
  unsigned __int8 v2; 
  __int64 result; 
  const Weapon *UsedOffHandWeapon; 
  PlayerHandIndex v7; 
  const Weapon *RequestedWeapon; 
  unsigned __int16 WeaponFieldTime; 
  WeaponAnimNumber v10; 
  const Weapon *CurrentWeaponForPlayer; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 
  char v13; 
  char v14; 
  int v15; 
  int WeaponHand; 
  const dvar_t *v17; 

  v2 = 0;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12008, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12008, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = PM_Weapon_HasOffhandWeapon(pm->weaponMap, _RBX, pm->cmd.buttons);
  if ( (_DWORD)result )
  {
    if ( (pm->cmd.buttons & 0x3000) != 0 && BG_OffhandUnderbarrelInitAllowed(_RBX) && BG_OffhandIsUnderbarrelWeapon(pm->weaponMap, _RBX, pm->cmd.buttons) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12016, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
        __debugbreak();
      if ( (unsigned int)(_RBX->weapState[0].weaponState - 26) > 6 )
        BG_SetPlayerUsingOffhandUnderbarrelWeapon(_RBX, 1);
    }
    UsedOffHandWeapon = PM_Weapon_GetUsedOffHandWeapon(pm->weaponMap, _RBX);
    BG_WeaponDef(UsedOffHandWeapon, 0);
    _RBX->weapState[0].weaponState = 27;
    v7 = WEAPON_HAND_DEFAULT;
    _RBX->weapState[0].weaponTime = BG_GetWeaponFieldTime(_RBX, UsedOffHandWeapon, 0, 0, 16i64);
    BG_SetWeaponDelay(pm->weaponMap, _RBX, WEAPON_HAND_DEFAULT, 0, NULL);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 1u);
    if ( BG_HasLadderHand(_RBX) )
    {
      RequestedWeapon = PM_GetRequestedWeapon(pm);
      BG_SetCurrentWeaponForPlayer(pm->weaponMap, _RBX, RequestedWeapon, pm->m_bgHandler);
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 0x32u);
    }
    if ( BG_ThrowingBackGrenade(_RBX) )
    {
      if ( _RBX->pm_type < 7 )
        PM_SetNextWeaponAnim(_RBX, WEAP_ALTSWITCHTO, WEAPON_HAND_DEFAULT);
      _RBX->weapState[0].weaponTime = BG_AltRaiseTime(_RBX, UsedOffHandWeapon, 0, 0);
      if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) )
        BG_SetPlayerUsingOffhandUnderbarrelWeapon(_RBX, 0);
      goto LABEL_46;
    }
    if ( !BG_WeapHasDetonator(UsedOffHandWeapon, 0) || BG_WeaponAmmo(pm->weaponMap, _RBX, UsedOffHandWeapon, 0) )
    {
      if ( BG_PWF_UseAlternateAsOffhand(_RBX) )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12068, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
          __debugbreak();
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, _RBX);
        EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(pm->weaponMap, _RBX, CurrentWeaponForPlayer);
        if ( !EquippedWeaponStateNonConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 12073, ASSERT_TYPE_ASSERT, "(playerEquippedWeaponState)", (const char *)&queryFormat, "playerEquippedWeaponState") )
          __debugbreak();
        EquippedWeaponStateNonConst->inAltMode = 1;
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 0x11u);
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 1u);
        __asm
        {
          vmovss  xmm0, cs:__real@43000000
          vcomiss xmm0, dword ptr [rbx+744h]
        }
        if ( !(v13 | v14) )
          _RBX->weapCommon.aimSpreadScale = 128.0;
        PM_BuildWeaponAnimArrays(pm->weaponMap, _RBX, pm->m_bgHandler);
        PM_SetProneMovementOverride(_RBX);
        if ( BG_HasUnderbarrelShotgun(CurrentWeaponForPlayer) )
        {
          _RBX->weapState[0].weaponTime = 0;
        }
        else
        {
          v15 = BG_PlayerDualWielding(_RBX);
          _RBX->weapState[0].weaponTime = BG_AltRaiseTime(_RBX, CurrentWeaponForPlayer, 1, v15 == 1);
          WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, _RBX);
          if ( WeaponHand >= 0 )
          {
            do
            {
              if ( _RBX->pm_type < 7 )
                PM_SetNextWeaponAnim(_RBX, WEAP_ALTSWITCHTO, v7);
              ++v7;
            }
            while ( v7 <= WeaponHand );
          }
        }
        goto LABEL_46;
      }
      v2 = 1;
      if ( _RBX->pm_type < 7 )
      {
        v10 = WEAP_HOLD_FIRE;
        goto LABEL_45;
      }
    }
    else
    {
      _RBX->weapState[0].weaponState = 31;
      _RBX->weapState[0].weaponTime = BG_GetWeaponFieldTime(_RBX, UsedOffHandWeapon, 0, 0, 20i64);
      WeaponFieldTime = BG_GetWeaponFieldTime(_RBX, UsedOffHandWeapon, 0, 0, 0i64);
      BG_SetWeaponDelay(pm->weaponMap, _RBX, WEAPON_HAND_DEFAULT, WeaponFieldTime, "Detonate Delay");
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 1u);
      if ( _RBX->pm_type < 7 )
      {
        v10 = WEAP_DETONATE;
LABEL_45:
        PM_SetNextWeaponAnim(_RBX, v10, WEAPON_HAND_DEFAULT);
      }
    }
LABEL_46:
    if ( BG_UseFastOffhand(_RBX, pm->weaponMap) )
    {
      v17 = DCONST_DVARFLT_perk_fastOffhandMultiplier;
      if ( !DCONST_DVARFLT_perk_fastOffhandMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastOffhandMultiplier") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+53Ch]
        vmulss  xmm0, xmm0, dword ptr [rdi+28h]
        vcvttss2si ecx, xmm0
      }
      _RBX->weapState[0].weaponTime = _ECX;
    }
    PM_SetProneMovementOverride(_RBX);
    PM_BuildWeaponAnimArrays(pm->weaponMap, _RBX, pm->m_bgHandler);
    return v2;
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
  const WeaponDef *v8; 
  bool v9; 
  const dvar_t *v10; 
  const dvar_t *v15; 
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
    v8 = BG_WeaponDef(UsedOffHandWeapon, 0);
    v9 = BG_Weapon_OffhandDisabled(ps) != OFFHAND_DISABLE_NOT_DISABLED;
    if ( v8->holdButtonToThrow || v9 || !PM_Weapon_OffHand_DesiresHolding(pm, ps) )
    {
      BG_GetFireTime(pm->weaponMap, ps, UsedOffHandWeapon, 0, 0, ps->weapState[0].weaponShotCount, &fireTime, &weaponDelay);
      ps->weapState[0].weaponState = 30;
      ps->weapState[0].weaponTime = fireTime;
      BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, weaponDelay, "Fire Delay");
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
      if ( BG_UseFastOffhand(ps, pm->weaponMap) )
      {
        v10 = DCONST_DVARFLT_perk_fastOffhandMultiplier;
        if ( !DCONST_DVARFLT_perk_fastOffhandMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastOffhandMultiplier") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v10);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+53Ch]
          vmulss  xmm0, xmm0, dword ptr [rsi+28h]
          vcvttss2si eax, xmm0
        }
        ps->weapState[0].weaponTime = _EAX;
        v15 = DCONST_DVARFLT_perk_fastOffhandMultiplier;
        if ( !DCONST_DVARFLT_perk_fastOffhandMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastOffhandMultiplier") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+540h]
          vmulss  xmm0, xmm0, dword ptr [rsi+28h]
          vcvttss2si eax, xmm0
        }
        ps->weapState[0].weaponDelay = _EAX;
      }
      if ( ps->pm_type < 7 )
        PM_SetNextWeaponAnim(ps, WEAP_ATTACK, WEAPON_HAND_DEFAULT);
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
        PM_Weapon_FireWeaponAnimScriptEvent(pm, ps, UsedOffHandWeapon, 0, &pml->holdrand);
    }
    else if ( v8->offhandHoldIsCancelable && (pm->cmd.buttons & 0x80000) != 0 )
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
  const WeaponDef *v11; 
  const Weapon *ViewmodelWeapon; 
  OffhandDisableResult v13; 
  bool v14; 
  int v15; 
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
  v11 = BG_WeaponDef(OffHandWeaponForPlayer, 0);
  if ( !BG_PWF_UseAlternateAsOffhand(ps) )
  {
    if ( !BG_GetWeaponFieldTime(ps, OffHandWeaponForPlayer, 0, 0, 188i64) )
      goto LABEL_27;
    if ( (unsigned __int8)BG_GetWeaponFieldTime(ps, OffHandWeaponForPlayer, 0, 0, 190i64) && ps->grenadeTimeLeft > BG_GetCookingGrenadeFuseMin(OffHandWeaponForPlayer, 0, ps) && !PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, pm->m_bgHandler) )
      return;
    if ( ps->grenadeTimeLeft > BG_GetCookingGrenadeFuseMin(OffHandWeaponForPlayer, 0, ps) )
    {
LABEL_27:
      v13 = BG_Weapon_OffhandDisabled(ps);
      v14 = PM_Weapon_OffHand_DesiresHolding(pm, ps);
      v15 = BG_Weapon_OffhandDisablesHold(OffHandWeaponForPlayer, 0);
      if ( v13 == OFFHAND_DISABLE_NOT_DISABLED && (v14 || v15) && !v11->holdButtonToThrow )
      {
        if ( v11->offhandHoldIsCancelable && (pm->cmd.buttons & 0x80000) != 0 )
        {
          PM_Weapon_OffHandEnd(pm, pml, ps);
          ps->grenadeTimeLeft = 0;
          return;
        }
        if ( !v15 )
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
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_perk_fastOffhandMultiplier, "perk_fastOffhandMultiplier");
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, dword ptr [rdi+53Ch]
            vmulss  xmm0, xmm0, xmm1
            vcvttss2si eax, xmm0
          }
          ps->weapState[0].weaponTime = _EAX;
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_perk_fastOffhandMultiplier, "perk_fastOffhandMultiplier");
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, dword ptr [rdi+540h]
            vmulss  xmm0, xmm0, xmm1
            vcvttss2si eax, xmm0
          }
          ps->weapState[0].weaponDelay = _EAX;
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
  weapType_t weapType; 
  char v9; 
  bool v10; 
  const char **p_name; 
  unsigned int IndexFromName; 
  const Gesture *AssetFromIndex; 
  char v18; 
  PlayerAnimScriptEventType PowerAnimEvent; 
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
  _RBP = BG_WeaponDef(UsedOffHandWeapon, 0);
  weapType = _RBP->weapType;
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
  BG_ValidateGestureBasedOffhand(UsedOffHandWeapon, _RBP);
  v9 = PM_OffhandThrow_HandleNonAnimated(pm, pml);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 13609, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = (ps->weapCommon.offhandGestureFlags & 0x20) == 0;
  if ( v9 )
  {
    PM_Weapon_ReturnMainWeaponToIdleForGesture(pm);
  }
  else
  {
    p_name = &_RBP->gestureAnimation->name;
    if ( p_name )
    {
      IndexFromName = BG_Gesture_GetIndexFromName(*p_name);
      _RAX = BG_GesturePriority_SetupRequest(&result, pm->weaponMap, ps, pm->m_bgHandler, IndexFromName, pm->cmd.serverTime);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+0C8h+request.weaponMap], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rsp+0C8h+request.startTime], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rsp+0C8h+request.cancelTransitions], xmm0
      }
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
          v18 = 1;
        }
        else
        {
          v18 = 0;
          if ( BG_UseFastOffhand(ps, pm->weaponMap) )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_perk_fastOffhandMultiplier, "perk_fastOffhandMultiplier");
            __asm { vmovaps xmm2, xmm0 }
          }
          else
          {
            __asm { vmovss  xmm2, cs:__real@3f800000 }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+10B0h]
            vmulss  xmm1, xmm0, cs:__real@c47a0000
            vmulss  xmm2, xmm1, xmm2
            vcvttss2si eax, xmm2
          }
          ps->weapCommon.offhandGestureFireTime = pm->cmd.serverTime - _EAX;
        }
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && weapType == WEAPTYPE_SCRIPT && _RBP->scriptedAnimType )
        {
          ps->weapCommon.offhandGestureFlags |= 0x100u;
          PowerAnimEvent = BG_AnimationMP_GetPowerAnimEvent(pm);
          if ( v18 )
            PowerAnimEvent = ANIM_ET_POWER_START;
          BG_AnimScriptEvent(pm->m_bgHandler, ps, PowerAnimEvent, 0, 1, &pml->holdrand);
        }
      }
    }
    else
    {
      if ( BG_UseFastOffhand(ps, pm->weaponMap) )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_perk_fastOffhandMultiplier, "perk_fastOffhandMultiplier");
        __asm { vmovaps xmm2, xmm0 }
      }
      else
      {
        __asm { vmovss  xmm2, cs:__real@3f800000 }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+10B0h]
        vmulss  xmm1, xmm0, cs:__real@c47a0000
        vmulss  xmm2, xmm1, xmm2
        vcvttss2si eax, xmm2
      }
      ps->weapCommon.offhandGestureFireTime = pm->cmd.serverTime - _EAX;
    }
  }
  return v10;
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
      _RAX = BG_GesturePriority_SetupRequest(&result, weaponMap, ps, pmHandler, v15, v18);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+0C8h+request.weaponMap], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rsp+0C8h+request.startTime], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rsp+0C8h+request.cancelTransitions], xmm0
      }
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
  __int64 v5; 
  playerState_s *ps; 
  BgWeaponMap *weaponMap; 
  bool v11; 
  const Weapon *CurrentWeaponForPlayer; 
  char *WeaponName; 
  __int64 v14; 
  char v15; 
  char v16; 
  char *v17; 
  playerState_s *v18; 
  const Weapon *UsedOffHandWeapon; 
  bool v20; 
  bool v21; 
  int v22; 
  Weapon *v23; 
  playerState_s *v24; 
  const Weapon *v25; 
  bool v26; 
  PlayerAnimScriptEventType GrenadeEvent; 
  int v28; 
  playerState_s *v29; 
  const Weapon *v30; 
  bool v31; 
  unsigned __int64 buttons; 
  bool v33; 
  int v34; 
  playerState_s *v35; 
  bool v36; 
  Weapon *v37; 
  unsigned int *holdrand; 
  OffhandUnderbarrelModeData offhandUnderbarrelModeData; 
  int allowAnimReset; 
  Weapon *r_weapon; 
  weapFireType_t WeaponFireType; 
  __int64 v44; 
  char output[1032]; 

  v44 = -2i64;
  v5 = hand;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_Weapon_ProcessHand");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18126, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18126, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)PM_Weapon_CheckForRechamber(pm, pml, delayedAction, (PlayerHandIndex)v5) )
    goto LABEL_68;
  weaponMap = pm->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17958, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17959, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v11 = BG_UsingAlternate(ps);
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  if ( BG_WeaponDoesNotFullyAnimateViewmodelPlayerState(ps, CurrentWeaponForPlayer, v11) )
  {
    WeaponName = BG_GetWeaponName(CurrentWeaponForPlayer, output, 0x400u);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F510D0, 105i64, WeaponName);
  }
  v14 = v5;
  if ( (ps->weapState[v5].weaponTime < 0 || ps->weapState[v5].weaponDelay < 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17971, ASSERT_TYPE_ASSERT, "((ps->weapState[hand].weaponTime >= 0) && (ps->weapState[hand].weaponDelay >= 0))", (const char *)&queryFormat, "(ps->weapState[hand].weaponTime >= 0) && (ps->weapState[hand].weaponDelay >= 0)") )
    __debugbreak();
  if ( BG_GetReloadType(CurrentWeaponForPlayer, v11) == RELOAD_TYPE_MULTIPLE_PERCENTAGE )
  {
    *(double *)&_XMM0 = BG_GetMultipleReloadClipPercentage(CurrentWeaponForPlayer, v11);
    __asm { vcomiss xmm0, cs:__real@3a83126f }
    if ( v15 | v16 )
    {
      v17 = BG_GetWeaponName(CurrentWeaponForPlayer, output, 0x400u);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F51220, 106i64, v17);
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17484, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
      __debugbreak();
    v18 = pm->ps;
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 17487, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !BG_PWF_UseAlternateAsOffhand(v18) && (unsigned int)(v18->weapState[v5].weaponState - 27) <= 2 )
    {
      UsedOffHandWeapon = PM_Weapon_GetUsedOffHandWeapon(pm->weaponMap, v18);
      if ( !BG_WeapHasDetonator(UsedOffHandWeapon, 0) || BG_WeaponAmmo(pm->weaponMap, v18, UsedOffHandWeapon, 0) )
      {
        v20 = BG_UsingAlternate(v18);
        PM_Weapon_PrepareThrowAnimScriptEvent(pm, v18, UsedOffHandWeapon, v20, &pml->holdrand);
      }
      else
      {
        BG_AnimScriptEvent(pm->m_bgHandler, v18, ANIM_ET_DETONATE, 1, 1, &pml->holdrand);
      }
      v14 = v5;
    }
  }
  if ( !(_DWORD)v5 )
    PM_UpdateLeftTriggerAltFireMode(pm, WEAPON_HAND_DEFAULT);
  if ( (unsigned int)(ps->weapState[v5].weaponState - 18) > 3 )
    ps->weapState[v14].weapHandFlags &= 0xFFFFFFEB;
  v21 = PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, (PlayerHandIndex)v5, pm->m_bgHandler);
  v22 = delayedAction;
  if ( delayedAction || !ps->weapState[v5].weaponTime && ps->weapState[v5].weaponDelay == delayedAction || v21 )
  {
    if ( PM_Weapon_ProcessState(pm, pml, delayedAction, (PlayerHandIndex)v5, v21) )
    {
LABEL_67:
      PM_Weapon_SendEndFireEvent(pm, pml, (const PlayerHandIndex)v5);
      goto LABEL_68;
    }
    v23 = (Weapon *)BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    r_weapon = v23;
    if ( !v23->weaponIdx )
    {
      ps->weapState[v5].weaponState = 0;
      goto LABEL_67;
    }
    if ( BG_Weapon_CheckFriendlyFire(ps) )
      goto LABEL_67;
    if ( delayedAction )
    {
      v24 = pm->ps;
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15208, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v25 = BG_GetCurrentWeaponForPlayer(pm->weaponMap, v24);
      if ( !v25->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 15211, ASSERT_TYPE_ASSERT, "(currentWeapon.weaponIdx != 0)", (const char *)&queryFormat, "currentWeapon.weaponIdx != WP_NONE") )
        __debugbreak();
      if ( PM_Weapon_IsHoldingOffHand(pm) && !BG_Weapon_OffhandDisablesHold(v25, 0) )
      {
        BG_SetWeaponDelay(pm->weaponMap, v24, WEAPON_HAND_DEFAULT, 1, NULL);
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
        {
          v26 = BG_UsingAlternate(ps);
          if ( BG_GetWeaponType(r_weapon, v26) == WEAPTYPE_GRENADE )
          {
            GrenadeEvent = BG_AnimationMP_GetGrenadeEvent(0);
            BG_AnimScriptEvent(pm->m_bgHandler, ps, GrenadeEvent, 1, 1, &pml->holdrand);
          }
        }
        goto LABEL_67;
      }
      v22 = delayedAction;
      v23 = r_weapon;
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x10u) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
        goto LABEL_67;
LABEL_66:
      PM_Weapon_TransitionToReady(pm, pml, v22, (PlayerHandIndex)v5);
      goto LABEL_67;
    }
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2488, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (unsigned int)v5 >= 2 )
    {
      LODWORD(holdrand) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2489, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", holdrand, 2) )
        __debugbreak();
    }
    if ( BG_IsPlayerFireDisabled(ps) || (ps->weapState[v14].weapHandFlags & 1) != 0 )
      goto LABEL_66;
    if ( (unsigned int)(ps->weapState[0].weaponState - 22) <= 2 && !PM_Weapon_IsMeleeInterruptibleForFire(pm->weaponMap, ps, pm->m_bgHandler) )
      goto LABEL_67;
    if ( BG_IsTurretActive(ps) || BG_IsVehicleActive(ps) )
      goto LABEL_68;
    if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT_ADS|0x80) && BG_IsThrowingAxe(v23) && !BG_GesturePriority_AllowAxeThrow(pm) )
      goto LABEL_67;
    allowAnimReset = 1;
    offhandUnderbarrelModeData.offhandUnderbarrelTempDisabled = BG_PWF_UseAlternateAsOffhand(ps);
    PM_Weapon_TempDisableOffhandUnderbarrelMode(pm->weaponMap, ps, &offhandUnderbarrelModeData);
    v28 = 0;
    if ( offhandUnderbarrelModeData.offhandUnderbarrelTempDisabled )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18279, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
        __debugbreak();
      allowAnimReset = 0;
    }
    v29 = pm->ps;
    if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10599, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 10600, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
      __debugbreak();
    v30 = BG_GetCurrentWeaponForPlayer(pm->weaponMap, v29);
    if ( v30->weaponIdx && (v31 = BG_UsingAlternate(v29), WeaponFireType = BG_GetWeaponFireType(v30, v31), !BG_PlayerDualWielding(v29)) && WeaponFireType == WEAPON_FIRETYPE_DOUBLEBARREL_DUALTRIGGER )
    {
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&v29->weapCommon.weapFlags, ACTIVE, 0xCu);
      buttons = pm->cmd.buttons;
      if ( (buttons & 0x20000) != 0 )
      {
        if ( (buttons & 1) != 0 )
        {
          v33 = BG_UsingAlternate(v29);
          if ( BG_GetAmmoInClipForWeapon(v29, v30, v33, WEAPON_HAND_DEFAULT) > 1 )
            GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&v29->weapCommon.weapFlags, ACTIVE, 0xCu);
        }
        v34 = delayedAction;
        PM_Weapon_FireWeapon(pm, delayedAction, pml, WEAPON_HAND_DEFAULT);
        goto LABEL_105;
      }
    }
    else
    {
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&v29->weapCommon.weapFlags, ACTIVE, 0xCu);
    }
    v34 = delayedAction;
LABEL_105:
    PM_Weapon_Charge_StartChargingCheck(pm, pml, (PlayerHandIndex)v5, v34, &pml->holdrand);
    if ( ps->weapState[v5].weaponState == 15 || PM_Weapon_ShouldBeChargingOrFiringShared(pm, v34, (PlayerHandIndex)v5, allowAnimReset, allowAnimReset, 0, 0) )
    {
      PM_Weapon_CheckForPendingAltModeChange(pm, pml);
      if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && offhandUnderbarrelModeData.offhandUnderbarrelTempDisabled && ps->weapState[v5].weaponState == 16 )
        PM_Weapon_ResetShotCount(ps, (const PlayerHandIndex)v5);
      v36 = BG_UsingAlternate(ps);
      v37 = r_weapon;
      if ( BG_IsOffhandWeaponType(r_weapon, v36) )
      {
        if ( BG_IsQASWeaponFire(ps, (PlayerHandIndex)v5) )
          BG_SetQAS(ps, (PlayerHandIndex)v5, QAS_STATE_NONE);
        if ( PM_Weapon_OffHandHasAmmo(ps, pm->weaponMap, v37) )
        {
          PM_Weapon_UseOffHand(pm, pml, v37, 1);
        }
        else
        {
          LOBYTE(v28) = (_DWORD)v5 == 1;
          BG_AddPredictableEventToPlayerstate((const entity_event_t)(v28 + 16), 0, pm->cmd.serverTime, pm->weaponMap, ps);
        }
      }
      else
      {
        PM_Weapon_FireWeapon(pm, v34, pml, (PlayerHandIndex)v5);
      }
      if ( (ps->weapState[v5].weaponTime < 0 || ps->weapState[v5].weaponDelay < 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 18344, ASSERT_TYPE_ASSERT, "((ps->weapState[hand].weaponTime >= 0) && (ps->weapState[hand].weaponDelay >= 0))", (const char *)&queryFormat, "(ps->weapState[hand].weaponTime >= 0) && (ps->weapState[hand].weaponDelay >= 0)") )
        __debugbreak();
    }
    else
    {
      PM_Weapon_TransitionToReady(pm, pml, v34, (PlayerHandIndex)v5);
      PM_Weapon_SendEndFireEvent(pm, pml, (const PlayerHandIndex)v5);
      if ( pml == (pml_t *)-100i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3317, ASSERT_TYPE_ASSERT, "(holdrand)", (const char *)&queryFormat, "holdrand") )
        __debugbreak();
      v35 = pm->ps;
      if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 3320, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( PM_Weapon_Charge_DoesWantToIdleCharge(pm->weaponMap, v35) && PM_Weapon_Charge_CanStartCharging(pm, (const PlayerHandIndex)v5) )
        PM_Weapon_Charge_EnterChargeState(pm, pml, pm->weaponMap, (PlayerHandIndex)v5, &pml->holdrand);
      PM_Weapon_RestoreOffhandUnderbarrelMode(pm->weaponMap, ps, &offhandUnderbarrelModeData);
    }
    goto LABEL_68;
  }
  if ( ps->weapState[v5].weaponState != 16 )
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
  char v13; 
  int v14; 
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
      _RAX = BG_AmmoStoreForWeapon(&result, CurrentWeaponForPlayer, v5);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+0F8h+r_clipIndex.weapon.weaponIdx], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rsp+0F8h+r_clipIndex.weapon.attachmentVariationIndices+5], ymm1
      }
      if ( BG_GetAmmoInClipForClipType(ps, &r_clipIndex, v8) >= v6 )
        goto LABEL_15;
    }
    while ( ++v8 <= v9 );
  }
  if ( BG_GetAmmoNotInClip(ps, CurrentWeaponForPlayer, v5) && !BG_ReloadDisabled(CurrentWeaponForPlayer, v5) )
  {
LABEL_15:
    v13 = 0;
    goto LABEL_17;
  }
  v13 = 1;
LABEL_17:
  v14 = BG_Weapon_FiresOnWeaponSwitch(CurrentWeaponForPlayer, 0);
  HasDetonator = BG_WeapHasDetonator(CurrentWeaponForPlayer, 0);
  return (v13 || v14) && !HasDetonator;
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
  __int64 v11; 
  BgWeaponMap *weaponMap; 
  playerState_s *ps; 
  bool v14; 
  const Weapon *CurrentWeaponForPlayer; 
  int v16; 
  bool v17; 
  unsigned __int16 WeaponFieldTime; 
  char v19; 
  const dvar_t *v20; 
  int weaponTime; 
  weapClass_t WeaponClass; 
  const char *fmt; 
  int v29; 
  const char *v30; 
  float *outAdsTransOutSpeedMs; 
  int fireDelay; 
  float outNormalSpeedScale; 
  int fireTime; 
  float v44; 
  float outAdsTransInSpeedMs; 
  float outSniperSpeedScale; 

  v11 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9605, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  weaponMap = pm->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9608, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9611, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v14 = BG_UsingAlternate(ps);
  LOBYTE(outSniperSpeedScale) = BG_PlayerDualWielding(ps) == 1;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  if ( !CurrentWeaponForPlayer->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 9617, ASSERT_TYPE_ASSERT, "(currentWeapon.weaponIdx != 0)", (const char *)&queryFormat, "currentWeapon.weaponIdx != WP_NONE") )
    __debugbreak();
  BG_WeaponDef(CurrentWeaponForPlayer, v14);
  if ( !BG_IsOffhandWeaponType(CurrentWeaponForPlayer, v14) )
  {
    BG_GetADSTransTimes(weaponMap, ps, CurrentWeaponForPlayer, v14, &outAdsTransInSpeedMs, &v44);
    v19 = LOBYTE(outSniperSpeedScale);
    BG_GetFireTimeWithHand(weaponMap, ps, (const PlayerHandIndex)v11, 1, CurrentWeaponForPlayer, v14, SLOBYTE(outSniperSpeedScale), ps->weapState[v11].weaponShotCount, &fireTime, &fireDelay);
    fireDelay = BG_Gesture_GetFireDelayTime(ps, (const PlayerHandIndex)v11, v19, fireDelay, pm->cmd.serverTime);
    BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v11, fireDelay, "Fire Delay");
    ps->weapState[v11].weaponTime = fireTime;
    v20 = DCONST_DVARBOOL_bg_weaponSubtractFrameTimeRemainder;
    if ( !DCONST_DVARBOOL_bg_weaponSubtractFrameTimeRemainder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponSubtractFrameTimeRemainder") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.enabled )
    {
      weaponTime = ps->weapState[v11].weaponTime;
      if ( weaponTime > 0 )
        ps->weapState[v11].weaponTime = I_clamp(weaponTime - ps->weapState[v11].weaponFrameTimeRemainder, 1, weaponTime);
    }
    if ( !BG_IsADSFireOnly(CurrentWeaponForPlayer, v14) )
      goto LABEL_39;
    __asm
    {
      vmovss  xmm0, [rsp+0D8h+outAdsTransInSpeedMs]
      vmovaps [rsp+0D8h+var_48], xmm6
      vmovaps [rsp+0D8h+var_68], xmm8
      vxorps  xmm8, xmm8, xmm8
      vcomiss xmm0, xmm8
      vmovaps [rsp+0D8h+var_78], xmm9
      vmovss  xmm9, cs:__real@3f800000
      vdivss  xmm6, xmm9, xmm0
    }
    if ( !BG_HasPerk(&ps->perks, 0x11u) )
    {
LABEL_38:
      BG_WeaponADSFractionAffectedByReload(weaponMap, ps);
      __asm
      {
        vsubss  xmm0, xmm9, xmm0
        vmulss  xmm1, xmm0, xmm6
        vcvttss2si r9d, xmm1; weaponDelay
      }
      BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v11, _ER9, "ADS Transition Time");
      __asm
      {
        vmovaps xmm9, [rsp+0D8h+var_78]
        vmovaps xmm8, [rsp+0D8h+var_68]
        vmovaps xmm6, [rsp+0D8h+var_48]
      }
LABEL_39:
      PM_GameInterface_AddWeaponDelay(pm, (const PlayerHandIndex)v11);
      goto LABEL_40;
    }
    __asm
    {
      vmovaps [rsp+0D8h+var_58], xmm7
      vmovss  [rsp+0D8h+outNormalSpeedScale], xmm9
      vmovss  [rsp+0D8h+outSniperSpeedScale], xmm9
    }
    BG_GetQuickDrawPerkMultipliers(&outNormalSpeedScale, &outSniperSpeedScale);
    WeaponClass = BG_GetWeaponClass(CurrentWeaponForPlayer, v14);
    if ( WeaponClass == WEAPCLASS_SNIPER )
    {
      __asm
      {
        vmovss  xmm7, [rsp+0D8h+outSniperSpeedScale]
        vcomiss xmm7, xmm8
      }
      fmt = "( quickDrawSpeedScaleSniper ) = %g";
      v29 = 9678;
      v30 = "( ( quickDrawSpeedScaleSniper > 0.0f ) )";
    }
    else
    {
      __asm
      {
        vmovss  xmm7, [rsp+0D8h+outNormalSpeedScale]
        vcomiss xmm7, xmm8
      }
      if ( (unsigned int)WeaponClass > WEAPCLASS_SNIPER )
      {
LABEL_37:
        __asm
        {
          vdivss  xmm6, xmm6, xmm7
          vmovaps xmm7, [rsp+0D8h+var_58]
        }
        goto LABEL_38;
      }
      fmt = "( quickDrawSpeedScaleNormal ) = %g";
      v29 = 9683;
      v30 = "( ( quickDrawSpeedScaleNormal > 0.0f ) )";
    }
    __asm
    {
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+0D8h+outAdsTransOutSpeedMs], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", v29, ASSERT_TYPE_ASSERT, v30, fmt, outAdsTransOutSpeedMs) )
      __debugbreak();
    goto LABEL_37;
  }
  if ( delayedAction )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      PM_Weapon_FireWeaponAnimScriptEvent(pm, ps, CurrentWeaponForPlayer, v14, holdrand);
  }
  else
  {
    if ( BG_GetAmmoInClipForWeapon(ps, CurrentWeaponForPlayer, v14, (PlayerHandIndex)v11) )
    {
      v16 = BG_WeaponFuseTime(CurrentWeaponForPlayer, v14);
      v17 = ps->pm_type < 7;
      ps->grenadeTimeLeft = v16;
      if ( v17 )
        PM_SetNextWeaponAnim(ps, WEAP_HOLD_FIRE, (PlayerHandIndex)v11);
      BG_AddPredictableEventToPlayerstate(EV_PULLBACK_WEAPON, ps->weapCommon.weaponHandle.m_mapEntryId, pm->cmd.serverTime, weaponMap, ps);
    }
    WeaponFieldTime = BG_GetWeaponFieldTime(ps, CurrentWeaponForPlayer, v14, 0, 16i64);
    BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v11, WeaponFieldTime, "Hold Fire Time");
    ps->weapState[v11].weaponTime = 0;
    G_DebugPlayerAnimScript_Print(ps->clientNum, "end weapon (start fire)\n");
  }
LABEL_40:
  if ( !(_DWORD)v11 && (unsigned int)(ps->weapState[0].weaponState - 1) <= 4 && (unsigned int)(ps->weapState[1].weaponState - 1) <= 4 )
  {
    ps->weapState[1].weaponState = 0;
    ps->weapState[1].weaponTime = 0;
  }
  ps->weapState[v11].weaponState = 16;
  PM_SetProneMovementOverride(ps);
}

/*
==============
PM_Weapon_StartUseOffHand
==============
*/
void PM_Weapon_StartUseOffHand(pmove_t *pm, pml_t *pml, OffhandSlot offHandSlot)
{
  playerState_s *ps; 
  entity_event_t v12; 
  bool v13; 
  int serverTime; 
  const BgHandler *m_bgHandler; 
  BgWeaponMap *weaponMap; 
  entity_event_t v17; 
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
  _RAX = PM_Weapon_GetOffHandWeaponForSlot(pm->weaponMap, ps, offHandSlot);
  __asm
  {
    vmovups ymm2, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0A8h+offHand.weaponIdx], ymm2
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0A8h+offHand.attachmentVariationIndices+5], xmm0
    vmovsd  xmm1, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0A8h+offHand.attachmentVariationIndices+15h], xmm1
  }
  *(_DWORD *)&offHand.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  __asm { vmovd   eax, xmm2 }
  if ( (_WORD)_RAX && PM_Weapon_OffHandHasAmmo(ps, pm->weaponMap, &offHand) )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) && BG_WeaponBlocksProne(&offHand, 0) )
    {
      v12 = EV_PRONE_PREVENTS_OFFHAND_HINT;
LABEL_35:
      PM_AddEvent(pm, v12);
      return;
    }
    PM_Weapon_UseOffHand(pm, pml, &offHand, 0);
    v13 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du);
    serverTime = pm->cmd.serverTime;
    m_bgHandler = pm->m_bgHandler;
    weaponMap = pm->weaponMap;
    if ( v13 )
      Slide_PlayOrStopGesture(ps, weaponMap, m_bgHandler, serverTime, SLIDEGESTUREREQUEST_STOP);
    else
      Slide_PlayOrStopGesture(ps, weaponMap, m_bgHandler, serverTime, SLIDEGESTUREREQUEST_STOP_NOW);
    return;
  }
  if ( PM_GameInterface_SendEmptyOffhandEvent(pm, offHandSlot) )
    return;
  if ( offHandSlot == OFFHAND_SLOT_SECONDARY )
  {
    v17 = EV_EMPTY_OFFHAND_SECONDARY;
  }
  else
  {
    if ( offHandSlot != OFFHAND_SLOT_PRIMARY )
      goto LABEL_29;
    v17 = EV_EMPTY_OFFHAND_PRIMARY;
  }
  PM_AddEvent(pm, v17);
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
    v12 = EV_NO_SPECIAL_HINT;
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
  const dvar_t *v9; 
  int integer; 
  const dvar_t *v11; 
  int v12; 
  const dvar_t *v13; 
  int v14; 
  int weaponState; 
  int serverTime; 
  char v18; 
  char v19; 
  int v37; 
  int v38; 
  SwimForwardState swimForwardState; 
  int v40; 
  SwimForwardState v41; 
  __int64 v46; 
  __int64 v47; 
  vec3_t forward; 
  char v52; 

  __asm
  {
    vmovaps [rsp+0B8h+var_48], xmm7
    vmovaps [rsp+0B8h+var_58], xmm8
  }
  _RBX = DCONST_DVARFLT_player_swimForwardMinSpeed;
  if ( !DCONST_DVARFLT_player_swimForwardMinSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimForwardMinSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_swimForwardMinAngle;
  if ( !DCONST_DVARFLT_player_swimForwardMinAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimForwardMinAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm8, dword ptr [rbx+28h] }
  v9 = DCONST_DVARINT_player_swimForwardWarmupTime;
  if ( !DCONST_DVARINT_player_swimForwardWarmupTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimForwardWarmupTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  integer = v9->current.integer;
  v11 = DCONST_DVARMPINT_player_swimForwardSettleTime;
  if ( !DCONST_DVARMPINT_player_swimForwardSettleTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_swimForwardSettleTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.integer;
  v13 = DCONST_DVARINT_player_sprintForwardMinimum;
  if ( !DCONST_DVARINT_player_sprintForwardMinimum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintForwardMinimum") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v13->current.integer;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4119, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4119, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponState = _RBX->weapState[0].weaponState;
  serverTime = pm->cmd.serverTime;
  if ( (unsigned int)(weaponState - 34) > 2 )
  {
    __asm { vmovaps [rsp+0B8h+var_38], xmm6 }
    AngleVectors(&_RBX->viewangles, &forward, NULL, NULL);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+40h]
      vmulss  xmm0, xmm3, dword ptr [rsp+0B8h+forward+4]
      vmovss  xmm4, dword ptr [rbx+3Ch]
      vmulss  xmm1, xmm4, dword ptr [rsp+0B8h+forward]
      vmovss  xmm5, dword ptr [rbx+44h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rsp+0B8h+forward+8]
      vxorps  xmm0, xmm7, cs:__xmm@80000000800000008000000080000000
      vaddss  xmm6, xmm2, xmm1
      vcomiss xmm6, xmm0
    }
    if ( v18 )
    {
LABEL_42:
      v40 = 0;
      v41 = SWIMFORWARD_NONE;
LABEL_55:
      PM_Weapon_SetSwimState(_RBX, v41, v40);
      goto LABEL_56;
    }
    __asm
    {
      vmulss  xmm0, xmm3, xmm3
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm3, xmm0
    }
    if ( !(v18 | v19) )
    {
      __asm { vdivss  xmm0, xmm6, xmm3; X }
      *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
      __asm { vmulss  xmm0, xmm0, cs:__real@42652ee0 }
    }
    __asm { vcomiss xmm6, xmm7 }
    v37 = 1;
    if ( v18 | v19 )
      goto LABEL_33;
    __asm { vcomiss xmm0, xmm8 }
    if ( !v18 )
LABEL_33:
      v38 = 0;
    else
      v38 = 1;
    swimForwardState = _RBX->weapCommon.swimForwardState;
    if ( swimForwardState )
    {
      if ( swimForwardState == SWIMFORWARD_WARMUP )
      {
        if ( !v38 )
          goto LABEL_42;
        if ( serverTime - _RBX->weapCommon.forwardStateTime <= integer )
          goto LABEL_56;
LABEL_47:
        v41 = SWIMFORWARD_FORWARD;
        goto LABEL_54;
      }
      if ( swimForwardState != SWIMFORWARD_FORWARD )
      {
        if ( swimForwardState != SWIMFORWARD_SETTLE )
        {
          LODWORD(v47) = _RBX->weapCommon.forwardStateTime;
          LODWORD(v46) = _RBX->weapCommon.swimForwardState;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 4199, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown SwimForwardState: %d, forwardStateTime: %d", v46, v47) )
            __debugbreak();
          goto LABEL_56;
        }
        if ( !v38 )
        {
          if ( serverTime - _RBX->weapCommon.forwardStateTime > v12 )
            goto LABEL_42;
LABEL_56:
          __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
          goto LABEL_57;
        }
        goto LABEL_47;
      }
      if ( v38 )
        goto LABEL_56;
      v41 = SWIMFORWARD_SETTLE;
    }
    else
    {
      if ( !v38 )
        goto LABEL_56;
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x14u) && (pm->cmd.buttons & 2) == 0 && pm->cmd.forwardmove > v14 )
        v37 = 2;
      v41 = v37;
    }
LABEL_54:
    v40 = serverTime;
    goto LABEL_55;
  }
  if ( weaponState == 34 )
  {
    PM_Weapon_SetSwimState(_RBX, SWIMFORWARD_NONE, serverTime);
  }
  else if ( weaponState == 35 )
  {
    PM_Weapon_SetSwimState(_RBX, SWIMFORWARD_FORWARD, serverTime);
  }
LABEL_57:
  _R11 = &v52;
  __asm
  {
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
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
  entity_event_t v19; 
  float fmt; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
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
        LODWORD(v22) = 15;
        LODWORD(v21) = EquippedWeaponIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14085, ASSERT_TYPE_ASSERT, "(unsigned)( equipIdx ) < (unsigned)( 15 )", "equipIdx doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v21, v22) )
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
      {
        __asm
        {
          vmovss  xmm0, cs:__real@7f7fffff
          vmovss  dword ptr [rsp+498h+fmt], xmm0
        }
        PM_SetSprintRestore(pm, ps, 1, 0, fmt);
      }
      m_mapEntryId = ps->weaponsEquipped[v13].m_mapEntryId;
      if ( !m_mapEntryId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14141, ASSERT_TYPE_ASSERT, "( BgWeaponHandle::INVALID_HANDLE ) != ( eventParm )", "%s != %s\n\t%u, %u", "BgWeaponHandle::INVALID_HANDLE", "eventParm", 0i64, 0) )
        __debugbreak();
      if ( !BgWeaponMap::GetWeapon(pm->weaponMap, ps->weaponsEquipped[v13])->weaponIdx )
      {
        LODWORD(v23) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 14144, ASSERT_TYPE_ASSERT, "( testWeapon.weaponIdx ) != ( 0 )", "%s != %s\n\t%i, %i", "testWeapon.weaponIdx", "WP_NONE", v23, 0i64) )
          __debugbreak();
      }
      v19 = EV_SWITCH_AND_PREP_OFFHAND;
      if ( !v9 )
        v19 = EV_SWITCH_OFFHAND;
      BG_AddPredictableEventToPlayerstate(v19, m_mapEntryId, pm->cmd.serverTime, pm->weaponMap, ps);
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
  __int64 v6; 
  playerState_s *ps; 
  int v9; 
  int weaponStartingKickTime; 
  int v11; 
  int weaponEndingKickTime; 
  int v13; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v15; 
  int v16; 
  int nextFireTimeCounter; 
  int v18; 
  bool v19; 
  const HyperBurstInfo *HyperBurstInfo; 
  int weaponTime; 
  int weaponState; 
  int v23; 
  int v24; 
  bool v31; 
  bool v32; 
  bool v34; 
  const WeaponDef *v35; 
  int v36; 
  bool v37; 
  int v38; 
  bool v39; 
  char v40; 
  char v41; 
  weapFireType_t WeaponFireType; 
  char v43; 
  const Weapon *RequestedWeapon; 
  const Weapon *BestLadderWeapon; 
  const Weapon *v46; 
  LadderDrop DropType; 
  char v48; 
  bool v49; 
  int v50; 
  int v51; 
  PlayerAnimScriptEventType v52; 
  int weaponDelay; 
  int v54; 
  int v55; 
  unsigned int *holdrand; 
  char v57; 
  char v58; 
  bool v59; 
  int v60; 
  BOOL v61; 
  int AmmoInClipForWeapon; 
  const HyperBurstInfo *v63; 
  bool buttonIsPressedNow; 
  pml_t *pmla; 
  bool v66; 
  int v67; 

  pmla = pml;
  v6 = hand;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8142, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8142, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = 0;
  weaponStartingKickTime = ps->weapState[v6].weaponStartingKickTime;
  if ( weaponStartingKickTime > 0 )
  {
    v11 = weaponStartingKickTime - pml->msec;
    if ( v11 > 0 )
      v9 = v11;
    ps->weapState[v6].weaponStartingKickTime = v9;
    v9 = 0;
  }
  weaponEndingKickTime = ps->weapState[v6].weaponEndingKickTime;
  if ( weaponEndingKickTime > 0 )
  {
    v13 = weaponEndingKickTime - pml->msec;
    if ( v13 > 0 )
      v9 = v13;
    ps->weapState[v6].weaponEndingKickTime = v9;
  }
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v15 = PM_Weapon_UsesBurstCooldown(CurrentWeaponForPlayer, ps);
  v59 = v15;
  v16 = WeaponTimeModifiers(ps, pm->m_bgHandler, pml->msec, (PlayerHandIndex)v6, CurrentWeaponForPlayer);
  nextFireTimeCounter = ps->weapState[v6].nextFireTimeCounter;
  v60 = v16;
  ps->weapState[v6].weaponFrameTimeRemainder = 0;
  if ( nextFireTimeCounter )
  {
    v18 = nextFireTimeCounter - v16;
    if ( v18 < 0 )
      v18 = 0;
    ps->weapState[v6].nextFireTimeCounter = v18;
  }
  if ( BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) )
    v19 = ps && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Du);
  else
    v19 = BG_UsingAlternate(ps);
  v66 = v19;
  HyperBurstInfo = BG_GetHyperBurstInfo(CurrentWeaponForPlayer, v19);
  v63 = HyperBurstInfo;
  if ( !HyperBurstInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8170, ASSERT_TYPE_ASSERT, "(hyperBurstInfo)", (const char *)&queryFormat, "hyperBurstInfo") )
      __debugbreak();
    HyperBurstInfo = NULL;
  }
  weaponTime = ps->weapState[v6].weaponTime;
  if ( !weaponTime )
  {
    if ( v15 || HyperBurstInfo->enabled || !BG_IsWeaponRecoilDelayed(pm, ps) )
      PM_Weapon_ResetShotCount(ps, (const PlayerHandIndex)v6);
    goto LABEL_158;
  }
  weaponState = ps->weapState[v6].weaponState;
  v23 = v60;
  v67 = weaponState;
  if ( weaponState == 16 && v60 >= weaponTime )
    ps->weapState[v6].weaponFrameTimeRemainder = v60 - weaponTime;
  v24 = weaponTime - v60;
  ps->weapState[v6].weaponTime = v24;
  if ( v24 <= 0 )
  {
    if ( weaponState == 16 && v59 && !PM_Weapon_BurstFirePending(pm->weaponMap, ps, (PlayerHandIndex)v6) )
    {
      *(double *)&_XMM0 = BG_GetBurstFireCooldown(CurrentWeaponForPlayer, v66);
      __asm
      {
        vaddss  xmm2, xmm0, cs:__real@3f000000
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm3, xmm1, xmm2
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm3, 1
        vcvttss2si eax, xmm4
      }
      PM_Weapon_FireCooldownCommon(pm, pml, CurrentWeaponForPlayer, (const PlayerHandIndex)v6, _EAX);
      v31 = BG_UsingAlternate(ps);
      v32 = !BG_BurstFireIsAuto(CurrentWeaponForPlayer, v31);
      goto LABEL_94;
    }
    if ( BG_PWF_UseAlternateAsOffhand(ps) && weaponState == 16 )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8202, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
        __debugbreak();
      if ( PM_WeaponClipEmpty(pm->weaponMap, ps, (PlayerHandIndex)v6) && BG_GetAmmoNotInClip(ps, CurrentWeaponForPlayer, 1) )
      {
        PM_BeginWeaponReload(ps, pm, pml, (PlayerHandIndex)v6);
      }
      else
      {
        PM_Weapon_ResetShotCount(ps, (const PlayerHandIndex)v6);
        PM_Weapon_OffHandEnd(pm, pml, ps);
      }
      return 0i64;
    }
    v34 = BG_UsingAlternate(ps);
    v35 = BG_WeaponDef(CurrentWeaponForPlayer, v34);
    v36 = BG_ShotLimitReached(ps, CurrentWeaponForPlayer, (PlayerHandIndex)v6);
    v37 = BG_UsingAlternate(ps);
    v61 = BG_IsOffhandWeaponType(CurrentWeaponForPlayer, v37) && v35->holdButtonToThrow;
    buttonIsPressedNow = 0;
    v38 = PM_Weapon_CheckForFireOrChargeButton(pm, (PlayerHandIndex)v6, 0, 0, &buttonIsPressedNow);
    if ( (ps->weapState[v6].weapHandFlags & 2) != 0 && !buttonIsPressedNow )
      v36 = 1;
    if ( v66 && BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) )
      v39 = v38 == 2;
    else
      v39 = ((v38 - 1) & 0xFFFFFFFD) == 0;
    v40 = v39;
    if ( PM_UseLTriggerForDoubleBarrel(ps, CurrentWeaponForPlayer) )
    {
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0xBu) && v40 )
      {
        v36 = 0;
      }
      else if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0xBu) && (pm->cmd.buttons & 0x20000) != 0 )
      {
        v36 = 0;
      }
      if ( (pm->cmd.buttons & 0x20000) != 0 )
        v40 = 1;
    }
    AmmoInClipForWeapon = BG_GetAmmoInClipForWeapon(ps, CurrentWeaponForPlayer, v66, (PlayerHandIndex)v6);
    buttonIsPressedNow = BG_IsQASWeaponFire(ps, (PlayerHandIndex)v6);
    if ( v67 == 16 && v63->enabled )
    {
      v41 = 0;
      WeaponFireType = BG_GetWeaponFireType(CurrentWeaponForPlayer, v66);
      if ( WeaponFireType )
      {
        if ( WeaponFireType != WEAPON_FIRETYPE_SINGLESHOT && WeaponFireType != WEAPON_FIRETYPE_DOUBLEBARREL && WeaponFireType != WEAPON_FIRETYPE_DOUBLEBARREL_DUALTRIGGER )
        {
          LODWORD(holdrand) = WeaponFireType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8291, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled weapon fire type %d in PM_Weapon_WeaponTimeAdjust for a hyper burst weapon.", holdrand) )
            __debugbreak();
          goto LABEL_76;
        }
        if ( ps->weapState[v6].weaponShotCount < 2 )
          goto LABEL_76;
      }
      else
      {
        if ( v40 || buttonIsPressedNow || AmmoInClipForWeapon <= 0 || ps->weapState[v6].weaponShotCount < 2 )
          goto LABEL_76;
        v41 = 1;
      }
      PM_Weapon_FireCooldownCommon(pm, pmla, CurrentWeaponForPlayer, (const PlayerHandIndex)v6, v63->coolDownMs);
      v32 = v41 == 0;
LABEL_94:
      if ( !v32 )
        PM_Weapon_ResetShotCount(ps, (const PlayerHandIndex)v6);
      return 0i64;
    }
LABEL_76:
    LOBYTE(v67) = BG_Ladder_IsActive(ps);
    v43 = v67;
    RequestedWeapon = PM_GetRequestedWeapon(pm);
    if ( !memcmp_0(CurrentWeaponForPlayer, RequestedWeapon, 0x3Cui64) || !PM_Weapon_InValidChangeWeaponState(pm, 0) || (v57 = 1, v43) )
      v57 = 0;
    BestLadderWeapon = BG_GetBestLadderWeapon(pm->weaponMap, ps);
    v46 = BestLadderWeapon;
    if ( !(_BYTE)v67 || (v58 = 1, !memcmp_0(CurrentWeaponForPlayer, BestLadderWeapon, 0x3Cui64)) )
      v58 = 0;
    DropType = BG_Ladder_GetDropType(pm, v46, CurrentWeaponForPlayer);
    v48 = v67;
    v49 = (_BYTE)v67 && BG_Ladder_IsHandLadderDropping(DropType, (const PlayerHandIndex)v6);
    if ( !buttonIsPressedNow )
    {
      v50 = ps->weapState[v6].weaponState;
      if ( (unsigned int)(v50 - 63) > 0xC && (unsigned int)(v50 - 26) > 6 && (v36 || v61) && v40 && !v57 && !v58 && !v49 && AmmoInClipForWeapon > 0 )
      {
        ps->weapState[v6].weaponTime = 1;
        if ( (unsigned int)(v50 - 18) <= 3 )
        {
          G_DebugPlayerAnimScript_Print(ps->clientNum, "end weapon (timeout)\n");
          ps->weapState[v6].weaponTime = 0;
          PM_Weapon_ResetShotCount(ps, (const PlayerHandIndex)v6);
          v23 = v60;
          goto LABEL_159;
        }
        if ( v50 == 17 )
        {
          v51 = 0;
          v23 = v60;
          if ( ps->weapState[v6].weaponDelay - v60 > 0 )
            v51 = ps->weapState[v6].weaponDelay - v60;
          if ( v51 )
          {
            PM_Weapon_FinishRechamber(ps, CurrentWeaponForPlayer, v66, (PlayerHandIndex)v6, 0);
            v23 = v60;
          }
          goto LABEL_159;
        }
        if ( v50 == 16 || (unsigned int)(v50 - 22) <= 2 )
        {
          if ( (ps->weapState[v6].weapAnim & 0xFFFFFF7F) != 0 && ps->pm_type < 7 )
            PM_SetNextWeaponAnim(ps, WEAP_IDLE, (PlayerHandIndex)v6);
          if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) && BG_CanSprintFire(ps) )
          {
            v23 = v60;
            ps->weapState[v6].weaponState = 58;
            goto LABEL_159;
          }
          if ( BG_Ladder_CanAim(pm->weaponMap, ps) && !(_DWORD)v6 )
            goto LABEL_120;
          if ( BG_Ladder_CanClimb(ps) )
            goto LABEL_123;
        }
        else
        {
          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_ladderEnablePausedAfterFiringWeaponStateTimeout, "ladderEnablePausedAfterFiringWeaponStateTimeout") || !v48 )
            goto LABEL_128;
          if ( (BG_Ladder_CanAim(pm->weaponMap, ps) || v36) && !(_DWORD)v6 )
          {
LABEL_120:
            ps->weapState[v6].weaponState = 48;
            v52 = ANIM_ET_LADDER_AIM;
LABEL_121:
            BG_AnimScriptEvent(pm->m_bgHandler, ps, v52, 0, 1, &pmla->holdrand);
            v23 = v60;
            goto LABEL_159;
          }
          if ( BG_Ladder_CanClimb(ps) )
          {
LABEL_123:
            ps->weapState[v6].weaponState = 47;
            v52 = ANIM_ET_LADDER_CLIMB;
            goto LABEL_121;
          }
          if ( (ps->weapState[v6].weapAnim & 0xFFFFFF7F) != 0 && ps->pm_type < 7 )
            PM_SetNextWeaponAnim(ps, WEAP_IDLE, (PlayerHandIndex)v6);
        }
        ps->weapState[v6].weaponState = 0;
LABEL_128:
        v23 = v60;
        goto LABEL_159;
      }
    }
    G_DebugPlayerAnimScript_Print(ps->clientNum, "end weapon (timeout)\n");
    if ( v63->enabled )
    {
      if ( (PM_Weapon_HyperBurstFirePending(pm->weaponMap, ps, (const PlayerHandIndex)v6) || v40 || buttonIsPressedNow) && !v36 )
        goto LABEL_153;
    }
    else
    {
      if ( v40 && !buttonIsPressedNow || PM_Weapon_BurstFirePending(pm->weaponMap, ps, (PlayerHandIndex)v6) )
        goto LABEL_153;
      if ( !v59 && BG_IsWeaponRecoilDelayed(pm, ps) )
        goto LABEL_152;
    }
    PM_Weapon_ResetShotCount(ps, (const PlayerHandIndex)v6);
LABEL_152:
    ps->weapState[v6].weaponFrameTimeRemainder = 0;
LABEL_153:
    ps->weapState[v6].weaponTime = 0;
LABEL_158:
    v23 = v60;
  }
LABEL_159:
  weaponDelay = ps->weapState[v6].weaponDelay;
  if ( !weaponDelay )
    return 0i64;
  v54 = weaponDelay - v23;
  v55 = 0;
  if ( v54 > 0 )
    v55 = v54;
  BG_SetWeaponDelay(pm->weaponMap, ps, (const PlayerHandIndex)v6, v55, NULL);
  return !ps->weapState[v6].weaponDelay;
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
int WeaponTimeModifiers(playerState_s *ps, const BgHandler *pmoveHandler, int msec, PlayerHandIndex hand, const Weapon *weapon)
{
  __int64 v8; 
  bool v12; 
  int v13; 
  bool IsUsingFastReloadStateTimer; 
  int ammoInClipBeforeReload; 
  bool v16; 
  const BgWeaponMap *v17; 
  char v20; 
  char v21; 
  int result; 

  v8 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8056, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v12 = BG_UsingAlternate(ps);
  if ( (unsigned int)(ps->weapState[v8].weaponState - 18) > 3 )
    return msec;
  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  v13 = BG_PlayerDualWielding(ps);
  IsUsingFastReloadStateTimer = BG_IsUsingFastReloadStateTimer(ps, pmoveHandler, (const PlayerHandIndex)v8, weapon, v12, v13 != 0);
  ammoInClipBeforeReload = ps->weapState[v8].ammoInClipBeforeReload;
  v16 = IsUsingFastReloadStateTimer;
  v17 = pmoveHandler->GetWeaponMap(pmoveHandler);
  *(double *)&_XMM0 = BG_GetReloadTimeScale(v17, ps, weapon, v12, ammoInClipBeforeReload, v16);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps xmm6, xmm0
  }
  if ( v20 | v21 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.cpp", 8067, ASSERT_TYPE_ASSERT, "(reloadTimeScale > 0.0f)", (const char *)&queryFormat, "reloadTimeScale > 0.0f") )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r14d
    vdivss  xmm1, xmm0, xmm6
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vmovaps xmm6, [rsp+58h+var_28]
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si eax, xmm1
  }
  return result;
}

