/*
==============
G_Weapon_GetShieldCosOfAngleToPoint
==============
*/

double __fastcall G_Weapon_GetShieldCosOfAngleToPoint(const gentity_s *shieldHolder, const vec3_t *point, bool shieldOnBack, bool shieldOpenForFiring)
{
  double result; 

  *(float *)&result = ?G_Weapon_GetShieldCosOfAngleToPoint@@YAMPEBUgentity_s@@AEBTvec3_t@@_N2@Z(shieldHolder, point, shieldOnBack, shieldOpenForFiring);
  return result;
}

/*
==============
G_Weapon_FireGrenade
==============
*/

gentity_s *__fastcall G_Weapon_FireGrenade(gentity_s *const ent, const entity_event_t eventType, const int gameTime, const GWeaponFireParms *const params)
{
  return ?G_Weapon_FireGrenade@@YAPEAUgentity_s@@QEAU1@W4entity_event_t@@HQEBUGWeaponFireParms@@@Z(ent, eventType, gameTime, params);
}

/*
==============
G_Weapon_GetShieldBlastDamageProtection
==============
*/

double __fastcall G_Weapon_GetShieldBlastDamageProtection(gentity_s *ent, const vec3_t *blastOrigin)
{
  double result; 

  *(float *)&result = ?G_Weapon_GetShieldBlastDamageProtection@@YAMPEAUgentity_s@@AEBTvec3_t@@@Z(ent, blastOrigin);
  return result;
}

/*
==============
G_Weapon_EntityHasShield
==============
*/

bool __fastcall G_Weapon_EntityHasShield(const gentity_s *const ent)
{
  return ?G_Weapon_EntityHasShield@@YA_NQEBUgentity_s@@@Z(ent);
}

/*
==============
G_Weapon_GetWeaponForName
==============
*/

Weapon *__fastcall G_Weapon_GetWeaponForName(Weapon *result, const char *name)
{
  return ?G_Weapon_GetWeaponForName@@YA?AUWeapon@@PEBD@Z(result, name);
}

/*
==============
G_Weapon_SetupOffhandParams
==============
*/

void __fastcall G_Weapon_SetupOffhandParams(const gentity_s *const ent, const Weapon *offhandWeapon, const int gameTime, BgWeaponParms *const outParams)
{
  ?G_Weapon_SetupOffhandParams@@YAXQEBUgentity_s@@AEBUWeapon@@HQEAUBgWeaponParms@@@Z(ent, offhandWeapon, gameTime, outParams);
}

/*
==============
G_Weapon_UseOffHand
==============
*/

void __fastcall G_Weapon_UseOffHand(gentity_s *const ent, const Weapon *r_offHandWeapon, const int gameTime)
{
  ?G_Weapon_UseOffHand@@YAXQEAUgentity_s@@AEBUWeapon@@H@Z(ent, r_offHandWeapon, gameTime);
}

/*
==============
G_Weapon_SetEquippedOffHand
==============
*/

void __fastcall G_Weapon_SetEquippedOffHand(int clientNum, const Weapon *offHand)
{
  ?G_Weapon_SetEquippedOffHand@@YAXHAEBUWeapon@@@Z(clientNum, offHand);
}

/*
==============
G_Weapon_GivePlayerWeapon
==============
*/

int __fastcall G_Weapon_GivePlayerWeapon(playerState_s *ps, scrContext_t *scrContext, const Weapon *weapon, int dualWield, int startInAltMode, int usedBefore)
{
  return ?G_Weapon_GivePlayerWeapon@@YAHPEAUplayerState_s@@PEAUscrContext_t@@AEBUWeapon@@HHH@Z(ps, scrContext, weapon, dualWield, startInAltMode, usedBefore);
}

/*
==============
G_Weapon_GrenadeLauncher_Fire
==============
*/

gentity_s *__fastcall G_Weapon_GrenadeLauncher_Fire(gentity_s *ent, const Weapon *grenade, const PlayerHandIndex hand, const int gameTime, const BgWeaponParms *wp)
{
  return ?G_Weapon_GrenadeLauncher_Fire@@YAPEAUgentity_s@@PEAU1@AEBUWeapon@@W4PlayerHandIndex@@HPEBUBgWeaponParms@@@Z(ent, grenade, hand, gameTime, wp);
}

/*
==============
G_Weapon_FireBullet
==============
*/

int __fastcall G_Weapon_FireBullet(gentity_s *const ent, const int gameTime, const GWeaponFireParms *const params)
{
  return ?G_Weapon_FireBullet@@YAHQEAUgentity_s@@HQEBUGWeaponFireParms@@@Z(ent, gameTime, params);
}

/*
==============
G_Weapon_FireMeleeWithParams
==============
*/

void __fastcall G_Weapon_FireMeleeWithParams(gentity_s *const ent, const int gameTime, const GMeleeFireParms *const params)
{
  ?G_Weapon_FireMeleeWithParams@@YAXQEAUgentity_s@@HQEBUGMeleeFireParms@@@Z(ent, gameTime, params);
}

/*
==============
G_Weapon_CreateRiotShieldPhysics
==============
*/

void __fastcall G_Weapon_CreateRiotShieldPhysics(const DObj *obj, const int modelIndex, const int entityNum)
{
  ?G_Weapon_CreateRiotShieldPhysics@@YAXPEBUDObj@@HH@Z(obj, modelIndex, entityNum);
}

/*
==============
G_Weapon_ClearSimulateTracerFlag
==============
*/

void __fastcall G_Weapon_ClearSimulateTracerFlag(gentity_s *ent)
{
  ?G_Weapon_ClearSimulateTracerFlag@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Weapon_GetEntityTurret
==============
*/

gentity_s *__fastcall G_Weapon_GetEntityTurret(const gentity_s *const ent)
{
  return ?G_Weapon_GetEntityTurret@@YAPEAUgentity_s@@QEBU1@@Z(ent);
}

/*
==============
G_Weapon_Fire
==============
*/

void __fastcall G_Weapon_Fire(gentity_s *ent, const int gametime, const entity_event_t eventType, const unsigned int eventParm)
{
  ?G_Weapon_Fire@@YAXPEAUgentity_s@@HW4entity_event_t@@I@Z(ent, gametime, eventType, eventParm);
}

/*
==============
G_Weapon_PlayerIsUsingShield
==============
*/

bool __fastcall G_Weapon_PlayerIsUsingShield(const gentity_s *ent)
{
  return ?G_Weapon_PlayerIsUsingShield@@YA_NPEBUgentity_s@@@Z(ent);
}

/*
==============
G_Weapon_TakePlayerWeapon
==============
*/

int __fastcall G_Weapon_TakePlayerWeapon(playerState_s *ps, const Weapon *weapon)
{
  return ?G_Weapon_TakePlayerWeapon@@YAHPEAUplayerState_s@@AEBUWeapon@@@Z(ps, weapon);
}

/*
==============
G_Weapon_SelectWeapon
==============
*/

void __fastcall G_Weapon_SelectWeapon(int clientNum, const Weapon *weapon)
{
  ?G_Weapon_SelectWeapon@@YAXHAEBUWeapon@@@Z(clientNum, weapon);
}

/*
==============
G_Weapon_FireTurret
==============
*/

void __fastcall G_Weapon_FireTurret(gentity_s *ent, const int gameTime)
{
  ?G_Weapon_FireTurret@@YAXPEAUgentity_s@@H@Z(ent, gameTime);
}

/*
==============
G_Weapon_FireScriptedMelee
==============
*/

void __fastcall G_Weapon_FireScriptedMelee(gentity_s *ent)
{
  ?G_Weapon_FireScriptedMelee@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Weapon_PlayerHasOffhandShieldOpenToFireWeapon
==============
*/

bool __fastcall G_Weapon_PlayerHasOffhandShieldOpenToFireWeapon(const gentity_s *ent)
{
  return ?G_Weapon_PlayerHasOffhandShieldOpenToFireWeapon@@YA_NPEBUgentity_s@@@Z(ent);
}

/*
==============
G_Weapon_FireTurretEnd
==============
*/

void __fastcall G_Weapon_FireTurretEnd(gentity_s *ent)
{
  ?G_Weapon_FireTurretEnd@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Weapon_SetupMissileParams
==============
*/

void __fastcall G_Weapon_SetupMissileParams(const gentity_s *const attacker, const int gameTime, const int eventType, const unsigned int eventParm, GWeaponFireParms *const outParams)
{
  ?G_Weapon_SetupMissileParams@@YAXQEBUgentity_s@@HHIQEAUGWeaponFireParms@@@Z(attacker, gameTime, eventType, eventParm, outParams);
}

/*
==============
G_Weapon_GetShieldTagNormal
==============
*/

void __fastcall G_Weapon_GetShieldTagNormal(const gentity_s *shieldHolder, vec3_t *resultNormal)
{
  ?G_Weapon_GetShieldTagNormal@@YAXPEBUgentity_s@@AEATvec3_t@@@Z(shieldHolder, resultNormal);
}

/*
==============
GWeapon::FireWeaponApplyAdsAimSpreadFixUp
==============
*/

void __fastcall GWeapon::FireWeaponApplyAdsAimSpreadFixUp(GWeapon *this, const playerState_s *ps, float *outAimSpreadScale)
{
  ?FireWeaponApplyAdsAimSpreadFixUp@GWeapon@@QEBAXPEBUplayerState_s@@PEAM@Z(this, ps, outAimSpreadScale);
}

/*
==============
G_Weapons_RebuildWeaponsArray
==============
*/

void __fastcall G_Weapons_RebuildWeaponsArray(int entNum)
{
  ?G_Weapons_RebuildWeaponsArray@@YAXH@Z(entNum);
}

/*
==============
G_Weapon_ReportOffhandSlotAssignError
==============
*/

void __fastcall G_Weapon_ReportOffhandSlotAssignError(const playerState_s *ps, const Weapon *weapon, GOffhandSlotAssignResult result, scrContext_t *scrContext)
{
  ?G_Weapon_ReportOffhandSlotAssignError@@YAXPEBUplayerState_s@@AEBUWeapon@@W4GOffhandSlotAssignResult@@PEAUscrContext_t@@@Z(ps, weapon, result, scrContext);
}

/*
==============
G_Weapon_ThrowGrenade
==============
*/

gentity_s *__fastcall G_Weapon_ThrowGrenade(gentity_s *ent, const int gameTime, const BgWeaponParms *wp)
{
  return ?G_Weapon_ThrowGrenade@@YAPEAUgentity_s@@PEAU1@HPEBUBgWeaponParms@@@Z(ent, gameTime, wp);
}

/*
==============
G_Weapon_SetupWeaponParams
==============
*/

void __fastcall G_Weapon_SetupWeaponParams(const gentity_s *const attacker, const int gameTime, GWeaponFireParms *outParams)
{
  ?G_Weapon_SetupWeaponParams@@YAXQEBUgentity_s@@HPEAUGWeaponFireParms@@@Z(attacker, gameTime, outParams);
}

/*
==============
G_Weapon_SetupWeaponDef
==============
*/

bool __fastcall G_Weapon_SetupWeaponDef(bool isGameServer)
{
  return ?G_Weapon_SetupWeaponDef@@YA_N_N@Z(isGameServer);
}

/*
==============
G_Weapon_HandleFiredEvent
==============
*/

void __fastcall G_Weapon_HandleFiredEvent(gentity_s *const attacker, gentity_s *const fired, const int hitClientNum, const int eventType, const unsigned int eventParm, const GWeaponFireParms *const params)
{
  ?G_Weapon_HandleFiredEvent@@YAXQEAUgentity_s@@0HHIQEBUGWeaponFireParms@@@Z(attacker, fired, hitClientNum, eventType, eventParm, params);
}

/*
==============
G_Weapon_DestroyRiotShieldPhysics
==============
*/

void __fastcall G_Weapon_DestroyRiotShieldPhysics(const int entityNum)
{
  ?G_Weapon_DestroyRiotShieldPhysics@@YAXH@Z(entityNum);
}

/*
==============
G_Weapon_ShouldPlayMeleeChargeDeathAnim
==============
*/

int __fastcall G_Weapon_ShouldPlayMeleeChargeDeathAnim(const int damageMOD, const gentity_s *attacker, int victimEntId)
{
  return ?G_Weapon_ShouldPlayMeleeChargeDeathAnim@@YAHHPEBUgentity_s@@H@Z(damageMOD, attacker, victimEntId);
}

/*
==============
G_Weapon_SetupMeleeParams
==============
*/

void __fastcall G_Weapon_SetupMeleeParams(const gentity_s *const ent, const int gameTime, GMeleeFireParms *const outParams)
{
  ?G_Weapon_SetupMeleeParams@@YAXQEBUgentity_s@@HQEAUGMeleeFireParms@@@Z(ent, gameTime, outParams);
}

/*
==============
G_Weapon_RocketLauncher_Fire
==============
*/

gentity_s *__fastcall G_Weapon_RocketLauncher_Fire(gentity_s *ent, const Weapon *weapon, const bool isAlternate, const PlayerHandIndex hand, float spread, const BgWeaponParms *wp, const vec3_t *gunVel, const int gameTime, const BgMissileFireParms *fireParms, bool magicBullet)
{
  return ?G_Weapon_RocketLauncher_Fire@@YAPEAUgentity_s@@PEAU1@AEBUWeapon@@_NW4PlayerHandIndex@@MPEBUBgWeaponParms@@AEBTvec3_t@@HPEBUBgMissileFireParms@@_N@Z(ent, weapon, isAlternate, hand, spread, wp, gunVel, gameTime, fireParms, magicBullet);
}

/*
==============
G_Weapon_AssignWeaponOffhandSlot
==============
*/

GOffhandSlotAssignResult __fastcall G_Weapon_AssignWeaponOffhandSlot(playerState_s *ps, const Weapon *weapon, const OffhandSlot slot)
{
  return ?G_Weapon_AssignWeaponOffhandSlot@@YA?AW4GOffhandSlotAssignResult@@PEAUplayerState_s@@AEBUWeapon@@W4OffhandSlot@@@Z(ps, weapon, slot);
}

/*
==============
G_Weapon_SetupBulletParams
==============
*/

void __fastcall G_Weapon_SetupBulletParams(const gentity_s *const attacker, const int gameTime, const int eventType, const unsigned int eventParm, GWeaponFireParms *const outParams)
{
  ?G_Weapon_SetupBulletParams@@YAXQEBUgentity_s@@HHIQEAUGWeaponFireParms@@@Z(attacker, gameTime, eventType, eventParm, outParams);
}

/*
==============
G_Weapon_SetupLevelWeaponDef
==============
*/

void __fastcall G_Weapon_SetupLevelWeaponDef(const bool registerWeapons)
{
  ?G_Weapon_SetupLevelWeaponDef@@YAX_N@Z(registerWeapons);
}

/*
==============
G_Weapon_PlayerShieldIsInBlockingState
==============
*/

bool __fastcall G_Weapon_PlayerShieldIsInBlockingState(const gentity_s *ent)
{
  return ?G_Weapon_PlayerShieldIsInBlockingState@@YA_NPEBUgentity_s@@@Z(ent);
}

/*
==============
G_Weapon_AutoAssignSlot
==============
*/

void __fastcall G_Weapon_AutoAssignSlot(const WeaponDef *weapDef, PlayerEquippedWeaponState *equippedWeapon)
{
  ?G_Weapon_AutoAssignSlot@@YAXPEBUWeaponDef@@PEAUPlayerEquippedWeaponState@@@Z(weapDef, equippedWeapon);
}

/*
==============
G_Weapon_FireMelee
==============
*/

void __fastcall G_Weapon_FireMelee(gentity_s *ent, const int gameTime)
{
  ?G_Weapon_FireMelee@@YAXPEAUgentity_s@@H@Z(ent, gameTime);
}

/*
==============
G_Weapon_PlayerIsRiotShieldOnBack
==============
*/

bool __fastcall G_Weapon_PlayerIsRiotShieldOnBack(const gentity_s *ent)
{
  return ?G_Weapon_PlayerIsRiotShieldOnBack@@YA_NPEBUgentity_s@@@Z(ent);
}

/*
==============
G_Weapon_GetRiotShieldIfEquipped
==============
*/

const Weapon *__fastcall G_Weapon_GetRiotShieldIfEquipped(const gentity_s *ent)
{
  return ?G_Weapon_GetRiotShieldIfEquipped@@YAAEBUWeapon@@PEBUgentity_s@@@Z(ent);
}

/*
==============
G_Weapon_FinalizeChargeMelee
==============
*/

void __fastcall G_Weapon_FinalizeChargeMelee(gentity_s *attacker, gentity_s *victim, int hitEntDamage)
{
  ?G_Weapon_FinalizeChargeMelee@@YAXPEAUgentity_s@@0H@Z(attacker, victim, hitEntDamage);
}

/*
==============
G_Weapon_CalcMuzzlePoints
==============
*/

void __fastcall G_Weapon_CalcMuzzlePoints(const gentity_s *ent, const int gameTime, BgWeaponParms *wp)
{
  ?G_Weapon_CalcMuzzlePoints@@YAXPEBUgentity_s@@HPEAUBgWeaponParms@@@Z(ent, gameTime, wp);
}

/*
==============
G_Weapon_PlayerHasOffhandShieldDeployed
==============
*/

bool __fastcall G_Weapon_PlayerHasOffhandShieldDeployed(const gentity_s *ent)
{
  return ?G_Weapon_PlayerHasOffhandShieldDeployed@@YA_NPEBUgentity_s@@@Z(ent);
}

/*
==============
G_Weapon_AddShieldSplashDamageEvent
==============
*/

void __fastcall G_Weapon_AddShieldSplashDamageEvent(gentity_s *ent, float originalDamageRawPoints, float originalDamageScale, float shieldProtection)
{
  ?G_Weapon_AddShieldSplashDamageEvent@@YAXPEAUgentity_s@@MMM@Z(ent, originalDamageRawPoints, originalDamageScale, shieldProtection);
}

/*
==============
G_Weapon_StartSwipeMelee
==============
*/

void __fastcall G_Weapon_StartSwipeMelee(gentity_s *ent)
{
  ?G_Weapon_StartSwipeMelee@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Weapon_StartChargeMelee
==============
*/

void __fastcall G_Weapon_StartChargeMelee(gentity_s *ent)
{
  ?G_Weapon_StartChargeMelee@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Weapon_GetShieldTagMatrix
==============
*/

bool __fastcall G_Weapon_GetShieldTagMatrix(const gentity_s *shieldHolder, tmat43_t<vec3_t> *resultMatrix)
{
  return ?G_Weapon_GetShieldTagMatrix@@YA_NPEBUgentity_s@@AEAT?$tmat43_t@Tvec3_t@@@@@Z(shieldHolder, resultMatrix);
}

/*
==============
G_Weapon_Melee
==============
*/

gentity_s *__fastcall G_Weapon_Melee(gentity_s *ent, const GMeleeFireParms *params, float width, float height, const int gameTime, int *outHitEntDamage, damageReturnCode_t *outDamageReturnCode)
{
  return ?G_Weapon_Melee@@YAPEAUgentity_s@@PEAU1@PEBUGMeleeFireParms@@MMHPEAHPEAW4damageReturnCode_t@@@Z(ent, params, width, height, gameTime, outHitEntDamage, outDamageReturnCode);
}

/*
==============
G_Weapon_RegisterWeaponForKillcamFXRemoval
==============
*/

void __fastcall G_Weapon_RegisterWeaponForKillcamFXRemoval(int clientNum, const Weapon *weapon)
{
  ?G_Weapon_RegisterWeaponForKillcamFXRemoval@@YAXHAEBUWeapon@@@Z(clientNum, weapon);
}

/*
==============
G_Weapon_FireMissile
==============
*/

gentity_s *__fastcall G_Weapon_FireMissile(gentity_s *const ent, const entity_event_t eventType, const int gameTime, const GWeaponFireParms *const params)
{
  return ?G_Weapon_FireMissile@@YAPEAUgentity_s@@QEAU1@W4entity_event_t@@HQEBUGWeaponFireParms@@@Z(ent, eventType, gameTime, params);
}

/*
==============
G_Weapon_UseOffHandWithParams
==============
*/

void __fastcall G_Weapon_UseOffHandWithParams(gentity_s *const ent, const int gameTime, const BgWeaponParms *const wp)
{
  ?G_Weapon_UseOffHandWithParams@@YAXQEAUgentity_s@@HQEBUBgWeaponParms@@@Z(ent, gameTime, wp);
}

/*
==============
GWeapon::FireWeaponApplyAdsAimSpreadFixUp
==============
*/
void GWeapon::FireWeaponApplyAdsAimSpreadFixUp(GWeapon *this, const playerState_s *ps, float *outAimSpreadScale)
{
  bool v5; 
  bool v6; 

  _RDI = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2941, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = outAimSpreadScale == NULL;
  if ( !outAimSpreadScale )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2942, ASSERT_TYPE_ASSERT, "( outAimSpreadScale )", (const char *)&queryFormat, "outAimSpreadScale");
    v5 = !v6;
    if ( v6 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vucomiss xmm0, dword ptr [rdi+730h]
  }
  if ( v5 )
    *outAimSpreadScale = 0.0;
}

/*
==============
G_Weapon_AddShieldSplashDamageEvent
==============
*/

void __fastcall G_Weapon_AddShieldSplashDamageEvent(gentity_s *ent, double originalDamageRawPoints, double originalDamageScale, double shieldProtection)
{
  const dvar_t *v11; 
  char v24; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps xmm8, xmm3
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
  }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2726, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v11 = DVARBOOL_shieldDebug;
  __asm
  {
    vmulss  xmm0, xmm7, xmm6
    vcvttss2si rbx, xmm0
  }
  if ( !DVARBOOL_shieldDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "shieldDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    __asm
    {
      vmulss  xmm0, xmm8, cs:__real@42c80000
      vcvtss2sd xmm3, xmm0, xmm0
      vmovq   r9, xmm3
    }
    Com_Printf(15, "Splash damage on front of shield, damage would have been: %i  -  shield protection: %.0f\n", (unsigned int)_RBX, *(double *)&_XMM3);
  }
  if ( (unsigned int)_RBX > 0xFF )
    LODWORD(_RBX) = 255;
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  _R11 = &v24;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  G_Utils_AddEvent(ent, 0x66u, _RBX);
}

/*
==============
G_Weapon_AssignWeaponOffhandSlot
==============
*/
__int64 G_Weapon_AssignWeaponOffhandSlot(playerState_s *ps, const Weapon *weapon, const OffhandSlot slot)
{
  const WeaponDef *v6; 
  const WeaponDef *v7; 
  GWeaponMap *Instance; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 

  v6 = BG_WeaponDef(weapon, 0);
  v7 = v6;
  if ( v6->offhandClass == OFFHAND_CLASS_NONE )
    return 1i64;
  if ( v6->inventoryType != WEAPINVENTORY_OFFHAND )
    return 3i64;
  if ( !BG_IsOffhandWeaponType(weapon, 0) )
    return 2i64;
  Instance = GWeaponMap::GetInstance();
  if ( !BG_PlayerHasWeapon(Instance, ps, weapon) )
    return 4i64;
  EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(Instance, ps, weapon);
  if ( !EquippedWeaponStateNonConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1822, ASSERT_TYPE_ASSERT, "(equippedData)", (const char *)&queryFormat, "equippedData") )
    __debugbreak();
  if ( slot )
  {
    switch ( slot )
    {
      case OFFHAND_SLOT_PRIMARY:
        ps->weapCommon.offhandPrimary = v7->offhandClass;
        break;
      case OFFHAND_SLOT_SECONDARY:
        ps->weapCommon.offhandSecondary = v7->offhandClass;
        break;
      case OFFHAND_SLOT_SPECIAL:
        ps->weapCommon.offhandSpecial = v7->offhandClass;
        break;
      case OFFHAND_SLOT_SCRIPTED:
        ps->weapCommon.offhandScripted = v7->offhandClass;
        break;
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1823, ASSERT_TYPE_ASSERT, "(slot != OFFHAND_SLOT_NONE)", (const char *)&queryFormat, "slot != OFFHAND_SLOT_NONE") )
  {
    __debugbreak();
  }
  EquippedWeaponStateNonConst->offhandSlot = slot;
  return 0i64;
}

/*
==============
G_Weapon_AutoAssignSlot
==============
*/
void G_Weapon_AutoAssignSlot(const WeaponDef *weapDef, PlayerEquippedWeaponState *equippedWeapon)
{
  equippedWeapon->slot = WEAPON_SLOT_NONE;
  if ( weapDef->inventoryType == WEAPINVENTORY_PRIMARY )
    equippedWeapon->slot = weapDef->slot;
}

/*
==============
G_Weapon_CalcMuzzlePoints
==============
*/
void G_Weapon_CalcMuzzlePoints(const gentity_s *ent, const int gameTime, BgWeaponParms *wp)
{
  GAntiLag *v13; 
  GWeaponMap *Instance; 
  GHandler *Handler; 
  vec3_t *p_muzzleTrace; 
  int v68; 
  int v69; 
  vec3_t angles; 
  WorldUpReferenceFrame v71; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RBX = &ent->agent->playerState;
  _RBP = wp;
  if ( _RBX )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+8F98h]
      vmovss  xmm7, dword ptr [rbx+8F9Ch]
    }
  }
  else
  {
    if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 918, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
      __debugbreak();
    _RBX = &ent->client->ps;
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+5E4Ch]
      vmovss  xmm7, dword ptr [rbx+5E50h]
    }
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 923, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rbx+1D8h] }
  v13 = GAntiLag::ms_gAntiLagData;
  __asm
  {
    vmovss  dword ptr [rsp+0D8h+angles], xmm0
    vmovss  xmm1, dword ptr [rbx+1DCh]
    vmovss  dword ptr [rsp+0D8h+angles+4], xmm1
    vmovss  xmm0, dword ptr [rbx+1E0h]
    vmovss  dword ptr [rsp+0D8h+angles+8], xmm0
  }
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->eFlags, ACTIVE, 0xBu) )
  {
    __asm { vmovss  [rsp+0D8h+var_A8], xmm6 }
    if ( (v68 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 935, ASSERT_TYPE_SANITY, "( !IS_NAN( fGunPitch ) )", (const char *)&queryFormat, "!IS_NAN( fGunPitch )") )
      __debugbreak();
    __asm { vmovss  [rsp+0D8h+var_A8], xmm7 }
    if ( (v69 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 936, ASSERT_TYPE_SANITY, "( !IS_NAN( fGunYaw ) )", (const char *)&queryFormat, "!IS_NAN( fGunYaw )") )
      __debugbreak();
    __asm
    {
      vmovss  dword ptr [rsp+0D8h+angles], xmm6
      vmovss  dword ptr [rsp+0D8h+angles+4], xmm7
    }
  }
  Instance = GWeaponMap::GetInstance();
  if ( BG_IsThirdPersonMode(Instance, _RBX) )
  {
    __asm
    {
      vmovss  dword ptr [rsp+0D8h+angles], xmm6
      vmovss  dword ptr [rsp+0D8h+angles+4], xmm7
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT|0x80) )
  {
    Handler = GHandler::getHandler();
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v71, _RBX, Handler, 1);
    WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v71, &angles);
  }
  if ( (_RBX->linkFlags.m_flags[0] & 4) != 0 )
  {
    if ( !ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 958, ASSERT_TYPE_ASSERT, "(ent->tagInfo)", (const char *)&queryFormat, "ent->tagInfo") )
      __debugbreak();
    if ( v13->m_printAntilagWarnings && BG_GetWeaponType(&_RBP->weapon, _RBP->isAlternate) == WEAPTYPE_BULLET )
      Com_PrintWarning(15, "Client #%i: Bullet weapons are not supported for players linked with PLinkFlagsCommon::WEAPONVIEW_ONLY.\n", (unsigned int)_RBX->clientNum);
    p_muzzleTrace = &_RBP->muzzleTrace;
    G_Utils_DObjGetWorldTagPos_CheckTagExists(ent->tagInfo->parent, (const scr_string_t)scr_const.tag_player, 1, &_RBP->muzzleTrace);
  }
  else
  {
    p_muzzleTrace = &_RBP->muzzleTrace;
    G_Client_GetWeaponOrigin(_RBX, &_RBP->muzzleTrace);
  }
  if ( BG_GetWeaponType(&_RBP->weapon, _RBP->isAlternate) == WEAPTYPE_BULLET && v13->ShouldPerformMuzzlePointAntiLag(v13, gameTime, ent) )
    GAntiLag::RewindPlayerMuzzleTrace(v13, gameTime, ent->s.number, p_muzzleTrace, &angles);
  AngleVectors(&angles, &_RBP->forward, &_RBP->right, &_RBP->up);
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+0]
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  xmm3, dword ptr [rbp+8]
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm6, cs:__real@80000000
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, xmm6
    vblendvps xmm0, xmm4, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+0], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbp+4]
    vmovss  dword ptr [rbp+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbp+8]
    vmovss  dword ptr [rbp+8], xmm0
    vmovss  xmm5, dword ptr [rbp+0Ch]
    vmovss  xmm0, dword ptr [rbp+10h]
    vmovss  xmm3, dword ptr [rbp+14h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, xmm6
    vblendvps xmm0, xmm4, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+0Ch], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbp+10h]
    vmovss  dword ptr [rbp+10h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbp+14h]
    vmovss  dword ptr [rbp+14h], xmm0
    vmovss  xmm0, dword ptr [rbp+1Ch]
    vmovss  xmm5, dword ptr [rbp+18h]
    vmovss  xmm3, dword ptr [rbp+20h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, xmm6
    vblendvps xmm0, xmm4, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm2, xmm5
    vmovss  dword ptr [rbp+18h], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbp+1Ch]
    vmovss  dword ptr [rbp+1Ch], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbp+20h]
    vmovss  dword ptr [rbp+20h], xmm0
  }
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  GWeapon::ms_gWeaponSystem->MuzzlePointAddOffset(GWeapon::ms_gWeaponSystem, _RBP, ent);
  __asm
  {
    vmovaps xmm6, [rsp+0D8h+var_48]
    vmovaps xmm7, [rsp+0D8h+var_58]
  }
}

/*
==============
G_Weapon_ClearSimulateTracerFlag
==============
*/
void G_Weapon_ClearSimulateTracerFlag(gentity_s *ent)
{
  gagent_s *agent; 

  if ( ent && G_Utils_IsClientOrAgent(ent) )
  {
    agent = ent->agent;
    if ( agent )
      agent->agentState.doNotSimulateTracers = 0;
    else
      ent->client->sess.cs.doNotSimulateTracers = 0;
  }
}

/*
==============
G_Weapon_CreateRiotShieldPhysics
==============
*/
void G_Weapon_CreateRiotShieldPhysics(const DObj *obj, const int modelIndex, const int entityNum)
{
  __int64 v3; 
  __int64 v5; 
  const XModel *v6; 
  const gentity_s *v7; 
  G_PhysicsObject *v8; 
  unsigned __int16 v9; 
  int Ref; 
  unsigned int v11; 
  unsigned int v12; 
  int NumRigidBodys; 
  bool v14; 
  int v15; 
  unsigned __int64 v16; 
  PhysicsObjectBoneMapping *m_buffer; 
  signed int v18; 
  unsigned __int16 *attachModelNames; 
  unsigned __int64 v20; 
  unsigned int m_serialAndIndex; 
  __int64 v22; 
  scr_string_t v23; 
  unsigned __int8 v24; 
  __int64 tryStartDeactivated; 
  unsigned __int8 inOutIndex[4]; 
  int v27; 
  const gentity_s *GEntity; 
  hknpBodyId result; 
  int modelIndexa; 
  DObj *obja; 
  unsigned __int16 *v32; 
  vec4_t quat; 

  v3 = entityNum;
  v5 = modelIndex;
  obja = (DObj *)obj;
  if ( (unsigned int)entityNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityNum, 2048) )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v3].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2770, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( entityNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( entityNum )") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2771, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v6 = obj->models[v5];
  GEntity = G_GetGEntity(v3);
  v7 = GEntity;
  v8 = G_PhysicsObject_Get(GEntity);
  AnglesToQuat(&GEntity->r.currentAngles, &quat);
  v9 = truncate_cast<unsigned short,int>(v3);
  Ref = Physics_MakeRef(Physics_RefSystem_GItems, Physics_RelationshipSystem_None, GEntity->r.modelType, v9);
  if ( v8->physicsInstances[1] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2783, ASSERT_TYPE_ASSERT, "(physicsObj->physicsInstances[PHYSICS_WORLD_ID_SERVER_DETAIL] == 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObj->physicsInstances[PHYSICS_WORLD_ID_SERVER_DETAIL] == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v11 = Physics_InstantiateDetailModel(PHYSICS_WORLD_ID_SERVER_DETAIL, v6, Ref, &GEntity->r.currentOrigin, &quat, 0, 1, 0, 0);
  v8->physicsInstances[1] = v11;
  v12 = v11;
  if ( v11 != -1 && Physics_IsInstanceDetailBounded(PHYSICS_WORLD_ID_SERVER_DETAIL, v11) )
  {
    NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_SERVER_DETAIL, v12);
    if ( NumRigidBodys <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2803, ASSERT_TYPE_ASSERT, "(numRigidBodies > 1)", (const char *)&queryFormat, "numRigidBodies > 1") )
      __debugbreak();
    if ( v8->detailBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2806, ASSERT_TYPE_ASSERT, "( physicsObj->detailBoneMapping.size() == 0 )", (const char *)&queryFormat, "physicsObj->detailBoneMapping.size() == 0") )
      __debugbreak();
    v14 = v8->detailBoneMapping.m_data.m_buffer == NULL;
    v15 = NumRigidBodys - 1;
    v27 = NumRigidBodys - 1;
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 82, ASSERT_TYPE_ASSERT, "( ( m_data.begin() == 0 ) || ( memory_block_type::is_fixed_memory_block::value ) )", "Reallocation is not supported") )
      __debugbreak();
    if ( !ntl::static_shared_allocator<G_PhysicsObject_BoneMappingAllocator,ntl::fixed_heap_allocator<131072,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 137, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
      __debugbreak();
    v16 = 0i64;
    v8->detailBoneMapping.m_data.m_buffer = (PhysicsObjectBoneMapping *)ntl::nxheap::allocate(&ntl::static_shared_allocator<G_PhysicsObject_BoneMappingAllocator,ntl::fixed_heap_allocator<131072,0>>::mp_allocator->m_heap, 8i64 * v15, 4ui64, 1);
    v8->detailBoneMapping.m_data.m_size = v15;
    if ( v15 )
    {
      do
      {
        if ( v16 >= v8->detailBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
        m_buffer = v8->detailBoneMapping.m_data.m_buffer;
        m_buffer[v16].bodyId = 0xFFFFFF;
        m_buffer[v16++].boneIndex = 0;
      }
      while ( v16 < v15 );
      v7 = GEntity;
    }
    v18 = 0;
    if ( v15 > 0 )
    {
      attachModelNames = v7->attachModelNames;
      v20 = 0i64;
      v32 = v7->attachModelNames;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( !g_physicsServerWorldsCreated )
        {
          LODWORD(tryStartDeactivated) = 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", tryStartDeactivated) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_SERVER_DETAIL, v12, v18)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2813, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2743, ASSERT_TYPE_ASSERT, "( model )", (const char *)&queryFormat, "model") )
          __debugbreak();
        v22 = 0i64;
        while ( 1 )
        {
          if ( !*attachModelNames )
          {
LABEL_57:
            v23 = 0;
            goto LABEL_58;
          }
          if ( G_Utils_GetModel(*attachModelNames) == v6 )
            break;
          ++v22;
          ++attachModelNames;
          if ( v22 >= 28 )
            goto LABEL_57;
        }
        v23 = GEntity->attachTagNames[v22];
LABEL_58:
        inOutIndex[0] = -2;
        if ( !v23 || !DObjGetBoneIndexInternal_21(obja, v23, inOutIndex, &modelIndexa) )
          inOutIndex[0] = -2;
        if ( v20 >= v8->detailBoneMapping.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v20 >= v8->detailBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        v8->detailBoneMapping.m_data.m_buffer[v20].bodyId = m_serialAndIndex;
        v24 = inOutIndex[0];
        if ( v20 >= v8->detailBoneMapping.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v20 >= v8->detailBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        ++v18;
        v8->detailBoneMapping.m_data.m_buffer[v20].boneIndex = v24;
        attachModelNames = v32;
        ++v20;
      }
      while ( v18 < v27 );
    }
  }
}

/*
==============
G_Weapon_DestroyRiotShieldPhysics
==============
*/
void G_Weapon_DestroyRiotShieldPhysics(const int entityNum)
{
  __int64 v1; 
  gentity_s *GEntity; 
  gentity_s *v3; 
  entityType_s eType; 
  G_PhysicsObject *v5; 
  unsigned int v6; 
  const XModel *InstanceDetailModel; 
  int v9; 

  v1 = entityNum;
  if ( (unsigned int)entityNum >= 0x800 )
  {
    v9 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityNum, v9) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v1].r.isInUse != g_entityIsInUse[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2843, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( entityNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( entityNum )") )
    __debugbreak();
  GEntity = G_GetGEntity(v1);
  v3 = GEntity;
  if ( GEntity->client || (eType = GEntity->s.eType, eType == ET_PLAYER_CORPSE) || v3->agent || eType == ET_AGENT_CORPSE )
  {
    v5 = G_PhysicsObject_Get(v3);
    v6 = v5->physicsInstances[1];
    if ( v6 != -1 )
    {
      InstanceDetailModel = HavokPhysics_GetInstanceDetailModel(PHYSICS_WORLD_ID_SERVER_DETAIL, v6);
      if ( InstanceDetailModel )
      {
        if ( BG_Weapons_IsRiotShieldModel(InstanceDetailModel) )
        {
          G_PhysicsObject_DestroyDetailBoneMapping(PHYSICS_WORLD_ID_SERVER_DETAIL, v3, v5);
          Physics_DestroyInstance(PHYSICS_WORLD_ID_SERVER_DETAIL, v6, 0);
          v5->physicsInstances[1] = -1;
        }
      }
    }
  }
}

/*
==============
G_Weapon_EntityHasShield
==============
*/
bool G_Weapon_EntityHasShield(const gentity_s *const ent)
{
  const playerState_s *EntityPlayerStateConst; 
  const SuitDef *SuitDef; 
  DObj *ServerDObjForEnt; 
  unsigned int characterCollBoundsType; 
  __int64 v7; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2878, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !ent->r.isInUse )
    return 0;
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( EntityPlayerStateConst )
  {
    SuitDef = BG_GetSuitDef(EntityPlayerStateConst->suitIndex);
    if ( SuitDef )
    {
      if ( SuitDef->suitAnimType == ANIM_SUIT_C8 )
        return 1;
    }
  }
  if ( ((ent->s.eType - 19) & 0xFFFD) != 0 )
    return 0;
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt )
    return 0;
  characterCollBoundsType = (*ServerDObjForEnt->models)->characterCollBoundsType;
  if ( characterCollBoundsType >= 0xA )
  {
    LODWORD(v7) = (*ServerDObjForEnt->models)->characterCollBoundsType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2908, ASSERT_TYPE_ASSERT, "(unsigned)( collBoundsType ) < (unsigned)( XModelCharCollBoundsType::CharCollBoundsType_Num )", "collBoundsType doesn't index XModelCharCollBoundsType::CharCollBoundsType_Num\n\t%i not in [0, %i)", v7, 10) )
      __debugbreak();
  }
  return characterCollBoundsType == 3;
}

/*
==============
G_Weapon_FinalizeChargeMelee
==============
*/
void G_Weapon_FinalizeChargeMelee(gentity_s *attacker, gentity_s *victim, int hitEntDamage)
{
  playerState_s *EntityPlayerState; 
  GWeaponMap *Instance; 
  bool v11; 
  gagent_s *agent; 
  unsigned int v13; 
  __int64 v14; 
  gentity_s *v15; 
  int IsMovingPlatform; 
  const playerState_s *v17; 
  int v18; 
  GWeapon *WeaponSystem; 
  entityState_t *v20; 
  __int16 number; 
  const playerState_s *EntityPlayerStateConst; 
  __int16 meleeChargeEnt; 
  gentity_s *entity; 
  entityState_t *p_s; 
  vec3_t incomingVector; 
  Weapon r_weapon; 

  entity = victim;
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1586, ASSERT_TYPE_ASSERT, "(attacker)", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(attacker);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1588, ASSERT_TYPE_ASSERT, "(attackerPS)", (const char *)&queryFormat, "attackerPS") )
    __debugbreak();
  if ( entity && hitEntDamage )
  {
    EntityPlayerState->meleeChargeEnt = entity->s.number;
    p_s = &entity->s;
    Instance = GWeaponMap::GetInstance();
    _RAX = BG_GetViewmodelWeapon(Instance, EntityPlayerState);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+57h+r_weapon.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rbp+57h+r_weapon.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rbp+57h+r_weapon.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    v11 = BG_UsingAlternate(EntityPlayerState);
    if ( BG_IsRiotShield(&r_weapon, v11) )
      return;
    agent = entity->agent;
    if ( agent && p_s->eType == ET_INVISIBLE && agent->playerState.corpseIndex != 15 )
    {
      v13 = 1;
      if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
        __debugbreak();
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)entity->s.number);
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1620, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      if ( *(_QWORD *)(v14 + 2040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1621, ASSERT_TYPE_ASSERT, "(!ci->pXAnimTree)", (const char *)&queryFormat, "!ci->pXAnimTree") )
        __debugbreak();
    }
    else
    {
      v13 = 0;
      if ( !BG_IsCharacterEntity(p_s) && !BG_IsCorpseEntity(p_s) )
        return;
    }
    v15 = entity;
    if ( entity->s.eType == ET_ACTOR )
    {
      if ( !entity->actor )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1632, ASSERT_TYPE_ASSERT, "(victim->actor)", (const char *)&queryFormat, "victim->actor") )
          __debugbreak();
        v15 = entity;
      }
      IsMovingPlatform = BGMovingPlatforms::IsMovingPlatform(v15->actor->Physics.groundEntNum);
    }
    else
    {
      v17 = G_GetEntityPlayerState(entity);
      IsMovingPlatform = BGMovingPlatforms::IsOnMovingPlatform(v17);
    }
    v18 = IsMovingPlatform;
    WeaponSystem = GWeapon::GetWeaponSystem();
    WeaponSystem->OrientMeleeCorpse(WeaponSystem, EntityPlayerState, v13, &entity, &p_s);
    if ( !v18 )
    {
      v20 = p_s;
      *(_QWORD *)p_s->lerp.pos.trDelta.v = 0i64;
      v20->lerp.pos.trDelta.v[2] = 0.0;
    }
    number = entity->s.number;
    if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1561, ASSERT_TYPE_ASSERT, "(attacker)", (const char *)&queryFormat, "attacker") )
      __debugbreak();
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(attacker);
    if ( EntityPlayerStateConst && EntityPlayerStateConst->meleeChargeEnt == number && EntityPlayerStateConst->weapState[0].weaponState == 23 )
    {
      _RCX = entity;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+130h]
        vsubss  xmm1, xmm0, dword ptr [rsi+130h]
        vmovss  dword ptr [rbp+57h+incomingVector], xmm1
        vmovss  xmm2, dword ptr [rcx+134h]
        vsubss  xmm0, xmm2, dword ptr [rsi+134h]
        vmovss  dword ptr [rbp+57h+incomingVector+4], xmm0
        vmovss  xmm1, dword ptr [rcx+138h]
        vsubss  xmm2, xmm1, dword ptr [rsi+138h]
        vmovss  dword ptr [rbp+57h+incomingVector+8], xmm2
        vmovss  xmm2, cs:COSINE_MELEE_ORIENT_ANGLE_474; cosineDividingAngle
      }
      *(double *)&_XMM0 = BG_GetCardinalYawOfIncomingVector(&entity->r.currentAngles, &incomingVector, *(float *)&_XMM2);
      _RAX = entity;
      __asm { vmovss  dword ptr [rax+140h], xmm0 }
    }
  }
  else
  {
    meleeChargeEnt = EntityPlayerState->meleeChargeEnt;
    if ( meleeChargeEnt >= 0 && (unsigned __int16)meleeChargeEnt <= 0x7FEu )
      *(_QWORD *)EntityPlayerState->velocity.v = 0i64;
    PM_MeleeChargeClear(EntityPlayerState);
  }
}

/*
==============
G_Weapon_Fire
==============
*/
void G_Weapon_Fire(gentity_s *ent, const int gametime, const entity_event_t eventType, const unsigned int eventParm)
{
  gagent_s *agent; 
  const playerState_s *EntityPlayerState; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  GBullet *BulletSystem; 
  GHandler *Handler; 
  WeaponHeat *(__fastcall *GetPlayerWeaponHeat)(BgHandler *, const playerState_s *, const Weapon *, PlayerHandIndex); 
  PlayerHandIndex HandFromWeaponEvent; 
  WeaponHeat *v16; 
  __int32 v17; 
  __int32 v18; 
  __int32 v19; 
  __int32 v20; 
  char *WeaponName; 
  weapType_t WeaponType; 
  int v23; 
  weapClass_t WeaponClass; 
  weapClass_t v25; 
  Weapon *AltWeapon; 
  PlayerHandIndex v27; 
  $7360F583CD865408FBE4FEF9F0A981AA *fireParms; 
  gentity_s *v30; 
  weapClass_t v31; 
  Weapon *p_weapon; 
  PlayerHandIndex v33; 
  gentity_s *v34; 
  float v35; 
  weapType_t wp; 
  weapType_t wpa; 
  weapType_t wpb; 
  vec3_t *gunVel; 
  playerState_s *ps; 
  GWeaponFireParms outParams; 
  char output[512]; 

  if ( ent && G_Utils_IsClientOrAgent(ent) )
  {
    agent = ent->agent;
    if ( agent )
      agent->agentState.doNotSimulateTracers = 0;
    else
      ent->client->sess.cs.doNotSimulateTracers = 0;
  }
  EntityPlayerState = G_GetEntityPlayerState(ent);
  ps = (playerState_s *)EntityPlayerState;
  if ( !BG_IsTurretActive(EntityPlayerState) && !BG_IsVehicleActive(EntityPlayerState) || !ent->active )
  {
    Instance = GWeaponMap::GetInstance();
    WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
    if ( WeaponForEntity->weaponIdx )
    {
      SV_Profile_BeginEvent(SVPROF_WEAPON_FIRE);
      BulletSystem = GBullet::GetBulletSystem();
      GBullet::ResetHitClientEventCount(BulletSystem);
      Handler = GHandler::getHandler();
      GetPlayerWeaponHeat = Handler->GetPlayerWeaponHeat;
      HandFromWeaponEvent = BG_GetHandFromWeaponEvent(eventType);
      v16 = GetPlayerWeaponHeat(Handler, ps, WeaponForEntity, HandFromWeaponEvent);
      BG_Heat_ApplyFireHeat(v16, WeaponForEntity, ent->s.inAltWeaponMode, gametime);
      v17 = BG_GetWeaponType(WeaponForEntity, ent->s.inAltWeaponMode) - 2;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v20 = v19 - 5;
            if ( v20 )
            {
              if ( v20 != 1 )
              {
                WeaponName = BG_GetWeaponName(WeaponForEntity, output, 0x200u);
                WeaponType = BG_GetWeaponType(WeaponForEntity, ent->s.inAltWeaponMode);
                Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D9BAB0, 647i64, (unsigned int)WeaponType, WeaponName);
LABEL_51:
                SV_Profile_EndEvent(SVPROF_WEAPON_FIRE);
                return;
              }
              G_Weapon_SetupWeaponParams(ent, gametime, &outParams);
              G_Deploy_Update(ps, &outParams);
              G_Deploy_Fire(ent, &outParams);
              v23 = -1;
            }
            else
            {
              G_Weapon_SetupWeaponParams(ent, gametime, &outParams);
              v23 = -1;
            }
LABEL_50:
            G_Weapon_HandleFiredEvent(ent, NULL, v23, eventType, eventParm, &outParams);
            goto LABEL_51;
          }
          WeaponClass = BG_GetWeaponClass(WeaponForEntity, ent->s.inAltWeaponMode);
          if ( WeaponClass != WEAPCLASS_GRENADE && WeaponClass != WEAPCLASS_THROWINGKNIFE )
          {
            G_Weapon_SetupMissileParams(ent, gametime, eventType, eventParm, &outParams);
            if ( BG_GetWeaponType(&outParams.wp.weapon, outParams.wp.isAlternate) != WEAPTYPE_PROJECTILE )
            {
              wp = BG_GetWeaponType(&outParams.wp.weapon, outParams.wp.isAlternate);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1363, ASSERT_TYPE_ASSERT, "( BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) ) == ( WEAPTYPE_PROJECTILE )", "BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) == WEAPTYPE_PROJECTILE\n\t%i, %i", wp, 4) )
                __debugbreak();
            }
            v25 = BG_GetWeaponClass(&outParams.wp.weapon, outParams.wp.isAlternate);
            if ( v25 == WEAPCLASS_GRENADE || v25 == WEAPCLASS_THROWINGKNIFE )
            {
              LODWORD(gunVel) = v25;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1366, ASSERT_TYPE_ASSERT, "( ( (weaponClass != WEAPCLASS_GRENADE) && (weaponClass != WEAPCLASS_THROWINGKNIFE) ) )", "%s\n\t( weaponClass ) = %i", "( (weaponClass != WEAPCLASS_GRENADE) && (weaponClass != WEAPCLASS_THROWINGKNIFE) )", gunVel) )
                __debugbreak();
            }
            if ( outParams.wp.isAlternate )
              AltWeapon = (Weapon *)BG_GetAltWeapon(&outParams.wp.weapon);
            else
              AltWeapon = &outParams.wp.weapon;
            v27 = BG_GetHandFromWeaponEvent(eventType);
            fireParms = &outParams.136;
            if ( !outParams.missile.missileParams.valid )
              fireParms = NULL;
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+280h+outParams.___u1+1Ch]
              vmovss  dword ptr [rsp+380h+var_360], xmm0
            }
            v30 = G_Weapon_RocketLauncher_Fire(ent, AltWeapon, outParams.wp.isAlternate, v27, v35, &outParams.wp, &vec3_origin, gametime, (const BgMissileFireParms *)fireParms, 0);
            G_Weapon_HandleFiredEvent(ent, v30, -1, eventType, eventParm, &outParams);
            goto LABEL_51;
          }
          G_Weapon_SetupWeaponParams(ent, gametime, &outParams);
          if ( BG_GetWeaponType(&outParams.wp.weapon, outParams.wp.isAlternate) != WEAPTYPE_PROJECTILE )
          {
            wpa = BG_GetWeaponType(&outParams.wp.weapon, outParams.wp.isAlternate);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1348, ASSERT_TYPE_ASSERT, "( BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) ) == ( WEAPTYPE_PROJECTILE )", "BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) == WEAPTYPE_PROJECTILE\n\t%i, %i", wpa, 4) )
              __debugbreak();
          }
          v31 = BG_GetWeaponClass(&outParams.wp.weapon, outParams.wp.isAlternate);
          if ( v31 != WEAPCLASS_GRENADE && v31 != WEAPCLASS_THROWINGKNIFE )
          {
            LODWORD(gunVel) = v31;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1351, ASSERT_TYPE_ASSERT, "( ( (weaponClass == WEAPCLASS_GRENADE) || (weaponClass == WEAPCLASS_THROWINGKNIFE) ) )", "%s\n\t( weaponClass ) = %i", "( (weaponClass == WEAPCLASS_GRENADE) || (weaponClass == WEAPCLASS_THROWINGKNIFE) )", gunVel) )
              __debugbreak();
          }
          if ( outParams.wp.isAlternate )
            p_weapon = (Weapon *)BG_GetAltWeapon(&outParams.wp.weapon);
          else
            p_weapon = &outParams.wp.weapon;
          v33 = BG_GetHandFromWeaponEvent(eventType);
          v34 = G_Weapon_GrenadeLauncher_Fire(ent, p_weapon, v33, gametime, &outParams.wp);
        }
        else
        {
          G_Weapon_SetupWeaponParams(ent, gametime, &outParams);
          v34 = G_Weapon_ThrowGrenade(ent, gametime, &outParams.wp);
        }
        G_Weapon_HandleFiredEvent(ent, v34, -1, eventType, eventParm, &outParams);
        goto LABEL_51;
      }
      G_Weapon_SetupBulletParams(ent, gametime, eventType, eventParm, &outParams);
      if ( BG_GetWeaponType(&outParams.wp.weapon, outParams.wp.isAlternate) != WEAPTYPE_BULLET )
      {
        wpb = BG_GetWeaponType(&outParams.wp.weapon, outParams.wp.isAlternate);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1336, ASSERT_TYPE_ASSERT, "( BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) ) == ( WEAPTYPE_BULLET )", "BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) == WEAPTYPE_BULLET\n\t%i, %i", wpb, 2) )
          __debugbreak();
      }
      CG_DebugBulletFireLog_AddServerEntry(ent->s.number, gametime, &outParams.wp.muzzleTrace, &outParams.wp.forward);
      v23 = G_Bullet_FireWithParams(&outParams, gametime);
      goto LABEL_50;
    }
  }
}

/*
==============
G_Weapon_FireBullet
==============
*/
int G_Weapon_FireBullet(gentity_s *const ent, const int gameTime, const GWeaponFireParms *const params)
{
  weapType_t WeaponType; 
  int v8; 

  if ( BG_GetWeaponType(&params->wp.weapon, params->wp.isAlternate) != WEAPTYPE_BULLET )
  {
    v8 = 2;
    WeaponType = BG_GetWeaponType(&params->wp.weapon, params->wp.isAlternate);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1336, ASSERT_TYPE_ASSERT, "( BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) ) == ( WEAPTYPE_BULLET )", "BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) == WEAPTYPE_BULLET\n\t%i, %i", WeaponType, v8) )
      __debugbreak();
  }
  CG_DebugBulletFireLog_AddServerEntry(ent->s.number, gameTime, &params->wp.muzzleTrace, &params->wp.forward);
  return G_Bullet_FireWithParams(params, gameTime);
}

/*
==============
G_Weapon_FireGrenade
==============
*/
gentity_s *G_Weapon_FireGrenade(gentity_s *const ent, const entity_event_t eventType, const int gameTime, const GWeaponFireParms *const params)
{
  Weapon *p_weapon; 
  weapClass_t WeaponClass; 
  PlayerHandIndex HandFromWeaponEvent; 
  weapType_t WeaponType; 
  __int64 v13; 
  int v14; 

  p_weapon = &params->wp.weapon;
  if ( BG_GetWeaponType(&params->wp.weapon, params->wp.isAlternate) != WEAPTYPE_PROJECTILE )
  {
    v14 = 4;
    WeaponType = BG_GetWeaponType(p_weapon, params->wp.isAlternate);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1348, ASSERT_TYPE_ASSERT, "( BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) ) == ( WEAPTYPE_PROJECTILE )", "BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) == WEAPTYPE_PROJECTILE\n\t%i, %i", WeaponType, v14) )
      __debugbreak();
  }
  WeaponClass = BG_GetWeaponClass(p_weapon, params->wp.isAlternate);
  if ( WeaponClass != WEAPCLASS_GRENADE && WeaponClass != WEAPCLASS_THROWINGKNIFE )
  {
    LODWORD(v13) = WeaponClass;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1351, ASSERT_TYPE_ASSERT, "( ( (weaponClass == WEAPCLASS_GRENADE) || (weaponClass == WEAPCLASS_THROWINGKNIFE) ) )", "%s\n\t( weaponClass ) = %i", "( (weaponClass == WEAPCLASS_GRENADE) || (weaponClass == WEAPCLASS_THROWINGKNIFE) )", v13) )
      __debugbreak();
  }
  if ( params->wp.isAlternate )
    p_weapon = (Weapon *)BG_GetAltWeapon(p_weapon);
  HandFromWeaponEvent = BG_GetHandFromWeaponEvent(eventType);
  return G_Weapon_GrenadeLauncher_Fire(ent, p_weapon, HandFromWeaponEvent, gameTime, &params->wp);
}

/*
==============
G_Weapon_FireMelee
==============
*/
void G_Weapon_FireMelee(gentity_s *ent, const int gameTime)
{
  playerState_s *EntityPlayerState; 
  const dvar_t *v8; 
  __int16 meleeChargeEnt; 
  GAntiLag *v12; 
  bool v13; 
  _BOOL8 v14; 
  gentity_s *v17; 
  scrContext_t *v20; 
  BOOL fmt; 
  BOOL outDamageReturnCode; 
  damageReturnCode_t v26; 
  int outHitEntDamage[3]; 
  GMeleeFireParms outParams; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1751, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1754, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_IsTurretActive(EntityPlayerState) && !BG_IsVehicleActive(EntityPlayerState) || !ent->active )
  {
    v8 = DCONST_DVARBOOL_player_meleeForceServerMiss;
    if ( !DCONST_DVARBOOL_player_meleeForceServerMiss && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_meleeForceServerMiss") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
    {
      meleeChargeEnt = EntityPlayerState->meleeChargeEnt;
      if ( meleeChargeEnt >= 0 && (unsigned __int16)meleeChargeEnt <= 0x7FEu )
        *(_QWORD *)EntityPlayerState->velocity.v = 0i64;
      PM_MeleeChargeClear(EntityPlayerState);
    }
    else
    {
      __asm
      {
        vmovaps [rsp+138h+var_28], xmm6
        vmovaps [rsp+138h+var_38], xmm7
      }
      G_Weapon_SetupMeleeParams(ent, gameTime, &outParams);
      *(double *)&_XMM0 = BG_GetMeleeWidth(&outParams.wp.weapon, 0);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = BG_GetMeleeHeight(&outParams.wp.weapon, 0);
      v26 = DAMAGE_RETURNCODE_INVALID;
      __asm { vmovaps xmm7, xmm0 }
      outHitEntDamage[0] = 0;
      if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
        __debugbreak();
      v12 = GAntiLag::ms_gAntiLagData;
      v13 = G_Weapon_Melee_Trace_Detail_Enabled();
      LOBYTE(v14) = 1;
      LOBYTE(outDamageReturnCode) = 0;
      LOBYTE(fmt) = v13;
      v12->RewindPositions(v12, gameTime, ent, v14, fmt, outDamageReturnCode, "Weapon Melee");
      __asm
      {
        vmovaps xmm3, xmm7; height
        vmovaps xmm2, xmm6; width
      }
      v17 = G_Weapon_Melee_internal(ent, &outParams, *(float *)&_XMM2, *(float *)&_XMM3, outHitEntDamage, &v26);
      v12->RestorePositions(v12, ent, "Weapon Melee");
      __asm
      {
        vmovaps xmm7, [rsp+138h+var_38]
        vmovaps xmm6, [rsp+138h+var_28]
      }
      if ( v26 != DAMAGE_RETURNCODE_DEFERRED )
        G_Weapon_FinalizeChargeMelee(ent, v17, outHitEntDamage[0]);
      v20 = ScriptContext_Server();
      if ( outParams.hasTargetLock )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, [rsp+138h+outParams.targetLockTime]
          vmulss  xmm1, xmm0, cs:__real@3a83126f; value
        }
        Scr_AddFloat(v20, *(float *)&_XMM1);
      }
      else
      {
        Scr_AddUndefined(v20);
      }
      if ( v17 )
        GScr_AddEntity(v17);
      else
        Scr_AddUndefined(v20);
      Scr_AddBool(v20, outParams.isAltMelee);
      if ( outParams.wp.weapon.weaponIdx )
        GScr_Weapon_AddParam(v20, &outParams.wp.weapon, 0);
      else
        Scr_AddUndefined(v20);
      GScr_Notify(ent, scr_const.melee_fired, 4u);
    }
  }
}

/*
==============
G_Weapon_FireMeleeWithParams
==============
*/
void G_Weapon_FireMeleeWithParams(gentity_s *const ent, const int gameTime, const GMeleeFireParms *const params)
{
  GAntiLag *v11; 
  bool v12; 
  _BOOL8 v13; 
  gentity_s *v16; 
  scrContext_t *v17; 
  BOOL fmt; 
  BOOL outDamageReturnCode; 
  damageReturnCode_t v27; 
  int outHitEntDamage; 

  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps [rsp+88h+var_48], xmm7
  }
  *(double *)&_XMM0 = BG_GetMeleeWidth(&params->wp.weapon, 0);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = BG_GetMeleeHeight(&params->wp.weapon, 0);
  __asm { vmovaps xmm7, xmm0 }
  outHitEntDamage = 0;
  v27 = DAMAGE_RETURNCODE_INVALID;
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v11 = GAntiLag::ms_gAntiLagData;
  v12 = G_Weapon_Melee_Trace_Detail_Enabled();
  LOBYTE(v13) = 1;
  LOBYTE(outDamageReturnCode) = 0;
  LOBYTE(fmt) = v12;
  v11->RewindPositions(v11, gameTime, ent, v13, fmt, outDamageReturnCode, "Weapon Melee");
  __asm
  {
    vmovaps xmm3, xmm7; height
    vmovaps xmm2, xmm6; width
  }
  v16 = G_Weapon_Melee_internal(ent, params, *(float *)&_XMM2, *(float *)&_XMM3, &outHitEntDamage, &v27);
  v11->RestorePositions(v11, ent, "Weapon Melee");
  if ( v27 != DAMAGE_RETURNCODE_DEFERRED )
    G_Weapon_FinalizeChargeMelee(ent, v16, outHitEntDamage);
  v17 = ScriptContext_Server();
  if ( params->hasTargetLock )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+90h]
      vmulss  xmm1, xmm0, cs:__real@3a83126f; value
    }
    Scr_AddFloat(v17, *(float *)&_XMM1);
  }
  else
  {
    Scr_AddUndefined(v17);
  }
  if ( v16 )
    GScr_AddEntity(v16);
  else
    Scr_AddUndefined(v17);
  Scr_AddBool(v17, params->isAltMelee);
  if ( params->wp.weapon.weaponIdx )
    GScr_Weapon_AddParam(v17, &params->wp.weapon, 0);
  else
    Scr_AddUndefined(v17);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
  }
  GScr_Notify(ent, scr_const.melee_fired, 4u);
}

/*
==============
G_Weapon_FireMissile
==============
*/
gentity_s *G_Weapon_FireMissile(gentity_s *const ent, const entity_event_t eventType, const int gameTime, const GWeaponFireParms *const params)
{
  Weapon *p_weapon; 
  weapClass_t WeaponClass; 
  PlayerHandIndex HandFromWeaponEvent; 
  const BgMissileFireParms *fireParms; 
  float fmt; 
  weapType_t wp; 
  vec3_t *gunVel; 
  int gunVela; 

  p_weapon = &params->wp.weapon;
  _RBX = params;
  if ( BG_GetWeaponType(&params->wp.weapon, params->wp.isAlternate) != WEAPTYPE_PROJECTILE )
  {
    gunVela = 4;
    wp = BG_GetWeaponType(p_weapon, _RBX->wp.isAlternate);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1363, ASSERT_TYPE_ASSERT, "( BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) ) == ( WEAPTYPE_PROJECTILE )", "BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) == WEAPTYPE_PROJECTILE\n\t%i, %i", wp, gunVela) )
      __debugbreak();
  }
  WeaponClass = BG_GetWeaponClass(p_weapon, _RBX->wp.isAlternate);
  if ( WeaponClass == WEAPCLASS_GRENADE || WeaponClass == WEAPCLASS_THROWINGKNIFE )
  {
    LODWORD(gunVel) = WeaponClass;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1366, ASSERT_TYPE_ASSERT, "( ( (weaponClass != WEAPCLASS_GRENADE) && (weaponClass != WEAPCLASS_THROWINGKNIFE) ) )", "%s\n\t( weaponClass ) = %i", "( (weaponClass != WEAPCLASS_GRENADE) && (weaponClass != WEAPCLASS_THROWINGKNIFE) )", gunVel) )
      __debugbreak();
  }
  if ( _RBX->wp.isAlternate )
    p_weapon = (Weapon *)BG_GetAltWeapon(p_weapon);
  HandFromWeaponEvent = BG_GetHandFromWeaponEvent(eventType);
  __asm { vmovss  xmm0, dword ptr [rbx+0A4h] }
  fireParms = (const BgMissileFireParms *)&_RBX->136;
  if ( !_RBX->missile.missileParams.valid )
    fireParms = NULL;
  __asm { vmovss  dword ptr [rsp+58h+fmt], xmm0 }
  return G_Weapon_RocketLauncher_Fire(ent, p_weapon, _RBX->wp.isAlternate, HandFromWeaponEvent, fmt, &_RBX->wp, &vec3_origin, gameTime, fireParms, 0);
}

/*
==============
G_Weapon_FireScriptedMelee
==============
*/
void G_Weapon_FireScriptedMelee(gentity_s *ent)
{
  scrContext_t *v2; 
  __int16 scriptedMeleeTarget; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1674, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTED_MELEE ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTED_MELEE )") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1675, ASSERT_TYPE_ASSERT, "( ent ) != ( nullptr )", "%s != %s\n\t%p, %p", "ent", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1676, ASSERT_TYPE_ASSERT, "( ent->client ) != ( nullptr )", "%s != %s\n\t%p, %p", "ent->client", "nullptr", NULL, NULL) )
    __debugbreak();
  v2 = ScriptContext_Server();
  scriptedMeleeTarget = ent->client->sess.cmd.scriptedMeleeTarget;
  if ( scriptedMeleeTarget == 2047 )
    Scr_AddUndefined(v2);
  else
    Scr_AddEntityNum(v2, scriptedMeleeTarget, ENTITY_CLASS_GENTITY);
  GScr_Notify(ent, scr_const.player_scripted_melee, 1u);
}

/*
==============
G_Weapon_FireTurret
==============
*/
void G_Weapon_FireTurret(gentity_s *ent, const int gameTime)
{
  gentity_s *EntityTurret; 
  GTurret *Turret; 

  EntityTurret = G_Weapon_GetEntityTurret(ent);
  Turret = GTurret::GetTurret(&EntityTurret->turretHandle);
  if ( !EntityTurret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1501, ASSERT_TYPE_ASSERT, "( turretEnt != nullptr )", (const char *)&queryFormat, "turretEnt != nullptr") )
    __debugbreak();
  if ( EntityTurret->turretHandle.m_objIndex )
    GTurret::Fire(Turret, EntityTurret, gameTime);
}

/*
==============
G_Weapon_FireTurretEnd
==============
*/
void G_Weapon_FireTurretEnd(gentity_s *ent)
{
  gentity_s *EntityTurret; 
  GTurret *Turret; 

  EntityTurret = G_Weapon_GetEntityTurret(ent);
  if ( !EntityTurret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1513, ASSERT_TYPE_ASSERT, "( turretEnt != nullptr )", (const char *)&queryFormat, "turretEnt != nullptr") )
    __debugbreak();
  if ( EntityTurret->turretHandle.m_objIndex )
  {
    Turret = GTurret::GetTurret(&EntityTurret->turretHandle);
    GTurret::FireEnd(Turret, EntityTurret);
  }
}

/*
==============
G_Weapon_GetEntityTurret
==============
*/
gentity_s *G_Weapon_GetEntityTurret(const gentity_s *const ent)
{
  const playerState_s *EntityPlayerStateConst; 
  int v2; 
  __int16 viewlocked_entNum; 
  bool v4; 
  __int64 v6; 

  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1478, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v2 = 2047;
  if ( BG_IsTurretActive(EntityPlayerStateConst) )
  {
    viewlocked_entNum = EntityPlayerStateConst->viewlocked_entNum;
  }
  else
  {
    if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2393, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->otherFlags, ACTIVE, 0x18u) )
      goto LABEL_17;
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2396, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    viewlocked_entNum = EntityPlayerStateConst->remoteTurretEnt;
  }
  v2 = viewlocked_entNum;
  if ( viewlocked_entNum == 2047 )
  {
LABEL_17:
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1490, ASSERT_TYPE_ASSERT, "(turretEntNum != ENTITYNUM_NONE)", "%s\n\tG_Weapon_GetEntityTurret: expected valid turret for player %i.", "turretEntNum != ENTITYNUM_NONE", EntityPlayerStateConst->clientNum);
    goto LABEL_18;
  }
  if ( (unsigned int)viewlocked_entNum < 0x800 )
    return &g_entities[v2];
  LODWORD(v6) = viewlocked_entNum;
  v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1491, ASSERT_TYPE_ASSERT, "(unsigned)( turretEntNum ) < (unsigned)( ( 2048 ) )", "turretEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, 2048);
LABEL_18:
  if ( v4 )
    __debugbreak();
  return &g_entities[v2];
}

/*
==============
G_Weapon_GetRiotShieldIfEquipped
==============
*/
Weapon *G_Weapon_GetRiotShieldIfEquipped(const gentity_s *ent)
{
  const playerState_s *EntityPlayerStateConst; 
  GWeaponMap *Instance; 
  unsigned int v4; 
  const Weapon *Weapon; 
  const Weapon *v6; 
  __int64 v8; 
  __int64 v9; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2438, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2441, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  v4 = 0;
  while ( 1 )
  {
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v4 >= 0xF )
    {
      LODWORD(v9) = 15;
      LODWORD(v8) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    Weapon = BgWeaponMap::GetWeapon(Instance, EntityPlayerStateConst->weaponsEquipped[v4]);
    v6 = Weapon;
    if ( Weapon->weaponIdx )
    {
      if ( BG_IsRiotShield(Weapon, 0) )
        break;
    }
    if ( (int)++v4 >= 15 )
      return &NULL_WEAPON;
  }
  return (Weapon *)v6;
}

/*
==============
G_Weapon_GetShieldBlastDamageProtection
==============
*/

float __fastcall G_Weapon_GetShieldBlastDamageProtection(gentity_s *ent, const vec3_t *blastOrigin, double _XMM2_8)
{
  GWeaponMap *Instance; 
  const playerState_s *EntityPlayerStateConst; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v11; 
  unsigned int v12; 
  char v16; 
  char v17; 
  __int64 v22; 
  __int64 v23; 
  Weapon r_weapon; 

  __asm { vmovaps [rsp+0D8h+var_48], xmm6 }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2695, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( !G_Utils_IsClientOrAgent(ent) )
    goto LABEL_43;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2463, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2468, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, EntityPlayerStateConst);
  if ( BG_IsRiotShield(CurrentWeaponForPlayer, 0) )
  {
    v11 = 0;
  }
  else
  {
    v12 = 0;
    while ( 1 )
    {
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( v12 >= 0xF )
      {
        LODWORD(v23) = 15;
        LODWORD(v22) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      _RAX = BgWeaponMap::GetWeapon(Instance, EntityPlayerStateConst->weaponsEquipped[v12]);
      __asm
      {
        vmovups ymm2, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+0D8h+r_weapon.weaponIdx], ymm2
        vmovups xmm0, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rsp+0D8h+r_weapon.attachmentVariationIndices+5], xmm0
        vmovsd  xmm1, qword ptr [rax+30h]
        vmovsd  qword ptr [rsp+0D8h+r_weapon.attachmentVariationIndices+15h], xmm1
      }
      *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
      __asm { vmovd   eax, xmm2 }
      if ( (_WORD)_RAX )
      {
        if ( BG_IsRiotShield(&r_weapon, 0) )
          break;
      }
      if ( (int)++v12 >= 15 )
      {
        v11 = 0;
        goto LABEL_27;
      }
    }
    v11 = 1;
  }
LABEL_27:
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  if ( !GWeapon::ms_gWeaponSystem->DoesShieldProtectFromBlastDamage(GWeapon::ms_gWeaponSystem, ent, v11) )
    goto LABEL_43;
  *(double *)&_XMM0 = G_Weapon_GetShieldCosOfAngleToPoint(ent, blastOrigin, v11, 0);
  __asm { vcomiss xmm0, cs:__real@3f774bc7 }
  if ( v16 | v17 )
  {
    __asm { vcomiss xmm0, cs:__real@3f5db22d }
    if ( !(v16 | v17) )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_shieldBlastDamageProtection_60, "shieldBlastDamageProtection_60");
      goto LABEL_44;
    }
    __asm { vcomiss xmm0, cs:__real@3f000000 }
    if ( !(v16 | v17) )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_shieldBlastDamageProtection_120, "shieldBlastDamageProtection_120");
      goto LABEL_44;
    }
    __asm { vcomiss xmm0, xmm6 }
    if ( !(v16 | v17) )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_shieldBlastDamageProtection_180, "shieldBlastDamageProtection_180");
      goto LABEL_44;
    }
LABEL_43:
    __asm { vmovaps xmm0, xmm6 }
    goto LABEL_44;
  }
  _RBX = DVARFLT_shieldBlastDamageProtection_30;
  if ( !DVARFLT_shieldBlastDamageProtection_30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "shieldBlastDamageProtection_30") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
LABEL_44:
  __asm { vmovaps xmm6, [rsp+0D8h+var_48] }
  return *(float *)&_XMM0;
}

/*
==============
G_Weapon_GetShieldCosOfAngleToPoint
==============
*/
float G_Weapon_GetShieldCosOfAngleToPoint(const gentity_s *shieldHolder, const vec3_t *point, bool shieldOnBack, bool shieldOpenForFiring)
{
  GWeapon *v14; 
  const dvar_t *v37; 
  BOOL v98; 
  int v99; 
  int v102; 
  int v105[4]; 
  tmat43_t<vec3_t> resultMatrix; 

  _R15 = point;
  if ( !shieldHolder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2558, ASSERT_TYPE_ASSERT, "( shieldHolder )", (const char *)&queryFormat, "shieldHolder") )
    __debugbreak();
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  v14 = GWeapon::ms_gWeaponSystem;
  __asm
  {
    vmovaps [rsp+130h+var_50], xmm8
    vmovaps [rsp+130h+var_60], xmm9
    vmovaps [rsp+130h+var_70], xmm10
  }
  GWeapon::ms_gWeaponSystem->ShieldCheckAttachFlags(GWeapon::ms_gWeaponSystem, shieldHolder);
  LOBYTE(v98) = shieldOnBack;
  if ( v14->GetShieldCosOfAngleToPointForClient(v14, shieldHolder, (vec3_t *)&v102, (vec3_t *)v105, (vec3_t *)&v99, v98, shieldOpenForFiring) )
  {
    __asm
    {
      vmovss  xmm3, [rsp+130h+var_E8]
      vmovss  xmm2, [rsp+130h+var_EC]
      vmovss  xmm4, [rsp+130h+var_F0]
      vmovss  xmm10, [rsp+130h+var_D8]
      vmovss  xmm9, [rsp+130h+var_DC]
      vmovss  xmm8, [rsp+130h+var_E0]
    }
  }
  else
  {
    if ( !G_Weapon_GetShieldTagMatrix(shieldHolder, &resultMatrix) )
    {
      __asm { vmovss  xmm0, cs:__real@bf800000 }
      goto LABEL_22;
    }
    __asm
    {
      vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm2, dword ptr [rbp+30h+resultMatrix+1Ch]
      vmovss  xmm0, dword ptr [rbp+30h+resultMatrix+18h]
      vmovss  xmm8, dword ptr [rsp+130h+resultMatrix]
      vmovss  xmm9, dword ptr [rsp+130h+resultMatrix+4]
      vmovss  xmm10, dword ptr [rsp+130h+resultMatrix+8]
      vmovss  xmm4, dword ptr [rbp+30h+resultMatrix+24h]
      vxorps  xmm1, xmm0, xmm3
      vxorps  xmm0, xmm2, xmm3
      vmovss  [rsp+130h+var_D0], xmm1
      vmovss  xmm1, dword ptr [rbp+30h+resultMatrix+20h]
      vxorps  xmm2, xmm1, xmm3
      vmovss  xmm3, dword ptr [rbp+30h+resultMatrix+2Ch]
      vmovss  [rsp+130h+var_C8], xmm2
      vmovss  xmm2, dword ptr [rbp+30h+resultMatrix+28h]
      vmovss  [rsp+130h+var_EC], xmm2
      vmovss  [rsp+130h+var_E0], xmm8
      vmovss  [rsp+130h+var_DC], xmm9
      vmovss  [rsp+130h+var_D8], xmm10
      vmovss  [rsp+130h+var_CC], xmm0
      vmovss  [rsp+130h+var_F0], xmm4
      vmovss  [rsp+130h+var_E8], xmm3
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  xmm1, dword ptr [r15+4]
  }
  v37 = DVARBOOL_riotshield_improvedexplosionprotection_enabled;
  __asm
  {
    vmovaps [rsp+130h+var_30], xmm6
    vmovaps [rsp+130h+var_40], xmm7
    vmovaps [rsp+130h+var_80], xmm11
    vmovss  xmm11, cs:__real@3f800000
    vsubss  xmm7, xmm0, xmm4
    vmovss  xmm0, dword ptr [r15+8]
    vsubss  xmm4, xmm1, xmm2
    vsubss  xmm6, xmm0, xmm3
    vmulss  xmm2, xmm4, xmm4
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm11, xmm0
    vdivss  xmm5, xmm11, xmm0
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm1, xmm7, xmm5
    vmulss  xmm2, xmm1, xmm8
    vmulss  xmm3, xmm0, xmm9
    vmulss  xmm0, xmm6, xmm5
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm8, xmm4, xmm1
  }
  if ( !DVARBOOL_riotshield_improvedexplosionprotection_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "riotshield_improvedexplosionprotection_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  if ( v37->current.enabled )
  {
    _RBX = DVARFLT_riotshield_explosionprotection_downdist;
    if ( !DVARFLT_riotshield_explosionprotection_downdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "riotshield_explosionprotection_downdist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+28h]
      vmulss  xmm1, xmm4, [rsp+130h+var_D0]
      vaddss  xmm3, xmm1, [rsp+130h+var_F0]
      vmulss  xmm1, xmm4, [rsp+130h+var_CC]
      vmovss  xmm2, dword ptr [r15]
      vsubss  xmm7, xmm2, xmm3
      vaddss  xmm3, xmm1, [rsp+130h+var_EC]
      vmulss  xmm1, xmm4, [rsp+130h+var_C8]
      vmovss  xmm2, dword ptr [r15+4]
      vsubss  xmm6, xmm2, xmm3
      vaddss  xmm3, xmm1, [rsp+130h+var_E8]
      vmovss  xmm2, dword ptr [r15+8]
      vsubss  xmm5, xmm2, xmm3
      vmulss  xmm0, xmm7, xmm7
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm11, xmm0
      vdivss  xmm1, xmm11, xmm0
      vmulss  xmm2, xmm6, xmm1
      vmulss  xmm3, xmm2, [rsp+130h+var_DC]
      vmulss  xmm4, xmm7, xmm1
      vmulss  xmm2, xmm4, [rsp+130h+var_E0]
      vmulss  xmm5, xmm5, xmm1
      vmulss  xmm1, xmm5, [rsp+130h+var_D8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vmaxss  xmm0, xmm2, xmm8
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm8 }
  }
  __asm
  {
    vmovaps xmm7, [rsp+130h+var_40]
    vmovaps xmm6, [rsp+130h+var_30]
    vmovaps xmm11, [rsp+130h+var_80]
  }
LABEL_22:
  __asm
  {
    vmovaps xmm10, [rsp+130h+var_70]
    vmovaps xmm9, [rsp+130h+var_60]
    vmovaps xmm8, [rsp+130h+var_50]
  }
  return *(float *)&_XMM0;
}

/*
==============
G_Weapon_GetShieldTagMatrix
==============
*/
char G_Weapon_GetShieldTagMatrix(const gentity_s *shieldHolder, tmat43_t<vec3_t> *resultMatrix)
{
  scr_string_t ShieldTagName; 
  unsigned int number; 
  const char *v6; 

  if ( !shieldHolder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2536, ASSERT_TYPE_ASSERT, "(shieldHolder)", (const char *)&queryFormat, "shieldHolder") )
    __debugbreak();
  ShieldTagName = G_Weapon_GetShieldTagName(shieldHolder);
  if ( G_Utils_DObjGetWorldTagMatrix(shieldHolder, ShieldTagName, resultMatrix) )
    return 1;
  number = shieldHolder->s.number;
  v6 = SL_ConvertToString(ShieldTagName);
  Com_PrintWarning(15, "Couldn't get matrix for tag \"%s\" on ent %d.\n", v6, number);
  return 0;
}

/*
==============
G_Weapon_GetShieldTagName
==============
*/
__int64 G_Weapon_GetShieldTagName(const gentity_s *shieldHolder)
{
  gclient_s *client; 

  if ( !shieldHolder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2351, ASSERT_TYPE_ASSERT, "(shieldHolder)", (const char *)&queryFormat, "shieldHolder") )
    __debugbreak();
  if ( G_Utils_IsAgent(shieldHolder) )
  {
    if ( !shieldHolder->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2355, ASSERT_TYPE_ASSERT, "(shieldHolder->agent)", (const char *)&queryFormat, "shieldHolder->agent") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&shieldHolder->agent->playerState.otherFlags, ACTIVE, 8u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2356, ASSERT_TYPE_ASSERT, "(shieldHolder->agent->playerState.otherFlags.TestFlag( POtherFlagsCommon::SHIELD_ATTACHED_TO_WORLD_MODEL ))", (const char *)&queryFormat, "shieldHolder->agent->playerState.otherFlags.TestFlag( POtherFlagsCommon::SHIELD_ATTACHED_TO_WORLD_MODEL )") )
      __debugbreak();
    return (unsigned int)shieldHolder->agent->attachShieldTagName;
  }
  else
  {
    client = shieldHolder->client;
    if ( client )
    {
      if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 8u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2362, ASSERT_TYPE_ASSERT, "(shieldHolder->client->ps.otherFlags.TestFlag( POtherFlagsCommon::SHIELD_ATTACHED_TO_WORLD_MODEL ))", (const char *)&queryFormat, "shieldHolder->client->ps.otherFlags.TestFlag( POtherFlagsCommon::SHIELD_ATTACHED_TO_WORLD_MODEL )") )
        __debugbreak();
      return (unsigned int)shieldHolder->client->attachShieldTagName;
    }
    else
    {
      if ( !shieldHolder->actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2366, ASSERT_TYPE_ASSERT, "( shieldHolder->actor )", (const char *)&queryFormat, "shieldHolder->actor") )
        __debugbreak();
      return (unsigned int)scr_const.tag_weapon_left;
    }
  }
}

/*
==============
G_Weapon_GetShieldTagNormal
==============
*/

void __fastcall G_Weapon_GetShieldTagNormal(const gentity_s *shieldHolder, vec3_t *resultNormal, double _XMM2_8)
{
  gclient_s *client; 
  gagent_s *agent; 
  tmat43_t<vec3_t> resultMatrix; 

  _RDI = resultNormal;
  if ( !shieldHolder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2612, ASSERT_TYPE_ASSERT, "( shieldHolder )", (const char *)&queryFormat, "shieldHolder") )
    __debugbreak();
  client = shieldHolder->client;
  if ( client && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 8u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2614, ASSERT_TYPE_ASSERT, "( !shieldHolder->client || shieldHolder->client->ps.otherFlags.TestFlag( POtherFlagsCommon::SHIELD_ATTACHED_TO_WORLD_MODEL ) )", (const char *)&queryFormat, "!shieldHolder->client || shieldHolder->client->ps.otherFlags.TestFlag( POtherFlagsCommon::SHIELD_ATTACHED_TO_WORLD_MODEL )") )
    __debugbreak();
  agent = shieldHolder->agent;
  if ( agent && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&agent->playerState.otherFlags, ACTIVE, 8u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2615, ASSERT_TYPE_ASSERT, "( !shieldHolder->agent || shieldHolder->agent->playerState.otherFlags.TestFlag( POtherFlagsCommon::SHIELD_ATTACHED_TO_WORLD_MODEL ) )", (const char *)&queryFormat, "!shieldHolder->agent || shieldHolder->agent->playerState.otherFlags.TestFlag( POtherFlagsCommon::SHIELD_ATTACHED_TO_WORLD_MODEL )") )
    __debugbreak();
  if ( G_Weapon_GetShieldTagMatrix(shieldHolder, &resultMatrix) )
  {
    if ( (unsigned int)G_Weapon_GetShieldTagName(shieldHolder) == scr_const.tag_shield_back )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+78h+resultMatrix+8]
        vmovss  xmm0, dword ptr [rsp+78h+resultMatrix+4]
        vmovss  xmm2, dword ptr [rsp+78h+resultMatrix]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+78h+resultMatrix+14h]
        vmovss  xmm0, dword ptr [rsp+78h+resultMatrix+10h]
        vmovss  xmm2, dword ptr [rsp+78h+resultMatrix+0Ch]
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm2, xmm2, xmm2
    }
  }
  __asm
  {
    vmovss  dword ptr [rdi], xmm2
    vmovss  dword ptr [rdi+4], xmm0
    vmovss  dword ptr [rdi+8], xmm1
  }
}

/*
==============
G_Weapon_GetWeaponForName
==============
*/
Weapon *G_Weapon_GetWeaponForName(Weapon *result, const char *name)
{
  BG_Weapons_GetFullWeaponForName(name, result, BG_FindBaseWeaponForName);
  return result;
}

/*
==============
G_Weapon_GivePlayerWeapon
==============
*/
__int64 G_Weapon_GivePlayerWeapon(playerState_s *ps, scrContext_t *scrContext, const Weapon *weapon, int dualWield, int startInAltMode, int usedBefore)
{
  GWeaponMap *Instance; 
  const WeaponDef *v11; 
  weapClass_t WeaponClass; 
  const char *WeaponName; 
  const char *v14; 
  PlayerEquippedWeaponState *EquippedWeaponStateNonConst; 
  bool v16; 
  DualWieldType dualWieldType; 
  OffhandClass offhandPrimary; 
  OffhandSlot v19; 
  OffhandClass offhandSecondary; 
  OffhandClass offhandSpecial; 
  GOffhandSlotAssignResult v22; 
  const Weapon *OffHandWeaponForPlayer; 
  const Weapon *v24; 
  const Weapon *v25; 
  PlayerEquippedWeaponState *v29; 
  scrContext_t *scrContexta; 
  __m256i v35; 
  int v38; 
  char output[1024]; 

  scrContexta = scrContext;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1948, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps", scrContext) )
    __debugbreak();
  if ( !BG_ValidateWeapon(weapon) )
  {
    Com_PrintWarning(17, "WARNING: G_GivePlayerWeapon() - Not a valid weapon! Check console log for details.\n");
    return 0i64;
  }
  Instance = GWeaponMap::GetInstance();
  if ( BG_PlayerHasWeapon(Instance, ps, weapon) )
    return 1i64;
  v11 = BG_WeaponDef(weapon, 0);
  WeaponClass = BG_GetWeaponClass(weapon, 0);
  if ( WeaponClass == WEAPCLASS_TURRET )
  {
    if ( !v11->useTurretViewmodelAnims )
      return 0i64;
  }
  else if ( WeaponClass == WEAPCLASS_NON_PLAYER )
  {
    return 0i64;
  }
  if ( v11->inventoryType == WEAPINVENTORY_SCAVENGER )
  {
    Com_PrintWarning(17, "WARNING: G_GivePlayerWeapon() - Scavenger item are not meant to be used as weapons.\n");
    return 0i64;
  }
  if ( !v11->gunXModel && !v11->useTurretViewmodelAnims )
    return 0i64;
  if ( level.clientIsSpawning )
  {
    WeaponName = BG_GetWeaponName(weapon, output, 0x400u);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1981, ASSERT_TYPE_ASSERT, "( ( !level.clientIsSpawning ) )", "( BG_GetWeaponName( weapon, name, 1024 ) ) = %s", WeaponName) )
      __debugbreak();
  }
  if ( (!BG_Camo_GetCamoCount() || !BG_WeaponCanAcceptCamo(weapon)) && BG_WeaponIsUsingCamo(weapon) )
  {
    v14 = BG_GetWeaponName(weapon, output, 0x400u);
    Com_PrintWarning(17, "G_Weapon_GivePlayerWeapon trying to give the player a weapon %s with a camo, but the weapon doesn't support camo.", v14);
    return 0i64;
  }
  if ( !BG_EquipWeapon(Instance, ps, weapon) )
  {
    Com_PrintWarning(17, "WARNING: Player already has %i weapons, unable to give them any more\n", 15i64);
    return 0i64;
  }
  EquippedWeaponStateNonConst = BG_GetEquippedWeaponStateNonConst(Instance, ps, weapon);
  if ( EquippedWeaponStateNonConst )
  {
    BG_Execution_MarkExecutionWeaponDirty(ps);
    v16 = dualWield == 0;
    if ( !dualWield )
    {
      if ( BG_WeaponIsDualWield(weapon) )
      {
        dualWieldType = v11->dualWieldType;
        if ( dualWieldType == DUAL_WIELD_TYPE_DEFAULT || startInAltMode && dualWieldType == DUAL_WIELD_TYPE_ALT_MODE )
          dualWield = 1;
      }
      v16 = dualWield == 0;
    }
    EquippedWeaponStateNonConst->dualWielding = !v16;
    EquippedWeaponStateNonConst->inAltMode = startInAltMode != 0;
    EquippedWeaponStateNonConst->usedBefore = usedBefore != 0;
    EquippedWeaponStateNonConst->zoomLevelIndex = 0;
    EquippedWeaponStateNonConst->offhandSlot = OFFHAND_SLOT_NONE;
    EquippedWeaponStateNonConst->slot = WEAPON_SLOT_NONE;
    if ( v11->inventoryType == WEAPINVENTORY_PRIMARY )
      EquippedWeaponStateNonConst->slot = v11->slot;
    *(_WORD *)&EquippedWeaponStateNonConst->thermalEnabled = 1;
    if ( WeaponClass == WEAPCLASS_ITEM )
      return 1i64;
    if ( v11->inventoryType == WEAPINVENTORY_OFFHAND )
    {
      EquippedWeaponStateNonConst->thermalEnabled = 0;
      offhandPrimary = ps->weapCommon.offhandPrimary;
      if ( offhandPrimary && offhandPrimary == v11->offhandClass )
      {
        v19 = OFFHAND_SLOT_PRIMARY;
      }
      else
      {
        offhandSecondary = ps->weapCommon.offhandSecondary;
        if ( offhandSecondary && offhandSecondary == v11->offhandClass )
        {
          v19 = OFFHAND_SLOT_SECONDARY;
        }
        else
        {
          offhandSpecial = ps->weapCommon.offhandSpecial;
          if ( offhandSpecial == OFFHAND_CLASS_NONE || offhandSpecial != v11->offhandClass )
            goto LABEL_50;
          v19 = OFFHAND_SLOT_SPECIAL;
        }
      }
      v22 = G_Weapon_AssignWeaponOffhandSlot(ps, weapon, v19);
      if ( v22 )
        G_Weapon_ReportOffhandSlotAssignError(ps, weapon, v22, scrContexta);
    }
LABEL_50:
    if ( v11->offhandClass )
    {
      OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(Instance, ps);
      if ( OffHandWeaponForPlayer->weaponIdx )
      {
        if ( (unsigned int)(ps->weapState[0].weaponState - 26) <= 6 || BG_Offhand_HasActiveOffhand(ps) || BG_WeaponAmmo(Instance, ps, OffHandWeaponForPlayer, 0) > 0 )
          return 1i64;
        __asm
        {
          vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
          vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
          vmovups [rsp+4C8h+var_490], ymm0
          vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
        }
        v38 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
        __asm
        {
          vmovsd  [rsp+4C8h+var_460], xmm0
          vmovups [rsp+4C8h+var_470], xmm1
        }
        v29 = BG_GetEquippedWeaponStateNonConst(Instance, ps, OffHandWeaponForPlayer);
        if ( v29 )
        {
          _RAX = BG_GetFirstAvailableOffhandBySlot(Instance, ps, (const OffhandSlot)v29->offhandSlot);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups [rsp+4C8h+var_490], ymm0
            vmovups xmm1, xmmword ptr [rax+20h]
            vmovups [rsp+4C8h+var_470], xmm1
            vmovsd  xmm0, qword ptr [rax+30h]
            vmovsd  [rsp+4C8h+var_460], xmm0
          }
          v38 = *(_DWORD *)&_RAX->weaponCamo;
        }
        v24 = (const Weapon *)&v35;
        if ( !v35.m256i_i16[0] )
          v24 = weapon;
      }
      else
      {
        v24 = weapon;
      }
      BG_SetOffHandWeaponForPlayer(Instance, ps, v24);
      v25 = BG_GetOffHandWeaponForPlayer(Instance, ps);
      G_Weapon_SetEquippedOffHand(ps->clientNum, v25);
    }
    return 1i64;
  }
  if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1996, ASSERT_TYPE_ASSERT, "(equippedWeapon)", (const char *)&queryFormat, "equippedWeapon") )
    return 0i64;
  __debugbreak();
  return 0i64;
}

/*
==============
G_Weapon_GrenadeLauncher_Fire
==============
*/
gentity_s *G_Weapon_GrenadeLauncher_Fire(gentity_s *ent, const Weapon *grenade, const PlayerHandIndex hand, const int gameTime, const BgWeaponParms *wp)
{
  bool isAlternate; 
  int fuseTime; 
  int v54; 
  int v55; 
  int v56; 
  int outSpeed; 
  int outSpeedUp; 
  vec3_t dir; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 807, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 808, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  G_Missile_GetScaledProjectileSpeed(ent, &wp->weapon, wp->isAlternate, &outSpeed, &outSpeedUp);
  isAlternate = wp->isAlternate;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, [rsp+0D8h+outSpeed]
    vmulss  xmm0, xmm2, dword ptr [rdi]
    vmulss  xmm1, xmm2, dword ptr [rdi+4]
    vmulss  xmm2, xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+0D8h+dir], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+0D8h+outSpeedUp]
    vmovss  dword ptr [rsp+0D8h+dir+4], xmm1
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rsp+0D8h+dir+8], xmm1
  }
  fuseTime = BG_WeaponFuseTime(&wp->weapon, isAlternate);
  _RBX = G_Missile_FireGrenade(ent, &wp->muzzleTrace, &dir, grenade, wp->isAlternate, hand, 0, fuseTime, 1, gameTime);
  _RBX->flags.m_flags[0] |= 0x4000u;
  if ( G_GetEntityPlayerState(ent) )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+0D8h+dir]
      vmovss  xmm5, dword ptr [rsp+0D8h+dir+8]
      vmovaps [rsp+0D8h+var_48], xmm6
      vmovaps [rsp+0D8h+var_58], xmm7
      vmovss  xmm7, dword ptr [rsp+0D8h+dir+4]
      vmulss  xmm1, xmm7, xmm7
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm0, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm6, xmm4, xmm2
      vmovss  dword ptr [rsp+0D8h+dir], xmm6
      vmulss  xmm0, xmm7, xmm2
      vmovaps xmm7, [rsp+0D8h+var_58]
      vmovss  dword ptr [rsp+0D8h+dir+4], xmm0
      vmulss  xmm3, xmm5, xmm2
      vmovss  dword ptr [rsp+0D8h+dir+8], xmm3
      vmulss  xmm1, xmm0, dword ptr [rax+40h]
      vmulss  xmm0, xmm6, dword ptr [rax+3Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, dword ptr [rax+44h]
      vaddss  xmm4, xmm2, xmm1
      vmulss  xmm0, xmm6, xmm4
      vaddss  xmm3, xmm0, dword ptr [rbx+28h]
      vmovaps xmm6, [rsp+0D8h+var_48]
      vmovss  dword ptr [rbx+28h], xmm3
      vmulss  xmm0, xmm4, dword ptr [rsp+0D8h+dir+4]
      vaddss  xmm2, xmm0, dword ptr [rbx+2Ch]
      vmovss  dword ptr [rbx+2Ch], xmm2
      vmulss  xmm0, xmm4, dword ptr [rsp+0D8h+dir+8]
      vaddss  xmm2, xmm0, dword ptr [rbx+30h]
      vmovss  [rsp+0D8h+var_88], xmm3
      vmovss  dword ptr [rbx+30h], xmm2
    }
    if ( (v54 & 0x7F800000) == 2139095040 )
      goto LABEL_16;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+2Ch]
      vmovss  [rsp+0D8h+var_88], xmm0
    }
    if ( (v55 & 0x7F800000) == 2139095040 )
      goto LABEL_16;
    __asm { vmovss  [rsp+0D8h+var_88], xmm2 }
    if ( (v56 & 0x7F800000) == 2139095040 )
    {
LABEL_16:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 824, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( m->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( m->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( m->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( m->s.lerp.pos.trDelta )[2] )") )
        __debugbreak();
    }
  }
  return _RBX;
}

/*
==============
G_Weapon_HandleFiredEvent
==============
*/
void G_Weapon_HandleFiredEvent(gentity_s *const attacker, gentity_s *const fired, const int hitClientNum, const int eventType, const unsigned int eventParm, const GWeaponFireParms *const params)
{
  scrContext_t *v11; 
  GBullet *v12; 
  GWeapon *v13; 
  BOOL v39; 
  float value[6]; 
  unsigned int v41; 
  int v42; 
  __int64 v43; 
  vec3_t vec; 
  vec3_t angles; 
  void *retaddr; 

  _RAX = &retaddr;
  v43 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v41 = eventType;
  v42 = hitClientNum;
  _R13 = fired;
  _RBX = params;
  v11 = ScriptContext_Server();
  if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
    __debugbreak();
  v12 = GBullet::ms_gBulletSystem;
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  v13 = GWeapon::ms_gWeaponSystem;
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  if ( !GCombat::QueuedDamageEnabled(GCombat::ms_gCombatSystem) )
    GBullet::HitClientOverrideTracers(v12, attacker, &params->wp.weapon, params->wp.isAlternate);
  GBullet::ResetHitClientEventCount(v12);
  if ( v41 != 72 )
  {
    if ( BG_GetWeaponType(&params->wp.weapon, params->wp.isAlternate) == WEAPTYPE_BULLET )
      goto LABEL_29;
    if ( _R13 )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [r13+28h]
        vmovss  xmm5, dword ptr [r13+2Ch]
        vmovss  xmm6, dword ptr [r13+30h]
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vmovss  xmm2, cs:__real@3f800000
        vblendvps xmm1, xmm3, xmm2, xmm0
        vmovss  dword ptr [rbp+47h+var_80], xmm1
        vdivss  xmm2, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rbp+47h+vec], xmm0
        vmulss  xmm1, xmm5, xmm2
        vmovss  dword ptr [rbp+47h+vec+4], xmm1
        vmulss  xmm0, xmm6, xmm2
        vmovss  dword ptr [rbp+47h+vec+8], xmm0
      }
      vectoangles(&vec, &angles);
      _RDI = &_R13->s.lerp.pos;
      if ( _R13 == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
        __debugbreak();
      if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
      {
        *(_QWORD *)&value[4] = value;
        LODWORD(value[2]) = LODWORD(_R13->s.lerp.pos.trBase.v[1]) ^ LODWORD(_R13->s.lerp.pos.trBase.v[2]) ^ s_trbase_aab_Z;
        LODWORD(value[1]) = LODWORD(_R13->s.lerp.pos.trBase.v[0]) ^ LODWORD(_R13->s.lerp.pos.trBase.v[1]) ^ s_trbase_aab_Y;
        LODWORD(value[0]) = LODWORD(_R13->s.lerp.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
        memset(&value[4], 0, 8ui64);
        __asm
        {
          vmovss  xmm0, [rbp+47h+value]
          vmovss  dword ptr [rbp+47h+var_80], xmm0
        }
        if ( (LODWORD(value[4]) & 0x7F800000) == 2139095040 )
          goto LABEL_32;
        __asm
        {
          vmovss  xmm0, [rbp+47h+var_8C]
          vmovss  dword ptr [rbp+47h+var_80], xmm0
        }
        if ( (LODWORD(value[4]) & 0x7F800000) == 2139095040 )
          goto LABEL_32;
        __asm
        {
          vmovss  xmm0, [rbp+47h+var_88]
          vmovss  dword ptr [rbp+47h+var_80], xmm0
        }
        if ( (LODWORD(value[4]) & 0x7F800000) == 2139095040 )
        {
LABEL_32:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
            __debugbreak();
        }
        goto LABEL_28;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+0Ch]
        vmovss  [rbp+47h+value], xmm0
        vmovss  xmm1, dword ptr [rdi+10h]
        vmovss  xmm0, dword ptr [rdi+14h]
      }
    }
    else
    {
      vectoangles(&params->wp.forward, &angles);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+24h]
        vmovss  [rbp+47h+value], xmm0
        vmovss  xmm1, dword ptr [rbx+28h]
        vmovss  xmm0, dword ptr [rbx+2Ch]
      }
    }
    __asm
    {
      vmovss  [rbp+47h+var_88], xmm0
      vmovss  [rbp+47h+var_8C], xmm1
    }
LABEL_28:
    Scr_AddVector(v11, angles.v);
    Scr_AddVector(v11, value);
    GScr_Weapon_AddParam(v11, &params->wp.weapon, params->wp.isAlternate);
    GScr_Notify(attacker, scr_const.weapon_fired, 3u);
    memset(value, 0, 0xCui64);
    goto LABEL_29;
  }
  GScr_Weapon_AddParam(v11, &params->wp.weapon, params->wp.isAlternate);
  GScr_Notify(attacker, scr_const.ball_pass, 1u);
LABEL_29:
  LOBYTE(v39) = params->wp.isAlternate;
  v13->FireWeaponSendClientEvent(v13, attacker, v41, eventParm, v42, v39, params);
  __asm { vmovaps xmm6, xmmword ptr [rsp+0D0h+var_48+8] }
}

/*
==============
G_Weapon_MacrossMissiles
==============
*/
void G_Weapon_MacrossMissiles(gentity_s *parent, const Weapon *weapon, const bool isAlternate, const PlayerHandIndex hand, const BgWeaponParms *wp, const vec3_t *start, const vec3_t *gunVel, const BgMissileFireParms *fireParms, const int gameTime, bool magicBullet)
{
  int v27; 
  vec3_t *dir; 
  __int64 v71; 
  _DWORD v86[10]; 
  vec3_t v87; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = fireParms;
  _RCX = wp;
  if ( fireParms )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rcx+8]
      vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm4, dword ptr [rcx+4]
    }
    v27 = *(_DWORD *)&fireParms->lockon;
    __asm
    {
      vmovaps xmmword ptr [r11-58h], xmm6
      vmovss  xmm6, dword ptr [rcx]
      vmovaps xmmword ptr [r11-68h], xmm7
      vmovss  xmm7, dword ptr [rcx+18h]
      vmovaps xmmword ptr [r11-78h], xmm8
      vmovss  xmm8, dword ptr [rcx+1Ch]
      vmovaps xmmword ptr [r11-88h], xmm9
      vmovss  xmm9, dword ptr [rcx+20h]
      vmovaps xmmword ptr [r11-98h], xmm10
      vmovss  xmm10, dword ptr [rcx+0Ch]
      vxorps  xmm0, xmm10, xmm5
      vmovss  [rbp+0B0h+var_124], xmm0
      vmovaps xmmword ptr [r11-0A8h], xmm11
      vmovss  xmm11, dword ptr [rcx+10h]
      vxorps  xmm1, xmm11, xmm5
      vmovss  [rbp+0B0h+var_120], xmm1
      vaddss  xmm1, xmm4, xmm8
      vmovss  [rbp+0B0h+var_108], xmm1
      vaddss  xmm1, xmm6, xmm10
      vaddss  xmm2, xmm1, xmm7
      vmovss  [rbp+0B0h+var_100], xmm2
      vmovaps xmmword ptr [r11-0B8h], xmm12
      vmovss  xmm12, dword ptr [rcx+14h]
      vxorps  xmm0, xmm12, xmm5
      vmovss  [rbp+0B0h+var_11C], xmm0
      vaddss  xmm2, xmm3, xmm12
      vxorps  xmm5, xmm3, xmm5
      vaddss  xmm0, xmm6, xmm7
      vmovss  [rbp+0B0h+var_10C], xmm0
      vaddss  xmm0, xmm3, xmm9
      vmovss  [rbp+0B0h+var_104], xmm0
      vaddss  xmm0, xmm4, xmm11
      vaddss  xmm1, xmm0, xmm8
      vmovss  [rbp+0B0h+var_FC], xmm1
      vaddss  xmm0, xmm2, xmm9
      vmovss  [rbp+0B0h+var_F8], xmm0
      vsubss  xmm0, xmm4, xmm11
      vsubss  xmm4, xmm8, xmm4
      vsubss  xmm1, xmm6, xmm10
      vaddss  xmm2, xmm1, xmm7
      vaddss  xmm1, xmm0, xmm8
      vmovss  [rbp+0B0h+var_F0], xmm1
      vmovss  [rbp+0B0h+var_F4], xmm2
      vsubss  xmm2, xmm3, xmm12
      vaddss  xmm0, xmm2, xmm9
      vmovss  [rbp+0B0h+var_EC], xmm0
      vsubss  xmm3, xmm7, xmm6
      vaddss  xmm0, xmm10, xmm3
      vmovss  [rbp+0B0h+var_DC], xmm0
      vaddss  xmm2, xmm5, xmm9
      vaddss  xmm1, xmm11, xmm4
      vmovss  [rbp+0B0h+var_D8], xmm1
      vaddss  xmm0, xmm2, xmm12
      vmovss  [rbp+0B0h+var_D4], xmm0
      vsubss  xmm1, xmm3, xmm10
      vsubss  xmm0, xmm4, xmm11
      vmovss  [rbp+0B0h+var_D0], xmm1
      vaddss  xmm1, xmm5, xmm9
      vmovss  [rbp+0B0h+var_CC], xmm0
      vsubss  xmm0, xmm1, xmm12
      vmovups xmm1, xmmword ptr [rbx]
      vmovss  [rbp+0B0h+var_C8], xmm0
      vmovsd  xmm0, qword ptr [rbx+10h]
      vmovsd  qword ptr [rsp+1B0h+var_158+18h], xmm0
      vmovss  dword ptr [rbp+0B0h+var_130], xmm10
      vmovss  dword ptr [rbp+0B0h+var_130+4], xmm11
      vmovss  dword ptr [rbp+0B0h+var_130+8], xmm12
      vmovss  [rbp+0B0h+var_118], xmm7
      vmovss  [rbp+0B0h+var_114], xmm8
      vmovss  [rbp+0B0h+var_110], xmm9
      vmovss  [rbp+0B0h+var_E8], xmm3
      vmovss  [rbp+0B0h+var_E4], xmm4
      vmovss  [rbp+0B0h+var_E0], xmm2
      vmovups xmmword ptr [rsp+1B0h+var_158+8], xmm1
    }
    v86[8] = v27;
    __asm
    {
      vmovss  xmm6, cs:__real@42c80000
      vmovss  xmm7, cs:__real@c2c80000
      vmovaps xmm12, xmmword ptr [r11-0B8h]
    }
    dir = &v87;
    __asm { vmovaps xmm11, xmmword ptr [r11-0A8h] }
    v71 = 9i64;
    __asm
    {
      vmovaps xmm10, xmmword ptr [r11-98h]
      vmovaps xmm9, xmmword ptr [r11-88h]
      vmovaps xmm8, xmmword ptr [r11-78h]
    }
    do
    {
      __asm
      {
        vmovaps xmm1, xmm6; max
        vmovaps xmm0, xmm7; min
      }
      *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [rbx+4]
        vmovss  [rsp+1B0h+var_158+0Ch], xmm1
        vmovaps xmm1, xmm6; max
        vmovaps xmm0, xmm7; min
      }
      *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  [rsp+1B0h+var_158+10h], xmm1
        vmovaps xmm1, xmm6; max
        vmovaps xmm0, xmm7; min
      }
      *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [rbx+0Ch]
        vmovss  [rsp+1B0h+var_158+14h], xmm1
      }
      G_Missile_FireRocket(parent, weapon, isAlternate, hand, start, dir++, gunVel, (const BgMissileFireParms *)&v86[2], gameTime, magicBullet);
      --v71;
    }
    while ( v71 );
    __asm
    {
      vmovaps xmm7, [rsp+1B0h+var_68+8]
      vmovaps xmm6, xmmword ptr [rsp+1B0h+var_58+8]
    }
  }
}

/*
==============
G_Weapon_Melee
==============
*/

gentity_s *__fastcall G_Weapon_Melee(gentity_s *ent, const GMeleeFireParms *params, double width, double height, const int gameTime, int *outHitEntDamage, damageReturnCode_t *outDamageReturnCode)
{
  GAntiLag *v13; 
  bool v14; 
  _BOOL8 v15; 
  gentity_s *v18; 
  gentity_s *result; 
  BOOL fmt; 
  BOOL v23; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm3
  }
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v13 = GAntiLag::ms_gAntiLagData;
  v14 = G_Weapon_Melee_Trace_Detail_Enabled();
  LOBYTE(v15) = 1;
  LOBYTE(v23) = 0;
  LOBYTE(fmt) = v14;
  v13->RewindPositions(v13, gameTime, ent, v15, fmt, v23, "Weapon Melee");
  __asm
  {
    vmovaps xmm3, xmm6; height
    vmovaps xmm2, xmm7; width
  }
  v18 = G_Weapon_Melee_internal(ent, params, *(float *)&_XMM2, *(float *)&_XMM3, outHitEntDamage, outDamageReturnCode);
  v13->RestorePositions(v13, ent, "Weapon Melee");
  result = v18;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return result;
}

/*
==============
G_Weapon_Melee_IsProneCandidateNearby
==============
*/

bool __fastcall G_Weapon_Melee_IsProneCandidateNearby(const playerState_s *const attackerPs, double meleeRange)
{
  const dvar_t *v6; 
  GHandler *Handler; 
  Physics_WorldId v16; 
  unsigned int v17; 
  unsigned int HitBodyId; 
  int Ref; 
  int EntityNum; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  int clientNum; 
  const gentity_s *GEntity; 
  const gentity_s *v25; 
  const playerState_s *EntityPlayerStateConst; 
  GUtils *v27; 
  team_t v28; 
  team_t v29; 
  hkMemoryAllocator *v30; 
  hkMemoryAllocator *v31; 
  hkMemoryAllocator *v32; 
  bool v33; 
  hkMemoryAllocator *v34; 
  hkMemoryAllocator *v35; 
  hkMemoryAllocator *v36; 
  Physics_WorldId v39; 
  HavokPhysics_BroadphaseCollisionQueryResult result; 
  HavokPhysics_IgnoreBodies v41; 
  Physics_AABBBroadphaseQueryExtendedData extendedData; 
  __int64 v43; 
  vec3_t max; 
  vec3_t min; 
  char v46; 
  void *retaddr; 

  _RAX = &retaddr;
  v43 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !attackerPs )
    goto LABEL_41;
  v6 = DVARBOOL_killswitch_melee_prone_improvements_enabled;
  if ( !DVARBOOL_killswitch_melee_prone_improvements_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_melee_prone_improvements_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
    goto LABEL_41;
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Weapon_Melee_IsProneCandidateNearby");
  Handler = GHandler::getHandler();
  __asm
  {
    vmulss  xmm6, xmm6, cs:broadphaseQueryScale_0
    vxorps  xmm4, xmm6, cs:__xmm@80000000800000008000000080000000
    vaddss  xmm0, xmm4, dword ptr [r13+30h]
    vmovss  dword ptr [rbp+40h+min], xmm0
    vaddss  xmm1, xmm4, dword ptr [r13+34h]
    vmovss  dword ptr [rbp+40h+min+4], xmm1
    vaddss  xmm0, xmm4, dword ptr [r13+38h]
    vmovss  dword ptr [rbp+40h+min+8], xmm0
    vaddss  xmm1, xmm6, dword ptr [r13+30h]
    vmovss  dword ptr [rbp+40h+max], xmm1
    vaddss  xmm0, xmm6, dword ptr [r13+34h]
    vmovss  dword ptr [rbp+40h+max+4], xmm0
    vaddss  xmm1, xmm6, dword ptr [r13+38h]
    vmovss  dword ptr [rbp+40h+max+8], xmm1
  }
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v41, 0, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v41, -9);
  extendedData.phaseSelection = All;
  extendedData.ignoreBodies = &v41;
  extendedData.contents = 33570816;
  v16 = Handler->GetPhysicsWorldId(Handler);
  v39 = v16;
  result.m_propertyBag.m_bag = NULL;
  *(_DWORD *)&result.m_memSizeAndFlags = 0x1FFFF;
  result.__vftable = (HavokPhysics_BroadphaseCollisionQueryResult_vtbl *)&HavokPhysics_BroadphaseCollisionQueryResult::`vftable';
  result.m_hits.m_data = NULL;
  result.m_hits.m_size = 0;
  result.m_hits.m_capacityAndFlags = 0x80000000;
  result.m_worldId = v16;
  Physics_AABBBroadphaseQuery(v16, &min, &max, &extendedData, &result);
  v17 = 0;
  if ( !HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(&result) )
  {
LABEL_34:
    v34 = hkMemHeapAllocator();
    result.m_hits.m_size = 0;
    if ( result.m_hits.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v34, result.m_hits.m_data, 4, result.m_hits.m_capacityAndFlags & 0x3FFFFFFF);
    result.m_hits.m_data = NULL;
    result.m_hits.m_capacityAndFlags = 0x80000000;
    hkReferencedObject::~hkReferencedObject(&result);
    v35 = hkMemHeapAllocator();
    v41.m_ignoreBodies.m_size = 0;
    if ( v41.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v35, v41.m_ignoreBodies.m_data, 4, v41.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v41.m_ignoreBodies.m_data = NULL;
    v41.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v36 = hkMemHeapAllocator();
    v41.m_ignoreEntities.m_size = 0;
    if ( v41.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v36, v41.m_ignoreEntities.m_data, 8, v41.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
    v41.m_ignoreEntities.m_data = NULL;
    v41.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
    Sys_ProfEndNamedEvent();
LABEL_41:
    v33 = 0;
    goto LABEL_42;
  }
  while ( 1 )
  {
    HitBodyId = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(&result, v17);
    Ref = Physics_GetRef(v16, HitBodyId);
    EntityNum = Physics_GetEntityNum(Ref);
    if ( Handler->IsClient(Handler) )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)LODWORD(Handler[1].__vftable), EntityNum);
      if ( Entity )
        p_nextState = &Entity->nextState;
      else
        p_nextState = NULL;
    }
    else
    {
      p_nextState = GHandler::GetEntityState(Handler, EntityNum);
    }
    if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 416, ASSERT_TYPE_ASSERT, "( es ) != ( nullptr )", "%s != %s\n\t%p, %p", "es", "nullptr", NULL, NULL) )
      __debugbreak();
    clientNum = attackerPs->clientNum;
    if ( p_nextState->number != clientNum && (p_nextState->eType == ET_PLAYER || p_nextState->eType == ET_AGENT) )
    {
      GEntity = G_GetGEntity(clientNum);
      v25 = G_GetGEntity(EntityNum);
      EntityPlayerStateConst = G_GetEntityPlayerStateConst(v25);
      if ( EntityPlayerStateConst )
      {
        if ( ((PM_GetEffectiveStanceForWorldModelAnimation(EntityPlayerStateConst) - 1) & 0xFFFFFFFD) == 0 )
        {
          if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
            __debugbreak();
          v27 = GUtils::ms_gUtils;
          v28 = GUtils::ms_gUtils->GetEntityTeam(GUtils::ms_gUtils, GEntity);
          v29 = v27->GetEntityTeam(v27, v25);
          if ( v28 == TEAM_ZERO || v28 != v29 )
            break;
        }
      }
    }
    if ( ++v17 >= HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(&result) )
      goto LABEL_34;
    v16 = v39;
  }
  v30 = hkMemHeapAllocator();
  result.m_hits.m_size = 0;
  if ( result.m_hits.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v30, result.m_hits.m_data, 4, result.m_hits.m_capacityAndFlags & 0x3FFFFFFF);
  result.m_hits.m_data = NULL;
  result.m_hits.m_capacityAndFlags = 0x80000000;
  hkReferencedObject::~hkReferencedObject(&result);
  v31 = hkMemHeapAllocator();
  v41.m_ignoreBodies.m_size = 0;
  if ( v41.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v31, v41.m_ignoreBodies.m_data, 4, v41.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v41.m_ignoreBodies.m_data = NULL;
  v41.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v32 = hkMemHeapAllocator();
  v41.m_ignoreEntities.m_size = 0;
  if ( v41.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v32, v41.m_ignoreEntities.m_data, 8, v41.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v41.m_ignoreEntities.m_data = NULL;
  v41.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  Sys_ProfEndNamedEvent();
  v33 = 1;
LABEL_42:
  _R11 = &v46;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return v33;
}

/*
==============
G_Weapon_Melee_SetupTargetWeaponParams
==============
*/
void G_Weapon_Melee_SetupTargetWeaponParams(const GMeleeFireParms *const params, const playerState_s *const ps, BgWeaponParms *const wp)
{
  int targetEntity; 
  GWeaponMap *Instance; 
  GHandler *Handler; 
  bool v15; 
  bool v16; 
  centity_t *Entity; 
  const entityState_t *EntityState; 
  scr_string_t j_spinelower; 
  int EntityWorldTagPosition; 
  scr_string_t j_neck; 
  int v22; 
  scr_string_t j_spine4; 
  int v24; 
  vec3_t outPosition; 

  _RDI = wp;
  _R14 = params;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 88, ASSERT_TYPE_ASSERT, "( params )", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 89, ASSERT_TYPE_ASSERT, "( wp )", (const char *)&queryFormat, "wp") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups ymmword ptr [rdi], ymm0
    vmovups ymm1, ymmword ptr [r14+20h]
    vmovups ymmword ptr [rdi+20h], ymm1
    vmovups ymm0, ymmword ptr [r14+40h]
    vmovups ymmword ptr [rdi+40h], ymm0
    vmovups ymm1, ymmword ptr [r14+60h]
    vmovups ymmword ptr [rdi+60h], ymm1
    vmovsd  xmm0, qword ptr [r14+80h]
    vmovsd  qword ptr [rdi+80h], xmm0
  }
  targetEntity = _R14->targetEntity;
  if ( targetEntity != 2047 )
  {
    Instance = GWeaponMap::GetInstance();
    Handler = GHandler::getHandler();
    v15 = ps && BG_IsPlayerZeroG(ps);
    v16 = ps && BG_IsThirdPersonMode(Instance, ps);
    if ( Handler->IsClient(Handler) )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)LODWORD(Handler[1].__vftable), targetEntity);
      EntityState = Entity ? &Entity->nextState : 0i64;
    }
    else
    {
      EntityState = GHandler::GetEntityState(Handler, targetEntity);
    }
    if ( EntityState )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
      {
        if ( !BG_IsCharacterEntity(EntityState) && !BG_IsCorpseEntity(EntityState) )
          return;
      }
      else if ( EntityState->eType != ET_ACTOR )
      {
        return;
      }
      if ( v15 && ((j_spinelower = scr_const.j_spinelower, !Handler->IsClient(Handler)) ? (EntityWorldTagPosition = GHandler::GetEntityWorldTagPosition(Handler, targetEntity, j_spinelower, &outPosition)) : (EntityWorldTagPosition = CgHandler::GetEntityWorldTagPosition((CgHandler *)Handler, targetEntity, j_spinelower, &outPosition)), EntityWorldTagPosition) || !v16 && ((j_neck = scr_const.j_neck, !Handler->IsClient(Handler)) ? (v22 = GHandler::GetEntityWorldTagPosition(Handler, targetEntity, j_neck, &outPosition)) : (v22 = CgHandler::GetEntityWorldTagPosition((CgHandler *)Handler, targetEntity, j_neck, &outPosition)), v22) || ((j_spine4 = scr_const.j_spine4, !Handler->IsClient(Handler)) ? (v24 = GHandler::GetEntityWorldTagPosition(Handler, targetEntity, j_spine4, &outPosition)) : (v24 = CgHandler::GetEntityWorldTagPosition((CgHandler *)Handler, targetEntity, j_spine4, &outPosition)), v24) )
      {
        __asm { vmovss  xmm0, dword ptr [rsp+98h+outPosition] }
        _RBX = &_RDI->right;
        __asm
        {
          vmovaps [rsp+98h+var_48], xmm6
          vsubss  xmm6, xmm0, dword ptr [r14+24h]
          vmovss  xmm0, dword ptr [rsp+98h+outPosition+4]
          vmovss  dword ptr [rdi], xmm6
          vsubss  xmm5, xmm0, dword ptr [r14+28h]
          vmovss  xmm0, dword ptr [rsp+98h+outPosition+8]
          vmovss  dword ptr [rdi+4], xmm5
          vsubss  xmm4, xmm0, dword ptr [r14+2Ch]
          vmulss  xmm0, xmm6, xmm6
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm2, xmm2, xmm1
          vmovss  xmm1, cs:__real@3f800000
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm1, xmm0
          vdivss  xmm2, xmm1, xmm0
          vmulss  xmm3, xmm6, xmm2
          vmovaps xmm6, [rsp+98h+var_48]
        }
        _RSI = (BgWeaponParms *)&_RDI->up;
        __asm
        {
          vmovss  dword ptr [rdi], xmm3
          vmulss  xmm0, xmm4, xmm2
          vmovss  dword ptr [rdi+8], xmm0
          vxorps  xmm0, xmm3, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm1, xmm5, xmm2
          vmovss  dword ptr [rdi+4], xmm1
        }
        _RDI->right.v[2] = 0.0;
        __asm
        {
          vmovss  dword ptr [rbx+4], xmm0
          vmovss  dword ptr [rbx], xmm1
        }
        if ( &_RDI->right == &_RDI->up && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
          __debugbreak();
        if ( _RDI == _RSI && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+8]
          vmulss  xmm3, xmm0, dword ptr [rbx+4]
          vmovss  xmm1, dword ptr [rbx+8]
          vmulss  xmm2, xmm1, dword ptr [rdi+4]
          vsubss  xmm0, xmm3, xmm2
          vmovss  dword ptr [rsi], xmm0
          vmovss  xmm1, dword ptr [rdi]
          vmulss  xmm3, xmm1, dword ptr [rbx+8]
          vmovss  xmm0, dword ptr [rdi+8]
          vmulss  xmm2, xmm0, dword ptr [rbx]
          vsubss  xmm1, xmm3, xmm2
          vmovss  dword ptr [rsi+4], xmm1
          vmovss  xmm0, dword ptr [rdi+4]
          vmovss  xmm1, dword ptr [rdi]
          vmulss  xmm3, xmm0, dword ptr [rbx]
          vmulss  xmm2, xmm1, dword ptr [rbx+4]
          vsubss  xmm0, xmm3, xmm2
          vmovss  dword ptr [rsi+8], xmm0
        }
      }
    }
  }
}

/*
==============
G_Weapon_Melee_Trace
==============
*/

__int64 __fastcall G_Weapon_Melee_Trace(gentity_s *ent, const BgWeaponParms *wp, int damage, double range, float width, float height, bool detailTrace, int searchEntityId, trace_t *traceResult, vec3_t *outHitOrigin)
{
  bool v16; 
  unsigned int v21; 
  char v22; 
  bool v23; 
  unsigned int v27; 
  bool v39; 
  bool v40; 
  unsigned __int8 *v41; 
  const dvar_t *v65; 
  unsigned __int8 *priorityMap; 
  Physics_WorldId v67; 
  unsigned int v68; 
  bool v82; 
  unsigned __int16 GlassHitId; 
  int v84; 
  const dvar_t *v85; 
  GlassPieceState PieceState; 
  unsigned __int64 eTeam; 
  const dvar_t *v91; 
  const vec4_t *v92; 
  unsigned __int16 EntityHitId; 
  gentity_s *v94; 
  unsigned __int16 v95; 
  gentity_s *v96; 
  __int64 v97; 
  __int64 v98; 
  int v99; 
  GWeapon *WeaponSystem; 
  GWeapon *v102; 
  const dvar_t *v114; 
  const vec4_t *v115; 
  int Int_Internal_DebugName; 
  int v119; 
  int v120; 
  const vec4_t *v121; 
  __int64 result; 
  int *skipEntities; 
  __int64 skipEntityCount; 
  __int64 skipChildren; 
  __int64 contentMask; 
  unsigned int v140; 
  int outOffsetCount; 
  int passEntityNumList; 
  unsigned int v143; 
  unsigned int v144; 
  int iDamage; 
  vec2_t *outOffsets; 
  vec3_t *v147; 
  unsigned __int8 *i; 
  trace_t results; 
  vec3_t start; 
  vec3_t end; 
  vec3_t vEnd; 
  DObjPartBits teamFlags; 
  char v154; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  v16 = detailTrace;
  _R15 = wp;
  _R12 = traceResult;
  v147 = outHitOrigin;
  iDamage = damage;
  __asm { vmovaps xmm6, xmm3 }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 173, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 174, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  if ( !traceResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 175, ASSERT_TYPE_ASSERT, "(traceResult)", (const char *)&queryFormat, "traceResult") )
    __debugbreak();
  v21 = 0;
  outOffsets = NULL;
  outOffsetCount = 0;
  BG_GetMeleeTraceGridOffsets((const vec2_t **)&outOffsets, &outOffsetCount);
  G_GetEntityPlayerState(ent);
  __asm
  {
    vmovss  xmm9, [rsp+1D8h+width]
    vmovss  xmm8, [rsp+1D8h+height]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm9, xmm0
  }
  traceResult->fraction = 1.0;
  v143 = 0;
  if ( !(v22 | v23) )
    goto LABEL_12;
  __asm { vcomiss xmm8, xmm0 }
  v27 = 1;
  if ( !(v22 | v23) )
LABEL_12:
    v27 = outOffsetCount;
  v144 = v27;
  if ( G_Utils_IsClientOrAgent(ent) )
  {
    __asm
    {
      vmovss  xmm3, cs:__real@41200000
      vmulss  xmm1, xmm3, dword ptr [r15]
      vmovss  xmm0, dword ptr [r15+24h]
      vmulss  xmm2, xmm3, dword ptr [r15+4]
      vsubss  xmm4, xmm0, xmm1
      vmovss  xmm0, dword ptr [r15+28h]
      vsubss  xmm5, xmm0, xmm2
      vmulss  xmm2, xmm3, dword ptr [r15+8]
      vmovss  xmm0, dword ptr [r15+2Ch]
      vsubss  xmm1, xmm0, xmm2
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm4, dword ptr [r15+24h]
      vmovss  xmm5, dword ptr [r15+28h]
      vmovss  xmm1, dword ptr [r15+2Ch]
    }
  }
  passEntityNumList = ent->s.number;
  v140 = 0;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  dword ptr [rsp+1D8h+start+8], xmm1
    vmovss  dword ptr [rsp+1D8h+start+4], xmm5
    vmovss  dword ptr [rsp+1D8h+start], xmm4
  }
  v39 = 0;
  v40 = v27 == 0;
  if ( !v27 )
  {
LABEL_105:
    __asm { vcomiss xmm7, dword ptr [r12] }
    LOBYTE(v21) = !v39 && !v40;
    result = v21;
    goto LABEL_106;
  }
  v41 = NULL;
  if ( detailTrace )
    v41 = bg_meleePriorityMap;
  for ( i = v41; ; v41 = i )
  {
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [r15]
      vaddss  xmm2, xmm0, xmm4
      vmulss  xmm0, xmm6, dword ptr [r15+4]
      vaddss  xmm4, xmm0, xmm5
      vmulss  xmm0, xmm6, dword ptr [r15+8]
      vaddss  xmm5, xmm0, xmm1
      vmovss  dword ptr [rsp+1D8h+end+8], xmm5
      vmovss  dword ptr [rsp+1D8h+end], xmm2
      vmovss  dword ptr [rsp+1D8h+end+4], xmm4
    }
    if ( v27 > 1 )
    {
      __asm
      {
        vmulss  xmm1, xmm9, dword ptr [rax+rcx*8]
        vmulss  xmm0, xmm1, dword ptr [r15+0Ch]
        vaddss  xmm3, xmm0, xmm2
        vmulss  xmm0, xmm1, dword ptr [r15+10h]
        vaddss  xmm4, xmm0, xmm4
        vmulss  xmm0, xmm1, dword ptr [r15+14h]
        vaddss  xmm5, xmm0, xmm5
        vmovss  dword ptr [rsp+1D8h+end+8], xmm5
        vmovss  dword ptr [rsp+1D8h+end], xmm3
        vmovss  dword ptr [rsp+1D8h+end+4], xmm4
        vmulss  xmm2, xmm8, dword ptr [rax+rcx*8+4]
        vmulss  xmm0, xmm2, dword ptr [r15+18h]
        vaddss  xmm1, xmm0, xmm3
        vmulss  xmm0, xmm2, dword ptr [r15+1Ch]
        vmovss  dword ptr [rsp+1D8h+end], xmm1
        vaddss  xmm1, xmm0, xmm4
        vmulss  xmm0, xmm2, dword ptr [r15+20h]
        vmovss  dword ptr [rsp+1D8h+end+4], xmm1
        vaddss  xmm1, xmm0, xmm5
        vmovss  dword ptr [rsp+1D8h+end+8], xmm1
      }
    }
    v65 = DVARBOOL_killswitch_melee_use_bullet_trace_enabled;
    priorityMap = v41;
    if ( !DVARBOOL_killswitch_melee_use_bullet_trace_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_melee_use_bullet_trace_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v65);
    if ( v65->current.enabled && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
    {
      v23 = !v16;
      v67 = PHYSICS_WORLD_ID_FIRST;
      v68 = v140;
      if ( !v23 && !v140 && G_Weapon_Melee_Trace_Detail_Enabled() )
      {
        v67 = PHYSICS_WORLD_ID_SERVER_DETAIL;
        priorityMap = bg_meleeShieldDetailPriorityMap;
      }
      PhysicsQuery_LegacyBulletTrace(v67, &results, &start, &end, &bounds_origin, &passEntityNumList, 1, 0, 41968017, 1, priorityMap, All);
    }
    else
    {
      G_Main_LocationalTraceAllowChildren(&results, &start, &end, &passEntityNumList, 1, 41968017, priorityMap, All);
      v68 = v140;
    }
    __asm
    {
      vmovss  xmm5, [rsp+1D8h+results.fraction]
      vmovss  xmm0, dword ptr [rsp+1D8h+end]
      vsubss  xmm1, xmm0, dword ptr [rsp+1D8h+start]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm0, xmm1, dword ptr [rsp+1D8h+start]
      vmovss  xmm1, dword ptr [rsp+1D8h+end+4]
      vmovss  dword ptr [rsp+1D8h+vEnd], xmm0
      vsubss  xmm0, xmm1, dword ptr [rsp+1D8h+start+4]
      vmulss  xmm2, xmm0, xmm5
      vaddss  xmm3, xmm2, dword ptr [rsp+1D8h+start+4]
      vmovss  xmm0, dword ptr [rsp+1D8h+end+8]
      vsubss  xmm1, xmm0, dword ptr [rsp+1D8h+start+8]
      vmulss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rsp+1D8h+vEnd+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsp+1D8h+start+8]
      vmovss  dword ptr [rsp+1D8h+vEnd+8], xmm3
    }
    v82 = v68 == 0;
    if ( !v68 )
    {
      G_Trigger_DamageCheckHit(PHYSICS_WORLD_ID_FIRST, ent, 1, &start, &vEnd, iDamage, 8);
      GlassHitId = Trace_GetGlassHitId(&results);
      v84 = GlassHitId;
      v82 = GlassHitId == 0;
      if ( GlassHitId )
      {
        v85 = DVARINT_glass_meleeDamage;
        if ( !DVARINT_glass_meleeDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "glass_meleeDamage") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v85);
        G_Glass_DamagePiece(v84 - 1, v85->current.integer, &vEnd, &_R15->forward);
        PieceState = G_Glass_GetPieceState(v84 - 1);
        v82 = PieceState == GLASS_DESTROYED;
        if ( PieceState == GLASS_DESTROYED )
        {
          eTeam = (unsigned int)ent->sentient->eTeam;
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
            _RAX = Com_TeamsSP_GetAllTeamFlags();
          else
            _RAX = Com_TeamsMP_GetAllTeamFlags();
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovups xmmword ptr [rsp+1D8h+teamFlags], xmm0
            vmovsd  xmm1, qword ptr [rax+10h]
            vmovsd  qword ptr [rsp+1D8h+teamFlags+10h], xmm1
          }
          teamFlags.array[6] = _RAX->array[6];
          if ( (unsigned int)eTeam >= 0xE0 )
          {
            LODWORD(contentMask) = 224;
            LODWORD(skipChildren) = eTeam;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", skipChildren, contentMask) )
              __debugbreak();
          }
          teamFlags.array[eTeam >> 5] &= ~(0x80000000 >> (eTeam & 0x1F));
          Actor_BroadcastGlassEvent(ent, AI_EV_GLASS_DESTROYED, (const bitarray<224> *)&teamFlags, &vEnd);
        }
      }
      __asm { vmovss  xmm5, [rsp+1D8h+results.fraction] }
    }
    __asm { vucomiss xmm5, xmm7 }
    if ( !v82 && (results.surfaceFlags & 0x10) == 0 )
      break;
    v114 = DCONST_DVARBOOL_melee_debug;
    if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v114);
    v16 = detailTrace;
    if ( v114->current.enabled )
    {
      v115 = &colorDkRed;
      if ( detailTrace )
        v115 = &colorRed;
      G_DebugLineWithDuration(&start, &end, v115, 1, 200);
    }
LABEL_84:
    v27 = v144;
    v39 = ++v140 < v144;
    v40 = v140 == v144;
    if ( v140 >= v144 )
      goto LABEL_105;
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+1D8h+start+8]
      vmovss  xmm5, dword ptr [rsp+1D8h+start+4]
      vmovss  xmm4, dword ptr [rsp+1D8h+start]
    }
  }
  v91 = DCONST_DVARBOOL_melee_debug;
  if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v91);
  if ( v91->current.enabled )
  {
    v92 = &colorDkCyan;
    if ( detailTrace )
      v92 = &colorBlue;
    G_DebugLineWithDuration(&start, &end, v92, 1, 200);
  }
  EntityHitId = Trace_GetEntityHitId(&results);
  v94 = g_entities;
  v95 = EntityHitId;
  v96 = &g_entities[EntityHitId];
  if ( !g_entities )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v94 = g_entities;
  }
  v97 = (unsigned __int128)(((char *)v96 - (char *)v94) * (__int128)0x2D02D02D02D02D03i64) >> 64;
  v98 = ((unsigned __int64)v97 >> 63) + (v97 >> 8);
  if ( (unsigned int)v98 >= 0x800 )
  {
    LODWORD(skipEntityCount) = 2048;
    LODWORD(skipEntities) = ((unsigned __int64)v97 >> 63) + (v97 >> 8);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", skipEntities, skipEntityCount) )
      __debugbreak();
  }
  if ( (_WORD)v98 == 2047 )
  {
    v99 = 0;
  }
  else if ( (_WORD)v98 == 2046 )
  {
    v99 = 1;
  }
  else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v96->s.lerp.eFlags, ACTIVE, 0x10u) )
  {
    WeaponSystem = GWeapon::GetWeaponSystem();
    v99 = WeaponSystem->IsMeleeHitSuccess(WeaponSystem, ent, v96) + 3;
  }
  else
  {
    v99 = 2;
  }
  if ( searchEntityId != 2047 && searchEntityId != v95 )
    goto LABEL_83;
  if ( (int)v143 >= v99 )
  {
    if ( (int)v143 > v99 )
      goto LABEL_83;
    __asm
    {
      vmovss  xmm0, [rsp+1D8h+results.fraction]
      vcomiss xmm0, dword ptr [r12]
    }
    if ( v143 >= v99 )
    {
LABEL_83:
      v16 = detailTrace;
      goto LABEL_84;
    }
  }
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  v102 = GWeapon::ms_gWeaponSystem;
  if ( !GWeapon::ms_gWeaponSystem->IsMeleeHitSuccess(GWeapon::ms_gWeaponSystem, ent, v96) )
  {
    _RDI = v147;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+1D8h+results.fraction]
      vmovups ymm1, ymmword ptr [rsp+1D8h+results.contents]
      vmovups ymmword ptr [r12], ymm0
      vmovups xmm0, xmmword ptr [rsp+1D8h+results.allsolid]
      vmovups ymmword ptr [r12+20h], ymm1
      vmovsd  xmm1, [rsp+1D8h+results.debugHitName]
      vmovups xmmword ptr [r12+40h], xmm0
      vmovss  xmm0, dword ptr [rsp+1D8h+vEnd]
      vmovsd  qword ptr [r12+50h], xmm1
      vmovss  xmm1, dword ptr [rsp+1D8h+vEnd+4]
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm0, dword ptr [rsp+1D8h+vEnd+8]
      vmovss  dword ptr [rdi+8], xmm0
      vmovss  dword ptr [rdi+4], xmm1
    }
    v143 = v99;
    goto LABEL_83;
  }
  if ( v140 > 4 && v102->EntityHasRiotShield(v102, v96) || v140 && v102->IsMeleeFriendlyIgnore(v102, ent, v96) )
    goto LABEL_83;
  if ( detailTrace )
  {
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_g_debugLocHit, "g_debugLocHit") != v96->s.number || results.partGroup == 19 )
    {
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_melee_debug, "melee_debug") )
      {
        v121 = &colorGreen;
        if ( results.partGroup == 19 )
          v121 = &colorBlue;
        G_DebugLineWithDuration(&start, &end, v121, 1, 200);
      }
    }
    else
    {
      _RBX = &teamFlags;
      __asm { vmovdqu xmm6, cs:__xmm@ffffffffffffffffffffffffffffffff }
      do
      {
        __asm { vmovdqu xmmword ptr [rbx], xmm6 }
        _RBX = (DObjPartBits *)((char *)_RBX + 16);
        ++v21;
      }
      while ( v21 < 2 );
      G_Utils_DObjCalcPose(v96, &teamFlags);
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_g_debugLocHitTime, "g_debugLocHitTime");
      SV_Game_XModelDebugBoxes(v96, &colorYellow, Int_Internal_DebugName);
      v119 = Dvar_GetInt_Internal_DebugName(DVARINT_g_debugLocHitTime, "g_debugLocHitTime");
      CL_AddDebugLine(&start, &end, &colorGreen, 0, v119, 1);
      v120 = Dvar_GetInt_Internal_DebugName(DVARINT_g_debugLocHitTime, "g_debugLocHitTime");
      CL_AddDebugStar(&vEnd, &colorRed, 0, v120, 1);
    }
  }
  _RAX = v147;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+1D8h+results.fraction]
    vmovups ymm1, ymmword ptr [rsp+1D8h+results.contents]
    vmovups ymmword ptr [r12], ymm0
    vmovups xmm0, xmmword ptr [rsp+1D8h+results.allsolid]
    vmovups ymmword ptr [r12+20h], ymm1
    vmovsd  xmm1, [rsp+1D8h+results.debugHitName]
    vmovups xmmword ptr [r12+40h], xmm0
    vmovss  xmm0, dword ptr [rsp+1D8h+vEnd]
    vmovsd  qword ptr [r12+50h], xmm1
    vmovss  xmm1, dword ptr [rsp+1D8h+vEnd+4]
    vmovss  dword ptr [rax], xmm0
    vmovss  xmm0, dword ptr [rsp+1D8h+vEnd+8]
    vmovss  dword ptr [rax+8], xmm0
    vmovss  dword ptr [rax+4], xmm1
  }
  result = 1i64;
LABEL_106:
  _R11 = &v154;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
  return result;
}

/*
==============
G_Weapon_Melee_Trace_Detail_Enabled
==============
*/
bool G_Weapon_Melee_Trace_Detail_Enabled()
{
  const dvar_t *v0; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
    return 0;
  v0 = DVARBOOL_killswitch_melee_use_detail_world_center_enabled;
  if ( !DVARBOOL_killswitch_melee_use_detail_world_center_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_melee_use_detail_world_center_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled;
}

/*
==============
G_Weapon_Melee_internal
==============
*/

gentity_s *__fastcall G_Weapon_Melee_internal(gentity_s *ent, const GMeleeFireParms *const params, double width, double height, int *outHitEntDamage, damageReturnCode_t *outDamageReturnCode)
{
  gentity_s *v11; 
  bool isAlternate; 
  bool hasFatalDamage; 
  GHandler *Handler; 
  int v17; 
  __int64 EntityHitId; 
  gentity_s *v20; 
  int health; 
  int v22; 
  bool v23; 
  char v26; 
  const dvar_t *v27; 
  bool v28; 
  bool v29; 
  bool v30; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  int v38; 
  int v40; 
  bool v41; 
  PhysicsObject *Base; 
  unsigned int v43; 
  const RumbleInfo *v44; 
  unsigned int Index; 
  gentity_s *v46; 
  bool IsClient; 
  bool v48; 
  bool v51; 
  bool v54; 
  GHandler *v55; 
  int v56; 
  scr_string_t none; 
  int v58; 
  GCombat *v59; 
  gentity_s *result; 
  GCombat *CombatSystem; 
  damageReturnCode_t v62; 
  float fmt; 
  float fmta; 
  float heighta; 
  float heightb; 
  BOOL v70; 
  char v71; 
  char v72; 
  bool outIsAlternate[2]; 
  char v74; 
  gentity_s *enta; 
  int damage; 
  MeleeAnimType outAnimType[2]; 
  WeaponMaterialType outMaterial; 
  const GMeleeFireParms *v79; 
  int *v80; 
  playerState_s *attackerPs; 
  damageReturnCode_t *v82; 
  vec3_t position; 
  int v84[6]; 
  BgWeaponParms wp; 
  trace_t trace; 
  trace_t traceResult; 
  char v89; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _R12 = params;
  v11 = ent;
  v80 = outHitEntDamage;
  v82 = outDamageReturnCode;
  v79 = params;
  enta = ent;
  __asm
  {
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
  }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 481, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 482, ASSERT_TYPE_ASSERT, "( params )", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !_R12->wp.weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 483, ASSERT_TYPE_ASSERT, "( params->wp.weapDef )", (const char *)&queryFormat, "params->wp.weapDef") )
    __debugbreak();
  if ( outHitEntDamage )
    *outHitEntDamage = 0;
  if ( outDamageReturnCode )
    *outDamageReturnCode = DAMAGE_RETURNCODE_INVALID;
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  *(_QWORD *)outAnimType = GWeapon::ms_gWeaponSystem;
  attackerPs = G_GetEntityPlayerState(v11);
  G_Weapon_Melee_SetupTargetWeaponParams(_R12, attackerPs, &wp);
  isAlternate = wp.isAlternate;
  hasFatalDamage = _R12->hasFatalDamage;
  Handler = GHandler::getHandler();
  v17 = PM_Damage_CalcMeleeDamage(Handler, hasFatalDamage, &wp.weapon, isAlternate, 2047);
  __asm { vmovss  xmm3, dword ptr [r12+88h]; range }
  damage = v17;
  LOWORD(EntityHitId) = 2047;
  v20 = NULL;
  __asm
  {
    vmovss  [rsp+2C0h+height], xmm7
    vmovss  dword ptr [rsp+2C0h+fmt], xmm8
  }
  health = 0;
  v22 = G_Weapon_Melee_Trace(v11, &wp, v17, *(double *)&_XMM3, fmt, heighta, 0, 2047, &trace, &position);
  v23 = v22 != 0;
  if ( v22 )
  {
    EntityHitId = (__int16)Trace_GetEntityHitId(&trace);
    v20 = &g_entities[EntityHitId];
    health = v20->health;
  }
  if ( !v23 || !v20 || (v71 = 1, !(*(unsigned __int8 (__fastcall **)(_QWORD, gentity_s *))(**(_QWORD **)outAnimType + 16i64))(*(_QWORD *)outAnimType, v20)) )
    v71 = 0;
  if ( v23 && BG_IsCharacterEntityIndex((__int16)EntityHitId) )
    goto LABEL_27;
  _RAX = v79;
  __asm { vmovss  xmm1, dword ptr [rax+88h]; meleeRange }
  if ( !G_Weapon_Melee_IsProneCandidateNearby(attackerPs, *(double *)&_XMM1) )
LABEL_27:
    v26 = 0;
  else
    v26 = 1;
  v74 = v26;
  if ( !v20 || (v72 = 1, ((v20->s.eType - 12) & 0xFFFD) != 0) )
    v72 = 0;
  v27 = DVARBOOL_killswitch_melee_use_detail_world_for_vehicles;
  if ( !DVARBOOL_killswitch_melee_use_detail_world_for_vehicles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_melee_use_detail_world_for_vehicles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  v28 = v27->current.enabled && v72;
  outIsAlternate[0] = v28;
  v29 = v71 || v26 || v28;
  if ( !v23 && !v29 )
    goto LABEL_110;
  v30 = 0;
  if ( !v29 )
    goto LABEL_75;
  _R13 = v79;
  __asm
  {
    vmovaps xmmword ptr [rsp+2C0h+var_48+8], xmm6
    vmovss  xmm6, dword ptr [r13+88h]
  }
  if ( !v71 && v26 )
  {
    _RBX = DCONST_DVARFLT_melee_pronevictim_rangescale;
    if ( !DCONST_DVARFLT_melee_pronevictim_rangescale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_pronevictim_rangescale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    v35 = DCONST_DVARFLT_melee_pronevictim_widthscale;
    __asm { vmulss  xmm6, xmm0, dword ptr [r13+88h] }
    if ( !DCONST_DVARFLT_melee_pronevictim_widthscale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_pronevictim_widthscale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    __asm { vmulss  xmm8, xmm8, dword ptr [rbx+28h] }
    v36 = DCONST_DVARFLT_melee_pronevictim_heightscale;
    if ( !DCONST_DVARFLT_melee_pronevictim_heightscale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_pronevictim_heightscale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    __asm { vmulss  xmm7, xmm7, dword ptr [rbx+28h] }
    goto LABEL_59;
  }
  if ( v28 )
LABEL_59:
    LOWORD(EntityHitId) = 2047;
  __asm
  {
    vmovss  [rsp+2C0h+height], xmm7
    vmovaps xmm3, xmm6; range
    vmovss  dword ptr [rsp+2C0h+fmt], xmm8
  }
  v38 = G_Weapon_Melee_Trace(enta, &wp, damage, *(double *)&_XMM3, fmta, heightb, 1, (__int16)EntityHitId, &traceResult, &position);
  __asm { vmovaps xmm6, xmmword ptr [rsp+2C0h+var_48+8] }
  if ( v38 )
  {
    v40 = Trace_GetEntityHitId(&traceResult);
    v41 = (unsigned __int16)(traceResult.partGroup - 19) <= 1u;
    if ( v71 )
    {
      v30 = (unsigned __int16)(traceResult.partGroup - 19) <= 1u && v40 == (__int16)EntityHitId;
    }
    else if ( v74 || outIsAlternate[0] )
    {
      if ( BG_IsCharacterEntityIndex(v40) || !v74 && v72 )
      {
        LOWORD(EntityHitId) = v40;
        v30 = v41;
        v20 = &g_entities[(__int16)v40];
        health = v20->health;
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 567, ASSERT_TYPE_ASSERT, "(simTraceHitShieldPlayer || simTracePossiblyMissedPronePlayer || simTracePossiblyMissedVehicleRider)", (const char *)&queryFormat, "simTraceHitShieldPlayer || simTracePossiblyMissedPronePlayer || simTracePossiblyMissedVehicleRider") )
    {
      __debugbreak();
    }
  }
  v11 = enta;
LABEL_75:
  if ( (_WORD)EntityHitId == 2047 || !v20 )
    goto LABEL_110;
  if ( (_WORD)EntityHitId != 2046 )
  {
    Base = G_PhysicsObject_GetBase((__int16)EntityHitId, LOCAL_CLIENT_INVALID);
    if ( !Base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 594, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    v43 = Base->physicsInstances[0];
    if ( v43 != -1 )
      Physics_ApplyBulletForceInstance(PHYSICS_WORLD_ID_FIRST, v43, &position, &wp.forward, v11->s.number, 1);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, gentity_s *, gentity_s *))(**(_QWORD **)outAnimType + 32i64))(*(_QWORD *)outAnimType, v11, v20) )
    goto LABEL_110;
  v44 = BG_MeleeImpactRumble(&wp.weapon, wp.isAlternate);
  if ( v20->client )
  {
    if ( v44 )
    {
      Index = Rumble_GetIndex(v44);
      if ( Index )
      {
        v20->r.svFlags &= ~1u;
        G_Utils_AddEvent(v20, 0x94u, Index);
      }
    }
  }
  if ( G_Utils_IsClientOrActorOrAgent(v20) )
  {
    IsClient = G_Utils_IsClient(v20);
    v48 = SV_IsAgentBot(v20->s.number) != 0;
    if ( !IsClient && !v48 || Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_melee_shield_sfx_fix_enabled, "killswitch_melee_shield_sfx_fix_enabled") && v30 )
      G_Combat_SendMeleeCharacterImpactEvent(v20, v20, v11, &wp.weapon, wp.isAlternate, &position, MOD_MELEE);
  }
  else
  {
    v46 = G_Utils_SpawnEventEntity(&position, 84);
    v46->s.lerp.u.anonymous.data[0] = v11->s.number;
    v46->s.otherEntityNum = v20->s.number;
    G_Combat_GetMeleeAttackProperties(v11, &wp.weapon, wp.isAlternate, outAnimType, &outMaterial, outIsAlternate, &damage, (MeleeResult *)&enta);
    v46->s.eventParm = BG_PackMeleeParam(outAnimType[0], outMaterial, outIsAlternate[0], damage);
    v46->s.eventParm2 = (trace.surfaceFlags >> 19) & 0x3F;
  }
  if ( v20->s.number == 2046 )
    goto LABEL_110;
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v20->s.lerp.eFlags, ACTIVE, 0x10u) )
    goto LABEL_110;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+1B0h+wp.forward]
    vmovss  xmm1, dword ptr [rbp+1B0h+wp.forward+4]
  }
  v51 = wp.isAlternate;
  __asm
  {
    vmovss  [rbp+1B0h+var_1D8], xmm0
    vmovss  xmm0, dword ptr [rbp+1B0h+wp.forward+8]
    vaddss  xmm2, xmm0, cs:directionTweak
  }
  v54 = v79->hasFatalDamage;
  __asm
  {
    vmovss  [rbp+1B0h+var_1D0], xmm2
    vmovss  [rbp+1B0h+var_1D4], xmm1
  }
  v55 = GHandler::getHandler();
  v56 = PM_Damage_CalcMeleeDamage(v55, v54, &wp.weapon, v51, EntityHitId);
  if ( v56 <= 0 )
  {
LABEL_110:
    result = NULL;
    goto LABEL_111;
  }
  none = scr_const.none;
  v58 = 0;
  if ( v30 && (v58 = 16, G_Utils_IsClientOrAgent(v20)) && (v59 = GCombat::GetCombatSystem(), v59->ShieldNotifyAndDamage(v59, v20, v11, v11, (const vec3_t *)v84, &position, v56, 16, 8, &wp.weapon, wp.isAlternate, 0)) )
  {
    if ( v80 )
      *v80 = health - v20->health;
  }
  else
  {
    CombatSystem = GCombat::GetCombatSystem();
    *(_WORD *)outIsAlternate = 0;
    LOBYTE(v70) = wp.isAlternate;
    v62 = CombatSystem->Damage(CombatSystem, v20, v11, v11, (const vec3_t *)v84, &position, v56, v58, 8, &wp.weapon, v70, HITLOC_NONE, trace.modelIndex, none, 0, &trace.normal, (const GExtraDamageParams *)outIsAlternate);
    if ( v82 )
      *v82 = v62;
    if ( v80 )
      *v80 = health - v20->health;
    if ( attackerPs )
    {
      G_Utils_IsClientOrActorOrAgent(v20);
      result = v20;
      goto LABEL_111;
    }
  }
  result = v20;
LABEL_111:
  _R11 = &v89;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
G_Weapon_PlayerHasOffhandShieldDeployed
==============
*/
bool G_Weapon_PlayerHasOffhandShieldDeployed(const gentity_s *ent)
{
  return 0;
}

/*
==============
G_Weapon_PlayerHasOffhandShieldOpenToFireWeapon
==============
*/
bool G_Weapon_PlayerHasOffhandShieldOpenToFireWeapon(const gentity_s *ent)
{
  return 0;
}

/*
==============
G_Weapon_PlayerIsRiotShieldOnBack
==============
*/

char __fastcall G_Weapon_PlayerIsRiotShieldOnBack(const gentity_s *ent, __int64 a2, double _XMM2_8)
{
  GWeaponMap *Instance; 
  const playerState_s *EntityPlayerStateConst; 
  const Weapon *CurrentWeaponForPlayer; 
  unsigned int v7; 
  __int64 v13; 
  __int64 v14; 
  Weapon r_weapon; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2463, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2468, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, EntityPlayerStateConst);
  if ( BG_IsRiotShield(CurrentWeaponForPlayer, 0) )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v7 >= 0xF )
    {
      LODWORD(v14) = 15;
      LODWORD(v13) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    _RAX = BgWeaponMap::GetWeapon(Instance, EntityPlayerStateConst->weaponsEquipped[v7]);
    __asm
    {
      vmovups ymm2, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+0B8h+r_weapon.weaponIdx], ymm2
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+5], xmm0
      vmovsd  xmm1, qword ptr [rax+30h]
      vmovsd  qword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+15h], xmm1
    }
    *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    __asm { vmovd   eax, xmm2 }
    if ( (_WORD)_RAX )
    {
      if ( BG_IsRiotShield(&r_weapon, 0) )
        break;
    }
    if ( (int)++v7 >= 15 )
      return 0;
  }
  return 1;
}

/*
==============
G_Weapon_PlayerIsUsingShield
==============
*/
bool G_Weapon_PlayerIsUsingShield(const gentity_s *ent)
{
  const playerState_s *EntityPlayerStateConst; 
  GWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2373, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2376, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, EntityPlayerStateConst);
  return BG_IsRiotShield(CurrentWeaponForPlayer, 0);
}

/*
==============
G_Weapon_PlayerShieldIsInBlockingState
==============
*/
bool G_Weapon_PlayerShieldIsInBlockingState(const gentity_s *ent)
{
  const playerState_s *EntityPlayerStateConst; 
  GWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  const playerState_s *v5; 
  GWeaponMap *v6; 
  const Weapon *v7; 

  if ( !ent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2492, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2373, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
  }
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2376, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, EntityPlayerStateConst);
  if ( !BG_IsRiotShield(CurrentWeaponForPlayer, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2493, ASSERT_TYPE_ASSERT, "( G_Weapon_PlayerIsUsingShield( ent ) )", (const char *)&queryFormat, "G_Weapon_PlayerIsUsingShield( ent )") )
    __debugbreak();
  v5 = G_GetEntityPlayerStateConst(ent);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2496, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = GWeaponMap::GetInstance();
  v7 = BG_GetCurrentWeaponForPlayer(v6, v5);
  return BG_IsRiotShield(v7, 0) && (unsigned int)(v5->weapState[0].weaponState - 27) > 3;
}

/*
==============
G_Weapon_PrecacheWeaponAttachments
==============
*/
char G_Weapon_PrecacheWeaponAttachments()
{
  __int64 v0; 
  unsigned int v1; 
  DB_AssetEntryFlags *p_m_headEntries; 
  unsigned int v3; 
  DB_AssetEntryPool *AssetEntryPool; 
  char *v5; 
  __int64 assetCount; 
  __int64 v7; 
  __int64 i; 
  const char **v9; 
  const char *v10; 
  const char **v11; 
  const char *v12; 
  GetAllXAssetFunctor functor; 
  char v15[24896]; 

  LOBYTE(v0) = NetConstStrings_IsPrecacheAllowed();
  if ( (_BYTE)v0 )
  {
    functor.type = ASSET_TYPE_ATTACHMENT;
    functor.assets = (XAssetHeader *)v15;
    functor.assetCount = 0;
    functor.maxCount = 3112;
    DB_LockHashRead();
    v1 = 0;
    p_m_headEntries = &s_assetManager.table.m_headEntries;
    v3 = 0;
    AssetEntryPool = DB_GetAssetEntryPool();
    do
    {
      DB_AssetEntryPool::MutableForEachInBlock<GetAllXAssetFunctor>(AssetEntryPool, &s_assetManager.table.m_headEntries, p_m_headEntries->m_flags.m_data[0], v1, &functor);
      v1 += 64;
      ++v3;
      p_m_headEntries = (DB_AssetEntryFlags *)((char *)p_m_headEntries + 8);
    }
    while ( v3 < 0x1768 );
    DB_UnlockHashRead();
    LOBYTE(v0) = functor.assetCount;
    if ( functor.assetCount )
    {
      v5 = v15;
      assetCount = (unsigned int)functor.assetCount;
      do
      {
        v7 = *(_QWORD *)v5;
        for ( i = 0i64; (unsigned int)i < *(_DWORD *)(v7 + 72); i = (unsigned int)(i + 1) )
        {
          v9 = *(const char ***)(*(_QWORD *)(v7 + 80) + 8 * i);
          if ( v9 )
          {
            v10 = *v9;
            if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings", *(_QWORD *)&functor.type, functor.assets) )
              __debugbreak();
            GConfigStrings::GetModelIndex(GConfigStrings::ms_gConfigStrings, v10);
          }
        }
        v0 = *(_QWORD *)(v7 + 480);
        if ( v0 )
        {
          v11 = *(const char ***)(v0 + 64);
          if ( v11 )
          {
            v12 = *v11;
            if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
              __debugbreak();
            LOBYTE(v0) = GConfigStrings::GetModelIndex(GConfigStrings::ms_gConfigStrings, v12);
          }
        }
        v5 += 8;
        --assetCount;
      }
      while ( assetCount );
    }
  }
  return v0;
}

/*
==============
G_Weapon_RegisterWeaponForKillcamFXRemoval
==============
*/
void G_Weapon_RegisterWeaponForKillcamFXRemoval(int clientNum, const Weapon *weapon)
{
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  GWeapon::ms_gWeaponSystem->SendWeaponCommand(GWeapon::ms_gWeaponSystem, clientNum, 79, weapon);
}

/*
==============
G_Weapon_ReportOffhandSlotAssignError
==============
*/
void G_Weapon_ReportOffhandSlotAssignError(const playerState_s *ps, const Weapon *weapon, GOffhandSlotAssignResult result, scrContext_t *scrContext)
{
  bool v8; 
  unsigned int v9; 
  const char *v10; 
  const char *v11; 
  unsigned int v12; 
  const char *v13; 
  const char *v14; 
  unsigned int v15; 
  const char *v16; 
  const char *v17; 
  unsigned int clientNum; 
  const char *WeaponName; 
  const char *v20; 
  int v21; 
  char *v22; 
  int v23; 
  char *v24; 
  int v25; 
  char *v26; 
  int v27; 
  char *v28; 
  __int64 v29; 
  char output[1024]; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1850, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( result == SUCCESSFUL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1851, ASSERT_TYPE_ASSERT, "( result != GOffhandSlotAssignResult::SUCCESSFUL )", (const char *)&queryFormat, "result != GOffhandSlotAssignResult::SUCCESSFUL") )
    __debugbreak();
  if ( scrContext )
  {
    switch ( result )
    {
      case NO_OFFHAND_CLASS:
        clientNum = ps->clientNum;
        WeaponName = BG_GetWeaponName(weapon, output, 0x400u);
        v20 = j_va("Weapon %s does not have an offhand class set thus cannot be assigned to an offhand slot for client %d", WeaponName, clientNum);
        Scr_Error(COM_ERR_5785, scrContext, v20);
        return;
      case INVALID_WEAPON_TYPE:
        v15 = ps->clientNum;
        v16 = BG_GetWeaponName(weapon, output, 0x400u);
        v17 = j_va("Weapon %s does not have a valid offhand weapon type thus cannot be assigned to an offhand slot for client %d", v16, v15);
        Scr_Error(COM_ERR_5786, scrContext, v17);
        return;
      case INVALID_INVENTORY_TYPE:
        v12 = ps->clientNum;
        v13 = BG_GetWeaponName(weapon, output, 0x400u);
        v14 = j_va("Weapon %s does not have the inventory type offhand thus cannot be assigned to an offhand slot for client %d", v13, v12);
        Scr_Error(COM_ERR_5787, scrContext, v14);
        return;
      case NOT_IN_INVENTORY:
        v9 = ps->clientNum;
        v10 = BG_GetWeaponName(weapon, output, 0x400u);
        v11 = j_va("Weapon %s does not exist in the client inventory thus cannot be assigned to an offhand slot for client %d", v10, v9);
        Scr_Error(COM_ERR_5788, scrContext, v11);
        return;
    }
    LODWORD(v29) = result;
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1874, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled error case in G_Weapon_ReportOffhandSlotAssignError: %d", v29);
  }
  else
  {
    switch ( result )
    {
      case NO_OFFHAND_CLASS:
        v27 = ps->clientNum;
        v28 = BG_GetWeaponName(weapon, output, 0x400u);
        v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1883, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Weapon %s does not have an offhand class set thus cannot be assigned to an offhand slot for client %d", v28, v27);
        break;
      case INVALID_WEAPON_TYPE:
        v25 = ps->clientNum;
        v26 = BG_GetWeaponName(weapon, output, 0x400u);
        v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1886, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Weapon %s does not have a valid offhand weapon type thus cannot be assigned to an offhand slot for client %d", v26, v25);
        break;
      case INVALID_INVENTORY_TYPE:
        v23 = ps->clientNum;
        v24 = BG_GetWeaponName(weapon, output, 0x400u);
        v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1889, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Weapon %s does not have the inventory type offhand thus cannot be assigned to an offhand slot for client %d", v24, v23);
        break;
      case NOT_IN_INVENTORY:
        v21 = ps->clientNum;
        v22 = BG_GetWeaponName(weapon, output, 0x400u);
        v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1892, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Weapon %s does not exist in the client inventory thus cannot be assigned to an offhand slot for client %d", v22, v21);
        break;
      default:
        LODWORD(v29) = result;
        v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1895, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled error case in G_Weapon_ReportOffhandSlotAssignError: %d", v29);
        break;
    }
  }
  if ( v8 )
    __debugbreak();
}

/*
==============
G_Weapon_RocketLauncher_Fire
==============
*/
gentity_s *G_Weapon_RocketLauncher_Fire(gentity_s *ent, const Weapon *weapon, const bool isAlternate, const PlayerHandIndex hand, float spread, const BgWeaponParms *wp, const vec3_t *gunVel, const int gameTime, const BgMissileFireParms *fireParms, bool magicBullet)
{
  playerState_s *EntityPlayerState; 
  int serverTime; 
  GMissile *v16; 
  gentity_s *v18; 
  const dvar_t *v19; 
  gentity_s *v20; 
  vec3_t outLaunchPos; 
  vec3_t dir; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 880, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 881, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( EntityPlayerState )
    serverTime = EntityPlayerState->serverTime;
  else
    serverTime = level.time;
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
    __debugbreak();
  v16 = GMissile::ms_gMissileSystem;
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 887, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
    __debugbreak();
  __asm { vmovss  xmm3, [rsp+0D8h+spread]; spread }
  BgMissile::CalculateRocketLaunchTransform(v16, wp, serverTime, *(const float *)&_XMM3, &outLaunchPos, &dir);
  v18 = G_Missile_FireRocket(ent, weapon, isAlternate, hand, &outLaunchPos, &dir, gunVel, fireParms, gameTime, magicBullet);
  v19 = DCONST_DVARMPBOOL_missileMacross;
  v20 = v18;
  if ( !DCONST_DVARMPBOOL_missileMacross && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "missileMacross") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.enabled )
    G_Weapon_MacrossMissiles(ent, weapon, isAlternate, hand, wp, &outLaunchPos, gunVel, fireParms, gameTime, magicBullet);
  return v20;
}

/*
==============
G_Weapon_SelectWeapon
==============
*/
void G_Weapon_SelectWeapon(int clientNum, const Weapon *weapon)
{
  __int64 v2; 
  gentity_s *v4; 
  playerState_s *EntityPlayerState; 
  SvClient *CommonClient; 
  GHandler *Handler; 
  GWeaponMap *Instance; 
  __int64 v17; 
  __int64 v18; 

  v2 = clientNum;
  _RDI = weapon;
  if ( (unsigned int)clientNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2246, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( 2048 ) )", "clientNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", clientNum, 2048) )
    __debugbreak();
  v4 = &level.gentities[v2];
  EntityPlayerState = G_GetEntityPlayerState(v4);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2250, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v2 >= level.maxclients )
  {
    LODWORD(v18) = level.maxclients;
    LODWORD(v17) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2262, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  __asm { vmovups ymm0, ymmword ptr [rdi] }
  _RDX = &level.clients[v2].streamWeapon;
  __asm
  {
    vmovups ymmword ptr [rdx], ymm0
    vmovups xmm1, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rdx+20h], xmm1
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rdx+30h], xmm0
  }
  *(_DWORD *)&_RDX->weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
  CommonClient = SvClient::GetCommonClient(v2);
  if ( CommonClient->IsTestClient(CommonClient) )
  {
    Handler = GHandler::getHandler();
    Instance = GWeaponMap::GetInstance();
    BG_SetCurrentWeaponForPlayer(Instance, EntityPlayerState, _RDI, Handler);
    if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2285, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
      __debugbreak();
    __asm { vmovups ymm0, ymmword ptr [rdi] }
    _RCX = v4->client;
    __asm
    {
      vmovups ymmword ptr [rcx+54DCh], ymm0
      vmovups xmm1, xmmword ptr [rdi+20h]
      vmovups xmmword ptr [rcx+54FCh], xmm1
      vmovsd  xmm0, qword ptr [rdi+30h]
      vmovsd  qword ptr [rcx+550Ch], xmm0
    }
    *(_DWORD *)&_RCX->sess.oldcmd.weapon.weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
  }
  else
  {
    if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
      __debugbreak();
    GWeapon::ms_gWeaponSystem->SendWeaponCommand(GWeapon::ms_gWeaponSystem, v2, 97, _RDI);
  }
}

/*
==============
G_Weapon_SetEquippedOffHand
==============
*/
void G_Weapon_SetEquippedOffHand(int clientNum, const Weapon *offHand)
{
  __int64 v2; 
  GWeapon *WeaponSystem; 

  v2 = clientNum;
  if ( (unsigned int)clientNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2300, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( 2048 ) )", "clientNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", clientNum, 2048) )
    __debugbreak();
  if ( !G_GetEntityPlayerState(&level.gentities[v2]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2304, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !SV_IsAgent(v2) )
  {
    WeaponSystem = GWeapon::GetWeaponSystem();
    BG_AssertOffhandIndexOrNone(offHand);
    WeaponSystem->SendWeaponCommand(WeaponSystem, v2, 119, offHand);
  }
}

/*
==============
G_Weapon_SetupBulletParams
==============
*/
void G_Weapon_SetupBulletParams(const gentity_s *const attacker, const int gameTime, const int eventType, const unsigned int eventParm, GWeaponFireParms *const outParams)
{
  GHandler *Handler; 
  const dvar_t *v23; 
  PlayerHandIndex hand; 
  char *fmt; 

  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps [rsp+88h+var_48], xmm7
  }
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1112, ASSERT_TYPE_ASSERT, "( attacker != nullptr )", (const char *)&queryFormat, "attacker != nullptr") )
    __debugbreak();
  if ( !outParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1113, ASSERT_TYPE_ASSERT, "( outParams != nullptr )", (const char *)&queryFormat, "outParams != nullptr") )
    __debugbreak();
  if ( !attacker->agent && !attacker->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1114, ASSERT_TYPE_ASSERT, "( ( attacker->agent != nullptr ) || ( attacker->client != nullptr ) )", (const char *)&queryFormat, "( attacker->agent != nullptr ) || ( attacker->client != nullptr )") )
    __debugbreak();
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  Handler = GHandler::getHandler();
  _RDI = G_GetEntityPlayerStateConst(attacker);
  G_Weapon_SetupWeaponParams(attacker, gameTime, outParams);
  if ( attacker->agent )
  {
    __asm { vmovss  xmm6, dword ptr [rcx+8F94h] }
  }
  else
  {
    _RAX = attacker->client;
    __asm { vmovss  xmm6, dword ptr [rax+5E9Ch] }
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2941, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+730h]
    vcmpeqss xmm2, xmm0, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vblendvps xmm6, xmm6, xmm1, xmm2
    vmovaps xmm3, xmm6; aimSpreadScale
  }
  *(double *)&_XMM0 = BG_CalculateFinalSpreadForWeapon(Handler, _RDI, &outParams->wp.weapon, *(float *)&_XMM3);
  __asm { vmovaps xmm7, xmm0 }
  if ( attacker->client )
  {
    v23 = DCONST_DVARBOOL_bg_aimSpreadDebugLog;
    if ( !DCONST_DVARBOOL_bg_aimSpreadDebugLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_aimSpreadDebugLog") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( v23->current.enabled )
    {
      _RAX = attacker->client;
      __asm
      {
        vcvtss2sd xmm2, xmm6, xmm6
        vmovq   r8, xmm2
        vmovss  xmm3, dword ptr [rax+744h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      LODWORD(fmt) = level.time;
      Com_Printf(17, "S: G_Weapon_Fire: client->currentAimSpreadScale: %.5f Aim spread scale: %.5f Server Time: %d\n", *(double *)&_XMM2, *(double *)&_XMM3, fmt);
    }
  }
  hand = BG_GetHandFromWeaponEvent(eventType);
  __asm { vmovaps xmm3, xmm7; spread }
  G_Bullet_SetupFireParams(attacker, attacker, gameTime, *(const float *)&_XMM3, 0, hand, eventParm, outParams);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
  }
}

/*
==============
G_Weapon_SetupLevelWeaponDef
==============
*/
void G_Weapon_SetupLevelWeaponDef(const bool registerWeapons)
{
  void (__fastcall *v2)(const unsigned int, const char *); 

  if ( !bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2222, ASSERT_TYPE_ASSERT, "(bg_lastParsedWeaponIndex != 0)", "%s\n\tG_SetupWeaponDef should be called first", "bg_lastParsedWeaponIndex != 0") )
    __debugbreak();
  v2 = G_Weapon_SetupNetConstWeapons_Callback;
  if ( !registerWeapons )
    v2 = G_Weapon_VerifyNetConstWeapons_Callback;
  NetConstStrings_CallForLevelWeaponStrings(v2);
}

/*
==============
G_Weapon_SetupMeleeParams
==============
*/
void G_Weapon_SetupMeleeParams(const gentity_s *const ent, const int gameTime, GMeleeFireParms *const outParams)
{
  GWeaponMap *Instance; 
  const playerState_s *EntityPlayerStateConst; 
  int v17; 
  GHandler *Handler; 
  GHandler *v22; 
  GAntiLag *v23; 
  __int16 meleeChargeEnt; 
  bool v26; 
  __int16 v27; 
  gentity_s *v28; 
  bool hasFatalDamage; 
  bool v30; 
  bool v31; 
  vec3_t *outConeUp; 
  int outMeleeDamageTime; 
  int outMeleeTime; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 
  char v40; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RBX = outParams;
  Instance = GWeaponMap::GetInstance();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1234, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  memset_0(_RBX, 0, sizeof(GMeleeFireParms));
  _RAX = BG_GetWeaponForEntity(Instance, &ent->s);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups xmm6, xmmword ptr [rax+20h]
    vmovsd  xmm7, qword ptr [rax+30h]
  }
  v17 = *(_DWORD *)&_RAX->weaponCamo;
  __asm { vmovups ymmword ptr [rsp+0E8h+axis], ymm0 }
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->weapCommon.weapFlags, ACTIVE, 0x22u) && (_RAX = BG_GetFirstEquippedWeaponBySlot(Instance, EntityPlayerStateConst, WEAPON_SLOT_MELEE), _RAX->weaponIdx) )
  {
    __asm
    {
      vmovups ymm1, ymmword ptr [rax]
      vmovups xmm6, xmmword ptr [rax+20h]
      vmovsd  xmm7, qword ptr [rax+30h]
    }
    v17 = *(_DWORD *)&_RAX->weaponCamo;
  }
  else
  {
    __asm { vmovups ymm1, ymmword ptr [rsp+0E8h+axis] }
  }
  __asm
  {
    vmovups ymmword ptr [rbx+48h], ymm1
    vmovups xmmword ptr [rbx+68h], xmm6
    vmovsd  qword ptr [rbx+78h], xmm7
  }
  *(_DWORD *)&_RBX->wp.weapon.weaponCamo = v17;
  __asm { vmovd   esi, xmm1 }
  _RBX->wp.isAlternate = 0;
  if ( (unsigned __int16)_RSI > bg_lastParsedWeaponIndex )
  {
    LODWORD(outConeUp) = (unsigned __int16)_RSI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", outConeUp, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  _RSI = (unsigned __int16)_RSI;
  if ( !bg_weaponDefs[(unsigned __int16)_RSI] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  _RBX->wp.weapDef = bg_weaponDefs[_RSI];
  if ( BG_IsThirdPersonMode(Instance, EntityPlayerStateConst) )
  {
    Handler = GHandler::getHandler();
    BG_GetThirdPersonMeleeCone(Handler, EntityPlayerStateConst, &_RBX->wp.muzzleTrace, &_RBX->wp.forward, &_RBX->wp.right, &_RBX->wp.up);
  }
  else
  {
    G_Client_GetWeaponOrigin(EntityPlayerStateConst, &_RBX->wp.muzzleTrace);
    v22 = GHandler::getHandler();
    BG_GetPlayerViewDirection(EntityPlayerStateConst, &_RBX->wp.forward, &_RBX->wp.right, &_RBX->wp.up, v22, 0);
  }
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v23 = GAntiLag::ms_gAntiLagData;
  if ( GAntiLag::ms_gAntiLagData->ShouldPerformFireMeleeAntiLag(GAntiLag::ms_gAntiLagData, gameTime, ent) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rsp+0E8h+axis], ymm0
      vmovss  xmm0, dword ptr [rbx+20h]
      vmovss  dword ptr [rsp+0E8h+axis+20h], xmm0
    }
    AxisToAngles(&axis, &angles);
    GAntiLag::RewindPlayerMuzzleTrace(v23, gameTime, ent->s.number, &_RBX->wp.muzzleTrace, &angles);
  }
  meleeChargeEnt = EntityPlayerStateConst->meleeChargeEnt;
  v26 = meleeChargeEnt >= 0 && (unsigned __int16)meleeChargeEnt <= 0x7FEu;
  *(double *)&_XMM0 = BG_GetMeleeRange(Instance, EntityPlayerStateConst, v26);
  __asm { vmovss  dword ptr [rbx+88h], xmm0 }
  _RBX->hasFatalDamage = EntityPlayerStateConst->weapState[0].weaponState == 23;
  _RBX->isAltMelee = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->weapCommon.weapFlags, ACTIVE, 0x26u);
  _RBX->targetEntity = 2047;
  v27 = EntityPlayerStateConst->meleeChargeEnt;
  if ( v27 >= 0 && (unsigned __int16)v27 <= 0x7FEu )
  {
    v28 = &g_entities[v27];
    if ( BG_IsCharacterEntity(&v28->s) )
    {
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2004, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v28->s.lerp.eFlags, ACTIVE, 0x11u) )
      {
        hasFatalDamage = _RBX->hasFatalDamage;
        _RBX->targetEntity = v28->s.number;
        _RBX->hasTargetLock = 1;
        if ( BG_Skydive_IsSkydiving(EntityPlayerStateConst) )
        {
          v30 = 0;
        }
        else
        {
          v30 = 0;
          if ( BG_Ladder_IsDualWieldingAllowed(EntityPlayerStateConst) )
            v30 = EntityPlayerStateConst->weapCommon.lastWeaponHand == WEAPON_HAND_LEFT;
        }
        v31 = BG_UsingAlternate(EntityPlayerStateConst);
        BG_GetMeleeTime(Instance, EntityPlayerStateConst, v31, v30, hasFatalDamage, &outMeleeTime, &outMeleeDamageTime, &_RBX->targetLockTime);
      }
    }
  }
  _R11 = &v40;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
G_Weapon_SetupMissileParams
==============
*/
void G_Weapon_SetupMissileParams(const gentity_s *const attacker, const int gameTime, const int eventType, const unsigned int eventParm, GWeaponFireParms *const outParams)
{
  GHandler *Handler; 
  float v19; 
  int IsEntityInUse; 
  unsigned int weapLockedEntnum; 
  gagent_s *agent; 
  gclient_s *client; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps [rsp+68h+var_38], xmm7
  }
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1156, ASSERT_TYPE_ASSERT, "( attacker != nullptr )", (const char *)&queryFormat, "attacker != nullptr") )
    __debugbreak();
  if ( !attacker->agent && !attacker->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1157, ASSERT_TYPE_ASSERT, "( (attacker->agent != nullptr) || (attacker->client != nullptr) )", (const char *)&queryFormat, "(attacker->agent != nullptr) || (attacker->client != nullptr)") )
    __debugbreak();
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  Handler = GHandler::getHandler();
  _RDI = G_GetEntityPlayerStateConst(attacker);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1162, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
    __debugbreak();
  _RBX = outParams;
  G_Weapon_SetupWeaponParams(attacker, gameTime, outParams);
  if ( attacker->agent )
  {
    __asm { vmovss  xmm6, dword ptr [rax+8F94h] }
  }
  else
  {
    _RAX = attacker->client;
    __asm { vmovss  xmm6, dword ptr [rax+5E9Ch] }
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2941, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+730h]
    vcmpeqss xmm1, xmm0, cs:__real@3f800000
    vxorps  xmm7, xmm7, xmm7
    vblendvps xmm3, xmm6, xmm7, xmm1; aimSpreadScale
  }
  *(double *)&_XMM0 = BG_CalculateFinalSpreadForWeapon(Handler, _RDI, &outParams->wp.weapon, *(float *)&_XMM3);
  __asm { vmovss  dword ptr [rbx+0A4h], xmm0 }
  if ( (_RDI->weapCommon.weapLockFlags & 2) != 0 )
  {
    outParams->missile.missileParams.valid = 1;
    outParams->missile.missileParams.lockon = 1;
    if ( (_RDI->weapCommon.weapLockFlags & 0x40) != 0 )
    {
      outParams->bullet.randSeed = 2047;
      *(_QWORD *)&outParams->deploy.deployTransform.row0.y = *(_QWORD *)_RDI->weapCommon.weapLockedPos.v;
      v19 = _RDI->weapCommon.weapLockedPos.v[2];
    }
    else
    {
      IsEntityInUse = G_IsEntityInUse(_RDI->weapCommon.weapLockedEntnum);
      outParams->missile.missileParams.valid = IsEntityInUse != 0;
      if ( IsEntityInUse )
        weapLockedEntnum = _RDI->weapCommon.weapLockedEntnum;
      else
        weapLockedEntnum = 2047;
      outParams->bullet.randSeed = weapLockedEntnum;
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND) )
      {
        if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1190, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::SP)", "%s\n\tTarget system supported in SP only", "Com_GameMode_GetActiveGameMode() == GameModeType::SP") )
          __debugbreak();
        if ( outParams->missile.missileParams.valid )
          G_Targets_GetOffset(&g_entities[_RDI->weapCommon.weapLockedEntnum], &outParams->missile.missileParams.targetPosOrOffset);
        else
          G_Targets_GetOffset(NULL, &outParams->missile.missileParams.targetPosOrOffset);
        goto LABEL_37;
      }
      agent = attacker->agent;
      if ( agent )
      {
        *(_QWORD *)&outParams->deploy.deployTransform.row0.y = *(_QWORD *)agent->lockedTargetOffset.v;
        v19 = agent->lockedTargetOffset.v[2];
      }
      else
      {
        client = attacker->client;
        *(_QWORD *)&outParams->deploy.deployTransform.row0.y = *(_QWORD *)client->lockedTargetOffset.v;
        v19 = client->lockedTargetOffset.v[2];
      }
    }
    outParams->bullet.rangeScale = v19;
LABEL_37:
    if ( (_RDI->weapCommon.weapLockFlags & 4) != 0 )
      outParams->missile.missileParams.topFire = 1;
    goto LABEL_47;
  }
  if ( _RDI->airburstMarkDistance )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rax+70Ch]
      vcomiss xmm0, xmm7
    }
    if ( _RDI->airburstMarkDistance )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_OFFHAND_END) && BG_WeaponDef(&outParams->wp.weapon, 0)->isAirburstWeapon )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1217, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_AIRBURST ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_AIRBURST )") )
          __debugbreak();
        outParams->missile.missileParams.valid = 1;
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_airburstAdjustDistance, "airburstAdjustDistance");
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vaddss  xmm2, xmm1, xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rax+70Ch]
          vdivss  xmm1, xmm2, xmm0
          vmovss  dword ptr [rbx+98h], xmm1
        }
      }
    }
  }
LABEL_47:
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_28]
    vmovaps xmm7, [rsp+68h+var_38]
  }
}

/*
==============
G_Weapon_SetupNetConstWeapons_Callback
==============
*/
void G_Weapon_SetupNetConstWeapons_Callback(const unsigned int weaponIndex, const char *name)
{
  unsigned int NumWeapons; 
  GHandler *Handler; 
  unsigned __int8 GameTypeQuick; 
  __int64 v9; 
  __int64 v10; 
  __m256i v11; 
  Weapon result; 

  if ( !weaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2122, ASSERT_TYPE_ASSERT, "( weaponIndex != 0 )", (const char *)&queryFormat, "weaponIndex != 0") )
    __debugbreak();
  NumWeapons = BG_GetNumWeapons();
  Handler = GHandler::getHandler();
  GameTypeQuick = GHandler::GetGameTypeQuick(Handler);
  _RAX = BG_Weapons_RegisterWeaponForName(&result, name, G_Items_SetupWeapon, (const GameTypeQuick_t)GameTypeQuick, Handler);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+0C8h+var_88], ymm0
  }
  if ( NumWeapons == BG_GetNumWeapons() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2131, ASSERT_TYPE_ASSERT, "(initialWeaponCount != BG_GetNumWeapons())", "%s\n\tWeapon '%s' was not added during parsing, and is most likely a duplicate. Will cause NetConstStrings errors since offsets won't match", "initialWeaponCount != BG_GetNumWeapons()", name) )
    __debugbreak();
  if ( v11.m256i_u16[0] != weaponIndex )
  {
    LODWORD(v10) = weaponIndex;
    LODWORD(v9) = v11.m256i_u16[0];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2132, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx ) == ( weaponIndex )", "weapon.weaponIdx == weaponIndex\n\t%i, %i", v9, v10) )
      __debugbreak();
  }
}

/*
==============
G_Weapon_SetupOffhandParams
==============
*/
void G_Weapon_SetupOffhandParams(const gentity_s *const ent, const Weapon *offhandWeapon, const int gameTime, BgWeaponParms *const outParams)
{
  const WeaponDef *v11; 
  bool isAlternate; 

  _RBX = outParams;
  _RBP = offhandWeapon;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1316, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1317, ASSERT_TYPE_ASSERT, "( outParams != nullptr )", (const char *)&queryFormat, "outParams != nullptr") )
    __debugbreak();
  memset_0(_RBX, 0, sizeof(BgWeaponParms));
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0]
    vmovups ymmword ptr [rbx+48h], ymm0
    vmovups xmm1, xmmword ptr [rbp+20h]
    vmovups xmmword ptr [rbx+68h], xmm1
    vmovsd  xmm0, qword ptr [rbp+30h]
    vmovsd  qword ptr [rbx+78h], xmm0
  }
  *(_DWORD *)&_RBX->weapon.weaponCamo = *(_DWORD *)&_RBP->weaponCamo;
  v11 = BG_WeaponDef(_RBP, 0);
  isAlternate = _RBX->isAlternate;
  _RBX->weapDef = v11;
  if ( !BG_IsOffhandWeaponType(&_RBX->weapon, isAlternate) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1325, ASSERT_TYPE_ASSERT, "(BG_IsOffhandWeaponType( outParams->weapon, outParams->isAlternate ))", (const char *)&queryFormat, "BG_IsOffhandWeaponType( outParams->weapon, outParams->isAlternate )") )
    __debugbreak();
  if ( BG_GetWeaponType(&_RBX->weapon, _RBX->isAlternate) == WEAPTYPE_GRENADE )
    G_Weapon_CalcMuzzlePoints(ent, gameTime, _RBX);
}

/*
==============
G_Weapon_SetupWeaponDef
==============
*/
_BOOL8 G_Weapon_SetupWeaponDef(bool isGameServer)
{
  bool v2; 
  Weapon outWeapon; 

  Com_DPrintf(17, "----------------------\n");
  Com_DPrintf(17, "Game: G_SetupWeaponDef\n");
  v2 = bg_lastParsedWeaponIndex == 0;
  if ( bg_lastParsedWeaponIndex )
  {
    NetConstStrings_CallForLevelWeaponStrings(G_Weapon_VerifyNetConstWeapons_Callback);
  }
  else
  {
    Com_SetWeaponInfoMemory(bg_lastParsedWeaponIndex + 1);
    BG_WeaponsSetup_InitDefaultsAndAnimations(isGameServer);
    ++g_accuracyBufferIndex;
    NetConstStrings_CallForCommonWeaponStrings(G_Weapon_SetupNetConstWeapons_Callback);
    if ( BG_Weapons_GetFullWeaponForName("defaultweapon", &outWeapon, BG_FindBaseWeaponForName) )
      bg_defaultWeaponIndex = outWeapon.weaponIdx;
    else
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FEB1B0, 648i64, "defaultweapon");
    G_Weapon_PrecacheWeaponAttachments();
  }
  Com_DPrintf(17, "----------------------\n");
  return v2;
}

/*
==============
G_Weapon_SetupWeaponParams
==============
*/
void G_Weapon_SetupWeaponParams(const gentity_s *const attacker, const int gameTime, GWeaponFireParms *outParams)
{
  GWeaponMap *Instance; 
  bool inAltWeaponMode; 
  const playerState_s *EntityPlayerStateConst; 

  _RBX = outParams;
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1083, ASSERT_TYPE_ASSERT, "( attacker != nullptr )", (const char *)&queryFormat, "attacker != nullptr") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1084, ASSERT_TYPE_ASSERT, "( outParams != nullptr )", (const char *)&queryFormat, "outParams != nullptr") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  memset_0(_RBX, 0, sizeof(GWeaponFireParms));
  _RAX = BG_GetWeaponForEntity(Instance, &attacker->s);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx+48h], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbx+68h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rbx+78h], xmm0
  }
  *(_DWORD *)&_RBX->wp.weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  inAltWeaponMode = attacker->s.inAltWeaponMode;
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(attacker);
  if ( EntityPlayerStateConst )
    inAltWeaponMode = BG_GetAltWeaponModeAsStoredInEntityState(EntityPlayerStateConst, Instance);
  _RBX->wp.isAlternate = inAltWeaponMode;
  _RBX->wp.weapDef = BG_WeaponDef(&_RBX->wp.weapon, inAltWeaponMode);
  G_Weapon_CalcMuzzlePoints(attacker, gameTime, &_RBX->wp);
}

/*
==============
G_Weapon_ShouldPlayMeleeChargeDeathAnim
==============
*/
_BOOL8 G_Weapon_ShouldPlayMeleeChargeDeathAnim(const int damageMOD, const gentity_s *attacker, int victimEntId)
{
  const playerState_s *EntityPlayerStateConst; 

  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1561, ASSERT_TYPE_ASSERT, "(attacker)", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  return damageMOD == 8 && (EntityPlayerStateConst = G_GetEntityPlayerStateConst(attacker)) != NULL && EntityPlayerStateConst->meleeChargeEnt == victimEntId && EntityPlayerStateConst->weapState[0].weaponState == 23;
}

/*
==============
G_Weapon_StartChargeMelee
==============
*/
void G_Weapon_StartChargeMelee(gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1660, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  GScr_Notify(ent, scr_const.melee_charge_start, 0);
}

/*
==============
G_Weapon_StartSwipeMelee
==============
*/
void G_Weapon_StartSwipeMelee(gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1667, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  GScr_Notify(ent, scr_const.melee_swipe_start, 0);
}

/*
==============
G_Weapon_TakePlayerWeapon
==============
*/
__int64 G_Weapon_TakePlayerWeapon(playerState_s *ps, const Weapon *weapon)
{
  const gentity_s *v4; 
  scrContext_t *v5; 
  GWeaponMap *Instance; 
  const Weapon *OffHandWeaponForPlayer; 
  int v8; 
  int time; 
  bool v10; 
  GHandler *Handler; 
  unsigned int v12; 
  GHandler *v13; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2651, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = &g_entities[ps->clientNum];
  if ( !G_Utils_IsClientOrAgent(v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2655, ASSERT_TYPE_ASSERT, "( G_Utils_IsClientOrAgent( ent ) )", (const char *)&queryFormat, "G_Utils_IsClientOrAgent( ent )") )
    __debugbreak();
  v5 = ScriptContext_Server();
  GScr_Weapon_AddParam(v5, weapon, 0);
  GScr_Notify(v4, scr_const.weapon_taken, 1u);
  Instance = GWeaponMap::GetInstance();
  OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(Instance, ps);
  v8 = memcmp_0(weapon, OffHandWeaponForPlayer, 0x3Cui64);
  time = level.time;
  v10 = v8 == 0;
  Handler = GHandler::getHandler();
  v12 = BG_TakePlayerWeapon(Instance, ps, Handler, weapon, time);
  if ( v12 && v10 )
  {
    G_Weapon_SetEquippedOffHand(ps->clientNum, &NULL_WEAPON);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 916, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( BgWeaponMap::GetWeapon(Instance, ps->weapCommon.offHandHandle)->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2673, ASSERT_TYPE_ASSERT, "( BG_IsNullWeapon( BG_GetOffHandWeaponForPlayer( weaponMap, ps ) ) )", (const char *)&queryFormat, "BG_IsNullWeapon( BG_GetOffHandWeaponForPlayer( weaponMap, ps ) )") )
      __debugbreak();
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u) )
    {
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 1u);
      ps->grenadeTimeLeft = 0;
      v13 = GHandler::getHandler();
      PM_ResetWeaponState(Instance, ps, v13);
    }
  }
  BG_Execution_MarkExecutionWeaponDirty(ps);
  return v12;
}

/*
==============
G_Weapon_ThrowGrenade
==============
*/

gentity_s *__fastcall G_Weapon_ThrowGrenade(gentity_s *ent, const int gameTime, const BgWeaponParms *wp, double _XMM3_8)
{
  bool v13; 
  bool v16; 
  const WeaponDef *weapDef; 
  bool v37; 
  bool isAlternate; 
  const playerState_s *EntityPlayerState; 
  GWeaponMap *Instance; 
  int fuseTime; 
  __int64 hand; 
  int v90; 
  int v91; 
  int v92; 
  int outSpeed; 
  int outSpeedUp; 
  vec3_t dir; 
  void *retaddr; 

  _R11 = &retaddr;
  _RSI = wp;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
  }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 745, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 746, ASSERT_TYPE_ASSERT, "( wp )", (const char *)&queryFormat, "wp") )
    __debugbreak();
  if ( BG_GetWeaponType(&_RSI->weapon, _RSI->isAlternate) != WEAPTYPE_GRENADE )
  {
    LODWORD(hand) = BG_GetWeaponType(&_RSI->weapon, _RSI->isAlternate);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 747, ASSERT_TYPE_ASSERT, "( BG_GetWeaponType( wp->weapon, wp->isAlternate ) ) == ( WEAPTYPE_GRENADE )", "BG_GetWeaponType( wp->weapon, wp->isAlternate ) == WEAPTYPE_GRENADE\n\t%i, %i", hand, 3) )
      __debugbreak();
  }
  G_Missile_GetScaledProjectileSpeed(ent, &_RSI->weapon, _RSI->isAlternate, &outSpeed, &outSpeedUp);
  _RAX = ent->agent;
  v13 = _RAX == NULL;
  if ( _RAX )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rax+0D208h]
      vmovss  xmm2, dword ptr [rax+0D20Ch]
    }
  }
  else
  {
    v13 = ent->client == NULL;
    if ( !ent->client )
    {
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 760, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client");
      v13 = !v16;
      if ( v16 )
        __debugbreak();
    }
    _RAX = ent->client;
    __asm
    {
      vmovss  xmm1, dword ptr [rax+5FB4h]
      vmovss  xmm2, dword ptr [rax+5FB8h]
    }
  }
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vcomiss xmm1, xmm3
  }
  if ( !v13 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rbp+57h+outSpeed]
      vmulss  xmm1, xmm0, xmm1
      vcvttss2si ecx, xmm1
    }
    outSpeed = _ECX;
  }
  __asm { vcomiss xmm2, xmm3 }
  if ( !v13 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rbp+57h+outSpeedUp]
      vmulss  xmm1, xmm0, xmm2
      vcvttss2si eax, xmm1
    }
    outSpeedUp = _EAX;
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rsi]
    vmovss  xmm7, dword ptr [rsi+4]
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, ecx
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rbp+57h+dir], xmm0
    vmulss  xmm1, xmm7, xmm2
    vmulss  xmm2, xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+57h+dir+4], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
  }
  weapDef = _RSI->weapDef;
  __asm
  {
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rbp+57h+dir+8], xmm1
  }
  v37 = weapDef->iProjectileSpeedForward == 0;
  if ( weapDef->iProjectileSpeedForward )
  {
    __asm
    {
      vmulss  xmm1, xmm7, xmm7
      vmulss  xmm0, xmm6, xmm6
      vmovaps [rsp+0E0h+var_68+8], xmm8
      vaddss  xmm8, xmm1, xmm0
      vcomiss xmm8, xmm3
    }
    if ( v37 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    _RAX = _RSI->weapDef;
    __asm
    {
      vmovaps xmm1, xmm8
      vmovaps xmm8, [rsp+0E0h+var_68+8]
      vrsqrtss xmm4, xmm1, xmm1
      vmovd   xmm3, dword ptr [rax+714h]
      vcvtdq2ps xmm3, xmm3
      vmulss  xmm0, xmm6, xmm4
      vmulss  xmm2, xmm0, xmm3
      vaddss  xmm2, xmm2, dword ptr [rbp+57h+dir]
      vmulss  xmm0, xmm7, xmm4
      vmulss  xmm3, xmm0, xmm3
      vmovss  dword ptr [rbp+57h+dir], xmm2
      vaddss  xmm2, xmm3, dword ptr [rbp+57h+dir+4]
      vmovss  dword ptr [rbp+57h+dir+4], xmm2
    }
  }
  isAlternate = _RSI->isAlternate;
  EntityPlayerState = G_GetEntityPlayerState(ent);
  Instance = GWeaponMap::GetInstance();
  LOBYTE(EntityPlayerState) = BgMissile::ShouldBePredicted(Instance, EntityPlayerState, &_RSI->weapon, isAlternate);
  fuseTime = BG_WeaponFuseTime(&_RSI->weapon, _RSI->isAlternate);
  _RBX = G_Missile_FireGrenade(ent, &_RSI->muzzleTrace, &dir, &_RSI->weapon, _RSI->isAlternate, WEAPON_HAND_DEFAULT, 1, fuseTime, (_BYTE)EntityPlayerState == 0, gameTime);
  if ( !G_GetEntityPlayerState(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 787, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, dword ptr [rbp+57h+dir+4]
    vmovss  xmm4, dword ptr [rbp+57h+dir]
    vmovss  xmm5, dword ptr [rbp+57h+dir+8]
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm6, xmm4, xmm2
    vmovss  dword ptr [rbp+57h+dir], xmm6
    vmulss  xmm0, xmm7, xmm2
    vmovaps xmm7, [rsp+0E0h+var_58+8]
    vmovss  dword ptr [rbp+57h+dir+4], xmm0
    vmulss  xmm3, xmm5, xmm2
    vmovss  dword ptr [rbp+57h+dir+8], xmm3
    vmulss  xmm1, xmm0, dword ptr [rdi+40h]
    vmulss  xmm0, xmm6, dword ptr [rdi+3Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [rdi+44h]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm4
    vaddss  xmm3, xmm0, dword ptr [rbx+28h]
    vmovaps xmm6, [rsp+0E0h+var_48+8]
    vmovss  dword ptr [rbx+28h], xmm3
    vmulss  xmm0, xmm4, dword ptr [rbp+57h+dir+4]
    vaddss  xmm2, xmm0, dword ptr [rbx+2Ch]
    vmovss  dword ptr [rbx+2Ch], xmm2
    vmulss  xmm0, xmm4, dword ptr [rbp+57h+dir+8]
    vaddss  xmm2, xmm0, dword ptr [rbx+30h]
    vmovss  [rbp+57h+var_90], xmm3
    vmovss  dword ptr [rbx+30h], xmm2
  }
  if ( (v90 & 0x7F800000) == 2139095040 )
    goto LABEL_36;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+2Ch]
    vmovss  [rbp+57h+var_90], xmm0
  }
  if ( (v91 & 0x7F800000) == 2139095040 )
    goto LABEL_36;
  __asm { vmovss  [rbp+57h+var_90], xmm2 }
  if ( (v92 & 0x7F800000) == 2139095040 )
  {
LABEL_36:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 793, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( m->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( m->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( m->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( m->s.lerp.pos.trDelta )[2] )") )
      __debugbreak();
  }
  return _RBX;
}

/*
==============
G_Weapon_UseOffHand
==============
*/
void G_Weapon_UseOffHand(gentity_s *const ent, const Weapon *r_offHandWeapon, const int gameTime)
{
  int v8; 
  scrContext_t *v10; 
  const playerState_s *EntityPlayerState; 
  GWeaponMap *Instance; 
  OffhandSlot WeaponOffhandSlot; 
  scr_string_t offhand_fired; 
  BgWeaponParms wp; 

  _RDI = r_offHandWeapon;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1316, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  memset_0(&wp, 0, sizeof(wp));
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups xmm1, xmmword ptr [rdi+20h]
  }
  v8 = *(_DWORD *)&_RDI->weaponCamo;
  __asm
  {
    vmovups ymmword ptr [rsp+0E8h+wp.weapon.weaponIdx], ymm0
    vmovsd  xmm0, qword ptr [rdi+30h]
  }
  *(_DWORD *)&wp.weapon.weaponCamo = v8;
  __asm
  {
    vmovsd  qword ptr [rsp+0E8h+wp.weapon.attachmentVariationIndices+15h], xmm0
    vmovups xmmword ptr [rsp+0E8h+wp.weapon.attachmentVariationIndices+5], xmm1
  }
  wp.isAlternate = 0;
  wp.weapDef = BG_WeaponDef(_RDI, 0);
  if ( !BG_IsOffhandWeaponType(&wp.weapon, wp.isAlternate) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1325, ASSERT_TYPE_ASSERT, "(BG_IsOffhandWeaponType( outParams->weapon, outParams->isAlternate ))", (const char *)&queryFormat, "BG_IsOffhandWeaponType( outParams->weapon, outParams->isAlternate )") )
    __debugbreak();
  if ( BG_GetWeaponType(&wp.weapon, wp.isAlternate) == WEAPTYPE_GRENADE )
    G_Weapon_CalcMuzzlePoints(ent, gameTime, &wp);
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
    __debugbreak();
  BgMissile::UseOffhand(GMissile::ms_gMissileSystem, ent->s.number, gameTime, &wp);
  v10 = ScriptContext_Server();
  GScr_Weapon_AddParam(v10, &wp.weapon, wp.isAlternate);
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1543, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature((Com_GameMode_Feature)132) || (Instance = GWeaponMap::GetInstance(), WeaponOffhandSlot = BG_GetWeaponOffhandSlot(EntityPlayerState, Instance, &wp.weapon), offhand_fired = scr_const.special_weapon_fired, WeaponOffhandSlot != OFFHAND_SLOT_SPECIAL) )
    offhand_fired = scr_const.offhand_fired;
  GScr_Notify(ent, offhand_fired, 1u);
}

/*
==============
G_Weapon_UseOffHandWithParams
==============
*/
void G_Weapon_UseOffHandWithParams(gentity_s *const ent, const int gameTime, const BgWeaponParms *const wp)
{
  scrContext_t *v6; 
  Weapon *p_weapon; 
  const playerState_s *EntityPlayerState; 
  GWeaponMap *Instance; 
  OffhandSlot WeaponOffhandSlot; 
  scr_string_t offhand_fired; 

  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
    __debugbreak();
  BgMissile::UseOffhand(GMissile::ms_gMissileSystem, ent->s.number, gameTime, wp);
  v6 = ScriptContext_Server();
  p_weapon = &wp->weapon;
  GScr_Weapon_AddParam(v6, &wp->weapon, wp->isAlternate);
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1543, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature((Com_GameMode_Feature)132) || (Instance = GWeaponMap::GetInstance(), WeaponOffhandSlot = BG_GetWeaponOffhandSlot(EntityPlayerState, Instance, p_weapon), offhand_fired = scr_const.special_weapon_fired, WeaponOffhandSlot != OFFHAND_SLOT_SPECIAL) )
    offhand_fired = scr_const.offhand_fired;
  GScr_Notify(ent, offhand_fired, 1u);
}

/*
==============
G_Weapon_VerifyNetConstWeapons_Callback
==============
*/
void G_Weapon_VerifyNetConstWeapons_Callback(const unsigned int weaponIndex, const char *name)
{
  unsigned int NumWeapons; 
  __int64 v6; 
  __int64 v7; 
  Weapon outWeapon; 
  __m256i v9; 

  if ( !weaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2140, ASSERT_TYPE_ASSERT, "( weaponIndex != 0 )", (const char *)&queryFormat, "weaponIndex != 0") )
    __debugbreak();
  NumWeapons = BG_GetNumWeapons();
  BG_Weapons_GetFullWeaponForName(name, &outWeapon, BG_FindBaseWeaponForName);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0C8h+outWeapon.weaponIdx]
    vmovups [rsp+0C8h+var_48], ymm0
  }
  if ( NumWeapons != BG_GetNumWeapons() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2152, ASSERT_TYPE_ASSERT, "(initialWeaponCount == BG_GetNumWeapons())", "%s\n\tWeapon '%s' was added but should have already existed. Can cause NetConstStrings errors since offsets won't match", "initialWeaponCount == BG_GetNumWeapons()", name) )
    __debugbreak();
  if ( v9.m256i_u16[0] != weaponIndex )
  {
    LODWORD(v7) = weaponIndex;
    LODWORD(v6) = v9.m256i_u16[0];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2153, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx ) == ( weaponIndex )", "weapon.weaponIdx == weaponIndex\n\t%i, %i", v6, v7) )
      __debugbreak();
  }
}

/*
==============
G_Weapons_RebuildWeaponsArray
==============
*/
void G_Weapons_RebuildWeaponsArray(int entNum)
{
  __int64 v1; 
  GWeaponMap *Instance; 
  gentity_s *v3; 
  GHandler *Handler; 

  v1 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2922, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  if ( Instance )
  {
    v3 = &g_entities[v1];
    if ( !v3->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2934, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
      __debugbreak();
    Handler = GHandler::getHandler();
    PM_BuildWeaponAnimArrays(Instance, &v3->client->ps, Handler);
  }
  else
  {
    Com_PrintWarning(1, "Unable to update weapon anim arrays for all clients due to WeaponMap not being initialized.");
  }
}

