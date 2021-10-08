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
int GCombatMP::CalcVehicleImpactDamage(GCombatMP *this, const Vehicle *veh, const VehicleDef *vehDef, gentity_s *vehEnt, const float vehicleSpeed, const gentity_s *receiver)
{
  bool v18; 
  bool v19; 
  int IsAgentScripted; 
  int v26; 
  int result; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = receiver;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = vehDef;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0C8h+var_88], xmm13
  }
  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1783, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  v18 = _RDI == NULL;
  if ( !_RDI )
  {
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1784, ASSERT_TYPE_ASSERT, "( vehDef )", (const char *)&queryFormat, "vehDef");
    v18 = !v19;
    if ( v19 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm7, dword ptr [rdi+0C4h]
  }
  if ( v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1785, ASSERT_TYPE_ASSERT, "( vehDef->collisionSpeed )", (const char *)&queryFormat, "vehDef->collisionSpeed") )
    __debugbreak();
  IsAgentScripted = SV_IsAgentScripted(receiver);
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm0, dword ptr [rdi+0EF0h]; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  v26 = IsAgentScripted;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm13, xmm0 }
  if ( v26 )
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0EECh]
      vmulss  xmm6, xmm0, cs:__real@418ccccd
    }
  }
  __asm
  {
    vmovss  xmm9, dword ptr [rdi+0EE8h]
    vmovss  xmm0, dword ptr [rdi+0C0h]
    vmaxss  xmm11, xmm6, dword ptr [rdi+0C4h]
    vmaxss  xmm12, xmm0, xmm9
    vmovaps xmm10, xmm8
  }
  if ( !_RDI->collisionDamageIgnoresImpactAngle )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+130h]
      vsubss  xmm5, xmm0, dword ptr [rsi+130h]
      vmovss  xmm1, dword ptr [rbp+134h]
      vsubss  xmm4, xmm1, dword ptr [rsi+134h]
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm2, xmm4, xmm4
      vaddss  xmm1, xmm2, xmm0
      vsqrtss xmm3, xmm1, xmm1
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
      vdivss  xmm3, xmm8, xmm0
      vmulss  xmm1, xmm4, xmm3
      vmulss  xmm2, xmm1, dword ptr [rax+4]
      vmulss  xmm0, xmm5, xmm3
      vmulss  xmm1, xmm0, dword ptr [rax]
      vaddss  xmm10, xmm2, xmm1
      vandps  xmm10, xmm10, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
  }
  __asm
  {
    vmovss  xmm0, [rsp+0C8h+vehicleSpeed]
    vcomiss xmm0, xmm6
  }
  if ( _RDI->collisionDamageIgnoresImpactAngle )
  {
    __asm
    {
      vcomiss xmm0, xmm11
      vmulss  xmm0, xmm10, xmm12
      vcvttss2si eax, xmm0
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm9, xmm13
      vmulss  xmm1, xmm0, xmm10
      vcvttss2si eax, xmm1
    }
  }
  _R11 = &v66;
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
  return result;
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

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+88h+var_28], xmm0
    vmovss  dword ptr [rsp+88h+var_28+4], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  dword ptr [rsp+88h+var_28+8], xmm0
  }
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
  gentity_s *v13; 
  gagent_s *agent; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  unsigned int pm_type; 
  unsigned __int8 v18; 
  bool v19; 
  unsigned int v20; 
  __int64 v21; 
  int v22; 
  unsigned int v23; 
  bool v24; 
  gentity_s *v25; 
  const vec3_t *v26; 
  unsigned int *RandomSeed; 
  GHandler *Handler; 
  int v29; 
  playerState_s *p_playerState; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v32; 
  int v33; 
  int v34; 
  gentity_s *v35; 
  SvPersistentGlobals *v36; 
  int number; 
  unsigned int v38; 
  char v44; 
  char v45; 
  gagent_s *v46; 
  __int64 v47; 
  unsigned int *holdrand; 
  int holdranda; 
  Weapon *v50; 
  __int64 v51; 
  bool v52; 
  vec3_t *v53; 
  AIAgentInterface v54; 
  AIAgentInterface *v55; 
  int outDuration; 
  gentity_s *inflictora; 
  gentity_s *attackera; 
  int damagea; 

  damagea = damage;
  attackera = attacker;
  inflictora = (gentity_s *)inflictor;
  v13 = attacker;
  outDuration = 0;
  _RDI = self;
  SV_InitMP_CheckThread();
  if ( !_RDI->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1152, ASSERT_TYPE_ASSERT, "(self->agent)", (const char *)&queryFormat, "self->agent") )
    __debugbreak();
  agent = _RDI->agent;
  if ( !Com_GetServerDObjForEntnum(agent->playerState.clientNum) )
  {
    Agent_Free(_RDI);
    return;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&agent->playerState.pm_flags, ACTIVE, 0x16u) )
    *(_QWORD *)agent->playerState.velocity.v = 0i64;
  if ( !SV_IsAgentScripted(_RDI) )
  {
    p_otherFlags = &agent->playerState.otherFlags;
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&agent->playerState.otherFlags, (POtherFlagsMP)33) || agent->playerState.pm_type > 1u && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&agent->playerState.otherFlags, ACTIVE, 0xBu) )
      return;
LABEL_32:
    v19 = despawn;
    if ( despawn )
      _RDI->health = 0;
    SV_BotEntityDied(_RDI);
    v20 = tls_index;
    v21 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64);
    if ( !v21 )
      goto LABEL_113;
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    if ( v21 != *(_QWORD *)&GStatic::ms_gameStatics )
    {
LABEL_113:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1216, ASSERT_TYPE_ASSERT, "(BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == GStatic::GetGameStatics()))", "%s\n\tEntering server game agent processing without a valid client game state", "BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == GStatic::GetGameStatics())") )
        __debugbreak();
    }
    v22 = meansOfDeath;
    if ( v19 )
    {
      v23 = 0;
    }
    else
    {
      if ( v13->s.eType == ET_TURRET && EntHandle::isDefined(&v13->r.ownerNum) )
      {
        v13 = EntHandle::ent(&v13->r.ownerNum);
        attackera = v13;
      }
      G_CombatMP_GrenadeDrop(_RDI, v22, 1);
      G_PlayerSpawnPoints_LogDeathEvent(_RDI, v13);
      GScr_AddEntity(v13);
      v23 = 1;
    }
    GScr_Notify(_RDI, scr_const.death, v23);
    GScr_Notify(_RDI, scr_const.death_or_disconnect, 0);
    if ( agent->playerState.pm_type > 1u && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0xBu) )
    {
      LODWORD(holdrand) = agent->playerState.pm_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1238, ASSERT_TYPE_SANITY, "( ( (playerState->pm_type == PM_NORMAL_LINKED) || (playerState->pm_type == PM_NORMAL) || playerState->otherFlags.TestFlag( POtherFlagsCommon::LASTSTAND ) ) )", "( playerState->pm_type ) = %i", holdrand) )
        __debugbreak();
    }
    if ( v19 )
    {
      v35 = inflictora;
LABEL_68:
      G_Vehicle_ClearPlayerVehicles(_RDI->s.number, &agent->playerState);
      if ( BYTE1(SvGameGlobals::ms_allocatedType) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_persistent_globals_mp.h", 166, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      if ( !SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 72, ASSERT_TYPE_ASSERT, "(ms_svPersistent)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_svPersistent") )
        __debugbreak();
      if ( !BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 73, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
        __debugbreak();
      v36 = SvPersistentGlobals::ms_svPersistent;
      number = _RDI->s.number;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( number < (int)ComCharacterLimits::ms_gameData.m_clientCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v53) = ComCharacterLimits::ms_gameData.m_clientCount;
        LODWORD(v51) = number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 175, ASSERT_TYPE_ASSERT, "( entityIndex ) >= ( ComCharacterLimits::GetAgentEntityIndexOffset() )", "%s >= %s\n\t%i, %i", "entityIndex", "ComCharacterLimits::GetAgentEntityIndexOffset()", v51, v53) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v38 = number - ComCharacterLimits::ms_gameData.m_clientCount;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v38 >= ComCharacterLimits::ms_gameData.m_agentCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v50) = ComCharacterLimits::ms_gameData.m_agentCount;
        LODWORD(holdrand) = v38;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 178, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", holdrand, v50) )
          __debugbreak();
      }
      SV_AgentKilled((agent_t *)(*(_QWORD *)&v36[2].m_skelMemSize + 280i64 * (int)v38));
      if ( !v19 )
      {
        GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RDI->s.lerp.eFlags, ACTIVE, 0x10u);
        _RDI->r.currentAngles.v[2] = 0.0;
        G_Combat_LookAtKiller(_RDI, v35, v13, &agent->playerState);
        agent->playerState.viewangles.v[0] = _RDI->r.currentAngles.v[0];
        agent->playerState.viewangles.v[1] = _RDI->r.currentAngles.v[1];
        agent->playerState.viewangles.v[2] = _RDI->r.currentAngles.v[2];
        _RDI->s.loopSound = 0;
        _RAX = BG_Suit_GetBounds(agent->playerState.suitIndex, PM_EFF_STANCE_PRONE);
        __asm
        {
          vxorps  xmm2, xmm2, xmm2
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rdi+100h], xmm0
          vmovsd  xmm1, qword ptr [rax+10h]
          vshufps xmm0, xmm1, xmm1, 55h ; 'U'
          vcomiss xmm2, xmm0
          vmovsd  qword ptr [rdi+110h], xmm1
        }
        if ( !(v44 | v45) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1302, ASSERT_TYPE_ASSERT, "(self->r.box.halfSize[2] >= 0.0f)", (const char *)&queryFormat, "self->r.box.halfSize[2] >= 0.0f") )
          __debugbreak();
      }
      SV_LinkEntity(_RDI);
      v46 = _RDI->agent;
      _RDI->health = 0;
      v46->lastDeathTime = level.time;
      if ( SV_IsAgentScripted(_RDI) )
        _RDI->handler = 28;
      v47 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v20) + 272i64);
      if ( !v47 )
        goto LABEL_114;
      if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
        __debugbreak();
      if ( v47 != *(_QWORD *)&GStatic::ms_gameStatics )
      {
LABEL_114:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1324, ASSERT_TYPE_ASSERT, "(BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == GStatic::GetGameStatics()))", "%s\n\tFinished server game agent processing without a valid client game state", "BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == GStatic::GetGameStatics())") )
          __debugbreak();
      }
      return;
    }
    v24 = isAlternate;
    v25 = inflictora;
    G_CombatMP_SetAnimDamageTypeCondition(agent->playerState.clientNum, _RDI, inflictora, v22, r_weapon, isAlternate);
    G_CombatMP_SetAnimHitLocationCondition(agent->playerState.clientNum, _RDI, hitLoc);
    v26 = vDir;
    G_CombatMP_SetAnimHitDirectionCondition(agent->playerState.clientNum, _RDI, vDir, &agent->playerState, v22);
    G_CombatMP_SetAnimMoveDirectionCondition(agent->playerState.clientNum, _RDI, &agent->playerState);
    G_CombatMP_SetVehicleOccupancyConditions(agent->playerState.clientNum, _RDI);
    if ( v22 == 8 )
    {
      G_CombatMP_SetMeleeReactionConditions(agent->playerState.clientNum, v25);
    }
    else if ( v22 == 21 )
    {
      outDuration = G_Execution_GetExecutionAnimDurationRemaining(_RDI, level.time);
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(p_otherFlags, GameModeFlagValues::ms_mpValue, 0x33u);
LABEL_56:
      agent->playerState.pm_type = (agent->playerState.pm_type == 1) + 7;
      agent->playerState.stats[0] = 0;
      AIAgentInterface::AIAgentInterface(&v54);
      v55 = NULL;
      v54.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      if ( SV_IsAgentScripted(_RDI) )
      {
        ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(_RDI);
        if ( ScriptedAgentInfo )
        {
          v55 = &v54;
          AINewAgentInterface::SetAgent((AINewAgentInterface *)&v54, ScriptedAgentInfo);
        }
      }
      v32 = v55;
      v33 = psTimeOffset;
      v34 = damageFlags;
      if ( v55 )
      {
        if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1277, ASSERT_TYPE_ASSERT, "(vDir)", (const char *)&queryFormat, "vDir") )
          __debugbreak();
        v32->Die(v32, inflictora, attackera, damagea, v34, v22, r_weapon, v24, v26, hitLoc, v33);
      }
      v52 = v24;
      v13 = attackera;
      holdranda = v22;
      v35 = inflictora;
      Scr_AgentKilled(_RDI, inflictora, attackera, damagea, v34, holdranda, r_weapon, v52, v26, hitLoc, v33, outDuration);
      v19 = despawn;
      v20 = tls_index;
      goto LABEL_68;
    }
    if ( (*(_BYTE *)&_RDI->s.animInfo.selectAnim & 1) == 0 )
    {
      RandomSeed = G_GetRandomSeed();
      Handler = GHandler::getHandler();
      v29 = BG_AnimScriptEvent(Handler, &agent->playerState, ANIM_ET_DEATH, 0, 1, RandomSeed);
      p_playerState = &_RDI->agent->playerState;
      outDuration = v29;
      GPlayerASM_ForceUpdateEvent(p_playerState, MOVEMENT, 1, &outDuration);
    }
    goto LABEL_56;
  }
  if ( agent->playerState.pm_type > 1u && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&agent->playerState.otherFlags, ACTIVE, 0xBu) )
    Com_Printf(18, "G_CombatMP_AgentDie: Agent(%d) has unexpected pm_type (%d)!\n", (unsigned int)_RDI->s.number, (unsigned int)agent->playerState.pm_type);
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
  v18 = _RDI->handler;
  if ( v18 != 28 )
  {
    Com_Printf(18, "G_CombatMP_AgentDie: Agent(%d) pm_type is PM_DEAD/PM_DEAD_LINKED and handler is incorrect: (%d)!\n", (unsigned int)_RDI->s.number, v18);
    if ( _RDI->handler != 28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1196, ASSERT_TYPE_ASSERT, "(self->handler == ENT_HANDLER_AGENT_DEAD)", (const char *)&queryFormat, "self->handler == ENT_HANDLER_AGENT_DEAD") )
      __debugbreak();
  }
  if ( _RDI->handler != 28 )
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
  const gentity_s *v18; 
  gagent_s *agent; 
  bool v26; 
  gentity_s *v27; 
  int v28; 
  bool v29; 
  ai_scripted_t *AIScriptedData; 
  weapType_t WeaponType; 
  bool v34; 
  bool v35; 
  unsigned __int16 weaponIdx; 
  __int64 meansOfDeath; 
  Weapon *v47; 
  unsigned int NumWeapons; 
  bool v49; 
  const gentity_s *v50; 
  vec3_t *vDir; 
  vec3_t *vPoint; 
  gentity_s *attackera; 
  Weapon weapon; 

  _RBX = r_weapon;
  v18 = inflictor;
  vPoint = (vec3_t *)point;
  vDir = (vec3_t *)dir;
  attackera = attacker;
  v50 = inflictor;
  if ( SV_UserMoveWorkersMP_IsInWorkerContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1516, ASSERT_TYPE_ASSERT, "( !SV_UserMoveWorkersMP_IsInWorkerContext() )", (const char *)&queryFormat, "!SV_UserMoveWorkersMP_IsInWorkerContext()") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targ->agent->playerState.eFlags, ACTIVE, 0x10u) )
  {
    _ER14 = damage;
    if ( damage > 0 && hitLoc != HITLOC_SHIELD )
    {
      agent = targ->agent;
      if ( agent->playerState.pm_type != 7 && (agent->flags & 0x40) == 0 )
      {
        __asm
        {
          vmovups ymm2, ymmword ptr [rbx]
          vmovups xmm0, xmmword ptr [rbx+20h]
          vmovsd  xmm1, qword ptr [rbx+30h]
        }
        *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&r_weapon->weaponCamo;
        __asm { vmovd   eax, xmm2 }
        v26 = isAlternate;
        v49 = isAlternate;
        __asm
        {
          vmovups ymmword ptr [rsp+138h+weapon.weaponIdx], ymm2
          vmovups xmmword ptr [rsp+138h+weapon.attachmentVariationIndices+5], xmm0
          vmovsd  qword ptr [rsp+138h+weapon.attachmentVariationIndices+15h], xmm1
        }
        if ( (_WORD)_EAX )
          goto LABEL_15;
        if ( v18 )
        {
          v27 = (gentity_s *)v18;
        }
        else
        {
          if ( !attacker )
            goto LABEL_15;
          v27 = attacker;
        }
        G_CombatMP_GetWeaponForEntity(v27, &weapon, &v49);
        v26 = v49;
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
        v28 = dflags;
        if ( (dflags & 1) != 0 )
          GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&targ->agent->playerState.weapCommon.weapFlags, ACTIVE, 0x10u);
        if ( mod != 8 )
        {
          v29 = targ->sentient == NULL;
          __asm { vmovaps [rsp+138h+var_58], xmm6 }
          if ( v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1573, ASSERT_TYPE_ASSERT, "(targ->sentient)", (const char *)&queryFormat, "targ->sentient") )
            __debugbreak();
          if ( !targ->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1482, ASSERT_TYPE_ASSERT, "(targ->agent)", (const char *)&queryFormat, "targ->agent") )
            __debugbreak();
          if ( SV_IsAgentScripted(targ) )
          {
            AIScriptedData = Agent_GetAIScriptedData(targ);
            if ( AIScriptedData )
            {
              WeaponType = BG_GetWeaponType(&weapon, isAlternate);
              v34 = BG_GetWeaponType(&weapon, isAlternate) == WEAPTYPE_GRENADE;
              v35 = BG_GetWeaponType(&weapon, isAlternate) == WEAPTYPE_PROJECTILE;
              if ( WeaponType == WEAPTYPE_BULLET || v34 || v35 )
              {
                _RBX = AIScriptedData->unitType;
                if ( (unsigned int)_RBX >= 7 )
                {
                  LODWORD(v47) = 7;
                  LODWORD(meansOfDeath) = AIScriptedData->unitType;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1500, ASSERT_TYPE_ASSERT, "(unsigned)( unittype ) < (unsigned)( MAX_AI_UNITTYPES )", "unittype doesn't index MAX_AI_UNITTYPES\n\t%i not in [0, %i)", meansOfDeath, v47) )
                    __debugbreak();
                }
                weaponIdx = weapon.weaponIdx;
                if ( weapon.weaponIdx > bg_lastParsedWeaponIndex )
                {
                  LODWORD(v47) = bg_lastParsedWeaponIndex;
                  LODWORD(meansOfDeath) = weapon.weaponIdx;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", meansOfDeath, v47) )
                    __debugbreak();
                }
                if ( !bg_weaponDefs[weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
                  __debugbreak();
                _RAX = bg_weaponDefs[weaponIdx];
                __asm { vmovss  xmm6, dword ptr [rax+rbx*4+0D38h] }
              }
              else
              {
                __asm { vmovss  xmm6, cs:__real@3f800000 }
              }
              v28 = dflags;
            }
            else
            {
              __asm { vmovss  xmm6, cs:__real@3f800000 }
            }
            v18 = v50;
          }
          else
          {
            __asm { vmovss  xmm6, cs:__real@3f800000 }
          }
          *(float *)&_XMM0 = G_CombatMP_GetWeaponHitLocationMultiplier(hitLoc, &weapon, v26, targ->sentient->locDamageTableIndex);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, r14d
            vmulss  xmm2, xmm1, xmm6
            vmovaps xmm6, [rsp+138h+var_58]
            vmulss  xmm0, xmm0, xmm2
            vcvttss2si r14d, xmm0
          }
        }
        if ( _ER14 <= 0 )
          _ER14 = 1;
        Scr_AgentDamage(targ, v18, attackera, _ER14, v28, mod, &weapon, v26, vPoint, vDir, hitLoc, timeOffset, modelIndex, partName);
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
  gclient_s *client; 
  bool v25; 
  const gentity_s *v27; 
  __int64 meansOfDeath; 
  unsigned int NumWeapons; 
  bool v33; 
  GExtraDamageParams *v34; 
  vec3_t *vDir; 
  vec3_t *vPoint; 
  gentity_s *attackera; 
  __int64 v38; 
  int v39; 
  __int64 v40; 
  Weapon weapon; 

  v38 = -2i64;
  vDir = (vec3_t *)dir;
  attackera = attacker;
  vPoint = (vec3_t *)point;
  _RSI = r_weapon;
  v34 = (GExtraDamageParams *)extraParams;
  if ( SV_UserMoveWorkersMP_IsInWorkerContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1414, ASSERT_TYPE_ASSERT, "( !SV_UserMoveWorkersMP_IsInWorkerContext() )", (const char *)&queryFormat, "!SV_UserMoveWorkersMP_IsInWorkerContext()") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targ->client->ps.eFlags, ACTIVE, 0x10u) )
  {
    _EBX = damage;
    if ( damage > 0 && hitLoc != HITLOC_SHIELD && !G_Vehicle_IsPlayerProtected(targ) )
    {
      client = targ->client;
      if ( (client->flags & 3) == 0 && !client->mpviewer && client->sess.connected == CON_CONNECTED && client->ps.pm_type != 7 )
      {
        v39 = 40;
        v40 = 0i64;
        SV_Profile_BeginEvent(SVPROF_CLIENT_DAMAGED);
        __asm
        {
          vmovups ymm2, ymmword ptr [rsi]
          vmovups ymmword ptr [rsp+158h+weapon.weaponIdx], ymm2
          vmovups xmm0, xmmword ptr [rsi+20h]
          vmovups xmmword ptr [rsp+158h+weapon.attachmentVariationIndices+5], xmm0
          vmovsd  xmm1, qword ptr [rsi+30h]
          vmovsd  qword ptr [rsp+158h+weapon.attachmentVariationIndices+15h], xmm1
        }
        *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&r_weapon->weaponCamo;
        v25 = isAlternate;
        v33 = isAlternate;
        __asm { vmovd   eax, xmm2 }
        if ( (_WORD)_EAX )
          goto LABEL_18;
        if ( inflictor )
        {
          v27 = inflictor;
        }
        else
        {
          if ( !attacker )
            goto LABEL_18;
          v27 = attacker;
        }
        G_CombatMP_GetWeaponForEntity(v27, &weapon, &v33);
        v25 = v33;
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
          *(float *)&_XMM0 = G_CombatMP_GetWeaponHitLocationMultiplier(hitLoc, &weapon, v25, targ->sentient->locDamageTableIndex);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, ebx
            vmulss  xmm0, xmm0, xmm1
            vcvttss2si ebx, xmm0
          }
        }
        if ( _EBX <= 0 )
          _EBX = 1;
        if ( (dflags & 1) != 0 )
          GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&targ->client->ps.weapCommon.weapFlags, ACTIVE, 0x10u);
        Scr_PlayerDamage(targ, inflictor, attackera, _EBX, dflags, mod, &weapon, v25, vPoint, vDir, hitLoc, timeOffset, modelIndex, partName, v34, damage);
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
  const dvar_t *v21; 
  int v34; 

  __asm { vmovaps [rsp+78h+var_28], xmm6 }
  _RBX = ps;
  _R14 = direction;
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 461, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 462, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vmovss  xmm6, cs:__real@3e99999a }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0) )
  {
    __asm { vmovss  xmm1, cs:__real@3ca3d70a }
  }
  else
  {
    _EAX = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 1u);
    _ECX = 0;
    __asm
    {
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@3e19999a
      vblendvps xmm1, xmm1, xmm6, xmm2
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edi
    vmulss  xmm1, xmm0, xmm1
    vcvttss2si edi, xmm1
  }
  if ( _EDI <= 60 )
  {
    if ( !_EDI )
      return;
  }
  else
  {
    _EDI = 60;
  }
  if ( !BG_IsTurretActive(_RBX) )
  {
    v21 = DVARFLT_g_knockback;
    if ( !DVARFLT_g_knockback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_knockback") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    __asm
    {
      vmovss  xmm2, dword ptr [r14+4]
      vmovss  xmm3, dword ptr [r14+8]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edi
      vmulss  xmm0, xmm0, dword ptr [rbp+28h]
      vmulss  xmm4, xmm0, cs:__real@3b83126f
      vmulss  xmm0, xmm4, dword ptr [r14]
      vaddss  xmm1, xmm0, dword ptr [rbx+3Ch]
      vmovss  dword ptr [rbx+3Ch], xmm1
      vmulss  xmm2, xmm4, xmm2
      vaddss  xmm0, xmm2, dword ptr [rbx+40h]
      vmovss  dword ptr [rbx+40h], xmm0
      vmulss  xmm1, xmm4, xmm3
      vaddss  xmm2, xmm1, dword ptr [rbx+44h]
      vmovss  dword ptr [rbx+44h], xmm2
    }
    if ( !_RBX->pm_time )
    {
      v34 = 2 * _EDI;
      if ( 2 * _EDI >= 50 )
      {
        if ( v34 > 200 )
          v34 = 200;
      }
      else
      {
        v34 = 50;
      }
      _RBX->pm_time = v34;
      _RBX->pm_flags.m_flags[0] |= 0x2000u;
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
  int v19; 
  GCombat *v24; 
  bool v29; 
  bool IndexForEntity; 
  vec3_t *v32; 
  bool v33; 
  __int16 EntityIndex; 
  __int16 v35; 
  unsigned int v53; 
  int v54; 
  unsigned int v55; 
  const char *v56; 
  const char *WeaponBaseName; 
  scr_string_t script_classname; 
  const char *v59; 
  const char *v60; 
  int health; 
  const char *v62; 
  vec3_t *v63; 
  vec3_t *v64; 
  int v65; 
  __int16 v66; 
  void (__fastcall *pain)(gentity_s *, gentity_s *, int, const vec3_t *, const int, const vec3_t *, const hitLocation_t, const Weapon *, bool); 
  char *fmt; 
  vec3_t *v69; 
  unsigned int NumWeapons; 
  int dflags; 
  __int64 v72; 
  scr_string_t v73; 
  bool v74; 
  vec3_t *hitPos; 
  GExtraDamageParams *v76; 
  unsigned int scriptableIndex; 
  int v78; 
  vec3_t *dira; 
  const char *v80; 
  const char *v81; 
  vec3_t *v82; 
  const char *v83; 
  int v84; 
  Weapon weapon; 

  _R13 = dir;
  v19 = mod;
  _RBX = r_weapon;
  hitPos = (vec3_t *)point;
  v82 = (vec3_t *)surfaceNormal;
  v76 = (GExtraDamageParams *)extraParams;
  dira = (vec3_t *)dir;
  v78 = mod;
  if ( SV_UserMoveWorkersMP_IsInWorkerContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1614, ASSERT_TYPE_ASSERT, "( !SV_UserMoveWorkersMP_IsInWorkerContext() )", (const char *)&queryFormat, "!SV_UserMoveWorkersMP_IsInWorkerContext()") )
    __debugbreak();
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  v24 = GCombat::ms_gCombatSystem;
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1617, ASSERT_TYPE_ASSERT, "(combatSystem)", (const char *)&queryFormat, "combatSystem") )
    __debugbreak();
  if ( GCombat::QueuedDamageEnabled(v24) )
  {
    GCombat::QueueDamageInstance(v24, targ, inflictor, attacker, _R13, hitPos, damage, dFlags, mod, r_weapon, isAlternate, hitLoc, timeOffset, modelIndex, partName, v82, v76);
    return 1i64;
  }
  else
  {
    if ( targ->client )
    {
      G_CombatMP_DamageClient(targ, inflictor, attacker, _R13, hitPos, damage, dFlags, mod, r_weapon, isAlternate, hitLoc, timeOffset, modelIndex, partName, v76);
    }
    else if ( targ->agent )
    {
      G_CombatMP_DamageAgent(targ, inflictor, attacker, _R13, hitPos, damage, dFlags, mod, r_weapon, isAlternate, hitLoc, timeOffset, modelIndex, partName);
    }
    else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targ->s.lerp.eFlags, ACTIVE, 0x10u) && hitLoc != HITLOC_SHIELD )
    {
      if ( !inflictor )
        inflictor = g_entities + 2046;
      if ( !attacker )
        attacker = g_entities + 2046;
      __asm
      {
        vmovups ymm2, ymmword ptr [rbx]
        vmovups xmm0, xmmword ptr [rbx+20h]
        vmovsd  xmm1, qword ptr [rbx+30h]
      }
      v29 = isAlternate;
      *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&r_weapon->weaponCamo;
      __asm { vmovd   eax, xmm2 }
      v74 = isAlternate;
      __asm
      {
        vmovups ymmword ptr [rbp+70h+weapon.weaponIdx], ymm2
        vmovups xmmword ptr [rbp+70h+weapon.attachmentVariationIndices+5], xmm0
        vmovsd  qword ptr [rbp+70h+weapon.attachmentVariationIndices+15h], xmm1
      }
      if ( !(_WORD)_EAX )
      {
        G_CombatMP_GetWeaponForEntity(inflictor, &weapon, &v74);
        v29 = v74;
      }
      if ( weapon.weaponIdx >= BG_GetNumWeapons() )
      {
        NumWeapons = BG_GetNumWeapons();
        LODWORD(v69) = weapon.weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1665, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.weaponIdx ) < (unsigned)( BG_GetNumWeapons() )", "weapon.weaponIdx doesn't index BG_GetNumWeapons()\n\t%i not in [0, %i)", v69, NumWeapons) )
          __debugbreak();
      }
      if ( (targ->flags.m_flags[0] & 1) == 0 && (!EntHandle::isDefined(&targ->r.ownerNum) || (EntHandle::ent(&targ->r.ownerNum)->flags.m_flags[0] & 1) == 0) )
      {
        IndexForEntity = ScriptableSv_TryGetIndexForEntity(targ, &scriptableIndex);
        v32 = hitPos;
        if ( IndexForEntity )
          ScriptableSv_Damage(inflictor, attacker, scriptableIndex, hitPos, _R13, mod, &weapon, v29, partName, damage, dFlags, modelIndex);
        if ( targ->vehicle || G_Vehicle_IsSuspended(targ) )
        {
          G_Vehicle_Damage(targ, inflictor, attacker, _R13, v32, damage, dFlags, mod, &weapon, v29, hitLoc, modelIndex, partName, timeOffset);
        }
        else
        {
          v33 = targ->s.eType == ET_COVERWALL;
          LODWORD(v76) = 0;
          if ( v33 )
            G_CoverWall_Damage(targ, inflictor, attacker, _R13, v32, damage, dFlags, mod, &weapon, v29, 0);
          EntityIndex = G_GetEntityIndex(targ);
          if ( !G_IsEntityInUse(EntityIndex) )
          {
            LODWORD(v69) = targ->s.number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1697, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( G_GetEntityIndex( targ ) ) ) )", "( targ->s.number ) = %i", v69) )
              __debugbreak();
          }
          v35 = G_GetEntityIndex(attacker);
          if ( !G_IsEntityInUse(v35) )
          {
            LODWORD(v69) = attacker->s.number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1698, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( G_GetEntityIndex( attacker ) ) ) )", "( attacker->s.number ) = %i", v69) )
              __debugbreak();
          }
          if ( _R13 )
          {
            __asm
            {
              vmovss  xmm5, dword ptr [r13+4]
              vmovss  xmm4, dword ptr [r13+0]
              vmulss  xmm0, xmm5, xmm5
              vmulss  xmm1, xmm4, xmm4
              vaddss  xmm2, xmm1, xmm0
              vmovaps [rsp+180h+var_50], xmm6
              vmovss  xmm6, dword ptr [r13+8]
              vmulss  xmm1, xmm6, xmm6
              vaddss  xmm2, xmm2, xmm1
              vmovss  xmm1, cs:__real@3f800000
              vsqrtss xmm3, xmm2, xmm2
              vcmpless xmm0, xmm3, cs:__real@80000000
              vblendvps xmm0, xmm3, xmm1, xmm0
              vdivss  xmm2, xmm1, xmm0
              vmulss  xmm0, xmm4, xmm2
              vmovss  [rbp+70h+var_A8], xmm0
              vmulss  xmm1, xmm5, xmm2
              vmulss  xmm0, xmm6, xmm2
              vmovaps xmm6, [rsp+180h+var_50]
              vmovss  [rbp+70h+var_A4], xmm1
            }
          }
          else
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vmovss  [rbp+70h+var_A8], xmm0
              vmovss  [rbp+70h+var_A4], xmm0
            }
          }
          v53 = targ->flags.m_flags[0];
          v54 = 1;
          __asm { vmovss  [rbp+70h+var_A0], xmm0 }
          if ( damage >= 1 )
            v54 = damage;
          v55 = v54;
          if ( (v53 & 2) != 0 && targ->health - v54 <= 0 )
            v55 = targ->health - 1;
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_g_debugDamage, "g_debugDamage") )
          {
            v56 = (char *)&queryFormat.fmt + 3;
            if ( (targ->flags.m_flags[0] & 2) != 0 )
              v56 = "demigod";
            v83 = v56;
            if ( weapon.weaponIdx )
              WeaponBaseName = BG_GetWeaponBaseName(&weapon, v29);
            else
              WeaponBaseName = "none";
            v80 = WeaponBaseName;
            if ( attacker )
            {
              script_classname = attacker->script_classname;
              LODWORD(v76) = attacker->s.number;
              v59 = SL_ConvertToString(script_classname);
            }
            else
            {
              v59 = "null";
            }
            v81 = v59;
            v60 = SL_ConvertToString(*g_combat_modNames[mod]);
            health = targ->health;
            v62 = SL_ConvertToString(targ->script_classname);
            LODWORD(v72) = (_DWORD)v76;
            LODWORD(v69) = v55;
            LODWORD(fmt) = health;
            Com_Printf(15, "$e%d(%s) take damage: orig_hp(%d) dam(%d)type(%s) attacker(%s$e%d) weapon(%s) %s\n", (unsigned int)targ->s.number, v62, fmt, v69, v60, v81, v72, v80, v83);
            v19 = v78;
          }
          v63 = v82;
          targ->health -= v55;
          v64 = hitPos;
          G_Combat_DamageNotify(scr_const.damage, targ, attacker, inflictor, dira, hitPos, v55, v19, dFlags, modelIndex, partName, &weapon, v29, v63);
          v65 = targ->health;
          if ( v65 > 0 )
          {
            pain = G_Main_GetEntHandlerList(targ)->pain;
            if ( pain )
            {
              LOBYTE(v73) = v29;
              pain(targ, attacker, v55, v64, v19, (const vec3_t *)&v84, hitLoc, &weapon, v73);
            }
          }
          else
          {
            if ( v65 < -999 )
              targ->health = -999;
            GScr_AddEntity(attacker);
            GScr_Notify(targ, scr_const.death, 1u);
            GScr_Notify(targ, scr_const.death_or_disconnect, 0);
            dira = (vec3_t *)G_Main_GetEntHandlerList(targ);
            if ( *(_QWORD *)dira[4].v )
            {
              if ( timeOffset < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1751, ASSERT_TYPE_ASSERT, "(timeOffset >= 0)", (const char *)&queryFormat, "timeOffset >= 0") )
                __debugbreak();
              LOBYTE(dflags) = v29;
              (*(void (__fastcall **)(gentity_s *, const gentity_s *, gentity_s *, _QWORD, int, int, Weapon *, int, int *, hitLocation_t, int))dira[4].v)(targ, inflictor, attacker, v55, dFlags, v19, &weapon, dflags, &v84, hitLoc, timeOffset);
            }
            v66 = G_GetEntityIndex(targ);
            G_IsEntityInUse(v66);
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
  unsigned __int8 *v25; 
  int v26; 
  const dvar_t *v33; 
  const dvar_t *v38; 
  const dvar_t *v49; 
  vec3_t *p_targetPosa; 
  __int64 v81; 
  const dvar_t *v82; 
  bool v83; 
  int IsAgentScripted; 
  int v89; 
  const dvar_t *v113; 
  const char *v114; 
  const dvar_t *v117; 
  const char *v118; 
  const dvar_t *v130; 
  const char *v136; 
  const DObj *ServerDObjForEnt; 
  bool Bool_Internal_DebugName; 
  char v208; 
  bool v209; 
  bool v243; 
  bool v270; 
  bool v289; 
  int *v330; 
  __int64 v331; 
  vec3_t *v332; 
  int *v335; 
  float fmt; 
  float fmta; 
  vec3_t *v363; 
  vec3_t *v364; 
  vec3_t *v365; 
  double v366; 
  double v367; 
  double v368; 
  unsigned __int8 *v369; 
  unsigned __int8 *v370; 
  unsigned __int8 *v371; 
  double v372; 
  double v373; 
  double v374; 
  int passEntityNum1; 
  Bounds box; 
  Bounds outOrigin; 
  tmat33_t<vec3_t> axis; 
  vec3_t targetPosa; 
  int v396; 
  char v397; 

  __asm { vmovaps [rsp+1F0h+var_D0], xmm15 }
  _RDI = centerPos;
  _R15 = bounds;
  _RSI = targ;
  v25 = priorityMap;
  if ( inflictor )
    passEntityNum1 = inflictor->s.number;
  else
    passEntityNum1 = 2047;
  v26 = 0;
  if ( detailTrace )
  {
    if ( !priorityMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1911, ASSERT_TYPE_ASSERT, "(priorityMap)", "%s\n\tGetRadiusDamageFromPos_Internal(): detail trace was requested but invalid priority map was provided.", "priorityMap") )
      __debugbreak();
  }
  else
  {
    v25 = NULL;
  }
  __asm
  {
    vmovaps [rsp+1F0h+var_40], xmm6
    vmovaps [rsp+1F0h+var_50], xmm7
    vmovaps [rsp+1F0h+var_60], xmm8
    vmovaps [rsp+1F0h+var_70], xmm9
    vmovaps [rsp+1F0h+var_80], xmm10
    vmovaps [rsp+1F0h+var_90], xmm11
    vmovaps [rsp+1F0h+var_A0], xmm12
    vmovaps [rsp+1F0h+var_B0], xmm13
    vmovaps [rsp+1F0h+var_C0], xmm14
    vmovss  xmm15, cs:__real@3f800000
  }
  if ( G_Utils_IsClientOrAgent(_RSI) )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rsi+138h]
      vmovss  xmm9, dword ptr [rsi+130h]
      vmovss  xmm14, dword ptr [rsi+134h]
      vmovss  [rbp+0F0h+var_E0], xmm6
    }
    _R15 = G_GetEntityPlayerState(_RSI);
    if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1931, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    __asm { vxorps  xmm13, xmm13, xmm13 }
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R15->otherFlags, ACTIVE, 0x1Bu) )
    {
      v33 = DCONST_DVARFLT_radius_damage_vehicle_player_top_offset;
      __asm
      {
        vmovss  xmm7, dword ptr [rsi+114h]
        vaddss  xmm9, xmm9, dword ptr [rsi+100h]
        vaddss  xmm14, xmm14, dword ptr [rsi+104h]
        vaddss  xmm6, xmm6, dword ptr [rsi+108h]
      }
      if ( !DCONST_DVARFLT_radius_damage_vehicle_player_top_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_vehicle_player_top_offset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v33);
      __asm { vsubss  xmm0, xmm7, dword ptr [r15+28h] }
      v38 = DCONST_DVARFLT_radius_damage_vehicle_player_bottom_offset;
      __asm
      {
        vmaxss  xmm0, xmm0, xmm13
        vaddss  xmm11, xmm6, xmm0
      }
      if ( !DCONST_DVARFLT_radius_damage_vehicle_player_bottom_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_vehicle_player_bottom_offset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v38);
      __asm
      {
        vsubss  xmm0, xmm7, dword ptr [r15+28h]
        vmaxss  xmm0, xmm0, xmm13
        vsubss  xmm6, xmm6, xmm0
        vmovaps xmm7, xmm9
        vmovss  [rbp+0F0h+var_E0], xmm6
        vmovss  dword ptr [rsp+1F0h+outOrigin], xmm7
        vmovss  dword ptr [rsp+1F0h+outOrigin+4], xmm14
        vmovss  dword ptr [rbp+0F0h+outOrigin+8], xmm11
        vmovaps xmm12, xmm14
      }
    }
    else if ( _R15->vehicleState.entity == 2047 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R15->otherFlags, ACTIVE, 1u) )
    {
      G_Client_GetEyePosition(_R15, &outOrigin.midPoint);
      __asm
      {
        vmovss  xmm11, dword ptr [rbp+0F0h+outOrigin+8]
        vmovss  xmm12, dword ptr [rsp+1F0h+outOrigin+4]
        vmovss  xmm7, dword ptr [rsp+1F0h+outOrigin]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm7, dword ptr [r15+30h]
        vmovss  dword ptr [rsp+1F0h+outOrigin], xmm7
        vmovss  xmm12, dword ptr [r15+34h]
        vmovss  dword ptr [rsp+1F0h+outOrigin+4], xmm12
        vmovss  xmm11, dword ptr [r15+38h]
        vmovss  dword ptr [rbp+0F0h+outOrigin+8], xmm11
      }
    }
    __asm { vmovss  xmm1, dword ptr [rdi+4] }
    v49 = DVARBOOL_radius_damage_debug;
    __asm
    {
      vsubss  xmm5, xmm1, xmm14
      vsubss  xmm0, xmm11, xmm6
      vmovss  xmm6, cs:__real@3f000000
      vmulss  xmm10, xmm0, xmm6
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm8, xmm0, xmm9
      vmulss  xmm0, xmm8, xmm8
      vmulss  xmm2, xmm5, xmm5
      vaddss  xmm1, xmm2, xmm0
      vsqrtss xmm3, xmm1, xmm1
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm15, xmm0
      vdivss  xmm4, xmm15, xmm0
      vaddss  xmm0, xmm7, xmm9
      vmulss  xmm9, xmm0, xmm6
      vaddss  xmm0, xmm11, [rbp+0F0h+var_E0]
      vmulss  xmm3, xmm0, xmm6
      vaddss  xmm1, xmm14, xmm12
      vmulss  xmm7, xmm1, xmm6
      vaddss  xmm6, xmm3, xmm10
      vmulss  xmm1, xmm4, xmm5
      vmulss  xmm5, xmm1, cs:__real@c1700000
      vmulss  xmm0, xmm4, xmm8
      vmulss  xmm4, xmm0, cs:__real@41700000
      vaddss  xmm1, xmm4, xmm7
      vaddss  xmm2, xmm9, xmm5
      vsubss  xmm0, xmm7, xmm4
      vmovss  [rbp+0F0h+var_120], xmm1
      vmovss  [rbp+0F0h+var_114], xmm1
      vsubss  xmm1, xmm9, xmm5
      vmovss  dword ptr [rbp+0F0h+targetPos+8], xmm3
      vsubss  xmm3, xmm3, xmm10
      vmovss  [rbp+0F0h+var_10C], xmm1
      vmovss  [rbp+0F0h+var_100], xmm1
      vmovss  dword ptr [rbp+0F0h+targetPos], xmm9
      vmovss  dword ptr [rbp+0F0h+targetPos+4], xmm7
      vmovss  [rbp+0F0h+var_124], xmm2
      vmovss  [rbp+0F0h+var_11C], xmm6
      vmovss  [rbp+0F0h+var_118], xmm2
      vmovss  [rbp+0F0h+var_110], xmm3
      vmovss  [rbp+0F0h+var_108], xmm0
      vmovss  [rbp+0F0h+var_104], xmm6
      vmovss  [rbp+0F0h+var_FC], xmm0
      vmovss  [rbp+0F0h+var_F8], xmm3
      vmovss  [rbp+0F0h+var_F4], xmm9
      vmovss  [rbp+0F0h+var_F0], xmm7
      vmovss  [rbp+0F0h+var_EC], xmm6
    }
    if ( !DVARBOOL_radius_damage_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v49);
    __asm { vmovss  xmm8, [rbp+0F0h+coneAngleCos] }
    if ( v49->current.enabled )
    {
      p_targetPosa = &targetPosa;
      v81 = 6i64;
      do
      {
        __asm { vmovss  dword ptr [rsp+1F0h+fmt], xmm8 }
        G_Debug_VisualizeRadiusDamageTraces(inflictor, _RSI, _RDI, p_targetPosa++, fmt, coneDirection, contentMask, v25);
        --v81;
      }
      while ( v81 );
      v26 = 0;
    }
    v82 = DVARBOOL_killswitch_agent_radius_damage_fix_enabled;
    if ( !DVARBOOL_killswitch_agent_radius_damage_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_agent_radius_damage_fix_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v82);
    v83 = !v82->current.enabled;
    if ( v82->current.enabled )
    {
      IsAgentScripted = SV_IsAgentScripted(_RSI);
      v83 = IsAgentScripted == 0;
      if ( IsAgentScripted )
      {
        __asm
        {
          vmovss  xmm3, cs:__real@3e000000
          vaddss  xmm1, xmm3, [rbp+0F0h+var_110]
          vaddss  xmm0, xmm3, [rbp+0F0h+var_F8]
          vmovss  [rbp+0F0h+var_110], xmm1
          vmovss  [rbp+0F0h+var_F8], xmm0
        }
      }
    }
    __asm
    {
      vmovss  xmm9, cs:__real@bf800000
      vmovss  xmm10, cs:__real@80000000
    }
    v89 = 0;
    _R12 = &targetPosa.v[2];
    do
    {
      __asm { vucomiss xmm8, xmm9 }
      if ( !v83 && coneDirection )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r12-8]
          vsubss  xmm7, xmm0, dword ptr [rdi]
          vmovss  xmm1, dword ptr [r12-4]
          vsubss  xmm4, xmm1, dword ptr [rdi+4]
          vmovss  xmm0, dword ptr [r12]
          vsubss  xmm6, xmm0, dword ptr [rdi+8]
          vmulss  xmm2, xmm4, xmm4
          vmulss  xmm0, xmm6, xmm6
          vmulss  xmm1, xmm7, xmm7
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, xmm10
          vblendvps xmm0, xmm1, xmm15, xmm0
          vdivss  xmm5, xmm15, xmm0
          vmulss  xmm0, xmm5, xmm4
          vmulss  xmm3, xmm0, dword ptr [r14+4]
          vmulss  xmm1, xmm5, xmm7
          vmulss  xmm2, xmm1, dword ptr [r14]
          vmulss  xmm0, xmm5, xmm6
          vmulss  xmm1, xmm0, dword ptr [r14+8]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vcomiss xmm2, xmm8
        }
      }
      if ( G_Main_RadiusDamageTracePassed(_RDI, &targetPosa + v89, _RSI->s.number, passEntityNum1, contentMask, v25) )
      {
        if ( ++v26 >= 3 )
        {
          v117 = DVARBOOL_radius_damage_debug;
          if ( !DVARBOOL_radius_damage_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_debug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v117);
          if ( v117->current.enabled )
          {
            v118 = j_va("DamageFromPos: hits >= 3 - full damage scale (1.0).");
            __asm { vmovss  xmm2, cs:__real@3e4ccccd; scale }
            G_Main_AddDebugStringWithDuration(&targetPosa, &colorGreen, *(float *)&_XMM2, v118, 300);
          }
          goto LABEL_56;
        }
      }
      ++v89;
      _R12 += 3;
      v83 = v89 == 6;
    }
    while ( v89 < 6 );
    if ( v26 )
    {
      v130 = DVARBOOL_radius_damage_debug;
      if ( !DVARBOOL_radius_damage_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v130);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebx
        vmulss  xmm6, xmm0, cs:__real@3eaaaaab
      }
      if ( v130->current.enabled )
      {
        __asm
        {
          vcvtss2sd xmm2, xmm6, xmm6
          vmovq   r8, xmm2
        }
        v136 = j_va("DamageFromPos: hits (%d) - damage scale (%f).", (unsigned int)v26, _R8);
        __asm { vmovss  xmm2, cs:__real@3e4ccccd; scale }
        G_Main_AddDebugStringWithDuration(&targetPosa, &colorGreen, *(float *)&_XMM2, v136, 300);
      }
      __asm { vmovaps xmm0, xmm6 }
      goto LABEL_57;
    }
    v113 = DVARBOOL_radius_damage_debug;
    if ( !DVARBOOL_radius_damage_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v113);
    if ( v113->current.enabled )
    {
      v114 = j_va("DamageFromPos: hits == 0 - no damage scale (0.0).");
      __asm { vmovss  xmm2, cs:__real@3e4ccccd; scale }
      G_Main_AddDebugStringWithDuration(&targetPosa, &colorGreen, *(float *)&_XMM2, v114, 300);
      __asm { vmovaps xmm0, xmm13 }
      goto LABEL_57;
    }
LABEL_108:
    __asm { vmovaps xmm0, xmm13 }
    goto LABEL_57;
  }
  __asm { vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  if ( useBounds )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovsd  xmm1, qword ptr [r15+10h]
    }
LABEL_70:
    __asm
    {
      vmovsd  qword ptr [rsp+1F0h+box.halfSize+4], xmm1
      vmovups xmmword ptr [rsp+1F0h+box.midPoint], xmm0
    }
    goto LABEL_71;
  }
  if ( _RSI->classname != scr_const.script_model || !_RSI->model )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi+118h]
      vmovsd  xmm1, qword ptr [rsi+128h]
    }
    goto LABEL_70;
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(_RSI);
  DObjPhysicsGetBounds(ServerDObjForEnt, &outOrigin);
  AnglesToAxis(&_RSI->r.currentAngles, &axis);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+1F0h+outOrigin]
    vmovss  xmm4, dword ptr [rsp+1F0h+outOrigin+4]
    vmovss  xmm3, dword ptr [rbp+0F0h+outOrigin+8]
    vmovss  xmm6, dword ptr [rbp+0F0h+axis+0Ch]
    vmovss  xmm10, dword ptr [rbp+0F0h+axis]
    vmovss  xmm8, dword ptr [rbp+0F0h+axis+18h]
    vmovss  xmm12, dword ptr [rbp+0F0h+axis+4]
    vmovss  xmm7, dword ptr [rbp+0F0h+axis+10h]
    vmovss  xmm11, dword ptr [rbp+0F0h+axis+1Ch]
    vmovss  xmm14, dword ptr [rbp+0F0h+axis+8]
    vmovss  xmm9, dword ptr [rbp+0F0h+axis+14h]
    vmovss  xmm13, dword ptr [rbp+0F0h+axis+20h]
    vmulss  xmm0, xmm4, xmm6
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm5, xmm10
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm3, xmm8
    vaddss  xmm1, xmm2, xmm0
    vaddss  xmm2, xmm1, dword ptr [rsi+130h]
    vmovss  dword ptr [rsp+1F0h+box.midPoint], xmm2
    vmulss  xmm1, xmm5, xmm12
    vmulss  xmm0, xmm4, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm11
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm2, xmm0, dword ptr [rsi+134h]
    vmovss  dword ptr [rsp+1F0h+box.midPoint+4], xmm2
    vmulss  xmm0, xmm4, xmm9
    vmovss  xmm4, [rbp+0F0h+var_16C]
    vmulss  xmm1, xmm5, xmm14
    vmovss  xmm5, [rbp+0F0h+var_168]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm13
    vmovss  xmm3, [rbp+0F0h+var_164]
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm2, xmm0, dword ptr [rsi+138h]
    vmulss  xmm1, xmm6, xmm5
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  dword ptr [rsp+1F0h+box.midPoint+8], xmm2
    vandps  xmm10, xmm10, xmm6
    vmulss  xmm0, xmm10, xmm4
    vaddss  xmm2, xmm1, xmm0
    vandps  xmm8, xmm8, xmm6
    vmulss  xmm0, xmm8, xmm3
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rsp+1F0h+box.halfSize], xmm1
    vandps  xmm7, xmm7, xmm6
    vmulss  xmm1, xmm7, xmm5
    vandps  xmm12, xmm12, xmm6
    vmulss  xmm0, xmm12, xmm4
    vaddss  xmm2, xmm1, xmm0
    vandps  xmm11, xmm11, xmm6
    vmulss  xmm0, xmm11, xmm3
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rsp+1F0h+box.halfSize+4], xmm1
    vandps  xmm9, xmm9, xmm6
    vmulss  xmm1, xmm9, xmm5
    vandps  xmm14, xmm14, xmm6
    vmulss  xmm0, xmm14, xmm4
    vaddss  xmm2, xmm1, xmm0
    vandps  xmm13, xmm13, xmm6
    vmulss  xmm0, xmm13, xmm3
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rsp+1F0h+box.halfSize+8], xmm1
  }
LABEL_71:
  if ( _RSI->classname != scr_const.trigger_damage )
    goto LABEL_112;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm1, xmm0, dword ptr [rsp+1F0h+box.midPoint]
    vandps  xmm1, xmm1, xmm6
    vcomiss xmm1, dword ptr [rsp+1F0h+box.halfSize]
  }
  if ( _RSI->classname >= (unsigned int)scr_const.trigger_damage )
    goto LABEL_112;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm1, xmm0, dword ptr [rsp+1F0h+box.midPoint+4]
    vandps  xmm1, xmm1, xmm6
    vcomiss xmm1, dword ptr [rsp+1F0h+box.halfSize+4]
  }
  if ( _RSI->classname >= (unsigned int)scr_const.trigger_damage )
    goto LABEL_112;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm1, xmm0, dword ptr [rsp+1F0h+box.midPoint+8]
    vandps  xmm1, xmm1, xmm6
    vcomiss xmm1, dword ptr [rsp+1F0h+box.halfSize+8]
  }
  if ( _RSI->classname >= (unsigned int)scr_const.trigger_damage )
  {
LABEL_112:
    Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_radius_damage_debug, "radius_damage_debug");
    __asm { vxorps  xmm13, xmm13, xmm13 }
    v208 = 0;
    v209 = !Bool_Internal_DebugName;
    if ( Bool_Internal_DebugName )
    {
      __asm { vxorps  xmm2, xmm2, xmm2; yaw }
      G_DebugBox(&vec3_origin, &box, *(float *)&_XMM2, &colorMdGrey, 0, 300);
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+1F0h+box.midPoint]
      vmovss  xmm2, dword ptr [rsp+1F0h+box.midPoint+4]
      vmovss  xmm3, dword ptr [rsp+1F0h+box.midPoint+8]
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm4, xmm0, xmm1
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rbp+0F0h+targetPos], xmm1
      vmovss  xmm1, dword ptr [rdi+4]
      vsubss  xmm5, xmm1, xmm2
      vmovss  dword ptr [rbp+0F0h+targetPos+4], xmm2
      vmulss  xmm2, xmm5, xmm5
      vsubss  xmm9, xmm0, xmm3
      vmulss  xmm1, xmm4, xmm4
      vmovss  dword ptr [rbp+0F0h+targetPos+8], xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm9, xmm9
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vucomiss xmm1, xmm13
    }
    if ( !v209 )
    {
      __asm
      {
        vmovss  xmm12, cs:__real@3b03126f
        vdivss  xmm0, xmm15, xmm1
        vmulss  xmm8, xmm0, xmm5
        vmulss  xmm9, xmm9, xmm0
        vmulss  xmm7, xmm0, xmm4
        vmulss  xmm1, xmm8, xmm8
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm9, xmm9
        vaddss  xmm10, xmm2, xmm1
        vsubss  xmm0, xmm10, xmm15
        vandps  xmm0, xmm0, xmm6
        vcomiss xmm0, xmm12
      }
      if ( !v208 )
      {
        __asm
        {
          vsqrtss xmm0, xmm10, xmm10
          vcvtss2sd xmm1, xmm0, xmm0
          vmovsd  [rsp+1F0h+var_1B0], xmm1
          vcvtss2sd xmm2, xmm9, xmm9
          vmovsd  [rsp+1F0h+var_1B8], xmm2
          vcvtss2sd xmm3, xmm8, xmm8
          vmovsd  qword ptr [rsp+1F0h+var_1C0], xmm3
          vcvtss2sd xmm0, xmm7, xmm7
          vmovsd  [rsp+1F0h+var_1C8], xmm0
        }
        v243 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 2119, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( forward ) )", "(%g, %g, %g) len %g", *(double *)&v363, v366, *(double *)&v369, v372);
        v208 = 0;
        v209 = !v243;
        if ( v243 )
          __debugbreak();
      }
      __asm
      {
        vsqrtss xmm1, xmm10, xmm10
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm15, xmm0
        vdivss  xmm1, xmm15, xmm0
        vmulss  xmm14, xmm8, xmm1
        vmulss  xmm10, xmm9, xmm1
        vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
        vmulss  xmm11, xmm1, xmm7
        vmulss  xmm1, xmm11, xmm11
        vxorps  xmm2, xmm14, xmm9
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm3, xmm1, xmm1
        vucomiss xmm3, xmm13
        vmovaps xmm8, xmm11
      }
      if ( v209 )
      {
        __asm { vmovaps xmm7, xmm15 }
      }
      else
      {
        __asm
        {
          vdivss  xmm0, xmm15, xmm3
          vmulss  xmm8, xmm0, xmm11
          vmulss  xmm7, xmm0, xmm2
        }
      }
      __asm
      {
        vmulss  xmm1, xmm7, xmm7
        vmulss  xmm0, xmm8, xmm8
        vaddss  xmm3, xmm1, xmm0
        vsubss  xmm2, xmm3, xmm15
        vandps  xmm2, xmm2, xmm6
        vcomiss xmm2, xmm12
      }
      if ( !v208 )
      {
        __asm
        {
          vsqrtss xmm0, xmm3, xmm3
          vcvtss2sd xmm1, xmm0, xmm0
          vmovsd  [rsp+1F0h+var_1B0], xmm1
          vxorpd  xmm0, xmm0, xmm0
          vmovsd  [rsp+1F0h+var_1B8], xmm0
          vcvtss2sd xmm2, xmm8, xmm8
          vmovsd  qword ptr [rsp+1F0h+var_1C0], xmm2
          vcvtss2sd xmm3, xmm7, xmm7
          vmovsd  [rsp+1F0h+var_1C8], xmm3
        }
        v270 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 2135, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( right ) )", "(%g, %g, %g) len %g", *(double *)&v364, v367, *(double *)&v370, v373);
        v208 = 0;
        v209 = !v270;
        if ( v270 )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm0, xmm8, xmm10
        vxorps  xmm9, xmm0, xmm9
        vmulss  xmm0, xmm14, xmm7
        vmulss  xmm1, xmm8, xmm11
        vsubss  xmm11, xmm1, xmm0
        vmulss  xmm10, xmm10, xmm7
        vmulss  xmm0, xmm10, xmm10
        vmulss  xmm2, xmm9, xmm9
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm1, xmm11, xmm11
        vaddss  xmm4, xmm3, xmm1
        vsubss  xmm0, xmm4, xmm15
        vandps  xmm0, xmm0, xmm6
        vcomiss xmm0, xmm12
      }
      if ( !v208 )
      {
        __asm
        {
          vsqrtss xmm0, xmm4, xmm4
          vcvtss2sd xmm1, xmm0, xmm0
          vmovsd  [rsp+1F0h+var_1B0], xmm1
          vcvtss2sd xmm2, xmm11, xmm11
          vmovsd  [rsp+1F0h+var_1B8], xmm2
          vcvtss2sd xmm3, xmm10, xmm10
          vmovsd  qword ptr [rsp+1F0h+var_1C0], xmm3
          vcvtss2sd xmm0, xmm9, xmm9
          vmovsd  [rsp+1F0h+var_1C8], xmm0
        }
        v289 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 2138, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( up ) )", "(%g, %g, %g) len %g", *(double *)&v365, v368, *(double *)&v371, v374);
        v208 = 0;
        v209 = !v289;
        if ( v289 )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rsp+1F0h+box.halfSize]
        vmulss  xmm0, xmm8, dword ptr [rsp+1F0h+box.halfSize+4]
        vandps  xmm1, xmm1, xmm6
        vandps  xmm0, xmm0, xmm6
        vaddss  xmm5, xmm1, xmm0
        vmulss  xmm1, xmm9, dword ptr [rsp+1F0h+box.halfSize]
        vmulss  xmm0, xmm10, dword ptr [rsp+1F0h+box.halfSize+4]
        vandps  xmm1, xmm1, xmm6
        vandps  xmm0, xmm0, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm11, dword ptr [rsp+1F0h+box.halfSize+8]
        vmovss  xmm0, cs:__real@42000000
        vcomiss xmm5, xmm0
        vandps  xmm1, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm1
      }
      v396 = 16843009;
      v397 = 1;
      if ( v208 )
      {
        __asm { vxorps  xmm5, xmm5, xmm5 }
        BYTE1(v396) = 0;
        HIBYTE(v396) = 0;
      }
      __asm { vcomiss xmm3, xmm0 }
      if ( v208 )
      {
        __asm
        {
          vucomiss xmm5, xmm13
          vxorps  xmm3, xmm3, xmm3
        }
        *(_WORD *)((char *)&v396 + 1) = 0;
        if ( v209 )
          v397 = 0;
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+0F0h+targetPos+4]
        vmulss  xmm11, xmm11, xmm3
        vmulss  xmm4, xmm5, xmm7
        vmulss  xmm7, xmm8, xmm5
        vmulss  xmm8, xmm9, xmm3
        vmulss  xmm9, xmm10, xmm3
        vmovss  xmm10, dword ptr [rbp+0F0h+targetPos+8]
        vmovss  xmm3, dword ptr [rbp+0F0h+targetPos]
        vaddss  xmm6, xmm4, xmm3
        vsubss  xmm4, xmm3, xmm4
        vaddss  xmm0, xmm8, xmm6
        vmovss  [rbp+0F0h+var_124], xmm0
        vaddss  xmm5, xmm7, xmm2
        vaddss  xmm0, xmm9, xmm5
        vmovss  [rbp+0F0h+var_120], xmm0
        vaddss  xmm0, xmm8, xmm4
        vmovss  [rbp+0F0h+var_118], xmm0
        vaddss  xmm1, xmm11, xmm10
        vmovss  [rbp+0F0h+var_11C], xmm1
        vsubss  xmm3, xmm2, xmm7
        vaddss  xmm0, xmm11, xmm10
        vmovss  [rbp+0F0h+var_110], xmm0
        vaddss  xmm1, xmm9, xmm3
        vmovss  [rbp+0F0h+var_114], xmm1
        vsubss  xmm0, xmm5, xmm9
        vsubss  xmm1, xmm6, xmm8
        vmovss  [rbp+0F0h+var_108], xmm0
        vmovss  [rbp+0F0h+var_10C], xmm1
        vsubss  xmm0, xmm4, xmm8
        vsubss  xmm1, xmm10, xmm11
        vmovss  [rbp+0F0h+var_100], xmm0
        vmovss  [rbp+0F0h+var_104], xmm1
        vsubss  xmm0, xmm10, xmm11
        vsubss  xmm1, xmm3, xmm9
        vmovss  [rbp+0F0h+var_F8], xmm0
        vmovss  [rbp+0F0h+var_FC], xmm1
        vmovss  xmm8, [rbp+0F0h+coneAngleCos]
      }
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_radius_damage_debug, "radius_damage_debug") )
      {
        v330 = &v396;
        v331 = 5i64;
        v332 = &targetPosa;
        *(_QWORD *)outOrigin.midPoint.v = 5i64;
        do
        {
          if ( *(_BYTE *)v330 )
          {
            __asm { vmovss  dword ptr [rsp+1F0h+fmt], xmm8 }
            G_Debug_VisualizeRadiusDamageTraces(inflictor, _RSI, _RDI, v332, fmta, coneDirection, contentMask, v25);
            v331 = *(_QWORD *)outOrigin.midPoint.v;
          }
          ++v332;
          v330 = (int *)((char *)v330 + 1);
          *(_QWORD *)outOrigin.midPoint.v = --v331;
        }
        while ( v331 );
        v26 = 0;
      }
      __asm
      {
        vmovss  xmm9, cs:__real@bf800000
        vmovss  xmm10, cs:__real@80000000
      }
      v335 = &v396;
      _R15 = &targetPosa.v[2];
      while ( 1 )
      {
        if ( *(_BYTE *)v335 )
        {
          __asm { vucomiss xmm8, xmm9 }
          if ( *(_BYTE *)v335 && coneDirection )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [r15-8]
              vsubss  xmm7, xmm0, dword ptr [rdi]
              vmovss  xmm1, dword ptr [r15-4]
              vsubss  xmm4, xmm1, dword ptr [rdi+4]
              vmovss  xmm0, dword ptr [r15]
              vsubss  xmm6, xmm0, dword ptr [rdi+8]
              vmulss  xmm2, xmm4, xmm4
              vmulss  xmm0, xmm6, xmm6
              vmulss  xmm1, xmm7, xmm7
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm2, xmm3, xmm0
              vsqrtss xmm1, xmm2, xmm2
              vcmpless xmm0, xmm1, xmm10
              vblendvps xmm0, xmm1, xmm15, xmm0
              vdivss  xmm5, xmm15, xmm0
              vmulss  xmm0, xmm4, xmm5
              vmulss  xmm3, xmm0, dword ptr [r14+4]
              vmulss  xmm1, xmm7, xmm5
              vmulss  xmm2, xmm1, dword ptr [r14]
              vmulss  xmm0, xmm6, xmm5
              vmulss  xmm1, xmm0, dword ptr [r14+8]
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vcomiss xmm2, xmm8
            }
          }
          if ( G_Main_RadiusDamageTracePassed(_RDI, &targetPosa + v26, _RSI->s.number, passEntityNum1, contentMask, v25) )
            break;
        }
        ++v26;
        v335 = (int *)((char *)v335 + 1);
        _R15 += 3;
        if ( v26 >= 5 )
          goto LABEL_108;
      }
    }
  }
LABEL_56:
  __asm { vmovaps xmm0, xmm15 }
LABEL_57:
  __asm
  {
    vmovaps xmm14, [rsp+1F0h+var_C0]
    vmovaps xmm13, [rsp+1F0h+var_B0]
    vmovaps xmm12, [rsp+1F0h+var_A0]
    vmovaps xmm11, [rsp+1F0h+var_90]
    vmovaps xmm10, [rsp+1F0h+var_80]
    vmovaps xmm9, [rsp+1F0h+var_70]
    vmovaps xmm8, [rsp+1F0h+var_60]
    vmovaps xmm7, [rsp+1F0h+var_50]
    vmovaps xmm6, [rsp+1F0h+var_40]
    vmovaps xmm15, [rsp+1F0h+var_D0]
  }
  return *(float *)&_XMM0;
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

  _RDI = weapon;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1365, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1366, ASSERT_TYPE_ASSERT, "(weapon)", (const char *)&queryFormat, "weapon") )
    __debugbreak();
  if ( !isAlternate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1367, ASSERT_TYPE_ASSERT, "(isAlternate)", (const char *)&queryFormat, "isAlternate") )
    __debugbreak();
  *isAlternate = 0;
  client = ent->client;
  Instance = GWeaponMap::GetInstance();
  v8 = Instance;
  if ( !client )
  {
    _RAX = BG_GetWeaponForEntity(Instance, &ent->s);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rdi], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rdi+20h], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rdi+30h], xmm0
    }
    *(_DWORD *)&_RDI->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    inAltWeaponMode = ent->s.inAltWeaponMode;
    goto LABEL_22;
  }
  if ( !BG_IsTurretActive(&client->ps) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu) )
  {
    _RAX = BG_GetViewmodelWeapon(v8, &client->ps);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rdi], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rdi+20h], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rdi+30h], xmm0
    }
    *(_DWORD *)&_RDI->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    inAltWeaponMode = BG_UsingAlternate(&client->ps);
LABEL_22:
    *isAlternate = inAltWeaponMode;
    return;
  }
  if ( client->ps.viewlocked == PLAYERVIEWLOCK_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1384, ASSERT_TYPE_ASSERT, "(ps->viewlocked)", (const char *)&queryFormat, "ps->viewlocked") )
    __debugbreak();
  if ( client->ps.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1385, ASSERT_TYPE_ASSERT, "(ps->viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->viewlocked_entNum != ENTITYNUM_NONE") )
    __debugbreak();
  _RAX = BG_GetWeaponForEntity(v8, &g_entities[client->ps.viewlocked_entNum].s);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rdi], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rdi+20h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rdi+30h], xmm0
  }
  *(_DWORD *)&_RDI->weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  *isAlternate = 0;
}

/*
==============
G_CombatMP_GetWeaponHitLocationMultiplier
==============
*/
float G_CombatMP_GetWeaponHitLocationMultiplier(hitLocation_t hitLoc, const Weapon *weapon, bool isAlternate, int locDamageTableIndex)
{
  GCombat *v9; 

  if ( (unsigned int)hitLoc > HITLOC_SOFT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1348, ASSERT_TYPE_ASSERT, "((hitLoc >= HITLOC_NONE) && (hitLoc < HITLOC_NUM))", (const char *)&queryFormat, "(hitLoc >= HITLOC_NONE) && (hitLoc < HITLOC_NUM)") )
    __debugbreak();
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  v9 = GCombat::ms_gCombatSystem;
  if ( weapon->weaponIdx && BG_GetWeaponType(weapon, isAlternate) == WEAPTYPE_BULLET && BG_GetWeaponClass(weapon, isAlternate) != WEAPCLASS_TURRET )
  {
    BG_GetLocationDamageMultipliers(weapon, isAlternate);
    *(double *)&_XMM0 = GCombat::GetLocDamageMult(v9, hitLoc, locDamageTableIndex);
    __asm { vmulss  xmm0, xmm0, dword ptr [rdi+rsi*4] }
  }
  else
  {
    *(double *)&_XMM0 = GCombat::GetLocDamageMult(v9, hitLoc, locDamageTableIndex);
  }
  return *(float *)&_XMM0;
}

/*
==============
G_CombatMP_GetYawForCharacter
==============
*/
float G_CombatMP_GetYawForCharacter(gentity_s *ent, characterInfo_t *ci)
{
  _RBX = ent;
  _RDI = ci;
  if ( SV_IsAgent(ent->s.number) && SV_Agent_IsScripted(_RBX->s.number) )
    __asm { vmovss  xmm0, dword ptr [rbx+140h] }
  else
    __asm { vmovss  xmm0, dword ptr [rdi+800h] }
  return *(float *)&_XMM0;
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
  int grenadeTimeLeft; 
  int v12; 
  char v13; 
  char v14; 
  char v15; 
  GWeaponMap *Instance; 
  BgWeaponMap *v18; 
  BgWeaponHandle v19; 
  bool HasUnderbarrelAmmo; 
  int v27; 
  scrContext_t *v28; 
  __int64 v29; 
  scrContext_t *v30; 
  const dvar_t *v34; 
  gentity_s *v40; 
  gentity_s *v41; 
  __int64 hand; 
  __int64 rotate; 
  bool v44; 
  int fuseTime; 
  AmmoStore result; 
  vec3_t dir; 
  Weapon r_weapon; 
  vec3_t start; 
  AmmoStore r_clip2; 

  _R15 = self;
  EntityPlayerState = G_GetEntityPlayerState(self);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 518, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 501, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v5 = *(_QWORD *)&GStatic::ms_gameStatics;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 504, ASSERT_TYPE_ASSERT, "( gameStatic )", (const char *)&queryFormat, "gameStatic") )
    __debugbreak();
  number = _R15->s.number;
  if ( (unsigned int)number >= *(_DWORD *)(v5 + 19576) )
  {
    LODWORD(hand) = _R15->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_static_mp.h", 123, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( m_characterCount )", "entityIndex doesn't index m_characterCount\n\t%i not in [0, %i)", hand, *(_DWORD *)(v5 + 19576)) )
      __debugbreak();
  }
  v7 = *(_QWORD *)(v5 + 19568) + 232 * number;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 507, ASSERT_TYPE_ASSERT, "( playerEvents )", (const char *)&queryFormat, "playerEvents") )
    __debugbreak();
  if ( *(_DWORD *)(v7 + 216) != 135 )
  {
    _RCX = 0i64;
LABEL_21:
    grenadeTimeLeft = EntityPlayerState->grenadeTimeLeft;
    goto LABEL_22;
  }
  _RCX = *(_QWORD *)(v7 + 224);
  if ( !_RCX )
    goto LABEL_21;
  grenadeTimeLeft = *(_DWORD *)(_RCX + 68);
LABEL_22:
  if ( grenadeTimeLeft )
  {
    if ( _RCX )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx]
        vmovups xmm1, xmmword ptr [rcx+20h]
      }
      v12 = *(_DWORD *)(_RCX + 76);
      v13 = *(_BYTE *)(_RCX + 82);
      v14 = *(_BYTE *)(_RCX + 83);
      *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)(_RCX + 56);
      fuseTime = *(_DWORD *)(_RCX + 72);
      v15 = *(_BYTE *)(_RCX + 84);
      __asm
      {
        vmovups ymmword ptr [rbp+70h+r_weapon.weaponIdx], ymm0
        vmovsd  xmm0, qword ptr [rcx+30h]
      }
      v44 = v15;
      __asm
      {
        vmovups xmmword ptr [rbp+70h+r_weapon.attachmentVariationIndices+5], xmm1
        vmovsd  qword ptr [rbp+70h+r_weapon.attachmentVariationIndices+15h], xmm0
      }
    }
    else
    {
      v13 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&EntityPlayerState->weapCommon.weapFlags, ACTIVE, 1u) || BG_IsUsingOffhandGestureWeapon(EntityPlayerState);
      v14 = BG_UsingAlternate(EntityPlayerState);
      v44 = BG_ThrowingBackGrenade(EntityPlayerState);
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
      _RAX = BgWeaponMap::GetWeapon(v18, v19);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+70h+r_weapon.weaponIdx], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rbp+70h+r_weapon.attachmentVariationIndices+5], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rbp+70h+r_weapon.attachmentVariationIndices+15h], xmm0
      }
      *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
      HasUnderbarrelAmmo = BG_HasUnderbarrelAmmo(&r_weapon);
      fuseTime = BG_GetHeldGrenadeFuse(&r_weapon, HasUnderbarrelAmmo, EntityPlayerState);
      _RAX = BG_AmmoStoreForWeapon(&result, &r_weapon, 0);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+70h+r_clip2.weapon.weaponIdx], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rbp+70h+r_clip2.weapon.attachmentVariationIndices+5], ymm1
      }
      BG_HasLadderHand(EntityPlayerState);
      v27 = 0;
      while ( !BG_IsClipCompatible(&EntityPlayerState->weapCommon.ammoInClip[v27].clipIndex, &r_clip2) )
      {
        if ( (unsigned int)++v27 >= 0xF )
        {
          v12 = 0;
          goto LABEL_51;
        }
      }
      v12 = EntityPlayerState->weapCommon.ammoInClip[v27].ammoCount[0];
    }
LABEL_51:
    v28 = ScriptContext_Server();
    LOWORD(v29) = r_weapon.weaponIdx;
    v30 = v28;
    if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
    {
      LODWORD(rotate) = bg_lastParsedWeaponIndex;
      LODWORD(hand) = r_weapon.weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", hand, rotate) )
        __debugbreak();
    }
    v29 = (unsigned __int16)v29;
    if ( !bg_weaponDefs[(unsigned __int16)v29] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    if ( bg_weaponDefs[v29]->dropGrenadeHeldOnDeath )
    {
      if ( v13 )
      {
        GScr_Weapon_AddParam(v30, &r_weapon, v14);
        GScr_Notify(_R15, scr_const.offhand_fired, 1u);
      }
      if ( r_weapon.weaponIdx && BG_GetWeaponType(&r_weapon, 0) == WEAPTYPE_GRENADE )
      {
        *(double *)&_XMM0 = G_crandom();
        __asm { vmovss  dword ptr [rbp+70h+dir], xmm0 }
        *(double *)&_XMM0 = G_crandom();
        __asm { vmovss  dword ptr [rbp+70h+dir+4], xmm0 }
        *(double *)&_XMM0 = G_crandom();
        __asm
        {
          vmovss  xmm4, cs:__real@43200000
          vmulss  xmm1, xmm4, dword ptr [rbp+70h+dir+4]
          vmulss  xmm2, xmm4, dword ptr [rbp+70h+dir]
        }
        v34 = DCONST_DVARBOOL_g_grenadeDropConsumeAmmo;
        __asm
        {
          vmovss  dword ptr [rbp+70h+dir+4], xmm1
          vmovss  xmm1, dword ptr [r15+130h]
          vmulss  xmm0, xmm0, xmm4
          vmovss  dword ptr [rbp+70h+start], xmm1
          vmovss  xmm1, dword ptr [r15+138h]
          vmovss  dword ptr [rbp+70h+dir], xmm2
          vaddss  xmm2, xmm1, cs:__real@42200000
          vmovss  dword ptr [rbp+70h+dir+8], xmm0
          vmovss  xmm0, dword ptr [r15+134h]
          vmovss  dword ptr [rbp+70h+start+8], xmm2
          vmovss  dword ptr [rbp+70h+start+4], xmm0
        }
        if ( !DCONST_DVARBOOL_g_grenadeDropConsumeAmmo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_grenadeDropConsumeAmmo") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v34);
        if ( v34->current.enabled && !v44 && !BG_OffhandDoesNotConsumeAmmo(&r_weapon, 0) && v12 > 0 )
          PM_WeaponUseAmmo(EntityPlayerState, &r_weapon, 0, 1, WEAPON_HAND_DEFAULT);
        v40 = G_Missile_FireGrenade(_R15, &start, &dir, &r_weapon, 0, WEAPON_HAND_DEFAULT, 1, fuseTime, 1, level.time);
        v41 = v40;
        if ( !applyDamageToOwner && v40 && Dvar_GetBool_Internal_DebugName(DVARBOOL_killswitch_laststand_grenade_drop_fix_enabled, "killswitch_laststand_grenade_drop_fix_enabled") )
          v41->c.missile.flags |= 0x8000u;
      }
    }
    else
    {
      GScr_Weapon_AddParam(v30, &r_weapon, v14);
      GScr_Notify(_R15, scr_const.grenade_held_on_death, 1u);
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
  __int64 v16; 
  int v17; 
  gclient_s *v18; 
  bool v19; 
  const Weapon *v20; 
  unsigned int *RandomSeed; 
  playerState_s *p_ps; 
  GHandler *Handler; 
  int deathAnimDuration; 
  const dvar_t *v25; 
  gclient_s *v26; 
  unsigned int number; 
  SvClientMP *CommonClient; 
  char v37; 
  char v38; 
  gclient_s *v39; 
  __int64 v40; 
  unsigned int *holdrand; 
  int outDuration; 
  int damagea; 

  damagea = damage;
  _RSI = self;
  SV_InitMP_CheckThread();
  if ( !_RSI->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1008, ASSERT_TYPE_ASSERT, "(self->client)", (const char *)&queryFormat, "self->client") )
    __debugbreak();
  _RSI->client->ps.stats[4] = 0;
  if ( !Com_GetServerDObjForEntnum(_RSI->client->ps.clientNum) )
  {
    Com_Printf(15, "PlayerDie called without a valid Dobj for player %i\n", (unsigned int)_RSI->client->ps.clientNum);
    return;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->client->ps.pm_flags, ACTIVE, 0x16u) )
    *(_QWORD *)_RSI->client->ps.velocity.v = 0i64;
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&_RSI->client->ps.otherFlags, (POtherFlagsMP)33) )
  {
    client = _RSI->client;
    if ( client->ps.pm_type <= 1u || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 0xBu) )
    {
      SV_Profile_BeginEvent(SVPROF_CLIENT_KILLED);
      if ( BG_AISystemEnabled() )
        SV_BotEntityDied(_RSI);
      v16 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64);
      if ( !v16 )
        goto LABEL_64;
      if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
        __debugbreak();
      if ( v16 != *(_QWORD *)&GStatic::ms_gameStatics )
      {
LABEL_64:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1034, ASSERT_TYPE_ASSERT, "(BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == GStatic::GetGameStatics()))", "%s\n\tEntering server game player processing without a valid client game state", "BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == GStatic::GetGameStatics())") )
          __debugbreak();
      }
      if ( attacker->s.eType == ET_TURRET && EntHandle::isDefined(&attacker->r.ownerNum) )
        attacker = EntHandle::ent(&attacker->r.ownerNum);
      v17 = meansOfDeath;
      G_CombatMP_GrenadeDrop(_RSI, meansOfDeath, 1);
      G_PlayerSpawnPoints_LogDeathEvent(_RSI, attacker);
      _RSI->client->ps.weapCommon.offhandGestureFlags = 0;
      GScr_AddEntity(attacker);
      GScr_Notify(_RSI, scr_const.death, 1u);
      GScr_Notify(_RSI, scr_const.death_or_disconnect, 0);
      v18 = _RSI->client;
      if ( v18->ps.pm_type > 1u && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v18->ps.otherFlags, ACTIVE, 0xBu) )
      {
        LODWORD(holdrand) = _RSI->client->ps.pm_type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1055, ASSERT_TYPE_SANITY, "( ( (self->client->ps.pm_type == PM_NORMAL_LINKED) || (self->client->ps.pm_type == PM_NORMAL) || self->client->ps.otherFlags.TestFlag( POtherFlagsCommon::LASTSTAND ) ) )", "( self->client->ps.pm_type ) = %i", holdrand) )
          __debugbreak();
      }
      v19 = isAlternate;
      v20 = r_weapon;
      G_CombatMP_SetAnimDamageTypeCondition(_RSI->client->ps.clientNum, _RSI, inflictor, v17, r_weapon, isAlternate);
      G_CombatMP_SetAnimHitLocationCondition(_RSI->client->ps.clientNum, _RSI, hitLoc);
      G_CombatMP_SetAnimHitDirectionCondition(_RSI->client->ps.clientNum, _RSI, vDir, &_RSI->client->ps, v17);
      G_CombatMP_SetAnimMoveDirectionCondition(_RSI->client->ps.clientNum, _RSI, &_RSI->client->ps);
      G_CombatMP_SetVehicleOccupancyConditions(_RSI->client->ps.clientNum, _RSI);
      if ( v17 == 8 )
      {
        G_CombatMP_SetMeleeReactionConditions(_RSI->client->ps.clientNum, inflictor);
      }
      else if ( v17 == 21 )
      {
        deathAnimDuration = G_Execution_GetExecutionAnimDurationRemaining(_RSI, level.time);
        GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&_RSI->client->ps.otherFlags, GameModeFlagValues::ms_mpValue, 0x33u);
LABEL_30:
        v25 = DVARBOOL_killswitch_execution_death_validation_enabled;
        if ( !DVARBOOL_killswitch_execution_death_validation_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_execution_death_validation_enabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v25);
        if ( v25->current.enabled && BG_IsPlayerInExecution(&_RSI->client->ps) )
        {
          v26 = _RSI->client;
          if ( !v26->ps.activeExecutionIsVictim || inflictor->s.number != v26->ps.activeExecutionPartnerEntNum )
            G_Execution_Cancel(_RSI);
        }
        _RSI->client->ps.stats[0] = 0;
        if ( _RSI->hasSpawnInfluencePoint )
          G_PlayerSpawnPoints_UnlinkInfluencePointFromEntity(_RSI->influencePointIndex, _RSI);
        Scr_PlayerKilled(_RSI, inflictor, attacker, damagea, damageFlags, v17, v20, v19, vDir, hitLoc, psTimeOffset, deathAnimDuration);
        G_Vehicle_ClearPlayerVehicles(_RSI->s.number, &_RSI->client->ps);
        _RSI->client->ps.pm_type = (_RSI->client->ps.pm_type == 1) + 7;
        if ( SV_BotIsBotEntClient(_RSI) )
        {
          number = _RSI->s.number;
          if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          CommonClient = (SvClientMP *)SvClient::GetCommonClient(number);
          SV_BotKilled(CommonClient);
        }
        AI_DissociateAIFromEnt(_RSI);
        G_Nav_DestroyPlayerRepulsor(_RSI->s.number);
        GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RSI->client->ps.eFlags, ACTIVE, 0x10u);
        _RSI->r.currentAngles.v[2] = 0.0;
        G_Combat_LookAtKiller(_RSI, inflictor, attacker, &_RSI->client->ps);
        _RCX = _RSI->client;
        _RCX->ps.viewangles.v[0] = _RSI->r.currentAngles.v[0];
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+140h]
          vmovss  dword ptr [rcx+1DCh], xmm0
          vmovss  xmm1, dword ptr [rsi+144h]
          vmovss  dword ptr [rcx+1E0h], xmm1
        }
        _RSI->s.loopSound = 0;
        _RAX = BG_Suit_GetBounds(_RSI->client->ps.suitIndex, PM_EFF_STANCE_PRONE);
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rsi+100h], xmm0
          vmovsd  xmm1, qword ptr [rax+10h]
          vxorps  xmm2, xmm2, xmm2
          vshufps xmm0, xmm1, xmm1, 55h ; 'U'
          vmovsd  qword ptr [rsi+110h], xmm1
          vcomiss xmm2, xmm0
        }
        if ( !(v37 | v38) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1125, ASSERT_TYPE_ASSERT, "(self->r.box.halfSize[2] >= 0.0f)", (const char *)&queryFormat, "self->r.box.halfSize[2] >= 0.0f") )
          __debugbreak();
        SV_LinkEntity(_RSI);
        _RSI->health = 0;
        _RSI->client->sess.lastDeathTime = level.time;
        _RSI->handler = 16;
        _RSI->client->sess.eFlags.m_flags[0] = 0;
        v39 = _RSI->client;
        if ( v39 == (gclient_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 280, ASSERT_TYPE_ASSERT, "(sourceFlags)", (const char *)&queryFormat, "sourceFlags") )
          __debugbreak();
        v39->sess.eFlags.m_flags[0] ^= (v39->sess.eFlags.m_flags[0] ^ v39->ps.eFlags.m_flags[0]) & 4;
        _RSI->client->sess.eFlags.m_flags[0] ^= 4u;
        v40 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64);
        if ( !v40 )
          goto LABEL_65;
        if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
          __debugbreak();
        if ( v40 != *(_QWORD *)&GStatic::ms_gameStatics )
        {
LABEL_65:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1140, ASSERT_TYPE_ASSERT, "(BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == GStatic::GetGameStatics()))", "%s\n\tFinished server game player processing without a valid client game state", "BgStatic::HasActiveStatics() && (BgStatic::GetActiveStatics() == GStatic::GetGameStatics())") )
            __debugbreak();
        }
        SV_Profile_EndEvent(SVPROF_CLIENT_KILLED);
        return;
      }
      RandomSeed = G_GetRandomSeed();
      p_ps = &_RSI->client->ps;
      Handler = GHandler::getHandler();
      outDuration = BG_AnimScriptEvent(Handler, p_ps, ANIM_ET_DEATH, 0, 1, RandomSeed);
      GPlayerASM_ForceUpdateEvent(&_RSI->client->ps, MOVEMENT, 1, &outDuration);
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
  GWeaponMap *Instance; 
  unsigned int v22; 
  ClientBits *p_clientMask; 
  unsigned __int64 clientNum; 
  int ClientHitEvent; 
  GWeaponMap *v28; 
  __int16 number; 
  unsigned int m_objIndex; 
  __int64 v32; 
  bool v33; 
  GTurret **v34; 
  GTurret *v35; 
  __int16 v36; 
  __int64 v37; 
  __int64 v38; 
  BulletHitBoneInfo outHitInfo[2]; 
  int v42; 

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
            *(_QWORD *)outHitInfo = 0i64;
            v42 = 0;
          }
          v18 = v17;
          v42 = v18;
          if ( (dflags & 0x200) != 0 )
          {
            v18 |= 2u;
            v42 = v18;
          }
          if ( (dflags & 0x400) != 0 )
            v42 = v18 | 4;
          outHitInfo[1] = (BulletHitBoneInfo)GBullet::CalculateHitImpactSoundDelay(BulletSystem, inflictor, victim);
          HitEvent = BG_WeaponBulletFire_GetHitEvent(mod, 1);
          if ( !HitEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 327, ASSERT_TYPE_SANITY, "( bulletEvent != EV_NONE )", (const char *)&queryFormat, "bulletEvent != EV_NONE") )
            __debugbreak();
          _RDI = G_Utils_SpawnEventEntity(point, HitEvent);
          Instance = GWeaponMap::GetInstance();
          BG_SetWeaponForEntity(Instance, &_RDI->s, r_weapon);
          _RDI->s.inAltWeaponMode = isAlternate;
          _RDI->s.eventParm = DirToByte(localdir);
          _RDI->s.eventParm2 = 0;
          _RDI->s.surfType = body->s.surfType;
          v22 = 0;
          _RDI->s.otherEntityNum = inflictor->s.number;
          _RDI->s.groundEntityNum = body->s.number;
          __asm
          {
            vmovsd  xmm0, qword ptr [rsp+0C8h+outHitInfo._bf_0]
            vmovsd  qword ptr [rdi+58h], xmm0
          }
          _RDI->s.lerp.u.anonymous.data[2] = v42;
          p_clientMask = &_RDI->clientMask;
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
          _RDI->clientMask.array[clientNum >> 5] |= 0x80000000 >> (clientNum & 0x1F);
          ClientHitEvent = BG_WeaponBulletFire_GetClientHitEvent(mod, 1);
          if ( !ClientHitEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 350, ASSERT_TYPE_SANITY, "( bulletEvent != EV_NONE )", (const char *)&queryFormat, "bulletEvent != EV_NONE") )
            __debugbreak();
          _RBX = G_Utils_SpawnEventEntity(point, ClientHitEvent);
          _RBX->s.eventParm2 = 0;
          v28 = GWeaponMap::GetInstance();
          BG_SetWeaponForEntity(v28, &_RBX->s, r_weapon);
          _RBX->s.inAltWeaponMode = isAlternate;
          _RBX->s.surfType = body->s.surfType;
          number = inflictor->s.number;
          _RBX->s.otherEntityNum = inflictor->s.number;
          if ( number == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 358, ASSERT_TYPE_ASSERT, "(bulletClientHitEntity->s.otherEntityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "bulletClientHitEntity->s.otherEntityNum != ENTITYNUM_NONE") )
            __debugbreak();
          __asm
          {
            vmovsd  xmm0, qword ptr [rsp+0C8h+outHitInfo._bf_0]
            vmovsd  qword ptr [rbx+58h], xmm0
          }
          _RBX->s.lerp.u.anonymous.data[2] = v42;
          _RBX->s.clientNum = victim->client->ps.clientNum;
          _RBX->clientMask.array[0] = -1;
          *(_QWORD *)&_RBX->clientMask.array[1] = -1i64;
          *(_QWORD *)&_RBX->clientMask.array[3] = -1i64;
          *(_QWORD *)&_RBX->clientMask.array[5] = -1i64;
          bitarray_base<bitarray<224>>::resetBit(&_RBX->clientMask, victim->client->ps.clientNum);
          if ( hitLoc == HITLOC_HEAD )
          {
            _RDI->s.eventParm2 |= 1u;
            _RBX->s.eventParm2 |= 1u;
          }
          else if ( hitLoc == HITLOC_HELMET )
          {
            _RDI->s.eventParm2 |= 0x400u;
            _RBX->s.eventParm2 |= 0x400u;
          }
          else if ( (unsigned int)(hitLoc - 6) <= 0xB )
          {
            _RDI->s.eventParm2 |= 0x40u;
            _RBX->s.eventParm2 |= 0x40u;
          }
          if ( isFatal )
          {
            _RDI->s.eventParm2 |= 2u;
            _RBX->s.eventParm2 |= 2u;
          }
          m_objIndex = inflictor->turretHandle.m_objIndex;
          if ( m_objIndex )
          {
            v32 = m_objIndex - 1;
            if ( !(_BYTE)GTurret::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 226, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
              __debugbreak();
            if ( (unsigned int)v32 >= 0x80 )
            {
              LODWORD(v38) = 128;
              LODWORD(v37) = v32;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 227, ASSERT_TYPE_ASSERT, "(unsigned)( turretIndex ) < (unsigned)( ( sizeof( *array_counter( ms_turretArray ) ) + 0 ) )", "turretIndex doesn't index ARRAY_COUNT( ms_turretArray )\n\t%i not in [0, %i)", v37, v38) )
                __debugbreak();
            }
            v33 = GTurret::ms_turretArray[v32] == NULL;
            v34 = &GTurret::ms_turretArray[v32];
            if ( v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 228, ASSERT_TYPE_ASSERT, "( ms_turretArray[turretIndex] )", (const char *)&queryFormat, "ms_turretArray[turretIndex]") )
              __debugbreak();
            v35 = *v34;
            if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 417, ASSERT_TYPE_ASSERT, "(turret)", (const char *)&queryFormat, "turret") )
              __debugbreak();
            v35->m_data.flags |= 0x10000u;
          }
          if ( (dflags & 8) != 0 )
            _RDI->s.eventParm2 |= 0x200u;
          if ( (dflags & 0x1000) != 0 )
          {
            _RDI->s.eventParm2 |= 0x800u;
            _RBX->s.eventParm2 |= 0x800u;
          }
          G_BulletMP_MarkPotentialImpactFixup(_RDI, _RDI->s.groundEntityNum, partName);
          v36 = truncate_cast<short,int>(_RBX->s.clientNum);
          G_BulletMP_MarkPotentialImpactFixup(_RBX, v36, partName);
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
  weapClass_t WeaponClass; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v29; 

  _RBP = inflictor;
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
    LODWORD(v28) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 634, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v28, ComCharacterLimits::ms_gameData.m_characterCount) )
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
    if ( _RBP )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+130h]
        vsubss  xmm3, xmm0, dword ptr [r13+130h]
        vmovss  xmm1, dword ptr [rbp+134h]
        vsubss  xmm2, xmm1, dword ptr [r13+134h]
        vmovss  xmm0, dword ptr [rbp+138h]
        vsubss  xmm4, xmm0, dword ptr [r13+138h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, cs:__real@45c80000
      }
    }
    v14 = 1i64;
    goto LABEL_51;
  }
  if ( (unsigned int)meansOfDeath >= 0x19 )
  {
    LODWORD(v29) = 25;
    LODWORD(v28) = meansOfDeath;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1133, ASSERT_TYPE_ASSERT, "(unsigned)( mod ) < (unsigned)( MOD_NUM )", "mod doesn't index MOD_NUM\n\t%i not in [0, %i)", v28, v29) )
      __debugbreak();
  }
  if ( (unsigned int)(meansOfDeath - 3) <= 4 || meansOfDeath == 16 )
  {
    v14 = 2i64;
    goto LABEL_51;
  }
  if ( G_Weapon_ShouldPlayMeleeChargeDeathAnim(meansOfDeath, _RBP, clientNum) )
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
      v27 = 9;
      if ( WeaponClass == WEAPCLASS_SPREAD )
        v27 = 1;
      v14 = v27;
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
  char v15; 
  const dvar_t *v18; 
  int integer; 
  const dvar_t *v26; 
  int v37; 
  const dvar_t *v52; 
  const dvar_t *v53; 
  int v55; 
  GHandler *Handler; 
  __int64 v70; 
  vec2_t vec; 
  vec3_t forward; 
  playerState_s *psa; 
  __int128 v75; 
  char v80; 

  __asm { vmovaps [rsp+0F0h+var_70], xmm9 }
  psa = (playerState_s *)ps;
  _RBX = vDir;
  _RDI = self;
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000001000000030000000200000000
    vmovdqu [rbp+4Fh+var_88], xmm0
  }
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 846, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v70) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 847, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v70, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  _R13 = (characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)clientNum);
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 851, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0F0h+var_50], xmm7
    vmovaps [rsp+0F0h+var_60], xmm8
  }
  AngleVectors(&ps->viewangles, &forward, NULL, NULL);
  v15 = 0;
  if ( _RBX )
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rbx]
      vmovss  xmm8, dword ptr [rbx+4]
    }
    v15 = 1;
  }
  else
  {
    __asm
    {
      vmovss  xmm8, dword ptr [rbp+4Fh+vec]
      vmovss  xmm7, dword ptr [rbp+4Fh+vec]
    }
  }
  v18 = DVARINT_g_debugPlayerDeath_HitDirection;
  if ( !DVARINT_g_debugPlayerDeath_HitDirection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugPlayerDeath_HitDirection") )
    __debugbreak();
  __asm { vmovaps [rsp+0F0h+var_40], xmm6 }
  Dvar_CheckFrontendServerThread(v18);
  integer = v18->current.integer;
  __asm { vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000 }
  if ( integer < 4 )
  {
    switch ( integer )
    {
      case 0:
        __asm
        {
          vmovss  xmm5, dword ptr [rbp+4Fh+forward]
          vmovss  xmm6, dword ptr [rbp+4Fh+forward+4]
          vxorps  xmm7, xmm5, xmm9
          vxorps  xmm8, xmm6, xmm9
        }
        goto LABEL_42;
      case 1:
        __asm
        {
          vmovss  xmm6, dword ptr [rbp+4Fh+forward+4]
          vmovss  xmm5, dword ptr [rbp+4Fh+forward]
          vmovaps xmm7, xmm6
          vxorps  xmm8, xmm5, xmm9
        }
        goto LABEL_42;
      case 2:
        __asm
        {
          vmovss  xmm6, dword ptr [rbp+4Fh+forward+4]
          vmovss  xmm5, dword ptr [rbp+4Fh+forward]
          vxorps  xmm7, xmm6, xmm9
          vmovaps xmm8, xmm5
        }
        goto LABEL_42;
      case 3:
        __asm
        {
          vmovss  xmm5, dword ptr [rbp+4Fh+forward]
          vmovss  xmm6, dword ptr [rbp+4Fh+forward+4]
          vmovaps xmm7, xmm5
          vmovaps xmm8, xmm6
        }
        goto LABEL_42;
    }
    goto LABEL_41;
  }
  if ( v15 )
  {
LABEL_41:
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+4Fh+forward+4]
      vmovss  xmm5, dword ptr [rbp+4Fh+forward]
    }
    goto LABEL_42;
  }
  v26 = DVARBOOL_player_align_death_anim_unknown_direction_update_angles;
  if ( !DVARBOOL_player_align_death_anim_unknown_direction_update_angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_align_death_anim_unknown_direction_update_angles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( !v26->current.enabled )
  {
    v37 = 0;
    goto LABEL_60;
  }
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+4Fh+forward]
    vmovss  xmm6, dword ptr [rbp+4Fh+forward+4]
    vxorps  xmm4, xmm5, xmm9
    vxorps  xmm3, xmm6, xmm9
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm1, cs:__real@3f800000
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm7, xmm1, xmm4
    vmulss  xmm8, xmm1, xmm3
  }
LABEL_42:
  __asm
  {
    vmovd   xmm0, [rbp+4Fh+meansOfDeath]
    vmovss  xmm3, cs:COSINE45
  }
  _EAX = 8;
  __asm
  {
    vmovd   xmm1, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:COSINE_MELEE_ORIENT_ANGLE_459
    vblendvps xmm4, xmm3, xmm1, xmm2
    vmulss  xmm0, xmm8, xmm6
    vmulss  xmm2, xmm7, xmm5
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vcomiss xmm1, xmm0
    vmovss  dword ptr [rbp+4Fh+vec], xmm4
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm3, xmm6
  }
  v52 = DCONST_DVARBOOL_player_align_death_anim;
  v37 = DWORD2(v75);
  if ( !DCONST_DVARBOOL_player_align_death_anim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_align_death_anim") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  if ( v52->current.enabled && !BG_IsPlayerInExecution(psa) )
  {
    __asm
    {
      vmovss  dword ptr [rbp+4Fh+vec], xmm7
      vmovss  dword ptr [rbp+4Fh+vec+4], xmm8
    }
    *(double *)&_XMM0 = vectoyaw(&vec);
    v53 = DCONST_DVARINT_player_align_death_anim_ms;
    __asm { vmovaps xmm7, xmm0 }
    if ( !DCONST_DVARINT_player_align_death_anim_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_align_death_anim_ms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v53);
    v55 = v53->current.integer;
    if ( v55 > 0 )
    {
      if ( SV_IsAgent(_RDI->s.number) && SV_Agent_IsScripted(_RDI->s.number) )
        __asm { vmovss  xmm6, dword ptr [rdi+140h] }
      else
        __asm { vmovss  xmm6, dword ptr [r13+800h] }
      __asm
      {
        vmovaps xmm1, xmm6; angle2
        vmovaps xmm0, xmm7; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm { vmovss  xmm1, cs:__real@447a0000 }
      _RDI->s.lerp.apos.trType = TR_LINEAR_STOP;
      _RDI->s.lerp.apos.trTime = level.time;
      _RDI->s.lerp.apos.trDuration = v55;
      __asm
      {
        vxorps  xmm2, xmm2, xmm2
        vmovss  dword ptr [rdi+44h], xmm6
      }
      _RDI->s.lerp.apos.trBase.v[0] = 0.0;
      *(_QWORD *)&_RDI->s.lerp.apos.trBase.z = 0i64;
      __asm
      {
        vcvtsi2ss xmm2, xmm2, ebx
        vdivss  xmm2, xmm1, xmm2
        vmulss  xmm3, xmm0, xmm2
        vmovss  dword ptr [rdi+50h], xmm3
      }
      _RDI->s.lerp.apos.trDelta.v[2] = 0.0;
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rbp+4Fh+ps], xmm6
        vmovss  dword ptr [rbp+4Fh+ps+4], xmm7
        vmovss  [rbp+4Fh+var_90], xmm6
      }
      Handler = GHandler::getHandler();
      if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 949, ASSERT_TYPE_ASSERT, "(handler != nullptr)", (const char *)&queryFormat, "handler != nullptr") )
        __debugbreak();
      Handler->SetEntityAngles(Handler, clientNum, (const vec3_t *)&psa);
    }
  }
LABEL_60:
  BG_SetConditionValue(_R13, 11, v37);
  __asm
  {
    vmovaps xmm8, [rsp+0F0h+var_60]
    vmovaps xmm7, [rsp+0F0h+var_50]
    vmovaps xmm6, [rsp+0F0h+var_40]
  }
  _R11 = &v80;
  __asm { vmovaps xmm9, xmmword ptr [r11-40h] }
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
  characterInfo_t *v10; 
  char v38; 
  char v40; 
  unsigned __int64 v41; 
  vec3_t angles; 
  tmat33_t<vec3_t> out; 
  char v50; 
  tmat33_t<vec3_t> axis; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  _RBX = ps;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 789, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v10 = (characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)clientNum);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 792, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1DCh]
    vxorps  xmm9, xmm9, xmm9
    vmovss  dword ptr [rsp+108h+angles], xmm9
    vmovss  dword ptr [rsp+108h+angles+8], xmm9
    vmovss  dword ptr [rsp+108h+angles+4], xmm0
  }
  AnglesToAxis(&angles, &axis);
  MatrixTranspose(&axis, &out);
  _RBX = (char *)&_RBX->velocity;
  if ( _RBX == &v50 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+8]
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx]
    vmulss  xmm1, xmm4, dword ptr [rsp+108h+out]
    vmulss  xmm0, xmm5, dword ptr [rsp+108h+out+0Ch]
    vmulss  xmm3, xmm4, dword ptr [rsp+108h+out+4]
  }
  _RBX = DCONST_DVARFLT_player_strafeAnimCosAngle;
  __asm
  {
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rsp+108h+out+18h]
    vmulss  xmm0, xmm5, dword ptr [rsp+108h+out+10h]
    vaddss  xmm8, xmm2, xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+108h+out+1Ch]
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm7, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm3, xmm8, xmm8
    vaddss  xmm1, xmm3, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm6, xmm8, xmm1
    vmulss  xmm7, xmm1, xmm7
  }
  if ( !DCONST_DVARFLT_player_strafeAnimCosAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_strafeAnimCosAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vcomiss xmm6, xmm0
  }
  if ( v38 | v40 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
      vcomiss xmm6, xmm0
    }
    if ( v38 )
    {
      v41 = 3i64;
    }
    else
    {
      __asm { vcomiss xmm7, xmm9 }
      if ( v38 )
      {
        v41 = 2i64;
      }
      else
      {
        v41 = 0i64;
        __asm { vcomiss xmm7, xmm9 }
      }
    }
  }
  else
  {
    v41 = 0i64;
  }
  BG_SetConditionValue(v10, 10, v41);
  _R11 = &v52;
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
  bool m_isBulletDamage; 
  const gentity_s *v22; 
  __int64 meansOfDeath; 
  unsigned int NumWeapons; 
  GExtraDamageParams extraParams; 
  Weapon weapon; 

  _RBX = r_weapon;
  if ( SV_UserMoveWorkersMP_IsInWorkerContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 1855, ASSERT_TYPE_ASSERT, "( !SV_UserMoveWorkersMP_IsInWorkerContext() )", (const char *)&queryFormat, "!SV_UserMoveWorkersMP_IsInWorkerContext()") )
    __debugbreak();
  __asm
  {
    vmovups ymm2, ymmword ptr [rbx]
    vmovups xmm0, xmmword ptr [rbx+20h]
    vmovsd  xmm1, qword ptr [rbx+30h]
  }
  m_isBulletDamage = isAlternate;
  *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&r_weapon->weaponCamo;
  __asm { vmovd   eax, xmm2 }
  extraParams.m_isBulletDamage = isAlternate;
  __asm
  {
    vmovups ymmword ptr [rsp+108h+weapon.weaponIdx], ymm2
    vmovups xmmword ptr [rsp+108h+weapon.attachmentVariationIndices+5], xmm0
    vmovsd  qword ptr [rsp+108h+weapon.attachmentVariationIndices+15h], xmm1
  }
  if ( !(_WORD)_EAX )
  {
    if ( inflictor )
    {
      v22 = inflictor;
LABEL_9:
      G_CombatMP_GetWeaponForEntity(v22, &weapon, &extraParams.m_isBulletDamage);
      m_isBulletDamage = extraParams.m_isBulletDamage;
      goto LABEL_10;
    }
    if ( attacker )
    {
      v22 = attacker;
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
  float v9; 

  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+68h+var_48], xmm0
  }
  return G_CombatMP_GetRadiusDamageFromPos_Internal(ent, &ent->r.currentOrigin, ignoreEnt, damageOrigin, v9, NULL, contentMask, 0, NULL, detailTrace, priorityMap);
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
  gentity_s *v25; 
  gentity_s *parent; 
  const bitarray<224> *AllTeamFlags; 
  WeaponDef *v42; 
  const dvar_t *v43; 
  bool enabled; 
  __int64 v58; 
  entityType_s eType; 
  entityType_s v61; 
  bool detailTrace; 
  unsigned __int8 *priorityMap; 
  int RadiusDamageMask; 
  bool Bool_Internal_DebugName; 
  bool v76; 
  bool v77; 
  bool v78; 
  const gentity_s *v79; 
  bool v83; 
  meansOfDeath_t v97; 
  Vehicle *vehicle; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float ignoreEnts; 
  int *ignoreEntsa; 
  int ignoreEntsb; 
  int ignoreEntsc; 
  float ignoreEntsd; 
  float ignoreEntse; 
  vec3_t *impulseVecOverride; 
  float impulseVecOverridea; 
  __int64 randSeed; 
  double randSeeda; 
  unsigned int randSeedb; 
  float removeDuplicatesa; 
  __int64 removeDuplicates; 
  char v148; 
  bool v149; 
  GExtraDamageParams extraParams; 
  int v151; 
  float radius_min; 
  gentity_s *attackera; 
  BgExplosionDamageRangeInfo *damageRangeInfoa; 
  vec3_t *coneDirectiona; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  WeaponDef *weapDef; 
  vec3_t v159; 
  vec3_t dir; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  Bounds bounds; 
  __int16 v164[2048]; 

  _R14 = damageRangeInfo;
  v25 = attacker;
  _R15 = origin;
  damageRangeInfoa = (BgExplosionDamageRangeInfo *)damageRangeInfo;
  coneDirectiona = (vec3_t *)coneDirection;
  attackera = attacker;
  if ( attacker )
  {
    __asm
    {
      vmovaps [rsp+1200h+var_40], xmm6
      vmovaps [rsp+1200h+var_50], xmm7
      vmovaps [rsp+1200h+var_60], xmm8
      vmovaps [rsp+1200h+var_70], xmm9
      vmovaps [rsp+1200h+var_80], xmm10
      vmovaps [rsp+1200h+var_90], xmm11
      vmovaps [rsp+1200h+var_A0], xmm12
      vmovaps [rsp+1200h+var_B0], xmm13
      vmovaps [rsp+1200h+var_C0], xmm14
      vmovaps [rsp+1200h+var_D0], xmm15
    }
    if ( BG_AISystemEnabled() )
    {
      parent = v25;
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
      Actor_BroadcastPointEvent(parent, AI_EV_EXPLOSION, AllTeamFlags, _R15);
    }
    *(double *)&_XMM0 = BG_ExplosionForceScalar(r_weapon, isAlternate);
    __asm
    {
      vmovss  xmm3, dword ptr [r14+10h]; innerDamage
      vmovss  xmm2, dword ptr [r14+0Ch]; radius
      vmovss  dword ptr [rsp+1200h+removeDuplicates], xmm0
      vmovss  xmm0, dword ptr [r14+18h]
      vxorps  xmm10, xmm10, xmm10
      vmovss  dword ptr [rsp+1200h+ignoreEnts], xmm10
      vmovss  dword ptr [rsp+1200h+fmt], xmm0
    }
    Physics_ApplyRadiusForce(PHYSICS_WORLD_ID_FIRST, _R15, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt, ignoreEnts, &vec3_origin, level.time, removeDuplicatesa);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+0Ch]
      vmovss  xmm11, cs:__real@3f800000
      vmovss  xmm7, dword ptr [r15]
      vmovss  xmm8, dword ptr [r15+4]
      vmovss  xmm9, dword ptr [r15+8]
      vmaxss  xmm12, xmm0, xmm11
      vmulss  xmm6, xmm12, cs:__real@3fb504f3
      vmulss  xmm15, xmm12, xmm12
    }
    v42 = (WeaponDef *)BG_WeaponDef(r_weapon, isAlternate);
    v43 = DVARBOOL_g_radiusDamageCalcDetailBounds;
    weapDef = v42;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rax+6E8h]
      vmovss  [rbp+1100h+var_1178], xmm0
    }
    if ( !DVARBOOL_g_radiusDamageCalcDetailBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_radiusDamageCalcDetailBounds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    enabled = v43->current.enabled;
    _RBX = DCONST_DVARFLT_bg_radiusDamageMax;
    v149 = enabled;
    if ( !DCONST_DVARFLT_bg_radiusDamageMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_radiusDamageMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm1, xmm0, xmm0
      vsubss  xmm0, xmm8, xmm6
      vmovss  dword ptr [rbp+1100h+aabbMin+4], xmm0
      vminss  xmm14, xmm1, xmm15
      vaddss  xmm0, xmm6, xmm7
      vsubss  xmm1, xmm9, xmm6
    }
    collectedEnts.ids = (unsigned __int16 *)v164;
    collectedEnts.count = 0;
    __asm
    {
      vmovss  dword ptr [rbp+1100h+aabbMax], xmm0
      vmovss  dword ptr [rbp+1100h+aabbMin+8], xmm1
      vaddss  xmm0, xmm6, xmm9
      vsubss  xmm2, xmm7, xmm6
      vaddss  xmm1, xmm6, xmm8
    }
    collectedEnts.countMax = 2048;
    __asm
    {
      vmovss  dword ptr [rbp+1100h+aabbMax+8], xmm0
      vmovss  dword ptr [rbp+1100h+aabbMin], xmm2
      vmovss  dword ptr [rbp+1100h+aabbMax+4], xmm1
    }
    PhysicsQuery_ImmediateAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, -1, 0, NULL, &collectedEnts, NULL, 1);
    if ( !inflictor || inflictor->s.eType != ET_MISSILE || (v148 = 1, (inflictor->c.missile.flags & 0x8000) == 0) )
      v148 = 0;
    __asm { vmovss  xmm13, [rbp+1100h+arg_28] }
    v58 = 0i64;
    v151 = 0;
    if ( collectedEnts.count )
    {
      do
      {
        _RBX = &g_entities[(unsigned __int16)v164[v58]];
        if ( _RBX != ignore )
        {
          if ( !environmentOnly )
            goto LABEL_38;
          if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
            __debugbreak();
          eType = _RBX->s.eType;
          if ( ((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM )
          {
LABEL_38:
            if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 0x10u) && (_RBX->flags.m_flags[0] & 0x10) == 0 && (!_RBX->client || !level.bPlayerIgnoreRadiusDamage) )
            {
              if ( !v148 )
                goto LABEL_39;
              v61 = inflictor->s.eType;
              if ( v61 != ET_MISSILE )
              {
                LODWORD(removeDuplicates) = 4;
                LODWORD(randSeed) = v61;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 2344, ASSERT_TYPE_ASSERT, "( inflictor->s.eType ) == ( ET_MISSILE )", "%s == %s\n\t%i, %i", "inflictor->s.eType", "ET_MISSILE", randSeed, removeDuplicates) )
                  __debugbreak();
              }
              if ( inflictor->s.staticState.general.xmodel != _RBX->s.number )
              {
LABEL_39:
                __asm { vmovsd  xmm0, qword ptr [r15] }
                v159.v[2] = _R15->v[2];
                __asm { vmovsd  [rbp+1100h+var_1140], xmm0 }
                *(float *)&_XMM0 = G_Combat_GetApproxDistSquaredToModel(_RBX, &v159, v149, &bounds, (int *)&radius_min);
                __asm
                {
                  vcomiss xmm0, xmm15
                  vmovaps xmm6, xmm0
                }
                if ( v76 )
                {
                  if ( _RBX->client )
                  {
                    if ( inflictor )
                    {
                      __asm
                      {
                        vmovss  xmm0, [rbp+1100h+var_1178]
                        vmovaps xmm3, xmm12; radius_max
                        vmovss  dword ptr [rsp+1200h+fmt], xmm0
                      }
                      G_Combat_RadiusEffectsEnt(inflictor->s.number, _RBX, _R15, *(float *)&_XMM3, fmta, v25, inflictor->c.missile.team, r_weapon, isAlternate);
                    }
                    detailTrace = BG_WeaponRadiusDamageDetailTrace(r_weapon, isAlternate);
                    priorityMap = BG_GetWeaponPriorityMap(r_weapon, isAlternate);
                    __asm
                    {
                      vsqrtss xmm6, xmm6, xmm6
                      vmovaps xmm1, xmm6; distance
                    }
                    *(double *)&_XMM0 = BG_GetExplosionDamageFromRangeInfo(damageRangeInfoa, *(const float *)&_XMM1);
                    __asm
                    {
                      vdivss  xmm1, xmm6, xmm12
                      vsubss  xmm9, xmm11, xmm1
                      vmovaps xmm8, xmm0
                    }
                    if ( runOcclusionTraces )
                    {
                      RadiusDamageMask = G_Combat_GetRadiusDamageMask(weapDef);
                      __asm { vmovss  dword ptr [rsp+1200h+fmt], xmm13 }
                      *(float *)&_XMM0 = G_CombatMP_GetRadiusDamageFromPos_Internal(_RBX, &_RBX->r.currentOrigin, inflictor, _R15, fmtb, coneDirectiona, RadiusDamageMask, LODWORD(radius_min) != 0, &bounds, detailTrace, priorityMap);
                      __asm { vmovaps xmm7, xmm0 }
                    }
                    else
                    {
                      __asm { vmovaps xmm7, xmm11 }
                    }
                    *(double *)&_XMM0 = G_Weapon_GetShieldBlastDamageProtection(_RBX, _R15);
                    __asm { vmovaps xmm6, xmm0 }
                    Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_riotshield_ignoreonstick_enabled, "riotshield_ignoreonstick_enabled");
                    v76 = 0;
                    v77 = !Bool_Internal_DebugName;
                    v78 = !Bool_Internal_DebugName;
                    if ( Bool_Internal_DebugName && (v79 = G_Utils_GetParent(inflictor), v76 = 0, v77 = v79 == NULL, v78 = v79 == NULL, v79) && (v76 = v79 < _RBX, v77 = v79 == _RBX, v78 = v79 <= _RBX, v79 == _RBX) )
                    {
                      __asm { vmovaps xmm6, xmm10 }
                    }
                    else
                    {
                      __asm { vcomiss xmm6, xmm10 }
                      if ( v76 )
                        goto LABEL_72;
                      __asm { vcomiss xmm6, xmm11 }
                      if ( !v78 )
                      {
LABEL_72:
                        __asm
                        {
                          vmovsd  xmm1, cs:__real@3ff0000000000000
                          vmovsd  qword ptr [rsp+1200h+randSeed], xmm1
                          vxorpd  xmm1, xmm1, xmm1
                          vmovsd  [rsp+1200h+impulseVecOverride], xmm1
                          vcvtss2sd xmm0, xmm6, xmm6
                          vmovsd  [rsp+1200h+ignoreEnts], xmm0
                        }
                        v83 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_combat_mp.cpp", 2402, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( shieldProtection ) && ( shieldProtection ) <= ( 1.f )", "shieldProtection not in [0.f, 1.f]\n\t%g not in [%g, %g]", *(double *)&ignoreEntsa, *(double *)&impulseVecOverride, randSeeda);
                        v76 = 0;
                        v77 = !v83;
                        v78 = !v83;
                        if ( v83 )
                          __debugbreak();
                      }
                      __asm { vcomiss xmm6, xmm10 }
                      if ( !v78 )
                      {
                        __asm
                        {
                          vmovaps xmm3, xmm6; shieldProtection
                          vmovaps xmm2, xmm7; originalDamageScale
                          vmovaps xmm1, xmm8; originalDamageRawPoints
                        }
                        G_Weapon_AddShieldSplashDamageEvent(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
                        __asm
                        {
                          vsubss  xmm0, xmm11, xmm6
                          vmulss  xmm7, xmm7, xmm0
                        }
                      }
                    }
                    __asm { vcomiss xmm7, xmm10 }
                    if ( v76 || v77 )
                    {
                      v25 = attackera;
                    }
                    else
                    {
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rbx+130h]
                        vsubss  xmm1, xmm0, dword ptr [r15]
                        vmovss  xmm2, dword ptr [rbx+134h]
                        vsubss  xmm0, xmm2, dword ptr [r15+4]
                        vmovss  dword ptr [rbp+1100h+dir], xmm1
                        vmovss  xmm1, dword ptr [rbx+138h]
                        vsubss  xmm2, xmm1, dword ptr [r15+8]
                        vmulss  xmm1, xmm7, xmm8
                        vcomiss xmm1, xmm10
                        vmovss  dword ptr [rbp+1100h+dir+4], xmm0
                        vaddss  xmm0, xmm2, cs:__real@41c00000
                        vmovss  dword ptr [rbp+1100h+dir+8], xmm0
                      }
                      if ( v76 || v77 )
                        goto LABEL_60;
                      __asm { vcomiss xmm1, xmm11 }
                      _EDI = 1;
                      if ( !v76 )
LABEL_60:
                        __asm { vcvttss2si edi, xmm1 }
                      if ( G_Utils_IsClientOrAgent(_RBX) )
                      {
                        __asm { vcomiss xmm6, xmm10 }
                        v97 = mod;
                        ignoreEntsb = _EDI;
                        v25 = attackera;
                        G_CombatMP_ShieldNotifyAndDamageInternal(_RBX, inflictor, attackera, &dir, _R15, ignoreEntsb, 133, mod, r_weapon, isAlternate, 0);
                      }
                      else
                      {
                        v97 = mod;
                        extraParams = 0;
                        ignoreEntsc = _EDI;
                        v25 = attackera;
                        G_CombatMP_Damage_Internal(_RBX, inflictor, attackera, &dir, _R15, ignoreEntsc, 5, mod, r_weapon, isAlternate, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, &extraParams);
                      }
                      vehicle = _RBX->vehicle;
                      if ( vehicle )
                      {
                        __asm
                        {
                          vmovss  xmm6, dword ptr [rbp+1100h+dir]
                          vmovss  xmm7, dword ptr [rbp+1100h+dir+4]
                          vmovss  xmm5, dword ptr [rbp+1100h+dir+8]
                          vmulss  xmm1, xmm6, xmm6
                          vmulss  xmm0, xmm7, xmm7
                          vaddss  xmm2, xmm1, xmm0
                          vmulss  xmm1, xmm5, xmm5
                          vaddss  xmm0, xmm2, xmm1
                          vsqrtss xmm4, xmm0, xmm0
                          vcomiss xmm4, cs:__real@3a83126f
                          vcmpless xmm0, xmm4, cs:__real@80000000
                          vblendvps xmm0, xmm4, xmm11, xmm0
                          vdivss  xmm2, xmm11, xmm0
                          vmulss  xmm0, xmm6, xmm2
                          vmovss  dword ptr [rbp+1100h+dir], xmm0
                          vmulss  xmm0, xmm5, xmm2
                          vmulss  xmm1, xmm7, xmm2
                          vmovss  dword ptr [rbp+1100h+dir+8], xmm0
                          vmovss  dword ptr [rbp+1100h+dir+4], xmm1
                          vmovaps xmm3, xmm9; forceScale
                        }
                        G_Vehicle_Knockback(vehicle, &dir, v97, *(float *)&_XMM3, NULL);
                      }
                    }
                  }
                  else
                  {
                    __asm { vcomiss xmm0, xmm14 }
                  }
                }
              }
            }
          }
        }
        v58 = (unsigned int)(v151 + 1);
        v151 = v58;
      }
      while ( (unsigned int)v58 < collectedEnts.count );
      _R14 = damageRangeInfoa;
    }
    __asm
    {
      vmovss  xmm1, dword ptr [r14+10h]
      vmovss  xmm0, dword ptr [r14+18h]
      vmovss  dword ptr [rsp+1200h+ignoreEnts], xmm0
      vmovss  dword ptr [rsp+1200h+fmt], xmm1
      vmovaps xmm1, xmm12; radius
      vmovaps xmm2, xmm13; coneAngleCos
    }
    G_Glass_RadiusDamage(_R15, *(float *)&_XMM1, *(float *)&_XMM2, coneDirectiona, fmtc, ignoreEntsd);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+18h]
      vmovss  xmm1, dword ptr [r14+10h]
      vmovss  [rsp+1200h+randSeed], xmm0
      vmovss  dword ptr [rsp+1200h+impulseVecOverride], xmm1
      vmovss  dword ptr [rsp+1200h+ignoreEnts], xmm12
    }
    ScriptableSv_RadiusDamage(inflictor, v25, r_weapon, isAlternate, _R15, ignoreEntse, impulseVecOverridea, *(const float *)&randSeedb, mod, runOcclusionTraces);
    __asm
    {
      vmovaps xmm15, [rsp+1200h+var_D0]
      vmovaps xmm14, [rsp+1200h+var_C0]
      vmovaps xmm13, [rsp+1200h+var_B0]
      vmovaps xmm12, [rsp+1200h+var_A0]
      vmovaps xmm11, [rsp+1200h+var_90]
      vmovaps xmm10, [rsp+1200h+var_80]
      vmovaps xmm9, [rsp+1200h+var_70]
      vmovaps xmm8, [rsp+1200h+var_60]
      vmovaps xmm7, [rsp+1200h+var_50]
      vmovaps xmm6, [rsp+1200h+var_40]
    }
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

