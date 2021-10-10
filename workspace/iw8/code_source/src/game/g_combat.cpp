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
  bool v21; 
  bool v22; 

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
    v21 = 1;
  }
  else
  {
    v21 = 0;
  }
  outDamageInstance->hasDir = v21;
  if ( point )
  {
    outDamageInstance->point = *point;
    v22 = 1;
  }
  else
  {
    v22 = 0;
  }
  outDamageInstance->hasPoint = v22;
  outDamageInstance->damage = damage;
  outDamageInstance->dFlags = dflags;
  outDamageInstance->mod = mod;
  outDamageInstance->weapon = *r_weapon;
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
char GCombat::CanRadiusDamageFromPos(GCombat *this, gentity_s *targ, const vec3_t *targetPos, gentity_s *inflictor, const vec3_t *centerPos, float radius, float coneAngleCos, const vec3_t *coneDirection, float maxHeight, bool useEyeOffset, int contentMask, bool detailTrace, unsigned __int8 *priorityMap)
{
  unsigned __int8 *v14; 
  float v17; 
  float v18; 
  float v19; 
  int v20; 
  sentient_s *sentient; 
  float v23; 
  float v25; 
  float v26; 
  __int128 v27; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  const dvar_t *v41; 
  vec3_t *p_targetPosa; 
  __int64 v43; 
  float *i; 
  float v45; 
  float v46; 
  __int128 v47; 
  float v48; 
  scr_string_t classname; 
  const DObj *ServerDObjForEnt; 
  float v55; 
  float v56; 
  float v57; 
  double v58; 
  const dvar_t *v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  __int128 v65; 
  float v66; 
  __int128 v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  __int128 v72; 
  float v73; 
  __int128 v74; 
  __int128 v75; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float *v86; 
  vec3_t *v87; 
  __int64 v88; 
  float *v89; 
  float *j; 
  float v91; 
  float v92; 
  __int128 v93; 
  float v94; 
  int passEntityNum1; 
  gentity_s *inflictora; 
  Bounds inflictor_8; 
  Bounds bounds; 
  tmat33_t<vec3_t> axis; 
  vec3_t targetPosa; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  float v116; 
  char v117; 

  v14 = priorityMap;
  inflictora = inflictor;
  if ( !G_IsTriggerModelType(targ) )
  {
    v17 = centerPos->v[1] - targetPos->v[1];
    v18 = centerPos->v[2] - targetPos->v[2];
    if ( (float)((float)((float)(v17 * v17) + (float)((float)(centerPos->v[0] - targetPos->v[0]) * (float)(centerPos->v[0] - targetPos->v[0]))) + (float)(v18 * v18)) >= (float)(radius * radius) )
      return 0;
  }
  v19 = targ->r.currentOrigin.v[2];
  if ( inflictor )
    passEntityNum1 = inflictor->s.number;
  else
    passEntityNum1 = 2047;
  v20 = 0;
  if ( detailTrace )
  {
    if ( !priorityMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 1208, ASSERT_TYPE_ASSERT, "(priorityMap)", "%s\n\tGCombat::CanRadiusDamageFromPos(): detail trace was requested but invalid priority map was provided.", "priorityMap") )
      __debugbreak();
  }
  else
  {
    v14 = NULL;
  }
  sentient = targ->sentient;
  if ( sentient )
  {
    _XMM0 = (unsigned __int64)targ->client;
    v23 = maxHeight;
    __asm { vpcmpeqq xmm3, xmm0, xmm1 }
    v25 = centerPos->v[0] - targetPos->v[0];
    v27 = LODWORD(centerPos->v[1]);
    v26 = centerPos->v[1] - targetPos->v[1];
    _XMM1 = LODWORD(FLOAT_8_0);
    __asm { vblendvps xmm8, xmm1, xmm2, xmm3 }
    *(float *)&v27 = fsqrt((float)(v26 * v26) + (float)(v25 * v25));
    _XMM3 = v27;
    __asm
    {
      vcmpless xmm0, xmm3, xmm13
      vblendvps xmm0, xmm3, xmm10, xmm0
    }
    v33 = v25 * (float)(1.0 / *(float *)&_XMM0);
    v116 = *(float *)&_XMM8;
    LODWORD(v34) = COERCE_UNSIGNED_INT(v26 * (float)(1.0 / *(float *)&_XMM0)) ^ _xmm;
    if ( maxHeight == 0.0 )
    {
      Sentient_GetEyePosition(sentient, &inflictor_8.midPoint);
      v35 = inflictor_8.midPoint.v[2];
      v23 = inflictor_8.midPoint.v[2] - v19;
    }
    else
    {
      if ( useEyeOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 1233, ASSERT_TYPE_ASSERT, "(!useEyeOffset)", (const char *)&queryFormat, "!useEyeOffset") )
        __debugbreak();
      v35 = inflictor_8.midPoint.v[2];
    }
    v36 = targetPos->v[0];
    v37 = targetPos->v[1];
    v38 = targetPos->v[2];
    v39 = v23 * 0.5;
    if ( useEyeOffset )
    {
      v36 = (float)(v36 + inflictor_8.midPoint.v[0]) * 0.5;
      v40 = (float)(v38 + v35) * 0.5;
      v37 = (float)(v37 + inflictor_8.midPoint.v[1]) * 0.5;
    }
    else
    {
      v40 = v38 + v39;
    }
    v41 = DVARBOOL_radius_damage_debug;
    v106 = v40 + v39;
    v105 = (float)(*(float *)&_XMM8 * v33) + v37;
    v108 = v105;
    v109 = v40 - v39;
    v104 = (float)(*(float *)&_XMM8 * v34) + v36;
    v107 = v104;
    v115 = v40 - v39;
    targetPosa.v[2] = v40;
    targetPosa.v[1] = v37;
    targetPosa.v[0] = v36;
    v110 = (float)(v34 * COERCE_FLOAT(_XMM8 ^ _xmm)) + v36;
    v111 = v37 - (float)(*(float *)&_XMM8 * v33);
    v112 = v40 + v39;
    v113 = v110;
    v114 = v111;
    if ( !DVARBOOL_radius_damage_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    if ( v41->current.enabled )
    {
      p_targetPosa = &targetPosa;
      v43 = 5i64;
      do
      {
        G_Debug_VisualizeRadiusDamageTraces(inflictora, targ, centerPos, p_targetPosa++, coneAngleCos, coneDirection, contentMask, v14);
        --v43;
      }
      while ( v43 );
      v20 = 0;
    }
    for ( i = &targetPosa.v[2]; ; i += 3 )
    {
      if ( coneAngleCos == -1.0 )
        goto LABEL_83;
      if ( !coneDirection )
        goto LABEL_83;
      v45 = *(i - 2) - centerPos->v[0];
      v47 = *((unsigned int *)i - 1);
      v46 = *(i - 1) - centerPos->v[1];
      v48 = *i - centerPos->v[2];
      *(float *)&v47 = fsqrt((float)((float)(v46 * v46) + (float)(v45 * v45)) + (float)(v48 * v48));
      _XMM1 = v47;
      __asm
      {
        vcmpless xmm0, xmm1, xmm13
        vblendvps xmm0, xmm1, xmm10, xmm0
      }
      if ( (float)((float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * v46) * coneDirection->v[1]) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v45) * coneDirection->v[0])) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v48) * coneDirection->v[2])) >= coneAngleCos )
      {
LABEL_83:
        if ( G_Main_RadiusDamageTracePassed(centerPos, &targetPosa + v20, targ->s.number, passEntityNum1, contentMask, v14) )
          break;
      }
      if ( ++v20 >= 5 )
        return 0;
    }
  }
  else
  {
    classname = targ->classname;
    if ( classname == scr_const.script_model && targ->model )
    {
      ServerDObjForEnt = Com_GetServerDObjForEnt(targ);
      DObjPhysicsGetBounds(ServerDObjForEnt, &bounds);
      AnglesToAxis(&targ->r.currentAngles, &axis);
      Bounds_Transform(&bounds, &vec3_origin, &axis, &inflictor_8);
      v55 = inflictor_8.midPoint.v[0] + targ->r.currentOrigin.v[0];
      v56 = inflictor_8.midPoint.v[2] + targ->r.currentOrigin.v[2];
      v57 = inflictor_8.midPoint.v[1] + targ->r.currentOrigin.v[1];
      classname = targ->classname;
      inflictor_8.midPoint.v[2] = v56;
      inflictor_8.midPoint.v[0] = v55;
      inflictor_8.midPoint.v[1] = v57;
    }
    else
    {
      v58 = *(double *)&targ->r.absBox.halfSize.y;
      *(_OWORD *)inflictor_8.midPoint.v = *(_OWORD *)targ->r.absBox.midPoint.v;
      v57 = inflictor_8.midPoint.v[1];
      v55 = inflictor_8.midPoint.v[0];
      *(double *)&inflictor_8.halfSize.y = v58;
      LODWORD(v56) = _mm_shuffle_ps(*(__m128 *)inflictor_8.midPoint.v, *(__m128 *)inflictor_8.midPoint.v, 170).m128_u32[0];
    }
    if ( classname != scr_const.trigger_damage || COERCE_FLOAT(COERCE_UNSIGNED_INT(centerPos->v[0] - v55) & _xmm) >= inflictor_8.halfSize.v[0] || COERCE_FLOAT(COERCE_UNSIGNED_INT(centerPos->v[1] - v57) & _xmm) >= inflictor_8.halfSize.v[1] || COERCE_FLOAT(COERCE_UNSIGNED_INT(centerPos->v[2] - v56) & _xmm) >= inflictor_8.halfSize.v[2] )
    {
      v59 = DVARBOOL_radius_damage_debug;
      if ( !DVARBOOL_radius_damage_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v59);
      if ( v59->current.enabled )
        G_DebugBox(&vec3_origin, &inflictor_8, 0.0, &colorMdGrey, 0, 300);
      v60 = centerPos->v[0] - inflictor_8.midPoint.v[0];
      v61 = centerPos->v[2];
      targetPosa.v[0] = inflictor_8.midPoint.v[0];
      v62 = centerPos->v[1] - inflictor_8.midPoint.v[1];
      targetPosa.v[1] = inflictor_8.midPoint.v[1];
      v63 = v61 - inflictor_8.midPoint.v[2];
      targetPosa.v[2] = inflictor_8.midPoint.v[2];
      v64 = fsqrt((float)((float)(v62 * v62) + (float)(v60 * v60)) + (float)(v63 * v63));
      if ( v64 != 0.0 )
      {
        v65 = LODWORD(FLOAT_1_0);
        v66 = v63 * (float)(1.0 / v64);
        *(float *)&v65 = (float)(1.0 / v64) * v60;
        v67 = v65;
        v68 = (float)(1.0 / v64) * v62;
        v69 = (float)((float)(v68 * v68) + (float)(*(float *)&v67 * *(float *)&v67)) + (float)(v66 * v66);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v69 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 1346, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( forward ) )", "(%g, %g, %g) len %g", *(float *)&v67, v68, v66, fsqrt(v69)) )
          __debugbreak();
        LODWORD(v70) = LODWORD(v68) ^ _xmm;
        v71 = fsqrt((float)(v70 * v70) + (float)(*(float *)&v67 * *(float *)&v67));
        v72 = v67;
        if ( v71 == 0.0 )
        {
          v73 = FLOAT_1_0;
        }
        else
        {
          v74 = v67;
          *(float *)&v74 = *(float *)&v67 * (float)(1.0 / v71);
          v72 = v74;
          v73 = v70 * (float)(1.0 / v71);
        }
        v75 = v72;
        *(float *)&v75 = (float)(*(float *)&v72 * *(float *)&v72) + (float)(v73 * v73);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v75 - 1.0) & _xmm) >= 0.0020000001 )
        {
          *(float *)&v75 = fsqrt(*(float *)&v75);
          _XMM0 = v75;
          __asm { vxorpd  xmm0, xmm0, xmm0 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 1357, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( right ) )", "(%g, %g, %g) len %g", v73, *(float *)&v72, *(double *)&_XMM0, *(float *)&v75) )
            __debugbreak();
        }
        LODWORD(v78) = COERCE_UNSIGNED_INT(*(float *)&v72 * v66) ^ _xmm;
        v79 = (float)(*(float *)&v72 * *(float *)&v67) - (float)(v73 * v68);
        v80 = v73 * v66;
        v81 = (float)((float)(v80 * v80) + (float)(v78 * v78)) + (float)(v79 * v79);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v81 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 1359, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( up ) )", "(%g, %g, %g) len %g", v78, v80, v79, fsqrt(v81)) )
          __debugbreak();
        v82 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v73 * inflictor_8.halfSize.v[0]) & _xmm) + COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v72 * inflictor_8.halfSize.v[1]) & _xmm);
        v83 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v78 * inflictor_8.halfSize.v[0]) & _xmm) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v80 * inflictor_8.halfSize.v[1]) & _xmm)) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v79 * inflictor_8.halfSize.v[2]) & _xmm);
        v116 = 2.3694278e-38;
        v117 = 1;
        if ( v82 < 32.0 )
        {
          v82 = 0.0;
          BYTE1(v116) = 0;
          HIBYTE(v116) = 0;
        }
        if ( (float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v78 * inflictor_8.halfSize.v[0]) & _xmm) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v80 * inflictor_8.halfSize.v[1]) & _xmm)) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v79 * inflictor_8.halfSize.v[2]) & _xmm)) < 32.0 )
        {
          v83 = 0.0;
          *(_WORD *)((char *)&v116 + 1) = 0;
          if ( v82 == 0.0 )
            v117 = 0;
        }
        v84 = (float)(v73 * v82) + targetPosa.v[0];
        v85 = targetPosa.v[0] - (float)(v73 * v82);
        v104 = (float)(v78 * v83) + v84;
        v105 = (float)(v80 * v83) + (float)((float)(*(float *)&v72 * v82) + targetPosa.v[1]);
        v107 = v85 + (float)(v78 * v83);
        v106 = (float)(v79 * v83) + targetPosa.v[2];
        v109 = targetPosa.v[2] + (float)(v79 * v83);
        v108 = (float)(targetPosa.v[1] - (float)(*(float *)&v72 * v82)) + (float)(v80 * v83);
        v111 = (float)((float)(*(float *)&v72 * v82) + targetPosa.v[1]) - (float)(v80 * v83);
        v110 = v84 - (float)(v78 * v83);
        v113 = v85 - (float)(v78 * v83);
        v112 = targetPosa.v[2] - (float)(v79 * v83);
        v115 = v112;
        v114 = (float)(targetPosa.v[1] - (float)(*(float *)&v72 * v82)) - (float)(v80 * v83);
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_radius_damage_debug, "radius_damage_debug") )
        {
          v86 = &v116;
          v87 = &targetPosa;
          v88 = 5i64;
          do
          {
            if ( *(_BYTE *)v86 )
              G_Debug_VisualizeRadiusDamageTraces(inflictora, targ, centerPos, v87, coneAngleCos, coneDirection, contentMask, v14);
            ++v87;
            v86 = (float *)((char *)v86 + 1);
            --v88;
          }
          while ( v88 );
          v20 = 0;
        }
        v89 = &v116;
        for ( j = &targetPosa.v[2]; ; j += 3 )
        {
          if ( *(_BYTE *)v89 )
          {
            if ( coneAngleCos == -1.0 )
              goto LABEL_84;
            if ( !coneDirection )
              goto LABEL_84;
            v91 = *(j - 2) - centerPos->v[0];
            v93 = *((unsigned int *)j - 1);
            v92 = *(j - 1) - centerPos->v[1];
            v94 = *j - centerPos->v[2];
            *(float *)&v93 = fsqrt((float)((float)(v92 * v92) + (float)(v91 * v91)) + (float)(v94 * v94));
            _XMM1 = v93;
            __asm
            {
              vcmpless xmm0, xmm1, xmm10
              vblendvps xmm0, xmm1, xmm12, xmm0
            }
            if ( (float)((float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * v92) * coneDirection->v[1]) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v91) * coneDirection->v[0])) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v94) * coneDirection->v[2])) >= coneAngleCos )
            {
LABEL_84:
              if ( G_Main_RadiusDamageTracePassed(centerPos, &targetPosa + v20, targ->s.number, passEntityNum1, contentMask, v14) )
                break;
            }
          }
          ++v20;
          v89 = (float *)((char *)v89 + 1);
          if ( v20 >= 5 )
            return 0;
        }
      }
    }
  }
  return 1;
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
  vec3_t *v33; 
  int v34; 
  vec3_t *v35; 
  scr_string_t to; 

  if ( !notify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 492, ASSERT_TYPE_ASSERT, "( notify != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "notify != NULL_SCR_STRING") )
    __debugbreak();
  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 493, ASSERT_TYPE_ASSERT, "( targ )", (const char *)&queryFormat, "targ") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 494, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  v18 = damage;
  if ( damage < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 495, ASSERT_TYPE_ASSERT, "( damage >= 0 )", (const char *)&queryFormat, "damage >= 0") )
    __debugbreak();
  v19 = mod;
  if ( (unsigned int)mod >= 0x19 )
  {
    LODWORD(v35) = mod;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 496, ASSERT_TYPE_ASSERT, "(unsigned)( mod ) < (unsigned)( MOD_NUM )", "mod doesn't index MOD_NUM\n\t%i not in [0, %i)", v35, 25) )
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
  if ( modelIndex && (v24 = modelIndex - 1, v25 = (unsigned int)v24, targ->attachTagNames[v24]) )
  {
    v26 = targ->attachModelNames[v24];
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
    attachTagName = targ->attachTagNames[v25];
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
    if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 314, ASSERT_TYPE_ASSERT, "( targ )", (const char *)&queryFormat, "targ") )
      __debugbreak();
    if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 315, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
      __debugbreak();
    if ( (targ->flags.m_flags[0] & 0x10000000) == 0 || targ->damageNotify.attackerEntNum == attacker->s.number )
    {
      if ( (targ->flags.m_flags[0] & 0x10000000) != 0 )
      {
        targ->damageNotify.damage += v18;
        level.damageNotifyQueued = 1;
      }
      else
      {
        targ->flags.m_flags[0] |= 0x10000000u;
        targ->damageNotify.damage = v18;
        targ->damageNotify.attackerEntNum = attacker->s.number;
        if ( inflictor )
          number = inflictor->s.number;
        else
          number = 2047;
        v30 = damage;
        targ->damageNotify.inflictorEntNum = number;
        v31 = dir;
        targ->damageNotify.dir.v[0] = dir->v[0];
        targ->damageNotify.dir.v[1] = v31->v[1];
        v32 = v31->v[2];
        v33 = (vec3_t *)point;
        targ->damageNotify.dir.v[2] = v32;
        targ->damageNotify.point = *v33;
        Scr_SetString(&targ->damageNotify.modTypeName, (scr_string_t)v30);
        Scr_SetString(&targ->damageNotify.modelName, modelName);
        Scr_SetString(&targ->damageNotify.attachTagName, attachTagName);
        Scr_SetString(&targ->damageNotify.partName, partName);
        targ->damageNotify.flags = dFlags;
        targ->damageNotify.weapon = *r_weapon;
        targ->damageNotify.isAlternate = isAlternate;
        targ->damageNotify.surfaceNormal.v[0] = v20->v[0];
        targ->damageNotify.surfaceNormal.v[1] = v20->v[1];
        targ->damageNotify.surfaceNormal.v[2] = v20->v[2];
        targ->damageNotify.damageId = (attacker->s.number << 16) | LOWORD(level.time);
        level.damageNotifyQueued = 1;
      }
    }
  }
  else
  {
    if ( attacker )
      v34 = attacker->s.number;
    else
      v34 = 2047;
    G_Combat_DispatchDamageNotify(notify, targ, v18, attacker, inflictor, v21, v22, (scr_string_t)damage, modelName, attachTagName, partName, dFlags, r_weapon, isAlternate, v20, (v34 << 16) | LOWORD(level.time));
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
  scrContext_t *v20; 
  const vec3_t *value; 
  const vec3_t *v22; 
  float v1[4]; 

  v22 = dir;
  value = point;
  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 352, ASSERT_TYPE_ASSERT, "( targ )", (const char *)&queryFormat, "targ", point, dir) )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 353, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  v20 = ScriptContext_Server();
  Scr_AddInt(v20, id);
  if ( inflictor )
    GScr_AddEntity(inflictor);
  else
    Scr_AddUndefined(v20);
  v1[0] = 0.0;
  v1[1] = 0.0;
  v1[2] = 0.0;
  if ( VecNCompareCustomEpsilon(surfaceNormal->v, v1, 0.001, 3) )
    Scr_AddUndefined(v20);
  else
    Scr_AddVector(v20, surfaceNormal->v);
  Scr_AddVector(v20, targ->r.currentAngles.v);
  Scr_AddVector(v20, targ->r.currentOrigin.v);
  if ( r_weapon->weaponIdx )
    GScr_Weapon_AddParam(v20, r_weapon, isAlternate);
  else
    Scr_AddUndefined(v20);
  Scr_AddInt(v20, dFlags);
  if ( partName )
    Scr_AddConstString(v20, partName);
  else
    Scr_AddString(v20, (const char *)&queryFormat.fmt + 3);
  if ( attachTagName )
    Scr_AddConstString(v20, attachTagName);
  else
    Scr_AddString(v20, (const char *)&queryFormat.fmt + 3);
  if ( modelName )
    Scr_AddConstString(v20, modelName);
  else
    Scr_AddString(v20, (const char *)&queryFormat.fmt + 3);
  if ( modName )
    Scr_AddConstString(v20, modName);
  else
    Scr_AddString(v20, (const char *)&queryFormat.fmt + 3);
  Scr_AddVector(v20, value->v);
  Scr_AddVector(v20, v22->v);
  GScr_AddEntity(attacker);
  Scr_AddInt(v20, damage);
  GScr_Notify(targ, notify, 0xFu);
}

/*
==============
G_Combat_GetApproxDistSquaredToModel
==============
*/
float G_Combat_GetApproxDistSquaredToModel(const gentity_s *ent, vec3_t *explosionOrigin, const bool calcDetailBounds, Bounds *bounds, int *outUsingDetailBounds)
{
  float result; 
  double v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  vec3_t outClosestPoint; 
  vec3_t maxs; 
  vec3_t mins; 

  if ( calcDetailBounds && G_Combat_GetClosestPointToCollisionLodBodiesAABB(ent, explosionOrigin, &outClosestPoint, bounds) )
  {
    result = (float)((float)((float)(outClosestPoint.v[1] - explosionOrigin->v[1]) * (float)(outClosestPoint.v[1] - explosionOrigin->v[1])) + (float)((float)(outClosestPoint.v[0] - explosionOrigin->v[0]) * (float)(outClosestPoint.v[0] - explosionOrigin->v[0]))) + (float)((float)(outClosestPoint.v[2] - explosionOrigin->v[2]) * (float)(outClosestPoint.v[2] - explosionOrigin->v[2]));
    if ( outUsingDetailBounds )
      *outUsingDetailBounds = 1;
  }
  else
  {
    v8 = Bounds_DistToPointSq(&ent->r.absBox, explosionOrigin);
    v9 = ent->r.absBox.midPoint.v[0];
    v10 = ent->r.absBox.midPoint.v[1];
    v11 = ent->r.absBox.midPoint.v[2];
    mins.v[0] = v9 - ent->r.absBox.halfSize.v[0];
    mins.v[1] = v10 - ent->r.absBox.halfSize.v[1];
    v12 = *(float *)&v8;
    *(float *)&v8 = v9 + ent->r.absBox.halfSize.v[0];
    mins.v[2] = v11 - ent->r.absBox.halfSize.v[2];
    v13 = v10 + ent->r.absBox.halfSize.v[1];
    maxs.v[0] = *(float *)&v8;
    v14 = v11 + ent->r.absBox.halfSize.v[2];
    maxs.v[1] = v13;
    maxs.v[2] = v14;
    ClosestPointToBounds(explosionOrigin, &mins, &maxs, &outClosestPoint);
    result = v12;
    if ( outUsingDetailBounds )
      *outUsingDetailBounds = 0;
  }
  return result;
}

/*
==============
G_Combat_GetClosestPointToCollisionLodBodiesAABB
==============
*/
char G_Combat_GetClosestPointToCollisionLodBodiesAABB(const gentity_s *self, const vec3_t *const testPoint, vec3_t *outClosestPoint, Bounds *bounds)
{
  float v4; 
  unsigned int Instance; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int NumRigidBodys; 
  float v12; 
  float v13; 
  float v14; 
  unsigned int m_serialAndIndex; 
  int Ref; 
  int number; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  vec3_t *v23; 
  __int64 v25; 
  hknpBodyId result; 
  DObjPartBits *partBits; 
  vec3_t *v28; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 
  vec3_t out; 

  v4 = FLOAT_N1_0;
  v28 = outClosestPoint;
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_SERVER_DETAIL, self);
  v9 = Instance;
  if ( Instance == -1 )
    return 0;
  v10 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_SERVER_DETAIL, Instance);
  if ( !NumRigidBodys )
    return 0;
  v12 = *(float *)&result.m_serialAndIndex;
  v13 = *(float *)&result.m_serialAndIndex;
  v14 = *(float *)&result.m_serialAndIndex;
  do
  {
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( !g_physicsServerWorldsCreated )
    {
      LODWORD(v25) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v25) )
        __debugbreak();
    }
    m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_SERVER_DETAIL, v9, v10)->m_serialAndIndex;
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
        ClosestPointToBounds(testPoint, &aabbMin, &aabbMax, &out);
        if ( v4 < 0.0 || (float)((float)((float)((float)(testPoint->v[1] - out.v[1]) * (float)(testPoint->v[1] - out.v[1])) + (float)((float)(testPoint->v[0] - out.v[0]) * (float)(testPoint->v[0] - out.v[0]))) + (float)((float)(testPoint->v[2] - out.v[2]) * (float)(testPoint->v[2] - out.v[2]))) < v4 )
        {
          v4 = (float)((float)((float)(testPoint->v[1] - out.v[1]) * (float)(testPoint->v[1] - out.v[1])) + (float)((float)(testPoint->v[0] - out.v[0]) * (float)(testPoint->v[0] - out.v[0]))) + (float)((float)(testPoint->v[2] - out.v[2]) * (float)(testPoint->v[2] - out.v[2]));
          v14 = out.v[0];
          v13 = out.v[1];
          v12 = out.v[2];
        }
        v18 = aabbMin.v[0];
        v19 = aabbMin.v[1];
        v20 = aabbMin.v[2];
        v21 = (float)(aabbMin.v[0] + aabbMax.v[0]) * 0.5;
        v22 = aabbMin.v[2] + aabbMax.v[2];
        bounds->midPoint.v[1] = (float)(aabbMin.v[1] + aabbMax.v[1]) * 0.5;
        bounds->midPoint.v[0] = v21;
        bounds->midPoint.v[2] = v22 * 0.5;
        bounds->halfSize.v[0] = v21 - v18;
        bounds->halfSize.v[1] = bounds->midPoint.v[1] - v19;
        bounds->halfSize.v[2] = bounds->midPoint.v[2] - v20;
      }
    }
    ++v10;
  }
  while ( v10 < NumRigidBodys );
  v23 = v28;
  if ( v4 < 0.0 )
    return 0;
  v28->v[0] = v14;
  v23->v[1] = v13;
  v23->v[2] = v12;
  return 1;
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
  gentity_s *v8; 
  float v9; 
  __int64 v10; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 233, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  client = ent->client;
  if ( !client )
    goto LABEL_21;
  p_eFlags = &client->ps.eFlags;
  if ( client == (gclient_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2072, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 7u) )
    goto LABEL_21;
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2076, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    __debugbreak();
  remoteControlEnt = ent->client->ps.remoteControlEnt;
  if ( remoteControlEnt != 2047 && G_IsEntityInUse(remoteControlEnt) )
  {
    v7 = ent->client->ps.remoteControlEnt;
    if ( (unsigned int)v7 >= 0x800 )
    {
      LODWORD(v10) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, 2048) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v8 = g_entities;
    outOrigin->v[0] = g_entities[v7].r.currentOrigin.v[0];
    outOrigin->v[1] = v8[v7].r.currentOrigin.v[1];
    v9 = v8[v7].r.currentOrigin.v[2];
  }
  else
  {
LABEL_21:
    outOrigin->v[0] = ent->r.currentOrigin.v[0];
    outOrigin->v[1] = ent->r.currentOrigin.v[1];
    v9 = ent->r.currentOrigin.v[2];
  }
  outOrigin->v[2] = v9;
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
_BOOL8 G_Combat_IsWithinDamageRadius(const vec3_t *damageOrigin, float radiusSquared, gentity_s *ent)
{
  double v5; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 567, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v5 = Bounds_DistToPointSq(&ent->r.absBox, damageOrigin);
  return radiusSquared > *(float *)&v5;
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
  float v14; 
  float v15; 
  float v16; 
  double v17; 
  int v18; 
  __int64 v19[2]; 
  vec2_t vec; 
  float v21; 
  vec3_t outOrigin; 
  vec3_t v23; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 253, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !inflictor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 254, ASSERT_TYPE_ASSERT, "( inflictor )", (const char *)&queryFormat, "inflictor") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 255, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 256, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v19[0] = (__int64)attacker;
  v8 = v19;
  v19[1] = (__int64)inflictor;
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
  if ( !attacker || attacker == self )
  {
    if ( !inflictor || inflictor == self )
    {
      v18 = (int)self->r.currentAngles.v[1];
      goto LABEL_32;
    }
    G_Combat_GetOriginForDeathCamYaw(inflictor, &v23);
    v14 = v23.v[1];
    vec.v[0] = v23.v[0] - self->r.currentOrigin.v[0];
    v15 = v23.v[2];
  }
  else
  {
    G_Combat_GetOriginForDeathCamYaw(attacker, &outOrigin);
    v14 = outOrigin.v[1];
    vec.v[0] = outOrigin.v[0] - self->r.currentOrigin.v[0];
    v15 = outOrigin.v[2];
  }
  v16 = v14 - self->r.currentOrigin.v[1];
  v21 = v15 - self->r.currentOrigin.v[2];
  vec.v[1] = v16;
  v17 = vectoyaw(&vec);
  v18 = (int)*(float *)&v17;
LABEL_32:
  ps->stats[1] = v18;
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
void G_Combat_RadiusEffectsEnt(int inflictorEntNum, gentity_s *victim, const vec3_t *blastOrigin, float radius_max, float radius_min, gentity_s *attacker, team_t team, const Weapon *r_weapon, bool isAlternate)
{
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  const vec3_t *v14; 
  double v15; 
  float v16; 
  float v17; 
  float v18; 
  bool v19; 
  unsigned __int8 *WeaponPriorityMap; 
  scr_string_t flashbang; 
  unsigned __int8 *v22; 
  sentient_s *sentient; 
  GCombat *CombatSystem; 
  float v25; 
  const playerState_s *EntityPlayerState; 
  GHandler *Handler; 
  float v28; 
  float v29; 
  float v30; 
  __int128 v31; 
  int v34; 
  int v35; 
  int v36; 
  AICommonInterface *v37; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v39; 
  actor_s *actor; 
  float v41; 
  scrContext_t *v42; 
  scrContext_t *v43; 
  __int64 v44; 
  __int64 v45; 
  BOOL priorityMap; 
  unsigned __int8 *priorityMapa; 
  weapProjExposion_t v49; 
  AIActorInterface v51; 
  AIAgentInterface v52; 
  AICommonInterface *v53; 
  vec3_t outOrigin; 
  vec3_t forward; 
  vec3_t vEyePosOut; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 

  v14 = blastOrigin;
  v49 = BG_ProjExplosionType(r_weapon, isAlternate);
  if ( (unsigned int)(v49 - 2) <= 1 )
  {
    if ( victim->r.modelType == 5 )
    {
      v15 = Bounds_DistToPointSq(&victim->r.absBox, v14);
    }
    else
    {
      v16 = v14->v[1] - victim->r.currentOrigin.v[1];
      v17 = v14->v[2] - victim->r.currentOrigin.v[2];
      *(float *)&v15 = (float)((float)(v16 * v16) + (float)((float)(v14->v[0] - victim->r.currentOrigin.v[0]) * (float)(v14->v[0] - victim->r.currentOrigin.v[0]))) + (float)(v17 * v17);
    }
    v18 = fsqrt(*(float *)&v15);
    if ( v18 <= radius_max )
    {
      v19 = BG_WeaponRadiusDamageDetailTrace(r_weapon, isAlternate);
      WeaponPriorityMap = BG_GetWeaponPriorityMap(r_weapon, isAlternate);
      flashbang = 0;
      v22 = WeaponPriorityMap;
      if ( v19 )
      {
        if ( !WeaponPriorityMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 596, ASSERT_TYPE_ASSERT, "(priorityMap)", "%s\n\tG_Combat_RadiusEffectsEnt(): detail trace was requested but invalid priority map was provided.", "priorityMap") )
          __debugbreak();
      }
      else
      {
        v22 = NULL;
      }
      sentient = victim->sentient;
      if ( !sentient || (Sentient_GetEyePosition(sentient, &vEyePosOut), G_Main_RadiusDamageTracePassed(&vEyePosOut, v14, victim->s.number, inflictorEntNum, 8399153, v22)) )
      {
        CombatSystem = GCombat::GetCombatSystem();
        LOBYTE(priorityMap) = v19;
        if ( CombatSystem->GetRadiusDamageFromPos(CombatSystem, victim, attacker, v14, 2049, priorityMap, v22) > 0.0 )
        {
          v57 = v12;
          if ( v18 > radius_min )
            v25 = 1.0 - (float)((float)(v18 - radius_min) / (float)(radius_max - radius_min));
          else
            v25 = FLOAT_1_0;
          if ( G_Utils_IsClientOrAgent(victim) )
          {
            v60 = v9;
            v59 = v10;
            v58 = v11;
            EntityPlayerState = G_GetEntityPlayerState(victim);
            if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 636, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
              __debugbreak();
            Handler = GHandler::getHandler();
            BG_GetPlayerViewDirection(EntityPlayerState, &forward, NULL, NULL, Handler, 0);
            G_Client_GetEyePosition(EntityPlayerState, &outOrigin);
            v28 = v14->v[0] - outOrigin.v[0];
            v31 = LODWORD(v14->v[1]);
            v29 = v14->v[1] - outOrigin.v[1];
            v30 = v14->v[2] - outOrigin.v[2];
            *(float *)&v31 = (float)((float)(v29 * v29) + (float)(v28 * v28)) + (float)(v30 * v30);
            if ( *(float *)&v31 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
              __debugbreak();
            _XMM1 = v31;
            __asm { vrsqrtss xmm2, xmm1, xmm1 }
            *(float *)&v34 = v29 * *(float *)&_XMM2;
            *(float *)&v35 = v30 * *(float *)&_XMM2;
            *(float *)&v36 = v28 * *(float *)&_XMM2;
LABEL_44:
            v41 = (float)((float)((float)((float)(*(float *)&v36 * forward.v[0]) + (float)(*(float *)&v34 * forward.v[1])) + (float)(*(float *)&v35 * forward.v[2])) + 1.0) * 0.5;
            v42 = ScriptContext_Server();
            v43 = v42;
            if ( (unsigned int)team > TEAM_MP_NUM_TEAMS )
            {
              Scr_AddUndefined(v42);
            }
            else if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
            {
              if ( (unsigned int)team >= TEAM_SIX )
              {
                LODWORD(priorityMapa) = team;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 274, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_SP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", priorityMapa) )
                  __debugbreak();
              }
              v44 = team;
              if ( !S_TEAMS_SP_SCR_STRINGS_3[team] )
              {
                LODWORD(priorityMapa) = team;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 275, ASSERT_TYPE_ASSERT, "( ( S_TEAMS_SP_SCR_STRINGS[team] ) )", "( team ) = %i", priorityMapa) )
                  __debugbreak();
                v44 = team;
              }
              Scr_AddConstString(v43, *S_TEAMS_SP_SCR_STRINGS_3[v44]);
              v14 = blastOrigin;
            }
            else
            {
              if ( (unsigned int)team >= TEAM_MP_NUM_TEAMS )
              {
                LODWORD(priorityMapa) = team;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 283, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_MP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", priorityMapa) )
                  __debugbreak();
              }
              v45 = team;
              if ( !S_TEAMS_MP_SCR_STRINGS_3[team] )
              {
                LODWORD(priorityMapa) = team;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 284, ASSERT_TYPE_ASSERT, "( ( S_TEAMS_MP_SCR_STRINGS[team] ) )", "( team ) = %i", priorityMapa) )
                  __debugbreak();
                v45 = team;
              }
              Scr_AddConstString(v43, *S_TEAMS_MP_SCR_STRINGS_3[v45]);
              v14 = blastOrigin;
            }
            if ( attacker )
              GScr_AddEntity(attacker);
            else
              Scr_AddUndefined(v43);
            Scr_AddFloat(v43, v41);
            Scr_AddFloat(v43, v25);
            Scr_AddVector(v43, v14->v);
            if ( v49 == WEAPPROJEXP_FLASHBANG )
            {
              flashbang = scr_const.flashbang;
            }
            else
            {
              if ( v49 != WEAPPROJEXP_MOLOTOV )
                goto LABEL_71;
              flashbang = scr_const.molotov;
            }
            if ( flashbang )
            {
LABEL_73:
              GScr_Notify(victim, flashbang, 5u);
              return;
            }
LABEL_71:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 694, ASSERT_TYPE_ASSERT, "( notifyName != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "notifyName != NULL_SCR_STRING") )
              __debugbreak();
            goto LABEL_73;
          }
          AIActorInterface::AIActorInterface(&v51);
          AIAgentInterface::AIAgentInterface(&v52);
          v37 = NULL;
          v52.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
          v53 = NULL;
          if ( victim->agent )
          {
            if ( SV_Agent_IsScripted(victim->s.number) )
            {
              ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(victim);
              if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
                __debugbreak();
              if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
                __debugbreak();
              AINewAgentInterface::SetAgent((AINewAgentInterface *)&v52, ScriptedAgentInfo);
              v37 = &v52;
              v53 = &v52;
              v39 = &v52;
              goto LABEL_41;
            }
            v37 = v53;
          }
          actor = victim->actor;
          if ( actor )
          {
            if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
              __debugbreak();
            AIActorInterface::SetActor(&v51, victim->actor);
            v37 = &v51;
            v53 = &v51;
          }
          v39 = (AIAgentInterface *)v37;
          if ( !v37 )
          {
            AngleVectors(&victim->r.currentAngles, &forward, NULL, NULL);
            G_Utils_EntityCentroid(victim, &outOrigin);
            goto LABEL_43;
          }
LABEL_41:
          AICommonInterface::GetEyeDirection(v37, &forward);
          v39->GetEyePosition(v39, &outOrigin);
LABEL_43:
          v35 = inflictorEntNum;
          v36 = inflictorEntNum;
          v34 = inflictorEntNum;
          goto LABEL_44;
        }
      }
    }
  }
}

/*
==============
G_Combat_SendMeleeCharacterImpactEvent
==============
*/
void G_Combat_SendMeleeCharacterImpactEvent(const gentity_s *body, const gentity_s *victim, const gentity_s *inflictor, const Weapon *r_weapon, const bool isAlternate, const vec3_t *hitOrigin, const meansOfDeath_t mod)
{
  const vec3_t *v10; 
  int clothType; 
  const playerState_s *EntityPlayerStateConst; 
  int altMeleeVariation; 
  bool v14; 
  int v15; 
  WeaponSFXPackage *SfxPackage; 
  const playerState_s *v17; 
  const playerState_s *v18; 
  gentity_s *v19; 
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
    v10 = hitOrigin;
    if ( hitOrigin )
    {
      clothType = 0;
      v19 = G_Utils_SpawnEventEntity(&body->r.currentOrigin, 83);
      v19->s.lerp.u.anonymous.data[0] = inflictor->s.number;
      v19->s.otherEntityNum = victim->s.number;
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
      v19->s.eventParm = BG_PackMeleeCharacterImpactParam(clothType, attackerAnim, material, v14, altMeleeVariation, (MeleeResult)v15, v10->v[2] - body->r.currentOrigin.v[2]);
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
  const dvar_t *v12; 
  int integer; 
  const vec4_t *v14; 
  float v15; 
  float v16; 
  __int128 v17; 
  float v18; 
  int number; 
  const dvar_t *v23; 
  int v24; 
  float v25; 
  float v26; 
  const char *EntityTypeName; 
  const char *v28; 
  const char *v29; 
  int v30; 
  bool v31; 
  float v32; 
  int v33; 
  const char *v34; 
  const char *v35; 
  float v36; 
  int v37; 
  const char *v38; 
  const char *v39; 
  int skipEntities[4]; 
  trace_t results; 
  vec3_t center; 
  vec3_t xyz; 

  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 1094, ASSERT_TYPE_ASSERT, "(targ)", (const char *)&queryFormat, "targ") )
    __debugbreak();
  v12 = DVARINT_radius_damage_debug_ent;
  if ( !DVARINT_radius_damage_debug_ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_debug_ent") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  integer = v12->current.integer;
  if ( integer < 0 || integer == targ->s.number )
  {
    v14 = &colorWhite;
    if ( coneAngleCos != -1.0 )
    {
      if ( coneDirection )
      {
        v15 = targetPos->v[0] - centerPos->v[0];
        v17 = LODWORD(targetPos->v[1]);
        v16 = targetPos->v[1] - centerPos->v[1];
        v18 = targetPos->v[2] - centerPos->v[2];
        *(float *)&v17 = fsqrt((float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v18 * v18));
        _XMM1 = v17;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm9, xmm0
        }
        if ( (float)((float)((float)((float)(v16 * (float)(1.0 / *(float *)&_XMM0)) * coneDirection->v[1]) + (float)((float)(v15 * (float)(1.0 / *(float *)&_XMM0)) * coneDirection->v[0])) + (float)((float)(v18 * (float)(1.0 / *(float *)&_XMM0)) * coneDirection->v[2])) < coneAngleCos )
        {
          v14 = &colorOrange;
LABEL_26:
          G_DebugLineWithDuration(centerPos, targetPos, v14, 1, DEBUG_DURATION);
          return;
        }
      }
    }
    if ( inflictor )
      number = inflictor->s.number;
    else
      number = 2047;
    v23 = DVARBOOL_radius_damage_debug_detailed;
    if ( !DVARBOOL_radius_damage_debug_detailed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radius_damage_debug_detailed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( v23->current.enabled )
    {
      skipEntities[0] = targ->s.number;
      skipEntities[1] = number;
      PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_FIRST, &results, centerPos, targetPos, &bounds_origin, skipEntities, 2, 1, contentMask, 1, priorityMap, All);
      if ( results.fraction < 1.0 )
      {
        v14 = &colorRed;
        v24 = DEBUG_DURATION;
        v25 = (float)((float)(targetPos->v[1] - centerPos->v[1]) * results.fraction) + centerPos->v[1];
        v26 = (float)((float)(targetPos->v[2] - centerPos->v[2]) * results.fraction) + centerPos->v[2];
        center.v[0] = (float)((float)(targetPos->v[0] - centerPos->v[0]) * results.fraction) + centerPos->v[0];
        center.v[1] = v25;
        center.v[2] = v26;
        xyz.v[0] = center.v[0] + DEBUG_TEXT_OFFSET.v[0];
        xyz.v[1] = v25 + DEBUG_TEXT_OFFSET.v[1];
        xyz.v[2] = v26 + DEBUG_TEXT_OFFSET.v[2];
        EntityTypeName = G_GetEntityTypeName(&g_entities[results.hitId]);
        v28 = G_GetEntityTypeName(targ);
        v29 = j_va("LOS check failed for ent [%d-%s] -> Hit ent [%d-%s]", (unsigned int)targ->s.number, v28, results.hitId, EntityTypeName);
        G_Main_AddDebugStringWithDuration(&xyz, &colorYellow, DEBUG_FONT_SCALE, v29, v24);
        G_DebugSphere(&center, DEBUG_CIRCLE_RADIUS, &colorYellow, 0, DEBUG_DURATION);
        goto LABEL_26;
      }
    }
    else
    {
      v30 = G_Main_RadiusDamageTracePassed(centerPos, targetPos, targ->s.number, number, contentMask, priorityMap);
      v31 = v30 == 1;
      if ( v30 != 1 )
      {
        v32 = DEBUG_TEXT_OFFSET.v[1] + targetPos->v[1];
        v33 = DEBUG_DURATION;
        v14 = &colorRed;
        center.v[0] = DEBUG_TEXT_OFFSET.v[0] + targetPos->v[0];
        center.v[2] = DEBUG_TEXT_OFFSET.v[2] + targetPos->v[2];
        center.v[1] = v32;
        v34 = G_GetEntityTypeName(targ);
        v35 = j_va("LOS check failed for ent [%d-%s] -> Set radius_damage_debug_detailed to 1 to see entity hit.", (unsigned int)targ->s.number, v34);
        G_Main_AddDebugStringWithDuration(&center, &colorYellow, DEBUG_FONT_SCALE, v35, v33);
      }
      if ( !v31 )
        goto LABEL_26;
    }
    v36 = DEBUG_TEXT_OFFSET.v[1] + targetPos->v[1];
    v37 = DEBUG_DURATION;
    center.v[0] = DEBUG_TEXT_OFFSET.v[0] + targetPos->v[0];
    center.v[2] = DEBUG_TEXT_OFFSET.v[2] + targetPos->v[2];
    center.v[1] = v36;
    v38 = G_GetEntityTypeName(targ);
    v39 = j_va("LOS check succeeded for ent [%d-%s]", (unsigned int)targ->s.number, v38);
    G_Main_AddDebugStringWithDuration(&center, &colorWhite, DEBUG_FONT_SCALE, v39, v37);
    goto LABEL_26;
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
  __int64 v4; 
  int v7; 

  v3 = tableIndex;
  v4 = hitLoc;
  if ( (unsigned int)tableIndex >= 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.cpp", 128, ASSERT_TYPE_ASSERT, "(unsigned)( tableIndex ) < (unsigned)( MAX_LOCDAMAGE_TABLES )", "tableIndex doesn't index MAX_LOCDAMAGE_TABLES\n\t%i not in [0, %i)", tableIndex, v7) )
      __debugbreak();
  }
  return s_fLocDamageTables[v3]->mults[v4];
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

