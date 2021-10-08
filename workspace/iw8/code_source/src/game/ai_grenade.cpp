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
  bool v12; 
  char v20; 
  _BOOL8 result; 
  float c; 
  float s[3]; 

  v12 = this->m_pAI == NULL;
  _RSI = vTargetPos;
  _R12 = vVelOut;
  __asm { vmovaps [rsp+0D8h+var_58], xmm7 }
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 701, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  _RDI = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0D8h+var_48], xmm6
    vmovaps [rsp+0D8h+var_68], xmm8
    vmovaps [rsp+0D8h+var_78], xmm9
  }
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm7, dword ptr [rdi+28h]
  }
  if ( !v20 )
    goto LABEL_14;
  AIScriptedInterface::Grenade_GetTossFromPosition(this, vStandPos, vOffset, vPosOut);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm2, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm1, xmm0, dword ptr [rbx+4]
    vmulss  xmm3, xmm1, xmm1
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm6, xmm3, xmm2
    vsqrtss xmm0, xmm6, xmm6
    vucomiss xmm0, xmm7
  }
  if ( v12 )
    goto LABEL_14;
  _RDI = DCONST_DVARFLT_bg_lowGravity;
  __asm
  {
    vmovaps [rsp+0D8h+var_88], xmm10
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm10, xmm0, dword ptr [rbx+8]
  }
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm5, dword ptr [rdi+28h]
    vmovss  xmm9, [rsp+0D8h+speed]
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm3, xmm1, xmm6
    vmulss  xmm1, xmm5, cs:__real@40000000
    vmulss  xmm8, xmm9, xmm9
    vmulss  xmm2, xmm8, xmm8
    vdivss  xmm0, xmm3, xmm2
    vmulss  xmm2, xmm1, xmm6
    vsubss  xmm4, xmm6, xmm0
    vmulss  xmm0, xmm2, xmm10
    vmovaps xmm10, [rsp+0D8h+var_88]
    vdivss  xmm3, xmm0, xmm8
    vaddss  xmm1, xmm4, xmm3
    vcomiss xmm1, xmm7
  }
  if ( v20 )
  {
LABEL_14:
    result = 0i64;
  }
  else
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vsubss  xmm1, xmm0, xmm6
      vmulss  xmm3, xmm1, xmm8
      vmulss  xmm2, xmm6, xmm5
      vdivss  xmm0, xmm3, xmm2; X
    }
    *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
    FastSinCos(*(const float *)&_XMM0, s, &c);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm4, xmm0, dword ptr [rbx]
      vmovss  dword ptr [r12], xmm4
      vmovss  xmm0, dword ptr [rsi+4]
      vsubss  xmm5, xmm0, dword ptr [rbx+4]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vmovss  xmm1, cs:__real@3f800000
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmulss  xmm2, xmm9, [rsp+0D8h+s]
      vdivss  xmm3, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm3
      vmulss  xmm4, xmm1, [rsp+0D8h+c]
      vmulss  xmm0, xmm5, xmm3
      vmulss  xmm1, xmm0, [rsp+0D8h+c]
      vmovss  dword ptr [r12+4], xmm1
      vmulss  xmm1, xmm9, dword ptr [r12+4]
      vmulss  xmm0, xmm9, xmm4
      vmovss  dword ptr [r12+4], xmm1
      vmovss  dword ptr [r12], xmm0
      vmovss  dword ptr [r12+8], xmm2
    }
    result = Grenade_IsValidTrajectory(this->m_pAI, 2047, vPosOut, vVelOut, _RSI);
  }
  __asm
  {
    vmovaps xmm9, [rsp+0D8h+var_78]
    vmovaps xmm8, [rsp+0D8h+var_68]
    vmovaps xmm6, [rsp+0D8h+var_48]
    vmovaps xmm7, [rsp+0D8h+var_58]
  }
  return result;
}

/*
==============
AIScriptedInterface::Grenade_AttemptEscape
==============
*/

bool __fastcall AIScriptedInterface::Grenade_AttemptEscape(AIScriptedInterface *this, double _XMM1_8)
{
  ai_scripted_t *m_pAI; 
  unsigned __int16 number; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  gentity_s *v10; 
  gentity_s *v11; 
  ai_scripted_t *v12; 
  sentient_s *sentient; 
  sentient_s *v14; 
  __int64 v15; 
  gentity_s *v16; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const vec3_t *p_pos1; 
  CombatMode combatMode; 
  pathnode_t *CoverFromPoint; 
  pathnode_t *v28; 
  ai_scripted_t *v29; 
  bool result; 
  const tacpoint_t *ClosestPoint; 
  const tacpoint_t *v32; 
  const tacpoint_t *ClosestPointWithoutVisWithinRadius; 
  const tacpoint_t *ClosestPointWithVisWithinRadius; 
  AINavigator *pNavigator; 
  bool (__fastcall *IsAreaReachable)(AINavigator *, const bfx::AreaHandle *); 
  bfx::AreaHandle *AreaForPoint; 
  ai_scripted_t *v40; 
  AINavigator *v57; 
  bool (__fastcall *v58)(AINavigator *, const bfx::AreaHandle *); 
  bfx::AreaHandle *v59; 
  ai_scripted_t *v60; 
  float fmt; 
  tacpoint_t *pTargetPoint; 
  __int64 v66; 
  int v67; 
  vec3_t pos; 
  char v71; 

  __asm
  {
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps [rsp+98h+var_38], xmm8
  }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 576, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  number = m_pAI->grenade.pGrenade.number;
  if ( !number )
    goto LABEL_57;
  v7 = number;
  v8 = number - 1;
  if ( v8 >= 0x800 )
  {
    v67 = 2048;
    LODWORD(pTargetPoint) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", pTargetPoint, v67) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v9 = v7 - 1;
  if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v9] )
  {
    LODWORD(v66) = m_pAI->grenade.pGrenade.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v66) )
      __debugbreak();
  }
  if ( !m_pAI->grenade.pGrenade.number )
  {
LABEL_57:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 577, ASSERT_TYPE_ASSERT, "(m_pAI->grenade.pGrenade.isDefined())", (const char *)&queryFormat, "m_pAI->grenade.pGrenade.isDefined()") )
      __debugbreak();
  }
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 578, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  v10 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
  if ( EntHandle::isDefined(&v10->parent) )
    v11 = EntHandle::ent(&v10->parent);
  else
    v11 = NULL;
  if ( !AICommonInterface::GetTargetEntity(this) )
  {
    v12 = this->m_pAI;
    if ( !v12->threat.ignoreExplosionEvents )
    {
      if ( v11 )
      {
        sentient = v11->sentient;
        if ( sentient )
        {
          v14 = v12->sentient;
          if ( sentient != v14 && Sentient_IsEnemyTeam(v14, sentient) && !this->CheckIgnore(this, this->m_pAI->sentient) )
          {
            LOBYTE(v15) = 21;
            this->GetPerfectInfo(this, v11->sentient, v15);
            Sentient_SetEnemy(this->m_pAI->sentient, v11, 1, 1);
          }
        }
      }
    }
  }
  v16 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &v16->s);
  BG_ExplosionRadius(WeaponForEntity, 0);
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, eax
    vaddss  xmm7, xmm8, cs:__real@43000000
  }
  if ( !G_Missile_IsGrenade(v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 613, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( grenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( grenade )") )
    __debugbreak();
  p_pos1 = &v10->c.mover.angle.pos1;
  if ( AICommonInterface::HasPath(this) )
  {
    __asm
    {
      vmovss  xmm3, cs:__real@44800000; maxDistDownPath
      vmovaps xmm2, xmm7; maxDistFromPath
    }
    if ( !Nav_IsPointNearPath(this->m_pAI->pNavigator, &v10->c.mover.angle.pos1, *(float *)&_XMM2, *(float *)&_XMM3) )
      goto LABEL_43;
  }
  combatMode = this->m_pAI->combat.combatMode;
  if ( combatMode == AI_COMBAT_NO_COVER )
    goto LABEL_44;
  __asm { vmovaps xmm2, xmm7; fMinSafeDist }
  CoverFromPoint = AIScriptedInterface::Cover_FindCoverFromPoint(this, &v10->c.mover.angle.pos1, *(float *)&_XMM2, combatMode, v10);
  v28 = CoverFromPoint;
  if ( !CoverFromPoint )
  {
LABEL_44:
    ClosestPoint = TacGraph_FindClosestPoint(p_pos1);
    v32 = ClosestPoint;
    if ( ClosestPoint )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@44800000; maxRadius
        vxorps  xmm1, xmm1, xmm1; minRadius
        vmovss  dword ptr [rsp+98h+fmt], xmm7
      }
      ClosestPointWithoutVisWithinRadius = TacGraph_FindClosestPointWithoutVisWithinRadius(&this->m_pAI->ent->r.currentOrigin, *(float *)&_XMM1, *(float *)&_XMM2, p_pos1, fmt, ClosestPoint);
      ClosestPointWithVisWithinRadius = ClosestPointWithoutVisWithinRadius;
      if ( ClosestPointWithoutVisWithinRadius )
      {
        pNavigator = this->m_pAI->pNavigator;
        IsAreaReachable = pNavigator->IsAreaReachable;
        AreaForPoint = TacGraph_GetAreaForPoint(ClosestPointWithoutVisWithinRadius);
        if ( IsAreaReachable(pNavigator, AreaForPoint) )
        {
LABEL_52:
          v60 = this->m_pAI;
          TacGraph_GetApproxGroundPosForPoint(ClosestPointWithVisWithinRadius, &v60->btGoals[2].pos);
          v60->btGoals[2].radius = 24.0;
          v60->btGoals[2].node = NULL;
          EntHandle::setEnt(&v60->btGoals[2].hEnt, NULL);
          EntHandle::setEnt(&v60->btGoals[2].hVolume, NULL);
          result = 1;
          v60->btGoals[2].bValid = 1;
          goto LABEL_54;
        }
        ClosestPointWithVisWithinRadius = NULL;
      }
      v40 = this->m_pAI;
      _RCX = &v40->ent->r.currentOrigin;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx]
        vsubss  xmm3, xmm0, dword ptr [r14]
        vmovss  xmm1, dword ptr [rcx+4]
        vsubss  xmm2, xmm1, dword ptr [r14+4]
        vmovss  xmm0, dword ptr [rcx+8]
        vsubss  xmm4, xmm0, dword ptr [r14+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vaddss  xmm2, xmm7, cs:__real@42900000; maxRadius
        vmaxss  xmm1, xmm1, xmm8; minRadius
        vcomiss xmm1, xmm2
      }
      if ( v40->ent >= (gentity_s *)0xFFFFFFFFFFFFFED0i64 )
      {
        __asm { vmovss  xmm3, cs:__real@42a00000; minRadiusZ }
        ClosestPointWithVisWithinRadius = TacGraph_FindClosestPointWithVisWithinRadius(p_pos1, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, _RCX, v32);
      }
      if ( ClosestPointWithVisWithinRadius )
      {
        v57 = this->m_pAI->pNavigator;
        v58 = v57->IsAreaReachable;
        v59 = TacGraph_GetAreaForPoint(ClosestPointWithVisWithinRadius);
        if ( v58(v57, v59) )
          goto LABEL_52;
      }
    }
    result = 0;
    goto LABEL_54;
  }
  if ( this->m_pAI->sentient->pClaimedNode != CoverFromPoint )
  {
    pathnode_t::GetPos(CoverFromPoint, &pos);
    v29 = this->m_pAI;
    v29->btGoals[2].node = v28;
    pathnode_t::GetPos(v28, &v29->btGoals[2].pos);
    EntHandle::setEnt(&v29->btGoals[2].hEnt, NULL);
    EntHandle::setEnt(&v29->btGoals[2].hVolume, NULL);
    v29->btGoals[2].bValid = 1;
    this->ClearKeepClaimedNode(this);
    Sentient_ClaimNode(this->m_pAI->sentient, v28);
  }
LABEL_43:
  result = 1;
LABEL_54:
  _R11 = &v71;
  __asm
  {
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-20h]
  }
  return result;
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
  gentity_s *ent; 
  ai_scripted_t *v25; 
  int nextthink; 
  __int64 v28; 
  __int64 v29; 
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
    LODWORD(v28) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v28, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v7 = v5 - 1;
  if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v7] )
  {
    LODWORD(v29) = m_pAI->grenade.pGrenade.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v29) )
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
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+info.vVelocity]
      vmovss  dword ptr [rax+4D0h], xmm0
      vmovss  xmm1, dword ptr [rsp+88h+info.vVelocity+4]
      vmovss  dword ptr [rax+4D4h], xmm1
      vmovss  xmm0, dword ptr [rsp+88h+info.vVelocity+8]
      vmovss  dword ptr [rax+4D8h], xmm0
    }
    _RAX = this->m_pAI;
    if ( _RAX->grenade.bGrenadeTargetValid )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+88h+info.vThrowAtPos]
        vmovss  dword ptr [rax+4C4h], xmm0
        vmovss  xmm1, dword ptr [rsp+88h+info.vThrowAtPos+4]
        vmovss  dword ptr [rax+4C8h], xmm1
        vmovss  xmm0, dword ptr [rsp+88h+info.vThrowAtPos+8]
        vmovss  dword ptr [rax+4CCh], xmm0
      }
      _RAX = this->m_pAI;
    }
    ent = _RAX->ent;
    if ( !EntHandle::isDefined(&v8->grenadeActivator) || EntHandle::ent(&v8->grenadeActivator) != ent )
    {
      if ( this->m_pAI->sentient->eTeam == TEAM_TWO || (v25 = this->m_pAI, !v10) )
      {
        nextthink = v8->nextthink;
        v25 = this->m_pAI;
        if ( nextthink - level.time < 3000 && (v8->c.missile.flags & 0x400) == 0 )
        {
          v8->c.missile.flags = 0;
          v8->nextthink = nextthink + 1000;
          v25 = this->m_pAI;
        }
      }
      EntHandle::setEnt(&v8->grenadeActivator, v25->ent);
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
  ai_scripted_t *m_pAI; 
  AIGrenadeCheckInfo throwInfo; 

  _RDI = vEnemyPos;
  _RSI = vFrom;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 334, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+98h+throwInfo.vStandPos], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
  }
  throwInfo.methods[0] = scr_const.min_energy;
  throwInfo.methods[1] = scr_const.min_time;
  __asm
  {
    vmovss  dword ptr [rsp+98h+throwInfo.vStandPos+8], xmm0
    vmovss  xmm0, cs:__real@42640000
    vmovss  dword ptr [rsp+98h+throwInfo.vStandPos+4], xmm1
    vmovss  xmm1, dword ptr [rdi]
    vxorps  xmm2, xmm2, xmm2
  }
  throwInfo.methods[2] = scr_const.max_time;
  m_pAI = this->m_pAI;
  __asm
  {
    vmovss  dword ptr [rsp+98h+throwInfo.vOffset+8], xmm0
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+98h+throwInfo.vTargetPos], xmm1
    vmovss  xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+98h+throwInfo.vTargetPos+4], xmm0
    vmovss  dword ptr [rsp+98h+throwInfo.vOffset], xmm2
    vmovss  dword ptr [rsp+98h+throwInfo.vOffset+4], xmm2
    vmovss  dword ptr [rsp+98h+throwInfo.vTargetPos+8], xmm1
    vmovss  [rsp+98h+throwInfo.randomRange], xmm2
  }
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
  ai_scripted_t *m_pAI; 
  AIGrenadeCheckInfo throwInfo; 

  _RDI = vEnemyPos;
  _RSI = vFrom;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 400, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+98h+throwInfo.vStandPos], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+98h+throwInfo.vStandPos+8], xmm0
    vmovss  xmm0, cs:__real@42640000
    vmovss  dword ptr [rsp+98h+throwInfo.vStandPos+4], xmm1
    vmovss  xmm1, dword ptr [rdi]
  }
  throwInfo.methods[0] = scr_const.infinite_energy;
  m_pAI = this->m_pAI;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vmovss  dword ptr [rsp+98h+throwInfo.vOffset+8], xmm0
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+98h+throwInfo.vTargetPos], xmm1
    vmovss  xmm1, dword ptr [rdi+8]
  }
  *(_QWORD *)&throwInfo.methods[1] = 0i64;
  throwInfo.methods[3] = 0;
  __asm
  {
    vmovss  dword ptr [rsp+98h+throwInfo.vTargetPos+4], xmm0
    vmovss  dword ptr [rsp+98h+throwInfo.vOffset], xmm2
    vmovss  dword ptr [rsp+98h+throwInfo.vOffset+4], xmm2
    vmovss  dword ptr [rsp+98h+throwInfo.vTargetPos+8], xmm1
    vmovss  [rsp+98h+throwInfo.randomRange], xmm2
  }
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
  const Weapon *v10; 
  scrContext_t *v11; 
  const char *v12; 
  ai_scripted_t *m_pAI; 
  scrContext_t *v14; 
  const char *v15; 
  vec3_t *v16; 
  float outSpeedUp; 
  int outSpeed; 
  float speed; 

  v10 = this->GetEquippedWeapon(this);
  if ( !v10->weaponIdx || v10->weaponIdx >= BG_GetNumWeapons() )
  {
    v11 = ScriptContext_Server();
    v12 = j_va("Grenade_CheckLaunch: invalid weapon for entity %d", (unsigned int)this->m_pAI->ent->s.number);
    Scr_Error(COM_ERR_3322, v11, v12);
  }
  m_pAI = this->m_pAI;
  m_pAI->grenade.vGrenadeTargetPos.v[0] = vTargetPos->v[0];
  m_pAI->grenade.vGrenadeTargetPos.v[1] = vTargetPos->v[1];
  m_pAI->grenade.vGrenadeTargetPos.v[2] = vTargetPos->v[2];
  G_Missile_GetScaledProjectileSpeed(this->m_pAI->ent, v10, 0, &outSpeed, (int *)&speed);
  if ( outSpeed <= 0 )
  {
    v14 = ScriptContext_Server();
    v15 = j_va("Grenade_CheckLaunch: grenade launcher speed must be > 0");
    Scr_Error(COM_ERR_3323, v14, v15);
  }
  v16 = outTossVelocity;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmovss  dword ptr [rsp+68h+outSpeedUp], xmm0
  }
  this->m_pAI->grenade.bGrenadeTossValid = AIScriptedInterface::GrenadeLauncher_CheckPos(this, vStartPos, vOffset, &this->m_pAI->grenade.vGrenadeTargetPos, outSpeedUp, &this->m_pAI->grenade.vGrenadeTossPos, outTossVelocity) == 1;
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
  int v7; 
  pathnode_t *pClaimedNode; 
  char v27; 
  ai_scripted_t *m_pAI; 
  int result; 
  vec3_t start; 
  vec2_t forward; 
  vec3_t pos; 
  AIGrenadeCheckInfo throwInfo; 
  trace_t results; 
  char v68; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  v7 = 0;
  _RBX = info;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 432, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !pGrenade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 433, ASSERT_TYPE_ASSERT, "(pGrenade)", (const char *)&queryFormat, "pGrenade") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 434, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  _RCX = this->m_pAI;
  if ( _RCX->grenade.bGrenadeTargetValid )
  {
    v7 = 1;
    _RBX->vThrowAtPos.v[0] = _RCX->grenade.vGrenadeTargetPos.v[0];
    _RBX->vThrowAtPos.v[1] = _RCX->grenade.vGrenadeTargetPos.v[1];
    _RBX->vThrowAtPos.v[2] = _RCX->grenade.vGrenadeTargetPos.v[2];
    _RCX = this->m_pAI;
  }
  __asm
  {
    vmovss  xmm7, cs:__real@42640000
    vxorps  xmm6, xmm6, xmm6
  }
  pClaimedNode = _RCX->sentient->pClaimedNode;
  if ( !pClaimedNode )
    goto LABEL_19;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4DCh]
    vmovss  dword ptr [rsp+170h+start], xmm0
    vmovss  xmm1, dword ptr [rcx+4E0h]
    vmovss  dword ptr [rsp+170h+start+4], xmm1
    vaddss  xmm2, xmm7, dword ptr [rcx+4E4h]
    vmovss  dword ptr [rsp+170h+start+8], xmm2
  }
  _RAX = _RCX->ent;
  __asm
  {
    vmovaps xmmword ptr [rsp+170h+var_68+8], xmm8
    vmovss  xmm0, dword ptr [rax+138h]
    vaddss  xmm1, xmm0, cs:__real@43c80000
    vmovss  dword ptr [rbx+8], xmm1
  }
  pathnode_t::GetPos(pClaimedNode, &pos);
  pathnode_t::GetForward(pClaimedNode, &forward);
  __asm
  {
    vmovss  xmm8, cs:__real@43960000
    vmulss  xmm1, xmm8, dword ptr [rsp+170h+forward]
    vaddss  xmm2, xmm1, dword ptr [rsp+170h+pos]
    vmulss  xmm1, xmm8, dword ptr [rsp+170h+forward+4]
    vmovss  dword ptr [rbx], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsp+170h+pos+4]
    vmovss  dword ptr [rbx+4], xmm2
  }
  G_Main_TraceCapsule(&results, &start, &_RBX->vThrowAtPos, &bounds_origin, this->m_pAI->ent->s.number, 41972113);
  __asm { vxorps  xmm2, xmm2, xmm2; height }
  Debug_DrawGrenadeTraceLine(&start, &_RBX->vThrowAtPos, *(float *)&_XMM2, &colorYellow, 1);
  __asm
  {
    vmovss  xmm4, [rbp+70h+results.fraction]
    vcomiss xmm4, cs:__real@3f000000
  }
  if ( v27 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+170h+pos]
      vmulss  xmm2, xmm8, dword ptr [rsp+170h+forward]
      vmulss  xmm3, xmm8, dword ptr [rsp+170h+forward+4]
      vsubss  xmm2, xmm1, xmm2
      vmovss  xmm1, dword ptr [rsp+170h+pos+4]
      vmovss  dword ptr [rbx], xmm2
      vsubss  xmm2, xmm1, xmm3
      vmovss  dword ptr [rbx+4], xmm2
    }
    G_Main_TraceCapsule(&results, &start, &_RBX->vThrowAtPos, &bounds_origin, this->m_pAI->ent->s.number, 41972113);
    __asm { vxorps  xmm2, xmm2, xmm2; height }
    Debug_DrawGrenadeTraceLine(&start, &_RBX->vThrowAtPos, *(float *)&_XMM2, &colorYellow, 1);
    __asm { vmovss  xmm4, [rbp+70h+results.fraction] }
  }
  __asm
  {
    vcomiss xmm4, cs:__real@3f000000
    vmovaps xmm8, xmmword ptr [rsp+170h+var_68+8]
  }
  if ( v27 )
  {
LABEL_19:
    if ( !v7 )
    {
      result = 0;
      goto LABEL_25;
    }
  }
  else
  {
    __asm { vcomiss xmm4, cs:__real@3f800000 }
    if ( v27 )
    {
      __asm
      {
        vmulss  xmm4, xmm4, cs:__real@3f666666
        vmovss  [rbp+70h+results.fraction], xmm4
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm0, xmm0, dword ptr [rsp+170h+start]
      vmulss  xmm1, xmm0, xmm4
      vaddss  xmm2, xmm1, dword ptr [rsp+170h+start]
      vmovss  dword ptr [rbx], xmm2
      vmovss  xmm0, dword ptr [rbx+4]
      vsubss  xmm0, xmm0, dword ptr [rsp+170h+start+4]
      vmulss  xmm1, xmm0, xmm4
      vaddss  xmm2, xmm1, dword ptr [rsp+170h+start+4]
      vmovss  dword ptr [rbx+4], xmm2
      vmovss  xmm0, dword ptr [rbx+8]
      vsubss  xmm0, xmm0, dword ptr [rsp+170h+start+8]
      vmulss  xmm1, xmm0, xmm4
      vaddss  xmm2, xmm1, dword ptr [rsp+170h+start+8]
      vmovss  dword ptr [rbx+8], xmm2
    }
  }
  _RSI = this->m_pAI;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 400, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4DCh]
    vmovss  xmm1, dword ptr [rsi+4E0h]
    vmovss  dword ptr [rsp+170h+throwInfo.vStandPos], xmm0
    vmovss  xmm0, dword ptr [rsi+4E4h]
    vmovss  dword ptr [rsp+170h+throwInfo.vStandPos+8], xmm0
    vmovss  xmm0, dword ptr [rbx]
  }
  throwInfo.methods[0] = scr_const.infinite_energy;
  m_pAI = this->m_pAI;
  __asm
  {
    vmovss  dword ptr [rsp+170h+throwInfo.vTargetPos], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rsp+170h+throwInfo.vStandPos+4], xmm1
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  dword ptr [rbp+70h+throwInfo.vTargetPos+8], xmm0
    vmovss  dword ptr [rsp+170h+throwInfo.vOffset], xmm6
    vmovss  dword ptr [rsp+170h+throwInfo.vOffset+4], xmm6
    vmovss  dword ptr [rsp+170h+throwInfo.vOffset+8], xmm7
    vmovss  dword ptr [rsp+170h+throwInfo.vTargetPos+4], xmm1
    vmovss  [rbp+70h+throwInfo.randomRange], xmm6
  }
  *(_QWORD *)&throwInfo.bRechecking = 1i64;
  *(_QWORD *)&throwInfo.methods[1] = 0i64;
  throwInfo.methods[3] = 0;
  m_pAI->grenade.bGrenadeTargetValid = 1;
  result = AIScriptedInterface::Grenade_CheckTossPos(this, &throwInfo, &_RBX->vLand, &_RBX->vVelocity);
LABEL_25:
  _R11 = &v68;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
AIScriptedInterface::Grenade_CheckToss
==============
*/
int AIScriptedInterface::Grenade_CheckToss(AIScriptedInterface *this, AIGrenadeCheckInfo *throwInfo, vec3_t *vPosOut, vec3_t *vVelOut)
{
  const sentient_s *TargetSentient; 
  char v12; 
  vec3_t vVelOuta; 
  vec3_t vOriginOut; 

  _RSI = throwInfo;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 91, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 92, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 93, ASSERT_TYPE_ASSERT, "(throwInfo)", (const char *)&queryFormat, "throwInfo") )
    __debugbreak();
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( !TargetSentient )
    return 0;
  _RDI = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rdi+28h]
  }
  if ( !v12 || EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) && !_RSI->bRechecking )
    return 0;
  Sentient_GetOrigin(TargetSentient, &vOriginOut);
  Sentient_GetVelocity(TargetSentient, &vVelOuta);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+vVelOut]
    vmovss  xmm1, dword ptr [rsp+0A8h+vVelOut+4]
    vaddss  xmm3, xmm0, dword ptr [rsp+0A8h+vOriginOut]
    vaddss  xmm0, xmm1, dword ptr [rsp+0A8h+vOriginOut+4]
    vmovss  xmm2, dword ptr [rsp+0A8h+vVelOut+8]
    vaddss  xmm1, xmm2, dword ptr [rsp+0A8h+vOriginOut+8]
    vmovss  dword ptr [rsi+20h], xmm1
    vmovss  dword ptr [rsi+18h], xmm3
    vmovss  dword ptr [rsi+1Ch], xmm0
  }
  _R10 = this->m_pAI;
  __asm { vmovss  dword ptr [r10+4C4h], xmm3 }
  _R10->grenade.vGrenadeTargetPos.v[1] = _RSI->vTargetPos.v[1];
  _R10->grenade.vGrenadeTargetPos.v[2] = _RSI->vTargetPos.v[2];
  this->m_pAI->grenade.bGrenadeTargetValid = 1;
  return AIScriptedInterface::Grenade_CheckTossPos(this, _RSI, vPosOut, vVelOut);
}

/*
==============
AIScriptedInterface::Grenade_CheckTossPos
==============
*/
_BOOL8 AIScriptedInterface::Grenade_CheckTossPos(AIScriptedInterface *this, const AIGrenadeCheckInfo *throwInfo, vec3_t *vPosOut, vec3_t *vVelOut)
{
  char v11; 
  int isDefined; 
  bool v13; 
  const Weapon *Weapon; 
  bool detailTrace; 
  int v24; 
  const vec4_t *v26; 
  BOOL v41; 
  ai_scripted_t *m_pAI; 
  int number; 
  __int64 v44; 
  __int64 v45; 
  int v46; 
  scr_string_t *methods; 
  scr_string_t v48; 
  bool v49; 
  const dvar_t *v50; 
  _BOOL8 result; 
  const char *v54; 
  const char *v55; 
  __int64 passEntityNum; 
  __int64 passEntityNum2; 
  bool TossPositionsFromHints; 
  scrContext_t *scrContext; 
  vec3_t vLand; 
  vec3_t out; 
  vec3_t in; 
  trace_t results; 

  __asm { vmovaps [rsp+160h+var_50], xmm6 }
  _R12 = throwInfo;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 140, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 141, ASSERT_TYPE_ASSERT, "(throwInfo)", (const char *)&queryFormat, "throwInfo") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_bg_lowGravity;
  if ( !DCONST_DVARFLT_bg_lowGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_lowGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rbx+28h]
  }
  if ( !v11 )
    goto LABEL_63;
  isDefined = EntHandle::isDefined(&this->m_pAI->grenade.pGrenade);
  v13 = isDefined == 0;
  if ( isDefined )
  {
    v13 = _R12->bRechecking == 0;
    if ( !_R12->bRechecking )
      goto LABEL_63;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r12+18h]
    vmovss  xmm2, dword ptr [r12+24h]; range
    vucomiss xmm2, xmm6
    vmovss  xmm1, dword ptr [r12+1Ch]
    vmovss  dword ptr [rsp+160h+out], xmm0
    vmovss  xmm0, dword ptr [r12+20h]
    vmovss  dword ptr [rbp+60h+out+8], xmm0
    vmovss  dword ptr [rsp+160h+out+4], xmm1
  }
  if ( !v13 )
  {
    VecRandomRange_vec3_t_(&_R12->vTargetPos, &out, *(float *)&_XMM2, 2);
    __asm { vmovss  xmm0, dword ptr [rsp+160h+out] }
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  dword ptr [rax+4C4h], xmm0
      vmovss  xmm1, dword ptr [rsp+160h+out+4]
      vmovss  dword ptr [rax+4C8h], xmm1
      vmovss  xmm0, dword ptr [rbp+60h+out+8]
      vmovss  dword ptr [rax+4CCh], xmm0
    }
  }
  AIScriptedInterface::Grenade_GetTossFromPosition(this, &_R12->vStandPos, &_R12->vOffset, vPosOut);
  scrContext = ScriptContext_Server();
  Weapon = GScr_Weapon_GetWeapon(scrContext, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
  detailTrace = BG_WeaponRadiusDamageDetailTrace(Weapon, 0);
  v24 = 2047;
  G_Missile_Trace(NULL, &results, vPosOut, &out, &bounds_origin, 2047, 2047, 2065, detailTrace);
  __asm
  {
    vmovss  xmm0, [rbp+60h+results.fraction]
    vucomiss xmm0, cs:__real@3f800000
  }
  TossPositionsFromHints = 0;
  if ( v13 )
  {
    if ( _R12->withBounce )
    {
      Grenade_GetTossPositions(vPosOut, &out, &vLand, Weapon);
      v26 = &colorRed;
    }
    else
    {
      __asm { vmovsd  xmm0, qword ptr [rsp+160h+out] }
      v26 = &colorRed;
      __asm { vmovsd  qword ptr [rsp+160h+vLand], xmm0 }
      vLand.v[2] = out.v[2];
    }
  }
  else if ( level.grenadeHintCount && (TossPositionsFromHints = Grenade_GetTossPositionsFromHints(vPosOut, &_R12->vTargetPos, &in)) )
  {
    __asm { vmovss  xmm2, cs:__real@41700000; range }
    VecRandomRange_vec3_t_(&in, &vLand, *(float *)&_XMM2, 3);
    v26 = &colorCyan;
  }
  else
  {
    __asm { vmovsd  xmm0, qword ptr [rsp+160h+out] }
    v26 = &colorBlue;
    __asm { vmovsd  qword ptr [rsp+160h+vLand], xmm0 }
    vLand.v[2] = out.v[2];
  }
  __asm { vxorps  xmm2, xmm2, xmm2; height }
  Debug_DrawGrenadeTraceLine(vPosOut, &vLand, *(float *)&_XMM2, v26, 0);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+160h+vLand]
    vsubss  xmm3, xmm0, dword ptr [r14]
    vmovss  xmm1, dword ptr [rsp+160h+vLand+4]
    vmovss  xmm0, dword ptr [rsp+160h+vLand+8]
    vsubss  xmm2, xmm1, dword ptr [r14+4]
    vsubss  xmm4, xmm0, dword ptr [r14+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm4, xmm3, xmm0
    vucomiss xmm4, xmm6
  }
  if ( v13 )
  {
LABEL_63:
    result = 0i64;
    goto LABEL_64;
  }
  v41 = 0;
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
    v44 = m_pAI->grenade.pGrenade.number;
    if ( (unsigned int)(v44 - 1) >= 0x800 )
    {
      LODWORD(passEntityNum2) = 2048;
      LODWORD(passEntityNum) = v44 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", passEntityNum, passEntityNum2) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v45 = v44 - 1;
    if ( g_entities[v45].r.isInUse != g_entityIsInUse[v45] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v45] )
    {
      LODWORD(passEntityNum2) = m_pAI->grenade.pGrenade.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", passEntityNum2) )
        __debugbreak();
    }
    v24 = (__int16)(m_pAI->grenade.pGrenade.number - 1);
  }
  v46 = 0;
  methods = _R12->methods;
  do
  {
    v48 = *methods;
    if ( !*methods )
      goto LABEL_59;
    if ( v48 == scr_const.min_energy )
    {
      v49 = Grenade_CheckMinimumEnergyToss(this->m_pAI, v24, vPosOut, &vLand, vVelOut);
    }
    else if ( v48 == scr_const.min_time )
    {
      v49 = Grenade_CheckMaximumEnergyToss(this->m_pAI, v24, vPosOut, &vLand, 0, vVelOut);
    }
    else if ( v48 == scr_const.max_time )
    {
      v49 = Grenade_CheckMaximumEnergyToss(this->m_pAI, v24, vPosOut, &vLand, 1, vVelOut);
    }
    else
    {
      if ( v48 != scr_const.infinite_energy )
      {
        v54 = SL_ConvertToString(v48);
        v55 = j_va("checkGrenadeThrow: method must be 'min energy', 'min time', or 'max time' - value passed in was %s", v54);
        Scr_Error(COM_ERR_3320, scrContext, v55);
        goto LABEL_61;
      }
      v49 = Grenade_CheckInfiniteEnergyToss(this->m_pAI, v24, vPosOut, &vLand, vVelOut);
    }
    v41 = v49;
    if ( v49 )
    {
      Scr_SetString(&this->m_pAI->grenade.GrenadeTossMethod, throwInfo->methods[v46]);
      this->m_pAI->grenade.grenadeTossWithBounce = throwInfo->withBounce == 1;
      v50 = DVARINT_g_drawGrenadeHints;
      if ( !DVARINT_g_drawGrenadeHints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_drawGrenadeHints") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v50);
      if ( v50->current.integer > 0 )
      {
        G_DebugLineWithDuration(vPosOut, &out, &colorWhite, 0, 100);
        __asm { vmovss  xmm1, cs:__real@40400000; radius }
        G_DebugCircle(&vLand, *(float *)&_XMM1, &colorWhite, 1, 0, 100);
        if ( TossPositionsFromHints )
        {
          __asm { vmovss  xmm1, cs:__real@40c00000; radius }
          G_DebugCircle(&in, *(float *)&_XMM1, &colorCyan, 1, 0, 100);
        }
      }
LABEL_59:
      result = v41;
      goto LABEL_64;
    }
LABEL_61:
    ++v46;
    ++methods;
  }
  while ( v46 < 4 );
  result = v41;
LABEL_64:
  __asm { vmovaps xmm6, [rsp+160h+var_50] }
  return result;
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
  tmat33_t<vec3_t> axis; 
  char v31; 

  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  _RBP = vFrom;
  _RDI = (char *)vOffset;
  v7 = this->GetEntity(this);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 75, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  AnglesToAxis(&v7->r.currentAngles, &axis);
  if ( _RDI == &v31 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm4, dword ptr [rdi+4]
    vmovss  xmm5, dword ptr [rdi]
    vmovss  xmm6, dword ptr [rdi+8]
    vmulss  xmm1, xmm5, dword ptr [rsp+98h+axis]
    vmulss  xmm0, xmm4, dword ptr [rsp+98h+axis+0Ch]
    vmulss  xmm3, xmm5, dword ptr [rsp+98h+axis+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rsp+98h+axis+18h]
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm0, xmm2, dword ptr [rsi]
    vmulss  xmm1, xmm4, dword ptr [rsp+98h+axis+10h]
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm3, xmm4, dword ptr [rsp+98h+axis+14h]
    vmovss  dword ptr [rbp+0], xmm0
    vmulss  xmm0, xmm6, dword ptr [rsp+98h+axis+1Ch]
    vaddss  xmm2, xmm2, xmm0
    vaddss  xmm1, xmm2, dword ptr [rsi+4]
    vmulss  xmm0, xmm5, dword ptr [rsp+98h+axis+8]
    vmovss  dword ptr [rbp+4], xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+98h+axis+20h]
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm0, xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+8], xmm0
    vmovaps xmm6, [rsp+98h+var_28]
  }
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
__int64 AIScriptedInterface::Grenade_IsPointSafe(AIScriptedInterface *this, const vec3_t *vPoint)
{
  ai_scripted_t *m_pAI; 
  unsigned __int16 number; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  gentity_s *v11; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  bool detailTrace; 
  unsigned __int8 *priorityMap; 
  GCombat *v19; 
  __int64 result; 
  unsigned int radius; 
  float radiusa; 
  __int64 coneAngleCos; 
  int coneAngleCosa; 
  float coneAngleCosb; 
  float v29; 

  m_pAI = this->m_pAI;
  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  number = m_pAI->grenade.pGrenade.number;
  if ( !number )
    goto LABEL_30;
  v8 = number;
  v9 = number - 1;
  if ( v9 >= 0x800 )
  {
    coneAngleCosa = 2048;
    radius = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", radius, coneAngleCosa) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v10 = v8 - 1;
  if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v10] )
  {
    LODWORD(coneAngleCos) = m_pAI->grenade.pGrenade.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", coneAngleCos) )
      __debugbreak();
  }
  if ( !m_pAI->grenade.pGrenade.number )
  {
LABEL_30:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 41, ASSERT_TYPE_ASSERT, "(m_pAI->grenade.pGrenade.isDefined())", (const char *)&queryFormat, "m_pAI->grenade.pGrenade.isDefined()") )
      __debugbreak();
  }
  v11 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &v11->s);
  BG_ExplosionRadius(WeaponForEntity, 0);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, eax
  }
  if ( BG_ProjExplosionType(WeaponForEntity, 0) == WEAPPROJEXP_FLASHBANG )
    goto LABEL_26;
  __asm { vaddss  xmm6, xmm6, cs:__real@43000000 }
  detailTrace = BG_WeaponRadiusDamageDetailTrace(WeaponForEntity, 0);
  priorityMap = BG_GetWeaponPriorityMap(WeaponForEntity, 0);
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  v19 = GCombat::ms_gCombatSystem;
  if ( !G_Missile_IsGrenade(v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 55, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( grenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( grenade )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+98h+var_58], xmm0
    vmovss  [rsp+98h+coneAngleCos], xmm1
    vmovss  [rsp+98h+radius], xmm6
  }
  if ( !GCombat::CanRadiusDamageFromPos(v19, this->m_pAI->ent, vPoint, v11, &v11->c.mover.angle.pos1, radiusa, coneAngleCosb, NULL, v29, 1, 9441297, detailTrace, priorityMap) )
LABEL_26:
    result = 1i64;
  else
    result = 0i64;
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  return result;
}

/*
==============
AIScriptedInterface::Grenade_IsSafeTarget
==============
*/

__int64 __fastcall AIScriptedInterface::Grenade_IsSafeTarget(AIScriptedInterface *this, const vec3_t *vTargetPos, double radius)
{
  ai_scripted_t *m_pAI; 
  bool v10; 
  bool v11; 
  const scrContext_t *v14; 
  const Weapon *Weapon; 
  bool IsAlternate; 
  unsigned __int64 eTeam; 
  sentient_s *v21; 
  char v33; 
  __int64 result; 
  bitarray<224> iTeamFlags; 
  vec3_t vOriginOut; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-18h], xmm6 }
  _RSI = vTargetPos;
  __asm { vmovaps xmm6, xmm2 }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 258, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v10 = m_pAI->sentient == NULL;
  if ( !m_pAI->sentient )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 259, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v10 )
  {
    v14 = ScriptContext_Server();
    Weapon = GScr_Weapon_GetWeapon(v14, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
    IsAlternate = GScr_Weapon_IsAlternate(v14, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
    BG_ExplosionRadius(Weapon, IsAlternate);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm1, xmm0, cs:__real@43000000
      vmulss  xmm6, xmm1, xmm1
    }
  }
  else
  {
    __asm { vmulss  xmm6, xmm6, xmm6 }
  }
  eTeam = (unsigned int)this->m_pAI->sentient->eTeam;
  memset(&iTeamFlags, 0, sizeof(iTeamFlags));
  if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
    __debugbreak();
  iTeamFlags.array[eTeam >> 5] |= 0x80000000 >> (eTeam & 0x1F);
  v21 = Sentient_FirstSentient(&iTeamFlags);
  if ( v21 )
  {
    while ( 1 )
    {
      if ( v21->ent )
      {
        if ( v21->ent->health > 0 )
        {
          Sentient_GetOrigin(v21, &vOriginOut);
          __asm
          {
            vmovss  xmm0, dword ptr [rsi]
            vsubss  xmm3, xmm0, dword ptr [rsp+0A8h+vOriginOut]
            vmovss  xmm1, dword ptr [rsi+4]
            vsubss  xmm2, xmm1, dword ptr [rsp+0A8h+vOriginOut+4]
            vmovss  xmm0, dword ptr [rsi+8]
            vsubss  xmm4, xmm0, dword ptr [rsp+0A8h+vOriginOut+8]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vcomiss xmm2, xmm6
          }
          if ( v33 | v10 )
            break;
        }
      }
      v21 = Sentient_NextSentient(v21, &iTeamFlags);
      if ( !v21 )
        goto LABEL_18;
    }
    result = 0i64;
  }
  else
  {
LABEL_18:
    result = 1i64;
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_18] }
  return result;
}

/*
==============
AIScriptedInterface::Grenade_Ping
==============
*/
void AIScriptedInterface::Grenade_Ping(AIScriptedInterface *this, gentity_s *pGrenade, const vec3_t *origin)
{
  bool v6; 
  bool v7; 
  char v11; 
  AINavigator *pNavigator; 
  __int64 v13; 
  ai_scripted_t *m_pAI; 
  bool v26; 
  ai_scripted_t *v27; 
  unsigned __int16 number; 
  __int64 v29; 
  unsigned int v30; 
  __int64 v31; 
  gentity_s *v32; 
  bool ShouldIgnore; 
  ai_scripted_t *v34; 
  EntHandle *p_pGrenade; 
  __int64 v36; 
  __int64 v37; 
  char v38[8]; 
  int v39[4]; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1025, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  v6 = pGrenade == NULL;
  if ( !pGrenade )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1026, ASSERT_TYPE_ASSERT, "(pGrenade)", (const char *)&queryFormat, "pGrenade");
    v6 = !v7;
    if ( v7 )
      __debugbreak();
  }
  _RAX = this->m_pAI;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rax+49Ch]
  }
  if ( !v6 )
  {
    if ( !AICommonInterface::GetTargetEntity(this) )
      goto LABEL_10;
    *(double *)&_XMM0 = G_random();
    _RAX = this->m_pAI;
    __asm { vcomiss xmm0, dword ptr [rax+49Ch] }
    if ( v11 | v6 )
    {
LABEL_10:
      this->EnterAlertState(this);
      pNavigator = this->m_pAI->pNavigator;
      if ( pNavigator->m_bMultiGoalPath && pNavigator->HasPath(pNavigator) )
      {
        LOBYTE(v13) = -1;
        this->m_pAI->pNavigator->GetNextMultiGoalPathGoal(this->m_pAI->pNavigator, v13, (vec3_t *)v39, (bool *)v38);
        __asm
        {
          vmovss  xmm0, [rsp+88h+var_40]
          vmovss  xmm1, [rsp+88h+var_3C]
        }
        m_pAI = this->m_pAI;
        __asm
        {
          vsubss  xmm2, xmm1, dword ptr [rax+134h]
          vsubss  xmm4, xmm0, dword ptr [rax+130h]
          vmovss  xmm0, [rsp+88h+var_38]
          vsubss  xmm3, xmm0, dword ptr [rax+138h]
          vmulss  xmm1, xmm2, xmm2
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, cs:__real@47800000
        }
        if ( v11 )
          return;
      }
      else
      {
        m_pAI = this->m_pAI;
      }
      v26 = EntHandle::isDefined(&m_pAI->grenade.pGrenade) != 0;
      if ( G_Missile_IsGrenade(pGrenade) )
      {
        EntHandle::setEnt(&this->m_pAI->grenade.pGrenade, pGrenade);
        v27 = this->m_pAI;
        number = v27->grenade.pGrenade.number;
        if ( !number )
          goto LABEL_45;
        v29 = number;
        v30 = number - 1;
        if ( v30 >= 0x800 )
        {
          LODWORD(v36) = v30;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v36, 2048) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v31 = v29 - 1;
        if ( g_entities[v31].r.isInUse != g_entityIsInUse[v31] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v31] )
        {
          LODWORD(v37) = v27->grenade.pGrenade.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v37) )
            __debugbreak();
        }
        if ( !v27->grenade.pGrenade.number )
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
          v32 = EntHandle::ent(&pGrenade->parent);
          if ( Sentient_IsEnemyTeam(this->m_pAI->sentient, v32->sentient) )
          {
            GScr_AddEntity(pGrenade);
            GScr_Notify(this->m_pAI->ent, scr_const.grenadedanger, 1u);
          }
        }
      }
      if ( G_Missile_IsGrenade(pGrenade) )
      {
        G_Missile_PredictGrenadeLandPos(pGrenade);
        ShouldIgnore = AIScriptedInterface::Grenade_ShouldIgnore(this, pGrenade, v26);
        v34 = this->m_pAI;
        if ( ShouldIgnore )
        {
          p_pGrenade = &v34->grenade.pGrenade;
LABEL_42:
          EntHandle::setEnt(p_pGrenade, NULL);
          return;
        }
        if ( !v34->grenade.grenadeEvadeActive && AIScriptedInterface::Grenade_IsPointSafe(this, &v34->ent->r.currentOrigin) )
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
  int isDefined; 
  bool v32; 
  gentity_s *v33; 
  gentity_s *v34; 
  bool IsEnemyTeam; 
  bool result; 
  vec3_t vLookaheadDir; 

  _RBX = grenade;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 967, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 968, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 969, ASSERT_TYPE_ASSERT, "(grenade)", (const char *)&queryFormat, "grenade") )
    __debugbreak();
  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &_RBX->s);
  if ( BG_WeaponDef(WeaponForEntity, 0)->offhandClass == OFFHAND_CLASS_SMOKE_GRENADE || _RBX->targetname == scr_const.car_grenade )
  {
    result = 1;
  }
  else
  {
    if ( !AICommonInterface::HasPath(this) || AICommonInterface::PointAtGoal(this, &this->m_pAI->ent->r.currentOrigin, &this->m_pAI->scriptGoal) )
      goto LABEL_24;
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm7
      vmovaps [rsp+98h+var_48], xmm8
    }
    if ( !G_Missile_IsGrenade(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 987, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( grenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( grenade )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1FCh]
      vmovss  xmm1, dword ptr [rbx+200h]
      vsubss  xmm8, xmm0, dword ptr [rcx+130h]
      vsubss  xmm7, xmm1, dword ptr [rcx+134h]
      vmulss  xmm0, xmm8, xmm8
      vmulss  xmm2, xmm7, xmm7
      vaddss  xmm1, xmm2, xmm0
      vsqrtss xmm3, xmm1, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
      vdivss  xmm6, xmm1, xmm0
    }
    AIScriptedInterface::GetPathLookaheadDir(this, &vLookaheadDir);
    __asm
    {
      vmulss  xmm0, xmm7, xmm6
      vmovaps xmm7, [rsp+98h+var_38]
      vmulss  xmm3, xmm0, dword ptr [rsp+98h+vLookaheadDir+4]
      vmulss  xmm1, xmm8, xmm6
      vmovaps xmm8, [rsp+98h+var_48]
      vmulss  xmm2, xmm1, dword ptr [rsp+98h+vLookaheadDir]
      vaddss  xmm6, xmm3, xmm2
    }
    if ( !bWasPreviouslyAware )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm6, xmm0
      }
    }
    isDefined = EntHandle::isDefined(&_RBX->parent);
    v32 = isDefined == 0;
    if ( isDefined )
    {
      v33 = EntHandle::ent(&_RBX->parent);
      v32 = v33->sentient == NULL;
      if ( v33->sentient )
      {
        v34 = EntHandle::ent(&_RBX->parent);
        IsEnemyTeam = Sentient_IsEnemyTeam(this->m_pAI->sentient, v34->sentient);
        v32 = !IsEnemyTeam;
        if ( !IsEnemyTeam )
          goto LABEL_24;
      }
    }
    __asm { vcomiss xmm6, cs:__real@3f333333 }
    if ( v32 )
    {
LABEL_24:
      result = 0;
    }
    else
    {
      _RCX = this->m_pAI->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+130h]
        vsubss  xmm3, xmm0, dword ptr [rbx+1FCh]
        vmovss  xmm1, dword ptr [rcx+134h]
        vsubss  xmm2, xmm1, dword ptr [rbx+200h]
        vmovss  xmm0, dword ptr [rcx+138h]
        vsubss  xmm4, xmm0, dword ptr [rbx+204h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, cs:__real@44800000
      }
      result = !v32;
    }
  }
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  return result;
}

/*
==============
AIScriptedInterface::Grenade_ShouldReturnThrow
==============
*/
bool AIScriptedInterface::Grenade_ShouldReturnThrow(AIScriptedInterface *this)
{
  bool IsGrenade; 
  bool v4; 
  bool v5; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  char v16; 

  _RDI = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 896, ASSERT_TYPE_ASSERT, "(pGrenade)", (const char *)&queryFormat, "pGrenade") )
    __debugbreak();
  if ( this->m_pAI->combat.noGrenadeReturnThrow || EntHandle::isDefined(&_RDI->grenadeActivator) || this->m_pAI->grenade.bGrenadeTossValid || (_RDI->c.missile.flags & 0x800) != 0 )
    return 0;
  IsGrenade = G_Missile_IsGrenade(_RDI);
  v4 = !IsGrenade;
  if ( !IsGrenade )
  {
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 903, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( pGrenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( pGrenade )");
    v4 = !v5;
    if ( v5 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1FCh]
    vmovss  xmm1, dword ptr [rdi+200h]
    vsubss  xmm2, xmm1, dword ptr [rcx+134h]
    vsubss  xmm4, xmm0, dword ptr [rcx+130h]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
    vcomiss xmm1, cs:__real@46afc800
  }
  if ( !v4 )
    return 0;
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &_RDI->s);
  if ( BG_GetWeaponType(WeaponForEntity, 0) != WEAPTYPE_GRENADE || BG_WeaponStickinessType(WeaponForEntity, 0) )
    return 0;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 314, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( this->m_pAI->fixedNode )
    return 1;
  *(double *)&_XMM0 = G_random();
  _RAX = this->m_pAI;
  __asm { vcomiss xmm0, dword ptr [rax+4A0h] }
  return (v16 | v4) != 0;
}

/*
==============
AIScriptedInterface::Grenade_ShouldTryToReturnThrow
==============
*/
bool AIScriptedInterface::Grenade_ShouldTryToReturnThrow(AIScriptedInterface *this)
{
  char v4; 
  char v5; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 314, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( this->m_pAI->fixedNode )
    return 1;
  *(double *)&_XMM0 = G_random();
  _RAX = this->m_pAI;
  __asm { vcomiss xmm0, dword ptr [rax+4A0h] }
  return (v4 | v5) != 0;
}

/*
==============
AIScriptedInterface::Grenade_Throw
==============
*/

gentity_s *__fastcall AIScriptedInterface::Grenade_Throw(AIScriptedInterface *this, __int64 a2, double _XMM2_8)
{
  ai_scripted_t *m_pAI; 
  scrContext_t *v6; 
  int v7; 
  ai_scripted_t *v8; 
  int WorldTagPos; 
  const DObj *ServerDObjForEnt; 
  const char *Name; 
  unsigned int number; 
  const char *v15; 
  const char *v16; 
  const Weapon *Weapon; 
  bool IsAlternate; 
  gentity_s *v32; 
  EntHandle *p_parent; 
  gentity_s *v34; 
  gentity_s *v35; 
  GMissile *MissileSystem; 
  int time; 
  gentity_s *ent; 
  int v39; 
  GWeaponMap *Instance; 
  gentity_s *v41; 
  gentity_s *v42; 
  int gameTime; 
  int fuseTime; 
  ai_scripted_t *v45; 
  unsigned __int8 grenadeAmmo; 
  GEntityMissileComponentData v47; 
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
  v6 = ScriptContext_Server();
  if ( !EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) && !this->m_pAI->grenade.bGrenadeTossValid )
    Scr_ErrorWithDialogMessage(v6, "cannot call 'throwGrenade' before calling 'checkGrenadeThrow' except in grenade return scripts", (const char *)&queryFormat.fmt + 3);
  v7 = 0;
  v8 = this->m_pAI;
  _RAX = v8;
  if ( v8->grenade.bGrenadeTargetValid )
  {
    WorldTagPos = G_Utils_DObjGetWorldTagPos(v8->ent, scr_const.tag_accessory_right, &outPos);
    _RCX = this->m_pAI;
    if ( !WorldTagPos )
    {
      ServerDObjForEnt = Com_GetServerDObjForEnt(_RCX->ent);
      Name = DObjGetName(ServerDObjForEnt);
      number = this->m_pAI->ent->s.number;
      v15 = SL_ConvertToString(scr_const.tag_accessory_right);
      v16 = j_va("Missing tag [%s] on entity [%d] (%s)\n", v15, number, Name);
      Scr_Error(COM_ERR_3321, v6, v16);
      return 0i64;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+30h+outPos]
      vmovss  dword ptr [rbp+30h+throwInfo], xmm0
      vmovss  xmm1, dword ptr [rbp+30h+outPos+4]
      vmovss  dword ptr [rbp+30h+throwInfo+4], xmm1
      vmovss  xmm0, dword ptr [rbp+30h+outPos+8]
      vmovss  dword ptr [rbp+30h+throwInfo+8], xmm0
      vxorps  xmm2, xmm2, xmm2
      vmovss  dword ptr [rbp+30h+throwInfo+0Ch], xmm2
      vmovss  dword ptr [rbp+30h+throwInfo+10h], xmm2
      vmovss  dword ptr [rbp+30h+throwInfo+14h], xmm2
      vmovss  xmm0, dword ptr [rcx+4C4h]
      vmovss  dword ptr [rbp+30h+throwInfo+18h], xmm0
      vmovss  xmm1, dword ptr [rcx+4C8h]
      vmovss  dword ptr [rbp+30h+throwInfo+1Ch], xmm1
      vmovss  xmm0, dword ptr [rcx+4CCh]
      vmovss  dword ptr [rbp+30h+throwInfo+20h], xmm0
      vmovss  dword ptr [rbp+30h+throwInfo+24h], xmm2
    }
    throwInfo.m_parentEntNum = 1;
    throwInfo.m_ownerEntNum = _RCX->grenade.grenadeTossWithBounce;
    throwInfo.m_entityState = (entityState_t *)(unsigned int)_RCX->grenade.GrenadeTossMethod;
    v7 = AIScriptedInterface::Grenade_CheckTossPos(this, (const AIGrenadeCheckInfo *)&throwInfo, &vPosOut, &vVelOut);
    v8 = this->m_pAI;
    _RAX = v8;
  }
  if ( !v7 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+4B8h]
      vmovss  dword ptr [rbp+30h+vPosOut], xmm0
      vmovss  xmm1, dword ptr [rax+4BCh]
      vmovss  dword ptr [rbp+30h+vPosOut+4], xmm1
      vmovss  xmm0, dword ptr [rax+4C0h]
      vmovss  dword ptr [rbp+30h+vPosOut+8], xmm0
      vmovss  xmm1, dword ptr [rax+4D0h]
      vmovss  dword ptr [rsp+130h+vVelOut], xmm1
      vmovss  xmm0, dword ptr [rax+4D4h]
      vmovss  dword ptr [rsp+130h+vVelOut+4], xmm0
      vmovss  xmm1, dword ptr [rax+4D8h]
      vmovss  dword ptr [rsp+130h+vVelOut+8], xmm1
    }
    v8 = _RAX;
  }
  Weapon = GScr_Weapon_GetWeapon(v6, (const scr_weapon_t)v8->grenade.grenadeWeapon);
  IsAlternate = GScr_Weapon_IsAlternate(v6, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
  if ( !BG_WeaponDef(Weapon, IsAlternate) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 818, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) && (v32 = EntHandle::ent(&this->m_pAI->grenade.pGrenade)) != NULL && (p_parent = &v32->parent, EntHandle::isDefined(&v32->parent)) && EntHandle::ent(p_parent) == this->m_pAI->ent )
  {
    this->Grenade_Detach(this);
    v34 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
    GEntityMissileComponentData::GEntityMissileComponentData(&v47, v34);
    v35 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
    GEntityData::GEntityData(&throwInfo, v35, &v47);
    MissileSystem = GMissile::GetMissileSystem();
    if ( !MissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 831, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
      __debugbreak();
    time = level.time;
    ent = this->m_pAI->ent;
    if ( ent )
      v39 = ent->s.number;
    else
      v39 = 2047;
    Instance = GWeaponMap::GetInstance();
    BgMissile::InitGrenadeEntity(MissileSystem, Instance, &throwInfo, v39, time);
    BgMissile::InitGrenadeMovement(MissileSystem, &throwInfo, &vPosOut, &vVelOut, Weapon, 1, level.time);
    v41 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
    SV_LinkEntity(v41);
    v42 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
  }
  else
  {
    if ( !Weapon->weaponIdx )
      return 0i64;
    gameTime = level.time;
    fuseTime = BG_WeaponAIFuseTime(Weapon, IsAlternate);
    v42 = G_Missile_FireGrenade(this->m_pAI->ent, &vPosOut, &vVelOut, Weapon, 0, WEAPON_HAND_DEFAULT, 1, fuseTime, 1, gameTime);
    v45 = this->m_pAI;
    grenadeAmmo = v45->weaponInfo.grenadeAmmo;
    if ( grenadeAmmo )
      v45->weaponInfo.grenadeAmmo = grenadeAmmo - 1;
  }
  this->m_pAI->grenade.bGrenadeTossValid = 0;
  Scr_SetString(&this->m_pAI->grenade.GrenadeTossMethod, (scr_string_t)0);
  if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 856, ASSERT_TYPE_ASSERT, "(pGrenade)", (const char *)&queryFormat, "pGrenade") )
    __debugbreak();
  return v42;
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
  char v6; 
  char v7; 

  _RAX = this->m_pAI;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rax+49Ch]
  }
  if ( !AICommonInterface::GetTargetEntity(this) )
    return 1;
  *(double *)&_XMM0 = G_random();
  _RAX = this->m_pAI;
  __asm { vcomiss xmm0, dword ptr [rax+49Ch] }
  return (v6 | v7) != 0;
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
  AIScriptedInterface_vtbl *v9; 
  __int64 v12; 
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
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+98h+vOriginOut]
      vaddss  xmm1, xmm0, dword ptr [rsp+98h+vVelOut]
      vmovss  xmm2, dword ptr [rsp+98h+vVelOut+4]
      vaddss  xmm0, xmm2, dword ptr [rsp+98h+vOriginOut+4]
    }
    v9 = this->__vftable;
    __asm
    {
      vmovss  dword ptr [rsp+98h+vTargetPos], xmm1
      vmovss  xmm1, dword ptr [rsp+98h+vVelOut+8]
      vaddss  xmm2, xmm1, dword ptr [rsp+98h+vOriginOut+8]
      vmovss  dword ptr [rsp+98h+vTargetPos+8], xmm2
      vmovss  dword ptr [rsp+98h+vTargetPos+4], xmm0
    }
    v12 = (__int64)v9->GetEntity(this);
    if ( AIScriptedInterface::Grenade_CheckLaunch(this, (const vec3_t *)(v12 + 304), &vectorValue, &vTargetPos, &outTossVelocity) )
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
  signed int v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  ai_scripted_t *v16; 
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
      _RCX = this->m_pAI->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+130h]
        vmovss  dword ptr [rsp+98h+throwInfo.vStandPos], xmm0
        vmovss  xmm1, dword ptr [rcx+134h]
        vmovss  dword ptr [rsp+98h+throwInfo.vStandPos+4], xmm1
        vmovss  xmm0, dword ptr [rcx+138h]
        vmovss  dword ptr [rsp+98h+throwInfo.vStandPos+8], xmm0
      }
      Scr_GetVector(scrContext, 0, &throwInfo.vOffset);
      __asm { vxorps  xmm0, xmm0, xmm0 }
      throwInfo.withBounce = v6;
      throwInfo.bRechecking = 0;
      __asm
      {
        vmovss  dword ptr [rsp+98h+throwInfo.vTargetPos], xmm0
        vmovss  dword ptr [rsp+98h+throwInfo.vTargetPos+4], xmm0
        vmovss  dword ptr [rsp+98h+throwInfo.vTargetPos+8], xmm0
      }
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
      __asm { vmovss  [rsp+98h+throwInfo.randomRange], xmm0 }
      v12 = Scr_GetNumParam(scrContext) - 2;
      if ( v12 >= 4 )
      {
        Scr_Error(COM_ERR_3324, scrContext, "Too many grenade throw methods\n");
        v12 = 4;
      }
      v13 = 0;
      v14 = v12;
      if ( v12 <= 0 )
        goto LABEL_15;
      v15 = 0i64;
      do
      {
        throwInfo.methods[v15] = Scr_GetConstString(scrContext, v13 + 2);
        ++v13;
        ++v15;
      }
      while ( v15 < v14 );
      if ( v13 < 4 )
LABEL_15:
        throwInfo.methods[v13] = 0;
      this->m_pAI->grenade.bGrenadeTossValid = AIScriptedInterface::Grenade_CheckToss(this, &throwInfo, &this->m_pAI->grenade.vGrenadeTossPos, &this->m_pAI->grenade.vGrenadeTossVel) == 1;
      v16 = this->m_pAI;
      if ( v16->grenade.bGrenadeTossValid )
        Scr_AddVector(scrContext, v16->grenade.vGrenadeTossVel.v);
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
  signed int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  char v19; 
  char v20; 
  ai_scripted_t *v25; 
  vec3_t end; 
  AIGrenadeCheckInfo throwInfo; 
  trace_t results; 

  if ( !this->GetSentient(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1284, ASSERT_TYPE_ASSERT, "(GetSentient())", (const char *)&queryFormat, "GetSentient()") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->weaponInfo.grenadeAmmo )
  {
    _RAX = m_pAI->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+130h]
      vmovss  dword ptr [rbp+57h+throwInfo.vStandPos], xmm0
      vmovss  xmm1, dword ptr [rax+134h]
      vmovss  dword ptr [rbp+57h+throwInfo.vStandPos+4], xmm1
      vmovss  xmm0, dword ptr [rax+138h]
      vmovss  dword ptr [rbp+57h+throwInfo.vStandPos+8], xmm0
    }
    Scr_GetVector(scrContext, 0, &throwInfo.vOffset);
    Scr_GetVector(scrContext, 1u, &throwInfo.vTargetPos);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    throwInfo.withBounce = Scr_GetInt(scrContext, 2u);
    __asm { vmovss  [rbp+57h+throwInfo.randomRange], xmm0 }
    throwInfo.bRechecking = 0;
    v10 = Scr_GetNumParam(scrContext) - 3;
    if ( v10 >= 4 )
    {
      Scr_Error(COM_ERR_3324, scrContext, "Too many grenade throw methods\n");
      v10 = 4;
    }
    v11 = 0;
    v12 = v10;
    if ( v10 <= 0 )
      goto LABEL_11;
    v13 = 0i64;
    do
    {
      throwInfo.methods[v13] = Scr_GetConstString(scrContext, v11 + 3);
      ++v11;
      ++v13;
    }
    while ( v13 < v12 );
    if ( v11 < 4 )
LABEL_11:
      throwInfo.methods[v11] = 0;
    if ( throwInfo.withBounce )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+throwInfo.vTargetPos]
        vmovss  xmm1, dword ptr [rbp+57h+throwInfo.vTargetPos+4]
        vmovss  dword ptr [rsp+110h+end], xmm0
        vmovss  xmm0, dword ptr [rbp+57h+throwInfo.vTargetPos+8]
        vsubss  xmm2, xmm0, cs:__real@3f800000
        vmovss  dword ptr [rsp+110h+end+8], xmm2
        vmovss  dword ptr [rsp+110h+end+4], xmm1
      }
      G_Main_TraceCapsule(&results, &throwInfo.vTargetPos, &end, &bounds_origin, 2047, 2065);
      __asm
      {
        vmovss  xmm0, [rbp+57h+results.fraction]
        vcomiss xmm0, cs:__real@3f000000
      }
      if ( !(v19 | v20) )
        Com_Printf(18, "targetPos for checkGrenadeThrowPos not at ground level\n");
    }
    _R8 = this->m_pAI;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+throwInfo.vTargetPos]
      vmovss  dword ptr [r8+4C4h], xmm0
      vmovss  xmm1, dword ptr [rbp+57h+throwInfo.vTargetPos+4]
      vmovss  dword ptr [r8+4C8h], xmm1
      vmovss  xmm0, dword ptr [rbp+57h+throwInfo.vTargetPos+8]
      vmovss  dword ptr [r8+4CCh], xmm0
    }
    this->m_pAI->grenade.bGrenadeTossValid = AIScriptedInterface::Grenade_CheckTossPos(this, &throwInfo, &_R8->grenade.vGrenadeTossPos, &_R8->grenade.vGrenadeTossVel) == 1;
    v25 = this->m_pAI;
    if ( v25->grenade.bGrenadeTossValid )
      Scr_AddVector(scrContext, v25->grenade.vGrenadeTossVel.v);
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
  int IsSafeTarget; 
  vec3_t vectorValue; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  if ( !this->GetSentient(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_grenade.cpp", 1404, ASSERT_TYPE_ASSERT, "(GetSentient())", (const char *)&queryFormat, "GetSentient()") )
    __debugbreak();
  __asm { vxorps  xmm6, xmm6, xmm6 }
  GScr_GetEntity(0);
  Scr_GetVector(scrContext, 1u, &vectorValue);
  if ( Scr_GetNumParam(scrContext) > 2 )
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
    __asm { vmovaps xmm6, xmm0 }
  }
  __asm { vmovaps xmm2, xmm6; radius }
  IsSafeTarget = AIScriptedInterface::Grenade_IsSafeTarget(this, &vectorValue, *(float *)&_XMM2);
  Scr_AddBool(scrContext, IsSafeTarget);
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
AIScriptedInterface::OnScrCmd_MagicGrenade
==============
*/
void AIScriptedInterface::OnScrCmd_MagicGrenade(AIScriptedInterface *this, scrContext_t *scrContext)
{
  gentity_s *v5; 
  int shouldThrow; 
  int grenadeTime; 
  const Weapon *grenadeWeapon; 
  bool IsAlternate; 
  const char *v11; 
  const char *v12; 
  const WeaponDef *v13; 
  const gentity_s *v14; 
  vec3_t vTargetPos; 
  vec3_t vectorValue; 

  v5 = this->GetEntity(this);
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
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si ebp, xmm1
    }
  }
  if ( Scr_GetNumParam(scrContext) == 4 )
    shouldThrow = Scr_GetInt(scrContext, 3u);
  grenadeWeapon = GScr_Weapon_GetWeapon(scrContext, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
  IsAlternate = GScr_Weapon_IsAlternate(scrContext, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
  if ( !grenadeWeapon->weaponIdx )
  {
    v11 = SL_ConvertToString(v5->classname);
    v12 = j_va("Actor [%s] doesn't have a grenade weapon set.", v11);
    Scr_Error(COM_ERR_3908, scrContext, v12);
  }
  v13 = BG_WeaponDef(grenadeWeapon, IsAlternate);
  v14 = MagicGrenade_Internal(v5, this->m_pAI, &vectorValue, &vTargetPos, grenadeWeapon, grenadeTime, shouldThrow, v13->stickiness != WEAPSTICKINESS_NONE);
  if ( v14 )
    GScr_AddEntity(v14);
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
  gentity_s *v5; 
  int fuseTime; 
  const Weapon *Weapon; 
  bool isAlternate; 
  const char *v10; 
  const char *v11; 
  const gentity_s *v12; 
  vec3_t dir; 
  vec3_t vectorValue; 

  v5 = this->GetEntity(this);
  if ( Scr_GetNumParam(scrContext) != 2 && Scr_GetNumParam(scrContext) != 3 )
    Scr_Error(COM_ERR_3909, scrContext, "<actor> MagicGrenadeManual <origin> <velocity> [time To Blow (seconds)].\n");
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &dir);
  if ( Scr_GetNumParam(scrContext) == 3 )
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si edi, xmm1
    }
  }
  else
  {
    fuseTime = 5000;
  }
  Weapon = GScr_Weapon_GetWeapon(scrContext, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
  isAlternate = GScr_Weapon_IsAlternate(scrContext, (const scr_weapon_t)this->m_pAI->grenade.grenadeWeapon);
  if ( !Weapon->weaponIdx )
  {
    v10 = SL_ConvertToString(v5->classname);
    v11 = j_va("AI [%s] doesn't have a grenade weapon set.", v10);
    Scr_Error(COM_ERR_3910, scrContext, v11);
  }
  v12 = G_Missile_FireGrenade(v5, &vectorValue, &dir, Weapon, isAlternate, WEAPON_HAND_DEFAULT, 1, fuseTime, 1, level.time);
  GScr_AddEntity(v12);
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

