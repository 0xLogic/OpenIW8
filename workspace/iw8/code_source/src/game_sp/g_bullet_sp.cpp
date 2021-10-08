/*
==============
GBulletSP::ImpactEffectCreate
==============
*/

bool __fastcall GBulletSP::ImpactEffectCreate(GBulletSP *this, unsigned int *randSeed, const BulletFireParams *bp, const BulletTraceResults *br, const vec3_t *normal, const Weapon *weapon, bool isAlternate, gentity_s *attacker, int impactEffectFlags, gentity_s **outHitEffectEnt)
{
  return ?ImpactEffectCreate@GBulletSP@@UEAA_NPEAIPEBUBulletFireParams@@PEBUBulletTraceResults@@AEBTvec3_t@@AEBUWeapon@@_NPEAUgentity_s@@HPEAPEAU6@@Z(this, randSeed, bp, br, normal, weapon, isAlternate, attacker, impactEffectFlags, outHitEffectEnt);
}

/*
==============
GBulletSP::ProcessRiotShield
==============
*/

bool __fastcall GBulletSP::ProcessRiotShield(GBulletSP *this, unsigned int *randSeed, BulletFireParams *bp, BulletTraceResults *br, const Weapon *weapon, bool isAlternate, gentity_s *attacker, int gameTime, int dFlags, int damage, bool *bulletStillActive)
{
  return ?ProcessRiotShield@GBulletSP@@UEAA_NPEAIPEAUBulletFireParams@@PEAUBulletTraceResults@@AEBUWeapon@@_NPEAUgentity_s@@HHHPEA_N@Z(this, randSeed, bp, br, weapon, isAlternate, attacker, gameTime, dFlags, damage, bulletStillActive);
}

/*
==============
GBulletSP::SetTempEventEntNormal
==============
*/

void __fastcall GBulletSP::SetTempEventEntNormal(GBulletSP *this, gentity_s *ent, const vec3_t *normal)
{
  ?SetTempEventEntNormal@GBulletSP@@UEAAXPEAUgentity_s@@AEBTvec3_t@@@Z(this, ent, normal);
}

/*
==============
GBulletSP::UseFriendlyFire
==============
*/

bool __fastcall GBulletSP::UseFriendlyFire(GBulletSP *this)
{
  return ?UseFriendlyFire@GBulletSP@@UEBA_NXZ(this);
}

/*
==============
GBulletSP::CheckFirePenetrateStop
==============
*/

bool __fastcall GBulletSP::CheckFirePenetrateStop(GBulletSP *this, const BulletTraceResults *br, const gentity_s *attacker, bool penetratedGlass)
{
  return ?CheckFirePenetrateStop@GBulletSP@@UEAA_NPEBUBulletTraceResults@@PEBUgentity_s@@_N@Z(this, br, attacker, penetratedGlass);
}

/*
==============
GBulletSP::SetVictimShieldHitEventParameters
==============
*/

void __fastcall GBulletSP::SetVictimShieldHitEventParameters(GBulletSP *this, gentity_s *tempEnt, int attackerEntNum, int victimEntNum, const vec3_t *startPos, const vec3_t *hitPos, unsigned int *randSeed)
{
  ?SetVictimShieldHitEventParameters@GBulletSP@@UEAAXPEAUgentity_s@@HHAEBTvec3_t@@1PEAI@Z(this, tempEnt, attackerEntNum, victimEntNum, startPos, hitPos, randSeed);
}

/*
==============
GBulletSP::SpreadFireTargets
==============
*/

void __fastcall GBulletSP::SpreadFireTargets(GBulletSP *this, gentity_s *attacker, int shotCount, float range, float spread, const BgWeaponParms *wp, const gentity_s *weaponEnt, int gameTime)
{
  ?SpreadFireTargets@GBulletSP@@UEAAXPEAUgentity_s@@HMMPEBUBgWeaponParms@@PEBU2@H@Z(this, attacker, shotCount, range, spread, wp, weaponEnt, gameTime);
}

/*
==============
GBulletSP::CheckExplosiveBulletType
==============
*/

void __fastcall GBulletSP::CheckExplosiveBulletType(GBulletSP *this, const gentity_s *attacker)
{
  ?CheckExplosiveBulletType@GBulletSP@@UEBAXPEBUgentity_s@@@Z(this, attacker);
}

/*
==============
GBulletSP::UseAISuppression
==============
*/

bool __fastcall GBulletSP::UseAISuppression(GBulletSP *this)
{
  return ?UseAISuppression@GBulletSP@@UEBA_NXZ(this);
}

/*
==============
GBulletSP::ImpactEffectSetFlags
==============
*/

void __fastcall GBulletSP::ImpactEffectSetFlags(GBulletSP *this, gentity_s *hitEffectEnt, const int impactEffectFlags)
{
  ?ImpactEffectSetFlags@GBulletSP@@UEAAXPEAUgentity_s@@H@Z(this, hitEffectEnt, impactEffectFlags);
}

/*
==============
GBulletSP::TraceIgnoreHitEntity
==============
*/

bool __fastcall GBulletSP::TraceIgnoreHitEntity(GBulletSP *this, const BulletFireParams *bp, const BulletTraceResults *br, const gentity_s *attacker, bool allowHitSelf)
{
  return ?TraceIgnoreHitEntity@GBulletSP@@UEBA_NPEBUBulletFireParams@@PEBUBulletTraceResults@@PEBUgentity_s@@_N@Z(this, bp, br, attacker, allowHitSelf);
}

/*
==============
GBulletSP::ImpactEffectSetAdditionalFlags
==============
*/

void __fastcall GBulletSP::ImpactEffectSetAdditionalFlags(GBulletSP *this, gentity_s *hitEffectEnt, const int impactEffectFlags)
{
  ?ImpactEffectSetAdditionalFlags@GBulletSP@@UEAAXPEAUgentity_s@@H@Z(this, hitEffectEnt, impactEffectFlags);
}

/*
==============
GBulletSP::CheckFireExtendedAdvance
==============
*/

bool __fastcall GBulletSP::CheckFireExtendedAdvance(GBulletSP *this, const BulletTraceResults *br, const gentity_s *attacker)
{
  return ?CheckFireExtendedAdvance@GBulletSP@@UEAA_NPEBUBulletTraceResults@@PEBUgentity_s@@@Z(this, br, attacker);
}

/*
==============
GBulletSP::InvokeEntityImpaledCallback
==============
*/

void __fastcall GBulletSP::InvokeEntityImpaledCallback(GBulletSP *this, gentity_s *attacker, gentity_s *victim, const Weapon *r_weapon, const bool isAlternate, const vec3_t *clientLocation, const vec3_t *serverLocation, const vec3_t *direction, hitLocation_t hitLocation, scr_string_t partName, const vec3_t *boneOffset)
{
  ?InvokeEntityImpaledCallback@GBulletSP@@UEBAXPEAUgentity_s@@0AEBUWeapon@@_NAEBTvec3_t@@33W4hitLocation_t@@W4scr_string_t@@3@Z(this, attacker, victim, r_weapon, isAlternate, clientLocation, serverLocation, direction, hitLocation, partName, boneOffset);
}

/*
==============
GBulletSP::CheckExplosiveBulletType
==============
*/
void GBulletSP::CheckExplosiveBulletType(GBulletSP *this, const gentity_s *attacker)
{
  ;
}

/*
==============
GBulletSP::CheckFireExtendedAdvance
==============
*/
bool GBulletSP::CheckFireExtendedAdvance(GBulletSP *this, const BulletTraceResults *br, const gentity_s *attacker)
{
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 598, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !br->hitEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 599, ASSERT_TYPE_ASSERT, "( br->hitEnt )", (const char *)&queryFormat, "br->hitEnt") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 600, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  return br->hitEnt->sentient != NULL;
}

/*
==============
GBulletSP::CheckFirePenetrateStop
==============
*/
bool GBulletSP::CheckFirePenetrateStop(GBulletSP *this, const BulletTraceResults *br, const gentity_s *attacker, bool penetratedGlass)
{
  gentity_s *hitEnt; 
  const dvar_t *v8; 

  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 561, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 562, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  hitEnt = br->hitEnt;
  if ( !hitEnt )
    return 0;
  if ( !penetratedGlass && hitEnt->client )
  {
    v8 = DVARBOOL_bullet_penetrationHitsClients;
    if ( !DVARBOOL_bullet_penetrationHitsClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bullet_penetrationHitsClients") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( !v8->current.enabled )
      return 1;
  }
  return br->hitEnt->actor && !penetratedGlass && (attacker->actor && !Dvar_GetBool_Internal_DebugName(DVARBOOL_bullet_penetrationActorHitsActors, "bullet_penetrationActorHitsActors") || !Dvar_GetBool_Internal_DebugName(DVARBOOL_bullet_penetration_damage, "bullet_penetration_damage"));
}

/*
==============
G_BulletSP_CheckSpreadFireAtPos
==============
*/
__int64 G_BulletSP_CheckSpreadFireAtPos(gentity_s *attacker, gentity_s *target, BulletFireParams *bp, const BgWeaponParms *wp, const gentity_s *weaponEnt, hitLocation_t hitLoc)
{
  vec3_t *p_start; 
  gentity_s *v8; 
  vec3_t *p_end; 
  bool isAlternate; 
  Weapon *p_weapon; 
  GWeaponMap *Instance; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  GExtraDamageParams extraParams; 
  int damage; 
  gentity_s *targ; 
  BulletTraceResults br; 

  p_start = &bp->start;
  _R14 = &bp->end;
  v8 = target;
  targ = target;
  _RDI = bp;
  p_end = &bp->end;
  if ( weaponEnt )
    v8 = (gentity_s *)weaponEnt;
  if ( PhysicsQuery_LegacyTracePassed(PHYSICS_WORLD_ID_FIRST, p_start, p_end, &bounds_origin, target->s.number, v8->s.number, 41969969, 0, NULL, 0) )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [r14]
      vmovss  xmm0, dword ptr [r14+4]
      vmovss  xmm1, dword ptr [r14+8]
      vmovss  dword ptr [rsp+168h+br.hitPos+4], xmm0
      vsubss  xmm0, xmm2, dword ptr [r15]
      vmovss  dword ptr [rdi+80h], xmm0
      vmovss  dword ptr [rsp+168h+br.hitPos+8], xmm1
      vmovss  xmm1, dword ptr [rdi+78h]
      vmovss  dword ptr [rsp+168h+br.hitPos], xmm2
      vsubss  xmm2, xmm1, dword ptr [r15+4]
      vmovss  dword ptr [rdi+84h], xmm2
      vmovss  xmm0, dword ptr [rdi+7Ch]
      vsubss  xmm1, xmm0, dword ptr [r15+8]
    }
    br.hitEnt = target;
    __asm { vmovss  dword ptr [rdi+88h], xmm1 }
    isAlternate = wp->isAlternate;
    p_weapon = &wp->weapon;
    br.trace.hitType = TRACE_HITTYPE_ENTITY;
    damage = G_Bullet_GetDamage(_RDI, &br, &wp->weapon, isAlternate, attacker);
    if ( weaponEnt )
    {
      Instance = GWeaponMap::GetInstance();
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      p_weapon = (Weapon *)BgWeaponMap::GetWeapon(Instance, weaponEnt->s.weaponHandle);
    }
    extraParams = (GExtraDamageParams)257;
    G_CombatSP_Damage(targ, attacker, attacker, &_RDI->dir, _R14, damage, 0, _RDI->methodOfDeath, p_weapon, wp->isAlternate, hitLoc, 0, (scr_string_t)0, 0, NULL, &extraParams);
    v25 = DVARINT_g_debugBullets;
    if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    if ( v25->current.integer == 1 )
      goto LABEL_21;
    v26 = DVARINT_g_debugBullets;
    if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    if ( v26->current.integer == 2 )
      goto LABEL_21;
    v27 = DVARINT_g_debugBullets;
    if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( v27->current.integer == 4 )
LABEL_21:
      G_DebugLineWithDuration(p_start, _R14, &colorOrange, 1, 100);
    return 1i64;
  }
  else
  {
    v29 = DVARINT_g_debugBullets;
    if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    if ( v29->current.integer == 1 )
      goto LABEL_35;
    v30 = DVARINT_g_debugBullets;
    if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    if ( v30->current.integer == 2 )
      goto LABEL_35;
    v31 = DVARINT_g_debugBullets;
    if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    if ( v31->current.integer == 4 )
LABEL_35:
      G_DebugLineWithDuration(p_start, _R14, &colorRed, 1, 100);
    return 0i64;
  }
}

/*
==============
G_BulletSP_DamageRiotShield
==============
*/

__int64 __fastcall G_BulletSP_DamageRiotShield(BulletTraceResults *br, int *damage, double _XMM2_8)
{
  gentity_s *hitEnt; 
  gclient_s *client; 
  actor_s *actor; 
  const Weapon *RiotShieldIfEquipped; 
  const Weapon *v11; 
  const WeaponDef *v12; 
  int shieldHealth; 
  int v14; 
  const WeaponDef *v21; 
  int v22; 
  int v23; 

  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 108, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !br->hitEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 109, ASSERT_TYPE_ASSERT, "( br->hitEnt )", (const char *)&queryFormat, "br->hitEnt") )
    __debugbreak();
  hitEnt = br->hitEnt;
  client = hitEnt->client;
  actor = hitEnt->actor;
  if ( !client && !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 114, ASSERT_TYPE_ASSERT, "( client || actor )", (const char *)&queryFormat, "client || actor") )
    __debugbreak();
  _EBP = 0;
  if ( client )
  {
    RiotShieldIfEquipped = G_Weapon_GetRiotShieldIfEquipped(br->hitEnt);
    v11 = RiotShieldIfEquipped;
    if ( RiotShieldIfEquipped->weaponIdx )
    {
      if ( !BG_IsRiotShield(RiotShieldIfEquipped, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 126, ASSERT_TYPE_ASSERT, "(BG_IsRiotShield( r_weapon, false ))", (const char *)&queryFormat, "BG_IsRiotShield( r_weapon, false )") )
        __debugbreak();
      v12 = BG_WeaponDef(v11, 0);
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 128, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
        __debugbreak();
      if ( v12->riotShieldEnableDamage )
      {
        shieldHealth = client->shieldHealth;
        v14 = shieldHealth - *damage;
        client->shieldHealth = v14;
        if ( v14 <= 0 )
        {
          client->shieldHealth = 0;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [r14]
            vmulss  xmm1, xmm0, dword ptr [rdi+784h]
          }
          br->trace.partGroup = 4;
          __asm
          {
            vxorps  xmm2, xmm2, xmm2
            vroundss xmm2, xmm2, xmm1, 1
            vcvttss2si ebp, xmm2
          }
          if ( shieldHealth > 0 )
          {
            GScr_Notify(br->hitEnt, scr_const.riotshield_damaged, 0);
            G_Utils_AddEvent(br->hitEnt, 0x63u, 0);
          }
        }
      }
      goto LABEL_36;
    }
    return 0i64;
  }
  if ( actor )
  {
    if ( actor->shieldWeapon.weaponIdx )
    {
      if ( !BG_IsRiotShield(&actor->shieldWeapon, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 169, ASSERT_TYPE_ASSERT, "(BG_IsRiotShield( r_weapon, false ))", (const char *)&queryFormat, "BG_IsRiotShield( r_weapon, false )") )
        __debugbreak();
      v21 = BG_WeaponDef(&actor->shieldWeapon, 0);
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 171, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
        __debugbreak();
      if ( v21->riotShieldEnableDamage )
      {
        v22 = actor->shieldHealth;
        v23 = v22 - *damage;
        actor->shieldHealth = v23;
        if ( v23 <= 0 )
        {
          actor->shieldHealth = 0;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [r14]
            vmulss  xmm1, xmm0, dword ptr [rsi+784h]
          }
          br->trace.partGroup = 4;
          __asm
          {
            vxorps  xmm2, xmm2, xmm2
            vroundss xmm2, xmm2, xmm1, 1
            vcvttss2si ebp, xmm2
          }
          if ( v22 > 0 )
            GScr_Notify(br->hitEnt, scr_const.riotshield_damaged, 0);
        }
      }
      goto LABEL_36;
    }
    return 0i64;
  }
LABEL_36:
  *damage = _EBP;
  return _EBP;
}

/*
==============
G_BulletSP_HitPlayerShield
==============
*/
bool G_BulletSP_HitPlayerShield(const gentity_s *ent, const gentity_s *attacker, const vec3_t *bulletStartPos, const vec3_t *bulletEndPos, bool isInitialTrace)
{
  bool IsRiotShieldOnBack; 
  bool result; 
  bool HasOffhandShieldOpenToFireWeapon; 
  const dvar_t *v55; 
  char v56; 
  char v57; 
  bool v58; 
  const char *v61; 
  char *fmt; 
  vec3_t point; 

  _R14 = bulletEndPos;
  _RDI = bulletStartPos;
  _RBP = attacker;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 27, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 28, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  IsRiotShieldOnBack = G_Weapon_PlayerIsRiotShieldOnBack(ent);
  if ( !IsRiotShieldOnBack && (!G_Weapon_PlayerIsUsingShield(ent) || !G_Weapon_PlayerShieldIsInBlockingState(ent)) )
    return 0;
  __asm
  {
    vmovaps [rsp+98h+var_28], xmm6
    vmovaps [rsp+98h+var_38], xmm7
  }
  if ( _RBP && isInitialTrace )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vsubss  xmm5, xmm0, dword ptr [rdi]
      vmovss  xmm1, dword ptr [r14+4]
      vsubss  xmm6, xmm1, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [r14+8]
      vsubss  xmm7, xmm0, dword ptr [rdi+8]
      vmulss  xmm0, xmm7, xmm7
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vmovss  xmm2, dword ptr [rbp+130h]
      vblendvps xmm0, xmm4, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmovss  xmm0, dword ptr [rbp+134h]
      vmulss  xmm5, xmm5, xmm1
      vmulss  xmm6, xmm6, xmm1
      vmulss  xmm7, xmm7, xmm1
      vsubss  xmm1, xmm0, dword ptr [rdi+4]
      vsubss  xmm0, xmm2, dword ptr [rdi]
      vmovss  xmm2, dword ptr [rbp+138h]
      vmulss  xmm3, xmm1, xmm6
      vmulss  xmm1, xmm0, xmm5
      vsubss  xmm0, xmm2, dword ptr [rdi+8]
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm1, xmm0, xmm7
      vaddss  xmm3, xmm4, xmm1
      vmulss  xmm2, xmm3, xmm5
      vaddss  xmm0, xmm2, dword ptr [rdi]
      vmulss  xmm1, xmm3, xmm6
      vaddss  xmm2, xmm1, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+98h+point], xmm0
      vmulss  xmm0, xmm3, xmm7
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+98h+point+8], xmm1
      vmovss  dword ptr [rsp+98h+point+4], xmm2
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+98h+point], xmm0
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+98h+point+8], xmm0
      vmovss  dword ptr [rsp+98h+point+4], xmm1
    }
  }
  HasOffhandShieldOpenToFireWeapon = G_Weapon_PlayerHasOffhandShieldOpenToFireWeapon(ent);
  *(double *)&_XMM0 = G_Weapon_GetShieldCosOfAngleToPoint(ent, &point, IsRiotShieldOnBack, HasOffhandShieldOpenToFireWeapon);
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  _RBX = DVARFLT_shieldPlayerBulletProtectionDegrees;
  __asm
  {
    vmulss  xmm6, xmm0, cs:__real@42652ee0
    vmovaps xmm7, xmm0
  }
  if ( !DVARFLT_shieldPlayerBulletProtectionDegrees && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "shieldPlayerBulletProtectionDegrees") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm6, dword ptr [rbx+28h] }
  v55 = DVARBOOL_shieldDebug;
  v58 = v56 | v57;
  if ( !DVARBOOL_shieldDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "shieldDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v55);
  if ( v55->current.enabled )
  {
    __asm
    {
      vcvtss2sd xmm3, xmm6, xmm6
      vcvtss2sd xmm0, xmm7, xmm7
    }
    v61 = "no";
    if ( v58 )
      v61 = "YES";
    __asm
    {
      vmovq   r9, xmm3
      vmovsd  [rsp+98h+fmt], xmm0
    }
    Com_Printf(15, "G_BulletSP_HitPlayerShield(): %s  -  degrees: %.2f  -  radians: %.2f\n", v61, *(double *)&_XMM3, *(double *)&fmt);
  }
  __asm { vmovaps xmm7, [rsp+98h+var_38] }
  result = v58;
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  return result;
}

/*
==============
GBulletSP::ImpactEffectCreate
==============
*/
char GBulletSP::ImpactEffectCreate(GBulletSP *this, unsigned int *randSeed, const BulletFireParams *bp, const BulletTraceResults *br, const vec3_t *normal, const Weapon *weapon, bool isAlternate, gentity_s *attacker, int impactEffectFlags, gentity_s **outHitEffectEnt)
{
  gentity_s *hitEnt; 
  sentient_s *sentient; 
  bool v16; 
  bool v17; 
  bool IsUsingShield; 
  int ClientHitEvent; 
  GWeaponMap *v42; 
  GBullet *v43; 
  int weaponEntIndex_low; 
  signed __int64 v45; 
  gentity_s *v46; 
  unsigned __int64 v47; 
  unsigned __int64 v48; 
  unsigned __int16 EntityHitId; 
  gclient_s *client; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  gclient_s *v52; 
  int HitEvent; 
  GWeaponMap *Instance; 
  gentity_s *v57; 
  __int16 groundEntityNum; 
  gentity_s *v59; 
  unsigned int v70; 
  unsigned int v71; 
  unsigned int v72; 
  Weapon *v79; 
  __int64 attackerEntNum; 
  int r_weapon; 
  int r_weapona; 
  int r_weaponb; 
  vec3_t out; 
  GBullet *v85; 
  gentity_s **v86; 
  __int64 v87; 
  vec3_t randSeeda; 
  tmat33_t<vec3_t> axis; 

  v87 = -2i64;
  _RSI = br;
  _R14 = bp;
  *(_QWORD *)randSeeda.v = randSeed;
  v85 = this;
  _R12 = normal;
  v86 = outHitEffectEnt;
  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 198, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 199, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 200, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "GBulletSP ImpactEffectCreate");
  hitEnt = _RSI->hitEnt;
  if ( !hitEnt )
    goto LABEL_64;
  sentient = hitEnt->sentient;
  if ( sentient && attacker->actor && sentient->eTeam == attacker->sentient->eTeam )
    goto LABEL_22;
  if ( !hitEnt->client )
  {
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v45 = attacker - g_entities;
    if ( (unsigned int)v45 >= 0x800 )
    {
      LODWORD(v79) = attacker - g_entities;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v79, 2048) )
        __debugbreak();
    }
    v45 = (__int16)v45;
    if ( (unsigned int)(__int16)v45 >= 0x800 )
    {
      LODWORD(attackerEntNum) = 2048;
      LODWORD(v79) = v45;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v79, attackerEntNum) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v45].r.isInUse != g_entityIsInUse[v45] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v45] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 260, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( attacker ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( attacker ) )") )
      __debugbreak();
    v46 = _RSI->hitEnt;
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v47 = (__int64)((unsigned __int128)(((char *)v46 - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
    v48 = (v47 >> 63) + v47;
    if ( (unsigned int)v48 >= 0x800 )
    {
      LODWORD(attackerEntNum) = 2048;
      LODWORD(v79) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v79, attackerEntNum) )
        __debugbreak();
    }
    v48 = (__int16)v48;
    if ( (unsigned int)(__int16)v48 >= 0x800 )
    {
      LODWORD(attackerEntNum) = 2048;
      LODWORD(v79) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v79, attackerEntNum) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v48].r.isInUse != g_entityIsInUse[v48] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v48] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 261, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( br->hitEnt ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( br->hitEnt ) )") )
      __debugbreak();
    GScr_AddEntity(attacker);
    GScr_Notify(_RSI->hitEnt, scr_const.bullethit, 1u);
LABEL_64:
    EntityHitId = Trace_GetEntityHitId(&_RSI->trace);
    client = attacker->client;
    if ( client && _R14->weaponEntIndex != 2046 && (unsigned __int16)(EntityHitId - 2046) <= 1u )
    {
      p_eFlags = &client->ps.eFlags;
      if ( !p_eFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
        __debugbreak();
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 6u) )
      {
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 7u) )
        {
          if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
            __debugbreak();
        }
        else
        {
          v52 = attacker->client;
          if ( !v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2184, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v52->ps.eFlags, ACTIVE, 0xBu) )
            goto LABEL_22;
        }
      }
    }
    HitEvent = BG_WeaponBulletFire_GetHitEvent(_R14->methodOfDeath, 0);
    _RBX = G_Utils_SpawnEventEntity(&_RSI->hitPos, HitEvent);
    Instance = GWeaponMap::GetInstance();
    BG_SetWeaponForEntity(Instance, &_RBX->s, weapon);
    _RBX->s.eventParm = 0;
    G_SetAngle(_RBX, normal, 1, 1);
    this->ImpactEffectSetFlags(this, _RBX, impactEffectFlags);
    _RBX->s.surfType = (_RSI->trace.surfaceFlags >> 19) & 0x3F;
    _RBX->s.lerp.u.anonymous.data[7] = _RSI->trace.partName;
    _RBX->s.lerp.u.anonymous.data[0] = LODWORD(_R14->start.v[0]);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+6Ch]
      vmovss  dword ptr [rbx+5Ch], xmm0
      vmovss  xmm1, dword ptr [r14+70h]
      vmovss  dword ptr [rbx+60h], xmm1
    }
    _RBX->s.otherEntityNum = _R14->weaponEntIndex;
    _RBX->s.groundEntityNum = Trace_GetEntityHitId(&_RSI->trace);
    if ( _RBX->s.otherEntityNum != _R14->weaponEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 294, ASSERT_TYPE_ASSERT, "( hitEffectEnt->s.otherEntityNum == bp->weaponEntIndex )", (const char *)&queryFormat, "hitEffectEnt->s.otherEntityNum == bp->weaponEntIndex") )
      __debugbreak();
    if ( _R14->weaponEntIndex == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 295, ASSERT_TYPE_ASSERT, "(bp->weaponEntIndex != ENTITYNUM_NONE)", "%s\n\tBullet hit event created with invalid attacker.", "bp->weaponEntIndex != ENTITYNUM_NONE") )
      __debugbreak();
    _RBX->s.lerp.u.anonymous.data[6] = GBullet::CalculateHitImpactSoundDelay(this, attacker, _RSI->hitEnt);
    v57 = _RSI->hitEnt;
    if ( v57 )
    {
      if ( v57->sentient )
      {
        groundEntityNum = v57->s.groundEntityNum;
        if ( (unsigned __int16)groundEntityNum < 0x7FEu )
          v57 = &g_entities[groundEntityNum];
      }
      if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
        __debugbreak();
      if ( GMovingPlatforms::ms_instance->ShouldHandleAsMovingPlatformThatIsActuallyMoving(GMovingPlatforms::ms_instance, v57) )
      {
        v59 = _RSI->hitEnt;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+130h]
          vsubss  xmm1, xmm0, dword ptr [rcx+130h]
          vmovss  dword ptr [rbp+3Fh+randSeed], xmm1
          vmovss  xmm2, dword ptr [rbx+134h]
          vsubss  xmm0, xmm2, dword ptr [rcx+134h]
          vmovss  dword ptr [rbp+3Fh+randSeed+4], xmm0
          vmovss  xmm1, dword ptr [rbx+138h]
          vsubss  xmm2, xmm1, dword ptr [rcx+138h]
          vmovss  [rbp+3Fh+var_78], xmm2
        }
        AnglesToAxis(&v59->r.currentAngles, &axis);
        MatrixTransposeTransformVector(&randSeeda, &axis, &out);
        _RDI = &_RBX->s.lerp.pos;
        if ( _RBX == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", (_DWORD)_RBX + 98, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
          __debugbreak();
        __asm { vmovss  xmm0, dword ptr [rbp+3Fh+out] }
        if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
        {
          __asm { vmovss  dword ptr [rbp+3Fh+r_weapon], xmm0 }
          if ( (r_weapon & 0x7F800000) == 2139095040 )
            goto LABEL_109;
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+3Fh+out+4]
            vmovss  dword ptr [rbp+3Fh+r_weapon], xmm0
          }
          if ( (r_weapona & 0x7F800000) == 2139095040 )
            goto LABEL_109;
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+3Fh+out+8]
            vmovss  dword ptr [rbp+3Fh+r_weapon], xmm0
          }
          if ( (r_weaponb & 0x7F800000) == 2139095040 )
          {
LABEL_109:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
              __debugbreak();
          }
          v70 = LODWORD(out.v[0]) ^ ~s_trbase_aab_X;
          v71 = v70 ^ LODWORD(out.v[1]) ^ s_trbase_aab_Y;
          v72 = v71 ^ LODWORD(out.v[2]) ^ s_trbase_aab_Z;
          LODWORD(_RBX->s.lerp.pos.trBase.v[0]) = v70;
          LODWORD(_RBX->s.lerp.pos.trBase.v[1]) = v71;
          LODWORD(_RBX->s.lerp.pos.trBase.v[2]) = v72;
          memset(&randSeeda, 0, 8ui64);
        }
        else
        {
          __asm
          {
            vmovss  dword ptr [rdi+0Ch], xmm0
            vmovss  xmm1, dword ptr [rbp+3Fh+out+4]
            vmovss  dword ptr [rdi+10h], xmm1
            vmovss  xmm0, dword ptr [rbp+3Fh+out+8]
            vmovss  dword ptr [rdi+14h], xmm0
          }
        }
        MatrixTransposeTransformVector(normal, &axis, &_RBX->s.lerp.apos.trBase);
        _RBX->s.lerp.u.player.extraAnimData.anonymous.data[1] |= 1u;
        _RBX->s.lerp.pos.trDelta.v[0] = _RBX->r.currentOrigin.v[0];
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+134h]
          vmovss  dword ptr [rbx+2Ch], xmm0
          vmovss  xmm1, dword ptr [rbx+138h]
          vmovss  dword ptr [rbx+30h], xmm1
        }
        _RBX->s.lerp.apos.trDelta.v[0] = normal->v[0];
        __asm
        {
          vmovss  xmm0, dword ptr [r12+4]
          vmovss  dword ptr [rbx+50h], xmm0
          vmovss  xmm1, dword ptr [r12+8]
          vmovss  dword ptr [rbx+54h], xmm1
        }
        memset(&out, 0, sizeof(out));
      }
    }
    goto LABEL_106;
  }
  G_GameInterface_SPImpactEffectFlagsClient(hitEnt, _R14, weapon, isAlternate, &impactEffectFlags);
  v16 = _RSI->trace.partGroup < 0x13u;
  v17 = _RSI->trace.partGroup == 19;
  if ( _RSI->trace.partGroup == 19 )
  {
    IsUsingShield = G_Weapon_PlayerIsUsingShield(_RSI->hitEnt);
    v16 = 0;
    v17 = !IsUsingShield;
    if ( !IsUsingShield )
    {
      GBullet::BroadcastSpecialHitEvent(this, &_RSI->hitPos, normal, &_R14->start, weapon, isAlternate, _R14->weaponEntIndex, _RSI->hitEnt, (hitLocation_t)_RSI->trace.partGroup);
LABEL_22:
      Sys_ProfEndNamedEvent();
      return 0;
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+60h]
    vsubss  xmm3, xmm0, dword ptr [r13+0]
    vmovss  xmm1, dword ptr [rsi+64h]
    vsubss  xmm2, xmm1, dword ptr [r13+4]
    vmovss  xmm0, dword ptr [rsi+68h]
    vsubss  xmm4, xmm0, dword ptr [r13+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vsubss  xmm4, xmm1, dword ptr [r14+8Ch]
    vandps  xmm4, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm4, cs:__real@3a83126f
  }
  if ( G_BulletSP_HitPlayerShield(_RSI->hitEnt, attacker, &_R14->start, &_RSI->hitPos, v16 || v17) )
  {
    GBullet::BroadcastShieldHitEventToVictim(v85, *(unsigned int **)randSeeda.v, &_RSI->hitPos, normal, &_R14->start, weapon, isAlternate, _R14->weaponEntIndex, _RSI->hitEnt->s.number);
    if ( CL_GetLocalClientActiveCount() > 1 )
      GBullet::BroadcastSpecialHitEvent(v85, &_RSI->hitPos, normal, &_R14->start, weapon, isAlternate, _R14->weaponEntIndex, _RSI->hitEnt, (hitLocation_t)_RSI->trace.partGroup);
    goto LABEL_22;
  }
  ClientHitEvent = BG_WeaponBulletFire_GetClientHitEvent(_R14->methodOfDeath, 0);
  _RBX = G_Utils_SpawnEventEntity(&_RSI->hitPos, ClientHitEvent);
  v85->ImpactEffectSetFlags(v85, _RBX, 0);
  _RBX->s.lerp.u.anonymous.data[0] = LODWORD(_R14->start.v[0]);
  _RBX->s.lerp.u.anonymous.data[1] = LODWORD(_R14->start.v[1]);
  _RBX->s.lerp.u.anonymous.data[2] = LODWORD(_R14->start.v[2]);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+60h]
    vsubss  xmm1, xmm0, dword ptr [rax+130h]
    vmovss  dword ptr [rbx+64h], xmm1
    vmovss  xmm2, dword ptr [rsi+64h]
    vsubss  xmm0, xmm2, dword ptr [rax+134h]
    vmovss  dword ptr [rbx+68h], xmm0
    vmovss  xmm1, dword ptr [rsi+68h]
    vsubss  xmm2, xmm1, dword ptr [rax+138h]
    vmovss  dword ptr [rbx+6Ch], xmm2
  }
  v42 = GWeaponMap::GetInstance();
  BG_SetWeaponForEntity(v42, &_RBX->s, weapon);
  v43 = v85;
  v85->ImpactEffectSetFlags(v85, _RBX, impactEffectFlags);
  _RBX->s.surfType = (_RSI->trace.surfaceFlags >> 19) & 0x3F;
  weaponEntIndex_low = SLOWORD(_R14->weaponEntIndex);
  _RBX->s.otherEntityNum = _R14->weaponEntIndex;
  _RBX->s.groundEntityNum = _RSI->hitEnt->s.number;
  if ( weaponEntIndex_low != _R14->weaponEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 249, ASSERT_TYPE_ASSERT, "( hitEffectEnt->s.otherEntityNum == bp->weaponEntIndex )", (const char *)&queryFormat, "hitEffectEnt->s.otherEntityNum == bp->weaponEntIndex") )
    __debugbreak();
  _RBX->s.lerp.u.anonymous.data[6] = GBullet::CalculateHitImpactSoundDelay(v43, attacker, _RSI->hitEnt);
LABEL_106:
  *v86 = _RBX;
  Sys_ProfEndNamedEvent();
  return 1;
}

/*
==============
GBulletSP::ImpactEffectSetAdditionalFlags
==============
*/
void GBulletSP::ImpactEffectSetAdditionalFlags(GBulletSP *this, gentity_s *hitEffectEnt, const int impactEffectFlags)
{
  if ( hitEffectEnt )
  {
    hitEffectEnt->s.eventParm2 |= impactEffectFlags;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 351, ASSERT_TYPE_ASSERT, "(hitEffectEnt)", (const char *)&queryFormat, "hitEffectEnt") )
      __debugbreak();
    MEMORY[0xC4] |= impactEffectFlags;
  }
}

/*
==============
GBulletSP::ImpactEffectSetFlags
==============
*/
void GBulletSP::ImpactEffectSetFlags(GBulletSP *this, gentity_s *hitEffectEnt, const int impactEffectFlags)
{
  if ( hitEffectEnt )
  {
    hitEffectEnt->s.eventParm2 = impactEffectFlags;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 344, ASSERT_TYPE_ASSERT, "(hitEffectEnt)", (const char *)&queryFormat, "hitEffectEnt") )
      __debugbreak();
    MEMORY[0xC4] = impactEffectFlags;
  }
}

/*
==============
GBulletSP::InvokeEntityImpaledCallback
==============
*/
void GBulletSP::InvokeEntityImpaledCallback(GBulletSP *this, gentity_s *attacker, gentity_s *victim, const Weapon *r_weapon)
{
  ;
}

/*
==============
GBulletSP::ProcessRiotShield
==============
*/
bool GBulletSP::ProcessRiotShield(GBulletSP *this, unsigned int *randSeed, BulletFireParams *bp, BulletTraceResults *br, const Weapon *weapon, bool isAlternate, gentity_s *attacker, int gameTime, int dFlags, int damage, bool *bulletStillActive)
{
  bool *v11; 
  bool v14; 
  bool v15; 
  vec3_t *p_start; 
  bool v31; 
  gentity_s *v32; 
  entityType_s eType; 
  bool result; 
  const gentity_s *hitEnt; 

  v11 = bulletStillActive;
  _RBX = br;
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 382, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 383, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 384, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !_RBX->hitEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 385, ASSERT_TYPE_ASSERT, "( br->hitEnt )", (const char *)&queryFormat, "br->hitEnt") )
    __debugbreak();
  v14 = v11 == NULL;
  if ( !v11 )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 386, ASSERT_TYPE_ASSERT, "( bulletStillActive )", (const char *)&queryFormat, "bulletStillActive");
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+60h]
    vmovss  xmm1, dword ptr [rbx+64h]
  }
  p_start = &bp->start;
  __asm
  {
    vsubss  xmm3, xmm0, dword ptr [r15]
    vsubss  xmm2, xmm1, dword ptr [r15+4]
    vmovss  xmm0, dword ptr [rbx+68h]
    vsubss  xmm4, xmm0, dword ptr [r15+8]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vsubss  xmm4, xmm1, dword ptr [rdi+8Ch]
    vandps  xmm4, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm4, cs:__real@3a83126f
  }
  v31 = v14;
  if ( _RBX->trace.partGroup != 19 || (unsigned int)G_BulletSP_DamageRiotShield(_RBX, &damage, *(double *)&_XMM2) && _RBX->hitEnt->actor )
  {
    hitEnt = _RBX->hitEnt;
    if ( hitEnt->client && G_BulletSP_HitPlayerShield(hitEnt, attacker, p_start, &_RBX->hitPos, v31) && !(unsigned int)G_BulletSP_DamageRiotShield(_RBX, &damage, *(double *)&_XMM2) )
    {
      *v11 = 0;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v32 = _RBX->hitEnt;
    if ( v32->s.eType == ET_ACTOR )
    {
      GScr_Notify(_RBX->hitEnt, scr_const.bullet_hitshield, 0);
      v32 = _RBX->hitEnt;
    }
    if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    eType = v32->s.eType;
    if ( ((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM || !attacker->client || _RBX->hitEnt->client )
    {
      *v11 = 0;
      return 1;
    }
    else
    {
      result = 1;
      *v11 = 1;
    }
  }
  return result;
}

/*
==============
GBulletSP::SetTempEventEntNormal
==============
*/
void GBulletSP::SetTempEventEntNormal(GBulletSP *this, gentity_s *ent, const vec3_t *normal)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 608, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "GBulletSP SetTempEventEntNormal");
  ent->s.eventParm = 0;
  G_SetAngle(ent, normal, 1, 1);
  Sys_ProfEndNamedEvent();
}

/*
==============
GBulletSP::SetVictimShieldHitEventParameters
==============
*/
void GBulletSP::SetVictimShieldHitEventParameters(GBulletSP *this, gentity_s *tempEnt, int attackerEntNum, int victimEntNum, const vec3_t *startPos, const vec3_t *hitPos, unsigned int *randSeed)
{
  __int64 v7; 
  gclient_s *client; 
  int v11; 
  int v12; 
  __int64 v19; 

  v7 = victimEntNum;
  _RDI = tempEnt;
  if ( !tempEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 621, ASSERT_TYPE_ASSERT, "( tempEnt )", (const char *)&queryFormat, "tempEnt") )
    __debugbreak();
  if ( (unsigned int)v7 >= 0x800 )
  {
    LODWORD(v19) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 622, ASSERT_TYPE_ASSERT, "(unsigned)( victimEntNum ) < (unsigned)( ( 2048 ) )", "victimEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, 2048) )
      __debugbreak();
  }
  client = g_entities[v7].client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 625, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  _RBP = hitPos;
  v11 = BG_ShieldHitEncodeRandom(randSeed, client->shieldHealth <= 0);
  v12 = BG_ShieldHitEncodeHitMarker(startPos, hitPos);
  if ( (v12 & 0xFF0000FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 632, ASSERT_TYPE_ASSERT, "(( hitMarkerData & 0xFF0000FF ) == 0)", (const char *)&queryFormat, "( hitMarkerData & 0xFF0000FF ) == 0") )
    __debugbreak();
  _RDI->s.eventParm = v11 | v12;
  _RDI->s.groundEntityNum = client->ps.clientNum;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm1, xmm0, dword ptr [rbx+rax+130h]
    vmovss  dword ptr [rdi+64h], xmm1
    vmovss  xmm2, dword ptr [rbp+4]
    vsubss  xmm0, xmm2, dword ptr [rbx+rax+134h]
    vmovss  dword ptr [rdi+68h], xmm0
    vmovss  xmm1, dword ptr [rbp+8]
    vsubss  xmm2, xmm1, dword ptr [rbx+rax+138h]
    vmovss  dword ptr [rdi+6Ch], xmm2
  }
}

/*
==============
GBulletSP::SpreadFireTargets
==============
*/

void __fastcall GBulletSP::SpreadFireTargets(GBulletSP *this, gentity_s *attacker, int shotCount, double range, float spread, const BgWeaponParms *wp, const gentity_s *weaponEnt, int gameTime)
{
  int number; 
  bool isAlternate; 
  const playerState_s *EntityPlayerStateConst; 
  GWeaponMap *Instance; 
  __int64 v44; 
  GTargetAssist_vtbl *v45; 
  int i; 
  bool v48; 
  actor_s *actor; 
  __int64 v87; 
  GTargetAssist *v88; 
  AIActorInterface v89; 
  AIActorInterface *v90; 
  vec3_t damageDir; 
  BulletFireParams v92; 
  char v93; 
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
  }
  _RSI = wp;
  __asm { vmovaps xmm6, xmm3 }
  if ( !this->m_reduceSpreadShotCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 469, ASSERT_TYPE_ASSERT, "(m_reduceSpreadShotCount)", "%s\n\tMust be set or more bullets will fire than intended", "m_reduceSpreadShotCount") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 470, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rbp+0D0h+spread]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
    vmulss  xmm10, xmm6, xmm6
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  number = 2046;
  __asm
  {
    vmovss  xmm4, dword ptr [rsi]
    vmovss  xmm5, dword ptr [rsi+4]
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm9, cs:__real@80000000
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm1, xmm3, xmm9
    vblendvps xmm1, xmm3, xmm8, xmm1
    vmovaps xmm7, xmm0
    vdivss  xmm0, xmm8, xmm1
    vmulss  xmm11, xmm4, xmm0
    vmulss  xmm12, xmm5, xmm0
  }
  if ( weaponEnt )
    number = weaponEnt->s.number;
  v92.weaponEntIndex = number;
  v92.ignoreHitEntCount = 0;
  BG_AddIgnoreEntToBP(&v92, number);
  isAlternate = wp->isAlternate;
  __asm { vmovss  [rbp+0D0h+var_150.damageMultiplier], xmm8 }
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(attacker);
  Instance = GWeaponMap::GetInstance();
  *(double *)&_XMM0 = BG_GetADSDamageRangeScale(Instance, EntityPlayerStateConst, &wp->weapon, isAlternate);
  __asm
  {
    vmovss  [rbp+0D0h+var_150.rangeScale], xmm0
    vmovss  [rbp+0D0h+var_150.penetrationMultiplier], xmm8
    vmovss  [rbp+0D0h+var_150.chargedDamageMultiplier], xmm8
  }
  v92.methodOfDeath = G_Bullet_GetMethodOfDeath(attacker, wp);
  v92.firstImpactOccurred = 0;
  if ( v92.methodOfDeath == MOD_EXPLOSIVE_BULLET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 491, ASSERT_TYPE_SANITY, "( bp.methodOfDeath != MOD_EXPLOSIVE_BULLET )", (const char *)&queryFormat, "bp.methodOfDeath != MOD_EXPLOSIVE_BULLET") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+24h]
    vmovss  xmm1, dword ptr [rsi+28h]
    vmovss  dword ptr [rbp+0D0h+var_150.start], xmm0
    vmovss  xmm0, dword ptr [rsi+2Ch]
    vmovss  dword ptr [rbp+0D0h+var_150.start+4], xmm1
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [rbp+0D0h+var_150.start+8], xmm0
    vmovss  [rbp+0D0h+var_150.travelDistance], xmm1
  }
  LOWORD(v87) = 2047;
  if ( !GTargetAssist::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 61, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  v44 = (unsigned __int16)attacker->s.number;
  v45 = GTargetAssist::ms_instance->__vftable;
  v88 = GTargetAssist::ms_instance;
  for ( i = ((__int64 (__fastcall *)(GTargetAssist *, __int64, __int64))v45->FindNextTarget)(GTargetAssist::ms_instance, 0xFFFFFFFFi64, v44); i != 0x7FFFFFFF; i = v88->FindNextTarget(v88, LOCAL_CLIENT_INVALID, attacker->s.number, i, gameTime, (__int16 *)&v87) )
  {
    _RBX = &g_entities[(__int16)v87];
    v48 = _RBX->sentient == NULL;
    if ( _RBX->sentient )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+130h]
        vsubss  xmm3, xmm0, dword ptr [rsi+24h]
        vmovss  dword ptr [rsp+1D0h+damageDir], xmm3
        vmovss  xmm0, dword ptr [rbx+134h]
        vsubss  xmm4, xmm0, dword ptr [rsi+28h]
        vmulss  xmm1, xmm4, xmm4
        vmovss  dword ptr [rsp+1D0h+damageDir+4], xmm4
        vmovss  xmm0, dword ptr [rbx+138h]
        vsubss  xmm2, xmm0, dword ptr [rsi+2Ch]
        vmulss  xmm0, xmm3, xmm3
        vaddss  xmm5, xmm1, xmm0
        vmulss  xmm1, xmm2, xmm2
        vaddss  xmm0, xmm1, xmm5
        vcomiss xmm0, xmm10
        vmovss  dword ptr [rsp+1D0h+damageDir+8], xmm2
      }
      if ( v48 )
      {
        __asm
        {
          vsqrtss xmm1, xmm5, xmm5
          vcmpless xmm0, xmm1, xmm9
          vblendvps xmm0, xmm1, xmm8, xmm0
          vdivss  xmm1, xmm8, xmm0
          vmulss  xmm0, xmm4, xmm1
          vmulss  xmm2, xmm3, xmm1
          vmulss  xmm1, xmm0, xmm12
          vmovss  dword ptr [rsp+1D0h+damageDir+4], xmm0
          vmulss  xmm0, xmm2, xmm11
          vaddss  xmm1, xmm1, xmm0
          vcomiss xmm1, xmm7
          vmovss  dword ptr [rsp+1D0h+damageDir], xmm2
          vmovss  xmm0, dword ptr [rbx+130h]
          vmovss  dword ptr [rbp+0D0h+var_150.end], xmm0
          vmovss  xmm1, dword ptr [rbx+134h]
          vmovss  dword ptr [rbp+0D0h+var_150.end+4], xmm1
          vmovss  xmm0, dword ptr [rbx+138h]
          vmovss  dword ptr [rbp+0D0h+var_150.end+8], xmm0
          vaddss  xmm0, xmm0, dword ptr [rbx+114h]
          vmovss  dword ptr [rbp+0D0h+var_150.end+8], xmm0
        }
        if ( !_RBX->client || !G_BulletSP_HitPlayerShield(&g_entities[(__int16)v87], attacker, &wp->muzzleTrace, &v92.end, 1) )
        {
          actor = _RBX->actor;
          if ( !actor || (AIActorInterface::AIActorInterface(&v89), v90 = NULL, AIActorInterface::SetActor(&v89, actor), v90 = &v89, !AIScriptedInterface::DamageBlockedByShield(&v89, &damageDir)) )
          {
            __asm
            {
              vmovaps xmm3, xmm6; coneHeight
              vmovaps xmm2, xmm7; cosHalfFov
            }
            if ( !PointInsideCone(&v92.start, &wp->forward, *(float *)&_XMM2, *(float *)&_XMM3, &v92.end) || !(unsigned int)G_BulletSP_CheckSpreadFireAtPos(attacker, _RBX, &v92, wp, weaponEnt, HITLOC_TORSO_LWR) )
            {
              Sentient_GetEyePosition(_RBX->sentient, &v92.end);
              __asm
              {
                vmovaps xmm3, xmm6; coneHeight
                vmovaps xmm2, xmm7; cosHalfFov
              }
              if ( PointInsideCone(&v92.start, &wp->forward, *(float *)&_XMM2, *(float *)&_XMM3, &v92.end) )
                G_BulletSP_CheckSpreadFireAtPos(attacker, _RBX, &v92, wp, weaponEnt, HITLOC_HEAD);
            }
          }
        }
      }
    }
  }
  _R11 = &v93;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
GBulletSP::TraceIgnoreHitEntity
==============
*/
bool GBulletSP::TraceIgnoreHitEntity(GBulletSP *this, const BulletFireParams *bp, const BulletTraceResults *br, const gentity_s *attacker, bool allowHitSelf)
{
  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 358, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 359, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !br->hitEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 360, ASSERT_TYPE_ASSERT, "( br->hitEnt )", (const char *)&queryFormat, "br->hitEnt") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 361, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  return !allowHitSelf && br->hitEnt == attacker || G_Utils_IsActor(attacker) && (GBullet::TraceIgnoreHitEntityForAI(this, bp, br, attacker) || br->hitEnt->sentient && !Sentient_IsBadGuyTeam(attacker->sentient->eTeam) && !Sentient_IsBadGuyTeam(br->hitEnt->sentient->eTeam));
}

/*
==============
GBulletSP::UseAISuppression
==============
*/
__int64 GBulletSP::UseAISuppression(GBulletSP *this)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_ai_friendlySuppression;
  if ( !DVARBOOL_ai_friendlySuppression && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_friendlySuppression") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.color[0];
}

/*
==============
GBulletSP::UseFriendlyFire
==============
*/
bool GBulletSP::UseFriendlyFire(GBulletSP *this)
{
  return 0;
}

