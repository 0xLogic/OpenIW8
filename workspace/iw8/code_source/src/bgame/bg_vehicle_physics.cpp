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
  float v3; 
  unsigned int BodyId; 
  unsigned int v8; 

  v3 = this->m_invInertiaLs.v[3];
  this->m_linearVelocityWs.v[0] = (float)(v3 * impulseWs->v[0]) + this->m_linearVelocityWs.v[0];
  this->m_linearVelocityWs.v[1] = (float)(v3 * impulseWs->v[1]) + this->m_linearVelocityWs.v[1];
  this->m_linearVelocityWs.v[2] = (float)(v3 * impulseWs->v[2]) + this->m_linearVelocityWs.v[2];
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    if ( this->m_pmoveObject )
    {
      Physics_AccumulateAngularImpulse(impulseWs, atPointWs, &this->m_centerOfMassWs, &this->m_invInertiaWs, &this->m_angularVelocityWs);
    }
    else
    {
      v8 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      Physics_AccumulateRigidBodyAngularImpulse(this->m_worldId, v8, impulseWs, atPointWs, &this->m_angularVelocityWs);
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
  float v2; 

  v2 = this->m_invInertiaLs.v[3];
  this->m_linearVelocityWs.v[0] = (float)(v2 * impulseWs->v[0]) + this->m_linearVelocityWs.v[0];
  this->m_linearVelocityWs.v[1] = (float)(v2 * impulseWs->v[1]) + this->m_linearVelocityWs.v[1];
  this->m_linearVelocityWs.v[2] = (float)(v2 * impulseWs->v[2]) + this->m_linearVelocityWs.v[2];
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
  float v5; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  unsigned int v13; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( !PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 590, ASSERT_TYPE_ASSERT, "(IsPhysicsBodyIdValid())", (const char *)&queryFormat, "IsPhysicsBodyIdValid()") )
    __debugbreak();
  v5 = 0.0;
  if ( (inertiaDiagonal->v[0] < 0.0 || inertiaDiagonal->v[1] < 0.0 || inertiaDiagonal->v[2] < 0.0 || inertiaDiagonal->v[3] < 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 592, ASSERT_TYPE_ASSERT, "(inertiaDiagonal[0] >= 0.0f && inertiaDiagonal[1] >= 0.0f && inertiaDiagonal[2] >= 0.0f && inertiaDiagonal[3] >= 1.0f)", (const char *)&queryFormat, "inertiaDiagonal[0] >= 0.0f && inertiaDiagonal[1] >= 0.0f && inertiaDiagonal[2] >= 0.0f && inertiaDiagonal[3] >= 1.0f") )
    __debugbreak();
  _XMM0 = LODWORD(inertiaDiagonal->v[3]);
  __asm { vmaxss  xmm1, xmm0, xmm7 }
  this->m_mass = *(float *)&_XMM1;
  v8 = *(float *)&_XMM1 * inertiaDiagonal->v[0];
  v9 = *(float *)&_XMM1 * inertiaDiagonal->v[1];
  v10 = *(float *)&_XMM1 * inertiaDiagonal->v[2];
  if ( v8 <= 0.0 )
    v11 = 0.0;
  else
    v11 = 1.0 / v8;
  if ( v9 <= 0.0 )
    v12 = 0.0;
  else
    v12 = 1.0 / v9;
  if ( v10 > 0.0 )
    v5 = 1.0 / v10;
  this->m_invInertiaLs.v[0] = v11;
  this->m_invInertiaLs.v[1] = v12;
  this->m_invInertiaLs.v[2] = v5;
  this->m_invInertiaLs.v[3] = 1.0 / *(float *)&_XMM1;
  v13 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  Physics_SetRigidBodyMass(this->m_worldId, v13, this->m_mass);
  Physics_SetRigidBodyInverseInertiaLocal(this->m_worldId, v13, &this->m_invInertiaLs);
}

/*
==============
BgVehiclePhysics::AfterPhysicsWorldStep
==============
*/
void BgVehiclePhysics::AfterPhysicsWorldStep(BgVehiclePhysics *this, float lastPhysicsStepTime)
{
  unsigned int BodyId; 
  unsigned int v4; 
  unsigned int v5; 
  bool IsRigidBodyKeyframed; 
  tmat43_t<vec3_t> *p_m_transform; 
  unsigned int v8; 
  vec4_t out; 
  tmat44_t<vec4_t> outIwTransform; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( !PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
    return;
  v4 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, v4, &outIwTransform);
  v5 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, v5) )
  {
    v8 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    IsRigidBodyKeyframed = Physics_IsRigidBodyKeyframed(this->m_worldId, v8);
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
  BgVehiclePhysicsHistory::AddTransform(&this->m_history, this, &this->m_transform.m[3], &out, lastPhysicsStepTime);
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
  float v10; 
  unsigned int v11; 
  unsigned int v12; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    v7 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    if ( !PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, v7) || (v8 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber), !Physics_IsRigidBodyKeyframed(this->m_worldId, v8)) )
    {
      v9 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      Physics_GetRigidBodyLinAngVel((const Physics_WorldId)this->m_worldId, v9, &this->m_linearVelocityWs, &this->m_angularVelocityWs);
      v10 = this->m_invInertiaLs.v[3];
      this->m_linearVelocityWs.v[0] = (float)(v10 * impulseWs->v[0]) + this->m_linearVelocityWs.v[0];
      this->m_linearVelocityWs.v[1] = (float)(v10 * impulseWs->v[1]) + this->m_linearVelocityWs.v[1];
      this->m_linearVelocityWs.v[2] = (float)(v10 * impulseWs->v[2]) + this->m_linearVelocityWs.v[2];
      v11 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, v11) )
      {
        if ( this->m_pmoveObject )
        {
          Physics_AccumulateAngularImpulse(impulseWs, atPointWs, &this->m_centerOfMassWs, &this->m_invInertiaWs, &this->m_angularVelocityWs);
        }
        else
        {
          v12 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
          Physics_AccumulateRigidBodyAngularImpulse(this->m_worldId, v12, impulseWs, atPointWs, &this->m_angularVelocityWs);
        }
      }
      Physics_SetRigidBodyLinAngVel((const Physics_WorldId)this->m_worldId, v9, &this->m_linearVelocityWs, &this->m_angularVelocityWs);
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
          BgVehiclePhysics::SetDynamic(this, 10.0);
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
void BgVehiclePhysics::BlendToPmoveObject(BgVehiclePhysics *this, float deltaTime, const BgVehiclePhysics *pmoveObj, vec3_t *inOutLinearVelWs, vec3_t *inOutAngularVelWs)
{
  __int128 v5; 
  unsigned int BodyId; 
  int m_entityNumber; 
  Physics_WorldId m_worldId; 
  unsigned int v13; 
  unsigned int v14; 
  const dvar_t *v15; 
  float value; 
  float v17; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  float v22; 
  float v27; 
  float v31; 
  const dvar_t *v35; 
  float v36; 
  const dvar_t *v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  vec3_t position; 
  vec3_t v46; 
  vec4_t cur; 
  vec4_t dst; 
  float v49; 
  float v50; 
  float v51; 
  vec4_t orientation; 
  vec4_t in2; 
  __int128 v54; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    this->m_pmoveTargetPosition.v[0] = pmoveObj->m_manualIntegratedPos.v[0];
    this->m_pmoveTargetPosition.v[1] = pmoveObj->m_manualIntegratedPos.v[1];
    this->m_pmoveTargetPosition.v[2] = pmoveObj->m_manualIntegratedPos.v[2];
    m_entityNumber = this->m_entityNumber;
    m_worldId = this->m_worldId;
    in2 = pmoveObj->m_manualIntegratedOrientation;
    v54 = v5;
    v13 = PhysicsVehicle_GetBodyId(m_worldId, m_entityNumber);
    if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, v13) )
    {
      v14 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, v14, &position, &orientation);
    }
    v15 = DCONST_DVARFLT_bg_vehNetManualExtrap;
    if ( !DCONST_DVARFLT_bg_vehNetManualExtrap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetManualExtrap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    value = v15->current.value;
    v17 = value * pmoveObj->m_linearVelocityWs.v[1];
    dst.v[0] = (float)(value * pmoveObj->m_linearVelocityWs.v[0]) + this->m_pmoveTargetPosition.v[0];
    v18 = v17 + this->m_pmoveTargetPosition.v[1];
    v19 = value * pmoveObj->m_linearVelocityWs.v[2];
    v20 = DCONST_DVARFLT_bg_vehNetLerpSpeed;
    cur.v[2] = position.v[2];
    dst.v[1] = v18;
    dst.v[2] = v19 + this->m_pmoveTargetPosition.v[2];
    *(double *)cur.v = *(double *)position.v;
    if ( !DCONST_DVARFLT_bg_vehNetLerpSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetLerpSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    BgVehiclePhysics::DampLerp((vec3_t *)&cur, (const vec3_t *)&dst, deltaTime, v20->current.value);
    if ( deltaTime <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 677, ASSERT_TYPE_ASSERT, "(deltaTime > 0.001f)", (const char *)&queryFormat, "deltaTime > EQUAL_EPSILON") )
      __debugbreak();
    v21 = 1.0 / deltaTime;
    v49 = (float)(cur.v[0] - position.v[0]) * (float)(1.0 / deltaTime);
    v50 = (float)(cur.v[1] - position.v[1]) * (float)(1.0 / deltaTime);
    v51 = (float)(cur.v[2] - position.v[2]) * (float)(1.0 / deltaTime);
    if ( deltaTime <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 693, ASSERT_TYPE_ASSERT, "(deltaTime > 1.0E-6)", (const char *)&queryFormat, "deltaTime > ZERO_EPSILON") )
      __debugbreak();
    LODWORD(dst.v[0]) = LODWORD(orientation.v[0]) ^ _xmm;
    LODWORD(dst.v[1]) = LODWORD(orientation.v[1]) ^ _xmm;
    LODWORD(dst.v[2]) = LODWORD(orientation.v[2]) ^ _xmm;
    dst.v[3] = orientation.v[3];
    QuatMultiply(&dst, &in2, &cur);
    v22 = v21 * 0.5;
    _XMM1 = LODWORD(cur.v[0]) ^ (unsigned __int128)(unsigned int)_xmm;
    _XMM7 = 0i64;
    __asm
    {
      vcmpless xmm0, xmm7, xmm4
      vblendvps xmm0, xmm1, xmm2, xmm0
    }
    v27 = *(float *)&_XMM0 * (float)(v21 * 0.5);
    _XMM1 = LODWORD(cur.v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
    __asm
    {
      vcmpless xmm0, xmm7, xmm4
      vblendvps xmm0, xmm1, xmm2, xmm0
    }
    v31 = *(float *)&_XMM0 * v22;
    __asm { vcmpless xmm0, xmm7, xmm4 }
    _XMM1 = LODWORD(cur.v[2]) ^ (unsigned __int128)(unsigned int)_xmm;
    __asm { vblendvps xmm0, xmm1, xmm2, xmm0 }
    position.v[2] = *(float *)&_XMM0 * v22;
    position.v[0] = v27;
    position.v[1] = v31;
    if ( (LODWORD(v27) & 0x7F800000) == 2139095040 || (LODWORD(v31) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT(*(float *)&_XMM0 * v22) & 0x7F800000) == 2139095040 )
    {
      v46.v[0] = 0.0;
      v46.v[1] = 0.0;
      v46.v[2] = 0.0;
    }
    else
    {
      v46 = position;
    }
    v35 = DCONST_DVARFLT_bg_vehNetWeight0;
    if ( !DCONST_DVARFLT_bg_vehNetWeight0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetWeight0") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    v36 = v35->current.value;
    v37 = DCONST_DVARFLT_bg_vehNetWeight1;
    if ( !DCONST_DVARFLT_bg_vehNetWeight1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetWeight1") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    v38 = v37->current.value;
    this->ClipVelocities(this, inOutLinearVelWs, inOutAngularVelWs);
    this->ClipVelocities(this, (vec3_t *)&v49, &v46);
    v39 = v38 * v46.v[0];
    v40 = v38 * v50;
    inOutLinearVelWs->v[0] = (float)(v38 * v49) + (float)(v36 * inOutLinearVelWs->v[0]);
    v41 = v40 + (float)(v36 * inOutLinearVelWs->v[1]);
    v42 = v38 * v46.v[1];
    inOutLinearVelWs->v[1] = v41;
    inOutAngularVelWs->v[0] = v39 + (float)(v36 * inOutAngularVelWs->v[0]);
    v43 = v42 + (float)(v36 * inOutAngularVelWs->v[1]);
    v44 = v38 * v46.v[2];
    inOutAngularVelWs->v[1] = v43;
    inOutAngularVelWs->v[2] = v44 + (float)(v36 * inOutAngularVelWs->v[2]);
    this->ClipVelocities(this, inOutLinearVelWs, inOutAngularVelWs);
  }
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
  return (LODWORD(vehicleState->origin.v[0]) & 0x7F800000) != 2139095040 && (LODWORD(vehicleState->origin.v[1]) & 0x7F800000) != 2139095040 && (LODWORD(vehicleState->origin.v[2]) & 0x7F800000) != 2139095040 && (LODWORD(vehicleState->angles.v[0]) & 0x7F800000) != 2139095040 && (LODWORD(vehicleState->angles.v[1]) & 0x7F800000) != 2139095040 && (LODWORD(vehicleState->angles.v[2]) & 0x7F800000) != 2139095040 && (LODWORD(vehicleState->velocity.v[0]) & 0x7F800000) != 2139095040 && (LODWORD(vehicleState->velocity.v[1]) & 0x7F800000) != 2139095040 && (LODWORD(vehicleState->velocity.v[2]) & 0x7F800000) != 2139095040 && (LODWORD(vehicleState->angVelocity.v[0]) & 0x7F800000) != 2139095040 && (LODWORD(vehicleState->angVelocity.v[1]) & 0x7F800000) != 2139095040 && (LODWORD(vehicleState->angVelocity.v[2]) & 0x7F800000) != 2139095040;
}

/*
==============
BgVehiclePhysics::CheckSanityValues
==============
*/
bool BgVehiclePhysics::CheckSanityValues(BgVehiclePhysics *this)
{
  return (LODWORD(this->m_linearVelocityWs.v[0]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_linearVelocityWs.v[1]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_linearVelocityWs.v[2]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_angularVelocityWs.v[0]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_angularVelocityWs.v[1]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_angularVelocityWs.v[2]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_transform.m[0].v[0]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_transform.m[0].v[1]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_transform.m[0].v[2]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_transform.m[1].v[0]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_transform.m[1].v[1]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_transform.m[1].v[2]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_transform.m[2].v[0]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_transform.m[2].v[1]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_transform.m[2].v[2]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_transform.m[3].v[0]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_transform.m[3].v[1]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_transform.m[3].v[2]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_centerOfMassWs.v[0]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_centerOfMassWs.v[1]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_centerOfMassWs.v[2]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_invInertiaLs.v[0]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_invInertiaLs.v[1]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_invInertiaLs.v[2]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_manualIntegratedPos.v[0]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_manualIntegratedPos.v[1]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_manualIntegratedPos.v[2]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_manualIntegratedOrientation.v[0]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_manualIntegratedOrientation.v[1]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_manualIntegratedOrientation.v[2]) & 0x7F800000) != 2139095040 && (LODWORD(this->m_manualIntegratedOrientation.v[3]) & 0x7F800000) != 2139095040;
}

/*
==============
BgVehiclePhysics::ClientWarpDetection
==============
*/
void BgVehiclePhysics::ClientWarpDetection(BgVehiclePhysics *this, const playerState_s *ps, float dt)
{
  __int128 v3; 
  __int128 v4; 
  BGVehicles *m_vehicleSystem; 
  BGVehicles_vtbl *v9; 
  vec3_t *p_origin; 
  float v11; 
  float v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  float v16; 
  const dvar_t *v17; 
  float v25; 
  float v26; 
  const dvar_t *v27; 
  float value; 
  const dvar_t *v29; 
  unsigned int BodyId; 
  unsigned int v31; 
  unsigned int v32; 
  float v33; 
  vec3_t position; 
  vec4_t orientation; 
  __int128 v36; 
  __int128 v37; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1374, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Physics_IsPredictiveWorld(this->m_worldId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1375, ASSERT_TYPE_ASSERT, "( IsClient() )", "BgVehiclePhysics::ClientWarpDetection() can be called only on client side vehicle objects") )
    __debugbreak();
  if ( dt > 0.0 )
  {
    m_vehicleSystem = this->m_vehicleSystem;
    v9 = m_vehicleSystem->__vftable;
    v37 = v3;
    v36 = v4;
    v9->PhysicsGetVehicleOriginAtPlayerStateTime(m_vehicleSystem, ps, &position);
    p_origin = &ps->vehicleState.origin;
    v11 = ps->vehicleState.origin.v[1] - position.v[1];
    v12 = position.v[2] - ps->vehicleState.origin.v[2];
    v13 = ps->vehicleState.origin.v[0] - position.v[0];
    v14 = DCONST_DVARFLT_bg_vehNetDistSamplesToWarpInc;
    LODWORD(v15) = LODWORD(v12) & _xmm;
    v16 = (float)(v11 * v11) + (float)(v13 * v13);
    if ( !DCONST_DVARFLT_bg_vehNetDistSamplesToWarpInc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetDistSamplesToWarpInc") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v17 = DCONST_DVARFLT_bg_vehNetDistSamplesToWarpDec;
    if ( !DCONST_DVARFLT_bg_vehNetDistSamplesToWarpDec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetDistSamplesToWarpDec") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    _XMM1 = v17->current.unsignedInt;
    _XMM4 = LODWORD(this->m_clientDistanceZFromPsAvg);
    _XMM2 = LODWORD(this->m_clientDistanceXYFromPsAvg);
    __asm
    {
      vcmpless xmm0, xmm4, xmm6
      vblendvps xmm0, xmm1, xmm9, xmm0
    }
    v33 = *(float *)&_XMM0;
    __asm
    {
      vcmpless xmm0, xmm2, xmm7
      vblendvps xmm0, xmm1, xmm9, xmm0
    }
    v25 = 1.0 / dt;
    v26 = *(float *)&_XMM0 * (float)(1.0 / dt);
    if ( v26 > 1.0 )
      v16 = (float)(*(float *)&_XMM2 - (float)((float)(1.0 / v26) * *(float *)&_XMM2)) + (float)((float)(1.0 / v26) * v16);
    this->m_clientDistanceXYFromPsAvg = v16;
    if ( (float)(v25 * v33) > 1.0 )
      v15 = (float)(*(float *)&_XMM4 - (float)((float)(1.0 / (float)(v25 * v33)) * *(float *)&_XMM4)) + (float)((float)(1.0 / (float)(v25 * v33)) * v15);
    this->m_clientDistanceZFromPsAvg = v15;
    v27 = DCONST_DVARFLT_bg_vehNetDistThresholdToWarpXY;
    if ( !DCONST_DVARFLT_bg_vehNetDistThresholdToWarpXY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetDistThresholdToWarpXY") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    value = v27->current.value;
    v29 = DCONST_DVARFLT_bg_vehNetDistThresholdToWarpZ;
    if ( !DCONST_DVARFLT_bg_vehNetDistThresholdToWarpZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetDistThresholdToWarpZ") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    if ( (float)(value * value) < this->m_clientDistanceXYFromPsAvg || (float)(v29->current.value * v29->current.value) < this->m_clientDistanceZFromPsAvg )
    {
      BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
      {
        v31 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
        Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, v31, &position, &orientation);
      }
      v32 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      Physics_WarpRigidBodyTo_Simple((const Physics_WorldId)this->m_worldId, v32, p_origin, &orientation);
      *(_QWORD *)&this->m_clientDistanceXYFromPsAvg = 0i64;
    }
  }
}

/*
==============
BgVehiclePhysics::ClipVelocities
==============
*/
void BgVehiclePhysics::ClipVelocities(BgVehiclePhysics *this, vec3_t *inOutLinearVelWs, vec3_t *inOutAngularVelWs)
{
  __int128 v6; 
  bool v14; 
  bool v15; 
  float v17; 
  float v19; 
  float v20; 
  const dvar_t *v21; 
  float value; 
  const dvar_t *v23; 
  double v24; 
  double v25; 
  float v26; 
  double v27; 
  float v28; 
  double v29; 
  float v30; 
  vec3_t vec; 
  int v32; 
  int v33; 
  tmat33_t<vec3_t> out; 

  if ( !this->SupportsFeature(this, VPFEAT_NO_SPEED_LIMITER) )
  {
    v6 = LODWORD(inOutLinearVelWs->v[1]);
    *(float *)&v6 = (float)((float)(*(float *)&v6 * this->m_transform.m[1].v[1]) + (float)(inOutLinearVelWs->v[0] * this->m_transform.m[1].v[0])) + (float)(inOutLinearVelWs->v[2] * this->m_transform.m[1].v[2]);
    _XMM6 = v6;
    _XMM0 = v6 & _xmm;
    __asm
    {
      vcmpltss xmm1, xmm0, xmm4
      vblendvps xmm0, xmm6, xmm5, xmm1
    }
    v30 = *(float *)&_XMM0;
    *(double *)&_XMM0 = BgVehiclePhysics::GetGlobalTopSpeed(this);
    LODWORD(_XMM6) = _XMM0;
    _XMM0 = LODWORD(this->m_topSpeedForward.v[0]);
    if ( *(float *)&_XMM0 > 0.001 )
      __asm { vminss  xmm6, xmm0, xmm6 }
    v32 = _XMM6;
    *(double *)&_XMM0 = BgVehiclePhysics::GetGlobalTopSpeed(this);
    _XMM1 = LODWORD(this->m_topSpeedForward.v[1]);
    if ( *(float *)&_XMM1 > 0.001 )
      __asm { vminss  xmm0, xmm1, xmm0 }
    v33 = _XMM0;
    v14 = *(float *)&_XMM6 > 0.001 && v30 > *(float *)&_XMM6;
    v15 = *(float *)&_XMM0 > 0.001 && v30 < COERCE_FLOAT(_XMM0 ^ _xmm);
    _XMM0 = LODWORD(inOutLinearVelWs->v[0]);
    if ( (float)(*(float *)&_XMM0 * *(float *)&_XMM0) > 0.0000010000001 || (_XMM0 = LODWORD(inOutLinearVelWs->v[1]), (float)(*(float *)&_XMM0 * *(float *)&_XMM0) > 0.0000010000001) )
    {
      AxisTranspose((const tmat33_t<vec3_t> *)&this->m_transform, &out);
      AxisTransformVec3(&out, inOutLinearVelWs, &vec);
      if ( v14 || v15 )
      {
        if ( 1 - (unsigned int)v14 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", 1 - v14, 2) )
          __debugbreak();
        v17 = *((float *)&v33 - v14);
        if ( v17 < 0.0 )
        {
          __asm { vxorpd  xmm0, xmm0, xmm0 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1100, ASSERT_TYPE_ASSERT, "( maxLength ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "maxLength", "0.0f", v17, *(double *)&_XMM0) )
            __debugbreak();
        }
        v19 = (float)(vec.v[0] * vec.v[0]) + (float)(vec.v[1] * vec.v[1]);
        if ( v19 > (float)(v17 * v17) )
        {
          v20 = v17 / fsqrt(v19);
          vec.v[0] = vec.v[0] * v20;
          vec.v[1] = vec.v[1] * v20;
        }
      }
      v21 = DCONST_DVARFLT_bg_vehMaxVertSpeed;
      if ( !DCONST_DVARFLT_bg_vehMaxVertSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehMaxVertSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      value = v21->current.value;
      v23 = DCONST_DVARFLT_bg_vehMinVertSpeed;
      if ( !DCONST_DVARFLT_bg_vehMinVertSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehMinVertSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      v24 = I_fclamp(vec.v[2], v23->current.value, value);
      vec.v[2] = *(float *)&v24;
      AxisTransformVec3((const tmat33_t<vec3_t> *)&this->m_transform, &vec, inOutLinearVelWs);
    }
    if ( this->m_topAngularSpeedLs.v[0] != 0.0 || this->m_topAngularSpeedLs.v[1] != 0.0 || this->m_topAngularSpeedLs.v[2] != 0.0 )
    {
      AxisTranspose((const tmat33_t<vec3_t> *)&this->m_transform, &out);
      AxisTransformVec3(&out, inOutAngularVelWs, &vec);
      v25 = I_fclamp(vec.v[0], COERCE_FLOAT(LODWORD(this->m_topAngularSpeedLs.v[0]) ^ _xmm), this->m_topAngularSpeedLs.v[0]);
      v26 = this->m_topAngularSpeedLs.v[1];
      vec.v[0] = *(float *)&v25;
      v27 = I_fclamp(vec.v[1], COERCE_FLOAT(LODWORD(v26) ^ _xmm), v26);
      v28 = this->m_topAngularSpeedLs.v[2];
      vec.v[1] = *(float *)&v27;
      v29 = I_fclamp(vec.v[2], COERCE_FLOAT(LODWORD(v28) ^ _xmm), v28);
      vec.v[2] = *(float *)&v29;
      AxisTransformVec3((const tmat33_t<vec3_t> *)&this->m_transform, &vec, inOutAngularVelWs);
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
  __int128 v2; 
  __int128 v5; 
  __int128 v6; 
  float v7; 
  float v8; 
  float v9; 
  int m_entityNumber; 
  Physics_WorldId m_worldId; 
  unsigned int v15; 
  unsigned int v16; 
  void (__fastcall *UpdateCollider)(BgVehiclePhysics *, unsigned int, const vec3_t *); 
  unsigned int BodyId; 
  __int64 v19; 
  Physics_SimpleCollisionCallback_Data data; 
  __int128 v21; 

  if ( this->m_callbackScript )
  {
    v5 = *(_OWORD *)cbData->normal.v;
    v6 = LODWORD(this->m_linearVelocityWs.v[1]);
    v7 = this->m_linearVelocityWs.v[2];
    *(__m256i *)&data.worldId = *(__m256i *)&cbData->worldId;
    v8 = this->m_linearVelocityWs.v[0];
    *(_OWORD *)data.normal.v = v5;
    *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v6 + 1);
    v21 = v2;
    v9 = fsqrt((float)((float)(v8 * v8) + (float)(*(float *)&v6 * *(float *)&v6)) + (float)(v7 * v7));
    *(double *)&_XMM0 = BgVehiclePhysics::GetGlobalTopSpeed(this);
    _XMM1 = LODWORD(this->m_topSpeedForward.v[0]);
    if ( *(float *)&_XMM1 > 0.001 )
      __asm { vminss  xmm0, xmm1, xmm0 }
    __asm { vmaxss  xmm0, xmm0, xmm2 }
    *(double *)&_XMM0 = I_fclamp(v9 / *(float *)&_XMM0, 0.0, 1.0);
    m_entityNumber = this->m_entityNumber;
    m_worldId = this->m_worldId;
    data.impulse = *(float *)&_XMM0;
    if ( data.bodyIds[1] == PhysicsVehicle_GetBodyId(m_worldId, m_entityNumber) )
    {
      v15 = data.bodyIds[0];
      data.bodyIds[0] = data.bodyIds[1];
      v16 = data.surfaceFlagData[0];
      data.bodyIds[1] = v15;
      data.surfaceFlagData[0] = data.surfaceFlagData[1];
      data.surfaceFlagData[1] = v16;
    }
    PhysicsVehicle_CollisionCallbackNotifyScript(this->m_entityNumber, &data, this->m_collisionZone);
  }
  UpdateCollider = this->UpdateCollider;
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  v19 = cbData->bodyIds[0];
  if ( (_DWORD)v19 == BodyId )
    v19 = cbData->bodyIds[1];
  UpdateCollider(this, v19, &cbData->position);
  this->m_timeSinceLastCollision = 0.0;
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
  __int128 v2; 
  __int128 v3; 
  unsigned int v7; 
  unsigned int v8; 
  char v9; 
  int v10; 
  Physics_WorldId m_worldId; 
  unsigned int BodyId; 
  float v13; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  unsigned int v21; 
  bool IsPredictiveWorld; 
  void (__fastcall *v23)(Physics_SimpleCollisionCallback_Data *); 
  BGVehicles *m_vehicleSystem; 
  __int64 m_entityNumber; 
  const char *v26; 
  const char *v27; 
  const char **v28; 
  float outMass; 
  __int128 v30; 
  __int128 v31; 

  if ( this->m_vehicleType < VEH_TREADED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 125, ASSERT_TYPE_ASSERT, "( BGVehicles::PhysicsIsTypeSupported( m_vehicleType ) )", "BgVehiclePhysics::CreatePhysics(). Only for physics enabled vehicles. Consider update BGVehicles::PhysicsIsTypeSupported().") )
    __debugbreak();
  if ( this->m_physicsInitialized )
    return 1;
  v7 = PhysicsVehicle_CreateRigidBody(this->m_worldId, this->m_entityNumber, &outMass);
  v8 = v7;
  if ( v7 == 0xFFFFFF || !Physics_IsRigidBodyValid(this->m_worldId, v7) )
  {
    v9 = 0;
LABEL_34:
    m_vehicleSystem = this->m_vehicleSystem;
    m_entityNumber = (unsigned int)this->m_entityNumber;
    v26 = "<unknown>";
    v28 = NULL;
    if ( m_vehicleSystem->PhysicsGetAsset(m_vehicleSystem, m_entityNumber, (const PhysicsAsset **)&v28) && v28 && *v28 )
      v26 = *v28;
    v27 = "[Vehicle] BgVehiclePhysics::CreatePhysics() can't create rigid body for vehicle physics asset '%s'\n";
    if ( v9 )
      v27 = "[Vehicle] BgVehiclePhysics::CreatePhysics() Physics Asset ('%s') is a non-dynamic rigid body. Make sure UseCategory=Vehicle, SimulationCategory=Vehicle Chassis and materialId=PM_PhysicsVehicle.\n";
    Com_Printf(20, v27, v26);
    return 0;
  }
  v9 = 1;
  if ( !Physics_IsRigidBodyDynamic(this->m_worldId, v8) )
    goto LABEL_34;
  this->m_centerOfMassOffsetOriginalLs.v[0] = vehPhysicsDef->physics_comOffset.v[0];
  this->m_centerOfMassOffsetOriginalLs.v[1] = vehPhysicsDef->physics_comOffset.v[1];
  this->m_centerOfMassOffsetOriginalLs.v[2] = vehPhysicsDef->physics_comOffset.v[2];
  v10 = this->m_entityNumber;
  m_worldId = this->m_worldId;
  v31 = v2;
  v30 = v3;
  BodyId = PhysicsVehicle_GetBodyId(m_worldId, v10);
  if ( !PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 590, ASSERT_TYPE_ASSERT, "(IsPhysicsBodyIdValid())", (const char *)&queryFormat, "IsPhysicsBodyIdValid()") )
    __debugbreak();
  v13 = 0.0;
  if ( (vehPhysicsDef->physics_inertiaDiagonal.v[0] < 0.0 || vehPhysicsDef->physics_inertiaDiagonal.v[1] < 0.0 || vehPhysicsDef->physics_inertiaDiagonal.v[2] < 0.0 || vehPhysicsDef->physics_inertiaDiagonal.v[3] < 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 592, ASSERT_TYPE_ASSERT, "(inertiaDiagonal[0] >= 0.0f && inertiaDiagonal[1] >= 0.0f && inertiaDiagonal[2] >= 0.0f && inertiaDiagonal[3] >= 1.0f)", (const char *)&queryFormat, "inertiaDiagonal[0] >= 0.0f && inertiaDiagonal[1] >= 0.0f && inertiaDiagonal[2] >= 0.0f && inertiaDiagonal[3] >= 1.0f") )
    __debugbreak();
  _XMM0 = LODWORD(vehPhysicsDef->physics_inertiaDiagonal.v[3]);
  __asm { vmaxss  xmm1, xmm0, xmm7 }
  this->m_mass = *(float *)&_XMM1;
  v16 = *(float *)&_XMM1 * vehPhysicsDef->physics_inertiaDiagonal.v[0];
  v17 = *(float *)&_XMM1 * vehPhysicsDef->physics_inertiaDiagonal.v[1];
  v18 = *(float *)&_XMM1 * vehPhysicsDef->physics_inertiaDiagonal.v[2];
  if ( v16 <= 0.0 )
    v19 = 0.0;
  else
    v19 = 1.0 / v16;
  if ( v17 <= 0.0 )
    v20 = 0.0;
  else
    v20 = 1.0 / v17;
  if ( v18 > 0.0 )
    v13 = 1.0 / v18;
  this->m_invInertiaLs.v[0] = v19;
  this->m_invInertiaLs.v[1] = v20;
  this->m_invInertiaLs.v[2] = v13;
  this->m_invInertiaLs.v[3] = 1.0 / *(float *)&_XMM1;
  v21 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  Physics_SetRigidBodyMass(this->m_worldId, v21, this->m_mass);
  Physics_SetRigidBodyInverseInertiaLocal(this->m_worldId, v21, &this->m_invInertiaLs);
  BgVehiclePhysics::OffsetCenterOfMass(this, &this->m_centerOfMassOffsetOriginalLs, 1);
  if ( this->m_mass <= 0.001 )
  {
    Com_Printf(20, "[Vehicle] BgVehiclePhysics::CreatePhysics() Dynamic rigid body with an invalid mass\n");
    return 0;
  }
  IsPredictiveWorld = Physics_IsPredictiveWorld(this->m_worldId);
  v23 = G_Vehicle_PhysicsImpulseCallback;
  if ( IsPredictiveWorld )
    v23 = CgVehicleSystem::PhysicsImpulseCallback;
  Physics_SimpleCollisionCallback_RegisterBody(this->m_worldId, v8, v23);
  PhysicsVehicle_SetSoftContacts(this->m_worldId, v8, 0);
  if ( !Physics_IsPredictiveWorld(this->m_worldId) )
  {
    BgVehiclePhysics::SetDynamic(this, 10.0);
    Physics_ActivateBody(this->m_worldId, v8);
  }
  this->m_physicsInitialized = 1;
  return 1;
}

/*
==============
BgVehiclePhysics::DeactivationLogic
==============
*/
void BgVehiclePhysics::DeactivationLogic(BgVehiclePhysics *this, float deltaTime)
{
  unsigned int frameCadence; 
  int v5; 
  unsigned int v6; 
  unsigned int BodyId; 
  unsigned int v8; 
  unsigned int v9; 
  BOOL v10; 
  bool v11; 
  __int128 v12; 
  BOOL v18; 
  bool v19; 
  __int128 v20; 
  BOOL v26; 
  bool v27; 
  __int128 v28; 

  if ( this->m_pmoveObject || !this->m_linkedPlayers.enabled )
  {
    this->m_linkedPlayers.playerCount = 0;
  }
  else
  {
    frameCadence = this->m_linkedPlayers.frameCadence;
    if ( !frameCadence || !(this->m_simulationFrame % frameCadence) )
    {
      v5 = this->m_vehicleSystem->PhysicsGetPlayerPositionsOnTheVehicle(this->m_vehicleSystem, this->m_entityNumber, this->m_linkedPlayers.playerNums, (vec3_t *)&this->m_linkedPlayers, this->m_linkedPlayers.massFactors, this->m_linkedPlayers.playerSeats, 2u);
      v6 = 2;
      if ( v5 < 2 )
        v6 = v5;
      this->m_linkedPlayers.playerCount = v6;
    }
  }
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    v8 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, v8) )
    {
      v9 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      if ( Physics_IsRigidBodyKeyframed(this->m_worldId, v9) )
      {
        BgVehiclePhysics::ProcessComponents(this,  BgVehiclePhysicsComponent::`vcall'{40,{flat}}, deltaTime);
        v10 = Com_BitCheckAssert(this->m_controls.playerEnabledBits, 0, 4);
        v11 = Com_BitCheckAssert(this->m_controls.externalEnabledBits, 0, 4);
        v12 = LODWORD(this->m_controls.playerValues[0]);
        _XMM3 = LODWORD(this->m_controls.externalValues[0]);
        if ( v10 + 3 * v11 == 1 )
        {
          *(float *)&_XMM3 = this->m_controls.playerValues[0];
        }
        else if ( v10 + 3 * v11 != 3 )
        {
          if ( v10 + 3 * v11 != 4 )
            goto LABEL_27;
          if ( this->m_controls.valuePolicy[0] )
          {
            switch ( this->m_controls.valuePolicy[0] )
            {
              case VP_MINABS:
                _XMM1 = v12 & (unsigned int)_xmm;
                __asm
                {
                  vcmpltss xmm1, xmm1, xmm0
                  vblendvps xmm3, xmm3, xmm4, xmm1
                }
                break;
              case VP_AVERAGE:
                *(float *)&_XMM3 = (float)(*(float *)&_XMM3 + *(float *)&v12) * 0.5;
                break;
              case VP_AVERAGE_WEIGHT_PLAYER:
                *(float *)&_XMM3 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&_XMM3) + (float)(this->m_controls.policyWeight * *(float *)&v12);
                break;
              case VP_AVERAGE_WEIGHT_EXTERNAL:
                *(float *)&_XMM3 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&v12) + (float)(this->m_controls.policyWeight * *(float *)&_XMM3);
                break;
              default:
                goto LABEL_27;
            }
          }
          else
          {
            _XMM0 = _XMM3 & (unsigned int)_xmm;
            __asm
            {
              vcmpltss xmm1, xmm0, xmm1
              vblendvps xmm3, xmm3, xmm4, xmm1
            }
          }
        }
        if ( *(float *)&_XMM3 > 0.001 )
          goto LABEL_61;
LABEL_27:
        v18 = Com_BitCheckAssert(this->m_controls.playerEnabledBits, 1, 4);
        v19 = Com_BitCheckAssert(this->m_controls.externalEnabledBits, 1, 4);
        v20 = LODWORD(this->m_controls.playerValues[1]);
        _XMM3 = LODWORD(this->m_controls.externalValues[1]);
        if ( v18 + 3 * v19 == 1 )
        {
          *(float *)&_XMM3 = this->m_controls.playerValues[1];
        }
        else if ( v18 + 3 * v19 != 3 )
        {
          if ( v18 + 3 * v19 != 4 )
            goto LABEL_42;
          if ( this->m_controls.valuePolicy[1] )
          {
            switch ( this->m_controls.valuePolicy[1] )
            {
              case VP_MINABS:
                _XMM1 = v20 & (unsigned int)_xmm;
                __asm
                {
                  vcmpltss xmm1, xmm1, xmm0
                  vblendvps xmm3, xmm3, xmm4, xmm1
                }
                break;
              case VP_AVERAGE:
                *(float *)&_XMM3 = (float)(*(float *)&_XMM3 + *(float *)&v20) * 0.5;
                break;
              case VP_AVERAGE_WEIGHT_PLAYER:
                *(float *)&_XMM3 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&_XMM3) + (float)(this->m_controls.policyWeight * *(float *)&v20);
                break;
              case VP_AVERAGE_WEIGHT_EXTERNAL:
                *(float *)&_XMM3 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&v20) + (float)(this->m_controls.policyWeight * *(float *)&_XMM3);
                break;
              default:
                goto LABEL_42;
            }
          }
          else
          {
            _XMM0 = _XMM3 & (unsigned int)_xmm;
            __asm
            {
              vcmpltss xmm1, xmm0, xmm1
              vblendvps xmm3, xmm3, xmm4, xmm1
            }
          }
        }
        if ( *(float *)&_XMM3 > 0.001 )
          goto LABEL_61;
LABEL_42:
        v26 = Com_BitCheckAssert(this->m_controls.playerEnabledBits, 2, 4);
        v27 = Com_BitCheckAssert(this->m_controls.externalEnabledBits, 2, 4);
        v28 = LODWORD(this->m_controls.playerValues[2]);
        _XMM3 = LODWORD(this->m_controls.externalValues[2]);
        if ( v26 + 3 * v27 == 1 )
        {
          *(float *)&_XMM3 = this->m_controls.playerValues[2];
          goto LABEL_57;
        }
        if ( v26 + 3 * v27 != 3 )
        {
          if ( v26 + 3 * v27 != 4 )
            goto LABEL_55;
          switch ( this->m_controls.valuePolicy[2] )
          {
            case VP_MAXABS:
              _XMM0 = _XMM3 & (unsigned int)_xmm;
              __asm
              {
                vcmpltss xmm1, xmm0, xmm1
                vblendvps xmm3, xmm3, xmm4, xmm1
              }
              goto LABEL_57;
            case VP_MINABS:
              _XMM1 = v28 & (unsigned int)_xmm;
              __asm
              {
                vcmpltss xmm1, xmm1, xmm0
                vblendvps xmm3, xmm3, xmm4, xmm1
              }
              goto LABEL_57;
            case VP_AVERAGE:
              *(float *)&_XMM3 = (float)(*(float *)&_XMM3 + *(float *)&v28) * 0.5;
              goto LABEL_57;
            case VP_AVERAGE_WEIGHT_PLAYER:
              *(float *)&_XMM3 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&_XMM3) + (float)(this->m_controls.policyWeight * *(float *)&v28);
              goto LABEL_57;
          }
          if ( this->m_controls.valuePolicy[2] != VP_AVERAGE_WEIGHT_EXTERNAL )
          {
LABEL_55:
            LODWORD(_XMM3) = 0;
            goto LABEL_57;
          }
          *(float *)&_XMM3 = (float)((float)(1.0 - this->m_controls.policyWeight) * *(float *)&v28) + (float)(this->m_controls.policyWeight * *(float *)&_XMM3);
        }
LABEL_57:
        if ( COERCE_FLOAT(_XMM3 & _xmm) <= 0.001 && this->m_minTimeDynamic <= 0.0 && !this->m_linkedPlayers.playerCount )
        {
          BgVehiclePhysics::ProcessComponents(this,  BgVehiclePhysicsComponent::`vcall'{48,{flat}}, deltaTime);
          goto LABEL_62;
        }
LABEL_61:
        BgVehiclePhysics::SetDynamic(this, 10.0);
      }
    }
  }
LABEL_62:
  this->m_minTimeDynamic = this->m_minTimeDynamic - deltaTime;
}

/*
==============
BgVehiclePhysics::DebugDraw
==============
*/
void BgVehiclePhysics::DebugDraw(BgVehiclePhysics *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  float *v10; 
  unsigned int v13; 
  unsigned int id; 
  unsigned int v15; 
  __int64 v16; 
  _DWORD *v17; 
  unsigned int BodyId; 
  unsigned int v19; 
  unsigned int v20; 
  int m_entityNumber; 
  Physics_WorldId m_worldId; 
  unsigned int v23; 
  __int128 v24; 
  Physics_WorldId v25; 
  __int128 v26; 
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 
  __int128 v30; 
  __int128 v32; 
  __int128 v35; 
  __int128 v38; 
  bool IsPredictiveWorld; 
  const vec4_t *v41; 
  const char *v42; 
  __int64 duration; 
  __int64 shadow; 
  BgVehiclePhysicsManager *v46; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 
  Bounds bounds; 
  __int128 v50; 
  __int128 v51; 
  __int128 v52; 

  v10 = x;
  v46 = this->m_vehicleSystem->PhysicsGetVehiclePhysicsManager(this->m_vehicleSystem);
  v13 = 0;
  if ( scrPlace )
  {
    while ( v13 < 2 )
    {
      id = this->m_components[v13].id;
      if ( id && BYTE2(id) < 2u )
      {
        if ( BYTE2(id) >= 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 188, ASSERT_TYPE_ASSERT, "(compId.IsValid())", (const char *)&queryFormat, "compId.IsValid()") )
          __debugbreak();
        v15 = (unsigned __int16)id - 1;
        if ( v15 >= 0x80 )
        {
          LODWORD(shadow) = 128;
          LODWORD(duration) = (unsigned __int16)id - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", duration, shadow) )
            __debugbreak();
        }
        v16 = 429320i64;
        if ( v46->m_vehiclePhysicsObjects[v15].buffer[612] )
          v16 = 957704i64;
        v17 = (_DWORD *)((char *)&v46->m_lagTime + 768 * (unsigned __int16)id + 384 * BYTE2(id) + v16);
        if ( v17[2] != id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 195, ASSERT_TYPE_ASSERT, "(baseComp->GetId().IsEqual( compId ))", (const char *)&queryFormat, "baseComp->GetId().IsEqual( compId )") )
          __debugbreak();
        v10 = x;
        (*(void (__fastcall **)(_DWORD *, const ScreenPlacement *, float *, float *, _DWORD, _DWORD))(*(_QWORD *)v17 + 56i64))(v17, scrPlace, x, y, LODWORD(tabWidth), LODWORD(charHeight));
        ++v13;
      }
      else
      {
        v10 = x;
        ++v13;
      }
    }
  }
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    v19 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, v19) )
    {
      v20 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      if ( Physics_IsRigidBodyKeyframed(this->m_worldId, v20) )
      {
        m_entityNumber = this->m_entityNumber;
        m_worldId = this->m_worldId;
        v52 = v6;
        v51 = v7;
        v50 = v8;
        v23 = PhysicsVehicle_GetBodyId(m_worldId, m_entityNumber);
        Physics_GetRigidBodyAABB(this->m_worldId, v23, &aabbMin, &aabbMax);
        v24 = LODWORD(aabbMax.v[0]);
        v25 = this->m_worldId;
        *(float *)&v24 = (float)(aabbMax.v[0] + aabbMin.v[0]) * 0.5;
        v26 = v24;
        v27 = LODWORD(aabbMax.v[1]);
        *(float *)&v27 = (float)(aabbMax.v[1] + aabbMin.v[1]) * 0.5;
        v28 = v27;
        v29 = LODWORD(aabbMax.v[2]);
        *(float *)&v29 = (float)(aabbMax.v[2] + aabbMin.v[2]) * 0.5;
        v30 = v29;
        v32 = v26;
        *(float *)&v32 = *(float *)&v26 - aabbMin.v[0];
        _XMM1 = v32;
        __asm { vmaxss  xmm1, xmm1, xmm0 }
        bounds.halfSize.v[0] = *(float *)&_XMM1;
        bounds.midPoint.v[0] = *(float *)&v26;
        v35 = v28;
        *(float *)&v35 = *(float *)&v28 - aabbMin.v[1];
        _XMM2 = v35;
        __asm { vmaxss  xmm1, xmm2, xmm0 }
        bounds.midPoint.v[1] = *(float *)&v28;
        v38 = v30;
        *(float *)&v38 = *(float *)&v30 - aabbMin.v[2];
        _XMM3 = v38;
        bounds.halfSize.v[1] = *(float *)&_XMM1;
        __asm { vmaxss  xmm1, xmm3, xmm0 }
        bounds.halfSize.v[2] = *(float *)&_XMM1;
        bounds.midPoint.v[2] = *(float *)&v30;
        IsPredictiveWorld = Physics_IsPredictiveWorld(v25);
        v41 = &colorMagenta;
        if ( IsPredictiveWorld )
          v41 = &colorYellow;
        CG_DebugBox(&vec3_origin, &bounds, 0.0, v41, 0, 0);
      }
    }
    if ( scrPlace && Physics_IsPredictiveWorld(this->m_worldId) && this->m_netcodeType == VEH_NETCODE_CLIENT_PRED_SB && this->m_playerControlled )
    {
      v42 = j_va("Dist Avg: XY %.0f Z %.0f", fsqrt(this->m_clientDistanceXYFromPsAvg), fsqrt(this->m_clientDistanceZFromPsAvg));
      Physics_DrawDebugString(scrPlace, *v10, *y, v42, &colorYellow, 0, 1, charHeight, 0);
      *y = charHeight + *y;
    }
  }
  this->m_vehicleSystem->PhysicsDrawDebugVehicle(this->m_vehicleSystem, this);
}

/*
==============
BgVehiclePhysicsComponent::DebugDraw
==============
*/
void BgVehiclePhysicsComponent::DebugDraw(BgVehiclePhysicsComponent *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  float v8; 
  float v9; 

  v8 = *x;
  *x = *x + tabWidth;
  v9 = charHeight + *y;
  *y = v9;
  Physics_DrawDebugString(scrPlace, *x, v9, componentNames[HIBYTE(this->m_id.id)], &colorWhiteFaded, 0, 1, charHeight, 0);
  *y = charHeight + *y;
  *x = v8;
}

/*
==============
BgVehiclePhysics::DeferAngularImpulse
==============
*/
void BgVehiclePhysics::DeferAngularImpulse(BgVehiclePhysics *this, const vec3_t *impulseWs, const vec3_t *atPointWs)
{
  BgVehiclePhysicsDeferredActionManager::DeferAction(&this->m_deferActionMgr, DA_PRE_ANGULAR_IMPULSE);
  this->m_deferActionMgr.m_deferredAngularImpWs = *impulseWs;
  this->m_deferActionMgr.m_deferredAngularPointWs = *atPointWs;
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
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  bool *p_active; 
  unsigned int BodyId; 
  bool active; 

  if ( !vehObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1935, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
    __debugbreak();
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
      v7 = PhysicsVehicle_GetBodyId(vehObj->m_worldId, vehObj->m_entityNumber);
      p_active = &active;
      goto LABEL_18;
    }
    if ( (unsigned __int8)i == 1 )
    {
      v6 = PhysicsVehicle_GetBodyId(vehObj->m_worldId, vehObj->m_entityNumber);
      if ( !PhysicsVehicle_IsPhysicsBodyIdValid(vehObj->m_worldId, v6) )
        goto LABEL_19;
      v7 = PhysicsVehicle_GetBodyId(vehObj->m_worldId, vehObj->m_entityNumber);
      p_active = NULL;
LABEL_18:
      PhysicsVehicle_SetActivationControl(vehObj->m_worldId, v7, p_active);
      goto LABEL_19;
    }
    if ( (unsigned __int8)i != 2 )
    {
      if ( (unsigned __int8)i == 3 )
        BgVehiclePhysics::SetDynamic(vehObj, 10.0);
      goto LABEL_19;
    }
    v5 = PhysicsVehicle_GetBodyId(vehObj->m_worldId, vehObj->m_entityNumber);
    if ( PhysicsVehicle_IsPhysicsBodyIdValid(vehObj->m_worldId, v5) )
    {
      active = 0;
      goto LABEL_17;
    }
LABEL_19:
    if ( !this && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    this->actionBits[(unsigned __int64)(unsigned __int8)i >> 5] &= ~(1 << (i & 0x1F));
  }
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
  const dvar_t *v1; 

  if ( this->m_vehicleGameProfile == VEH_GAMEPROFILE_FIXEDWING_RCPLANE )
    return FLOAT_3_4028235e38;
  v1 = DVARFLT_bg_vehicleTopSpeed;
  if ( !DVARFLT_bg_vehicleTopSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleTopSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.value * 17.6;
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
  *(double *)&_XMM0 = BgVehiclePhysics::GetGlobalTopSpeed(this);
  _XMM1 = LODWORD(this->m_topSpeedForward.v[0]);
  if ( *(float *)&_XMM1 > 0.001 )
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
  *(double *)&_XMM0 = BgVehiclePhysics::GetGlobalTopSpeed(this);
  _XMM1 = LODWORD(this->m_topSpeedForward.v[1]);
  if ( *(float *)&_XMM1 > 0.001 )
    __asm { vminss  xmm0, xmm1, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
BgVehiclePhysics::IntegrateVelocities
==============
*/
void BgVehiclePhysics::IntegrateVelocities(BgVehiclePhysics *this, float deltaTime, const vec3_t *org, const vec4_t *q, const vec3_t *linVel, const vec3_t *angVel, vec3_t *newOrigin, vec4_t *newOrient)
{
  Physics_WorldId m_worldId; 
  hkVector4f v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  __m128 v20; 
  Physics_WorldId v21; 
  __int64 v22; 
  vec4_t in2; 

  m_worldId = this->m_worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 42, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Gravity when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)m_worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v21 = m_worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 43, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v21) )
      __debugbreak();
    LODWORD(v22) = m_worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 95, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v22) )
      __debugbreak();
  }
  v12.m_quad = (__m128)HavokPhysics_GetConstWorld(m_worldId)->world->m_gravity;
  v13 = _mm_shuffle_ps(v12.m_quad, v12.m_quad, 85).m128_f32[0] * 32.0;
  v14 = _mm_shuffle_ps(v12.m_quad, v12.m_quad, 170).m128_f32[0] * 32.0;
  if ( ((COERCE_UNSIGNED_INT(v12.m_quad.m128_f32[0] * 32.0) & 0x7F800000) == 2139095040 || (LODWORD(v13) & 0x7F800000) == 2139095040 || (LODWORD(v14) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 961, ASSERT_TYPE_SANITY, "( !IS_NAN( ( gravVec )[0] ) && !IS_NAN( ( gravVec )[1] ) && !IS_NAN( ( gravVec )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( gravVec )[0] ) && !IS_NAN( ( gravVec )[1] ) && !IS_NAN( ( gravVec )[2] )") )
    __debugbreak();
  v15 = linVel->v[1];
  v16 = linVel->v[2];
  newOrigin->v[0] = (float)((float)((float)((float)(v12.m_quad.m128_f32[0] * 32.0) * deltaTime) + linVel->v[0]) * deltaTime) + org->v[0];
  newOrigin->v[1] = (float)((float)((float)(v13 * deltaTime) + v15) * deltaTime) + org->v[1];
  newOrigin->v[2] = (float)((float)((float)(v14 * deltaTime) + v16) * deltaTime) + org->v[2];
  v17 = (float)(deltaTime * 0.5) * angVel->v[1];
  in2.v[0] = (float)(deltaTime * 0.5) * angVel->v[0];
  in2.v[2] = (float)(deltaTime * 0.5) * angVel->v[2];
  in2.v[1] = v17;
  in2.v[3] = FLOAT_1_0;
  QuatMultiply(q, &in2, newOrient);
  v18 = (float)((float)((float)(newOrient->v[0] * newOrient->v[0]) + (float)(newOrient->v[1] * newOrient->v[1])) + (float)(newOrient->v[2] * newOrient->v[2])) + (float)(newOrient->v[3] * newOrient->v[3]);
  if ( v18 <= 0.001 )
  {
    *newOrient = quat_identity;
  }
  else
  {
    v19 = fsqrt(v18);
    v20 = (__m128)LODWORD(FLOAT_1_0);
    v20.m128_f32[0] = 1.0 / v19;
    *(__m128 *)newOrient = _mm128_mul_ps(_mm_shuffle_ps(v20, v20, 0), *(__m128 *)newOrient);
  }
  if ( ((LODWORD(newOrigin->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(newOrigin->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(newOrigin->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 982, ASSERT_TYPE_SANITY, "( !IS_NAN( ( newOrigin )[0] ) && !IS_NAN( ( newOrigin )[1] ) && !IS_NAN( ( newOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( newOrigin )[0] ) && !IS_NAN( ( newOrigin )[1] ) && !IS_NAN( ( newOrigin )[2] )") )
    __debugbreak();
  if ( ((LODWORD(newOrient->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(newOrient->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(newOrient->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(newOrient->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 983, ASSERT_TYPE_SANITY, "( !IS_NAN( ( newOrient )[0] ) && !IS_NAN( ( newOrient )[1] ) && !IS_NAN( ( newOrient )[2] ) && !IS_NAN( ( newOrient )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( newOrient )[0] ) && !IS_NAN( ( newOrient )[1] ) && !IS_NAN( ( newOrient )[2] ) && !IS_NAN( ( newOrient )[3] )") )
    __debugbreak();
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
  bool v2; 
  bool result; 

  v2 = userCmd->vehAngles[0] == -1 && userCmd->vehAngles[1] == -1 && userCmd->vehAngles[2] == -1;
  result = userCmd->vehOrgX != 0.0 || userCmd->vehOrgY != 0.0 || userCmd->vehOrgZ != 0.0;
  if ( !v2 || result )
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
  float vehOrgY; 
  float vehOrgZ; 
  bool v6; 
  bool v7; 
  float v0[4]; 
  float v1[4]; 

  vehOrgY = userCmd->vehOrgY;
  v0[0] = userCmd->vehOrgX;
  vehOrgZ = userCmd->vehOrgZ;
  v0[1] = vehOrgY;
  v0[2] = vehOrgZ;
  v1[0] = 0.0;
  v1[1] = 0.0;
  v1[2] = 0.0;
  v6 = VecNCompareCustomEpsilon(v0, v1, 0.001, 3) && !userCmd->vehAngles[0] && !userCmd->vehAngles[1] && !userCmd->vehAngles[2];
  v7 = VecNCompareCustomEpsilon(v0, this->m_pmoveLastCmdPos.v, 0.001, 3);
  return !v6 && !v7 && userCmd->serverTime > this->m_pmoveLastCmdTime;
}

/*
==============
BgVehiclePhysics::OffsetCenterOfMass
==============
*/
void BgVehiclePhysics::OffsetCenterOfMass(BgVehiclePhysics *this, const vec3_t *offsetLs, bool force)
{
  unsigned int BodyId; 
  unsigned int v7; 
  unsigned int v8; 
  float v9; 
  vec3_t out; 
  tmat43_t<vec3_t> dst; 
  tmat44_t<vec4_t> outIwTransform; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( !PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 564, ASSERT_TYPE_ASSERT, "(IsPhysicsBodyIdValid())", (const char *)&queryFormat, "IsPhysicsBodyIdValid()") )
    __debugbreak();
  if ( !VecNCompareCustomEpsilon(this->m_centerOfMassOffsetLs.v, offsetLs->v, 0.001, 3) || force )
  {
    v7 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    this->m_centerOfMassOffsetLs.v[0] = offsetLs->v[0];
    v8 = v7;
    this->m_centerOfMassOffsetLs.v[1] = offsetLs->v[1];
    this->m_centerOfMassOffsetLs.v[2] = offsetLs->v[2];
    Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, v7, &outIwTransform);
    MatrixCopy44To43(&outIwTransform, &dst);
    AxisTransformVec3((const tmat33_t<vec3_t> *)&dst, offsetLs, &out);
    v9 = dst.m[3].v[1] + out.v[1];
    this->m_centerOfMassWs.v[0] = dst.m[3].v[0] + out.v[0];
    this->m_centerOfMassWs.v[2] = dst.m[3].v[2] + out.v[2];
    this->m_centerOfMassWs.v[1] = v9;
    if ( !this->m_pmoveObject )
      Physics_SetRigidBodyCenterOfMass(this->m_worldId, v8, &this->m_centerOfMassWs);
  }
}

/*
==============
BGVehicles::PhysicsDrawDebug
==============
*/
void BGVehicles::PhysicsDrawDebug(BGVehicles *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const ScreenPlacement *v8; 
  int v10; 
  __int64 v11; 
  BgVehiclePhysicsManager *v12; 
  const BgVehiclePhysics *v13; 
  int v14; 
  BgVehiclePhysicsManager *v15; 
  int v16; 
  BgVehiclePhysicsManager *v17; 
  unsigned int v18; 
  __int64 v19; 
  int v20; 
  unsigned int BodyId; 
  BgVehiclePhysicsManager *v22; 
  BgVehiclePhysics *ObjectForPmove; 
  __int64 forceColor; 
  __int64 shadow; 

  v8 = scrPlace;
  if ( this->PhysicsIsDebugDrawing(this) )
  {
    Com_sprintf(s_debugDrawTextBuffer, 0x40ui64, "Physics Vehicle Summary");
    v10 = 0;
    Physics_DrawDebugString(v8, *x, *y, s_debugDrawTextBuffer, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    *x = tabWidth + *x;
    v11 = 0i64;
    do
    {
      v12 = this->PhysicsGetVehiclePhysicsManager(this);
      if ( (unsigned int)v10 >= 0x80 )
      {
        LODWORD(shadow) = 128;
        LODWORD(forceColor) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", forceColor, shadow) )
          __debugbreak();
      }
      v13 = (const BgVehiclePhysics *)&v12->m_vehiclePhysicsObjects[v11];
      if ( (BgVehiclePhysicsManager *)((char *)v12 + v11 * 3360) != (BgVehiclePhysicsManager *)-8i64 )
      {
        if ( *(_DWORD *)&v12->m_vehiclePhysicsObjects[v11].buffer[8] )
        {
          ((void (__fastcall *)(BgVehiclePhysicsObjectBuffer *, const ScreenPlacement *, float *, float *, _DWORD, _DWORD))v13->DebugDraw)(&v12->m_vehiclePhysicsObjects[v11], v8, x, y, LODWORD(tabWidth), LODWORD(charHeight));
          v14 = *(_DWORD *)&v12->m_vehiclePhysicsObjects[v11].buffer[24];
          if ( !v14 || v14 == 3 )
          {
            v15 = this->PhysicsGetVehiclePhysicsManager(this);
            v16 = *(_DWORD *)&v12->m_vehiclePhysicsObjects[v11].buffer[28];
            v17 = v15;
            if ( (unsigned int)(v16 - 1) > 0x7F )
              goto LABEL_18;
            v18 = v16 - 1;
            if ( v18 >= 0x80 )
            {
              LODWORD(shadow) = 128;
              LODWORD(forceColor) = v18;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 300, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", forceColor, shadow) )
                __debugbreak();
            }
            v19 = v18;
            if ( *(_DWORD *)&v17->m_vehiclePhysicsObjectsPmove[v19].buffer[8] && (v20 = *(_DWORD *)&v17->m_vehiclePhysicsObjectsPmove[v19].buffer[48], v20 == v13->m_entityNumber) && (BodyId = PhysicsVehicle_GetBodyId(*(Physics_WorldId *)&v17->m_vehiclePhysicsObjectsPmove[v19].buffer[32], v20), BodyId == PhysicsVehicle_GetBodyId(v13->m_worldId, v13->m_entityNumber)) )
            {
              v22 = this->PhysicsGetVehiclePhysicsManager(this);
              ObjectForPmove = BgVehiclePhysicsManager::GetObjectForPmove(v22, v13);
              v8 = scrPlace;
              ((void (__fastcall *)(BgVehiclePhysics *, const ScreenPlacement *, float *, float *, _DWORD, _DWORD))ObjectForPmove->DebugDraw)(ObjectForPmove, scrPlace, x, y, LODWORD(tabWidth), LODWORD(charHeight));
            }
            else
            {
LABEL_18:
              v8 = scrPlace;
            }
          }
        }
      }
      ++v10;
      ++v11;
    }
    while ( v10 < 128 );
    *x = *x - tabWidth;
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
  *outOrg = ps->vehicleState.origin;
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
  BG_Vehicle_UnpackPhysicsParams(lerpVeh, outGasInput, outIsBraking, outWheelAveSpinSpeed);
  if ( *outIsBraking )
  {
    *outGasInput = COERCE_FLOAT(*(_DWORD *)outGasInput ^ _xmm);
    *outWheelAveSpinSpeed = COERCE_FLOAT(*(_DWORD *)outWheelAveSpinSpeed ^ _xmm);
  }
}

/*
==============
BGVehicles::PhysicsUpdateCharacterWobbleAnimDataCommon
==============
*/
void BGVehicles::PhysicsUpdateCharacterWobbleAnimDataCommon(BGVehicles *this, const BgVehiclePhysics *vehObj, const tmat33_t<vec3_t> *entAxis, const vec3_t *entOrg, const characterInfo_t *ci, float frameTime, wobbleAnim_t *outData)
{
  const dvar_t *v11; 
  const dvar_t *v12; 
  float v13; 
  float v14; 
  float v15; 
  __m128 v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  animScriptVehicleSeat_t seat; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  __int128 v26; 
  bool v28; 
  float v31; 
  float v32; 
  double v33; 
  float v34; 
  float v38; 
  float v41; 
  double v42; 
  __int128 v44; 
  __int128 v46; 
  float v49; 
  float v50; 
  vec3_t targetVel; 
  float v52; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 2044, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !outData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 2045, ASSERT_TYPE_ASSERT, "(outData)", (const char *)&queryFormat, "outData") )
    __debugbreak();
  _XMM8 = 0i64;
  if ( frameTime > 0.0 )
  {
    if ( !outData->initialized )
    {
      outData->lfTargetPos = *entOrg;
      outData->lfCurrentPos = *entOrg;
      *(_OWORD *)outData->lfCurrentVel.v = 0ui64;
      *(_QWORD *)outData->amplitude.v = 0i64;
      outData->amplitude.v[2] = 0.0;
      *(_QWORD *)&outData->angleDirLerp0 = 0i64;
      outData->intensity = 0;
      outData->initialized = 1;
    }
    if ( vehObj->m_vehicleAnimProfile )
    {
      v11 = DCONST_DVARBOOL_bg_vehicleDisableWobbleAnim;
      if ( !DCONST_DVARBOOL_bg_vehicleDisableWobbleAnim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDisableWobbleAnim") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( !v11->current.enabled )
      {
        if ( vehObj->m_clientGeoLoaded )
          goto LABEL_20;
        v12 = DVARINT_bg_vehNetNoClientGeoMode;
        if ( !DVARINT_bg_vehNetNoClientGeoMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetNoClientGeoMode") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        if ( v12->current.integer != 1 )
        {
LABEL_20:
          v13 = outData->lfTargetPos.v[2];
          v14 = upDistLf;
          v15 = (float)(upDistLf * vehObj->m_transform.m[2].v[0]) + entOrg->v[0];
          v16 = (__m128)*(unsigned __int64 *)outData->lfTargetPos.v;
          outData->lfTargetPos.v[0] = v15;
          v17 = (float)(v14 * vehObj->m_transform.m[2].v[1]) + entOrg->v[1];
          outData->lfTargetPos.v[1] = v17;
          v18 = (float)(v14 * vehObj->m_transform.m[2].v[2]) + entOrg->v[2];
          v19 = (float)(v15 - v16.m128_f32[0]) * (float)(1.0 / frameTime);
          v52 = v13;
          v20 = v18 - v13;
          targetVel.v[0] = v19;
          outData->lfTargetPos.v[2] = v18;
          seat = ci->vehicleAnimation.seat;
          targetVel.v[2] = v20 * (float)(1.0 / frameTime);
          targetVel.v[1] = (float)(v17 - _mm_shuffle_ps(v16, v16, 85).m128_f32[0]) * (float)(1.0 / frameTime);
          if ( seat < VEHICLE_SEAT_2 )
            goto LABEL_25;
          if ( seat <= VEHICLE_SEAT_3 )
          {
            v22 = FLOAT_25_0;
            v23 = FLOAT_3_0;
            outData->intensity = 1;
            goto LABEL_27;
          }
          if ( seat > VEHICLE_SEAT_5 )
          {
LABEL_25:
            v22 = FLOAT_40_0;
            outData->intensity = 0;
          }
          else
          {
            v22 = FLOAT_35_0;
            outData->intensity = 2;
          }
          v23 = FLOAT_4_0;
LABEL_27:
          Vec3IntegrateDampedSpring(frameTime, v22, v23, &outData->lfTargetPos, &targetVel, &outData->lfCurrentPos, &outData->lfCurrentVel);
          if ( vehObj->m_transform.m[2].v[0] != 0.0 || vehObj->m_transform.m[2].v[1] != 0.0 || vehObj->m_transform.m[2].v[2] != 0.0 )
            ProjectPointOnPlane(&outData->lfCurrentPos, &outData->lfTargetPos, &vehObj->m_transform.m[2], &outData->lfCurrentPos);
          v24 = outData->lfCurrentPos.v[0] - outData->lfTargetPos.v[0];
          v26 = LODWORD(outData->lfCurrentPos.v[1]);
          v25 = outData->lfCurrentPos.v[1] - outData->lfTargetPos.v[1];
          *(float *)&v26 = fsqrt((float)(v25 * v25) + (float)(v24 * v24));
          _XMM12 = v26;
          v28 = *(float *)&v26 <= 0.001;
          __asm
          {
            vcmpless xmm0, xmm12, cs:__real@80000000
            vblendvps xmm0, xmm12, xmm10, xmm0
          }
          v31 = v24 * (float)(1.0 / *(float *)&_XMM0);
          v32 = v25 * (float)(1.0 / *(float *)&_XMM0);
          if ( v28 )
          {
            v38 = 0.0;
          }
          else
          {
            v33 = I_fclamp((float)(v32 * entAxis->m[0].v[1]) + (float)(v31 * entAxis->m[0].v[0]), -1.0, 1.0);
            v34 = *(float *)&v33;
            I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v32 * entAxis->m[1].v[1]) + (float)(v31 * entAxis->m[1].v[0])) ^ _xmm), -1.0, 1.0);
            __asm { vcmpless xmm2, xmm8, xmm0 }
            _XMM0 = LODWORD(FLOAT_N57_295776);
            __asm { vblendvps xmm6, xmm0, xmm1, xmm2 }
            v38 = *(float *)&_XMM6 * acosf_0(v34);
            outData->angleDirLerp1 = v38;
          }
          outData->angleDirCurrent = v38;
          _XMM1 = 0i64;
          __asm { vroundss xmm4, xmm1, xmm2, 1 }
          v41 = (float)((float)((float)(outData->angleDirLerp1 - outData->angleDirLerp0) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
          outData->angleDirLerp0 = (float)((float)(v41 * frameTime) * angleDirSpeed) + outData->angleDirLerp0;
          v42 = I_fclamp(*(float *)&_XMM12 / maxdlf, 0.0, 1.0);
          v44 = LODWORD(FLOAT_1_0);
          *(float *)&v44 = 1.0 - (float)(COERCE_FLOAT(LODWORD(v41) & _xmm) * 0.0055555557);
          _XMM2 = v44;
          __asm { vmaxss  xmm3, xmm2, xmm8 }
          v46 = _XMM3;
          *(float *)&v46 = (float)((float)(*(float *)&_XMM3 * (float)((float)(*(float *)&v42 * *(float *)&v42) * MaxAmplitudelf)) + outData->amplitude.v[0]) * 0.5;
          _XMM0 = v46;
          __asm { vmaxss  xmm0, xmm0, xmm8 }
          outData->amplitude.v[0] = *(float *)&_XMM0;
          *(double *)&_XMM0 = I_fclamp(fsqrt((float)(outData->lfCurrentVel.v[0] * outData->lfCurrentVel.v[0]) + (float)(outData->lfCurrentVel.v[1] * outData->lfCurrentVel.v[1])) * (float)(1.0 / maxdist), 0.0, 1.0);
          v49 = *(float *)&_XMM0;
          *(float *)&v46 = (float)(frameTime * speedAmp1) + outData->tNoise;
          outData->tNoise = *(float *)&v46;
          *(float *)&_XMM0 = fmodf_0(*(float *)&v46, 3.1415927);
          v50 = sinf_0(*(float *)&_XMM0);
          *(float *)&_XMM0 = powf_0(2.7182817, COERCE_FLOAT(COERCE_UNSIGNED_INT(v50 * decay) ^ _xmm));
          outData->amplitude.v[1] = (float)((float)((float)((float)(*(float *)&_XMM0 * cosf_0((float)(v50 * freq) - 1.5707964)) * v49) * maxampl) + outData->amplitude.v[1]) * 0.5;
        }
      }
    }
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
  __int128 v3; 
  playerState_s *ps; 
  BgVehiclePhysics_vtbl *v8; 
  __int128 v9; 
  double v10; 
  unsigned int eventParm; 
  unsigned int BodyId; 
  unsigned int v13; 
  BgVehiclePhysics_vtbl *v15; 
  playerState_s *v17; 
  playerState_s *v18; 
  vec4_t v19; 
  playerState_s *v20; 
  bool v21; 
  playerState_s *v22; 
  __m256i v23; 
  const dvar_t *v24; 
  playerState_s *v25; 
  const vec4_t **v26; 
  float *v27; 
  int v28; 
  bool v29; 
  float v30; 
  const vec4_t *v31; 
  float v32; 
  vec3_t *angVel; 
  vec3_t *newOrigin; 
  __m256i v35; 
  __m256i v36; 
  __m256i v37; 
  vec4_t quat; 
  vec4_t out; 
  tmat33_t<vec3_t> axis; 
  __int128 v41; 

  if ( pml->frametime > 0.0 )
  {
    this->m_pmoveObject = 1;
    if ( !BgVehiclePhysics::CheckSanityValues(this, &pm->ps->vehicleState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1231, ASSERT_TYPE_ASSERT, "( CheckSanityValues( pm->ps->vehicleState ) )", "BgVehiclePhysics::Pmove. Invalid vehicleState") )
      __debugbreak();
    ps = pm->ps;
    v8 = this->__vftable;
    v9 = *(_OWORD *)&ps->pe.oldEventSequence;
    v10 = *(double *)&ps->unpredictableEvents[0].eventParm;
    eventParm = ps->unpredictableEvents[1].eventParm;
    v35 = *(__m256i *)&ps->vehicleState.entity;
    v36 = *(__m256i *)&ps->vehicleState.angles.z;
    v37 = *(__m256i *)&ps->vehicleState.tilt.y;
    *(__m256i *)axis.m[0].v = *(__m256i *)&ps->pe.events[0].eventType;
    ((void (__fastcall *)(BgVehiclePhysics *, usercmd_s *))v8->UpdatePlayerInputControls)(this, &pm->cmd);
    BgVehiclePhysics::QueryValuesFromPlayerState(this, pm->ps);
    BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    if ( !PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) || (v13 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber), !Physics_IsRigidBodyKeyframed(this->m_worldId, v13)) )
    {
      _XMM0 = LODWORD(pml->frametime);
      v15 = this->__vftable;
      v41 = v3;
      __asm { vminss  xmm7, xmm0, cs:__real@3e000000 }
      ((void (__fastcall *)(BgVehiclePhysics *))v15->Step)(this);
      if ( !BgVehiclePhysics::CheckSanityValues(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1248, ASSERT_TYPE_ASSERT, "( CheckSanityValues() )", "BgVehiclePhysics::Pmove. Results of the Step are invalid") )
        __debugbreak();
      v17 = pm->ps;
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 932, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( v17->vehicleState.entity != this->m_entityNumber && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 933, ASSERT_TYPE_ASSERT, "( ps->vehicleState.entity == GetEntityNumber() )", "BgVehiclePhysics::PostStep() Error, must be called with a valid client predictive vehicle state") )
        __debugbreak();
      ((void (__fastcall *)(BgVehiclePhysics *))this->PostStep)(this);
      v17->vehicleState.velocity.v[0] = this->m_linearVelocityWs.v[0];
      v17->vehicleState.velocity.v[1] = this->m_linearVelocityWs.v[1];
      v17->vehicleState.velocity.v[2] = this->m_linearVelocityWs.v[2];
      v17->vehicleState.angVelocity.v[0] = this->m_angularVelocityWs.v[0];
      v17->vehicleState.angVelocity.v[1] = this->m_angularVelocityWs.v[1];
      v17->vehicleState.angVelocity.v[2] = this->m_angularVelocityWs.v[2];
      AxisToQuat((const tmat33_t<vec3_t> *)&this->m_transform, &out);
      BgVehiclePhysics::IntegrateVelocities(this, *(float *)&_XMM7, &this->m_transform.m[3], &out, &this->m_linearVelocityWs, &this->m_angularVelocityWs, &v17->vehicleState.origin, &quat);
      QuatToAngles(&quat, &v17->vehicleState.angles);
      v18 = pm->ps;
      v19 = quat;
      this->m_manualIntegratedPos.v[0] = v17->vehicleState.origin.v[0];
      this->m_manualIntegratedPos.v[1] = v17->vehicleState.origin.v[1];
      this->m_manualIntegratedPos.v[2] = v17->vehicleState.origin.v[2];
      this->m_manualIntegratedOrientation = v19;
      if ( !BgVehiclePhysics::CheckSanityValues(this, &v18->vehicleState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1253, ASSERT_TYPE_ASSERT, "( CheckSanityValues( pm->ps->vehicleState ) )", "BgVehiclePhysics::Pmove. Invalid result vehicleState from PostStepIntegrate") )
        __debugbreak();
      v20 = pm->ps;
      v21 = (LODWORD(v20->vehicleState.origin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v20->vehicleState.origin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v20->vehicleState.origin.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v20->vehicleState.angles.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v20->vehicleState.angles.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v20->vehicleState.angles.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v20->vehicleState.velocity.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v20->vehicleState.velocity.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v20->vehicleState.velocity.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v20->vehicleState.angVelocity.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v20->vehicleState.angVelocity.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v20->vehicleState.angVelocity.v[2]) & 0x7F800000) == 2139095040;
      if ( !Physics_IsInBroadphase(this->m_worldId, &v20->vehicleState.origin) || v21 )
      {
        v22 = pm->ps;
        *(__m256i *)&v22->vehicleState.entity = v35;
        *(__m256i *)&v22->vehicleState.angles.z = v36;
        v23 = *(__m256i *)axis.m[0].v;
        *(__m256i *)&v22->vehicleState.tilt.y = v37;
        *(__m256i *)&v22->pe.events[0].eventType = v23;
        *(_OWORD *)&v22->pe.oldEventSequence = v9;
        *(double *)&v22->unpredictableEvents[0].eventParm = v10;
        v22->unpredictableEvents[1].eventParm = eventParm;
      }
      v24 = DCONST_DVARINT_bg_vehicleDebug;
      if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      if ( v24->current.integer && Sys_IsMainThread() )
      {
        ((void (__fastcall *)(BgVehiclePhysics *, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))this->DebugDraw)(this, 0i64, 0i64, 0i64, 0, 0);
        AnglesToAxis(&pm->ps->vehicleState.angles, &axis);
        v25 = pm->ps;
        v26 = off_14503F080;
        v27 = &axis.m[0].v[2];
        v28 = 0;
        v29 = 1;
        do
        {
          if ( !v29 )
          {
            LODWORD(newOrigin) = 3;
            LODWORD(angVel) = v28;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", angVel, newOrigin) )
              __debugbreak();
          }
          v30 = 10.0 * *(v27 - 1);
          v31 = *v26;
          quat.v[0] = (float)(10.0 * *(v27 - 2)) + v25->vehicleState.origin.v[0];
          v32 = 10.0 * *v27;
          quat.v[1] = v30 + v25->vehicleState.origin.v[1];
          quat.v[2] = v32 + v25->vehicleState.origin.v[2];
          CG_DebugLine(&v25->vehicleState.origin, (const vec3_t *)&quat, v31, 0, 0);
          ++v28;
          v27 += 3;
          ++v26;
          v29 = (unsigned int)v28 < 3;
        }
        while ( v28 < 3 );
      }
    }
  }
}

/*
==============
BgVehiclePhysics::PostStep
==============
*/
void BgVehiclePhysics::PostStep(BgVehiclePhysics *this, float deltaTime)
{
  this->ClipVelocities(this, &this->m_linearVelocityWs, &this->m_angularVelocityWs);
  BgVehiclePhysics::ProcessComponents(this,  BgVehiclePhysicsComponent::`vcall'{48,{flat}}, deltaTime);
  if ( !BgVehiclePhysics::CheckSanityValues(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1063, ASSERT_TYPE_ASSERT, "( CheckSanityValues() )", "BgVehiclePhysics::PostStep. Wrong values after PostStep") )
    __debugbreak();
  this->m_timeSinceLastCollision = deltaTime + this->m_timeSinceLastCollision;
  this->m_timeSinceLastCollisionBody = deltaTime + this->m_timeSinceLastCollisionBody;
}

/*
==============
BgVehiclePhysics::PostStepIntegrate
==============
*/
void BgVehiclePhysics::PostStepIntegrate(BgVehiclePhysics *this, float deltaTime, playerState_s *ps)
{
  vec4_t v5; 
  vec4_t quat; 
  vec4_t out; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 932, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->vehicleState.entity != this->m_entityNumber && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 933, ASSERT_TYPE_ASSERT, "( ps->vehicleState.entity == GetEntityNumber() )", "BgVehiclePhysics::PostStep() Error, must be called with a valid client predictive vehicle state") )
    __debugbreak();
  ((void (__fastcall *)(BgVehiclePhysics *))this->PostStep)(this);
  ps->vehicleState.velocity.v[0] = this->m_linearVelocityWs.v[0];
  ps->vehicleState.velocity.v[1] = this->m_linearVelocityWs.v[1];
  ps->vehicleState.velocity.v[2] = this->m_linearVelocityWs.v[2];
  ps->vehicleState.angVelocity.v[0] = this->m_angularVelocityWs.v[0];
  ps->vehicleState.angVelocity.v[1] = this->m_angularVelocityWs.v[1];
  ps->vehicleState.angVelocity.v[2] = this->m_angularVelocityWs.v[2];
  AxisToQuat((const tmat33_t<vec3_t> *)&this->m_transform, &out);
  BgVehiclePhysics::IntegrateVelocities(this, deltaTime, &this->m_transform.m[3], &out, &this->m_linearVelocityWs, &this->m_angularVelocityWs, &ps->vehicleState.origin, &quat);
  QuatToAngles(&quat, &ps->vehicleState.angles);
  v5 = quat;
  this->m_manualIntegratedPos.v[0] = ps->vehicleState.origin.v[0];
  this->m_manualIntegratedPos.v[1] = ps->vehicleState.origin.v[1];
  this->m_manualIntegratedPos.v[2] = ps->vehicleState.origin.v[2];
  this->m_manualIntegratedOrientation = v5;
}

/*
==============
BgVehiclePhysics::ProcessComponents
==============
*/
void BgVehiclePhysics::ProcessComponents(BgVehiclePhysics *this, void (*functor)(BgVehiclePhysicsComponent *this, float), float deltaTime)
{
  VehiclePhysicsComponentId *m_components; 
  const char *v6; 
  __int64 v7; 
  unsigned int id; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  char *v12; 
  __int64 v13; 
  __int64 v14; 
  BgVehiclePhysicsManager *v15; 

  m_components = this->m_components;
  v15 = this->m_vehicleSystem->PhysicsGetVehiclePhysicsManager(this->m_vehicleSystem);
  v6 = "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)";
  v7 = 2i64;
  do
  {
    id = m_components->id;
    if ( m_components->id && BYTE2(id) < 2u )
    {
      if ( BYTE2(id) >= 2u )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 188, ASSERT_TYPE_ASSERT, "(compId.IsValid())", (const char *)&queryFormat, "compId.IsValid()") )
          __debugbreak();
        v6 = "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)";
      }
      v9 = (unsigned __int16)id - 1;
      if ( v9 >= 0x80 )
      {
        LODWORD(v14) = 128;
        LODWORD(v13) = (unsigned __int16)id - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v10 = 384 * (BYTE2(id) + 2i64 * (unsigned __int16)id);
      v11 = 429320i64;
      if ( v15->m_vehiclePhysicsObjects[v9].buffer[612] )
        v11 = 957704i64;
      v12 = (char *)v15 + v10 + v11;
      if ( *((_DWORD *)v12 + 2) != id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 195, ASSERT_TYPE_ASSERT, "(baseComp->GetId().IsEqual( compId ))", (const char *)&queryFormat, "baseComp->GetId().IsEqual( compId )") )
        __debugbreak();
      ((void (__fastcall *)(char *, __int64, const char *))functor)(v12, v10, v6);
      if ( v12[32] )
        ((void (__fastcall *)(BGVehicles *, _QWORD))this->m_vehicleSystem->PhysicsDestroyComponent)(this->m_vehicleSystem, m_components->id);
      v6 = "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)";
    }
    ++m_components;
    --v7;
  }
  while ( v7 );
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
  float v4; 
  vec3_t centerOfMass; 
  tmat33_t<vec3_t> invInertiaWs; 
  tmat44_t<vec4_t> outIwTransform; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    v3 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    Physics_GetRigidBodyLinAngVel((const Physics_WorldId)this->m_worldId, v3, &this->m_linearVelocityWs, &this->m_angularVelocityWs);
    Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, v3, &outIwTransform);
    MatrixCopy44To43(&outIwTransform, &this->m_transform);
    Physics_GetRigidBodyCenterOfMass(this->m_worldId, v3, &centerOfMass);
    Physics_InverseInertiaFromLocalToWorld((const vec3_t *)&this->m_invInertiaLs, (const tmat33_t<vec3_t> *)&this->m_transform, &invInertiaWs);
    this->m_linearVelocityWs.v[0] = this->m_linearVelocityWs.v[0];
    this->m_linearVelocityWs.v[1] = this->m_linearVelocityWs.v[1];
    this->m_linearVelocityWs.v[2] = this->m_linearVelocityWs.v[2];
    this->m_angularVelocityWs.v[0] = this->m_angularVelocityWs.v[0];
    this->m_angularVelocityWs.v[1] = this->m_angularVelocityWs.v[1];
    this->m_angularVelocityWs.v[2] = this->m_angularVelocityWs.v[2];
    MatrixCopy43(&this->m_transform, &this->m_transform);
    v4 = centerOfMass.v[1];
    this->m_centerOfMassWs.v[0] = centerOfMass.v[0];
    this->m_centerOfMassWs.v[2] = centerOfMass.v[2];
    this->m_centerOfMassWs.v[1] = v4;
    MatrixCopy33(&invInertiaWs, &this->m_invInertiaWs);
    if ( !BgVehiclePhysics::CheckSanityValues(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 658, ASSERT_TYPE_ASSERT, "( CheckSanityValues() )", "BgVehiclePhysics::UpdatePhysicsSimulationParameters. Invalid values") )
      __debugbreak();
    this->m_manualIntegratedPos.v[0] = this->m_transform.m[3].v[0];
    this->m_manualIntegratedPos.v[1] = this->m_transform.m[3].v[1];
    this->m_manualIntegratedPos.v[2] = this->m_transform.m[3].v[2];
    AxisToQuat((const tmat33_t<vec3_t> *)&this->m_transform, &this->m_manualIntegratedOrientation);
    if ( !BgVehiclePhysics::CheckSanityValues(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 788, ASSERT_TYPE_ASSERT, "( CheckSanityValues() )", "BgVehiclePhysics::QueryValuesFromPhysics. Invalid values queried from physics") )
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
  float v6; 
  float v7; 
  float v8; 
  tmat44_t<vec4_t> outIwTransform; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    if ( !outPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 698, ASSERT_TYPE_ASSERT, "( outPs )", "BgVehiclePhysics::QueryValuesFromPhysics() valid player state object is needed") )
      __debugbreak();
    v5 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    Physics_GetRigidBodyLinAngVel((const Physics_WorldId)this->m_worldId, v5, &outPs->vehicleState.velocity, &outPs->vehicleState.angVelocity);
    Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, v5, &outIwTransform);
    Axis4ToAngles(&outIwTransform, &outPs->vehicleState.angles);
    v6 = outIwTransform.m[3].v[0];
    v7 = outIwTransform.m[3].v[1];
    v8 = outIwTransform.m[3].v[2];
    outPs->vehicleState.origin.v[0] = outIwTransform.m[3].v[0];
    outPs->vehicleState.origin.v[1] = v7;
    outPs->vehicleState.origin.v[2] = v8;
    this->m_manualIntegratedPos.v[0] = v6;
    this->m_manualIntegratedPos.v[1] = outPs->vehicleState.origin.v[1];
    this->m_manualIntegratedPos.v[2] = outPs->vehicleState.origin.v[2];
    AnglesToQuat(&outPs->vehicleState.angles, &this->m_manualIntegratedOrientation);
    if ( !BgVehiclePhysics::CheckSanityValues(this, &outPs->vehicleState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 719, ASSERT_TYPE_ASSERT, "( CheckSanityValues( outPs->vehicleState ) )", "BgVehiclePhysics::QueryValuesFromPhysics. Invalid target vehicleState") )
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
  unsigned int v7; 
  float v8; 
  int v11; 
  int v13; 
  int v15; 
  vec3_t angles; 
  tmat44_t<vec4_t> outIwTransform; 

  if ( !outCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 725, ASSERT_TYPE_ASSERT, "(outCmd)", (const char *)&queryFormat, "outCmd") )
    __debugbreak();
  if ( ((this->m_netcodeType - 1) & 0xFFFFFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 726, ASSERT_TYPE_ASSERT, "(RequiresFillUserCmd())", (const char *)&queryFormat, "RequiresFillUserCmd()") )
    __debugbreak();
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) && clientGeoLoaded )
  {
    v7 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, v7, &outIwTransform);
    Axis4ToAngles(&outIwTransform, &angles);
    v8 = outIwTransform.m[3].v[0];
    _XMM6 = 0i64;
    outCmd->vehOrgY = outIwTransform.m[3].v[1];
    outCmd->vehOrgX = v8;
    outCmd->vehOrgZ = outIwTransform.m[3].v[2];
    __asm { vroundss xmm3, xmm6, xmm2, 1 }
    v11 = (int)*(float *)&_XMM3;
    __asm { vroundss xmm1, xmm6, xmm3, 1 }
    v13 = (int)*(float *)&_XMM1;
    __asm { vroundss xmm1, xmm6, xmm3, 1 }
    v15 = (int)*(float *)&_XMM1;
  }
  else
  {
    LOWORD(v15) = clientGeoLoaded - 1;
    LOWORD(v13) = v15;
    *(_QWORD *)&outCmd->vehOrgX = 0i64;
    outCmd->vehOrgZ = 0.0;
    LOWORD(v11) = v15;
  }
  outCmd->vehAngles[0] = v15;
  outCmd->vehAngles[1] = v13;
  outCmd->vehAngles[2] = v11;
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
  float v6; 
  vec3_t centerOfMass; 
  vec3_t position; 
  vec4_t orientation; 
  tmat43_t<vec3_t> result; 
  tmat33_t<vec3_t> invInertiaWs; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 892, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->vehicleState.entity != this->m_entityNumber && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 893, ASSERT_TYPE_ASSERT, "( ps->vehicleState.entity == GetEntityNumber() )", "BgVehiclePhysics::PreStep() Error, must be called with a valid client predictive vehicle state") )
    __debugbreak();
  if ( !BgVehiclePhysics::CheckSanityValues(this, &ps->vehicleState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 895, ASSERT_TYPE_ASSERT, "( CheckSanityValues( ps->vehicleState ) )", "BgVehiclePhysics::QueryValuesFromPlayerState. Invalid vehicleState") )
    __debugbreak();
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    AnglesAndOriginToMatrix43(&ps->vehicleState.angles, &ps->vehicleState.origin, &result);
    v5 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    Physics_GetRigidBodyCenterOfMass(this->m_worldId, v5, &centerOfMass);
    Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, v5, &position, &orientation);
    centerOfMass.v[0] = (float)(centerOfMass.v[0] - position.v[0]) + ps->vehicleState.origin.v[0];
    centerOfMass.v[1] = (float)(centerOfMass.v[1] - position.v[1]) + ps->vehicleState.origin.v[1];
    centerOfMass.v[2] = (float)(centerOfMass.v[2] - position.v[2]) + ps->vehicleState.origin.v[2];
    Physics_InverseInertiaFromLocalToWorld((const vec3_t *)&this->m_invInertiaLs, (const tmat33_t<vec3_t> *)&result, &invInertiaWs);
    this->m_linearVelocityWs.v[0] = ps->vehicleState.velocity.v[0];
    this->m_linearVelocityWs.v[1] = ps->vehicleState.velocity.v[1];
    this->m_linearVelocityWs.v[2] = ps->vehicleState.velocity.v[2];
    this->m_angularVelocityWs.v[0] = ps->vehicleState.angVelocity.v[0];
    this->m_angularVelocityWs.v[1] = ps->vehicleState.angVelocity.v[1];
    this->m_angularVelocityWs.v[2] = ps->vehicleState.angVelocity.v[2];
    MatrixCopy43(&result, &this->m_transform);
    v6 = centerOfMass.v[1];
    this->m_centerOfMassWs.v[0] = centerOfMass.v[0];
    this->m_centerOfMassWs.v[2] = centerOfMass.v[2];
    this->m_centerOfMassWs.v[1] = v6;
    MatrixCopy33(&invInertiaWs, &this->m_invInertiaWs);
    if ( !BgVehiclePhysics::CheckSanityValues(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 658, ASSERT_TYPE_ASSERT, "( CheckSanityValues() )", "BgVehiclePhysics::UpdatePhysicsSimulationParameters. Invalid values") )
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
  if ( this->m_pauseTime < 0.0 )
  {
    this->m_pauseTime = -0.001;
  }
  else
  {
    BgVehiclePhysicsComponent::ScrNotify(this, scr_const.path_resumed);
    this->m_pauseTime = -0.001;
  }
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
void BgVehiclePhysics::SetDynamic(BgVehiclePhysics *this, float minTimeDynamic)
{
  unsigned int BodyId; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    v4 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, v4) )
    {
      v5 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      if ( Physics_IsRigidBodyKeyframed(this->m_worldId, v5) )
      {
        v6 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
        Physics_SetRigidBodyDynamic(this->m_worldId, v6);
        Physics_SetRigidBodyMass(this->m_worldId, v6, this->m_mass);
        Physics_SetRigidBodyInverseInertiaLocal(this->m_worldId, v6, &this->m_invInertiaLs);
        BgVehiclePhysics::OffsetCenterOfMass(this, &this->m_centerOfMassOffsetOriginalLs, 1);
        Physics_ActivateBody(this->m_worldId, v6);
        Physics_SetRigidBodyLinVel((const Physics_WorldId)this->m_worldId, v6, &this->m_history.m_lastLinearVel);
      }
    }
  }
  this->m_minTimeDynamic = minTimeDynamic;
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
  unsigned int v7; 
  unsigned int v8; 
  bool IsPhysicsBodyIdValid; 
  unsigned int v10; 
  Physics_WorldId m_worldId; 
  vec3_t angVel; 
  vec3_t linVel; 
  vec4_t quat; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    v7 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    AnglesToQuat(angles, &quat);
    v8 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    IsPhysicsBodyIdValid = PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, v8);
    if ( IsPhysicsBodyIdValid )
    {
      v10 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      IsPhysicsBodyIdValid = Physics_IsRigidBodyKeyframed(this->m_worldId, v10);
    }
    Physics_WarpRigidBodyTo((const Physics_WorldId)this->m_worldId, v7, position, &quat, !IsPhysicsBodyIdValid, 0);
    m_worldId = this->m_worldId;
    angVel.v[0] = 0.0;
    angVel.v[1] = 0.0;
    angVel.v[2] = 0.0;
    linVel.v[0] = 0.0;
    linVel.v[1] = 0.0;
    linVel.v[2] = 0.0;
    Physics_SetRigidBodyLinAngVel(m_worldId, v7, &linVel, &angVel);
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
void BgVehiclePhysics::SetKeyframed(BgVehiclePhysics *this, bool now)
{
  unsigned int BodyId; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 

  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
  {
    v5 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    if ( !PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, v5) || (v6 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber), !Physics_IsRigidBodyKeyframed(this->m_worldId, v6)) )
    {
      if ( now || this->m_minTimeDynamic <= 0.0 )
      {
        v7 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
        Physics_SetRigidBodyKeyframed(this->m_worldId, v7);
        Physics_SetRigidBodyMass(this->m_worldId, v7, 0.0);
        *(_QWORD *)this->m_linearVelocityWs.v = 0i64;
        *(_QWORD *)&this->m_linearVelocityWs.z = 0i64;
        *(_QWORD *)&this->m_angularVelocityWs.y = 0i64;
        Physics_SetRigidBodyLinAngVel((const Physics_WorldId)this->m_worldId, v7, &vec3_origin, &vec3_origin);
        this->m_minTimeDynamic = -1.0;
      }
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
  float v5; 
  unsigned int BodyId; 
  unsigned int v7; 
  vec3_t out; 

  AxisTransformVec3((const tmat33_t<vec3_t> *)&this->m_transform, linVelLs, &out);
  v5 = out.v[1];
  this->m_linearVelocityWs.v[0] = out.v[0];
  this->m_linearVelocityWs.v[2] = out.v[2];
  this->m_linearVelocityWs.v[1] = v5;
  if ( forceRigidBody )
  {
    BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) )
    {
      v7 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      Physics_SetRigidBodyLinVel((const Physics_WorldId)this->m_worldId, v7, &out);
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
void BgVehiclePhysics::Simulate(BgVehiclePhysics *this, const usercmd_s *cmd, const playerState_s *ps, float deltaTime, const BgVehiclePhysics *pmoveObj)
{
  const char *v8; 
  unsigned int BodyId; 
  unsigned int v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  vec3_t angVel; 
  vec3_t linVel; 

  v8 = j_va("BgVehiclePhysics::Simulate - %s", g_vehicleTypeNames[(unsigned __int8)this->m_vehicleType]);
  Sys_ProfBeginNamedEvent(0xFFFF0000, v8);
  if ( cmd && ps )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x20u) || this->m_controls.timeToAcceptInput > 0.0 )
    {
      this->ResetInputControls(this);
      this->m_inputControlsEnabled = 0;
    }
    else
    {
      this->m_inputControlsEnabled = 1;
      this->UpdatePlayerInputControls(this, cmd, ps);
    }
  }
  BgVehiclePhysics::QueryValuesFromPhysics(this);
  ((void (__fastcall *)(BgVehiclePhysics *))this->DeactivationLogic)(this);
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( !PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) || (v10 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber), !Physics_IsRigidBodyKeyframed(this->m_worldId, v10)) )
  {
    ((void (__fastcall *)(BgVehiclePhysics *))this->Step)(this);
    ((void (__fastcall *)(BgVehiclePhysics *))this->PostStep)(this);
    linVel = this->m_linearVelocityWs;
    angVel = this->m_angularVelocityWs;
    if ( pmoveObj && this->m_playerControlled )
      ((void (__fastcall *)(BgVehiclePhysics *, __int64, const BgVehiclePhysics *, vec3_t *, vec3_t *))this->BlendToPmoveObject)(this, v11, pmoveObj, &linVel, &angVel);
    v12 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    if ( PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, v12) )
    {
      v13 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      Physics_SetRigidBodyLinAngVel((const Physics_WorldId)this->m_worldId, v13, &linVel, &angVel);
    }
  }
  this->m_controls.timeToAcceptInput = this->m_controls.timeToAcceptInput - deltaTime;
  Sys_ProfEndNamedEvent();
}

/*
==============
BgVehiclePhysics::SimulateClientKeyframe
==============
*/
void BgVehiclePhysics::SimulateClientKeyframe(BgVehiclePhysics *this, const usercmd_s *cmd, const playerState_s *ps, float deltaTime)
{
  unsigned int BodyId; 
  unsigned int v8; 
  BgVehiclePhysics_vtbl *v9; 

  if ( this->m_worldId == PHYSICS_WORLD_ID_FIRST && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.cpp", 1335, ASSERT_TYPE_ASSERT, "( GetWorldId() != PHYSICS_WORLD_ID_SERVER_MAIN )", "BgVehiclePhysics::SimulateClientKeyframe() should be called on client") )
    __debugbreak();
  BodyId = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
  if ( !PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, BodyId) || (v8 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber), !Physics_IsRigidBodyKeyframed(this->m_worldId, v8)) )
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
    v9 = this->__vftable;
    this->m_inputControlsEnabled = 1;
    v9->UpdatePlayerInputControls(this, cmd, ps);
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
  vec3_t v5; 

  if ( !this->m_pmoveObject )
    BgVehiclePhysicsDeferredActionManager::DeferAction(&this->m_deferActionMgr, DA_POST_ACTIVATED_ALWAYS);
  BgVehiclePhysics::OffsetCenterOfMass(this, &this->m_centerOfMassOffsetOriginalLs, 1);
  m_vehicleSystem = this->m_vehicleSystem;
  m_entityNumber = (unsigned int)this->m_entityNumber;
  *(_QWORD *)&this->m_clientDistanceXYFromPsAvg = 0i64;
  m_vehicleSystem->PhysicsGetPlayerTransform(m_vehicleSystem, m_entityNumber, &this->m_driverEntNum, &in1, &v5);
  MatrixTransposeTransformVector43(&in1, &this->m_transform, &this->m_driverEnterLs);
  this->m_controls.timeToAcceptInput = ((float (__fastcall *)(BGVehicles *, BgVehiclePhysics *, _QWORD))this->m_vehicleSystem->PhysicsGetDelayToStartDriving)(this->m_vehicleSystem, this, (unsigned int)this->m_driverEntNum);
}

/*
==============
BgVehiclePhysics::Step
==============
*/
char BgVehiclePhysics::Step(BgVehiclePhysics *this, float deltaTime)
{
  Sys_ProfBeginNamedEvent(0xFFFF0000, "BgVehiclePhysics::Step");
  BgVehiclePhysics::ProcessComponents(this,  BgVehiclePhysicsComponent::`vcall'{40,{flat}}, deltaTime);
  ++this->m_simulationFrame;
  Sys_ProfEndNamedEvent();
  return 1;
}

/*
==============
BgVehiclePhysicsComponent::Step
==============
*/
void BgVehiclePhysicsComponent::Step(BgVehiclePhysicsComponent *this, float deltaTime)
{
  float m_pauseTime; 

  m_pauseTime = this->m_pauseTime;
  ++this->m_simCount;
  this->m_pauseTime = m_pauseTime - deltaTime;
  if ( (float)(m_pauseTime - deltaTime) < 0.0 && m_pauseTime >= 0.0 )
    BgVehiclePhysicsComponent::ScrNotify(this, scr_const.path_resumed);
}

/*
==============
BgVehiclePhysics::StopPlayerControlling
==============
*/
void BgVehiclePhysics::StopPlayerControlling(BgVehiclePhysics *this)
{
  VehiclePhysicsNetcodeType m_netcodeType; 
  BgVehiclePhysicsManager *v3; 
  BgVehiclePhysics *ObjectForPmove; 
  BgVehiclePhysicsControls::ValuePolicy DefaultPolicy; 
  BgVehicleEventSystem *v6; 

  m_netcodeType = this->m_netcodeType;
  if ( m_netcodeType == VEH_NETCODE_CLIENT_PRED || m_netcodeType == VEH_NETCODE_CLIENT_PRED_SB )
  {
    v3 = this->m_vehicleSystem->PhysicsGetVehiclePhysicsManager(this->m_vehicleSystem);
    ObjectForPmove = BgVehiclePhysicsManager::GetObjectForPmove(v3, this);
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
  v6 = this->m_vehicleSystem->PhysicsGetEventSystem(this->m_vehicleSystem);
  ((void (__fastcall *)(BgVehicleEventSystem *))v6->CarGamepadRumble)(v6);
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

  IsRigidBodyDynamic = Physics_IsRigidBodyDynamic(this->m_worldId, colliderBodyId);
  IsRigidBodyKeyframed = Physics_IsRigidBodyKeyframed(this->m_worldId, colliderBodyId);
  this->m_lastCollisionPosLs.v[0] = hitPos->v[0] - this->m_transform.m[3].v[0];
  this->m_lastCollisionPosLs.v[1] = hitPos->v[1] - this->m_transform.m[3].v[1];
  this->m_lastCollisionPosLs.v[2] = hitPos->v[2] - this->m_transform.m[3].v[2];
  if ( IsRigidBodyDynamic || IsRigidBodyKeyframed )
  {
    this->m_lastColliderBodyId = colliderBodyId;
    this->m_timeSinceLastCollisionBody = 0.0;
    this->m_lastCollisionBodyPosLs.v[0] = this->m_lastCollisionPosLs.v[0];
    this->m_lastCollisionBodyPosLs.v[1] = this->m_lastCollisionPosLs.v[1];
    this->m_lastCollisionBodyPosLs.v[2] = this->m_lastCollisionPosLs.v[2];
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
  __m128 v9; 
  __int128 v11; 
  __m128 v15; 
  __m128 v19; 
  __m128 v23; 
  __m128 v29; 
  __m128 v36; 
  __m128 v37; 
  __int128 v44; 
  __m128 v45; 
  __m128 v46; 
  __m128 v47; 

  _RBX = curPos;
  _RDI = curVel;
  v9 = *(__m128 *)&frameTime;
  HIDWORD(v44) = 0;
  v11 = v44;
  *(float *)&v11 = targetPos->v[0];
  _XMM11 = v11;
  __asm
  {
    vinsertps xmm11, xmm11, dword ptr [r9+4], 10h
    vinsertps xmm11, xmm11, dword ptr [r9+8], 20h ; ' '
  }
  v45 = _XMM11;
  v45.m128_i32[3] = 0;
  v15 = v45;
  v15.m128_f32[0] = targetVel->v[0];
  _XMM12 = v15;
  __asm
  {
    vinsertps xmm12, xmm12, xmm1, 10h
    vinsertps xmm12, xmm12, xmm2, 20h ; ' '
  }
  v46 = _XMM12;
  v46.m128_i32[3] = 0;
  v19 = v46;
  v19.m128_f32[0] = curPos->v[0];
  _XMM9 = v19;
  __asm
  {
    vinsertps xmm9, xmm9, dword ptr [rbx+4], 10h
    vinsertps xmm9, xmm9, dword ptr [rbx+8], 20h ; ' '
  }
  v47 = _XMM9;
  v47.m128_i32[3] = 0;
  v23 = v47;
  v23.m128_f32[0] = curVel->v[0];
  _XMM13 = v23;
  __asm
  {
    vinsertps xmm13, xmm13, dword ptr [rdi+4], 10h
    vinsertps xmm13, xmm13, dword ptr [rdi+8], 20h ; ' '
  }
  _XMM6 = 0i64;
  __asm
  {
    vcmpltps xmm0, xmm6, xmm14
    vmovmskps eax, xmm0
  }
  v29 = _mm_shuffle_ps(v9, v9, 0);
  _XMM7 = _mm_shuffle_ps(*(__m128 *)&k, *(__m128 *)&k, 0);
  _XMM10 = _mm_shuffle_ps(*(__m128 *)&d, *(__m128 *)&d, 0);
  if ( (_EAX & 0xF) != 15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 440, ASSERT_TYPE_ASSERT, "(!Float4AnyLe( mass, Float4Zero() ))", (const char *)&queryFormat, "!Float4AnyLe( mass, g_zero )") )
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
  v36 = _mm128_div_ps(_XMM7, (__m128)_xmm);
  v37 = _mm128_div_ps(_XMM10, (__m128)_xmm);
  _XMM7 = _mm128_div_ps(_mm128_add_ps(_mm128_mul_ps(_XMM12, _mm128_mul_ps(v29, v37)), _mm128_sub_ps(_XMM13, _mm128_mul_ps(_mm128_sub_ps(_XMM9, _XMM11), _mm128_mul_ps(v29, v36)))), _mm128_add_ps(_mm128_mul_ps(v29, v37), _mm128_add_ps(_mm128_mul_ps(v36, _mm128_mul_ps(v29, v29)), g_one.v)));
  __asm
  {
    vcmpneqps xmm1, xmm7, xmm7
    vmovmskps eax, xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 475, ASSERT_TYPE_SANITY, "( !Float4IsNaN( inOutMassVelocity ) )", (const char *)&queryFormat, "!Float4IsNaN( inOutMassVelocity )") )
    __debugbreak();
  _XMM6 = _mm128_add_ps(_mm128_mul_ps(v29, _XMM7), _XMM9);
  __asm
  {
    vcmpneqps xmm1, xmm6, xmm6
    vmovmskps eax, xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 477, ASSERT_TYPE_SANITY, "( !Float4IsNaN( inOutMassPos ) )", (const char *)&queryFormat, "!Float4IsNaN( inOutMassPos )") )
    __debugbreak();
  curPos->v[0] = _XMM6.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbx+4], xmm6, 1
    vextractps dword ptr [rbx+8], xmm6, 2
  }
  curVel->v[0] = _XMM7.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rdi+4], xmm7, 1
    vextractps dword ptr [rdi+8], xmm7, 2
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
  unsigned int v3; 
  unsigned int v4; 
  bool IsPhysicsBodyIdValid; 
  unsigned int v6; 
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
    v3 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    AnglesToQuat(&this->m_clientAuthAngles, &quat);
    v4 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
    IsPhysicsBodyIdValid = PhysicsVehicle_IsPhysicsBodyIdValid(this->m_worldId, v4);
    if ( IsPhysicsBodyIdValid )
    {
      v6 = PhysicsVehicle_GetBodyId(this->m_worldId, this->m_entityNumber);
      IsPhysicsBodyIdValid = Physics_IsRigidBodyKeyframed(this->m_worldId, v6);
    }
    Physics_WarpRigidBodyTo((const Physics_WorldId)this->m_worldId, v3, &this->m_clientAuthOrg, &quat, !IsPhysicsBodyIdValid, 0);
    m_worldId = this->m_worldId;
    angVel.v[0] = 0.0;
    angVel.v[1] = 0.0;
    angVel.v[2] = 0.0;
    linVel.v[0] = 0.0;
    linVel.v[1] = 0.0;
    linVel.v[2] = 0.0;
    Physics_SetRigidBodyLinAngVel(m_worldId, v3, &linVel, &angVel);
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
  usercmd_s *p_oldcmd; 
  __int64 v17; 
  usercmd_s *p_cmd; 
  __int128 v19; 
  __int64 v21; 
  __int64 v22; 
  BgTrace v23; 
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
    BgTrace::BgTrace(&v23);
    v4 = outMoveTime;
    v5 = 0;
    v6 = outMoveTime - ps->commandTime;
    pm->numtouch = 0;
    BG_GameInterface_OnPmoveTick(pm);
    pm->StartPhysicsPerfProbe(pm);
    pm->m_trace = &v23;
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
          LODWORD(v22) = 3;
          LODWORD(v21) = *((_DWORD *)Value + 4184) + 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        if ( (unsigned int)++*v10 >= 3 )
        {
          LODWORD(v22) = 3;
          LODWORD(v21) = *v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v21, v22) )
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
        p_oldcmd = &pm->oldcmd;
        v17 = 2i64;
        p_cmd = &pm->cmd;
        do
        {
          v19 = *(_OWORD *)&p_cmd->offHand.weaponAttachments[2];
          *(__m256i *)&p_oldcmd->buttons = *(__m256i *)&p_cmd->buttons;
          *(__m256i *)(&p_oldcmd->angles.xy + 1) = *(__m256i *)(&p_cmd->angles.xy + 1);
          *(__m256i *)&p_oldcmd->weapon.attachmentVariationIndices[1] = *(__m256i *)&p_cmd->weapon.attachmentVariationIndices[1];
          *(_OWORD *)&p_oldcmd->offHand.weaponIdx = *(_OWORD *)&p_cmd->offHand.weaponIdx;
          p_cmd = (usercmd_s *)((char *)p_cmd + 128);
          p_oldcmd = (usercmd_s *)((char *)p_oldcmd + 128);
          *(_OWORD *)&p_oldcmd[-1].sightedClientsMask.data[4] = v19;
          --v17;
        }
        while ( v17 );
        v4 = outMoveTime;
        v5 += v7;
        p_oldcmd->buttons = p_cmd->buttons;
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

