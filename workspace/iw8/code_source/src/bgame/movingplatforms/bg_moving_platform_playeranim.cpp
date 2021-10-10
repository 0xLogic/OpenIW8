/*
==============
BGMovingPlatformPlayerAnim::PlayerAnimCachePosition
==============
*/

void __fastcall BGMovingPlatformPlayerAnim::PlayerAnimCachePosition(BGMovingPlatformPlayerAnim *this, const entityState_t *es, lerpFrame_t *lf, const vec3_t *movingPlatformOrigin, const vec3_t *movingPlatformAngles)
{
  ?PlayerAnimCachePosition@BGMovingPlatformPlayerAnim@@QEAAXPEBUentityState_t@@PEAUlerpFrame_t@@AEBTvec3_t@@2@Z(this, es, lf, movingPlatformOrigin, movingPlatformAngles);
}

/*
==============
BGMovingPlatformPlayerAnim::PlayerAnimApplyRotation
==============
*/

void __fastcall BGMovingPlatformPlayerAnim::PlayerAnimApplyRotation(BGMovingPlatformPlayerAnim *this, const entityState_t *es, const vec3_t *movingPlatformAngles, lerpFrame_t *lf, vec3_t *outAngleDela)
{
  ?PlayerAnimApplyRotation@BGMovingPlatformPlayerAnim@@QEAAXPEBUentityState_t@@AEBTvec3_t@@PEAUlerpFrame_t@@AEAT3@@Z(this, es, movingPlatformAngles, lf, outAngleDela);
}

/*
==============
BGMovingPlatformPlayerAnim::PlayerAnimApplyRotation
==============
*/
void BGMovingPlatformPlayerAnim::PlayerAnimApplyRotation(BGMovingPlatformPlayerAnim *this, const entityState_t *es, const vec3_t *movingPlatformAngles, lerpFrame_t *lf, vec3_t *outAngleDela)
{
  float v8; 

  if ( BGMovingPlatforms::IsEntityOnMovingPlatform(es) && this->m_originValid )
  {
    outAngleDela->v[0] = movingPlatformAngles->v[0] - this->m_prevPlatformAngles.v[0];
    v8 = movingPlatformAngles->v[1] - this->m_prevPlatformAngles.v[1];
    outAngleDela->v[1] = v8;
    outAngleDela->v[2] = movingPlatformAngles->v[2] - this->m_prevPlatformAngles.v[2];
    lf->yawAngle = v8 + lf->yawAngle;
  }
  else
  {
    *(_QWORD *)outAngleDela->v = 0i64;
    outAngleDela->v[2] = 0.0;
  }
}

/*
==============
BGMovingPlatformPlayerAnim::PlayerAnimCachePosition
==============
*/
void BGMovingPlatformPlayerAnim::PlayerAnimCachePosition(BGMovingPlatformPlayerAnim *this, const entityState_t *es, lerpFrame_t *lf, const vec3_t *movingPlatformOrigin, const vec3_t *movingPlatformAngles)
{
  if ( BGMovingPlatforms::IsEntityOnMovingPlatform(es) )
  {
    this->m_originValid = 1;
    this->m_prevPlatformOrigin.v[0] = movingPlatformOrigin->v[0];
    this->m_prevPlatformOrigin.v[1] = movingPlatformOrigin->v[1];
    this->m_prevPlatformOrigin.v[2] = movingPlatformOrigin->v[2];
    this->m_prevPlatformAngles = *movingPlatformAngles;
  }
  else
  {
    this->m_originValid = 0;
    *(_QWORD *)this->m_prevPlatformOrigin.v = 0i64;
    *(_QWORD *)&this->m_prevPlatformOrigin.z = 0i64;
    this->m_prevPlatformAngles.v[1] = 0.0;
    this->m_prevPlatformAngles.v[2] = 0;
  }
}

