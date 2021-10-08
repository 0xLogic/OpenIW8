/*
==============
BgVehiclePhysics::Simulate
==============
*/

void __fastcall BgVehiclePhysics::Simulate(BgVehiclePhysics *this, const usercmd_s *cmd, const playerState_s *ps, float deltaTime, const BgVehiclePhysics *pmoveObj)
{
  ?Simulate@BgVehiclePhysics@@QEAAXPEBUusercmd_s@@PEBUplayerState_s@@MPEBV1@@Z(this, cmd, ps, deltaTime, pmoveObj);
}

/*
==============
BgVehiclePhysicsComponent::DebugDraw
==============
*/

void __fastcall BgVehiclePhysicsComponent::DebugDraw(BgVehiclePhysicsComponent *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?DebugDraw@BgVehiclePhysicsComponent@@UEAAXPEBUScreenPlacement@@PEAM1MM@Z(this, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
BgVehiclePhysicsComponent::ScrNotifyVehicleNode
==============
*/

void __fastcall BgVehiclePhysicsComponent::ScrNotifyVehicleNode(BgVehiclePhysicsComponent *this, int nodeEntNum, scr_string_t str)
{
  ?ScrNotifyVehicleNode@BgVehiclePhysicsComponent@@IEAAXHW4scr_string_t@@@Z(this, nodeEntNum, str);
}

/*
==============
BgVehiclePhysicsDeferredActionManager::Reset
==============
*/

void __fastcall BgVehiclePhysicsDeferredActionManager::Reset(BgVehiclePhysicsDeferredActionManager *this)
{
  ?Reset@BgVehiclePhysicsDeferredActionManager@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysics::ComputeVelocityLocalSpace
==============
*/

void __fastcall BgVehiclePhysics::ComputeVelocityLocalSpace(BgVehiclePhysics *this, const vec3_t *velWs, vec3_t *outVelLs)
{
  ?ComputeVelocityLocalSpace@BgVehiclePhysics@@QEBAXAEBTvec3_t@@AEAT2@@Z(this, velWs, outVelLs);
}

/*
==============
BgVehiclePhysicsComponent::Reset
==============
*/

void __fastcall BgVehiclePhysicsComponent::Reset(BgVehiclePhysicsComponent *this)
{
  ?Reset@BgVehiclePhysicsComponent@@UEAAXXZ(this);
}

/*
==============
BgVehiclePhysics::UpdateCollider
==============
*/

void __fastcall BgVehiclePhysics::UpdateCollider(BgVehiclePhysics *this, unsigned int colliderBodyId, const vec3_t *hitPos)
{
  ?UpdateCollider@BgVehiclePhysics@@UEAAXIAEBTvec3_t@@@Z(this, colliderBodyId, hitPos);
}

/*
==============
BgVehiclePhysics::IsDynamic
==============
*/

bool __fastcall BgVehiclePhysics::IsDynamic(BgVehiclePhysics *this)
{
  return ?IsDynamic@BgVehiclePhysics@@QEBA_NXZ(this);
}

/*
==============
Pmove
==============
*/

bool __fastcall Pmove(pmove_t *pm)
{
  return ?Pmove@@YA_NPEAVpmove_t@@@Z(pm);
}

/*
==============
BGVehicles::PhysicsFactory
==============
*/

BgVehiclePhysics *__fastcall BGVehicles::PhysicsFactory(unsigned __int8 *buffer, unsigned int maxBufferSize, VehicleType vehType, VehiclePhysicsGameProfile vpgProfile)
{
  return ?PhysicsFactory@BGVehicles@@SAPEAVBgVehiclePhysics@@PEAEIW4VehicleType@@W4VehiclePhysicsGameProfile@@@Z(buffer, maxBufferSize, vehType, vpgProfile);
}

/*
==============
BgVehiclePhysics::IntegrateVelocities
==============
*/

void __fastcall BgVehiclePhysics::IntegrateVelocities(BgVehiclePhysics *this, float deltaTime, const vec3_t *org, const vec4_t *q, const vec3_t *linVel, const vec3_t *angVel, vec3_t *newOrigin, vec4_t *newOrient)
{
  ?IntegrateVelocities@BgVehiclePhysics@@QEBAXMAEBTvec3_t@@AEBTvec4_t@@00AEAT2@AEAT3@@Z(this, deltaTime, org, q, linVel, angVel, newOrigin, newOrient);
}

/*
==============
BgVehiclePhysicsControls::Reset
==============
*/

void __fastcall BgVehiclePhysicsControls::Reset(BgVehiclePhysicsControls *this)
{
  ?Reset@BgVehiclePhysicsControls@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysics::SetAngularVelocity
==============
*/

void __fastcall BgVehiclePhysics::SetAngularVelocity(BgVehiclePhysics *this, const vec3_t *angVel, bool forceRigidBody)
{
  ?SetAngularVelocity@BgVehiclePhysics@@QEAAXAEBTvec3_t@@_N@Z(this, angVel, forceRigidBody);
}

/*
==============
BgVehiclePhysics::SetPlayerControlled
==============
*/

void __fastcall BgVehiclePhysics::SetPlayerControlled(BgVehiclePhysics *this, bool status)
{
  ?SetPlayerControlled@BgVehiclePhysics@@QEAAX_N@Z(this, status);
}

/*
==============
BgVehiclePhysics::UpdateHornInputControls
==============
*/

void __fastcall BgVehiclePhysics::UpdateHornInputControls(BgVehiclePhysics *this, const usercmd_s *cmd, unsigned int buttonForGpad, unsigned int buttonForKbm)
{
  ?UpdateHornInputControls@BgVehiclePhysics@@IEAAXPEBUusercmd_s@@II@Z(this, cmd, buttonForGpad, buttonForKbm);
}

/*
==============
BGVehicles::PhysicsInvalidId
==============
*/

unsigned int __fastcall BGVehicles::PhysicsInvalidId()
{
  return ?PhysicsInvalidId@BGVehicles@@SAIXZ();
}

/*
==============
BgVehiclePhysics::Step
==============
*/

bool __fastcall BgVehiclePhysics::Step(BgVehiclePhysics *this, float deltaTime)
{
  return ?Step@BgVehiclePhysics@@MEAA_NM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysics::SetLinearVelocity
==============
*/

void __fastcall BgVehiclePhysics::SetLinearVelocity(BgVehiclePhysics *this, const vec3_t *linVelWs, bool forceRigidBody)
{
  ?SetLinearVelocity@BgVehiclePhysics@@QEAAXAEBTvec3_t@@_N@Z(this, linVelWs, forceRigidBody);
}

/*
==============
BgVehiclePhysicsDeferredActionManager::ExecuteBeforeWorldStep
==============
*/

void __fastcall BgVehiclePhysicsDeferredActionManager::ExecuteBeforeWorldStep(BgVehiclePhysicsDeferredActionManager *this, BgVehiclePhysics *vehObj)
{
  ?ExecuteBeforeWorldStep@BgVehiclePhysicsDeferredActionManager@@QEAAXPEAVBgVehiclePhysics@@@Z(this, vehObj);
}

/*
==============
BgVehiclePhysics::IsClientGeoLoaded
==============
*/

bool __fastcall BgVehiclePhysics::IsClientGeoLoaded(BgVehiclePhysics *this, const usercmd_s *userCmd)
{
  return ?IsClientGeoLoaded@BgVehiclePhysics@@QEBA_NAEBUusercmd_s@@@Z(this, userCmd);
}

/*
==============
BgVehiclePhysics::AccumulateOnlyAngularImpulse
==============
*/

void __fastcall BgVehiclePhysics::AccumulateOnlyAngularImpulse(BgVehiclePhysics *this, const vec3_t *impulseWs, const vec3_t *atPointWs)
{
  ?AccumulateOnlyAngularImpulse@BgVehiclePhysics@@IEAAXAEBTvec3_t@@0@Z(this, impulseWs, atPointWs);
}

/*
==============
BgVehiclePhysicsComponent::Step
==============
*/

void __fastcall BgVehiclePhysicsComponent::Step(BgVehiclePhysicsComponent *this, float deltaTime)
{
  ?Step@BgVehiclePhysicsComponent@@UEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysics::InvalidateComponent
==============
*/

void __fastcall BgVehiclePhysics::InvalidateComponent(BgVehiclePhysics *this, unsigned int index)
{
  ?InvalidateComponent@BgVehiclePhysics@@QEAAXI@Z(this, index);
}

/*
==============
BgVehiclePhysics::OffsetCenterOfMass
==============
*/

void __fastcall BgVehiclePhysics::OffsetCenterOfMass(BgVehiclePhysics *this, const vec3_t *offsetLs, bool force)
{
  ?OffsetCenterOfMass@BgVehiclePhysics@@IEAAXAEBTvec3_t@@_N@Z(this, offsetLs, force);
}

/*
==============
BgVehiclePhysics::CheckSanityValues
==============
*/

bool __fastcall BgVehiclePhysics::CheckSanityValues(BgVehiclePhysics *this)
{
  return ?CheckSanityValues@BgVehiclePhysics@@QEBA_NXZ(this);
}

/*
==============
BgVehiclePhysics::DeferAngularImpulse
==============
*/

void __fastcall BgVehiclePhysics::DeferAngularImpulse(BgVehiclePhysics *this, const vec3_t *impulseWs, const vec3_t *atPointWs)
{
  ?DeferAngularImpulse@BgVehiclePhysics@@QEAAXAEBTvec3_t@@0@Z(this, impulseWs, atPointWs);
}

/*
==============
BgVehiclePhysics::AfterPhysicsWorldStep
==============
*/

void __fastcall BgVehiclePhysics::AfterPhysicsWorldStep(BgVehiclePhysics *this, float lastPhysicsStepTime)
{
  ?AfterPhysicsWorldStep@BgVehiclePhysics@@UEAAXM@Z(this, lastPhysicsStepTime);
}

/*
==============
BgVehiclePhysics::DestroyPhysics
==============
*/

void __fastcall BgVehiclePhysics::DestroyPhysics(BgVehiclePhysics *this)
{
  ?DestroyPhysics@BgVehiclePhysics@@UEAAXXZ(this);
}

/*
==============
BgVehiclePhysics::QueryValuesFromPlayerState
==============
*/

void __fastcall BgVehiclePhysics::QueryValuesFromPlayerState(BgVehiclePhysics *this, const playerState_s *ps)
{
  ?QueryValuesFromPlayerState@BgVehiclePhysics@@IEAAXPEBUplayerState_s@@@Z(this, ps);
}

/*
==============
BGVehicles::PhysicsInvalidComponentId
==============
*/

VehiclePhysicsComponentId __fastcall BGVehicles::PhysicsInvalidComponentId()
{
  return ?PhysicsInvalidComponentId@BGVehicles@@SA?AUVehiclePhysicsComponentId@@XZ();
}

/*
==============
BgVehiclePhysics::BlendToPmoveObject
==============
*/

void __fastcall BgVehiclePhysics::BlendToPmoveObject(BgVehiclePhysics *this, float deltaTime, const BgVehiclePhysics *pmoveObj, vec3_t *inOutLinearVelWs, vec3_t *inOutAngularVelWs)
{
  ?BlendToPmoveObject@BgVehiclePhysics@@MEAAXMAEBV1@AEATvec3_t@@1@Z(this, deltaTime, pmoveObj, inOutLinearVelWs, inOutAngularVelWs);
}

/*
==============
BgVehiclePhysics::PostStepIntegrate
==============
*/

void __fastcall BgVehiclePhysics::PostStepIntegrate(BgVehiclePhysics *this, float deltaTime, playerState_s *ps)
{
  ?PostStepIntegrate@BgVehiclePhysics@@IEAAXMPEAUplayerState_s@@@Z(this, deltaTime, ps);
}

/*
==============
BgVehiclePhysics::GetNoClientGeoMode
==============
*/

BgVehiclePhysicsNoClientGeoMode __fastcall BgVehiclePhysics::GetNoClientGeoMode(BgVehiclePhysics *this)
{
  return ?GetNoClientGeoMode@BgVehiclePhysics@@QEBA?AW4BgVehiclePhysicsNoClientGeoMode@@XZ(this);
}

/*
==============
BGVehicles::PhysicsGetVehicleOriginAtPlayerStateTime
==============
*/

void __fastcall BGVehicles::PhysicsGetVehicleOriginAtPlayerStateTime(BGVehicles *this, const playerState_s *ps, vec3_t *outOrg)
{
  ?PhysicsGetVehicleOriginAtPlayerStateTime@BGVehicles@@UEAAXPEBUplayerState_s@@AEATvec3_t@@@Z(this, ps, outOrg);
}

/*
==============
BgVehiclePhysicsComponent::GetOwner
==============
*/

BgVehiclePhysics *__fastcall BgVehiclePhysicsComponent::GetOwner(BgVehiclePhysicsComponent *this)
{
  return ?GetOwner@BgVehiclePhysicsComponent@@IEBAPEAVBgVehiclePhysics@@XZ(this);
}

/*
==============
BgVehiclePhysics::CollisionImpulseCallback
==============
*/

void __fastcall BgVehiclePhysics::CollisionImpulseCallback(BgVehiclePhysics *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  ?CollisionImpulseCallback@BgVehiclePhysics@@UEAAXAEBUPhysics_SimpleCollisionCallback_Data@@@Z(this, cbData);
}

/*
==============
BgVehiclePhysics::Reset
==============
*/

void __fastcall BgVehiclePhysics::Reset(BgVehiclePhysics *this)
{
  ?Reset@BgVehiclePhysics@@UEAAXXZ(this);
}

/*
==============
BgVehiclePhysics::QueryValuesFromPhysics
==============
*/

void __fastcall BgVehiclePhysics::QueryValuesFromPhysics(BgVehiclePhysics *this)
{
  ?QueryValuesFromPhysics@BgVehiclePhysics@@IEAAXXZ(this);
}

/*
==============
BGVehicles::PhysicsFireWeapon
==============
*/

void __fastcall BGVehicles::PhysicsFireWeapon(BGVehicles *this, unsigned int vehicleId, const vec3_t *dirWs, const vec3_t *atWs, const WeaponDef *weapDef)
{
  ?PhysicsFireWeapon@BGVehicles@@QEAAXIAEBTvec3_t@@0PEBUWeaponDef@@@Z(this, vehicleId, dirWs, atWs, weapDef);
}

/*
==============
BgVehiclePhysics::StopPlayerControlling
==============
*/

void __fastcall BgVehiclePhysics::StopPlayerControlling(BgVehiclePhysics *this)
{
  ?StopPlayerControlling@BgVehiclePhysics@@MEAAXXZ(this);
}

/*
==============
BgVehiclePhysics::ClientWarpDetection
==============
*/

void __fastcall BgVehiclePhysics::ClientWarpDetection(BgVehiclePhysics *this, const playerState_s *ps, float dt)
{
  ?ClientWarpDetection@BgVehiclePhysics@@QEAAXPEBUplayerState_s@@M@Z(this, ps, dt);
}

/*
==============
BgVehiclePhysics::SetKeyframeTransform
==============
*/

void __fastcall BgVehiclePhysics::SetKeyframeTransform(BgVehiclePhysics *this, const vec3_t *position, const vec3_t *angles)
{
  ?SetKeyframeTransform@BgVehiclePhysics@@QEAAXAEBTvec3_t@@0@Z(this, position, angles);
}

/*
==============
BGVehicles::PhysicsDrawDebug
==============
*/

void __fastcall BGVehicles::PhysicsDrawDebug(BGVehicles *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?PhysicsDrawDebug@BGVehicles@@QEAAXPEBUScreenPlacement@@PEAM1MM@Z(this, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
BgVehiclePhysics::IsPhysicsBodyIdValid
==============
*/

bool __fastcall BgVehiclePhysics::IsPhysicsBodyIdValid(BgVehiclePhysics *this)
{
  return ?IsPhysicsBodyIdValid@BgVehiclePhysics@@QEBA_NXZ(this);
}

/*
==============
BgVehiclePhysics::UpdatePlayerInputControls
==============
*/

void __fastcall BgVehiclePhysics::UpdatePlayerInputControls(BgVehiclePhysics *this, const usercmd_s *cmd, const playerState_s *ps)
{
  ?UpdatePlayerInputControls@BgVehiclePhysics@@UEAAXPEBUusercmd_s@@PEBUplayerState_s@@@Z(this, cmd, ps);
}

/*
==============
BgVehiclePhysics::SetSurfaceVelocity
==============
*/

void __fastcall BgVehiclePhysics::SetSurfaceVelocity(BgVehiclePhysics *this, const vec3_t *surfVel)
{
  ?SetSurfaceVelocity@BgVehiclePhysics@@QEAAXAEBTvec3_t@@@Z(this, surfVel);
}

/*
==============
BgVehiclePhysics::ComputePointLocalSpace
==============
*/

void __fastcall BgVehiclePhysics::ComputePointLocalSpace(BgVehiclePhysics *this, const vec3_t *pointWs, vec3_t *outPointLs)
{
  ?ComputePointLocalSpace@BgVehiclePhysics@@QEBAXAEBTvec3_t@@AEAT2@@Z(this, pointWs, outPointLs);
}

/*
==============
BGVehicles::PhysicsUpdateVehicleAnimationParams
==============
*/

bool __fastcall BGVehicles::PhysicsUpdateVehicleAnimationParams(BGVehicles *this, int entityNum, int vehSeat, VehicleWorldmodelAAnim *outAnimParams)
{
  return ?PhysicsUpdateVehicleAnimationParams@BGVehicles@@QEBA_NHHPEAUVehicleWorldmodelAAnim@@@Z(this, entityNum, vehSeat, outAnimParams);
}

/*
==============
BgVehiclePhysics::SetKeyframed
==============
*/

void __fastcall BgVehiclePhysics::SetKeyframed(BgVehiclePhysics *this, bool now)
{
  ?SetKeyframed@BgVehiclePhysics@@QEAAX_N@Z(this, now);
}

/*
==============
BgVehiclePhysics::IsValidUserCmd
==============
*/

bool __fastcall BgVehiclePhysics::IsValidUserCmd(BgVehiclePhysics *this, const usercmd_s *userCmd)
{
  return ?IsValidUserCmd@BgVehiclePhysics@@UEBA_NAEBUusercmd_s@@@Z(this, userCmd);
}

/*
==============
BgVehiclePhysics::SimulateClientKeyframe
==============
*/

void __fastcall BgVehiclePhysics::SimulateClientKeyframe(BgVehiclePhysics *this, const usercmd_s *cmd, const playerState_s *ps, float deltaTime)
{
  ?SimulateClientKeyframe@BgVehiclePhysics@@QEAAXPEBUusercmd_s@@PEBUplayerState_s@@M@Z(this, cmd, ps, deltaTime);
}

/*
==============
VehicleScriptableDmg::Add
==============
*/

bool __fastcall VehicleScriptableDmg::Add(VehicleScriptableDmg *this, __int16 vehEntNum, unsigned int scriptableIndex)
{
  return ?Add@VehicleScriptableDmg@@QEAA_NFI@Z(this, vehEntNum, scriptableIndex);
}

/*
==============
BgVehiclePhysics::AdjustMassProperties
==============
*/

void __fastcall BgVehiclePhysics::AdjustMassProperties(BgVehiclePhysics *this, const vec4_t *inertiaDiagonal)
{
  ?AdjustMassProperties@BgVehiclePhysics@@IEAAXAEBTvec4_t@@@Z(this, inertiaDiagonal);
}

/*
==============
BgVehiclePhysics::CheckSanityValues
==============
*/

bool __fastcall BgVehiclePhysics::CheckSanityValues(BgVehiclePhysics *this, const PlayerVehicleState *vehicleState)
{
  return ?CheckSanityValues@BgVehiclePhysics@@QEBA_NAEBUPlayerVehicleState@@@Z(this, vehicleState);
}

/*
==============
BgVehiclePhysics::ProcessComponents
==============
*/

void __fastcall BgVehiclePhysics::ProcessComponents(BgVehiclePhysics *this, void (__fastcall *functor)(BgVehiclePhysicsComponent *this, float), float deltaTime)
{
  ?ProcessComponents@BgVehiclePhysics@@IEAAXP8BgVehiclePhysicsComponent@@EAAXM@ZM@Z(this, functor, deltaTime);
}

/*
==============
BgVehiclePhysics::DeactivationLogic
==============
*/

void __fastcall BgVehiclePhysics::DeactivationLogic(BgVehiclePhysics *this, float deltaTime)
{
  ?DeactivationLogic@BgVehiclePhysics@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysics::GetGlobalTopSpeed
==============
*/

double __fastcall BgVehiclePhysics::GetGlobalTopSpeed(BgVehiclePhysics *this)
{
  double result; 

  *(float *)&result = ?GetGlobalTopSpeed@BgVehiclePhysics@@QEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysics::ComputePointWorldSpace
==============
*/

void __fastcall BgVehiclePhysics::ComputePointWorldSpace(BgVehiclePhysics *this, const vec3_t *pointLs, vec3_t *outPointWs)
{
  ?ComputePointWorldSpace@BgVehiclePhysics@@QEBAXAEBTvec3_t@@AEAT2@@Z(this, pointLs, outPointWs);
}

/*
==============
BgVehiclePhysicsDeferredActionManager::ExecutePostWorldStep
==============
*/

void __fastcall BgVehiclePhysicsDeferredActionManager::ExecutePostWorldStep(BgVehiclePhysicsDeferredActionManager *this, BgVehiclePhysics *vehObj)
{
  ?ExecutePostWorldStep@BgVehiclePhysicsDeferredActionManager@@QEAAXPEAVBgVehiclePhysics@@@Z(this, vehObj);
}

/*
==============
BgVehiclePhysics::AddComponent
==============
*/

void __fastcall BgVehiclePhysics::AddComponent(BgVehiclePhysics *this, VehiclePhysicsComponentId compId)
{
  ?AddComponent@BgVehiclePhysics@@QEAAXUVehiclePhysicsComponentId@@@Z(this, compId);
}

/*
==============
BGVehicles::PhysicsIsTypeSupported
==============
*/

bool __fastcall BGVehicles::PhysicsIsTypeSupported(VehicleType vehType)
{
  return ?PhysicsIsTypeSupported@BGVehicles@@SA_NW4VehicleType@@@Z(vehType);
}

/*
==============
BGVehicles::PhysicsIsValidComponent
==============
*/

bool __fastcall BGVehicles::PhysicsIsValidComponent(VehiclePhysicsComponentId componentId)
{
  return ?PhysicsIsValidComponent@BGVehicles@@SA_NUVehiclePhysicsComponentId@@@Z(componentId);
}

/*
==============
BgVehiclePhysics::Pmove
==============
*/

void __fastcall BgVehiclePhysics::Pmove(BgVehiclePhysics *this, pmove_t *pm, const pml_t *pml)
{
  ?Pmove@BgVehiclePhysics@@QEAAXPEAVpmove_t@@PEBUpml_t@@@Z(this, pm, pml);
}

/*
==============
BgVehiclePhysics::GatherLinkedPlayers
==============
*/

void __fastcall BgVehiclePhysics::GatherLinkedPlayers(BgVehiclePhysics *this)
{
  ?GatherLinkedPlayers@BgVehiclePhysics@@IEAAXXZ(this);
}

/*
==============
BgVehiclePhysics::ApplyAngularImpulse
==============
*/

void __fastcall BgVehiclePhysics::ApplyAngularImpulse(BgVehiclePhysics *this, const vec3_t *impulseWs, const vec3_t *atPointWs)
{
  ?ApplyAngularImpulse@BgVehiclePhysics@@QEAAXAEBTvec3_t@@0@Z(this, impulseWs, atPointWs);
}

/*
==============
BgVehiclePhysicsComponent::Resume
==============
*/

void __fastcall BgVehiclePhysicsComponent::Resume(BgVehiclePhysicsComponent *this)
{
  ?Resume@BgVehiclePhysicsComponent@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysics::AccumulateImpulse
==============
*/

void __fastcall BgVehiclePhysics::AccumulateImpulse(BgVehiclePhysics *this, const vec3_t *impulseWs, const vec3_t *atPointWs)
{
  ?AccumulateImpulse@BgVehiclePhysics@@IEAAXAEBTvec3_t@@0@Z(this, impulseWs, atPointWs);
}

/*
==============
BgVehiclePhysics::ResetInputControls
==============
*/

void __fastcall BgVehiclePhysics::ResetInputControls(BgVehiclePhysics *this)
{
  ?ResetInputControls@BgVehiclePhysics@@UEAAXXZ(this);
}

/*
==============
BgVehiclePhysics::IsKeyframed
==============
*/

bool __fastcall BgVehiclePhysics::IsKeyframed(BgVehiclePhysics *this)
{
  return ?IsKeyframed@BgVehiclePhysics@@QEBA_NXZ(this);
}

/*
==============
BgVehiclePhysics::QueryValuesFromPhysics
==============
*/

void __fastcall BgVehiclePhysics::QueryValuesFromPhysics(BgVehiclePhysics *this, playerState_s *outPs)
{
  ?QueryValuesFromPhysics@BgVehiclePhysics@@QEAAXPEAUplayerState_s@@@Z(this, outPs);
}

/*
==============
BgVehiclePhysics::SetEnableInputControl
==============
*/

void __fastcall BgVehiclePhysics::SetEnableInputControl(BgVehiclePhysics *this, bool status)
{
  ?SetEnableInputControl@BgVehiclePhysics@@QEAAX_N@Z(this, status);
}

/*
==============
BGVehicles::PhysicsUnpackLerpStateValues
==============
*/

void __fastcall BGVehicles::PhysicsUnpackLerpStateValues(BGVehicles *this, const LerpEntityStateVehicle *lerpVeh, float *outGasInput, bool *outIsBraking, float *outWheelAveSpinSpeed)
{
  ?PhysicsUnpackLerpStateValues@BGVehicles@@QEAAXAEBULerpEntityStateVehicle@@AEAMAEA_N1@Z(this, lerpVeh, outGasInput, outIsBraking, outWheelAveSpinSpeed);
}

/*
==============
BgVehiclePhysics::DebugDraw
==============
*/

void __fastcall BgVehiclePhysics::DebugDraw(BgVehiclePhysics *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?DebugDraw@BgVehiclePhysics@@UEAAXPEBUScreenPlacement@@PEAM1MM@Z(this, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
BGVehicles::PhysicsIsValid
==============
*/

bool __fastcall BGVehicles::PhysicsIsValid(unsigned int id)
{
  return ?PhysicsIsValid@BGVehicles@@SA_NI@Z(id);
}

/*
==============
BgVehiclePhysics::ComputeVelocityWorldSpace
==============
*/

void __fastcall BgVehiclePhysics::ComputeVelocityWorldSpace(BgVehiclePhysics *this, const vec3_t *velLs, vec3_t *outVelWs)
{
  ?ComputeVelocityWorldSpace@BgVehiclePhysics@@QEBAXAEBTvec3_t@@AEAT2@@Z(this, velLs, outVelWs);
}

/*
==============
BgVehiclePhysicsComponent::GetOwnerPosition
==============
*/

const vec3_t *__fastcall BgVehiclePhysicsComponent::GetOwnerPosition(BgVehiclePhysicsComponent *this)
{
  return ?GetOwnerPosition@BgVehiclePhysicsComponent@@IEBAAEBTvec3_t@@XZ(this);
}

/*
==============
BgVehiclePhysics::QueryValuesFromPhysics
==============
*/

void __fastcall BgVehiclePhysics::QueryValuesFromPhysics(BgVehiclePhysics *this, usercmd_s *outCmd, bool clientGeoLoaded)
{
  ?QueryValuesFromPhysics@BgVehiclePhysics@@QEAAXPEAUusercmd_s@@_N@Z(this, outCmd, clientGeoLoaded);
}

/*
==============
BgVehiclePhysics::ClipVelocities
==============
*/

void __fastcall BgVehiclePhysics::ClipVelocities(BgVehiclePhysics *this, vec3_t *inOutLinearVelWs, vec3_t *inOutAngularVelWs)
{
  ?ClipVelocities@BgVehiclePhysics@@MEAAXAEATvec3_t@@0@Z(this, inOutLinearVelWs, inOutAngularVelWs);
}

/*
==============
BgVehiclePhysicsComponent::ScrNotify
==============
*/

void __fastcall BgVehiclePhysicsComponent::ScrNotify(BgVehiclePhysicsComponent *this, scr_string_t str)
{
  ?ScrNotify@BgVehiclePhysicsComponent@@IEAAXW4scr_string_t@@@Z(this, str);
}

/*
==============
BgVehiclePhysicsComponent::ComputerOwnerAngles
==============
*/

void __fastcall BgVehiclePhysicsComponent::ComputerOwnerAngles(BgVehiclePhysicsComponent *this, vec3_t *outAngles)
{
  ?ComputerOwnerAngles@BgVehiclePhysicsComponent@@IEBAXAEATvec3_t@@@Z(this, outAngles);
}

/*
==============
BgVehiclePhysics::GetTopSpeedReverse
==============
*/

double __fastcall BgVehiclePhysics::GetTopSpeedReverse(BgVehiclePhysics *this)
{
  double result; 

  *(float *)&result = ?GetTopSpeedReverse@BgVehiclePhysics@@QEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysics::WarpClientAuth
==============
*/

void __fastcall BgVehiclePhysics::WarpClientAuth(BgVehiclePhysics *this)
{
  ?WarpClientAuth@BgVehiclePhysics@@QEBAXXZ(this);
}

/*
==============
BgVehiclePhysics::SetActivatedAlways
==============
*/

void __fastcall BgVehiclePhysics::SetActivatedAlways(BgVehiclePhysics *this)
{
  ?SetActivatedAlways@BgVehiclePhysics@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysics::AccumulateOnlyLinearImpulse
==============
*/

void __fastcall BgVehiclePhysics::AccumulateOnlyLinearImpulse(BgVehiclePhysics *this, const vec3_t *impulseWs)
{
  ?AccumulateOnlyLinearImpulse@BgVehiclePhysics@@IEAAXAEBTvec3_t@@@Z(this, impulseWs);
}

/*
==============
BgVehiclePhysics::Setup
==============
*/

bool __fastcall BgVehiclePhysics::Setup(BgVehiclePhysics *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  return ?Setup@BgVehiclePhysics@@UEAA_NPEAVBGVehicles@@W4Physics_WorldId@@IHIPEBUVehicleDef@@@Z(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
}

/*
==============
BGVehicles::PhysicsFactoryComponent
==============
*/

BgVehiclePhysicsComponent *__fastcall BGVehicles::PhysicsFactoryComponent(unsigned __int8 *buffer, unsigned int maxBufferSize, BgVehiclePhysics *vehObj, unsigned int compType)
{
  return ?PhysicsFactoryComponent@BGVehicles@@SAPEAVBgVehiclePhysicsComponent@@PEAEIPEAVBgVehiclePhysics@@I@Z(buffer, maxBufferSize, vehObj, compType);
}

/*
==============
BgVehiclePhysics::SetActivatedAuto
==============
*/

void __fastcall BgVehiclePhysics::SetActivatedAuto(BgVehiclePhysics *this)
{
  ?SetActivatedAuto@BgVehiclePhysics@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysics::CheckForWorldCollision
==============
*/

bool __fastcall BgVehiclePhysics::CheckForWorldCollision(BgVehiclePhysics *this)
{
  return ?CheckForWorldCollision@BgVehiclePhysics@@QEBA_NXZ(this);
}

/*
==============
BgVehiclePhysics::GetTopSpeedForward
==============
*/

double __fastcall BgVehiclePhysics::GetTopSpeedForward(BgVehiclePhysics *this)
{
  double result; 

  *(float *)&result = ?GetTopSpeedForward@BgVehiclePhysics@@QEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysics::BeforePhysicsWorldStep
==============
*/

void __fastcall BgVehiclePhysics::BeforePhysicsWorldStep(BgVehiclePhysics *this)
{
  ?BeforePhysicsWorldStep@BgVehiclePhysics@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysicsComponent::Setup
==============
*/

bool __fastcall BgVehiclePhysicsComponent::Setup(BgVehiclePhysicsComponent *this, BGVehicles *vehicleSystem, VehiclePhysicsComponentId id)
{
  return ?Setup@BgVehiclePhysicsComponent@@UEAA_NPEAVBGVehicles@@UVehiclePhysicsComponentId@@@Z(this, vehicleSystem, id);
}

/*
==============
BgVehiclePhysics::UpdatePhysicsSimulationParameters
==============
*/

void __fastcall BgVehiclePhysics::UpdatePhysicsSimulationParameters(BgVehiclePhysics *this, const vec3_t *linearVel, const vec3_t *angularVel, const tmat43_t<vec3_t> *chassisTransform, const vec3_t *comWs, const tmat33_t<vec3_t> *invInertiaWs)
{
  ?UpdatePhysicsSimulationParameters@BgVehiclePhysics@@IEAAXAEBTvec3_t@@0AEBT?$tmat43_t@Tvec3_t@@@@0AEBT?$tmat33_t@Tvec3_t@@@@@Z(this, linearVel, angularVel, chassisTransform, comWs, invInertiaWs);
}

/*
==============
BgVehiclePhysics::CreatePhysics
==============
*/

bool __fastcall BgVehiclePhysics::CreatePhysics(BgVehiclePhysics *this, const VehiclePhysicsDef *vehPhysicsDef)
{
  return ?CreatePhysics@BgVehiclePhysics@@UEAA_NPEBUVehiclePhysicsDef@@@Z(this, vehPhysicsDef);
}

/*
==============
BgVehiclePhysics::ApplyImpulse
==============
*/

void __fastcall BgVehiclePhysics::ApplyImpulse(BgVehiclePhysics *this, const vec3_t *impulseWs, const vec3_t *atPointWs)
{
  ?ApplyImpulse@BgVehiclePhysics@@QEAAXAEBTvec3_t@@0@Z(this, impulseWs, atPointWs);
}

/*
==============
BgVehiclePhysics::StartPlayerControlling
==============
*/

void __fastcall BgVehiclePhysics::StartPlayerControlling(BgVehiclePhysics *this)
{
  ?StartPlayerControlling@BgVehiclePhysics@@MEAAXXZ(this);
}

/*
==============
BgVehiclePhysics::SetDynamic
==============
*/

void __fastcall BgVehiclePhysics::SetDynamic(BgVehiclePhysics *this, float minTimeDynamic)
{
  ?SetDynamic@BgVehiclePhysics@@QEAAXM@Z(this, minTimeDynamic);
}

/*
==============
BgVehiclePhysics::GetPhysicsBodyId
==============
*/

unsigned int __fastcall BgVehiclePhysics::GetPhysicsBodyId(BgVehiclePhysics *this)
{
  return ?GetPhysicsBodyId@BgVehiclePhysics@@QEBAIXZ(this);
}

/*
==============
BgVehiclePhysics::SetDeactivatedAlways
==============
*/

void __fastcall BgVehiclePhysics::SetDeactivatedAlways(BgVehiclePhysics *this)
{
  ?SetDeactivatedAlways@BgVehiclePhysics@@QEAAXXZ(this);
}

/*
==============
BgVehiclePhysics::PostStep
==============
*/

void __fastcall BgVehiclePhysics::PostStep(BgVehiclePhysics *this, float deltaTime)
{
  ?PostStep@BgVehiclePhysics@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BGVehicles::PhysicsUpdateCharacterWobbleAnimDataCommon
==============
*/

void __fastcall BGVehicles::PhysicsUpdateCharacterWobbleAnimDataCommon(BGVehicles *this, const BgVehiclePhysics *vehObj, const tmat33_t<vec3_t> *entAxis, const vec3_t *entOrg, const characterInfo_t *ci, float frameTime, wobbleAnim_t *outData)
{
  ?PhysicsUpdateCharacterWobbleAnimDataCommon@BGVehicles@@QEBAXPEBVBgVehiclePhysics@@AEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@PEBUcharacterInfo_t@@MPEAUwobbleAnim_t@@@Z(this, vehObj, entAxis, entOrg, ci, frameTime, outData);
}

/*
==============
BgVehiclePhysics::SetLinearVelocityLocalSpace
==============
*/

void __fastcall BgVehiclePhysics::SetLinearVelocityLocalSpace(BgVehiclePhysics *this, const vec3_t *linVelLs, bool forceRigidBody)
{
  ?SetLinearVelocityLocalSpace@BgVehiclePhysics@@QEAAXAEBTvec3_t@@_N@Z(this, linVelLs, forceRigidBody);
}

/*
==============
BgVehiclePhysics::AccumulateImpulse
==============
*/
void BgVehiclePhysics::AccumulateImpulse(BgVehiclePhysics *this, const vec3_t *impulseWs, const vec3_t *atPointWs)
{
  BgVehiclePhysics *v11; 
  unsigned int BodyId; 
  unsigned int v14; 

  __asm
  {
    vmovss  xmm2, dword ptr [rcx+25Ch]
    vmulss  xmm0, xmm2, dword ptr [rdx]
    vaddss  xmm1, xmm0, dword ptr [rcx+1A4h]
    vmovss  dword ptr [rcx+1A4h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdx+4]
    vaddss  xmm1, xmm0, dword ptr [rcx+1A8h]
    vmovss  dword ptr [rcx+1A8h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdx+8]
    vaddss  xmm1, xmm0, dword ptr [rcx+1ACh]
    vmovss  dword ptr [rcx+1ACh], xmm1
  }
  v11 = this;
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(v11->m_worldId, BodyId) )
  {
    if ( v11->m_pmoveObject )
    {
      Physics_AccumulateAngularImpulse(impulseWs, atPointWs, &v11->m_centerOfMassWs, &v11->m_invInertiaWs, &v11->m_angularVelocityWs);
    }
    else
    {
      v14 = PhysicsVehicle_GetBodyId(v11->m_worldId, v11->m_entityNumber);
      Physics_AccumulateRigidBodyAngularImpulse(v11->m_worldId, v14, impulseWs, atPointWs, &v11->m_angularVelocityWs);
    }
  }
}

/*
==============
BgVehiclePhysics::AccumulateOnlyAngularImpulse
==============
*/
void BgVehiclePhysics::AccumulateOnlyAngularImpulse(BgVehiclePhysics *this, const vec3_t *impulseWs, const vec3_t *atPointWs)
{
  unsigned int BodyId; 
  unsigned int v7; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    if ( this->m_pmoveObject )
    {
      Physics_AccumulateAngularImpulse(impulseWs, atPointWs, &this->m_centerOfMassWs, &this->m_invInertiaWs, &this->m_angularVelocityWs);
    }
    else
    {
      v7 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      Physics_AccumulateRigidBodyAngularImpulse(this->m_worldId, v7, impulseWs, atPointWs, &this->m_angularVelocityWs);
    }
  }
}

/*
==============
BgVehiclePhysics::AccumulateOnlyLinearImpulse
==============
*/
void BgVehiclePhysics::AccumulateOnlyLinearImpulse(BgVehiclePhysics *this, const vec3_t *impulseWs)
{
  __asm
  {
    vmovss  xmm2, dword ptr [rcx+25Ch]
    vmulss  xmm0, xmm2, dword ptr [rdx]
    vaddss  xmm1, xmm0, dword ptr [rcx+1A4h]
    vmovss  dword ptr [rcx+1A4h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdx+4]
    vaddss  xmm1, xmm0, dword ptr [rcx+1A8h]
    vmovss  dword ptr [rcx+1A8h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdx+8]
    vaddss  xmm1, xmm0, dword ptr [rcx+1ACh]
    vmovss  dword ptr [rcx+1ACh], xmm1
  }
}

/*
==============
VehicleScriptableDmg::Add
==============
*/
char VehicleScriptableDmg::Add(VehicleScriptableDmg *this, __int16 vehEntNum, unsigned int scriptableIndex)
{
  volatile int *p_m_cursor; 
  __int64 v7; 
  __int64 v8; 

  p_m_cursor = &this->m_cursor;
  if ( *(int *)p_m_cursor >= 0 && *(int *)p_m_cursor < 256 )
  {
    if ( *(int *)p_m_cursor > 1 )
    {
      v7 = *p_m_cursor - 1;
      if ( this->m_scriptablesToDamage[v7].vehEntNum == vehEntNum && this->m_scriptablesToDamage[v7].scriptableIndex == scriptableIndex )
        return 1;
    }
    v8 = (unsigned int)(Sys_InterlockedIncrement(p_m_cursor) - 1);
    if ( (unsigned int)v8 < 0x100 )
    {
      this->m_scriptablesToDamage[v8].vehEntNum = vehEntNum;
      this->m_scriptablesToDamage[v8].scriptableIndex = scriptableIndex;
      return 1;
    }
  }
  return 0;
}

/*
==============
BgVehiclePhysics::AddComponent
==============
*/
void BgVehiclePhysics::AddComponent(BgVehiclePhysics *this, VehiclePhysicsComponentId compId)
{
  if ( !BGVehicles::PhysicsIsValidComponent(compId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1209, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValidComponent( compId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValidComponent( compId )") )
    __debugbreak();
  if ( LOWORD(compId.id) != this->m_vehicleId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1210, ASSERT_TYPE_ASSERT, "( compId.GetVehicleId() == m_vehicleId )", "BgVehiclePhysics::SetComponentId: compId doesn't belong to this vehicle") )
    __debugbreak();
  this->m_components[BYTE2(compId.id)] = compId;
}

/*
==============
BgVehiclePhysics::AdjustMassProperties
==============
*/
void BgVehiclePhysics::AdjustMassProperties(BgVehiclePhysics *this, const vec4_t *inertiaDiagonal)
{
  unsigned int BodyId; 
  bool IsPhysicsBodyIdValid; 
  bool v9; 
  bool v10; 
  bool v13; 
  unsigned int v22; 
  unsigned int v24; 

  _RBX = inertiaDiagonal;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RSI = this;
  __asm { vmovaps [rsp+58h+var_28], xmm7 }
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  IsPhysicsBodyIdValid = PhysicsVehicle_IsPhysicsBodyIdValid(_RSI->m_worldId, BodyId);
  v9 = !IsPhysicsBodyIdValid;
  if ( !IsPhysicsBodyIdValid )
  {
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 590, ASSERT_TYPE_ASSERT, "(IsPhysicsBodyIdValid())", (const char *)&queryFormat, "IsPhysicsBodyIdValid()");
    v9 = !v10;
    if ( v10 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rbx]
  }
  if ( !v9 )
    goto LABEL_21;
  __asm { vcomiss xmm6, dword ptr [rbx+4] }
  if ( !v9 )
    goto LABEL_21;
  __asm { vcomiss xmm6, dword ptr [rbx+8] }
  if ( !v9 )
    goto LABEL_21;
  __asm { vcomiss xmm7, dword ptr [rbx+0Ch] }
  if ( !v9 )
  {
LABEL_21:
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 592, ASSERT_TYPE_ASSERT, "(inertiaDiagonal[0] >= 0.0f && inertiaDiagonal[1] >= 0.0f && inertiaDiagonal[2] >= 0.0f && inertiaDiagonal[3] >= 1.0f)", (const char *)&queryFormat, "inertiaDiagonal[0] >= 0.0f && inertiaDiagonal[1] >= 0.0f && inertiaDiagonal[2] >= 0.0f && inertiaDiagonal[3] >= 1.0f");
    v9 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmaxss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rsi+260h], xmm1
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vcomiss xmm2, xmm6
    vmulss  xmm0, xmm1, dword ptr [rbx+4]
    vmulss  xmm3, xmm1, dword ptr [rbx+8]
  }
  if ( v9 )
    __asm { vxorps  xmm4, xmm4, xmm4 }
  else
    __asm { vdivss  xmm4, xmm7, xmm2 }
  __asm { vcomiss xmm0, xmm6 }
  if ( v9 )
    __asm { vxorps  xmm2, xmm2, xmm2 }
  else
    __asm { vdivss  xmm2, xmm7, xmm0 }
  __asm { vcomiss xmm3, xmm6 }
  if ( !v9 )
    __asm { vdivss  xmm6, xmm7, xmm3 }
  __asm
  {
    vmovss  dword ptr [rsi+250h], xmm4
    vmovss  dword ptr [rsi+254h], xmm2
    vmovss  dword ptr [rsi+258h], xmm6
    vdivss  xmm0, xmm7, xmm1
    vmovss  dword ptr [rsi+25Ch], xmm0
  }
  v22 = PhysicsVehicle_GetBodyId(_RSI->m_worldId, _RSI->m_entityNumber);
  __asm { vmovss  xmm2, dword ptr [rsi+260h]; mass }
  v24 = v22;
  Physics_SetRigidBodyMass(_RSI->m_worldId, v22, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  Physics_SetRigidBodyInverseInertiaLocal(_RSI->m_worldId, v24, &_RSI->m_invInertiaLs);
}

/*
==============
BgVehiclePhysics::AfterPhysicsWorldStep
==============
*/

void __fastcall BgVehiclePhysics::AfterPhysicsWorldStep(BgVehiclePhysics *this, double lastPhysicsStepTime)
{
  unsigned int BodyId; 
  unsigned int v6; 
  unsigned int v7; 
  bool IsRigidBodyKeyframed; 
  tmat43_t<vec3_t> *p_m_transform; 
  unsigned int v11; 
  float v12; 
  vec4_t out; 
  tmat44_t<vec4_t> outIwTransform; 

  __asm
  {
    vmovaps [rsp+0A8h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( !PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
    goto LABEL_8;
  v6 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, v6, &outIwTransform);
  v7 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, v7) )
  {
    v11 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    IsRigidBodyKeyframed = Physics_IsRigidBodyKeyframed(this->m_worldId, v11);
    if ( IsRigidBodyKeyframed )
    {
      p_m_transform = &this->m_transform;
      MatrixCopy44To43(&outIwTransform, &this->m_transform);
      goto LABEL_5;
    }
  }
  else
  {
    IsRigidBodyKeyframed = 0;
  }
  p_m_transform = &this->m_transform;
LABEL_5:
  AxisToQuat((const tmat33_t<vec3_t> *)p_m_transform, &out);
  __asm { vmovss  [rsp+0A8h+var_88], xmm6 }
  BgVehiclePhysicsHistory::AddTransform(&this->m_history, this, &this->m_transform.m[3], &out, v12);
  if ( IsRigidBodyKeyframed )
  {
    this->m_linearVelocityWs.v[0] = this->m_history.m_lastLinearVel.v[0];
    this->m_linearVelocityWs.v[1] = this->m_history.m_lastLinearVel.v[1];
    this->m_linearVelocityWs.v[2] = this->m_history.m_lastLinearVel.v[2];
    this->m_angularVelocityWs.v[0] = this->m_history.m_lastAngularVel.v[0];
    this->m_angularVelocityWs.v[1] = this->m_history.m_lastAngularVel.v[1];
    this->m_angularVelocityWs.v[2] = this->m_history.m_lastAngularVel.v[2];
  }
  BgVehiclePhysicsDeferredActionManager::ExecutePostWorldStep(&this->m_deferActionMgr, this);
LABEL_8:
  __asm { vmovaps xmm6, [rsp+0A8h+var_18] }
}

/*
==============
BgVehiclePhysics::ApplyAngularImpulse
==============
*/
void BgVehiclePhysics::ApplyAngularImpulse(BgVehiclePhysics *this, const vec3_t *impulseWs, const vec3_t *atPointWs)
{
  unsigned int BodyId; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  vec3_t *outAngularVelWs; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    v7 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    if ( !PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, v7) || (v8 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber), !Physics_IsRigidBodyKeyframed(this->m_worldId, v8)) )
    {
      v9 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      Physics_GetRigidBodyLinAngVel((const Physics_WorldId)this->m_worldId, v9, &this->m_linearVelocityWs, &this->m_angularVelocityWs);
      outAngularVelWs = &this->m_angularVelocityWs;
      if ( this->m_pmoveObject )
        Physics_AccumulateAngularImpulse(impulseWs, atPointWs, &this->m_centerOfMassWs, &this->m_invInertiaWs, outAngularVelWs);
      else
        Physics_AccumulateRigidBodyAngularImpulse(this->m_worldId, v9, impulseWs, atPointWs, outAngularVelWs);
      Physics_SetRigidBodyLinAngVel((const Physics_WorldId)this->m_worldId, v9, &this->m_linearVelocityWs, &this->m_angularVelocityWs);
    }
  }
}

/*
==============
BgVehiclePhysics::ApplyImpulse
==============
*/
void BgVehiclePhysics::ApplyImpulse(BgVehiclePhysics *this, const vec3_t *impulseWs, const vec3_t *atPointWs)
{
  unsigned int BodyId; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v17; 
  unsigned int v18; 

  _RBX = this;
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(_RBX->m_worldId, BodyId) )
  {
    v7 = PhysicsVehicle_GetBodyId(_RBX->m_worldId, _RBX->m_entityNumber);
    if ( !PhysicsVehicle_IsPhysicsBodyIdValid(_RBX->m_worldId, v7) || (v8 = PhysicsVehicle_GetBodyId(_RBX->m_worldId, _RBX->m_entityNumber), !Physics_IsRigidBodyKeyframed(_RBX->m_worldId, v8)) )
    {
      v9 = PhysicsVehicle_GetBodyId(_RBX->m_worldId, _RBX->m_entityNumber);
      Physics_GetRigidBodyLinAngVel((const Physics_WorldId)_RBX->m_worldId, v9, &_RBX->m_linearVelocityWs, &_RBX->m_angularVelocityWs);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+25Ch]
        vmulss  xmm0, xmm2, dword ptr [rsi]
        vaddss  xmm1, xmm0, dword ptr [rbx+1A4h]
        vmovss  dword ptr [rbx+1A4h], xmm1
        vmulss  xmm0, xmm2, dword ptr [rsi+4]
        vaddss  xmm1, xmm0, dword ptr [rbx+1A8h]
        vmovss  dword ptr [rbx+1A8h], xmm1
        vmulss  xmm0, xmm2, dword ptr [rsi+8]
        vaddss  xmm1, xmm0, dword ptr [rbx+1ACh]
        vmovss  dword ptr [rbx+1ACh], xmm1
      }
      v17 = PhysicsVehicle_GetBodyId(_RBX->m_worldId, _RBX->m_entityNumber);
      if ( PhysicsVehicle_IsPhysicsBodyIdValid(_RBX->m_worldId, v17) )
      {
        if ( _RBX->m_pmoveObject )
        {
          Physics_AccumulateAngularImpulse(impulseWs, atPointWs, &_RBX->m_centerOfMassWs, &_RBX->m_invInertiaWs, &_RBX->m_angularVelocityWs);
        }
        else
        {
          v18 = PhysicsVehicle_GetBodyId(_RBX->m_worldId, _RBX->m_entityNumber);
          Physics_AccumulateRigidBodyAngularImpulse(_RBX->m_worldId, v18, impulseWs, atPointWs, &_RBX->m_angularVelocityWs);
        }
      }
      Physics_SetRigidBodyLinAngVel((const Physics_WorldId)_RBX->m_worldId, v9, &_RBX->m_linearVelocityWs, &_RBX->m_angularVelocityWs);
    }
  }
}

/*
==============
BgVehiclePhysics::BeforePhysicsWorldStep
==============
*/
void BgVehiclePhysics::BeforePhysicsWorldStep(BgVehiclePhysics *this)
{
  VehiclePhysicsNetcodeType m_netcodeType; 
  unsigned int BodyId; 
  unsigned int v4; 

  if ( this->m_playerControlled )
  {
    m_netcodeType = this->m_netcodeType;
    if ( m_netcodeType == VEH_NETCODE_CLIENT_PRED || m_netcodeType == VEH_NETCODE_CLIENT_PRED_SB )
    {
      BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
      {
        v4 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
        if ( Physics_IsRigidBodyKeyframed(this->m_worldId, v4) )
        {
          __asm { vmovss  xmm1, cs:__real@41200000; minTimeDynamic }
          BgVehiclePhysics::SetDynamic(this, *(float *)&_XMM1);
        }
      }
    }
  }
  BgVehiclePhysicsDeferredActionManager::ExecuteBeforeWorldStep(&this->m_deferActionMgr, this);
}

/*
==============
BgVehiclePhysics::BlendToPmoveObject
==============
*/

void __fastcall BgVehiclePhysics::BlendToPmoveObject(BgVehiclePhysics *this, double deltaTime, const BgVehiclePhysics *pmoveObj, vec3_t *inOutLinearVelWs, vec3_t *inOutAngularVelWs)
{
  unsigned int BodyId; 
  int m_entityNumber; 
  Physics_WorldId m_worldId; 
  unsigned int v17; 
  unsigned int v18; 
  char v31; 
  bool v32; 
  bool v33; 
  int v95; 
  int v96; 
  int v97; 
  vec3_t position; 
  __int64 v99; 
  float v100; 
  vec4_t cur; 
  vec4_t dst; 
  int v103[4]; 
  vec4_t orientation; 
  vec4_t in2; 

  __asm { vmovaps [rsp+120h+var_40], xmm6 }
  _R15 = inOutLinearVelWs;
  _R14 = inOutAngularVelWs;
  _RDI = pmoveObj;
  __asm { vmovaps xmm6, xmm1 }
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    this->m_pmoveTargetPosition.v[0] = _RDI->m_manualIntegratedPos.v[0];
    this->m_pmoveTargetPosition.v[1] = _RDI->m_manualIntegratedPos.v[1];
    this->m_pmoveTargetPosition.v[2] = _RDI->m_manualIntegratedPos.v[2];
    __asm { vmovups xmm0, xmmword ptr [rdi+1E4h] }
    m_entityNumber = this->m_entityNumber;
    m_worldId = this->m_worldId;
    __asm
    {
      vmovaps [rsp+120h+var_50], xmm7
      vmovups xmmword ptr [rbp+4Fh+in2], xmm0
      vmovaps [rsp+120h+var_60], xmm8
    }
    v17 = PhysicsVehicle_GetBodyId(m_worldId, m_entityNumber);
    if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, v17) )
    {
      v18 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, v18, &position, &orientation);
    }
    _RSI = DCONST_DVARFLT_bg_vehNetManualExtrap;
    if ( !DCONST_DVARFLT_bg_vehNetManualExtrap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetManualExtrap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi+28h]
      vmulss  xmm0, xmm2, dword ptr [rdi+1A4h]
      vaddss  xmm1, xmm0, dword ptr [rbx+268h]
      vmulss  xmm0, xmm2, dword ptr [rdi+1A8h]
      vmovss  dword ptr [rbp+4Fh+dst], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+26Ch]
      vmulss  xmm0, xmm2, dword ptr [rdi+1ACh]
    }
    _RDI = DCONST_DVARFLT_bg_vehNetLerpSpeed;
    cur.v[2] = position.v[2];
    __asm
    {
      vmovsd  xmm2, qword ptr [rsp+120h+position]
      vmovss  dword ptr [rbp+4Fh+dst+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+270h]
      vmovss  dword ptr [rbp+4Fh+dst+8], xmm1
      vmovsd  qword ptr [rbp+4Fh+cur], xmm2
    }
    if ( !DCONST_DVARFLT_bg_vehNetLerpSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetLerpSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+28h]; speed
      vmovaps xmm2, xmm6; frameTime
    }
    BgVehiclePhysics::DampLerp((vec3_t *)&cur, (const vec3_t *)&dst, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vcomiss xmm6, cs:__real@3a83126f }
    if ( v31 | v32 )
    {
      v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 677, ASSERT_TYPE_ASSERT, "(deltaTime > 0.001f)", (const char *)&queryFormat, "deltaTime > EQUAL_EPSILON");
      v31 = 0;
      v32 = !v33;
      if ( v33 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  xmm1, dword ptr [rbp+4Fh+cur]
      vdivss  xmm7, xmm0, xmm6
      vsubss  xmm0, xmm1, dword ptr [rsp+120h+position]
      vmovss  xmm1, dword ptr [rbp+4Fh+cur+4]
      vmulss  xmm2, xmm0, xmm7
      vsubss  xmm0, xmm1, dword ptr [rsp+120h+position+4]
      vmovss  xmm1, dword ptr [rbp+4Fh+cur+8]
      vmovss  [rbp+4Fh+var_98], xmm2
      vmulss  xmm2, xmm0, xmm7
      vsubss  xmm0, xmm1, dword ptr [rsp+120h+position+8]
      vmovss  [rbp+4Fh+var_94], xmm2
      vcvtss2sd xmm1, xmm6, xmm6
      vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
      vmulss  xmm2, xmm0, xmm7
      vmovss  [rbp+4Fh+var_90], xmm2
    }
    if ( v31 | v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 693, ASSERT_TYPE_ASSERT, "(deltaTime > 1.0E-6)", (const char *)&queryFormat, "deltaTime > ZERO_EPSILON") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+4Fh+orientation]
      vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm2, dword ptr [rbp+4Fh+orientation+4]
      vxorps  xmm1, xmm0, xmm6
      vxorps  xmm0, xmm2, xmm6
      vmovss  dword ptr [rbp+4Fh+dst], xmm1
      vmovss  xmm1, dword ptr [rbp+4Fh+orientation+8]
      vmovss  dword ptr [rbp+4Fh+dst+4], xmm0
      vmovss  xmm0, dword ptr [rbp+4Fh+orientation+0Ch]
      vxorps  xmm2, xmm1, xmm6
      vmovss  dword ptr [rbp+4Fh+dst+8], xmm2
      vmovss  [rbp+4Fh+var_9C], xmm0
    }
    QuatMultiply(&dst, &in2, &cur);
    __asm
    {
      vmulss  xmm5, xmm7, cs:__real@3f000000
      vmovss  xmm4, [rbp+4Fh+var_AC]
      vmovss  xmm2, dword ptr [rbp+4Fh+cur]
      vxorps  xmm1, xmm2, xmm6
      vxorps  xmm7, xmm7, xmm7
      vcmpless xmm0, xmm7, xmm4
      vblendvps xmm0, xmm1, xmm2, xmm0
      vmovss  xmm2, dword ptr [rbp+4Fh+cur+4]
      vmulss  xmm3, xmm0, xmm5
      vxorps  xmm1, xmm2, xmm6
      vcmpless xmm0, xmm7, xmm4
      vblendvps xmm0, xmm1, xmm2, xmm0
      vmovss  xmm2, dword ptr [rbp+4Fh+cur+8]
      vmulss  xmm8, xmm0, xmm5
      vcmpless xmm0, xmm7, xmm4
      vmovss  [rsp+120h+var_E0], xmm3
      vxorps  xmm1, xmm2, xmm6
      vblendvps xmm0, xmm1, xmm2, xmm0
      vmulss  xmm4, xmm0, xmm5
      vmovss  dword ptr [rsp+120h+position+8], xmm4
      vmovss  dword ptr [rsp+120h+position], xmm3
      vmovss  dword ptr [rsp+120h+position+4], xmm8
    }
    if ( (v95 & 0x7F800000) == 2139095040 )
      goto LABEL_20;
    __asm { vmovss  [rsp+120h+var_E0], xmm8 }
    if ( (v96 & 0x7F800000) == 2139095040 )
      goto LABEL_20;
    __asm { vmovss  [rsp+120h+var_E0], xmm4 }
    if ( (v97 & 0x7F800000) == 2139095040 )
    {
LABEL_20:
      __asm
      {
        vmovss  dword ptr [rbp+4Fh+var_C8], xmm7
        vmovss  dword ptr [rbp+4Fh+var_C8+4], xmm7
        vmovss  [rbp+4Fh+var_C0], xmm7
      }
    }
    else
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rsp+120h+position]
        vmovsd  [rbp+4Fh+var_C8], xmm0
      }
      v100 = position.v[2];
    }
    _RDI = DCONST_DVARFLT_bg_vehNetWeight0;
    __asm { vmovaps xmm8, [rsp+120h+var_60] }
    if ( !DCONST_DVARFLT_bg_vehNetWeight0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetWeight0") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm7, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_bg_vehNetWeight1;
    if ( !DCONST_DVARFLT_bg_vehNetWeight1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetWeight1") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    this->ClipVelocities(this, _R15, inOutAngularVelWs);
    this->ClipVelocities(this, (vec3_t *)v103, (vec3_t *)&v99);
    __asm
    {
      vmulss  xmm1, xmm7, dword ptr [r15]
      vmulss  xmm2, xmm6, [rbp+4Fh+var_98]
      vmulss  xmm3, xmm6, dword ptr [rbp+4Fh+var_C8]
      vaddss  xmm0, xmm2, xmm1
      vmulss  xmm2, xmm6, [rbp+4Fh+var_94]
      vmovss  dword ptr [r15], xmm0
      vmulss  xmm0, xmm7, dword ptr [r15+4]
      vaddss  xmm1, xmm2, xmm0
      vmulss  xmm2, xmm6, dword ptr [rbp+4Fh+var_C8+4]
      vmovss  dword ptr [r15+4], xmm1
      vmulss  xmm0, xmm7, dword ptr [r14]
      vaddss  xmm1, xmm3, xmm0
      vmovss  dword ptr [r14], xmm1
      vmulss  xmm1, xmm7, dword ptr [r14+4]
      vaddss  xmm0, xmm2, xmm1
      vmulss  xmm2, xmm6, [rbp+4Fh+var_C0]
      vmovss  dword ptr [r14+4], xmm0
      vmulss  xmm0, xmm7, dword ptr [r14+8]
      vaddss  xmm1, xmm2, xmm0
      vmovss  dword ptr [r14+8], xmm1
    }
    this->ClipVelocities(this, _R15, inOutAngularVelWs);
    __asm { vmovaps xmm7, [rsp+120h+var_50] }
  }
  __asm { vmovaps xmm6, [rsp+120h+var_40] }
}

/*
==============
BgVehiclePhysics::CheckForWorldCollision
==============
*/
bool BgVehiclePhysics::CheckForWorldCollision(BgVehiclePhysics *this)
{
  unsigned int BodyId; 
  unsigned int v3; 
  __int16 gridIdx; 
  vec3_t position; 
  vec4_t orientation; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    v3 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, v3, &position, &orientation);
  }
  return WorldCollision_IsCollisionReadyAt((const Physics_WorldId)this->m_worldId, (const vec2_t *)&position, &gridIdx);
}

/*
==============
BgVehiclePhysics::CheckSanityValues
==============
*/
bool BgVehiclePhysics::CheckSanityValues(BgVehiclePhysics *this, const PlayerVehicleState *vehicleState)
{
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vmovss  [rsp+arg_8], xmm0
  }
  if ( (v15 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+10h]
    vmovss  [rsp+arg_8], xmm0
  }
  if ( (v16 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+14h]
    vmovss  [rsp+arg_8], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+18h]
    vmovss  [rsp+arg_8], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+1Ch]
    vmovss  [rsp+arg_8], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+20h]
    vmovss  [rsp+arg_8], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+24h]
    vmovss  [rsp+arg_8], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+28h]
    vmovss  [rsp+arg_8], xmm0
  }
  if ( (v22 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+2Ch]
    vmovss  [rsp+arg_8], xmm0
  }
  if ( (v23 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+30h]
    vmovss  [rsp+arg_8], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+34h]
    vmovss  [rsp+arg_8], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+38h]
    vmovss  [rsp+arg_8], xmm0
  }
  return (v26 & 0x7F800000) != 2139095040;
}

/*
==============
BgVehiclePhysics::CheckSanityValues
==============
*/
bool BgVehiclePhysics::CheckSanityValues(BgVehiclePhysics *this)
{
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1A4h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v33 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1A8h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v34 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1ACh]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v35 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1B0h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v36 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1B4h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v37 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1B8h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v38 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+174h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v39 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+178h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v40 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+17Ch]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v41 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+180h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v42 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+184h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v43 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+188h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v44 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+18Ch]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v45 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+190h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v46 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+194h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v47 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+198h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v48 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+19Ch]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v49 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1A0h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v50 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+22Ch]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v51 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+230h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v52 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+234h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v53 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+250h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v54 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+254h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v55 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+258h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v56 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1D8h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v57 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1DCh]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v58 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1E0h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v59 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1E4h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v60 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1E8h]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v61 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1ECh]
    vmovss  [rsp+arg_0], xmm0
  }
  if ( (v62 & 0x7F800000) == 2139095040 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1F0h]
    vmovss  [rsp+arg_0], xmm0
  }
  return (v63 & 0x7F800000) != 2139095040;
}

/*
==============
BgVehiclePhysics::ClientWarpDetection
==============
*/

void __fastcall BgVehiclePhysics::ClientWarpDetection(BgVehiclePhysics *this, const playerState_s *ps, double dt)
{
  bool IsPredictiveWorld; 
  bool v12; 
  bool v13; 
  BGVehicles *m_vehicleSystem; 
  BGVehicles_vtbl *v16; 
  char v31; 
  char v32; 
  char v57; 
  unsigned int BodyId; 
  unsigned int v63; 
  unsigned int v64; 
  vec3_t position; 
  vec4_t orientation; 

  __asm { vmovaps [rsp+0C8h+var_48], xmm8 }
  _RBX = this;
  __asm { vmovaps xmm8, xmm2 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1374, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  IsPredictiveWorld = Physics_IsPredictiveWorld(_RBX->m_worldId);
  v12 = !IsPredictiveWorld;
  if ( !IsPredictiveWorld )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1375, ASSERT_TYPE_ASSERT, "( IsClient() )", "BgVehiclePhysics::ClientWarpDetection() can be called only on client side vehicle objects");
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm8, xmm0
  }
  if ( !v12 )
  {
    m_vehicleSystem = _RBX->m_vehicleSystem;
    v16 = m_vehicleSystem->__vftable;
    __asm
    {
      vmovaps [rsp+0C8h+var_28], xmm6
      vmovaps [rsp+0C8h+var_38], xmm7
      vmovaps [rsp+0C8h+var_58], xmm9
    }
    v16->PhysicsGetVehicleOriginAtPlayerStateTime(m_vehicleSystem, ps, &position);
    _RSI = &ps->vehicleState.origin;
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+4]
      vsubss  xmm2, xmm1, dword ptr [rsp+0C8h+position+4]
      vmovss  xmm0, dword ptr [rsi]
      vmovss  xmm1, dword ptr [rsp+0C8h+position+8]
      vsubss  xmm6, xmm1, dword ptr [rdi+134h]
      vsubss  xmm4, xmm0, dword ptr [rsp+0C8h+position]
    }
    _RDI = DCONST_DVARFLT_bg_vehNetDistSamplesToWarpInc;
    __asm
    {
      vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm7, xmm3, xmm0
    }
    if ( !DCONST_DVARFLT_bg_vehNetDistSamplesToWarpInc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetDistSamplesToWarpInc") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm9, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_bg_vehNetDistSamplesToWarpDec;
    if ( !DCONST_DVARFLT_bg_vehNetDistSamplesToWarpDec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetDistSamplesToWarpDec") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+28h]
      vmovss  xmm3, cs:__real@3f800000
      vmovss  xmm4, dword ptr [rbx+2A0h]
      vmovss  xmm2, dword ptr [rbx+29Ch]
      vcmpless xmm0, xmm4, xmm6
      vblendvps xmm0, xmm1, xmm9, xmm0
      vmovss  [rsp+0C8h+var_88], xmm0
      vcmpless xmm0, xmm2, xmm7
      vblendvps xmm0, xmm1, xmm9, xmm0
      vmovaps xmm9, [rsp+0C8h+var_58]
      vdivss  xmm5, xmm3, xmm8
      vmulss  xmm1, xmm0, xmm5
      vcomiss xmm1, xmm3
    }
    if ( !(v31 | v32) )
    {
      __asm
      {
        vdivss  xmm1, xmm3, xmm1
        vmulss  xmm0, xmm1, xmm2
        vsubss  xmm2, xmm2, xmm0
        vmulss  xmm1, xmm1, xmm7
        vaddss  xmm7, xmm2, xmm1
      }
    }
    __asm
    {
      vmulss  xmm0, xmm5, [rsp+0C8h+var_88]
      vcomiss xmm0, xmm3
      vmovss  dword ptr [rbx+29Ch], xmm7
      vmovaps xmm7, [rsp+0C8h+var_38]
    }
    if ( !(v31 | v32) )
    {
      __asm
      {
        vdivss  xmm1, xmm3, xmm0
        vmulss  xmm0, xmm1, xmm4
        vsubss  xmm2, xmm4, xmm0
        vmulss  xmm1, xmm1, xmm6
        vaddss  xmm6, xmm2, xmm1
      }
    }
    __asm { vmovss  dword ptr [rbx+2A0h], xmm6 }
    _RDI = DCONST_DVARFLT_bg_vehNetDistThresholdToWarpXY;
    if ( !DCONST_DVARFLT_bg_vehNetDistThresholdToWarpXY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetDistThresholdToWarpXY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_bg_vehNetDistThresholdToWarpZ;
    if ( !DCONST_DVARFLT_bg_vehNetDistThresholdToWarpZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetDistThresholdToWarpZ") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmulss  xmm0, xmm6, xmm6
      vcomiss xmm0, dword ptr [rbx+29Ch]
      vmovaps xmm6, [rsp+0C8h+var_28]
    }
    if ( v57 )
      goto LABEL_26;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm1, xmm0, xmm0
      vcomiss xmm1, dword ptr [rbx+2A0h]
    }
    if ( v57 )
    {
LABEL_26:
      BodyId = PhysicsVehicle_GetBodyId(_RBX->m_worldId, _RBX->m_entityNumber);
      if ( PhysicsVehicle_IsPhysicsBodyIdValid(_RBX->m_worldId, BodyId) )
      {
        v63 = PhysicsVehicle_GetBodyId(_RBX->m_worldId, _RBX->m_entityNumber);
        Physics_GetRigidBodyTransform((const Physics_WorldId)_RBX->m_worldId, v63, &position, &orientation);
      }
      v64 = PhysicsVehicle_GetBodyId(_RBX->m_worldId, _RBX->m_entityNumber);
      Physics_WarpRigidBodyTo_Simple((const Physics_WorldId)_RBX->m_worldId, v64, _RSI, &orientation);
      *(_QWORD *)&_RBX->m_clientDistanceXYFromPsAvg = 0i64;
    }
  }
  __asm { vmovaps xmm8, [rsp+0C8h+var_48] }
}

/*
==============
BgVehiclePhysics::ClipVelocities
==============
*/
void BgVehiclePhysics::ClipVelocities(BgVehiclePhysics *this, vec3_t *inOutLinearVelWs, vec3_t *inOutAngularVelWs)
{
  char v29; 
  char v30; 
  unsigned __int8 v33; 
  char v36; 
  bool v42; 
  bool v47; 
  double v76; 
  double v77; 
  vec3_t vec; 
  int v81; 
  tmat33_t<vec3_t> out; 

  _RSI = inOutLinearVelWs;
  _RBX = this;
  if ( !this->SupportsFeature(this, VPFEAT_NO_SPEED_LIMITER) )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rsi+4]
      vmulss  xmm1, xmm4, dword ptr [rbx+184h]
      vmovss  xmm5, dword ptr [rsi+8]
      vmovss  xmm3, dword ptr [rsi]
      vmulss  xmm0, xmm3, dword ptr [rbx+180h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbx+188h]
      vmulss  xmm0, xmm3, dword ptr [rbx+174h]
      vmovaps [rsp+100h+var_40], xmm6
      vaddss  xmm6, xmm2, xmm1
      vmulss  xmm1, xmm4, dword ptr [rbx+178h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbx+17Ch]
      vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vaddss  xmm5, xmm2, xmm1
      vandps  xmm4, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcmpltss xmm1, xmm0, xmm4
      vblendvps xmm0, xmm6, xmm5, xmm1
      vmovaps [rsp+100h+var_50], xmm7
      vmovss  [rbp+57h+var_B0], xmm0
      vmovaps [rsp+100h+var_60], xmm8
    }
    *(double *)&_XMM0 = BgVehiclePhysics::GetGlobalTopSpeed(_RBX);
    __asm
    {
      vmovss  xmm7, cs:__real@3a83126f
      vmovaps xmm6, xmm0
      vmovss  xmm0, dword ptr [rbx+1F4h]
      vcomiss xmm0, xmm7
    }
    if ( !(v29 | v30) )
      __asm { vminss  xmm6, xmm0, xmm6 }
    __asm { vmovss  [rbp+57h+var_98], xmm6 }
    *(double *)&_XMM0 = BgVehiclePhysics::GetGlobalTopSpeed(_RBX);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+1F8h]
      vcomiss xmm1, xmm7
    }
    if ( !(v29 | v30) )
      __asm { vminss  xmm0, xmm1, xmm0 }
    __asm
    {
      vcomiss xmm6, xmm7
      vmovss  xmm1, [rbp+57h+var_B0]
      vmovss  [rbp+57h+var_94], xmm0
    }
    if ( v29 | v30 )
      goto LABEL_9;
    __asm { vcomiss xmm1, xmm6 }
    if ( v29 | v30 )
    {
LABEL_9:
      v33 = 0;
      v29 = 0;
      v30 = 1;
    }
    else
    {
      v33 = 1;
    }
    __asm
    {
      vcomiss xmm0, xmm7
      vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
    }
    if ( v29 | v30 )
      goto LABEL_13;
    __asm
    {
      vxorps  xmm0, xmm0, xmm8
      vcomiss xmm1, xmm0
    }
    if ( !v29 )
    {
LABEL_13:
      v36 = 0;
      v29 = 0;
      v30 = 1;
    }
    else
    {
      v36 = 1;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  xmm2, cs:__real@358637be
      vmulss  xmm1, xmm0, xmm0
      vcomiss xmm1, xmm2
      vxorps  xmm7, xmm7, xmm7
    }
    if ( !(v29 | v30) )
      goto LABEL_16;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vmulss  xmm1, xmm0, xmm0
      vcomiss xmm1, xmm2
    }
    if ( !(v29 | v30) )
    {
LABEL_16:
      AxisTranspose((const tmat33_t<vec3_t> *)&_RBX->m_transform, &out);
      AxisTransformVec3(&out, _RSI, &vec);
      if ( v33 || v36 )
      {
        if ( 1 - (unsigned int)v33 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", 1 - v33, 2) )
          __debugbreak();
        _RAX = &v81 - v33;
        v42 = (unsigned __int64)&v81 <= 4 * (unsigned __int64)v33;
        __asm
        {
          vmovss  xmm6, dword ptr [rax]
          vcomiss xmm6, xmm7
        }
        if ( (unsigned __int64)&v81 < 4 * (unsigned __int64)v33 )
        {
          __asm
          {
            vxorpd  xmm0, xmm0, xmm0
            vmovsd  [rsp+100h+var_C0], xmm0
            vcvtss2sd xmm1, xmm6, xmm6
            vmovsd  [rsp+100h+var_C8], xmm1
          }
          v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1100, ASSERT_TYPE_ASSERT, "( maxLength ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "maxLength", "0.0f", v76, v77);
          v42 = !v47;
          if ( v47 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm3, dword ptr [rbp+57h+vec]
          vmovss  xmm4, dword ptr [rbp+57h+vec+4]
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vcomiss xmm2, xmm1
        }
        if ( !v42 )
        {
          __asm
          {
            vsqrtss xmm0, xmm2, xmm2
            vdivss  xmm2, xmm6, xmm0
            vmulss  xmm1, xmm3, xmm2
            vmulss  xmm0, xmm4, xmm2
            vmovss  dword ptr [rbp+57h+vec], xmm1
            vmovss  dword ptr [rbp+57h+vec+4], xmm0
          }
        }
      }
      _RDI = DCONST_DVARFLT_bg_vehMaxVertSpeed;
      if ( !DCONST_DVARFLT_bg_vehMaxVertSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehMaxVertSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm6, dword ptr [rdi+28h] }
      _RDI = DCONST_DVARFLT_bg_vehMinVertSpeed;
      if ( !DCONST_DVARFLT_bg_vehMinVertSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehMinVertSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+28h]; min
        vmovss  xmm0, dword ptr [rbp+57h+vec+8]; val
        vmovaps xmm2, xmm6; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rbp+57h+vec+8], xmm0 }
      AxisTransformVec3((const tmat33_t<vec3_t> *)&_RBX->m_transform, &vec, _RSI);
    }
    __asm
    {
      vucomiss xmm7, dword ptr [rbx+1FCh]
      vmovaps xmm6, [rsp+100h+var_40]
    }
    if ( !v30 )
      goto LABEL_36;
    __asm { vucomiss xmm7, dword ptr [rbx+200h] }
    if ( !v30 )
      goto LABEL_36;
    __asm { vucomiss xmm7, dword ptr [rbx+204h] }
    if ( !v30 )
    {
LABEL_36:
      AxisTranspose((const tmat33_t<vec3_t> *)&_RBX->m_transform, &out);
      AxisTransformVec3(&out, inOutAngularVelWs, &vec);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+1FCh]; max
        vmovss  xmm0, dword ptr [rbp+57h+vec]; val
        vxorps  xmm1, xmm2, xmm8; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+200h]; max
        vmovss  dword ptr [rbp+57h+vec], xmm0
        vmovss  xmm0, dword ptr [rbp+57h+vec+4]; val
        vxorps  xmm1, xmm2, xmm8; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+204h]; max
        vmovss  dword ptr [rbp+57h+vec+4], xmm0
        vmovss  xmm0, dword ptr [rbp+57h+vec+8]; val
        vxorps  xmm1, xmm2, xmm8; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rbp+57h+vec+8], xmm0 }
      AxisTransformVec3((const tmat33_t<vec3_t> *)&_RBX->m_transform, &vec, inOutAngularVelWs);
    }
    __asm
    {
      vmovaps xmm7, [rsp+100h+var_50]
      vmovaps xmm8, [rsp+100h+var_60]
    }
  }
}

/*
==============
BgVehiclePhysics::CollisionImpulseCallback
==============
*/
void BgVehiclePhysics::CollisionImpulseCallback(BgVehiclePhysics *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  const Physics_SimpleCollisionCallback_Data *v3; 
  char v17; 
  char v18; 
  int m_entityNumber; 
  Physics_WorldId m_worldId; 
  unsigned int v26; 
  unsigned int v27; 
  void (__fastcall *UpdateCollider)(BgVehiclePhysics *, unsigned int, const vec3_t *); 
  unsigned int BodyId; 
  __int64 v30; 
  Physics_SimpleCollisionCallback_Data data; 

  v3 = cbData;
  _RBX = this;
  if ( this->m_callbackScript )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx]
      vmovups xmm1, xmmword ptr [rdx+20h]
      vmovss  xmm2, dword ptr [rcx+1A8h]
      vmovss  xmm3, dword ptr [rcx+1ACh]
      vmovups ymmword ptr [rsp+88h+data.worldId], ymm0
      vmovss  xmm0, dword ptr [rcx+1A4h]
      vmovups xmmword ptr [rsp+88h+data.normal], xmm1
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vmovaps [rsp+88h+var_28], xmm6
      vsqrtss xmm6, xmm2, xmm2
    }
    *(double *)&_XMM0 = BgVehiclePhysics::GetGlobalTopSpeed(this);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+1F4h]
      vcomiss xmm1, cs:__real@3a83126f
    }
    if ( !(v17 | v18) )
      __asm { vminss  xmm0, xmm1, xmm0 }
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vmaxss  xmm0, xmm0, xmm2
      vdivss  xmm0, xmm6, xmm0; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    m_entityNumber = _RBX->m_entityNumber;
    m_worldId = _RBX->m_worldId;
    __asm
    {
      vmovss  [rsp+88h+data.impulse], xmm0
      vmovaps xmm6, [rsp+88h+var_28]
    }
    if ( data.bodyIds[1] == PhysicsVehicle_GetBodyId(m_worldId, m_entityNumber) )
    {
      v26 = data.bodyIds[0];
      data.bodyIds[0] = data.bodyIds[1];
      v27 = data.surfaceFlagData[0];
      data.bodyIds[1] = v26;
      data.surfaceFlagData[0] = data.surfaceFlagData[1];
      data.surfaceFlagData[1] = v27;
    }
    PhysicsVehicle_CollisionCallbackNotifyScript(_RBX->m_entityNumber, &data, _RBX->m_collisionZone);
  }
  UpdateCollider = _RBX->UpdateCollider;
  BodyId = PhysicsVehicle_GetBodyId(_RBX->m_worldId, _RBX->m_entityNumber);
  v30 = v3->bodyIds[0];
  if ( (_DWORD)v30 == BodyId )
    v30 = v3->bodyIds[1];
  UpdateCollider(_RBX, v30, &v3->position);
  _RBX->m_timeSinceLastCollision = 0.0;
}

/*
==============
BgVehiclePhysics::ComputePointLocalSpace
==============
*/
void BgVehiclePhysics::ComputePointLocalSpace(BgVehiclePhysics *this, const vec3_t *pointWs, vec3_t *outPointLs)
{
  MatrixTransposeTransformVector43(pointWs, &this->m_transform, outPointLs);
}

/*
==============
BgVehiclePhysics::ComputePointWorldSpace
==============
*/
void BgVehiclePhysics::ComputePointWorldSpace(BgVehiclePhysics *this, const vec3_t *pointLs, vec3_t *outPointWs)
{
  MatrixTransformVector43(pointLs, &this->m_transform, outPointWs);
}

/*
==============
BgVehiclePhysics::ComputeVelocityLocalSpace
==============
*/
void BgVehiclePhysics::ComputeVelocityLocalSpace(BgVehiclePhysics *this, const vec3_t *velWs, vec3_t *outVelLs)
{
  tmat33_t<vec3_t> out; 

  AxisTranspose((const tmat33_t<vec3_t> *)&this->m_transform, &out);
  AxisTransformVec3(&out, velWs, outVelLs);
}

/*
==============
BgVehiclePhysics::ComputeVelocityWorldSpace
==============
*/
void BgVehiclePhysics::ComputeVelocityWorldSpace(BgVehiclePhysics *this, const vec3_t *velLs, vec3_t *outVelWs)
{
  AxisTransformVec3((const tmat33_t<vec3_t> *)&this->m_transform, velLs, outVelWs);
}

/*
==============
BgVehiclePhysicsComponent::ComputerOwnerAngles
==============
*/
void BgVehiclePhysicsComponent::ComputerOwnerAngles(BgVehiclePhysicsComponent *this, vec3_t *outAngles)
{
  BgVehiclePhysics *Owner; 

  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  AxisToAngles((const tmat33_t<vec3_t> *)&Owner->m_transform, outAngles);
}

/*
==============
BgVehiclePhysics::CreatePhysics
==============
*/
char BgVehiclePhysics::CreatePhysics(BgVehiclePhysics *this, const VehiclePhysicsDef *vehPhysicsDef)
{
  unsigned int v7; 
  unsigned int v8; 
  char v9; 
  int v10; 
  Physics_WorldId m_worldId; 
  unsigned int BodyId; 
  bool IsPhysicsBodyIdValid; 
  bool v15; 
  bool v16; 
  bool v19; 
  unsigned int v28; 
  unsigned int v30; 
  char v34; 
  bool IsPredictiveWorld; 
  void (__fastcall *v36)(Physics_SimpleCollisionCallback_Data *); 
  BGVehicles *m_vehicleSystem; 
  __int64 m_entityNumber; 
  const char *v40; 
  const char *v41; 
  const char **v42; 
  float outMass; 

  _RBX = vehPhysicsDef;
  _RSI = this;
  if ( this->m_vehicleType < VEH_TREADED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 125, ASSERT_TYPE_ASSERT, "( BGVehicles::PhysicsIsTypeSupported( m_vehicleType ) )", "BgVehiclePhysics::CreatePhysics(). Only for physics enabled vehicles. Consider update BGVehicles::PhysicsIsTypeSupported().") )
    __debugbreak();
  if ( _RSI->m_physicsInitialized )
    return 1;
  v7 = PhysicsVehicle_CreateRigidBody(_RSI->m_worldId, _RSI->m_entityNumber, &outMass);
  v8 = v7;
  if ( v7 == 0xFFFFFF || !Physics_IsRigidBodyValid(_RSI->m_worldId, v7) )
  {
    v9 = 0;
LABEL_34:
    m_vehicleSystem = _RSI->m_vehicleSystem;
    m_entityNumber = (unsigned int)_RSI->m_entityNumber;
    v40 = "<unknown>";
    v42 = NULL;
    if ( m_vehicleSystem->PhysicsGetAsset(m_vehicleSystem, m_entityNumber, (const PhysicsAsset **)&v42) && v42 && *v42 )
      v40 = *v42;
    v41 = "[Vehicle] BgVehiclePhysics::CreatePhysics() can't create rigid body for vehicle physics asset '%s'\n";
    if ( v9 )
      v41 = "[Vehicle] BgVehiclePhysics::CreatePhysics() Physics Asset ('%s') is a non-dynamic rigid body. Make sure UseCategory=Vehicle, SimulationCategory=Vehicle Chassis and materialId=PM_PhysicsVehicle.\n";
    Com_Printf(20, v41, v40);
    return 0;
  }
  v9 = 1;
  if ( !Physics_IsRigidBodyDynamic(_RSI->m_worldId, v8) )
    goto LABEL_34;
  _RSI->m_centerOfMassOffsetOriginalLs.v[0] = _RBX->physics_comOffset.v[0];
  _RSI->m_centerOfMassOffsetOriginalLs.v[1] = _RBX->physics_comOffset.v[1];
  _RSI->m_centerOfMassOffsetOriginalLs.v[2] = _RBX->physics_comOffset.v[2];
  v10 = _RSI->m_entityNumber;
  m_worldId = _RSI->m_worldId;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  BodyId = PhysicsVehicle_GetBodyId(m_worldId, v10);
  IsPhysicsBodyIdValid = PhysicsVehicle_IsPhysicsBodyIdValid(_RSI->m_worldId, BodyId);
  v15 = !IsPhysicsBodyIdValid;
  if ( !IsPhysicsBodyIdValid )
  {
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 590, ASSERT_TYPE_ASSERT, "(IsPhysicsBodyIdValid())", (const char *)&queryFormat, "IsPhysicsBodyIdValid()");
    v15 = !v16;
    if ( v16 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rbx+90h]
  }
  if ( !v15 )
    goto LABEL_44;
  __asm { vcomiss xmm6, dword ptr [rbx+94h] }
  if ( !v15 )
    goto LABEL_44;
  __asm { vcomiss xmm6, dword ptr [rbx+98h] }
  if ( !v15 )
    goto LABEL_44;
  __asm { vcomiss xmm7, dword ptr [rbx+9Ch] }
  if ( !v15 )
  {
LABEL_44:
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 592, ASSERT_TYPE_ASSERT, "(inertiaDiagonal[0] >= 0.0f && inertiaDiagonal[1] >= 0.0f && inertiaDiagonal[2] >= 0.0f && inertiaDiagonal[3] >= 1.0f)", (const char *)&queryFormat, "inertiaDiagonal[0] >= 0.0f && inertiaDiagonal[1] >= 0.0f && inertiaDiagonal[2] >= 0.0f && inertiaDiagonal[3] >= 1.0f");
    v15 = !v19;
    if ( v19 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+9Ch]
    vmaxss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rsi+260h], xmm1
    vmulss  xmm2, xmm1, dword ptr [rbx+90h]
    vcomiss xmm2, xmm6
    vmulss  xmm0, xmm1, dword ptr [rbx+94h]
    vmulss  xmm3, xmm1, dword ptr [rbx+98h]
  }
  if ( v15 )
    __asm { vxorps  xmm4, xmm4, xmm4 }
  else
    __asm { vdivss  xmm4, xmm7, xmm2 }
  __asm { vcomiss xmm0, xmm6 }
  if ( v15 )
    __asm { vxorps  xmm2, xmm2, xmm2 }
  else
    __asm { vdivss  xmm2, xmm7, xmm0 }
  __asm { vcomiss xmm3, xmm6 }
  if ( !v15 )
    __asm { vdivss  xmm6, xmm7, xmm3 }
  __asm
  {
    vmovss  dword ptr [rsi+250h], xmm4
    vmovss  dword ptr [rsi+254h], xmm2
    vmovss  dword ptr [rsi+258h], xmm6
    vdivss  xmm0, xmm7, xmm1
    vmovss  dword ptr [rsi+25Ch], xmm0
  }
  v28 = PhysicsVehicle_GetBodyId(_RSI->m_worldId, _RSI->m_entityNumber);
  __asm { vmovss  xmm2, dword ptr [rsi+260h]; mass }
  v30 = v28;
  Physics_SetRigidBodyMass(_RSI->m_worldId, v28, *(float *)&_XMM2);
  Physics_SetRigidBodyInverseInertiaLocal(_RSI->m_worldId, v30, &_RSI->m_invInertiaLs);
  BgVehiclePhysics::OffsetCenterOfMass(_RSI, &_RSI->m_centerOfMassOffsetOriginalLs, 1);
  __asm
  {
    vmovss  xmm0, cs:__real@3a83126f
    vcomiss xmm0, dword ptr [rsi+260h]
    vmovaps xmm7, [rsp+78h+var_38]
    vmovaps xmm6, [rsp+78h+var_28]
  }
  if ( !v34 )
  {
    Com_Printf(20, "[Vehicle] BgVehiclePhysics::CreatePhysics() Dynamic rigid body with an invalid mass\n");
    return 0;
  }
  IsPredictiveWorld = Physics_IsPredictiveWorld(_RSI->m_worldId);
  v36 = G_Vehicle_PhysicsImpulseCallback;
  if ( IsPredictiveWorld )
    v36 = CgVehicleSystem::PhysicsImpulseCallback;
  Physics_SimpleCollisionCallback_RegisterBody(_RSI->m_worldId, v8, v36);
  PhysicsVehicle_SetSoftContacts(_RSI->m_worldId, v8, 0);
  if ( !Physics_IsPredictiveWorld(_RSI->m_worldId) )
  {
    __asm { vmovss  xmm1, cs:__real@41200000; minTimeDynamic }
    BgVehiclePhysics::SetDynamic(_RSI, *(float *)&_XMM1);
    Physics_ActivateBody(_RSI->m_worldId, v8);
  }
  _RSI->m_physicsInitialized = 1;
  return 1;
}

/*
==============
BgVehiclePhysics::DeactivationLogic
==============
*/

void __fastcall BgVehiclePhysics::DeactivationLogic(BgVehiclePhysics *this, double deltaTime)
{
  unsigned int frameCadence; 
  int v8; 
  int v9; 
  unsigned int BodyId; 
  unsigned int v11; 
  unsigned int v12; 
  BOOL v14; 
  bool v15; 
  int v20; 
  bool v21; 
  unsigned int v22; 
  unsigned int v23; 
  int v24; 
  int v25; 
  int v26; 
  unsigned int v27; 
  BOOL v43; 
  bool v44; 
  int v47; 
  bool v48; 
  unsigned int v49; 
  unsigned int v50; 
  int v51; 
  int v52; 
  int v53; 
  unsigned int v54; 
  BOOL v70; 
  bool v71; 
  int v76; 
  bool v77; 
  bool v78; 
  unsigned int v79; 
  unsigned int v80; 
  int v81; 
  int v82; 
  int v83; 
  unsigned int v84; 

  _RDI = this;
  __asm
  {
    vmovaps [rsp+78h+var_38], xmm10
    vmovaps xmm10, xmm1
  }
  if ( this->m_pmoveObject || !this->m_linkedPlayers.enabled )
  {
    this->m_linkedPlayers.playerCount = 0;
  }
  else
  {
    frameCadence = this->m_linkedPlayers.frameCadence;
    if ( !frameCadence || !(_RDI->m_simulationFrame % frameCadence) )
    {
      v8 = _RDI->m_vehicleSystem->PhysicsGetPlayerPositionsOnTheVehicle(_RDI->m_vehicleSystem, _RDI->m_entityNumber, _RDI->m_linkedPlayers.playerNums, _RDI->m_linkedPlayers.playerPositionsWs, _RDI->m_linkedPlayers.massFactors, _RDI->m_linkedPlayers.playerSeats, 2u);
      v9 = 2;
      if ( v8 < 2 )
        v9 = v8;
      _RDI->m_linkedPlayers.playerCount = v9;
    }
  }
  BodyId = PhysicsVehicle_GetBodyId(_RDI->m_worldId, _RDI->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(_RDI->m_worldId, BodyId) )
  {
    v11 = PhysicsVehicle_GetBodyId(_RDI->m_worldId, _RDI->m_entityNumber);
    if ( PhysicsVehicle_IsPhysicsBodyIdValid(_RDI->m_worldId, v11) )
    {
      v12 = PhysicsVehicle_GetBodyId(_RDI->m_worldId, _RDI->m_entityNumber);
      if ( Physics_IsRigidBodyKeyframed(_RDI->m_worldId, v12) )
      {
        __asm
        {
          vmovaps [rsp+78h+var_18], xmm6
          vmovaps xmm2, xmm10; deltaTime
          vmovaps [rsp+78h+var_28], xmm7
        }
        BgVehiclePhysics::ProcessComponents(_RDI,  BgVehiclePhysicsComponent::`vcall'{40,{flat}}, *(float *)&_XMM2);
        v14 = Com_BitCheckAssert(_RDI->m_controls.playerEnabledBits, 0, 4);
        v15 = Com_BitCheckAssert(_RDI->m_controls.externalEnabledBits, 0, 4);
        __asm
        {
          vmovss  xmm4, dword ptr [rdi+0C8h]
          vmovss  xmm3, dword ptr [rdi+0E8h]
          vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm7, cs:__real@3f800000
        }
        v20 = v14 + 3 * v15;
        v77 = v20 == 0;
        v22 = v20 - 1;
        v21 = v77 || v22 == 0;
        if ( v22 )
        {
          v77 = v22 < 2;
          v23 = v22 - 2;
          v21 = v77 || v23 == 0;
          if ( v23 )
          {
            if ( v23 != 1 )
              goto LABEL_27;
            v24 = (unsigned __int8)_RDI->m_controls.valuePolicy[0];
            v21 = v24 == 0;
            if ( _RDI->m_controls.valuePolicy[0] )
            {
              v77 = v24 == 0;
              v25 = v24 - 1;
              v21 = v77 || v25 == 0;
              if ( v25 )
              {
                v77 = v25 == 0;
                v26 = v25 - 1;
                v21 = v77 || v26 == 0;
                if ( v26 )
                {
                  v77 = v26 == 0;
                  v27 = v26 - 1;
                  v21 = v77 || v27 == 0;
                  if ( v27 )
                  {
                    v21 = v27 <= 1;
                    if ( v27 != 1 )
                      goto LABEL_27;
                    __asm
                    {
                      vmovss  xmm1, dword ptr [rdi+118h]
                      vsubss  xmm0, xmm7, xmm1
                      vmulss  xmm2, xmm0, xmm4
                      vmulss  xmm1, xmm1, xmm3
                      vaddss  xmm3, xmm2, xmm1
                    }
                  }
                  else
                  {
                    __asm
                    {
                      vmovss  xmm1, dword ptr [rdi+118h]
                      vsubss  xmm0, xmm7, xmm1
                      vmulss  xmm2, xmm0, xmm3
                      vmulss  xmm1, xmm1, xmm4
                      vaddss  xmm3, xmm2, xmm1
                    }
                  }
                }
                else
                {
                  __asm
                  {
                    vaddss  xmm0, xmm3, xmm4
                    vmulss  xmm3, xmm0, cs:__real@3f000000
                  }
                }
              }
              else
              {
                __asm
                {
                  vandps  xmm0, xmm3, xmm6
                  vandps  xmm1, xmm4, xmm6
                  vcmpltss xmm1, xmm1, xmm0
                  vblendvps xmm3, xmm3, xmm4, xmm1
                  vmovss  [rsp+78h+arg_8], xmm3
                }
              }
            }
            else
            {
              __asm
              {
                vandps  xmm0, xmm3, xmm6
                vandps  xmm1, xmm4, xmm6
                vcmpltss xmm1, xmm0, xmm1
                vblendvps xmm3, xmm3, xmm4, xmm1
                vmovss  [rsp+78h+arg_8], xmm3
              }
            }
          }
        }
        else
        {
          __asm { vmovaps xmm3, xmm4 }
        }
        __asm { vcomiss xmm3, cs:__real@3a83126f }
        if ( !v21 )
          goto LABEL_61;
LABEL_27:
        v43 = Com_BitCheckAssert(_RDI->m_controls.playerEnabledBits, 1, 4);
        v44 = Com_BitCheckAssert(_RDI->m_controls.externalEnabledBits, 1, 4);
        __asm
        {
          vmovss  xmm4, dword ptr [rdi+0CCh]
          vmovss  xmm3, dword ptr [rdi+0ECh]
        }
        v47 = v43 + 3 * v44;
        v77 = v47 == 0;
        v49 = v47 - 1;
        v48 = v77 || v49 == 0;
        if ( v49 )
        {
          v77 = v49 < 2;
          v50 = v49 - 2;
          v48 = v77 || v50 == 0;
          if ( v50 )
          {
            if ( v50 != 1 )
              goto LABEL_42;
            v51 = (unsigned __int8)_RDI->m_controls.valuePolicy[1];
            v48 = v51 == 0;
            if ( _RDI->m_controls.valuePolicy[1] )
            {
              v77 = v51 == 0;
              v52 = v51 - 1;
              v48 = v77 || v52 == 0;
              if ( v52 )
              {
                v77 = v52 == 0;
                v53 = v52 - 1;
                v48 = v77 || v53 == 0;
                if ( v53 )
                {
                  v77 = v53 == 0;
                  v54 = v53 - 1;
                  v48 = v77 || v54 == 0;
                  if ( v54 )
                  {
                    v48 = v54 <= 1;
                    if ( v54 != 1 )
                      goto LABEL_42;
                    __asm
                    {
                      vmovss  xmm1, dword ptr [rdi+118h]
                      vsubss  xmm0, xmm7, xmm1
                      vmulss  xmm2, xmm0, xmm4
                      vmulss  xmm1, xmm1, xmm3
                      vaddss  xmm3, xmm2, xmm1
                    }
                  }
                  else
                  {
                    __asm
                    {
                      vmovss  xmm1, dword ptr [rdi+118h]
                      vsubss  xmm0, xmm7, xmm1
                      vmulss  xmm2, xmm0, xmm3
                      vmulss  xmm1, xmm1, xmm4
                      vaddss  xmm3, xmm2, xmm1
                    }
                  }
                }
                else
                {
                  __asm
                  {
                    vaddss  xmm0, xmm3, xmm4
                    vmulss  xmm3, xmm0, cs:__real@3f000000
                  }
                }
              }
              else
              {
                __asm
                {
                  vandps  xmm0, xmm3, xmm6
                  vandps  xmm1, xmm4, xmm6
                  vcmpltss xmm1, xmm1, xmm0
                  vblendvps xmm3, xmm3, xmm4, xmm1
                  vmovss  [rsp+78h+arg_8], xmm3
                }
              }
            }
            else
            {
              __asm
              {
                vandps  xmm0, xmm3, xmm6
                vandps  xmm1, xmm4, xmm6
                vcmpltss xmm1, xmm0, xmm1
                vblendvps xmm3, xmm3, xmm4, xmm1
                vmovss  [rsp+78h+arg_8], xmm3
              }
            }
          }
        }
        else
        {
          __asm { vmovaps xmm3, xmm4 }
        }
        __asm { vcomiss xmm3, cs:__real@3a83126f }
        if ( !v48 )
          goto LABEL_61;
LABEL_42:
        v70 = Com_BitCheckAssert(_RDI->m_controls.playerEnabledBits, 2, 4);
        v71 = Com_BitCheckAssert(_RDI->m_controls.externalEnabledBits, 2, 4);
        __asm
        {
          vmovss  xmm4, dword ptr [rdi+0D0h]
          vmovss  xmm3, dword ptr [rdi+0F0h]
          vxorps  xmm5, xmm5, xmm5
        }
        v76 = v70 + 3 * v71;
        v77 = v76 == 0;
        v79 = v76 - 1;
        v78 = v77 || v79 == 0;
        if ( !v79 )
        {
          __asm { vmovaps xmm3, xmm4 }
          goto LABEL_57;
        }
        v77 = v79 < 2;
        v80 = v79 - 2;
        v78 = v77 || v80 == 0;
        if ( v80 )
        {
          v77 = v80 == 0;
          v78 = v80 <= 1;
          if ( v80 != 1 )
            goto LABEL_55;
          v81 = (unsigned __int8)_RDI->m_controls.valuePolicy[2];
          v77 = 0;
          v78 = v81 == 0;
          if ( _RDI->m_controls.valuePolicy[2] == VP_MAXABS )
          {
            __asm
            {
              vandps  xmm0, xmm3, xmm6
              vandps  xmm1, xmm4, xmm6
              vcmpltss xmm1, xmm0, xmm1
              vblendvps xmm3, xmm3, xmm4, xmm1
            }
            goto LABEL_57;
          }
          v77 = v81 == 0;
          v82 = v81 - 1;
          v78 = v77 || v82 == 0;
          if ( !v82 )
          {
            __asm
            {
              vandps  xmm0, xmm3, xmm6
              vandps  xmm1, xmm4, xmm6
              vcmpltss xmm1, xmm1, xmm0
              vblendvps xmm3, xmm3, xmm4, xmm1
            }
            goto LABEL_57;
          }
          v77 = v82 == 0;
          v83 = v82 - 1;
          v78 = v77 || v83 == 0;
          if ( !v83 )
          {
            __asm
            {
              vaddss  xmm0, xmm3, xmm4
              vmulss  xmm3, xmm0, cs:__real@3f000000
            }
            goto LABEL_57;
          }
          v77 = v83 == 0;
          v84 = v83 - 1;
          v78 = v77 || v84 == 0;
          if ( !v84 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rdi+118h]
              vsubss  xmm0, xmm7, xmm1
              vmulss  xmm2, xmm0, xmm3
              vmulss  xmm1, xmm1, xmm4
              vaddss  xmm3, xmm2, xmm1
            }
            goto LABEL_57;
          }
          v77 = v84 == 0;
          v78 = v84 <= 1;
          if ( v84 != 1 )
          {
LABEL_55:
            __asm { vxorps  xmm3, xmm3, xmm3 }
            goto LABEL_57;
          }
          __asm
          {
            vmovss  xmm1, dword ptr [rdi+118h]
            vsubss  xmm0, xmm7, xmm1
            vmulss  xmm2, xmm0, xmm4
            vmulss  xmm1, xmm1, xmm3
            vaddss  xmm3, xmm2, xmm1
          }
        }
LABEL_57:
        __asm
        {
          vandps  xmm3, xmm3, xmm6
          vcomiss xmm3, cs:__real@3a83126f
        }
        if ( v78 )
        {
          __asm { vcomiss xmm5, dword ptr [rdi+38h] }
          if ( !v77 && !_RDI->m_linkedPlayers.playerCount )
          {
            __asm { vmovaps xmm2, xmm10; deltaTime }
            BgVehiclePhysics::ProcessComponents(_RDI,  BgVehiclePhysicsComponent::`vcall'{48,{flat}}, *(float *)&_XMM2);
LABEL_62:
            __asm
            {
              vmovaps xmm6, [rsp+78h+var_18]
              vmovaps xmm7, [rsp+78h+var_28]
            }
            goto LABEL_63;
          }
        }
LABEL_61:
        __asm { vmovss  xmm1, cs:__real@41200000; minTimeDynamic }
        BgVehiclePhysics::SetDynamic(_RDI, *(float *)&_XMM1);
        goto LABEL_62;
      }
    }
  }
LABEL_63:
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+38h]
    vsubss  xmm1, xmm0, xmm10
    vmovaps xmm10, [rsp+78h+var_38]
    vmovss  dword ptr [rdi+38h], xmm1
  }
}

/*
==============
BgVehiclePhysics::DebugDraw
==============
*/
void BgVehiclePhysics::DebugDraw(BgVehiclePhysics *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  unsigned int v17; 
  unsigned int id; 
  unsigned int v20; 
  __int64 v21; 
  _DWORD *v22; 
  unsigned int BodyId; 
  unsigned int v24; 
  unsigned int v25; 
  int m_entityNumber; 
  Physics_WorldId m_worldId; 
  unsigned int v28; 
  Physics_WorldId v34; 
  bool IsPredictiveWorld; 
  const vec4_t *v50; 
  const char *v63; 
  int fmt; 
  __int64 duration; 
  int durationa; 
  __int64 shadow; 
  float v73; 
  BgVehiclePhysicsManager *v75; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 
  Bounds bounds; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm6
    vmovaps xmmword ptr [r11-98h], xmm11
  }
  _RDI = this;
  _RBX = x;
  _R13 = y;
  __asm { vmovss  xmm11, [rsp+138h+charHeight] }
  v75 = this->m_vehicleSystem->PhysicsGetVehiclePhysicsManager(this->m_vehicleSystem);
  v17 = 0;
  if ( scrPlace )
  {
    __asm { vmovss  xmm6, [rsp+138h+tabWidth] }
    while ( v17 < 2 )
    {
      id = _RDI->m_components[v17].id;
      if ( id && BYTE2(id) < 2u )
      {
        if ( BYTE2(id) >= 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 188, ASSERT_TYPE_ASSERT, "(compId.IsValid())", (const char *)&queryFormat, "compId.IsValid()") )
          __debugbreak();
        v20 = (unsigned __int16)id - 1;
        if ( v20 >= 0x80 )
        {
          LODWORD(shadow) = 128;
          LODWORD(duration) = (unsigned __int16)id - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", duration, shadow) )
            __debugbreak();
        }
        v21 = 429320i64;
        if ( v75->m_vehiclePhysicsObjects[v20].buffer[612] )
          v21 = 957704i64;
        v22 = (_DWORD *)((char *)&v75->m_lagTime + 768 * (unsigned __int16)id + 384 * BYTE2(id) + v21);
        if ( v22[2] != id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 195, ASSERT_TYPE_ASSERT, "(baseComp->GetId().IsEqual( compId ))", (const char *)&queryFormat, "baseComp->GetId().IsEqual( compId )") )
          __debugbreak();
        _RBX = x;
        __asm
        {
          vmovss  [rsp+138h+duration], xmm11
          vmovss  dword ptr [rsp+138h+fmt], xmm6
        }
        (*(void (__fastcall **)(_DWORD *, const ScreenPlacement *, float *, float *, int, int))(*(_QWORD *)v22 + 56i64))(v22, scrPlace, x, _R13, fmt, durationa);
        ++v17;
      }
      else
      {
        _RBX = x;
        ++v17;
      }
    }
  }
  BodyId = PhysicsVehicle_GetBodyId(_RDI->m_worldId, _RDI->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(_RDI->m_worldId, BodyId) )
  {
    v24 = PhysicsVehicle_GetBodyId(_RDI->m_worldId, _RDI->m_entityNumber);
    if ( PhysicsVehicle_IsPhysicsBodyIdValid(_RDI->m_worldId, v24) )
    {
      v25 = PhysicsVehicle_GetBodyId(_RDI->m_worldId, _RDI->m_entityNumber);
      if ( Physics_IsRigidBodyKeyframed(_RDI->m_worldId, v25) )
      {
        m_entityNumber = _RDI->m_entityNumber;
        m_worldId = _RDI->m_worldId;
        __asm
        {
          vmovaps [rsp+138h+var_68], xmm7
          vmovaps [rsp+138h+var_78], xmm9
          vmovaps [rsp+138h+var_88], xmm10
        }
        v28 = PhysicsVehicle_GetBodyId(m_worldId, m_entityNumber);
        Physics_GetRigidBodyAABB(_RDI->m_worldId, v28, &aabbMin, &aabbMax);
        __asm
        {
          vmovss  xmm1, cs:__real@3f000000
          vmovss  xmm10, dword ptr [rsp+138h+aabbMax]
          vaddss  xmm0, xmm10, dword ptr [rsp+138h+aabbMin]
          vmovss  xmm9, dword ptr [rsp+138h+aabbMax+4]
          vmovss  xmm7, dword ptr [rsp+138h+aabbMax+8]
        }
        v34 = _RDI->m_worldId;
        __asm
        {
          vmulss  xmm2, xmm0, xmm1
          vaddss  xmm0, xmm9, dword ptr [rsp+138h+aabbMin+4]
          vmulss  xmm3, xmm0, xmm1
          vaddss  xmm0, xmm7, dword ptr [rsp+138h+aabbMin+8]
          vmulss  xmm4, xmm0, xmm1
          vsubss  xmm1, xmm2, dword ptr [rsp+138h+aabbMin]
          vsubss  xmm0, xmm10, xmm2
          vmaxss  xmm1, xmm1, xmm0
          vsubss  xmm0, xmm9, xmm3
          vmovss  dword ptr [rsp+138h+bounds.halfSize], xmm1
          vmovss  dword ptr [rsp+138h+bounds.midPoint], xmm2
          vsubss  xmm2, xmm3, dword ptr [rsp+138h+aabbMin+4]
          vmaxss  xmm1, xmm2, xmm0
          vmovss  dword ptr [rsp+138h+bounds.midPoint+4], xmm3
          vsubss  xmm3, xmm4, dword ptr [rsp+138h+aabbMin+8]
          vsubss  xmm0, xmm7, xmm4
          vmovss  dword ptr [rsp+138h+bounds.halfSize+4], xmm1
          vmaxss  xmm1, xmm3, xmm0
          vmovss  dword ptr [rsp+138h+bounds.halfSize+8], xmm1
          vmovss  dword ptr [rsp+138h+bounds.midPoint+8], xmm4
        }
        IsPredictiveWorld = Physics_IsPredictiveWorld(v34);
        v50 = &colorMagenta;
        if ( IsPredictiveWorld )
          v50 = &colorYellow;
        __asm { vxorps  xmm2, xmm2, xmm2; yaw }
        CG_DebugBox(&vec3_origin, &bounds, *(float *)&_XMM2, v50, 0, 0);
        __asm
        {
          vmovaps xmm10, [rsp+138h+var_88]
          vmovaps xmm9, [rsp+138h+var_78]
          vmovaps xmm7, [rsp+138h+var_68]
        }
      }
    }
    if ( scrPlace && Physics_IsPredictiveWorld(_RDI->m_worldId) && _RDI->m_netcodeType == VEH_NETCODE_CLIENT_PRED_SB && _RDI->m_playerControlled )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+2A0h]
        vmovss  xmm3, dword ptr [rdi+29Ch]
        vsqrtss xmm0, xmm0, xmm0
        vsqrtss xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm0, xmm0
        vcvtss2sd xmm1, xmm3, xmm3
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v63 = j_va("Dist Avg: XY %.0f Z %.0f", _RDX, _R8);
      __asm
      {
        vmovss  xmm2, dword ptr [r13+0]; y
        vmovss  xmm1, dword ptr [rbx]; x
        vmovss  [rsp+138h+var_100], xmm11
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v63, &colorYellow, 0, 1, v73, 0);
      __asm
      {
        vaddss  xmm0, xmm11, dword ptr [r13+0]
        vmovss  dword ptr [r13+0], xmm0
      }
    }
  }
  _RDI->m_vehicleSystem->PhysicsDrawDebugVehicle(_RDI->m_vehicleSystem, _RDI);
  __asm
  {
    vmovaps xmm6, [rsp+138h+var_58]
    vmovaps xmm11, [rsp+138h+var_98]
  }
}

/*
==============
BgVehiclePhysicsComponent::DebugDraw
==============
*/
void BgVehiclePhysicsComponent::DebugDraw(BgVehiclePhysicsComponent *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  float v18; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovss  xmm6, [rsp+78h+charHeight]
  }
  _RBX = y;
  __asm { vmovss  [rsp+78h+var_40], xmm6 }
  _RDI = x;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovss  xmm7, dword ptr [r8]
    vaddss  xmm0, xmm7, [rsp+78h+tabWidth]
    vmovss  dword ptr [r8], xmm0
    vaddss  xmm2, xmm6, dword ptr [r9]; y
    vmovss  dword ptr [r9], xmm2
    vmovss  xmm1, dword ptr [r8]; x
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, componentNames[HIBYTE(this->m_id.id)], &colorWhiteFaded, 0, 1, v18, 0);
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [rbx]
    vmovaps xmm6, [rsp+78h+var_18]
    vmovss  dword ptr [rbx], xmm0
    vmovss  dword ptr [rdi], xmm7
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
BgVehiclePhysics::DeferAngularImpulse
==============
*/
void BgVehiclePhysics::DeferAngularImpulse(BgVehiclePhysics *this, const vec3_t *impulseWs, const vec3_t *atPointWs)
{
  _RBX = impulseWs;
  _RDI = this;
  _RSI = atPointWs;
  BgVehiclePhysicsDeferredActionManager::DeferAction(&this->m_deferActionMgr, DA_PRE_ANGULAR_IMPULSE);
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx]
    vmovsd  qword ptr [rdi+9Ch], xmm0
  }
  _RDI->m_deferActionMgr.m_deferredAngularImpWs.v[2] = _RBX->v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rsi]
    vmovsd  qword ptr [rdi+0A8h], xmm0
  }
  _RDI->m_deferActionMgr.m_deferredAngularPointWs.v[2] = _RSI->v[2];
}

/*
==============
BgVehiclePhysics::DestroyPhysics
==============
*/
void BgVehiclePhysics::DestroyPhysics(BgVehiclePhysics *this)
{
  unsigned int BodyId; 
  void (__fastcall *v3)(Physics_SimpleCollisionCallback_Data *); 
  unsigned int v4; 
  unsigned int v5; 
  BgVehicleEventSystem *v6; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    v3 = G_Vehicle_PhysicsImpulseCallback;
    if ( Physics_IsPredictiveWorld(this->m_worldId) )
      v3 = CgVehicleSystem::PhysicsImpulseCallback;
    v4 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    Physics_SimpleCollisionCallback_UnregisterBody(this->m_worldId, v4, v3, 1);
    v5 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    PhysicsVehicle_DestroyRigidBody(this->m_worldId, v5);
  }
  v6 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
  v6->VehicleReset(v6, this);
  this->m_physicsInitialized = 0;
}

/*
==============
BgVehiclePhysicsDeferredActionManager::ExecuteBeforeWorldStep
==============
*/
void BgVehiclePhysicsDeferredActionManager::ExecuteBeforeWorldStep(BgVehiclePhysicsDeferredActionManager *this, BgVehiclePhysics *vehObj)
{
  BgVehiclePhysicsDeferredActionManager *v3; 
  unsigned int i; 
  const vec3_t *p_m_deferredAngularPointWs; 
  const vec3_t *p_m_deferredAngularImpWs; 
  unsigned int BodyId; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  vec3_t *fmt; 

  v3 = this;
  if ( !vehObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1962, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
    __debugbreak();
  for ( i = 0; i < 5; ++i )
  {
    if ( Com_BitCheckAssert(v3->actionBits, (unsigned __int8)i, 4) )
    {
      if ( (_BYTE)i == 4 )
      {
        p_m_deferredAngularPointWs = &v3->m_deferredAngularPointWs;
        p_m_deferredAngularImpWs = &v3->m_deferredAngularImpWs;
        BodyId = PhysicsVehicle_GetBodyId(vehObj->m_worldId, vehObj->m_entityNumber);
        if ( PhysicsVehicle_IsPhysicsBodyIdValid(vehObj->m_worldId, BodyId) )
        {
          v8 = PhysicsVehicle_GetBodyId(vehObj->m_worldId, vehObj->m_entityNumber);
          if ( !PhysicsVehicle_IsPhysicsBodyIdValid(vehObj->m_worldId, v8) || (v9 = PhysicsVehicle_GetBodyId(vehObj->m_worldId, vehObj->m_entityNumber), !Physics_IsRigidBodyKeyframed(vehObj->m_worldId, v9)) )
          {
            v10 = PhysicsVehicle_GetBodyId(vehObj->m_worldId, vehObj->m_entityNumber);
            Physics_GetRigidBodyLinAngVel((const Physics_WorldId)vehObj->m_worldId, v10, &vehObj->m_linearVelocityWs, &vehObj->m_angularVelocityWs);
            fmt = &vehObj->m_angularVelocityWs;
            if ( vehObj->m_pmoveObject )
              Physics_AccumulateAngularImpulse(p_m_deferredAngularImpWs, p_m_deferredAngularPointWs, &vehObj->m_centerOfMassWs, &vehObj->m_invInertiaWs, fmt);
            else
              Physics_AccumulateRigidBodyAngularImpulse(vehObj->m_worldId, v10, p_m_deferredAngularImpWs, p_m_deferredAngularPointWs, fmt);
            Physics_SetRigidBodyLinAngVel((const Physics_WorldId)vehObj->m_worldId, v10, &vehObj->m_linearVelocityWs, &vehObj->m_angularVelocityWs);
            v3 = this;
          }
        }
      }
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v3->actionBits[(unsigned __int64)(unsigned __int8)i >> 5] &= ~(1 << (i & 0x1F));
    }
  }
}

/*
==============
BgVehiclePhysicsDeferredActionManager::ExecutePostWorldStep
==============
*/
void BgVehiclePhysicsDeferredActionManager::ExecutePostWorldStep(BgVehiclePhysicsDeferredActionManager *this, BgVehiclePhysics *vehObj)
{
  unsigned int i; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  bool *p_active; 
  unsigned int BodyId; 
  bool active; 

  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  if ( !vehObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1935, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
    __debugbreak();
  __asm { vmovss  xmm6, cs:__real@41200000 }
  for ( i = 0; i < 5; ++i )
  {
    if ( !Com_BitCheckAssert(this->actionBits, (unsigned __int8)i, 4) )
      continue;
    if ( !(_BYTE)i )
    {
      BodyId = PhysicsVehicle_GetBodyId(vehObj->m_worldId, vehObj->m_entityNumber);
      if ( !PhysicsVehicle_IsPhysicsBodyIdValid(vehObj->m_worldId, BodyId) )
        goto LABEL_19;
      active = 1;
LABEL_17:
      v10 = PhysicsVehicle_GetBodyId(vehObj->m_worldId, vehObj->m_entityNumber);
      p_active = &active;
LABEL_18:
      PhysicsVehicle_SetActivationControl(vehObj->m_worldId, v10, p_active);
      goto LABEL_19;
    }
    if ( (unsigned __int8)i == 1 )
    {
      v9 = PhysicsVehicle_GetBodyId(vehObj->m_worldId, vehObj->m_entityNumber);
      if ( !PhysicsVehicle_IsPhysicsBodyIdValid(vehObj->m_worldId, v9) )
        goto LABEL_19;
      v10 = PhysicsVehicle_GetBodyId(vehObj->m_worldId, vehObj->m_entityNumber);
      p_active = NULL;
      goto LABEL_18;
    }
    if ( (unsigned __int8)i != 2 )
    {
      if ( (unsigned __int8)i == 3 )
      {
        __asm { vmovaps xmm1, xmm6; minTimeDynamic }
        BgVehiclePhysics::SetDynamic(vehObj, *(float *)&_XMM1);
      }
      goto LABEL_19;
    }
    v8 = PhysicsVehicle_GetBodyId(vehObj->m_worldId, vehObj->m_entityNumber);
    if ( PhysicsVehicle_IsPhysicsBodyIdValid(vehObj->m_worldId, v8) )
    {
      active = 0;
      goto LABEL_17;
    }
LABEL_19:
    if ( !this && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    this->actionBits[(unsigned __int64)(unsigned __int8)i >> 5] &= ~(1 << (i & 0x1F));
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
BgVehiclePhysics::GatherLinkedPlayers
==============
*/
void BgVehiclePhysics::GatherLinkedPlayers(BgVehiclePhysics *this)
{
  unsigned int frameCadence; 
  unsigned int v3; 
  int v4; 

  if ( this->m_pmoveObject || !this->m_linkedPlayers.enabled )
  {
    this->m_linkedPlayers.playerCount = 0;
  }
  else
  {
    frameCadence = this->m_linkedPlayers.frameCadence;
    if ( !frameCadence || !(this->m_simulationFrame % frameCadence) )
    {
      v3 = 2;
      v4 = this->m_vehicleSystem->PhysicsGetPlayerPositionsOnTheVehicle(this->m_vehicleSystem, this->m_entityNumber, this->m_linkedPlayers.playerNums, (vec3_t *)&this->m_linkedPlayers, this->m_linkedPlayers.massFactors, this->m_linkedPlayers.playerSeats, 2u);
      if ( v4 < 2 )
        v3 = v4;
      this->m_linkedPlayers.playerCount = v3;
    }
  }
}

/*
==============
BgVehiclePhysics::GetGlobalTopSpeed
==============
*/
float BgVehiclePhysics::GetGlobalTopSpeed(BgVehiclePhysics *this)
{
  if ( this->m_vehicleGameProfile == VEH_GAMEPROFILE_FIXEDWING_RCPLANE )
  {
    __asm { vmovss  xmm0, cs:__real@7f7fffff }
  }
  else
  {
    _RBX = DVARFLT_bg_vehicleTopSpeed;
    if ( !DVARFLT_bg_vehicleTopSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleTopSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm0, xmm0, cs:__real@418ccccd
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysics::GetNoClientGeoMode
==============
*/
__int64 BgVehiclePhysics::GetNoClientGeoMode(BgVehiclePhysics *this)
{
  const dvar_t *v1; 

  v1 = DVARINT_bg_vehNetNoClientGeoMode;
  if ( !DVARINT_bg_vehNetNoClientGeoMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetNoClientGeoMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.unsignedInt;
}

/*
==============
BgVehiclePhysicsComponent::GetOwner
==============
*/
BgVehiclePhysics *BgVehiclePhysicsComponent::GetOwner(BgVehiclePhysicsComponent *this)
{
  unsigned int id; 
  BgVehiclePhysicsManager *v3; 
  BgVehiclePhysics *result; 

  if ( !this->m_vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1643, ASSERT_TYPE_ASSERT, "(m_vehicleSystem)", (const char *)&queryFormat, "m_vehicleSystem") )
    __debugbreak();
  id = this->m_id.id;
  if ( (!id || BYTE2(id) >= 2u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1644, ASSERT_TYPE_ASSERT, "(m_id.IsValid())", (const char *)&queryFormat, "m_id.IsValid()") )
    __debugbreak();
  v3 = this->m_vehicleSystem->PhysicsGetVehiclePhysicsManager(this->m_vehicleSystem);
  result = BgVehiclePhysicsManager::GetObjectById(v3, LOWORD(this->m_id.id));
  if ( !result )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1649, ASSERT_TYPE_ASSERT, "(owner)", (const char *)&queryFormat, "owner") )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
BgVehiclePhysicsComponent::GetOwnerPosition
==============
*/
vec3_t *BgVehiclePhysicsComponent::GetOwnerPosition(BgVehiclePhysicsComponent *this)
{
  return &BgVehiclePhysicsComponent::GetOwner(this)->m_transform.m[3];
}

/*
==============
BgVehiclePhysics::GetPhysicsBodyId
==============
*/
unsigned int BgVehiclePhysics::GetPhysicsBodyId(BgVehiclePhysics *this)
{
  return PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
}

/*
==============
BgVehiclePhysics::GetTopSpeedForward
==============
*/
float BgVehiclePhysics::GetTopSpeedForward(BgVehiclePhysics *this)
{
  char v4; 
  char v5; 

  _RBX = this;
  *(double *)&_XMM0 = BgVehiclePhysics::GetGlobalTopSpeed(this);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+1F4h]
    vcomiss xmm1, cs:__real@3a83126f
  }
  if ( !(v4 | v5) )
    __asm { vminss  xmm0, xmm1, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysics::GetTopSpeedReverse
==============
*/
float BgVehiclePhysics::GetTopSpeedReverse(BgVehiclePhysics *this)
{
  char v4; 
  char v5; 

  _RBX = this;
  *(double *)&_XMM0 = BgVehiclePhysics::GetGlobalTopSpeed(this);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+1F8h]
    vcomiss xmm1, cs:__real@3a83126f
  }
  if ( !(v4 | v5) )
    __asm { vminss  xmm0, xmm1, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysics::IntegrateVelocities
==============
*/

void __fastcall BgVehiclePhysics::IntegrateVelocities(BgVehiclePhysics *this, double deltaTime, const vec3_t *org, const vec4_t *q, const vec3_t *linVel, const vec3_t *angVel, vec3_t *newOrigin, vec4_t *newOrient)
{
  Physics_WorldId m_worldId; 
  char v57; 
  char v58; 
  Physics_WorldId v76; 
  __int64 v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  vec4_t in2; 
  char v89; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  _RSI = newOrigin;
  _RBX = newOrient;
  m_worldId = this->m_worldId;
  __asm { vmovaps xmm9, xmm1 }
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 42, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Gravity when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)m_worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v76 = m_worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 43, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v76) )
      __debugbreak();
    LODWORD(v77) = m_worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 95, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v77) )
      __debugbreak();
  }
  __asm { vmovss  xmm1, cs:__real@42000000 }
  _RCX = HavokPhysics_GetConstWorld(m_worldId)->world;
  __asm
  {
    vmovups xmm2, xmmword ptr [rcx+0AC0h]
    vmulss  xmm8, xmm2, xmm1
    vshufps xmm0, xmm2, xmm2, 55h ; 'U'
    vmovss  [rsp+0C8h+var_88], xmm8
    vshufps xmm2, xmm2, xmm2, 0AAh ; 'ª'
    vmulss  xmm6, xmm0, xmm1
    vmulss  xmm7, xmm2, xmm1
  }
  if ( (v78 & 0x7F800000) == 2139095040 )
    goto LABEL_31;
  __asm { vmovss  [rsp+0C8h+var_88], xmm6 }
  if ( (v79 & 0x7F800000) == 2139095040 )
    goto LABEL_31;
  __asm { vmovss  [rsp+0C8h+var_88], xmm7 }
  if ( (v80 & 0x7F800000) == 2139095040 )
  {
LABEL_31:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 961, ASSERT_TYPE_SANITY, "( !IS_NAN( ( gravVec )[0] ) && !IS_NAN( ( gravVec )[1] ) && !IS_NAN( ( gravVec )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( gravVec )[0] ) && !IS_NAN( ( gravVec )[1] ) && !IS_NAN( ( gravVec )[2] )") )
      __debugbreak();
  }
  _RAX = linVel;
  __asm
  {
    vmulss  xmm0, xmm8, xmm9
    vaddss  xmm1, xmm0, dword ptr [rax]
    vmovss  xmm4, dword ptr [rax+4]
    vmovss  xmm5, dword ptr [rax+8]
    vmulss  xmm2, xmm1, xmm9
    vaddss  xmm3, xmm2, dword ptr [rbp+0]
    vmovss  dword ptr [rsi], xmm3
    vmulss  xmm0, xmm6, xmm9
    vmovss  xmm6, cs:__real@3f800000
    vaddss  xmm1, xmm0, xmm4
    vmulss  xmm4, xmm9, cs:__real@3f000000
    vmulss  xmm2, xmm1, xmm9
    vaddss  xmm3, xmm2, dword ptr [rbp+4]
    vmovss  dword ptr [rsi+4], xmm3
    vmulss  xmm0, xmm7, xmm9
    vaddss  xmm1, xmm0, xmm5
    vmulss  xmm2, xmm1, xmm9
    vaddss  xmm3, xmm2, dword ptr [rbp+8]
    vmovss  dword ptr [rsi+8], xmm3
    vmulss  xmm0, xmm4, dword ptr [rax]
    vmulss  xmm1, xmm4, dword ptr [rax+4]
    vmovss  dword ptr [rsp+0C8h+in2], xmm0
    vmulss  xmm0, xmm4, dword ptr [rax+8]
    vmovss  dword ptr [rsp+0C8h+in2+8], xmm0
    vmovss  dword ptr [rsp+0C8h+in2+4], xmm1
    vmovss  dword ptr [rsp+0C8h+in2+0Ch], xmm6
  }
  QuatMultiply(q, &in2, newOrient);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx+8]
    vmovss  xmm4, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm5, xmm3, xmm0
    vcomiss xmm5, cs:__real@3a83126f
  }
  if ( v57 | v58 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
      vmovups xmmword ptr [rbx], xmm0
    }
  }
  else
  {
    __asm
    {
      vsqrtss xmm0, xmm5, xmm5
      vdivss  xmm1, xmm6, xmm0
      vshufps xmm1, xmm1, xmm1, 0
      vmulps  xmm1, xmm1, xmmword ptr [rbx]
      vmovups xmmword ptr [rbx], xmm1
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+0C8h+var_88], xmm0
  }
  if ( (v81 & 0x7F800000) == 2139095040 )
    goto LABEL_32;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+0C8h+var_88], xmm0
  }
  if ( (v82 & 0x7F800000) == 2139095040 )
    goto LABEL_32;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+0C8h+var_88], xmm0
  }
  if ( (v83 & 0x7F800000) == 2139095040 )
  {
LABEL_32:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 982, ASSERT_TYPE_SANITY, "( !IS_NAN( ( newOrigin )[0] ) && !IS_NAN( ( newOrigin )[1] ) && !IS_NAN( ( newOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( newOrigin )[0] ) && !IS_NAN( ( newOrigin )[1] ) && !IS_NAN( ( newOrigin )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+0C8h+var_88], xmm0
  }
  if ( (v84 & 0x7F800000) == 2139095040 )
    goto LABEL_33;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+0C8h+var_88], xmm0
  }
  if ( (v85 & 0x7F800000) == 2139095040 )
    goto LABEL_33;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+0C8h+var_88], xmm0
  }
  if ( (v86 & 0x7F800000) == 2139095040 )
    goto LABEL_33;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+0C8h+var_88], xmm0
  }
  if ( (v87 & 0x7F800000) == 2139095040 )
  {
LABEL_33:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 983, ASSERT_TYPE_SANITY, "( !IS_NAN( ( newOrient )[0] ) && !IS_NAN( ( newOrient )[1] ) && !IS_NAN( ( newOrient )[2] ) && !IS_NAN( ( newOrient )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( newOrient )[0] ) && !IS_NAN( ( newOrient )[1] ) && !IS_NAN( ( newOrient )[2] ) && !IS_NAN( ( newOrient )[3] )") )
      __debugbreak();
  }
  _R11 = &v89;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
BgVehiclePhysics::InvalidateComponent
==============
*/
void BgVehiclePhysics::InvalidateComponent(BgVehiclePhysics *this, unsigned int index)
{
  __int64 v3; 

  v3 = index;
  if ( this->m_vehicleSystem )
  {
    this->m_components[index].id = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1218, ASSERT_TYPE_ASSERT, "( m_vehicleSystem )", "BgVehiclePhysics::RemoveComponentId() m_vehicleSystem should be valid when removing components from vehicle") )
      __debugbreak();
    this->m_components[v3].id = 0;
  }
}

/*
==============
BgVehiclePhysics::IsClientGeoLoaded
==============
*/
bool BgVehiclePhysics::IsClientGeoLoaded(BgVehiclePhysics *this, const usercmd_s *userCmd)
{
  bool v3; 
  char v4; 
  bool result; 

  if ( userCmd->vehAngles[0] == -1 && userCmd->vehAngles[1] == -1 && (v3 = userCmd->vehAngles[2] == -1) )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    v3 = 1;
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rdx+0C4h]
    vmovss  xmm1, dword ptr [rdx+0C8h]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rdx+0C0h]
  }
  if ( !v3 )
    goto LABEL_10;
  __asm { vucomiss xmm2, xmm0 }
  if ( !v3 )
    goto LABEL_10;
  __asm { vucomiss xmm1, xmm0 }
  if ( v3 )
    result = 0;
  else
LABEL_10:
    result = 1;
  if ( !v4 || result )
    return 1;
  return result;
}

/*
==============
BgVehiclePhysics::IsDynamic
==============
*/
bool BgVehiclePhysics::IsDynamic(BgVehiclePhysics *this)
{
  unsigned int BodyId; 
  unsigned int v4; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( !PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
    return 1;
  v4 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  return !Physics_IsRigidBodyKeyframed(this->m_worldId, v4);
}

/*
==============
BgVehiclePhysics::IsKeyframed
==============
*/
bool BgVehiclePhysics::IsKeyframed(BgVehiclePhysics *this)
{
  unsigned int BodyId; 
  bool result; 
  unsigned int v4; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  result = PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId);
  if ( result )
  {
    v4 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    return Physics_IsRigidBodyKeyframed(this->m_worldId, v4);
  }
  return result;
}

/*
==============
BgVehiclePhysics::IsPhysicsBodyIdValid
==============
*/
bool BgVehiclePhysics::IsPhysicsBodyIdValid(BgVehiclePhysics *this)
{
  unsigned int BodyId; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  return PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId);
}

/*
==============
BgVehiclePhysics::IsValidUserCmd
==============
*/
bool BgVehiclePhysics::IsValidUserCmd(BgVehiclePhysics *this, const usercmd_s *userCmd)
{
  const usercmd_s *v7; 
  bool v9; 
  bool v11; 
  float v0[4]; 
  float v1[4]; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx+0C0h]
    vmovss  xmm1, dword ptr [rdx+0C4h]
    vmovss  xmm2, cs:__real@3a83126f; epsilon
    vmovss  [rsp+58h+v0], xmm0
    vmovss  xmm0, dword ptr [rdx+0C8h]
    vmovss  [rsp+58h+var_34], xmm1
    vxorps  xmm1, xmm1, xmm1
  }
  v7 = userCmd;
  __asm
  {
    vmovss  [rsp+58h+var_30], xmm0
    vmovss  [rsp+58h+v1], xmm1
    vmovss  [rsp+58h+var_24], xmm1
    vmovss  [rsp+58h+var_20], xmm1
  }
  v9 = VecNCompareCustomEpsilon(v0, v1, *(float *)&_XMM2, 3) && !v7->vehAngles[0] && !v7->vehAngles[1] && !v7->vehAngles[2];
  __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
  v11 = VecNCompareCustomEpsilon(v0, this->m_pmoveLastCmdPos.v, *(float *)&_XMM2, 3);
  return !v9 && !v11 && v7->serverTime > this->m_pmoveLastCmdTime;
}

/*
==============
BgVehiclePhysics::OffsetCenterOfMass
==============
*/
void BgVehiclePhysics::OffsetCenterOfMass(BgVehiclePhysics *this, const vec3_t *offsetLs, bool force)
{
  unsigned int BodyId; 
  unsigned int v8; 
  unsigned int v9; 
  vec3_t out; 
  tmat43_t<vec3_t> dst; 
  tmat44_t<vec4_t> outIwTransform; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( !PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 564, ASSERT_TYPE_ASSERT, "(IsPhysicsBodyIdValid())", (const char *)&queryFormat, "IsPhysicsBodyIdValid()") )
    __debugbreak();
  __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
  if ( !VecNCompareCustomEpsilon(this->m_centerOfMassOffsetLs.v, offsetLs->v, *(float *)&_XMM2, 3) || force )
  {
    v8 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    this->m_centerOfMassOffsetLs.v[0] = offsetLs->v[0];
    v9 = v8;
    this->m_centerOfMassOffsetLs.v[1] = offsetLs->v[1];
    this->m_centerOfMassOffsetLs.v[2] = offsetLs->v[2];
    Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, v8, &outIwTransform);
    MatrixCopy44To43(&outIwTransform, &dst);
    AxisTransformVec3((const tmat33_t<vec3_t> *)&dst, offsetLs, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0D8h+dst+24h]
      vaddss  xmm1, xmm0, dword ptr [rsp+0D8h+out]
      vmovss  xmm2, dword ptr [rsp+0D8h+dst+28h]
      vaddss  xmm0, xmm2, dword ptr [rsp+0D8h+out+4]
    }
    _R8 = &this->m_centerOfMassWs;
    __asm
    {
      vmovss  dword ptr [r8], xmm1
      vmovss  xmm1, dword ptr [rsp+0D8h+dst+2Ch]
      vaddss  xmm2, xmm1, dword ptr [rsp+0D8h+out+8]
      vmovss  dword ptr [r8+8], xmm2
      vmovss  dword ptr [r8+4], xmm0
    }
    if ( !this->m_pmoveObject )
      Physics_SetRigidBodyCenterOfMass(this->m_worldId, v9, _R8);
  }
}

/*
==============
BGVehicles::PhysicsDrawDebug
==============
*/
void BGVehicles::PhysicsDrawDebug(BGVehicles *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const ScreenPlacement *v10; 
  int v15; 
  __int64 v19; 
  BgVehiclePhysicsManager *v20; 
  const BgVehiclePhysics *v21; 
  int v22; 
  BgVehiclePhysicsManager *v23; 
  int v24; 
  BgVehiclePhysicsManager *v25; 
  unsigned int v26; 
  __int64 v27; 
  int v28; 
  unsigned int BodyId; 
  BgVehiclePhysicsManager *v30; 
  BgVehiclePhysics *ObjectForPmove; 
  int setColor; 
  int setColora; 
  __int64 forceColor; 
  int forceColora; 
  int forceColorb; 
  __int64 shadow; 
  float v42; 

  _R13 = y;
  _R12 = x;
  v10 = scrPlace;
  if ( this->PhysicsIsDebugDrawing(this) )
  {
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm6
      vmovaps [rsp+98h+var_48], xmm7
    }
    Com_sprintf(s_debugDrawTextBuffer, 0x40ui64, "Physics Vehicle Summary");
    __asm
    {
      vmovss  xmm7, [rsp+98h+charHeight]
      vmovss  xmm2, dword ptr [r13+0]; y
      vmovss  xmm1, dword ptr [r12]; x
    }
    v15 = 0;
    __asm { vmovss  [rsp+98h+var_60], xmm7 }
    Physics_DrawDebugString(v10, *(float *)&_XMM1, *(float *)&_XMM2, s_debugDrawTextBuffer, &colorWhite, 0, 1, v42, 0);
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [r13+0]
      vmovss  xmm6, [rsp+98h+tabWidth]
      vmovss  dword ptr [r13+0], xmm0
      vaddss  xmm0, xmm6, dword ptr [r12]
      vmovss  dword ptr [r12], xmm0
    }
    v19 = 0i64;
    do
    {
      v20 = this->PhysicsGetVehiclePhysicsManager(this);
      if ( (unsigned int)v15 >= 0x80 )
      {
        LODWORD(shadow) = 128;
        LODWORD(forceColor) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", forceColor, shadow) )
          __debugbreak();
      }
      v21 = (const BgVehiclePhysics *)&v20->m_vehiclePhysicsObjects[v19];
      if ( (BgVehiclePhysicsManager *)((char *)v20 + v19 * 3360) != (BgVehiclePhysicsManager *)-8i64 )
      {
        if ( *(_DWORD *)&v20->m_vehiclePhysicsObjects[v19].buffer[8] )
        {
          __asm
          {
            vmovss  dword ptr [rsp+98h+forceColor], xmm7
            vmovss  dword ptr [rsp+98h+setColor], xmm6
          }
          ((void (__fastcall *)(BgVehiclePhysicsObjectBuffer *, const ScreenPlacement *, float *, float *, int, int))v21->DebugDraw)(&v20->m_vehiclePhysicsObjects[v19], v10, _R12, _R13, setColor, forceColora);
          v22 = *(_DWORD *)&v20->m_vehiclePhysicsObjects[v19].buffer[24];
          if ( !v22 || v22 == 3 )
          {
            v23 = this->PhysicsGetVehiclePhysicsManager(this);
            v24 = *(_DWORD *)&v20->m_vehiclePhysicsObjects[v19].buffer[28];
            v25 = v23;
            if ( (unsigned int)(v24 - 1) > 0x7F )
              goto LABEL_18;
            v26 = v24 - 1;
            if ( v26 >= 0x80 )
            {
              LODWORD(shadow) = 128;
              LODWORD(forceColor) = v26;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 300, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            v27 = v26;
            if ( *(_DWORD *)&v25->m_vehiclePhysicsObjectsPmove[v27].buffer[8] && (v28 = *(_DWORD *)&v25->m_vehiclePhysicsObjectsPmove[v27].buffer[48], v28 == v21->m_entityNumber) && (BodyId = PhysicsVehicle_GetBodyId(*(Physics_WorldId *)&v25->m_vehiclePhysicsObjectsPmove[v27].buffer[32], v28), BodyId == PhysicsVehicle_GetBodyId(v21->m_worldId, v21->m_entityNumber)) )
            {
              v30 = this->PhysicsGetVehiclePhysicsManager(this);
              ObjectForPmove = BgVehiclePhysicsManager::GetObjectForPmove(v30, v21);
              v10 = scrPlace;
              __asm
              {
                vmovss  dword ptr [rsp+98h+forceColor], xmm7
                vmovss  dword ptr [rsp+98h+setColor], xmm6
              }
              ((void (__fastcall *)(BgVehiclePhysics *, const ScreenPlacement *, float *, float *, int, int))ObjectForPmove->DebugDraw)(ObjectForPmove, scrPlace, _R12, _R13, setColora, forceColorb);
            }
            else
            {
LABEL_18:
              v10 = scrPlace;
            }
          }
        }
      }
      ++v15;
      ++v19;
    }
    while ( v15 < 128 );
    __asm
    {
      vmovss  xmm0, dword ptr [r12]
      vmovaps xmm7, [rsp+98h+var_48]
      vsubss  xmm1, xmm0, xmm6
      vmovaps xmm6, [rsp+98h+var_38]
      vmovss  dword ptr [r12], xmm1
    }
  }
}

/*
==============
BGVehicles::PhysicsFactory
==============
*/
BgVehiclePhysics *BGVehicles::PhysicsFactory(unsigned __int8 *buffer, unsigned int maxBufferSize, VehicleType vehType, VehiclePhysicsGameProfile vpgProfile)
{
  unsigned int v8; 
  unsigned __int8 *v9; 
  bool v10; 
  void **v11; 
  __int64 v12; 
  HelicopterRotorBlade *v13; 
  __int64 v14; 
  HelicopterRotorBlade *v15; 
  BgVehiclePhysics *result; 
  __int64 v17; 

  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1741, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !maxBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1742, ASSERT_TYPE_ASSERT, "(maxBufferSize > 0)", (const char *)&queryFormat, "maxBufferSize > 0") )
    __debugbreak();
  if ( maxBufferSize > 0xD20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1743, ASSERT_TYPE_ASSERT, "(maxBufferSize <= VEHICLE_PHYSICS_MAX_MEMSIZE)", (const char *)&queryFormat, "maxBufferSize <= VEHICLE_PHYSICS_MAX_MEMSIZE") )
    __debugbreak();
  v8 = (unsigned __int8)vehType;
  v9 = NULL;
  switch ( vehType )
  {
    case VEH_TREADED:
      if ( vpgProfile )
      {
        if ( vpgProfile != VEH_GAMEPROFILE_WHEELSON )
          goto LABEL_66;
        if ( maxBufferSize < 0xCB0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1752, ASSERT_TYPE_ASSERT, "(sizeof( BgVehiclePhysicsSentryDrone ) <= maxBufferSize)", "%s\n\tBGVehicles::PhysicsFactory Not enough buffer memory to instantiateBgVehiclePhysicsSentryDrone", "sizeof( BgVehiclePhysicsSentryDrone ) <= maxBufferSize") )
          __debugbreak();
        BgVehiclePhysics::BgVehiclePhysics((BgVehiclePhysics *)buffer);
        v11 = &BgVehiclePhysicsSentryDrone::`vftable';
      }
      else
      {
        if ( maxBufferSize < 0xCB8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1755, ASSERT_TYPE_ASSERT, "(sizeof( BgVehiclePhysicsTank ) <= maxBufferSize)", "%s\n\tBGVehicles::PhysicsFactory Not enough buffer memory to instantiateBgVehiclePhysicsTank", "sizeof( BgVehiclePhysicsTank ) <= maxBufferSize") )
          __debugbreak();
        BgVehiclePhysics::BgVehiclePhysics((BgVehiclePhysics *)buffer);
        v11 = &BgVehiclePhysicsTank::`vftable';
      }
LABEL_75:
      *(_QWORD *)buffer = v11;
      goto LABEL_76;
    case VEH_ARMOURED:
      if ( maxBufferSize < 0xD00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1763, ASSERT_TYPE_ASSERT, "(sizeof( BgVehiclePhysicsTechnical ) <= maxBufferSize)", "%s\n\tBGVehicles::PhysicsFactory Not enough buffer memory to instantiateBgVehiclePhysicsTechnical", "sizeof( BgVehiclePhysicsTechnical ) <= maxBufferSize") )
        __debugbreak();
LABEL_59:
      BgVehiclePhysics::BgVehiclePhysics((BgVehiclePhysics *)buffer);
      *(_QWORD *)buffer = &BgVehiclePhysicsTechnical::`vftable';
      goto LABEL_76;
    case VEH_CAR:
      if ( vpgProfile != VEH_GAMEPROFILE_JEEP )
      {
        if ( (unsigned __int8)vpgProfile <= VEH_GAMEPROFILE_JEEP )
          goto LABEL_66;
        if ( (unsigned __int8)vpgProfile <= VEH_GAMEPROFILE_ATVQUADOLD )
        {
          if ( maxBufferSize < 0xD18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1771, ASSERT_TYPE_ASSERT, "(sizeof( BgVehiclePhysicsAtvQuadNew ) <= maxBufferSize)", "%s\n\tBGVehicles::PhysicsFactory Not enough buffer memory to instantiateBgVehiclePhysicsAtvQuadNew", "sizeof( BgVehiclePhysicsAtvQuadNew ) <= maxBufferSize") )
            __debugbreak();
          BgVehiclePhysics::BgVehiclePhysics((BgVehiclePhysics *)buffer);
          *(_QWORD *)buffer = &BgVehiclePhysicsAtvQuadNew::`vftable';
          goto LABEL_76;
        }
        if ( vpgProfile != VEH_GAMEPROFILE_TECHNICAL )
        {
          if ( vpgProfile == VEH_GAMEPROFILE_TWOWHEELED )
          {
            if ( maxBufferSize < 0xCA8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1778, ASSERT_TYPE_ASSERT, "(sizeof( BgVehiclePhysicsTwoWheeled ) <= maxBufferSize)", "%s\n\tBGVehicles::PhysicsFactory Not enough buffer memory to instantiateBgVehiclePhysicsTwoWheeled", "sizeof( BgVehiclePhysicsTwoWheeled ) <= maxBufferSize") )
              __debugbreak();
            BgVehiclePhysics::BgVehiclePhysics((BgVehiclePhysics *)buffer);
            *(_QWORD *)buffer = &BgVehiclePhysicsTwoWheeled::`vftable';
            goto LABEL_76;
          }
          goto LABEL_66;
        }
      }
      if ( maxBufferSize < 0xD00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1775, ASSERT_TYPE_ASSERT, "(sizeof( BgVehiclePhysicsTechnical ) <= maxBufferSize)", "%s\n\tBGVehicles::PhysicsFactory Not enough buffer memory to instantiateBgVehiclePhysicsTechnical", "sizeof( BgVehiclePhysicsTechnical ) <= maxBufferSize") )
        __debugbreak();
      goto LABEL_59;
  }
  if ( vehType != VEH_AIRCRAFT )
  {
    if ( vehType == VEH_SEACRAFT )
    {
      if ( vpgProfile != VEH_GAMEPROFILE_BOAT )
      {
        v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1807, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Profile type doesn't belong to SEACRAFT category\n");
        goto LABEL_25;
      }
      if ( maxBufferSize < 0x7A0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1804, ASSERT_TYPE_ASSERT, "(sizeof( BgVehiclePhysicsZodiac ) <= maxBufferSize)", "%s\n\tBGVehicles::PhysicsFactory Not enough buffer memory to instantiateBgVehiclePhysicsZodiac", "sizeof( BgVehiclePhysicsZodiac ) <= maxBufferSize") )
        __debugbreak();
      BgVehiclePhysics::BgVehiclePhysics((BgVehiclePhysics *)buffer);
      v11 = &BgVehiclePhysicsZodiac::`vftable';
      goto LABEL_75;
    }
LABEL_66:
    Com_PrintWarning(20, "BGVehicles::PhysicsFactory() Vehicle Type %d unknown, deferring instantiation to Game Specific.", (unsigned __int8)vehType);
    goto LABEL_77;
  }
  if ( vpgProfile == VEH_GAMEPROFILE_FIXEDWING )
  {
    if ( maxBufferSize < 0x520 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1787, ASSERT_TYPE_ASSERT, "(sizeof( FlightDynamics ) <= maxBufferSize)", "%s\n\tBGVehicles::PhysicsFactory Not enough buffer memory to instantiateFlightDynamics", "sizeof( FlightDynamics ) <= maxBufferSize") )
      __debugbreak();
    BgVehiclePhysics::BgVehiclePhysics((BgVehiclePhysics *)buffer);
    v11 = &FlightDynamics::`vftable';
    goto LABEL_75;
  }
  if ( vpgProfile == VEH_GAMEPROFILE_FIXEDWING_RCPLANE )
  {
    if ( maxBufferSize < 0x3D0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1790, ASSERT_TYPE_ASSERT, "(sizeof( BgVehiclePhysicsRCPlane ) <= maxBufferSize)", "%s\n\tBGVehicles::PhysicsFactory Not enough buffer memory to instantiateBgVehiclePhysicsRCPlane", "sizeof( BgVehiclePhysicsRCPlane ) <= maxBufferSize") )
      __debugbreak();
    BgVehiclePhysics::BgVehiclePhysics((BgVehiclePhysics *)buffer);
    v11 = &BgVehiclePhysicsRCPlane::`vftable';
    goto LABEL_75;
  }
  if ( vpgProfile != VEH_GAMEPROFILE_ROTARYWING )
  {
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1796, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Profile type doesn't belong to AIRCRAFT category\n");
LABEL_25:
    if ( v10 )
      __debugbreak();
    goto LABEL_66;
  }
  if ( maxBufferSize < 0x970 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1793, ASSERT_TYPE_ASSERT, "(sizeof( HelicopterDynamics ) <= maxBufferSize)", "%s\n\tBGVehicles::PhysicsFactory Not enough buffer memory to instantiateHelicopterDynamics", "sizeof( HelicopterDynamics ) <= maxBufferSize") )
    __debugbreak();
  BgVehiclePhysics::BgVehiclePhysics((BgVehiclePhysics *)buffer);
  v12 = 6i64;
  *(_QWORD *)buffer = &HelicopterDynamics::`vftable';
  v13 = (HelicopterRotorBlade *)(buffer + 1512);
  v14 = 6i64;
  do
  {
    HelicopterRotorBlade::HelicopterRotorBlade(v13++);
    --v14;
  }
  while ( v14 );
  v15 = (HelicopterRotorBlade *)(buffer + 1976);
  do
  {
    HelicopterRotorBlade::HelicopterRotorBlade(v15++);
    --v12;
  }
  while ( v12 );
LABEL_76:
  v9 = buffer;
LABEL_77:
  result = BG_GameInterface_VehiclePhysics_Allocate((BgVehiclePhysics *)v9, buffer, maxBufferSize, v8, (unsigned __int8)vpgProfile);
  if ( !result )
  {
    LODWORD(v17) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1822, ASSERT_TYPE_ASSERT, "( instance != nullptr )", "BGVehicles::PhysicsFactory() could not create a BgVehiclePhysics instance for vehicle type=%d. We need a valid vehicle instance at this point.", v17) )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
BGVehicles::PhysicsFactoryComponent
==============
*/
BgVehiclePhysicsComponent *BGVehicles::PhysicsFactoryComponent(unsigned __int8 *buffer, unsigned int maxBufferSize, BgVehiclePhysics *vehObj, unsigned int compType)
{
  unsigned __int8 *v8; 
  void **v9; 
  BgVehiclePhysicsComponent *result; 
  __int64 v11; 

  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1832, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !maxBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1833, ASSERT_TYPE_ASSERT, "(maxBufferSize > 0)", (const char *)&queryFormat, "maxBufferSize > 0") )
    __debugbreak();
  if ( maxBufferSize < 0x180 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1834, ASSERT_TYPE_ASSERT, "(maxBufferSize >= 384u)", (const char *)&queryFormat, "maxBufferSize >= VEHICLE_PHYSICS_MAX_COMPONENT_MEMSIZE") )
    __debugbreak();
  v8 = NULL;
  switch ( compType )
  {
    case 1u:
      if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF_HALF || (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
      {
        if ( maxBufferSize < 0x168 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1842, ASSERT_TYPE_ASSERT, "(sizeof( BgVehicleComponentPathFollowerCP ) <= maxBufferSize)", "%s\n\tBGVehicles::PhysicsFactory Not enough buffer memory to instantiateBgVehicleComponentPathFollowerCP", "sizeof( BgVehicleComponentPathFollowerCP ) <= maxBufferSize") )
          __debugbreak();
        v9 = &BgVehicleComponentPathFollowerCP::`vftable';
      }
      else
      {
        if ( maxBufferSize < 0x168 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1846, ASSERT_TYPE_ASSERT, "(sizeof( BgVehicleComponentPathFollowerSP ) <= maxBufferSize)", "%s\n\tBGVehicles::PhysicsFactory Not enough buffer memory to instantiateBgVehicleComponentPathFollowerSP", "sizeof( BgVehicleComponentPathFollowerSP ) <= maxBufferSize") )
          __debugbreak();
        v9 = &BgVehicleComponentPathFollowerSP::`vftable';
      }
      break;
    case 2u:
      if ( maxBufferSize < 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1849, ASSERT_TYPE_ASSERT, "(sizeof( BgVehicleComponentPathFinder ) <= maxBufferSize)", "%s\n\tBGVehicles::PhysicsFactory Not enough buffer memory to instantiateBgVehicleComponentPathFinder", "sizeof( BgVehicleComponentPathFinder ) <= maxBufferSize") )
        __debugbreak();
      v9 = &BgVehicleComponentPathFinder::`vftable';
      break;
    case 3u:
      if ( maxBufferSize < 0x70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1850, ASSERT_TYPE_ASSERT, "(sizeof( BgVehicleComponentGoStraightTo ) <= maxBufferSize)", "%s\n\tBGVehicles::PhysicsFactory Not enough buffer memory to instantiateBgVehicleComponentGoStraightTo", "sizeof( BgVehicleComponentGoStraightTo ) <= maxBufferSize") )
        __debugbreak();
      v9 = &BgVehicleComponentGoStraightTo::`vftable';
      break;
    default:
      Com_PrintWarning(20, "BGVehicles::PhysicsFactoryComponent() Vehicle Component Type %d unknown, deferring instantiation to Game Specific.", compType);
      goto LABEL_33;
  }
  *(_QWORD *)buffer = v9;
  v8 = buffer;
LABEL_33:
  result = BG_GameInterface_VehiclePhysics_AllocateComponent((BgVehiclePhysicsComponent *)v8, buffer, maxBufferSize, vehObj, compType);
  if ( !result )
  {
    LODWORD(v11) = compType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1860, ASSERT_TYPE_ASSERT, "( instance != nullptr )", "BGVehicles::PhysicsFactoryComponent() could not create a BgVehiclePhysicsComponent instance for type=%d. We need a valid instance at this point.", v11) )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
BGVehicles::PhysicsFireWeapon
==============
*/
void BGVehicles::PhysicsFireWeapon(BGVehicles *this, unsigned int vehicleId, const vec3_t *dirWs, const vec3_t *atWs, const WeaponDef *weapDef)
{
  BgVehiclePhysicsManager *v8; 
  BgVehiclePhysics *ObjectById; 

  if ( vehicleId - 1 <= 0x7F )
  {
    v8 = this->PhysicsGetVehiclePhysicsManager(this);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(v8, vehicleId);
    if ( ObjectById->m_inUse )
      ObjectById->FireWeapon(ObjectById, dirWs, atWs, weapDef);
  }
}

/*
==============
BGVehicles::PhysicsGetVehicleOriginAtPlayerStateTime
==============
*/
void BGVehicles::PhysicsGetVehicleOriginAtPlayerStateTime(BGVehicles *this, const playerState_s *ps, vec3_t *outOrg)
{
  __asm
  {
    vmovsd  xmm0, qword ptr [rdx+12Ch]
    vmovsd  qword ptr [r8], xmm0
  }
  outOrg->v[2] = ps->vehicleState.origin.v[2];
}

/*
==============
BGVehicles::PhysicsInvalidComponentId
==============
*/
_DWORD *BGVehicles::PhysicsInvalidComponentId(_DWORD *a1)
{
  *a1 = 0;
  return a1;
}

/*
==============
BGVehicles::PhysicsInvalidId
==============
*/
__int64 BGVehicles::PhysicsInvalidId()
{
  return 0i64;
}

/*
==============
BGVehicles::PhysicsIsTypeSupported
==============
*/
bool BGVehicles::PhysicsIsTypeSupported(VehicleType vehType)
{
  return (unsigned __int8)vehType >= VEH_TREADED;
}

/*
==============
BGVehicles::PhysicsIsValid
==============
*/
bool BGVehicles::PhysicsIsValid(unsigned int id)
{
  return id - 1 <= 0x7F;
}

/*
==============
BGVehicles::PhysicsIsValidComponent
==============
*/
bool BGVehicles::PhysicsIsValidComponent(VehiclePhysicsComponentId componentId)
{
  return componentId.id && (componentId.id & 0xFF0000) < 0x20000;
}

/*
==============
BGVehicles::PhysicsUnpackLerpStateValues
==============
*/
void BGVehicles::PhysicsUnpackLerpStateValues(BGVehicles *this, const LerpEntityStateVehicle *lerpVeh, float *outGasInput, bool *outIsBraking, float *outWheelAveSpinSpeed)
{
  _RSI = outWheelAveSpinSpeed;
  _RDI = outGasInput;
  BG_Vehicle_UnpackPhysicsParams(lerpVeh, outGasInput, outIsBraking, outWheelAveSpinSpeed);
  if ( *outIsBraking )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm1, dword ptr [rsi]
      vxorps  xmm2, xmm1, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rsi], xmm2
    }
  }
}

/*
==============
BGVehicles::PhysicsUpdateCharacterWobbleAnimDataCommon
==============
*/
void BGVehicles::PhysicsUpdateCharacterWobbleAnimDataCommon(BGVehicles *this, const BgVehiclePhysics *vehObj, const tmat33_t<vec3_t> *entAxis, const vec3_t *entOrg, const characterInfo_t *ci, float frameTime, wobbleAnim_t *outData)
{
  bool v19; 
  bool v20; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  float v27; 
  animScriptVehicleSeat_t seat; 
  char v51; 
  char v52; 
  vec3_t targetVel; 
  float v147; 
  char v157; 

  __asm
  {
    vmovaps [rsp+128h+var_58], xmm8
    vmovaps [rsp+128h+var_88], xmm11
  }
  _RBX = outData;
  _RBP = entOrg;
  _RSI = vehObj;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 2044, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v19 = outData == NULL;
  if ( !outData )
  {
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 2045, ASSERT_TYPE_ASSERT, "(outData)", (const char *)&queryFormat, "outData");
    v19 = !v20;
    if ( v20 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm11, [rsp+128h+frameTime]
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm11, xmm8
  }
  if ( !v19 )
  {
    if ( !outData->initialized )
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+0]
        vmovsd  qword ptr [rbx+4], xmm0
      }
      outData->lfTargetPos.v[2] = _RBP->v[2];
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+0]
        vmovsd  qword ptr [rbx+10h], xmm0
      }
      outData->lfCurrentPos.v[2] = _RBP->v[2];
      *(_OWORD *)outData->lfCurrentVel.v = 0ui64;
      *(_QWORD *)outData->amplitude.v = 0i64;
      outData->amplitude.v[2] = 0.0;
      *(_QWORD *)&outData->angleDirLerp0 = 0i64;
      outData->intensity = 0;
      outData->initialized = 1;
    }
    if ( _RSI->m_vehicleAnimProfile )
    {
      v25 = DCONST_DVARBOOL_bg_vehicleDisableWobbleAnim;
      if ( !DCONST_DVARBOOL_bg_vehicleDisableWobbleAnim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDisableWobbleAnim") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      if ( !v25->current.enabled )
      {
        if ( _RSI->m_clientGeoLoaded )
          goto LABEL_20;
        v26 = DVARINT_bg_vehNetNoClientGeoMode;
        if ( !DVARINT_bg_vehNetNoClientGeoMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetNoClientGeoMode") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v26);
        if ( v26->current.integer != 1 )
        {
LABEL_20:
          v27 = outData->lfTargetPos.v[2];
          __asm
          {
            vmovss  xmm1, cs:upDistLf
            vmulss  xmm0, xmm1, dword ptr [rsi+18Ch]
            vaddss  xmm2, xmm0, dword ptr [rbp+0]
            vmovaps [rsp+128h+var_38], xmm6
            vmovsd  xmm6, qword ptr [rbx+4]
            vmovss  dword ptr [rbx+4], xmm2
            vmulss  xmm0, xmm1, dword ptr [rsi+190h]
            vaddss  xmm5, xmm0, dword ptr [rbp+4]
            vmovaps [rsp+128h+var_48], xmm7
            vmovaps [rsp+128h+var_68], xmm9
            vmovaps [rsp+128h+var_78], xmm10
            vmovss  xmm10, cs:__real@3f800000
            vmovss  dword ptr [rbx+8], xmm5
            vmulss  xmm0, xmm1, dword ptr [rsi+194h]
            vaddss  xmm4, xmm0, dword ptr [rbp+8]
            vsubss  xmm0, xmm2, xmm6
            vdivss  xmm3, xmm10, xmm11
            vmulss  xmm1, xmm0, xmm3
            vshufps xmm2, xmm6, xmm6, 55h ; 'U'
            vsubss  xmm0, xmm5, xmm2
          }
          v147 = v27;
          __asm
          {
            vsubss  xmm2, xmm4, [rsp+128h+var_D0]
            vmovaps [rsp+128h+var_98], xmm12
            vmovss  dword ptr [rsp+128h+targetVel], xmm1
            vmulss  xmm1, xmm0, xmm3
            vmovss  dword ptr [rbx+0Ch], xmm4
          }
          seat = ci->vehicleAnimation.seat;
          __asm
          {
            vmovaps [rsp+128h+var_A8], xmm13
            vmovaps [rsp+128h+var_B8], xmm14
            vmulss  xmm0, xmm2, xmm3
            vmovss  dword ptr [rsp+128h+targetVel+8], xmm0
            vmovss  dword ptr [rsp+128h+targetVel+4], xmm1
          }
          if ( seat < VEHICLE_SEAT_2 )
            goto LABEL_25;
          if ( seat <= VEHICLE_SEAT_3 )
          {
            __asm
            {
              vmovss  xmm1, cs:__real@41c80000
              vmovss  xmm2, cs:__real@40400000
            }
            outData->intensity = 1;
            goto LABEL_27;
          }
          if ( seat > VEHICLE_SEAT_5 )
          {
LABEL_25:
            __asm { vmovss  xmm1, cs:__real@42200000; k }
            outData->intensity = 0;
          }
          else
          {
            __asm { vmovss  xmm1, cs:__real@420c0000 }
            outData->intensity = 2;
          }
          __asm { vmovss  xmm2, cs:__real@40800000; d }
LABEL_27:
          _R15 = &outData->lfCurrentVel;
          _RBP = &outData->lfCurrentPos;
          __asm { vmovaps xmm0, xmm11; frameTime }
          Vec3IntegrateDampedSpring(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, &outData->lfTargetPos, &targetVel, &outData->lfCurrentPos, &outData->lfCurrentVel);
          __asm { vucomiss xmm8, dword ptr [rsi+18Ch] }
          if ( !v52 )
            goto LABEL_30;
          __asm { vucomiss xmm8, dword ptr [rsi+190h] }
          if ( !v52 )
            goto LABEL_30;
          __asm { vucomiss xmm8, dword ptr [rsi+194h] }
          if ( !v52 )
LABEL_30:
            ProjectPointOnPlane(&outData->lfCurrentPos, &outData->lfTargetPos, &_RSI->m_transform.m[2], &outData->lfCurrentPos);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+0]
            vsubss  xmm4, xmm0, dword ptr [rbx+4]
            vmovss  xmm1, dword ptr [rbp+4]
            vsubss  xmm3, xmm1, dword ptr [rbx+8]
            vmovss  xmm14, dword ptr cs:__xmm@80000000800000008000000080000000
            vmulss  xmm0, xmm4, xmm4
            vmulss  xmm2, xmm3, xmm3
            vaddss  xmm1, xmm2, xmm0
            vsqrtss xmm12, xmm1, xmm1
            vcomiss xmm12, cs:__real@3a83126f
            vcmpless xmm0, xmm12, cs:__real@80000000
            vblendvps xmm0, xmm12, xmm10, xmm0
            vdivss  xmm1, xmm10, xmm0
            vmulss  xmm13, xmm4, xmm1
            vmulss  xmm9, xmm3, xmm1
          }
          if ( v51 | v52 )
          {
            __asm { vxorps  xmm1, xmm1, xmm1 }
          }
          else
          {
            __asm
            {
              vmulss  xmm1, xmm9, dword ptr [r14+4]
              vmulss  xmm0, xmm13, dword ptr [r14]
              vaddss  xmm0, xmm1, xmm0; val
              vmovss  xmm1, cs:__real@bf800000; min
              vmovaps xmm2, xmm10; max
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vmulss  xmm2, xmm9, dword ptr [r14+10h]
              vmulss  xmm1, xmm13, dword ptr [r14+0Ch]
              vaddss  xmm2, xmm2, xmm1
              vmovss  xmm1, cs:__real@bf800000; min
              vmovaps xmm7, xmm0
              vxorps  xmm0, xmm2, xmm14; val
              vmovaps xmm2, xmm10; max
            }
            I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vmovss  xmm1, cs:__real@42652ee0
              vcmpless xmm2, xmm8, xmm0
              vmovss  xmm0, cs:__real@c2652ee0
              vblendvps xmm6, xmm0, xmm1, xmm2
              vmovaps xmm0, xmm7; X
            }
            acosf_0(*(float *)&_XMM0);
            __asm
            {
              vmulss  xmm1, xmm6, xmm0
              vmovss  dword ptr [rbx+30h], xmm1
            }
          }
          __asm
          {
            vmovss  dword ptr [rbx+28h], xmm1
            vmovss  xmm0, dword ptr [rbx+30h]
            vsubss  xmm1, xmm0, dword ptr [rbx+2Ch]
            vmulss  xmm5, xmm1, cs:__real@3b360b61
            vmovss  xmm9, cs:__real@3f000000
            vxorps  xmm1, xmm1, xmm1
            vaddss  xmm2, xmm5, xmm9
            vroundss xmm4, xmm1, xmm2, 1
            vsubss  xmm0, xmm5, xmm4
            vmulss  xmm6, xmm0, cs:__real@43b40000
            vmulss  xmm1, xmm6, xmm11
            vmulss  xmm2, xmm1, cs:angleDirSpeed
            vaddss  xmm0, xmm2, dword ptr [rbx+2Ch]
            vmovss  dword ptr [rbx+2Ch], xmm0
            vdivss  xmm0, xmm12, cs:maxdlf; val
            vmovaps xmm2, xmm10; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vmulss  xmm1, xmm6, cs:__real@3bb60b61
            vmulss  xmm0, xmm0, xmm0
            vsubss  xmm2, xmm10, xmm1
            vmulss  xmm1, xmm0, cs:MaxAmplitudelf
            vmaxss  xmm3, xmm2, xmm8
            vmulss  xmm2, xmm3, xmm1
            vaddss  xmm3, xmm2, dword ptr [rbx+34h]
            vmulss  xmm0, xmm3, xmm9
            vmaxss  xmm0, xmm0, xmm8
            vmovss  dword ptr [rbx+34h], xmm0
            vmovss  xmm0, dword ptr [r15]
            vmovss  xmm3, dword ptr [r15+4]
            vmulss  xmm4, xmm0, xmm0
            vdivss  xmm0, xmm10, cs:maxdist
            vmulss  xmm3, xmm3, xmm3
            vaddss  xmm4, xmm4, xmm3
            vsqrtss xmm5, xmm4, xmm4
            vmulss  xmm0, xmm5, xmm0; val
            vmovaps xmm2, xmm10; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmulss  xmm2, xmm11, cs:speedAmp1
            vmovss  xmm1, cs:__real@40490fdb; Y
            vmovaps xmm8, xmm0
            vaddss  xmm0, xmm2, dword ptr [rbx+40h]; X
            vmovss  dword ptr [rbx+40h], xmm0
          }
          *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
          __asm
          {
            vmulss  xmm2, xmm0, cs:decay
            vmovaps xmm7, xmm0
            vmovss  xmm0, cs:__real@402df854; X
            vxorps  xmm1, xmm2, xmm14; Y
          }
          *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vmulss  xmm2, xmm7, cs:freq
            vmovaps xmm6, xmm0
            vsubss  xmm0, xmm2, cs:__real@3fc90fdb; X
          }
          cosf_0(*(float *)&_XMM0);
          __asm
          {
            vmovaps xmm14, [rsp+128h+var_B8]
            vmovaps xmm13, [rsp+128h+var_A8]
            vmovaps xmm12, [rsp+128h+var_98]
            vmovaps xmm10, [rsp+128h+var_78]
            vmovaps xmm7, [rsp+128h+var_48]
            vmulss  xmm1, xmm6, xmm0
            vmovaps xmm6, [rsp+128h+var_38]
            vmulss  xmm2, xmm1, xmm8
            vmulss  xmm3, xmm2, cs:maxampl
            vaddss  xmm0, xmm3, dword ptr [rbx+38h]
            vmulss  xmm1, xmm0, xmm9
            vmovaps xmm9, [rsp+128h+var_68]
            vmovss  dword ptr [rbx+38h], xmm1
          }
        }
      }
    }
  }
  _R11 = &v157;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
BGVehicles::PhysicsUpdateVehicleAnimationParams
==============
*/
bool BGVehicles::PhysicsUpdateVehicleAnimationParams(BGVehicles *this, int entityNum, int vehSeat, VehicleWorldmodelAAnim *outAnimParams)
{
  __int64 v6; 

  if ( entityNum == 2047 )
    return 0;
  v6 = ((__int64 (__fastcall *)(BGVehicles *))this->PhysicsGetVehicleObject)(this);
  if ( !v6 )
    return 0;
  else
    return (*(__int64 (__fastcall **)(__int64, _QWORD, VehicleWorldmodelAAnim *))(*(_QWORD *)v6 + 136i64))(v6, (unsigned int)vehSeat, outAnimParams);
}

/*
==============
BgVehiclePhysics::Pmove
==============
*/
void BgVehiclePhysics::Pmove(BgVehiclePhysics *this, pmove_t *pm, const pml_t *pml)
{
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [r8+24h]
    vmovaps xmm6, [rsp+178h+var_48]
  }
}

/*
==============
BgVehiclePhysics::PostStep
==============
*/

void __fastcall BgVehiclePhysics::PostStep(BgVehiclePhysics *this, double deltaTime)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  _RBX = this;
  this->ClipVelocities(this, &this->m_linearVelocityWs, &this->m_angularVelocityWs);
  __asm { vmovaps xmm2, xmm6; deltaTime }
  BgVehiclePhysics::ProcessComponents(_RBX,  BgVehiclePhysicsComponent::`vcall'{48,{flat}}, *(float *)&_XMM2);
  if ( !BgVehiclePhysics::CheckSanityValues(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1063, ASSERT_TYPE_ASSERT, "( CheckSanityValues() )", "BgVehiclePhysics::PostStep. Wrong values after PostStep") )
    __debugbreak();
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [rbx+2B0h]
    vmovss  dword ptr [rbx+2B0h], xmm0
    vaddss  xmm0, xmm6, dword ptr [rbx+2ACh]
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbx+2ACh], xmm0
  }
}

/*
==============
BgVehiclePhysics::PostStepIntegrate
==============
*/

void __fastcall BgVehiclePhysics::PostStepIntegrate(BgVehiclePhysics *this, double deltaTime, playerState_s *ps)
{
  vec4_t quat; 
  vec4_t out; 

  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  _R14 = this;
  __asm { vmovaps xmm6, xmm1 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 932, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->vehicleState.entity != _R14->m_entityNumber && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 933, ASSERT_TYPE_ASSERT, "( ps->vehicleState.entity == GetEntityNumber() )", "BgVehiclePhysics::PostStep() Error, must be called with a valid client predictive vehicle state") )
    __debugbreak();
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(BgVehiclePhysics *))_R14->PostStep)(_R14);
  ps->vehicleState.velocity.v[0] = _R14->m_linearVelocityWs.v[0];
  ps->vehicleState.velocity.v[1] = _R14->m_linearVelocityWs.v[1];
  ps->vehicleState.velocity.v[2] = _R14->m_linearVelocityWs.v[2];
  ps->vehicleState.angVelocity.v[0] = _R14->m_angularVelocityWs.v[0];
  ps->vehicleState.angVelocity.v[1] = _R14->m_angularVelocityWs.v[1];
  ps->vehicleState.angVelocity.v[2] = _R14->m_angularVelocityWs.v[2];
  AxisToQuat((const tmat33_t<vec3_t> *)&_R14->m_transform, &out);
  __asm { vmovaps xmm1, xmm6; deltaTime }
  BgVehiclePhysics::IntegrateVelocities(_R14, *(float *)&_XMM1, &_R14->m_transform.m[3], &out, &_R14->m_linearVelocityWs, &_R14->m_angularVelocityWs, &ps->vehicleState.origin, &quat);
  QuatToAngles(&quat, &ps->vehicleState.angles);
  __asm { vmovups xmm0, xmmword ptr [rsp+0A8h+quat] }
  _R14->m_manualIntegratedPos.v[0] = ps->vehicleState.origin.v[0];
  _R14->m_manualIntegratedPos.v[1] = ps->vehicleState.origin.v[1];
  _R14->m_manualIntegratedPos.v[2] = ps->vehicleState.origin.v[2];
  __asm
  {
    vmovups xmmword ptr [r14+1E4h], xmm0
    vmovaps xmm6, [rsp+0A8h+var_38]
  }
}

/*
==============
BgVehiclePhysics::ProcessComponents
==============
*/

void __fastcall BgVehiclePhysics::ProcessComponents(BgVehiclePhysics *this, void (__fastcall *functor)(BgVehiclePhysicsComponent *this, float), double deltaTime)
{
  VehiclePhysicsComponentId *m_components; 
  const char *v8; 
  __int64 v9; 
  unsigned int id; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  char *v14; 
  __int64 v17; 
  __int64 v18; 
  BgVehiclePhysicsManager *v20; 

  __asm
  {
    vmovaps [rsp+78h+var_38], xmm6
    vmovaps xmm6, xmm2
  }
  m_components = this->m_components;
  v20 = this->m_vehicleSystem->PhysicsGetVehiclePhysicsManager(this->m_vehicleSystem);
  v8 = "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)";
  v9 = 2i64;
  do
  {
    id = m_components->id;
    if ( m_components->id && BYTE2(id) < 2u )
    {
      if ( BYTE2(id) >= 2u )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 188, ASSERT_TYPE_ASSERT, "(compId.IsValid())", (const char *)&queryFormat, "compId.IsValid()") )
          __debugbreak();
        v8 = "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)";
      }
      v11 = (unsigned __int16)id - 1;
      if ( v11 >= 0x80 )
      {
        LODWORD(v18) = 128;
        LODWORD(v17) = (unsigned __int16)id - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      v12 = 384 * (BYTE2(id) + 2i64 * (unsigned __int16)id);
      v13 = 429320i64;
      if ( v20->m_vehiclePhysicsObjects[v11].buffer[612] )
        v13 = 957704i64;
      v14 = (char *)v20 + v12 + v13;
      if ( *((_DWORD *)v14 + 2) != id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 195, ASSERT_TYPE_ASSERT, "(baseComp->GetId().IsEqual( compId ))", (const char *)&queryFormat, "baseComp->GetId().IsEqual( compId )") )
        __debugbreak();
      __asm { vmovaps xmm1, xmm6 }
      ((void (__fastcall *)(char *, __int64, const char *))functor)(v14, v12, v8);
      if ( v14[32] )
        ((void (__fastcall *)(BGVehicles *, _QWORD))this->m_vehicleSystem->PhysicsDestroyComponent)(this->m_vehicleSystem, m_components->id);
      v8 = "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)";
    }
    ++m_components;
    --v9;
  }
  while ( v9 );
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
BgVehiclePhysics::QueryValuesFromPhysics
==============
*/
void BgVehiclePhysics::QueryValuesFromPhysics(BgVehiclePhysics *this)
{
  unsigned int BodyId; 
  unsigned int v3; 
  vec3_t centerOfMass; 
  tmat33_t<vec3_t> invInertiaWs; 
  tmat44_t<vec4_t> outIwTransform; 

  _RBP = this;
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(_RBP->m_worldId, BodyId) )
  {
    v3 = PhysicsVehicle_GetBodyId(_RBP->m_worldId, _RBP->m_entityNumber);
    Physics_GetRigidBodyLinAngVel((const Physics_WorldId)_RBP->m_worldId, v3, &_RBP->m_linearVelocityWs, &_RBP->m_angularVelocityWs);
    Physics_GetRigidBodyTransform((const Physics_WorldId)_RBP->m_worldId, v3, &outIwTransform);
    MatrixCopy44To43(&outIwTransform, &_RBP->m_transform);
    Physics_GetRigidBodyCenterOfMass(_RBP->m_worldId, v3, &centerOfMass);
    Physics_InverseInertiaFromLocalToWorld((const vec3_t *)&_RBP->m_invInertiaLs, (const tmat33_t<vec3_t> *)&_RBP->m_transform, &invInertiaWs);
    _RBP->m_linearVelocityWs.v[0] = _RBP->m_linearVelocityWs.v[0];
    _RBP->m_linearVelocityWs.v[1] = _RBP->m_linearVelocityWs.v[1];
    _RBP->m_linearVelocityWs.v[2] = _RBP->m_linearVelocityWs.v[2];
    _RBP->m_angularVelocityWs.v[0] = _RBP->m_angularVelocityWs.v[0];
    _RBP->m_angularVelocityWs.v[1] = _RBP->m_angularVelocityWs.v[1];
    _RBP->m_angularVelocityWs.v[2] = _RBP->m_angularVelocityWs.v[2];
    MatrixCopy43(&_RBP->m_transform, &_RBP->m_transform);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0D8h+centerOfMass]
      vmovss  xmm1, dword ptr [rsp+0D8h+centerOfMass+4]
      vmovss  dword ptr [rbp+22Ch], xmm0
      vmovss  xmm0, dword ptr [rsp+0D8h+centerOfMass+8]
      vmovss  dword ptr [rbp+234h], xmm0
      vmovss  dword ptr [rbp+230h], xmm1
    }
    MatrixCopy33(&invInertiaWs, &_RBP->m_invInertiaWs);
    if ( !BgVehiclePhysics::CheckSanityValues(_RBP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 658, ASSERT_TYPE_ASSERT, "( CheckSanityValues() )", "BgVehiclePhysics::UpdatePhysicsSimulationParameters. Invalid values") )
      __debugbreak();
    _RBP->m_manualIntegratedPos.v[0] = _RBP->m_transform.m[3].v[0];
    _RBP->m_manualIntegratedPos.v[1] = _RBP->m_transform.m[3].v[1];
    _RBP->m_manualIntegratedPos.v[2] = _RBP->m_transform.m[3].v[2];
    AxisToQuat((const tmat33_t<vec3_t> *)&_RBP->m_transform, &_RBP->m_manualIntegratedOrientation);
    if ( !BgVehiclePhysics::CheckSanityValues(_RBP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 788, ASSERT_TYPE_ASSERT, "( CheckSanityValues() )", "BgVehiclePhysics::QueryValuesFromPhysics. Invalid values queried from physics") )
      __debugbreak();
  }
}

/*
==============
BgVehiclePhysics::QueryValuesFromPhysics
==============
*/
void BgVehiclePhysics::QueryValuesFromPhysics(BgVehiclePhysics *this, playerState_s *outPs)
{
  unsigned int BodyId; 
  unsigned int v5; 
  tmat44_t<vec4_t> outIwTransform; 

  _RSI = outPs;
  _RDI = this;
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(_RDI->m_worldId, BodyId) )
  {
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 698, ASSERT_TYPE_ASSERT, "( outPs )", "BgVehiclePhysics::QueryValuesFromPhysics() valid player state object is needed") )
      __debugbreak();
    v5 = PhysicsVehicle_GetBodyId(_RDI->m_worldId, _RDI->m_entityNumber);
    Physics_GetRigidBodyLinAngVel((const Physics_WorldId)_RDI->m_worldId, v5, &_RSI->vehicleState.velocity, &_RSI->vehicleState.angVelocity);
    Physics_GetRigidBodyTransform((const Physics_WorldId)_RDI->m_worldId, v5, &outIwTransform);
    Axis4ToAngles(&outIwTransform, &_RSI->vehicleState.angles);
    __asm
    {
      vmovss  xmm2, dword ptr [rsp+88h+outIwTransform+30h]
      vmovss  xmm0, dword ptr [rsp+88h+outIwTransform+34h]
      vmovss  xmm1, dword ptr [rsp+88h+outIwTransform+38h]
      vmovss  dword ptr [rsi+12Ch], xmm2
      vmovss  dword ptr [rsi+130h], xmm0
      vmovss  dword ptr [rsi+134h], xmm1
      vmovss  dword ptr [rdi+1D8h], xmm2
    }
    _RDI->m_manualIntegratedPos.v[1] = _RSI->vehicleState.origin.v[1];
    _RDI->m_manualIntegratedPos.v[2] = _RSI->vehicleState.origin.v[2];
    AnglesToQuat(&_RSI->vehicleState.angles, &_RDI->m_manualIntegratedOrientation);
    if ( !BgVehiclePhysics::CheckSanityValues(_RDI, &_RSI->vehicleState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 719, ASSERT_TYPE_ASSERT, "( CheckSanityValues( outPs->vehicleState ) )", "BgVehiclePhysics::QueryValuesFromPhysics. Invalid target vehicleState") )
      __debugbreak();
  }
}

/*
==============
BgVehiclePhysics::QueryValuesFromPhysics
==============
*/
void BgVehiclePhysics::QueryValuesFromPhysics(BgVehiclePhysics *this, usercmd_s *outCmd, bool clientGeoLoaded)
{
  unsigned int BodyId; 
  int m_entityNumber; 
  Physics_WorldId m_worldId; 
  unsigned int v10; 
  vec3_t angles; 
  tmat44_t<vec4_t> outIwTransform; 

  _RBX = outCmd;
  if ( !outCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 725, ASSERT_TYPE_ASSERT, "(outCmd)", (const char *)&queryFormat, "outCmd") )
    __debugbreak();
  if ( ((this->m_netcodeType - 1) & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 726, ASSERT_TYPE_ASSERT, "(RequiresFillUserCmd())", (const char *)&queryFormat, "RequiresFillUserCmd()") )
    __debugbreak();
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) && clientGeoLoaded )
  {
    m_entityNumber = this->m_entityNumber;
    m_worldId = this->m_worldId;
    __asm { vmovaps [rsp+0B8h+var_28], xmm6 }
    v10 = PhysicsVehicle_GetBodyId(m_worldId, m_entityNumber);
    Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, v10, &outIwTransform);
    Axis4ToAngles(&outIwTransform, &angles);
    __asm
    {
      vmovss  xmm5, cs:__real@43360b61
      vmovss  xmm4, cs:__real@3f000000
      vmovss  xmm0, dword ptr [rsp+0B8h+outIwTransform+30h]
      vmovss  xmm1, dword ptr [rsp+0B8h+outIwTransform+34h]
      vxorps  xmm6, xmm6, xmm6
      vmovss  dword ptr [rbx+0C4h], xmm1
      vmulss  xmm1, xmm5, dword ptr [rsp+0B8h+angles+4]
      vmovss  dword ptr [rbx+0C0h], xmm0
      vmovss  xmm0, dword ptr [rsp+0B8h+outIwTransform+38h]
      vmovss  dword ptr [rbx+0C8h], xmm0
      vmulss  xmm0, xmm5, dword ptr [rsp+0B8h+angles+8]
      vaddss  xmm2, xmm0, xmm4
      vroundss xmm3, xmm6, xmm2, 1
      vcvttss2si ecx, xmm3
      vaddss  xmm3, xmm1, xmm4
      vroundss xmm1, xmm6, xmm3, 1
      vcvttss2si edx, xmm1
      vmulss  xmm1, xmm5, dword ptr [rsp+0B8h+angles]
      vaddss  xmm3, xmm1, xmm4
      vroundss xmm1, xmm6, xmm3, 1
      vmovaps xmm6, [rsp+0B8h+var_28]
      vcvttss2si eax, xmm1
    }
  }
  else
  {
    LOWORD(_EAX) = clientGeoLoaded - 1;
    LOWORD(_EDX) = _EAX;
    *(_QWORD *)&_RBX->vehOrgX = 0i64;
    _RBX->vehOrgZ = 0.0;
    LOWORD(_ECX) = _EAX;
  }
  _RBX->vehAngles[0] = _EAX;
  _RBX->vehAngles[1] = _EDX;
  _RBX->vehAngles[2] = _ECX;
}

/*
==============
BgVehiclePhysics::QueryValuesFromPlayerState
==============
*/
void BgVehiclePhysics::QueryValuesFromPlayerState(BgVehiclePhysics *this, const playerState_s *ps)
{
  unsigned int BodyId; 
  unsigned int v5; 
  vec3_t centerOfMass; 
  vec3_t position; 
  vec4_t orientation; 
  tmat43_t<vec3_t> result; 
  tmat33_t<vec3_t> invInertiaWs; 

  _RSI = this;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 892, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->vehicleState.entity != _RSI->m_entityNumber && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 893, ASSERT_TYPE_ASSERT, "( ps->vehicleState.entity == GetEntityNumber() )", "BgVehiclePhysics::PreStep() Error, must be called with a valid client predictive vehicle state") )
    __debugbreak();
  if ( !BgVehiclePhysics::CheckSanityValues(_RSI, &ps->vehicleState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 895, ASSERT_TYPE_ASSERT, "( CheckSanityValues( ps->vehicleState ) )", "BgVehiclePhysics::QueryValuesFromPlayerState. Invalid vehicleState") )
    __debugbreak();
  BodyId = PhysicsVehicle_GetBodyId(_RSI->m_worldId, _RSI->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(_RSI->m_worldId, BodyId) )
  {
    AnglesAndOriginToMatrix43(&ps->vehicleState.angles, &ps->vehicleState.origin, &result);
    v5 = PhysicsVehicle_GetBodyId(_RSI->m_worldId, _RSI->m_entityNumber);
    Physics_GetRigidBodyCenterOfMass(_RSI->m_worldId, v5, &centerOfMass);
    Physics_GetRigidBodyTransform((const Physics_WorldId)_RSI->m_worldId, v5, &position, &orientation);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0D8h+centerOfMass]
      vsubss  xmm1, xmm0, dword ptr [rsp+0D8h+position]
      vaddss  xmm2, xmm1, dword ptr [rbp+12Ch]
      vmovss  xmm0, dword ptr [rsp+0D8h+centerOfMass+4]
      vsubss  xmm1, xmm0, dword ptr [rsp+0D8h+position+4]
      vmovss  xmm0, dword ptr [rsp+0D8h+centerOfMass+8]
      vmovss  dword ptr [rsp+0D8h+centerOfMass], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbp+130h]
      vsubss  xmm1, xmm0, dword ptr [rsp+0D8h+position+8]
      vmovss  dword ptr [rsp+0D8h+centerOfMass+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbp+134h]
      vmovss  dword ptr [rsp+0D8h+centerOfMass+8], xmm2
    }
    Physics_InverseInertiaFromLocalToWorld((const vec3_t *)&_RSI->m_invInertiaLs, (const tmat33_t<vec3_t> *)&result, &invInertiaWs);
    _RSI->m_linearVelocityWs.v[0] = ps->vehicleState.velocity.v[0];
    _RSI->m_linearVelocityWs.v[1] = ps->vehicleState.velocity.v[1];
    _RSI->m_linearVelocityWs.v[2] = ps->vehicleState.velocity.v[2];
    _RSI->m_angularVelocityWs.v[0] = ps->vehicleState.angVelocity.v[0];
    _RSI->m_angularVelocityWs.v[1] = ps->vehicleState.angVelocity.v[1];
    _RSI->m_angularVelocityWs.v[2] = ps->vehicleState.angVelocity.v[2];
    MatrixCopy43(&result, &_RSI->m_transform);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0D8h+centerOfMass]
      vmovss  xmm1, dword ptr [rsp+0D8h+centerOfMass+4]
      vmovss  dword ptr [rsi+22Ch], xmm0
      vmovss  xmm0, dword ptr [rsp+0D8h+centerOfMass+8]
      vmovss  dword ptr [rsi+234h], xmm0
      vmovss  dword ptr [rsi+230h], xmm1
    }
    MatrixCopy33(&invInertiaWs, &_RSI->m_invInertiaWs);
    if ( !BgVehiclePhysics::CheckSanityValues(_RSI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 658, ASSERT_TYPE_ASSERT, "( CheckSanityValues() )", "BgVehiclePhysics::UpdatePhysicsSimulationParameters. Invalid values") )
      __debugbreak();
  }
}

/*
==============
BgVehiclePhysics::Reset
==============
*/
void BgVehiclePhysics::Reset(BgVehiclePhysics *this)
{
  VehiclePhysicsComponentId *m_components; 
  unsigned int i; 
  unsigned int id; 
  BgVehiclePhysics_vtbl *v5; 

  m_components = this->m_components;
  for ( i = 0; i < 2; ++i )
  {
    id = m_components->id;
    if ( m_components->id && (id & 0xFF0000) < 0x20000 )
    {
      if ( !this->m_vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 217, ASSERT_TYPE_ASSERT, "(m_vehicleSystem)", (const char *)&queryFormat, "m_vehicleSystem") )
        __debugbreak();
      ((void (__fastcall *)(BGVehicles *, _QWORD))this->m_vehicleSystem->PhysicsDestroyComponent)(this->m_vehicleSystem, id);
    }
    ++m_components;
  }
  this->m_inUse = 0;
  this->m_vehicleSystem = NULL;
  this->m_vehicleId = 0;
  this->m_worldId = PHYSICS_WORLD_ID_INVALID;
  *(_WORD *)&this->m_vehicleType = 2830;
  this->m_vehicleDefIndex = 128;
  this->m_vehicleAnimProfile = VEH_ANIMPROFILE_COUNT;
  *(_QWORD *)&this->m_entityNumber = 2047i64;
  *(_DWORD *)&this->m_playerControlled = 256;
  this->m_minTimeDynamic = 10.0;
  this->m_netcodeType = VEH_NETCODE_CLIENT_PRED_SB;
  *(_QWORD *)this->m_driverEnterLs.v = 0i64;
  this->m_driverEnterLs.v[2] = 0.0;
  v5 = this->__vftable;
  this->m_driverEntNum = 2047;
  this->m_holdHorn = 0;
  v5->ResetInputControls(this);
  *(_QWORD *)this->m_playerViewAngles.v = 0i64;
  this->m_playerViewAngles.v[2] = 0.0;
  *(_QWORD *)this->m_linearVelocityWs.v = 0i64;
  *(_QWORD *)&this->m_linearVelocityWs.z = 0i64;
  *(_QWORD *)&this->m_angularVelocityWs.y = 0i64;
  *(_QWORD *)this->m_surfaceVelocity.v = 0i64;
  this->m_surfaceVelocity.v[2] = 0.0;
  MatrixClear43(&this->m_transform);
  this->m_massFactorOnContact.v[0] = -1.0;
  this->m_massFactorOnContact.v[1] = -1.0;
  this->m_massFactorOnContact.v[2] = -1.0;
  this->m_massFactorOnContact.v[3] = -1.0;
  *(_QWORD *)(&this->m_invInertiaLs.xyz + 1) = 0i64;
  *(_QWORD *)this->m_centerOfMassWs.v = 0i64;
  *(_QWORD *)&this->m_centerOfMassWs.z = 0i64;
  *(_QWORD *)this->m_centerOfMassOffsetLs.v = 0i64;
  *(_QWORD *)&this->m_centerOfMassOffsetLs.z = 0i64;
  *(_QWORD *)&this->m_centerOfMassOffsetOriginalLs.y = 0i64;
  *(_QWORD *)&this->m_invInertiaLs.xyz.y = 0i64;
  MatrixClear33(&this->m_invInertiaWs);
  *(_QWORD *)this->m_manualIntegratedPos.v = 0i64;
  *(_QWORD *)&this->m_manualIntegratedPos.z = 0i64;
  *(_QWORD *)&this->m_manualIntegratedOrientation.xyz.y = 0i64;
  *(_QWORD *)(&this->m_manualIntegratedOrientation.xyz + 1) = 1065353216i64;
  *(_QWORD *)this->m_history.m_lastPosition.v = 0i64;
  *(_QWORD *)&this->m_history.m_lastPosition.z = 0i64;
  *(_QWORD *)&this->m_history.m_lastAngles.y = 0i64;
  *(_QWORD *)this->m_history.m_lastLinearVel.v = 0i64;
  *(_QWORD *)&this->m_history.m_lastLinearVel.z = 0i64;
  *(_QWORD *)&this->m_history.m_lastAngularVel.y = 0i64;
  *(_QWORD *)this->m_history.m_linearAccel.v = 0i64;
  *(_QWORD *)&this->m_history.m_linearAccel.z = 0i64;
  *(_QWORD *)&this->m_history.m_angularAccel.y = 0i64;
  this->m_timeToAcceptInputOnStart = 0.0;
  this->m_topSpeedForward.v[1] = 0.0;
  this->m_pmoveObject = 0;
  *(_QWORD *)&this->m_pmoveLastCmdTime = 0i64;
  *(_QWORD *)&this->m_pmoveLastCmdPos.y = 0i64;
  *(_QWORD *)this->m_clientAuthOrg.v = 0i64;
  *(_QWORD *)&this->m_clientAuthOrg.z = 0i64;
  *(_QWORD *)&this->m_clientAuthAngles.y = 0i64;
  *(_QWORD *)this->m_pmoveTargetPosition.v = 0i64;
  this->m_pmoveTargetPosition.v[2] = 0.0;
  *(_QWORD *)&this->m_clientDistanceXYFromPsAvg = 0i64;
  this->m_clientGeoLoaded = 1;
  this->m_clientGeoTimeToCheck = 0.0;
  this->m_callbackScript = 0;
  this->m_timeSinceLastCollision = 10000.0;
  this->m_timeSinceLastCollisionBody = 10000.0;
  *(_QWORD *)this->m_lastCollisionBodyPosLs.v = 0i64;
  *(_QWORD *)&this->m_lastCollisionBodyPosLs.z = 0i64;
  *(_QWORD *)&this->m_lastCollisionPosLs.y = 0i64;
  this->m_lastColliderBodyId = 0xFFFFFF;
  *(_QWORD *)this->m_deferActionMgr.actionBits = 0i64;
  *(_QWORD *)&this->m_deferActionMgr.m_deferredAngularImpWs.y = 0i64;
  *(_QWORD *)this->m_deferActionMgr.m_deferredAngularPointWs.v = 0i64;
  this->m_deferActionMgr.m_deferredAngularPointWs.v[2] = 0.0;
  *(_QWORD *)&this->m_linkedPlayers.playerCount = 0i64;
  this->m_linkedPlayers.enabled = 0;
  this->m_linkedPlayers.weightFactor = 0.0;
  this->m_defName = (char *)&queryFormat.fmt + 3;
}

/*
==============
BgVehiclePhysicsComponent::Reset
==============
*/
void BgVehiclePhysicsComponent::Reset(BgVehiclePhysicsComponent *this)
{
  this->m_vehicleSystem = NULL;
  this->m_id.id = 0;
  this->m_autoRemove = 0;
}

/*
==============
BgVehiclePhysicsControls::Reset
==============
*/
void BgVehiclePhysicsControls::Reset(BgVehiclePhysicsControls *this)
{
  BgVehiclePhysicsControls::ValuePolicy DefaultPolicy; 

  *(_QWORD *)this->playerValues = 0i64;
  *(_QWORD *)&this->playerValues[2] = 0i64;
  *(_QWORD *)&this->playerValues[4] = 0i64;
  *(_QWORD *)&this->playerValues[6] = 0i64;
  *(_QWORD *)this->externalValues = 0i64;
  *(_QWORD *)&this->externalValues[2] = 0i64;
  *(_QWORD *)&this->externalValues[4] = 0i64;
  *(_QWORD *)&this->externalValues[6] = 0i64;
  DefaultPolicy = this->DefaultPolicy;
  this->valuePolicy[0] = DefaultPolicy;
  this->valuePolicy[1] = DefaultPolicy;
  this->valuePolicy[2] = DefaultPolicy;
  this->valuePolicy[3] = DefaultPolicy;
  this->valuePolicy[4] = DefaultPolicy;
  this->valuePolicy[5] = DefaultPolicy;
  this->valuePolicy[6] = DefaultPolicy;
  this->valuePolicy[7] = DefaultPolicy;
  this->playerEnabledBits[0] = -1;
  this->externalEnabledBits[0] = 0;
  this->policyWeight = this->DefaultPolicyWeight;
}

/*
==============
BgVehiclePhysicsDeferredActionManager::Reset
==============
*/
void BgVehiclePhysicsDeferredActionManager::Reset(BgVehiclePhysicsDeferredActionManager *this)
{
  *(_OWORD *)this->actionBits = 0ui64;
  *(_QWORD *)this->m_deferredAngularPointWs.v = 0i64;
  this->m_deferredAngularPointWs.v[2] = 0.0;
}

/*
==============
BgVehiclePhysics::ResetInputControls
==============
*/
void BgVehiclePhysics::ResetInputControls(BgVehiclePhysics *this)
{
  BgVehiclePhysicsControls::ValuePolicy DefaultPolicy; 

  *(_QWORD *)this->m_controls.playerValues = 0i64;
  *(_QWORD *)&this->m_controls.playerValues[2] = 0i64;
  *(_QWORD *)&this->m_controls.playerValues[4] = 0i64;
  *(_QWORD *)&this->m_controls.playerValues[6] = 0i64;
  *(_QWORD *)this->m_controls.externalValues = 0i64;
  *(_QWORD *)&this->m_controls.externalValues[2] = 0i64;
  *(_QWORD *)&this->m_controls.externalValues[4] = 0i64;
  *(_QWORD *)&this->m_controls.externalValues[6] = 0i64;
  DefaultPolicy = this->m_controls.DefaultPolicy;
  this->m_controls.valuePolicy[0] = DefaultPolicy;
  this->m_controls.valuePolicy[1] = DefaultPolicy;
  this->m_controls.valuePolicy[2] = DefaultPolicy;
  this->m_controls.valuePolicy[3] = DefaultPolicy;
  this->m_controls.valuePolicy[4] = DefaultPolicy;
  this->m_controls.valuePolicy[5] = DefaultPolicy;
  this->m_controls.valuePolicy[6] = DefaultPolicy;
  this->m_controls.valuePolicy[7] = DefaultPolicy;
  this->m_controls.playerEnabledBits[0] = -1;
  this->m_controls.externalEnabledBits[0] = 0;
  this->m_controls.policyWeight = this->m_controls.DefaultPolicyWeight;
}

/*
==============
BgVehiclePhysicsComponent::Resume
==============
*/
void BgVehiclePhysicsComponent::Resume(BgVehiclePhysicsComponent *this)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rcx+18h]
  }
  this->m_pauseTime = -0.001;
}

/*
==============
BgVehiclePhysicsComponent::ScrNotify
==============
*/
void BgVehiclePhysicsComponent::ScrNotify(BgVehiclePhysicsComponent *this, scr_string_t str)
{
  int m_entityNumber; 
  scrContext_t *v5; 
  LocalClientNum_t localClientNum; 

  m_entityNumber = BgVehiclePhysicsComponent::GetOwner(this)->m_entityNumber;
  BgVehiclePhysicsComponent::GetOwner(this);
  v5 = ScriptContext_Server();
  localClientNum = this->m_vehicleSystem->GetLocalClientNum(this->m_vehicleSystem);
  Scr_NotifyNum(v5, m_entityNumber, ENTITY_CLASS_GENTITY, str, 0, localClientNum);
}

/*
==============
BgVehiclePhysicsComponent::ScrNotifyVehicleNode
==============
*/
void BgVehiclePhysicsComponent::ScrNotifyVehicleNode(BgVehiclePhysicsComponent *this, int nodeEntNum, scr_string_t str)
{
  scrContext_t *v6; 
  BgVehiclePhysics *Owner; 
  LocalClientNum_t localClientNum; 

  BgVehiclePhysicsComponent::GetOwner(this);
  v6 = ScriptContext_Server();
  Owner = BgVehiclePhysicsComponent::GetOwner(this);
  Scr_AddEntityNum(v6, Owner->m_entityNumber, ENTITY_CLASS_GENTITY);
  localClientNum = this->m_vehicleSystem->GetLocalClientNum(this->m_vehicleSystem);
  Scr_NotifyNum(v6, nodeEntNum, ENTITY_CLASS_VEHICLENODE, str, 1u, localClientNum);
}

/*
==============
BgVehiclePhysics::SetActivatedAlways
==============
*/
void BgVehiclePhysics::SetActivatedAlways(BgVehiclePhysics *this)
{
  unsigned int BodyId; 
  int m_entityNumber; 
  Physics_WorldId m_worldId; 
  unsigned int v5; 
  bool active; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    m_entityNumber = this->m_entityNumber;
    m_worldId = this->m_worldId;
    active = 1;
    v5 = PhysicsVehicle_GetBodyId(m_worldId, m_entityNumber);
    PhysicsVehicle_SetActivationControl(this->m_worldId, v5, &active);
  }
}

/*
==============
BgVehiclePhysics::SetActivatedAuto
==============
*/
void BgVehiclePhysics::SetActivatedAuto(BgVehiclePhysics *this)
{
  unsigned int BodyId; 
  unsigned int v3; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    v3 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    PhysicsVehicle_SetActivationControl(this->m_worldId, v3, NULL);
  }
}

/*
==============
BgVehiclePhysics::SetAngularVelocity
==============
*/
void BgVehiclePhysics::SetAngularVelocity(BgVehiclePhysics *this, const vec3_t *angVel, bool forceRigidBody)
{
  unsigned int BodyId; 
  unsigned int v6; 

  this->m_angularVelocityWs = *angVel;
  if ( forceRigidBody )
  {
    BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
    {
      v6 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      Physics_SetRigidBodyAngVel((const Physics_WorldId)this->m_worldId, v6, angVel);
    }
  }
}

/*
==============
BgVehiclePhysics::SetDeactivatedAlways
==============
*/
void BgVehiclePhysics::SetDeactivatedAlways(BgVehiclePhysics *this)
{
  unsigned int BodyId; 
  int m_entityNumber; 
  Physics_WorldId m_worldId; 
  unsigned int v5; 
  bool active; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    m_entityNumber = this->m_entityNumber;
    m_worldId = this->m_worldId;
    active = 0;
    v5 = PhysicsVehicle_GetBodyId(m_worldId, m_entityNumber);
    PhysicsVehicle_SetActivationControl(this->m_worldId, v5, &active);
  }
}

/*
==============
BgVehiclePhysics::SetDynamic
==============
*/

void __fastcall BgVehiclePhysics::SetDynamic(BgVehiclePhysics *this, double minTimeDynamic)
{
  unsigned int BodyId; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 

  _RDI = this;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(_RDI->m_worldId, BodyId) )
  {
    v6 = PhysicsVehicle_GetBodyId(_RDI->m_worldId, _RDI->m_entityNumber);
    if ( PhysicsVehicle_IsPhysicsBodyIdValid(_RDI->m_worldId, v6) )
    {
      v7 = PhysicsVehicle_GetBodyId(_RDI->m_worldId, _RDI->m_entityNumber);
      if ( Physics_IsRigidBodyKeyframed(_RDI->m_worldId, v7) )
      {
        v8 = PhysicsVehicle_GetBodyId(_RDI->m_worldId, _RDI->m_entityNumber);
        Physics_SetRigidBodyDynamic(_RDI->m_worldId, v8);
        __asm { vmovss  xmm2, dword ptr [rdi+260h]; mass }
        Physics_SetRigidBodyMass(_RDI->m_worldId, v8, *(float *)&_XMM2);
        Physics_SetRigidBodyInverseInertiaLocal(_RDI->m_worldId, v8, &_RDI->m_invInertiaLs);
        BgVehiclePhysics::OffsetCenterOfMass(_RDI, &_RDI->m_centerOfMassOffsetOriginalLs, 1);
        Physics_ActivateBody(_RDI->m_worldId, v8);
        Physics_SetRigidBodyLinVel((const Physics_WorldId)_RDI->m_worldId, v8, &_RDI->m_history.m_lastLinearVel);
      }
    }
  }
  __asm
  {
    vmovss  dword ptr [rdi+38h], xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
}

/*
==============
BgVehiclePhysics::SetEnableInputControl
==============
*/
void BgVehiclePhysics::SetEnableInputControl(BgVehiclePhysics *this, bool status)
{
  this->m_inputControlsEnabled = status;
}

/*
==============
BgVehiclePhysics::SetKeyframeTransform
==============
*/
void BgVehiclePhysics::SetKeyframeTransform(BgVehiclePhysics *this, const vec3_t *position, const vec3_t *angles)
{
  unsigned int BodyId; 
  unsigned int v8; 
  unsigned int v9; 
  bool IsPhysicsBodyIdValid; 
  unsigned int v11; 
  Physics_WorldId m_worldId; 
  vec3_t angVel; 
  vec3_t linVel; 
  vec4_t quat; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    v8 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    AnglesToQuat(angles, &quat);
    v9 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    IsPhysicsBodyIdValid = PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, v9);
    if ( IsPhysicsBodyIdValid )
    {
      v11 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      IsPhysicsBodyIdValid = Physics_IsRigidBodyKeyframed(this->m_worldId, v11);
    }
    Physics_WarpRigidBodyTo((const Physics_WorldId)this->m_worldId, v8, position, &quat, !IsPhysicsBodyIdValid, 0);
    m_worldId = this->m_worldId;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+98h+angVel], xmm0
      vmovss  dword ptr [rsp+98h+angVel+4], xmm0
      vmovss  dword ptr [rsp+98h+angVel+8], xmm0
      vmovss  dword ptr [rsp+98h+linVel], xmm0
      vmovss  dword ptr [rsp+98h+linVel+4], xmm0
      vmovss  dword ptr [rsp+98h+linVel+8], xmm0
    }
    Physics_SetRigidBodyLinAngVel(m_worldId, v8, &linVel, &angVel);
    *(_QWORD *)&this->m_clientDistanceXYFromPsAvg = 0i64;
  }
  *(_QWORD *)this->m_angularVelocityWs.v = 0i64;
  this->m_angularVelocityWs.v[2] = 0.0;
  *(_QWORD *)this->m_linearVelocityWs.v = 0i64;
  this->m_linearVelocityWs.v[2] = 0.0;
  AnglesAndOriginToMatrix43(angles, position, &this->m_transform);
}

/*
==============
BgVehiclePhysics::SetKeyframed
==============
*/

void __fastcall BgVehiclePhysics::SetKeyframed(BgVehiclePhysics *this, bool now, double _XMM2_8)
{
  unsigned int BodyId; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v10; 

  _RDI = this;
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(_RDI->m_worldId, BodyId) )
  {
    v7 = PhysicsVehicle_GetBodyId(_RDI->m_worldId, _RDI->m_entityNumber);
    if ( !PhysicsVehicle_IsPhysicsBodyIdValid(_RDI->m_worldId, v7) || (v8 = PhysicsVehicle_GetBodyId(_RDI->m_worldId, _RDI->m_entityNumber), !Physics_IsRigidBodyKeyframed(_RDI->m_worldId, v8)) )
    {
      __asm
      {
        vmovaps [rsp+38h+var_18], xmm6
        vxorps  xmm6, xmm6, xmm6
      }
      if ( !now )
        __asm { vcomiss xmm6, dword ptr [rdi+38h] }
      v10 = PhysicsVehicle_GetBodyId(_RDI->m_worldId, _RDI->m_entityNumber);
      Physics_SetRigidBodyKeyframed(_RDI->m_worldId, v10);
      __asm { vxorps  xmm2, xmm2, xmm2; mass }
      Physics_SetRigidBodyMass(_RDI->m_worldId, v10, *(float *)&_XMM2);
      *(_QWORD *)_RDI->m_linearVelocityWs.v = 0i64;
      *(_QWORD *)&_RDI->m_linearVelocityWs.z = 0i64;
      *(_QWORD *)&_RDI->m_angularVelocityWs.y = 0i64;
      Physics_SetRigidBodyLinAngVel((const Physics_WorldId)_RDI->m_worldId, v10, &vec3_origin, &vec3_origin);
      _RDI->m_minTimeDynamic = -1.0;
      __asm { vmovaps xmm6, [rsp+38h+var_18] }
    }
  }
}

/*
==============
BgVehiclePhysics::SetLinearVelocity
==============
*/
void BgVehiclePhysics::SetLinearVelocity(BgVehiclePhysics *this, const vec3_t *linVelWs, bool forceRigidBody)
{
  unsigned int BodyId; 
  unsigned int v6; 

  this->m_linearVelocityWs = *linVelWs;
  if ( forceRigidBody )
  {
    BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
    {
      v6 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      Physics_SetRigidBodyLinVel((const Physics_WorldId)this->m_worldId, v6, linVelWs);
    }
  }
}

/*
==============
BgVehiclePhysics::SetLinearVelocityLocalSpace
==============
*/
void BgVehiclePhysics::SetLinearVelocityLocalSpace(BgVehiclePhysics *this, const vec3_t *linVelLs, bool forceRigidBody)
{
  unsigned int BodyId; 
  unsigned int v9; 
  vec3_t out; 

  _RDI = this;
  AxisTransformVec3((const tmat33_t<vec3_t> *)&this->m_transform, linVelLs, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+out]
    vmovss  xmm1, dword ptr [rsp+48h+out+4]
    vmovss  dword ptr [rdi+1A4h], xmm0
    vmovss  xmm0, dword ptr [rsp+48h+out+8]
    vmovss  dword ptr [rdi+1ACh], xmm0
    vmovss  dword ptr [rdi+1A8h], xmm1
  }
  if ( forceRigidBody )
  {
    BodyId = PhysicsVehicle_GetBodyId(_RDI->m_worldId, _RDI->m_entityNumber);
    if ( PhysicsVehicle_IsPhysicsBodyIdValid(_RDI->m_worldId, BodyId) )
    {
      v9 = PhysicsVehicle_GetBodyId(_RDI->m_worldId, _RDI->m_entityNumber);
      Physics_SetRigidBodyLinVel((const Physics_WorldId)_RDI->m_worldId, v9, &out);
    }
  }
}

/*
==============
BgVehiclePhysics::SetPlayerControlled
==============
*/
void BgVehiclePhysics::SetPlayerControlled(BgVehiclePhysics *this, bool status)
{
  if ( status == this->m_playerControlled )
  {
    this->m_playerControlled = status;
  }
  else
  {
    this->ResetInputControls(this);
    if ( this->m_playerControlled )
    {
      if ( !status )
        this->StopPlayerControlling(this);
      goto LABEL_5;
    }
    if ( !status )
    {
LABEL_5:
      this->m_playerControlled = status;
      return;
    }
    this->StartPlayerControlling(this);
    this->m_playerControlled = status;
  }
}

/*
==============
BgVehiclePhysics::SetSurfaceVelocity
==============
*/
void BgVehiclePhysics::SetSurfaceVelocity(BgVehiclePhysics *this, const vec3_t *surfVel)
{
  this->m_surfaceVelocity = *surfVel;
}

/*
==============
BgVehiclePhysics::Setup
==============
*/
bool BgVehiclePhysics::Setup(BgVehiclePhysics *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  const char *name; 
  bool result; 
  __int64 v13; 

  this->Reset(this);
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 74, ASSERT_TYPE_ASSERT, "( worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST )", "BgVehiclePhysics::Setup: Invalid world index: %d", worldId) )
    __debugbreak();
  if ( vehicleId - 1 > 0x7F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 75, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehicleId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehicleId )") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 76, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( vehDef->type < VEH_TREADED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 77, ASSERT_TYPE_ASSERT, "( BGVehicles::PhysicsIsTypeSupported( vehDef->type ) )", "BgVehiclePhysics::Setup(). Only for physics enabled vehicles. Consider update BGVehicles::PhysicsIsTypeSupported().") )
    __debugbreak();
  if ( !vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 78, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  if ( vehDefIndex >= 0x80 )
  {
    LODWORD(v13) = vehDefIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 79, ASSERT_TYPE_ASSERT, "(unsigned)( vehDefIndex ) < (unsigned)( 128 )", "vehDefIndex doesn't index MAX_VEHICLE_DEF_GAME_CACHE\n\t%i not in [0, %i)", v13, 128) )
      __debugbreak();
  }
  name = (char *)&queryFormat.fmt + 3;
  this->m_entityNumber = entityNumber;
  this->m_worldId = worldId;
  this->m_vehicleId = vehicleId;
  this->m_inUse = 1;
  this->m_vehicleType = vehDef->type;
  this->m_vehicleGameProfile = vehDef->vehiclePhysicsDef.physics_gameProfile;
  this->m_vehicleAnimProfile = vehDef->vehiclePhysicsDef.physics_animProfile;
  this->m_vehicleSystem = vehicleSystem;
  this->m_netcodeType = vehDef->vehiclePhysicsDef.physics_netcodeType;
  this->m_timeToAcceptInputOnStart = vehDef->vehiclePhysicsDef.physics_timeToAcceptInputOnStart;
  this->m_vehicleDefIndex = vehDefIndex;
  this->m_topSpeedForward.v[0] = vehDef->topSpeed;
  this->m_topSpeedForward.v[1] = vehDef->topSpeed;
  *(_QWORD *)this->m_topAngularSpeedLs.v = 0i64;
  this->m_topAngularSpeedLs.v[2] = 0.0;
  this->m_linkedPlayers.weightFactor = vehDef->vehiclePhysicsDef.physics_playersWeightFactor;
  if ( vehDef->name )
    name = vehDef->name;
  result = 1;
  this->m_defName = name;
  return result;
}

/*
==============
BgVehiclePhysicsComponent::Setup
==============
*/
__int64 BgVehiclePhysicsComponent::Setup(BgVehiclePhysicsComponent *this, BGVehicles *vehicleSystem, VehiclePhysicsComponentId id)
{
  __int64 result; 

  if ( !vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1598, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  if ( (!id.id || (id.id & 0xFF0000) >= 0x20000) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1599, ASSERT_TYPE_ASSERT, "(id.IsValid())", (const char *)&queryFormat, "id.IsValid()") )
    __debugbreak();
  result = 1i64;
  *(_QWORD *)&this->m_pauseTime = 0i64;
  this->m_vehicleSystem = vehicleSystem;
  this->m_id = id;
  this->m_autoRemove = 0;
  return result;
}

/*
==============
BgVehiclePhysics::Simulate
==============
*/

void __fastcall BgVehiclePhysics::Simulate(BgVehiclePhysics *this, const usercmd_s *cmd, const playerState_s *ps, double deltaTime, const BgVehiclePhysics *pmoveObj)
{
  const char *v11; 
  unsigned int BodyId; 
  unsigned int v15; 
  __int64 v18; 
  unsigned int v22; 
  unsigned int v23; 
  vec3_t angVel; 
  vec3_t linVel; 

  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps xmm6, xmm3
  }
  _RBX = this;
  v11 = j_va("BgVehiclePhysics::Simulate - %s", g_vehicleTypeNames[(unsigned __int8)this->m_vehicleType]);
  Sys_ProfBeginNamedEvent(0xFFFF0000, v11);
  if ( cmd && ps )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x20u) )
    {
      _RBX->ResetInputControls(_RBX);
      _RBX->m_inputControlsEnabled = 0;
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm0, dword ptr [rbx+0C4h]
      }
      _RBX->m_inputControlsEnabled = 1;
      _RBX->UpdatePlayerInputControls(_RBX, cmd, ps);
    }
  }
  BgVehiclePhysics::QueryValuesFromPhysics(_RBX);
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(BgVehiclePhysics *))_RBX->DeactivationLogic)(_RBX);
  BodyId = PhysicsVehicle_GetBodyId(_RBX->m_worldId, _RBX->m_entityNumber);
  if ( !PhysicsVehicle_IsPhysicsBodyIdValid(_RBX->m_worldId, BodyId) || (v15 = PhysicsVehicle_GetBodyId(_RBX->m_worldId, _RBX->m_entityNumber), !Physics_IsRigidBodyKeyframed(_RBX->m_worldId, v15)) )
  {
    __asm { vmovaps xmm1, xmm6 }
    ((void (__fastcall *)(BgVehiclePhysics *))_RBX->Step)(_RBX);
    __asm { vmovaps xmm1, xmm6 }
    ((void (__fastcall *)(BgVehiclePhysics *))_RBX->PostStep)(_RBX);
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+1A4h]
      vmovsd  qword ptr [rsp+0A8h+linVel], xmm0
    }
    linVel.v[2] = _RBX->m_linearVelocityWs.v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+1B0h]
      vmovsd  qword ptr [rsp+0A8h+angVel], xmm0
    }
    angVel.v[2] = _RBX->m_angularVelocityWs.v[2];
    if ( pmoveObj && _RBX->m_playerControlled )
    {
      __asm { vmovaps xmm1, xmm6 }
      ((void (__fastcall *)(BgVehiclePhysics *, __int64, const BgVehiclePhysics *, vec3_t *, vec3_t *))_RBX->BlendToPmoveObject)(_RBX, v18, pmoveObj, &linVel, &angVel);
    }
    v22 = PhysicsVehicle_GetBodyId(_RBX->m_worldId, _RBX->m_entityNumber);
    if ( PhysicsVehicle_IsPhysicsBodyIdValid(_RBX->m_worldId, v22) )
    {
      v23 = PhysicsVehicle_GetBodyId(_RBX->m_worldId, _RBX->m_entityNumber);
      Physics_SetRigidBodyLinAngVel((const Physics_WorldId)_RBX->m_worldId, v23, &linVel, &angVel);
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0C4h]
    vsubss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbx+0C4h], xmm1
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
}

/*
==============
BgVehiclePhysics::SimulateClientKeyframe
==============
*/

void __fastcall BgVehiclePhysics::SimulateClientKeyframe(BgVehiclePhysics *this, const usercmd_s *cmd, const playerState_s *ps, double deltaTime)
{
  unsigned int BodyId; 
  unsigned int v10; 
  BgVehiclePhysics_vtbl *v11; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( this->m_worldId == PHYSICS_WORLD_ID_FIRST && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1335, ASSERT_TYPE_ASSERT, "( GetWorldId() != PHYSICS_WORLD_ID_SERVER_MAIN )", "BgVehiclePhysics::SimulateClientKeyframe() should be called on client") )
    __debugbreak();
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( !PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) || (v10 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber), !Physics_IsRigidBodyKeyframed(this->m_worldId, v10)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1336, ASSERT_TYPE_ASSERT, "( IsKeyframed() )", "BgVehiclePhysics::SimulateClientKeyframe() should be called on keyframed vehicles") )
      __debugbreak();
  }
  if ( !Physics_IsPredictiveWorld(this->m_worldId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1337, ASSERT_TYPE_ASSERT, "( IsClient() )", "BgVehiclePhysics::SimulateClientKeyframe() should be called on client") )
    __debugbreak();
  if ( !cmd || !ps || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x20u) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) || ps->pm_type == 5 )
  {
    this->ResetInputControls(this);
    this->m_inputControlsEnabled = 0;
  }
  else
  {
    v11 = this->__vftable;
    this->m_inputControlsEnabled = 1;
    v11->UpdatePlayerInputControls(this, cmd, ps);
  }
  __asm
  {
    vmovaps xmm1, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  ((void (__fastcall *)(BgVehiclePhysics *))this->StepClientKeyframe)(this);
}

/*
==============
BgVehiclePhysics::StartPlayerControlling
==============
*/
void BgVehiclePhysics::StartPlayerControlling(BgVehiclePhysics *this)
{
  BGVehicles *m_vehicleSystem; 
  __int64 m_entityNumber; 
  vec3_t in1; 
  vec3_t v7; 

  _RDI = this;
  if ( !this->m_pmoveObject )
    BgVehiclePhysicsDeferredActionManager::DeferAction(&this->m_deferActionMgr, DA_POST_ACTIVATED_ALWAYS);
  BgVehiclePhysics::OffsetCenterOfMass(_RDI, &_RDI->m_centerOfMassOffsetOriginalLs, 1);
  m_vehicleSystem = _RDI->m_vehicleSystem;
  m_entityNumber = (unsigned int)_RDI->m_entityNumber;
  *(_QWORD *)&_RDI->m_clientDistanceXYFromPsAvg = 0i64;
  m_vehicleSystem->PhysicsGetPlayerTransform(m_vehicleSystem, m_entityNumber, &_RDI->m_driverEntNum, &in1, &v7);
  MatrixTransposeTransformVector43(&in1, &_RDI->m_transform, &_RDI->m_driverEnterLs);
  __asm { vmovss  xmm3, dword ptr [rdi+170h] }
  *(double *)&_XMM0 = ((double (__fastcall *)(BGVehicles *, BgVehiclePhysics *, _QWORD))_RDI->m_vehicleSystem->PhysicsGetDelayToStartDriving)(_RDI->m_vehicleSystem, _RDI, (unsigned int)_RDI->m_driverEntNum);
  __asm { vmovss  dword ptr [rdi+0C4h], xmm0 }
}

/*
==============
BgVehiclePhysics::Step
==============
*/

bool __fastcall BgVehiclePhysics::Step(BgVehiclePhysics *this, double deltaTime)
{
  bool result; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  Sys_ProfBeginNamedEvent(0xFFFF0000, "BgVehiclePhysics::Step");
  __asm { vmovaps xmm2, xmm6; deltaTime }
  BgVehiclePhysics::ProcessComponents(this,  BgVehiclePhysicsComponent::`vcall'{40,{flat}}, *(float *)&_XMM2);
  ++this->m_simulationFrame;
  Sys_ProfEndNamedEvent();
  result = 1;
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
BgVehiclePhysicsComponent::Step
==============
*/

void __fastcall BgVehiclePhysicsComponent::Step(BgVehiclePhysicsComponent *this, float deltaTime, __int64 a3, double _XMM3_8)
{
  char v4; 

  __asm { vmovss  xmm2, dword ptr [rcx+18h] }
  ++this->m_simCount;
  __asm
  {
    vsubss  xmm0, xmm2, xmm1
    vxorps  xmm3, xmm3, xmm3
    vcomiss xmm0, xmm3
    vmovss  dword ptr [rcx+18h], xmm0
  }
  if ( v4 )
  {
    __asm { vcomiss xmm2, xmm3 }
    if ( !v4 )
      BgVehiclePhysicsComponent::ScrNotify(this, scr_const.path_resumed);
  }
}

/*
==============
BgVehiclePhysics::StopPlayerControlling
==============
*/

void __fastcall BgVehiclePhysics::StopPlayerControlling(BgVehiclePhysics *this, double _XMM1_8)
{
  VehiclePhysicsNetcodeType m_netcodeType; 
  BgVehiclePhysicsManager *v4; 
  BgVehiclePhysics *ObjectForPmove; 
  BgVehiclePhysicsControls::ValuePolicy DefaultPolicy; 
  BgVehicleEventSystem *v7; 

  m_netcodeType = this->m_netcodeType;
  if ( m_netcodeType == VEH_NETCODE_CLIENT_PRED || m_netcodeType == VEH_NETCODE_CLIENT_PRED_SB )
  {
    v4 = this->m_vehicleSystem->PhysicsGetVehiclePhysicsManager(this->m_vehicleSystem);
    ObjectForPmove = BgVehiclePhysicsManager::GetObjectForPmove(v4, this);
    memset_0(ObjectForPmove, 0, 0xD20ui64);
    this->m_minTimeDynamic = -1.0;
  }
  if ( !this->m_pmoveObject )
    BgVehiclePhysicsDeferredActionManager::DeferAction(&this->m_deferActionMgr, DA_POST_ACTIVATED_AUTO);
  this->m_driverEntNum = 2047;
  this->m_controls.timeToAcceptInput = 0.0;
  *(_QWORD *)this->m_controls.playerValues = 0i64;
  *(_QWORD *)&this->m_controls.playerValues[2] = 0i64;
  *(_QWORD *)&this->m_controls.playerValues[4] = 0i64;
  *(_QWORD *)&this->m_controls.playerValues[6] = 0i64;
  *(_QWORD *)this->m_controls.externalValues = 0i64;
  *(_QWORD *)&this->m_controls.externalValues[2] = 0i64;
  *(_QWORD *)&this->m_controls.externalValues[4] = 0i64;
  *(_QWORD *)&this->m_controls.externalValues[6] = 0i64;
  DefaultPolicy = this->m_controls.DefaultPolicy;
  this->m_controls.valuePolicy[0] = DefaultPolicy;
  this->m_controls.valuePolicy[1] = DefaultPolicy;
  this->m_controls.valuePolicy[2] = DefaultPolicy;
  this->m_controls.valuePolicy[3] = DefaultPolicy;
  this->m_controls.valuePolicy[4] = DefaultPolicy;
  this->m_controls.valuePolicy[5] = DefaultPolicy;
  this->m_controls.valuePolicy[6] = DefaultPolicy;
  this->m_controls.valuePolicy[7] = DefaultPolicy;
  this->m_controls.playerEnabledBits[0] = -1;
  this->m_controls.externalEnabledBits[0] = 0;
  this->m_controls.policyWeight = this->m_controls.DefaultPolicyWeight;
  v7 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
  __asm { vxorps  xmm1, xmm1, xmm1 }
  ((void (__fastcall *)(BgVehicleEventSystem *))v7->CarGamepadRumble)(v7);
}

/*
==============
BgVehiclePhysics::UpdateCollider
==============
*/
void BgVehiclePhysics::UpdateCollider(BgVehiclePhysics *this, unsigned int colliderBodyId, const vec3_t *hitPos)
{
  bool IsRigidBodyDynamic; 
  bool IsRigidBodyKeyframed; 

  _RSI = this;
  _RDI = hitPos;
  IsRigidBodyDynamic = Physics_IsRigidBodyDynamic(this->m_worldId, colliderBodyId);
  IsRigidBodyKeyframed = Physics_IsRigidBodyKeyframed(_RSI->m_worldId, colliderBodyId);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm1, xmm0, dword ptr [rsi+198h]
    vmovss  dword ptr [rsi+2C8h], xmm1
    vmovss  xmm2, dword ptr [rdi+4]
    vsubss  xmm0, xmm2, dword ptr [rsi+19Ch]
    vmovss  dword ptr [rsi+2CCh], xmm0
    vmovss  xmm1, dword ptr [rdi+8]
    vsubss  xmm2, xmm1, dword ptr [rsi+1A0h]
    vmovss  dword ptr [rsi+2D0h], xmm2
  }
  if ( IsRigidBodyDynamic || IsRigidBodyKeyframed )
  {
    _RSI->m_lastColliderBodyId = colliderBodyId;
    _RSI->m_timeSinceLastCollisionBody = 0.0;
    _RSI->m_lastCollisionBodyPosLs.v[0] = _RSI->m_lastCollisionPosLs.v[0];
    _RSI->m_lastCollisionBodyPosLs.v[1] = _RSI->m_lastCollisionPosLs.v[1];
    _RSI->m_lastCollisionBodyPosLs.v[2] = _RSI->m_lastCollisionPosLs.v[2];
  }
}

/*
==============
BgVehiclePhysics::UpdateHornInputControls
==============
*/
void BgVehiclePhysics::UpdateHornInputControls(BgVehiclePhysics *this, const usercmd_s *cmd, unsigned int buttonForGpad, unsigned int buttonForKbm)
{
  __int64 v4; 
  __int64 v6; 
  unsigned __int64 buttons; 
  bool v9; 
  bool v10; 
  BgVehicleEventSystem *v11; 
  _BOOL8 v12; 

  v4 = buttonForKbm;
  v6 = buttonForGpad;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 524, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  buttons = cmd->buttons;
  v9 = (cmd->buttons & 0x8000000000000i64) != 0 && (v6 & buttons) != 0;
  v10 = (cmd->buttons & 0x8000000000000i64) == 0 && (v4 & buttons) != 0;
  if ( v9 || v10 )
  {
    if ( !this->m_holdHorn && this->m_worldId <= (unsigned int)PHYSICS_WORLD_ID_SERVER_DETAIL )
    {
      v11 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
      LOBYTE(v12) = 1;
      v11->Horn(v11, this, 0, v12);
    }
    this->m_holdHorn = 1;
  }
  else
  {
    this->m_holdHorn = 0;
  }
}

/*
==============
BgVehiclePhysics::UpdatePhysicsSimulationParameters
==============
*/
void BgVehiclePhysics::UpdatePhysicsSimulationParameters(BgVehiclePhysics *this, const vec3_t *linearVel, const vec3_t *angularVel, const tmat43_t<vec3_t> *chassisTransform, const vec3_t *comWs, const tmat33_t<vec3_t> *invInertiaWs)
{
  this->m_linearVelocityWs = *linearVel;
  this->m_angularVelocityWs = *angularVel;
  MatrixCopy43(chassisTransform, &this->m_transform);
  this->m_centerOfMassWs = *comWs;
  MatrixCopy33(invInertiaWs, &this->m_invInertiaWs);
  if ( !BgVehiclePhysics::CheckSanityValues(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 658, ASSERT_TYPE_ASSERT, "( CheckSanityValues() )", "BgVehiclePhysics::UpdatePhysicsSimulationParameters. Invalid values") )
    __debugbreak();
}

/*
==============
BgVehiclePhysics::UpdatePlayerInputControls
==============
*/
void BgVehiclePhysics::UpdatePlayerInputControls(BgVehiclePhysics *this, const usercmd_s *cmd, const playerState_s *ps)
{
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 551, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
}

/*
==============
Vec3IntegrateDampedSpring
==============
*/

void __fastcall Vec3IntegrateDampedSpring(double frameTime, double k, double d, const vec3_t *targetPos, const vec3_t *targetVel, vec3_t *curPos, vec3_t *curVel)
{
  __int128 v86; 
  __int128 v87; 
  __int128 v88; 
  __int128 v89; 
  char v92; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0E8h+var_88], xmm13
    vmovaps [rsp+0E8h+var_98], xmm14
  }
  _RAX = targetVel;
  _RBX = curPos;
  _RDI = curVel;
  __asm
  {
    vmovups xmm14, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovaps xmm8, xmm0
    vmovss  xmm0, dword ptr [r9]
  }
  HIDWORD(v86) = 0;
  __asm
  {
    vmovups xmm11, xmmword ptr [rsp+30h]
    vmovss  xmm11, xmm11, xmm0
    vmovss  xmm0, dword ptr [rax]
    vinsertps xmm11, xmm11, dword ptr [r9+4], 10h
    vinsertps xmm11, xmm11, dword ptr [r9+8], 20h ; ' '
    vmovups xmmword ptr [rsp+30h], xmm11
    vmovaps xmm7, xmm1
    vmovss  xmm1, dword ptr [rax+4]
    vmovaps xmm10, xmm2
    vmovss  xmm2, dword ptr [rax+8]
  }
  HIDWORD(v87) = 0;
  __asm
  {
    vmovups xmm12, xmmword ptr [rsp+30h]
    vmovss  xmm12, xmm12, xmm0
    vmovss  xmm0, dword ptr [rbx]
    vinsertps xmm12, xmm12, xmm1, 10h
    vinsertps xmm12, xmm12, xmm2, 20h ; ' '
    vmovups xmmword ptr [rsp+30h], xmm12
  }
  HIDWORD(v88) = 0;
  __asm
  {
    vmovups xmm9, xmmword ptr [rsp+30h]
    vmovss  xmm9, xmm9, xmm0
    vmovss  xmm0, dword ptr [rdi]
    vinsertps xmm9, xmm9, dword ptr [rbx+4], 10h
    vinsertps xmm9, xmm9, dword ptr [rbx+8], 20h ; ' '
    vmovups xmmword ptr [rsp+30h], xmm9
  }
  HIDWORD(v89) = 0;
  __asm
  {
    vmovups xmm13, xmmword ptr [rsp+30h]
    vmovss  xmm13, xmm13, xmm0
    vinsertps xmm13, xmm13, dword ptr [rdi+4], 10h
    vinsertps xmm13, xmm13, dword ptr [rdi+8], 20h ; ' '
    vxorps  xmm6, xmm6, xmm6
    vcmpltps xmm0, xmm6, xmm14
    vmovmskps eax, xmm0
    vshufps xmm8, xmm8, xmm8, 0
    vshufps xmm7, xmm7, xmm7, 0
    vshufps xmm10, xmm10, xmm10, 0
  }
  if ( ((unsigned __int8)_RAX & 0xF) != 15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 440, ASSERT_TYPE_ASSERT, "(!Float4AnyLe( mass, Float4Zero() ))", (const char *)&queryFormat, "!Float4AnyLe( mass, g_zero )") )
    __debugbreak();
  __asm
  {
    vcmpltps xmm0, xmm7, xmm6
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 441, ASSERT_TYPE_ASSERT, "(!Float4AnyLt( springConstant, Float4Zero() ))", (const char *)&queryFormat, "!Float4AnyLt( springConstant, g_zero )") )
    __debugbreak();
  __asm
  {
    vcmpltps xmm0, xmm10, xmm6
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 442, ASSERT_TYPE_ASSERT, "(!Float4AnyLt( damperConstant, Float4Zero() ))", (const char *)&queryFormat, "!Float4AnyLt( damperConstant, g_zero )") )
    __debugbreak();
  __asm
  {
    vdivps  xmm6, xmm7, xmm14
    vdivps  xmm7, xmm10, xmm14
    vmulps  xmm0, xmm8, xmm7
    vmulps  xmm3, xmm12, xmm0
    vsubps  xmm2, xmm9, xmm11
    vmulps  xmm1, xmm8, xmm6
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm2, xmm13, xmm0
    vmulps  xmm1, xmm8, xmm7
    vaddps  xmm4, xmm3, xmm2
    vmulps  xmm5, xmm8, xmm8
    vmulps  xmm0, xmm6, xmm5
    vaddps  xmm2, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm0, xmm1, xmm2
    vdivps  xmm7, xmm4, xmm0
    vcmpneqps xmm1, xmm7, xmm7
    vmovmskps eax, xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 475, ASSERT_TYPE_SANITY, "( !Float4IsNaN( inOutMassVelocity ) )", (const char *)&queryFormat, "!Float4IsNaN( inOutMassVelocity )") )
    __debugbreak();
  __asm
  {
    vmulps  xmm0, xmm8, xmm7
    vaddps  xmm6, xmm0, xmm9
    vcmpneqps xmm1, xmm6, xmm6
    vmovmskps eax, xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 477, ASSERT_TYPE_SANITY, "( !Float4IsNaN( inOutMassPos ) )", (const char *)&queryFormat, "!Float4IsNaN( inOutMassPos )") )
    __debugbreak();
  __asm
  {
    vmovss  dword ptr [rbx], xmm6
    vextractps dword ptr [rbx+4], xmm6, 1
    vextractps dword ptr [rbx+8], xmm6, 2
    vmovss  dword ptr [rdi], xmm7
    vextractps dword ptr [rdi+4], xmm7, 1
    vextractps dword ptr [rdi+8], xmm7, 2
  }
  _R11 = &v92;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+0E8h+var_98]
  }
}

/*
==============
BgVehiclePhysics::WarpClientAuth
==============
*/
void BgVehiclePhysics::WarpClientAuth(BgVehiclePhysics *this)
{
  unsigned int BodyId; 
  unsigned int v4; 
  unsigned int v5; 
  bool IsPhysicsBodyIdValid; 
  unsigned int v7; 
  Physics_WorldId m_worldId; 
  vec3_t angVel; 
  vec3_t linVel; 
  vec4_t quat; 

  if ( this->m_netcodeType != VEH_NETCODE_CLIENT_AUTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1356, ASSERT_TYPE_ASSERT, "( GetNetcodeType() == VEH_NETCODE_CLIENT_AUTH )", "BgVehiclePhysics::WarpClientAuth(): Vehicle is not Client-Authoritative") )
    __debugbreak();
  if ( this->m_pmoveObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1357, ASSERT_TYPE_ASSERT, "( !IsPmoveObject() )", "BgVehiclePhysics::WarpClientAuth(): Cannot be called during pmove because the Havok world is forced immutable") )
    __debugbreak();
  if ( this->m_worldId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1358, ASSERT_TYPE_ASSERT, "( GetWorldId() == PHYSICS_WORLD_ID_SERVER_MAIN )", "BgVehiclePhysics::WarpClientAuth(): Only makes sense in server") )
    __debugbreak();
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    v4 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    AnglesToQuat(&this->m_clientAuthAngles, &quat);
    v5 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    IsPhysicsBodyIdValid = PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, v5);
    if ( IsPhysicsBodyIdValid )
    {
      v7 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      IsPhysicsBodyIdValid = Physics_IsRigidBodyKeyframed(this->m_worldId, v7);
    }
    Physics_WarpRigidBodyTo((const Physics_WorldId)this->m_worldId, v4, &this->m_clientAuthOrg, &quat, !IsPhysicsBodyIdValid, 0);
    m_worldId = this->m_worldId;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+78h+angVel], xmm0
      vmovss  dword ptr [rsp+78h+angVel+4], xmm0
      vmovss  dword ptr [rsp+78h+angVel+8], xmm0
      vmovss  dword ptr [rsp+78h+linVel], xmm0
      vmovss  dword ptr [rsp+78h+linVel+4], xmm0
      vmovss  dword ptr [rsp+78h+linVel+8], xmm0
    }
    Physics_SetRigidBodyLinAngVel(m_worldId, v4, &linVel, &angVel);
  }
}

/*
==============
Pmove
==============
*/
__int64 Pmove(pmove_t *pm)
{
  playerState_s *ps; 
  unsigned __int8 v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  BgPlayerTraceInfo *m_playerTraceInfo; 
  char *Value; 
  int *v10; 
  _QWORD *v11; 
  char *v12; 
  int *v13; 
  unsigned __int64 v14; 
  ThreadContext CurrentThreadContext; 
  __int64 v17; 
  __int64 v25; 
  __int64 v26; 
  BgTrace v27; 
  int outMoveTime; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12631, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12631, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pm->movingPlatforms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12633, ASSERT_TYPE_ASSERT, "(pm->movingPlatforms)", (const char *)&queryFormat, "pm->movingPlatforms") )
    __debugbreak();
  if ( !pm->vehicles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_pmove.cpp", 12634, ASSERT_TYPE_ASSERT, "(pm->vehicles)", (const char *)&queryFormat, "pm->vehicles") )
    __debugbreak();
  if ( pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
    CG_DrawDebugMP_AddProcessedCommand(ps->clientNum);
  v3 = 0;
  if ( PM_SetupMoveCommand(pm, &outMoveTime) )
  {
    BgTrace::BgTrace(&v27);
    v4 = outMoveTime;
    v5 = 0;
    v6 = outMoveTime - ps->commandTime;
    pm->numtouch = 0;
    BG_GameInterface_OnPmoveTick(pm);
    pm->StartPhysicsPerfProbe(pm);
    pm->m_trace = &v27;
    if ( v6 > 0 )
    {
      do
      {
        v7 = 66;
        if ( v4 - ps->commandTime < 66 )
          v7 = v4 - ps->commandTime;
        m_playerTraceInfo = pm->m_playerTraceInfo;
        pm->cmd.commandTime = ps->commandTime + v7;
        BgPlayerTraceInfo::UpdatePrePmove(m_playerTraceInfo, pm);
        BGMovingPlatformClient::UpdatePrePmove(pm->movingPlatforms, pm);
        Value = (char *)Sys_GetValue(0);
        v10 = (int *)(Value + 16736);
        if ( (unsigned int)(*((_DWORD *)Value + 4184) + 1) >= 3 )
        {
          LODWORD(v26) = 3;
          LODWORD(v25) = *((_DWORD *)Value + 4184) + 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v25, v26) )
            __debugbreak();
        }
        if ( (unsigned int)++*v10 >= 3 )
        {
          LODWORD(v26) = 3;
          LODWORD(v25) = *v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v25, v26) )
            __debugbreak();
        }
        v11 = Value + 2088;
        v12 = Value + 40;
        if ( *v11 < (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
          __debugbreak();
        *v11 += 8i64;
        if ( *v11 >= (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
          __debugbreak();
        *(_QWORD *)*v11 = v10;
        if ( *v11 <= (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
          __debugbreak();
        v13 = &v10[*v10 + 2];
        v14 = __rdtsc();
        *v13 = v14;
        if ( Sys_HasValidCurrentThreadContext() )
          CurrentThreadContext = Sys_GetCurrentThreadContext();
        else
          CurrentThreadContext = THREAD_CONTEXT_COUNT;
        CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 366, NULL, 0);
        PmoveSingle(pm);
        Profile_EndInternal(NULL);
        BgPlayerTraceInfo::UpdatePostPmove(pm->m_playerTraceInfo, pm);
        _R8 = &pm->oldcmd;
        v17 = 2i64;
        _RAX = &pm->cmd;
        do
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups xmm1, xmmword ptr [rax+70h]
            vmovups ymmword ptr [r8], ymm0
            vmovups ymm0, ymmword ptr [rax+20h]
            vmovups ymmword ptr [r8+20h], ymm0
            vmovups ymm0, ymmword ptr [rax+40h]
            vmovups ymmword ptr [r8+40h], ymm0
            vmovups xmm0, xmmword ptr [rax+60h]
            vmovups xmmword ptr [r8+60h], xmm0
          }
          _RAX = (usercmd_s *)((char *)_RAX + 128);
          _R8 = (usercmd_s *)((char *)_R8 + 128);
          __asm { vmovups xmmword ptr [r8-10h], xmm1 }
          --v17;
        }
        while ( v17 );
        v4 = outMoveTime;
        v5 += v7;
        _R8->buttons = _RAX->buttons;
      }
      while ( v5 < v6 );
      v3 = 1;
    }
    pm->m_trace = NULL;
    PM_SetPitchValues(ps, pm);
    pm->EndPhysicserfProbe(pm);
  }
  return v3;
}

