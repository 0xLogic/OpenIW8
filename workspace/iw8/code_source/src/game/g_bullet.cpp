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
  const vec3_t *v21; 
  const gentity_s *v22; 
  const vec3_t *v23; 
  int v27; 
  GTargetAssist *v29; 
  int v30; 
  gentity_s **p_m_target; 
  const DObj *ServerDObjForEnt; 
  DObj *v35; 
  __int64 v51; 
  __int64 v59; 
  __int64 v63; 
  __int64 v70; 
  unsigned __int64 v71; 
  const dvar_t *v76; 
  const dvar_t *v78; 
  const dvar_t *v79; 
  const playerState_s *EntityPlayerStateConst; 
  const playerState_s *v90; 
  GHandler *Handler; 
  tmat33_t<vec3_t> *p_m_axis; 
  __int16 attackerEntNum; 
  GHandler *v95; 
  __int16 v97; 
  bool v98; 
  const gentity_s *v99; 
  ntl::fixed_array<GAssistTarget,20> *inOutTargetArray; 
  unsigned __int64 v101; 
  const vec3_t *v102; 
  Weapon *r_weapona; 
  char v104[832]; 
  BGConeTargetBoneSearchParam searchParam; 
  vec3_t center; 
  vec3_t outAngles; 
  WorldUpReferenceFrame axis; 
  tmat33_t<vec3_t> outAxis; 
  ConeTargetHitResults outSearchResults; 
  void *retaddr; 

  _R11 = &retaddr;
  v21 = bulletStart;
  v22 = attacker;
  v23 = bulletDir;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm11
  }
  v99 = attacker;
  v98 = isAlternate;
  r_weapona = (Weapon *)r_weapon;
  *(_QWORD *)center.v = bulletStart;
  v102 = bulletDir;
  inOutTargetArray = outTargetArray;
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1961, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rbp+7A0h+spread]
    vmulss  xmm10, xmm0, cs:__real@3c8efa35
    vmovaps xmm0, xmm10; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  v27 = 0;
  v97 = 2047;
  __asm { vmovaps xmm11, xmm0 }
  if ( !GTargetAssist::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 61, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  v29 = GTargetAssist::ms_instance;
  v30 = ((__int64 (__fastcall *)(GTargetAssist *, __int64, _QWORD))GTargetAssist::ms_instance->FindNextTarget)(GTargetAssist::ms_instance, 0xFFFFFFFFi64, (unsigned __int16)v22->s.number);
  __asm { vmovss  xmm9, [rbp+7A0h+range] }
  if ( v30 != 0x7FFFFFFF )
  {
    _RBX = &g_entities[v97];
    if ( _RBX )
    {
      __asm { vmovaps xmmword ptr [rsp+8A0h+var_48+8], xmm6 }
      p_m_target = &inOutTargetArray->m_data[0].m_target;
      __asm
      {
        vmovaps [rsp+8A0h+var_58+8], xmm7
        vmovaps [rsp+8A0h+var_68+8], xmm8
      }
      v101 = 0i64;
      do
      {
        if ( (unsigned __int64)v27 >= 0x14 )
          break;
        ServerDObjForEnt = Com_GetServerDObjForEnt(_RBX);
        v35 = (DObj *)ServerDObjForEnt;
        if ( ServerDObjForEnt )
        {
          if ( DObjGetFirstModel(ServerDObjForEnt) )
          {
            G_Utils_GetAnglesWithWorldUp(_RBX, &outAngles);
            AnglesToAxis(&outAngles, (tmat33_t<vec3_t> *)&axis);
            __asm
            {
              vcvttss2si eax, dword ptr [rbx+130h]
              vxorps  xmm8, xmm8, xmm8
              vcvtsi2ss xmm8, xmm8, eax
              vcvttss2si eax, dword ptr [rbx+134h]
              vxorps  xmm7, xmm7, xmm7
              vcvtsi2ss xmm7, xmm7, eax
              vcvttss2si eax, dword ptr [rbx+138h]
              vxorps  xmm6, xmm6, xmm6
              vcvtsi2ss xmm6, xmm6, eax
            }
            memset_0(&searchParam, 0, sizeof(searchParam));
            searchParam.pmoveHandler = GHandler::getHandler();
            searchParam.es = &_RBX->s;
            __asm
            {
              vmovss  dword ptr [rbp+7A0h+searchParam.entityOrigin], xmm8
              vmovss  dword ptr [rbp+7A0h+searchParam.entityOrigin+4], xmm7
              vmovss  dword ptr [rbp+7A0h+searchParam.entityOrigin+8], xmm6
            }
            searchParam.entityDobj = v35;
            AxisCopy((const tmat33_t<vec3_t> *)&axis, &searchParam.entityAxis);
            searchParam.pmoveHandler = GHandler::getHandler();
            _RAX = *(_QWORD *)center.v;
            searchParam.localClientNum = LOCAL_CLIENT_INVALID;
            __asm
            {
              vmovss  [rbp+7A0h+searchParam.bulletRange], xmm9
              vmovss  [rbp+7A0h+searchParam.maxDot], xmm11
              vmovss  xmm0, dword ptr [rax]
              vmovss  xmm1, dword ptr [rax+4]
              vmovss  dword ptr [rbp+7A0h+searchParam.bulletStart], xmm0
              vmovss  xmm0, dword ptr [rax+8]
            }
            _RAX = v102;
            __asm
            {
              vmovss  dword ptr [rbp+7A0h+searchParam.bulletStart+4], xmm1
              vmovss  dword ptr [rbp+7A0h+searchParam.bulletStart+8], xmm0
              vmovss  xmm1, dword ptr [rax]
              vmovss  xmm0, dword ptr [rax+4]
              vmovss  dword ptr [rbp+7A0h+searchParam.bulletDir], xmm1
              vmovss  xmm1, dword ptr [rax+8]
            }
            searchParam.hitLocMask = hitLocMask;
            searchParam.isFiring = isFiring;
            __asm
            {
              vmovss  dword ptr [rbp+7A0h+searchParam.bulletDir+4], xmm0
              vmovss  dword ptr [rbp+7A0h+searchParam.bulletDir+8], xmm1
            }
            if ( BgTargetAssist::FindBonesWithinCone(v29, &searchParam, &outSearchResults) )
            {
              _RCX = v104;
              v51 = 6i64;
              _RDX = &outSearchResults;
              do
              {
                _RCX += 128;
                __asm
                {
                  vmovups ymm0, ymmword ptr [rdx]
                  vmovups xmm1, xmmword ptr [rdx+70h]
                }
                _RDX = (ConeTargetHitResults *)((char *)_RDX + 128);
                __asm
                {
                  vmovups ymmword ptr [rcx-80h], ymm0
                  vmovups ymm0, ymmword ptr [rdx-60h]
                  vmovups ymmword ptr [rcx-60h], ymm0
                  vmovups ymm0, ymmword ptr [rdx-40h]
                  vmovups ymmword ptr [rcx-40h], ymm0
                  vmovups xmm0, xmmword ptr [rdx-20h]
                  vmovups xmmword ptr [rcx-20h], xmm0
                  vmovups xmmword ptr [rcx-10h], xmm1
                }
                --v51;
              }
              while ( v51 );
              __asm { vmovups ymm0, ymmword ptr [rdx] }
              v59 = *(_QWORD *)&_RDX->hits[0].tagName;
              __asm
              {
                vmovups ymmword ptr [rcx], ymm0
                vmovups xmm0, xmmword ptr [rdx+20h]
                vmovups xmmword ptr [rcx+20h], xmm0
              }
              *((_QWORD *)_RCX + 6) = v59;
              *((_DWORD *)_RCX + 14) = _RDX->hits[0].modelIndex;
              _RCX = ConeTargetInfo::GetHitResults(&inOutTargetArray->m_data[v27]);
              _RDX = v104;
              v63 = 6i64;
              do
              {
                _RCX = (ConeTargetHitResults *)((char *)_RCX + 128);
                __asm
                {
                  vmovups ymm0, ymmword ptr [rdx]
                  vmovups xmm1, xmmword ptr [rdx+70h]
                }
                _RDX += 128;
                __asm
                {
                  vmovups ymmword ptr [rcx-80h], ymm0
                  vmovups ymm0, ymmword ptr [rdx-60h]
                  vmovups ymmword ptr [rcx-60h], ymm0
                  vmovups ymm0, ymmword ptr [rdx-40h]
                  vmovups ymmword ptr [rcx-40h], ymm0
                  vmovups xmm0, xmmword ptr [rdx-20h]
                  vmovups xmmword ptr [rcx-20h], xmm0
                  vmovups xmmword ptr [rcx-10h], xmm1
                }
                --v63;
              }
              while ( v63 );
              __asm { vmovups ymm0, ymmword ptr [rdx] }
              v70 = *((_QWORD *)_RDX + 6);
              v71 = v101;
              __asm
              {
                vmovups ymmword ptr [rcx], ymm0
                vmovups xmm0, xmmword ptr [rdx+20h]
                vmovups xmmword ptr [rcx+20h], xmm0
              }
              *(_QWORD *)&_RCX->hits[0].tagName = v70;
              _RCX->hits[0].modelIndex = *((_DWORD *)_RDX + 14);
              if ( v71 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              *p_m_target = (gentity_s *)_RBX;
              ++v27;
              v101 = v71 + 1;
              p_m_target += 106;
            }
          }
        }
        v22 = v99;
        if ( v30 == 0x7FFFFFFF )
          break;
        v30 = v29->FindNextTarget(v29, LOCAL_CLIENT_INVALID, v99->s.number, v30, gameTime, &v97);
        _RBX = &g_entities[v97];
      }
      while ( _RBX );
      v23 = v102;
      v21 = *(const vec3_t **)center.v;
      __asm
      {
        vmovaps xmm8, [rsp+8A0h+var_68+8]
        vmovaps xmm7, [rsp+8A0h+var_58+8]
        vmovaps xmm6, xmmword ptr [rsp+8A0h+var_48+8]
      }
    }
  }
  v76 = DVARINT_g_debugBullets;
  __asm { vmovaps xmm11, [rsp+8A0h+var_98+8] }
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v76);
  if ( v76->current.integer == 2 )
    goto LABEL_37;
  v78 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v78);
  if ( v78->current.integer == 3 )
    goto LABEL_37;
  v79 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v79);
  if ( v79->current.integer == 4 )
  {
LABEL_37:
    __asm
    {
      vmulss  xmm1, xmm9, dword ptr [r14]
      vaddss  xmm2, xmm1, dword ptr [r13+0]
      vmulss  xmm1, xmm9, dword ptr [r14+4]
      vmovss  dword ptr [rbp+7A0h+center], xmm2
      vaddss  xmm2, xmm1, dword ptr [r13+4]
      vmulss  xmm1, xmm9, dword ptr [r14+8]
      vmovss  dword ptr [rbp+7A0h+center+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [r13+8]
      vmovaps xmm0, xmm10; X
      vmovss  dword ptr [rbp+7A0h+center+8], xmm2
    }
    *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
    __asm { vmulss  xmm1, xmm0, xmm9; radius }
    G_DebugCircleEx(&center, *(float *)&_XMM1, v23, &colorBlue, 0, 100);
  }
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(v22);
  __asm { vmovaps xmm10, [rsp+8A0h+var_88+8] }
  v90 = EntityPlayerStateConst;
  __asm { vmovaps xmm9, [rsp+8A0h+var_78+8] }
  if ( EntityPlayerStateConst )
  {
    Handler = GHandler::getHandler();
    WorldUpReferenceFrame::WorldUpReferenceFrame(&axis, v90, Handler);
    p_m_axis = &axis.m_axis;
  }
  else
  {
    MatrixIdentity33((tmat33_t<vec3_t> *)&axis);
    p_m_axis = (tmat33_t<vec3_t> *)&axis;
  }
  GenerateAxisFromForwardVector(v23, p_m_axis, &outAxis);
  attackerEntNum = v22->s.number;
  v95 = GHandler::getHandler();
  return BgTargetAssist::EvaluateTargetsWithinCone<GAssistTarget>(v29, v95, r_weapona, v98, inOutTargetArray, v27, &outAxis, v21, maxTargets, attackerEntNum, PHYSICS_WORLD_ID_SERVER_DETAIL, isFiring);
}

/*
==============
GConeTargetEvaluator::EvaluateTarget
==============
*/

bool __fastcall GConeTargetEvaluator::EvaluateTarget(GConeTargetEvaluator *this, const GAssistTarget *assistTarget, const vec3_t *bulletStart, double range, vec3_t *outBulletEnd, vec3_t *outBulletDir)
{
  ConeTargetHitResults *HitResults; 
  ConeTargetHitResults *v15; 
  __int128 v46; 
  char v49; 

  _RBP = outBulletEnd;
  _RSI = outBulletDir;
  __asm
  {
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm3
  }
  if ( !assistTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2073, ASSERT_TYPE_ASSERT, "(assistTarget)", (const char *)&queryFormat, "assistTarget", v46) )
    __debugbreak();
  HitResults = (ConeTargetHitResults *)ConeTargetInfo::GetHitResults(&assistTarget->ConeTargetInfo);
  _RAX = ConeTargetHitResults::GetFirstVisibleHit(HitResults);
  if ( _RAX )
  {
    __asm
    {
      vmovaps [rsp+68h+var_18], xmm6
      vmovaps [rsp+68h+var_28], xmm7
    }
    v15 = (ConeTargetHitResults *)ConeTargetInfo::GetHitResults(&assistTarget->ConeTargetInfo);
    _RAX = ConeTargetHitResults::GetFirstVisibleHit(v15);
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vsubss  xmm5, xmm0, dword ptr [rdi]
      vmovss  xmm1, dword ptr [rax+4]
      vsubss  xmm6, xmm1, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [rax+8]
      vsubss  xmm7, xmm0, dword ptr [rdi+8]
      vmulss  xmm0, xmm7, xmm7
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm2, xmm6
      vmovaps xmm6, [rsp+68h+var_18]
    }
    LOBYTE(_RAX) = 1;
    __asm
    {
      vmovss  dword ptr [rsi+4], xmm0
      vmulss  xmm1, xmm2, xmm7
      vmovaps xmm7, [rsp+68h+var_28]
      vmovss  dword ptr [rsi+8], xmm1
      vmulss  xmm3, xmm2, xmm5
      vmovss  dword ptr [rsi], xmm3
      vmulss  xmm0, xmm3, xmm8
      vaddss  xmm2, xmm0, dword ptr [rdi]
      vmovss  dword ptr [rbp+0], xmm2
      vmulss  xmm0, xmm8, dword ptr [rsi+4]
      vaddss  xmm1, xmm0, dword ptr [rdi+4]
      vmovss  dword ptr [rbp+4], xmm1
      vmulss  xmm0, xmm8, dword ptr [rsi+8]
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rbp+8], xmm1
    }
  }
  _R11 = &v49;
  __asm { vmovaps xmm8, xmmword ptr [r11-30h] }
  return (char)_RAX;
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
  char v16; 
  char v17; 
  int v28; 

  _RSI = attacker;
  if ( attacker )
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(attacker);
  else
    EntityPlayerStateConst = NULL;
  if ( !victim || victim->s.eType != ET_PLAYER && victim->s.eType != ET_AGENT && victim->s.eType != ET_ACTOR || !EntityPlayerStateConst || GameModeFlagValues::ms_mpValue == ACTIVE && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->otherFlags, ACTIVE, 0x22u) )
    return 0xFFFFFFFFi64;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+130h]
    vmovss  xmm1, dword ptr [rsi+134h]
    vmovaps [rsp+78h+var_28], xmm6
    vsubss  xmm6, xmm0, dword ptr [rbx+130h]
    vmovss  xmm0, dword ptr [rsi+138h]
    vmovaps [rsp+78h+var_38], xmm7
    vsubss  xmm7, xmm1, dword ptr [rbx+134h]
    vmovaps [rsp+78h+var_48], xmm8
    vsubss  xmm8, xmm0, dword ptr [rbx+138h]
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_bulletHitImpactSoundSpeed, "bg_bulletHitImpactSoundSpeed");
  __asm
  {
    vcvtss2sd xmm1, xmm0, xmm0
    vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v16 | v17 )
  {
    _EBX = 0;
  }
  else
  {
    __asm
    {
      vmulss  xmm2, xmm7, xmm7
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm1, cs:__real@447a0000
      vmulss  xmm2, xmm8, xmm8
      vaddss  xmm3, xmm3, xmm2
      vsqrtss xmm4, xmm3, xmm3
      vdivss  xmm0, xmm1, xmm0
      vmulss  xmm2, xmm4, xmm0
      vcvttss2si ebx, xmm2
    }
    if ( _EBX < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2991, ASSERT_TYPE_ASSERT, "(timeToVictimMs >= 0)", (const char *)&queryFormat, "timeToVictimMs >= 0") )
      __debugbreak();
  }
  v28 = level.time - EntityPlayerStateConst->serverTime;
  __asm
  {
    vmovaps xmm8, [rsp+78h+var_48]
    vmovaps xmm7, [rsp+78h+var_38]
    vmovaps xmm6, [rsp+78h+var_28]
  }
  if ( v28 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2994, ASSERT_TYPE_ASSERT, "(viewDelay >= 0)", (const char *)&queryFormat, "viewDelay >= 0") )
    __debugbreak();
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_bg_bulletHitImpactLagCompensation, "bg_bulletHitImpactLagCompensation") )
  {
    _EBX -= v28;
    if ( _EBX < 0 )
      return 0;
  }
  return (unsigned int)_EBX;
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
  const DObj *ServerDObjForEnt; 
  const DObj *v16; 
  char v25; 
  unsigned __int8 v64; 
  unsigned __int8 v69; 
  unsigned __int8 v71; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t v82; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v85; 

  _RSI = hitClient;
  if ( !hitClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2743, ASSERT_TYPE_ASSERT, "( hitClient )", (const char *)&queryFormat, "hitClient") )
    __debugbreak();
  if ( !outHitInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2744, ASSERT_TYPE_ASSERT, "( outHitInfo )", (const char *)&queryFormat, "outHitInfo") )
    __debugbreak();
  if ( !partName )
    return 0;
  ServerDObjForEnt = Com_GetServerDObjForEnt(_RSI);
  v16 = ServerDObjForEnt;
  if ( !ServerDObjForEnt )
    return 0;
  inOutIndex[0] = -2;
  if ( !DObjGetBoneIndexInternal_20(ServerDObjForEnt, partName, inOutIndex, &modelIndex) )
    return 0;
  __asm
  {
    vmovaps [rsp+160h+var_40], xmm6
    vmovaps [rsp+160h+var_50], xmm7
    vmovaps [rsp+160h+var_60], xmm8
    vmovaps [rsp+160h+var_70], xmm9
    vmovaps [rsp+160h+var_80], xmm10
    vmovaps [rsp+160h+var_90], xmm11
    vmovaps [rsp+160h+var_A0], xmm12
  }
  if ( inOutIndex[0] == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2757, ASSERT_TYPE_ASSERT, "( boneIndex != 255 )", (const char *)&queryFormat, "boneIndex != NO_BONEINDEX") )
    __debugbreak();
  _RDI = DObjGetBoneInfoForBoneIndex(v16, inOutIndex[0]);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2760, ASSERT_TYPE_ASSERT, "( boneInfo )", (const char *)&queryFormat, "boneInfo") )
    __debugbreak();
  _RBX = G_Utils_DObjGetLocalBoneIndexMatrix(_RSI, inOutIndex[0]);
  AnglesToAxis(&_RSI->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+130h]
    vmovss  xmm1, dword ptr [rsi+134h]
    vmovss  [rsp+160h+var_E4], xmm0
    vmovss  xmm0, dword ptr [rsi+138h]
    vmovss  [rbp+60h+var_DC], xmm0
    vmovss  [rbp+60h+var_E0], xmm1
  }
  MatrixTransposeTransformVector43(hitPoint, &axis, &out);
  QuatToAxis(&_RBX->quat, (tmat33_t<vec3_t> *)&v85);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  [rbp+60h+var_B4], xmm0
    vmovss  xmm1, dword ptr [rbx+14h]
    vmovss  [rbp+60h+var_B0], xmm1
    vmovss  xmm0, dword ptr [rbx+18h]
    vmovss  [rbp+60h+var_AC], xmm0
  }
  MatrixTransposeTransformVector43(&out, &v85, &v82);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+160h+var_128+4]
    vmovss  xmm0, dword ptr [rsp+160h+var_128]
    vsubss  xmm3, xmm1, dword ptr [rdi+4]
    vmovss  xmm1, dword ptr [rdi+0Ch]
    vsubss  xmm2, xmm0, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rsp+160h+var_128+8]
    vsubss  xmm4, xmm0, dword ptr [rdi+8]
    vxorps  xmm11, xmm11, xmm11
    vucomiss xmm1, xmm11
  }
  if ( v25 )
    __asm { vxorps  xmm1, xmm1, xmm1 }
  else
    __asm { vdivss  xmm1, xmm2, xmm1 }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+10h]
    vucomiss xmm0, xmm11
  }
  if ( v25 )
    __asm { vxorps  xmm9, xmm9, xmm9 }
  else
    __asm { vdivss  xmm9, xmm3, xmm0 }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+14h]
    vucomiss xmm0, xmm11
  }
  if ( v25 )
    __asm { vxorps  xmm12, xmm12, xmm12 }
  else
    __asm { vdivss  xmm12, xmm4, xmm0 }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm10, cs:__real@3f000000
    vaddss  xmm0, xmm1, xmm7
    vmulss  xmm0, xmm0, xmm10; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm6, cs:__real@437f0000
    vmulss  xmm8, xmm0, xmm6
    vaddss  xmm0, xmm9, xmm7
    vmulss  xmm0, xmm0, xmm10; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vaddss  xmm3, xmm12, xmm7
    vmulss  xmm9, xmm0, xmm6
    vmulss  xmm0, xmm3, xmm10; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm6
    vaddss  xmm2, xmm1, xmm10
    vxorps  xmm1, xmm1, xmm1
    vaddss  xmm0, xmm8, xmm10
    vroundss xmm1, xmm1, xmm0, 1
    vxorps  xmm6, xmm6, xmm6
    vcvttss2si rcx, xmm1; val
    vroundss xmm6, xmm6, xmm2, 1
  }
  v64 = truncate_cast<unsigned char,unsigned int>(_RCX);
  __asm
  {
    vaddss  xmm0, xmm9, xmm10
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm0, 1
    vcvttss2si rcx, xmm1; val
  }
  *((_BYTE *)outHitInfo + 1) = v64;
  v69 = truncate_cast<unsigned char,unsigned int>(_RCX);
  __asm { vcvttss2si rcx, xmm6; val }
  *((_BYTE *)outHitInfo + 2) = v69;
  v71 = truncate_cast<unsigned char,unsigned int>(_RCX);
  __asm
  {
    vmovaps xmm12, [rsp+160h+var_A0]
    vmovaps xmm11, [rsp+160h+var_90]
    vmovaps xmm10, [rsp+160h+var_80]
    vmovaps xmm9, [rsp+160h+var_70]
    vmovaps xmm8, [rsp+160h+var_60]
    vmovaps xmm7, [rsp+160h+var_50]
    vmovaps xmm6, [rsp+160h+var_40]
  }
  *((_BYTE *)outHitInfo + 3) = v71;
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
int G_Bullet_CalculateLinearDamage(const WeaponDamageCalcType damageCalcType, const BulletFireParams *bp, const BulletTraceResults *br, const Weapon *weapon, bool isAlternate)
{
  const dvar_t *v13; 
  char v15; 
  bool v16; 
  bool v21; 
  int result; 
  float *maxDamageRange; 
  float minDamageRange[4]; 
  float v46; 
  int outMaxDamage; 
  int outMinDamage; 

  _R14 = bp;
  if ( (unsigned int)damageCalcType >= WEAP_DMG_CALC_TYPE_NUM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 215, ASSERT_TYPE_ASSERT, "(unsigned)( damageCalcType ) < (unsigned)( WEAP_DMG_CALC_TYPE_NUM )", "damageCalcType doesn't index WEAP_DMG_CALC_TYPE_NUM\n\t%i not in [0, %i)", damageCalcType, 3) )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 226, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 227, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( br->trace.hitType == TRACE_HITTYPE_BEGIN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 228, ASSERT_TYPE_ASSERT, "( br->trace.hitType != TRACE_HITTYPE_NONE )", (const char *)&queryFormat, "br->trace.hitType != TRACE_HITTYPE_NONE") )
    __debugbreak();
  BG_GetMinMaxDamage(damageCalcType, weapon, isAlternate, &outMinDamage, &outMaxDamage);
  if ( outMaxDamage != outMinDamage )
  {
    v13 = DVARBOOL_bg_bulletsUseMaxDamageMinRange;
    if ( !DVARBOOL_bg_bulletsUseMaxDamageMinRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bulletsUseMaxDamageMinRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( !v13->current.enabled || BG_GetWeaponClass(weapon, isAlternate) == WEAPCLASS_SPREAD )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [r14+48h]; rangeScale
        vmovaps [rsp+0A8h+var_38], xmm6
      }
      BG_GetDamageRange(damageCalcType, weapon, isAlternate, *(float *)&_XMM3, minDamageRange, &v46);
      __asm
      {
        vmovss  xmm0, [rsp+0A8h+arg_0]
        vmovss  xmm6, dword ptr [r14+8Ch]
        vcomiss xmm6, xmm0
      }
      if ( !v15 )
      {
        __asm
        {
          vmovss  xmm1, [rsp+0A8h+minDamageRange]
          vcomiss xmm6, xmm1
        }
        if ( v15 )
        {
          __asm
          {
            vmovaps [rsp+0A8h+var_48], xmm7
            vmovaps [rsp+0A8h+var_58], xmm8
            vxorps  xmm8, xmm8, xmm8
            vsubss  xmm7, xmm1, xmm0
            vucomiss xmm7, xmm8
          }
          if ( v16 )
          {
            v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 247, ASSERT_TYPE_ASSERT, "(range != 0.0f)", (const char *)&queryFormat, "range != 0.0f");
            v15 = 0;
            v16 = !v21;
            if ( v21 )
              __debugbreak();
            __asm { vmovss  xmm0, [rsp+0A8h+arg_0] }
          }
          __asm
          {
            vsubss  xmm0, xmm6, xmm0
            vdivss  xmm6, xmm0, xmm7
            vmovss  xmm7, cs:__real@3f800000
            vcomiss xmm6, xmm8
            vmovaps xmm8, [rsp+0A8h+var_58]
            vcomiss xmm6, xmm7
          }
          if ( !(v15 | v16) )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm6, xmm6
              vmovsd  [rsp+0A8h+maxDamageRange], xmm0
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 249, ASSERT_TYPE_ASSERT, "( ( (lerpAmount >= 0.0) && (lerpAmount <= 1.0) ) )", "( lerpAmount ) = %g", *(double *)&maxDamageRange) )
              __debugbreak();
          }
          __asm
          {
            vsubss  xmm1, xmm7, xmm6
            vmovaps xmm7, [rsp+0A8h+var_48]
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, [rsp+0A8h+outMaxDamage]
            vmulss  xmm3, xmm1, xmm0
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, [rsp+0A8h+outMinDamage]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm0, xmm3, xmm2
            vcvttss2si ebx, xmm0
          }
        }
      }
      __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vmulss  xmm0, xmm0, dword ptr [r14+4Ch]
    vcvttss2si eax, xmm0
  }
  return result;
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
      _RAX = Com_TeamsSP_GetAllTeamFlags();
    else
      _RAX = Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsp+0A8h+teamFlags.array], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rsp+0A8h+teamFlags.array+10h], xmm1
    }
    teamFlags.array[6] = _RAX->array[6];
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
  unsigned int v15; 
  __int64 v18; 
  int v21; 
  int v22; 
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
          _RAX = Com_TeamsSP_GetAllTeamFlags();
        else
          _RAX = Com_TeamsMP_GetAllTeamFlags();
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rsp+0C8h+teamFlags.array], xmm0
          vmovsd  xmm1, qword ptr [rax+10h]
          vmovsd  qword ptr [rsp+0C8h+teamFlags.array+10h], xmm1
        }
        teamFlags.array[6] = _RAX->array[6];
        if ( (unsigned int)eTeam >= 0xE0 )
        {
          v22 = 224;
          v21 = eTeam;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v21, v22) )
            __debugbreak();
        }
        teamFlags.array[eTeam >> 5] &= ~(0x80000000 >> (eTeam & 0x1F));
        if ( s_bulletDeferNotifyActors )
        {
          v15 = s_bulletNumDeferredGlassNotifies;
          if ( s_bulletNumDeferredGlassNotifies < 0x20 )
            goto LABEL_20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 479, ASSERT_TYPE_ASSERT, "(s_bulletNumDeferredGlassNotifies < MAX_DEFERRED_BULLET_GLASS_NOTIFIES)", (const char *)&queryFormat, "s_bulletNumDeferredGlassNotifies < MAX_DEFERRED_BULLET_GLASS_NOTIFIES") )
            __debugbreak();
          v15 = s_bulletNumDeferredGlassNotifies;
          if ( s_bulletNumDeferredGlassNotifies < 0x20 )
          {
LABEL_20:
            __asm
            {
              vmovups xmm0, xmmword ptr [rsp+0C8h+teamFlags.array]
              vmovsd  xmm1, qword ptr [rsp+0C8h+teamFlags.array+10h]
            }
            s_bulletNumDeferredGlassNotifies = v15 + 1;
            v18 = v15;
            _RDX = s_bulletDeferredGlassNotifies;
            _RCX = v18;
            LODWORD(v18) = teamFlags.array[6];
            __asm
            {
              vmovups xmmword ptr [rcx+rdx+0Ch], xmm0
              vmovsd  qword ptr [rcx+rdx+1Ch], xmm1
            }
            s_bulletDeferredGlassNotifies[_RCX].teamFlags.array[6] = v18;
            s_bulletDeferredGlassNotifies[_RCX].originator = attacker;
            s_bulletDeferredGlassNotifies[_RCX].eType = AI_EV_GLASS_DESTROYED;
            s_bulletDeferredGlassNotifies[_RCX].vOrigin.v[0] = br->hitPos.v[0];
            s_bulletDeferredGlassNotifies[_RCX].vOrigin.v[1] = br->hitPos.v[1];
            s_bulletDeferredGlassNotifies[_RCX].vOrigin.v[2] = br->hitPos.v[2];
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
  const dvar_t *v5; 
  const dvar_t *v6; 
  unsigned int v7; 
  const dvar_t *v10; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  DObjPartBits partBits; 

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
    _RDI = &partBits;
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovdqu xmm6, cs:__xmm@ffffffffffffffffffffffffffffffff
    }
    do
    {
      __asm { vmovdqu xmmword ptr [rdi], xmm6 }
      _RDI = (DObjPartBits *)((char *)_RDI + 16);
      ++v7;
    }
    while ( v7 < 2 );
    G_Utils_DObjCalcPose(br->hitEnt, &partBits);
    v10 = DVARINT_g_debugLocHitTime;
    __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
    if ( !DVARINT_g_debugLocHitTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugLocHitTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    SV_Game_XModelDebugBoxes(br->hitEnt, &colorYellow, v10->current.integer);
    v12 = DVARINT_g_debugLocHitTime;
    if ( !DVARINT_g_debugLocHitTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugLocHitTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    CL_AddDebugLine(&bp->start, &br->hitPos, &colorGreen, 0, v12->current.integer, 1);
    v13 = DVARINT_g_debugLocHitTime;
    if ( !DVARINT_g_debugLocHitTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugLocHitTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    CL_AddDebugStar(&br->hitPos, &colorRed, 0, v13->current.integer, 1);
  }
}

/*
==============
G_Bullet_Endpos
==============
*/

void __fastcall G_Bullet_Endpos(unsigned int *randSeed, double spreadMin, double spreadMax, vec3_t *end, vec3_t *dir, float angleMin, float angleMax, const BgWeaponParms *wp, float maxRange)
{
  bool v26; 
  bool v27; 
  int v62; 
  const dvar_t *v63; 
  const dvar_t *v64; 
  const dvar_t *v90; 
  const dvar_t *v91; 
  const dvar_t *v92; 
  float v104; 
  double v133; 
  double v134; 
  float s; 
  float c; 
  vec3_t enda; 
  char v139; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rsp+0F0h+var_88+8], xmm11
  }
  _R15 = dir;
  _RBX = wp;
  _RDI = end;
  __asm
  {
    vmovss  [rbp+37h+c], xmm1
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
  }
  if ( (LODWORD(c) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 134, ASSERT_TYPE_SANITY, "( !IS_NAN( spreadMin ) )", (const char *)&queryFormat, "!IS_NAN( spreadMin )") )
    __debugbreak();
  __asm { vmovss  [rbp+37h+c], xmm6 }
  if ( (LODWORD(c) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 135, ASSERT_TYPE_SANITY, "( !IS_NAN( spreadMax ) )", (const char *)&queryFormat, "!IS_NAN( spreadMax )") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 141, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  __asm { vmulss  xmm0, xmm7, cs:__real@3c8efa35; X }
  *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm7, [rbp+37h+maxRange]
    vmulss  xmm8, xmm0, xmm7
    vmulss  xmm0, xmm6, cs:__real@3c8efa35; X
  }
  *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  [rbp+37h+c], xmm8
    vmulss  xmm11, xmm0, xmm7
  }
  if ( (LODWORD(c) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 151, ASSERT_TYPE_SANITY, "( !IS_NAN( aimOffsetMin ) )", (const char *)&queryFormat, "!IS_NAN( aimOffsetMin )") )
    __debugbreak();
  __asm { vmovss  [rbp+37h+c], xmm11 }
  v26 = (LODWORD(c) & 0x7F800000u) <= 0x7F800000;
  if ( (LODWORD(c) & 0x7F800000) == 2139095040 )
  {
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 152, ASSERT_TYPE_SANITY, "( !IS_NAN( aimOffsetMax ) )", (const char *)&queryFormat, "!IS_NAN( aimOffsetMax )");
    v26 = !v27;
    if ( v27 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, [rbp+37h+angleMin]
    vmovss  xmm9, [rbp+37h+angleMax]
    vcomiss xmm6, xmm9
  }
  if ( !v26 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm9, xmm9
      vmovsd  [rsp+0F0h+var_B0], xmm0
      vcvtss2sd xmm1, xmm6, xmm6
      vmovsd  [rsp+0F0h+var_B8], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 105, ASSERT_TYPE_ASSERT, "( angleMin ) <= ( angleMax )", "%s <= %s\n\t%g, %g", "angleMin", "angleMax", v133, v134) )
      __debugbreak();
  }
  *(double *)&_XMM0 = BG_random(randSeed);
  __asm
  {
    vsubss  xmm1, xmm9, xmm6
    vmulss  xmm0, xmm0, xmm1
    vaddss  xmm0, xmm0, xmm6; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  BG_random(randSeed);
  __asm
  {
    vmulss  xmm2, xmm8, [rbp+37h+c]
    vsubss  xmm5, xmm11, xmm8
    vmulss  xmm1, xmm5, [rbp+37h+c]
    vmulss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm5, [rbp+37h+s]
    vaddss  xmm9, xmm3, xmm2
    vmulss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm8, [rbp+37h+s]
    vmovss  [rbp+37h+s], xmm9
    vaddss  xmm8, xmm2, xmm0
  }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 164, ASSERT_TYPE_SANITY, "( !IS_NAN( right ) )", (const char *)&queryFormat, "!IS_NAN( right )") )
    __debugbreak();
  __asm { vmovss  [rbp+37h+s], xmm8 }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 165, ASSERT_TYPE_SANITY, "( !IS_NAN( up ) )", (const char *)&queryFormat, "!IS_NAN( up )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+24h]
    vmovss  [rbp+37h+s], xmm0
  }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
    goto LABEL_85;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  [rbp+37h+s], xmm0
  }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
    goto LABEL_85;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+2Ch]
    vmovss  [rbp+37h+s], xmm0
  }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
  {
LABEL_85:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 166, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp->muzzleTrace )[0] ) && !IS_NAN( ( wp->muzzleTrace )[1] ) && !IS_NAN( ( wp->muzzleTrace )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp->muzzleTrace )[0] ) && !IS_NAN( ( wp->muzzleTrace )[1] ) && !IS_NAN( ( wp->muzzleTrace )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rbp+37h+s], xmm0
  }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
    goto LABEL_86;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rbp+37h+s], xmm0
  }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
    goto LABEL_86;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rbp+37h+s], xmm0
  }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
  {
LABEL_86:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 167, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp->forward )[0] ) && !IS_NAN( ( wp->forward )[1] ) && !IS_NAN( ( wp->forward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp->forward )[0] ) && !IS_NAN( ( wp->forward )[1] ) && !IS_NAN( ( wp->forward )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rbp+37h+s], xmm0
  }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
    goto LABEL_87;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  [rbp+37h+s], xmm0
  }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
    goto LABEL_87;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  [rbp+37h+s], xmm0
  }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
  {
LABEL_87:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 168, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp->right )[0] ) && !IS_NAN( ( wp->right )[1] ) && !IS_NAN( ( wp->right )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp->right )[0] ) && !IS_NAN( ( wp->right )[1] ) && !IS_NAN( ( wp->right )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18h]
    vmovss  [rbp+37h+s], xmm0
  }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
    goto LABEL_88;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  [rbp+37h+s], xmm0
  }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
    goto LABEL_88;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+20h]
    vmovss  [rbp+37h+s], xmm0
  }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
  {
LABEL_88:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 169, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp->up )[0] ) && !IS_NAN( ( wp->up )[1] ) && !IS_NAN( ( wp->up )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp->up )[0] ) && !IS_NAN( ( wp->up )[1] ) && !IS_NAN( ( wp->up )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm7, dword ptr [rbx]
    vaddss  xmm1, xmm0, dword ptr [rbx+24h]
    vmovss  dword ptr [rdi], xmm1
    vmulss  xmm0, xmm7, dword ptr [rbx+4]
    vaddss  xmm2, xmm0, dword ptr [rbx+28h]
    vmovss  dword ptr [rdi+4], xmm2
    vmulss  xmm0, xmm7, dword ptr [rbx+8]
    vaddss  xmm3, xmm0, dword ptr [rbx+2Ch]
    vmovss  [rbp+37h+s], xmm1
  }
  v62 = LODWORD(s) & 0x7F800000;
  __asm { vmovss  dword ptr [rdi+8], xmm3 }
  if ( v62 == 2139095040 )
    goto LABEL_89;
  __asm { vmovss  [rbp+37h+s], xmm2 }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
    goto LABEL_89;
  __asm { vmovss  [rbp+37h+s], xmm3 }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
  {
LABEL_89:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 176, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  v63 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v63);
  if ( v63->current.integer == 3 )
    goto LABEL_58;
  v64 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v64);
  if ( v64->current.integer == 4 )
  {
LABEL_58:
    __asm
    {
      vmulss  xmm0, xmm11, dword ptr [rbx+0Ch]
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmulss  xmm0, xmm11, dword ptr [rbx+10h]
      vmovss  dword ptr [rbp+37h+end], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+4]
      vmulss  xmm0, xmm11, dword ptr [rbx+14h]
      vmovss  dword ptr [rbp+37h+end+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rbp+37h+end+8], xmm1
    }
    G_DebugLineWithDuration(&wp->muzzleTrace, &enda, &colorBlue, 1, 100);
    __asm
    {
      vxorps  xmm6, xmm11, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm6, dword ptr [rbx+0Ch]
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmulss  xmm0, xmm6, dword ptr [rbx+10h]
      vmovss  dword ptr [rbp+37h+end], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+4]
      vmulss  xmm0, xmm6, dword ptr [rbx+14h]
      vmovss  dword ptr [rbp+37h+end+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rbp+37h+end+8], xmm1
    }
    G_DebugLineWithDuration(&wp->muzzleTrace, &enda, &colorBlue, 1, 100);
    __asm
    {
      vmulss  xmm0, xmm11, dword ptr [rbx+18h]
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmulss  xmm0, xmm11, dword ptr [rbx+1Ch]
      vmovss  dword ptr [rbp+37h+end], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+4]
      vmulss  xmm0, xmm11, dword ptr [rbx+20h]
      vmovss  dword ptr [rbp+37h+end+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rbp+37h+end+8], xmm1
    }
    G_DebugLineWithDuration(&wp->muzzleTrace, &enda, &colorBlue, 1, 100);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rbx+18h]
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmulss  xmm0, xmm6, dword ptr [rbx+1Ch]
      vmovss  dword ptr [rbp+37h+end], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+4]
      vmulss  xmm0, xmm6, dword ptr [rbx+20h]
      vmovss  dword ptr [rbp+37h+end+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rbp+37h+end+8], xmm1
    }
    G_DebugLineWithDuration(&wp->muzzleTrace, &enda, &colorBlue, 1, 100);
  }
  v90 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v90);
  if ( v90->current.integer == 2 )
    goto LABEL_71;
  v91 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v91);
  if ( v91->current.integer == 3 )
    goto LABEL_71;
  v92 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v92);
  if ( v92->current.integer == 4 )
  {
LABEL_71:
    __asm { vmovaps xmm1, xmm11; radius }
    G_DebugCircleEx(_RDI, *(float *)&_XMM1, &wp->forward, &colorBlue, 1, 100);
  }
  __asm
  {
    vmulss  xmm0, xmm9, dword ptr [rbx+0Ch]
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm1
    vmulss  xmm0, xmm9, dword ptr [rbx+10h]
    vaddss  xmm2, xmm0, dword ptr [rdi+4]
    vmovss  dword ptr [rdi+4], xmm2
    vmulss  xmm0, xmm9, dword ptr [rbx+14h]
    vaddss  xmm3, xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm3
    vmulss  xmm0, xmm8, dword ptr [rbx+18h]
    vaddss  xmm1, xmm0, xmm1
    vmovss  dword ptr [rdi], xmm1
    vmulss  xmm0, xmm8, dword ptr [rbx+1Ch]
    vaddss  xmm4, xmm0, xmm2
    vmovss  [rbp+37h+s], xmm1
  }
  v104 = s;
  __asm
  {
    vmovss  dword ptr [rdi+4], xmm4
    vmulss  xmm0, xmm8, dword ptr [rbx+20h]
    vaddss  xmm2, xmm0, xmm3
    vmovss  dword ptr [rdi+8], xmm2
  }
  if ( (LODWORD(v104) & 0x7F800000) == 2139095040 )
    goto LABEL_90;
  __asm { vmovss  [rbp+37h+s], xmm4 }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
    goto LABEL_90;
  __asm { vmovss  [rbp+37h+s], xmm2 }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
  {
LABEL_90:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 201, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm7, xmm0, dword ptr [rbx+24h]
    vmovss  dword ptr [r15], xmm7
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm6, xmm0, dword ptr [rbx+28h]
    vmovss  dword ptr [r15+4], xmm6
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm5, xmm0, dword ptr [rbx+2Ch]
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm7, xmm2
    vmovss  dword ptr [r15], xmm0
    vmulss  xmm1, xmm2, xmm6
    vmulss  xmm3, xmm5, xmm2
    vmovss  dword ptr [r15+4], xmm1
    vmovss  dword ptr [r15+8], xmm3
    vmovss  xmm0, dword ptr [r15]
    vmovss  [rbp+37h+s], xmm0
  }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
    goto LABEL_91;
  __asm { vmovss  [rbp+37h+s], xmm1 }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
    goto LABEL_91;
  __asm { vmovss  [rbp+37h+s], xmm3 }
  if ( (LODWORD(s) & 0x7F800000) == 2139095040 )
  {
LABEL_91:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 208, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dir )[0] ) && !IS_NAN( ( dir )[1] ) && !IS_NAN( ( dir )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dir )[0] ) && !IS_NAN( ( dir )[1] ) && !IS_NAN( ( dir )[2] )") )
      __debugbreak();
  }
  _R11 = &v139;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
  }
}

/*
==============
G_Bullet_Fire
==============
*/

int __fastcall G_Bullet_Fire(gentity_s *attacker, double spread, const BgWeaponParms *wp, const gentity_s *weaponEnt, PlayerHandIndex hand, const int gameTime)
{
  GWeaponFireParms params; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovups ymm0, ymmword ptr [r8] }
  memset(&params.136, 0, sizeof(params.136));
  __asm
  {
    vmovups ymmword ptr [rsp+118h+params.wp.forward], ymm0
    vmovups ymm0, ymmword ptr [r8+40h]
    vmovups ymmword ptr [rsp+118h+params.wp.weapDef], ymm0
    vmovsd  xmm0, qword ptr [r8+80h]
    vmovaps xmm3, xmm1; spread
    vmovups ymm1, ymmword ptr [r8+20h]
    vmovups ymmword ptr [rsp+118h+params.wp.up+8], ymm1
    vmovups ymm1, ymmword ptr [r8+60h]
    vmovups ymmword ptr [r11-78h], ymm1
    vmovsd  qword ptr [r11-58h], xmm0
  }
  G_Bullet_SetupFireParams(attacker, weaponEnt, gameTime, *(const float *)&_XMM3, 0, hand, 0, &params);
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
  PenetrateType v25; 
  bool v33; 
  int v35; 
  int v36; 
  gentity_s *LinkedBeamEntity; 
  int dFlags; 
  unsigned __int16 partGroup; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v42; 
  GBullet *BulletSystem; 
  bool v48; 
  bool v49; 
  const gentity_s *hitEnt; 
  gentity_s *v109; 
  GWeaponMap *Instance; 
  gentity_s *v111; 
  int number; 
  gentity_s *v113; 
  int v114; 
  gentity_s *v115; 
  __int64 result; 
  float fmt; 
  float fmta; 
  __int64 lastSurfaceType; 
  int lastSurfaceTypea; 
  int lastSurfaceTypeb; 
  float allowHitSelf; 
  float allowHitSelfa; 
  unsigned __int8 v151; 
  bool v152; 
  int v153; 
  int outImpactFlags; 
  const bitarray<64> *v156; 
  vec3_t resultNormal; 
  vec3_t start; 
  char v169; 

  __asm
  {
    vmovaps [rsp+198h+var_98], xmm10
    vmovaps [rsp+198h+var_A8], xmm11
    vmovaps [rsp+198h+var_B8], xmm12
    vmovaps [rsp+198h+var_C8], xmm13
    vmovaps [rsp+198h+var_D8], xmm14
    vmovaps [rsp+198h+var_E8], xmm15
  }
  _RDI = br;
  v156 = r_attackerPerks;
  _RSI = bp;
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1352, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1353, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1354, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  PenetrateType = BG_GetPenetrateType(weapon, isAlternate);
  v25 = PenetrateType;
  if ( (unsigned int)PenetrateType >= PENETRATE_TYPE_COUNT )
  {
    LODWORD(lastSurfaceType) = PenetrateType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1357, ASSERT_TYPE_ASSERT, "(unsigned)( penetrateType ) < (unsigned)( PENETRATE_TYPE_COUNT )", "penetrateType doesn't index PENETRATE_TYPE_COUNT\n\t%i not in [0, %i)", lastSurfaceType, 6) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+68h]
    vmovss  xmm1, dword ptr [rsi+6Ch]
    vmovss  xmm11, [rsp+198h+bulletRange]
    vmovss  xmm12, cs:__real@3e0a3d71
    vmovss  xmm13, cs:__real@3f000000
    vmovss  xmm14, cs:__real@c0000000
    vmovss  xmm15, cs:__real@40000000
    vmovaps [rsp+198h+var_58], xmm6
    vmovaps [rsp+198h+var_68], xmm7
  }
  v33 = v25 == PENETRATE_TYPE_RICOCHET;
  __asm { vmovaps [rsp+198h+var_78], xmm8 }
  v152 = v25 == PENETRATE_TYPE_RICOCHET;
  __asm
  {
    vmovss  dword ptr [rsp+198h+start], xmm0
    vmovss  xmm0, dword ptr [rsi+70h]
  }
  v35 = 0;
  v153 = 0;
  v36 = 0;
  v151 = 1;
  __asm
  {
    vmovss  dword ptr [rsp+198h+start+4], xmm1
    vmovss  dword ptr [rsp+198h+start+8], xmm0
    vxorps  xmm10, xmm10, xmm10
    vmovaps [rsp+198h+var_88], xmm9
  }
  while ( G_Bullet_Trace(_RSI, weapon, isAlternate, attacker, _RDI, 0, v35 > 0, gameTime) )
  {
    if ( !v36 && BG_IsBeamWeapon(weapon, isAlternate) )
    {
      LinkedBeamEntity = G_BeamEntity_GetLinkedBeamEntity(attacker);
      if ( !LinkedBeamEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1344, ASSERT_TYPE_ASSERT, "(beamEnt)", (const char *)&queryFormat, "beamEnt") )
        __debugbreak();
      G_BeamEntity_SetPos(LinkedBeamEntity, &_RDI->hitPos);
      v35 = v153;
    }
    if ( !_RSI->firstImpactOccurred )
    {
      G_Bullet_FirstImpactNotify(attacker, _RSI, _RDI, weapon, isAlternate);
      _RSI->firstImpactOccurred = 1;
    }
    dFlags = 256;
    if ( v35 <= 0 )
      dFlags = 0;
    if ( !G_Bullet_Process(randSeed, _RSI, _RDI, weapon, hand, isAlternate, attacker, dFlags, gameTime, &outImpactFlags, 1, initialSimStep) )
      goto LABEL_32;
    if ( (_RDI->trace.contents & 0x10) == 0 )
      goto LABEL_33;
    if ( Trace_GetGlassHitId(&_RDI->trace) )
      G_Bullet_DamageGlass(_RSI, _RDI, weapon, isAlternate, attacker);
    if ( (_RDI->trace.surfaceFlags & 0x100) != 0 )
      goto LABEL_32;
    if ( v33 )
    {
LABEL_33:
      partGroup = _RDI->trace.partGroup;
      if ( partGroup != 19 && (v42 = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)_RDI->hitEnt) != NULL && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v42 + 3, ACTIVE, 0x10u) )
      {
        if ( _RDI->ignoreHitEnt )
        {
          __asm { vmovaps xmm3, xmm10; dist }
          BG_AdvanceTrace(_RSI, &_RDI->trace, &_RDI->hitPos, *(float *)&_XMM3);
        }
        else
        {
          if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_bullet_penetration_enabled, "bullet_penetration_enabled") )
            goto LABEL_32;
          if ( !BG_IsRifleBullet(weapon, isAlternate) )
            goto LABEL_32;
          BulletSystem = GBullet::GetBulletSystem();
          if ( !BulletSystem->CheckFireExtendedAdvance(BulletSystem, _RDI, attacker) )
            goto LABEL_32;
          __asm
          {
            vmulss  xmm1, xmm13, dword ptr [rsi+4Ch]
            vmovaps xmm3, xmm10; dist
            vmovss  dword ptr [rsi+4Ch], xmm1
          }
          BG_AdvanceTrace(_RSI, &_RDI->trace, &_RDI->hitPos, *(float *)&_XMM3);
        }
      }
      else
      {
        if ( !v152 )
          goto LABEL_32;
        *(double *)&_XMM0 = BG_GetPenetrateMultiplier(weapon, isAlternate);
        __asm { vcvttss2si ebx, xmm0 }
        if ( _EBX >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1471, ASSERT_TYPE_ASSERT, "(weaponRicochetMax < 5)", (const char *)&queryFormat, "weaponRicochetMax < BULLET_MAX_RICOCHET") )
          __debugbreak();
        if ( v153 >= _EBX || !BG_WeaponBulletFire_ShouldRicochet(*v156, weapon, isAlternate) )
          goto LABEL_32;
        v48 = partGroup < 0x13u;
        v49 = partGroup == 19;
        if ( partGroup == 19 && (hitEnt = _RDI->hitEnt, v48 = 0, v49 = hitEnt == NULL, hitEnt) )
        {
          G_Weapon_GetShieldTagNormal(hitEnt, &resultNormal);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+198h+resultNormal+4]
            vmovss  xmm1, dword ptr [rsp+198h+resultNormal]
            vmulss  xmm2, xmm1, dword ptr [rsi+80h]
            vmulss  xmm3, xmm0, dword ptr [rsi+84h]
            vmovss  xmm0, dword ptr [rsp+198h+resultNormal+8]
            vmulss  xmm1, xmm0, dword ptr [rsi+88h]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
            vcomiss xmm2, xmm10
          }
          if ( !v48 && !v49 )
            goto LABEL_32;
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+10h]
            vmovss  xmm1, dword ptr [rdi+14h]
            vmovss  dword ptr [rsp+198h+resultNormal], xmm0
            vmovss  xmm0, dword ptr [rdi+18h]
            vmovss  dword ptr [rsp+198h+resultNormal+8], xmm0
            vmovss  dword ptr [rsp+198h+resultNormal+4], xmm1
          }
        }
        __asm
        {
          vmovss  xmm5, dword ptr [rsi+8Ch]
          vsubss  xmm0, xmm11, xmm5
          vmaxss  xmm9, xmm0, xmm10
          vcomiss xmm9, xmm10
        }
        if ( v48 || v49 )
        {
LABEL_32:
          v151 = 0;
          goto LABEL_72;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+60h]
          vsubss  xmm3, xmm0, dword ptr [rsi+68h]
          vmovss  xmm1, dword ptr [rdi+64h]
          vsubss  xmm2, xmm1, dword ptr [rsi+6Ch]
          vmovss  xmm0, dword ptr [rdi+68h]
          vsubss  xmm4, xmm0, dword ptr [rsi+70h]
          vmulss  xmm0, xmm4, xmm4
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vmovss  xmm0, dword ptr [rsi+48h]
          vsqrtss xmm1, xmm2, xmm2
          vsubss  xmm4, xmm5, xmm1
          vmovss  dword ptr [rsp+198h+allowHitSelf], xmm11
          vmovss  [rsp+198h+lastSurfaceType], xmm0
          vmovss  dword ptr [rsp+198h+fmt], xmm4
        }
        G_Debug_BulletDamage(weapon, isAlternate, &start, &_RDI->hitPos, fmt, *(float *)&lastSurfaceTypea, allowHitSelf);
        __asm
        {
          vmulss  xmm2, xmm12, dword ptr [rsi+80h]
          vmovss  xmm1, dword ptr [rdi+60h]
          vmovss  xmm8, dword ptr [rsp+198h+resultNormal+8]
          vmovss  xmm6, dword ptr [rsp+198h+resultNormal+4]
          vsubss  xmm5, xmm1, xmm2
          vmovss  dword ptr [rsi+68h], xmm5
          vmulss  xmm2, xmm12, dword ptr [rsi+84h]
          vmovss  xmm1, dword ptr [rdi+64h]
          vsubss  xmm4, xmm1, xmm2
          vmovss  dword ptr [rsi+6Ch], xmm4
          vmulss  xmm2, xmm12, dword ptr [rsi+88h]
          vmovss  xmm1, dword ptr [rdi+68h]
          vsubss  xmm3, xmm1, xmm2
          vmovss  dword ptr [rsi+70h], xmm3
          vmulss  xmm0, xmm8, dword ptr [rsi+88h]
          vmovss  xmm7, dword ptr [rsi+80h]
          vmulss  xmm1, xmm6, dword ptr [rsi+84h]
        }
        v35 = ++v153;
        __asm
        {
          vmovss  dword ptr [rsp+198h+start+4], xmm4
          vmulss  xmm4, xmm0, xmm14
          vmulss  xmm0, xmm7, dword ptr [rsp+198h+resultNormal]
          vaddss  xmm1, xmm1, xmm0
          vmulss  xmm2, xmm1, xmm15
          vmovss  dword ptr [rsp+198h+start], xmm5
          vsubss  xmm5, xmm4, xmm2
          vmulss  xmm0, xmm5, dword ptr [rsp+198h+resultNormal]
          vaddss  xmm2, xmm0, xmm7
          vmovss  dword ptr [rsi+80h], xmm2
          vmulss  xmm0, xmm6, xmm5
          vaddss  xmm1, xmm0, dword ptr [rsi+84h]
          vmovss  dword ptr [rsi+84h], xmm1
          vmulss  xmm0, xmm8, xmm5
          vaddss  xmm1, xmm0, dword ptr [rsi+88h]
          vmovss  dword ptr [rsi+88h], xmm1
          vmulss  xmm0, xmm2, xmm9
          vaddss  xmm1, xmm0, dword ptr [rsi+68h]
          vmovss  dword ptr [rsi+74h], xmm1
          vmulss  xmm0, xmm9, dword ptr [rsi+84h]
          vaddss  xmm1, xmm0, dword ptr [rsi+6Ch]
          vmovss  dword ptr [rsi+78h], xmm1
          vmulss  xmm0, xmm9, dword ptr [rsi+88h]
          vaddss  xmm1, xmm0, dword ptr [rsi+70h]
          vmovss  dword ptr [rsi+7Ch], xmm1
          vmovss  dword ptr [rsp+198h+start+8], xmm3
        }
        if ( partGroup == 19 )
        {
          v109 = G_Utils_SpawnEventEntity(&_RSI->start, 45);
          Instance = GWeaponMap::GetInstance();
          BG_SetWeaponForEntity(Instance, &v109->s, weapon);
          v109->s.inAltWeaponMode = isAlternate;
          v109->s.lerp.u.anonymous.data[0] = LODWORD(_RSI->dir.v[0]);
          v109->s.lerp.u.anonymous.data[1] = LODWORD(_RSI->dir.v[1]);
          v109->s.lerp.u.anonymous.data[2] = LODWORD(_RSI->dir.v[2]);
          v109->s.lerp.u.anonymous.data[3] = v153;
          v109->s.lerp.u.anonymous.data[4] = LODWORD(_RSI->travelDistance);
          v109->s.otherEntityNum = attacker->s.number;
          v111 = _RDI->hitEnt;
          if ( v111 )
            number = v111->s.number;
          else
            number = 2047;
          v109->s.eventParm = number;
          v109->s.eventParm2 = 0;
          v35 = v153;
        }
        BG_RemoveIgnoreEntFromBP(_RSI, _RSI->weaponEntIndex);
        v113 = &g_entities[_RSI->weaponEntIndex];
        if ( v113->s.eType == ET_TURRET )
        {
          v114 = v113->s.lerp.u.anonymous.data[6];
          if ( v114 != 2047 )
            BG_RemoveIgnoreEntFromBP(_RSI, v114);
        }
        _RDI->hitClientNum = -1;
      }
      v33 = v152;
    }
    else
    {
      __asm { vmovaps xmm3, xmm12; dist }
      if ( !BG_AdvanceTrace(_RSI, &_RDI->trace, &_RDI->hitPos, *(float *)&_XMM3) )
        goto LABEL_32;
    }
    if ( ++v36 >= 12 )
      goto LABEL_72;
  }
  if ( BG_IsBeamWeapon(weapon, isAlternate) )
  {
    v115 = G_BeamEntity_GetLinkedBeamEntity(attacker);
    if ( !v115 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1344, ASSERT_TYPE_ASSERT, "(beamEnt)", (const char *)&queryFormat, "beamEnt") )
      __debugbreak();
    G_BeamEntity_SetPos(v115, &_RDI->hitPos);
  }
  G_Bullet_HitNothing(randSeed, _RSI, _RDI, weapon, isAlternate, attacker);
LABEL_72:
  _R9 = &_RDI->hitPos;
  __asm
  {
    vmovss  xmm0, dword ptr [r9]
    vsubss  xmm3, xmm0, dword ptr [rsi+68h]
    vmovss  xmm1, dword ptr [r9+4]
    vsubss  xmm2, xmm1, dword ptr [rsi+6Ch]
    vmovss  xmm0, dword ptr [r9+8]
    vsubss  xmm4, xmm0, dword ptr [rsi+70h]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, dword ptr [rsi+8Ch]
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm0, dword ptr [rsi+48h]
    vsqrtss xmm4, xmm2, xmm2
    vsubss  xmm3, xmm1, xmm4
    vmovss  dword ptr [rsp+198h+allowHitSelf], xmm11
    vmovss  [rsp+198h+lastSurfaceType], xmm0
    vmovss  dword ptr [rsp+198h+fmt], xmm3
  }
  G_Debug_BulletDamage(weapon, isAlternate, &start, &_RDI->hitPos, fmta, *(float *)&lastSurfaceTypeb, allowHitSelfa);
  result = v151;
  __asm
  {
    vmovaps xmm9, [rsp+198h+var_88]
    vmovaps xmm8, [rsp+198h+var_78]
    vmovaps xmm7, [rsp+198h+var_68]
    vmovaps xmm6, [rsp+198h+var_58]
  }
  _R11 = &v169;
  __asm
  {
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
  return result;
}

/*
==============
G_Bullet_FirePenetrate
==============
*/
char G_Bullet_FirePenetrate(unsigned int *randSeed, BulletFireParams *bp, BulletTraceResults *br, const Weapon *weapon, const PlayerHandIndex hand, bool isAlternate, gentity_s *attacker, int gameTime, const bool initialSimStep)
{
  gentity_s *v20; 
  const dvar_t *v24; 
  PenetrateType PenetrateType; 
  bool v26; 
  const dvar_t *v27; 
  gentity_s *hitEnt; 
  const vec4_t *v29; 
  char result; 
  bool v32; 
  char v36; 
  bool v45; 
  int v63; 
  bool v95; 
  bool v110; 
  bool v114; 
  bool processFx; 
  char v142; 
  bool v143; 
  unsigned int *v158; 
  bool IsHitSurfaceTransparent; 
  GCombat *CombatSystem; 
  __int16 v161; 
  bool v173; 
  bool v174; 
  bool v175; 
  bool v176; 
  bool v177; 
  int impactFlags; 
  gentity_s *v180; 
  int integer; 
  int entityIndex; 
  int v183; 
  gentity_s *hitEffectEnt; 
  GBullet *v185; 
  BulletTraceResults trace; 
  vec3_t center; 
  vec3_t v188; 
  BulletFireParams v189; 

  v20 = attacker;
  v180 = attacker;
  _RBX = br;
  _RDI = bp;
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1575, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1576, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1577, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  v24 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  integer = v24->current.integer;
  PenetrateType = BG_GetPenetrateType(weapon, isAlternate);
  if ( PenetrateType == PENETRATE_TYPE_RICOCHET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1586, ASSERT_TYPE_ASSERT, "(!( PENETRATE_TYPE_RICOCHET == penetrateType ))", (const char *)&queryFormat, "!PENETRATETYPE_IS_RICOCHET( penetrateType )") )
    __debugbreak();
  v183 = 0;
  v26 = G_Bullet_Trace(_RDI, weapon, isAlternate, attacker, _RBX, 0, 0, gameTime);
  v27 = DVARINT_g_debugBullets;
  v174 = v26;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  if ( v27->current.integer == 6 )
  {
    hitEnt = _RBX->hitEnt;
    if ( !hitEnt || (unsigned __int16)(hitEnt->s.number - 2046) <= 1u || (v29 = &colorRed, _RBX->ignoreHitEnt) )
      v29 = &colorBlue;
    G_DebugLineWithDuration(&_RDI->start, &_RDI->end, v29, 1, 300);
  }
  G_Bullet_OnFirstContact(attacker, weapon, isAlternate, 0, &_RBX->hitPos);
  if ( !v174 )
  {
    G_Bullet_HitNothing(randSeed, _RDI, _RBX, weapon, isAlternate, attacker);
    return 1;
  }
  if ( !_RDI->firstImpactOccurred )
  {
    G_Bullet_FirstImpactNotify(attacker, _RDI, _RBX, weapon, isAlternate);
    _RDI->firstImpactOccurred = 1;
  }
  __asm
  {
    vmovaps [rsp+2D0h+var_50], xmm6
    vmovaps [rsp+2D0h+var_60], xmm7
    vmovaps [rsp+2D0h+var_70], xmm8
    vmovaps [rsp+2D0h+var_80], xmm9
    vmovaps [rsp+2D0h+var_90], xmm10
    vmovaps [rsp+2D0h+var_A0], xmm11
    vmovaps [rsp+2D0h+var_B0], xmm12
    vmovaps [rsp+2D0h+var_C0], xmm13
    vmovaps [rsp+2D0h+var_D0], xmm14
    vmovaps [rsp+2D0h+var_E0], xmm15
  }
  v176 = G_Bullet_Process(randSeed, _RDI, _RBX, weapon, hand, isAlternate, attacker, 0, gameTime, &impactFlags, 1, initialSimStep);
  if ( v176 )
  {
    if ( integer == 7 )
    {
      __asm
      {
        vmovss  xmm0, cs:DEBUG_SPHERE_RADIUS_BASE
        vmulss  xmm1, xmm0, cs:__real@3f8ccccd; radius
      }
      G_DebugSphere(&_RBX->hitPos, *(float *)&_XMM1, &colorBlue, 0, DEBUG_DRAW_DURATION_PENETRATION);
    }
    v32 = PenetrateType == PENETRATE_TYPE_MAXIMUM;
    v175 = PenetrateType == PENETRATE_TYPE_MAXIMUM;
    __asm
    {
      vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm15, cs:__real@7f7fffff
      vmovss  xmm14, cs:__real@3c23d70a
    }
    v36 = 1;
    entityIndex = Trace_GetEntityHitId(&_RBX->trace);
    __asm { vxorps  xmm13, xmm13, xmm13 }
    while ( 1 )
    {
      __asm { vmovaps xmm9, xmm15 }
      if ( !v32 )
      {
        *(double *)&_XMM0 = BG_GetSurfacePenetrationDepth(weapon, isAlternate, _RBX->depthSurfaceType);
        __asm
        {
          vmulss  xmm9, xmm0, dword ptr [rdi+50h]
          vcomiss xmm9, xmm13
        }
        if ( v142 | v143 )
          break;
      }
      _RSI = &_RBX->hitPos;
      __asm
      {
        vmovss  xmm10, dword ptr [rsi]
        vmovss  xmm11, dword ptr [rsi+4]
        vmovss  xmm12, dword ptr [rsi+8]
      }
      if ( Trace_GetGlassHitId(&_RBX->trace) )
        G_Bullet_DamageGlass(_RDI, _RBX, weapon, isAlternate, v20);
      __asm { vmovss  xmm3, cs:__real@3e0a3d71; dist }
      if ( !BG_AdvanceTrace(_RDI, &_RBX->trace, &_RBX->hitPos, *(float *)&_XMM3) )
        break;
      if ( !v36 || (v177 = 1, (_RBX->trace.contents & 0x10) == 0) )
        v177 = 0;
      v45 = G_Bullet_Trace(_RDI, weapon, isAlternate, v20, _RBX, _RBX->depthSurfaceType, 0, gameTime);
      v173 = v45;
      if ( integer == 7 )
      {
        _R14 = &_RDI->end;
        G_DebugLineWithDuration(&_RDI->start, &_RDI->end, &colorCyan, 0, DEBUG_DRAW_DURATION_PENETRATION);
        if ( v173 )
        {
          __asm
          {
            vmovss  xmm6, dword ptr [rbx]
            vmovss  xmm0, dword ptr [r14]
            vsubss  xmm1, xmm0, dword ptr [rdi+68h]
            vmovss  xmm0, dword ptr [r14+4]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rdi+68h]
            vsubss  xmm1, xmm0, dword ptr [rdi+6Ch]
            vmovss  xmm0, dword ptr [r14+8]
            vmulss  xmm2, xmm1, xmm6
            vsubss  xmm1, xmm0, dword ptr [rdi+70h]
            vmovss  dword ptr [rbp+1D0h+center], xmm3
            vaddss  xmm3, xmm2, dword ptr [rdi+6Ch]
            vmulss  xmm2, xmm1, xmm6
            vmovss  xmm1, cs:DEBUG_SPHERE_RADIUS_BASE; radius
            vmovss  dword ptr [rbp+1D0h+center+4], xmm3
            vaddss  xmm3, xmm2, dword ptr [rdi+70h]
            vmovss  dword ptr [rbp+1D0h+center+8], xmm3
          }
          G_DebugSphere(&center, *(float *)&_XMM1, &colorCyan, 0, DEBUG_DRAW_DURATION_PENETRATION);
          __asm { vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000 }
        }
        v45 = v173;
        v20 = v180;
      }
      if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
        __debugbreak();
      v185 = GBullet::ms_gBulletSystem;
      if ( GBullet::ms_gBulletSystem->CheckFirePenetrateStop(GBullet::ms_gBulletSystem, _RBX, v20, v177) )
        break;
      __asm { vmovups ymm0, ymmword ptr [rdi] }
      v63 = entityIndex;
      _RCX = &v189;
      __asm
      {
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm0, ymmword ptr [rdi+20h]
        vmovups ymmword ptr [rcx+20h], ymm0
        vmovups ymm0, ymmword ptr [rdi+40h]
        vmovups ymmword ptr [rcx+40h], ymm0
        vmovups ymm0, ymmword ptr [rdi+60h]
        vmovups ymmword ptr [rcx+60h], ymm0
        vmovups ymm0, ymmword ptr [rdi+80h]
        vmovups ymmword ptr [rcx+80h], ymm0
      }
      BG_RemoveIgnoreEntFromBP(&v189, v63);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+80h]
        vmovss  xmm3, dword ptr [rdi+84h]
        vmovss  xmm4, dword ptr [rdi+88h]
        vxorps  xmm0, xmm2, xmm6
        vmovss  dword ptr [rbp+1D0h+var_190.dir], xmm0
        vxorps  xmm1, xmm3, xmm6
        vmovss  dword ptr [rbp+1D0h+var_190.dir+4], xmm1
        vmovss  xmm1, dword ptr [rdi+74h]
        vmovss  dword ptr [rbp+1D0h+var_190.start], xmm1
        vmovss  xmm1, dword ptr [rdi+7Ch]
        vmovss  dword ptr [rbp+1D0h+var_190.start+8], xmm1
        vxorps  xmm0, xmm4, xmm6
        vmovss  dword ptr [rbp+1D0h+var_190.dir+8], xmm0
        vmovss  xmm0, dword ptr [rdi+78h]
        vmovss  dword ptr [rbp+1D0h+var_190.start+4], xmm0
        vmulss  xmm0, xmm2, xmm14
        vsubss  xmm2, xmm10, xmm0
        vmulss  xmm1, xmm3, xmm14
        vsubss  xmm0, xmm11, xmm1
        vmovss  dword ptr [rbp+1D0h+var_190.end+4], xmm0
        vmovups ymm0, ymmword ptr [rbx+20h]
        vmovups ymmword ptr [rbp+1D0h+trace.contents], ymm0
        vmovups xmm0, xmmword ptr [rbx+60h]
        vmovss  dword ptr [rbp+1D0h+var_190.end], xmm2
        vmovups [rbp+1D0h+var_1D0], xmm0
        vmulss  xmm2, xmm4, xmm14
        vsubss  xmm1, xmm12, xmm2
        vmovups ymm2, ymmword ptr [rbx]
        vmovups ymmword ptr [rbp+1D0h+trace.fraction], ymm2
        vmovss  dword ptr [rbp+1D0h+var_190.end+8], xmm1
        vmovups ymm1, ymmword ptr [rbx+40h]
        vmovups ymmword ptr [rbp+1D0h+trace.allsolid], ymm1
        vmovsd  xmm1, qword ptr [rbx+70h]
        vextractf128 xmm0, ymm2, 1
        vxorps  xmm0, xmm0, xmm6
        vmovsd  qword ptr [rbp+1D0h+surfaceType], xmm1
        vmovss  xmm1, dword ptr [rbp+1D0h+trace.normal+4]
        vxorps  xmm2, xmm1, xmm6
        vmovss  dword ptr [rbp+1D0h+trace.normal], xmm0
        vmovss  xmm0, dword ptr [rbp+1D0h+trace.normal+8]
        vxorps  xmm1, xmm0, xmm6
        vmovss  dword ptr [rbp+1D0h+trace.normal+8], xmm1
        vmovss  dword ptr [rbp+1D0h+trace.normal+4], xmm2
      }
      if ( v45 )
      {
        __asm { vmovaps xmm3, xmm14; dist }
        BG_AdvanceTrace(&v189, &trace.trace, &trace.hitPos, *(float *)&_XMM3);
      }
      else
      {
        BG_AddIgnoreEntToBP(&v189, 2047);
      }
      v95 = G_Bullet_Trace(&v189, weapon, isAlternate, v20, &trace, trace.depthSurfaceType, 0, gameTime);
      if ( integer == 7 )
      {
        G_DebugLineWithDuration(&v189.start, &v189.end, &colorOrange, 0, DEBUG_DRAW_DURATION_PENETRATION);
        if ( !v95 )
          goto LABEL_57;
        __asm
        {
          vmovss  xmm5, [rbp+1D0h+trace.fraction]
          vmovss  xmm0, dword ptr [rbp+1D0h+var_190.end]
          vsubss  xmm1, xmm0, dword ptr [rbp+1D0h+var_190.start]
          vmulss  xmm1, xmm1, xmm5
          vaddss  xmm0, xmm1, dword ptr [rbp+1D0h+var_190.start]
          vmovss  xmm1, dword ptr [rbp+1D0h+var_190.end+4]
          vmovss  dword ptr [rbp+1D0h+var_1A0], xmm0
          vsubss  xmm0, xmm1, dword ptr [rbp+1D0h+var_190.start+4]
          vmulss  xmm2, xmm0, xmm5
          vaddss  xmm3, xmm2, dword ptr [rbp+1D0h+var_190.start+4]
          vmovss  xmm0, dword ptr [rbp+1D0h+var_190.end+8]
          vsubss  xmm1, xmm0, dword ptr [rbp+1D0h+var_190.start+8]
          vmovss  xmm0, cs:DEBUG_SPHERE_RADIUS_BASE
          vmulss  xmm2, xmm1, xmm5
          vmulss  xmm1, xmm0, cs:__real@3f99999a; radius
          vmovss  dword ptr [rbp+1D0h+var_1A0+4], xmm3
          vaddss  xmm3, xmm2, dword ptr [rbp+1D0h+var_190.start+8]
          vmovss  dword ptr [rbp+1D0h+var_1A0+8], xmm3
        }
        G_DebugSphere(&v188, *(float *)&_XMM1, &colorOrange, 0, DEBUG_DRAW_DURATION_PENETRATION);
      }
      if ( v95 && trace.trace.allsolid )
      {
LABEL_59:
        v110 = 1;
        goto LABEL_61;
      }
LABEL_57:
      if ( _RBX->trace.startsolid && trace.trace.startsolid )
        goto LABEL_59;
      v110 = 0;
LABEL_61:
      __asm
      {
        vmovss  xmm8, dword ptr [rbp+1D0h+var_1D0+8]
        vmovss  xmm6, dword ptr [rbp+1D0h+var_1D0+4]
        vmovss  xmm7, dword ptr [rbp+1D0h+var_1D0]
      }
      if ( v95 )
      {
        if ( v110 )
        {
LABEL_70:
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+1D0h+var_190.end]
            vsubss  xmm3, xmm0, dword ptr [rbp+1D0h+var_190.start]
            vmovss  xmm1, dword ptr [rbp+1D0h+var_190.end+4]
            vmovss  xmm0, dword ptr [rbp+1D0h+var_190.end+8]
            vsubss  xmm2, xmm1, dword ptr [rbp+1D0h+var_190.start+4]
            vsubss  xmm4, xmm0, dword ptr [rbp+1D0h+var_190.start+8]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm5, xmm3, xmm0
          }
        }
        else
        {
          __asm
          {
            vsubss  xmm0, xmm11, xmm6
            vmulss  xmm1, xmm0, xmm0
            vsubss  xmm2, xmm10, xmm7
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vsubss  xmm3, xmm12, xmm8
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm5, xmm2, xmm1
          }
        }
        v142 = 0;
        v143 = !v175;
        __asm
        {
          vsqrtss xmm0, xmm5, xmm5
          vmaxss  xmm10, xmm0, cs:__real@3f800000
        }
        if ( v175 )
        {
          __asm { vmovss  xmm3, dword ptr [rdi+4Ch] }
        }
        else
        {
          v142 = 0;
          v143 = !v95;
          if ( v95 )
          {
            *(double *)&_XMM0 = BG_GetSurfacePenetrationDepth(weapon, isAlternate, trace.depthSurfaceType);
            __asm
            {
              vminss  xmm1, xmm0, xmm9
              vmulss  xmm9, xmm1, dword ptr [rdi+50h]
              vcomiss xmm9, xmm13
            }
            if ( v142 | v143 )
              break;
            __asm
            {
              vmovss  xmm8, dword ptr [rbp+1D0h+var_1D0+8]
              vmovss  xmm6, dword ptr [rbp+1D0h+var_1D0+4]
              vmovss  xmm7, dword ptr [rbp+1D0h+var_1D0]
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+4Ch]
            vdivss  xmm1, xmm10, xmm9
            vsubss  xmm2, xmm0, xmm1
            vmaxss  xmm3, xmm2, xmm13
            vmovss  dword ptr [rdi+4Ch], xmm3
          }
        }
        __asm { vcomiss xmm3, xmm13 }
        if ( v142 | v143 )
          break;
        if ( v110 )
        {
          v20 = v180;
        }
        else
        {
          if ( ((trace.trace.surfaceFlags >> 19) & 0x3F) != 7 )
          {
            __asm
            {
              vsubss  xmm7, xmm7, dword ptr [rsi]
              vsubss  xmm6, xmm6, dword ptr [rsi+4]
              vsubss  xmm8, xmm8, dword ptr [rsi+8]
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bullet_penetrationMinFxDist, "bullet_penetrationMinFxDist");
            __asm
            {
              vmulss  xmm2, xmm6, xmm6
              vmulss  xmm1, xmm7, xmm7
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm2, xmm8, xmm8
              vaddss  xmm4, xmm3, xmm2
              vmulss  xmm0, xmm0, xmm0
              vcomiss xmm4, xmm0
            }
            if ( v142 | v143 )
              goto LABEL_82;
          }
          v110 = 1;
          if ( v173 && (_RBX->trace.surfaceFlags & 4) != 0 )
          {
LABEL_82:
            v20 = v180;
            goto LABEL_83;
          }
          IsHitSurfaceTransparent = BG_IsHitSurfaceTransparent(&trace.trace);
          v20 = v180;
          v158 = randSeed;
          G_Bullet_ImpactEffect(randSeed, &v189, &trace, &_RDI->dir, weapon, isAlternate, v180, impactFlags | (IsHitSurfaceTransparent ? 0x100 : 0) | 4, &hitEffectEnt);
          if ( hitEffectEnt )
          {
            CombatSystem = GCombat::GetCombatSystem();
            if ( !CombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1780, ASSERT_TYPE_ASSERT, "(combatSystem)", (const char *)&queryFormat, "combatSystem") )
              __debugbreak();
            if ( trace.hitEnt )
            {
              v161 = G_GetEntityIndex(trace.hitEnt);
              if ( G_IsEntityInUse(v161) )
              {
                if ( GCombat::QueuedDamageEnabled(CombatSystem) )
                  GBullet::DeferImpactEffectFlags(v185, trace.hitEnt, hitEffectEnt, impactFlags);
              }
            }
LABEL_83:
            v158 = randSeed;
          }
          if ( v173 )
            v176 = G_Bullet_Process(v158, _RDI, _RBX, weapon, hand, isAlternate, v20, 8, gameTime, &impactFlags, v110, initialSimStep);
        }
        v114 = v173;
        goto LABEL_99;
      }
      if ( v110 )
        goto LABEL_70;
      v114 = v173;
      if ( v173 )
      {
        if ( ((trace.trace.surfaceFlags >> 19) & 0x3F) == 7 )
          goto LABEL_67;
        __asm
        {
          vsubss  xmm7, xmm10, dword ptr [rsi]
          vsubss  xmm6, xmm11, dword ptr [rsi+4]
          vsubss  xmm8, xmm12, dword ptr [rsi+8]
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bullet_penetrationMinFxDist, "bullet_penetrationMinFxDist");
        __asm
        {
          vmulss  xmm2, xmm6, xmm6
          vmulss  xmm1, xmm7, xmm7
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm2, xmm8, xmm8
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm0, xmm0, xmm0
          vcomiss xmm4, xmm0
        }
        if ( !(v142 | v143) )
LABEL_67:
          processFx = 1;
        else
          processFx = 0;
        v20 = v180;
        v176 = G_Bullet_Process(randSeed, _RDI, _RBX, weapon, hand, isAlternate, v180, 8, gameTime, &impactFlags, processFx, initialSimStep);
      }
      else
      {
        v20 = v180;
      }
LABEL_99:
      entityIndex = Trace_GetEntityHitId(&_RBX->trace);
      if ( !v176 )
        break;
      if ( !v114 )
      {
        result = _RDI->isBallistics;
        goto LABEL_105;
      }
      __asm { vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000 }
      v36 = v177;
      v32 = v175;
      if ( ++v183 >= 5 )
      {
        result = 1;
        goto LABEL_105;
      }
    }
  }
  result = 0;
LABEL_105:
  __asm
  {
    vmovaps xmm14, [rsp+2D0h+var_D0]
    vmovaps xmm13, [rsp+2D0h+var_C0]
    vmovaps xmm12, [rsp+2D0h+var_B0]
    vmovaps xmm11, [rsp+2D0h+var_A0]
    vmovaps xmm10, [rsp+2D0h+var_90]
    vmovaps xmm9, [rsp+2D0h+var_80]
    vmovaps xmm8, [rsp+2D0h+var_70]
    vmovaps xmm7, [rsp+2D0h+var_60]
    vmovaps xmm6, [rsp+2D0h+var_50]
    vmovaps xmm15, [rsp+2D0h+var_E0]
  }
  return result;
}

/*
==============
G_Bullet_FireWithParams
==============
*/

__int64 __fastcall G_Bullet_FireWithParams(const GWeaponFireParms *const params, const int serverTime, __int64 a3, double _XMM3_8)
{
  signed __int64 v4; 
  void *v10; 
  unsigned __int16 attackerEntity; 
  gentity_s *v14; 
  unsigned __int16 weaponEntity; 
  unsigned __int16 v16; 
  __int64 v17; 
  GBullet *v18; 
  GAntiLag *v19; 
  GItems *v20; 
  const dvar_t *v21; 
  const bitarray<64> *p_attackerPerks; 
  bool v23; 
  char v24; 
  bool ShouldSpread; 
  bool IsBeamWeapon; 
  targetAssistBehavior_t TargetAssistBehavior; 
  int v28; 
  int v29; 
  char v34; 
  GConeTargetEvaluator *v38; 
  int v39; 
  gentity_s *LinkedBeamEntity; 
  unsigned int v43; 
  bitarray<64> *client; 
  GBallistics *v50; 
  int v51; 
  __int64 v52; 
  bitarray<64> v53; 
  __int64 v54; 
  const playerState_s *EntityPlayerStateConst; 
  const playerState_s *v58; 
  int v59; 
  unsigned __int16 *p_linkedEnt; 
  int v61; 
  int v69; 
  bool (__fastcall *EvaluateTarget)(GTargetEvaluator *, const GAssistTarget *, const vec3_t *, float, vec3_t *, vec3_t *); 
  ConeTargetHitResults *HitResults; 
  ConeTargetHitResults *v73; 
  scr_string_t tagName; 
  int v85; 
  scrContext_t *v86; 
  const Weapon *v87; 
  char *Value; 
  int *v91; 
  _QWORD *v92; 
  char *v93; 
  __int64 v94; 
  unsigned __int64 v95; 
  ThreadContext CurrentThreadContext; 
  __int64 v97; 
  int v98; 
  unsigned __int64 v99; 
  gentity_s **v100; 
  unsigned __int8 (__fastcall *v101)(GConeTargetEvaluator *, _OWORD *, vec3_t *); 
  ConeTargetHitResults *v103; 
  GCombat *v117; 
  damageReturnCode_t (__fastcall *Damage)(GCombat *, gentity_s *, const gentity_s *, gentity_s *, const vec3_t *, const vec3_t *, int, int, int, const Weapon *, bool, hitLocation_t, unsigned int, scr_string_t, int, const vec3_t *, const GExtraDamageParams *); 
  int v119; 
  PlayerHandIndex v120; 
  scr_string_t v121; 
  GBullet *v122; 
  unsigned int v123; 
  unsigned int hitClientNum; 
  __int64 result; 
  BOOL fmt; 
  float fmta; 
  float fmtb; 
  float *outRange; 
  vec3_t *outRangea; 
  float outRangeb; 
  float outRangec; 
  __int64 angleMax; 
  int angleMaxa; 
  float angleMaxb; 
  float angleMaxc; 
  int wp; 
  float maxRange; 
  float maxRangea; 
  BOOL initialSimStep; 
  bool v161; 
  bool v162; 
  bool isAlternate; 
  __int16 v164; 
  bool v165; 
  float outAngle; 
  int v167; 
  bool v168; 
  int gameTime; 
  unsigned int v170; 
  PlayerHandIndex hand; 
  float spreadMaxOut; 
  float v173; 
  GConeTargetEvaluator *v174; 
  gentity_s *beamEnt; 
  float angleMaxOut; 
  float angleMinOut; 
  float spreadMinOut; 
  const gentity_s **v179; 
  unsigned int pHoldrand; 
  __int64 v181; 
  GBallistics *v182; 
  const GWeaponFireParms *v183; 
  gentity_s *v184; 
  gentity_s *v185; 
  GBullet *v186; 
  Weapon *p_weapon; 
  GAntiLag *v188; 
  GItems *v189; 
  BGSpreadSetting v190; 
  __int64 v191; 
  BulletTraceResults br; 
  bitarray<64> perks; 
  vec3_t angles; 
  BulletFireParams fireParams; 
  _OWORD ptr[52]; 
  char v197[16128]; 
  char v202; 

  v10 = alloca(v4);
  v191 = -2i64;
  __asm
  {
    vmovaps [rsp+4550h+var_40], xmm6
    vmovaps [rsp+4550h+var_50], xmm7
    vmovaps [rsp+4550h+var_60], xmm8
    vmovaps [rsp+4550h+var_70], xmm9
  }
  gameTime = serverTime;
  _R15 = params;
  v183 = params;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2197, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !_R15->wp.weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2198, ASSERT_TYPE_ASSERT, "(params->wp.weapDef)", (const char *)&queryFormat, "params->wp.weapDef") )
    __debugbreak();
  p_weapon = &_R15->wp.weapon;
  if ( BG_GetWeaponType(&_R15->wp.weapon, _R15->wp.isAlternate) != WEAPTYPE_BULLET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2199, ASSERT_TYPE_ASSERT, "(BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) == WEAPTYPE_BULLET)", (const char *)&queryFormat, "BG_GetWeaponType( params->wp.weapon, params->wp.isAlternate ) == WEAPTYPE_BULLET") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Bullet_FireWithParams");
  PhysPerfTrack_BulletServerTimeStart();
  PhysPerfTrack_BulletServerEventCountAdd();
  attackerEntity = _R15->bullet.attackerEntity;
  if ( attackerEntity > 0x800u )
  {
    LODWORD(outRange) = attackerEntity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2206, ASSERT_TYPE_ASSERT, "( params->bullet.attackerEntity ) <= ( ( 2048 ) )", "params->bullet.attackerEntity not in [0, MAX_GENTITIES]\n\t%u not in [0, %u]", outRange, 2048) )
      __debugbreak();
  }
  v14 = &g_entities[_R15->bullet.attackerEntity];
  v184 = v14;
  weaponEntity = _R15->bullet.weaponEntity;
  if ( weaponEntity > 0x800u )
  {
    LODWORD(angleMax) = 2048;
    LODWORD(outRange) = weaponEntity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2209, ASSERT_TYPE_ASSERT, "( params->bullet.weaponEntity ) <= ( ( 2048 ) )", "params->bullet.weaponEntity not in [0, MAX_GENTITIES]\n\t%u not in [0, %u]", outRange, angleMax) )
      __debugbreak();
  }
  v16 = _R15->bullet.weaponEntity;
  v17 = 0i64;
  if ( v16 == 2046 )
    v185 = NULL;
  else
    v185 = &g_entities[v16];
  if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
    __debugbreak();
  v18 = GBullet::ms_gBulletSystem;
  v186 = GBullet::ms_gBulletSystem;
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v19 = GAntiLag::ms_gAntiLagData;
  v188 = GAntiLag::ms_gAntiLagData;
  if ( !GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
    __debugbreak();
  v20 = GItems::ms_gItemsSystem;
  v189 = GItems::ms_gItemsSystem;
  v18->m_impaleCount = 0i64;
  ((void (__fastcall *)(GItems *, __int64))v20->BeginDeferItemDrops)(v20, v17);
  v168 = v19->ShouldPerformBulletFireAntiLag(v19, serverTime, v14);
  if ( v168 )
  {
    v21 = DVARINT_bg_debugRewindPositions;
    if ( !DVARINT_bg_debugRewindPositions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugRewindPositions") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    v19->m_debugMethod = v21->current.integer;
    p_attackerPerks = &_R15->bullet.attackerPerks;
    v23 = BG_WeaponBulletFire_ExplodeOnImpact(_R15->bullet.attackerPerks, &_R15->wp.weapon, _R15->wp.isAlternate);
    LOBYTE(outRange) = 0;
    LOBYTE(fmt) = 1;
    v19->RewindPositions(v19, serverTime, v14, v23, fmt, (bool)outRange, "Bullet");
    v19->m_debugMethod = ANTILAG_DEBUG_METHOD_DISABLED;
  }
  else
  {
    p_attackerPerks = &_R15->bullet.attackerPerks;
  }
  v24 = _R15->bullet.flags[0];
  ShouldSpread = BG_WeaponBulletFire_ShouldSpread(*p_attackerPerks, &_R15->wp.weapon, _R15->wp.isAlternate);
  v165 = ShouldSpread;
  IsBeamWeapon = BG_IsBeamWeapon(&_R15->wp.weapon, _R15->wp.isAlternate);
  v161 = IsBeamWeapon;
  if ( (v24 & 1) != 0 )
  {
    TargetAssistBehavior = BG_GetTargetAssistBehavior(&_R15->wp.weapon, _R15->wp.isAlternate);
    IsBeamWeapon = v161;
  }
  else
  {
    TargetAssistBehavior = TARGET_ASSISTBEHAVE_DEFAULT;
  }
  v167 = TargetAssistBehavior;
  hand = _R15->bullet.attackerHand;
  if ( ShouldSpread || IsBeamWeapon )
  {
    v29 = BG_ShotCount(&_R15->wp.weapon, _R15->wp.isAlternate);
    v28 = v29;
    v170 = v29;
    if ( v161 && v29 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2272, ASSERT_TYPE_ASSERT, "((!isBeamWeapon || (shotCount <= 7)))", "%s\n\tBeam weapons can support/track at most 7 targets.", "(!isBeamWeapon || (shotCount <= BEAM_ENT_BONE_PAIR_COUNT))") )
      __debugbreak();
    if ( !v186->m_reduceSpreadShotCount )
      goto LABEL_47;
    --v28;
  }
  else
  {
    v28 = 1;
  }
  v170 = v28;
LABEL_47:
  __asm
  {
    vmovss  xmm9, dword ptr [r15+90h]
    vxorps  xmm8, xmm8, xmm8
    vmovss  [rbp+4440h+spreadMinOut], xmm8
    vmovss  xmm6, dword ptr [r15+8Ch]
    vmovss  [rbp+4440h+spreadMaxOut], xmm6
    vmovss  [rbp+4440h+angleMinOut], xmm8
    vmovss  xmm7, cs:__real@43b40000
    vmovss  [rbp+4440h+angleMaxOut], xmm7
  }
  pHoldrand = _R15->bullet.randSeed;
  if ( v165 && v28 > 1 )
  {
    __asm { vcomiss xmm6, xmm8 }
    v34 = 1;
  }
  else
  {
    v34 = 0;
  }
  LOBYTE(v164) = v34;
  *(_QWORD *)&v190.m_shotCount = 0i64;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovups xmmword ptr [rbp+4440h+var_4420.m_angleRange], xmm0
  }
  if ( v34 )
  {
    *(double *)&_XMM0 = BG_random(&pHoldrand);
    __asm
    {
      vmulss  xmm1, xmm0, xmm7; angleStart
      vmovss  dword ptr [rsp+4550h+fmt], xmm6
      vxorps  xmm3, xmm3, xmm3; initSpreadMin
    }
    BGSpreadSetting::Init(&v190, *(float *)&_XMM1, v28, *(float *)&_XMM3, fmta);
  }
  br.hitClientNum = -1;
  `eh vector constructor iterator'(ptr, 0x350ui64, 0x14ui64, (void (__fastcall *)(void *))GAssistTarget::GAssistTarget, (void (__fastcall *)(void *))GAssistTarget::~GAssistTarget);
  if ( (v24 & 1) != 0 )
  {
    v38 = &GBullet::ms_coneTargetEvaluator;
    v39 = 0;
    if ( BG_GetTargetAssistType(&_R15->wp.weapon, _R15->wp.isAlternate) != TARGET_ASSISTTYPPE_CONE )
      v38 = NULL;
  }
  else
  {
    v39 = 0;
    v38 = NULL;
  }
  v174 = v38;
  beamEnt = NULL;
  if ( v161 )
  {
    LinkedBeamEntity = G_BeamEntity_GetLinkedBeamEntity(v14);
    beamEnt = LinkedBeamEntity;
    if ( !LinkedBeamEntity )
    {
      LinkedBeamEntity = G_BeamEntity_WeaponSpawn(v14, &_R15->wp.weapon);
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
  if ( v38 && (v24 & 2) == 0 )
  {
    __asm
    {
      vmovaps xmm3, xmm9; fallbackRange
      vmovss  xmm2, [rbp+4440h+spreadMaxOut]; fallbackAngle
    }
    BG_GetTargetAssistAngleRange(&_R15->wp.weapon, _R15->wp.isAlternate, *(const float *)&_XMM2, *(const float *)&_XMM3, &outAngle, &v173);
    v43 = v170;
    if ( TargetAssistBehavior == TARGET_ASSISTBEHAVE_DIRECT_DAMAGE )
      v43 = 20;
    __asm
    {
      vmovss  xmm0, [rbp+4440h+outAngle]
      vmovss  dword ptr [rsp+4550h+wp], xmm0
      vmovss  xmm1, [rbp+4440h+var_449C]
      vmovss  [rsp+4550h+angleMax], xmm1
    }
    v39 = ((__int64 (__fastcall *)(GConeTargetEvaluator *, Weapon *, bool, gentity_s *, vec3_t *, const GWeaponFireParms *, int, int, unsigned int, bool, const unsigned int, int, char, _OWORD *))v38->FindTargets)(v38, &_R15->wp.weapon, _R15->wp.isAlternate, v14, &_R15->wp.muzzleTrace, _R15, angleMaxa, wp, v43, v161, HITLOC_MASK_ALL, gameTime, 1, ptr);
  }
  fireParams.weaponEntIndex = _R15->bullet.weaponEntity;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 286, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  client = (bitarray<64> *)v14->client;
  if ( client )
    perks = client[558];
  else
    perks = 0i64;
  fireParams.methodOfDeath = BG_WeaponBulletFire_GetMethodOfDeath(perks, &_R15->wp.weapon, _R15->wp.isAlternate);
  __asm
  {
    vmovss  xmm0, dword ptr [r15+94h]
    vmovss  [rbp+4440h+fireParams.rangeScale], xmm0
    vmovss  xmm1, dword ptr [r15+98h]
    vmovss  [rbp+4440h+fireParams.penetrationMultiplier], xmm1
    vmovss  xmm0, dword ptr [r15+9Ch]
    vmovss  [rbp+4440h+fireParams.chargedDamageMultiplier], xmm0
  }
  fireParams.firstImpactOccurred = 0;
  fireParams.shotCount = _R15->bullet.shotCount;
  if ( !GBallistics::ms_gBallisticsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 79, ASSERT_TYPE_ASSERT, "( ms_gBallisticsSystem )", (const char *)&queryFormat, "ms_gBallisticsSystem") )
    __debugbreak();
  v50 = GBallistics::ms_gBallisticsSystem;
  v182 = GBallistics::ms_gBallisticsSystem;
  if ( !GBallistics::ms_gBallisticsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2374, ASSERT_TYPE_ASSERT, "( ballisticsSystem )", (const char *)&queryFormat, "ballisticsSystem") )
    __debugbreak();
  v162 = v50->ShouldFireBallisticBullet(v50, &_R15->wp.weapon, _R15->wp.isAlternate, v14->s.number);
  v51 = 0;
  v52 = (int)v170;
  v181 = (int)v170;
  v53 = (bitarray<64>)v39;
  perks = (bitarray<64>)v39;
  if ( (int)v170 <= 0 )
  {
    v85 = v167;
    goto LABEL_161;
  }
  v54 = 0i64;
  v179 = (const gentity_s **)v197;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  do
  {
    _RBX = &_R15->wp.muzzleTrace;
    Sys_ProfBeginNamedEvent(0xFF008008, "G_Bullet_FireWithParams-Pellet");
    PhysPerfTrack_BulletServerPelletCountAdd();
    LODWORD(outAngle) = v51 + pHoldrand;
    BG_srand((unsigned int *)&outAngle);
    fireParams.ignoreHitEntCount = 0;
    BG_AddIgnoreEntToBP(&fireParams, fireParams.weaponEntIndex);
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(v14);
    v58 = EntityPlayerStateConst;
    if ( EntityPlayerStateConst && EntityPlayerStateConst->numViewLinkedEnts > 0 )
    {
      v59 = 0;
      p_linkedEnt = &EntityPlayerStateConst->viewLinkedEntityData[0].linkedEnt;
      do
      {
        BG_AddIgnoreEntToBP(&fireParams, *p_linkedEnt);
        ++v59;
        p_linkedEnt += 16;
      }
      while ( v59 < v58->numViewLinkedEnts );
      _RBX = &_R15->wp.muzzleTrace;
      v53 = perks;
    }
    if ( v185 )
    {
      if ( v185->s.eType == ET_TURRET )
      {
        v61 = v185->s.lerp.u.anonymous.data[6];
        if ( v61 != 2047 )
          BG_AddIgnoreEntToBP(&fireParams, v61);
      }
    }
    __asm
    {
      vmovss  [rbp+4440h+fireParams.damageMultiplier], xmm6
      vmovss  xmm2, dword ptr [rbx]
      vmovss  dword ptr [rbp+4440h+fireParams.start], xmm2
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rbp+4440h+fireParams.start+4], xmm1
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbp+4440h+fireParams.start+8], xmm0
      vmovss  dword ptr [rbp+4440h+fireParams.initialPos], xmm2
      vmovss  dword ptr [rbp+4440h+fireParams.initialPos+4], xmm1
      vmovss  dword ptr [rbp+4440h+fireParams.initialPos+8], xmm0
      vmovss  xmm0, dword ptr [r15]
      vmovss  dword ptr [rbp+4440h+fireParams.dir], xmm0
      vmovss  xmm1, dword ptr [r15+4]
      vmovss  dword ptr [rbp+4440h+fireParams.dir+4], xmm1
      vmovss  xmm0, dword ptr [r15+8]
      vmovss  dword ptr [rbp+4440h+fireParams.dir+8], xmm0
      vmovss  [rbp+4440h+fireParams.travelDistance], xmm8
      vmovaps xmm3, xmm9; range
    }
    if ( !G_GameInterface_CalcBulletEndPos(v58, gameTime, &fireParams.start, *(float *)&_XMM3, &fireParams.dir, &fireParams.end) )
    {
      v69 = v167;
      if ( v54 < *(_QWORD *)&v53 && ((v167 - 1) & 0xFFFFFFFD) != 0 )
      {
        if ( !v174 )
        {
LABEL_123:
          if ( (_BYTE)v164 )
            BGSpreadSetting::CalculateSpread(&v190, v51, &spreadMinOut, &spreadMaxOut, &angleMinOut, &angleMaxOut);
          __asm
          {
            vmovss  [rsp+4550h+maxRange], xmm9
            vmovss  xmm0, [rbp+4440h+angleMaxOut]
            vmovss  [rsp+4550h+angleMax], xmm0
            vmovss  xmm1, [rbp+4440h+angleMinOut]
            vmovss  dword ptr [rsp+4550h+outRange], xmm1
            vmovss  xmm2, [rbp+4440h+spreadMaxOut]; spreadMax
            vmovss  xmm1, [rbp+4440h+spreadMinOut]; spreadMin
          }
          G_Bullet_Endpos((unsigned int *)&outAngle, *(float *)&_XMM1, *(float *)&_XMM2, &fireParams.end, &fireParams.dir, outRangeb, angleMaxb, &_R15->wp, maxRange);
          goto LABEL_126;
        }
        EvaluateTarget = v174->EvaluateTarget;
        if ( (unsigned __int64)v51 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        outRangea = &fireParams.dir;
        __asm { vmovaps xmm3, xmm9 }
        if ( ((unsigned __int8 (__fastcall *)(GConeTargetEvaluator *, _OWORD *, vec3_t *))EvaluateTarget)(v174, &ptr[53 * v51], &_R15->wp.muzzleTrace) )
        {
          if ( v161 )
          {
            if ( (unsigned __int64)v51 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            HitResults = ConeTargetInfo::GetHitResults((ConeTargetInfo *)&ptr[53 * v51]);
            if ( !ConeTargetHitResults::GetFirstVisibleHit(HitResults) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2453, ASSERT_TYPE_ASSERT, "(targetArray[shotIndex].GetHitResults().GetFirstVisibleHit())", (const char *)&queryFormat, "targetArray[shotIndex].GetHitResults().GetFirstVisibleHit()") )
              __debugbreak();
            if ( (unsigned __int64)v51 >= 0x14 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              if ( (unsigned __int64)v51 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
            }
            v73 = ConeTargetInfo::GetHitResults((ConeTargetInfo *)&ptr[53 * v51]);
            tagName = ConeTargetHitResults::GetFirstVisibleHit(v73)->tagName;
            if ( (unsigned __int64)v54 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            G_BeamEntity_AddTargetEnt(beamEnt, *v179, tagName, (const ConeTargetInfo *)&ptr[53 * v51]);
          }
          goto LABEL_126;
        }
        v69 = v167;
      }
      if ( v174 && (unsigned int)(v69 - 1) <= 2 )
      {
        __asm
        {
          vmulss  xmm0, xmm9, dword ptr [r15]
          vaddss  xmm1, xmm0, dword ptr [rbx]
          vmovss  dword ptr [rbp+4440h+fireParams.end], xmm1
          vmulss  xmm0, xmm9, dword ptr [r15+4]
          vaddss  xmm1, xmm0, dword ptr [rbx+4]
          vmovss  dword ptr [rbp+4440h+fireParams.end+4], xmm1
          vmulss  xmm0, xmm9, dword ptr [r15+8]
          vaddss  xmm1, xmm0, dword ptr [rbx+8]
          vmovss  dword ptr [rbp+4440h+fireParams.end+8], xmm1
        }
        goto LABEL_126;
      }
      goto LABEL_123;
    }
LABEL_126:
    v85 = v167;
    if ( v167 == 3 )
    {
      v53 = perks;
      if ( v51 || *(__int64 *)&perks > 0 )
      {
LABEL_129:
        Sys_ProfEndNamedEvent();
        v52 = v181;
        goto LABEL_161;
      }
LABEL_134:
      vectoangles(&fireParams.dir, &angles);
      v86 = ScriptContext_Server();
      Scr_AddVector(v86, angles.v);
      Scr_AddVector(v86, fireParams.start.v);
      v87 = &_R15->wp.weapon;
      GScr_Weapon_AddParam(v86, &_R15->wp.weapon, _R15->wp.isAlternate);
      GScr_Notify(v14, scr_const.weapon_fired, 3u);
      goto LABEL_136;
    }
    if ( v167 == 2 )
    {
      if ( !v51 )
        goto LABEL_134;
      v53 = perks;
      if ( v54 >= *(_QWORD *)&perks )
        goto LABEL_129;
    }
    if ( !v51 )
      goto LABEL_134;
    v87 = &_R15->wp.weapon;
LABEL_136:
    if ( v162 )
    {
      GBallistics::FireBallistics(v182, v87, _R15->wp.isAlternate, hand, LODWORD(outAngle), &fireParams, &_R15->wp.right, &_R15->wp.up, v14->s.number, gameTime);
    }
    else if ( BG_WeaponBulletFire_ShouldPenetrate(_R15->bullet.attackerPerks, v87, _R15->wp.isAlternate) )
    {
      __asm
      {
        vmovss  [rsp+4550h+angleMax], xmm9
        vmovss  xmm0, [rbp+4440h+fireParams.rangeScale]
        vmovss  dword ptr [rsp+4550h+outRange], xmm0
        vmovss  xmm1, [rbp+4440h+fireParams.travelDistance]
        vmovss  dword ptr [rsp+4550h+fmt], xmm1
      }
      G_Debug_BulletDamage(v87, _R15->wp.isAlternate, &fireParams.start, &fireParams.end, fmtb, outRangec, angleMaxc);
      G_Bullet_FirePenetrate((unsigned int *)&outAngle, &fireParams, &br, v87, hand, _R15->wp.isAlternate, v14, gameTime, 1);
    }
    else
    {
      Value = (char *)Sys_GetValue(0);
      v91 = (int *)(Value + 33336);
      if ( (unsigned int)(*((_DWORD *)Value + 8334) + 1) >= 3 )
      {
        LODWORD(angleMax) = 3;
        LODWORD(outRangea) = *((_DWORD *)Value + 8334) + 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outRangea, angleMax) )
          __debugbreak();
      }
      if ( (unsigned int)++*v91 >= 3 )
      {
        LODWORD(angleMax) = 3;
        LODWORD(outRangea) = *v91;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outRangea, angleMax) )
          __debugbreak();
      }
      v92 = Value + 2088;
      v93 = Value + 40;
      if ( *v92 < (unsigned __int64)v93 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
        __debugbreak();
      *v92 += 8i64;
      if ( *v92 >= (unsigned __int64)v92 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
        __debugbreak();
      *(_QWORD *)*v92 = v91;
      if ( *v92 <= (unsigned __int64)v93 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
        __debugbreak();
      v94 = *v91;
      v95 = __rdtsc();
      v91[v94 + 2] = v95;
      if ( Sys_HasValidCurrentThreadContext() )
        CurrentThreadContext = Sys_GetCurrentThreadContext();
      else
        CurrentThreadContext = THREAD_CONTEXT_COUNT;
      CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 781, NULL, 0);
      __asm { vmovss  [rsp+4550h+maxRange], xmm9 }
      G_Bullet_FireExtended((unsigned int *)&outAngle, &fireParams, &br, &_R15->wp.weapon, hand, _R15->wp.isAlternate, v14, &_R15->bullet.attackerPerks, maxRangea, gameTime, 1);
      Profile_EndInternal(NULL);
    }
    Sys_ProfEndNamedEvent();
    ++v51;
    ++v54;
    v179 += 106;
    v52 = v181;
    v53 = perks;
  }
  while ( v54 < v181 );
  v85 = v167;
LABEL_161:
  v97 = (__int64)v174;
  if ( v174 )
  {
    if ( ((v85 - 1) & 0xFFFFFFFD) == 0 )
    {
      v98 = 0;
      outAngle = 0.0;
      if ( *(__int64 *)&v53 > 0 )
      {
        v99 = 0i64;
        v100 = (gentity_s **)v197;
        do
        {
          if ( v167 == 3 && (__int64)v99 >= v52 )
            break;
          if ( v99 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          br.hitEnt = *v100;
          br.trace.hitType = TRACE_HITTYPE_ENTITY;
          v101 = *(unsigned __int8 (__fastcall **)(GConeTargetEvaluator *, _OWORD *, vec3_t *))(*(_QWORD *)v97 + 8i64);
          if ( (unsigned __int64)v98 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          __asm { vmovaps xmm3, xmm9 }
          if ( v101(v174, &ptr[53 * v98], &_R15->wp.muzzleTrace) )
          {
            if ( (unsigned __int64)v98 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            *(_QWORD *)angles.v = &ptr[53 * v98];
            v103 = ConeTargetInfo::GetHitResults(*(ConeTargetInfo **)angles.v);
            _RBX = ConeTargetHitResults::GetFirstVisibleHit(v103);
            if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2578, ASSERT_TYPE_ASSERT, "(hitInfo)", (const char *)&queryFormat, "hitInfo") )
              __debugbreak();
            __asm
            {
              vmovss  xmm2, dword ptr [rbx]
              vmovss  dword ptr [rbp+4440h+br.hitPos], xmm2
              vmovss  xmm0, dword ptr [rbx+4]
              vmovss  dword ptr [rbp+4440h+br.hitPos+4], xmm0
              vmovss  xmm1, dword ptr [rbx+8]
              vmovss  dword ptr [rbp+4440h+br.hitPos+8], xmm1
              vsubss  xmm2, xmm2, dword ptr [r15+24h]
              vsubss  xmm0, xmm0, dword ptr [r15+28h]
              vsubss  xmm3, xmm1, dword ptr [r15+2Ch]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm0, xmm2, xmm2
              vmovss  [rbp+4440h+fireParams.travelDistance], xmm0
            }
            LODWORD(v179) = G_Bullet_GetDamage(&fireParams, &br, &_R15->wp.weapon, _R15->wp.isAlternate, v14);
            if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
              __debugbreak();
            v117 = GCombat::ms_gCombatSystem;
            Damage = GCombat::ms_gCombatSystem->Damage;
            v164 = 1;
            v119 = level.time - gameTime;
            v120 = _RBX->tagName;
            hand = v120;
            v173 = *(float *)&_RBX->modelIndex;
            LODWORD(v182) = _RBX->hitLocation;
            isAlternate = v183->wp.isAlternate;
            if ( v99 >= 0x14 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              v120 = hand;
            }
            LOBYTE(initialSimStep) = isAlternate;
            Damage(v117, *v100, v184, v184, &fireParams.dir, &_RBX->tagWorldPos, (int)v179, 0, fireParams.methodOfDeath, p_weapon, initialSimStep, (hitLocation_t)v182, LODWORD(v173), (scr_string_t)v120, v119, NULL, (const GExtraDamageParams *)&v164);
            if ( v161 )
            {
              if ( (unsigned __int64)v98 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              v121 = _RBX->tagName;
              if ( v99 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              G_BeamEntity_AddTargetEnt(beamEnt, *v100, v121, *(const ConeTargetInfo **)angles.v);
            }
            v14 = v184;
            _R15 = v183;
          }
          v98 = ++LODWORD(outAngle);
          ++v99;
          v100 += 106;
          v97 = (__int64)v174;
          v52 = v181;
        }
        while ( (signed __int64)v99 < *(_QWORD *)&perks );
      }
    }
  }
  v122 = v186;
  v123 = v170;
  if ( v165 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+4440h+br.hitPos]
      vsubss  xmm4, xmm0, dword ptr [r15+24h]
      vmovss  xmm1, dword ptr [rbp+4440h+br.hitPos+4]
      vsubss  xmm2, xmm1, dword ptr [r15+28h]
      vmovss  xmm0, dword ptr [rbp+4440h+br.hitPos+8]
      vsubss  xmm5, xmm0, dword ptr [r15+2Ch]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm4, xmm2, xmm1
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm4, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vmovss  [rbp+4440h+fireParams.travelDistance], xmm1
      vmovss  xmm0, dword ptr [r15+8Ch]
      vmovss  dword ptr [rsp+4550h+fmt], xmm0
      vmovaps xmm3, xmm9
    }
    ((void (__fastcall *)(GBullet *, gentity_s *, _QWORD))v186->SpreadFireTargets)(v186, v14, v170);
  }
  if ( v168 )
    v188->RestorePositions(v188, v14, "Bullet");
  GBullet::HandleImpaledEntities(v122);
  v189->FinishDeferItemDrops(v189);
  PhysPerfTrack_BulletServerTimeStop();
  if ( br.hitClientNum != -1 && v123 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2629, ASSERT_TYPE_ASSERT, "(br.hitClientNum == -1 || shotCount == 1)", (const char *)&queryFormat, "br.hitClientNum == CLIENTNUM_NONE || shotCount == 1") )
    __debugbreak();
  hitClientNum = br.hitClientNum;
  `eh vector destructor iterator'(ptr, 0x350ui64, 0x14ui64, (void (__fastcall *)(void *))GAssistTarget::~GAssistTarget);
  Sys_ProfEndNamedEvent();
  result = hitClientNum;
  _R11 = &v202;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
G_Bullet_FirstImpactNotify
==============
*/
void G_Bullet_FirstImpactNotify(const gentity_s *attacker, const BulletFireParams *bp, const BulletTraceResults *br, const Weapon *weapon, const bool isAlternate)
{
  scrContext_t *v11; 
  hitLocation_t partGroup; 
  scrContext_t *v13; 
  scr_string_t HitLocationString; 
  const char *v34; 
  scr_string_t partName; 
  const char *v36; 
  unsigned __int16 EntityHitId; 
  float value[4]; 

  __asm
  {
    vmovaps [rsp+98h+var_38], xmm6
    vmovaps [rsp+98h+var_48], xmm7
  }
  _RBP = bp;
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1821, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1822, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1823, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  v11 = ScriptContext_Server();
  partGroup = br->trace.partGroup;
  v13 = v11;
  if ( (unsigned int)partGroup >= HITLOC_NUM )
    HitLocationString = 0;
  else
    HitLocationString = G_Combat_GetHitLocationString(partGroup);
  Scr_AddConstString(v13, HitLocationString);
  Scr_AddVector(v13, br->hitPos.v);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+74h]
    vsubss  xmm5, xmm0, dword ptr [rbp+68h]
    vmovss  xmm1, dword ptr [rbp+78h]
    vsubss  xmm6, xmm1, dword ptr [rbp+6Ch]
    vmovss  xmm0, dword ptr [rbp+7Ch]
    vsubss  xmm7, xmm0, dword ptr [rbp+70h]
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  [rsp+98h+value], xmm0
    vmulss  xmm0, xmm7, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  [rsp+98h+var_60], xmm0
    vmovss  [rsp+98h+var_64], xmm1
  }
  Scr_AddVector(v13, value);
  GScr_Weapon_AddParam(v13, weapon, isAlternate);
  if ( ((br->trace.surfaceFlags >> 19) & 0x3F) != 0 )
  {
    v34 = Com_SurfaceTypeToName((br->trace.surfaceFlags >> 19) & 0x3F);
    Scr_AddString(v13, v34);
  }
  else
  {
    Scr_AddUndefined(v13);
  }
  Scr_AddVector(v13, br->trace.normal.v);
  partName = br->trace.partName;
  if ( partName )
  {
    v36 = SL_ConvertToString(partName);
    Scr_AddString(v13, v36);
  }
  else
  {
    Scr_AddUndefined(v13);
  }
  EntityHitId = Trace_GetEntityHitId(&br->trace);
  if ( (unsigned __int16)(EntityHitId - 2046) <= 1u )
    Scr_AddUndefined(v13);
  else
    GScr_AddEntity(&g_entities[EntityHitId]);
  GScr_Notify(attacker, scr_const.bullet_first_impact, 8u);
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_38]
    vmovaps xmm7, [rsp+98h+var_48]
  }
}

/*
==============
G_Bullet_GetDamage
==============
*/
int G_Bullet_GetDamage(const BulletFireParams *bp, const BulletTraceResults *br, const Weapon *weapon, bool isAlternate, const gentity_s *attacker)
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
  int result; 
  float fmt; 
  __int64 v35; 
  __int64 v36; 
  gclient_s *client; 
  bool attackera; 

  _R15 = bp;
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
    LODWORD(v35) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v35, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v14 = v12 - 1;
  if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v14] )
  {
    LODWORD(v36) = attacker->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v36) )
      __debugbreak();
  }
  v15 = attacker->r.ownerNum.number;
  if ( !v15 )
    goto LABEL_90;
  if ( (unsigned int)v15 - 1 >= 0x7FF )
  {
    LODWORD(v36) = 2047;
    LODWORD(v35) = v15 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v35, v36) )
      __debugbreak();
  }
  v16 = attacker->r.ownerNum.number;
  if ( (unsigned int)(v16 - 1) >= 0x800 )
  {
    LODWORD(v36) = 2048;
    LODWORD(v35) = v16 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v35, v36) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v17 = v16 - 1;
  if ( g_entities[v17].r.isInUse != g_entityIsInUse[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v17] )
  {
    LODWORD(v36) = attacker->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v36) )
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
    return G_Bullet_CalculateLinearDamage(v10, _R15, br, v27, v26);
  }
  v26 = isAlternate;
  v27 = weapon;
  if ( !BG_UsesShelvedDamageFalloff(v10, weapon, isAlternate) )
    return G_Bullet_CalculateLinearDamage(v10, _R15, br, v27, v26);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 268, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( br->trace.hitType == TRACE_HITTYPE_BEGIN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 270, ASSERT_TYPE_ASSERT, "( br->trace.hitType != TRACE_HITTYPE_NONE )", (const char *)&queryFormat, "br->trace.hitType != TRACE_HITTYPE_NONE") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r15+8Ch]
    vmovss  xmm3, dword ptr [r15+48h]; rangeScale
    vmovss  dword ptr [rsp+78h+fmt], xmm0
  }
  BG_GetShelvedDamageForRange(v10, weapon, isAlternate, *(float *)&_XMM3, fmt);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, dword ptr [r15+4Ch]
    vcvttss2si eax, xmm0
  }
  return result;
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

  _RDI = bp;
  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1065, ASSERT_TYPE_ASSERT, "(bp)", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1066, ASSERT_TYPE_ASSERT, "(br)", (const char *)&queryFormat, "br") )
    __debugbreak();
  v10 = attacker;
  v11 = isAlternate;
  G_Bullet_ImpactEffect(randSeed, _RDI, br, &br->trace.normal, weapon, isAlternate, attacker, 0, &outHitEffectEnt);
  if ( v10->sentient )
  {
    __asm { vmovss  xmm0, dword ptr [rdi+4Ch]; damageMultiplier }
    G_Bullet_NotifyActor(*(float *)&_XMM0, v10, &_RDI->start, &br->hitPos, weapon, v11);
  }
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

  _RSI = br;
  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 871, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 872, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 873, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !outHitEffectEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 874, ASSERT_TYPE_ASSERT, "( outHitEffectEnt )", (const char *)&queryFormat, "outHitEffectEnt") )
    __debugbreak();
  if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
    __debugbreak();
  v13 = GBullet::ms_gBulletSystem;
  v14 = GBullet::ms_gBulletSystem->UseFriendlyFire(GBullet::ms_gBulletSystem);
  GBullet::NotifyWhizbys(v13, bp, _RSI, attacker, v14);
  if ( _RSI->ignoreHitEnt || !v13->ImpactEffectCreate(v13, randSeed, bp, _RSI, normal, weapon, isAlternate, attacker, impactEffectFlags, outHitEffectEnt) )
  {
    *outHitEffectEnt = NULL;
    return;
  }
  if ( !*outHitEffectEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 892, ASSERT_TYPE_ASSERT, "( (*outHitEffectEnt) != 0 )", (const char *)&queryFormat, "(*outHitEffectEnt) != NULL") )
    __debugbreak();
  surfaceFlags = _RSI->trace.surfaceFlags;
  if ( (surfaceFlags & 4) != 0 )
    goto LABEL_26;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vcomiss xmm0, dword ptr [rsi]
  }
  if ( (surfaceFlags & 4) == 0 )
  {
LABEL_26:
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
  gentity_s *v19; 
  bool v21; 
  bool v22; 
  gentity_s *v23; 
  Vehicle *vehicle; 
  int v52; 
  vec3_t origin; 
  __int64 v54; 
  float v55; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 
  char v57; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  _RBP = bp;
  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 558, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( _RBP->methodOfDeath != MOD_EXPLOSIVE_BULLET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 559, ASSERT_TYPE_ASSERT, "( bp->methodOfDeath == MOD_EXPLOSIVE_BULLET )", (const char *)&queryFormat, "bp->methodOfDeath == MOD_EXPLOSIVE_BULLET") )
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
  __asm { vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin }
  v55 = vec3_origin.v[2];
  __asm { vmovsd  [rsp+148h+var_C8], xmm0 }
  *(double *)&_XMM0 = BG_WeaponBulletFire_GetExplDmg(weapon, isAlternate);
  __asm { vmovaps xmm7, xmm0 }
  *(double *)&_XMM0 = BG_WeaponBulletFire_GetExplDmgMin(weapon, isAlternate);
  __asm { vmovaps xmm8, xmm0 }
  *(double *)&_XMM0 = BG_WeaponBulletFire_GetExplRadius(weapon, isAlternate);
  v19 = br->hitEnt;
  __asm { vmovaps xmm9, xmm0 }
  if ( v19 && (v21 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v19->s.lerp.eFlags, ACTIVE, 0x10u), v22 = !v21, v21) )
  {
    v23 = br->hitEnt;
  }
  else
  {
    v22 = 1;
    v23 = NULL;
  }
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+84h]
    vmulss  xmm1, xmm5, dword ptr [rbx+14h]
    vmovss  xmm4, dword ptr [rbp+80h]
    vmulss  xmm0, xmm4, dword ptr [rbx+10h]
    vmovss  xmm6, dword ptr [rbp+88h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rbx+18h]
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, cs:__real@be000000
  }
  if ( v22 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3e800000
      vdivss  xmm3, xmm0, xmm3
    }
  }
  else
  {
    __asm { vmovss  xmm3, cs:__real@c0000000 }
  }
  __asm
  {
    vmulss  xmm0, xmm4, xmm3
    vaddss  xmm1, xmm0, dword ptr [rbx+60h]
    vmovss  dword ptr [rsp+148h+origin], xmm1
    vmulss  xmm2, xmm5, xmm3
    vaddss  xmm0, xmm2, dword ptr [rbx+64h]
    vmulss  xmm1, xmm6, xmm3
    vaddss  xmm2, xmm1, dword ptr [rbx+68h]
    vmovss  dword ptr [rsp+148h+origin+8], xmm2
    vmovss  dword ptr [rsp+148h+origin+4], xmm0
    vmovaps xmm2, xmm9; damageRadius
    vmovaps xmm1, xmm8; outerDamage
    vmovaps xmm0, xmm7; innerDamage
  }
  BG_BuildExplosionDamageRangeInfo_Interpolated(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2, &outDamageRangeInfo);
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@bf800000
    vmovss  dword ptr [rsp+148h+var_120], xmm0
  }
  ((void (__fastcall *)(GCombat *, vec3_t *, gentity_s *, gentity_s *, BgExplosionDamageRangeInfo *, int, __int64 *, gentity_s *, meansOfDeath_t, const Weapon *, bool, _BYTE, char))GCombat::ms_gCombatSystem->RadiusDamage)(GCombat::ms_gCombatSystem, &origin, inflictor, attacker, &outDamageRangeInfo, v52, &v54, v23, _RBP->methodOfDeath, weapon, isAlternate, 0, 1);
  if ( v23 )
  {
    vehicle = v23->vehicle;
    if ( vehicle )
    {
      __asm { vmovss  xmm3, cs:__real@3f800000; forceScale }
      G_Vehicle_Knockback(vehicle, &_RBP->dir, MOD_EXPLOSIVE_BULLET, *(float *)&_XMM3, &origin);
    }
  }
  _R11 = &v57;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
}

/*
==============
G_Bullet_NotifyActor
==============
*/

void __fastcall G_Bullet_NotifyActor(double damageMultiplier, gentity_s *attacker, const vec3_t *start, const vec3_t *end, const Weapon *weapon, bool isAlternate)
{
  unsigned int v12; 
  __int64 v13; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 439, ASSERT_TYPE_ASSERT, "(attacker)", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !attacker->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 440, ASSERT_TYPE_ASSERT, "(attacker->sentient)", (const char *)&queryFormat, "attacker->sentient") )
    __debugbreak();
  if ( s_bulletDeferNotifyActors )
  {
    v12 = s_bulletNumDeferredNotifies;
    if ( s_bulletNumDeferredNotifies < 0x40 )
      goto LABEL_13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 449, ASSERT_TYPE_ASSERT, "(s_bulletNumDeferredNotifies < MAX_DEFERRED_BULLET_NOTIFIES)", (const char *)&queryFormat, "s_bulletNumDeferredNotifies < MAX_DEFERRED_BULLET_NOTIFIES") )
      __debugbreak();
    v12 = s_bulletNumDeferredNotifies;
    if ( s_bulletNumDeferredNotifies < 0x40 )
    {
LABEL_13:
      s_bulletNumDeferredNotifies = v12 + 1;
      v13 = v12;
      _RDX = s_bulletDeferredNotifies;
      _RCX = v13;
      __asm { vmovss  dword ptr [rcx+rdx], xmm6 }
      s_bulletDeferredNotifies[_RCX].attacker = attacker;
      s_bulletDeferredNotifies[_RCX].start.v[0] = start->v[0];
      s_bulletDeferredNotifies[_RCX].start.v[1] = start->v[1];
      s_bulletDeferredNotifies[_RCX].start.v[2] = start->v[2];
      s_bulletDeferredNotifies[_RCX].end.v[0] = end->v[0];
      s_bulletDeferredNotifies[_RCX].end.v[1] = end->v[1];
      s_bulletDeferredNotifies[_RCX].end.v[2] = end->v[2];
      _RAX = weapon;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rcx+rdx+28h], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rcx+rdx+48h], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rcx+rdx+58h], xmm0
      }
      *(_DWORD *)&s_bulletDeferredNotifies[_RCX].weapon.weaponCamo = *(_DWORD *)&weapon->weaponCamo;
      s_bulletDeferredNotifies[_RCX].isAlternate = isAlternate;
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6; damageMultiplier }
    G_Bullet_ProcessNotifyActor(*(float *)&_XMM0, attacker, start, end, weapon, isAlternate);
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
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
  int v19; 
  int v20; 
  const HyperBurstInfo *HyperBurstInfo; 
  gentity_s *hitEnt; 
  bool v23; 
  bool v24; 
  PhysicsObject *Base; 
  unsigned int v26; 
  Weapon *v42; 
  gentity_s *v43; 
  char v44; 
  int *ignoreHitEntityQueue; 
  gentity_s *v46; 
  entityType_s eType; 
  int v48; 
  __int16 EntityIndex; 
  hitLocation_t partGroup; 
  GCombat *CombatSystem; 
  scr_string_t partName; 
  meansOfDeath_t methodOfDeath; 
  unsigned int modelIndex; 
  damageReturnCode_t (__fastcall *v59)(GCombat *, gentity_s *, const gentity_s *, gentity_s *, const vec3_t *, const vec3_t *, int, int, int, const Weapon *, bool, hitLocation_t, unsigned int, scr_string_t, int, const vec3_t *, const GExtraDamageParams *); 
  gentity_s *v60; 
  damageReturnCode_t v61; 
  __int16 v62; 
  bool v63; 
  char result; 
  unsigned int hitId; 
  ScriptableInstanceContext *InstanceCommonContext; 
  BOOL isMelee; 
  int v68; 
  char v69; 
  bool v70; 
  int iDamage; 
  Weapon *r_weapon; 
  unsigned int *randSeeda; 
  GBullet *v74; 
  gentity_s *inflictor; 
  gentity_s *hitEffectEnt; 
  gentity_s *v77; 

  _RDI = bp;
  r_weapon = (Weapon *)weapon;
  v70 = isAlternate;
  v77 = attacker;
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
  v74 = v15;
  v69 = 1;
  if ( attacker->sentient )
  {
    __asm { vmovss  xmm0, dword ptr [rdi+4Ch]; damageMultiplier }
    G_Bullet_NotifyActor(*(double *)&_XMM0, attacker, &_RDI->start, &br->hitPos, weapon, isAlternate);
  }
  inflictor = G_Bullet_GetInflictor(attacker);
  Damage = G_Bullet_GetDamage(_RDI, br, weapon, isAlternate, attacker);
  v19 = dFlags | 0x800;
  iDamage = Damage;
  if ( hand != WEAPON_HAND_LEFT )
    v19 = dFlags;
  v20 = v19;
  if ( _RDI->shotCount == 2 )
  {
    HyperBurstInfo = BG_GetHyperBurstInfo(r_weapon, v70);
    if ( !HyperBurstInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1184, ASSERT_TYPE_ASSERT, "(hyperBurstInfo)", (const char *)&queryFormat, "hyperBurstInfo") )
      __debugbreak();
    v24 = !HyperBurstInfo->enabled;
    v15 = v74;
    if ( !v24 )
      v20 = v19 | 0x2000;
  }
  hitEnt = br->hitEnt;
  v23 = 0;
  v24 = hitEnt == NULL;
  if ( hitEnt )
  {
    v23 = hitEnt->s.number == 2046;
    v24 = hitEnt->s.number == 2047;
    if ( (unsigned __int16)(hitEnt->s.number - 2046) > 1u )
    {
      Base = G_PhysicsObject_GetBase(hitEnt->s.number, LOCAL_CLIENT_INVALID);
      if ( !Base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1195, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
        __debugbreak();
      v26 = Base->physicsInstances[0];
      v23 = v26 != -1;
      v24 = v26 == -1;
      if ( v26 != -1 )
        Physics_ApplyBulletForceInstance(PHYSICS_WORLD_ID_FIRST, v26, &br->hitPos, &_RDI->dir, inflictor->s.number, 0);
    }
  }
  _RCX = &br->hitPos;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vsubss  xmm4, xmm0, dword ptr [r9]
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm3, xmm0, dword ptr [r9+8]
    vsubss  xmm2, xmm1, dword ptr [r9+4]
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vsubss  xmm3, xmm0, dword ptr [rdi+8Ch]
    vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm3, cs:__real@3a83126f
  }
  G_Trigger_DamageCheckHit(PHYSICS_WORLD_ID_SERVER_DETAIL, attacker, v23 || v24, &_RDI->start, &br->hitPos, iDamage, _RDI->methodOfDeath);
  v42 = r_weapon;
  hitEffectEnt = NULL;
  if ( processFx )
    G_Bullet_ImpactEffect(randSeeda, _RDI, br, &br->trace.normal, r_weapon, v70, attacker, 0, &hitEffectEnt);
  if ( _RDI->methodOfDeath == MOD_EXPLOSIVE_BULLET && (br->trace.contents & 0x10) == 0 )
  {
    G_Bullet_ImpactExplosion(_RDI, br, r_weapon, v70, inflictor, attacker);
    v69 = 0;
  }
  if ( BG_IsHitSurfaceTransparent(&br->trace) )
  {
    v43 = hitEffectEnt;
    *outImpactFlags |= 0x100u;
    if ( v43 )
      ((void (__fastcall *)(GBullet *))v15->ImpactEffectSetAdditionalFlags)(v15);
  }
  if ( br->ignoreHitEnt )
    return v69;
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
      ScriptableSv_Damage(inflictor, attacker, hitId, &InstanceCommonContext->origin, &_RDI->dir, _RDI->methodOfDeath, r_weapon, v70, (const scr_string_t)br->trace.partName, iDamage, v20, 0);
    }
    return v69;
  }
  LOBYTE(isMelee) = v70;
  if ( v15->ProcessRiotShield(v15, randSeeda, _RDI, br, v42, isMelee, attacker, gameTime, v20, iDamage, (bool *)&v69) || !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&br->hitEnt->s.lerp.eFlags, ACTIVE, 0x10u) )
    return v69;
  if ( (v20 & 8) == 0 )
    goto LABEL_46;
  if ( _RDI->ignoreHitEntCount > 0 )
  {
    ignoreHitEntityQueue = _RDI->ignoreHitEntityQueue;
    while ( 1 )
    {
      v46 = &g_entities[*(__int16 *)ignoreHitEntityQueue];
      if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      eType = v46->s.eType;
      if ( ((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM )
        break;
      ++v16;
      ++ignoreHitEntityQueue;
      if ( v16 >= _RDI->ignoreHitEntCount )
        goto LABEL_55;
    }
LABEL_46:
    v44 = 0;
    goto LABEL_56;
  }
LABEL_55:
  v44 = 1;
LABEL_56:
  v48 = v20 | 0x4000;
  if ( !v44 )
    v48 = v20;
  if ( BG_IsArmorPiercing(r_weapon, v70) )
    v48 |= 2u;
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
  G_Bullet_DebugDrawHit(br, _RDI);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+118h+iDamage]
    vmulss  xmm0, xmm0, dword ptr [rdi+54h]
    vcvttss2si esi, xmm0
  }
  G_CoverWall_DamageCheckHit(br, _ESI);
  CombatSystem = GCombat::GetCombatSystem();
  partName = br->trace.partName;
  methodOfDeath = _RDI->methodOfDeath;
  modelIndex = br->trace.modelIndex;
  v59 = CombatSystem->Damage;
  v60 = br->hitEnt;
  BYTE1(iDamage) = initialSimStep;
  LOBYTE(v68) = v70;
  LOBYTE(iDamage) = 1;
  v61 = v59(CombatSystem, v60, inflictor, v77, &_RDI->dir, &br->hitPos, _ESI, v48, methodOfDeath, r_weapon, v68, partGroup, modelIndex, partName, level.time - gameTime, &br->trace.normal, (const GExtraDamageParams *)&iDamage);
  v62 = G_GetEntityIndex(br->hitEnt);
  v63 = G_IsEntityInUse(v62) && br->hitEnt->health > 0;
  if ( (int)randSeeda > 0 && !v63 )
    *outImpactFlags |= 2u;
  if ( br->trace.partGroup == 20 )
  {
    result = 0;
    *outImpactFlags |= 0x80u;
    v69 = 0;
  }
  else
  {
    result = v69;
  }
  if ( hitEffectEnt )
  {
    if ( v61 == DAMAGE_RETURNCODE_DEFERRED )
      GBullet::DeferImpactEffectFlags(v74, br->hitEnt, hitEffectEnt, *outImpactFlags);
    else
      v74->ImpactEffectSetAdditionalFlags(v74, hitEffectEnt, *outImpactFlags);
    return v69;
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
  unsigned int j; 
  __int64 v5; 
  gentity_s *originator; 
  ai_event_t eType; 

  _R14 = 0x140000000ui64;
  for ( i = 0; i < s_bulletNumDeferredNotifies; ++i )
  {
    _R10 = i;
    __asm { vmovss  xmm0, dword ptr [r10+r14+0C8A4B40h]; damageMultiplier }
    G_Bullet_ProcessNotifyActor(*(float *)&_XMM0, s_bulletDeferredNotifies[_R10].attacker, &s_bulletDeferredNotifies[_R10].start, &s_bulletDeferredNotifies[_R10].end, &s_bulletDeferredNotifies[_R10].weapon, s_bulletDeferredNotifies[_R10].isAlternate);
  }
  for ( j = 0; j < s_bulletNumDeferredGlassNotifies; ++j )
  {
    v5 = j;
    originator = s_bulletDeferredGlassNotifies[v5].originator;
    eType = s_bulletDeferredGlassNotifies[v5].eType;
    if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 431, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
      __debugbreak();
    Actor_BroadcastGlassEvent(originator, eType, &s_bulletDeferredGlassNotifies[v5].teamFlags, &s_bulletDeferredGlassNotifies[v5].vOrigin);
  }
  s_bulletNumDeferredGlassNotifies = 0;
  s_bulletNumDeferredNotifies = 0;
}

/*
==============
G_Bullet_ProcessNotifyActor
==============
*/

void __fastcall G_Bullet_ProcessNotifyActor(double damageMultiplier, gentity_s *attacker, const vec3_t *start, const vec3_t *end, const Weapon *weapon, bool isAlternate)
{
  bool v12; 
  bool v17; 
  ai_event_t v19; 
  unsigned __int64 eTeam; 
  unsigned __int64 v24; 
  unsigned int v59; 
  unsigned __int64 v60; 
  bool v64; 
  unsigned int v68; 
  const WeaponDef *weapDef; 
  __int64 v72; 
  __int64 v73; 
  bitarray<224> result; 
  vec3_t vStart; 
  bitarray<224> v76; 
  bitarray<224> teamFlags; 

  __asm { vmovaps [rsp+160h+var_40], xmm6 }
  v12 = isAlternate;
  _R14 = start;
  __asm { vmovaps xmm6, xmm0 }
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 373, ASSERT_TYPE_ASSERT, "(attacker)", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  v17 = attacker->sentient == NULL;
  if ( attacker->sentient )
  {
    __asm
    {
      vmovaps [rsp+160h+var_80], xmm10
      vmovaps [rsp+160h+var_90], xmm11
      vmovss  xmm11, cs:__real@3f800000
      vucomiss xmm6, xmm11
    }
    if ( v17 )
    {
      v19 = AI_EV_GUNSHOT;
      if ( BG_IsSilenced(weapon, isAlternate) )
        v19 = AI_EV_SILENCED_SHOT;
      eTeam = (unsigned int)attacker->sentient->eTeam;
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
        _RAX = Com_TeamsSP_GetAllTeamFlags();
      else
        _RAX = Com_TeamsMP_GetAllTeamFlags();
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rbp+60h+teamFlags.array], xmm0
        vmovsd  xmm1, qword ptr [rax+10h]
        vmovsd  qword ptr [rbp+60h+teamFlags.array+10h], xmm1
      }
      teamFlags.array[6] = _RAX->array[6];
      if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
        __debugbreak();
      teamFlags.array[eTeam >> 5] &= ~(0x80000000 >> (eTeam & 0x1F));
      Actor_BroadcastPointEvent(attacker, v19, &teamFlags, _R14);
      if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
      {
        v24 = (unsigned int)attacker->sentient->eTeam;
        memset(&result, 0, sizeof(result));
        if ( (unsigned int)v24 >= 0xE0 )
        {
          LODWORD(v73) = 224;
          LODWORD(v72) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v72, v73) )
            __debugbreak();
        }
        result.array[v24 >> 5] |= 0x80000000 >> (v24 & 0x1F);
        Actor_BroadcastPointEvent(attacker, AI_EV_GUNSHOT_TEAMMATE, &result, end);
      }
      v12 = isAlternate;
    }
    __asm { vmovss  xmm10, dword ptr [r14] }
    if ( attacker->client )
    {
      __asm
      {
        vsubss  xmm5, xmm10, dword ptr [r12]
        vmovaps [rsp+160h+var_50], xmm7
        vmovaps [rsp+160h+var_60], xmm8
        vmovss  xmm8, dword ptr [r14+4]
        vsubss  xmm6, xmm8, dword ptr [r12+4]
        vmovaps [rsp+160h+var_70], xmm9
        vmovss  xmm9, dword ptr [r14+8]
        vsubss  xmm7, xmm9, dword ptr [r12+8]
        vmulss  xmm0, xmm5, xmm5
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm11, xmm0
        vmovss  xmm3, cs:__real@43480000
        vdivss  xmm4, xmm11, xmm0
        vmulss  xmm1, xmm5, xmm4
        vmulss  xmm0, xmm1, xmm3
        vaddss  xmm1, xmm0, xmm10
        vmulss  xmm2, xmm6, xmm4
        vmulss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rsp+160h+vStart], xmm1
        vaddss  xmm1, xmm0, xmm8
        vmovaps xmm8, [rsp+160h+var_60]
        vmulss  xmm2, xmm7, xmm4
        vmovaps xmm7, [rsp+160h+var_50]
        vmulss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rsp+160h+vStart+4], xmm1
        vaddss  xmm1, xmm0, xmm9
        vmovaps xmm9, [rsp+160h+var_70]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+4]
        vmovss  xmm1, dword ptr [r14+8]
        vmovss  dword ptr [rsp+160h+vStart+4], xmm0
        vmovss  dword ptr [rsp+160h+vStart], xmm10
      }
    }
    __asm
    {
      vmovaps xmm11, [rsp+160h+var_90]
      vmovaps xmm10, [rsp+160h+var_80]
      vmovss  dword ptr [rbp+60h+vStart+8], xmm1
    }
    if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
      __debugbreak();
    if ( GBullet::ms_gBulletSystem->UseAISuppression(GBullet::ms_gBulletSystem) )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
        _RAX = Com_TeamsSP_GetAllTeamFlags();
      else
        _RAX = Com_TeamsMP_GetAllTeamFlags();
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rbp+60h+var_D8.array], xmm0
        vmovsd  xmm1, qword ptr [rax+10h]
        vmovsd  qword ptr [rbp+60h+var_D8.array+10h], xmm1
      }
      v59 = _RAX->array[6];
      goto LABEL_49;
    }
    v60 = (unsigned int)attacker->sentient->eTeam;
    if ( attacker->client )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
        _RAX = Com_TeamsSP_GetAllTeamFlags();
      else
        _RAX = Com_TeamsMP_GetAllTeamFlags();
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovsd  xmm1, qword ptr [rax+10h]
      }
      result.array[6] = _RAX->array[6];
      __asm
      {
        vmovups xmmword ptr [rsp+160h+result.array], xmm0
        vmovsd  qword ptr [rsp+160h+result.array+10h], xmm1
      }
      if ( (unsigned int)v60 >= 0xE0 )
      {
        LODWORD(v73) = 224;
        LODWORD(v72) = v60;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v72, v73) )
          __debugbreak();
      }
      result.array[v60 >> 5] &= ~(0x80000000 >> (v60 & 0x1F));
    }
    else
    {
      if ( level.teammode == TEAMMODE_FFA )
      {
        v64 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
          _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
        else
          _RAX = Com_TeamsMP_GetAllTeamFlags();
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovsd  xmm1, qword ptr [rax+10h]
        }
        v68 = _RAX->array[6] & 0xFFEFFFFF;
        __asm { vmovups xmmword ptr [rsp+160h+result.array], xmm0 }
        if ( v64 )
          result.array[0] &= ~0x8000000u;
        v59 = v68 & 0xFF9FFFFF;
        goto LABEL_48;
      }
      Com_Teams_GetEnemyTeamFlags(&result, (team_t)v60);
    }
    __asm { vmovsd  xmm1, qword ptr [rsp+160h+result.array+10h] }
    v59 = result.array[6];
LABEL_48:
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+160h+result.array]
      vmovups xmmword ptr [rbp+60h+var_D8.array], xmm0
      vmovsd  qword ptr [rbp+60h+var_D8.array+10h], xmm1
    }
LABEL_49:
    v76.array[6] = v59;
    weapDef = BG_WeaponDef(weapon, v12);
    Actor_BroadcastLineEvent(attacker, AI_EV_BULLET, &v76, &vStart, end, weapDef);
  }
  __asm { vmovaps xmm6, [rsp+160h+var_40] }
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

void __fastcall G_Bullet_SetupFireParams(const gentity_s *const attacker, const gentity_s *const weapon, const int serverTime, double spread, const int sequence, const PlayerHandIndex hand, const unsigned int eventParm, GWeaponFireParms *const outParams)
{
  int v16; 
  const playerState_s *EntityPlayerStateConst; 
  __int64 v19; 
  bitarray<64> *p_attackerPerks; 
  unsigned int weaponShotCount; 
  const playerState_s *v22; 
  unsigned int v27; 
  bool isAlternate; 
  unsigned __int16 v30; 
  bool v31; 
  bool v34; 
  char v41; 
  void *retaddr; 
  unsigned int pHoldrand; 

  _RAX = &retaddr;
  _RBX = outParams;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v16 = serverTime;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmm9, xmm3
  }
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2125, ASSERT_TYPE_ASSERT, "( attacker != nullptr )", (const char *)&queryFormat, "attacker != nullptr") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2126, ASSERT_TYPE_ASSERT, "( outParams != nullptr )", (const char *)&queryFormat, "outParams != nullptr") )
    __debugbreak();
  outParams = (GWeaponFireParms *const)GWeaponMap::GetInstance();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(attacker);
  v19 = hand;
  p_attackerPerks = &_RBX->bullet.attackerPerks;
  weaponShotCount = 0;
  v22 = EntityPlayerStateConst;
  if ( EntityPlayerStateConst )
  {
    p_attackerPerks->array[0] = EntityPlayerStateConst->perks.array[0];
    _RBX->bullet.attackerPerks.array[1] = EntityPlayerStateConst->perks.array[1];
    LOBYTE(hand) = EntityPlayerStateConst->weapState[v19].weaponFiredAtMaxCharge != 0;
  }
  else
  {
    p_attackerPerks->array[0] = 0;
    _RBX->bullet.attackerPerks.array[1] = 0;
    LOBYTE(hand) = 0;
  }
  *(double *)&_XMM0 = BG_GetADSDamageRangeScale((const BgWeaponMap *)outParams, EntityPlayerStateConst, &_RBX->wp.weapon, _RBX->wp.isAlternate);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovss  xmm7, cs:__real@3f800000
  }
  if ( BG_HasPerk(&_RBX->bullet.attackerPerks, 0x18u) )
  {
    _RBP = DCONST_DVARFLT_perk_longerRangeScale;
    if ( !DCONST_DVARFLT_perk_longerRangeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_longerRangeScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm { vmovss  xmm6, dword ptr [rbp+28h] }
    v16 = serverTime;
  }
  else
  {
    __asm { vmovaps xmm6, xmm7 }
  }
  if ( v22 )
  {
    v27 = BG_srand_timeangles(v22->serverTime + ((_DWORD)v19 != 0 ? 0xA : 0), &v22->viewangles);
  }
  else
  {
    pHoldrand = v16 + ((_DWORD)v19 != 0 ? 0xA : 0);
    BG_srand(&pHoldrand);
    v27 = pHoldrand;
  }
  isAlternate = _RBX->wp.isAlternate;
  _RBX->bullet.randSeed = v27;
  if ( !GBallistics::ms_gBallisticsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 79, ASSERT_TYPE_ASSERT, "( ms_gBallisticsSystem )", (const char *)&queryFormat, "ms_gBallisticsSystem") )
    __debugbreak();
  *(double *)&_XMM0 = BG_GetBulletRange<GBallisticInstance>((const BgWeaponMap *)outParams, GBallistics::ms_gBallisticsSystem, v22, &attacker->s, &_RBX->bullet.attackerPerks, &_RBX->wp.weapon, isAlternate);
  __asm
  {
    vmulss  xmm1, xmm6, xmm8
    vmovss  dword ptr [rbx+94h], xmm1
    vmovss  dword ptr [rbx+90h], xmm0
  }
  if ( ((int)v19 < 0 || (unsigned int)v19 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum PlayerHandIndex>(enum PlayerHandIndex)", "unsigned", (unsigned __int8)v19, "signed", v19) )
    __debugbreak();
  __asm { vmovss  dword ptr [rbx+8Ch], xmm9 }
  _RBX->bullet.attackerHand = v19;
  _RBX->bullet.attackerEntity = truncate_cast<unsigned short,short>(attacker->s.number);
  if ( weapon )
    v30 = truncate_cast<unsigned short,short>(weapon->s.number);
  else
    v30 = 2046;
  _RBX->bullet.weaponEntity = v30;
  _RBX->bullet.shipEntity = 2047;
  _RBX->bullet.eventParm = eventParm;
  if ( v22 )
    weaponShotCount = v22->weapState[v19].weaponShotCount;
  v31 = _RBX->wp.isAlternate;
  _RBX->bullet.shotCount = weaponShotCount;
  if ( BG_IsTargetAssistActive(v22, &attacker->s, &_RBX->wp.weapon, v31) )
    _RBX->bullet.flags[0] |= 1u;
  if ( BG_GameInterface_HasCustomBulletTargetLogic(v22) )
    _RBX->bullet.flags[0] |= 2u;
  if ( BG_HasPerk(&_RBX->bullet.attackerPerks, 0x1Cu) )
  {
    _RDI = DVARFLT_perk_bulletPenetrationMultiplier;
    if ( !DVARFLT_perk_bulletPenetrationMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_bulletPenetrationMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm0, dword ptr [rdi+28h] }
  }
  else
  {
    __asm { vmovaps xmm0, xmm7 }
  }
  v34 = (_BYTE)hand == WEAPON_HAND_DEFAULT;
  __asm { vmovss  dword ptr [rbx+98h], xmm0 }
  if ( v34 || !BG_IsChargeShotWeapon(&_RBX->wp.weapon, _RBX->wp.isAlternate) )
  {
    __asm { vmovss  dword ptr [rbx+9Ch], xmm7 }
  }
  else
  {
    *(double *)&_XMM0 = BG_WeaponCharge_GetFireAtMaxDamageMultiplier(&_RBX->wp.weapon, _RBX->wp.isAlternate);
    __asm { vmovss  dword ptr [rbx+9Ch], xmm0 }
  }
  __asm { vmovaps xmm7, [rsp+0C8h+var_58] }
  _R11 = &v41;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
G_Bullet_Trace
==============
*/
bool G_Bullet_Trace(BulletFireParams *bp, const Weapon *weapon, bool isAlternate, gentity_s *attacker, BulletTraceResults *br, int lastSurfaceType, bool allowHitSelf)
{
  const dvar_t *v17; 
  bool enabled; 
  unsigned __int8 *WeaponPriorityMap; 
  int IgnoreHitEntityCount; 
  const vec3_t *p_end; 
  const vec3_t *p_start; 
  unsigned __int16 EntityHitId; 
  gentity_s *v46; 
  gentity_s *hitEnt; 
  const dvar_t *v73; 
  gentity_s *v74; 
  GWeaponMap *Instance; 
  const Weapon *v76; 
  const WeaponDef *v77; 
  gentity_s *RootParent; 
  gentity_s *v79; 
  gentity_s *v80; 
  unsigned int eType; 
  int v82; 
  bool v83; 
  unsigned int v84; 
  bool v85; 
  BOOL fmt; 
  int *skipEntities; 
  int *skipEntitiesa; 
  int *skipEntitiesb; 
  __int64 skipEntityCount; 
  __int64 skipChildren; 
  __int64 contentMask; 
  double locational; 
  unsigned __int8 *priorityMap; 
  double phaseSelection; 
  double v97; 
  double v98; 
  double v99; 
  double v100; 
  double v101; 
  double v102; 
  double v103; 
  void *retaddr; 

  _RAX = &retaddr;
  _RDI = br;
  _RSI = bp;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
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
  v17 = DVARBOOL_killswitch_bullet_penetration_fix;
  if ( !DVARBOOL_killswitch_bullet_penetration_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_bullet_penetration_fix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  enabled = v17->current.enabled;
  WeaponPriorityMap = BG_GetWeaponPriorityMap(weapon, isAlternate);
  IgnoreHitEntityCount = BG_GetIgnoreHitEntityCount(_RSI);
  p_end = &_RSI->end;
  p_start = &_RSI->start;
  skipEntitiesa = _RSI->ignoreHitEntityQueue;
  if ( enabled )
    PhysicsQuery_LegacyTraceSkipEntities(PHYSICS_WORLD_ID_SERVER_DETAIL, &br->trace, p_start, p_end, &bounds_origin, skipEntitiesa, IgnoreHitEntityCount, 0, 41969969, 1, WeaponPriorityMap, All);
  else
    PhysicsQuery_LegacyBulletTrace(PHYSICS_WORLD_ID_SERVER_DETAIL, &br->trace, p_start, p_end, &bounds_origin, skipEntitiesa, IgnoreHitEntityCount, 0, 41969969, 1, WeaponPriorityMap, All);
  EntityHitId = Trace_GetEntityHitId(&br->trace);
  if ( (unsigned __int16)(EntityHitId - 2046) <= 1u )
  {
    v46 = NULL;
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
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+0Ch]
        vmovss  xmm1, dword ptr [rdi+8]
        vmovss  xmm2, dword ptr [rdi+4]
        vmovss  xmm3, dword ptr [rdi]
        vmovss  xmm4, dword ptr [rsi+7Ch]
        vmovss  xmm5, dword ptr [rsi+78h]
        vmovss  xmm6, dword ptr [rsi+74h]
        vmovss  xmm7, dword ptr [rsi+70h]
        vmovaps [rsp+138h+var_78], xmm8
        vmovss  xmm8, dword ptr [rsi+6Ch]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+138h+var_A8], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+138h+var_B0], xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  [rsp+138h+var_B8], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+138h+var_C0], xmm3
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  [rsp+138h+var_C8], xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+138h+var_D0], xmm5
        vmovaps [rsp+138h+var_88], xmm9
        vmovss  xmm9, dword ptr [rsi+68h]
        vcvtss2sd xmm6, xmm6, xmm6
        vmovsd  [rsp+138h+var_D8], xmm6
        vcvtss2sd xmm7, xmm7, xmm7
        vmovsd  qword ptr [rsp+138h+phaseSelection], xmm7
        vcvtss2sd xmm8, xmm8, xmm8
        vmovsd  [rsp+138h+priorityMap], xmm8
        vcvtss2sd xmm9, xmm9, xmm9
        vmovsd  qword ptr [rsp+138h+locational], xmm9
      }
      LODWORD(contentMask) = br->trace.hitId;
      LODWORD(skipChildren) = br->trace.hitType;
      LODWORD(skipEntityCount) = EntityHitId;
      __asm
      {
        vmovaps xmm9, [rsp+138h+var_88]
        vmovaps xmm8, [rsp+138h+var_78]
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1010, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( hitEntId ))", "%s\n\tGot invalid entity from bullet raycast. Ent Idx: %d %d %d Start: [%.2f, %.2f, %.2f] End: [%.2f, %.2f, %.2f] Fraction:%.2f Pos: [%.2f, %.2f, %.2f] Surface Flags: %d Contents: %d", "G_IsEntityInUse( hitEntId )", skipEntityCount, skipChildren, contentMask, locational, *(double *)&priorityMap, phaseSelection, v97, v98, v99, v100, v101, v102, v103, br->trace.surfaceFlags, br->trace.contents) )
        __debugbreak();
    }
    v46 = &g_entities[EntityHitId];
  }
  br->hitEnt = v46;
  __asm
  {
    vmovss  xmm7, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rsi+74h]
    vsubss  xmm1, xmm0, dword ptr [rsi+68h]
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm6, xmm2, dword ptr [rsi+68h]
    vmovss  dword ptr [rdi+60h], xmm6
    vmovss  xmm0, dword ptr [rsi+78h]
    vsubss  xmm1, xmm0, dword ptr [rsi+6Ch]
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm5, xmm2, dword ptr [rsi+6Ch]
    vmovss  dword ptr [rdi+64h], xmm5
    vmovss  xmm0, dword ptr [rsi+7Ch]
    vsubss  xmm1, xmm0, dword ptr [rsi+70h]
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm4, xmm2, dword ptr [rsi+70h]
    vmovaps xmm7, [rsp+138h+var_68]
    vmovss  dword ptr [rdi+68h], xmm4
    vsubss  xmm2, xmm6, dword ptr [rsi+68h]
    vsubss  xmm0, xmm5, dword ptr [rsi+6Ch]
    vsubss  xmm3, xmm4, dword ptr [rsi+70h]
    vmovaps xmm6, [rsp+138h+var_58]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vaddss  xmm3, xmm0, dword ptr [rsi+8Ch]
    vmovss  dword ptr [rsi+8Ch], xmm3
  }
  hitEnt = br->hitEnt;
  if ( hitEnt && hitEnt->s.eType == ET_TURRET )
  {
    v73 = DVARBOOL_g_turretAllowDeferDamageToParentVehicle;
    if ( !DVARBOOL_g_turretAllowDeferDamageToParentVehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_turretAllowDeferDamageToParentVehicle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v73);
    if ( v73->current.enabled )
    {
      v74 = br->hitEnt;
      Instance = GWeaponMap::GetInstance();
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !v74 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      v76 = BgWeaponMap::GetWeapon(Instance, v74->s.weaponHandle);
      v77 = BG_WeaponDef(v76, 0);
      if ( !v77 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 938, ASSERT_TYPE_ASSERT, "(turretDef)", (const char *)&queryFormat, "turretDef") )
        __debugbreak();
      if ( v77->deferDamageToParentVehicle )
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
  v79 = br->hitEnt;
  if ( v79 )
  {
    if ( br->trace.partGroup == 19 )
    {
      br->trace.surfaceFlags = 15204352;
    }
    else
    {
      if ( BG_IsCharacterEntity(&v79->s) )
        goto LABEL_81;
      v80 = br->hitEnt;
      if ( !v80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      eType = (unsigned __int16)v80->s.eType;
      if ( (unsigned __int16)eType <= 0x15u )
      {
        v82 = 2359300;
        if ( _bittest(&v82, eType) )
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
    v83 = GBullet::ms_gBulletSystem->TraceIgnoreHitEntity(GBullet::ms_gBulletSystem, _RSI, br, attacker, fmt);
  }
  else
  {
    v83 = 0;
  }
  br->ignoreHitEnt = v83;
  v84 = (br->trace.surfaceFlags >> 19) & 0x3F;
  v85 = (br->trace.surfaceFlags & 0x100) == 0;
  br->depthSurfaceType = v84;
  if ( v85 )
  {
    if ( !v84 && lastSurfaceType )
    {
      br->depthSurfaceType = lastSurfaceType;
      v84 = lastSurfaceType;
    }
    if ( v84 >= 0x40 )
    {
      LODWORD(skipEntityCount) = 64;
      LODWORD(skipEntitiesb) = v84;
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
  const dvar_t *v14; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  int ShelvedDamageRanges; 
  int v49; 
  int v50; 
  __int64 v52; 
  char v70; 
  float maxDamageRange; 
  float minDamageRange; 
  vec3_t starta; 
  vec3_t enda; 
  vec4_t color; 
  float rangeArray[4]; 

  v14 = DVARINT_g_debugBullets;
  _R15 = end;
  _R14 = start;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.integer == 1 )
    goto LABEL_13;
  v19 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( v19->current.integer == 2 )
    goto LABEL_13;
  v20 = DVARINT_g_debugBullets;
  if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v20->current.integer == 4 )
  {
LABEL_13:
    __asm
    {
      vmovss  xmm0, dword ptr [r15]
      vsubss  xmm5, xmm0, dword ptr [r14]
      vmovss  xmm1, dword ptr [r15+4]
      vmovss  xmm0, dword ptr [r15+8]
      vmovaps [rsp+180h+var_40], xmm6
      vsubss  xmm6, xmm1, dword ptr [r14+4]
      vmovaps [rsp+180h+var_50], xmm7
      vsubss  xmm7, xmm0, dword ptr [r14+8]
      vmovaps [rsp+180h+var_60], xmm8
      vmovss  xmm8, [rbp+80h+travelDistance]
      vmovaps [rsp+180h+var_70], xmm9
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vmovaps [rsp+180h+var_80], xmm10
      vblendvps xmm0, xmm4, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmovaps [rsp+180h+var_90], xmm11
      vmovaps [rsp+180h+var_A0], xmm12
      vmulss  xmm10, xmm5, xmm2
      vmulss  xmm11, xmm6, xmm2
      vmulss  xmm12, xmm7, xmm2
      vaddss  xmm9, xmm4, xmm8
      vmovss  xmm3, [rbp+80h+rangeScale]; rangeScale
    }
    if ( BG_UsesShelvedDamageFalloff(WEAP_DMG_CALC_TYPE_DEFAULT, weapon, isAlternate) )
    {
      ShelvedDamageRanges = BG_GetShelvedDamageRanges(WEAP_DMG_CALC_TYPE_DEFAULT, weapon, isAlternate, *(float *)&_XMM3, rangeArray, 4);
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
        vmovaps xmmword ptr [rsp+180h+color], xmm0
        vmovups xmm0, xmmword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow
        vmovaps [rbp+80h+var_100], xmm0
        vmovups xmm0, xmmword ptr cs:?colorCyan@@3Tvec4_t@@B; vec4_t const colorCyan
        vmovaps [rbp+80h+var_F0], xmm0
        vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
        vmovaps [rbp+80h+var_E0], xmm0
        vmovups xmm0, xmmword ptr cs:?colorDkGrey@@3Tvec4_t@@B; vec4_t const colorDkGrey
      }
      v49 = 0;
      v50 = ShelvedDamageRanges + 1;
      __asm { vmovaps [rbp+80h+var_D0], xmm0 }
      if ( ShelvedDamageRanges + 1 > 0 )
      {
        __asm { vmovss  xmm7, [rbp+80h+bulletRange] }
        v52 = ShelvedDamageRanges;
        _RBX = 0i64;
        do
        {
          if ( v52 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 1905, ASSERT_TYPE_ASSERT, "(rangeCount > 0)", (const char *)&queryFormat, "rangeCount > 0") )
            __debugbreak();
          if ( v49 )
            __asm { vmovss  xmm0, dword ptr [rbp+rbx*4+80h+var_D0+0Ch] }
          else
            __asm { vxorps  xmm0, xmm0, xmm0 }
          if ( _RBX == v52 )
            __asm { vmovaps xmm3, xmm7 }
          else
            __asm { vmovss  xmm3, [rbp+rbx*4+80h+rangeArray] }
          __asm { vcomiss xmm3, xmm8 }
          if ( _RBX >= v52 )
          {
            __asm { vcomiss xmm0, xmm9 }
            if ( _RBX < v52 )
            {
              __asm
              {
                vmaxss  xmm0, xmm0, xmm8
                vsubss  xmm2, xmm0, xmm8
                vmulss  xmm1, xmm10, xmm2
                vaddss  xmm0, xmm1, dword ptr [r14]
                vmulss  xmm1, xmm11, xmm2
                vmovss  dword ptr [rsp+180h+start], xmm0
                vaddss  xmm0, xmm1, dword ptr [r14+4]
                vmulss  xmm1, xmm12, xmm2
                vmovss  dword ptr [rsp+180h+start+4], xmm0
                vaddss  xmm0, xmm1, dword ptr [r14+8]
                vminss  xmm2, xmm3, xmm9
                vsubss  xmm3, xmm2, xmm8
                vmovss  dword ptr [rsp+180h+start+8], xmm0
                vmulss  xmm0, xmm10, xmm3
                vaddss  xmm1, xmm0, dword ptr [r14]
                vmulss  xmm2, xmm11, xmm3
                vaddss  xmm0, xmm2, dword ptr [r14+4]
                vmovss  dword ptr [rsp+180h+end], xmm1
                vmulss  xmm1, xmm12, xmm3
                vaddss  xmm2, xmm1, dword ptr [r14+8]
                vmovss  dword ptr [rsp+180h+end+8], xmm2
                vmovss  dword ptr [rsp+180h+end+4], xmm0
              }
              G_DebugLineWithDuration(&starta, &enda, &color + v49, 1, 300);
            }
          }
          ++v49;
          ++_RBX;
        }
        while ( v49 < v50 );
      }
    }
    else
    {
      BG_GetDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, weapon, isAlternate, *(float *)&_XMM3, &minDamageRange, &maxDamageRange);
      __asm
      {
        vmovss  xmm0, [rsp+180h+maxDamageRange]
        vcomiss xmm8, xmm0
      }
      if ( v70 )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [r14]
          vmovss  xmm4, dword ptr [r14+4]
          vmovss  xmm5, dword ptr [r14+8]
          vminss  xmm0, xmm0, xmm9
          vsubss  xmm3, xmm0, xmm8
          vmulss  xmm1, xmm3, xmm10
          vmovss  dword ptr [rsp+180h+end], xmm2
          vaddss  xmm2, xmm1, xmm2
          vmulss  xmm0, xmm3, xmm11
          vaddss  xmm1, xmm0, xmm4
          vmovss  dword ptr [rsp+180h+start], xmm2
          vmulss  xmm2, xmm3, xmm12
          vaddss  xmm0, xmm2, xmm5
          vmovss  dword ptr [rsp+180h+start+8], xmm0
          vmovss  dword ptr [rsp+180h+end+4], xmm4
          vmovss  dword ptr [rsp+180h+end+8], xmm5
          vmovss  dword ptr [rsp+180h+start+4], xmm1
        }
        G_DebugLineWithDuration(&enda, &starta, &colorRed, 1, 300);
      }
      __asm
      {
        vmovss  xmm0, [rsp+180h+minDamageRange]
        vcomiss xmm0, xmm9
      }
      if ( v70 )
      {
        __asm
        {
          vmaxss  xmm0, xmm0, xmm8
          vsubss  xmm2, xmm0, xmm8
          vmulss  xmm1, xmm10, xmm2
          vaddss  xmm0, xmm1, dword ptr [r14]
          vmulss  xmm1, xmm11, xmm2
          vmovss  dword ptr [rsp+180h+end], xmm0
          vaddss  xmm0, xmm1, dword ptr [r14+4]
          vmulss  xmm1, xmm12, xmm2
          vminss  xmm2, xmm9, [rbp+80h+bulletRange]
          vsubss  xmm3, xmm2, xmm8
          vmovss  dword ptr [rsp+180h+end+4], xmm0
          vaddss  xmm0, xmm1, dword ptr [r14+8]
          vmovss  dword ptr [rsp+180h+end+8], xmm0
          vmulss  xmm0, xmm3, xmm10
          vaddss  xmm1, xmm0, dword ptr [r14]
          vmulss  xmm2, xmm3, xmm11
          vaddss  xmm0, xmm2, dword ptr [r14+4]
          vmovss  dword ptr [rsp+180h+start], xmm1
          vmulss  xmm1, xmm3, xmm12
          vaddss  xmm2, xmm1, dword ptr [r14+8]
          vmovss  dword ptr [rsp+180h+start+8], xmm2
          vmovss  dword ptr [rsp+180h+start+4], xmm0
        }
        G_DebugLineWithDuration(&enda, &starta, &colorWhite, 1, 300);
      }
    }
    __asm
    {
      vmovaps xmm11, [rsp+180h+var_90]
      vmovaps xmm10, [rsp+180h+var_80]
      vmovaps xmm9, [rsp+180h+var_70]
      vmovaps xmm8, [rsp+180h+var_60]
      vmovaps xmm7, [rsp+180h+var_50]
      vmovaps xmm6, [rsp+180h+var_40]
      vmovaps xmm12, [rsp+180h+var_A0]
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
  char v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v22; 
  gentity_s *v23; 
  bool v24; 
  bool v25; 
  bool v26; 
  team_t v27; 
  gclient_s *client; 
  gagent_s *agent; 
  sentient_s *sentient; 
  char v31; 
  char v32; 
  scrContext_t *v83; 
  __int64 v95; 
  __int64 v96; 
  vec3_t vEyePosOut; 
  float value[4]; 
  float v101[4]; 

  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 768, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 769, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 770, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( G_Utils_IsClientOrActorOrAgent(attacker) )
  {
    v17 = 0;
    v18 = 0;
    v19 = 0i64;
    __asm { vmovaps [rsp+158h+var_C8], xmm15 }
    v20 = 0i64;
    __asm
    {
      vmovss  xmm15, cs:__real@3f800000
      vmovaps [rsp+158h+var_38], xmm6
    }
    v22 = 0i64;
    __asm
    {
      vmovaps [rsp+158h+var_48], xmm7
      vmovaps [rsp+158h+var_58], xmm8
      vmovaps [rsp+158h+var_68], xmm9
      vmovaps [rsp+158h+var_78], xmm10
      vmovaps [rsp+158h+var_88], xmm11
      vmovaps [rsp+158h+var_98], xmm12
      vmovaps [rsp+158h+var_A8], xmm13
      vmovaps [rsp+158h+var_B8], xmm14
    }
    while ( 1 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v18 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      {
        __asm
        {
          vmovaps xmm15, [rsp+158h+var_C8]
          vmovaps xmm14, [rsp+158h+var_B8]
          vmovaps xmm13, [rsp+158h+var_A8]
          vmovaps xmm12, [rsp+158h+var_98]
          vmovaps xmm11, [rsp+158h+var_88]
          vmovaps xmm10, [rsp+158h+var_78]
          vmovaps xmm9, [rsp+158h+var_68]
          vmovaps xmm8, [rsp+158h+var_58]
          vmovaps xmm7, [rsp+158h+var_48]
          vmovaps xmm6, [rsp+158h+var_38]
        }
        if ( v17 )
          GScr_Notify(attacker, scr_const.attackerbulletwhizby, 0);
        return;
      }
      if ( (unsigned int)v18 >= 0x800 )
      {
        LODWORD(v96) = 2048;
        LODWORD(v95) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v95, v96) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v22].r.isInUse != g_entityIsInUse[v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v19] )
        goto LABEL_64;
      v23 = &g_entities[v22];
      if ( !&g_entities[v22] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 783, ASSERT_TYPE_ASSERT, "(target)", (const char *)&queryFormat, "target") )
        __debugbreak();
      if ( v23 == attacker )
        goto LABEL_64;
      v24 = v18 < level.maxclients;
      if ( v18 < level.maxclients )
      {
        if ( level.clients[v20].sess.connected != CON_CONNECTED )
          goto LABEL_64;
        v25 = level.clients[v20].sess.sessionState == SESS_STATE_PLAYING;
      }
      else
      {
        v25 = v23->s.eType == ET_AGENT;
      }
      if ( !v25 )
        goto LABEL_64;
      if ( v18 < level.maxclients )
        break;
      if ( v23->agent )
      {
        v26 = v23->sentient == NULL;
LABEL_39:
        if ( !v26 )
          goto LABEL_42;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 802, ASSERT_TYPE_ASSERT, "( (isAClient && target->client) || (!isAClient && target->agent && target->sentient) )", (const char *)&queryFormat, "(isAClient && target->client) || (!isAClient && target->agent && target->sentient)") )
        __debugbreak();
LABEL_42:
      if ( useFriendlyFire )
        goto LABEL_57;
      if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
        __debugbreak();
      v27 = GUtils::ms_gUtils->GetEntityTeam(GUtils::ms_gUtils, v23);
      client = attacker->client;
      if ( !client || v27 == TEAM_ZERO || v27 != client->sess.cs.team )
      {
        agent = attacker->agent;
        if ( !agent || v27 == TEAM_ZERO || v27 != agent->agentState.team )
        {
          sentient = attacker->sentient;
          if ( sentient )
          {
            if ( v27 )
            {
              if ( v27 == sentient->eTeam )
                goto LABEL_64;
            }
            else if ( sentient->eTeam == TEAM_TWO )
            {
              goto LABEL_64;
            }
          }
LABEL_57:
          if ( v24 )
            G_Client_GetEyePosition(&v23->client->ps, &vEyePosOut);
          else
            Sentient_GetEyePosition(v23->sentient, &vEyePosOut);
          _RAX = bp;
          _RBX = br;
          __asm
          {
            vmovss  xmm12, dword ptr [rsp+158h+vEyePosOut+4]
            vmovss  xmm13, dword ptr [rsp+158h+vEyePosOut]
            vmovss  xmm8, dword ptr [rax+68h]
            vmovss  xmm0, dword ptr [rbx+60h]
            vmovss  xmm9, dword ptr [rax+6Ch]
            vmovss  xmm1, dword ptr [rbx+64h]
            vmovss  xmm10, dword ptr [rax+70h]
            vmovss  xmm14, dword ptr [rsp+158h+vEyePosOut+8]
            vsubss  xmm6, xmm0, xmm8
            vmovss  xmm0, dword ptr [rbx+68h]
            vsubss  xmm4, xmm0, xmm10
            vsubss  xmm5, xmm1, xmm9
            vmulss  xmm0, xmm4, xmm4
            vmulss  xmm2, xmm5, xmm5
            vmulss  xmm1, xmm6, xmm6
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm7, xmm2, xmm2
            vcmpless xmm0, xmm7, cs:__real@80000000
            vblendvps xmm0, xmm7, xmm15, xmm0
            vdivss  xmm1, xmm15, xmm0
            vmulss  xmm11, xmm1, xmm4
            vmulss  xmm6, xmm1, xmm6
            vmulss  xmm5, xmm1, xmm5
            vsubss  xmm0, xmm12, xmm9
            vmulss  xmm2, xmm0, xmm5
            vsubss  xmm1, xmm13, xmm8
            vmulss  xmm0, xmm1, xmm6
            vaddss  xmm3, xmm2, xmm0
            vsubss  xmm1, xmm14, xmm10
            vmulss  xmm0, xmm1, xmm11
            vaddss  xmm4, xmm3, xmm0
            vcomiss xmm4, xmm7
            vmovss  [rsp+158h+value], xmm6
            vmovss  [rsp+158h+var_F4], xmm5
            vmovss  [rsp+158h+var_F0], xmm11
          }
          if ( v31 | v32 )
          {
            __asm { vcomiss xmm4, cs:__real@42800000 }
            if ( !v31 )
            {
              __asm
              {
                vmulss  xmm0, xmm6, xmm4
                vaddss  xmm2, xmm0, xmm8
                vmovss  [rsp+158h+var_E8], xmm2
                vsubss  xmm2, xmm2, xmm13
                vmulss  xmm1, xmm5, xmm4
                vaddss  xmm3, xmm1, xmm9
                vmulss  xmm0, xmm11, xmm4
                vaddss  xmm1, xmm0, xmm10
                vsubss  xmm0, xmm3, xmm12
                vmovss  [rsp+158h+var_E0], xmm1
                vmovss  [rsp+158h+var_E4], xmm3
                vsubss  xmm3, xmm1, xmm14
                vmulss  xmm1, xmm0, xmm0
                vmulss  xmm0, xmm2, xmm2
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm3, xmm3
                vaddss  xmm2, xmm2, xmm1
                vsqrtss xmm0, xmm2, xmm2
                vmaxss  xmm6, xmm0, xmm15
                vcomiss xmm6, cs:__real@42960000
              }
              if ( v31 | v32 )
              {
                v83 = ScriptContext_Server();
                Scr_AddVector(v83, value);
                Scr_AddVector(v83, v101);
                __asm { vmovaps xmm1, xmm6; value }
                Scr_AddFloat(v83, *(float *)&_XMM1);
                GScr_AddEntity(attacker);
                GScr_Notify(v23, scr_const.bulletwhizby, 4u);
                v17 = 1;
              }
            }
          }
        }
      }
LABEL_64:
      ++v18;
      ++v19;
      ++v22;
      ++v20;
    }
    v26 = v23->client == NULL;
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
  __int64 v21; 
  __int64 v22; 

  _R15 = weapon;
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2815, ASSERT_TYPE_ASSERT, "(attacker)", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  number = attacker->s.number;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v21) = attacker->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, 2048) )
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
    LODWORD(v22) = 2048;
    LODWORD(v21) = victim->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, v22) )
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
    LODWORD(v22) = 22;
    LODWORD(v21) = hitLocation;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2819, ASSERT_TYPE_ASSERT, "(unsigned)( hitLocation ) < (unsigned)( HITLOC_NUM )", "hitLocation doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  if ( !partName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2820, ASSERT_TYPE_ASSERT, "(partName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "partName != NULL_SCR_STRING") )
    __debugbreak();
  eType = victim->s.eType;
  if ( eType != ET_PLAYER && eType != ET_AGENT_CORPSE )
  {
    LODWORD(v22) = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2823, ASSERT_TYPE_ASSERT, "(victim->s.eType == ET_PLAYER || victim->s.eType == ET_AGENT_CORPSE)", "%s\n\tRegisterImpaledEntity invoked on an invalid entity type: %i", "victim->s.eType == ET_PLAYER || victim->s.eType == ET_AGENT_CORPSE", v22) )
      __debugbreak();
  }
  m_impaleCount = this->m_impaleCount;
  if ( m_impaleCount < 8 )
  {
    _R10 = &this->m_impaledEntities.m_data[m_impaleCount];
    *(_QWORD *)&_R10->attackerNum = 2047i64;
    _R10->partName = 0;
    _R10->victimNum = 2047;
    *(_QWORD *)_R10->clientHitPos.v = 0i64;
    _R10->clientHitPos.v[2] = 0.0;
    *(_QWORD *)_R10->boneOffset.v = 0i64;
    _R10->boneOffset.v[2] = 0.0;
    *(_QWORD *)_R10->hitDirection.v = 0i64;
    _R10->hitDirection.v[2] = 0.0;
    *(_QWORD *)&_R10->weapon.weaponIdx = 0i64;
    *(_QWORD *)&_R10->weapon.stickerIndices[3] = 0i64;
    *(_QWORD *)&_R10->weapon.weaponAttachments[2] = 0i64;
    *(_QWORD *)&_R10->weapon.weaponAttachments[10] = 0i64;
    *(_QWORD *)&_R10->weapon.attachmentVariationIndices[5] = 0i64;
    *(_QWORD *)&_R10->weapon.attachmentVariationIndices[13] = 0i64;
    *(_QWORD *)&_R10->weapon.attachmentVariationIndices[21] = 0i64;
    *(_DWORD *)&_R10->weapon.weaponCamo = 0;
    _R10->isAlternate = 0;
    _R10->victimNum = victim->s.number;
    _R10->attackerNum = attacker->s.number;
    _R10->hitLocation = hitLocation;
    _R10->partName = partName;
    __asm
    {
      vmovups ymm0, ymmword ptr [r15]
      vmovups ymmword ptr [r10+34h], ymm0
      vmovups xmm1, xmmword ptr [r15+20h]
      vmovups xmmword ptr [r10+54h], xmm1
      vmovsd  xmm0, qword ptr [r15+30h]
      vmovsd  qword ptr [r10+64h], xmm0
    }
    *(_DWORD *)&_R10->weapon.weaponCamo = *(_DWORD *)&_R15->weaponCamo;
    _R10->isAlternate = isAlternate;
    _R10->clientHitPos = *location;
    _R10->hitDirection = *direction;
    if ( G_Utils_DObjWorldPosToBoneSpace(victim, partName, &_R10->clientHitPos, &_R10->boneOffset) )
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
  bool IsPlayerZeroG; 
  bool v25; 
  GHandler *Handler; 
  __int16 groundRefEnt; 
  const char *v29; 
  int v30; 
  const char *v31; 
  bool v36; 
  __int128 angles; 
  vec3_t outOrigin; 
  vec3_t up; 
  char v80[16]; 
  WorldUpReferenceFrame v81; 

  _RBX = br;
  _RSI = bp;
  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2673, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2674, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !_RBX->hitEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2675, ASSERT_TYPE_ASSERT, "( br->hitEnt )", (const char *)&queryFormat, "br->hitEnt") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2676, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !attacker->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2677, ASSERT_TYPE_ASSERT, "( attacker->sentient )", (const char *)&queryFormat, "attacker->sentient") )
    __debugbreak();
  if ( !attacker->actor && !attacker->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.cpp", 2678, ASSERT_TYPE_ASSERT, "( attacker->actor || attacker->agent )", (const char *)&queryFormat, "attacker->actor || attacker->agent") )
    __debugbreak();
  tagInfo = attacker->tagInfo;
  if ( tagInfo && tagInfo->parent == _RBX->hitEnt )
    return 1;
  hitEnt = _RBX->hitEnt;
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
  if ( p_ps && _RBX->trace.partGroup != 19 )
  {
    __asm
    {
      vmovaps [rsp+118h+var_28], xmm6
      vmovaps [rsp+118h+var_38], xmm8
      vmovaps [rsp+118h+var_48], xmm9
      vmovaps [rsp+118h+var_58], xmm10
      vmovaps [rsp+118h+var_68], xmm11
      vmovaps [rsp+118h+var_78], xmm12
    }
    G_Client_GetEyePosition(p_ps, &outOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+60h]
      vsubss  xmm10, xmm0, dword ptr [rsp+118h+outOrigin]
      vmovss  xmm1, dword ptr [rbx+64h]
      vmovss  xmm0, dword ptr [rbx+68h]
      vsubss  xmm11, xmm1, dword ptr [rsp+118h+outOrigin+4]
      vsubss  xmm12, xmm0, dword ptr [rsp+118h+outOrigin+8]
    }
    IsPlayerZeroG = BG_IsPlayerZeroG(&_RBX->hitEnt->client->ps);
    v25 = !IsPlayerZeroG;
    if ( !IsPlayerZeroG )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+80h]
        vxorps  xmm9, xmm0, cs:__xmm@80000000800000008000000080000000
        vmovss  xmm8, dword ptr [rsi+84h]
        vxorps  xmm6, xmm6, xmm6
      }
      goto LABEL_48;
    }
    Handler = GHandler::getHandler();
    _RBX = &_RBX->hitEnt->client->ps;
    if ( !_RBX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2587, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x2Au) && ((groundRefEnt = _RBX->groundRefEnt, groundRefEnt == 2047) || !groundRefEnt) )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) )
      {
LABEL_41:
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+1D8h]
          vmovss  dword ptr [rsp+118h+angles], xmm0
          vmovss  xmm1, dword ptr [rbx+1DCh]
          vmovss  dword ptr [rsp+118h+angles+4], xmm1
          vmovss  xmm0, dword ptr [rbx+1E0h]
          vmovss  dword ptr [rsp+118h+angles+8], xmm0
        }
        if ( WorldUpReferenceFrame::HasValidWorldUpInPs(_RBX) )
        {
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v81, _RBX, Handler);
          WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v81, (vec3_t *)&angles);
        }
        AngleVectors((const vec3_t *)&angles, NULL, NULL, &up);
        _RBX = &_RSI->dir;
        v25 = &_RSI->dir <= (vec3_t *)v80;
        if ( &_RSI->dir == (vec3_t *)v80 )
        {
          v36 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross", angles);
          v25 = !v36;
          if ( v36 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm2, dword ptr [rsp+118h+up+8]
          vmulss  xmm1, xmm2, dword ptr [rbx+4]
          vmovss  xmm6, dword ptr [rbx]
          vmovss  xmm5, dword ptr [rbx+8]
          vmulss  xmm0, xmm5, dword ptr [rsp+118h+up+4]
          vmovss  xmm3, dword ptr [rsp+118h+up]
          vsubss  xmm8, xmm1, xmm0
          vmulss  xmm0, xmm2, xmm6
          vmulss  xmm2, xmm6, dword ptr [rsp+118h+up+4]
          vmulss  xmm1, xmm3, xmm5
          vsubss  xmm9, xmm1, xmm0
          vmulss  xmm1, xmm3, dword ptr [rbx+4]
          vsubss  xmm6, xmm2, xmm1
        }
LABEL_48:
        __asm
        {
          vmulss  xmm0, xmm9, xmm9
          vmulss  xmm1, xmm8, xmm8
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm2, xmm2, xmm1
          vmovss  xmm1, cs:__real@3f800000
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm1, xmm0
          vdivss  xmm5, xmm1, xmm0
          vmulss  xmm0, xmm8, xmm5
          vmovaps xmm8, [rsp+118h+var_38]
          vmulss  xmm1, xmm9, xmm5
          vmovaps xmm9, [rsp+118h+var_48]
          vmulss  xmm2, xmm1, xmm11
          vmovaps xmm11, [rsp+118h+var_68]
          vmulss  xmm3, xmm0, xmm10
          vmovaps xmm10, [rsp+118h+var_58]
          vmulss  xmm0, xmm6, xmm5
          vmovaps xmm6, [rsp+118h+var_28]
          vmulss  xmm1, xmm0, xmm12
          vmovaps xmm12, [rsp+118h+var_78]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm2, cs:__real@41000000
        }
        return !v25;
      }
      v29 = "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )";
      v30 = 2575;
      v31 = "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))";
    }
    else
    {
      v29 = "BG_IsPlayerZeroG( ps )";
      v30 = 2588;
      v31 = "(BG_IsPlayerZeroG( ps ))";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", v30, ASSERT_TYPE_ASSERT, v31, (const char *)&queryFormat, v29) )
      __debugbreak();
    goto LABEL_41;
  }
  return 0;
}

