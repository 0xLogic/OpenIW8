/*
==============
GBullet::GetTargetEvaluator
==============
*/

GTargetEvaluator *__fastcall GBullet::GetTargetEvaluator(targetAssistType_t assistType)
{
  return ?GetTargetEvaluator@GBullet@@SAPEAVGTargetEvaluator@@W4targetAssistType_t@@@Z(assistType);
}

/*
==============
G_Bullet_FirstImpactNotify
==============
*/

void __fastcall G_Bullet_FirstImpactNotify(const gentity_s *attacker, const BulletFireParams *bp, const BulletTraceResults *br, const Weapon *weapon, const bool isAlternate)
{
  ?G_Bullet_FirstImpactNotify@@YAXPEBUgentity_s@@PEBUBulletFireParams@@PEBUBulletTraceResults@@AEBUWeapon@@_N@Z(attacker, bp, br, weapon, isAlternate);
}

/*
==============
GDeferredImpactEffectEntry::GDeferredImpactEffectEntry
==============
*/

void __fastcall GDeferredImpactEffectEntry::GDeferredImpactEffectEntry(GDeferredImpactEffectEntry *this)
{
  ??0GDeferredImpactEffectEntry@@QEAA@XZ(this);
}

/*
==============
G_Bullet_GetMethodOfDeath
==============
*/

meansOfDeath_t __fastcall G_Bullet_GetMethodOfDeath(const gentity_s *attacker, const BgWeaponParms *wp)
{
  return ?G_Bullet_GetMethodOfDeath@@YA?AW4meansOfDeath_t@@PEBUgentity_s@@PEBUBgWeaponParms@@@Z(attacker, wp);
}

/*
==============
GBullet::RegisterImpaledEntity
==============
*/

void __fastcall GBullet::RegisterImpaledEntity(GBullet *this, const gentity_s *attacker, const gentity_s *victim, const Weapon *weapon, bool isAlternate, const vec3_t *location, const vec3_t *direction, hitLocation_t hitLocation, scr_string_t partName)
{
  ?RegisterImpaledEntity@GBullet@@QEAAXPEBUgentity_s@@0AEBUWeapon@@_NAEBTvec3_t@@3W4hitLocation_t@@W4scr_string_t@@@Z(this, attacker, victim, weapon, isAlternate, location, direction, hitLocation, partName);
}

/*
==============
GBullet::ResetImpaledEntities
==============
*/

void __fastcall GBullet::ResetImpaledEntities(GBullet *this)
{
  ?ResetImpaledEntities@GBullet@@QEAAXXZ(this);
}

/*
==============
GBullet::GetHitClientEventCount
==============
*/

int __fastcall GBullet::GetHitClientEventCount(GBullet *this)
{
  return ?GetHitClientEventCount@GBullet@@QEBAHXZ(this);
}

/*
==============
G_Bullet_FireExtended
==============
*/

bool __fastcall G_Bullet_FireExtended(unsigned int *randSeed, BulletFireParams *bp, BulletTraceResults *br, const Weapon *weapon, const PlayerHandIndex hand, bool isAlternate, gentity_s *attacker, const bitarray<64> *r_attackerPerks, const float bulletRange, int gameTime, const bool initialSimStep)
{
  return ?G_Bullet_FireExtended@@YA_NPEAIPEAUBulletFireParams@@PEAUBulletTraceResults@@AEBUWeapon@@W4PlayerHandIndex@@_NPEAUgentity_s@@AEBV?$bitarray@$0EA@@@MH_N@Z(randSeed, bp, br, weapon, hand, isAlternate, attacker, r_attackerPerks, bulletRange, gameTime, initialSimStep);
}

/*
==============
GAssistTarget::GetTarget
==============
*/

gentity_s *__fastcall GAssistTarget::GetTarget(GAssistTarget *this)
{
  return ?GetTarget@GAssistTarget@@QEAAPEAUgentity_s@@XZ(this);
}

/*
==============
GBullet::DeferImpactEffectFlags
==============
*/

void __fastcall GBullet::DeferImpactEffectFlags(GBullet *this, const gentity_s *victimEnt, const gentity_s *hitEffectEnt, const int impactFlags)
{
  ?DeferImpactEffectFlags@GBullet@@QEAAXPEBUgentity_s@@0H@Z(this, victimEnt, hitEffectEnt, impactFlags);
}

/*
==============
GBullet::GBullet
==============
*/

void __fastcall GBullet::GBullet(GBullet *this)
{
  ??0GBullet@@QEAA@XZ(this);
}

/*
==============
GBullet::TraceIgnoreHitEntityForAI
==============
*/

bool __fastcall GBullet::TraceIgnoreHitEntityForAI(GBullet *this, const BulletFireParams *bp, const BulletTraceResults *br, const gentity_s *attacker)
{
  return ?TraceIgnoreHitEntityForAI@GBullet@@IEBA_NPEBUBulletFireParams@@PEBUBulletTraceResults@@PEBUgentity_s@@@Z(this, bp, br, attacker);
}

/*
==============
G_Bullet_GetDamage
==============
*/

int __fastcall G_Bullet_GetDamage(const BulletFireParams *bp, const BulletTraceResults *br, const Weapon *weapon, bool isAlternate, const gentity_s *attacker)
{
  return ?G_Bullet_GetDamage@@YAHPEBUBulletFireParams@@PEBUBulletTraceResults@@AEBUWeapon@@_NPEBUgentity_s@@@Z(bp, br, weapon, isAlternate, attacker);
}

/*
==============
GAssistTarget::GetTarget
==============
*/

const gentity_s *__fastcall GAssistTarget::GetTarget(GAssistTarget *this)
{
  return ?GetTarget@GAssistTarget@@QEBAPEBUgentity_s@@XZ(this);
}

/*
==============
G_Bullet_FirePenetrate
==============
*/

bool __fastcall G_Bullet_FirePenetrate(unsigned int *randSeed, BulletFireParams *bp, BulletTraceResults *br, const Weapon *weapon, const PlayerHandIndex hand, bool isAlternate, gentity_s *attacker, int gameTime, const bool initialSimStep)
{
  return ?G_Bullet_FirePenetrate@@YA_NPEAIPEAUBulletFireParams@@PEAUBulletTraceResults@@AEBUWeapon@@W4PlayerHandIndex@@_NPEAUgentity_s@@H_N@Z(randSeed, bp, br, weapon, hand, isAlternate, attacker, gameTime, initialSimStep);
}

/*
==============
GBullet::ResetDeferredImpactEffects
==============
*/

void __fastcall GBullet::ResetDeferredImpactEffects(GBullet *this)
{
  ?ResetDeferredImpactEffects@GBullet@@QEAAXXZ(this);
}

/*
==============
G_Bullet_SetDeferNotifyActors
==============
*/

void __fastcall G_Bullet_SetDeferNotifyActors(bool set)
{
  ?G_Bullet_SetDeferNotifyActors@@YAX_N@Z(set);
}

/*
==============
GBullet::IncrementHitClientEventCount
==============
*/

bool __fastcall GBullet::IncrementHitClientEventCount(GBullet *this, const int entNum)
{
  return ?IncrementHitClientEventCount@GBullet@@QEAA_NH@Z(this, entNum);
}

/*
==============
G_Debug_BulletDamage
==============
*/

void __fastcall G_Debug_BulletDamage(const Weapon *weapon, bool isAlternate, const vec3_t *start, const vec3_t *end, float travelDistance, float rangeScale, float bulletRange)
{
  ?G_Debug_BulletDamage@@YAXAEBUWeapon@@_NAEBTvec3_t@@2MMM@Z(weapon, isAlternate, start, end, travelDistance, rangeScale, bulletRange);
}

/*
==============
GBullet::HandleImpaledEntities
==============
*/

void __fastcall GBullet::HandleImpaledEntities(GBullet *this)
{
  ?HandleImpaledEntities@GBullet@@QEAAXXZ(this);
}

/*
==============
GBullet::CalculateHitImpactSoundDelay
==============
*/

int __fastcall GBullet::CalculateHitImpactSoundDelay(GBullet *this, const gentity_s *attacker, const gentity_s *victim)
{
  return ?CalculateHitImpactSoundDelay@GBullet@@QEBAHPEBUgentity_s@@0@Z(this, attacker, victim);
}

/*
==============
GEntityImpaleEntry::GEntityImpaleEntry
==============
*/

void __fastcall GEntityImpaleEntry::GEntityImpaleEntry(GEntityImpaleEntry *this)
{
  ??0GEntityImpaleEntry@@QEAA@XZ(this);
}

/*
==============
G_Bullet_ClientOnlyFire
==============
*/

void __fastcall G_Bullet_ClientOnlyFire(gentity_s *attacker, float spread, const BgWeaponParms *wp, const gentity_s *weaponEnt, const gentity_s *enemyEnt, PlayerHandIndex hand, const int gameTime)
{
  ?G_Bullet_ClientOnlyFire@@YAXPEAUgentity_s@@MPEBUBgWeaponParms@@PEBU1@2W4PlayerHandIndex@@H@Z(attacker, spread, wp, weaponEnt, enemyEnt, hand, gameTime);
}

/*
==============
GConeTargetEvaluator::FindTargets
==============
*/

int __fastcall GConeTargetEvaluator::FindTargets(GConeTargetEvaluator *this, const Weapon *r_weapon, const bool isAlternate, const gentity_s *attacker, const vec3_t *bulletStart, const vec3_t *bulletDir, float range, float spread, int maxTargets, const bool isBeamWeapon, const unsigned int hitLocMask, const int gameTime, const bool isFiring, ntl::fixed_array<GAssistTarget,20> *outTargetArray)
{
  return ?FindTargets@GConeTargetEvaluator@@UEAAHAEBUWeapon@@_NPEBUgentity_s@@AEBTvec3_t@@3MMH1IH1AEAV?$fixed_array@VGAssistTarget@@$0BE@@ntl@@@Z(this, r_weapon, isAlternate, attacker, bulletStart, bulletDir, range, spread, maxTargets, isBeamWeapon, hitLocMask, gameTime, isFiring, outTargetArray);
}

/*
==============
GAssistTarget::SetTarget
==============
*/

void __fastcall GAssistTarget::SetTarget(GAssistTarget *this, gentity_s *target)
{
  ?SetTarget@GAssistTarget@@QEAAXPEAUgentity_s@@@Z(this, target);
}

/*
==============
G_Bullet_Endpos
==============
*/

void __fastcall G_Bullet_Endpos(unsigned int *randSeed, float spreadMin, float spreadMax, vec3_t *end, vec3_t *dir, float angleMin, float angleMax, const BgWeaponParms *wp, float maxRange)
{
  ?G_Bullet_Endpos@@YAXPEAIMMAEATvec3_t@@1MMPEBUBgWeaponParms@@M@Z(randSeed, spreadMin, spreadMax, end, dir, angleMin, angleMax, wp, maxRange);
}

/*
==============
GAssistTarget::GetEntNum
==============
*/

int __fastcall GAssistTarget::GetEntNum(GAssistTarget *this)
{
  return ?GetEntNum@GAssistTarget@@UEBAHXZ(this);
}

/*
==============
GBullet::BroadcastSpecialHitEvent
==============
*/

void __fastcall GBullet::BroadcastSpecialHitEvent(GBullet *this, const vec3_t *hitPos, const vec3_t *hitNormal, const vec3_t *startPos, const Weapon *weapon, bool isAlternate, int attackerEntNum, const gentity_s *victimEnt, hitLocation_t hitLoc)
{
  ?BroadcastSpecialHitEvent@GBullet@@IEAAXAEBTvec3_t@@00AEBUWeapon@@_NHPEBUgentity_s@@W4hitLocation_t@@@Z(this, hitPos, hitNormal, startPos, weapon, isAlternate, attackerEntNum, victimEnt, hitLoc);
}

/*
==============
GBullet::HandleDeferredImpactEffects
==============
*/

void __fastcall GBullet::HandleDeferredImpactEffects(GBullet *this)
{
  ?HandleDeferredImpactEffects@GBullet@@QEAAXXZ(this);
}

/*
==============
G_Bullet_FireWithParams
==============
*/

int __fastcall G_Bullet_FireWithParams(const GWeaponFireParms *const params, const int serverTime)
{
  return ?G_Bullet_FireWithParams@@YAHQEBUGWeaponFireParms@@H@Z(params, serverTime);
}

/*
==============
GBullet::ResetHitClientEventCount
==============
*/

void __fastcall GBullet::ResetHitClientEventCount(GBullet *this)
{
  ?ResetHitClientEventCount@GBullet@@QEAAXXZ(this);
}

/*
==============
G_Bullet_SetupFireParams
==============
*/

void __fastcall G_Bullet_SetupFireParams(const gentity_s *const attacker, const gentity_s *const weapon, const int serverTime, const float spread, const int sequence, const PlayerHandIndex hand, const unsigned int eventParm, GWeaponFireParms *const outParams)
{
  ?G_Bullet_SetupFireParams@@YAXQEBUgentity_s@@0HMHW4PlayerHandIndex@@IQEAUGWeaponFireParms@@@Z(attacker, weapon, serverTime, spread, sequence, hand, eventParm, outParams);
}

/*
==============
GBullet::HitClientOverrideTracers
==============
*/

void __fastcall GBullet::HitClientOverrideTracers(GBullet *this, gentity_s *const attacker, const Weapon *r_weapon, const bool isAlternate)
{
  ?HitClientOverrideTracers@GBullet@@QEBAXQEAUgentity_s@@AEBUWeapon@@_N@Z(this, attacker, r_weapon, isAlternate);
}

/*
==============
G_Bullet_ProcessDeferredNotifyActors
==============
*/

void G_Bullet_ProcessDeferredNotifyActors(void)
{
  ?G_Bullet_ProcessDeferredNotifyActors@@YAXXZ();
}

/*
==============
GDeferredImpactEffectEntry::Clear
==============
*/

void __fastcall GDeferredImpactEffectEntry::Clear(GDeferredImpactEffectEntry *this)
{
  ?Clear@GDeferredImpactEffectEntry@@QEAAXXZ(this);
}

/*
==============
GEntityImpaleEntry::Clear
==============
*/

void __fastcall GEntityImpaleEntry::Clear(GEntityImpaleEntry *this)
{
  ?Clear@GEntityImpaleEntry@@QEAAXXZ(this);
}

/*
==============
G_Bullet_BoneHitEncode
==============
*/

bool __fastcall G_Bullet_BoneHitEncode(const gentity_s *hitClient, scr_string_t partName, const vec3_t *hitPoint, BulletHitBoneInfo *outHitInfo)
{
  return ?G_Bullet_BoneHitEncode@@YA_NPEBUgentity_s@@W4scr_string_t@@AEBTvec3_t@@PEAUBulletHitBoneInfo@@@Z(hitClient, partName, hitPoint, outHitInfo);
}

/*
==============
GBullet::BroadcastShieldHitEventToVictim
==============
*/

void __fastcall GBullet::BroadcastShieldHitEventToVictim(GBullet *this, unsigned int *randSeed, const vec3_t *hitPos, const vec3_t *hitNormal, const vec3_t *startPos, const Weapon *weapon, bool isAlternate, int attackerEntNum, int victimEntNum)
{
  ?BroadcastShieldHitEventToVictim@GBullet@@IEAAXPEAIAEBTvec3_t@@11AEBUWeapon@@_NHH@Z(this, randSeed, hitPos, hitNormal, startPos, weapon, isAlternate, attackerEntNum, victimEntNum);
}

/*
==============
GConeTargetEvaluator::EvaluateTarget
==============
*/

bool __fastcall GConeTargetEvaluator::EvaluateTarget(GConeTargetEvaluator *this, const GAssistTarget *assistTarget, const vec3_t *bulletStart, float range, vec3_t *outBulletEnd, vec3_t *outBulletDir)
{
  return ?EvaluateTarget@GConeTargetEvaluator@@UEAA_NPEBVGAssistTarget@@AEBTvec3_t@@MAEAT3@2@Z(this, assistTarget, bulletStart, range, outBulletEnd, outBulletDir);
}

/*
==============
G_Bullet_Fire
==============
*/

int __fastcall G_Bullet_Fire(gentity_s *attacker, float spread, const BgWeaponParms *wp, const gentity_s *weaponEnt, PlayerHandIndex hand, const int gameTime)
{
  return ?G_Bullet_Fire@@YAHPEAUgentity_s@@MPEBUBgWeaponParms@@PEBU1@W4PlayerHandIndex@@H@Z(attacker, spread, wp, weaponEnt, hand, gameTime);
}

/*
==============
GBullet::NotifyWhizbys
==============
*/

void __fastcall GBullet::NotifyWhizbys(GBullet *this, const BulletFireParams *bp, const BulletTraceResults *br, gentity_s *attacker, bool useFriendlyFire)
{
  ?NotifyWhizbys@GBullet@@QEAAXPEBUBulletFireParams@@PEBUBulletTraceResults@@PEAUgentity_s@@_N@Z(this, bp, br, attacker, useFriendlyFire);
}

/*
==============
GConeTargetEvaluator::FindTargets
==============
*/
int GConeTargetEvaluator::FindTargets(GConeTargetEvaluator *this, const Weapon *r_weapon, const bool isAlternate, const gentity_s *attacker, const vec3_t *bulletStart, const vec3_t *bulletDir, float range, float spread, int maxTargets, const bool isBeamWeapon, const unsigned int hitLocMask, const int gameTime, const bool isFiring, ntl::fixed_array<GAssistTarget,20> *outTargetArray)
{
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  const vec3_t *v18; 
  const gentity_s *v19; 
  const vec3_t *v20; 
  int v21; 
  float v22; 
  GTargetAssist *v23; 
  int v24; 
  gentity_s *v25; 
  gentity_s **p_m_target; 
  const DObj *ServerDObjForEnt; 
  DObj *v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  char *v36; 
  __int64 v37; 
  ConeTargetHitResults *p_outSearchResults; 
  __m256i v39; 
  __int128 v40; 
  __int64 v41; 
  ConeTargetHitResults *HitResults; 
  char *v43; 
  __int64 v44; 
  __m256i v45; 
  __int128 v46; 
  __int64 v47; 
  unsigned __int64 v48; 
  const dvar_t *v49; 
  const dvar_t *v50; 
  const dvar_t *v51; 
  float v52; 
  float v53; 
  float v54; 
  const playerState_s *EntityPlayerStateConst; 
  GHandler *Handler; 
  tmat33_t<vec3_t> *p_m_axis; 
  __int16 attackerEntNum; 
  GHandler *v59; 
  __int16 v61; 
  bool v62; 
  const gentity_s *v63; 
  ntl::fixed_array<GAssistTarget,20> *inOutTargetArray; 
  unsigned __int64 v65; 
  const vec3_t *v66; 
  Weapon *r_weapona; 
  char v68[832]; 
  BGConeTargetBoneSearchParam searchParam; 
  vec3_t center; 
  vec3_t outAngles; 
  WorldUpReferenceFrame axis; 
  tmat33_t<vec3_t> outAxis; 
  ConeTargetHitResults outSearchResults; 
  __int128 v75; 
  __int128 v76; 
  _OWORD v77[5]; 

  v18 = bulletStart;
  v19 = attacker;
  v20 = bulletDir;
  v75 = v17;
  v63 = attacker;
  v62 = isAlternate;
  r_weapona = (Weapon *)r_weapon;
  *(_QWORD *)center.v = bulletStart;
  v66 = bulletDir;
  inOutTargetArray = outTargetArray;
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1961, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  v21 = 0;
  v61 = 2047;
  v22 = cosf_0(spread * 0.017453292);
  if ( !GTargetAssist::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 61, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  v23 = GTargetAssist::ms_instance;
  v24 = ((__int64 (__fastcall *)(GTargetAssist *, __int64, _QWORD))GTargetAssist::ms_instance->FindNextTarget)(GTargetAssist::ms_instance, 0xFFFFFFFFi64, (unsigned __int16)v19->s.number);
  if ( v24 != 0x7FFFFFFF )
  {
    v25 = &g_entities[v61];
    if ( v25 )
    {
      v77[1] = v14;
      p_m_target = &inOutTargetArray->m_data[0].m_target;
      v77[0] = v15;
      v76 = v16;
      v65 = 0i64;
      do
      {
        if ( (unsigned __int64)v21 >= 0x14 )
          break;
        ServerDObjForEnt = Com_GetServerDObjForEnt(v25);
        v28 = (DObj *)ServerDObjForEnt;
        if ( ServerDObjForEnt )
        {
          if ( DObjGetFirstModel(ServerDObjForEnt) )
          {
            G_Utils_GetAnglesWithWorldUp(v25, &outAngles);
            AnglesToAxis(&outAngles, (tmat33_t<vec3_t> *)&axis);
            v29 = (float)(int)v25->r.currentOrigin.v[0];
            v30 = (float)(int)v25->r.currentOrigin.v[1];
            v31 = (float)(int)v25->r.currentOrigin.v[2];
            memset_0(&searchParam, 0, sizeof(searchParam));
            searchParam.pmoveHandler = GHandler::getHandler();
            searchParam.es = &v25->s;
            searchParam.entityOrigin.v[0] = v29;
            searchParam.entityOrigin.v[1] = v30;
            searchParam.entityOrigin.v[2] = v31;
            searchParam.entityDobj = v28;
            AxisCopy((const tmat33_t<vec3_t> *)&axis, &searchParam.entityAxis);
            searchParam.pmoveHandler = GHandler::getHandler();
            searchParam.localClientNum = LOCAL_CLIENT_INVALID;
            searchParam.bulletRange = range;
            searchParam.maxDot = v22;
            v32 = *(float *)(*(_QWORD *)center.v + 4i64);
            searchParam.bulletStart.v[0] = **(float **)center.v;
            v33 = *(float *)(*(_QWORD *)center.v + 8i64);
            searchParam.bulletStart.v[1] = v32;
            searchParam.bulletStart.v[2] = v33;
            v34 = v66->v[1];
            searchParam.bulletDir.v[0] = v66->v[0];
            v35 = v66->v[2];
            searchParam.hitLocMask = hitLocMask;
            searchParam.isFiring = isFiring;
            searchParam.bulletDir.v[1] = v34;
            searchParam.bulletDir.v[2] = v35;
            if ( BgTargetAssist::FindBonesWithinCone(v23, &searchParam, &outSearchResults) )
            {
              v36 = v68;
              v37 = 6i64;
              p_outSearchResults = &outSearchResults;
              do
              {
                v36 += 128;
                v39 = *(__m256i *)p_outSearchResults->hits[0].tagWorldPos.v;
                v40 = *(_OWORD *)&p_outSearchResults->hits[1].tagWorldRot.row2.z;
                p_outSearchResults = (ConeTargetHitResults *)((char *)p_outSearchResults + 128);
                *((__m256i *)v36 - 4) = v39;
                *((__m256i *)v36 - 3) = *(__m256i *)&p_outSearchResults[-1].hits[10].hitLocation;
                *((__m256i *)v36 - 2) = *(__m256i *)&p_outSearchResults[-1].hits[11].tagWorldRot.row0.y;
                *((_OWORD *)v36 - 2) = *(_OWORD *)&p_outSearchResults[-1].hits[11].tagName;
                *((_OWORD *)v36 - 1) = v40;
                --v37;
              }
              while ( v37 );
              v41 = *(_QWORD *)&p_outSearchResults->hits[0].tagName;
              *(__m256i *)v36 = *(__m256i *)p_outSearchResults->hits[0].tagWorldPos.v;
              *((_OWORD *)v36 + 2) = *(_OWORD *)&p_outSearchResults->hits[0].tagWorldRot.row1.z;
              *((_QWORD *)v36 + 6) = v41;
              *((_DWORD *)v36 + 14) = p_outSearchResults->hits[0].modelIndex;
              HitResults = ConeTargetInfo::GetHitResults(&inOutTargetArray->m_data[v21]);
              v43 = v68;
              v44 = 6i64;
              do
              {
                HitResults = (ConeTargetHitResults *)((char *)HitResults + 128);
                v45 = *(__m256i *)v43;
                v46 = *((_OWORD *)v43 + 7);
                v43 += 128;
                *(__m256i *)&HitResults[-1].hits[10].tagWorldRot.row0.z = v45;
                *(__m256i *)&HitResults[-1].hits[10].hitLocation = *((__m256i *)v43 - 3);
                *(__m256i *)&HitResults[-1].hits[11].tagWorldRot.row0.y = *((__m256i *)v43 - 2);
                *(_OWORD *)&HitResults[-1].hits[11].tagName = *((_OWORD *)v43 - 2);
                *(_OWORD *)&HitResults[-1].hits[11].priority = v46;
                --v44;
              }
              while ( v44 );
              v47 = *((_QWORD *)v43 + 6);
              v48 = v65;
              *(__m256i *)HitResults->hits[0].tagWorldPos.v = *(__m256i *)v43;
              *(_OWORD *)&HitResults->hits[0].tagWorldRot.row1.z = *((_OWORD *)v43 + 2);
              *(_QWORD *)&HitResults->hits[0].tagName = v47;
              HitResults->hits[0].modelIndex = *((_DWORD *)v43 + 14);
              if ( v48 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              *p_m_target = v25;
              ++v21;
              v65 = v48 + 1;
              p_m_target += 106;
            }
          }
        }
        v19 = v63;
        if ( v24 == 0x7FFFFFFF )
          break;
        v24 = v23->FindNextTarget(v23, LOCAL_CLIENT_INVALID, v63->s.number, v24, gameTime, &v61);
        v25 = &g_entities[v61];
      }
      while ( v25 );
      v20 = v66;
      v18 = *(const vec3_t **)center.v;
    }
  }
  v49 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v49);
  if ( v49->current.integer == 2 )
    goto LABEL_37;
  v50 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v50);
  if ( v50->current.integer == 3 )
    goto LABEL_37;
  v51 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v51);
  if ( v51->current.integer == 4 )
  {
LABEL_37:
    v52 = range * v20->v[1];
    center.v[0] = (float)(range * v20->v[0]) + v18->v[0];
    v53 = range * v20->v[2];
    center.v[1] = v52 + v18->v[1];
    center.v[2] = v53 + v18->v[2];
    v54 = tanf_0(spread * 0.017453292);
    G_DebugCircleEx(&center, v54 * range, v20, &colorBlue, 0, 100);
  }
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(v19);
  if ( EntityPlayerStateConst )
  {
    Handler = GHandler::getHandler();
    WorldUpReferenceFrame::WorldUpReferenceFrame(&axis, EntityPlayerStateConst, Handler);
    p_m_axis = &axis.m_axis;
  }
  else
  {
    MatrixIdentity33((tmat33_t<vec3_t> *)&axis);
    p_m_axis = (tmat33_t<vec3_t> *)&axis;
  }
  GenerateAxisFromForwardVector(v20, p_m_axis, &outAxis);
  attackerEntNum = v19->s.number;
  v59 = GHandler::getHandler();
  return BgTargetAssist::EvaluateTargetsWithinCone<GAssistTarget>(v23, v59, r_weapona, v62, inOutTargetArray, v21, &outAxis, v18, maxTargets, attackerEntNum, PHYSICS_WORLD_ID_SERVER_DETAIL, isFiring);
}

/*
==============
GConeTargetEvaluator::EvaluateTarget
==============
*/
bool GConeTargetEvaluator::EvaluateTarget(GConeTargetEvaluator *this, const GAssistTarget *assistTarget, const vec3_t *bulletStart, float range, vec3_t *outBulletEnd, vec3_t *outBulletDir)
{
  ConeTargetHitResults *HitResults; 
  const ConeTargetHitInfo *FirstVisibleHit; 
  ConeTargetHitResults *v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v14; 

  if ( !assistTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2073, ASSERT_TYPE_ASSERT, "(assistTarget)", (const char *)&queryFormat, "assistTarget") )
    __debugbreak();
  HitResults = (ConeTargetHitResults *)ConeTargetInfo::GetHitResults(&assistTarget->ConeTargetInfo);
  FirstVisibleHit = ConeTargetHitResults::GetFirstVisibleHit(HitResults);
  if ( FirstVisibleHit )
  {
    v10 = (ConeTargetHitResults *)ConeTargetInfo::GetHitResults(&assistTarget->ConeTargetInfo);
    FirstVisibleHit = ConeTargetHitResults::GetFirstVisibleHit(v10);
    v11 = FirstVisibleHit->tagWorldPos.v[0] - bulletStart->v[0];
    v13 = LODWORD(FirstVisibleHit->tagWorldPos.v[1]);
    v12 = FirstVisibleHit->tagWorldPos.v[1] - bulletStart->v[1];
    v14 = FirstVisibleHit->tagWorldPos.v[2] - bulletStart->v[2];
    *(float *)&v13 = fsqrt((float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v14 * v14));
    _XMM4 = v13;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    LOBYTE(FirstVisibleHit) = 1;
    outBulletDir->v[1] = (float)(1.0 / *(float *)&_XMM0) * v12;
    outBulletDir->v[2] = (float)(1.0 / *(float *)&_XMM0) * v14;
    *(float *)&v13 = (float)(1.0 / *(float *)&_XMM0) * v11;
    outBulletDir->v[0] = *(float *)&v13;
    outBulletEnd->v[0] = (float)(*(float *)&v13 * range) + bulletStart->v[0];
    outBulletEnd->v[1] = (float)(range * outBulletDir->v[1]) + bulletStart->v[1];
    outBulletEnd->v[2] = (float)(range * outBulletDir->v[2]) + bulletStart->v[2];
  }
  return (char)FirstVisibleHit;
}

/*
==============
GBullet::GBullet
==============
*/
void GBullet::GBullet(GBullet *this)
{
  ntl::fixed_array<GEntityImpaleEntry,8> *p_m_impaledEntities; 
  __int64 v3; 
  ntl::fixed_array<GDeferredImpactEffectEntry,256> *p_m_deferredImpactEffects; 
  __int64 v5; 

  this->m_reduceSpreadShotCount = 0;
  this->__vftable = (GBullet_vtbl *)&GBullet::`vftable';
  p_m_impaledEntities = &this->m_impaledEntities;
  v3 = 8i64;
  do
  {
    GEntityImpaleEntry::GEntityImpaleEntry(p_m_impaledEntities->m_data);
    p_m_impaledEntities = (ntl::fixed_array<GEntityImpaleEntry,8> *)((char *)p_m_impaledEntities + 116);
    --v3;
  }
  while ( v3 );
  this->m_firstHitClientNum = 2047;
  this->m_impaleCount = 0i64;
  p_m_deferredImpactEffects = &this->m_deferredImpactEffects;
  this->m_hitClientEventCount = 0;
  v5 = 256i64;
  do
  {
    GDeferredImpactEffectEntry::GDeferredImpactEffectEntry(p_m_deferredImpactEffects->m_data);
    p_m_deferredImpactEffects = (ntl::fixed_array<GDeferredImpactEffectEntry,256> *)((char *)p_m_deferredImpactEffects + 16);
    --v5;
  }
  while ( v5 );
}

/*
==============
GDeferredImpactEffectEntry::GDeferredImpactEffectEntry
==============
*/
void GDeferredImpactEffectEntry::GDeferredImpactEffectEntry(GDeferredImpactEffectEntry *this)
{
  this->impactFlags = 0;
  this->hitEffectNum = 2047;
  this->victimNum = 2047;
  this->victimWasAlive = 0;
}

/*
==============
GEntityImpaleEntry::GEntityImpaleEntry
==============
*/
void GEntityImpaleEntry::GEntityImpaleEntry(GEntityImpaleEntry *this)
{
  this->victimNum = 2047;
  *(_QWORD *)&this->partName = 0i64;
  *(_QWORD *)&this->attackerNum = 2047i64;
  *(_QWORD *)&this->clientHitPos.y = 0i64;
  *(_OWORD *)this->boneOffset.v = 0ui64;
  *(_QWORD *)&this->hitDirection.y = 0i64;
  *(_QWORD *)&this->weapon.weaponIdx = 0i64;
  *(_QWORD *)&this->weapon.stickerIndices[3] = 0i64;
  *(_QWORD *)&this->weapon.weaponAttachments[2] = 0i64;
  *(_QWORD *)&this->weapon.weaponAttachments[10] = 0i64;
  *(_QWORD *)&this->weapon.attachmentVariationIndices[5] = 0i64;
  *(_QWORD *)&this->weapon.attachmentVariationIndices[13] = 0i64;
  *(_QWORD *)&this->weapon.attachmentVariationIndices[21] = 0i64;
  *(_DWORD *)&this->weapon.weaponCamo = 0;
  this->isAlternate = 0;
}

/*
==============
GBullet::BroadcastShieldHitEventToVictim
==============
*/
void GBullet::BroadcastShieldHitEventToVictim(GBullet *this, unsigned int *randSeed, const vec3_t *hitPos, const vec3_t *hitNormal, const vec3_t *startPos, const Weapon *weapon, bool isAlternate, int attackerEntNum, int victimEntNum)
{
  gentity_s *v12; 
  GWeaponMap *Instance; 

  if ( (unsigned int)(victimEntNum - 2046) > 1 && g_entities[victimEntNum].client )
  {
    v12 = G_Utils_SpawnEventEntity(hitPos, 98);
    Instance = GWeaponMap::GetInstance();
    BG_SetWeaponForEntity(Instance, &v12->s, weapon);
    v12->s.inAltWeaponMode = isAlternate;
    v12->s.eventParm2 = 0;
    if ( (unsigned int)(attackerEntNum + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)attackerEntNum, "signed", attackerEntNum) )
      __debugbreak();
    v12->s.otherEntityNum = attackerEntNum;
    v12->s.surfType = 7;
    this->SetVictimShieldHitEventParameters(this, v12, attackerEntNum, victimEntNum, startPos, hitPos, randSeed);
  }
}

/*
==============
GBullet::BroadcastSpecialHitEvent
==============
*/
void GBullet::BroadcastSpecialHitEvent(GBullet *this, const vec3_t *hitPos, const vec3_t *hitNormal, const vec3_t *startPos, const Weapon *weapon, bool isAlternate, int attackerEntNum, const gentity_s *victimEnt, hitLocation_t hitLoc)
{
  __int64 number; 
  gentity_s *v11; 
  char v12; 
  gentity_s *v13; 
  GWeaponMap *Instance; 
  const playerState_s *EntityPlayerStateConst; 
  __int64 v16; 

  number = victimEnt->s.number;
  if ( (unsigned int)(hitLoc - 19) <= 1 )
  {
    v11 = G_Utils_SpawnEventEntity(hitPos, 95);
    v12 = 29;
    v11->s.eventParm2 = 0;
LABEL_7:
    v13 = v11;
    Instance = GWeaponMap::GetInstance();
    BG_SetWeaponForEntity(Instance, &v13->s, weapon);
    v13->s.inAltWeaponMode = isAlternate;
    if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
      __debugbreak();
    GBullet::ms_gBulletSystem->SetTempEventEntNormal(GBullet::ms_gBulletSystem, v13, hitNormal);
    v13->s.otherEntityNum = attackerEntNum;
    v13->s.surfType = v12;
    if ( (unsigned int)(number - 2046) > 1 )
    {
      if ( (unsigned int)number >= 0x800 )
      {
        LODWORD(v16) = number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 606, ASSERT_TYPE_ASSERT, "(unsigned)( victimEntNum ) < (unsigned)( ( 2048 ) )", "victimEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v16, 2048) )
          __debugbreak();
      }
      EntityPlayerStateConst = G_GetEntityPlayerStateConst(&g_entities[number]);
      if ( EntityPlayerStateConst )
        v13->s.groundEntityNum = EntityPlayerStateConst->clientNum;
    }
    return;
  }
  if ( hitLoc == HITLOC_SOFT )
  {
    v11 = G_Utils_SpawnEventEntity(hitPos, 93);
    v12 = 7;
    v11->s.eventParm2 = 32;
    goto LABEL_7;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 638, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "G_Bullet_BroadcastSpecialHitEvent provided unsupported hitLoc.") )
    __debugbreak();
}

/*
==============
GBullet::CalculateHitImpactSoundDelay
==============
*/
__int64 GBullet::CalculateHitImpactSoundDelay(GBullet *this, const gentity_s *attacker, const gentity_s *victim)
{
  const playerState_s *EntityPlayerStateConst; 
  float v6; 
  float v7; 
  float v8; 
  double Float_Internal_DebugName; 
  int v10; 
  int v11; 

  if ( attacker )
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(attacker);
  else
    EntityPlayerStateConst = NULL;
  if ( !victim || victim->s.eType != ET_PLAYER && victim->s.eType != ET_AGENT && victim->s.eType != ET_ACTOR || !EntityPlayerStateConst || GameModeFlagValues::ms_mpValue == ACTIVE && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->otherFlags, ACTIVE, 0x22u) )
    return 0xFFFFFFFFi64;
  v6 = attacker->r.currentOrigin.v[0] - victim->r.currentOrigin.v[0];
  v7 = attacker->r.currentOrigin.v[1] - victim->r.currentOrigin.v[1];
  v8 = attacker->r.currentOrigin.v[2] - victim->r.currentOrigin.v[2];
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_bulletHitImpactSoundSpeed, "bg_bulletHitImpactSoundSpeed");
  if ( *(float *)&Float_Internal_DebugName <= 0.000001 )
  {
    v10 = 0;
  }
  else
  {
    v10 = (int)(float)(fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8)) * (float)(1000.0 / *(float *)&Float_Internal_DebugName));
    if ( v10 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2991, ASSERT_TYPE_ASSERT, "(timeToVictimMs >= 0)", (const char *)&queryFormat, "timeToVictimMs >= 0") )
      __debugbreak();
  }
  v11 = level.time - EntityPlayerStateConst->serverTime;
  if ( v11 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2994, ASSERT_TYPE_ASSERT, "(viewDelay >= 0)", (const char *)&queryFormat, "viewDelay >= 0") )
    __debugbreak();
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_bg_bulletHitImpactLagCompensation, "bg_bulletHitImpactLagCompensation") )
  {
    v10 -= v11;
    if ( v10 < 0 )
      return 0;
  }
  return (unsigned int)v10;
}

/*
==============
GDeferredImpactEffectEntry::Clear
==============
*/
void GDeferredImpactEffectEntry::Clear(GDeferredImpactEffectEntry *this)
{
  this->impactFlags = 0;
  this->hitEffectNum = 2047;
  this->victimNum = 2047;
  this->victimWasAlive = 0;
}

/*
==============
GEntityImpaleEntry::Clear
==============
*/
void GEntityImpaleEntry::Clear(GEntityImpaleEntry *this)
{
  this->victimNum = 2047;
  *(_QWORD *)&this->partName = 0i64;
  *(_QWORD *)&this->attackerNum = 2047i64;
  *(_QWORD *)&this->clientHitPos.y = 0i64;
  *(_OWORD *)this->boneOffset.v = 0ui64;
  *(_QWORD *)&this->hitDirection.y = 0i64;
  *(_QWORD *)&this->weapon.weaponIdx = 0i64;
  *(_QWORD *)&this->weapon.stickerIndices[3] = 0i64;
  *(_QWORD *)&this->weapon.weaponAttachments[2] = 0i64;
  *(_QWORD *)&this->weapon.weaponAttachments[10] = 0i64;
  *(_QWORD *)&this->weapon.attachmentVariationIndices[5] = 0i64;
  *(_QWORD *)&this->weapon.attachmentVariationIndices[13] = 0i64;
  *(_QWORD *)&this->weapon.attachmentVariationIndices[21] = 0i64;
  *(_DWORD *)&this->weapon.weaponCamo = 0;
  this->isAlternate = 0;
}

/*
==============
GBullet::DeferImpactEffectFlags
==============
*/
void GBullet::DeferImpactEffectFlags(GBullet *this, const gentity_s *victimEnt, const gentity_s *hitEffectEnt, const int impactFlags)
{
  __int64 number; 
  __int64 v9; 
  unsigned __int64 m_deferredImpactCount; 
  GDeferredImpactEffectEntry *v11; 
  char *fmt; 
  __int64 v13; 
  __int64 v14; 

  if ( !victimEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2899, ASSERT_TYPE_ASSERT, "(victimEnt)", (const char *)&queryFormat, "victimEnt") )
    __debugbreak();
  number = victimEnt->s.number;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v13) = victimEnt->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[number].r.isInUse != g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2900, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( victimEnt->s.number ))", (const char *)&queryFormat, "G_IsEntityInUse( victimEnt->s.number )") )
    __debugbreak();
  if ( !hitEffectEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2901, ASSERT_TYPE_ASSERT, "(hitEffectEnt)", (const char *)&queryFormat, "hitEffectEnt") )
    __debugbreak();
  v9 = hitEffectEnt->s.number;
  if ( (unsigned int)v9 >= 0x800 )
  {
    LODWORD(v14) = 2048;
    LODWORD(v13) = hitEffectEnt->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2902, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( hitEffectEnt->s.number ))", (const char *)&queryFormat, "G_IsEntityInUse( hitEffectEnt->s.number )") )
    __debugbreak();
  m_deferredImpactCount = this->m_deferredImpactCount;
  if ( m_deferredImpactCount < 0x100 )
  {
    v11 = &this->m_deferredImpactEffects.m_data[m_deferredImpactCount];
    v11->hitEffectNum = 2047;
    v11->victimNum = 2047;
    v11->victimWasAlive = 0;
    v11->impactFlags = impactFlags;
    v11->victimNum = victimEnt->s.number;
    v11->hitEffectNum = hitEffectEnt->s.number;
    v11->victimWasAlive = victimEnt->health > 0;
    ++this->m_deferredImpactCount;
  }
  else
  {
    LODWORD(fmt) = impactFlags;
    Com_Printf(15, "Hit the maximum number of deferred impact effects. VictimNum %i, HitEffectNum %i, Flags %i\n", (unsigned int)victimEnt->s.number, (unsigned int)hitEffectEnt->s.number, fmt);
  }
}

/*
==============
G_Bullet_BoneHitEncode
==============
*/
char G_Bullet_BoneHitEncode(const gentity_s *hitClient, scr_string_t partName, const vec3_t *hitPoint, BulletHitBoneInfo *outHitInfo)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  const DObj *ServerDObjForEnt; 
  const DObj *v16; 
  XBoneInfo *BoneInfoForBoneIndex; 
  DObjAnimMat *LocalBoneIndexMatrix; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  unsigned __int8 v30; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t v36; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v39; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 

  if ( !hitClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2743, ASSERT_TYPE_ASSERT, "( hitClient )", (const char *)&queryFormat, "hitClient") )
    __debugbreak();
  if ( !outHitInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2744, ASSERT_TYPE_ASSERT, "( outHitInfo )", (const char *)&queryFormat, "outHitInfo") )
    __debugbreak();
  if ( !partName )
    return 0;
  ServerDObjForEnt = Com_GetServerDObjForEnt(hitClient);
  v16 = ServerDObjForEnt;
  if ( !ServerDObjForEnt )
    return 0;
  inOutIndex[0] = -2;
  if ( !DObjGetBoneIndexInternal_20(ServerDObjForEnt, partName, inOutIndex, &modelIndex) )
    return 0;
  v46 = v4;
  v45 = v5;
  v44 = v6;
  v43 = v7;
  v42 = v8;
  v41 = v9;
  v40 = v10;
  if ( inOutIndex[0] == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2757, ASSERT_TYPE_ASSERT, "( boneIndex != 255 )", (const char *)&queryFormat, "boneIndex != NO_BONEINDEX") )
    __debugbreak();
  BoneInfoForBoneIndex = DObjGetBoneInfoForBoneIndex(v16, inOutIndex[0]);
  if ( !BoneInfoForBoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2760, ASSERT_TYPE_ASSERT, "( boneInfo )", (const char *)&queryFormat, "boneInfo") )
    __debugbreak();
  LocalBoneIndexMatrix = G_Utils_DObjGetLocalBoneIndexMatrix(hitClient, inOutIndex[0]);
  AnglesToAxis(&hitClient->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
  v19 = hitClient->r.currentOrigin.v[1];
  axis.m[3].v[0] = hitClient->r.currentOrigin.v[0];
  axis.m[3].v[2] = hitClient->r.currentOrigin.v[2];
  axis.m[3].v[1] = v19;
  MatrixTransposeTransformVector43(hitPoint, &axis, &out);
  QuatToAxis(&LocalBoneIndexMatrix->quat, (tmat33_t<vec3_t> *)&v39);
  v39.m[3] = LocalBoneIndexMatrix->trans;
  MatrixTransposeTransformVector43(&out, &v39, &v36);
  v20 = BoneInfoForBoneIndex->bounds.halfSize.v[0];
  if ( v20 == 0.0 )
    v21 = 0.0;
  else
    v21 = (float)(v36.v[0] - BoneInfoForBoneIndex->bounds.midPoint.v[0]) / v20;
  v22 = BoneInfoForBoneIndex->bounds.halfSize.v[1];
  if ( v22 == 0.0 )
    v23 = 0.0;
  else
    v23 = (float)(v36.v[1] - BoneInfoForBoneIndex->bounds.midPoint.v[1]) / v22;
  v24 = BoneInfoForBoneIndex->bounds.halfSize.v[2];
  if ( v24 == 0.0 )
    v25 = 0.0;
  else
    v25 = (float)(v36.v[2] - BoneInfoForBoneIndex->bounds.midPoint.v[2]) / v24;
  I_fclamp((float)(v21 + 1.0) * 0.5, 0.0, 1.0);
  I_fclamp((float)(v23 + 1.0) * 0.5, 0.0, 1.0);
  I_fclamp((float)(v25 + 1.0) * 0.5, 0.0, 1.0);
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm0, 1 }
  _XMM6 = 0i64;
  __asm { vroundss xmm6, xmm6, xmm2, 1 }
  v30 = truncate_cast<unsigned char,unsigned int>((int)*(float *)&_XMM1);
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm0, 1 }
  *((_BYTE *)outHitInfo + 1) = v30;
  *((_BYTE *)outHitInfo + 2) = truncate_cast<unsigned char,unsigned int>((int)*(float *)&_XMM1);
  *((_BYTE *)outHitInfo + 3) = truncate_cast<unsigned char,unsigned int>((int)*(float *)&_XMM6);
  if ( (unsigned int)inOutIndex[0] + 1 >= 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2800, ASSERT_TYPE_ASSERT, "( boneIndex + 1 < 0xff )", (const char *)&queryFormat, "boneIndex + 1 < UCHAR_MAX") )
    __debugbreak();
  *(_BYTE *)outHitInfo = inOutIndex[0] + 1;
  return 1;
}

/*
==============
G_Bullet_CalculateLinearDamage
==============
*/
__int64 G_Bullet_CalculateLinearDamage(const WeaponDamageCalcType damageCalcType, const BulletFireParams *bp, const BulletTraceResults *br, const Weapon *weapon, bool isAlternate)
{
  __int128 v5; 
  int v10; 
  const dvar_t *v11; 
  float v12; 
  float travelDistance; 
  float v14; 
  float v15; 
  float minDamageRange[4]; 
  __int128 v18; 
  float maxDamageRange; 
  int outMaxDamage; 
  int outMinDamage; 

  if ( (unsigned int)damageCalcType >= WEAP_DMG_CALC_TYPE_NUM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 215, ASSERT_TYPE_ASSERT, "(unsigned)( damageCalcType ) < (unsigned)( WEAP_DMG_CALC_TYPE_NUM )", "damageCalcType doesn't index WEAP_DMG_CALC_TYPE_NUM\n\t%i not in [0, %i)", damageCalcType, 3) )
    __debugbreak();
  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 226, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 227, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( br->trace.hitType == TRACE_HITTYPE_BEGIN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 228, ASSERT_TYPE_ASSERT, "( br->trace.hitType != TRACE_HITTYPE_NONE )", (const char *)&queryFormat, "br->trace.hitType != TRACE_HITTYPE_NONE") )
    __debugbreak();
  BG_GetMinMaxDamage(damageCalcType, weapon, isAlternate, &outMinDamage, &outMaxDamage);
  v10 = outMaxDamage;
  if ( outMaxDamage != outMinDamage )
  {
    v11 = DVARBOOL_bg_bulletsUseMaxDamageMinRange;
    if ( !DVARBOOL_bg_bulletsUseMaxDamageMinRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bulletsUseMaxDamageMinRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( !v11->current.enabled || BG_GetWeaponClass(weapon, isAlternate) == WEAPCLASS_SPREAD )
    {
      BG_GetDamageRange(damageCalcType, weapon, isAlternate, bp->rangeScale, minDamageRange, &maxDamageRange);
      v12 = maxDamageRange;
      travelDistance = bp->travelDistance;
      if ( travelDistance >= maxDamageRange )
      {
        if ( travelDistance >= minDamageRange[0] )
        {
          v10 = outMinDamage;
        }
        else
        {
          v18 = v5;
          v14 = minDamageRange[0] - maxDamageRange;
          if ( (float)(minDamageRange[0] - maxDamageRange) == 0.0 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 247, ASSERT_TYPE_ASSERT, "(range != 0.0f)", (const char *)&queryFormat, "range != 0.0f") )
              __debugbreak();
            v12 = maxDamageRange;
          }
          v15 = (float)(travelDistance - v12) / v14;
          if ( (v15 < 0.0 || v15 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 249, ASSERT_TYPE_ASSERT, "( ( (lerpAmount >= 0.0) && (lerpAmount <= 1.0) ) )", "( lerpAmount ) = %g", v15) )
            __debugbreak();
          v10 = (int)(float)((float)((float)(1.0 - v15) * (float)outMaxDamage) + (float)((float)outMinDamage * v15));
        }
      }
      else
      {
        v10 = outMaxDamage;
      }
    }
  }
  return (unsigned int)(int)(float)((float)v10 * bp->damageMultiplier);
}

/*
==============
G_Bullet_ClientOnlyFire
==============
*/
void G_Bullet_ClientOnlyFire(gentity_s *attacker, float spread, const BgWeaponParms *wp, const gentity_s *weaponEnt)
{
  scrContext_t *v6; 
  vec3_t *p_muzzleTrace; 
  bool v8; 
  ai_event_t v9; 
  unsigned __int64 eTeam; 
  bitarray<224> *AllTeamFlags; 
  bitarray<224> teamFlags; 
  vec3_t angles; 

  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2651, ASSERT_TYPE_ASSERT, "(attacker)", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  vectoangles(&wp->forward, &angles);
  v6 = ScriptContext_Server();
  Scr_AddVector(v6, angles.v);
  p_muzzleTrace = &wp->muzzleTrace;
  Scr_AddVector(v6, wp->muzzleTrace.v);
  GScr_Weapon_AddParam(v6, &wp->weapon, wp->isAlternate);
  GScr_Notify(attacker, scr_const.weapon_fired, 3u);
  if ( attacker->sentient )
  {
    v8 = !BG_IsSilenced(&wp->weapon, wp->isAlternate);
    v9 = AI_EV_GUNSHOT;
    if ( !v8 )
      v9 = AI_EV_SILENCED_SHOT;
    eTeam = (unsigned int)attacker->sentient->eTeam;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      AllTeamFlags = (bitarray<224> *)Com_TeamsSP_GetAllTeamFlags();
    else
      AllTeamFlags = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
    teamFlags = *AllTeamFlags;
    if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
      __debugbreak();
    teamFlags.array[eTeam >> 5] &= ~(0x80000000 >> (eTeam & 0x1F));
    Actor_BroadcastPointEvent(attacker, v9, &teamFlags, p_muzzleTrace);
  }
}

/*
==============
G_Bullet_DamageGlass
==============
*/
void G_Bullet_DamageGlass(const BulletFireParams *bp, const BulletTraceResults *br, const Weapon *weapon, bool isAlternate, gentity_s *attacker)
{
  int GlassHitId; 
  int Damage; 
  unsigned __int64 eTeam; 
  bitarray<224> *AllTeamFlags; 
  unsigned int v13; 
  double v14; 
  __int64 v15; 
  unsigned int v16; 
  bitarray<224> teamFlags; 

  if ( !Trace_GetGlassHitId(&br->trace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 907, ASSERT_TYPE_ASSERT, "(Trace_GetGlassHitId( &br->trace ) != 0)", (const char *)&queryFormat, "Trace_GetGlassHitId( &br->trace ) != 0") )
    __debugbreak();
  if ( !BG_IsBeamWeapon(weapon, isAlternate) )
  {
    GlassHitId = Trace_GetGlassHitId(&br->trace);
    Damage = G_Bullet_GetDamage(bp, br, weapon, isAlternate, attacker);
    G_Glass_DamagePiece(GlassHitId - 1, Damage, &br->hitPos, &bp->dir);
    if ( attacker )
    {
      if ( attacker->sentient && G_Glass_GetPieceState(GlassHitId - 1) == GLASS_DESTROYED )
      {
        eTeam = (unsigned int)attacker->sentient->eTeam;
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
          AllTeamFlags = (bitarray<224> *)Com_TeamsSP_GetAllTeamFlags();
        else
          AllTeamFlags = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
        teamFlags = *AllTeamFlags;
        if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
          __debugbreak();
        teamFlags.array[eTeam >> 5] &= ~(0x80000000 >> (eTeam & 0x1F));
        if ( s_bulletDeferNotifyActors )
        {
          v13 = s_bulletNumDeferredGlassNotifies;
          if ( s_bulletNumDeferredGlassNotifies < 0x20 )
            goto LABEL_20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 479, ASSERT_TYPE_ASSERT, "(s_bulletNumDeferredGlassNotifies < MAX_DEFERRED_BULLET_GLASS_NOTIFIES)", (const char *)&queryFormat, "s_bulletNumDeferredGlassNotifies < MAX_DEFERRED_BULLET_GLASS_NOTIFIES") )
            __debugbreak();
          v13 = s_bulletNumDeferredGlassNotifies;
          if ( s_bulletNumDeferredGlassNotifies < 0x20 )
          {
LABEL_20:
            v14 = *(double *)&teamFlags.array[4];
            s_bulletNumDeferredGlassNotifies = v13 + 1;
            v15 = v13;
            v16 = teamFlags.array[6];
            *(_OWORD *)s_bulletDeferredGlassNotifies[v15].teamFlags.array = *(_OWORD *)teamFlags.array;
            *(double *)&s_bulletDeferredGlassNotifies[v15].teamFlags.array[4] = v14;
            s_bulletDeferredGlassNotifies[v15].teamFlags.array[6] = v16;
            s_bulletDeferredGlassNotifies[v15].originator = attacker;
            s_bulletDeferredGlassNotifies[v15].eType = AI_EV_GLASS_DESTROYED;
            s_bulletDeferredGlassNotifies[v15].vOrigin.v[0] = br->hitPos.v[0];
            s_bulletDeferredGlassNotifies[v15].vOrigin.v[1] = br->hitPos.v[1];
            s_bulletDeferredGlassNotifies[v15].vOrigin.v[2] = br->hitPos.v[2];
          }
        }
        else
        {
          Actor_BroadcastGlassEvent(attacker, AI_EV_GLASS_DESTROYED, &teamFlags, &br->hitPos);
        }
      }
    }
  }
}

/*
==============
G_Bullet_DebugDrawHit
==============
*/
void G_Bullet_DebugDrawHit(BulletTraceResults *br, BulletFireParams *bp)
{
  __int128 v2; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  unsigned int v7; 
  DObjPartBits *p_partBits; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  DObjPartBits partBits; 
  __int128 v13; 

  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1099, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !br->hitEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1100, ASSERT_TYPE_ASSERT, "( br->hitEnt )", (const char *)&queryFormat, "br->hitEnt") )
    __debugbreak();
  v5 = DVARINT_g_debugLocDamage;
  if ( !DVARINT_g_debugLocDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugLocDamage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer == br->hitEnt->s.number )
    CL_AddDebugStar(&br->hitPos, &colorRed, 0, 100, 1);
  v6 = DVARINT_g_debugLocHit;
  if ( !DVARINT_g_debugLocHit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugLocHit") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer == br->hitEnt->s.number )
  {
    v7 = 0;
    p_partBits = &partBits;
    v13 = v2;
    do
    {
      *(_OWORD *)p_partBits->array = _xmm_ffffffffffffffffffffffffffffffff;
      p_partBits = (DObjPartBits *)((char *)p_partBits + 16);
      ++v7;
    }
    while ( v7 < 2 );
    G_Utils_DObjCalcPose(br->hitEnt, &partBits);
    v9 = DVARINT_g_debugLocHitTime;
    if ( !DVARINT_g_debugLocHitTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugLocHitTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    SV_Game_XModelDebugBoxes(br->hitEnt, &colorYellow, v9->current.integer);
    v10 = DVARINT_g_debugLocHitTime;
    if ( !DVARINT_g_debugLocHitTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugLocHitTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    CL_AddDebugLine(&bp->start, &br->hitPos, &colorGreen, 0, v10->current.integer, 1);
    v11 = DVARINT_g_debugLocHitTime;
    if ( !DVARINT_g_debugLocHitTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugLocHitTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    CL_AddDebugStar(&br->hitPos, &colorRed, 0, v11->current.integer, 1);
  }
}

/*
==============
G_Bullet_Endpos
==============
*/
void G_Bullet_Endpos(unsigned int *randSeed, float spreadMin, float spreadMax, vec3_t *end, vec3_t *dir, float angleMin, float angleMax, const BgWeaponParms *wp, float maxRange)
{
  float v11; 
  float v12; 
  float v13; 
  double v14; 
  double v15; 
  double v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  const dvar_t *v34; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  __int128 v45; 
  float v46; 
  float v50; 
  float v51; 
  float s; 
  float c; 
  vec3_t enda; 

  c = spreadMin;
  if ( (LODWORD(spreadMin) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 134, ASSERT_TYPE_SANITY, "( !IS_NAN( spreadMin ) )", (const char *)&queryFormat, "!IS_NAN( spreadMin )") )
    __debugbreak();
  c = spreadMax;
  if ( (LODWORD(spreadMax) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 135, ASSERT_TYPE_SANITY, "( !IS_NAN( spreadMax ) )", (const char *)&queryFormat, "!IS_NAN( spreadMax )") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 141, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  v11 = tanf_0(spreadMin * 0.017453292) * maxRange;
  c = v11;
  v13 = tanf_0(spreadMax * 0.017453292) * maxRange;
  v12 = v13;
  if ( (LODWORD(v11) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 151, ASSERT_TYPE_SANITY, "( !IS_NAN( aimOffsetMin ) )", (const char *)&queryFormat, "!IS_NAN( aimOffsetMin )") )
    __debugbreak();
  c = v13;
  if ( (LODWORD(v13) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 152, ASSERT_TYPE_SANITY, "( !IS_NAN( aimOffsetMax ) )", (const char *)&queryFormat, "!IS_NAN( aimOffsetMax )") )
    __debugbreak();
  if ( angleMin > angleMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 105, ASSERT_TYPE_ASSERT, "( angleMin ) <= ( angleMax )", "%s <= %s\n\t%g, %g", "angleMin", "angleMax", angleMin, angleMax) )
    __debugbreak();
  v14 = BG_random(randSeed);
  v15 = AngleNormalize360((float)(*(float *)&v14 * (float)(angleMax - angleMin)) + angleMin);
  FastSinCos(*(float *)&v15 * 0.017453292, &s, &c);
  v16 = BG_random(randSeed);
  v17 = (float)((float)((float)(v13 - v11) * c) * *(float *)&v16) + (float)(v11 * c);
  v18 = (float)((float)(v13 - v11) * s) * *(float *)&v16;
  *(float *)&v16 = v11 * s;
  s = v17;
  v20 = v18 + *(float *)&v16;
  v19 = v20;
  if ( (LODWORD(v17) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 164, ASSERT_TYPE_SANITY, "( !IS_NAN( right ) )", (const char *)&queryFormat, "!IS_NAN( right )") )
    __debugbreak();
  s = v20;
  if ( (LODWORD(v20) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 165, ASSERT_TYPE_SANITY, "( !IS_NAN( up ) )", (const char *)&queryFormat, "!IS_NAN( up )") )
    __debugbreak();
  s = wp->muzzleTrace.v[0];
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 || (s = wp->muzzleTrace.v[1], (LODWORD(s) & 0x7F800000) == 2139095040) || (s = wp->muzzleTrace.v[2], (LODWORD(s) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 166, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp->muzzleTrace )[0] ) && !IS_NAN( ( wp->muzzleTrace )[1] ) && !IS_NAN( ( wp->muzzleTrace )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp->muzzleTrace )[0] ) && !IS_NAN( ( wp->muzzleTrace )[1] ) && !IS_NAN( ( wp->muzzleTrace )[2] )") )
      __debugbreak();
  }
  s = wp->forward.v[0];
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 || (s = wp->forward.v[1], (LODWORD(s) & 0x7F800000) == 2139095040) || (s = wp->forward.v[2], (LODWORD(s) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 167, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp->forward )[0] ) && !IS_NAN( ( wp->forward )[1] ) && !IS_NAN( ( wp->forward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp->forward )[0] ) && !IS_NAN( ( wp->forward )[1] ) && !IS_NAN( ( wp->forward )[2] )") )
      __debugbreak();
  }
  s = wp->right.v[0];
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 || (s = wp->right.v[1], (LODWORD(s) & 0x7F800000) == 2139095040) || (s = wp->right.v[2], (LODWORD(s) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 168, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp->right )[0] ) && !IS_NAN( ( wp->right )[1] ) && !IS_NAN( ( wp->right )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp->right )[0] ) && !IS_NAN( ( wp->right )[1] ) && !IS_NAN( ( wp->right )[2] )") )
      __debugbreak();
  }
  s = wp->up.v[0];
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 || (s = wp->up.v[1], (LODWORD(s) & 0x7F800000) == 2139095040) || (s = wp->up.v[2], (LODWORD(s) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 169, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp->up )[0] ) && !IS_NAN( ( wp->up )[1] ) && !IS_NAN( ( wp->up )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp->up )[0] ) && !IS_NAN( ( wp->up )[1] ) && !IS_NAN( ( wp->up )[2] )") )
      __debugbreak();
  }
  v21 = (float)(maxRange * wp->forward.v[0]) + wp->muzzleTrace.v[0];
  end->v[0] = v21;
  v22 = (float)(maxRange * wp->forward.v[1]) + wp->muzzleTrace.v[1];
  end->v[1] = v22;
  v23 = (float)(maxRange * wp->forward.v[2]) + wp->muzzleTrace.v[2];
  s = v21;
  end->v[2] = v23;
  if ( (LODWORD(v21) & 0x7F800000) == 2139095040 || (s = v22, (LODWORD(v22) & 0x7F800000) == 2139095040) || (s = v23, (LODWORD(v23) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 176, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  v24 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  if ( v24->current.integer == 3 )
    goto LABEL_58;
  v25 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( v25->current.integer == 4 )
  {
LABEL_58:
    v26 = v12 * wp->right.v[1];
    enda.v[0] = (float)(v12 * wp->right.v[0]) + end->v[0];
    v27 = v12 * wp->right.v[2];
    enda.v[1] = v26 + end->v[1];
    enda.v[2] = v27 + end->v[2];
    G_DebugLineWithDuration(&wp->muzzleTrace, &enda, &colorBlue, 1, 100);
    v28 = COERCE_FLOAT(LODWORD(v12) ^ _xmm) * wp->right.v[1];
    enda.v[0] = (float)(COERCE_FLOAT(LODWORD(v12) ^ _xmm) * wp->right.v[0]) + end->v[0];
    v29 = COERCE_FLOAT(LODWORD(v12) ^ _xmm) * wp->right.v[2];
    enda.v[1] = v28 + end->v[1];
    enda.v[2] = v29 + end->v[2];
    G_DebugLineWithDuration(&wp->muzzleTrace, &enda, &colorBlue, 1, 100);
    v30 = v12 * wp->up.v[1];
    enda.v[0] = (float)(v12 * wp->up.v[0]) + end->v[0];
    v31 = v12 * wp->up.v[2];
    enda.v[1] = v30 + end->v[1];
    enda.v[2] = v31 + end->v[2];
    G_DebugLineWithDuration(&wp->muzzleTrace, &enda, &colorBlue, 1, 100);
    v32 = COERCE_FLOAT(LODWORD(v12) ^ _xmm) * wp->up.v[1];
    enda.v[0] = (float)(COERCE_FLOAT(LODWORD(v12) ^ _xmm) * wp->up.v[0]) + end->v[0];
    v33 = COERCE_FLOAT(LODWORD(v12) ^ _xmm) * wp->up.v[2];
    enda.v[1] = v32 + end->v[1];
    enda.v[2] = v33 + end->v[2];
    G_DebugLineWithDuration(&wp->muzzleTrace, &enda, &colorBlue, 1, 100);
  }
  v34 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  if ( v34->current.integer == 2 )
    goto LABEL_71;
  v35 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  if ( v35->current.integer == 3 )
    goto LABEL_71;
  v36 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  if ( v36->current.integer == 4 )
LABEL_71:
    G_DebugCircleEx(end, v12, &wp->forward, &colorBlue, 1, 100);
  v37 = (float)(v17 * wp->right.v[0]) + end->v[0];
  end->v[0] = v37;
  v38 = (float)(v17 * wp->right.v[1]) + end->v[1];
  end->v[1] = v38;
  v39 = (float)(v17 * wp->right.v[2]) + end->v[2];
  end->v[2] = v39;
  v40 = (float)(v19 * wp->up.v[0]) + v37;
  end->v[0] = v40;
  v41 = (float)(v19 * wp->up.v[1]) + v38;
  s = v40;
  end->v[1] = v41;
  v42 = (float)(v19 * wp->up.v[2]) + v39;
  end->v[2] = v42;
  if ( (LODWORD(v40) & 0x7F800000) == 2139095040 || (s = v41, (LODWORD(v41) & 0x7F800000) == 2139095040) || (s = v42, (LODWORD(v42) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 201, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  v43 = end->v[0] - wp->muzzleTrace.v[0];
  dir->v[0] = v43;
  v45 = LODWORD(end->v[1]);
  v44 = end->v[1] - wp->muzzleTrace.v[1];
  dir->v[1] = v44;
  v46 = end->v[2] - wp->muzzleTrace.v[2];
  *(float *)&v45 = fsqrt((float)((float)(v44 * v44) + (float)(v43 * v43)) + (float)(v46 * v46));
  _XMM4 = v45;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  dir->v[0] = v43 * (float)(1.0 / *(float *)&_XMM0);
  v50 = (float)(1.0 / *(float *)&_XMM0) * v44;
  v51 = v46 * (float)(1.0 / *(float *)&_XMM0);
  dir->v[1] = v50;
  dir->v[2] = v51;
  s = dir->v[0];
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 || (s = (float)(1.0 / *(float *)&_XMM0) * v44, (LODWORD(v50) & 0x7F800000) == 2139095040) || (s = v46 * (float)(1.0 / *(float *)&_XMM0), (LODWORD(v51) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 208, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dir )[0] ) && !IS_NAN( ( dir )[1] ) && !IS_NAN( ( dir )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dir )[0] ) && !IS_NAN( ( dir )[1] ) && !IS_NAN( ( dir )[2] )") )
      __debugbreak();
  }
}

/*
==============
G_Bullet_Fire
==============
*/
int G_Bullet_Fire(gentity_s *attacker, float spread, const BgWeaponParms *wp, const gentity_s *weaponEnt, PlayerHandIndex hand, const int gameTime)
{
  __m256i v6; 
  double v7; 
  GWeaponFireParms params; 

  v6 = *(__m256i *)wp->forward.v;
  memset(&params.136, 0, sizeof(params.136));
  *(__m256i *)params.wp.forward.v = v6;
  *(__m256i *)&params.wp.weapDef = *(__m256i *)&wp->weapDef;
  v7 = *(double *)&wp->weapon.weaponCamo;
  *(__m256i *)&params.wp.up.z = *(__m256i *)&wp->up.z;
  *(__m256i *)&params.wp.weapon.weaponAttachments[10] = *(__m256i *)&wp->weapon.weaponAttachments[10];
  *(double *)&params.wp.weapon.weaponCamo = v7;
  G_Bullet_SetupFireParams(attacker, weaponEnt, gameTime, spread, 0, hand, 0, &params);
  return G_Bullet_FireWithParams(&params, gameTime);
}

/*
==============
G_Bullet_FireExtended
==============
*/
__int64 G_Bullet_FireExtended(unsigned int *randSeed, BulletFireParams *bp, BulletTraceResults *br, const Weapon *weapon, const PlayerHandIndex hand, bool isAlternate, gentity_s *attacker, const bitarray<64> *r_attackerPerks, const float bulletRange, int gameTime, const bool initialSimStep)
{
  PenetrateType PenetrateType; 
  PenetrateType v15; 
  float v16; 
  bool v17; 
  float v18; 
  int v19; 
  int v20; 
  gentity_s *LinkedBeamEntity; 
  int dFlags; 
  unsigned __int16 partGroup; 
  gentity_s *v24; 
  GBullet *BulletSystem; 
  double PenetrateMultiplier; 
  gentity_s *hitEnt; 
  float v28; 
  float travelDistance; 
  __int128 v31; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  gentity_s *v46; 
  GWeaponMap *Instance; 
  gentity_s *v48; 
  int number; 
  gentity_s *v50; 
  int v51; 
  gentity_s *v52; 
  float v53; 
  float v54; 
  float v55; 
  __int64 lastSurfaceType; 
  unsigned __int8 v58; 
  bool v59; 
  int v60; 
  int outImpactFlags; 
  const bitarray<64> *v63; 
  vec3_t resultNormal; 
  vec3_t start; 

  v63 = r_attackerPerks;
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1352, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1353, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1354, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  PenetrateType = BG_GetPenetrateType(weapon, isAlternate);
  v15 = PenetrateType;
  if ( (unsigned int)PenetrateType >= PENETRATE_TYPE_COUNT )
  {
    LODWORD(lastSurfaceType) = PenetrateType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1357, ASSERT_TYPE_ASSERT, "(unsigned)( penetrateType ) < (unsigned)( PENETRATE_TYPE_COUNT )", "penetrateType doesn't index PENETRATE_TYPE_COUNT\n\t%i not in [0, %i)", lastSurfaceType, 6) )
      __debugbreak();
  }
  v16 = bp->start.v[1];
  v17 = v15 == PENETRATE_TYPE_RICOCHET;
  v59 = v15 == PENETRATE_TYPE_RICOCHET;
  start.v[0] = bp->start.v[0];
  v18 = bp->start.v[2];
  v19 = 0;
  v60 = 0;
  v20 = 0;
  v58 = 1;
  start.v[1] = v16;
  start.v[2] = v18;
  while ( G_Bullet_Trace(bp, weapon, isAlternate, attacker, br, 0, v19 > 0, gameTime) )
  {
    if ( !v20 && BG_IsBeamWeapon(weapon, isAlternate) )
    {
      LinkedBeamEntity = G_BeamEntity_GetLinkedBeamEntity(attacker);
      if ( !LinkedBeamEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1344, ASSERT_TYPE_ASSERT, "(beamEnt)", (const char *)&queryFormat, "beamEnt") )
        __debugbreak();
      G_BeamEntity_SetPos(LinkedBeamEntity, &br->hitPos);
      v19 = v60;
    }
    if ( !bp->firstImpactOccurred )
    {
      G_Bullet_FirstImpactNotify(attacker, bp, br, weapon, isAlternate);
      bp->firstImpactOccurred = 1;
    }
    dFlags = 256;
    if ( v19 <= 0 )
      dFlags = 0;
    if ( !G_Bullet_Process(randSeed, bp, br, weapon, hand, isAlternate, attacker, dFlags, gameTime, &outImpactFlags, 1, initialSimStep) )
      goto LABEL_32;
    if ( (br->trace.contents & 0x10) == 0 )
      goto LABEL_33;
    if ( Trace_GetGlassHitId(&br->trace) )
      G_Bullet_DamageGlass(bp, br, weapon, isAlternate, attacker);
    if ( (br->trace.surfaceFlags & 0x100) != 0 )
      goto LABEL_32;
    if ( v17 )
    {
LABEL_33:
      partGroup = br->trace.partGroup;
      if ( partGroup != 19 && (v24 = br->hitEnt) != NULL && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v24->s.lerp.eFlags, ACTIVE, 0x10u) )
      {
        if ( br->ignoreHitEnt )
        {
          BG_AdvanceTrace(bp, &br->trace, &br->hitPos, 0.0);
        }
        else
        {
          if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_bullet_penetration_enabled, "bullet_penetration_enabled") )
            goto LABEL_32;
          if ( !BG_IsRifleBullet(weapon, isAlternate) )
            goto LABEL_32;
          BulletSystem = GBullet::GetBulletSystem();
          if ( !BulletSystem->CheckFireExtendedAdvance(BulletSystem, br, attacker) )
            goto LABEL_32;
          bp->damageMultiplier = 0.5 * bp->damageMultiplier;
          BG_AdvanceTrace(bp, &br->trace, &br->hitPos, 0.0);
        }
      }
      else
      {
        if ( !v59 )
          goto LABEL_32;
        PenetrateMultiplier = BG_GetPenetrateMultiplier(weapon, isAlternate);
        if ( (int)*(float *)&PenetrateMultiplier >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1471, ASSERT_TYPE_ASSERT, "(weaponRicochetMax < 5)", (const char *)&queryFormat, "weaponRicochetMax < BULLET_MAX_RICOCHET") )
          __debugbreak();
        if ( v60 >= (int)*(float *)&PenetrateMultiplier || !BG_WeaponBulletFire_ShouldRicochet(*v63, weapon, isAlternate) )
          goto LABEL_32;
        if ( partGroup == 19 && (hitEnt = br->hitEnt) != NULL )
        {
          G_Weapon_GetShieldTagNormal(hitEnt, &resultNormal);
          if ( (float)((float)((float)(resultNormal.v[1] * bp->dir.v[1]) + (float)(resultNormal.v[0] * bp->dir.v[0])) + (float)(resultNormal.v[2] * bp->dir.v[2])) > 0.0 )
            goto LABEL_32;
        }
        else
        {
          v28 = br->trace.normal.v[1];
          resultNormal.v[0] = br->trace.normal.v[0];
          resultNormal.v[2] = br->trace.normal.v[2];
          resultNormal.v[1] = v28;
        }
        travelDistance = bp->travelDistance;
        v31 = LODWORD(bulletRange);
        *(float *)&v31 = bulletRange - travelDistance;
        _XMM0 = v31;
        __asm { vmaxss  xmm9, xmm0, xmm10 }
        if ( *(float *)&_XMM9 <= 0.0 )
        {
LABEL_32:
          v58 = 0;
          goto LABEL_72;
        }
        v33 = br->hitPos.v[0] - bp->start.v[0];
        v34 = br->hitPos.v[1] - bp->start.v[1];
        v35 = br->hitPos.v[2] - bp->start.v[2];
        G_Debug_BulletDamage(weapon, isAlternate, &start, &br->hitPos, travelDistance - fsqrt((float)((float)(v34 * v34) + (float)(v33 * v33)) + (float)(v35 * v35)), bp->rangeScale, bulletRange);
        v36 = resultNormal.v[2];
        v37 = resultNormal.v[1];
        v38 = br->hitPos.v[0] - (float)(0.13500001 * bp->dir.v[0]);
        bp->start.v[0] = v38;
        v39 = br->hitPos.v[1] - (float)(0.13500001 * bp->dir.v[1]);
        bp->start.v[1] = v39;
        v40 = br->hitPos.v[2] - (float)(0.13500001 * bp->dir.v[2]);
        bp->start.v[2] = v40;
        v41 = v36 * bp->dir.v[2];
        v42 = bp->dir.v[0];
        v43 = v37 * bp->dir.v[1];
        v19 = ++v60;
        start.v[1] = v39;
        start.v[0] = v38;
        v44 = (float)(v41 * -2.0) - (float)((float)(v43 + (float)(v42 * resultNormal.v[0])) * 2.0);
        v45 = (float)(v44 * resultNormal.v[0]) + v42;
        bp->dir.v[0] = v45;
        bp->dir.v[1] = (float)(v37 * v44) + bp->dir.v[1];
        bp->dir.v[2] = (float)(v36 * v44) + bp->dir.v[2];
        bp->end.v[0] = (float)(v45 * *(float *)&_XMM9) + bp->start.v[0];
        bp->end.v[1] = (float)(*(float *)&_XMM9 * bp->dir.v[1]) + bp->start.v[1];
        bp->end.v[2] = (float)(*(float *)&_XMM9 * bp->dir.v[2]) + bp->start.v[2];
        start.v[2] = v40;
        if ( partGroup == 19 )
        {
          v46 = G_Utils_SpawnEventEntity(&bp->start, 45);
          Instance = GWeaponMap::GetInstance();
          BG_SetWeaponForEntity(Instance, &v46->s, weapon);
          v46->s.inAltWeaponMode = isAlternate;
          v46->s.lerp.u.anonymous.data[0] = LODWORD(bp->dir.v[0]);
          v46->s.lerp.u.anonymous.data[1] = LODWORD(bp->dir.v[1]);
          v46->s.lerp.u.anonymous.data[2] = LODWORD(bp->dir.v[2]);
          v46->s.lerp.u.anonymous.data[3] = v60;
          v46->s.lerp.u.anonymous.data[4] = LODWORD(bp->travelDistance);
          v46->s.otherEntityNum = attacker->s.number;
          v48 = br->hitEnt;
          if ( v48 )
            number = v48->s.number;
          else
            number = 2047;
          v46->s.eventParm = number;
          v46->s.eventParm2 = 0;
          v19 = v60;
        }
        BG_RemoveIgnoreEntFromBP(bp, bp->weaponEntIndex);
        v50 = &g_entities[bp->weaponEntIndex];
        if ( v50->s.eType == ET_TURRET )
        {
          v51 = v50->s.lerp.u.anonymous.data[6];
          if ( v51 != 2047 )
            BG_RemoveIgnoreEntFromBP(bp, v51);
        }
        br->hitClientNum = -1;
      }
      v17 = v59;
    }
    else if ( !BG_AdvanceTrace(bp, &br->trace, &br->hitPos, 0.13500001) )
    {
      goto LABEL_32;
    }
    if ( ++v20 >= 12 )
      goto LABEL_72;
  }
  if ( BG_IsBeamWeapon(weapon, isAlternate) )
  {
    v52 = G_BeamEntity_GetLinkedBeamEntity(attacker);
    if ( !v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1344, ASSERT_TYPE_ASSERT, "(beamEnt)", (const char *)&queryFormat, "beamEnt") )
      __debugbreak();
    G_BeamEntity_SetPos(v52, &br->hitPos);
  }
  G_Bullet_HitNothing(randSeed, bp, br, weapon, isAlternate, attacker);
LABEL_72:
  v53 = br->hitPos.v[0] - bp->start.v[0];
  v54 = br->hitPos.v[1] - bp->start.v[1];
  v55 = br->hitPos.v[2] - bp->start.v[2];
  G_Debug_BulletDamage(weapon, isAlternate, &start, &br->hitPos, bp->travelDistance - fsqrt((float)((float)(v54 * v54) + (float)(v53 * v53)) + (float)(v55 * v55)), bp->rangeScale, bulletRange);
  return v58;
}

/*
==============
G_Bullet_FirePenetrate
==============
*/
bool G_Bullet_FirePenetrate(unsigned int *randSeed, BulletFireParams *bp, BulletTraceResults *br, const Weapon *weapon, const PlayerHandIndex hand, bool isAlternate, gentity_s *attacker, int gameTime, const bool initialSimStep)
{
  gentity_s *v9; 
  const dvar_t *v13; 
  PenetrateType PenetrateType; 
  bool v15; 
  const dvar_t *v16; 
  gentity_s *hitEnt; 
  const vec4_t *v18; 
  bool v20; 
  int v21; 
  char v22; 
  float v23; 
  double SurfacePenetrationDepth; 
  vec3_t *p_hitPos; 
  float v26; 
  __int128 v27; 
  float v28; 
  bool v29; 
  float fraction; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  __int128 v36; 
  bool v38; 
  bool v39; 
  float v40; 
  float v41; 
  float v42; 
  bool v43; 
  float v44; 
  float v45; 
  float v46; 
  double v47; 
  bool processFx; 
  __int128 v49; 
  __int128 v50; 
  __int128 v51; 
  __int128 v53; 
  __int128 damageMultiplier_low; 
  float v59; 
  float v60; 
  float v61; 
  double Float_Internal_DebugName; 
  unsigned int *v63; 
  bool IsHitSurfaceTransparent; 
  GCombat *CombatSystem; 
  __int16 v66; 
  bool v67; 
  bool v68; 
  bool v69; 
  bool v70; 
  bool v71; 
  int impactFlags; 
  gentity_s *v74; 
  int integer; 
  int entityIndex; 
  int v77; 
  gentity_s *hitEffectEnt; 
  GBullet *v79; 
  BulletTraceResults trace; 
  vec3_t center; 
  vec3_t v82; 
  BulletFireParams v83; 

  v9 = attacker;
  v74 = attacker;
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1575, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1576, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1577, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  v13 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  integer = v13->current.integer;
  PenetrateType = BG_GetPenetrateType(weapon, isAlternate);
  if ( PenetrateType == PENETRATE_TYPE_RICOCHET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1586, ASSERT_TYPE_ASSERT, "(!( PENETRATE_TYPE_RICOCHET == penetrateType ))", (const char *)&queryFormat, "!PENETRATETYPE_IS_RICOCHET( penetrateType )") )
    __debugbreak();
  v77 = 0;
  v15 = G_Bullet_Trace(bp, weapon, isAlternate, attacker, br, 0, 0, gameTime);
  v16 = DVARINT_g_debugBullets;
  v68 = v15;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.integer == 6 )
  {
    hitEnt = br->hitEnt;
    if ( !hitEnt || (unsigned __int16)(hitEnt->s.number - 2046) <= 1u || (v18 = &colorRed, br->ignoreHitEnt) )
      v18 = &colorBlue;
    G_DebugLineWithDuration(&bp->start, &bp->end, v18, 1, 300);
  }
  G_Bullet_OnFirstContact(attacker, weapon, isAlternate, 0, &br->hitPos);
  if ( !v68 )
  {
    G_Bullet_HitNothing(randSeed, bp, br, weapon, isAlternate, attacker);
    return 1;
  }
  if ( !bp->firstImpactOccurred )
  {
    G_Bullet_FirstImpactNotify(attacker, bp, br, weapon, isAlternate);
    bp->firstImpactOccurred = 1;
  }
  v70 = G_Bullet_Process(randSeed, bp, br, weapon, hand, isAlternate, attacker, 0, gameTime, &impactFlags, 1, initialSimStep);
  if ( v70 )
  {
    if ( integer == 7 )
      G_DebugSphere(&br->hitPos, DEBUG_SPHERE_RADIUS_BASE * 1.1, &colorBlue, 0, DEBUG_DRAW_DURATION_PENETRATION);
    v20 = PenetrateType == PENETRATE_TYPE_MAXIMUM;
    v69 = PenetrateType == PENETRATE_TYPE_MAXIMUM;
    v21 = _xmm;
    v22 = 1;
    entityIndex = Trace_GetEntityHitId(&br->trace);
    while ( 1 )
    {
      v23 = FLOAT_3_4028235e38;
      if ( !v20 )
      {
        SurfacePenetrationDepth = BG_GetSurfacePenetrationDepth(weapon, isAlternate, br->depthSurfaceType);
        v23 = *(float *)&SurfacePenetrationDepth * bp->penetrationMultiplier;
        if ( v23 <= 0.0 )
          return 0;
      }
      p_hitPos = &br->hitPos;
      v26 = br->hitPos.v[0];
      v27 = LODWORD(br->hitPos.v[1]);
      v28 = br->hitPos.v[2];
      if ( Trace_GetGlassHitId(&br->trace) )
        G_Bullet_DamageGlass(bp, br, weapon, isAlternate, v9);
      if ( !BG_AdvanceTrace(bp, &br->trace, &br->hitPos, 0.13500001) )
        return 0;
      if ( !v22 || (v71 = 1, (br->trace.contents & 0x10) == 0) )
        v71 = 0;
      v29 = G_Bullet_Trace(bp, weapon, isAlternate, v9, br, br->depthSurfaceType, 0, gameTime);
      v67 = v29;
      if ( integer == 7 )
      {
        G_DebugLineWithDuration(&bp->start, &bp->end, &colorCyan, 0, DEBUG_DRAW_DURATION_PENETRATION);
        if ( v29 )
        {
          fraction = br->trace.fraction;
          v31 = (float)(bp->end.v[1] - bp->start.v[1]) * br->trace.fraction;
          v32 = bp->end.v[2] - bp->start.v[2];
          center.v[0] = (float)((float)(bp->end.v[0] - bp->start.v[0]) * br->trace.fraction) + bp->start.v[0];
          center.v[1] = v31 + bp->start.v[1];
          center.v[2] = (float)(v32 * fraction) + bp->start.v[2];
          G_DebugSphere(&center, DEBUG_SPHERE_RADIUS_BASE, &colorCyan, 0, DEBUG_DRAW_DURATION_PENETRATION);
          v21 = _xmm;
        }
        v9 = v74;
      }
      if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
        __debugbreak();
      v79 = GBullet::ms_gBulletSystem;
      if ( GBullet::ms_gBulletSystem->CheckFirePenetrateStop(GBullet::ms_gBulletSystem, br, v9, v71) )
        return 0;
      v83 = *bp;
      BG_RemoveIgnoreEntFromBP(&v83, entityIndex);
      v33 = bp->dir.v[0];
      v34 = bp->dir.v[1];
      v35 = bp->dir.v[2];
      LODWORD(v83.dir.v[0]) = LODWORD(v33) ^ v21;
      LODWORD(v83.dir.v[1]) = LODWORD(v34) ^ v21;
      v83.start.v[0] = bp->end.v[0];
      v83.start.v[2] = bp->end.v[2];
      LODWORD(v83.dir.v[2]) = LODWORD(v35) ^ v21;
      v83.start.v[1] = bp->end.v[1];
      v83.end.v[1] = *(float *)&v27 - (float)(v34 * 0.0099999998);
      *(__m256i *)&trace.trace.contents = *(__m256i *)&br->trace.contents;
      v36 = *(_OWORD *)br->hitPos.v;
      v83.end.v[0] = v26 - (float)(v33 * 0.0099999998);
      *(_OWORD *)trace.hitPos.v = v36;
      *(__m256i *)&trace.trace.fraction = *(__m256i *)&br->trace.fraction;
      v83.end.v[2] = v28 - (float)(v35 * 0.0099999998);
      *(__m256i *)&trace.trace.allsolid = *(__m256i *)&br->trace.allsolid;
      __asm { vextractf128 xmm0, ymm2, 1 }
      *(_QWORD *)&trace.depthSurfaceType = *(_QWORD *)&br->depthSurfaceType;
      LODWORD(trace.trace.normal.v[0]) = _XMM0 ^ v21;
      LODWORD(trace.trace.normal.v[2]) ^= v21;
      LODWORD(trace.trace.normal.v[1]) ^= v21;
      if ( v29 )
        BG_AdvanceTrace(&v83, &trace.trace, &trace.hitPos, 0.0099999998);
      else
        BG_AddIgnoreEntToBP(&v83, 2047);
      v38 = G_Bullet_Trace(&v83, weapon, isAlternate, v9, &trace, trace.depthSurfaceType, 0, gameTime);
      if ( integer == 7 )
      {
        G_DebugLineWithDuration(&v83.start, &v83.end, &colorOrange, 0, DEBUG_DRAW_DURATION_PENETRATION);
        if ( !v38 )
          goto LABEL_57;
        v82.v[0] = (float)((float)(v83.end.v[0] - v83.start.v[0]) * trace.trace.fraction) + v83.start.v[0];
        v82.v[1] = (float)((float)(v83.end.v[1] - v83.start.v[1]) * trace.trace.fraction) + v83.start.v[1];
        v82.v[2] = (float)((float)(v83.end.v[2] - v83.start.v[2]) * trace.trace.fraction) + v83.start.v[2];
        G_DebugSphere(&v82, DEBUG_SPHERE_RADIUS_BASE * 1.2, &colorOrange, 0, DEBUG_DRAW_DURATION_PENETRATION);
      }
      if ( v38 && trace.trace.allsolid )
      {
LABEL_59:
        v39 = 1;
        goto LABEL_61;
      }
LABEL_57:
      if ( br->trace.startsolid && trace.trace.startsolid )
        goto LABEL_59;
      v39 = 0;
LABEL_61:
      v40 = trace.hitPos.v[2];
      v41 = trace.hitPos.v[1];
      v42 = trace.hitPos.v[0];
      if ( v38 )
      {
        if ( v39 )
        {
LABEL_70:
          v49 = LODWORD(v83.end.v[1]);
          *(float *)&v49 = (float)((float)((float)(v83.end.v[1] - v83.start.v[1]) * (float)(v83.end.v[1] - v83.start.v[1])) + (float)((float)(v83.end.v[0] - v83.start.v[0]) * (float)(v83.end.v[0] - v83.start.v[0]))) + (float)((float)(v83.end.v[2] - v83.start.v[2]) * (float)(v83.end.v[2] - v83.start.v[2]));
          v50 = v49;
        }
        else
        {
          v51 = v27;
          *(float *)&v51 = (float)((float)((float)(*(float *)&v27 - trace.hitPos.v[1]) * (float)(*(float *)&v27 - trace.hitPos.v[1])) + (float)((float)(v26 - trace.hitPos.v[0]) * (float)(v26 - trace.hitPos.v[0]))) + (float)((float)(v28 - trace.hitPos.v[2]) * (float)(v28 - trace.hitPos.v[2]));
          v50 = v51;
        }
        v53 = v50;
        *(float *)&v53 = fsqrt(*(float *)&v50);
        _XMM0 = v53;
        __asm { vmaxss  xmm10, xmm0, cs:__real@3f800000 }
        if ( v69 )
        {
          *(float *)&_XMM3 = bp->damageMultiplier;
        }
        else
        {
          if ( v38 )
          {
            *(double *)&_XMM0 = BG_GetSurfacePenetrationDepth(weapon, isAlternate, trace.depthSurfaceType);
            __asm { vminss  xmm1, xmm0, xmm9 }
            v23 = *(float *)&_XMM1 * bp->penetrationMultiplier;
            if ( v23 <= 0.0 )
              return 0;
            v40 = trace.hitPos.v[2];
            v41 = trace.hitPos.v[1];
            v42 = trace.hitPos.v[0];
          }
          damageMultiplier_low = LODWORD(bp->damageMultiplier);
          *(float *)&damageMultiplier_low = bp->damageMultiplier - (float)(*(float *)&_XMM10 / v23);
          _XMM2 = damageMultiplier_low;
          __asm { vmaxss  xmm3, xmm2, xmm13 }
          bp->damageMultiplier = *(float *)&_XMM3;
        }
        if ( *(float *)&_XMM3 <= 0.0 )
          return 0;
        if ( v39 )
        {
          v9 = v74;
        }
        else
        {
          if ( ((trace.trace.surfaceFlags >> 19) & 0x3F) != 7 && (v59 = v42 - p_hitPos->v[0], v60 = v41 - br->hitPos.v[1], v61 = v40 - br->hitPos.v[2], Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bullet_penetrationMinFxDist, "bullet_penetrationMinFxDist"), (float)((float)((float)(v60 * v60) + (float)(v59 * v59)) + (float)(v61 * v61)) <= (float)(*(float *)&Float_Internal_DebugName * *(float *)&Float_Internal_DebugName)) || (v39 = 1, v67) && (br->trace.surfaceFlags & 4) != 0 )
          {
            v9 = v74;
            goto LABEL_83;
          }
          IsHitSurfaceTransparent = BG_IsHitSurfaceTransparent(&trace.trace);
          v9 = v74;
          v63 = randSeed;
          G_Bullet_ImpactEffect(randSeed, &v83, &trace, &bp->dir, weapon, isAlternate, v74, impactFlags | (IsHitSurfaceTransparent ? 0x100 : 0) | 4, &hitEffectEnt);
          if ( hitEffectEnt )
          {
            CombatSystem = GCombat::GetCombatSystem();
            if ( !CombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1780, ASSERT_TYPE_ASSERT, "(combatSystem)", (const char *)&queryFormat, "combatSystem") )
              __debugbreak();
            if ( trace.hitEnt )
            {
              v66 = G_GetEntityIndex(trace.hitEnt);
              if ( G_IsEntityInUse(v66) )
              {
                if ( GCombat::QueuedDamageEnabled(CombatSystem) )
                  GBullet::DeferImpactEffectFlags(v79, trace.hitEnt, hitEffectEnt, impactFlags);
              }
            }
LABEL_83:
            v63 = randSeed;
          }
          if ( v67 )
            v70 = G_Bullet_Process(v63, bp, br, weapon, hand, isAlternate, v9, 8, gameTime, &impactFlags, v39, initialSimStep);
        }
        v43 = v67;
        goto LABEL_99;
      }
      if ( v39 )
        goto LABEL_70;
      v43 = v67;
      if ( v67 )
      {
        processFx = 1;
        if ( ((trace.trace.surfaceFlags >> 19) & 0x3F) != 7 )
        {
          v44 = v26 - p_hitPos->v[0];
          v45 = *(float *)&v27 - br->hitPos.v[1];
          v46 = v28 - br->hitPos.v[2];
          v47 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bullet_penetrationMinFxDist, "bullet_penetrationMinFxDist");
          if ( (float)((float)((float)(v45 * v45) + (float)(v44 * v44)) + (float)(v46 * v46)) <= (float)(*(float *)&v47 * *(float *)&v47) )
            processFx = 0;
        }
        v9 = v74;
        v70 = G_Bullet_Process(randSeed, bp, br, weapon, hand, isAlternate, v74, 8, gameTime, &impactFlags, processFx, initialSimStep);
      }
      else
      {
        v9 = v74;
      }
LABEL_99:
      entityIndex = Trace_GetEntityHitId(&br->trace);
      if ( !v70 )
        return 0;
      if ( !v43 )
        return bp->isBallistics;
      v21 = _xmm;
      v22 = v71;
      v20 = v69;
      if ( ++v77 >= 5 )
        return 1;
    }
  }
  return 0;
}

/*
==============
G_Bullet_FireWithParams
==============
*/
__int64 G_Bullet_FireWithParams(const GWeaponFireParms *const params, const int serverTime)
{
  signed __int64 v2; 
  void *v3; 
  const GWeaponFireParms *wp; 
  unsigned __int16 attackerEntity; 
  gentity_s *v7; 
  unsigned __int16 weaponEntity; 
  unsigned __int16 v9; 
  __int64 v10; 
  GBullet *v11; 
  GAntiLag *v12; 
  GItems *v13; 
  const dvar_t *v14; 
  const bitarray<64> *p_attackerPerks; 
  bool v16; 
  char v17; 
  bool ShouldSpread; 
  bool IsBeamWeapon; 
  targetAssistBehavior_t TargetAssistBehavior; 
  int v21; 
  int v22; 
  float maxRange; 
  float attackerSpread; 
  bool v25; 
  double v26; 
  GConeTargetEvaluator *v27; 
  int v28; 
  gentity_s *LinkedBeamEntity; 
  unsigned int v30; 
  bitarray<64> *client; 
  GBallistics *v32; 
  int v33; 
  __int64 v34; 
  bitarray<64> v35; 
  __int64 v36; 
  vec3_t *p_muzzleTrace; 
  const playerState_s *EntityPlayerStateConst; 
  const playerState_s *v39; 
  int v40; 
  unsigned __int16 *p_linkedEnt; 
  int v42; 
  int v43; 
  bool (__fastcall *EvaluateTarget)(GTargetEvaluator *, const GAssistTarget *, const vec3_t *, float, vec3_t *, vec3_t *); 
  ConeTargetHitResults *HitResults; 
  ConeTargetHitResults *v46; 
  scr_string_t tagName; 
  int v48; 
  scrContext_t *v49; 
  const Weapon *v50; 
  char *Value; 
  int *v52; 
  _QWORD *v53; 
  char *v54; 
  __int64 v55; 
  unsigned __int64 v56; 
  ThreadContext CurrentThreadContext; 
  __int64 v58; 
  int v59; 
  unsigned __int64 v60; 
  gentity_s **v61; 
  unsigned __int8 (__fastcall *v62)(GConeTargetEvaluator *, _OWORD *, vec3_t *); 
  ConeTargetHitResults *v63; 
  ConeTargetHitInfo *FirstVisibleHit; 
  GCombat *v65; 
  damageReturnCode_t (__fastcall *Damage)(GCombat *, gentity_s *, const gentity_s *, gentity_s *, const vec3_t *, const vec3_t *, int, int, int, const Weapon *, bool, hitLocation_t, unsigned int, scr_string_t, int, const vec3_t *, const GExtraDamageParams *); 
  int v67; 
  PlayerHandIndex v68; 
  scr_string_t v69; 
  GBullet *v70; 
  unsigned int v71; 
  unsigned int hitClientNum; 
  BOOL fmt; 
  float *outRange; 
  vec3_t *outRangea; 
  __int64 angleMax; 
  BOOL initialSimStep; 
  bool v79; 
  bool v80; 
  bool isAlternate; 
  __int16 v82; 
  bool v83; 
  float outAngle; 
  int v85; 
  bool v86; 
  int gameTime; 
  unsigned int v88; 
  PlayerHandIndex hand; 
  float spreadMaxOut; 
  float v91; 
  GConeTargetEvaluator *v92; 
  gentity_s *beamEnt; 
  float angleMaxOut; 
  float angleMinOut; 
  float spreadMinOut; 
  const gentity_s **v97; 
  unsigned int pHoldrand; 
  __int64 v99; 
  GBallistics *v100; 
  const GWeaponFireParms *v101; 
  gentity_s *v102; 
  gentity_s *v103; 
  GBullet *v104; 
  Weapon *p_weapon; 
  GAntiLag *v106; 
  GItems *v107; 
  BGSpreadSetting v108; 
  __int64 v109; 
  BulletTraceResults br; 
  bitarray<64> perks; 
  vec3_t angles; 
  BulletFireParams fireParams; 
  _OWORD ptr[52]; 
  char v115[16128]; 

  v3 = alloca(v2);
  v109 = -2i64;
  gameTime = serverTime;
  wp = params;
  v101 = params;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2197, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !wp->wp.weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2198, ASSERT_TYPE_ASSERT, "(params->wp.weapDef)", (const char *)&queryFormat, "params->wp.weapDef") )
    __debugbreak();
  p_weapon = &wp->wp.weapon;
  if ( BG_GetWeaponType(&wp->wp.weapon, wp->wp.isAlternate) != WEAPTYPE_BULLET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2199, ASSERT_TYPE_ASSERT, "(BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) == WEAPTYPE_BULLET)", (const char *)&queryFormat, "BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) == WEAPTYPE_BULLET") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Bullet_FireWithParams");
  PhysPerfTrack_BulletServerTimeStart();
  PhysPerfTrack_BulletServerEventCountAdd();
  attackerEntity = wp->bullet.attackerEntity;
  if ( attackerEntity > 0x800u )
  {
    LODWORD(outRange) = attackerEntity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2206, ASSERT_TYPE_ASSERT, "( params->bullet.attackerEntity ) <= ( ( 2048 ) )", "params->bullet.attackerEntity not in [0, MAX_GENTITIES]\n\t%u not in [0, %u]", outRange, 2048) )
      __debugbreak();
  }
  v7 = &g_entities[wp->bullet.attackerEntity];
  v102 = v7;
  weaponEntity = wp->bullet.weaponEntity;
  if ( weaponEntity > 0x800u )
  {
    LODWORD(angleMax) = 2048;
    LODWORD(outRange) = weaponEntity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2209, ASSERT_TYPE_ASSERT, "( params->bullet.weaponEntity ) <= ( ( 2048 ) )", "params->bullet.weaponEntity not in [0, MAX_GENTITIES]\n\t%u not in [0, %u]", outRange, angleMax) )
      __debugbreak();
  }
  v9 = wp->bullet.weaponEntity;
  v10 = 0i64;
  if ( v9 == 2046 )
    v103 = NULL;
  else
    v103 = &g_entities[v9];
  if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
    __debugbreak();
  v11 = GBullet::ms_gBulletSystem;
  v104 = GBullet::ms_gBulletSystem;
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v12 = GAntiLag::ms_gAntiLagData;
  v106 = GAntiLag::ms_gAntiLagData;
  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  v13 = GItems::ms_gItemsSystem;
  v107 = GItems::ms_gItemsSystem;
  v11->m_impaleCount = 0i64;
  ((void (__fastcall *)(GItems *, __int64))v13->BeginDeferItemDrops)(v13, v10);
  v86 = v12->ShouldPerformBulletFireAntiLag(v12, serverTime, v7);
  if ( v86 )
  {
    v14 = DVARINT_bg_debugRewindPositions;
    if ( !DVARINT_bg_debugRewindPositions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugRewindPositions") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v12->m_debugMethod = v14->current.integer;
    p_attackerPerks = &wp->bullet.attackerPerks;
    v16 = BG_WeaponBulletFire_ExplodeOnImpact(wp->bullet.attackerPerks, &wp->wp.weapon, wp->wp.isAlternate);
    LOBYTE(outRange) = 0;
    LOBYTE(fmt) = 1;
    v12->RewindPositions(v12, serverTime, v7, v16, fmt, (bool)outRange, "Bullet");
    v12->m_debugMethod = ANTILAG_DEBUG_METHOD_DISABLED;
  }
  else
  {
    p_attackerPerks = &wp->bullet.attackerPerks;
  }
  v17 = wp->bullet.flags[0];
  ShouldSpread = BG_WeaponBulletFire_ShouldSpread(*p_attackerPerks, &wp->wp.weapon, wp->wp.isAlternate);
  v83 = ShouldSpread;
  IsBeamWeapon = BG_IsBeamWeapon(&wp->wp.weapon, wp->wp.isAlternate);
  v79 = IsBeamWeapon;
  if ( (v17 & 1) != 0 )
  {
    TargetAssistBehavior = BG_GetTargetAssistBehavior(&wp->wp.weapon, wp->wp.isAlternate);
    IsBeamWeapon = v79;
  }
  else
  {
    TargetAssistBehavior = TARGET_ASSISTBEHAVE_DEFAULT;
  }
  v85 = TargetAssistBehavior;
  hand = wp->bullet.attackerHand;
  if ( ShouldSpread || IsBeamWeapon )
  {
    v22 = BG_ShotCount(&wp->wp.weapon, wp->wp.isAlternate);
    v21 = v22;
    v88 = v22;
    if ( v79 && v22 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2272, ASSERT_TYPE_ASSERT, "((!isBeamWeapon || (shotCount <= 7)))", "%s\n\tBeam weapons can support/track at most 7 targets.", "(!isBeamWeapon || (shotCount <= BEAM_ENT_BONE_PAIR_COUNT))") )
      __debugbreak();
    if ( !v104->m_reduceSpreadShotCount )
      goto LABEL_47;
    --v21;
  }
  else
  {
    v21 = 1;
  }
  v88 = v21;
LABEL_47:
  maxRange = wp->bullet.range;
  spreadMinOut = 0.0;
  attackerSpread = wp->bullet.attackerSpread;
  spreadMaxOut = attackerSpread;
  angleMinOut = 0.0;
  angleMaxOut = FLOAT_360_0;
  pHoldrand = wp->bullet.randSeed;
  v25 = v83 && v21 > 1 && attackerSpread > 0.0;
  LOBYTE(v82) = v25;
  memset(&v108, 0, sizeof(v108));
  if ( v25 )
  {
    v26 = BG_random(&pHoldrand);
    BGSpreadSetting::Init(&v108, *(float *)&v26 * 360.0, v21, 0.0, attackerSpread);
  }
  br.hitClientNum = -1;
  `eh vector constructor iterator'(ptr, 0x350ui64, 0x14ui64, (void (__fastcall *)(void *))GAssistTarget::GAssistTarget, (void (__fastcall *)(void *))GAssistTarget::~GAssistTarget);
  if ( (v17 & 1) != 0 )
  {
    v27 = &GBullet::ms_coneTargetEvaluator;
    v28 = 0;
    if ( BG_GetTargetAssistType(&wp->wp.weapon, wp->wp.isAlternate) != TARGET_ASSISTTYPPE_CONE )
      v27 = NULL;
  }
  else
  {
    v28 = 0;
    v27 = NULL;
  }
  v92 = v27;
  beamEnt = NULL;
  if ( v79 )
  {
    LinkedBeamEntity = G_BeamEntity_GetLinkedBeamEntity(v7);
    beamEnt = LinkedBeamEntity;
    if ( !LinkedBeamEntity )
    {
      LinkedBeamEntity = G_BeamEntity_WeaponSpawn(v7, &wp->wp.weapon);
      beamEnt = LinkedBeamEntity;
      if ( !LinkedBeamEntity )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2326, ASSERT_TYPE_ASSERT, "(beamEnt)", (const char *)&queryFormat, "beamEnt") )
          __debugbreak();
        LinkedBeamEntity = beamEnt;
      }
    }
    G_BeamEntity_ClearTargets(LinkedBeamEntity);
  }
  if ( v27 && (v17 & 2) == 0 )
  {
    BG_GetTargetAssistAngleRange(&wp->wp.weapon, wp->wp.isAlternate, spreadMaxOut, maxRange, &outAngle, &v91);
    v30 = v88;
    if ( TargetAssistBehavior == TARGET_ASSISTBEHAVE_DIRECT_DAMAGE )
      v30 = 20;
    v28 = ((__int64 (__fastcall *)(GConeTargetEvaluator *, Weapon *, bool, gentity_s *, vec3_t *, const GWeaponFireParms *, _DWORD, _DWORD, unsigned int, bool, const unsigned int, int, char, _OWORD *))v27->FindTargets)(v27, &wp->wp.weapon, wp->wp.isAlternate, v7, &wp->wp.muzzleTrace, wp, LODWORD(v91), LODWORD(outAngle), v30, v79, HITLOC_MASK_ALL, gameTime, 1, ptr);
  }
  fireParams.weaponEntIndex = wp->bullet.weaponEntity;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 286, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  client = (bitarray<64> *)v7->client;
  if ( client )
    perks = client[558];
  else
    perks = 0i64;
  fireParams.methodOfDeath = BG_WeaponBulletFire_GetMethodOfDeath(perks, &wp->wp.weapon, wp->wp.isAlternate);
  fireParams.rangeScale = wp->bullet.rangeScale;
  fireParams.penetrationMultiplier = wp->bullet.penetrationMultiplier;
  LODWORD(fireParams.chargedDamageMultiplier) = wp->missile.missileParams.trackingTrajectory;
  fireParams.firstImpactOccurred = 0;
  fireParams.shotCount = wp->bullet.shotCount;
  if ( !GBallistics::ms_gBallisticsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 79, ASSERT_TYPE_ASSERT, "( ms_gBallisticsSystem )", (const char *)&queryFormat, "ms_gBallisticsSystem") )
    __debugbreak();
  v32 = GBallistics::ms_gBallisticsSystem;
  v100 = GBallistics::ms_gBallisticsSystem;
  if ( !GBallistics::ms_gBallisticsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2374, ASSERT_TYPE_ASSERT, "( ballisticsSystem )", (const char *)&queryFormat, "ballisticsSystem") )
    __debugbreak();
  v80 = v32->ShouldFireBallisticBullet(v32, &wp->wp.weapon, wp->wp.isAlternate, v7->s.number);
  v33 = 0;
  v34 = (int)v88;
  v99 = (int)v88;
  v35 = (bitarray<64>)v28;
  perks = (bitarray<64>)v28;
  if ( (int)v88 <= 0 )
  {
    v48 = v85;
    goto LABEL_161;
  }
  v36 = 0i64;
  v97 = (const gentity_s **)v115;
  do
  {
    p_muzzleTrace = &wp->wp.muzzleTrace;
    Sys_ProfBeginNamedEvent(0xFF008008, "G_Bullet_FireWithParams-Pellet");
    PhysPerfTrack_BulletServerPelletCountAdd();
    LODWORD(outAngle) = v33 + pHoldrand;
    BG_srand((unsigned int *)&outAngle);
    fireParams.ignoreHitEntCount = 0;
    BG_AddIgnoreEntToBP(&fireParams, fireParams.weaponEntIndex);
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(v7);
    v39 = EntityPlayerStateConst;
    if ( EntityPlayerStateConst && EntityPlayerStateConst->numViewLinkedEnts > 0 )
    {
      v40 = 0;
      p_linkedEnt = &EntityPlayerStateConst->viewLinkedEntityData[0].linkedEnt;
      do
      {
        BG_AddIgnoreEntToBP(&fireParams, *p_linkedEnt);
        ++v40;
        p_linkedEnt += 16;
      }
      while ( v40 < v39->numViewLinkedEnts );
      p_muzzleTrace = &wp->wp.muzzleTrace;
      v35 = perks;
    }
    if ( v103 )
    {
      if ( v103->s.eType == ET_TURRET )
      {
        v42 = v103->s.lerp.u.anonymous.data[6];
        if ( v42 != 2047 )
          BG_AddIgnoreEntToBP(&fireParams, v42);
      }
    }
    fireParams.damageMultiplier = FLOAT_1_0;
    fireParams.start = *p_muzzleTrace;
    fireParams.initialPos = fireParams.start;
    fireParams.dir = wp->wp.forward;
    fireParams.travelDistance = 0.0;
    if ( !G_GameInterface_CalcBulletEndPos(v39, gameTime, &fireParams.start, maxRange, &fireParams.dir, &fireParams.end) )
    {
      v43 = v85;
      if ( v36 < *(_QWORD *)&v35 && ((v85 - 1) & 0xFFFFFFFD) != 0 )
      {
        if ( !v92 )
        {
LABEL_123:
          if ( (_BYTE)v82 )
            BGSpreadSetting::CalculateSpread(&v108, v33, &spreadMinOut, &spreadMaxOut, &angleMinOut, &angleMaxOut);
          G_Bullet_Endpos((unsigned int *)&outAngle, spreadMinOut, spreadMaxOut, &fireParams.end, &fireParams.dir, angleMinOut, angleMaxOut, &wp->wp, maxRange);
          goto LABEL_126;
        }
        EvaluateTarget = v92->EvaluateTarget;
        if ( (unsigned __int64)v33 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        outRangea = &fireParams.dir;
        if ( ((unsigned __int8 (__fastcall *)(GConeTargetEvaluator *, _OWORD *, vec3_t *))EvaluateTarget)(v92, &ptr[53 * v33], &wp->wp.muzzleTrace) )
        {
          if ( v79 )
          {
            if ( (unsigned __int64)v33 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            HitResults = ConeTargetInfo::GetHitResults((ConeTargetInfo *)&ptr[53 * v33]);
            if ( !ConeTargetHitResults::GetFirstVisibleHit(HitResults) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2453, ASSERT_TYPE_ASSERT, "(targetArray[shotIndex].GetHitResults().GetFirstVisibleHit())", (const char *)&queryFormat, "targetArray[shotIndex].GetHitResults().GetFirstVisibleHit()") )
              __debugbreak();
            if ( (unsigned __int64)v33 >= 0x14 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              if ( (unsigned __int64)v33 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
            }
            v46 = ConeTargetInfo::GetHitResults((ConeTargetInfo *)&ptr[53 * v33]);
            tagName = ConeTargetHitResults::GetFirstVisibleHit(v46)->tagName;
            if ( (unsigned __int64)v36 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            G_BeamEntity_AddTargetEnt(beamEnt, *v97, tagName, (const ConeTargetInfo *)&ptr[53 * v33]);
          }
          goto LABEL_126;
        }
        p_muzzleTrace = &wp->wp.muzzleTrace;
        v43 = v85;
      }
      if ( v92 && (unsigned int)(v43 - 1) <= 2 )
      {
        fireParams.end.v[0] = (float)(maxRange * wp->wp.forward.v[0]) + p_muzzleTrace->v[0];
        fireParams.end.v[1] = (float)(maxRange * wp->wp.forward.v[1]) + p_muzzleTrace->v[1];
        fireParams.end.v[2] = (float)(maxRange * wp->wp.forward.v[2]) + p_muzzleTrace->v[2];
        goto LABEL_126;
      }
      goto LABEL_123;
    }
LABEL_126:
    v48 = v85;
    if ( v85 == 3 )
    {
      v35 = perks;
      if ( v33 || *(__int64 *)&perks > 0 )
      {
LABEL_129:
        Sys_ProfEndNamedEvent();
        v34 = v99;
        goto LABEL_161;
      }
LABEL_134:
      vectoangles(&fireParams.dir, &angles);
      v49 = ScriptContext_Server();
      Scr_AddVector(v49, angles.v);
      Scr_AddVector(v49, fireParams.start.v);
      v50 = &wp->wp.weapon;
      GScr_Weapon_AddParam(v49, &wp->wp.weapon, wp->wp.isAlternate);
      GScr_Notify(v7, scr_const.weapon_fired, 3u);
      goto LABEL_136;
    }
    if ( v85 == 2 )
    {
      if ( !v33 )
        goto LABEL_134;
      v35 = perks;
      if ( v36 >= *(_QWORD *)&perks )
        goto LABEL_129;
    }
    if ( !v33 )
      goto LABEL_134;
    v50 = &wp->wp.weapon;
LABEL_136:
    if ( v80 )
    {
      GBallistics::FireBallistics(v100, v50, wp->wp.isAlternate, hand, LODWORD(outAngle), &fireParams, &wp->wp.right, &wp->wp.up, v7->s.number, gameTime);
    }
    else if ( BG_WeaponBulletFire_ShouldPenetrate(wp->bullet.attackerPerks, v50, wp->wp.isAlternate) )
    {
      G_Debug_BulletDamage(v50, wp->wp.isAlternate, &fireParams.start, &fireParams.end, fireParams.travelDistance, fireParams.rangeScale, maxRange);
      G_Bullet_FirePenetrate((unsigned int *)&outAngle, &fireParams, &br, v50, hand, wp->wp.isAlternate, v7, gameTime, 1);
    }
    else
    {
      Value = (char *)Sys_GetValue(0);
      v52 = (int *)(Value + 33336);
      if ( (unsigned int)(*((_DWORD *)Value + 8334) + 1) >= 3 )
      {
        LODWORD(angleMax) = 3;
        LODWORD(outRangea) = *((_DWORD *)Value + 8334) + 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outRangea, angleMax) )
          __debugbreak();
      }
      if ( (unsigned int)++*v52 >= 3 )
      {
        LODWORD(angleMax) = 3;
        LODWORD(outRangea) = *v52;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outRangea, angleMax) )
          __debugbreak();
      }
      v53 = Value + 2088;
      v54 = Value + 40;
      if ( *v53 < (unsigned __int64)v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
        __debugbreak();
      *v53 += 8i64;
      if ( *v53 >= (unsigned __int64)v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
        __debugbreak();
      *(_QWORD *)*v53 = v52;
      if ( *v53 <= (unsigned __int64)v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
        __debugbreak();
      v55 = *v52;
      v56 = __rdtsc();
      v52[v55 + 2] = v56;
      if ( Sys_HasValidCurrentThreadContext() )
        CurrentThreadContext = Sys_GetCurrentThreadContext();
      else
        CurrentThreadContext = THREAD_CONTEXT_COUNT;
      CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 781, NULL, 0);
      G_Bullet_FireExtended((unsigned int *)&outAngle, &fireParams, &br, &wp->wp.weapon, hand, wp->wp.isAlternate, v7, &wp->bullet.attackerPerks, maxRange, gameTime, 1);
      Profile_EndInternal(NULL);
    }
    Sys_ProfEndNamedEvent();
    ++v33;
    ++v36;
    v97 += 106;
    v34 = v99;
    v35 = perks;
  }
  while ( v36 < v99 );
  v48 = v85;
LABEL_161:
  v58 = (__int64)v92;
  if ( v92 )
  {
    if ( ((v48 - 1) & 0xFFFFFFFD) == 0 )
    {
      v59 = 0;
      outAngle = 0.0;
      if ( *(__int64 *)&v35 > 0 )
      {
        v60 = 0i64;
        v61 = (gentity_s **)v115;
        do
        {
          if ( v85 == 3 && (__int64)v60 >= v34 )
            break;
          if ( v60 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          br.hitEnt = *v61;
          br.trace.hitType = TRACE_HITTYPE_ENTITY;
          v62 = *(unsigned __int8 (__fastcall **)(GConeTargetEvaluator *, _OWORD *, vec3_t *))(*(_QWORD *)v58 + 8i64);
          if ( (unsigned __int64)v59 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v62(v92, &ptr[53 * v59], &wp->wp.muzzleTrace) )
          {
            if ( (unsigned __int64)v59 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            *(_QWORD *)angles.v = &ptr[53 * v59];
            v63 = ConeTargetInfo::GetHitResults(*(ConeTargetInfo **)angles.v);
            FirstVisibleHit = ConeTargetHitResults::GetFirstVisibleHit(v63);
            if ( !FirstVisibleHit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2578, ASSERT_TYPE_ASSERT, "(hitInfo)", (const char *)&queryFormat, "hitInfo") )
              __debugbreak();
            br.hitPos = FirstVisibleHit->tagWorldPos;
            fireParams.travelDistance = fsqrt((float)((float)((float)(br.hitPos.v[1] - wp->wp.muzzleTrace.v[1]) * (float)(br.hitPos.v[1] - wp->wp.muzzleTrace.v[1])) + (float)((float)(br.hitPos.v[0] - wp->wp.muzzleTrace.v[0]) * (float)(br.hitPos.v[0] - wp->wp.muzzleTrace.v[0]))) + (float)((float)(br.hitPos.v[2] - wp->wp.muzzleTrace.v[2]) * (float)(br.hitPos.v[2] - wp->wp.muzzleTrace.v[2])));
            LODWORD(v97) = G_Bullet_GetDamage(&fireParams, &br, &wp->wp.weapon, wp->wp.isAlternate, v7);
            if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
              __debugbreak();
            v65 = GCombat::ms_gCombatSystem;
            Damage = GCombat::ms_gCombatSystem->Damage;
            v82 = 1;
            v67 = level.time - gameTime;
            v68 = FirstVisibleHit->tagName;
            hand = v68;
            v91 = *(float *)&FirstVisibleHit->modelIndex;
            LODWORD(v100) = FirstVisibleHit->hitLocation;
            isAlternate = v101->wp.isAlternate;
            if ( v60 >= 0x14 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              v68 = hand;
            }
            LOBYTE(initialSimStep) = isAlternate;
            Damage(v65, *v61, v102, v102, &fireParams.dir, &FirstVisibleHit->tagWorldPos, (int)v97, 0, fireParams.methodOfDeath, p_weapon, initialSimStep, (hitLocation_t)v100, LODWORD(v91), (scr_string_t)v68, v67, NULL, (const GExtraDamageParams *)&v82);
            if ( v79 )
            {
              if ( (unsigned __int64)v59 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              v69 = FirstVisibleHit->tagName;
              if ( v60 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              G_BeamEntity_AddTargetEnt(beamEnt, *v61, v69, *(const ConeTargetInfo **)angles.v);
            }
            v7 = v102;
            wp = v101;
          }
          v59 = ++LODWORD(outAngle);
          ++v60;
          v61 += 106;
          v58 = (__int64)v92;
          v34 = v99;
        }
        while ( (signed __int64)v60 < *(_QWORD *)&perks );
      }
    }
  }
  v70 = v104;
  v71 = v88;
  if ( v83 )
  {
    fireParams.travelDistance = fsqrt((float)((float)((float)(br.hitPos.v[1] - wp->wp.muzzleTrace.v[1]) * (float)(br.hitPos.v[1] - wp->wp.muzzleTrace.v[1])) + (float)((float)(br.hitPos.v[0] - wp->wp.muzzleTrace.v[0]) * (float)(br.hitPos.v[0] - wp->wp.muzzleTrace.v[0]))) + (float)((float)(br.hitPos.v[2] - wp->wp.muzzleTrace.v[2]) * (float)(br.hitPos.v[2] - wp->wp.muzzleTrace.v[2])));
    ((void (__fastcall *)(GBullet *, gentity_s *, _QWORD))v104->SpreadFireTargets)(v104, v7, v88);
  }
  if ( v86 )
    v106->RestorePositions(v106, v7, "Bullet");
  GBullet::HandleImpaledEntities(v70);
  v107->FinishDeferItemDrops(v107);
  PhysPerfTrack_BulletServerTimeStop();
  if ( br.hitClientNum != -1 && v71 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2629, ASSERT_TYPE_ASSERT, "(br.hitClientNum == -1 || shotCount == 1)", (const char *)&queryFormat, "br.hitClientNum == CLIENTNUM_NONE || shotCount == 1") )
    __debugbreak();
  hitClientNum = br.hitClientNum;
  `eh vector destructor iterator'(ptr, 0x350ui64, 0x14ui64, (void (__fastcall *)(void *))GAssistTarget::~GAssistTarget);
  Sys_ProfEndNamedEvent();
  return hitClientNum;
}

/*
==============
G_Bullet_FirstImpactNotify
==============
*/
void G_Bullet_FirstImpactNotify(const gentity_s *attacker, const BulletFireParams *bp, const BulletTraceResults *br, const Weapon *weapon, const bool isAlternate)
{
  scrContext_t *v9; 
  hitLocation_t partGroup; 
  scrContext_t *v11; 
  scr_string_t HitLocationString; 
  float v13; 
  float v14; 
  __int128 v15; 
  float v16; 
  const char *v20; 
  scr_string_t partName; 
  const char *v22; 
  unsigned __int16 EntityHitId; 
  float value[4]; 

  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1821, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1822, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1823, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  v9 = ScriptContext_Server();
  partGroup = br->trace.partGroup;
  v11 = v9;
  if ( (unsigned int)partGroup >= HITLOC_NUM )
    HitLocationString = 0;
  else
    HitLocationString = G_Combat_GetHitLocationString(partGroup);
  Scr_AddConstString(v11, HitLocationString);
  Scr_AddVector(v11, br->hitPos.v);
  v13 = bp->end.v[0] - bp->start.v[0];
  v15 = LODWORD(bp->end.v[1]);
  v14 = bp->end.v[1] - bp->start.v[1];
  v16 = bp->end.v[2] - bp->start.v[2];
  *(float *)&v15 = fsqrt((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v16 * v16));
  _XMM4 = v15;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  value[0] = v13 * (float)(1.0 / *(float *)&_XMM0);
  value[2] = v16 * (float)(1.0 / *(float *)&_XMM0);
  value[1] = v14 * (float)(1.0 / *(float *)&_XMM0);
  Scr_AddVector(v11, value);
  GScr_Weapon_AddParam(v11, weapon, isAlternate);
  if ( ((br->trace.surfaceFlags >> 19) & 0x3F) != 0 )
  {
    v20 = Com_SurfaceTypeToName((br->trace.surfaceFlags >> 19) & 0x3F);
    Scr_AddString(v11, v20);
  }
  else
  {
    Scr_AddUndefined(v11);
  }
  Scr_AddVector(v11, br->trace.normal.v);
  partName = br->trace.partName;
  if ( partName )
  {
    v22 = SL_ConvertToString(partName);
    Scr_AddString(v11, v22);
  }
  else
  {
    Scr_AddUndefined(v11);
  }
  EntityHitId = Trace_GetEntityHitId(&br->trace);
  if ( (unsigned __int16)(EntityHitId - 2046) <= 1u )
    Scr_AddUndefined(v11);
  else
    GScr_AddEntity(&g_entities[EntityHitId]);
  GScr_Notify(attacker, scr_const.bullet_first_impact, 8u);
}

/*
==============
G_Bullet_GetDamage
==============
*/
__int64 G_Bullet_GetDamage(const BulletFireParams *bp, const BulletTraceResults *br, const Weapon *weapon, bool isAlternate, const gentity_s *attacker)
{
  bool IsActor; 
  unsigned __int16 number; 
  WeaponDamageCalcType v10; 
  gentity_s *v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned __int16 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int16 otherEntityNum; 
  char v20; 
  gentity_s *hitEnt; 
  char v22; 
  char v23; 
  char v24; 
  char v25; 
  bool v26; 
  const Weapon *v27; 
  __int64 v29; 
  __int64 v30; 
  gclient_s *client; 
  bool attackera; 

  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 333, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 334, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( br->trace.hitType == TRACE_HITTYPE_BEGIN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 335, ASSERT_TYPE_ASSERT, "( br->trace.hitType != TRACE_HITTYPE_NONE )", (const char *)&queryFormat, "br->trace.hitType != TRACE_HITTYPE_NONE") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 336, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  client = attacker->client;
  IsActor = G_Utils_IsActor(attacker);
  number = attacker->r.ownerNum.number;
  v10 = WEAP_DMG_CALC_TYPE_DEFAULT;
  attackera = IsActor;
  v11 = NULL;
  if ( !number )
    goto LABEL_90;
  v12 = number;
  v13 = number - 1;
  if ( v13 >= 0x800 )
  {
    LODWORD(v29) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v29, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v14 = v12 - 1;
  if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v14] )
  {
    LODWORD(v30) = attacker->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v30) )
      __debugbreak();
  }
  v15 = attacker->r.ownerNum.number;
  if ( !v15 )
    goto LABEL_90;
  if ( (unsigned int)v15 - 1 >= 0x7FF )
  {
    LODWORD(v30) = 2047;
    LODWORD(v29) = v15 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v29, v30) )
      __debugbreak();
  }
  v16 = attacker->r.ownerNum.number;
  if ( (unsigned int)(v16 - 1) >= 0x800 )
  {
    LODWORD(v30) = 2048;
    LODWORD(v29) = v16 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v29, v30) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v17 = v16 - 1;
  if ( g_entities[v17].r.isInUse != g_entityIsInUse[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v17] )
  {
    LODWORD(v30) = attacker->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v30) )
      __debugbreak();
  }
  v18 = attacker->r.ownerNum.number;
  v11 = &g_entities[v18 - 1];
  if ( &g_entities[v18] == (gentity_s *)1456 )
  {
LABEL_90:
    otherEntityNum = attacker->s.otherEntityNum;
    if ( otherEntityNum == 2047 )
      goto LABEL_48;
    if ( !G_IsEntityInUse(otherEntityNum) )
      goto LABEL_48;
    v11 = &g_entities[attacker->s.otherEntityNum];
    if ( !v11 )
      goto LABEL_48;
  }
  if ( v11->client )
    v20 = 1;
  else
LABEL_48:
    v20 = 0;
  hitEnt = br->hitEnt;
  if ( G_Utils_IsActor(attacker) || Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && attacker->agent && SV_Agent_IsScripted(attacker->s.number) )
  {
    v22 = 1;
LABEL_58:
    v23 = 0;
    goto LABEL_59;
  }
  v22 = 0;
  if ( !attacker->client && (!v11 || !v11->client) )
    goto LABEL_58;
  v23 = 1;
LABEL_59:
  if ( hitEnt && hitEnt->client )
  {
    v24 = 1;
  }
  else
  {
    v24 = 0;
    if ( hitEnt && (G_Utils_IsActor(hitEnt) || Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && hitEnt->agent && SV_Agent_IsScripted(hitEnt->s.number)) )
    {
      v25 = 1;
      goto LABEL_63;
    }
  }
  v25 = 0;
LABEL_63:
  if ( v23 && v25 )
  {
    v10 = WEAP_DMG_CALC_TYPE_PLAYER_TO_AI;
  }
  else if ( v22 && v24 )
  {
    v10 = WEAP_DMG_CALC_TYPE_AI_TO_PLAYER;
  }
  if ( !client && (!v20 || attackera) )
  {
    v27 = weapon;
    v26 = isAlternate;
    return G_Bullet_CalculateLinearDamage(v10, bp, br, v27, v26);
  }
  v26 = isAlternate;
  v27 = weapon;
  if ( !BG_UsesShelvedDamageFalloff(v10, weapon, isAlternate) )
    return G_Bullet_CalculateLinearDamage(v10, bp, br, v27, v26);
  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 268, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( br->trace.hitType == TRACE_HITTYPE_BEGIN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 270, ASSERT_TYPE_ASSERT, "( br->trace.hitType != TRACE_HITTYPE_NONE )", (const char *)&queryFormat, "br->trace.hitType != TRACE_HITTYPE_NONE") )
    __debugbreak();
  return (unsigned int)(int)(float)((float)BG_GetShelvedDamageForRange(v10, weapon, isAlternate, bp->rangeScale, bp->travelDistance) * bp->damageMultiplier);
}

/*
==============
G_Bullet_GetInflictor
==============
*/
gentity_s *G_Bullet_GetInflictor(gentity_s *const attacker)
{
  const playerState_s *EntityPlayerStateConst; 
  const playerState_s *v3; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  __int16 viewlocked_entNum; 
  unsigned int entity; 
  __int64 v8; 
  int v9; 
  int v10; 

  EntityPlayerStateConst = G_GetEntityPlayerStateConst(attacker);
  v3 = EntityPlayerStateConst;
  if ( !EntityPlayerStateConst )
    return attacker;
  p_eFlags = &EntityPlayerStateConst->eFlags;
  if ( EntityPlayerStateConst == (const playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 5u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 6u) )
    goto LABEL_11;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
LABEL_11:
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1082, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    viewlocked_entNum = v3->viewlocked_entNum;
    if ( (unsigned __int16)viewlocked_entNum >= 0x7FEu )
    {
      v9 = 2046;
      LODWORD(v8) = viewlocked_entNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1083, ASSERT_TYPE_ASSERT, "(unsigned)( ps->viewlocked_entNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "ps->viewlocked_entNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    return &g_entities[v3->viewlocked_entNum];
  }
  entity = v3->vehicleState.entity;
  if ( entity == 2047 )
    return attacker;
  if ( entity >= 0x7FE )
  {
    v10 = 2046;
    LODWORD(v8) = v3->vehicleState.entity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1088, ASSERT_TYPE_ASSERT, "(unsigned)( ps->vehicleState.entity ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "ps->vehicleState.entity doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  return &g_entities[v3->vehicleState.entity];
}

/*
==============
G_Bullet_GetMethodOfDeath
==============
*/
meansOfDeath_t G_Bullet_GetMethodOfDeath(const gentity_s *attacker, const BgWeaponParms *wp)
{
  gclient_s *client; 

  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 286, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 287, ASSERT_TYPE_ASSERT, "( wp )", (const char *)&queryFormat, "wp") )
    __debugbreak();
  client = attacker->client;
  if ( client )
    return BG_WeaponBulletFire_GetMethodOfDeath(client->ps.perks, &wp->weapon, wp->isAlternate);
  else
    return BG_WeaponBulletFire_GetMethodOfDeath(0i64, &wp->weapon, wp->isAlternate);
}

/*
==============
G_Bullet_HitNothing
==============
*/
void G_Bullet_HitNothing(unsigned int *randSeed, BulletFireParams *bp, BulletTraceResults *br, const Weapon *weapon, bool isAlternate, gentity_s *attacker)
{
  gentity_s *v10; 
  bool v11; 
  gentity_s *outHitEffectEnt; 

  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1065, ASSERT_TYPE_ASSERT, "(bp)", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1066, ASSERT_TYPE_ASSERT, "(br)", (const char *)&queryFormat, "br") )
    __debugbreak();
  v10 = attacker;
  v11 = isAlternate;
  G_Bullet_ImpactEffect(randSeed, bp, br, &br->trace.normal, weapon, isAlternate, attacker, 0, &outHitEffectEnt);
  if ( v10->sentient )
    G_Bullet_NotifyActor(bp->damageMultiplier, v10, &bp->start, &br->hitPos, weapon, v11);
}

/*
==============
G_Bullet_ImpactEffect
==============
*/
void G_Bullet_ImpactEffect(unsigned int *randSeed, const BulletFireParams *bp, const BulletTraceResults *br, const vec3_t *normal, const Weapon *weapon, bool isAlternate, gentity_s *attacker, int impactEffectFlags, gentity_s **outHitEffectEnt)
{
  GBullet *v13; 
  bool v14; 
  int surfaceFlags; 

  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 871, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 872, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 873, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !outHitEffectEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 874, ASSERT_TYPE_ASSERT, "( outHitEffectEnt )", (const char *)&queryFormat, "outHitEffectEnt") )
    __debugbreak();
  if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
    __debugbreak();
  v13 = GBullet::ms_gBulletSystem;
  v14 = GBullet::ms_gBulletSystem->UseFriendlyFire(GBullet::ms_gBulletSystem);
  GBullet::NotifyWhizbys(v13, bp, br, attacker, v14);
  if ( br->ignoreHitEnt || !v13->ImpactEffectCreate(v13, randSeed, bp, br, normal, weapon, isAlternate, attacker, impactEffectFlags, outHitEffectEnt) )
  {
    *outHitEffectEnt = NULL;
    return;
  }
  if ( !*outHitEffectEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 892, ASSERT_TYPE_ASSERT, "( (*outHitEffectEnt) != 0 )", (const char *)&queryFormat, "(*outHitEffectEnt) != NULL") )
    __debugbreak();
  surfaceFlags = br->trace.surfaceFlags;
  if ( (surfaceFlags & 4) != 0 || br->trace.fraction >= 1.0 )
  {
    v13->ImpactEffectSetAdditionalFlags(v13, *outHitEffectEnt, 16);
    goto LABEL_27;
  }
  if ( (surfaceFlags & 0x10) != 0 )
LABEL_27:
    v13->ImpactEffectSetAdditionalFlags(v13, *outHitEffectEnt, 8);
}

/*
==============
G_Bullet_ImpactExplosion
==============
*/
void G_Bullet_ImpactExplosion(BulletFireParams *bp, BulletTraceResults *br, const Weapon *weapon, bool isAlternate, gentity_s *inflictor, gentity_s *attacker)
{
  gentity_s *hitEnt; 
  double ExplDmg; 
  float v12; 
  double ExplDmgMin; 
  float v14; 
  double ExplRadius; 
  gentity_s *v16; 
  float v17; 
  gentity_s *v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  Vehicle *vehicle; 
  vec3_t origin; 
  vec3_t v27; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 

  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 558, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( bp->methodOfDeath != MOD_EXPLOSIVE_BULLET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 559, ASSERT_TYPE_ASSERT, "( bp->methodOfDeath == MOD_EXPLOSIVE_BULLET )", (const char *)&queryFormat, "bp->methodOfDeath == MOD_EXPLOSIVE_BULLET") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 560, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 561, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  hitEnt = br->hitEnt;
  if ( hitEnt && G_Utils_IsClientOrAgent(hitEnt) )
  {
    br->hitClientNum = br->hitEnt->s.clientNum;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( br->hitClientNum >= (int)ComCharacterLimits::ms_gameData.m_characterCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 567, ASSERT_TYPE_ASSERT, "(br->hitClientNum < ComCharacterLimits::GetCharacterMaxCount())", (const char *)&queryFormat, "br->hitClientNum < ComCharacterLimits::GetCharacterMaxCount()") )
      __debugbreak();
  }
  if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
    __debugbreak();
  GBullet::ms_gBulletSystem->CheckExplosiveBulletType(GBullet::ms_gBulletSystem, attacker);
  v27 = vec3_origin;
  ExplDmg = BG_WeaponBulletFire_GetExplDmg(weapon, isAlternate);
  v12 = *(float *)&ExplDmg;
  ExplDmgMin = BG_WeaponBulletFire_GetExplDmgMin(weapon, isAlternate);
  v14 = *(float *)&ExplDmgMin;
  ExplRadius = BG_WeaponBulletFire_GetExplRadius(weapon, isAlternate);
  v16 = br->hitEnt;
  v17 = *(float *)&ExplRadius;
  if ( v16 && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v16->s.lerp.eFlags, ACTIVE, 0x10u) )
    v18 = br->hitEnt;
  else
    v18 = NULL;
  v19 = bp->dir.v[1];
  v20 = bp->dir.v[0];
  v21 = bp->dir.v[2];
  v22 = (float)((float)(v19 * br->trace.normal.v[1]) + (float)(v20 * br->trace.normal.v[0])) + (float)(v21 * br->trace.normal.v[2]);
  if ( v22 <= -0.125 )
    v23 = 0.25 / v22;
  else
    v23 = FLOAT_N2_0;
  origin.v[0] = (float)(v20 * v23) + br->hitPos.v[0];
  v24 = (float)(v19 * v23) + br->hitPos.v[1];
  origin.v[2] = (float)(v21 * v23) + br->hitPos.v[2];
  origin.v[1] = v24;
  BG_BuildExplosionDamageRangeInfo_Interpolated(v12, v14, v17, &outDamageRangeInfo);
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  ((void (__fastcall *)(GCombat *, vec3_t *, gentity_s *, gentity_s *, BgExplosionDamageRangeInfo *, _DWORD, vec3_t *, gentity_s *, meansOfDeath_t, const Weapon *, bool, _BYTE, char))GCombat::ms_gCombatSystem->RadiusDamage)(GCombat::ms_gCombatSystem, &origin, inflictor, attacker, &outDamageRangeInfo, LODWORD(FLOAT_N1_0), &v27, v18, bp->methodOfDeath, weapon, isAlternate, 0, 1);
  if ( v18 )
  {
    vehicle = v18->vehicle;
    if ( vehicle )
      G_Vehicle_Knockback(vehicle, &bp->dir, MOD_EXPLOSIVE_BULLET, 1.0, &origin);
  }
}

/*
==============
G_Bullet_NotifyActor
==============
*/
void G_Bullet_NotifyActor(float damageMultiplier, gentity_s *attacker, const vec3_t *start, const vec3_t *end, const Weapon *weapon, bool isAlternate)
{
  unsigned int v9; 
  __int64 v10; 

  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 439, ASSERT_TYPE_ASSERT, "(attacker)", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !attacker->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 440, ASSERT_TYPE_ASSERT, "(attacker->sentient)", (const char *)&queryFormat, "attacker->sentient") )
    __debugbreak();
  if ( s_bulletDeferNotifyActors )
  {
    v9 = s_bulletNumDeferredNotifies;
    if ( s_bulletNumDeferredNotifies < 0x40 )
      goto LABEL_13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 449, ASSERT_TYPE_ASSERT, "(s_bulletNumDeferredNotifies < MAX_DEFERRED_BULLET_NOTIFIES)", (const char *)&queryFormat, "s_bulletNumDeferredNotifies < MAX_DEFERRED_BULLET_NOTIFIES") )
      __debugbreak();
    v9 = s_bulletNumDeferredNotifies;
    if ( s_bulletNumDeferredNotifies < 0x40 )
    {
LABEL_13:
      s_bulletNumDeferredNotifies = v9 + 1;
      v10 = v9;
      s_bulletDeferredNotifies[v10].damageMultiplier = damageMultiplier;
      s_bulletDeferredNotifies[v10].attacker = attacker;
      s_bulletDeferredNotifies[v10].start.v[0] = start->v[0];
      s_bulletDeferredNotifies[v10].start.v[1] = start->v[1];
      s_bulletDeferredNotifies[v10].start.v[2] = start->v[2];
      s_bulletDeferredNotifies[v10].end.v[0] = end->v[0];
      s_bulletDeferredNotifies[v10].end.v[1] = end->v[1];
      s_bulletDeferredNotifies[v10].end.v[2] = end->v[2];
      s_bulletDeferredNotifies[v10].weapon = *weapon;
      s_bulletDeferredNotifies[v10].isAlternate = isAlternate;
    }
  }
  else
  {
    G_Bullet_ProcessNotifyActor(damageMultiplier, attacker, start, end, weapon, isAlternate);
  }
}

/*
==============
G_Bullet_OnFirstContact
==============
*/
void G_Bullet_OnFirstContact(gentity_s *attacker, const Weapon *r_weapon, const bool isAlternate, const bool hitSomething, const vec3_t *hitPos)
{
  gentity_s *LinkedBeamEntity; 

  if ( BG_IsBeamWeapon(r_weapon, isAlternate) )
  {
    LinkedBeamEntity = G_BeamEntity_GetLinkedBeamEntity(attacker);
    if ( !LinkedBeamEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1344, ASSERT_TYPE_ASSERT, "(beamEnt)", (const char *)&queryFormat, "beamEnt") )
      __debugbreak();
    G_BeamEntity_SetPos(LinkedBeamEntity, hitPos);
  }
}

/*
==============
G_Bullet_Process
==============
*/
char G_Bullet_Process(unsigned int *randSeed, BulletFireParams *bp, BulletTraceResults *br, const Weapon *weapon, const PlayerHandIndex hand, bool isAlternate, gentity_s *attacker, int dFlags, int gameTime, int *outImpactFlags, bool processFx, const bool initialSimStep)
{
  GBullet *v15; 
  int v16; 
  int Damage; 
  int v18; 
  int v19; 
  const HyperBurstInfo *HyperBurstInfo; 
  bool v21; 
  gentity_s *hitEnt; 
  PhysicsObject *Base; 
  unsigned int v24; 
  float v25; 
  float v26; 
  Weapon *v27; 
  gentity_s *v28; 
  char v29; 
  int *ignoreHitEntityQueue; 
  gentity_s *v31; 
  entityType_s eType; 
  int v33; 
  __int16 EntityIndex; 
  hitLocation_t partGroup; 
  float v36; 
  GCombat *CombatSystem; 
  scr_string_t partName; 
  meansOfDeath_t methodOfDeath; 
  unsigned int modelIndex; 
  damageReturnCode_t (__fastcall *v41)(GCombat *, gentity_s *, const gentity_s *, gentity_s *, const vec3_t *, const vec3_t *, int, int, int, const Weapon *, bool, hitLocation_t, unsigned int, scr_string_t, int, const vec3_t *, const GExtraDamageParams *); 
  gentity_s *v42; 
  damageReturnCode_t v43; 
  __int16 v44; 
  bool v45; 
  char result; 
  unsigned int hitId; 
  ScriptableInstanceContext *InstanceCommonContext; 
  BOOL isMelee; 
  int v50; 
  char v51; 
  bool v52; 
  int iDamage; 
  Weapon *r_weapon; 
  unsigned int *randSeeda; 
  GBullet *v56; 
  gentity_s *inflictor; 
  gentity_s *hitEffectEnt; 
  gentity_s *v59; 

  r_weapon = (Weapon *)weapon;
  v52 = isAlternate;
  v59 = attacker;
  randSeeda = randSeed;
  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1151, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1152, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( br->trace.hitType == TRACE_HITTYPE_BEGIN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1153, ASSERT_TYPE_ASSERT, "( br->trace.hitType != TRACE_HITTYPE_NONE )", (const char *)&queryFormat, "br->trace.hitType != TRACE_HITTYPE_NONE") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1154, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
    __debugbreak();
  v15 = GBullet::ms_gBulletSystem;
  v16 = 0;
  *outImpactFlags = 0;
  v56 = v15;
  v51 = 1;
  if ( attacker->sentient )
    G_Bullet_NotifyActor(bp->damageMultiplier, attacker, &bp->start, &br->hitPos, weapon, isAlternate);
  inflictor = G_Bullet_GetInflictor(attacker);
  Damage = G_Bullet_GetDamage(bp, br, weapon, isAlternate, attacker);
  v18 = dFlags | 0x800;
  iDamage = Damage;
  if ( hand != WEAPON_HAND_LEFT )
    v18 = dFlags;
  v19 = v18;
  if ( bp->shotCount == 2 )
  {
    HyperBurstInfo = BG_GetHyperBurstInfo(r_weapon, v52);
    if ( !HyperBurstInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1184, ASSERT_TYPE_ASSERT, "(hyperBurstInfo)", (const char *)&queryFormat, "hyperBurstInfo") )
      __debugbreak();
    v21 = !HyperBurstInfo->enabled;
    v15 = v56;
    if ( !v21 )
      v19 = v18 | 0x2000;
  }
  hitEnt = br->hitEnt;
  if ( hitEnt && (unsigned __int16)(hitEnt->s.number - 2046) > 1u )
  {
    Base = G_PhysicsObject_GetBase(hitEnt->s.number, LOCAL_CLIENT_INVALID);
    if ( !Base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1195, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    v24 = Base->physicsInstances[0];
    if ( v24 != -1 )
      Physics_ApplyBulletForceInstance(PHYSICS_WORLD_ID_FIRST, v24, &br->hitPos, &bp->dir, inflictor->s.number, 0);
  }
  v25 = br->hitPos.v[0] - bp->start.v[0];
  v26 = br->hitPos.v[2] - bp->start.v[2];
  G_Trigger_DamageCheckHit(PHYSICS_WORLD_ID_SERVER_DETAIL, attacker, COERCE_FLOAT(COERCE_UNSIGNED_INT(fsqrt((float)((float)((float)(br->hitPos.v[1] - bp->start.v[1]) * (float)(br->hitPos.v[1] - bp->start.v[1])) + (float)(v25 * v25)) + (float)(v26 * v26)) - bp->travelDistance) & _xmm) <= 0.001, &bp->start, &br->hitPos, iDamage, bp->methodOfDeath);
  v27 = r_weapon;
  hitEffectEnt = NULL;
  if ( processFx )
    G_Bullet_ImpactEffect(randSeeda, bp, br, &br->trace.normal, r_weapon, v52, attacker, 0, &hitEffectEnt);
  if ( bp->methodOfDeath == MOD_EXPLOSIVE_BULLET && (br->trace.contents & 0x10) == 0 )
  {
    G_Bullet_ImpactExplosion(bp, br, r_weapon, v52, inflictor, attacker);
    v51 = 0;
  }
  if ( BG_IsHitSurfaceTransparent(&br->trace) )
  {
    v28 = hitEffectEnt;
    *outImpactFlags |= 0x100u;
    if ( v28 )
      ((void (__fastcall *)(GBullet *))v15->ImpactEffectSetAdditionalFlags)(v15);
  }
  if ( br->ignoreHitEnt )
    return v51;
  if ( !br->hitEnt )
  {
    if ( br->trace.hitType == TRACE_HITTYPE_SCRIPTABLE )
    {
      hitId = br->trace.hitId;
      if ( !ScriptableSv_GetInstanceInUse(hitId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1315, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetInstanceInUse( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_GetInstanceInUse( scriptableIndex )") )
        __debugbreak();
      if ( !ScriptableSv_IsServerInstance(hitId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1316, ASSERT_TYPE_ASSERT, "( ScriptableSv_IsServerInstance( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_IsServerInstance( scriptableIndex )") )
        __debugbreak();
      InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(hitId);
      ScriptableSv_Damage(inflictor, attacker, hitId, &InstanceCommonContext->origin, &bp->dir, bp->methodOfDeath, r_weapon, v52, (const scr_string_t)br->trace.partName, iDamage, v19, 0);
    }
    return v51;
  }
  LOBYTE(isMelee) = v52;
  if ( v15->ProcessRiotShield(v15, randSeeda, bp, br, v27, isMelee, attacker, gameTime, v19, iDamage, (bool *)&v51) || !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&br->hitEnt->s.lerp.eFlags, ACTIVE, 0x10u) )
    return v51;
  if ( (v19 & 8) == 0 )
    goto LABEL_46;
  if ( bp->ignoreHitEntCount > 0 )
  {
    ignoreHitEntityQueue = bp->ignoreHitEntityQueue;
    while ( 1 )
    {
      v31 = &g_entities[*(__int16 *)ignoreHitEntityQueue];
      if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      eType = v31->s.eType;
      if ( ((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM )
        break;
      ++v16;
      ++ignoreHitEntityQueue;
      if ( v16 >= bp->ignoreHitEntCount )
        goto LABEL_55;
    }
LABEL_46:
    v29 = 0;
    goto LABEL_56;
  }
LABEL_55:
  v29 = 1;
LABEL_56:
  v33 = v19 | 0x4000;
  if ( !v29 )
    v33 = v19;
  if ( BG_IsArmorPiercing(r_weapon, v52) )
    v33 |= 2u;
  EntityIndex = G_GetEntityIndex(br->hitEnt);
  if ( !G_IsEntityInUse(EntityIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1255, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( br->hitEnt ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( br->hitEnt ) )") )
    __debugbreak();
  partGroup = br->trace.partGroup;
  LODWORD(randSeeda) = br->hitEnt->health;
  if ( (unsigned int)(partGroup - 1) <= 1 && (*outImpactFlags |= 1u, partGroup == HITLOC_HELMET) )
  {
    *outImpactFlags |= 0x400u;
  }
  else if ( (unsigned int)(partGroup - 6) <= 0xB )
  {
    *outImpactFlags |= 0x40u;
  }
  G_Bullet_DebugDrawHit(br, bp);
  v36 = (float)iDamage * bp->chargedDamageMultiplier;
  G_CoverWall_DamageCheckHit(br, (int)v36);
  CombatSystem = GCombat::GetCombatSystem();
  partName = br->trace.partName;
  methodOfDeath = bp->methodOfDeath;
  modelIndex = br->trace.modelIndex;
  v41 = CombatSystem->Damage;
  v42 = br->hitEnt;
  BYTE1(iDamage) = initialSimStep;
  LOBYTE(v50) = v52;
  LOBYTE(iDamage) = 1;
  v43 = v41(CombatSystem, v42, inflictor, v59, &bp->dir, &br->hitPos, (int)v36, v33, methodOfDeath, r_weapon, v50, partGroup, modelIndex, partName, level.time - gameTime, &br->trace.normal, (const GExtraDamageParams *)&iDamage);
  v44 = G_GetEntityIndex(br->hitEnt);
  v45 = G_IsEntityInUse(v44) && br->hitEnt->health > 0;
  if ( (int)randSeeda > 0 && !v45 )
    *outImpactFlags |= 2u;
  if ( br->trace.partGroup == 20 )
  {
    result = 0;
    *outImpactFlags |= 0x80u;
    v51 = 0;
  }
  else
  {
    result = v51;
  }
  if ( hitEffectEnt )
  {
    if ( v43 == DAMAGE_RETURNCODE_DEFERRED )
      GBullet::DeferImpactEffectFlags(v56, br->hitEnt, hitEffectEnt, *outImpactFlags);
    else
      v56->ImpactEffectSetAdditionalFlags(v56, hitEffectEnt, *outImpactFlags);
    return v51;
  }
  return result;
}

/*
==============
G_Bullet_ProcessDeferredNotifyActors
==============
*/
void G_Bullet_ProcessDeferredNotifyActors(void)
{
  unsigned int i; 
  __int64 v1; 
  unsigned int j; 
  __int64 v3; 
  gentity_s *originator; 
  ai_event_t eType; 

  for ( i = 0; i < s_bulletNumDeferredNotifies; ++i )
  {
    v1 = i;
    G_Bullet_ProcessNotifyActor(s_bulletDeferredNotifies[v1].damageMultiplier, s_bulletDeferredNotifies[v1].attacker, &s_bulletDeferredNotifies[v1].start, &s_bulletDeferredNotifies[v1].end, &s_bulletDeferredNotifies[v1].weapon, s_bulletDeferredNotifies[v1].isAlternate);
  }
  for ( j = 0; j < s_bulletNumDeferredGlassNotifies; ++j )
  {
    v3 = j;
    originator = s_bulletDeferredGlassNotifies[v3].originator;
    eType = s_bulletDeferredGlassNotifies[v3].eType;
    if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 431, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
      __debugbreak();
    Actor_BroadcastGlassEvent(originator, eType, &s_bulletDeferredGlassNotifies[v3].teamFlags, &s_bulletDeferredGlassNotifies[v3].vOrigin);
  }
  s_bulletNumDeferredGlassNotifies = 0;
  s_bulletNumDeferredNotifies = 0;
}

/*
==============
G_Bullet_ProcessNotifyActor
==============
*/
void G_Bullet_ProcessNotifyActor(float damageMultiplier, gentity_s *attacker, const vec3_t *start, const vec3_t *end, const Weapon *weapon, bool isAlternate)
{
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  bool v11; 
  ai_event_t v15; 
  unsigned __int64 eTeam; 
  bitarray<224> *AllTeamFlags; 
  unsigned __int64 v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v22; 
  __int128 v23; 
  float v24; 
  float v25; 
  float v29; 
  const bitarray<224> *v30; 
  unsigned int v31; 
  unsigned __int64 v32; 
  const bitarray<224> *v33; 
  __int128 v34; 
  double v35; 
  bool v36; 
  const bitarray<224> *AllCombatTeamFlags; 
  __int128 v38; 
  double v39; 
  unsigned int v40; 
  const WeaponDef *weapDef; 
  __int64 v42; 
  __int64 v43; 
  bitarray<224> result; 
  vec3_t vStart; 
  bitarray<224> v46; 
  bitarray<224> teamFlags; 
  __int128 v48; 
  __int128 v49; 
  __int128 v50; 
  __int128 v51; 
  __int128 v52; 

  v11 = isAlternate;
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 373, ASSERT_TYPE_ASSERT, "(attacker)", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( attacker->sentient )
  {
    v49 = v9;
    v48 = v10;
    if ( damageMultiplier == 1.0 )
    {
      v15 = AI_EV_GUNSHOT;
      if ( BG_IsSilenced(weapon, isAlternate) )
        v15 = AI_EV_SILENCED_SHOT;
      eTeam = (unsigned int)attacker->sentient->eTeam;
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
        AllTeamFlags = (bitarray<224> *)Com_TeamsSP_GetAllTeamFlags();
      else
        AllTeamFlags = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
      teamFlags = *AllTeamFlags;
      if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
        __debugbreak();
      teamFlags.array[eTeam >> 5] &= ~(0x80000000 >> (eTeam & 0x1F));
      Actor_BroadcastPointEvent(attacker, v15, &teamFlags, start);
      if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
      {
        v18 = (unsigned int)attacker->sentient->eTeam;
        memset(&result, 0, sizeof(result));
        if ( (unsigned int)v18 >= 0xE0 )
        {
          LODWORD(v43) = 224;
          LODWORD(v42) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v42, v43) )
            __debugbreak();
        }
        result.array[v18 >> 5] |= 0x80000000 >> (v18 & 0x1F);
        Actor_BroadcastPointEvent(attacker, AI_EV_GUNSHOT_TEAMMATE, &result, end);
      }
      v11 = isAlternate;
    }
    v19 = start->v[0];
    if ( attacker->client )
    {
      v20 = v19 - end->v[0];
      v52 = v6;
      v51 = v7;
      v21 = LODWORD(start->v[1]);
      v23 = v21;
      v22 = *(float *)&v21 - end->v[1];
      v50 = v8;
      v24 = start->v[2];
      v25 = v24 - end->v[2];
      *(float *)&v23 = fsqrt((float)((float)(v22 * v22) + (float)(v20 * v20)) + (float)(v25 * v25));
      _XMM3 = v23;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm11, xmm0
      }
      vStart.v[0] = (float)((float)(v20 * (float)(1.0 / *(float *)&_XMM0)) * 200.0) + v19;
      vStart.v[1] = (float)((float)(v22 * (float)(1.0 / *(float *)&_XMM0)) * 200.0) + *(float *)&v21;
      v29 = (float)((float)(v25 * (float)(1.0 / *(float *)&_XMM0)) * 200.0) + v24;
    }
    else
    {
      v29 = start->v[2];
      vStart.v[1] = start->v[1];
      vStart.v[0] = v19;
    }
    vStart.v[2] = v29;
    if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
      __debugbreak();
    if ( GBullet::ms_gBulletSystem->UseAISuppression(GBullet::ms_gBulletSystem) )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
        v30 = Com_TeamsSP_GetAllTeamFlags();
      else
        v30 = Com_TeamsMP_GetAllTeamFlags();
      *(_OWORD *)v46.array = *(_OWORD *)v30->array;
      *(_QWORD *)&v46.array[4] = *(_QWORD *)&v30->array[4];
      v31 = v30->array[6];
      goto LABEL_49;
    }
    v32 = (unsigned int)attacker->sentient->eTeam;
    if ( attacker->client )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
        v33 = Com_TeamsSP_GetAllTeamFlags();
      else
        v33 = Com_TeamsMP_GetAllTeamFlags();
      v34 = *(_OWORD *)v33->array;
      v35 = *(double *)&v33->array[4];
      result.array[6] = v33->array[6];
      *(_OWORD *)result.array = v34;
      *(double *)&result.array[4] = v35;
      if ( (unsigned int)v32 >= 0xE0 )
      {
        LODWORD(v43) = 224;
        LODWORD(v42) = v32;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v42, v43) )
          __debugbreak();
      }
      result.array[v32 >> 5] &= ~(0x80000000 >> (v32 & 0x1F));
    }
    else
    {
      if ( level.teammode == TEAMMODE_FFA )
      {
        v36 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
          AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
        else
          AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
        v38 = *(_OWORD *)AllCombatTeamFlags->array;
        v39 = *(double *)&AllCombatTeamFlags->array[4];
        v40 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
        *(_OWORD *)result.array = v38;
        if ( v36 )
          result.array[0] &= ~0x8000000u;
        v31 = v40 & 0xFF9FFFFF;
        goto LABEL_48;
      }
      Com_Teams_GetEnemyTeamFlags(&result, (team_t)v32);
    }
    v39 = *(double *)&result.array[4];
    v31 = result.array[6];
LABEL_48:
    *(_OWORD *)v46.array = *(_OWORD *)result.array;
    *(double *)&v46.array[4] = v39;
LABEL_49:
    v46.array[6] = v31;
    weapDef = BG_WeaponDef(weapon, v11);
    Actor_BroadcastLineEvent(attacker, AI_EV_BULLET, &v46, &vStart, end, weapDef);
  }
}

/*
==============
G_Bullet_SetDeferNotifyActors
==============
*/
void G_Bullet_SetDeferNotifyActors(bool set)
{
  s_bulletDeferNotifyActors = set;
}

/*
==============
G_Bullet_SetupFireParams
==============
*/
void G_Bullet_SetupFireParams(const gentity_s *const attacker, const gentity_s *const weapon, const int serverTime, const float spread, const int sequence, const PlayerHandIndex hand, const unsigned int eventParm, GWeaponFireParms *const outParams)
{
  GWeaponFireParms *v8; 
  int v10; 
  const playerState_s *EntityPlayerStateConst; 
  __int64 v12; 
  bitarray<64> *p_attackerPerks; 
  unsigned int weaponShotCount; 
  const playerState_s *v15; 
  double ADSDamageRangeScale; 
  float v17; 
  const dvar_t *v18; 
  float value; 
  unsigned int v20; 
  bool isAlternate; 
  double Bullet; 
  unsigned __int16 v23; 
  bool v24; 
  const dvar_t *v25; 
  float v26; 
  bool v27; 
  double FireAtMaxDamageMultiplier; 
  unsigned int pHoldrand; 

  v8 = outParams;
  v10 = serverTime;
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2125, ASSERT_TYPE_ASSERT, "( attacker != nullptr )", (const char *)&queryFormat, "attacker != nullptr") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2126, ASSERT_TYPE_ASSERT, "( outParams != nullptr )", (const char *)&queryFormat, "outParams != nullptr") )
    __debugbreak();
  outParams = (GWeaponFireParms *const)GWeaponMap::GetInstance();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(attacker);
  v12 = hand;
  p_attackerPerks = &v8->bullet.attackerPerks;
  weaponShotCount = 0;
  v15 = EntityPlayerStateConst;
  if ( EntityPlayerStateConst )
  {
    p_attackerPerks->array[0] = EntityPlayerStateConst->perks.array[0];
    v8->bullet.attackerPerks.array[1] = EntityPlayerStateConst->perks.array[1];
    LOBYTE(hand) = EntityPlayerStateConst->weapState[v12].weaponFiredAtMaxCharge != 0;
  }
  else
  {
    p_attackerPerks->array[0] = 0;
    v8->bullet.attackerPerks.array[1] = 0;
    LOBYTE(hand) = 0;
  }
  ADSDamageRangeScale = BG_GetADSDamageRangeScale((const BgWeaponMap *)outParams, EntityPlayerStateConst, &v8->wp.weapon, v8->wp.isAlternate);
  v17 = *(float *)&ADSDamageRangeScale;
  if ( BG_HasPerk(&v8->bullet.attackerPerks, 0x18u) )
  {
    v18 = DCONST_DVARFLT_perk_longerRangeScale;
    if ( !DCONST_DVARFLT_perk_longerRangeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_longerRangeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    value = v18->current.value;
    v10 = serverTime;
  }
  else
  {
    value = FLOAT_1_0;
  }
  if ( v15 )
  {
    v20 = BG_srand_timeangles(v15->serverTime + ((_DWORD)v12 != 0 ? 0xA : 0), &v15->viewangles);
  }
  else
  {
    pHoldrand = v10 + ((_DWORD)v12 != 0 ? 0xA : 0);
    BG_srand(&pHoldrand);
    v20 = pHoldrand;
  }
  isAlternate = v8->wp.isAlternate;
  v8->bullet.randSeed = v20;
  if ( !GBallistics::ms_gBallisticsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 79, ASSERT_TYPE_ASSERT, "( ms_gBallisticsSystem )", (const char *)&queryFormat, "ms_gBallisticsSystem") )
    __debugbreak();
  Bullet = BG_GetBulletRange<GBallisticInstance>((const BgWeaponMap *)outParams, GBallistics::ms_gBallisticsSystem, v15, &attacker->s, &v8->bullet.attackerPerks, &v8->wp.weapon, isAlternate);
  v8->bullet.rangeScale = value * v17;
  v8->bullet.range = *(float *)&Bullet;
  if ( ((int)v12 < 0 || (unsigned int)v12 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum PlayerHandIndex>(enum PlayerHandIndex)", "unsigned", (unsigned __int8)v12, "signed", v12) )
    __debugbreak();
  v8->bullet.attackerSpread = spread;
  v8->bullet.attackerHand = v12;
  v8->bullet.attackerEntity = truncate_cast<unsigned short,short>(attacker->s.number);
  if ( weapon )
    v23 = truncate_cast<unsigned short,short>(weapon->s.number);
  else
    v23 = 2046;
  v8->bullet.weaponEntity = v23;
  v8->bullet.shipEntity = 2047;
  v8->bullet.eventParm = eventParm;
  if ( v15 )
    weaponShotCount = v15->weapState[v12].weaponShotCount;
  v24 = v8->wp.isAlternate;
  v8->bullet.shotCount = weaponShotCount;
  if ( BG_IsTargetAssistActive(v15, &attacker->s, &v8->wp.weapon, v24) )
    v8->bullet.flags[0] |= 1u;
  if ( BG_GameInterface_HasCustomBulletTargetLogic(v15) )
    v8->bullet.flags[0] |= 2u;
  if ( BG_HasPerk(&v8->bullet.attackerPerks, 0x1Cu) )
  {
    v25 = DVARFLT_perk_bulletPenetrationMultiplier;
    if ( !DVARFLT_perk_bulletPenetrationMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_bulletPenetrationMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    v26 = v25->current.value;
  }
  else
  {
    v26 = FLOAT_1_0;
  }
  v27 = (_BYTE)hand == WEAPON_HAND_DEFAULT;
  v8->bullet.penetrationMultiplier = v26;
  if ( v27 || !BG_IsChargeShotWeapon(&v8->wp.weapon, v8->wp.isAlternate) )
  {
    v8->bullet.chargedDamageMultiplier = FLOAT_1_0;
  }
  else
  {
    FireAtMaxDamageMultiplier = BG_WeaponCharge_GetFireAtMaxDamageMultiplier(&v8->wp.weapon, v8->wp.isAlternate);
    v8->bullet.chargedDamageMultiplier = *(float *)&FireAtMaxDamageMultiplier;
  }
}

/*
==============
G_Bullet_Trace
==============
*/
bool G_Bullet_Trace(BulletFireParams *bp, const Weapon *weapon, bool isAlternate, gentity_s *attacker, BulletTraceResults *br, int lastSurfaceType, bool allowHitSelf)
{
  const dvar_t *v11; 
  bool enabled; 
  unsigned __int8 *priorityMap; 
  int IgnoreHitEntityCount; 
  vec3_t *p_end; 
  vec3_t *p_start; 
  unsigned __int16 EntityHitId; 
  gentity_s *v18; 
  float fraction; 
  float v20; 
  float v21; 
  float v22; 
  gentity_s *hitEnt; 
  const dvar_t *v24; 
  gentity_s *v25; 
  GWeaponMap *Instance; 
  const Weapon *v27; 
  const WeaponDef *v28; 
  gentity_s *RootParent; 
  gentity_s *v30; 
  gentity_s *v31; 
  unsigned int eType; 
  int v33; 
  bool v34; 
  unsigned int v35; 
  bool v36; 
  BOOL fmt; 
  int *skipEntities; 
  const int *skipEntitiesa; 
  int *skipEntitiesb; 
  __int64 skipEntityCount; 
  __int64 skipChildren; 
  __int64 contentMask; 

  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 958, ASSERT_TYPE_ASSERT, "(bp)", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 959, ASSERT_TYPE_ASSERT, "(attacker)", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 960, ASSERT_TYPE_ASSERT, "(br)", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( (unsigned int)lastSurfaceType >= 0x40 )
  {
    LODWORD(skipEntities) = lastSurfaceType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 961, ASSERT_TYPE_ASSERT, "(unsigned)( lastSurfaceType ) < (unsigned)( 64 )", "lastSurfaceType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", skipEntities, 64) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFF008008, "G_Bullet_Trace");
  PhysPerfTrack_BulletServerTraceTimeStart();
  PhysPerfTrack_BulletServerTraceCountAdd();
  v11 = DVARBOOL_killswitch_bullet_penetration_fix;
  if ( !DVARBOOL_killswitch_bullet_penetration_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_bullet_penetration_fix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  enabled = v11->current.enabled;
  priorityMap = BG_GetWeaponPriorityMap(weapon, isAlternate);
  IgnoreHitEntityCount = BG_GetIgnoreHitEntityCount(bp);
  p_end = &bp->end;
  p_start = &bp->start;
  skipEntitiesa = bp->ignoreHitEntityQueue;
  if ( enabled )
    PhysicsQuery_LegacyTraceSkipEntities(PHYSICS_WORLD_ID_SERVER_DETAIL, &br->trace, p_start, p_end, &bounds_origin, skipEntitiesa, IgnoreHitEntityCount, 0, 41969969, 1, priorityMap, All);
  else
    PhysicsQuery_LegacyBulletTrace(PHYSICS_WORLD_ID_SERVER_DETAIL, &br->trace, p_start, p_end, &bounds_origin, skipEntitiesa, IgnoreHitEntityCount, 0, 41969969, 1, priorityMap, All);
  EntityHitId = Trace_GetEntityHitId(&br->trace);
  if ( (unsigned __int16)(EntityHitId - 2046) <= 1u )
  {
    v18 = NULL;
  }
  else
  {
    if ( EntityHitId >= 0x800u )
    {
      LODWORD(skipEntityCount) = 2048;
      LODWORD(skipEntitiesb) = EntityHitId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", skipEntitiesb, skipEntityCount) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[EntityHitId].r.isInUse != g_entityIsInUse[EntityHitId] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[EntityHitId] )
    {
      LODWORD(contentMask) = br->trace.hitId;
      LODWORD(skipChildren) = br->trace.hitType;
      LODWORD(skipEntityCount) = EntityHitId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1010, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( hitEntId ))", "%s\n\tGot invalid entity from bullet raycast. Ent Idx: %d %d %d Start: [%.2f, %.2f, %.2f] End: [%.2f, %.2f, %.2f] Fraction:%.2f Pos: [%.2f, %.2f, %.2f] Surface Flags: %d Contents: %d", "G_IsEntityInUse( hitEntId )", skipEntityCount, skipChildren, contentMask, bp->start.v[0], bp->start.v[1], bp->start.v[2], bp->end.v[0], bp->end.v[1], bp->end.v[2], br->trace.fraction, br->trace.position.v[0], br->trace.position.v[1], br->trace.position.v[2], br->trace.surfaceFlags, br->trace.contents) )
        __debugbreak();
    }
    v18 = &g_entities[EntityHitId];
  }
  br->hitEnt = v18;
  fraction = br->trace.fraction;
  v20 = (float)((float)(bp->end.v[0] - bp->start.v[0]) * br->trace.fraction) + bp->start.v[0];
  br->hitPos.v[0] = v20;
  v21 = (float)((float)(bp->end.v[1] - bp->start.v[1]) * fraction) + bp->start.v[1];
  br->hitPos.v[1] = v21;
  v22 = (float)((float)(bp->end.v[2] - bp->start.v[2]) * fraction) + bp->start.v[2];
  br->hitPos.v[2] = v22;
  bp->travelDistance = fsqrt((float)((float)((float)(v21 - bp->start.v[1]) * (float)(v21 - bp->start.v[1])) + (float)((float)(v20 - bp->start.v[0]) * (float)(v20 - bp->start.v[0]))) + (float)((float)(v22 - bp->start.v[2]) * (float)(v22 - bp->start.v[2]))) + bp->travelDistance;
  hitEnt = br->hitEnt;
  if ( hitEnt && hitEnt->s.eType == ET_TURRET )
  {
    v24 = DVARBOOL_g_turretAllowDeferDamageToParentVehicle;
    if ( !DVARBOOL_g_turretAllowDeferDamageToParentVehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_turretAllowDeferDamageToParentVehicle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    if ( v24->current.enabled )
    {
      v25 = br->hitEnt;
      Instance = GWeaponMap::GetInstance();
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      v27 = BgWeaponMap::GetWeapon(Instance, v25->s.weaponHandle);
      v28 = BG_WeaponDef(v27, 0);
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 938, ASSERT_TYPE_ASSERT, "(turretDef)", (const char *)&queryFormat, "turretDef") )
        __debugbreak();
      if ( v28->deferDamageToParentVehicle )
      {
        RootParent = (gentity_s *)GUtils::GetRootParent(br->hitEnt);
        if ( RootParent )
        {
          if ( RootParent->s.eType == ET_VEHICLE && RootParent->vehicle )
            br->hitEnt = RootParent;
        }
      }
    }
  }
  v30 = br->hitEnt;
  if ( v30 )
  {
    if ( br->trace.partGroup == 19 )
    {
      br->trace.surfaceFlags = 15204352;
    }
    else
    {
      if ( BG_IsCharacterEntity(&v30->s) )
        goto LABEL_81;
      v31 = br->hitEnt;
      if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      eType = (unsigned __int16)v31->s.eType;
      if ( (unsigned __int16)eType <= 0x15u )
      {
        v33 = 2359300;
        if ( _bittest(&v33, eType) )
        {
LABEL_81:
          if ( !br->trace.surfaceFlags )
            br->trace.surfaceFlags = br->hitEnt->s.surfType << 19;
        }
      }
    }
    if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
      __debugbreak();
    LOBYTE(fmt) = allowHitSelf;
    v34 = GBullet::ms_gBulletSystem->TraceIgnoreHitEntity(GBullet::ms_gBulletSystem, bp, br, attacker, fmt);
  }
  else
  {
    v34 = 0;
  }
  br->ignoreHitEnt = v34;
  v35 = (br->trace.surfaceFlags >> 19) & 0x3F;
  v36 = (br->trace.surfaceFlags & 0x100) == 0;
  br->depthSurfaceType = v35;
  if ( v36 )
  {
    if ( !v35 && lastSurfaceType )
    {
      br->depthSurfaceType = lastSurfaceType;
      v35 = lastSurfaceType;
    }
    if ( v35 >= 0x40 )
    {
      LODWORD(skipEntityCount) = 64;
      LODWORD(skipEntitiesb) = v35;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1051, ASSERT_TYPE_SANITY, "(unsigned)( br->depthSurfaceType ) < (unsigned)( 64 )", "br->depthSurfaceType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", skipEntitiesb, skipEntityCount) )
        __debugbreak();
    }
  }
  else
  {
    br->depthSurfaceType = 0;
  }
  Sys_ProfEndNamedEvent();
  PhysPerfTrack_BulletServerTraceTimeStop();
  return br->trace.hitType != TRACE_HITTYPE_BEGIN;
}

/*
==============
G_Debug_BulletDamage
==============
*/
void G_Debug_BulletDamage(const Weapon *weapon, bool isAlternate, const vec3_t *start, const vec3_t *end, float travelDistance, float rangeScale, float bulletRange)
{
  const dvar_t *v7; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  float v14; 
  float v15; 
  float v16; 
  float v20; 
  float v21; 
  float v22; 
  __int128 v24; 
  int ShelvedDamageRanges; 
  int v26; 
  int v27; 
  __int64 v28; 
  __int64 v29; 
  float v35; 
  float v36; 
  float v41; 
  float maxDamageRange; 
  float minDamageRange; 
  vec3_t starta; 
  vec3_t enda; 
  vec4_t color; 
  vec4_t v47; 
  vec4_t v48; 
  vec4_t v49; 
  vec4_t v50; 
  float rangeArray[4]; 

  v7 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer == 1 )
    goto LABEL_13;
  v12 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.integer == 2 )
    goto LABEL_13;
  v13 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.integer == 4 )
  {
LABEL_13:
    v14 = end->v[0] - start->v[0];
    v24 = LODWORD(end->v[1]);
    v15 = end->v[1] - start->v[1];
    v16 = end->v[2] - start->v[2];
    *(float *)&v24 = fsqrt((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16));
    _XMM4 = v24;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    v20 = v14 * (float)(1.0 / *(float *)&_XMM0);
    v21 = v15 * (float)(1.0 / *(float *)&_XMM0);
    v22 = v16 * (float)(1.0 / *(float *)&_XMM0);
    *(float *)&v24 = *(float *)&v24 + travelDistance;
    _XMM9 = v24;
    if ( BG_UsesShelvedDamageFalloff(WEAP_DMG_CALC_TYPE_DEFAULT, weapon, isAlternate) )
    {
      ShelvedDamageRanges = BG_GetShelvedDamageRanges(WEAP_DMG_CALC_TYPE_DEFAULT, weapon, isAlternate, rangeScale, rangeArray, 4);
      color = colorRed;
      v47 = colorYellow;
      v48 = colorCyan;
      v49 = colorWhite;
      v26 = 0;
      v27 = ShelvedDamageRanges + 1;
      v50 = colorDkGrey;
      if ( ShelvedDamageRanges + 1 > 0 )
      {
        v28 = ShelvedDamageRanges;
        v29 = 0i64;
        do
        {
          if ( v28 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1905, ASSERT_TYPE_ASSERT, "(rangeCount > 0)", (const char *)&queryFormat, "rangeCount > 0") )
            __debugbreak();
          if ( v26 )
            _XMM0 = LODWORD(v50.v[v29 + 3]);
          else
            _XMM0 = 0i64;
          if ( v29 == v28 )
            _XMM3 = LODWORD(bulletRange);
          else
            _XMM3 = LODWORD(rangeArray[v29]);
          if ( *(float *)&_XMM3 >= travelDistance && *(float *)&_XMM0 < *(float *)&v24 )
          {
            __asm { vmaxss  xmm0, xmm0, xmm8 }
            starta.v[0] = (float)(v20 * (float)(*(float *)&_XMM0 - travelDistance)) + start->v[0];
            starta.v[1] = (float)(v21 * (float)(*(float *)&_XMM0 - travelDistance)) + start->v[1];
            __asm { vminss  xmm2, xmm3, xmm9 }
            starta.v[2] = (float)(v22 * (float)(*(float *)&_XMM0 - travelDistance)) + start->v[2];
            *(float *)&_XMM0 = (float)(v21 * (float)(*(float *)&_XMM2 - travelDistance)) + start->v[1];
            enda.v[0] = (float)(v20 * (float)(*(float *)&_XMM2 - travelDistance)) + start->v[0];
            enda.v[2] = (float)(v22 * (float)(*(float *)&_XMM2 - travelDistance)) + start->v[2];
            enda.v[1] = *(float *)&_XMM0;
            G_DebugLineWithDuration(&starta, &enda, &color + v26, 1, 300);
          }
          ++v26;
          ++v29;
        }
        while ( v26 < v27 );
      }
    }
    else
    {
      BG_GetDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, weapon, isAlternate, rangeScale, &minDamageRange, &maxDamageRange);
      _XMM0 = LODWORD(maxDamageRange);
      if ( travelDistance < maxDamageRange )
      {
        v35 = start->v[1];
        v36 = start->v[2];
        __asm { vminss  xmm0, xmm0, xmm9 }
        enda.v[0] = start->v[0];
        starta.v[0] = (float)((float)(*(float *)&_XMM0 - travelDistance) * v20) + enda.v[0];
        starta.v[2] = (float)((float)(*(float *)&_XMM0 - travelDistance) * v22) + v36;
        enda.v[1] = v35;
        enda.v[2] = v36;
        starta.v[1] = (float)((float)(*(float *)&_XMM0 - travelDistance) * v21) + v35;
        G_DebugLineWithDuration(&enda, &starta, &colorRed, 1, 300);
      }
      _XMM0 = LODWORD(minDamageRange);
      if ( minDamageRange < *(float *)&v24 )
      {
        __asm { vmaxss  xmm0, xmm0, xmm8 }
        enda.v[0] = (float)(v20 * (float)(*(float *)&_XMM0 - travelDistance)) + start->v[0];
        __asm { vminss  xmm2, xmm9, [rbp+80h+bulletRange] }
        enda.v[1] = (float)(v21 * (float)(*(float *)&_XMM0 - travelDistance)) + start->v[1];
        enda.v[2] = (float)(v22 * (float)(*(float *)&_XMM0 - travelDistance)) + start->v[2];
        v41 = (float)((float)(*(float *)&_XMM2 - travelDistance) * v21) + start->v[1];
        starta.v[0] = (float)((float)(*(float *)&_XMM2 - travelDistance) * v20) + start->v[0];
        starta.v[2] = (float)((float)(*(float *)&_XMM2 - travelDistance) * v22) + start->v[2];
        starta.v[1] = v41;
        G_DebugLineWithDuration(&enda, &starta, &colorWhite, 1, 300);
      }
    }
  }
}

/*
==============
GAssistTarget::GetEntNum
==============
*/
__int64 GAssistTarget::GetEntNum(GAssistTarget *this)
{
  gentity_s *m_target; 

  m_target = this->m_target;
  if ( m_target )
    return (unsigned int)m_target->s.number;
  else
    return 2047i64;
}

/*
==============
GBullet::GetHitClientEventCount
==============
*/
__int64 GBullet::GetHitClientEventCount(GBullet *this)
{
  return (unsigned int)this->m_hitClientEventCount;
}

/*
==============
GAssistTarget::GetTarget
==============
*/
gentity_s *GAssistTarget::GetTarget(GAssistTarget *this)
{
  return this->m_target;
}

/*
==============
GAssistTarget::GetTarget
==============
*/
gentity_s *GAssistTarget::GetTarget(GAssistTarget *this)
{
  return this->m_target;
}

/*
==============
GBullet::GetTargetEvaluator
==============
*/
GConeTargetEvaluator *GBullet::GetTargetEvaluator(targetAssistType_t assistType)
{
  if ( assistType == TARGET_ASSISTTYPPE_CONE )
    return &GBullet::ms_coneTargetEvaluator;
  else
    return 0i64;
}

/*
==============
GBullet::HandleDeferredImpactEffects
==============
*/
void GBullet::HandleDeferredImpactEffects(GBullet *this)
{
  int v1; 
  ntl::fixed_array<GDeferredImpactEffectEntry,256> *p_m_deferredImpactEffects; 
  unsigned __int64 v4; 
  __int64 hitEffectNum; 
  __int64 victimNum; 
  gentity_s *v7; 
  gentity_s *v8; 
  bool v9; 
  __int64 v10; 
  __int64 v11; 

  v1 = 0;
  if ( this->m_deferredImpactCount )
  {
    p_m_deferredImpactEffects = &this->m_deferredImpactEffects;
    v4 = 0i64;
    do
    {
      if ( v4 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      hitEffectNum = p_m_deferredImpactEffects->m_data[0].hitEffectNum;
      if ( (_DWORD)hitEffectNum == 2047 )
        goto LABEL_42;
      if ( (unsigned int)hitEffectNum >= 0x800 )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = p_m_deferredImpactEffects->m_data[0].hitEffectNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[hitEffectNum].r.isInUse != g_entityIsInUse[hitEffectNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[hitEffectNum] )
      {
LABEL_42:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2931, ASSERT_TYPE_ASSERT, "(entry.hitEffectNum != ENTITYNUM_NONE && G_IsEntityInUse( entry.hitEffectNum ))", (const char *)&queryFormat, "entry.hitEffectNum != ENTITYNUM_NONE && G_IsEntityInUse( entry.hitEffectNum )") )
          __debugbreak();
      }
      if ( p_m_deferredImpactEffects->m_data[0].victimNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2932, ASSERT_TYPE_ASSERT, "(entry.victimNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entry.victimNum != ENTITYNUM_NONE") )
        __debugbreak();
      victimNum = p_m_deferredImpactEffects->m_data[0].victimNum;
      v7 = &level.gentities[p_m_deferredImpactEffects->m_data[0].hitEffectNum];
      v8 = &level.gentities[victimNum];
      if ( (unsigned int)victimNum >= 0x800 )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = p_m_deferredImpactEffects->m_data[0].victimNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[victimNum].r.isInUse != g_entityIsInUse[victimNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[victimNum] )
        v9 = v8->health > 0;
      else
        v9 = 0;
      if ( p_m_deferredImpactEffects->m_data[0].victimWasAlive && !v9 )
        p_m_deferredImpactEffects->m_data[0].impactFlags |= 2u;
      this->ImpactEffectSetAdditionalFlags(this, v7, p_m_deferredImpactEffects->m_data[0].impactFlags);
      ++v1;
      ++v4;
      p_m_deferredImpactEffects = (ntl::fixed_array<GDeferredImpactEffectEntry,256> *)((char *)p_m_deferredImpactEffects + 16);
    }
    while ( v1 < this->m_deferredImpactCount );
    this->m_deferredImpactCount = 0i64;
  }
  else
  {
    this->m_deferredImpactCount = 0i64;
  }
}

/*
==============
GBullet::HandleImpaledEntities
==============
*/
void GBullet::HandleImpaledEntities(GBullet *this)
{
  int v1; 
  unsigned __int64 v3; 
  int *p_attackerNum; 
  __int64 v5; 
  __int64 v6; 
  gentity_s *v7; 
  gentity_s *v8; 
  char *fmt; 
  __int64 v10; 
  __int64 v11; 
  vec3_t outWorldPos; 

  v1 = 0;
  if ( this->m_impaleCount )
  {
    v3 = 0i64;
    p_attackerNum = &this->m_impaledEntities.m_data[0].attackerNum;
    do
    {
      if ( v3 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v5 = *p_attackerNum;
      if ( (_DWORD)v5 == 2047 )
        goto LABEL_39;
      if ( (unsigned int)v5 >= 0x800 )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = *p_attackerNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v5] )
      {
LABEL_39:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2857, ASSERT_TYPE_ASSERT, "(entry.attackerNum != ENTITYNUM_NONE && G_IsEntityInUse( entry.attackerNum ))", (const char *)&queryFormat, "entry.attackerNum != ENTITYNUM_NONE && G_IsEntityInUse( entry.attackerNum )") )
          __debugbreak();
      }
      v6 = *(p_attackerNum - 1);
      if ( (_DWORD)v6 == 2047 )
        goto LABEL_40;
      if ( (unsigned int)v6 >= 0x800 )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = *(p_attackerNum - 1);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v6] )
      {
LABEL_40:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2858, ASSERT_TYPE_ASSERT, "(entry.victimNum != ENTITYNUM_NONE && G_IsEntityInUse( entry.victimNum ))", (const char *)&queryFormat, "entry.victimNum != ENTITYNUM_NONE && G_IsEntityInUse( entry.victimNum )") )
          __debugbreak();
      }
      v7 = &level.gentities[*p_attackerNum];
      v8 = &level.gentities[*(p_attackerNum - 1)];
      if ( G_Utils_DObjBoneSpacePosToWorld(v8, (scr_string_t)p_attackerNum[2], (const vec3_t *)p_attackerNum + 2, &outWorldPos) )
      {
        LOBYTE(fmt) = *((_BYTE *)p_attackerNum + 108);
        this->InvokeEntityImpaledCallback(this, v7, v8, (const Weapon *)(p_attackerNum + 12), (const bool)fmt, (const vec3_t *)(p_attackerNum + 3), &outWorldPos, (const vec3_t *)(p_attackerNum + 9), (hitLocation_t)p_attackerNum[1], (scr_string_t)p_attackerNum[2], (const vec3_t *)(p_attackerNum + 6));
      }
      ++v1;
      ++v3;
      p_attackerNum += 29;
    }
    while ( v1 < this->m_impaleCount );
    this->m_impaleCount = 0i64;
  }
  else
  {
    this->m_impaleCount = 0i64;
  }
}

/*
==============
GBullet::HitClientOverrideTracers
==============
*/
void GBullet::HitClientOverrideTracers(GBullet *this, gentity_s *const attacker, const Weapon *r_weapon, const bool isAlternate)
{
  weapClass_t WeaponClass; 
  bool v8; 
  gagent_s *agent; 

  if ( this->m_hitClientEventCount > 0 )
  {
    if ( attacker )
    {
      WeaponClass = BG_GetWeaponClass(r_weapon, isAlternate);
      v8 = BG_GetPenetrateType(r_weapon, isAlternate) == PENETRATE_TYPE_RICOCHET;
      if ( WeaponClass != WEAPCLASS_SPREAD && !v8 )
      {
        agent = attacker->agent;
        if ( agent )
        {
          agent->agentState.doNotSimulateTracers = 1;
        }
        else
        {
          if ( !attacker->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 725, ASSERT_TYPE_ASSERT, "(attacker->client)", (const char *)&queryFormat, "attacker->client") )
            __debugbreak();
          attacker->client->sess.cs.doNotSimulateTracers = 1;
        }
      }
    }
  }
}

/*
==============
GBullet::IncrementHitClientEventCount
==============
*/
bool GBullet::IncrementHitClientEventCount(GBullet *this, const int entNum)
{
  int m_firstHitClientNum; 

  ++this->m_hitClientEventCount;
  m_firstHitClientNum = this->m_firstHitClientNum;
  if ( m_firstHitClientNum != 2047 )
    return entNum == m_firstHitClientNum;
  this->m_firstHitClientNum = entNum;
  return 1;
}

/*
==============
GBullet::NotifyWhizbys
==============
*/
void GBullet::NotifyWhizbys(GBullet *this, const BulletFireParams *bp, const BulletTraceResults *br, gentity_s *attacker, bool useFriendlyFire)
{
  char v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 i; 
  gentity_s *v12; 
  bool v13; 
  bool v14; 
  bool v15; 
  team_t v16; 
  gclient_s *client; 
  gagent_s *agent; 
  sentient_s *sentient; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  __int128 v26; 
  __int128 v30; 
  float v31; 
  float v32; 
  __int128 v33; 
  float v34; 
  float v35; 
  __int128 v36; 
  scrContext_t *v39; 
  __int64 v40; 
  __int64 v41; 
  vec3_t vEyePosOut; 
  float value[4]; 
  float v46; 
  float v47; 
  float v48; 

  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 768, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 769, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 770, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( G_Utils_IsClientOrActorOrAgent(attacker) )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0i64;
    v10 = 0i64;
    for ( i = 0i64; ; ++i )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v8 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      {
        if ( v7 )
          GScr_Notify(attacker, scr_const.attackerbulletwhizby, 0);
        return;
      }
      if ( (unsigned int)v8 >= 0x800 )
      {
        LODWORD(v41) = 2048;
        LODWORD(v40) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[i].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v9] )
        goto LABEL_64;
      v12 = &g_entities[i];
      if ( !&g_entities[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 783, ASSERT_TYPE_ASSERT, "(target)", (const char *)&queryFormat, "target") )
        __debugbreak();
      if ( v12 == attacker )
        goto LABEL_64;
      v13 = v8 < level.maxclients;
      if ( v8 < level.maxclients )
      {
        if ( level.clients[v10].sess.connected != CON_CONNECTED )
          goto LABEL_64;
        v14 = level.clients[v10].sess.sessionState == SESS_STATE_PLAYING;
      }
      else
      {
        v14 = v12->s.eType == ET_AGENT;
      }
      if ( !v14 )
        goto LABEL_64;
      if ( v8 < level.maxclients )
        break;
      if ( v12->agent )
      {
        v15 = v12->sentient == NULL;
LABEL_39:
        if ( !v15 )
          goto LABEL_42;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 802, ASSERT_TYPE_ASSERT, "( (isAClient && target->client) || (!isAClient && target->agent && target->sentient) )", (const char *)&queryFormat, "(isAClient && target->client) || (!isAClient && target->agent && target->sentient)") )
        __debugbreak();
LABEL_42:
      if ( useFriendlyFire )
        goto LABEL_57;
      if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
        __debugbreak();
      v16 = GUtils::ms_gUtils->GetEntityTeam(GUtils::ms_gUtils, v12);
      client = attacker->client;
      if ( !client || v16 == TEAM_ZERO || v16 != client->sess.cs.team )
      {
        agent = attacker->agent;
        if ( !agent || v16 == TEAM_ZERO || v16 != agent->agentState.team )
        {
          sentient = attacker->sentient;
          if ( sentient )
          {
            if ( v16 )
            {
              if ( v16 == sentient->eTeam )
                goto LABEL_64;
            }
            else if ( sentient->eTeam == TEAM_TWO )
            {
              goto LABEL_64;
            }
          }
LABEL_57:
          if ( v13 )
            G_Client_GetEyePosition(&v12->client->ps, &vEyePosOut);
          else
            Sentient_GetEyePosition(v12->sentient, &vEyePosOut);
          v20 = bp->start.v[0];
          v21 = bp->start.v[1];
          v22 = bp->start.v[2];
          v23 = br->hitPos.v[0] - v20;
          v24 = br->hitPos.v[2] - v22;
          v26 = LODWORD(br->hitPos.v[1]);
          v25 = br->hitPos.v[1] - v21;
          *(float *)&v26 = fsqrt((float)((float)(v25 * v25) + (float)(v23 * v23)) + (float)(v24 * v24));
          _XMM7 = v26;
          __asm
          {
            vcmpless xmm0, xmm7, cs:__real@80000000
            vblendvps xmm0, xmm7, xmm15, xmm0
          }
          v30 = LODWORD(FLOAT_1_0);
          v31 = (float)(1.0 / *(float *)&_XMM0) * v24;
          v32 = (float)(1.0 / *(float *)&_XMM0) * v23;
          *(float *)&v30 = (float)(1.0 / *(float *)&_XMM0) * v25;
          v33 = v30;
          v35 = (float)((float)((float)(vEyePosOut.v[1] - v21) * *(float *)&v30) + (float)((float)(vEyePosOut.v[0] - v20) * v32)) + (float)((float)(vEyePosOut.v[2] - v22) * v31);
          v34 = v35;
          value[0] = v32;
          value[1] = *(float *)&v33;
          value[2] = v31;
          if ( v35 <= *(float *)&_XMM7 && v35 >= 64.0 )
          {
            v46 = (float)(v32 * v35) + v20;
            v36 = v33;
            v48 = (float)(v31 * v34) + v22;
            v47 = (float)(*(float *)&v33 * v34) + v21;
            *(float *)&v36 = fsqrt((float)((float)((float)(v47 - vEyePosOut.v[1]) * (float)(v47 - vEyePosOut.v[1])) + (float)((float)(v46 - vEyePosOut.v[0]) * (float)(v46 - vEyePosOut.v[0]))) + (float)((float)(v48 - vEyePosOut.v[2]) * (float)(v48 - vEyePosOut.v[2])));
            _XMM0 = v36;
            __asm { vmaxss  xmm6, xmm0, xmm15 }
            if ( *(float *)&_XMM6 <= 75.0 )
            {
              v39 = ScriptContext_Server();
              Scr_AddVector(v39, value);
              Scr_AddVector(v39, &v46);
              Scr_AddFloat(v39, *(float *)&_XMM6);
              GScr_AddEntity(attacker);
              GScr_Notify(v12, scr_const.bulletwhizby, 4u);
              v7 = 1;
            }
          }
        }
      }
LABEL_64:
      ++v8;
      ++v9;
      ++v10;
    }
    v15 = v12->client == NULL;
    goto LABEL_39;
  }
}

/*
==============
GBullet::RegisterImpaledEntity
==============
*/
void GBullet::RegisterImpaledEntity(GBullet *this, const gentity_s *attacker, const gentity_s *victim, const Weapon *weapon, bool isAlternate, const vec3_t *location, const vec3_t *direction, hitLocation_t hitLocation, scr_string_t partName)
{
  __int64 number; 
  __int64 v14; 
  entityType_s eType; 
  unsigned __int64 m_impaleCount; 
  GEntityImpaleEntry *v17; 
  __int64 v18; 
  __int64 v19; 

  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2815, ASSERT_TYPE_ASSERT, "(attacker)", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  number = attacker->s.number;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v18) = attacker->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[number].r.isInUse != g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2816, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( attacker->s.number ))", (const char *)&queryFormat, "G_IsEntityInUse( attacker->s.number )") )
    __debugbreak();
  if ( !victim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2817, ASSERT_TYPE_ASSERT, "(victim)", (const char *)&queryFormat, "victim") )
    __debugbreak();
  v14 = victim->s.number;
  if ( (unsigned int)v14 >= 0x800 )
  {
    LODWORD(v19) = 2048;
    LODWORD(v18) = victim->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2818, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( victim->s.number ))", (const char *)&queryFormat, "G_IsEntityInUse( victim->s.number )") )
    __debugbreak();
  if ( (unsigned int)hitLocation >= HITLOC_NUM )
  {
    LODWORD(v19) = 22;
    LODWORD(v18) = hitLocation;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2819, ASSERT_TYPE_ASSERT, "(unsigned)( hitLocation ) < (unsigned)( HITLOC_NUM )", "hitLocation doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  if ( !partName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2820, ASSERT_TYPE_ASSERT, "(partName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "partName != NULL_SCR_STRING") )
    __debugbreak();
  eType = victim->s.eType;
  if ( eType != ET_PLAYER && eType != ET_AGENT_CORPSE )
  {
    LODWORD(v19) = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2823, ASSERT_TYPE_ASSERT, "(victim->s.eType == ET_PLAYER || victim->s.eType == ET_AGENT_CORPSE)", "%s\n\tRegisterImpaledEntity invoked on an invalid entity type: %i", "victim->s.eType == ET_PLAYER || victim->s.eType == ET_AGENT_CORPSE", v19) )
      __debugbreak();
  }
  m_impaleCount = this->m_impaleCount;
  if ( m_impaleCount < 8 )
  {
    v17 = &this->m_impaledEntities.m_data[m_impaleCount];
    *(_QWORD *)&v17->attackerNum = 2047i64;
    v17->partName = 0;
    v17->victimNum = 2047;
    *(_QWORD *)v17->clientHitPos.v = 0i64;
    v17->clientHitPos.v[2] = 0.0;
    *(_QWORD *)v17->boneOffset.v = 0i64;
    v17->boneOffset.v[2] = 0.0;
    *(_QWORD *)v17->hitDirection.v = 0i64;
    v17->hitDirection.v[2] = 0.0;
    *(_QWORD *)&v17->weapon.weaponIdx = 0i64;
    *(_QWORD *)&v17->weapon.stickerIndices[3] = 0i64;
    *(_QWORD *)&v17->weapon.weaponAttachments[2] = 0i64;
    *(_QWORD *)&v17->weapon.weaponAttachments[10] = 0i64;
    *(_QWORD *)&v17->weapon.attachmentVariationIndices[5] = 0i64;
    *(_QWORD *)&v17->weapon.attachmentVariationIndices[13] = 0i64;
    *(_QWORD *)&v17->weapon.attachmentVariationIndices[21] = 0i64;
    *(_DWORD *)&v17->weapon.weaponCamo = 0;
    v17->isAlternate = 0;
    v17->victimNum = victim->s.number;
    v17->attackerNum = attacker->s.number;
    v17->hitLocation = hitLocation;
    v17->partName = partName;
    *(__m256i *)&v17->weapon.weaponIdx = *(__m256i *)&weapon->weaponIdx;
    *(_OWORD *)&v17->weapon.attachmentVariationIndices[5] = *(_OWORD *)&weapon->attachmentVariationIndices[5];
    *(double *)&v17->weapon.attachmentVariationIndices[21] = *(double *)&weapon->attachmentVariationIndices[21];
    *(_DWORD *)&v17->weapon.weaponCamo = *(_DWORD *)&weapon->weaponCamo;
    v17->isAlternate = isAlternate;
    v17->clientHitPos = *location;
    v17->hitDirection = *direction;
    if ( G_Utils_DObjWorldPosToBoneSpace(victim, partName, &v17->clientHitPos, &v17->boneOffset) )
      ++this->m_impaleCount;
  }
}

/*
==============
GBullet::ResetDeferredImpactEffects
==============
*/
void GBullet::ResetDeferredImpactEffects(GBullet *this)
{
  this->m_deferredImpactCount = 0i64;
}

/*
==============
GBullet::ResetHitClientEventCount
==============
*/
void GBullet::ResetHitClientEventCount(GBullet *this)
{
  this->m_hitClientEventCount = 0;
  this->m_firstHitClientNum = 2047;
}

/*
==============
GBullet::ResetImpaledEntities
==============
*/
void GBullet::ResetImpaledEntities(GBullet *this)
{
  this->m_impaleCount = 0i64;
}

/*
==============
GAssistTarget::SetTarget
==============
*/
void GAssistTarget::SetTarget(GAssistTarget *this, gentity_s *target)
{
  this->m_target = target;
}

/*
==============
GBullet::TraceIgnoreHitEntityForAI
==============
*/
bool GBullet::TraceIgnoreHitEntityForAI(GBullet *this, const BulletFireParams *bp, const BulletTraceResults *br, const gentity_s *attacker)
{
  EntityTagInfo *tagInfo; 
  gentity_s *hitEnt; 
  sentient_s *sentient; 
  team_t eTeam; 
  const playerState_s *p_ps; 
  float v12; 
  float v13; 
  float v14; 
  GHandler *Handler; 
  gclient_s *client; 
  __int16 groundRefEnt; 
  const char *v18; 
  int v19; 
  const char *v20; 
  vec3_t *p_dir; 
  __int128 v22; 
  float v23; 
  __int128 v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  __int128 angles; 
  vec3_t outOrigin; 
  vec3_t up; 
  char v35; 
  WorldUpReferenceFrame v36; 

  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2673, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2674, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !br->hitEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2675, ASSERT_TYPE_ASSERT, "( br->hitEnt )", (const char *)&queryFormat, "br->hitEnt") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2676, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !attacker->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2677, ASSERT_TYPE_ASSERT, "( attacker->sentient )", (const char *)&queryFormat, "attacker->sentient") )
    __debugbreak();
  if ( !attacker->actor && !attacker->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2678, ASSERT_TYPE_ASSERT, "( attacker->actor || attacker->agent )", (const char *)&queryFormat, "attacker->actor || attacker->agent") )
    __debugbreak();
  tagInfo = attacker->tagInfo;
  if ( tagInfo && tagInfo->parent == br->hitEnt )
    return 1;
  hitEnt = br->hitEnt;
  sentient = hitEnt->sentient;
  if ( sentient )
  {
    eTeam = sentient->eTeam;
    if ( eTeam )
    {
      if ( eTeam == attacker->sentient->eTeam )
        return 1;
    }
  }
  p_ps = &hitEnt->client->ps;
  if ( p_ps && br->trace.partGroup != 19 )
  {
    G_Client_GetEyePosition(p_ps, &outOrigin);
    v12 = br->hitPos.v[0] - outOrigin.v[0];
    v13 = br->hitPos.v[1] - outOrigin.v[1];
    v14 = br->hitPos.v[2] - outOrigin.v[2];
    if ( !BG_IsPlayerZeroG(&br->hitEnt->client->ps) )
    {
      LODWORD(v25) = LODWORD(bp->dir.v[0]) ^ _xmm;
      v24 = LODWORD(bp->dir.v[1]);
      v26 = 0.0;
      goto LABEL_48;
    }
    Handler = GHandler::getHandler();
    client = br->hitEnt->client;
    if ( !client )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2587, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 0x2Au) && ((groundRefEnt = client->ps.groundRefEnt, groundRefEnt == 2047) || !groundRefEnt) )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) )
      {
LABEL_41:
        *(_QWORD *)&angles = *(_QWORD *)client->ps.viewangles.v;
        DWORD2(angles) = LODWORD(client->ps.viewangles.v[2]);
        if ( WorldUpReferenceFrame::HasValidWorldUpInPs(&client->ps) )
        {
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v36, &client->ps, Handler);
          WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v36, (vec3_t *)&angles);
        }
        AngleVectors((const vec3_t *)&angles, NULL, NULL, &up);
        p_dir = &bp->dir;
        if ( &bp->dir == (vec3_t *)&v35 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross", angles) )
          __debugbreak();
        v22 = LODWORD(up.v[2]);
        v23 = bp->dir.v[2];
        *(float *)&v22 = (float)(up.v[2] * bp->dir.v[1]) - (float)(v23 * up.v[1]);
        v24 = v22;
        v25 = (float)(up.v[0] * v23) - (float)(up.v[2] * p_dir->v[0]);
        v26 = (float)(p_dir->v[0] * up.v[1]) - (float)(up.v[0] * bp->dir.v[1]);
LABEL_48:
        v27 = v24;
        *(float *)&v27 = fsqrt((float)((float)(*(float *)&v24 * *(float *)&v24) + (float)(v25 * v25)) + (float)(v26 * v26));
        _XMM3 = v27;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm1, xmm0
        }
        return COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(*(float *)&v24 * (float)(1.0 / *(float *)&_XMM0)) * v12) + (float)((float)(v25 * (float)(1.0 / *(float *)&_XMM0)) * v13)) + (float)((float)(v26 * (float)(1.0 / *(float *)&_XMM0)) * v14)) & _xmm) > 8.0;
      }
      v18 = "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )";
      v19 = 2575;
      v20 = "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))";
    }
    else
    {
      v18 = "BG_IsPlayerZeroG( ps )";
      v19 = 2588;
      v20 = "(BG_IsPlayerZeroG( ps ))";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", v19, ASSERT_TYPE_ASSERT, v20, (const char *)&queryFormat, v18) )
      __debugbreak();
    goto LABEL_41;
  }
  return 0;
}

