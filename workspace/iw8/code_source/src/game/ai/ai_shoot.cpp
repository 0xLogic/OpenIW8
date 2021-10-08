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
  bool v15; 
  bool v16; 
  bool v30; 
  bool v41; 
  bool v77; 
  bool v78; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  int v98; 
  int v99; 
  vec3_t dir; 
  vec3_t dst; 
  char v103; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  _RDI = &wp->gunForward;
  _RBX = wp;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rbp+57h+var_80], xmm0
  }
  if ( (v88 & 0x7F800000) == 2139095040 )
    goto LABEL_45;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+34h]
    vmovss  [rbp+57h+var_80], xmm0
  }
  if ( (v89 & 0x7F800000) == 2139095040 )
    goto LABEL_45;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+38h]
    vmovss  [rbp+57h+var_80], xmm0
  }
  if ( (v90 & 0x7F800000) == 2139095040 )
  {
LABEL_45:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 250, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp->gunForward )[0] ) && !IS_NAN( ( wp->gunForward )[1] ) && !IS_NAN( ( wp->gunForward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp->gunForward )[0] ) && !IS_NAN( ( wp->gunForward )[1] ) && !IS_NAN( ( wp->gunForward )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rbp+57h+var_80], xmm0
  }
  if ( (v91 & 0x7F800000) == 2139095040 )
    goto LABEL_46;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rbp+57h+var_80], xmm0
  }
  if ( (v92 & 0x7F800000) == 2139095040 )
    goto LABEL_46;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rbp+57h+var_80], xmm0
  }
  v15 = (v93 & 0x7F800000u) < 0x7F800000;
  if ( (v93 & 0x7F800000) == 2139095040 )
  {
LABEL_46:
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 251, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp->forward )[0] ) && !IS_NAN( ( wp->forward )[1] ) && !IS_NAN( ( wp->forward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp->forward )[0] ) && !IS_NAN( ( wp->forward )[1] ) && !IS_NAN( ( wp->forward )[2] )");
    v15 = 0;
    if ( v16 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm2, dword ptr [rdi+4]
    vmovss  xmm3, dword ptr [rdi+8]
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, cs:__real@3c23d70a
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm0, xmm3, xmm9
    vandps  xmm0, xmm0, xmm6
    vcomiss xmm0, xmm7
  }
  if ( !v15 )
  {
    v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 252, ASSERT_TYPE_ASSERT, "(I_fabs( Vec3Dot( wp->gunForward, wp->gunForward ) - 1.f ) < 0.01f)", (const char *)&queryFormat, "I_fabs( Vec3Dot( wp->gunForward, wp->gunForward ) - 1.f ) < 0.01f");
    v15 = 0;
    if ( v30 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  xmm2, dword ptr [rbx]
    vmovss  xmm3, dword ptr [rbx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, xmm9
    vandps  xmm0, xmm0, xmm6
    vcomiss xmm0, xmm7
  }
  if ( !v15 )
  {
    v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 253, ASSERT_TYPE_ASSERT, "(I_fabs( Vec3Dot( wp->forward, wp->forward ) - 1.f ) < 0.01f)", (const char *)&queryFormat, "I_fabs( Vec3Dot( wp->forward, wp->forward ) - 1.f ) < 0.01f");
    v15 = 0;
    if ( v41 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm2, xmm1, dword ptr [rdi]
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vandps  xmm2, xmm2, xmm6
    vcomiss xmm2, cs:__real@3f774688
  }
  if ( v15 )
  {
    __asm { vmovaps xmmword ptr [rsp+0B0h+var_48+8], xmm8 }
    if ( _RDI == &dir && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
      __debugbreak();
    if ( _RBX == (BgWeaponParms *)&dir && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
      __debugbreak();
    __asm
    {
      vmovss  xmm5, dword ptr [rbx+8]
      vmovss  xmm4, dword ptr [rdi+8]
      vmovss  xmm7, dword ptr [rdi+4]
      vmovss  xmm6, dword ptr [rbx+4]
      vmulss  xmm2, xmm6, dword ptr [rdi]
      vmulss  xmm1, xmm5, xmm7
      vmulss  xmm0, xmm6, xmm4
      vsubss  xmm8, xmm1, xmm0
      vmulss  xmm0, xmm5, dword ptr [rdi]
      vmulss  xmm1, xmm4, dword ptr [rbx]
      vsubss  xmm4, xmm1, xmm0
      vmulss  xmm0, xmm7, dword ptr [rbx]
      vmovss  [rbp+57h+var_80], xmm8
      vsubss  xmm5, xmm2, xmm0
      vmovss  dword ptr [rbp+57h+dir], xmm8
      vmovss  dword ptr [rbp+57h+dir+4], xmm4
      vmovss  dword ptr [rbp+57h+dir+8], xmm5
    }
    if ( (v94 & 0x7F800000) == 2139095040 )
      goto LABEL_47;
    __asm { vmovss  [rbp+57h+var_80], xmm4 }
    if ( (v95 & 0x7F800000) == 2139095040 )
      goto LABEL_47;
    __asm { vmovss  [rbp+57h+var_80], xmm5 }
    if ( (v96 & 0x7F800000) == 2139095040 )
    {
LABEL_47:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 264, ASSERT_TYPE_SANITY, "( !IS_NAN( ( planeNormal )[0] ) && !IS_NAN( ( planeNormal )[1] ) && !IS_NAN( ( planeNormal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( planeNormal )[0] ) && !IS_NAN( ( planeNormal )[1] ) && !IS_NAN( ( planeNormal )[2] )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm8, dword ptr [rbp+57h+dir]
        vmovss  xmm4, dword ptr [rbp+57h+dir+4]
        vmovss  xmm5, dword ptr [rbp+57h+dir+8]
      }
    }
    __asm
    {
      vmulss  xmm0, xmm8, xmm8
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm9, xmm0
      vdivss  xmm1, xmm9, xmm0
      vmulss  xmm3, xmm8, xmm1
      vmovaps xmm8, xmmword ptr [rsp+0B0h+var_48+8]
      vmovss  [rbp+57h+var_80], xmm3
      vmulss  xmm0, xmm4, xmm1
      vmulss  xmm2, xmm5, xmm1
      vmovss  dword ptr [rbp+57h+dir], xmm3
      vmovss  dword ptr [rbp+57h+dir+4], xmm0
      vmovss  dword ptr [rbp+57h+dir+8], xmm2
    }
    if ( (v97 & 0x7F800000) == 2139095040 )
      goto LABEL_33;
    __asm { vmovss  [rbp+57h+var_80], xmm0 }
    if ( (v98 & 0x7F800000) == 2139095040 )
      goto LABEL_33;
    __asm { vmovss  [rbp+57h+var_80], xmm2 }
    v77 = (v99 & 0x7F800000) == 2139095040;
    if ( (v99 & 0x7F800000) == 2139095040 )
    {
LABEL_33:
      v78 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 268, ASSERT_TYPE_SANITY, "( !IS_NAN( ( planeNormal )[0] ) && !IS_NAN( ( planeNormal )[1] ) && !IS_NAN( ( planeNormal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( planeNormal )[0] ) && !IS_NAN( ( planeNormal )[1] ) && !IS_NAN( ( planeNormal )[2] )");
      v77 = !v78;
      if ( v78 )
        __debugbreak();
      __asm
      {
        vmovss  xmm3, dword ptr [rbp+57h+dir]
        vmovss  xmm0, dword ptr [rbp+57h+dir+4]
        vmovss  xmm2, dword ptr [rbp+57h+dir+8]
      }
    }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm3, xmm1
    }
    if ( v77 )
    {
      __asm { vucomiss xmm0, xmm1 }
      if ( v77 )
      {
        __asm { vucomiss xmm2, xmm1 }
        if ( v77 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 269, ASSERT_TYPE_ASSERT, "(planeNormal[ 0 ] || planeNormal[ 1 ] || planeNormal[ 2 ])", (const char *)&queryFormat, "planeNormal[ 0 ] || planeNormal[ 1 ] || planeNormal[ 2 ]") )
          __debugbreak();
      }
    }
    __asm { vmovss  xmm3, cs:__real@41700000; degrees }
    RotatePointAroundVector(&dst, &dir, _RDI, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+dst]
      vmovss  xmm1, dword ptr [rbp+57h+dst+4]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm0, dword ptr [rbp+57h+dst+8]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
  }
  _R11 = &v103;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-40h]
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
  vec3_t xyz; 

  v2 = DVARBOOL_ai_whyaminotshooting;
  if ( !DVARBOOL_ai_whyaminotshooting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_whyaminotshooting") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    _RAX = pScripted->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+130h]
      vmovss  dword ptr [rsp+68h+xyz], xmm0
      vmovss  xmm1, dword ptr [rax+134h]
      vmovss  dword ptr [rsp+68h+xyz+4], xmm1
      vmovss  xmm0, dword ptr [rax+138h]
      vsubss  xmm2, xmm0, cs:__real@41400000
      vmovss  dword ptr [rsp+68h+xyz+8], xmm2
      vmovss  xmm2, cs:__real@3f19999a; scale
    }
    G_Main_AddDebugString(&xyz, &colorRed, *(float *)&_XMM2, s);
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

gentity_s *__fastcall AIScriptedInterface::Melee(AIScriptedInterface *this, const vec3_t *direction, int damageOverride, double range, float width, float height)
{
  gentity_s *ent; 
  ai_scripted_t *m_pAI; 
  gentity_s *result; 
  const sentient_s *TargetSentient; 
  GWeaponMap *Instance; 
  ai_scripted_t *v81; 
  gentity_s *v84; 
  int v85; 
  ai_scripted_t *v86; 
  int *outHitEntDamage; 
  __int16 v92[2]; 
  damageReturnCode_t outDamageReturnCode; 
  int v94; 
  GMeleeFireParms wp; 
  vec3_t vEyePosOut; 
  Weapon r_weapon; 
  char v101; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovss  xmm10, [rbp+120h+width]
    vmovss  xmm11, [rbp+120h+height]
    vmovaps xmm6, xmm3
  }
  _RDI = direction;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 347, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 354, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  ent = this->m_pAI->ent;
  _RAX = this->GetEquippedWeapon(this);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+120h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbp+120h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rbp+120h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  m_pAI = this->m_pAI;
  if ( m_pAI->shoot.lastShotTime == level.time )
  {
    result = NULL;
    goto LABEL_34;
  }
  m_pAI->shoot.lastShotTime = level.time;
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  memset_0(&wp, 0, sizeof(wp));
  __asm { vmovss  [rbp+120h+var_108], xmm6 }
  AIScriptedInterface::FillWeaponParms(this, &wp.wp);
  __asm
  {
    vmovups ymm2, ymmword ptr [rbp+120h+r_weapon.weaponIdx]
    vmovups xmm0, xmmword ptr [rbp+120h+r_weapon.attachmentVariationIndices+5]
    vmovsd  xmm1, qword ptr [rbp+120h+r_weapon.attachmentVariationIndices+15h]
    vmovd   r14d, xmm2
  }
  *(_DWORD *)&wp.wp.weapon.weaponCamo = *(_DWORD *)&r_weapon.weaponCamo;
  wp.wp.isAlternate = 0;
  __asm
  {
    vmovups ymmword ptr [rbp+120h+wp.weapon.weaponIdx], ymm2
    vmovups xmmword ptr [rbp+120h+wp.weapon.attachmentVariationIndices+5], xmm0
    vmovsd  qword ptr [rbp+120h+wp.weapon.attachmentVariationIndices+15h], xmm1
  }
  if ( (unsigned __int16)_R14 > bg_lastParsedWeaponIndex )
  {
    LODWORD(outHitEntDamage) = (unsigned __int16)_R14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", outHitEntDamage, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  _R14 = (unsigned __int16)_R14;
  if ( !bg_weaponDefs[(unsigned __int16)_R14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  wp.wp.weapDef = bg_weaponDefs[_R14];
  this->GetEyePosition(this, &wp.wp.muzzleTrace);
  if ( TargetSentient )
  {
    __asm
    {
      vmovaps xmmword ptr [rsp+230h+var_58+8], xmm7
      vmovaps [rsp+230h+var_68+8], xmm8
      vmovaps [rsp+230h+var_78+8], xmm9
    }
    Sentient_GetEyePosition(TargetSentient, &vEyePosOut);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+120h+vEyePosOut]
      vsubss  xmm6, xmm0, dword ptr [rbp+120h+wp.muzzleTrace]
      vmovss  xmm0, dword ptr [rbp+120h+vEyePosOut+8]
      vmovss  xmm1, dword ptr [rbp+120h+vEyePosOut+4]
      vsubss  xmm9, xmm0, dword ptr [rbp+120h+wp.muzzleTrace+8]
      vsubss  xmm7, xmm1, dword ptr [rbp+120h+wp.muzzleTrace+4]
      vmovss  xmm8, cs:__real@3f800000
    }
    if ( _RDI )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rdi+4]
        vmovss  xmm4, dword ptr [rdi]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vmulss  xmm1, xmm7, xmm7
        vmulss  xmm0, xmm6, xmm6
        vdivss  xmm3, xmm8, xmm2
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vmulss  xmm3, xmm3, xmm2
        vmulss  xmm6, xmm4, xmm3
        vmulss  xmm7, xmm5, xmm3
      }
    }
    __asm
    {
      vmulss  xmm0, xmm7, xmm7
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm9, xmm9
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
      vdivss  xmm2, xmm8, xmm0
      vmovaps xmm8, [rsp+230h+var_68+8]
      vmulss  xmm0, xmm6, xmm2
      vmovss  dword ptr [rbp+120h+wp.forward], xmm0
      vmulss  xmm0, xmm9, xmm2
      vmovaps xmm9, [rsp+230h+var_78+8]
      vmulss  xmm1, xmm7, xmm2
      vmovaps xmm7, xmmword ptr [rsp+230h+var_58+8]
    }
  }
  else
  {
    if ( !_RDI )
      goto LABEL_22;
    __asm
    {
      vmovss  xmm4, dword ptr [rdi]
      vmovss  xmm5, dword ptr [rdi+4]
      vmovss  xmm6, dword ptr [rdi+8]
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rbp+120h+wp.forward], xmm0
      vmulss  xmm0, xmm6, xmm2
      vmulss  xmm1, xmm5, xmm2
    }
  }
  __asm
  {
    vmovss  dword ptr [rbp+120h+wp.forward+8], xmm0
    vmovss  dword ptr [rbp+120h+wp.forward+4], xmm1
  }
LABEL_22:
  Instance = GWeaponMap::GetInstance();
  BG_SetWeaponForEntity(Instance, &ent->s, &r_weapon);
  v81 = this->m_pAI;
  outDamageReturnCode = DAMAGE_RETURNCODE_INVALID;
  __asm
  {
    vmovaps xmm3, xmm11; height
    vmovaps xmm2, xmm10; width
  }
  v84 = G_Weapon_Melee(v81->ent, &wp, *(float *)&_XMM2, *(float *)&_XMM3, level.time, &v94, &outDamageReturnCode);
  if ( outDamageReturnCode == DAMAGE_RETURNCODE_DEFERRED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 402, ASSERT_TYPE_ASSERT, "( damageRetCode != DAMAGE_RETURNCODE_DEFERRED )", "AIScriptedInterface::Melee damage should not be deferred.") )
    __debugbreak();
  if ( v84 )
  {
    if ( damageOverride > v94 )
    {
      v85 = damageOverride - v94;
      if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
        __debugbreak();
      v86 = this->m_pAI;
      v92[0] = 0;
      GCombat::ms_gCombatSystem->Damage(GCombat::ms_gCombatSystem, v84, v86->ent, v86->ent, (const vec3_t *)&wp, &wp.wp.muzzleTrace, v85, 0, 8, &r_weapon, 0, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, (const GExtraDamageParams *)v92);
    }
    if ( G_Utils_IsClientOrActorOrAgent(v84) )
      G_Combat_SendMeleeCharacterImpactEvent(v84, v84, this->m_pAI->ent, &r_weapon, 0, &wp.wp.muzzleTrace, MOD_MELEE);
  }
  result = v84;
LABEL_34:
  _R11 = &v101;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
  return result;
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

void __fastcall AIScriptedInterface::OnScrCmd_Shoot(AIScriptedInterface *this, scrContext_t *scrContext, double _XMM2_8)
{
  bool v8; 
  bool v9; 
  vec3_t *p_vectorValue; 
  gentity_s *Entity; 
  unsigned int NumParam; 
  bool v14; 
  char v16; 
  ai_scripted_t *m_pAI; 
  int v30; 
  unsigned int v31; 
  BgWeaponParms v32; 
  BgWeaponParms wp; 
  vec3_t vectorValue; 

  __asm { vmovaps [rsp+1D8h+var_48], xmm6 }
  v8 = 0;
  v9 = 0;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  p_vectorValue = NULL;
  Entity = NULL;
  NumParam = Scr_GetNumParam(scrContext);
  v14 = 1;
  if ( NumParam )
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
      vmovaps xmm6, xmm0
    }
    if ( v16 )
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
    v14 = Scr_GetInt(scrContext, 2u) != 0;
  if ( NumParam >= 4 )
    v8 = Scr_GetInt(scrContext, 3u) != 0;
  if ( NumParam >= 5 )
    v9 = Scr_GetInt(scrContext, 4u) != 0;
  Profile_Begin(281);
  m_pAI = this->m_pAI;
  if ( m_pAI->shoot.lastShotTime == level.time )
  {
    Profile_EndInternal(NULL);
  }
  else
  {
    m_pAI->shoot.lastShotTime = level.time;
    _RAX = this->GetEquippedWeapon(this);
    __asm
    {
      vmovups ymm2, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovd   ebx, xmm2
    }
    *(_DWORD *)&wp.weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    wp.isAlternate = 0;
    __asm
    {
      vmovups ymmword ptr [rsp+1D8h+wp.weapon.weaponIdx], ymm2
      vmovups xmmword ptr [rsp+1D8h+wp.weapon.attachmentVariationIndices+5], xmm1
      vmovsd  qword ptr [rsp+1D8h+wp.weapon.attachmentVariationIndices+15h], xmm0
    }
    if ( (unsigned __int16)_RBX > bg_lastParsedWeaponIndex )
    {
      v31 = bg_lastParsedWeaponIndex;
      v30 = (unsigned __int16)_RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v30, v31) )
        __debugbreak();
    }
    _RBX = (unsigned __int16)_RBX;
    if ( !bg_weaponDefs[(unsigned __int16)_RBX] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    wp.weapDef = bg_weaponDefs[_RBX];
    AIScriptedInterface::FillWeaponParms(this, &wp);
    Profile_EndInternal(NULL);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+1D8h+wp.forward]
      vmovups ymm1, ymmword ptr [rsp+1D8h+wp.up+8]
      vmovups [rsp+1D8h+var_188], ymm0
      vmovups ymm0, ymmword ptr [rsp+1D8h+wp.weapDef]
      vmovups [rsp+1D8h+var_148], ymm0
      vmovsd  xmm0, qword ptr [rsp+1D8h+wp.weapon.weaponCamo]
      vmovups [rsp+1D8h+var_168], ymm1
      vmovups ymm1, ymmword ptr [rsp+140h]
      vmovaps xmm2, xmm6
      vmovsd  [rsp+1D8h+var_108], xmm0
      vmovups [rsp+1D8h+var_128], ymm1
    }
    AIScriptedInterface::Shoot_Internal(this, &v32, *(float *)&_XMM2, p_vectorValue, Entity, v8, NOT_LAST_SHOT_IN_CLIP, v14, 0, v9);
  }
  __asm { vmovaps xmm6, [rsp+1D8h+var_48] }
}

/*
==============
AIScriptedInterface::OnScrCmd_ShootCustomWeapon
==============
*/
void AIScriptedInterface::OnScrCmd_ShootCustomWeapon(AIScriptedInterface *this, scrContext_t *scrContext)
{
  AIScriptedInterface_vtbl *v5; 
  unsigned int eventParam; 
  AIScriptedInterface *v9; 
  enumLastShot lastShot; 
  bool bDontChangeTargetPosOnHit; 
  const gentity_s *v12; 
  unsigned int v13; 
  unsigned int NumParam; 
  char v16; 
  scr_string_t ConstString; 
  const DObj *ServerDObjForEnt; 
  const char *WeaponBaseName; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  unsigned int v23; 
  float fmt; 
  unsigned __int8 inOutIndex; 
  bool bFireSoundOnce; 
  bool outIsAlternate; 
  int modelIndex; 
  AIScriptedInterface *v30; 
  gentity_s *pTargetEntOverride; 
  vec3_t *posOverride; 
  vec3_t v33; 
  vec3_t muzzleAngles; 
  vec3_t vectorValue; 
  Weapon outWeapon; 

  __asm { vmovaps [rsp+148h+var_48], xmm6 }
  v5 = this->__vftable;
  eventParam = 0;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  v30 = this;
  v9 = this;
  bFireSoundOnce = 1;
  lastShot = NOT_LAST_SHOT_IN_CLIP;
  posOverride = NULL;
  bDontChangeTargetPosOnHit = 0;
  pTargetEntOverride = NULL;
  v12 = v5->GetEntity(this);
  GScr_Main_GetWeaponParam(scrContext, 0, &outWeapon, &outIsAlternate);
  Scr_GetVector(scrContext, 1u, &vectorValue);
  v13 = 3;
  Scr_GetVector(scrContext, 2u, &muzzleAngles);
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam <= 3 )
  {
LABEL_17:
    if ( NumParam > v13 )
    {
      if ( Scr_GetType(scrContext, v13) )
      {
        ConstString = Scr_GetConstString(scrContext, v13);
        ServerDObjForEnt = Com_GetServerDObjForEnt(v12);
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
              v20 = j_va("ShootCustomWeapon: Sorry, tagflash override does not work properly with weapon (%s) with attachments/etc.", WeaponBaseName);
              Scr_Error(COM_ERR_3836, scrContext, v20);
            }
            ++eventParam;
          }
          while ( eventParam < 0xD );
          if ( outWeapon.scopeVariation || outWeapon.weaponOthers )
          {
            v21 = BG_GetWeaponBaseName(&outWeapon, 0);
            v22 = j_va("ShootCustomWeapon: Sorry, tagflash override does not work properly with weapon (%s) with attachments/etc.", v21);
            Scr_Error(COM_ERR_6102, scrContext, v22);
          }
          eventParam = BG_CreateWeaponFireParam(inOutIndex, &outWeapon);
        }
        v9 = v30;
      }
      v23 = v13 + 1;
      if ( NumParam > v23 && Scr_GetType(scrContext, v23) )
        bDontChangeTargetPosOnHit = Scr_GetInt(scrContext, v23) != 0;
    }
    goto LABEL_34;
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps xmm6, xmm0
  }
  if ( v16 )
    Scr_ParamError(COM_ERR_3835, scrContext, 3u, "accuracy mod must be nonnegative");
  if ( NumParam > 4 )
  {
    if ( Scr_GetType(scrContext, 4u) )
    {
      if ( Scr_GetType(scrContext, 4u) == VAR_VECTOR )
      {
        Scr_GetVector(scrContext, 4u, &v33);
        posOverride = &v33;
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
        v13 = 7;
        goto LABEL_17;
      }
    }
  }
LABEL_34:
  __asm { vmovss  dword ptr [rsp+148h+fmt], xmm6 }
  AIScriptedInterface::ShootCustomWeapon(v9, &outWeapon, &vectorValue, &muzzleAngles, fmt, posOverride, pTargetEntOverride, lastShot, bFireSoundOnce, eventParam, bDontChangeTargetPosOnHit);
  __asm { vmovaps xmm6, [rsp+148h+var_48] }
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

void __fastcall AIScriptedInterface::Shoot(AIScriptedInterface *this, double accuracyMod, const vec3_t *posOverride, gentity_s *pTargetEntOverride, bool bIgnoreEnemy, enumLastShot lastShot, bool bFireSoundOnce, bool bDontChangeTargetPosOnHit)
{
  ai_scripted_t *m_pAI; 
  int v27; 
  unsigned int v28; 
  BgWeaponParms v29; 
  BgWeaponParms wp; 

  __asm
  {
    vmovaps [rsp+1B8h+var_38], xmm6
    vmovaps xmm6, xmm1
  }
  Profile_Begin(281);
  m_pAI = this->m_pAI;
  if ( m_pAI->shoot.lastShotTime == level.time )
  {
    Profile_EndInternal(NULL);
  }
  else
  {
    m_pAI->shoot.lastShotTime = level.time;
    _RAX = this->GetEquippedWeapon(this);
    __asm
    {
      vmovups ymm2, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovd   edi, xmm2
    }
    *(_DWORD *)&wp.weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    wp.isAlternate = 0;
    __asm
    {
      vmovups ymmword ptr [rsp+1B8h+wp.weapon.weaponIdx], ymm2
      vmovups xmmword ptr [rsp+1B8h+wp.weapon.attachmentVariationIndices+5], xmm1
      vmovsd  qword ptr [rsp+1B8h+wp.weapon.attachmentVariationIndices+15h], xmm0
    }
    if ( (unsigned __int16)_RDI > bg_lastParsedWeaponIndex )
    {
      v28 = bg_lastParsedWeaponIndex;
      v27 = (unsigned __int16)_RDI;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v27, v28) )
        __debugbreak();
    }
    _RDI = (unsigned __int16)_RDI;
    if ( !bg_weaponDefs[(unsigned __int16)_RDI] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    wp.weapDef = bg_weaponDefs[_RDI];
    AIScriptedInterface::FillWeaponParms(this, &wp);
    Profile_EndInternal(NULL);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+1B8h+wp.forward]
      vmovups ymm1, ymmword ptr [rsp+1B8h+wp.up+8]
      vmovups [rsp+1B8h+var_168], ymm0
      vmovups ymm0, ymmword ptr [rsp+1B8h+wp.weapDef]
      vmovups [rsp+1B8h+var_148], ymm1
      vmovups ymm1, ymmword ptr [rsp+140h]
      vmovups [rsp+1B8h+var_128], ymm0
      vmovsd  xmm0, qword ptr [rsp+1B8h+wp.weapon.weaponCamo]
      vmovaps xmm2, xmm6
      vmovups [rsp+1B8h+var_108], ymm1
      vmovsd  [rsp+1B8h+var_E8], xmm0
    }
    AIScriptedInterface::Shoot_Internal(this, &v29, *(float *)&_XMM2, posOverride, pTargetEntOverride, bIgnoreEnemy, lastShot, bFireSoundOnce, 0, bDontChangeTargetPosOnHit);
  }
  __asm { vmovaps xmm6, [rsp+1B8h+var_38] }
}

/*
==============
AIScriptedInterface::ShootBlank
==============
*/

void __fastcall AIScriptedInterface::ShootBlank(AIScriptedInterface *this, __int64 a2, double _XMM2_8)
{
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v11; 
  entityState_t *p_s; 
  GWeaponMap *Instance; 
  __int64 v16; 
  unsigned int v17; 
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
    _RAX = this->GetEquippedWeapon(this);
    __asm
    {
      vmovups ymm2, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+128h+r_weapon.weaponIdx], ymm2
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rsp+128h+r_weapon.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rsp+128h+r_weapon.attachmentVariationIndices+15h], xmm0
      vmovd   ebx, xmm2
    }
    *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    *(_DWORD *)&wp.weapon.weaponCamo = *(_DWORD *)&r_weapon.weaponCamo;
    wp.isAlternate = 0;
    __asm
    {
      vmovups ymmword ptr [rsp+128h+wp.weapon.weaponIdx], ymm2
      vmovups xmmword ptr [rsp+128h+wp.weapon.attachmentVariationIndices+5], xmm1
      vmovsd  qword ptr [rsp+128h+wp.weapon.attachmentVariationIndices+15h], xmm0
    }
    if ( (unsigned __int16)_RBX > bg_lastParsedWeaponIndex )
    {
      v17 = bg_lastParsedWeaponIndex;
      LODWORD(v16) = (unsigned __int16)_RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v16, v17) )
        __debugbreak();
    }
    _RBX = (unsigned __int16)_RBX;
    if ( !bg_weaponDefs[(unsigned __int16)_RBX] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    wp.weapDef = bg_weaponDefs[_RBX];
    AIScriptedInterface::FillWeaponParms(this, &wp);
    __asm { vmovss  xmm0, dword ptr [rsp+128h+wp.gunForward] }
    v11 = this->m_pAI;
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+128h+wp.gunForward+4]
      vmovss  dword ptr [rsp+128h+wp.forward], xmm0
      vmovss  xmm0, dword ptr [rsp+128h+wp.gunForward+8]
      vmovss  dword ptr [rsp+128h+wp.forward+8], xmm0
      vmovss  dword ptr [rsp+128h+wp.forward+4], xmm1
    }
    p_s = &v11->ent->s;
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
  ai_scripted_t *m_pAI; 
  int v21; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  BgWeaponParms v54; 
  _BYTE v57[64]; 
  __int64 v58; 
  tmat33_t<vec3_t> axis; 

  _R14 = muzzlePos;
  _RDI = r_weapon;
  Profile_Begin(281);
  m_pAI = this->m_pAI;
  if ( m_pAI->shoot.lastShotTime == level.time )
  {
    Profile_EndInternal(NULL);
  }
  else
  {
    m_pAI->shoot.lastShotTime = level.time;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups xmm1, xmmword ptr [rdi+20h]
    }
    v21 = *(_DWORD *)&_RDI->weaponCamo;
    __asm
    {
      vmovups [rbp+100h+var_D0+8], ymm0
      vmovsd  xmm0, qword ptr [rdi+30h]
      vmovaps [rsp+200h+var_30], xmm6
      vmovaps [rsp+200h+var_40], xmm7
      vmovsd  [rbp+100h+var_98], xmm0
      vmovaps [rsp+200h+var_50], xmm8
      vmovups [rbp+100h+var_A8], xmm1
    }
    LODWORD(v58) = v21;
    BYTE4(v58) = 0;
    *(_QWORD *)v57 = BG_WeaponDef(_RDI, 0);
    AnglesToAxis(muzzleAngles, &axis);
    __asm
    {
      vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rbp+100h+axis+0Ch]
      vmovss  xmm2, dword ptr [rbp+100h+axis+10h]
      vmovss  xmm6, dword ptr [rbp+100h+axis]
      vmovss  xmm7, dword ptr [rbp+100h+axis+4]
      vmovss  xmm8, dword ptr [rbp+100h+axis+8]
      vxorps  xmm1, xmm0, xmm3
      vxorps  xmm0, xmm2, xmm3
      vmovss  dword ptr [rbp+100h+var_110+0Ch], xmm1
      vmovss  xmm1, dword ptr [rbp+100h+axis+14h]
      vxorps  xmm2, xmm1, xmm3
      vmovss  xmm1, dword ptr [rbp+100h+axis+1Ch]
      vmovss  dword ptr [rbp+100h+var_110+10h], xmm0
      vmovss  xmm0, dword ptr [rbp+100h+axis+18h]
      vmovss  dword ptr [rbp+100h+var_110+18h], xmm0
      vmovss  xmm0, dword ptr [rbp+100h+axis+20h]
      vmovss  dword ptr [rbp+100h+var_110+1Ch], xmm1
      vmovss  xmm1, dword ptr [r14]
      vmovss  [rsp+200h+var_1B0], xmm1
      vmovss  dword ptr [rbp+100h+var_110+14h], xmm2
      vmovss  xmm2, dword ptr [r14+8]
      vmovss  dword ptr [rbp+100h+var_F0], xmm0
      vmovss  xmm0, dword ptr [r14+4]
      vmovss  dword ptr [rbp+100h+var_110], xmm6
      vmovss  dword ptr [rbp+100h+var_110+4], xmm7
      vmovss  dword ptr [rbp+100h+var_110+8], xmm8
      vmovss  dword ptr [rbp+100h+var_F0+4], xmm1
      vmovss  dword ptr [rbp+100h+var_F0+8], xmm0
      vmovss  dword ptr [rbp+100h+var_F0+0Ch], xmm2
      vmovss  dword ptr [rbp+100h+var_F0+10h], xmm6
      vmovss  dword ptr [rbp+100h+var_F0+14h], xmm7
      vmovss  dword ptr [rbp+100h+var_F0+18h], xmm8
    }
    if ( (v48 & 0x7F800000) == 2139095040 )
      goto LABEL_16;
    __asm { vmovss  [rsp+200h+var_1B0], xmm0 }
    if ( (v49 & 0x7F800000) == 2139095040 )
      goto LABEL_16;
    __asm { vmovss  [rsp+200h+var_1B0], xmm2 }
    if ( (v50 & 0x7F800000) == 2139095040 )
    {
LABEL_16:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 67, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp.muzzleTrace )[0] ) && !IS_NAN( ( wp.muzzleTrace )[1] ) && !IS_NAN( ( wp.muzzleTrace )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp.muzzleTrace )[0] ) && !IS_NAN( ( wp.muzzleTrace )[1] ) && !IS_NAN( ( wp.muzzleTrace )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  [rsp+200h+var_1B0], xmm6
      vmovaps xmm6, [rsp+200h+var_30]
    }
    if ( (v51 & 0x7F800000) == 2139095040 )
      goto LABEL_17;
    __asm { vmovss  [rsp+200h+var_1B0], xmm7 }
    if ( (v52 & 0x7F800000) == 2139095040 )
      goto LABEL_17;
    __asm { vmovss  [rsp+200h+var_1B0], xmm8 }
    if ( (v53 & 0x7F800000) == 2139095040 )
    {
LABEL_17:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 68, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp.gunForward )[0] ) && !IS_NAN( ( wp.gunForward )[1] ) && !IS_NAN( ( wp.gunForward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp.gunForward )[0] ) && !IS_NAN( ( wp.gunForward )[1] ) && !IS_NAN( ( wp.gunForward )[2] )") )
        __debugbreak();
    }
    Profile_EndInternal(NULL);
    __asm
    {
      vmovups ymm0, [rbp+100h+var_110]
      vmovups ymm1, [rbp+100h+var_F0]
      vmovss  xmm2, [rbp+100h+accuracyMod]
      vmovups [rsp+200h+var_1A0], ymm0
      vmovups ymm0, [rbp+100h+var_D0]
      vmovups [rbp+100h+var_180], ymm1
      vmovups ymm1, ymmword ptr [rbp+50h]
      vmovups [rbp+100h+var_160], ymm0
      vmovsd  xmm0, [rbp+100h+var_90]
      vmovups [rbp+100h+var_140], ymm1
      vmovsd  [rbp+100h+var_120], xmm0
    }
    AIScriptedInterface::Shoot_Internal(this, &v54, *(float *)&_XMM2, posOverride, pTargetEntOverride, 0, lastShot, bFireSoundOnce, eventParam, bDontChangeTargetPosOnHit);
    __asm
    {
      vmovaps xmm8, [rsp+200h+var_50]
      vmovaps xmm7, [rsp+200h+var_40]
    }
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
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovaps [rsp+28h+var_18], xmm6
    vmovaps [rsp+28h+var_28], xmm7
    vsubss  xmm7, xmm0, dword ptr [rdx+24h]
    vmovss  dword ptr [rdx], xmm7
    vmovss  xmm0, dword ptr [r8+4]
    vsubss  xmm6, xmm0, dword ptr [rdx+28h]
    vmovss  dword ptr [rdx+4], xmm6
    vmovss  xmm0, dword ptr [r8+8]
    vsubss  xmm5, xmm0, dword ptr [rdx+2Ch]
    vmulss  xmm2, xmm7, xmm7
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm7, xmm2
    vmovaps xmm7, [rsp+28h+var_28]
    vmulss  xmm1, xmm6, xmm2
    vmovaps xmm6, [rsp+28h+var_18]
    vmovss  dword ptr [rdx], xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rdx+8], xmm0
    vmovss  dword ptr [rdx+4], xmm1
  }
}

/*
==============
AIScriptedInterface::Shoot_Internal
==============
*/

void __fastcall AIScriptedInterface::Shoot_Internal(AIScriptedInterface *this, BgWeaponParms *wp, double accuracyMod, const vec3_t *posOverride, gentity_s *pTargetEntOverride, bool bIgnoreEnemy, enumLastShot lastShot, bool bFireSoundOnce, unsigned int eventParam, bool bDontChangeTargetPosOnHit)
{
  ai_scripted_t *m_pAI; 
  gentity_s *v19; 
  int v20; 
  gentity_s *ent; 
  gentity_s *TargetEntity; 
  sentient_s *sentient; 
  bool v53; 
  AIScriptedInterface_vtbl *v54; 
  unsigned int v55; 
  GWeaponMap *Instance; 
  weapType_t WeaponType; 
  bool isAlternate; 
  unsigned int v60; 
  int time; 
  weapClass_t WeaponClass; 
  const Weapon *p_weapon; 
  float fmt; 
  bool bCleanMiss; 
  vec3_t result; 
  void *retaddr; 

  _R11 = &retaddr;
  _R12 = posOverride;
  __asm { vmovaps xmmword ptr [r11-68h], xmm8 }
  _RBX = wp;
  __asm { vmovaps xmm8, xmm2 }
  Profile_Begin(281);
  m_pAI = this->m_pAI;
  v19 = NULL;
  v20 = 1;
  ent = m_pAI->ent;
  bCleanMiss = 0;
  if ( pTargetEntOverride )
  {
    v19 = pTargetEntOverride;
  }
  else if ( !bIgnoreEnemy )
  {
    TargetEntity = AICommonInterface::GetTargetEntity(this);
    m_pAI = this->m_pAI;
    v19 = TargetEntity;
  }
  Actor_BroadcastTeamEvent(m_pAI->sentient, AI_EV_GUNSHOT_TEAMMATE);
  if ( _R12 )
  {
    __asm
    {
      vmovaps [rsp+0D8h+var_48], xmm6
      vmovaps [rsp+0D8h+var_58], xmm7
      vmovss  xmm0, dword ptr [r12]
      vsubss  xmm7, xmm0, dword ptr [rdx]
      vmovss  xmm0, dword ptr [r12+4]
      vmovss  dword ptr [rbx], xmm7
      vsubss  xmm6, xmm0, dword ptr [rdx+4]
      vmovss  xmm0, dword ptr [r12+8]
      vmovss  dword ptr [rbx+4], xmm6
      vsubss  xmm5, xmm0, dword ptr [rdx+8]
      vmulss  xmm2, xmm7, xmm7
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm7, xmm2
      vmovaps xmm7, [rsp+0D8h+var_58]
      vmulss  xmm1, xmm6, xmm2
      vmovaps xmm6, [rsp+0D8h+var_48]
      vmovss  dword ptr [rbx], xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
    if ( v19 && v19->sentient )
    {
      _RBP = &v19->r.absBox;
      PointOnLineClosestToPoint(&v19->r.absBox.midPoint, &_RBX->muzzleTrace, &_RBX->forward, &result);
      if ( v19 == (gentity_s *)-280i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 496, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0D8h+result]
        vsubss  xmm1, xmm0, dword ptr [rbp+0]
        vmovss  xmm2, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm1, xmm1, xmm2
        vcomiss xmm1, dword ptr [rbp+0Ch]
      }
      bCleanMiss = 1;
    }
  }
  else if ( v19 )
  {
    sentient = v19->sentient;
    if ( sentient )
    {
      __asm { vmovaps xmm3, xmm8; accuracyMod }
      v20 = AIScriptedInterface::ShootSentient(this, sentient, _RBX, *(float *)&_XMM3, bDontChangeTargetPosOnHit, &bCleanMiss);
    }
    else
    {
      if ( this->m_pAI->sentient->scriptTargetHasTagEye )
        G_Utils_DObjGetWorldTagPos(v19, scr_const.tag_eye, &result);
      else
        G_Utils_EntityCentroid(v19, &result);
      AIScriptedInterface::HitTarget(_RBX, &result, &_RBX->forward);
    }
  }
  else
  {
    _RBX->forward.v[0] = _RBX->gunForward.v[0];
    _RBX->forward.v[1] = _RBX->gunForward.v[1];
    _RBX->forward.v[2] = _RBX->gunForward.v[2];
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovaps xmm8, [rsp+0D8h+var_68]
    vmovss  dword ptr [rsp+0D8h+result], xmm0
  }
  if ( (LODWORD(result.v[0]) & 0x7F800000) == 2139095040 )
    goto LABEL_45;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+0D8h+result], xmm0
  }
  if ( (LODWORD(result.v[0]) & 0x7F800000) == 2139095040 )
    goto LABEL_45;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rsp+0D8h+result], xmm0
  }
  if ( (LODWORD(result.v[0]) & 0x7F800000) == 2139095040 )
  {
LABEL_45:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_shoot.cpp", 184, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp.forward )[0] ) && !IS_NAN( ( wp.forward )[1] ) && !IS_NAN( ( wp.forward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp.forward )[0] ) && !IS_NAN( ( wp.forward )[1] ) && !IS_NAN( ( wp.forward )[2] )") )
      __debugbreak();
  }
  if ( v20 )
    AIScriptedInterface::ClampShot(this, _RBX);
  Profile_EndInternal(NULL);
  v53 = this->ShouldDoClientOnlyBullet(this, bCleanMiss);
  v54 = this->__vftable;
  bCleanMiss = v53;
  v55 = v54->GetFireWeaponEvent(this, bFireSoundOnce, v53);
  Instance = GWeaponMap::GetInstance();
  BG_SetWeaponForEntity(Instance, &ent->s, &_RBX->weapon);
  WeaponType = BG_GetWeaponType(&_RBX->weapon, _RBX->isAlternate);
  if ( WeaponType == WEAPTYPE_BULLET )
  {
    isAlternate = _RBX->isAlternate;
    *(_QWORD *)result.v = 0i64;
    if ( BG_WeaponBulletFire_ShouldSpread(0i64, &_RBX->weapon, isAlternate) || BG_IsBeamWeapon(&_RBX->weapon, _RBX->isAlternate) )
      *(double *)&_XMM0 = BG_ADSSpread(&_RBX->weapon, _RBX->isAlternate, 0, 0);
    else
      __asm { vxorps  xmm0, xmm0, xmm0 }
    __asm { vmovaps xmm1, xmm0; spread }
    if ( bCleanMiss )
      G_Bullet_ClientOnlyFire(ent, *(float *)&_XMM1, _RBX, ent, v19, WEAPON_HAND_DEFAULT, level.time);
    else
      G_Bullet_Fire(ent, *(float *)&_XMM1, _RBX, ent, WEAPON_HAND_DEFAULT, level.time);
    v60 = 42;
    if ( lastShot )
      v60 = v55;
    G_Utils_AddEvent(ent, v60, eventParam);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0xAu);
  }
  else if ( WeaponType == WEAPTYPE_PROJECTILE )
  {
    time = level.time;
    WeaponClass = BG_GetWeaponClass(&_RBX->weapon, _RBX->isAlternate);
    p_weapon = &_RBX->weapon;
    if ( WeaponClass == WEAPCLASS_GRENADE )
    {
      G_Weapon_GrenadeLauncher_Fire(ent, p_weapon, WEAPON_HAND_DEFAULT, time, _RBX);
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+0D8h+fmt], xmm0
      }
      G_Weapon_RocketLauncher_Fire(ent, p_weapon, _RBX->isAlternate, WEAPON_HAND_DEFAULT, fmt, _RBX, &vec3_origin, time, NULL, 0);
    }
    G_Utils_AddEvent(ent, v55, 0);
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
  const dvar_t *v4; 
  char v8; 
  char v9; 

  if ( !bCleanMiss || !this->m_pAI->enableMissedBulletClientOnly )
    return 0;
  v4 = DVARBOOL_ai_aimCleanMissEnabled;
  if ( !DVARBOOL_ai_aimCleanMissEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_aimCleanMissEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return 0;
  _RBX = DCONST_DVARFLT_ai_aimCleanMissDisableRate;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !DCONST_DVARFLT_ai_aimCleanMissDisableRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_aimCleanMissDisableRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  *(double *)&_XMM0 = G_random();
  __asm
  {
    vcomiss xmm0, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return !(v8 | v9);
}

