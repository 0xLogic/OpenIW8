/*
==============
G_CombatMP_GetHitCorpseEntity_Hack
==============
*/

const gentity_s *__fastcall G_CombatMP_GetHitCorpseEntity_Hack(const gentity_s *entity)
{
  return ?G_CombatMP_GetHitCorpseEntity_Hack@@YAPEBUgentity_s@@PEBU1@@Z(entity);
}

/*
==============
G_CombatMP_Damage
==============
*/

damageReturnCode_t __fastcall G_CombatMP_Damage(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  return ?G_CombatMP_Damage@@YA?AW4damageReturnCode_t@@PEAUgentity_s@@PEBU2@0PEBTvec3_t@@2HHHAEBUWeapon@@_NW4hitLocation_t@@IW4scr_string_t@@H2AEBVGExtraDamageParams@@@Z(targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset, surfaceNormal, extraParams);
}

/*
==============
G_CombatMP_GrenadeDrop
==============
*/

void __fastcall G_CombatMP_GrenadeDrop(gentity_s *self, int meansOfDeath, bool applyDamageToOwner)
{
  ?G_CombatMP_GrenadeDrop@@YAXPEAUgentity_s@@H_N@Z(self, meansOfDeath, applyDamageToOwner);
}

/*
==============
G_CombatMP_SetAnimHitLocationCondition
==============
*/

void __fastcall G_CombatMP_SetAnimHitLocationCondition(const int clientNum, const gentity_s *self, const hitLocation_t hitLoc)
{
  ?G_CombatMP_SetAnimHitLocationCondition@@YAXHPEBUgentity_s@@W4hitLocation_t@@@Z(clientNum, self, hitLoc);
}

/*
==============
G_CombatMP_SetAnimMoveDirectionCondition
==============
*/

void __fastcall G_CombatMP_SetAnimMoveDirectionCondition(const int clientNum, gentity_s *self, const playerState_s *ps)
{
  ?G_CombatMP_SetAnimMoveDirectionCondition@@YAXHPEAUgentity_s@@PEBUplayerState_s@@@Z(clientNum, self, ps);
}

/*
==============
G_CombatMP_SetAnimDamageTypeCondition
==============
*/

void __fastcall G_CombatMP_SetAnimDamageTypeCondition(const int clientNum, const gentity_s *self, const gentity_s *inflictor, int meansOfDeath, const Weapon *r_weapon, bool isAlternate)
{
  ?G_CombatMP_SetAnimDamageTypeCondition@@YAXHPEBUgentity_s@@0HAEBUWeapon@@_N@Z(clientNum, self, inflictor, meansOfDeath, r_weapon, isAlternate);
}

/*
==============
GCombatMP::RadiusDamage
==============
*/

void __fastcall GCombatMP::RadiusDamage(GCombatMP *this, const vec3_t *origin, gentity_s *inflictor, gentity_s *attacker, const BgExplosionDamageRangeInfo *damageRangeInfo, float coneAngleCos, const vec3_t *coneDirection, gentity_s *ignore, meansOfDeath_t mod, const Weapon *r_weapon, bool isAlternate, bool environmentOnly, bool runOcclusionTraces)
{
  ?RadiusDamage@GCombatMP@@UEBAXAEBTvec3_t@@PEAUgentity_s@@1AEBUBgExplosionDamageRangeInfo@@MPEBT2@1W4meansOfDeath_t@@AEBUWeapon@@_N66@Z(this, origin, inflictor, attacker, damageRangeInfo, coneAngleCos, coneDirection, ignore, mod, r_weapon, isAlternate, environmentOnly, runOcclusionTraces);
}

/*
==============
GCombatMP::ShieldNotifyAndDamage
==============
*/

bool __fastcall GCombatMP::ShieldNotifyAndDamage(GCombatMP *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *r_weapon, bool isAlternate, int timeOffset)
{
  return ?ShieldNotifyAndDamage@GCombatMP@@UEBA_NPEAUgentity_s@@PEBU2@0PEBTvec3_t@@2HHHAEBUWeapon@@_NH@Z(this, targ, inflictor, attacker, dir, point, damage, dFlags, mod, r_weapon, isAlternate, timeOffset);
}

/*
==============
G_CombatMP_DamageKnockback
==============
*/

void __fastcall G_CombatMP_DamageKnockback(const gentity_s *pSelf, const int damage, const vec3_t *direction, playerState_s *ps)
{
  ?G_CombatMP_DamageKnockback@@YAXPEBUgentity_s@@HAEBTvec3_t@@PEAUplayerState_s@@@Z(pSelf, damage, direction, ps);
}

/*
==============
GCombatMP::GCombatMP
==============
*/

void __fastcall GCombatMP::GCombatMP(GCombatMP *this)
{
  ??0GCombatMP@@QEAA@XZ(this);
}

/*
==============
G_CombatMP_AgentDie
==============
*/

void __fastcall G_CombatMP_AgentDie(gentity_s *self, const gentity_s *inflictor, gentity_s *attacker, int damage, int damageFlags, int meansOfDeath, const Weapon *r_weapon, bool isAlternate, const vec3_t *vDir, const hitLocation_t hitLoc, int psTimeOffset)
{
  ?G_CombatMP_AgentDie@@YAXPEAUgentity_s@@PEBU1@0HHHAEBUWeapon@@_NPEBTvec3_t@@W4hitLocation_t@@H@Z(self, inflictor, attacker, damage, damageFlags, meansOfDeath, r_weapon, isAlternate, vDir, hitLoc, psTimeOffset);
}

/*
==============
G_CombatMP_GetYawForCharacter
==============
*/

double __fastcall G_CombatMP_GetYawForCharacter(gentity_s *ent, characterInfo_t *ci)
{
  double result; 

  *(float *)&result = ?G_CombatMP_GetYawForCharacter@@YAMPEAUgentity_s@@PEAUcharacterInfo_t@@@Z(ent, ci);
  return result;
}

/*
==============
G_CombatMP_DeathAnimForScript
==============
*/

int __fastcall G_CombatMP_DeathAnimForScript(gentity_s *self, const gentity_s *inflictor, int meansOfDeath, const Weapon *weapon, hitLocation_t hitLoc, const vec3_t *direction)
{
  return ?G_CombatMP_DeathAnimForScript@@YAHPEAUgentity_s@@PEBU1@HAEBUWeapon@@W4hitLocation_t@@AEBTvec3_t@@@Z(self, inflictor, meansOfDeath, weapon, hitLoc, direction);
}

/*
==============
G_CombatMP_SetVehicleOccupancyConditions
==============
*/

void __fastcall G_CombatMP_SetVehicleOccupancyConditions(const int clientNum, gentity_s *self)
{
  ?G_CombatMP_SetVehicleOccupancyConditions@@YAXHPEAUgentity_s@@@Z(clientNum, self);
}

/*
==============
G_CombatMP_SetMeleeReactionConditions
==============
*/

void __fastcall G_CombatMP_SetMeleeReactionConditions(const int clientNum, const gentity_s *inflictor)
{
  ?G_CombatMP_SetMeleeReactionConditions@@YAXHPEBUgentity_s@@@Z(clientNum, inflictor);
}

/*
==============
G_CombatMP_HandlePlayerDeath
==============
*/

void __fastcall G_CombatMP_HandlePlayerDeath(gentity_s *self, const gentity_s *inflictor, gentity_s *attacker, const int damage, const int damageFlags, const int mod, const Weapon *r_weapon, bool isAlternate, const vec3_t *vDir, const vec3_t *point, const hitLocation_t hitLoc, int timeOffset, int modelIndex, scr_string_t partName)
{
  ?G_CombatMP_HandlePlayerDeath@@YAXPEAUgentity_s@@PEBU1@0HHHAEBUWeapon@@_NPEBTvec3_t@@4W4hitLocation_t@@HHW4scr_string_t@@@Z(self, inflictor, attacker, damage, damageFlags, mod, r_weapon, isAlternate, vDir, point, hitLoc, timeOffset, modelIndex, partName);
}

/*
==============
G_CombatMP_GetHitCorpseEntity
==============
*/

const gentity_s *__fastcall G_CombatMP_GetHitCorpseEntity(const gentity_s *entity)
{
  return ?G_CombatMP_GetHitCorpseEntity@@YAPEBUgentity_s@@PEBU1@@Z(entity);
}

/*
==============
GCombatMP::Damage_Internal
==============
*/

damageReturnCode_t __fastcall GCombatMP::Damage_Internal(GCombatMP *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  return ?Damage_Internal@GCombatMP@@UEAA?AW4damageReturnCode_t@@PEAUgentity_s@@PEBU3@0PEBTvec3_t@@2HHHAEBUWeapon@@_NW4hitLocation_t@@IW4scr_string_t@@H2AEBVGExtraDamageParams@@@Z(this, targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset, surfaceNormal, extraParams);
}

/*
==============
G_CombatMP_PlayerDie
==============
*/

void __fastcall G_CombatMP_PlayerDie(gentity_s *self, const gentity_s *inflictor, gentity_s *attacker, int damage, int damageFlags, int meansOfDeath, const Weapon *r_weapon, bool isAlternate, const vec3_t *vDir, const hitLocation_t hitLoc, int psTimeOffset)
{
  ?G_CombatMP_PlayerDie@@YAXPEAUgentity_s@@PEBU1@0HHHAEBUWeapon@@_NPEBTvec3_t@@W4hitLocation_t@@H@Z(self, inflictor, attacker, damage, damageFlags, meansOfDeath, r_weapon, isAlternate, vDir, hitLoc, psTimeOffset);
}

/*
==============
GCombatMP::Damage
==============
*/

damageReturnCode_t __fastcall GCombatMP::Damage(GCombatMP *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  return ?Damage@GCombatMP@@UEBA?AW4damageReturnCode_t@@PEAUgentity_s@@PEBU3@0PEBTvec3_t@@2HHHAEBUWeapon@@_NW4hitLocation_t@@IW4scr_string_t@@H2AEBVGExtraDamageParams@@@Z(this, targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset, surfaceNormal, extraParams);
}

/*
==============
GCombatMP::GetRadiusDamageFromPos
==============
*/

double __fastcall GCombatMP::GetRadiusDamageFromPos(GCombatMP *this, gentity_s *ent, gentity_s *ignoreEnt, const vec3_t *damageOrigin, int contentMask, bool detailTrace, unsigned __int8 *priorityMap)
{
  double result; 

  *(float *)&result = ?GetRadiusDamageFromPos@GCombatMP@@UEBAMPEAUgentity_s@@0AEBTvec3_t@@H_NPEAE@Z(this, ent, ignoreEnt, damageOrigin, contentMask, detailTrace, priorityMap);
  return result;
}

/*
==============
GCombatMP::CalcVehicleImpactDamage
==============
*/

int __fastcall GCombatMP::CalcVehicleImpactDamage(GCombatMP *this, const Vehicle *veh, const VehicleDef *vehDef, gentity_s *vehEnt, const float vehicleSpeed, const gentity_s *receiver, const vec3_t *moveDir)
{
  return ?CalcVehicleImpactDamage@GCombatMP@@UEBAHPEBUVehicle@@PEBUVehicleDef@@PEAUgentity_s@@MPEBU4@AEBTvec3_t@@@Z(this, veh, vehDef, vehEnt, vehicleSpeed, receiver, moveDir);
}

/*
==============
G_CombatMP_SetAnimHitDirectionCondition
==============
*/

void __fastcall G_CombatMP_SetAnimHitDirectionCondition(const int clientNum, gentity_s *self, const vec3_t *vDir, const playerState_s *ps, const int meansOfDeath)
{
  ?G_CombatMP_SetAnimHitDirectionCondition@@YAXHPEAUgentity_s@@PEBTvec3_t@@PEBUplayerState_s@@H@Z(clientNum, self, vDir, ps, meansOfDeath);
}

/*
==============
G_CombatMP_ShieldNotifyAndDamage
==============
*/

void __fastcall G_CombatMP_ShieldNotifyAndDamage(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *r_weapon, bool isAlternate, int timeOffset)
{
  ?G_CombatMP_ShieldNotifyAndDamage@@YAXPEAUgentity_s@@PEBU1@0PEBTvec3_t@@2HHHAEBUWeapon@@_NH@Z(targ, inflictor, attacker, dir, point, damage, dFlags, mod, r_weapon, isAlternate, timeOffset);
}

/*
==============
GCombatMP::NotifyRadiusDamage
==============
*/

void __fastcall GCombatMP::NotifyRadiusDamage(GCombatMP *this, const vec3_t *damageOrigin, float damageRadius, gentity_s *attackerEnt, const Weapon *r_weapon, bool isAlternate)
{
  ?NotifyRadiusDamage@GCombatMP@@UEBAXAEBTvec3_t@@MPEAUgentity_s@@AEBUWeapon@@_N@Z(this, damageOrigin, damageRadius, attackerEnt, r_weapon, isAlternate);
}

/*
==============
G_CombatMP_SendPlayerHitEvent
==============
*/

void __fastcall G_CombatMP_SendPlayerHitEvent(const gentity_s *body, const gentity_s *victim, const gentity_s *inflictor, const Weapon *r_weapon, const bool isAlternate, const scr_string_t partName, const vec3_t *point, const vec3_t *localdir, const meansOfDeath_t mod, const hitLocation_t hitLoc, int dflags, const bool isFatal)
{
  ?G_CombatMP_SendPlayerHitEvent@@YAXPEBUgentity_s@@00AEBUWeapon@@_NW4scr_string_t@@PEBTvec3_t@@4W4meansOfDeath_t@@W4hitLocation_t@@H2@Z(body, victim, inflictor, r_weapon, isAlternate, partName, point, localdir, mod, hitLoc, dflags, isFatal);
}

/*
==============
G_CombatMP_AgentDespawn
==============
*/

void __fastcall G_CombatMP_AgentDespawn(gentity_s *self)
{
  ?G_CombatMP_AgentDespawn@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
GCombatMP::FinalizePlayerDeath
==============
*/

void __fastcall GCombatMP::FinalizePlayerDeath(GCombatMP *this, gentity_s *self, const gentity_s *inflictor, gentity_s *attacker, const int damage, const int damageFlags, const int mod, const Weapon *r_weapon, bool isAlternate, const vec3_t *vDir, const vec3_t *point, const hitLocation_t hitLoc, int timeOffset, int modelIndex, scr_string_t partName)
{
  ?FinalizePlayerDeath@GCombatMP@@UEAAXPEAUgentity_s@@PEBU2@0HHHAEBUWeapon@@_NPEBTvec3_t@@4W4hitLocation_t@@HHW4scr_string_t@@@Z(this, self, inflictor, attacker, damage, damageFlags, mod, r_weapon, isAlternate, vDir, point, hitLoc, timeOffset, modelIndex, partName);
}

/*
==============
GCombatMP::GCombatMP
==============
*/
void GCombatMP::GCombatMP(GCombatMP *this)
{
  const dvar_t *v2; 

  GCombat::GCombat(this);
  this->__vftable = (GCombatMP_vtbl *)&GCombatMP::`vftable';
  this->m_locDamageTable[2] = NULL;
  this->m_locDamageTable[3] = NULL;
  this->m_locDamageTable[4] = NULL;
  this->m_locDamageTable[5] = NULL;
  this->m_locDamageTable[6] = NULL;
  this->m_locDamageTable[7] = NULL;
  this->m_locDamageTable[0] = "mp_lochit_dmgtable";
  this->m_locDamageTable[1] = "ai_lochit_dmgtable";
  v2 = DVARBOOL_killswitch_simultaneous_deaths;
  if ( !DVARBOOL_killswitch_simultaneous_deaths && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_simultaneous_deaths") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  s_simultaneousDeaths = !v2->current.enabled;
}

/*
==============
GCombatMP::CalcVehicleImpactDamage
==============
*/
__int64 GCombatMP::CalcVehicleImpactDamage(GCombatMP *this, const Vehicle *veh, const VehicleDef *vehDef, gentity_s *vehEnt, const float vehicleSpeed, const gentity_s *receiver, const vec3_t *moveDir)
{
  int IsAgentScripted; 
  double v10; 
  float v11; 
  __int128 v13; 
  float v14; 
  float v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v26; 
  const dvar_t *v27; 
  float v28; 

  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1783, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1784, ASSERT_TYPE_ASSERT, "( vehDef )", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( vehDef->collisionSpeed == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1785, ASSERT_TYPE_ASSERT, "( vehDef->collisionSpeed )", (const char *)&queryFormat, "vehDef->collisionSpeed") )
    __debugbreak();
  IsAgentScripted = SV_IsAgentScripted(receiver);
  v10 = I_fclamp(vehDef->dlcFloat[2], 0.0, 1.0);
  v11 = *(float *)&v10;
  if ( IsAgentScripted )
  {
    _XMM6 = 0i64;
  }
  else
  {
    v13 = LODWORD(vehDef->dlcFloat[1]);
    *(float *)&v13 = vehDef->dlcFloat[1] * 17.6;
    _XMM6 = v13;
  }
  v14 = vehDef->dlcFloat[0];
  _XMM0 = LODWORD(vehDef->collisionDamage);
  __asm
  {
    vmaxss  xmm11, xmm6, dword ptr [rdi+0C4h]
    vmaxss  xmm12, xmm0, xmm9
  }
  v18 = FLOAT_1_0;
  if ( !vehDef->collisionDamageIgnoresImpactAngle )
  {
    v19 = receiver->r.currentOrigin.v[0] - vehEnt->r.currentOrigin.v[0];
    v21 = LODWORD(receiver->r.currentOrigin.v[1]);
    v20 = receiver->r.currentOrigin.v[1] - vehEnt->r.currentOrigin.v[1];
    *(float *)&v21 = fsqrt((float)(v20 * v20) + (float)(v19 * v19));
    _XMM3 = v21;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
    }
    LODWORD(v18) = COERCE_UNSIGNED_INT((float)((float)(v20 * (float)(1.0 / *(float *)&_XMM0)) * moveDir->v[1]) + (float)((float)(v19 * (float)(1.0 / *(float *)&_XMM0)) * moveDir->v[0])) & _xmm;
  }
  if ( vehicleSpeed <= *(float *)&_XMM6 )
    return (unsigned int)(int)(float)((float)(v14 * v11) * v18);
  if ( vehicleSpeed >= *(float *)&_XMM11 )
    return (unsigned int)(int)(float)(v18 * *(float *)&_XMM12);
  if ( (float)(*(float *)&_XMM11 - *(float *)&_XMM6) <= 0.0 )
    v26 = FLOAT_1_0;
  else
    LODWORD(v26) = COERCE_UNSIGNED_INT64(I_fclamp((float)(vehicleSpeed - *(float *)&_XMM6) / (float)(*(float *)&_XMM11 - *(float *)&_XMM6), 0.0, 1.0));
  v27 = DCONST_DVARINT_vehDmgToPlayersCurve;
  if ( !DCONST_DVARINT_vehDmgToPlayersCurve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehDmgToPlayersCurve") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  switch ( v27->current.integer )
  {
    case 0:
      v26 = FLOAT_1_0;
      break;
    case 1:
      v26 = 0.0;
      break;
    case 3:
      v28 = fsqrt(v26);
      goto LABEL_31;
    case 4:
      v26 = v26 * v26;
      break;
    case 5:
      v28 = v26 * v26;
LABEL_31:
      v26 = v28 * v26;
      break;
    default:
      return (unsigned int)(int)(float)((float)((float)((float)(*(float *)&_XMM12 - v14) * v26) + v14) * v18);
  }
  return (unsigned int)(int)(float)((float)((float)((float)(*(float *)&_XMM12 - v14) * v26) + v14) * v18);
}

/*
==============
GCombatMP::Damage
==============
*/
damageReturnCode_t GCombatMP::Damage(GCombatMP *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  return G_CombatMP_Damage_Internal(targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset, surfaceNormal, extraParams);
}

/*
==============
GCombatMP::Damage_Internal
==============
*/
damageReturnCode_t GCombatMP::Damage_Internal(GCombatMP *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  return G_CombatMP_Damage_Internal(targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset, surfaceNormal, extraParams);
}

/*
==============
GCombatMP::FinalizePlayerDeath
==============
*/
void GCombatMP::FinalizePlayerDeath(GCombatMP *this, gentity_s *self, const gentity_s *inflictor, gentity_s *attacker, const int damage, const int damageFlags, const int mod, const Weapon *r_weapon, bool isAlternate, const vec3_t *vDir, const vec3_t *point, const hitLocation_t hitLoc, int timeOffset, int modelIndex, scr_string_t partName)
{
  G_CombatMP_FinalizePlayerDeath(self, inflictor, attacker, damage, damageFlags, mod, r_weapon, isAlternate, vDir, point, hitLoc, timeOffset, modelIndex, partName);
}

/*
==============
G_CombatMP_AgentDespawn
==============
*/
void G_CombatMP_AgentDespawn(gentity_s *self)
{
  gentity_s *i; 
  vec3_t vDir; 

  vDir.v[0] = 0.0;
  vDir.v[1] = 0.0;
  vDir.v[2] = FLOAT_1_0;
  G_CombatMP_AgentDieInternal(self, NULL, NULL, 0, 0, 0, &NULL_WEAPON, 0, &vDir, HITLOC_NONE, 0, 1);
  G_EntUnlink(self);
  for ( i = self->tagChildren; i; i = self->tagChildren )
    G_EntUnlink(i);
}

/*
==============
G_CombatMP_AgentDie
==============
*/
void G_CombatMP_AgentDie(gentity_s *self, const gentity_s *inflictor, gentity_s *attacker, int damage, int damageFlags, int meansOfDeath, const Weapon *r_weapon, bool isAlternate, const vec3_t *vDir, const hitLocation_t hitLoc, int psTimeOffset)
{
  G_CombatMP_AgentDieInternal(self, inflictor, attacker, damage, damageFlags, meansOfDeath, r_weapon, isAlternate, vDir, hitLoc, psTimeOffset, 0);
}

/*
==============
G_CombatMP_AgentDieInternal
==============
*/
void G_CombatMP_AgentDieInternal(gentity_s *self, const gentity_s *inflictor, gentity_s *attacker, int damage, int damageFlags, int meansOfDeath, const Weapon *r_weapon, bool isAlternate, const vec3_t *vDir, const hitLocation_t hitLoc, int psTimeOffset, bool despawn)
{
  gentity_s *v12; 
  gagent_s *agent; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  unsigned int pm_type; 
  unsigned __int8 v17; 
  bool v18; 
  unsigned int v19; 
  __int64 v20; 
  int v21; 
  unsigned int v22; 
  bool v23; 
  gentity_s *v24; 
  const vec3_t *v25; 
  unsigned int *RandomSeed; 
  GHandler *Handler; 
  int v28; 
  gagent_s *v29; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v31; 
  int v32; 
  int v33; 
  gentity_s *v34; 
  SvPersistentGlobals *v35; 
  int number; 
  unsigned int v37; 
  const Bounds *Bounds; 
  __m128 v39; 
  gagent_s *v40; 
  __int64 v41; 
  unsigned int *holdrand; 
  int holdranda; 
  Weapon *v44; 
  __int64 v45; 
  bool v46; 
  vec3_t *v47; 
  AIAgentInterface v48; 
  AIAgentInterface *v49; 
  int outDuration; 
  gentity_s *inflictora; 
  gentity_s *attackera; 
  int damagea; 

  damagea = damage;
  attackera = attacker;
  inflictora = (gentity_s *)inflictor;
  v12 = attacker;
  outDuration = 0;
  SV_InitMP_CheckThread();
  if ( !self->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1152, ASSERT_TYPE_ASSERT, "(self->agent)", (const char *)&queryFormat, "self->agent") )
    __debugbreak();
  agent = self->agent;
  if ( !Com_GetServerDObjForEntnum(agent->playerState.clientNum) )
  {
    Agent_Free(self);
    return;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&agent->playerState.pm_flags, ACTIVE, 0x16u) )
    *(_QWORD *)agent->playerState.velocity.v = 0i64;
  if ( !SV_IsAgentScripted(self) )
  {
    p_otherFlags = &agent->playerState.otherFlags;
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&agent->playerState.otherFlags, (POtherFlagsMP)33) || agent->playerState.pm_type > 1u && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&agent->playerState.otherFlags, ACTIVE, 0xBu) )
      return;
LABEL_32:
    v18 = despawn;
    if ( despawn )
      self->health = 0;
    SV_BotEntityDied(self);
    v19 = tls_index;
    v20 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64);
    if ( !v20 )
      goto LABEL_113;
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    if ( v20 != *(_QWORD *)&GStatic::ms_gameStatics )
    {
LABEL_113:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1216, ASSERT_TYPE_ASSERT, "(BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == GStatic::GetGameStatics()))", "%s\n\tEntering server game agent processing without a valid client game state", "BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == GStatic::GetGameStatics())") )
        __debugbreak();
    }
    v21 = meansOfDeath;
    if ( v18 )
    {
      v22 = 0;
    }
    else
    {
      if ( v12->s.eType == ET_TURRET && EntHandle::isDefined(&v12->r.ownerNum) )
      {
        v12 = EntHandle::ent(&v12->r.ownerNum);
        attackera = v12;
      }
      G_CombatMP_GrenadeDrop(self, v21, 1);
      G_PlayerSpawnPoints_LogDeathEvent(self, v12);
      GScr_AddEntity(v12);
      v22 = 1;
    }
    GScr_Notify(self, scr_const.death, v22);
    GScr_Notify(self, scr_const.death_or_disconnect, 0);
    if ( agent->playerState.pm_type > 1u && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0xBu) )
    {
      LODWORD(holdrand) = agent->playerState.pm_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1238, ASSERT_TYPE_SANITY, "( ( (playerState->pm_type == PM_NORMAL_LINKED) || (playerState->pm_type == PM_NORMAL) || playerState->otherFlags.TestFlag( POtherFlagsCommon::LASTSTAND ) ) )", "( playerState->pm_type ) = %i", holdrand) )
        __debugbreak();
    }
    if ( v18 )
    {
      v34 = inflictora;
LABEL_68:
      G_Vehicle_ClearPlayerVehicles(self->s.number, &agent->playerState);
      if ( BYTE1(SvGameGlobals::ms_allocatedType) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_persistent_globals_mp.h", 166, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      if ( !SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 72, ASSERT_TYPE_ASSERT, "(ms_svPersistent)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_svPersistent") )
        __debugbreak();
      if ( !BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 73, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
        __debugbreak();
      v35 = SvPersistentGlobals::ms_svPersistent;
      number = self->s.number;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( number < (int)ComCharacterLimits::ms_gameData.m_clientCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v47) = ComCharacterLimits::ms_gameData.m_clientCount;
        LODWORD(v45) = number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 175, ASSERT_TYPE_ASSERT, "( entityIndex ) >= ( ComCharacterLimits::GetAgentEntityIndexOffset() )", "%s >= %s\n\t%i, %i", "entityIndex", "ComCharacterLimits::GetAgentEntityIndexOffset()", v45, v47) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v37 = number - ComCharacterLimits::ms_gameData.m_clientCount;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v37 >= ComCharacterLimits::ms_gameData.m_agentCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v44) = ComCharacterLimits::ms_gameData.m_agentCount;
        LODWORD(holdrand) = v37;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 178, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", holdrand, v44) )
          __debugbreak();
      }
      SV_AgentKilled((agent_t *)(*(_QWORD *)&v35[2].m_skelMemSize + 280i64 * (int)v37));
      if ( !v18 )
      {
        GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&self->s.lerp.eFlags, ACTIVE, 0x10u);
        self->r.currentAngles.v[2] = 0.0;
        G_Combat_LookAtKiller(self, v34, v12, &agent->playerState);
        agent->playerState.viewangles.v[0] = self->r.currentAngles.v[0];
        agent->playerState.viewangles.v[1] = self->r.currentAngles.v[1];
        agent->playerState.viewangles.v[2] = self->r.currentAngles.v[2];
        self->s.loopSound = 0;
        Bounds = BG_Suit_GetBounds(agent->playerState.suitIndex, PM_EFF_STANCE_PRONE);
        *(_OWORD *)self->r.box.midPoint.v = *(_OWORD *)Bounds->midPoint.v;
        v39 = (__m128)*(unsigned __int64 *)&Bounds->halfSize.y;
        *(double *)&self->r.box.halfSize.y = *(double *)v39.m128_u64;
        if ( _mm_shuffle_ps(v39, v39, 85).m128_f32[0] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1302, ASSERT_TYPE_ASSERT, "(self->r.box.halfSize[2] >= 0.0f)", (const char *)&queryFormat, "self->r.box.halfSize[2] >= 0.0f") )
          __debugbreak();
      }
      SV_LinkEntity(self);
      v40 = self->agent;
      self->health = 0;
      v40->lastDeathTime = level.time;
      if ( SV_IsAgentScripted(self) )
        self->handler = 28;
      v41 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v19) + 272i64);
      if ( !v41 )
        goto LABEL_114;
      if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
        __debugbreak();
      if ( v41 != *(_QWORD *)&GStatic::ms_gameStatics )
      {
LABEL_114:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1324, ASSERT_TYPE_ASSERT, "(BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == GStatic::GetGameStatics()))", "%s\n\tFinished server game agent processing without a valid client game state", "BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == GStatic::GetGameStatics())") )
          __debugbreak();
      }
      return;
    }
    v23 = isAlternate;
    v24 = inflictora;
    G_CombatMP_SetAnimDamageTypeCondition(agent->playerState.clientNum, self, inflictora, v21, r_weapon, isAlternate);
    G_CombatMP_SetAnimHitLocationCondition(agent->playerState.clientNum, self, hitLoc);
    v25 = vDir;
    G_CombatMP_SetAnimHitDirectionCondition(agent->playerState.clientNum, self, vDir, &agent->playerState, v21);
    G_CombatMP_SetAnimMoveDirectionCondition(agent->playerState.clientNum, self, &agent->playerState);
    G_CombatMP_SetVehicleOccupancyConditions(agent->playerState.clientNum, self);
    if ( v21 == 8 )
    {
      G_CombatMP_SetMeleeReactionConditions(agent->playerState.clientNum, v24);
    }
    else if ( v21 == 21 )
    {
      outDuration = G_Execution_GetExecutionAnimDurationRemaining(self, level.time);
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(p_otherFlags, GameModeFlagValues::ms_mpValue, 0x33u);
LABEL_56:
      agent->playerState.pm_type = (agent->playerState.pm_type == 1) + 7;
      agent->playerState.stats[0] = 0;
      AIAgentInterface::AIAgentInterface(&v48);
      v49 = NULL;
      v48.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      if ( SV_IsAgentScripted(self) )
      {
        ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(self);
        if ( ScriptedAgentInfo )
        {
          v49 = &v48;
          AINewAgentInterface::SetAgent((AINewAgentInterface *)&v48, ScriptedAgentInfo);
        }
      }
      v31 = v49;
      v32 = psTimeOffset;
      v33 = damageFlags;
      if ( v49 )
      {
        if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1277, ASSERT_TYPE_ASSERT, "(vDir)", (const char *)&queryFormat, "vDir") )
          __debugbreak();
        v31->Die(v31, inflictora, attackera, damagea, v33, v21, r_weapon, v23, v25, hitLoc, v32);
      }
      v46 = v23;
      v12 = attackera;
      holdranda = v21;
      v34 = inflictora;
      Scr_AgentKilled(self, inflictora, attackera, damagea, v33, holdranda, r_weapon, v46, v25, hitLoc, v32, outDuration);
      v18 = despawn;
      v19 = tls_index;
      goto LABEL_68;
    }
    if ( (*(_BYTE *)&self->s.animInfo.selectAnim & 1) == 0 )
    {
      RandomSeed = G_GetRandomSeed();
      Handler = GHandler::getHandler();
      v28 = BG_AnimScriptEvent(Handler, &agent->playerState, ANIM_ET_DEATH, 0, 1, RandomSeed);
      v29 = self->agent;
      outDuration = v28;
      GPlayerASM_ForceUpdateEvent(&v29->playerState, MOVEMENT, 1, &outDuration);
    }
    goto LABEL_56;
  }
  if ( agent->playerState.pm_type > 1u && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&agent->playerState.otherFlags, ACTIVE, 0xBu) )
    Com_Printf(18, "G_CombatMP_AgentDie: Agent(%d) has unexpected pm_type (%d)!\n", (unsigned int)self->s.number, (unsigned int)agent->playerState.pm_type);
  pm_type = agent->playerState.pm_type;
  if ( pm_type - 7 > 1 )
  {
    if ( pm_type > 1 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&agent->playerState.otherFlags, ACTIVE, 0xBu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1206, ASSERT_TYPE_ASSERT, "(playerState->pm_type == PM_NORMAL || playerState->pm_type == PM_NORMAL_LINKED || playerState->otherFlags.TestFlag( POtherFlagsCommon::LASTSTAND ))", (const char *)&queryFormat, "playerState->pm_type == PM_NORMAL || playerState->pm_type == PM_NORMAL_LINKED || playerState->otherFlags.TestFlag( POtherFlagsCommon::LASTSTAND )") )
      __debugbreak();
LABEL_26:
    p_otherFlags = &agent->playerState.otherFlags;
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&agent->playerState.otherFlags, ACTIVE, 0x21u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1208, ASSERT_TYPE_ASSERT, "(!playerState->otherFlags.TestFlagStrict( POtherFlagsMP::SPECTATE ))", (const char *)&queryFormat, "!playerState->otherFlags.TestFlagStrict( POtherFlagsMP::SPECTATE )") )
      __debugbreak();
    goto LABEL_32;
  }
  v17 = self->handler;
  if ( v17 != 28 )
  {
    Com_Printf(18, "G_CombatMP_AgentDie: Agent(%d) pm_type is PM_DEAD/PM_DEAD_LINKED and handler is incorrect: (%d)!\n", (unsigned int)self->s.number, v17);
    if ( self->handler != 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1196, ASSERT_TYPE_ASSERT, "(self->handler == ENT_HANDLER_AGENT_DEAD)", (const char *)&queryFormat, "self->handler == ENT_HANDLER_AGENT_DEAD") )
      __debugbreak();
  }
  if ( self->handler != 28 )
    goto LABEL_26;
}

/*
==============
G_CombatMP_Damage
==============
*/
damageReturnCode_t G_CombatMP_Damage(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  return G_CombatMP_Damage_Internal(targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset, surfaceNormal, extraParams);
}

/*
==============
G_CombatMP_DamageAgent
==============
*/
void G_CombatMP_DamageAgent(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, int timeOffset, unsigned int modelIndex, scr_string_t partName)
{
  __int16 v14; 
  const gentity_s *v16; 
  int v18; 
  gagent_s *agent; 
  __m256i v20; 
  __int128 v21; 
  double v22; 
  bool v23; 
  gentity_s *v24; 
  int v25; 
  float v26; 
  ai_scripted_t *AIScriptedData; 
  weapType_t WeaponType; 
  bool v29; 
  bool v30; 
  __int64 unitType; 
  unsigned __int16 weaponIdx; 
  __int64 meansOfDeath; 
  Weapon *v34; 
  unsigned int NumWeapons; 
  bool v36; 
  const gentity_s *v37; 
  vec3_t *vDir; 
  vec3_t *vPoint; 
  gentity_s *attackera; 
  Weapon weapon; 

  v16 = inflictor;
  vPoint = (vec3_t *)point;
  vDir = (vec3_t *)dir;
  attackera = attacker;
  v37 = inflictor;
  if ( SV_UserMoveWorkersMP_IsInWorkerContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1516, ASSERT_TYPE_ASSERT, "( !SV_UserMoveWorkersMP_IsInWorkerContext() )", (const char *)&queryFormat, "!SV_UserMoveWorkersMP_IsInWorkerContext()") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targ->agent->playerState.eFlags, ACTIVE, 0x10u) )
  {
    v18 = damage;
    if ( damage > 0 && hitLoc != HITLOC_SHIELD )
    {
      agent = targ->agent;
      if ( agent->playerState.pm_type != 7 && (agent->flags & 0x40) == 0 )
      {
        v20 = *(__m256i *)&r_weapon->weaponIdx;
        v21 = *(_OWORD *)&r_weapon->attachmentVariationIndices[5];
        v22 = *(double *)&r_weapon->attachmentVariationIndices[21];
        *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&r_weapon->weaponCamo;
        v23 = isAlternate;
        v36 = isAlternate;
        *(__m256i *)&weapon.weaponIdx = v20;
        *(_OWORD *)&weapon.attachmentVariationIndices[5] = v21;
        *(double *)&weapon.attachmentVariationIndices[21] = v22;
        if ( v14 )
          goto LABEL_15;
        if ( v16 )
        {
          v24 = (gentity_s *)v16;
        }
        else
        {
          if ( !attacker )
            goto LABEL_15;
          v24 = attacker;
        }
        G_CombatMP_GetWeaponForEntity(v24, &weapon, &v36);
        v23 = v36;
LABEL_15:
        if ( weapon.weaponIdx >= BG_GetNumWeapons() )
        {
          NumWeapons = BG_GetNumWeapons();
          LODWORD(meansOfDeath) = weapon.weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1559, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( BG_GetNumWeapons() )", "weapon.weaponIdx doesn't index BG_GetNumWeapons()\n\t%i not in [0, %i)", meansOfDeath, NumWeapons) )
            __debugbreak();
        }
        if ( (unsigned int)hitLoc > HITLOC_SOFT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1562, ASSERT_TYPE_ASSERT, "((hitLoc >= HITLOC_NONE) && (hitLoc < HITLOC_NUM))", (const char *)&queryFormat, "(hitLoc >= HITLOC_NONE) && (hitLoc < HITLOC_NUM)") )
          __debugbreak();
        v25 = dflags;
        if ( (dflags & 1) != 0 )
          GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&targ->agent->playerState.weapCommon.weapFlags, ACTIVE, 0x10u);
        if ( mod != 8 )
        {
          if ( !targ->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1573, ASSERT_TYPE_ASSERT, "(targ->sentient)", (const char *)&queryFormat, "targ->sentient") )
            __debugbreak();
          if ( !targ->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1482, ASSERT_TYPE_ASSERT, "(targ->agent)", (const char *)&queryFormat, "targ->agent") )
            __debugbreak();
          if ( SV_IsAgentScripted(targ) )
          {
            AIScriptedData = Agent_GetAIScriptedData(targ);
            if ( AIScriptedData )
            {
              WeaponType = BG_GetWeaponType(&weapon, isAlternate);
              v29 = BG_GetWeaponType(&weapon, isAlternate) == WEAPTYPE_GRENADE;
              v30 = BG_GetWeaponType(&weapon, isAlternate) == WEAPTYPE_PROJECTILE;
              if ( WeaponType == WEAPTYPE_BULLET || v29 || v30 )
              {
                unitType = AIScriptedData->unitType;
                if ( (unsigned int)unitType >= 7 )
                {
                  LODWORD(v34) = 7;
                  LODWORD(meansOfDeath) = AIScriptedData->unitType;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1500, ASSERT_TYPE_ASSERT, "(unsigned)( unittype ) < (unsigned)( MAX_AI_UNITTYPES )", "unittype doesn't index MAX_AI_UNITTYPES\n\t%i not in [0, %i)", meansOfDeath, v34) )
                    __debugbreak();
                }
                weaponIdx = weapon.weaponIdx;
                if ( weapon.weaponIdx > bg_lastParsedWeaponIndex )
                {
                  LODWORD(v34) = bg_lastParsedWeaponIndex;
                  LODWORD(meansOfDeath) = weapon.weaponIdx;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", meansOfDeath, v34) )
                    __debugbreak();
                }
                if ( !bg_weaponDefs[weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
                  __debugbreak();
                v26 = bg_weaponDefs[weaponIdx]->unittypeMultipliers[unitType];
              }
              else
              {
                v26 = FLOAT_1_0;
              }
              v25 = dflags;
            }
            else
            {
              v26 = FLOAT_1_0;
            }
            v16 = v37;
          }
          else
          {
            v26 = FLOAT_1_0;
          }
          v18 = (int)(float)(G_CombatMP_GetWeaponHitLocationMultiplier(hitLoc, &weapon, v23, targ->sentient->locDamageTableIndex) * (float)((float)damage * v26));
        }
        if ( v18 <= 0 )
          v18 = 1;
        Scr_AgentDamage(targ, v16, attackera, v18, v25, mod, &weapon, v23, vPoint, vDir, hitLoc, timeOffset, modelIndex, partName);
      }
    }
  }
}

/*
==============
G_CombatMP_DamageClient
==============
*/
void G_CombatMP_DamageClient(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, int timeOffset, int modelIndex, scr_string_t partName, const GExtraDamageParams *extraParams)
{
  __int16 v15; 
  int v19; 
  gclient_s *client; 
  bool v21; 
  const gentity_s *v22; 
  __int64 meansOfDeath; 
  unsigned int NumWeapons; 
  bool v25; 
  GExtraDamageParams *v26; 
  vec3_t *vDir; 
  vec3_t *vPoint; 
  gentity_s *attackera; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  Weapon weapon; 

  v30 = -2i64;
  vDir = (vec3_t *)dir;
  attackera = attacker;
  vPoint = (vec3_t *)point;
  v26 = (GExtraDamageParams *)extraParams;
  if ( SV_UserMoveWorkersMP_IsInWorkerContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1414, ASSERT_TYPE_ASSERT, "( !SV_UserMoveWorkersMP_IsInWorkerContext() )", (const char *)&queryFormat, "!SV_UserMoveWorkersMP_IsInWorkerContext()") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targ->client->ps.eFlags, ACTIVE, 0x10u) )
  {
    v19 = damage;
    if ( damage > 0 && hitLoc != HITLOC_SHIELD && !G_Vehicle_IsPlayerProtected(targ) )
    {
      client = targ->client;
      if ( (client->flags & 3) == 0 && !client->mpviewer && client->sess.connected == CON_CONNECTED && client->ps.pm_type != 7 )
      {
        v31 = 40;
        v32 = 0i64;
        SV_Profile_BeginEvent(SVPROF_CLIENT_DAMAGED);
        weapon = *r_weapon;
        v21 = isAlternate;
        v25 = isAlternate;
        if ( v15 )
          goto LABEL_18;
        if ( inflictor )
        {
          v22 = inflictor;
        }
        else
        {
          if ( !attacker )
            goto LABEL_18;
          v22 = attacker;
        }
        G_CombatMP_GetWeaponForEntity(v22, &weapon, &v25);
        v21 = v25;
LABEL_18:
        if ( weapon.weaponIdx >= BG_GetNumWeapons() )
        {
          NumWeapons = BG_GetNumWeapons();
          LODWORD(meansOfDeath) = weapon.weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1457, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( BG_GetNumWeapons() )", "weapon.weaponIdx doesn't index BG_GetNumWeapons()\n\t%i not in [0, %i)", meansOfDeath, NumWeapons) )
            __debugbreak();
        }
        if ( (unsigned int)hitLoc > HITLOC_SOFT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1460, ASSERT_TYPE_ASSERT, "((hitLoc >= HITLOC_NONE) && (hitLoc < HITLOC_NUM))", (const char *)&queryFormat, "(hitLoc >= HITLOC_NONE) && (hitLoc < HITLOC_NUM)") )
          __debugbreak();
        if ( mod != 8 )
        {
          if ( !targ->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1465, ASSERT_TYPE_ASSERT, "(targ->sentient)", (const char *)&queryFormat, "targ->sentient") )
            __debugbreak();
          v19 = (int)(float)(G_CombatMP_GetWeaponHitLocationMultiplier(hitLoc, &weapon, v21, targ->sentient->locDamageTableIndex) * (float)damage);
        }
        if ( v19 <= 0 )
          v19 = 1;
        if ( (dflags & 1) != 0 )
          GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&targ->client->ps.weapCommon.weapFlags, ACTIVE, 0x10u);
        Scr_PlayerDamage(targ, inflictor, attackera, v19, dflags, mod, &weapon, v21, vPoint, vDir, hitLoc, timeOffset, modelIndex, partName, v26, damage);
        SV_Profile_EndEvent(SVPROF_CLIENT_DAMAGED);
      }
    }
  }
}

/*
==============
G_CombatMP_DamageKnockback
==============
*/
void G_CombatMP_DamageKnockback(const gentity_s *pSelf, const int damage, const vec3_t *direction, playerState_s *ps)
{
  int v11; 
  const dvar_t *v12; 
  float v13; 
  float v14; 
  float v15; 
  int v16; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 461, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 462, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
  {
    *(float *)&_XMM1 = FLOAT_0_02;
  }
  else
  {
    _XMM0 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 1u);
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_0_15000001);
    __asm { vblendvps xmm1, xmm1, xmm6, xmm2 }
  }
  v11 = (int)(float)((float)damage * *(float *)&_XMM1);
  if ( v11 <= 60 )
  {
    if ( !v11 )
      return;
  }
  else
  {
    v11 = 60;
  }
  if ( !BG_IsTurretActive(ps) )
  {
    v12 = DVARFLT_g_knockback;
    if ( !DVARFLT_g_knockback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_knockback") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = direction->v[1];
    v14 = direction->v[2];
    v15 = (float)((float)v11 * v12->current.value) * 0.0040000002;
    ps->velocity.v[0] = (float)(v15 * direction->v[0]) + ps->velocity.v[0];
    ps->velocity.v[1] = (float)(v15 * v13) + ps->velocity.v[1];
    ps->velocity.v[2] = (float)(v15 * v14) + ps->velocity.v[2];
    if ( !ps->pm_time )
    {
      v16 = 2 * v11;
      if ( 2 * v11 >= 50 )
      {
        if ( v16 > 200 )
          v16 = 200;
      }
      else
      {
        v16 = 50;
      }
      ps->pm_time = v16;
      ps->pm_flags.m_flags[0] |= 0x2000u;
    }
  }
}

/*
==============
G_CombatMP_Damage_Internal
==============
*/
__int64 G_CombatMP_Damage_Internal(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  __int16 v16; 
  __int128 v17; 
  int v19; 
  GCombat *v23; 
  __m256i v25; 
  __int128 v26; 
  double v27; 
  bool v28; 
  bool IndexForEntity; 
  vec3_t *v30; 
  bool v31; 
  __int16 EntityIndex; 
  __int16 v33; 
  float v34; 
  __int128 v35; 
  __int128 v36; 
  float v37; 
  float v41; 
  float v42; 
  unsigned int v43; 
  int v44; 
  unsigned int v45; 
  const char *v46; 
  const char *WeaponBaseName; 
  scr_string_t script_classname; 
  const char *v49; 
  const char *v50; 
  int health; 
  const char *v52; 
  vec3_t *v53; 
  vec3_t *v54; 
  int v55; 
  __int16 v56; 
  void (__fastcall *pain)(gentity_s *, gentity_s *, int, const vec3_t *, const int, const vec3_t *, const hitLocation_t, const Weapon *, bool); 
  char *fmt; 
  vec3_t *v59; 
  unsigned int NumWeapons; 
  int dflags; 
  __int64 v62; 
  scr_string_t v63; 
  bool v64; 
  vec3_t *hitPos; 
  GExtraDamageParams *v66; 
  unsigned int scriptableIndex; 
  int v68; 
  vec3_t *dira; 
  const char *v70; 
  const char *v71; 
  vec3_t *v72; 
  const char *v73; 
  float v74; 
  float v75; 
  float v76; 
  Weapon weapon; 
  __int128 v78; 

  v19 = mod;
  hitPos = (vec3_t *)point;
  v72 = (vec3_t *)surfaceNormal;
  v66 = (GExtraDamageParams *)extraParams;
  dira = (vec3_t *)dir;
  v68 = mod;
  if ( SV_UserMoveWorkersMP_IsInWorkerContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1614, ASSERT_TYPE_ASSERT, "( !SV_UserMoveWorkersMP_IsInWorkerContext() )", (const char *)&queryFormat, "!SV_UserMoveWorkersMP_IsInWorkerContext()") )
    __debugbreak();
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  v23 = GCombat::ms_gCombatSystem;
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1617, ASSERT_TYPE_ASSERT, "(combatSystem)", (const char *)&queryFormat, "combatSystem") )
    __debugbreak();
  if ( GCombat::QueuedDamageEnabled(v23) )
  {
    GCombat::QueueDamageInstance(v23, targ, inflictor, attacker, dir, hitPos, damage, dFlags, mod, r_weapon, isAlternate, hitLoc, timeOffset, modelIndex, partName, v72, v66);
    return 1i64;
  }
  else
  {
    if ( targ->client )
    {
      G_CombatMP_DamageClient(targ, inflictor, attacker, dir, hitPos, damage, dFlags, mod, r_weapon, isAlternate, hitLoc, timeOffset, modelIndex, partName, v66);
    }
    else if ( targ->agent )
    {
      G_CombatMP_DamageAgent(targ, inflictor, attacker, dir, hitPos, damage, dFlags, mod, r_weapon, isAlternate, hitLoc, timeOffset, modelIndex, partName);
    }
    else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targ->s.lerp.eFlags, ACTIVE, 0x10u) && hitLoc != HITLOC_SHIELD )
    {
      if ( !inflictor )
        inflictor = g_entities + 2046;
      if ( !attacker )
        attacker = g_entities + 2046;
      v25 = *(__m256i *)&r_weapon->weaponIdx;
      v26 = *(_OWORD *)&r_weapon->attachmentVariationIndices[5];
      v27 = *(double *)&r_weapon->attachmentVariationIndices[21];
      v28 = isAlternate;
      *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&r_weapon->weaponCamo;
      v64 = isAlternate;
      *(__m256i *)&weapon.weaponIdx = v25;
      *(_OWORD *)&weapon.attachmentVariationIndices[5] = v26;
      *(double *)&weapon.attachmentVariationIndices[21] = v27;
      if ( !v16 )
      {
        G_CombatMP_GetWeaponForEntity(inflictor, &weapon, &v64);
        v28 = v64;
      }
      if ( weapon.weaponIdx >= BG_GetNumWeapons() )
      {
        NumWeapons = BG_GetNumWeapons();
        LODWORD(v59) = weapon.weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1665, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( BG_GetNumWeapons() )", "weapon.weaponIdx doesn't index BG_GetNumWeapons()\n\t%i not in [0, %i)", v59, NumWeapons) )
          __debugbreak();
      }
      if ( (targ->flags.m_flags[0] & 1) == 0 && (!EntHandle::isDefined(&targ->r.ownerNum) || (EntHandle::ent(&targ->r.ownerNum)->flags.m_flags[0] & 1) == 0) )
      {
        IndexForEntity = ScriptableSv_TryGetIndexForEntity(targ, &scriptableIndex);
        v30 = hitPos;
        if ( IndexForEntity )
          ScriptableSv_Damage(inflictor, attacker, scriptableIndex, hitPos, dir, mod, &weapon, v28, partName, damage, dFlags, modelIndex);
        if ( targ->vehicle || G_Vehicle_IsSuspended(targ) )
        {
          G_Vehicle_Damage(targ, inflictor, attacker, dir, v30, damage, dFlags, mod, &weapon, v28, hitLoc, modelIndex, partName, timeOffset);
        }
        else
        {
          v31 = targ->s.eType == ET_COVERWALL;
          LODWORD(v66) = 0;
          if ( v31 )
            G_CoverWall_Damage(targ, inflictor, attacker, dir, v30, damage, dFlags, mod, &weapon, v28, 0);
          EntityIndex = G_GetEntityIndex(targ);
          if ( !G_IsEntityInUse(EntityIndex) )
          {
            LODWORD(v59) = targ->s.number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1697, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( G_GetEntityIndex( targ ) ) ) )", "( targ->s.number ) = %i", v59) )
              __debugbreak();
          }
          v33 = G_GetEntityIndex(attacker);
          if ( !G_IsEntityInUse(v33) )
          {
            LODWORD(v59) = attacker->s.number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1698, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( G_GetEntityIndex( attacker ) ) ) )", "( attacker->s.number ) = %i", v59) )
              __debugbreak();
          }
          if ( dir )
          {
            v34 = dir->v[1];
            v35 = LODWORD(dir->v[0]);
            v36 = v35;
            v78 = v17;
            v37 = dir->v[2];
            *(float *)&v36 = fsqrt((float)((float)(*(float *)&v35 * *(float *)&v35) + (float)(v34 * v34)) + (float)(v37 * v37));
            _XMM3 = v36;
            __asm
            {
              vcmpless xmm0, xmm3, cs:__real@80000000
              vblendvps xmm0, xmm3, xmm1, xmm0
            }
            v74 = *(float *)&v35 * (float)(1.0 / *(float *)&_XMM0);
            v41 = v34 * (float)(1.0 / *(float *)&_XMM0);
            v42 = v37 * (float)(1.0 / *(float *)&_XMM0);
            v75 = v41;
          }
          else
          {
            v42 = 0.0;
            v74 = 0.0;
            v75 = 0.0;
          }
          v43 = targ->flags.m_flags[0];
          v44 = 1;
          v76 = v42;
          if ( damage >= 1 )
            v44 = damage;
          v45 = v44;
          if ( (v43 & 2) != 0 && targ->health - v44 <= 0 )
            v45 = targ->health - 1;
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_g_debugDamage, "g_debugDamage") )
          {
            v46 = (char *)&queryFormat.fmt + 3;
            if ( (targ->flags.m_flags[0] & 2) != 0 )
              v46 = "demigod";
            v73 = v46;
            if ( weapon.weaponIdx )
              WeaponBaseName = BG_GetWeaponBaseName(&weapon, v28);
            else
              WeaponBaseName = "none";
            v70 = WeaponBaseName;
            if ( attacker )
            {
              script_classname = attacker->script_classname;
              LODWORD(v66) = attacker->s.number;
              v49 = SL_ConvertToString(script_classname);
            }
            else
            {
              v49 = "null";
            }
            v71 = v49;
            v50 = SL_ConvertToString(*g_combat_modNames[mod]);
            health = targ->health;
            v52 = SL_ConvertToString(targ->script_classname);
            LODWORD(v62) = (_DWORD)v66;
            LODWORD(v59) = v45;
            LODWORD(fmt) = health;
            Com_Printf(15, "$e%d(%s) take damage: orig_hp(%d) dam(%d)type(%s) attacker(%s$e%d) weapon(%s) %s\n", (unsigned int)targ->s.number, v52, fmt, v59, v50, v71, v62, v70, v73);
            v19 = v68;
          }
          v53 = v72;
          targ->health -= v45;
          v54 = hitPos;
          G_Combat_DamageNotify(scr_const.damage, targ, attacker, inflictor, dira, hitPos, v45, v19, dFlags, modelIndex, partName, &weapon, v28, v53);
          v55 = targ->health;
          if ( v55 > 0 )
          {
            pain = G_Main_GetEntHandlerList(targ)->pain;
            if ( pain )
            {
              LOBYTE(v63) = v28;
              pain(targ, attacker, v45, v54, v19, (const vec3_t *)&v74, hitLoc, &weapon, v63);
            }
          }
          else
          {
            if ( v55 < -999 )
              targ->health = -999;
            GScr_AddEntity(attacker);
            GScr_Notify(targ, scr_const.death, 1u);
            GScr_Notify(targ, scr_const.death_or_disconnect, 0);
            dira = (vec3_t *)G_Main_GetEntHandlerList(targ);
            if ( *(_QWORD *)dira[4].v )
            {
              if ( timeOffset < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1751, ASSERT_TYPE_ASSERT, "(timeOffset >= 0)", (const char *)&queryFormat, "timeOffset >= 0") )
                __debugbreak();
              LOBYTE(dflags) = v28;
              (*(void (__fastcall **)(gentity_s *, const gentity_s *, gentity_s *, _QWORD, int, int, Weapon *, int, float *, hitLocation_t, int))dira[4].v)(targ, inflictor, attacker, v45, dFlags, v19, &weapon, dflags, &v74, hitLoc, timeOffset);
            }
            v56 = G_GetEntityIndex(targ);
            G_IsEntityInUse(v56);
          }
        }
      }
    }
    return 0i64;
  }
}

/*
==============
G_CombatMP_DeathAnimForScript
==============
*/
int G_CombatMP_DeathAnimForScript(gentity_s *self, const gentity_s *inflictor, int meansOfDeath, const Weapon *weapon, hitLocation_t hitLoc, const vec3_t *direction)
{
  unsigned int *RandomSeed; 
  gclient_s *client; 
  unsigned int *v12; 
  GHandler *Handler; 
  int v14; 
  gclient_s *v15; 
  int v16; 
  GPlayer_Asm *v17; 
  PmoveASMArgs pmoveArgs; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 976, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 977, ASSERT_TYPE_ASSERT, "( self->client )", (const char *)&queryFormat, "self->client") )
    __debugbreak();
  G_CombatMP_SetAnimDamageTypeCondition(self->client->ps.clientNum, self, inflictor, meansOfDeath, weapon, 0);
  G_CombatMP_SetAnimHitLocationCondition(self->client->ps.clientNum, self, hitLoc);
  G_CombatMP_SetAnimHitDirectionCondition(self->client->ps.clientNum, self, direction, &self->client->ps, meansOfDeath);
  G_CombatMP_SetAnimMoveDirectionCondition(self->client->ps.clientNum, self, &self->client->ps);
  if ( meansOfDeath == 8 )
  {
    G_CombatMP_SetMeleeReactionConditions(self->client->ps.clientNum, inflictor);
  }
  else if ( meansOfDeath == 21 )
  {
    return G_Execution_GetExecutionAnimDurationRemaining(self, level.time);
  }
  RandomSeed = G_GetRandomSeed();
  client = self->client;
  v12 = RandomSeed;
  Handler = GHandler::getHandler();
  v14 = BG_AnimScriptEvent(Handler, &client->ps, ANIM_ET_DEATH, 0, 1, v12);
  v15 = self->client;
  v16 = v14;
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\g_player_asm.h", 71, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() && (memset(&pmoveArgs, 0, 24), *(_QWORD *)&pmoveArgs.delta = 0i64, pmoveArgs.handler = GHandler::getHandler(), pmoveArgs.holdrand = G_GetRandomSeed(), v17 = GPlayer_Asm::Singleton(), BgPlayer_Asm::TickPS(v17, &v15->ps, &pmoveArgs, 0, 1)) )
    return BG_PlayerASM_GetAnimLength(&v15->ps, MOVEMENT);
  else
    return v16;
}

/*
==============
G_CombatMP_FinalizePlayerDeath
==============
*/
void G_CombatMP_FinalizePlayerDeath(gentity_s *self, const gentity_s *inflictor, gentity_s *attacker, const int damage, const int damageFlags, const int mod, const Weapon *r_weapon, bool isAlternate, const vec3_t *vDir, const vec3_t *point, const hitLocation_t hitLoc, int timeOffset, int modelIndex, scr_string_t partName)
{
  scrContext_t *v16; 
  GBullet *BulletSystem; 
  const GEntityHandlerList *EntHandlerList; 
  const gentity_s *HitCorpseEntity; 
  hitLocation_t hitLocation; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 193, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( BG_IsImpalingBullet(r_weapon, isAlternate) && (damageFlags & 1) == 0 )
  {
    if ( !partName )
    {
      v16 = ScriptContext_Server();
      Scr_Error(COM_ERR_3429, v16, "FinishPlayerDamage(): invalid partName provided.  Impaling weapons require valid partName and hitLoc upon kill.");
    }
    BulletSystem = GBullet::GetBulletSystem();
    if ( !BulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 206, ASSERT_TYPE_ASSERT, "(bullet)", (const char *)&queryFormat, "bullet") )
      __debugbreak();
    if ( !point && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 207, ASSERT_TYPE_ASSERT, "(point)", (const char *)&queryFormat, "point") )
      __debugbreak();
    if ( !vDir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 208, ASSERT_TYPE_ASSERT, "(vDir)", (const char *)&queryFormat, "vDir") )
      __debugbreak();
    GBullet::RegisterImpaledEntity(BulletSystem, attacker, self, r_weapon, isAlternate, point, vDir, hitLoc, partName);
  }
  EntHandlerList = G_Main_GetEntHandlerList(self);
  if ( EntHandlerList->die )
  {
    if ( timeOffset < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 216, ASSERT_TYPE_ASSERT, "(timeOffset >= 0)", (const char *)&queryFormat, "timeOffset >= 0") )
      __debugbreak();
    LOBYTE(hitLocation) = isAlternate;
    EntHandlerList->die(self, inflictor, attacker, damage, damageFlags, mod, r_weapon, hitLocation, vDir, hitLoc, timeOffset);
  }
  HitCorpseEntity = G_CombatMP_GetHitCorpseEntity(self);
  G_CombatMP_SendPlayerHitEvent(HitCorpseEntity, self, inflictor, r_weapon, isAlternate, partName, point, vDir, (const meansOfDeath_t)mod, hitLoc, damageFlags, 1);
  G_Combat_SendMeleeCharacterImpactEvent(HitCorpseEntity, self, inflictor, r_weapon, isAlternate, point, (const meansOfDeath_t)mod);
  SV_ClientAntiCheatMP_LogPlayerKill(attacker, self, r_weapon, isAlternate, mod, hitLoc, timeOffset);
}

/*
==============
G_CombatMP_GetHitCorpseEntity
==============
*/
gentity_s *G_CombatMP_GetHitCorpseEntity(const gentity_s *entity)
{
  const playerState_s *EntityPlayerStateConst; 
  __int64 corpseIndex; 
  GameScriptDataMP *GameScriptDataMP; 
  __int64 v5; 
  __int64 v6; 
  unsigned __int16 v7; 
  __int64 v8; 
  __int64 v10; 
  __int64 v11; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 57, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(entity);
  if ( !EntityPlayerStateConst )
    return (gentity_s *)entity;
  corpseIndex = EntityPlayerStateConst->corpseIndex;
  if ( (_DWORD)corpseIndex == 15 )
    return (gentity_s *)entity;
  GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
  if ( (unsigned int)corpseIndex >= 8 )
  {
    LODWORD(v10) = corpseIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 68, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( gScrData->playerCorpseInfo ) ) + 0 ) )", "corpseIndex doesn't index ARRAY_COUNT( gScrData->playerCorpseInfo )\n\t%i not in [0, %i)", v10, 8) )
      __debugbreak();
  }
  if ( entity->client )
  {
    v5 = 14992i64;
    goto LABEL_13;
  }
  if ( !entity->agent )
    return (gentity_s *)entity;
  v5 = 133776i64;
LABEL_13:
  v6 = 14848 * corpseIndex;
  v7 = *(_WORD *)((char *)&GameScriptDataMP->levelscript + 14848 * corpseIndex + v5);
  if ( v7 >= 0x800u )
  {
    LODWORD(v11) = 2048;
    LODWORD(v10) = (__int16)v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 85, ASSERT_TYPE_ASSERT, "(unsigned)( corpseInfo->entnum ) < (unsigned)( ( 2048 ) )", "corpseInfo->entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v8 = *(__int16 *)((char *)&GameScriptDataMP->levelscript + v6 + v5);
  if ( (unsigned int)v8 >= 0x800 )
  {
    LODWORD(v11) = 2048;
    LODWORD(v10) = *(__int16 *)((char *)&GameScriptDataMP->levelscript + v6 + v5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 86, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( corpseInfo->entnum ) )", (const char *)&queryFormat, "G_IsEntityInUse( corpseInfo->entnum )") )
    __debugbreak();
  return &g_entities[*(__int16 *)((char *)&GameScriptDataMP->levelscript + v6 + v5)];
}

/*
==============
G_CombatMP_GetHitCorpseEntity_Hack
==============
*/
gentity_s *G_CombatMP_GetHitCorpseEntity_Hack(const gentity_s *entity)
{
  const gentity_s *v1; 
  const playerState_s *EntityPlayerStateConst; 
  GameScriptDataMP *GameScriptDataMP; 
  __int64 v4; 
  gentity_s *v5; 
  char *v6; 
  int v7; 
  __int16 *v8; 
  __int64 v9; 
  int v10; 
  __int16 v11; 
  int v12; 
  gentity_s *GEntity; 
  __int64 v15; 
  __int64 v16; 

  v1 = entity;
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 108, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(v1);
  if ( !EntityPlayerStateConst )
    return (gentity_s *)v1;
  GameScriptDataMP = GameScriptDataMP::GetGameScriptDataMP();
  if ( v1->client )
  {
    v4 = 184i64;
  }
  else
  {
    if ( !v1->agent )
      return (gentity_s *)v1;
    v4 = 118968i64;
  }
  v5 = NULL;
  v6 = (char *)GameScriptDataMP + v4;
  v7 = 0;
  if ( !(GameScriptDataMP *)((char *)GameScriptDataMP + v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 137, ASSERT_TYPE_ASSERT, "( corpseInfoArray ) != ( nullptr )", "%s != %s\n\t%p, %p", "corpseInfoArray", "nullptr", NULL, NULL) )
    __debugbreak();
  v8 = (__int16 *)(v6 + 14808);
  v9 = 8i64;
  do
  {
    if ( *v8 != -1 )
    {
      v10 = *((_DWORD *)v8 - 3700);
      if ( v10 > 0 && v7 < v10 )
      {
        v11 = truncate_cast<short,int>(*((_DWORD *)v8 - 3698));
        if ( v11 != 2047 )
        {
          v12 = v11;
          if ( G_IsEntityInUse(v11) )
          {
            if ( v12 == EntityPlayerStateConst->clientNum )
            {
              if ( *v8 < ComCharacterLimits::GetClientCorpseEntityIndexOffset() )
              {
                LODWORD(v16) = ComCharacterLimits::GetClientCorpseEntityIndexOffset();
                LODWORD(v15) = *v8;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 169, ASSERT_TYPE_ASSERT, "( corpseInfo->entnum >= ComCharacterLimits::GetClientCorpseEntityIndexOffset() )", "G_CombatMP_GetHitCorpseEntity_Hack: invalid corpseInfo->entnum (%i) is not >= maxCharacterCount (%i)", v15, v16) )
                  __debugbreak();
              }
              if ( *v8 >= (__int16)ComCharacterLimits::GetStaticEntitiesMaxCount() )
              {
                LODWORD(v16) = ComCharacterLimits::GetStaticEntitiesMaxCount();
                LODWORD(v15) = *v8;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 171, ASSERT_TYPE_ASSERT, "( corpseInfo->entnum < static_cast<entityNum_t>(ComCharacterLimits::GetStaticEntitiesMaxCount()) )", "G_CombatMP_GetHitCorpseEntity_Hack: invalid corpseInfo->entnum (%i) is not < staticEntitiesMaxCount(%i)", v15, v16) )
                  __debugbreak();
              }
              GEntity = G_GetGEntity(*v8);
              if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 173, ASSERT_TYPE_ASSERT, "( testCorpseEntity )", (const char *)&queryFormat, "testCorpseEntity") )
                __debugbreak();
              if ( GEntity->s.clientNum == EntityPlayerStateConst->clientNum )
              {
                v7 = *((_DWORD *)v8 - 3700);
                v5 = GEntity;
              }
            }
          }
        }
      }
    }
    v8 += 7424;
    --v9;
  }
  while ( v9 );
  v1 = entity;
  if ( !v5 )
    return (gentity_s *)v1;
  if ( v5->s.clientNum != EntityPlayerStateConst->clientNum )
  {
    LODWORD(v16) = EntityPlayerStateConst->clientNum;
    LODWORD(v15) = v5->s.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 185, ASSERT_TYPE_ASSERT, "( corpseEntity->s.clientNum ) == ( ps->clientNum )", "corpseEntity->s.clientNum == ps->clientNum\n\t%i, %i", v15, v16) )
      __debugbreak();
  }
  return v5;
}

/*
==============
G_CombatMP_GetRadiusDamageFromPos_Internal
==============
*/
float G_CombatMP_GetRadiusDamageFromPos_Internal(gentity_s *targ, const vec3_t *targetPos, gentity_s *inflictor, const vec3_t *centerPos, float coneAngleCos, const vec3_t *coneDirection, int contentMask, bool useBounds, const Bounds *bounds, bool detailTrace, unsigned __int8 *priorityMap)
{
  unsigned __int8 *v13; 
  int v14; 
  float v15; 
  float v16; 
  float v17; 
  playerState_s *EntityPlayerState; 
  const dvar_t *v19; 
  __int128 v20; 
  float v21; 
  __int128 v23; 
  const dvar_t *v24; 
  float v26; 
  __int128 v28; 
  float v30; 
  float v31; 
  const dvar_t *v32; 
  float v33; 
  __int128 v34; 
  float v35; 
  float v36; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  vec3_t *p_targetPosa; 
  __int64 v45; 
  const dvar_t *v46; 
  int v47; 
  float *v48; 
  float v49; 
  float v50; 
  __int128 v51; 
  float v52; 
  const dvar_t *v56; 
  const char *v57; 
  const dvar_t *v59; 
  const char *v60; 
  const dvar_t *v61; 
  const char *v62; 
  int v63; 
  __int128 v64; 
  double v65; 
  const DObj *ServerDObjForEnt; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  __int128 v75; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  __int128 v85; 
  __int128 v86; 
  __int128 v87; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float *v99; 
  __int64 v100; 
  vec3_t *v101; 
  float *v102; 
  float *i; 
  float v104; 
  float v105; 
  __int128 v106; 
  float v107; 
  int passEntityNum1; 
  Bounds box; 
  Bounds outOrigin; 
  tmat33_t<vec3_t> axis; 
  vec3_t targetPosa; 
  float v117; 
  float v118; 
  float v119; 
  float v120; 
  float v121; 
  float v122; 
  float v123; 
  float v124; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  float v132; 
  char v133; 

  v13 = priorityMap;
  if ( inflictor )
    passEntityNum1 = inflictor->s.number;
  else
    passEntityNum1 = 2047;
  v14 = 0;
  if ( detailTrace )
  {
    if ( !priorityMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1911, ASSERT_TYPE_ASSERT, "(priorityMap)", "%s\n\tGetRadiusDamageFromPos_Internal(): detail trace was requested but invalid priority map was provided.", "priorityMap") )
      __debugbreak();
  }
  else
  {
    v13 = NULL;
  }
  if ( G_Utils_IsClientOrAgent(targ) )
  {
    v15 = targ->r.currentOrigin.v[2];
    v16 = targ->r.currentOrigin.v[0];
    v17 = targ->r.currentOrigin.v[1];
    v132 = v15;
    EntityPlayerState = G_GetEntityPlayerState(targ);
    if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1931, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerState->otherFlags, ACTIVE, 0x1Bu) )
    {
      v19 = DCONST_DVARFLT_radius_damage_vehicle_player_top_offset;
      v20 = LODWORD(targ->r.box.halfSize.v[2]);
      v16 = v16 + targ->r.box.midPoint.v[0];
      v17 = v17 + targ->r.box.midPoint.v[1];
      v21 = v15 + targ->r.box.midPoint.v[2];
      if ( !DCONST_DVARFLT_radius_damage_vehicle_player_top_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_vehicle_player_top_offset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      v23 = v20;
      *(float *)&v23 = *(float *)&v20 - v19->current.value;
      _XMM0 = v23;
      v24 = DCONST_DVARFLT_radius_damage_vehicle_player_bottom_offset;
      __asm { vmaxss  xmm0, xmm0, xmm13 }
      v26 = v21 + *(float *)&_XMM0;
      if ( !DCONST_DVARFLT_radius_damage_vehicle_player_bottom_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_vehicle_player_bottom_offset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      v28 = v20;
      *(float *)&v28 = *(float *)&v20 - v24->current.value;
      _XMM0 = v28;
      __asm { vmaxss  xmm0, xmm0, xmm13 }
      v15 = v21 - *(float *)&_XMM0;
      v30 = v16;
      v132 = v15;
      outOrigin.midPoint.v[0] = v16;
      outOrigin.midPoint.v[1] = v17;
      outOrigin.midPoint.v[2] = v26;
      v31 = v17;
    }
    else if ( EntityPlayerState->vehicleState.entity == 2047 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerState->otherFlags, ACTIVE, 1u) )
    {
      G_Client_GetEyePosition(EntityPlayerState, &outOrigin.midPoint);
      v26 = outOrigin.midPoint.v[2];
      v31 = outOrigin.midPoint.v[1];
      v30 = outOrigin.midPoint.v[0];
    }
    else
    {
      v30 = EntityPlayerState->origin.v[0];
      outOrigin.midPoint.v[0] = v30;
      v31 = EntityPlayerState->origin.v[1];
      outOrigin.midPoint.v[1] = v31;
      v26 = EntityPlayerState->origin.v[2];
      outOrigin.midPoint.v[2] = v26;
    }
    v32 = DVARBOOL_radius_damage_debug;
    v34 = LODWORD(centerPos->v[1]);
    v33 = centerPos->v[1] - v17;
    v35 = (float)(v26 - v15) * 0.5;
    v36 = centerPos->v[0] - v16;
    *(float *)&v34 = fsqrt((float)(v33 * v33) + (float)(v36 * v36));
    _XMM3 = v34;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm15, xmm0
    }
    v40 = (float)(v30 + v16) * 0.5;
    *(float *)&_XMM3 = (float)(v26 + v132) * 0.5;
    v41 = (float)(v17 + v31) * 0.5;
    v42 = (float)((float)(1.0 / *(float *)&_XMM0) * v33) * -15.0;
    v43 = (float)((float)(1.0 / *(float *)&_XMM0) * v36) * 15.0;
    v118 = v43 + v41;
    v121 = v43 + v41;
    targetPosa.v[2] = *(float *)&_XMM3;
    v123 = v40 - v42;
    v126 = v40 - v42;
    targetPosa.v[0] = v40;
    targetPosa.v[1] = v41;
    v117 = v40 + v42;
    v119 = *(float *)&_XMM3 + v35;
    v120 = v40 + v42;
    v122 = *(float *)&_XMM3 - v35;
    v124 = v41 - v43;
    v125 = *(float *)&_XMM3 + v35;
    v127 = v41 - v43;
    v128 = *(float *)&_XMM3 - v35;
    v129 = v40;
    v130 = v41;
    v131 = *(float *)&_XMM3 + v35;
    if ( !DVARBOOL_radius_damage_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    if ( v32->current.enabled )
    {
      p_targetPosa = &targetPosa;
      v45 = 6i64;
      do
      {
        G_Debug_VisualizeRadiusDamageTraces(inflictor, targ, centerPos, p_targetPosa++, coneAngleCos, coneDirection, contentMask, v13);
        --v45;
      }
      while ( v45 );
      v14 = 0;
    }
    v46 = DVARBOOL_killswitch_agent_radius_damage_fix_enabled;
    if ( !DVARBOOL_killswitch_agent_radius_damage_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_agent_radius_damage_fix_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    if ( v46->current.enabled && SV_IsAgentScripted(targ) )
    {
      v122 = v122 + 0.125;
      v128 = v128 + 0.125;
    }
    v47 = 0;
    v48 = &targetPosa.v[2];
    do
    {
      if ( coneAngleCos == -1.0 )
        goto LABEL_110;
      if ( !coneDirection )
        goto LABEL_110;
      v49 = *(v48 - 2) - centerPos->v[0];
      v51 = *((unsigned int *)v48 - 1);
      v50 = *(v48 - 1) - centerPos->v[1];
      v52 = *v48 - centerPos->v[2];
      *(float *)&v51 = fsqrt((float)((float)(v50 * v50) + (float)(v49 * v49)) + (float)(v52 * v52));
      _XMM1 = v51;
      __asm
      {
        vcmpless xmm0, xmm1, xmm10
        vblendvps xmm0, xmm1, xmm15, xmm0
      }
      if ( (float)((float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * v50) * coneDirection->v[1]) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v49) * coneDirection->v[0])) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v52) * coneDirection->v[2])) >= coneAngleCos )
      {
LABEL_110:
        if ( G_Main_RadiusDamageTracePassed(centerPos, &targetPosa + v47, targ->s.number, passEntityNum1, contentMask, v13) )
        {
          if ( ++v14 >= 3 )
          {
            v59 = DVARBOOL_radius_damage_debug;
            if ( !DVARBOOL_radius_damage_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_debug") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v59);
            if ( v59->current.enabled )
            {
              v60 = j_va("DamageFromPos: hits >= 3 - full damage scale (1.0).");
              G_Main_AddDebugStringWithDuration(&targetPosa, &colorGreen, 0.2, v60, 300);
            }
            return FLOAT_1_0;
          }
        }
      }
      ++v47;
      v48 += 3;
    }
    while ( v47 < 6 );
    if ( v14 )
    {
      v61 = DVARBOOL_radius_damage_debug;
      if ( !DVARBOOL_radius_damage_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v61);
      if ( v61->current.enabled )
      {
        v62 = j_va("DamageFromPos: hits (%d) - damage scale (%f).", (unsigned int)v14, (float)((float)v14 * 0.33333334));
        G_Main_AddDebugStringWithDuration(&targetPosa, &colorGreen, 0.2, v62, 300);
      }
      return (float)v14 * 0.33333334;
    }
    v56 = DVARBOOL_radius_damage_debug;
    if ( !DVARBOOL_radius_damage_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v56);
    if ( v56->current.enabled )
    {
      v57 = j_va("DamageFromPos: hits == 0 - no damage scale (0.0).");
      G_Main_AddDebugStringWithDuration(&targetPosa, &colorGreen, 0.2, v57, 300);
      return 0.0;
    }
    return 0.0;
  }
  v63 = _xmm;
  if ( useBounds )
  {
    v64 = *(_OWORD *)bounds->midPoint.v;
    v65 = *(double *)&bounds->halfSize.y;
LABEL_69:
    *(double *)&box.halfSize.y = v65;
    *(_OWORD *)box.midPoint.v = v64;
    goto LABEL_70;
  }
  if ( targ->classname != scr_const.script_model || !targ->model )
  {
    v64 = *(_OWORD *)targ->r.absBox.midPoint.v;
    v65 = *(double *)&targ->r.absBox.halfSize.y;
    goto LABEL_69;
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(targ);
  DObjPhysicsGetBounds(ServerDObjForEnt, &outOrigin);
  AnglesToAxis(&targ->r.currentAngles, &axis);
  box.midPoint.v[0] = (float)((float)((float)(outOrigin.midPoint.v[0] * axis.m[0].v[0]) + (float)(outOrigin.midPoint.v[1] * axis.m[1].v[0])) + (float)(outOrigin.midPoint.v[2] * axis.m[2].v[0])) + targ->r.currentOrigin.v[0];
  box.midPoint.v[1] = (float)((float)((float)(outOrigin.midPoint.v[0] * axis.m[0].v[1]) + (float)(outOrigin.midPoint.v[1] * axis.m[1].v[1])) + (float)(outOrigin.midPoint.v[2] * axis.m[2].v[1])) + targ->r.currentOrigin.v[1];
  v63 = _xmm;
  box.midPoint.v[2] = (float)((float)((float)(outOrigin.midPoint.v[0] * axis.m[0].v[2]) + (float)(outOrigin.midPoint.v[1] * axis.m[1].v[2])) + (float)(outOrigin.midPoint.v[2] * axis.m[2].v[2])) + targ->r.currentOrigin.v[2];
  box.halfSize.v[0] = (float)((float)(COERCE_FLOAT(LODWORD(axis.m[1].v[0]) & _xmm) * outOrigin.halfSize.v[1]) + (float)(COERCE_FLOAT(LODWORD(axis.m[0].v[0]) & _xmm) * outOrigin.halfSize.v[0])) + (float)(COERCE_FLOAT(LODWORD(axis.m[2].v[0]) & _xmm) * outOrigin.halfSize.v[2]);
  box.halfSize.v[1] = (float)((float)(COERCE_FLOAT(LODWORD(axis.m[1].v[1]) & _xmm) * outOrigin.halfSize.v[1]) + (float)(COERCE_FLOAT(LODWORD(axis.m[0].v[1]) & _xmm) * outOrigin.halfSize.v[0])) + (float)(COERCE_FLOAT(LODWORD(axis.m[2].v[1]) & _xmm) * outOrigin.halfSize.v[2]);
  box.halfSize.v[2] = (float)((float)(COERCE_FLOAT(LODWORD(axis.m[1].v[2]) & _xmm) * outOrigin.halfSize.v[1]) + (float)(COERCE_FLOAT(LODWORD(axis.m[0].v[2]) & _xmm) * outOrigin.halfSize.v[0])) + (float)(COERCE_FLOAT(LODWORD(axis.m[2].v[2]) & _xmm) * outOrigin.halfSize.v[2]);
LABEL_70:
  if ( targ->classname != scr_const.trigger_damage || COERCE_FLOAT(COERCE_UNSIGNED_INT(centerPos->v[0] - box.midPoint.v[0]) & v63) >= box.halfSize.v[0] || COERCE_FLOAT(COERCE_UNSIGNED_INT(centerPos->v[1] - box.midPoint.v[1]) & v63) >= box.halfSize.v[1] || COERCE_FLOAT(COERCE_UNSIGNED_INT(centerPos->v[2] - box.midPoint.v[2]) & v63) >= box.halfSize.v[2] )
  {
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_radius_damage_debug, "radius_damage_debug") )
      G_DebugBox(&vec3_origin, &box, 0.0, &colorMdGrey, 0, 300);
    v67 = centerPos->v[0] - box.midPoint.v[0];
    v68 = centerPos->v[2];
    targetPosa.v[0] = box.midPoint.v[0];
    v69 = centerPos->v[1] - box.midPoint.v[1];
    targetPosa.v[1] = box.midPoint.v[1];
    v70 = v68 - box.midPoint.v[2];
    targetPosa.v[2] = box.midPoint.v[2];
    v71 = fsqrt((float)((float)(v69 * v69) + (float)(v67 * v67)) + (float)(v70 * v70));
    if ( v71 != 0.0 )
    {
      v75 = LODWORD(FLOAT_1_0);
      v72 = (float)(1.0 / v71) * v69;
      v73 = v70 * (float)(1.0 / v71);
      v74 = (float)(1.0 / v71) * v67;
      *(float *)&v75 = (float)((float)(v72 * v72) + (float)(v74 * v74)) + (float)(v73 * v73);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v75 - 1.0) & v63) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 2119, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( forward ) )", "(%g, %g, %g) len %g", v74, v72, v73, fsqrt(*(float *)&v75)) )
        __debugbreak();
      *(float *)&v75 = fsqrt(*(float *)&v75);
      _XMM1 = v75;
      __asm
      {
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm15, xmm0
      }
      v79 = v72 * (float)(1.0 / *(float *)&_XMM0);
      v80 = v73 * (float)(1.0 / *(float *)&_XMM0);
      v81 = (float)(1.0 / *(float *)&_XMM0) * v74;
      LODWORD(v82) = LODWORD(v79) ^ _xmm;
      v83 = fsqrt((float)(v81 * v81) + (float)(v82 * v82));
      v84 = v81;
      if ( v83 == 0.0 )
      {
        v85 = LODWORD(FLOAT_1_0);
      }
      else
      {
        v86 = LODWORD(FLOAT_1_0);
        v84 = (float)(1.0 / v83) * v81;
        *(float *)&v86 = (float)(1.0 / v83) * v82;
        v85 = v86;
      }
      v87 = v85;
      *(float *)&v87 = (float)(*(float *)&v85 * *(float *)&v85) + (float)(v84 * v84);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v87 - 1.0) & v63) >= 0.0020000001 )
      {
        *(float *)&v87 = fsqrt(*(float *)&v87);
        _XMM0 = v87;
        __asm { vxorpd  xmm0, xmm0, xmm0 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 2135, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( right ) )", "(%g, %g, %g) len %g", *(float *)&v85, v84, *(double *)&_XMM0, *(float *)&v87) )
          __debugbreak();
      }
      LODWORD(v90) = COERCE_UNSIGNED_INT(v84 * v80) ^ _xmm;
      v91 = (float)(v84 * v81) - (float)(v79 * *(float *)&v85);
      v92 = v80 * *(float *)&v85;
      v93 = (float)((float)(v90 * v90) + (float)(v92 * v92)) + (float)(v91 * v91);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v93 - 1.0) & v63) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 2138, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( up ) )", "(%g, %g, %g) len %g", v90, v92, v91, fsqrt(v93)) )
        __debugbreak();
      v94 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v85 * box.halfSize.v[0]) & v63) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v84 * box.halfSize.v[1]) & v63);
      v95 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v90 * box.halfSize.v[0]) & v63) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v92 * box.halfSize.v[1]) & v63)) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v91 * box.halfSize.v[2]) & v63);
      v132 = 2.3694278e-38;
      v133 = 1;
      if ( v94 < 32.0 )
      {
        v94 = 0.0;
        BYTE1(v132) = 0;
        HIBYTE(v132) = 0;
      }
      if ( (float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v90 * box.halfSize.v[0]) & v63) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v92 * box.halfSize.v[1]) & v63)) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v91 * box.halfSize.v[2]) & v63)) < 32.0 )
      {
        v95 = 0.0;
        *(_WORD *)((char *)&v132 + 1) = 0;
        if ( v94 == 0.0 )
          v133 = 0;
      }
      v96 = v91 * v95;
      v97 = (float)(v94 * *(float *)&v85) + targetPosa.v[0];
      v98 = targetPosa.v[0] - (float)(v94 * *(float *)&v85);
      v117 = (float)(v90 * v95) + v97;
      v118 = (float)(v92 * v95) + (float)((float)(v84 * v94) + targetPosa.v[1]);
      v120 = (float)(v90 * v95) + v98;
      v119 = v96 + targetPosa.v[2];
      v122 = v96 + targetPosa.v[2];
      v121 = (float)(v92 * v95) + (float)(targetPosa.v[1] - (float)(v84 * v94));
      v124 = (float)((float)(v84 * v94) + targetPosa.v[1]) - (float)(v92 * v95);
      v123 = v97 - (float)(v90 * v95);
      v126 = v98 - (float)(v90 * v95);
      v125 = targetPosa.v[2] - v96;
      v128 = targetPosa.v[2] - v96;
      v127 = (float)(targetPosa.v[1] - (float)(v84 * v94)) - (float)(v92 * v95);
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_radius_damage_debug, "radius_damage_debug") )
      {
        v99 = &v132;
        v100 = 5i64;
        v101 = &targetPosa;
        *(_QWORD *)outOrigin.midPoint.v = 5i64;
        do
        {
          if ( *(_BYTE *)v99 )
          {
            G_Debug_VisualizeRadiusDamageTraces(inflictor, targ, centerPos, v101, coneAngleCos, coneDirection, contentMask, v13);
            v100 = *(_QWORD *)outOrigin.midPoint.v;
          }
          ++v101;
          v99 = (float *)((char *)v99 + 1);
          *(_QWORD *)outOrigin.midPoint.v = --v100;
        }
        while ( v100 );
        v14 = 0;
      }
      v102 = &v132;
      for ( i = &targetPosa.v[2]; ; i += 3 )
      {
        if ( *(_BYTE *)v102 )
        {
          if ( coneAngleCos == -1.0 )
            goto LABEL_111;
          if ( !coneDirection )
            goto LABEL_111;
          v104 = *(i - 2) - centerPos->v[0];
          v106 = *((unsigned int *)i - 1);
          v105 = *(i - 1) - centerPos->v[1];
          v107 = *i - centerPos->v[2];
          *(float *)&v106 = fsqrt((float)((float)(v105 * v105) + (float)(v104 * v104)) + (float)(v107 * v107));
          _XMM1 = v106;
          __asm
          {
            vcmpless xmm0, xmm1, xmm10
            vblendvps xmm0, xmm1, xmm15, xmm0
          }
          if ( (float)((float)((float)((float)(v105 * (float)(1.0 / *(float *)&_XMM0)) * coneDirection->v[1]) + (float)((float)(v104 * (float)(1.0 / *(float *)&_XMM0)) * coneDirection->v[0])) + (float)((float)(v107 * (float)(1.0 / *(float *)&_XMM0)) * coneDirection->v[2])) >= coneAngleCos )
          {
LABEL_111:
            if ( G_Main_RadiusDamageTracePassed(centerPos, &targetPosa + v14, targ->s.number, passEntityNum1, contentMask, v13) )
              break;
          }
        }
        ++v14;
        v102 = (float *)((char *)v102 + 1);
        if ( v14 >= 5 )
          return 0.0;
      }
    }
  }
  return FLOAT_1_0;
}

/*
==============
G_CombatMP_GetWeaponForEntity
==============
*/
void G_CombatMP_GetWeaponForEntity(const gentity_s *ent, Weapon *weapon, bool *isAlternate)
{
  gclient_s *client; 
  GWeaponMap *Instance; 
  const BgWeaponMap *v8; 
  bool inAltWeaponMode; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1365, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !weapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1366, ASSERT_TYPE_ASSERT, "(weapon)", (const char *)&queryFormat, "weapon") )
    __debugbreak();
  if ( !isAlternate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1367, ASSERT_TYPE_ASSERT, "(isAlternate)", (const char *)&queryFormat, "isAlternate") )
    __debugbreak();
  *isAlternate = 0;
  client = ent->client;
  Instance = GWeaponMap::GetInstance();
  v8 = Instance;
  if ( !client )
  {
    *weapon = *BG_GetWeaponForEntity(Instance, &ent->s);
    inAltWeaponMode = ent->s.inAltWeaponMode;
    goto LABEL_22;
  }
  if ( !BG_IsTurretActive(&client->ps) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu) )
  {
    *weapon = *BG_GetViewmodelWeapon(v8, &client->ps);
    inAltWeaponMode = BG_UsingAlternate(&client->ps);
LABEL_22:
    *isAlternate = inAltWeaponMode;
    return;
  }
  if ( client->ps.viewlocked == PLAYERVIEWLOCK_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1384, ASSERT_TYPE_ASSERT, "(ps->viewlocked)", (const char *)&queryFormat, "ps->viewlocked") )
    __debugbreak();
  if ( client->ps.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1385, ASSERT_TYPE_ASSERT, "(ps->viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->viewlocked_entNum != ENTITYNUM_NONE") )
    __debugbreak();
  *weapon = *BG_GetWeaponForEntity(v8, &g_entities[client->ps.viewlocked_entNum].s);
  *isAlternate = 0;
}

/*
==============
G_CombatMP_GetWeaponHitLocationMultiplier
==============
*/
float G_CombatMP_GetWeaponHitLocationMultiplier(hitLocation_t hitLoc, const Weapon *weapon, bool isAlternate, int locDamageTableIndex)
{
  __int64 v4; 
  GCombat *v8; 
  const float *LocationDamageMultipliers; 
  double LocDamageMult; 

  v4 = hitLoc;
  if ( (unsigned int)hitLoc > HITLOC_SOFT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1348, ASSERT_TYPE_ASSERT, "((hitLoc >= HITLOC_NONE) && (hitLoc < HITLOC_NUM))", (const char *)&queryFormat, "(hitLoc >= HITLOC_NONE) && (hitLoc < HITLOC_NUM)") )
    __debugbreak();
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  v8 = GCombat::ms_gCombatSystem;
  if ( weapon->weaponIdx && BG_GetWeaponType(weapon, isAlternate) == WEAPTYPE_BULLET && BG_GetWeaponClass(weapon, isAlternate) != WEAPCLASS_TURRET )
  {
    LocationDamageMultipliers = BG_GetLocationDamageMultipliers(weapon, isAlternate);
    LocDamageMult = GCombat::GetLocDamageMult(v8, (hitLocation_t)v4, locDamageTableIndex);
    *(float *)&LocDamageMult = *(float *)&LocDamageMult * LocationDamageMultipliers[v4];
  }
  else
  {
    LocDamageMult = GCombat::GetLocDamageMult(v8, (hitLocation_t)v4, locDamageTableIndex);
  }
  return *(float *)&LocDamageMult;
}

/*
==============
G_CombatMP_GetYawForCharacter
==============
*/
float G_CombatMP_GetYawForCharacter(gentity_s *ent, characterInfo_t *ci)
{
  if ( SV_IsAgent(ent->s.number) && SV_Agent_IsScripted(ent->s.number) )
    return ent->r.currentAngles.v[1];
  else
    return ci->legs.yawAngle;
}

/*
==============
G_CombatMP_GrenadeDrop
==============
*/
void G_CombatMP_GrenadeDrop(gentity_s *self, int meansOfDeath, bool applyDamageToOwner)
{
  playerState_s *EntityPlayerState; 
  __int64 v5; 
  __int64 number; 
  __int64 v7; 
  __int64 v8; 
  int grenadeTimeLeft; 
  __m256i v10; 
  __int128 v11; 
  int v12; 
  char v13; 
  char v14; 
  char v15; 
  double v16; 
  GWeaponMap *Instance; 
  BgWeaponMap *v18; 
  BgWeaponHandle v19; 
  bool HasUnderbarrelAmmo; 
  int v21; 
  scrContext_t *v22; 
  __int64 v23; 
  scrContext_t *v24; 
  double v25; 
  double v26; 
  double v27; 
  const dvar_t *v28; 
  float v29; 
  gentity_s *v30; 
  gentity_s *v31; 
  __int64 hand; 
  __int64 rotate; 
  bool v34; 
  int fuseTime; 
  AmmoStore result; 
  vec3_t dir; 
  Weapon r_weapon; 
  vec3_t start; 
  AmmoStore r_clip2; 

  EntityPlayerState = G_GetEntityPlayerState(self);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 518, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 501, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v5 = *(_QWORD *)&GStatic::ms_gameStatics;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 504, ASSERT_TYPE_ASSERT, "( gameStatic )", (const char *)&queryFormat, "gameStatic") )
    __debugbreak();
  number = self->s.number;
  if ( (unsigned int)number >= *(_DWORD *)(v5 + 19576) )
  {
    LODWORD(hand) = self->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.h", 123, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( m_characterCount )", "entityIndex doesn't index m_characterCount\n\t%i not in [0, %i)", hand, *(_DWORD *)(v5 + 19576)) )
      __debugbreak();
  }
  v7 = *(_QWORD *)(v5 + 19568) + 232 * number;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 507, ASSERT_TYPE_ASSERT, "( playerEvents )", (const char *)&queryFormat, "playerEvents") )
    __debugbreak();
  if ( *(_DWORD *)(v7 + 216) != 135 )
  {
    v8 = 0i64;
LABEL_21:
    grenadeTimeLeft = EntityPlayerState->grenadeTimeLeft;
    goto LABEL_22;
  }
  v8 = *(_QWORD *)(v7 + 224);
  if ( !v8 )
    goto LABEL_21;
  grenadeTimeLeft = *(_DWORD *)(v8 + 68);
LABEL_22:
  if ( grenadeTimeLeft )
  {
    if ( v8 )
    {
      v10 = *(__m256i *)v8;
      v11 = *(_OWORD *)(v8 + 32);
      v12 = *(_DWORD *)(v8 + 76);
      v13 = *(_BYTE *)(v8 + 82);
      v14 = *(_BYTE *)(v8 + 83);
      *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)(v8 + 56);
      fuseTime = *(_DWORD *)(v8 + 72);
      v15 = *(_BYTE *)(v8 + 84);
      *(__m256i *)&r_weapon.weaponIdx = v10;
      v16 = *(double *)(v8 + 48);
      v34 = v15;
      *(_OWORD *)&r_weapon.attachmentVariationIndices[5] = v11;
      *(double *)&r_weapon.attachmentVariationIndices[21] = v16;
    }
    else
    {
      v13 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&EntityPlayerState->weapCommon.weapFlags, ACTIVE, 1u) || BG_IsUsingOffhandGestureWeapon(EntityPlayerState);
      v14 = BG_UsingAlternate(EntityPlayerState);
      v34 = BG_ThrowingBackGrenade(EntityPlayerState);
      Instance = GWeaponMap::GetInstance();
      v18 = Instance;
      if ( v13 )
      {
        if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 916, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 917, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v19.m_mapEntryId = EntityPlayerState->weapCommon.offHandHandle.m_mapEntryId;
      }
      else
      {
        if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v19.m_mapEntryId = EntityPlayerState->weapCommon.weaponHandle.m_mapEntryId;
      }
      r_weapon = *BgWeaponMap::GetWeapon(v18, v19);
      HasUnderbarrelAmmo = BG_HasUnderbarrelAmmo(&r_weapon);
      fuseTime = BG_GetHeldGrenadeFuse(&r_weapon, HasUnderbarrelAmmo, EntityPlayerState);
      r_clip2 = *BG_AmmoStoreForWeapon(&result, &r_weapon, 0);
      BG_HasLadderHand(EntityPlayerState);
      v21 = 0;
      while ( !BG_IsClipCompatible(&EntityPlayerState->weapCommon.ammoInClip[v21].clipIndex, &r_clip2) )
      {
        if ( (unsigned int)++v21 >= 0xF )
        {
          v12 = 0;
          goto LABEL_51;
        }
      }
      v12 = EntityPlayerState->weapCommon.ammoInClip[v21].ammoCount[0];
    }
LABEL_51:
    v22 = ScriptContext_Server();
    LOWORD(v23) = r_weapon.weaponIdx;
    v24 = v22;
    if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
    {
      LODWORD(rotate) = bg_lastParsedWeaponIndex;
      LODWORD(hand) = r_weapon.weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", hand, rotate) )
        __debugbreak();
    }
    v23 = (unsigned __int16)v23;
    if ( !bg_weaponDefs[(unsigned __int16)v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    if ( bg_weaponDefs[v23]->dropGrenadeHeldOnDeath )
    {
      if ( v13 )
      {
        GScr_Weapon_AddParam(v24, &r_weapon, v14);
        GScr_Notify(self, scr_const.offhand_fired, 1u);
      }
      if ( r_weapon.weaponIdx && BG_GetWeaponType(&r_weapon, 0) == WEAPTYPE_GRENADE )
      {
        v25 = G_crandom();
        dir.v[0] = *(float *)&v25;
        v26 = G_crandom();
        dir.v[1] = *(float *)&v26;
        v27 = G_crandom();
        v28 = DCONST_DVARBOOL_g_grenadeDropConsumeAmmo;
        dir.v[1] = 160.0 * dir.v[1];
        start.v[0] = self->r.currentOrigin.v[0];
        v29 = self->r.currentOrigin.v[2];
        dir.v[0] = 160.0 * dir.v[0];
        dir.v[2] = *(float *)&v27 * 160.0;
        *(float *)&v27 = self->r.currentOrigin.v[1];
        start.v[2] = v29 + 40.0;
        start.v[1] = *(float *)&v27;
        if ( !DCONST_DVARBOOL_g_grenadeDropConsumeAmmo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_grenadeDropConsumeAmmo") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v28);
        if ( v28->current.enabled && !v34 && !BG_OffhandDoesNotConsumeAmmo(&r_weapon, 0) && v12 > 0 )
          PM_WeaponUseAmmo(EntityPlayerState, &r_weapon, 0, 1, WEAPON_HAND_DEFAULT);
        v30 = G_Missile_FireGrenade(self, &start, &dir, &r_weapon, 0, WEAPON_HAND_DEFAULT, 1, fuseTime, 1, level.time);
        v31 = v30;
        if ( !applyDamageToOwner && v30 && Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_laststand_grenade_drop_fix_enabled, "killswitch_laststand_grenade_drop_fix_enabled") )
          v31->c.missile.flags |= 0x8000u;
      }
    }
    else
    {
      GScr_Weapon_AddParam(v24, &r_weapon, v14);
      GScr_Notify(self, scr_const.grenade_held_on_death, 1u);
    }
  }
}

/*
==============
G_CombatMP_HandlePlayerDeath
==============
*/
void G_CombatMP_HandlePlayerDeath(gentity_s *self, const gentity_s *inflictor, gentity_s *attacker, const int damage, const int damageFlags, const int mod, const Weapon *r_weapon, bool isAlternate, const vec3_t *vDir, const vec3_t *point, const hitLocation_t hitLoc, int timeOffset, int modelIndex, scr_string_t partName)
{
  GCombat *v18; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 248, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 249, ASSERT_TYPE_ASSERT, "( !Sys_IsServerUserMoveWorker() )", (const char *)&queryFormat, "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  v18 = GCombat::ms_gCombatSystem;
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 252, ASSERT_TYPE_ASSERT, "(combatSystem)", (const char *)&queryFormat, "combatSystem") )
    __debugbreak();
  if ( s_simultaneousDeaths && GCombat::QueuedDamageEnabled(v18) )
  {
    if ( !GCombat::IsDeathQueued(v18, self) )
      GCombat::QueueDeathInstance(v18, self, inflictor, attacker, vDir, point, damage, damageFlags, mod, r_weapon, isAlternate, hitLoc, timeOffset, modelIndex, partName);
  }
  else
  {
    G_CombatMP_FinalizePlayerDeath(self, inflictor, attacker, damage, damageFlags, mod, r_weapon, isAlternate, vDir, point, hitLoc, timeOffset, modelIndex, partName);
  }
}

/*
==============
G_CombatMP_PlayerDie
==============
*/
void G_CombatMP_PlayerDie(gentity_s *self, const gentity_s *inflictor, gentity_s *attacker, int damage, int damageFlags, int meansOfDeath, const Weapon *r_weapon, bool isAlternate, const vec3_t *vDir, const hitLocation_t hitLoc, int psTimeOffset)
{
  gclient_s *client; 
  __int64 v15; 
  int v16; 
  gclient_s *v17; 
  bool v18; 
  const Weapon *v19; 
  unsigned int *RandomSeed; 
  gclient_s *v21; 
  GHandler *Handler; 
  int deathAnimDuration; 
  const dvar_t *v24; 
  gclient_s *v25; 
  unsigned int number; 
  SvClientMP *CommonClient; 
  gclient_s *v28; 
  const Bounds *Bounds; 
  __m128 v30; 
  gclient_s *v31; 
  __int64 v32; 
  unsigned int *holdrand; 
  int outDuration; 
  int damagea; 

  damagea = damage;
  SV_InitMP_CheckThread();
  if ( !self->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1008, ASSERT_TYPE_ASSERT, "(self->client)", (const char *)&queryFormat, "self->client") )
    __debugbreak();
  self->client->ps.stats[4] = 0;
  if ( !Com_GetServerDObjForEntnum(self->client->ps.clientNum) )
  {
    Com_Printf(15, "PlayerDie called without a valid Dobj for player %i\n", (unsigned int)self->client->ps.clientNum);
    return;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&self->client->ps.pm_flags, ACTIVE, 0x16u) )
    *(_QWORD *)self->client->ps.velocity.v = 0i64;
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&self->client->ps.otherFlags, (POtherFlagsMP)33) )
  {
    client = self->client;
    if ( client->ps.pm_type <= 1u || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 0xBu) )
    {
      SV_Profile_BeginEvent(SVPROF_CLIENT_KILLED);
      if ( BG_AISystemEnabled() )
        SV_BotEntityDied(self);
      v15 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64);
      if ( !v15 )
        goto LABEL_64;
      if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
        __debugbreak();
      if ( v15 != *(_QWORD *)&GStatic::ms_gameStatics )
      {
LABEL_64:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1034, ASSERT_TYPE_ASSERT, "(BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == GStatic::GetGameStatics()))", "%s\n\tEntering server game player processing without a valid client game state", "BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == GStatic::GetGameStatics())") )
          __debugbreak();
      }
      if ( attacker->s.eType == ET_TURRET && EntHandle::isDefined(&attacker->r.ownerNum) )
        attacker = EntHandle::ent(&attacker->r.ownerNum);
      v16 = meansOfDeath;
      G_CombatMP_GrenadeDrop(self, meansOfDeath, 1);
      G_PlayerSpawnPoints_LogDeathEvent(self, attacker);
      self->client->ps.weapCommon.offhandGestureFlags = 0;
      GScr_AddEntity(attacker);
      GScr_Notify(self, scr_const.death, 1u);
      GScr_Notify(self, scr_const.death_or_disconnect, 0);
      v17 = self->client;
      if ( v17->ps.pm_type > 1u && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v17->ps.otherFlags, ACTIVE, 0xBu) )
      {
        LODWORD(holdrand) = self->client->ps.pm_type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1055, ASSERT_TYPE_SANITY, "( ( (self->client->ps.pm_type == PM_NORMAL_LINKED) || (self->client->ps.pm_type == PM_NORMAL) || self->client->ps.otherFlags.TestFlag( POtherFlagsCommon::LASTSTAND ) ) )", "( self->client->ps.pm_type ) = %i", holdrand) )
          __debugbreak();
      }
      v18 = isAlternate;
      v19 = r_weapon;
      G_CombatMP_SetAnimDamageTypeCondition(self->client->ps.clientNum, self, inflictor, v16, r_weapon, isAlternate);
      G_CombatMP_SetAnimHitLocationCondition(self->client->ps.clientNum, self, hitLoc);
      G_CombatMP_SetAnimHitDirectionCondition(self->client->ps.clientNum, self, vDir, &self->client->ps, v16);
      G_CombatMP_SetAnimMoveDirectionCondition(self->client->ps.clientNum, self, &self->client->ps);
      G_CombatMP_SetVehicleOccupancyConditions(self->client->ps.clientNum, self);
      if ( v16 == 8 )
      {
        G_CombatMP_SetMeleeReactionConditions(self->client->ps.clientNum, inflictor);
      }
      else if ( v16 == 21 )
      {
        deathAnimDuration = G_Execution_GetExecutionAnimDurationRemaining(self, level.time);
        GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&self->client->ps.otherFlags, GameModeFlagValues::ms_mpValue, 0x33u);
LABEL_30:
        v24 = DVARBOOL_killswitch_execution_death_validation_enabled;
        if ( !DVARBOOL_killswitch_execution_death_validation_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_execution_death_validation_enabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        if ( v24->current.enabled && BG_IsPlayerInExecution(&self->client->ps) )
        {
          v25 = self->client;
          if ( !v25->ps.activeExecutionIsVictim || inflictor->s.number != v25->ps.activeExecutionPartnerEntNum )
            G_Execution_Cancel(self);
        }
        self->client->ps.stats[0] = 0;
        if ( self->hasSpawnInfluencePoint )
          G_PlayerSpawnPoints_UnlinkInfluencePointFromEntity(self->influencePointIndex, self);
        Scr_PlayerKilled(self, inflictor, attacker, damagea, damageFlags, v16, v19, v18, vDir, hitLoc, psTimeOffset, deathAnimDuration);
        G_Vehicle_ClearPlayerVehicles(self->s.number, &self->client->ps);
        self->client->ps.pm_type = (self->client->ps.pm_type == 1) + 7;
        if ( SV_BotIsBotEntClient(self) )
        {
          number = self->s.number;
          if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          CommonClient = (SvClientMP *)SvClient::GetCommonClient(number);
          SV_BotKilled(CommonClient);
        }
        AI_DissociateAIFromEnt(self);
        G_Nav_DestroyPlayerRepulsor(self->s.number);
        GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&self->client->ps.eFlags, ACTIVE, 0x10u);
        self->r.currentAngles.v[2] = 0.0;
        G_Combat_LookAtKiller(self, inflictor, attacker, &self->client->ps);
        v28 = self->client;
        v28->ps.viewangles.v[0] = self->r.currentAngles.v[0];
        v28->ps.viewangles.v[1] = self->r.currentAngles.v[1];
        v28->ps.viewangles.v[2] = self->r.currentAngles.v[2];
        self->s.loopSound = 0;
        Bounds = BG_Suit_GetBounds(self->client->ps.suitIndex, PM_EFF_STANCE_PRONE);
        *(_OWORD *)self->r.box.midPoint.v = *(_OWORD *)Bounds->midPoint.v;
        v30 = (__m128)*(unsigned __int64 *)&Bounds->halfSize.y;
        *(double *)&self->r.box.halfSize.y = *(double *)v30.m128_u64;
        if ( _mm_shuffle_ps(v30, v30, 85).m128_f32[0] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1125, ASSERT_TYPE_ASSERT, "(self->r.box.halfSize[2] >= 0.0f)", (const char *)&queryFormat, "self->r.box.halfSize[2] >= 0.0f") )
          __debugbreak();
        SV_LinkEntity(self);
        self->health = 0;
        self->client->sess.lastDeathTime = level.time;
        self->handler = 16;
        self->client->sess.eFlags.m_flags[0] = 0;
        v31 = self->client;
        if ( v31 == (gclient_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 280, ASSERT_TYPE_ASSERT, "(sourceFlags)", (const char *)&queryFormat, "sourceFlags") )
          __debugbreak();
        v31->sess.eFlags.m_flags[0] ^= (v31->sess.eFlags.m_flags[0] ^ v31->ps.eFlags.m_flags[0]) & 4;
        self->client->sess.eFlags.m_flags[0] ^= 4u;
        v32 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64);
        if ( !v32 )
          goto LABEL_65;
        if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
          __debugbreak();
        if ( v32 != *(_QWORD *)&GStatic::ms_gameStatics )
        {
LABEL_65:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1140, ASSERT_TYPE_ASSERT, "(BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == GStatic::GetGameStatics()))", "%s\n\tFinished server game player processing without a valid client game state", "BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == GStatic::GetGameStatics())") )
            __debugbreak();
        }
        SV_Profile_EndEvent(SVPROF_CLIENT_KILLED);
        return;
      }
      RandomSeed = G_GetRandomSeed();
      v21 = self->client;
      Handler = GHandler::getHandler();
      outDuration = BG_AnimScriptEvent(Handler, &v21->ps, ANIM_ET_DEATH, 0, 1, RandomSeed);
      GPlayerASM_ForceUpdateEvent(&self->client->ps, MOVEMENT, 1, &outDuration);
      deathAnimDuration = outDuration;
      goto LABEL_30;
    }
  }
}

/*
==============
G_CombatMP_SendPlayerHitEvent
==============
*/
void G_CombatMP_SendPlayerHitEvent(const gentity_s *body, const gentity_s *victim, const gentity_s *inflictor, const Weapon *r_weapon, const bool isAlternate, const scr_string_t partName, const vec3_t *point, const vec3_t *localdir, const meansOfDeath_t mod, const hitLocation_t hitLoc, int dflags, const bool isFatal)
{
  int v15; 
  GBullet *BulletSystem; 
  bool v17; 
  int v18; 
  int HitEvent; 
  gentity_s *v20; 
  GWeaponMap *Instance; 
  unsigned int v22; 
  ClientBits *p_clientMask; 
  unsigned __int64 clientNum; 
  int ClientHitEvent; 
  gentity_s *v26; 
  GWeaponMap *v27; 
  __int16 number; 
  unsigned int m_objIndex; 
  __int64 v30; 
  bool v31; 
  GTurret **v32; 
  GTurret *v33; 
  __int16 v34; 
  __int64 v35; 
  __int64 v36; 
  BulletHitBoneInfo outHitInfo[2]; 
  int v40; 

  if ( r_weapon->weaponIdx && BG_GetWeaponType(r_weapon, isAlternate) == WEAPTYPE_BULLET )
  {
    if ( (unsigned int)mod >= MOD_NUM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1114, ASSERT_TYPE_ASSERT, "(unsigned)( mod ) < (unsigned)( MOD_NUM )", "mod doesn't index MOD_NUM\n\t%i not in [0, %i)", mod, 25) )
      __debugbreak();
    if ( (unsigned int)mod <= MOD_FIRE_BULLET )
    {
      v15 = 1049094;
      if ( _bittest(&v15, mod) )
      {
        if ( (unsigned int)(hitLoc - 20) > 1 )
        {
          if ( !body && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 294, ASSERT_TYPE_ASSERT, "( body )", (const char *)&queryFormat, "body") )
            __debugbreak();
          if ( !victim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 295, ASSERT_TYPE_ASSERT, "( victim )", (const char *)&queryFormat, "victim") )
            __debugbreak();
          if ( !victim->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 296, ASSERT_TYPE_ASSERT, "( victim->client )", (const char *)&queryFormat, "victim->client") )
            __debugbreak();
          if ( !inflictor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 297, ASSERT_TYPE_ASSERT, "( inflictor )", (const char *)&queryFormat, "inflictor") )
            __debugbreak();
          if ( !point && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 298, ASSERT_TYPE_ASSERT, "( point )", (const char *)&queryFormat, "point") )
            __debugbreak();
          if ( !localdir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 299, ASSERT_TYPE_ASSERT, "( localdir )", (const char *)&queryFormat, "localdir") )
            __debugbreak();
          BulletSystem = GBullet::GetBulletSystem();
          if ( !BulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 302, ASSERT_TYPE_ASSERT, "(bullet)", (const char *)&queryFormat, "bullet") )
            __debugbreak();
          v17 = GBullet::IncrementHitClientEventCount(BulletSystem, victim->client->ps.clientNum);
          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_g_useHitLocationFix, "g_useHitLocationFix") || !G_Bullet_BoneHitEncode(body, partName, point, outHitInfo) )
          {
            *(double *)outHitInfo = 0.0;
            v40 = 0;
          }
          v18 = v17;
          v40 = v18;
          if ( (dflags & 0x200) != 0 )
          {
            v18 |= 2u;
            v40 = v18;
          }
          if ( (dflags & 0x400) != 0 )
            v40 = v18 | 4;
          outHitInfo[1] = (BulletHitBoneInfo)GBullet::CalculateHitImpactSoundDelay(BulletSystem, inflictor, victim);
          HitEvent = BG_WeaponBulletFire_GetHitEvent(mod, 1);
          if ( !HitEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 327, ASSERT_TYPE_SANITY, "( bulletEvent != EV_NONE )", (const char *)&queryFormat, "bulletEvent != EV_NONE") )
            __debugbreak();
          v20 = G_Utils_SpawnEventEntity(point, HitEvent);
          Instance = GWeaponMap::GetInstance();
          BG_SetWeaponForEntity(Instance, &v20->s, r_weapon);
          v20->s.inAltWeaponMode = isAlternate;
          v20->s.eventParm = DirToByte(localdir);
          v20->s.eventParm2 = 0;
          v20->s.surfType = body->s.surfType;
          v22 = 0;
          v20->s.otherEntityNum = inflictor->s.number;
          v20->s.groundEntityNum = body->s.number;
          *(double *)v20->s.lerp.u.anonymous.data = *(double *)outHitInfo;
          v20->s.lerp.u.anonymous.data[2] = v40;
          p_clientMask = &v20->clientMask;
          while ( !p_clientMask->array[0] )
          {
            ++v22;
            p_clientMask = (ClientBits *)((char *)p_clientMask + 4);
            if ( v22 >= 7 )
              goto LABEL_46;
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 339, ASSERT_TYPE_ASSERT, "( bulletHitEntity->clientMask.noBitsOn() )", (const char *)&queryFormat, "bulletHitEntity->clientMask.noBitsOn()") )
            __debugbreak();
LABEL_46:
          if ( !G_GetEntityPlayerStateConst(victim) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 342, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
            __debugbreak();
          clientNum = (unsigned int)victim->client->ps.clientNum;
          if ( (unsigned int)clientNum >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", clientNum, 224) )
            __debugbreak();
          v20->clientMask.array[clientNum >> 5] |= 0x80000000 >> (clientNum & 0x1F);
          ClientHitEvent = BG_WeaponBulletFire_GetClientHitEvent(mod, 1);
          if ( !ClientHitEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 350, ASSERT_TYPE_SANITY, "( bulletEvent != EV_NONE )", (const char *)&queryFormat, "bulletEvent != EV_NONE") )
            __debugbreak();
          v26 = G_Utils_SpawnEventEntity(point, ClientHitEvent);
          v26->s.eventParm2 = 0;
          v27 = GWeaponMap::GetInstance();
          BG_SetWeaponForEntity(v27, &v26->s, r_weapon);
          v26->s.inAltWeaponMode = isAlternate;
          v26->s.surfType = body->s.surfType;
          number = inflictor->s.number;
          v26->s.otherEntityNum = inflictor->s.number;
          if ( number == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 358, ASSERT_TYPE_ASSERT, "(bulletClientHitEntity->s.otherEntityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "bulletClientHitEntity->s.otherEntityNum != ENTITYNUM_NONE") )
            __debugbreak();
          *(double *)v26->s.lerp.u.anonymous.data = *(double *)outHitInfo;
          v26->s.lerp.u.anonymous.data[2] = v40;
          v26->s.clientNum = victim->client->ps.clientNum;
          v26->clientMask.array[0] = -1;
          *(_QWORD *)&v26->clientMask.array[1] = -1i64;
          *(_QWORD *)&v26->clientMask.array[3] = -1i64;
          *(_QWORD *)&v26->clientMask.array[5] = -1i64;
          bitarray_base<bitarray<224>>::resetBit(&v26->clientMask, victim->client->ps.clientNum);
          if ( hitLoc == HITLOC_HEAD )
          {
            v20->s.eventParm2 |= 1u;
            v26->s.eventParm2 |= 1u;
          }
          else if ( hitLoc == HITLOC_HELMET )
          {
            v20->s.eventParm2 |= 0x400u;
            v26->s.eventParm2 |= 0x400u;
          }
          else if ( (unsigned int)(hitLoc - 6) <= 0xB )
          {
            v20->s.eventParm2 |= 0x40u;
            v26->s.eventParm2 |= 0x40u;
          }
          if ( isFatal )
          {
            v20->s.eventParm2 |= 2u;
            v26->s.eventParm2 |= 2u;
          }
          m_objIndex = inflictor->turretHandle.m_objIndex;
          if ( m_objIndex )
          {
            v30 = m_objIndex - 1;
            if ( !(_BYTE)GTurret::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 226, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
              __debugbreak();
            if ( (unsigned int)v30 >= 0x80 )
            {
              LODWORD(v36) = 128;
              LODWORD(v35) = v30;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 227, ASSERT_TYPE_ASSERT, "(unsigned)( turretIndex ) < (unsigned)( ( sizeof( *array_counter( ms_turretArray ) ) + 0 ) )", "turretIndex doesn't index ARRAY_COUNT( ms_turretArray )\n\t%i not in [0, %i)", v35, v36) )
                __debugbreak();
            }
            v31 = GTurret::ms_turretArray[v30] == NULL;
            v32 = &GTurret::ms_turretArray[v30];
            if ( v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 228, ASSERT_TYPE_ASSERT, "( ms_turretArray[turretIndex] )", (const char *)&queryFormat, "ms_turretArray[turretIndex]") )
              __debugbreak();
            v33 = *v32;
            if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 417, ASSERT_TYPE_ASSERT, "(turret)", (const char *)&queryFormat, "turret") )
              __debugbreak();
            v33->m_data.flags |= 0x10000u;
          }
          if ( (dflags & 8) != 0 )
            v20->s.eventParm2 |= 0x200u;
          if ( (dflags & 0x1000) != 0 )
          {
            v20->s.eventParm2 |= 0x800u;
            v26->s.eventParm2 |= 0x800u;
          }
          G_BulletMP_MarkPotentialImpactFixup(v20, v20->s.groundEntityNum, partName);
          v34 = truncate_cast<short,int>(v26->s.clientNum);
          G_BulletMP_MarkPotentialImpactFixup(v26, v34, partName);
        }
      }
    }
  }
}

/*
==============
G_CombatMP_SetAnimDamageTypeCondition
==============
*/
void G_CombatMP_SetAnimDamageTypeCondition(const int clientNum, const gentity_s *self, const gentity_s *inflictor, int meansOfDeath, const Weapon *r_weapon, bool isAlternate)
{
  const WeaponDef *v10; 
  characterInfo_t *v11; 
  AnimDamageType integer; 
  const dvar_t *v13; 
  unsigned __int64 v14; 
  float v15; 
  float v16; 
  float v17; 
  weapClass_t WeaponClass; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v21; 

  v10 = BG_WeaponDef(r_weapon, isAlternate);
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 632, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 633, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v20) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 634, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v20, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v11 = (characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)clientNum);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 638, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  integer = BG_DeathAnimDamageType(r_weapon, isAlternate);
  if ( meansOfDeath == 8 )
    goto LABEL_40;
  v13 = DVARINT_g_debugPlayerDeath_DamageType;
  if ( !DVARINT_g_debugPlayerDeath_DamageType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugPlayerDeath_DamageType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.integer < 12 )
    integer = v13->current.integer;
  if ( integer )
  {
    v14 = integer;
    goto LABEL_51;
  }
  if ( v10->offhandClass == OFFHAND_CLASS_FRAG_GRENADE )
  {
    if ( !inflictor || (v15 = inflictor->r.currentOrigin.v[0] - self->r.currentOrigin.v[0], v16 = inflictor->r.currentOrigin.v[1] - self->r.currentOrigin.v[1], v17 = inflictor->r.currentOrigin.v[2] - self->r.currentOrigin.v[2], (float)((float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v17 * v17)) >= 6400.0) )
    {
      v14 = 1i64;
      goto LABEL_51;
    }
LABEL_50:
    v14 = 2i64;
    goto LABEL_51;
  }
  if ( (unsigned int)meansOfDeath >= 0x19 )
  {
    LODWORD(v21) = 25;
    LODWORD(v20) = meansOfDeath;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1133, ASSERT_TYPE_ASSERT, "(unsigned)( mod ) < (unsigned)( MOD_NUM )", "mod doesn't index MOD_NUM\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  if ( (unsigned int)(meansOfDeath - 3) <= 4 || meansOfDeath == 16 )
    goto LABEL_50;
  if ( G_Weapon_ShouldPlayMeleeChargeDeathAnim(meansOfDeath, inflictor, clientNum) )
  {
LABEL_40:
    v14 = 3i64;
    goto LABEL_51;
  }
  switch ( meansOfDeath )
  {
    case 10:
      v14 = 4i64;
      break;
    case 11:
      v14 = 5i64;
      break;
    case 13:
      v14 = 11i64;
      break;
    default:
      WeaponClass = BG_GetWeaponClass(r_weapon, isAlternate);
      v19 = 9;
      if ( WeaponClass == WEAPCLASS_SPREAD )
        v19 = 1;
      v14 = v19;
      break;
  }
LABEL_51:
  BG_SetConditionValue(v11, 8, v14);
}

/*
==============
G_CombatMP_SetAnimHitDirectionCondition
==============
*/
void G_CombatMP_SetAnimHitDirectionCondition(const int clientNum, gentity_s *self, const vec3_t *vDir, const playerState_s *ps, const int meansOfDeath)
{
  characterInfo_t *v9; 
  char v10; 
  float v11; 
  float v12; 
  const dvar_t *v13; 
  int integer; 
  float v15; 
  float v16; 
  const dvar_t *v17; 
  unsigned __int128 v18; 
  unsigned __int128 v19; 
  int v23; 
  float v28; 
  __int64 v29; 
  const dvar_t *v30; 
  int v31; 
  int v32; 
  double v33; 
  const dvar_t *v34; 
  int v35; 
  GHandler *Handler; 
  float yawAngle; 
  double v38; 
  __int64 v39; 
  vec2_t vec; 
  vec3_t forward; 
  playerState_s *psa; 
  float v43; 
  __int128 v44; 

  psa = (playerState_s *)ps;
  v44 = _xmm;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 846, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v39) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 847, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v39, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v9 = (characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)clientNum);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 851, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  AngleVectors(&ps->viewangles, &forward, NULL, NULL);
  v10 = 0;
  if ( vDir )
  {
    v11 = vDir->v[0];
    v12 = vDir->v[1];
    v10 = 1;
  }
  else
  {
    v12 = vec.v[0];
    v11 = vec.v[0];
  }
  v13 = DVARINT_g_debugPlayerDeath_HitDirection;
  if ( !DVARINT_g_debugPlayerDeath_HitDirection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugPlayerDeath_HitDirection") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  integer = v13->current.integer;
  if ( integer < 4 )
  {
    switch ( integer )
    {
      case 0:
        v15 = forward.v[0];
        v16 = forward.v[1];
        LODWORD(v11) = LODWORD(forward.v[0]) ^ _xmm;
        LODWORD(v12) = LODWORD(forward.v[1]) ^ _xmm;
        goto LABEL_42;
      case 1:
        v16 = forward.v[1];
        v15 = forward.v[0];
        v11 = forward.v[1];
        LODWORD(v12) = LODWORD(forward.v[0]) ^ _xmm;
        goto LABEL_42;
      case 2:
        v16 = forward.v[1];
        v15 = forward.v[0];
        LODWORD(v11) = LODWORD(forward.v[1]) ^ _xmm;
        v12 = forward.v[0];
        goto LABEL_42;
      case 3:
        v15 = forward.v[0];
        v16 = forward.v[1];
        v11 = forward.v[0];
        v12 = forward.v[1];
        goto LABEL_42;
    }
LABEL_41:
    v16 = forward.v[1];
    v15 = forward.v[0];
    goto LABEL_42;
  }
  if ( v10 )
    goto LABEL_41;
  v17 = DVARBOOL_player_align_death_anim_unknown_direction_update_angles;
  if ( !DVARBOOL_player_align_death_anim_unknown_direction_update_angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_align_death_anim_unknown_direction_update_angles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( !v17->current.enabled )
  {
    v23 = 0;
    goto LABEL_73;
  }
  v15 = forward.v[0];
  v16 = forward.v[1];
  v18 = LODWORD(forward.v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
  v19 = v18;
  *(float *)&v19 = (float)(*(float *)&v18 * *(float *)&v18) + (float)(COERCE_FLOAT(LODWORD(forward.v[0]) ^ _xmm) * COERCE_FLOAT(LODWORD(forward.v[0]) ^ _xmm));
  _XMM2 = v19;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  v11 = (float)(1.0 / *(float *)&_XMM0) * COERCE_FLOAT(LODWORD(forward.v[0]) ^ _xmm);
  v12 = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v18;
LABEL_42:
  _XMM0 = (unsigned int)meansOfDeath;
  _XMM3 = LODWORD(COSINE45);
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm4, xmm3, xmm1, xmm2
  }
  v28 = (float)(v11 * v15) + (float)(v12 * v16);
  vec.v[0] = *(float *)&_XMM4;
  if ( (float)(v28 * v28) >= (float)(*(float *)&_XMM4 * *(float *)&_XMM4) )
  {
    v29 = 2i64;
    if ( v28 < 0.0 )
      v29 = 0i64;
  }
  else
  {
    v29 = 3i64;
    if ( (float)((float)(v12 * v15) - (float)(v11 * v16)) > 0.0 )
      v29 = 1i64;
  }
  v30 = DCONST_DVARBOOL_player_align_death_anim;
  v23 = *((_DWORD *)&v44 + v29);
  if ( !DCONST_DVARBOOL_player_align_death_anim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_align_death_anim") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  if ( v30->current.enabled && !BG_IsPlayerInExecution(psa) )
  {
    v31 = v29 - 1;
    if ( v31 )
    {
      v32 = v31 - 1;
      if ( v32 )
      {
        if ( v32 == 1 )
        {
          LODWORD(vec.v[0]) = LODWORD(v12) ^ _xmm;
          vec.v[1] = v11;
        }
        else
        {
          LODWORD(vec.v[0]) = LODWORD(v11) ^ _xmm;
          LODWORD(vec.v[1]) = LODWORD(v12) ^ _xmm;
        }
      }
      else
      {
        vec.v[0] = v11;
        vec.v[1] = v12;
      }
    }
    else
    {
      LODWORD(vec.v[1]) = LODWORD(v11) ^ _xmm;
      vec.v[0] = v12;
    }
    v33 = vectoyaw(&vec);
    v34 = DCONST_DVARINT_player_align_death_anim_ms;
    if ( !DCONST_DVARINT_player_align_death_anim_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_align_death_anim_ms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    v35 = v34->current.integer;
    if ( v35 > 0 )
    {
      if ( SV_IsAgent(self->s.number) && SV_Agent_IsScripted(self->s.number) )
        yawAngle = self->r.currentAngles.v[1];
      else
        yawAngle = v9->legs.yawAngle;
      v38 = AngleDelta(*(const float *)&v33, yawAngle);
      self->s.lerp.apos.trType = TR_LINEAR_STOP;
      self->s.lerp.apos.trTime = level.time;
      self->s.lerp.apos.trDuration = v35;
      self->s.lerp.apos.trBase.v[1] = yawAngle;
      self->s.lerp.apos.trBase.v[0] = 0.0;
      *(_QWORD *)&self->s.lerp.apos.trBase.z = 0i64;
      self->s.lerp.apos.trDelta.v[1] = *(float *)&v38 * (float)(1000.0 / (float)v35);
      self->s.lerp.apos.trDelta.v[2] = 0.0;
    }
    else
    {
      *(float *)&psa = 0.0;
      *((float *)&psa + 1) = *(float *)&v33;
      v43 = 0.0;
      Handler = GHandler::getHandler();
      if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 949, ASSERT_TYPE_ASSERT, "(handler != nullptr)", (const char *)&queryFormat, "handler != nullptr") )
        __debugbreak();
      Handler->SetEntityAngles(Handler, clientNum, (const vec3_t *)&psa);
    }
  }
LABEL_73:
  BG_SetConditionValue(v9, 11, v23);
}

/*
==============
G_CombatMP_SetAnimHitLocationCondition
==============
*/
void G_CombatMP_SetAnimHitLocationCondition(const int clientNum, const gentity_s *self, const hitLocation_t hitLoc)
{
  int v5; 
  unsigned __int32 v6; 
  const dvar_t *v7; 
  int integer; 
  characterInfo_t *v9; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 744, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( (unsigned int)(hitLoc - 1) > 1 )
  {
    if ( hitLoc == HITLOC_NECK )
    {
      v5 = 2;
    }
    else
    {
      v6 = hitLoc - 12;
      v5 = 0;
      if ( v6 <= 5 )
        v5 = 3;
    }
  }
  else
  {
    v5 = 1;
  }
  v7 = DVARINT_g_debugPlayerDeath_HitLocation;
  if ( !DVARINT_g_debugPlayerDeath_HitLocation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugPlayerDeath_HitLocation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  if ( integer >= 4 )
    integer = v5;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v9 = (characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)clientNum);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 765, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  BG_SetConditionValue(v9, 9, integer);
}

/*
==============
G_CombatMP_SetAnimMoveDirectionCondition
==============
*/
void G_CombatMP_SetAnimMoveDirectionCondition(const int clientNum, gentity_s *self, const playerState_s *ps)
{
  characterInfo_t *v5; 
  float v6; 
  vec3_t *p_velocity; 
  float v8; 
  float v9; 
  __int128 v10; 
  const dvar_t *v11; 
  float v12; 
  float v13; 
  float v17; 
  float v18; 
  float value; 
  unsigned __int64 v20; 
  vec3_t angles; 
  tmat33_t<vec3_t> out; 
  char v23; 
  tmat33_t<vec3_t> axis; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 789, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v5 = (characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)clientNum);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 792, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v6 = ps->viewangles.v[1];
  angles.v[0] = 0.0;
  angles.v[2] = 0.0;
  angles.v[1] = v6;
  AnglesToAxis(&angles, &axis);
  MatrixTranspose(&axis, &out);
  p_velocity = &ps->velocity;
  if ( p_velocity == (vec3_t *)&v23 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v8 = p_velocity->v[2];
  v9 = p_velocity->v[1];
  v10 = LODWORD(p_velocity->v[0]);
  v11 = DCONST_DVARFLT_player_strafeAnimCosAngle;
  v12 = (float)((float)(*(float *)&v10 * out.m[0].v[0]) + (float)(v9 * out.m[1].v[0])) + (float)(v8 * out.m[2].v[0]);
  v13 = (float)((float)(*(float *)&v10 * out.m[0].v[1]) + (float)(v9 * out.m[1].v[1])) + (float)(v8 * out.m[2].v[1]);
  *(float *)&v10 = fsqrt((float)(v12 * v12) + (float)(v13 * v13));
  _XMM2 = v10;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  v17 = v12 * (float)(1.0 / *(float *)&_XMM0);
  v18 = (float)(1.0 / *(float *)&_XMM0) * v13;
  if ( !DCONST_DVARFLT_player_strafeAnimCosAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_strafeAnimCosAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  value = v11->current.value;
  if ( v17 <= value )
  {
    if ( v17 >= COERCE_FLOAT(LODWORD(value) ^ _xmm) )
    {
      if ( v18 >= 0.0 )
        v20 = v18 > 0.0;
      else
        v20 = 2i64;
    }
    else
    {
      v20 = 3i64;
    }
  }
  else
  {
    v20 = 0i64;
  }
  BG_SetConditionValue(v5, 10, v20);
}

/*
==============
G_CombatMP_SetMeleeReactionConditions
==============
*/
void G_CombatMP_SetMeleeReactionConditions(const int clientNum, const gentity_s *inflictor)
{
  int altMeleeVariation; 
  bool isUsingAlternateMelee; 
  const playerState_s *EntityPlayerStateConst; 
  GWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  bool v9; 
  gentity_s *GEntity; 
  playerState_s *EntityPlayerState; 
  characterInfo_t *v12; 
  unsigned __int8 outAnimSets; 
  bool outIsRandomized; 
  MeleeAnimType outAnimType; 

  altMeleeVariation = 0;
  if ( !inflictor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 701, ASSERT_TYPE_ASSERT, "( inflictor ) != ( nullptr )", "%s != %s\n\t%p, %p", "inflictor", "nullptr", NULL, NULL) )
    __debugbreak();
  outAnimType = COUNT|DODGE;
  isUsingAlternateMelee = 0;
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(inflictor);
  if ( EntityPlayerStateConst )
  {
    Instance = GWeaponMap::GetInstance();
    ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, EntityPlayerStateConst);
    v9 = BG_UsingAlternate(EntityPlayerStateConst);
    if ( !BG_Skydive_IsSkydiving(EntityPlayerStateConst) && BG_Ladder_IsDualWieldingAllowed(EntityPlayerStateConst) )
      LOBYTE(altMeleeVariation) = EntityPlayerStateConst->weapCommon.lastWeaponHand == WEAPON_HAND_LEFT;
    isUsingAlternateMelee = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->weapCommon.weapFlags, ACTIVE, 0x26u);
    BG_GetWeaponMeleeAnimProperties(EntityPlayerStateConst, ViewmodelWeapon, v9, altMeleeVariation, isUsingAlternateMelee, &outIsRandomized, &outAnimType, &outAnimSets);
    if ( isUsingAlternateMelee )
      altMeleeVariation = EntityPlayerStateConst->weapCommon.altMeleeVariation;
    else
      altMeleeVariation = EntityPlayerStateConst->weapCommon.meleeVariation;
    GEntity = G_GetGEntity(clientNum);
    if ( GEntity )
    {
      EntityPlayerState = G_GetEntityPlayerState(GEntity);
      if ( EntityPlayerState )
        CompressedMeleeAnimData::Set(&EntityPlayerState->meleeReaction, outAnimType, altMeleeVariation, isUsingAlternateMelee);
    }
  }
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v12 = (characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)clientNum);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 732, ASSERT_TYPE_ASSERT, "(victimCi)", (const char *)&queryFormat, "victimCi") )
    __debugbreak();
  BG_SetConditionValue(v12, 30, outAnimType);
  BG_SetConditionValue(v12, 31, altMeleeVariation);
  BG_SetConditionValue(v12, 32, isUsingAlternateMelee);
}

/*
==============
G_CombatMP_SetVehicleOccupancyConditions
==============
*/
void G_CombatMP_SetVehicleOccupancyConditions(const int clientNum, gentity_s *self)
{
  __int64 v4; 
  characterInfo_t *v5; 
  GWeaponMap *Instance; 
  GHandler *Handler; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 774, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v4 = *(_QWORD *)&GStatic::ms_gameStatics;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 777, ASSERT_TYPE_ASSERT, "(gameStatic)", (const char *)&queryFormat, "gameStatic") )
    __debugbreak();
  v5 = (characterInfo_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 224i64))(v4, (unsigned int)clientNum);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 780, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  Handler = GHandler::getHandler();
  BG_AnimPlayerVehicleOccupancyConditions(Handler, Instance, &self->s, v5);
}

/*
==============
G_CombatMP_ShieldNotifyAndDamage
==============
*/
void G_CombatMP_ShieldNotifyAndDamage(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *r_weapon, bool isAlternate, int timeOffset)
{
  G_CombatMP_ShieldNotifyAndDamageInternal(targ, inflictor, attacker, dir, point, damage, dFlags, mod, r_weapon, isAlternate, timeOffset);
}

/*
==============
G_CombatMP_ShieldNotifyAndDamageInternal
==============
*/
void G_CombatMP_ShieldNotifyAndDamageInternal(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *r_weapon, bool isAlternate, int timeOffset)
{
  __int16 v11; 
  __m256i v16; 
  __int128 v17; 
  double v18; 
  bool m_isBulletDamage; 
  const gentity_s *v20; 
  __int64 meansOfDeath; 
  unsigned int NumWeapons; 
  GExtraDamageParams extraParams; 
  Weapon weapon; 

  if ( SV_UserMoveWorkersMP_IsInWorkerContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1855, ASSERT_TYPE_ASSERT, "( !SV_UserMoveWorkersMP_IsInWorkerContext() )", (const char *)&queryFormat, "!SV_UserMoveWorkersMP_IsInWorkerContext()") )
    __debugbreak();
  v16 = *(__m256i *)&r_weapon->weaponIdx;
  v17 = *(_OWORD *)&r_weapon->attachmentVariationIndices[5];
  v18 = *(double *)&r_weapon->attachmentVariationIndices[21];
  m_isBulletDamage = isAlternate;
  *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&r_weapon->weaponCamo;
  extraParams.m_isBulletDamage = isAlternate;
  *(__m256i *)&weapon.weaponIdx = v16;
  *(_OWORD *)&weapon.attachmentVariationIndices[5] = v17;
  *(double *)&weapon.attachmentVariationIndices[21] = v18;
  if ( !v11 )
  {
    if ( inflictor )
    {
      v20 = inflictor;
LABEL_9:
      G_CombatMP_GetWeaponForEntity(v20, &weapon, &extraParams.m_isBulletDamage);
      m_isBulletDamage = extraParams.m_isBulletDamage;
      goto LABEL_10;
    }
    if ( attacker )
    {
      v20 = attacker;
      goto LABEL_9;
    }
  }
LABEL_10:
  if ( weapon.weaponIdx >= BG_GetNumWeapons() )
  {
    NumWeapons = BG_GetNumWeapons();
    LODWORD(meansOfDeath) = weapon.weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1871, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( BG_GetNumWeapons() )", "weapon.weaponIdx doesn't index BG_GetNumWeapons()\n\t%i not in [0, %i)", meansOfDeath, NumWeapons) )
      __debugbreak();
  }
  if ( targ->agent )
  {
    Scr_AgentDamage(targ, inflictor, attacker, damage, dFlags, mod, &weapon, m_isBulletDamage, point, dir, HITLOC_SHIELD, timeOffset, 0, (scr_string_t)0);
  }
  else
  {
    extraParams = 0;
    Scr_PlayerDamage(targ, inflictor, attacker, damage, dFlags, mod, &weapon, m_isBulletDamage, point, dir, HITLOC_SHIELD, timeOffset, 0, (scr_string_t)0, &extraParams, damage);
  }
}

/*
==============
GCombatMP::GetRadiusDamageFromPos
==============
*/
float GCombatMP::GetRadiusDamageFromPos(GCombatMP *this, gentity_s *ent, gentity_s *ignoreEnt, const vec3_t *damageOrigin, int contentMask, bool detailTrace, unsigned __int8 *priorityMap)
{
  return G_CombatMP_GetRadiusDamageFromPos_Internal(ent, &ent->r.currentOrigin, ignoreEnt, damageOrigin, 1.0, NULL, contentMask, 0, NULL, detailTrace, priorityMap);
}

/*
==============
GCombatMP::NotifyRadiusDamage
==============
*/
void GCombatMP::NotifyRadiusDamage(GCombatMP *this, const vec3_t *damageOrigin, float damageRadius, gentity_s *attackerEnt)
{
  ;
}

/*
==============
GCombatMP::RadiusDamage
==============
*/
void GCombatMP::RadiusDamage(GCombatMP *this, const vec3_t *origin, gentity_s *inflictor, gentity_s *attacker, const BgExplosionDamageRangeInfo *damageRangeInfo, float coneAngleCos, const vec3_t *coneDirection, gentity_s *ignore, meansOfDeath_t mod, const Weapon *r_weapon, bool isAlternate, bool environmentOnly, bool runOcclusionTraces)
{
  const BgExplosionDamageRangeInfo *v13; 
  gentity_s *v14; 
  gentity_s *parent; 
  const bitarray<224> *AllTeamFlags; 
  double v19; 
  float v21; 
  float v22; 
  float v23; 
  float v25; 
  WeaponDef *v26; 
  const dvar_t *v27; 
  bool enabled; 
  const dvar_t *v29; 
  __int128 unsignedInt; 
  __int64 v33; 
  gentity_s *v34; 
  entityType_s eType; 
  entityType_s v36; 
  double v37; 
  float ApproxDistSquaredToModel; 
  bool detailTrace; 
  unsigned __int8 *priorityMap; 
  float v41; 
  double ExplosionDamageFromRangeInfo; 
  float v43; 
  float v44; 
  int RadiusDamageMask; 
  float RadiusDamageFromPos_Internal; 
  double ShieldBlastDamageProtection; 
  float v48; 
  const gentity_s *v49; 
  float v52; 
  float v53; 
  float v54; 
  int v55; 
  meansOfDeath_t v56; 
  Vehicle *vehicle; 
  __int128 v58; 
  int ignoreEnts; 
  int ignoreEntsa; 
  __int64 randSeed; 
  __int64 removeDuplicates; 
  char v66; 
  bool v67; 
  GExtraDamageParams extraParams; 
  int v69; 
  float iExplosionRadiusMin; 
  float radius_min; 
  gentity_s *attackera; 
  BgExplosionDamageRangeInfo *damageRangeInfoa; 
  vec3_t *coneDirectiona; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  WeaponDef *weapDef; 
  vec3_t v77; 
  vec3_t dir; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  Bounds bounds; 
  __int16 v82[2048]; 

  v13 = damageRangeInfo;
  v14 = attacker;
  damageRangeInfoa = (BgExplosionDamageRangeInfo *)damageRangeInfo;
  coneDirectiona = (vec3_t *)coneDirection;
  attackera = attacker;
  if ( attacker )
  {
    if ( BG_AISystemEnabled() )
    {
      parent = v14;
      if ( inflictor && inflictor->turretHandle.m_objIndex )
      {
        if ( G_EntIsLinked(inflictor) )
          parent = inflictor->tagInfo->parent;
        else
          parent = inflictor;
      }
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
        AllTeamFlags = Com_TeamsSP_GetAllTeamFlags();
      else
        AllTeamFlags = Com_TeamsMP_GetAllTeamFlags();
      Actor_BroadcastPointEvent(parent, AI_EV_EXPLOSION, AllTeamFlags, origin);
    }
    v19 = BG_ExplosionForceScalar(r_weapon, isAlternate);
    Physics_ApplyRadiusForce(PHYSICS_WORLD_ID_FIRST, origin, damageRangeInfo->outerRadius, damageRangeInfo->innerDamage, damageRangeInfo->outerDamage, 0.0, &vec3_origin, level.time, *(float *)&v19);
    _XMM0 = LODWORD(damageRangeInfo->outerRadius);
    v21 = origin->v[0];
    v22 = origin->v[1];
    v23 = origin->v[2];
    __asm { vmaxss  xmm12, xmm0, xmm11 }
    v25 = *(float *)&_XMM12 * 1.4142135;
    v26 = (WeaponDef *)BG_WeaponDef(r_weapon, isAlternate);
    v27 = DVARBOOL_g_radiusDamageCalcDetailBounds;
    weapDef = v26;
    iExplosionRadiusMin = (float)v26->iExplosionRadiusMin;
    if ( !DVARBOOL_g_radiusDamageCalcDetailBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_radiusDamageCalcDetailBounds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    enabled = v27->current.enabled;
    v29 = DCONST_DVARFLT_bg_radiusDamageMax;
    v67 = enabled;
    if ( !DCONST_DVARFLT_bg_radiusDamageMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_radiusDamageMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    unsignedInt = v29->current.unsignedInt;
    *(float *)&unsignedInt = v29->current.value * v29->current.value;
    _XMM1 = unsignedInt;
    aabbMin.v[1] = v22 - v25;
    __asm { vminss  xmm14, xmm1, xmm15 }
    collectedEnts.ids = (unsigned __int16 *)v82;
    collectedEnts.count = 0;
    aabbMax.v[0] = v25 + v21;
    aabbMin.v[2] = v23 - v25;
    collectedEnts.countMax = 2048;
    aabbMax.v[2] = v25 + v23;
    aabbMin.v[0] = v21 - v25;
    aabbMax.v[1] = v25 + v22;
    PhysicsQuery_ImmediateAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, -1, 0, NULL, &collectedEnts, NULL, 1);
    if ( !inflictor || inflictor->s.eType != ET_MISSILE || (v66 = 1, (inflictor->c.missile.flags & 0x8000) == 0) )
      v66 = 0;
    v33 = 0i64;
    v69 = 0;
    if ( collectedEnts.count )
    {
      do
      {
        v34 = &g_entities[(unsigned __int16)v82[v33]];
        if ( v34 != ignore )
        {
          if ( !environmentOnly )
            goto LABEL_38;
          if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
            __debugbreak();
          eType = v34->s.eType;
          if ( ((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM )
          {
LABEL_38:
            if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v34->s.lerp.eFlags, ACTIVE, 0x10u) && (v34->flags.m_flags[0] & 0x10) == 0 && (!v34->client || !level.bPlayerIgnoreRadiusDamage) )
            {
              if ( !v66 )
                goto LABEL_39;
              v36 = inflictor->s.eType;
              if ( v36 != ET_MISSILE )
              {
                LODWORD(removeDuplicates) = 4;
                LODWORD(randSeed) = v36;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 2344, ASSERT_TYPE_ASSERT, "( inflictor->s.eType ) == ( ET_MISSILE )", "%s == %s\n\t%i, %i", "inflictor->s.eType", "ET_MISSILE", randSeed, removeDuplicates) )
                  __debugbreak();
              }
              if ( inflictor->s.staticState.general.xmodel != v34->s.number )
              {
LABEL_39:
                v37 = *(double *)origin->v;
                v77.v[2] = origin->v[2];
                *(double *)v77.v = v37;
                ApproxDistSquaredToModel = G_Combat_GetApproxDistSquaredToModel(v34, &v77, v67, &bounds, (int *)&radius_min);
                if ( ApproxDistSquaredToModel < (float)(*(float *)&_XMM12 * *(float *)&_XMM12) && (v34->client || ApproxDistSquaredToModel < *(float *)&_XMM14) )
                {
                  if ( inflictor )
                    G_Combat_RadiusEffectsEnt(inflictor->s.number, v34, origin, *(float *)&_XMM12, iExplosionRadiusMin, v14, inflictor->c.missile.team, r_weapon, isAlternate);
                  detailTrace = BG_WeaponRadiusDamageDetailTrace(r_weapon, isAlternate);
                  priorityMap = BG_GetWeaponPriorityMap(r_weapon, isAlternate);
                  v41 = fsqrt(ApproxDistSquaredToModel);
                  ExplosionDamageFromRangeInfo = BG_GetExplosionDamageFromRangeInfo(damageRangeInfoa, v41);
                  v43 = 1.0 - (float)(v41 / *(float *)&_XMM12);
                  v44 = *(float *)&ExplosionDamageFromRangeInfo;
                  if ( runOcclusionTraces )
                  {
                    RadiusDamageMask = G_Combat_GetRadiusDamageMask(weapDef);
                    RadiusDamageFromPos_Internal = G_CombatMP_GetRadiusDamageFromPos_Internal(v34, &v34->r.currentOrigin, inflictor, origin, coneAngleCos, coneDirectiona, RadiusDamageMask, LODWORD(radius_min) != 0, &bounds, detailTrace, priorityMap);
                  }
                  else
                  {
                    RadiusDamageFromPos_Internal = FLOAT_1_0;
                  }
                  ShieldBlastDamageProtection = G_Weapon_GetShieldBlastDamageProtection(v34, origin);
                  v48 = *(float *)&ShieldBlastDamageProtection;
                  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_riotshield_ignoreonstick_enabled, "riotshield_ignoreonstick_enabled") && (v49 = G_Utils_GetParent(inflictor)) != NULL && v49 == v34 )
                  {
                    v48 = 0.0;
                  }
                  else
                  {
                    if ( *(float *)&ShieldBlastDamageProtection < 0.0 || *(float *)&ShieldBlastDamageProtection > 1.0 )
                    {
                      _XMM1 = *(unsigned __int64 *)&DOUBLE_1_0;
                      __asm { vxorpd  xmm1, xmm1, xmm1 }
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 2402, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( shieldProtection ) && ( shieldProtection ) <= ( 1.f )", "shieldProtection not in [0.f, 1.f]\n\t%g not in [%g, %g]", *(float *)&ShieldBlastDamageProtection, *(double *)&_XMM1, DOUBLE_1_0) )
                        __debugbreak();
                    }
                    if ( *(float *)&ShieldBlastDamageProtection > 0.0 )
                    {
                      G_Weapon_AddShieldSplashDamageEvent(v34, v44, RadiusDamageFromPos_Internal, *(float *)&ShieldBlastDamageProtection);
                      RadiusDamageFromPos_Internal = RadiusDamageFromPos_Internal * (float)(1.0 - *(float *)&ShieldBlastDamageProtection);
                    }
                  }
                  if ( RadiusDamageFromPos_Internal <= 0.0 )
                  {
                    v14 = attackera;
                  }
                  else
                  {
                    v52 = v34->r.currentOrigin.v[1] - origin->v[1];
                    dir.v[0] = v34->r.currentOrigin.v[0] - origin->v[0];
                    v53 = v34->r.currentOrigin.v[2] - origin->v[2];
                    v54 = RadiusDamageFromPos_Internal * v44;
                    dir.v[1] = v52;
                    dir.v[2] = v53 + 24.0;
                    if ( (float)(RadiusDamageFromPos_Internal * v44) <= 0.0 || (v55 = 1, v54 >= 1.0) )
                      v55 = (int)v54;
                    if ( G_Utils_IsClientOrAgent(v34) && v48 > 0.0 )
                    {
                      v56 = mod;
                      ignoreEnts = v55;
                      v14 = attackera;
                      G_CombatMP_ShieldNotifyAndDamageInternal(v34, inflictor, attackera, &dir, origin, ignoreEnts, 133, mod, r_weapon, isAlternate, 0);
                    }
                    else
                    {
                      v56 = mod;
                      extraParams = 0;
                      ignoreEntsa = v55;
                      v14 = attackera;
                      G_CombatMP_Damage_Internal(v34, inflictor, attackera, &dir, origin, ignoreEntsa, 5, mod, r_weapon, isAlternate, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, &extraParams);
                    }
                    vehicle = v34->vehicle;
                    if ( vehicle )
                    {
                      v58 = LODWORD(dir.v[0]);
                      *(float *)&v58 = fsqrt((float)((float)(*(float *)&v58 * *(float *)&v58) + (float)(dir.v[1] * dir.v[1])) + (float)(dir.v[2] * dir.v[2]));
                      _XMM4 = v58;
                      __asm
                      {
                        vcmpless xmm0, xmm4, cs:__real@80000000
                        vblendvps xmm0, xmm4, xmm11, xmm0
                      }
                      dir.v[0] = dir.v[0] * (float)(1.0 / *(float *)&_XMM0);
                      dir.v[2] = dir.v[2] * (float)(1.0 / *(float *)&_XMM0);
                      dir.v[1] = dir.v[1] * (float)(1.0 / *(float *)&_XMM0);
                      if ( *(float *)&v58 > 0.001 )
                        G_Vehicle_Knockback(vehicle, &dir, v56, v43, NULL);
                    }
                  }
                }
              }
            }
          }
        }
        v33 = (unsigned int)(v69 + 1);
        v69 = v33;
      }
      while ( (unsigned int)v33 < collectedEnts.count );
      v13 = damageRangeInfoa;
    }
    G_Glass_RadiusDamage(origin, *(float *)&_XMM12, coneAngleCos, coneDirectiona, v13->innerDamage, v13->outerDamage);
    ScriptableSv_RadiusDamage(inflictor, v14, r_weapon, isAlternate, origin, *(const float *)&_XMM12, v13->innerDamage, v13->outerDamage, mod, runOcclusionTraces);
  }
}

/*
==============
GCombatMP::ShieldNotifyAndDamage
==============
*/
char GCombatMP::ShieldNotifyAndDamage(GCombatMP *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *r_weapon, bool isAlternate, int timeOffset)
{
  G_CombatMP_ShieldNotifyAndDamageInternal(targ, inflictor, attacker, dir, point, damage, dFlags, mod, r_weapon, isAlternate, timeOffset);
  return 1;
}

