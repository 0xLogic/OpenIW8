/*
==============
BgVehicleComponentPathFollower::PathIsEnd
==============
*/

bool __fastcall BgVehicleComponentPathFollower::PathIsEnd(BgVehicleComponentPathFollower *this)
{
  return ?PathIsEnd@BgVehicleComponentPathFollower@@IEAA_NXZ(this);
}

/*
==============
BgVehicleComponentPathFollowerCP::Setup
==============
*/

bool __fastcall BgVehicleComponentPathFollowerCP::Setup(BgVehicleComponentPathFollowerCP *this, BGVehicles *vehicleSystem, VehiclePhysicsComponentId id)
{
  return ?Setup@BgVehicleComponentPathFollowerCP@@UEAA_NPEAVBGVehicles@@UVehiclePhysicsComponentId@@@Z(this, vehicleSystem, id);
}

/*
==============
BgVehicleComponentPathFollower::SetStopOnEnd
==============
*/

void __fastcall BgVehicleComponentPathFollower::SetStopOnEnd(BgVehicleComponentPathFollower *this, bool stopOnEnd)
{
  ?SetStopOnEnd@BgVehicleComponentPathFollower@@QEAAX_N@Z(this, stopOnEnd);
}

/*
==============
BgVehicleComponentGoStraightTo::ComputeCosAngles
==============
*/

double __fastcall BgVehicleComponentGoStraightTo::ComputeCosAngles(BgVehicleComponentGoStraightTo *this, const vec3_t *targetPos, float *fwDot, float *riDot)
{
  double result; 

  *(float *)&result = ?ComputeCosAngles@BgVehicleComponentGoStraightTo@@IEAAMAEBTvec3_t@@PEAM1@Z(this, targetPos, fwDot, riDot);
  return result;
}

/*
==============
BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration
==============
*/

void __fastcall BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration(BgVehicleComponentPathFollower *this, BgVehiclePhysics *vehObj, vec3_t *accelerationWS, float deltaTime, float multiplier, vec3_t *outAngularVelocity)
{
  ?FakeEngineAngularForceFromAcceleration@BgVehicleComponentPathFollower@@IEAAXPEAVBgVehiclePhysics@@Tvec3_t@@MMAEAT3@@Z(this, vehObj, accelerationWS, deltaTime, multiplier, outAngularVelocity);
}

/*
==============
BgVehicleComponentGoStraightTo::Step
==============
*/

void __fastcall BgVehicleComponentGoStraightTo::Step(BgVehicleComponentGoStraightTo *this, float deltaTime)
{
  ?Step@BgVehicleComponentGoStraightTo@@UEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehicleComponentPathFollower::GetSpeed
==============
*/

double __fastcall BgVehicleComponentPathFollower::GetSpeed(BgVehicleComponentPathFollower *this)
{
  double result; 

  *(float *)&result = ?GetSpeed@BgVehicleComponentPathFollower@@IEBAMXZ(this);
  return result;
}

/*
==============
BgVehicleComponentPathFollower::GetCurrentPathTime
==============
*/

double __fastcall BgVehicleComponentPathFollower::GetCurrentPathTime(BgVehicleComponentPathFollower *this)
{
  double result; 

  *(float *)&result = ?GetCurrentPathTime@BgVehicleComponentPathFollower@@QEBAMXZ(this);
  return result;
}

/*
==============
BgVehicleComponentGoStraightTo::DebugDraw
==============
*/

void __fastcall BgVehicleComponentGoStraightTo::DebugDraw(BgVehicleComponentGoStraightTo *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?DebugDraw@BgVehicleComponentGoStraightTo@@UEAAXPEBUScreenPlacement@@PEAM1MM@Z(this, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
BgVehicleComponentPathFollowerSP::PathStep
==============
*/

void __fastcall BgVehicleComponentPathFollowerSP::PathStep(BgVehicleComponentPathFollowerSP *this, float deltaTime)
{
  ?PathStep@BgVehicleComponentPathFollowerSP@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehicleComponentPathFollower::GetPathLookAhead
==============
*/

void __fastcall BgVehicleComponentPathFollower::GetPathLookAhead(BgVehicleComponentPathFollower *this, float lookAheadTime, vec3_t *outPos, vec3_t *outAngles)
{
  ?GetPathLookAhead@BgVehicleComponentPathFollower@@IEAAXMAEATvec3_t@@0@Z(this, lookAheadTime, outPos, outAngles);
}

/*
==============
BgVehicleComponentGoStraightTo::GoStraightTo
==============
*/

void __fastcall BgVehicleComponentGoStraightTo::GoStraightTo(BgVehicleComponentGoStraightTo *this, const vec3_t *pos)
{
  ?GoStraightTo@BgVehicleComponentGoStraightTo@@QEAAXAEBTvec3_t@@@Z(this, pos);
}

/*
==============
BgVehicleComponentPathFinder::GoStraightToNode
==============
*/

void __fastcall BgVehicleComponentPathFinder::GoStraightToNode(BgVehicleComponentPathFinder *this, __int16 nodeIdx)
{
  ?GoStraightToNode@BgVehicleComponentPathFinder@@IEAAXF@Z(this, nodeIdx);
}

/*
==============
BgVehicleComponentPathFollowerCP::PathStep
==============
*/

void __fastcall BgVehicleComponentPathFollowerCP::PathStep(BgVehicleComponentPathFollowerCP *this, float deltaTime, float timeScale0, float timeScale1)
{
  ?PathStep@BgVehicleComponentPathFollowerCP@@IEAAXMMM@Z(this, deltaTime, timeScale0, timeScale1);
}

/*
==============
BgVehicleComponentPathFollower::TriggerNodeNotification
==============
*/

void __fastcall BgVehicleComponentPathFollower::TriggerNodeNotification(BgVehicleComponentPathFollower *this, unsigned int nodeIndex)
{
  ?TriggerNodeNotification@BgVehicleComponentPathFollower@@IEAAXI@Z(this, nodeIndex);
}

/*
==============
BgVehicleComponentGoStraightTo::IsOnGoalPos
==============
*/

bool __fastcall BgVehicleComponentGoStraightTo::IsOnGoalPos(BgVehicleComponentGoStraightTo *this, float scale)
{
  return ?IsOnGoalPos@BgVehicleComponentGoStraightTo@@IEAA_NM@Z(this, scale);
}

/*
==============
BgVehicleComponentPathFollower::GetCurrentNodeIndex
==============
*/

unsigned int __fastcall BgVehicleComponentPathFollower::GetCurrentNodeIndex(BgVehicleComponentPathFollower *this)
{
  return ?GetCurrentNodeIndex@BgVehicleComponentPathFollower@@QEBAIXZ(this);
}

/*
==============
BgVehicleComponentPathFinder::Setup
==============
*/

bool __fastcall BgVehicleComponentPathFinder::Setup(BgVehicleComponentPathFinder *this, BGVehicles *vehicleSystem, VehiclePhysicsComponentId id)
{
  return ?Setup@BgVehicleComponentPathFinder@@UEAA_NPEAVBGVehicles@@UVehiclePhysicsComponentId@@@Z(this, vehicleSystem, id);
}

/*
==============
BgVehicleComponentGoStraightTo::SetEndOnGoal
==============
*/

void __fastcall BgVehicleComponentGoStraightTo::SetEndOnGoal(BgVehicleComponentGoStraightTo *this, bool enabled)
{
  ?SetEndOnGoal@BgVehicleComponentGoStraightTo@@QEAAX_N@Z(this, enabled);
}

/*
==============
BgVehicleComponentPathFollower::GetCatmullRomData
==============
*/

BSplineCatmullRom *__fastcall BgVehicleComponentPathFollower::GetCatmullRomData(BgVehicleComponentPathFollower *this)
{
  return ?GetCatmullRomData@BgVehicleComponentPathFollower@@IEAAPEAUBSplineCatmullRom@@XZ(this);
}

/*
==============
BgVehicleComponentPathFollower::Reset
==============
*/

void __fastcall BgVehicleComponentPathFollower::Reset(BgVehicleComponentPathFollower *this)
{
  ?Reset@BgVehicleComponentPathFollower@@UEAAXXZ(this);
}

/*
==============
BgVehicleComponentPathFinder::Notification
==============
*/

void __fastcall BgVehicleComponentPathFinder::Notification(BgVehicleComponentPathFinder *this, __int16 nodeIdx, scr_string_t str)
{
  ?Notification@BgVehicleComponentPathFinder@@IEAAXFW4scr_string_t@@@Z(this, nodeIdx, str);
}

/*
==============
BgVehicleComponentGoStraightTo::AdjustInputs
==============
*/

void __fastcall BgVehicleComponentGoStraightTo::AdjustInputs(BgVehicleComponentGoStraightTo *this, bool fw, bool steer)
{
  ?AdjustInputs@BgVehicleComponentGoStraightTo@@IEAAX_N0@Z(this, fw, steer);
}

/*
==============
BgVehicleComponentPathFollower::SetSpeedImmediate
==============
*/

void __fastcall BgVehicleComponentPathFollower::SetSpeedImmediate(BgVehicleComponentPathFollower *this, float speedInPerSec)
{
  ?SetSpeedImmediate@BgVehicleComponentPathFollower@@QEAAXM@Z(this, speedInPerSec);
}

/*
==============
BgVehicleComponentPathFinder::DebugDraw
==============
*/

void __fastcall BgVehicleComponentPathFinder::DebugDraw(BgVehicleComponentPathFinder *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?DebugDraw@BgVehicleComponentPathFinder@@UEAAXPEBUScreenPlacement@@PEAM1MM@Z(this, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
BgVehicleComponentPathFollower::Setup
==============
*/

bool __fastcall BgVehicleComponentPathFollower::Setup(BgVehicleComponentPathFollower *this, BGVehicles *vehicleSystem, VehiclePhysicsComponentId id)
{
  return ?Setup@BgVehicleComponentPathFollower@@UEAA_NPEAVBGVehicles@@UVehiclePhysicsComponentId@@@Z(this, vehicleSystem, id);
}

/*
==============
BgVehicleComponentPathFollower::UpdateManualSpeed
==============
*/

void __fastcall BgVehicleComponentPathFollower::UpdateManualSpeed(BgVehicleComponentPathFollower *this, float deltaTime)
{
  ?UpdateManualSpeed@BgVehicleComponentPathFollower@@IEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehicleComponentPathFollower::WarpTo
==============
*/

void __fastcall BgVehicleComponentPathFollower::WarpTo(BgVehicleComponentPathFollower *this, const vec3_t *pos, const vec3_t *angles)
{
  ?WarpTo@BgVehicleComponentPathFollower@@IEAAXAEBTvec3_t@@0@Z(this, pos, angles);
}

/*
==============
BgVehicleComponentPathFollower::GetCurrentNodeTime
==============
*/

double __fastcall BgVehicleComponentPathFollower::GetCurrentNodeTime(BgVehicleComponentPathFollower *this)
{
  double result; 

  *(float *)&result = ?GetCurrentNodeTime@BgVehicleComponentPathFollower@@QEBAMXZ(this);
  return result;
}

/*
==============
BgVehicleComponentPathFinder::Step
==============
*/

void __fastcall BgVehicleComponentPathFinder::Step(BgVehicleComponentPathFinder *this, float deltaTime)
{
  ?Step@BgVehicleComponentPathFinder@@UEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehicleComponentPathFinder::FindPath
==============
*/

void __fastcall BgVehicleComponentPathFinder::FindPath(BgVehicleComponentPathFinder *this, const vec3_t *pos, unsigned int layer)
{
  ?FindPath@BgVehicleComponentPathFinder@@QEAAXAEBTvec3_t@@I@Z(this, pos, layer);
}

/*
==============
BgVehicleComponentPathFollowerSP::Reset
==============
*/

void __fastcall BgVehicleComponentPathFollowerSP::Reset(BgVehicleComponentPathFollowerSP *this)
{
  ?Reset@BgVehicleComponentPathFollowerSP@@UEAAXXZ(this);
}

/*
==============
BgVehicleComponentGoStraightTo::Setup
==============
*/

bool __fastcall BgVehicleComponentGoStraightTo::Setup(BgVehicleComponentGoStraightTo *this, BGVehicles *vehicleSystem, VehiclePhysicsComponentId id)
{
  return ?Setup@BgVehicleComponentGoStraightTo@@UEAA_NPEAVBGVehicles@@UVehiclePhysicsComponentId@@@Z(this, vehicleSystem, id);
}

/*
==============
BgVehicleComponentPathFollowerCP::GetResumeFactor
==============
*/

double __fastcall BgVehicleComponentPathFollowerCP::GetResumeFactor(BgVehicleComponentPathFollowerCP *this)
{
  double result; 

  *(float *)&result = ?GetResumeFactor@BgVehicleComponentPathFollowerCP@@IEBAMXZ(this);
  return result;
}

/*
==============
BgVehicleComponentPathFollower::SetSpeed
==============
*/

void __fastcall BgVehicleComponentPathFollower::SetSpeed(BgVehicleComponentPathFollower *this, float speedInPerSec)
{
  ?SetSpeed@BgVehicleComponentPathFollower@@QEAAXM@Z(this, speedInPerSec);
}

/*
==============
BgVehicleComponentGoStraightTo::Reset
==============
*/

void __fastcall BgVehicleComponentGoStraightTo::Reset(BgVehicleComponentGoStraightTo *this)
{
  ?Reset@BgVehicleComponentGoStraightTo@@UEAAXXZ(this);
}

/*
==============
BgVehicleComponentPathFollower::GetPathCurrentPos
==============
*/

void __fastcall BgVehicleComponentPathFollower::GetPathCurrentPos(BgVehicleComponentPathFollower *this, vec3_t *outPathOrg)
{
  ?GetPathCurrentPos@BgVehicleComponentPathFollower@@IEAAXAEATvec3_t@@@Z(this, outPathOrg);
}

/*
==============
BgVehicleComponentGoStraightTo::SetNotifyOnGoal
==============
*/

void __fastcall BgVehicleComponentGoStraightTo::SetNotifyOnGoal(BgVehicleComponentGoStraightTo *this, bool enabled)
{
  ?SetNotifyOnGoal@BgVehicleComponentGoStraightTo@@QEAAX_N@Z(this, enabled);
}

/*
==============
BgVehicleComponentPathFollower::StartPath
==============
*/

void __fastcall BgVehicleComponentPathFollower::StartPath(BgVehicleComponentPathFollower *this, __int16 nodeIndex)
{
  ?StartPath@BgVehicleComponentPathFollower@@QEAAXF@Z(this, nodeIndex);
}

/*
==============
BgVehicleComponentPathFollower::DebugDraw
==============
*/

void __fastcall BgVehicleComponentPathFollower::DebugDraw(BgVehicleComponentPathFollower *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?DebugDraw@BgVehicleComponentPathFollower@@UEAAXPEBUScreenPlacement@@PEAM1MM@Z(this, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
BgVehicleComponentPathFollowerSP::Setup
==============
*/

bool __fastcall BgVehicleComponentPathFollowerSP::Setup(BgVehicleComponentPathFollowerSP *this, BGVehicles *vehicleSystem, VehiclePhysicsComponentId id)
{
  return ?Setup@BgVehicleComponentPathFollowerSP@@UEAA_NPEAVBGVehicles@@UVehiclePhysicsComponentId@@@Z(this, vehicleSystem, id);
}

/*
==============
BgVehicleComponentPathFollowerCP::ScrNotifyPathBlocked
==============
*/

void __fastcall BgVehicleComponentPathFollowerCP::ScrNotifyPathBlocked(BgVehicleComponentPathFollowerCP *this)
{
  ?ScrNotifyPathBlocked@BgVehicleComponentPathFollowerCP@@IEAAXXZ(this);
}

/*
==============
BgVehicleComponentPathFollowerCP::PostStep
==============
*/

void __fastcall BgVehicleComponentPathFollowerCP::PostStep(BgVehicleComponentPathFollowerCP *this, float deltaTime)
{
  ?PostStep@BgVehicleComponentPathFollowerCP@@UEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehicleComponentPathFollowerSP::StartPathNodes
==============
*/

void __fastcall BgVehicleComponentPathFollowerSP::StartPathNodes(BgVehicleComponentPathFollowerSP *this, const vec4_t *pointTimes, unsigned int pointCount, float tau, float alpha, bool centripetal, bool looped, bool warp)
{
  ?StartPathNodes@BgVehicleComponentPathFollowerSP@@UEAAXPEBTvec4_t@@IMM_N11@Z(this, pointTimes, pointCount, tau, alpha, centripetal, looped, warp);
}

/*
==============
BgVehicleComponentPathFollowerCP::StopOnEnd
==============
*/

void __fastcall BgVehicleComponentPathFollowerCP::StopOnEnd(BgVehicleComponentPathFollowerCP *this, float deltaTime, float pauseDuration)
{
  ?StopOnEnd@BgVehicleComponentPathFollowerCP@@IEAAXMM@Z(this, deltaTime, pauseDuration);
}

/*
==============
BgVehicleComponentPathFollowerCP::RestartPath
==============
*/

void __fastcall BgVehicleComponentPathFollowerCP::RestartPath(BgVehicleComponentPathFollowerCP *this, bool warp)
{
  ?RestartPath@BgVehicleComponentPathFollowerCP@@IEAAX_N@Z(this, warp);
}

/*
==============
BgVehicleComponentPathFollowerCP::StartPathNodes
==============
*/

void __fastcall BgVehicleComponentPathFollowerCP::StartPathNodes(BgVehicleComponentPathFollowerCP *this, const vec4_t *pointTimes, unsigned int pointCount, float tau, float alpha, bool centripetal, bool looped, bool warp)
{
  ?StartPathNodes@BgVehicleComponentPathFollowerCP@@UEAAXPEBTvec4_t@@IMM_N11@Z(this, pointTimes, pointCount, tau, alpha, centripetal, looped, warp);
}

/*
==============
BgVehicleComponentPathFollowerSP::PostStep
==============
*/

void __fastcall BgVehicleComponentPathFollowerSP::PostStep(BgVehicleComponentPathFollowerSP *this, float deltaTime)
{
  ?PostStep@BgVehicleComponentPathFollowerSP@@UEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehicleComponentPathFollowerCP::Reset
==============
*/

void __fastcall BgVehicleComponentPathFollowerCP::Reset(BgVehicleComponentPathFollowerCP *this)
{
  ?Reset@BgVehicleComponentPathFollowerCP@@UEAAXXZ(this);
}

/*
==============
BgVehicleComponentPathFollower::SetDeceleration
==============
*/

void __fastcall BgVehicleComponentPathFollower::SetDeceleration(BgVehicleComponentPathFollower *this, float decelMPHPerSec)
{
  ?SetDeceleration@BgVehicleComponentPathFollower@@QEAAXM@Z(this, decelMPHPerSec);
}

/*
==============
BgVehicleComponentPathFollower::ResetPath
==============
*/

void __fastcall BgVehicleComponentPathFollower::ResetPath(BgVehicleComponentPathFollower *this)
{
  ?ResetPath@BgVehicleComponentPathFollower@@IEAAXXZ(this);
}

/*
==============
BgVehicleComponentPathFollower::StartPathNodes
==============
*/

void __fastcall BgVehicleComponentPathFollower::StartPathNodes(BgVehicleComponentPathFollower *this, const vec4_t *pointTimes, unsigned int pointCount, float tau, float alpha, bool centripetal, bool looped, bool warp)
{
  ?StartPathNodes@BgVehicleComponentPathFollower@@UEAAXPEBTvec4_t@@IMM_N11@Z(this, pointTimes, pointCount, tau, alpha, centripetal, looped, warp);
}

/*
==============
BgVehicleComponentPathFollower::SetAcceleration
==============
*/

void __fastcall BgVehicleComponentPathFollower::SetAcceleration(BgVehicleComponentPathFollower *this, float accelMPHPerSec)
{
  ?SetAcceleration@BgVehicleComponentPathFollower@@QEAAXM@Z(this, accelMPHPerSec);
}

/*
==============
BgVehicleComponentPathFollower::UpdateSteeringAngle
==============
*/

void __fastcall BgVehicleComponentPathFollower::UpdateSteeringAngle(BgVehicleComponentPathFollower *this)
{
  ?UpdateSteeringAngle@BgVehicleComponentPathFollower@@IEAAXXZ(this);
}

/*
==============
BgVehicleComponentPathFollowerSP::RestartPath
==============
*/

void __fastcall BgVehicleComponentPathFollowerSP::RestartPath(BgVehicleComponentPathFollowerSP *this)
{
  ?RestartPath@BgVehicleComponentPathFollowerSP@@IEAAXXZ(this);
}

/*
==============
BgVehicleComponentPathFollowerCP::PathDistanceToGoal
==============
*/

double __fastcall BgVehicleComponentPathFollowerCP::PathDistanceToGoal(BgVehicleComponentPathFollowerCP *this)
{
  double result; 

  *(float *)&result = ?PathDistanceToGoal@BgVehicleComponentPathFollowerCP@@IEAAMXZ(this);
  return result;
}

/*
==============
BgVehicleComponentGoStraightTo::AdjustInputs
==============
*/
void BgVehicleComponentGoStraightTo::AdjustInputs(BgVehicleComponentGoStraightTo *this, bool fw, bool steer)
{
  BgVehiclePhysics *Owner; 
  float v8; 
  float v9; 
  __int128 v10; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  BgVehiclePhysics *v18; 

  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  _XMM8 = 0i64;
  v8 = this->m_lookAheadPos.v[0] - Owner->m_transform.m[3].v[0];
  v10 = LODWORD(this->m_lookAheadPos.v[1]);
  v9 = this->m_lookAheadPos.v[1] - Owner->m_transform.m[3].v[1];
  *(float *)&v10 = fsqrt((float)(v9 * v9) + (float)(v8 * v8));
  _XMM3 = v10;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm2, xmm0
  }
  v14 = (float)(1.0 / *(float *)&_XMM0) * v8;
  v15 = v9 * (float)(1.0 / *(float *)&_XMM0);
  v16 = (float)(v15 * Owner->m_transform.m[1].v[1]) + (float)(v14 * Owner->m_transform.m[1].v[0]);
  *(double *)&_XMM0 = I_fclamp((float)(v15 * Owner->m_transform.m[0].v[1]) + (float)(v14 * Owner->m_transform.m[0].v[0]), 0.0, 1.0);
  v17 = cbrtf(*(float *)&_XMM0);
  v18 = BgVehiclePhysicsComponent::GetOwner(this);
  if ( fw )
    v18->m_controls.externalValues[0] = v17 * this->m_inputMults[0];
  if ( steer )
  {
    _XMM2 = LODWORD(this->m_inputMults[2]) ^ (unsigned __int128)_xmm;
    __asm
    {
      vcmpless xmm1, xmm8, xmm7
      vblendvps xmm1, xmm2, xmm6, xmm1
    }
    v18->m_controls.externalValues[2] = powf_0(COERCE_FLOAT(LODWORD(v16) & _xmm), 0.2) * *(float *)&_XMM1;
  }
}

/*
==============
BgVehicleComponentGoStraightTo::ComputeCosAngles
==============
*/
float BgVehicleComponentGoStraightTo::ComputeCosAngles(BgVehicleComponentGoStraightTo *this, const vec3_t *targetPos, float *fwDot, float *riDot)
{
  BgVehiclePhysics *Owner; 
  float v8; 
  __int128 v9; 
  float v10; 
  float v14; 
  float v15; 

  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  v9 = LODWORD(targetPos->v[1]);
  v8 = targetPos->v[1] - Owner->m_transform.m[3].v[1];
  v10 = targetPos->v[0] - Owner->m_transform.m[3].v[0];
  *(float *)&v9 = fsqrt((float)(v8 * v8) + (float)(v10 * v10));
  _XMM0 = v9;
  __asm
  {
    vcmpless xmm1, xmm0, cs:__real@80000000
    vblendvps xmm1, xmm0, xmm2, xmm1
  }
  v14 = v10 * (float)(1.0 / *(float *)&_XMM1);
  v15 = v8 * (float)(1.0 / *(float *)&_XMM1);
  *(float *)&_XMM1 = v14 * Owner->m_transform.m[1].v[0];
  *(float *)&v9 = v15 * Owner->m_transform.m[1].v[1];
  *fwDot = (float)(v15 * Owner->m_transform.m[0].v[1]) + (float)(v14 * Owner->m_transform.m[0].v[0]);
  *riDot = *(float *)&v9 + *(float *)&_XMM1;
  return *(float *)&_XMM0;
}

/*
==============
BgVehicleComponentGoStraightTo::DebugDraw
==============
*/
void BgVehicleComponentGoStraightTo::DebugDraw(BgVehicleComponentGoStraightTo *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const vec3_t *OwnerPosition; 
  Bounds bounds; 

  BgVehiclePhysicsComponent::DebugDraw(this, scrPlace, x, y, tabWidth, charHeight);
  CL_AddDebugString(&this->m_goalPos, &colorGreen, 0.5, "Goal", 0, 0);
  OwnerPosition = BgVehiclePhysicsComponent::GetOwnerPosition(this);
  CG_DebugLine(OwnerPosition, &this->m_lookAheadPos, &colorGreen, 0, 0);
  CG_DebugCircle(&this->m_goalPos, fsqrt(this->m_goalPosTolSq), &identityMatrix33.m[2], &colorCyan, 1, 0);
  bounds.halfSize.v[1] = FLOAT_4_0;
  bounds.halfSize.v[2] = FLOAT_4_0;
  *(_OWORD *)bounds.midPoint.v = _xmm;
  CG_DebugBox(&this->m_lookAheadPos, &bounds, 0.0, &colorBlue, 0, 0);
}

/*
==============
BgVehicleComponentPathFinder::DebugDraw
==============
*/
void BgVehicleComponentPathFinder::DebugDraw(BgVehicleComponentPathFinder *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const vec3_t *OwnerPosition; 
  int v8; 
  float v9; 
  vec2_t *m_pathNodes; 
  __int64 v11; 
  float v12; 
  float v13; 
  const vec3_t *v14; 
  vec3_t end; 
  vec3_t start; 
  Bounds bounds; 
  Bounds v18; 

  BgVehiclePhysicsComponent::DebugDraw(this, scrPlace, x, y, tabWidth, charHeight);
  CL_AddDebugString(&this->m_goalPos, &colorGreen, 0.5, "Goal", 0, 0);
  OwnerPosition = BgVehiclePhysicsComponent::GetOwnerPosition(this);
  CG_DebugLine(OwnerPosition, &this->m_lookAheadPos, &colorGreen, 0, 0);
  CG_DebugCircle(&this->m_goalPos, fsqrt(this->m_goalPosTolSq), &identityMatrix33.m[2], &colorCyan, 1, 0);
  *(_OWORD *)bounds.midPoint.v = _xmm;
  bounds.halfSize.v[1] = FLOAT_4_0;
  bounds.halfSize.v[2] = FLOAT_4_0;
  CG_DebugBox(&this->m_lookAheadPos, &bounds, 0.0, &colorBlue, 0, 0);
  v8 = 0;
  *(_OWORD *)v18.midPoint.v = _xmm;
  v9 = this->m_finalGoalPos.v[2];
  v18.halfSize.v[1] = FLOAT_4_0;
  v18.halfSize.v[2] = FLOAT_4_0;
  end.v[2] = v9;
  start.v[2] = v9;
  if ( this->m_numNodes )
  {
    m_pathNodes = this->m_pathNodes;
    v11 = 0i64;
    do
    {
      v12 = m_pathNodes->v[0];
      v13 = m_pathNodes->v[1];
      end.v[0] = m_pathNodes->v[0];
      end.v[1] = v13;
      if ( v11 > 0 )
      {
        CG_DebugLine(&start, &end, &colorBlue, 0, 0);
        v12 = m_pathNodes->v[0];
        v13 = m_pathNodes->v[1];
      }
      start.v[0] = v12;
      start.v[1] = v13;
      CG_DebugBox(&end, &v18, 0.0, &colorCyan, 0, 0);
      ++v8;
      ++v11;
      ++m_pathNodes;
    }
    while ( v8 < this->m_numNodes );
  }
  v14 = BgVehiclePhysicsComponent::GetOwnerPosition(this);
  CG_DebugLine(v14, &this->m_goalPos, &colorGreen, 0, 0);
}

/*
==============
BgVehicleComponentPathFollower::DebugDraw
==============
*/
void BgVehicleComponentPathFollower::DebugDraw(BgVehicleComponentPathFollower *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  __int128 v6; 
  const BSplineCatmullRom *v11; 
  const char *v12; 
  vec3_t outPos; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t up; 
  vec3_t right; 
  char dest[128]; 
  __int128 v19; 

  v19 = v6;
  CG_DebugSphere(&this->m_pathPosInterpolated, 5.0, &colorGreen, 0, 0);
  if ( this->m_pathType == PATH_RADIANT )
  {
    CG_DebugSphere(&this->m_path.m_vpp.origin, 5.0, &colorCyan, 0, 0);
    ((void (__fastcall *)(BGVehicles *, vec3_t *, BgVehicleComponentPathFollower::<unnamed_type_m_path> *))this->m_vehicleSystem->PathComputeLookAhead)(this->m_vehicleSystem, &outPos, &this->m_path);
    CG_DebugSphere(&outPos, 5.0, &colorYellow, 0, 0);
    AngleVectors(&angles, &forward, &right, &up);
    CG_DebugCone(&outPos, &forward, 5.0, 10.0, &colorYellow, 0, 0);
  }
  else if ( this->m_pathType == PATH_CATMULLROM )
  {
    if ( !BG_BSpline_Data_IsValid(this->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
      __debugbreak();
    v11 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(this->m_path.m_catmullRom.splineIndex, NULL);
    BG_Spline_CatmullRom_DebugDraw(v11, 0x80u);
    BG_BSpline_CatmullRom_Evaluate(v11, this->m_path.m_vpp.speedOverride, &outPos, NULL, NULL, NULL);
    CG_DebugSphere(&outPos, 5.0, &colorCyan, 0, 0);
    BG_BSpline_CatmullRom_Evaluate(v11, this->m_lookAheadTime + this->m_path.m_vpp.speedOverride, &outPos, NULL, NULL, NULL);
    CG_DebugSphere(&outPos, 5.0, &colorYellow, 0, 0);
  }
  if ( scrPlace )
  {
    v12 = "CatmullRom";
    if ( this->m_pathType == PATH_RADIANT )
      v12 = "Radiant";
    Com_sprintf<128>((char (*)[128])dest, v12);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhiteFaded, 0, 1, 8.0, 0);
    *y = charHeight + *y;
  }
}

/*
==============
BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration
==============
*/
void BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration(BgVehicleComponentPathFollower *this, BgVehiclePhysics *vehObj, vec3_t *accelerationWS, float deltaTime, float multiplier, vec3_t *outAngularVelocity)
{
  float v8; 
  unsigned int i; 
  __int64 v10; 
  __m256i v11; 
  float v12; 
  float v13; 
  unsigned int PhysicsBodyId; 
  vec3_t atPointWs; 
  vec3_t impulseWs; 
  vec3_t velLs; 
  vec3_t velWs; 
  vec3_t outVelLs; 
  __m256i v20; 
  __m256i v21; 
  __m256i v22; 
  __int64 v23; 

  if ( deltaTime > 0.0 )
  {
    velWs = *outAngularVelocity;
    if ( !vehObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 904, ASSERT_TYPE_ASSERT, "(vehGroundObj)", (const char *)&queryFormat, "vehGroundObj") )
      __debugbreak();
    if ( !BgVehiclePhysicsGround::IsBraking((BgVehiclePhysicsGround *)vehObj) || vehObj->IsInAir(vehObj) )
      v8 = FLOAT_1_0;
    else
      v8 = FLOAT_2_0;
    for ( i = 0; i < vehObj[4].m_controls.playerEnabledBits[0]; ++i )
    {
      v10 = 38i64 * i;
      v11 = *(__m256i *)&vehObj[1].m_driverEnterLs.v[v10];
      v20 = *(__m256i *)((char *)&vehObj[1].m_worldId + v10 * 4);
      v22 = *(__m256i *)&vehObj[1].m_linkedPlayers.playerPositionsWs[0].v[v10];
      v23 = *(_QWORD *)((char *)&vehObj[1].m_linkedPlayers.frameCadence + v10 * 4);
      v21 = v11;
      if ( (_DWORD)v23 != 0xFFFFFF && deltaTime > 0.0 )
      {
        v12 = (float)((float)((float)(fixedTorqueFactor * *(float *)&v22.m256i_i32[4]) * v8) / deltaTime) * multiplier;
        v13 = v12 * accelerationWS->v[1];
        impulseWs.v[0] = v12 * accelerationWS->v[0];
        impulseWs.v[2] = v12 * accelerationWS->v[2];
        impulseWs.v[1] = v13;
        if ( BgVehiclePhysicsGround::IsBraking((BgVehiclePhysicsGround *)vehObj) )
        {
          atPointWs.v[0] = (float)(6.0 * *(float *)&v20.m256i_i32[7]) + *(float *)&v20.m256i_i32[1];
          atPointWs.v[1] = (float)(6.0 * *(float *)v21.m256i_i32) + *(float *)&v20.m256i_i32[2];
          atPointWs.v[2] = (float)(6.0 * *(float *)&v21.m256i_i32[1]) + *(float *)&v20.m256i_i32[3];
        }
        else
        {
          atPointWs = *(vec3_t *)((char *)v20.m256i_i64 + 4);
        }
        PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(vehObj);
        Physics_AccumulateRigidBodyAngularImpulse(vehObj->m_worldId, PhysicsBodyId, &impulseWs, &atPointWs, outAngularVelocity);
      }
    }
    BgVehiclePhysics::ComputeVelocityLocalSpace(vehObj, &velWs, &outVelLs);
    BgVehiclePhysics::ComputeVelocityLocalSpace(vehObj, outAngularVelocity, &velLs);
    velLs.v[0] = outVelLs.v[0];
    velLs.v[2] = outVelLs.v[2];
    BgVehiclePhysics::ComputeVelocityWorldSpace(vehObj, &velLs, outAngularVelocity);
  }
}

/*
==============
BgVehicleComponentPathFinder::FindPath
==============
*/
void BgVehicleComponentPathFinder::FindPath(BgVehicleComponentPathFinder *this, const vec3_t *pos, unsigned int layer)
{
  const vec3_t *OwnerPosition; 
  nav_space_s *DefaultSpace; 
  __int16 v8; 
  float m_goalPosTolSq; 
  unsigned __int16 v10; 
  int NumSegments; 
  int v12; 
  float v13; 
  float v14; 
  bfx::SurfaceSegment *SurfaceSegment; 
  const bfx::Vector3 *EndPos; 
  float m_y; 
  float m_x; 
  const bfx::Vector3 *StartPos; 
  int v20; 
  int i; 
  bfx::SurfaceSegment *v22; 
  const bfx::Vector3 *v23; 
  float v24; 
  float v25; 
  const bfx::Vector3 *v26; 
  float v27; 
  float v28; 
  __int64 m_numNodes; 
  vec2_t *v30; 
  __int64 v31; 
  float v32; 
  float v33; 
  vec2_t *v34; 
  unsigned __int16 v35; 
  bool v36; 
  __int16 v37; 
  bfx::PolylinePathRCPtr result; 
  __int64 v39; 

  v39 = -2i64;
  if ( !Nav_GetDefaultSpace() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 392, ASSERT_TYPE_ASSERT, "(Nav_GetDefaultSpace())", "%s\n\tBgVehicleComponentPathFinder::FindPath() Navigation mesh not found", "Nav_GetDefaultSpace()") )
    __debugbreak();
  if ( layer > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 393, ASSERT_TYPE_ASSERT, "(layer <= 255)", "%s\n\tBgVehicleComponentPathFinder::FindPath() Invalid layer", "layer <= 255") )
    __debugbreak();
  this->m_layer = truncate_cast<unsigned char,unsigned int>(layer);
  OwnerPosition = BgVehiclePhysicsComponent::GetOwnerPosition(this);
  DefaultSpace = Nav_GetDefaultSpace();
  Nav_FindPath(&result, DefaultSpace, OwnerPosition, pos, layer);
  HIBYTE(v8) = 0;
  if ( this->m_originalPathNumNodes == 0xFFFF )
  {
    m_goalPosTolSq = this->m_goalPosTolSq;
    v10 = 0;
    NumSegments = bfx::PolylinePathRCPtr::GetNumSegments(&result);
    v12 = 0;
    if ( NumSegments > 0 )
    {
      v13 = *(float *)&result.m_pProxy;
      v14 = *(float *)&result.m_pProxy;
      do
      {
        if ( bfx::PolylinePathRCPtr::GetSegmentType(&result, v12) == SURFACE_SEGMENT )
        {
          SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment(&result, v12);
          EndPos = bfx::SurfaceSegment::GetEndPos(SurfaceSegment);
          m_y = EndPos->m_y;
          m_x = EndPos->m_x;
          if ( !v12 )
          {
            StartPos = bfx::SurfaceSegment::GetStartPos(SurfaceSegment);
            v14 = StartPos->m_y;
            v13 = StartPos->m_x;
            ++v10;
          }
          if ( m_goalPosTolSq <= (float)((float)((float)(m_y - v14) * (float)(m_y - v14)) + (float)((float)(m_x - v13) * (float)(m_x - v13))) )
          {
            v13 = m_x;
            v14 = m_y;
            ++v10;
          }
        }
        ++v12;
      }
      while ( v12 < NumSegments );
    }
    this->m_originalPathNumNodes = v10;
    this->m_overallCurNode = 0;
  }
  this->m_finalGoalPos.v[0] = pos->v[0];
  this->m_finalGoalPos.v[1] = pos->v[1];
  this->m_finalGoalPos.v[2] = pos->v[2];
  v20 = bfx::PolylinePathRCPtr::GetNumSegments(&result);
  this->m_numNodes = 0;
  this->m_notifiedNodeBits[0] = 0;
  for ( i = 0; i < v20; ++i )
  {
    if ( this->m_numNodes >= 0xEu )
      break;
    if ( bfx::PolylinePathRCPtr::GetSegmentType(&result, i) == SURFACE_SEGMENT )
    {
      v22 = bfx::PolylinePathRCPtr::GetSurfaceSegment(&result, i);
      v23 = bfx::SurfaceSegment::GetEndPos(v22);
      v24 = v23->m_y;
      v25 = v23->m_x;
      if ( !i )
      {
        v26 = bfx::SurfaceSegment::GetStartPos(v22);
        v27 = v26->m_y;
        v28 = v26->m_x;
        m_numNodes = this->m_numNodes;
        v30 = &this->m_pathNodes[m_numNodes];
        this->m_numNodes = m_numNodes + 1;
        v30->v[0] = v28;
        v30->v[1] = v27;
      }
      v31 = this->m_numNodes;
      v32 = v25 - this->m_finalGoalPos.v[2 * v31 + 1];
      v33 = v24 - this->m_finalGoalPos.v[2 * v31 + 2];
      if ( (float)((float)(v33 * v33) + (float)(v32 * v32)) >= this->m_goalPosTolSq )
      {
        v34 = &this->m_pathNodes[v31];
        this->m_numNodes = v31 + 1;
        v34->v[0] = v25;
        v34->v[1] = v24;
      }
    }
  }
  v35 = this->m_numNodes;
  v36 = v35 == 14 && i < v20;
  this->m_partial = v36;
  LOBYTE(v8) = v35 != 0;
  v37 = v8 - 1;
  this->m_curNode = v37;
  if ( v35 )
    BgVehicleComponentPathFinder::GoStraightToNode(this, v37);
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&result);
}

/*
==============
BgVehicleComponentPathFollower::GetCatmullRomData
==============
*/
BSplineCatmullRom *BgVehicleComponentPathFollower::GetCatmullRomData(BgVehicleComponentPathFollower *this)
{
  if ( !BG_BSpline_Data_IsValid(this->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
    __debugbreak();
  return (BSplineCatmullRom *)BG_BSpline_Data_Get(this->m_path.m_catmullRom.splineIndex, NULL);
}

/*
==============
BgVehicleComponentPathFollower::GetCurrentNodeIndex
==============
*/
__int64 BgVehicleComponentPathFollower::GetCurrentNodeIndex(BgVehicleComponentPathFollower *this)
{
  if ( this->m_pathType == PATH_RADIANT )
    return (unsigned int)this->m_path.m_vpp.nodeIdx;
  if ( this->m_pathType == PATH_CATMULLROM )
    return this->m_path.m_catmullRom.curNodeIndex;
  return 0i64;
}

/*
==============
BgVehicleComponentPathFollower::GetCurrentNodeTime
==============
*/
float BgVehicleComponentPathFollower::GetCurrentNodeTime(BgVehicleComponentPathFollower *this)
{
  if ( this->m_pathType == PATH_RADIANT )
    return this->m_path.m_vpp.frac;
  if ( this->m_pathType == PATH_CATMULLROM )
    return this->m_path.m_vpp.speed;
  return 0.0;
}

/*
==============
BgVehicleComponentPathFollower::GetCurrentPathTime
==============
*/
float BgVehicleComponentPathFollower::GetCurrentPathTime(BgVehicleComponentPathFollower *this)
{
  if ( this->m_pathType == PATH_RADIANT || this->m_pathType != PATH_CATMULLROM )
    return 0.0;
  else
    return this->m_path.m_vpp.speedOverride;
}

/*
==============
BgVehicleComponentPathFollower::GetPathCurrentPos
==============
*/
void BgVehicleComponentPathFollower::GetPathCurrentPos(BgVehicleComponentPathFollower *this, vec3_t *outPathOrg)
{
  if ( this->m_pathType == PATH_RADIANT )
  {
    *outPathOrg = this->m_path.m_vpp.origin;
  }
  else if ( this->m_pathType == PATH_CATMULLROM )
  {
    *outPathOrg = this->m_pathPosInterpolated;
  }
}

/*
==============
BgVehicleComponentPathFollower::GetPathLookAhead
==============
*/
void BgVehicleComponentPathFollower::GetPathLookAhead(BgVehicleComponentPathFollower *this, float lookAheadTime, vec3_t *outPos, vec3_t *outAngles)
{
  __int128 v4; 
  float v8; 
  const BSplineCatmullRom *v9; 
  __int64 v10; 
  float v11; 
  vec3_t optOutDeriv; 
  __int128 v13; 

  if ( this->m_pathType == PATH_CATMULLROM )
  {
    v13 = v4;
    v8 = lookAheadTime + this->m_path.m_vpp.speedOverride;
    if ( !BG_BSpline_Data_IsValid(this->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
      __debugbreak();
    v9 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(this->m_path.m_catmullRom.splineIndex, NULL);
    BG_BSpline_CatmullRom_Evaluate(v9, v8, outPos, &optOutDeriv, NULL, NULL);
    v11 = outPos->v[0];
    if ( (LODWORD(outPos->v[0]) & 0x7F800000) == 2139095040 || (v11 = outPos->v[1], (LODWORD(v11) & 0x7F800000) == 2139095040) || (v11 = outPos->v[2], (LODWORD(v11) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 802, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outPos )[0] ) && !IS_NAN( ( outPos )[1] ) && !IS_NAN( ( outPos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outPos )[0] ) && !IS_NAN( ( outPos )[1] ) && !IS_NAN( ( outPos )[2] )", v11) )
        __debugbreak();
    }
    *(float *)&v10 = optOutDeriv.v[0];
    if ( (LODWORD(optOutDeriv.v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v10 = optOutDeriv.v[1], (LODWORD(optOutDeriv.v[1]) & 0x7F800000) == 2139095040) || (*(float *)&v10 = optOutDeriv.v[2], (LODWORD(optOutDeriv.v[2]) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 803, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tangent )[0] ) && !IS_NAN( ( tangent )[1] ) && !IS_NAN( ( tangent )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tangent )[0] ) && !IS_NAN( ( tangent )[1] ) && !IS_NAN( ( tangent )[2] )", v10) )
        __debugbreak();
    }
    vectoangles(&optOutDeriv, outAngles);
  }
}

/*
==============
BgVehicleComponentPathFollowerCP::GetResumeFactor
==============
*/
double BgVehicleComponentPathFollowerCP::GetResumeFactor(BgVehicleComponentPathFollowerCP *this)
{
  const dvar_t *v1; 
  float m_pauseTime; 
  float value; 
  double result; 

  v1 = DCONST_DVARMPFLT_bg_pathFollowerResumeFactorTime;
  if ( !DCONST_DVARMPFLT_bg_pathFollowerResumeFactorTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerResumeFactorTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  m_pauseTime = this->m_pauseTime;
  value = v1->current.value;
  if ( m_pauseTime < 0.0 && value > 0.001 )
    return I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(m_pauseTime / value) ^ _xmm), 0.0, 1.0);
  *(_QWORD *)&result = LODWORD(FLOAT_1_0);
  return result;
}

/*
==============
BgVehicleComponentPathFollower::GetSpeed
==============
*/
float BgVehicleComponentPathFollower::GetSpeed(BgVehicleComponentPathFollower *this)
{
  BgVehiclePhysics *Owner; 

  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  return (float)((float)(Owner->m_transform.m[0].v[1] * Owner->m_linearVelocityWs.v[1]) + (float)(Owner->m_transform.m[0].v[0] * Owner->m_linearVelocityWs.v[0])) + (float)(Owner->m_transform.m[0].v[2] * Owner->m_linearVelocityWs.v[2]);
}

/*
==============
BgVehicleComponentGoStraightTo::GoStraightTo
==============
*/
void BgVehicleComponentGoStraightTo::GoStraightTo(BgVehicleComponentGoStraightTo *this, const vec3_t *pos)
{
  if ( ((LODWORD(pos->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(pos->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(pos->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 192, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pos )[0] ) && !IS_NAN( ( pos )[1] ) && !IS_NAN( ( pos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pos )[0] ) && !IS_NAN( ( pos )[1] ) && !IS_NAN( ( pos )[2] )") )
    __debugbreak();
  *(double *)this->m_goalPos.v = *(double *)pos->v;
  this->m_goalPos.v[2] = pos->v[2];
  *(double *)this->m_lookAheadPos.v = *(double *)pos->v;
  this->m_lookAheadPos.v[2] = pos->v[2];
  this->m_goingStraightTo = 1;
}

/*
==============
BgVehicleComponentPathFinder::GoStraightToNode
==============
*/
void BgVehicleComponentPathFinder::GoStraightToNode(BgVehicleComponentPathFinder *this, __int16 nodeIdx)
{
  float v3; 
  double v4; 
  float v5; 

  v5 = this->m_finalGoalPos.v[2];
  v3 = this->m_pathNodes[nodeIdx].v[0];
  *(float *)&v4 = v3;
  HIDWORD(v4) = LODWORD(this->m_pathNodes[nodeIdx].v[1]);
  if ( (LODWORD(v3) & 0x7F800000) == 2139095040 || (v3 = this->m_pathNodes[nodeIdx].v[1], (LODWORD(v3) & 0x7F800000) == 2139095040) || (v3 = this->m_finalGoalPos.v[2], (LODWORD(v3) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 192, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pos )[0] ) && !IS_NAN( ( pos )[1] ) && !IS_NAN( ( pos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pos )[0] ) && !IS_NAN( ( pos )[1] ) && !IS_NAN( ( pos )[2] )", v3) )
      __debugbreak();
  }
  *(double *)this->m_goalPos.v = v4;
  *(double *)this->m_lookAheadPos.v = v4;
  this->m_goalPos.v[2] = v5;
  this->m_lookAheadPos.v[2] = v5;
  this->m_goingStraightTo = 1;
}

/*
==============
BgVehicleComponentGoStraightTo::IsOnGoalPos
==============
*/
bool BgVehicleComponentGoStraightTo::IsOnGoalPos(BgVehicleComponentGoStraightTo *this, float scale)
{
  bool v3; 
  const vec3_t *OwnerPosition; 
  float v5; 
  float v6; 
  float v7; 
  bool result; 
  BgVehiclePhysics *Owner; 
  float v10; 
  float v11; 
  float v12; 
  const vec3_t *v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  float v17; 

  v3 = this->m_lookAheadPos.v[0] == this->m_goalPos.v[0] && this->m_lookAheadPos.v[1] == this->m_goalPos.v[1] && this->m_lookAheadPos.v[2] == this->m_goalPos.v[2];
  OwnerPosition = BgVehiclePhysicsComponent::GetOwnerPosition(this);
  v5 = this->m_goalPos.v[1] - OwnerPosition->v[1];
  v6 = scale * this->m_goalPosTolSq;
  v7 = (float)(this->m_goalPos.v[0] - OwnerPosition->v[0]) * (float)(this->m_goalPos.v[0] - OwnerPosition->v[0]);
  result = v6 >= (float)((float)(v5 * v5) + v7);
  if ( !v3 && v6 < (float)((float)(v5 * v5) + v7) )
  {
    Owner = BgVehiclePhysicsComponent::GetOwner(this);
    v10 = Owner->m_transform.m[0].v[0];
    v11 = Owner->m_transform.m[0].v[1];
    v12 = Owner->m_transform.m[0].v[2];
    v13 = BgVehiclePhysicsComponent::GetOwnerPosition(this);
    v14 = this->m_goalPos.v[0] - v13->v[0];
    v16 = LODWORD(this->m_goalPos.v[1]);
    v15 = this->m_goalPos.v[1] - v13->v[1];
    v17 = this->m_goalPos.v[2] - v13->v[2];
    *(float *)&v16 = fsqrt((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v17 * v17));
    _XMM4 = v16;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    return (float)((float)((float)((float)(v14 * (float)(1.0 / *(float *)&_XMM0)) * v10) + (float)((float)(v15 * (float)(1.0 / *(float *)&_XMM0)) * v11)) + (float)((float)(v17 * (float)(1.0 / *(float *)&_XMM0)) * v12)) < 0.0;
  }
  return result;
}

/*
==============
BgVehicleComponentPathFinder::Notification
==============
*/
void BgVehicleComponentPathFinder::Notification(BgVehicleComponentPathFinder *this, __int16 nodeIdx, scr_string_t str)
{
  unsigned int v5; 
  unsigned __int16 m_originalPathNumNodes; 
  float v7; 
  int m_entityNumber; 
  scrContext_t *v9; 
  LocalClientNum_t v10; 
  unsigned int *m_notifiedNodeBits; 
  __int64 localClientNum; 

  if ( nodeIdx == 14 )
  {
    v5 = 14;
  }
  else
  {
    v5 = nodeIdx;
    if ( Com_BitCheckAssert(this->m_notifiedNodeBits, nodeIdx, 4) )
      return;
  }
  m_originalPathNumNodes = this->m_originalPathNumNodes;
  if ( m_originalPathNumNodes <= 1u )
    v7 = FLOAT_1_0;
  else
    v7 = (float)this->m_overallCurNode / (float)(m_originalPathNumNodes - 1);
  m_entityNumber = BgVehiclePhysicsComponent::GetOwner(this)->m_entityNumber;
  BgVehiclePhysicsComponent::GetOwner(this);
  v9 = ScriptContext_Server();
  Scr_AddInt(v9, this->m_overallCurNode);
  Scr_AddFloat(v9, v7);
  v10 = this->m_vehicleSystem->GetLocalClientNum(this->m_vehicleSystem);
  Scr_NotifyNum(v9, m_entityNumber, ENTITY_CLASS_GENTITY, str, 2u, v10);
  m_notifiedNodeBits = this->m_notifiedNodeBits;
  if ( !m_notifiedNodeBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  if ( v5 >= 0x20 )
  {
    LODWORD(localClientNum) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", localClientNum, 32) )
      __debugbreak();
  }
  m_notifiedNodeBits[(__int64)(int)v5 >> 5] |= 1 << (v5 & 0x1F);
}

/*
==============
BgVehicleComponentPathFollowerCP::PathDistanceToGoal
==============
*/
float BgVehicleComponentPathFollowerCP::PathDistanceToGoal(BgVehicleComponentPathFollowerCP *this)
{
  const BSplineCatmullRom *v3; 
  vec3_t v4; 
  vec3_t outPos; 

  if ( this->m_pathType != PATH_CATMULLROM )
    return 0.0;
  if ( !BG_BSpline_Data_IsValid(this->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
    __debugbreak();
  v3 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(this->m_path.m_catmullRom.splineIndex, NULL);
  BG_BSpline_CatmullRom_Evaluate(v3, this->m_path.m_vpp.speedOverride, &outPos, NULL, NULL, NULL);
  BG_BSpline_CatmullRom_Evaluate(v3, this->m_path.m_vpp.lookAhead, &v4, NULL, NULL, NULL);
  return (float)((float)((float)(v4.v[1] - outPos.v[1]) * (float)(v4.v[1] - outPos.v[1])) + (float)((float)(v4.v[0] - outPos.v[0]) * (float)(v4.v[0] - outPos.v[0]))) + (float)((float)(v4.v[2] - outPos.v[2]) * (float)(v4.v[2] - outPos.v[2]));
}

/*
==============
BgVehicleComponentPathFollower::PathIsEnd
==============
*/
bool BgVehicleComponentPathFollower::PathIsEnd(BgVehicleComponentPathFollower *this)
{
  __int32 v2; 
  const BSplineCatmullRom *v4; 
  double v5; 

  v2 = this->m_pathType - 1;
  if ( !v2 )
    return this->m_vehicleSystem->PathIsEnd(this->m_vehicleSystem, (VehiclePathPos *)&this->m_path);
  if ( v2 != 1 )
    return 0;
  if ( !BG_BSpline_Data_IsValid(this->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
    __debugbreak();
  v4 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(this->m_path.m_catmullRom.splineIndex, NULL);
  v5 = BG_BSpline_CatmullRom_EvalDuration(v4);
  return *(float *)&v5 <= this->m_path.m_vpp.speedOverride;
}

/*
==============
BgVehicleComponentPathFollowerCP::PathStep
==============
*/
void BgVehicleComponentPathFollowerCP::PathStep(BgVehicleComponentPathFollowerCP *this, float deltaTime, float timeScale0, float timeScale1)
{
  __int32 v5; 
  float speedOverride; 
  double ResumeFactor; 
  unsigned int *p_curNodeIndex; 
  unsigned int curNodeIndex; 
  const BSplineCatmullRom *v10; 
  BGVehicles *m_vehicleSystem; 
  void (__fastcall *PathUpdatePos)(BGVehicles *, const int, const float, const float, VehiclePathPos *, float *, vec3_t *, vec3_t *); 
  __int64 m_entityNumber; 
  vec3_t optOutDeriv; 

  v5 = this->m_pathType - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( this->m_manualSpeedTarget < 0.0 || COERCE_FLOAT(LODWORD(this->m_manualSpeed) & _xmm) > 0.001 )
      {
        ResumeFactor = BgVehicleComponentPathFollowerCP::GetResumeFactor(this);
        speedOverride = (float)((float)(*(float *)&ResumeFactor * deltaTime) * timeScale0) + this->m_path.m_vpp.speedOverride;
        this->m_path.m_vpp.lookAhead = (float)((float)(*(float *)&ResumeFactor * deltaTime) * timeScale1) + this->m_path.m_vpp.lookAhead;
        this->m_path.m_vpp.speedOverride = speedOverride;
      }
      else
      {
        speedOverride = this->m_path.m_vpp.speedOverride;
      }
      p_curNodeIndex = &this->m_path.m_catmullRom.curNodeIndex;
      curNodeIndex = this->m_path.m_catmullRom.curNodeIndex;
      if ( !BG_BSpline_Data_IsValid(this->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
        __debugbreak();
      v10 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(this->m_path.m_catmullRom.splineIndex, NULL);
      BG_BSpline_CatmullRom_Evaluate(v10, speedOverride, &this->m_pathPosInterpolated, &optOutDeriv, &this->m_path.m_catmullRom.curNodeIndex, &this->m_path.m_vpp.speed);
      vectoangles(&optOutDeriv, &this->m_pathAnglesInterpolated);
      if ( *p_curNodeIndex != curNodeIndex )
        BgVehicleComponentPathFollower::TriggerNodeNotification(this, *p_curNodeIndex);
    }
  }
  else
  {
    m_vehicleSystem = this->m_vehicleSystem;
    PathUpdatePos = m_vehicleSystem->PathUpdatePos;
    m_entityNumber = (unsigned int)BgVehiclePhysicsComponent::GetOwner(this)->m_entityNumber;
    ((void (__fastcall *)(BGVehicles *, __int64))PathUpdatePos)(m_vehicleSystem, m_entityNumber);
  }
}

/*
==============
BgVehicleComponentPathFollowerSP::PathStep
==============
*/
void BgVehicleComponentPathFollowerSP::PathStep(BgVehicleComponentPathFollowerSP *this, float deltaTime)
{
  __int32 v4; 
  unsigned int splineIndex; 
  unsigned int *p_curNodeIndex; 
  unsigned int curNodeIndex; 
  float v11; 
  const BSplineCatmullRom *v12; 
  BGVehicles *m_vehicleSystem; 
  void (__fastcall *PathUpdatePos)(BGVehicles *, const int, const float, const float, VehiclePathPos *, float *, vec3_t *, vec3_t *); 
  __int64 m_entityNumber; 
  vec3_t optOutDeriv; 

  v4 = this->m_pathType - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      _XMM2 = LODWORD(FLOAT_1_0);
      if ( this->m_manualSpeedTarget >= 0.0 )
      {
        _XMM0 = LODWORD(this->m_manualSpeed) & (unsigned __int128)_xmm;
        __asm
        {
          vcmpltss xmm1, xmm0, cs:__real@3a83126f
          vblendvps xmm2, xmm2, xmm3, xmm1
        }
      }
      splineIndex = this->m_path.m_catmullRom.splineIndex;
      p_curNodeIndex = &this->m_path.m_catmullRom.curNodeIndex;
      curNodeIndex = this->m_path.m_catmullRom.curNodeIndex;
      v11 = (float)(deltaTime * *(float *)&_XMM2) + this->m_path.m_vpp.speedOverride;
      this->m_path.m_vpp.speedOverride = v11;
      if ( !BG_BSpline_Data_IsValid(splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
        __debugbreak();
      v12 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(this->m_path.m_catmullRom.splineIndex, NULL);
      BG_BSpline_CatmullRom_Evaluate(v12, v11, &this->m_pathPosInterpolated, &optOutDeriv, &this->m_path.m_catmullRom.curNodeIndex, &this->m_path.m_vpp.speed);
      vectoangles(&optOutDeriv, &this->m_pathAnglesInterpolated);
      if ( *p_curNodeIndex != curNodeIndex )
        BgVehicleComponentPathFollower::TriggerNodeNotification(this, *p_curNodeIndex);
    }
  }
  else
  {
    m_vehicleSystem = this->m_vehicleSystem;
    PathUpdatePos = m_vehicleSystem->PathUpdatePos;
    m_entityNumber = (unsigned int)BgVehiclePhysicsComponent::GetOwner(this)->m_entityNumber;
    ((void (__fastcall *)(BGVehicles *, __int64))PathUpdatePos)(m_vehicleSystem, m_entityNumber);
  }
}

/*
==============
BgVehicleComponentPathFollowerCP::PostStep
==============
*/
void BgVehicleComponentPathFollowerCP::PostStep(BgVehicleComponentPathFollowerCP *this, float deltaTime)
{
  BgVehiclePhysics *Owner; 
  const dvar_t *v5; 
  vec3_t *p_m_pathPosInterpolated; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  const dvar_t *v13; 
  float m_timeSinceLastCollisionBody; 
  float value; 
  float v16; 
  float v17; 
  const BSplineCatmullRom *v19; 
  __int128 v20; 
  const dvar_t *v21; 
  const dvar_t *v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float speedOverride; 
  double ResumeFactor; 
  unsigned int *p_curNodeIndex; 
  unsigned int curNodeIndex; 
  const BSplineCatmullRom *v32; 
  BGVehicles *m_vehicleSystem; 
  void (__fastcall *PathUpdatePos)(BGVehicles *, const int, const float, const float, VehiclePathPos *, float *, vec3_t *, vec3_t *); 
  __int64 v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v43; 
  float v45; 
  float v46; 
  float v49; 
  float v50; 
  float v51; 
  double Float_Internal_DebugName; 
  float v53; 
  __int128 v57; 
  __int128 v60; 
  __int128 v62; 
  __int128 v64; 
  float v65; 
  float v67; 
  const dvar_t *v68; 
  float v69; 
  float v70; 
  const dvar_t *v71; 
  const dvar_t *v72; 
  float v73; 
  const dvar_t *v74; 
  float v75; 
  double v76; 
  float v77; 
  double v78; 
  float v79; 
  double v80; 
  float v81; 
  double v82; 
  float v83; 
  double v84; 
  float v85; 
  double v86; 
  float v87; 
  float v88; 
  int m_entityNumber; 
  scrContext_t *v90; 
  LocalClientNum_t v91; 
  const dvar_t *v92; 
  float v93; 
  vec3_t relativePoint; 
  vec3_t outPos; 
  vec3_t v96; 
  vec3_t velLs; 
  vec3_t outVelLs; 
  vec3_t v99; 
  vec3_t outVelWs; 
  vec3_t angles; 

  v93 = FLOAT_20_0;
  if ( deltaTime > 0.0 )
  {
    Owner = BgVehiclePhysicsComponent::GetOwner(this);
    BgVehicleComponentPathFollower::UpdateSteeringAngle(this);
    if ( this->m_pauseTime < 0.0 )
    {
      v5 = DCONST_DVARMPFLT_bg_pathFollowerMaxVertSpeed;
      if ( !DCONST_DVARMPFLT_bg_pathFollowerMaxVertSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMaxVertSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      p_m_pathPosInterpolated = &this->m_pathPosInterpolated;
      v7 = FLOAT_1_0;
      v8 = this->m_pathPosInterpolated.v[0] - Owner->m_transform.m[3].v[0];
      v9 = this->m_pathPosInterpolated.v[1] - Owner->m_transform.m[3].v[1];
      v10 = (float)(v9 * v9) + (float)(v8 * v8);
      v11 = FLOAT_1_0;
      v12 = FLOAT_1_0;
      if ( this->m_pathType == PATH_CATMULLROM )
      {
        v13 = DCONST_DVARMPFLT_bg_pathFollowerTimeAfterColl;
        m_timeSinceLastCollisionBody = Owner->m_timeSinceLastCollisionBody;
        if ( !DCONST_DVARMPFLT_bg_pathFollowerTimeAfterColl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerTimeAfterColl") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v13);
        value = v13->current.value;
        if ( Physics_IsRigidBodyValid(Owner->m_worldId, Owner->m_lastColliderBodyId) )
        {
          if ( v10 <= 2.0 )
          {
            v16 = (float)(Owner->m_lastCollisionPosLs.v[1] * Owner->m_transform.m[0].v[1]) + (float)(Owner->m_lastCollisionPosLs.v[0] * Owner->m_transform.m[0].v[0]);
            if ( v16 < 0.0 || v16 >= 0.69999999 )
            {
              v11 = FLOAT_0_1;
              v12 = FLOAT_0_30000001;
            }
            else
            {
              v11 = FLOAT_0_2;
              v12 = FLOAT_0_60000002;
            }
            if ( m_timeSinceLastCollisionBody >= value )
            {
              v17 = m_timeSinceLastCollisionBody - value;
              I_fclamp(v17 + v11, 0.0, 1.0);
              v11 = v17 + v11;
              I_fclamp(v17 + v12, 0.0, 1.0);
              v12 = v17 + v12;
              v93 = 0.0;
            }
          }
          else
          {
            v12 = FLOAT_0_2;
            v11 = 0.0;
          }
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - v11) & _xmm) < 0.001 )
          this->m_path.m_vpp.lookAhead = this->m_path.m_vpp.speedOverride;
      }
      if ( this->m_pathType == PATH_CATMULLROM )
      {
        if ( !BG_BSpline_Data_IsValid(this->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
          __debugbreak();
        v19 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(this->m_path.m_catmullRom.splineIndex, NULL);
        BG_BSpline_CatmullRom_Evaluate(v19, this->m_path.m_vpp.speedOverride, &outPos, NULL, NULL, NULL);
        BG_BSpline_CatmullRom_Evaluate(v19, this->m_path.m_vpp.lookAhead, &v99, NULL, NULL, NULL);
        v20 = LODWORD(v99.v[1]);
        *(float *)&v20 = (float)((float)((float)(v99.v[1] - outPos.v[1]) * (float)(v99.v[1] - outPos.v[1])) + (float)((float)(v99.v[0] - outPos.v[0]) * (float)(v99.v[0] - outPos.v[0]))) + (float)((float)(v99.v[2] - outPos.v[2]) * (float)(v99.v[2] - outPos.v[2]));
        _XMM6 = v20;
      }
      else
      {
        _XMM6 = 0i64;
      }
      v21 = DCONST_DVARMPFLT_bg_pathFollowerDistToGoalToBlock;
      if ( !DCONST_DVARMPFLT_bg_pathFollowerDistToGoalToBlock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerDistToGoalToBlock") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      __asm { vmaxss  xmm1, xmm6, xmm13 }
      if ( *(float *)&_XMM1 >= (float)(v21->current.value * v21->current.value) )
        goto LABEL_86;
      v23 = DCONST_DVARMPFLT_bg_pathFollowerAirTimeToBlock;
      v24 = Owner[4].m_history.m_lastPosition.v[0];
      if ( !DCONST_DVARMPFLT_bg_pathFollowerAirTimeToBlock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerAirTimeToBlock") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      if ( v24 > v23->current.value )
      {
LABEL_86:
        if ( this->m_pathType == PATH_CATMULLROM )
        {
          m_entityNumber = BgVehiclePhysicsComponent::GetOwner(this)->m_entityNumber;
          BgVehiclePhysicsComponent::GetOwner(this);
          v90 = ScriptContext_Server();
          Scr_AddInt(v90, this->m_path.m_catmullRom.curNodeIndex);
          v91 = this->m_vehicleSystem->GetLocalClientNum(this->m_vehicleSystem);
          Scr_NotifyNum(v90, m_entityNumber, ENTITY_CLASS_GENTITY, scr_const.path_blocked, 1u, v91);
        }
        v92 = DCONST_DVARMPFLT_bg_pathFollowerPauseAfterBlocked;
        if ( !DCONST_DVARMPFLT_bg_pathFollowerPauseAfterBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerPauseAfterBlocked") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v92);
        BgVehicleComponentPathFollowerCP::StopOnEnd(this, deltaTime, v92->current.value);
      }
      else
      {
        if ( this->m_pathType == PATH_RADIANT )
        {
          v25 = this->m_path.m_vpp.origin.v[0];
          v26 = this->m_path.m_vpp.origin.v[1];
          v27 = this->m_path.m_vpp.origin.v[2];
        }
        else if ( this->m_pathType == PATH_CATMULLROM )
        {
          v25 = p_m_pathPosInterpolated->v[0];
          v26 = this->m_pathPosInterpolated.v[1];
          v27 = this->m_pathPosInterpolated.v[2];
        }
        else
        {
          v27 = v93;
          v25 = v93;
          v26 = v93;
        }
        AxisToAngles((const tmat33_t<vec3_t> *)&Owner->m_transform, &angles);
        BgVehicleComponentPathFollower::UpdateManualSpeed(this, deltaTime);
        if ( this->m_pathType == PATH_RADIANT )
        {
          m_vehicleSystem = this->m_vehicleSystem;
          PathUpdatePos = m_vehicleSystem->PathUpdatePos;
          v35 = (unsigned int)BgVehiclePhysicsComponent::GetOwner(this)->m_entityNumber;
          ((void (__fastcall *)(BGVehicles *, __int64))PathUpdatePos)(m_vehicleSystem, v35);
        }
        else if ( this->m_pathType == PATH_CATMULLROM )
        {
          if ( this->m_manualSpeedTarget < 0.0 || COERCE_FLOAT(LODWORD(this->m_manualSpeed) & _xmm) > 0.001 )
          {
            ResumeFactor = BgVehicleComponentPathFollowerCP::GetResumeFactor(this);
            speedOverride = (float)((float)(*(float *)&ResumeFactor * deltaTime) * v11) + this->m_path.m_vpp.speedOverride;
            this->m_path.m_vpp.lookAhead = (float)((float)(*(float *)&ResumeFactor * deltaTime) * v12) + this->m_path.m_vpp.lookAhead;
            this->m_path.m_vpp.speedOverride = speedOverride;
          }
          else
          {
            speedOverride = this->m_path.m_vpp.speedOverride;
          }
          p_curNodeIndex = &this->m_path.m_catmullRom.curNodeIndex;
          curNodeIndex = this->m_path.m_catmullRom.curNodeIndex;
          if ( !BG_BSpline_Data_IsValid(this->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
            __debugbreak();
          v32 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(this->m_path.m_catmullRom.splineIndex, NULL);
          BG_BSpline_CatmullRom_Evaluate(v32, speedOverride, &this->m_pathPosInterpolated, &outPos, &this->m_path.m_catmullRom.curNodeIndex, &this->m_path.m_vpp.speed);
          vectoangles(&outPos, &this->m_pathAnglesInterpolated);
          if ( *p_curNodeIndex != curNodeIndex )
            BgVehicleComponentPathFollower::TriggerNodeNotification(this, *p_curNodeIndex);
        }
        if ( BgVehicleComponentPathFollower::PathIsEnd(this) )
        {
          BgVehiclePhysicsComponent::ScrNotify(this, scr_const.reached_end_node);
          if ( this->m_stopOnEnd )
          {
            BgVehicleComponentPathFollowerCP::StopOnEnd(this, deltaTime, 3.4028235e38);
            return;
          }
          BgVehicleComponentPathFollowerCP::RestartPath(this, 1);
        }
        v36 = Owner->m_transform.m[3].v[2];
        v37 = this->m_pathPosInterpolated.v[1] - Owner->m_transform.m[3].v[1];
        v38 = this->m_pathPosInterpolated.v[2];
        relativePoint.v[0] = (float)(p_m_pathPosInterpolated->v[0] - Owner->m_transform.m[3].v[0]) * (float)(1.0 / deltaTime);
        relativePoint.v[1] = v37 * (float)(1.0 / deltaTime);
        relativePoint.v[2] = (float)(v38 - v36) * (float)(1.0 / deltaTime);
        ProjectPointOnPlane(&relativePoint, &identityMatrix33.m[2], &relativePoint);
        BgVehiclePhysics::ComputeVelocityLocalSpace(Owner, &Owner->m_linearVelocityWs, &outVelLs);
        BgVehiclePhysics::ComputeVelocityLocalSpace(Owner, &relativePoint, &velLs);
        _XMM0 = LODWORD(velLs.v[0]);
        v39 = velLs.v[0] - outVelLs.v[0];
        v40 = velLs.v[1] - outVelLs.v[1];
        *(double *)&_XMM0 = BgVehicleComponentPathFollowerCP::GetResumeFactor(this);
        v41 = *(float *)&_XMM0;
        *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(Owner);
        v43 = v41 * *(float *)&_XMM0;
        if ( (float)(v41 * *(float *)&_XMM0) < 0.0 )
        {
          __asm { vxorpd  xmm0, xmm0, xmm0 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 24, ASSERT_TYPE_ASSERT, "( maxLength ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "maxLength", "0.0f", v43, *(double *)&_XMM0) )
            __debugbreak();
        }
        v45 = (float)(v39 * v39) + (float)(v40 * v40);
        if ( v45 > (float)(v43 * v43) )
        {
          v46 = v43 / fsqrt(v45);
          v39 = v39 * v46;
          v40 = v46 * v40;
        }
        velLs.v[0] = v39 + outVelLs.v[0];
        _XMM1 = LODWORD(outVelLs.v[2]);
        __asm { vminss  xmm2, xmm1, dword ptr [rsp+1C0h+var_170+4] }
        velLs.v[2] = *(float *)&_XMM2;
        velLs.v[1] = v40 + outVelLs.v[1];
        BgVehiclePhysics::ComputeVelocityWorldSpace(Owner, &velLs, &relativePoint);
        v49 = v25 - p_m_pathPosInterpolated->v[0];
        v50 = v26 - this->m_pathPosInterpolated.v[1];
        v51 = v27 - this->m_pathPosInterpolated.v[2];
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_pathFollowerMinLookaheadDist, "bg_pathFollowerMinLookaheadDist");
        if ( (float)((float)((float)(v50 * v50) + (float)(v49 * v49)) + (float)(v51 * v51)) >= (float)(*(float *)&Float_Internal_DebugName * *(float *)&Float_Internal_DebugName) )
          v53 = this->m_pathAnglesInterpolated.v[1];
        else
          v53 = angles.v[1];
        _XMM1 = 0i64;
        __asm { vroundss xmm3, xmm1, xmm2, 1 }
        this->m_destYawVel = (float)((float)((float)((float)(v53 - angles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 6.2831855) * (float)(1.0 / deltaTime);
        BgVehiclePhysics::ComputeVelocityLocalSpace(Owner, &Owner->m_angularVelocityWs, &v96);
        v57 = LODWORD(FLOAT_1_0);
        *(float *)&v57 = 1.0 - (float)(deltaTime * rollDamp);
        _XMM1 = v57;
        __asm { vmaxss  xmm2, xmm1, xmm9 }
        v96.v[0] = *(float *)&_XMM2 * v96.v[0];
        v60 = LODWORD(FLOAT_1_0);
        *(float *)&v60 = 1.0 - (float)(deltaTime * v93);
        _XMM0 = v60;
        __asm { vmaxss  xmm1, xmm0, xmm9 }
        v96.v[1] = *(float *)&_XMM1 * v96.v[1];
        *(double *)&_XMM0 = BgVehicleComponentPathFollowerCP::GetResumeFactor(this);
        *(float *)&_XMM1 = this->m_yawVel;
        v96.v[1] = *(float *)&_XMM0 * v96.v[1];
        v96.v[0] = *(float *)&_XMM0 * v96.v[0];
        v96.v[2] = *(float *)&_XMM1;
        BgVehiclePhysics::ComputeVelocityWorldSpace(Owner, &v96, &outVelWs);
        *(float *)&v60 = (float)((float)(velLs.v[1] * velLs.v[1]) + (float)(velLs.v[0] * velLs.v[0])) + (float)(velLs.v[2] * velLs.v[2]);
        *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(Owner);
        *(float *)&_XMM1 = *(float *)&_XMM0 * *(float *)&_XMM0;
        v62 = LODWORD(relativePoint.v[0]);
        this->m_maxSpeedReached = *(float *)&v60 >= *(float *)&_XMM1;
        v64 = v62;
        *(float *)&v64 = *(float *)&v62 - this->m_previousLinearVelocityWs.v[0];
        _XMM7 = v64;
        v99.v[2] = relativePoint.v[2] - this->m_previousLinearVelocityWs.v[2];
        *(double *)&v62 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerAccelAngularVelMult, "bg_pathFollowerAccelAngularVelMult");
        v65 = v99.v[2];
        __asm { vunpcklps xmm6, xmm7, xmm6 }
        outPos.v[2] = v99.v[2];
        *(double *)outPos.v = *(double *)&_XMM6;
        BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration(this, Owner, &outPos, deltaTime, *(float *)&v62, &outVelWs);
        *(double *)&v62 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerVelAngularVelMult, "bg_pathFollowerVelAngularVelMult");
        outPos = relativePoint;
        BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration(this, Owner, &outPos, deltaTime, *(float *)&v62, &outVelWs);
        BgVehiclePhysics::SetLinearVelocity(Owner, &relativePoint, 0);
        BgVehiclePhysics::SetAngularVelocity(Owner, &outVelWs, 0);
        v67 = relativePoint.v[2];
        *(double *)this->m_previousLinearVelocityWs.v = *(double *)relativePoint.v;
        *(double *)this->m_previousLinearAccelerationWs.v = *(double *)&_XMM6;
        this->m_previousLinearVelocityWs.v[2] = v67;
        this->m_previousLinearAccelerationWs.v[2] = v65;
        *(double *)&v62 = I_fclamp((float)((float)(0.0 * Owner->m_transform.m[2].v[1]) + (float)(0.0 * Owner->m_transform.m[2].v[0])) + (float)(1.0 * Owner->m_transform.m[2].v[2]), 0.0, 1.0);
        v68 = DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed;
        v69 = (float)(1.0 - (float)(*(float *)&v62 * *(float *)&v62)) * 1.5;
        if ( !DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMaxYawAccelSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v68);
        v70 = v68->current.value;
        v71 = DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed;
        if ( !DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinYawAccelSpeed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v71);
        if ( v70 <= v71->current.value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 1318, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed, \"bg_pathFollowerMaxYawAccelSpeed\" ) > Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed, \"bg_pathFollowerMinYawAccelSpeed\" ))", (const char *)&queryFormat, "Dconst_GetFloat( bg_pathFollowerMaxYawAccelSpeed ) > Dconst_GetFloat( bg_pathFollowerMinYawAccelSpeed )") )
          __debugbreak();
        v72 = DCONST_DVARFLT_bg_pathFollowerMaxYawAccel;
        if ( !DCONST_DVARFLT_bg_pathFollowerMaxYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMaxYawAccel") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v72);
        v73 = v72->current.value;
        v74 = DCONST_DVARFLT_bg_pathFollowerMinYawAccel;
        if ( !DCONST_DVARFLT_bg_pathFollowerMinYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinYawAccel") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v74);
        if ( v73 <= v74->current.value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 1319, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_pathFollowerMaxYawAccel, \"bg_pathFollowerMaxYawAccel\" ) > Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_pathFollowerMinYawAccel, \"bg_pathFollowerMinYawAccel\" ))", (const char *)&queryFormat, "Dconst_GetFloat( bg_pathFollowerMaxYawAccel ) > Dconst_GetFloat( bg_pathFollowerMinYawAccel )") )
          __debugbreak();
        v75 = fsqrt((float)((float)(relativePoint.v[1] * relativePoint.v[1]) + (float)(relativePoint.v[0] * relativePoint.v[0])) + (float)(relativePoint.v[2] * relativePoint.v[2]));
        v76 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed, "bg_pathFollowerMinYawAccelSpeed");
        v77 = v75 - *(float *)&v76;
        v78 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed, "bg_pathFollowerMaxYawAccelSpeed");
        v79 = *(float *)&v78;
        v80 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed, "bg_pathFollowerMinYawAccelSpeed");
        v81 = v79 - *(float *)&v80;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v79 - *(float *)&v80) & _xmm) > 0.001 )
        {
          I_fclamp(v77 / v81, 0.0, 1.0);
          v7 = v77 / v81;
        }
        v82 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerMaxYawAccel, "bg_pathFollowerMaxYawAccel");
        v83 = *(float *)&v82;
        v84 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerMinYawAccel, "bg_pathFollowerMinYawAccel");
        v85 = (float)(v83 - *(float *)&v84) * v7;
        v86 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerMinYawAccel, "bg_pathFollowerMinYawAccel");
        v87 = *(float *)&v86 + v85;
        v88 = this->m_destYawVel - this->m_yawVel;
        this->m_yawAccel = v87;
        this->m_yawVel = (float)(v88 * deltaTime) * (float)(v69 + v87);
      }
    }
  }
}

/*
==============
BgVehicleComponentPathFollowerSP::PostStep
==============
*/
void BgVehicleComponentPathFollowerSP::PostStep(BgVehicleComponentPathFollowerSP *this, float deltaTime)
{
  BgVehiclePhysics *Owner; 
  BgVehiclePhysics *v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  unsigned int splineIndex; 
  unsigned int *p_curNodeIndex; 
  unsigned int curNodeIndex; 
  float v16; 
  const BSplineCatmullRom *v17; 
  BGVehicles *m_vehicleSystem; 
  void (__fastcall *PathUpdatePos)(BGVehicles *, const int, const float, const float, VehiclePathPos *, float *, vec3_t *, vec3_t *); 
  __int64 m_entityNumber; 
  float v21; 
  float v22; 
  float v23; 
  double Float_Internal_DebugName; 
  float v27; 
  float v28; 
  float v29; 
  const dvar_t *v32; 
  float v33; 
  __int128 v37; 
  const dvar_t *v39; 
  float value; 
  double v41; 
  float v42; 
  const dvar_t *v43; 
  float v44; 
  double v45; 
  const dvar_t *v46; 
  float v47; 
  float v48; 
  const dvar_t *v49; 
  const dvar_t *v50; 
  float v51; 
  const dvar_t *v52; 
  const dvar_t *v53; 
  float v54; 
  float v55; 
  const dvar_t *v56; 
  float v57; 
  const dvar_t *v58; 
  float v59; 
  const dvar_t *v60; 
  float v61; 
  const dvar_t *v62; 
  float v63; 
  const dvar_t *v64; 
  float v65; 
  float v66; 
  float v67; 
  vec3_t relativePoint; 
  vec3_t optOutDeriv; 
  vec3_t outVelWs; 
  vec3_t velLs; 
  vec3_t v72; 
  vec3_t angVel; 
  vec3_t outVelLs; 
  float v75; 
  vec3_t v76; 
  vec3_t angles; 

  if ( deltaTime > 0.0 )
  {
    Owner = BgVehiclePhysicsComponent::GetOwner(this);
    v5 = Owner;
    if ( this->m_pauseTime < 0.0 )
    {
      if ( Physics_IsRigidBodyValid(Owner->m_worldId, Owner->m_lastColliderBodyId) && Physics_IsRigidBodyDynamic(v5->m_worldId, v5->m_lastColliderBodyId) && timeToLeavePhysicsReact > v5->m_timeSinceLastCollisionBody )
      {
        *(double *)this->m_pathPosInterpolated.v = *(double *)v5->m_transform.row3.v;
        this->m_pathPosInterpolated.v[2] = v5->m_transform.m[3].v[2];
        return;
      }
      if ( this->m_pathType == PATH_RADIANT )
      {
        v6 = this->m_path.m_vpp.origin.v[0];
        v7 = this->m_path.m_vpp.origin.v[1];
        v8 = this->m_path.m_vpp.origin.v[2];
      }
      else if ( this->m_pathType == PATH_CATMULLROM )
      {
        v6 = this->m_pathPosInterpolated.v[0];
        v7 = this->m_pathPosInterpolated.v[1];
        v8 = this->m_pathPosInterpolated.v[2];
      }
      else
      {
        v6 = v67;
        v8 = v67;
        v7 = v67;
      }
      AxisToAngles((const tmat33_t<vec3_t> *)&v5->m_transform, &angles);
      BgVehicleComponentPathFollower::UpdateManualSpeed(this, deltaTime);
      v9 = FLOAT_1_0;
      if ( this->m_pathType == PATH_RADIANT )
      {
        m_vehicleSystem = this->m_vehicleSystem;
        PathUpdatePos = m_vehicleSystem->PathUpdatePos;
        m_entityNumber = (unsigned int)BgVehiclePhysicsComponent::GetOwner(this)->m_entityNumber;
        ((void (__fastcall *)(BGVehicles *, __int64))PathUpdatePos)(m_vehicleSystem, m_entityNumber);
      }
      else if ( this->m_pathType == PATH_CATMULLROM )
      {
        _XMM2 = LODWORD(FLOAT_1_0);
        if ( this->m_manualSpeedTarget >= 0.0 )
        {
          _XMM0 = LODWORD(this->m_manualSpeed) & (unsigned __int128)_xmm;
          __asm
          {
            vcmpltss xmm1, xmm0, cs:__real@3a83126f
            vblendvps xmm2, xmm2, xmm8, xmm1
          }
        }
        splineIndex = this->m_path.m_catmullRom.splineIndex;
        p_curNodeIndex = &this->m_path.m_catmullRom.curNodeIndex;
        curNodeIndex = this->m_path.m_catmullRom.curNodeIndex;
        v16 = (float)(deltaTime * *(float *)&_XMM2) + this->m_path.m_vpp.speedOverride;
        this->m_path.m_vpp.speedOverride = v16;
        if ( !BG_BSpline_Data_IsValid(splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
          __debugbreak();
        v17 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(this->m_path.m_catmullRom.splineIndex, NULL);
        BG_BSpline_CatmullRom_Evaluate(v17, v16, &this->m_pathPosInterpolated, &optOutDeriv, &this->m_path.m_catmullRom.curNodeIndex, &this->m_path.m_vpp.speed);
        vectoangles(&optOutDeriv, &this->m_pathAnglesInterpolated);
        if ( *p_curNodeIndex != curNodeIndex )
          BgVehicleComponentPathFollower::TriggerNodeNotification(this, *p_curNodeIndex);
      }
      v21 = this->m_pathPosInterpolated.v[0] - v6;
      v22 = this->m_pathPosInterpolated.v[2] - v8;
      v23 = this->m_pathPosInterpolated.v[1] - v7;
      if ( BgVehicleComponentPathFollower::PathIsEnd(this) )
      {
        BgVehiclePhysicsComponent::ScrNotify(this, scr_const.reached_end_node);
        if ( this->m_stopOnEnd )
        {
          outVelWs.v[0] = 0.0;
          outVelWs.v[1] = 0.0;
          outVelWs.v[2] = 0.0;
          BgVehiclePhysics::ComputeVelocityLocalSpace(v5, &v5->m_angularVelocityWs, &outVelLs);
          BgVehiclePhysics::ComputeVelocityWorldSpace(v5, &outVelLs, &outVelWs);
          _XMM7 = LODWORD(this->m_previousLinearVelocityWs.v[0]) ^ (unsigned __int128)(unsigned int)_xmm;
          LODWORD(v75) = LODWORD(this->m_previousLinearVelocityWs.v[2]) ^ _xmm;
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerAccelAngularVelMult, "bg_pathFollowerAccelAngularVelMult");
          optOutDeriv.v[2] = v75;
          __asm { vunpcklps xmm1, xmm7, xmm6 }
          *(double *)optOutDeriv.v = *(double *)&_XMM1;
          BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration(this, v5, &optOutDeriv, deltaTime, *(float *)&Float_Internal_DebugName, &outVelWs);
          optOutDeriv.v[0] = 0.0;
          optOutDeriv.v[1] = 0.0;
          optOutDeriv.v[2] = 0.0;
          BgVehiclePhysics::SetLinearVelocity(v5, &optOutDeriv, 0);
          BgVehiclePhysics::SetAngularVelocity(v5, &outVelWs, 0);
          BgVehiclePhysicsComponent::SetPause(this, 3.4028235e38);
          return;
        }
        BgVehicleComponentPathFollowerSP::RestartPath(this);
      }
      v27 = v5->m_transform.m[3].v[2];
      v28 = this->m_pathPosInterpolated.v[1] - v5->m_transform.m[3].v[1];
      v29 = this->m_pathPosInterpolated.v[2];
      relativePoint.v[0] = (float)(this->m_pathPosInterpolated.v[0] - v5->m_transform.m[3].v[0]) * (float)(1.0 / deltaTime);
      relativePoint.v[1] = v28 * (float)(1.0 / deltaTime);
      relativePoint.v[2] = (float)(v29 - v27) * (float)(1.0 / deltaTime);
      ProjectPointOnPlane(&relativePoint, &identityMatrix33.m[2], &relativePoint);
      BgVehiclePhysics::ComputeVelocityLocalSpace(v5, &v5->m_linearVelocityWs, &v76);
      BgVehiclePhysics::ComputeVelocityLocalSpace(v5, &relativePoint, &velLs);
      velLs.v[2] = v76.v[2];
      BgVehiclePhysics::ComputeVelocityWorldSpace(v5, &velLs, &relativePoint);
      _XMM0 = LODWORD(relativePoint.v[2]);
      __asm { vminss  xmm1, xmm0, cs:vertClip }
      v32 = DCONST_DVARMPFLT_bg_pathFollowerMinLookaheadDist;
      relativePoint.v[2] = *(float *)&_XMM1;
      if ( !DCONST_DVARMPFLT_bg_pathFollowerMinLookaheadDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinLookaheadDist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      if ( (float)((float)((float)(v23 * v23) + (float)(v21 * v21)) + (float)(v22 * v22)) >= (float)(v32->current.value * v32->current.value) )
        v33 = this->m_pathAnglesInterpolated.v[1];
      else
        v33 = angles.v[1];
      _XMM1 = 0i64;
      __asm { vroundss xmm3, xmm1, xmm2, 1 }
      this->m_destYawVel = (float)((float)((float)((float)(v33 - angles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 6.2831855) * (float)(1.0 / deltaTime);
      BgVehiclePhysics::ComputeVelocityLocalSpace(v5, &v5->m_angularVelocityWs, &v72);
      v72.v[2] = this->m_yawVel;
      v37 = LODWORD(FLOAT_1_0);
      *(float *)&v37 = 1.0 - (float)(deltaTime * facDamp);
      _XMM0 = v37;
      __asm { vmaxss  xmm2, xmm0, xmm8 }
      v72.v[0] = *(float *)&_XMM2 * v72.v[0];
      BgVehiclePhysics::ComputeVelocityWorldSpace(v5, &v72, &angVel);
      *(float *)&v37 = (float)((float)(velLs.v[0] * velLs.v[0]) + (float)(velLs.v[1] * velLs.v[1])) + (float)(velLs.v[2] * velLs.v[2]);
      *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(v5);
      *(float *)&_XMM2 = relativePoint.v[1];
      *(float *)&_XMM1 = *(float *)&_XMM0 * *(float *)&_XMM0;
      *(float *)&_XMM0 = relativePoint.v[0];
      this->m_maxSpeedReached = *(float *)&v37 >= *(float *)&_XMM1;
      *(float *)&_XMM1 = *(float *)&_XMM0 - this->m_previousLinearVelocityWs.v[0];
      *(float *)&_XMM0 = *(float *)&_XMM2 - this->m_previousLinearVelocityWs.v[1];
      v39 = DCONST_DVARFLT_bg_pathFollowerAccelAngularVelMult;
      outVelWs.v[0] = *(float *)&_XMM1;
      outVelWs.v[2] = relativePoint.v[2] - this->m_previousLinearVelocityWs.v[2];
      outVelWs.v[1] = *(float *)&_XMM0;
      if ( !DCONST_DVARFLT_bg_pathFollowerAccelAngularVelMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerAccelAngularVelMult") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      value = v39->current.value;
      v41 = *(double *)outVelWs.v;
      v42 = outVelWs.v[2];
      optOutDeriv = outVelWs;
      BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration(this, v5, &optOutDeriv, deltaTime, value, &angVel);
      v43 = DCONST_DVARFLT_bg_pathFollowerVelAngularVelMult;
      if ( !DCONST_DVARFLT_bg_pathFollowerVelAngularVelMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerVelAngularVelMult") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v43);
      optOutDeriv = relativePoint;
      BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration(this, v5, &optOutDeriv, deltaTime, v43->current.value, &angVel);
      BgVehiclePhysics::SetLinearVelocity(v5, &relativePoint, 0);
      BgVehiclePhysics::SetAngularVelocity(v5, &angVel, 0);
      v44 = relativePoint.v[2];
      *(double *)this->m_previousLinearVelocityWs.v = *(double *)relativePoint.v;
      *(double *)this->m_previousLinearAccelerationWs.v = v41;
      this->m_previousLinearVelocityWs.v[2] = v44;
      this->m_previousLinearAccelerationWs.v[2] = v42;
      BgVehicleComponentPathFollower::UpdateSteeringAngle(this);
      v45 = I_fclamp((float)((float)(0.0 * v5->m_transform.m[2].v[1]) + (float)(0.0 * v5->m_transform.m[2].v[0])) + (float)(1.0 * v5->m_transform.m[2].v[2]), 0.0, 1.0);
      v46 = DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed;
      v47 = (float)(1.0 - (float)(*(float *)&v45 * *(float *)&v45)) * 1.5;
      if ( !DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMaxYawAccelSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v46);
      v48 = v46->current.value;
      v49 = DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed;
      if ( !DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinYawAccelSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v49);
      if ( v48 <= v49->current.value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 1498, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed, \"bg_pathFollowerMaxYawAccelSpeed\" ) > Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed, \"bg_pathFollowerMinYawAccelSpeed\" ))", (const char *)&queryFormat, "Dconst_GetFloat( bg_pathFollowerMaxYawAccelSpeed ) > Dconst_GetFloat( bg_pathFollowerMinYawAccelSpeed )") )
        __debugbreak();
      v50 = DCONST_DVARFLT_bg_pathFollowerMaxYawAccel;
      if ( !DCONST_DVARFLT_bg_pathFollowerMaxYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMaxYawAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v50);
      v51 = v50->current.value;
      v52 = DCONST_DVARFLT_bg_pathFollowerMinYawAccel;
      if ( !DCONST_DVARFLT_bg_pathFollowerMinYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinYawAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v52);
      if ( v51 <= v52->current.value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 1499, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_pathFollowerMaxYawAccel, \"bg_pathFollowerMaxYawAccel\" ) > Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_pathFollowerMinYawAccel, \"bg_pathFollowerMinYawAccel\" ))", (const char *)&queryFormat, "Dconst_GetFloat( bg_pathFollowerMaxYawAccel ) > Dconst_GetFloat( bg_pathFollowerMinYawAccel )") )
        __debugbreak();
      v53 = DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed;
      v54 = fsqrt((float)((float)(relativePoint.v[1] * relativePoint.v[1]) + (float)(relativePoint.v[0] * relativePoint.v[0])) + (float)(relativePoint.v[2] * relativePoint.v[2]));
      if ( !DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinYawAccelSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v53);
      v55 = v54 - v53->current.value;
      v56 = DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed;
      if ( !DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMaxYawAccelSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v56);
      v57 = v56->current.value;
      v58 = DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed;
      if ( !DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinYawAccelSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v58);
      v59 = v57 - v58->current.value;
      if ( COERCE_FLOAT(LODWORD(v59) & _xmm) > 0.001 )
      {
        I_fclamp(v55 / v59, 0.0, 1.0);
        v9 = v55 / v59;
      }
      v60 = DCONST_DVARFLT_bg_pathFollowerMinYawAccel;
      if ( !DCONST_DVARFLT_bg_pathFollowerMinYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinYawAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v60);
      v61 = v60->current.value;
      v62 = DCONST_DVARFLT_bg_pathFollowerMaxYawAccel;
      if ( !DCONST_DVARFLT_bg_pathFollowerMaxYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMaxYawAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v62);
      v63 = v62->current.value;
      v64 = DCONST_DVARFLT_bg_pathFollowerMinYawAccel;
      if ( !DCONST_DVARFLT_bg_pathFollowerMinYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinYawAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v64);
      v65 = (float)((float)(v63 - v64->current.value) * v9) + v61;
      v66 = this->m_destYawVel - this->m_yawVel;
      this->m_yawAccel = v65;
      this->m_yawVel = (float)(v66 * deltaTime) * (float)(v65 + v47);
    }
  }
}

/*
==============
BgVehicleComponentGoStraightTo::Reset
==============
*/
void BgVehicleComponentGoStraightTo::Reset(BgVehicleComponentGoStraightTo *this)
{
  BgVehiclePhysics *Owner; 

  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  *(_QWORD *)Owner->m_controls.externalValues = 0i64;
  Owner->m_controls.externalValues[2] = 0.0;
  Owner->m_controls.externalEnabledBits[0] = 0;
  Owner->m_controls.playerEnabledBits[0] = -1;
  this->m_inputMults[0] = 1.0;
  this->m_inputMults[1] = 1.0;
  this->m_inputMults[2] = 1.0;
  this->m_inputMults[3] = 1.0;
  this->m_inputMults[4] = 1.0;
  this->m_inputMults[5] = 1.0;
  this->m_inputMults[6] = 1.0;
  this->m_inputMults[7] = 1.0;
  BgVehiclePhysicsComponent::Reset(this);
}

/*
==============
BgVehicleComponentPathFollower::Reset
==============
*/
void BgVehicleComponentPathFollower::Reset(BgVehicleComponentPathFollower *this)
{
  __int32 v2; 

  v2 = this->m_pathType - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      BG_BSpline_Data_Deallocate(this->m_path.m_catmullRom.splineIndex);
      this->m_path.m_catmullRom.splineIndex = BG_BSpline_Data_InvalidIndex();
      BgVehiclePhysicsComponent::Reset(this);
      return;
    }
  }
  else
  {
    this->m_vehicleSystem->PathReset(this->m_vehicleSystem, (VehiclePathPos *)&this->m_path);
  }
  BgVehiclePhysicsComponent::Reset(this);
}

/*
==============
BgVehicleComponentPathFollowerCP::Reset
==============
*/
void BgVehicleComponentPathFollowerCP::Reset(BgVehicleComponentPathFollowerCP *this)
{
  BgVehiclePhysics *Owner; 
  BgVehiclePhysicsGround *v3; 
  BGVehicles *m_vehicleSystem; 
  __int64 v5; 
  __int64 v6; 

  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  v3 = (BgVehiclePhysicsGround *)Owner;
  if ( Owner )
  {
    m_vehicleSystem = this->m_vehicleSystem;
    if ( m_vehicleSystem )
    {
      v5 = Owner->m_vehicleId - 1;
      if ( (int)v5 < 0 )
        v5 = 0i64;
      v6 = (__int64)m_vehicleSystem->PhysicsGetVehicleDef(m_vehicleSystem, v5);
      if ( v6 )
        BgVehiclePhysicsGround::SetFrictionBase(v3, *(float *)(v6 + 488));
    }
  }
  if ( this->m_pathType == PATH_RADIANT )
  {
    this->m_vehicleSystem->PathReset(this->m_vehicleSystem, (VehiclePathPos *)&this->m_path);
  }
  else if ( this->m_pathType == PATH_CATMULLROM )
  {
    BG_BSpline_Data_Deallocate(this->m_path.m_catmullRom.splineIndex);
    this->m_path.m_catmullRom.splineIndex = BG_BSpline_Data_InvalidIndex();
    BgVehiclePhysicsComponent::Reset(this);
    return;
  }
  BgVehiclePhysicsComponent::Reset(this);
}

/*
==============
BgVehicleComponentPathFollowerSP::Reset
==============
*/
void BgVehicleComponentPathFollowerSP::Reset(BgVehicleComponentPathFollowerSP *this)
{
  __int32 v2; 

  v2 = this->m_pathType - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      BG_BSpline_Data_Deallocate(this->m_path.m_catmullRom.splineIndex);
      this->m_path.m_catmullRom.splineIndex = BG_BSpline_Data_InvalidIndex();
      BgVehiclePhysicsComponent::Reset(this);
      return;
    }
  }
  else
  {
    this->m_vehicleSystem->PathReset(this->m_vehicleSystem, (VehiclePathPos *)&this->m_path);
  }
  BgVehiclePhysicsComponent::Reset(this);
}

/*
==============
BgVehicleComponentPathFollower::ResetPath
==============
*/
void BgVehicleComponentPathFollower::ResetPath(BgVehicleComponentPathFollower *this)
{
  if ( this->m_pathType == PATH_RADIANT )
  {
    this->m_vehicleSystem->PathReset(this->m_vehicleSystem, (VehiclePathPos *)&this->m_path);
  }
  else if ( this->m_pathType == PATH_CATMULLROM )
  {
    BG_BSpline_Data_Deallocate(this->m_path.m_catmullRom.splineIndex);
    this->m_path.m_catmullRom.splineIndex = BG_BSpline_Data_InvalidIndex();
  }
}

/*
==============
BgVehicleComponentPathFollowerCP::RestartPath
==============
*/
void BgVehicleComponentPathFollowerCP::RestartPath(BgVehicleComponentPathFollowerCP *this, bool warp)
{
  __int32 v4; 
  const BSplineCatmullRom *v5; 
  float v6; 
  BgVehiclePhysics *Owner; 
  float v8; 
  vec3_t outPos; 
  vec3_t outAngles; 

  v4 = this->m_pathType - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      *(_QWORD *)&this->m_path.m_catmullRom.t = 0i64;
      *(_QWORD *)&this->m_path.m_catmullRom.curNodeIndex = 0i64;
      BgVehicleComponentPathFollower::GetPathLookAhead(this, 0.0, &outPos, &outAngles);
      if ( !BG_BSpline_Data_IsValid(this->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
        __debugbreak();
      v5 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(this->m_path.m_catmullRom.splineIndex, NULL);
      BG_BSpline_CatmullRom_Evaluate(v5, 0.0, &outPos, NULL, NULL, NULL);
      v6 = outPos.v[1];
      this->m_pathPosInterpolated.v[0] = outPos.v[0];
      this->m_pathPosInterpolated.v[2] = outPos.v[2];
      this->m_pathPosInterpolated.v[1] = v6;
      *(_QWORD *)this->m_previousLinearVelocityWs.v = 0i64;
      *(_QWORD *)&this->m_previousLinearVelocityWs.z = 0i64;
      *(_QWORD *)&this->m_previousLinearAccelerationWs.y = 0i64;
      if ( warp )
      {
        Owner = BgVehiclePhysicsComponent::GetOwner(this);
        BgVehiclePhysics::SetKeyframeTransform(Owner, &outPos, &outAngles);
        v8 = outPos.v[2];
        *(double *)this->m_pathPosInterpolated.v = *(double *)outPos.v;
        this->m_pathPosInterpolated.v[2] = v8;
        *(_QWORD *)&this->m_yawVel = 0i64;
        *(_QWORD *)this->m_previousLinearVelocityWs.v = 0i64;
        *(_QWORD *)&this->m_previousLinearVelocityWs.z = 0i64;
        *(_QWORD *)&this->m_previousLinearAccelerationWs.y = 0i64;
      }
    }
  }
  else
  {
    BgVehicleComponentPathFollower::StartPath(this, this->m_startNode);
  }
}

/*
==============
BgVehicleComponentPathFollowerSP::RestartPath
==============
*/
void BgVehicleComponentPathFollowerSP::RestartPath(BgVehicleComponentPathFollowerSP *this)
{
  __int32 v2; 
  const BSplineCatmullRom *v3; 
  float v4; 
  BgVehiclePhysics *Owner; 
  float v6; 
  vec3_t outPos; 
  vec3_t outAngles; 

  v2 = this->m_pathType - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      *(_QWORD *)&this->m_path.m_catmullRom.nodet = 0i64;
      this->m_path.m_catmullRom.curNodeIndex = 0;
      BgVehicleComponentPathFollower::GetPathLookAhead(this, 0.0, &outPos, &outAngles);
      if ( !BG_BSpline_Data_IsValid(this->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
        __debugbreak();
      v3 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(this->m_path.m_catmullRom.splineIndex, NULL);
      BG_BSpline_CatmullRom_Evaluate(v3, 0.0, &outPos, NULL, NULL, NULL);
      v4 = outPos.v[1];
      this->m_pathPosInterpolated.v[0] = outPos.v[0];
      this->m_pathPosInterpolated.v[2] = outPos.v[2];
      this->m_pathPosInterpolated.v[1] = v4;
      *(_QWORD *)this->m_previousLinearVelocityWs.v = 0i64;
      *(_QWORD *)&this->m_previousLinearVelocityWs.z = 0i64;
      *(_QWORD *)&this->m_previousLinearAccelerationWs.y = 0i64;
      Owner = BgVehiclePhysicsComponent::GetOwner(this);
      BgVehiclePhysics::SetKeyframeTransform(Owner, &outPos, &outAngles);
      v6 = outPos.v[2];
      *(double *)this->m_pathPosInterpolated.v = *(double *)outPos.v;
      *(_QWORD *)&this->m_yawVel = 0i64;
      this->m_pathPosInterpolated.v[2] = v6;
      *(_QWORD *)this->m_previousLinearVelocityWs.v = 0i64;
      *(_QWORD *)&this->m_previousLinearVelocityWs.z = 0i64;
      *(_QWORD *)&this->m_previousLinearAccelerationWs.y = 0i64;
    }
  }
  else
  {
    BgVehicleComponentPathFollower::StartPath(this, this->m_startNode);
  }
}

/*
==============
BgVehicleComponentPathFollowerCP::ScrNotifyPathBlocked
==============
*/
void BgVehicleComponentPathFollowerCP::ScrNotifyPathBlocked(BgVehicleComponentPathFollowerCP *this)
{
  int m_entityNumber; 
  scrContext_t *v3; 
  LocalClientNum_t localClientNum; 

  if ( this->m_pathType == PATH_CATMULLROM )
  {
    m_entityNumber = BgVehiclePhysicsComponent::GetOwner(this)->m_entityNumber;
    BgVehiclePhysicsComponent::GetOwner(this);
    v3 = ScriptContext_Server();
    Scr_AddInt(v3, this->m_path.m_catmullRom.curNodeIndex);
    localClientNum = this->m_vehicleSystem->GetLocalClientNum(this->m_vehicleSystem);
    Scr_NotifyNum(v3, m_entityNumber, ENTITY_CLASS_GENTITY, scr_const.path_blocked, 1u, localClientNum);
  }
}

/*
==============
BgVehicleComponentPathFollower::SetAcceleration
==============
*/
void BgVehicleComponentPathFollower::SetAcceleration(BgVehicleComponentPathFollower *this, float accelMPHPerSec)
{
  this->m_manualAccel = accelMPHPerSec;
}

/*
==============
BgVehicleComponentPathFollower::SetDeceleration
==============
*/
void BgVehicleComponentPathFollower::SetDeceleration(BgVehicleComponentPathFollower *this, float decelMPHPerSec)
{
  this->m_manualDecel = decelMPHPerSec;
}

/*
==============
BgVehicleComponentGoStraightTo::SetEndOnGoal
==============
*/
void BgVehicleComponentGoStraightTo::SetEndOnGoal(BgVehicleComponentGoStraightTo *this, bool enabled)
{
  this->m_endOnGoal = enabled;
}

/*
==============
BgVehicleComponentGoStraightTo::SetNotifyOnGoal
==============
*/
void BgVehicleComponentGoStraightTo::SetNotifyOnGoal(BgVehicleComponentGoStraightTo *this, bool enabled)
{
  this->m_notifyOnGoal = enabled;
}

/*
==============
BgVehicleComponentPathFollower::SetSpeed
==============
*/
void BgVehicleComponentPathFollower::SetSpeed(BgVehicleComponentPathFollower *this, float speedInPerSec)
{
  BgVehiclePhysics *Owner; 

  this->m_manualSpeedTarget = speedInPerSec;
  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  this->m_manualSpeed = (float)((float)(Owner->m_transform.m[0].v[1] * Owner->m_linearVelocityWs.v[1]) + (float)(Owner->m_transform.m[0].v[0] * Owner->m_linearVelocityWs.v[0])) + (float)(Owner->m_transform.m[0].v[2] * Owner->m_linearVelocityWs.v[2]);
}

/*
==============
BgVehicleComponentPathFollower::SetSpeedImmediate
==============
*/
void BgVehicleComponentPathFollower::SetSpeedImmediate(BgVehicleComponentPathFollower *this, float speedInPerSec)
{
  this->m_manualSpeed = speedInPerSec;
  this->m_manualSpeedTarget = speedInPerSec;
  this->m_manualAccel = -1.0;
  this->m_manualDecel = -1.0;
}

/*
==============
BgVehicleComponentPathFollower::SetStopOnEnd
==============
*/
void BgVehicleComponentPathFollower::SetStopOnEnd(BgVehicleComponentPathFollower *this, bool stopOnEnd)
{
  this->m_stopOnEnd = stopOnEnd;
}

/*
==============
BgVehicleComponentGoStraightTo::Setup
==============
*/
bool BgVehicleComponentGoStraightTo::Setup(BgVehicleComponentGoStraightTo *this, BGVehicles *vehicleSystem, VehiclePhysicsComponentId id)
{
  const vec3_t *OwnerPosition; 
  float v5; 
  BgVehiclePhysics *Owner; 
  bool result; 

  BgVehiclePhysicsComponent::Setup(this, vehicleSystem, id);
  this->m_endOnGoal = 1;
  this->m_notifyOnGoal = 1;
  OwnerPosition = BgVehiclePhysicsComponent::GetOwnerPosition(this);
  v5 = defaultGoalTol;
  this->m_goalPos = *OwnerPosition;
  *(double *)this->m_lookAheadPos.v = *(double *)OwnerPosition->v;
  *(float *)&OwnerPosition = OwnerPosition->v[2];
  this->m_goalPosTolSq = v5 * v5;
  this->m_goalPosTol = v5;
  LODWORD(this->m_lookAheadPos.v[2]) = (_DWORD)OwnerPosition;
  this->m_goingStraightTo = 0;
  this->m_stopOnArriving = 0;
  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  BgVehiclePhysics::SetDynamic(Owner, 3.4028235e38);
  BgVehiclePhysics::SetActivatedAlways(Owner);
  Owner->m_controls.externalEnabledBits[0] = -1;
  result = 1;
  Owner->m_controls.playerEnabledBits[0] = 0;
  this->m_inputMults[0] = 1.0;
  this->m_inputMults[1] = 1.0;
  this->m_inputMults[2] = 1.0;
  this->m_inputMults[3] = 1.0;
  this->m_inputMults[4] = 1.0;
  this->m_inputMults[5] = 1.0;
  this->m_inputMults[6] = 1.0;
  this->m_inputMults[7] = 1.0;
  return result;
}

/*
==============
BgVehicleComponentPathFinder::Setup
==============
*/
__int64 BgVehicleComponentPathFinder::Setup(BgVehicleComponentPathFinder *this, BGVehicles *vehicleSystem, VehiclePhysicsComponentId id)
{
  const vec3_t *OwnerPosition; 
  float v5; 
  BgVehiclePhysics *Owner; 
  BgVehiclePhysics *v7; 
  __int64 result; 

  BgVehiclePhysicsComponent::Setup(this, vehicleSystem, id);
  this->m_endOnGoal = 1;
  this->m_notifyOnGoal = 1;
  OwnerPosition = BgVehiclePhysicsComponent::GetOwnerPosition(this);
  v5 = defaultGoalTol;
  this->m_goalPos = *OwnerPosition;
  *(double *)this->m_lookAheadPos.v = *(double *)OwnerPosition->v;
  *(float *)&OwnerPosition = OwnerPosition->v[2];
  this->m_goalPosTolSq = v5 * v5;
  this->m_goalPosTol = v5;
  LODWORD(this->m_lookAheadPos.v[2]) = (_DWORD)OwnerPosition;
  this->m_goingStraightTo = 0;
  this->m_stopOnArriving = 0;
  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  BgVehiclePhysics::SetDynamic(Owner, 3.4028235e38);
  BgVehiclePhysics::SetActivatedAlways(Owner);
  Owner->m_controls.externalEnabledBits[0] = -1;
  Owner->m_controls.playerEnabledBits[0] = 0;
  this->m_inputMults[0] = 1.0;
  this->m_inputMults[1] = 1.0;
  this->m_inputMults[2] = 1.0;
  this->m_inputMults[3] = 1.0;
  this->m_inputMults[4] = 1.0;
  this->m_inputMults[5] = 1.0;
  this->m_inputMults[6] = 1.0;
  this->m_inputMults[7] = 1.0;
  v7 = BgVehiclePhysicsComponent::GetOwner(this);
  if ( v7->SupportsFeature(v7, VPFEAT_NAVIGATE_MESH) || (result = ((__int64 (__fastcall *)(BgVehiclePhysics *, __int64))v7->SupportsFeature)(v7, 7i64), (_BYTE)result) )
  {
    BgVehiclePhysics::SetDynamic(v7, 3.4028235e38);
    BgVehiclePhysics::SetActivatedAlways(v7);
    result = 65281i64;
    this->m_endOnGoal = 0;
    this->m_notifyOnGoal = 0;
    *(_DWORD *)&this->m_numNodes = -65536;
    *(_WORD *)&this->m_layer = 2;
    *(_QWORD *)&this->m_originalPathNumNodes = 0xFFFFi64;
    this->m_goalPosTolSq = 2500.0;
    this->m_goalPosTol = 50.0;
  }
  return result;
}

/*
==============
BgVehicleComponentPathFollower::Setup
==============
*/
bool BgVehicleComponentPathFollower::Setup(BgVehicleComponentPathFollower *this, BGVehicles *vehicleSystem, VehiclePhysicsComponentId id)
{
  BgVehiclePhysics *Owner; 
  BgVehiclePhysics *v5; 
  unsigned int PhysicsBodyId; 
  bool result; 

  BgVehiclePhysicsComponent::Setup(this, vehicleSystem, id);
  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  if ( !Owner->SupportsFeature(Owner, VPFEAT_GROUND_VEHICLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 491, ASSERT_TYPE_ASSERT, "( GetOwner()->SupportsFeature( VPFEAT_GROUND_VEHICLE ) )", "BgVehicleComponentPathFollower intended to work with Ground Vehicles") )
    __debugbreak();
  v5 = BgVehiclePhysicsComponent::GetOwner(this);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 494, ASSERT_TYPE_ASSERT, "(vehGroundObj)", (const char *)&queryFormat, "vehGroundObj") )
    __debugbreak();
  if ( BgVehiclePhysicsComponent::GetOwner(this)->m_worldId )
    Com_PrintWarning(20, "BgVehicleComponentPathFollower intended to work on Server only. Unknown behavior on Client side component");
  this->m_startNode = BGVehicles::PathInvalidNodeIndex();
  this->m_lookAheadTime = 0.5;
  this->m_numNodes = 0;
  this->m_pathType = PATH_NONE;
  this->m_manualTime = 0.0;
  this->m_yawAccel = 2.0;
  *(_WORD *)&this->m_maxSpeedReached = 256;
  this->m_manualSpeed = -1.0;
  this->m_manualSpeedTarget = -1.0;
  this->m_manualAccel = -1.0;
  this->m_manualDecel = -1.0;
  BgVehiclePhysics::SetDynamic(v5, 3.4028235e38);
  BgVehiclePhysics::SetActivatedAlways(v5);
  PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(v5);
  PhysicsVehicle_SetSoftContacts(v5->m_worldId, PhysicsBodyId, 0);
  result = 1;
  LOBYTE(v5[3].m_pmoveTargetPosition.y) = 1;
  return result;
}

/*
==============
BgVehicleComponentPathFollowerCP::Setup
==============
*/
bool BgVehicleComponentPathFollowerCP::Setup(BgVehicleComponentPathFollowerCP *this, BGVehicles *vehicleSystem, VehiclePhysicsComponentId id)
{
  bool result; 
  BgVehiclePhysics *Owner; 
  const dvar_t *v6; 
  BgVehiclePhysicsGround *v7; 

  result = BgVehicleComponentPathFollower::Setup(this, vehicleSystem, id);
  if ( result )
  {
    Owner = BgVehiclePhysicsComponent::GetOwner(this);
    v6 = DCONST_DVARMPFLT_bg_pathFollowerFriction;
    v7 = (BgVehiclePhysicsGround *)Owner;
    if ( !DCONST_DVARMPFLT_bg_pathFollowerFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerFriction") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    BgVehiclePhysicsGround::SetFrictionBase(v7, v6->current.value);
    return 1;
  }
  return result;
}

/*
==============
BgVehicleComponentPathFollowerSP::Setup
==============
*/
bool BgVehicleComponentPathFollowerSP::Setup(BgVehicleComponentPathFollowerSP *this, BGVehicles *vehicleSystem, VehiclePhysicsComponentId id)
{
  bool result; 
  BgVehiclePhysics *Owner; 
  const dvar_t *v6; 
  BgVehiclePhysicsGround *v7; 

  result = BgVehicleComponentPathFollower::Setup(this, vehicleSystem, id);
  if ( result )
  {
    Owner = BgVehiclePhysicsComponent::GetOwner(this);
    v6 = DCONST_DVARMPFLT_bg_pathFollowerFriction;
    v7 = (BgVehiclePhysicsGround *)Owner;
    if ( !DCONST_DVARMPFLT_bg_pathFollowerFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerFriction") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    BgVehiclePhysicsGround::SetFrictionBase(v7, v6->current.value);
    return 1;
  }
  return result;
}

/*
==============
BgVehicleComponentPathFollower::StartPath
==============
*/
void BgVehicleComponentPathFollower::StartPath(BgVehicleComponentPathFollower *this, __int16 nodeIndex)
{
  __int32 v4; 
  BGVehicles *m_vehicleSystem; 
  unsigned __int16 v6; 

  v4 = this->m_pathType - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      BG_BSpline_Data_Deallocate(this->m_path.m_catmullRom.splineIndex);
      this->m_path.m_catmullRom.splineIndex = BG_BSpline_Data_InvalidIndex();
    }
  }
  else
  {
    this->m_vehicleSystem->PathReset(this->m_vehicleSystem, (VehiclePathPos *)&this->m_path);
  }
  m_vehicleSystem = this->m_vehicleSystem;
  this->m_pathType = PATH_RADIANT;
  this->m_startNode = nodeIndex;
  v6 = m_vehicleSystem->PathCountNodes(m_vehicleSystem, nodeIndex);
  this->m_numNodes = v6;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 627, ASSERT_TYPE_ASSERT, "(m_numNodes > 0)", (const char *)&queryFormat, "m_numNodes > 0") )
    __debugbreak();
  this->m_vehicleSystem->PathInit(this->m_vehicleSystem, this->m_startNode, (VehiclePathPos *)&this->m_path);
  this->m_pathPosInterpolated.v[0] = this->m_path.m_vpp.origin.v[0];
  this->m_pathPosInterpolated.v[1] = this->m_path.m_vpp.origin.v[1];
  this->m_pathPosInterpolated.v[2] = this->m_path.m_vpp.origin.v[2];
  *(_QWORD *)this->m_previousLinearVelocityWs.v = 0i64;
  *(_QWORD *)&this->m_previousLinearVelocityWs.z = 0i64;
  *(_QWORD *)&this->m_previousLinearAccelerationWs.y = 0i64;
  BgVehicleComponentPathFollower::WarpTo(this, &this->m_path.m_vpp.origin, &this->m_path.m_vpp.angles);
  if ( this->m_pauseTime >= 0.0 )
    BgVehiclePhysicsComponent::Resume(this);
}

/*
==============
BgVehicleComponentPathFollower::StartPathNodes
==============
*/
void BgVehicleComponentPathFollower::StartPathNodes(BgVehicleComponentPathFollower *this, const vec4_t *pointTimes, unsigned int pointCount, float tau, float alpha, bool centripetal, bool looped)
{
  unsigned int v10; 
  BSplineCatmullRom *outSpline; 

  if ( !pointTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 647, ASSERT_TYPE_ASSERT, "(pointTimes)", (const char *)&queryFormat, "pointTimes") )
    __debugbreak();
  if ( pointCount > 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 648, ASSERT_TYPE_ASSERT, "(pointCount <= 32)", (const char *)&queryFormat, "pointCount <= MAX_BSPLINE_CATMULLROM_POINTS") )
    __debugbreak();
  if ( this->m_pathType == PATH_RADIANT )
  {
    this->m_vehicleSystem->PathReset(this->m_vehicleSystem, (VehiclePathPos *)&this->m_path);
  }
  else if ( this->m_pathType == PATH_CATMULLROM )
  {
    BG_BSpline_Data_Deallocate(this->m_path.m_catmullRom.splineIndex);
    this->m_path.m_catmullRom.splineIndex = BG_BSpline_Data_InvalidIndex();
  }
  this->m_pathType = PATH_CATMULLROM;
  v10 = BG_BSpline_Data_Allocate(CATMULL_ROM);
  this->m_path.m_catmullRom.splineIndex = v10;
  if ( !BG_BSpline_Data_IsValid(v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
    __debugbreak();
  outSpline = (BSplineCatmullRom *)BG_BSpline_Data_Get(this->m_path.m_catmullRom.splineIndex, NULL);
  BG_BSpline_CatmullRom_Build(pointTimes, pointCount, tau, alpha, 0, (BSplineCatmullRom::Parametrization)centripetal, looped, outSpline);
  if ( this->m_pauseTime >= 0.0 )
    BgVehiclePhysicsComponent::Resume(this);
}

/*
==============
BgVehicleComponentPathFollowerCP::StartPathNodes
==============
*/
void BgVehicleComponentPathFollowerCP::StartPathNodes(BgVehicleComponentPathFollowerCP *this, const vec4_t *pointTimes, unsigned int pointCount, float tau, float alpha, bool centripetal, bool looped, bool warp)
{
  unsigned int v11; 
  BSplineCatmullRom *outSpline; 

  if ( !pointTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 647, ASSERT_TYPE_ASSERT, "(pointTimes)", (const char *)&queryFormat, "pointTimes") )
    __debugbreak();
  if ( pointCount > 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 648, ASSERT_TYPE_ASSERT, "(pointCount <= 32)", (const char *)&queryFormat, "pointCount <= MAX_BSPLINE_CATMULLROM_POINTS") )
    __debugbreak();
  if ( this->m_pathType == PATH_RADIANT )
  {
    this->m_vehicleSystem->PathReset(this->m_vehicleSystem, (VehiclePathPos *)&this->m_path);
  }
  else if ( this->m_pathType == PATH_CATMULLROM )
  {
    BG_BSpline_Data_Deallocate(this->m_path.m_catmullRom.splineIndex);
    this->m_path.m_catmullRom.splineIndex = BG_BSpline_Data_InvalidIndex();
  }
  this->m_pathType = PATH_CATMULLROM;
  v11 = BG_BSpline_Data_Allocate(CATMULL_ROM);
  this->m_path.m_catmullRom.splineIndex = v11;
  if ( !BG_BSpline_Data_IsValid(v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
    __debugbreak();
  outSpline = (BSplineCatmullRom *)BG_BSpline_Data_Get(this->m_path.m_catmullRom.splineIndex, NULL);
  BG_BSpline_CatmullRom_Build(pointTimes, pointCount, tau, alpha, 0, (BSplineCatmullRom::Parametrization)centripetal, looped, outSpline);
  if ( this->m_pauseTime >= 0.0 )
    BgVehiclePhysicsComponent::Resume(this);
  BgVehicleComponentPathFollowerCP::RestartPath(this, warp);
}

/*
==============
BgVehicleComponentPathFollowerSP::StartPathNodes
==============
*/

void __fastcall BgVehicleComponentPathFollowerSP::StartPathNodes(BgVehicleComponentPathFollowerSP *this, const vec4_t *pointTimes, unsigned int pointCount, float tau, float alpha, bool centripetal, bool looped, bool warp)
{
  BgVehicleComponentPathFollowerSP::RestartPath(this);
}

/*
==============
BgVehicleComponentGoStraightTo::Step
==============
*/
void BgVehicleComponentGoStraightTo::Step(BgVehicleComponentGoStraightTo *this, float deltaTime)
{
  BgVehiclePhysics *Owner; 
  BgVehiclePhysics *v4; 
  bool v5; 
  BgVehiclePhysics *v6; 
  bool v7; 
  bool v8; 

  BgVehiclePhysicsComponent::Step(this, deltaTime);
  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  v4 = Owner;
  if ( this->m_pauseTime >= 0.0 )
  {
    Owner->m_controls.externalValues[0] = 0.0;
    Owner->m_controls.externalValues[2] = 0.0;
    return;
  }
  if ( this->m_goingStraightTo && (this->m_simCount & 1) == 0 )
  {
    if ( BgVehicleComponentGoStraightTo::IsOnGoalPos(this, 3.5) )
    {
      v5 = BgVehicleComponentGoStraightTo::IsOnGoalPos(this, 1.0);
      if ( this->m_stopOnArriving )
      {
        v6 = BgVehiclePhysicsComponent::GetOwner(this);
        if ( (float)((float)((float)(v6->m_transform.m[0].v[1] * v6->m_linearVelocityWs.v[1]) + (float)(v6->m_transform.m[0].v[0] * v6->m_linearVelocityWs.v[0])) + (float)(v6->m_transform.m[0].v[2] * v6->m_linearVelocityWs.v[2])) > threshold_0 && !v5 )
        {
          v4->m_controls.externalValues[0] = 0.0;
          v7 = 0;
          v4->m_controls.externalValues[1] = this->m_inputMults[1];
LABEL_16:
          BgVehicleComponentGoStraightTo::AdjustInputs(this, v7, 1);
          return;
        }
        goto LABEL_11;
      }
      if ( v5 )
      {
LABEL_11:
        v8 = !this->m_notifyOnGoal;
        this->m_goingStraightTo = 0;
        if ( !v8 )
          BgVehiclePhysicsComponent::ScrNotify(this, scr_const.reached_end_node);
        if ( this->m_endOnGoal )
          this->m_autoRemove = 1;
        return;
      }
    }
    v4->m_controls.externalValues[1] = 0.0;
    v7 = 1;
    goto LABEL_16;
  }
}

/*
==============
BgVehicleComponentPathFinder::Step
==============
*/
void BgVehicleComponentPathFinder::Step(BgVehicleComponentPathFinder *this, float deltaTime)
{
  BgVehiclePhysics *Owner; 
  BgVehiclePhysics *v4; 
  bool v5; 
  BgVehiclePhysics *v6; 
  bool v7; 
  bool v8; 
  unsigned __int16 m_numNodes; 
  int m_curNode; 
  int v11; 
  int v12; 

  BgVehiclePhysicsComponent::Step(this, deltaTime);
  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  v4 = Owner;
  if ( this->m_pauseTime >= 0.0 )
  {
    Owner->m_controls.externalValues[0] = 0.0;
    Owner->m_controls.externalValues[2] = 0.0;
    goto LABEL_17;
  }
  if ( this->m_goingStraightTo && (this->m_simCount & 1) == 0 )
  {
    if ( BgVehicleComponentGoStraightTo::IsOnGoalPos(this, 3.5) )
    {
      v5 = BgVehicleComponentGoStraightTo::IsOnGoalPos(this, 1.0);
      if ( this->m_stopOnArriving )
      {
        v6 = BgVehiclePhysicsComponent::GetOwner(this);
        if ( (float)((float)((float)(v6->m_transform.m[0].v[1] * v6->m_linearVelocityWs.v[1]) + (float)(v6->m_linearVelocityWs.v[0] * v6->m_transform.m[0].v[0])) + (float)(v6->m_transform.m[0].v[2] * v6->m_linearVelocityWs.v[2])) > threshold_0 && !v5 )
        {
          v4->m_controls.externalValues[0] = 0.0;
          v7 = 0;
          v4->m_controls.externalValues[1] = this->m_inputMults[1];
LABEL_16:
          BgVehicleComponentGoStraightTo::AdjustInputs(this, v7, 1);
          goto LABEL_17;
        }
        goto LABEL_11;
      }
      if ( v5 )
      {
LABEL_11:
        v8 = !this->m_notifyOnGoal;
        this->m_goingStraightTo = 0;
        if ( !v8 )
          BgVehiclePhysicsComponent::ScrNotify(this, scr_const.reached_end_node);
        if ( this->m_endOnGoal )
          this->m_autoRemove = 1;
        goto LABEL_17;
      }
    }
    v4->m_controls.externalValues[1] = 0.0;
    v7 = 1;
    goto LABEL_16;
  }
LABEL_17:
  if ( this->m_pauseTime < 0.0 )
  {
    m_numNodes = this->m_numNodes;
    if ( m_numNodes )
    {
      if ( !this->m_goingStraightTo )
      {
        m_curNode = this->m_curNode;
        if ( m_curNode < m_numNodes )
        {
          BgVehicleComponentPathFinder::Notification(this, m_curNode, scr_const.trigger);
          v11 = ++this->m_curNode;
          v12 = this->m_numNodes;
          ++this->m_overallCurNode;
          if ( v11 < v12 )
            BgVehicleComponentPathFinder::GoStraightToNode(this, v11);
        }
        else if ( this->m_partial )
        {
          BgVehicleComponentPathFinder::Notification(this, m_curNode, scr_const.trigger);
          BgVehicleComponentPathFinder::FindPath(this, &this->m_finalGoalPos, this->m_layer);
        }
        else
        {
          BgVehicleComponentPathFinder::Notification(this, m_curNode, scr_const.reached_end_node);
          this->m_autoRemove = 1;
        }
      }
    }
    else
    {
      BgVehicleComponentPathFinder::Notification(this, this->m_curNode, scr_const.reached_end_node);
      this->m_autoRemove = 1;
    }
  }
}

/*
==============
BgVehicleComponentPathFollowerCP::StopOnEnd
==============
*/
void BgVehicleComponentPathFollowerCP::StopOnEnd(BgVehicleComponentPathFollowerCP *this, float deltaTime, float pauseDuration)
{
  BgVehiclePhysics *Owner; 
  const dvar_t *v6; 
  float v7; 
  vec3_t v8; 
  vec3_t linVelWs; 
  vec3_t outVelWs; 
  vec3_t outVelLs; 

  outVelWs.v[0] = 0.0;
  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  outVelWs.v[1] = 0.0;
  outVelWs.v[2] = 0.0;
  BgVehiclePhysics::ComputeVelocityLocalSpace(Owner, &Owner->m_angularVelocityWs, &outVelLs);
  BgVehiclePhysics::ComputeVelocityWorldSpace(Owner, &outVelLs, &outVelWs);
  v6 = DCONST_DVARFLT_bg_pathFollowerAccelAngularVelMult;
  LODWORD(v7) = LODWORD(this->m_previousLinearVelocityWs.v[1]) ^ _xmm;
  LODWORD(linVelWs.v[0]) = LODWORD(this->m_previousLinearVelocityWs.v[0]) ^ _xmm;
  LODWORD(linVelWs.v[2]) = LODWORD(this->m_previousLinearVelocityWs.v[2]) ^ _xmm;
  linVelWs.v[1] = v7;
  if ( !DCONST_DVARFLT_bg_pathFollowerAccelAngularVelMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerAccelAngularVelMult") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v8 = linVelWs;
  BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration(this, Owner, &v8, deltaTime, v6->current.value, &outVelWs);
  linVelWs.v[0] = 0.0;
  linVelWs.v[1] = 0.0;
  linVelWs.v[2] = 0.0;
  BgVehiclePhysics::SetLinearVelocity(Owner, &linVelWs, 0);
  BgVehiclePhysics::SetAngularVelocity(Owner, &outVelWs, 0);
  if ( pauseDuration < 0.0 || pauseDuration >= 3.4028235e38 )
    this->m_autoRemove = 1;
  else
    BgVehiclePhysicsComponent::SetPause(this, pauseDuration);
  if ( this->m_pathType == PATH_CATMULLROM )
    this->m_path.m_vpp.lookAhead = this->m_path.m_vpp.speedOverride;
}

/*
==============
BgVehicleComponentPathFollower::TriggerNodeNotification
==============
*/
void BgVehicleComponentPathFollower::TriggerNodeNotification(BgVehicleComponentPathFollower *this, unsigned int nodeIndex)
{
  scrContext_t *v4; 
  int m_entityNumber; 
  LocalClientNum_t localClientNum; 

  if ( this->m_pathType != PATH_CATMULLROM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 830, ASSERT_TYPE_ASSERT, "( GetPathType() == PATH_CATMULLROM )", "This must be called only for Catmull-Rom paths. Radiant path notifications are handled separately") )
    __debugbreak();
  BgVehiclePhysicsComponent::GetOwner(this);
  v4 = ScriptContext_Server();
  Scr_AddInt(v4, nodeIndex);
  m_entityNumber = BgVehiclePhysicsComponent::GetOwner(this)->m_entityNumber;
  localClientNum = this->m_vehicleSystem->GetLocalClientNum(this->m_vehicleSystem);
  Scr_NotifyNum(v4, m_entityNumber, ENTITY_CLASS_GENTITY, scr_const.trigger, 1u, localClientNum);
}

/*
==============
BgVehicleComponentPathFollower::UpdateManualSpeed
==============
*/
void BgVehicleComponentPathFollower::UpdateManualSpeed(BgVehicleComponentPathFollower *this, float deltaTime)
{
  float m_manualSpeed; 
  float m_manualAccel; 
  __int128 m_manualAccel_low; 
  float m_manualDecel; 
  __int128 m_manualSpeed_low; 

  *(float *)&_XMM2 = this->m_manualSpeedTarget;
  if ( *(float *)&_XMM2 >= 0.0 && deltaTime > 0.0 )
  {
    m_manualSpeed = this->m_manualSpeed;
    if ( (float)(*(float *)&_XMM2 - m_manualSpeed) <= 0.0099999998 )
    {
      if ( (float)(*(float *)&_XMM2 - m_manualSpeed) >= -0.0099999998 )
        return;
      m_manualDecel = this->m_manualDecel;
      if ( m_manualDecel > 0.0099999998 )
      {
        m_manualSpeed_low = LODWORD(this->m_manualSpeed);
        *(float *)&m_manualSpeed_low = m_manualSpeed - (float)(m_manualDecel * deltaTime);
        _XMM1 = m_manualSpeed_low;
        __asm { vmaxss  xmm2, xmm1, xmm2 }
      }
    }
    else
    {
      m_manualAccel = this->m_manualAccel;
      if ( m_manualAccel > 0.0099999998 )
      {
        m_manualAccel_low = LODWORD(this->m_manualAccel);
        *(float *)&m_manualAccel_low = (float)(m_manualAccel * deltaTime) + m_manualSpeed;
        _XMM1 = m_manualAccel_low;
        __asm { vminss  xmm2, xmm1, xmm2 }
        this->m_manualSpeed = *(float *)&_XMM2;
        return;
      }
    }
    this->m_manualSpeed = *(float *)&_XMM2;
  }
}

/*
==============
BgVehicleComponentPathFollower::UpdateSteeringAngle
==============
*/
void BgVehicleComponentPathFollower::UpdateSteeringAngle(BgVehicleComponentPathFollower *this)
{
  BgVehiclePhysics *Owner; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  __int128 v5; 
  const dvar_t *v6; 
  float v9; 
  float v10; 
  __int128 v12; 
  const dvar_t *v13; 
  __int128 v14; 
  vec3_t angles; 

  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  AxisToAngles((const tmat33_t<vec3_t> *)&Owner->m_transform, &angles);
  v3 = DCONST_DVARFLT_bg_pathFollowerSteeringMaxAngle;
  if ( !DCONST_DVARFLT_bg_pathFollowerSteeringMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerSteeringMaxAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v4 = DCONST_DVARFLT_bg_pathFollowerSteeringMaxYawDiff;
  if ( !DCONST_DVARFLT_bg_pathFollowerSteeringMaxYawDiff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerSteeringMaxYawDiff") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = LODWORD(this->m_pathAnglesInterpolated.v[1]);
  v6 = DCONST_DVARFLT_bg_pathFollowerSteeringMaxYawDiff;
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm2, 1 }
  LODWORD(v9) = COERCE_UNSIGNED_INT((float)((float)((float)(this->m_pathAnglesInterpolated.v[1] - angles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * 360.0) & _xmm;
  if ( !DCONST_DVARFLT_bg_pathFollowerSteeringMaxYawDiff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerSteeringMaxYawDiff") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v10 = v9 / v6->current.value;
  _XMM6 = 0i64;
  *(double *)&v12 = I_fclamp(v10, 0.0, 1.0);
  v13 = DCONST_DVARFLT_bg_pathFollowerSteeringMaxAngle;
  if ( !DCONST_DVARFLT_bg_pathFollowerSteeringMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerSteeringMaxAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  *((_QWORD *)&v12 + 1) = *((_QWORD *)&v5 + 1) & *((_QWORD *)&_xmm + 1);
  v14 = v12;
  *(float *)&v14 = *(float *)&v12 * v13->current.value;
  _XMM1 = v14 ^ _xmm;
  __asm
  {
    vcmpless xmm0, xmm6, xmm8
    vblendvps xmm2, xmm1, xmm2, xmm0
  }
  Owner[3].m_pmoveTargetPosition.v[0] = *(float *)&_XMM2;
  *(float *)&Owner[3].m_pmoveObject = *(float *)&_XMM2;
}

/*
==============
BgVehicleComponentPathFollower::WarpTo
==============
*/
void BgVehicleComponentPathFollower::WarpTo(BgVehicleComponentPathFollower *this, const vec3_t *pos, const vec3_t *angles)
{
  BgVehiclePhysics *Owner; 

  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  BgVehiclePhysics::SetKeyframeTransform(Owner, pos, angles);
  *(_QWORD *)&this->m_yawVel = 0i64;
  this->m_pathPosInterpolated = *pos;
  *(_QWORD *)this->m_previousLinearVelocityWs.v = 0i64;
  *(_QWORD *)&this->m_previousLinearVelocityWs.z = 0i64;
  *(_QWORD *)&this->m_previousLinearAccelerationWs.y = 0i64;
}

