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
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
  }
  _RDI = this;
  BgVehiclePhysicsComponent::GetOwner(this);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+54h]
    vmovss  xmm1, dword ptr [rdi+58h]
    vxorps  xmm8, xmm8, xmm8
    vsubss  xmm5, xmm0, dword ptr [rax+198h]
    vsubss  xmm4, xmm1, dword ptr [rax+19Ch]
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm2, xmm4, xmm4
    vaddss  xmm1, xmm2, xmm0
    vmovss  xmm2, cs:__real@3f800000; max
    vsqrtss xmm3, xmm1, xmm1
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm2, xmm0
    vdivss  xmm1, xmm2, xmm0
    vmulss  xmm5, xmm1, xmm5
    vmulss  xmm0, xmm5, dword ptr [rax+180h]
    vmulss  xmm4, xmm4, xmm1
    vmulss  xmm1, xmm4, dword ptr [rax+178h]
    vmulss  xmm3, xmm4, dword ptr [rax+184h]
    vaddss  xmm7, xmm3, xmm0
    vmulss  xmm0, xmm5, dword ptr [rax+174h]
    vaddss  xmm0, xmm1, xmm0; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  *(float *)&_XMM0 = cbrtf(*(float *)&_XMM0);
  __asm { vmovaps xmm6, xmm0 }
  _RAX = BgVehiclePhysicsComponent::GetOwner(_RDI);
  _RSI = _RAX;
  if ( fw )
  {
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rdi+28h]
      vmovss  dword ptr [rax+0E8h], xmm0
    }
  }
  if ( steer )
  {
    __asm
    {
      vandps  xmm0, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; X
      vmovss  xmm1, cs:__real@3e4ccccd; Y
      vmovss  xmm6, dword ptr [rdi+30h]
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vxorps  xmm2, xmm6, cs:__xmm@80000000800000008000000080000000
      vcmpless xmm1, xmm8, xmm7
      vblendvps xmm1, xmm2, xmm6, xmm1
      vmulss  xmm0, xmm0, xmm1
      vmovss  dword ptr [rsi+0F0h], xmm0
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
}

/*
==============
BgVehicleComponentGoStraightTo::ComputeCosAngles
==============
*/
float BgVehicleComponentGoStraightTo::ComputeCosAngles(BgVehicleComponentGoStraightTo *this, const vec3_t *targetPos, float *fwDot, float *riDot)
{
  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  _RSI = riDot;
  __asm { vmovaps [rsp+58h+var_38], xmm7 }
  _RDI = fwDot;
  _RBX = targetPos;
  _RAX = BgVehiclePhysicsComponent::GetOwner(this);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
    vsubss  xmm3, xmm1, dword ptr [rax+19Ch]
    vsubss  xmm4, xmm0, dword ptr [rax+198h]
    vmovss  xmm7, dword ptr [rax+180h]
    vmovss  xmm6, dword ptr [rax+184h]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm2, xmm3, xmm3
    vaddss  xmm1, xmm2, xmm0
    vmovss  xmm2, cs:__real@3f800000
    vsqrtss xmm0, xmm1, xmm1
    vcmpless xmm1, xmm0, cs:__real@80000000
    vblendvps xmm1, xmm0, xmm2, xmm1
    vdivss  xmm2, xmm2, xmm1
    vmulss  xmm5, xmm4, xmm2
    vmulss  xmm1, xmm5, dword ptr [rax+174h]
    vmulss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm4, dword ptr [rax+178h]
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm1, xmm5, xmm7
    vmovaps xmm7, [rsp+58h+var_38]
    vmulss  xmm4, xmm4, xmm6
    vmovaps xmm6, [rsp+58h+var_28]
    vmovss  dword ptr [rdi], xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rsi], xmm2
  }
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
  int fromServer; 
  int duration; 
  Bounds bounds; 

  __asm
  {
    vmovss  xmm0, [rsp+78h+charHeight]
    vmovss  xmm1, [rsp+78h+tabWidth]
    vmovss  [rsp+78h+duration], xmm0
    vmovss  [rsp+78h+fromServer], xmm1
  }
  _RSI = this;
  BgVehiclePhysicsComponent::DebugDraw(this, scrPlace, x, y, *(float *)&fromServer, *(float *)&duration);
  __asm { vmovss  xmm2, cs:__real@3f000000; scale }
  CL_AddDebugString(&_RSI->m_goalPos, &colorGreen, *(float *)&_XMM2, "Goal", 0, 0);
  OwnerPosition = BgVehiclePhysicsComponent::GetOwnerPosition(_RSI);
  CG_DebugLine(OwnerPosition, &_RSI->m_lookAheadPos, &colorGreen, 0, 0);
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+64h]
    vsqrtss xmm1, xmm1, xmm1; radius
  }
  CG_DebugCircle(&_RSI->m_goalPos, *(float *)&_XMM1, &identityMatrix33.m[2], &colorCyan, 1, 0);
  __asm
  {
    vmovss  xmm1, cs:__real@40800000
    vmovups xmm0, cs:__xmm@40800000000000000000000000000000
    vxorps  xmm2, xmm2, xmm2; yaw
    vmovss  dword ptr [rsp+78h+bounds.halfSize+4], xmm1
    vmovss  dword ptr [rsp+78h+bounds.halfSize+8], xmm1
    vmovups xmmword ptr [rsp+78h+bounds.midPoint], xmm0
  }
  CG_DebugBox(&_RSI->m_lookAheadPos, &bounds, *(float *)&_XMM2, &colorBlue, 0, 0);
}

/*
==============
BgVehicleComponentPathFinder::DebugDraw
==============
*/
void BgVehicleComponentPathFinder::DebugDraw(BgVehicleComponentPathFinder *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const vec3_t *OwnerPosition; 
  int v17; 
  __int64 v22; 
  const vec3_t *v25; 
  int fromServer; 
  int duration; 
  vec3_t end; 
  vec3_t start; 
  Bounds bounds; 
  Bounds v31; 

  __asm
  {
    vmovss  xmm0, [rsp+0D8h+charHeight]
    vmovss  xmm1, [rsp+0D8h+tabWidth]
    vmovss  [rsp+0D8h+duration], xmm0
    vmovss  [rsp+0D8h+fromServer], xmm1
    vmovaps [rsp+0D8h+var_48], xmm6
  }
  _RBP = this;
  BgVehiclePhysicsComponent::DebugDraw(this, scrPlace, x, y, *(float *)&fromServer, *(float *)&duration);
  __asm { vmovss  xmm2, cs:__real@3f000000; scale }
  CL_AddDebugString(&_RBP->m_goalPos, &colorGreen, *(float *)&_XMM2, "Goal", 0, 0);
  OwnerPosition = BgVehiclePhysicsComponent::GetOwnerPosition(_RBP);
  CG_DebugLine(OwnerPosition, &_RBP->m_lookAheadPos, &colorGreen, 0, 0);
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+64h]
    vsqrtss xmm1, xmm1, xmm1; radius
  }
  CG_DebugCircle(&_RBP->m_goalPos, *(float *)&_XMM1, &identityMatrix33.m[2], &colorCyan, 1, 0);
  __asm
  {
    vmovups xmm0, cs:__xmm@40800000000000000000000000000000
    vmovss  xmm6, cs:__real@40800000
    vxorps  xmm2, xmm2, xmm2; yaw
    vmovups xmmword ptr [rsp+0D8h+bounds.midPoint], xmm0
    vmovss  dword ptr [rsp+0D8h+bounds.halfSize+4], xmm6
    vmovss  dword ptr [rsp+0D8h+bounds.halfSize+8], xmm6
  }
  CG_DebugBox(&_RBP->m_lookAheadPos, &bounds, *(float *)&_XMM2, &colorBlue, 0, 0);
  v17 = 0;
  __asm
  {
    vmovups xmm0, cs:__xmm@40800000000000000000000000000000
    vmovups xmmword ptr [rsp+0D8h+var_70.midPoint], xmm0
    vmovss  xmm0, dword ptr [rbp+78h]
    vmovss  dword ptr [rsp+0D8h+var_70.halfSize+4], xmm6
    vmovss  dword ptr [rsp+0D8h+var_70.halfSize+8], xmm6
    vmovaps xmm6, [rsp+0D8h+var_48]
    vmovss  dword ptr [rsp+0D8h+end+8], xmm0
    vmovss  dword ptr [rsp+0D8h+start+8], xmm0
  }
  if ( _RBP->m_numNodes )
  {
    _RBX = _RBP->m_pathNodes;
    v22 = 0i64;
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  xmm1, dword ptr [rbx+4]
        vmovss  dword ptr [rsp+0D8h+end], xmm0
        vmovss  dword ptr [rsp+0D8h+end+4], xmm1
      }
      if ( v22 > 0 )
      {
        CG_DebugLine(&start, &end, &colorBlue, 0, 0);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vmovss  xmm1, dword ptr [rbx+4]
        }
      }
      __asm
      {
        vxorps  xmm2, xmm2, xmm2; yaw
        vmovss  dword ptr [rsp+0D8h+start], xmm0
        vmovss  dword ptr [rsp+0D8h+start+4], xmm1
      }
      CG_DebugBox(&end, &v31, *(float *)&_XMM2, &colorCyan, 0, 0);
      ++v17;
      ++v22;
      ++_RBX;
    }
    while ( v17 < _RBP->m_numNodes );
  }
  v25 = BgVehiclePhysicsComponent::GetOwnerPosition(_RBP);
  CG_DebugLine(v25, &_RBP->m_goalPos, &colorGreen, 0, 0);
}

/*
==============
BgVehicleComponentPathFollower::DebugDraw
==============
*/
void BgVehicleComponentPathFollower::DebugDraw(BgVehicleComponentPathFollower *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const BSplineCatmullRom *v15; 
  char v24; 
  char v25; 
  const char *v32; 
  float v38; 
  vec3_t outPos; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t up; 
  vec3_t right; 
  char dest[128]; 
  void *retaddr; 

  _R11 = &retaddr;
  _RSI = y;
  __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
  _R14 = x;
  __asm { vmovss  xmm6, cs:__real@40a00000 }
  _RDI = this;
  __asm { vmovaps xmm1, xmm6; radius }
  CG_DebugSphere(&this->m_pathPosInterpolated, *(float *)&_XMM1, &colorGreen, 0, 0);
  if ( _RDI->m_pathType == PATH_RADIANT )
  {
    __asm { vmovaps xmm1, xmm6; radius }
    CG_DebugSphere(&_RDI->m_path.m_vpp.origin, *(float *)&_XMM1, &colorCyan, 0, 0);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+30h]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rdi+150h]
    }
    if ( v24 | v25 )
      __asm { vmovss  xmm1, dword ptr [rdi+14Ch] }
    __asm { vmovss  xmm3, dword ptr [rdi+160h] }
    ((void (__fastcall *)(BGVehicles *, vec3_t *, BgVehicleComponentPathFollower::<unnamed_type_m_path> *))_RDI->m_vehicleSystem->PathComputeLookAhead)(_RDI->m_vehicleSystem, &outPos, &_RDI->m_path);
    __asm { vmovaps xmm1, xmm6; radius }
    CG_DebugSphere(&outPos, *(float *)&_XMM1, &colorYellow, 0, 0);
    AngleVectors(&angles, &forward, &right, &up);
    __asm
    {
      vmovss  xmm3, cs:__real@41200000; length
      vmovaps xmm2, xmm6; radius
    }
    CG_DebugCone(&outPos, &forward, *(float *)&_XMM2, *(float *)&_XMM3, &colorYellow, 0, 0);
  }
  else if ( _RDI->m_pathType == PATH_CATMULLROM )
  {
    if ( !BG_BSpline_Data_IsValid(_RDI->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
      __debugbreak();
    v15 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(_RDI->m_path.m_catmullRom.splineIndex, NULL);
    BG_Spline_CatmullRom_DebugDraw(v15, 0x80u);
    __asm { vmovss  xmm1, dword ptr [rdi+34h]; t }
    BG_BSpline_CatmullRom_Evaluate(v15, *(float *)&_XMM1, &outPos, NULL, NULL, NULL);
    __asm { vmovaps xmm1, xmm6; radius }
    CG_DebugSphere(&outPos, *(float *)&_XMM1, &colorCyan, 0, 0);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+144h]
      vaddss  xmm1, xmm0, dword ptr [rdi+34h]; t
    }
    BG_BSpline_CatmullRom_Evaluate(v15, *(float *)&_XMM1, &outPos, NULL, NULL, NULL);
    __asm { vmovaps xmm1, xmm6; radius }
    CG_DebugSphere(&outPos, *(float *)&_XMM1, &colorYellow, 0, 0);
  }
  __asm { vmovaps xmm6, [rsp+178h+var_48] }
  if ( scrPlace )
  {
    v32 = "CatmullRom";
    if ( _RDI->m_pathType == PATH_RADIANT )
      v32 = "Radiant";
    Com_sprintf<128>((char (*)[128])dest, v32);
    __asm
    {
      vmovss  xmm0, cs:__real@41000000
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [r14]; x
      vmovss  [rsp+178h+var_140], xmm0
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhiteFaded, 0, 1, v38, 0);
    __asm
    {
      vmovss  xmm0, [rsp+178h+charHeight]
      vaddss  xmm1, xmm0, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
    }
  }
}

/*
==============
BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration
==============
*/

void __fastcall BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration(BgVehicleComponentPathFollower *this, BgVehiclePhysics *vehObj, vec3_t *accelerationWS, double deltaTime, float multiplier, vec3_t *outAngularVelocity)
{
  unsigned int v19; 
  unsigned int PhysicsBodyId; 
  __int64 v52; 
  vec3_t atPointWs; 
  vec3_t impulseWs; 
  vec3_t velLs; 
  vec3_t velWs; 
  vec3_t outVelLs; 
  __int64 v61; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm8
  }
  _RSI = outAngularVelocity;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm3, xmm8
    vmovaps xmm6, xmm3
  }
  _RBX = (BgVehiclePhysicsGround *)vehObj;
  if ( (unsigned __int64)&v52 != _security_cookie )
  {
    velWs.v[2] = outAngularVelocity->v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rsi]
      vmovsd  qword ptr [rsp+1A0h+velWs], xmm0
    }
    if ( !vehObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 904, ASSERT_TYPE_ASSERT, "(vehGroundObj)", (const char *)&queryFormat, "vehGroundObj") )
      __debugbreak();
    __asm { vmovaps [rsp+1A0h+var_68+8], xmm9 }
    if ( !BgVehiclePhysicsGround::IsBraking(_RBX) || _RBX->IsInAir(_RBX) )
      __asm { vmovss  xmm9, cs:__real@3f800000 }
    else
      __asm { vmovss  xmm9, cs:__real@40000000 }
    v19 = 0;
    if ( _RBX->m_wheelCount )
    {
      __asm
      {
        vmovaps [rsp+1A0h+var_48+8], xmm7
        vmovaps [rsp+1A0h+var_78+8], xmm10
        vmovss  xmm10, [rbp+0A0h+arg_20]
        vmovss  xmm7, cs:__real@40c00000
      }
      do
      {
        _RCX = 152i64 * v19;
        __asm
        {
          vmovups ymm1, ymmword ptr [rcx+rbx+2F8h]
          vmovups ymm0, ymmword ptr [rcx+rbx+318h]
          vmovups [rbp+0A0h+var_100], ymm1
          vmovups ymm1, ymmword ptr [rcx+rbx+338h]
          vmovups [rbp+0A0h+var_C0], ymm1
          vmovsd  xmm1, qword ptr [rcx+rbx+368h]
          vmovsd  [rbp+0A0h+var_90], xmm1
          vmovups [rbp+0A0h+var_E0], ymm0
        }
        if ( (_DWORD)v61 != 0xFFFFFF )
        {
          __asm { vcomiss xmm6, xmm8 }
          if ( (unsigned int)v61 > 0xFFFFFF )
          {
            __asm
            {
              vmovss  xmm0, cs:fixedTorqueFactor
              vmulss  xmm1, xmm0, dword ptr [rbp+0A0h+var_C0+10h]
              vmulss  xmm2, xmm1, xmm9
              vdivss  xmm3, xmm2, xmm6
              vmulss  xmm4, xmm3, xmm10
              vmulss  xmm0, xmm4, dword ptr [r14]
              vmulss  xmm1, xmm4, dword ptr [r14+4]
              vmovss  dword ptr [rsp+1A0h+impulseWs], xmm0
              vmulss  xmm0, xmm4, dword ptr [r14+8]
              vmovss  dword ptr [rsp+1A0h+impulseWs+8], xmm0
              vmovss  dword ptr [rsp+1A0h+impulseWs+4], xmm1
            }
            if ( BgVehiclePhysicsGround::IsBraking(_RBX) )
            {
              __asm
              {
                vmulss  xmm1, xmm7, dword ptr [rbp+0A0h+var_100+1Ch]
                vaddss  xmm2, xmm1, dword ptr [rbp+0A0h+var_100+4]
                vmulss  xmm1, xmm7, dword ptr [rbp+0A0h+var_E0]
                vmovss  dword ptr [rsp+1A0h+atPointWs], xmm2
                vaddss  xmm2, xmm1, dword ptr [rbp+0A0h+var_100+8]
                vmulss  xmm1, xmm7, dword ptr [rbp+0A0h+var_E0+4]
                vmovss  dword ptr [rsp+1A0h+atPointWs+4], xmm2
                vaddss  xmm2, xmm1, dword ptr [rbp+0A0h+var_100+0Ch]
                vmovss  dword ptr [rsp+1A0h+atPointWs+8], xmm2
              }
            }
            else
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+0A0h+var_100+4]
                vmovss  xmm1, dword ptr [rbp+0A0h+var_100+8]
                vmovss  dword ptr [rsp+1A0h+atPointWs], xmm0
                vmovss  xmm0, dword ptr [rbp+0A0h+var_100+0Ch]
                vmovss  dword ptr [rsp+1A0h+atPointWs+8], xmm0
                vmovss  dword ptr [rsp+1A0h+atPointWs+4], xmm1
              }
            }
            PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(_RBX);
            Physics_AccumulateRigidBodyAngularImpulse(_RBX->m_worldId, PhysicsBodyId, &impulseWs, &atPointWs, outAngularVelocity);
          }
        }
        ++v19;
      }
      while ( v19 < _RBX->m_wheelCount );
      __asm
      {
        vmovaps xmm10, [rsp+1A0h+var_78+8]
        vmovaps xmm7, [rsp+1A0h+var_48+8]
      }
    }
    BgVehiclePhysics::ComputeVelocityLocalSpace(_RBX, &velWs, &outVelLs);
    BgVehiclePhysics::ComputeVelocityLocalSpace(_RBX, outAngularVelocity, &velLs);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1A0h+outVelLs]
      vmovss  xmm1, dword ptr [rsp+1A0h+outVelLs+8]
      vmovss  dword ptr [rsp+1A0h+velLs], xmm0
      vmovss  dword ptr [rsp+1A0h+velLs+8], xmm1
    }
    BgVehiclePhysics::ComputeVelocityWorldSpace(_RBX, &velLs, outAngularVelocity);
    __asm { vmovaps xmm9, [rsp+1A0h+var_68+8] }
  }
  __asm
  {
    vmovaps xmm6, [rsp+1A0h+var_38+8]
    vmovaps xmm8, [rsp+1A0h+var_58+8]
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
  __int16 v14; 
  unsigned __int16 v16; 
  int NumSegments; 
  int v18; 
  bfx::SurfaceSegment *SurfaceSegment; 
  char v25; 
  bool v26; 
  int v39; 
  int i; 
  bfx::SurfaceSegment *v41; 
  char v45; 
  __int64 m_numNodes; 
  __int64 v51; 
  unsigned __int16 v58; 
  bool v59; 
  __int16 v60; 
  bfx::PolylinePathRCPtr result; 
  __int64 v67; 
  void *retaddr; 

  _RAX = &retaddr;
  v67 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps [rsp+0C8h+var_88], xmm10
  }
  _R12 = pos;
  _RDI = this;
  if ( !Nav_GetDefaultSpace() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 392, ASSERT_TYPE_ASSERT, "(Nav_GetDefaultSpace())", "%s\n\tBgVehicleComponentPathFinder::FindPath() Navigation mesh not found", "Nav_GetDefaultSpace()") )
    __debugbreak();
  if ( layer > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 393, ASSERT_TYPE_ASSERT, "(layer <= 255)", "%s\n\tBgVehicleComponentPathFinder::FindPath() Invalid layer", "layer <= 255") )
    __debugbreak();
  _RDI->m_layer = truncate_cast<unsigned char,unsigned int>(layer);
  OwnerPosition = BgVehiclePhysicsComponent::GetOwnerPosition(_RDI);
  DefaultSpace = Nav_GetDefaultSpace();
  Nav_FindPath(&result, DefaultSpace, OwnerPosition, _R12, layer);
  HIBYTE(v14) = 0;
  if ( _RDI->m_originalPathNumNodes == 0xFFFF )
  {
    __asm { vmovss  xmm10, dword ptr [rdi+64h] }
    v16 = 0;
    NumSegments = bfx::PolylinePathRCPtr::GetNumSegments(&result);
    v18 = 0;
    if ( NumSegments > 0 )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+0C8h+result.m_pProxy]
        vmovss  xmm7, dword ptr [rsp+0C8h+result.m_pProxy]
      }
      do
      {
        if ( bfx::PolylinePathRCPtr::GetSegmentType(&result, v18) == SURFACE_SEGMENT )
        {
          SurfaceSegment = bfx::PolylinePathRCPtr::GetSurfaceSegment(&result, v18);
          _RAX = bfx::SurfaceSegment::GetEndPos(SurfaceSegment);
          __asm
          {
            vmovss  xmm8, dword ptr [rax+4]
            vmovss  xmm9, dword ptr [rax]
          }
          v25 = 0;
          v26 = v18 == 0;
          if ( !v18 )
          {
            _RAX = bfx::SurfaceSegment::GetStartPos(SurfaceSegment);
            __asm
            {
              vmovss  xmm7, dword ptr [rax+4]
              vmovss  xmm6, dword ptr [rax]
            }
            v26 = ++v16 == 0;
          }
          __asm
          {
            vsubss  xmm1, xmm9, xmm6
            vsubss  xmm0, xmm8, xmm7
            vmulss  xmm2, xmm0, xmm0
            vmulss  xmm1, xmm1, xmm1
            vaddss  xmm2, xmm2, xmm1
            vcomiss xmm10, xmm2
          }
          if ( v25 | v26 )
          {
            __asm
            {
              vmovaps xmm6, xmm9
              vmovaps xmm7, xmm8
            }
            ++v16;
          }
        }
        ++v18;
      }
      while ( v18 < NumSegments );
    }
    _RDI->m_originalPathNumNodes = v16;
    _RDI->m_overallCurNode = 0;
  }
  _RDI->m_finalGoalPos.v[0] = _R12->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [r12+4]
    vmovss  dword ptr [rdi+74h], xmm0
    vmovss  xmm1, dword ptr [r12+8]
    vmovss  dword ptr [rdi+78h], xmm1
  }
  v39 = bfx::PolylinePathRCPtr::GetNumSegments(&result);
  _RDI->m_numNodes = 0;
  _RDI->m_notifiedNodeBits[0] = 0;
  for ( i = 0; i < v39; ++i )
  {
    if ( _RDI->m_numNodes >= 0xEu )
      break;
    if ( bfx::PolylinePathRCPtr::GetSegmentType(&result, i) == SURFACE_SEGMENT )
    {
      v41 = bfx::PolylinePathRCPtr::GetSurfaceSegment(&result, i);
      _RAX = bfx::SurfaceSegment::GetEndPos(v41);
      __asm
      {
        vmovss  xmm6, dword ptr [rax+4]
        vmovss  xmm7, dword ptr [rax]
      }
      v45 = 0;
      if ( !i )
      {
        _RAX = bfx::SurfaceSegment::GetStartPos(v41);
        __asm
        {
          vmovss  xmm1, dword ptr [rax+4]
          vmovss  xmm0, dword ptr [rax]
        }
        m_numNodes = _RDI->m_numNodes;
        _RCX = (__int64)&_RDI->m_pathNodes[m_numNodes];
        _RDI->m_numNodes = m_numNodes + 1;
        __asm
        {
          vmovss  dword ptr [rcx], xmm0
          vmovss  dword ptr [rcx+4], xmm1
        }
      }
      v51 = _RDI->m_numNodes;
      __asm
      {
        vsubss  xmm1, xmm7, dword ptr [rdi+rcx*8+74h]
        vsubss  xmm0, xmm6, dword ptr [rdi+rcx*8+78h]
        vmulss  xmm2, xmm0, xmm0
        vmulss  xmm1, xmm1, xmm1
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, dword ptr [rdi+64h]
      }
      if ( !v45 )
      {
        _RAX = (__int64)&_RDI->m_pathNodes[v51];
        _RDI->m_numNodes = v51 + 1;
        __asm
        {
          vmovss  dword ptr [rax], xmm7
          vmovss  dword ptr [rax+4], xmm6
        }
      }
    }
  }
  v58 = _RDI->m_numNodes;
  v59 = v58 == 14 && i < v39;
  _RDI->m_partial = v59;
  LOBYTE(v14) = v58 != 0;
  v60 = v14 - 1;
  _RDI->m_curNode = v60;
  if ( v58 )
    BgVehicleComponentPathFinder::GoStraightToNode(_RDI, v60);
  bfx::PolylinePathRCPtr::~PolylinePathRCPtr(&result);
  __asm
  {
    vmovaps xmm6, [rsp+0C8h+var_48]
    vmovaps xmm7, [rsp+0C8h+var_58]
    vmovaps xmm8, [rsp+0C8h+var_68]
    vmovaps xmm9, [rsp+0C8h+var_78]
    vmovaps xmm10, [rsp+0C8h+var_88]
  }
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
  {
    __asm { vmovss  xmm0, dword ptr [rcx+2Ch] }
  }
  else if ( this->m_pathType == PATH_CATMULLROM )
  {
    __asm { vmovss  xmm0, dword ptr [rcx+30h] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehicleComponentPathFollower::GetCurrentPathTime
==============
*/
float BgVehicleComponentPathFollower::GetCurrentPathTime(BgVehicleComponentPathFollower *this)
{
  if ( this->m_pathType == PATH_RADIANT || this->m_pathType != PATH_CATMULLROM )
    __asm { vxorps  xmm0, xmm0, xmm0 }
  else
    __asm { vmovss  xmm0, dword ptr [rcx+34h] }
  return *(float *)&_XMM0;
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

void __fastcall BgVehicleComponentPathFollower::GetPathLookAhead(BgVehicleComponentPathFollower *this, double lookAheadTime, vec3_t *outPos, vec3_t *outAngles)
{
  const BSplineCatmullRom *v9; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  vec3_t optOutDeriv; 

  _RDI = outPos;
  if ( this->m_pathType == PATH_CATMULLROM )
  {
    __asm
    {
      vmovaps [rsp+78h+var_28], xmm6
      vaddss  xmm6, xmm1, dword ptr [rcx+34h]
    }
    if ( !BG_BSpline_Data_IsValid(this->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
      __debugbreak();
    v9 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(this->m_path.m_catmullRom.splineIndex, NULL);
    __asm { vmovaps xmm1, xmm6; t }
    BG_BSpline_CatmullRom_Evaluate(v9, *(float *)&_XMM1, _RDI, &optOutDeriv, NULL, NULL);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovaps xmm6, [rsp+78h+var_28]
      vmovss  [rsp+78h+var_48], xmm0
    }
    if ( (v18 & 0x7F800000) == 2139095040 )
      goto LABEL_18;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  [rsp+78h+var_48], xmm0
    }
    if ( (v19 & 0x7F800000) == 2139095040 )
      goto LABEL_18;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  [rsp+78h+var_48], xmm0
    }
    if ( (v20 & 0x7F800000) == 2139095040 )
    {
LABEL_18:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 802, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outPos )[0] ) && !IS_NAN( ( outPos )[1] ) && !IS_NAN( ( outPos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outPos )[0] ) && !IS_NAN( ( outPos )[1] ) && !IS_NAN( ( outPos )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+78h+optOutDeriv]
      vmovss  [rsp+78h+var_48], xmm0
    }
    if ( (v21 & 0x7F800000) == 2139095040 )
      goto LABEL_19;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+78h+optOutDeriv+4]
      vmovss  [rsp+78h+var_48], xmm0
    }
    if ( (v22 & 0x7F800000) == 2139095040 )
      goto LABEL_19;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+78h+optOutDeriv+8]
      vmovss  [rsp+78h+var_48], xmm0
    }
    if ( (v23 & 0x7F800000) == 2139095040 )
    {
LABEL_19:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 803, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tangent )[0] ) && !IS_NAN( ( tangent )[1] ) && !IS_NAN( ( tangent )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tangent )[0] ) && !IS_NAN( ( tangent )[1] ) && !IS_NAN( ( tangent )[2] )") )
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

double __fastcall BgVehicleComponentPathFollowerCP::GetResumeFactor(BgVehicleComponentPathFollowerCP *this, double _XMM1_8)
{
  char v4; 
  char v5; 

  _RBX = DCONST_DVARMPFLT_bg_pathFollowerResumeFactorTime;
  _RDI = this;
  if ( !DCONST_DVARMPFLT_bg_pathFollowerResumeFactorTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerResumeFactorTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+18h]
    vmovss  xmm0, dword ptr [rbx+28h]
    vxorps  xmm1, xmm1, xmm1; min
    vcomiss xmm2, xmm1
  }
  if ( !v4 )
    goto LABEL_7;
  __asm { vcomiss xmm0, cs:__real@3a83126f }
  if ( v4 | v5 )
  {
LABEL_7:
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm2, xmm0
      vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000; val
      vmovss  xmm2, cs:__real@3f800000; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  return *(double *)&_XMM0;
}

/*
==============
BgVehicleComponentPathFollower::GetSpeed
==============
*/
float BgVehicleComponentPathFollower::GetSpeed(BgVehicleComponentPathFollower *this)
{
  _RAX = BgVehiclePhysicsComponent::GetOwner(this);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+178h]
    vmulss  xmm3, xmm0, dword ptr [rax+1A8h]
    vmovss  xmm1, dword ptr [rax+174h]
    vmovss  xmm0, dword ptr [rax+17Ch]
    vmulss  xmm2, xmm1, dword ptr [rax+1A4h]
    vmulss  xmm1, xmm0, dword ptr [rax+1ACh]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm4, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehicleComponentGoStraightTo::GoStraightTo
==============
*/
void BgVehicleComponentGoStraightTo::GoStraightTo(BgVehicleComponentGoStraightTo *this, const vec3_t *pos)
{
  int v9; 
  int v10; 
  int v11; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  _RBX = pos;
  _RDI = this;
  if ( (v9 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v10 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v11 & 0x7F800000) == 2139095040 )
  {
LABEL_9:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 192, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pos )[0] ) && !IS_NAN( ( pos )[1] ) && !IS_NAN( ( pos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pos )[0] ) && !IS_NAN( ( pos )[1] ) && !IS_NAN( ( pos )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx]
    vmovsd  qword ptr [rdi+48h], xmm0
  }
  _RDI->m_goalPos.v[2] = _RBX->v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx]
    vmovsd  qword ptr [rdi+54h], xmm0
  }
  _RDI->m_lookAheadPos.v[2] = _RBX->v[2];
  _RDI->m_goingStraightTo = 1;
}

/*
==============
BgVehicleComponentPathFinder::GoStraightToNode
==============
*/
void BgVehicleComponentPathFinder::GoStraightToNode(BgVehicleComponentPathFinder *this, __int16 nodeIdx)
{
  int v8; 
  int v9; 
  int v10; 
  float v12; 

  __asm { vmovss  xmm1, dword ptr [rcx+78h] }
  _RAX = nodeIdx;
  _RBX = this;
  __asm
  {
    vmovss  [rsp+58h+var_18], xmm1
    vmovss  xmm0, dword ptr [rcx+rax*8+7Ch]
    vmovss  xmm2, dword ptr [rcx+rax*8+80h]
    vmovss  [rsp+58h+var_28], xmm0
    vmovss  dword ptr [rsp+58h+var_20], xmm0
    vmovss  dword ptr [rsp+58h+var_20+4], xmm2
  }
  if ( (v8 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm { vmovss  [rsp+58h+var_28], xmm2 }
  if ( (v9 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm { vmovss  [rsp+58h+var_28], xmm1 }
  if ( (v10 & 0x7F800000) == 2139095040 )
  {
LABEL_9:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 192, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pos )[0] ) && !IS_NAN( ( pos )[1] ) && !IS_NAN( ( pos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pos )[0] ) && !IS_NAN( ( pos )[1] ) && !IS_NAN( ( pos )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovsd  xmm1, [rsp+58h+var_20]
    vmovsd  qword ptr [rbx+48h], xmm1
    vmovsd  qword ptr [rbx+54h], xmm1
  }
  _RBX->m_goalPos.v[2] = v12;
  _RBX->m_lookAheadPos.v[2] = v12;
  _RBX->m_goingStraightTo = 1;
}

/*
==============
BgVehicleComponentGoStraightTo::IsOnGoalPos
==============
*/

bool __fastcall BgVehicleComponentGoStraightTo::IsOnGoalPos(BgVehicleComponentGoStraightTo *this, double scale)
{
  bool v11; 
  bool result; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+54h]
    vucomiss xmm0, dword ptr [rcx+48h]
    vmovaps [rsp+88h+var_18], xmm6
  }
  _RBX = this;
  __asm { vmovaps xmm6, xmm1 }
  BgVehiclePhysicsComponent::GetOwnerPosition(this);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+48h]
    vmovss  xmm1, dword ptr [rbx+4Ch]
    vsubss  xmm4, xmm0, dword ptr [rax]
    vsubss  xmm2, xmm1, dword ptr [rax+4]
    vmulss  xmm1, xmm6, dword ptr [rbx+64h]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm0
    vcomiss xmm1, xmm4
  }
  result = !v11;
  if ( v11 )
  {
    __asm
    {
      vmovaps [rsp+88h+var_28], xmm7
      vmovaps [rsp+88h+var_38], xmm8
      vmovaps [rsp+88h+var_48], xmm9
      vmovaps [rsp+88h+var_58], xmm10
      vmovaps [rsp+88h+var_68], xmm11
    }
    _RAX = BgVehiclePhysicsComponent::GetOwner(_RBX);
    __asm
    {
      vmovss  xmm9, dword ptr [rax+174h]
      vmovss  xmm10, dword ptr [rax+178h]
      vmovss  xmm11, dword ptr [rax+17Ch]
    }
    BgVehiclePhysicsComponent::GetOwnerPosition(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+48h]
      vmovss  xmm1, dword ptr [rbx+4Ch]
      vsubss  xmm6, xmm0, dword ptr [rax]
      vsubss  xmm7, xmm1, dword ptr [rax+4]
      vmovss  xmm0, dword ptr [rbx+50h]
      vsubss  xmm8, xmm0, dword ptr [rax+8]
      vmulss  xmm0, xmm8, xmm8
      vmulss  xmm2, xmm7, xmm7
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
      vdivss  xmm5, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm5
      vmovaps xmm7, [rsp+88h+var_28]
      vmulss  xmm2, xmm1, xmm10
      vmovaps xmm10, [rsp+88h+var_58]
      vmulss  xmm0, xmm6, xmm5
      vmulss  xmm3, xmm0, xmm9
      vmovaps xmm9, [rsp+88h+var_48]
      vmulss  xmm0, xmm8, xmm5
      vmovaps xmm8, [rsp+88h+var_38]
      vmulss  xmm1, xmm0, xmm11
      vmovaps xmm11, [rsp+88h+var_68]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm3, xmm4, xmm1
      vxorps  xmm2, xmm2, xmm2
      vcomiss xmm3, xmm2
    }
    result = v11;
  }
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
  return result;
}

/*
==============
BgVehicleComponentPathFinder::Notification
==============
*/
void BgVehicleComponentPathFinder::Notification(BgVehicleComponentPathFinder *this, __int16 nodeIdx, scr_string_t str)
{
  unsigned int v8; 
  int m_entityNumber; 
  scrContext_t *v15; 
  LocalClientNum_t v17; 
  unsigned int *m_notifiedNodeBits; 
  __int64 localClientNum; 

  if ( nodeIdx == 14 )
  {
    v8 = 14;
  }
  else
  {
    v8 = nodeIdx;
    if ( Com_BitCheckAssert(this->m_notifiedNodeBits, nodeIdx, 4) )
      return;
  }
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( this->m_originalPathNumNodes <= 1u )
  {
    __asm { vmovss  xmm6, cs:__real@3f800000 }
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm6, xmm1, xmm0
    }
  }
  m_entityNumber = BgVehiclePhysicsComponent::GetOwner(this)->m_entityNumber;
  BgVehiclePhysicsComponent::GetOwner(this);
  v15 = ScriptContext_Server();
  Scr_AddInt(v15, this->m_overallCurNode);
  __asm { vmovaps xmm1, xmm6; value }
  Scr_AddFloat(v15, *(float *)&_XMM1);
  v17 = this->m_vehicleSystem->GetLocalClientNum(this->m_vehicleSystem);
  Scr_NotifyNum(v15, m_entityNumber, ENTITY_CLASS_GENTITY, str, 2u, v17);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  m_notifiedNodeBits = this->m_notifiedNodeBits;
  if ( !m_notifiedNodeBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  if ( v8 >= 0x20 )
  {
    LODWORD(localClientNum) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", localClientNum, 32) )
      __debugbreak();
  }
  m_notifiedNodeBits[(__int64)(int)v8 >> 5] |= 1 << (v8 & 0x1F);
}

/*
==============
BgVehicleComponentPathFollowerCP::PathDistanceToGoal
==============
*/
float BgVehicleComponentPathFollowerCP::PathDistanceToGoal(BgVehicleComponentPathFollowerCP *this)
{
  const BSplineCatmullRom *v4; 
  const BSplineCatmullRom *v6; 
  vec3_t v19; 
  vec3_t outPos; 

  _RDI = this;
  if ( this->m_pathType == PATH_CATMULLROM )
  {
    if ( !BG_BSpline_Data_IsValid(this->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
      __debugbreak();
    v4 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(_RDI->m_path.m_catmullRom.splineIndex, NULL);
    __asm { vmovss  xmm1, dword ptr [rdi+34h]; t }
    v6 = v4;
    BG_BSpline_CatmullRom_Evaluate(v4, *(float *)&_XMM1, &outPos, NULL, NULL, NULL);
    __asm { vmovss  xmm1, dword ptr [rdi+38h]; t }
    BG_BSpline_CatmullRom_Evaluate(v6, *(float *)&_XMM1, &v19, NULL, NULL, NULL);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+68h+var_38]
      vsubss  xmm3, xmm0, dword ptr [rsp+68h+outPos]
      vmovss  xmm1, dword ptr [rsp+68h+var_38+4]
      vmovss  xmm0, dword ptr [rsp+68h+var_38+8]
      vsubss  xmm2, xmm1, dword ptr [rsp+68h+outPos+4]
      vsubss  xmm4, xmm0, dword ptr [rsp+68h+outPos+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm0, xmm3, xmm0
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehicleComponentPathFollower::PathIsEnd
==============
*/
bool BgVehicleComponentPathFollower::PathIsEnd(BgVehicleComponentPathFollower *this)
{
  __int32 v3; 
  const BSplineCatmullRom *v5; 
  char v6; 
  char v7; 

  _RBX = this;
  v3 = this->m_pathType - 1;
  if ( !v3 )
    return _RBX->m_vehicleSystem->PathIsEnd(_RBX->m_vehicleSystem, &_RBX->m_path.m_vpp);
  if ( v3 != 1 )
    return 0;
  if ( !BG_BSpline_Data_IsValid(_RBX->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
    __debugbreak();
  v5 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(_RBX->m_path.m_catmullRom.splineIndex, NULL);
  *(double *)&_XMM0 = BG_BSpline_CatmullRom_EvalDuration(v5);
  __asm { vcomiss xmm0, dword ptr [rbx+34h] }
  return v6 | v7;
}

/*
==============
BgVehicleComponentPathFollowerCP::PathStep
==============
*/

void __fastcall BgVehicleComponentPathFollowerCP::PathStep(BgVehicleComponentPathFollowerCP *this, double deltaTime, double timeScale0, double timeScale1)
{
  BgVehicleComponentPathFollower::PathType m_pathType; 
  bool v14; 
  __int32 v15; 
  unsigned int *p_curNodeIndex; 
  unsigned int curNodeIndex; 
  const BSplineCatmullRom *v22; 
  BGVehicles *m_vehicleSystem; 
  void (__fastcall *PathUpdatePos)(BGVehicles *, const int, const float, const float, VehiclePathPos *, float *, vec3_t *, vec3_t *); 
  __int64 m_entityNumber; 
  vec3_t optOutDeriv; 
  char v37; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RSI = this;
  m_pathType = this->m_pathType;
  __asm
  {
    vmovaps xmm8, xmm3
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
  }
  v14 = m_pathType == PATH_NONE;
  v15 = m_pathType - 1;
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm0, dword ptr [rsi+150h]
        vmovss  xmm0, dword ptr [rsi+14Ch]
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, cs:__real@3a83126f
        vmovss  xmm6, dword ptr [rsi+34h]
      }
      p_curNodeIndex = &_RSI->m_path.m_catmullRom.curNodeIndex;
      curNodeIndex = _RSI->m_path.m_catmullRom.curNodeIndex;
      if ( !BG_BSpline_Data_IsValid(_RSI->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
        __debugbreak();
      v22 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(_RSI->m_path.m_catmullRom.splineIndex, NULL);
      __asm { vmovaps xmm1, xmm6; t }
      BG_BSpline_CatmullRom_Evaluate(v22, *(float *)&_XMM1, &_RSI->m_pathPosInterpolated, &optOutDeriv, &_RSI->m_path.m_catmullRom.curNodeIndex, &_RSI->m_path.m_vpp.speed);
      vectoangles(&optOutDeriv, &_RSI->m_pathAnglesInterpolated);
      if ( *p_curNodeIndex != curNodeIndex )
        BgVehicleComponentPathFollower::TriggerNodeNotification(_RSI, *p_curNodeIndex);
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rsi+30h]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rsi+150h]
    }
    if ( v14 || (unsigned __int8)v15 == 0 )
      __asm { vmovss  xmm6, dword ptr [rsi+14Ch] }
    m_vehicleSystem = _RSI->m_vehicleSystem;
    PathUpdatePos = m_vehicleSystem->PathUpdatePos;
    m_entityNumber = (unsigned int)BgVehiclePhysicsComponent::GetOwner(_RSI)->m_entityNumber;
    __asm
    {
      vmovaps xmm3, xmm6
      vmovaps xmm2, xmm7
    }
    ((void (__fastcall *)(BGVehicles *, __int64))PathUpdatePos)(m_vehicleSystem, m_entityNumber);
  }
  _R11 = &v37;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
BgVehicleComponentPathFollowerSP::PathStep
==============
*/

void __fastcall BgVehicleComponentPathFollowerSP::PathStep(BgVehicleComponentPathFollowerSP *this, double deltaTime, __int64 a3, double _XMM3_8)
{
  BgVehicleComponentPathFollower::PathType m_pathType; 
  bool v10; 
  __int32 v11; 
  unsigned int splineIndex; 
  unsigned int *p_curNodeIndex; 
  unsigned int curNodeIndex; 
  const BSplineCatmullRom *v23; 
  BGVehicles *m_vehicleSystem; 
  void (__fastcall *PathUpdatePos)(BGVehicles *, const int, const float, const float, VehiclePathPos *, float *, vec3_t *, vec3_t *); 
  __int64 m_entityNumber; 
  vec3_t optOutDeriv; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
  }
  _RSI = this;
  m_pathType = this->m_pathType;
  __asm { vmovaps xmm7, xmm1 }
  v10 = m_pathType == PATH_NONE;
  v11 = m_pathType - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000
        vxorps  xmm3, xmm3, xmm3
        vcomiss xmm3, dword ptr [rsi+150h]
        vmovss  xmm0, dword ptr [rsi+14Ch]
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcmpltss xmm1, xmm0, cs:__real@3a83126f
        vblendvps xmm2, xmm2, xmm3, xmm1
      }
      splineIndex = _RSI->m_path.m_catmullRom.splineIndex;
      p_curNodeIndex = &_RSI->m_path.m_catmullRom.curNodeIndex;
      curNodeIndex = _RSI->m_path.m_catmullRom.curNodeIndex;
      __asm
      {
        vmulss  xmm0, xmm7, xmm2
        vaddss  xmm6, xmm0, dword ptr [rsi+34h]
        vmovss  dword ptr [rsi+34h], xmm6
      }
      if ( !BG_BSpline_Data_IsValid(splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
        __debugbreak();
      v23 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(_RSI->m_path.m_catmullRom.splineIndex, NULL);
      __asm { vmovaps xmm1, xmm6; t }
      BG_BSpline_CatmullRom_Evaluate(v23, *(float *)&_XMM1, &_RSI->m_pathPosInterpolated, &optOutDeriv, &_RSI->m_path.m_catmullRom.curNodeIndex, &_RSI->m_path.m_vpp.speed);
      vectoangles(&optOutDeriv, &_RSI->m_pathAnglesInterpolated);
      if ( *p_curNodeIndex != curNodeIndex )
        BgVehicleComponentPathFollower::TriggerNodeNotification(_RSI, *p_curNodeIndex);
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rsi+30h]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rsi+150h]
    }
    if ( v10 || (unsigned __int8)v11 == 0 )
      __asm { vmovss  xmm6, dword ptr [rsi+14Ch] }
    m_vehicleSystem = _RSI->m_vehicleSystem;
    PathUpdatePos = m_vehicleSystem->PathUpdatePos;
    m_entityNumber = (unsigned int)BgVehiclePhysicsComponent::GetOwner(_RSI)->m_entityNumber;
    __asm
    {
      vmovaps xmm3, xmm6
      vmovaps xmm2, xmm7
    }
    ((void (__fastcall *)(BGVehicles *, __int64))PathUpdatePos)(m_vehicleSystem, m_entityNumber);
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
  }
}

/*
==============
BgVehicleComponentPathFollowerCP::PostStep
==============
*/

void __fastcall BgVehicleComponentPathFollowerCP::PostStep(BgVehicleComponentPathFollowerCP *this, double deltaTime)
{
  const BSplineCatmullRom *v38; 
  const BSplineCatmullRom *v40; 
  BgVehicleComponentPathFollower::PathType m_pathType; 
  __int32 v59; 
  BgVehicleComponentPathFollower::PathType v64; 
  bool v65; 
  __int32 v66; 
  unsigned int *p_curNodeIndex; 
  unsigned int curNodeIndex; 
  const BSplineCatmullRom *v72; 
  BGVehicles *m_vehicleSystem; 
  void (__fastcall *PathUpdatePos)(BGVehicles *, const int, const float, const float, VehiclePathPos *, float *, vec3_t *, vec3_t *); 
  BgVehiclePhysics *Owner; 
  __int64 v78; 
  char v110; 
  bool v111; 
  bool v116; 
  float v172; 
  float v178; 
  int m_entityNumber; 
  scrContext_t *v224; 
  LocalClientNum_t v225; 
  __int64 v229; 
  char *fmt; 
  float *optOutNodeT; 
  vec3_t *p_m_pathPosInterpolated; 
  double v233; 
  double v234; 
  vec3_t relativePoint; 
  vec3_t outPos; 
  vec3_t v239; 
  vec3_t velLs; 
  vec3_t outVelLs; 
  vec3_t v242; 
  vec3_t outVelWs; 
  vec3_t angles; 
  char v252; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovss  xmm6, cs:__real@41a00000
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm1, xmm9
    vmovss  dword ptr [rsp+1C0h+var_170], xmm6
    vmovaps xmm10, xmm1
  }
  _RSI = this;
  if ( (unsigned __int64)&v229 != _security_cookie )
  {
    _R14 = BgVehiclePhysicsComponent::GetOwner(this);
    BgVehicleComponentPathFollower::UpdateSteeringAngle(_RSI);
    __asm { vcomiss xmm9, dword ptr [rsi+18h] }
    if ( !v65 && !v111 )
    {
      _RBX = DCONST_DVARMPFLT_bg_pathFollowerMaxVertSpeed;
      __asm
      {
        vmovaps xmmword ptr [rsp+1C0h+var_58+8], xmm7
        vmovaps [rsp+1C0h+var_68+8], xmm8
        vmovaps xmmword ptr [rsp+1C0h+var_98+8], xmm11
        vmovaps [rsp+1C0h+var_B8+8], xmm13
        vmovaps [rsp+1C0h+var_D8+8], xmm15
      }
      if ( !DCONST_DVARMPFLT_bg_pathFollowerMaxVertSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMaxVertSpeed") )
        __debugbreak();
      __asm { vmovaps [rsp+1C0h+var_A8+8], xmm12 }
      Dvar_CheckFrontendServerThread(_RBX);
      v111 = _RSI->m_pathType == PATH_CATMULLROM;
      _R15 = &_RSI->m_pathPosInterpolated;
      __asm
      {
        vmovss  xmm0, dword ptr [r15]
        vmovss  xmm11, cs:__real@3f800000
        vmovss  xmm1, dword ptr [r15+4]
        vsubss  xmm4, xmm0, dword ptr [r14+198h]
        vsubss  xmm2, xmm1, dword ptr [r14+19Ch]
        vmovss  xmm5, dword ptr [rbx+28h]
        vmovss  xmm15, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmulss  xmm3, xmm2, xmm2
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm13, xmm3, xmm0
        vmovss  dword ptr [rsp+1C0h+var_170+4], xmm5
        vmovaps xmm7, xmm11
        vmovaps xmm8, xmm11
      }
      if ( v111 )
      {
        _RBX = DCONST_DVARMPFLT_bg_pathFollowerTimeAfterColl;
        __asm { vmovss  xmm12, dword ptr [r14+2ACh] }
        if ( !DCONST_DVARMPFLT_bg_pathFollowerTimeAfterColl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerTimeAfterColl") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm6, dword ptr [rbx+28h] }
        if ( Physics_IsRigidBodyValid(_R14->m_worldId, _R14->m_lastColliderBodyId) )
        {
          __asm
          {
            vcomiss xmm13, cs:__real@40000000
            vmovss  xmm8, cs:__real@3e4ccccd
            vxorps  xmm7, xmm7, xmm7
          }
        }
        __asm
        {
          vsubss  xmm1, xmm8, xmm7
          vandps  xmm1, xmm1, xmm15
          vcomiss xmm1, cs:__real@3a83126f
        }
      }
      if ( _RSI->m_pathType == PATH_CATMULLROM )
      {
        if ( !BG_BSpline_Data_IsValid(_RSI->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
          __debugbreak();
        v38 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(_RSI->m_path.m_catmullRom.splineIndex, NULL);
        __asm { vmovss  xmm1, dword ptr [rsi+34h]; t }
        v40 = v38;
        BG_BSpline_CatmullRom_Evaluate(v38, *(float *)&_XMM1, &outPos, NULL, NULL, NULL);
        __asm { vmovss  xmm1, dword ptr [rsi+38h]; t }
        BG_BSpline_CatmullRom_Evaluate(v40, *(float *)&_XMM1, &v242, NULL, NULL, NULL);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0C0h+var_110]
          vsubss  xmm3, xmm0, dword ptr [rsp+1C0h+outPos]
          vmovss  xmm1, dword ptr [rbp+0C0h+var_110+4]
          vmovss  xmm0, dword ptr [rbp+0C0h+var_110+8]
          vsubss  xmm2, xmm1, dword ptr [rsp+1C0h+outPos+4]
          vsubss  xmm4, xmm0, dword ptr [rsp+1C0h+outPos+8]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm6, xmm3, xmm0
        }
      }
      else
      {
        __asm { vxorps  xmm6, xmm6, xmm6 }
      }
      _RBX = DCONST_DVARMPFLT_bg_pathFollowerDistToGoalToBlock;
      if ( !DCONST_DVARMPFLT_bg_pathFollowerDistToGoalToBlock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerDistToGoalToBlock") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vmulss  xmm0, xmm0, xmm0
        vmaxss  xmm1, xmm6, xmm13
        vcomiss xmm1, xmm0
      }
      if ( !v65 )
        goto LABEL_78;
      _RBX = DCONST_DVARMPFLT_bg_pathFollowerAirTimeToBlock;
      __asm { vmovss  xmm6, dword ptr [r14+0C88h] }
      if ( !DCONST_DVARMPFLT_bg_pathFollowerAirTimeToBlock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerAirTimeToBlock") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( !v65 && !v111 )
      {
LABEL_78:
        if ( _RSI->m_pathType == PATH_CATMULLROM )
        {
          m_entityNumber = BgVehiclePhysicsComponent::GetOwner(_RSI)->m_entityNumber;
          BgVehiclePhysicsComponent::GetOwner(_RSI);
          v224 = ScriptContext_Server();
          Scr_AddInt(v224, _RSI->m_path.m_catmullRom.curNodeIndex);
          v225 = _RSI->m_vehicleSystem->GetLocalClientNum(_RSI->m_vehicleSystem);
          Scr_NotifyNum(v224, m_entityNumber, ENTITY_CLASS_GENTITY, scr_const.path_blocked, 1u, v225);
        }
        _RBX = DCONST_DVARMPFLT_bg_pathFollowerPauseAfterBlocked;
        if ( !DCONST_DVARMPFLT_bg_pathFollowerPauseAfterBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerPauseAfterBlocked") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx+28h]; pauseDuration
          vmovaps xmm1, xmm10; deltaTime
        }
        BgVehicleComponentPathFollowerCP::StopOnEnd(_RSI, *(float *)&_XMM1, *(float *)&_XMM2);
        goto LABEL_46;
      }
      m_pathType = _RSI->m_pathType;
      __asm { vmovaps [rsp+1C0h+var_C8+8], xmm14 }
      v59 = m_pathType - 1;
      if ( v59 )
      {
        if ( v59 == 1 )
        {
          __asm
          {
            vmovss  xmm12, dword ptr [r15]
            vmovss  xmm13, dword ptr [r15+4]
            vmovss  xmm14, dword ptr [r15+8]
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm14, dword ptr [rsp+1C0h+var_170]
            vmovss  xmm12, dword ptr [rsp+1C0h+var_170]
            vmovss  xmm13, dword ptr [rsp+1C0h+var_170]
          }
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm12, dword ptr [rsi+3Ch]
          vmovss  xmm13, dword ptr [rsi+40h]
          vmovss  xmm14, dword ptr [rsi+44h]
        }
      }
      AxisToAngles((const tmat33_t<vec3_t> *)&_R14->m_transform, &angles);
      __asm { vmovaps xmm1, xmm10; deltaTime }
      BgVehicleComponentPathFollower::UpdateManualSpeed(_RSI, *(float *)&_XMM1);
      v64 = _RSI->m_pathType;
      v65 = v64 == PATH_NONE;
      v66 = v64 - 1;
      if ( v66 )
      {
        if ( v66 == 1 )
        {
          __asm
          {
            vcomiss xmm9, dword ptr [rsi+150h]
            vmovss  xmm0, dword ptr [rsi+14Ch]
            vandps  xmm0, xmm0, xmm15
            vcomiss xmm0, cs:__real@3a83126f
            vmovss  xmm6, dword ptr [rsi+34h]
          }
          p_curNodeIndex = &_RSI->m_path.m_catmullRom.curNodeIndex;
          curNodeIndex = _RSI->m_path.m_catmullRom.curNodeIndex;
          if ( !BG_BSpline_Data_IsValid(_RSI->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
            __debugbreak();
          v72 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(_RSI->m_path.m_catmullRom.splineIndex, NULL);
          __asm { vmovaps xmm1, xmm6; t }
          BG_BSpline_CatmullRom_Evaluate(v72, *(float *)&_XMM1, &_RSI->m_pathPosInterpolated, &outPos, &_RSI->m_path.m_catmullRom.curNodeIndex, &_RSI->m_path.m_vpp.speed);
          vectoangles(&outPos, &_RSI->m_pathAnglesInterpolated);
          if ( *p_curNodeIndex != curNodeIndex )
            BgVehicleComponentPathFollower::TriggerNodeNotification(_RSI, *p_curNodeIndex);
        }
      }
      else
      {
        __asm
        {
          vcomiss xmm9, dword ptr [rsi+150h]
          vmovss  xmm6, dword ptr [rsi+30h]
        }
        if ( v65 || (unsigned __int8)v66 == 0 )
          __asm { vmovss  xmm6, dword ptr [rsi+14Ch] }
        m_vehicleSystem = _RSI->m_vehicleSystem;
        PathUpdatePos = m_vehicleSystem->PathUpdatePos;
        Owner = BgVehiclePhysicsComponent::GetOwner(_RSI);
        *(_QWORD *)&v233 = _RSI->m_pathAnglesInterpolated.v;
        p_m_pathPosInterpolated = &_RSI->m_pathPosInterpolated;
        v78 = (unsigned int)Owner->m_entityNumber;
        optOutNodeT = &_RSI->m_manualTime;
        __asm
        {
          vmovaps xmm3, xmm6
          vmovaps xmm2, xmm10
        }
        fmt = (char *)&_RSI->m_path;
        ((void (__fastcall *)(BGVehicles *, __int64))PathUpdatePos)(m_vehicleSystem, v78);
      }
      if ( BgVehicleComponentPathFollower::PathIsEnd(_RSI) )
      {
        BgVehiclePhysicsComponent::ScrNotify(_RSI, scr_const.reached_end_node);
        if ( _RSI->m_stopOnEnd )
        {
          __asm
          {
            vmovss  xmm2, cs:__real@7f7fffff; pauseDuration
            vmovaps xmm1, xmm10; deltaTime
          }
          BgVehicleComponentPathFollowerCP::StopOnEnd(_RSI, *(float *)&_XMM1, *(float *)&_XMM2);
LABEL_45:
          __asm { vmovaps xmm14, [rsp+1C0h+var_C8+8] }
LABEL_46:
          __asm
          {
            vmovaps xmm12, [rsp+1C0h+var_A8+8]
            vmovaps xmm11, xmmword ptr [rsp+1C0h+var_98+8]
            vmovaps xmm8, [rsp+1C0h+var_68+8]
            vmovaps xmm7, xmmword ptr [rsp+1C0h+var_58+8]
            vmovaps xmm13, [rsp+1C0h+var_B8+8]
            vmovaps xmm15, [rsp+1C0h+var_D8+8]
          }
          goto LABEL_47;
        }
        BgVehicleComponentPathFollowerCP::RestartPath(_RSI, 1);
      }
      __asm
      {
        vmovss  xmm3, dword ptr [r14+19Ch]
        vmovss  xmm4, dword ptr [r14+1A0h]
        vmovss  xmm0, dword ptr [r15]
        vsubss  xmm1, xmm0, dword ptr [r14+198h]
        vmovss  xmm0, dword ptr [r15+4]
        vdivss  xmm15, xmm11, xmm10
        vmulss  xmm2, xmm1, xmm15
        vsubss  xmm1, xmm0, xmm3
        vmovss  xmm0, dword ptr [r15+8]
        vmovss  dword ptr [rsp+1C0h+relativePoint], xmm2
        vmulss  xmm2, xmm1, xmm15
        vsubss  xmm1, xmm0, xmm4
        vmovss  dword ptr [rsp+1C0h+relativePoint+4], xmm2
        vmulss  xmm2, xmm1, xmm15
        vmovss  dword ptr [rsp+1C0h+relativePoint+8], xmm2
      }
      ProjectPointOnPlane(&relativePoint, &identityMatrix33.m[2], &relativePoint);
      BgVehiclePhysics::ComputeVelocityLocalSpace(_R14, &_R14->m_linearVelocityWs, &outVelLs);
      BgVehiclePhysics::ComputeVelocityLocalSpace(_R14, &relativePoint, &velLs);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0C0h+velLs]
        vmovss  xmm1, dword ptr [rbp+0C0h+velLs+4]
        vsubss  xmm7, xmm0, dword ptr [rbp+0C0h+outVelLs]
        vsubss  xmm8, xmm1, dword ptr [rbp+0C0h+outVelLs+4]
      }
      *(double *)&_XMM0 = BgVehicleComponentPathFollowerCP::GetResumeFactor(_RSI);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_R14);
      __asm
      {
        vmulss  xmm6, xmm6, xmm0
        vcomiss xmm6, xmm9
      }
      if ( v110 )
      {
        __asm
        {
          vxorpd  xmm0, xmm0, xmm0
          vmovsd  [rsp+1C0h+var_180], xmm0
          vcvtss2sd xmm1, xmm6, xmm6
          vmovsd  [rsp+1C0h+var_188], xmm1
        }
        v116 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 24, ASSERT_TYPE_ASSERT, "( maxLength ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "maxLength", "0.0f", v233, v234);
        v110 = 0;
        v111 = !v116;
        if ( v116 )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm0, xmm8, xmm8
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm6, xmm6
        vcomiss xmm2, xmm0
      }
      if ( !(v110 | v111) )
      {
        __asm
        {
          vsqrtss xmm0, xmm2, xmm2
          vdivss  xmm1, xmm6, xmm0
          vmulss  xmm7, xmm7, xmm1
          vmulss  xmm8, xmm1, xmm8
        }
      }
      __asm
      {
        vaddss  xmm1, xmm7, dword ptr [rbp+0C0h+outVelLs]
        vaddss  xmm0, xmm8, dword ptr [rbp+0C0h+outVelLs+4]
        vmovss  dword ptr [rbp+0C0h+velLs], xmm1
        vmovss  xmm1, dword ptr [rbp+0C0h+outVelLs+8]
        vminss  xmm2, xmm1, dword ptr [rsp+1C0h+var_170+4]
        vmovss  dword ptr [rbp+0C0h+velLs+8], xmm2
        vmovss  dword ptr [rbp+0C0h+velLs+4], xmm0
      }
      BgVehiclePhysics::ComputeVelocityWorldSpace(_R14, &velLs, &relativePoint);
      __asm
      {
        vsubss  xmm7, xmm12, dword ptr [r15]
        vsubss  xmm6, xmm13, dword ptr [r15+4]
        vsubss  xmm8, xmm14, dword ptr [r15+8]
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_pathFollowerMinLookaheadDist, "bg_pathFollowerMinLookaheadDist");
      __asm
      {
        vmulss  xmm2, xmm6, xmm6
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm3, xmm2, xmm1
        vmovss  xmm1, dword ptr [rbp+0C0h+angles+4]
        vmulss  xmm2, xmm8, xmm8
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm0, xmm0, xmm0
        vcomiss xmm4, xmm0
      }
      if ( v65 )
        __asm { vmovaps xmm0, xmm1 }
      else
        __asm { vmovss  xmm0, dword ptr [rsi+118h] }
      __asm
      {
        vsubss  xmm0, xmm0, xmm1
        vmulss  xmm4, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vxorps  xmm1, xmm1, xmm1
        vroundss xmm3, xmm1, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, cs:__real@40c90fdb
        vmulss  xmm2, xmm1, xmm15
        vmovss  dword ptr [rsi+140h], xmm2
      }
      BgVehiclePhysics::ComputeVelocityLocalSpace(_R14, &_R14->m_angularVelocityWs, &v239);
      __asm
      {
        vmulss  xmm0, xmm10, cs:rollDamp
        vmulss  xmm3, xmm10, dword ptr [rsp+1C0h+var_170]
        vsubss  xmm1, xmm11, xmm0
        vmaxss  xmm2, xmm1, xmm9
        vmulss  xmm1, xmm2, dword ptr [rbp+0C0h+var_140]
        vmovss  dword ptr [rbp+0C0h+var_140], xmm1
        vsubss  xmm0, xmm11, xmm3
        vmaxss  xmm1, xmm0, xmm9
        vmulss  xmm1, xmm1, dword ptr [rbp+0C0h+var_140+4]
        vmovss  dword ptr [rbp+0C0h+var_140+4], xmm1
      }
      *(double *)&_XMM0 = BgVehicleComponentPathFollowerCP::GetResumeFactor(_RSI);
      __asm
      {
        vmulss  xmm2, xmm0, dword ptr [rbp+0C0h+var_140]
        vmulss  xmm0, xmm0, dword ptr [rbp+0C0h+var_140+4]
        vmovss  xmm1, dword ptr [rsi+13Ch]
        vmovss  dword ptr [rbp+0C0h+var_140+4], xmm0
        vmovss  dword ptr [rbp+0C0h+var_140], xmm2
        vmovss  dword ptr [rbp+0C0h+var_140+8], xmm1
      }
      BgVehiclePhysics::ComputeVelocityWorldSpace(_R14, &v239, &outVelWs);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0C0h+velLs+4]
        vmovss  xmm1, dword ptr [rbp+0C0h+velLs]
        vmulss  xmm3, xmm0, xmm0
        vmovss  xmm0, dword ptr [rbp+0C0h+velLs+8]
        vmulss  xmm2, xmm1, xmm1
        vmulss  xmm1, xmm0, xmm0
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm6, xmm4, xmm1
      }
      *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_R14);
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vmovss  xmm0, dword ptr [rsp+1C0h+relativePoint]
        vcomiss xmm6, xmm1
        vmovss  xmm1, dword ptr [rsp+1C0h+relativePoint+4]
      }
      _RSI->m_maxSpeedReached = !v65;
      __asm
      {
        vsubss  xmm7, xmm0, dword ptr [rsi+120h]
        vmovss  xmm0, dword ptr [rsp+1C0h+relativePoint+8]
        vsubss  xmm2, xmm0, dword ptr [rsi+128h]
        vsubss  xmm6, xmm1, dword ptr [rsi+124h]
        vmovss  dword ptr [rbp+0C0h+var_110+8], xmm2
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerAccelAngularVelMult, "bg_pathFollowerAccelAngularVelMult");
      v172 = v242.v[2];
      __asm
      {
        vunpcklps xmm6, xmm7, xmm6
        vmovaps xmm3, xmm10
      }
      outPos.v[2] = v242.v[2];
      __asm
      {
        vmovss  dword ptr [rsp+1C0h+fmt], xmm0
        vmovsd  qword ptr [rsp+1C0h+outPos], xmm6
      }
      BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration(_RSI, _R14, &outPos, *(float *)&_XMM3, *(float *)&fmt, &outVelWs);
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerVelAngularVelMult, "bg_pathFollowerVelAngularVelMult");
      __asm { vmovsd  xmm1, qword ptr [rsp+1C0h+relativePoint] }
      outPos.v[2] = relativePoint.v[2];
      __asm
      {
        vmovss  dword ptr [rsp+1C0h+fmt], xmm0
        vmovsd  qword ptr [rsp+1C0h+outPos], xmm1
        vmovaps xmm3, xmm10
      }
      BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration(_RSI, _R14, &outPos, *(float *)&_XMM3, *(float *)&fmt, &outVelWs);
      BgVehiclePhysics::SetLinearVelocity(_R14, &relativePoint, 0);
      BgVehiclePhysics::SetAngularVelocity(_R14, &outVelWs, 0);
      __asm { vmovsd  xmm0, qword ptr [rsp+1C0h+relativePoint] }
      v178 = relativePoint.v[2];
      __asm
      {
        vmovsd  qword ptr [rsi+120h], xmm0
        vmovsd  qword ptr [rsi+12Ch], xmm6
      }
      _RSI->m_previousLinearVelocityWs.v[2] = v178;
      _RSI->m_previousLinearAccelerationWs.v[2] = v172;
      __asm
      {
        vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
        vmulss  xmm3, xmm0, dword ptr [r14+190h]
        vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
        vmulss  xmm2, xmm1, dword ptr [r14+18Ch]
        vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
        vmulss  xmm1, xmm0, dword ptr [r14+194h]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm0, xmm4, xmm1; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm11; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      _RBX = DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed;
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vsubss  xmm1, xmm11, xmm1
        vmulss  xmm8, xmm1, cs:__real@3fc00000
      }
      if ( !DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMaxYawAccelSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed;
      if ( !DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinYawAccelSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( (v65 || v111) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 1318, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed, \"bg_pathFollowerMaxYawAccelSpeed\" ) > Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed, \"bg_pathFollowerMinYawAccelSpeed\" ))", (const char *)&queryFormat, "Dconst_GetFloat( bg_pathFollowerMaxYawAccelSpeed ) > Dconst_GetFloat( bg_pathFollowerMinYawAccelSpeed )") )
        __debugbreak();
      _RBX = DCONST_DVARFLT_bg_pathFollowerMaxYawAccel;
      if ( !DCONST_DVARFLT_bg_pathFollowerMaxYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMaxYawAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_bg_pathFollowerMinYawAccel;
      if ( !DCONST_DVARFLT_bg_pathFollowerMinYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinYawAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( (v65 || v111) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 1319, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_pathFollowerMaxYawAccel, \"bg_pathFollowerMaxYawAccel\" ) > Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_pathFollowerMinYawAccel, \"bg_pathFollowerMinYawAccel\" ))", (const char *)&queryFormat, "Dconst_GetFloat( bg_pathFollowerMaxYawAccel ) > Dconst_GetFloat( bg_pathFollowerMinYawAccel )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1C0h+relativePoint+4]
        vmovss  xmm1, dword ptr [rsp+1C0h+relativePoint]
        vmulss  xmm2, xmm1, xmm1
        vmulss  xmm3, xmm0, xmm0
        vmovss  xmm0, dword ptr [rsp+1C0h+relativePoint+8]
        vmulss  xmm1, xmm0, xmm0
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vsqrtss xmm6, xmm2, xmm2
      }
      Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed, "bg_pathFollowerMinYawAccelSpeed");
      __asm { vsubss  xmm7, xmm6, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed, "bg_pathFollowerMaxYawAccelSpeed");
      __asm { vmovaps xmm6, xmm0 }
      Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed, "bg_pathFollowerMinYawAccelSpeed");
      __asm
      {
        vsubss  xmm1, xmm6, xmm0
        vandps  xmm2, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm2, cs:__real@3a83126f
      }
      if ( !v65 && !v111 )
      {
        __asm
        {
          vdivss  xmm0, xmm7, xmm1; val
          vxorps  xmm1, xmm1, xmm1; min
          vmovaps xmm2, xmm11; max
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm11, xmm0 }
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerMaxYawAccel, "bg_pathFollowerMaxYawAccel");
      __asm { vmovaps xmm6, xmm0 }
      Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerMinYawAccel, "bg_pathFollowerMinYawAccel");
      __asm
      {
        vsubss  xmm1, xmm6, xmm0
        vmulss  xmm6, xmm1, xmm11
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerMinYawAccel, "bg_pathFollowerMinYawAccel");
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+140h]
        vaddss  xmm2, xmm0, xmm6
        vsubss  xmm0, xmm1, dword ptr [rsi+13Ch]
        vmovss  dword ptr [rsi+148h], xmm2
        vmulss  xmm3, xmm0, xmm10
        vaddss  xmm2, xmm8, xmm2
        vmulss  xmm1, xmm3, xmm2
        vmovss  dword ptr [rsi+13Ch], xmm1
      }
      goto LABEL_45;
    }
  }
LABEL_47:
  _R11 = &v252;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-68h]
    vmovaps xmm10, xmmword ptr [r11-78h]
  }
}

/*
==============
BgVehicleComponentPathFollowerSP::PostStep
==============
*/

void __fastcall BgVehicleComponentPathFollowerSP::PostStep(BgVehicleComponentPathFollowerSP *this, double deltaTime)
{
  BgVehiclePhysics *Owner; 
  char v15; 
  BgVehicleComponentPathFollower::PathType m_pathType; 
  __int32 v19; 
  BgVehicleComponentPathFollower::PathType v30; 
  bool v32; 
  __int32 v33; 
  unsigned int splineIndex; 
  unsigned int *p_curNodeIndex; 
  unsigned int curNodeIndex; 
  const BSplineCatmullRom *v44; 
  BGVehicles *m_vehicleSystem; 
  void (__fastcall *PathUpdatePos)(BGVehicles *, const int, const float, const float, VehiclePathPos *, float *, vec3_t *, vec3_t *); 
  BgVehiclePhysics *v49; 
  __int64 m_entityNumber; 
  float v125; 
  float v132; 
  const dvar_t *v154; 
  const dvar_t *v165; 
  const dvar_t *v176; 
  __int64 v193; 
  char *fmt; 
  float *optOutNodeT; 
  vec3_t *p_m_pathPosInterpolated; 
  vec3_t *p_m_pathAnglesInterpolated; 
  vec3_t relativePoint; 
  vec3_t optOutDeriv; 
  vec3_t outVelWs; 
  vec3_t velLs; 
  vec3_t v203; 
  vec3_t angVel; 
  vec3_t outVelLs; 
  float v206; 
  vec3_t v207; 
  vec3_t angles; 
  char v214; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm1, xmm8
    vmovaps xmm9, xmm1
  }
  _RSI = this;
  if ( (unsigned __int64)&v193 != _security_cookie )
  {
    Owner = BgVehiclePhysicsComponent::GetOwner(this);
    __asm { vcomiss xmm8, dword ptr [rsi+18h] }
    _R14 = Owner;
    if ( !(v32 | v15) )
    {
      if ( Physics_IsRigidBodyValid(Owner->m_worldId, Owner->m_lastColliderBodyId) && Physics_IsRigidBodyDynamic(_R14->m_worldId, _R14->m_lastColliderBodyId) )
      {
        __asm
        {
          vmovss  xmm0, cs:timeToLeavePhysicsReact
          vcomiss xmm0, dword ptr [r14+2ACh]
          vmovsd  xmm0, qword ptr [r14+198h]
          vmovsd  qword ptr [rsi+108h], xmm0
        }
        _RSI->m_pathPosInterpolated.v[2] = _R14->m_transform.m[3].v[2];
        goto LABEL_80;
      }
      m_pathType = _RSI->m_pathType;
      __asm
      {
        vmovaps xmmword ptr [rsp+1A0h+var_48+8], xmm6
        vmovaps [rsp+1A0h+var_58+8], xmm7
        vmovaps xmmword ptr [rsp+1A0h+var_88+8], xmm10
        vmovaps [rsp+1A0h+var_A8+8], xmm12
      }
      v19 = m_pathType - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          __asm
          {
            vmovss  xmm6, dword ptr [rsi+108h]
            vmovss  xmm7, dword ptr [rsi+10Ch]
            vmovss  xmm10, dword ptr [rsi+110h]
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm6, dword ptr [rsp+1A0h+var_160]
            vmovss  xmm10, dword ptr [rsp+1A0h+var_160]
            vmovss  xmm7, dword ptr [rsp+1A0h+var_160]
          }
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rsi+3Ch]
          vmovss  xmm7, dword ptr [rsi+40h]
          vmovss  xmm10, dword ptr [rsi+44h]
        }
      }
      __asm { vmovaps [rsp+1A0h+var_98+8], xmm11 }
      AxisToAngles((const tmat33_t<vec3_t> *)&_R14->m_transform, &angles);
      __asm { vmovaps xmm1, xmm9; deltaTime }
      BgVehicleComponentPathFollower::UpdateManualSpeed(_RSI, *(float *)&_XMM1);
      v30 = _RSI->m_pathType;
      __asm { vmovss  xmm12, cs:__real@3f800000 }
      v32 = v30 == PATH_NONE;
      v33 = v30 - 1;
      if ( v33 )
      {
        if ( v33 == 1 )
        {
          __asm
          {
            vcomiss xmm8, dword ptr [rsi+150h]
            vmovaps xmm2, xmm12
            vmovss  xmm0, dword ptr [rsi+14Ch]
            vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vcmpltss xmm1, xmm0, cs:__real@3a83126f
            vblendvps xmm2, xmm2, xmm8, xmm1
          }
          splineIndex = _RSI->m_path.m_catmullRom.splineIndex;
          p_curNodeIndex = &_RSI->m_path.m_catmullRom.curNodeIndex;
          curNodeIndex = _RSI->m_path.m_catmullRom.curNodeIndex;
          __asm
          {
            vmulss  xmm0, xmm9, xmm2
            vaddss  xmm11, xmm0, dword ptr [rsi+34h]
            vmovss  dword ptr [rsi+34h], xmm11
          }
          if ( !BG_BSpline_Data_IsValid(splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
            __debugbreak();
          v44 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(_RSI->m_path.m_catmullRom.splineIndex, NULL);
          __asm { vmovaps xmm1, xmm11; t }
          BG_BSpline_CatmullRom_Evaluate(v44, *(float *)&_XMM1, &_RSI->m_pathPosInterpolated, &optOutDeriv, &_RSI->m_path.m_catmullRom.curNodeIndex, &_RSI->m_path.m_vpp.speed);
          vectoangles(&optOutDeriv, &_RSI->m_pathAnglesInterpolated);
          if ( *p_curNodeIndex != curNodeIndex )
            BgVehicleComponentPathFollower::TriggerNodeNotification(_RSI, *p_curNodeIndex);
        }
      }
      else
      {
        __asm
        {
          vcomiss xmm8, dword ptr [rsi+150h]
          vmovss  xmm11, dword ptr [rsi+30h]
        }
        if ( v32 || (unsigned __int8)v33 == 0 )
          __asm { vmovss  xmm11, dword ptr [rsi+14Ch] }
        m_vehicleSystem = _RSI->m_vehicleSystem;
        PathUpdatePos = m_vehicleSystem->PathUpdatePos;
        v49 = BgVehiclePhysicsComponent::GetOwner(_RSI);
        p_m_pathAnglesInterpolated = &_RSI->m_pathAnglesInterpolated;
        p_m_pathPosInterpolated = &_RSI->m_pathPosInterpolated;
        m_entityNumber = (unsigned int)v49->m_entityNumber;
        optOutNodeT = &_RSI->m_manualTime;
        __asm
        {
          vmovaps xmm3, xmm11
          vmovaps xmm2, xmm9
        }
        fmt = (char *)&_RSI->m_path;
        ((void (__fastcall *)(BGVehicles *, __int64))PathUpdatePos)(m_vehicleSystem, m_entityNumber);
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+108h]
        vmovss  xmm1, dword ptr [rsi+10Ch]
        vsubss  xmm6, xmm0, xmm6
        vmovss  xmm0, dword ptr [rsi+110h]
        vsubss  xmm10, xmm0, xmm10
        vsubss  xmm7, xmm1, xmm7
      }
      if ( BgVehicleComponentPathFollower::PathIsEnd(_RSI) )
      {
        BgVehiclePhysicsComponent::ScrNotify(_RSI, scr_const.reached_end_node);
        if ( _RSI->m_stopOnEnd )
        {
          __asm
          {
            vmovss  dword ptr [rsp+1A0h+outVelWs], xmm8
            vmovss  dword ptr [rsp+1A0h+outVelWs+4], xmm8
            vmovss  dword ptr [rsp+1A0h+outVelWs+8], xmm8
          }
          BgVehiclePhysics::ComputeVelocityLocalSpace(_R14, &_R14->m_angularVelocityWs, &outVelLs);
          BgVehiclePhysics::ComputeVelocityWorldSpace(_R14, &outVelLs, &outVelWs);
          __asm
          {
            vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
            vmovss  xmm0, dword ptr [rsi+120h]
            vmovss  xmm1, dword ptr [rsi+128h]
            vxorps  xmm7, xmm0, xmm2
            vmovss  xmm0, dword ptr [rsi+124h]
            vxorps  xmm6, xmm0, xmm2
            vxorps  xmm2, xmm1, xmm2
            vmovss  [rbp+0A0h+var_D8], xmm2
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_pathFollowerAccelAngularVelMult, "bg_pathFollowerAccelAngularVelMult");
          optOutDeriv.v[2] = v206;
          __asm
          {
            vunpcklps xmm1, xmm7, xmm6
            vmovaps xmm3, xmm9
            vmovss  dword ptr [rsp+1A0h+fmt], xmm0
            vmovsd  qword ptr [rsp+1A0h+optOutDeriv], xmm1
          }
          BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration(_RSI, _R14, &optOutDeriv, *(float *)&_XMM3, *(float *)&fmt, &outVelWs);
          __asm
          {
            vmovss  dword ptr [rsp+1A0h+optOutDeriv], xmm8
            vmovss  dword ptr [rsp+1A0h+optOutDeriv+4], xmm8
            vmovss  dword ptr [rsp+1A0h+optOutDeriv+8], xmm8
          }
          BgVehiclePhysics::SetLinearVelocity(_R14, &optOutDeriv, 0);
          BgVehiclePhysics::SetAngularVelocity(_R14, &outVelWs, 0);
          __asm { vmovss  xmm1, cs:__real@7f7fffff; pauseTimeInSecs }
          BgVehiclePhysicsComponent::SetPause(_RSI, *(float *)&_XMM1);
LABEL_79:
          __asm
          {
            vmovaps xmm11, [rsp+1A0h+var_98+8]
            vmovaps xmm6, xmmword ptr [rsp+1A0h+var_48+8]
            vmovaps xmm7, [rsp+1A0h+var_58+8]
            vmovaps xmm10, xmmword ptr [rsp+1A0h+var_88+8]
            vmovaps xmm12, [rsp+1A0h+var_A8+8]
          }
          goto LABEL_80;
        }
        BgVehicleComponentPathFollowerSP::RestartPath(_RSI);
      }
      __asm
      {
        vmovss  xmm3, dword ptr [r14+19Ch]
        vmovss  xmm4, dword ptr [r14+1A0h]
        vmovss  xmm0, dword ptr [rsi+108h]
        vsubss  xmm1, xmm0, dword ptr [r14+198h]
        vmovss  xmm0, dword ptr [rsi+10Ch]
        vdivss  xmm11, xmm12, xmm9
        vmulss  xmm2, xmm1, xmm11
        vsubss  xmm1, xmm0, xmm3
        vmovss  xmm0, dword ptr [rsi+110h]
        vmovss  dword ptr [rsp+1A0h+relativePoint], xmm2
        vmulss  xmm2, xmm1, xmm11
        vsubss  xmm1, xmm0, xmm4
        vmovss  dword ptr [rsp+1A0h+relativePoint+4], xmm2
        vmulss  xmm2, xmm1, xmm11
        vmovss  dword ptr [rsp+1A0h+relativePoint+8], xmm2
      }
      ProjectPointOnPlane(&relativePoint, &identityMatrix33.m[2], &relativePoint);
      BgVehiclePhysics::ComputeVelocityLocalSpace(_R14, &_R14->m_linearVelocityWs, &v207);
      BgVehiclePhysics::ComputeVelocityLocalSpace(_R14, &relativePoint, &velLs);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0A0h+var_D0+8]
        vmovss  dword ptr [rbp+0A0h+velLs+8], xmm0
      }
      BgVehiclePhysics::ComputeVelocityWorldSpace(_R14, &velLs, &relativePoint);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1A0h+relativePoint+8]
        vminss  xmm1, xmm0, cs:vertClip
      }
      _RBX = DCONST_DVARMPFLT_bg_pathFollowerMinLookaheadDist;
      __asm
      {
        vmulss  xmm0, xmm6, xmm6
        vmulss  xmm2, xmm7, xmm7
        vmovss  dword ptr [rsp+1A0h+relativePoint+8], xmm1
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm1, xmm10, xmm10
        vaddss  xmm6, xmm3, xmm1
      }
      if ( !DCONST_DVARMPFLT_bg_pathFollowerMinLookaheadDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinLookaheadDist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vmovss  xmm2, dword ptr [rbp+0A0h+angles+4]
        vmulss  xmm1, xmm0, xmm0
        vcomiss xmm6, xmm1
      }
      if ( v32 )
        __asm { vmovaps xmm0, xmm2 }
      else
        __asm { vmovss  xmm0, dword ptr [rsi+118h] }
      __asm
      {
        vsubss  xmm0, xmm0, xmm2
        vmulss  xmm4, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vxorps  xmm1, xmm1, xmm1
        vroundss xmm3, xmm1, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, cs:__real@40c90fdb
        vmulss  xmm2, xmm1, xmm11
        vmovss  dword ptr [rsi+140h], xmm2
      }
      BgVehiclePhysics::ComputeVelocityLocalSpace(_R14, &_R14->m_angularVelocityWs, &v203);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+13Ch]
        vmulss  xmm1, xmm9, cs:facDamp
        vmovss  dword ptr [rbp+0A0h+var_110+8], xmm0
        vsubss  xmm0, xmm12, xmm1
        vmaxss  xmm2, xmm0, xmm8
        vmulss  xmm1, xmm2, dword ptr [rbp+0A0h+var_110]
        vmovss  dword ptr [rbp+0A0h+var_110], xmm1
      }
      BgVehiclePhysics::ComputeVelocityWorldSpace(_R14, &v203, &angVel);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0A0h+velLs]
        vmovss  xmm1, dword ptr [rbp+0A0h+velLs+4]
        vmulss  xmm3, xmm0, xmm0
        vmovss  xmm0, dword ptr [rbp+0A0h+velLs+8]
        vmulss  xmm2, xmm1, xmm1
        vmulss  xmm1, xmm0, xmm0
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm6, xmm4, xmm1
      }
      *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_R14);
      __asm
      {
        vmovss  xmm2, dword ptr [rsp+1A0h+relativePoint+4]
        vmulss  xmm1, xmm0, xmm0
        vmovss  xmm0, dword ptr [rsp+1A0h+relativePoint]
        vcomiss xmm6, xmm1
      }
      _RSI->m_maxSpeedReached = !v32;
      __asm
      {
        vsubss  xmm1, xmm0, dword ptr [rsi+120h]
        vsubss  xmm0, xmm2, dword ptr [rsi+124h]
      }
      _RBX = DCONST_DVARFLT_bg_pathFollowerAccelAngularVelMult;
      __asm
      {
        vmovss  dword ptr [rsp+1A0h+outVelWs], xmm1
        vmovss  xmm1, dword ptr [rsp+1A0h+relativePoint+8]
        vsubss  xmm2, xmm1, dword ptr [rsi+128h]
        vmovss  dword ptr [rsp+1A0h+outVelWs+8], xmm2
        vmovss  dword ptr [rsp+1A0h+outVelWs+4], xmm0
      }
      if ( !DCONST_DVARFLT_bg_pathFollowerAccelAngularVelMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerAccelAngularVelMult") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vmovsd  xmm6, qword ptr [rsp+1A0h+outVelWs]
      }
      v125 = outVelWs.v[2];
      __asm { vmovaps xmm3, xmm9 }
      optOutDeriv.v[2] = outVelWs.v[2];
      __asm
      {
        vmovss  dword ptr [rsp+1A0h+fmt], xmm0
        vmovsd  qword ptr [rsp+1A0h+optOutDeriv], xmm6
      }
      BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration(_RSI, _R14, &optOutDeriv, *(float *)&_XMM3, *(float *)&fmt, &angVel);
      _RBX = DCONST_DVARFLT_bg_pathFollowerVelAngularVelMult;
      if ( !DCONST_DVARFLT_bg_pathFollowerVelAngularVelMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerVelAngularVelMult") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovsd  xmm0, qword ptr [rsp+1A0h+relativePoint] }
      optOutDeriv.v[2] = relativePoint.v[2];
      __asm
      {
        vmovsd  qword ptr [rsp+1A0h+optOutDeriv], xmm0
        vmovss  xmm0, dword ptr [rbx+28h]
        vmovaps xmm3, xmm9
        vmovss  dword ptr [rsp+1A0h+fmt], xmm0
      }
      BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration(_RSI, _R14, &optOutDeriv, *(float *)&_XMM3, *(float *)&fmt, &angVel);
      BgVehiclePhysics::SetLinearVelocity(_R14, &relativePoint, 0);
      BgVehiclePhysics::SetAngularVelocity(_R14, &angVel, 0);
      __asm { vmovsd  xmm0, qword ptr [rsp+1A0h+relativePoint] }
      v132 = relativePoint.v[2];
      __asm
      {
        vmovsd  qword ptr [rsi+120h], xmm0
        vmovsd  qword ptr [rsi+12Ch], xmm6
      }
      _RSI->m_previousLinearVelocityWs.v[2] = v132;
      _RSI->m_previousLinearAccelerationWs.v[2] = v125;
      BgVehicleComponentPathFollower::UpdateSteeringAngle(_RSI);
      __asm
      {
        vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
        vmulss  xmm3, xmm0, dword ptr [r14+190h]
        vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
        vmulss  xmm2, xmm1, dword ptr [r14+18Ch]
        vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
        vmulss  xmm1, xmm0, dword ptr [r14+194h]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm0, xmm4, xmm1; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm12; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      _RBX = DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed;
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vsubss  xmm1, xmm12, xmm1
        vmulss  xmm10, xmm1, cs:__real@3fc00000
      }
      if ( !DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMaxYawAccelSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed;
      if ( !DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinYawAccelSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( v32 | v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 1498, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed, \"bg_pathFollowerMaxYawAccelSpeed\" ) > Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed, \"bg_pathFollowerMinYawAccelSpeed\" ))", (const char *)&queryFormat, "Dconst_GetFloat( bg_pathFollowerMaxYawAccelSpeed ) > Dconst_GetFloat( bg_pathFollowerMinYawAccelSpeed )") )
        __debugbreak();
      _RBX = DCONST_DVARFLT_bg_pathFollowerMaxYawAccel;
      if ( !DCONST_DVARFLT_bg_pathFollowerMaxYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMaxYawAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_bg_pathFollowerMinYawAccel;
      if ( !DCONST_DVARFLT_bg_pathFollowerMinYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinYawAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( v32 | v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 1499, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_pathFollowerMaxYawAccel, \"bg_pathFollowerMaxYawAccel\" ) > Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_pathFollowerMinYawAccel, \"bg_pathFollowerMinYawAccel\" ))", (const char *)&queryFormat, "Dconst_GetFloat( bg_pathFollowerMaxYawAccel ) > Dconst_GetFloat( bg_pathFollowerMinYawAccel )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1A0h+relativePoint+4]
        vmovss  xmm1, dword ptr [rsp+1A0h+relativePoint]
      }
      v154 = DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed;
      __asm
      {
        vmulss  xmm2, xmm1, xmm1
        vmulss  xmm3, xmm0, xmm0
        vmovss  xmm0, dword ptr [rsp+1A0h+relativePoint+8]
        vmulss  xmm1, xmm0, xmm0
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vsqrtss xmm6, xmm2, xmm2
      }
      if ( !DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinYawAccelSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v154);
      __asm { vsubss  xmm7, xmm6, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed;
      if ( !DCONST_DVARFLT_bg_pathFollowerMaxYawAccelSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMaxYawAccelSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      v165 = DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed;
      if ( !DCONST_DVARFLT_bg_pathFollowerMinYawAccelSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinYawAccelSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v165);
      __asm
      {
        vsubss  xmm2, xmm6, dword ptr [rbx+28h]
        vandps  xmm0, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, cs:__real@3a83126f
      }
      if ( !(v32 | v15) )
      {
        __asm
        {
          vdivss  xmm0, xmm7, xmm2; val
          vmovaps xmm2, xmm12; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm12, xmm0 }
      }
      _RBX = DCONST_DVARFLT_bg_pathFollowerMinYawAccel;
      if ( !DCONST_DVARFLT_bg_pathFollowerMinYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinYawAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm7, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_bg_pathFollowerMaxYawAccel;
      if ( !DCONST_DVARFLT_bg_pathFollowerMaxYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMaxYawAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      v176 = DCONST_DVARFLT_bg_pathFollowerMinYawAccel;
      if ( !DCONST_DVARFLT_bg_pathFollowerMinYawAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerMinYawAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v176);
      __asm
      {
        vsubss  xmm0, xmm6, dword ptr [rbx+28h]
        vmulss  xmm1, xmm0, xmm12
        vmovss  xmm0, dword ptr [rsi+140h]
        vaddss  xmm2, xmm1, xmm7
        vsubss  xmm1, xmm0, dword ptr [rsi+13Ch]
        vmovss  dword ptr [rsi+148h], xmm2
        vmulss  xmm3, xmm1, xmm9
        vaddss  xmm2, xmm2, xmm10
        vmulss  xmm0, xmm3, xmm2
        vmovss  dword ptr [rsi+13Ch], xmm0
      }
      goto LABEL_79;
    }
  }
LABEL_80:
  _R11 = &v214;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-58h]
    vmovaps xmm9, xmmword ptr [r11-68h]
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
      if ( m_vehicleSystem->PhysicsGetVehicleDef(m_vehicleSystem, v5) )
      {
        __asm { vmovss  xmm1, dword ptr [rax+1E8h]; fb }
        BgVehiclePhysicsGround::SetFrictionBase(v3, *(float *)&_XMM1);
      }
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
  __int32 v5; 
  const BSplineCatmullRom *v7; 
  BgVehiclePhysics *Owner; 
  float v14; 
  vec3_t outPos; 
  vec3_t outAngles; 

  _RBX = this;
  v5 = this->m_pathType - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      __asm { vxorps  xmm1, xmm1, xmm1; lookAheadTime }
      *(_QWORD *)&_RBX->m_path.m_catmullRom.t = 0i64;
      *(_QWORD *)&_RBX->m_path.m_catmullRom.curNodeIndex = 0i64;
      BgVehicleComponentPathFollower::GetPathLookAhead(_RBX, *(float *)&_XMM1, &outPos, &outAngles);
      if ( !BG_BSpline_Data_IsValid(_RBX->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
        __debugbreak();
      v7 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(_RBX->m_path.m_catmullRom.splineIndex, NULL);
      __asm { vxorps  xmm1, xmm1, xmm1; t }
      BG_BSpline_CatmullRom_Evaluate(v7, *(float *)&_XMM1, &outPos, NULL, NULL, NULL);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+68h+outPos]
        vmovss  xmm1, dword ptr [rsp+68h+outPos+4]
        vmovss  dword ptr [rbx+108h], xmm0
        vmovss  xmm0, dword ptr [rsp+68h+outPos+8]
        vmovss  dword ptr [rbx+110h], xmm0
        vmovss  dword ptr [rbx+10Ch], xmm1
      }
      *(_QWORD *)_RBX->m_previousLinearVelocityWs.v = 0i64;
      *(_QWORD *)&_RBX->m_previousLinearVelocityWs.z = 0i64;
      *(_QWORD *)&_RBX->m_previousLinearAccelerationWs.y = 0i64;
      if ( warp )
      {
        Owner = BgVehiclePhysicsComponent::GetOwner(_RBX);
        BgVehiclePhysics::SetKeyframeTransform(Owner, &outPos, &outAngles);
        __asm { vmovsd  xmm0, qword ptr [rsp+68h+outPos] }
        v14 = outPos.v[2];
        __asm { vmovsd  qword ptr [rbx+108h], xmm0 }
        _RBX->m_pathPosInterpolated.v[2] = v14;
        *(_QWORD *)&_RBX->m_yawVel = 0i64;
        *(_QWORD *)_RBX->m_previousLinearVelocityWs.v = 0i64;
        *(_QWORD *)&_RBX->m_previousLinearVelocityWs.z = 0i64;
        *(_QWORD *)&_RBX->m_previousLinearAccelerationWs.y = 0i64;
      }
    }
  }
  else
  {
    BgVehicleComponentPathFollower::StartPath(_RBX, _RBX->m_startNode);
  }
}

/*
==============
BgVehicleComponentPathFollowerSP::RestartPath
==============
*/

void __fastcall BgVehicleComponentPathFollowerSP::RestartPath(BgVehicleComponentPathFollowerSP *this, double _XMM1_8)
{
  __int32 v3; 
  const BSplineCatmullRom *v5; 
  BgVehiclePhysics *Owner; 
  float v12; 
  vec3_t outPos; 
  vec3_t outAngles; 

  _RBX = this;
  v3 = this->m_pathType - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      __asm { vxorps  xmm1, xmm1, xmm1; lookAheadTime }
      *(_QWORD *)&_RBX->m_path.m_catmullRom.nodet = 0i64;
      _RBX->m_path.m_catmullRom.curNodeIndex = 0;
      BgVehicleComponentPathFollower::GetPathLookAhead(_RBX, *(float *)&_XMM1, &outPos, &outAngles);
      if ( !BG_BSpline_Data_IsValid(_RBX->m_path.m_catmullRom.splineIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
        __debugbreak();
      v5 = (const BSplineCatmullRom *)BG_BSpline_Data_Get(_RBX->m_path.m_catmullRom.splineIndex, NULL);
      __asm { vxorps  xmm1, xmm1, xmm1; t }
      BG_BSpline_CatmullRom_Evaluate(v5, *(float *)&_XMM1, &outPos, NULL, NULL, NULL);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+68h+outPos]
        vmovss  xmm1, dword ptr [rsp+68h+outPos+4]
        vmovss  dword ptr [rbx+108h], xmm0
        vmovss  xmm0, dword ptr [rsp+68h+outPos+8]
        vmovss  dword ptr [rbx+110h], xmm0
        vmovss  dword ptr [rbx+10Ch], xmm1
      }
      *(_QWORD *)_RBX->m_previousLinearVelocityWs.v = 0i64;
      *(_QWORD *)&_RBX->m_previousLinearVelocityWs.z = 0i64;
      *(_QWORD *)&_RBX->m_previousLinearAccelerationWs.y = 0i64;
      Owner = BgVehiclePhysicsComponent::GetOwner(_RBX);
      BgVehiclePhysics::SetKeyframeTransform(Owner, &outPos, &outAngles);
      __asm { vmovsd  xmm0, qword ptr [rsp+68h+outPos] }
      v12 = outPos.v[2];
      __asm { vmovsd  qword ptr [rbx+108h], xmm0 }
      *(_QWORD *)&_RBX->m_yawVel = 0i64;
      _RBX->m_pathPosInterpolated.v[2] = v12;
      *(_QWORD *)_RBX->m_previousLinearVelocityWs.v = 0i64;
      *(_QWORD *)&_RBX->m_previousLinearVelocityWs.z = 0i64;
      *(_QWORD *)&_RBX->m_previousLinearAccelerationWs.y = 0i64;
    }
  }
  else
  {
    BgVehicleComponentPathFollower::StartPath(_RBX, _RBX->m_startNode);
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

void __fastcall BgVehicleComponentPathFollower::SetAcceleration(BgVehicleComponentPathFollower *this, double accelMPHPerSec)
{
  __asm { vmovss  dword ptr [rcx+154h], xmm1 }
}

/*
==============
BgVehicleComponentPathFollower::SetDeceleration
==============
*/

void __fastcall BgVehicleComponentPathFollower::SetDeceleration(BgVehicleComponentPathFollower *this, double decelMPHPerSec)
{
  __asm { vmovss  dword ptr [rcx+158h], xmm1 }
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

void __fastcall BgVehicleComponentPathFollower::SetSpeed(BgVehicleComponentPathFollower *this, double speedInPerSec)
{
  __asm { vmovss  dword ptr [rcx+150h], xmm1 }
  _RBX = this;
  _RAX = BgVehiclePhysicsComponent::GetOwner(this);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+178h]
    vmovss  xmm1, dword ptr [rax+174h]
    vmulss  xmm2, xmm1, dword ptr [rax+1A4h]
    vmulss  xmm3, xmm0, dword ptr [rax+1A8h]
    vmovss  xmm0, dword ptr [rax+17Ch]
    vmulss  xmm1, xmm0, dword ptr [rax+1ACh]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rbx+14Ch], xmm2
  }
}

/*
==============
BgVehicleComponentPathFollower::SetSpeedImmediate
==============
*/

void __fastcall BgVehicleComponentPathFollower::SetSpeedImmediate(BgVehicleComponentPathFollower *this, double speedInPerSec)
{
  __asm
  {
    vmovss  dword ptr [rcx+14Ch], xmm1
    vmovss  dword ptr [rcx+150h], xmm1
  }
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
  BgVehiclePhysics *Owner; 
  bool result; 

  _RDI = this;
  BgVehiclePhysicsComponent::Setup(this, vehicleSystem, id);
  _RDI->m_endOnGoal = 1;
  _RDI->m_notifyOnGoal = 1;
  _RAX = BgVehiclePhysicsComponent::GetOwnerPosition(_RDI);
  __asm
  {
    vmovss  xmm1, cs:defaultGoalTol
    vmovsd  xmm0, qword ptr [rax]
    vmovsd  qword ptr [rdi+48h], xmm0
  }
  _RDI->m_goalPos.v[2] = _RAX->v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rax]
    vmovsd  qword ptr [rdi+54h], xmm0
  }
  *(float *)&_RAX = _RAX->v[2];
  __asm
  {
    vmulss  xmm0, xmm1, xmm1
    vmovss  dword ptr [rdi+64h], xmm0
    vmovss  dword ptr [rdi+60h], xmm1
  }
  LODWORD(_RDI->m_lookAheadPos.v[2]) = (_DWORD)_RAX;
  _RDI->m_goingStraightTo = 0;
  _RDI->m_stopOnArriving = 0;
  __asm { vmovss  xmm1, cs:__real@7f7fffff; minTimeDynamic }
  Owner = BgVehiclePhysicsComponent::GetOwner(_RDI);
  BgVehiclePhysics::SetDynamic(Owner, *(float *)&_XMM1);
  BgVehiclePhysics::SetActivatedAlways(Owner);
  Owner->m_controls.externalEnabledBits[0] = -1;
  result = 1;
  Owner->m_controls.playerEnabledBits[0] = 0;
  _RDI->m_inputMults[0] = 1.0;
  _RDI->m_inputMults[1] = 1.0;
  _RDI->m_inputMults[2] = 1.0;
  _RDI->m_inputMults[3] = 1.0;
  _RDI->m_inputMults[4] = 1.0;
  _RDI->m_inputMults[5] = 1.0;
  _RDI->m_inputMults[6] = 1.0;
  _RDI->m_inputMults[7] = 1.0;
  return result;
}

/*
==============
BgVehicleComponentPathFinder::Setup
==============
*/
__int64 BgVehicleComponentPathFinder::Setup(BgVehicleComponentPathFinder *this, BGVehicles *vehicleSystem, VehiclePhysicsComponentId id)
{
  BgVehiclePhysics *Owner; 
  BgVehiclePhysics *v11; 
  __int64 result; 

  _RDI = this;
  BgVehiclePhysicsComponent::Setup(this, vehicleSystem, id);
  _RDI->m_endOnGoal = 1;
  _RDI->m_notifyOnGoal = 1;
  _RAX = BgVehiclePhysicsComponent::GetOwnerPosition(_RDI);
  __asm
  {
    vmovss  xmm1, cs:defaultGoalTol
    vmovsd  xmm0, qword ptr [rax]
    vmovsd  qword ptr [rdi+48h], xmm0
  }
  _RDI->m_goalPos.v[2] = _RAX->v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rax]
    vmovsd  qword ptr [rdi+54h], xmm0
  }
  *(float *)&_RAX = _RAX->v[2];
  __asm
  {
    vmulss  xmm0, xmm1, xmm1
    vmovss  dword ptr [rdi+64h], xmm0
    vmovss  dword ptr [rdi+60h], xmm1
  }
  LODWORD(_RDI->m_lookAheadPos.v[2]) = (_DWORD)_RAX;
  _RDI->m_goingStraightTo = 0;
  _RDI->m_stopOnArriving = 0;
  __asm { vmovss  xmm1, cs:__real@7f7fffff; minTimeDynamic }
  Owner = BgVehiclePhysicsComponent::GetOwner(_RDI);
  BgVehiclePhysics::SetDynamic(Owner, *(float *)&_XMM1);
  BgVehiclePhysics::SetActivatedAlways(Owner);
  Owner->m_controls.externalEnabledBits[0] = -1;
  Owner->m_controls.playerEnabledBits[0] = 0;
  _RDI->m_inputMults[0] = 1.0;
  _RDI->m_inputMults[1] = 1.0;
  _RDI->m_inputMults[2] = 1.0;
  _RDI->m_inputMults[3] = 1.0;
  _RDI->m_inputMults[4] = 1.0;
  _RDI->m_inputMults[5] = 1.0;
  _RDI->m_inputMults[6] = 1.0;
  _RDI->m_inputMults[7] = 1.0;
  v11 = BgVehiclePhysicsComponent::GetOwner(_RDI);
  if ( v11->SupportsFeature(v11, VPFEAT_NAVIGATE_MESH) || (result = ((__int64 (__fastcall *)(BgVehiclePhysics *, __int64))v11->SupportsFeature)(v11, 7i64), (_BYTE)result) )
  {
    __asm { vmovss  xmm1, cs:__real@7f7fffff; minTimeDynamic }
    BgVehiclePhysics::SetDynamic(v11, *(float *)&_XMM1);
    BgVehiclePhysics::SetActivatedAlways(v11);
    result = 65281i64;
    _RDI->m_endOnGoal = 0;
    _RDI->m_notifyOnGoal = 0;
    *(_DWORD *)&_RDI->m_numNodes = -65536;
    *(_WORD *)&_RDI->m_layer = 2;
    *(_QWORD *)&_RDI->m_originalPathNumNodes = 0xFFFFi64;
    _RDI->m_goalPosTolSq = 2500.0;
    _RDI->m_goalPosTol = 50.0;
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
  __asm { vmovss  xmm1, cs:__real@7f7fffff; minTimeDynamic }
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
  BgVehiclePhysics::SetDynamic(v5, *(float *)&_XMM1);
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
  BgVehiclePhysicsGround *v7; 

  result = BgVehicleComponentPathFollower::Setup(this, vehicleSystem, id);
  if ( result )
  {
    Owner = BgVehiclePhysicsComponent::GetOwner(this);
    _RBX = DCONST_DVARMPFLT_bg_pathFollowerFriction;
    v7 = (BgVehiclePhysicsGround *)Owner;
    if ( !DCONST_DVARMPFLT_bg_pathFollowerFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerFriction") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm1, dword ptr [rbx+28h]; fb }
    BgVehiclePhysicsGround::SetFrictionBase(v7, *(float *)&_XMM1);
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
  BgVehiclePhysicsGround *v7; 

  result = BgVehicleComponentPathFollower::Setup(this, vehicleSystem, id);
  if ( result )
  {
    Owner = BgVehiclePhysicsComponent::GetOwner(this);
    _RBX = DCONST_DVARMPFLT_bg_pathFollowerFriction;
    v7 = (BgVehiclePhysicsGround *)Owner;
    if ( !DCONST_DVARMPFLT_bg_pathFollowerFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerFriction") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm1, dword ptr [rbx+28h]; fb }
    BgVehiclePhysicsGround::SetFrictionBase(v7, *(float *)&_XMM1);
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
  __int32 v5; 
  BGVehicles *m_vehicleSystem; 
  unsigned __int16 v7; 
  char v9; 
  char v10; 

  _RBX = this;
  v5 = this->m_pathType - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      BG_BSpline_Data_Deallocate(_RBX->m_path.m_catmullRom.splineIndex);
      _RBX->m_path.m_catmullRom.splineIndex = BG_BSpline_Data_InvalidIndex();
    }
  }
  else
  {
    _RBX->m_vehicleSystem->PathReset(_RBX->m_vehicleSystem, &_RBX->m_path.m_vpp);
  }
  m_vehicleSystem = _RBX->m_vehicleSystem;
  _RBX->m_pathType = PATH_RADIANT;
  _RBX->m_startNode = nodeIndex;
  v7 = m_vehicleSystem->PathCountNodes(m_vehicleSystem, nodeIndex);
  _RBX->m_numNodes = v7;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 627, ASSERT_TYPE_ASSERT, "(m_numNodes > 0)", (const char *)&queryFormat, "m_numNodes > 0") )
    __debugbreak();
  _RBX->m_vehicleSystem->PathInit(_RBX->m_vehicleSystem, _RBX->m_startNode, &_RBX->m_path.m_vpp);
  _RBX->m_pathPosInterpolated.v[0] = _RBX->m_path.m_vpp.origin.v[0];
  _RBX->m_pathPosInterpolated.v[1] = _RBX->m_path.m_vpp.origin.v[1];
  _RBX->m_pathPosInterpolated.v[2] = _RBX->m_path.m_vpp.origin.v[2];
  *(_QWORD *)_RBX->m_previousLinearVelocityWs.v = 0i64;
  *(_QWORD *)&_RBX->m_previousLinearVelocityWs.z = 0i64;
  *(_QWORD *)&_RBX->m_previousLinearAccelerationWs.y = 0i64;
  BgVehicleComponentPathFollower::WarpTo(_RBX, &_RBX->m_path.m_vpp.origin, &_RBX->m_path.m_vpp.angles);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+18h]
  }
  if ( v9 | v10 )
    BgVehiclePhysicsComponent::Resume(_RBX);
}

/*
==============
BgVehicleComponentPathFollower::StartPathNodes
==============
*/

void __fastcall BgVehicleComponentPathFollower::StartPathNodes(BgVehicleComponentPathFollower *this, const vec4_t *pointTimes, unsigned int pointCount, double tau, float alpha, bool centripetal, bool looped)
{
  unsigned int v13; 
  BSplineCatmullRom *outSpline; 
  char v18; 
  char v19; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = this;
  __asm { vmovaps xmm6, xmm3 }
  if ( !pointTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 647, ASSERT_TYPE_ASSERT, "(pointTimes)", (const char *)&queryFormat, "pointTimes") )
    __debugbreak();
  if ( pointCount > 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 648, ASSERT_TYPE_ASSERT, "(pointCount <= 32)", (const char *)&queryFormat, "pointCount <= MAX_BSPLINE_CATMULLROM_POINTS") )
    __debugbreak();
  if ( _RBX->m_pathType == PATH_RADIANT )
  {
    _RBX->m_vehicleSystem->PathReset(_RBX->m_vehicleSystem, &_RBX->m_path.m_vpp);
  }
  else if ( _RBX->m_pathType == PATH_CATMULLROM )
  {
    BG_BSpline_Data_Deallocate(_RBX->m_path.m_catmullRom.splineIndex);
    _RBX->m_path.m_catmullRom.splineIndex = BG_BSpline_Data_InvalidIndex();
  }
  _RBX->m_pathType = PATH_CATMULLROM;
  v13 = BG_BSpline_Data_Allocate(CATMULL_ROM);
  _RBX->m_path.m_catmullRom.splineIndex = v13;
  if ( !BG_BSpline_Data_IsValid(v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
    __debugbreak();
  outSpline = (BSplineCatmullRom *)BG_BSpline_Data_Get(_RBX->m_path.m_catmullRom.splineIndex, NULL);
  __asm
  {
    vmovss  xmm3, [rsp+58h+alpha]; alpha
    vmovaps xmm2, xmm6; tau
  }
  BG_BSpline_CatmullRom_Build(pointTimes, pointCount, *(float *)&_XMM2, *(float *)&_XMM3, 0, (BSplineCatmullRom::Parametrization)centripetal, looped, outSpline);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+18h]
  }
  if ( v18 | v19 )
    BgVehiclePhysicsComponent::Resume(_RBX);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
BgVehicleComponentPathFollowerCP::StartPathNodes
==============
*/

void __fastcall BgVehicleComponentPathFollowerCP::StartPathNodes(BgVehicleComponentPathFollowerCP *this, const vec4_t *pointTimes, unsigned int pointCount, double tau, float alpha, bool centripetal, bool looped, bool warp)
{
  unsigned int v14; 
  BSplineCatmullRom *outSpline; 
  char v19; 
  char v20; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = this;
  __asm { vmovaps xmm6, xmm3 }
  if ( !pointTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 647, ASSERT_TYPE_ASSERT, "(pointTimes)", (const char *)&queryFormat, "pointTimes") )
    __debugbreak();
  if ( pointCount > 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 648, ASSERT_TYPE_ASSERT, "(pointCount <= 32)", (const char *)&queryFormat, "pointCount <= MAX_BSPLINE_CATMULLROM_POINTS") )
    __debugbreak();
  if ( _RBX->m_pathType == PATH_RADIANT )
  {
    _RBX->m_vehicleSystem->PathReset(_RBX->m_vehicleSystem, &_RBX->m_path.m_vpp);
  }
  else if ( _RBX->m_pathType == PATH_CATMULLROM )
  {
    BG_BSpline_Data_Deallocate(_RBX->m_path.m_catmullRom.splineIndex);
    _RBX->m_path.m_catmullRom.splineIndex = BG_BSpline_Data_InvalidIndex();
  }
  _RBX->m_pathType = PATH_CATMULLROM;
  v14 = BG_BSpline_Data_Allocate(CATMULL_ROM);
  _RBX->m_path.m_catmullRom.splineIndex = v14;
  if ( !BG_BSpline_Data_IsValid(v14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_comp.cpp", 682, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( m_path.m_catmullRom.splineIndex ) )", "BgVehicleComponentPathFollower. Invalid Catmull-Rom spline data index") )
    __debugbreak();
  outSpline = (BSplineCatmullRom *)BG_BSpline_Data_Get(_RBX->m_path.m_catmullRom.splineIndex, NULL);
  __asm
  {
    vmovss  xmm3, [rsp+58h+alpha]; alpha
    vmovaps xmm2, xmm6; tau
  }
  BG_BSpline_CatmullRom_Build(pointTimes, pointCount, *(float *)&_XMM2, *(float *)&_XMM3, 0, (BSplineCatmullRom::Parametrization)centripetal, looped, outSpline);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+18h]
  }
  if ( v19 | v20 )
    BgVehiclePhysicsComponent::Resume(_RBX);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  BgVehicleComponentPathFollowerCP::RestartPath(_RBX, warp);
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
  BgVehiclePhysics *v6; 
  char v7; 
  bool v8; 
  bool v11; 
  bool v21; 

  _RBX = this;
  BgVehiclePhysicsComponent::Step(this, deltaTime);
  Owner = BgVehiclePhysicsComponent::GetOwner(_RBX);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+18h]
  }
  v6 = Owner;
  if ( v7 | v8 )
  {
    Owner->m_controls.externalValues[0] = 0.0;
    Owner->m_controls.externalValues[2] = 0.0;
    return;
  }
  if ( _RBX->m_goingStraightTo && (_RBX->m_simCount & 1) == 0 )
  {
    __asm { vmovss  xmm1, cs:__real@40600000; scale }
    if ( BgVehicleComponentGoStraightTo::IsOnGoalPos(_RBX, *(float *)&_XMM1) )
    {
      __asm { vmovss  xmm1, cs:__real@3f800000; scale }
      v11 = BgVehicleComponentGoStraightTo::IsOnGoalPos(_RBX, *(float *)&_XMM1);
      if ( _RBX->m_stopOnArriving )
      {
        _RAX = BgVehiclePhysicsComponent::GetOwner(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rax+178h]
          vmovss  xmm1, dword ptr [rax+174h]
          vmulss  xmm2, xmm1, dword ptr [rax+1A4h]
          vmulss  xmm3, xmm0, dword ptr [rax+1A8h]
          vmovss  xmm0, dword ptr [rax+17Ch]
          vmulss  xmm1, xmm0, dword ptr [rax+1ACh]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vcomiss xmm2, cs:threshold_0
        }
        if ( !(v7 | v8) && !v11 )
        {
          v6->m_controls.externalValues[0] = 0.0;
          v21 = 0;
          v6->m_controls.externalValues[1] = _RBX->m_inputMults[1];
LABEL_16:
          BgVehicleComponentGoStraightTo::AdjustInputs(_RBX, v21, 1);
          return;
        }
        goto LABEL_11;
      }
      if ( v11 )
      {
LABEL_11:
        v8 = !_RBX->m_notifyOnGoal;
        _RBX->m_goingStraightTo = 0;
        if ( !v8 )
          BgVehiclePhysicsComponent::ScrNotify(_RBX, scr_const.reached_end_node);
        if ( _RBX->m_endOnGoal )
          _RBX->m_autoRemove = 1;
        return;
      }
    }
    v6->m_controls.externalValues[1] = 0.0;
    v21 = 1;
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
  BgVehiclePhysics *v6; 
  char v7; 
  bool v8; 
  bool v11; 
  bool v21; 
  unsigned __int16 m_numNodes; 
  int m_curNode; 
  int v25; 
  int v26; 

  _RBX = this;
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  BgVehiclePhysicsComponent::Step(this, deltaTime);
  Owner = BgVehiclePhysicsComponent::GetOwner(_RBX);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rbx+18h]
  }
  v6 = Owner;
  if ( v7 | v8 )
  {
    v7 = 0;
    v8 = 1;
    Owner->m_controls.externalValues[0] = 0.0;
    Owner->m_controls.externalValues[2] = 0.0;
    goto LABEL_17;
  }
  v7 = 0;
  v8 = !_RBX->m_goingStraightTo;
  if ( _RBX->m_goingStraightTo )
  {
    v7 = 0;
    v8 = (_RBX->m_simCount & 1) == 0;
    if ( (_RBX->m_simCount & 1) == 0 )
    {
      __asm { vmovss  xmm1, cs:__real@40600000; scale }
      if ( BgVehicleComponentGoStraightTo::IsOnGoalPos(_RBX, *(float *)&_XMM1) )
      {
        __asm { vmovss  xmm1, cs:__real@3f800000; scale }
        v11 = BgVehicleComponentGoStraightTo::IsOnGoalPos(_RBX, *(float *)&_XMM1);
        if ( _RBX->m_stopOnArriving )
        {
          _RAX = BgVehiclePhysicsComponent::GetOwner(_RBX);
          __asm
          {
            vmovss  xmm0, dword ptr [rax+178h]
            vmovss  xmm1, dword ptr [rax+1A4h]
            vmulss  xmm2, xmm1, dword ptr [rax+174h]
            vmulss  xmm3, xmm0, dword ptr [rax+1A8h]
            vmovss  xmm0, dword ptr [rax+17Ch]
            vmulss  xmm1, xmm0, dword ptr [rax+1ACh]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
            vcomiss xmm2, cs:threshold_0
          }
          if ( !(v7 | v8) && !v11 )
          {
            v6->m_controls.externalValues[0] = 0.0;
            v21 = 0;
            v6->m_controls.externalValues[1] = _RBX->m_inputMults[1];
LABEL_16:
            BgVehicleComponentGoStraightTo::AdjustInputs(_RBX, v21, 1);
            goto LABEL_17;
          }
          goto LABEL_11;
        }
        if ( v11 )
        {
LABEL_11:
          v8 = !_RBX->m_notifyOnGoal;
          _RBX->m_goingStraightTo = 0;
          if ( !v8 )
            BgVehiclePhysicsComponent::ScrNotify(_RBX, scr_const.reached_end_node);
          v7 = 0;
          v8 = !_RBX->m_endOnGoal;
          if ( _RBX->m_endOnGoal )
            _RBX->m_autoRemove = 1;
          goto LABEL_17;
        }
      }
      v6->m_controls.externalValues[1] = 0.0;
      v21 = 1;
      goto LABEL_16;
    }
  }
LABEL_17:
  __asm
  {
    vcomiss xmm6, dword ptr [rbx+18h]
    vmovaps xmm6, [rsp+38h+var_18]
  }
  if ( !(v7 | v8) )
  {
    m_numNodes = _RBX->m_numNodes;
    if ( m_numNodes )
    {
      if ( !_RBX->m_goingStraightTo )
      {
        m_curNode = _RBX->m_curNode;
        if ( m_curNode < m_numNodes )
        {
          BgVehicleComponentPathFinder::Notification(_RBX, m_curNode, scr_const.trigger);
          v25 = ++_RBX->m_curNode;
          v26 = _RBX->m_numNodes;
          ++_RBX->m_overallCurNode;
          if ( v25 < v26 )
            BgVehicleComponentPathFinder::GoStraightToNode(_RBX, v25);
        }
        else if ( _RBX->m_partial )
        {
          BgVehicleComponentPathFinder::Notification(_RBX, m_curNode, scr_const.trigger);
          BgVehicleComponentPathFinder::FindPath(_RBX, &_RBX->m_finalGoalPos, _RBX->m_layer);
        }
        else
        {
          BgVehicleComponentPathFinder::Notification(_RBX, m_curNode, scr_const.reached_end_node);
          _RBX->m_autoRemove = 1;
        }
      }
    }
    else
    {
      BgVehicleComponentPathFinder::Notification(_RBX, _RBX->m_curNode, scr_const.reached_end_node);
      _RBX->m_autoRemove = 1;
    }
  }
}

/*
==============
BgVehicleComponentPathFollowerCP::StopOnEnd
==============
*/

void __fastcall BgVehicleComponentPathFollowerCP::StopOnEnd(BgVehicleComponentPathFollowerCP *this, double deltaTime, double pauseDuration)
{
  BgVehiclePhysics *Owner; 
  char v23; 
  float fmt; 
  vec3_t v30; 
  vec3_t linVelWs; 
  vec3_t outVelWs; 
  vec3_t outVelLs; 
  char v34; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmm6, xmm2
    vmovaps xmm8, xmm1
  }
  _RBX = this;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  dword ptr [rsp+0C8h+outVelWs], xmm7
  }
  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  __asm
  {
    vmovss  dword ptr [rsp+0C8h+outVelWs+4], xmm7
    vmovss  dword ptr [rsp+0C8h+outVelWs+8], xmm7
  }
  BgVehiclePhysics::ComputeVelocityLocalSpace(Owner, &Owner->m_angularVelocityWs, &outVelLs);
  BgVehiclePhysics::ComputeVelocityWorldSpace(Owner, &outVelLs, &outVelWs);
  __asm
  {
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rbx+120h]
    vmovss  xmm1, dword ptr [rbx+124h]
  }
  _RSI = DCONST_DVARFLT_bg_pathFollowerAccelAngularVelMult;
  __asm
  {
    vxorps  xmm0, xmm0, xmm3
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+0C8h+linVelWs], xmm0
    vmovss  xmm0, dword ptr [rbx+128h]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rsp+0C8h+linVelWs+8], xmm1
    vmovss  dword ptr [rsp+0C8h+linVelWs+4], xmm2
  }
  if ( !DCONST_DVARFLT_bg_pathFollowerAccelAngularVelMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerAccelAngularVelMult") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovsd  xmm0, qword ptr [rsp+0C8h+linVelWs] }
  v30.v[2] = linVelWs.v[2];
  __asm
  {
    vmovsd  [rsp+0C8h+var_88], xmm0
    vmovss  xmm0, dword ptr [rsi+28h]
    vmovaps xmm3, xmm8
    vmovss  dword ptr [rsp+0C8h+fmt], xmm0
  }
  BgVehicleComponentPathFollower::FakeEngineAngularForceFromAcceleration(_RBX, Owner, &v30, *(float *)&_XMM3, fmt, &outVelWs);
  __asm
  {
    vmovss  dword ptr [rsp+0C8h+linVelWs], xmm7
    vmovss  dword ptr [rsp+0C8h+linVelWs+4], xmm7
    vmovss  dword ptr [rsp+0C8h+linVelWs+8], xmm7
  }
  BgVehiclePhysics::SetLinearVelocity(Owner, &linVelWs, 0);
  BgVehiclePhysics::SetAngularVelocity(Owner, &outVelWs, 0);
  __asm { vcomiss xmm6, xmm7 }
  if ( v23 )
    goto LABEL_7;
  __asm { vcomiss xmm6, cs:__real@7f7fffff }
  if ( !v23 )
  {
LABEL_7:
    _RBX->m_autoRemove = 1;
  }
  else
  {
    __asm { vmovaps xmm1, xmm6; pauseTimeInSecs }
    BgVehiclePhysicsComponent::SetPause(_RBX, *(float *)&_XMM1);
  }
  if ( _RBX->m_pathType == PATH_CATMULLROM )
    _RBX->m_path.m_vpp.lookAhead = _RBX->m_path.m_vpp.speedOverride;
  _R11 = &v34;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
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

void __fastcall BgVehicleComponentPathFollower::UpdateManualSpeed(BgVehicleComponentPathFollower *this, double deltaTime)
{
  char v2; 
  char v3; 

  __asm
  {
    vmovss  xmm2, dword ptr [rcx+150h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
  }
  if ( !v2 )
  {
    __asm { vcomiss xmm1, xmm0 }
    if ( !(v2 | v3) )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rcx+14Ch]
        vmovss  xmm0, cs:__real@3c23d70a
        vsubss  xmm4, xmm2, xmm3
        vcomiss xmm4, xmm0
      }
      if ( v2 | v3 )
      {
        __asm { vcomiss xmm4, cs:__real@bc23d70a }
        if ( !v2 )
          return;
        __asm
        {
          vmovss  xmm4, dword ptr [rcx+158h]
          vcomiss xmm4, xmm0
        }
        if ( !(v2 | v3) )
        {
          __asm
          {
            vmulss  xmm0, xmm4, xmm1
            vsubss  xmm1, xmm3, xmm0
            vmaxss  xmm2, xmm1, xmm2
          }
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm5, dword ptr [rcx+154h]
          vcomiss xmm5, xmm0
        }
        if ( !(v2 | v3) )
        {
          __asm
          {
            vmulss  xmm0, xmm5, xmm1
            vaddss  xmm1, xmm0, xmm3
            vminss  xmm2, xmm1, xmm2
            vmovss  dword ptr [rcx+14Ch], xmm2
          }
          return;
        }
      }
      __asm { vmovss  dword ptr [rcx+14Ch], xmm2 }
    }
  }
}

/*
==============
BgVehicleComponentPathFollower::UpdateSteeringAngle
==============
*/
void BgVehicleComponentPathFollower::UpdateSteeringAngle(BgVehicleComponentPathFollower *this)
{
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v13; 
  const dvar_t *v23; 
  vec3_t angles; 
  char v35; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RSI = this;
  _RDI = BgVehiclePhysicsComponent::GetOwner(this);
  AxisToAngles((const tmat33_t<vec3_t> *)&_RDI->m_transform, &angles);
  v7 = DCONST_DVARFLT_bg_pathFollowerSteeringMaxAngle;
  if ( !DCONST_DVARFLT_bg_pathFollowerSteeringMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerSteeringMaxAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = DCONST_DVARFLT_bg_pathFollowerSteeringMaxYawDiff;
  if ( !DCONST_DVARFLT_bg_pathFollowerSteeringMaxYawDiff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerSteeringMaxYawDiff") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+118h]
    vsubss  xmm1, xmm0, dword ptr [rsp+0B8h+angles+4]
    vmulss  xmm5, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
  }
  v13 = DCONST_DVARFLT_bg_pathFollowerSteeringMaxYawDiff;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm2, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm8, xmm0, cs:__real@43b40000
    vandps  xmm6, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  if ( !DCONST_DVARFLT_bg_pathFollowerSteeringMaxYawDiff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerSteeringMaxYawDiff") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  __asm
  {
    vdivss  xmm0, xmm6, dword ptr [rbx+28h]; val
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm6, xmm6, xmm6
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  v23 = DCONST_DVARFLT_bg_pathFollowerSteeringMaxAngle;
  __asm { vmovaps xmm7, xmm0 }
  if ( !DCONST_DVARFLT_bg_pathFollowerSteeringMaxAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_pathFollowerSteeringMaxAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  __asm
  {
    vmulss  xmm2, xmm7, dword ptr [rbx+28h]
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000
    vcmpless xmm0, xmm6, xmm8
    vblendvps xmm2, xmm1, xmm2, xmm0
    vmovss  dword ptr [rdi+0AF0h], xmm2
    vmovss  dword ptr [rdi+0AECh], xmm2
  }
  _R11 = &v35;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
BgVehicleComponentPathFollower::WarpTo
==============
*/
void BgVehicleComponentPathFollower::WarpTo(BgVehicleComponentPathFollower *this, const vec3_t *pos, const vec3_t *angles)
{
  BgVehiclePhysics *Owner; 

  _RDI = pos;
  _RSI = this;
  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  BgVehiclePhysics::SetKeyframeTransform(Owner, _RDI, angles);
  *(_QWORD *)&_RSI->m_yawVel = 0i64;
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi]
    vmovsd  qword ptr [rsi+108h], xmm0
  }
  _RSI->m_pathPosInterpolated.v[2] = _RDI->v[2];
  *(_QWORD *)_RSI->m_previousLinearVelocityWs.v = 0i64;
  *(_QWORD *)&_RSI->m_previousLinearVelocityWs.z = 0i64;
  *(_QWORD *)&_RSI->m_previousLinearAccelerationWs.y = 0i64;
}

