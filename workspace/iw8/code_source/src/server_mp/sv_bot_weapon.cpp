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
  const WeaponDef *v12; 
  void *retaddr; 
  int v25; 
  int v26; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmm6, xmm2
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1782, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1783, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weapon )") )
    __debugbreak();
  v12 = Bot_Weap_WeaponDef(ps, weapon);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vmovss  xmm7, cs:__real@44fa0000 }
  if ( weapon->weaponIdx && Bot_Weap_Class(ps, weapon) == WEAPCLASS_ROCKETLAUNCHER )
  {
    if ( v12->bProjImpactExplode )
      __asm { vminss  xmm6, xmm6, cs:__real@45bb8000 }
    else
      __asm { vminss  xmm6, xmm6, xmm7 }
  }
  if ( BG_UsingAlternate(ps) )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@457a0000
      vcmpltss xmm1, xmm0, xmm6
      vblendvps xmm0, xmm6, xmm7, xmm1
      vmovaps xmm6, xmm0
      vmovss  [rsp+68h+arg_10], xmm0
    }
  }
  if ( !ignoreAttachments )
  {
    *(float *)&_XMM0 = Bot_Weap_GetMaxRangeAdjustmentFromFOV(ps, weapon);
    __asm
    {
      vmovss  [rsp+68h+arg_10], xmm0
      vmovaps xmm7, xmm0
    }
    if ( (v25 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1805, ASSERT_TYPE_ASSERT, "( !IS_NAN( attachmentAdjustedRange ) )", (const char *)&queryFormat, "!IS_NAN( attachmentAdjustedRange )") )
      __debugbreak();
    __asm { vmulss  xmm6, xmm6, xmm7 }
  }
  __asm { vmovss  [rsp+68h+arg_10], xmm6 }
  if ( (v26 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1809, ASSERT_TYPE_ASSERT, "( !IS_NAN( maxRange ) )", (const char *)&queryFormat, "!IS_NAN( maxRange )") )
    __debugbreak();
  __asm
  {
    vmovaps xmm7, [rsp+68h+var_38]
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+68h+var_28]
  }
  return *(float *)&_XMM0;
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
  _RAX = BG_AmmoStoreForWeapon(&result, weapon, v7);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0E8h+r_clipIndex.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+0E8h+r_clipIndex.weapon.attachmentVariationIndices+5], ymm1
  }
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
  unsigned int v9; 
  int v10; 
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
  _RAX = BG_AmmoStoreForWeapon(&result, weapon, v5);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0E8h+r_ammo2.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+0E8h+r_ammo2.weapon.attachmentVariationIndices+5], ymm1
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1304, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = 0;
  v10 = 0;
  while ( !BG_IsAmmoCompatible(&ps->weapCommon.ammoNotInClip[v10].ammoType, &r_ammo2) )
  {
    if ( (unsigned int)++v10 >= 0xF )
      return 0i64;
  }
  if ( (const playerState_s *)((char *)ps + 68 * v10) != (const playerState_s *)-1912i64 )
    return (unsigned int)ps->weapCommon.ammoNotInClip[v10].ammoCount;
  return v9;
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
__int64 Bot_Weap_BotFacingScriptedGrenadeTarget(const bot_data_t *botData)
{
  vec3_t forward; 

  _RBX = botData;
  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1101, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( (*((_BYTE *)&_RBX->scriptedAgentInfo + 28228) & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1102, ASSERT_TYPE_ASSERT, "( botData->botInfo.grenadeFlags & ( 1 << 1 ) )", (const char *)&queryFormat, "botData->botInfo.grenadeFlags & BOT_FLAG_GRENADE_SCRIPTED_GRENADE") )
    __debugbreak();
  AngleVectors(&_RBX->botInfo.ent->r.currentAngles, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+2328h]
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+58h+forward+8], xmm0
    vsubss  xmm4, xmm1, dword ptr [rax+134h]
    vmovss  xmm0, dword ptr [rbx+2324h]
    vsubss  xmm5, xmm0, dword ptr [rax+130h]
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm2, xmm4, xmm4
    vaddss  xmm1, xmm2, xmm0
    vsqrtss xmm3, xmm1, xmm1
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm1
    vmulss  xmm3, xmm0, dword ptr [rsp+58h+forward+4]
    vmulss  xmm1, xmm5, xmm1
    vmulss  xmm2, xmm1, dword ptr [rsp+58h+forward]
    vaddss  xmm0, xmm3, xmm2
    vcomiss xmm0, cs:__real@3f7eb852
  }
  return 1i64;
}

/*
==============
Bot_Weap_CanDamageEnemy
==============
*/

__int64 __fastcall Bot_Weap_CanDamageEnemy(const bot_data_t *botData, const Weapon *weapon, double maxRangeScalar)
{
  bool v9; 
  bool v10; 
  const playerState_s *playerState; 
  char v15; 
  bool v16; 
  const Weapon *PrimaryWeapon; 
  bool v18; 
  GWeaponMap *Instance; 
  __int64 result; 
  bool v26; 
  double isAlternate; 
  float *minDamageRange; 
  int v34; 
  int v35; 
  float maxDamageRange; 
  float v37; 

  __asm
  {
    vmovaps [rsp+98h+var_48], xmm6
    vmovaps [rsp+98h+var_58], xmm7
  }
  _RBP = botData;
  __asm { vmovaps xmm7, xmm2 }
  v9 = botData == NULL;
  if ( !botData )
  {
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2106, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData");
    v9 = !v10;
    if ( v10 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
  }
  if ( v9 )
  {
    __asm
    {
      vxorpd  xmm0, xmm0, xmm0
      vmovsd  [rsp+98h+minDamageRange], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  qword ptr [rsp+98h+isAlternate], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2107, ASSERT_TYPE_ASSERT, "( maxRangeScalar ) > ( 0.0f )", "maxRangeScalar > 0.0f\n\t%g, %g", isAlternate, *(double *)&minDamageRange) )
      __debugbreak();
  }
  playerState = _RBP->botInfo.playerState;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2111, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx )
    goto LABEL_32;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1963, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v15 = 0;
  v16 = weapon->weaponIdx == 0;
  if ( weapon->weaponIdx )
  {
    PrimaryWeapon = Bot_Weap_GetPrimaryWeapon(playerState, weapon);
    v15 = 0;
    v16 = PrimaryWeapon->weaponIdx == 0;
    if ( PrimaryWeapon->weaponIdx )
    {
      v18 = BG_UsingAlternate(playerState);
      Instance = GWeaponMap::GetInstance();
      BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Instance, playerState, &playerState->perks, PrimaryWeapon, v18, &v37, &maxDamageRange);
      __asm
      {
        vmovss  xmm0, [rsp+98h+arg_10]
        vmovss  [rsp+98h+arg_0], xmm0
      }
      if ( (v34 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1977, ASSERT_TYPE_ASSERT, "( !IS_NAN( minDamageRange ) )", (const char *)&queryFormat, "!IS_NAN( minDamageRange )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, [rsp+98h+arg_8]
        vmovss  [rsp+98h+arg_0], xmm0
      }
      if ( (v35 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1978, ASSERT_TYPE_ASSERT, "( !IS_NAN( maxDamageRange ) )", (const char *)&queryFormat, "!IS_NAN( maxDamageRange )") )
        __debugbreak();
      __asm { vmovss  xmm2, [rsp+98h+arg_10]; currentMaxRange }
      *(float *)&_XMM0 = Bot_GetAdjustedMaxRange(playerState, PrimaryWeapon, *(double *)&_XMM2, 0);
      __asm
      {
        vmovaps xmm3, xmm0; maxRange
        vxorps  xmm2, xmm2, xmm2; minRange
        vmovss  [rsp+98h+arg_10], xmm0
      }
      Bot_Weap_VerifyWeaponDamageRanges(playerState, PrimaryWeapon, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm { vmovss  xmm6, [rsp+98h+arg_10] }
    }
  }
  __asm { vcomiss xmm6, dword ptr [rbp+2394h] }
  if ( v15 | v16 )
  {
    if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !weapon->weaponIdx || Bot_Weap_Class(playerState, weapon) != WEAPCLASS_SPREAD )
    {
      v26 = BG_UsingAlternate(playerState);
      if ( BG_GetMinDamage(WEAP_DMG_CALC_TYPE_DEFAULT, weapon, v26) > 0 )
      {
        __asm
        {
          vmulss  xmm0, xmm6, xmm7
          vcomiss xmm0, dword ptr [rbp+2394h]
        }
        result = 0i64;
        goto LABEL_33;
      }
    }
LABEL_32:
    result = 0i64;
    goto LABEL_33;
  }
  result = 1i64;
LABEL_33:
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_48]
    vmovaps xmm7, [rsp+98h+var_58]
  }
  return result;
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

  _RBX = cmd;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 710, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 711, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  _RAX = BG_GetCurrentWeaponForPlayer(Instance, ps);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx+24h], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbx+44h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rbx+54h], xmm0
  }
  *(_DWORD *)&_RBX->weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
    vmovups ymmword ptr [rbx+60h], ymm0
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    vmovups xmmword ptr [rbx+80h], xmm1
    vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    vmovsd  qword ptr [rbx+90h], xmm0
  }
  *(_DWORD *)&_RBX->offHand.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
}

/*
==============
Bot_Weap_CurrentWeapCanDamageEnemy
==============
*/

int __fastcall Bot_Weap_CurrentWeapCanDamageEnemy(const bot_data_t *botData, double maxRangeScalar)
{
  bool v6; 
  bool v7; 
  playerState_s *playerState; 
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  double v16; 
  double v17; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2093, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  v6 = botData->botInfo.playerState == NULL;
  if ( !botData->botInfo.playerState )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2094, ASSERT_TYPE_ASSERT, "( botData->botInfo.playerState )", (const char *)&queryFormat, "botData->botInfo.playerState");
    v6 = !v7;
    if ( v7 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v6 )
  {
    __asm
    {
      vmovsd  [rsp+58h+var_28], xmm0
      vcvtss2sd xmm1, xmm6, xmm6
      vmovsd  [rsp+58h+var_30], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2095, ASSERT_TYPE_ASSERT, "( maxRangeScalar ) > ( 0.0f )", "maxRangeScalar > 0.0f\n\t%g, %g", v16, v17) )
      __debugbreak();
  }
  playerState = botData->botInfo.playerState;
  Instance = GWeaponMap::GetInstance();
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, playerState);
  __asm
  {
    vmovaps xmm2, xmm6; maxRangeScalar
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return Bot_Weap_CanDamageEnemy(botData, ViewmodelWeapon, *(float *)&_XMM2);
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
  char v15; 
  int v17; 
  float minDamageRange; 
  float maxDamageRange; 

  _RDI = max;
  _R14 = min;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1819, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1820, ASSERT_TYPE_ASSERT, "( min )", (const char *)&queryFormat, "min") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1821, ASSERT_TYPE_ASSERT, "( max )", (const char *)&queryFormat, "max") )
    __debugbreak();
  if ( weapon->weaponIdx && (PrimaryWeapon = Bot_Weap_GetPrimaryWeapon(ps, weapon), PrimaryWeapon->weaponIdx) )
  {
    isAlternate = BG_UsingAlternate(ps);
    Instance = GWeaponMap::GetInstance();
    BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Instance, ps, &ps->perks, PrimaryWeapon, isAlternate, &minDamageRange, &maxDamageRange);
    __asm
    {
      vmovss  xmm0, [rsp+58h+arg_0]
      vmovss  xmm3, [rsp+58h+arg_8]
      vucomiss xmm0, xmm3
      vmulss  xmm2, xmm0, cs:__real@3f400000
    }
    if ( !v15 )
    {
      __asm
      {
        vmulss  xmm1, xmm2, cs:__real@3f666666
        vmulss  xmm0, xmm3, cs:__real@3dcccccd
        vaddss  xmm2, xmm1, xmm0; currentMaxRange
      }
    }
    v17 = ignoreAttachments;
    __asm { vmovss  dword ptr [rdi], xmm2 }
    *(float *)&_XMM0 = Bot_GetAdjustedMaxRange(ps, PrimaryWeapon, *(double *)&_XMM2, v17);
    __asm
    {
      vmulss  xmm2, xmm0, cs:__real@3e800000; minRange
      vmovss  dword ptr [rdi], xmm0
      vmovss  dword ptr [r14], xmm2
      vmovss  xmm3, dword ptr [rdi]; maxRange
    }
    Bot_Weap_VerifyWeaponDamageRanges(ps, PrimaryWeapon, *(float *)&_XMM2, *(float *)&_XMM3);
  }
  else
  {
    *_R14 = 0.0;
    *_RDI = 0.0;
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
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1501, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( weapon->weaponIdx )
  {
    switch ( Bot_Weap_Class(ps, weapon) )
    {
      case WEAPCLASS_RIFLE:
      case WEAPCLASS_PISTOL:
      case WEAPCLASS_ROCKETLAUNCHER:
        __asm { vmovss  xmm0, cs:__real@3f7851ec; jumptable 0000000141650BB6 cases 0,5,7 }
        break;
      case WEAPCLASS_SNIPER:
        __asm { vmovss  xmm0, cs:__real@3f7ae148; jumptable 0000000141650BB6 case 1 }
        break;
      case WEAPCLASS_MG:
      case WEAPCLASS_TURRET:
        __asm { vmovss  xmm0, cs:__real@3f5eb852; jumptable 0000000141650BB6 cases 2,8 }
        break;
      case WEAPCLASS_SMG:
        __asm { vmovss  xmm0, cs:__real@3f70a3d7; jumptable 0000000141650BB6 case 3 }
        break;
      default:
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    __asm { vmovss  xmm0, cs:__real@bf800000; jumptable 0000000141650BB6 default case, cases 4,6 }
  }
  return *(float *)&_XMM0;
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
  OffhandSlot v11; 

  _RBX = offHand;
  Instance = GWeaponMap::GetInstance();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 939, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)(typeDesired - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 940, ASSERT_TYPE_ASSERT, "( (typeDesired == BOT_GRENADE_TYPE_LETHAL) || (typeDesired == BOT_GRENADE_TYPE_TACTICAL) )", (const char *)&queryFormat, "(typeDesired == BOT_GRENADE_TYPE_LETHAL) || (typeDesired == BOT_GRENADE_TYPE_TACTICAL)") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 941, ASSERT_TYPE_ASSERT, "( offHand )", (const char *)&queryFormat, "offHand") )
    __debugbreak();
  v7 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    vmovsd  xmm2, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
  }
  if ( typeDesired == BOT_GRENADE_TYPE_LETHAL )
  {
    v11 = OFFHAND_SLOT_PRIMARY;
LABEL_14:
    _RAX = PM_Weapon_GetOffHandWeaponForSlot(Instance, ps, v11);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovsd  xmm2, qword ptr [rax+30h]
    }
    v7 = *(_DWORD *)&_RAX->weaponCamo;
    goto LABEL_15;
  }
  if ( typeDesired == BOT_GRENADE_TYPE_TACTICAL )
  {
    v11 = OFFHAND_SLOT_SECONDARY;
    goto LABEL_14;
  }
LABEL_15:
  __asm
  {
    vmovups ymmword ptr [rbx], ymm0
    vmovups xmmword ptr [rbx+20h], xmm1
    vmovsd  qword ptr [rbx+30h], xmm2
  }
  *(_DWORD *)&_RBX->weaponCamo = v7;
  return _RBX->weaponIdx != 0;
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
  int v18; 
  float maxDamageRange; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1963, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( weapon->weaponIdx && (PrimaryWeapon = Bot_Weap_GetPrimaryWeapon(ps, weapon), PrimaryWeapon->weaponIdx) )
  {
    isAlternate = BG_UsingAlternate(ps);
    Instance = GWeaponMap::GetInstance();
    BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Instance, ps, &ps->perks, PrimaryWeapon, isAlternate, &minDamageRange, &maxDamageRange);
    __asm
    {
      vmovss  xmm0, [rsp+68h+arg_0]
      vmovss  [rsp+68h+arg_8], xmm0
    }
    if ( (v18 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1977, ASSERT_TYPE_ASSERT, "( !IS_NAN( minDamageRange ) )", (const char *)&queryFormat, "!IS_NAN( minDamageRange )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, [rsp+68h+arg_18]
      vmovss  [rsp+68h+arg_8], xmm0
    }
    if ( (v18 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1978, ASSERT_TYPE_ASSERT, "( !IS_NAN( maxDamageRange ) )", (const char *)&queryFormat, "!IS_NAN( maxDamageRange )") )
      __debugbreak();
    __asm { vmovss  xmm2, [rsp+68h+arg_0]; currentMaxRange }
    *(float *)&_XMM0 = Bot_GetAdjustedMaxRange(ps, PrimaryWeapon, *(double *)&_XMM2, ignoreAttachments);
    __asm
    {
      vmovaps xmm3, xmm0; maxRange
      vxorps  xmm2, xmm2, xmm2; minRange
      vmovss  [rsp+68h+arg_0], xmm0
    }
    Bot_Weap_VerifyWeaponDamageRanges(ps, PrimaryWeapon, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovss  xmm0, [rsp+68h+arg_0] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
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
  OffhandSlot v12; 
  playerState_s *v14; 
  int v15; 
  const WeaponDef *v16; 
  OffhandClass offhandClass; 
  int v18; 
  int v19; 
  playerState_s *v20; 
  BOOL v21; 

  _RDI = offHand;
  if ( !botInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 965, ASSERT_TYPE_ASSERT, "( botInfo )", (const char *)&queryFormat, "botInfo") )
    __debugbreak();
  if ( !botInfo->playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 966, ASSERT_TYPE_ASSERT, "( botInfo->playerState )", (const char *)&queryFormat, "botInfo->playerState") )
    __debugbreak();
  if ( (unsigned int)(typeDesired - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 967, ASSERT_TYPE_ASSERT, "( (typeDesired == BOT_GRENADE_TYPE_LETHAL) || (typeDesired == BOT_GRENADE_TYPE_TACTICAL) )", (const char *)&queryFormat, "(typeDesired == BOT_GRENADE_TYPE_LETHAL) || (typeDesired == BOT_GRENADE_TYPE_TACTICAL)") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 968, ASSERT_TYPE_ASSERT, "( offHand )", (const char *)&queryFormat, "offHand") )
    __debugbreak();
  playerState = botInfo->playerState;
  Instance = GWeaponMap::GetInstance();
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 939, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)(typeDesired - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 940, ASSERT_TYPE_ASSERT, "( (typeDesired == BOT_GRENADE_TYPE_LETHAL) || (typeDesired == BOT_GRENADE_TYPE_TACTICAL) )", (const char *)&queryFormat, "(typeDesired == BOT_GRENADE_TYPE_LETHAL) || (typeDesired == BOT_GRENADE_TYPE_TACTICAL)") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 941, ASSERT_TYPE_ASSERT, "( offHand )", (const char *)&queryFormat, "offHand") )
    __debugbreak();
  v8 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    vmovsd  xmm2, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
  }
  if ( typeDesired == BOT_GRENADE_TYPE_LETHAL )
  {
    v12 = OFFHAND_SLOT_PRIMARY;
LABEL_26:
    _RAX = PM_Weapon_GetOffHandWeaponForSlot(Instance, playerState, v12);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovsd  xmm2, qword ptr [rax+30h]
    }
    v8 = *(_DWORD *)&_RAX->weaponCamo;
    goto LABEL_27;
  }
  if ( typeDesired == BOT_GRENADE_TYPE_TACTICAL )
  {
    v12 = OFFHAND_SLOT_SECONDARY;
    goto LABEL_26;
  }
LABEL_27:
  __asm
  {
    vmovups ymmword ptr [rdi], ymm0
    vmovups xmmword ptr [rdi+20h], xmm1
    vmovsd  qword ptr [rdi+30h], xmm2
  }
  *(_DWORD *)&_RDI->weaponCamo = v8;
  if ( !_RDI->weaponIdx )
    return 0i64;
  v14 = botInfo->playerState;
  v15 = botInfo->grenadeFlags & 2;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 798, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_RDI->weaponIdx )
    goto LABEL_44;
  v16 = Bot_Weap_WeaponDef(v14, _RDI);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( _RDI->weaponIdx && Bot_Weap_Class(v14, _RDI) == WEAPCLASS_GRENADE )
    goto LABEL_42;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( _RDI->weaponIdx && Bot_Weap_Class(v14, _RDI) == WEAPCLASS_THROWINGKNIFE )
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
  v21 = _RDI->weaponIdx && Bot_Weap_WeaponDef(v20, _RDI)->offhandClass == OFFHAND_CLASS_THROWINGKNIFE;
  if ( v19 && !v21 )
    v18 = 1;
  return Bot_Weap_Ammo(botInfo->playerState, _RDI) > 0 && (v18 || v15);
}

/*
==============
Bot_Weap_GetIdealFiringRange
==============
*/
float Bot_Weap_GetIdealFiringRange(const playerState_s *ps, const Weapon *weapon)
{
  const Weapon *v7; 
  bool isAlternate; 
  GWeaponMap *Instance; 
  const Weapon *PrimaryWeapon; 
  bool v18; 
  GWeaponMap *v19; 
  char v23; 
  float maxDamageRange; 
  float minDamageRange; 
  int v37; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2021, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( weapon->weaponIdx && (v7 = Bot_Weap_GetPrimaryWeapon(ps, weapon), v7->weaponIdx) )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v7->weaponIdx && Bot_Weap_Class(ps, v7) == WEAPCLASS_SPREAD )
    {
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1998, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( v7->weaponIdx )
      {
        isAlternate = BG_UsingAlternate(ps);
        Instance = GWeaponMap::GetInstance();
        BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Instance, ps, &ps->perks, v7, isAlternate, &minDamageRange, &maxDamageRange);
        __asm
        {
          vmovss  xmm0, [rsp+88h+arg_8]
          vmovss  [rsp+88h+arg_10], xmm0
        }
        if ( (v37 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2005, ASSERT_TYPE_ASSERT, "( !IS_NAN( minDamageRange ) )", (const char *)&queryFormat, "!IS_NAN( minDamageRange )") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, [rsp+88h+arg_0]
          vmovss  [rsp+88h+arg_10], xmm0
        }
        if ( (v37 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2006, ASSERT_TYPE_ASSERT, "( !IS_NAN( maxDamageRange ) )", (const char *)&queryFormat, "!IS_NAN( maxDamageRange )") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, [rsp+88h+arg_0]
          vmulss  xmm0, xmm0, cs:__real@3f666666
        }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmulss  xmm0, xmm0, cs:__real@3f666666
        }
      }
    }
    else
    {
      __asm
      {
        vmovaps [rsp+88h+var_38], xmm6
        vmovaps [rsp+88h+var_48], xmm7
      }
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1819, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( v7->weaponIdx && (PrimaryWeapon = Bot_Weap_GetPrimaryWeapon(ps, v7), PrimaryWeapon->weaponIdx) )
      {
        v18 = BG_UsingAlternate(ps);
        v19 = GWeaponMap::GetInstance();
        BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, v19, ps, &ps->perks, PrimaryWeapon, v18, &maxDamageRange, &minDamageRange);
        __asm
        {
          vmovss  xmm0, [rsp+88h+arg_0]
          vmovss  xmm3, [rsp+88h+arg_8]
          vucomiss xmm0, xmm3
          vmulss  xmm2, xmm0, cs:__real@3f400000
        }
        if ( !v23 )
        {
          __asm
          {
            vmulss  xmm1, xmm2, cs:__real@3f666666
            vmulss  xmm0, xmm3, cs:__real@3dcccccd
            vaddss  xmm2, xmm1, xmm0; currentMaxRange
          }
        }
        *(float *)&_XMM0 = Bot_GetAdjustedMaxRange(ps, PrimaryWeapon, *(double *)&_XMM2, 0);
        __asm
        {
          vmulss  xmm7, xmm0, cs:__real@3e800000
          vmovaps xmm2, xmm7; minRange
          vmovaps xmm3, xmm0; maxRange
          vmovaps xmm6, xmm0
        }
        Bot_Weap_VerifyWeaponDamageRanges(ps, PrimaryWeapon, *(float *)&_XMM2, *(float *)&_XMM3);
      }
      else
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vxorps  xmm7, xmm7, xmm7
        }
      }
      __asm
      {
        vsubss  xmm0, xmm6, xmm7
        vmulss  xmm1, xmm0, cs:__real@3f000000
        vmovaps xmm6, [rsp+88h+var_38]
        vaddss  xmm0, xmm1, xmm7
        vmovaps xmm7, [rsp+88h+var_48]
      }
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
  int v13; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1998, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( weapon->weaponIdx )
  {
    isAlternate = BG_UsingAlternate(ps);
    Instance = GWeaponMap::GetInstance();
    BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Instance, ps, &ps->perks, weapon, isAlternate, &minDamageRange, &maxDamageRange);
    __asm
    {
      vmovss  xmm0, [rsp+58h+arg_8]
      vmovss  [rsp+58h+arg_10], xmm0
    }
    if ( (v13 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2005, ASSERT_TYPE_ASSERT, "( !IS_NAN( minDamageRange ) )", (const char *)&queryFormat, "!IS_NAN( minDamageRange )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, [rsp+58h+arg_0]
      vmovss  [rsp+58h+arg_10], xmm0
    }
    if ( (v13 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2006, ASSERT_TYPE_ASSERT, "( !IS_NAN( maxDamageRange ) )", (const char *)&queryFormat, "!IS_NAN( maxDamageRange )") )
      __debugbreak();
    __asm { vmovss  xmm0, [rsp+58h+arg_0] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
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
  char v12; 
  float minDamageRange; 
  float maxDamageRange; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1918, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1819, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( weapon->weaponIdx && (PrimaryWeapon = Bot_Weap_GetPrimaryWeapon(ps, weapon), PrimaryWeapon->weaponIdx) )
  {
    __asm { vmovaps [rsp+68h+var_28], xmm6 }
    isAlternate = BG_UsingAlternate(ps);
    Instance = GWeaponMap::GetInstance();
    BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Instance, ps, &ps->perks, PrimaryWeapon, isAlternate, &minDamageRange, &maxDamageRange);
    __asm
    {
      vmovss  xmm0, [rsp+68h+arg_0]
      vmovss  xmm3, [rsp+68h+arg_8]
      vucomiss xmm0, xmm3
      vmulss  xmm2, xmm0, cs:__real@3f400000
    }
    if ( !v12 )
    {
      __asm
      {
        vmulss  xmm1, xmm2, cs:__real@3f666666
        vmulss  xmm0, xmm3, cs:__real@3dcccccd
        vaddss  xmm2, xmm1, xmm0; currentMaxRange
      }
    }
    *(float *)&_XMM0 = Bot_GetAdjustedMaxRange(ps, PrimaryWeapon, *(double *)&_XMM2, 0);
    __asm
    {
      vmulss  xmm2, xmm0, cs:__real@3e800000; minRange
      vmovaps xmm3, xmm0; maxRange
      vmovaps xmm6, xmm0
    }
    Bot_Weap_VerifyWeaponDamageRanges(ps, PrimaryWeapon, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+68h+var_28]
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
Bot_Weap_GetMaxRangeAdjustmentFromFOV
==============
*/
float Bot_Weap_GetMaxRangeAdjustmentFromFOV(const playerState_s *ps, const Weapon *weapon)
{
  GWeaponMap *Instance; 
  BgHybridScopeFraction *p_hybridScopeFractionInfo; 
  bool v18; 
  GWeaponMap *v19; 
  bool v21; 
  char v28; 
  char v29; 
  bool v32; 
  GHandler *Handler; 
  double v44; 
  double v45; 
  double v46; 
  double v47; 
  double v48; 
  double v49; 
  double v50; 
  BgHybridScopeFraction hybridScopeFractionInfo; 
  __int64 v52; 
  BgAdsZoomInfo outZoomInfo; 
  char output[256]; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1722, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1723, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weapon )") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( weapon->weaponIdx && Bot_Weap_Class(ps, weapon) == WEAPCLASS_SNIPER )
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
    return *(float *)&_XMM0;
  }
  __asm
  {
    vmovaps [rsp+228h+var_38], xmm6
    vmovaps [rsp+228h+var_48], xmm7
    vmovaps [rsp+228h+var_58], xmm8
    vmovaps [rsp+228h+var_68], xmm9
    vmovaps [rsp+228h+var_78], xmm10
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorpd  xmm10, xmm10, xmm10
  }
  if ( weapon->weaponIdx && Bot_Weap_Class(ps, weapon) == WEAPCLASS_TURRET )
  {
    _RAX = Bot_Weap_WeaponDef(ps, weapon);
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vmovss  xmm8, dword ptr [rax+0DBCh]
      vcomiss xmm8, xmm9
    }
    if ( !(v28 | v29) )
      goto LABEL_27;
    __asm
    {
      vcvtss2sd xmm0, xmm8, xmm8
      vmovsd  [rsp+228h+var_1F8], xmm10
      vmovsd  [rsp+228h+var_200], xmm0
    }
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1738, ASSERT_TYPE_ASSERT, "( baseFOV ) > ( 0 )", "baseFOV > 0\n\t%g, %g", v44, v46) )
      goto LABEL_27;
  }
  else
  {
    Instance = GWeaponMap::GetInstance();
    memset(&outZoomInfo, 0, sizeof(outZoomInfo));
    if ( BG_IsUsingHybridScope(Instance, ps, weapon) )
    {
      __asm { vmovss  [rsp+228h+hybridScopeFractionInfo.fraction], xmm7 }
      hybridScopeFractionInfo.increasing = 1;
      p_hybridScopeFractionInfo = &hybridScopeFractionInfo;
    }
    else
    {
      v52 = 0i64;
      p_hybridScopeFractionInfo = (BgHybridScopeFraction *)&v52;
    }
    v18 = BG_UsingAlternate(ps);
    BG_GetADSZoomInfo(Instance, weapon, v18, p_hybridScopeFractionInfo, &outZoomInfo);
    v19 = GWeaponMap::GetInstance();
    _RBP = BG_GetADSZoomLevel(v19, ps, weapon, outZoomInfo.zoomCount);
    v21 = BG_UsingAlternate(ps);
    __asm { vxorps  xmm9, xmm9, xmm9 }
    _RBX = BG_WeaponCompleteDef(weapon, v21);
    __asm
    {
      vmovss  xmm8, dword ptr [rax+rbp*4+144h]
      vcomiss xmm8, xmm9
    }
    if ( !(v28 | v29) )
      goto LABEL_27;
    BG_GetWeaponName(weapon, output, 0x100u);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+14Ch]
      vmovss  xmm1, dword ptr [rbx+148h]
      vmovss  xmm2, dword ptr [rbx+144h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+228h+var_1E0], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+228h+var_1E8], xmm1
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+228h+var_1F0], xmm2
    }
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1764, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "baseFov for weapon %s needs to be greater than 0. Current adsZoomLevel for weapon: %i, adsZoomFov[%f, %f, %f]", output, _RBP, v48, v49, v50) )
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
    _RAX = Bot_Weap_WeaponDef(ps, weapon);
    __asm { vmovss  xmm6, dword ptr [rax+0DBCh] }
  }
  else
  {
    v32 = BG_UsingAlternate(ps);
    Handler = GHandler::getHandler();
    *(double *)&_XMM0 = BG_ADSZoomFov(Handler, ps, weapon, v32);
    __asm { vmovaps xmm6, xmm0 }
  }
  __asm
  {
    vcomiss xmm6, xmm9
    vmovaps xmm9, [rsp+228h+var_68]
  }
  if ( v28 | v29 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm6
      vmovsd  [rsp+228h+var_1F8], xmm10
      vmovsd  [rsp+228h+var_200], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1771, ASSERT_TYPE_ASSERT, "( adjustedFOV ) > ( 0 )", "adjustedFOV > 0\n\t%g, %g", v45, v47) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm10, [rsp+228h+var_78]
    vdivss  xmm0, xmm8, xmm6
    vmovaps xmm8, [rsp+228h+var_58]
    vmovaps xmm6, [rsp+228h+var_38]
    vsubss  xmm1, xmm0, xmm7
    vmulss  xmm2, xmm1, cs:__real@3ecccccd
    vaddss  xmm0, xmm2, xmm7
    vmovaps xmm7, [rsp+228h+var_48]
  }
  return *(float *)&_XMM0;
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
  char v12; 
  float minDamageRange; 
  float maxDamageRange; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1933, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1819, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( weapon->weaponIdx && (PrimaryWeapon = Bot_Weap_GetPrimaryWeapon(ps, weapon), PrimaryWeapon->weaponIdx) )
  {
    __asm { vmovaps [rsp+68h+var_28], xmm6 }
    isAlternate = BG_UsingAlternate(ps);
    Instance = GWeaponMap::GetInstance();
    BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Instance, ps, &ps->perks, PrimaryWeapon, isAlternate, &minDamageRange, &maxDamageRange);
    __asm
    {
      vmovss  xmm0, [rsp+68h+arg_0]
      vmovss  xmm3, [rsp+68h+arg_8]
      vucomiss xmm0, xmm3
      vmulss  xmm2, xmm0, cs:__real@3f400000
    }
    if ( !v12 )
    {
      __asm
      {
        vmulss  xmm1, xmm2, cs:__real@3f666666
        vmulss  xmm0, xmm3, cs:__real@3dcccccd
        vaddss  xmm2, xmm1, xmm0; currentMaxRange
      }
    }
    *(float *)&_XMM0 = Bot_GetAdjustedMaxRange(ps, PrimaryWeapon, *(double *)&_XMM2, 1);
    __asm
    {
      vmulss  xmm2, xmm0, cs:__real@3e800000; minRange
      vmovaps xmm3, xmm0; maxRange
      vmovaps xmm6, xmm0
    }
    Bot_Weap_VerifyWeaponDamageRanges(ps, PrimaryWeapon, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+68h+var_28]
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
  char v12; 
  float minDamageRange; 
  float maxDamageRange; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1948, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1819, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( weapon->weaponIdx && (PrimaryWeapon = Bot_Weap_GetPrimaryWeapon(ps, weapon), PrimaryWeapon->weaponIdx) )
  {
    __asm { vmovaps [rsp+68h+var_28], xmm6 }
    isAlternate = BG_UsingAlternate(ps);
    Instance = GWeaponMap::GetInstance();
    BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Instance, ps, &ps->perks, PrimaryWeapon, isAlternate, &minDamageRange, &maxDamageRange);
    __asm
    {
      vmovss  xmm0, [rsp+68h+arg_0]
      vmovss  xmm3, [rsp+68h+arg_8]
      vucomiss xmm0, xmm3
      vmulss  xmm2, xmm0, cs:__real@3f400000
    }
    if ( !v12 )
    {
      __asm
      {
        vmulss  xmm1, xmm2, cs:__real@3f666666
        vmulss  xmm0, xmm3, cs:__real@3dcccccd
        vaddss  xmm2, xmm1, xmm0; currentMaxRange
      }
    }
    *(float *)&_XMM0 = Bot_GetAdjustedMaxRange(ps, PrimaryWeapon, *(double *)&_XMM2, 0);
    __asm
    {
      vmulss  xmm6, xmm0, cs:__real@3e800000
      vmovaps xmm2, xmm6; minRange
      vmovaps xmm3, xmm0; maxRange
    }
    Bot_Weap_VerifyWeaponDamageRanges(ps, PrimaryWeapon, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+68h+var_28]
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
  bool v6; 
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
    _RAX = Bot_Weap_WeaponDef(ps, weapon);
    __asm { vmovss  xmm0, dword ptr [rax+0DBCh] }
  }
  else
  {
    v6 = BG_UsingAlternate(ps);
    Handler = GHandler::getHandler();
    *(double *)&_XMM0 = BG_ADSZoomFov(Handler, ps, weapon, v6);
  }
  return *(double *)&_XMM0;
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
  char v38; 
  const playerState_s *playerState; 
  const gentity_s *v40; 
  bool v50; 
  char v101; 
  __int64 result; 
  int iProjectileSpeedForward; 
  int v209; 
  int v210; 
  float outSpeedUpScale; 
  float outSpeedScale; 
  float *v213; 
  vec3_t v214; 
  vec3_t v215; 
  vec3_t forward; 
  vec3_t vec; 
  vec3_t v218; 
  vec3_t angles; 
  vec3_t up; 

  __asm
  {
    vmovaps [rsp+1A0h+var_60], xmm7
    vmovaps [rsp+1A0h+var_B0], xmm12
    vmovaps [rsp+1A0h+var_D0], xmm14
  }
  v213 = outPitch;
  _R13 = outLaunchVel;
  _RSI = botData;
  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 991, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( !_RSI->botInfo.ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 992, ASSERT_TYPE_ASSERT, "( botData->botInfo.ent )", (const char *)&queryFormat, "botData->botInfo.ent") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 994, ASSERT_TYPE_ASSERT, "( !Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED ) )", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::GRAVITY_CHANGE_ALLOWED )") )
    __debugbreak();
  if ( !outPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 997, ASSERT_TYPE_ASSERT, "( outPitch )", (const char *)&queryFormat, "outPitch") )
    __debugbreak();
  ent = _RSI->botInfo.ent;
  __asm
  {
    vmovaps [rsp+1A0h+var_50], xmm6
    vmovaps [rsp+1A0h+var_70], xmm8
    vmovaps [rsp+1A0h+var_80], xmm9
    vmovaps [rsp+1A0h+var_90], xmm10
    vmovaps [rsp+1A0h+var_A0], xmm11
    vmovaps [rsp+1A0h+var_C0], xmm13
    vmovaps [rsp+1A0h+var_E0], xmm15
  }
  AngleVectors(&ent->r.currentAngles, &forward, NULL, &up);
  __asm
  {
    vmovss  xmm14, cs:__real@80000000
    vmovss  xmm12, cs:__real@3f800000
    vxorps  xmm7, xmm7, xmm7
  }
  if ( (*((_BYTE *)&_RSI->scriptedAgentInfo + 28228) & 2) != 0 )
  {
    AngleVectors(&_RSI->botInfo.ent->r.currentAngles, &v215, NULL, NULL);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+2324h]
      vmovss  xmm1, dword ptr [rsi+2328h]
      vmovss  dword ptr [rsp+1A0h+var_148+8], xmm7
      vsubss  xmm5, xmm0, dword ptr [rax+130h]
      vsubss  xmm4, xmm1, dword ptr [rax+134h]
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm2, xmm4, xmm4
      vaddss  xmm1, xmm2, xmm0
      vsqrtss xmm3, xmm1, xmm1
      vcmpless xmm0, xmm3, xmm14
      vblendvps xmm0, xmm3, xmm12, xmm0
      vdivss  xmm1, xmm12, xmm0
      vmulss  xmm0, xmm4, xmm1
      vmulss  xmm3, xmm0, dword ptr [rsp+1A0h+var_148+4]
      vmulss  xmm1, xmm5, xmm1
      vmulss  xmm2, xmm1, dword ptr [rsp+1A0h+var_148]
      vaddss  xmm0, xmm3, xmm2
      vcomiss xmm0, cs:__real@3f7eb852
    }
    if ( v38 )
      goto LABEL_51;
  }
  playerState = _RSI->botInfo.playerState;
  v40 = _RSI->botInfo.ent;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2198, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2199, ASSERT_TYPE_ASSERT, "( launchingEnt )", (const char *)&queryFormat, "launchingEnt") )
    __debugbreak();
  if ( !weapon->weaponIdx )
    goto LABEL_51;
  iProjectileSpeedForward = Bot_Weap_WeaponDef(playerState, weapon)->iProjectileSpeedForward;
  __asm
  {
    vmovss  [rsp+1A0h+outSpeedScale], xmm12
    vmovss  [rsp+1A0h+outSpeedUpScale], xmm12
  }
  G_Missile_GetScriptSpeedScale(v40, weapon, 0, &outSpeedScale, &outSpeedUpScale);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vmulss  xmm1, xmm0, [rsp+1A0h+outSpeedScale]
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, edi
    vmulss  xmm0, xmm2, [rsp+1A0h+outSpeedUpScale]
    vcvttss2si edi, xmm0
    vcvttss2si ebx, xmm1
  }
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapon->weaponIdx || Bot_Weap_Class(playerState, weapon) != WEAPCLASS_GRENADE )
    goto LABEL_38;
  if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2171, ASSERT_TYPE_ASSERT, "( launchingEnt )", (const char *)&queryFormat, "launchingEnt") )
    __debugbreak();
  _RAX = v40->agent;
  v50 = _RAX == NULL;
  if ( _RAX )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rax+0D20Ch]
      vmovss  xmm1, dword ptr [rax+0D208h]
    }
  }
  else
  {
    _RAX = v40->client;
    v50 = _RAX == NULL;
    if ( !_RAX )
      goto LABEL_38;
    __asm
    {
      vmovss  xmm2, dword ptr [rax+5FB8h]
      vmovss  xmm1, dword ptr [rax+5FB4h]
    }
  }
  __asm { vcomiss xmm1, xmm7 }
  if ( !v50 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vmulss  xmm1, xmm0, xmm1
      vcvttss2si ebx, xmm1
    }
  }
  __asm { vcomiss xmm2, xmm7 }
  if ( !v50 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edi
      vmulss  xmm1, xmm0, xmm2
      vcvttss2si edi, xmm1
    }
  }
LABEL_38:
  __asm
  {
    vmovss  xmm6, dword ptr [rsp+1A0h+forward]
    vmovss  xmm8, dword ptr [rsp+1A0h+forward+4]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ebx
  }
  _EBX = iProjectileSpeedForward;
  __asm
  {
    vmulss  xmm13, xmm1, dword ptr [rsp+1A0h+forward+8]
    vmulss  xmm9, xmm6, xmm1
    vmulss  xmm10, xmm8, xmm1
  }
  if ( iProjectileSpeedForward )
  {
    __asm
    {
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm8, xmm8
      vaddss  xmm11, xmm1, xmm0
      vcomiss xmm11, xmm7
      vmovaps xmm1, xmm11
      vrsqrtss xmm2, xmm1, xmm1
      vmulss  xmm0, xmm6, xmm2
      vmovd   xmm3, ebx
      vcvtdq2ps xmm3, xmm3
      vmulss  xmm1, xmm0, xmm3
      vmulss  xmm2, xmm8, xmm2
      vmulss  xmm0, xmm2, xmm3
      vaddss  xmm10, xmm0, xmm10
      vaddss  xmm9, xmm1, xmm9
    }
  }
  __asm
  {
    vmulss  xmm1, xmm10, xmm10
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm4, xmm1, xmm0
    vmulss  xmm1, xmm13, xmm13
    vaddss  xmm2, xmm1, xmm4
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm14
    vblendvps xmm0, xmm3, xmm12, xmm0
    vdivss  xmm2, xmm12, xmm0
    vmulss  xmm0, xmm2, xmm9
    vmovss  dword ptr [rsp+1A0h+vec], xmm0
    vmulss  xmm0, xmm2, xmm13
    vmovss  dword ptr [rbp+0A0h+vec+8], xmm0
    vmulss  xmm1, xmm2, xmm10
    vmovss  dword ptr [rsp+1A0h+vec+4], xmm1
    vmovd   xmm0, edi
    vcvtdq2ps xmm0, xmm0
    vaddss  xmm3, xmm0, xmm13
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm0, xmm1, xmm4
    vsqrtss xmm2, xmm0, xmm0
    vcmpless xmm0, xmm2, xmm14
    vblendvps xmm0, xmm2, xmm12, xmm0
    vdivss  xmm2, xmm12, xmm0
    vmulss  xmm0, xmm2, xmm9
    vmovss  dword ptr [rbp+0A0h+var_118], xmm0
    vmulss  xmm0, xmm2, xmm3
    vmulss  xmm1, xmm10, xmm2
    vmovss  dword ptr [rbp+0A0h+var_118+8], xmm0
    vmovss  dword ptr [rsp+1A0h+var_158], xmm9
    vmovss  dword ptr [rsp+1A0h+var_158+4], xmm10
    vmovss  dword ptr [rsp+1A0h+var_158+8], xmm3
    vmovss  dword ptr [rbp+0A0h+var_118+4], xmm1
  }
  *(double *)&_XMM0 = vectopitch(&vec);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = vectopitch(&v218);
  _RCX = _RSI->botInfo.ent;
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+1A0h+var_158+8]
    vmovss  xmm10, dword ptr [rsp+1A0h+var_158+4]
    vmovss  xmm11, dword ptr [rsp+1A0h+var_158]
  }
  _RAX = _RSI->botInfo.playerState;
  __asm
  {
    vsubss  xmm1, xmm0, xmm6
    vmulss  xmm3, xmm1, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm1
    vxorps  xmm9, xmm9, xmm9
    vroundss xmm2, xmm9, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, cs:__real@43b40000
    vmovss  [rsp+1A0h+outSpeedUpScale], xmm0
    vmulss  xmm0, xmm11, xmm11
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, dword ptr [rax+1E8h]
    vaddss  xmm6, xmm0, dword ptr [rcx+138h]
    vmovss  xmm0, dword ptr [rcx+134h]
    vmulss  xmm1, xmm4, xmm4
    vsubss  xmm4, xmm6, dword ptr [rsi+6DE0h]
    vaddss  xmm15, xmm2, xmm1
    vsubss  xmm2, xmm0, dword ptr [rsi+6DDCh]
    vmovss  xmm1, dword ptr [rcx+130h]
    vsubss  xmm3, xmm1, dword ptr [rsi+6DD8h]
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm3, xmm1, xmm0
    vmovss  xmm0, dword ptr [rsi+6DE0h]
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm1
    vsubss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, cs:__real@44c80000
    vmulss  xmm0, xmm4, cs:__real@491c4000
    vmulss  xmm3, xmm2, xmm15
    vaddss  xmm1, xmm3, xmm0
    vmulss  xmm5, xmm15, xmm15
    vsubss  xmm2, xmm5, xmm1
    vcomiss xmm2, xmm7
  }
  if ( v38 )
    goto LABEL_51;
  __asm
  {
    vsqrtss xmm1, xmm4, xmm4
    vmulss  xmm8, xmm1, cs:__real@44480000
    vucomiss xmm8, xmm7
    vsqrtss xmm0, xmm2, xmm2
    vsubss  xmm6, xmm15, xmm0
  }
  if ( v101 )
  {
LABEL_51:
    result = 0i64;
    goto LABEL_52;
  }
  __asm { vmovss  [rsp+1A0h+var_170], xmm6 }
  if ( (v209 & 0x7F800000) == 2139095040 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1073, ASSERT_TYPE_ASSERT, "(!IS_NAN( numerator ))", (const char *)&queryFormat, "!IS_NAN( numerator )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm11, dword ptr [rsp+1A0h+var_158]
      vmovss  xmm10, dword ptr [rsp+1A0h+var_158+4]
    }
  }
  __asm { vdivss  xmm0, xmm6, xmm8; X }
  *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  [rsp+1A0h+var_170], xmm0
    vmovaps xmm13, xmm0
  }
  if ( (v210 & 0x7F800000) == 2139095040 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1075, ASSERT_TYPE_ASSERT, "(!IS_NAN( launchAngleRad ))", (const char *)&queryFormat, "!IS_NAN( launchAngleRad )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm11, dword ptr [rsp+1A0h+var_158]
      vmovss  xmm10, dword ptr [rsp+1A0h+var_158+4]
    }
  }
  __asm
  {
    vmulss  xmm3, xmm13, cs:__real@be22f983
    vaddss  xmm1, xmm3, cs:__real@3f000000
  }
  _RAX = v213;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm1
    vroundss xmm2, xmm9, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm9, xmm0, cs:__real@43b40000
    vsubss  xmm1, xmm9, [rsp+1A0h+outSpeedUpScale]
    vmulss  xmm4, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm2
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm1, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmovss  xmm4, dword ptr [rsp+1A0h+var_158+8]
    vmovss  dword ptr [rax], xmm1
    vmulss  xmm2, xmm10, xmm10
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm11, xmm11
    vaddss  xmm3, xmm2, xmm0
    vaddss  xmm2, xmm3, xmm1
    vsqrtss xmm8, xmm2, xmm2
    vcmpless xmm1, xmm8, xmm14
    vblendvps xmm1, xmm8, xmm12, xmm1
    vdivss  xmm2, xmm12, xmm1
    vmovaps xmm0, xmm13; X
    vmulss  xmm6, xmm2, xmm11
    vmulss  xmm7, xmm2, xmm10
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm6, xmm6
    vmovaps xmm5, xmm0
    vmulss  xmm2, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm0
    vaddss  xmm3, xmm3, xmm2
    vsqrtss xmm4, xmm3, xmm3
    vcmpless xmm1, xmm4, xmm14
    vblendvps xmm1, xmm4, xmm12, xmm1
    vdivss  xmm3, xmm12, xmm1
    vmulss  xmm0, xmm3, xmm6
    vmulss  xmm1, xmm0, xmm8
    vmulss  xmm2, xmm3, xmm7
    vmulss  xmm0, xmm2, xmm8
    vmovss  dword ptr [r13+0], xmm1
    vmulss  xmm1, xmm3, xmm5
    vmulss  xmm2, xmm1, xmm8
    vmovss  dword ptr [r13+8], xmm2
    vmovss  dword ptr [r13+4], xmm0
  }
  vectoangles(&v214, &angles);
  __asm { vmovss  dword ptr [rbp+0A0h+angles], xmm9 }
  AngleVectors(&angles, _R13, NULL, NULL);
  __asm
  {
    vsqrtss xmm2, xmm15, xmm15
    vmulss  xmm0, xmm2, dword ptr [r13+0]
    vmulss  xmm1, xmm2, dword ptr [r13+4]
    vmovss  dword ptr [r13+0], xmm0
    vmulss  xmm0, xmm2, dword ptr [r13+8]
    vmovss  dword ptr [r13+8], xmm0
    vmovss  dword ptr [r13+4], xmm1
  }
  result = 1i64;
LABEL_52:
  __asm
  {
    vmovaps xmm15, [rsp+1A0h+var_E0]
    vmovaps xmm13, [rsp+1A0h+var_C0]
    vmovaps xmm11, [rsp+1A0h+var_A0]
    vmovaps xmm10, [rsp+1A0h+var_90]
    vmovaps xmm9, [rsp+1A0h+var_80]
    vmovaps xmm8, [rsp+1A0h+var_70]
    vmovaps xmm6, [rsp+1A0h+var_50]
    vmovaps xmm7, [rsp+1A0h+var_60]
    vmovaps xmm12, [rsp+1A0h+var_B0]
    vmovaps xmm14, [rsp+1A0h+var_D0]
  }
  return result;
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
  int v11; 
  int v15; 
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  GWeaponMap *v20; 
  GWeaponMap *v21; 
  Weapon offHand; 
  Weapon weapon; 

  _RBX = offHandOut;
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
      v20 = GWeaponMap::GetInstance();
      if ( BG_WeaponAmmo(v20, ps, ViewmodelWeapon, 1) <= 0 )
        return 0;
      v21 = GWeaponMap::GetInstance();
      _RAX = BG_GetViewmodelWeapon(v21, ps);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbx], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rbx+20h], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rbx+30h], xmm0
      }
      v15 = *(_DWORD *)&_RAX->weaponCamo;
      goto LABEL_28;
    }
LABEL_27:
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+0E8h+weapon.weaponIdx]
      vmovups xmm1, xmmword ptr [rsp+0E8h+weapon.attachmentVariationIndices+5]
    }
    v15 = *(_DWORD *)&weapon.weaponCamo;
    __asm
    {
      vmovups ymmword ptr [rbx], ymm0
      vmovsd  xmm0, qword ptr [rsp+0E8h+weapon.attachmentVariationIndices+15h]
      vmovups xmmword ptr [rbx+20h], xmm1
      vmovsd  qword ptr [rbx+30h], xmm0
    }
LABEL_28:
    *(_DWORD *)&_RBX->weaponCamo = v15;
    return 1;
  }
LABEL_25:
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0E8h+offHand.weaponIdx]
    vmovups xmm1, xmmword ptr [rsp+0E8h+offHand.attachmentVariationIndices+5]
  }
  v11 = *(_DWORD *)&offHand.weaponCamo;
  __asm
  {
    vmovups ymmword ptr [rbx], ymm0
    vmovsd  xmm0, qword ptr [rsp+0E8h+offHand.attachmentVariationIndices+15h]
    vmovups xmmword ptr [rbx+20h], xmm1
    vmovsd  qword ptr [rbx+30h], xmm0
  }
  *(_DWORD *)&_RBX->weaponCamo = v11;
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
__int64 Bot_Weap_IsEntInGrenadeRadius(const gentity_s *selfEnt, const gentity_s *checkEnt, const gentity_s *grenadeEnt)
{
  GWeaponMap *Instance; 
  const playerState_s *EntityPlayerStateConst; 
  const Weapon *Weapon; 
  const WeaponDef *v21; 

  __asm { vmovaps [rsp+68h+var_38], xmm6 }
  _RBX = grenadeEnt;
  if ( !selfEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 825, ASSERT_TYPE_ASSERT, "( selfEnt )", (const char *)&queryFormat, "selfEnt") )
    __debugbreak();
  if ( !checkEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 826, ASSERT_TYPE_ASSERT, "( checkEnt )", (const char *)&queryFormat, "checkEnt") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 827, ASSERT_TYPE_ASSERT, "( grenadeEnt )", (const char *)&queryFormat, "grenadeEnt") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(selfEnt);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 831, ASSERT_TYPE_ASSERT, "( psSelf )", (const char *)&queryFormat, "psSelf") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+130h]
    vsubss  xmm3, xmm0, dword ptr [rsi+130h]
    vmovss  xmm1, dword ptr [rbx+134h]
    vmovss  xmm0, dword ptr [rbx+138h]
    vsubss  xmm2, xmm1, dword ptr [rsi+134h]
    vsubss  xmm4, xmm0, dword ptr [rsi+138h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm6, xmm3, xmm0
  }
  Weapon = BgWeaponMap::GetWeapon(Instance, _RBX->s.weaponHandle);
  v21 = Bot_Weap_WeaponDef(EntityPlayerStateConst, Weapon);
  BG_ExplosionRadius(Weapon, 0);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm0
  }
  if ( selfEnt == checkEnt && v21->offhandClass == OFFHAND_CLASS_FLASH_GRENADE )
    __asm { vmulss  xmm1, xmm1, cs:__real@3e800000 }
  __asm
  {
    vcomiss xmm1, xmm6
    vmovaps xmm6, [rsp+68h+var_38]
  }
  return 1i64;
}

/*
==============
Bot_Weap_IsHighRecoil
==============
*/
bool Bot_Weap_IsHighRecoil(const bot_data_t *botData, const Weapon *r_weapon)
{
  playerState_s *playerState; 
  bool v8; 
  int ShotCountForRecoil; 
  GWeaponMap *Instance; 
  bool v18; 
  bool result; 
  float hipAngularViewKickStrengthMax; 
  float adsAngularViewKickPitchScale; 
  float adsAngularViewKickDev; 
  float adsAngularViewKickDir; 
  float hipAngularViewKickPitchScale; 
  float hipAngularViewKickDev; 
  float hipAngularViewKickDir; 
  char v40; 
  float adsAngularViewKickStrengthMin; 
  float adsAngularViewKickStrengthMax; 
  float hipAngularViewKickStrengthMin; 

  __asm { vmovaps [rsp+100h+var_60], xmm9 }
  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1158, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  playerState = botData->botInfo.playerState;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1161, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+100h+var_40], xmm7
    vmovaps [rsp+100h+var_50], xmm8
  }
  v8 = BG_UsingAlternate(playerState);
  ShotCountForRecoil = BG_GetShotCountForRecoil(playerState);
  Instance = GWeaponMap::GetInstance();
  __asm { vmovss  xmm9, cs:__real@3f000000 }
  if ( BG_UseAngularGunKick(Instance, playerState, r_weapon, v8) )
  {
    BG_GetAngularGunKickSettings(Instance, playerState, r_weapon, v8, ShotCountForRecoil, &hipAngularViewKickDir, &hipAngularViewKickDev, &hipAngularViewKickStrengthMin, &hipAngularViewKickStrengthMax, &hipAngularViewKickPitchScale, &adsAngularViewKickDir, &adsAngularViewKickDev, &adsAngularViewKickStrengthMin, &adsAngularViewKickStrengthMax, &adsAngularViewKickPitchScale);
    __asm
    {
      vmovss  xmm0, [rbp+57h+adsAngularViewKickStrengthMin]
      vaddss  xmm1, xmm0, [rbp+57h+adsAngularViewKickStrengthMax]
      vmovss  xmm2, [rbp+57h+hipAngularViewKickStrengthMin]
      vaddss  xmm0, xmm2, [rbp+57h+hipAngularViewKickStrengthMax]
      vmulss  xmm8, xmm0, xmm9
      vmulss  xmm7, xmm1, xmm9
    }
    if ( Bot_Weap_IsDoingADS(botData) )
      __asm { vcomiss xmm7, cs:__real@41c80000 }
    else
      __asm { vcomiss xmm8, cs:__real@420c0000 }
    v18 = 1;
    goto LABEL_12;
  }
  v18 = 0;
  if ( !BG_UseAngularViewKick(Instance, playerState, r_weapon, v8) )
  {
LABEL_12:
    result = v18;
    goto LABEL_13;
  }
  BG_GetAngularViewKickSettings(Instance, playerState, r_weapon, v8, ShotCountForRecoil, &hipAngularViewKickDir, &hipAngularViewKickDev, &hipAngularViewKickStrengthMin, &hipAngularViewKickStrengthMax, &hipAngularViewKickPitchScale, &adsAngularViewKickDir, &adsAngularViewKickDev, &adsAngularViewKickStrengthMin, &adsAngularViewKickStrengthMax, &adsAngularViewKickPitchScale);
  __asm
  {
    vmovss  xmm0, [rbp+57h+adsAngularViewKickStrengthMin]
    vaddss  xmm1, xmm0, [rbp+57h+adsAngularViewKickStrengthMax]
    vmovss  xmm2, [rbp+57h+hipAngularViewKickStrengthMin]
    vaddss  xmm0, xmm2, [rbp+57h+hipAngularViewKickStrengthMax]
    vmulss  xmm7, xmm0, xmm9
    vmulss  xmm8, xmm1, xmm9
  }
  if ( Bot_Weap_IsDoingADS(botData) )
    __asm { vcomiss xmm8, cs:__real@41c80000 }
  else
    __asm { vcomiss xmm7, cs:__real@425c0000 }
  result = 1;
LABEL_13:
  __asm { vmovaps xmm8, [rsp+100h+var_50] }
  _R11 = &v40;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+100h+var_40]
  }
  return result;
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
  GWeaponMap *Instance; 
  playerState_s *playerState; 
  BgWeaponMap *v9; 
  int v16; 
  unsigned int v17; 
  BgWeaponHandle *weaponsEquipped; 
  __int16 v19; 
  unsigned int v21; 
  int v23; 
  int v29; 
  int *usableFallback; 
  __int64 v33; 
  int v34; 
  int v35; 
  __m256i v41; 
  int v43; 

  _RDI = result;
  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 586, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  playerState = botData->botInfo.playerState;
  v9 = Instance;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 590, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&playerState->weapCommon.weapFlags, ACTIVE, 0xAu) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovups ymmword ptr [rdi], ymm0
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
      vmovups xmmword ptr [rdi+20h], xmm1
      vmovsd  qword ptr [rdi+30h], xmm0
    }
    *(_DWORD *)&_RDI->weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  }
  else
  {
    __asm
    {
      vmovups ymm2, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups xmm3, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovsd  xmm1, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    }
    v16 = 0;
    v17 = 0;
    weaponsEquipped = playerState->weaponsEquipped;
    __asm { vmovups [rsp+128h+var_90], ymm2 }
    v19 = v41.m256i_i16[0];
    __asm
    {
      vmovups [rsp+128h+var_B0], ymm2
      vmovups [rsp+128h+var_D0], xmm3
      vmovsd  [rsp+128h+var_E0], xmm1
    }
    v43 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    __asm
    {
      vmovups [rsp+128h+var_C0], xmm3
      vmovsd  [rsp+128h+var_D8], xmm1
    }
    v34 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    do
    {
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( (unsigned int)v16 >= 0xF )
      {
        LODWORD(v33) = 15;
        LODWORD(usableFallback) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", usableFallback, v33) )
          __debugbreak();
      }
      _RBX = BgWeaponMap::GetWeapon(v9, (BgWeaponHandle)weaponsEquipped->m_mapEntryId);
      if ( !_RBX->weaponIdx )
        goto LABEL_25;
      v21 = Bot_Weap_Score(botData, _RBX, playerState, pEnemy, ignoreAmmo, &v35);
      if ( v35 && !v19 )
      {
        __asm { vmovups ymm0, ymmword ptr [rbx] }
        v23 = *(_DWORD *)&_RBX->weaponCamo;
        __asm
        {
          vmovups [rsp+128h+var_90], ymm0
          vmovups xmm0, xmmword ptr [rbx+20h]
        }
        v19 = v41.m256i_i16[0];
        __asm
        {
          vmovups [rsp+128h+var_C0], xmm0
          vmovsd  xmm0, qword ptr [rbx+30h]
          vmovsd  [rsp+128h+var_D8], xmm0
        }
        v34 = v23;
      }
      if ( v21 > v17 )
      {
        __asm
        {
          vmovups ymm2, ymmword ptr [rbx]
          vmovups xmm3, xmmword ptr [rbx+20h]
          vmovsd  xmm4, qword ptr [rbx+30h]
        }
        v29 = *(_DWORD *)&_RBX->weaponCamo;
        v17 = v21;
        __asm
        {
          vmovups [rsp+128h+var_B0], ymm2
          vmovups [rsp+128h+var_D0], xmm3
          vmovsd  [rsp+128h+var_E0], xmm4
        }
        v43 = v29;
      }
      else
      {
LABEL_25:
        v29 = v43;
        __asm
        {
          vmovsd  xmm4, [rsp+128h+var_E0]
          vmovups xmm3, [rsp+128h+var_D0]
          vmovups ymm2, [rsp+128h+var_B0]
        }
      }
      ++v16;
      ++weaponsEquipped;
    }
    while ( v16 < 15 );
    _RDI = result;
    __asm { vmovd   eax, xmm2 }
    if ( !(_WORD)_EAX && v19 )
    {
      __asm
      {
        vmovups ymm2, [rsp+128h+var_90]
        vmovups xmm3, [rsp+128h+var_C0]
        vmovsd  xmm4, [rsp+128h+var_D8]
      }
      v29 = v34;
    }
    __asm
    {
      vmovups ymmword ptr [rdi], ymm2
      vmovups xmmword ptr [rdi+20h], xmm3
      vmovsd  qword ptr [rdi+30h], xmm4
    }
    *(_DWORD *)&result->weaponCamo = v29;
  }
  return _RDI;
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
  bool v9; 
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
    __asm { vmovss  xmm0, cs:__real@3f800000 }
    bProjImpactExplode = Bot_Weap_WeaponDef(ps, weapon)->bProjImpactExplode;
    __asm
    {
      vmovss  [rsp+68h+outSpeedScale], xmm0
      vmovss  [rsp+68h+outSpeedUpScale], xmm0
    }
    G_Missile_GetScriptSpeedScale(launchingEnt, weapon, 0, &outSpeedScale, &outSpeedUpScale);
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( weapon->weaponIdx && Bot_Weap_Class(ps, weapon) == WEAPCLASS_GRENADE && !launchingEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2171, ASSERT_TYPE_ASSERT, "( launchingEnt )", (const char *)&queryFormat, "launchingEnt") )
      __debugbreak();
    if ( bProjImpactExplode )
      return 1i64;
  }
  v9 = BG_UsingAlternate(ps);
  return (unsigned int)(BG_WeaponStickinessType(weapon, v9) - 1) <= 1;
}

/*
==============
Bot_Weap_ProjectileInfo
==============
*/
__int64 Bot_Weap_ProjectileInfo(const gentity_s *launchingEnt, const playerState_s *ps, const Weapon *weapon, int *impactExplode, int *speedAim, int *speedFwd, int *speedUp)
{
  const WeaponDef *v13; 
  int *v14; 
  int *v15; 
  float outSpeedScale; 
  float outSpeedUpScale; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2198, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !launchingEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2199, ASSERT_TYPE_ASSERT, "( launchingEnt )", (const char *)&queryFormat, "launchingEnt") )
    __debugbreak();
  if ( !weapon->weaponIdx )
    return 0i64;
  v13 = Bot_Weap_WeaponDef(ps, weapon);
  if ( impactExplode )
    *impactExplode = v13->bProjImpactExplode;
  v14 = speedAim;
  if ( speedAim )
    *speedAim = v13->iProjectileSpeed;
  if ( speedFwd )
    *speedFwd = v13->iProjectileSpeedForward;
  v15 = speedUp;
  if ( speedUp )
    *speedUp = v13->iProjectileSpeedUp;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+78h+outSpeedScale], xmm0
    vmovss  [rsp+78h+outSpeedUpScale], xmm0
  }
  G_Missile_GetScriptSpeedScale(launchingEnt, weapon, 0, &outSpeedScale, &outSpeedUpScale);
  if ( v14 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi]
      vmulss  xmm1, xmm0, [rsp+78h+outSpeedScale]
      vcvttss2si eax, xmm1
    }
    *v14 = _EAX;
  }
  if ( v15 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx]
      vmulss  xmm1, xmm0, [rsp+78h+outSpeedUpScale]
      vcvttss2si eax, xmm1
    }
    *v15 = _EAX;
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1350, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( weapon->weaponIdx && Bot_Weap_Class(ps, weapon) == WEAPCLASS_GRENADE )
  {
    __asm
    {
      vmovaps [rsp+78h+var_48], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    if ( !launchingEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2171, ASSERT_TYPE_ASSERT, "( launchingEnt )", (const char *)&queryFormat, "launchingEnt") )
      __debugbreak();
    if ( launchingEnt->agent )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rax+0D20Ch]
        vmovss  xmm1, dword ptr [rax+0D208h]
      }
    }
    else
    {
      if ( !launchingEnt->client )
      {
LABEL_39:
        __asm { vmovaps xmm6, [rsp+78h+var_48] }
        return 1i64;
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rax+5FB8h]
        vmovss  xmm1, dword ptr [rax+5FB4h]
      }
    }
    if ( v14 )
    {
      __asm
      {
        vcomiss xmm1, xmm6
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rdi]
        vmulss  xmm1, xmm0, xmm1
        vcvttss2si eax, xmm1
      }
      *v14 = _EAX;
    }
    if ( v15 )
    {
      __asm
      {
        vcomiss xmm2, xmm6
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx]
        vmulss  xmm1, xmm0, xmm2
        vcvttss2si eax, xmm1
      }
      *v15 = _EAX;
    }
    goto LABEL_39;
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
  unsigned int v14; 
  int v15; 
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
  _RAX = BG_AmmoStoreForWeapon(&result, weapon, v6);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+108h+r_clipIndex.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+108h+r_clipIndex.weapon.attachmentVariationIndices+5], ymm1
  }
  AmmoInClipForClipType = BG_GetAmmoInClipForClipType(ps, &r_clipIndex, WeaponHandForViewWeapon);
  if ( !AmmoInClipForClipType && BG_GetWeaponType(weapon, v6) == WEAPTYPE_BULLET )
    v7 = 1;
  hasFastReloadOverride = 0;
  Handler = GHandler::getHandler();
  if ( v7 )
  {
    v14 = BG_ReloadEmptyTime(ps, Handler, WeaponHandForViewWeapon, weapon, v6, isDualWielding, &hasFastReloadOverride);
    v15 = BG_ReloadEmptyAddTime(ps, weapon, v6, isDualWielding, AmmoInClipForClipType, &hasFastReloadOverride);
    if ( v15 )
      goto LABEL_21;
  }
  else
  {
    v14 = BG_ReloadTime(ps, Handler, WeaponHandForViewWeapon, weapon, v6, isDualWielding, AmmoInClipForClipType, &hasFastReloadOverride);
  }
  v15 = BG_ReloadAddTime(ps, weapon, v6, isDualWielding, AmmoInClipForClipType, 0, &hasFastReloadOverride);
LABEL_21:
  if ( BG_GetReloadType(weapon, v6) == RELOAD_TYPE_SEGMENTED )
    return (unsigned int)(v15 * (BG_GetClipSize(ps, weapon, v6) - AmmoInClipForClipType));
  else
    return v14;
}

/*
==============
Bot_Weap_Score
==============
*/
__int64 Bot_Weap_Score(bot_data_t *botData, const Weapon *weap, const playerState_s *ps, const gentity_s *pEnemy, int ignoreAmmo, int *usableFallback)
{
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
  int v29; 
  sentient_s *sentient; 
  GWeaponMap *v31; 
  const Weapon *v32; 
  bool v33; 
  int v34; 
  int v35; 
  int v36; 
  const Weapon *v37; 
  int v39; 
  int v40; 
  int i; 
  const Weapon *EquippedWeaponForPlayer; 
  const Weapon *v44; 
  const WeaponDef *v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  int v49; 
  int v50; 
  int v51; 
  unsigned int WeaponClass; 
  int v53; 
  weapType_t WeaponType; 
  int v55; 
  int v56; 
  BOOL IsRiotShield; 
  weapInventoryType_t inventoryType; 
  int CanFireOnEnemy; 
  PlayerHandIndex hand; 
  GWeaponMap *weaponMap; 
  const WeaponDef *v63; 
  const Weapon *v64; 
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
  v63 = Bot_Weap_WeaponDef(ps, weap);
  inventoryType = v63->inventoryType;
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
  v64 = ViewmodelWeapon;
  v16 = 1;
  if ( ViewmodelWeapon->weaponIdx )
  {
    v18 = Bot_Weap_Class(ps, ViewmodelWeapon);
    ViewmodelWeapon = v64;
    v17 = 1 << v18;
  }
  else
  {
    v17 = 0;
  }
  v49 = Bot_Weap_AmmoInClip(ps, ViewmodelWeapon, WeaponHandForViewWeapon);
  v19 = BG_UsingAlternate(ps);
  IsRiotShield = BG_IsRiotShield(weap, v19);
  if ( level.time - botData->botInfo.weaponRiotShieldTime >= 1000 || (v20 = 1, !Bot_Weap_PlayerHasRiotShield(ps)) )
    v20 = 0;
  _RAX = Bot_Weap_GetEquippedTypeClass(ps, WEAPINVENTORY_PRIMARY, 0x101Du);
  __asm
  {
    vmovups ymm2, ymmword ptr [rax]
    vmovups [rsp+128h+Buf2], ymm2
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups [rsp+128h+var_78], xmm0
    vmovsd  xmm1, qword ptr [rax+30h]
    vmovsd  [rsp+128h+var_68], xmm1
  }
  *(_DWORD *)&Buf2.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  __asm { vmovd   eax, xmm2 }
  if ( !(_WORD)_RAX )
  {
    _RAX = Bot_Weap_GetEquippedTypeClass(ps, WEAPINVENTORY_PRIMARY, 0x103Du);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups [rsp+128h+Buf2], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups [rsp+128h+var_78], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  [rsp+128h+var_68], xmm0
    }
    *(_DWORD *)&Buf2.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  }
  v55 = 4;
  v56 = 16;
  if ( !pEnemy || (v29 = 1, !Bot_IsVehicleEnt(pEnemy)) )
    v29 = 0;
  v51 = v29;
  if ( !pEnemy || !pEnemy->turretHandle.m_objIndex )
    v16 = 0;
  if ( !pEnemy || (sentient = pEnemy->sentient) == NULL || (v53 = 1, !Bot_IsHighAerialSentient(sentient)) )
    v53 = 0;
  CanFireOnEnemy = Bot_CanSeeAndCanFireOnEnemy(botData);
  if ( v29 && v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 384, ASSERT_TYPE_ASSERT, "( !(enemyIsVehicle && enemyIsTurret) )", (const char *)&queryFormat, "!(enemyIsVehicle && enemyIsTurret)") )
    __debugbreak();
  if ( !usableFallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 386, ASSERT_TYPE_ASSERT, "( usableFallback )", (const char *)&queryFormat, "usableFallback") )
    __debugbreak();
  *usableFallback = 0;
  if ( Buf2.weaponIdx )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1333, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v31 = GWeaponMap::GetInstance();
    v32 = BG_GetViewmodelWeapon(v31, ps);
    v33 = !memcmp_0(v32, &Buf2, 0x3Cui64) && BG_UsingAlternate(ps);
    v34 = 1 << BG_GetWeaponClass(&Buf2, v33);
  }
  else
  {
    v34 = 0;
  }
  if ( !CanFireOnEnemy || (v34 & v17) == 0 || (v35 = 1, !v49) )
    v35 = 0;
  v36 = 4101;
  if ( botData->botMatchData.personality != BOT_PERSONALITY_CAMPER )
    v36 = 4125;
  if ( Bot_PreferWeaponOverLongRange(botData, &Buf2) || v35 )
  {
    v36 |= v34;
  }
  else if ( botData->botMatchData.personality == BOT_PERSONALITY_CAMPER )
  {
    v36 |= 2u;
  }
  v37 = weap;
  v50 = v36;
  if ( !weap->weaponIdx || !BG_PlayerHasWeapon(weaponMap, ps, weap) || !ignoreAmmo && !BG_UsingAlternate(ps) && Bot_Weap_WeaponUsesAmmo(ps, weap) && !Bot_Weap_Ammo(ps, weap) && !Dvar_GetBool_Internal_DebugName(DVARBOOL_bot_SimulateNoAmmo, "bot_SimulateNoAmmo") )
    return 0i64;
  if ( IsRiotShield )
  {
    if ( v20 )
      return 10i64;
    return 0i64;
  }
  if ( v20 || WeaponType == WEAPTYPE_GRENADE || (unsigned int)(WeaponType - 6) <= 4 || WeaponClass == 8 || (unsigned int)(inventoryType - 3) <= 1 || v63->requireLockonToFire && !v51 || v53 && WeaponClass == 7 && !v63->bProjImpactExplode )
    return 0i64;
  if ( Bot_Weap_IsMelee(ps, weap) )
  {
    *usableFallback = 1;
    return 0i64;
  }
  if ( v51 )
  {
    if ( !v16 )
      v36 &= 0xFFFFFFC7;
    goto LABEL_89;
  }
  if ( v16 )
  {
LABEL_89:
    v55 = 16;
    v39 = v36 | 0x80;
    v56 = 4;
    if ( v16 )
      v39 = v36;
    v36 = v39;
    v50 = v39;
  }
  if ( (botData->botMatchData.flags & 0x40) != 0 )
  {
    if ( WeaponClass != 5 || (v40 = 1, inventoryType) )
      v40 = 0;
    if ( CanFireOnEnemy )
    {
      if ( v40 )
      {
        if ( Bot_Weap_Ammo(ps, weap) )
        {
          __asm { vmovss  xmm2, cs:__real@40000000; maxRangeScalar }
          if ( Bot_Weap_CanDamageEnemy(botData, weap, *(float *)&_XMM2) )
          {
            for ( i = 0; i < 15; ++i )
            {
              EquippedWeaponForPlayer = BG_GetEquippedWeaponForPlayer(weaponMap, ps, i);
              v44 = EquippedWeaponForPlayer;
              if ( EquippedWeaponForPlayer->weaponIdx )
              {
                if ( !BG_PlayerHasWeapon(weaponMap, ps, EquippedWeaponForPlayer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 533, ASSERT_TYPE_ASSERT, "( BG_PlayerHasWeapon( weaponMap, ps, weaponInInventory ) )", (const char *)&queryFormat, "BG_PlayerHasWeapon( weaponMap, ps, weaponInInventory )") )
                  __debugbreak();
                v45 = Bot_Weap_WeaponDef(ps, v44);
                if ( v44->weaponIdx && BG_PlayerHasWeapon(weaponMap, ps, v44) && v45->inventoryType == WEAPINVENTORY_PRIMARY && memcmp_0(v44, weap, 0x3Cui64) && Bot_Weap_AmmoInClip(ps, v44, hand) <= 0 && Bot_Weap_WeaponUsesAmmo(ps, v44) )
                  v15 += 10;
              }
            }
            v36 = v50;
            v37 = weap;
          }
        }
      }
    }
  }
  if ( WeaponClass == 2 && v63->noAmmoPickup && v63->blocksProne )
    v15 += 3;
  v46 = v15 + 3;
  if ( !_bittest(&v36, WeaponClass) )
    v46 = v15;
  v47 = v46 + 3;
  if ( ((1 << WeaponType) & v55) == 0 )
    v47 = v46;
  v48 = v47 + 1;
  if ( ((1 << WeaponType) & v56) == 0 )
    v48 = v47;
  if ( !memcmp_0(v37, v64, 0x3Cui64) )
    ++v48;
  return v48;
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
  const playerState_s *playerState; 
  const BgWeaponMap *v6; 
  gentity_s *Enemy; 
  playerState_s *v8; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  int WeaponStateForViewWeapon; 
  unsigned __int16 weaponIdx; 
  unsigned __int64 v12; 
  BOOL v14; 
  __int64 v15; 
  char v16; 
  bool IsUseButtonPressed; 
  int v36; 
  Weapon result; 
  bool v39; 
  gentity_s *pEnemy; 

  _RBP = botData;
  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 636, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 637, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  playerState = _RBP->botInfo.playerState;
  v6 = Instance;
  Enemy = Bot_GetEnemy(_RBP);
  v8 = _RBP->botInfo.playerState;
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
      weaponIdx = _RBP->botInfo.scriptWeapon.weaponIdx;
      v12 = WeaponStateForViewWeapon;
      _RSI = BG_HighPriorityWeapon_Get(v6, playerState);
      v14 = _RSI->weaponIdx && BG_HighPriorityWeapon_MustSwitch(v6, playerState);
      if ( weaponIdx || v14 || ((unsigned int)v12 > 0x3B || (v15 = 0xC01001C01C3003Fi64, !_bittest64(&v15, v12)) ? (v16 = 0) : (v16 = 1), (v39 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBP->botInfo.playerState->pm_flags, ACTIVE, 5u), IsUseButtonPressed = Bot_IsUseButtonPressed(_RBP), v16) && !v39 && !IsUseButtonPressed) )
      {
        _RAX = BG_GetCurrentWeaponForPlayer(v6, playerState);
        _RBX = cmd;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbx+24h], ymm0
          vmovups xmm1, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rbx+44h], xmm1
          vmovsd  xmm0, qword ptr [rax+30h]
          vmovsd  qword ptr [rbx+54h], xmm0
        }
        *(_DWORD *)&cmd->weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
        if ( v14 && BG_PlayerHasWeapon(v6, playerState, _RSI) )
        {
          if ( memcmp_0(&cmd->weapon, _RSI, 0x3Cui64) )
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [rsi]
              vmovups ymmword ptr [rbx+24h], ymm0
              vmovups xmm1, xmmword ptr [rsi+20h]
              vmovups xmmword ptr [rbx+44h], xmm1
              vmovsd  xmm0, qword ptr [rsi+30h]
              vmovsd  qword ptr [rbx+54h], xmm0
            }
            *(_DWORD *)&cmd->weapon.weaponCamo = *(_DWORD *)&_RSI->weaponCamo;
          }
        }
        else if ( weaponIdx && BG_PlayerHasWeapon(v6, playerState, &_RBP->botInfo.scriptWeapon) )
        {
          if ( memcmp_0(&cmd->weapon, (char *)&_RBP->scriptedAgentInfo + 27964, 0x3Cui64) )
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+6D44h]
              vmovups ymmword ptr [rbx+24h], ymm0
              vmovups xmm1, xmmword ptr [rbp+6D64h]
              vmovups xmmword ptr [rbx+44h], xmm1
              vmovsd  xmm0, qword ptr [rbp+6D74h]
              vmovsd  qword ptr [rbx+54h], xmm0
            }
            *(_DWORD *)&cmd->weapon.weaponCamo = *((_DWORD *)&_RBP->scriptedAgentInfo + 7005);
          }
        }
        else if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&playerState->weapCommon.weapFlags, ACTIVE, 0xEu) || !cmd->weapon.weaponIdx )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
            vmovups ymmword ptr [rbp+6D44h], ymm0
            vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
            vmovups xmmword ptr [rbp+6D64h], xmm1
            vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
            vmovsd  qword ptr [rbp+6D74h], xmm0
          }
          *((_DWORD *)&_RBP->scriptedAgentInfo + 7005) = *(_DWORD *)&NULL_WEAPON.weaponCamo;
          _RAX = Bot_Weap_PickBest(&result, _RBP, pEnemy, 0);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups xmm1, xmmword ptr [rax+20h]
            vmovsd  xmm2, qword ptr [rax+30h]
          }
          v36 = *(_DWORD *)&_RAX->weaponCamo;
          __asm { vmovd   eax, xmm0 }
          if ( (_WORD)_RAX )
            goto LABEL_44;
          _RAX = Bot_Weap_PickBest(&result, _RBP, pEnemy, 1);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups xmm1, xmmword ptr [rax+20h]
            vmovsd  xmm2, qword ptr [rax+30h]
          }
          v36 = *(_DWORD *)&_RAX->weaponCamo;
          __asm { vmovd   eax, xmm0 }
          if ( (_WORD)_RAX )
          {
LABEL_44:
            __asm
            {
              vmovups ymmword ptr [rbx+24h], ymm0
              vmovups xmmword ptr [rbx+44h], xmm1
              vmovsd  qword ptr [rbx+54h], xmm2
            }
            *(_DWORD *)&cmd->weapon.weaponCamo = v36;
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
  GWeaponMap *v12; 
  int v13; 
  int WeaponStateForViewWeapon; 
  const dvar_t *v15; 
  unsigned __int64 v16; 
  int v17; 
  int ammoCount; 
  bool v19; 
  int v23; 
  __int64 v24; 
  bool v25; 
  int IsClipOnly; 
  __int64 v27; 
  bool v32; 
  int v33; 
  int v34; 
  bool v35; 
  int ClipSize; 
  int v37; 
  char v49; 
  char v50; 
  int time; 
  __int64 v54; 
  int IsForcedFiring; 
  BOOL v62; 
  int CanFireOnEnemy; 
  PlayerHandIndex hand; 
  BgWeaponMap *weaponMap; 
  AmmoStore result; 
  AmmoStore r_ammo2; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1384, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  playerState = botData->botInfo.playerState;
  weaponMap = Instance;
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, playerState);
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2496, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+178h+var_48], xmm6
    vmovaps [rsp+178h+var_58], xmm7
    vmovaps [rsp+178h+var_68], xmm8
    vmovaps [rsp+178h+var_78], xmm9
  }
  v12 = GWeaponMap::GetInstance();
  hand = BG_PlayerLastWeaponHandForViewWeapon(v12, playerState);
  if ( !ViewmodelWeapon->weaponIdx )
    goto LABEL_34;
  if ( !Bot_Weap_WeaponUsesAmmo(playerState, ViewmodelWeapon) )
    goto LABEL_34;
  v13 = 1;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&playerState->weapCommon.weapFlags, ACTIVE, 0x1Au) )
    goto LABEL_34;
  WeaponStateForViewWeapon = Bot_Weap_GetWeaponStateForViewWeapon(playerState);
  v15 = DVARBOOL_bot_SimulateNoAmmo;
  v16 = WeaponStateForViewWeapon;
  if ( !DVARBOOL_bot_SimulateNoAmmo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bot_SimulateNoAmmo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
  {
    v17 = 0;
    ammoCount = 0;
  }
  else if ( Bot_Weap_IsMelee(playerState, ViewmodelWeapon) )
  {
    v17 = 0;
    ammoCount = 0;
  }
  else
  {
    v19 = BG_UsingAlternate(playerState);
    if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1322, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    _RAX = BG_AmmoStoreForWeapon(&result, ViewmodelWeapon, v19);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+178h+r_ammo2.weapon.weaponIdx], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rsp+178h+r_ammo2.weapon.attachmentVariationIndices+5], ymm1
    }
    if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1304, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v17 = 0;
    v23 = 0;
    while ( !BG_IsAmmoCompatible(&playerState->weapCommon.ammoNotInClip[v23].ammoType, &r_ammo2) )
    {
      if ( (unsigned int)++v23 >= 0xF )
        goto LABEL_26;
    }
    if ( (playerState_s *)((char *)playerState + 68 * v23) == (playerState_s *)-1912i64 )
    {
LABEL_26:
      ammoCount = 0;
      goto LABEL_27;
    }
    ammoCount = playerState->weapCommon.ammoNotInClip[v23].ammoCount;
LABEL_27:
    v13 = 1;
  }
  if ( (unsigned int)v16 > 0x3B || (v24 = 0xC01000001C30001i64, !_bittest64(&v24, v16)) )
    v13 = 0;
  CanFireOnEnemy = Bot_CanSeeAndCanFireOnEnemy(botData);
  IsForcedFiring = Bot_IsForcedFiring(botData);
  v25 = BG_UsingAlternate(playerState);
  IsClipOnly = BG_WeaponIsClipOnly(ViewmodelWeapon, v25);
  if ( BG_CanSprintReload(playerState) )
  {
    if ( !v13 && (unsigned int)(v16 - 34) > 2 )
      goto LABEL_34;
  }
  else if ( !v13 )
  {
    goto LABEL_34;
  }
  if ( !IsClipOnly && ammoCount && !CanFireOnEnemy && !IsForcedFiring )
  {
    v62 = Bot_Weap_ReloadTime(playerState, ViewmodelWeapon) > 3000;
    v32 = BG_UsingAlternate(playerState);
    BG_GetClipLowAmmo(playerState, ViewmodelWeapon, v32);
    v33 = Bot_Weap_AmmoInClip(playerState, ViewmodelWeapon, hand);
    v34 = 999;
    if ( v33 < 999 )
      v34 = v33;
    v35 = BG_UsingAlternate(playerState);
    ClipSize = BG_GetClipSize(playerState, ViewmodelWeapon, v35);
    v37 = 999;
    __asm { vxorps  xmm7, xmm7, xmm7 }
    if ( ClipSize < 999 )
      v37 = ClipSize;
    __asm
    {
      vcvtsi2ss xmm7, xmm7, r14d
      vxorps  xmm9, xmm9, xmm9
    }
    if ( v37 <= 0 )
    {
      __asm { vxorps  xmm1, xmm1, xmm1 }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edi
        vdivss  xmm1, xmm0, xmm7
      }
    }
    if ( v34 < v37 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3dcccccd
        vmulss  xmm2, xmm1, cs:__real@3fc00000
        vmovss  [rsp+178h+var_98], xmm0
      }
      if ( v62 )
      {
        __asm
        {
          vmovss  [rsp+178h+var_94], xmm0
          vmovss  xmm0, cs:__real@3f800000
          vmovss  [rsp+178h+var_90], xmm1
          vmovss  [rsp+178h+var_8C], xmm2
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vmovss  [rsp+178h+var_8C], xmm0
          vmovss  [rsp+178h+var_94], xmm1
          vmovss  [rsp+178h+var_90], xmm2
        }
      }
      __asm { vmovss  [rsp+178h+var_88], xmm0 }
      *(double *)&_XMM0 = BG_GetReloadTimeScale(weaponMap, playerState, ViewmodelWeapon, 0, v34, 0);
      __asm
      {
        vcomiss xmm0, xmm9
        vmovaps xmm8, xmm0
        vmovaps xmm6, xmm7
      }
      if ( v49 | v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1470, ASSERT_TYPE_ASSERT, "(reloadTimeScaler > 0.0f)", (const char *)&queryFormat, "reloadTimeScaler > 0.0f") )
        __debugbreak();
      if ( !v62 )
        __asm { vmulss  xmm8, xmm8, dword ptr [rbp+8048h] }
      __asm { vmovss  xmm7, cs:__real@3d4ccccd }
      time = level.time;
      v54 = 0i64;
      do
      {
        __asm
        {
          vmulss  xmm0, xmm6, [rsp+rdi+178h+var_98]
          vcvttss2si eax, xmm0
        }
        if ( v37 < _EAX )
          _EAX = v37;
        if ( _EAX < 1 )
          _EAX = 1;
        if ( v34 < _EAX )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rdi+rsi]
            vmulss  xmm1, xmm0, xmm8
            vcvttss2si edx, xmm1
          }
          if ( time - botData->botInfo.enemyTrack.lastVisTime > _EDX && time - botData->botInfo.enemyTrack.awareTime > _EDX )
          {
            *(double *)&_XMM0 = G_random();
            __asm { vcomiss xmm0, xmm7 }
            if ( v49 )
            {
              cmd->buttons |= 0x10ui64;
              v27 = 1i64;
              goto LABEL_35;
            }
            time = level.time;
          }
        }
        ++v17;
        v54 += 4i64;
      }
      while ( v17 < 5 );
    }
  }
LABEL_34:
  v27 = 0i64;
LABEL_35:
  __asm
  {
    vmovaps xmm9, [rsp+178h+var_78]
    vmovaps xmm8, [rsp+178h+var_68]
    vmovaps xmm7, [rsp+178h+var_58]
    vmovaps xmm6, [rsp+178h+var_48]
  }
  return v27;
}

/*
==============
Bot_Weap_VerifyWeaponDamageRanges
==============
*/

void __fastcall Bot_Weap_VerifyWeaponDamageRanges(const playerState_s *ps, const Weapon *weapon, double minRange, double maxRange)
{
  bool v11; 
  bool v12; 
  __int64 weaponIdx; 
  __int64 v19; 
  double v20; 
  double v21; 

  __asm
  {
    vmovaps [rsp+98h+var_48], xmm7
    vmovaps [rsp+98h+var_38], xmm6
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm3
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1703, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v11 = weapon->weaponIdx == 0;
  if ( !weapon->weaponIdx )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1704, ASSERT_TYPE_ASSERT, "( !Bot_Weap_IsNone( weapon ) )", (const char *)&queryFormat, "!Bot_Weap_IsNone( weapon )");
    v11 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vcomiss xmm7, cs:__real@46ea6000
    vmovaps xmm6, [rsp+98h+var_38]
  }
  if ( !v11 )
  {
    if ( ps && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x11u) )
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Bu);
    weaponIdx = weapon->weaponIdx;
    if ( (unsigned int)weaponIdx > bg_lastParsedWeaponIndex )
    {
      LODWORD(v19) = weapon->weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v19, bg_lastParsedWeaponIndex) )
        __debugbreak();
    }
    if ( !bg_weaponCompleteDefs[weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
      __debugbreak();
    __asm
    {
      vmovsd  xmm0, cs:__real@40dd4c0000000000
      vmovsd  [rsp+98h+var_58], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+98h+var_60], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 1712, ASSERT_TYPE_ASSERT, "(maxRange <= MAX_DMG_RANGE)", "%s\n\tInvalid max damage range for weapon '%s'. Range: %g, should be <= %g", "maxRange <= MAX_DMG_RANGE", bg_weaponCompleteDefs[weaponIdx]->szInternalName, v20, v21) )
      __debugbreak();
  }
  __asm { vmovaps xmm7, [rsp+98h+var_48] }
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

bool __fastcall Bot_Weap_WeaponDoesSplashDamage(const bot_data_t *const botData, double _XMM1_8)
{
  playerState_s *playerState; 
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  const Weapon *v7; 
  bool v8; 
  char v10; 
  char v11; 

  if ( !botData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_bot_weapon.cpp", 2435, ASSERT_TYPE_ASSERT, "( botData )", (const char *)&queryFormat, "botData") )
    __debugbreak();
  playerState = botData->botInfo.playerState;
  Instance = GWeaponMap::GetInstance();
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, playerState);
  v7 = ViewmodelWeapon;
  if ( !ViewmodelWeapon->weaponIdx )
    return 0;
  if ( !Bot_Weap_WeaponDef(botData->botInfo.playerState, ViewmodelWeapon)->bBulletExplosiveDamage )
    return 0;
  v8 = BG_UsingAlternate(botData->botInfo.playerState);
  *(double *)&_XMM0 = BG_WeaponBulletFire_GetExplRadius(v7, v8);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  return !(v10 | v11);
}

/*
==============
Bot_Weap_WeaponForName
==============
*/
Weapon *Bot_Weap_WeaponForName(Weapon *result, const char *name)
{
  Weapon resulta; 

  _RBX = result;
  _RAX = G_Weapon_GetWeaponForName(&resulta, name);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups ymmword ptr [rbx], ymm0
    vmovsd  xmm0, qword ptr [rax+30h]
  }
  LODWORD(_RAX) = *(_DWORD *)&_RAX->weaponCamo;
  __asm
  {
    vmovups xmmword ptr [rbx+20h], xmm1
    vmovsd  qword ptr [rbx+30h], xmm0
  }
  *(_DWORD *)&_RBX->weaponCamo = (_DWORD)_RAX;
  return _RBX;
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

