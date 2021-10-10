/*
==============
AIScriptedInterface::ShootCustomWeapon
==============
*/

void __fastcall AIScriptedInterface::ShootCustomWeapon(AIScriptedInterface *this, const Weapon *r_weapon, const vec3_t *muzzlePos, const vec3_t *muzzleAngles, float accuracyMod, const vec3_t *posOverride, gentity_s *pTargetEntOverride, enumLastShot lastShot, bool bFireSoundOnce, unsigned int eventParam, bool bDontChangeTargetPosOnHit)
{
  ?ShootCustomWeapon@AIScriptedInterface@@QEBAXAEBUWeapon@@AEBTvec3_t@@1MPEBT3@PEAUgentity_s@@W4enumLastShot@@_NI5@Z(this, r_weapon, muzzlePos, muzzleAngles, accuracyMod, posOverride, pTargetEntOverride, lastShot, bFireSoundOnce, eventParam, bDontChangeTargetPosOnHit);
}

/*
==============
AIScriptedInterface::Melee
==============
*/

gentity_s *__fastcall AIScriptedInterface::Melee(AIScriptedInterface *this, const vec3_t *direction, int damageOverride, float range, float width, float height)
{
  return ?Melee@AIScriptedInterface@@QEBAPEAUgentity_s@@PEBTvec3_t@@HMMM@Z(this, direction, damageOverride, range, width, height);
}

/*
==============
AIScriptedInterface::AlreadyAttackedThisFrame
==============
*/

bool __fastcall AIScriptedInterface::AlreadyAttackedThisFrame(AIScriptedInterface *this)
{
  return ?AlreadyAttackedThisFrame@AIScriptedInterface@@IEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::ShouldDoClientOnlyBullet
==============
*/

bool __fastcall AIScriptedInterface::ShouldDoClientOnlyBullet(AIScriptedInterface *this, bool bCleanMiss)
{
  return ?ShouldDoClientOnlyBullet@AIScriptedInterface@@UEBA_N_N@Z(this, bCleanMiss);
}

/*
==============
AIScriptedInterface::ShootBlank
==============
*/

void __fastcall AIScriptedInterface::ShootBlank(AIScriptedInterface *this)
{
  ?ShootBlank@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::ShootEntity
==============
*/

void __fastcall AIScriptedInterface::ShootEntity(AIScriptedInterface *this, BgWeaponParms *wp, gentity_s *enemy)
{
  ?ShootEntity@AIScriptedInterface@@IEBAXPEAUBgWeaponParms@@PEAUgentity_s@@@Z(this, wp, enemy);
}

/*
==============
AIScriptedInterface::OnScrCmd_ShootStopSound
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_ShootStopSound(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_ShootStopSound@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::ClampShot
==============
*/

void __fastcall AIScriptedInterface::ClampShot(AIScriptedInterface *this, BgWeaponParms *wp)
{
  ?ClampShot@AIScriptedInterface@@IEBAXPEAUBgWeaponParms@@@Z(this, wp);
}

/*
==============
AIScriptedInterface::Shoot_StopSound
==============
*/

void __fastcall AIScriptedInterface::Shoot_StopSound(AIScriptedInterface *this)
{
  ?Shoot_StopSound@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetupShootStyleAdditive
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_SetupShootStyleAdditive(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_SetupShootStyleAdditive@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::ShootNoEnemy
==============
*/

void __fastcall AIScriptedInterface::ShootNoEnemy(AIScriptedInterface *this, BgWeaponParms *wp)
{
  ?ShootNoEnemy@AIScriptedInterface@@IEBAXPEAUBgWeaponParms@@@Z(this, wp);
}

/*
==============
AIScriptedInterface::OnScrCmd_ShootCustomWeapon
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_ShootCustomWeapon(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_ShootCustomWeapon@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::Shoot_Internal
==============
*/

void __fastcall AIScriptedInterface::Shoot_Internal(AIScriptedInterface *this, BgWeaponParms *wp, float accuracyMod, const vec3_t *posOverride, gentity_s *pTargetEntOverride, bool bIgnoreEnemy, enumLastShot lastShot, bool bFireSoundOnce, unsigned int eventParam, bool bDontChangeTargetPosOnHit)
{
  ?Shoot_Internal@AIScriptedInterface@@IEBAXUBgWeaponParms@@MPEBTvec3_t@@PEAUgentity_s@@_NW4enumLastShot@@3I3@Z(this, wp, accuracyMod, posOverride, pTargetEntOverride, bIgnoreEnemy, lastShot, bFireSoundOnce, eventParam, bDontChangeTargetPosOnHit);
}

/*
==============
AIScriptedInterface::OnScrCmd_MayShoot
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_MayShoot(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_MayShoot@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::SetShootStyleAdditive
==============
*/

void __fastcall AIScriptedInterface::SetShootStyleAdditive(AIScriptedInterface *this, int shootStyleIndex, int numShots)
{
  ?SetShootStyleAdditive@AIScriptedInterface@@QEBAXHH@Z(this, shootStyleIndex, numShots);
}

/*
==============
AIScriptedInterface::ClearShootStyleAdditive
==============
*/

void __fastcall AIScriptedInterface::ClearShootStyleAdditive(AIScriptedInterface *this)
{
  ?ClearShootStyleAdditive@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::OnScrCmd_Shoot
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_Shoot(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_Shoot@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::ShootPos
==============
*/

void __fastcall AIScriptedInterface::ShootPos(AIScriptedInterface *this, BgWeaponParms *wp, const vec3_t *pos)
{
  ?ShootPos@AIScriptedInterface@@IEBAXPEAUBgWeaponParms@@AEBTvec3_t@@@Z(this, wp, pos);
}

/*
==============
AIScriptedInterface::MayShoot
==============
*/

bool __fastcall AIScriptedInterface::MayShoot(AIScriptedInterface *this)
{
  return ?MayShoot@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::OnScrCmd_EnableMissedBulletClientOnly
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_EnableMissedBulletClientOnly(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_EnableMissedBulletClientOnly@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::Shoot
==============
*/

void __fastcall AIScriptedInterface::Shoot(AIScriptedInterface *this, float accuracyMod, const vec3_t *posOverride, gentity_s *pTargetEntOverride, bool bIgnoreEnemy, enumLastShot lastShot, bool bFireSoundOnce, bool bDontChangeTargetPosOnHit)
{
  ?Shoot@AIScriptedInterface@@QEBAXMPEBTvec3_t@@PEAUgentity_s@@_NW4enumLastShot@@22@Z(this, accuracyMod, posOverride, pTargetEntOverride, bIgnoreEnemy, lastShot, bFireSoundOnce, bDontChangeTargetPosOnHit);
}

/*
==============
AIScriptedInterface::AlreadyAttackedThisFrame
==============
*/
bool AIScriptedInterface::AlreadyAttackedThisFrame(AIScriptedInterface *this)
{
  return this->m_pAI->shoot.lastShotTime == level.time;
}

/*
==============
AIScriptedInterface::ClampShot
==============
*/
void AIScriptedInterface::ClampShot(AIScriptedInterface *this, BgWeaponParms *wp)
{
  __int128 v2; 
  vec3_t *p_gunForward; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  __int128 v11; 
  __int128 v12; 
  float v13; 
  float v14; 
  __int128 v15; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __int64 v24; 
  float v25; 
  vec3_t dir; 
  vec3_t dst; 
  _QWORD v28[3]; 

  p_gunForward = &wp->gunForward;
  if ( ((LODWORD(wp->gunForward.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(wp->gunForward.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(wp->gunForward.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 250, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp->gunForward )[0] ) && !IS_NAN( ( wp->gunForward )[1] ) && !IS_NAN( ( wp->gunForward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp->gunForward )[0] ) && !IS_NAN( ( wp->gunForward )[1] ) && !IS_NAN( ( wp->gunForward )[2] )") )
    __debugbreak();
  if ( ((LODWORD(wp->forward.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(wp->forward.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(wp->forward.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 251, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp->forward )[0] ) && !IS_NAN( ( wp->forward )[1] ) && !IS_NAN( ( wp->forward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp->forward )[0] ) && !IS_NAN( ( wp->forward )[1] ) && !IS_NAN( ( wp->forward )[2] )") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(p_gunForward->v[0] * p_gunForward->v[0]) + (float)(p_gunForward->v[1] * p_gunForward->v[1])) + (float)(p_gunForward->v[2] * p_gunForward->v[2])) - 1.0) & _xmm) >= 0.0099999998 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 252, ASSERT_TYPE_ASSERT, "(I_fabs( Vec3Dot( wp->gunForward, wp->gunForward ) - 1.f ) < 0.01f)", (const char *)&queryFormat, "I_fabs( Vec3Dot( wp->gunForward, wp->gunForward ) - 1.f ) < 0.01f") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(wp->forward.v[1] * wp->forward.v[1]) + (float)(wp->forward.v[0] * wp->forward.v[0])) + (float)(wp->forward.v[2] * wp->forward.v[2])) - 1.0) & _xmm) >= 0.0099999998 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 253, ASSERT_TYPE_ASSERT, "(I_fabs( Vec3Dot( wp->forward, wp->forward ) - 1.f ) < 0.01f)", (const char *)&queryFormat, "I_fabs( Vec3Dot( wp->forward, wp->forward ) - 1.f ) < 0.01f") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(p_gunForward->v[1] * wp->forward.v[1]) + (float)(wp->forward.v[0] * p_gunForward->v[0])) + (float)(p_gunForward->v[2] * wp->forward.v[2])) & _xmm) < 0.96591997 )
  {
    *(_OWORD *)&v28[1] = v2;
    if ( p_gunForward == &dir && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
      __debugbreak();
    if ( wp == (BgWeaponParms *)&dir && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
      __debugbreak();
    v5 = wp->forward.v[2];
    v6 = p_gunForward->v[2];
    v7 = p_gunForward->v[1];
    v8 = wp->forward.v[1];
    v9 = v8 * p_gunForward->v[0];
    v10 = (float)(v5 * v7) - (float)(v8 * v6);
    v12 = LODWORD(v6);
    *(float *)&v12 = (float)(v6 * wp->forward.v[0]) - (float)(v5 * p_gunForward->v[0]);
    v11 = v12;
    v13 = v7 * wp->forward.v[0];
    v25 = v10;
    v14 = v9 - v13;
    dir.v[0] = v10;
    dir.v[1] = *(float *)&v12;
    dir.v[2] = v9 - v13;
    if ( (LODWORD(v10) & 0x7F800000) == 2139095040 || (v25 = *(float *)&v12, (v12 & 0x7F800000) == 2139095040) || (v25 = v9 - v13, (COERCE_UNSIGNED_INT(v9 - v13) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 264, ASSERT_TYPE_SANITY, "( !IS_NAN( ( planeNormal )[0] ) && !IS_NAN( ( planeNormal )[1] ) && !IS_NAN( ( planeNormal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( planeNormal )[0] ) && !IS_NAN( ( planeNormal )[1] ) && !IS_NAN( ( planeNormal )[2] )", v25) )
        __debugbreak();
      v10 = dir.v[0];
      v11 = LODWORD(dir.v[1]);
      v14 = dir.v[2];
    }
    v15 = v11;
    *(float *)&v15 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(v10 * v10)) + (float)(v14 * v14));
    _XMM3 = v15;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm9, xmm0
    }
    v19 = 1.0 / *(float *)&_XMM0;
    v20 = v10 * (float)(1.0 / *(float *)&_XMM0);
    *(float *)&v24 = v20;
    v21 = *(float *)&v11 * (float)(1.0 / *(float *)&_XMM0);
    v22 = v14 * v19;
    dir.v[0] = v20;
    dir.v[1] = v21;
    dir.v[2] = v14 * v19;
    if ( (LODWORD(v20) & 0x7F800000) == 2139095040 || (*(float *)&v24 = v21, (LODWORD(v21) & 0x7F800000) == 2139095040) || (*(float *)&v24 = v14 * v19, (COERCE_UNSIGNED_INT(v14 * v19) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 268, ASSERT_TYPE_SANITY, "( !IS_NAN( ( planeNormal )[0] ) && !IS_NAN( ( planeNormal )[1] ) && !IS_NAN( ( planeNormal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( planeNormal )[0] ) && !IS_NAN( ( planeNormal )[1] ) && !IS_NAN( ( planeNormal )[2] )", v24) )
        __debugbreak();
      v20 = dir.v[0];
      v21 = dir.v[1];
      v22 = dir.v[2];
    }
    if ( v20 == 0.0 && v21 == 0.0 && v22 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 269, ASSERT_TYPE_ASSERT, "(planeNormal[ 0 ] || planeNormal[ 1 ] || planeNormal[ 2 ])", (const char *)&queryFormat, "planeNormal[ 0 ] || planeNormal[ 1 ] || planeNormal[ 2 ]") )
      __debugbreak();
    RotatePointAroundVector(&dst, &dir, p_gunForward, 15.0);
    v23 = dst.v[1];
    wp->forward.v[0] = dst.v[0];
    wp->forward.v[2] = dst.v[2];
    wp->forward.v[1] = v23;
  }
}

/*
==============
AIScriptedInterface::ClearShootStyleAdditive
==============
*/
void AIScriptedInterface::ClearShootStyleAdditive(AIScriptedInterface *this)
{
  this->m_pAI->animData.shootStyleIndex = 0;
  this->m_pAI->animData.numShots = 0;
}

/*
==============
DebugPrint_NotShooting
==============
*/
void DebugPrint_NotShooting(const ai_scripted_t *pScripted, const char *s)
{
  const dvar_t *v2; 
  gentity_s *ent; 
  vec3_t xyz; 

  v2 = DVARBOOL_ai_whyaminotshooting;
  if ( !DVARBOOL_ai_whyaminotshooting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_whyaminotshooting") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    ent = pScripted->ent;
    *(_QWORD *)xyz.v = *(_QWORD *)pScripted->ent->r.currentOrigin.v;
    xyz.v[2] = ent->r.currentOrigin.v[2] - 12.0;
    G_Main_AddDebugString(&xyz, &colorRed, 0.60000002, s);
  }
}

/*
==============
AIScriptedInterface::MayShoot
==============
*/
bool AIScriptedInterface::MayShoot(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  gentity_s *TargetEntity; 
  const gentity_s *v4; 
  __int64 (__fastcall ***v5)(_QWORD); 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  ai_scripted_t *v8; 
  AIActorInterface v10; 
  AIAgentInterface v11; 
  __int64 (__fastcall ***v12)(_QWORD); 

  m_pAI = this->m_pAI;
  if ( m_pAI->bDontEverShoot )
  {
    DebugPrint_NotShooting(m_pAI, ".dontevershoot");
    LOBYTE(TargetEntity) = 0;
    return (char)TargetEntity;
  }
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  v4 = TargetEntity;
  if ( !TargetEntity )
    return (char)TargetEntity;
  AIActorInterface::AIActorInterface(&v10);
  AIAgentInterface::AIAgentInterface(&v11);
  v5 = NULL;
  v11.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v12 = NULL;
  if ( v4->agent )
  {
    if ( SV_Agent_IsScripted(v4->s.number) )
    {
      ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v4);
      if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
        __debugbreak();
      if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
        __debugbreak();
      AINewAgentInterface::SetAgent((AINewAgentInterface *)&v11, ScriptedAgentInfo);
      v5 = (__int64 (__fastcall ***)(_QWORD))&v11;
      v12 = (__int64 (__fastcall ***)(_QWORD))&v11;
      goto LABEL_20;
    }
    v5 = v12;
  }
  actor = v4->actor;
  if ( actor )
  {
    if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
      __debugbreak();
    AIActorInterface::SetActor(&v10, v4->actor);
    v5 = (__int64 (__fastcall ***)(_QWORD))&v10;
    v12 = (__int64 (__fastcall ***)(_QWORD))&v10;
LABEL_20:
    if ( *(_BYTE *)((**v5)(v5) + 1746) )
    {
      DebugPrint_NotShooting(this->m_pAI, "enemy.dontattackme");
      LOBYTE(TargetEntity) = 0;
      return (char)TargetEntity;
    }
    goto LABEL_22;
  }
  if ( v5 )
    goto LABEL_20;
LABEL_22:
  v8 = this->m_pAI;
  if ( v8->weaponInfo.bulletsInClip )
  {
    if ( this->GetEquippedWeapon(this)->weaponIdx )
    {
      LOBYTE(TargetEntity) = 1;
    }
    else
    {
      DebugPrint_NotShooting(this->m_pAI, "no weapon");
      LOBYTE(TargetEntity) = 0;
    }
  }
  else
  {
    DebugPrint_NotShooting(v8, "no ammo");
    LOBYTE(TargetEntity) = 0;
  }
  return (char)TargetEntity;
}

/*
==============
AIScriptedInterface::Melee
==============
*/
gentity_s *AIScriptedInterface::Melee(AIScriptedInterface *this, const vec3_t *direction, int damageOverride, float range, float width, float height)
{
  unsigned __int16 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  gentity_s *ent; 
  ai_scripted_t *m_pAI; 
  const sentient_s *TargetSentient; 
  __int128 v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  __int128 v23; 
  __int128 v24; 
  float v28; 
  float v29; 
  float v30; 
  __int128 v31; 
  float v32; 
  __int128 v33; 
  float v37; 
  GWeaponMap *Instance; 
  ai_scripted_t *v39; 
  gentity_s *v40; 
  int v41; 
  ai_scripted_t *v42; 
  int *outHitEntDamage; 
  __int16 v44[2]; 
  damageReturnCode_t outDamageReturnCode; 
  int v46; 
  GMeleeFireParms wp; 
  vec3_t vEyePosOut; 
  Weapon r_weapon; 
  __int128 v50; 
  _OWORD v51[3]; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 347, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 354, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  ent = this->m_pAI->ent;
  r_weapon = *this->GetEquippedWeapon(this);
  m_pAI = this->m_pAI;
  if ( m_pAI->shoot.lastShotTime == level.time )
    return 0i64;
  m_pAI->shoot.lastShotTime = level.time;
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  memset_0(&wp, 0, sizeof(wp));
  wp.meleeRange = range;
  AIScriptedInterface::FillWeaponParms(this, &wp.wp);
  wp.wp.weapon = r_weapon;
  wp.wp.isAlternate = 0;
  if ( v6 > bg_lastParsedWeaponIndex )
  {
    LODWORD(outHitEntDamage) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", outHitEntDamage, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  if ( !bg_weaponDefs[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  wp.wp.weapDef = bg_weaponDefs[v6];
  this->GetEyePosition(this, &wp.wp.muzzleTrace);
  if ( TargetSentient )
  {
    v51[1] = v7;
    v51[0] = v8;
    v50 = v9;
    Sentient_GetEyePosition(TargetSentient, &vEyePosOut);
    v18 = LODWORD(vEyePosOut.v[0]);
    *(float *)&v18 = vEyePosOut.v[0] - wp.wp.muzzleTrace.v[0];
    v17 = v18;
    v19 = vEyePosOut.v[2] - wp.wp.muzzleTrace.v[2];
    v20 = vEyePosOut.v[1] - wp.wp.muzzleTrace.v[1];
    if ( direction )
    {
      v21 = direction->v[1];
      v22 = (float)(1.0 / fsqrt((float)(direction->v[0] * direction->v[0]) + (float)(v21 * v21))) * fsqrt((float)((float)(vEyePosOut.v[1] - wp.wp.muzzleTrace.v[1]) * (float)(vEyePosOut.v[1] - wp.wp.muzzleTrace.v[1])) + (float)(*(float *)&v18 * *(float *)&v18));
      v23 = LODWORD(direction->v[0]);
      *(float *)&v23 = direction->v[0] * v22;
      v17 = v23;
      v20 = v21 * v22;
    }
    v24 = v17;
    *(float *)&v24 = fsqrt((float)((float)(*(float *)&v17 * *(float *)&v17) + (float)(v20 * v20)) + (float)(v19 * v19));
    _XMM3 = v24;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
    }
    v28 = 1.0 / *(float *)&_XMM0;
    wp.wp.forward.v[0] = *(float *)&v17 * (float)(1.0 / *(float *)&_XMM0);
    v29 = v19 * (float)(1.0 / *(float *)&_XMM0);
    v30 = v20 * v28;
  }
  else
  {
    if ( !direction )
      goto LABEL_22;
    v31 = LODWORD(direction->v[1]);
    v32 = direction->v[2];
    v33 = v31;
    *(float *)&v33 = fsqrt((float)((float)(*(float *)&v31 * *(float *)&v31) + (float)(direction->v[0] * direction->v[0])) + (float)(v32 * v32));
    _XMM3 = v33;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    v37 = 1.0 / *(float *)&_XMM0;
    wp.wp.forward.v[0] = direction->v[0] * (float)(1.0 / *(float *)&_XMM0);
    v29 = v32 * (float)(1.0 / *(float *)&_XMM0);
    v30 = *(float *)&v31 * v37;
  }
  wp.wp.forward.v[2] = v29;
  wp.wp.forward.v[1] = v30;
LABEL_22:
  Instance = GWeaponMap::GetInstance();
  BG_SetWeaponForEntity(Instance, &ent->s, &r_weapon);
  v39 = this->m_pAI;
  outDamageReturnCode = DAMAGE_RETURNCODE_INVALID;
  v40 = G_Weapon_Melee(v39->ent, &wp, width, height, level.time, &v46, &outDamageReturnCode);
  if ( outDamageReturnCode == DAMAGE_RETURNCODE_DEFERRED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 402, ASSERT_TYPE_ASSERT, "( damageRetCode != DAMAGE_RETURNCODE_DEFERRED )", "AIScriptedInterface::Melee damage should not be deferred.") )
    __debugbreak();
  if ( v40 )
  {
    if ( damageOverride > v46 )
    {
      v41 = damageOverride - v46;
      if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
        __debugbreak();
      v42 = this->m_pAI;
      v44[0] = 0;
      GCombat::ms_gCombatSystem->Damage(GCombat::ms_gCombatSystem, v40, v42->ent, v42->ent, (const vec3_t *)&wp, &wp.wp.muzzleTrace, v41, 0, 8, &r_weapon, 0, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, (const GExtraDamageParams *)v44);
    }
    if ( G_Utils_IsClientOrActorOrAgent(v40) )
      G_Combat_SendMeleeCharacterImpactEvent(v40, v40, this->m_pAI->ent, &r_weapon, 0, &wp.wp.muzzleTrace, MOD_MELEE);
  }
  return v40;
}

/*
==============
AIScriptedInterface::OnScrCmd_EnableMissedBulletClientOnly
==============
*/
void AIScriptedInterface::OnScrCmd_EnableMissedBulletClientOnly(AIScriptedInterface *this, scrContext_t *scrContext)
{
  this->m_pAI->enableMissedBulletClientOnly = Scr_GetInt(scrContext, 0) != 0;
}

/*
==============
AIScriptedInterface::OnScrCmd_MayShoot
==============
*/
void AIScriptedInterface::OnScrCmd_MayShoot(AIScriptedInterface *this, scrContext_t *scrContext)
{
  bool MayShoot; 

  MayShoot = AIScriptedInterface::MayShoot(this);
  Scr_AddBool(scrContext, MayShoot);
}

/*
==============
AIScriptedInterface::OnScrCmd_SetupShootStyleAdditive
==============
*/
void AIScriptedInterface::OnScrCmd_SetupShootStyleAdditive(AIScriptedInterface *this, scrContext_t *scrContext)
{
  unsigned int Int; 
  int v5; 
  unsigned __int8 v6; 
  const char *v7; 
  ComErrorCode v8; 

  Int = Scr_GetInt(scrContext, 0);
  v5 = Scr_GetInt(scrContext, 1u);
  v6 = v5;
  if ( !Int )
  {
    if ( v5 <= 0 )
      goto LABEL_3;
LABEL_12:
    v7 = j_va("OnScrCmd_SetupShootStyleAdditive(): shotStyle %d is incompatible with numShots %d.", Int, (unsigned int)v5);
    v8 = COM_ERR_5732;
LABEL_14:
    Scr_Error(v8, scrContext, v7);
    return;
  }
  if ( Int == 2 )
  {
    if ( v5 != 1 )
      goto LABEL_12;
  }
  else if ( Int - 3 <= 1 && v5 <= 1 )
  {
    goto LABEL_12;
  }
LABEL_3:
  if ( (unsigned int)v5 > 7 )
  {
    v7 = j_va("OnScrCmd_SetupShootStyleAdditive(): numShots %d out of range (0-7).", (unsigned int)v5);
    v8 = COM_ERR_5733;
    goto LABEL_14;
  }
  if ( Int - 3 <= 1 )
    v6 = v5 - 1;
  this->m_pAI->animData.shootStyleIndex = Int;
  this->m_pAI->animData.numShots = v6;
}

/*
==============
AIScriptedInterface::OnScrCmd_Shoot
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_Shoot(AIScriptedInterface *this, scrContext_t *scrContext, double a3)
{
  bool v5; 
  bool v6; 
  float v7; 
  vec3_t *p_vectorValue; 
  gentity_s *Entity; 
  unsigned int NumParam; 
  bool v11; 
  double Float; 
  ai_scripted_t *m_pAI; 
  const Weapon *v14; 
  __m256i v15; 
  __int128 v16; 
  double v17; 
  BgWeaponParms v18; 
  BgWeaponParms wp; 
  vec3_t vectorValue; 

  v5 = 0;
  v6 = 0;
  v7 = FLOAT_1_0;
  p_vectorValue = NULL;
  Entity = NULL;
  NumParam = Scr_GetNumParam(scrContext);
  v11 = 1;
  if ( NumParam )
  {
    Float = Scr_GetFloat(scrContext, 0);
    v7 = *(float *)&Float;
    if ( *(float *)&Float < 0.0 )
      Scr_ParamError(COM_ERR_3834, scrContext, 0, "accuracy mod must be nonnegative");
  }
  if ( NumParam >= 2 && Scr_GetType(scrContext, 1u) )
  {
    if ( Scr_GetType(scrContext, 1u) == VAR_VECTOR )
    {
      Scr_GetVector(scrContext, 1u, &vectorValue);
      p_vectorValue = &vectorValue;
    }
    else
    {
      Entity = GScr_GetEntity(1u);
    }
  }
  if ( NumParam >= 3 )
    v11 = Scr_GetInt(scrContext, 2u) != 0;
  if ( NumParam >= 4 )
    v5 = Scr_GetInt(scrContext, 3u) != 0;
  if ( NumParam >= 5 )
    v6 = Scr_GetInt(scrContext, 4u) != 0;
  Profile_Begin(281);
  m_pAI = this->m_pAI;
  if ( m_pAI->shoot.lastShotTime == level.time )
  {
    Profile_EndInternal(NULL);
  }
  else
  {
    m_pAI->shoot.lastShotTime = level.time;
    v14 = this->GetEquippedWeapon(this);
    v15 = *(__m256i *)&v14->weaponIdx;
    v16 = *(_OWORD *)&v14->attachmentVariationIndices[5];
    v17 = *(double *)&v14->attachmentVariationIndices[21];
    *(_DWORD *)&wp.weapon.weaponCamo = *(_DWORD *)&v14->weaponCamo;
    wp.isAlternate = 0;
    *(__m256i *)&wp.weapon.weaponIdx = v15;
    *(_OWORD *)&wp.weapon.attachmentVariationIndices[5] = v16;
    *(double *)&wp.weapon.attachmentVariationIndices[21] = v17;
    if ( LOWORD(a3) > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", LOWORD(a3), bg_lastParsedWeaponIndex) )
      __debugbreak();
    if ( !bg_weaponDefs[LOWORD(a3)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    wp.weapDef = bg_weaponDefs[LOWORD(a3)];
    AIScriptedInterface::FillWeaponParms(this, &wp);
    Profile_EndInternal(NULL);
    v18 = wp;
    AIScriptedInterface::Shoot_Internal(this, &v18, v7, p_vectorValue, Entity, v5, NOT_LAST_SHOT_IN_CLIP, v11, 0, v6);
  }
}

/*
==============
AIScriptedInterface::OnScrCmd_ShootCustomWeapon
==============
*/
void AIScriptedInterface::OnScrCmd_ShootCustomWeapon(AIScriptedInterface *this, scrContext_t *scrContext)
{
  AIScriptedInterface_vtbl *v2; 
  unsigned int eventParam; 
  float v4; 
  AIScriptedInterface *v6; 
  enumLastShot lastShot; 
  bool bDontChangeTargetPosOnHit; 
  const gentity_s *v9; 
  unsigned int v10; 
  unsigned int NumParam; 
  double Float; 
  scr_string_t ConstString; 
  const DObj *ServerDObjForEnt; 
  const char *WeaponBaseName; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  unsigned int v19; 
  unsigned __int8 inOutIndex; 
  bool bFireSoundOnce; 
  bool outIsAlternate; 
  int modelIndex; 
  AIScriptedInterface *v24; 
  gentity_s *pTargetEntOverride; 
  vec3_t *posOverride; 
  vec3_t v27; 
  vec3_t muzzleAngles; 
  vec3_t vectorValue; 
  Weapon outWeapon; 

  v2 = this->__vftable;
  eventParam = 0;
  v4 = FLOAT_1_0;
  v24 = this;
  v6 = this;
  bFireSoundOnce = 1;
  lastShot = NOT_LAST_SHOT_IN_CLIP;
  posOverride = NULL;
  bDontChangeTargetPosOnHit = 0;
  pTargetEntOverride = NULL;
  v9 = v2->GetEntity(this);
  GScr_Main_GetWeaponParam(scrContext, 0, &outWeapon, &outIsAlternate);
  Scr_GetVector(scrContext, 1u, &vectorValue);
  v10 = 3;
  Scr_GetVector(scrContext, 2u, &muzzleAngles);
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam <= 3 )
  {
LABEL_17:
    if ( NumParam > v10 )
    {
      if ( Scr_GetType(scrContext, v10) )
      {
        ConstString = Scr_GetConstString(scrContext, v10);
        ServerDObjForEnt = Com_GetServerDObjForEnt(v9);
        if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 648, ASSERT_TYPE_ASSERT, "( pDobj )", (const char *)&queryFormat, "pDobj") )
          __debugbreak();
        inOutIndex = -2;
        if ( DObjGetBoneIndexInternal_8(ServerDObjForEnt, ConstString, &inOutIndex, &modelIndex) )
        {
          do
          {
            modelIndex = eventParam;
            if ( BG_Weapon_GetPrimaryAttachmentIndex(&outWeapon, (const AttachmentSlot *)&modelIndex) )
            {
              WeaponBaseName = BG_GetWeaponBaseName(&outWeapon, 0);
              v16 = j_va("ShootCustomWeapon: Sorry, tagflash override does not work properly with weapon (%s) with attachments/etc.", WeaponBaseName);
              Scr_Error(COM_ERR_3836, scrContext, v16);
            }
            ++eventParam;
          }
          while ( eventParam < 0xD );
          if ( outWeapon.scopeVariation || outWeapon.weaponOthers )
          {
            v17 = BG_GetWeaponBaseName(&outWeapon, 0);
            v18 = j_va("ShootCustomWeapon: Sorry, tagflash override does not work properly with weapon (%s) with attachments/etc.", v17);
            Scr_Error(COM_ERR_6102, scrContext, v18);
          }
          eventParam = BG_CreateWeaponFireParam(inOutIndex, &outWeapon);
        }
        v6 = v24;
      }
      v19 = v10 + 1;
      if ( NumParam > v19 && Scr_GetType(scrContext, v19) )
        bDontChangeTargetPosOnHit = Scr_GetInt(scrContext, v19) != 0;
    }
    goto LABEL_34;
  }
  Float = Scr_GetFloat(scrContext, 3u);
  v4 = *(float *)&Float;
  if ( *(float *)&Float < 0.0 )
    Scr_ParamError(COM_ERR_3835, scrContext, 3u, "accuracy mod must be nonnegative");
  if ( NumParam > 4 )
  {
    if ( Scr_GetType(scrContext, 4u) )
    {
      if ( Scr_GetType(scrContext, 4u) == VAR_VECTOR )
      {
        Scr_GetVector(scrContext, 4u, &v27);
        posOverride = &v27;
      }
      else
      {
        pTargetEntOverride = GScr_GetEntity(4u);
      }
    }
    if ( NumParam > 5 )
    {
      if ( Scr_GetType(scrContext, 5u) )
        bFireSoundOnce = Scr_GetInt(scrContext, 5u) != 0;
      if ( NumParam > 6 )
      {
        if ( Scr_GetType(scrContext, 6u) && Scr_GetInt(scrContext, 6u) )
          lastShot = LAST_SHOT_IN_CLIP;
        v10 = 7;
        goto LABEL_17;
      }
    }
  }
LABEL_34:
  AIScriptedInterface::ShootCustomWeapon(v6, &outWeapon, &vectorValue, &muzzleAngles, v4, posOverride, pTargetEntOverride, lastShot, bFireSoundOnce, eventParam, bDontChangeTargetPosOnHit);
}

/*
==============
AIScriptedInterface::OnScrCmd_ShootStopSound
==============
*/
void AIScriptedInterface::OnScrCmd_ShootStopSound(AIScriptedInterface *this, scrContext_t *scrContext)
{
  G_Utils_AddEvent(this->m_pAI->ent, 0x26u, 0);
}

/*
==============
AIScriptedInterface::SetShootStyleAdditive
==============
*/
void AIScriptedInterface::SetShootStyleAdditive(AIScriptedInterface *this, int shootStyleIndex, int numShots)
{
  this->m_pAI->animData.shootStyleIndex = shootStyleIndex;
  this->m_pAI->animData.numShots = numShots;
}

/*
==============
AIScriptedInterface::Shoot
==============
*/
void AIScriptedInterface::Shoot(AIScriptedInterface *this, float accuracyMod, const vec3_t *posOverride, gentity_s *pTargetEntOverride, bool bIgnoreEnemy, enumLastShot lastShot, bool bFireSoundOnce, bool bDontChangeTargetPosOnHit)
{
  unsigned __int16 v8; 
  ai_scripted_t *m_pAI; 
  const Weapon *v14; 
  __m256i v15; 
  __int128 v16; 
  double v17; 
  BgWeaponParms v18; 
  BgWeaponParms wp; 

  Profile_Begin(281);
  m_pAI = this->m_pAI;
  if ( m_pAI->shoot.lastShotTime == level.time )
  {
    Profile_EndInternal(NULL);
  }
  else
  {
    m_pAI->shoot.lastShotTime = level.time;
    v14 = this->GetEquippedWeapon(this);
    v15 = *(__m256i *)&v14->weaponIdx;
    v16 = *(_OWORD *)&v14->attachmentVariationIndices[5];
    v17 = *(double *)&v14->attachmentVariationIndices[21];
    *(_DWORD *)&wp.weapon.weaponCamo = *(_DWORD *)&v14->weaponCamo;
    wp.isAlternate = 0;
    *(__m256i *)&wp.weapon.weaponIdx = v15;
    *(_OWORD *)&wp.weapon.attachmentVariationIndices[5] = v16;
    *(double *)&wp.weapon.attachmentVariationIndices[21] = v17;
    if ( v8 > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v8, bg_lastParsedWeaponIndex) )
      __debugbreak();
    if ( !bg_weaponDefs[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    wp.weapDef = bg_weaponDefs[v8];
    AIScriptedInterface::FillWeaponParms(this, &wp);
    Profile_EndInternal(NULL);
    v18 = wp;
    AIScriptedInterface::Shoot_Internal(this, &v18, accuracyMod, posOverride, pTargetEntOverride, bIgnoreEnemy, lastShot, bFireSoundOnce, 0, bDontChangeTargetPosOnHit);
  }
}

/*
==============
AIScriptedInterface::ShootBlank
==============
*/

void __fastcall AIScriptedInterface::ShootBlank(AIScriptedInterface *this, __int64 a2, double a3)
{
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v5; 
  entityState_t *p_s; 
  GWeaponMap *Instance; 
  __int64 v8; 
  BgWeaponParms wp; 
  Weapon r_weapon; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 100, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 101, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->shoot.lastShotTime != level.time )
  {
    m_pAI->shoot.lastShotTime = level.time;
    r_weapon = *this->GetEquippedWeapon(this);
    wp.weapon = r_weapon;
    wp.isAlternate = 0;
    if ( LOWORD(a3) > bg_lastParsedWeaponIndex )
    {
      LODWORD(v8) = LOWORD(a3);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v8, bg_lastParsedWeaponIndex) )
        __debugbreak();
    }
    if ( !bg_weaponDefs[LOWORD(a3)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    wp.weapDef = bg_weaponDefs[LOWORD(a3)];
    AIScriptedInterface::FillWeaponParms(this, &wp);
    v5 = this->m_pAI;
    wp.forward = wp.gunForward;
    p_s = &v5->ent->s;
    Instance = GWeaponMap::GetInstance();
    BG_SetWeaponForEntity(Instance, p_s, &r_weapon);
    if ( BG_GetWeaponType(&wp.weapon, wp.isAlternate) != WEAPTYPE_BULLET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 122, ASSERT_TYPE_ASSERT, "(BG_GetWeaponType( wp.weapon, wp.isAlternate ) == WEAPTYPE_BULLET)", (const char *)&queryFormat, "BG_GetWeaponType( wp.weapon, wp.isAlternate ) == WEAPTYPE_BULLET") )
      __debugbreak();
    G_Utils_AddEvent(this->m_pAI->ent, 0x28u, 0);
  }
}

/*
==============
AIScriptedInterface::ShootCustomWeapon
==============
*/
void AIScriptedInterface::ShootCustomWeapon(AIScriptedInterface *this, const Weapon *r_weapon, const vec3_t *muzzlePos, const vec3_t *muzzleAngles, float accuracyMod, const vec3_t *posOverride, gentity_s *pTargetEntOverride, enumLastShot lastShot, bool bFireSoundOnce, unsigned int eventParam, bool bDontChangeTargetPosOnHit)
{
  __int128 v11; 
  ai_scripted_t *m_pAI; 
  __int128 v17; 
  int v18; 
  double v19; 
  float v20; 
  float v21; 
  float v22; 
  int v23; 
  float v24; 
  float v25; 
  float v26; 
  BgWeaponParms v27; 
  __m256i v28; 
  __m256i v29; 
  _BYTE v30[64]; 
  double v31; 
  tmat33_t<vec3_t> axis; 
  __int128 v33; 

  Profile_Begin(281);
  m_pAI = this->m_pAI;
  if ( m_pAI->shoot.lastShotTime == level.time )
  {
    Profile_EndInternal(NULL);
  }
  else
  {
    m_pAI->shoot.lastShotTime = level.time;
    v17 = *(_OWORD *)&r_weapon->attachmentVariationIndices[5];
    v18 = *(_DWORD *)&r_weapon->weaponCamo;
    *(__m256i *)&v30[8] = *(__m256i *)&r_weapon->weaponIdx;
    v19 = *(double *)&r_weapon->attachmentVariationIndices[21];
    v33 = v11;
    *(double *)&v30[56] = v19;
    *(_OWORD *)&v30[40] = v17;
    LODWORD(v31) = v18;
    BYTE4(v31) = 0;
    *(_QWORD *)v30 = BG_WeaponDef(r_weapon, 0);
    AnglesToAxis(muzzleAngles, &axis);
    v20 = axis.m[0].v[0];
    v21 = axis.m[0].v[1];
    v22 = axis.m[0].v[2];
    v28.m256i_i32[3] = LODWORD(axis.m[1].v[0]) ^ _xmm;
    v28.m256i_i32[4] = LODWORD(axis.m[1].v[1]) ^ _xmm;
    *(float *)&v28.m256i_i32[6] = axis.m[2].v[0];
    *(float *)&v28.m256i_i32[7] = axis.m[2].v[1];
    v26 = muzzlePos->v[0];
    v23 = LODWORD(muzzlePos->v[0]) & 0x7F800000;
    v28.m256i_i32[5] = LODWORD(axis.m[1].v[2]) ^ _xmm;
    v24 = muzzlePos->v[2];
    *(float *)v29.m256i_i32 = axis.m[2].v[2];
    v25 = muzzlePos->v[1];
    *(float *)v28.m256i_i32 = axis.m[0].v[0];
    *(float *)&v28.m256i_i32[1] = axis.m[0].v[1];
    *(float *)&v28.m256i_i32[2] = axis.m[0].v[2];
    *(float *)&v29.m256i_i32[1] = v26;
    *(float *)&v29.m256i_i32[2] = v25;
    *(float *)&v29.m256i_i32[3] = v24;
    *(float *)&v29.m256i_i32[4] = axis.m[0].v[0];
    *(float *)&v29.m256i_i32[5] = axis.m[0].v[1];
    *(float *)&v29.m256i_i32[6] = axis.m[0].v[2];
    if ( (v23 == 2139095040 || (LODWORD(v25) & 0x7F800000) == 2139095040 || (LODWORD(v24) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 67, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp.muzzleTrace )[0] ) && !IS_NAN( ( wp.muzzleTrace )[1] ) && !IS_NAN( ( wp.muzzleTrace )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp.muzzleTrace )[0] ) && !IS_NAN( ( wp.muzzleTrace )[1] ) && !IS_NAN( ( wp.muzzleTrace )[2] )") )
      __debugbreak();
    if ( ((LODWORD(v20) & 0x7F800000) == 2139095040 || (LODWORD(v21) & 0x7F800000) == 2139095040 || (LODWORD(v22) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 68, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp.gunForward )[0] ) && !IS_NAN( ( wp.gunForward )[1] ) && !IS_NAN( ( wp.gunForward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp.gunForward )[0] ) && !IS_NAN( ( wp.gunForward )[1] ) && !IS_NAN( ( wp.gunForward )[2] )") )
      __debugbreak();
    Profile_EndInternal(NULL);
    *(__m256i *)v27.forward.v = v28;
    *(__m256i *)&v27.up.z = v29;
    *(__m256i *)&v27.weapDef = *(__m256i *)v30;
    *(__m256i *)&v27.weapon.weaponAttachments[10] = *(__m256i *)&v30[32];
    *(double *)&v27.weapon.weaponCamo = v31;
    AIScriptedInterface::Shoot_Internal(this, &v27, accuracyMod, posOverride, pTargetEntOverride, 0, lastShot, bFireSoundOnce, eventParam, bDontChangeTargetPosOnHit);
  }
}

/*
==============
AIScriptedInterface::ShootEntity
==============
*/
void AIScriptedInterface::ShootEntity(AIScriptedInterface *this, BgWeaponParms *wp, gentity_s *enemy)
{
  vec3_t outPos; 

  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 87, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( this->m_pAI->sentient->scriptTargetHasTagEye )
    G_Utils_DObjGetWorldTagPos(enemy, scr_const.tag_eye, &outPos);
  else
    G_Utils_EntityCentroid(enemy, &outPos);
  AIScriptedInterface::HitTarget(wp, &outPos, &wp->forward);
}

/*
==============
AIScriptedInterface::ShootNoEnemy
==============
*/
void AIScriptedInterface::ShootNoEnemy(AIScriptedInterface *this, BgWeaponParms *wp)
{
  wp->forward = wp->gunForward;
}

/*
==============
AIScriptedInterface::ShootPos
==============
*/
void AIScriptedInterface::ShootPos(AIScriptedInterface *this, BgWeaponParms *wp, const vec3_t *pos)
{
  float v3; 
  __int128 v4; 
  float v5; 
  float v6; 

  v4 = LODWORD(pos->v[0]);
  v3 = pos->v[0] - wp->muzzleTrace.v[0];
  wp->forward.v[0] = v3;
  v5 = pos->v[1] - wp->muzzleTrace.v[1];
  wp->forward.v[1] = v5;
  v6 = pos->v[2] - wp->muzzleTrace.v[2];
  *(float *)&v4 = fsqrt((float)((float)(v3 * v3) + (float)(v5 * v5)) + (float)(v6 * v6));
  _XMM4 = v4;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  wp->forward.v[0] = v3 * (float)(1.0 / *(float *)&_XMM0);
  wp->forward.v[2] = v6 * (float)(1.0 / *(float *)&_XMM0);
  wp->forward.v[1] = v5 * (float)(1.0 / *(float *)&_XMM0);
}

/*
==============
AIScriptedInterface::Shoot_Internal
==============
*/
void AIScriptedInterface::Shoot_Internal(AIScriptedInterface *this, BgWeaponParms *wp, float accuracyMod, const vec3_t *posOverride, gentity_s *pTargetEntOverride, bool bIgnoreEnemy, enumLastShot lastShot, bool bFireSoundOnce, unsigned int eventParam, bool bDontChangeTargetPosOnHit)
{
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  ai_scripted_t *m_pAI; 
  gentity_s *v17; 
  int v18; 
  gentity_s *ent; 
  gentity_s *TargetEntity; 
  float v21; 
  __int128 v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  sentient_s *sentient; 
  bool v31; 
  AIScriptedInterface_vtbl *v32; 
  unsigned int v33; 
  GWeaponMap *Instance; 
  weapType_t WeaponType; 
  bool isAlternate; 
  double v37; 
  unsigned int v38; 
  int time; 
  weapClass_t WeaponClass; 
  Weapon *p_weapon; 
  bool bCleanMiss; 
  vec3_t result; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 

  v44 = v12;
  Profile_Begin(281);
  m_pAI = this->m_pAI;
  v17 = NULL;
  v18 = 1;
  ent = m_pAI->ent;
  bCleanMiss = 0;
  if ( pTargetEntOverride )
  {
    v17 = pTargetEntOverride;
  }
  else if ( !bIgnoreEnemy )
  {
    TargetEntity = AICommonInterface::GetTargetEntity(this);
    m_pAI = this->m_pAI;
    v17 = TargetEntity;
  }
  Actor_BroadcastTeamEvent(m_pAI->sentient, AI_EV_GUNSHOT_TEAMMATE);
  if ( posOverride )
  {
    v46 = v10;
    v45 = v11;
    v22 = LODWORD(posOverride->v[0]);
    v21 = posOverride->v[0] - wp->muzzleTrace.v[0];
    v23 = posOverride->v[1];
    wp->forward.v[0] = v21;
    v24 = v23 - wp->muzzleTrace.v[1];
    v25 = posOverride->v[2];
    wp->forward.v[1] = v24;
    v26 = v25 - wp->muzzleTrace.v[2];
    *(float *)&v22 = fsqrt((float)((float)(v21 * v21) + (float)(v24 * v24)) + (float)(v26 * v26));
    _XMM4 = v22;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    wp->forward.v[0] = v21 * (float)(1.0 / *(float *)&_XMM0);
    wp->forward.v[2] = v26 * (float)(1.0 / *(float *)&_XMM0);
    wp->forward.v[1] = v24 * (float)(1.0 / *(float *)&_XMM0);
    if ( v17 && v17->sentient )
    {
      PointOnLineClosestToPoint(&v17->r.absBox.midPoint, &wp->muzzleTrace, &wp->forward, &result);
      if ( v17 == (gentity_s *)-280i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 496, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
        __debugbreak();
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(result.v[0] - v17->r.absBox.midPoint.v[0]) & _xmm) >= v17->r.absBox.halfSize.v[0] || COERCE_FLOAT(COERCE_UNSIGNED_INT(result.v[1] - v17->r.absBox.midPoint.v[1]) & _xmm) >= v17->r.absBox.halfSize.v[1] || COERCE_FLOAT(COERCE_UNSIGNED_INT(result.v[2] - v17->r.absBox.midPoint.v[2]) & _xmm) >= v17->r.absBox.halfSize.v[2] )
        bCleanMiss = 1;
      else
        v18 = AIScriptedInterface::ShootSentient(this, v17->sentient, wp, accuracyMod, bDontChangeTargetPosOnHit, &bCleanMiss);
    }
  }
  else if ( v17 )
  {
    sentient = v17->sentient;
    if ( sentient )
    {
      v18 = AIScriptedInterface::ShootSentient(this, sentient, wp, accuracyMod, bDontChangeTargetPosOnHit, &bCleanMiss);
    }
    else
    {
      if ( this->m_pAI->sentient->scriptTargetHasTagEye )
        G_Utils_DObjGetWorldTagPos(v17, scr_const.tag_eye, &result);
      else
        G_Utils_EntityCentroid(v17, &result);
      AIScriptedInterface::HitTarget(wp, &result, &wp->forward);
    }
  }
  else
  {
    wp->forward.v[0] = wp->gunForward.v[0];
    wp->forward.v[1] = wp->gunForward.v[1];
    wp->forward.v[2] = wp->gunForward.v[2];
  }
  result.v[0] = wp->forward.v[0];
  if ( (LODWORD(result.v[0]) & 0x7F800000) == 2139095040 || (result.v[0] = wp->forward.v[1], (LODWORD(result.v[0]) & 0x7F800000) == 2139095040) || (result.v[0] = wp->forward.v[2], (LODWORD(result.v[0]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 184, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp.forward )[0] ) && !IS_NAN( ( wp.forward )[1] ) && !IS_NAN( ( wp.forward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp.forward )[0] ) && !IS_NAN( ( wp.forward )[1] ) && !IS_NAN( ( wp.forward )[2] )") )
      __debugbreak();
  }
  if ( v18 )
    AIScriptedInterface::ClampShot(this, wp);
  Profile_EndInternal(NULL);
  v31 = this->ShouldDoClientOnlyBullet(this, bCleanMiss);
  v32 = this->__vftable;
  bCleanMiss = v31;
  v33 = v32->GetFireWeaponEvent(this, bFireSoundOnce, v31);
  Instance = GWeaponMap::GetInstance();
  BG_SetWeaponForEntity(Instance, &ent->s, &wp->weapon);
  WeaponType = BG_GetWeaponType(&wp->weapon, wp->isAlternate);
  if ( WeaponType == WEAPTYPE_BULLET )
  {
    isAlternate = wp->isAlternate;
    *(_QWORD *)result.v = 0i64;
    if ( BG_WeaponBulletFire_ShouldSpread(0i64, &wp->weapon, isAlternate) || BG_IsBeamWeapon(&wp->weapon, wp->isAlternate) )
      v37 = BG_ADSSpread(&wp->weapon, wp->isAlternate, 0, 0);
    else
      LODWORD(v37) = 0;
    if ( bCleanMiss )
      G_Bullet_ClientOnlyFire(ent, *(float *)&v37, wp, ent, v17, WEAPON_HAND_DEFAULT, level.time);
    else
      G_Bullet_Fire(ent, *(float *)&v37, wp, ent, WEAPON_HAND_DEFAULT, level.time);
    v38 = 42;
    if ( lastShot )
      v38 = v33;
    G_Utils_AddEvent(ent, v38, eventParam);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0xAu);
  }
  else if ( WeaponType == WEAPTYPE_PROJECTILE )
  {
    time = level.time;
    WeaponClass = BG_GetWeaponClass(&wp->weapon, wp->isAlternate);
    p_weapon = &wp->weapon;
    if ( WeaponClass == WEAPCLASS_GRENADE )
      G_Weapon_GrenadeLauncher_Fire(ent, p_weapon, WEAPON_HAND_DEFAULT, time, wp);
    else
      G_Weapon_RocketLauncher_Fire(ent, p_weapon, wp->isAlternate, WEAPON_HAND_DEFAULT, 0.0, wp, &vec3_origin, time, NULL, 0);
    G_Utils_AddEvent(ent, v33, 0);
  }
}

/*
==============
AIScriptedInterface::Shoot_StopSound
==============
*/
void AIScriptedInterface::Shoot_StopSound(AIScriptedInterface *this)
{
  G_Utils_AddEvent(this->m_pAI->ent, 0x26u, 0);
}

/*
==============
AIScriptedInterface::ShouldDoClientOnlyBullet
==============
*/
bool AIScriptedInterface::ShouldDoClientOnlyBullet(AIScriptedInterface *this, bool bCleanMiss)
{
  const dvar_t *v2; 
  const dvar_t *v3; 
  float value; 
  double v5; 

  if ( !bCleanMiss || !this->m_pAI->enableMissedBulletClientOnly )
    return 0;
  v2 = DVARBOOL_ai_aimCleanMissEnabled;
  if ( !DVARBOOL_ai_aimCleanMissEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_aimCleanMissEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
    return 0;
  v3 = DCONST_DVARFLT_ai_aimCleanMissDisableRate;
  if ( !DCONST_DVARFLT_ai_aimCleanMissDisableRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_aimCleanMissDisableRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  value = v3->current.value;
  v5 = G_random();
  return *(float *)&v5 > value;
}

