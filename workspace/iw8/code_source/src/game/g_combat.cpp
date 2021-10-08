/*
==============
G_Debug_VisualizeRadiusDamageTraces
==============
*/

void __fastcall G_Debug_VisualizeRadiusDamageTraces(gentity_s *inflictor, gentity_s *targ, const vec3_t *centerPos, const vec3_t *targetPos, float coneAngleCos, const vec3_t *coneDirection, int contentMask, unsigned __int8 *priorityMap)
{
  ?G_Debug_VisualizeRadiusDamageTraces@@YAXPEAUgentity_s@@0AEBTvec3_t@@1MPEBT2@HPEAE@Z(inflictor, targ, centerPos, targetPos, coneAngleCos, coneDirection, contentMask, priorityMap);
}

/*
==============
GCombat::QueueDeathInstance
==============
*/

void __fastcall GCombat::QueueDeathInstance(GCombat *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, int timeOffset, int modelIndex, scr_string_t partName)
{
  ?QueueDeathInstance@GCombat@@QEAAXPEAUgentity_s@@PEBU2@0PEBTvec3_t@@2HHHAEBUWeapon@@_NW4hitLocation_t@@HHW4scr_string_t@@@Z(this, targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, timeOffset, modelIndex, partName);
}

/*
==============
GCombat::ClearQueuedDamages
==============
*/

void __fastcall GCombat::ClearQueuedDamages(GCombat *this)
{
  ?ClearQueuedDamages@GCombat@@IEAAXXZ(this);
}

/*
==============
GCombat::QueuedDamageEnabled
==============
*/

bool __fastcall GCombat::QueuedDamageEnabled(GCombat *this)
{
  return ?QueuedDamageEnabled@GCombat@@QEBA_NXZ(this);
}

/*
==============
G_Combat_LookAtKiller
==============
*/

void __fastcall G_Combat_LookAtKiller(const gentity_s *self, const gentity_s *inflictor, const gentity_s *attacker, playerState_s *ps)
{
  ?G_Combat_LookAtKiller@@YAXPEBUgentity_s@@00PEAUplayerState_s@@@Z(self, inflictor, attacker, ps);
}

/*
==============
GCombat::ProcessQueuedClientDeaths
==============
*/

void __fastcall GCombat::ProcessQueuedClientDeaths(GCombat *this)
{
  ?ProcessQueuedClientDeaths@GCombat@@QEAAXXZ(this);
}

/*
==============
G_Combat_HitLocFromScriptParam
==============
*/

hitLocation_t __fastcall G_Combat_HitLocFromScriptParam(scrContext_t *scrContext, int scrParam)
{
  return ?G_Combat_HitLocFromScriptParam@@YA?AW4hitLocation_t@@AEAUscrContext_t@@H@Z(scrContext, scrParam);
}

/*
==============
G_Combat_DamageNotify
==============
*/

void __fastcall G_Combat_DamageNotify(scr_string_t notify, gentity_s *targ, const gentity_s *attacker, const gentity_s *inflictor, const vec3_t *dir, const vec3_t *point, int damage, int mod, int dFlags, unsigned int modelIndex, scr_string_t partName, const Weapon *r_weapon, bool isAlternate, const vec3_t *surfaceNormal)
{
  ?G_Combat_DamageNotify@@YAXW4scr_string_t@@PEAUgentity_s@@PEBU2@2PEBTvec3_t@@3HHHI0AEBUWeapon@@_N3@Z(notify, targ, attacker, inflictor, dir, point, damage, mod, dFlags, modelIndex, partName, r_weapon, isAlternate, surfaceNormal);
}

/*
==============
G_Combat_MeansOfDeathFromScriptParam
==============
*/

meansOfDeath_t __fastcall G_Combat_MeansOfDeathFromScriptParam(scrContext_t *scrContext, int scrParam)
{
  return ?G_Combat_MeansOfDeathFromScriptParam@@YA?AW4meansOfDeath_t@@AEAUscrContext_t@@H@Z(scrContext, scrParam);
}

/*
==============
G_Combat_GetHitLocationString
==============
*/

scr_string_t __fastcall G_Combat_GetHitLocationString(hitLocation_t hitLoc)
{
  return ?G_Combat_GetHitLocationString@@YA?AW4scr_string_t@@W4hitLocation_t@@@Z(hitLoc);
}

/*
==============
GCombat::GetLocDamageMult
==============
*/

double __fastcall GCombat::GetLocDamageMult(GCombat *this, hitLocation_t hitLoc, int tableIndex)
{
  double result; 

  *(float *)&result = ?GetLocDamageMult@GCombat@@QEBAMW4hitLocation_t@@H@Z(this, hitLoc, tableIndex);
  return result;
}

/*
==============
G_Combat_IsClientFlashbanged
==============
*/

int __fastcall G_Combat_IsClientFlashbanged(playerState_s *ps)
{
  return ?G_Combat_IsClientFlashbanged@@YAHPEAUplayerState_s@@@Z(ps);
}

/*
==============
GCombat::ProcessQueuedDamages
==============
*/

void __fastcall GCombat::ProcessQueuedDamages(GCombat *this)
{
  ?ProcessQueuedDamages@GCombat@@QEAAXXZ(this);
}

/*
==============
G_Combat_GetRadiusDamageMask
==============
*/

int __fastcall G_Combat_GetRadiusDamageMask(const WeaponDef *weapDef)
{
  return ?G_Combat_GetRadiusDamageMask@@YAHPEBUWeaponDef@@@Z(weapDef);
}

/*
==============
G_Combat_DamageNotify_BuildId
==============
*/

unsigned int __fastcall G_Combat_DamageNotify_BuildId(const gentity_s *attacker)
{
  return ?G_Combat_DamageNotify_BuildId@@YAIPEBUgentity_s@@@Z(attacker);
}

/*
==============
G_Combat_RadiusEffectsEnt
==============
*/

void __fastcall G_Combat_RadiusEffectsEnt(int inflictorEntNum, gentity_s *victim, const vec3_t *blastOrigin, float radius_max, float radius_min, gentity_s *attacker, team_t team, const Weapon *r_weapon, bool isAlternate)
{
  ?G_Combat_RadiusEffectsEnt@@YAXHPEAUgentity_s@@AEBTvec3_t@@MM0W4team_t@@AEBUWeapon@@_N@Z(inflictorEntNum, victim, blastOrigin, radius_max, radius_min, attacker, team, r_weapon, isAlternate);
}

/*
==============
G_Combat_DamageNotifyNoWeapon
==============
*/

void __fastcall G_Combat_DamageNotifyNoWeapon(scr_string_t notify, gentity_s *targ, const gentity_s *attacker, const gentity_s *inflictor, const vec3_t *dir, const vec3_t *point, int damage, int mod)
{
  ?G_Combat_DamageNotifyNoWeapon@@YAXW4scr_string_t@@PEAUgentity_s@@PEBU2@2PEBTvec3_t@@3HH@Z(notify, targ, attacker, inflictor, dir, point, damage, mod);
}

/*
==============
GCombat::IsDeathQueued
==============
*/

bool __fastcall GCombat::IsDeathQueued(GCombat *this, gentity_s *self)
{
  return ?IsDeathQueued@GCombat@@QEAA_NPEAUgentity_s@@@Z(this, self);
}

/*
==============
G_Combat_GetMeleeAttackProperties
==============
*/

void __fastcall G_Combat_GetMeleeAttackProperties(const gentity_s *inflictor, const Weapon *weapon, bool isAlternate, MeleeAnimType *outAnimType, WeaponMaterialType *outMaterial, bool *outIsAlternate, int *outVariation, MeleeResult *outResult)
{
  ?G_Combat_GetMeleeAttackProperties@@YAXPEBUgentity_s@@AEBUWeapon@@_NPEAW4MeleeAnimType@@PEAW4WeaponMaterialType@@PEA_NPEAHPEAW4MeleeResult@@@Z(inflictor, weapon, isAlternate, outAnimType, outMaterial, outIsAlternate, outVariation, outResult);
}

/*
==============
GCombat::QueueDamageInstance
==============
*/

void __fastcall GCombat::QueueDamageInstance(GCombat *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, int timeOffset, int modelIndex, scr_string_t partName, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  ?QueueDamageInstance@GCombat@@QEAAXPEAUgentity_s@@PEBU2@0PEBTvec3_t@@2HHHAEBUWeapon@@_NW4hitLocation_t@@HHW4scr_string_t@@2AEBVGExtraDamageParams@@@Z(this, targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, timeOffset, modelIndex, partName, surfaceNormal, extraParams);
}

/*
==============
G_Combat_SendMeleeCharacterImpactEvent
==============
*/

void __fastcall G_Combat_SendMeleeCharacterImpactEvent(const gentity_s *body, const gentity_s *victim, const gentity_s *inflictor, const Weapon *r_weapon, const bool isAlternate, const vec3_t *hitOrigin, const meansOfDeath_t mod)
{
  ?G_Combat_SendMeleeCharacterImpactEvent@@YAXPEBUgentity_s@@00AEBUWeapon@@_NPEBTvec3_t@@W4meansOfDeath_t@@@Z(body, victim, inflictor, r_weapon, isAlternate, hitOrigin, mod);
}

/*
==============
G_Combat_GetApproxDistSquaredToModel
==============
*/

float __fastcall G_Combat_GetApproxDistSquaredToModel(const gentity_s *ent, vec3_t *explosionOrigin, const bool calcDetailBounds, Bounds *bounds, int *outUsingDetailBounds)
{
  return ?G_Combat_GetApproxDistSquaredToModel@@YAMPEBUgentity_s@@Tvec3_t@@_NPEAUBounds@@PEAH@Z(ent, explosionOrigin, calcDetailBounds, bounds, outUsingDetailBounds);
}

/*
==============
GCombat::GCombat
==============
*/

void __fastcall GCombat::GCombat(GCombat *this)
{
  ??0GCombat@@QEAA@XZ(this);
}

/*
==============
G_Combat_GetHitLocationIndexFromString
==============
*/

hitLocation_t __fastcall G_Combat_GetHitLocationIndexFromString(scr_string_t sString)
{
  return ?G_Combat_GetHitLocationIndexFromString@@YA?AW4hitLocation_t@@W4scr_string_t@@@Z(sString);
}

/*
==============
GCombat::GetHitLocDamageTableIndex
==============
*/

int __fastcall GCombat::GetHitLocDamageTableIndex(GCombat *this, scr_string_t name)
{
  return ?GetHitLocDamageTableIndex@GCombat@@QEBAHW4scr_string_t@@@Z(this, name);
}

/*
==============
GCombat::SetQueuedDamageEnabled
==============
*/

void __fastcall GCombat::SetQueuedDamageEnabled(GCombat *this, bool queueEnabled)
{
  ?SetQueuedDamageEnabled@GCombat@@QEAAX_N@Z(this, queueEnabled);
}

/*
==============
GCombat::ClearQueuedClientDeaths
==============
*/

void __fastcall GCombat::ClearQueuedClientDeaths(GCombat *this)
{
  ?ClearQueuedClientDeaths@GCombat@@IEAAXXZ(this);
}

/*
==============
G_Combat_IsWithinDamageRadius
==============
*/

int __fastcall G_Combat_IsWithinDamageRadius(const vec3_t *damageOrigin, float radiusSquared, gentity_s *ent)
{
  return ?G_Combat_IsWithinDamageRadius@@YAHAEBTvec3_t@@MPEAUgentity_s@@@Z(damageOrigin, radiusSquared, ent);
}

/*
==============
GCombat::BuildQueuedDamageInstance
==============
*/

void __fastcall GCombat::BuildQueuedDamageInstance(GCombat *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, int timeOffset, int modelIndex, scr_string_t partName, GCombat::QueuedDamageInstance *outDamageInstance, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  ?BuildQueuedDamageInstance@GCombat@@IEAAXPEAUgentity_s@@PEBU2@0PEBTvec3_t@@2HHHAEBUWeapon@@_NW4hitLocation_t@@HHW4scr_string_t@@PEAUQueuedDamageInstance@1@2AEBVGExtraDamageParams@@@Z(this, targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, timeOffset, modelIndex, partName, outDamageInstance, surfaceNormal, extraParams);
}

/*
==============
G_Combat_GetDamageReturnCodeDescription
==============
*/

const char *__fastcall G_Combat_GetDamageReturnCodeDescription(const damageReturnCode_t code)
{
  return ?G_Combat_GetDamageReturnCodeDescription@@YAPEBDW4damageReturnCode_t@@@Z(code);
}

/*
==============
G_Combat_InitHitLocDmgTable
==============
*/

void G_Combat_InitHitLocDmgTable(void)
{
  ?G_Combat_InitHitLocDmgTable@@YAXXZ();
}

/*
==============
GCombat::CanRadiusDamageFromPos
==============
*/

bool __fastcall GCombat::CanRadiusDamageFromPos(GCombat *this, gentity_s *targ, const vec3_t *targetPos, gentity_s *inflictor, const vec3_t *centerPos, float radius, float coneAngleCos, const vec3_t *coneDirection, float maxHeight, bool useEyeOffset, int contentMask, bool detailTrace, unsigned __int8 *priorityMap)
{
  return ?CanRadiusDamageFromPos@GCombat@@QEBA_NPEAUgentity_s@@AEBTvec3_t@@01MMPEBT3@M_NH3PEAE@Z(this, targ, targetPos, inflictor, centerPos, radius, coneAngleCos, coneDirection, maxHeight, useEyeOffset, contentMask, detailTrace, priorityMap);
}

/*
==============
G_Combat_DispatchDamageNotifications
==============
*/

void G_Combat_DispatchDamageNotifications(void)
{
  ?G_Combat_DispatchDamageNotifications@@YAXXZ();
}

/*
==============
GCombat::GCombat
==============
*/
void GCombat::GCombat(GCombat *this)
{
  GCombat::QueuedDamageInstanceList *p_m_queuedDamageInstanceList; 
  __int64 v3; 
  __int64 v4; 
  GCombat::QueuedClientDeathInstanceList *p_m_queuedDeathInstanceList; 
  __int64 v6; 
  EntHandle *p_inflictor; 

  this->__vftable = (GCombat_vtbl *)&GCombat::`vftable';
  p_m_queuedDamageInstanceList = &this->m_queuedDamageInstanceList;
  v3 = 256i64;
  do
  {
    GCombat::QueuedDamageInstance::QueuedDamageInstance(p_m_queuedDamageInstanceList->damageInstances);
    p_m_queuedDamageInstanceList = (GCombat::QueuedDamageInstanceList *)((char *)p_m_queuedDamageInstanceList + 148);
    --v3;
  }
  while ( v3 );
  v4 = 200i64;
  p_m_queuedDeathInstanceList = &this->m_queuedDeathInstanceList;
  v6 = 200i64;
  do
  {
    GCombat::QueuedClientDeathInstance::QueuedClientDeathInstance(p_m_queuedDeathInstanceList->deaths);
    p_m_queuedDeathInstanceList = (GCombat::QueuedClientDeathInstanceList *)((char *)p_m_queuedDeathInstanceList + 148);
    --v6;
  }
  while ( v6 );
  GCombat::ClearQueuedDamages(this);
  this->m_queuedDeathInstanceList.numDeaths = 0;
  p_inflictor = &this->m_queuedDeathInstanceList.deaths[0].damage.inflictor;
  do
  {
    EntHandle::setEnt(p_inflictor - 1, NULL);
    EntHandle::setEnt(p_inflictor, NULL);
    EntHandle::setEnt(p_inflictor + 1, NULL);
    p_inflictor += 37;
    --v4;
  }
  while ( v4 );
}

/*
==============
GCombat::BuildQueuedDamageInstance
==============
*/
void GCombat::BuildQueuedDamageInstance(GCombat *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, int timeOffset, int modelIndex, scr_string_t partName, GCombat::QueuedDamageInstance *outDamageInstance, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  bool v22; 
  bool v23; 

  _RBX = outDamageInstance;
  if ( !outDamageInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 730, ASSERT_TYPE_ASSERT, "(outDamageInstance)", (const char *)&queryFormat, "outDamageInstance") )
    __debugbreak();
  memset_0(outDamageInstance, 0, sizeof(GCombat::QueuedDamageInstance));
  EntHandle::setEnt(&outDamageInstance->target, targ);
  EntHandle::setEnt(&outDamageInstance->inflictor, inflictor);
  if ( inflictor )
    outDamageInstance->initiallyHadInflictor = 1;
  EntHandle::setEnt(&outDamageInstance->attacker, attacker);
  if ( attacker )
    outDamageInstance->initiallyHadAttacker = 1;
  if ( dir )
  {
    outDamageInstance->dir = *dir;
    v22 = 1;
  }
  else
  {
    v22 = 0;
  }
  outDamageInstance->hasDir = v22;
  if ( point )
  {
    outDamageInstance->point = *point;
    v23 = 1;
  }
  else
  {
    v23 = 0;
  }
  outDamageInstance->hasPoint = v23;
  outDamageInstance->damage = damage;
  outDamageInstance->dFlags = dflags;
  outDamageInstance->mod = mod;
  _RAX = r_weapon;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbx+20h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rbx+30h], xmm0
  }
  *(_DWORD *)&outDamageInstance->weapon.weaponCamo = *(_DWORD *)&r_weapon->weaponCamo;
  outDamageInstance->isAlternate = isAlternate;
  outDamageInstance->hitLoc = hitLoc;
  outDamageInstance->timeOffset = timeOffset;
  outDamageInstance->modelIndex = modelIndex;
  outDamageInstance->partName = partName;
  outDamageInstance->extraDamageParams = *extraParams;
  if ( surfaceNormal )
  {
    outDamageInstance->surfaceNormal = *surfaceNormal;
    outDamageInstance->hasSurfaceNormal = 1;
  }
  else
  {
    outDamageInstance->hasSurfaceNormal = 0;
  }
}

/*
==============
GCombat::CanRadiusDamageFromPos
==============
*/
bool GCombat::CanRadiusDamageFromPos(GCombat *this, gentity_s *targ, const vec3_t *targetPos, gentity_s *inflictor, const vec3_t *centerPos, float radius, float coneAngleCos, const vec3_t *coneDirection, float maxHeight, bool useEyeOffset, int contentMask, bool detailTrace, unsigned __int8 *priorityMap)
{
  unsigned __int8 *v25; 
  const dvar_t *v78; 
  bool v93; 
  vec3_t *p_targetPosa; 
  __int64 v95; 
  bool result; 
  scr_string_t classname; 
  const DObj *ServerDObjForEnt; 
  const dvar_t *v144; 
  char v146; 
  bool v147; 
  bool v181; 
  bool v200; 
  bool v219; 
  bool Bool_Internal_DebugName; 
  int *v262; 
  vec3_t *v263; 
  __int64 v264; 
  int *v267; 
  float fmt; 
  float fmta; 
  vec3_t *v303; 
  vec3_t *v304; 
  vec3_t *v305; 
  double v306; 
  double v307; 
  double v308; 
  unsigned __int8 *v309; 
  unsigned __int8 *v310; 
  unsigned __int8 *v311; 
  double v312; 
  double v313; 
  double v314; 
  int passEntityNum1; 
  gentity_s *inflictora; 
  Bounds inflictor_8; 
  Bounds bounds; 
  tmat33_t<vec3_t> axis; 
  vec3_t targetPosa; 
  int v333; 
  char v334; 
  char v336; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
  }
  _RDI = centerPos;
  v25 = priorityMap;
  inflictora = inflictor;
  _R14 = targetPos;
  _RSI = targ;
  if ( G_IsTriggerModelType(targ) )
  {
    __asm { vmovss  xmm6, dword ptr [rsi+138h] }
    if ( inflictor )
      passEntityNum1 = inflictor->s.number;
    else
      passEntityNum1 = 2047;
    _RBX = 0i64;
    if ( detailTrace )
    {
      if ( !priorityMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 1208, ASSERT_TYPE_ASSERT, "(priorityMap)", "%s\n\tGCombat::CanRadiusDamageFromPos(): detail trace was requested but invalid priority map was provided.", "priorityMap") )
        __debugbreak();
    }
    else
    {
      v25 = NULL;
    }
    if ( _RSI->sentient )
    {
      __asm
      {
        vmovq   xmm0, qword ptr [rsi+150h]
        vmovss  xmm2, cs:__real@41700000
        vmovss  xmm10, cs:__real@3f800000
        vmovss  xmm13, cs:__real@80000000
        vmovss  xmm7, [rbp+0D0h+maxHeight]
        vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovq   xmm1, rbx
        vpcmpeqq xmm3, xmm0, xmm1
        vmovss  xmm0, dword ptr [rdi]
        vsubss  xmm5, xmm0, dword ptr [r14]
        vmovss  xmm0, dword ptr [rdi+4]
        vsubss  xmm4, xmm0, dword ptr [r14+4]
        vmovss  xmm1, cs:__real@41000000
        vblendvps xmm8, xmm1, xmm2, xmm3
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm2, xmm4, xmm4
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, xmm13
        vblendvps xmm0, xmm3, xmm10, xmm0
        vdivss  xmm1, xmm10, xmm0
        vmulss  xmm0, xmm4, xmm1
        vmulss  xmm9, xmm5, xmm1
        vxorps  xmm1, xmm1, xmm1
        vucomiss xmm7, xmm1
        vmovss  [rbp+0D0h+var_D8], xmm8
        vxorps  xmm11, xmm0, xmm12
      }
      if ( useEyeOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 1233, ASSERT_TYPE_ASSERT, "(!useEyeOffset)", (const char *)&queryFormat, "!useEyeOffset") )
        __debugbreak();
      __asm
      {
        vmovss  xmm3, dword ptr [rsp+1D0h+var_168]
        vmovss  xmm2, cs:__real@3f000000
        vmovss  xmm5, dword ptr [r14]
        vmovss  xmm6, dword ptr [r14+4]
        vmovss  xmm4, dword ptr [r14+8]
        vmulss  xmm7, xmm7, xmm2
      }
      if ( useEyeOffset )
      {
        __asm
        {
          vaddss  xmm0, xmm5, dword ptr [rsp+1D0h+inflictor+8]
          vaddss  xmm1, xmm6, dword ptr [rsp+1D0h+inflictor+0Ch]
          vmulss  xmm5, xmm0, xmm2
          vaddss  xmm0, xmm4, xmm3
          vmulss  xmm4, xmm0, xmm2
          vmulss  xmm6, xmm1, xmm2
        }
      }
      else
      {
        __asm { vaddss  xmm4, xmm4, xmm7 }
      }
      v78 = DVARBOOL_radius_damage_debug;
      __asm
      {
        vmulss  xmm1, xmm8, xmm9
        vaddss  xmm2, xmm1, xmm6
        vmulss  xmm0, xmm8, xmm11
        vaddss  xmm3, xmm0, xmm5
        vaddss  xmm0, xmm4, xmm7
        vmovss  [rbp+0D0h+var_104], xmm0
        vsubss  xmm0, xmm4, xmm7
        vxorps  xmm1, xmm8, xmm12
        vmovss  [rbp+0D0h+var_108], xmm2
        vmovss  [rbp+0D0h+var_FC], xmm2
        vmulss  xmm2, xmm11, xmm1
        vmovss  [rbp+0D0h+var_F8], xmm0
        vmulss  xmm0, xmm8, xmm9
        vmovss  [rbp+0D0h+var_10C], xmm3
        vmovss  [rbp+0D0h+var_100], xmm3
        vaddss  xmm3, xmm2, xmm5
        vsubss  xmm2, xmm6, xmm0
        vsubss  xmm0, xmm4, xmm7
        vaddss  xmm1, xmm4, xmm7
        vmovss  [rbp+0D0h+var_E0], xmm0
        vmovss  dword ptr [rbp+0D0h+targetPos+8], xmm4
        vmovss  dword ptr [rbp+0D0h+targetPos+4], xmm6
        vmovss  dword ptr [rbp+0D0h+targetPos], xmm5
        vmovss  [rbp+0D0h+var_F4], xmm3
        vmovss  [rbp+0D0h+var_F0], xmm2
        vmovss  [rbp+0D0h+var_EC], xmm1
        vmovss  [rbp+0D0h+var_E8], xmm3
        vmovss  [rbp+0D0h+var_E4], xmm2
      }
      if ( !DVARBOOL_radius_damage_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v78);
      __asm { vmovss  xmm8, [rbp+0D0h+coneAngleCos] }
      v93 = !v78->current.enabled;
      if ( v78->current.enabled )
      {
        p_targetPosa = &targetPosa;
        v95 = 5i64;
        do
        {
          __asm { vmovss  dword ptr [rsp+1D0h+fmt], xmm8 }
          G_Debug_VisualizeRadiusDamageTraces(inflictora, _RSI, centerPos, p_targetPosa++, fmt, coneDirection, contentMask, v25);
          --v95;
        }
        while ( v95 );
        v93 = 1;
        LODWORD(_RBX) = 0;
      }
      __asm { vmovss  xmm9, cs:__real@bf800000 }
      _R14 = &targetPosa.v[2];
      while ( 1 )
      {
        __asm { vucomiss xmm8, xmm9 }
        if ( !v93 && coneDirection )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r14-8]
            vsubss  xmm7, xmm0, dword ptr [rdi]
            vmovss  xmm1, dword ptr [r14-4]
            vsubss  xmm4, xmm1, dword ptr [rdi+4]
            vmovss  xmm0, dword ptr [r14]
            vsubss  xmm6, xmm0, dword ptr [rdi+8]
            vmulss  xmm2, xmm4, xmm4
            vmulss  xmm0, xmm6, xmm6
            vmulss  xmm1, xmm7, xmm7
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm1, xmm2, xmm2
            vcmpless xmm0, xmm1, xmm13
            vblendvps xmm0, xmm1, xmm10, xmm0
            vdivss  xmm5, xmm10, xmm0
            vmulss  xmm0, xmm5, xmm4
            vmulss  xmm3, xmm0, dword ptr [r15+4]
            vmulss  xmm1, xmm5, xmm7
            vmulss  xmm2, xmm1, dword ptr [r15]
            vmulss  xmm0, xmm5, xmm6
            vmulss  xmm1, xmm0, dword ptr [r15+8]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
            vcomiss xmm2, xmm8
          }
        }
        if ( G_Main_RadiusDamageTracePassed(centerPos, &targetPosa + (int)_RBX, _RSI->s.number, passEntityNum1, contentMask, v25) )
          break;
        LODWORD(_RBX) = _RBX + 1;
        _R14 += 3;
        v93 = (_DWORD)_RBX == 5;
        if ( (int)_RBX >= 5 )
        {
          result = 0;
          goto LABEL_78;
        }
      }
    }
    else
    {
      classname = _RSI->classname;
      if ( classname == scr_const.script_model && _RSI->model )
      {
        ServerDObjForEnt = Com_GetServerDObjForEnt(_RSI);
        DObjPhysicsGetBounds(ServerDObjForEnt, &bounds);
        AnglesToAxis(&_RSI->r.currentAngles, &axis);
        Bounds_Transform(&bounds, &vec3_origin, &axis, &inflictor_8);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1D0h+inflictor+8]
          vaddss  xmm2, xmm0, dword ptr [rsi+130h]
          vmovss  xmm0, dword ptr [rsp+1D0h+var_168]
          vmovss  xmm1, dword ptr [rsp+1D0h+inflictor+0Ch]
          vaddss  xmm4, xmm0, dword ptr [rsi+138h]
          vaddss  xmm3, xmm1, dword ptr [rsi+134h]
        }
        classname = _RSI->classname;
        __asm
        {
          vmovss  dword ptr [rsp+1D0h+var_168], xmm4
          vmovss  dword ptr [rsp+1D0h+inflictor+8], xmm2
          vmovss  dword ptr [rsp+1D0h+inflictor+0Ch], xmm3
        }
      }
      else
      {
        __asm
        {
          vmovups xmm1, xmmword ptr [rsi+118h]
          vmovsd  xmm0, qword ptr [rsi+128h]
          vmovups xmmword ptr [rsp+1D0h+inflictor+8], xmm1
          vmovss  xmm3, dword ptr [rsp+1D0h+inflictor+0Ch]
          vmovss  xmm2, dword ptr [rsp+1D0h+inflictor+8]
          vmovsd  qword ptr [rsp+1D0h+var_160], xmm0
          vshufps xmm4, xmm1, xmm1, 0AAh ; 'ª'
        }
      }
      __asm { vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
      if ( classname != scr_const.trigger_damage )
        goto LABEL_81;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vsubss  xmm1, xmm0, xmm2
        vandps  xmm1, xmm1, xmm6
        vcomiss xmm1, dword ptr [rsp+1D0h+var_168+4]
      }
      if ( (unsigned int)classname >= scr_const.trigger_damage )
        goto LABEL_81;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+4]
        vsubss  xmm1, xmm0, xmm3
        vandps  xmm1, xmm1, xmm6
        vcomiss xmm1, [rsp+1D0h+var_160]
      }
      if ( (unsigned int)classname >= scr_const.trigger_damage )
        goto LABEL_81;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+8]
        vsubss  xmm1, xmm0, xmm4
        vandps  xmm1, xmm1, xmm6
        vcomiss xmm1, [rsp+1D0h+var_15C]
      }
      if ( (unsigned int)classname >= scr_const.trigger_damage )
      {
LABEL_81:
        v144 = DVARBOOL_radius_damage_debug;
        if ( !DVARBOOL_radius_damage_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v144);
        __asm { vxorps  xmm7, xmm7, xmm7 }
        v146 = 0;
        v147 = !v144->current.enabled;
        if ( v144->current.enabled )
        {
          __asm { vxorps  xmm2, xmm2, xmm2; yaw }
          G_DebugBox(&vec3_origin, &inflictor_8, *(float *)&_XMM2, &colorMdGrey, 0, 300);
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rsp+1D0h+inflictor+8]
          vmovss  xmm2, dword ptr [rsp+1D0h+inflictor+0Ch]
          vmovss  xmm3, dword ptr [rsp+1D0h+var_168]
          vmovss  xmm0, dword ptr [rdi]
          vsubss  xmm4, xmm0, xmm1
          vmovss  xmm0, dword ptr [rdi+8]
          vmovss  dword ptr [rbp+0D0h+targetPos], xmm1
          vmovss  xmm1, dword ptr [rdi+4]
          vsubss  xmm5, xmm1, xmm2
          vmovss  dword ptr [rbp+0D0h+targetPos+4], xmm2
          vmulss  xmm2, xmm5, xmm5
          vsubss  xmm8, xmm0, xmm3
          vmulss  xmm1, xmm4, xmm4
          vmovss  dword ptr [rbp+0D0h+targetPos+8], xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm8, xmm8
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vucomiss xmm1, xmm7
        }
        if ( !v147 )
        {
          __asm
          {
            vmovss  xmm12, cs:__real@3f800000
            vdivss  xmm0, xmm12, xmm1
            vmulss  xmm13, xmm8, xmm0
            vmulss  xmm10, xmm0, xmm4
            vmulss  xmm11, xmm0, xmm5
            vmulss  xmm0, xmm11, xmm11
            vmulss  xmm8, xmm10, xmm10
            vaddss  xmm2, xmm0, xmm8
            vmulss  xmm1, xmm13, xmm13
            vaddss  xmm3, xmm2, xmm1
            vsubss  xmm0, xmm3, xmm12
            vandps  xmm0, xmm0, xmm6
            vcomiss xmm0, cs:__real@3b03126f
            vmovaps xmmword ptr [rsp+1D0h+var_C8+8], xmm14
          }
          if ( !v146 )
          {
            __asm
            {
              vsqrtss xmm0, xmm3, xmm3
              vcvtss2sd xmm1, xmm0, xmm0
              vmovsd  [rsp+1D0h+var_190], xmm1
              vcvtss2sd xmm2, xmm13, xmm13
              vmovsd  [rsp+1D0h+var_198], xmm2
              vcvtss2sd xmm3, xmm11, xmm11
              vmovsd  qword ptr [rsp+1D0h+var_1A0], xmm3
              vcvtss2sd xmm0, xmm10, xmm10
              vmovsd  [rsp+1D0h+var_1A8], xmm0
            }
            v181 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 1346, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( forward ) )", "(%g, %g, %g) len %g", *(double *)&v303, v306, *(double *)&v309, v312);
            v146 = 0;
            v147 = !v181;
            if ( v181 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm14, dword ptr cs:__xmm@80000000800000008000000080000000
            vxorps  xmm2, xmm11, xmm14
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm1, xmm0, xmm8
            vsqrtss xmm3, xmm1, xmm1
            vucomiss xmm3, xmm7
            vmovaps xmm9, xmm10
          }
          if ( v147 )
          {
            __asm { vmovaps xmm8, xmm12 }
          }
          else
          {
            __asm
            {
              vdivss  xmm0, xmm12, xmm3
              vmulss  xmm9, xmm10, xmm0
              vmulss  xmm8, xmm2, xmm0
            }
          }
          __asm
          {
            vmulss  xmm1, xmm9, xmm9
            vmulss  xmm0, xmm8, xmm8
            vaddss  xmm3, xmm1, xmm0
            vsubss  xmm2, xmm3, xmm12
            vandps  xmm2, xmm2, xmm6
            vcomiss xmm2, cs:__real@3b03126f
          }
          if ( !v146 )
          {
            __asm
            {
              vsqrtss xmm0, xmm3, xmm3
              vcvtss2sd xmm1, xmm0, xmm0
              vmovsd  [rsp+1D0h+var_190], xmm1
              vxorpd  xmm0, xmm0, xmm0
              vmovsd  [rsp+1D0h+var_198], xmm0
              vcvtss2sd xmm2, xmm9, xmm9
              vmovsd  qword ptr [rsp+1D0h+var_1A0], xmm2
              vcvtss2sd xmm3, xmm8, xmm8
              vmovsd  [rsp+1D0h+var_1A8], xmm3
            }
            v200 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 1357, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( right ) )", "(%g, %g, %g) len %g", *(double *)&v304, v307, *(double *)&v310, v313);
            v146 = 0;
            v147 = !v200;
            if ( v200 )
              __debugbreak();
          }
          __asm
          {
            vmulss  xmm0, xmm9, xmm13
            vxorps  xmm14, xmm0, xmm14
            vmulss  xmm0, xmm8, xmm11
            vmulss  xmm1, xmm9, xmm10
            vsubss  xmm10, xmm1, xmm0
            vmulss  xmm0, xmm14, xmm14
            vmulss  xmm13, xmm8, xmm13
            vmulss  xmm2, xmm13, xmm13
            vaddss  xmm3, xmm2, xmm0
            vmulss  xmm1, xmm10, xmm10
            vaddss  xmm4, xmm3, xmm1
            vsubss  xmm0, xmm4, xmm12
            vandps  xmm0, xmm0, xmm6
            vcomiss xmm0, cs:__real@3b03126f
          }
          if ( !v146 )
          {
            __asm
            {
              vsqrtss xmm0, xmm4, xmm4
              vcvtss2sd xmm1, xmm0, xmm0
              vmovsd  [rsp+1D0h+var_190], xmm1
              vcvtss2sd xmm2, xmm10, xmm10
              vmovsd  [rsp+1D0h+var_198], xmm2
              vcvtss2sd xmm3, xmm13, xmm13
              vmovsd  qword ptr [rsp+1D0h+var_1A0], xmm3
              vcvtss2sd xmm0, xmm14, xmm14
              vmovsd  [rsp+1D0h+var_1A8], xmm0
            }
            v219 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 1359, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( up ) )", "(%g, %g, %g) len %g", *(double *)&v305, v308, *(double *)&v311, v314);
            v146 = 0;
            v147 = !v219;
            if ( v219 )
              __debugbreak();
          }
          __asm
          {
            vmulss  xmm1, xmm8, dword ptr [rsp+1D0h+var_168+4]
            vmulss  xmm0, xmm9, [rsp+1D0h+var_160]
            vandps  xmm1, xmm1, xmm6
            vandps  xmm0, xmm0, xmm6
            vaddss  xmm5, xmm1, xmm0
            vmulss  xmm1, xmm14, dword ptr [rsp+1D0h+var_168+4]
            vmulss  xmm0, xmm13, [rsp+1D0h+var_160]
            vandps  xmm1, xmm1, xmm6
            vandps  xmm0, xmm0, xmm6
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm10, [rsp+1D0h+var_15C]
            vmovss  xmm0, cs:__real@42000000
            vcomiss xmm5, xmm0
            vandps  xmm1, xmm1, xmm6
            vaddss  xmm3, xmm2, xmm1
          }
          v333 = 16843009;
          v334 = 1;
          if ( v146 )
          {
            __asm { vxorps  xmm5, xmm5, xmm5 }
            BYTE1(v333) = 0;
            HIBYTE(v333) = 0;
          }
          __asm { vcomiss xmm3, xmm0 }
          if ( v146 )
          {
            __asm
            {
              vucomiss xmm5, xmm7
              vxorps  xmm3, xmm3, xmm3
            }
            *(_WORD *)((char *)&v333 + 1) = 0;
            if ( v147 )
              v334 = 0;
          }
          __asm
          {
            vmovss  xmm2, dword ptr [rbp+0D0h+targetPos+4]
            vmulss  xmm11, xmm10, xmm3
            vmovss  xmm10, dword ptr [rbp+0D0h+targetPos+8]
            vmulss  xmm4, xmm8, xmm5
            vmulss  xmm8, xmm14, xmm3
            vmulss  xmm7, xmm9, xmm5
            vmulss  xmm9, xmm13, xmm3
            vmovss  xmm3, dword ptr [rbp+0D0h+targetPos]
            vaddss  xmm6, xmm4, xmm3
            vsubss  xmm4, xmm3, xmm4
            vaddss  xmm0, xmm8, xmm6
            vmovss  [rbp+0D0h+var_10C], xmm0
            vaddss  xmm5, xmm7, xmm2
            vaddss  xmm0, xmm9, xmm5
            vmovss  [rbp+0D0h+var_108], xmm0
            vaddss  xmm0, xmm4, xmm8
            vmovss  [rbp+0D0h+var_100], xmm0
            vaddss  xmm1, xmm11, xmm10
            vmovss  [rbp+0D0h+var_104], xmm1
            vsubss  xmm3, xmm2, xmm7
            vaddss  xmm0, xmm10, xmm11
            vmovss  [rbp+0D0h+var_F8], xmm0
            vaddss  xmm1, xmm3, xmm9
            vmovss  [rbp+0D0h+var_FC], xmm1
            vsubss  xmm0, xmm5, xmm9
            vsubss  xmm1, xmm6, xmm8
            vmovss  [rbp+0D0h+var_F0], xmm0
            vmovss  [rbp+0D0h+var_F4], xmm1
            vsubss  xmm0, xmm4, xmm8
            vsubss  xmm1, xmm10, xmm11
            vmovss  [rbp+0D0h+var_E8], xmm0
            vmovss  [rbp+0D0h+var_EC], xmm1
            vsubss  xmm0, xmm10, xmm11
            vsubss  xmm1, xmm3, xmm9
            vmovss  [rbp+0D0h+var_E0], xmm0
            vmovss  [rbp+0D0h+var_E4], xmm1
          }
          Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_radius_damage_debug, "radius_damage_debug");
          __asm
          {
            vmovaps xmm14, xmmword ptr [rsp+1D0h+var_C8+8]
            vmovss  xmm8, [rbp+0D0h+coneAngleCos]
          }
          if ( Bool_Internal_DebugName )
          {
            v262 = &v333;
            v263 = &targetPosa;
            v264 = 5i64;
            do
            {
              if ( *(_BYTE *)v262 )
              {
                __asm { vmovss  dword ptr [rsp+1D0h+fmt], xmm8 }
                G_Debug_VisualizeRadiusDamageTraces(inflictora, _RSI, centerPos, v263, fmta, coneDirection, contentMask, v25);
              }
              ++v263;
              v262 = (int *)((char *)v262 + 1);
              --v264;
            }
            while ( v264 );
            LODWORD(_RBX) = 0;
          }
          __asm
          {
            vmovss  xmm10, cs:__real@80000000
            vmovss  xmm9, cs:__real@bf800000
          }
          v267 = &v333;
          _R14 = &targetPosa.v[2];
          while ( 1 )
          {
            if ( *(_BYTE *)v267 )
            {
              __asm { vucomiss xmm8, xmm9 }
              if ( *(_BYTE *)v267 && coneDirection )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [r14-8]
                  vsubss  xmm7, xmm0, dword ptr [rdi]
                  vmovss  xmm1, dword ptr [r14-4]
                  vsubss  xmm4, xmm1, dword ptr [rdi+4]
                  vmovss  xmm0, dword ptr [r14]
                  vsubss  xmm6, xmm0, dword ptr [rdi+8]
                  vmulss  xmm2, xmm4, xmm4
                  vmulss  xmm0, xmm6, xmm6
                  vmulss  xmm1, xmm7, xmm7
                  vaddss  xmm3, xmm2, xmm1
                  vaddss  xmm2, xmm3, xmm0
                  vsqrtss xmm1, xmm2, xmm2
                  vcmpless xmm0, xmm1, xmm10
                  vblendvps xmm0, xmm1, xmm12, xmm0
                  vdivss  xmm5, xmm12, xmm0
                  vmulss  xmm0, xmm5, xmm4
                  vmulss  xmm3, xmm0, dword ptr [rax+4]
                  vmulss  xmm1, xmm5, xmm7
                  vmulss  xmm2, xmm1, dword ptr [rax]
                  vmulss  xmm0, xmm5, xmm6
                  vmulss  xmm1, xmm0, dword ptr [rax+8]
                  vaddss  xmm4, xmm3, xmm2
                  vaddss  xmm2, xmm4, xmm1
                  vcomiss xmm2, xmm8
                }
              }
              if ( G_Main_RadiusDamageTracePassed(centerPos, &targetPosa + (int)_RBX, _RSI->s.number, passEntityNum1, contentMask, v25) )
                break;
            }
            LODWORD(_RBX) = _RBX + 1;
            v267 = (int *)((char *)v267 + 1);
            _R14 += 3;
            if ( (int)_RBX >= 5 )
              goto LABEL_76;
          }
        }
      }
    }
    result = 1;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm3, xmm0, dword ptr [r14]
      vmovss  xmm1, dword ptr [rdi+4]
      vsubss  xmm2, xmm1, dword ptr [r14+4]
      vmovss  xmm0, dword ptr [rdi+8]
      vsubss  xmm4, xmm0, dword ptr [r14+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm1, [rbp+0D0h+radius]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm4, xmm3, xmm0
      vmulss  xmm2, xmm1, xmm1
      vcomiss xmm4, xmm2
    }
LABEL_76:
    result = 0;
  }
LABEL_78:
  _R11 = &v336;
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
GCombat::ClearQueuedClientDeaths
==============
*/
void GCombat::ClearQueuedClientDeaths(GCombat *this)
{
  EntHandle *p_inflictor; 
  __int64 v2; 

  this->m_queuedDeathInstanceList.numDeaths = 0;
  p_inflictor = &this->m_queuedDeathInstanceList.deaths[0].damage.inflictor;
  v2 = 200i64;
  do
  {
    EntHandle::setEnt(p_inflictor - 1, NULL);
    EntHandle::setEnt(p_inflictor, NULL);
    EntHandle::setEnt(p_inflictor + 1, NULL);
    p_inflictor += 37;
    --v2;
  }
  while ( v2 );
}

/*
==============
GCombat::ClearQueuedDamages
==============
*/
void GCombat::ClearQueuedDamages(GCombat *this)
{
  EntHandle *p_inflictor; 
  __int64 v2; 

  *(_WORD *)&this->m_queuedDamageInstanceList.shouldQueueIncomingDamage = 0;
  p_inflictor = &this->m_queuedDamageInstanceList.damageInstances[0].inflictor;
  this->m_queuedDamageInstanceList.numDamages = 0;
  v2 = 256i64;
  do
  {
    EntHandle::setEnt(p_inflictor - 1, NULL);
    EntHandle::setEnt(p_inflictor, NULL);
    EntHandle::setEnt(p_inflictor + 1, NULL);
    p_inflictor += 37;
    --v2;
  }
  while ( v2 );
}

/*
==============
G_Combat_DamageNotify
==============
*/
void G_Combat_DamageNotify(scr_string_t notify, gentity_s *targ, const gentity_s *attacker, const gentity_s *inflictor, const vec3_t *dir, const vec3_t *point, int damage, int mod, int dFlags, unsigned int modelIndex, scr_string_t partName, const Weapon *r_weapon, bool isAlternate, const vec3_t *surfaceNormal)
{
  int v18; 
  __int64 v19; 
  const vec3_t *v20; 
  vec3_t *v21; 
  vec3_t *v22; 
  scr_string_t modelName; 
  __int64 v24; 
  __int64 v25; 
  unsigned int v26; 
  const char *v27; 
  scr_string_t attachTagName; 
  int number; 
  int v30; 
  const vec3_t *v31; 
  float v32; 
  const vec3_t *v33; 
  int v38; 
  vec3_t *v39; 
  scr_string_t to; 

  _RBX = targ;
  if ( !notify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 492, ASSERT_TYPE_ASSERT, "( notify != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "notify != NULL_SCR_STRING") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 493, ASSERT_TYPE_ASSERT, "( targ )", (const char *)&queryFormat, "targ") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 494, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  v18 = damage;
  if ( damage < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 495, ASSERT_TYPE_ASSERT, "( damage >= 0 )", (const char *)&queryFormat, "damage >= 0") )
    __debugbreak();
  v19 = mod;
  if ( (unsigned int)mod >= 0x19 )
  {
    LODWORD(v39) = mod;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 496, ASSERT_TYPE_ASSERT, "(unsigned)( mod ) < (unsigned)( MOD_NUM )", "mod doesn't index MOD_NUM\n\t%i not in [0, %i)", v39, 25) )
      __debugbreak();
  }
  v20 = &vec3_origin;
  v21 = &vec3_origin;
  v22 = &vec3_origin;
  if ( dir )
    v21 = (vec3_t *)dir;
  dir = v21;
  if ( point )
    v22 = (vec3_t *)point;
  point = v22;
  if ( surfaceNormal )
    v20 = surfaceNormal;
  modelName = 0;
  if ( (unsigned int)v19 >= 0x19 )
    damage = 0;
  else
    damage = *g_combat_modNames[v19];
  if ( modelIndex && (v24 = modelIndex - 1, v25 = (unsigned int)v24, _RBX->attachTagNames[v24]) )
  {
    v26 = _RBX->attachModelNames[v24];
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    v27 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, v26);
    to = SL_GetString(v27, 0);
    modelName = to;
    if ( !to )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 525, ASSERT_TYPE_ASSERT, "( modelName != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "modelName != NULL_SCR_STRING") )
        __debugbreak();
      modelName = to;
    }
    attachTagName = _RBX->attachTagNames[v25];
    v21 = (vec3_t *)dir;
    v22 = (vec3_t *)point;
  }
  else
  {
    to = 0;
    attachTagName = 0;
  }
  if ( notify == scr_const.damage )
  {
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 314, ASSERT_TYPE_ASSERT, "( targ )", (const char *)&queryFormat, "targ") )
      __debugbreak();
    if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 315, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
      __debugbreak();
    if ( (_RBX->flags.m_flags[0] & 0x10000000) == 0 || _RBX->damageNotify.attackerEntNum == attacker->s.number )
    {
      if ( (_RBX->flags.m_flags[0] & 0x10000000) != 0 )
      {
        _RBX->damageNotify.damage += v18;
        level.damageNotifyQueued = 1;
      }
      else
      {
        _RBX->flags.m_flags[0] |= 0x10000000u;
        _RBX->damageNotify.damage = v18;
        _RBX->damageNotify.attackerEntNum = attacker->s.number;
        if ( inflictor )
          number = inflictor->s.number;
        else
          number = 2047;
        v30 = damage;
        _RBX->damageNotify.inflictorEntNum = number;
        v31 = dir;
        _RBX->damageNotify.dir.v[0] = dir->v[0];
        _RBX->damageNotify.dir.v[1] = v31->v[1];
        v32 = v31->v[2];
        v33 = point;
        _RBX->damageNotify.dir.v[2] = v32;
        _RBX->damageNotify.point = *v33;
        Scr_SetString(&_RBX->damageNotify.modTypeName, (scr_string_t)v30);
        Scr_SetString(&_RBX->damageNotify.modelName, modelName);
        Scr_SetString(&_RBX->damageNotify.attachTagName, attachTagName);
        Scr_SetString(&_RBX->damageNotify.partName, partName);
        _RBX->damageNotify.flags = dFlags;
        _RAX = r_weapon;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbx+3C0h], ymm0
          vmovups xmm1, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rbx+3E0h], xmm1
          vmovsd  xmm0, qword ptr [rax+30h]
          vmovsd  qword ptr [rbx+3F0h], xmm0
        }
        *(_DWORD *)&_RBX->damageNotify.weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
        _RBX->damageNotify.isAlternate = isAlternate;
        _RBX->damageNotify.surfaceNormal.v[0] = v20->v[0];
        _RBX->damageNotify.surfaceNormal.v[1] = v20->v[1];
        _RBX->damageNotify.surfaceNormal.v[2] = v20->v[2];
        _RBX->damageNotify.damageId = (attacker->s.number << 16) | LOWORD(level.time);
        level.damageNotifyQueued = 1;
      }
    }
  }
  else
  {
    if ( attacker )
      v38 = attacker->s.number;
    else
      v38 = 2047;
    G_Combat_DispatchDamageNotify(notify, _RBX, v18, attacker, inflictor, v21, v22, (scr_string_t)damage, modelName, attachTagName, partName, dFlags, r_weapon, isAlternate, v20, (v38 << 16) | LOWORD(level.time));
  }
  Scr_SetString(&to, (scr_string_t)0);
}

/*
==============
G_Combat_DamageNotifyNoWeapon
==============
*/
void G_Combat_DamageNotifyNoWeapon(scr_string_t notify, gentity_s *targ, const gentity_s *attacker, const gentity_s *inflictor, const vec3_t *dir, const vec3_t *point, int damage, int mod)
{
  vec3_t *v12; 

  if ( !notify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 552, ASSERT_TYPE_ASSERT, "( notify != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "notify != NULL_SCR_STRING") )
    __debugbreak();
  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 553, ASSERT_TYPE_ASSERT, "( targ )", (const char *)&queryFormat, "targ") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 554, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( damage < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 555, ASSERT_TYPE_ASSERT, "( damage >= 0 )", (const char *)&queryFormat, "damage >= 0") )
    __debugbreak();
  if ( (unsigned int)mod >= 0x19 )
  {
    LODWORD(v12) = mod;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 556, ASSERT_TYPE_ASSERT, "(unsigned)( mod ) < (unsigned)( MOD_NUM )", "mod doesn't index MOD_NUM\n\t%i not in [0, %i)", v12, 25) )
      __debugbreak();
  }
  G_Combat_DamageNotify(notify, targ, attacker, inflictor, dir, point, damage, mod, 0, 0, (scr_string_t)0, &NULL_WEAPON, 0, NULL);
}

/*
==============
G_Combat_DamageNotify_BuildId
==============
*/
__int64 G_Combat_DamageNotify_BuildId(const gentity_s *attacker)
{
  if ( attacker )
    return (attacker->s.number << 16) | (unsigned int)LOWORD(level.time);
  else
    return LOWORD(level.time) | 0x7FF0000u;
}

/*
==============
G_Combat_DispatchDamageNotifications
==============
*/
void G_Combat_DispatchDamageNotifications(void)
{
  int num_entities; 
  int v1; 
  __int64 v2; 
  gentity_s *v3; 
  int inflictorEntNum; 
  gentity_s *v5; 
  const gentity_s *v6; 

  if ( level.damageNotifyQueued )
  {
    num_entities = level.num_entities;
    v1 = 0;
    if ( level.num_entities > 0 )
    {
      v2 = 0i64;
      do
      {
        v3 = &level.gentities[v2];
        if ( level.gentities[v2].r.isInUse && (v3->flags.m_flags[0] & 0x10000000) != 0 )
        {
          if ( v3->damageNotify.attackerEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 448, ASSERT_TYPE_ASSERT, "( ent->damageNotify.attackerEntNum != ENTITYNUM_NONE )", (const char *)&queryFormat, "ent->damageNotify.attackerEntNum != ENTITYNUM_NONE") )
            __debugbreak();
          inflictorEntNum = v3->damageNotify.inflictorEntNum;
          v5 = &level.gentities[v3->damageNotify.attackerEntNum];
          if ( inflictorEntNum == 2047 || !G_IsEntityInUse(inflictorEntNum) )
            v6 = NULL;
          else
            v6 = &level.gentities[v3->damageNotify.inflictorEntNum];
          if ( v5->r.isInUse )
            G_Combat_DispatchDamageNotify(scr_const.damage, v3, v3->damageNotify.damage, v5, v6, &v3->damageNotify.dir, &v3->damageNotify.point, v3->damageNotify.modTypeName, v3->damageNotify.modelName, v3->damageNotify.attachTagName, v3->damageNotify.partName, v3->damageNotify.flags, &v3->damageNotify.weapon, v3->damageNotify.isAlternate, &v3->damageNotify.surfaceNormal, v3->damageNotify.damageId);
          Scr_SetString(&v3->damageNotify.modTypeName, (scr_string_t)0);
          Scr_SetString(&v3->damageNotify.modelName, (scr_string_t)0);
          Scr_SetString(&v3->damageNotify.attachTagName, (scr_string_t)0);
          Scr_SetString(&v3->damageNotify.partName, (scr_string_t)0);
          v3->flags.m_flags[0] &= ~0x10000000u;
          num_entities = level.num_entities;
        }
        ++v1;
        ++v2;
      }
      while ( v1 < num_entities );
    }
    level.damageNotifyQueued = 0;
  }
}

/*
==============
G_Combat_DispatchDamageNotify
==============
*/
void G_Combat_DispatchDamageNotify(scr_string_t notify, gentity_s *targ, int damage, const gentity_s *attacker, const gentity_s *inflictor, const vec3_t *dir, const vec3_t *point, scr_string_t modName, scr_string_t modelName, scr_string_t attachTagName, scr_string_t partName, int dFlags, const Weapon *r_weapon, bool isAlternate, const vec3_t *surfaceNormal, unsigned int id)
{
  scrContext_t *v21; 
  const vec3_t *value; 
  const vec3_t *v25; 
  float v1[4]; 

  v25 = dir;
  value = point;
  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 352, ASSERT_TYPE_ASSERT, "( targ )", (const char *)&queryFormat, "targ", point, dir) )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 353, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  v21 = ScriptContext_Server();
  Scr_AddInt(v21, id);
  if ( inflictor )
    GScr_AddEntity(inflictor);
  else
    Scr_AddUndefined(v21);
  __asm
  {
    vmovss  xmm2, cs:__real@3a83126f; epsilon
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0A8h+v1], xmm0
    vmovss  [rsp+0A8h+var_64], xmm0
    vmovss  [rsp+0A8h+var_60], xmm0
  }
  if ( VecNCompareCustomEpsilon(surfaceNormal->v, v1, *(float *)&_XMM2, 3) )
    Scr_AddUndefined(v21);
  else
    Scr_AddVector(v21, surfaceNormal->v);
  Scr_AddVector(v21, targ->r.currentAngles.v);
  Scr_AddVector(v21, targ->r.currentOrigin.v);
  if ( r_weapon->weaponIdx )
    GScr_Weapon_AddParam(v21, r_weapon, isAlternate);
  else
    Scr_AddUndefined(v21);
  Scr_AddInt(v21, dFlags);
  if ( partName )
    Scr_AddConstString(v21, partName);
  else
    Scr_AddString(v21, (const char *)&queryFormat.fmt + 3);
  if ( attachTagName )
    Scr_AddConstString(v21, attachTagName);
  else
    Scr_AddString(v21, (const char *)&queryFormat.fmt + 3);
  if ( modelName )
    Scr_AddConstString(v21, modelName);
  else
    Scr_AddString(v21, (const char *)&queryFormat.fmt + 3);
  if ( modName )
    Scr_AddConstString(v21, modName);
  else
    Scr_AddString(v21, (const char *)&queryFormat.fmt + 3);
  Scr_AddVector(v21, value->v);
  Scr_AddVector(v21, v25->v);
  GScr_AddEntity(attacker);
  Scr_AddInt(v21, damage);
  GScr_Notify(targ, notify, 0xFu);
}

/*
==============
G_Combat_GetApproxDistSquaredToModel
==============
*/
float G_Combat_GetApproxDistSquaredToModel(const gentity_s *ent, vec3_t *explosionOrigin, const bool calcDetailBounds, Bounds *bounds, int *outUsingDetailBounds)
{
  vec3_t outClosestPoint; 
  vec3_t maxs; 
  vec3_t mins; 

  _RBX = ent;
  if ( calcDetailBounds && G_Combat_GetClosestPointToCollisionLodBodiesAABB(ent, explosionOrigin, &outClosestPoint, bounds) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+98h+outClosestPoint]
      vsubss  xmm3, xmm0, dword ptr [rdi]
      vmovss  xmm1, dword ptr [rsp+98h+outClosestPoint+4]
      vmovss  xmm0, dword ptr [rsp+98h+outClosestPoint+8]
      vsubss  xmm2, xmm1, dword ptr [rdi+4]
      vsubss  xmm4, xmm0, dword ptr [rdi+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm0, xmm3, xmm0
    }
    if ( outUsingDetailBounds )
      *outUsingDetailBounds = 1;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+98h+var_28], xmm7
      vmovaps [rsp+98h+var_38], xmm8
    }
    *(double *)&_XMM0 = Bounds_DistToPointSq(&_RBX->r.absBox, explosionOrigin);
    __asm
    {
      vmovss  xmm7, dword ptr [rbx+118h]
      vsubss  xmm1, xmm7, dword ptr [rbx+124h]
      vmovss  xmm5, dword ptr [rbx+11Ch]
      vmovss  xmm3, dword ptr [rbx+120h]
      vmovss  dword ptr [rsp+98h+mins], xmm1
      vsubss  xmm1, xmm5, dword ptr [rbx+128h]
      vmovss  dword ptr [rsp+98h+mins+4], xmm1
      vsubss  xmm1, xmm3, dword ptr [rbx+12Ch]
      vmovaps xmm8, xmm0
      vaddss  xmm0, xmm7, dword ptr [rbx+124h]
      vmovss  dword ptr [rsp+98h+mins+8], xmm1
      vaddss  xmm1, xmm5, dword ptr [rbx+128h]
      vmovss  dword ptr [rsp+98h+maxs], xmm0
      vaddss  xmm0, xmm3, dword ptr [rbx+12Ch]
      vmovss  dword ptr [rsp+98h+maxs+4], xmm1
      vmovss  dword ptr [rsp+98h+maxs+8], xmm0
    }
    ClosestPointToBounds(explosionOrigin, &mins, &maxs, &outClosestPoint);
    __asm
    {
      vmovaps xmm7, [rsp+98h+var_28]
      vmovaps xmm0, xmm8
    }
    if ( outUsingDetailBounds )
      *outUsingDetailBounds = 0;
    __asm { vmovaps xmm8, [rsp+98h+var_38] }
  }
  return *(float *)&_XMM0;
}

/*
==============
G_Combat_GetClosestPointToCollisionLodBodiesAABB
==============
*/
bool G_Combat_GetClosestPointToCollisionLodBodiesAABB(const gentity_s *self, const vec3_t *const testPoint, vec3_t *outClosestPoint, Bounds *bounds)
{
  unsigned int Instance; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int NumRigidBodys; 
  unsigned int m_serialAndIndex; 
  int Ref; 
  int number; 
  char v29; 
  bool v63; 
  __int64 v69; 
  hknpBodyId result; 
  DObjPartBits *partBits; 
  vec3_t *v72; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 
  vec3_t out; 
  char v80; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovss  xmm8, cs:__real@bf800000
  }
  _R13 = testPoint;
  v72 = outClosestPoint;
  _RBP = bounds;
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_SERVER_DETAIL, self);
  v18 = Instance;
  if ( Instance == -1 )
    goto LABEL_22;
  v19 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_SERVER_DETAIL, Instance);
  if ( !NumRigidBodys )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm9, [rsp+158h+result.m_serialAndIndex]
    vmovss  xmm10, [rsp+158h+result.m_serialAndIndex]
    vmovss  xmm11, [rsp+158h+result.m_serialAndIndex]
    vmovaps [rsp+158h+var_B8], xmm12
    vmovss  xmm12, cs:__real@3f000000
    vmovaps [rsp+158h+var_C8], xmm13
    vmovaps [rsp+158h+var_58], xmm6
    vmovaps [rsp+158h+var_68], xmm7
    vxorps  xmm13, xmm13, xmm13
  }
  do
  {
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( !g_physicsServerWorldsCreated )
    {
      LODWORD(v69) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v69) )
        __debugbreak();
    }
    m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_SERVER_DETAIL, v18, v19)->m_serialAndIndex;
    if ( (m_serialAndIndex & 0xFFFFFF) != 0xFFFFFF )
    {
      Ref = Physics_GetRef(PHYSICS_WORLD_ID_SERVER_DETAIL, m_serialAndIndex);
      if ( !Physics_GetRefDetailFlag(Ref) || NumRigidBodys < 2 )
      {
        if ( Com_GetServerDObjForEntnum(self->s.number) )
        {
          number = self->s.number;
          partBits = NULL;
          G_PhysicsObject_UpdateDetailWorldInstance(PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_SERVER_DETAIL, number, &partBits);
        }
        Physics_CalcRigidBodyShapeAABBWorld(PHYSICS_WORLD_ID_SERVER_DETAIL, m_serialAndIndex, &aabbMin, &aabbMax);
        ClosestPointToBounds(_R13, &aabbMin, &aabbMax, &out);
        __asm
        {
          vcomiss xmm8, xmm13
          vmovss  xmm0, dword ptr [r13+0]
          vmovss  xmm1, dword ptr [r13+4]
          vmovss  xmm5, dword ptr [rsp+158h+out]
          vmovss  xmm6, dword ptr [rsp+158h+out+4]
          vmovss  xmm7, dword ptr [rsp+158h+out+8]
          vsubss  xmm4, xmm0, xmm5
          vmovss  xmm0, dword ptr [r13+8]
          vsubss  xmm2, xmm1, xmm6
          vsubss  xmm3, xmm0, xmm7
          vmulss  xmm0, xmm4, xmm4
          vmulss  xmm1, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm4, xmm2, xmm1
        }
        if ( v29 )
          goto LABEL_17;
        __asm { vcomiss xmm4, xmm8 }
        if ( v29 )
        {
LABEL_17:
          __asm
          {
            vmovaps xmm8, xmm4
            vmovaps xmm11, xmm5
            vmovaps xmm10, xmm6
            vmovaps xmm9, xmm7
          }
        }
        __asm
        {
          vmovss  xmm6, dword ptr [rsp+158h+aabbMin]
          vaddss  xmm1, xmm6, dword ptr [rsp+158h+aabbMax]
          vmovss  xmm5, dword ptr [rsp+158h+aabbMin+4]
          vmovss  xmm3, dword ptr [rsp+158h+aabbMin+8]
          vmulss  xmm4, xmm1, xmm12
          vaddss  xmm1, xmm5, dword ptr [rsp+158h+aabbMax+4]
          vmulss  xmm2, xmm1, xmm12
          vaddss  xmm1, xmm3, dword ptr [rsp+158h+aabbMax+8]
          vmovss  dword ptr [rbp+4], xmm2
          vmovss  dword ptr [rbp+0], xmm4
          vmulss  xmm2, xmm1, xmm12
          vmovss  dword ptr [rbp+8], xmm2
          vsubss  xmm0, xmm4, xmm6
          vmovss  dword ptr [rbp+0Ch], xmm0
          vmovss  xmm1, dword ptr [rbp+4]
          vsubss  xmm2, xmm1, xmm5
          vmovss  dword ptr [rbp+10h], xmm2
          vmovss  xmm0, dword ptr [rbp+8]
          vsubss  xmm1, xmm0, xmm3
          vmovss  dword ptr [rbp+14h], xmm1
        }
      }
    }
    ++v19;
  }
  while ( v19 < NumRigidBodys );
  __asm
  {
    vmovaps xmm12, [rsp+158h+var_B8]
    vmovaps xmm7, [rsp+158h+var_68]
    vmovaps xmm6, [rsp+158h+var_58]
  }
  _R12 = v72;
  __asm
  {
    vcomiss xmm8, xmm13
    vmovaps xmm13, [rsp+158h+var_C8]
  }
  if ( v19 < NumRigidBodys )
  {
LABEL_22:
    v63 = 0;
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [r12], xmm11
      vmovss  dword ptr [r12+4], xmm10
      vmovss  dword ptr [r12+8], xmm9
    }
    v63 = 1;
  }
  _R11 = &v80;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-40h]
    vmovaps xmm9, xmmword ptr [r11-50h]
    vmovaps xmm10, xmmword ptr [r11-60h]
    vmovaps xmm11, xmmword ptr [r11-70h]
  }
  return v63;
}

/*
==============
G_Combat_GetDamageReturnCodeDescription
==============
*/
const char *G_Combat_GetDamageReturnCodeDescription(const damageReturnCode_t code)
{
  __int64 v1; 
  int v4; 

  v1 = code;
  if ( (unsigned int)code >= DAMAGE_RETURNCODE_NUM )
  {
    v4 = 14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 120, ASSERT_TYPE_ASSERT, "(unsigned)( code ) < (unsigned)( DAMAGE_RETURNCODE_NUM )", "code doesn't index DAMAGE_RETURNCODE_NUM\n\t%i not in [0, %i)", code, v4) )
      __debugbreak();
  }
  return s_damage_codeDescriptions[v1];
}

/*
==============
G_Combat_GetHitLocationIndexFromString
==============
*/
__int64 G_Combat_GetHitLocationIndexFromString(scr_string_t sString)
{
  unsigned int v1; 
  scr_string_t *v2; 

  v1 = 0;
  v2 = s_combat_hitLocConstNames;
  while ( *v2 != sString )
  {
    ++v1;
    if ( (__int64)++v2 >= (__int64)s_LocDamageTableNames )
      return 0i64;
  }
  return v1;
}

/*
==============
G_Combat_GetHitLocationString
==============
*/
__int64 G_Combat_GetHitLocationString(hitLocation_t hitLoc)
{
  __int64 v1; 
  int v4; 

  v1 = hitLoc;
  if ( (unsigned int)hitLoc >= HITLOC_NUM )
  {
    v4 = 22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 190, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<unsigned>( hitLoc ) ) < (unsigned)( HITLOC_NUM )", "static_cast<unsigned>( hitLoc ) doesn't index HITLOC_NUM\n\t%i not in [0, %i)", hitLoc, v4) )
      __debugbreak();
  }
  return (unsigned int)s_combat_hitLocConstNames[v1];
}

/*
==============
G_Combat_GetMeleeAttackProperties
==============
*/
void G_Combat_GetMeleeAttackProperties(const gentity_s *inflictor, const Weapon *weapon, bool isAlternate, MeleeAnimType *outAnimType, WeaponMaterialType *outMaterial, bool *outIsAlternate, int *outVariation, MeleeResult *outResult)
{
  WeaponMaterialType *v8; 
  int v9; 
  bool *v10; 
  MeleeResult *v12; 
  int *v14; 
  WeaponSFXPackage *SfxPackage; 
  const playerState_s *EntityPlayerStateConst; 
  const playerState_s *v19; 
  bool v20; 
  int altMeleeVariation; 

  v8 = outMaterial;
  v9 = 0;
  v10 = outIsAlternate;
  v12 = outResult;
  v14 = outVariation;
  *outAnimType = COUNT|DODGE;
  *v8 = MOVEMENT;
  *v10 = 0;
  *v14 = 0;
  *v12 = HIT;
  SfxPackage = BG_GetSfxPackage(weapon, isAlternate);
  if ( SfxPackage )
    *v8 = SfxPackage->sfxMaterialType;
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(inflictor);
  v19 = EntityPlayerStateConst;
  if ( EntityPlayerStateConst )
  {
    v20 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->weapCommon.weapFlags, ACTIVE, 0x26u);
    *v10 = v20;
    if ( v20 )
      altMeleeVariation = v19->weapCommon.altMeleeVariation;
    else
      altMeleeVariation = v19->weapCommon.meleeVariation;
    *v14 = altMeleeVariation;
    LOBYTE(v9) = v19->weapState[0].weaponState == 23;
    *outResult = v9 + 1;
    BG_GetWeaponMeleeAnimProperties(v19, weapon, isAlternate, 0, *v10, (bool *)&outIsAlternate, outAnimType, (unsigned __int8 *)&outMaterial);
  }
}

/*
==============
G_Combat_GetOriginForDeathCamYaw
==============
*/
void G_Combat_GetOriginForDeathCamYaw(const gentity_s *ent, vec3_t *outOrigin)
{
  gclient_s *client; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  __int16 remoteControlEnt; 
  __int64 v7; 
  __int64 v11; 

  _RDI = outOrigin;
  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 233, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  client = _RBX->client;
  if ( !client )
    goto LABEL_21;
  p_eFlags = &client->ps.eFlags;
  if ( client == (gclient_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2072, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 7u) )
    goto LABEL_21;
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2076, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    __debugbreak();
  remoteControlEnt = _RBX->client->ps.remoteControlEnt;
  if ( remoteControlEnt != 2047 && G_IsEntityInUse(remoteControlEnt) )
  {
    v7 = _RBX->client->ps.remoteControlEnt;
    if ( (unsigned int)v7 >= 0x800 )
    {
      LODWORD(v11) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, 2048) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    _RCX = g_entities;
    _RDX = 1456 * v7;
    _RDI->v[0] = g_entities[v7].r.currentOrigin.v[0];
    _RDI->v[1] = _RCX[v7].r.currentOrigin.v[1];
    __asm { vmovss  xmm0, dword ptr [rdx+rcx+138h] }
  }
  else
  {
LABEL_21:
    _RDI->v[0] = _RBX->r.currentOrigin.v[0];
    _RDI->v[1] = _RBX->r.currentOrigin.v[1];
    __asm { vmovss  xmm0, dword ptr [rbx+138h] }
  }
  __asm { vmovss  dword ptr [rdi+8], xmm0 }
}

/*
==============
G_Combat_GetRadiusDamageMask
==============
*/
__int64 G_Combat_GetRadiusDamageMask(const WeaponDef *weapDef)
{
  __int64 result; 

  result = 9441281i64;
  if ( weapDef->offhandClass != OFFHAND_CLASS_FLASH_GRENADE )
    return 9441297i64;
  return result;
}

/*
==============
G_Combat_HitLocFromScriptParam
==============
*/
__int64 G_Combat_HitLocFromScriptParam(scrContext_t *scrContext, int scrParam)
{
  scr_string_t ConstString; 
  scr_string_t *v5; 
  __int64 result; 
  const char *v7; 
  const char *v8; 

  ConstString = Scr_GetConstString(scrContext, scrParam);
  v5 = s_combat_hitLocConstNames;
  result = 0i64;
  while ( *v5 != ConstString )
  {
    result = (unsigned int)(result + 1);
    if ( (__int64)++v5 >= (__int64)s_LocDamageTableNames )
    {
      v7 = SL_ConvertToString(ConstString);
      v8 = j_va("Unknown hit location \"%s\"\n", v7);
      Scr_ParamError(COM_ERR_2640, scrContext, scrParam, v8);
      return 0i64;
    }
  }
  return result;
}

/*
==============
G_Combat_InitHitLocDmgTable
==============
*/
void G_Combat_InitHitLocDmgTable(void)
{
  GCombat *v0; 
  scr_string_t *v1; 
  const char **v2; 
  scr_string_t v3; 
  LocDmgTable **v4; 
  const char **m_locDamageTable; 
  signed __int64 v6; 
  scr_string_t *v7; 
  const char *v8; 

  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  v0 = GCombat::ms_gCombatSystem;
  v1 = s_combat_hitLocConstNames;
  v2 = g_HitLocNames;
  do
  {
    v3 = Scr_AllocGameString(*v2++, 1);
    *v1++ = v3;
  }
  while ( (__int64)v2 < (__int64)s_damage_codeDescriptions );
  v4 = s_fLocDamageTables;
  m_locDamageTable = v0->m_locDamageTable;
  v6 = (char *)v0 - (char *)s_fLocDamageTables;
  v7 = s_LocDamageTableNames;
  do
  {
    if ( !m_locDamageTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 235, ASSERT_TYPE_ASSERT, "( m_locDamageTable )", (const char *)&queryFormat, "m_locDamageTable") )
      __debugbreak();
    v8 = *(const char **)((char *)v4 + v6 + 67512);
    if ( v8 )
    {
      *v4 = LocDmgTable_Register(*(const char **)((char *)v4 + v6 + 67512));
      *v7 = Scr_AllocGameString(v8, 1);
    }
    ++v4;
    ++v7;
  }
  while ( (__int64)v4 < (__int64)&unk_14A5A9260 );
}

/*
==============
G_Combat_IsClientFlashbanged
==============
*/
_BOOL8 G_Combat_IsClientFlashbanged(playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 704, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x15u) && level.time < ps->shellshockTime + ps->shellshockDuration && BG_GetShellshockParms(ps->shellshockIndex)->screenBlend.type == SHELLSHOCK_VIEWTYPE_FLASHED;
}

/*
==============
G_Combat_IsWithinDamageRadius
==============
*/

__int64 __fastcall G_Combat_IsWithinDamageRadius(const vec3_t *damageOrigin, double radiusSquared, gentity_s *ent)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 567, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  *(double *)&_XMM0 = Bounds_DistToPointSq(&ent->r.absBox, damageOrigin);
  __asm
  {
    vcomiss xmm6, xmm0
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return 0i64;
}

/*
==============
G_Combat_LookAtKiller
==============
*/
void G_Combat_LookAtKiller(const gentity_s *self, const gentity_s *inflictor, const gentity_s *attacker, playerState_s *ps)
{
  __int64 *v8; 
  unsigned int v9; 
  __int16 *v10; 
  __int64 v11; 
  gentity_s *v12; 
  playerState_s *EntityPlayerState; 
  __int64 v23[2]; 
  vec2_t vec; 
  vec3_t outOrigin; 
  vec3_t v27; 

  _RBP = self;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 253, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !inflictor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 254, ASSERT_TYPE_ASSERT, "( inflictor )", (const char *)&queryFormat, "inflictor") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 255, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 256, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v23[0] = (__int64)attacker;
  v8 = v23;
  v23[1] = (__int64)inflictor;
  v9 = 0;
  while ( 1 )
  {
    v10 = (__int16 *)*v8;
    if ( *v8 )
    {
      if ( ((v10[4] - 12) & 0xFFFD) == 0 )
      {
        v11 = *((_QWORD *)v10 + 44);
        if ( v11 )
        {
          if ( BGVehicles::PhysicsIsValid(*(_DWORD *)(v11 + 644)) )
            break;
        }
      }
    }
    ++v9;
    ++v8;
    if ( v9 >= 2 )
      goto LABEL_24;
  }
  ps->stats[4] = *v10;
  if ( EntHandle::isDefined((EntHandle *)v10 + 82) )
  {
    v12 = EntHandle::ent((EntHandle *)v10 + 82);
    if ( v12 )
    {
      EntityPlayerState = G_GetEntityPlayerState(v12);
      if ( EntityPlayerState )
        EntityPlayerState->stats[4] = *v10;
    }
  }
LABEL_24:
  if ( !attacker || attacker == _RBP )
  {
    if ( !inflictor || inflictor == _RBP )
    {
      __asm { vcvttss2si eax, dword ptr [rbp+140h] }
      goto LABEL_32;
    }
    G_Combat_GetOriginForDeathCamYaw(inflictor, &v27);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+var_58]
      vsubss  xmm1, xmm0, dword ptr [rbp+130h]
      vmovss  xmm2, dword ptr [rsp+0B8h+var_58+4]
      vmovss  dword ptr [rsp+0B8h+vec], xmm1
      vmovss  xmm1, dword ptr [rsp+0B8h+var_58+8]
    }
  }
  else
  {
    G_Combat_GetOriginForDeathCamYaw(attacker, &outOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+outOrigin]
      vsubss  xmm1, xmm0, dword ptr [rbp+130h]
      vmovss  xmm2, dword ptr [rsp+0B8h+outOrigin+4]
      vmovss  dword ptr [rsp+0B8h+vec], xmm1
      vmovss  xmm1, dword ptr [rsp+0B8h+outOrigin+8]
    }
  }
  __asm
  {
    vsubss  xmm0, xmm2, dword ptr [rbp+134h]
    vsubss  xmm2, xmm1, dword ptr [rbp+138h]
    vmovss  [rsp+0B8h+var_70], xmm2
    vmovss  dword ptr [rsp+0B8h+vec+4], xmm0
  }
  *(double *)&_XMM0 = vectoyaw(&vec);
  __asm { vcvttss2si eax, xmm0 }
LABEL_32:
  ps->stats[1] = _EAX;
}

/*
==============
G_Combat_MeansOfDeathFromScriptParam
==============
*/
__int64 G_Combat_MeansOfDeathFromScriptParam(scrContext_t *scrContext, int scrParam)
{
  scr_string_t ConstString; 
  scr_string_t **v5; 
  __int64 result; 
  const char *v7; 
  const char *v8; 

  ConstString = Scr_GetConstString(scrContext, scrParam);
  v5 = g_combat_modNames;
  result = 0i64;
  while ( **v5 != ConstString )
  {
    result = (unsigned int)(result + 1);
    if ( (__int64)++v5 >= (__int64)&MAX_TRANSIENT_WORLD_FASTFILES_454 )
    {
      v7 = SL_ConvertToString(ConstString);
      v8 = j_va("Unknown means of death \"%s\"\n", v7);
      Scr_ParamError(COM_ERR_2639, scrContext, scrParam, v8);
      return 0i64;
    }
  }
  return result;
}

/*
==============
G_Combat_RadiusEffectsEnt
==============
*/

void __fastcall G_Combat_RadiusEffectsEnt(int inflictorEntNum, gentity_s *victim, const vec3_t *blastOrigin, double radius_max, float radius_min, gentity_s *attacker, team_t team, const Weapon *r_weapon, bool isAlternate)
{
  bool v20; 
  bool v21; 
  bool v33; 
  unsigned __int8 *WeaponPriorityMap; 
  scr_string_t flashbang; 
  unsigned __int8 *v36; 
  sentient_s *sentient; 
  GCombat *CombatSystem; 
  char v39; 
  char v40; 
  const playerState_s *EntityPlayerState; 
  GHandler *Handler; 
  AICommonInterface *v70; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v72; 
  actor_s *actor; 
  scrContext_t *v81; 
  scrContext_t *v82; 
  __int64 v83; 
  __int64 v84; 
  int priorityMap; 
  unsigned __int8 *priorityMapa; 
  int passEntityNum1; 
  weapProjExposion_t v94; 
  AIActorInterface v96; 
  AIAgentInterface v97; 
  AICommonInterface *v98; 
  vec3_t outOrigin; 
  vec3_t forward; 
  vec3_t vEyePosOut; 

  __asm { vmovaps [rsp+1A0h+var_60], xmm7 }
  _R15 = blastOrigin;
  passEntityNum1 = inflictorEntNum;
  __asm { vmovaps xmm7, xmm3 }
  v94 = BG_ProjExplosionType(r_weapon, isAlternate);
  if ( (unsigned int)(v94 - 2) <= 1 )
  {
    v20 = victim->r.modelType < 5u;
    v21 = victim->r.modelType == 5;
    __asm { vmovaps [rsp+1A0h+var_50], xmm6 }
    if ( v21 )
    {
      *(double *)&_XMM0 = Bounds_DistToPointSq(&victim->r.absBox, _R15);
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r15]
        vsubss  xmm3, xmm0, dword ptr [rbx+130h]
        vmovss  xmm1, dword ptr [r15+4]
        vmovss  xmm0, dword ptr [r15+8]
        vsubss  xmm2, xmm1, dword ptr [rbx+134h]
        vsubss  xmm4, xmm0, dword ptr [rbx+138h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm0, xmm3, xmm0
      }
    }
    __asm
    {
      vsqrtss xmm6, xmm0, xmm0
      vcomiss xmm6, xmm7
    }
    if ( !v20 && !v21 )
      goto LABEL_75;
    v33 = BG_WeaponRadiusDamageDetailTrace(r_weapon, isAlternate);
    WeaponPriorityMap = BG_GetWeaponPriorityMap(r_weapon, isAlternate);
    flashbang = 0;
    v36 = WeaponPriorityMap;
    if ( v33 )
    {
      if ( !WeaponPriorityMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 596, ASSERT_TYPE_ASSERT, "(priorityMap)", "%s\n\tG_Combat_RadiusEffectsEnt(): detail trace was requested but invalid priority map was provided.", "priorityMap") )
        __debugbreak();
    }
    else
    {
      v36 = NULL;
    }
    sentient = victim->sentient;
    if ( sentient )
    {
      Sentient_GetEyePosition(sentient, &vEyePosOut);
      if ( !G_Main_RadiusDamageTracePassed(&vEyePosOut, _R15, victim->s.number, passEntityNum1, 8399153, v36) )
        goto LABEL_75;
    }
    __asm { vmovaps [rsp+1A0h+var_90], xmm10 }
    CombatSystem = GCombat::GetCombatSystem();
    LOBYTE(priorityMap) = v33;
    *(double *)&_XMM0 = ((double (__fastcall *)(GCombat *, gentity_s *, gentity_s *, const vec3_t *, int, int, unsigned __int8 *))CombatSystem->GetRadiusDamageFromPos)(CombatSystem, victim, attacker, _R15, 2049, priorityMap, v36);
    __asm
    {
      vxorps  xmm10, xmm10, xmm10
      vcomiss xmm0, xmm10
    }
    if ( v39 | v40 )
    {
LABEL_74:
      __asm { vmovaps xmm10, [rsp+1A0h+var_90] }
LABEL_75:
      __asm { vmovaps xmm6, [rsp+1A0h+var_50] }
      goto LABEL_76;
    }
    __asm
    {
      vmovss  xmm0, [rbp+0A0h+radius_min]
      vcomiss xmm6, xmm0
      vmovaps [rsp+1A0h+var_B0], xmm12
    }
    if ( v39 | v40 )
    {
      __asm
      {
        vmovss  xmm6, cs:__real@3f800000
        vmovaps xmm12, xmm6
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm1, xmm6, xmm0
        vmovss  xmm6, cs:__real@3f800000
        vsubss  xmm0, xmm7, xmm0
        vdivss  xmm2, xmm1, xmm0
        vsubss  xmm12, xmm6, xmm2
      }
    }
    if ( G_Utils_IsClientOrAgent(victim) )
    {
      __asm
      {
        vmovaps [rsp+1A0h+var_70], xmm8
        vmovaps [rsp+1A0h+var_80], xmm9
        vmovaps [rsp+1A0h+var_A0], xmm11
      }
      EntityPlayerState = G_GetEntityPlayerState(victim);
      if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 636, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      Handler = GHandler::getHandler();
      BG_GetPlayerViewDirection(EntityPlayerState, &forward, NULL, NULL, Handler, 0);
      G_Client_GetEyePosition(EntityPlayerState, &outOrigin);
      __asm
      {
        vmovss  xmm0, dword ptr [r15]
        vsubss  xmm7, xmm0, dword ptr [rbp+0A0h+outOrigin]
        vmovss  xmm1, dword ptr [r15+4]
        vmovss  xmm0, dword ptr [r15+8]
        vsubss  xmm8, xmm1, dword ptr [rbp+0A0h+outOrigin+4]
        vsubss  xmm9, xmm0, dword ptr [rbp+0A0h+outOrigin+8]
        vmulss  xmm1, xmm8, xmm8
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm9, xmm9
        vaddss  xmm11, xmm2, xmm1
        vcomiss xmm11, xmm10
      }
      if ( (v20 || v21) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
        __debugbreak();
      __asm
      {
        vmovaps xmm1, xmm11
        vmovaps xmm11, [rsp+1A0h+var_A0]
        vrsqrtss xmm2, xmm1, xmm1
        vmulss  xmm4, xmm8, xmm2
        vmovaps xmm8, [rsp+1A0h+var_70]
        vmulss  xmm5, xmm9, xmm2
        vmovaps xmm9, [rsp+1A0h+var_80]
        vmulss  xmm1, xmm7, xmm2
      }
LABEL_44:
      __asm
      {
        vmulss  xmm3, xmm1, dword ptr [rbp+0A0h+forward]
        vmulss  xmm2, xmm4, dword ptr [rbp+0A0h+forward+4]
        vmulss  xmm1, xmm5, dword ptr [rbp+0A0h+forward+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vaddss  xmm3, xmm2, xmm6
        vmulss  xmm6, xmm3, cs:__real@3f000000
      }
      v81 = ScriptContext_Server();
      v82 = v81;
      if ( (unsigned int)team > TEAM_MP_NUM_TEAMS )
      {
        Scr_AddUndefined(v81);
      }
      else if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      {
        if ( (unsigned int)team >= TEAM_SIX )
        {
          LODWORD(priorityMapa) = team;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 274, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_SP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", priorityMapa) )
            __debugbreak();
        }
        v83 = team;
        if ( !S_TEAMS_SP_SCR_STRINGS_3[team] )
        {
          LODWORD(priorityMapa) = team;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 275, ASSERT_TYPE_ASSERT, "( ( S_TEAMS_SP_SCR_STRINGS[team] ) )", "( team ) = %i", priorityMapa) )
            __debugbreak();
          v83 = team;
        }
        Scr_AddConstString(v82, *S_TEAMS_SP_SCR_STRINGS_3[v83]);
        _R15 = blastOrigin;
      }
      else
      {
        if ( (unsigned int)team >= TEAM_MP_NUM_TEAMS )
        {
          LODWORD(priorityMapa) = team;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 283, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_MP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", priorityMapa) )
            __debugbreak();
        }
        v84 = team;
        if ( !S_TEAMS_MP_SCR_STRINGS_3[team] )
        {
          LODWORD(priorityMapa) = team;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 284, ASSERT_TYPE_ASSERT, "( ( S_TEAMS_MP_SCR_STRINGS[team] ) )", "( team ) = %i", priorityMapa) )
            __debugbreak();
          v84 = team;
        }
        Scr_AddConstString(v82, *S_TEAMS_MP_SCR_STRINGS_3[v84]);
        _R15 = blastOrigin;
      }
      if ( attacker )
        GScr_AddEntity(attacker);
      else
        Scr_AddUndefined(v82);
      __asm { vmovaps xmm1, xmm6; value }
      Scr_AddFloat(v82, *(float *)&_XMM1);
      __asm { vmovaps xmm1, xmm12; value }
      Scr_AddFloat(v82, *(float *)&_XMM1);
      Scr_AddVector(v82, _R15->v);
      __asm { vmovaps xmm12, [rsp+1A0h+var_B0] }
      if ( v94 == WEAPPROJEXP_FLASHBANG )
      {
        flashbang = scr_const.flashbang;
      }
      else
      {
        if ( v94 != WEAPPROJEXP_MOLOTOV )
          goto LABEL_71;
        flashbang = scr_const.molotov;
      }
      if ( flashbang )
      {
LABEL_73:
        GScr_Notify(victim, flashbang, 5u);
        goto LABEL_74;
      }
LABEL_71:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 694, ASSERT_TYPE_ASSERT, "( notifyName != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "notifyName != NULL_SCR_STRING") )
        __debugbreak();
      goto LABEL_73;
    }
    AIActorInterface::AIActorInterface(&v96);
    AIAgentInterface::AIAgentInterface(&v97);
    v70 = NULL;
    v97.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    v98 = NULL;
    if ( victim->agent )
    {
      if ( SV_Agent_IsScripted(victim->s.number) )
      {
        ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(victim);
        if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
          __debugbreak();
        if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
          __debugbreak();
        AINewAgentInterface::SetAgent((AINewAgentInterface *)&v97, ScriptedAgentInfo);
        v70 = &v97;
        v98 = &v97;
        v72 = &v97;
        goto LABEL_41;
      }
      v70 = v98;
    }
    actor = victim->actor;
    if ( actor )
    {
      if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
        __debugbreak();
      AIActorInterface::SetActor(&v96, victim->actor);
      v70 = &v96;
      v98 = &v96;
    }
    v72 = (AIAgentInterface *)v70;
    if ( !v70 )
    {
      AngleVectors(&victim->r.currentAngles, &forward, NULL, NULL);
      G_Utils_EntityCentroid(victim, &outOrigin);
      goto LABEL_43;
    }
LABEL_41:
    AICommonInterface::GetEyeDirection(v70, &forward);
    v72->GetEyePosition(v72, &outOrigin);
LABEL_43:
    __asm
    {
      vmovss  xmm5, [rsp+1A0h+passEntityNum1]
      vmovss  xmm1, [rsp+1A0h+passEntityNum1]
      vmovss  xmm4, [rsp+1A0h+passEntityNum1]
    }
    goto LABEL_44;
  }
LABEL_76:
  __asm { vmovaps xmm7, [rsp+1A0h+var_60] }
}

/*
==============
G_Combat_SendMeleeCharacterImpactEvent
==============
*/
void G_Combat_SendMeleeCharacterImpactEvent(const gentity_s *body, const gentity_s *victim, const gentity_s *inflictor, const Weapon *r_weapon, const bool isAlternate, const vec3_t *hitOrigin, const meansOfDeath_t mod)
{
  int clothType; 
  const playerState_s *EntityPlayerStateConst; 
  int altMeleeVariation; 
  bool v14; 
  int v15; 
  WeaponSFXPackage *SfxPackage; 
  const playerState_s *v17; 
  const playerState_s *v18; 
  float outAnimType; 
  gentity_s *v22; 
  bool outIsRandomized; 
  WeaponMaterialType material; 
  MeleeAnimType attackerAnim; 
  Weapon *r_weapona; 

  r_weapona = (Weapon *)r_weapon;
  if ( !body && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 1047, ASSERT_TYPE_ASSERT, "(body)", (const char *)&queryFormat, "body") )
    __debugbreak();
  if ( !victim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 1048, ASSERT_TYPE_ASSERT, "(victim)", (const char *)&queryFormat, "victim") )
    __debugbreak();
  if ( !inflictor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 1049, ASSERT_TYPE_ASSERT, "(inflictor)", (const char *)&queryFormat, "inflictor") )
    __debugbreak();
  if ( mod == MOD_MELEE )
  {
    _R15 = hitOrigin;
    if ( hitOrigin )
    {
      clothType = 0;
      v22 = G_Utils_SpawnEventEntity(&body->r.currentOrigin, 83);
      v22->s.lerp.u.anonymous.data[0] = inflictor->s.number;
      v22->s.otherEntityNum = victim->s.number;
      EntityPlayerStateConst = G_GetEntityPlayerStateConst(victim);
      if ( EntityPlayerStateConst )
        clothType = EntityPlayerStateConst->clothType;
      altMeleeVariation = 0;
      v14 = 0;
      attackerAnim = COUNT|DODGE;
      material = MOVEMENT;
      v15 = 1;
      SfxPackage = BG_GetSfxPackage(r_weapona, isAlternate);
      if ( SfxPackage )
        material = SfxPackage->sfxMaterialType;
      v17 = G_GetEntityPlayerStateConst(inflictor);
      v18 = v17;
      if ( v17 )
      {
        v14 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v17->weapCommon.weapFlags, ACTIVE, 0x26u);
        if ( v14 )
          altMeleeVariation = v18->weapCommon.altMeleeVariation;
        else
          altMeleeVariation = v18->weapCommon.meleeVariation;
        v15 = (v18->weapState[0].weaponState == 23) + 1;
        BG_GetWeaponMeleeAnimProperties(v18, r_weapona, isAlternate, 0, v14, &outIsRandomized, &attackerAnim, (unsigned __int8 *)&mod);
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r15+8]
        vsubss  xmm1, xmm0, dword ptr [r13+138h]
        vmovss  dword ptr [rsp+98h+outAnimType], xmm1
      }
      v22->s.eventParm = BG_PackMeleeCharacterImpactParam(clothType, attackerAnim, material, v14, altMeleeVariation, (MeleeResult)v15, outAnimType);
    }
  }
}

/*
==============
G_Debug_VisualizeRadiusDamageTraces
==============
*/
void G_Debug_VisualizeRadiusDamageTraces(gentity_s *inflictor, gentity_s *targ, const vec3_t *centerPos, const vec3_t *targetPos, float coneAngleCos, const vec3_t *coneDirection, int contentMask, unsigned __int8 *priorityMap)
{
  const dvar_t *v16; 
  int integer; 
  bool v18; 
  int v19; 
  const vec4_t *v20; 
  int number; 
  const dvar_t *v47; 
  char v49; 
  int v53; 
  const char *EntityTypeName; 
  const char *v67; 
  const char *v68; 
  int v71; 
  bool v72; 
  int v77; 
  const char *v80; 
  const char *v81; 
  int v87; 
  const char *v90; 
  const char *v91; 
  int skipEntities[4]; 
  trace_t results; 
  vec3_t center; 
  vec3_t xyz; 

  _RSI = targetPos;
  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 1094, ASSERT_TYPE_ASSERT, "(targ)", (const char *)&queryFormat, "targ") )
    __debugbreak();
  v16 = DVARINT_radius_damage_debug_ent;
  if ( !DVARINT_radius_damage_debug_ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_debug_ent") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  integer = v16->current.integer;
  v18 = integer == 0;
  if ( integer < 0 || (v19 = targ->s.number, v18 = integer == v19) )
  {
    v20 = &colorWhite;
    __asm
    {
      vmovaps [rsp+180h+var_50], xmm6
      vmovaps [rsp+180h+var_60], xmm7
      vmovaps [rsp+180h+var_70], xmm8
      vmovss  xmm8, [rbp+80h+coneAngleCos]
      vucomiss xmm8, cs:__real@bf800000
      vmovaps [rsp+180h+var_80], xmm9
      vmovss  xmm9, cs:__real@3f800000
    }
    if ( !v18 && coneDirection )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vsubss  xmm7, xmm0, dword ptr [r12]
        vmovss  xmm1, dword ptr [rsi+4]
        vsubss  xmm4, xmm1, dword ptr [r12+4]
        vmovss  xmm0, dword ptr [rsi+8]
        vsubss  xmm6, xmm0, dword ptr [r12+8]
        vmulss  xmm2, xmm4, xmm4
        vmulss  xmm0, xmm6, xmm6
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm9, xmm0
        vdivss  xmm5, xmm9, xmm0
        vmulss  xmm0, xmm4, xmm5
        vmulss  xmm3, xmm0, dword ptr [rax+4]
        vmulss  xmm1, xmm7, xmm5
        vmulss  xmm2, xmm1, dword ptr [rax]
        vmulss  xmm0, xmm6, xmm5
        vmulss  xmm1, xmm0, dword ptr [rax+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vcomiss xmm2, xmm8
      }
    }
    if ( inflictor )
      number = inflictor->s.number;
    else
      number = 2047;
    v47 = DVARBOOL_radius_damage_debug_detailed;
    if ( !DVARBOOL_radius_damage_debug_detailed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_debug_detailed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    if ( v47->current.enabled )
    {
      skipEntities[0] = targ->s.number;
      skipEntities[1] = number;
      PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_FIRST, &results, centerPos, _RSI, &bounds_origin, skipEntities, 2, 1, contentMask, 1, priorityMap, All);
      __asm
      {
        vmovss  xmm7, [rsp+180h+results.fraction]
        vcomiss xmm7, xmm9
      }
      if ( v49 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi]
          vsubss  xmm1, xmm0, dword ptr [r12]
          vmovss  xmm0, dword ptr [rsi+4]
        }
        v20 = &colorRed;
        v53 = DEBUG_DURATION;
        __asm
        {
          vmulss  xmm2, xmm1, xmm7
          vaddss  xmm6, xmm2, dword ptr [r12]
          vsubss  xmm1, xmm0, dword ptr [r12+4]
          vmovss  xmm0, dword ptr [rsi+8]
          vmulss  xmm2, xmm1, xmm7
          vsubss  xmm1, xmm0, dword ptr [r12+8]
          vaddss  xmm5, xmm2, dword ptr [r12+4]
          vaddss  xmm0, xmm6, dword ptr cs:DEBUG_TEXT_OFFSET
          vmulss  xmm2, xmm1, xmm7
          vaddss  xmm4, xmm2, dword ptr [r12+8]
          vaddss  xmm2, xmm5, dword ptr cs:DEBUG_TEXT_OFFSET+4
          vaddss  xmm1, xmm4, dword ptr cs:DEBUG_TEXT_OFFSET+8
          vmovss  dword ptr [rbp+80h+center], xmm6
          vmovss  dword ptr [rbp+80h+center+4], xmm5
          vmovss  dword ptr [rbp+80h+center+8], xmm4
          vmovss  dword ptr [rbp+80h+xyz], xmm0
          vmovss  dword ptr [rbp+80h+xyz+4], xmm2
          vmovss  dword ptr [rbp+80h+xyz+8], xmm1
        }
        EntityTypeName = G_GetEntityTypeName(&g_entities[results.hitId]);
        v67 = G_GetEntityTypeName(targ);
        v68 = j_va("LOS check failed for ent [%d-%s] -> Hit ent [%d-%s]", (unsigned int)targ->s.number, v67, results.hitId, EntityTypeName);
        __asm { vmovss  xmm2, cs:DEBUG_FONT_SCALE; scale }
        G_Main_AddDebugStringWithDuration(&xyz, &colorYellow, *(float *)&_XMM2, v68, v53);
        __asm { vmovss  xmm1, cs:DEBUG_CIRCLE_RADIUS; radius }
        G_DebugSphere(&center, *(float *)&_XMM1, &colorYellow, 0, DEBUG_DURATION);
LABEL_25:
        G_DebugLineWithDuration(centerPos, _RSI, v20, 1, DEBUG_DURATION);
        __asm
        {
          vmovaps xmm9, [rsp+180h+var_80]
          vmovaps xmm8, [rsp+180h+var_70]
          vmovaps xmm7, [rsp+180h+var_60]
          vmovaps xmm6, [rsp+180h+var_50]
        }
        return;
      }
    }
    else
    {
      v71 = G_Main_RadiusDamageTracePassed(centerPos, _RSI, targ->s.number, number, contentMask, priorityMap);
      v72 = v71 == 1;
      if ( v71 != 1 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr cs:DEBUG_TEXT_OFFSET
          vaddss  xmm1, xmm0, dword ptr [rsi]
          vmovss  xmm2, dword ptr cs:DEBUG_TEXT_OFFSET+4
          vaddss  xmm0, xmm2, dword ptr [rsi+4]
        }
        v77 = DEBUG_DURATION;
        v20 = &colorRed;
        __asm
        {
          vmovss  dword ptr [rbp+80h+center], xmm1
          vmovss  xmm1, dword ptr cs:DEBUG_TEXT_OFFSET+8
          vaddss  xmm2, xmm1, dword ptr [rsi+8]
          vmovss  dword ptr [rbp+80h+center+8], xmm2
          vmovss  dword ptr [rbp+80h+center+4], xmm0
        }
        v80 = G_GetEntityTypeName(targ);
        v81 = j_va("LOS check failed for ent [%d-%s] -> Set radius_damage_debug_detailed to 1 to see entity hit.", (unsigned int)targ->s.number, v80);
        __asm { vmovss  xmm2, cs:DEBUG_FONT_SCALE; scale }
        G_Main_AddDebugStringWithDuration(&center, &colorYellow, *(float *)&_XMM2, v81, v77);
      }
      if ( !v72 )
        goto LABEL_25;
    }
    __asm
    {
      vmovss  xmm0, dword ptr cs:DEBUG_TEXT_OFFSET
      vaddss  xmm1, xmm0, dword ptr [rsi]
      vmovss  xmm2, dword ptr cs:DEBUG_TEXT_OFFSET+4
      vaddss  xmm0, xmm2, dword ptr [rsi+4]
    }
    v87 = DEBUG_DURATION;
    __asm
    {
      vmovss  dword ptr [rbp+80h+center], xmm1
      vmovss  xmm1, dword ptr cs:DEBUG_TEXT_OFFSET+8
      vaddss  xmm2, xmm1, dword ptr [rsi+8]
      vmovss  dword ptr [rbp+80h+center+8], xmm2
      vmovss  dword ptr [rbp+80h+center+4], xmm0
    }
    v90 = G_GetEntityTypeName(targ);
    v91 = j_va("LOS check succeeded for ent [%d-%s]", (unsigned int)targ->s.number, v90);
    __asm { vmovss  xmm2, cs:DEBUG_FONT_SCALE; scale }
    G_Main_AddDebugStringWithDuration(&center, &colorWhite, *(float *)&_XMM2, v91, v87);
    goto LABEL_25;
  }
}

/*
==============
GCombat::GetHitLocDamageTableIndex
==============
*/
__int64 GCombat::GetHitLocDamageTableIndex(GCombat *this, scr_string_t name)
{
  unsigned int v2; 
  scr_string_t *v3; 

  v2 = 0;
  v3 = s_LocDamageTableNames;
  while ( *v3 != name )
  {
    ++v2;
    if ( (__int64)++v3 >= (__int64)&unk_14A5A9218 )
      return 0xFFFFFFFFi64;
  }
  return v2;
}

/*
==============
GCombat::GetLocDamageMult
==============
*/
float GCombat::GetLocDamageMult(GCombat *this, hitLocation_t hitLoc, int tableIndex)
{
  __int64 v3; 
  int v9; 

  v3 = tableIndex;
  _RDI = hitLoc;
  if ( (unsigned int)tableIndex >= 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 128, ASSERT_TYPE_ASSERT, "(unsigned)( tableIndex ) < (unsigned)( MAX_LOCDAMAGE_TABLES )", "tableIndex doesn't index MAX_LOCDAMAGE_TABLES\n\t%i not in [0, %i)", tableIndex, v9) )
      __debugbreak();
  }
  _RAX = s_fLocDamageTables[v3];
  __asm { vmovss  xmm0, dword ptr [rax+rdi*4+8] }
  return *(float *)&_XMM0;
}

/*
==============
GCombat::IsDeathQueued
==============
*/
char GCombat::IsDeathQueued(GCombat *this, gentity_s *self)
{
  int v2; 
  EntHandle *i; 
  unsigned __int16 number; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned __int16 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v14; 
  __int64 v15; 

  v2 = 0;
  if ( this->m_queuedDeathInstanceList.numDeaths <= 0 )
    return 0;
  for ( i = &this->m_queuedDeathInstanceList.deaths[0].damage.target; ; i += 37 )
  {
    number = i->number;
    if ( i->number )
    {
      v7 = number;
      v8 = number - 1;
      if ( v8 >= 0x800 )
      {
        LODWORD(v15) = 2048;
        LODWORD(v14) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v9 = v7 - 1;
      if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v9] )
      {
        LODWORD(v15) = i->number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v15) )
          __debugbreak();
      }
      v10 = i->number;
      if ( i->number )
      {
        if ( (unsigned int)v10 - 1 >= 0x7FF )
        {
          LODWORD(v15) = 2047;
          LODWORD(v14) = v10 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        v11 = i->number;
        if ( (unsigned int)(v11 - 1) >= 0x800 )
        {
          LODWORD(v15) = 2048;
          LODWORD(v14) = v11 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v12 = v11 - 1;
        if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v12] )
        {
          LODWORD(v15) = i->number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v15) )
            __debugbreak();
        }
        if ( &g_entities[i->number - 1] == self )
          break;
      }
    }
    if ( ++v2 >= this->m_queuedDeathInstanceList.numDeaths )
      return 0;
  }
  return 1;
}

/*
==============
GCombat::ProcessQueuedClientDeaths
==============
*/
void GCombat::ProcessQueuedClientDeaths(GCombat *this)
{
  gentity_s *v1; 
  int v2; 
  unsigned int *p_modelIndex; 
  unsigned __int16 v5; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  const vec3_t *v9; 
  const vec3_t *v10; 
  unsigned __int16 v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned __int16 v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int16 v18; 
  __int64 v19; 
  unsigned int v20; 
  __int64 v21; 
  unsigned __int16 v22; 
  __int64 v23; 
  __int64 v24; 
  gentity_s *v25; 
  int v26; 
  __int64 v27; 
  __int64 v28; 
  GBullet *v29; 
  EntHandle *p_inflictor; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  BOOL v34; 
  hitLocation_t v35; 
  int v36; 
  int v37; 
  int v38; 
  void (__fastcall *FinalizePlayerDeath)(GCombat *, gentity_s *, const gentity_s *, gentity_s *, const int, const int, const int, const Weapon *, bool, const vec3_t *, const vec3_t *, const hitLocation_t, int, int, scr_string_t); 
  char v40; 
  scr_string_t v41; 
  int v42; 
  int v43; 

  v1 = NULL;
  v2 = 0;
  if ( this->m_queuedDeathInstanceList.numDeaths > 0 )
  {
    p_modelIndex = &this->m_queuedDeathInstanceList.deaths[0].damage.modelIndex;
    do
    {
      v5 = *((_WORD *)p_modelIndex - 36);
      if ( !v5 )
        goto LABEL_98;
      v6 = v5;
      v7 = v5 - 1;
      if ( v7 >= 0x800 )
      {
        LODWORD(v33) = 2048;
        LODWORD(v32) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v32, v33) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v8 = v6 - 1;
      if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v8] )
      {
        LODWORD(v33) = *((unsigned __int16 *)p_modelIndex - 36) - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v33) )
          __debugbreak();
      }
      if ( *((_WORD *)p_modelIndex - 36) )
      {
        v9 = (const vec3_t *)(p_modelIndex - 12);
        v10 = (const vec3_t *)(p_modelIndex - 15);
        if ( !*((_BYTE *)p_modelIndex + 10) )
          v9 = NULL;
        if ( !*((_BYTE *)p_modelIndex + 9) )
          v10 = NULL;
        FinalizePlayerDeath = this->FinalizePlayerDeath;
        v41 = p_modelIndex[1];
        v42 = *p_modelIndex;
        v43 = *(p_modelIndex - 1);
        v35 = *(p_modelIndex - 2);
        v40 = *((_BYTE *)p_modelIndex + 8);
        v36 = *(p_modelIndex - 3);
        v37 = *(p_modelIndex - 4);
        v38 = *(p_modelIndex - 5);
        v11 = *((_WORD *)p_modelIndex - 32);
        if ( v11 )
        {
          v12 = v11;
          v13 = v11 - 1;
          if ( v13 >= 0x800 )
          {
            LODWORD(v33) = 2048;
            LODWORD(v32) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v32, v33) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v14 = v12 - 1;
          if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v14] )
          {
            LODWORD(v33) = *((unsigned __int16 *)p_modelIndex - 32) - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v33) )
              __debugbreak();
          }
        }
        v15 = *((_WORD *)p_modelIndex - 32);
        if ( v15 )
        {
          if ( (unsigned int)v15 - 1 >= 0x7FF )
          {
            LODWORD(v33) = 2047;
            LODWORD(v32) = v15 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v32, v33) )
              __debugbreak();
          }
          v16 = *((unsigned __int16 *)p_modelIndex - 32);
          if ( (unsigned int)(v16 - 1) >= 0x800 )
          {
            LODWORD(v33) = 2048;
            LODWORD(v32) = v16 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v32, v33) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v17 = v16 - 1;
          if ( g_entities[v17].r.isInUse != g_entityIsInUse[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v17] )
          {
            LODWORD(v33) = *((unsigned __int16 *)p_modelIndex - 32) - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v33) )
              __debugbreak();
          }
          v1 = &g_entities[*((unsigned __int16 *)p_modelIndex - 32) - 1];
        }
        v18 = *((_WORD *)p_modelIndex - 34);
        if ( v18 )
        {
          v19 = v18;
          v20 = v18 - 1;
          if ( v20 >= 0x800 )
          {
            LODWORD(v33) = 2048;
            LODWORD(v32) = v20;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v32, v33) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v21 = v19 - 1;
          if ( g_entities[v21].r.isInUse != g_entityIsInUse[v21] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v21] )
          {
            LODWORD(v33) = *((unsigned __int16 *)p_modelIndex - 34) - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v33) )
              __debugbreak();
          }
        }
        v22 = *((_WORD *)p_modelIndex - 34);
        if ( v22 )
        {
          if ( (unsigned int)v22 - 1 >= 0x7FF )
          {
            LODWORD(v33) = 2047;
            LODWORD(v32) = v22 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v32, v33) )
              __debugbreak();
          }
          v23 = *((unsigned __int16 *)p_modelIndex - 34);
          if ( (unsigned int)(v23 - 1) >= 0x800 )
          {
            LODWORD(v33) = 2048;
            LODWORD(v32) = v23 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v32, v33) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v24 = v23 - 1;
          if ( g_entities[v24].r.isInUse != g_entityIsInUse[v24] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v24] )
          {
            LODWORD(v33) = *((unsigned __int16 *)p_modelIndex - 34) - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v33) )
              __debugbreak();
          }
          v25 = &g_entities[*((unsigned __int16 *)p_modelIndex - 34) - 1];
        }
        else
        {
          v25 = NULL;
        }
        v26 = *((unsigned __int16 *)p_modelIndex - 36);
        if ( (unsigned int)(v26 - 1) >= 0x7FF )
        {
          LODWORD(v33) = 2047;
          LODWORD(v32) = v26 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v32, v33) )
            __debugbreak();
        }
        v27 = *((unsigned __int16 *)p_modelIndex - 36);
        if ( (unsigned int)(v27 - 1) >= 0x800 )
        {
          LODWORD(v33) = 2048;
          LODWORD(v32) = v27 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v32, v33) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v28 = v27 - 1;
        if ( g_entities[v28].r.isInUse != g_entityIsInUse[v28] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v28] )
        {
          LODWORD(v33) = *((unsigned __int16 *)p_modelIndex - 36) - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v33) )
            __debugbreak();
        }
        LOBYTE(v34) = v40;
        FinalizePlayerDeath(this, &g_entities[*((unsigned __int16 *)p_modelIndex - 36) - 1], v25, v1, v38, v37, v36, (const Weapon *)(p_modelIndex - 33), v34, v10, v9, v35, v43, v42, v41);
        v1 = NULL;
      }
      else
      {
LABEL_98:
        Com_PrintWarning(1, "Queued client death is ignored because the target is no longer valid.");
      }
      ++v2;
      p_modelIndex += 37;
    }
    while ( v2 < this->m_queuedDeathInstanceList.numDeaths );
  }
  if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
    __debugbreak();
  v29 = GBullet::ms_gBulletSystem;
  if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 1007, ASSERT_TYPE_ASSERT, "(bullet)", (const char *)&queryFormat, "bullet") )
    __debugbreak();
  GBullet::HandleImpaledEntities(v29);
  this->m_queuedDeathInstanceList.numDeaths = 0;
  p_inflictor = &this->m_queuedDeathInstanceList.deaths[0].damage.inflictor;
  v31 = 200i64;
  do
  {
    EntHandle::setEnt(p_inflictor - 1, NULL);
    EntHandle::setEnt(p_inflictor, NULL);
    EntHandle::setEnt(p_inflictor + 1, NULL);
    p_inflictor += 37;
    --v31;
  }
  while ( v31 );
}

/*
==============
GCombat::ProcessQueuedDamages
==============
*/
void GCombat::ProcessQueuedDamages(GCombat *this)
{
  __int64 numDamages; 
  const char *v3; 
  GBullet *v4; 
  EntHandle *p_attacker; 
  unsigned __int16 number; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  gentity_s *v10; 
  gentity_s *v11; 
  const vec3_t *v12; 
  int health; 
  const vec3_t *v14; 
  EntHandle *v15; 
  gentity_s *v16; 
  EntHandle *p_inflictor; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  BOOL v21; 
  unsigned int v22; 
  hitLocation_t v23; 
  int v24; 
  int v25; 
  int v26; 
  const vec3_t *v27; 
  damageReturnCode_t (__fastcall *Damage_Internal)(GCombat *, gentity_s *, const gentity_s *, gentity_s *, const vec3_t *, const vec3_t *, int, int, int, const Weapon *, bool, hitLocation_t, unsigned int, scr_string_t, int, const vec3_t *, const GExtraDamageParams *); 
  GBullet *v29; 
  char v30; 
  int v31; 
  int v32; 
  scr_string_t v33; 

  if ( this->m_queuedDamageInstanceList.shouldQueueIncomingDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 865, ASSERT_TYPE_ASSERT, "(!m_queuedDamageInstanceList.shouldQueueIncomingDamage)", "%s\n\tThis should be disabled by the time we process the damage", "!m_queuedDamageInstanceList.shouldQueueIncomingDamage") )
    __debugbreak();
  numDamages = (unsigned int)this->m_queuedDamageInstanceList.numDamages;
  if ( (_DWORD)numDamages )
  {
    v3 = j_va("GCombat::ProcessQueuedDamages %i damages", numDamages);
    Sys_ProfBeginNamedEvent(0xFFFF0000, v3);
    if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
      __debugbreak();
    v4 = GBullet::ms_gBulletSystem;
    v29 = GBullet::ms_gBulletSystem;
    if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 875, ASSERT_TYPE_ASSERT, "(bullet)", (const char *)&queryFormat, "bullet") )
      __debugbreak();
    GBullet::ResetHitClientEventCount(v4);
    this->m_queuedDamageInstanceList.isProcessingDamageQueue = 1;
    v31 = 0;
    if ( this->m_queuedDamageInstanceList.numDamages > 0 )
    {
      p_attacker = &this->m_queuedDamageInstanceList.damageInstances[0].attacker;
      do
      {
        number = p_attacker[-2].number;
        if ( !number )
          goto LABEL_56;
        v7 = number;
        v8 = number - 1;
        if ( v8 >= 0x800 )
        {
          LODWORD(v20) = 2048;
          LODWORD(v19) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v9 = v7 - 1;
        if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v9] )
        {
          LODWORD(v20) = p_attacker[-2].number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v20) )
            __debugbreak();
        }
        if ( p_attacker[-2].number )
        {
          if ( !LOBYTE(p_attacker[19].number) || EntHandle::isDefined(p_attacker - 1) )
          {
            if ( !HIBYTE(p_attacker[19].number) || EntHandle::isDefined(p_attacker) )
            {
              v10 = EntHandle::ent(p_attacker - 2);
              if ( EntHandle::isDefined(p_attacker) )
                v11 = EntHandle::ent(p_attacker);
              else
                v11 = NULL;
              v12 = (const vec3_t *)&p_attacker[7];
              health = v10->health;
              if ( !HIBYTE(p_attacker[18].infoIndex) )
                v12 = NULL;
              v14 = (const vec3_t *)&p_attacker[4];
              if ( !LOBYTE(p_attacker[18].infoIndex) )
                v14 = NULL;
              Damage_Internal = this->Damage_Internal;
              v32 = (int)p_attacker[15];
              v33 = (scr_string_t)p_attacker[17];
              v22 = (unsigned int)p_attacker[16];
              v23 = (hitLocation_t)p_attacker[14];
              v30 = p_attacker[18].number;
              v24 = (int)p_attacker[13];
              v25 = (int)p_attacker[12];
              v26 = (int)p_attacker[11];
              v15 = p_attacker + 1;
              if ( !HIBYTE(p_attacker[18].number) )
                v15 = NULL;
              v27 = (const vec3_t *)v15;
              if ( EntHandle::isDefined(p_attacker - 1) )
                v16 = EntHandle::ent(p_attacker - 1);
              else
                v16 = NULL;
              LOBYTE(v21) = v30;
              Damage_Internal(this, v10, v16, v11, v27, v14, v26, v25, v24, (const Weapon *)&p_attacker[-17], v21, v23, v22, v33, v32, v12, (const GExtraDamageParams *)&p_attacker[10]);
              GBullet::HitClientOverrideTracers(v29, v11, (const Weapon *)&p_attacker[-17], p_attacker[18].number);
              GBullet::ResetHitClientEventCount(v29);
              if ( *(_DWORD *)&p_attacker[13] == 8 )
              {
                if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
                  __debugbreak();
                if ( ((v11->s.eType - 1) & 0xFFEF) == 0 )
                  G_Weapon_FinalizeChargeMelee(v11, v10, health - v10->health);
              }
            }
            else
            {
              Com_PrintWarning(1, "Queued client damage is ignored because the attacker is no longer valid.");
            }
          }
          else
          {
            Com_PrintWarning(1, "Queued client damage is ignored because the inflictor is no longer valid.");
          }
        }
        else
        {
LABEL_56:
          Com_PrintWarning(1, "Queued client damage is ignored because the target is no longer valid.");
        }
        p_attacker += 37;
        ++v31;
      }
      while ( v31 < this->m_queuedDamageInstanceList.numDamages );
    }
    p_inflictor = &this->m_queuedDamageInstanceList.damageInstances[0].inflictor;
    this->m_queuedDamageInstanceList.numDamages = 0;
    v18 = 256i64;
    *(_WORD *)&this->m_queuedDamageInstanceList.shouldQueueIncomingDamage = 0;
    do
    {
      EntHandle::setEnt(p_inflictor - 1, NULL);
      EntHandle::setEnt(p_inflictor, NULL);
      EntHandle::setEnt(p_inflictor + 1, NULL);
      p_inflictor += 37;
      --v18;
    }
    while ( v18 );
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
GCombat::QueueDamageInstance
==============
*/
void GCombat::QueueDamageInstance(GCombat *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, int timeOffset, int modelIndex, scr_string_t partName, const vec3_t *surfaceNormal, const GExtraDamageParams *extraParams)
{
  __int64 numDamages; 

  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 799, ASSERT_TYPE_ASSERT, "( targ )", (const char *)&queryFormat, "targ") )
    __debugbreak();
  if ( this->m_queuedDamageInstanceList.numDamages >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 802, ASSERT_TYPE_ASSERT, "( m_queuedDamageInstanceList.numDamages < MAX_QUEUED_PLAYER_DAMAGE_COUNT )", (const char *)&queryFormat, "m_queuedDamageInstanceList.numDamages < MAX_QUEUED_PLAYER_DAMAGE_COUNT") )
    __debugbreak();
  numDamages = this->m_queuedDamageInstanceList.numDamages;
  if ( (int)numDamages < 256 )
  {
    GCombat::BuildQueuedDamageInstance(this, targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, timeOffset, modelIndex, partName, &this->m_queuedDamageInstanceList.damageInstances[numDamages], surfaceNormal, extraParams);
    ++this->m_queuedDamageInstanceList.numDamages;
  }
}

/*
==============
GCombat::QueueDeathInstance
==============
*/
void GCombat::QueueDeathInstance(GCombat *this, gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dflags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, int timeOffset, int modelIndex, scr_string_t partName)
{
  __int64 v19; 
  GExtraDamageParams extraParams; 

  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 818, ASSERT_TYPE_ASSERT, "( targ )", (const char *)&queryFormat, "targ") )
    __debugbreak();
  if ( this->m_queuedDeathInstanceList.numDeaths >= 200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 821, ASSERT_TYPE_ASSERT, "( m_queuedDeathInstanceList.numDeaths < MAX_QUEUED_PLAYER_DEATH_COUNT )", (const char *)&queryFormat, "m_queuedDeathInstanceList.numDeaths < MAX_QUEUED_PLAYER_DEATH_COUNT") )
    __debugbreak();
  if ( this->m_queuedDamageInstanceList.numDamages < 256 )
  {
    v19 = 148i64 * this->m_queuedDeathInstanceList.numDeaths;
    extraParams = 0;
    GCombat::BuildQueuedDamageInstance(this, targ, inflictor, attacker, dir, point, damage, dflags, mod, r_weapon, isAlternate, hitLoc, timeOffset, modelIndex, partName, (GCombat::QueuedDamageInstance *)((char *)&this->m_queuedDeathInstanceList + v19), NULL, &extraParams);
    ++this->m_queuedDeathInstanceList.numDeaths;
  }
}

/*
==============
GCombat::QueuedDamageEnabled
==============
*/
_BOOL8 GCombat::QueuedDamageEnabled(GCombat *this)
{
  return this->m_queuedDamageInstanceList.shouldQueueIncomingDamage;
}

/*
==============
GCombat::SetQueuedDamageEnabled
==============
*/
void GCombat::SetQueuedDamageEnabled(GCombat *this, bool queueEnabled)
{
  this->m_queuedDamageInstanceList.shouldQueueIncomingDamage = queueEnabled;
}

