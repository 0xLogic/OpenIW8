/*
==============
AIScriptedInterface::GetDesiredLookDirFromMoveAndFacingDir3D
==============
*/

void __fastcall AIScriptedInterface::GetDesiredLookDirFromMoveAndFacingDir3D(const vec3_t *moveDir, const vec3_t *dirToFace, vec3_t *outDesiredDir)
{
  ?GetDesiredLookDirFromMoveAndFacingDir3D@AIScriptedInterface@@KAXAEBTvec3_t@@0AEAT2@@Z(moveDir, dirToFace, outDesiredDir);
}

/*
==============
AIScriptedInterface::UpdateLookAngles
==============
*/

void __fastcall AIScriptedInterface::UpdateLookAngles(AIScriptedInterface *this)
{
  ?UpdateLookAngles@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::FaceMotion
==============
*/

void __fastcall AIScriptedInterface::FaceMotion(AIScriptedInterface *this, ai_orient_t *pOrient)
{
  ?FaceMotion@AIScriptedInterface@@QEBAXPEAUai_orient_t@@@Z(this, pOrient);
}

/*
==============
AIScriptedInterface::ShouldStrafe
==============
*/

bool __fastcall AIScriptedInterface::ShouldStrafe(AIScriptedInterface *this)
{
  return ?ShouldStrafe@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::SetDesiredBodyAngles
==============
*/

void __fastcall AIScriptedInterface::SetDesiredBodyAngles(AIScriptedInterface *this, ai_orient_t *pOrient, const vec3_t *vDesiredAngles, int bSetBodyPitchAndRoll)
{
  ?SetDesiredBodyAngles@AIScriptedInterface@@UEBAXPEAUai_orient_t@@AEBTvec3_t@@H@Z(this, pOrient, vDesiredAngles, bSetBodyPitchAndRoll);
}

/*
==============
AIScriptedInterface::GetAnglesToLikelyEnemyPath
==============
*/

bool __fastcall AIScriptedInterface::GetAnglesToLikelyEnemyPath(AIScriptedInterface *this)
{
  return ?GetAnglesToLikelyEnemyPath@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::UpdateBodyAngle
==============
*/

void __fastcall AIScriptedInterface::UpdateBodyAngle(AIScriptedInterface *this)
{
  ?UpdateBodyAngle@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::PredictOrientation
==============
*/

void __fastcall AIScriptedInterface::PredictOrientation(AIScriptedInterface *this)
{
  ?PredictOrientation@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::ForcePitchAndYawDeltas
==============
*/

void __fastcall AIScriptedInterface::ForcePitchAndYawDeltas(AIScriptedInterface *this, const float pitchDelta, const float yawDelta)
{
  ?ForcePitchAndYawDeltas@AIScriptedInterface@@QEBAXMM@Z(this, pitchDelta, yawDelta);
}

/*
==============
AIScriptedInterface::FaceVector
==============
*/

void __fastcall AIScriptedInterface::FaceVector(AIScriptedInterface *this, ai_orient_t *pOrient, const vec3_t *v)
{
  ?FaceVector@AIScriptedInterface@@QEBAXPEAUai_orient_t@@AEBTvec3_t@@@Z(this, pOrient, v);
}

/*
==============
AIScriptedInterface::SetDesiredBodyRoll
==============
*/

void __fastcall AIScriptedInterface::SetDesiredBodyRoll(ai_orient_t *pOrient, const float fAngle)
{
  ?SetDesiredBodyRoll@AIScriptedInterface@@KAXPEAUai_orient_t@@M@Z(pOrient, fAngle);
}

/*
==============
AIScriptedInterface::FaceVectorSnapToMovementQuadrant3D
==============
*/

void __fastcall AIScriptedInterface::FaceVectorSnapToMovementQuadrant3D(AIScriptedInterface *this, ai_orient_t *pOrient, const vec3_t *lookAtPos, bool enemyVisible)
{
  ?FaceVectorSnapToMovementQuadrant3D@AIScriptedInterface@@QEBAXPEAUai_orient_t@@AEBTvec3_t@@_N@Z(this, pOrient, lookAtPos, enemyVisible);
}

/*
==============
AIScriptedInterface::SetDesiredBodyPitch
==============
*/

void __fastcall AIScriptedInterface::SetDesiredBodyPitch(ai_orient_t *pOrient, const float fAngle)
{
  ?SetDesiredBodyPitch@AIScriptedInterface@@KAXPEAUai_orient_t@@M@Z(pOrient, fAngle);
}

/*
==============
AIScriptedInterface::FaceEnemyOrMotion
==============
*/

void __fastcall AIScriptedInterface::FaceEnemyOrMotion(AIScriptedInterface *this, ai_orient_t *pOrient)
{
  ?FaceEnemyOrMotion@AIScriptedInterface@@QEBAXPEAUai_orient_t@@@Z(this, pOrient);
}

/*
==============
AIScriptedInterface::ShouldCornerStrafeBecauseEnemy
==============
*/

bool __fastcall AIScriptedInterface::ShouldCornerStrafeBecauseEnemy(AIScriptedInterface *this)
{
  return ?ShouldCornerStrafeBecauseEnemy@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::DecideOrientation
==============
*/

void __fastcall AIScriptedInterface::DecideOrientation(AIScriptedInterface *this)
{
  ?DecideOrientation@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::SetLookAngles
==============
*/

void __fastcall AIScriptedInterface::SetLookAngles(AIScriptedInterface *this, const float fPitch, const float fYaw)
{
  ?SetLookAngles@AIScriptedInterface@@QEBAXMM@Z(this, fPitch, fYaw);
}

/*
==============
AIScriptedInterface::SetDesiredLookAngles
==============
*/

void __fastcall AIScriptedInterface::SetDesiredLookAngles(ai_orient_t *pOrient, const float fPitch, const float fYaw)
{
  ?SetDesiredLookAngles@AIScriptedInterface@@KAXPEAUai_orient_t@@MM@Z(pOrient, fPitch, fYaw);
}

/*
==============
AIScriptedInterface::AdjustFacingForStrafe
==============
*/

void __fastcall AIScriptedInterface::AdjustFacingForStrafe(AIScriptedInterface *this, const vec3_t *desiredAngles)
{
  ?AdjustFacingForStrafe@AIScriptedInterface@@QEBAXAEBTvec3_t@@@Z(this, desiredAngles);
}

/*
==============
AIScriptedInterface::SetDesiredBodyYaw
==============
*/

void __fastcall AIScriptedInterface::SetDesiredBodyYaw(ai_orient_t *pOrient, const float fAngle)
{
  ?SetDesiredBodyYaw@AIScriptedInterface@@KAXPEAUai_orient_t@@M@Z(pOrient, fAngle);
}

/*
==============
AIScriptedInterface::SetAnglesToLikelyEnemyPath
==============
*/

void __fastcall AIScriptedInterface::SetAnglesToLikelyEnemyPath(AIScriptedInterface *this)
{
  ?SetAnglesToLikelyEnemyPath@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::FaceVectorSnapToMovementQuadrant
==============
*/

void __fastcall AIScriptedInterface::FaceVectorSnapToMovementQuadrant(AIScriptedInterface *this, ai_orient_t *pOrient, const vec3_t *lookAtPos, bool enemyVisible)
{
  ?FaceVectorSnapToMovementQuadrant@AIScriptedInterface@@UEBAXPEAUai_orient_t@@AEBTvec3_t@@_N@Z(this, pOrient, lookAtPos, enemyVisible);
}

/*
==============
AIScriptedInterface::SetBodyAngles
==============
*/

void __fastcall AIScriptedInterface::SetBodyAngles(AIScriptedInterface *this, const vec3_t *angles)
{
  ?SetBodyAngles@AIScriptedInterface@@UEBAXAEBTvec3_t@@@Z(this, angles);
}

/*
==============
AIScriptedInterface::CheckGunBlockedByWallWhileMoving
==============
*/

bool __fastcall AIScriptedInterface::CheckGunBlockedByWallWhileMoving(AIScriptedInterface *this, const vec3_t *predictedMovePos, const vec2_t *dir)
{
  return ?CheckGunBlockedByWallWhileMoving@AIScriptedInterface@@QEBA_NAEBTvec3_t@@AEBTvec2_t@@@Z(this, predictedMovePos, dir);
}

/*
==============
AIScriptedInterface::ClearScriptOrient
==============
*/

void __fastcall AIScriptedInterface::ClearScriptOrient(AIScriptedInterface *this)
{
  ?ClearScriptOrient@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::ShouldFaceGoalNode
==============
*/

bool __fastcall AIScriptedInterface::ShouldFaceGoalNode(AIScriptedInterface *this)
{
  return ?ShouldFaceGoalNode@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::ShouldForceCautiousStrafe
==============
*/

bool __fastcall AIScriptedInterface::ShouldForceCautiousStrafe(AIScriptedInterface *this)
{
  return ?ShouldForceCautiousStrafe@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::SetOrientMode
==============
*/

void __fastcall AIScriptedInterface::SetOrientMode(AIScriptedInterface *this, ai_orient_mode_t eMode)
{
  ?SetOrientMode@AIScriptedInterface@@QEBAXW4ai_orient_mode_t@@@Z(this, eMode);
}

/*
==============
AIScriptedInterface::LerpAnglesWithQuaternions
==============
*/

void __fastcall AIScriptedInterface::LerpAnglesWithQuaternions(const vec3_t *currentAngles, const vec3_t *desiredAngles, const float lerpSpeed, vec3_t *outAngles)
{
  ?LerpAnglesWithQuaternions@AIScriptedInterface@@SAXAEBTvec3_t@@0MAEAT2@@Z(currentAngles, desiredAngles, lerpSpeed, outAngles);
}

/*
==============
AIScriptedInterface::FaceLikelyEnemyPath
==============
*/

void __fastcall AIScriptedInterface::FaceLikelyEnemyPath(AIScriptedInterface *this, ai_orient_t *pOrient)
{
  ?FaceLikelyEnemyPath@AIScriptedInterface@@QEBAXPEAUai_orient_t@@@Z(this, pOrient);
}

/*
==============
AIScriptedInterface::FaceGoalNode
==============
*/

void __fastcall AIScriptedInterface::FaceGoalNode(AIScriptedInterface *this, ai_orient_t *pOrient)
{
  ?FaceGoalNode@AIScriptedInterface@@QEBAXPEAUai_orient_t@@@Z(this, pOrient);
}

/*
==============
AIScriptedInterface::FaceEnemy
==============
*/

void __fastcall AIScriptedInterface::FaceEnemy(AIScriptedInterface *this, ai_orient_t *pOrient)
{
  ?FaceEnemy@AIScriptedInterface@@QEBAXPEAUai_orient_t@@@Z(this, pOrient);
}

/*
==============
AIScriptedInterface::ShouldCautiousStrafe
==============
*/

bool __fastcall AIScriptedInterface::ShouldCautiousStrafe(AIScriptedInterface *this)
{
  return ?ShouldCautiousStrafe@AIScriptedInterface@@QEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::AdjustFacingForStrafe
==============
*/
void AIScriptedInterface::AdjustFacingForStrafe(AIScriptedInterface *this, const vec3_t *desiredAngles)
{
  __int64 v26; 
  __int64 v28; 
  char v68; 
  vec2_t vec; 
  int v71[5]; 
  bfx::AreaHandle v72; 
  bfx::LinkHandle v73; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RAX = this->m_pAI;
  if ( _RAX->eAnimMode == AI_ANIM_MOVE_CODE )
  {
    _RCX = (const vec2_t *)&_RAX->Physics.vWishDelta;
    __asm
    {
      vmovss  xmm2, dword ptr [rcx+4]
      vmovss  xmm0, dword ptr [rcx]
      vmovss  xmm3, dword ptr [rcx+8]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, cs:__real@3a83126f
    }
    if ( _RAX->eAnimMode == AI_ANIM_UNKNOWN )
      goto LABEL_11;
    *(double *)&_XMM0 = vectoyaw(_RCX);
    __asm { vmovaps xmm6, xmm0 }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rax+88Ch]
      vmovss  xmm0, dword ptr [rax+888h]
      vmovss  xmm3, dword ptr [rax+890h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vmaxss  xmm6, xmm0, cs:__real@3f800000
    }
    bfx::AreaHandle::AreaHandle(&v72);
    bfx::LinkHandle::LinkHandle(&v73);
    v68 = 0;
    LOBYTE(v26) = 1;
    __asm { vmovaps xmm1, xmm6 }
    ((void (__fastcall *)(AINavigator *, __int64, __int64, int *, char))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, v28, v26, v71, v68);
    __asm
    {
      vmovss  xmm0, [rsp+0A8h+var_60]
      vsubss  xmm1, xmm0, dword ptr [rcx+130h]
      vmovss  dword ptr [rsp+0A8h+vec], xmm1
      vmovss  xmm2, [rsp+0A8h+var_5C]
      vsubss  xmm0, xmm2, dword ptr [rcx+134h]
      vmovss  dword ptr [rsp+0A8h+vec+4], xmm0
      vmovss  xmm1, [rsp+0A8h+var_58]
      vsubss  xmm2, xmm1, dword ptr [rcx+138h]
      vmovss  [rsp+0A8h+var_68], xmm2
    }
    *(double *)&_XMM0 = vectoyaw(&vec);
    __asm { vmovaps xmm6, xmm0 }
    bfx::LinkHandle::~LinkHandle(&v73);
    bfx::AreaHandle::~AreaHandle(&v72);
  }
  _RCX = this->m_pAI;
  if ( _RCX->bPredictedFaceMotionChanged )
  {
    __asm
    {
      vsubss  xmm0, xmm6, dword ptr [rax+140h]
      vmulss  xmm5, xmm0, cs:__real@3b360b61
      vaddss  xmm2, xmm5, cs:__real@3f000000
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm3, xmm1, xmm2
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm4, xmm0, xmm3, 1
      vsubss  xmm1, xmm5, xmm4
      vmulss  xmm0, xmm1, cs:__real@43b40000
      vmovss  dword ptr [rcx+0D50h], xmm0
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm4, xmm6, dword ptr [rdi+4]
      vsubss  xmm0, xmm4, dword ptr [rcx+0D50h]
      vmovss  xmm5, cs:__real@3b360b61
      vmulss  xmm3, xmm0, xmm5
      vxorps  xmm6, xmm6, xmm6
      vaddss  xmm1, xmm3, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm1, xmm0, xmm1
      vroundss xmm2, xmm6, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, cs:__real@43b40000; val
      vandps  xmm1, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm2, cs:__real@42340000; max
      vcomiss xmm1, xmm2
    }
    if ( !_RCX->bPredictedFaceMotionChanged || _RCX->bStrafeReverse )
    {
      __asm
      {
        vmulss  xmm3, xmm4, xmm5
        vaddss  xmm1, xmm3, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vroundss xmm2, xmm6, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm0, cs:__real@43b40000
        vmovss  dword ptr [rcx+0D50h], xmm1
      }
    }
    else
    {
      __asm { vmovss  xmm1, cs:__real@c2340000; min }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      _RAX = this->m_pAI;
      __asm
      {
        vaddss  xmm0, xmm0, dword ptr [rax+0D50h]
        vmovss  dword ptr [rax+0D50h], xmm0
      }
    }
  }
LABEL_11:
  __asm { vmovaps xmm6, [rsp+0A8h+var_18] }
}

/*
==============
AIScriptedInterface::CheckGunBlockedByWallWhileMoving
==============
*/
char AIScriptedInterface::CheckGunBlockedByWallWhileMoving(AIScriptedInterface *this, const vec3_t *predictedMovePos, const vec2_t *dir)
{
  char v16; 
  AIScriptedInterface_vtbl *v19; 
  ai_scripted_t *m_pAI; 
  const dvar_t *v32; 
  const dvar_t *v34; 
  vec3_t start; 
  vec3_t end; 
  vec3_t vFinalGoal; 
  Bounds bounds; 

  _RSI = predictedMovePos;
  if ( this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 339, ASSERT_TYPE_ASSERT, "(!Is3D())", (const char *)&queryFormat, "!Is3D()") )
    __debugbreak();
  if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 340, ASSERT_TYPE_ASSERT, "(HasPath())", (const char *)&queryFormat, "HasPath()") )
    __debugbreak();
  AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+vFinalGoal]
    vmovss  xmm1, dword ptr [rbp+57h+vFinalGoal+4]
    vsubss  xmm3, xmm0, dword ptr [rcx+130h]
    vsubss  xmm2, xmm1, dword ptr [rcx+134h]
    vmovss  xmm0, dword ptr [rbp+57h+vFinalGoal+8]
    vsubss  xmm4, xmm0, dword ptr [rcx+138h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:__real@44800000
  }
  if ( v16 )
    return 0;
  __asm
  {
    vmovss  xmm1, cs:__real@41200000
    vmovups xmm0, cs:__xmm@41200000000000000000000000000000
  }
  v19 = this->__vftable;
  __asm
  {
    vmovss  dword ptr [rbp+57h+bounds.halfSize+4], xmm1
    vmovss  dword ptr [rbp+57h+bounds.halfSize+8], xmm1
    vmovups xmmword ptr [rbp+57h+bounds.midPoint], xmm0
  }
  v19->GetEyePosition(this, &start);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+start+8]
    vsubss  xmm1, xmm0, cs:__real@40a00000
    vmovss  xmm3, cs:__real@42200000
    vmulss  xmm0, xmm3, dword ptr [rdi]
    vmovss  xmm4, dword ptr [rsi]
    vmovss  xmm5, dword ptr [rsi+4]
    vmovss  xmm2, dword ptr [rbp+57h+bounds.halfSize+8]
  }
  m_pAI = this->m_pAI;
  __asm
  {
    vmovss  dword ptr [rbp+57h+end+8], xmm1
    vaddss  xmm1, xmm0, xmm4
    vmulss  xmm0, xmm3, dword ptr [rdi+4]
    vmovss  dword ptr [rbp+57h+end], xmm1
    vaddss  xmm1, xmm0, xmm5
    vmaxss  xmm0, xmm2, dword ptr [rbp+57h+bounds.halfSize]
    vmovss  dword ptr [rbp+57h+bounds.halfSize+8], xmm0
    vmovss  dword ptr [rbp+57h+start], xmm4
    vmovss  dword ptr [rbp+57h+start+4], xmm5
    vmovss  dword ptr [rbp+57h+end+4], xmm1
  }
  if ( !PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, &start, &end, &bounds, m_pAI->ent->s.number, 2047, 8394769) )
  {
    v34 = DVARBOOL_ai_debugGunBlocked;
    if ( !DVARBOOL_ai_debugGunBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugGunBlocked") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    if ( v34->current.enabled )
      G_DebugLine(&start, &end, &colorGreen, 0);
    return 0;
  }
  this->m_pAI->orientation.gunBlockedByWall = 1;
  v32 = DVARBOOL_ai_debugGunBlocked;
  if ( !DVARBOOL_ai_debugGunBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugGunBlocked") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  if ( v32->current.enabled )
    G_DebugLine(&start, &end, &colorRed, 0);
  return 1;
}

/*
==============
AIScriptedInterface::ClearScriptOrient
==============
*/
void AIScriptedInterface::ClearScriptOrient(AIScriptedInterface *this)
{
  const dvar_t *v1; 
  unsigned __int16 GroundEntNum; 
  ai_scripted_t *m_pAI; 

  v1 = DVARBOOL_ai_iw7;
  if ( !DVARBOOL_ai_iw7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_iw7") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
  {
    _RAX = this->m_pAI;
    if ( _RAX->ScriptOrient.eMode )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rax+994h]
        vmovups xmmword ptr [rax+97Ch], xmm0
        vmovsd  xmm1, qword ptr [rax+9A4h]
        vmovsd  qword ptr [rax+98Ch], xmm1
      }
      GroundEntNum = AIScriptedInterface::GetGroundEntNum(this);
      if ( BGMovingPlatforms::IsMovingPlatform(GroundEntNum) && this->m_pAI->CodeOrient.eMode == AI_ORIENT_TO_MOTION )
        AIScriptedInterface::ResetMoveHistoryToEntForward(this);
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rax+97Ch]
        vmovups xmmword ptr [rax+994h], xmm0
        vmovsd  xmm1, qword ptr [rax+98Ch]
        vmovsd  qword ptr [rax+9A4h], xmm1
      }
    }
    m_pAI = this->m_pAI;
    if ( !m_pAI->orientation.lockScriptOrient )
      m_pAI->ScriptOrient.eMode = AI_ORIENT_INVALID;
  }
}

/*
==============
AIScriptedInterface::DecideOrientation
==============
*/
void AIScriptedInterface::DecideOrientation(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  __int64 v3; 
  bool predictedFaceMotion; 
  bool v6; 
  ai_scripted_t *v7; 
  ai_orient_t *v8; 
  AIScriptedInterface *v9; 
  ai_scripted_t *v12; 
  __int64 v13; 

  Sys_ProfBeginNamedEvent(0xFF808080, "AI_DecideOrientation");
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1322, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1323, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v3 = 2452i64;
  if ( m_pAI->ScriptOrient.eMode == AI_ORIENT_INVALID )
    v3 = 2428i64;
  _RDI = (ai_orient_t *)((char *)m_pAI + v3);
  predictedFaceMotion = m_pAI->orientation.predictedFaceMotion;
  v6 = !AIScriptedInterface::ShouldStrafe(this);
  v7 = this->m_pAI;
  v7->orientation.predictedFaceMotion = v6;
  this->m_pAI->bPredictedFaceMotionChanged = predictedFaceMotion != this->m_pAI->orientation.predictedFaceMotion;
  switch ( _RDI->eMode )
  {
    case AI_ORIENT_DONT_CHANGE:
    case AI_ORIENT_DONT_CHANGE_RELATIVE:
      this->m_pAI->orientation.faceMotion = this->m_pAI->orientation.predictedFaceMotion;
      break;
    case AI_ORIENT_TO_MOTION:
      goto LABEL_23;
    case AI_ORIENT_TO_ENEMY:
      v8 = _RDI;
      v9 = this;
      goto LABEL_15;
    case AI_ORIENT_TO_ENEMY_OR_MOTION:
      if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1298, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
        __debugbreak();
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1299, ASSERT_TYPE_ASSERT, "(pOrient)", (const char *)&queryFormat, "pOrient") )
        __debugbreak();
      v8 = _RDI;
      v9 = this;
      if ( this->m_pAI->orientation.predictedFaceMotion )
LABEL_23:
        AIScriptedInterface::FaceMotion(this, _RDI);
      else
LABEL_15:
        AIScriptedInterface::FaceEnemy(v9, v8);
      break;
    case AI_ORIENT_TO_GOAL:
      AIScriptedInterface::FaceGoalNode(this, _RDI);
      break;
    case AI_ORIENT_CURRENT_ANGLES:
      this->m_pAI->orientation.faceMotion = this->m_pAI->orientation.predictedFaceMotion;
      _RCX = this->m_pAI->ent;
      __asm
      {
        vmovsd  xmm0, qword ptr [rcx+13Ch]
        vmovsd  qword ptr [rdi+4], xmm0
      }
      _RDI->vDesiredAngles.v[2] = _RCX->r.currentAngles.v[2];
      break;
    default:
      LODWORD(v13) = _RDI->eMode;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1364, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid orient mode %i (code = %i, script = %i)", v13, this->m_pAI->CodeOrient.eMode, this->m_pAI->ScriptOrient.eMode) )
        __debugbreak();
      break;
  }
  v12 = this->m_pAI;
  if ( v12->orientation.faceMotion )
    v12->blackboard.m_bUseBackwardStrafeSpace = 0;
  Sys_ProfEndNamedEvent();
}

/*
==============
AIScriptedInterface::FaceEnemy
==============
*/
void AIScriptedInterface::FaceEnemy(AIScriptedInterface *this, ai_orient_t *pOrient)
{
  unsigned __int8 v10; 
  gentity_s *TargetEntity; 
  __int64 v12; 
  ai_scripted_t *m_pAI; 
  bool ShouldFaceGoalNode; 
  AIScriptedInterface *v19; 
  ai_scripted_t *v23; 
  tacpoint_t *p_outLastKnownPos; 
  gentity_s *ent; 
  const gentity_s *v87; 
  sentient_s *TargetSentient; 
  sentient_info_t *v89; 
  const gentity_s *v90; 
  bool v91; 
  char v103; 
  const gentity_s *v123; 
  int fmt; 
  vec3_t v131; 
  vec3_t v132; 
  __int64 v133; 
  __int64 v134; 
  __int64 v135; 
  vec3_t desiredAngles; 
  vec3_t outLastKnownPos; 
  vec3_t forward; 
  int v139; 
  vec3_t v142; 
  char v143[20]; 
  bfx::AreaHandle v144; 
  bfx::LinkHandle v145; 
  char v146; 
  void *retaddr; 

  _RAX = &retaddr;
  v133 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RDI = pOrient;
  v10 = 1;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1104, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1105, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1106, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1107, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  _RSI = TargetEntity;
  this->m_pAI->orientation.faceEnemyEndTime = level.time;
  if ( _RDI->eMode == AI_ORIENT_TO_ENEMY )
  {
    if ( TargetEntity )
    {
      m_pAI = this->m_pAI;
      if ( m_pAI->blackboard.m_bMeleeChargeRequested || m_pAI->blackboard.m_bMeleeRequested || this->IsInPain(this) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+130h]
          vmovss  dword ptr [rsp+170h+outLastKnownPos], xmm0
          vmovss  xmm1, dword ptr [rsi+134h]
          vmovss  dword ptr [rsp+170h+outLastKnownPos+4], xmm1
          vmovss  xmm0, dword ptr [rsi+138h]
          vmovss  dword ptr [rbp+70h+outLastKnownPos+8], xmm0
        }
        LOBYTE(v12) = 1;
LABEL_60:
        p_outLastKnownPos = (tacpoint_t *)&outLastKnownPos;
        goto LABEL_61;
      }
    }
  }
  ShouldFaceGoalNode = AIScriptedInterface::ShouldFaceGoalNode(this);
  v19 = this;
  if ( ShouldFaceGoalNode )
  {
    AIScriptedInterface::FaceGoalNode(this, _RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+170h+desiredAngles], xmm0
      vmovss  xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+170h+desiredAngles+4], xmm1
      vmovss  xmm0, dword ptr [rdi+0Ch]
      vmovss  dword ptr [rsp+170h+desiredAngles+8], xmm0
    }
    AIScriptedInterface::AdjustFacingForStrafe(this, &desiredAngles);
    this->SetDesiredBodyAngles(this, _RDI, &desiredAngles, 0);
    goto LABEL_63;
  }
  this->m_pAI->orientation.faceMotion = 0;
  v23 = this->m_pAI;
  if ( v23->orientation.predictedStrafePosValid )
  {
    p_outLastKnownPos = (tacpoint_t *)&v23->orientation.predictedStrafePos;
    v12 = 0i64;
LABEL_62:
    this->FaceVectorSnapToMovementQuadrant(v19, _RDI, (const vec3_t *)p_outLastKnownPos, v12);
    goto LABEL_63;
  }
  if ( AICommonInterface::HasPath(this) && AIScriptedInterface::ShouldCautiousStrafe(this) )
  {
    bfx::AreaHandle::AreaHandle(&v144);
    bfx::LinkHandle::LinkHandle(&v145);
    _RDX = this->m_pAI;
    LOBYTE(fmt) = 0;
    __asm { vmovss  xmm1, dword ptr [rdx+184h] }
    ((void (__fastcall *)(AINavigator *, ai_scripted_t *, _QWORD, char *, int))_RDX->pNavigator->GetPosAlongPath)(_RDX->pNavigator, _RDX, 0i64, v143, fmt);
    this->FaceVectorSnapToMovementQuadrant(this, _RDI, (const vec3_t *)v143, 0);
    bfx::LinkHandle::~LinkHandle(&v145);
    bfx::AreaHandle::~AreaHandle(&v144);
    goto LABEL_63;
  }
  if ( !_RSI )
  {
    if ( AICommonInterface::HasPath(this) )
    {
      this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, &forward);
      ent = this->m_pAI->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+70h+forward]
        vsubss  xmm4, xmm0, dword ptr [rcx+130h]
        vmovss  xmm1, dword ptr [rbp+70h+forward+4]
        vsubss  xmm5, xmm1, dword ptr [rcx+134h]
        vmovss  xmm0, dword ptr [rbp+70h+forward+8]
        vsubss  xmm6, xmm0, dword ptr [rcx+138h]
        vmulss  xmm2, xmm5, xmm5
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vcmpless xmm0, xmm1, cs:__real@80000000
        vmovss  xmm10, cs:__real@3f800000
        vblendvps xmm0, xmm1, xmm10, xmm0
        vdivss  xmm1, xmm10, xmm0
        vmulss  xmm7, xmm1, xmm4
        vmovss  [rsp+170h+var_118], xmm7
        vmulss  xmm8, xmm1, xmm5
        vmovss  [rsp+170h+var_114], xmm8
        vmulss  xmm9, xmm1, xmm6
        vmovss  dword ptr [rsp+170h+var_110], xmm9
      }
      AngleVectors(&ent->r.currentAngles, &desiredAngles, NULL, NULL);
      _RCX = this->m_pAI;
      if ( _RCX->blackboard.m_bForceStrafe )
      {
        if ( _RCX->blackboard.m_bStrafeFacingPosValid )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+248h]
            vmovss  [rsp+170h+var_118], xmm0
            vmovss  xmm1, dword ptr [rcx+24Ch]
            vmovss  [rsp+170h+var_114], xmm1
            vmovss  xmm0, dword ptr [rcx+250h]
            vmovss  dword ptr [rsp+170h+var_110], xmm0
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm3, cs:__real@42700000
            vmulss  xmm1, xmm3, dword ptr [rsp+170h+desiredAngles]
            vaddss  xmm2, xmm1, dword ptr [rax+130h]
            vmovss  [rsp+170h+var_118], xmm2
            vmulss  xmm1, xmm3, dword ptr [rsp+170h+desiredAngles+4]
            vaddss  xmm2, xmm1, dword ptr [rax+134h]
            vmovss  [rsp+170h+var_114], xmm2
            vmulss  xmm1, xmm3, dword ptr [rsp+170h+desiredAngles+8]
            vaddss  xmm2, xmm1, dword ptr [rax+138h]
            vmovss  dword ptr [rsp+170h+var_110], xmm2
          }
        }
        v12 = 0i64;
        p_outLastKnownPos = (tacpoint_t *)&v134;
        goto LABEL_61;
      }
      _RCX->pNavigator->GetRequestedGoalPos(_RCX->pNavigator, (vec3_t *)&v139);
      __asm
      {
        vmovss  xmm0, [rbp+70h+var_D8]
        vsubss  xmm6, xmm0, dword ptr [rcx+130h]
        vmovss  xmm1, [rbp+70h+var_D4]
        vsubss  xmm5, xmm1, dword ptr [rcx+134h]
        vmovss  xmm0, [rbp+70h+var_D0]
        vsubss  xmm4, xmm0, dword ptr [rcx+138h]
        vmulss  xmm2, xmm5, xmm5
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm10, xmm0
        vdivss  xmm1, xmm10, xmm0
        vmulss  xmm3, xmm1, xmm6
        vmulss  xmm2, xmm1, xmm5
        vmulss  xmm0, xmm1, xmm4
        vmovss  dword ptr [rbp+70h+var_C0+8], xmm0
        vunpcklps xmm1, xmm3, xmm2
        vmovsd  qword ptr [rsp+170h+var_140], xmm1
      }
      v131.v[2] = v142.v[2];
      __asm
      {
        vmovsd  xmm0, qword ptr [rsp+170h+desiredAngles]
        vmovsd  qword ptr [rsp+170h+var_130], xmm0
      }
      v132.v[2] = desiredAngles.v[2];
      __asm
      {
        vmovsd  xmm0, qword ptr [rsp+170h+var_118]
        vmovsd  qword ptr [rbp+70h+var_C0], xmm0
      }
      LODWORD(v142.v[2]) = v135;
      *(float *)&_XMM0 = GetMinDistToFaceMotion(&v142, &v132, &v131);
      __asm { vmovaps xmm1, xmm0 }
      if ( ((unsigned __int8 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->IsPathDistToGoalAtLeast)(this->m_pAI->pNavigator) )
      {
        __asm
        {
          vmovss  xmm3, cs:__real@42700000
          vmulss  xmm0, xmm7, xmm3
          vaddss  xmm1, xmm0, dword ptr [rcx+130h]
          vmovss  [rsp+170h+var_118], xmm1
          vmulss  xmm2, xmm8, xmm3
          vaddss  xmm0, xmm2, dword ptr [rcx+134h]
          vmovss  [rsp+170h+var_114], xmm0
          vmulss  xmm1, xmm9, xmm3
          vaddss  xmm0, xmm1, dword ptr [rcx+138h]
          vmovss  dword ptr [rsp+170h+var_110], xmm0
        }
        v12 = 0i64;
        p_outLastKnownPos = (tacpoint_t *)&v134;
LABEL_61:
        v19 = this;
        goto LABEL_62;
      }
    }
LABEL_48:
    AIScriptedInterface::FaceLikelyEnemyPath(this, _RDI);
    goto LABEL_63;
  }
  if ( AIScriptedInterface::GetReacquire(this) == AI_REACQUIRE_ENABLED_STEP && AICommonInterface::HasPath(this) )
  {
    v87 = AICommonInterface::GetTargetEntity(this);
    Sentient_GetLastKnownEnemyPos(this->m_pAI->sentient, v87, &outLastKnownPos);
    LOBYTE(v12) = 1;
    goto LABEL_60;
  }
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  if ( !TargetSentient || (v89 = &this->m_pAI->sentientInfo[TargetSentient - level.sentients], v89->VisCache.bVisible) )
  {
LABEL_59:
    v123 = AICommonInterface::GetTargetEntity(this);
    Sentient_GetLastKnownEnemyPos(this->m_pAI->sentient, v123, &outLastKnownPos);
    v12 = v10;
    goto LABEL_60;
  }
  v10 = 0;
  if ( !AIScriptedInterface::UsingCoverNodes(this) )
  {
    SentientInfo_GetLastKnownPos(v89, &v142);
    v12 = 0i64;
    p_outLastKnownPos = (tacpoint_t *)&v142;
    goto LABEL_61;
  }
  if ( v89->VisCache.iLastVisTime )
  {
    if ( !AICommonInterface::HasPath(this) )
    {
      if ( level.time - v89->VisCache.iLastVisTime < 10000 )
        goto LABEL_63;
      goto LABEL_48;
    }
    this->m_pAI->pNavigator->GetGoalOrLink(this->m_pAI->pNavigator, (vec3_t *)&v139);
    v91 = this->m_pAI->pNavigator->IsStraightLineToGoalOrLink(this->m_pAI->pNavigator);
    __asm
    {
      vmovss  xmm0, [rbp+70h+var_D8]
      vsubss  xmm3, xmm0, dword ptr [rdx+130h]
      vmovss  xmm1, [rbp+70h+var_D4]
      vsubss  xmm2, xmm1, dword ptr [rdx+134h]
      vmovss  xmm0, [rbp+70h+var_D0]
      vsubss  xmm4, xmm0, dword ptr [rdx+138h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@45800000
    }
    if ( v103 && v91 && !AIScriptedInterface::IsDoingReacquire(this) )
    {
      AngleVectors(&this->m_pAI->ent->r.currentAngles, &forward, NULL, NULL);
      __asm
      {
        vmovss  xmm3, cs:__real@43800000
        vmulss  xmm1, xmm3, dword ptr [rbp+70h+forward]
        vaddss  xmm2, xmm1, dword ptr [rcx+130h]
        vmovss  dword ptr [rsp+170h+desiredAngles], xmm2
        vmulss  xmm1, xmm3, dword ptr [rbp+70h+forward+4]
        vaddss  xmm2, xmm1, dword ptr [rcx+134h]
        vmovss  dword ptr [rsp+170h+desiredAngles+4], xmm2
        vmulss  xmm1, xmm3, dword ptr [rbp+70h+forward+8]
        vaddss  xmm2, xmm1, dword ptr [rcx+138h]
        vmovss  dword ptr [rsp+170h+desiredAngles+8], xmm2
      }
      v12 = 0i64;
      p_outLastKnownPos = (tacpoint_t *)&desiredAngles;
      goto LABEL_61;
    }
    if ( !AICommonInterface::RecentlyKnownEnemy(this, 500) && (signed int)(this->m_pAI->pNavigator->m_TimeOfLastPathUpdate + 300) < level.time && level.time - v89->VisCache.iLastVisTime > 500 && AIScriptedInterface::GetAnglesToLikelyEnemyPath(this) )
    {
      p_outLastKnownPos = tacpoint_ref_t::GetPoint(&this->m_pAI->sight.faceLikelyEnemyTacPoint);
      if ( p_outLastKnownPos )
      {
        _RCX = this->m_pAI->ent;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+130h]
          vsubss  xmm3, xmm0, dword ptr [rax]
          vmovss  xmm1, dword ptr [rcx+134h]
          vsubss  xmm2, xmm1, dword ptr [rax+4]
          vmovss  xmm0, dword ptr [rcx+138h]
          vsubss  xmm4, xmm0, dword ptr [rax+8]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vcomiss xmm2, cs:__real@44800000
        }
        v12 = 0i64;
        goto LABEL_61;
      }
    }
    goto LABEL_59;
  }
  if ( v89->lastKnownPosTime > level.time - 500 )
  {
    v90 = AICommonInterface::GetTargetEntity(this);
    Sentient_GetLastKnownEnemyPos(this->m_pAI->sentient, v90, &outLastKnownPos);
    v12 = 0i64;
    goto LABEL_60;
  }
  AIScriptedInterface::FaceLikelyEnemyPath(this, _RDI);
LABEL_63:
  _R11 = &v146;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
AIScriptedInterface::FaceEnemyOrMotion
==============
*/
void AIScriptedInterface::FaceEnemyOrMotion(AIScriptedInterface *this, ai_orient_t *pOrient)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1298, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !pOrient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1299, ASSERT_TYPE_ASSERT, "(pOrient)", (const char *)&queryFormat, "pOrient") )
    __debugbreak();
  if ( this->m_pAI->orientation.predictedFaceMotion )
    AIScriptedInterface::FaceMotion(this, pOrient);
  else
    AIScriptedInterface::FaceEnemy(this, pOrient);
}

/*
==============
AIScriptedInterface::FaceGoalNode
==============
*/
void AIScriptedInterface::FaceGoalNode(AIScriptedInterface *this, ai_orient_t *pOrient)
{
  sentient_s *sentient; 
  pathnode_t *pClaimedNode; 
  AIScriptedInterface_vtbl *v9; 
  pathnode_t *v10; 
  AIScriptedInterface_vtbl *v15; 
  bool v16; 
  vec3_t v18; 
  vec3_t angles; 
  vec3_t vector; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 685, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  this->m_pAI->orientation.faceMotion = 0;
  sentient = this->m_pAI->sentient;
  pClaimedNode = sentient->pClaimedNode;
  if ( pClaimedNode && (pClaimedNode->constant.spawnflags & 0x8000) != 0 )
  {
    v9 = this->__vftable;
    v10 = sentient->pClaimedNode;
    __asm { vmovaps [rsp+0F8h+var_18], xmm6 }
    *(double *)&_XMM0 = ((double (__fastcall *)(AIScriptedInterface *, pathnode_t *))v9->GetNodeAngleYawOffset)(this, v10);
    __asm { vmovaps xmm6, xmm0 }
    if ( this->Is3D(this) && ((1 << LOBYTE(pClaimedNode->constant.type)) & 0x62700000) != 0 )
    {
      pathnode_t::GetAngles(pClaimedNode, &vector);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+0F8h+angles], xmm0
        vmovss  dword ptr [rsp+0F8h+angles+8], xmm0
        vmovss  dword ptr [rsp+0F8h+angles+4], xmm6
      }
      AnglesToAxis(&vector, &axis);
      AnglesToAxis(&angles, &in2);
      MatrixMultiply(&axis, &in2, &out);
      AxisToAngles(&out, &v18);
    }
    else
    {
      *(double *)&_XMM0 = pathnode_t::GetAngle(pClaimedNode);
      __asm { vaddss  xmm0, xmm0, xmm6; angle }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  dword ptr [rsp+0F8h+var_C8], xmm1
        vmovss  dword ptr [rsp+0F8h+var_C8+8], xmm1
        vmovss  dword ptr [rsp+0F8h+var_C8+4], xmm0
      }
    }
    v15 = this->__vftable;
    v16 = this->Is3D(this);
    v15->SetDesiredBodyAngles(this, pOrient, &v18, v16);
    __asm { vmovaps xmm6, [rsp+0F8h+var_18] }
  }
}

/*
==============
AIScriptedInterface::FaceLikelyEnemyPath
==============
*/
void AIScriptedInterface::FaceLikelyEnemyPath(AIScriptedInterface *this, ai_orient_t *pOrient)
{
  ai_scripted_t *m_pAI; 
  bool AnglesToLikelyEnemyPath; 
  sentient_s *sentient; 
  pathnode_t *pClaimedNode; 
  AIScriptedInterface_vtbl *v20; 
  bool v21; 
  vec3_t vector; 
  vec3_t desiredAngles; 

  m_pAI = this->m_pAI;
  if ( m_pAI->sight.faceLikelyEnemyPathNeedCheckTime > level.time )
  {
    _RAX = m_pAI->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+13Ch]
      vmovss  xmm1, dword ptr [rax+140h]
      vmovss  dword ptr [rsp+58h+desiredAngles], xmm0
      vmovss  xmm0, dword ptr [rax+144h]
      vmovss  dword ptr [rsp+58h+desiredAngles+8], xmm0
      vmovss  dword ptr [rsp+58h+desiredAngles+4], xmm1
    }
    AIScriptedInterface::AdjustFacingForStrafe(this, &desiredAngles);
    return;
  }
  AnglesToLikelyEnemyPath = AIScriptedInterface::GetAnglesToLikelyEnemyPath(this);
  _RDX = this->m_pAI;
  if ( AnglesToLikelyEnemyPath )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+0C4h]
      vmovss  dword ptr [rsp+58h+vector], xmm0
      vmovss  xmm1, dword ptr [rdx+0C8h]
      vmovss  dword ptr [rsp+58h+vector+4], xmm1
      vmovss  xmm0, dword ptr [rdx+0CCh]
      vmovss  dword ptr [rsp+58h+vector+8], xmm0
    }
    AIScriptedInterface::AdjustFacingForStrafe(this, &vector);
LABEL_12:
    v20 = this->__vftable;
    v21 = this->Is3D(this);
    v20->SetDesiredBodyAngles(this, pOrient, &vector, v21);
    return;
  }
  sentient = _RDX->sentient;
  pClaimedNode = sentient->pClaimedNode;
  if ( pClaimedNode && (pClaimedNode->constant.spawnflags & 0x8000) != 0 && AICommonInterface::PointNearNode(this, &_RDX->ent->r.currentOrigin, sentient->pClaimedNode) )
  {
    if ( this->Is3D(this) && Path_NodeIgnoresAngles(pClaimedNode) )
    {
      _RCX = this->m_pAI->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+13Ch]
        vmovss  dword ptr [rsp+58h+vector], xmm0
        vmovss  xmm1, dword ptr [rcx+140h]
        vmovss  dword ptr [rsp+58h+vector+4], xmm1
        vmovss  xmm0, dword ptr [rcx+144h]
        vmovss  dword ptr [rsp+58h+vector+8], xmm0
      }
    }
    else
    {
      pathnode_t::GetAngles(pClaimedNode, &vector);
    }
    goto LABEL_12;
  }
}

/*
==============
AIScriptedInterface::FaceMotion
==============
*/
void AIScriptedInterface::FaceMotion(AIScriptedInterface *this, ai_orient_t *pOrient)
{
  ai_scripted_t *m_pAI; 
  bool faceMotion; 
  ai_scripted_t *v10; 
  char v13; 
  char v53; 
  bool v54; 
  AIScriptedInterface_vtbl *v85; 
  bool v86; 
  vec3_t *p_vLookaheadDir; 
  int v97; 
  int v98; 
  int v99; 
  vec3_t vec; 
  vec3_t vLookaheadDir; 
  vec3_t forward; 
  vec3_t desiredAngles; 
  vec3_t vWishDelta; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 

  _RSI = pOrient;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 735, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  faceMotion = m_pAI->orientation.faceMotion;
  m_pAI->orientation.faceMotion = 1;
  if ( AICommonInterface::HasPath(this) && AIScriptedInterface::GetAnimMode(this) == AI_ANIM_MOVE_CODE )
  {
    v10 = this->m_pAI;
    __asm
    {
      vmovaps [rsp+120h+var_20], xmm6
      vmovaps [rsp+120h+var_30], xmm7
      vmovaps [rsp+120h+var_40], xmm8
      vxorps  xmm7, xmm7, xmm7
    }
    if ( v10->moveMode )
    {
      if ( AIScriptedInterface::UsingCoverNodes(this) && !AIScriptedInterface::IsOnStairs(this) )
      {
        AIScriptedInterface::GetPathLookaheadDir(this, &vLookaheadDir);
        *(double *)&_XMM0 = Nav_GetPathDistToGoal(this->m_pAI->pNavigator);
        __asm { vmovaps xmm6, xmm0 }
        if ( this->m_pAI->pNavigator->IsNextCornerGoal(this->m_pAI->pNavigator) )
          __asm { vcomiss xmm6, cs:__real@42700000 }
      }
    }
    AIScriptedInterface::GetWishDelta(this, &vWishDelta);
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+120h+vWishDelta]
      vmovss  xmm6, dword ptr [rsp+120h+vWishDelta+4]
      vmovss  xmm4, dword ptr [rbp+20h+vWishDelta+8]
      vmovss  xmm8, cs:__real@3f800000
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
      vdivss  xmm1, xmm8, xmm0
      vmulss  xmm2, xmm5, xmm1
      vucomiss xmm2, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
      vmulss  xmm0, xmm6, xmm1
      vmulss  xmm3, xmm4, xmm1
      vmovss  dword ptr [rsp+120h+vec], xmm2
      vmovss  dword ptr [rsp+120h+vec+4], xmm0
      vmovss  dword ptr [rsp+120h+vec+8], xmm3
    }
    if ( !v13 )
      goto LABEL_41;
    __asm { vucomiss xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin }
    if ( !v13 )
      goto LABEL_41;
    __asm { vucomiss xmm3, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin }
    if ( !v13 )
    {
LABEL_41:
      if ( this->m_pAI->moveMode )
        goto LABEL_18;
      if ( AICommonInterface::Use3DPathing(this) && this->Is3D(this) )
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rsp+120h+vec+4]
          vmovss  xmm4, dword ptr [rsp+120h+vec]
          vmovss  xmm5, dword ptr [rsp+120h+vec+8]
          vmulss  xmm1, xmm6, xmm6
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm0, xmm2, xmm1
          vsqrtss xmm3, xmm0, xmm0
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm8, xmm0
          vdivss  xmm2, xmm8, xmm0
          vmulss  xmm0, xmm4, xmm2
          vmovss  dword ptr [rsp+120h+vec], xmm0
          vmulss  xmm0, xmm5, xmm2
          vmulss  xmm1, xmm6, xmm2
          vmovss  dword ptr [rsp+120h+vec+8], xmm0
          vmovss  dword ptr [rsp+120h+vec+4], xmm1
        }
        AngleVectors(&_RSI->vDesiredAngles, &forward, NULL, NULL);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+120h+forward+4]
          vmovss  xmm1, dword ptr [rsp+120h+forward]
          vmulss  xmm2, xmm1, dword ptr [rsp+120h+vec]
          vmulss  xmm3, xmm0, dword ptr [rsp+120h+vec+4]
          vmovss  xmm0, dword ptr [rsp+120h+forward+8]
          vmulss  xmm1, xmm0, dword ptr [rsp+120h+vec+8]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vcomiss xmm2, cs:__real@3f666666
        }
        if ( v53 )
          goto LABEL_18;
      }
      else
      {
        __asm
        {
          vmovss  xmm4, dword ptr [rsp+120h+vec+4]
          vmovss  xmm3, dword ptr [rsp+120h+vec]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm3, xmm3
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vcmpless xmm0, xmm2, cs:__real@80000000
          vblendvps xmm0, xmm2, xmm8, xmm0
          vdivss  xmm1, xmm8, xmm0
          vmulss  xmm0, xmm3, xmm1
          vmovss  dword ptr [rsp+120h+vec], xmm0
          vmovss  xmm0, dword ptr [rsi+8]; yaw
          vmulss  xmm1, xmm4, xmm1
          vmovss  dword ptr [rsp+120h+vec+4], xmm1
        }
        YawVectors(*(float *)&_XMM0, &forward, NULL);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+120h+forward+4]
          vmovss  xmm1, dword ptr [rsp+120h+forward]
          vmulss  xmm3, xmm0, dword ptr [rsp+120h+vec+4]
          vmulss  xmm2, xmm1, dword ptr [rsp+120h+vec]
          vaddss  xmm0, xmm3, xmm2
          vcomiss xmm0, cs:__real@3f666666
        }
        if ( v53 )
        {
LABEL_18:
          v54 = !faceMotion;
          if ( !faceMotion )
          {
            vectoangles(&vec, &vLookaheadDir);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+120h+vLookaheadDir+4]
              vsubss  xmm1, xmm0, dword ptr [rax+140h]
              vmulss  xmm5, xmm1, cs:__real@3b360b61
              vaddss  xmm2, xmm5, cs:__real@3f000000
              vxorps  xmm1, xmm1, xmm1
              vroundss xmm4, xmm1, xmm2, 1
              vsubss  xmm0, xmm5, xmm4
              vmulss  xmm1, xmm0, cs:__real@43b40000
              vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
              vcomiss xmm1, cs:__real@41c80000
            }
            if ( !(v53 | v54) )
            {
              this->m_pAI->orientation.faceMotion = 0;
              AIScriptedInterface::AdjustFacingForStrafe(this, &vLookaheadDir);
              this->SetDesiredBodyAngles(this, _RSI, &vLookaheadDir, 0);
LABEL_38:
              __asm
              {
                vmovaps xmm7, [rsp+120h+var_30]
                vmovaps xmm6, [rsp+120h+var_20]
                vmovaps xmm8, [rsp+120h+var_40]
              }
              return;
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+120h+vec]
            vucomiss xmm0, xmm7
          }
          if ( v54 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+120h+vec+4]
              vucomiss xmm0, xmm7
            }
            if ( v54 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+120h+vec+8]
                vucomiss xmm0, xmm7
              }
              if ( v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 655, ASSERT_TYPE_ASSERT, "(v[0] || v[1] || v[2])", (const char *)&queryFormat, "v[0] || v[1] || v[2]") )
                __debugbreak();
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+120h+vec]
            vmovss  [rsp+120h+var_F0], xmm0
          }
          if ( (v97 & 0x7F800000) == 2139095040 )
            goto LABEL_42;
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+120h+vec+4]
            vmovss  [rsp+120h+var_F0], xmm0
          }
          if ( (v98 & 0x7F800000) == 2139095040 )
            goto LABEL_42;
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+120h+vec+8]
            vmovss  [rsp+120h+var_F0], xmm0
          }
          if ( (v99 & 0x7F800000) == 2139095040 )
          {
LABEL_42:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 656, ASSERT_TYPE_ASSERT, "(!IS_NAN( v[0] ) && !IS_NAN( v[1] ) && !IS_NAN( v[2] ))", (const char *)&queryFormat, "!IS_NAN( v[0] ) && !IS_NAN( v[1] ) && !IS_NAN( v[2] )") )
              __debugbreak();
          }
          if ( this->Is3D(this) )
          {
            AnglesToAxis(&this->m_pAI->ent->r.currentAngles, &axis);
            GenerateAxisFromForwardVector(&vec, &axis, &outAxis);
            AxisToAngles(&outAxis, &vLookaheadDir);
          }
          else
          {
            vectoangles(&vec, &vLookaheadDir);
          }
          v85 = this->__vftable;
          v86 = this->Is3D(this);
          p_vLookaheadDir = &vLookaheadDir;
LABEL_37:
          v85->SetDesiredBodyAngles(this, _RSI, p_vLookaheadDir, v86);
          goto LABEL_38;
        }
      }
    }
    this->m_pAI->orientation.faceMotion = 0;
    _R8 = this->m_pAI->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [r8+13Ch]
      vmovss  dword ptr [rsp+120h+desiredAngles], xmm0
      vmovss  xmm1, dword ptr [r8+140h]
      vmovss  dword ptr [rsp+120h+desiredAngles+4], xmm1
      vmovss  xmm0, dword ptr [r8+144h]
      vmovss  dword ptr [rsp+120h+desiredAngles+8], xmm0
    }
    AIScriptedInterface::AdjustFacingForStrafe(this, &desiredAngles);
    v85 = this->__vftable;
    v86 = this->Is3D(this);
    p_vLookaheadDir = &desiredAngles;
    goto LABEL_37;
  }
}

/*
==============
AIScriptedInterface::FaceVector
==============
*/
void AIScriptedInterface::FaceVector(AIScriptedInterface *this, ai_orient_t *pOrient, const vec3_t *v)
{
  char v4; 
  AIScriptedInterface_vtbl *v12; 
  bool v13; 
  int v14; 
  int v15; 
  int v16; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [r8]
  }
  _RBX = v;
  if ( v4 )
  {
    __asm { vucomiss xmm0, dword ptr [r8+4] }
    if ( v4 )
    {
      __asm { vucomiss xmm0, dword ptr [r8+8] }
      if ( v4 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 655, ASSERT_TYPE_ASSERT, "(v[0] || v[1] || v[2])", (const char *)&queryFormat, "v[0] || v[1] || v[2]") )
          __debugbreak();
      }
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v14 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v15 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v16 & 0x7F800000) == 2139095040 )
  {
LABEL_17:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 656, ASSERT_TYPE_ASSERT, "(!IS_NAN( v[0] ) && !IS_NAN( v[1] ) && !IS_NAN( v[2] ))", (const char *)&queryFormat, "!IS_NAN( v[0] ) && !IS_NAN( v[1] ) && !IS_NAN( v[2] )") )
      __debugbreak();
  }
  if ( this->Is3D(this) )
  {
    AnglesToAxis(&this->m_pAI->ent->r.currentAngles, &axis);
    GenerateAxisFromForwardVector(_RBX, &axis, &outAxis);
    AxisToAngles(&outAxis, &angles);
  }
  else
  {
    vectoangles(_RBX, &angles);
  }
  v12 = this->__vftable;
  v13 = this->Is3D(this);
  v12->SetDesiredBodyAngles(this, pOrient, &angles, v13);
}

/*
==============
AIScriptedInterface::FaceVectorSnapToMovementQuadrant3D
==============
*/
void AIScriptedInterface::FaceVectorSnapToMovementQuadrant3D(AIScriptedInterface *this, ai_orient_t *pOrient, const vec3_t *lookAtPos, __int64 enemyVisible)
{
  char v52; 
  bool v53; 
  ai_scripted_t *m_pAI; 
  char v131; 
  vec3_t vLookaheadDir; 
  vec3_t angles; 
  vec3_t desiredAngles; 
  vec3_t forward; 
  vec3_t vec; 
  vec3_t vFinalGoal; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 
  void *retaddr; 

  _R11 = &retaddr;
  v53 = this->m_pAI == NULL;
  _RDI = lookAtPos;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm8
    vmovaps xmmword ptr [r11-58h], xmm9
    vmovaps xmmword ptr [r11-68h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm13
  }
  if ( v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 450, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( (!((unsigned __int8 (__fastcall *)(AIScriptedInterface *, ai_orient_t *, const vec3_t *, __int64))this->Is3D)(this, pOrient, lookAtPos, enemyVisible) || !AICommonInterface::Use3DPathing(this)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 453, ASSERT_TYPE_ASSERT, "(Is3D() && Use3DPathing())", (const char *)&queryFormat, "Is3D() && Use3DPathing()") )
    __debugbreak();
  _RCX = this->m_pAI;
  __asm
  {
    vmovaps [rsp+1A0h+var_38+8], xmm7
    vmovaps [rsp+1A0h+var_78+8], xmm11
    vmovaps [rsp+1A0h+var_88+8], xmm12
  }
  _RAX = _RCX->ent;
  __asm
  {
    vmovaps [rsp+1A0h+var_A8+8], xmm14
    vmovaps [rsp+1A0h+var_B8+8], xmm15
    vmovss  xmm4, dword ptr [rax+138h]
    vmovss  xmm9, dword ptr [rax+130h]
    vmovss  xmm10, dword ptr [rax+134h]
  }
  LODWORD(_RAX) = _RCX->Physics.bSpace;
  LODWORD(_RCX) = 0;
  __asm
  {
    vsubss  xmm3, xmm4, cs:__real@42240000
    vmovd   xmm1, ecx
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm8, xmm3, xmm4, xmm2
    vmovss  dword ptr [rsp+1A0h+var_170], xmm8
    vmovss  xmm13, cs:__real@3f000000
  }
  if ( AICommonInterface::HasPath(this) && this->IsHumanAI(this) )
  {
    __asm
    {
      vmovss  xmm15, cs:__real@80000000
      vmovss  xmm11, cs:__real@3f800000
    }
    if ( this->m_pAI->moveHistoryConsistent )
    {
      AIScriptedInterface::GetPathLookaheadDir(this, &vLookaheadDir);
    }
    else
    {
      AIScriptedInterface::GetMoveHistoryAverage(this, &vLookaheadDir);
      AIScriptedInterface::GetPathLookaheadDir(this, &angles);
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+1A0h+vLookaheadDir]
        vmovss  xmm6, dword ptr [rsp+1A0h+vLookaheadDir+4]
        vmovss  xmm7, dword ptr [rsp+1A0h+vLookaheadDir+8]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, xmm15
        vblendvps xmm0, xmm3, xmm11, xmm0
        vdivss  xmm1, xmm11, xmm0
        vmulss  xmm2, xmm6, xmm1
        vmulss  xmm3, xmm2, dword ptr [rsp+1A0h+angles+4]
        vmulss  xmm5, xmm4, xmm1
        vmulss  xmm4, xmm7, xmm1
        vmulss  xmm0, xmm4, dword ptr [rsp+1A0h+angles+8]
        vmovss  dword ptr [rsp+1A0h+vLookaheadDir+4], xmm2
        vmulss  xmm2, xmm5, dword ptr [rsp+1A0h+angles]
        vaddss  xmm3, xmm3, xmm2
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm1, cs:__real@3f34fdf4
        vmovss  dword ptr [rsp+1A0h+vLookaheadDir], xmm5
        vmovss  dword ptr [rsp+1A0h+vLookaheadDir+8], xmm4
      }
      if ( v52 )
      {
        __asm
        {
          vmovsd  xmm0, qword ptr [rsp+1A0h+angles]
          vmovsd  qword ptr [rsp+1A0h+vLookaheadDir], xmm0
        }
        vLookaheadDir.v[2] = angles.v[2];
      }
    }
    AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0A0h+vFinalGoal]
      vmovss  xmm1, dword ptr [rbp+0A0h+vFinalGoal+4]
    }
    m_pAI = this->m_pAI;
    __asm
    {
      vmovss  xmm7, dword ptr [rsp+1A0h+vLookaheadDir+8]
      vmovss  xmm12, dword ptr [rsp+1A0h+vLookaheadDir+4]
      vmovss  xmm14, dword ptr [rsp+1A0h+vLookaheadDir]
      vsubss  xmm3, xmm0, dword ptr [rax+130h]
      vmovss  xmm0, dword ptr [rbp+0A0h+vFinalGoal+8]
      vsubss  xmm2, xmm1, dword ptr [rax+134h]
      vsubss  xmm4, xmm0, dword ptr [rax+138h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm0, xmm3, xmm0
      vcomiss xmm0, cs:__real@43610000
      vmovss  dword ptr [rsp+1A0h+var_170], xmm0
    }
    if ( !(v52 | v53) )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@41700000
        vmulss  xmm0, xmm14, xmm2
        vaddss  xmm9, xmm0, xmm9
        vmulss  xmm0, xmm7, xmm2
        vmulss  xmm1, xmm12, xmm2
        vaddss  xmm8, xmm0, xmm8
        vaddss  xmm10, xmm1, xmm10
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  xmm1, dword ptr [rdi+4]
      vsubss  xmm4, xmm0, xmm9
      vmovss  xmm0, dword ptr [rdi+8]
      vsubss  xmm6, xmm0, xmm8
      vsubss  xmm5, xmm1, xmm10
      vmulss  xmm0, xmm7, xmm7
      vmulss  xmm2, xmm14, xmm14
      vmulss  xmm1, xmm12, xmm12
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcmpless xmm0, xmm1, xmm15
      vblendvps xmm0, xmm1, xmm11, xmm0
      vdivss  xmm2, xmm11, xmm0
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm8, xmm14, xmm2
      vmulss  xmm9, xmm12, xmm2
      vmulss  xmm7, xmm7, xmm2
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm15
      vblendvps xmm0, xmm3, xmm11, xmm0
      vdivss  xmm1, xmm11, xmm0
      vmovss  xmm0, dword ptr [rsp+1A0h+var_170]
      vcomiss xmm0, xmm11
      vmulss  xmm2, xmm1, xmm4
      vmulss  xmm4, xmm1, xmm6
      vmulss  xmm3, xmm1, xmm5
      vmovss  [rbp+0A0h+var_120], xmm4
      vmovss  dword ptr [rsp+1A0h+vLookaheadDir], xmm8
      vmovss  dword ptr [rsp+1A0h+vLookaheadDir+4], xmm9
      vmovss  dword ptr [rsp+1A0h+vLookaheadDir+8], xmm7
      vmovss  dword ptr [rsp+1A0h+vec], xmm2
      vmovss  dword ptr [rsp+1A0h+vec+4], xmm3
    }
    if ( v52 )
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rsp+1A0h+vec]
        vmovsd  qword ptr [rsp+1A0h+forward], xmm0
      }
      forward.v[2] = vec.v[2];
      m_pAI->orientation.relativeDir = 1;
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm9, xmm3
        vmulss  xmm0, xmm8, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm4
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, cs:__real@3f7f7cee
      }
      if ( v52 | v53 )
      {
        *(double *)&_XMM0 = vectoyaw((const vec2_t *)&vec);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = vectoyaw((const vec2_t *)&vLookaheadDir);
        __asm
        {
          vmovss  xmm14, cs:__real@3b360b61
          vmovss  xmm7, cs:__real@43340000
          vmovss  xmm12, cs:__real@42b40000
          vmovss  xmm11, cs:__real@c2b40000
          vmovss  xmm10, cs:__real@42340000
          vsubss  xmm1, xmm0, xmm6
          vmulss  xmm3, xmm1, xmm14
          vxorps  xmm0, xmm0, xmm0
          vaddss  xmm1, xmm3, xmm13
          vmovss  xmm1, xmm0, xmm1
          vxorps  xmm15, xmm15, xmm15
          vroundss xmm2, xmm15, xmm1, 1
          vsubss  xmm0, xmm3, xmm2
          vmulss  xmm4, xmm0, cs:__real@43b40000
          vandps  xmm1, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm1, cs:__real@43070000
          vxorps  xmm8, xmm8, xmm8
        }
        if ( v52 )
        {
          __asm
          {
            vcomiss xmm1, xmm10
            vxorps  xmm9, xmm9, xmm9
          }
        }
        else
        {
          __asm { vmovaps xmm9, xmm7 }
        }
        *(double *)&_XMM0 = vectopitch(&vec);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = vectopitch(&vLookaheadDir);
        __asm
        {
          vsubss  xmm1, xmm0, xmm6
          vmulss  xmm4, xmm1, xmm14
          vaddss  xmm2, xmm4, xmm13
          vxorps  xmm0, xmm0, xmm0
          vmovss  xmm1, xmm0, xmm2
          vroundss xmm3, xmm15, xmm1, 1
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm2, xmm0, cs:__real@43b40000
          vandps  xmm1, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm1, cs:__real@43070000
        }
        if ( v131 )
        {
          __asm
          {
            vcomiss xmm1, xmm10
            vxorps  xmm7, xmm7, xmm7
          }
          if ( !v131 )
          {
            __asm
            {
              vcmpltss xmm0, xmm8, xmm2
              vblendvps xmm7, xmm12, xmm11, xmm0
            }
          }
        }
        vectoangles(&vLookaheadDir, &angles);
        __asm
        {
          vaddss  xmm1, xmm7, dword ptr [rsp+1A0h+angles]
          vaddss  xmm0, xmm9, dword ptr [rsp+1A0h+angles+4]
          vmovss  dword ptr [rsp+1A0h+angles], xmm1
          vmovss  dword ptr [rsp+1A0h+angles+4], xmm0
        }
        AngleVectors(&angles, &forward, NULL, NULL);
      }
      else
      {
        __asm
        {
          vmovsd  xmm0, qword ptr [rsp+1A0h+vLookaheadDir]
          vmovsd  qword ptr [rsp+1A0h+forward], xmm0
        }
        forward.v[2] = vLookaheadDir.v[2];
        m_pAI->orientation.relativeDir = 1;
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  xmm2, dword ptr [rdi+4]
      vsubss  xmm1, xmm0, xmm9
      vsubss  xmm0, xmm2, xmm10
      vmovss  dword ptr [rsp+1A0h+forward], xmm1
      vmovss  xmm1, dword ptr [rdi+8]
      vsubss  xmm2, xmm1, xmm8
      vmovss  dword ptr [rsp+1A0h+forward+8], xmm2
      vmovss  dword ptr [rsp+1A0h+forward+4], xmm0
    }
  }
  AnglesToAxis(&this->m_pAI->ent->r.currentAngles, &axis);
  GenerateAxisFromForwardVector(&forward, &axis, &outAxis);
  AxisToAngles(&outAxis, &desiredAngles);
  __asm
  {
    vmovss  xmm5, cs:__real@41200000
    vmulss  xmm1, xmm5, dword ptr [rsp+1A0h+desiredAngles]
    vmulss  xmm2, xmm5, dword ptr [rsp+1A0h+desiredAngles+4]
    vmovss  xmm4, cs:__real@3dcccccd
    vmovaps xmm15, [rsp+1A0h+var_B8+8]
    vmovaps xmm14, [rsp+1A0h+var_A8+8]
    vmovaps xmm12, [rsp+1A0h+var_88+8]
    vmovaps xmm11, [rsp+1A0h+var_78+8]
    vmovaps xmm10, [rsp+1A0h+var_68+8]
    vmovaps xmm9, [rsp+1A0h+var_58+8]
    vmovaps xmm8, [rsp+1A0h+var_48+8]
    vmovaps xmm7, [rsp+1A0h+var_38+8]
    vaddss  xmm3, xmm1, xmm13
    vxorps  xmm6, xmm6, xmm6
    vroundss xmm1, xmm6, xmm3, 1
    vcvttss2si eax, xmm1
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm0, xmm0, xmm4
    vmovss  dword ptr [rsp+1A0h+desiredAngles], xmm0
    vaddss  xmm3, xmm2, xmm13
    vroundss xmm2, xmm6, xmm3, 1
    vcvttss2si eax, xmm2
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm1, xmm0, xmm4
    vmulss  xmm0, xmm5, dword ptr [rsp+1A0h+desiredAngles+8]
    vaddss  xmm3, xmm0, xmm13
    vmovaps xmm13, [rsp+1A0h+var_98+8]
    vroundss xmm0, xmm6, xmm3, 1
    vmovaps xmm6, xmmword ptr [rsp+1A0h+var_28+8]
    vcvttss2si eax, xmm0
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vmovss  dword ptr [rsp+1A0h+desiredAngles+4], xmm1
    vmulss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rsp+1A0h+desiredAngles+8], xmm1
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  _RCX = this->m_pAI;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmovss  xmm0, dword ptr [rcx+0B40h]
    vmulss  xmm2, xmm0, cs:__real@3c0efa35
    vmulss  xmm2, xmm2, xmm1; lerpSpeed
  }
  AIScriptedInterface::LerpAnglesWithQuaternions(&_RCX->ent->r.currentAngles, &desiredAngles, *(const float *)&_XMM2, &desiredAngles);
  this->SetDesiredBodyAngles(this, pOrient, &desiredAngles, 1);
}

/*
==============
AIScriptedInterface::FaceVectorSnapToMovementQuadrant
==============
*/
void AIScriptedInterface::FaceVectorSnapToMovementQuadrant(AIScriptedInterface *this, ai_orient_t *pOrient, const vec3_t *lookAtPos, bool enemyVisible)
{
  char v9; 
  vec3_t vec; 
  vec3_t angles; 
  vec3_t vLookaheadDir; 
  char v28[16]; 

  _RDI = lookAtPos;
  if ( this->Is3D(this) && AICommonInterface::Use3DPathing(this) )
  {
    AIScriptedInterface::FaceVectorSnapToMovementQuadrant3D(this, pOrient, _RDI, enemyVisible);
  }
  else
  {
    if ( AICommonInterface::HasPath(this) && this->IsHumanAI(this) )
    {
      __asm { vmovss  xmm1, cs:__real@3f800000 }
      v9 = ((__int64 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->IsPathDistToGoalAtLeast)(this->m_pAI->pNavigator);
    }
    else
    {
      v9 = 0;
    }
    if ( v9 )
    {
      AIScriptedInterface::GetPathLookaheadDir(this, &vLookaheadDir);
      this->UpdateMoveDirBasedOnHistory(this, &vLookaheadDir, (vec3_t *)v28);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vmovss  xmm2, dword ptr [rdi+4]
      }
      _RCX = this->m_pAI->ent;
      __asm
      {
        vsubss  xmm1, xmm0, dword ptr [rcx+130h]
        vmovss  xmm3, dword ptr [rcx+134h]
        vmovss  xmm4, dword ptr [rcx+138h]
        vsubss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rsp+88h+vec], xmm1
        vmovss  xmm1, dword ptr [rdi+8]
        vsubss  xmm2, xmm1, xmm4
        vmovss  dword ptr [rsp+88h+vec+8], xmm2
        vmovss  dword ptr [rsp+88h+vec+4], xmm0
      }
      vectoangles(&vec, &angles);
      AIScriptedInterface::AdjustFacingForStrafe(this, &angles);
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vmovss  xmm2, dword ptr [rdi+4]
        vsubss  xmm1, xmm0, dword ptr [rcx+130h]
        vmovss  dword ptr [rsp+88h+vec], xmm1
        vsubss  xmm0, xmm2, dword ptr [rcx+134h]
        vmovss  xmm1, dword ptr [rdi+8]
        vmovss  dword ptr [rsp+88h+vec+4], xmm0
        vsubss  xmm2, xmm1, dword ptr [rcx+138h]
        vmovss  dword ptr [rsp+88h+vec+8], xmm2
      }
      vectoangles(&vec, &angles);
    }
    this->SetDesiredBodyAngles(this, pOrient, &angles, 0);
  }
}

/*
==============
AIScriptedInterface::ForcePitchAndYawDeltas
==============
*/

void __fastcall AIScriptedInterface::ForcePitchAndYawDeltas(AIScriptedInterface *this, double pitchDelta, double yawDelta)
{
  AIScriptedInterface_vtbl *v9; 
  ai_orient_t *p_CodeOrient; 
  AIScriptedInterface_vtbl *v14; 
  ai_orient_t *p_ScriptOrient; 
  AIScriptedInterface_vtbl *v18; 
  int v25; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  if ( this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 168, ASSERT_TYPE_ASSERT, "(!Is3D())", (const char *)&queryFormat, "!Is3D()") )
    __debugbreak();
  v9 = this->__vftable;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vaddss  xmm1, xmm7, dword ptr [rdx+984h]
    vaddss  xmm0, xmm8, dword ptr [rdx+98Ch]
  }
  p_CodeOrient = &this->m_pAI->CodeOrient;
  __asm
  {
    vmovss  [rsp+88h+var_58], xmm0
    vmovss  [rsp+88h+var_54], xmm1
    vmovss  [rsp+88h+var_50], xmm6
  }
  v9->SetDesiredBodyAngles(this, p_CodeOrient, (const vec3_t *)&v25, 0);
  v14 = this->__vftable;
  __asm
  {
    vaddss  xmm1, xmm7, dword ptr [rdx+99Ch]
    vaddss  xmm0, xmm8, dword ptr [rdx+9A4h]
  }
  p_ScriptOrient = &this->m_pAI->ScriptOrient;
  __asm
  {
    vmovss  [rsp+88h+var_58], xmm0
    vmovss  [rsp+88h+var_54], xmm1
    vmovss  [rsp+88h+var_50], xmm6
  }
  v14->SetDesiredBodyAngles(this, p_ScriptOrient, (const vec3_t *)&v25, 0);
  v18 = this->__vftable;
  __asm
  {
    vaddss  xmm0, xmm7, dword ptr [rdx+140h]
    vmovss  [rsp+88h+var_54], xmm0
    vmovss  [rsp+88h+var_58], xmm6
    vmovss  [rsp+88h+var_50], xmm6
  }
  v18->SetBodyAngles(this, (const vec3_t *)&v25);
  __asm
  {
    vaddss  xmm2, xmm7, dword ptr [rax+144h]; fYaw
    vaddss  xmm1, xmm8, dword ptr [rax+140h]; fPitch
  }
  AIScriptedInterface::SetLookAngles(this, *(const float *)&_XMM1, *(const float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
  }
}

/*
==============
AIScriptedInterface::GetAnglesToLikelyEnemyPath
==============
*/
char AIScriptedInterface::GetAnglesToLikelyEnemyPath(AIScriptedInterface *this)
{
  int v2; 
  ai_scripted_t *m_pAI; 
  int v4; 
  int v5; 
  bool IsDefined; 
  ai_scripted_t *v7; 
  const tacpoint_t *Point; 
  const tacpoint_t *v9; 
  sentient_s *TargetSentient; 
  sentient_s *v12; 
  sentient_info_t *v14; 
  bool v15; 
  ai_scripted_t *v16; 
  char v17; 
  bool v18; 
  const tacpoint_t *PointForPathnodeVis; 
  int v42; 
  const tacpoint_t *LastTacPointOnPathWithVis; 
  vec3_t outPos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 882, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 883, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  if ( AICommonInterface::HasPath(this) )
  {
    if ( !AIScriptedInterface::HadPath(this) )
    {
      v2 = level.time + 250;
      m_pAI = this->m_pAI;
      if ( m_pAI->sight.faceLikelyEnemyPathNeedRecalculateTime > level.time + 500 )
      {
        m_pAI->sight.faceLikelyEnemyPathNeedRecalculateTime = level.time + 500;
        m_pAI = this->m_pAI;
      }
      if ( m_pAI->sight.faceLikelyEnemyPathNeedCheckTime > v2 )
        m_pAI->sight.faceLikelyEnemyPathNeedRecalculateTime = v2;
    }
    v4 = 250;
    v5 = 500;
  }
  else
  {
    v4 = 500;
    v5 = 3000;
  }
  IsDefined = tacpoint_ref_t::IsDefined(&this->m_pAI->sight.faceLikelyEnemyTacPoint);
  v7 = this->m_pAI;
  if ( IsDefined )
  {
    if ( v7->sight.faceLikelyEnemyPathNeedCheckTime > level.time )
      return 1;
    if ( v7->sight.faceLikelyEnemyPathNeedRecalculateTime > level.time )
    {
      Point = tacpoint_ref_t::GetPoint(&v7->sight.faceLikelyEnemyTacPoint);
      v9 = Sentient_NearestTacPoint(this->m_pAI->sentient);
      if ( v9 )
      {
        if ( TacVisGraph_HasVis(v9, Point) )
        {
          AIScriptedInterface::SetAnglesToLikelyEnemyPath(this);
          this->m_pAI->sight.faceLikelyEnemyPathNeedCheckTime = v4 + level.time;
          return 1;
        }
      }
    }
    v7 = this->m_pAI;
  }
  else if ( v7->sight.faceLikelyEnemyPathNeedRecalculateTime > level.time )
  {
    return 0;
  }
  tacpoint_ref_t::SetPoint(&v7->sight.faceLikelyEnemyTacPoint, NULL);
  TargetSentient = AICommonInterface::GetTargetSentient(this);
  v12 = TargetSentient;
  if ( !TargetSentient || G_EntIsLinked(TargetSentient->ent) )
  {
    v42 = v4 + level.time;
    goto LABEL_38;
  }
  __asm { vmovss  xmm1, cs:__real@41700000; dist }
  v14 = &this->m_pAI->sentientInfo[v12 - level.sentients];
  v15 = AICommonInterface::NearClaimNode(this, *(float *)&_XMM1);
  v16 = this->m_pAI;
  v17 = 0;
  v18 = !v15;
  if ( v15 )
  {
    PointForPathnodeVis = TacGraph_GetPointForPathnodeVis(v16->sentient->pClaimedNode);
    v17 = 0;
    v18 = PointForPathnodeVis == NULL;
    if ( PointForPathnodeVis )
    {
      TacGraph_GetApproxGroundPosForPoint(PointForPathnodeVis, &outPos);
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+68h+outPos+8]
        vmovss  xmm2, dword ptr [rsp+68h+outPos+4]
        vmovss  xmm1, dword ptr [rsp+68h+outPos]
      }
      goto LABEL_33;
    }
    _RCX = this->m_pAI->ent;
    __asm
    {
      vmovss  xmm1, dword ptr [rcx+130h]
      vmovss  dword ptr [rsp+68h+outPos], xmm1
      vmovss  xmm2, dword ptr [rcx+134h]
      vmovss  dword ptr [rsp+68h+outPos+4], xmm2
      vmovss  xmm4, dword ptr [rcx+138h]
    }
  }
  else
  {
    _RAX = v16->ent;
    __asm
    {
      vmovss  xmm1, dword ptr [rax+130h]
      vmovss  dword ptr [rsp+68h+outPos], xmm1
      vmovss  xmm2, dword ptr [rax+134h]
      vmovss  dword ptr [rsp+68h+outPos+4], xmm2
      vmovss  xmm4, dword ptr [rax+138h]
    }
  }
  __asm { vmovss  dword ptr [rsp+68h+outPos+8], xmm4 }
LABEL_33:
  _RAX = v12->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+130h]
    vsubss  xmm3, xmm0, xmm1
    vmovss  xmm1, dword ptr [rax+134h]
    vmovss  xmm0, dword ptr [rax+138h]
    vsubss  xmm2, xmm1, xmm2
    vmulss  xmm2, xmm2, xmm2
    vsubss  xmm4, xmm0, xmm4
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:__real@48800000
  }
  if ( v17 | v18 )
  {
    LastTacPointOnPathWithVis = Sentient_FindLastTacPointOnPathWithVis(this->m_pAI->sentient, v12, v14, &outPos, &this->m_pAI->sight.faceLikelyEnemyCornerPos);
    tacpoint_ref_t::SetPoint(&this->m_pAI->sight.faceLikelyEnemyTacPoint, LastTacPointOnPathWithVis);
    if ( tacpoint_ref_t::IsDefined(&this->m_pAI->sight.faceLikelyEnemyTacPoint) )
    {
      AIScriptedInterface::SetAnglesToLikelyEnemyPath(this);
      this->m_pAI->sight.faceLikelyEnemyPathNeedRecalculateTime = v5 + level.time;
      this->m_pAI->sight.faceLikelyEnemyPathNeedCheckTime = v4 + level.time;
      return 1;
    }
  }
  v42 = v5 + level.time;
LABEL_38:
  this->m_pAI->sight.faceLikelyEnemyPathNeedRecalculateTime = v42;
  this->m_pAI->sight.faceLikelyEnemyPathNeedCheckTime = this->m_pAI->sight.faceLikelyEnemyPathNeedRecalculateTime;
  return 0;
}

/*
==============
AIScriptedInterface::GetDesiredLookDirFromMoveAndFacingDir3D
==============
*/
void AIScriptedInterface::GetDesiredLookDirFromMoveAndFacingDir3D(const vec3_t *moveDir, const vec3_t *dirToFace, vec3_t *outDesiredDir)
{
  char v32; 
  vec3_t angles; 
  char v55; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0C8h+var_88], xmm14
  }
  *(double *)&_XMM0 = vectoyaw((const vec2_t *)dirToFace);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = vectoyaw((const vec2_t *)moveDir);
  __asm
  {
    vmovss  xmm7, cs:__real@43340000
    vmovss  xmm12, cs:__real@42b40000
    vmovss  xmm11, cs:__real@c2b40000
    vsubss  xmm1, xmm0, xmm6
    vmulss  xmm3, xmm1, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm1
    vxorps  xmm14, xmm14, xmm14
    vroundss xmm2, xmm14, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm4, xmm0, cs:__real@43b40000
    vandps  xmm1, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@43070000
    vxorps  xmm8, xmm8, xmm8
  }
  if ( v32 )
  {
    __asm
    {
      vcomiss xmm1, cs:__real@42340000
      vxorps  xmm9, xmm9, xmm9
    }
  }
  else
  {
    __asm { vmovaps xmm9, xmm7 }
  }
  *(double *)&_XMM0 = vectopitch(dirToFace);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = vectopitch(moveDir);
  __asm
  {
    vsubss  xmm1, xmm0, xmm6
    vmulss  xmm4, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm2
    vroundss xmm3, xmm14, xmm1, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm2, xmm0, cs:__real@43b40000
    vandps  xmm1, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@43070000
  }
  if ( v32 )
  {
    __asm
    {
      vcomiss xmm1, cs:__real@42340000
      vxorps  xmm7, xmm7, xmm7
    }
    if ( !v32 )
    {
      __asm
      {
        vcmpltss xmm0, xmm8, xmm2
        vblendvps xmm7, xmm12, xmm11, xmm0
      }
    }
  }
  vectoangles(moveDir, &angles);
  __asm
  {
    vaddss  xmm1, xmm7, dword ptr [rsp+0C8h+angles]
    vaddss  xmm0, xmm9, dword ptr [rsp+0C8h+angles+4]
    vmovss  dword ptr [rsp+0C8h+angles], xmm1
    vmovss  dword ptr [rsp+0C8h+angles+4], xmm0
  }
  AngleVectors(&angles, outDesiredDir, NULL, NULL);
  _R11 = &v55;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm14, xmmword ptr [r11-70h]
  }
}

/*
==============
GetMinDistToFaceMotion
==============
*/
float GetMinDistToFaceMotion(vec3_t *lookaheadDir, vec3_t *forwardDir, vec3_t *pathDir)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm4, dword ptr [rdx+4]
    vmovss  xmm3, dword ptr [rdx]
    vmovss  xmm5, dword ptr [r8+4]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, cs:__real@80000000
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr [rcx+4]
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, dword ptr [rcx]
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm10, cs:__real@3f800000
    vmulss  xmm1, xmm9, xmm9
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, xmm6
    vblendvps xmm0, xmm2, xmm10, xmm0
    vdivss  xmm7, xmm10, xmm0
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm1, xmm0
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+88h+var_88], xmm13
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, xmm6
    vblendvps xmm0, xmm2, xmm10, xmm0
    vdivss  xmm1, xmm10, xmm0
    vmulss  xmm11, xmm3, xmm1
    vmovss  xmm3, dword ptr [r8]
    vmulss  xmm12, xmm4, xmm1
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, xmm6
    vblendvps xmm0, xmm2, xmm10, xmm0
    vdivss  xmm1, xmm10, xmm0
    vmulss  xmm6, xmm3, xmm1
    vmulss  xmm13, xmm5, xmm1
    vmovss  xmm5, cs:__real@3f000000
    vmulss  xmm0, xmm8, xmm7
    vmulss  xmm1, xmm9, xmm7
    vmulss  xmm2, xmm1, xmm11
    vmulss  xmm3, xmm0, xmm12
    vaddss  xmm0, xmm3, xmm2
    vcomiss xmm0, xmm5
    vxorps  xmm4, xmm4, xmm4
    vmulss  xmm1, xmm13, xmm12
    vmulss  xmm0, xmm6, xmm11
    vaddss  xmm1, xmm1, xmm0
    vcomiss xmm1, xmm5
    vxorps  xmm10, xmm10, xmm10
    vmovss  xmm1, cs:__real@42c80000
    vmovss  xmm0, cs:__real@42800000
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
    vmovaps xmm11, [rsp+88h+var_68]
    vmovaps xmm12, [rsp+88h+var_78]
    vmovaps xmm13, [rsp+88h+var_88]
    vcmpneqss xmm2, xmm10, xmm4
    vmovaps xmm10, [rsp+88h+var_58]
    vblendvps xmm0, xmm0, xmm1, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::LerpAnglesWithQuaternions
==============
*/

void __fastcall AIScriptedInterface::LerpAnglesWithQuaternions(const vec3_t *currentAngles, const vec3_t *desiredAngles, double lerpSpeed, vec3_t *outAngles)
{
  char v23; 
  char v24; 
  vec4_t qb; 
  vec4_t quat; 
  vec4_t out; 
  tmat33_t<vec3_t> axis; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmm7, xmm2
  }
  AnglesToQuat(currentAngles, &quat);
  AnglesToQuat(desiredAngles, &qb);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+0B8h+qb+4]
    vmulss  xmm2, xmm1, dword ptr [rsp+0B8h+quat+4]
    vmovss  xmm0, dword ptr [rsp+0B8h+qb]
    vmulss  xmm3, xmm0, dword ptr [rsp+0B8h+quat]
    vmovss  xmm0, dword ptr [rsp+0B8h+qb+8]
    vmulss  xmm1, xmm0, dword ptr [rsp+0B8h+quat+8]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rsp+0B8h+qb+0Ch]
    vmulss  xmm0, xmm2, dword ptr [rsp+0B8h+quat+0Ch]
    vaddss  xmm3, xmm4, xmm1
    vaddss  xmm6, xmm3, xmm0
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps xmm0, xmm7; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm { vcomiss xmm6, xmm0 }
  if ( v23 | v24 )
  {
    __asm { vmovaps xmm2, xmm7; frac }
    QuatLerp(&quat, &qb, *(float *)&_XMM2, &out);
    QuatToAxis(&out, &axis);
    AxisToAngles(&axis, outAngles);
  }
  else
  {
    outAngles->v[0] = desiredAngles->v[0];
    outAngles->v[1] = desiredAngles->v[1];
    outAngles->v[2] = desiredAngles->v[2];
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_28]
    vmovaps xmm7, [rsp+0B8h+var_38]
  }
}

/*
==============
AIScriptedInterface::PredictOrientation
==============
*/
void AIScriptedInterface::PredictOrientation(AIScriptedInterface *this)
{
  bool predictedFaceMotion; 

  predictedFaceMotion = this->m_pAI->orientation.predictedFaceMotion;
  this->m_pAI->orientation.predictedFaceMotion = !AIScriptedInterface::ShouldStrafe(this);
  this->m_pAI->bPredictedFaceMotionChanged = predictedFaceMotion != this->m_pAI->orientation.predictedFaceMotion;
}

/*
==============
AIScriptedInterface::SetAnglesToLikelyEnemyPath
==============
*/
void AIScriptedInterface::SetAnglesToLikelyEnemyPath(AIScriptedInterface *this)
{
  AIScriptedInterface_vtbl *v9; 
  bool v10; 
  vec3_t forward; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 830, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !tacpoint_ref_t::IsDefined(&this->m_pAI->sight.faceLikelyEnemyTacPoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 831, ASSERT_TYPE_ASSERT, "(m_pAI->sight.faceLikelyEnemyTacPoint.IsDefined())", (const char *)&queryFormat, "m_pAI->sight.faceLikelyEnemyTacPoint.IsDefined()") )
    __debugbreak();
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0DCh]
    vsubss  xmm1, xmm0, dword ptr [rcx+130h]
    vmovss  dword ptr [rsp+0A8h+forward], xmm1
    vmovss  xmm2, dword ptr [rax+0E0h]
    vsubss  xmm0, xmm2, dword ptr [rcx+134h]
    vmovss  dword ptr [rsp+0A8h+forward+4], xmm0
    vmovss  xmm1, dword ptr [rax+0E4h]
    vsubss  xmm2, xmm1, dword ptr [rcx+138h]
  }
  v9 = this->__vftable;
  __asm { vmovss  dword ptr [rsp+0A8h+forward+8], xmm2 }
  v10 = v9->Is3D(this);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+0A8h+forward+4]
    vmovss  xmm5, dword ptr [rsp+0A8h+forward]
  }
  if ( v10 )
  {
    __asm
    {
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm3, xmm1, xmm0
      vmovss  xmm1, dword ptr [rsp+0A8h+forward+8]
      vmulss  xmm2, xmm1, xmm1
      vaddss  xmm0, xmm3, xmm2
      vcomiss xmm0, cs:__real@3f800000
    }
    AnglesToAxis(&this->m_pAI->ent->r.currentAngles, &axis);
    GenerateAxisFromForwardVector(&forward, &axis, &outAxis);
    AxisToAngles(&outAxis, &this->m_pAI->sight.anglesToLikelyEnemyPath);
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm1, xmm1, xmm0
      vcomiss xmm1, cs:__real@3f800000
    }
    vectoangles(&forward, &this->m_pAI->sight.anglesToLikelyEnemyPath);
  }
}

/*
==============
AIScriptedInterface::SetBodyAngles
==============
*/
void AIScriptedInterface::SetBodyAngles(AIScriptedInterface *this, const vec3_t *angles)
{
  int v19; 
  int v20; 
  int v21; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  _RBX = angles;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
  {
LABEL_12:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 148, ASSERT_TYPE_ASSERT, "(!IS_NAN( angles[0] ) && !IS_NAN( angles[1] ) && !IS_NAN( angles[2] ))", "%s\n\tActor_SetBodyAngles has an invalid set of angles", "!IS_NAN( angles[0] ) && !IS_NAN( angles[1] ) && !IS_NAN( angles[2] )") )
      __debugbreak();
  }
  _RDI = this->GetEntity(this);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 151, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rbx+8]; angle }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovss  xmm0, dword ptr [rbx+4]; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovss  xmm0, dword ptr [rbx]; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rdi+140h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rdi+144h], xmm7
    vmovaps xmm7, [rsp+58h+var_28]
    vmovss  dword ptr [rdi+13Ch], xmm0
  }
}

/*
==============
AIScriptedInterface::SetDesiredBodyAngles
==============
*/
void AIScriptedInterface::SetDesiredBodyAngles(AIScriptedInterface *this, ai_orient_t *pOrient, const vec3_t *vDesiredAngles, int bSetBodyPitchAndRoll)
{
  int v26; 
  int v27; 
  int v28; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps [rsp+68h+var_38], xmm7
  }
  _RBX = vDesiredAngles;
  _RDI = pOrient;
  if ( !pOrient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 100, ASSERT_TYPE_ASSERT, "(pOrient)", (const char *)&queryFormat, "pOrient") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+68h+arg_18], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+68h+arg_18], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+68h+arg_18], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 )
  {
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 101, ASSERT_TYPE_ASSERT, "(!IS_NAN( vDesiredAngles[0] ) && !IS_NAN( vDesiredAngles[1] ) && !IS_NAN( vDesiredAngles[2] ))", "%s\n\tActor_SetDesiredBodyAngles has an invalid set of angles", "!IS_NAN( vDesiredAngles[0] ) && !IS_NAN( vDesiredAngles[1] ) && !IS_NAN( vDesiredAngles[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+4]
    vmovss  xmm7, dword ptr [rbx]
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 36, ASSERT_TYPE_ASSERT, "(pOrient)", (const char *)&queryFormat, "pOrient") )
    __debugbreak();
  __asm { vmovaps xmm0, xmm7; angle }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rdi+10h], xmm0
    vmovaps xmm0, xmm6; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rdi+14h], xmm0
    vmovss  xmm0, dword ptr [rbx+4]; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm { vmovss  dword ptr [rdi+8], xmm0 }
  if ( bSetBodyPitchAndRoll )
  {
    __asm { vmovss  xmm1, dword ptr [rbx]; fAngle }
    AIScriptedInterface::SetDesiredBodyPitch(_RDI, *(const float *)&_XMM1);
    __asm { vmovss  xmm6, dword ptr [rbx+8] }
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1; fAngle
      vxorps  xmm6, xmm6, xmm6
    }
    AIScriptedInterface::SetDesiredBodyPitch(_RDI, *(const float *)&_XMM1);
  }
  __asm
  {
    vmovaps xmm1, xmm6; fAngle
    vmovaps xmm6, [rsp+68h+var_28]
    vmovaps xmm7, [rsp+68h+var_38]
  }
  AIScriptedInterface::SetDesiredBodyRoll(_RDI, *(const float *)&_XMM1);
}

/*
==============
AIScriptedInterface::SetDesiredBodyPitch
==============
*/

void __fastcall AIScriptedInterface::SetDesiredBodyPitch(ai_orient_t *pOrient, double fAngle)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = pOrient;
  __asm { vmovaps xmm6, xmm1 }
  if ( !pOrient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 69, ASSERT_TYPE_ASSERT, "(pOrient)", (const char *)&queryFormat, "pOrient") )
    __debugbreak();
  __asm { vmovaps xmm0, xmm6; angle }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbx+4], xmm0
  }
}

/*
==============
AIScriptedInterface::SetDesiredBodyRoll
==============
*/

void __fastcall AIScriptedInterface::SetDesiredBodyRoll(ai_orient_t *pOrient, double fAngle)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = pOrient;
  __asm { vmovaps xmm6, xmm1 }
  if ( !pOrient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 85, ASSERT_TYPE_ASSERT, "(pOrient)", (const char *)&queryFormat, "pOrient") )
    __debugbreak();
  __asm { vmovaps xmm0, xmm6; angle }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbx+0Ch], xmm0
  }
}

/*
==============
AIScriptedInterface::SetDesiredBodyYaw
==============
*/

void __fastcall AIScriptedInterface::SetDesiredBodyYaw(ai_orient_t *pOrient, double fAngle)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = pOrient;
  __asm { vmovaps xmm6, xmm1 }
  if ( !pOrient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 53, ASSERT_TYPE_ASSERT, "(pOrient)", (const char *)&queryFormat, "pOrient") )
    __debugbreak();
  __asm { vmovaps xmm0, xmm6; angle }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbx+8], xmm0
  }
}

/*
==============
AIScriptedInterface::SetDesiredLookAngles
==============
*/

void __fastcall AIScriptedInterface::SetDesiredLookAngles(ai_orient_t *pOrient, double fPitch, double fYaw)
{
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = pOrient;
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm2
  }
  if ( !pOrient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 36, ASSERT_TYPE_ASSERT, "(pOrient)", (const char *)&queryFormat, "pOrient") )
    __debugbreak();
  __asm { vmovaps xmm0, xmm7; angle }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rbx+10h], xmm0
    vmovaps xmm0, xmm6; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovss  dword ptr [rbx+14h], xmm0
  }
}

/*
==============
AIScriptedInterface::SetLookAngles
==============
*/

void __fastcall AIScriptedInterface::SetLookAngles(AIScriptedInterface *this, double fPitch, double fYaw)
{
  ai_scripted_t *m_pAI; 
  vec3_t angles; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 127, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  __asm { vmovaps xmm0, xmm6; angle }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  dword ptr [rax+140h], xmm0
    vmovss  dword ptr [rsp+78h+angles], xmm0
    vmovaps xmm0, xmm7; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  _RAX = this->m_pAI;
  __asm { vmovss  dword ptr [rax+144h], xmm0 }
  m_pAI = this->m_pAI;
  __asm
  {
    vmovss  dword ptr [rsp+78h+angles+4], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+78h+angles+8], xmm0
  }
  AngleVectors(&angles, &m_pAI->orientation.vLookForward, &m_pAI->orientation.vLookRight, &m_pAI->orientation.vLookUp);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
AIScriptedInterface::SetOrientMode
==============
*/
void AIScriptedInterface::SetOrientMode(AIScriptedInterface *this, ai_orient_mode_t eMode)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1749, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( (unsigned int)(eMode - 1) > 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1750, ASSERT_TYPE_ASSERT, "(eMode > AI_ORIENT_INVALID && eMode < AI_ORIENT_COUNT)", (const char *)&queryFormat, "eMode > AI_ORIENT_INVALID && eMode < AI_ORIENT_COUNT") )
    __debugbreak();
  this->m_pAI->CodeOrient.eMode = eMode;
}

/*
==============
AIScriptedInterface::ShouldCautiousStrafe
==============
*/
bool AIScriptedInterface::ShouldCautiousStrafe(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  char v11; 
  pathnode_t *node; 
  bool HasValidUpcomingTurnCached; 
  bool result; 
  char v42; 
  vec3_t forward; 
  char v49; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  if ( !AIScriptedInterface::IsApproachingTightQuarters(this) )
  {
    m_pAI = this->m_pAI;
    if ( !m_pAI->cautiousNavigationEnabled )
    {
      if ( m_pAI->avoidance_active )
        goto LABEL_28;
      _RDI = DCONST_DVARFLT_ai_maxSpeedForForcedCornerStrafing;
      if ( !DCONST_DVARFLT_ai_maxSpeedForForcedCornerStrafing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedForForcedCornerStrafing") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      _RCX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vcomiss xmm0, dword ptr [rcx+0D4Ch]
      }
      if ( v11 )
        goto LABEL_28;
      *(double *)&_XMM0 = Nav_GetPathDistToGoal(_RCX->pNavigator);
      _RDI = DCONST_DVARFLT_ai_minDistanceFromGoalForForcedCornerStrafing;
      __asm { vmovaps xmm6, xmm0 }
      if ( !DCONST_DVARFLT_ai_minDistanceFromGoalForForcedCornerStrafing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minDistanceFromGoalForForcedCornerStrafing") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vcomiss xmm6, dword ptr [rdi+28h] }
      if ( v11 )
      {
        node = this->m_pAI->codeGoal.node;
        if ( node )
        {
          if ( ((1 << LOBYTE(node->constant.type)) & 0x82641EFC) != 0 )
          {
LABEL_28:
            if ( !AIScriptedInterface::ShouldCornerStrafeBecauseEnemy(this) )
              goto LABEL_24;
          }
        }
      }
    }
  }
  if ( AICommonInterface::GetTargetEntity(this) && (AICommonInterface::RecentlySeeEnemy(this) || AIScriptedInterface::IsDoingReacquire(this)) )
    goto LABEL_24;
  HasValidUpcomingTurnCached = AIScriptedInterface::HasValidUpcomingTurnCached(this);
  _RCX = this->m_pAI;
  if ( HasValidUpcomingTurnCached )
  {
    _RCX->isInCautiousCornerStrafe = 1;
    result = 1;
    goto LABEL_25;
  }
  if ( !_RCX->isInCautiousCornerStrafe )
  {
LABEL_24:
    result = 0;
    goto LABEL_25;
  }
  __asm
  {
    vmovaps [rsp+0A8h+var_28], xmm7
    vmovss  xmm7, dword ptr [rcx+838h]
    vmulss  xmm1, xmm7, xmm7
    vmovaps [rsp+0A8h+var_38], xmm8
    vmovss  xmm8, dword ptr [rcx+83Ch]
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmovaps [rsp+0A8h+var_48], xmm9
    vmovss  xmm9, dword ptr [rcx+840h]
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm6, xmm1, xmm0
  }
  AngleVectors(&_RCX->ent->r.currentAngles, &forward, NULL, NULL);
  __asm
  {
    vmulss  xmm0, xmm7, xmm6
    vmulss  xmm3, xmm0, dword ptr [rsp+0A8h+forward]
    vmovaps xmm7, [rsp+0A8h+var_28]
    vmulss  xmm1, xmm8, xmm6
    vmulss  xmm2, xmm1, dword ptr [rsp+0A8h+forward+4]
    vmovaps xmm8, [rsp+0A8h+var_38]
    vmulss  xmm0, xmm9, xmm6
    vmulss  xmm1, xmm0, dword ptr [rsp+0A8h+forward+8]
    vmovaps xmm9, [rsp+0A8h+var_48]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, cs:__real@3f774bc7
  }
  if ( !(v11 | v42) )
    this->m_pAI->isInCautiousCornerStrafe = 0;
  result = this->m_pAI->isInCautiousCornerStrafe;
LABEL_25:
  _R11 = &v49;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
AIScriptedInterface::ShouldCornerStrafeBecauseEnemy
==============
*/
bool AIScriptedInterface::ShouldCornerStrafeBecauseEnemy(AIScriptedInterface *this)
{
  bool result; 
  char v30; 
  char v31; 
  bool v33; 
  __int64 v48; 
  __int64 v49; 
  bool v62; 
  char v69; 
  int v70; 
  int v71[5]; 
  bfx::AreaHandle v72; 
  bfx::LinkHandle v73; 
  char v74; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm11
    vmovaps xmmword ptr [rax-48h], xmm12
    vmovaps xmmword ptr [rax-58h], xmm13
  }
  if ( !AICommonInterface::GetTargetEntity(this) )
    goto LABEL_2;
  this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, (vec3_t *)&v70);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+130h]
    vsubss  xmm7, xmm0, [rsp+0F8h+var_B8]
    vmovss  xmm1, dword ptr [rdi+134h]
    vsubss  xmm6, xmm1, [rsp+0F8h+var_B4]
    vmovss  xmm0, dword ptr [rdi+138h]
    vsubss  xmm5, xmm0, [rsp+0F8h+var_B0]
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm4, xmm2, xmm1
    vsqrtss xmm3, xmm4, xmm4
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm3, xmm2, xmm0
    vdivss  xmm0, xmm2, xmm1
    vmulss  xmm11, xmm7, xmm0
    vmulss  xmm12, xmm6, xmm0
    vmulss  xmm13, xmm5, xmm0
  }
  _RAX = this->m_pAI;
  __asm { vcomiss xmm4, dword ptr [rax+5DCh] }
  if ( !(v30 | v31) )
    goto LABEL_2;
  _RAX = _RAX->ent;
  v33 = __CFADD__(_RAX, 304i64) || &_RAX->r.currentOrigin == NULL;
  _RAX = (gentity_s *)((char *)_RAX + 304);
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vsubss  xmm3, xmm0, [rsp+0F8h+var_B8]
    vmovss  xmm1, dword ptr [rax+4]
    vsubss  xmm2, xmm1, [rsp+0F8h+var_B4]
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm4, xmm0, [rsp+0F8h+var_B0]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm6, xmm2, xmm2
    vmovss  xmm7, cs:__real@42800000
    vcomiss xmm6, xmm7
  }
  if ( v33 )
  {
    bfx::AreaHandle::AreaHandle(&v72);
    bfx::LinkHandle::LinkHandle(&v73);
    __asm { vaddss  xmm1, xmm6, xmm7 }
    v69 = 0;
    LOBYTE(v48) = 1;
    ((void (__fastcall *)(AINavigator *, __int64, __int64, int *, char))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, v49, v48, v71, v69);
    __asm
    {
      vmovss  xmm0, [rsp+0F8h+var_A8]
      vsubss  xmm2, xmm0, [rsp+0F8h+var_B8]
      vmovss  xmm1, [rsp+0F8h+var_A4]
      vsubss  xmm3, xmm1, [rsp+0F8h+var_B4]
      vmovss  xmm0, [rsp+0F8h+var_A0]
      vsubss  xmm4, xmm0, [rsp+0F8h+var_B0]
      vmulss  xmm2, xmm2, xmm11
      vmulss  xmm1, xmm3, xmm12
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm13
      vaddss  xmm4, xmm3, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm4, xmm1
    }
    v62 = !v30;
    bfx::LinkHandle::~LinkHandle(&v73);
    bfx::AreaHandle::~AreaHandle(&v72);
    result = v62;
  }
  else
  {
LABEL_2:
    result = 0;
  }
  _R11 = &v74;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm11, xmmword ptr [r11-30h]
    vmovaps xmm12, xmmword ptr [r11-40h]
    vmovaps xmm13, xmmword ptr [r11-50h]
  }
  return result;
}

/*
==============
AIScriptedInterface::ShouldFaceGoalNode
==============
*/
bool AIScriptedInterface::ShouldFaceGoalNode(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  pathnode_t *pClaimedNode; 
  char v5; 
  ai_scripted_t *v9; 
  gentity_s *TargetEntity; 
  unsigned __int16 type; 
  bool result; 
  vec3_t pos; 
  int v24[4]; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 594, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  if ( !AICommonInterface::HasPath(this) )
    goto LABEL_26;
  if ( !AIScriptedInterface::UsingCoverNodes(this) )
    goto LABEL_26;
  m_pAI = this->m_pAI;
  if ( !m_pAI->bArrivalFailed && m_pAI->orientation.faceMotion )
    goto LABEL_26;
  pClaimedNode = m_pAI->sentient->pClaimedNode;
  if ( !pClaimedNode )
    goto LABEL_26;
  if ( ((1 << LOBYTE(pClaimedNode->constant.type)) & 0x82641EFC) == 0 )
    goto LABEL_26;
  pathnode_t::GetPos(pClaimedNode, &pos);
  this->m_pAI->pNavigator->GetRequestedGoalPos(this->m_pAI->pNavigator, (vec3_t *)v24);
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+78h+pos]
    vucomiss xmm2, [rsp+78h+var_38]
  }
  if ( !v5 )
    goto LABEL_26;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+78h+pos+4]
    vucomiss xmm0, [rsp+78h+var_34]
  }
  if ( !v5 )
    goto LABEL_26;
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+78h+pos+8]
    vucomiss xmm1, [rsp+78h+var_30]
  }
  if ( !v5 )
    goto LABEL_26;
  v9 = this->m_pAI;
  __asm
  {
    vsubss  xmm0, xmm0, dword ptr [rax+4]
    vsubss  xmm2, xmm2, dword ptr [rax]
    vsubss  xmm3, xmm1, dword ptr [rax+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm6, xmm2, xmm1
    vcomiss xmm6, cs:__real@45800000
  }
  if ( v9->ent < (gentity_s *)0xFFFFFFFFFFFFFED0i64 && v9->ent != (gentity_s *)-304i64 )
    goto LABEL_26;
  if ( !v9->pNavigator->IsNextCornerGoal(v9->pNavigator) )
    __asm { vcomiss xmm6, cs:__real@44800000 }
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  if ( !TargetEntity )
    goto LABEL_25;
  if ( this->m_pAI->blackboard.m_bShouldInitiallyAttackFromExposed )
    goto LABEL_26;
  if ( (pClaimedNode->constant.spawnflags & 4) != 0 || (type = pClaimedNode->constant.type, (unsigned __int16)(type - 2) <= 2u) || type == 22 )
  {
    if ( AIScriptedInterface::CanShootEnemy(this, 250, 0, 0) )
      goto LABEL_26;
  }
  if ( !Path_NodeIgnoresAngles(pClaimedNode) )
  {
    __asm { vxorps  xmm2, xmm2, xmm2; dotLimit }
    if ( !Path_IsNodeFacingToward(pClaimedNode, &TargetEntity->r.currentOrigin, *(float *)&_XMM2) )
      goto LABEL_26;
  }
  if ( AIScriptedInterface::Cover_IsValidAgainstEnemy(this, pClaimedNode, 1) )
LABEL_25:
    result = 1;
  else
LABEL_26:
    result = 0;
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  return result;
}

/*
==============
AIScriptedInterface::ShouldForceCautiousStrafe
==============
*/
bool AIScriptedInterface::ShouldForceCautiousStrafe(AIScriptedInterface *this)
{
  char v6; 
  pathnode_t *node; 

  if ( this->m_pAI->avoidance_active )
    return 0;
  _RDI = DCONST_DVARFLT_ai_maxSpeedForForcedCornerStrafing;
  if ( !DCONST_DVARFLT_ai_maxSpeedForForcedCornerStrafing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedForForcedCornerStrafing") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  _RCX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vcomiss xmm0, dword ptr [rcx+0D4Ch]
  }
  if ( v6 )
    return 0;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  *(double *)&_XMM0 = Nav_GetPathDistToGoal(_RCX->pNavigator);
  _RDI = DCONST_DVARFLT_ai_minDistanceFromGoalForForcedCornerStrafing;
  __asm { vmovaps xmm6, xmm0 }
  if ( !DCONST_DVARFLT_ai_minDistanceFromGoalForForcedCornerStrafing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minDistanceFromGoalForForcedCornerStrafing") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vcomiss xmm6, dword ptr [rdi+28h]
    vmovaps xmm6, [rsp+58h+var_18]
  }
  if ( !v6 )
    return 1;
  node = this->m_pAI->codeGoal.node;
  return !node || ((1 << LOBYTE(node->constant.type)) & 0x82641EFC) == 0;
}

/*
==============
AIScriptedInterface::ShouldStrafe
==============
*/
bool AIScriptedInterface::ShouldStrafe(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  bool v8; 
  bool result; 
  ai_scripted_t *v13; 
  sentient_s *sentient; 
  pathnode_t *pClaimedNode; 
  ai_reacquire_state_t Reacquire; 
  ai_scripted_t *v18; 
  ai_scripted_t *v19; 
  char v22; 
  ai_scripted_t *v24; 
  int v25; 
  sentient_s *TargetSentient; 
  AINavigator *pNavigator; 
  char v52; 
  vec3_t v69; 
  vec3_t position; 
  vec3_t pos; 
  int v72[4]; 
  int v73; 
  vec3_t forward; 
  vec3_t outLookaheadDir; 

  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1374, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  m_pAI = this->m_pAI;
  __asm
  {
    vmovaps [rsp+100h+var_10], xmm6
    vmovaps [rsp+100h+var_20], xmm7
  }
  v8 = !m_pAI->bAllowStrafe;
  __asm { vmovaps [rsp+100h+var_30], xmm8 }
  if ( v8 )
    goto LABEL_46;
  if ( !m_pAI->arrivalInfo.arriving )
  {
    if ( !AICommonInterface::HasPath(this) )
      goto LABEL_46;
    if ( AIScriptedInterface::IsOnStairs(this) )
      goto LABEL_46;
    if ( EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) )
      goto LABEL_46;
    __asm
    {
      vmovss  xmm6, cs:__real@42c80000
      vmovaps xmm1, xmm6
    }
    if ( ((unsigned __int8 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->HasTraversalWithin)(this->m_pAI->pNavigator) )
      goto LABEL_46;
    __asm { vmovaps xmm1, xmm6 }
    if ( ((unsigned __int8 (__fastcall *)(AIScriptedInterface *))this->GetStairsWithinDist)(this) )
      goto LABEL_46;
    v13 = this->m_pAI;
    if ( (v13->eAllowedStances & 1) == 0 )
      goto LABEL_46;
    if ( (((__int64 (__fastcall *)(AINavigator *))v13->pNavigator->GetAllowedStances)(v13->pNavigator) & 1) == 0 )
      goto LABEL_46;
    sentient = this->m_pAI->sentient;
    pClaimedNode = sentient->pClaimedNode;
    if ( pClaimedNode )
    {
      pathnode_t::GetPos(sentient->pClaimedNode, &pos);
      __asm { vmovss  xmm3, cs:__real@40000000; buffer }
      if ( AICommonInterface::PointNearPoint(this, &pos, &this->m_pAI->ent->r.currentOrigin, *(float *)&_XMM3) && (pClaimedNode->constant.spawnflags & 4) != 0 )
        goto LABEL_46;
    }
    Reacquire = AIScriptedInterface::GetReacquire(this);
    v18 = this->m_pAI;
    if ( Reacquire == AI_REACQUIRE_REACQUIRED || v18->blackboard.m_bForceStrafe )
    {
      v18->orientation.predictedStrafePosValid = 0;
      result = 1;
      goto LABEL_47;
    }
    *(double *)&_XMM0 = Nav_GetPathDistToGoal(v18->pNavigator);
    v19 = this->m_pAI;
    __asm
    {
      vmovss  xmm7, cs:__real@42800000
      vmovaps xmm8, xmm0
    }
    if ( !v19->orientation.predictedFaceMotion )
    {
      v22 = 0;
      if ( !v19->speedScaleMode[0] )
        goto LABEL_23;
      *(double *)&_XMM0 = AIScriptedInterface::GetTargetSpeed(this);
      __asm { vcomiss xmm0, cs:__real@42700000 }
      if ( v22 | v8 )
        __asm { vmovss  xmm0, cs:__real@42200000 }
      else
LABEL_23:
        __asm { vmovaps xmm0, xmm7 }
      __asm { vcomiss xmm8, xmm0 }
      if ( v22 )
        goto LABEL_37;
    }
    if ( AIScriptedInterface::IsDoingReacquire(this) )
      __asm { vcomiss xmm8, xmm6 }
    if ( AIScriptedInterface::ShouldFaceGoalNode(this) )
      goto LABEL_37;
    if ( AICommonInterface::GetTargetEntity(this) )
    {
      v24 = this->m_pAI;
      v25 = 2000;
      if ( v24->orientation.predictedFaceMotion && (signed int)v24->pNavigator->m_TimeOfLastPathUpdate < level.time )
        v25 = 200;
      TargetSentient = AICommonInterface::GetTargetSentient(this);
      if ( TargetSentient )
      {
        if ( !AICommonInterface::RecentlySeeSentient(this, TargetSentient, v25) )
          goto LABEL_34;
      }
      else if ( !AICommonInterface::CanSeeEnemy(this) )
      {
        goto LABEL_34;
      }
      __asm { vmovaps [rsp+100h+var_40], xmm9 }
      AICommonInterface::GetTargetPosition(this, &position);
      _RCX = this->m_pAI;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+position]
        vmovss  xmm1, dword ptr [rbp+57h+position+4]
        vmovss  xmm6, dword ptr [rcx+5DCh]
        vsubss  xmm3, xmm0, dword ptr [rax+130h]
        vsubss  xmm2, xmm1, dword ptr [rax+134h]
        vmovss  xmm0, dword ptr [rbp+57h+position+8]
        vsubss  xmm4, xmm0, dword ptr [rax+138h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm9, xmm3, xmm0
      }
      if ( level.time - _RCX->iLastSetEnemyTime <= 3000 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+5E0h]
          vmaxss  xmm6, xmm0, xmm6
        }
      }
      *(double *)&_XMM0 = AIScriptedInterface::GetTargetSpeed(this);
      __asm { vcomiss xmm0, cs:__real@42a00000 }
      if ( v52 )
      {
        _RAX = this->m_pAI;
        __asm
        {
          vmovss  xmm0, cs:__real@42b00000
          vcomiss xmm0, dword ptr [rax+0B48h]
        }
        if ( v52 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rax+5E4h]
            vmaxss  xmm6, xmm0, xmm6
          }
        }
      }
      _EDX = 0;
      __asm
      {
        vmovd   xmm1, edx
        vaddss  xmm3, xmm6, xmm7
      }
      _EAX = this->m_pAI->orientation.predictedFaceMotion;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm3, xmm6, xmm3, xmm2
        vmulss  xmm0, xmm3, xmm3
        vcomiss xmm9, xmm0
        vmovaps xmm9, [rsp+100h+var_40]
        vmovss  [rbp+57h+var_D0], xmm3
      }
    }
LABEL_34:
    this->m_pAI->pNavigator->GetSnappedPathStartPos(this->m_pAI->pNavigator, (vec3_t *)&v73);
    this->m_pAI->pNavigator->GetRequestedGoalPos(this->m_pAI->pNavigator, (vec3_t *)v72);
    __asm
    {
      vmovss  xmm0, [rbp+57h+var_90]
      vsubss  xmm7, xmm0, [rbp+57h+var_80]
      vmovss  xmm0, [rbp+57h+var_88]
      vsubss  xmm2, xmm0, [rbp+57h+var_78]
      vmovss  xmm1, [rbp+57h+var_8C]
    }
    pNavigator = this->m_pAI->pNavigator;
    __asm
    {
      vsubss  xmm6, xmm1, [rbp+57h+var_7C]
      vmovss  dword ptr [rbp+57h+pos+8], xmm2
    }
    Nav_GetLookaheadDir(pNavigator, &outLookaheadDir);
    AngleVectors(&this->m_pAI->ent->r.currentAngles, &forward, NULL, NULL);
    position.v[2] = pos.v[2];
    __asm
    {
      vunpcklps xmm0, xmm7, xmm6
      vmovsd  qword ptr [rbp+57h+position], xmm0
      vmovsd  xmm0, qword ptr [rbp+57h+forward]
      vmovsd  [rbp+57h+var_C0], xmm0
      vmovsd  xmm0, qword ptr [rbp+57h+outLookaheadDir]
    }
    v69.v[2] = forward.v[2];
    __asm { vmovsd  qword ptr [rbp+57h+pos], xmm0 }
    pos.v[2] = outLookaheadDir.v[2];
    *(float *)&_XMM0 = GetMinDistToFaceMotion(&pos, &v69, &position);
    __asm
    {
      vmovaps xmm1, xmm0
      vmovaps xmm6, xmm0
    }
    if ( !((unsigned __int8 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->IsPathLengthAtLeast)(this->m_pAI->pNavigator) )
      __asm { vcomiss xmm8, xmm6 }
    if ( AIScriptedInterface::ShouldCautiousStrafe(this) )
    {
LABEL_37:
      this->m_pAI->orientation.predictedStrafePosValid = 0;
      result = 1;
      goto LABEL_47;
    }
LABEL_46:
    result = 0;
    goto LABEL_47;
  }
  result = !m_pAI->orientation.predictedFaceMotion;
LABEL_47:
  __asm
  {
    vmovaps xmm8, [rsp+100h+var_30]
    vmovaps xmm7, [rsp+100h+var_20]
    vmovaps xmm6, [rsp+100h+var_10]
  }
  return result;
}

/*
==============
AIScriptedInterface::UpdateBodyAngle
==============
*/
void AIScriptedInterface::UpdateBodyAngle(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  EntityTagInfo *tagInfo; 
  int IsProne; 
  bool v26; 
  AIScriptedInterface_vtbl *v53; 
  vec3_t currentAngles; 
  vec3_t outAngles; 

  _RCX = this->m_pAI;
  if ( _RCX->ScriptOrient.eMode )
  {
    _RCX->orientation.vDesiredAngles.v[0] = _RCX->ScriptOrient.vDesiredAngles.v[0];
    _RCX->orientation.vDesiredAngles.v[1] = _RCX->ScriptOrient.vDesiredAngles.v[1];
    __asm { vmovss  xmm0, dword ptr [rcx+9A0h] }
  }
  else
  {
    _RCX->orientation.vDesiredAngles.v[0] = _RCX->CodeOrient.vDesiredAngles.v[0];
    _RCX->orientation.vDesiredAngles.v[1] = _RCX->CodeOrient.vDesiredAngles.v[1];
    __asm { vmovss  xmm0, dword ptr [rcx+988h] }
  }
  __asm { vmovss  dword ptr [rcx+13Ch], xmm0 }
  _RAX = _RCX->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+13Ch]
    vmovss  dword ptr [rsp+0B8h+currentAngles], xmm0
    vmovss  xmm1, dword ptr [rax+140h]
    vmovss  dword ptr [rsp+0B8h+currentAngles+4], xmm1
    vmovss  xmm0, dword ptr [rax+144h]
    vmovss  dword ptr [rsp+0B8h+currentAngles+8], xmm0
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->Physics.bJumping || m_pAI->Physics.bTrackMoverUp || this->Is3D(this) || (_RDX = this->m_pAI, (tagInfo = _RDX->ent->tagInfo) != NULL) && tagInfo->movementChangesOffset )
  {
    _RDX = this->m_pAI;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, edi
      vmovss  xmm0, dword ptr [rdx+0B40h]
      vmulss  xmm2, xmm0, cs:__real@3c8efa35
      vmulss  xmm2, xmm2, xmm1; lerpSpeed
    }
    AIScriptedInterface::LerpAnglesWithQuaternions(&currentAngles, &_RDX->orientation.vDesiredAngles, *(const float *)&_XMM2, &outAngles);
    this->SetBodyAngles(this, &outAngles);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+138h]
      vsubss  xmm1, xmm0, dword ptr [rsp+0B8h+currentAngles+4]
      vmulss  xmm3, xmm1, cs:__real@3b360b61
      vaddss  xmm1, xmm3, cs:__real@3f000000
      vmovaps [rsp+0B8h+var_18], xmm6
      vmovaps [rsp+0B8h+var_28], xmm10
      vmovaps [rsp+0B8h+var_38], xmm11
      vmovaps [rsp+0B8h+var_48], xmm12
      vmovaps [rsp+0B8h+var_58], xmm14
      vxorps  xmm14, xmm14, xmm14
      vroundss xmm2, xmm14, xmm1, 1
      vxorps  xmm12, xmm12, xmm12
      vcomiss xmm12, dword ptr [rdx+0B40h]
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm6, xmm0, cs:__real@43b40000
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 299, ASSERT_TYPE_ASSERT, "(m_pAI->turnRate > 0)", (const char *)&queryFormat, "m_pAI->turnRate > 0") )
      __debugbreak();
    IsProne = BG_ActorIsProne(&this->m_pAI->ProneInfo, level.time);
    v26 = IsProne == 0;
    if ( IsProne )
    {
      __asm { vmovss  xmm0, cs:__real@3d1374bc }
    }
    else
    {
      _RAX = this->m_pAI;
      __asm { vmovss  xmm0, dword ptr [rax+0B40h] }
    }
    __asm
    {
      vmovss  xmm5, cs:__real@40400000
      vxorps  xmm10, xmm10, xmm10
      vcvtsi2ss xmm10, xmm10, edi
      vmulss  xmm1, xmm10, xmm0
      vmulss  xmm0, xmm1, cs:__real@40000000
      vcomiss xmm6, xmm0
    }
    if ( v26 )
    {
      __asm
      {
        vmulss  xmm0, xmm1, cs:__real@c0000000
        vcomiss xmm6, xmm0
        vcomiss xmm6, xmm5
      }
      if ( v26 )
        __asm { vcomiss xmm6, cs:__real@c0400000 }
      else
        __asm { vmulss  xmm6, xmm6, cs:__real@3ecccccd }
    }
    else
    {
      __asm { vmovaps xmm6, xmm1 }
    }
    _RAX = this->m_pAI;
    __asm
    {
      vaddss  xmm11, xmm6, dword ptr [rsp+0B8h+currentAngles+4]
      vmovss  xmm6, dword ptr [rsp+0B8h+currentAngles]
      vmovss  xmm1, dword ptr [rax+134h]
      vsubss  xmm0, xmm1, xmm6
      vmulss  xmm4, xmm0, cs:__real@3b360b61
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vroundss xmm3, xmm14, xmm2, 1
      vmulss  xmm2, xmm10, dword ptr [rax+0B40h]
      vmovaps xmm14, [rsp+0B8h+var_58]
      vmovaps xmm10, [rsp+0B8h+var_28]
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, cs:__real@43b40000
      vcomiss xmm0, xmm2
    }
    if ( v26 )
    {
      __asm
      {
        vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000
        vcomiss xmm0, xmm1
        vcomiss xmm0, xmm5
      }
      if ( v26 )
        __asm { vcomiss xmm0, cs:__real@c0400000 }
      else
        __asm { vmulss  xmm0, xmm0, cs:__real@3f000000 }
    }
    else
    {
      __asm { vmovaps xmm0, xmm2 }
    }
    __asm { vaddss  xmm6, xmm6, xmm0 }
    if ( this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 322, ASSERT_TYPE_ASSERT, "(!Is3D())", (const char *)&queryFormat, "!Is3D()") )
      __debugbreak();
    v53 = this->__vftable;
    __asm
    {
      vmovss  dword ptr [rsp+0B8h+outAngles], xmm6
      vmovss  dword ptr [rsp+0B8h+outAngles+4], xmm11
      vmovss  dword ptr [rsp+0B8h+outAngles+8], xmm12
    }
    v53->SetBodyAngles(this, &outAngles);
    __asm
    {
      vmovaps xmm12, [rsp+0B8h+var_48]
      vmovaps xmm11, [rsp+0B8h+var_38]
      vmovaps xmm6, [rsp+0B8h+var_18]
    }
  }
}

/*
==============
AIScriptedInterface::UpdateLookAngles
==============
*/
void AIScriptedInterface::UpdateLookAngles(AIScriptedInterface *this)
{
  ai_orient_mode_t eMode; 
  char v48; 

  _RBX = this->m_pAI;
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm9
  }
  eMode = _RBX->ScriptOrient.eMode;
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+144h]
    vmovss  xmm9, dword ptr [rbx+140h]
    vmovaps [rsp+78h+var_48], xmm10
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vmovss  xmm4, cs:__real@3b360b61
    vmovd   xmm6, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
  }
  _RAX = 2468i64;
  if ( eMode == AI_ORIENT_INVALID )
    _RAX = 2444i64;
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcvtdq2ps xmm6, xmm6
    vmulss  xmm5, xmm6, cs:__real@3f4ccccd
    vmovss  xmm0, dword ptr [rax+rbx]
    vsubss  xmm1, xmm0, xmm9
    vmulss  xmm3, xmm1, xmm4
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vroundss xmm2, xmm10, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vcomiss xmm1, xmm5
  }
  if ( eMode )
  {
    __asm { vmovaps xmm0, xmm5 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm6, cs:__real@bf4ccccd
      vmaxss  xmm0, xmm0, xmm1
    }
  }
  _RAX = 2472i64;
  __asm { vaddss  xmm9, xmm9, xmm0 }
  if ( eMode == AI_ORIENT_INVALID )
    _RAX = 2448i64;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+rbx]
    vsubss  xmm1, xmm0, xmm7
    vmulss  xmm4, xmm1, xmm4
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vroundss xmm3, xmm10, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vcomiss xmm1, xmm5
  }
  if ( eMode == AI_ORIENT_INVALID )
  {
    __asm
    {
      vmulss  xmm0, xmm6, cs:__real@bf4ccccd
      vmaxss  xmm5, xmm0, xmm1
    }
  }
  __asm
  {
    vaddss  xmm2, xmm7, xmm5; fYaw
    vmovaps xmm1, xmm9; fPitch
    vmovaps xmm6, [rsp+78h+var_18]
  }
  _R11 = &v48;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  AIScriptedInterface::SetLookAngles(this, *(const float *)&_XMM1, *(const float *)&_XMM2);
}

