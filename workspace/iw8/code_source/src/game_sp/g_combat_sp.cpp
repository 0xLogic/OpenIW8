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
int GCombatSP::CalcVehicleImpactDamage(GCombatSP *this, const Vehicle *veh, const VehicleDef *vehDef, gentity_s *vehEnt, const float vehicleSpeed, const gentity_s *receiver)
{
  bool v9; 
  bool v10; 
  int result; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = vehDef;
  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 909, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  v9 = _RBX == NULL;
  if ( !_RBX )
  {
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 910, ASSERT_TYPE_ASSERT, "( vehDef )", (const char *)&queryFormat, "vehDef");
    v9 = !v10;
    if ( v10 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rbx+0C4h]
  }
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 911, ASSERT_TYPE_ASSERT, "( vehDef->collisionSpeed )", (const char *)&queryFormat, "vehDef->collisionSpeed") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm2, xmm6
  }
  if ( !_RBX->collisionDamageIgnoresImpactAngle )
  {
    _RAX = receiver;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+130h]
      vsubss  xmm5, xmm0, dword ptr [rdi+130h]
      vmovss  xmm1, dword ptr [rax+134h]
      vsubss  xmm4, xmm1, dword ptr [rdi+134h]
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm2, xmm4, xmm4
      vaddss  xmm1, xmm2, xmm0
      vsqrtss xmm3, xmm1, xmm1
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm6, xmm0
      vdivss  xmm3, xmm6, xmm0
      vmulss  xmm1, xmm4, xmm3
      vmulss  xmm2, xmm1, dword ptr [rax+4]
      vmulss  xmm0, xmm5, xmm3
      vmulss  xmm1, xmm0, dword ptr [rax]
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, cs:__real@3f4ccccd
    }
  }
  __asm
  {
    vmovss  xmm0, [rsp+48h+vehicleSpeed]
    vdivss  xmm1, xmm0, dword ptr [rbx+0C4h]
    vsubss  xmm2, xmm2, cs:__real@3f4ccccd
    vminss  xmm3, xmm1, xmm6
    vmulss  xmm0, xmm3, xmm2
    vmulss  xmm1, xmm0, cs:__real@40a00001
    vmulss  xmm3, xmm1, dword ptr [rbx+0C0h]
    vcvttss2si eax, xmm3
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return result;
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
  char v14; 
  int v35; 
  int v40; 
  const dvar_t *v41; 

  __asm { vmovaps [rsp+88h+var_48], xmm6 }
  _R15 = scaledDir;
  _RBX = dir;
  __asm { vmovss  xmm6, cs:__real@3d4ccccd }
  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 346, ASSERT_TYPE_ASSERT, "(targ)", (const char *)&queryFormat, "targ") )
    __debugbreak();
  if ( !_RBX || mod == 19 )
    v14 = dflags | 4;
  else
    v14 = dflags;
  if ( _RBX )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  xmm5, dword ptr [rbx]
      vmovss  xmm3, dword ptr [rbx+8]
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [r15], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [r15+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+8]
      vmovss  dword ptr [r15+8], xmm0
    }
  }
  _RBX = targ->client;
  if ( _RBX )
  {
    _RSI = DVARFLT_g_knockbackPlayerScale;
    if ( !DVARFLT_g_knockbackPlayerScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_knockbackPlayerScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm6, dword ptr [rsi+28h] }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->ps.pm_flags, ACTIVE, 0) )
    {
      __asm { vmulss  xmm6, xmm6, cs:__real@3e4ccccd }
    }
    else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->ps.pm_flags, ACTIVE, 1u) )
    {
      __asm { vmulss  xmm6, xmm6, cs:__real@3f19999a }
    }
    if ( (v14 & 1) != 0 )
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&_RBX->ps.weapCommon.weapFlags, ACTIVE, 0x10u);
  }
  v35 = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+88h+damage]
    vmulss  xmm1, xmm0, xmm6
    vcvttss2si ecx, xmm1
  }
  if ( _ECX > 60 )
    _ECX = 60;
  v40 = 0;
  if ( (targ->flags.m_flags[0] & 8) == 0 )
    v40 = _ECX;
  if ( (v14 & 4) == 0 )
    v35 = v40;
  if ( v35 && _RBX && !BG_IsTurretActive(&_RBX->ps) )
  {
    v41 = DVARFLT_g_knockback;
    if ( !DVARFLT_g_knockback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_knockback") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    __asm
    {
      vmovss  xmm2, dword ptr [r15+4]
      vmovss  xmm3, dword ptr [r15+8]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmulss  xmm0, xmm0, dword ptr [rdi+28h]
      vmulss  xmm4, xmm0, cs:__real@3b83126f
      vmulss  xmm0, xmm4, dword ptr [r15]
      vaddss  xmm1, xmm0, dword ptr [rbx+3Ch]
      vmovss  dword ptr [rbx+3Ch], xmm1
      vmulss  xmm2, xmm4, xmm2
      vaddss  xmm0, xmm2, dword ptr [rbx+40h]
      vmulss  xmm1, xmm4, xmm3
      vmovss  dword ptr [rbx+40h], xmm0
      vaddss  xmm2, xmm1, dword ptr [rbx+44h]
      vmovss  dword ptr [rbx+44h], xmm2
    }
    if ( targ == attacker && (unsigned int)(mod - 4) <= 3 )
    {
      __asm
      {
        vmulss  xmm1, xmm2, cs:__real@3e800000
        vmovss  dword ptr [rbx+44h], xmm1
      }
    }
    if ( !_RBX->ps.pm_time )
    {
      _RBX->ps.pm_time = I_clamp(2 * v35, 50, 200);
      _RBX->ps.pm_flags.m_flags[0] |= 0x2000u;
    }
  }
  __asm { vmovaps xmm6, [rsp+88h+var_48] }
}

/*
==============
G_CombatSP_Damage_Internal
==============
*/
int G_CombatSP_Damage_Internal(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  unsigned int v23; 
  gentity_s *v24; 
  const GExtraDamageParams *v25; 
  GCombat *v26; 
  bool v30; 
  int result; 
  const char *v38; 
  scr_string_t targetname; 
  const char *v40; 
  const char *v41; 
  __int16 EntityIndex; 
  __int16 v43; 
  gentity_s *v44; 
  bool IndexForEntity; 
  int v46; 
  scr_string_t v47; 
  unsigned int v48; 
  int v49; 
  playerState_s *EntityPlayerState; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v53; 
  gentity_s *v54; 
  gentity_s *v55; 
  sentient_s *sentient; 
  sentient_s *v57; 
  hitLocation_t v60; 
  int locDamageTableIndex; 
  bool v63; 
  weapType_t WeaponType; 
  bool v66; 
  __int64 v67; 
  bool v68; 
  bool v69; 
  GCombat *CombatSystem; 
  bool v74; 
  sentient_s *v75; 
  int iDamageParts; 
  actor_s *actor; 
  DamageParts *v78; 
  actor_s *v79; 
  int v80; 
  int v81; 
  vec3_t *v82; 
  int v83; 
  char v84; 
  int v93; 
  int v94; 
  int v95; 
  unsigned int v96; 
  actor_s *v97; 
  int health; 
  gclient_s *client; 
  int v100; 
  gentity_s *v101; 
  int v102; 
  scrContext_t *v103; 
  EntHandle *v104; 
  void (__fastcall *die)(gentity_s *, const gentity_s *, gentity_s *, const int, const int, const int, const Weapon *, bool, const vec3_t *, const hitLocation_t, int); 
  __int16 v106; 
  void (__fastcall *pain)(gentity_s *, gentity_s *, int, const vec3_t *, const int, const vec3_t *, const hitLocation_t, const Weapon *, bool); 
  gclient_s *v108; 
  int v109; 
  char *fmta; 
  char *fmt; 
  vec3_t *v116; 
  vec3_t *v117; 
  vec3_t *v118; 
  Weapon *v119; 
  Weapon *v120; 
  unsigned int NumWeapons; 
  Weapon *v122; 
  int v123; 
  int damageMOD; 
  scr_string_t v125; 
  bool v126; 
  int v127; 
  unsigned int damageFlags; 
  vec3_t *dira; 
  vec3_t *hitPos; 
  gentity_s *inflictora; 
  vec3_t *v132; 
  unsigned int scriptableIndex; 
  Weapon *v134; 
  scrContext_t *scrContext; 
  AIActorInterface v136; 
  AIActorInterface *v137; 
  vec3_t scaledDir; 
  Weapon weapon; 

  _RBX = targ;
  _R13 = r_weapon;
  v23 = mod;
  v24 = (gentity_s *)inflictor;
  v25 = extraParams;
  hitPos = (vec3_t *)point;
  v132 = (vec3_t *)surfaceNormal;
  dira = (vec3_t *)dir;
  inflictora = (gentity_s *)inflictor;
  v127 = mod;
  v134 = (Weapon *)r_weapon;
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  v26 = GCombat::ms_gCombatSystem;
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 539, ASSERT_TYPE_ASSERT, "(combatSystem)", (const char *)&queryFormat, "combatSystem") )
    __debugbreak();
  *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&_R13->weaponCamo;
  v126 = isAlternate;
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+0]
    vmovups xmm1, xmmword ptr [r13+20h]
    vmovups ymmword ptr [rbp+0D0h+weapon.weaponIdx], ymm0
    vmovsd  xmm0, qword ptr [r13+30h]
  }
  v30 = isAlternate;
  __asm
  {
    vmovsd  qword ptr [rbp+0D0h+weapon.attachmentVariationIndices+15h], xmm0
    vmovups xmmword ptr [rbp+0D0h+weapon.attachmentVariationIndices+5], xmm1
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 544, ASSERT_TYPE_ASSERT, "(targ)", (const char *)&queryFormat, "targ") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 0x10u) )
    return 2;
  if ( hitLoc == HITLOC_SHIELD )
    return 3;
  __asm
  {
    vmovaps [rsp+1E0h+var_50], xmm6
    vmovaps [rsp+1E0h+var_60], xmm7
    vmovaps [rsp+1E0h+var_70], xmm8
  }
  scrContext = ScriptContext_Server();
  if ( !Scr_IsSystemActive(scrContext, 1u) )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+138h]
      vmovss  xmm7, dword ptr [rbx+134h]
      vmovss  xmm8, dword ptr [rbx+130h]
      vcvtss2sd xmm6, xmm6, xmm6
      vcvtss2sd xmm7, xmm7, xmm7
      vcvtss2sd xmm8, xmm8, xmm8
    }
    v38 = SL_ConvertToString(_RBX->classname);
    targetname = _RBX->targetname;
    v40 = v38;
    if ( targetname )
      v41 = SL_ConvertToString(targetname);
    else
      v41 = "<unnamed>";
    __asm
    {
      vmovsd  [rsp+1E0h+var_1B0], xmm6
      vmovsd  [rsp+1E0h+var_1B8], xmm7
      vmovsd  [rsp+1E0h+fmt], xmm8
    }
    Com_PrintWarning(15, "Ignoring damage on entity with name '%s' of type '%s' at (%.0f %.0f %.0f)\n", v41, v40, *(double *)&fmta, *(double *)&v117, *(double *)&v120);
    result = 4;
    goto LABEL_235;
  }
  if ( !GCombat::QueuedDamageEnabled(v26) )
  {
    if ( !v24 )
    {
      v24 = g_entities + 2046;
      inflictora = g_entities + 2046;
    }
    if ( !attacker )
      attacker = g_entities + 2046;
    EntityIndex = G_GetEntityIndex(_RBX);
    if ( !G_IsEntityInUse(EntityIndex) )
    {
      LODWORD(v116) = _RBX->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 580, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( G_GetEntityIndex( targ ) ) ) )", "( targ->s.number ) = %i", v116) )
        __debugbreak();
    }
    v43 = G_GetEntityIndex(attacker);
    if ( !G_IsEntityInUse(v43) )
    {
      LODWORD(v116) = G_GetEntityIndex(attacker);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 581, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( G_GetEntityIndex( attacker ) ) ) )", "( G_GetEntityIndex( attacker ) ) = %i", v116) )
        __debugbreak();
    }
    if ( !weapon.weaponIdx )
    {
      if ( v24 )
      {
        v44 = v24;
LABEL_36:
        G_CombatSP_GetWeaponForEntity(v44, &weapon, &v126, v23 == 8);
        v30 = v126;
        goto LABEL_37;
      }
      if ( attacker )
      {
        v44 = attacker;
        goto LABEL_36;
      }
    }
LABEL_37:
    if ( weapon.weaponIdx >= BG_GetNumWeapons() )
    {
      NumWeapons = BG_GetNumWeapons();
      LODWORD(v116) = weapon.weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 594, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( BG_GetNumWeapons() )", "weapon.weaponIdx doesn't index BG_GetNumWeapons()\n\t%i not in [0, %i)", v116, NumWeapons) )
        __debugbreak();
    }
    IndexForEntity = ScriptableSv_TryGetIndexForEntity(_RBX, &scriptableIndex);
    v46 = dflags;
    v47 = partName;
    v48 = modelIndex;
    v49 = damage;
    damageFlags = dflags;
    if ( IndexForEntity )
    {
      ScriptableSv_Damage(v24, attacker, scriptableIndex, hitPos, dira, v23, &weapon, v30, partName, damage, dflags, modelIndex);
      v47 = partName;
      v48 = modelIndex;
    }
    if ( _RBX->vehicle )
    {
      result = G_Vehicle_Damage(_RBX, v24, attacker, dira, hitPos, v49, v46, v23, &weapon, v30, hitLoc, v48, v47, 0);
      goto LABEL_235;
    }
    if ( _RBX->s.eType == ET_COVERWALL )
      G_CoverWall_Damage(_RBX, v24, attacker, dira, hitPos, v49, v46, v23, &weapon, v30, 0);
    _R13 = _RBX->client;
    if ( _R13 )
    {
      if ( G_Vehicle_IsPlayerProtected(_RBX) )
      {
        result = 6;
        goto LABEL_235;
      }
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R13->ps.otherFlags, ACTIVE, 0) )
      {
        result = 7;
        goto LABEL_235;
      }
      if ( (_R13->flags & 3) != 0 )
      {
        result = 8;
        goto LABEL_235;
      }
      if ( _R13->mpviewer )
      {
        result = 9;
        goto LABEL_235;
      }
      if ( v23 != 13 )
      {
        if ( (v46 & 1) != 0 )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_player_radiusDamageMultiplier, "player_radiusDamageMultiplier");
          __asm { vmovaps xmm1, xmm0 }
        }
        else if ( v23 == 8 )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_player_meleeDamageMultiplier, "player_meleeDamageMultiplier");
          __asm { vmovaps xmm1, xmm0 }
        }
        else
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_player_damageMultiplier, "player_damageMultiplier");
          __asm { vmulss  xmm1, xmm0, dword ptr [r13+0B688h]; multiplier }
        }
        G_CombatSP_Damage_Mult_Cap(&damage, *(const float *)&_XMM1);
        v49 = damage;
      }
      if ( attacker->client )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_g_friendlyfireDamageScale, "g_friendlyfireDamageScale");
        __asm { vmovaps xmm1, xmm0; multiplier }
        G_CombatSP_Damage_Mult_Cap(&damage, *(const float *)&_XMM1);
        v49 = damage;
      }
      EntityPlayerState = G_GetEntityPlayerState(_RBX);
      if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 657, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( (v46 & 1) != 0 )
      {
        PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(3u);
        v53 = (unsigned int)PerkNetworkPriorityIndex;
        if ( PerkNetworkPriorityIndex >= 0 )
        {
          if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
          {
            LODWORD(v119) = 64;
            LODWORD(v116) = PerkNetworkPriorityIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v116, v119) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v53 & 0x1F)) & EntityPlayerState->perks.array[v53 >> 5]) != 0 )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_explosiveArmorMultiplier, "perk_explosiveArmorMultiplier");
            __asm { vmovaps xmm1, xmm0; multiplier }
            G_CombatSP_Damage_Mult_Cap(&damage, *(const float *)&_XMM1);
            v49 = damage;
          }
        }
      }
      if ( v49 == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 664, ASSERT_TYPE_ASSERT, "(damage < 2147483647)", (const char *)&queryFormat, "damage < INT_MAX") )
        __debugbreak();
      v24 = inflictora;
      if ( !inflictora && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 451, ASSERT_TYPE_ASSERT, "( inflictor )", (const char *)&queryFormat, "inflictor") )
        __debugbreak();
      if ( !_RBX->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 453, ASSERT_TYPE_ASSERT, "( targ->sentient )", (const char *)&queryFormat, "targ->sentient") )
        __debugbreak();
      if ( v24 )
      {
        if ( v24->s.eType == ET_MISSILE && (v24->c.missile.flags & 0x800) != 0 )
        {
          if ( EntHandle::isDefined(&v24->parent) )
          {
            v54 = EntHandle::ent(&v24->parent);
            v55 = v54;
            if ( v54->actor )
            {
              if ( !v54->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 471, ASSERT_TYPE_ASSERT, "(owner->sentient)", (const char *)&queryFormat, "owner->sentient") )
                __debugbreak();
              if ( _RBX->sentient->eTeam == v55->sentient->eTeam && level.time - v24->s.lerp.u.anonymous.data[2] <= 2500 && v49 >= _RBX->health / 2 )
                v49 = _RBX->health / 2;
            }
          }
        }
      }
      if ( v49 <= 0 )
        v49 = 1;
      damage = v49;
    }
    if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 421, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
      __debugbreak();
    sentient = _RBX->sentient;
    if ( sentient )
    {
      if ( sentient->bOnlyTakeDamageFromPlayer && !attacker->client )
        goto LABEL_112;
      if ( sentient->ignoreRandomBulletDamage && attacker->actor )
      {
        if ( !attacker->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 435, ASSERT_TYPE_ASSERT, "( attacker->sentient )", (const char *)&queryFormat, "attacker->sentient") )
          __debugbreak();
        v57 = attacker->sentient;
        if ( !v57->doDamageToAll && (!EntHandle::isDefined(&v57->targetEnt) || EntHandle::ent(&attacker->sentient->targetEnt) != _RBX) )
        {
LABEL_112:
          result = 10;
          goto LABEL_235;
        }
      }
    }
    v68 = _RBX->actor == NULL;
    __asm
    {
      vmovaps [rsp+1E0h+var_80], xmm9
      vmovss  xmm9, cs:__real@3f800000
      vxorps  xmm8, xmm8, xmm8
    }
    if ( v68 )
    {
LABEL_150:
      if ( (_RBX->flags.m_flags[0] & 1) == 0 )
      {
        v75 = _RBX->sentient;
        if ( v75 )
        {
          iDamageParts = v75->iDamageParts;
          if ( iDamageParts != -1 )
          {
            actor = _RBX->actor;
            if ( !actor || !actor->combat.damageShield )
            {
              v78 = DamageParts_Get(iDamageParts);
              if ( !v78 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 713, ASSERT_TYPE_ASSERT, "(pParts)", (const char *)&queryFormat, "pParts") )
                __debugbreak();
              v49 = DamageParts::ApplyDamage(v78, v24, attacker, dira, hitPos, v49, damageFlags, v23, &weapon, v126, hitLoc, modelIndex, partName);
              if ( !v49 )
              {
                result = 13;
                goto LABEL_234;
              }
            }
          }
        }
        __asm
        {
          vmovss  dword ptr [rbp+0D0h+scaledDir], xmm8
          vmovss  dword ptr [rbp+0D0h+scaledDir+4], xmm8
          vmovss  dword ptr [rbp+0D0h+scaledDir+8], xmm8
        }
        G_CombatSP_DamageKnockback(_RBX, attacker, dira, &scaledDir, v49, damageFlags, v23);
        if ( (_RBX->flags.m_flags[0] & 1) == 0 )
        {
          v79 = _RBX->actor;
          if ( v49 < 1 )
            v49 = 1;
          damage = v49;
          v80 = v49;
          if ( !v79 )
            goto LABEL_169;
          AIActorInterface::AIActorInterface(&v136);
          v137 = NULL;
          AIActorInterface::SetActor(&v136, v79);
          v137 = &v136;
          v81 = AIScriptedInterface::CheckDeathAllowed(&v136, v49, dira);
          v80 = v49 - v81;
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_g_debugDamage, "g_debugDamage") )
          {
            LODWORD(v118) = v81;
            LODWORD(fmt) = v49 - v81;
            Com_Printf(15, "client:%i health:%i damage:%i armor:%i\n", (unsigned int)_RBX->s.number, (unsigned int)_RBX->health, fmt, v118);
          }
          if ( v81 )
          {
            v123 = v81;
            v82 = dira;
            G_Combat_DamageNotify(scr_const.damage_notdone, _RBX, attacker, inflictora, dira, hitPos, v123, v23, damageFlags, modelIndex, partName, &weapon, v126, v132);
          }
          else
          {
LABEL_169:
            v82 = dira;
          }
          if ( _R13 )
          {
            _R13->damage_blood += v80;
            if ( v23 >= 0x19 )
            {
              LODWORD(v122) = 25;
              LODWORD(v118) = v23;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 765, ASSERT_TYPE_ASSERT, "(unsigned)( mod ) < (unsigned)( MOD_NUM )", "mod doesn't index MOD_NUM\n\t%i not in [0, %i)", v118, v122) )
                __debugbreak();
            }
            _R13->damage_mod_flags |= 1 << v23;
            if ( (damageFlags & 0x100) != 0 || v23 <= 0x13 && (v83 = 589872, _bittest(&v83, v23)) )
              _R13->damage_ricochet += v80;
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_player_healthArmorRatio, "player_healthArmorRatio");
            __asm { vcomiss xmm0, xmm8 }
            if ( !(v84 | v68) )
            {
              __asm
              {
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2ss xmm1, xmm1, dword ptr [r13+55C0h]
                vsubss  xmm0, xmm9, xmm0
                vmulss  xmm1, xmm1, xmm0
                vcvttss2si ecx, xmm1
              }
              if ( _ECX <= _RBX->health - v80 )
                _R13->damage_armor += v80;
            }
            if ( v82 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+0D0h+scaledDir]
                vmovss  dword ptr [r13+5E88h], xmm0
                vmovss  xmm1, dword ptr [rbp+0D0h+scaledDir+4]
                vmovss  dword ptr [r13+5E8Ch], xmm1
                vmovss  xmm0, dword ptr [rbp+0D0h+scaledDir+8]
                vmovss  dword ptr [r13+5E90h], xmm0
              }
              v93 = 0;
            }
            else
            {
              _R13->damage_from.v[0] = _RBX->r.currentOrigin.v[0];
              _R13->damage_from.v[1] = _RBX->r.currentOrigin.v[1];
              _R13->damage_from.v[2] = _RBX->r.currentOrigin.v[2];
              v93 = 1;
            }
            _R13->damage_fromWorld = v93;
            v49 = damage;
            _R13->damage_vehicle = 0;
          }
          v94 = timeOffset;
          v95 = v127;
          v96 = G_GameInterface_CombatSP_Damage(v80, _RBX, inflictora, attacker, dira, hitPos, v49, damageFlags, v127, v134, isAlternate, hitLoc, modelIndex, partName, timeOffset, v132);
          if ( v96 )
          {
            if ( (_RBX->flags.m_flags[0] & 2) != 0 && (int)(_RBX->health - v96) <= 0 )
              v96 = _RBX->health - 1;
            v97 = _RBX->actor;
            health = _RBX->health;
            if ( !v97 || !v97->combat.damageShield )
              _RBX->health = health - v96;
            if ( _R13 )
            {
              BG_SetPlayerDamageFlinch(&_R13->ps, v96);
              if ( _R13->invulnerableEnabled )
                G_CombatSP_HandleDeathInvulnerability(_RBX, attacker, health, v95);
              if ( _R13->deathShieldEnabled )
              {
                if ( _RBX->health > health && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 216, ASSERT_TYPE_ASSERT, "(targ->health <= prevHealth)", (const char *)&queryFormat, "targ->health <= prevHealth") )
                  __debugbreak();
                client = _RBX->client;
                if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 221, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
                  __debugbreak();
                if ( !client->deathShieldEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 222, ASSERT_TYPE_ASSERT, "(client->deathShieldEnabled)", (const char *)&queryFormat, "client->deathShieldEnabled") )
                  __debugbreak();
                v100 = _RBX->health;
                if ( health == v100 || v100 > 0 )
                {
                  v95 = v127;
                }
                else
                {
                  v95 = v127;
                  if ( health > 0 )
                  {
                    v101 = inflictora;
                    _RBX->health = 1;
                    G_Combat_DamageNotify(scr_const.deathshield, _RBX, attacker, v101, dira, hitPos, v96, v95, damageFlags, modelIndex, partName, &weapon, v126, v132);
                  }
                }
              }
            }
            G_Combat_DamageNotify(scr_const.damage, _RBX, attacker, inflictora, dira, hitPos, v96, v95, damageFlags, modelIndex, partName, &weapon, v126, v132);
            v102 = _RBX->health;
            if ( v102 > 0 )
            {
              pain = G_Main_GetEntHandlerList(_RBX)->pain;
              if ( pain )
              {
                LOBYTE(v125) = v126;
                pain(_RBX, attacker, v96, hitPos, v95, &scaledDir, hitLoc, &weapon, v125);
              }
            }
            else
            {
              if ( _R13 )
              {
                _RBX->flags.m_flags[0] |= 8u;
                v102 = _RBX->health;
              }
              if ( v102 < -999 )
                _RBX->health = -999;
              if ( !_R13 )
              {
                v103 = scrContext;
                if ( weapon.weaponIdx )
                  GScr_Weapon_AddParam(scrContext, v134, isAlternate);
                else
                  Scr_AddUndefined(scrContext);
                Scr_AddConstString(v103, *g_combat_modNames[v95]);
                GScr_AddEntity(attacker);
                GScr_Notify(_RBX, scr_const.death, 3u);
                GScr_Notify(_RBX, scr_const.death_or_disconnect, 0);
              }
              v104 = (EntHandle *)_RBX->sentient;
              if ( v104 )
                EntHandle::setEnt(v104 + 16, attacker);
              die = G_Main_GetEntHandlerList(_RBX)->die;
              if ( die )
              {
                LOBYTE(damageMOD) = v126;
                die(_RBX, inflictora, attacker, v96, damageFlags, v95, &weapon, damageMOD, &scaledDir, hitLoc, v94);
              }
              v106 = G_GetEntityIndex(_RBX);
              result = G_IsEntityInUse(v106);
              if ( !result )
                goto LABEL_234;
            }
            v108 = _RBX->client;
            if ( v108 )
            {
              v109 = _RBX->health;
              if ( v109 < 0 )
              {
                _RBX->health = 0;
                v109 = 0;
              }
              v108->ps.stats[0] = v109;
            }
          }
          result = 0;
LABEL_234:
          __asm { vmovaps xmm9, [rsp+1E0h+var_80] }
          goto LABEL_235;
        }
      }
      result = 12;
      goto LABEL_234;
    }
    v60 = hitLoc;
    if ( (unsigned int)hitLoc > HITLOC_SOFT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 686, ASSERT_TYPE_ASSERT, "((hitLoc >= HITLOC_NONE) && (hitLoc < HITLOC_NUM))", (const char *)&queryFormat, "(hitLoc >= HITLOC_NONE) && (hitLoc < HITLOC_NUM)") )
      __debugbreak();
    if ( !_RBX->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 687, ASSERT_TYPE_ASSERT, "(targ->sentient)", (const char *)&queryFormat, "targ->sentient") )
      __debugbreak();
    _RSI = _RBX->actor->unitType;
    locDamageTableIndex = _RBX->sentient->locDamageTableIndex;
    if ( (unsigned int)v60 > HITLOC_SOFT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 182, ASSERT_TYPE_ASSERT, "((hitLoc >= HITLOC_NONE) && (hitLoc < HITLOC_NUM))", (const char *)&queryFormat, "(hitLoc >= HITLOC_NONE) && (hitLoc < HITLOC_NUM)") )
      __debugbreak();
    if ( (unsigned int)v127 > 0x18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 183, ASSERT_TYPE_ASSERT, "((mod >= MOD_UNKNOWN) && (mod < MOD_NUM))", (const char *)&queryFormat, "(mod >= MOD_UNKNOWN) && (mod < MOD_NUM)") )
      __debugbreak();
    v63 = v126;
    WeaponType = BG_GetWeaponType(&weapon, v126);
    __asm { vmovaps xmm7, xmm9 }
    v66 = WeaponType == WEAPTYPE_BULLET;
    if ( WeaponType == WEAPTYPE_BULLET || BG_GetWeaponType(&weapon, v63) == WEAPTYPE_GRENADE || BG_GetWeaponType(&weapon, v63) == WEAPTYPE_PROJECTILE )
    {
      if ( (unsigned int)_RSI >= 7 )
      {
        LODWORD(v119) = 7;
        LODWORD(v116) = _RSI;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1500, ASSERT_TYPE_ASSERT, "(unsigned)( unittype ) < (unsigned)( MAX_AI_UNITTYPES )", "unittype doesn't index MAX_AI_UNITTYPES\n\t%i not in [0, %i)", v116, v119) )
          __debugbreak();
      }
      LOWORD(v67) = weapon.weaponIdx;
      if ( weapon.weaponIdx > bg_lastParsedWeaponIndex )
      {
        LODWORD(v119) = bg_lastParsedWeaponIndex;
        LODWORD(v116) = weapon.weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v116, v119) )
          __debugbreak();
      }
      v67 = (unsigned __int16)v67;
      v68 = bg_weaponDefs[(unsigned __int16)v67] == NULL;
      if ( !bg_weaponDefs[(unsigned __int16)v67] )
      {
        v69 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]");
        v68 = !v69;
        if ( v69 )
          __debugbreak();
      }
      _RAX = bg_weaponDefs[v67];
      __asm
      {
        vmovss  xmm7, dword ptr [rax+rsi*4+0D38h]
        vucomiss xmm7, xmm8
      }
      if ( v68 )
        goto LABEL_160;
      v63 = v126;
    }
    __asm { vmovaps xmm6, xmm9 }
    if ( v127 == 8 )
      goto LABEL_145;
    CombatSystem = GCombat::GetCombatSystem();
    *(double *)&_XMM0 = GCombat::GetLocDamageMult(CombatSystem, hitLoc, locDamageTableIndex);
    __asm { vmulss  xmm6, xmm0, xmm7 }
    v74 = !v66;
    if ( v66 )
    {
      v74 = weapon.weaponIdx == 0;
      if ( weapon.weaponIdx )
      {
        BG_GetLocationDamageMultipliers(&weapon, v63);
        __asm { vmulss  xmm6, xmm6, dword ptr [rax+rsi*4] }
      }
    }
    __asm { vucomiss xmm6, xmm8 }
    if ( !v74 )
    {
LABEL_145:
      __asm { vmovaps xmm1, xmm6; multiplier }
      G_CombatSP_Damage_Mult_Cap(&damage, *(const float *)&_XMM1);
      v49 = damage;
      if ( damage == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 696, ASSERT_TYPE_ASSERT, "(damage < 2147483647)", (const char *)&queryFormat, "damage < INT_MAX") )
        __debugbreak();
      v23 = v127;
      v24 = inflictora;
      if ( v49 <= 0 )
        v49 = 1;
      goto LABEL_150;
    }
LABEL_160:
    result = 11;
    goto LABEL_234;
  }
  GCombat::QueueDamageInstance(v26, _RBX, v24, attacker, dira, hitPos, damage, dflags, v23, &weapon, v30, hitLoc, timeOffset, modelIndex, partName, v132, v25);
  result = 1;
LABEL_235:
  __asm
  {
    vmovaps xmm7, [rsp+1E0h+var_60]
    vmovaps xmm6, [rsp+1E0h+var_50]
    vmovaps xmm8, [rsp+1E0h+var_70]
  }
  return result;
}

/*
==============
G_CombatSP_Damage_Mult_Cap
==============
*/

void __fastcall G_CombatSP_Damage_Mult_Cap(int *inOutDamage, double multiplier, __int64 a3, double _XMM3_8)
{
  char v4; 
  char v5; 
  int v11; 
  signed int v13; 
  int v15; 

  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vucomiss xmm1, xmm3
    vmovaps xmm2, xmm1
  }
  if ( v5 )
  {
    *inOutDamage = 0;
  }
  else
  {
    __asm
    {
      vandps  xmm1, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm1, cs:__real@3f800000
    }
    if ( v4 )
      goto LABEL_10;
    v11 = *inOutDamage;
    __asm
    {
      vmovss  xmm0, cs:__real@4effffff
      vdivss  xmm1, xmm0, xmm1
    }
    v13 = abs32(*inOutDamage);
    __asm { vcvttss2si ecx, xmm1 }
    if ( v13 <= _ECX )
    {
LABEL_10:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [r8]
        vmulss  xmm1, xmm0, xmm2
        vcvttss2si eax, xmm1
      }
      *inOutDamage = _EAX;
    }
    else
    {
      v15 = 1;
      if ( v11 >= 0 )
      {
        if ( v11 > 0 )
          __asm { vcomiss xmm2, xmm3 }
      }
      else
      {
        __asm { vcomiss xmm2, xmm3 }
        v15 = -1;
      }
      *inOutDamage = 2147483583 * v15;
    }
  }
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
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  bool inAltWeaponMode; 
  __int16 viewlocked_entNum; 
  GWeaponMap *v19; 
  __int64 v24; 

  _RBX = weapon;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 294, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 295, ASSERT_TYPE_ASSERT, "(weapon)", (const char *)&queryFormat, "weapon") )
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
      _RAX = BG_GetViewmodelWeapon(Instance, &client->ps);
      p_weapFlags = &client->ps.weapCommon.weapFlags;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbx], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rbx+20h], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rbx+30h], xmm0
      }
      *(_DWORD *)&_RBX->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
      inAltWeaponMode = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu));
      goto LABEL_27;
    }
    if ( client->ps.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 308, ASSERT_TYPE_ASSERT, "(ps->viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->viewlocked_entNum != ENTITYNUM_NONE") )
      __debugbreak();
    viewlocked_entNum = client->ps.viewlocked_entNum;
    if ( (unsigned __int16)viewlocked_entNum >= 0x800u )
    {
      LODWORD(v24) = viewlocked_entNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 309, ASSERT_TYPE_ASSERT, "(unsigned)( ps->viewlocked_entNum ) < (unsigned)( ( 2048 ) )", "ps->viewlocked_entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v24, 2048) )
        __debugbreak();
    }
LABEL_25:
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups ymmword ptr [rbx], ymm0
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovups xmmword ptr [rbx+20h], xmm1
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
      vmovsd  qword ptr [rbx+30h], xmm0
    }
    *(_DWORD *)&_RBX->weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    return;
  }
  if ( ent->turretHandle.m_objIndex )
    goto LABEL_25;
  v19 = GWeaponMap::GetInstance();
  _RAX = BG_GetWeaponForEntity(v19, &ent->s);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbx+20h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rbx+30h], xmm0
  }
  *(_DWORD *)&_RBX->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
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
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *client; 
  gclient_s *v12; 
  GWeaponMap *Instance; 
  BgWeaponHandle v14; 
  gclient_s *v15; 
  gclient_s *v17; 
  vec3_t dir; 
  vec3_t start; 
  Weapon r_grenadeWeapon; 

  _RBX = self;
  *(double *)&_XMM0 = G_crandom();
  __asm { vmovss  dword ptr [rsp+0C8h+dir], xmm0 }
  *(double *)&_XMM0 = G_crandom();
  __asm { vmovss  dword ptr [rsp+0C8h+dir+4], xmm0 }
  *(double *)&_XMM0 = G_crandom();
  __asm
  {
    vmovss  xmm4, cs:__real@43200000
    vmulss  xmm1, xmm4, dword ptr [rsp+0C8h+dir+4]
    vmulss  xmm2, xmm4, dword ptr [rsp+0C8h+dir]
  }
  client = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)_RBX->client;
  __asm
  {
    vmovss  dword ptr [rsp+0C8h+dir+4], xmm1
    vmovss  xmm1, dword ptr [rbx+130h]
    vmulss  xmm0, xmm0, xmm4
    vmovss  dword ptr [rsp+0C8h+start], xmm1
    vmovss  xmm1, dword ptr [rbx+138h]
    vmovss  dword ptr [rsp+0C8h+dir], xmm2
    vaddss  xmm2, xmm1, cs:__real@42200000
    vmovss  dword ptr [rsp+0C8h+dir+8], xmm0
    vmovss  xmm0, dword ptr [rbx+134h]
    vmovss  dword ptr [rsp+0C8h+start+8], xmm2
    vmovss  dword ptr [rsp+0C8h+start+4], xmm0
  }
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(client + 229, ACTIVE, 1u) || BG_IsUsingOffhandGestureWeapon(&_RBX->client->ps) )
  {
    v15 = _RBX->client;
    Instance = GWeaponMap::GetInstance();
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 916, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 917, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v14.m_mapEntryId = v15->ps.weapCommon.offHandHandle.m_mapEntryId;
  }
  else
  {
    v12 = _RBX->client;
    Instance = GWeaponMap::GetInstance();
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v14.m_mapEntryId = v12->ps.weapCommon.weaponHandle.m_mapEntryId;
  }
  _RAX = BgWeaponMap::GetWeapon(Instance, v14);
  v17 = _RBX->client;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0C8h+r_grenadeWeapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0C8h+r_grenadeWeapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0C8h+r_grenadeWeapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_grenadeWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  G_Missile_FireGrenade(_RBX, &start, &dir, &r_grenadeWeapon, 0, WEAPON_HAND_DEFAULT, 1, v17->ps.grenadeTimeLeft, 1, level.time);
}

/*
==============
G_CombatSP_HandleDeathInvulnerability
==============
*/
void G_CombatSP_HandleDeathInvulnerability(gentity_s *targ, gentity_s *attacker, int prevHealth, int mod)
{
  int health; 
  bool v11; 
  bool v12; 
  char v13; 
  const dvar_t *v28; 
  bool v29; 
  const dvar_t *v30; 
  bool v31; 
  int invulnerableDuration; 

  _R14 = attacker;
  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 245, ASSERT_TYPE_ASSERT, "(targ)", (const char *)&queryFormat, "targ") )
    __debugbreak();
  if ( targ->health > prevHealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 246, ASSERT_TYPE_ASSERT, "(targ->health <= prevHealth)", (const char *)&queryFormat, "targ->health <= prevHealth") )
    __debugbreak();
  _RBX = targ->client;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 250, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !_RBX->invulnerableEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 251, ASSERT_TYPE_ASSERT, "(client->invulnerableEnabled)", (const char *)&queryFormat, "client->invulnerableEnabled") )
    __debugbreak();
  if ( prevHealth == _RBX->ps.stats[2] )
    _RBX->invulnerableActivated = 0;
  health = targ->health;
  if ( prevHealth != health )
  {
    v11 = (unsigned int)(mod - 1) < 2;
    v12 = mod == 3;
    if ( (unsigned int)(mod - 1) <= 2 || (v11 = (unsigned int)mod < 9, v12 = mod == 9) )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rbx+0B674h]
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm5, xmm0
      }
      v13 = 1;
      if ( !v12 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+130h]
          vsubss  xmm4, xmm0, dword ptr [rdi+130h]
          vmovss  xmm1, dword ptr [r14+134h]
          vsubss  xmm2, xmm1, dword ptr [rdi+134h]
          vmovss  xmm0, dword ptr [r14+138h]
          vsubss  xmm3, xmm0, dword ptr [rdi+138h]
          vmulss  xmm0, xmm4, xmm4
          vmulss  xmm1, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm5, xmm5
          vcomiss xmm3, xmm0
        }
        if ( v11 && (!_RBX->invulnerableActivated || level.time >= _RBX->invulnerableExpireTime) )
        {
          health = 0;
          targ->health = 0;
        }
      }
    }
    else
    {
      v13 = 0;
    }
    if ( health <= 0 && prevHealth > 0 )
    {
      v28 = DVARBOOL_player_deathInvulnerableToProjectile;
      if ( !DVARBOOL_player_deathInvulnerableToProjectile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_deathInvulnerableToProjectile") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      v29 = v28->current.enabled && (unsigned int)(mod - 6) <= 1;
      v30 = DVARBOOL_player_deathInvulnerableToMelee;
      if ( !DVARBOOL_player_deathInvulnerableToMelee && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_deathInvulnerableToMelee") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      v31 = v30->current.enabled && mod == 8;
      if ( v13 || v29 || v31 )
      {
        if ( !_RBX->invulnerableActivated )
        {
          invulnerableDuration = _RBX->invulnerableDuration;
          _RBX->invulnerableActivated = 1;
          _RBX->invulnerableExpireTime = level.time + invulnerableDuration;
        }
        if ( level.time < _RBX->invulnerableExpireTime )
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
  playerState_s *p_ps; 
  bool v15; 
  gclient_s *client; 
  double v21; 
  double v22; 

  _RBX = self;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 77, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !_RBX->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 78, ASSERT_TYPE_ASSERT, "( self->client )", (const char *)&queryFormat, "self->client") )
    __debugbreak();
  if ( _RBX->client->ps.pm_type < 7 )
  {
    v11 = ScriptContext_Server();
    if ( _RBX->client->ps.grenadeTimeLeft > 0 )
      G_CombatSP_GrenadeDrop(_RBX);
    GScr_AddEntity(inflictor);
    MoverEntityFromPs = GMovingPlatforms::GetMoverEntityFromPs(&_RBX->client->ps);
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
    GScr_Notify(_RBX, scr_const.death, 5u);
    GScr_Notify(_RBX, scr_const.death_or_disconnect, 0);
    _RBX->client->ps.pm_type = (_RBX->client->ps.pm_type == 1) + 7;
    EntHandle::setEnt(&_RBX->sentient->lastAttacker, attacker);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RBX->client->ps.eFlags, ACTIVE, 0x10u);
    Instance = GWeaponMap::GetInstance();
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 447, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    Instance->SetWeapon(Instance, &_RBX->s.weaponHandle, &NULL_WEAPON);
    _RBX->client->ps.weapCommon.offhandGestureFlags = 0;
    _RBX->client->ps.stats[4] = 0;
    p_ps = &_RBX->client->ps;
    v15 = p_ps->pm_type == 8;
    if ( p_ps->pm_type != 8 )
    {
      _RBX->r.currentAngles.v[0] = 0.0;
      _RBX->r.currentAngles.v[2] = 0.0;
      G_Combat_LookAtKiller(_RBX, inflictor, attacker, p_ps);
      client = _RBX->client;
      client->ps.viewangles.v[0] = _RBX->r.currentAngles.v[0];
      client->ps.viewangles.v[1] = _RBX->r.currentAngles.v[1];
      client->ps.viewangles.v[2] = _RBX->r.currentAngles.v[2];
    }
    _RBX->s.loopSound = 0;
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+108h]
      vmovss  xmm0, dword ptr [rbx+114h]
      vucomiss xmm1, xmm0
    }
    if ( !v15 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+68h+var_28], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+68h+var_30], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 162, ASSERT_TYPE_ASSERT, "( self->r.box.midPoint[2] ) == ( self->r.box.halfSize[2] )", "%s == %s\n\t%g, %g", "self->r.box.midPoint[2]", "self->r.box.halfSize[2]", v21, v22) )
        __debugbreak();
    }
    _RBX->r.box.midPoint.v[2] = 8.0;
    _RBX->r.box.halfSize.v[2] = 8.0;
    level.allowRespawn = 0;
    G_Nav_DestroyPlayerRepulsor(_RBX->s.number);
    G_Vehicle_ClearPlayerVehicles(_RBX->s.number, &_RBX->client->ps);
    if ( _RBX->handler != 14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 173, ASSERT_TYPE_ASSERT, "(self->handler == ENT_HANDLER_CLIENT)", (const char *)&queryFormat, "self->handler == ENT_HANDLER_CLIENT") )
      __debugbreak();
    _RBX->handler = 16;
    SV_LinkEntity(_RBX);
  }
}

/*
==============
GCombatSP::GetRadiusDamageFromPos
==============
*/
float GCombatSP::GetRadiusDamageFromPos(GCombatSP *this, gentity_s *ent, gentity_s *ignoreEnt, const vec3_t *damageOrigin, int contentMask, bool detailTrace, unsigned __int8 *priorityMap)
{
  float v21; 
  float v22; 
  float v23; 

  __asm { vmovss  xmm0, cs:__real@7f7fffff }
  _EBX = 0;
  __asm
  {
    vmovaps [rsp+98h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmovaps [rsp+98h+var_28], xmm7
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+98h+var_58], xmm7
    vmovss  [rsp+98h+var_68], xmm6
    vmovss  [rsp+98h+var_70], xmm0
  }
  _EAX = GCombat::CanRadiusDamageFromPos(this, ent, &ent->r.currentOrigin, ignoreEnt, damageOrigin, v21, v22, NULL, v23, 1, contentMask, detailTrace, priorityMap);
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, ebx
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm7, xmm2
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
GCombatSP::NotifyRadiusDamage
==============
*/

void __fastcall GCombatSP::NotifyRadiusDamage(GCombatSP *this, const vec3_t *damageOrigin, double damageRadius, gentity_s *attackerEnt, const Weapon *r_weapon, bool isAlternate)
{
  scrContext_t *v10; 
  scrContext_t *v11; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  v10 = ScriptContext_Server();
  v11 = v10;
  if ( r_weapon->weaponIdx )
  {
    _RAX = BG_WeaponDef(r_weapon, isAlternate);
    __asm { vmovss  xmm1, dword ptr [rax+12E8h]; value }
    Scr_AddFloat(v11, *(float *)&_XMM1);
    GScr_Weapon_AddParam(v11, r_weapon, isAlternate);
  }
  else
  {
    Scr_AddUndefined(v10);
    Scr_AddUndefined(v11);
  }
  Scr_AddVector(v11, damageOrigin->v);
  __asm { vmovaps xmm1, xmm6; value }
  Scr_AddFloat(v11, *(float *)&_XMM1);
  if ( attackerEnt )
    GScr_AddEntity(attackerEnt);
  else
    Scr_AddUndefined(v11);
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  Scr_NotifyLevel(v11, scr_const.code_damageradius, 5u);
}

/*
==============
GCombatSP::RadiusDamage
==============
*/
void GCombatSP::RadiusDamage(GCombatSP *this, const vec3_t *origin, gentity_s *inflictor, gentity_s *attacker, const BgExplosionDamageRangeInfo *damageRangeInfo, float coneAngleCos, const vec3_t *coneDirection, gentity_s *ignore, meansOfDeath_t mod, const Weapon *r_weapon, bool isAlternate, bool environmentOnly, bool runOcclusionTraces)
{
  signed __int64 v13; 
  void *v25; 
  const Weapon *v27; 
  bool v29; 
  const bitarray<224> *AllTeamFlags; 
  WeaponDef *v44; 
  const dvar_t *v45; 
  int v54; 
  entityType_s eType; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  weapProjExposion_t v69; 
  bool v70; 
  bool detailTrace; 
  unsigned __int8 *priorityMap; 
  int contentMask; 
  char v84; 
  bool v85; 
  bool v90; 
  Vehicle *vehicle; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float ignoreEnts; 
  float ignoreEntsa; 
  int *ignoreEntsb; 
  float ignoreEntsc; 
  float ignoreEntsd; 
  float impulseVecOverride; 
  vec3_t *impulseVecOverridea; 
  float impulseVecOverrideb; 
  double randSeed; 
  unsigned int randSeeda; 
  float removeDuplicates; 
  float removeDuplicatesa; 
  bool enabled; 
  GExtraDamageParams extraParams; 
  gentity_s *attackera; 
  Weapon *v160; 
  vec3_t *coneDirectiona; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  WeaponDef *weapDef; 
  GCombat *v164; 
  vec3_t v165; 
  vec3_t dir; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  Bounds v169; 
  __int16 v170[2048]; 
  char v181; 

  v25 = alloca(v13);
  __asm
  {
    vmovaps [rsp+1220h+var_50], xmm6
    vmovaps [rsp+1220h+var_60], xmm7
    vmovaps [rsp+1220h+var_70], xmm8
    vmovaps [rsp+1220h+var_80], xmm9
    vmovaps [rsp+1220h+var_90], xmm10
    vmovaps [rsp+1220h+var_A0], xmm11
    vmovaps [rsp+1220h+var_B0], xmm12
    vmovaps [rsp+1220h+var_C0], xmm13
  }
  v27 = r_weapon;
  v29 = isAlternate;
  _R14 = origin;
  _R13 = damageRangeInfo;
  attackera = attacker;
  coneDirectiona = (vec3_t *)coneDirection;
  v160 = (Weapon *)r_weapon;
  v164 = this;
  AllTeamFlags = Com_TeamsSP_GetAllTeamFlags();
  Actor_BroadcastPointEvent(attacker, AI_EV_EXPLOSION, AllTeamFlags, _R14);
  *(double *)&_XMM0 = BG_ExplosionForceScalar(r_weapon, isAlternate);
  __asm
  {
    vmovss  xmm3, dword ptr [r13+10h]; innerDamage
    vmovss  xmm2, dword ptr [r13+0Ch]; radius
    vmovss  dword ptr [rsp+1220h+removeDuplicates], xmm0
    vmovss  xmm0, dword ptr [r13+18h]
    vxorps  xmm10, xmm10, xmm10
    vmovss  dword ptr [rsp+1220h+ignoreEnts], xmm10
    vmovss  dword ptr [rsp+1220h+fmt], xmm0
  }
  Physics_ApplyRadiusForce(PHYSICS_WORLD_ID_FIRST, _R14, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt, ignoreEnts, &vec3_origin, level.time, removeDuplicates);
  __asm
  {
    vmovss  xmm0, dword ptr [r13+0Ch]
    vmovss  xmm12, cs:__real@3f800000
    vmovss  xmm7, dword ptr [r14]
    vmovss  xmm8, dword ptr [r14+4]
    vmovss  xmm9, dword ptr [r14+8]
    vmaxss  xmm11, xmm0, xmm12
    vmulss  xmm6, xmm11, cs:__real@3fb504f3
  }
  v44 = (WeaponDef *)BG_WeaponDef(r_weapon, isAlternate);
  v45 = DVARBOOL_g_radiusDamageCalcDetailBounds;
  weapDef = v44;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+6E8h]
    vmovss  [rbp+1120h+var_1198], xmm0
  }
  if ( !DVARBOOL_g_radiusDamageCalcDetailBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_radiusDamageCalcDetailBounds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  enabled = v45->current.enabled;
  __asm
  {
    vsubss  xmm0, xmm7, xmm6
    vsubss  xmm1, xmm8, xmm6
    vmovss  dword ptr [rbp+1120h+aabbMin], xmm0
    vmovss  dword ptr [rbp+1120h+aabbMin+4], xmm1
    vsubss  xmm0, xmm9, xmm6
    vaddss  xmm1, xmm6, xmm7
  }
  collectedEnts.ids = (unsigned __int16 *)v170;
  collectedEnts.count = 0;
  __asm
  {
    vmovss  dword ptr [rbp+1120h+aabbMin+8], xmm0
    vmovss  dword ptr [rbp+1120h+aabbMax], xmm1
    vaddss  xmm0, xmm6, xmm8
    vaddss  xmm1, xmm6, xmm9
    vmovss  dword ptr [rbp+1120h+aabbMax+4], xmm0
    vmovss  dword ptr [rbp+1120h+aabbMax+8], xmm1
  }
  collectedEnts.countMax = 2048;
  PhysicsQuery_ImmediateAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, -1, 0, NULL, &collectedEnts, NULL, 1);
  v54 = 0;
  __asm { vmovss  xmm13, [rbp+1120h+arg_28] }
  if ( collectedEnts.count )
  {
    __asm
    {
      vmovaps [rsp+1220h+var_D0], xmm14
      vmovss  xmm14, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+1220h+var_E0], xmm15
      vmovsd  xmm15, cs:__real@3ff0000000000000
    }
    while ( 1 )
    {
      _RBX = &g_entities[(unsigned __int16)v170[v54]];
      if ( _RBX == ignore )
        goto LABEL_50;
      if ( environmentOnly )
      {
        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        eType = _RBX->s.eType;
        if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM )
          goto LABEL_50;
      }
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 0x10u) || (_RBX->flags.m_flags[0] & 0x10) != 0 || _RBX->client && level.bPlayerIgnoreRadiusDamage )
        goto LABEL_50;
      __asm { vmovsd  xmm0, qword ptr [r14] }
      v165.v[2] = _R14->v[2];
      __asm { vmovsd  [rbp+1120h+var_1150], xmm0 }
      *(float *)&_XMM0 = G_Combat_GetApproxDistSquaredToModel(_RBX, &v165, enabled, &v169, NULL);
      __asm
      {
        vmovaps xmm7, xmm0
        vmulss  xmm0, xmm11, xmm11
        vcomiss xmm7, xmm0
      }
      if ( !v84 )
        goto LABEL_50;
      if ( inflictor )
      {
        __asm
        {
          vmovss  xmm0, [rbp+1120h+var_1198]
          vmovaps xmm3, xmm11; radius_max
          vmovss  dword ptr [rsp+1220h+fmt], xmm0
        }
        G_Combat_RadiusEffectsEnt(inflictor->s.number, _RBX, _R14, *(float *)&_XMM3, fmta, attackera, inflictor->c.missile.team, v27, v29);
      }
      if ( !_RBX->client )
        goto LABEL_33;
      __asm { vmovss  xmm0, dword ptr [r14+8] }
      _RDI = DVARFLT_g_grenadeDamageMaxHeight;
      __asm
      {
        vsubss  xmm6, xmm0, dword ptr [rbx+138h]
        vandps  xmm6, xmm6, xmm14
      }
      if ( !DVARFLT_g_grenadeDamageMaxHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_grenadeDamageMaxHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vcomiss xmm6, dword ptr [rdi+28h] }
      if ( v84 )
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
      v69 = BG_ProjExplosionType(WeaponForEntity, 0);
      if ( v69 )
      {
        if ( v69 != WEAPPROJEXP_HEAVY )
          break;
      }
      v70 = BG_TimedDetonation(WeaponForEntity, 0);
      v29 = isAlternate;
      if ( !v70 )
        goto LABEL_33;
LABEL_50:
      if ( ++v54 >= collectedEnts.count )
      {
        __asm
        {
          vmovaps xmm15, [rsp+1220h+var_E0]
          vmovaps xmm14, [rsp+1220h+var_D0]
        }
        goto LABEL_52;
      }
    }
    v29 = isAlternate;
LABEL_33:
    __asm
    {
      vsqrtss xmm6, xmm7, xmm7
      vmovaps xmm1, xmm6; distance
    }
    *(double *)&_XMM0 = BG_GetExplosionDamageFromRangeInfo(damageRangeInfo, *(const float *)&_XMM1);
    __asm
    {
      vucomiss xmm11, xmm10
      vmovaps xmm8, xmm0
    }
    if ( v85 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 1086, ASSERT_TYPE_ASSERT, "(outerRadius)", (const char *)&queryFormat, "outerRadius") )
      __debugbreak();
    __asm
    {
      vdivss  xmm0, xmm6, xmm11
      vsubss  xmm9, xmm12, xmm0
    }
    detailTrace = BG_WeaponRadiusDamageDetailTrace(v27, v29);
    priorityMap = BG_GetWeaponPriorityMap(v27, isAlternate);
    if ( runOcclusionTraces )
    {
      contentMask = G_Combat_GetRadiusDamageMask(weapDef);
      __asm
      {
        vmovss  dword ptr [rsp+1220h+removeDuplicates], xmm10
        vmovss  dword ptr [rsp+1220h+impulseVecOverride], xmm13
        vmovss  dword ptr [rsp+1220h+ignoreEnts], xmm11
      }
      _EAX = GCombat::CanRadiusDamageFromPos(v164, _RBX, &_RBX->r.currentOrigin, inflictor, _R14, ignoreEntsa, impulseVecOverride, coneDirectiona, removeDuplicatesa, 1, contentMask, detailTrace, priorityMap);
    }
    else
    {
      _EAX = 1;
    }
    __asm { vmovd   xmm0, eax }
    _EDI = 0;
    __asm
    {
      vmovd   xmm1, edi
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm12, xmm10, xmm2
      vmovss  [rbp+1120h+var_119C], xmm0
    }
    *(double *)&_XMM0 = G_Weapon_GetShieldBlastDamageProtection(_RBX, _R14);
    __asm
    {
      vcomiss xmm0, xmm10
      vmovaps xmm7, xmm0
    }
    if ( v84 )
      goto LABEL_55;
    __asm { vcomiss xmm0, xmm12 }
    if ( !(v84 | v85) )
    {
LABEL_55:
      __asm
      {
        vmovsd  qword ptr [rsp+1220h+randSeed], xmm15
        vxorpd  xmm0, xmm0, xmm0
        vmovsd  [rsp+1220h+impulseVecOverride], xmm0
        vcvtss2sd xmm1, xmm7, xmm7
        vmovsd  [rsp+1220h+ignoreEnts], xmm1
      }
      v90 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_combat_sp.cpp", 1105, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( shieldProtection ) && ( shieldProtection ) <= ( 1.f )", "shieldProtection not in [0.f, 1.f]\n\t%g not in [%g, %g]", *(double *)&ignoreEntsb, *(double *)&impulseVecOverridea, randSeed);
      v84 = 0;
      v85 = !v90;
      if ( v90 )
        __debugbreak();
    }
    __asm { vcomiss xmm7, xmm10 }
    if ( v84 | v85 )
    {
      __asm { vmovss  xmm3, [rbp+1120h+var_119C] }
    }
    else
    {
      __asm
      {
        vmovss  xmm6, [rbp+1120h+var_119C]
        vmovaps xmm2, xmm6; originalDamageScale
        vmovaps xmm3, xmm7; shieldProtection
        vmovaps xmm1, xmm8; originalDamageRawPoints
      }
      G_Weapon_AddShieldSplashDamageEvent(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm
      {
        vsubss  xmm0, xmm12, xmm7
        vmulss  xmm3, xmm6, xmm0
      }
    }
    __asm { vcomiss xmm3, xmm10 }
    v27 = v160;
    if ( v84 | v85 )
    {
      v29 = isAlternate;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+130h]
        vsubss  xmm1, xmm0, dword ptr [r14]
        vmovss  xmm2, dword ptr [rbx+134h]
        vsubss  xmm0, xmm2, dword ptr [r14+4]
        vmovss  dword ptr [rbp+1120h+dir+4], xmm0
        vmovss  dword ptr [rbp+1120h+dir], xmm1
        vmovss  xmm1, dword ptr [rbx+138h]
        vsubss  xmm2, xmm1, dword ptr [r14+8]
        vaddss  xmm0, xmm2, cs:__real@41c00000
      }
      extraParams = 0;
      v29 = isAlternate;
      __asm
      {
        vmovss  dword ptr [rbp+1120h+dir+8], xmm0
        vmulss  xmm0, xmm3, xmm8
        vcvttss2si eax, xmm0
      }
      G_CombatSP_Damage_Internal(_RBX, inflictor, attackera, &dir, _R14, _EAX, 5, mod, v160, isAlternate, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, &extraParams);
      vehicle = _RBX->vehicle;
      if ( vehicle )
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rbp+1120h+dir]
          vmovss  xmm7, dword ptr [rbp+1120h+dir+4]
          vmovss  xmm5, dword ptr [rbp+1120h+dir+8]
          vmulss  xmm1, xmm6, xmm6
          vmulss  xmm0, xmm7, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm0, xmm2, xmm1
          vsqrtss xmm4, xmm0, xmm0
          vcomiss xmm4, cs:__real@3a83126f
          vcmpless xmm0, xmm4, cs:__real@80000000
          vblendvps xmm0, xmm4, xmm12, xmm0
          vdivss  xmm2, xmm12, xmm0
          vmulss  xmm0, xmm6, xmm2
          vmovss  dword ptr [rbp+1120h+dir], xmm0
          vmulss  xmm0, xmm5, xmm2
          vmulss  xmm1, xmm7, xmm2
          vmovss  dword ptr [rbp+1120h+dir+8], xmm0
          vmovss  dword ptr [rbp+1120h+dir+4], xmm1
          vmovaps xmm3, xmm9; forceScale
        }
        G_Vehicle_Knockback(vehicle, &dir, mod, *(float *)&_XMM3, NULL);
      }
    }
    goto LABEL_50;
  }
LABEL_52:
  __asm
  {
    vmovss  xmm1, dword ptr [r13+10h]
    vmovss  xmm0, dword ptr [r13+18h]
    vmovss  dword ptr [rsp+1220h+ignoreEnts], xmm0
    vmovss  dword ptr [rsp+1220h+fmt], xmm1
    vmovaps xmm1, xmm11; radius
    vmovaps xmm2, xmm13; coneAngleCos
  }
  G_Glass_RadiusDamage(_R14, *(float *)&_XMM1, *(float *)&_XMM2, coneDirectiona, fmtb, ignoreEntsc);
  __asm
  {
    vmovss  xmm0, dword ptr [r13+18h]
    vmovss  xmm1, dword ptr [r13+10h]
    vmovss  [rsp+1220h+randSeed], xmm0
    vmovss  dword ptr [rsp+1220h+impulseVecOverride], xmm1
    vmovss  dword ptr [rsp+1220h+ignoreEnts], xmm11
  }
  ScriptableSv_RadiusDamage(inflictor, attackera, v27, v29, _R14, ignoreEntsd, impulseVecOverrideb, *(const float *)&randSeeda, mod, runOcclusionTraces);
  _R11 = &v181;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
  }
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

