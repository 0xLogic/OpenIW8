/*
==============
GCombatSP::NotifyRadiusDamage
==============
*/

void __fastcall GCombatSP::NotifyRadiusDamage(GCombatSP *this, const vec3_t *damageOrigin, float damageRadius, gentity_s *attackerEnt, const Weapon *r_weapon, bool isAlternate)
{
  ?NotifyRadiusDamage@GCombatSP@@UEBAXAEBTvec3_t@@MPEAUgentity_s@@AEBUWeapon@@_N@Z(this, damageOrigin, damageRadius, attackerEnt, r_weapon, isAlternate);
}

/*
==============
GCombatSP::Damage
==============
*/

damageReturnCode_t __fastcall GCombatSP::Damage(GCombatSP *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  return ?Damage@GCombatSP@@UEBA?AW4damageReturnCode_t@@PEAUgentity_s@@PEBU3@0PEBTvec3_t@@2HHHAEBUWeapon@@_NW4hitLocation_t@@IW4scr_string_t@@H2AEBVGExtraDamageParams@@@Z(this, targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset, surfaceNormal, extraParams);
}

/*
==============
GCombatSP::GetRadiusDamageFromPos
==============
*/

double __fastcall GCombatSP::GetRadiusDamageFromPos(GCombatSP *this, gentity_s *ent, gentity_s *ignoreEnt, const vec3_t *damageOrigin, int contentMask, bool detailTrace, unsigned __int8 *priorityMap)
{
  double result; 

  *(float *)&result = ?GetRadiusDamageFromPos@GCombatSP@@UEBAMPEAUgentity_s@@0AEBTvec3_t@@H_NPEAE@Z(this, ent, ignoreEnt, damageOrigin, contentMask, detailTrace, priorityMap);
  return result;
}

/*
==============
GCombatSP::ShieldNotifyAndDamage
==============
*/

bool __fastcall GCombatSP::ShieldNotifyAndDamage(GCombatSP *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *r_weapon, bool isAlternate, int timeOffset)
{
  return ?ShieldNotifyAndDamage@GCombatSP@@UEBA_NPEAUgentity_s@@PEBU2@0PEBTvec3_t@@2HHHAEBUWeapon@@_NH@Z(this, targ, inflictor, attacker, dir, point, damage, dFlags, mod, r_weapon, isAlternate, timeOffset);
}

/*
==============
GCombatSP::CalcVehicleImpactDamage
==============
*/

int __fastcall GCombatSP::CalcVehicleImpactDamage(GCombatSP *this, const Vehicle *veh, const VehicleDef *vehDef, gentity_s *vehEnt, const float vehicleSpeed, const gentity_s *receiver, const vec3_t *moveDir)
{
  return ?CalcVehicleImpactDamage@GCombatSP@@UEBAHPEBUVehicle@@PEBUVehicleDef@@PEAUgentity_s@@MPEBU4@AEBTvec3_t@@@Z(this, veh, vehDef, vehEnt, vehicleSpeed, receiver, moveDir);
}

/*
==============
G_CombatSP_Damage
==============
*/

damageReturnCode_t __fastcall G_CombatSP_Damage(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  return ?G_CombatSP_Damage@@YA?AW4damageReturnCode_t@@PEAUgentity_s@@PEBU2@0PEBTvec3_t@@2HHHAEBUWeapon@@_NW4hitLocation_t@@IW4scr_string_t@@H2AEBVGExtraDamageParams@@@Z(targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset, surfaceNormal, extraParams);
}

/*
==============
G_CombatSP_PlayerDie
==============
*/

void __fastcall G_CombatSP_PlayerDie(gentity_s *self, const gentity_s *inflictor, gentity_s *attacker, int damage, int damageFlags, int meansOfDeath, const Weapon *r_weapon, bool isAlternate, const vec3_t *vDir, const hitLocation_t hitLoc, int timeOffset)
{
  ?G_CombatSP_PlayerDie@@YAXPEAUgentity_s@@PEBU1@0HHHAEBUWeapon@@_NPEBTvec3_t@@W4hitLocation_t@@H@Z(self, inflictor, attacker, damage, damageFlags, meansOfDeath, r_weapon, isAlternate, vDir, hitLoc, timeOffset);
}

/*
==============
GCombatSP::FinalizePlayerDeath
==============
*/

void __fastcall GCombatSP::FinalizePlayerDeath(GCombatSP *this, gentity_s *self, const gentity_s *inflictor, gentity_s *attacker, const int damage, const int damageFlags, const int mod, const Weapon *r_weapon, bool isAlternate, const vec3_t *vDir, const vec3_t *point, const hitLocation_t hitLoc, int timeOffset, int modelIndex, scr_string_t partName)
{
  ?FinalizePlayerDeath@GCombatSP@@UEAAXPEAUgentity_s@@PEBU2@0HHHAEBUWeapon@@_NPEBTvec3_t@@4W4hitLocation_t@@HHW4scr_string_t@@@Z(this, self, inflictor, attacker, damage, damageFlags, mod, r_weapon, isAlternate, vDir, point, hitLoc, timeOffset, modelIndex, partName);
}

/*
==============
GCombatSP::RadiusDamage
==============
*/

void __fastcall GCombatSP::RadiusDamage(GCombatSP *this, const vec3_t *origin, gentity_s *inflictor, gentity_s *attacker, const BgExplosionDamageRangeInfo *damageRangeInfo, float coneAngleCos, const vec3_t *coneDirection, gentity_s *ignore, meansOfDeath_t mod, const Weapon *r_weapon, bool isAlternate, bool environmentOnly, bool runOcclusionTraces)
{
  ?RadiusDamage@GCombatSP@@UEBAXAEBTvec3_t@@PEAUgentity_s@@1AEBUBgExplosionDamageRangeInfo@@MPEBT2@1W4meansOfDeath_t@@AEBUWeapon@@_N66@Z(this, origin, inflictor, attacker, damageRangeInfo, coneAngleCos, coneDirection, ignore, mod, r_weapon, isAlternate, environmentOnly, runOcclusionTraces);
}

/*
==============
GCombatSP::Damage_Internal
==============
*/

damageReturnCode_t __fastcall GCombatSP::Damage_Internal(GCombatSP *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  return ?Damage_Internal@GCombatSP@@UEAA?AW4damageReturnCode_t@@PEAUgentity_s@@PEBU3@0PEBTvec3_t@@2HHHAEBUWeapon@@_NW4hitLocation_t@@IW4scr_string_t@@H2AEBVGExtraDamageParams@@@Z(this, targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset, surfaceNormal, extraParams);
}

/*
==============
GCombatSP::GCombatSP
==============
*/

void __fastcall GCombatSP::GCombatSP(GCombatSP *this)
{
  ??0GCombatSP@@QEAA@XZ(this);
}

/*
==============
GCombatSP::GCombatSP
==============
*/
void GCombatSP::GCombatSP(GCombatSP *this)
{
  GCombat::GCombat(this);
  this->__vftable = (GCombatSP_vtbl *)&GCombatSP::`vftable';
  this->m_locDamageTable[4] = NULL;
  this->m_locDamageTable[5] = NULL;
  this->m_locDamageTable[6] = NULL;
  this->m_locDamageTable[7] = NULL;
  this->m_locDamageTable[0] = "ai_lochit_dmgtable";
  this->m_locDamageTable[1] = "c6_lochit_dmgtable";
  this->m_locDamageTable[2] = "c8_lochit_dmgtable";
  this->m_locDamageTable[3] = "c12_lochit_dmgtable";
}

/*
==============
GCombatSP::CalcVehicleImpactDamage
==============
*/
__int64 GCombatSP::CalcVehicleImpactDamage(GCombatSP *this, const Vehicle *veh, const VehicleDef *vehDef, gentity_s *vehEnt, const float vehicleSpeed, const gentity_s *receiver, const vec3_t *moveDir)
{
  float v9; 
  float v10; 
  float v11; 
  __int128 v12; 
  __int128 v18; 

  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 909, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 910, ASSERT_TYPE_ASSERT, "( vehDef )", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( vehDef->collisionSpeed == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 911, ASSERT_TYPE_ASSERT, "( vehDef->collisionSpeed )", (const char *)&queryFormat, "vehDef->collisionSpeed") )
    __debugbreak();
  v9 = FLOAT_1_0;
  if ( !vehDef->collisionDamageIgnoresImpactAngle )
  {
    v10 = receiver->r.currentOrigin.v[0] - vehEnt->r.currentOrigin.v[0];
    v12 = LODWORD(receiver->r.currentOrigin.v[1]);
    v11 = receiver->r.currentOrigin.v[1] - vehEnt->r.currentOrigin.v[1];
    *(float *)&v12 = fsqrt((float)(v11 * v11) + (float)(v10 * v10));
    _XMM3 = v12;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm6, xmm0
    }
    v9 = (float)((float)(v11 * (float)(1.0 / *(float *)&_XMM0)) * moveDir->v[1]) + (float)((float)(v10 * (float)(1.0 / *(float *)&_XMM0)) * moveDir->v[0]);
    if ( v9 < 0.80000001 )
      return 0i64;
  }
  v18 = LODWORD(vehicleSpeed);
  *(float *)&v18 = vehicleSpeed / vehDef->collisionSpeed;
  _XMM1 = v18;
  __asm { vminss  xmm3, xmm1, xmm6 }
  return (unsigned int)(int)(float)((float)((float)(*(float *)&_XMM3 * (float)(v9 - 0.80000001)) * 5.0000005) * vehDef->collisionDamage);
}

/*
==============
GCombatSP::Damage
==============
*/
damageReturnCode_t GCombatSP::Damage(GCombatSP *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  return G_CombatSP_Damage_Internal(targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset, surfaceNormal, extraParams);
}

/*
==============
GCombatSP::Damage_Internal
==============
*/
damageReturnCode_t GCombatSP::Damage_Internal(GCombatSP *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  return G_CombatSP_Damage_Internal(targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset, surfaceNormal, extraParams);
}

/*
==============
GCombatSP::FinalizePlayerDeath
==============
*/
void GCombatSP::FinalizePlayerDeath(GCombatSP *this, gentity_s *self, const gentity_s *inflictor, gentity_s *attacker)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 964, ASSERT_TYPE_ASSERT, "( false )", (const char *)&queryFormat, "false") )
    __debugbreak();
}

/*
==============
G_CombatSP_Damage
==============
*/
damageReturnCode_t G_CombatSP_Damage(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  return G_CombatSP_Damage_Internal(targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset, surfaceNormal, extraParams);
}

/*
==============
G_CombatSP_DamageKnockback
==============
*/
void G_CombatSP_DamageKnockback(gentity_s *targ, const gentity_s *attacker, const vec3_t *dir, vec3_t *scaledDir, int damage, int dflags, int mod)
{
  float value; 
  char v12; 
  __int128 v13; 
  __int128 v14; 
  gclient_s *client; 
  const dvar_t *v19; 
  int v20; 
  int v21; 
  int v22; 
  const dvar_t *v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 

  value = FLOAT_0_050000001;
  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 346, ASSERT_TYPE_ASSERT, "(targ)", (const char *)&queryFormat, "targ") )
    __debugbreak();
  if ( !dir || mod == 19 )
    v12 = dflags | 4;
  else
    v12 = dflags;
  if ( dir )
  {
    v13 = LODWORD(dir->v[0]);
    v14 = v13;
    *(float *)&v14 = fsqrt((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(dir->v[1] * dir->v[1])) + (float)(dir->v[2] * dir->v[2]));
    _XMM4 = v14;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    scaledDir->v[0] = *(float *)&v13 * (float)(1.0 / *(float *)&_XMM0);
    scaledDir->v[1] = (float)(1.0 / *(float *)&_XMM0) * dir->v[1];
    scaledDir->v[2] = (float)(1.0 / *(float *)&_XMM0) * dir->v[2];
  }
  client = targ->client;
  if ( client )
  {
    v19 = DVARFLT_g_knockbackPlayerScale;
    if ( !DVARFLT_g_knockbackPlayerScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_knockbackPlayerScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    value = v19->current.value;
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 0) )
    {
      value = value * 0.2;
    }
    else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 1u) )
    {
      value = value * 0.60000002;
    }
    if ( (v12 & 1) != 0 )
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&client->ps.weapCommon.weapFlags, ACTIVE, 0x10u);
  }
  v20 = 0;
  v21 = (int)(float)((float)damage * value);
  if ( v21 > 60 )
    v21 = 60;
  v22 = 0;
  if ( (targ->flags.m_flags[0] & 8) == 0 )
    v22 = v21;
  if ( (v12 & 4) == 0 )
    v20 = v22;
  if ( v20 && client && !BG_IsTurretActive(&client->ps) )
  {
    v23 = DVARFLT_g_knockback;
    if ( !DVARFLT_g_knockback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_knockback") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    v24 = scaledDir->v[1];
    v25 = scaledDir->v[2];
    v26 = (float)((float)v20 * v23->current.value) * 0.0040000002;
    client->ps.velocity.v[0] = (float)(v26 * scaledDir->v[0]) + client->ps.velocity.v[0];
    client->ps.velocity.v[1] = (float)(v26 * v24) + client->ps.velocity.v[1];
    v27 = (float)(v26 * v25) + client->ps.velocity.v[2];
    client->ps.velocity.v[2] = v27;
    if ( targ == attacker && (unsigned int)(mod - 4) <= 3 )
      client->ps.velocity.v[2] = v27 * 0.25;
    if ( !client->ps.pm_time )
    {
      client->ps.pm_time = I_clamp(2 * v20, 50, 200);
      client->ps.pm_flags.m_flags[0] |= 0x2000u;
    }
  }
}

/*
==============
G_CombatSP_Damage_Internal
==============
*/
int G_CombatSP_Damage_Internal(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  const Weapon *v17; 
  unsigned int v19; 
  gentity_s *v20; 
  const GExtraDamageParams *v21; 
  GCombat *v22; 
  __int128 v23; 
  double v24; 
  bool v25; 
  int result; 
  double v27; 
  double v28; 
  double v29; 
  const char *v30; 
  scr_string_t targetname; 
  const char *v32; 
  const char *v33; 
  __int16 EntityIndex; 
  __int16 v35; 
  gentity_s *v36; 
  bool IndexForEntity; 
  int v38; 
  scr_string_t v39; 
  unsigned int v40; 
  int v41; 
  gclient_s *client; 
  double Float_Internal_DebugName; 
  float v44; 
  double v45; 
  double v46; 
  double v47; 
  playerState_s *EntityPlayerState; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v50; 
  double v51; 
  gentity_s *v52; 
  gentity_s *v53; 
  sentient_s *sentient; 
  sentient_s *v55; 
  hitLocation_t v56; 
  __int64 unitType; 
  int locDamageTableIndex; 
  bool v59; 
  weapType_t WeaponType; 
  float v61; 
  bool v62; 
  __int64 v63; 
  float v64; 
  GCombat *CombatSystem; 
  __int64 v66; 
  double LocDamageMult; 
  sentient_s *v68; 
  int iDamageParts; 
  actor_s *actor; 
  DamageParts *v71; 
  actor_s *v72; 
  int v73; 
  int v74; 
  vec3_t *v75; 
  int v76; 
  double v77; 
  int v78; 
  int v79; 
  int v80; 
  unsigned int v81; 
  actor_s *v82; 
  int health; 
  gclient_s *v84; 
  int v85; 
  gentity_s *v86; 
  int v87; 
  scrContext_t *v88; 
  sentient_s *v89; 
  void (__fastcall *die)(gentity_s *, const gentity_s *, gentity_s *, const int, const int, const int, const Weapon *, bool, const vec3_t *, const hitLocation_t, int); 
  __int16 v91; 
  void (__fastcall *pain)(gentity_s *, gentity_s *, int, const vec3_t *, const int, const vec3_t *, const hitLocation_t, const Weapon *, bool); 
  gclient_s *v93; 
  int v94; 
  char *fmt; 
  vec3_t *v96; 
  vec3_t *v97; 
  Weapon *v98; 
  unsigned int NumWeapons; 
  Weapon *v100; 
  int v101; 
  int damageMOD; 
  scr_string_t v103; 
  bool v104; 
  int v105; 
  unsigned int damageFlags; 
  vec3_t *dira; 
  vec3_t *hitPos; 
  gentity_s *inflictora; 
  vec3_t *v110; 
  unsigned int scriptableIndex; 
  Weapon *v112; 
  scrContext_t *scrContext; 
  AIActorInterface v114; 
  AIActorInterface *v115; 
  vec3_t scaledDir; 
  Weapon weapon; 

  v17 = r_weapon;
  v19 = mod;
  v20 = (gentity_s *)inflictor;
  v21 = extraParams;
  hitPos = (vec3_t *)point;
  v110 = (vec3_t *)surfaceNormal;
  dira = (vec3_t *)dir;
  inflictora = (gentity_s *)inflictor;
  v105 = mod;
  v112 = (Weapon *)r_weapon;
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  v22 = GCombat::ms_gCombatSystem;
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 539, ASSERT_TYPE_ASSERT, "(combatSystem)", (const char *)&queryFormat, "combatSystem") )
    __debugbreak();
  *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&v17->weaponCamo;
  v104 = isAlternate;
  v23 = *(_OWORD *)&v17->attachmentVariationIndices[5];
  *(__m256i *)&weapon.weaponIdx = *(__m256i *)&v17->weaponIdx;
  v24 = *(double *)&v17->attachmentVariationIndices[21];
  v25 = isAlternate;
  *(double *)&weapon.attachmentVariationIndices[21] = v24;
  *(_OWORD *)&weapon.attachmentVariationIndices[5] = v23;
  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 544, ASSERT_TYPE_ASSERT, "(targ)", (const char *)&queryFormat, "targ") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targ->s.lerp.eFlags, ACTIVE, 0x10u) )
    return 2;
  if ( hitLoc == HITLOC_SHIELD )
    return 3;
  scrContext = ScriptContext_Server();
  if ( !Scr_IsSystemActive(scrContext, 1u) )
  {
    v27 = targ->r.currentOrigin.v[2];
    v28 = targ->r.currentOrigin.v[1];
    v29 = targ->r.currentOrigin.v[0];
    v30 = SL_ConvertToString(targ->classname);
    targetname = targ->targetname;
    v32 = v30;
    if ( targetname )
      v33 = SL_ConvertToString(targetname);
    else
      v33 = "<unnamed>";
    Com_PrintWarning(15, "Ignoring damage on entity with name '%s' of type '%s' at (%.0f %.0f %.0f)\n", v33, v32, v29, v28, v27);
    return 4;
  }
  if ( GCombat::QueuedDamageEnabled(v22) )
  {
    GCombat::QueueDamageInstance(v22, targ, v20, attacker, dira, hitPos, damage, dflags, v19, &weapon, v25, hitLoc, timeOffset, modelIndex, partName, v110, v21);
    return 1;
  }
  if ( !v20 )
  {
    v20 = g_entities + 2046;
    inflictora = g_entities + 2046;
  }
  if ( !attacker )
    attacker = g_entities + 2046;
  EntityIndex = G_GetEntityIndex(targ);
  if ( !G_IsEntityInUse(EntityIndex) )
  {
    LODWORD(v96) = targ->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 580, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( G_GetEntityIndex( targ ) ) ) )", "( targ->s.number ) = %i", v96) )
      __debugbreak();
  }
  v35 = G_GetEntityIndex(attacker);
  if ( !G_IsEntityInUse(v35) )
  {
    LODWORD(v96) = G_GetEntityIndex(attacker);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 581, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( G_GetEntityIndex( attacker ) ) ) )", "( G_GetEntityIndex( attacker ) ) = %i", v96) )
      __debugbreak();
  }
  if ( !weapon.weaponIdx )
  {
    if ( v20 )
    {
      v36 = v20;
LABEL_36:
      G_CombatSP_GetWeaponForEntity(v36, &weapon, &v104, v19 == 8);
      v25 = v104;
      goto LABEL_37;
    }
    if ( attacker )
    {
      v36 = attacker;
      goto LABEL_36;
    }
  }
LABEL_37:
  if ( weapon.weaponIdx >= BG_GetNumWeapons() )
  {
    NumWeapons = BG_GetNumWeapons();
    LODWORD(v96) = weapon.weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 594, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( BG_GetNumWeapons() )", "weapon.weaponIdx doesn't index BG_GetNumWeapons()\n\t%i not in [0, %i)", v96, NumWeapons) )
      __debugbreak();
  }
  IndexForEntity = ScriptableSv_TryGetIndexForEntity(targ, &scriptableIndex);
  v38 = dflags;
  v39 = partName;
  v40 = modelIndex;
  v41 = damage;
  damageFlags = dflags;
  if ( IndexForEntity )
  {
    ScriptableSv_Damage(v20, attacker, scriptableIndex, hitPos, dira, v19, &weapon, v25, partName, damage, dflags, modelIndex);
    v39 = partName;
    v40 = modelIndex;
  }
  if ( targ->vehicle )
    return G_Vehicle_Damage(targ, v20, attacker, dira, hitPos, v41, v38, v19, &weapon, v25, hitLoc, v40, v39, 0);
  if ( targ->s.eType == ET_COVERWALL )
    G_CoverWall_Damage(targ, v20, attacker, dira, hitPos, v41, v38, v19, &weapon, v25, 0);
  client = targ->client;
  if ( client )
  {
    if ( G_Vehicle_IsPlayerProtected(targ) )
      return 6;
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 0) )
      return 7;
    if ( (client->flags & 3) != 0 )
      return 8;
    if ( client->mpviewer )
      return 9;
    if ( v19 != 13 )
    {
      if ( (v38 & 1) != 0 )
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_player_radiusDamageMultiplier, "player_radiusDamageMultiplier");
        v44 = *(float *)&Float_Internal_DebugName;
      }
      else if ( v19 == 8 )
      {
        v45 = Dvar_GetFloat_Internal_DebugName(DVARFLT_player_meleeDamageMultiplier, "player_meleeDamageMultiplier");
        v44 = *(float *)&v45;
      }
      else
      {
        v46 = Dvar_GetFloat_Internal_DebugName(DVARFLT_player_damageMultiplier, "player_damageMultiplier");
        v44 = *(float *)&v46 * client->damageMultiplier;
      }
      G_CombatSP_Damage_Mult_Cap(&damage, v44);
      v41 = damage;
    }
    if ( attacker->client )
    {
      v47 = Dvar_GetFloat_Internal_DebugName(DVARFLT_g_friendlyfireDamageScale, "g_friendlyfireDamageScale");
      G_CombatSP_Damage_Mult_Cap(&damage, *(const float *)&v47);
      v41 = damage;
    }
    EntityPlayerState = G_GetEntityPlayerState(targ);
    if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 657, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (v38 & 1) != 0 )
    {
      PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(3u);
      v50 = (unsigned int)PerkNetworkPriorityIndex;
      if ( PerkNetworkPriorityIndex >= 0 )
      {
        if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
        {
          LODWORD(v98) = 64;
          LODWORD(v96) = PerkNetworkPriorityIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v96, v98) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v50 & 0x1F)) & EntityPlayerState->perks.array[v50 >> 5]) != 0 )
        {
          v51 = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_explosiveArmorMultiplier, "perk_explosiveArmorMultiplier");
          G_CombatSP_Damage_Mult_Cap(&damage, *(const float *)&v51);
          v41 = damage;
        }
      }
    }
    if ( v41 == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 664, ASSERT_TYPE_ASSERT, "(damage < 2147483647)", (const char *)&queryFormat, "damage < INT_MAX") )
      __debugbreak();
    v20 = inflictora;
    if ( !inflictora && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 451, ASSERT_TYPE_ASSERT, "( inflictor )", (const char *)&queryFormat, "inflictor") )
      __debugbreak();
    if ( !targ->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 453, ASSERT_TYPE_ASSERT, "( targ->sentient )", (const char *)&queryFormat, "targ->sentient") )
      __debugbreak();
    if ( v20 )
    {
      if ( v20->s.eType == ET_MISSILE && (v20->c.missile.flags & 0x800) != 0 )
      {
        if ( EntHandle::isDefined(&v20->parent) )
        {
          v52 = EntHandle::ent(&v20->parent);
          v53 = v52;
          if ( v52->actor )
          {
            if ( !v52->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 471, ASSERT_TYPE_ASSERT, "(owner->sentient)", (const char *)&queryFormat, "owner->sentient") )
              __debugbreak();
            if ( targ->sentient->eTeam == v53->sentient->eTeam && level.time - v20->s.lerp.u.anonymous.data[2] <= 2500 && v41 >= targ->health / 2 )
              v41 = targ->health / 2;
          }
        }
      }
    }
    if ( v41 <= 0 )
      v41 = 1;
    damage = v41;
  }
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 421, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  sentient = targ->sentient;
  if ( sentient )
  {
    if ( sentient->bOnlyTakeDamageFromPlayer && !attacker->client )
      return 10;
    if ( sentient->ignoreRandomBulletDamage && attacker->actor )
    {
      if ( !attacker->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 435, ASSERT_TYPE_ASSERT, "( attacker->sentient )", (const char *)&queryFormat, "attacker->sentient") )
        __debugbreak();
      v55 = attacker->sentient;
      if ( !v55->doDamageToAll && (!EntHandle::isDefined(&v55->targetEnt) || EntHandle::ent(&attacker->sentient->targetEnt) != targ) )
        return 10;
    }
  }
  if ( !targ->actor )
    goto LABEL_150;
  v56 = hitLoc;
  if ( (unsigned int)hitLoc > HITLOC_SOFT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 686, ASSERT_TYPE_ASSERT, "((hitLoc >= HITLOC_NONE) && (hitLoc < HITLOC_NUM))", (const char *)&queryFormat, "(hitLoc >= HITLOC_NONE) && (hitLoc < HITLOC_NUM)") )
    __debugbreak();
  if ( !targ->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 687, ASSERT_TYPE_ASSERT, "(targ->sentient)", (const char *)&queryFormat, "targ->sentient") )
    __debugbreak();
  unitType = targ->actor->unitType;
  locDamageTableIndex = targ->sentient->locDamageTableIndex;
  if ( (unsigned int)v56 > HITLOC_SOFT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 182, ASSERT_TYPE_ASSERT, "((hitLoc >= HITLOC_NONE) && (hitLoc < HITLOC_NUM))", (const char *)&queryFormat, "(hitLoc >= HITLOC_NONE) && (hitLoc < HITLOC_NUM)") )
    __debugbreak();
  if ( (unsigned int)v105 > 0x18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 183, ASSERT_TYPE_ASSERT, "((mod >= MOD_UNKNOWN) && (mod < MOD_NUM))", (const char *)&queryFormat, "(mod >= MOD_UNKNOWN) && (mod < MOD_NUM)") )
    __debugbreak();
  v59 = v104;
  WeaponType = BG_GetWeaponType(&weapon, v104);
  v61 = FLOAT_1_0;
  v62 = WeaponType == WEAPTYPE_BULLET;
  if ( WeaponType == WEAPTYPE_BULLET || BG_GetWeaponType(&weapon, v59) == WEAPTYPE_GRENADE || BG_GetWeaponType(&weapon, v59) == WEAPTYPE_PROJECTILE )
  {
    if ( (unsigned int)unitType >= 7 )
    {
      LODWORD(v98) = 7;
      LODWORD(v96) = unitType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1500, ASSERT_TYPE_ASSERT, "(unsigned)( unittype ) < (unsigned)( MAX_AI_UNITTYPES )", "unittype doesn't index MAX_AI_UNITTYPES\n\t%i not in [0, %i)", v96, v98) )
        __debugbreak();
    }
    LOWORD(v63) = weapon.weaponIdx;
    if ( weapon.weaponIdx > bg_lastParsedWeaponIndex )
    {
      LODWORD(v98) = bg_lastParsedWeaponIndex;
      LODWORD(v96) = weapon.weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v96, v98) )
        __debugbreak();
    }
    v63 = (unsigned __int16)v63;
    if ( !bg_weaponDefs[(unsigned __int16)v63] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    v61 = bg_weaponDefs[v63]->unittypeMultipliers[unitType];
    if ( v61 == 0.0 )
      return 11;
    v59 = v104;
  }
  v64 = FLOAT_1_0;
  if ( v105 != 8 )
  {
    CombatSystem = GCombat::GetCombatSystem();
    v66 = hitLoc;
    LocDamageMult = GCombat::GetLocDamageMult(CombatSystem, hitLoc, locDamageTableIndex);
    v64 = *(float *)&LocDamageMult * v61;
    if ( v62 && weapon.weaponIdx )
      v64 = (float)(*(float *)&LocDamageMult * v61) * BG_GetLocationDamageMultipliers(&weapon, v59)[v66];
    if ( v64 == 0.0 )
      return 11;
  }
  G_CombatSP_Damage_Mult_Cap(&damage, v64);
  v41 = damage;
  if ( damage == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 696, ASSERT_TYPE_ASSERT, "(damage < 2147483647)", (const char *)&queryFormat, "damage < INT_MAX") )
    __debugbreak();
  v19 = v105;
  v20 = inflictora;
  if ( v41 <= 0 )
    v41 = 1;
LABEL_150:
  if ( (targ->flags.m_flags[0] & 1) != 0 )
    return 12;
  v68 = targ->sentient;
  if ( v68 )
  {
    iDamageParts = v68->iDamageParts;
    if ( iDamageParts != -1 )
    {
      actor = targ->actor;
      if ( !actor || !actor->combat.damageShield )
      {
        v71 = DamageParts_Get(iDamageParts);
        if ( !v71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 713, ASSERT_TYPE_ASSERT, "(pParts)", (const char *)&queryFormat, "pParts") )
          __debugbreak();
        v41 = DamageParts::ApplyDamage(v71, v20, attacker, dira, hitPos, v41, damageFlags, v19, &weapon, v104, hitLoc, modelIndex, partName);
        if ( !v41 )
          return 13;
      }
    }
  }
  scaledDir.v[0] = 0.0;
  scaledDir.v[1] = 0.0;
  scaledDir.v[2] = 0.0;
  G_CombatSP_DamageKnockback(targ, attacker, dira, &scaledDir, v41, damageFlags, v19);
  if ( (targ->flags.m_flags[0] & 1) != 0 )
    return 12;
  v72 = targ->actor;
  if ( v41 < 1 )
    v41 = 1;
  damage = v41;
  v73 = v41;
  if ( !v72 )
    goto LABEL_169;
  AIActorInterface::AIActorInterface(&v114);
  v115 = NULL;
  AIActorInterface::SetActor(&v114, v72);
  v115 = &v114;
  v74 = AIScriptedInterface::CheckDeathAllowed(&v114, v41, dira);
  v73 = v41 - v74;
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_g_debugDamage, "g_debugDamage") )
  {
    LODWORD(v97) = v74;
    LODWORD(fmt) = v41 - v74;
    Com_Printf(15, "client:%i health:%i damage:%i armor:%i\n", (unsigned int)targ->s.number, (unsigned int)targ->health, fmt, v97);
  }
  if ( v74 )
  {
    v101 = v74;
    v75 = dira;
    G_Combat_DamageNotify(scr_const.damage_notdone, targ, attacker, inflictora, dira, hitPos, v101, v19, damageFlags, modelIndex, partName, &weapon, v104, v110);
  }
  else
  {
LABEL_169:
    v75 = dira;
  }
  if ( client )
  {
    client->damage_blood += v73;
    if ( v19 >= 0x19 )
    {
      LODWORD(v100) = 25;
      LODWORD(v97) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 765, ASSERT_TYPE_ASSERT, "(unsigned)( mod ) < (unsigned)( MOD_NUM )", "mod doesn't index MOD_NUM\n\t%i not in [0, %i)", v97, v100) )
        __debugbreak();
    }
    client->damage_mod_flags |= 1 << v19;
    if ( (damageFlags & 0x100) != 0 || v19 <= 0x13 && (v76 = 589872, _bittest(&v76, v19)) )
      client->damage_ricochet += v73;
    v77 = Dvar_GetFloat_Internal_DebugName(DVARFLT_player_healthArmorRatio, "player_healthArmorRatio");
    if ( *(float *)&v77 > 0.0 && (int)(float)((float)client->sess.maxHealth * (float)(1.0 - *(float *)&v77)) <= targ->health - v73 )
      client->damage_armor += v73;
    if ( v75 )
    {
      client->damage_from = scaledDir;
      v78 = 0;
    }
    else
    {
      client->damage_from.v[0] = targ->r.currentOrigin.v[0];
      client->damage_from.v[1] = targ->r.currentOrigin.v[1];
      client->damage_from.v[2] = targ->r.currentOrigin.v[2];
      v78 = 1;
    }
    client->damage_fromWorld = v78;
    v41 = damage;
    client->damage_vehicle = 0;
  }
  v79 = timeOffset;
  v80 = v105;
  v81 = G_GameInterface_CombatSP_Damage(v73, targ, inflictora, attacker, dira, hitPos, v41, damageFlags, v105, v112, isAlternate, hitLoc, modelIndex, partName, timeOffset, v110);
  if ( !v81 )
    return 0;
  if ( (targ->flags.m_flags[0] & 2) != 0 && (int)(targ->health - v81) <= 0 )
    v81 = targ->health - 1;
  v82 = targ->actor;
  health = targ->health;
  if ( !v82 || !v82->combat.damageShield )
    targ->health = health - v81;
  if ( client )
  {
    BG_SetPlayerDamageFlinch(&client->ps, v81);
    if ( client->invulnerableEnabled )
      G_CombatSP_HandleDeathInvulnerability(targ, attacker, health, v80);
    if ( client->deathShieldEnabled )
    {
      if ( targ->health > health && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 216, ASSERT_TYPE_ASSERT, "(targ->health <= prevHealth)", (const char *)&queryFormat, "targ->health <= prevHealth") )
        __debugbreak();
      v84 = targ->client;
      if ( !v84 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 221, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
        __debugbreak();
      if ( !v84->deathShieldEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 222, ASSERT_TYPE_ASSERT, "(client->deathShieldEnabled)", (const char *)&queryFormat, "client->deathShieldEnabled") )
        __debugbreak();
      v85 = targ->health;
      if ( health == v85 || v85 > 0 )
      {
        v80 = v105;
      }
      else
      {
        v80 = v105;
        if ( health > 0 )
        {
          v86 = inflictora;
          targ->health = 1;
          G_Combat_DamageNotify(scr_const.deathshield, targ, attacker, v86, dira, hitPos, v81, v80, damageFlags, modelIndex, partName, &weapon, v104, v110);
        }
      }
    }
  }
  G_Combat_DamageNotify(scr_const.damage, targ, attacker, inflictora, dira, hitPos, v81, v80, damageFlags, modelIndex, partName, &weapon, v104, v110);
  v87 = targ->health;
  if ( v87 > 0 )
  {
    pain = G_Main_GetEntHandlerList(targ)->pain;
    if ( pain )
    {
      LOBYTE(v103) = v104;
      pain(targ, attacker, v81, hitPos, v80, &scaledDir, hitLoc, &weapon, v103);
    }
    goto LABEL_228;
  }
  if ( client )
  {
    targ->flags.m_flags[0] |= 8u;
    v87 = targ->health;
  }
  if ( v87 < -999 )
    targ->health = -999;
  if ( !client )
  {
    v88 = scrContext;
    if ( weapon.weaponIdx )
      GScr_Weapon_AddParam(scrContext, v112, isAlternate);
    else
      Scr_AddUndefined(scrContext);
    Scr_AddConstString(v88, *g_combat_modNames[v80]);
    GScr_AddEntity(attacker);
    GScr_Notify(targ, scr_const.death, 3u);
    GScr_Notify(targ, scr_const.death_or_disconnect, 0);
  }
  v89 = targ->sentient;
  if ( v89 )
    EntHandle::setEnt(&v89->lastAttacker, attacker);
  die = G_Main_GetEntHandlerList(targ)->die;
  if ( die )
  {
    LOBYTE(damageMOD) = v104;
    die(targ, inflictora, attacker, v81, damageFlags, v80, &weapon, damageMOD, &scaledDir, hitLoc, v79);
  }
  v91 = G_GetEntityIndex(targ);
  result = G_IsEntityInUse(v91);
  if ( result )
  {
LABEL_228:
    v93 = targ->client;
    if ( v93 )
    {
      v94 = targ->health;
      if ( v94 < 0 )
      {
        targ->health = 0;
        v94 = 0;
      }
      v93->ps.stats[0] = v94;
    }
    return 0;
  }
  return result;
}

/*
==============
G_CombatSP_Damage_Mult_Cap
==============
*/
void G_CombatSP_Damage_Mult_Cap(int *inOutDamage, const float multiplier)
{
  float v3; 
  int v4; 
  int v5; 
  bool v6; 

  if ( multiplier == 0.0 )
  {
    *inOutDamage = 0;
    return;
  }
  LODWORD(v3) = LODWORD(multiplier) & _xmm;
  if ( COERCE_FLOAT(LODWORD(multiplier) & _xmm) >= 1.0 )
  {
    v4 = *inOutDamage;
    if ( (int)abs32(*inOutDamage) > (int)(float)(2147483500.0 / v3) )
    {
      v5 = 1;
      v6 = v4 <= 0;
      if ( v4 < 0 )
      {
        if ( multiplier > 0.0 )
        {
LABEL_10:
          v5 = -1;
LABEL_11:
          *inOutDamage = 2147483583 * v5;
          return;
        }
        v6 = v4 <= 0;
      }
      if ( v6 || multiplier >= 0.0 )
        goto LABEL_11;
      goto LABEL_10;
    }
  }
  *inOutDamage = (int)(float)((float)*inOutDamage * multiplier);
}

/*
==============
G_CombatSP_GetWeaponForEntity
==============
*/
void G_CombatSP_GetWeaponForEntity(const gentity_s *ent, Weapon *weapon, bool *isAlternate, int modIsMelee)
{
  gclient_s *client; 
  GWeaponMap *Instance; 
  Weapon *ViewmodelWeapon; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  bool inAltWeaponMode; 
  __int16 viewlocked_entNum; 
  GWeaponMap *v13; 
  __int64 v14; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 294, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !weapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 295, ASSERT_TYPE_ASSERT, "(weapon)", (const char *)&queryFormat, "weapon") )
    __debugbreak();
  if ( !isAlternate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 296, ASSERT_TYPE_ASSERT, "(isAlternate)", (const char *)&queryFormat, "isAlternate") )
    __debugbreak();
  *isAlternate = 0;
  client = ent->client;
  if ( client )
  {
    if ( !BG_IsTurretActive(&ent->client->ps) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu) )
    {
      Instance = GWeaponMap::GetInstance();
      ViewmodelWeapon = (Weapon *)BG_GetViewmodelWeapon(Instance, &client->ps);
      p_weapFlags = &client->ps.weapCommon.weapFlags;
      *weapon = *ViewmodelWeapon;
      inAltWeaponMode = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu));
      goto LABEL_27;
    }
    if ( client->ps.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 308, ASSERT_TYPE_ASSERT, "(ps->viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->viewlocked_entNum != ENTITYNUM_NONE") )
      __debugbreak();
    viewlocked_entNum = client->ps.viewlocked_entNum;
    if ( (unsigned __int16)viewlocked_entNum >= 0x800u )
    {
      LODWORD(v14) = viewlocked_entNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 309, ASSERT_TYPE_ASSERT, "(unsigned)( ps->viewlocked_entNum ) < (unsigned)( ( 2048 ) )", "ps->viewlocked_entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, 2048) )
        __debugbreak();
    }
LABEL_25:
    *weapon = NULL_WEAPON;
    return;
  }
  if ( ent->turretHandle.m_objIndex )
    goto LABEL_25;
  v13 = GWeaponMap::GetInstance();
  *weapon = *BG_GetWeaponForEntity(v13, &ent->s);
  inAltWeaponMode = ent->s.inAltWeaponMode;
LABEL_27:
  *isAlternate = inAltWeaponMode;
}

/*
==============
G_CombatSP_GrenadeDrop
==============
*/
void G_CombatSP_GrenadeDrop(gentity_s *self)
{
  double v2; 
  double v3; 
  double v4; 
  gclient_s *client; 
  float v6; 
  gclient_s *v7; 
  GWeaponMap *Instance; 
  BgWeaponHandle v9; 
  gclient_s *v10; 
  Weapon *Weapon; 
  gclient_s *v12; 
  vec3_t dir; 
  vec3_t start; 
  Weapon r_grenadeWeapon; 

  v2 = G_crandom();
  dir.v[0] = *(float *)&v2;
  v3 = G_crandom();
  dir.v[1] = *(float *)&v3;
  v4 = G_crandom();
  client = self->client;
  dir.v[1] = 160.0 * dir.v[1];
  start.v[0] = self->r.currentOrigin.v[0];
  v6 = self->r.currentOrigin.v[2];
  dir.v[0] = 160.0 * dir.v[0];
  dir.v[2] = *(float *)&v4 * 160.0;
  *(float *)&v4 = self->r.currentOrigin.v[1];
  start.v[2] = v6 + 40.0;
  start.v[1] = *(float *)&v4;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&client->ps.weapCommon.weapFlags, ACTIVE, 1u) || BG_IsUsingOffhandGestureWeapon(&self->client->ps) )
  {
    v10 = self->client;
    Instance = GWeaponMap::GetInstance();
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 916, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 917, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v9.m_mapEntryId = v10->ps.weapCommon.offHandHandle.m_mapEntryId;
  }
  else
  {
    v7 = self->client;
    Instance = GWeaponMap::GetInstance();
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v9.m_mapEntryId = v7->ps.weapCommon.weaponHandle.m_mapEntryId;
  }
  Weapon = (Weapon *)BgWeaponMap::GetWeapon(Instance, v9);
  v12 = self->client;
  r_grenadeWeapon = *Weapon;
  G_Missile_FireGrenade(self, &start, &dir, &r_grenadeWeapon, 0, WEAPON_HAND_DEFAULT, 1, v12->ps.grenadeTimeLeft, 1, level.time);
}

/*
==============
G_CombatSP_HandleDeathInvulnerability
==============
*/
void G_CombatSP_HandleDeathInvulnerability(gentity_s *targ, gentity_s *attacker, int prevHealth, int mod)
{
  gclient_s *client; 
  int health; 
  char v10; 
  float criticalBulletDamageDist; 
  float v12; 
  float v13; 
  float v14; 
  const dvar_t *v15; 
  bool v16; 
  const dvar_t *v17; 
  bool v18; 
  int invulnerableDuration; 

  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 245, ASSERT_TYPE_ASSERT, "(targ)", (const char *)&queryFormat, "targ") )
    __debugbreak();
  if ( targ->health > prevHealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 246, ASSERT_TYPE_ASSERT, "(targ->health <= prevHealth)", (const char *)&queryFormat, "targ->health <= prevHealth") )
    __debugbreak();
  client = targ->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 250, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !client->invulnerableEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 251, ASSERT_TYPE_ASSERT, "(client->invulnerableEnabled)", (const char *)&queryFormat, "client->invulnerableEnabled") )
    __debugbreak();
  if ( prevHealth == client->ps.stats[2] )
    client->invulnerableActivated = 0;
  health = targ->health;
  if ( prevHealth != health )
  {
    if ( (unsigned int)(mod - 1) <= 2 || mod == 9 )
    {
      criticalBulletDamageDist = client->criticalBulletDamageDist;
      v10 = 1;
      if ( criticalBulletDamageDist != 0.0 )
      {
        v12 = attacker->r.currentOrigin.v[0] - targ->r.currentOrigin.v[0];
        v13 = attacker->r.currentOrigin.v[1] - targ->r.currentOrigin.v[1];
        v14 = attacker->r.currentOrigin.v[2] - targ->r.currentOrigin.v[2];
        if ( (float)((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14)) < (float)(criticalBulletDamageDist * criticalBulletDamageDist) && (!client->invulnerableActivated || level.time >= client->invulnerableExpireTime) )
        {
          health = 0;
          targ->health = 0;
        }
      }
    }
    else
    {
      v10 = 0;
    }
    if ( health <= 0 && prevHealth > 0 )
    {
      v15 = DVARBOOL_player_deathInvulnerableToProjectile;
      if ( !DVARBOOL_player_deathInvulnerableToProjectile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_deathInvulnerableToProjectile") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      v16 = v15->current.enabled && (unsigned int)(mod - 6) <= 1;
      v17 = DVARBOOL_player_deathInvulnerableToMelee;
      if ( !DVARBOOL_player_deathInvulnerableToMelee && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_deathInvulnerableToMelee") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      v18 = v17->current.enabled && mod == 8;
      if ( v10 || v16 || v18 )
      {
        if ( !client->invulnerableActivated )
        {
          invulnerableDuration = client->invulnerableDuration;
          client->invulnerableActivated = 1;
          client->invulnerableExpireTime = level.time + invulnerableDuration;
        }
        if ( level.time < client->invulnerableExpireTime )
          targ->health = 1;
      }
    }
  }
}

/*
==============
G_CombatSP_PlayerDie
==============
*/
void G_CombatSP_PlayerDie(gentity_s *self, const gentity_s *inflictor, gentity_s *attacker, int damage, int damageFlags, int meansOfDeath, const Weapon *r_weapon, bool isAlternate)
{
  scrContext_t *v11; 
  const gentity_s *MoverEntityFromPs; 
  GWeaponMap *Instance; 
  gclient_s *client; 
  gclient_s *v15; 
  float v16; 
  float v17; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 77, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 78, ASSERT_TYPE_ASSERT, "( self->client )", (const char *)&queryFormat, "self->client") )
    __debugbreak();
  if ( self->client->ps.pm_type < 7 )
  {
    v11 = ScriptContext_Server();
    if ( self->client->ps.grenadeTimeLeft > 0 )
      G_CombatSP_GrenadeDrop(self);
    GScr_AddEntity(inflictor);
    MoverEntityFromPs = GMovingPlatforms::GetMoverEntityFromPs(&self->client->ps);
    if ( MoverEntityFromPs )
      GScr_AddEntity(MoverEntityFromPs);
    else
      Scr_AddUndefined(v11);
    if ( r_weapon->weaponIdx )
      GScr_Weapon_AddParam(v11, r_weapon, isAlternate);
    else
      Scr_AddUndefined(v11);
    Scr_AddConstString(v11, *g_combat_modNames[meansOfDeath]);
    GScr_AddEntity(attacker);
    GScr_Notify(self, scr_const.death, 5u);
    GScr_Notify(self, scr_const.death_or_disconnect, 0);
    self->client->ps.pm_type = (self->client->ps.pm_type == 1) + 7;
    EntHandle::setEnt(&self->sentient->lastAttacker, attacker);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&self->client->ps.eFlags, ACTIVE, 0x10u);
    Instance = GWeaponMap::GetInstance();
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 447, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    Instance->SetWeapon(Instance, &self->s.weaponHandle, &NULL_WEAPON);
    self->client->ps.weapCommon.offhandGestureFlags = 0;
    self->client->ps.stats[4] = 0;
    client = self->client;
    if ( client->ps.pm_type != 8 )
    {
      self->r.currentAngles.v[0] = 0.0;
      self->r.currentAngles.v[2] = 0.0;
      G_Combat_LookAtKiller(self, inflictor, attacker, &client->ps);
      v15 = self->client;
      v15->ps.viewangles.v[0] = self->r.currentAngles.v[0];
      v15->ps.viewangles.v[1] = self->r.currentAngles.v[1];
      v15->ps.viewangles.v[2] = self->r.currentAngles.v[2];
    }
    self->s.loopSound = 0;
    v16 = self->r.box.midPoint.v[2];
    v17 = self->r.box.halfSize.v[2];
    if ( v16 != v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 162, ASSERT_TYPE_ASSERT, "( self->r.box.midPoint[2] ) == ( self->r.box.halfSize[2] )", "%s == %s\n\t%g, %g", "self->r.box.midPoint[2]", "self->r.box.halfSize[2]", v16, v17) )
      __debugbreak();
    self->r.box.midPoint.v[2] = 8.0;
    self->r.box.halfSize.v[2] = 8.0;
    level.allowRespawn = 0;
    G_Nav_DestroyPlayerRepulsor(self->s.number);
    G_Vehicle_ClearPlayerVehicles(self->s.number, &self->client->ps);
    if ( self->handler != 14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 173, ASSERT_TYPE_ASSERT, "(self->handler == ENT_HANDLER_CLIENT)", (const char *)&queryFormat, "self->handler == ENT_HANDLER_CLIENT") )
      __debugbreak();
    self->handler = 16;
    SV_LinkEntity(self);
  }
}

/*
==============
GCombatSP::GetRadiusDamageFromPos
==============
*/
float GCombatSP::GetRadiusDamageFromPos(GCombatSP *this, gentity_s *ent, gentity_s *ignoreEnt, const vec3_t *damageOrigin, int contentMask, bool detailTrace, unsigned __int8 *priorityMap)
{
  _XMM6 = LODWORD(FLOAT_1_0);
  _XMM0 = GCombat::CanRadiusDamageFromPos(this, ent, &ent->r.currentOrigin, ignoreEnt, damageOrigin, 3.4028235e38, 1.0, NULL, 0.0, 1, contentMask, detailTrace, priorityMap);
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm7, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
GCombatSP::NotifyRadiusDamage
==============
*/
void GCombatSP::NotifyRadiusDamage(GCombatSP *this, const vec3_t *damageOrigin, float damageRadius, gentity_s *attackerEnt, const Weapon *r_weapon, bool isAlternate)
{
  scrContext_t *v8; 
  scrContext_t *v9; 
  const WeaponDef *v10; 

  v8 = ScriptContext_Server();
  v9 = v8;
  if ( r_weapon->weaponIdx )
  {
    v10 = BG_WeaponDef(r_weapon, isAlternate);
    Scr_AddFloat(v9, v10->reactiveEmitterDelay);
    GScr_Weapon_AddParam(v9, r_weapon, isAlternate);
  }
  else
  {
    Scr_AddUndefined(v8);
    Scr_AddUndefined(v9);
  }
  Scr_AddVector(v9, damageOrigin->v);
  Scr_AddFloat(v9, damageRadius);
  if ( attackerEnt )
    GScr_AddEntity(attackerEnt);
  else
    Scr_AddUndefined(v9);
  Scr_NotifyLevel(v9, scr_const.code_damageradius, 5u);
}

/*
==============
GCombatSP::RadiusDamage
==============
*/
void GCombatSP::RadiusDamage(GCombatSP *this, const vec3_t *origin, gentity_s *inflictor, gentity_s *attacker, const BgExplosionDamageRangeInfo *damageRangeInfo, float coneAngleCos, const vec3_t *coneDirection, gentity_s *ignore, meansOfDeath_t mod, const Weapon *r_weapon, bool isAlternate, bool environmentOnly, bool runOcclusionTraces)
{
  signed __int64 v13; 
  void *v14; 
  const Weapon *v16; 
  bool v18; 
  const bitarray<224> *AllTeamFlags; 
  double v21; 
  float v24; 
  float v25; 
  float v26; 
  float v28; 
  WeaponDef *v29; 
  const dvar_t *v30; 
  int v31; 
  gentity_s *v32; 
  entityType_s eType; 
  double v34; 
  float ApproxDistSquaredToModel; 
  const dvar_t *v36; 
  float v37; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  weapProjExposion_t v40; 
  bool v41; 
  float v42; 
  double ExplosionDamageFromRangeInfo; 
  float v44; 
  float v45; 
  bool detailTrace; 
  unsigned __int8 *priorityMap; 
  int contentMask; 
  BOOL CanRadiusDamageFromPos; 
  float v53; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  Vehicle *vehicle; 
  __int128 v60; 
  bool enabled; 
  GExtraDamageParams extraParams; 
  float v66; 
  float iExplosionRadiusMin; 
  gentity_s *attackera; 
  Weapon *v69; 
  vec3_t *coneDirectiona; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  WeaponDef *weapDef; 
  GCombat *v73; 
  vec3_t v74; 
  vec3_t dir; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  Bounds v78; 
  __int16 v79[2048]; 

  v14 = alloca(v13);
  v16 = r_weapon;
  v18 = isAlternate;
  attackera = attacker;
  coneDirectiona = (vec3_t *)coneDirection;
  v69 = (Weapon *)r_weapon;
  v73 = this;
  AllTeamFlags = Com_TeamsSP_GetAllTeamFlags();
  Actor_BroadcastPointEvent(attacker, AI_EV_EXPLOSION, AllTeamFlags, origin);
  v21 = BG_ExplosionForceScalar(r_weapon, isAlternate);
  Physics_ApplyRadiusForce(PHYSICS_WORLD_ID_FIRST, origin, damageRangeInfo->outerRadius, damageRangeInfo->innerDamage, damageRangeInfo->outerDamage, 0.0, &vec3_origin, level.time, *(float *)&v21);
  _XMM0 = LODWORD(damageRangeInfo->outerRadius);
  _XMM12 = LODWORD(FLOAT_1_0);
  v24 = origin->v[0];
  v25 = origin->v[1];
  v26 = origin->v[2];
  __asm { vmaxss  xmm11, xmm0, xmm12 }
  v28 = *(float *)&_XMM11 * 1.4142135;
  v29 = (WeaponDef *)BG_WeaponDef(r_weapon, isAlternate);
  v30 = DVARBOOL_g_radiusDamageCalcDetailBounds;
  weapDef = v29;
  iExplosionRadiusMin = (float)v29->iExplosionRadiusMin;
  if ( !DVARBOOL_g_radiusDamageCalcDetailBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_radiusDamageCalcDetailBounds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  enabled = v30->current.enabled;
  aabbMin.v[0] = v24 - v28;
  aabbMin.v[1] = v25 - v28;
  collectedEnts.ids = (unsigned __int16 *)v79;
  collectedEnts.count = 0;
  aabbMin.v[2] = v26 - v28;
  aabbMax.v[0] = v28 + v24;
  aabbMax.v[1] = v28 + v25;
  aabbMax.v[2] = v28 + v26;
  collectedEnts.countMax = 2048;
  PhysicsQuery_ImmediateAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, -1, 0, NULL, &collectedEnts, NULL, 1);
  v31 = 0;
  if ( collectedEnts.count )
  {
    while ( 1 )
    {
      v32 = &g_entities[(unsigned __int16)v79[v31]];
      if ( v32 == ignore )
        goto LABEL_50;
      if ( environmentOnly )
      {
        if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        eType = v32->s.eType;
        if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM )
          goto LABEL_50;
      }
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v32->s.lerp.eFlags, ACTIVE, 0x10u) || (v32->flags.m_flags[0] & 0x10) != 0 || v32->client && level.bPlayerIgnoreRadiusDamage )
        goto LABEL_50;
      v34 = *(double *)origin->v;
      v74.v[2] = origin->v[2];
      *(double *)v74.v = v34;
      ApproxDistSquaredToModel = G_Combat_GetApproxDistSquaredToModel(v32, &v74, enabled, &v78, NULL);
      if ( ApproxDistSquaredToModel >= (float)(*(float *)&_XMM11 * *(float *)&_XMM11) )
        goto LABEL_50;
      if ( inflictor )
        G_Combat_RadiusEffectsEnt(inflictor->s.number, v32, origin, *(float *)&_XMM11, iExplosionRadiusMin, attackera, inflictor->c.missile.team, v16, v18);
      if ( !v32->client )
        goto LABEL_32;
      v36 = DVARFLT_g_grenadeDamageMaxHeight;
      LODWORD(v37) = COERCE_UNSIGNED_INT(origin->v[2] - v32->r.currentOrigin.v[2]) & _xmm;
      if ( !DVARFLT_g_grenadeDamageMaxHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_grenadeDamageMaxHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v36);
      if ( v37 < v36->current.value )
        break;
      if ( !inflictor )
        break;
      if ( inflictor->s.eType != ET_MISSILE )
        break;
      Instance = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &inflictor->s);
      BG_WeaponDef(WeaponForEntity, 0);
      if ( BG_GetWeaponType(WeaponForEntity, 0) != WEAPTYPE_GRENADE )
        break;
      v40 = BG_ProjExplosionType(WeaponForEntity, 0);
      if ( v40 )
      {
        if ( v40 != WEAPPROJEXP_HEAVY )
          break;
      }
      v41 = BG_TimedDetonation(WeaponForEntity, 0);
      v18 = isAlternate;
      if ( !v41 )
        goto LABEL_32;
LABEL_50:
      if ( ++v31 >= collectedEnts.count )
        goto LABEL_51;
    }
    v18 = isAlternate;
LABEL_32:
    v42 = fsqrt(ApproxDistSquaredToModel);
    ExplosionDamageFromRangeInfo = BG_GetExplosionDamageFromRangeInfo(damageRangeInfo, v42);
    v44 = *(float *)&ExplosionDamageFromRangeInfo;
    if ( *(float *)&_XMM11 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 1086, ASSERT_TYPE_ASSERT, "(outerRadius)", (const char *)&queryFormat, "outerRadius") )
      __debugbreak();
    v45 = 1.0 - (float)(v42 / *(float *)&_XMM11);
    detailTrace = BG_WeaponRadiusDamageDetailTrace(v16, v18);
    priorityMap = BG_GetWeaponPriorityMap(v16, isAlternate);
    if ( runOcclusionTraces )
    {
      contentMask = G_Combat_GetRadiusDamageMask(weapDef);
      CanRadiusDamageFromPos = GCombat::CanRadiusDamageFromPos(v73, v32, &v32->r.currentOrigin, inflictor, origin, *(float *)&_XMM11, coneAngleCos, coneDirectiona, 0.0, 1, contentMask, detailTrace, priorityMap);
    }
    else
    {
      CanRadiusDamageFromPos = 1;
    }
    _XMM0 = CanRadiusDamageFromPos;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm12, xmm10, xmm2
    }
    v66 = *(float *)&_XMM0;
    *(double *)&_XMM0 = G_Weapon_GetShieldBlastDamageProtection(v32, origin);
    v53 = *(float *)&_XMM0;
    if ( *(float *)&_XMM0 < 0.0 || *(float *)&_XMM0 > 1.0 )
    {
      __asm { vxorpd  xmm0, xmm0, xmm0 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 1105, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( shieldProtection ) && ( shieldProtection ) <= ( 1.f )", "shieldProtection not in [0.f, 1.f]\n\t%g not in [%g, %g]", v53, *(double *)&_XMM0, DOUBLE_1_0) )
        __debugbreak();
    }
    if ( v53 <= 0.0 )
    {
      v56 = v66;
    }
    else
    {
      v55 = v66;
      G_Weapon_AddShieldSplashDamageEvent(v32, v44, v66, v53);
      v56 = v55 * (float)(1.0 - v53);
    }
    v16 = v69;
    if ( v56 <= 0.0 )
    {
      v18 = isAlternate;
    }
    else
    {
      v57 = v32->r.currentOrigin.v[0] - origin->v[0];
      dir.v[1] = v32->r.currentOrigin.v[1] - origin->v[1];
      dir.v[0] = v57;
      v58 = v32->r.currentOrigin.v[2] - origin->v[2];
      extraParams = 0;
      v18 = isAlternate;
      dir.v[2] = v58 + 24.0;
      G_CombatSP_Damage_Internal(v32, inflictor, attackera, &dir, origin, (int)(float)(v56 * v44), 5, mod, v69, isAlternate, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, &extraParams);
      vehicle = v32->vehicle;
      if ( vehicle )
      {
        v60 = LODWORD(dir.v[0]);
        *(float *)&v60 = fsqrt((float)((float)(*(float *)&v60 * *(float *)&v60) + (float)(dir.v[1] * dir.v[1])) + (float)(dir.v[2] * dir.v[2]));
        _XMM4 = v60;
        __asm
        {
          vcmpless xmm0, xmm4, cs:__real@80000000
          vblendvps xmm0, xmm4, xmm12, xmm0
        }
        dir.v[0] = dir.v[0] * (float)(1.0 / *(float *)&_XMM0);
        dir.v[2] = dir.v[2] * (float)(1.0 / *(float *)&_XMM0);
        dir.v[1] = dir.v[1] * (float)(1.0 / *(float *)&_XMM0);
        if ( *(float *)&v60 > 0.001 )
          G_Vehicle_Knockback(vehicle, &dir, mod, v45, NULL);
      }
    }
    goto LABEL_50;
  }
LABEL_51:
  G_Glass_RadiusDamage(origin, *(float *)&_XMM11, coneAngleCos, coneDirectiona, damageRangeInfo->innerDamage, damageRangeInfo->outerDamage);
  ScriptableSv_RadiusDamage(inflictor, attackera, v16, v18, origin, *(const float *)&_XMM11, damageRangeInfo->innerDamage, damageRangeInfo->outerDamage, mod, runOcclusionTraces);
}

/*
==============
GCombatSP::ShieldNotifyAndDamage
==============
*/
bool GCombatSP::ShieldNotifyAndDamage(GCombatSP *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker)
{
  return 0;
}

