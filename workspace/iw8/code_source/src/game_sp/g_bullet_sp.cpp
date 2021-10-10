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
  vec3_t *p_end; 
  gentity_s *v8; 
  vec3_t *v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  bool isAlternate; 
  Weapon *p_weapon; 
  GWeaponMap *Instance; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  GExtraDamageParams extraParams; 
  int damage; 
  gentity_s *targ; 
  BulletTraceResults br; 

  p_start = &bp->start;
  p_end = &bp->end;
  v8 = target;
  targ = target;
  v13 = &bp->end;
  if ( weaponEnt )
    v8 = (gentity_s *)weaponEnt;
  if ( PhysicsQuery_LegacyTracePassed(PHYSICS_WORLD_ID_FIRST, p_start, v13, &bounds_origin, target->s.number, v8->s.number, 41969969, 0, NULL, 0) )
  {
    v14 = p_end->v[0];
    v15 = p_end->v[2];
    br.hitPos.v[1] = p_end->v[1];
    bp->dir.v[0] = v14 - p_start->v[0];
    br.hitPos.v[2] = v15;
    v16 = bp->end.v[1];
    br.hitPos.v[0] = v14;
    bp->dir.v[1] = v16 - p_start->v[1];
    v17 = bp->end.v[2] - p_start->v[2];
    br.hitEnt = target;
    bp->dir.v[2] = v17;
    isAlternate = wp->isAlternate;
    p_weapon = &wp->weapon;
    br.trace.hitType = TRACE_HITTYPE_ENTITY;
    damage = G_Bullet_GetDamage(bp, &br, &wp->weapon, isAlternate, attacker);
    if ( weaponEnt )
    {
      Instance = GWeaponMap::GetInstance();
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      p_weapon = (Weapon *)BgWeaponMap::GetWeapon(Instance, weaponEnt->s.weaponHandle);
    }
    extraParams = (GExtraDamageParams)257;
    G_CombatSP_Damage(targ, attacker, attacker, &bp->dir, p_end, damage, 0, bp->methodOfDeath, p_weapon, wp->isAlternate, hitLoc, 0, (scr_string_t)0, 0, NULL, &extraParams);
    v21 = DVARINT_g_debugBullets;
    if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.integer == 1 )
      goto LABEL_21;
    v22 = DVARINT_g_debugBullets;
    if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.integer == 2 )
      goto LABEL_21;
    v23 = DVARINT_g_debugBullets;
    if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( v23->current.integer == 4 )
LABEL_21:
      G_DebugLineWithDuration(p_start, p_end, &colorOrange, 1, 100);
    return 1i64;
  }
  else
  {
    v25 = DVARINT_g_debugBullets;
    if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    if ( v25->current.integer == 1 )
      goto LABEL_35;
    v26 = DVARINT_g_debugBullets;
    if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    if ( v26->current.integer == 2 )
      goto LABEL_35;
    v27 = DVARINT_g_debugBullets;
    if ( !DVARINT_g_debugBullets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugBullets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( v27->current.integer == 4 )
LABEL_35:
      G_DebugLineWithDuration(p_start, p_end, &colorRed, 1, 100);
    return 0i64;
  }
}

/*
==============
G_BulletSP_DamageRiotShield
==============
*/
__int64 G_BulletSP_DamageRiotShield(BulletTraceResults *br, int *damage)
{
  gentity_s *hitEnt; 
  gclient_s *client; 
  actor_s *actor; 
  unsigned int v7; 
  const Weapon *RiotShieldIfEquipped; 
  const Weapon *v9; 
  const WeaponDef *v10; 
  int shieldHealth; 
  int v12; 
  const WeaponDef *v16; 
  int v17; 
  int v18; 

  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 108, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !br->hitEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 109, ASSERT_TYPE_ASSERT, "( br->hitEnt )", (const char *)&queryFormat, "br->hitEnt") )
    __debugbreak();
  hitEnt = br->hitEnt;
  client = hitEnt->client;
  actor = hitEnt->actor;
  if ( !client && !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 114, ASSERT_TYPE_ASSERT, "( client || actor )", (const char *)&queryFormat, "client || actor") )
    __debugbreak();
  v7 = 0;
  if ( client )
  {
    RiotShieldIfEquipped = G_Weapon_GetRiotShieldIfEquipped(br->hitEnt);
    v9 = RiotShieldIfEquipped;
    if ( RiotShieldIfEquipped->weaponIdx )
    {
      if ( !BG_IsRiotShield(RiotShieldIfEquipped, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 126, ASSERT_TYPE_ASSERT, "(BG_IsRiotShield( r_weapon, false ))", (const char *)&queryFormat, "BG_IsRiotShield( r_weapon, false )") )
        __debugbreak();
      v10 = BG_WeaponDef(v9, 0);
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 128, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
        __debugbreak();
      if ( v10->riotShieldEnableDamage )
      {
        shieldHealth = client->shieldHealth;
        v12 = shieldHealth - *damage;
        client->shieldHealth = v12;
        if ( v12 <= 0 )
        {
          client->shieldHealth = 0;
          br->trace.partGroup = 4;
          _XMM2 = 0i64;
          __asm { vroundss xmm2, xmm2, xmm1, 1 }
          v7 = (int)*(float *)&_XMM2;
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
      v16 = BG_WeaponDef(&actor->shieldWeapon, 0);
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 171, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
        __debugbreak();
      if ( v16->riotShieldEnableDamage )
      {
        v17 = actor->shieldHealth;
        v18 = v17 - *damage;
        actor->shieldHealth = v18;
        if ( v18 <= 0 )
        {
          actor->shieldHealth = 0;
          br->trace.partGroup = 4;
          _XMM2 = 0i64;
          __asm { vroundss xmm2, xmm2, xmm1, 1 }
          v7 = (int)*(float *)&_XMM2;
          if ( v17 > 0 )
            GScr_Notify(br->hitEnt, scr_const.riotshield_damaged, 0);
        }
      }
      goto LABEL_36;
    }
    return 0i64;
  }
LABEL_36:
  *damage = v7;
  return v7;
}

/*
==============
G_BulletSP_HitPlayerShield
==============
*/
bool G_BulletSP_HitPlayerShield(const gentity_s *ent, const gentity_s *attacker, const vec3_t *bulletStartPos, const vec3_t *bulletEndPos, bool isInitialTrace)
{
  bool IsRiotShieldOnBack; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  bool HasOffhandShieldOpenToFireWeapon; 
  double ShieldCosOfAngleToPoint; 
  float v25; 
  const dvar_t *v26; 
  float v27; 
  bool v28; 
  bool v29; 
  const dvar_t *v30; 
  bool v31; 
  const char *v32; 
  vec3_t point; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 27, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 28, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  IsRiotShieldOnBack = G_Weapon_PlayerIsRiotShieldOnBack(ent);
  if ( !IsRiotShieldOnBack && (!G_Weapon_PlayerIsUsingShield(ent) || !G_Weapon_PlayerShieldIsInBlockingState(ent)) )
    return 0;
  if ( attacker && isInitialTrace )
  {
    v11 = bulletEndPos->v[0] - bulletStartPos->v[0];
    v13 = LODWORD(bulletEndPos->v[1]);
    v12 = bulletEndPos->v[1] - bulletStartPos->v[1];
    v14 = bulletEndPos->v[2] - bulletStartPos->v[2];
    *(float *)&v13 = fsqrt((float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v14 * v14));
    _XMM4 = v13;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    v18 = v11 * (float)(1.0 / *(float *)&_XMM0);
    v19 = v12 * (float)(1.0 / *(float *)&_XMM0);
    v20 = v14 * (float)(1.0 / *(float *)&_XMM0);
    *(float *)&v13 = (float)((float)((float)(attacker->r.currentOrigin.v[1] - bulletStartPos->v[1]) * v19) + (float)((float)(attacker->r.currentOrigin.v[0] - bulletStartPos->v[0]) * v18)) + (float)((float)(attacker->r.currentOrigin.v[2] - bulletStartPos->v[2]) * v20);
    v21 = (float)(*(float *)&v13 * v19) + bulletStartPos->v[1];
    point.v[0] = (float)(*(float *)&v13 * v18) + bulletStartPos->v[0];
    point.v[2] = (float)(*(float *)&v13 * v20) + bulletStartPos->v[2];
    point.v[1] = v21;
  }
  else
  {
    v22 = bulletStartPos->v[1];
    point.v[0] = bulletStartPos->v[0];
    point.v[2] = bulletStartPos->v[2];
    point.v[1] = v22;
  }
  HasOffhandShieldOpenToFireWeapon = G_Weapon_PlayerHasOffhandShieldOpenToFireWeapon(ent);
  ShieldCosOfAngleToPoint = G_Weapon_GetShieldCosOfAngleToPoint(ent, &point, IsRiotShieldOnBack, HasOffhandShieldOpenToFireWeapon);
  v25 = acosf_0(*(float *)&ShieldCosOfAngleToPoint);
  v26 = DVARFLT_shieldPlayerBulletProtectionDegrees;
  v27 = v25 * 57.295776;
  if ( !DVARFLT_shieldPlayerBulletProtectionDegrees && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "shieldPlayerBulletProtectionDegrees") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  v28 = v27 < v26->current.value;
  v29 = v27 == v26->current.value;
  v30 = DVARBOOL_shieldDebug;
  v31 = v28 || v29;
  if ( !DVARBOOL_shieldDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "shieldDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  if ( v30->current.enabled )
  {
    v32 = "no";
    if ( v31 )
      v32 = "YES";
    Com_Printf(15, "G_BulletSP_HitPlayerShield(): %s  -  degrees: %.2f  -  radians: %.2f\n", v32, v27, v25);
  }
  return v31;
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
  float v15; 
  float v16; 
  float v17; 
  int ClientHitEvent; 
  gentity_s *v20; 
  gentity_s *v21; 
  GWeaponMap *v22; 
  GBullet *v23; 
  int weaponEntIndex_low; 
  signed __int64 v25; 
  gentity_s *v26; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  unsigned __int16 EntityHitId; 
  gclient_s *client; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  gclient_s *v32; 
  int HitEvent; 
  GWeaponMap *Instance; 
  gentity_s *v35; 
  __int16 groundEntityNum; 
  gentity_s *v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  Weapon *v41; 
  __int64 attackerEntNum; 
  vec3_t out; 
  GBullet *v44; 
  gentity_s **v45; 
  __int64 v46; 
  vec3_t randSeeda; 
  tmat33_t<vec3_t> axis; 

  v46 = -2i64;
  *(_QWORD *)randSeeda.v = randSeed;
  v44 = this;
  v45 = outHitEffectEnt;
  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 198, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 199, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 200, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "GBulletSP ImpactEffectCreate");
  hitEnt = br->hitEnt;
  if ( !hitEnt )
    goto LABEL_64;
  sentient = hitEnt->sentient;
  if ( sentient && attacker->actor && sentient->eTeam == attacker->sentient->eTeam )
    goto LABEL_22;
  if ( !hitEnt->client )
  {
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v25 = attacker - g_entities;
    if ( (unsigned int)v25 >= 0x800 )
    {
      LODWORD(v41) = attacker - g_entities;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v41, 2048) )
        __debugbreak();
    }
    v25 = (__int16)v25;
    if ( (unsigned int)(__int16)v25 >= 0x800 )
    {
      LODWORD(attackerEntNum) = 2048;
      LODWORD(v41) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v41, attackerEntNum) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v25].r.isInUse != g_entityIsInUse[v25] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v25] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 260, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( attacker ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( attacker ) )") )
      __debugbreak();
    v26 = br->hitEnt;
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v27 = (__int64)((unsigned __int128)(((char *)v26 - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
    v28 = (v27 >> 63) + v27;
    if ( (unsigned int)v28 >= 0x800 )
    {
      LODWORD(attackerEntNum) = 2048;
      LODWORD(v41) = v28;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v41, attackerEntNum) )
        __debugbreak();
    }
    v28 = (__int16)v28;
    if ( (unsigned int)(__int16)v28 >= 0x800 )
    {
      LODWORD(attackerEntNum) = 2048;
      LODWORD(v41) = v28;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v41, attackerEntNum) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v28].r.isInUse != g_entityIsInUse[v28] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v28] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 261, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( br->hitEnt ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( br->hitEnt ) )") )
      __debugbreak();
    GScr_AddEntity(attacker);
    GScr_Notify(br->hitEnt, scr_const.bullethit, 1u);
LABEL_64:
    EntityHitId = Trace_GetEntityHitId(&br->trace);
    client = attacker->client;
    if ( client && bp->weaponEntIndex != 2046 && (unsigned __int16)(EntityHitId - 2046) <= 1u )
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
          v32 = attacker->client;
          if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2184, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v32->ps.eFlags, ACTIVE, 0xBu) )
            goto LABEL_22;
        }
      }
    }
    HitEvent = BG_WeaponBulletFire_GetHitEvent(bp->methodOfDeath, 0);
    v20 = G_Utils_SpawnEventEntity(&br->hitPos, HitEvent);
    Instance = GWeaponMap::GetInstance();
    BG_SetWeaponForEntity(Instance, &v20->s, weapon);
    v20->s.eventParm = 0;
    G_SetAngle(v20, normal, 1, 1);
    this->ImpactEffectSetFlags(this, v20, impactEffectFlags);
    v20->s.surfType = (br->trace.surfaceFlags >> 19) & 0x3F;
    v20->s.lerp.u.anonymous.data[7] = br->trace.partName;
    v20->s.lerp.u.anonymous.data[0] = LODWORD(bp->start.v[0]);
    v20->s.lerp.u.turret.gunAngles.v[1] = bp->start.v[1];
    v20->s.lerp.u.turret.gunAngles.v[2] = bp->start.v[2];
    v20->s.otherEntityNum = bp->weaponEntIndex;
    v20->s.groundEntityNum = Trace_GetEntityHitId(&br->trace);
    if ( v20->s.otherEntityNum != bp->weaponEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 294, ASSERT_TYPE_ASSERT, "( hitEffectEnt->s.otherEntityNum == bp->weaponEntIndex )", (const char *)&queryFormat, "hitEffectEnt->s.otherEntityNum == bp->weaponEntIndex") )
      __debugbreak();
    if ( bp->weaponEntIndex == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 295, ASSERT_TYPE_ASSERT, "(bp->weaponEntIndex != ENTITYNUM_NONE)", "%s\n\tBullet hit event created with invalid attacker.", "bp->weaponEntIndex != ENTITYNUM_NONE") )
      __debugbreak();
    v20->s.lerp.u.anonymous.data[6] = GBullet::CalculateHitImpactSoundDelay(this, attacker, br->hitEnt);
    v35 = br->hitEnt;
    if ( v35 )
    {
      if ( v35->sentient )
      {
        groundEntityNum = v35->s.groundEntityNum;
        if ( (unsigned __int16)groundEntityNum < 0x7FEu )
          v35 = &g_entities[groundEntityNum];
      }
      if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
        __debugbreak();
      if ( GMovingPlatforms::ms_instance->ShouldHandleAsMovingPlatformThatIsActuallyMoving(GMovingPlatforms::ms_instance, v35) )
      {
        v37 = br->hitEnt;
        randSeeda.v[0] = v20->r.currentOrigin.v[0] - v37->r.currentOrigin.v[0];
        randSeeda.v[1] = v20->r.currentOrigin.v[1] - v37->r.currentOrigin.v[1];
        randSeeda.v[2] = v20->r.currentOrigin.v[2] - v37->r.currentOrigin.v[2];
        AnglesToAxis(&v37->r.currentAngles, &axis);
        MatrixTransposeTransformVector(&randSeeda, &axis, &out);
        if ( v20 == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
          __debugbreak();
        if ( v20->s.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
        {
          if ( ((LODWORD(out.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
            __debugbreak();
          v38 = LODWORD(out.v[0]) ^ ~s_trbase_aab_X;
          v39 = v38 ^ LODWORD(out.v[1]) ^ s_trbase_aab_Y;
          v40 = v39 ^ LODWORD(out.v[2]) ^ s_trbase_aab_Z;
          LODWORD(v20->s.lerp.pos.trBase.v[0]) = v38;
          LODWORD(v20->s.lerp.pos.trBase.v[1]) = v39;
          LODWORD(v20->s.lerp.pos.trBase.v[2]) = v40;
          memset(&randSeeda, 0, 8ui64);
        }
        else
        {
          v20->s.lerp.pos.trBase = out;
        }
        MatrixTransposeTransformVector(normal, &axis, &v20->s.lerp.apos.trBase);
        v20->s.lerp.u.player.extraAnimData.anonymous.data[1] |= 1u;
        v20->s.lerp.pos.trDelta.v[0] = v20->r.currentOrigin.v[0];
        v20->s.lerp.pos.trDelta.v[1] = v20->r.currentOrigin.v[1];
        v20->s.lerp.pos.trDelta.v[2] = v20->r.currentOrigin.v[2];
        v20->s.lerp.apos.trDelta = *normal;
        memset(&out, 0, sizeof(out));
      }
    }
    goto LABEL_106;
  }
  G_GameInterface_SPImpactEffectFlagsClient(hitEnt, bp, weapon, isAlternate, &impactEffectFlags);
  if ( br->trace.partGroup == 19 && !G_Weapon_PlayerIsUsingShield(br->hitEnt) )
  {
    GBullet::BroadcastSpecialHitEvent(this, &br->hitPos, normal, &bp->start, weapon, isAlternate, bp->weaponEntIndex, br->hitEnt, (hitLocation_t)br->trace.partGroup);
LABEL_22:
    Sys_ProfEndNamedEvent();
    return 0;
  }
  v15 = br->hitPos.v[0] - bp->start.v[0];
  v16 = br->hitPos.v[1] - bp->start.v[1];
  v17 = br->hitPos.v[2] - bp->start.v[2];
  if ( G_BulletSP_HitPlayerShield(br->hitEnt, attacker, &bp->start, &br->hitPos, COERCE_FLOAT(COERCE_UNSIGNED_INT(fsqrt((float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v17 * v17)) - bp->travelDistance) & _xmm) <= 0.001) )
  {
    GBullet::BroadcastShieldHitEventToVictim(v44, *(unsigned int **)randSeeda.v, &br->hitPos, normal, &bp->start, weapon, isAlternate, bp->weaponEntIndex, br->hitEnt->s.number);
    if ( CL_GetLocalClientActiveCount() > 1 )
      GBullet::BroadcastSpecialHitEvent(v44, &br->hitPos, normal, &bp->start, weapon, isAlternate, bp->weaponEntIndex, br->hitEnt, (hitLocation_t)br->trace.partGroup);
    goto LABEL_22;
  }
  ClientHitEvent = BG_WeaponBulletFire_GetClientHitEvent(bp->methodOfDeath, 0);
  v20 = G_Utils_SpawnEventEntity(&br->hitPos, ClientHitEvent);
  v44->ImpactEffectSetFlags(v44, v20, 0);
  v20->s.lerp.u.anonymous.data[0] = LODWORD(bp->start.v[0]);
  v20->s.lerp.u.anonymous.data[1] = LODWORD(bp->start.v[1]);
  v20->s.lerp.u.anonymous.data[2] = LODWORD(bp->start.v[2]);
  v21 = br->hitEnt;
  v20->s.lerp.u.actor.impactVector.v[0] = br->hitPos.v[0] - v21->r.currentOrigin.v[0];
  v20->s.lerp.u.actor.impactVector.v[1] = br->hitPos.v[1] - v21->r.currentOrigin.v[1];
  v20->s.lerp.u.actor.impactVector.v[2] = br->hitPos.v[2] - v21->r.currentOrigin.v[2];
  v22 = GWeaponMap::GetInstance();
  BG_SetWeaponForEntity(v22, &v20->s, weapon);
  v23 = v44;
  v44->ImpactEffectSetFlags(v44, v20, impactEffectFlags);
  v20->s.surfType = (br->trace.surfaceFlags >> 19) & 0x3F;
  weaponEntIndex_low = SLOWORD(bp->weaponEntIndex);
  v20->s.otherEntityNum = bp->weaponEntIndex;
  v20->s.groundEntityNum = br->hitEnt->s.number;
  if ( weaponEntIndex_low != bp->weaponEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 249, ASSERT_TYPE_ASSERT, "( hitEffectEnt->s.otherEntityNum == bp->weaponEntIndex )", (const char *)&queryFormat, "hitEffectEnt->s.otherEntityNum == bp->weaponEntIndex") )
    __debugbreak();
  v20->s.lerp.u.anonymous.data[6] = GBullet::CalculateHitImpactSoundDelay(v23, attacker, br->hitEnt);
LABEL_106:
  *v45 = v20;
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
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  gentity_s *v18; 
  entityType_s eType; 
  bool result; 
  gentity_s *hitEnt; 

  v11 = bulletStillActive;
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 382, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !bp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 383, ASSERT_TYPE_ASSERT, "( bp )", (const char *)&queryFormat, "bp") )
    __debugbreak();
  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 384, ASSERT_TYPE_ASSERT, "( br )", (const char *)&queryFormat, "br") )
    __debugbreak();
  if ( !br->hitEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 385, ASSERT_TYPE_ASSERT, "( br->hitEnt )", (const char *)&queryFormat, "br->hitEnt") )
    __debugbreak();
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 386, ASSERT_TYPE_ASSERT, "( bulletStillActive )", (const char *)&queryFormat, "bulletStillActive") )
    __debugbreak();
  v14 = br->hitPos.v[0] - bp->start.v[0];
  v15 = br->hitPos.v[1] - bp->start.v[1];
  v16 = br->hitPos.v[2] - bp->start.v[2];
  v17 = fsqrt((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16)) - bp->travelDistance;
  if ( br->trace.partGroup != 19 || (unsigned int)G_BulletSP_DamageRiotShield(br, &damage) && br->hitEnt->actor )
  {
    hitEnt = br->hitEnt;
    if ( hitEnt->client && G_BulletSP_HitPlayerShield(hitEnt, attacker, &bp->start, &br->hitPos, COERCE_FLOAT(LODWORD(v17) & _xmm) <= 0.001) && !(unsigned int)G_BulletSP_DamageRiotShield(br, &damage) )
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
    v18 = br->hitEnt;
    if ( v18->s.eType == ET_ACTOR )
    {
      GScr_Notify(br->hitEnt, scr_const.bullet_hitshield, 0);
      v18 = br->hitEnt;
    }
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    eType = v18->s.eType;
    if ( ((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM || !attacker->client || br->hitEnt->client )
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
  __int64 v9; 
  gclient_s *client; 
  int v11; 
  int v12; 
  gentity_s *v13; 
  __int64 v14; 

  v7 = victimEntNum;
  if ( !tempEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 621, ASSERT_TYPE_ASSERT, "( tempEnt )", (const char *)&queryFormat, "tempEnt") )
    __debugbreak();
  if ( (unsigned int)v7 >= 0x800 )
  {
    LODWORD(v14) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 622, ASSERT_TYPE_ASSERT, "(unsigned)( victimEntNum ) < (unsigned)( ( 2048 ) )", "victimEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, 2048) )
      __debugbreak();
  }
  v9 = v7;
  client = g_entities[v9].client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 625, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  v11 = BG_ShieldHitEncodeRandom(randSeed, client->shieldHealth <= 0);
  v12 = BG_ShieldHitEncodeHitMarker(startPos, hitPos);
  if ( (v12 & 0xFF0000FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 632, ASSERT_TYPE_ASSERT, "(( hitMarkerData & 0xFF0000FF ) == 0)", (const char *)&queryFormat, "( hitMarkerData & 0xFF0000FF ) == 0") )
    __debugbreak();
  tempEnt->s.eventParm = v11 | v12;
  tempEnt->s.groundEntityNum = client->ps.clientNum;
  v13 = g_entities;
  tempEnt->s.lerp.u.actor.impactVector.v[0] = hitPos->v[0] - g_entities[v9].r.currentOrigin.v[0];
  tempEnt->s.lerp.u.actor.impactVector.v[1] = hitPos->v[1] - v13[v9].r.currentOrigin.v[1];
  tempEnt->s.lerp.u.actor.impactVector.v[2] = hitPos->v[2] - v13[v9].r.currentOrigin.v[2];
}

/*
==============
GBulletSP::SpreadFireTargets
==============
*/
void GBulletSP::SpreadFireTargets(GBulletSP *this, gentity_s *attacker, int shotCount, float range, float spread, const BgWeaponParms *wp, const gentity_s *weaponEnt, int gameTime)
{
  float v10; 
  float v11; 
  int number; 
  __int128 v13; 
  __int128 v14; 
  float v18; 
  float v19; 
  float v20; 
  bool isAlternate; 
  const playerState_s *EntityPlayerStateConst; 
  GWeaponMap *Instance; 
  double ADSDamageRangeScale; 
  float v25; 
  float v26; 
  __int64 v27; 
  GTargetAssist_vtbl *v28; 
  int i; 
  gentity_s *v30; 
  float v31; 
  __int128 v32; 
  actor_s *actor; 
  __int64 v37; 
  GTargetAssist *v38; 
  AIActorInterface v39; 
  AIActorInterface *v40; 
  vec3_t damageDir; 
  BulletFireParams v42; 

  if ( !this->m_reduceSpreadShotCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 469, ASSERT_TYPE_ASSERT, "(m_reduceSpreadShotCount)", "%s\n\tMust be set or more bullets will fire than intended", "m_reduceSpreadShotCount") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 470, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  v10 = range * range;
  v11 = cosf_0(spread * 0.017453292);
  number = 2046;
  v13 = LODWORD(wp->forward.v[1]);
  v14 = v13;
  *(float *)&v14 = fsqrt((float)(*(float *)&v13 * *(float *)&v13) + (float)(wp->forward.v[0] * wp->forward.v[0]));
  _XMM3 = v14;
  __asm
  {
    vcmpless xmm1, xmm3, xmm9
    vblendvps xmm1, xmm3, xmm8, xmm1
  }
  v18 = v11;
  v19 = wp->forward.v[0] * (float)(1.0 / *(float *)&_XMM1);
  v20 = *(float *)&v13 * (float)(1.0 / *(float *)&_XMM1);
  if ( weaponEnt )
    number = weaponEnt->s.number;
  v42.weaponEntIndex = number;
  v42.ignoreHitEntCount = 0;
  BG_AddIgnoreEntToBP(&v42, number);
  isAlternate = wp->isAlternate;
  v42.damageMultiplier = FLOAT_1_0;
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(attacker);
  Instance = GWeaponMap::GetInstance();
  ADSDamageRangeScale = BG_GetADSDamageRangeScale(Instance, EntityPlayerStateConst, &wp->weapon, isAlternate);
  v42.rangeScale = *(float *)&ADSDamageRangeScale;
  v42.penetrationMultiplier = FLOAT_1_0;
  v42.chargedDamageMultiplier = FLOAT_1_0;
  v42.methodOfDeath = G_Bullet_GetMethodOfDeath(attacker, wp);
  v42.firstImpactOccurred = 0;
  if ( v42.methodOfDeath == MOD_EXPLOSIVE_BULLET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_bullet_sp.cpp", 491, ASSERT_TYPE_SANITY, "( bp.methodOfDeath != MOD_EXPLOSIVE_BULLET )", (const char *)&queryFormat, "bp.methodOfDeath != MOD_EXPLOSIVE_BULLET") )
    __debugbreak();
  v25 = wp->muzzleTrace.v[1];
  v42.start.v[0] = wp->muzzleTrace.v[0];
  v26 = wp->muzzleTrace.v[2];
  v42.start.v[1] = v25;
  v42.start.v[2] = v26;
  v42.travelDistance = 0.0;
  LOWORD(v37) = 2047;
  if ( !GTargetAssist::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 61, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  v27 = (unsigned __int16)attacker->s.number;
  v28 = GTargetAssist::ms_instance->__vftable;
  v38 = GTargetAssist::ms_instance;
  for ( i = ((__int64 (__fastcall *)(GTargetAssist *, __int64, __int64))v28->FindNextTarget)(GTargetAssist::ms_instance, 0xFFFFFFFFi64, v27); i != 0x7FFFFFFF; i = v38->FindNextTarget(v38, LOCAL_CLIENT_INVALID, attacker->s.number, i, gameTime, (__int16 *)&v37) )
  {
    v30 = &g_entities[(__int16)v37];
    if ( v30->sentient )
    {
      v31 = v30->r.currentOrigin.v[0] - wp->muzzleTrace.v[0];
      damageDir.v[0] = v31;
      v32 = LODWORD(v30->r.currentOrigin.v[1]);
      damageDir.v[1] = v30->r.currentOrigin.v[1] - wp->muzzleTrace.v[1];
      *(float *)&v32 = (float)(damageDir.v[1] * damageDir.v[1]) + (float)(damageDir.v[0] * damageDir.v[0]);
      damageDir.v[2] = v30->r.currentOrigin.v[2] - wp->muzzleTrace.v[2];
      if ( (float)((float)(damageDir.v[2] * damageDir.v[2]) + *(float *)&v32) <= v10 )
      {
        *(float *)&v32 = fsqrt(*(float *)&v32);
        _XMM1 = v32;
        __asm
        {
          vcmpless xmm0, xmm1, xmm9
          vblendvps xmm0, xmm1, xmm8, xmm0
        }
        damageDir.v[1] = damageDir.v[1] * (float)(1.0 / *(float *)&_XMM0);
        damageDir.v[0] = v31 * (float)(1.0 / *(float *)&_XMM0);
        if ( (float)((float)(damageDir.v[1] * v20) + (float)(damageDir.v[0] * v19)) >= v18 )
        {
          v42.end = v30->r.currentOrigin;
          v42.end.v[2] = v42.end.v[2] + v30->r.box.halfSize.v[2];
          if ( !v30->client || !G_BulletSP_HitPlayerShield(&g_entities[(__int16)v37], attacker, &wp->muzzleTrace, &v42.end, 1) )
          {
            actor = v30->actor;
            if ( !actor || (AIActorInterface::AIActorInterface(&v39), v40 = NULL, AIActorInterface::SetActor(&v39, actor), v40 = &v39, !AIScriptedInterface::DamageBlockedByShield(&v39, &damageDir)) )
            {
              if ( !PointInsideCone(&v42.start, &wp->forward, v18, range, &v42.end) || !(unsigned int)G_BulletSP_CheckSpreadFireAtPos(attacker, v30, &v42, wp, weaponEnt, HITLOC_TORSO_LWR) )
              {
                Sentient_GetEyePosition(v30->sentient, &v42.end);
                if ( PointInsideCone(&v42.start, &wp->forward, v18, range, &v42.end) )
                  G_BulletSP_CheckSpreadFireAtPos(attacker, v30, &v42, wp, weaponEnt, HITLOC_HEAD);
              }
            }
          }
        }
      }
    }
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

