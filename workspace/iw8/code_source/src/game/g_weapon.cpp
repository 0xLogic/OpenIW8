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
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2941, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outAimSpreadScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2942, ASSERT_TYPE_ASSERT, "( outAimSpreadScale )", (const char *)&queryFormat, "outAimSpreadScale") )
    __debugbreak();
  if ( 1.0 == ps->weapCommon.fWeaponPosFrac )
    *outAimSpreadScale = 0.0;
}

/*
==============
G_Weapon_AddShieldSplashDamageEvent
==============
*/
void G_Weapon_AddShieldSplashDamageEvent(gentity_s *ent, float originalDamageRawPoints, float originalDamageScale, float shieldProtection)
{
  const dvar_t *v5; 
  unsigned int v6; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2726, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v5 = DVARBOOL_shieldDebug;
  v6 = (int)(float)(originalDamageRawPoints * originalDamageScale);
  if ( !DVARBOOL_shieldDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "shieldDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
    Com_Printf(15, "Splash damage on front of shield, damage would have been: %i  -  shield protection: %.0f\n", v6, (float)(shieldProtection * 100.0));
  if ( v6 > 0xFF )
    v6 = 255;
  G_Utils_AddEvent(ent, 0x66u, v6);
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
  unsigned int *agent; 
  float v7; 
  float v8; 
  GAntiLag *v9; 
  GWeaponMap *Instance; 
  GHandler *Handler; 
  vec3_t *p_muzzleTrace; 
  __int128 v13; 
  __int128 v14; 
  __int128 v18; 
  __int128 v19; 
  __int128 v23; 
  __int128 v24; 
  __int64 v28; 
  __int128 angles; 
  WorldUpReferenceFrame v30; 

  agent = (unsigned int *)ent->agent;
  if ( agent )
  {
    v7 = *((float *)agent + 9190);
    v8 = *((float *)agent + 9191);
  }
  else
  {
    if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 918, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
      __debugbreak();
    agent = (unsigned int *)ent->client;
    v7 = *((float *)agent + 6035);
    v8 = *((float *)agent + 6036);
  }
  if ( !agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 923, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v9 = GAntiLag::ms_gAntiLagData;
  *(_QWORD *)&angles = *((_QWORD *)agent + 59);
  DWORD2(angles) = agent[120];
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)agent + 94, ACTIVE, 0xBu) )
  {
    if ( (LODWORD(v7) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 935, ASSERT_TYPE_SANITY, "( !IS_NAN( fGunPitch ) )", (const char *)&queryFormat, "!IS_NAN( fGunPitch )", v7, angles) )
      __debugbreak();
    *(float *)&v28 = v8;
    if ( (LODWORD(v8) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 936, ASSERT_TYPE_SANITY, "( !IS_NAN( fGunYaw ) )", (const char *)&queryFormat, "!IS_NAN( fGunYaw )", v28) )
      __debugbreak();
    *(float *)&angles = v7;
    *((float *)&angles + 1) = v8;
  }
  Instance = GWeaponMap::GetInstance();
  if ( BG_IsThirdPersonMode(Instance, (const playerState_s *)agent) )
  {
    *(float *)&angles = v7;
    *((float *)&angles + 1) = v8;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT|0x80) )
  {
    Handler = GHandler::getHandler();
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v30, (const playerState_s *)agent, Handler, 1);
    WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v30, (vec3_t *)&angles);
  }
  if ( (agent[9] & 4) != 0 )
  {
    if ( !ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 958, ASSERT_TYPE_ASSERT, "(ent->tagInfo)", (const char *)&queryFormat, "ent->tagInfo") )
      __debugbreak();
    if ( v9->m_printAntilagWarnings && BG_GetWeaponType(&wp->weapon, wp->isAlternate) == WEAPTYPE_BULLET )
      Com_PrintWarning(15, "Client #%i: Bullet weapons are not supported for players linked with PLinkFlagsCommon::WEAPONVIEW_ONLY.\n", agent[115]);
    p_muzzleTrace = &wp->muzzleTrace;
    G_Utils_DObjGetWorldTagPos_CheckTagExists(ent->tagInfo->parent, (const scr_string_t)scr_const.tag_player, 1, &wp->muzzleTrace);
  }
  else
  {
    p_muzzleTrace = &wp->muzzleTrace;
    G_Client_GetWeaponOrigin((const playerState_s *)agent, &wp->muzzleTrace);
  }
  if ( BG_GetWeaponType(&wp->weapon, wp->isAlternate) == WEAPTYPE_BULLET && v9->ShouldPerformMuzzlePointAntiLag(v9, gameTime, ent) )
    GAntiLag::RewindPlayerMuzzleTrace(v9, gameTime, ent->s.number, p_muzzleTrace, (vec3_t *)&angles);
  AngleVectors((const vec3_t *)&angles, &wp->forward, &wp->right, &wp->up);
  v13 = LODWORD(wp->forward.v[0]);
  v14 = v13;
  *(float *)&v14 = fsqrt((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(wp->forward.v[1] * wp->forward.v[1])) + (float)(wp->forward.v[2] * wp->forward.v[2]));
  _XMM4 = v14;
  __asm
  {
    vcmpless xmm0, xmm4, xmm6
    vblendvps xmm0, xmm4, xmm7, xmm0
  }
  wp->forward.v[0] = *(float *)&v13 * (float)(1.0 / *(float *)&_XMM0);
  wp->forward.v[1] = (float)(1.0 / *(float *)&_XMM0) * wp->forward.v[1];
  wp->forward.v[2] = (float)(1.0 / *(float *)&_XMM0) * wp->forward.v[2];
  v18 = LODWORD(wp->right.v[0]);
  v19 = v18;
  *(float *)&v19 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)(wp->right.v[1] * wp->right.v[1])) + (float)(wp->right.v[2] * wp->right.v[2]));
  _XMM4 = v19;
  __asm
  {
    vcmpless xmm0, xmm4, xmm6
    vblendvps xmm0, xmm4, xmm7, xmm0
  }
  wp->right.v[0] = *(float *)&v18 * (float)(1.0 / *(float *)&_XMM0);
  wp->right.v[1] = (float)(1.0 / *(float *)&_XMM0) * wp->right.v[1];
  wp->right.v[2] = (float)(1.0 / *(float *)&_XMM0) * wp->right.v[2];
  v23 = LODWORD(wp->up.v[0]);
  v24 = v23;
  *(float *)&v24 = fsqrt((float)((float)(*(float *)&v23 * *(float *)&v23) + (float)(wp->up.v[1] * wp->up.v[1])) + (float)(wp->up.v[2] * wp->up.v[2]));
  _XMM4 = v24;
  __asm
  {
    vcmpless xmm0, xmm4, xmm6
    vblendvps xmm0, xmm4, xmm7, xmm0
  }
  wp->up.v[0] = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v23;
  wp->up.v[1] = (float)(1.0 / *(float *)&_XMM0) * wp->up.v[1];
  wp->up.v[2] = (float)(1.0 / *(float *)&_XMM0) * wp->up.v[2];
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  GWeapon::ms_gWeaponSystem->MuzzlePointAddOffset(GWeapon::ms_gWeaponSystem, wp, ent);
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
  bool v7; 
  gagent_s *agent; 
  unsigned int v9; 
  __int64 v10; 
  gentity_s *v11; 
  int IsMovingPlatform; 
  const playerState_s *v13; 
  int v14; 
  GWeapon *WeaponSystem; 
  entityState_t *v16; 
  __int16 number; 
  const playerState_s *EntityPlayerStateConst; 
  double CardinalYawOfIncomingVector; 
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
    r_weapon = *BG_GetViewmodelWeapon(Instance, EntityPlayerState);
    v7 = BG_UsingAlternate(EntityPlayerState);
    if ( BG_IsRiotShield(&r_weapon, v7) )
      return;
    agent = entity->agent;
    if ( agent && p_s->eType == ET_INVISIBLE && agent->playerState.corpseIndex != 15 )
    {
      v9 = 1;
      if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
        __debugbreak();
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)entity->s.number);
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1620, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      if ( *(_QWORD *)(v10 + 2040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1621, ASSERT_TYPE_ASSERT, "(!ci->pXAnimTree)", (const char *)&queryFormat, "!ci->pXAnimTree") )
        __debugbreak();
    }
    else
    {
      v9 = 0;
      if ( !BG_IsCharacterEntity(p_s) && !BG_IsCorpseEntity(p_s) )
        return;
    }
    v11 = entity;
    if ( entity->s.eType == ET_ACTOR )
    {
      if ( !entity->actor )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1632, ASSERT_TYPE_ASSERT, "(victim->actor)", (const char *)&queryFormat, "victim->actor") )
          __debugbreak();
        v11 = entity;
      }
      IsMovingPlatform = BGMovingPlatforms::IsMovingPlatform(v11->actor->Physics.groundEntNum);
    }
    else
    {
      v13 = G_GetEntityPlayerState(entity);
      IsMovingPlatform = BGMovingPlatforms::IsOnMovingPlatform(v13);
    }
    v14 = IsMovingPlatform;
    WeaponSystem = GWeapon::GetWeaponSystem();
    WeaponSystem->OrientMeleeCorpse(WeaponSystem, EntityPlayerState, v9, &entity, &p_s);
    if ( !v14 )
    {
      v16 = p_s;
      *(_QWORD *)p_s->lerp.pos.trDelta.v = 0i64;
      v16->lerp.pos.trDelta.v[2] = 0.0;
    }
    number = entity->s.number;
    if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1561, ASSERT_TYPE_ASSERT, "(attacker)", (const char *)&queryFormat, "attacker") )
      __debugbreak();
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(attacker);
    if ( EntityPlayerStateConst && EntityPlayerStateConst->meleeChargeEnt == number && EntityPlayerStateConst->weapState[0].weaponState == 23 )
    {
      incomingVector.v[0] = entity->r.currentOrigin.v[0] - attacker->r.currentOrigin.v[0];
      incomingVector.v[1] = entity->r.currentOrigin.v[1] - attacker->r.currentOrigin.v[1];
      incomingVector.v[2] = entity->r.currentOrigin.v[2] - attacker->r.currentOrigin.v[2];
      CardinalYawOfIncomingVector = BG_GetCardinalYawOfIncomingVector(&entity->r.currentAngles, &incomingVector, COSINE_MELEE_ORIENT_ANGLE_474);
      entity->r.currentAngles.v[1] = *(float *)&CardinalYawOfIncomingVector;
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
  gentity_s *v29; 
  weapClass_t v30; 
  Weapon *p_weapon; 
  PlayerHandIndex v32; 
  gentity_s *v33; 
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
            v29 = G_Weapon_RocketLauncher_Fire(ent, AltWeapon, outParams.wp.isAlternate, v27, outParams.missile.attackerSpread, &outParams.wp, &vec3_origin, gametime, (const BgMissileFireParms *)fireParms, 0);
            G_Weapon_HandleFiredEvent(ent, v29, -1, eventType, eventParm, &outParams);
            goto LABEL_51;
          }
          G_Weapon_SetupWeaponParams(ent, gametime, &outParams);
          if ( BG_GetWeaponType(&outParams.wp.weapon, outParams.wp.isAlternate) != WEAPTYPE_PROJECTILE )
          {
            wpa = BG_GetWeaponType(&outParams.wp.weapon, outParams.wp.isAlternate);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1348, ASSERT_TYPE_ASSERT, "( BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) ) == ( WEAPTYPE_PROJECTILE )", "BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) == WEAPTYPE_PROJECTILE\n\t%i, %i", wpa, 4) )
              __debugbreak();
          }
          v30 = BG_GetWeaponClass(&outParams.wp.weapon, outParams.wp.isAlternate);
          if ( v30 != WEAPCLASS_GRENADE && v30 != WEAPCLASS_THROWINGKNIFE )
          {
            LODWORD(gunVel) = v30;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1351, ASSERT_TYPE_ASSERT, "( ( (weaponClass == WEAPCLASS_GRENADE) || (weaponClass == WEAPCLASS_THROWINGKNIFE) ) )", "%s\n\t( weaponClass ) = %i", "( (weaponClass == WEAPCLASS_GRENADE) || (weaponClass == WEAPCLASS_THROWINGKNIFE) )", gunVel) )
              __debugbreak();
          }
          if ( outParams.wp.isAlternate )
            p_weapon = (Weapon *)BG_GetAltWeapon(&outParams.wp.weapon);
          else
            p_weapon = &outParams.wp.weapon;
          v32 = BG_GetHandFromWeaponEvent(eventType);
          v33 = G_Weapon_GrenadeLauncher_Fire(ent, p_weapon, v32, gametime, &outParams.wp);
        }
        else
        {
          G_Weapon_SetupWeaponParams(ent, gametime, &outParams);
          v33 = G_Weapon_ThrowGrenade(ent, gametime, &outParams.wp);
        }
        G_Weapon_HandleFiredEvent(ent, v33, -1, eventType, eventParm, &outParams);
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
  const dvar_t *v5; 
  __int16 meleeChargeEnt; 
  double MeleeWidth; 
  float v8; 
  double MeleeHeight; 
  GAntiLag *v10; 
  bool v11; 
  _BOOL8 v12; 
  gentity_s *v13; 
  scrContext_t *v14; 
  BOOL fmt; 
  BOOL outDamageReturnCode; 
  damageReturnCode_t v17; 
  int outHitEntDamage[3]; 
  GMeleeFireParms outParams; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1751, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1754, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_IsTurretActive(EntityPlayerState) && !BG_IsVehicleActive(EntityPlayerState) || !ent->active )
  {
    v5 = DCONST_DVARBOOL_player_meleeForceServerMiss;
    if ( !DCONST_DVARBOOL_player_meleeForceServerMiss && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_meleeForceServerMiss") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      meleeChargeEnt = EntityPlayerState->meleeChargeEnt;
      if ( meleeChargeEnt >= 0 && (unsigned __int16)meleeChargeEnt <= 0x7FEu )
        *(_QWORD *)EntityPlayerState->velocity.v = 0i64;
      PM_MeleeChargeClear(EntityPlayerState);
    }
    else
    {
      G_Weapon_SetupMeleeParams(ent, gameTime, &outParams);
      MeleeWidth = BG_GetMeleeWidth(&outParams.wp.weapon, 0);
      v8 = *(float *)&MeleeWidth;
      MeleeHeight = BG_GetMeleeHeight(&outParams.wp.weapon, 0);
      v17 = DAMAGE_RETURNCODE_INVALID;
      outHitEntDamage[0] = 0;
      if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
        __debugbreak();
      v10 = GAntiLag::ms_gAntiLagData;
      v11 = G_Weapon_Melee_Trace_Detail_Enabled();
      LOBYTE(v12) = 1;
      LOBYTE(outDamageReturnCode) = 0;
      LOBYTE(fmt) = v11;
      v10->RewindPositions(v10, gameTime, ent, v12, fmt, outDamageReturnCode, "Weapon Melee");
      v13 = G_Weapon_Melee_internal(ent, &outParams, v8, *(float *)&MeleeHeight, outHitEntDamage, &v17);
      v10->RestorePositions(v10, ent, "Weapon Melee");
      if ( v17 != DAMAGE_RETURNCODE_DEFERRED )
        G_Weapon_FinalizeChargeMelee(ent, v13, outHitEntDamage[0]);
      v14 = ScriptContext_Server();
      if ( outParams.hasTargetLock )
        Scr_AddFloat(v14, (float)outParams.targetLockTime * 0.001);
      else
        Scr_AddUndefined(v14);
      if ( v13 )
        GScr_AddEntity(v13);
      else
        Scr_AddUndefined(v14);
      Scr_AddBool(v14, outParams.isAltMelee);
      if ( outParams.wp.weapon.weaponIdx )
        GScr_Weapon_AddParam(v14, &outParams.wp.weapon, 0);
      else
        Scr_AddUndefined(v14);
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
  double MeleeWidth; 
  float v7; 
  double MeleeHeight; 
  GAntiLag *v9; 
  bool v10; 
  _BOOL8 v11; 
  gentity_s *v12; 
  scrContext_t *v13; 
  BOOL fmt; 
  BOOL outDamageReturnCode; 
  damageReturnCode_t v16; 
  int outHitEntDamage; 

  MeleeWidth = BG_GetMeleeWidth(&params->wp.weapon, 0);
  v7 = *(float *)&MeleeWidth;
  MeleeHeight = BG_GetMeleeHeight(&params->wp.weapon, 0);
  outHitEntDamage = 0;
  v16 = DAMAGE_RETURNCODE_INVALID;
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v9 = GAntiLag::ms_gAntiLagData;
  v10 = G_Weapon_Melee_Trace_Detail_Enabled();
  LOBYTE(v11) = 1;
  LOBYTE(outDamageReturnCode) = 0;
  LOBYTE(fmt) = v10;
  v9->RewindPositions(v9, gameTime, ent, v11, fmt, outDamageReturnCode, "Weapon Melee");
  v12 = G_Weapon_Melee_internal(ent, params, v7, *(float *)&MeleeHeight, &outHitEntDamage, &v16);
  v9->RestorePositions(v9, ent, "Weapon Melee");
  if ( v16 != DAMAGE_RETURNCODE_DEFERRED )
    G_Weapon_FinalizeChargeMelee(ent, v12, outHitEntDamage);
  v13 = ScriptContext_Server();
  if ( params->hasTargetLock )
    Scr_AddFloat(v13, (float)params->targetLockTime * 0.001);
  else
    Scr_AddUndefined(v13);
  if ( v12 )
    GScr_AddEntity(v12);
  else
    Scr_AddUndefined(v13);
  Scr_AddBool(v13, params->isAltMelee);
  if ( params->wp.weapon.weaponIdx )
    GScr_Weapon_AddParam(v13, &params->wp.weapon, 0);
  else
    Scr_AddUndefined(v13);
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
  $7360F583CD865408FBE4FEF9F0A981AA *fireParms; 
  weapType_t wp; 
  vec3_t *gunVel; 
  int gunVela; 

  p_weapon = &params->wp.weapon;
  if ( BG_GetWeaponType(&params->wp.weapon, params->wp.isAlternate) != WEAPTYPE_PROJECTILE )
  {
    gunVela = 4;
    wp = BG_GetWeaponType(p_weapon, params->wp.isAlternate);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1363, ASSERT_TYPE_ASSERT, "( BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) ) == ( WEAPTYPE_PROJECTILE )", "BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) == WEAPTYPE_PROJECTILE\n\t%i, %i", wp, gunVela) )
      __debugbreak();
  }
  WeaponClass = BG_GetWeaponClass(p_weapon, params->wp.isAlternate);
  if ( WeaponClass == WEAPCLASS_GRENADE || WeaponClass == WEAPCLASS_THROWINGKNIFE )
  {
    LODWORD(gunVel) = WeaponClass;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1366, ASSERT_TYPE_ASSERT, "( ( (weaponClass != WEAPCLASS_GRENADE) && (weaponClass != WEAPCLASS_THROWINGKNIFE) ) )", "%s\n\t( weaponClass ) = %i", "( (weaponClass != WEAPCLASS_GRENADE) && (weaponClass != WEAPCLASS_THROWINGKNIFE) )", gunVel) )
      __debugbreak();
  }
  if ( params->wp.isAlternate )
    p_weapon = (Weapon *)BG_GetAltWeapon(p_weapon);
  HandFromWeaponEvent = BG_GetHandFromWeaponEvent(eventType);
  fireParms = &params->136;
  if ( !params->missile.missileParams.valid )
    fireParms = NULL;
  return G_Weapon_RocketLauncher_Fire(ent, p_weapon, params->wp.isAlternate, HandFromWeaponEvent, params->missile.attackerSpread, &params->wp, &vec3_origin, gameTime, (const BgMissileFireParms *)fireParms, 0);
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

float __fastcall G_Weapon_GetShieldBlastDamageProtection(gentity_s *ent, const vec3_t *blastOrigin, double a3)
{
  GWeaponMap *Instance; 
  const playerState_s *EntityPlayerStateConst; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v8; 
  unsigned int v9; 
  double ShieldCosOfAngleToPoint; 
  const dvar_t *v11; 
  double Float_Internal_DebugName; 
  __int64 v14; 
  __int64 v15; 
  Weapon r_weapon; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2695, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
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
    v8 = 0;
  }
  else
  {
    v9 = 0;
    while ( 1 )
    {
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( v9 >= 0xF )
      {
        LODWORD(v15) = 15;
        LODWORD(v14) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      r_weapon = *BgWeaponMap::GetWeapon(Instance, EntityPlayerStateConst->weaponsEquipped[v9]);
      if ( LOWORD(a3) )
      {
        if ( BG_IsRiotShield(&r_weapon, 0) )
          break;
      }
      if ( (int)++v9 >= 15 )
      {
        v8 = 0;
        goto LABEL_27;
      }
    }
    v8 = 1;
  }
LABEL_27:
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  if ( !GWeapon::ms_gWeaponSystem->DoesShieldProtectFromBlastDamage(GWeapon::ms_gWeaponSystem, ent, v8) )
    goto LABEL_43;
  ShieldCosOfAngleToPoint = G_Weapon_GetShieldCosOfAngleToPoint(ent, blastOrigin, v8, 0);
  if ( *(float *)&ShieldCosOfAngleToPoint <= 0.96600002 )
  {
    if ( *(float *)&ShieldCosOfAngleToPoint > 0.866 )
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_shieldBlastDamageProtection_60, "shieldBlastDamageProtection_60");
      return *(float *)&Float_Internal_DebugName;
    }
    if ( *(float *)&ShieldCosOfAngleToPoint > 0.5 )
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_shieldBlastDamageProtection_120, "shieldBlastDamageProtection_120");
      return *(float *)&Float_Internal_DebugName;
    }
    if ( *(float *)&ShieldCosOfAngleToPoint > 0.0 )
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_shieldBlastDamageProtection_180, "shieldBlastDamageProtection_180");
      return *(float *)&Float_Internal_DebugName;
    }
LABEL_43:
    LODWORD(Float_Internal_DebugName) = 0;
    return *(float *)&Float_Internal_DebugName;
  }
  v11 = DVARFLT_shieldBlastDamageProtection_30;
  if ( !DVARFLT_shieldBlastDamageProtection_30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "shieldBlastDamageProtection_30") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  LODWORD(Float_Internal_DebugName) = v11->current.integer;
  return *(float *)&Float_Internal_DebugName;
}

/*
==============
G_Weapon_GetShieldCosOfAngleToPoint
==============
*/
float G_Weapon_GetShieldCosOfAngleToPoint(const gentity_s *shieldHolder, const vec3_t *point, bool shieldOnBack, bool shieldOpenForFiring)
{
  GWeapon *v8; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  const dvar_t *v16; 
  float v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  float v24; 
  const dvar_t *v25; 
  float value; 
  float v27; 
  __int128 v28; 
  __int128 v29; 
  float v30; 
  __int128 v34; 
  BOOL v37; 
  vec3_t v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  tmat43_t<vec3_t> resultMatrix; 

  if ( !shieldHolder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2558, ASSERT_TYPE_ASSERT, "( shieldHolder )", (const char *)&queryFormat, "shieldHolder") )
    __debugbreak();
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  v8 = GWeapon::ms_gWeaponSystem;
  GWeapon::ms_gWeaponSystem->ShieldCheckAttachFlags(GWeapon::ms_gWeaponSystem, shieldHolder);
  LOBYTE(v37) = shieldOnBack;
  if ( v8->GetShieldCosOfAngleToPointForClient(v8, shieldHolder, (vec3_t *)&v39, (vec3_t *)&v42, &v38, v37, shieldOpenForFiring) )
  {
    v14 = v38.v[2];
    v15 = v38.v[1];
    v13 = v38.v[0];
    v12 = v41;
    v11 = v40;
    v10 = v39;
  }
  else
  {
    if ( !G_Weapon_GetShieldTagMatrix(shieldHolder, &resultMatrix) )
    {
      *(float *)&_XMM0 = FLOAT_N1_0;
      return *(float *)&_XMM0;
    }
    v10 = resultMatrix.m[0].v[0];
    v11 = resultMatrix.m[0].v[1];
    v12 = resultMatrix.m[0].v[2];
    v13 = resultMatrix.m[3].v[0];
    LODWORD(v42) = LODWORD(resultMatrix.m[2].v[0]) ^ _xmm;
    v14 = resultMatrix.m[3].v[2];
    LODWORD(v44) = LODWORD(resultMatrix.m[2].v[2]) ^ _xmm;
    v15 = resultMatrix.m[3].v[1];
    v38 = resultMatrix.m[3];
    v39 = resultMatrix.m[0].v[0];
    v40 = resultMatrix.m[0].v[1];
    v41 = resultMatrix.m[0].v[2];
    LODWORD(v43) = LODWORD(resultMatrix.m[2].v[1]) ^ _xmm;
  }
  v16 = DVARBOOL_riotshield_improvedexplosionprotection_enabled;
  v17 = point->v[0] - v13;
  v19 = LODWORD(point->v[1]);
  v18 = point->v[1] - v15;
  v20 = point->v[2] - v14;
  *(float *)&v19 = fsqrt((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v20 * v20));
  _XMM1 = v19;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm11, xmm0
  }
  v24 = (float)((float)((float)(v18 * (float)(1.0 / *(float *)&_XMM0)) * v11) + (float)((float)(v17 * (float)(1.0 / *(float *)&_XMM0)) * v10)) + (float)((float)(v20 * (float)(1.0 / *(float *)&_XMM0)) * v12);
  if ( !DVARBOOL_riotshield_improvedexplosionprotection_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "riotshield_improvedexplosionprotection_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( !v16->current.enabled )
    return v24;
  v25 = DVARFLT_riotshield_explosionprotection_downdist;
  if ( !DVARFLT_riotshield_explosionprotection_downdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "riotshield_explosionprotection_downdist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  value = v25->current.value;
  v27 = point->v[0] - (float)((float)(value * v42) + v38.v[0]);
  v29 = LODWORD(point->v[1]);
  *(float *)&v29 = point->v[1] - (float)((float)(value * v43) + v38.v[1]);
  v28 = v29;
  v30 = point->v[2] - (float)((float)(value * v44) + v38.v[2]);
  *(float *)&v29 = fsqrt((float)((float)(*(float *)&v29 * *(float *)&v29) + (float)(v27 * v27)) + (float)(v30 * v30));
  _XMM3 = v29;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm11, xmm0
  }
  v34 = v28;
  *(float *)&v34 = (float)((float)((float)(*(float *)&v28 * (float)(1.0 / *(float *)&_XMM0)) * v40) + (float)((float)(v27 * (float)(1.0 / *(float *)&_XMM0)) * v39)) + (float)((float)(v30 * (float)(1.0 / *(float *)&_XMM0)) * v41);
  _XMM2 = v34;
  __asm { vmaxss  xmm0, xmm2, xmm8 }
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
void G_Weapon_GetShieldTagNormal(const gentity_s *shieldHolder, vec3_t *resultNormal)
{
  gclient_s *client; 
  gagent_s *agent; 
  float v6; 
  float v7; 
  float v8; 
  tmat43_t<vec3_t> resultMatrix; 

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
      v6 = resultMatrix.m[0].v[2];
      v7 = resultMatrix.m[0].v[1];
      v8 = resultMatrix.m[0].v[0];
    }
    else
    {
      v6 = resultMatrix.m[1].v[2];
      v7 = resultMatrix.m[1].v[1];
      v8 = resultMatrix.m[1].v[0];
    }
  }
  else
  {
    v6 = FLOAT_1_0;
    v7 = 0.0;
    v8 = 0.0;
  }
  resultNormal->v[0] = v8;
  resultNormal->v[1] = v7;
  resultNormal->v[2] = v6;
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
  PlayerEquippedWeaponState *v26; 
  const Weapon *FirstAvailableOffhandBySlot; 
  scrContext_t *scrContexta; 
  __m256i v29; 
  __int128 v30; 
  __int64 v31; 
  int v32; 
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
        v29 = *(__m256i *)&NULL_WEAPON.weaponIdx;
        v32 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
        v31 = *(__int64 *)&NULL_WEAPON.attachmentVariationIndices[21];
        v30 = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
        v26 = BG_GetEquippedWeaponStateNonConst(Instance, ps, OffHandWeaponForPlayer);
        if ( v26 )
        {
          FirstAvailableOffhandBySlot = BG_GetFirstAvailableOffhandBySlot(Instance, ps, (const OffhandSlot)v26->offhandSlot);
          v29 = *(__m256i *)&FirstAvailableOffhandBySlot->weaponIdx;
          v30 = *(_OWORD *)&FirstAvailableOffhandBySlot->attachmentVariationIndices[5];
          v31 = *(__int64 *)&FirstAvailableOffhandBySlot->attachmentVariationIndices[21];
          v32 = *(_DWORD *)&FirstAvailableOffhandBySlot->weaponCamo;
        }
        v24 = (const Weapon *)&v29;
        if ( !v29.m256i_i16[0] )
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
  __int128 v5; 
  __int128 v6; 
  bool isAlternate; 
  float v12; 
  float v13; 
  float v14; 
  int fuseTime; 
  gentity_s *v16; 
  playerState_s *EntityPlayerState; 
  __int128 v18; 
  float v22; 
  float v23; 
  int outSpeed; 
  int outSpeedUp; 
  vec3_t dir; 
  __int128 v28; 
  __int128 v29; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 807, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 808, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  G_Missile_GetScaledProjectileSpeed(ent, &wp->weapon, wp->isAlternate, &outSpeed, &outSpeedUp);
  isAlternate = wp->isAlternate;
  v12 = (float)outSpeed;
  v13 = v12 * wp->forward.v[1];
  v14 = v12 * wp->forward.v[2];
  dir.v[0] = v12 * wp->forward.v[0];
  dir.v[1] = v13;
  dir.v[2] = v14 + (float)outSpeedUp;
  fuseTime = BG_WeaponFuseTime(&wp->weapon, isAlternate);
  v16 = G_Missile_FireGrenade(ent, &wp->muzzleTrace, &dir, grenade, wp->isAlternate, hand, 0, fuseTime, 1, gameTime);
  v16->flags.m_flags[0] |= 0x4000u;
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( EntityPlayerState )
  {
    v29 = v5;
    v28 = v6;
    v18 = LODWORD(dir.v[1]);
    *(float *)&v18 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)(dir.v[0] * dir.v[0])) + (float)(dir.v[2] * dir.v[2]));
    _XMM3 = v18;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    dir.v[0] = dir.v[0] * (float)(1.0 / *(float *)&_XMM0);
    dir.v[1] = dir.v[1] * (float)(1.0 / *(float *)&_XMM0);
    dir.v[2] = dir.v[2] * (float)(1.0 / *(float *)&_XMM0);
    v22 = (float)((float)(dir.v[1] * EntityPlayerState->velocity.v[1]) + (float)(dir.v[0] * EntityPlayerState->velocity.v[0])) + (float)(dir.v[2] * EntityPlayerState->velocity.v[2]);
    *(float *)&_XMM3 = (float)(dir.v[0] * v22) + v16->s.lerp.pos.trDelta.v[0];
    v16->s.lerp.pos.trDelta.v[0] = *(float *)&_XMM3;
    v16->s.lerp.pos.trDelta.v[1] = (float)(v22 * dir.v[1]) + v16->s.lerp.pos.trDelta.v[1];
    v23 = (float)(v22 * dir.v[2]) + v16->s.lerp.pos.trDelta.v[2];
    v16->s.lerp.pos.trDelta.v[2] = v23;
    if ( ((_XMM3 & 0x7F800000) == 2139095040 || (LODWORD(v16->s.lerp.pos.trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v23) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 824, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( m->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( m->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( m->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( m->s.lerp.pos.trDelta )[2] )") )
      __debugbreak();
  }
  return v16;
}

/*
==============
G_Weapon_HandleFiredEvent
==============
*/
void G_Weapon_HandleFiredEvent(gentity_s *const attacker, gentity_s *const fired, const int hitClientNum, const int eventType, const unsigned int eventParm, const GWeaponFireParms *const params)
{
  scrContext_t *v8; 
  GBullet *v9; 
  GWeapon *v10; 
  float v11; 
  __int128 v12; 
  float v13; 
  __int128 v14; 
  float v18; 
  float v19; 
  BOOL v20; 
  float value[6]; 
  unsigned int v22; 
  int v23; 
  __int64 v24; 
  vec3_t vec; 
  vec3_t angles; 

  v24 = -2i64;
  v22 = eventType;
  v23 = hitClientNum;
  v8 = ScriptContext_Server();
  if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
    __debugbreak();
  v9 = GBullet::ms_gBulletSystem;
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  v10 = GWeapon::ms_gWeaponSystem;
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  if ( !GCombat::QueuedDamageEnabled(GCombat::ms_gCombatSystem) )
    GBullet::HitClientOverrideTracers(v9, attacker, &params->wp.weapon, params->wp.isAlternate);
  GBullet::ResetHitClientEventCount(v9);
  if ( v22 != 72 )
  {
    if ( BG_GetWeaponType(&params->wp.weapon, params->wp.isAlternate) == WEAPTYPE_BULLET )
      goto LABEL_29;
    if ( fired )
    {
      v11 = fired->s.lerp.pos.trDelta.v[0];
      v12 = LODWORD(fired->s.lerp.pos.trDelta.v[1]);
      v13 = fired->s.lerp.pos.trDelta.v[2];
      v14 = v12;
      *(float *)&v14 = fsqrt((float)((float)(*(float *)&v12 * *(float *)&v12) + (float)(v11 * v11)) + (float)(v13 * v13));
      _XMM3 = v14;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm2, xmm0
      }
      value[4] = *(float *)&_XMM1;
      vec.v[0] = v11 * (float)(1.0 / *(float *)&_XMM1);
      vec.v[1] = *(float *)&v12 * (float)(1.0 / *(float *)&_XMM1);
      vec.v[2] = v13 * (float)(1.0 / *(float *)&_XMM1);
      vectoangles(&vec, &angles);
      if ( fired == (gentity_s *const)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
        __debugbreak();
      if ( fired->s.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
      {
        *(_QWORD *)&value[4] = value;
        LODWORD(value[2]) = LODWORD(fired->s.lerp.pos.trBase.v[1]) ^ LODWORD(fired->s.lerp.pos.trBase.v[2]) ^ s_trbase_aab_Z;
        LODWORD(value[1]) = LODWORD(fired->s.lerp.pos.trBase.v[0]) ^ LODWORD(fired->s.lerp.pos.trBase.v[1]) ^ s_trbase_aab_Y;
        LODWORD(value[0]) = LODWORD(fired->s.lerp.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
        memset(&value[4], 0, 8ui64);
        value[4] = value[0];
        if ( (LODWORD(value[0]) & 0x7F800000) == 2139095040 || (value[4] = value[1], (LODWORD(value[1]) & 0x7F800000) == 2139095040) || (value[4] = value[2], (LODWORD(value[2]) & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
            __debugbreak();
        }
        goto LABEL_28;
      }
      value[0] = fired->s.lerp.pos.trBase.v[0];
      v18 = fired->s.lerp.pos.trBase.v[1];
      v19 = fired->s.lerp.pos.trBase.v[2];
    }
    else
    {
      vectoangles(&params->wp.forward, &angles);
      value[0] = params->wp.muzzleTrace.v[0];
      v18 = params->wp.muzzleTrace.v[1];
      v19 = params->wp.muzzleTrace.v[2];
    }
    value[2] = v19;
    value[1] = v18;
LABEL_28:
    Scr_AddVector(v8, angles.v);
    Scr_AddVector(v8, value);
    GScr_Weapon_AddParam(v8, &params->wp.weapon, params->wp.isAlternate);
    GScr_Notify(attacker, scr_const.weapon_fired, 3u);
    memset(value, 0, 0xCui64);
    goto LABEL_29;
  }
  GScr_Weapon_AddParam(v8, &params->wp.weapon, params->wp.isAlternate);
  GScr_Notify(attacker, scr_const.ball_pass, 1u);
LABEL_29:
  LOBYTE(v20) = params->wp.isAlternate;
  v10->FireWeaponSendClientEvent(v10, attacker, v22, eventParm, v23, v20, params);
}

/*
==============
G_Weapon_MacrossMissiles
==============
*/
void G_Weapon_MacrossMissiles(gentity_s *parent, const Weapon *weapon, const bool isAlternate, const PlayerHandIndex hand, const BgWeaponParms *wp, const vec3_t *start, const vec3_t *gunVel, const BgMissileFireParms *fireParms, const int gameTime, bool magicBullet)
{
  float v14; 
  float v15; 
  int v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  __int128 v26; 
  vec3_t *dir; 
  __int64 v28; 
  double v29; 
  double v30; 
  double v31; 
  _QWORD v32[5]; 
  vec3_t v33; 
  int v34; 
  int v35; 
  int v36; 
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
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 

  if ( fireParms )
  {
    v14 = wp->forward.v[2];
    v15 = wp->forward.v[1];
    v16 = *(_DWORD *)&fireParms->lockon;
    v17 = wp->forward.v[0];
    v18 = wp->up.v[0];
    v19 = wp->up.v[1];
    v20 = wp->up.v[2];
    v21 = wp->right.v[0];
    v34 = LODWORD(v21) ^ _xmm;
    v22 = wp->right.v[1];
    v35 = LODWORD(v22) ^ _xmm;
    v41 = v15 + v19;
    v43 = (float)(v17 + v21) + v18;
    v23 = wp->right.v[2];
    v36 = LODWORD(v23) ^ _xmm;
    v40 = v17 + v18;
    v42 = v14 + v20;
    v44 = (float)(v15 + v22) + v19;
    v45 = (float)(v14 + v23) + v20;
    v24 = v15 - v22;
    v25 = v19 - v15;
    v47 = v24 + v19;
    v46 = (float)(v17 - v21) + v18;
    v48 = (float)(v14 - v23) + v20;
    v52 = v21 + (float)(v18 - v17);
    v53 = v22 + v25;
    v54 = (float)(COERCE_FLOAT(LODWORD(v14) ^ _xmm) + v20) + v23;
    v55 = (float)(v18 - v17) - v21;
    v56 = v25 - v22;
    v26 = *(_OWORD *)&fireParms->targetEntNum;
    v57 = (float)(COERCE_FLOAT(LODWORD(v14) ^ _xmm) + v20) - v23;
    v32[3] = *(_QWORD *)&fireParms->autoDetonateTime;
    v33.v[0] = v21;
    v33.v[1] = v22;
    v33.v[2] = v23;
    v37 = v18;
    v38 = v19;
    v39 = v20;
    v49 = v18 - v17;
    v50 = v25;
    v51 = COERCE_FLOAT(LODWORD(v14) ^ _xmm) + v20;
    *(_OWORD *)&v32[1] = v26;
    LODWORD(v32[4]) = v16;
    dir = &v33;
    v28 = 9i64;
    do
    {
      v29 = G_flrand(-100.0, 100.0);
      *((float *)&v32[1] + 1) = *(float *)&v29 + fireParms->targetPosOrOffset.v[0];
      v30 = G_flrand(-100.0, 100.0);
      *(float *)&v32[2] = *(float *)&v30 + fireParms->targetPosOrOffset.v[1];
      v31 = G_flrand(-100.0, 100.0);
      *((float *)&v32[2] + 1) = *(float *)&v31 + fireParms->targetPosOrOffset.v[2];
      G_Missile_FireRocket(parent, weapon, isAlternate, hand, start, dir++, gunVel, (const BgMissileFireParms *)&v32[1], gameTime, magicBullet);
      --v28;
    }
    while ( v28 );
  }
}

/*
==============
G_Weapon_Melee
==============
*/
gentity_s *G_Weapon_Melee(gentity_s *ent, const GMeleeFireParms *params, float width, float height, const int gameTime, int *outHitEntDamage, damageReturnCode_t *outDamageReturnCode)
{
  GAntiLag *v9; 
  bool v10; 
  _BOOL8 v11; 
  gentity_s *v12; 
  BOOL fmt; 
  BOOL v15; 

  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v9 = GAntiLag::ms_gAntiLagData;
  v10 = G_Weapon_Melee_Trace_Detail_Enabled();
  LOBYTE(v11) = 1;
  LOBYTE(v15) = 0;
  LOBYTE(fmt) = v10;
  v9->RewindPositions(v9, gameTime, ent, v11, fmt, v15, "Weapon Melee");
  v12 = G_Weapon_Melee_internal(ent, params, width, height, outHitEntDamage, outDamageReturnCode);
  v9->RestorePositions(v9, ent, "Weapon Melee");
  return v12;
}

/*
==============
G_Weapon_Melee_IsProneCandidateNearby
==============
*/
char G_Weapon_Melee_IsProneCandidateNearby(const playerState_s *const attackerPs, const float meleeRange)
{
  const dvar_t *v3; 
  GHandler *Handler; 
  Physics_WorldId v5; 
  unsigned int v6; 
  unsigned int HitBodyId; 
  int Ref; 
  int EntityNum; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  int clientNum; 
  const gentity_s *GEntity; 
  const gentity_s *v14; 
  const playerState_s *EntityPlayerStateConst; 
  GUtils *v16; 
  team_t v17; 
  team_t v18; 
  hkMemoryAllocator *v19; 
  hkMemoryAllocator *v20; 
  hkMemoryAllocator *v21; 
  hkMemoryAllocator *v23; 
  hkMemoryAllocator *v24; 
  hkMemoryAllocator *v25; 
  Physics_WorldId v26; 
  HavokPhysics_BroadphaseCollisionQueryResult result; 
  HavokPhysics_IgnoreBodies v28; 
  Physics_AABBBroadphaseQueryExtendedData extendedData; 
  __int64 v30; 
  vec3_t max; 
  vec3_t min; 

  v30 = -2i64;
  if ( !attackerPs )
    return 0;
  v3 = DVARBOOL_killswitch_melee_prone_improvements_enabled;
  if ( !DVARBOOL_killswitch_melee_prone_improvements_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_melee_prone_improvements_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
    return 0;
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Weapon_Melee_IsProneCandidateNearby");
  Handler = GHandler::getHandler();
  min.v[0] = COERCE_FLOAT(COERCE_UNSIGNED_INT(meleeRange * broadphaseQueryScale_0) ^ _xmm) + attackerPs->origin.v[0];
  min.v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT(meleeRange * broadphaseQueryScale_0) ^ _xmm) + attackerPs->origin.v[1];
  min.v[2] = COERCE_FLOAT(COERCE_UNSIGNED_INT(meleeRange * broadphaseQueryScale_0) ^ _xmm) + attackerPs->origin.v[2];
  max.v[0] = (float)(meleeRange * broadphaseQueryScale_0) + attackerPs->origin.v[0];
  max.v[1] = (float)(meleeRange * broadphaseQueryScale_0) + attackerPs->origin.v[1];
  max.v[2] = (float)(meleeRange * broadphaseQueryScale_0) + attackerPs->origin.v[2];
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v28, 0, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v28, -9);
  extendedData.phaseSelection = All;
  extendedData.ignoreBodies = &v28;
  extendedData.contents = 33570816;
  v5 = Handler->GetPhysicsWorldId(Handler);
  v26 = v5;
  result.m_propertyBag.m_bag = NULL;
  *(_DWORD *)&result.m_memSizeAndFlags = 0x1FFFF;
  result.__vftable = (HavokPhysics_BroadphaseCollisionQueryResult_vtbl *)&HavokPhysics_BroadphaseCollisionQueryResult::`vftable';
  result.m_hits.m_data = NULL;
  result.m_hits.m_size = 0;
  result.m_hits.m_capacityAndFlags = 0x80000000;
  result.m_worldId = v5;
  Physics_AABBBroadphaseQuery(v5, &min, &max, &extendedData, &result);
  v6 = 0;
  if ( !HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(&result) )
  {
LABEL_34:
    v23 = hkMemHeapAllocator();
    result.m_hits.m_size = 0;
    if ( result.m_hits.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v23, result.m_hits.m_data, 4, result.m_hits.m_capacityAndFlags & 0x3FFFFFFF);
    result.m_hits.m_data = NULL;
    result.m_hits.m_capacityAndFlags = 0x80000000;
    hkReferencedObject::~hkReferencedObject(&result);
    v24 = hkMemHeapAllocator();
    v28.m_ignoreBodies.m_size = 0;
    if ( v28.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v24, v28.m_ignoreBodies.m_data, 4, v28.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v28.m_ignoreBodies.m_data = NULL;
    v28.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v25 = hkMemHeapAllocator();
    v28.m_ignoreEntities.m_size = 0;
    if ( v28.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v25, v28.m_ignoreEntities.m_data, 8, v28.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
    v28.m_ignoreEntities.m_data = NULL;
    v28.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
    Sys_ProfEndNamedEvent();
    return 0;
  }
  while ( 1 )
  {
    HitBodyId = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(&result, v6);
    Ref = Physics_GetRef(v5, HitBodyId);
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
      v14 = G_GetGEntity(EntityNum);
      EntityPlayerStateConst = G_GetEntityPlayerStateConst(v14);
      if ( EntityPlayerStateConst )
      {
        if ( ((PM_GetEffectiveStanceForWorldModelAnimation(EntityPlayerStateConst) - 1) & 0xFFFFFFFD) == 0 )
        {
          if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
            __debugbreak();
          v16 = GUtils::ms_gUtils;
          v17 = GUtils::ms_gUtils->GetEntityTeam(GUtils::ms_gUtils, GEntity);
          v18 = v16->GetEntityTeam(v16, v14);
          if ( v17 == TEAM_ZERO || v17 != v18 )
            break;
        }
      }
    }
    if ( ++v6 >= HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(&result) )
      goto LABEL_34;
    v5 = v26;
  }
  v19 = hkMemHeapAllocator();
  result.m_hits.m_size = 0;
  if ( result.m_hits.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v19, result.m_hits.m_data, 4, result.m_hits.m_capacityAndFlags & 0x3FFFFFFF);
  result.m_hits.m_data = NULL;
  result.m_hits.m_capacityAndFlags = 0x80000000;
  hkReferencedObject::~hkReferencedObject(&result);
  v20 = hkMemHeapAllocator();
  v28.m_ignoreBodies.m_size = 0;
  if ( v28.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v20, v28.m_ignoreBodies.m_data, 4, v28.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v28.m_ignoreBodies.m_data = NULL;
  v28.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v21 = hkMemHeapAllocator();
  v28.m_ignoreEntities.m_size = 0;
  if ( v28.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v21, v28.m_ignoreEntities.m_data, 8, v28.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v28.m_ignoreEntities.m_data = NULL;
  v28.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  Sys_ProfEndNamedEvent();
  return 1;
}

/*
==============
G_Weapon_Melee_SetupTargetWeaponParams
==============
*/
void G_Weapon_Melee_SetupTargetWeaponParams(const GMeleeFireParms *const params, const playerState_s *const ps, BgWeaponParms *const wp)
{
  __int128 v3; 
  int targetEntity; 
  GWeaponMap *Instance; 
  GHandler *Handler; 
  bool v10; 
  bool v11; 
  centity_t *Entity; 
  const entityState_t *EntityState; 
  scr_string_t j_spinelower; 
  int EntityWorldTagPosition; 
  scr_string_t j_neck; 
  int v17; 
  scr_string_t j_spine4; 
  int v19; 
  float v20; 
  __int128 v21; 
  float v22; 
  __int128 v23; 
  float v24; 
  BgWeaponParms *p_up; 
  vec3_t outPosition; 
  __int128 v30; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 88, ASSERT_TYPE_ASSERT, "( params )", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 89, ASSERT_TYPE_ASSERT, "( wp )", (const char *)&queryFormat, "wp") )
    __debugbreak();
  *(__m256i *)wp->forward.v = *(__m256i *)params->wp.forward.v;
  *(__m256i *)&wp->up.z = *(__m256i *)&params->wp.up.z;
  *(__m256i *)&wp->weapDef = *(__m256i *)&params->wp.weapDef;
  *(__m256i *)&wp->weapon.weaponAttachments[10] = *(__m256i *)&params->wp.weapon.weaponAttachments[10];
  *(double *)&wp->weapon.weaponCamo = *(double *)&params->wp.weapon.weaponCamo;
  targetEntity = params->targetEntity;
  if ( targetEntity != 2047 )
  {
    Instance = GWeaponMap::GetInstance();
    Handler = GHandler::getHandler();
    v10 = ps && BG_IsPlayerZeroG(ps);
    v11 = ps && BG_IsThirdPersonMode(Instance, ps);
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
      if ( v10 && ((j_spinelower = scr_const.j_spinelower, !Handler->IsClient(Handler)) ? (EntityWorldTagPosition = GHandler::GetEntityWorldTagPosition(Handler, targetEntity, j_spinelower, &outPosition)) : (EntityWorldTagPosition = CgHandler::GetEntityWorldTagPosition((CgHandler *)Handler, targetEntity, j_spinelower, &outPosition)), EntityWorldTagPosition) || !v11 && ((j_neck = scr_const.j_neck, !Handler->IsClient(Handler)) ? (v17 = GHandler::GetEntityWorldTagPosition(Handler, targetEntity, j_neck, &outPosition)) : (v17 = CgHandler::GetEntityWorldTagPosition((CgHandler *)Handler, targetEntity, j_neck, &outPosition)), v17) || ((j_spine4 = scr_const.j_spine4, !Handler->IsClient(Handler)) ? (v19 = GHandler::GetEntityWorldTagPosition(Handler, targetEntity, j_spine4, &outPosition)) : (v19 = CgHandler::GetEntityWorldTagPosition((CgHandler *)Handler, targetEntity, j_spine4, &outPosition)), v19) )
      {
        v30 = v3;
        v20 = outPosition.v[0] - params->wp.muzzleTrace.v[0];
        v21 = LODWORD(outPosition.v[1]);
        wp->forward.v[0] = v20;
        v23 = v21;
        v22 = *(float *)&v21 - params->wp.muzzleTrace.v[1];
        *(float *)&v21 = outPosition.v[2];
        wp->forward.v[1] = v22;
        v24 = *(float *)&v21 - params->wp.muzzleTrace.v[2];
        *(float *)&v23 = fsqrt((float)((float)(v22 * v22) + (float)(v20 * v20)) + (float)(v24 * v24));
        _XMM3 = v23;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm1, xmm0
        }
        *(float *)&v23 = v20 * (float)(1.0 / *(float *)&_XMM0);
        p_up = (BgWeaponParms *)&wp->up;
        wp->forward.v[0] = *(float *)&v23;
        wp->forward.v[2] = v24 * (float)(1.0 / *(float *)&_XMM0);
        wp->forward.v[1] = v22 * (float)(1.0 / *(float *)&_XMM0);
        wp->right.v[2] = 0.0;
        wp->right.v[1] = COERCE_FLOAT(v23 ^ _xmm);
        wp->right.v[0] = v22 * (float)(1.0 / *(float *)&_XMM0);
        if ( &wp->right == &wp->up && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
          __debugbreak();
        if ( wp == p_up && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
          __debugbreak();
        p_up->forward.v[0] = (float)(wp->forward.v[2] * wp->right.v[1]) - (float)(wp->right.v[2] * wp->forward.v[1]);
        wp->up.v[1] = (float)(wp->forward.v[0] * wp->right.v[2]) - (float)(wp->forward.v[2] * wp->right.v[0]);
        wp->up.v[2] = (float)(wp->forward.v[1] * wp->right.v[0]) - (float)(wp->forward.v[0] * wp->right.v[1]);
      }
    }
  }
}

/*
==============
G_Weapon_Melee_Trace
==============
*/
__int64 G_Weapon_Melee_Trace(gentity_s *ent, const BgWeaponParms *wp, int damage, float range, float width, float height, bool detailTrace, int searchEntityId, trace_t *traceResult, vec3_t *outHitOrigin)
{
  bool v10; 
  unsigned int v14; 
  unsigned int v15; 
  float v16; 
  float v17; 
  float v18; 
  unsigned int v19; 
  unsigned __int8 *v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  const dvar_t *v30; 
  unsigned __int8 *priorityMap; 
  bool v32; 
  Physics_WorldId v33; 
  unsigned int v34; 
  float fraction; 
  unsigned __int16 GlassHitId; 
  int v37; 
  const dvar_t *v38; 
  unsigned __int64 eTeam; 
  const bitarray<224> *AllTeamFlags; 
  const dvar_t *v41; 
  const vec4_t *v42; 
  unsigned __int16 EntityHitId; 
  gentity_s *v44; 
  unsigned __int16 v45; 
  gentity_s *v46; 
  __int64 v47; 
  __int64 v48; 
  int v49; 
  GWeapon *WeaponSystem; 
  GWeapon *v51; 
  float *v52; 
  __m256i v53; 
  __int128 v54; 
  const char *debugHitName; 
  const dvar_t *v56; 
  const vec4_t *v57; 
  DObjPartBits *p_teamFlags; 
  int Int_Internal_DebugName; 
  int v60; 
  int v61; 
  const vec4_t *v62; 
  float *v63; 
  __m256i v64; 
  __int128 v65; 
  const char *v66; 
  int *skipEntities; 
  __int64 skipEntityCount; 
  __int64 skipChildren; 
  __int64 contentMask; 
  unsigned int v72; 
  int outOffsetCount; 
  int passEntityNumList; 
  int v75; 
  unsigned int v76; 
  int iDamage; 
  vec2_t *outOffsets; 
  vec3_t *v79; 
  unsigned __int8 *i; 
  trace_t results; 
  vec3_t start; 
  vec3_t end; 
  vec3_t vEnd; 
  DObjPartBits teamFlags; 

  v10 = detailTrace;
  v79 = outHitOrigin;
  iDamage = damage;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 173, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 174, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  if ( !traceResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 175, ASSERT_TYPE_ASSERT, "(traceResult)", (const char *)&queryFormat, "traceResult") )
    __debugbreak();
  v14 = 0;
  outOffsets = NULL;
  outOffsetCount = 0;
  BG_GetMeleeTraceGridOffsets((const vec2_t **)&outOffsets, &outOffsetCount);
  G_GetEntityPlayerState(ent);
  traceResult->fraction = 1.0;
  v75 = 0;
  if ( width > 0.0 || (v15 = 1, height > 0.0) )
    v15 = outOffsetCount;
  v76 = v15;
  if ( G_Utils_IsClientOrAgent(ent) )
  {
    v16 = wp->muzzleTrace.v[0] - (float)(10.0 * wp->forward.v[0]);
    v17 = wp->muzzleTrace.v[1] - (float)(10.0 * wp->forward.v[1]);
    v18 = wp->muzzleTrace.v[2] - (float)(10.0 * wp->forward.v[2]);
  }
  else
  {
    v16 = wp->muzzleTrace.v[0];
    v17 = wp->muzzleTrace.v[1];
    v18 = wp->muzzleTrace.v[2];
  }
  passEntityNumList = ent->s.number;
  v19 = 0;
  v72 = 0;
  start.v[2] = v18;
  start.v[1] = v17;
  start.v[0] = v16;
  if ( !v15 )
  {
LABEL_105:
    LOBYTE(v14) = traceResult->fraction < 1.0;
    return v14;
  }
  v20 = NULL;
  if ( detailTrace )
    v20 = bg_meleePriorityMap;
  for ( i = v20; ; v20 = i )
  {
    v21 = (float)(range * wp->forward.v[0]) + v16;
    v22 = (float)(range * wp->forward.v[1]) + v17;
    v23 = (float)(range * wp->forward.v[2]) + v18;
    end.v[2] = v23;
    end.v[0] = v21;
    end.v[1] = v22;
    if ( v15 > 1 )
    {
      v24 = width * outOffsets[v19].v[0];
      v25 = (float)(v24 * wp->right.v[0]) + v21;
      v26 = (float)(v24 * wp->right.v[1]) + v22;
      end.v[2] = (float)(v24 * wp->right.v[2]) + v23;
      end.v[0] = v25;
      end.v[1] = v26;
      v27 = height * outOffsets[v19].v[1];
      v28 = v27 * wp->up.v[1];
      end.v[0] = (float)(v27 * wp->up.v[0]) + v25;
      v29 = v27 * wp->up.v[2];
      end.v[1] = v28 + v26;
      end.v[2] = v29 + end.v[2];
    }
    v30 = DVARBOOL_killswitch_melee_use_bullet_trace_enabled;
    priorityMap = v20;
    if ( !DVARBOOL_killswitch_melee_use_bullet_trace_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_melee_use_bullet_trace_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    if ( v30->current.enabled && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
    {
      v32 = !v10;
      v33 = PHYSICS_WORLD_ID_FIRST;
      v34 = v72;
      if ( !v32 && !v72 && G_Weapon_Melee_Trace_Detail_Enabled() )
      {
        v33 = PHYSICS_WORLD_ID_SERVER_DETAIL;
        priorityMap = bg_meleeShieldDetailPriorityMap;
      }
      PhysicsQuery_LegacyBulletTrace(v33, &results, &start, &end, &bounds_origin, &passEntityNumList, 1, 0, 41968017, 1, priorityMap, All);
    }
    else
    {
      G_Main_LocationalTraceAllowChildren(&results, &start, &end, &passEntityNumList, 1, 41968017, priorityMap, All);
      v34 = v72;
    }
    fraction = results.fraction;
    vEnd.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
    vEnd.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
    vEnd.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
    if ( !v34 )
    {
      G_Trigger_DamageCheckHit(PHYSICS_WORLD_ID_FIRST, ent, 1, &start, &vEnd, iDamage, 8);
      GlassHitId = Trace_GetGlassHitId(&results);
      v37 = GlassHitId;
      if ( GlassHitId )
      {
        v38 = DVARINT_glass_meleeDamage;
        if ( !DVARINT_glass_meleeDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "glass_meleeDamage") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v38);
        G_Glass_DamagePiece(v37 - 1, v38->current.integer, &vEnd, &wp->forward);
        if ( G_Glass_GetPieceState(v37 - 1) == GLASS_DESTROYED )
        {
          eTeam = (unsigned int)ent->sentient->eTeam;
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
            AllTeamFlags = Com_TeamsSP_GetAllTeamFlags();
          else
            AllTeamFlags = Com_TeamsMP_GetAllTeamFlags();
          *(_OWORD *)teamFlags.array = *(_OWORD *)AllTeamFlags->array;
          *(_QWORD *)&teamFlags.array[4] = *(_QWORD *)&AllTeamFlags->array[4];
          teamFlags.array[6] = AllTeamFlags->array[6];
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
      fraction = results.fraction;
    }
    if ( fraction != 1.0 && (results.surfaceFlags & 0x10) == 0 )
      break;
    v56 = DCONST_DVARBOOL_melee_debug;
    if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v56);
    v10 = detailTrace;
    if ( v56->current.enabled )
    {
      v57 = &colorDkRed;
      if ( detailTrace )
        v57 = &colorRed;
      G_DebugLineWithDuration(&start, &end, v57, 1, 200);
    }
LABEL_84:
    v15 = v76;
    v19 = v72 + 1;
    v72 = v19;
    if ( v19 >= v76 )
      goto LABEL_105;
    v18 = start.v[2];
    v17 = start.v[1];
    v16 = start.v[0];
  }
  v41 = DCONST_DVARBOOL_melee_debug;
  if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v41);
  if ( v41->current.enabled )
  {
    v42 = &colorDkCyan;
    if ( detailTrace )
      v42 = &colorBlue;
    G_DebugLineWithDuration(&start, &end, v42, 1, 200);
  }
  EntityHitId = Trace_GetEntityHitId(&results);
  v44 = g_entities;
  v45 = EntityHitId;
  v46 = &g_entities[EntityHitId];
  if ( !g_entities )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v44 = g_entities;
  }
  v47 = (unsigned __int128)(((char *)v46 - (char *)v44) * (__int128)0x2D02D02D02D02D03i64) >> 64;
  v48 = ((unsigned __int64)v47 >> 63) + (v47 >> 8);
  if ( (unsigned int)v48 >= 0x800 )
  {
    LODWORD(skipEntityCount) = 2048;
    LODWORD(skipEntities) = ((unsigned __int64)v47 >> 63) + (v47 >> 8);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", skipEntities, skipEntityCount) )
      __debugbreak();
  }
  if ( (_WORD)v48 == 2047 )
  {
    v49 = 0;
  }
  else if ( (_WORD)v48 == 2046 )
  {
    v49 = 1;
  }
  else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v46->s.lerp.eFlags, ACTIVE, 0x10u) )
  {
    WeaponSystem = GWeapon::GetWeaponSystem();
    v49 = WeaponSystem->IsMeleeHitSuccess(WeaponSystem, ent, v46) + 3;
  }
  else
  {
    v49 = 2;
  }
  if ( searchEntityId != 2047 && searchEntityId != v45 || v75 >= v49 && (v75 > v49 || results.fraction >= traceResult->fraction) )
  {
LABEL_83:
    v10 = detailTrace;
    goto LABEL_84;
  }
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  v51 = GWeapon::ms_gWeaponSystem;
  if ( !GWeapon::ms_gWeaponSystem->IsMeleeHitSuccess(GWeapon::ms_gWeaponSystem, ent, v46) )
  {
    v52 = (float *)v79;
    v53 = *(__m256i *)&results.contents;
    *(__m256i *)&traceResult->fraction = *(__m256i *)&results.fraction;
    v54 = *(_OWORD *)&results.allsolid;
    *(__m256i *)&traceResult->contents = v53;
    debugHitName = results.debugHitName;
    *(_OWORD *)&traceResult->allsolid = v54;
    *(float *)&v54 = vEnd.v[0];
    traceResult->debugHitName = debugHitName;
    *(float *)&debugHitName = vEnd.v[1];
    *v52 = *(float *)&v54;
    v52[2] = vEnd.v[2];
    v52[1] = *(float *)&debugHitName;
    v75 = v49;
    goto LABEL_83;
  }
  if ( v72 > 4 && v51->EntityHasRiotShield(v51, v46) || v72 && v51->IsMeleeFriendlyIgnore(v51, ent, v46) )
    goto LABEL_83;
  if ( detailTrace )
  {
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_g_debugLocHit, "g_debugLocHit") != v46->s.number || results.partGroup == 19 )
    {
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_melee_debug, "melee_debug") )
      {
        v62 = &colorGreen;
        if ( results.partGroup == 19 )
          v62 = &colorBlue;
        G_DebugLineWithDuration(&start, &end, v62, 1, 200);
      }
    }
    else
    {
      p_teamFlags = &teamFlags;
      do
      {
        *(_OWORD *)p_teamFlags->array = _xmm_ffffffffffffffffffffffffffffffff;
        p_teamFlags = (DObjPartBits *)((char *)p_teamFlags + 16);
        ++v14;
      }
      while ( v14 < 2 );
      G_Utils_DObjCalcPose(v46, &teamFlags);
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_g_debugLocHitTime, "g_debugLocHitTime");
      SV_Game_XModelDebugBoxes(v46, &colorYellow, Int_Internal_DebugName);
      v60 = Dvar_GetInt_Internal_DebugName(DVARINT_g_debugLocHitTime, "g_debugLocHitTime");
      CL_AddDebugLine(&start, &end, &colorGreen, 0, v60, 1);
      v61 = Dvar_GetInt_Internal_DebugName(DVARINT_g_debugLocHitTime, "g_debugLocHitTime");
      CL_AddDebugStar(&vEnd, &colorRed, 0, v61, 1);
    }
  }
  v63 = (float *)v79;
  v64 = *(__m256i *)&results.contents;
  *(__m256i *)&traceResult->fraction = *(__m256i *)&results.fraction;
  v65 = *(_OWORD *)&results.allsolid;
  *(__m256i *)&traceResult->contents = v64;
  v66 = results.debugHitName;
  *(_OWORD *)&traceResult->allsolid = v65;
  *(float *)&v65 = vEnd.v[0];
  traceResult->debugHitName = v66;
  *(float *)&v66 = vEnd.v[1];
  *v63 = *(float *)&v65;
  v63[2] = vEnd.v[2];
  v63[1] = *(float *)&v66;
  return 1i64;
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
gentity_s *G_Weapon_Melee_internal(gentity_s *ent, const GMeleeFireParms *const params, float width, float height, int *outHitEntDamage, damageReturnCode_t *outDamageReturnCode)
{
  __int128 v6; 
  gentity_s *v8; 
  float v10; 
  bool isAlternate; 
  bool hasFatalDamage; 
  GHandler *Handler; 
  int v14; 
  float meleeRange; 
  __int64 EntityHitId; 
  gentity_s *v17; 
  int health; 
  int v19; 
  bool v20; 
  bool v21; 
  const dvar_t *v22; 
  bool v23; 
  bool v24; 
  bool v25; 
  float v26; 
  const dvar_t *v27; 
  float value; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  int v31; 
  bool v32; 
  PhysicsObject *Base; 
  unsigned int v34; 
  const RumbleInfo *v35; 
  unsigned int Index; 
  gentity_s *v37; 
  bool IsClient; 
  bool v39; 
  bool v40; 
  bool v41; 
  GHandler *v42; 
  int v43; 
  scr_string_t none; 
  int v45; 
  GCombat *CombatSystem; 
  GCombat *v48; 
  damageReturnCode_t v49; 
  BOOL v50; 
  char v51; 
  char v52; 
  bool outIsAlternate[2]; 
  bool v54; 
  gentity_s *enta; 
  int damage; 
  MeleeAnimType outAnimType[2]; 
  WeaponMaterialType outMaterial; 
  const GMeleeFireParms *v59; 
  int *v60; 
  playerState_s *attackerPs; 
  damageReturnCode_t *v62; 
  vec3_t position; 
  int v64[6]; 
  BgWeaponParms wp; 
  trace_t trace; 
  trace_t traceResult; 
  _QWORD v68[3]; 

  v8 = ent;
  v60 = outHitEntDamage;
  v62 = outDamageReturnCode;
  v59 = params;
  enta = ent;
  v10 = width;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 481, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 482, ASSERT_TYPE_ASSERT, "( params )", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !params->wp.weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 483, ASSERT_TYPE_ASSERT, "( params->wp.weapDef )", (const char *)&queryFormat, "params->wp.weapDef") )
    __debugbreak();
  if ( outHitEntDamage )
    *outHitEntDamage = 0;
  if ( outDamageReturnCode )
    *outDamageReturnCode = DAMAGE_RETURNCODE_INVALID;
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  *(_QWORD *)outAnimType = GWeapon::ms_gWeaponSystem;
  attackerPs = G_GetEntityPlayerState(v8);
  G_Weapon_Melee_SetupTargetWeaponParams(params, attackerPs, &wp);
  isAlternate = wp.isAlternate;
  hasFatalDamage = params->hasFatalDamage;
  Handler = GHandler::getHandler();
  v14 = PM_Damage_CalcMeleeDamage(Handler, hasFatalDamage, &wp.weapon, isAlternate, 2047);
  meleeRange = params->meleeRange;
  damage = v14;
  LOWORD(EntityHitId) = 2047;
  v17 = NULL;
  health = 0;
  v19 = G_Weapon_Melee_Trace(v8, &wp, v14, meleeRange, width, height, 0, 2047, &trace, &position);
  v20 = v19 != 0;
  if ( v19 )
  {
    EntityHitId = (__int16)Trace_GetEntityHitId(&trace);
    v17 = &g_entities[EntityHitId];
    health = v17->health;
  }
  if ( !v20 || !v17 || (v51 = 1, !(*(unsigned __int8 (__fastcall **)(_QWORD, gentity_s *))(**(_QWORD **)outAnimType + 16i64))(*(_QWORD *)outAnimType, v17)) )
    v51 = 0;
  v21 = (!v20 || !BG_IsCharacterEntityIndex((__int16)EntityHitId)) && G_Weapon_Melee_IsProneCandidateNearby(attackerPs, v59->meleeRange);
  v54 = v21;
  if ( !v17 || (v52 = 1, ((v17->s.eType - 12) & 0xFFFD) != 0) )
    v52 = 0;
  v22 = DVARBOOL_killswitch_melee_use_detail_world_for_vehicles;
  if ( !DVARBOOL_killswitch_melee_use_detail_world_for_vehicles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_melee_use_detail_world_for_vehicles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  v23 = v22->current.enabled && v52;
  outIsAlternate[0] = v23;
  v24 = v51 || v21 || v23;
  if ( !v20 && !v24 )
    return 0i64;
  v25 = 0;
  if ( !v24 )
    goto LABEL_75;
  *(_OWORD *)&v68[1] = v6;
  v26 = v59->meleeRange;
  if ( !v51 && v21 )
  {
    v27 = DCONST_DVARFLT_melee_pronevictim_rangescale;
    if ( !DCONST_DVARFLT_melee_pronevictim_rangescale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_pronevictim_rangescale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    value = v27->current.value;
    v29 = DCONST_DVARFLT_melee_pronevictim_widthscale;
    v26 = value * v59->meleeRange;
    if ( !DCONST_DVARFLT_melee_pronevictim_widthscale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_pronevictim_widthscale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    v10 = width * v29->current.value;
    v30 = DCONST_DVARFLT_melee_pronevictim_heightscale;
    if ( !DCONST_DVARFLT_melee_pronevictim_heightscale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_pronevictim_heightscale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    height = height * v30->current.value;
    goto LABEL_59;
  }
  if ( v23 )
LABEL_59:
    LOWORD(EntityHitId) = 2047;
  if ( (unsigned int)G_Weapon_Melee_Trace(enta, &wp, damage, v26, v10, height, 1, (__int16)EntityHitId, &traceResult, &position) )
  {
    v31 = Trace_GetEntityHitId(&traceResult);
    v32 = (unsigned __int16)(traceResult.partGroup - 19) <= 1u;
    if ( v51 )
    {
      v25 = (unsigned __int16)(traceResult.partGroup - 19) <= 1u && v31 == (__int16)EntityHitId;
    }
    else if ( v54 || outIsAlternate[0] )
    {
      if ( BG_IsCharacterEntityIndex(v31) || !v54 && v52 )
      {
        LOWORD(EntityHitId) = v31;
        v25 = v32;
        v17 = &g_entities[(__int16)v31];
        health = v17->health;
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 567, ASSERT_TYPE_ASSERT, "(simTraceHitShieldPlayer || simTracePossiblyMissedPronePlayer || simTracePossiblyMissedVehicleRider)", (const char *)&queryFormat, "simTraceHitShieldPlayer || simTracePossiblyMissedPronePlayer || simTracePossiblyMissedVehicleRider") )
    {
      __debugbreak();
    }
  }
  v8 = enta;
LABEL_75:
  if ( (_WORD)EntityHitId == 2047 || !v17 )
    return 0i64;
  if ( (_WORD)EntityHitId != 2046 )
  {
    Base = G_PhysicsObject_GetBase((__int16)EntityHitId, LOCAL_CLIENT_INVALID);
    if ( !Base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 594, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    v34 = Base->physicsInstances[0];
    if ( v34 != -1 )
      Physics_ApplyBulletForceInstance(PHYSICS_WORLD_ID_FIRST, v34, &position, &wp.forward, v8->s.number, 1);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, gentity_s *, gentity_s *))(**(_QWORD **)outAnimType + 32i64))(*(_QWORD *)outAnimType, v8, v17) )
    return 0i64;
  v35 = BG_MeleeImpactRumble(&wp.weapon, wp.isAlternate);
  if ( v17->client )
  {
    if ( v35 )
    {
      Index = Rumble_GetIndex(v35);
      if ( Index )
      {
        v17->r.svFlags &= ~1u;
        G_Utils_AddEvent(v17, 0x94u, Index);
      }
    }
  }
  if ( G_Utils_IsClientOrActorOrAgent(v17) )
  {
    IsClient = G_Utils_IsClient(v17);
    v39 = SV_IsAgentBot(v17->s.number) != 0;
    if ( !IsClient && !v39 || Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_melee_shield_sfx_fix_enabled, "killswitch_melee_shield_sfx_fix_enabled") && v25 )
      G_Combat_SendMeleeCharacterImpactEvent(v17, v17, v8, &wp.weapon, wp.isAlternate, &position, MOD_MELEE);
  }
  else
  {
    v37 = G_Utils_SpawnEventEntity(&position, 84);
    v37->s.lerp.u.anonymous.data[0] = v8->s.number;
    v37->s.otherEntityNum = v17->s.number;
    G_Combat_GetMeleeAttackProperties(v8, &wp.weapon, wp.isAlternate, outAnimType, &outMaterial, outIsAlternate, &damage, (MeleeResult *)&enta);
    v37->s.eventParm = BG_PackMeleeParam(outAnimType[0], outMaterial, outIsAlternate[0], damage);
    v37->s.eventParm2 = (trace.surfaceFlags >> 19) & 0x3F;
  }
  if ( v17->s.number == 2046 )
    return 0i64;
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v17->s.lerp.eFlags, ACTIVE, 0x10u) )
    return 0i64;
  v40 = wp.isAlternate;
  v64[0] = SLODWORD(wp.forward.v[0]);
  v41 = v59->hasFatalDamage;
  *(float *)&v64[2] = wp.forward.v[2] + directionTweak;
  v64[1] = SLODWORD(wp.forward.v[1]);
  v42 = GHandler::getHandler();
  v43 = PM_Damage_CalcMeleeDamage(v42, v41, &wp.weapon, v40, EntityHitId);
  if ( v43 <= 0 )
    return 0i64;
  none = scr_const.none;
  v45 = 0;
  if ( v25 )
  {
    v45 = 16;
    if ( G_Utils_IsClientOrAgent(v17) )
    {
      CombatSystem = GCombat::GetCombatSystem();
      if ( CombatSystem->ShieldNotifyAndDamage(CombatSystem, v17, v8, v8, (const vec3_t *)v64, &position, v43, 16, 8, &wp.weapon, wp.isAlternate, 0) )
      {
        if ( v60 )
          *v60 = health - v17->health;
        return v17;
      }
    }
  }
  v48 = GCombat::GetCombatSystem();
  *(_WORD *)outIsAlternate = 0;
  LOBYTE(v50) = wp.isAlternate;
  v49 = v48->Damage(v48, v17, v8, v8, (const vec3_t *)v64, &position, v43, v45, 8, &wp.weapon, v50, HITLOC_NONE, trace.modelIndex, none, 0, &trace.normal, (const GExtraDamageParams *)outIsAlternate);
  if ( v62 )
    *v62 = v49;
  if ( v60 )
    *v60 = health - v17->health;
  if ( !attackerPs )
    return v17;
  G_Utils_IsClientOrActorOrAgent(v17);
  return v17;
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

char __fastcall G_Weapon_PlayerIsRiotShieldOnBack(const gentity_s *ent, __int64 a2, double a3)
{
  GWeaponMap *Instance; 
  const playerState_s *EntityPlayerStateConst; 
  const Weapon *CurrentWeaponForPlayer; 
  unsigned int v7; 
  __int64 v9; 
  __int64 v10; 
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
      LODWORD(v10) = 15;
      LODWORD(v9) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    r_weapon = *BgWeaponMap::GetWeapon(Instance, EntityPlayerStateConst->weaponsEquipped[v7]);
    if ( LOWORD(a3) )
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
  gentity_s *v17; 
  const dvar_t *v18; 
  gentity_s *v19; 
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
  BgMissile::CalculateRocketLaunchTransform(v16, wp, serverTime, spread, &outLaunchPos, &dir);
  v17 = G_Missile_FireRocket(ent, weapon, isAlternate, hand, &outLaunchPos, &dir, gunVel, fireParms, gameTime, magicBullet);
  v18 = DCONST_DVARMPBOOL_missileMacross;
  v19 = v17;
  if ( !DCONST_DVARMPBOOL_missileMacross && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "missileMacross") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.enabled )
    G_Weapon_MacrossMissiles(ent, weapon, isAlternate, hand, wp, &outLaunchPos, gunVel, fireParms, gameTime, magicBullet);
  return v19;
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
  Weapon *p_streamWeapon; 
  SvClient *CommonClient; 
  GHandler *Handler; 
  GWeaponMap *Instance; 
  gclient_s *client; 
  __int64 v11; 
  __int64 v12; 

  v2 = clientNum;
  if ( (unsigned int)clientNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2246, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( 2048 ) )", "clientNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", clientNum, 2048) )
    __debugbreak();
  v4 = &level.gentities[v2];
  EntityPlayerState = G_GetEntityPlayerState(v4);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2250, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v2 >= level.maxclients )
  {
    LODWORD(v12) = level.maxclients;
    LODWORD(v11) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2262, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  p_streamWeapon = &level.clients[v2].streamWeapon;
  *(__m256i *)&p_streamWeapon->weaponIdx = *(__m256i *)&weapon->weaponIdx;
  *(_OWORD *)&p_streamWeapon->attachmentVariationIndices[5] = *(_OWORD *)&weapon->attachmentVariationIndices[5];
  *(double *)&p_streamWeapon->attachmentVariationIndices[21] = *(double *)&weapon->attachmentVariationIndices[21];
  *(_DWORD *)&p_streamWeapon->weaponCamo = *(_DWORD *)&weapon->weaponCamo;
  CommonClient = SvClient::GetCommonClient(v2);
  if ( CommonClient->IsTestClient(CommonClient) )
  {
    Handler = GHandler::getHandler();
    Instance = GWeaponMap::GetInstance();
    BG_SetCurrentWeaponForPlayer(Instance, EntityPlayerState, weapon, Handler);
    if ( !v4->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2285, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
      __debugbreak();
    client = v4->client;
    *(__m256i *)&client->sess.oldcmd.weapon.weaponIdx = *(__m256i *)&weapon->weaponIdx;
    *(_OWORD *)&client->sess.oldcmd.weapon.attachmentVariationIndices[5] = *(_OWORD *)&weapon->attachmentVariationIndices[5];
    *(double *)&client->sess.oldcmd.weapon.attachmentVariationIndices[21] = *(double *)&weapon->attachmentVariationIndices[21];
    *(_DWORD *)&client->sess.oldcmd.weapon.weaponCamo = *(_DWORD *)&weapon->weaponCamo;
  }
  else
  {
    if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
      __debugbreak();
    GWeapon::ms_gWeaponSystem->SendWeaponCommand(GWeapon::ms_gWeaponSystem, v2, 97, weapon);
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
  const playerState_s *EntityPlayerStateConst; 
  gagent_s *agent; 
  double v16; 
  const dvar_t *v17; 
  PlayerHandIndex hand; 
  char *fmt; 

  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1112, ASSERT_TYPE_ASSERT, "( attacker != nullptr )", (const char *)&queryFormat, "attacker != nullptr") )
    __debugbreak();
  if ( !outParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1113, ASSERT_TYPE_ASSERT, "( outParams != nullptr )", (const char *)&queryFormat, "outParams != nullptr") )
    __debugbreak();
  if ( !attacker->agent && !attacker->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1114, ASSERT_TYPE_ASSERT, "( ( attacker->agent != nullptr ) || ( attacker->client != nullptr ) )", (const char *)&queryFormat, "( attacker->agent != nullptr ) || ( attacker->client != nullptr )") )
    __debugbreak();
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  Handler = GHandler::getHandler();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(attacker);
  G_Weapon_SetupWeaponParams(attacker, gameTime, outParams);
  agent = attacker->agent;
  if ( agent )
    _XMM6 = LODWORD(agent->currentAimSpreadScale);
  else
    _XMM6 = LODWORD(attacker->client->currentAimSpreadScale);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2941, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _XMM0 = LODWORD(EntityPlayerStateConst->weapCommon.fWeaponPosFrac);
  __asm
  {
    vcmpeqss xmm2, xmm0, cs:__real@3f800000
    vblendvps xmm6, xmm6, xmm1, xmm2
  }
  v16 = BG_CalculateFinalSpreadForWeapon(Handler, EntityPlayerStateConst, &outParams->wp.weapon, *(float *)&_XMM6);
  if ( attacker->client )
  {
    v17 = DCONST_DVARBOOL_bg_aimSpreadDebugLog;
    if ( !DCONST_DVARBOOL_bg_aimSpreadDebugLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_aimSpreadDebugLog") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
    {
      LODWORD(fmt) = level.time;
      Com_Printf(17, "S: G_Weapon_Fire: client->currentAimSpreadScale: %.5f Aim spread scale: %.5f Server Time: %d\n", *(float *)&_XMM6, attacker->client->ps.weapCommon.aimSpreadScale, fmt);
    }
  }
  hand = BG_GetHandFromWeaponEvent(eventType);
  G_Bullet_SetupFireParams(attacker, attacker, gameTime, *(const float *)&v16, 0, hand, eventParm, outParams);
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
  unsigned __int16 v3; 
  GWeaponMap *Instance; 
  const playerState_s *EntityPlayerStateConst; 
  const Weapon *WeaponForEntity; 
  __int128 v10; 
  double v11; 
  int v12; 
  const Weapon *FirstEquippedWeaponBySlot; 
  __m256i v14; 
  GHandler *Handler; 
  GHandler *v16; 
  GAntiLag *v17; 
  __int16 meleeChargeEnt; 
  bool v19; 
  double MeleeRange; 
  __int16 v21; 
  gentity_s *v22; 
  bool hasFatalDamage; 
  bool v24; 
  bool v25; 
  vec3_t *outConeUp; 
  int outMeleeDamageTime; 
  int outMeleeTime; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 

  Instance = GWeaponMap::GetInstance();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1234, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  memset_0(outParams, 0, sizeof(GMeleeFireParms));
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
  v10 = *(_OWORD *)&WeaponForEntity->attachmentVariationIndices[5];
  v11 = *(double *)&WeaponForEntity->attachmentVariationIndices[21];
  v12 = *(_DWORD *)&WeaponForEntity->weaponCamo;
  *(__m256i *)axis.m[0].v = *(__m256i *)&WeaponForEntity->weaponIdx;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->weapCommon.weapFlags, ACTIVE, 0x22u) && (FirstEquippedWeaponBySlot = BG_GetFirstEquippedWeaponBySlot(Instance, EntityPlayerStateConst, WEAPON_SLOT_MELEE), FirstEquippedWeaponBySlot->weaponIdx) )
  {
    v14 = *(__m256i *)&FirstEquippedWeaponBySlot->weaponIdx;
    v10 = *(_OWORD *)&FirstEquippedWeaponBySlot->attachmentVariationIndices[5];
    v11 = *(double *)&FirstEquippedWeaponBySlot->attachmentVariationIndices[21];
    v12 = *(_DWORD *)&FirstEquippedWeaponBySlot->weaponCamo;
  }
  else
  {
    v14 = *(__m256i *)axis.m[0].v;
  }
  *(__m256i *)&outParams->wp.weapon.weaponIdx = v14;
  *(_OWORD *)&outParams->wp.weapon.attachmentVariationIndices[5] = v10;
  *(double *)&outParams->wp.weapon.attachmentVariationIndices[21] = v11;
  *(_DWORD *)&outParams->wp.weapon.weaponCamo = v12;
  outParams->wp.isAlternate = 0;
  if ( v3 > bg_lastParsedWeaponIndex )
  {
    LODWORD(outConeUp) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", outConeUp, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  if ( !bg_weaponDefs[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  outParams->wp.weapDef = bg_weaponDefs[v3];
  if ( BG_IsThirdPersonMode(Instance, EntityPlayerStateConst) )
  {
    Handler = GHandler::getHandler();
    BG_GetThirdPersonMeleeCone(Handler, EntityPlayerStateConst, &outParams->wp.muzzleTrace, &outParams->wp.forward, &outParams->wp.right, &outParams->wp.up);
  }
  else
  {
    G_Client_GetWeaponOrigin(EntityPlayerStateConst, &outParams->wp.muzzleTrace);
    v16 = GHandler::getHandler();
    BG_GetPlayerViewDirection(EntityPlayerStateConst, &outParams->wp.forward, &outParams->wp.right, &outParams->wp.up, v16, 0);
  }
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v17 = GAntiLag::ms_gAntiLagData;
  if ( GAntiLag::ms_gAntiLagData->ShouldPerformFireMeleeAntiLag(GAntiLag::ms_gAntiLagData, gameTime, ent) )
  {
    axis = *(tmat33_t<vec3_t> *)outParams->wp.forward.v;
    AxisToAngles(&axis, &angles);
    GAntiLag::RewindPlayerMuzzleTrace(v17, gameTime, ent->s.number, &outParams->wp.muzzleTrace, &angles);
  }
  meleeChargeEnt = EntityPlayerStateConst->meleeChargeEnt;
  v19 = meleeChargeEnt >= 0 && (unsigned __int16)meleeChargeEnt <= 0x7FEu;
  MeleeRange = BG_GetMeleeRange(Instance, EntityPlayerStateConst, v19);
  outParams->meleeRange = *(float *)&MeleeRange;
  outParams->hasFatalDamage = EntityPlayerStateConst->weapState[0].weaponState == 23;
  outParams->isAltMelee = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->weapCommon.weapFlags, ACTIVE, 0x26u);
  outParams->targetEntity = 2047;
  v21 = EntityPlayerStateConst->meleeChargeEnt;
  if ( v21 >= 0 && (unsigned __int16)v21 <= 0x7FEu )
  {
    v22 = &g_entities[v21];
    if ( BG_IsCharacterEntity(&v22->s) )
    {
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2004, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v22->s.lerp.eFlags, ACTIVE, 0x11u) )
      {
        hasFatalDamage = outParams->hasFatalDamage;
        outParams->targetEntity = v22->s.number;
        outParams->hasTargetLock = 1;
        if ( BG_Skydive_IsSkydiving(EntityPlayerStateConst) )
        {
          v24 = 0;
        }
        else
        {
          v24 = 0;
          if ( BG_Ladder_IsDualWieldingAllowed(EntityPlayerStateConst) )
            v24 = EntityPlayerStateConst->weapCommon.lastWeaponHand == WEAPON_HAND_LEFT;
        }
        v25 = BG_UsingAlternate(EntityPlayerStateConst);
        BG_GetMeleeTime(Instance, EntityPlayerStateConst, v25, v24, hasFatalDamage, &outMeleeTime, &outMeleeDamageTime, &outParams->targetLockTime);
      }
    }
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
  const playerState_s *EntityPlayerStateConst; 
  gagent_s *agent; 
  float v14; 
  int IsEntityInUse; 
  unsigned int weapLockedEntnum; 
  gagent_s *v17; 
  gclient_s *client; 
  double Float_Internal_DebugName; 

  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1156, ASSERT_TYPE_ASSERT, "( attacker != nullptr )", (const char *)&queryFormat, "attacker != nullptr") )
    __debugbreak();
  if ( !attacker->agent && !attacker->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1157, ASSERT_TYPE_ASSERT, "( (attacker->agent != nullptr) || (attacker->client != nullptr) )", (const char *)&queryFormat, "(attacker->agent != nullptr) || (attacker->client != nullptr)") )
    __debugbreak();
  if ( !GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 74, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem )", (const char *)&queryFormat, "ms_gWeaponSystem") )
    __debugbreak();
  Handler = GHandler::getHandler();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(attacker);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1162, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
    __debugbreak();
  G_Weapon_SetupWeaponParams(attacker, gameTime, outParams);
  agent = attacker->agent;
  if ( agent )
    _XMM6 = LODWORD(agent->currentAimSpreadScale);
  else
    _XMM6 = LODWORD(attacker->client->currentAimSpreadScale);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2941, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _XMM0 = LODWORD(EntityPlayerStateConst->weapCommon.fWeaponPosFrac);
  __asm
  {
    vcmpeqss xmm1, xmm0, cs:__real@3f800000
    vblendvps xmm3, xmm6, xmm7, xmm1; aimSpreadScale
  }
  *(double *)&_XMM0 = BG_CalculateFinalSpreadForWeapon(Handler, EntityPlayerStateConst, &outParams->wp.weapon, *(float *)&_XMM3);
  outParams->missile.attackerSpread = *(float *)&_XMM0;
  if ( (EntityPlayerStateConst->weapCommon.weapLockFlags & 2) != 0 )
  {
    outParams->missile.missileParams.valid = 1;
    outParams->missile.missileParams.lockon = 1;
    if ( (EntityPlayerStateConst->weapCommon.weapLockFlags & 0x40) != 0 )
    {
      outParams->bullet.randSeed = 2047;
      *(_QWORD *)&outParams->deploy.deployTransform.row0.y = *(_QWORD *)EntityPlayerStateConst->weapCommon.weapLockedPos.v;
      v14 = EntityPlayerStateConst->weapCommon.weapLockedPos.v[2];
    }
    else
    {
      IsEntityInUse = G_IsEntityInUse(EntityPlayerStateConst->weapCommon.weapLockedEntnum);
      outParams->missile.missileParams.valid = IsEntityInUse != 0;
      if ( IsEntityInUse )
        weapLockedEntnum = EntityPlayerStateConst->weapCommon.weapLockedEntnum;
      else
        weapLockedEntnum = 2047;
      outParams->bullet.randSeed = weapLockedEntnum;
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND) )
      {
        if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1190, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::SP)", "%s\n\tTarget system supported in SP only", "Com_GameMode_GetActiveGameMode() == GameModeType::SP") )
          __debugbreak();
        if ( outParams->missile.missileParams.valid )
          G_Targets_GetOffset(&g_entities[EntityPlayerStateConst->weapCommon.weapLockedEntnum], &outParams->missile.missileParams.targetPosOrOffset);
        else
          G_Targets_GetOffset(NULL, &outParams->missile.missileParams.targetPosOrOffset);
        goto LABEL_37;
      }
      v17 = attacker->agent;
      if ( v17 )
      {
        *(_QWORD *)&outParams->deploy.deployTransform.row0.y = *(_QWORD *)v17->lockedTargetOffset.v;
        v14 = v17->lockedTargetOffset.v[2];
      }
      else
      {
        client = attacker->client;
        *(_QWORD *)&outParams->deploy.deployTransform.row0.y = *(_QWORD *)client->lockedTargetOffset.v;
        v14 = client->lockedTargetOffset.v[2];
      }
    }
    outParams->bullet.rangeScale = v14;
LABEL_37:
    if ( (EntityPlayerStateConst->weapCommon.weapLockFlags & 4) != 0 )
      outParams->missile.missileParams.topFire = 1;
    return;
  }
  if ( EntityPlayerStateConst->airburstMarkDistance && (float)outParams->wp.weapDef->iProjectileSpeed > 0.0 && Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_OFFHAND_END) && BG_WeaponDef(&outParams->wp.weapon, 0)->isAirburstWeapon )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1217, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_AIRBURST ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_AIRBURST )") )
      __debugbreak();
    outParams->missile.missileParams.valid = 1;
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_airburstAdjustDistance, "airburstAdjustDistance");
    outParams->bullet.penetrationMultiplier = (float)((float)EntityPlayerStateConst->airburstMarkDistance + *(float *)&Float_Internal_DebugName) / (float)outParams->wp.weapDef->iProjectileSpeed;
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
  __int64 v7; 
  __int64 v8; 
  __m256i v9; 
  Weapon result; 

  if ( !weaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2122, ASSERT_TYPE_ASSERT, "( weaponIndex != 0 )", (const char *)&queryFormat, "weaponIndex != 0") )
    __debugbreak();
  NumWeapons = BG_GetNumWeapons();
  Handler = GHandler::getHandler();
  GameTypeQuick = GHandler::GetGameTypeQuick(Handler);
  v9 = *(__m256i *)&BG_Weapons_RegisterWeaponForName(&result, name, G_Items_SetupWeapon, (const GameTypeQuick_t)GameTypeQuick, Handler)->weaponIdx;
  if ( NumWeapons == BG_GetNumWeapons() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2131, ASSERT_TYPE_ASSERT, "(initialWeaponCount != BG_GetNumWeapons())", "%s\n\tWeapon '%s' was not added during parsing, and is most likely a duplicate. Will cause NetConstStrings errors since offsets won't match", "initialWeaponCount != BG_GetNumWeapons()", name) )
    __debugbreak();
  if ( v9.m256i_u16[0] != weaponIndex )
  {
    LODWORD(v8) = weaponIndex;
    LODWORD(v7) = v9.m256i_u16[0];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2132, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx ) == ( weaponIndex )", "weapon.weaponIdx == weaponIndex\n\t%i, %i", v7, v8) )
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
  const WeaponDef *v8; 
  bool isAlternate; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1316, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !outParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1317, ASSERT_TYPE_ASSERT, "( outParams != nullptr )", (const char *)&queryFormat, "outParams != nullptr") )
    __debugbreak();
  memset_0(outParams, 0, sizeof(BgWeaponParms));
  *(__m256i *)&outParams->weapon.weaponIdx = *(__m256i *)&offhandWeapon->weaponIdx;
  *(_OWORD *)&outParams->weapon.attachmentVariationIndices[5] = *(_OWORD *)&offhandWeapon->attachmentVariationIndices[5];
  *(double *)&outParams->weapon.attachmentVariationIndices[21] = *(double *)&offhandWeapon->attachmentVariationIndices[21];
  *(_DWORD *)&outParams->weapon.weaponCamo = *(_DWORD *)&offhandWeapon->weaponCamo;
  v8 = BG_WeaponDef(offhandWeapon, 0);
  isAlternate = outParams->isAlternate;
  outParams->weapDef = v8;
  if ( !BG_IsOffhandWeaponType(&outParams->weapon, isAlternate) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1325, ASSERT_TYPE_ASSERT, "(BG_IsOffhandWeaponType( outParams->weapon, outParams->isAlternate ))", (const char *)&queryFormat, "BG_IsOffhandWeaponType( outParams->weapon, outParams->isAlternate )") )
    __debugbreak();
  if ( BG_GetWeaponType(&outParams->weapon, outParams->isAlternate) == WEAPTYPE_GRENADE )
    G_Weapon_CalcMuzzlePoints(ent, gameTime, outParams);
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

  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1083, ASSERT_TYPE_ASSERT, "( attacker != nullptr )", (const char *)&queryFormat, "attacker != nullptr") )
    __debugbreak();
  if ( !outParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1084, ASSERT_TYPE_ASSERT, "( outParams != nullptr )", (const char *)&queryFormat, "outParams != nullptr") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  memset_0(outParams, 0, sizeof(GWeaponFireParms));
  outParams->wp.weapon = *BG_GetWeaponForEntity(Instance, &attacker->s);
  inAltWeaponMode = attacker->s.inAltWeaponMode;
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(attacker);
  if ( EntityPlayerStateConst )
    inAltWeaponMode = BG_GetAltWeaponModeAsStoredInEntityState(EntityPlayerStateConst, Instance);
  outParams->wp.isAlternate = inAltWeaponMode;
  outParams->wp.weapDef = BG_WeaponDef(&outParams->wp.weapon, inAltWeaponMode);
  G_Weapon_CalcMuzzlePoints(attacker, gameTime, &outParams->wp);
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
gentity_s *G_Weapon_ThrowGrenade(gentity_s *ent, const int gameTime, const BgWeaponParms *wp)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  gagent_s *agent; 
  float grenadeThrowSpeedScale; 
  float grenadeThrowSpeedUpScale; 
  gclient_s *client; 
  int v13; 
  int v14; 
  float v15; 
  __int128 v16; 
  float v17; 
  float v18; 
  float v19; 
  const WeaponDef *weapDef; 
  __int128 v21; 
  float v24; 
  bool isAlternate; 
  const playerState_s *EntityPlayerState; 
  GWeaponMap *Instance; 
  int fuseTime; 
  gentity_s *v29; 
  playerState_s *v30; 
  __int128 v31; 
  float v35; 
  float v36; 
  __int64 hand; 
  int outSpeed; 
  int outSpeedUp; 
  vec3_t dir; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 

  v44 = v3;
  v43 = v4;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 745, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 746, ASSERT_TYPE_ASSERT, "( wp )", (const char *)&queryFormat, "wp") )
    __debugbreak();
  if ( BG_GetWeaponType(&wp->weapon, wp->isAlternate) != WEAPTYPE_GRENADE )
  {
    LODWORD(hand) = BG_GetWeaponType(&wp->weapon, wp->isAlternate);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 747, ASSERT_TYPE_ASSERT, "( BG_GetWeaponType( wp->weapon, wp->isAlternate ) ) == ( WEAPTYPE_GRENADE )", "BG_GetWeaponType( wp->weapon, wp->isAlternate ) == WEAPTYPE_GRENADE\n\t%i, %i", hand, 3) )
      __debugbreak();
  }
  G_Missile_GetScaledProjectileSpeed(ent, &wp->weapon, wp->isAlternate, &outSpeed, &outSpeedUp);
  agent = ent->agent;
  if ( agent )
  {
    grenadeThrowSpeedScale = agent->grenadeThrowSpeedScale;
    grenadeThrowSpeedUpScale = agent->grenadeThrowSpeedUpScale;
  }
  else
  {
    if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 760, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
      __debugbreak();
    client = ent->client;
    grenadeThrowSpeedScale = client->grenadeThrowSpeedScale;
    grenadeThrowSpeedUpScale = client->grenadeThrowSpeedUpScale;
  }
  if ( grenadeThrowSpeedScale <= 0.0 )
  {
    v13 = outSpeed;
  }
  else
  {
    v13 = (int)(float)((float)outSpeed * grenadeThrowSpeedScale);
    outSpeed = v13;
  }
  if ( grenadeThrowSpeedUpScale <= 0.0 )
  {
    v14 = outSpeedUp;
  }
  else
  {
    v14 = (int)(float)((float)outSpeedUp * grenadeThrowSpeedUpScale);
    outSpeedUp = v14;
  }
  v15 = wp->forward.v[0];
  v16 = LODWORD(wp->forward.v[1]);
  v17 = (float)v13;
  dir.v[0] = wp->forward.v[0] * v17;
  v18 = v17 * wp->forward.v[2];
  dir.v[1] = *(float *)&v16 * v17;
  v19 = (float)v14;
  weapDef = wp->weapDef;
  dir.v[2] = v18 + v19;
  if ( weapDef->iProjectileSpeedForward )
  {
    v21 = v16;
    v42 = v5;
    if ( (float)((float)(*(float *)&v16 * *(float *)&v16) + (float)(v15 * v15)) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    *(float *)&v21 = (float)(*(float *)&v16 * *(float *)&v16) + (float)(v15 * v15);
    _XMM1 = v21;
    __asm { vrsqrtss xmm4, xmm1, xmm1 }
    v24 = _mm_cvtepi32_ps((__m128i)(unsigned int)wp->weapDef->iProjectileSpeedForward).m128_f32[0];
    dir.v[0] = (float)((float)(v15 * *(float *)&_XMM4) * v24) + dir.v[0];
    dir.v[1] = (float)((float)(*(float *)&v16 * *(float *)&_XMM4) * v24) + dir.v[1];
  }
  isAlternate = wp->isAlternate;
  EntityPlayerState = G_GetEntityPlayerState(ent);
  Instance = GWeaponMap::GetInstance();
  LOBYTE(EntityPlayerState) = BgMissile::ShouldBePredicted(Instance, EntityPlayerState, &wp->weapon, isAlternate);
  fuseTime = BG_WeaponFuseTime(&wp->weapon, wp->isAlternate);
  v29 = G_Missile_FireGrenade(ent, &wp->muzzleTrace, &dir, &wp->weapon, wp->isAlternate, WEAPON_HAND_DEFAULT, 1, fuseTime, (_BYTE)EntityPlayerState == 0, gameTime);
  v30 = G_GetEntityPlayerState(ent);
  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 787, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v31 = LODWORD(dir.v[1]);
  *(float *)&v31 = fsqrt((float)((float)(*(float *)&v31 * *(float *)&v31) + (float)(dir.v[0] * dir.v[0])) + (float)(dir.v[2] * dir.v[2]));
  _XMM3 = v31;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  dir.v[0] = dir.v[0] * (float)(1.0 / *(float *)&_XMM0);
  dir.v[1] = dir.v[1] * (float)(1.0 / *(float *)&_XMM0);
  dir.v[2] = dir.v[2] * (float)(1.0 / *(float *)&_XMM0);
  v35 = (float)((float)(dir.v[1] * v30->velocity.v[1]) + (float)(dir.v[0] * v30->velocity.v[0])) + (float)(dir.v[2] * v30->velocity.v[2]);
  *(float *)&_XMM3 = (float)(dir.v[0] * v35) + v29->s.lerp.pos.trDelta.v[0];
  v29->s.lerp.pos.trDelta.v[0] = *(float *)&_XMM3;
  v29->s.lerp.pos.trDelta.v[1] = (float)(v35 * dir.v[1]) + v29->s.lerp.pos.trDelta.v[1];
  v36 = (float)(v35 * dir.v[2]) + v29->s.lerp.pos.trDelta.v[2];
  v29->s.lerp.pos.trDelta.v[2] = v36;
  if ( ((_XMM3 & 0x7F800000) == 2139095040 || (LODWORD(v29->s.lerp.pos.trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v36) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 793, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( m->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( m->s.lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m->s.lerp.pos.trDelta )[0] ) && !IS_NAN( ( m->s.lerp.pos.trDelta )[1] ) && !IS_NAN( ( m->s.lerp.pos.trDelta )[2] )") )
    __debugbreak();
  return v29;
}

/*
==============
G_Weapon_UseOffHand
==============
*/
void G_Weapon_UseOffHand(gentity_s *const ent, const Weapon *r_offHandWeapon, const int gameTime)
{
  __int128 v6; 
  int v7; 
  double v8; 
  scrContext_t *v9; 
  const playerState_s *EntityPlayerState; 
  GWeaponMap *Instance; 
  OffhandSlot WeaponOffhandSlot; 
  scr_string_t offhand_fired; 
  BgWeaponParms wp; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1316, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  memset_0(&wp, 0, sizeof(wp));
  v6 = *(_OWORD *)&r_offHandWeapon->attachmentVariationIndices[5];
  v7 = *(_DWORD *)&r_offHandWeapon->weaponCamo;
  *(__m256i *)&wp.weapon.weaponIdx = *(__m256i *)&r_offHandWeapon->weaponIdx;
  v8 = *(double *)&r_offHandWeapon->attachmentVariationIndices[21];
  *(_DWORD *)&wp.weapon.weaponCamo = v7;
  *(double *)&wp.weapon.attachmentVariationIndices[21] = v8;
  *(_OWORD *)&wp.weapon.attachmentVariationIndices[5] = v6;
  wp.isAlternate = 0;
  wp.weapDef = BG_WeaponDef(r_offHandWeapon, 0);
  if ( !BG_IsOffhandWeaponType(&wp.weapon, wp.isAlternate) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 1325, ASSERT_TYPE_ASSERT, "(BG_IsOffhandWeaponType( outParams->weapon, outParams->isAlternate ))", (const char *)&queryFormat, "BG_IsOffhandWeaponType( outParams->weapon, outParams->isAlternate )") )
    __debugbreak();
  if ( BG_GetWeaponType(&wp.weapon, wp.isAlternate) == WEAPTYPE_GRENADE )
    G_Weapon_CalcMuzzlePoints(ent, gameTime, &wp);
  if ( !GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 257, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem )", (const char *)&queryFormat, "ms_gMissileSystem") )
    __debugbreak();
  BgMissile::UseOffhand(GMissile::ms_gMissileSystem, ent->s.number, gameTime, &wp);
  v9 = ScriptContext_Server();
  GScr_Weapon_AddParam(v9, &wp.weapon, wp.isAlternate);
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
  __int64 v5; 
  __int64 v6; 
  Weapon outWeapon; 
  __m256i v8; 

  if ( !weaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2140, ASSERT_TYPE_ASSERT, "( weaponIndex != 0 )", (const char *)&queryFormat, "weaponIndex != 0") )
    __debugbreak();
  NumWeapons = BG_GetNumWeapons();
  BG_Weapons_GetFullWeaponForName(name, &outWeapon, BG_FindBaseWeaponForName);
  v8 = *(__m256i *)&outWeapon.weaponIdx;
  if ( NumWeapons != BG_GetNumWeapons() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2152, ASSERT_TYPE_ASSERT, "(initialWeaponCount == BG_GetNumWeapons())", "%s\n\tWeapon '%s' was added but should have already existed. Can cause NetConstStrings errors since offsets won't match", "initialWeaponCount == BG_GetNumWeapons()", name) )
    __debugbreak();
  if ( v8.m256i_u16[0] != weaponIndex )
  {
    LODWORD(v6) = weaponIndex;
    LODWORD(v5) = v8.m256i_u16[0];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.cpp", 2153, ASSERT_TYPE_ASSERT, "( weapon.weaponIdx ) == ( weaponIndex )", "weapon.weaponIdx == weaponIndex\n\t%i, %i", v5, v6) )
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

