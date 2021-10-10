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
  ai_scripted_t *m_pAI; 
  double v5; 
  float v6; 
  __int128 v7; 
  __int64 v10; 
  __int64 v11; 
  ai_scripted_t *v12; 
  gentity_s *ent; 
  ai_scripted_t *v14; 
  float v17; 
  float v20; 
  double v21; 
  char v23; 
  vec2_t vec; 
  float v25; 
  int v26[5]; 
  bfx::AreaHandle v27; 
  bfx::LinkHandle v28; 

  m_pAI = this->m_pAI;
  if ( m_pAI->eAnimMode == AI_ANIM_MOVE_CODE )
  {
    if ( (float)((float)((float)(m_pAI->Physics.vWishDelta.v[0] * m_pAI->Physics.vWishDelta.v[0]) + (float)(m_pAI->Physics.vWishDelta.v[1] * m_pAI->Physics.vWishDelta.v[1])) + (float)(m_pAI->Physics.vWishDelta.v[2] * m_pAI->Physics.vWishDelta.v[2])) < 0.001 )
      return;
    v5 = vectoyaw((const vec2_t *)&m_pAI->Physics.vWishDelta);
    v6 = *(float *)&v5;
  }
  else
  {
    v7 = LODWORD(m_pAI->Physics.vWishDelta.v[0]);
    *(float *)&v7 = fsqrt((float)((float)(m_pAI->Physics.vWishDelta.v[0] * m_pAI->Physics.vWishDelta.v[0]) + (float)(m_pAI->Physics.vWishDelta.v[1] * m_pAI->Physics.vWishDelta.v[1])) + (float)(m_pAI->Physics.vWishDelta.v[2] * m_pAI->Physics.vWishDelta.v[2]));
    _XMM0 = v7;
    __asm { vmaxss  xmm6, xmm0, cs:__real@3f800000 }
    bfx::AreaHandle::AreaHandle(&v27);
    bfx::LinkHandle::LinkHandle(&v28);
    v23 = 0;
    LOBYTE(v10) = 1;
    ((void (__fastcall *)(AINavigator *, __int64, __int64, int *, char))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, v11, v10, v26, v23);
    v12 = this->m_pAI;
    ent = v12->ent;
    vec.v[0] = *(float *)v26 - v12->ent->r.currentOrigin.v[0];
    vec.v[1] = *(float *)&v26[1] - ent->r.currentOrigin.v[1];
    v25 = *(float *)&v26[2] - ent->r.currentOrigin.v[2];
    LODWORD(v6) = COERCE_UNSIGNED_INT64(vectoyaw(&vec));
    bfx::LinkHandle::~LinkHandle(&v28);
    bfx::AreaHandle::~AreaHandle(&v27);
  }
  v14 = this->m_pAI;
  if ( v14->bPredictedFaceMotionChanged )
  {
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm3, 1 }
    v14->animData.strafeBlendYaw = (float)((float)((float)(v6 - v14->ent->r.currentAngles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
  }
  else
  {
    v17 = v6 - desiredAngles->v[1];
    _XMM6 = 0i64;
    __asm { vroundss xmm2, xmm6, xmm1, 1 }
    v20 = (float)((float)((float)(v17 - v14->animData.strafeBlendYaw) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    if ( COERCE_FLOAT(LODWORD(v20) & _xmm) <= 45.0 || v14->bStrafeReverse )
    {
      __asm { vroundss xmm2, xmm6, xmm1, 1 }
      v14->animData.strafeBlendYaw = (float)((float)(v17 * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    }
    else
    {
      v21 = I_fclamp(v20, -45.0, 45.0);
      this->m_pAI->animData.strafeBlendYaw = *(float *)&v21 + this->m_pAI->animData.strafeBlendYaw;
    }
  }
}

/*
==============
AIScriptedInterface::CheckGunBlockedByWallWhileMoving
==============
*/
char AIScriptedInterface::CheckGunBlockedByWallWhileMoving(AIScriptedInterface *this, const vec3_t *predictedMovePos, const vec2_t *dir)
{
  ai_scripted_t *m_pAI; 
  AIScriptedInterface_vtbl *v7; 
  float v8; 
  float v9; 
  float v10; 
  ai_scripted_t *v12; 
  float v13; 
  const dvar_t *v15; 
  const dvar_t *v17; 
  vec3_t start; 
  vec3_t end; 
  vec3_t vFinalGoal; 
  Bounds bounds; 

  if ( this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 339, ASSERT_TYPE_ASSERT, "(!Is3D())", (const char *)&queryFormat, "!Is3D()") )
    __debugbreak();
  if ( !AICommonInterface::HasPath(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 340, ASSERT_TYPE_ASSERT, "(HasPath())", (const char *)&queryFormat, "HasPath()") )
    __debugbreak();
  AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
  m_pAI = this->m_pAI;
  if ( (float)((float)((float)((float)(vFinalGoal.v[1] - m_pAI->ent->r.currentOrigin.v[1]) * (float)(vFinalGoal.v[1] - m_pAI->ent->r.currentOrigin.v[1])) + (float)((float)(vFinalGoal.v[0] - m_pAI->ent->r.currentOrigin.v[0]) * (float)(vFinalGoal.v[0] - m_pAI->ent->r.currentOrigin.v[0]))) + (float)((float)(vFinalGoal.v[2] - m_pAI->ent->r.currentOrigin.v[2]) * (float)(vFinalGoal.v[2] - m_pAI->ent->r.currentOrigin.v[2]))) < 1024.0 )
    return 0;
  v7 = this->__vftable;
  bounds.halfSize.v[1] = FLOAT_10_0;
  bounds.halfSize.v[2] = FLOAT_10_0;
  *(_OWORD *)bounds.midPoint.v = _xmm;
  v7->GetEyePosition(this, &start);
  v8 = 40.0 * dir->v[0];
  v9 = predictedMovePos->v[0];
  v10 = predictedMovePos->v[1];
  _XMM2 = LODWORD(bounds.halfSize.v[2]);
  v12 = this->m_pAI;
  end.v[2] = start.v[2] - 5.0;
  v13 = 40.0 * dir->v[1];
  end.v[0] = v8 + v9;
  __asm { vmaxss  xmm0, xmm2, dword ptr [rbp+57h+bounds.halfSize] }
  bounds.halfSize.v[2] = *(float *)&_XMM0;
  start.v[0] = v9;
  start.v[1] = v10;
  end.v[1] = v13 + v10;
  if ( !PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, &start, &end, &bounds, v12->ent->s.number, 2047, 8394769) )
  {
    v17 = DVARBOOL_ai_debugGunBlocked;
    if ( !DVARBOOL_ai_debugGunBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugGunBlocked") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
      G_DebugLine(&start, &end, &colorGreen, 0);
    return 0;
  }
  this->m_pAI->orientation.gunBlockedByWall = 1;
  v15 = DVARBOOL_ai_debugGunBlocked;
  if ( !DVARBOOL_ai_debugGunBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugGunBlocked") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
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
  ai_scripted_t *m_pAI; 
  unsigned __int16 GroundEntNum; 
  ai_scripted_t *v5; 

  v1 = DVARBOOL_ai_iw7;
  if ( !DVARBOOL_ai_iw7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_iw7") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
  {
    m_pAI = this->m_pAI;
    if ( m_pAI->ScriptOrient.eMode )
    {
      *(_OWORD *)&m_pAI->CodeOrient.eMode = *(_OWORD *)&m_pAI->ScriptOrient.eMode;
      *(double *)&m_pAI->CodeOrient.fDesiredLookPitch = *(double *)&m_pAI->ScriptOrient.fDesiredLookPitch;
      GroundEntNum = AIScriptedInterface::GetGroundEntNum(this);
      if ( BGMovingPlatforms::IsMovingPlatform(GroundEntNum) && this->m_pAI->CodeOrient.eMode == AI_ORIENT_TO_MOTION )
        AIScriptedInterface::ResetMoveHistoryToEntForward(this);
    }
    else
    {
      *(_OWORD *)&m_pAI->ScriptOrient.eMode = *(_OWORD *)&m_pAI->CodeOrient.eMode;
      *(double *)&m_pAI->ScriptOrient.fDesiredLookPitch = *(double *)&m_pAI->CodeOrient.fDesiredLookPitch;
    }
    v5 = this->m_pAI;
    if ( !v5->orientation.lockScriptOrient )
      v5->ScriptOrient.eMode = AI_ORIENT_INVALID;
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
  char *v4; 
  bool predictedFaceMotion; 
  bool v6; 
  ai_scripted_t *v7; 
  ai_orient_t *v8; 
  AIScriptedInterface *v9; 
  gentity_s *ent; 
  ai_scripted_t *v11; 
  __int64 v12; 

  Sys_ProfBeginNamedEvent(0xFF808080, "AI_DecideOrientation");
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1322, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1323, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v3 = 2452i64;
  if ( m_pAI->ScriptOrient.eMode == AI_ORIENT_INVALID )
    v3 = 2428i64;
  v4 = (char *)m_pAI + v3;
  predictedFaceMotion = m_pAI->orientation.predictedFaceMotion;
  v6 = !AIScriptedInterface::ShouldStrafe(this);
  v7 = this->m_pAI;
  v7->orientation.predictedFaceMotion = v6;
  this->m_pAI->bPredictedFaceMotionChanged = predictedFaceMotion != this->m_pAI->orientation.predictedFaceMotion;
  switch ( *(_DWORD *)v4 )
  {
    case 1:
    case 2:
      this->m_pAI->orientation.faceMotion = this->m_pAI->orientation.predictedFaceMotion;
      break;
    case 3:
      goto LABEL_23;
    case 4:
      v8 = (ai_orient_t *)v4;
      v9 = this;
      goto LABEL_15;
    case 5:
      if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1298, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
        __debugbreak();
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1299, ASSERT_TYPE_ASSERT, "(pOrient)", (const char *)&queryFormat, "pOrient") )
        __debugbreak();
      v8 = (ai_orient_t *)v4;
      v9 = this;
      if ( this->m_pAI->orientation.predictedFaceMotion )
LABEL_23:
        AIScriptedInterface::FaceMotion(this, (ai_orient_t *)v4);
      else
LABEL_15:
        AIScriptedInterface::FaceEnemy(v9, v8);
      break;
    case 6:
      AIScriptedInterface::FaceGoalNode(this, (ai_orient_t *)v4);
      break;
    case 7:
      this->m_pAI->orientation.faceMotion = this->m_pAI->orientation.predictedFaceMotion;
      ent = this->m_pAI->ent;
      *(double *)(v4 + 4) = *(double *)ent->r.currentAngles.v;
      *((_DWORD *)v4 + 3) = LODWORD(ent->r.currentAngles.v[2]);
      break;
    default:
      LODWORD(v12) = *(_DWORD *)v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1364, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid orient mode %i (code = %i, script = %i)", v12, this->m_pAI->CodeOrient.eMode, this->m_pAI->ScriptOrient.eMode) )
        __debugbreak();
      break;
  }
  v11 = this->m_pAI;
  if ( v11->orientation.faceMotion )
    v11->blackboard.m_bUseBackwardStrafeSpace = 0;
  Sys_ProfEndNamedEvent();
}

/*
==============
AIScriptedInterface::FaceEnemy
==============
*/
void AIScriptedInterface::FaceEnemy(AIScriptedInterface *this, ai_orient_t *pOrient)
{
  unsigned __int8 v4; 
  gentity_s *TargetEntity; 
  __int64 v6; 
  gentity_s *v7; 
  ai_scripted_t *m_pAI; 
  bool ShouldFaceGoalNode; 
  AIScriptedInterface *v10; 
  ai_scripted_t *v11; 
  vec3_t *p_outLastKnownPos; 
  ai_scripted_t *v13; 
  gentity_s *ent; 
  float v15; 
  float v16; 
  __int128 v17; 
  float v18; 
  float v22; 
  float v23; 
  float v24; 
  ai_scripted_t *v25; 
  gentity_s *v26; 
  gentity_s *v27; 
  float v28; 
  __int128 v29; 
  float v30; 
  __int128 v34; 
  ai_scripted_t *v37; 
  gentity_s *v38; 
  const gentity_s *v39; 
  sentient_s *TargetSentient; 
  sentient_info_t *v41; 
  const gentity_s *v42; 
  bool v43; 
  ai_scripted_t *v44; 
  ai_scripted_t *v45; 
  gentity_s *v46; 
  tacpoint_t *Point; 
  ai_scripted_t *v48; 
  float v49; 
  float v50; 
  float v51; 
  int time; 
  const gentity_s *v53; 
  int fmt; 
  vec3_t v55; 
  vec3_t v56; 
  __int64 v57; 
  double v58; 
  __int64 v59; 
  vec3_t desiredAngles; 
  vec3_t outLastKnownPos; 
  vec3_t forward; 
  float v63; 
  float v64; 
  float v65; 
  vec3_t v66; 
  char v67[20]; 
  bfx::AreaHandle v68; 
  bfx::LinkHandle v69; 

  v57 = -2i64;
  v4 = 1;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1104, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1105, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1106, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1107, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  v7 = TargetEntity;
  this->m_pAI->orientation.faceEnemyEndTime = level.time;
  if ( pOrient->eMode == AI_ORIENT_TO_ENEMY )
  {
    if ( TargetEntity )
    {
      m_pAI = this->m_pAI;
      if ( m_pAI->blackboard.m_bMeleeChargeRequested || m_pAI->blackboard.m_bMeleeRequested || this->IsInPain(this) )
      {
        outLastKnownPos = v7->r.currentOrigin;
        LOBYTE(v6) = 1;
LABEL_65:
        p_outLastKnownPos = &outLastKnownPos;
        goto LABEL_66;
      }
    }
  }
  ShouldFaceGoalNode = AIScriptedInterface::ShouldFaceGoalNode(this);
  v10 = this;
  if ( ShouldFaceGoalNode )
  {
    AIScriptedInterface::FaceGoalNode(this, pOrient);
    desiredAngles = pOrient->vDesiredAngles;
    AIScriptedInterface::AdjustFacingForStrafe(this, &desiredAngles);
    this->SetDesiredBodyAngles(this, pOrient, &desiredAngles, 0);
    return;
  }
  this->m_pAI->orientation.faceMotion = 0;
  v11 = this->m_pAI;
  if ( !v11->orientation.predictedStrafePosValid )
  {
    if ( AICommonInterface::HasPath(this) && AIScriptedInterface::ShouldCautiousStrafe(this) )
    {
      bfx::AreaHandle::AreaHandle(&v68);
      bfx::LinkHandle::LinkHandle(&v69);
      LOBYTE(fmt) = 0;
      ((void (__fastcall *)(AINavigator *, ai_scripted_t *, _QWORD, char *, int))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, this->m_pAI, 0i64, v67, fmt);
      this->FaceVectorSnapToMovementQuadrant(this, pOrient, (const vec3_t *)v67, 0);
      bfx::LinkHandle::~LinkHandle(&v69);
      bfx::AreaHandle::~AreaHandle(&v68);
      return;
    }
    if ( !v7 )
    {
      if ( AICommonInterface::HasPath(this) )
      {
        this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, &forward);
        v13 = this->m_pAI;
        ent = v13->ent;
        v15 = forward.v[0] - v13->ent->r.currentOrigin.v[0];
        v17 = LODWORD(forward.v[1]);
        v16 = forward.v[1] - v13->ent->r.currentOrigin.v[1];
        v18 = forward.v[2] - v13->ent->r.currentOrigin.v[2];
        *(float *)&v17 = fsqrt((float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v18 * v18));
        _XMM1 = v17;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm10, xmm0
        }
        v22 = (float)(1.0 / *(float *)&_XMM0) * v15;
        *(float *)&v58 = v22;
        v23 = (float)(1.0 / *(float *)&_XMM0) * v16;
        *((float *)&v58 + 1) = v23;
        v24 = (float)(1.0 / *(float *)&_XMM0) * v18;
        *(float *)&v59 = v24;
        AngleVectors(&ent->r.currentAngles, &desiredAngles, NULL, NULL);
        v25 = this->m_pAI;
        if ( v25->blackboard.m_bForceStrafe )
        {
          if ( v25->blackboard.m_bStrafeFacingPosValid )
          {
            v58 = *(double *)v25->blackboard.m_forceStrafeFacingPos.v;
            *(float *)&v59 = v25->blackboard.m_forceStrafeFacingPos.v[2];
          }
          else
          {
            v26 = v25->ent;
            *(float *)&v58 = (float)(60.0 * desiredAngles.v[0]) + v25->ent->r.currentOrigin.v[0];
            *((float *)&v58 + 1) = (float)(60.0 * desiredAngles.v[1]) + v26->r.currentOrigin.v[1];
            *(float *)&v59 = (float)(60.0 * desiredAngles.v[2]) + v26->r.currentOrigin.v[2];
          }
          v6 = 0i64;
          p_outLastKnownPos = (vec3_t *)&v58;
          goto LABEL_66;
        }
        v25->pNavigator->GetRequestedGoalPos(v25->pNavigator, (vec3_t *)&v63);
        v27 = this->m_pAI->ent;
        v28 = v63 - v27->r.currentOrigin.v[0];
        v29 = LODWORD(v64);
        v30 = v65 - v27->r.currentOrigin.v[2];
        *(float *)&v29 = fsqrt((float)((float)((float)(v64 - v27->r.currentOrigin.v[1]) * (float)(v64 - v27->r.currentOrigin.v[1])) + (float)(v28 * v28)) + (float)(v30 * v30));
        _XMM1 = v29;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm10, xmm0
        }
        v34 = LODWORD(FLOAT_1_0);
        *(float *)&v34 = (float)(1.0 / *(float *)&_XMM0) * v28;
        _XMM3 = v34;
        __asm { vunpcklps xmm1, xmm3, xmm2 }
        *(double *)v55.v = *(double *)&_XMM1;
        v55.v[2] = (float)(1.0 / *(float *)&_XMM0) * v30;
        v56 = desiredAngles;
        *(double *)v66.v = v58;
        LODWORD(v66.v[2]) = v59;
        GetMinDistToFaceMotion(&v66, &v56, &v55);
        if ( ((unsigned __int8 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->IsPathDistToGoalAtLeast)(this->m_pAI->pNavigator) )
        {
          v37 = this->m_pAI;
          v38 = v37->ent;
          *(float *)&v58 = (float)(v22 * 60.0) + v37->ent->r.currentOrigin.v[0];
          *((float *)&v58 + 1) = (float)(v23 * 60.0) + v38->r.currentOrigin.v[1];
          *(float *)&v59 = (float)(v24 * 60.0) + v38->r.currentOrigin.v[2];
          v6 = 0i64;
          p_outLastKnownPos = (vec3_t *)&v58;
LABEL_66:
          v10 = this;
          goto LABEL_67;
        }
      }
LABEL_48:
      AIScriptedInterface::FaceLikelyEnemyPath(this, pOrient);
      return;
    }
    if ( AIScriptedInterface::GetReacquire(this) == AI_REACQUIRE_ENABLED_STEP && AICommonInterface::HasPath(this) )
    {
      v39 = AICommonInterface::GetTargetEntity(this);
      Sentient_GetLastKnownEnemyPos(this->m_pAI->sentient, v39, &outLastKnownPos);
      LOBYTE(v6) = 1;
      goto LABEL_65;
    }
    TargetSentient = AICommonInterface::GetTargetSentient(this);
    if ( TargetSentient )
    {
      v41 = &this->m_pAI->sentientInfo[TargetSentient - level.sentients];
      if ( !v41->VisCache.bVisible )
      {
        v4 = 0;
        if ( !AIScriptedInterface::UsingCoverNodes(this) )
        {
          SentientInfo_GetLastKnownPos(v41, &v66);
          v6 = 0i64;
          p_outLastKnownPos = &v66;
          goto LABEL_66;
        }
        if ( !v41->VisCache.iLastVisTime )
        {
          if ( v41->lastKnownPosTime <= level.time - 500 )
          {
            AIScriptedInterface::FaceLikelyEnemyPath(this, pOrient);
            return;
          }
          v42 = AICommonInterface::GetTargetEntity(this);
          Sentient_GetLastKnownEnemyPos(this->m_pAI->sentient, v42, &outLastKnownPos);
          v6 = 0i64;
          goto LABEL_65;
        }
        if ( !AICommonInterface::HasPath(this) )
        {
          if ( level.time - v41->VisCache.iLastVisTime < 10000 )
            return;
          goto LABEL_48;
        }
        this->m_pAI->pNavigator->GetGoalOrLink(this->m_pAI->pNavigator, (vec3_t *)&v63);
        v43 = this->m_pAI->pNavigator->IsStraightLineToGoalOrLink(this->m_pAI->pNavigator);
        v44 = this->m_pAI;
        if ( (float)((float)((float)((float)(v64 - v44->ent->r.currentOrigin.v[1]) * (float)(v64 - v44->ent->r.currentOrigin.v[1])) + (float)((float)(v63 - v44->ent->r.currentOrigin.v[0]) * (float)(v63 - v44->ent->r.currentOrigin.v[0]))) + (float)((float)(v65 - v44->ent->r.currentOrigin.v[2]) * (float)(v65 - v44->ent->r.currentOrigin.v[2]))) < 4096.0 && v43 && !AIScriptedInterface::IsDoingReacquire(this) )
        {
          AngleVectors(&this->m_pAI->ent->r.currentAngles, &forward, NULL, NULL);
          v45 = this->m_pAI;
          v46 = v45->ent;
          desiredAngles.v[0] = (float)(256.0 * forward.v[0]) + v45->ent->r.currentOrigin.v[0];
          desiredAngles.v[1] = (float)(256.0 * forward.v[1]) + v46->r.currentOrigin.v[1];
          desiredAngles.v[2] = (float)(256.0 * forward.v[2]) + v46->r.currentOrigin.v[2];
          v6 = 0i64;
          p_outLastKnownPos = &desiredAngles;
          goto LABEL_66;
        }
        if ( !AICommonInterface::RecentlyKnownEnemy(this, 500) && (signed int)(this->m_pAI->pNavigator->m_TimeOfLastPathUpdate + 300) < level.time && level.time - v41->VisCache.iLastVisTime > 500 && AIScriptedInterface::GetAnglesToLikelyEnemyPath(this) )
        {
          Point = tacpoint_ref_t::GetPoint(&this->m_pAI->sight.faceLikelyEnemyTacPoint);
          p_outLastKnownPos = &Point->m_Pos;
          if ( Point )
          {
            v48 = this->m_pAI;
            v49 = v48->ent->r.currentOrigin.v[0] - Point->m_Pos.v[0];
            v50 = v48->ent->r.currentOrigin.v[1] - Point->m_Pos.v[1];
            v51 = v48->ent->r.currentOrigin.v[2] - Point->m_Pos.v[2];
            if ( (float)((float)((float)(v50 * v50) + (float)(v49 * v49)) + (float)(v51 * v51)) < 1024.0 )
            {
              time = level.time;
              if ( v48->sight.faceLikelyEnemyPathNeedRecalculateTime > level.time )
              {
                v48->sight.faceLikelyEnemyPathNeedRecalculateTime = level.time;
                v48 = this->m_pAI;
              }
              if ( v48->sight.faceLikelyEnemyPathNeedCheckTime > time )
                v48->sight.faceLikelyEnemyPathNeedRecalculateTime = time;
            }
            v6 = 0i64;
            goto LABEL_66;
          }
        }
      }
    }
    v53 = AICommonInterface::GetTargetEntity(this);
    Sentient_GetLastKnownEnemyPos(this->m_pAI->sentient, v53, &outLastKnownPos);
    v6 = v4;
    goto LABEL_65;
  }
  p_outLastKnownPos = &v11->orientation.predictedStrafePos;
  v6 = 0i64;
LABEL_67:
  this->FaceVectorSnapToMovementQuadrant(v10, pOrient, p_outLastKnownPos, v6);
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
  double v6; 
  float v7; 
  double Angle; 
  double v9; 
  AIScriptedInterface_vtbl *v10; 
  bool v11; 
  vec3_t v12; 
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
    v6 = ((double (__fastcall *)(AIScriptedInterface *, pathnode_t *))this->GetNodeAngleYawOffset)(this, sentient->pClaimedNode);
    v7 = *(float *)&v6;
    if ( this->Is3D(this) && ((1 << LOBYTE(pClaimedNode->constant.type)) & 0x62700000) != 0 )
    {
      pathnode_t::GetAngles(pClaimedNode, &vector);
      angles.v[0] = 0.0;
      angles.v[2] = 0.0;
      angles.v[1] = *(float *)&v6;
      AnglesToAxis(&vector, &axis);
      AnglesToAxis(&angles, &in2);
      MatrixMultiply(&axis, &in2, &out);
      AxisToAngles(&out, &v12);
    }
    else
    {
      Angle = pathnode_t::GetAngle(pClaimedNode);
      v9 = AngleNormalize360(*(float *)&Angle + v7);
      v12.v[0] = 0.0;
      v12.v[2] = 0.0;
      v12.v[1] = *(float *)&v9;
    }
    v10 = this->__vftable;
    v11 = this->Is3D(this);
    v10->SetDesiredBodyAngles(this, pOrient, &v12, v11);
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
  gentity_s *ent; 
  float v6; 
  bool AnglesToLikelyEnemyPath; 
  ai_scripted_t *v8; 
  sentient_s *sentient; 
  pathnode_t *pClaimedNode; 
  AIScriptedInterface_vtbl *v11; 
  bool v12; 
  vec3_t vector; 
  vec3_t desiredAngles; 

  m_pAI = this->m_pAI;
  if ( m_pAI->sight.faceLikelyEnemyPathNeedCheckTime > level.time )
  {
    ent = m_pAI->ent;
    v6 = m_pAI->ent->r.currentAngles.v[1];
    desiredAngles.v[0] = m_pAI->ent->r.currentAngles.v[0];
    desiredAngles.v[2] = ent->r.currentAngles.v[2];
    desiredAngles.v[1] = v6;
    AIScriptedInterface::AdjustFacingForStrafe(this, &desiredAngles);
    return;
  }
  AnglesToLikelyEnemyPath = AIScriptedInterface::GetAnglesToLikelyEnemyPath(this);
  v8 = this->m_pAI;
  if ( AnglesToLikelyEnemyPath )
  {
    vector = v8->sight.anglesToLikelyEnemyPath;
    AIScriptedInterface::AdjustFacingForStrafe(this, &vector);
LABEL_12:
    v11 = this->__vftable;
    v12 = this->Is3D(this);
    v11->SetDesiredBodyAngles(this, pOrient, &vector, v12);
    return;
  }
  sentient = v8->sentient;
  pClaimedNode = sentient->pClaimedNode;
  if ( pClaimedNode && (pClaimedNode->constant.spawnflags & 0x8000) != 0 && AICommonInterface::PointNearNode(this, &v8->ent->r.currentOrigin, sentient->pClaimedNode) )
  {
    if ( this->Is3D(this) && Path_NodeIgnoresAngles(pClaimedNode) )
      vector = this->m_pAI->ent->r.currentAngles;
    else
      pathnode_t::GetAngles(pClaimedNode, &vector);
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
  double PathDistToGoal; 
  bool v7; 
  __int128 v8; 
  float v12; 
  float v13; 
  float v14; 
  __int128 v15; 
  ai_scripted_t *v19; 
  __int128 v22; 
  float v26; 
  AIScriptedInterface_vtbl *v27; 
  bool v28; 
  vec3_t *p_vLookaheadDir; 
  float v30; 
  vec3_t vec; 
  vec3_t vLookaheadDir; 
  vec3_t forward; 
  vec3_t desiredAngles; 
  vec3_t vWishDelta; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 735, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  faceMotion = m_pAI->orientation.faceMotion;
  m_pAI->orientation.faceMotion = 1;
  if ( AICommonInterface::HasPath(this) && AIScriptedInterface::GetAnimMode(this) == AI_ANIM_MOVE_CODE )
  {
    if ( !this->m_pAI->moveMode || !AIScriptedInterface::UsingCoverNodes(this) || AIScriptedInterface::IsOnStairs(this) || (AIScriptedInterface::GetPathLookaheadDir(this, &vLookaheadDir), PathDistToGoal = Nav_GetPathDistToGoal(this->m_pAI->pNavigator), !this->m_pAI->pNavigator->IsNextCornerGoal(this->m_pAI->pNavigator)) || *(float *)&PathDistToGoal >= 60.0 || (!AICommonInterface::Use3DPathing(this) || !this->Is3D(this) ? (v7 = (float)((float)(vLookaheadDir.v[1] * this->m_pAI->orientation.vLookForward.v[1]) + (float)(vLookaheadDir.v[0] * this->m_pAI->orientation.vLookForward.v[0])) < 0.0) : (v7 = (float)((float)((float)(vLookaheadDir.v[1] * this->m_pAI->orientation.vLookForward.v[1]) + (float)(vLookaheadDir.v[0] * this->m_pAI->orientation.vLookForward.v[0])) + (float)(vLookaheadDir.v[2] * this->m_pAI->orientation.vLookForward.v[2])) < 0.0), !v7) )
    {
      AIScriptedInterface::GetWishDelta(this, &vWishDelta);
      v8 = LODWORD(vWishDelta.v[0]);
      *(float *)&v8 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(vWishDelta.v[1] * vWishDelta.v[1])) + (float)(vWishDelta.v[2] * vWishDelta.v[2]));
      _XMM3 = v8;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
      }
      v12 = 1.0 / *(float *)&_XMM0;
      v13 = vWishDelta.v[0] * (float)(1.0 / *(float *)&_XMM0);
      v14 = vWishDelta.v[1] * (float)(1.0 / *(float *)&_XMM0);
      vec.v[0] = v13;
      vec.v[1] = v14;
      vec.v[2] = vWishDelta.v[2] * v12;
      if ( (float)(vWishDelta.v[0] * v12) != 0.0 || v14 != 0.0 || (float)(vWishDelta.v[2] * v12) != 0.0 )
      {
        if ( this->m_pAI->moveMode )
          goto LABEL_23;
        if ( AICommonInterface::Use3DPathing(this) && this->Is3D(this) )
        {
          v15 = LODWORD(vec.v[1]);
          *(float *)&v15 = fsqrt((float)((float)(*(float *)&v15 * *(float *)&v15) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]));
          _XMM3 = v15;
          __asm
          {
            vcmpless xmm0, xmm3, cs:__real@80000000
            vblendvps xmm0, xmm3, xmm8, xmm0
          }
          vec.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM0);
          vec.v[2] = vec.v[2] * (float)(1.0 / *(float *)&_XMM0);
          vec.v[1] = vec.v[1] * (float)(1.0 / *(float *)&_XMM0);
          AngleVectors(&pOrient->vDesiredAngles, &forward, NULL, NULL);
          if ( (float)((float)((float)(forward.v[1] * vec.v[1]) + (float)(forward.v[0] * vec.v[0])) + (float)(forward.v[2] * vec.v[2])) < 0.89999998 )
            goto LABEL_23;
        }
        else
        {
          v22 = LODWORD(vec.v[1]);
          *(float *)&v22 = fsqrt((float)(*(float *)&v22 * *(float *)&v22) + (float)(vec.v[0] * vec.v[0]));
          _XMM2 = v22;
          __asm
          {
            vcmpless xmm0, xmm2, cs:__real@80000000
            vblendvps xmm0, xmm2, xmm8, xmm0
          }
          v26 = 1.0 / *(float *)&_XMM0;
          vec.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM0);
          *(float *)&_XMM0 = pOrient->vDesiredAngles.v[1];
          vec.v[1] = vec.v[1] * v26;
          YawVectors(*(float *)&_XMM0, &forward, NULL);
          if ( (float)((float)(forward.v[1] * vec.v[1]) + (float)(forward.v[0] * vec.v[0])) < 0.89999998 )
          {
LABEL_23:
            if ( !faceMotion )
            {
              vectoangles(&vec, &vLookaheadDir);
              v19 = this->m_pAI;
              _XMM1 = 0i64;
              __asm { vroundss xmm4, xmm1, xmm2, 1 }
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(vLookaheadDir.v[1] - v19->ent->r.currentAngles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * 360.0) & _xmm) > 25.0 )
              {
                v19->orientation.faceMotion = 0;
                AIScriptedInterface::AdjustFacingForStrafe(this, &vLookaheadDir);
                this->SetDesiredBodyAngles(this, pOrient, &vLookaheadDir, 0);
                return;
              }
            }
            if ( vec.v[0] == 0.0 && vec.v[1] == 0.0 && vec.v[2] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 655, ASSERT_TYPE_ASSERT, "(v[0] || v[1] || v[2])", (const char *)&queryFormat, "v[0] || v[1] || v[2]") )
              __debugbreak();
            v30 = vec.v[0];
            if ( (LODWORD(vec.v[0]) & 0x7F800000) == 2139095040 || (v30 = vec.v[1], (LODWORD(vec.v[1]) & 0x7F800000) == 2139095040) || (v30 = vec.v[2], (LODWORD(vec.v[2]) & 0x7F800000) == 2139095040) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 656, ASSERT_TYPE_ASSERT, "(!IS_NAN( v[0] ) && !IS_NAN( v[1] ) && !IS_NAN( v[2] ))", (const char *)&queryFormat, "!IS_NAN( v[0] ) && !IS_NAN( v[1] ) && !IS_NAN( v[2] )", v30) )
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
            v27 = this->__vftable;
            v28 = this->Is3D(this);
            p_vLookaheadDir = &vLookaheadDir;
            goto LABEL_42;
          }
        }
      }
    }
    this->m_pAI->orientation.faceMotion = 0;
    desiredAngles = this->m_pAI->ent->r.currentAngles;
    AIScriptedInterface::AdjustFacingForStrafe(this, &desiredAngles);
    v27 = this->__vftable;
    v28 = this->Is3D(this);
    p_vLookaheadDir = &desiredAngles;
LABEL_42:
    v27->SetDesiredBodyAngles(this, pOrient, p_vLookaheadDir, v28);
  }
}

/*
==============
AIScriptedInterface::FaceVector
==============
*/
void AIScriptedInterface::FaceVector(AIScriptedInterface *this, ai_orient_t *pOrient, const vec3_t *v)
{
  AIScriptedInterface_vtbl *v6; 
  bool v7; 
  float v8; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 

  if ( v->v[0] == 0.0 && v->v[1] == 0.0 && v->v[2] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 655, ASSERT_TYPE_ASSERT, "(v[0] || v[1] || v[2])", (const char *)&queryFormat, "v[0] || v[1] || v[2]") )
    __debugbreak();
  v8 = v->v[0];
  if ( (LODWORD(v->v[0]) & 0x7F800000) == 2139095040 || (v8 = v->v[1], (LODWORD(v8) & 0x7F800000) == 2139095040) || (v8 = v->v[2], (LODWORD(v8) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 656, ASSERT_TYPE_ASSERT, "(!IS_NAN( v[0] ) && !IS_NAN( v[1] ) && !IS_NAN( v[2] ))", (const char *)&queryFormat, "!IS_NAN( v[0] ) && !IS_NAN( v[1] ) && !IS_NAN( v[2] )", v8) )
      __debugbreak();
  }
  if ( this->Is3D(this) )
  {
    AnglesToAxis(&this->m_pAI->ent->r.currentAngles, &axis);
    GenerateAxisFromForwardVector(v, &axis, &outAxis);
    AxisToAngles(&outAxis, &angles);
  }
  else
  {
    vectoangles(v, &angles);
  }
  v6 = this->__vftable;
  v7 = this->Is3D(this);
  v6->SetDesiredBodyAngles(this, pOrient, &angles, v7);
}

/*
==============
AIScriptedInterface::FaceVectorSnapToMovementQuadrant3D
==============
*/
void AIScriptedInterface::FaceVectorSnapToMovementQuadrant3D(AIScriptedInterface *this, ai_orient_t *pOrient, const vec3_t *lookAtPos, __int64 enemyVisible)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  bool v14; 
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  float v20; 
  float v21; 
  __int128 v23; 
  __int128 v27; 
  ai_scripted_t *v31; 
  float v32; 
  float v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  float v40; 
  float v41; 
  float v42; 
  __int128 v43; 
  double v47; 
  float v48; 
  double v49; 
  float v54; 
  double v58; 
  float v59; 
  double v60; 
  float v62; 
  float v64; 
  float v69; 
  vec3_t vLookaheadDir; 
  vec3_t angles; 
  vec3_t desiredAngles; 
  vec3_t forward; 
  vec3_t vec; 
  vec3_t vFinalGoal; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 
  __int128 v78; 
  __int128 v79; 
  __int128 v80; 
  __int128 v81; 
  __int128 v82; 
  __int128 v83; 
  __int128 v84; 
  __int128 v85; 
  _OWORD v86[3]; 

  v14 = this->m_pAI == NULL;
  v86[1] = v4;
  v85 = v6;
  v84 = v7;
  v83 = v8;
  v80 = v11;
  if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 450, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( (!((unsigned __int8 (__fastcall *)(AIScriptedInterface *, ai_orient_t *, const vec3_t *, __int64))this->Is3D)(this, pOrient, lookAtPos, enemyVisible) || !AICommonInterface::Use3DPathing(this)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 453, ASSERT_TYPE_ASSERT, "(Is3D() && Use3DPathing())", (const char *)&queryFormat, "Is3D() && Use3DPathing()") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v86[0] = v5;
  v82 = v9;
  v81 = v10;
  ent = m_pAI->ent;
  v79 = v12;
  v78 = v13;
  v20 = ent->r.currentOrigin.v[0];
  v21 = ent->r.currentOrigin.v[1];
  v23 = LODWORD(ent->r.currentOrigin.v[2]);
  *(float *)&v23 = ent->r.currentOrigin.v[2] - 41.0;
  _XMM3 = v23;
  _XMM0 = m_pAI->Physics.bSpace;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm8, xmm3, xmm4, xmm2
  }
  if ( AICommonInterface::HasPath(this) && this->IsHumanAI(this) )
  {
    if ( this->m_pAI->moveHistoryConsistent )
    {
      AIScriptedInterface::GetPathLookaheadDir(this, &vLookaheadDir);
    }
    else
    {
      AIScriptedInterface::GetMoveHistoryAverage(this, &vLookaheadDir);
      AIScriptedInterface::GetPathLookaheadDir(this, &angles);
      v27 = LODWORD(vLookaheadDir.v[0]);
      *(float *)&v27 = fsqrt((float)((float)(*(float *)&v27 * *(float *)&v27) + (float)(vLookaheadDir.v[1] * vLookaheadDir.v[1])) + (float)(vLookaheadDir.v[2] * vLookaheadDir.v[2]));
      _XMM3 = v27;
      __asm
      {
        vcmpless xmm0, xmm3, xmm15
        vblendvps xmm0, xmm3, xmm11, xmm0
      }
      vLookaheadDir.v[1] = vLookaheadDir.v[1] * (float)(1.0 / *(float *)&_XMM0);
      vLookaheadDir.v[0] = vLookaheadDir.v[0] * (float)(1.0 / *(float *)&_XMM0);
      vLookaheadDir.v[2] = vLookaheadDir.v[2] * (float)(1.0 / *(float *)&_XMM0);
      if ( (float)((float)((float)(vLookaheadDir.v[1] * angles.v[1]) + (float)(vLookaheadDir.v[0] * angles.v[0])) + (float)(vLookaheadDir.v[2] * angles.v[2])) < 0.70700002 )
        vLookaheadDir = angles;
    }
    AICommonInterface::GetPathFinalGoal(this, &vFinalGoal);
    v31 = this->m_pAI;
    v69 = (float)((float)((float)(vFinalGoal.v[1] - v31->ent->r.currentOrigin.v[1]) * (float)(vFinalGoal.v[1] - v31->ent->r.currentOrigin.v[1])) + (float)((float)(vFinalGoal.v[0] - v31->ent->r.currentOrigin.v[0]) * (float)(vFinalGoal.v[0] - v31->ent->r.currentOrigin.v[0]))) + (float)((float)(vFinalGoal.v[2] - v31->ent->r.currentOrigin.v[2]) * (float)(vFinalGoal.v[2] - v31->ent->r.currentOrigin.v[2]));
    if ( v69 > 225.0 )
    {
      v20 = (float)(vLookaheadDir.v[0] * 15.0) + v20;
      *(float *)&_XMM8 = (float)(vLookaheadDir.v[2] * 15.0) + *(float *)&_XMM8;
      v21 = (float)(vLookaheadDir.v[1] * 15.0) + v21;
    }
    v32 = lookAtPos->v[0] - v20;
    v33 = lookAtPos->v[2] - *(float *)&_XMM8;
    v35 = LODWORD(lookAtPos->v[1]);
    *(float *)&v35 = lookAtPos->v[1] - v21;
    v34 = v35;
    v36 = LODWORD(vLookaheadDir.v[0]);
    *(float *)&v36 = fsqrt((float)((float)(vLookaheadDir.v[0] * vLookaheadDir.v[0]) + (float)(vLookaheadDir.v[1] * vLookaheadDir.v[1])) + (float)(vLookaheadDir.v[2] * vLookaheadDir.v[2]));
    _XMM1 = v36;
    __asm
    {
      vcmpless xmm0, xmm1, xmm15
      vblendvps xmm0, xmm1, xmm11, xmm0
    }
    v40 = vLookaheadDir.v[0] * (float)(1.0 / *(float *)&_XMM0);
    v41 = vLookaheadDir.v[1] * (float)(1.0 / *(float *)&_XMM0);
    v42 = vLookaheadDir.v[2] * (float)(1.0 / *(float *)&_XMM0);
    v43 = v34;
    *(float *)&v43 = fsqrt((float)((float)(*(float *)&v34 * *(float *)&v34) + (float)(v32 * v32)) + (float)(v33 * v33));
    _XMM3 = v43;
    __asm
    {
      vcmpless xmm0, xmm3, xmm15
      vblendvps xmm0, xmm3, xmm11, xmm0
    }
    vec.v[2] = (float)(1.0 / *(float *)&_XMM0) * v33;
    vLookaheadDir.v[0] = v40;
    vLookaheadDir.v[1] = v41;
    vLookaheadDir.v[2] = v42;
    vec.v[0] = (float)(1.0 / *(float *)&_XMM0) * v32;
    vec.v[1] = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v34;
    if ( v69 >= 1.0 )
    {
      if ( (float)((float)((float)(v41 * (float)((float)(1.0 / *(float *)&_XMM0) * *(float *)&v34)) + (float)(v40 * (float)((float)(1.0 / *(float *)&_XMM0) * v32))) + (float)(v42 * (float)((float)(1.0 / *(float *)&_XMM0) * v33))) <= 0.99800003 )
      {
        v47 = vectoyaw((const vec2_t *)&vec);
        v48 = *(float *)&v47;
        v49 = vectoyaw((const vec2_t *)&vLookaheadDir);
        *(float *)&_XMM7 = FLOAT_180_0;
        _XMM12 = LODWORD(FLOAT_90_0);
        _XMM15 = 0i64;
        __asm { vroundss xmm2, xmm15, xmm1, 1 }
        LODWORD(v54) = COERCE_UNSIGNED_INT((float)((float)((float)(*(float *)&v49 - v48) * 0.0027777778) - *(float *)&_XMM2) * 360.0) & _xmm;
        _XMM8 = 0i64;
        if ( v54 < 135.0 )
        {
          LODWORD(_XMM9) = 0;
          if ( v54 >= 45.0 )
          {
            __asm
            {
              vcmpltss xmm0, xmm8, xmm4
              vblendvps xmm9, xmm12, xmm11, xmm0
            }
          }
        }
        else
        {
          *(float *)&_XMM9 = FLOAT_180_0;
        }
        v58 = vectopitch(&vec);
        v59 = *(float *)&v58;
        v60 = vectopitch(&vLookaheadDir);
        __asm { vroundss xmm3, xmm15, xmm1, 1 }
        LODWORD(v62) = COERCE_UNSIGNED_INT((float)((float)((float)(*(float *)&v60 - v59) * 0.0027777778) - *(float *)&_XMM3) * 360.0) & _xmm;
        if ( v62 < 135.0 )
        {
          LODWORD(_XMM7) = 0;
          if ( v62 >= 45.0 )
          {
            __asm
            {
              vcmpltss xmm0, xmm8, xmm2
              vblendvps xmm7, xmm12, xmm11, xmm0
            }
          }
        }
        vectoangles(&vLookaheadDir, &angles);
        angles.v[0] = *(float *)&_XMM7 + angles.v[0];
        angles.v[1] = *(float *)&_XMM9 + angles.v[1];
        AngleVectors(&angles, &forward, NULL, NULL);
      }
      else
      {
        forward = vLookaheadDir;
        v31->orientation.relativeDir = 1;
      }
    }
    else
    {
      forward = vec;
      v31->orientation.relativeDir = 1;
    }
  }
  else
  {
    v64 = lookAtPos->v[1] - v21;
    forward.v[0] = lookAtPos->v[0] - v20;
    forward.v[2] = lookAtPos->v[2] - *(float *)&_XMM8;
    forward.v[1] = v64;
  }
  AnglesToAxis(&this->m_pAI->ent->r.currentAngles, &axis);
  GenerateAxisFromForwardVector(&forward, &axis, &outAxis);
  AxisToAngles(&outAxis, &desiredAngles);
  _XMM6 = 0i64;
  __asm { vroundss xmm1, xmm6, xmm3, 1 }
  desiredAngles.v[0] = _mm_cvtepi32_ps((__m128i)(unsigned int)(int)*(float *)&_XMM1).m128_f32[0] * 0.1;
  __asm
  {
    vroundss xmm2, xmm6, xmm3, 1
    vroundss xmm0, xmm6, xmm3, 1
  }
  desiredAngles.v[1] = _mm_cvtepi32_ps((__m128i)(unsigned int)(int)*(float *)&_XMM2).m128_f32[0] * 0.1;
  desiredAngles.v[2] = _mm_cvtepi32_ps((__m128i)(unsigned int)(int)*(float *)&_XMM0).m128_f32[0] * 0.1;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  AIScriptedInterface::LerpAnglesWithQuaternions(&this->m_pAI->ent->r.currentAngles, &desiredAngles, (float)(this->m_pAI->turnRate * 0.0087266462) * (float)level.frameDuration, &desiredAngles);
  this->SetDesiredBodyAngles(this, pOrient, &desiredAngles, 1);
}

/*
==============
AIScriptedInterface::FaceVectorSnapToMovementQuadrant
==============
*/
void AIScriptedInterface::FaceVectorSnapToMovementQuadrant(AIScriptedInterface *this, ai_orient_t *pOrient, const vec3_t *lookAtPos, bool enemyVisible)
{
  char v8; 
  ai_scripted_t *m_pAI; 
  float v10; 
  float v11; 
  float v12; 
  ai_scripted_t *v13; 
  gentity_s *ent; 
  float v15; 
  vec3_t vec; 
  vec3_t angles; 
  vec3_t vLookaheadDir; 
  char v19[16]; 

  if ( this->Is3D(this) && AICommonInterface::Use3DPathing(this) )
  {
    AIScriptedInterface::FaceVectorSnapToMovementQuadrant3D(this, pOrient, lookAtPos, enemyVisible);
  }
  else
  {
    if ( AICommonInterface::HasPath(this) && this->IsHumanAI(this) )
      v8 = ((__int64 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->IsPathDistToGoalAtLeast)(this->m_pAI->pNavigator);
    else
      v8 = 0;
    if ( v8 )
    {
      AIScriptedInterface::GetPathLookaheadDir(this, &vLookaheadDir);
      this->UpdateMoveDirBasedOnHistory(this, &vLookaheadDir, (vec3_t *)v19);
      m_pAI = this->m_pAI;
      v10 = m_pAI->ent->r.currentOrigin.v[2];
      v11 = lookAtPos->v[1] - m_pAI->ent->r.currentOrigin.v[1];
      vec.v[0] = lookAtPos->v[0] - m_pAI->ent->r.currentOrigin.v[0];
      vec.v[2] = lookAtPos->v[2] - v10;
      vec.v[1] = v11;
      vectoangles(&vec, &angles);
      AIScriptedInterface::AdjustFacingForStrafe(this, &angles);
    }
    else
    {
      v12 = lookAtPos->v[1];
      v13 = this->m_pAI;
      ent = v13->ent;
      vec.v[0] = lookAtPos->v[0] - v13->ent->r.currentOrigin.v[0];
      v15 = lookAtPos->v[2];
      vec.v[1] = v12 - ent->r.currentOrigin.v[1];
      vec.v[2] = v15 - ent->r.currentOrigin.v[2];
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
void AIScriptedInterface::ForcePitchAndYawDeltas(AIScriptedInterface *this, const float pitchDelta, const float yawDelta)
{
  ai_scripted_t *m_pAI; 
  AIScriptedInterface_vtbl *v6; 
  float v7; 
  ai_scripted_t *v8; 
  AIScriptedInterface_vtbl *v9; 
  float v10; 
  AIScriptedInterface_vtbl *v11; 
  float v12; 
  float v13; 
  float v14; 

  if ( this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 168, ASSERT_TYPE_ASSERT, "(!Is3D())", (const char *)&queryFormat, "!Is3D()") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v6 = this->__vftable;
  v7 = yawDelta + m_pAI->CodeOrient.vDesiredAngles.v[1];
  v12 = pitchDelta + m_pAI->CodeOrient.fDesiredLookPitch;
  v13 = v7;
  v14 = 0.0;
  v6->SetDesiredBodyAngles(this, &m_pAI->CodeOrient, (const vec3_t *)&v12, 0);
  v8 = this->m_pAI;
  v9 = this->__vftable;
  v10 = yawDelta + v8->ScriptOrient.vDesiredAngles.v[1];
  v12 = pitchDelta + v8->ScriptOrient.fDesiredLookPitch;
  v13 = v10;
  v14 = 0.0;
  v9->SetDesiredBodyAngles(this, &v8->ScriptOrient, (const vec3_t *)&v12, 0);
  v11 = this->__vftable;
  v13 = yawDelta + this->m_pAI->ent->r.currentAngles.v[1];
  v12 = 0.0;
  v14 = 0.0;
  v11->SetBodyAngles(this, (const vec3_t *)&v12);
  AIScriptedInterface::SetLookAngles(this, pitchDelta + this->m_pAI->orientation.fLookPitch, yawDelta + this->m_pAI->orientation.fLookYaw);
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
  sentient_info_t *v13; 
  bool v14; 
  ai_scripted_t *v15; 
  const tacpoint_t *PointForPathnodeVis; 
  float v17; 
  float v18; 
  float v19; 
  ai_scripted_t *v20; 
  gentity_s *ent; 
  gentity_s *v22; 
  int v23; 
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
    v23 = v4 + level.time;
    goto LABEL_38;
  }
  v13 = &this->m_pAI->sentientInfo[v12 - level.sentients];
  v14 = AICommonInterface::NearClaimNode(this, 15.0);
  v15 = this->m_pAI;
  if ( v14 )
  {
    PointForPathnodeVis = TacGraph_GetPointForPathnodeVis(v15->sentient->pClaimedNode);
    if ( PointForPathnodeVis )
    {
      TacGraph_GetApproxGroundPosForPoint(PointForPathnodeVis, &outPos);
      v17 = outPos.v[2];
      v18 = outPos.v[1];
      v19 = outPos.v[0];
      goto LABEL_33;
    }
    v20 = this->m_pAI;
    ent = v20->ent;
    v19 = v20->ent->r.currentOrigin.v[0];
    outPos.v[0] = v19;
    v18 = ent->r.currentOrigin.v[1];
    outPos.v[1] = v18;
    v17 = ent->r.currentOrigin.v[2];
  }
  else
  {
    v22 = v15->ent;
    v19 = v15->ent->r.currentOrigin.v[0];
    outPos.v[0] = v19;
    v18 = v22->r.currentOrigin.v[1];
    outPos.v[1] = v18;
    v17 = v22->r.currentOrigin.v[2];
  }
  outPos.v[2] = v17;
LABEL_33:
  if ( (float)((float)((float)((float)(v12->ent->r.currentOrigin.v[1] - v18) * (float)(v12->ent->r.currentOrigin.v[1] - v18)) + (float)((float)(v12->ent->r.currentOrigin.v[0] - v19) * (float)(v12->ent->r.currentOrigin.v[0] - v19))) + (float)((float)(v12->ent->r.currentOrigin.v[2] - v17) * (float)(v12->ent->r.currentOrigin.v[2] - v17))) <= 262144.0 )
  {
    LastTacPointOnPathWithVis = Sentient_FindLastTacPointOnPathWithVis(this->m_pAI->sentient, v12, v13, &outPos, &this->m_pAI->sight.faceLikelyEnemyCornerPos);
    tacpoint_ref_t::SetPoint(&this->m_pAI->sight.faceLikelyEnemyTacPoint, LastTacPointOnPathWithVis);
    if ( tacpoint_ref_t::IsDefined(&this->m_pAI->sight.faceLikelyEnemyTacPoint) )
    {
      AIScriptedInterface::SetAnglesToLikelyEnemyPath(this);
      this->m_pAI->sight.faceLikelyEnemyPathNeedRecalculateTime = v5 + level.time;
      this->m_pAI->sight.faceLikelyEnemyPathNeedCheckTime = v4 + level.time;
      return 1;
    }
  }
  v23 = v5 + level.time;
LABEL_38:
  this->m_pAI->sight.faceLikelyEnemyPathNeedRecalculateTime = v23;
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
  double v6; 
  float v7; 
  double v8; 
  float v13; 
  double v17; 
  float v18; 
  double v19; 
  float v21; 
  vec3_t angles; 

  v6 = vectoyaw((const vec2_t *)dirToFace);
  v7 = *(float *)&v6;
  v8 = vectoyaw((const vec2_t *)moveDir);
  *(float *)&_XMM7 = FLOAT_180_0;
  _XMM12 = LODWORD(FLOAT_90_0);
  _XMM14 = 0i64;
  __asm { vroundss xmm2, xmm14, xmm1, 1 }
  LODWORD(v13) = COERCE_UNSIGNED_INT((float)((float)((float)(*(float *)&v8 - v7) * 0.0027777778) - *(float *)&_XMM2) * 360.0) & _xmm;
  _XMM8 = 0i64;
  if ( v13 < 135.0 )
  {
    LODWORD(_XMM9) = 0;
    if ( v13 >= 45.0 )
    {
      __asm
      {
        vcmpltss xmm0, xmm8, xmm4
        vblendvps xmm9, xmm12, xmm11, xmm0
      }
    }
  }
  else
  {
    *(float *)&_XMM9 = FLOAT_180_0;
  }
  v17 = vectopitch(dirToFace);
  v18 = *(float *)&v17;
  v19 = vectopitch(moveDir);
  __asm { vroundss xmm3, xmm14, xmm1, 1 }
  LODWORD(v21) = COERCE_UNSIGNED_INT((float)((float)((float)(*(float *)&v19 - v18) * 0.0027777778) - *(float *)&_XMM3) * 360.0) & _xmm;
  if ( v21 < 135.0 )
  {
    LODWORD(_XMM7) = 0;
    if ( v21 >= 45.0 )
    {
      __asm
      {
        vcmpltss xmm0, xmm8, xmm2
        vblendvps xmm7, xmm12, xmm11, xmm0
      }
    }
  }
  vectoangles(moveDir, &angles);
  angles.v[0] = *(float *)&_XMM7 + angles.v[0];
  angles.v[1] = *(float *)&_XMM9 + angles.v[1];
  AngleVectors(&angles, outDesiredDir, NULL, NULL);
}

/*
==============
GetMinDistToFaceMotion
==============
*/
float GetMinDistToFaceMotion(vec3_t *lookaheadDir, vec3_t *forwardDir, vec3_t *pathDir)
{
  float v3; 
  __int128 v4; 
  float v5; 
  float v6; 
  __int128 v7; 
  __int128 v9; 
  float v13; 
  __int128 v14; 
  float v18; 
  __int128 v19; 
  float v20; 
  __int128 v21; 

  v3 = forwardDir->v[1];
  v4 = LODWORD(forwardDir->v[0]);
  v5 = pathDir->v[1];
  v6 = lookaheadDir->v[1];
  v7 = LODWORD(lookaheadDir->v[0]);
  _XMM10 = LODWORD(FLOAT_1_0);
  v9 = v7;
  *(float *)&v9 = fsqrt((float)(*(float *)&v7 * *(float *)&v7) + (float)(v6 * v6));
  _XMM2 = v9;
  __asm
  {
    vcmpless xmm0, xmm2, xmm6
    vblendvps xmm0, xmm2, xmm10, xmm0
  }
  v13 = 1.0 / *(float *)&_XMM0;
  v14 = v4;
  *(float *)&v14 = fsqrt((float)(*(float *)&v4 * *(float *)&v4) + (float)(v3 * v3));
  _XMM2 = v14;
  __asm
  {
    vcmpless xmm0, xmm2, xmm6
    vblendvps xmm0, xmm2, xmm10, xmm0
  }
  v18 = *(float *)&v4 * (float)(1.0 / *(float *)&_XMM0);
  v19 = LODWORD(pathDir->v[0]);
  v20 = v3 * (float)(1.0 / *(float *)&_XMM0);
  v21 = v19;
  *(float *)&v21 = fsqrt((float)(*(float *)&v19 * *(float *)&v19) + (float)(v5 * v5));
  _XMM2 = v21;
  __asm
  {
    vcmpless xmm0, xmm2, xmm6
    vblendvps xmm0, xmm2, xmm10, xmm0
  }
  if ( (float)((float)((float)(v6 * v13) * v20) + (float)((float)(*(float *)&v7 * v13) * v18)) >= 0.5 && (float)((float)((float)(v5 * (float)(1.0 / *(float *)&_XMM0)) * v20) + (float)((float)(*(float *)&v19 * (float)(1.0 / *(float *)&_XMM0)) * v18)) >= 0.5 )
    _XMM10 = 0i64;
  _XMM0 = LODWORD(FLOAT_64_0);
  __asm
  {
    vcmpneqss xmm2, xmm10, xmm4
    vblendvps xmm0, xmm0, xmm1, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::LerpAnglesWithQuaternions
==============
*/
void AIScriptedInterface::LerpAnglesWithQuaternions(const vec3_t *currentAngles, const vec3_t *desiredAngles, const float lerpSpeed, vec3_t *outAngles)
{
  float v6; 
  vec4_t qb; 
  vec4_t quat; 
  vec4_t out; 
  tmat33_t<vec3_t> axis; 

  AnglesToQuat(currentAngles, &quat);
  AnglesToQuat(desiredAngles, &qb);
  LODWORD(v6) = COERCE_UNSIGNED_INT((float)((float)((float)(qb.v[0] * quat.v[0]) + (float)(qb.v[1] * quat.v[1])) + (float)(qb.v[2] * quat.v[2])) + (float)(qb.v[3] * quat.v[3])) & _xmm;
  if ( v6 <= cosf_0(lerpSpeed) )
  {
    QuatLerp(&quat, &qb, lerpSpeed, &out);
    QuatToAxis(&out, &axis);
    AxisToAngles(&axis, outAngles);
  }
  else
  {
    outAngles->v[0] = desiredAngles->v[0];
    outAngles->v[1] = desiredAngles->v[1];
    outAngles->v[2] = desiredAngles->v[2];
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
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  float v4; 
  AIScriptedInterface_vtbl *v5; 
  ai_scripted_t *v6; 
  vec3_t *p_anglesToLikelyEnemyPath; 
  gentity_s *v8; 
  vec3_t forward; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 830, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !tacpoint_ref_t::IsDefined(&this->m_pAI->sight.faceLikelyEnemyTacPoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 831, ASSERT_TYPE_ASSERT, "(m_pAI->sight.faceLikelyEnemyTacPoint.IsDefined())", (const char *)&queryFormat, "m_pAI->sight.faceLikelyEnemyTacPoint.IsDefined()") )
    __debugbreak();
  m_pAI = this->m_pAI;
  ent = m_pAI->ent;
  forward.v[0] = m_pAI->sight.faceLikelyEnemyCornerPos.v[0] - m_pAI->ent->r.currentOrigin.v[0];
  forward.v[1] = m_pAI->sight.faceLikelyEnemyCornerPos.v[1] - ent->r.currentOrigin.v[1];
  v4 = m_pAI->sight.faceLikelyEnemyCornerPos.v[2] - ent->r.currentOrigin.v[2];
  v5 = this->__vftable;
  forward.v[2] = v4;
  if ( v5->Is3D(this) && (float)((float)((float)(forward.v[1] * forward.v[1]) + (float)(forward.v[0] * forward.v[0])) + (float)(forward.v[2] * forward.v[2])) >= 1.0 )
  {
    AnglesToAxis(&this->m_pAI->ent->r.currentAngles, &axis);
    GenerateAxisFromForwardVector(&forward, &axis, &outAxis);
    AxisToAngles(&outAxis, &this->m_pAI->sight.anglesToLikelyEnemyPath);
  }
  else
  {
    v6 = this->m_pAI;
    p_anglesToLikelyEnemyPath = &v6->sight.anglesToLikelyEnemyPath;
    if ( (float)((float)(forward.v[1] * forward.v[1]) + (float)(forward.v[0] * forward.v[0])) < 1.0 )
    {
      v8 = v6->ent;
      p_anglesToLikelyEnemyPath->v[0] = v8->r.currentAngles.v[0];
      p_anglesToLikelyEnemyPath->v[1] = v8->r.currentAngles.v[1];
      p_anglesToLikelyEnemyPath->v[2] = v8->r.currentAngles.v[2];
    }
    else
    {
      vectoangles(&forward, p_anglesToLikelyEnemyPath);
    }
  }
}

/*
==============
AIScriptedInterface::SetBodyAngles
==============
*/
void AIScriptedInterface::SetBodyAngles(AIScriptedInterface *this, const vec3_t *angles)
{
  gentity_s *v4; 
  double v5; 
  float v6; 
  double v7; 
  float v8; 
  double v9; 

  if ( ((LODWORD(angles->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(angles->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(angles->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 148, ASSERT_TYPE_ASSERT, "(!IS_NAN( angles[0] ) && !IS_NAN( angles[1] ) && !IS_NAN( angles[2] ))", "%s\n\tActor_SetBodyAngles has an invalid set of angles", "!IS_NAN( angles[0] ) && !IS_NAN( angles[1] ) && !IS_NAN( angles[2] )") )
    __debugbreak();
  v4 = this->GetEntity(this);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 151, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v5 = AngleNormalize360(angles->v[2]);
  v6 = *(float *)&v5;
  v7 = AngleNormalize360(angles->v[1]);
  v8 = *(float *)&v7;
  v9 = AngleNormalize360(angles->v[0]);
  v4->r.currentAngles.v[1] = v8;
  v4->r.currentAngles.v[2] = v6;
  v4->r.currentAngles.v[0] = *(float *)&v9;
}

/*
==============
AIScriptedInterface::SetDesiredBodyAngles
==============
*/
void AIScriptedInterface::SetDesiredBodyAngles(AIScriptedInterface *this, ai_orient_t *pOrient, const vec3_t *vDesiredAngles, int bSetBodyPitchAndRoll)
{
  float v7; 
  float v8; 
  double v9; 
  double v10; 
  double v11; 
  float v12; 

  if ( !pOrient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 100, ASSERT_TYPE_ASSERT, "(pOrient)", (const char *)&queryFormat, "pOrient") )
    __debugbreak();
  if ( ((LODWORD(vDesiredAngles->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(vDesiredAngles->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(vDesiredAngles->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 101, ASSERT_TYPE_ASSERT, "(!IS_NAN( vDesiredAngles[0] ) && !IS_NAN( vDesiredAngles[1] ) && !IS_NAN( vDesiredAngles[2] ))", "%s\n\tActor_SetDesiredBodyAngles has an invalid set of angles", "!IS_NAN( vDesiredAngles[0] ) && !IS_NAN( vDesiredAngles[1] ) && !IS_NAN( vDesiredAngles[2] )") )
    __debugbreak();
  v7 = vDesiredAngles->v[1];
  v8 = vDesiredAngles->v[0];
  if ( !pOrient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 36, ASSERT_TYPE_ASSERT, "(pOrient)", (const char *)&queryFormat, "pOrient") )
    __debugbreak();
  v9 = AngleNormalize360(v8);
  pOrient->fDesiredLookPitch = *(float *)&v9;
  v10 = AngleNormalize360(v7);
  pOrient->fDesiredLookYaw = *(float *)&v10;
  v11 = AngleNormalize360(vDesiredAngles->v[1]);
  pOrient->vDesiredAngles.v[1] = *(float *)&v11;
  if ( bSetBodyPitchAndRoll )
  {
    AIScriptedInterface::SetDesiredBodyPitch(pOrient, vDesiredAngles->v[0]);
    v12 = vDesiredAngles->v[2];
  }
  else
  {
    v12 = 0.0;
    AIScriptedInterface::SetDesiredBodyPitch(pOrient, 0.0);
  }
  AIScriptedInterface::SetDesiredBodyRoll(pOrient, v12);
}

/*
==============
AIScriptedInterface::SetDesiredBodyPitch
==============
*/
void AIScriptedInterface::SetDesiredBodyPitch(ai_orient_t *pOrient, const float fAngle)
{
  double v3; 

  if ( !pOrient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 69, ASSERT_TYPE_ASSERT, "(pOrient)", (const char *)&queryFormat, "pOrient") )
    __debugbreak();
  v3 = AngleNormalize360(fAngle);
  pOrient->vDesiredAngles.v[0] = *(float *)&v3;
}

/*
==============
AIScriptedInterface::SetDesiredBodyRoll
==============
*/
void AIScriptedInterface::SetDesiredBodyRoll(ai_orient_t *pOrient, const float fAngle)
{
  double v3; 

  if ( !pOrient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 85, ASSERT_TYPE_ASSERT, "(pOrient)", (const char *)&queryFormat, "pOrient") )
    __debugbreak();
  v3 = AngleNormalize360(fAngle);
  pOrient->vDesiredAngles.v[2] = *(float *)&v3;
}

/*
==============
AIScriptedInterface::SetDesiredBodyYaw
==============
*/
void AIScriptedInterface::SetDesiredBodyYaw(ai_orient_t *pOrient, const float fAngle)
{
  double v3; 

  if ( !pOrient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 53, ASSERT_TYPE_ASSERT, "(pOrient)", (const char *)&queryFormat, "pOrient") )
    __debugbreak();
  v3 = AngleNormalize360(fAngle);
  pOrient->vDesiredAngles.v[1] = *(float *)&v3;
}

/*
==============
AIScriptedInterface::SetDesiredLookAngles
==============
*/
void AIScriptedInterface::SetDesiredLookAngles(ai_orient_t *pOrient, const float fPitch, const float fYaw)
{
  double v4; 
  double v5; 

  if ( !pOrient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 36, ASSERT_TYPE_ASSERT, "(pOrient)", (const char *)&queryFormat, "pOrient") )
    __debugbreak();
  v4 = AngleNormalize360(fPitch);
  pOrient->fDesiredLookPitch = *(float *)&v4;
  v5 = AngleNormalize360(fYaw);
  pOrient->fDesiredLookYaw = *(float *)&v5;
}

/*
==============
AIScriptedInterface::SetLookAngles
==============
*/
void AIScriptedInterface::SetLookAngles(AIScriptedInterface *this, const float fPitch, const float fYaw)
{
  double v4; 
  double v5; 
  ai_scripted_t *m_pAI; 
  vec3_t angles; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 127, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  v4 = AngleNormalize360(fPitch);
  this->m_pAI->orientation.fLookPitch = *(float *)&v4;
  angles.v[0] = *(float *)&v4;
  v5 = AngleNormalize360(fYaw);
  this->m_pAI->orientation.fLookYaw = *(float *)&v5;
  m_pAI = this->m_pAI;
  angles.v[1] = *(float *)&v5;
  angles.v[2] = 0.0;
  AngleVectors(&angles, &m_pAI->orientation.vLookForward, &m_pAI->orientation.vLookRight, &m_pAI->orientation.vLookUp);
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
  const dvar_t *v3; 
  ai_scripted_t *v4; 
  double PathDistToGoal; 
  const dvar_t *v6; 
  pathnode_t *node; 
  bool HasValidUpcomingTurnCached; 
  ai_scripted_t *v9; 
  __int128 v11; 
  __int128 v12; 
  float v13; 
  float v14; 
  vec3_t forward; 

  if ( !AIScriptedInterface::IsApproachingTightQuarters(this) )
  {
    m_pAI = this->m_pAI;
    if ( !m_pAI->cautiousNavigationEnabled )
    {
      if ( m_pAI->avoidance_active )
        goto LABEL_27;
      v3 = DCONST_DVARFLT_ai_maxSpeedForForcedCornerStrafing;
      if ( !DCONST_DVARFLT_ai_maxSpeedForForcedCornerStrafing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedForForcedCornerStrafing") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      v4 = this->m_pAI;
      if ( v3->current.value < v4->animData.desiredSpeed )
        goto LABEL_27;
      PathDistToGoal = Nav_GetPathDistToGoal(v4->pNavigator);
      v6 = DCONST_DVARFLT_ai_minDistanceFromGoalForForcedCornerStrafing;
      if ( !DCONST_DVARFLT_ai_minDistanceFromGoalForForcedCornerStrafing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minDistanceFromGoalForForcedCornerStrafing") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( *(float *)&PathDistToGoal < v6->current.value )
      {
        node = this->m_pAI->codeGoal.node;
        if ( node )
        {
          if ( ((1 << LOBYTE(node->constant.type)) & 0x82641EFC) != 0 )
          {
LABEL_27:
            if ( !AIScriptedInterface::ShouldCornerStrafeBecauseEnemy(this) )
              return 0;
          }
        }
      }
    }
  }
  if ( AICommonInterface::GetTargetEntity(this) && (AICommonInterface::RecentlySeeEnemy(this) || AIScriptedInterface::IsDoingReacquire(this)) )
    return 0;
  HasValidUpcomingTurnCached = AIScriptedInterface::HasValidUpcomingTurnCached(this);
  v9 = this->m_pAI;
  if ( HasValidUpcomingTurnCached )
  {
    v9->isInCautiousCornerStrafe = 1;
    return 1;
  }
  if ( !v9->isInCautiousCornerStrafe )
    return 0;
  v11 = LODWORD(v9->Physics.vVelocity.v[0]);
  v12 = v11;
  v13 = v9->Physics.vVelocity.v[1];
  v14 = v9->Physics.vVelocity.v[2];
  *(float *)&v12 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(v13 * v13)) + (float)(v14 * v14));
  _XMM3 = v12;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  AngleVectors(&v9->ent->r.currentAngles, &forward, NULL, NULL);
  if ( (float)((float)((float)((float)(*(float *)&v11 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[0]) + (float)((float)(v13 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[1])) + (float)((float)(v14 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[2])) > 0.96600002 )
    this->m_pAI->isInCautiousCornerStrafe = 0;
  return this->m_pAI->isInCautiousCornerStrafe;
}

/*
==============
AIScriptedInterface::ShouldCornerStrafeBecauseEnemy
==============
*/
bool AIScriptedInterface::ShouldCornerStrafeBecauseEnemy(AIScriptedInterface *this)
{
  gentity_s *TargetEntity; 
  float v4; 
  float v5; 
  __int128 v6; 
  float v7; 
  float v8; 
  float v12; 
  ai_scripted_t *m_pAI; 
  float *v; 
  __int64 v15; 
  __int64 v16; 
  bool v17; 
  char v18; 
  float v19; 
  float v20; 
  float v21; 
  int v22[5]; 
  bfx::AreaHandle v23; 
  bfx::LinkHandle v24; 

  TargetEntity = AICommonInterface::GetTargetEntity(this);
  if ( !TargetEntity )
    return 0;
  this->m_pAI->pNavigator->GetNextCorner(this->m_pAI->pNavigator, (vec3_t *)&v19);
  v4 = TargetEntity->r.currentOrigin.v[0] - v19;
  v6 = LODWORD(TargetEntity->r.currentOrigin.v[1]);
  v5 = TargetEntity->r.currentOrigin.v[1] - v20;
  v7 = TargetEntity->r.currentOrigin.v[2] - v21;
  v8 = (float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v7 * v7);
  *(float *)&v6 = fsqrt(v8);
  _XMM3 = v6;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm2, xmm0
  }
  v12 = v7 * (float)(1.0 / *(float *)&_XMM1);
  m_pAI = this->m_pAI;
  if ( v8 > m_pAI->maxFaceEnemyDist )
    return 0;
  v = m_pAI->ent->r.currentOrigin.v;
  if ( fsqrt((float)((float)((float)(v[1] - v20) * (float)(v[1] - v20)) + (float)((float)(*v - v19) * (float)(*v - v19))) + (float)((float)(v[2] - v21) * (float)(v[2] - v21))) > 64.0 )
    return 0;
  bfx::AreaHandle::AreaHandle(&v23);
  bfx::LinkHandle::LinkHandle(&v24);
  v18 = 0;
  LOBYTE(v15) = 1;
  ((void (__fastcall *)(AINavigator *, __int64, __int64, int *, char))this->m_pAI->pNavigator->GetPosAlongPath)(this->m_pAI->pNavigator, v16, v15, v22, v18);
  v17 = (float)((float)((float)((float)(*(float *)v22 - v19) * (float)(v4 * (float)(1.0 / *(float *)&_XMM1))) + (float)((float)(*(float *)&v22[1] - v20) * (float)(v5 * (float)(1.0 / *(float *)&_XMM1)))) + (float)((float)(*(float *)&v22[2] - v21) * v12)) >= 0.0;
  bfx::LinkHandle::~LinkHandle(&v24);
  bfx::AreaHandle::~AreaHandle(&v23);
  return v17;
}

/*
==============
AIScriptedInterface::ShouldFaceGoalNode
==============
*/
char AIScriptedInterface::ShouldFaceGoalNode(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  pathnode_t *pClaimedNode; 
  ai_scripted_t *v4; 
  float v5; 
  gentity_s *TargetEntity; 
  unsigned __int16 type; 
  vec3_t pos; 
  int v10[4]; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 594, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !AICommonInterface::HasPath(this) )
    return 0;
  if ( !AIScriptedInterface::UsingCoverNodes(this) )
    return 0;
  m_pAI = this->m_pAI;
  if ( !m_pAI->bArrivalFailed && m_pAI->orientation.faceMotion )
    return 0;
  pClaimedNode = m_pAI->sentient->pClaimedNode;
  if ( !pClaimedNode )
    return 0;
  if ( ((1 << LOBYTE(pClaimedNode->constant.type)) & 0x82641EFC) == 0 )
    return 0;
  pathnode_t::GetPos(pClaimedNode, &pos);
  this->m_pAI->pNavigator->GetRequestedGoalPos(this->m_pAI->pNavigator, (vec3_t *)v10);
  if ( pos.v[0] != *(float *)v10 )
    return 0;
  if ( pos.v[1] != *(float *)&v10[1] )
    return 0;
  if ( pos.v[2] != *(float *)&v10[2] )
    return 0;
  v4 = this->m_pAI;
  v5 = (float)((float)((float)(pos.v[1] - v4->ent->r.currentOrigin.v[1]) * (float)(pos.v[1] - v4->ent->r.currentOrigin.v[1])) + (float)((float)(pos.v[0] - v4->ent->r.currentOrigin.v[0]) * (float)(pos.v[0] - v4->ent->r.currentOrigin.v[0]))) + (float)((float)(pos.v[2] - v4->ent->r.currentOrigin.v[2]) * (float)(pos.v[2] - v4->ent->r.currentOrigin.v[2]));
  if ( v5 > 4096.0 || !v4->pNavigator->IsNextCornerGoal(v4->pNavigator) && v5 > 1024.0 )
    return 0;
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  if ( !TargetEntity )
    return 1;
  if ( !this->m_pAI->blackboard.m_bShouldInitiallyAttackFromExposed && ((pClaimedNode->constant.spawnflags & 4) == 0 && (type = pClaimedNode->constant.type, (unsigned __int16)(type - 2) > 2u) && type != 22 || !AIScriptedInterface::CanShootEnemy(this, 250, 0, 0)) && (Path_NodeIgnoresAngles(pClaimedNode) || Path_IsNodeFacingToward(pClaimedNode, &TargetEntity->r.currentOrigin, 0.0)) && AIScriptedInterface::Cover_IsValidAgainstEnemy(this, pClaimedNode, 1) )
    return 1;
  else
    return 0;
}

/*
==============
AIScriptedInterface::ShouldForceCautiousStrafe
==============
*/
bool AIScriptedInterface::ShouldForceCautiousStrafe(AIScriptedInterface *this)
{
  const dvar_t *v2; 
  ai_scripted_t *m_pAI; 
  double PathDistToGoal; 
  const dvar_t *v5; 
  pathnode_t *node; 

  if ( this->m_pAI->avoidance_active )
    return 0;
  v2 = DCONST_DVARFLT_ai_maxSpeedForForcedCornerStrafing;
  if ( !DCONST_DVARFLT_ai_maxSpeedForForcedCornerStrafing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_maxSpeedForForcedCornerStrafing") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  m_pAI = this->m_pAI;
  if ( v2->current.value < m_pAI->animData.desiredSpeed )
    return 0;
  PathDistToGoal = Nav_GetPathDistToGoal(m_pAI->pNavigator);
  v5 = DCONST_DVARFLT_ai_minDistanceFromGoalForForcedCornerStrafing;
  if ( !DCONST_DVARFLT_ai_minDistanceFromGoalForForcedCornerStrafing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_minDistanceFromGoalForForcedCornerStrafing") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  return *(float *)&PathDistToGoal >= v5->current.value || (node = this->m_pAI->codeGoal.node) == NULL || ((1 << LOBYTE(node->constant.type)) & 0x82641EFC) == 0;
}

/*
==============
AIScriptedInterface::ShouldStrafe
==============
*/
bool AIScriptedInterface::ShouldStrafe(AIScriptedInterface *this)
{
  __int128 v1; 
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v5; 
  sentient_s *sentient; 
  pathnode_t *pClaimedNode; 
  ai_reacquire_state_t Reacquire; 
  ai_scripted_t *v9; 
  double PathDistToGoal; 
  ai_scripted_t *v11; 
  float v12; 
  double TargetSpeed; 
  float v14; 
  ai_scripted_t *v15; 
  int v16; 
  sentient_s *TargetSentient; 
  __int128 v19; 
  AINavigator *pNavigator; 
  float MinDistToFaceMotion; 
  unsigned int *v23; 
  float v25; 
  double v27; 
  ai_scripted_t *v28; 
  ai_scripted_t *v30; 
  vec3_t v34; 
  vec3_t position; 
  vec3_t pos; 
  int v37[4]; 
  int v38[4]; 
  vec3_t forward; 
  vec3_t outLookaheadDir; 
  __int128 v41; 

  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 1374, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->bAllowStrafe )
  {
    if ( m_pAI->arrivalInfo.arriving )
      return !m_pAI->orientation.predictedFaceMotion;
    if ( AICommonInterface::HasPath(this) && !AIScriptedInterface::IsOnStairs(this) && !EntHandle::isDefined(&this->m_pAI->grenade.pGrenade) && !((unsigned __int8 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->HasTraversalWithin)(this->m_pAI->pNavigator) && !((unsigned __int8 (__fastcall *)(AIScriptedInterface *))this->GetStairsWithinDist)(this) )
    {
      v5 = this->m_pAI;
      if ( (v5->eAllowedStances & 1) != 0 && (((__int64 (__fastcall *)(AINavigator *))v5->pNavigator->GetAllowedStances)(v5->pNavigator) & 1) != 0 )
      {
        sentient = this->m_pAI->sentient;
        pClaimedNode = sentient->pClaimedNode;
        if ( !pClaimedNode || (pathnode_t::GetPos(sentient->pClaimedNode, &pos), !AICommonInterface::PointNearPoint(this, &pos, &this->m_pAI->ent->r.currentOrigin, 2.0)) || (pClaimedNode->constant.spawnflags & 4) == 0 )
        {
          Reacquire = AIScriptedInterface::GetReacquire(this);
          v9 = this->m_pAI;
          if ( Reacquire == AI_REACQUIRE_REACQUIRED || v9->blackboard.m_bForceStrafe )
          {
            v9->orientation.predictedStrafePosValid = 0;
            return 1;
          }
          PathDistToGoal = Nav_GetPathDistToGoal(v9->pNavigator);
          v11 = this->m_pAI;
          v12 = *(float *)&PathDistToGoal;
          if ( !v11->orientation.predictedFaceMotion )
          {
            if ( v11->speedScaleMode[0] && (TargetSpeed = AIScriptedInterface::GetTargetSpeed(this), *(float *)&TargetSpeed <= 60.0) )
              v14 = FLOAT_40_0;
            else
              v14 = FLOAT_64_0;
            if ( v12 < v14 )
              goto LABEL_37;
          }
          if ( AIScriptedInterface::IsDoingReacquire(this) && v12 < 100.0 || AIScriptedInterface::ShouldFaceGoalNode(this) )
            goto LABEL_37;
          if ( !AICommonInterface::GetTargetEntity(this) )
            goto LABEL_34;
          v15 = this->m_pAI;
          v16 = 2000;
          if ( v15->orientation.predictedFaceMotion && (signed int)v15->pNavigator->m_TimeOfLastPathUpdate < level.time )
            v16 = 200;
          TargetSentient = AICommonInterface::GetTargetSentient(this);
          if ( TargetSentient )
          {
            if ( !AICommonInterface::RecentlySeeSentient(this, TargetSentient, v16) )
              goto LABEL_34;
          }
          else if ( !AICommonInterface::CanSeeEnemy(this) )
          {
LABEL_34:
            this->m_pAI->pNavigator->GetSnappedPathStartPos(this->m_pAI->pNavigator, (vec3_t *)v38);
            this->m_pAI->pNavigator->GetRequestedGoalPos(this->m_pAI->pNavigator, (vec3_t *)v37);
            v19 = (unsigned int)v37[0];
            *(float *)&v19 = *(float *)v37 - *(float *)v38;
            _XMM7 = v19;
            pNavigator = this->m_pAI->pNavigator;
            pos.v[2] = *(float *)&v37[2] - *(float *)&v38[2];
            Nav_GetLookaheadDir(pNavigator, &outLookaheadDir);
            AngleVectors(&this->m_pAI->ent->r.currentAngles, &forward, NULL, NULL);
            position.v[2] = pos.v[2];
            __asm { vunpcklps xmm0, xmm7, xmm6 }
            *(double *)position.v = *(double *)&_XMM0;
            v34 = forward;
            pos = outLookaheadDir;
            MinDistToFaceMotion = GetMinDistToFaceMotion(&pos, &v34, &position);
            if ( !((unsigned __int8 (__fastcall *)(AINavigator *))this->m_pAI->pNavigator->IsPathLengthAtLeast)(this->m_pAI->pNavigator) && v12 < MinDistToFaceMotion || AIScriptedInterface::ShouldCautiousStrafe(this) )
            {
LABEL_37:
              this->m_pAI->orientation.predictedStrafePosValid = 0;
              return 1;
            }
            return 0;
          }
          v41 = v1;
          AICommonInterface::GetTargetPosition(this, &position);
          v23 = (unsigned int *)this->m_pAI;
          _XMM6 = v23[375];
          v25 = (float)((float)((float)(position.v[1] - *(float *)(*(_QWORD *)v23 + 308i64)) * (float)(position.v[1] - *(float *)(*(_QWORD *)v23 + 308i64))) + (float)((float)(position.v[0] - *(float *)(*(_QWORD *)v23 + 304i64)) * (float)(position.v[0] - *(float *)(*(_QWORD *)v23 + 304i64)))) + (float)((float)(position.v[2] - *(float *)(*(_QWORD *)v23 + 312i64)) * (float)(position.v[2] - *(float *)(*(_QWORD *)v23 + 312i64)));
          if ( (int)(level.time - v23[389]) <= 3000 )
          {
            _XMM0 = v23[376];
            __asm { vmaxss  xmm6, xmm0, xmm6 }
          }
          v27 = AIScriptedInterface::GetTargetSpeed(this);
          if ( *(float *)&v27 < 80.0 )
          {
            v28 = this->m_pAI;
            if ( v28->script_desiredSpeed > 88.0 )
            {
              _XMM0 = LODWORD(v28->maxFaceEnemyDistSlow);
              __asm { vmaxss  xmm6, xmm0, xmm6 }
            }
          }
          v30 = this->m_pAI;
          _XMM0 = v30->orientation.predictedFaceMotion;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm3, xmm6, xmm3, xmm2
          }
          if ( v25 < (float)(*(float *)&_XMM3 * *(float *)&_XMM3) )
          {
            v30->orientation.predictedStrafePosValid = 0;
            return 1;
          }
          goto LABEL_34;
        }
      }
    }
  }
  return 0;
}

/*
==============
AIScriptedInterface::UpdateBodyAngle
==============
*/
void AIScriptedInterface::UpdateBodyAngle(AIScriptedInterface *this)
{
  __int128 v1; 
  __int128 v2; 
  ai_scripted_t *m_pAI; 
  float v5; 
  ai_scripted_t *v6; 
  int frameDuration; 
  ai_scripted_t *v8; 
  EntityTagInfo *tagInfo; 
  float v10; 
  float v13; 
  float turnRate; 
  float v15; 
  float v16; 
  ai_scripted_t *v17; 
  float v19; 
  float v20; 
  float v21; 
  AIScriptedInterface_vtbl *v22; 
  vec3_t currentAngles; 
  vec3_t outAngles; 
  __int128 v25; 
  __int128 v26; 

  m_pAI = this->m_pAI;
  if ( m_pAI->ScriptOrient.eMode )
  {
    m_pAI->orientation.vDesiredAngles.v[0] = m_pAI->ScriptOrient.vDesiredAngles.v[0];
    m_pAI->orientation.vDesiredAngles.v[1] = m_pAI->ScriptOrient.vDesiredAngles.v[1];
    v5 = m_pAI->ScriptOrient.vDesiredAngles.v[2];
  }
  else
  {
    m_pAI->orientation.vDesiredAngles.v[0] = m_pAI->CodeOrient.vDesiredAngles.v[0];
    m_pAI->orientation.vDesiredAngles.v[1] = m_pAI->CodeOrient.vDesiredAngles.v[1];
    v5 = m_pAI->CodeOrient.vDesiredAngles.v[2];
  }
  m_pAI->orientation.vDesiredAngles.v[2] = v5;
  currentAngles = m_pAI->ent->r.currentAngles;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v6 = this->m_pAI;
  frameDuration = level.frameDuration;
  if ( v6->Physics.bJumping || v6->Physics.bTrackMoverUp || this->Is3D(this) || (v8 = this->m_pAI, (tagInfo = v8->ent->tagInfo) != NULL) && tagInfo->movementChangesOffset )
  {
    AIScriptedInterface::LerpAnglesWithQuaternions(&currentAngles, &this->m_pAI->orientation.vDesiredAngles, (float)(this->m_pAI->turnRate * 0.017453292) * (float)frameDuration, &outAngles);
    this->SetBodyAngles(this, &outAngles);
  }
  else
  {
    v10 = v8->orientation.vDesiredAngles.v[1];
    v26 = v1;
    v25 = v2;
    _XMM14 = 0i64;
    __asm { vroundss xmm2, xmm14, xmm1, 1 }
    v13 = (float)((float)((float)(v10 - currentAngles.v[1]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    if ( v8->turnRate <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 299, ASSERT_TYPE_ASSERT, "(m_pAI->turnRate > 0)", (const char *)&queryFormat, "m_pAI->turnRate > 0") )
      __debugbreak();
    if ( BG_ActorIsProne(&this->m_pAI->ProneInfo, level.time) )
      turnRate = FLOAT_0_035999998;
    else
      turnRate = this->m_pAI->turnRate;
    v15 = (float)frameDuration;
    v16 = (float)frameDuration * turnRate;
    if ( v13 <= (float)(v16 * 2.0) )
    {
      if ( v13 >= (float)(v16 * -2.0) )
      {
        if ( v13 > 3.0 || v13 < -3.0 )
          v13 = v13 * 0.40000001;
      }
      else
      {
        LODWORD(v13) = LODWORD(v16) ^ _xmm;
      }
    }
    else
    {
      v13 = (float)frameDuration * turnRate;
    }
    v17 = this->m_pAI;
    __asm { vroundss xmm3, xmm14, xmm2, 1 }
    v19 = v15 * v17->turnRate;
    v21 = (float)((float)((float)(v17->orientation.vDesiredAngles.v[0] - currentAngles.v[0]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    v20 = v21;
    if ( v21 <= v19 )
    {
      if ( v21 >= COERCE_FLOAT(LODWORD(v19) ^ _xmm) )
      {
        if ( v21 > 3.0 || v21 < -3.0 )
          v20 = v21 * 0.5;
      }
      else
      {
        LODWORD(v20) = LODWORD(v19) ^ _xmm;
      }
    }
    else
    {
      v20 = v15 * v17->turnRate;
    }
    if ( this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_orientation.cpp", 322, ASSERT_TYPE_ASSERT, "(!Is3D())", (const char *)&queryFormat, "!Is3D()") )
      __debugbreak();
    v22 = this->__vftable;
    outAngles.v[0] = currentAngles.v[0] + v20;
    outAngles.v[1] = v13 + currentAngles.v[1];
    outAngles.v[2] = 0.0;
    v22->SetBodyAngles(this, &outAngles);
  }
}

/*
==============
AIScriptedInterface::UpdateLookAngles
==============
*/
void AIScriptedInterface::UpdateLookAngles(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  ai_orient_mode_t eMode; 
  float fLookYaw; 
  float fLookPitch; 
  __int64 v6; 
  __m128 v8; 
  __m128 v13; 
  __int64 v14; 
  float v15; 
  __m128 v18; 

  m_pAI = this->m_pAI;
  eMode = m_pAI->ScriptOrient.eMode;
  fLookYaw = m_pAI->orientation.fLookYaw;
  fLookPitch = m_pAI->orientation.fLookPitch;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v6 = 2468i64;
  if ( eMode == AI_ORIENT_INVALID )
    v6 = 2444i64;
  _XMM10 = 0i64;
  v8 = _mm_cvtepi32_ps((__m128i)(unsigned int)level.frameDuration);
  *(float *)&_XMM5 = v8.m128_f32[0] * 0.80000001;
  __asm { vroundss xmm2, xmm10, xmm1, 1 }
  if ( (float)((float)((float)((float)(*(float *)((char *)&m_pAI->ent + v6) - fLookPitch) * 0.0027777778) - *(float *)&_XMM2) * 360.0) <= (float)(v8.m128_f32[0] * 0.80000001) )
  {
    v13 = v8;
    v13.m128_f32[0] = v8.m128_f32[0] * -0.80000001;
    _XMM0 = v13;
    __asm { vmaxss  xmm0, xmm0, xmm1 }
  }
  else
  {
    *(float *)&_XMM0 = v8.m128_f32[0] * 0.80000001;
  }
  v14 = 2472i64;
  v15 = fLookPitch + *(float *)&_XMM0;
  if ( eMode == AI_ORIENT_INVALID )
    v14 = 2448i64;
  __asm { vroundss xmm3, xmm10, xmm2, 1 }
  if ( (float)((float)((float)((float)(*(float *)((char *)&m_pAI->ent + v14) - fLookYaw) * 0.0027777778) - *(float *)&_XMM3) * 360.0) <= *(float *)&_XMM5 )
  {
    v18 = v8;
    v18.m128_f32[0] = v8.m128_f32[0] * -0.80000001;
    _XMM0 = v18;
    __asm { vmaxss  xmm5, xmm0, xmm1 }
  }
  AIScriptedInterface::SetLookAngles(this, v15, fLookYaw + *(float *)&_XMM5);
}

