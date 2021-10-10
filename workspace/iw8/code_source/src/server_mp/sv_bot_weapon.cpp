/*
==============
Bot_Weap_GetWeaponFOV
==============
*/

double __fastcall Bot_Weap_GetWeaponFOV(const playerState_s *ps, const Weapon *weapon)
{
  double result; 

  *(float *)&result = ?Bot_Weap_GetWeaponFOV@@YAMPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
  return result;
}

/*
==============
Bot_Weap_GetViewmodelWeapon
==============
*/

const Weapon *__fastcall Bot_Weap_GetViewmodelWeapon(const playerState_s *ps)
{
  return ?Bot_Weap_GetViewmodelWeapon@@YAAEBUWeapon@@PEBUplayerState_s@@@Z(ps);
}

/*
==============
Bot_Weap_GetMinRange
==============
*/

double __fastcall Bot_Weap_GetMinRange(const playerState_s *ps, const Weapon *weapon)
{
  double result; 

  *(float *)&result = ?Bot_Weap_GetMinRange@@YAMPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
  return result;
}

/*
==============
Bot_Weap_Name
==============
*/

void __fastcall Bot_Weap_Name(const Weapon *weapon, char *result, int maxResult)
{
  ?Bot_Weap_Name@@YAXAEBUWeapon@@PEADH@Z(weapon, result, maxResult);
}

/*
==============
Bot_Weap_WeaponDoesSplashDamage
==============
*/

bool __fastcall Bot_Weap_WeaponDoesSplashDamage(const bot_data_t *const botData)
{
  return ?Bot_Weap_WeaponDoesSplashDamage@@YA_NQEBUbot_data_t@@@Z(botData);
}

/*
==============
Bot_Weap_IsMelee
==============
*/

int __fastcall Bot_Weap_IsMelee(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_IsMelee@@YAHPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_EntityGetRangedWeapon
==============
*/

const Weapon *__fastcall Bot_Weap_EntityGetRangedWeapon(const gentity_s *ent)
{
  return ?Bot_Weap_EntityGetRangedWeapon@@YAAEBUWeapon@@PEBUgentity_s@@@Z(ent);
}

/*
==============
Bot_Weap_None
==============
*/

const Weapon *__fastcall Bot_Weap_None()
{
  return ?Bot_Weap_None@@YAAEBUWeapon@@XZ();
}

/*
==============
Bot_Weap_FirstAvailableOfType
==============
*/

int __fastcall Bot_Weap_FirstAvailableOfType(const playerState_s *ps, bot_grenade_type_t typeDesired, Weapon *offHand)
{
  return ?Bot_Weap_FirstAvailableOfType@@YAHPEBUplayerState_s@@W4bot_grenade_type_t@@PEAUWeapon@@@Z(ps, typeDesired, offHand);
}

/*
==============
Bot_Weap_GetMaxRange
==============
*/

double __fastcall Bot_Weap_GetMaxRange(const playerState_s *ps, const Weapon *weapon)
{
  double result; 

  *(float *)&result = ?Bot_Weap_GetMaxRange@@YAMPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
  return result;
}

/*
==============
Bot_Weap_IsHighRecoil
==============
*/

bool __fastcall Bot_Weap_IsHighRecoil(const bot_data_t *botData, const Weapon *r_weapon)
{
  return ?Bot_Weap_IsHighRecoil@@YA_NPEBUbot_data_t@@AEBUWeapon@@@Z(botData, r_weapon);
}

/*
==============
Bot_Weap_IsLockedOn
==============
*/

bool __fastcall Bot_Weap_IsLockedOn(const playerState_s *const ps)
{
  return ?Bot_Weap_IsLockedOn@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
Bot_Weap_IsNone
==============
*/

int __fastcall Bot_Weap_IsNone(const Weapon *weap)
{
  return ?Bot_Weap_IsNone@@YAHAEBUWeapon@@@Z(weap);
}

/*
==============
Bot_Weap_HasBestWeapForAerialEnemy
==============
*/

int __fastcall Bot_Weap_HasBestWeapForAerialEnemy(const bot_data_t *botData, const gentity_s *aerialEnemy)
{
  return ?Bot_Weap_HasBestWeapForAerialEnemy@@YAHPEBUbot_data_t@@PEBUgentity_s@@@Z(botData, aerialEnemy);
}

/*
==============
Bot_Weap_GetWeaponStateForViewWeapon
==============
*/

int __fastcall Bot_Weap_GetWeaponStateForViewWeapon(const playerState_s *const ps)
{
  return ?Bot_Weap_GetWeaponStateForViewWeapon@@YAHQEBUplayerState_s@@@Z(ps);
}

/*
==============
Bot_Weap_IsADSOnlyWeapon
==============
*/

int __fastcall Bot_Weap_IsADSOnlyWeapon(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_IsADSOnlyWeapon@@YAHPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_IsEntInGrenadeRadius
==============
*/

int __fastcall Bot_Weap_IsEntInGrenadeRadius(const gentity_s *selfEnt, const gentity_s *checkEnt, const gentity_s *grenadeEnt)
{
  return ?Bot_Weap_IsEntInGrenadeRadius@@YAHPEBUgentity_s@@00@Z(selfEnt, checkEnt, grenadeEnt);
}

/*
==============
Bot_Weap_ClearCmd
==============
*/

void __fastcall Bot_Weap_ClearCmd(usercmd_s *cmd, const playerState_s *ps)
{
  ?Bot_Weap_ClearCmd@@YAXPEAUusercmd_s@@PEBUplayerState_s@@@Z(cmd, ps);
}

/*
==============
Bot_Weap_HasLauncherThatNeedsAimAtEnemy
==============
*/

int __fastcall Bot_Weap_HasLauncherThatNeedsAimAtEnemy(const bot_data_t *botData)
{
  return ?Bot_Weap_HasLauncherThatNeedsAimAtEnemy@@YAHPEBUbot_data_t@@@Z(botData);
}

/*
==============
Bot_Weap_GrenadeButton
==============
*/

unsigned __int64 __fastcall Bot_Weap_GrenadeButton(const playerState_s *ps, const Weapon *grenadeWeap)
{
  return ?Bot_Weap_GrenadeButton@@YA_KPEBUplayerState_s@@AEBUWeapon@@@Z(ps, grenadeWeap);
}

/*
==============
Bot_Weap_IsRanged
==============
*/

int __fastcall Bot_Weap_IsRanged(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_IsRanged@@YAHPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_IsCookable
==============
*/

int __fastcall Bot_Weap_IsCookable(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_IsCookable@@YAHPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_Type
==============
*/

weapType_t __fastcall Bot_Weap_Type(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_Type@@YA?AW4weapType_t@@PEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_WeaponUsesAmmo
==============
*/

int __fastcall Bot_Weap_WeaponUsesAmmo(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_WeaponUsesAmmo@@YAHPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_HasUnderBarrelGLAmmo
==============
*/

int __fastcall Bot_Weap_HasUnderBarrelGLAmmo(const playerState_s *ps)
{
  return ?Bot_Weap_HasUnderBarrelGLAmmo@@YAHPEBUplayerState_s@@@Z(ps);
}

/*
==============
Bot_Weap_IsShortRange
==============
*/

int __fastcall Bot_Weap_IsShortRange(const playerState_s *ps)
{
  return ?Bot_Weap_IsShortRange@@YAHPEBUplayerState_s@@@Z(ps);
}

/*
==============
Bot_Weap_IsADSWeapon
==============
*/

int __fastcall Bot_Weap_IsADSWeapon(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_IsADSWeapon@@YAHPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_ADSAllowed
==============
*/

int __fastcall Bot_Weap_ADSAllowed(const bot_data_t *botData)
{
  return ?Bot_Weap_ADSAllowed@@YAHPEBUbot_data_t@@@Z(botData);
}

/*
==============
Bot_Weap_IsLauncher
==============
*/

int __fastcall Bot_Weap_IsLauncher(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_IsLauncher@@YAHPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_GetMaxRangeBase
==============
*/

double __fastcall Bot_Weap_GetMaxRangeBase(const playerState_s *ps, const Weapon *weapon)
{
  double result; 

  *(float *)&result = ?Bot_Weap_GetMaxRangeBase@@YAMPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
  return result;
}

/*
==============
Bot_Weap_IsWeapClass
==============
*/

int __fastcall Bot_Weap_IsWeapClass(const playerState_s *ps, const Weapon *weapon, weapClass_t weaponClassChecking)
{
  return ?Bot_Weap_IsWeapClass@@YAHPEBUplayerState_s@@AEBUWeapon@@W4weapClass_t@@@Z(ps, weapon, weaponClassChecking);
}

/*
==============
Bot_Weap_GrenadePick
==============
*/

int __fastcall Bot_Weap_GrenadePick(const bot_info_t *botInfo, const playerState_s *ps, Weapon *offHandOut)
{
  return ?Bot_Weap_GrenadePick@@YAHPEBUbot_info_t@@PEBUplayerState_s@@PEAUWeapon@@@Z(botInfo, ps, offHandOut);
}

/*
==============
Bot_Weap_GetMinDamage
==============
*/

int __fastcall Bot_Weap_GetMinDamage(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_GetMinDamage@@YAHPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_ProjectileInfo
==============
*/

int __fastcall Bot_Weap_ProjectileInfo(const gentity_s *launchingEnt, const playerState_s *ps, const Weapon *weapon, int *impactExplode, int *speedAim, int *speedFwd, int *speedUp)
{
  return ?Bot_Weap_ProjectileInfo@@YAHPEBUgentity_s@@PEBUplayerState_s@@AEBUWeapon@@PEAH333@Z(launchingEnt, ps, weapon, impactExplode, speedAim, speedFwd, speedUp);
}

/*
==============
Bot_Weap_FireWaitArcCos
==============
*/

double __fastcall Bot_Weap_FireWaitArcCos(const playerState_s *ps, const Weapon *weapon)
{
  double result; 

  *(float *)&result = ?Bot_Weap_FireWaitArcCos@@YAMPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
  return result;
}

/*
==============
Bot_Weap_GetMaxDamageRange
==============
*/

double __fastcall Bot_Weap_GetMaxDamageRange(const playerState_s *ps, const Weapon *weapon)
{
  double result; 

  *(float *)&result = ?Bot_Weap_GetMaxDamageRange@@YAMPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
  return result;
}

/*
==============
Bot_Weap_WeaponDef
==============
*/

const WeaponDef *__fastcall Bot_Weap_WeaponDef(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_WeaponDef@@YAPEBUWeaponDef@@PEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_IsOffhandClass
==============
*/

int __fastcall Bot_Weap_IsOffhandClass(const playerState_s *ps, const Weapon *weapon, OffhandClass offhandClassChecking)
{
  return ?Bot_Weap_IsOffhandClass@@YAHPEBUplayerState_s@@AEBUWeapon@@W4OffhandClass@@@Z(ps, weapon, offhandClassChecking);
}

/*
==============
Bot_Weap_ProjectileDirectTarget
==============
*/

int __fastcall Bot_Weap_ProjectileDirectTarget(const gentity_s *launchingEnt, const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_ProjectileDirectTarget@@YAHPEBUgentity_s@@PEBUplayerState_s@@AEBUWeapon@@@Z(launchingEnt, ps, weapon);
}

/*
==============
Bot_Weap_IsThrowable
==============
*/

int __fastcall Bot_Weap_IsThrowable(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_IsThrowable@@YAHPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_Update
==============
*/

void __fastcall Bot_Weap_Update(bot_data_t *botData, usercmd_s *cmd)
{
  ?Bot_Weap_Update@@YAXPEAUbot_data_t@@PEAUusercmd_s@@@Z(botData, cmd);
}

/*
==============
Bot_Weap_BotFacingScriptedGrenadeTarget
==============
*/

int __fastcall Bot_Weap_BotFacingScriptedGrenadeTarget(const bot_data_t *botData)
{
  return ?Bot_Weap_BotFacingScriptedGrenadeTarget@@YAHPEBUbot_data_t@@@Z(botData);
}

/*
==============
Bot_Weap_GetWeaponHandForViewWeapon
==============
*/

PlayerHandIndex __fastcall Bot_Weap_GetWeaponHandForViewWeapon(const playerState_s *const ps)
{
  return ?Bot_Weap_GetWeaponHandForViewWeapon@@YA?AW4PlayerHandIndex@@QEBUplayerState_s@@@Z(ps);
}

/*
==============
Bot_Weap_PenetrateType
==============
*/

PenetrateType __fastcall Bot_Weap_PenetrateType(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_PenetrateType@@YA?AW4PenetrateType@@PEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_EntityGetLauncher
==============
*/

const Weapon *__fastcall Bot_Weap_EntityGetLauncher(const gentity_s *ent)
{
  return ?Bot_Weap_EntityGetLauncher@@YAAEBUWeapon@@PEBUgentity_s@@@Z(ent);
}

/*
==============
Bot_Weap_Class
==============
*/

weapClass_t __fastcall Bot_Weap_Class(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_Class@@YA?AW4weapClass_t@@PEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_GrenadeInRange
==============
*/

int __fastcall Bot_Weap_GrenadeInRange(const bot_data_t *botData, const Weapon *weapon, float *outPitch, vec3_t *outLaunchVel)
{
  return ?Bot_Weap_GrenadeInRange@@YAHPEBUbot_data_t@@AEBUWeapon@@PEAMAEATvec3_t@@@Z(botData, weapon, outPitch, outLaunchVel);
}

/*
==============
Bot_Weap_HasOverlay
==============
*/

int __fastcall Bot_Weap_HasOverlay(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_HasOverlay@@YAHPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_HasWeaponWithNormalAmmo
==============
*/

int __fastcall Bot_Weap_HasWeaponWithNormalAmmo(const bot_data_t *botData)
{
  return ?Bot_Weap_HasWeaponWithNormalAmmo@@YAHPEBUbot_data_t@@@Z(botData);
}

/*
==============
Bot_Weap_WeaponForName
==============
*/

Weapon *__fastcall Bot_Weap_WeaponForName(Weapon *result, const char *name)
{
  return ?Bot_Weap_WeaponForName@@YA?AUWeapon@@PEBD@Z(result, name);
}

/*
==============
Bot_Weap_GetGrenadeForButton
==============
*/

int __fastcall Bot_Weap_GetGrenadeForButton(const bot_info_t *botInfo, bot_grenade_type_t typeDesired, Weapon *offHand)
{
  return ?Bot_Weap_GetGrenadeForButton@@YAHPEBUbot_info_t@@W4bot_grenade_type_t@@PEAUWeapon@@@Z(botInfo, typeDesired, offHand);
}

/*
==============
Bot_Weap_UpdateReload
==============
*/

int __fastcall Bot_Weap_UpdateReload(const bot_data_t *botData, usercmd_s *cmd)
{
  return ?Bot_Weap_UpdateReload@@YAHPEBUbot_data_t@@PEAUusercmd_s@@@Z(botData, cmd);
}

/*
==============
Bot_Weap_WeaponRequiresLockon
==============
*/

bool __fastcall Bot_Weap_WeaponRequiresLockon(const playerState_s *const ps, const Weapon *weapon)
{
  return ?Bot_Weap_WeaponRequiresLockon@@YA_NQEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_CanHoldBreath
==============
*/

int __fastcall Bot_Weap_CanHoldBreath(const playerState_s *ps)
{
  return ?Bot_Weap_CanHoldBreath@@YAHPEBUplayerState_s@@@Z(ps);
}

/*
==============
Bot_Weap_PlayerHasRiotShield
==============
*/

int __fastcall Bot_Weap_PlayerHasRiotShield(const playerState_s *ps)
{
  return ?Bot_Weap_PlayerHasRiotShield@@YAHPEBUplayerState_s@@@Z(ps);
}

/*
==============
Bot_Weap_IsDoingADS
==============
*/

int __fastcall Bot_Weap_IsDoingADS(const bot_data_t *botData)
{
  return ?Bot_Weap_IsDoingADS@@YAHPEBUbot_data_t@@@Z(botData);
}

/*
==============
Bot_Weap_Ammo
==============
*/

int __fastcall Bot_Weap_Ammo(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_Ammo@@YAHPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_GetIdealFiringRange
==============
*/

double __fastcall Bot_Weap_GetIdealFiringRange(const playerState_s *ps, const Weapon *weapon)
{
  double result; 

  *(float *)&result = ?Bot_Weap_GetIdealFiringRange@@YAMPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
  return result;
}

/*
==============
Bot_Weap_AmmoNotInClip
==============
*/

int __fastcall Bot_Weap_AmmoNotInClip(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_AmmoNotInClip@@YAHPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_ReloadTime
==============
*/

int __fastcall Bot_Weap_ReloadTime(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_ReloadTime@@YAHPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_GetMaxDamage
==============
*/

int __fastcall Bot_Weap_GetMaxDamage(const playerState_s *ps, const Weapon *weapon)
{
  return ?Bot_Weap_GetMaxDamage@@YAHPEBUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
Bot_Weap_WeaponHasVariableZoom
==============
*/

bool __fastcall Bot_Weap_WeaponHasVariableZoom(const bot_data_t *const botData)
{
  return ?Bot_Weap_WeaponHasVariableZoom@@YA_NQEBUbot_data_t@@@Z(botData);
}

/*
==============
Bot_Weap_HasUnderBarrelGL
==============
*/

int __fastcall Bot_Weap_HasUnderBarrelGL(const playerState_s *ps)
{
  return ?Bot_Weap_HasUnderBarrelGL@@YAHPEBUplayerState_s@@@Z(ps);
}

/*
==============
Bot_Weap_AmmoInClip
==============
*/

int __fastcall Bot_Weap_AmmoInClip(const playerState_s *ps, const Weapon *weapon, PlayerHandIndex hand)
{
  return ?Bot_Weap_AmmoInClip@@YAHPEBUplayerState_s@@AEBUWeapon@@W4PlayerHandIndex@@@Z(ps, weapon, hand);
}

/*
==============
Bot_Weap_GetEquippedTypeClass
==============
*/

const Weapon *__fastcall Bot_Weap_GetEquippedTypeClass(const playerState_s *ps, const weapInventoryType_t wInvType, unsigned int classFlags)
{
  return ?Bot_Weap_GetEquippedTypeClass@@YAAEBUWeapon@@PEBUplayerState_s@@W4weapInventoryType_t@@I@Z(ps, wInvType, classFlags);
}

/*
==============
Bot_Weap_CurrentWeapCanDamageEnemy
==============
*/

int __fastcall Bot_Weap_CurrentWeapCanDamageEnemy(const bot_data_t *botData, float maxRangeScalar)
{
  return ?Bot_Weap_CurrentWeapCanDamageEnemy@@YAHPEBUbot_data_t@@M@Z(botData, maxRangeScalar);
}

/*
==============
Bot_Weap_HasOnlyUnderbarrelGL
==============
*/

int __fastcall Bot_Weap_HasOnlyUnderbarrelGL(const bot_data_t *botData)
{
  return ?Bot_Weap_HasOnlyUnderbarrelGL@@YAHPEBUbot_data_t@@@Z(botData);
}

/*
==============
Bot_Weap_CanDamageEnemy
==============
*/

int __fastcall Bot_Weap_CanDamageEnemy(const bot_data_t *botData, const Weapon *weapon, float maxRangeScalar)
{
  return ?Bot_Weap_CanDamageEnemy@@YAHPEBUbot_data_t@@AEBUWeapon@@M@Z(botData, weapon, maxRangeScalar);
}

/*
==============
Bot_Weap_GetAbsoluteMaxRange
==============
*/

double __fastcall Bot_Weap_GetAbsoluteMaxRange(const playerState_s *ps, const Weapon *weapon, int ignoreAttachments)
{
  double result; 

  *(float *)&result = ?Bot_Weap_GetAbsoluteMaxRange@@YAMPEBUplayerState_s@@AEBUWeapon@@H@Z(ps, weapon, ignoreAttachments);
  return result;
}

/*
==============
Bot_Weap_IsWeapType
==============
*/

int __fastcall Bot_Weap_IsWeapType(const playerState_s *ps, const Weapon *weapon, weapType_t weaponTypeChecking)
{
  return ?Bot_Weap_IsWeapType@@YAHPEBUplayerState_s@@AEBUWeapon@@W4weapType_t@@@Z(ps, weapon, weaponTypeChecking);
}

/*
==============
Bot_Weap_EffectiveRange
==============
*/

void __fastcall Bot_Weap_EffectiveRange(const playerState_s *ps, const Weapon *weapon, float *min, float *max, int ignoreAttachments)
{
  ?Bot_Weap_EffectiveRange@@YAXPEBUplayerState_s@@AEBUWeapon@@PEAM2H@Z(ps, weapon, min, max, ignoreAttachments);
}

/*
==============
Bot_Weap_AvailableWeapOfTypeOrClass
==============
*/

int __fastcall Bot_Weap_AvailableWeapOfTypeOrClass(const bot_data_t *botData, unsigned int typeFlags, unsigned int classFlags)
{
  return ?Bot_Weap_AvailableWeapOfTypeOrClass@@YAHPEBUbot_data_t@@II@Z(botData, typeFlags, classFlags);
}

/*
==============
Bot_GetAdjustedMaxRange
==============
*/

float __fastcall Bot_GetAdjustedMaxRange(const playerState_s *ps, const Weapon *weapon, double currentMaxRange, int ignoreAttachments)
{
  const WeaponDef *v8; 
  float MaxRangeAdjustmentFromFOV; 

  _XMM6 = *(_OWORD *)&currentMaxRange;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1782, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1783, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weapon )") )
    __debugbreak();
  v8 = Bot_Weap_WeaponDef(ps, weapon);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( weapon->weaponIdx && Bot_Weap_Class(ps, weapon) == WEAPCLASS_ROCKETLAUNCHER )
  {
    if ( v8->bProjImpactExplode )
      __asm { vminss  xmm6, xmm6, cs:__real@45bb8000 }
    else
      __asm { vminss  xmm6, xmm6, xmm7 }
  }
  if ( BG_UsingAlternate(ps) )
  {
    _XMM0 = LODWORD(FLOAT_4000_0);
    __asm
    {
      vcmpltss xmm1, xmm0, xmm6
      vblendvps xmm0, xmm6, xmm7, xmm1
    }
    LODWORD(_XMM6) = _XMM0;
  }
  if ( !ignoreAttachments )
  {
    MaxRangeAdjustmentFromFOV = Bot_Weap_GetMaxRangeAdjustmentFromFOV(ps, weapon);
    if ( (LODWORD(MaxRangeAdjustmentFromFOV) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1805, ASSERT_TYPE_ASSERT, "( !IS_NAN( attachmentAdjustedRange ) )", (const char *)&queryFormat, "!IS_NAN( attachmentAdjustedRange )") )
      __debugbreak();
    *(float *)&_XMM6 = *(float *)&_XMM6 * MaxRangeAdjustmentFromFOV;
  }
  if ( (_XMM6 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1809, ASSERT_TYPE_ASSERT, "( !IS_NAN( maxRange ) )", (const char *)&queryFormat, "!IS_NAN( maxRange )") )
    __debugbreak();
  return *(float *)&_XMM6;
}

/*
==============
Bot_Weap_ADSAllowed
==============
*/
_BOOL8 Bot_Weap_ADSAllowed(const bot_data_t *botData)
{
  playerState_s *playerState; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1622, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  playerState = botData->botInfo.playerState;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1625, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return !BG_IsUsingOffhandGestureWeapon(playerState) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&playerState->weapCommon.weapFlags, ACTIVE, 5u);
}

/*
==============
Bot_Weap_Ammo
==============
*/
int Bot_Weap_Ammo(const playerState_s *ps, const Weapon *weapon)
{
  const dvar_t *v2; 
  bool v5; 
  GWeaponMap *Instance; 

  v2 = DVARBOOL_bot_SimulateNoAmmo;
  if ( !DVARBOOL_bot_SimulateNoAmmo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_SimulateNoAmmo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled || Bot_Weap_IsMelee(ps, weapon) )
    return 0;
  v5 = BG_UsingAlternate(ps);
  Instance = GWeaponMap::GetInstance();
  return BG_WeaponAmmo(Instance, ps, weapon, v5);
}

/*
==============
Bot_Weap_AmmoInClip
==============
*/
int Bot_Weap_AmmoInClip(const playerState_s *ps, const Weapon *weapon, PlayerHandIndex hand)
{
  const dvar_t *v3; 
  bool v7; 
  AmmoStore result; 
  AmmoStore r_clipIndex; 

  v3 = DVARBOOL_bot_SimulateNoAmmo;
  if ( !DVARBOOL_bot_SimulateNoAmmo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_SimulateNoAmmo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled || Bot_Weap_IsMelee(ps, weapon) )
    return 0;
  v7 = BG_UsingAlternate(ps);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  r_clipIndex = *BG_AmmoStoreForWeapon(&result, weapon, v7);
  return BG_GetAmmoInClipForClipType(ps, &r_clipIndex, hand);
}

/*
==============
Bot_Weap_AmmoNotInClip
==============
*/
__int64 Bot_Weap_AmmoNotInClip(const playerState_s *ps, const Weapon *weapon)
{
  const dvar_t *v2; 
  bool v5; 
  unsigned int v6; 
  int v7; 
  AmmoStore result; 
  AmmoStore r_ammo2; 

  v2 = DVARBOOL_bot_SimulateNoAmmo;
  if ( !DVARBOOL_bot_SimulateNoAmmo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_SimulateNoAmmo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled || Bot_Weap_IsMelee(ps, weapon) )
    return 0i64;
  v5 = BG_UsingAlternate(ps);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1322, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  r_ammo2 = *BG_AmmoStoreForWeapon(&result, weapon, v5);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1304, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = 0;
  v7 = 0;
  while ( !BG_IsAmmoCompatible(&ps->weapCommon.ammoNotInClip[v7].ammoType, &r_ammo2) )
  {
    if ( (unsigned int)++v7 >= 0xF )
      return 0i64;
  }
  if ( (const playerState_s *)((char *)ps + 68 * v7) != (const playerState_s *)-1912i64 )
    return (unsigned int)ps->weapCommon.ammoNotInClip[v7].ammoCount;
  return v6;
}

/*
==============
Bot_Weap_AvailableWeapOfTypeOrClass
==============
*/
__int64 Bot_Weap_AvailableWeapOfTypeOrClass(const bot_data_t *botData, unsigned int typeFlags, unsigned int classFlags)
{
  GWeaponMap *Instance; 
  playerState_s *playerState; 
  BgWeaponMap *v8; 
  unsigned int v9; 
  const Weapon *Weapon; 
  const dvar_t *v11; 
  __int64 v13; 
  __int64 v14; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 40, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  playerState = botData->botInfo.playerState;
  v8 = Instance;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 44, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = 0;
  while ( 1 )
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v9 >= 0xF )
    {
      LODWORD(v14) = 15;
      LODWORD(v13) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    Weapon = BgWeaponMap::GetWeapon(v8, playerState->weaponsEquipped[v9]);
    if ( Weapon->weaponIdx )
    {
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1105, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v11 = DVARBOOL_bg_giveAll;
      if ( !DVARBOOL_bg_giveAll || (Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll), !v11->current.enabled) )
      {
        if ( !BG_GetEquippedWeaponStateConst(v8, playerState, Weapon) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 54, ASSERT_TYPE_ASSERT, "( BG_PlayerHasWeapon( weaponMap, ps, weaponInInventory ) )", (const char *)&queryFormat, "BG_PlayerHasWeapon( weaponMap, ps, weaponInInventory )") )
          __debugbreak();
      }
      if ( (!Bot_Weap_WeaponUsesAmmo(playerState, Weapon) || Bot_Weap_Ammo(playerState, Weapon)) && (((1 << Bot_Weap_Type(playerState, Weapon)) & typeFlags) != 0 || ((1 << Bot_Weap_Class(playerState, Weapon)) & classFlags) != 0) )
        break;
    }
    if ( (int)++v9 >= 15 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
Bot_Weap_BotFacingScriptedGrenadeTarget
==============
*/
_BOOL8 Bot_Weap_BotFacingScriptedGrenadeTarget(const bot_data_t *botData)
{
  gentity_s *ent; 
  __int128 v3; 
  float v4; 
  __int128 v5; 
  float v6; 
  vec3_t forward; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1101, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( (*((_BYTE *)&botData->scriptedAgentInfo + 28228) & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1102, ASSERT_TYPE_ASSERT, "( botData->botInfo.grenadeFlags & ( 1 << 1 ) )", (const char *)&queryFormat, "botData->botInfo.grenadeFlags & BOT_FLAG_GRENADE_SCRIPTED_GRENADE") )
    __debugbreak();
  AngleVectors(&botData->botInfo.ent->r.currentAngles, &forward, NULL, NULL);
  ent = botData->botInfo.ent;
  v3 = LODWORD(botData->botInfo.scriptedGrenadeTarget.v[1]);
  forward.v[2] = 0.0;
  v5 = v3;
  v4 = *(float *)&v3 - ent->r.currentOrigin.v[1];
  v6 = botData->botInfo.scriptedGrenadeTarget.v[0] - ent->r.currentOrigin.v[0];
  *(float *)&v5 = fsqrt((float)(v4 * v4) + (float)(v6 * v6));
  _XMM3 = v5;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  return (float)((float)((float)(v4 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[1]) + (float)((float)(v6 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[0])) >= 0.995;
}

/*
==============
Bot_Weap_CanDamageEnemy
==============
*/
_BOOL8 Bot_Weap_CanDamageEnemy(const bot_data_t *botData, const Weapon *weapon, float maxRangeScalar)
{
  float v6; 
  playerState_s *playerState; 
  const Weapon *PrimaryWeapon; 
  bool isAlternate; 
  GWeaponMap *Instance; 
  bool v13; 
  float maxDamageRange; 
  float minDamageRange; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2106, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  v6 = 0.0;
  if ( maxRangeScalar <= 0.0 )
  {
    __asm { vxorpd  xmm0, xmm0, xmm0 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2107, ASSERT_TYPE_ASSERT, "( maxRangeScalar ) > ( 0.0f )", "maxRangeScalar > 0.0f\n\t%g, %g", maxRangeScalar, *(double *)&_XMM0) )
      __debugbreak();
  }
  playerState = botData->botInfo.playerState;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2111, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx )
    return 0i64;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1963, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( weapon->weaponIdx )
  {
    PrimaryWeapon = Bot_Weap_GetPrimaryWeapon(playerState, weapon);
    if ( PrimaryWeapon->weaponIdx )
    {
      isAlternate = BG_UsingAlternate(playerState);
      Instance = GWeaponMap::GetInstance();
      BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Instance, playerState, &playerState->perks, PrimaryWeapon, isAlternate, &minDamageRange, &maxDamageRange);
      if ( (LODWORD(minDamageRange) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1977, ASSERT_TYPE_ASSERT, "( !IS_NAN( minDamageRange ) )", (const char *)&queryFormat, "!IS_NAN( minDamageRange )") )
        __debugbreak();
      if ( (LODWORD(maxDamageRange) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1978, ASSERT_TYPE_ASSERT, "( !IS_NAN( maxDamageRange ) )", (const char *)&queryFormat, "!IS_NAN( maxDamageRange )") )
        __debugbreak();
      minDamageRange = Bot_GetAdjustedMaxRange(playerState, PrimaryWeapon, COERCE_DOUBLE((unsigned __int64)LODWORD(minDamageRange)), 0);
      Bot_Weap_VerifyWeaponDamageRanges(playerState, PrimaryWeapon, 0.0, minDamageRange);
      v6 = minDamageRange;
    }
  }
  if ( v6 > botData->botInfo.enemyTrack.lastDist )
    return 1i64;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( weapon->weaponIdx && Bot_Weap_Class(playerState, weapon) == WEAPCLASS_SPREAD )
    return 0i64;
  v13 = BG_UsingAlternate(playerState);
  return BG_GetMinDamage(WEAP_DMG_CALC_TYPE_DEFAULT, weapon, v13) > 0 && (float)(v6 * maxRangeScalar) > botData->botInfo.enemyTrack.lastDist;
}

/*
==============
Bot_Weap_CanHoldBreath
==============
*/
_BOOL8 Bot_Weap_CanHoldBreath(const playerState_s *ps)
{
  GWeaponMap *Instance; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2076, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  return BG_HasHoldBreathAbility(Instance, ps) && ps->holdBreathTimer < BG_HoldBreathMaxTime(ps);
}

/*
==============
Bot_Weap_Class
==============
*/
weapClass_t Bot_Weap_Class(const playerState_s *ps, const Weapon *weapon)
{
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  bool v6; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1333, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1334, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weapon )") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, ps);
  v6 = !memcmp_0(ViewmodelWeapon, weapon, 0x3Cui64) && BG_UsingAlternate(ps);
  return BG_GetWeaponClass(weapon, v6);
}

/*
==============
Bot_Weap_ClearCmd
==============
*/
void Bot_Weap_ClearCmd(usercmd_s *cmd, const playerState_s *ps)
{
  GWeaponMap *Instance; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 710, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 711, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  cmd->weapon = *BG_GetCurrentWeaponForPlayer(Instance, ps);
  cmd->offHand = NULL_WEAPON;
}

/*
==============
Bot_Weap_CurrentWeapCanDamageEnemy
==============
*/
int Bot_Weap_CurrentWeapCanDamageEnemy(const bot_data_t *botData, float maxRangeScalar)
{
  playerState_s *playerState; 
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2093, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( !botData->botInfo.playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2094, ASSERT_TYPE_ASSERT, "( botData->botInfo.playerState )", (const char *)&queryFormat, "botData->botInfo.playerState") )
    __debugbreak();
  if ( maxRangeScalar <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2095, ASSERT_TYPE_ASSERT, "( maxRangeScalar ) > ( 0.0f )", "maxRangeScalar > 0.0f\n\t%g, %g", maxRangeScalar, 0.0) )
    __debugbreak();
  playerState = botData->botInfo.playerState;
  Instance = GWeaponMap::GetInstance();
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, playerState);
  return Bot_Weap_CanDamageEnemy(botData, ViewmodelWeapon, maxRangeScalar);
}

/*
==============
Bot_Weap_EffectiveRange
==============
*/
void Bot_Weap_EffectiveRange(const playerState_s *ps, const Weapon *weapon, float *min, float *max, int ignoreAttachments)
{
  const Weapon *PrimaryWeapon; 
  bool isAlternate; 
  GWeaponMap *Instance; 
  double v12; 
  double v13; 
  int v14; 
  float AdjustedMaxRange; 
  float minDamageRange; 
  float maxDamageRange; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1819, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1820, ASSERT_TYPE_ASSERT, "( min )", (const char *)&queryFormat, "min") )
    __debugbreak();
  if ( !max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1821, ASSERT_TYPE_ASSERT, "( max )", (const char *)&queryFormat, "max") )
    __debugbreak();
  if ( weapon->weaponIdx && (PrimaryWeapon = Bot_Weap_GetPrimaryWeapon(ps, weapon), PrimaryWeapon->weaponIdx) )
  {
    isAlternate = BG_UsingAlternate(ps);
    Instance = GWeaponMap::GetInstance();
    BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Instance, ps, &ps->perks, PrimaryWeapon, isAlternate, &minDamageRange, &maxDamageRange);
    *(_QWORD *)&v13 = LODWORD(minDamageRange);
    *(float *)&v13 = minDamageRange * 0.75;
    v12 = v13;
    if ( minDamageRange != maxDamageRange )
    {
      *(float *)&v13 = (float)(*(float *)&v13 * 0.89999998) + (float)(maxDamageRange * 0.1);
      v12 = v13;
    }
    v14 = ignoreAttachments;
    *max = *(float *)&v12;
    AdjustedMaxRange = Bot_GetAdjustedMaxRange(ps, PrimaryWeapon, v12, v14);
    *max = AdjustedMaxRange;
    *min = AdjustedMaxRange * 0.25;
    Bot_Weap_VerifyWeaponDamageRanges(ps, PrimaryWeapon, AdjustedMaxRange * 0.25, *max);
  }
  else
  {
    *min = 0.0;
    *max = 0.0;
  }
}

/*
==============
Bot_Weap_EntityGetLauncher
==============
*/
const Weapon *Bot_Weap_EntityGetLauncher(const gentity_s *ent)
{
  const playerState_s *EntityPlayerStateConst; 
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  const Weapon *v5; 
  bool v6; 
  const Weapon *result; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2299, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst )
    return &NULL_WEAPON;
  Instance = GWeaponMap::GetInstance();
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, EntityPlayerStateConst);
  v5 = ViewmodelWeapon;
  if ( !ViewmodelWeapon->weaponIdx )
    return &NULL_WEAPON;
  v6 = Bot_Weap_Type(EntityPlayerStateConst, ViewmodelWeapon) == WEAPTYPE_PROJECTILE;
  result = v5;
  if ( !v6 )
    return &NULL_WEAPON;
  return result;
}

/*
==============
Bot_Weap_EntityGetRangedWeapon
==============
*/
const Weapon *Bot_Weap_EntityGetRangedWeapon(const gentity_s *ent)
{
  const playerState_s *EntityPlayerStateConst; 
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  const Weapon *v5; 
  bool v6; 
  const Weapon *result; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2278, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst )
    return &NULL_WEAPON;
  Instance = GWeaponMap::GetInstance();
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, EntityPlayerStateConst);
  v5 = ViewmodelWeapon;
  if ( !ViewmodelWeapon->weaponIdx )
    return &NULL_WEAPON;
  v6 = Bot_Weap_IsRanged(EntityPlayerStateConst, ViewmodelWeapon) == 0;
  result = v5;
  if ( v6 )
    return &NULL_WEAPON;
  return result;
}

/*
==============
Bot_Weap_FireWaitArcCos
==============
*/
float Bot_Weap_FireWaitArcCos(const playerState_s *ps, const Weapon *weapon)
{
  float result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1501, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx )
    return FLOAT_N1_0;
  switch ( Bot_Weap_Class(ps, weapon) )
  {
    case WEAPCLASS_RIFLE:
    case WEAPCLASS_PISTOL:
    case WEAPCLASS_ROCKETLAUNCHER:
      result = FLOAT_0_97000003;
      break;
    case WEAPCLASS_SNIPER:
      result = FLOAT_0_98000002;
      break;
    case WEAPCLASS_MG:
    case WEAPCLASS_TURRET:
      result = FLOAT_0_87;
      break;
    case WEAPCLASS_SMG:
      result = FLOAT_0_94;
      break;
    default:
      return FLOAT_N1_0;
  }
  return result;
}

/*
==============
Bot_Weap_FirstAvailableOfType
==============
*/
_BOOL8 Bot_Weap_FirstAvailableOfType(const playerState_s *ps, bot_grenade_type_t typeDesired, Weapon *offHand)
{
  GWeaponMap *Instance; 
  int v7; 
  __m256i v8; 
  __int128 v9; 
  double v10; 
  OffhandSlot v11; 
  const Weapon *OffHandWeaponForSlot; 

  Instance = GWeaponMap::GetInstance();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 939, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)(typeDesired - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 940, ASSERT_TYPE_ASSERT, "( (typeDesired == BOT_GRENADE_TYPE_LETHAL) || (typeDesired == BOT_GRENADE_TYPE_TACTICAL) )", (const char *)&queryFormat, "(typeDesired == BOT_GRENADE_TYPE_LETHAL) || (typeDesired == BOT_GRENADE_TYPE_TACTICAL)") )
    __debugbreak();
  if ( !offHand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 941, ASSERT_TYPE_ASSERT, "( offHand )", (const char *)&queryFormat, "offHand") )
    __debugbreak();
  v7 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  v8 = *(__m256i *)&NULL_WEAPON.weaponIdx;
  v9 = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
  v10 = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
  if ( typeDesired == BOT_GRENADE_TYPE_LETHAL )
  {
    v11 = OFFHAND_SLOT_PRIMARY;
LABEL_14:
    OffHandWeaponForSlot = PM_Weapon_GetOffHandWeaponForSlot(Instance, ps, v11);
    v8 = *(__m256i *)&OffHandWeaponForSlot->weaponIdx;
    v9 = *(_OWORD *)&OffHandWeaponForSlot->attachmentVariationIndices[5];
    v10 = *(double *)&OffHandWeaponForSlot->attachmentVariationIndices[21];
    v7 = *(_DWORD *)&OffHandWeaponForSlot->weaponCamo;
    goto LABEL_15;
  }
  if ( typeDesired == BOT_GRENADE_TYPE_TACTICAL )
  {
    v11 = OFFHAND_SLOT_SECONDARY;
    goto LABEL_14;
  }
LABEL_15:
  *(__m256i *)&offHand->weaponIdx = v8;
  *(_OWORD *)&offHand->attachmentVariationIndices[5] = v9;
  *(double *)&offHand->attachmentVariationIndices[21] = v10;
  *(_DWORD *)&offHand->weaponCamo = v7;
  return offHand->weaponIdx != 0;
}

/*
==============
Bot_Weap_GetAbsoluteMaxRange
==============
*/
float Bot_Weap_GetAbsoluteMaxRange(const playerState_s *ps, const Weapon *weapon, int ignoreAttachments)
{
  const Weapon *PrimaryWeapon; 
  bool isAlternate; 
  GWeaponMap *Instance; 
  float minDamageRange; 
  float v11; 
  float maxDamageRange; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1963, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx )
    return 0.0;
  PrimaryWeapon = Bot_Weap_GetPrimaryWeapon(ps, weapon);
  if ( !PrimaryWeapon->weaponIdx )
    return 0.0;
  isAlternate = BG_UsingAlternate(ps);
  Instance = GWeaponMap::GetInstance();
  BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Instance, ps, &ps->perks, PrimaryWeapon, isAlternate, &minDamageRange, &maxDamageRange);
  v11 = minDamageRange;
  if ( (LODWORD(minDamageRange) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1977, ASSERT_TYPE_ASSERT, "( !IS_NAN( minDamageRange ) )", (const char *)&queryFormat, "!IS_NAN( minDamageRange )") )
    __debugbreak();
  v11 = maxDamageRange;
  if ( (LODWORD(maxDamageRange) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1978, ASSERT_TYPE_ASSERT, "( !IS_NAN( maxDamageRange ) )", (const char *)&queryFormat, "!IS_NAN( maxDamageRange )") )
    __debugbreak();
  minDamageRange = Bot_GetAdjustedMaxRange(ps, PrimaryWeapon, COERCE_DOUBLE((unsigned __int64)LODWORD(minDamageRange)), ignoreAttachments);
  Bot_Weap_VerifyWeaponDamageRanges(ps, PrimaryWeapon, 0.0, minDamageRange);
  return minDamageRange;
}

/*
==============
Bot_Weap_GetEquippedTypeClass
==============
*/
Weapon *Bot_Weap_GetEquippedTypeClass(const playerState_s *ps, const weapInventoryType_t wInvType, unsigned int classFlags)
{
  GWeaponMap *Instance; 
  unsigned int v7; 
  const Weapon *Weapon; 
  const dvar_t *v9; 
  __int64 v11; 
  __int64 v12; 

  Instance = GWeaponMap::GetInstance();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2381, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v7 = 0;
  while ( 1 )
  {
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v7 >= 0xF )
    {
      LODWORD(v12) = 15;
      LODWORD(v11) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    Weapon = BgWeaponMap::GetWeapon(Instance, ps->weaponsEquipped[v7]);
    if ( Weapon->weaponIdx )
    {
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1105, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v9 = DVARBOOL_bg_giveAll;
      if ( !DVARBOOL_bg_giveAll || (Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll), !v9->current.enabled) )
      {
        if ( !BG_GetEquippedWeaponStateConst(Instance, ps, Weapon) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2389, ASSERT_TYPE_ASSERT, "( BG_PlayerHasWeapon( weaponMap, ps, weaponInInventory ) )", (const char *)&queryFormat, "BG_PlayerHasWeapon( weaponMap, ps, weaponInInventory )") )
          __debugbreak();
      }
      if ( Bot_Weap_WeaponDef(ps, Weapon)->inventoryType == wInvType && ((1 << Bot_Weap_Class(ps, Weapon)) & classFlags) != 0 )
        break;
    }
    if ( (int)++v7 >= 15 )
      return &NULL_WEAPON;
  }
  return (Weapon *)Weapon;
}

/*
==============
Bot_Weap_GetGrenadeForButton
==============
*/
_BOOL8 Bot_Weap_GetGrenadeForButton(const bot_info_t *botInfo, bot_grenade_type_t typeDesired, Weapon *offHand)
{
  playerState_s *playerState; 
  GWeaponMap *Instance; 
  int v8; 
  __m256i v9; 
  __int128 v10; 
  double v11; 
  OffhandSlot v12; 
  const Weapon *OffHandWeaponForSlot; 
  playerState_s *v14; 
  int v15; 
  const WeaponDef *v16; 
  OffhandClass offhandClass; 
  int v18; 
  int v19; 
  playerState_s *v20; 
  BOOL v21; 

  if ( !botInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 965, ASSERT_TYPE_ASSERT, "( botInfo )", (const char *)&queryFormat, "botInfo") )
    __debugbreak();
  if ( !botInfo->playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 966, ASSERT_TYPE_ASSERT, "( botInfo->playerState )", (const char *)&queryFormat, "botInfo->playerState") )
    __debugbreak();
  if ( (unsigned int)(typeDesired - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 967, ASSERT_TYPE_ASSERT, "( (typeDesired == BOT_GRENADE_TYPE_LETHAL) || (typeDesired == BOT_GRENADE_TYPE_TACTICAL) )", (const char *)&queryFormat, "(typeDesired == BOT_GRENADE_TYPE_LETHAL) || (typeDesired == BOT_GRENADE_TYPE_TACTICAL)") )
    __debugbreak();
  if ( !offHand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 968, ASSERT_TYPE_ASSERT, "( offHand )", (const char *)&queryFormat, "offHand") )
    __debugbreak();
  playerState = botInfo->playerState;
  Instance = GWeaponMap::GetInstance();
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 939, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)(typeDesired - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 940, ASSERT_TYPE_ASSERT, "( (typeDesired == BOT_GRENADE_TYPE_LETHAL) || (typeDesired == BOT_GRENADE_TYPE_TACTICAL) )", (const char *)&queryFormat, "(typeDesired == BOT_GRENADE_TYPE_LETHAL) || (typeDesired == BOT_GRENADE_TYPE_TACTICAL)") )
    __debugbreak();
  if ( !offHand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 941, ASSERT_TYPE_ASSERT, "( offHand )", (const char *)&queryFormat, "offHand") )
    __debugbreak();
  v8 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  v9 = *(__m256i *)&NULL_WEAPON.weaponIdx;
  v10 = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
  v11 = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
  if ( typeDesired == BOT_GRENADE_TYPE_LETHAL )
  {
    v12 = OFFHAND_SLOT_PRIMARY;
LABEL_26:
    OffHandWeaponForSlot = PM_Weapon_GetOffHandWeaponForSlot(Instance, playerState, v12);
    v9 = *(__m256i *)&OffHandWeaponForSlot->weaponIdx;
    v10 = *(_OWORD *)&OffHandWeaponForSlot->attachmentVariationIndices[5];
    v11 = *(double *)&OffHandWeaponForSlot->attachmentVariationIndices[21];
    v8 = *(_DWORD *)&OffHandWeaponForSlot->weaponCamo;
    goto LABEL_27;
  }
  if ( typeDesired == BOT_GRENADE_TYPE_TACTICAL )
  {
    v12 = OFFHAND_SLOT_SECONDARY;
    goto LABEL_26;
  }
LABEL_27:
  *(__m256i *)&offHand->weaponIdx = v9;
  *(_OWORD *)&offHand->attachmentVariationIndices[5] = v10;
  *(double *)&offHand->attachmentVariationIndices[21] = v11;
  *(_DWORD *)&offHand->weaponCamo = v8;
  if ( !offHand->weaponIdx )
    return 0i64;
  v14 = botInfo->playerState;
  v15 = botInfo->grenadeFlags & 2;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 798, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !offHand->weaponIdx )
    goto LABEL_44;
  v16 = Bot_Weap_WeaponDef(v14, offHand);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( offHand->weaponIdx && Bot_Weap_Class(v14, offHand) == WEAPCLASS_GRENADE )
    goto LABEL_42;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( offHand->weaponIdx && Bot_Weap_Class(v14, offHand) == WEAPCLASS_THROWINGKNIFE )
  {
LABEL_42:
    offhandClass = v16->offhandClass;
    v18 = 0;
    v19 = 0;
    if ( (offhandClass & 0xFFFFFFF7) != 0 )
      LOBYTE(v19) = offhandClass != OFFHAND_CLASS_OTHER;
  }
  else
  {
LABEL_44:
    v18 = 0;
    v19 = 0;
  }
  v20 = botInfo->playerState;
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1367, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v21 = offHand->weaponIdx && Bot_Weap_WeaponDef(v20, offHand)->offhandClass == OFFHAND_CLASS_THROWINGKNIFE;
  if ( v19 && !v21 )
    v18 = 1;
  return Bot_Weap_Ammo(botInfo->playerState, offHand) > 0 && (v18 || v15);
}

/*
==============
Bot_Weap_GetIdealFiringRange
==============
*/
float Bot_Weap_GetIdealFiringRange(const playerState_s *ps, const Weapon *weapon)
{
  const Weapon *PrimaryWeapon; 
  bool isAlternate; 
  GWeaponMap *Instance; 
  float v8; 
  float v9; 
  const Weapon *v10; 
  bool v11; 
  GWeaponMap *v12; 
  double v13; 
  double v14; 
  float AdjustedMaxRange; 
  float maxDamageRange; 
  float minDamageRange; 
  float v18; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2021, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx )
    return 0.0;
  PrimaryWeapon = Bot_Weap_GetPrimaryWeapon(ps, weapon);
  if ( !PrimaryWeapon->weaponIdx )
    return 0.0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PrimaryWeapon->weaponIdx && Bot_Weap_Class(ps, PrimaryWeapon) == WEAPCLASS_SPREAD )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1998, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( PrimaryWeapon->weaponIdx )
    {
      isAlternate = BG_UsingAlternate(ps);
      Instance = GWeaponMap::GetInstance();
      BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Instance, ps, &ps->perks, PrimaryWeapon, isAlternate, &minDamageRange, &maxDamageRange);
      v18 = minDamageRange;
      if ( (LODWORD(minDamageRange) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2005, ASSERT_TYPE_ASSERT, "( !IS_NAN( minDamageRange ) )", (const char *)&queryFormat, "!IS_NAN( minDamageRange )") )
        __debugbreak();
      v18 = maxDamageRange;
      if ( (LODWORD(maxDamageRange) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2006, ASSERT_TYPE_ASSERT, "( !IS_NAN( maxDamageRange ) )", (const char *)&queryFormat, "!IS_NAN( maxDamageRange )") )
        __debugbreak();
      return maxDamageRange * 0.89999998;
    }
    else
    {
      return 0.0 * 0.89999998;
    }
  }
  else
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1819, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( PrimaryWeapon->weaponIdx && (v10 = Bot_Weap_GetPrimaryWeapon(ps, PrimaryWeapon), v10->weaponIdx) )
    {
      v11 = BG_UsingAlternate(ps);
      v12 = GWeaponMap::GetInstance();
      BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, v12, ps, &ps->perks, v10, v11, &maxDamageRange, &minDamageRange);
      *(_QWORD *)&v14 = LODWORD(maxDamageRange);
      *(float *)&v14 = maxDamageRange * 0.75;
      v13 = v14;
      if ( maxDamageRange != minDamageRange )
      {
        *(float *)&v14 = (float)(*(float *)&v14 * 0.89999998) + (float)(minDamageRange * 0.1);
        v13 = v14;
      }
      AdjustedMaxRange = Bot_GetAdjustedMaxRange(ps, v10, v13, 0);
      v9 = AdjustedMaxRange * 0.25;
      v8 = AdjustedMaxRange;
      Bot_Weap_VerifyWeaponDamageRanges(ps, v10, AdjustedMaxRange * 0.25, AdjustedMaxRange);
    }
    else
    {
      v8 = 0.0;
      v9 = 0.0;
    }
    return (float)((float)(v8 - v9) * 0.5) + v9;
  }
}

/*
==============
Bot_Weap_GetMaxDamage
==============
*/
int Bot_Weap_GetMaxDamage(const playerState_s *ps, const Weapon *weapon)
{
  bool v3; 

  v3 = BG_UsingAlternate(ps);
  return BG_GetDamage(WEAP_DMG_CALC_TYPE_DEFAULT, weapon, v3);
}

/*
==============
Bot_Weap_GetMaxDamageRange
==============
*/
float Bot_Weap_GetMaxDamageRange(const playerState_s *ps, const Weapon *weapon)
{
  bool isAlternate; 
  GWeaponMap *Instance; 
  float maxDamageRange; 
  float minDamageRange; 
  float v9; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1998, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx )
    return 0.0;
  isAlternate = BG_UsingAlternate(ps);
  Instance = GWeaponMap::GetInstance();
  BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Instance, ps, &ps->perks, weapon, isAlternate, &minDamageRange, &maxDamageRange);
  v9 = minDamageRange;
  if ( (LODWORD(minDamageRange) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2005, ASSERT_TYPE_ASSERT, "( !IS_NAN( minDamageRange ) )", (const char *)&queryFormat, "!IS_NAN( minDamageRange )") )
    __debugbreak();
  v9 = maxDamageRange;
  if ( (LODWORD(maxDamageRange) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2006, ASSERT_TYPE_ASSERT, "( !IS_NAN( maxDamageRange ) )", (const char *)&queryFormat, "!IS_NAN( maxDamageRange )") )
    __debugbreak();
  return maxDamageRange;
}

/*
==============
Bot_Weap_GetMaxRange
==============
*/
float Bot_Weap_GetMaxRange(const playerState_s *ps, const Weapon *weapon)
{
  const Weapon *PrimaryWeapon; 
  bool isAlternate; 
  GWeaponMap *Instance; 
  double v7; 
  double v8; 
  float result; 
  float minDamageRange; 
  float maxDamageRange; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1918, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1819, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( !weapon->weaponIdx )
    return 0.0;
  PrimaryWeapon = Bot_Weap_GetPrimaryWeapon(ps, weapon);
  if ( !PrimaryWeapon->weaponIdx )
    return 0.0;
  isAlternate = BG_UsingAlternate(ps);
  Instance = GWeaponMap::GetInstance();
  BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Instance, ps, &ps->perks, PrimaryWeapon, isAlternate, &minDamageRange, &maxDamageRange);
  *(_QWORD *)&v8 = LODWORD(minDamageRange);
  *(float *)&v8 = minDamageRange * 0.75;
  v7 = v8;
  if ( minDamageRange != maxDamageRange )
  {
    *(float *)&v8 = (float)(*(float *)&v8 * 0.89999998) + (float)(maxDamageRange * 0.1);
    v7 = v8;
  }
  result = Bot_GetAdjustedMaxRange(ps, PrimaryWeapon, v7, 0);
  Bot_Weap_VerifyWeaponDamageRanges(ps, PrimaryWeapon, result * 0.25, result);
  return result;
}

/*
==============
Bot_Weap_GetMaxRangeAdjustmentFromFOV
==============
*/
float Bot_Weap_GetMaxRangeAdjustmentFromFOV(const playerState_s *ps, const Weapon *weapon)
{
  __int128 v2; 
  float turretFovADS; 
  GWeaponMap *Instance; 
  BgHybridScopeFraction *p_hybridScopeFractionInfo; 
  bool v11; 
  GWeaponMap *v12; 
  __int64 ADSZoomLevel; 
  bool v14; 
  const WeaponCompleteDef *v15; 
  float v16; 
  bool v17; 
  GHandler *Handler; 
  double v19; 
  BgHybridScopeFraction hybridScopeFractionInfo; 
  __int64 v21; 
  BgAdsZoomInfo outZoomInfo; 
  char output[256]; 
  __int128 v24; 
  __int128 v25; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1722, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1723, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weapon )") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( weapon->weaponIdx && Bot_Weap_Class(ps, weapon) == WEAPCLASS_SNIPER )
    return FLOAT_1_0;
  v25 = v2;
  v24 = _XMM10;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vxorpd  xmm10, xmm10, xmm10 }
  if ( weapon->weaponIdx && Bot_Weap_Class(ps, weapon) == WEAPCLASS_TURRET )
  {
    turretFovADS = Bot_Weap_WeaponDef(ps, weapon)->turretFovADS;
    if ( turretFovADS > 0.0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1738, ASSERT_TYPE_ASSERT, "( baseFOV ) > ( 0 )", "baseFOV > 0\n\t%g, %g", turretFovADS, *(double *)&_XMM10) )
      goto LABEL_27;
  }
  else
  {
    Instance = GWeaponMap::GetInstance();
    memset(&outZoomInfo, 0, sizeof(outZoomInfo));
    if ( BG_IsUsingHybridScope(Instance, ps, weapon) )
    {
      hybridScopeFractionInfo.fraction = FLOAT_1_0;
      hybridScopeFractionInfo.increasing = 1;
      p_hybridScopeFractionInfo = &hybridScopeFractionInfo;
    }
    else
    {
      v21 = 0i64;
      p_hybridScopeFractionInfo = (BgHybridScopeFraction *)&v21;
    }
    v11 = BG_UsingAlternate(ps);
    BG_GetADSZoomInfo(Instance, weapon, v11, p_hybridScopeFractionInfo, &outZoomInfo);
    v12 = GWeaponMap::GetInstance();
    ADSZoomLevel = BG_GetADSZoomLevel(v12, ps, weapon, outZoomInfo.zoomCount);
    v14 = BG_UsingAlternate(ps);
    v15 = BG_WeaponCompleteDef(weapon, v14);
    turretFovADS = v15->zoomSettings.scene.adsZoomFov[ADSZoomLevel];
    if ( turretFovADS > 0.0 )
      goto LABEL_27;
    BG_GetWeaponName(weapon, output, 0x100u);
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1764, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "baseFov for weapon %s needs to be greater than 0. Current adsZoomLevel for weapon: %i, adsZoomFov[%f, %f, %f]", output, ADSZoomLevel, v15->zoomSettings.scene.adsZoomFov[0], v15->zoomSettings.scene.adsZoomFov[1], v15->zoomSettings.scene.adsZoomFov[2]) )
      goto LABEL_27;
  }
  __debugbreak();
LABEL_27:
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1642, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( weapon->weaponIdx && Bot_Weap_Class(ps, weapon) == WEAPCLASS_TURRET )
  {
    v16 = Bot_Weap_WeaponDef(ps, weapon)->turretFovADS;
  }
  else
  {
    v17 = BG_UsingAlternate(ps);
    Handler = GHandler::getHandler();
    v19 = BG_ADSZoomFov(Handler, ps, weapon, v17);
    v16 = *(float *)&v19;
  }
  if ( v16 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1771, ASSERT_TYPE_ASSERT, "( adjustedFOV ) > ( 0 )", "adjustedFOV > 0\n\t%g, %g", v16, *(double *)&_XMM10) )
    __debugbreak();
  return (float)((float)((float)(turretFovADS / v16) - 1.0) * 0.40000001) + 1.0;
}

/*
==============
Bot_Weap_GetMaxRangeBase
==============
*/
float Bot_Weap_GetMaxRangeBase(const playerState_s *ps, const Weapon *weapon)
{
  const Weapon *PrimaryWeapon; 
  bool isAlternate; 
  GWeaponMap *Instance; 
  double v7; 
  double v8; 
  float result; 
  float minDamageRange; 
  float maxDamageRange; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1933, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1819, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( !weapon->weaponIdx )
    return 0.0;
  PrimaryWeapon = Bot_Weap_GetPrimaryWeapon(ps, weapon);
  if ( !PrimaryWeapon->weaponIdx )
    return 0.0;
  isAlternate = BG_UsingAlternate(ps);
  Instance = GWeaponMap::GetInstance();
  BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Instance, ps, &ps->perks, PrimaryWeapon, isAlternate, &minDamageRange, &maxDamageRange);
  *(_QWORD *)&v8 = LODWORD(minDamageRange);
  *(float *)&v8 = minDamageRange * 0.75;
  v7 = v8;
  if ( minDamageRange != maxDamageRange )
  {
    *(float *)&v8 = (float)(*(float *)&v8 * 0.89999998) + (float)(maxDamageRange * 0.1);
    v7 = v8;
  }
  result = Bot_GetAdjustedMaxRange(ps, PrimaryWeapon, v7, 1);
  Bot_Weap_VerifyWeaponDamageRanges(ps, PrimaryWeapon, result * 0.25, result);
  return result;
}

/*
==============
Bot_Weap_GetMinDamage
==============
*/
int Bot_Weap_GetMinDamage(const playerState_s *ps, const Weapon *weapon)
{
  bool v3; 

  v3 = BG_UsingAlternate(ps);
  return BG_GetMinDamage(WEAP_DMG_CALC_TYPE_DEFAULT, weapon, v3);
}

/*
==============
Bot_Weap_GetMinRange
==============
*/
float Bot_Weap_GetMinRange(const playerState_s *ps, const Weapon *weapon)
{
  const Weapon *PrimaryWeapon; 
  bool isAlternate; 
  GWeaponMap *Instance; 
  double v7; 
  double v8; 
  float AdjustedMaxRange; 
  float minDamageRange; 
  float maxDamageRange; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1948, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1819, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( !weapon->weaponIdx )
    return 0.0;
  PrimaryWeapon = Bot_Weap_GetPrimaryWeapon(ps, weapon);
  if ( !PrimaryWeapon->weaponIdx )
    return 0.0;
  isAlternate = BG_UsingAlternate(ps);
  Instance = GWeaponMap::GetInstance();
  BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Instance, ps, &ps->perks, PrimaryWeapon, isAlternate, &minDamageRange, &maxDamageRange);
  *(_QWORD *)&v8 = LODWORD(minDamageRange);
  *(float *)&v8 = minDamageRange * 0.75;
  v7 = v8;
  if ( minDamageRange != maxDamageRange )
  {
    *(float *)&v8 = (float)(*(float *)&v8 * 0.89999998) + (float)(maxDamageRange * 0.1);
    v7 = v8;
  }
  AdjustedMaxRange = Bot_GetAdjustedMaxRange(ps, PrimaryWeapon, v7, 0);
  Bot_Weap_VerifyWeaponDamageRanges(ps, PrimaryWeapon, AdjustedMaxRange * 0.25, AdjustedMaxRange);
  return AdjustedMaxRange * 0.25;
}

/*
==============
Bot_Weap_GetPrimaryWeapon
==============
*/
const Weapon *Bot_Weap_GetPrimaryWeapon(const playerState_s *ps, const Weapon *currentWeapon)
{
  const Weapon *result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1677, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !currentWeapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1678, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( currentWeapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( currentWeapon )") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( currentWeapon->weaponIdx && Bot_Weap_Class(ps, currentWeapon) == WEAPCLASS_GRENADE )
    goto LABEL_17;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !currentWeapon->weaponIdx )
    return Bot_Weap_GetEquippedTypeClass(ps, WEAPINVENTORY_PRIMARY, 0xFFFFFFFF);
  if ( Bot_Weap_Class(ps, currentWeapon) == WEAPCLASS_THROWINGKNIFE )
  {
LABEL_17:
    result = Bot_Weap_GetEquippedTypeClass(ps, WEAPINVENTORY_PRIMARY, 0xFFFFFF5F);
    if ( result->weaponIdx )
      return result;
  }
  if ( !currentWeapon->weaponIdx )
    return Bot_Weap_GetEquippedTypeClass(ps, WEAPINVENTORY_PRIMARY, 0xFFFFFFFF);
  return currentWeapon;
}

/*
==============
Bot_Weap_GetViewmodelWeapon
==============
*/
const Weapon *Bot_Weap_GetViewmodelWeapon(const playerState_s *ps)
{
  GWeaponMap *Instance; 

  Instance = GWeaponMap::GetInstance();
  return BG_GetViewmodelWeapon(Instance, ps);
}

/*
==============
Bot_Weap_GetWeaponFOV
==============
*/
double Bot_Weap_GetWeaponFOV(const playerState_s *ps, const Weapon *weapon)
{
  double result; 
  bool v5; 
  GHandler *Handler; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1642, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( weapon->weaponIdx && Bot_Weap_Class(ps, weapon) == WEAPCLASS_TURRET )
  {
    *(_QWORD *)&result = LODWORD(Bot_Weap_WeaponDef(ps, weapon)->turretFovADS);
  }
  else
  {
    v5 = BG_UsingAlternate(ps);
    Handler = GHandler::getHandler();
    return BG_ADSZoomFov(Handler, ps, weapon, v5);
  }
  return result;
}

/*
==============
Bot_Weap_GetWeaponHandForViewWeapon
==============
*/
PlayerHandIndex Bot_Weap_GetWeaponHandForViewWeapon(const playerState_s *const ps)
{
  GWeaponMap *Instance; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2496, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  return BG_PlayerLastWeaponHandForViewWeapon(Instance, ps);
}

/*
==============
Bot_Weap_GetWeaponStateForViewWeapon
==============
*/
__int64 Bot_Weap_GetWeaponStateForViewWeapon(const playerState_s *const ps)
{
  GWeaponMap *Instance; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2483, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2496, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  Instance = GWeaponMap::GetInstance();
  return (unsigned int)ps->weapState[BG_PlayerLastWeaponHandForViewWeapon(Instance, ps)].weaponState;
}

/*
==============
Bot_Weap_GrenadeButton
==============
*/
unsigned __int64 Bot_Weap_GrenadeButton(const playerState_s *ps, const Weapon *grenadeWeap)
{
  GWeaponMap *Instance; 
  const Weapon *OffHandWeaponForSlot; 
  const Weapon *v7; 

  Instance = GWeaponMap::GetInstance();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 916, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !grenadeWeap->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 917, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( grenadeWeap ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( grenadeWeap )") )
    __debugbreak();
  OffHandWeaponForSlot = PM_Weapon_GetOffHandWeaponForSlot(Instance, ps, OFFHAND_SLOT_PRIMARY);
  if ( !memcmp_0(grenadeWeap, OffHandWeaponForSlot, 0x3Cui64) )
    return 4096i64;
  v7 = PM_Weapon_GetOffHandWeaponForSlot(Instance, ps, OFFHAND_SLOT_SECONDARY);
  if ( !memcmp_0(grenadeWeap, v7, 0x3Cui64) )
    return 0x2000i64;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 927, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
    __debugbreak();
  return 0i64;
}

/*
==============
Bot_Weap_GrenadeInRange
==============
*/
__int64 Bot_Weap_GrenadeInRange(const bot_data_t *botData, const Weapon *weapon, float *outPitch, vec3_t *outLaunchVel)
{
  gentity_s *ent; 
  float v9; 
  __int128 v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  playerState_s *playerState; 
  gentity_s *v18; 
  const WeaponDef *v19; 
  int iProjectileSpeed; 
  int iProjectileSpeedUp; 
  int v22; 
  int v23; 
  gagent_s *agent; 
  float grenadeThrowSpeedUpScale; 
  float grenadeThrowSpeedScale; 
  gclient_s *client; 
  float v28; 
  float v29; 
  __int128 v30; 
  __int128 v31; 
  float v32; 
  float v33; 
  __int128 v34; 
  float v37; 
  float v38; 
  __int128 v39; 
  __m128 v43; 
  float v47; 
  gentity_s *v48; 
  __int128 v49; 
  float v50; 
  playerState_s *v51; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v65; 
  __int128 v66; 
  __int128 v70; 
  float v71; 
  float v72; 
  float v73; 
  __int64 v78; 
  float outSpeedScale; 
  float *v80; 
  vec3_t v81; 
  vec3_t v82; 
  vec3_t forward; 
  vec3_t vec; 
  vec3_t v85; 
  vec3_t angles; 
  vec3_t up; 

  v80 = outPitch;
  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 991, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( !botData->botInfo.ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 992, ASSERT_TYPE_ASSERT, "( botData->botInfo.ent )", (const char *)&queryFormat, "botData->botInfo.ent") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 994, ASSERT_TYPE_ASSERT, "( !Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED ) )", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED )") )
    __debugbreak();
  if ( !outPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 997, ASSERT_TYPE_ASSERT, "( outPitch )", (const char *)&queryFormat, "outPitch") )
    __debugbreak();
  AngleVectors(&botData->botInfo.ent->r.currentAngles, &forward, NULL, &up);
  if ( (*((_BYTE *)&botData->scriptedAgentInfo + 28228) & 2) != 0 )
  {
    AngleVectors(&botData->botInfo.ent->r.currentAngles, &v82, NULL, NULL);
    ent = botData->botInfo.ent;
    v9 = botData->botInfo.scriptedGrenadeTarget.v[0];
    v10 = LODWORD(botData->botInfo.scriptedGrenadeTarget.v[1]);
    v82.v[2] = 0.0;
    v11 = v9 - ent->r.currentOrigin.v[0];
    v13 = v10;
    v12 = *(float *)&v10 - ent->r.currentOrigin.v[1];
    *(float *)&v13 = fsqrt((float)(v12 * v12) + (float)(v11 * v11));
    _XMM3 = v13;
    __asm
    {
      vcmpless xmm0, xmm3, xmm14
      vblendvps xmm0, xmm3, xmm12, xmm0
    }
    if ( (float)((float)((float)(v12 * (float)(1.0 / *(float *)&_XMM0)) * v82.v[1]) + (float)((float)(v11 * (float)(1.0 / *(float *)&_XMM0)) * v82.v[0])) < 0.995 )
      return 0i64;
  }
  playerState = botData->botInfo.playerState;
  v18 = botData->botInfo.ent;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2198, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2199, ASSERT_TYPE_ASSERT, "( launchingEnt )", (const char *)&queryFormat, "launchingEnt") )
    __debugbreak();
  if ( !weapon->weaponIdx )
    return 0i64;
  v19 = Bot_Weap_WeaponDef(playerState, weapon);
  iProjectileSpeed = v19->iProjectileSpeed;
  iProjectileSpeedUp = v19->iProjectileSpeedUp;
  LODWORD(v78) = v19->iProjectileSpeedForward;
  outSpeedScale = FLOAT_1_0;
  *((float *)&v78 + 1) = FLOAT_1_0;
  G_Missile_GetScriptSpeedScale(v18, weapon, 0, &outSpeedScale, (float *)&v78 + 1);
  v22 = (int)(float)((float)iProjectileSpeedUp * *((float *)&v78 + 1));
  v23 = (int)(float)((float)iProjectileSpeed * outSpeedScale);
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx || Bot_Weap_Class(playerState, weapon) != WEAPCLASS_GRENADE )
    goto LABEL_38;
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2171, ASSERT_TYPE_ASSERT, "( launchingEnt )", (const char *)&queryFormat, "launchingEnt") )
    __debugbreak();
  agent = v18->agent;
  if ( agent )
  {
    grenadeThrowSpeedUpScale = agent->grenadeThrowSpeedUpScale;
    grenadeThrowSpeedScale = agent->grenadeThrowSpeedScale;
  }
  else
  {
    client = v18->client;
    if ( !client )
      goto LABEL_38;
    grenadeThrowSpeedUpScale = client->grenadeThrowSpeedUpScale;
    grenadeThrowSpeedScale = client->grenadeThrowSpeedScale;
  }
  if ( grenadeThrowSpeedScale > 0.0 )
    v23 = (int)(float)((float)v23 * grenadeThrowSpeedScale);
  if ( grenadeThrowSpeedUpScale > 0.0 )
    v22 = (int)(float)((float)v22 * grenadeThrowSpeedUpScale);
LABEL_38:
  v28 = forward.v[0];
  v29 = forward.v[1];
  v30 = 0i64;
  *(float *)&v30 = (float)v23 * forward.v[2];
  v31 = v30;
  v32 = forward.v[0] * (float)v23;
  v33 = forward.v[1] * (float)v23;
  if ( (_DWORD)v78 )
  {
    v34 = LODWORD(forward.v[0]);
    *(float *)&v34 = (float)(forward.v[0] * forward.v[0]) + (float)(forward.v[1] * forward.v[1]);
    if ( *(float *)&v34 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    _XMM1 = v34;
    __asm { vrsqrtss xmm2, xmm1, xmm1 }
    v37 = _mm_cvtepi32_ps((__m128i)(unsigned int)v78).m128_f32[0];
    v33 = (float)((float)(v29 * *(float *)&_XMM2) * v37) + v33;
    v32 = (float)((float)(v28 * *(float *)&_XMM2) * v37) + v32;
  }
  v38 = (float)(v33 * v33) + (float)(v32 * v32);
  v39 = v31;
  *(float *)&v39 = fsqrt((float)(*(float *)&v31 * *(float *)&v31) + v38);
  _XMM3 = v39;
  __asm
  {
    vcmpless xmm0, xmm3, xmm14
    vblendvps xmm0, xmm3, xmm12, xmm0
  }
  vec.v[0] = (float)(1.0 / *(float *)&_XMM0) * v32;
  vec.v[2] = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v31;
  vec.v[1] = (float)(1.0 / *(float *)&_XMM0) * v33;
  v43 = _mm_cvtepi32_ps((__m128i)(unsigned int)v22);
  *(float *)&_XMM3 = v43.m128_f32[0] + *(float *)&v31;
  v43.m128_f32[0] = fsqrt((float)(*(float *)&_XMM3 * *(float *)&_XMM3) + v38);
  _XMM2 = v43;
  __asm
  {
    vcmpless xmm0, xmm2, xmm14
    vblendvps xmm0, xmm2, xmm12, xmm0
  }
  v85.v[0] = (float)(1.0 / *(float *)&_XMM0) * v32;
  v85.v[2] = (float)(1.0 / *(float *)&_XMM0) * *(float *)&_XMM3;
  v81.v[0] = v32;
  v81.v[1] = v33;
  v81.v[2] = *(float *)&_XMM3;
  v85.v[1] = v33 * (float)(1.0 / *(float *)&_XMM0);
  *(double *)&_XMM0 = vectopitch(&vec);
  v47 = *(float *)&_XMM0;
  *(double *)&_XMM0 = vectopitch(&v85);
  v48 = botData->botInfo.ent;
  v49 = LODWORD(v81.v[1]);
  v50 = v81.v[0];
  v51 = botData->botInfo.playerState;
  _XMM9 = 0i64;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  *((float *)&v78 + 1) = (float)((float)((float)(*(float *)&_XMM0 - v47) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  v54 = v51->viewHeightCurrent + v48->r.currentOrigin.v[2];
  v55 = (float)((float)(*(float *)&v49 * *(float *)&v49) + (float)(v50 * v50)) + (float)(v81.v[2] * v81.v[2]);
  v43.m128_f32[0] = v48->r.currentOrigin.v[1] - botData->botInfo.grenadeThrowTarget.v[1];
  *(float *)&_XMM3 = v48->r.currentOrigin.v[0] - botData->botInfo.grenadeThrowTarget.v[0];
  v56 = (float)((float)(v43.m128_f32[0] * v43.m128_f32[0]) + (float)(*(float *)&_XMM3 * *(float *)&_XMM3)) + (float)((float)(v54 - botData->botInfo.grenadeThrowTarget.v[2]) * (float)(v54 - botData->botInfo.grenadeThrowTarget.v[2]));
  v57 = (float)(v55 * v55) - (float)((float)((float)((float)(botData->botInfo.grenadeThrowTarget.v[2] - v54) * 1600.0) * v55) + (float)(v56 * 640000.0));
  if ( v57 < 0.0 )
    return 0i64;
  v58 = fsqrt(v56) * 800.0;
  v59 = v55 - fsqrt(v57);
  if ( v58 == 0.0 )
    return 0i64;
  *(float *)&v78 = v59;
  if ( (LODWORD(v59) & 0x7F800000) == 2139095040 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1073, ASSERT_TYPE_ASSERT, "(!IS_NAN( numerator ))", (const char *)&queryFormat, "!IS_NAN( numerator )", v78) )
      __debugbreak();
    v50 = v81.v[0];
    v49 = LODWORD(v81.v[1]);
  }
  v60 = v59 / v58;
  *(float *)&v78 = atanf_0(v60);
  v61 = v60;
  if ( (v78 & 0x7F800000) == 2139095040 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1075, ASSERT_TYPE_ASSERT, "(!IS_NAN( launchAngleRad ))", (const char *)&queryFormat, "!IS_NAN( launchAngleRad )", v78) )
      __debugbreak();
    v50 = v81.v[0];
    v49 = LODWORD(v81.v[1]);
  }
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm1, 1 }
  v65 = v81.v[2];
  *v80 = (float)((float)((float)((float)((float)((float)(v60 * -0.15915494) - *(float *)&_XMM2) * 360.0) - *((float *)&v78 + 1)) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  v66 = v49;
  *(float *)&v66 = fsqrt((float)((float)(*(float *)&v49 * *(float *)&v49) + (float)(v50 * v50)) + (float)(v65 * v65));
  _XMM8 = v66;
  __asm
  {
    vcmpless xmm1, xmm8, xmm14
    vblendvps xmm1, xmm8, xmm12, xmm1
  }
  v70 = LODWORD(FLOAT_1_0);
  v71 = (float)(1.0 / *(float *)&_XMM1) * v50;
  v72 = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v49;
  v73 = sinf_0(v61);
  *(float *)&v70 = fsqrt((float)((float)(v72 * v72) + (float)(v71 * v71)) + (float)(v73 * v73));
  _XMM4 = v70;
  __asm
  {
    vcmpless xmm1, xmm4, xmm14
    vblendvps xmm1, xmm4, xmm12, xmm1
  }
  outLaunchVel->v[0] = (float)((float)(1.0 / *(float *)&_XMM1) * v71) * *(float *)&_XMM8;
  outLaunchVel->v[2] = (float)((float)(1.0 / *(float *)&_XMM1) * v61) * *(float *)&_XMM8;
  outLaunchVel->v[1] = (float)((float)(1.0 / *(float *)&_XMM1) * v72) * *(float *)&_XMM8;
  vectoangles(&v81, &angles);
  angles.v[0] = (float)((float)(v61 * -0.15915494) - *(float *)&_XMM2) * 360.0;
  AngleVectors(&angles, outLaunchVel, NULL, NULL);
  *(float *)&v70 = fsqrt(v55);
  *(float *)&_XMM1 = *(float *)&v70 * outLaunchVel->v[1];
  outLaunchVel->v[0] = *(float *)&v70 * outLaunchVel->v[0];
  outLaunchVel->v[2] = *(float *)&v70 * outLaunchVel->v[2];
  outLaunchVel->v[1] = *(float *)&_XMM1;
  return 1i64;
}

/*
==============
Bot_Weap_GrenadePick
==============
*/
int Bot_Weap_GrenadePick(const bot_info_t *botInfo, const playerState_s *ps, Weapon *offHandOut)
{
  bot_grenade_type_t scriptedGrenadeType; 
  int GrenadeForButton; 
  int v8; 
  __int128 v9; 
  int v10; 
  double v11; 
  __int128 v12; 
  int v13; 
  double v14; 
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  GWeaponMap *v18; 
  GWeaponMap *v19; 
  const Weapon *v20; 
  Weapon offHand; 
  Weapon weapon; 

  scriptedGrenadeType = botInfo->scriptedGrenadeType;
  if ( (unsigned int)(scriptedGrenadeType - 1) <= 1 )
    return Bot_Weap_GetGrenadeForButton(botInfo, scriptedGrenadeType, offHandOut);
  GrenadeForButton = Bot_Weap_GetGrenadeForButton(botInfo, BOT_GRENADE_TYPE_LETHAL, &offHand);
  v8 = Bot_Weap_GetGrenadeForButton(botInfo, BOT_GRENADE_TYPE_TACTICAL, &weapon);
  if ( GrenadeForButton )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1367, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( offHand.weaponIdx && Bot_Weap_WeaponDef(ps, &offHand)->offhandClass == OFFHAND_CLASS_FRAG_GRENADE )
      goto LABEL_25;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1367, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( offHand.weaponIdx && Bot_Weap_WeaponDef(ps, &offHand)->offhandClass == OFFHAND_CLASS_MOLOTOV )
      goto LABEL_25;
  }
  if ( v8 )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1367, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( weapon.weaponIdx && Bot_Weap_WeaponDef(ps, &weapon)->offhandClass == OFFHAND_CLASS_FRAG_GRENADE )
      goto LABEL_27;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1367, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( weapon.weaponIdx && Bot_Weap_WeaponDef(ps, &weapon)->offhandClass == OFFHAND_CLASS_MOLOTOV )
      goto LABEL_27;
  }
  if ( !GrenadeForButton )
  {
    if ( !v8 )
    {
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2320, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
        __debugbreak();
      Instance = GWeaponMap::GetInstance();
      ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, ps);
      if ( !Bot_Weap_HasUnderBarrelGL(ps) )
        return 0;
      v18 = GWeaponMap::GetInstance();
      if ( BG_WeaponAmmo(v18, ps, ViewmodelWeapon, 1) <= 0 )
        return 0;
      v19 = GWeaponMap::GetInstance();
      v20 = BG_GetViewmodelWeapon(v19, ps);
      *(__m256i *)&offHandOut->weaponIdx = *(__m256i *)&v20->weaponIdx;
      *(_OWORD *)&offHandOut->attachmentVariationIndices[5] = *(_OWORD *)&v20->attachmentVariationIndices[5];
      *(double *)&offHandOut->attachmentVariationIndices[21] = *(double *)&v20->attachmentVariationIndices[21];
      v13 = *(_DWORD *)&v20->weaponCamo;
      goto LABEL_28;
    }
LABEL_27:
    v12 = *(_OWORD *)&weapon.attachmentVariationIndices[5];
    v13 = *(_DWORD *)&weapon.weaponCamo;
    *(__m256i *)&offHandOut->weaponIdx = *(__m256i *)&weapon.weaponIdx;
    v14 = *(double *)&weapon.attachmentVariationIndices[21];
    *(_OWORD *)&offHandOut->attachmentVariationIndices[5] = v12;
    *(double *)&offHandOut->attachmentVariationIndices[21] = v14;
LABEL_28:
    *(_DWORD *)&offHandOut->weaponCamo = v13;
    return 1;
  }
LABEL_25:
  v9 = *(_OWORD *)&offHand.attachmentVariationIndices[5];
  v10 = *(_DWORD *)&offHand.weaponCamo;
  *(__m256i *)&offHandOut->weaponIdx = *(__m256i *)&offHand.weaponIdx;
  v11 = *(double *)&offHand.attachmentVariationIndices[21];
  *(_OWORD *)&offHandOut->attachmentVariationIndices[5] = v9;
  *(double *)&offHandOut->attachmentVariationIndices[21] = v11;
  *(_DWORD *)&offHandOut->weaponCamo = v10;
  return 1;
}

/*
==============
Bot_Weap_HasBestWeapForAerialEnemy
==============
*/
__int64 Bot_Weap_HasBestWeapForAerialEnemy(const bot_data_t *botData, const gentity_s *aerialEnemy)
{
  GWeaponMap *Instance; 
  playerState_s *playerState; 
  BgWeaponMap *v6; 
  unsigned int v7; 
  const Weapon *Weapon; 
  const dvar_t *v9; 
  int v10; 
  int v11; 
  const WeaponDef *v12; 
  __int64 v14; 
  __int64 v15; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 120, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( !aerialEnemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 121, ASSERT_TYPE_ASSERT, "( aerialEnemy )", (const char *)&queryFormat, "aerialEnemy") )
    __debugbreak();
  if ( !aerialEnemy->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 122, ASSERT_TYPE_ASSERT, "( aerialEnemy->sentient )", (const char *)&queryFormat, "aerialEnemy->sentient") )
    __debugbreak();
  if ( !Sentient_IsAerial(aerialEnemy->sentient) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 123, ASSERT_TYPE_ASSERT, "( Sentient_IsAerial( aerialEnemy->sentient ) )", (const char *)&queryFormat, "Sentient_IsAerial( aerialEnemy->sentient )") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  playerState = botData->botInfo.playerState;
  v6 = Instance;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 127, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v7 = 0;
  while ( 1 )
  {
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v7 >= 0xF )
    {
      LODWORD(v15) = 15;
      LODWORD(v14) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    Weapon = BgWeaponMap::GetWeapon(v6, playerState->weaponsEquipped[v7]);
    if ( Weapon->weaponIdx )
    {
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1105, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v9 = DVARBOOL_bg_giveAll;
      if ( !DVARBOOL_bg_giveAll || (Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll), !v9->current.enabled) )
      {
        if ( !BG_GetEquippedWeaponStateConst(v6, playerState, Weapon) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 139, ASSERT_TYPE_ASSERT, "( BG_PlayerHasWeapon( weaponMap, ps, weaponInInventory ) )", (const char *)&queryFormat, "BG_PlayerHasWeapon( weaponMap, ps, weaponInInventory )") )
          __debugbreak();
      }
      if ( !Bot_Weap_WeaponUsesAmmo(playerState, Weapon) || Bot_Weap_Ammo(playerState, Weapon) )
      {
        v10 = 1 << Bot_Weap_Type(playerState, Weapon);
        v11 = (1 << Bot_Weap_Class(playerState, Weapon)) & 0x80;
        if ( (v10 & 0x10) != 0 || v11 )
        {
          v12 = Bot_Weap_WeaponDef(playerState, Weapon);
          if ( (v12->requireLockonToFire || !Bot_IsUnreachableHighAerialSentient(aerialEnemy->sentient)) && v12->bProjImpactExplode )
            break;
        }
      }
    }
    if ( (int)++v7 >= 15 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
Bot_Weap_HasLauncherThatNeedsAimAtEnemy
==============
*/
_BOOL8 Bot_Weap_HasLauncherThatNeedsAimAtEnemy(const bot_data_t *botData)
{
  playerState_s *playerState; 
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  const WeaponDef *v5; 
  _BOOL8 result; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2410, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  playerState = botData->botInfo.playerState;
  Instance = GWeaponMap::GetInstance();
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, playerState);
  result = 0;
  if ( ViewmodelWeapon->weaponIdx )
  {
    v5 = Bot_Weap_WeaponDef(playerState, ViewmodelWeapon);
    if ( v5->requireLockonToFire || v5->guidedMissileType == MISSILE_GUIDANCE_SIDEWINDER )
      return 1;
  }
  return result;
}

/*
==============
Bot_Weap_HasOnlyUnderbarrelGL
==============
*/
_BOOL8 Bot_Weap_HasOnlyUnderbarrelGL(const bot_data_t *botData)
{
  playerState_s *playerState; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2336, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  playerState = botData->botInfo.playerState;
  return !Bot_Weap_HasWeaponWithNormalAmmo(botData) && Bot_Weap_HasUnderBarrelGL(playerState);
}

/*
==============
Bot_Weap_HasOverlay
==============
*/
_BOOL8 Bot_Weap_HasOverlay(const playerState_s *ps, const Weapon *weapon)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1537, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1538, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weapon )") )
    __debugbreak();
  return Bot_Weap_WeaponDef(ps, weapon)->overlay.shaderMat != NULL;
}

/*
==============
Bot_Weap_HasUnderBarrelGL
==============
*/
_BOOL8 Bot_Weap_HasUnderBarrelGL(const playerState_s *ps)
{
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  const WeaponAttachment *UnderbarrelAttachment; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2354, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, ps);
  if ( !BG_HasUnderbarrelWeapon(ViewmodelWeapon) )
    return 0i64;
  UnderbarrelAttachment = BG_GetUnderbarrelAttachment(ViewmodelWeapon);
  if ( !UnderbarrelAttachment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2362, ASSERT_TYPE_ASSERT, "( attachment )", (const char *)&queryFormat, "attachment") )
    __debugbreak();
  return UnderbarrelAttachment->weapClass == WEAPCLASS_GRENADE;
}

/*
==============
Bot_Weap_HasUnderBarrelGLAmmo
==============
*/
int Bot_Weap_HasUnderBarrelGLAmmo(const playerState_s *ps)
{
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  int result; 
  GWeaponMap *v5; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2320, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, ps);
  result = Bot_Weap_HasUnderBarrelGL(ps);
  if ( result )
  {
    v5 = GWeaponMap::GetInstance();
    return BG_WeaponAmmo(v5, ps, ViewmodelWeapon, 1) > 0;
  }
  return result;
}

/*
==============
Bot_Weap_HasWeaponWithNormalAmmo
==============
*/
_BOOL8 Bot_Weap_HasWeaponWithNormalAmmo(const bot_data_t *botData)
{
  GWeaponMap *Instance; 
  playerState_s *playerState; 
  unsigned __int16 weaponIdx; 
  BgWeaponMap *v5; 
  bool v6; 
  unsigned int v7; 
  const Weapon *Weapon; 
  const dvar_t *v9; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 75, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  playerState = botData->botInfo.playerState;
  weaponIdx = botData->botInfo.scriptWeapon.weaponIdx;
  v5 = Instance;
  v6 = BG_HighPriorityWeapon_Get(Instance, playerState)->weaponIdx && BG_HighPriorityWeapon_MustSwitch(v5, playerState);
  if ( weaponIdx || v6 )
  {
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v5, playerState);
    v12 = CurrentWeaponForPlayer;
    return CurrentWeaponForPlayer->weaponIdx && Bot_Weap_IsRanged(playerState, CurrentWeaponForPlayer) && Bot_Weap_WeaponUsesAmmo(playerState, v12) && Bot_Weap_Ammo(playerState, v12);
  }
  else
  {
    v7 = 0;
    while ( 1 )
    {
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( v7 >= 0xF )
      {
        LODWORD(v14) = 15;
        LODWORD(v13) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      Weapon = BgWeaponMap::GetWeapon(v5, playerState->weaponsEquipped[v7]);
      if ( Weapon->weaponIdx )
      {
        if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1105, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v9 = DVARBOOL_bg_giveAll;
        if ( !DVARBOOL_bg_giveAll || (Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll), !v9->current.enabled) )
        {
          if ( !BG_GetEquippedWeaponStateConst(v5, playerState, Weapon) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 98, ASSERT_TYPE_ASSERT, "( BG_PlayerHasWeapon( weaponMap, ps, weaponInInventory ) )", (const char *)&queryFormat, "BG_PlayerHasWeapon( weaponMap, ps, weaponInInventory )") )
            __debugbreak();
        }
        if ( Bot_Weap_IsRanged(playerState, Weapon) && Bot_Weap_WeaponUsesAmmo(playerState, Weapon) && Bot_Weap_Ammo(playerState, Weapon) && !Bot_Weap_WeaponDef(playerState, Weapon)->requireLockonToFire )
          break;
      }
      if ( (int)++v7 >= 15 )
        return 0i64;
    }
    return 1i64;
  }
}

/*
==============
Bot_Weap_IsADSOnlyWeapon
==============
*/
_BOOL8 Bot_Weap_IsADSOnlyWeapon(const playerState_s *ps, const Weapon *weapon)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1592, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1593, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weapon )") )
    __debugbreak();
  return Bot_Weap_WeaponDef(ps, weapon)->adsFireOnly;
}

/*
==============
Bot_Weap_IsADSWeapon
==============
*/
_BOOL8 Bot_Weap_IsADSWeapon(const playerState_s *ps, const Weapon *weapon)
{
  bool v5; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1571, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1572, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weapon )") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( weapon->weaponIdx && Bot_Weap_Class(ps, weapon) == WEAPCLASS_TURRET )
    return Bot_Weap_WeaponDef(ps, weapon)->turretADSEnabled;
  v5 = BG_UsingAlternate(ps);
  return BG_IsAimDownSight(weapon, v5);
}

/*
==============
Bot_Weap_IsCookable
==============
*/
_BOOL8 Bot_Weap_IsCookable(const playerState_s *ps, const Weapon *weapon)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1557, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1558, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weapon )") )
    __debugbreak();
  return Bot_Weap_WeaponDef(ps, weapon)->bCookOffHold;
}

/*
==============
Bot_Weap_IsDoingADS
==============
*/
_BOOL8 Bot_Weap_IsDoingADS(const bot_data_t *botData)
{
  playerState_s *playerState; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1608, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  playerState = botData->botInfo.playerState;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1611, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&playerState->pm_flags, ACTIVE, 9u) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&playerState->weapCommon.weapFlags, ACTIVE, 1u);
}

/*
==============
Bot_Weap_IsEntInGrenadeRadius
==============
*/
_BOOL8 Bot_Weap_IsEntInGrenadeRadius(const gentity_s *selfEnt, const gentity_s *checkEnt, const gentity_s *grenadeEnt)
{
  GWeaponMap *Instance; 
  const playerState_s *EntityPlayerStateConst; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  const Weapon *Weapon; 
  const WeaponDef *v13; 
  float v14; 
  float v15; 
  float v16; 

  if ( !selfEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 825, ASSERT_TYPE_ASSERT, "( selfEnt )", (const char *)&queryFormat, "selfEnt") )
    __debugbreak();
  if ( !checkEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 826, ASSERT_TYPE_ASSERT, "( checkEnt )", (const char *)&queryFormat, "checkEnt") )
    __debugbreak();
  if ( !grenadeEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 827, ASSERT_TYPE_ASSERT, "( grenadeEnt )", (const char *)&queryFormat, "grenadeEnt") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(selfEnt);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 831, ASSERT_TYPE_ASSERT, "( psSelf )", (const char *)&queryFormat, "psSelf") )
    __debugbreak();
  v8 = grenadeEnt->r.currentOrigin.v[0] - checkEnt->r.currentOrigin.v[0];
  v9 = grenadeEnt->r.currentOrigin.v[1] - checkEnt->r.currentOrigin.v[1];
  v10 = grenadeEnt->r.currentOrigin.v[2] - checkEnt->r.currentOrigin.v[2];
  v11 = (float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10);
  Weapon = BgWeaponMap::GetWeapon(Instance, grenadeEnt->s.weaponHandle);
  v13 = Bot_Weap_WeaponDef(EntityPlayerStateConst, Weapon);
  v14 = (float)BG_ExplosionRadius(Weapon, 0);
  v16 = v14 * v14;
  v15 = v16;
  if ( selfEnt == checkEnt && v13->offhandClass == OFFHAND_CLASS_FLASH_GRENADE )
    v15 = v16 * 0.25;
  return v15 >= v11;
}

/*
==============
Bot_Weap_IsHighRecoil
==============
*/
bool Bot_Weap_IsHighRecoil(const bot_data_t *botData, const Weapon *r_weapon)
{
  playerState_s *playerState; 
  bool v5; 
  int ShotCountForRecoil; 
  GWeaponMap *Instance; 
  float v8; 
  float v9; 
  bool v10; 
  bool v11; 
  float v13; 
  float v14; 
  float hipAngularViewKickStrengthMax; 
  float adsAngularViewKickPitchScale; 
  float adsAngularViewKickDev; 
  float adsAngularViewKickDir; 
  float hipAngularViewKickPitchScale; 
  float hipAngularViewKickDev; 
  float hipAngularViewKickDir; 
  float adsAngularViewKickStrengthMin; 
  float adsAngularViewKickStrengthMax; 
  float hipAngularViewKickStrengthMin; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1158, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  playerState = botData->botInfo.playerState;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1161, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = BG_UsingAlternate(playerState);
  ShotCountForRecoil = BG_GetShotCountForRecoil(playerState);
  Instance = GWeaponMap::GetInstance();
  if ( BG_UseAngularGunKick(Instance, playerState, r_weapon, v5) )
  {
    BG_GetAngularGunKickSettings(Instance, playerState, r_weapon, v5, ShotCountForRecoil, &hipAngularViewKickDir, &hipAngularViewKickDev, &hipAngularViewKickStrengthMin, &hipAngularViewKickStrengthMax, &hipAngularViewKickPitchScale, &adsAngularViewKickDir, &adsAngularViewKickDev, &adsAngularViewKickStrengthMin, &adsAngularViewKickStrengthMax, &adsAngularViewKickPitchScale);
    v8 = (float)(hipAngularViewKickStrengthMin + hipAngularViewKickStrengthMax) * 0.5;
    v9 = (float)(adsAngularViewKickStrengthMin + adsAngularViewKickStrengthMax) * 0.5;
    if ( Bot_Weap_IsDoingADS(botData) )
      v10 = v9 < 25.0;
    else
      v10 = v8 < 35.0;
    v11 = !v10;
    if ( !v10 )
      return v11;
  }
  else
  {
    v11 = 0;
  }
  if ( !BG_UseAngularViewKick(Instance, playerState, r_weapon, v5) )
    return v11;
  BG_GetAngularViewKickSettings(Instance, playerState, r_weapon, v5, ShotCountForRecoil, &hipAngularViewKickDir, &hipAngularViewKickDev, &hipAngularViewKickStrengthMin, &hipAngularViewKickStrengthMax, &hipAngularViewKickPitchScale, &adsAngularViewKickDir, &adsAngularViewKickDev, &adsAngularViewKickStrengthMin, &adsAngularViewKickStrengthMax, &adsAngularViewKickPitchScale);
  v13 = (float)(hipAngularViewKickStrengthMin + hipAngularViewKickStrengthMax) * 0.5;
  v14 = (float)(adsAngularViewKickStrengthMin + adsAngularViewKickStrengthMax) * 0.5;
  if ( Bot_Weap_IsDoingADS(botData) )
    return v14 >= 25.0;
  else
    return v13 >= 55.0;
}

/*
==============
Bot_Weap_IsLauncher
==============
*/
_BOOL8 Bot_Weap_IsLauncher(const playerState_s *ps, const Weapon *weapon)
{
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2145, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1288, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  return weapon->weaponIdx && Bot_Weap_Type(ps, weapon) == WEAPTYPE_PROJECTILE;
}

/*
==============
Bot_Weap_IsLockedOn
==============
*/
bool Bot_Weap_IsLockedOn(const playerState_s *const ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2520, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return (ps->weapCommon.weapLockFlags & 2) != 0;
}

/*
==============
Bot_Weap_IsMelee
==============
*/
_BOOL8 Bot_Weap_IsMelee(const playerState_s *ps, const Weapon *weapon)
{
  bool v5; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1139, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx )
    return 0i64;
  v5 = BG_UsingAlternate(ps);
  return BG_IsRiotShield(weapon, v5) || Bot_Weap_WeaponDef(ps, weapon)->meleeOnly;
}

/*
==============
Bot_Weap_IsNone
==============
*/
_BOOL8 Bot_Weap_IsNone(const Weapon *weap)
{
  return weap->weaponIdx == 0;
}

/*
==============
Bot_Weap_IsOffhandClass
==============
*/
_BOOL8 Bot_Weap_IsOffhandClass(const playerState_s *ps, const Weapon *weapon, OffhandClass offhandClassChecking)
{
  __int64 v7; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1367, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)offhandClassChecking >= OFFHAND_CLASS_COUNT )
  {
    LODWORD(v7) = offhandClassChecking;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1368, ASSERT_TYPE_ASSERT, "(unsigned)( offhandClassChecking ) < (unsigned)( OFFHAND_CLASS_COUNT )", "offhandClassChecking doesn't index OFFHAND_CLASS_COUNT\n\t%i not in [0, %i)", v7, 8) )
      __debugbreak();
  }
  return weapon->weaponIdx && Bot_Weap_WeaponDef(ps, weapon)->offhandClass == offhandClassChecking;
}

/*
==============
Bot_Weap_IsRanged
==============
*/
_BOOL8 Bot_Weap_IsRanged(const playerState_s *ps, const Weapon *weapon)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2156, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2157, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weapon )") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1288, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( weapon->weaponIdx && Bot_Weap_Type(ps, weapon) == WEAPTYPE_BULLET )
    return 1i64;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1288, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return weapon->weaponIdx && Bot_Weap_Type(ps, weapon) == WEAPTYPE_PROJECTILE;
}

/*
==============
Bot_Weap_IsShortRange
==============
*/
_BOOL8 Bot_Weap_IsShortRange(const playerState_s *ps)
{
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  const PlayerEquippedWeaponState *EquippedWeaponStateConst; 
  bool v5; 
  _BOOL8 result; 

  Instance = GWeaponMap::GetInstance();
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, ps);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1135, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1136, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = 1;
  if ( BG_Skydive_IsSkydiving(ps) || !BG_Ladder_IsDualWieldingAllowed(ps) || (EquippedWeaponStateConst = BG_GetEquippedWeaponStateConst(Instance, ps, ViewmodelWeapon)) == NULL || !EquippedWeaponStateConst->dualWielding )
  {
    v5 = BG_UsingAlternate(ps);
    if ( BG_GetWeaponClass(ViewmodelWeapon, v5) != WEAPCLASS_SPREAD )
      return 0;
  }
  return result;
}

/*
==============
Bot_Weap_IsThrowable
==============
*/
_BOOL8 Bot_Weap_IsThrowable(const playerState_s *ps, const Weapon *weapon)
{
  const WeaponDef *v4; 
  OffhandClass offhandClass; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 798, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx )
    return 0i64;
  v4 = Bot_Weap_WeaponDef(ps, weapon);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx || Bot_Weap_Class(ps, weapon) != WEAPCLASS_GRENADE )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !weapon->weaponIdx || Bot_Weap_Class(ps, weapon) != WEAPCLASS_THROWINGKNIFE )
      return 0i64;
  }
  offhandClass = v4->offhandClass;
  return offhandClass && (unsigned int)(offhandClass - 7) > 1;
}

/*
==============
Bot_Weap_IsWeapClass
==============
*/
_BOOL8 Bot_Weap_IsWeapClass(const playerState_s *ps, const Weapon *weapon, weapClass_t weaponClassChecking)
{
  __int64 v7; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)weaponClassChecking >= WEAPCLASS_NUM )
  {
    LODWORD(v7) = weaponClassChecking;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1351, ASSERT_TYPE_ASSERT, "(unsigned)( weaponClassChecking ) < (unsigned)( WEAPCLASS_NUM )", "weaponClassChecking doesn't index WEAPCLASS_NUM\n\t%i not in [0, %i)", v7, 15) )
      __debugbreak();
  }
  return weapon->weaponIdx && Bot_Weap_Class(ps, weapon) == weaponClassChecking;
}

/*
==============
Bot_Weap_IsWeapType
==============
*/
_BOOL8 Bot_Weap_IsWeapType(const playerState_s *ps, const Weapon *weapon, weapType_t weaponTypeChecking)
{
  __int64 v7; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1288, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)weaponTypeChecking >= WEAPTYPE_NUM )
  {
    LODWORD(v7) = weaponTypeChecking;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1289, ASSERT_TYPE_ASSERT, "(unsigned)( weaponTypeChecking ) < (unsigned)( WEAPTYPE_NUM )", "weaponTypeChecking doesn't index WEAPTYPE_NUM\n\t%i not in [0, %i)", v7, 11) )
      __debugbreak();
  }
  return weapon->weaponIdx && Bot_Weap_Type(ps, weapon) == weaponTypeChecking;
}

/*
==============
Bot_Weap_Name
==============
*/

void __fastcall Bot_Weap_Name(const Weapon *weapon, char *result, int maxResult)
{
  BG_GetWeaponName(weapon, result, maxResult);
}

/*
==============
Bot_Weap_None
==============
*/
Weapon *Bot_Weap_None()
{
  return &NULL_WEAPON;
}

/*
==============
Bot_Weap_PenetrateType
==============
*/
PenetrateType Bot_Weap_PenetrateType(const playerState_s *ps, const Weapon *weapon)
{
  bool v4; 
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1305, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1306, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weapon )") )
    __debugbreak();
  v4 = 0;
  Instance = GWeaponMap::GetInstance();
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, ps);
  if ( !memcmp_0(ViewmodelWeapon, weapon, 0x3Cui64) )
    v4 = BG_UsingAlternate(ps);
  if ( BG_GetWeaponType(weapon, v4) == WEAPTYPE_BULLET )
    return BG_GetPenetrateType(weapon, v4);
  else
    return 0;
}

/*
==============
Bot_Weap_PickBest
==============
*/
Weapon *Bot_Weap_PickBest(Weapon *result, bot_data_t *botData, const gentity_s *pEnemy, int ignoreAmmo)
{
  __int16 v4; 
  Weapon *v6; 
  GWeaponMap *Instance; 
  playerState_s *playerState; 
  BgWeaponMap *v9; 
  int v10; 
  unsigned int v11; 
  BgWeaponHandle *weaponsEquipped; 
  unsigned __int16 weaponIdx; 
  const Weapon *Weapon; 
  unsigned int v15; 
  int v16; 
  __m256i v17; 
  __int128 v18; 
  __int64 v19; 
  int v20; 
  int *usableFallback; 
  __int64 v23; 
  int v24; 
  int v25; 
  __int64 v26; 
  __int64 v27; 
  __int128 v28; 
  __int128 v29; 
  __m256i v30; 
  __m256i v31; 
  int v33; 

  v6 = result;
  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 586, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  playerState = botData->botInfo.playerState;
  v9 = Instance;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 590, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&playerState->weapCommon.weapFlags, ACTIVE, 0xAu) )
  {
    *v6 = NULL_WEAPON;
  }
  else
  {
    v10 = 0;
    v11 = 0;
    weaponsEquipped = playerState->weaponsEquipped;
    v31 = *(__m256i *)&NULL_WEAPON.weaponIdx;
    weaponIdx = NULL_WEAPON.weaponIdx;
    v30 = *(__m256i *)&NULL_WEAPON.weaponIdx;
    v28 = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
    v26 = *(__int64 *)&NULL_WEAPON.attachmentVariationIndices[21];
    v33 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    v29 = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
    v27 = *(__int64 *)&NULL_WEAPON.attachmentVariationIndices[21];
    v24 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    do
    {
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( (unsigned int)v10 >= 0xF )
      {
        LODWORD(v23) = 15;
        LODWORD(usableFallback) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", usableFallback, v23) )
          __debugbreak();
      }
      Weapon = BgWeaponMap::GetWeapon(v9, (BgWeaponHandle)weaponsEquipped->m_mapEntryId);
      if ( !Weapon->weaponIdx )
        goto LABEL_25;
      v15 = Bot_Weap_Score(botData, Weapon, playerState, pEnemy, ignoreAmmo, &v25);
      if ( v25 && !weaponIdx )
      {
        v16 = *(_DWORD *)&Weapon->weaponCamo;
        v31 = *(__m256i *)&Weapon->weaponIdx;
        weaponIdx = v31.m256i_i16[0];
        v29 = *(_OWORD *)&Weapon->attachmentVariationIndices[5];
        v27 = *(__int64 *)&Weapon->attachmentVariationIndices[21];
        v24 = v16;
      }
      if ( v15 > v11 )
      {
        v17 = *(__m256i *)&Weapon->weaponIdx;
        v18 = *(_OWORD *)&Weapon->attachmentVariationIndices[5];
        v19 = *(__int64 *)&Weapon->attachmentVariationIndices[21];
        v20 = *(_DWORD *)&Weapon->weaponCamo;
        v11 = v15;
        v30 = *(__m256i *)&Weapon->weaponIdx;
        v28 = v18;
        v26 = v19;
        v33 = v20;
      }
      else
      {
LABEL_25:
        v20 = v33;
        v19 = v26;
        v18 = v28;
        v17 = v30;
      }
      ++v10;
      ++weaponsEquipped;
    }
    while ( v10 < 15 );
    v6 = result;
    if ( !v4 && weaponIdx )
    {
      v17 = v31;
      v18 = v29;
      v19 = v27;
      v20 = v24;
    }
    *(__m256i *)&result->weaponIdx = v17;
    *(_OWORD *)&result->attachmentVariationIndices[5] = v18;
    *(double *)&result->attachmentVariationIndices[21] = *(double *)&v19;
    *(_DWORD *)&result->weaponCamo = v20;
  }
  return v6;
}

/*
==============
Bot_Weap_PlayerHasRiotShield
==============
*/
__int64 Bot_Weap_PlayerHasRiotShield(const playerState_s *ps)
{
  GWeaponMap *Instance; 
  unsigned int v3; 
  const Weapon *Weapon; 
  const dvar_t *v5; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  bool v7; 
  __int64 v9; 
  __int64 v10; 

  Instance = GWeaponMap::GetInstance();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 312, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = 0;
  while ( 1 )
  {
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v3 >= 0xF )
    {
      LODWORD(v10) = 15;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    Weapon = BgWeaponMap::GetWeapon(Instance, ps->weaponsEquipped[v3]);
    if ( !Weapon->weaponIdx )
      goto LABEL_30;
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1105, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v5 = DVARBOOL_bg_giveAll;
    if ( !DVARBOOL_bg_giveAll || (Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll), !v5->current.enabled) )
    {
      if ( !BG_GetEquippedWeaponStateConst(Instance, ps, Weapon) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 320, ASSERT_TYPE_ASSERT, "( BG_PlayerHasWeapon( weaponMap, ps, weaponInInventory ) )", (const char *)&queryFormat, "BG_PlayerHasWeapon( weaponMap, ps, weaponInInventory )") )
        __debugbreak();
    }
    if ( ps )
    {
      p_weapFlags = &ps->weapCommon.weapFlags;
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) )
        goto LABEL_28;
    }
    else
    {
      p_weapFlags = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)1832;
    }
    if ( !ps || !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x11u) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu) )
    {
LABEL_28:
      v7 = 0;
      goto LABEL_29;
    }
    v7 = 1;
LABEL_29:
    if ( BG_IsRiotShield(Weapon, v7) )
      return 1i64;
LABEL_30:
    if ( (int)++v3 >= 15 )
      return 0i64;
  }
}

/*
==============
Bot_Weap_ProjectileDirectTarget
==============
*/
_BOOL8 Bot_Weap_ProjectileDirectTarget(const gentity_s *launchingEnt, const playerState_s *ps, const Weapon *weapon)
{
  BOOL bProjImpactExplode; 
  bool v8; 
  float outSpeedUpScale; 
  float outSpeedScale; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2253, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx )
    return 0i64;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2198, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !launchingEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2199, ASSERT_TYPE_ASSERT, "( launchingEnt )", (const char *)&queryFormat, "launchingEnt") )
    __debugbreak();
  if ( weapon->weaponIdx )
  {
    bProjImpactExplode = Bot_Weap_WeaponDef(ps, weapon)->bProjImpactExplode;
    outSpeedScale = FLOAT_1_0;
    outSpeedUpScale = FLOAT_1_0;
    G_Missile_GetScriptSpeedScale(launchingEnt, weapon, 0, &outSpeedScale, &outSpeedUpScale);
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( weapon->weaponIdx && Bot_Weap_Class(ps, weapon) == WEAPCLASS_GRENADE && !launchingEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2171, ASSERT_TYPE_ASSERT, "( launchingEnt )", (const char *)&queryFormat, "launchingEnt") )
      __debugbreak();
    if ( bProjImpactExplode )
      return 1i64;
  }
  v8 = BG_UsingAlternate(ps);
  return (unsigned int)(BG_WeaponStickinessType(weapon, v8) - 1) <= 1;
}

/*
==============
Bot_Weap_ProjectileInfo
==============
*/
__int64 Bot_Weap_ProjectileInfo(const gentity_s *launchingEnt, const playerState_s *ps, const Weapon *weapon, int *impactExplode, int *speedAim, int *speedFwd, int *speedUp)
{
  const WeaponDef *v12; 
  int *v13; 
  int *v14; 
  gagent_s *agent; 
  float grenadeThrowSpeedUpScale; 
  float grenadeThrowSpeedScale; 
  gclient_s *client; 
  float outSpeedScale; 
  float outSpeedUpScale; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2198, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !launchingEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2199, ASSERT_TYPE_ASSERT, "( launchingEnt )", (const char *)&queryFormat, "launchingEnt") )
    __debugbreak();
  if ( !weapon->weaponIdx )
    return 0i64;
  v12 = Bot_Weap_WeaponDef(ps, weapon);
  if ( impactExplode )
    *impactExplode = v12->bProjImpactExplode;
  v13 = speedAim;
  if ( speedAim )
    *speedAim = v12->iProjectileSpeed;
  if ( speedFwd )
    *speedFwd = v12->iProjectileSpeedForward;
  v14 = speedUp;
  if ( speedUp )
    *speedUp = v12->iProjectileSpeedUp;
  outSpeedScale = FLOAT_1_0;
  outSpeedUpScale = FLOAT_1_0;
  G_Missile_GetScriptSpeedScale(launchingEnt, weapon, 0, &outSpeedScale, &outSpeedUpScale);
  if ( v13 )
    *v13 = (int)(float)((float)*v13 * outSpeedScale);
  if ( v14 )
    *v14 = (int)(float)((float)*v14 * outSpeedUpScale);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( weapon->weaponIdx && Bot_Weap_Class(ps, weapon) == WEAPCLASS_GRENADE )
  {
    if ( !launchingEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2171, ASSERT_TYPE_ASSERT, "( launchingEnt )", (const char *)&queryFormat, "launchingEnt") )
      __debugbreak();
    agent = launchingEnt->agent;
    if ( agent )
    {
      grenadeThrowSpeedUpScale = agent->grenadeThrowSpeedUpScale;
      grenadeThrowSpeedScale = agent->grenadeThrowSpeedScale;
      goto LABEL_33;
    }
    client = launchingEnt->client;
    if ( client )
    {
      grenadeThrowSpeedUpScale = client->grenadeThrowSpeedUpScale;
      grenadeThrowSpeedScale = client->grenadeThrowSpeedScale;
LABEL_33:
      if ( v13 && grenadeThrowSpeedScale > 0.0 )
        *v13 = (int)(float)((float)*v13 * grenadeThrowSpeedScale);
      if ( v14 )
      {
        if ( grenadeThrowSpeedUpScale > 0.0 )
          *v14 = (int)(float)((float)*v14 * grenadeThrowSpeedUpScale);
      }
    }
  }
  return 1i64;
}

/*
==============
Bot_Weap_ReloadTime
==============
*/
__int64 Bot_Weap_ReloadTime(const playerState_s *ps, const Weapon *weapon)
{
  GWeaponMap *Instance; 
  PlayerHandIndex WeaponHandForViewWeapon; 
  bool v6; 
  int v7; 
  bool isDualWielding; 
  int AmmoInClipForClipType; 
  GHandler *Handler; 
  unsigned int v11; 
  int v12; 
  bool hasFastReloadOverride; 
  AmmoStore result; 
  AmmoStore r_clipIndex; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1872, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2496, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  Instance = GWeaponMap::GetInstance();
  WeaponHandForViewWeapon = BG_PlayerLastWeaponHandForViewWeapon(Instance, ps);
  v6 = BG_UsingAlternate(ps);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1366, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_Skydive_IsSkydiving(ps) || !BG_Ladder_IsDualWieldingAllowed(ps) )
  {
    v7 = 0;
    isDualWielding = 0;
  }
  else
  {
    v7 = 0;
    isDualWielding = ps->weapCommon.lastWeaponHand == WEAPON_HAND_LEFT;
  }
  r_clipIndex = *BG_AmmoStoreForWeapon(&result, weapon, v6);
  AmmoInClipForClipType = BG_GetAmmoInClipForClipType(ps, &r_clipIndex, WeaponHandForViewWeapon);
  if ( !AmmoInClipForClipType && BG_GetWeaponType(weapon, v6) == WEAPTYPE_BULLET )
    v7 = 1;
  hasFastReloadOverride = 0;
  Handler = GHandler::getHandler();
  if ( v7 )
  {
    v11 = BG_ReloadEmptyTime(ps, Handler, WeaponHandForViewWeapon, weapon, v6, isDualWielding, &hasFastReloadOverride);
    v12 = BG_ReloadEmptyAddTime(ps, weapon, v6, isDualWielding, AmmoInClipForClipType, &hasFastReloadOverride);
    if ( v12 )
      goto LABEL_21;
  }
  else
  {
    v11 = BG_ReloadTime(ps, Handler, WeaponHandForViewWeapon, weapon, v6, isDualWielding, AmmoInClipForClipType, &hasFastReloadOverride);
  }
  v12 = BG_ReloadAddTime(ps, weapon, v6, isDualWielding, AmmoInClipForClipType, 0, &hasFastReloadOverride);
LABEL_21:
  if ( BG_GetReloadType(weapon, v6) == RELOAD_TYPE_SEGMENTED )
    return (unsigned int)(v12 * (BG_GetClipSize(ps, weapon, v6) - AmmoInClipForClipType));
  else
    return v11;
}

/*
==============
Bot_Weap_Score
==============
*/
__int64 Bot_Weap_Score(bot_data_t *botData, const Weapon *weap, const playerState_s *ps, const gentity_s *pEnemy, int ignoreAmmo, int *usableFallback)
{
  __int16 v6; 
  GWeaponMap *Instance; 
  PlayerHandIndex WeaponHandForViewWeapon; 
  GWeaponMap *v13; 
  const Weapon *ViewmodelWeapon; 
  unsigned int v15; 
  int v16; 
  int v17; 
  char v18; 
  bool v19; 
  int v20; 
  int v21; 
  sentient_s *sentient; 
  GWeaponMap *v23; 
  const Weapon *v24; 
  bool v25; 
  int v26; 
  int v27; 
  int v28; 
  const Weapon *v29; 
  int v31; 
  int v32; 
  int i; 
  const Weapon *EquippedWeaponForPlayer; 
  const Weapon *v35; 
  const WeaponDef *v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  int v40; 
  int v41; 
  int v42; 
  unsigned int WeaponClass; 
  int v44; 
  weapType_t WeaponType; 
  int v46; 
  int v47; 
  BOOL IsRiotShield; 
  weapInventoryType_t inventoryType; 
  int CanFireOnEnemy; 
  PlayerHandIndex hand; 
  GWeaponMap *weaponMap; 
  const WeaponDef *v54; 
  const Weapon *v55; 
  Weapon Buf2; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 337, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( !botData->botInfo.ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 338, ASSERT_TYPE_ASSERT, "( botData->botInfo.ent )", (const char *)&queryFormat, "botData->botInfo.ent") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 339, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weap->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 340, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weap ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weap )") )
    __debugbreak();
  weaponMap = GWeaponMap::GetInstance();
  v54 = Bot_Weap_WeaponDef(ps, weap);
  inventoryType = v54->inventoryType;
  WeaponClass = BG_GetWeaponClass(weap, 0);
  WeaponType = BG_GetWeaponType(weap, 0);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2496, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponHandForViewWeapon = BG_PlayerLastWeaponHandForViewWeapon(Instance, ps);
  hand = WeaponHandForViewWeapon;
  v13 = GWeaponMap::GetInstance();
  ViewmodelWeapon = BG_GetViewmodelWeapon(v13, ps);
  v15 = 0;
  v55 = ViewmodelWeapon;
  v16 = 1;
  if ( ViewmodelWeapon->weaponIdx )
  {
    v18 = Bot_Weap_Class(ps, ViewmodelWeapon);
    ViewmodelWeapon = v55;
    v17 = 1 << v18;
  }
  else
  {
    v17 = 0;
  }
  v40 = Bot_Weap_AmmoInClip(ps, ViewmodelWeapon, WeaponHandForViewWeapon);
  v19 = BG_UsingAlternate(ps);
  IsRiotShield = BG_IsRiotShield(weap, v19);
  if ( level.time - botData->botInfo.weaponRiotShieldTime >= 1000 || (v20 = 1, !Bot_Weap_PlayerHasRiotShield(ps)) )
    v20 = 0;
  Buf2 = *Bot_Weap_GetEquippedTypeClass(ps, WEAPINVENTORY_PRIMARY, 0x101Du);
  if ( !v6 )
    Buf2 = *Bot_Weap_GetEquippedTypeClass(ps, WEAPINVENTORY_PRIMARY, 0x103Du);
  v46 = 4;
  v47 = 16;
  if ( !pEnemy || (v21 = 1, !Bot_IsVehicleEnt(pEnemy)) )
    v21 = 0;
  v42 = v21;
  if ( !pEnemy || !pEnemy->turretHandle.m_objIndex )
    v16 = 0;
  if ( !pEnemy || (sentient = pEnemy->sentient) == NULL || (v44 = 1, !Bot_IsHighAerialSentient(sentient)) )
    v44 = 0;
  CanFireOnEnemy = Bot_CanSeeAndCanFireOnEnemy(botData);
  if ( v21 && v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 384, ASSERT_TYPE_ASSERT, "( !(enemyIsVehicle && enemyIsTurret) )", (const char *)&queryFormat, "!(enemyIsVehicle && enemyIsTurret)") )
    __debugbreak();
  if ( !usableFallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 386, ASSERT_TYPE_ASSERT, "( usableFallback )", (const char *)&queryFormat, "usableFallback") )
    __debugbreak();
  *usableFallback = 0;
  if ( Buf2.weaponIdx )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1333, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v23 = GWeaponMap::GetInstance();
    v24 = BG_GetViewmodelWeapon(v23, ps);
    v25 = !memcmp_0(v24, &Buf2, 0x3Cui64) && BG_UsingAlternate(ps);
    v26 = 1 << BG_GetWeaponClass(&Buf2, v25);
  }
  else
  {
    v26 = 0;
  }
  if ( !CanFireOnEnemy || (v26 & v17) == 0 || (v27 = 1, !v40) )
    v27 = 0;
  v28 = 4101;
  if ( botData->botMatchData.personality != BOT_PERSONALITY_CAMPER )
    v28 = 4125;
  if ( Bot_PreferWeaponOverLongRange(botData, &Buf2) || v27 )
  {
    v28 |= v26;
  }
  else if ( botData->botMatchData.personality == BOT_PERSONALITY_CAMPER )
  {
    v28 |= 2u;
  }
  v29 = weap;
  v41 = v28;
  if ( !weap->weaponIdx || !BG_PlayerHasWeapon(weaponMap, ps, weap) || !ignoreAmmo && !BG_UsingAlternate(ps) && Bot_Weap_WeaponUsesAmmo(ps, weap) && !Bot_Weap_Ammo(ps, weap) && !Dvar_GetBool_Internal_DebugName(DVARBOOL_bot_SimulateNoAmmo, "bot_SimulateNoAmmo") )
    return 0i64;
  if ( IsRiotShield )
  {
    if ( v20 )
      return 10i64;
    return 0i64;
  }
  if ( v20 || WeaponType == WEAPTYPE_GRENADE || (unsigned int)(WeaponType - 6) <= 4 || WeaponClass == 8 || (unsigned int)(inventoryType - 3) <= 1 || v54->requireLockonToFire && !v42 || v44 && WeaponClass == 7 && !v54->bProjImpactExplode )
    return 0i64;
  if ( Bot_Weap_IsMelee(ps, weap) )
  {
    *usableFallback = 1;
    return 0i64;
  }
  if ( v42 )
  {
    if ( !v16 )
      v28 &= 0xFFFFFFC7;
    goto LABEL_89;
  }
  if ( v16 )
  {
LABEL_89:
    v46 = 16;
    v31 = v28 | 0x80;
    v47 = 4;
    if ( v16 )
      v31 = v28;
    v28 = v31;
    v41 = v31;
  }
  if ( (botData->botMatchData.flags & 0x40) != 0 )
  {
    if ( WeaponClass != 5 || (v32 = 1, inventoryType) )
      v32 = 0;
    if ( CanFireOnEnemy && v32 && Bot_Weap_Ammo(ps, weap) && Bot_Weap_CanDamageEnemy(botData, weap, 2.0) )
    {
      for ( i = 0; i < 15; ++i )
      {
        EquippedWeaponForPlayer = BG_GetEquippedWeaponForPlayer(weaponMap, ps, i);
        v35 = EquippedWeaponForPlayer;
        if ( EquippedWeaponForPlayer->weaponIdx )
        {
          if ( !BG_PlayerHasWeapon(weaponMap, ps, EquippedWeaponForPlayer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 533, ASSERT_TYPE_ASSERT, "( BG_PlayerHasWeapon( weaponMap, ps, weaponInInventory ) )", (const char *)&queryFormat, "BG_PlayerHasWeapon( weaponMap, ps, weaponInInventory )") )
            __debugbreak();
          v36 = Bot_Weap_WeaponDef(ps, v35);
          if ( v35->weaponIdx && BG_PlayerHasWeapon(weaponMap, ps, v35) && v36->inventoryType == WEAPINVENTORY_PRIMARY && memcmp_0(v35, weap, 0x3Cui64) && Bot_Weap_AmmoInClip(ps, v35, hand) <= 0 && Bot_Weap_WeaponUsesAmmo(ps, v35) )
            v15 += 10;
        }
      }
      v28 = v41;
      v29 = weap;
    }
  }
  if ( WeaponClass == 2 && v54->noAmmoPickup && v54->blocksProne )
    v15 += 3;
  v37 = v15 + 3;
  if ( !_bittest(&v28, WeaponClass) )
    v37 = v15;
  v38 = v37 + 3;
  if ( ((1 << WeaponType) & v46) == 0 )
    v38 = v37;
  v39 = v38 + 1;
  if ( ((1 << WeaponType) & v47) == 0 )
    v39 = v38;
  if ( !memcmp_0(v29, v55, 0x3Cui64) )
    ++v39;
  return v39;
}

/*
==============
Bot_Weap_Type
==============
*/
weapType_t Bot_Weap_Type(const playerState_s *ps, const Weapon *weapon)
{
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  bool v6; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1271, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1272, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weapon )") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, ps);
  v6 = !memcmp_0(ViewmodelWeapon, weapon, 0x3Cui64) && BG_UsingAlternate(ps);
  return BG_GetWeaponType(weapon, v6);
}

/*
==============
Bot_Weap_Update
==============
*/
void Bot_Weap_Update(bot_data_t *botData, usercmd_s *cmd)
{
  GWeaponMap *Instance; 
  playerState_s *playerState; 
  const BgWeaponMap *v6; 
  gentity_s *Enemy; 
  playerState_s *v8; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  int WeaponStateForViewWeapon; 
  unsigned __int16 weaponIdx; 
  unsigned __int64 v12; 
  const Weapon *v13; 
  BOOL v14; 
  __int64 v15; 
  char v16; 
  bool IsUseButtonPressed; 
  Weapon *v18; 
  __int128 v19; 
  double v20; 
  int v21; 
  Weapon result; 
  bool v23; 
  gentity_s *pEnemy; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 636, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 637, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  playerState = botData->botInfo.playerState;
  v6 = Instance;
  Enemy = Bot_GetEnemy(botData);
  v8 = botData->botInfo.playerState;
  pEnemy = Enemy;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  p_eFlags = &v8->eFlags;
  if ( !p_eFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 6u) )
  {
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 7u) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
        __debugbreak();
    }
    else
    {
      WeaponStateForViewWeapon = Bot_Weap_GetWeaponStateForViewWeapon(playerState);
      weaponIdx = botData->botInfo.scriptWeapon.weaponIdx;
      v12 = WeaponStateForViewWeapon;
      v13 = BG_HighPriorityWeapon_Get(v6, playerState);
      v14 = v13->weaponIdx && BG_HighPriorityWeapon_MustSwitch(v6, playerState);
      if ( weaponIdx || v14 || ((unsigned int)v12 > 0x3B || (v15 = 0xC01001C01C3003Fi64, !_bittest64(&v15, v12)) ? (v16 = 0) : (v16 = 1), (v23 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&botData->botInfo.playerState->pm_flags, ACTIVE, 5u), IsUseButtonPressed = Bot_IsUseButtonPressed(botData), v16) && !v23 && !IsUseButtonPressed) )
      {
        cmd->weapon = *BG_GetCurrentWeaponForPlayer(v6, playerState);
        if ( v14 && BG_PlayerHasWeapon(v6, playerState, v13) )
        {
          if ( memcmp_0(&cmd->weapon, v13, 0x3Cui64) )
          {
            *(__m256i *)&cmd->weapon.weaponIdx = *(__m256i *)&v13->weaponIdx;
            *(_OWORD *)&cmd->weapon.attachmentVariationIndices[5] = *(_OWORD *)&v13->attachmentVariationIndices[5];
            *(double *)&cmd->weapon.attachmentVariationIndices[21] = *(double *)&v13->attachmentVariationIndices[21];
            *(_DWORD *)&cmd->weapon.weaponCamo = *(_DWORD *)&v13->weaponCamo;
          }
        }
        else if ( weaponIdx && BG_PlayerHasWeapon(v6, playerState, &botData->botInfo.scriptWeapon) )
        {
          if ( memcmp_0(&cmd->weapon, (char *)&botData->scriptedAgentInfo + 27964, 0x3Cui64) )
          {
            *(__m256i *)&cmd->weapon.weaponIdx = *(__m256i *)((char *)&botData->scriptedAgentInfo + 27964);
            *(_OWORD *)&cmd->weapon.attachmentVariationIndices[5] = *(_OWORD *)((char *)&botData->scriptedAgentInfo + 27996);
            *(double *)&cmd->weapon.attachmentVariationIndices[21] = *(double *)((char *)&botData->scriptedAgentInfo + 28012);
            *(_DWORD *)&cmd->weapon.weaponCamo = *((_DWORD *)&botData->scriptedAgentInfo + 7005);
          }
        }
        else if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&playerState->weapCommon.weapFlags, ACTIVE, 0xEu) || !cmd->weapon.weaponIdx )
        {
          botData->botInfo.scriptWeapon = NULL_WEAPON;
          v18 = Bot_Weap_PickBest(&result, botData, pEnemy, 0);
          v19 = *(_OWORD *)&v18->attachmentVariationIndices[5];
          v20 = *(double *)&v18->attachmentVariationIndices[21];
          v21 = *(_DWORD *)&v18->weaponCamo;
          if ( *(_WORD *)&NULL_WEAPON.attachmentVariationIndices[21] )
          {
            *(__m256i *)&cmd->weapon.weaponIdx = *(__m256i *)&v18->weaponIdx;
            *(_OWORD *)&cmd->weapon.attachmentVariationIndices[5] = v19;
            *(double *)&cmd->weapon.attachmentVariationIndices[21] = v20;
            *(_DWORD *)&cmd->weapon.weaponCamo = v21;
          }
          else
          {
            Bot_Weap_PickBest(&result, botData, pEnemy, 1);
          }
        }
      }
    }
  }
}

/*
==============
Bot_Weap_UpdateReload
==============
*/
__int64 Bot_Weap_UpdateReload(const bot_data_t *botData, usercmd_s *cmd)
{
  GWeaponMap *Instance; 
  playerState_s *playerState; 
  const Weapon *ViewmodelWeapon; 
  GWeaponMap *v6; 
  int v7; 
  int WeaponStateForViewWeapon; 
  const dvar_t *v9; 
  unsigned __int64 v10; 
  int v11; 
  int ammoCount; 
  bool v13; 
  int v14; 
  __int64 v15; 
  bool v16; 
  int IsClipOnly; 
  bool v19; 
  int ClipLowAmmo; 
  int v21; 
  int v22; 
  int v23; 
  bool v24; 
  int ClipSize; 
  int v26; 
  float v27; 
  float v28; 
  float v29; 
  double ReloadTimeScale; 
  float v31; 
  int time; 
  __int64 v33; 
  int v34; 
  int v35; 
  double v36; 
  int IsForcedFiring; 
  BOOL v38; 
  int CanFireOnEnemy; 
  PlayerHandIndex hand; 
  BgWeaponMap *weaponMap; 
  AmmoStore result; 
  AmmoStore r_ammo2; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1384, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  playerState = botData->botInfo.playerState;
  weaponMap = Instance;
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, playerState);
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2496, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = GWeaponMap::GetInstance();
  hand = BG_PlayerLastWeaponHandForViewWeapon(v6, playerState);
  if ( !ViewmodelWeapon->weaponIdx )
    return 0i64;
  if ( !Bot_Weap_WeaponUsesAmmo(playerState, ViewmodelWeapon) )
    return 0i64;
  v7 = 1;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&playerState->weapCommon.weapFlags, ACTIVE, 0x1Au) )
    return 0i64;
  WeaponStateForViewWeapon = Bot_Weap_GetWeaponStateForViewWeapon(playerState);
  v9 = DVARBOOL_bot_SimulateNoAmmo;
  v10 = WeaponStateForViewWeapon;
  if ( !DVARBOOL_bot_SimulateNoAmmo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_SimulateNoAmmo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    v11 = 0;
    ammoCount = 0;
  }
  else if ( Bot_Weap_IsMelee(playerState, ViewmodelWeapon) )
  {
    v11 = 0;
    ammoCount = 0;
  }
  else
  {
    v13 = BG_UsingAlternate(playerState);
    if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1322, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    r_ammo2 = *BG_AmmoStoreForWeapon(&result, ViewmodelWeapon, v13);
    if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1304, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v11 = 0;
    v14 = 0;
    while ( !BG_IsAmmoCompatible(&playerState->weapCommon.ammoNotInClip[v14].ammoType, &r_ammo2) )
    {
      if ( (unsigned int)++v14 >= 0xF )
        goto LABEL_26;
    }
    if ( (playerState_s *)((char *)playerState + 68 * v14) == (playerState_s *)-1912i64 )
    {
LABEL_26:
      ammoCount = 0;
      goto LABEL_27;
    }
    ammoCount = playerState->weapCommon.ammoNotInClip[v14].ammoCount;
LABEL_27:
    v7 = 1;
  }
  if ( (unsigned int)v10 > 0x3B || (v15 = 0xC01000001C30001i64, !_bittest64(&v15, v10)) )
    v7 = 0;
  CanFireOnEnemy = Bot_CanSeeAndCanFireOnEnemy(botData);
  IsForcedFiring = Bot_IsForcedFiring(botData);
  v16 = BG_UsingAlternate(playerState);
  IsClipOnly = BG_WeaponIsClipOnly(ViewmodelWeapon, v16);
  if ( BG_CanSprintReload(playerState) )
  {
    if ( !v7 && (unsigned int)(v10 - 34) > 2 )
      return 0i64;
  }
  else if ( !v7 )
  {
    return 0i64;
  }
  if ( !IsClipOnly && ammoCount && !CanFireOnEnemy && !IsForcedFiring )
  {
    v38 = Bot_Weap_ReloadTime(playerState, ViewmodelWeapon) > 3000;
    v19 = BG_UsingAlternate(playerState);
    ClipLowAmmo = BG_GetClipLowAmmo(playerState, ViewmodelWeapon, v19);
    v21 = Bot_Weap_AmmoInClip(playerState, ViewmodelWeapon, hand);
    v22 = 999;
    v23 = 999;
    if ( v21 < 999 )
      v23 = v21;
    v24 = BG_UsingAlternate(playerState);
    ClipSize = BG_GetClipSize(playerState, ViewmodelWeapon, v24);
    v26 = 999;
    if ( ClipSize < 999 )
      v26 = ClipSize;
    v27 = (float)v26;
    if ( v26 <= 0 )
    {
      v28 = 0.0;
    }
    else
    {
      if ( ClipLowAmmo < 999 )
        v22 = ClipLowAmmo;
      v28 = (float)v22 / v27;
    }
    if ( v23 < v26 )
    {
      v45 = FLOAT_0_1;
      if ( v38 )
      {
        v46 = FLOAT_0_1;
        v29 = FLOAT_1_0;
        v47 = v28;
        v48 = v28 * 1.5;
      }
      else
      {
        v29 = FLOAT_1_0;
        v48 = FLOAT_1_0;
        v46 = v28;
        v47 = v28 * 1.5;
      }
      v49 = v29;
      ReloadTimeScale = BG_GetReloadTimeScale(weaponMap, playerState, ViewmodelWeapon, 0, v23, 0);
      v31 = *(float *)&ReloadTimeScale;
      if ( *(float *)&ReloadTimeScale <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1470, ASSERT_TYPE_ASSERT, "(reloadTimeScaler > 0.0f)", (const char *)&queryFormat, "reloadTimeScaler > 0.0f") )
        __debugbreak();
      if ( !v38 )
        v31 = *(float *)&ReloadTimeScale * botData->botMatchData.intelligentReload;
      time = level.time;
      v33 = 0i64;
      do
      {
        v34 = (int)(float)(v27 * *(float *)((char *)&v45 + v33 * 4));
        if ( v26 < v34 )
          v34 = v26;
        if ( v34 < 1 )
          v34 = 1;
        if ( v23 < v34 )
        {
          v35 = (int)(float)((float)RELOAD_THRESHOLD_TIME[v33] * v31);
          if ( time - botData->botInfo.enemyTrack.lastVisTime > v35 && time - botData->botInfo.enemyTrack.awareTime > v35 )
          {
            v36 = G_random();
            if ( *(float *)&v36 < 0.050000001 )
            {
              cmd->buttons |= 0x10ui64;
              return 1i64;
            }
            time = level.time;
          }
        }
        ++v11;
        ++v33;
      }
      while ( v11 < 5 );
    }
  }
  return 0i64;
}

/*
==============
Bot_Weap_VerifyWeaponDamageRanges
==============
*/
void Bot_Weap_VerifyWeaponDamageRanges(const playerState_s *ps, const Weapon *weapon, float minRange, float maxRange)
{
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  __int64 weaponIdx; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1703, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1704, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weapon )") )
    __debugbreak();
  _XMM0 = 0i64;
  if ( minRange < 0.0 )
  {
    if ( ps )
    {
      p_weapFlags = &ps->weapCommon.weapFlags;
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) )
      {
LABEL_15:
        weaponIdx = weapon->weaponIdx;
        if ( (unsigned int)weaponIdx > bg_lastParsedWeaponIndex )
        {
          LODWORD(v11) = weapon->weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v11, bg_lastParsedWeaponIndex) )
            __debugbreak();
        }
        if ( !bg_weaponCompleteDefs[weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
          __debugbreak();
        __asm { vxorpd  xmm0, xmm0, xmm0 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1711, ASSERT_TYPE_ASSERT, "(minRange >= MIN_DMG_RANGE)", "%s\n\tInvalid min damage range for weapon '%s'. Range: %g, should be >= %g", "minRange >= MIN_DMG_RANGE", bg_weaponCompleteDefs[weaponIdx]->szInternalName, minRange, *(double *)&_XMM0) )
          __debugbreak();
        goto LABEL_23;
      }
    }
    else
    {
      p_weapFlags = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)1832;
    }
    if ( ps && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x11u) )
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu);
    goto LABEL_15;
  }
LABEL_23:
  if ( maxRange > 30000.0 )
  {
    if ( ps && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u) )
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Bu);
    v10 = weapon->weaponIdx;
    if ( (unsigned int)v10 > bg_lastParsedWeaponIndex )
    {
      LODWORD(v12) = bg_lastParsedWeaponIndex;
      LODWORD(v11) = weapon->weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v11, v12) )
        __debugbreak();
    }
    if ( !bg_weaponCompleteDefs[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1712, ASSERT_TYPE_ASSERT, "(maxRange <= MAX_DMG_RANGE)", "%s\n\tInvalid max damage range for weapon '%s'. Range: %g, should be <= %g", "maxRange <= MAX_DMG_RANGE", bg_weaponCompleteDefs[v10]->szInternalName, maxRange, DOUBLE_30000_0) )
      __debugbreak();
  }
}

/*
==============
Bot_Weap_WeaponDef
==============
*/
WeaponDef *Bot_Weap_WeaponDef(const playerState_s *ps, const Weapon *weapon)
{
  unsigned int weaponIdx; 
  bool v5; 
  WeaponDef **v6; 
  WeaponDef *v7; 
  __int64 v9; 

  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 741, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weapon )") )
    __debugbreak();
  BG_UsingAlternate(ps);
  weaponIdx = weapon->weaponIdx;
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v9) = weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v9, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  v5 = bg_weaponDefs[(unsigned __int16)weaponIdx] == NULL;
  v6 = &bg_weaponDefs[(unsigned __int16)weaponIdx];
  if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v7 = *v6;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 744, ASSERT_TYPE_ASSERT, "( weaponDef )", (const char *)&queryFormat, "weaponDef") )
    __debugbreak();
  return v7;
}

/*
==============
Bot_Weap_WeaponDoesSplashDamage
==============
*/
bool Bot_Weap_WeaponDoesSplashDamage(const bot_data_t *const botData)
{
  playerState_s *playerState; 
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  const Weapon *v5; 
  bool v6; 
  double ExplRadius; 
  bool result; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2435, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  playerState = botData->botInfo.playerState;
  Instance = GWeaponMap::GetInstance();
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, playerState);
  v5 = ViewmodelWeapon;
  result = 0;
  if ( ViewmodelWeapon->weaponIdx )
  {
    if ( Bot_Weap_WeaponDef(botData->botInfo.playerState, ViewmodelWeapon)->bBulletExplosiveDamage )
    {
      v6 = BG_UsingAlternate(botData->botInfo.playerState);
      ExplRadius = BG_WeaponBulletFire_GetExplRadius(v5, v6);
      if ( *(float *)&ExplRadius > 0.0 )
        return 1;
    }
  }
  return result;
}

/*
==============
Bot_Weap_WeaponForName
==============
*/
Weapon *Bot_Weap_WeaponForName(Weapon *result, const char *name)
{
  Weapon *WeaponForName; 
  __int128 v4; 
  double v5; 
  Weapon resulta; 

  WeaponForName = G_Weapon_GetWeaponForName(&resulta, name);
  v4 = *(_OWORD *)&WeaponForName->attachmentVariationIndices[5];
  *(__m256i *)&result->weaponIdx = *(__m256i *)&WeaponForName->weaponIdx;
  v5 = *(double *)&WeaponForName->attachmentVariationIndices[21];
  LODWORD(WeaponForName) = *(_DWORD *)&WeaponForName->weaponCamo;
  *(_OWORD *)&result->attachmentVariationIndices[5] = v4;
  *(double *)&result->attachmentVariationIndices[21] = v5;
  *(_DWORD *)&result->weaponCamo = (_DWORD)WeaponForName;
  return result;
}

/*
==============
Bot_Weap_WeaponHasVariableZoom
==============
*/
bool Bot_Weap_WeaponHasVariableZoom(const bot_data_t *const botData)
{
  playerState_s *playerState; 
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  bool v5; 
  playerState_s *v6; 
  GWeaponMap *v7; 
  int v8; 
  int v9; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2461, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  playerState = botData->botInfo.playerState;
  Instance = GWeaponMap::GetInstance();
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, playerState);
  v5 = BG_UsingAlternate(botData->botInfo.playerState);
  v6 = botData->botInfo.playerState;
  LOBYTE(playerState) = v5;
  v7 = GWeaponMap::GetInstance();
  v8 = BG_ADSZoomCount(v7, v6, ViewmodelWeapon, (bool)playerState);
  v9 = v8;
  if ( v8 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2466, ASSERT_TYPE_ASSERT, "( adsZoomCount ) <= ( 3 )", "%s <= %s\n\t%i, %i", "adsZoomCount", "WEAPON_VZSCOPE_MAXFOVS", v8, 3) )
    __debugbreak();
  return v9 > 1;
}

/*
==============
Bot_Weap_WeaponRequiresLockon
==============
*/
_BOOL8 Bot_Weap_WeaponRequiresLockon(const playerState_s *const ps, const Weapon *weapon)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2507, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return Bot_Weap_WeaponDef(ps, weapon)->requireLockonToFire;
}

/*
==============
Bot_Weap_WeaponUsesAmmo
==============
*/
_BOOL8 Bot_Weap_WeaponUsesAmmo(const playerState_s *ps, const Weapon *weapon)
{
  const WeaponDef *v4; 
  bool v5; 
  _BOOL8 result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 17, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 18, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weapon )") )
    __debugbreak();
  v4 = Bot_Weap_WeaponDef(ps, weapon);
  result = 0;
  if ( !Bot_Weap_IsMelee(ps, weapon) && (v4->iMaxAmmo || v4->iStartAmmo) )
  {
    v5 = BG_UsingAlternate(ps);
    if ( BG_AmmoUsedPerShot(weapon, v5) )
      return 1;
  }
  return result;
}

