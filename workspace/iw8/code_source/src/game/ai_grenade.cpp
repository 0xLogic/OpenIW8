/*
==============
AIScriptedInterface::HasGrenadeValid
==============
*/

bool __fastcall AIScriptedInterface::HasGrenadeValid(AIScriptedInterface *this)
{
  return ?HasGrenadeValid@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::OnScrCmd_ThrowGrenade
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_ThrowGrenade(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_ThrowGrenade@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::Grenade_AttemptThrowAway
==============
*/

int __fastcall AIScriptedInterface::Grenade_AttemptThrowAway(AIScriptedInterface *this, const vec3_t *vFrom, const vec3_t *vEnemyPos, vec3_t *vLand, vec3_t *vVelocity)
{
  return ?Grenade_AttemptThrowAway@AIScriptedInterface@@QEBAHAEBTvec3_t@@0AEAT2@1@Z(this, vFrom, vEnemyPos, vLand, vVelocity);
}

/*
==============
AIScriptedInterface::OnScrCmd_CheckGrenadeLaunchPos
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_CheckGrenadeLaunchPos(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_CheckGrenadeLaunchPos@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::Grenade_IsSafeTarget
==============
*/

int __fastcall AIScriptedInterface::Grenade_IsSafeTarget(AIScriptedInterface *this, const vec3_t *vTargetPos, float radius)
{
  return ?Grenade_IsSafeTarget@AIScriptedInterface@@QEBAHAEBTvec3_t@@M@Z(this, vTargetPos, radius);
}

/*
==============
AIScriptedInterface::DissociateGrenade
==============
*/

void __fastcall AIScriptedInterface::DissociateGrenade(gentity_s *grenade)
{
  ?DissociateGrenade@AIScriptedInterface@@SAXPEAUgentity_s@@@Z(grenade);
}

/*
==============
AIScriptedInterface::Grenade_IsGrenadeThrowable
==============
*/

bool __fastcall AIScriptedInterface::Grenade_IsGrenadeThrowable(AIScriptedInterface *this, gentity_s *pGrenade)
{
  return ?Grenade_IsGrenadeThrowable@AIScriptedInterface@@IEBA_NPEAUgentity_s@@@Z(this, pGrenade);
}

/*
==============
AIScriptedInterface::Grenade_ShouldIgnore
==============
*/

bool __fastcall AIScriptedInterface::Grenade_ShouldIgnore(AIScriptedInterface *this, gentity_s *grenade, bool bWasPreviouslyAware)
{
  return ?Grenade_ShouldIgnore@AIScriptedInterface@@QEBA_NPEAUgentity_s@@_N@Z(this, grenade, bWasPreviouslyAware);
}

/*
==============
AIScriptedInterface::Grenade_Ping
==============
*/

void __fastcall AIScriptedInterface::Grenade_Ping(AIScriptedInterface *this, gentity_s *pGrenade, const vec3_t *origin)
{
  ?Grenade_Ping@AIScriptedInterface@@UEBAXPEAUgentity_s@@AEBTvec3_t@@@Z(this, pGrenade, origin);
}

/*
==============
AIScriptedInterface::Grenade_TryReturnThrows
==============
*/

int __fastcall AIScriptedInterface::Grenade_TryReturnThrows(AIScriptedInterface *this, gentity_s *grenade, gentity_s *thrower, AIGrenadeReturnThrowInfo *info)
{
  return ?Grenade_TryReturnThrows@AIScriptedInterface@@IEBAHPEAUgentity_s@@0PEAUAIGrenadeReturnThrowInfo@@@Z(this, grenade, thrower, info);
}

/*
==============
AIScriptedInterface::Projectile_Ping
==============
*/

void __fastcall AIScriptedInterface::Projectile_Ping(AIScriptedInterface *this, gentity_s *pProjectile, const vec3_t *origin)
{
  ?Projectile_Ping@AIScriptedInterface@@UEBAXPEAUgentity_s@@AEBTvec3_t@@@Z(this, pProjectile, origin);
}

/*
==============
AIScriptedInterface::Grenade_ShouldReturnThrow
==============
*/

bool __fastcall AIScriptedInterface::Grenade_ShouldReturnThrow(AIScriptedInterface *this)
{
  return ?Grenade_ShouldReturnThrow@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::Grenade_CheckTossPos
==============
*/

int __fastcall AIScriptedInterface::Grenade_CheckTossPos(AIScriptedInterface *this, const AIGrenadeCheckInfo *throwInfo, vec3_t *vPosOut, vec3_t *vVelOut)
{
  return ?Grenade_CheckTossPos@AIScriptedInterface@@QEBAHPEBUAIGrenadeCheckInfo@@AEATvec3_t@@1@Z(this, throwInfo, vPosOut, vVelOut);
}

/*
==============
AIScriptedInterface::OnScrCmd_MagicGrenadeManual
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_MagicGrenadeManual(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_MagicGrenadeManual@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::Grenade_GetFuseEndTime
==============
*/

int __fastcall AIScriptedInterface::Grenade_GetFuseEndTime(AIScriptedInterface *this)
{
  return ?Grenade_GetFuseEndTime@AIScriptedInterface@@QEBAHXZ(this);
}

/*
==============
AIScriptedInterface::IsGrenadeInAIHands
==============
*/

int __fastcall AIScriptedInterface::IsGrenadeInAIHands(const gentity_s *grenade)
{
  return ?IsGrenadeInAIHands@AIScriptedInterface@@SAHPEBUgentity_s@@@Z(grenade);
}

/*
==============
AIScriptedInterface::GrenadeLauncher_CheckPos
==============
*/

int __fastcall AIScriptedInterface::GrenadeLauncher_CheckPos(AIScriptedInterface *this, const vec3_t *vStandPos, const vec3_t *vOffset, const vec3_t *vTargetPos, float speed, vec3_t *vPosOut, vec3_t *vVelOut)
{
  return ?GrenadeLauncher_CheckPos@AIScriptedInterface@@QEBAHAEBTvec3_t@@00MAEAT2@1@Z(this, vStandPos, vOffset, vTargetPos, speed, vPosOut, vVelOut);
}

/*
==============
AIScriptedInterface::Grenade_AttemptReturnTo
==============
*/

int __fastcall AIScriptedInterface::Grenade_AttemptReturnTo(AIScriptedInterface *this, const vec3_t *vFrom, const vec3_t *vEnemyPos, vec3_t *vLand, vec3_t *vVelocity)
{
  return ?Grenade_AttemptReturnTo@AIScriptedInterface@@QEBAHAEBTvec3_t@@0AEAT2@1@Z(this, vFrom, vEnemyPos, vLand, vVelocity);
}

/*
==============
AIScriptedInterface::OnScrCmd_CheckGrenadeLaunch
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_CheckGrenadeLaunch(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_CheckGrenadeLaunch@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::Grenade_GetTossFromPosition
==============
*/

void __fastcall AIScriptedInterface::Grenade_GetTossFromPosition(AIScriptedInterface *this, const vec3_t *vStandPos, const vec3_t *vOffset, vec3_t *vFrom)
{
  ?Grenade_GetTossFromPosition@AIScriptedInterface@@QEBAXAEBTvec3_t@@0AEAT2@@Z(this, vStandPos, vOffset, vFrom);
}

/*
==============
AIScriptedInterface::Grenade_AttemptReturn
==============
*/

bool __fastcall AIScriptedInterface::Grenade_AttemptReturn(AIScriptedInterface *this, float maxDistSq)
{
  return ?Grenade_AttemptReturn@AIScriptedInterface@@QEBA_NM@Z(this, maxDistSq);
}

/*
==============
AIScriptedInterface::Grenade_ShouldTryToReturnThrow
==============
*/

bool __fastcall AIScriptedInterface::Grenade_ShouldTryToReturnThrow(AIScriptedInterface *this)
{
  return ?Grenade_ShouldTryToReturnThrow@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::HasGrenadeDefined
==============
*/

bool __fastcall AIScriptedInterface::HasGrenadeDefined(AIScriptedInterface *this)
{
  return ?HasGrenadeDefined@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::GrenadeBounced
==============
*/

void __fastcall AIScriptedInterface::GrenadeBounced(gentity_s *pGrenade, gentity_s *pHitEnt)
{
  ?GrenadeBounced@AIScriptedInterface@@SAXPEAUgentity_s@@0@Z(pGrenade, pHitEnt);
}

/*
==============
AIScriptedInterface::OnScrCmd_CheckGrenadeThrow
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_CheckGrenadeThrow(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_CheckGrenadeThrow@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::Grenade_DropIfHeld
==============
*/

void __fastcall AIScriptedInterface::Grenade_DropIfHeld(AIScriptedInterface *this)
{
  ?Grenade_DropIfHeld@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::OnScrCmd_MagicGrenade
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_MagicGrenade(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_MagicGrenade@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::Grenade_Throw
==============
*/

gentity_s *__fastcall AIScriptedInterface::Grenade_Throw(AIScriptedInterface *this)
{
  return ?Grenade_Throw@AIScriptedInterface@@QEBAPEAUgentity_s@@XZ(this);
}

/*
==============
AIScriptedInterface::Grenade_CheckThrowAwayGrenade
==============
*/

int __fastcall AIScriptedInterface::Grenade_CheckThrowAwayGrenade(AIScriptedInterface *this, gentity_s *pGrenade, AIGrenadeReturnThrowInfo *info)
{
  return ?Grenade_CheckThrowAwayGrenade@AIScriptedInterface@@IEBAHPEAUgentity_s@@PEAUAIGrenadeReturnThrowInfo@@@Z(this, pGrenade, info);
}

/*
==============
AIScriptedInterface::OnScrCmd_CheckGrenadeThrowPos
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_CheckGrenadeThrowPos(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_CheckGrenadeThrowPos@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::Grenade_IsPointSafe
==============
*/

int __fastcall AIScriptedInterface::Grenade_IsPointSafe(AIScriptedInterface *this, const vec3_t *vPoint)
{
  return ?Grenade_IsPointSafe@AIScriptedInterface@@QEBAHAEBTvec3_t@@@Z(this, vPoint);
}

/*
==============
AIScriptedInterface::Grenade_GetTossMethods
==============
*/

void __fastcall AIScriptedInterface::Grenade_GetTossMethods(scrContext_t *scrContext, AIGrenadeCheckInfo *throwInfo, int firstParamIndex)
{
  ?Grenade_GetTossMethods@AIScriptedInterface@@SAXAEAUscrContext_t@@PEAUAIGrenadeCheckInfo@@H@Z(scrContext, throwInfo, firstParamIndex);
}

/*
==============
AIScriptedInterface::Grenade_CheckReturnThrowToEnemy
==============
*/

int __fastcall AIScriptedInterface::Grenade_CheckReturnThrowToEnemy(AIScriptedInterface *this, gentity_s *pGrenade, gentity_s *pGrenadeParent, AIGrenadeReturnThrowInfo *info)
{
  return ?Grenade_CheckReturnThrowToEnemy@AIScriptedInterface@@IEBAHPEAUgentity_s@@0PEAUAIGrenadeReturnThrowInfo@@@Z(this, pGrenade, pGrenadeParent, info);
}

/*
==============
AIScriptedInterface::OnScrCmd_IsGrenadePosSafe
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_IsGrenadePosSafe(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_IsGrenadePosSafe@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::OnScrCmd_PickUpGrenade
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_PickUpGrenade(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_PickUpGrenade@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::IsAwareOfGrenade
==============
*/

bool __fastcall AIScriptedInterface::IsAwareOfGrenade(AIScriptedInterface *this)
{
  return ?IsAwareOfGrenade@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::Grenade_AttemptEscape
==============
*/

bool __fastcall AIScriptedInterface::Grenade_AttemptEscape(AIScriptedInterface *this)
{
  return ?Grenade_AttemptEscape@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::Grenade_CheckLaunch
==============
*/

bool __fastcall AIScriptedInterface::Grenade_CheckLaunch(AIScriptedInterface *this, const vec3_t *vStartPos, const vec3_t *vOffset, const vec3_t *vTargetPos, vec3_t *outTossVelocity)
{
  return ?Grenade_CheckLaunch@AIScriptedInterface@@QEBA_NAEBTvec3_t@@00AEAT2@@Z(this, vStartPos, vOffset, vTargetPos, outTossVelocity);
}

/*
==============
AIScriptedInterface::OnScrCmd_GetGrenadeTossVel
==============
*/

void __fastcall AIScriptedInterface::OnScrCmd_GetGrenadeTossVel(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ?OnScrCmd_GetGrenadeTossVel@AIScriptedInterface@@QEBAXAEAUscrContext_t@@@Z(this, scrContext);
}

/*
==============
AIScriptedInterface::Grenade_CheckToss
==============
*/

int __fastcall AIScriptedInterface::Grenade_CheckToss(AIScriptedInterface *this, AIGrenadeCheckInfo *throwInfo, vec3_t *vPosOut, vec3_t *vVelOut)
{
  return ?Grenade_CheckToss@AIScriptedInterface@@QEBAHPEAUAIGrenadeCheckInfo@@AEATvec3_t@@1@Z(this, throwInfo, vPosOut, vVelOut);
}

/*
==============
AIScriptedInterface::HasGrenadeWeaponSet
==============
*/

bool __fastcall AIScriptedInterface::HasGrenadeWeaponSet(AIScriptedInterface *this)
{
  return ?HasGrenadeWeaponSet@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::DissociateGrenade
==============
*/
void AIScriptedInterface::DissociateGrenade(gentity_s *grenade)
{
  EntHandleDissociate(grenade);
  EntHandle::setEnt(&grenade->grenadeActivator, NULL);
}

/*
==============
AIScriptedInterface::GrenadeBounced
==============
*/
void AIScriptedInterface::GrenadeBounced(gentity_s *pGrenade, gentity_s *pHitEnt)
{
  entityType_s eType; 

  if ( !G_Missile_IsGrenade(pGrenade) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1097, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( pGrenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( pGrenade )") )
    __debugbreak();
  if ( !pHitEnt )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1942, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
  }
  eType = pHitEnt->s.eType;
  if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM || eType == ET_SCRIPTMOVER && pHitEnt->s.un.scriptMoverType == 1 )
  {
    *(_QWORD *)(&pGrenade->c.beam + 15) = 0i64;
    pGrenade->c.mover.angle.pos1.v[2] = 0.0;
    G_Missile_PredictGrenadeLandPos(pGrenade);
  }
}

/*
==============
AIScriptedInterface::GrenadeLauncher_CheckPos
==============
*/
_BOOL8 AIScriptedInterface::GrenadeLauncher_CheckPos(AIScriptedInterface *this, const vec3_t *vStandPos, const vec3_t *vOffset, const vec3_t *vTargetPos, float speed, vec3_t *vPosOut, vec3_t *vVelOut)
{
  const dvar_t *v11; 
  float v12; 
  float v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  float value; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  __int128 v22; 
  float v23; 
  float v27; 
  float c; 
  float s[3]; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 701, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  v11 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.value <= 0.0 )
    return 0i64;
  AIScriptedInterface::Grenade_GetTossFromPosition(this, vStandPos, vOffset, vPosOut);
  v12 = vTargetPos->v[1] - vPosOut->v[1];
  v14 = (float)(v12 * v12) + (float)((float)(vTargetPos->v[0] - vPosOut->v[0]) * (float)(vTargetPos->v[0] - vPosOut->v[0]));
  v13 = v14;
  if ( fsqrt(v14) == 0.0 )
    return 0i64;
  v15 = DCONST_DVARFLT_bg_lowGravity;
  v16 = vTargetPos->v[2] - vPosOut->v[2];
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  value = v15->current.value;
  v18 = speed * speed;
  v19 = (float)(v14 - (float)((float)((float)((float)(value * value) * v14) * v14) / (float)(v18 * v18))) + (float)((float)((float)((float)(value * 2.0) * v14) * v16) / (float)(speed * speed));
  if ( v19 < 0.0 )
    return 0i64;
  v20 = atanf_0((float)((float)(fsqrt(v19) - v13) * v18) / (float)(v13 * value));
  FastSinCos(v20, s, &c);
  v22 = LODWORD(vTargetPos->v[0]);
  v21 = vTargetPos->v[0] - vPosOut->v[0];
  vVelOut->v[0] = v21;
  v23 = vTargetPos->v[1] - vPosOut->v[1];
  *(float *)&v22 = fsqrt((float)(v21 * v21) + (float)(v23 * v23));
  _XMM2 = v22;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  *(float *)&_XMM2 = speed * s[0];
  v27 = (float)(v21 * (float)(1.0 / *(float *)&_XMM0)) * c;
  vVelOut->v[1] = (float)(v23 * (float)(1.0 / *(float *)&_XMM0)) * c;
  vVelOut->v[1] = speed * vVelOut->v[1];
  vVelOut->v[0] = speed * v27;
  vVelOut->v[2] = *(float *)&_XMM2;
  return Grenade_IsValidTrajectory(this->m_pAI, 2047, vPosOut, vVelOut, vTargetPos);
}

/*
==============
AIScriptedInterface::Grenade_AttemptEscape
==============
*/
bool AIScriptedInterface::Grenade_AttemptEscape(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  unsigned __int16 number; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  gentity_s *v7; 
  gentity_s *v8; 
  ai_scripted_t *v9; 
  sentient_s *sentient; 
  sentient_s *v11; 
  __int64 v12; 
  gentity_s *v13; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  float v16; 
  float v17; 
  const vec3_t *p_pos1; 
  CombatMode combatMode; 
  pathnode_t *CoverFromPoint; 
  pathnode_t *v21; 
  ai_scripted_t *v22; 
  bool result; 
  const tacpoint_t *ClosestPoint; 
  const tacpoint_t *v25; 
  const tacpoint_t *ClosestPointWithoutVisWithinRadius; 
  const tacpoint_t *ClosestPointWithVisWithinRadius; 
  AINavigator *pNavigator; 
  bool (__fastcall *IsAreaReachable)(AINavigator *, const bfx::AreaHandle *); 
  bfx::AreaHandle *AreaForPoint; 
  ai_scripted_t *v31; 
  const vec3_t *p_currentOrigin; 
  __int128 v33; 
  float v34; 
  AINavigator *v37; 
  bool (__fastcall *v38)(AINavigator *, const bfx::AreaHandle *); 
  bfx::AreaHandle *v39; 
  ai_scripted_t *v40; 
  tacpoint_t *pTargetPoint; 
  __int64 v42; 
  int v43; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 576, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  number = m_pAI->grenade.pGrenade.number;
  if ( !number )
    goto LABEL_56;
  v4 = number;
  v5 = number - 1;
  if ( v5 >= 0x800 )
  {
    v43 = 2048;
    LODWORD(pTargetPoint) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", pTargetPoint, v43) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v6 = v4 - 1;
  if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v6] )
  {
    LODWORD(v42) = m_pAI->grenade.pGrenade.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v42) )
      __debugbreak();
  }
  if ( !m_pAI->grenade.pGrenade.number )
  {
LABEL_56:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 577, ASSERT_TYPE_ASSERT, "(m_pAI->grenade.pGrenade.isDefined())", (const char *)&queryFormat, "m_pAI->grenade.pGrenade.isDefined()") )
      __debugbreak();
  }
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 578, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  v7 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
  if ( EntHandle::isDefined(&v7->parent) )
    v8 = EntHandle::ent(&v7->parent);
  else
    v8 = NULL;
  if ( !AICommonInterface::GetTargetEntity(this) )
  {
    v9 = this->m_pAI;
    if ( !v9->threat.ignoreExplosionEvents )
    {
      if ( v8 )
      {
        sentient = v8->sentient;
        if ( sentient )
        {
          v11 = v9->sentient;
          if ( sentient != v11 && Sentient_IsEnemyTeam(v11, sentient) && !this->CheckIgnore(this, this->m_pAI->sentient) )
          {
            LOBYTE(v12) = 21;
            this->GetPerfectInfo(this, v8->sentient, v12);
            Sentient_SetEnemy(this->m_pAI->sentient, v8, 1, 1);
          }
        }
      }
    }
  }
  v13 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &v13->s);
  v17 = (float)BG_ExplosionRadius(WeaponForEntity, 0) + 128.0;
  v16 = v17;
  if ( !G_Missile_IsGrenade(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 613, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( grenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( grenade )") )
    __debugbreak();
  p_pos1 = &v7->c.mover.angle.pos1;
  if ( AICommonInterface::HasPath(this) && !Nav_IsPointNearPath(this->m_pAI->pNavigator, &v7->c.mover.angle.pos1, v17, 1024.0) )
    return 1;
  combatMode = this->m_pAI->combat.combatMode;
  if ( combatMode != AI_COMBAT_NO_COVER )
  {
    CoverFromPoint = AIScriptedInterface::Cover_FindCoverFromPoint(this, &v7->c.mover.angle.pos1, v17, combatMode, v7);
    v21 = CoverFromPoint;
    if ( CoverFromPoint )
    {
      if ( this->m_pAI->sentient->pClaimedNode != CoverFromPoint )
      {
        pathnode_t::GetPos(CoverFromPoint, &pos);
        v22 = this->m_pAI;
        v22->btGoals[2].node = v21;
        pathnode_t::GetPos(v21, &v22->btGoals[2].pos);
        EntHandle::setEnt(&v22->btGoals[2].hEnt, NULL);
        EntHandle::setEnt(&v22->btGoals[2].hVolume, NULL);
        v22->btGoals[2].bValid = 1;
        this->ClearKeepClaimedNode(this);
        Sentient_ClaimNode(this->m_pAI->sentient, v21);
      }
      return 1;
    }
  }
  ClosestPoint = TacGraph_FindClosestPoint(p_pos1);
  v25 = ClosestPoint;
  if ( ClosestPoint )
  {
    ClosestPointWithoutVisWithinRadius = TacGraph_FindClosestPointWithoutVisWithinRadius(&this->m_pAI->ent->r.currentOrigin, 0.0, 1024.0, p_pos1, v17, ClosestPoint);
    ClosestPointWithVisWithinRadius = ClosestPointWithoutVisWithinRadius;
    if ( ClosestPointWithoutVisWithinRadius )
    {
      pNavigator = this->m_pAI->pNavigator;
      IsAreaReachable = pNavigator->IsAreaReachable;
      AreaForPoint = TacGraph_GetAreaForPoint(ClosestPointWithoutVisWithinRadius);
      if ( IsAreaReachable(pNavigator, AreaForPoint) )
      {
LABEL_52:
        v40 = this->m_pAI;
        TacGraph_GetApproxGroundPosForPoint(ClosestPointWithVisWithinRadius, &v40->btGoals[2].pos);
        v40->btGoals[2].radius = 24.0;
        v40->btGoals[2].node = NULL;
        EntHandle::setEnt(&v40->btGoals[2].hEnt, NULL);
        EntHandle::setEnt(&v40->btGoals[2].hVolume, NULL);
        result = 1;
        v40->btGoals[2].bValid = 1;
        return result;
      }
      ClosestPointWithVisWithinRadius = NULL;
    }
    v31 = this->m_pAI;
    p_currentOrigin = &v31->ent->r.currentOrigin;
    v33 = LODWORD(v31->ent->r.currentOrigin.v[1]);
    *(float *)&v33 = v31->ent->r.currentOrigin.v[1] - p_pos1->v[1];
    v34 = v31->ent->r.currentOrigin.v[2] - p_pos1->v[2];
    *(float *)&v33 = fsqrt((float)((float)(*(float *)&v33 * *(float *)&v33) + (float)((float)(p_currentOrigin->v[0] - p_pos1->v[0]) * (float)(p_currentOrigin->v[0] - p_pos1->v[0]))) + (float)(v34 * v34));
    _XMM1 = v33;
    __asm { vmaxss  xmm1, xmm1, xmm8; minRadius }
    if ( *(float *)&_XMM1 < (float)(v16 + 72.0) )
      ClosestPointWithVisWithinRadius = TacGraph_FindClosestPointWithVisWithinRadius(p_pos1, *(float *)&_XMM1, v16 + 72.0, 80.0, p_currentOrigin, v25);
    if ( ClosestPointWithVisWithinRadius )
    {
      v37 = this->m_pAI->pNavigator;
      v38 = v37->IsAreaReachable;
      v39 = TacGraph_GetAreaForPoint(ClosestPointWithVisWithinRadius);
      if ( v38(v37, v39) )
        goto LABEL_52;
    }
  }
  return 0;
}

/*
==============
AIScriptedInterface::Grenade_AttemptReturn
==============
*/
bool AIScriptedInterface::Grenade_AttemptReturn(AIScriptedInterface *this, float maxDistSq)
{
  ai_scripted_t *m_pAI; 
  unsigned __int16 number; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  gentity_s *v8; 
  ai_scripted_t *v9; 
  int v10; 
  gentity_s *v11; 
  sentient_s *sentient; 
  gentity_s *v13; 
  int v14; 
  ai_scripted_t *v15; 
  ai_scripted_t *v16; 
  gentity_s *ent; 
  ai_scripted_t *v18; 
  int nextthink; 
  __int64 v21; 
  __int64 v22; 
  AIGrenadeReturnThrowInfo info; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 517, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  number = m_pAI->grenade.pGrenade.number;
  if ( !number )
    goto LABEL_47;
  v5 = number;
  v6 = number - 1;
  if ( v6 >= 0x800 )
  {
    LODWORD(v21) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v7 = v5 - 1;
  if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v7] )
  {
    LODWORD(v22) = m_pAI->grenade.pGrenade.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v22) )
      __debugbreak();
  }
  if ( !m_pAI->grenade.pGrenade.number )
  {
LABEL_47:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 518, ASSERT_TYPE_ASSERT, "(m_pAI->grenade.pGrenade.isDefined())", (const char *)&queryFormat, "m_pAI->grenade.pGrenade.isDefined()") )
      __debugbreak();
  }
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 519, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  v8 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
  if ( !G_Missile_IsGrenade(v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 528, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( pGrenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( pGrenade )") )
    __debugbreak();
  v9 = this->m_pAI;
  v10 = 0;
  v11 = NULL;
  v9->grenade.pickupPos.v[0] = v8->c.mover.angle.pos1.v[0];
  v9->grenade.pickupPos.v[1] = v8->c.mover.angle.pos1.v[1];
  v9->grenade.pickupPos.v[2] = v8->c.mover.angle.pos1.v[2];
  if ( EntHandle::isDefined(&v8->parent) )
  {
    v11 = EntHandle::ent(&v8->parent);
    sentient = v11->sentient;
    if ( sentient )
    {
      if ( Sentient_IsEnemyTeam(sentient, this->m_pAI->sentient) )
        v10 = 1;
    }
  }
  v13 = NULL;
  if ( v10 )
    v13 = v11;
  v14 = AIScriptedInterface::Grenade_TryReturnThrows(this, v8, v13, &info);
  if ( v14 )
  {
    this->m_pAI->grenade.bGrenadeTossValid = 1;
    v15 = this->m_pAI;
    v15->grenade.vGrenadeTossPos.v[0] = v8->c.mover.angle.pos1.v[0];
    v15->grenade.vGrenadeTossPos.v[1] = v8->c.mover.angle.pos1.v[1];
    v15->grenade.vGrenadeTossPos.v[2] = v8->c.mover.angle.pos1.v[2];
    this->m_pAI->grenade.vGrenadeTossVel = info.vVelocity;
    v16 = this->m_pAI;
    if ( v16->grenade.bGrenadeTargetValid )
    {
      v16->grenade.vGrenadeTargetPos.v[0] = info.vThrowAtPos.v[0];
      v16->grenade.vGrenadeTargetPos.v[1] = info.vThrowAtPos.v[1];
      v16->grenade.vGrenadeTargetPos.v[2] = info.vThrowAtPos.v[2];
      v16 = this->m_pAI;
    }
    ent = v16->ent;
    if ( !EntHandle::isDefined(&v8->grenadeActivator) || EntHandle::ent(&v8->grenadeActivator) != ent )
    {
      if ( this->m_pAI->sentient->eTeam == TEAM_TWO || (v18 = this->m_pAI, !v10) )
      {
        nextthink = v8->nextthink;
        v18 = this->m_pAI;
        if ( nextthink - level.time < 3000 && (v8->c.missile.flags & 0x400) == 0 )
        {
          v8->c.missile.flags = 0;
          v8->nextthink = nextthink + 1000;
          v18 = this->m_pAI;
        }
      }
      EntHandle::setEnt(&v8->grenadeActivator, v18->ent);
    }
    LOBYTE(v14) = 1;
  }
  return v14;
}

/*
==============
AIScriptedInterface::Grenade_AttemptReturnTo
==============
*/
int AIScriptedInterface::Grenade_AttemptReturnTo(AIScriptedInterface *this, const vec3_t *vFrom, const vec3_t *vEnemyPos, vec3_t *vLand, vec3_t *vVelocity)
{
  float v9; 
  float v10; 
  float v11; 
  ai_scripted_t *m_pAI; 
  float v13; 
  float v14; 
  AIGrenadeCheckInfo throwInfo; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 334, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  v9 = vFrom->v[1];
  throwInfo.vStandPos.v[0] = vFrom->v[0];
  v10 = vFrom->v[2];
  throwInfo.methods[0] = scr_const.min_energy;
  throwInfo.methods[1] = scr_const.min_time;
  throwInfo.vStandPos.v[2] = v10;
  throwInfo.vStandPos.v[1] = v9;
  v11 = vEnemyPos->v[0];
  throwInfo.methods[2] = scr_const.max_time;
  m_pAI = this->m_pAI;
  throwInfo.vOffset.v[2] = FLOAT_57_0;
  v13 = vEnemyPos->v[1];
  throwInfo.vTargetPos.v[0] = v11;
  v14 = vEnemyPos->v[2];
  throwInfo.vTargetPos.v[1] = v13;
  throwInfo.vOffset.v[0] = 0.0;
  throwInfo.vOffset.v[1] = 0.0;
  throwInfo.vTargetPos.v[2] = v14;
  throwInfo.randomRange = 0.0;
  throwInfo.withBounce = 1;
  throwInfo.bRechecking = 1;
  throwInfo.methods[3] = 0;
  m_pAI->grenade.bGrenadeTargetValid = 1;
  return AIScriptedInterface::Grenade_CheckTossPos(this, &throwInfo, vLand, vVelocity);
}

/*
==============
AIScriptedInterface::Grenade_AttemptThrowAway
==============
*/
int AIScriptedInterface::Grenade_AttemptThrowAway(AIScriptedInterface *this, const vec3_t *vFrom, const vec3_t *vEnemyPos, vec3_t *vLand, vec3_t *vVelocity)
{
  float v9; 
  float v10; 
  ai_scripted_t *m_pAI; 
  float v12; 
  float v13; 
  AIGrenadeCheckInfo throwInfo; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 400, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  v9 = vFrom->v[1];
  throwInfo.vStandPos.v[0] = vFrom->v[0];
  throwInfo.vStandPos.v[2] = vFrom->v[2];
  throwInfo.vStandPos.v[1] = v9;
  v10 = vEnemyPos->v[0];
  throwInfo.methods[0] = scr_const.infinite_energy;
  m_pAI = this->m_pAI;
  throwInfo.vOffset.v[2] = FLOAT_57_0;
  v12 = vEnemyPos->v[1];
  throwInfo.vTargetPos.v[0] = v10;
  v13 = vEnemyPos->v[2];
  *(_QWORD *)&throwInfo.methods[1] = 0i64;
  throwInfo.methods[3] = 0;
  throwInfo.vTargetPos.v[1] = v12;
  throwInfo.vOffset.v[0] = 0.0;
  throwInfo.vOffset.v[1] = 0.0;
  throwInfo.vTargetPos.v[2] = v13;
  throwInfo.randomRange = 0.0;
  *(_QWORD *)&throwInfo.bRechecking = 1i64;
  m_pAI->grenade.bGrenadeTargetValid = 1;
  return AIScriptedInterface::Grenade_CheckTossPos(this, &throwInfo, vLand, vVelocity);
}

/*
==============
AIScriptedInterface::Grenade_CheckLaunch
==============
*/
_BOOL8 AIScriptedInterface::Grenade_CheckLaunch(AIScriptedInterface *this, const vec3_t *vStartPos, const vec3_t *vOffset, const vec3_t *vTargetPos, vec3_t *outTossVelocity)
{
  const Weapon *v9; 
  scrContext_t *v10; 
  const char *v11; 
  ai_scripted_t *m_pAI; 
  int v13; 
  scrContext_t *v14; 
  const char *v15; 
  vec3_t *v16; 
  int outSpeed; 
  float speed; 

  v9 = this->GetEquippedWeapon(this);
  if ( !v9->weaponIdx || v9->weaponIdx >= BG_GetNumWeapons() )
  {
    v10 = ScriptContext_Server();
    v11 = j_va("Grenade_CheckLaunch: invalid weapon for entity %d", (unsigned int)this->m_pAI->ent->s.number);
    Scr_Error(COM_ERR_3322, v10, v11);
  }
  m_pAI = this->m_pAI;
  m_pAI->grenade.vGrenadeTargetPos.v[0] = vTargetPos->v[0];
  m_pAI->grenade.vGrenadeTargetPos.v[1] = vTargetPos->v[1];
  m_pAI->grenade.vGrenadeTargetPos.v[2] = vTargetPos->v[2];
  G_Missile_GetScaledProjectileSpeed(this->m_pAI->ent, v9, 0, &outSpeed, (int *)&speed);
  v13 = outSpeed;
  if ( outSpeed <= 0 )
  {
    v14 = ScriptContext_Server();
    v15 = j_va("Grenade_CheckLaunch: grenade launcher speed must be > 0");
    Scr_Error(COM_ERR_3323, v14, v15);
    v13 = outSpeed;
  }
  v16 = outTossVelocity;
  this->m_pAI->grenade.bGrenadeTossValid = AIScriptedInterface::GrenadeLauncher_CheckPos(this, vStartPos, vOffset, &this->m_pAI->grenade.vGrenadeTargetPos, (float)v13, &this->m_pAI->grenade.vGrenadeTossPos, outTossVelocity) == 1;
  this->m_pAI->grenade.vGrenadeTossVel = *v16;
  return this->m_pAI->grenade.bGrenadeTossValid;
}

/*
==============
AIScriptedInterface::Grenade_CheckReturnThrowToEnemy
==============
*/
__int64 AIScriptedInterface::Grenade_CheckReturnThrowToEnemy(AIScriptedInterface *this, gentity_s *pGrenade, gentity_s *pGrenadeParent, AIGrenadeReturnThrowInfo *info)
{
  unsigned int v4; 
  sentient_info_t *SentientInfo; 
  const sentient_s *TargetSentient; 

  v4 = 0;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 365, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !pGrenade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 366, ASSERT_TYPE_ASSERT, "(pGrenade)", (const char *)&queryFormat, "pGrenade") )
    __debugbreak();
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 367, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( pGrenadeParent )
  {
    if ( !pGrenadeParent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 372, ASSERT_TYPE_ASSERT, "(pGrenadeParent->sentient)", (const char *)&queryFormat, "pGrenadeParent->sentient") )
      __debugbreak();
    SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, pGrenadeParent->sentient);
    if ( SentientInfo->lastKnownPosTime )
    {
      SentientInfo_GetLastKnownPos(SentientInfo, &info->vThrowAtPos);
      if ( AIScriptedInterface::Grenade_AttemptReturnTo(this, &this->m_pAI->grenade.pickupPos, &info->vThrowAtPos, &info->vLand, &info->vVelocity) )
        return 1i64;
    }
  }
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( TargetSentient )
  {
    Sentient_GetOrigin(TargetSentient, &info->vThrowAtPos);
    return (unsigned int)AIScriptedInterface::Grenade_AttemptReturnTo(this, &this->m_pAI->grenade.pickupPos, &info->vThrowAtPos, &info->vLand, &info->vVelocity);
  }
  return v4;
}

/*
==============
AIScriptedInterface::Grenade_CheckThrowAwayGrenade
==============
*/
int AIScriptedInterface::Grenade_CheckThrowAwayGrenade(AIScriptedInterface *this, gentity_s *pGrenade, AIGrenadeReturnThrowInfo *info)
{
  __int128 v3; 
  int v4; 
  ai_scripted_t *m_pAI; 
  pathnode_t *pClaimedNode; 
  gentity_s *ent; 
  float v11; 
  float fraction; 
  float v13; 
  float v14; 
  ai_scripted_t *v15; 
  float v16; 
  float v17; 
  ai_scripted_t *v18; 
  float v19; 
  float v20; 
  vec3_t start; 
  vec2_t forward; 
  vec3_t pos; 
  AIGrenadeCheckInfo throwInfo; 
  trace_t results; 
  _QWORD v27[3]; 

  v4 = 0;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 432, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !pGrenade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 433, ASSERT_TYPE_ASSERT, "(pGrenade)", (const char *)&queryFormat, "pGrenade") )
    __debugbreak();
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 434, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->grenade.bGrenadeTargetValid )
  {
    v4 = 1;
    info->vThrowAtPos.v[0] = m_pAI->grenade.vGrenadeTargetPos.v[0];
    info->vThrowAtPos.v[1] = m_pAI->grenade.vGrenadeTargetPos.v[1];
    info->vThrowAtPos.v[2] = m_pAI->grenade.vGrenadeTargetPos.v[2];
    m_pAI = this->m_pAI;
  }
  pClaimedNode = m_pAI->sentient->pClaimedNode;
  if ( !pClaimedNode )
    goto LABEL_19;
  *(_QWORD *)start.v = *(_QWORD *)m_pAI->grenade.pickupPos.v;
  start.v[2] = m_pAI->grenade.pickupPos.v[2] + 57.0;
  ent = m_pAI->ent;
  *(_OWORD *)&v27[1] = v3;
  info->vThrowAtPos.v[2] = ent->r.currentOrigin.v[2] + 400.0;
  pathnode_t::GetPos(pClaimedNode, &pos);
  pathnode_t::GetForward(pClaimedNode, &forward);
  v11 = 300.0 * forward.v[1];
  info->vThrowAtPos.v[0] = (float)(300.0 * forward.v[0]) + pos.v[0];
  info->vThrowAtPos.v[1] = v11 + pos.v[1];
  G_Main_TraceCapsule(&results, &start, &info->vThrowAtPos, &bounds_origin, this->m_pAI->ent->s.number, 41972113);
  Debug_DrawGrenadeTraceLine(&start, &info->vThrowAtPos, 0.0, &colorYellow, 1);
  fraction = results.fraction;
  if ( results.fraction < 0.5 )
  {
    v13 = 300.0 * forward.v[1];
    v14 = pos.v[1];
    info->vThrowAtPos.v[0] = pos.v[0] - (float)(300.0 * forward.v[0]);
    info->vThrowAtPos.v[1] = v14 - v13;
    G_Main_TraceCapsule(&results, &start, &info->vThrowAtPos, &bounds_origin, this->m_pAI->ent->s.number, 41972113);
    Debug_DrawGrenadeTraceLine(&start, &info->vThrowAtPos, 0.0, &colorYellow, 1);
    fraction = results.fraction;
  }
  if ( fraction >= 0.5 )
  {
    if ( fraction < 1.0 )
    {
      fraction = fraction * 0.89999998;
      results.fraction = fraction;
    }
    info->vThrowAtPos.v[0] = (float)((float)(info->vThrowAtPos.v[0] - start.v[0]) * fraction) + start.v[0];
    info->vThrowAtPos.v[1] = (float)((float)(info->vThrowAtPos.v[1] - start.v[1]) * fraction) + start.v[1];
    info->vThrowAtPos.v[2] = (float)((float)(info->vThrowAtPos.v[2] - start.v[2]) * fraction) + start.v[2];
  }
  else
  {
LABEL_19:
    if ( !v4 )
      return 0;
  }
  v15 = this->m_pAI;
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 400, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  v16 = v15->grenade.pickupPos.v[1];
  throwInfo.vStandPos.v[0] = v15->grenade.pickupPos.v[0];
  throwInfo.vStandPos.v[2] = v15->grenade.pickupPos.v[2];
  v17 = info->vThrowAtPos.v[0];
  throwInfo.methods[0] = scr_const.infinite_energy;
  v18 = this->m_pAI;
  throwInfo.vTargetPos.v[0] = v17;
  v19 = info->vThrowAtPos.v[2];
  throwInfo.vStandPos.v[1] = v16;
  v20 = info->vThrowAtPos.v[1];
  throwInfo.vTargetPos.v[2] = v19;
  throwInfo.vOffset.v[0] = 0.0;
  throwInfo.vOffset.v[1] = 0.0;
  throwInfo.vOffset.v[2] = FLOAT_57_0;
  throwInfo.vTargetPos.v[1] = v20;
  throwInfo.randomRange = 0.0;
  *(_QWORD *)&throwInfo.bRechecking = 1i64;
  *(_QWORD *)&throwInfo.methods[1] = 0i64;
  throwInfo.methods[3] = 0;
  v18->grenade.bGrenadeTargetValid = 1;
  return AIScriptedInterface::Grenade_CheckTossPos(this, &throwInfo, &info->vLand, &info->vVelocity);
}

/*
==============
AIScriptedInterface::Grenade_CheckToss
==============
*/
int AIScriptedInterface::Grenade_CheckToss(AIScriptedInterface *this, AIGrenadeCheckInfo *throwInfo, vec3_t *vPosOut, vec3_t *vVelOut)
{
  const sentient_s *TargetSentient; 
  const dvar_t *v9; 
  float v10; 
  float v11; 
  ai_scripted_t *m_pAI; 
  vec3_t vVelOuta; 
  vec3_t vOriginOut; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 91, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 92, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !throwInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 93, ASSERT_TYPE_ASSERT, "(throwInfo)", (const char *)&queryFormat, "throwInfo") )
    __debugbreak();
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( !TargetSentient )
    return 0;
  v9 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.value <= 0.0 || EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) && !throwInfo->bRechecking )
    return 0;
  Sentient_GetOrigin(TargetSentient, &vOriginOut);
  Sentient_GetVelocity(TargetSentient, &vVelOuta);
  v10 = vVelOuta.v[0] + vOriginOut.v[0];
  v11 = vVelOuta.v[1] + vOriginOut.v[1];
  throwInfo->vTargetPos.v[2] = vVelOuta.v[2] + vOriginOut.v[2];
  throwInfo->vTargetPos.v[0] = v10;
  throwInfo->vTargetPos.v[1] = v11;
  m_pAI = this->m_pAI;
  m_pAI->grenade.vGrenadeTargetPos.v[0] = v10;
  m_pAI->grenade.vGrenadeTargetPos.v[1] = throwInfo->vTargetPos.v[1];
  m_pAI->grenade.vGrenadeTargetPos.v[2] = throwInfo->vTargetPos.v[2];
  this->m_pAI->grenade.bGrenadeTargetValid = 1;
  return AIScriptedInterface::Grenade_CheckTossPos(this, throwInfo, vPosOut, vVelOut);
}

/*
==============
AIScriptedInterface::Grenade_CheckTossPos
==============
*/
_BOOL8 AIScriptedInterface::Grenade_CheckTossPos(AIScriptedInterface *this, const AIGrenadeCheckInfo *throwInfo, vec3_t *vPosOut, vec3_t *vVelOut)
{
  const dvar_t *v8; 
  float randomRange; 
  float v10; 
  const Weapon *Weapon; 
  bool detailTrace; 
  int v13; 
  const vec4_t *v14; 
  BOOL v15; 
  ai_scripted_t *m_pAI; 
  int number; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  scr_string_t *i; 
  scr_string_t v22; 
  bool v23; 
  const dvar_t *v24; 
  const char *v26; 
  const char *v27; 
  __int64 passEntityNum; 
  __int64 passEntityNum2; 
  bool TossPositionsFromHints; 
  scrContext_t *scrContext; 
  vec3_t vLand; 
  vec3_t out; 
  vec3_t in; 
  trace_t results; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 140, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !throwInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 141, ASSERT_TYPE_ASSERT, "(throwInfo)", (const char *)&queryFormat, "throwInfo") )
    __debugbreak();
  v8 = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.value > 0.0 && (!EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) || throwInfo->bRechecking) )
  {
    randomRange = throwInfo->randomRange;
    v10 = throwInfo->vTargetPos.v[1];
    out.v[0] = throwInfo->vTargetPos.v[0];
    out.v[2] = throwInfo->vTargetPos.v[2];
    out.v[1] = v10;
    if ( randomRange != 0.0 )
    {
      VecRandomRange_vec3_t_(&throwInfo->vTargetPos, &out, randomRange, 2);
      this->m_pAI->grenade.vGrenadeTargetPos = out;
    }
    AIScriptedInterface::Grenade_GetTossFromPosition(this, &throwInfo->vStandPos, &throwInfo->vOffset, vPosOut);
    scrContext = ScriptContext_Server();
    Weapon = GScr_Weapon_GetWeapon(scrContext, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
    detailTrace = BG_WeaponRadiusDamageDetailTrace(Weapon, 0);
    v13 = 2047;
    G_Missile_Trace(NULL, &results, vPosOut, &out, &bounds_origin, 2047, 2047, 2065, detailTrace);
    TossPositionsFromHints = 0;
    if ( results.fraction == 1.0 )
    {
      if ( throwInfo->withBounce )
      {
        Grenade_GetTossPositions(vPosOut, &out, &vLand, Weapon);
        v14 = &colorRed;
      }
      else
      {
        v14 = &colorRed;
        vLand = out;
      }
    }
    else if ( level.grenadeHintCount && (TossPositionsFromHints = Grenade_GetTossPositionsFromHints(vPosOut, &throwInfo->vTargetPos, &in)) )
    {
      VecRandomRange_vec3_t_(&in, &vLand, 15.0, 3);
      v14 = &colorCyan;
    }
    else
    {
      v14 = &colorBlue;
      vLand = out;
    }
    Debug_DrawGrenadeTraceLine(vPosOut, &vLand, 0.0, v14, 0);
    if ( (float)((float)((float)((float)(vLand.v[1] - vPosOut->v[1]) * (float)(vLand.v[1] - vPosOut->v[1])) + (float)((float)(vLand.v[0] - vPosOut->v[0]) * (float)(vLand.v[0] - vPosOut->v[0]))) + (float)((float)(vLand.v[2] - vPosOut->v[2]) * (float)(vLand.v[2] - vPosOut->v[2]))) != 0.0 )
    {
      v15 = 0;
      if ( EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) )
      {
        m_pAI = this->m_pAI;
        number = m_pAI->grenade.pGrenade.number;
        if ( (unsigned int)(number - 1) >= 0x7FF )
        {
          LODWORD(passEntityNum2) = 2047;
          LODWORD(passEntityNum) = number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", passEntityNum, passEntityNum2) )
            __debugbreak();
        }
        v18 = m_pAI->grenade.pGrenade.number;
        if ( (unsigned int)(v18 - 1) >= 0x800 )
        {
          LODWORD(passEntityNum2) = 2048;
          LODWORD(passEntityNum) = v18 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", passEntityNum, passEntityNum2) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v19 = v18 - 1;
        if ( g_entities[v19].r.isInUse != g_entityIsInUse[v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v19] )
        {
          LODWORD(passEntityNum2) = m_pAI->grenade.pGrenade.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", passEntityNum2) )
            __debugbreak();
        }
        v13 = (__int16)(m_pAI->grenade.pGrenade.number - 1);
      }
      v20 = 0;
      for ( i = throwInfo->methods; ; ++i )
      {
        v22 = *i;
        if ( !*i )
          return v15;
        if ( v22 == scr_const.min_energy )
        {
          v23 = Grenade_CheckMinimumEnergyToss(this->m_pAI, v13, vPosOut, &vLand, vVelOut);
          goto LABEL_52;
        }
        if ( v22 == scr_const.min_time )
          break;
        if ( v22 == scr_const.max_time )
        {
          v23 = Grenade_CheckMaximumEnergyToss(this->m_pAI, v13, vPosOut, &vLand, 1, vVelOut);
          goto LABEL_52;
        }
        if ( v22 == scr_const.infinite_energy )
        {
          v23 = Grenade_CheckInfiniteEnergyToss(this->m_pAI, v13, vPosOut, &vLand, vVelOut);
          goto LABEL_52;
        }
        v26 = SL_ConvertToString(v22);
        v27 = j_va("checkGrenadeThrow: method must be 'min energy', 'min time', or 'max time' - value passed in was %s", v26);
        Scr_Error(COM_ERR_3320, scrContext, v27);
LABEL_61:
        if ( ++v20 >= 4 )
          return v15;
      }
      v23 = Grenade_CheckMaximumEnergyToss(this->m_pAI, v13, vPosOut, &vLand, 0, vVelOut);
LABEL_52:
      v15 = v23;
      if ( v23 )
      {
        Scr_SetString(&this->m_pAI->grenade.GrenadeTossMethod, throwInfo->methods[v20]);
        this->m_pAI->grenade.grenadeTossWithBounce = throwInfo->withBounce == 1;
        v24 = DVARINT_g_drawGrenadeHints;
        if ( !DVARINT_g_drawGrenadeHints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_drawGrenadeHints") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        if ( v24->current.integer > 0 )
        {
          G_DebugLineWithDuration(vPosOut, &out, &colorWhite, 0, 100);
          G_DebugCircle(&vLand, 3.0, &colorWhite, 1, 0, 100);
          if ( TossPositionsFromHints )
            G_DebugCircle(&in, 6.0, &colorCyan, 1, 0, 100);
        }
        return v15;
      }
      goto LABEL_61;
    }
  }
  return 0i64;
}

/*
==============
AIScriptedInterface::Grenade_DropIfHeld
==============
*/
void AIScriptedInterface::Grenade_DropIfHeld(AIScriptedInterface *this)
{
  EntHandle *p_grenadeActivator; 
  gentity_s *ent; 
  gentity_s *v4; 
  EntityTagInfo *tagInfo; 
  const scrContext_t *v6; 
  const Weapon *Weapon; 
  GMissile *MissileSystem; 
  int time; 
  gentity_s *v10; 
  int number; 
  GWeaponMap *Instance; 
  gentity_s *v13; 
  GEntityMissileComponentData v14; 
  GEntityData v15; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1111, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) )
  {
    p_grenadeActivator = &EntHandle::ent(&this->m_pAI->grenade.pGrenade)->grenadeActivator;
    ent = this->m_pAI->ent;
    if ( EntHandle::isDefined(p_grenadeActivator) )
    {
      if ( EntHandle::ent(p_grenadeActivator) == ent )
      {
        v4 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1224, ASSERT_TYPE_ASSERT, "(grenade)", (const char *)&queryFormat, "grenade") )
          __debugbreak();
        tagInfo = v4->tagInfo;
        if ( tagInfo )
        {
          if ( !tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1228, ASSERT_TYPE_ASSERT, "(grenade->tagInfo->parent)", (const char *)&queryFormat, "grenade->tagInfo->parent") )
            __debugbreak();
          if ( ((v4->tagInfo->parent->s.eType - 17) & 0xFFFD) == 0 )
          {
            this->Grenade_Detach(this);
            v6 = ScriptContext_Server();
            Weapon = GScr_Weapon_GetWeapon(v6, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
            GEntityMissileComponentData::GEntityMissileComponentData(&v14, v4);
            GEntityData::GEntityData(&v15, v4, &v14);
            MissileSystem = GMissile::GetMissileSystem();
            if ( !MissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1128, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
              __debugbreak();
            time = level.time;
            v10 = this->m_pAI->ent;
            if ( v10 )
              number = v10->s.number;
            else
              number = 2047;
            Instance = GWeaponMap::GetInstance();
            BgMissile::InitGrenadeEntity(MissileSystem, Instance, &v15, number, time);
            BgMissile::InitGrenadeMovement(MissileSystem, &v15, &v4->r.currentOrigin, &vec3_origin, Weapon, 1, level.time);
            SV_LinkEntity(v4);
          }
        }
        v13 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
        EntHandle::setEnt(&v13->grenadeActivator, NULL);
      }
    }
  }
}

/*
==============
AIScriptedInterface::Grenade_GetFuseEndTime
==============
*/
__int64 AIScriptedInterface::Grenade_GetFuseEndTime(AIScriptedInterface *this)
{
  if ( EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) && EntHandle::ent(&this->m_pAI->grenade.pGrenade)->s.eType == ET_MISSILE )
    return (unsigned int)EntHandle::ent(&this->m_pAI->grenade.pGrenade)->nextthink;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
AIScriptedInterface::Grenade_GetTossFromPosition
==============
*/
void AIScriptedInterface::Grenade_GetTossFromPosition(AIScriptedInterface *this, const vec3_t *vStandPos, const vec3_t *vOffset, vec3_t *vFrom)
{
  gentity_s *v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  tmat33_t<vec3_t> axis; 
  char v15; 

  v7 = this->GetEntity(this);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 75, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  AnglesToAxis(&v7->r.currentAngles, &axis);
  if ( vOffset == (const vec3_t *)&v15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v8 = vOffset->v[1];
  v9 = vOffset->v[0];
  v10 = vOffset->v[2];
  v11 = (float)(vOffset->v[0] * axis.m[0].v[1]) + (float)(v8 * axis.m[1].v[1]);
  v12 = v8 * axis.m[1].v[2];
  vFrom->v[0] = (float)((float)((float)(vOffset->v[0] * axis.m[0].v[0]) + (float)(v8 * axis.m[1].v[0])) + (float)(v10 * axis.m[2].v[0])) + vStandPos->v[0];
  v13 = v9 * axis.m[0].v[2];
  vFrom->v[1] = (float)(v11 + (float)(v10 * axis.m[2].v[1])) + vStandPos->v[1];
  vFrom->v[2] = (float)((float)(v12 + v13) + (float)(v10 * axis.m[2].v[2])) + vStandPos->v[2];
}

/*
==============
AIScriptedInterface::Grenade_GetTossMethods
==============
*/
void AIScriptedInterface::Grenade_GetTossMethods(scrContext_t *scrContext, AIGrenadeCheckInfo *throwInfo, int firstParamIndex)
{
  signed int v6; 
  int v7; 
  __int64 v8; 
  scr_string_t *methods; 
  scr_string_t ConstString; 

  v6 = Scr_GetNumParam(scrContext) - firstParamIndex;
  if ( v6 >= 4 )
  {
    Scr_Error(COM_ERR_3324, scrContext, "Too many grenade throw methods\n");
    v6 = 4;
  }
  v7 = 0;
  v8 = v6;
  if ( v6 <= 0 )
    goto LABEL_7;
  methods = throwInfo->methods;
  do
  {
    ConstString = Scr_GetConstString(scrContext, v7 + firstParamIndex);
    ++v7;
    *methods++ = ConstString;
    --v8;
  }
  while ( v8 );
  if ( v7 < 4 )
LABEL_7:
    throwInfo->methods[v7] = 0;
}

/*
==============
AIScriptedInterface::Grenade_IsGrenadeThrowable
==============
*/
bool AIScriptedInterface::Grenade_IsGrenadeThrowable(AIScriptedInterface *this, gentity_s *pGrenade)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 

  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &pGrenade->s);
  return BG_GetWeaponType(WeaponForEntity, 0) == WEAPTYPE_GRENADE && BG_WeaponStickinessType(WeaponForEntity, 0) == WEAPSTICKINESS_NONE;
}

/*
==============
AIScriptedInterface::Grenade_IsPointSafe
==============
*/
_BOOL8 AIScriptedInterface::Grenade_IsPointSafe(AIScriptedInterface *this, const vec3_t *vPoint)
{
  ai_scripted_t *m_pAI; 
  unsigned __int16 number; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  gentity_s *v9; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  float v12; 
  float v13; 
  bool detailTrace; 
  unsigned __int8 *priorityMap; 
  GCombat *v16; 
  unsigned int radius; 
  __int64 coneAngleCos; 
  int coneAngleCosa; 

  m_pAI = this->m_pAI;
  number = m_pAI->grenade.pGrenade.number;
  if ( !number )
    goto LABEL_29;
  v6 = number;
  v7 = number - 1;
  if ( v7 >= 0x800 )
  {
    coneAngleCosa = 2048;
    radius = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", radius, coneAngleCosa) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v8 = v6 - 1;
  if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v8] )
  {
    LODWORD(coneAngleCos) = m_pAI->grenade.pGrenade.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", coneAngleCos) )
      __debugbreak();
  }
  if ( !m_pAI->grenade.pGrenade.number )
  {
LABEL_29:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 41, ASSERT_TYPE_ASSERT, "(m_pAI->grenade.pGrenade.isDefined())", (const char *)&queryFormat, "m_pAI->grenade.pGrenade.isDefined()") )
      __debugbreak();
  }
  v9 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &v9->s);
  v12 = (float)BG_ExplosionRadius(WeaponForEntity, 0);
  if ( BG_ProjExplosionType(WeaponForEntity, 0) == WEAPPROJEXP_FLASHBANG )
    return 1i64;
  v13 = v12 + 128.0;
  detailTrace = BG_WeaponRadiusDamageDetailTrace(WeaponForEntity, 0);
  priorityMap = BG_GetWeaponPriorityMap(WeaponForEntity, 0);
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  v16 = GCombat::ms_gCombatSystem;
  if ( !G_Missile_IsGrenade(v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 55, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( grenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( grenade )") )
    __debugbreak();
  return !GCombat::CanRadiusDamageFromPos(v16, this->m_pAI->ent, vPoint, v9, &v9->c.mover.angle.pos1, v13, 1.0, NULL, 0.0, 1, 9441297, detailTrace, priorityMap);
}

/*
==============
AIScriptedInterface::Grenade_IsSafeTarget
==============
*/
__int64 AIScriptedInterface::Grenade_IsSafeTarget(AIScriptedInterface *this, const vec3_t *vTargetPos, float radius)
{
  float v5; 
  const scrContext_t *v6; 
  const Weapon *Weapon; 
  bool IsAlternate; 
  float v9; 
  unsigned __int64 eTeam; 
  sentient_s *v11; 
  bitarray<224> iTeamFlags; 
  vec3_t vOriginOut; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 258, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 259, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( radius <= 0.0 )
  {
    v6 = ScriptContext_Server();
    Weapon = GScr_Weapon_GetWeapon(v6, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
    IsAlternate = GScr_Weapon_IsAlternate(v6, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
    v9 = (float)BG_ExplosionRadius(Weapon, IsAlternate) + 128.0;
    v5 = v9 * v9;
  }
  else
  {
    v5 = radius * radius;
  }
  eTeam = (unsigned int)this->m_pAI->sentient->eTeam;
  memset(&iTeamFlags, 0, sizeof(iTeamFlags));
  if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
    __debugbreak();
  iTeamFlags.array[eTeam >> 5] |= 0x80000000 >> (eTeam & 0x1F);
  v11 = Sentient_FirstSentient(&iTeamFlags);
  if ( !v11 )
    return 1i64;
  while ( 1 )
  {
    if ( v11->ent )
    {
      if ( v11->ent->health > 0 )
      {
        Sentient_GetOrigin(v11, &vOriginOut);
        if ( (float)((float)((float)((float)(vTargetPos->v[1] - vOriginOut.v[1]) * (float)(vTargetPos->v[1] - vOriginOut.v[1])) + (float)((float)(vTargetPos->v[0] - vOriginOut.v[0]) * (float)(vTargetPos->v[0] - vOriginOut.v[0]))) + (float)((float)(vTargetPos->v[2] - vOriginOut.v[2]) * (float)(vTargetPos->v[2] - vOriginOut.v[2]))) <= v5 )
          break;
      }
    }
    v11 = Sentient_NextSentient(v11, &iTeamFlags);
    if ( !v11 )
      return 1i64;
  }
  return 0i64;
}

/*
==============
AIScriptedInterface::Grenade_Ping
==============
*/
void AIScriptedInterface::Grenade_Ping(AIScriptedInterface *this, gentity_s *pGrenade, const vec3_t *origin)
{
  double v5; 
  AINavigator *pNavigator; 
  __int64 v7; 
  ai_scripted_t *m_pAI; 
  bool v9; 
  ai_scripted_t *v10; 
  unsigned __int16 number; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  gentity_s *v15; 
  bool ShouldIgnore; 
  ai_scripted_t *v17; 
  EntHandle *p_pGrenade; 
  __int64 v19; 
  __int64 v20; 
  char v21[8]; 
  float v22; 
  float v23; 
  float v24; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1025, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !pGrenade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1026, ASSERT_TYPE_ASSERT, "(pGrenade)", (const char *)&queryFormat, "pGrenade") )
    __debugbreak();
  if ( this->m_pAI->grenade.grenadeAwareness != 0.0 )
  {
    if ( !AICommonInterface::GetTargetEntity(this) || (v5 = G_random(), *(float *)&v5 <= this->m_pAI->grenade.grenadeAwareness) )
    {
      this->EnterAlertState(this);
      pNavigator = this->m_pAI->pNavigator;
      if ( pNavigator->m_bMultiGoalPath && pNavigator->HasPath(pNavigator) )
      {
        LOBYTE(v7) = -1;
        this->m_pAI->pNavigator->GetNextMultiGoalPathGoal(this->m_pAI->pNavigator, v7, (vec3_t *)&v22, (bool *)v21);
        m_pAI = this->m_pAI;
        if ( (float)((float)((float)((float)(v23 - m_pAI->ent->r.currentOrigin.v[1]) * (float)(v23 - m_pAI->ent->r.currentOrigin.v[1])) + (float)((float)(v22 - m_pAI->ent->r.currentOrigin.v[0]) * (float)(v22 - m_pAI->ent->r.currentOrigin.v[0]))) + (float)((float)(v24 - m_pAI->ent->r.currentOrigin.v[2]) * (float)(v24 - m_pAI->ent->r.currentOrigin.v[2]))) < 65536.0 )
          return;
      }
      else
      {
        m_pAI = this->m_pAI;
      }
      v9 = EntHandle::isDefined(&m_pAI->grenade.pGrenade) != 0;
      if ( G_Missile_IsGrenade(pGrenade) )
      {
        EntHandle::setEnt(&this->m_pAI->grenade.pGrenade, pGrenade);
        v10 = this->m_pAI;
        number = v10->grenade.pGrenade.number;
        if ( !number )
          goto LABEL_45;
        v12 = number;
        v13 = number - 1;
        if ( v13 >= 0x800 )
        {
          LODWORD(v19) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, 2048) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v14 = v12 - 1;
        if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v14] )
        {
          LODWORD(v20) = v10->grenade.pGrenade.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v20) )
            __debugbreak();
        }
        if ( !v10->grenade.pGrenade.number )
        {
LABEL_45:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1052, ASSERT_TYPE_ASSERT, "(m_pAI->grenade.pGrenade.isDefined())", (const char *)&queryFormat, "m_pAI->grenade.pGrenade.isDefined()") )
            __debugbreak();
        }
      }
      if ( EntHandle::isDefined(&pGrenade->parent) )
      {
        if ( EntHandle::ent(&pGrenade->parent)->sentient )
        {
          v15 = EntHandle::ent(&pGrenade->parent);
          if ( Sentient_IsEnemyTeam(this->m_pAI->sentient, v15->sentient) )
          {
            GScr_AddEntity(pGrenade);
            GScr_Notify(this->m_pAI->ent, scr_const.grenadedanger, 1u);
          }
        }
      }
      if ( G_Missile_IsGrenade(pGrenade) )
      {
        G_Missile_PredictGrenadeLandPos(pGrenade);
        ShouldIgnore = AIScriptedInterface::Grenade_ShouldIgnore(this, pGrenade, v9);
        v17 = this->m_pAI;
        if ( ShouldIgnore )
        {
          p_pGrenade = &v17->grenade.pGrenade;
LABEL_42:
          EntHandle::setEnt(p_pGrenade, NULL);
          return;
        }
        if ( !v17->grenade.grenadeEvadeActive && AIScriptedInterface::Grenade_IsPointSafe(this, &v17->ent->r.currentOrigin) )
        {
          p_pGrenade = &this->m_pAI->grenade.pGrenade;
          goto LABEL_42;
        }
      }
    }
  }
}

/*
==============
AIScriptedInterface::Grenade_ShouldIgnore
==============
*/
bool AIScriptedInterface::Grenade_ShouldIgnore(AIScriptedInterface *this, gentity_s *grenade, bool bWasPreviouslyAware)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  ai_scripted_t *m_pAI; 
  float v9; 
  float v10; 
  __int128 v11; 
  float v15; 
  gentity_s *v16; 
  ai_scripted_t *v17; 
  float v18; 
  float v19; 
  float v20; 
  vec3_t vLookaheadDir; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 967, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 968, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !grenade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 969, ASSERT_TYPE_ASSERT, "(grenade)", (const char *)&queryFormat, "grenade") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &grenade->s);
  if ( BG_WeaponDef(WeaponForEntity, 0)->offhandClass != OFFHAND_CLASS_SMOKE_GRENADE && grenade->targetname != scr_const.car_grenade )
  {
    if ( !AICommonInterface::HasPath(this) || AICommonInterface::PointAtGoal(this, &this->m_pAI->ent->r.currentOrigin, &this->m_pAI->scriptGoal) )
      return 0;
    if ( !G_Missile_IsGrenade(grenade) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 987, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( grenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( grenade )") )
      __debugbreak();
    m_pAI = this->m_pAI;
    v9 = grenade->c.mover.angle.pos1.v[0] - m_pAI->ent->r.currentOrigin.v[0];
    v11 = LODWORD(grenade->c.mover.angle.pos1.v[1]);
    v10 = grenade->c.mover.angle.pos1.v[1] - m_pAI->ent->r.currentOrigin.v[1];
    *(float *)&v11 = fsqrt((float)(v10 * v10) + (float)(v9 * v9));
    _XMM3 = v11;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    AIScriptedInterface::GetPathLookaheadDir(this, &vLookaheadDir);
    v15 = (float)((float)(v10 * (float)(1.0 / *(float *)&_XMM0)) * vLookaheadDir.v[1]) + (float)((float)(v9 * (float)(1.0 / *(float *)&_XMM0)) * vLookaheadDir.v[0]);
    if ( bWasPreviouslyAware || v15 >= 0.0 )
    {
      if ( !EntHandle::isDefined(&grenade->parent) || !EntHandle::ent(&grenade->parent)->sentient || (v16 = EntHandle::ent(&grenade->parent), Sentient_IsEnemyTeam(this->m_pAI->sentient, v16->sentient)) )
      {
        if ( v15 > 0.69999999 )
        {
          v17 = this->m_pAI;
          v18 = v17->ent->r.currentOrigin.v[0] - grenade->c.mover.angle.pos1.v[0];
          v19 = v17->ent->r.currentOrigin.v[1] - grenade->c.mover.angle.pos1.v[1];
          v20 = v17->ent->r.currentOrigin.v[2] - grenade->c.mover.angle.pos1.v[2];
          return (float)((float)((float)(v19 * v19) + (float)(v18 * v18)) + (float)(v20 * v20)) > 1024.0;
        }
      }
      return 0;
    }
  }
  return 1;
}

/*
==============
AIScriptedInterface::Grenade_ShouldReturnThrow
==============
*/
char AIScriptedInterface::Grenade_ShouldReturnThrow(AIScriptedInterface *this)
{
  gentity_s *v2; 
  ai_scripted_t *m_pAI; 
  float v4; 
  float v5; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  double v8; 

  v2 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 896, ASSERT_TYPE_ASSERT, "(pGrenade)", (const char *)&queryFormat, "pGrenade") )
    __debugbreak();
  if ( this->m_pAI->combat.noGrenadeReturnThrow || EntHandle::isDefined(&v2->grenadeActivator) || this->m_pAI->grenade.bGrenadeTossValid || (v2->c.missile.flags & 0x800) != 0 )
    return 0;
  if ( !G_Missile_IsGrenade(v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 903, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( pGrenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( pGrenade )") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v4 = v2->c.mover.angle.pos1.v[1] - m_pAI->ent->r.currentOrigin.v[1];
  v5 = v2->c.mover.angle.pos1.v[0] - m_pAI->ent->r.currentOrigin.v[0];
  if ( (float)((float)(v4 * v4) + (float)(v5 * v5)) > 22500.0 )
    return 0;
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &v2->s);
  if ( BG_GetWeaponType(WeaponForEntity, 0) != WEAPTYPE_GRENADE || BG_WeaponStickinessType(WeaponForEntity, 0) )
    return 0;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 314, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->fixedNode && (v8 = G_random(), *(float *)&v8 > this->m_pAI->grenade.grenadeReturnThrowChance) )
    return 0;
  else
    return 1;
}

/*
==============
AIScriptedInterface::Grenade_ShouldTryToReturnThrow
==============
*/
bool AIScriptedInterface::Grenade_ShouldTryToReturnThrow(AIScriptedInterface *this)
{
  double v2; 
  bool result; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 314, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  result = 1;
  if ( !this->m_pAI->fixedNode )
  {
    v2 = G_random();
    if ( *(float *)&v2 > this->m_pAI->grenade.grenadeReturnThrowChance )
      return 0;
  }
  return result;
}

/*
==============
AIScriptedInterface::Grenade_Throw
==============
*/
gentity_s *AIScriptedInterface::Grenade_Throw(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  scrContext_t *v4; 
  int v5; 
  ai_scripted_t *v6; 
  ai_scripted_t *v7; 
  int WorldTagPos; 
  ai_scripted_t *v9; 
  const DObj *ServerDObjForEnt; 
  const char *Name; 
  unsigned int number; 
  const char *v13; 
  const char *v14; 
  const Weapon *Weapon; 
  bool IsAlternate; 
  gentity_s *v17; 
  EntHandle *p_parent; 
  gentity_s *v19; 
  gentity_s *v20; 
  GMissile *MissileSystem; 
  int time; 
  gentity_s *ent; 
  int v24; 
  GWeaponMap *Instance; 
  gentity_s *v26; 
  gentity_s *v27; 
  int gameTime; 
  int fuseTime; 
  ai_scripted_t *v30; 
  unsigned __int8 grenadeAmmo; 
  GEntityMissileComponentData v32; 
  vec3_t vVelOut; 
  vec3_t vPosOut; 
  vec3_t outPos; 
  GEntityData throwInfo; 

  m_pAI = this->m_pAI;
  if ( m_pAI->ent->health <= 0 )
  {
    m_pAI->grenade.bGrenadeTossValid = 0;
    Scr_SetString(&this->m_pAI->grenade.GrenadeTossMethod, (scr_string_t)0);
    return 0i64;
  }
  v4 = ScriptContext_Server();
  if ( !EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) && !this->m_pAI->grenade.bGrenadeTossValid )
    Scr_ErrorWithDialogMessage(v4, "cannot call 'throwGrenade' before calling 'checkGrenadeThrow' except in grenade return scripts", (const char *)&queryFormat.fmt + 3);
  v5 = 0;
  v6 = this->m_pAI;
  v7 = v6;
  if ( v6->grenade.bGrenadeTargetValid )
  {
    WorldTagPos = G_Utils_DObjGetWorldTagPos(v6->ent, scr_const.tag_accessory_right, &outPos);
    v9 = this->m_pAI;
    if ( !WorldTagPos )
    {
      ServerDObjForEnt = Com_GetServerDObjForEnt(v9->ent);
      Name = DObjGetName(ServerDObjForEnt);
      number = this->m_pAI->ent->s.number;
      v13 = SL_ConvertToString(scr_const.tag_accessory_right);
      v14 = j_va("Missing tag [%s] on entity [%d] (%s)\n", v13, number, Name);
      Scr_Error(COM_ERR_3321, v4, v14);
      return 0i64;
    }
    *(float *)&throwInfo.__vftable = outPos.v[0];
    *((float *)&throwInfo.__vftable + 1) = outPos.v[1];
    *(float *)&throwInfo.m_origin = outPos.v[2];
    *((float *)&throwInfo.m_origin + 1) = 0.0;
    *(float *)&throwInfo.m_angles = 0.0;
    *((float *)&throwInfo.m_angles + 1) = 0.0;
    throwInfo.m_box = *(Bounds **)v9->grenade.vGrenadeTargetPos.v;
    *(float *)&throwInfo.m_clipMask = v9->grenade.vGrenadeTargetPos.v[2];
    *((float *)&throwInfo.m_clipMask + 1) = 0.0;
    throwInfo.m_parentEntNum = 1;
    throwInfo.m_ownerEntNum = v9->grenade.grenadeTossWithBounce;
    throwInfo.m_entityState = (entityState_t *)(unsigned int)v9->grenade.GrenadeTossMethod;
    v5 = AIScriptedInterface::Grenade_CheckTossPos(this, (const AIGrenadeCheckInfo *)&throwInfo, &vPosOut, &vVelOut);
    v6 = this->m_pAI;
    v7 = v6;
  }
  if ( !v5 )
  {
    vPosOut = v7->grenade.vGrenadeTossPos;
    vVelOut = v7->grenade.vGrenadeTossVel;
    v6 = v7;
  }
  Weapon = GScr_Weapon_GetWeapon(v4, (const scr_weapon_t)v6->grenade.grenadeWeapon);
  IsAlternate = GScr_Weapon_IsAlternate(v4, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
  if ( !BG_WeaponDef(Weapon, IsAlternate) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 818, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) && (v17 = EntHandle::ent(&this->m_pAI->grenade.pGrenade)) != NULL && (p_parent = &v17->parent, EntHandle::isDefined(&v17->parent)) && EntHandle::ent(p_parent) == this->m_pAI->ent )
  {
    this->Grenade_Detach(this);
    v19 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
    GEntityMissileComponentData::GEntityMissileComponentData(&v32, v19);
    v20 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
    GEntityData::GEntityData(&throwInfo, v20, &v32);
    MissileSystem = GMissile::GetMissileSystem();
    if ( !MissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 831, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
      __debugbreak();
    time = level.time;
    ent = this->m_pAI->ent;
    if ( ent )
      v24 = ent->s.number;
    else
      v24 = 2047;
    Instance = GWeaponMap::GetInstance();
    BgMissile::InitGrenadeEntity(MissileSystem, Instance, &throwInfo, v24, time);
    BgMissile::InitGrenadeMovement(MissileSystem, &throwInfo, &vPosOut, &vVelOut, Weapon, 1, level.time);
    v26 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
    SV_LinkEntity(v26);
    v27 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
  }
  else
  {
    if ( !Weapon->weaponIdx )
      return 0i64;
    gameTime = level.time;
    fuseTime = BG_WeaponAIFuseTime(Weapon, IsAlternate);
    v27 = G_Missile_FireGrenade(this->m_pAI->ent, &vPosOut, &vVelOut, Weapon, 0, WEAPON_HAND_DEFAULT, 1, fuseTime, 1, gameTime);
    v30 = this->m_pAI;
    grenadeAmmo = v30->weaponInfo.grenadeAmmo;
    if ( grenadeAmmo )
      v30->weaponInfo.grenadeAmmo = grenadeAmmo - 1;
  }
  this->m_pAI->grenade.bGrenadeTossValid = 0;
  Scr_SetString(&this->m_pAI->grenade.GrenadeTossMethod, (scr_string_t)0);
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 856, ASSERT_TYPE_ASSERT, "(pGrenade)", (const char *)&queryFormat, "pGrenade") )
    __debugbreak();
  return v27;
}

/*
==============
AIScriptedInterface::Grenade_TryReturnThrows
==============
*/
_BOOL8 AIScriptedInterface::Grenade_TryReturnThrows(AIScriptedInterface *this, gentity_s *grenade, gentity_s *thrower, AIGrenadeReturnThrowInfo *info)
{
  int v8; 
  sentient_info_t *SentientInfo; 
  const sentient_s *TargetSentient; 

  if ( !G_Missile_IsGrenade(grenade) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 496, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( grenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( grenade )") )
    __debugbreak();
  v8 = 0;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 365, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !grenade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 366, ASSERT_TYPE_ASSERT, "(pGrenade)", (const char *)&queryFormat, "pGrenade") )
    __debugbreak();
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 367, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( thrower )
  {
    if ( !thrower->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 372, ASSERT_TYPE_ASSERT, "(pGrenadeParent->sentient)", (const char *)&queryFormat, "pGrenadeParent->sentient") )
      __debugbreak();
    SentientInfo = Sentient_GetSentientInfo(this->m_pAI->sentient, thrower->sentient);
    if ( SentientInfo->lastKnownPosTime )
    {
      SentientInfo_GetLastKnownPos(SentientInfo, &info->vThrowAtPos);
      if ( AIScriptedInterface::Grenade_AttemptReturnTo(this, &this->m_pAI->grenade.pickupPos, &info->vThrowAtPos, &info->vLand, &info->vVelocity) )
        return 1i64;
    }
  }
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( TargetSentient )
  {
    Sentient_GetOrigin(TargetSentient, &info->vThrowAtPos);
    v8 = AIScriptedInterface::Grenade_AttemptReturnTo(this, &this->m_pAI->grenade.pickupPos, &info->vThrowAtPos, &info->vLand, &info->vVelocity);
  }
  return v8 || AIScriptedInterface::Grenade_CheckThrowAwayGrenade(this, grenade, info) || Grenade_CheckDesperateToss(this->m_pAI, &grenade->c.mover.angle.pos1, &info->vVelocity);
}

/*
==============
AIScriptedInterface::HasGrenadeDefined
==============
*/
bool AIScriptedInterface::HasGrenadeDefined(AIScriptedInterface *this)
{
  return EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) != 0;
}

/*
==============
AIScriptedInterface::HasGrenadeValid
==============
*/
bool AIScriptedInterface::HasGrenadeValid(AIScriptedInterface *this)
{
  int isDefined; 

  isDefined = EntHandle::isDefined(&this->m_pAI->grenade.pGrenade);
  if ( isDefined )
    LOBYTE(isDefined) = EntHandle::ent(&this->m_pAI->grenade.pGrenade)->s.eType == ET_MISSILE;
  return isDefined;
}

/*
==============
AIScriptedInterface::HasGrenadeWeaponSet
==============
*/
bool AIScriptedInterface::HasGrenadeWeaponSet(AIScriptedInterface *this)
{
  const scrContext_t *v2; 

  v2 = ScriptContext_Server();
  return GScr_Weapon_GetWeapon(v2, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon)->weaponIdx != 0;
}

/*
==============
AIScriptedInterface::IsAwareOfGrenade
==============
*/
bool AIScriptedInterface::IsAwareOfGrenade(AIScriptedInterface *this)
{
  double v2; 
  bool result; 

  result = 0;
  if ( this->m_pAI->grenade.grenadeAwareness != 0.0 )
  {
    if ( !AICommonInterface::GetTargetEntity(this) )
      return 1;
    v2 = G_random();
    if ( *(float *)&v2 <= this->m_pAI->grenade.grenadeAwareness )
      return 1;
  }
  return result;
}

/*
==============
AIScriptedInterface::IsGrenadeInAIHands
==============
*/
EntityTagInfo *AIScriptedInterface::IsGrenadeInAIHands(const gentity_s *grenade)
{
  EntityTagInfo *result; 

  if ( !grenade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1224, ASSERT_TYPE_ASSERT, "(grenade)", (const char *)&queryFormat, "grenade") )
    __debugbreak();
  result = grenade->tagInfo;
  if ( result )
  {
    if ( !result->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1228, ASSERT_TYPE_ASSERT, "(grenade->tagInfo->parent)", (const char *)&queryFormat, "grenade->tagInfo->parent") )
      __debugbreak();
    return (EntityTagInfo *)(((grenade->tagInfo->parent->s.eType - 17) & 0xFFFD) == 0);
  }
  return result;
}

/*
==============
AIScriptedInterface::OnScrCmd_CheckGrenadeLaunch
==============
*/
void AIScriptedInterface::OnScrCmd_CheckGrenadeLaunch(AIScriptedInterface *this, scrContext_t *scrContext)
{
  const sentient_s *TargetSentient; 
  AIScriptedInterface_vtbl *v5; 
  __int64 v6; 
  vec3_t vVelOut; 
  vec3_t vOriginOut; 
  vec3_t vTargetPos; 
  vec3_t vectorValue; 
  vec3_t outTossVelocity; 

  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( TargetSentient )
  {
    Scr_GetVector(scrContext, 0, &vectorValue);
    Sentient_GetOrigin(TargetSentient, &vOriginOut);
    Sentient_GetVelocity(TargetSentient, &vVelOut);
    v5 = this->__vftable;
    vTargetPos.v[0] = vOriginOut.v[0] + vVelOut.v[0];
    vTargetPos.v[2] = vVelOut.v[2] + vOriginOut.v[2];
    vTargetPos.v[1] = vVelOut.v[1] + vOriginOut.v[1];
    v6 = (__int64)v5->GetEntity(this);
    if ( AIScriptedInterface::Grenade_CheckLaunch(this, (const vec3_t *)(v6 + 304), &vectorValue, &vTargetPos, &outTossVelocity) )
      Scr_AddVector(scrContext, outTossVelocity.v);
  }
}

/*
==============
AIScriptedInterface::OnScrCmd_CheckGrenadeLaunchPos
==============
*/
void AIScriptedInterface::OnScrCmd_CheckGrenadeLaunchPos(AIScriptedInterface *this, scrContext_t *scrContext)
{
  gentity_s *v4; 
  vec3_t vTargetPos; 
  vec3_t vectorValue; 
  vec3_t outTossVelocity; 

  v4 = this->GetEntity(this);
  if ( !v4->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1514, ASSERT_TYPE_ASSERT, "(ent->sentient)", (const char *)&queryFormat, "ent->sentient") )
    __debugbreak();
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &vTargetPos);
  if ( AIScriptedInterface::Grenade_CheckLaunch(this, &v4->r.currentOrigin, &vectorValue, &vTargetPos, &outTossVelocity) )
    Scr_AddVector(scrContext, outTossVelocity.v);
}

/*
==============
AIScriptedInterface::OnScrCmd_CheckGrenadeThrow
==============
*/
void AIScriptedInterface::OnScrCmd_CheckGrenadeThrow(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ai_scripted_t *m_pAI; 
  const Weapon *Weapon; 
  int v6; 
  ai_scripted_t *v7; 
  gentity_s *ent; 
  double Float; 
  signed int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  ai_scripted_t *v14; 
  AIGrenadeCheckInfo throwInfo; 

  if ( !this->GetSentient(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1345, ASSERT_TYPE_ASSERT, "(GetSentient())", (const char *)&queryFormat, "GetSentient()") )
    __debugbreak();
  if ( AICommonInterface::GetTargetSentient(this) )
  {
    m_pAI = this->m_pAI;
    if ( m_pAI->weaponInfo.grenadeAmmo )
    {
      Weapon = GScr_Weapon_GetWeapon(scrContext, (const scr_weapon_t)m_pAI->grenade.grenadeWeapon);
      if ( Weapon->weaponIdx )
        v6 = BG_WeaponDef(Weapon, 0)->stickiness == WEAPSTICKINESS_NONE;
      else
        v6 = 0;
      v7 = this->m_pAI;
      ent = v7->ent;
      *(_QWORD *)throwInfo.vStandPos.v = *(_QWORD *)v7->ent->r.currentOrigin.v;
      throwInfo.vStandPos.v[2] = ent->r.currentOrigin.v[2];
      Scr_GetVector(scrContext, 0, &throwInfo.vOffset);
      throwInfo.withBounce = v6;
      throwInfo.bRechecking = 0;
      throwInfo.vTargetPos.v[0] = 0.0;
      throwInfo.vTargetPos.v[1] = 0.0;
      throwInfo.vTargetPos.v[2] = 0.0;
      Float = Scr_GetFloat(scrContext, 1u);
      throwInfo.randomRange = *(float *)&Float;
      v10 = Scr_GetNumParam(scrContext) - 2;
      if ( v10 >= 4 )
      {
        Scr_Error(COM_ERR_3324, scrContext, "Too many grenade throw methods\n");
        v10 = 4;
      }
      v11 = 0;
      v12 = v10;
      if ( v10 <= 0 )
        goto LABEL_15;
      v13 = 0i64;
      do
      {
        throwInfo.methods[v13] = Scr_GetConstString(scrContext, v11 + 2);
        ++v11;
        ++v13;
      }
      while ( v13 < v12 );
      if ( v11 < 4 )
LABEL_15:
        throwInfo.methods[v11] = 0;
      this->m_pAI->grenade.bGrenadeTossValid = AIScriptedInterface::Grenade_CheckToss(this, &throwInfo, &this->m_pAI->grenade.vGrenadeTossPos, &this->m_pAI->grenade.vGrenadeTossVel) == 1;
      v14 = this->m_pAI;
      if ( v14->grenade.bGrenadeTossValid )
        Scr_AddVector(scrContext, v14->grenade.vGrenadeTossVel.v);
    }
  }
}

/*
==============
AIScriptedInterface::OnScrCmd_CheckGrenadeThrowPos
==============
*/
void AIScriptedInterface::OnScrCmd_CheckGrenadeThrowPos(AIScriptedInterface *this, scrContext_t *scrContext)
{
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  signed int v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  ai_scripted_t *v10; 
  ai_scripted_t *v11; 
  vec3_t end; 
  AIGrenadeCheckInfo throwInfo; 
  trace_t results; 

  if ( !this->GetSentient(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1284, ASSERT_TYPE_ASSERT, "(GetSentient())", (const char *)&queryFormat, "GetSentient()") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->weaponInfo.grenadeAmmo )
  {
    ent = m_pAI->ent;
    *(_QWORD *)throwInfo.vStandPos.v = *(_QWORD *)ent->r.currentOrigin.v;
    throwInfo.vStandPos.v[2] = ent->r.currentOrigin.v[2];
    Scr_GetVector(scrContext, 0, &throwInfo.vOffset);
    Scr_GetVector(scrContext, 1u, &throwInfo.vTargetPos);
    throwInfo.withBounce = Scr_GetInt(scrContext, 2u);
    throwInfo.randomRange = 0.0;
    throwInfo.bRechecking = 0;
    v6 = Scr_GetNumParam(scrContext) - 3;
    if ( v6 >= 4 )
    {
      Scr_Error(COM_ERR_3324, scrContext, "Too many grenade throw methods\n");
      v6 = 4;
    }
    v7 = 0;
    v8 = v6;
    if ( v6 <= 0 )
      goto LABEL_11;
    v9 = 0i64;
    do
    {
      throwInfo.methods[v9] = Scr_GetConstString(scrContext, v7 + 3);
      ++v7;
      ++v9;
    }
    while ( v9 < v8 );
    if ( v7 < 4 )
LABEL_11:
      throwInfo.methods[v7] = 0;
    if ( throwInfo.withBounce )
    {
      end.v[0] = throwInfo.vTargetPos.v[0];
      end.v[2] = throwInfo.vTargetPos.v[2] - 1.0;
      end.v[1] = throwInfo.vTargetPos.v[1];
      G_Main_TraceCapsule(&results, &throwInfo.vTargetPos, &end, &bounds_origin, 2047, 2065);
      if ( results.fraction > 0.5 )
        Com_Printf(18, "targetPos for checkGrenadeThrowPos not at ground level\n");
    }
    v10 = this->m_pAI;
    v10->grenade.vGrenadeTargetPos = throwInfo.vTargetPos;
    this->m_pAI->grenade.bGrenadeTossValid = AIScriptedInterface::Grenade_CheckTossPos(this, &throwInfo, &v10->grenade.vGrenadeTossPos, &v10->grenade.vGrenadeTossVel) == 1;
    v11 = this->m_pAI;
    if ( v11->grenade.bGrenadeTossValid )
      Scr_AddVector(scrContext, v11->grenade.vGrenadeTossVel.v);
  }
}

/*
==============
AIScriptedInterface::OnScrCmd_GetGrenadeTossVel
==============
*/
void AIScriptedInterface::OnScrCmd_GetGrenadeTossVel(AIScriptedInterface *this, scrContext_t *scrContext)
{
  if ( EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) || this->m_pAI->grenade.bGrenadeTossValid )
    Scr_AddVector(scrContext, this->m_pAI->grenade.vGrenadeTossVel.v);
  else
    Scr_AddUndefined(scrContext);
}

/*
==============
AIScriptedInterface::OnScrCmd_IsGrenadePosSafe
==============
*/
void AIScriptedInterface::OnScrCmd_IsGrenadePosSafe(AIScriptedInterface *this, scrContext_t *scrContext)
{
  float v4; 
  double Float; 
  int IsSafeTarget; 
  vec3_t vectorValue; 

  if ( !this->GetSentient(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1404, ASSERT_TYPE_ASSERT, "(GetSentient())", (const char *)&queryFormat, "GetSentient()") )
    __debugbreak();
  v4 = 0.0;
  GScr_GetEntity(0);
  Scr_GetVector(scrContext, 1u, &vectorValue);
  if ( Scr_GetNumParam(scrContext) > 2 )
  {
    Float = Scr_GetFloat(scrContext, 2u);
    v4 = *(float *)&Float;
  }
  IsSafeTarget = AIScriptedInterface::Grenade_IsSafeTarget(this, &vectorValue, v4);
  Scr_AddBool(scrContext, IsSafeTarget);
}

/*
==============
AIScriptedInterface::OnScrCmd_MagicGrenade
==============
*/
void AIScriptedInterface::OnScrCmd_MagicGrenade(AIScriptedInterface *this, scrContext_t *scrContext)
{
  gentity_s *v4; 
  int shouldThrow; 
  double Float; 
  int grenadeTime; 
  const Weapon *grenadeWeapon; 
  bool IsAlternate; 
  const char *v10; 
  const char *v11; 
  const WeaponDef *v12; 
  const gentity_s *v13; 
  vec3_t vTargetPos; 
  vec3_t vectorValue; 

  v4 = this->GetEntity(this);
  if ( Scr_GetNumParam(scrContext) < 2 || Scr_GetNumParam(scrContext) > 4 )
    Scr_Error(COM_ERR_3907, scrContext, "<ai> MagicGrenade <origin> <target position> [time to blow (seconds)] [should throw].\n");
  Scr_GetVector(scrContext, 0, &vectorValue);
  shouldThrow = 1;
  Scr_GetVector(scrContext, 1u, &vTargetPos);
  if ( Scr_GetNumParam(scrContext) < 3 )
  {
    grenadeTime = 5000;
  }
  else
  {
    Float = Scr_GetFloat(scrContext, 2u);
    grenadeTime = (int)(float)(*(float *)&Float * 1000.0);
  }
  if ( Scr_GetNumParam(scrContext) == 4 )
    shouldThrow = Scr_GetInt(scrContext, 3u);
  grenadeWeapon = GScr_Weapon_GetWeapon(scrContext, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
  IsAlternate = GScr_Weapon_IsAlternate(scrContext, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
  if ( !grenadeWeapon->weaponIdx )
  {
    v10 = SL_ConvertToString(v4->classname);
    v11 = j_va("Actor [%s] doesn't have a grenade weapon set.", v10);
    Scr_Error(COM_ERR_3908, scrContext, v11);
  }
  v12 = BG_WeaponDef(grenadeWeapon, IsAlternate);
  v13 = MagicGrenade_Internal(v4, this->m_pAI, &vectorValue, &vTargetPos, grenadeWeapon, grenadeTime, shouldThrow, v12->stickiness != WEAPSTICKINESS_NONE);
  if ( v13 )
    GScr_AddEntity(v13);
  else
    Scr_AddUndefined(scrContext);
}

/*
==============
AIScriptedInterface::OnScrCmd_MagicGrenadeManual
==============
*/
void AIScriptedInterface::OnScrCmd_MagicGrenadeManual(AIScriptedInterface *this, scrContext_t *scrContext)
{
  gentity_s *v4; 
  double Float; 
  int fuseTime; 
  const Weapon *Weapon; 
  bool isAlternate; 
  const char *v9; 
  const char *v10; 
  const gentity_s *v11; 
  vec3_t dir; 
  vec3_t vectorValue; 

  v4 = this->GetEntity(this);
  if ( Scr_GetNumParam(scrContext) != 2 && Scr_GetNumParam(scrContext) != 3 )
    Scr_Error(COM_ERR_3909, scrContext, "<actor> MagicGrenadeManual <origin> <velocity> [time To Blow (seconds)].\n");
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &dir);
  if ( Scr_GetNumParam(scrContext) == 3 )
  {
    Float = Scr_GetFloat(scrContext, 2u);
    fuseTime = (int)(float)(*(float *)&Float * 1000.0);
  }
  else
  {
    fuseTime = 5000;
  }
  Weapon = GScr_Weapon_GetWeapon(scrContext, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
  isAlternate = GScr_Weapon_IsAlternate(scrContext, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
  if ( !Weapon->weaponIdx )
  {
    v9 = SL_ConvertToString(v4->classname);
    v10 = j_va("AI [%s] doesn't have a grenade weapon set.", v9);
    Scr_Error(COM_ERR_3910, scrContext, v10);
  }
  v11 = G_Missile_FireGrenade(v4, &vectorValue, &dir, Weapon, isAlternate, WEAPON_HAND_DEFAULT, 1, fuseTime, 1, level.time);
  GScr_AddEntity(v11);
}

/*
==============
AIScriptedInterface::OnScrCmd_PickUpGrenade
==============
*/
void AIScriptedInterface::OnScrCmd_PickUpGrenade(AIScriptedInterface *this, scrContext_t *scrContext)
{
  if ( EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) )
    this->Grenade_Attach(this);
}

/*
==============
AIScriptedInterface::OnScrCmd_ThrowGrenade
==============
*/
void AIScriptedInterface::OnScrCmd_ThrowGrenade(AIScriptedInterface *this, scrContext_t *scrContext)
{
  const scrContext_t *v4; 
  gentity_s *v5; 
  const char *v6; 
  const char *v7; 
  const gentity_s *v8; 

  v4 = ScriptContext_Server();
  if ( !GScr_Weapon_GetWeapon(v4, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon)->weaponIdx )
  {
    v5 = this->GetEntity(this);
    v6 = SL_ConvertToString(v5->classname);
    v7 = j_va("Actor [%s] doesn't have a grenade weapon set.", v6);
    Scr_Error(COM_ERR_3884, scrContext, v7);
  }
  v8 = AIScriptedInterface::Grenade_Throw(this);
  if ( v8 )
    GScr_AddEntity(v8);
}

/*
==============
AIScriptedInterface::Projectile_Ping
==============
*/
void AIScriptedInterface::Projectile_Ping(AIScriptedInterface *this, gentity_s *pProjectile, const vec3_t *origin)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1087, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !pProjectile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1088, ASSERT_TYPE_ASSERT, "(pProjectile)", (const char *)&queryFormat, "pProjectile") )
    __debugbreak();
  GScr_AddEntity(pProjectile);
  GScr_Notify(this->m_pAI->ent, scr_const.projectile_ping, 1u);
}

