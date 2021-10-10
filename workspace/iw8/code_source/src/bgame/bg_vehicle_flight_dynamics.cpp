/*
==============
FlightDynamics::ApplyTorqueAtNonLocal
==============
*/

void __fastcall FlightDynamics::ApplyTorqueAtNonLocal(FlightDynamics *this, vec3_t *torqueVector, vec3_t *pointofApplication, float dT, float distanceMultiplier)
{
  ?ApplyTorqueAtNonLocal@FlightDynamics@@QEAAXTvec3_t@@0MM@Z(this, torqueVector, pointofApplication, dT, distanceMultiplier);
}

/*
==============
FlightDynamics::CollisionImpulseCallback
==============
*/

void __fastcall FlightDynamics::CollisionImpulseCallback(FlightDynamics *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  ?CollisionImpulseCallback@FlightDynamics@@UEAAXAEBUPhysics_SimpleCollisionCallback_Data@@@Z(this, cbData);
}

/*
==============
TerrainFollowingRadarControl::ComputeDirectionVectorsForRays
==============
*/

void __fastcall TerrainFollowingRadarControl::ComputeDirectionVectorsForRays(TerrainFollowingRadarControl *this)
{
  ?ComputeDirectionVectorsForRays@TerrainFollowingRadarControl@@QEAAXXZ(this);
}

/*
==============
FlightDynamics::CalculateFlyByWireOffset
==============
*/

void __fastcall FlightDynamics::CalculateFlyByWireOffset(FlightDynamics *this, float scale, vec3_t *result)
{
  ?CalculateFlyByWireOffset@FlightDynamics@@UEBAXMAEATvec3_t@@@Z(this, scale, result);
}

/*
==============
FlightDynamics::PerformTerrainFollowingRadar
==============
*/

void __fastcall FlightDynamics::PerformTerrainFollowingRadar(FlightDynamics *this, float dT)
{
  ?PerformTerrainFollowingRadar@FlightDynamics@@UEAAXM@Z(this, dT);
}

/*
==============
FlightDynamics::UpdateCollider
==============
*/

void __fastcall FlightDynamics::UpdateCollider(FlightDynamics *this, unsigned int colliderBodyId, const vec3_t *hitPos)
{
  ?UpdateCollider@FlightDynamics@@UEAAXIAEBTvec3_t@@@Z(this, colliderBodyId, hitPos);
}

/*
==============
FlightDynamics::StartPlayerControlling
==============
*/

void __fastcall FlightDynamics::StartPlayerControlling(FlightDynamics *this)
{
  ?StartPlayerControlling@FlightDynamics@@UEAAXXZ(this);
}

/*
==============
GetOrthogonalVector
==============
*/

void __fastcall GetOrthogonalVector(vec3_t *in, vec3_t *perpVector)
{
  ?GetOrthogonalVector@@YAXTvec3_t@@0@Z(in, perpVector);
}

/*
==============
FlightDynamicsManager::GetDynamicsMode
==============
*/

float *__fastcall FlightDynamicsManager::GetDynamicsMode(FlightDynamicsManager *this, FlightDynamicsAtmosphericModels mode)
{
  return ?GetDynamicsMode@FlightDynamicsManager@@QEAAPEAMW4FlightDynamicsAtmosphericModels@@@Z(this, mode);
}

/*
==============
TerrainFollowingRadarControl::TerrainFollowingRadarControl
==============
*/

void __fastcall TerrainFollowingRadarControl::TerrainFollowingRadarControl(TerrainFollowingRadarControl *this)
{
  ??0TerrainFollowingRadarControl@@QEAA@XZ(this);
}

/*
==============
FlightDynamicsFlightDynamicsParameters::UpdateForBoatConditions
==============
*/

void __fastcall FlightDynamicsFlightDynamicsParameters::UpdateForBoatConditions(FlightDynamicsFlightDynamicsParameters *this)
{
  ?UpdateForBoatConditions@FlightDynamicsFlightDynamicsParameters@@QEAAXXZ(this);
}

/*
==============
FlightDynamics::ApplyRotationDragAroundAxis
==============
*/

void __fastcall FlightDynamics::ApplyRotationDragAroundAxis(vec4_t *quat, vec3_t *axisDrag, const float coeff, const float dT, vec4_t *quatOut)
{
  ?ApplyRotationDragAroundAxis@FlightDynamics@@SAXTvec4_t@@PEATvec3_t@@MMPEAT2@@Z(quat, axisDrag, coeff, dT, quatOut);
}

/*
==============
FlightDynamics::ApplyGravity
==============
*/

void __fastcall FlightDynamics::ApplyGravity(FlightDynamics *this, float dT)
{
  ?ApplyGravity@FlightDynamics@@UEAAXM@Z(this, dT);
}

/*
==============
FlightDynamics::RecalculateDirectionVectors
==============
*/

void __fastcall FlightDynamics::RecalculateDirectionVectors(FlightDynamics *this)
{
  ?RecalculateDirectionVectors@FlightDynamics@@IEAAXXZ(this);
}

/*
==============
FlightDynamics::LoadControlInputs
==============
*/

void __fastcall FlightDynamics::LoadControlInputs(FlightDynamics *this, const usercmd_s *cmd, float *rawControlInputs)
{
  ?LoadControlInputs@FlightDynamics@@MEAAXPEBUusercmd_s@@PEAM@Z(this, cmd, rawControlInputs);
}

/*
==============
TerrainFollowingRadarControl::GetBlockageFactor
==============
*/

double __fastcall TerrainFollowingRadarControl::GetBlockageFactor(TerrainFollowingRadarControl *this)
{
  double result; 

  *(float *)&result = ?GetBlockageFactor@TerrainFollowingRadarControl@@QEAAMXZ(this);
  return result;
}

/*
==============
FlightDynamics::ExitSecondDerivativeMode
==============
*/

void __fastcall FlightDynamics::ExitSecondDerivativeMode(FlightDynamics *this)
{
  ?ExitSecondDerivativeMode@FlightDynamics@@QEAAXXZ(this);
}

/*
==============
FlightDynamics::PerformControlSurfaces
==============
*/

void __fastcall FlightDynamics::PerformControlSurfaces(FlightDynamics *this, float dT)
{
  ?PerformControlSurfaces@FlightDynamics@@UEAAXM@Z(this, dT);
}

/*
==============
FlightDynamics::ResetRotationQuaternion
==============
*/

void __fastcall FlightDynamics::ResetRotationQuaternion(FlightDynamics *this)
{
  ?ResetRotationQuaternion@FlightDynamics@@QEAAXXZ(this);
}

/*
==============
FD_MouseSensitivityAdjustment
==============
*/

void __fastcall FD_MouseSensitivityAdjustment(LocalClientNum_t thisClient, const vec2_t coords, vec2_t outputCoords, const float dT)
{
  ?FD_MouseSensitivityAdjustment@@YAXW4LocalClientNum_t@@Tvec2_t@@T2@M@Z(thisClient, coords, outputCoords, dT);
}

/*
==============
FlightDynamicsManager::SetFlightDynamicsModeImmediate
==============
*/

void __fastcall FlightDynamicsManager::SetFlightDynamicsModeImmediate(FlightDynamicsManager *this, int newMode)
{
  ?SetFlightDynamicsModeImmediate@FlightDynamicsManager@@QEAAXH@Z(this, newMode);
}

/*
==============
FlightDynamicsFlightDynamicsParameters::FlightDynamicsFlightDynamicsParameters
==============
*/

void __fastcall FlightDynamicsFlightDynamicsParameters::FlightDynamicsFlightDynamicsParameters(FlightDynamicsFlightDynamicsParameters *this)
{
  ??0FlightDynamicsFlightDynamicsParameters@@QEAA@XZ(this);
}

/*
==============
TerrainFollowingRadarControl::ChangeOperatingMode
==============
*/

void __fastcall TerrainFollowingRadarControl::ChangeOperatingMode(TerrainFollowingRadarControl *this, FlightDynamicsTerrainFollowingRadarModes newMode)
{
  ?ChangeOperatingMode@TerrainFollowingRadarControl@@QEAAXW4FlightDynamicsTerrainFollowingRadarModes@@@Z(this, newMode);
}

/*
==============
FlightDynamics::ComputeDeadzone
==============
*/

double __fastcall FlightDynamics::ComputeDeadzone(float value, const float deadzone)
{
  double result; 

  *(float *)&result = ?ComputeDeadzone@FlightDynamics@@SAMMM@Z(value, deadzone);
  return result;
}

/*
==============
FlightDynamics::PerformCoordinatedFlight
==============
*/

void __fastcall FlightDynamics::PerformCoordinatedFlight(FlightDynamics *this)
{
  ?PerformCoordinatedFlight@FlightDynamics@@UEAAXXZ(this);
}

/*
==============
TerrainFollowingRadarControl::SetClipMask
==============
*/

void __fastcall TerrainFollowingRadarControl::SetClipMask(TerrainFollowingRadarControl *this, int newClipMask)
{
  ?SetClipMask@TerrainFollowingRadarControl@@QEAAXH@Z(this, newClipMask);
}

/*
==============
FlightDynamics::ComputeDeadzoneRange
==============
*/

double __fastcall FlightDynamics::ComputeDeadzoneRange(float value, const float deadzone, const float range)
{
  double result; 

  *(float *)&result = ?ComputeDeadzoneRange@FlightDynamics@@SAMMMM@Z(value, deadzone, range);
  return result;
}

/*
==============
FlightDynamicsFlightDynamicsParameters::LoadDefaultAtmosphericConditions
==============
*/

void __fastcall FlightDynamicsFlightDynamicsParameters::LoadDefaultAtmosphericConditions(FlightDynamicsFlightDynamicsParameters *this)
{
  ?LoadDefaultAtmosphericConditions@FlightDynamicsFlightDynamicsParameters@@QEAAXXZ(this);
}

/*
==============
FlightDynamics::UpdatePlayerInputControls
==============
*/

void __fastcall FlightDynamics::UpdatePlayerInputControls(FlightDynamics *this, const usercmd_s *cmd, const playerState_s *ps)
{
  ?UpdatePlayerInputControls@FlightDynamics@@UEAAXPEBUusercmd_s@@PEBUplayerState_s@@@Z(this, cmd, ps);
}

/*
==============
G_FlightDynamics_SendNotify
==============
*/

void __fastcall G_FlightDynamics_SendNotify(ScriptInstanceType inst, FlightDynamics *fdEntity, scr_string_t notification)
{
  ?G_FlightDynamics_SendNotify@@YAXW4ScriptInstanceType@@PEAVFlightDynamics@@W4scr_string_t@@@Z(inst, fdEntity, notification);
}

/*
==============
FlightDynamics::Setup
==============
*/

bool __fastcall FlightDynamics::Setup(FlightDynamics *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  return ?Setup@FlightDynamics@@UEAA_NPEAVBGVehicles@@W4Physics_WorldId@@IHIPEBUVehicleDef@@@Z(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef);
}

/*
==============
FlightDynamics::ComputeLiftForces
==============
*/

void __fastcall FlightDynamics::ComputeLiftForces(FlightDynamics *this, float dT)
{
  ?ComputeLiftForces@FlightDynamics@@UEAAXM@Z(this, dT);
}

/*
==============
FlightDynamics::ApplyRotationDragToQuat
==============
*/

void __fastcall FlightDynamics::ApplyRotationDragToQuat(vec4_t *quat, const float coeff, const float dT, vec4_t *quatOut)
{
  ?ApplyRotationDragToQuat@FlightDynamics@@SAXTvec4_t@@MMPEAT2@@Z(quat, coeff, dT, quatOut);
}

/*
==============
TerrainFollowingRadarControl::GetControlSurfaceActuators
==============
*/

void __fastcall TerrainFollowingRadarControl::GetControlSurfaceActuators(TerrainFollowingRadarControl *this, float *elevatorStrength, float *rudderStrength, float *aileronStrength, float followTargetStrength)
{
  ?GetControlSurfaceActuators@TerrainFollowingRadarControl@@QEAAXPEAM00M@Z(this, elevatorStrength, rudderStrength, aileronStrength, followTargetStrength);
}

/*
==============
TerrainFollowingRadarControl::GetFlyByWireAvoidanceVector
==============
*/

void __fastcall TerrainFollowingRadarControl::GetFlyByWireAvoidanceVector(TerrainFollowingRadarControl *this, vec3_t *fbwVector)
{
  ?GetFlyByWireAvoidanceVector@TerrainFollowingRadarControl@@QEAAXPEATvec3_t@@@Z(this, fbwVector);
}

/*
==============
FlightDynamicsManager::GetPlayerGentity
==============
*/

gentity_s *__fastcall FlightDynamicsManager::GetPlayerGentity(FlightDynamicsManager *this)
{
  return ?GetPlayerGentity@FlightDynamicsManager@@QEAAPEAUgentity_s@@XZ(this);
}

/*
==============
FlightDynamicsManager::SetSpeedCruiseControlVelocity
==============
*/

void __fastcall FlightDynamicsManager::SetSpeedCruiseControlVelocity(FlightDynamicsManager *this, float minSpeed, float maxSpeed, float boostSpeed, float defaultSpeed)
{
  ?SetSpeedCruiseControlVelocity@FlightDynamicsManager@@QEAAXMMMM@Z(this, minSpeed, maxSpeed, boostSpeed, defaultSpeed);
}

/*
==============
FlightDynamics::ClipVelocities
==============
*/

void __fastcall FlightDynamics::ClipVelocities(FlightDynamics *this, vec3_t *inOutLinearVelWs, vec3_t *inOutAngularVelWs)
{
  ?ClipVelocities@FlightDynamics@@UEAAXAEATvec3_t@@0@Z(this, inOutLinearVelWs, inOutAngularVelWs);
}

/*
==============
FlightDynamics::PerformAutomaticControl
==============
*/

void __fastcall FlightDynamics::PerformAutomaticControl(FlightDynamics *this, float dT)
{
  ?PerformAutomaticControl@FlightDynamics@@UEAAXM@Z(this, dT);
}

/*
==============
FD_ScaleClamp
==============
*/

double __fastcall FD_ScaleClamp(float valueIn, float thresholdLow, float thresholdHigh)
{
  double result; 

  *(float *)&result = ?FD_ScaleClamp@@YAMMMM@Z(valueIn, thresholdLow, thresholdHigh);
  return result;
}

/*
==============
FlightDynamics::GetSoundValuesFD
==============
*/

void __fastcall FlightDynamics::GetSoundValuesFD(FlightDynamics *this, const int clientNum, int time, float *outThrottle, float *outBrake, float *outRpmNormal, float *outGear, float *outMph, bool *outTurbineStart, bool *outTurbineStop, vec3_t *outPosition)
{
  ?GetSoundValuesFD@FlightDynamics@@UEBAXHHAEAM0000AEA_N1AEATvec3_t@@@Z(this, clientNum, time, outThrottle, outBrake, outRpmNormal, outGear, outMph, outTurbineStart, outTurbineStop, outPosition);
}

/*
==============
FlightDynamics::Step
==============
*/

bool __fastcall FlightDynamics::Step(FlightDynamics *this, float deltaTime)
{
  return ?Step@FlightDynamics@@UEAA_NM@Z(this, deltaTime);
}

/*
==============
FlightDynamics::SetRotationNonLocal
==============
*/

void __fastcall FlightDynamics::SetRotationNonLocal(FlightDynamics *this, const vec3_t *rotationNormalVector, float angle)
{
  ?SetRotationNonLocal@FlightDynamics@@QEAAXPEBTvec3_t@@M@Z(this, rotationNormalVector, angle);
}

/*
==============
FlightDynamics::DebugDraw
==============
*/

void __fastcall FlightDynamics::DebugDraw(FlightDynamics *this, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?DebugDraw@FlightDynamics@@UEAAXPEBUScreenPlacement@@PEAM1MM@Z(this, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
BG_GetFlightDynamicsManager
==============
*/

FlightDynamicsManager *__fastcall BG_GetFlightDynamicsManager()
{
  return ?BG_GetFlightDynamicsManager@@YAPEAVFlightDynamicsManager@@XZ();
}

/*
==============
FlightDynamics::IsInAir
==============
*/

bool __fastcall FlightDynamics::IsInAir(FlightDynamics *this)
{
  return ?IsInAir@FlightDynamics@@UEBA_NXZ(this);
}

/*
==============
G_FD_GetEntity
==============
*/

gentity_s *__fastcall G_FD_GetEntity(__int16 ent)
{
  return ?G_FD_GetEntity@@YAPEAUgentity_s@@F@Z(ent);
}

/*
==============
FlightDynamics::SetFlyByWireInputVector
==============
*/

void __fastcall FlightDynamics::SetFlyByWireInputVector(FlightDynamics *this, vec3_t *fbwVector)
{
  ?SetFlyByWireInputVector@FlightDynamics@@UEAAXTvec3_t@@@Z(this, fbwVector);
}

/*
==============
FlightDynamics::ApplyForceAtNonLocal
==============
*/

void __fastcall FlightDynamics::ApplyForceAtNonLocal(FlightDynamics *this, vec3_t *forceVector, vec3_t *pointofApplication, float dT, float distanceMultiplier)
{
  ?ApplyForceAtNonLocal@FlightDynamics@@QEAAXTvec3_t@@0MM@Z(this, forceVector, pointofApplication, dT, distanceMultiplier);
}

/*
==============
FlightDynamics::SimulateTurbineOperation
==============
*/

void __fastcall FlightDynamics::SimulateTurbineOperation(FlightDynamics *this, float dT)
{
  ?SimulateTurbineOperation@FlightDynamics@@MEAAXM@Z(this, dT);
}

/*
==============
FlightDynamics::UpdateFlightDynamics
==============
*/

void __fastcall FlightDynamics::UpdateFlightDynamics(FlightDynamics *this, float dT, bool allowUserControl)
{
  ?UpdateFlightDynamics@FlightDynamics@@QEAAXM_N@Z(this, dT, allowUserControl);
}

/*
==============
FlightDynamics::SoundData::Setup
==============
*/

void __fastcall FlightDynamics::SoundData::Setup(FlightDynamics::SoundData *this, const VehicleDef *vehDef)
{
  ?Setup@SoundData@FlightDynamics@@QEAAXPEBUVehicleDef@@@Z(this, vehDef);
}

/*
==============
TerrainFollowingRadarControl::ScanTerrainAhead
==============
*/

void __fastcall TerrainFollowingRadarControl::ScanTerrainAhead(TerrainFollowingRadarControl *this, float dT, vec3_t *position, vec3_t *velocity, vec4_t *noseRotationQuat, float enginePower, Physics_WorldId worldId)
{
  ?ScanTerrainAhead@TerrainFollowingRadarControl@@QEAAXMTvec3_t@@0Tvec4_t@@MW4Physics_WorldId@@@Z(this, dT, position, velocity, noseRotationQuat, enginePower, worldId);
}

/*
==============
FlightDynamicsManager::ResetCameraData
==============
*/

void __fastcall FlightDynamicsManager::ResetCameraData(FlightDynamicsManager *this, LocalClientNum_t thisClient)
{
  ?ResetCameraData@FlightDynamicsManager@@QEAAXW4LocalClientNum_t@@@Z(this, thisClient);
}

/*
==============
FlightDynamics_RegisterDvars
==============
*/

void FlightDynamics_RegisterDvars(void)
{
  ?FlightDynamics_RegisterDvars@@YAXXZ();
}

/*
==============
FlightDynamics::Reset
==============
*/

void __fastcall FlightDynamics::Reset(FlightDynamics *this)
{
  ?Reset@FlightDynamics@@UEAAXXZ(this);
}

/*
==============
TerrainFollowingRadarControl::LoadTFRParameters
==============
*/

void __fastcall TerrainFollowingRadarControl::LoadTFRParameters(TerrainFollowingRadarControl *this)
{
  ?LoadTFRParameters@TerrainFollowingRadarControl@@AEAAXXZ(this);
}

/*
==============
FlightDynamicsManager::SetFlightDynamicMode
==============
*/

void __fastcall FlightDynamicsManager::SetFlightDynamicMode(FlightDynamicsManager *this, float percent)
{
  ?SetFlightDynamicMode@FlightDynamicsManager@@QEAAXM@Z(this, percent);
}

/*
==============
FlightDynamics::CalculateFlyByWireVector
==============
*/

void __fastcall FlightDynamics::CalculateFlyByWireVector(FlightDynamics *this, const float dT, int horizontalAxis, int verticalAxis, bool overideFlag)
{
  ?CalculateFlyByWireVector@FlightDynamics@@UEAAXMHH_N@Z(this, dT, horizontalAxis, verticalAxis, overideFlag);
}

/*
==============
FlightDynamics::DestroyPhysics
==============
*/

void __fastcall FlightDynamics::DestroyPhysics(FlightDynamics *this)
{
  ?DestroyPhysics@FlightDynamics@@UEAAXXZ(this);
}

/*
==============
FlightDynamics::StopPlayerControlling
==============
*/

void __fastcall FlightDynamics::StopPlayerControlling(FlightDynamics *this)
{
  ?StopPlayerControlling@FlightDynamics@@UEAAXXZ(this);
}

/*
==============
FlightDynamicsManager::SetDefaultAxis
==============
*/

void __fastcall FlightDynamicsManager::SetDefaultAxis(FlightDynamicsManager *this)
{
  ?SetDefaultAxis@FlightDynamicsManager@@QEAAXXZ(this);
}

/*
==============
FlightDynamics::CreatePhysics
==============
*/

bool __fastcall FlightDynamics::CreatePhysics(FlightDynamics *this, const VehiclePhysicsDef *vehPhysicsDef)
{
  return ?CreatePhysics@FlightDynamics@@UEAA_NPEBUVehiclePhysicsDef@@@Z(this, vehPhysicsDef);
}

/*
==============
FlightDynamicsGyroscope::FlightDynamicsGyroscope
==============
*/

void __fastcall FlightDynamicsGyroscope::FlightDynamicsGyroscope(FlightDynamicsGyroscope *this)
{
  ??0FlightDynamicsGyroscope@@QEAA@XZ(this);
}

/*
==============
FlightDynamics::GetFlyByWireStatus
==============
*/

bool __fastcall FlightDynamics::GetFlyByWireStatus(FlightDynamics *this)
{
  return ?GetFlyByWireStatus@FlightDynamics@@UEBA_NXZ(this);
}

/*
==============
FlightDynamics::BlendToPmoveObject
==============
*/

void __fastcall FlightDynamics::BlendToPmoveObject(FlightDynamics *this, float deltaTime, const BgVehiclePhysics *pmoveObj, vec3_t *inOutLinearVelWs, vec3_t *inOutAngularVelWs)
{
  ?BlendToPmoveObject@FlightDynamics@@UEAAXMAEBVBgVehiclePhysics@@AEATvec3_t@@1@Z(this, deltaTime, pmoveObj, inOutLinearVelWs, inOutAngularVelWs);
}

/*
==============
TerrainFollowingRadarControl::RadarBeamInfo::UpdateBeam
==============
*/

void __fastcall TerrainFollowingRadarControl::RadarBeamInfo::UpdateBeam(TerrainFollowingRadarControl::RadarBeamInfo *this, float dT, float decay, float dopplerMultiplier, float dopplerDecay)
{
  ?UpdateBeam@RadarBeamInfo@TerrainFollowingRadarControl@@QEAAXMMMM@Z(this, dT, decay, dopplerMultiplier, dopplerDecay);
}

/*
==============
FlightDynamics::QuatToUnitQuatDistance
==============
*/

float __fastcall FlightDynamics::QuatToUnitQuatDistance(vec4_t *quat1)
{
  return ?QuatToUnitQuatDistance@FlightDynamics@@SAMTvec4_t@@@Z(quat1);
}

/*
==============
FlightDynamics::TerrainFollowingRadar
==============
*/

double __fastcall FlightDynamics::TerrainFollowingRadar(FlightDynamics *this, bool useEnemyToVector, float range)
{
  double result; 

  *(float *)&result = ?TerrainFollowingRadar@FlightDynamics@@IEAAM_NM@Z(this, useEnemyToVector, range);
  return result;
}

/*
==============
FlightDynamicsManager::RegisterDvars
==============
*/

void __fastcall FlightDynamicsManager::RegisterDvars(FlightDynamicsManager *this)
{
  ?RegisterDvars@FlightDynamicsManager@@QEAAXXZ(this);
}

/*
==============
FlightDynamics::SetPilotInputStrength
==============
*/

void __fastcall FlightDynamics::SetPilotInputStrength(FlightDynamics *this, float strength)
{
  ?SetPilotInputStrength@FlightDynamics@@QEAAXM@Z(this, strength);
}

/*
==============
TerrainFollowingRadarControl::GetAvoidanceStrength
==============
*/

double __fastcall TerrainFollowingRadarControl::GetAvoidanceStrength(TerrainFollowingRadarControl *this)
{
  double result; 

  *(float *)&result = ?GetAvoidanceStrength@TerrainFollowingRadarControl@@QEAAMXZ(this);
  return result;
}

/*
==============
FlightDynamics::ApplyRotationDrag
==============
*/

void __fastcall FlightDynamics::ApplyRotationDrag(FlightDynamics *this, float coeff)
{
  ?ApplyRotationDrag@FlightDynamics@@QEAAXM@Z(this, coeff);
}

/*
==============
FlightDynamics::ResetInputControls
==============
*/

void __fastcall FlightDynamics::ResetInputControls(FlightDynamics *this)
{
  ?ResetInputControls@FlightDynamics@@UEAAXXZ(this);
}

/*
==============
BG_FD_AdjustSensitivyDividers
==============
*/

void __fastcall BG_FD_AdjustSensitivyDividers(const float hSensDiv, const float vSensDiv, const float lerpSpeed)
{
  ?BG_FD_AdjustSensitivyDividers@@YAXMMM@Z(hSensDiv, vSensDiv, lerpSpeed);
}

/*
==============
FlightDynamics::GetSoundData
==============
*/

const FlightDynamics::SoundData *__fastcall FlightDynamics::GetSoundData(FlightDynamics *this)
{
  return ?GetSoundData@FlightDynamics@@QEBAAEBUSoundData@1@XZ(this);
}

/*
==============
FlightDynamics::NormalizePlayerInputs
==============
*/

void __fastcall FlightDynamics::NormalizePlayerInputs(FlightDynamics *this)
{
  ?NormalizePlayerInputs@FlightDynamics@@QEAAXXZ(this);
}

/*
==============
FlightDynamics::EnterSecondDerivativeMode
==============
*/

void __fastcall FlightDynamics::EnterSecondDerivativeMode(FlightDynamics *this)
{
  ?EnterSecondDerivativeMode@FlightDynamics@@QEAAXXZ(this);
}

/*
==============
FlightDynamicsManager::FlightDynamicsManager
==============
*/

void __fastcall FlightDynamicsManager::FlightDynamicsManager(FlightDynamicsManager *this)
{
  ??0FlightDynamicsManager@@QEAA@XZ(this);
}

/*
==============
FlightDynamics::ComputeGForceMagnitude
==============
*/

double __fastcall FlightDynamics::ComputeGForceMagnitude(FlightDynamics *this, float dT)
{
  double result; 

  *(float *)&result = ?ComputeGForceMagnitude@FlightDynamics@@IEAAMM@Z(this, dT);
  return result;
}

/*
==============
FlightDynamics::UpdatePosition
==============
*/

void __fastcall FlightDynamics::UpdatePosition(FlightDynamics *this, float dT)
{
  ?UpdatePosition@FlightDynamics@@QEAAXM@Z(this, dT);
}

/*
==============
FlightDynamics::PerformFlyByWire
==============
*/

void __fastcall FlightDynamics::PerformFlyByWire(FlightDynamics *this, float dT)
{
  ?PerformFlyByWire@FlightDynamics@@UEAAXM@Z(this, dT);
}

/*
==============
FlightDynamics::ComputeGForceMagnitudeFromVelocities
==============
*/

float __fastcall FlightDynamics::ComputeGForceMagnitudeFromVelocities(const vec3_t *initialVelocity, const vec3_t *newVelocity)
{
  return ?ComputeGForceMagnitudeFromVelocities@FlightDynamics@@SAMTvec3_t@@0@Z(initialVelocity, newVelocity);
}

/*
==============
FlightDynamics::SetRotationLocal
==============
*/

void __fastcall FlightDynamics::SetRotationLocal(FlightDynamics *this, const vec3_t *rotationNormalVector, float angle)
{
  ?SetRotationLocal@FlightDynamics@@QEAAXPEBTvec3_t@@M@Z(this, rotationNormalVector, angle);
}

/*
==============
FlightDynamicsFlightDynamicsParameters::UpdateForRotaryWingConditions
==============
*/

void __fastcall FlightDynamicsFlightDynamicsParameters::UpdateForRotaryWingConditions(FlightDynamicsFlightDynamicsParameters *this)
{
  ?UpdateForRotaryWingConditions@FlightDynamicsFlightDynamicsParameters@@QEAAXXZ(this);
}

/*
==============
FlightDynamics::SetInitialState
==============
*/

void __fastcall FlightDynamics::SetInitialState(FlightDynamics *this, vec3_t *position, vec4_t *orientation, vec3_t *velocity, int clipMask, FlightDynamicsStatus status)
{
  ?SetInitialState@FlightDynamics@@QEAAXTvec3_t@@Tvec4_t@@0HW4FlightDynamicsStatus@@@Z(this, position, orientation, velocity, clipMask, status);
}

/*
==============
FlightDynamics::GetFlightDynamicsParameter
==============
*/

void __fastcall FlightDynamics::GetFlightDynamicsParameter(FlightDynamics *this, vec3_t *position, vec3_t *orientation, vec3_t *velocity, tmat33_t<vec3_t> *matrix, vec4_t *quaternion, vec4_t *angularVelocity, vec3_t *fbwVector, float *cruiseLow, float *cruiseHigh, float *cruiseBoost)
{
  ?GetFlightDynamicsParameter@FlightDynamics@@QEBAXPEATvec3_t@@00PEAT?$tmat33_t@Tvec3_t@@@@PEATvec4_t@@20PEAM33@Z(this, position, orientation, velocity, matrix, quaternion, angularVelocity, fbwVector, cruiseLow, cruiseHigh, cruiseBoost);
}

/*
==============
GetRotationQuatFromVectors
==============
*/

void __fastcall GetRotationQuatFromVectors(vec3_t *vec1, vec3_t *vec2, vec4_t *quat)
{
  ?GetRotationQuatFromVectors@@YAXTvec3_t@@0Tvec4_t@@@Z(vec1, vec2, quat);
}

/*
==============
TerrainFollowingRadarControl::Initialize
==============
*/

void __fastcall TerrainFollowingRadarControl::Initialize(TerrainFollowingRadarControl *this, int newClipMask)
{
  ?Initialize@TerrainFollowingRadarControl@@QEAAXH@Z(this, newClipMask);
}

/*
==============
TerrainFollowingRadarControl::RadarBeamInfo::FireBeam
==============
*/

float __fastcall TerrainFollowingRadarControl::RadarBeamInfo::FireBeam(TerrainFollowingRadarControl::RadarBeamInfo *this, vec3_t *position, vec4_t *orientationQuat, float beamRange, float forwardIncrease, vec3_t *rotatedBeam, int clipMask, float beamExpo, vec3_t *rotatedBeamScaled, Physics_WorldId worldId)
{
  return ?FireBeam@RadarBeamInfo@TerrainFollowingRadarControl@@QEAAMTvec3_t@@Tvec4_t@@MM0HM0W4Physics_WorldId@@@Z(this, position, orientationQuat, beamRange, forwardIncrease, rotatedBeam, clipMask, beamExpo, rotatedBeamScaled, worldId);
}

/*
==============
FlightDynamics::PerformThrusterControl
==============
*/

void __fastcall FlightDynamics::PerformThrusterControl(FlightDynamics *this, float dT)
{
  ?PerformThrusterControl@FlightDynamics@@UEAAXM@Z(this, dT);
}

/*
==============
FlightDynamics::SetFlyByWireStatus
==============
*/

void __fastcall FlightDynamics::SetFlyByWireStatus(FlightDynamics *this, bool enabled)
{
  ?SetFlyByWireStatus@FlightDynamics@@UEAAX_N@Z(this, enabled);
}

/*
==============
TerrainFollowingRadarControl::GetParam
==============
*/

double __fastcall TerrainFollowingRadarControl::GetParam(TerrainFollowingRadarControl *this, FlightDynamicsTerrainFollowingRadarParamType param)
{
  double result; 

  *(float *)&result = ?GetParam@TerrainFollowingRadarControl@@QEAAMW4FlightDynamicsTerrainFollowingRadarParamType@@@Z(this, param);
  return result;
}

/*
==============
FlightDynamics::SoundData::Reset
==============
*/

void __fastcall FlightDynamics::SoundData::Reset(FlightDynamics::SoundData *this)
{
  ?Reset@SoundData@FlightDynamics@@QEAAXXZ(this);
}

/*
==============
FlightDynamics::SoundData::FetchSound
==============
*/

unsigned int __fastcall FlightDynamics::SoundData::FetchSound(FlightDynamics::SoundData *this, const char *name)
{
  return ?FetchSound@SoundData@FlightDynamics@@QEBAIPEBD@Z(this, name);
}

/*
==============
FlightDynamics::GetExternalRotationMagnitude
==============
*/

void __fastcall FlightDynamics::GetExternalRotationMagnitude(FlightDynamics *this, vec4_t *externalRotation, vec3_t *angVel)
{
  ?GetExternalRotationMagnitude@FlightDynamics@@QEAAXTvec4_t@@Tvec3_t@@@Z(this, externalRotation, angVel);
}

/*
==============
FlightDynamicsGyroscope::UpdateTailrotor
==============
*/

void __fastcall FlightDynamicsGyroscope::UpdateTailrotor(FlightDynamicsGyroscope *this, const tmat43_t<vec3_t> *matrix, const vec3_t *linearVelocity, const vec3_t *angularVelocity, float dT, float *rudderOutput)
{
  ?UpdateTailrotor@FlightDynamicsGyroscope@@QEAAXAEBT?$tmat43_t@Tvec3_t@@@@AEBTvec3_t@@1MAEAM@Z(this, matrix, linearVelocity, angularVelocity, dT, rudderOutput);
}

/*
==============
FlightDynamics::QuatToQuatDistance
==============
*/

float __fastcall FlightDynamics::QuatToQuatDistance(vec4_t *quat1, vec4_t *quat2)
{
  return ?QuatToQuatDistance@FlightDynamics@@SAMTvec4_t@@0@Z(quat1, quat2);
}

/*
==============
FlightDynamics::SelectStickMode
==============
*/

void __fastcall FlightDynamics::SelectStickMode(FlightDynamics *this)
{
  ?SelectStickMode@FlightDynamics@@UEAAXXZ(this);
}

/*
==============
FlightDynamics::UpdateFromVectors
==============
*/

void __fastcall FlightDynamics::UpdateFromVectors(FlightDynamics *this, vec3_t *position, vec4_t *quaternion, vec3_t *velocity, vec3_t *fbwVector)
{
  ?UpdateFromVectors@FlightDynamics@@QEAAXTvec3_t@@Tvec4_t@@0PEAT2@@Z(this, position, quaternion, velocity, fbwVector);
}

/*
==============
FlightDynamics::SupportsFeature
==============
*/

bool __fastcall FlightDynamics::SupportsFeature(FlightDynamics *this, BgVehiclePhysicsFeature feat)
{
  return ?SupportsFeature@FlightDynamics@@UEBA_NW4BgVehiclePhysicsFeature@@@Z(this, feat);
}

/*
==============
FlightDynamicsFlightDynamicsParameters::FlightDynamicsFlightDynamicsParameters
==============
*/
void FlightDynamicsFlightDynamicsParameters::FlightDynamicsFlightDynamicsParameters(FlightDynamicsFlightDynamicsParameters *this)
{
  FlightDynamicsFlightDynamicsParameters::LoadDefaultAtmosphericConditions(this);
}

/*
==============
FlightDynamicsGyroscope::FlightDynamicsGyroscope
==============
*/
void FlightDynamicsGyroscope::FlightDynamicsGyroscope(FlightDynamicsGyroscope *this)
{
  *(_QWORD *)this->m_ControlInputs = 0i64;
  *(_QWORD *)&this->m_ControlInputs[2] = 0i64;
  *(_QWORD *)&this->m_ControlInputs[4] = 0i64;
  *(_QWORD *)&this->m_ControlInputs[6] = 0i64;
  *(_QWORD *)&this->m_ControlInputs[8] = 0i64;
  *(_QWORD *)&this->m_ControlInputs[10] = 0i64;
  *(_QWORD *)&this->m_ControlInputs[12] = 0i64;
  *(_OWORD *)this->m_GyroAileronUpVector.v = 0ui64;
  *(_QWORD *)&this->m_GyroElevatorUpVector.y = 0i64;
  *(_QWORD *)this->m_fbwOutputs.v = 0i64;
  this->m_fbwOutputs.v[2] = 0.0;
  *(_QWORD *)this->m_GyroRudderForwardVector.v = 0i64;
  this->m_GyroRudderForwardVector.v[2] = 0.0;
  this->m_GyroRudderForwardVectorSet = 0;
  *(_QWORD *)&this->m_GyroRudderStrength = 0i64;
  *(_QWORD *)&this->m_GyroRudderReverseActuator = 0i64;
  this->m_GyroGPSlocationSet = 0;
  this->m_GyroGPSlocation = 0ui64;
  *(_OWORD *)this->m_GyroVelocityDelta.v = 0ui64;
  this->m_GyroElevatorRate = 0.0;
  this->m_GyroAltitudeSet = 0;
  *(_QWORD *)&this->m_GyroAltiudeStrength = 0i64;
}

/*
==============
FlightDynamicsManager::FlightDynamicsManager
==============
*/
void FlightDynamicsManager::FlightDynamicsManager(FlightDynamicsManager *this)
{
  FlightDynamicCameraData *m_fdCameraData; 
  __int64 v3; 
  FlightDynamicsFlightDynamicsParameters *m_FlightDynamicModels; 
  __int64 v5; 

  this->m_AirfoilData.m_MaxCL = 0.75;
  this->m_AirfoilData.m_Area = 1.0;
  this->m_AirfoilData.m_CDslope = 1.0;
  m_fdCameraData = this->m_fdCameraData;
  this->m_AirfoilData.m_CDbase = 1.0;
  v3 = 2i64;
  *(_QWORD *)&this->m_AirfoilData.m_AoAadjustment = 1065353216i64;
  this->m_AirfoilData.m_LiftBaseCurve = 0.050000001;
  this->m_AirfoilData.m_LiftSlopeCurve = 5.0;
  do
  {
    FlightDynamicCameraData::FlightDynamicCameraData(m_fdCameraData++);
    --v3;
  }
  while ( v3 );
  m_FlightDynamicModels = this->m_FlightDynamicModels;
  v5 = 3i64;
  do
  {
    FlightDynamicsFlightDynamicsParameters::FlightDynamicsFlightDynamicsParameters(m_FlightDynamicModels++);
    --v5;
  }
  while ( v5 );
  *(_QWORD *)this->m_UpAxis.v = 0i64;
  this->m_UpAxis.v[2] = 1.0;
  *(_QWORD *)this->m_ForwardAxis.v = 1065353216i64;
  *(_QWORD *)&this->m_ForwardAxis.z = 0i64;
  *(_QWORD *)&this->m_ElevatorAxis.y = 1065353216i64;
  this->m_Use1stPerson = FD_DEFAULT_1ST_PERSON;
  this->m_Prefer1stPerson = FD_DEFAULT_1ST_PERSON;
  this->m_PlayerEnt = 2047;
  FlightDynamicsFlightDynamicsParameters::LoadDefaultAtmosphericConditions(this->m_FlightDynamicModels);
  FlightDynamicsFlightDynamicsParameters::LoadDefaultAtmosphericConditions(&this->m_FlightDynamicModels[1]);
  *(_QWORD *)&this->m_FlightDynamicModels[1].m_Parameter[56] = 0i64;
  this->m_FlightDynamicModels[1].m_Parameter[58] = 10.0;
  this->m_FlightDynamicModels[1].m_Parameter[88] = -1.0;
  this->m_FlightDynamicModels[1].m_Parameter[52] = 2.0;
  this->m_FlightDynamicModels[1].m_Parameter[53] = 2.0;
  this->m_FlightDynamicModels[1].m_Parameter[54] = 8.0;
  this->m_FlightDynamicModels[1].m_Parameter[73] = 1.5;
  this->m_FlightDynamicModels[1].m_Parameter[74] = 1.0;
  *(_QWORD *)&this->m_FlightDynamicModels[1].m_Parameter[61] = 1125515264i64;
  this->m_FlightDynamicModels[1].m_Parameter[76] = 250.0;
  this->m_FlightDynamicModels[1].m_Parameter[97] = -50.0;
  this->m_FlightDynamicModels[1].m_Parameter[99] = 1000.0;
  this->m_FlightDynamicModels[1].m_Parameter[98] = 0.0;
  this->m_FlightDynamicModels[1].m_Parameter[100] = 1000.0;
  this->m_FlightDynamicModels[1].m_Parameter[81] = -9.8000002;
  this->m_FlightDynamicModels[1].m_Parameter[79] = 0.89999998;
  this->m_FlightDynamicModels[1].m_Parameter[80] = 0.15000001;
  this->m_FlightDynamicModels[1].m_Parameter[85] = 0.0;
  this->m_FlightDynamicModels[1].m_Parameter[87] = 1.0;
  this->m_FlightDynamicModels[1].m_Parameter[86] = 2.0;
  *(_QWORD *)&this->m_FlightDynamicModels[1].m_Parameter[38] = 0i64;
  this->m_FlightDynamicModels[1].m_Parameter[40] = 0.0;
  *(_QWORD *)&this->m_FlightDynamicModels[1].m_Parameter[41] = 1065353216i64;
  this->m_FlightDynamicModels[1].m_Parameter[43] = 0.0;
  this->m_FlightDynamicModels[1].m_Parameter[44] = 1.0;
  this->m_FlightDynamicModels[1].m_Parameter[45] = 0.2;
  this->m_FlightDynamicModels[1].m_Parameter[46] = 3.0;
  FlightDynamicsFlightDynamicsParameters::LoadDefaultAtmosphericConditions(&this->m_FlightDynamicModels[2]);
  this->m_FlightDynamicModels[2].m_Parameter[79] = 0.001;
  this->m_FlightDynamicModels[2].m_Parameter[80] = 0.001;
  *(_QWORD *)&this->m_FlightDynamicModels[2].m_Parameter[38] = 0i64;
  this->m_FlightDynamicModels[2].m_Parameter[40] = 0.0;
  *(_QWORD *)&this->m_FlightDynamicModels[2].m_Parameter[41] = 1065353216i64;
  this->m_FlightDynamicModels[2].m_Parameter[43] = 0.0;
  this->m_FlightDynamicModels[2].m_Parameter[44] = 1.0;
  this->m_FlightDynamicModels[2].m_Parameter[45] = 0.2;
  this->m_FlightDynamicModels[2].m_Parameter[46] = 3.0;
}

/*
==============
TerrainFollowingRadarControl::TerrainFollowingRadarControl
==============
*/
void TerrainFollowingRadarControl::TerrainFollowingRadarControl(TerrainFollowingRadarControl *this)
{
  TerrainFollowingRadarControl::LoadTFRParameters(this);
  TerrainFollowingRadarControl::ComputeDirectionVectorsForRays(this);
  this->m_minSpeed = TFR_LOW_SPEED_VALUE;
  this->m_maxSpeed = TFR_HIGH_SPEED_VALUE;
}

/*
==============
FlightDynamics::ApplyForceAtNonLocal
==============
*/
void FlightDynamics::ApplyForceAtNonLocal(FlightDynamics *this, vec3_t *forceVector, vec3_t *pointofApplication, float dT, float distanceMultiplier)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v14; 
  vec3_t cross; 
  vec3_t v1; 

  v5 = dT * forceVector->v[1];
  v6 = pointofApplication->v[1];
  this->m_Velocity.v[0] = (float)(dT * forceVector->v[0]) + this->m_Velocity.v[0];
  v7 = v5 + this->m_Velocity.v[1];
  v8 = dT * forceVector->v[2];
  this->m_Velocity.v[1] = v7;
  v9 = v8 + this->m_Velocity.v[2];
  v10 = pointofApplication->v[0];
  this->m_Velocity.v[2] = v9;
  v11 = v10 - this->m_Position.v[0];
  v12 = v6 - this->m_Position.v[1];
  v1.v[0] = v11;
  v1.v[2] = pointofApplication->v[2] - this->m_Position.v[2];
  v1.v[1] = v12;
  Vec3Cross(forceVector, &v1, &cross);
  cross.v[1] = distanceMultiplier * cross.v[1];
  v14 = fsqrt((float)((float)(cross.v[1] * cross.v[1]) + (float)((float)(distanceMultiplier * cross.v[0]) * (float)(distanceMultiplier * cross.v[0]))) + (float)((float)(distanceMultiplier * cross.v[2]) * (float)(distanceMultiplier * cross.v[2])));
  cross.v[0] = distanceMultiplier * cross.v[0];
  cross.v[2] = distanceMultiplier * cross.v[2];
  FlightDynamics::SetRotationNonLocal(this, &cross, v14 * dT);
}

/*
==============
FlightDynamics::ApplyGravity
==============
*/
void FlightDynamics::ApplyGravity(FlightDynamics *this, float dT)
{
  ;
}

/*
==============
FlightDynamics::ApplyRotationDrag
==============
*/
void FlightDynamics::ApplyRotationDrag(FlightDynamics *this, float coeff)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v7; 
  float angleOut; 
  vec3_t axisOut; 
  vec4_t quat; 

  v2 = this->m_RotationQuaternion.v[0];
  v3 = this->m_RotationQuaternion.v[1];
  v4 = this->m_RotationQuaternion.v[2];
  v5 = this->m_RotationQuaternion.v[3];
  v7 = fsqrt((float)((float)((float)(v2 * v2) + (float)(v3 * v3)) + (float)(v4 * v4)) + (float)(v5 * v5));
  axisOut.v[2] = 0.0;
  axisOut.v[1] = 0.0;
  axisOut.v[0] = 0.0;
  quat.v[0] = v2;
  quat.v[1] = v3;
  quat.v[2] = v4;
  quat.v[3] = v5;
  if ( v7 != 0.0 )
  {
    quat.v[0] = (float)(1.0 / v7) * v2;
    quat.v[1] = (float)(1.0 / v7) * v3;
    quat.v[2] = (float)(1.0 / v7) * v4;
    quat.v[3] = (float)(1.0 / v7) * v5;
  }
  FD_QuatToAngleAxis(&quat, &angleOut, &axisOut);
  LODWORD(axisOut.v[0]) ^= _xmm;
  LODWORD(axisOut.v[2]) ^= _xmm;
  LODWORD(axisOut.v[1]) ^= _xmm;
  FlightDynamics::SetRotationLocal(this, &axisOut, coeff * angleOut);
}

/*
==============
FlightDynamics::ApplyRotationDragAroundAxis
==============
*/
void FlightDynamics::ApplyRotationDragAroundAxis(vec4_t *quat, vec3_t *axisDrag, const float coeff, const float dT, vec4_t *quatOut)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  double v14; 
  float v15; 
  float outRadians; 
  float s; 
  vec3_t outAxis; 
  vec4_t quata; 
  vec4_t in2; 

  v5 = quat->v[0];
  v6 = quat->v[1];
  v7 = quat->v[2];
  v8 = quat->v[3];
  v10 = fsqrt((float)((float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7)) + (float)(v8 * v8));
  outAxis.v[2] = 0.0;
  outAxis.v[1] = 0.0;
  outAxis.v[0] = 0.0;
  quata.v[0] = v5;
  quata.v[1] = v6;
  quata.v[2] = v7;
  quata.v[3] = v8;
  if ( v10 != 0.0 )
  {
    quata.v[0] = (float)(1.0 / v10) * v5;
    quata.v[1] = v6 * (float)(1.0 / v10);
    quata.v[2] = (float)(1.0 / v10) * v7;
    quata.v[3] = (float)(1.0 / v10) * v8;
  }
  QuatToAngleRadAxis(&quata, &outRadians, &outAxis);
  v11 = (float)(outRadians * outAxis.v[1]) * axisDrag->v[1];
  outAxis.v[0] = outRadians * outAxis.v[0];
  v12 = outAxis.v[0] * axisDrag->v[0];
  outAxis.v[1] = outRadians * outAxis.v[1];
  v13 = (float)(v12 + v11) + (float)((float)(outRadians * outAxis.v[2]) * axisDrag->v[2]);
  outAxis.v[2] = outRadians * outAxis.v[2];
  v14 = I_fclamp(dT * coeff, 0.0, 1.0);
  FastSinCos((float)(*(float *)&v14 * v13) * 0.5, &s, &in2.v[3]);
  v15 = COERCE_FLOAT(LODWORD(s) ^ _xmm) * axisDrag->v[1];
  in2.v[0] = COERCE_FLOAT(LODWORD(s) ^ _xmm) * axisDrag->v[0];
  in2.v[2] = COERCE_FLOAT(LODWORD(s) ^ _xmm) * axisDrag->v[2];
  in2.v[1] = v15;
  QuatMultiply(&quata, &in2, quatOut);
  Vec4Normalize(quatOut);
}

/*
==============
FlightDynamics::ApplyRotationDragToQuat
==============
*/
void FlightDynamics::ApplyRotationDragToQuat(vec4_t *quat, const float coeff, const float dT, vec4_t *quatOut)
{
  vec4_t to; 
  vec4_t from; 

  from = *quat;
  if ( !quatOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2308, ASSERT_TYPE_ASSERT, "(quatOut)", (const char *)&queryFormat, "quatOut") )
    __debugbreak();
  to = (vec4_t)_xmm;
  QuatSlerp(&from, &to, dT, quatOut);
  Vec4Normalize(quatOut);
}

/*
==============
FlightDynamics::ApplyTorqueAtNonLocal
==============
*/
void FlightDynamics::ApplyTorqueAtNonLocal(FlightDynamics *this, vec3_t *torqueVector, vec3_t *pointofApplication, float dT, float distanceMultiplier)
{
  float v8; 
  float v9; 
  float v10; 
  vec3_t v1; 
  vec3_t cross; 

  FlightDynamics::SetRotationNonLocal(this, torqueVector, fsqrt((float)((float)(torqueVector->v[0] * torqueVector->v[0]) + (float)(torqueVector->v[1] * torqueVector->v[1])) + (float)(torqueVector->v[2] * torqueVector->v[2])) * dT);
  v8 = pointofApplication->v[1] - this->m_Position.v[1];
  v1.v[0] = pointofApplication->v[0] - this->m_Position.v[0];
  v1.v[2] = pointofApplication->v[2] - this->m_Position.v[2];
  v1.v[1] = v8;
  Vec3Cross(torqueVector, &v1, &cross);
  v9 = (float)(distanceMultiplier * cross.v[1]) * dT;
  v10 = distanceMultiplier * cross.v[2];
  this->m_Velocity.v[0] = (float)((float)(distanceMultiplier * cross.v[0]) * dT) + this->m_Velocity.v[0];
  this->m_Velocity.v[1] = v9 + this->m_Velocity.v[1];
  this->m_Velocity.v[2] = (float)(v10 * dT) + this->m_Velocity.v[2];
}

/*
==============
BG_FD_AdjustSensitivyDividers
==============
*/
void BG_FD_AdjustSensitivyDividers(const float hSensDiv, const float vSensDiv, const float lerpSpeed)
{
  FBW_USER_INPUT_RUDDER_EXPO = hSensDiv;
  FBW_USER_INPUT_ELEVATOR_EXPO = vSensDiv;
  FBW_ELEVATOR_TO_FBW_MULTIPLIER = lerpSpeed;
}

/*
==============
BG_GetFlightDynamicsManager
==============
*/
FlightDynamicsManager *BG_GetFlightDynamicsManager()
{
  return &sFlightDynamicsManager;
}

/*
==============
FlightDynamics::BlendToPmoveObject
==============
*/
void FlightDynamics::BlendToPmoveObject(FlightDynamics *this, float deltaTime, const BgVehiclePhysics *pmoveObj, vec3_t *inOutLinearVelWs, vec3_t *inOutAngularVelWs)
{
  __int128 v5; 
  const dvar_t *v6; 
  float v10; 
  unsigned int PhysicsBodyId; 
  const dvar_t *v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v21; 
  float v25; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  vec4_t position; 
  vec4_t cur; 
  vec4_t orientation; 
  vec4_t in2; 
  __int128 v37; 

  v6 = DVARBOOL_fd_pmove_use_alternate_blend;
  if ( !DVARBOOL_fd_pmove_use_alternate_blend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_pmove_use_alternate_blend") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    if ( BgVehiclePhysics::IsPhysicsBodyIdValid(this) )
    {
      this->m_pmoveTargetPosition.v[0] = pmoveObj->m_manualIntegratedPos.v[0];
      v10 = pmoveObj->m_manualIntegratedPos.v[1];
      v37 = v5;
      this->m_pmoveTargetPosition.v[1] = v10;
      this->m_pmoveTargetPosition.v[2] = pmoveObj->m_manualIntegratedPos.v[2];
      in2 = pmoveObj->m_manualIntegratedOrientation;
      if ( BgVehiclePhysics::IsPhysicsBodyIdValid(this) )
      {
        PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
        Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, PhysicsBodyId, (vec3_t *)&position, &orientation);
      }
      v12 = DCONST_DVARFLT_bg_vehNetLerpSpeed;
      cur.v[2] = position.v[2];
      *(double *)cur.v = *(double *)position.v;
      if ( !DCONST_DVARFLT_bg_vehNetLerpSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetLerpSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      BgVehiclePhysics::DampLerp((vec3_t *)&cur, &this->m_pmoveTargetPosition, deltaTime, v12->current.value);
      if ( deltaTime <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 677, ASSERT_TYPE_ASSERT, "(deltaTime > 0.001f)", (const char *)&queryFormat, "deltaTime > EQUAL_EPSILON") )
        __debugbreak();
      v13 = 1.0 / deltaTime;
      v14 = (float)(cur.v[0] - position.v[0]) * (float)(1.0 / deltaTime);
      v15 = (float)(cur.v[1] - position.v[1]) * (float)(1.0 / deltaTime);
      v16 = (float)(cur.v[2] - position.v[2]) * (float)(1.0 / deltaTime);
      if ( deltaTime <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 693, ASSERT_TYPE_ASSERT, "(deltaTime > 1.0E-6)", (const char *)&queryFormat, "deltaTime > ZERO_EPSILON") )
        __debugbreak();
      LODWORD(position.v[0]) = LODWORD(orientation.v[0]) ^ _xmm;
      LODWORD(position.v[1]) = LODWORD(orientation.v[1]) ^ _xmm;
      LODWORD(position.v[2]) = LODWORD(orientation.v[2]) ^ _xmm;
      position.v[3] = orientation.v[3];
      QuatMultiply(&position, &in2, &cur);
      _XMM1 = LODWORD(cur.v[0]) ^ (unsigned __int128)(unsigned int)_xmm;
      _XMM3 = 0i64;
      __asm
      {
        vcmpless xmm0, xmm3, xmm5
        vblendvps xmm0, xmm1, xmm2, xmm0
      }
      v21 = *(float *)&_XMM0 * (float)(v13 * 0.5);
      _XMM1 = LODWORD(cur.v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
      __asm
      {
        vcmpless xmm0, xmm3, xmm5
        vblendvps xmm0, xmm1, xmm2, xmm0
      }
      v25 = *(float *)&_XMM0 * (float)(v13 * 0.5);
      _XMM1 = LODWORD(cur.v[2]) ^ (unsigned __int128)(unsigned int)_xmm;
      __asm
      {
        vcmpless xmm0, xmm3, xmm5
        vblendvps xmm0, xmm1, xmm2, xmm0
      }
      position.v[2] = *(float *)&_XMM0 * (float)(v13 * 0.5);
      position.v[0] = v21;
      position.v[1] = v25;
      if ( (LODWORD(v21) & 0x7F800000) == 2139095040 || (LODWORD(v25) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT(*(float *)&_XMM0 * (float)(v13 * 0.5)) & 0x7F800000) == 2139095040 )
      {
        v29 = 0.0;
        *(_QWORD *)inOutAngularVelWs->v = 0i64;
      }
      else
      {
        v29 = position.v[2];
        *(double *)inOutAngularVelWs->v = *(double *)position.v;
      }
      inOutAngularVelWs->v[2] = v29;
      v30 = FD_PMOVELWEIGHT;
      v31 = FD_SIMVELWEIGHT;
      v32 = FD_SIMVELWEIGHT * inOutLinearVelWs->v[1];
      inOutLinearVelWs->v[0] = (float)(v14 * FD_PMOVELWEIGHT) + (float)(FD_SIMVELWEIGHT * inOutLinearVelWs->v[0]);
      inOutLinearVelWs->v[1] = (float)(v15 * v30) + v32;
      inOutLinearVelWs->v[2] = (float)(v31 * inOutLinearVelWs->v[2]) + (float)(v16 * v30);
      this->ClipVelocities(this, inOutLinearVelWs, inOutAngularVelWs);
    }
  }
  else
  {
    BgVehiclePhysics::BlendToPmoveObject(this, deltaTime, pmoveObj, inOutLinearVelWs, inOutAngularVelWs);
  }
}

/*
==============
FlightDynamics::CalculateFlyByWireOffset
==============
*/
void FlightDynamics::CalculateFlyByWireOffset(FlightDynamics *this, float scale, vec3_t *result)
{
  result->v[0] = scale * this->m_FlyByWireNormalizedVector.v[0];
  result->v[1] = scale * this->m_FlyByWireNormalizedVector.v[1];
  result->v[2] = scale * this->m_FlyByWireNormalizedVector.v[2];
}

/*
==============
FlightDynamics::CalculateFlyByWireVector
==============
*/
void FlightDynamics::CalculateFlyByWireVector(FlightDynamics *this, const float dT, int horizontalAxis, int verticalAxis)
{
  ;
}

/*
==============
TerrainFollowingRadarControl::ChangeOperatingMode
==============
*/
void TerrainFollowingRadarControl::ChangeOperatingMode(TerrainFollowingRadarControl *this, FlightDynamicsTerrainFollowingRadarModes newMode)
{
  __int64 v2; 
  int v5; 

  v2 = newMode;
  if ( (unsigned int)newMode >= TFR_MODES_TOTAL )
  {
    v5 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4240, ASSERT_TYPE_ASSERT, "(unsigned)( newMode ) < (unsigned)( TFR_MODES_TOTAL )", "newMode doesn't index TFR_MODES_TOTAL\n\t%i not in [0, %i)", newMode, v5) )
      __debugbreak();
  }
  this->m_currentOperatingMode = v2;
  if ( this->m_modeInitizalied[v2] )
    TerrainFollowingRadarControl::ComputeDirectionVectorsForRays(this);
}

/*
==============
FlightDynamics::ClipVelocities
==============
*/
void FlightDynamics::ClipVelocities(FlightDynamics *this, vec3_t *inOutLinearVelWs, vec3_t *inOutAngularVelWs)
{
  float v6; 
  double TopSpeedForward; 
  float v8; 
  double TopSpeedReverse; 
  unsigned __int8 v10; 
  char v11; 
  __int128 v12; 
  float v16; 
  float v17; 
  float *v18; 
  float v19; 
  double v20; 
  float v21; 
  double v22; 
  float v23; 
  double v24; 
  double GlobalTopSpeed; 
  double v26; 
  vec3_t vec; 
  vec3_t outVelLs; 

  if ( !this->SupportsFeature(this, VPFEAT_NO_SPEED_LIMITER) )
  {
    v6 = (float)((float)(this->m_transform.m[0].v[1] * inOutLinearVelWs->v[1]) + (float)(inOutLinearVelWs->v[0] * this->m_transform.m[0].v[0])) + (float)(inOutLinearVelWs->v[2] * this->m_transform.m[0].v[2]);
    TopSpeedForward = BgVehiclePhysics::GetTopSpeedForward(this);
    vec.v[0] = *(float *)&TopSpeedForward;
    v8 = *(float *)&TopSpeedForward;
    TopSpeedReverse = BgVehiclePhysics::GetTopSpeedReverse(this);
    vec.v[1] = *(float *)&TopSpeedReverse;
    v10 = v8 > 0.001 && v6 > v8;
    v11 = *(float *)&TopSpeedReverse > 0.001 && v6 < COERCE_FLOAT(LODWORD(TopSpeedReverse) ^ _xmm);
    if ( (v10 || v11) && ((float)(inOutLinearVelWs->v[0] * inOutLinearVelWs->v[0]) > 0.0000010000001 || (float)(inOutLinearVelWs->v[1] * inOutLinearVelWs->v[1]) > 0.0000010000001) )
    {
      if ( v10 == v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 757, ASSERT_TYPE_ASSERT, "( clipFwSpeed != clipBwSpeed )", "BgVehiclePhysics::ClipPlaneVelocities: to clip forward and backward speed at same time!") )
        __debugbreak();
      BgVehiclePhysics::ComputeVelocityLocalSpace(this, inOutLinearVelWs, &outVelLs);
      v12 = LODWORD(outVelLs.v[0]);
      *(float *)&v12 = fsqrt((float)(outVelLs.v[0] * outVelLs.v[0]) + (float)(outVelLs.v[1] * outVelLs.v[1]));
      _XMM2 = v12;
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm1, xmm0
      }
      v16 = outVelLs.v[0] * (float)(1.0 / *(float *)&_XMM0);
      v17 = outVelLs.v[1] * (float)(1.0 / *(float *)&_XMM0);
      if ( 1 - (unsigned int)v10 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", 1 - v10, 2) )
        __debugbreak();
      v18 = &vec.v[-v10 + 1];
      v19 = v17 * *v18;
      outVelLs.v[0] = v16 * *v18;
      outVelLs.v[1] = v19;
      AxisTransformVec3((const tmat33_t<vec3_t> *)&this->m_transform, &outVelLs, inOutLinearVelWs);
    }
    if ( this->m_topAngularSpeedLs.v[0] != 0.0 || this->m_topAngularSpeedLs.v[1] != 0.0 || this->m_topAngularSpeedLs.v[2] != 0.0 )
    {
      BgVehiclePhysics::ComputeVelocityLocalSpace(this, inOutAngularVelWs, &vec);
      v20 = I_fclamp(vec.v[0], COERCE_FLOAT(LODWORD(this->m_topAngularSpeedLs.v[0]) ^ _xmm), this->m_topAngularSpeedLs.v[0]);
      v21 = this->m_topAngularSpeedLs.v[1];
      vec.v[0] = *(float *)&v20;
      v22 = I_fclamp(vec.v[1], COERCE_FLOAT(LODWORD(v21) ^ _xmm), v21);
      v23 = this->m_topAngularSpeedLs.v[2];
      vec.v[1] = *(float *)&v22;
      v24 = I_fclamp(vec.v[2], COERCE_FLOAT(LODWORD(v23) ^ _xmm), v23);
      vec.v[2] = *(float *)&v24;
      AxisTransformVec3((const tmat33_t<vec3_t> *)&this->m_transform, &vec, inOutAngularVelWs);
    }
    GlobalTopSpeed = BgVehiclePhysics::GetGlobalTopSpeed(this);
    v26 = I_fclamp(this->m_linearVelocityWs.v[2], COERCE_FLOAT(LODWORD(GlobalTopSpeed) ^ _xmm), *(float *)&GlobalTopSpeed);
    this->m_linearVelocityWs.v[2] = *(float *)&v26;
  }
}

/*
==============
FlightDynamics::CollisionImpulseCallback
==============
*/

void __fastcall FlightDynamics::CollisionImpulseCallback(FlightDynamics *this, const Physics_SimpleCollisionCallback_Data *cbData)
{
  BgVehiclePhysics::CollisionImpulseCallback(this, cbData);
}

/*
==============
FlightDynamics::ComputeDeadzone
==============
*/

float __fastcall FlightDynamics::ComputeDeadzone(double value, double deadzone)
{
  __int128 v5; 

  _XMM4 = *(_OWORD *)&deadzone;
  if ( COERCE_FLOAT(LODWORD(value) & _xmm) <= *(float *)&deadzone )
    return 0.0;
  v5 = *(_OWORD *)&value;
  *(float *)&v5 = *(float *)&value + *(float *)&deadzone;
  _XMM2 = v5;
  __asm
  {
    vcmpltss xmm0, xmm4, xmm0
    vblendvps xmm3, xmm2, xmm1, xmm0
  }
  return *(float *)&_XMM3 / (float)(1.0 - *(float *)&deadzone);
}

/*
==============
FlightDynamics::ComputeDeadzoneRange
==============
*/

float __fastcall FlightDynamics::ComputeDeadzoneRange(double value, double deadzone, const float range)
{
  __int128 v7; 

  _XMM4 = *(_OWORD *)&deadzone;
  if ( COERCE_FLOAT(LODWORD(value) & _xmm) <= *(float *)&deadzone )
    return 0.0;
  v7 = *(_OWORD *)&value;
  *(float *)&v7 = *(float *)&value + *(float *)&deadzone;
  _XMM2 = v7;
  __asm
  {
    vcmpltss xmm0, xmm4, xmm0
    vblendvps xmm2, xmm2, xmm1, xmm0
  }
  return *(float *)&_XMM2 / (float)(range - *(float *)&deadzone);
}

/*
==============
TerrainFollowingRadarControl::ComputeDirectionVectorsForRays
==============
*/
void TerrainFollowingRadarControl::ComputeDirectionVectorsForRays(TerrainFollowingRadarControl *this)
{
  __int32 v2; 
  __int64 v3; 
  __int64 v4; 
  __int128 v5; 
  __int128 v6; 
  float *v7; 
  __int64 v8; 
  float v9; 
  double v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v16; 
  __int128 v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v30; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 
  __int128 v37; 
  float v38; 
  float *v39; 
  double v40; 
  __int128 v41; 
  __int128 v42; 
  __int128 v46; 
  __int128 v47; 
  float v48; 
  __int128 v49; 
  __int128 v53; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 
  __int128 v63; 
  __int128 v67; 

  v2 = 2 * this->m_currentOperatingMode;
  if ( (unsigned int)v2 >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 3967, ASSERT_TYPE_ASSERT, "(unsigned)( modeIndex ) < (unsigned)( TFR_MODES_TOTAL * TFR_PARAMETER_BLOCKS_MAX )", "modeIndex doesn't index TFR_MODES_TOTAL * TFR_PARAMETER_BLOCKS_MAX\n\t%i not in [0, %i)", 2 * this->m_currentOperatingMode, 6) )
    __debugbreak();
  v3 = 2i64;
  v4 = v2;
  v5 = 0i64;
  v6 = 0i64;
  v7 = &this->m_radarBeams[1].beamDirectionVector.v[2];
  v8 = 2i64;
  v9 = this->m_parameters[v4][8];
  do
  {
    *(v7 - 11) = v9;
    v10 = j___libm_sse2_sincosf_();
    *(v7 - 10) = *(float *)&v10;
    LODWORD(v10) = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v10, (__m128)*(unsigned __int64 *)&v10, 1).m128_u32[0];
    *(v7 - 9) = COERCE_FLOAT(LODWORD(v10) ^ _xmm);
    v11 = *((unsigned int *)v7 - 11);
    v12 = v11;
    *(float *)&v12 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(*(v7 - 10) * *(v7 - 10))) + (float)(COERCE_FLOAT(LODWORD(v10) ^ _xmm) * COERCE_FLOAT(LODWORD(v10) ^ _xmm)));
    _XMM3 = v12;
    __asm
    {
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm7, xmm0
    }
    *(v7 - 11) = *(float *)&v11 * (float)(1.0 / *(float *)&_XMM0);
    *(v7 - 10) = (float)(1.0 / *(float *)&_XMM0) * *(v7 - 10);
    *(v7 - 9) = (float)(1.0 / *(float *)&_XMM0) * *(v7 - 9);
    *(v7 - 7) = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
    *(v7 - 8) = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
    *(v7 - 5) = 0.0;
    *(v7 - 4) = this->m_parameters[v4][10];
    *(v7 - 3) = this->m_parameters[v4][11];
    v17 = v6;
    *(float *)&v17 = *(float *)&v6 + 0.78539819;
    v16 = v17;
    *(v7 - 2) = v9;
    *(double *)&_XMM0 = j___libm_sse2_sincosf_();
    *(v7 - 1) = *(float *)&_XMM0;
    LODWORD(_XMM0) = _mm_shuffle_ps((__m128)(unsigned __int64)_XMM0, (__m128)(unsigned __int64)_XMM0, 1).m128_u32[0];
    *v7 = COERCE_FLOAT(_XMM0 ^ _xmm);
    v18 = *((unsigned int *)v7 - 2);
    v19 = v18;
    *(float *)&v19 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)(*(v7 - 1) * *(v7 - 1))) + (float)(COERCE_FLOAT(_XMM0 ^ _xmm) * COERCE_FLOAT(_XMM0 ^ _xmm)));
    _XMM3 = v19;
    __asm
    {
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm7, xmm0
    }
    *(v7 - 2) = *(float *)&v18 * (float)(1.0 / *(float *)&_XMM0);
    *(v7 - 1) = (float)(1.0 / *(float *)&_XMM0) * *(v7 - 1);
    *v7 = (float)(1.0 / *(float *)&_XMM0) * *v7;
    v7[2] = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
    v7[1] = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
    v7[4] = 0.0;
    v7[5] = this->m_parameters[v4][10];
    v7[6] = this->m_parameters[v4][11];
    v24 = v16;
    *(float *)&v24 = *(float *)&v16 + 0.78539819;
    v23 = v24;
    v7[7] = v9;
    *(double *)&_XMM0 = j___libm_sse2_sincosf_();
    v7[8] = *(float *)&_XMM0;
    LODWORD(_XMM0) = _mm_shuffle_ps((__m128)(unsigned __int64)_XMM0, (__m128)(unsigned __int64)_XMM0, 1).m128_u32[0];
    v7[9] = COERCE_FLOAT(_XMM0 ^ _xmm);
    v25 = *((unsigned int *)v7 + 7);
    v26 = v25;
    *(float *)&v26 = fsqrt((float)((float)(*(float *)&v25 * *(float *)&v25) + (float)(v7[8] * v7[8])) + (float)(COERCE_FLOAT(_XMM0 ^ _xmm) * COERCE_FLOAT(_XMM0 ^ _xmm)));
    _XMM3 = v26;
    __asm
    {
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm7, xmm0
    }
    v7[7] = *(float *)&v25 * (float)(1.0 / *(float *)&_XMM0);
    v7[8] = (float)(1.0 / *(float *)&_XMM0) * v7[8];
    v7[9] = (float)(1.0 / *(float *)&_XMM0) * v7[9];
    v7[11] = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
    v7[10] = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
    v7[13] = 0.0;
    v7[14] = this->m_parameters[v4][10];
    v7[15] = this->m_parameters[v4][11];
    v31 = v23;
    *(float *)&v31 = *(float *)&v23 + 0.78539819;
    v30 = v31;
    v7[16] = v9;
    *(double *)&_XMM0 = j___libm_sse2_sincosf_();
    v7[17] = *(float *)&_XMM0;
    v7 += 36;
    LODWORD(_XMM0) = _mm_shuffle_ps((__m128)(unsigned __int64)_XMM0, (__m128)(unsigned __int64)_XMM0, 1).m128_u32[0];
    *(v7 - 18) = COERCE_FLOAT(_XMM0 ^ _xmm);
    v32 = *((unsigned int *)v7 - 20);
    v33 = v32;
    *(float *)&v33 = fsqrt((float)((float)(*(float *)&v32 * *(float *)&v32) + (float)(*(v7 - 19) * *(v7 - 19))) + (float)(COERCE_FLOAT(_XMM0 ^ _xmm) * COERCE_FLOAT(_XMM0 ^ _xmm)));
    _XMM3 = v33;
    __asm
    {
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm7, xmm0
    }
    *(v7 - 20) = *(float *)&v32 * (float)(1.0 / *(float *)&_XMM0);
    *(v7 - 19) = (float)(1.0 / *(float *)&_XMM0) * *(v7 - 19);
    *(v7 - 18) = (float)(1.0 / *(float *)&_XMM0) * *(v7 - 18);
    *(v7 - 16) = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
    *(v7 - 17) = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
    *(v7 - 14) = 0.0;
    *(v7 - 13) = this->m_parameters[v4][10];
    *(v7 - 12) = this->m_parameters[v4][11];
    v37 = v30;
    *(float *)&v37 = *(float *)&v30 + 0.78539819;
    v6 = v37;
    --v8;
  }
  while ( v8 );
  v38 = v9 + this->m_parameters[v4][9];
  v39 = &this->m_radarBeams[9].beamDirectionVector.v[2];
  do
  {
    *(v39 - 11) = v38;
    v40 = j___libm_sse2_sincosf_();
    *(v39 - 10) = *(float *)&v40;
    LODWORD(v40) = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v40, (__m128)*(unsigned __int64 *)&v40, 1).m128_u32[0];
    *(v39 - 9) = COERCE_FLOAT(LODWORD(v40) ^ _xmm);
    v41 = *((unsigned int *)v39 - 11);
    v42 = v41;
    *(float *)&v42 = fsqrt((float)((float)(*(float *)&v41 * *(float *)&v41) + (float)(*(v39 - 10) * *(v39 - 10))) + (float)(COERCE_FLOAT(LODWORD(v40) ^ _xmm) * COERCE_FLOAT(LODWORD(v40) ^ _xmm)));
    _XMM3 = v42;
    __asm
    {
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm7, xmm0
    }
    *(v39 - 11) = *(float *)&v41 * (float)(1.0 / *(float *)&_XMM0);
    *(v39 - 10) = (float)(1.0 / *(float *)&_XMM0) * *(v39 - 10);
    *(v39 - 9) = (float)(1.0 / *(float *)&_XMM0) * *(v39 - 9);
    *(v39 - 7) = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
    *(v39 - 8) = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
    *(v39 - 5) = 0.0;
    *(v39 - 4) = this->m_parameters[v4][12];
    *(v39 - 3) = this->m_parameters[v4][13];
    v47 = v5;
    *(float *)&v47 = *(float *)&v5 + 0.78539819;
    v46 = v47;
    *(v39 - 2) = v38;
    *(double *)&_XMM0 = j___libm_sse2_sincosf_();
    *(v39 - 1) = *(float *)&_XMM0;
    LODWORD(_XMM0) = _mm_shuffle_ps((__m128)(unsigned __int64)_XMM0, (__m128)(unsigned __int64)_XMM0, 1).m128_u32[0];
    *v39 = COERCE_FLOAT(_XMM0 ^ _xmm);
    v48 = *(v39 - 2);
    v49 = *((unsigned int *)v39 - 1);
    *(float *)&v49 = fsqrt((float)((float)(*(v39 - 1) * *(v39 - 1)) + (float)(v48 * v48)) + (float)(COERCE_FLOAT(_XMM0 ^ _xmm) * COERCE_FLOAT(_XMM0 ^ _xmm)));
    _XMM4 = v49;
    __asm
    {
      vcmpless xmm0, xmm4, xmm10
      vblendvps xmm0, xmm4, xmm7, xmm0
    }
    *(v39 - 2) = v48 * (float)(1.0 / *(float *)&_XMM0);
    *(v39 - 1) = (float)(1.0 / *(float *)&_XMM0) * *(v39 - 1);
    *v39 = (float)(1.0 / *(float *)&_XMM0) * *v39;
    v39[2] = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
    v39[1] = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
    v39[4] = 0.0;
    v39[5] = this->m_parameters[v4][12];
    v39[6] = this->m_parameters[v4][13];
    v54 = v46;
    *(float *)&v54 = *(float *)&v46 + 0.78539819;
    v53 = v54;
    v39[7] = v38;
    *(double *)&_XMM0 = j___libm_sse2_sincosf_();
    v39[8] = *(float *)&_XMM0;
    LODWORD(_XMM0) = _mm_shuffle_ps((__m128)(unsigned __int64)_XMM0, (__m128)(unsigned __int64)_XMM0, 1).m128_u32[0];
    v39[9] = COERCE_FLOAT(_XMM0 ^ _xmm);
    v55 = *((unsigned int *)v39 + 7);
    v56 = v55;
    *(float *)&v56 = fsqrt((float)((float)(*(float *)&v55 * *(float *)&v55) + (float)(v39[8] * v39[8])) + (float)(COERCE_FLOAT(_XMM0 ^ _xmm) * COERCE_FLOAT(_XMM0 ^ _xmm)));
    _XMM3 = v56;
    __asm
    {
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm7, xmm0
    }
    v39[7] = *(float *)&v55 * (float)(1.0 / *(float *)&_XMM0);
    v39[8] = (float)(1.0 / *(float *)&_XMM0) * v39[8];
    v39[9] = (float)(1.0 / *(float *)&_XMM0) * v39[9];
    v39[11] = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
    v39[10] = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
    v39[13] = 0.0;
    v39[14] = this->m_parameters[v4][12];
    v39[15] = this->m_parameters[v4][13];
    v61 = v53;
    *(float *)&v61 = *(float *)&v53 + 0.78539819;
    v60 = v61;
    v39[16] = v38;
    *(double *)&_XMM0 = j___libm_sse2_sincosf_();
    v39[17] = *(float *)&_XMM0;
    v39 += 36;
    LODWORD(_XMM0) = _mm_shuffle_ps((__m128)(unsigned __int64)_XMM0, (__m128)(unsigned __int64)_XMM0, 1).m128_u32[0];
    *(v39 - 18) = COERCE_FLOAT(_XMM0 ^ _xmm);
    v62 = *((unsigned int *)v39 - 20);
    v63 = v62;
    *(float *)&v63 = fsqrt((float)((float)(*(float *)&v62 * *(float *)&v62) + (float)(*(v39 - 19) * *(v39 - 19))) + (float)(COERCE_FLOAT(_XMM0 ^ _xmm) * COERCE_FLOAT(_XMM0 ^ _xmm)));
    _XMM3 = v63;
    __asm
    {
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm7, xmm0
    }
    *(v39 - 20) = *(float *)&v62 * (float)(1.0 / *(float *)&_XMM0);
    *(v39 - 19) = (float)(1.0 / *(float *)&_XMM0) * *(v39 - 19);
    *(v39 - 18) = (float)(1.0 / *(float *)&_XMM0) * *(v39 - 18);
    *(v39 - 16) = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
    *(v39 - 17) = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
    *(v39 - 14) = 0.0;
    *(v39 - 13) = this->m_parameters[v4][12];
    *(v39 - 12) = this->m_parameters[v4][13];
    v67 = v60;
    *(float *)&v67 = *(float *)&v60 + 0.78539819;
    v5 = v67;
    --v3;
  }
  while ( v3 );
}

/*
==============
FlightDynamics::ComputeGForceMagnitude
==============
*/
float FlightDynamics::ComputeGForceMagnitude(FlightDynamics *this, float dT)
{
  float v2; 
  float v3; 
  float v4; 
  float result; 

  v2 = this->m_PreviousVelocity.v[0] - this->m_Velocity.v[0];
  this->m_GforceVector.v[0] = v2;
  v3 = this->m_PreviousVelocity.v[1] - this->m_Velocity.v[1];
  this->m_GforceVector.v[1] = v3;
  v4 = this->m_PreviousVelocity.v[2] - this->m_Velocity.v[2];
  result = fsqrt((float)((float)(v3 * v3) + (float)(v2 * v2)) + (float)(v4 * v4)) * (float)(1.0 / dT);
  this->m_GforceVector.v[2] = v4;
  this->m_GforceMagnitude = result;
  return result;
}

/*
==============
FlightDynamics::ComputeGForceMagnitudeFromVelocities
==============
*/
float FlightDynamics::ComputeGForceMagnitudeFromVelocities(const vec3_t *initialVelocity, const vec3_t *newVelocity)
{
  float v2; 
  float v3; 

  v2 = initialVelocity->v[1] - newVelocity->v[1];
  v3 = initialVelocity->v[2] - newVelocity->v[2];
  return fsqrt((float)((float)(v2 * v2) + (float)((float)(initialVelocity->v[0] - newVelocity->v[0]) * (float)(initialVelocity->v[0] - newVelocity->v[0]))) + (float)(v3 * v3));
}

/*
==============
FlightDynamics::ComputeLiftForces
==============
*/
void FlightDynamics::ComputeLiftForces(FlightDynamics *this, float dT)
{
  ;
}

/*
==============
FlightDynamics::CreatePhysics
==============
*/
char FlightDynamics::CreatePhysics(FlightDynamics *this, const VehiclePhysicsDef *vehPhysicsDef)
{
  unsigned int PhysicsBodyId; 

  BgVehiclePhysics::CreatePhysics(this, vehPhysicsDef);
  if ( (unsigned __int8)(this->m_vehicleType - 12) <= 1u )
  {
    PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
    PhysicsVehicle_SetNoGravity(this->m_worldId, PhysicsBodyId);
  }
  return 1;
}

/*
==============
FlightDynamics::DebugDraw
==============
*/
void FlightDynamics::DebugDraw(FlightDynamics *this, const ScreenPlacement *scrPlace, float *x, float *y)
{
  ;
}

/*
==============
FlightDynamics::DestroyPhysics
==============
*/

void __fastcall FlightDynamics::DestroyPhysics(FlightDynamics *this)
{
  BgVehiclePhysics::DestroyPhysics(this);
}

/*
==============
FlightDynamics::EnterSecondDerivativeMode
==============
*/
void FlightDynamics::EnterSecondDerivativeMode(FlightDynamics *this)
{
  this->m_RotationVelocity = 0ui64;
  this->m_RotationVelocity.v[3] = 1.0;
  this->m_SavedRotationQuaternion = this->m_RotationQuaternion;
}

/*
==============
FlightDynamics::ExitSecondDerivativeMode
==============
*/
void FlightDynamics::ExitSecondDerivativeMode(FlightDynamics *this)
{
  QuatMultiply(&this->m_SavedRotationQuaternion, &this->m_RotationInertiaQuat, &this->m_RotationQuaternion);
}

/*
==============
FD_MouseSensitivityAdjustment
==============
*/
void FD_MouseSensitivityAdjustment(LocalClientNum_t thisClient, const vec2_t coords, vec2_t outputCoords, const float dT)
{
  __int64 v4; 
  float v5; 
  float v6; 
  double v7; 
  float v8; 
  double v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  double v18; 
  float v19; 
  float v20; 
  double v21; 
  float v22; 
  double v23; 
  float v24; 
  double v25; 
  double v26; 
  double v27; 
  float v28; 
  double v29; 
  float v30; 
  double v31; 

  v4 = thisClient;
  v5 = coords.v[0] - sFlightDynamicsManager.m_MousePosition[thisClient].v[0];
  v6 = coords.v[1] - sFlightDynamicsManager.m_MousePosition[thisClient].v[1];
  v7 = I_pow(fsqrt((float)(v6 * v6) + (float)(v5 * v5)) * 0.0078740157, FD_MOUSE_INPUT_STRENGTH_EXPO);
  v8 = 0.0;
  v9 = I_fclamp(*(float *)&v7, 0.0, 1.0);
  v10 = sFlightDynamicsManager.m_MouseVelocity[v4].v[0];
  v11 = (float)((float)(1.0 - *(float *)&v9) * FD_MOUSE_FULL_INPUT_DRAG) + (float)(*(float *)&v9 * FD_MOUSE_NO_INPUT_DRAG);
  v12 = (float)(v11 * v10) * dT;
  if ( COERCE_FLOAT(LODWORD(v12) & _xmm) <= COERCE_FLOAT(LODWORD(v10) & _xmm) )
    v13 = v10 - v12;
  else
    v13 = 0.0;
  sFlightDynamicsManager.m_MouseVelocity[v4].v[0] = v13;
  v14 = sFlightDynamicsManager.m_MouseVelocity[v4].v[1];
  v15 = (float)(v11 * v14) * dT;
  if ( COERCE_FLOAT(LODWORD(v15) & _xmm) <= COERCE_FLOAT(LODWORD(v14) & _xmm) )
    v8 = v14 - v15;
  v16 = FD_MOUSE_ACCELERATION_DAMPENER_EXPO;
  sFlightDynamicsManager.m_MouseVelocity[v4].v[1] = v8;
  v17 = v5 * FD_MOUSE_VELOCITY_SCALE_H;
  v18 = FD_ComputeExpo(v5, v16);
  v19 = v17 - (float)(*(float *)&v18 * FD_MOUSE_ACCELERATION_DAMPENER_MULT);
  v20 = v6 * FD_MOUSE_VELOCITY_SCALE_V;
  v21 = FD_ComputeExpo(v6, FD_MOUSE_ACCELERATION_DAMPENER_EXPO);
  v22 = *(float *)&v21 * FD_MOUSE_ACCELERATION_DAMPENER_MULT;
  sFlightDynamicsManager.m_MouseVelocity[v4].v[0] = (float)(v19 * dT) + sFlightDynamicsManager.m_MouseVelocity[v4].v[0];
  sFlightDynamicsManager.m_MouseVelocity[v4].v[1] = (float)((float)(v20 - v22) * dT) + sFlightDynamicsManager.m_MouseVelocity[v4].v[1];
  v23 = I_fclamp(sFlightDynamicsManager.m_MouseVelocity[v4].v[0], COERCE_FLOAT(LODWORD(FD_MOUSE_MAX_VELOCITY) ^ _xmm), FD_MOUSE_MAX_VELOCITY);
  v24 = FD_MOUSE_MAX_VELOCITY;
  sFlightDynamicsManager.m_MouseVelocity[v4].v[0] = *(float *)&v23;
  v25 = I_fclamp(sFlightDynamicsManager.m_MouseVelocity[v4].v[1], COERCE_FLOAT(LODWORD(v24) ^ _xmm), v24);
  sFlightDynamicsManager.m_MouseVelocity[v4].v[1] = *(float *)&v25;
  sFlightDynamicsManager.m_MousePosition[v4].v[0] = (float)(dT * sFlightDynamicsManager.m_MouseVelocity[v4].v[0]) + sFlightDynamicsManager.m_MousePosition[v4].v[0];
  sFlightDynamicsManager.m_MousePosition[v4].v[1] = (float)(dT * sFlightDynamicsManager.m_MouseVelocity[v4].v[1]) + sFlightDynamicsManager.m_MousePosition[v4].v[1];
  v26 = I_fclamp(sFlightDynamicsManager.m_MousePosition[v4].v[0], -1.0, 1.0);
  sFlightDynamicsManager.m_MousePosition[v4].v[0] = *(float *)&v26;
  v27 = I_fclamp(sFlightDynamicsManager.m_MousePosition[v4].v[1], -1.0, 1.0);
  v28 = FD_MAX_MOUSE_THROW;
  sFlightDynamicsManager.m_MousePosition[v4].v[1] = *(float *)&v27;
  v29 = I_fclamp(sFlightDynamicsManager.m_MousePosition[v4].v[0], COERCE_FLOAT(LODWORD(v28) ^ _xmm), v28);
  v30 = FD_MAX_MOUSE_THROW;
  sFlightDynamicsManager.m_MousePosition[v4].v[0] = *(float *)&v29;
  v31 = I_fclamp(sFlightDynamicsManager.m_MousePosition[v4].v[1], COERCE_FLOAT(LODWORD(v30) ^ _xmm), v30);
  sFlightDynamicsManager.m_MousePosition[v4].v[1] = *(float *)&v31;
}

/*
==============
FD_ScaleClamp
==============
*/
float FD_ScaleClamp(float valueIn, float thresholdLow, float thresholdHigh)
{
  if ( valueIn < thresholdLow )
    return 0.0;
  if ( valueIn <= thresholdHigh )
    return (float)(valueIn - thresholdLow) / (float)(thresholdHigh - thresholdLow);
  return FLOAT_1_0;
}

/*
==============
FlightDynamics::SoundData::FetchSound
==============
*/
__int64 FlightDynamics::SoundData::FetchSound(FlightDynamics::SoundData *this, const char *name)
{
  const char *v2; 
  char v3; 
  unsigned int v4; 
  char v5; 

  v2 = name;
  if ( !name )
    return 0i64;
  v3 = *name;
  if ( !*name )
    return 0i64;
  v4 = 5381;
  do
  {
    ++v2;
    v5 = v3 | 0x20;
    if ( (unsigned int)(v3 - 65) >= 0x1A )
      v5 = v3;
    v4 = 65599 * v4 + v5;
    v3 = *v2;
  }
  while ( *v2 );
  if ( !v4 )
    return 1;
  return v4;
}

/*
==============
TerrainFollowingRadarControl::RadarBeamInfo::FireBeam
==============
*/
float TerrainFollowingRadarControl::RadarBeamInfo::FireBeam(TerrainFollowingRadarControl::RadarBeamInfo *this, vec3_t *position, vec4_t *orientationQuat, float beamRange, float forwardIncrease, vec3_t *rotatedBeam, int clipMask, float beamExpo, vec3_t *rotatedBeamScaled, Physics_WorldId worldId)
{
  float v10; 
  float v14; 
  float v15; 
  __int128 v17; 
  float dopplerSpeedNormalized; 
  const vec4_t *v20; 
  vec3_t *v21; 
  vec3_t *v22; 
  float v23; 
  vec3_t v25; 
  vec3_t v26; 
  float v27; 
  vec3_t in; 
  trace_t v29; 

  v10 = this->beamDirectionVector.v[0];
  this->beamDirectionVector.v[0] = 0.0;
  QuatTransform(orientationQuat, &this->beamDirectionVector, rotatedBeam);
  this->beamDirectionVector.v[0] = v10;
  v14 = beamRange * this->beamDirectionVector.v[2];
  in.v[1] = beamRange * this->beamDirectionVector.v[1];
  in.v[0] = (float)(v10 * beamRange) + forwardIncrease;
  in.v[2] = v14;
  QuatTransform(orientationQuat, &in, rotatedBeamScaled);
  v15 = rotatedBeamScaled->v[0] + position->v[0];
  rotatedBeamScaled->v[2] = position->v[2] + rotatedBeamScaled->v[2];
  v17 = *(unsigned __int64 *)rotatedBeamScaled->v;
  *(float *)&v17 = v15;
  _XMM0 = v17;
  __asm { vinsertps xmm1, xmm0, xmm2, 10h }
  *(_QWORD *)&_XMM0 = *(_QWORD *)position->v;
  *(double *)rotatedBeamScaled->v = *(double *)&_XMM1;
  v25.v[2] = rotatedBeamScaled->v[2];
  v26.v[2] = position->v[2];
  *(double *)v25.v = *(double *)&_XMM1;
  *(double *)v26.v = *(double *)&_XMM0;
  FD_Trace(worldId, &v29, &v26, &v25, NULL, clipMask, NULL);
  if ( FD_GetDrawAvoidanceTracesDvar() )
  {
    if ( FD_GetDrawAvoidanceTracesAsDoppler() )
    {
      dopplerSpeedNormalized = this->dopplerSpeedNormalized;
      v27 = COERCE_FLOAT(LODWORD(dopplerSpeedNormalized) & _xmm) * TFR_DEBUG_DOPPLER_LINES_INTENSITY;
      v26.v[0] = 0.0;
      v20 = (const vec4_t *)&v26;
      v21 = rotatedBeamScaled;
      v22 = position;
      if ( dopplerSpeedNormalized <= 0.0 )
      {
        v26.v[1] = 0.0;
        v26.v[2] = COERCE_FLOAT(LODWORD(dopplerSpeedNormalized) & _xmm) * TFR_DEBUG_DOPPLER_LINES_INTENSITY;
      }
      else
      {
        v26.v[1] = COERCE_FLOAT(LODWORD(dopplerSpeedNormalized) & _xmm) * TFR_DEBUG_DOPPLER_LINES_INTENSITY;
        v26.v[2] = 0.0;
      }
    }
    else
    {
      if ( v29.fraction >= 1.0 )
      {
        v20 = &colorWhite;
        if ( this->beamDirectionVector.v[1] >= 0.0 )
          v20 = &colorYellow;
      }
      else
      {
        v20 = &colorBlue;
      }
      v21 = rotatedBeamScaled;
      v22 = position;
    }
    FD_DebugLine(v22, v21, v20, 0, 0);
  }
  v23 = 1.0 - powf_0(v29.fraction, beamExpo);
  this->beamRawDistance = v23;
  return v23;
}

/*
==============
FlightDynamics_RegisterDvars
==============
*/

void FlightDynamics_RegisterDvars(void)
{
  FD_RegisterDvars();
}

/*
==============
G_FD_GetEntity
==============
*/
gentity_s *G_FD_GetEntity(__int16 ent)
{
  __int64 v1; 
  gentity_s *v2; 

  v1 = ent;
  v2 = g_entities;
  if ( !g_entities[v1].r.isInUse )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4740, ASSERT_TYPE_ASSERT, "(g_entities[ent].r.isInUse)", (const char *)&queryFormat, "g_entities[ent].r.isInUse") )
      __debugbreak();
    v2 = g_entities;
  }
  return &v2[v1];
}

/*
==============
G_FlightDynamics_SendNotify
==============
*/
void G_FlightDynamics_SendNotify(ScriptInstanceType inst, FlightDynamics *fdEntity, scr_string_t notification)
{
  __int64 m_PlayerEnt; 
  const gentity_s *v5; 

  m_PlayerEnt = sFlightDynamicsManager.m_PlayerEnt;
  if ( !g_entities[m_PlayerEnt].r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4740, ASSERT_TYPE_ASSERT, "(g_entities[ent].r.isInUse)", (const char *)&queryFormat, "g_entities[ent].r.isInUse") )
    __debugbreak();
  v5 = &g_entities[m_PlayerEnt];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4719, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  GScr_Notify(v5, notification, 0);
}

/*
==============
TerrainFollowingRadarControl::GetAvoidanceStrength
==============
*/
float TerrainFollowingRadarControl::GetAvoidanceStrength(TerrainFollowingRadarControl *this)
{
  return this->m_totalRangeStrength;
}

/*
==============
TerrainFollowingRadarControl::GetBlockageFactor
==============
*/
float TerrainFollowingRadarControl::GetBlockageFactor(TerrainFollowingRadarControl *this)
{
  return this->m_blockageFactor;
}

/*
==============
TerrainFollowingRadarControl::GetControlSurfaceActuators
==============
*/
void TerrainFollowingRadarControl::GetControlSurfaceActuators(TerrainFollowingRadarControl *this, float *elevatorStrength, float *rudderStrength, float *aileronStrength, float followTargetStrength)
{
  double Param; 
  float v10; 
  double v11; 
  double v12; 
  double v13; 

  if ( !elevatorStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4425, ASSERT_TYPE_ASSERT, "(elevatorStrength)", (const char *)&queryFormat, "elevatorStrength") )
    __debugbreak();
  if ( !rudderStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4426, ASSERT_TYPE_ASSERT, "(rudderStrength)", (const char *)&queryFormat, "rudderStrength") )
    __debugbreak();
  if ( !aileronStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4427, ASSERT_TYPE_ASSERT, "(aileronStrength)", (const char *)&queryFormat, "aileronStrength") )
    __debugbreak();
  if ( followTargetStrength <= -1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4429, ASSERT_TYPE_ASSERT, "(followTargetStrength > -1.0f)", (const char *)&queryFormat, "followTargetStrength > -1.0f") )
    __debugbreak();
  Param = TerrainFollowingRadarControl::GetParam(this, TFR_CONTROL_TARGETLOCK_STRENGTH);
  v10 = (float)((float)(*(float *)&Param * followTargetStrength) + 1.0) * this->m_totalRangeStrength;
  v11 = I_fclamp(v10 * this->m_controlSurfaces[0], COERCE_FLOAT(LODWORD(TFR_MAX_CONTROL) ^ _xmm), TFR_MAX_CONTROL);
  *rudderStrength = *(float *)&v11;
  v12 = I_fclamp(v10 * this->m_controlSurfaces[1], COERCE_FLOAT(LODWORD(TFR_MAX_CONTROL) ^ _xmm), TFR_MAX_CONTROL);
  *elevatorStrength = *(float *)&v12;
  v13 = I_fclamp(v10 * this->m_controlSurfaces[3], COERCE_FLOAT(LODWORD(TFR_MAX_CONTROL) ^ _xmm), TFR_MAX_CONTROL);
  *aileronStrength = *(float *)&v13;
}

/*
==============
FlightDynamicsManager::GetDynamicsMode
==============
*/
FlightDynamicsFlightDynamicsParameters *FlightDynamicsManager::GetDynamicsMode(FlightDynamicsManager *this, FlightDynamicsAtmosphericModels mode)
{
  return &this->m_FlightDynamicModels[mode];
}

/*
==============
FlightDynamics::GetExternalRotationMagnitude
==============
*/
void FlightDynamics::GetExternalRotationMagnitude(FlightDynamics *this, vec4_t *externalRotation, vec3_t *angVel)
{
  float v5; 
  float v6; 
  float v7; 
  vec4_t *p_m_RotationInertiaQuat; 
  float v9; 
  vec4_t in1; 
  vec4_t out; 
  vec4_t quat; 

  angVel->v[0] = 0.017453292 * angVel->v[0];
  angVel->v[1] = 0.017453292 * angVel->v[1];
  angVel->v[2] = 0.017453292 * angVel->v[2];
  AnglesToQuat(angVel, &quat);
  LODWORD(v5) = LODWORD(this->m_RotationQuaternion.v[1]) ^ _xmm;
  LODWORD(in1.v[0]) = LODWORD(this->m_RotationQuaternion.v[0]) ^ _xmm;
  v6 = this->m_RotationQuaternion.v[2];
  in1.v[1] = v5;
  v7 = this->m_RotationQuaternion.v[3];
  LODWORD(in1.v[2]) = LODWORD(v6) ^ _xmm;
  in1.v[3] = v7;
  QuatMultiply(&in1, externalRotation, &out);
  p_m_RotationInertiaQuat = &this->m_RotationInertiaQuat;
  QuatMultiply(&out, p_m_RotationInertiaQuat, &in1);
  v9 = FD_EXTERNAL_ROTATION_FACTOR;
  if ( !p_m_RotationInertiaQuat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2308, ASSERT_TYPE_ASSERT, "(quatOut)", (const char *)&queryFormat, "quatOut") )
    __debugbreak();
  out = (vec4_t)_xmm;
  QuatSlerp(&in1, &out, v9, p_m_RotationInertiaQuat);
  Vec4Normalize(p_m_RotationInertiaQuat);
}

/*
==============
FlightDynamics::GetFlightDynamicsParameter
==============
*/
void FlightDynamics::GetFlightDynamicsParameter(FlightDynamics *this, vec3_t *position, vec3_t *orientation, vec3_t *velocity, tmat33_t<vec3_t> *matrix, vec4_t *quaternion, vec4_t *angularVelocity, vec3_t *fbwVector, float *cruiseLow, float *cruiseHigh, float *cruiseBoost)
{
  __int64 m_DynamicsModel; 
  float v16; 
  tmat33_t<vec3_t> axis; 

  v16 = this->m_RotationQuaternion.v[0];
  if ( (LODWORD(v16) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 3473, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_X] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_X] )", v16) )
    __debugbreak();
  if ( (LODWORD(this->m_RotationQuaternion.v[1]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 3474, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_Y] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_Y] )") )
    __debugbreak();
  if ( (LODWORD(this->m_RotationQuaternion.v[2]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 3475, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_Z] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_Z] )") )
    __debugbreak();
  if ( (LODWORD(this->m_RotationQuaternion.v[3]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 3476, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_W] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_W] )") )
    __debugbreak();
  if ( orientation )
  {
    QuatToAxis(&this->m_RotationQuaternion, &axis);
    AxisToAngles(&axis, orientation);
  }
  if ( matrix )
  {
    QuatToAxis(&this->m_RotationQuaternion, matrix);
    AxisToAngles(matrix, orientation);
  }
  if ( quaternion )
    *quaternion = this->m_RotationQuaternion;
  if ( angularVelocity )
    *angularVelocity = this->m_RotationVelocity;
  if ( fsqrt((float)((float)(this->m_Velocity.v[0] * this->m_Velocity.v[0]) + (float)(this->m_Velocity.v[1] * this->m_Velocity.v[1])) + (float)(this->m_Velocity.v[2] * this->m_Velocity.v[2])) >= FD_EXCESSIVE_PHYSICS_SPEED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 3506, ASSERT_TYPE_ASSERT, "(velocityMagnitude < FD_EXCESSIVE_PHYSICS_SPEED)", (const char *)&queryFormat, "velocityMagnitude < FD_EXCESSIVE_PHYSICS_SPEED") )
    __debugbreak();
  if ( velocity )
  {
    velocity->v[0] = this->m_Velocity.v[0];
    velocity->v[1] = this->m_Velocity.v[1];
    velocity->v[2] = this->m_Velocity.v[2];
  }
  if ( position )
  {
    position->v[0] = this->m_Position.v[0];
    position->v[1] = this->m_Position.v[1];
    position->v[2] = this->m_Position.v[2];
  }
  if ( fbwVector )
    *fbwVector = this->m_FlyByWireInputVector;
  m_DynamicsModel = this->m_DynamicsModel;
  if ( cruiseLow )
    *cruiseLow = sFlightDynamicsManager.m_FlightDynamicModels[m_DynamicsModel].m_Parameter[97];
  if ( cruiseHigh )
    *cruiseHigh = sFlightDynamicsManager.m_FlightDynamicModels[m_DynamicsModel].m_Parameter[99];
  if ( cruiseBoost )
    *cruiseBoost = sFlightDynamicsManager.m_FlightDynamicModels[m_DynamicsModel].m_Parameter[100];
}

/*
==============
TerrainFollowingRadarControl::GetFlyByWireAvoidanceVector
==============
*/
void TerrainFollowingRadarControl::GetFlyByWireAvoidanceVector(TerrainFollowingRadarControl *this, vec3_t *fbwVector)
{
  *fbwVector = this->m_fbwAvoidanceVector;
}

/*
==============
FlightDynamics::GetFlyByWireStatus
==============
*/
_BOOL8 FlightDynamics::GetFlyByWireStatus(FlightDynamics *this)
{
  return this->m_EnableFlyByWire;
}

/*
==============
GetOrthogonalVector
==============
*/
void GetOrthogonalVector(vec3_t *in, vec3_t *perpVector)
{
  float v2; 
  float v3; 
  vec3_t *p_m_ElevatorAxis; 

  v2 = in->v[1];
  v3 = in->v[2];
  if ( (float)((float)((float)(in->v[0] * sFlightDynamicsManager.m_UpAxis.v[0]) + (float)(v2 * sFlightDynamicsManager.m_UpAxis.v[1])) + (float)(v3 * sFlightDynamicsManager.m_UpAxis.v[2])) <= -0.75 )
  {
    p_m_ElevatorAxis = &sFlightDynamicsManager.m_ElevatorAxis;
    if ( (float)((float)((float)(in->v[0] * sFlightDynamicsManager.m_ElevatorAxis.v[0]) + (float)(v2 * sFlightDynamicsManager.m_ElevatorAxis.v[1])) + (float)(v3 * sFlightDynamicsManager.m_ElevatorAxis.v[2])) <= -0.75 )
      p_m_ElevatorAxis = &sFlightDynamicsManager.m_ForwardAxis;
    Vec3Cross(in, p_m_ElevatorAxis, perpVector);
  }
  else
  {
    Vec3Cross(in, &sFlightDynamicsManager.m_UpAxis, perpVector);
  }
}

/*
==============
TerrainFollowingRadarControl::GetParam
==============
*/
float TerrainFollowingRadarControl::GetParam(TerrainFollowingRadarControl *this, FlightDynamicsTerrainFollowingRadarParamType param)
{
  __int64 v3; 
  FlightDynamicsTerrainFollowingRadarModes m_currentOperatingMode; 
  int v5; 
  float v6; 
  __int64 v8; 
  int v9; 

  v3 = param;
  if ( (float)(this->m_maxSpeed - this->m_minSpeed) == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4221, ASSERT_TYPE_ASSERT, "(( m_maxSpeed - m_minSpeed ) != 0.0f)", (const char *)&queryFormat, "( m_maxSpeed - m_minSpeed ) != 0.0f") )
    __debugbreak();
  m_currentOperatingMode = this->m_currentOperatingMode;
  v5 = 2 * m_currentOperatingMode;
  v6 = (float)(this->m_clampedSpeedMagnitude - this->m_minSpeed) / (float)(this->m_maxSpeed - this->m_minSpeed);
  if ( (unsigned int)m_currentOperatingMode >= TFR_MODES_TOTAL )
  {
    v9 = 3;
    LODWORD(v8) = this->m_currentOperatingMode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4226, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentOperatingMode ) < (unsigned)( TFR_MODES_TOTAL )", "m_currentOperatingMode doesn't index TFR_MODES_TOTAL\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  return (float)((float)(1.0 - v6) * this->m_parameters[v5][v3]) + (float)(v6 * this->m_parameters[v5 + 1][v3]);
}

/*
==============
FlightDynamicsManager::GetPlayerGentity
==============
*/
gentity_s *FlightDynamicsManager::GetPlayerGentity(FlightDynamicsManager *this)
{
  __int64 m_PlayerEnt; 
  gentity_s *v2; 

  m_PlayerEnt = this->m_PlayerEnt;
  v2 = g_entities;
  if ( !g_entities[m_PlayerEnt].r.isInUse )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4740, ASSERT_TYPE_ASSERT, "(g_entities[ent].r.isInUse)", (const char *)&queryFormat, "g_entities[ent].r.isInUse") )
      __debugbreak();
    v2 = g_entities;
  }
  return &v2[m_PlayerEnt];
}

/*
==============
GetRotationQuatFromVectors
==============
*/
void GetRotationQuatFromVectors(vec3_t *vec1, vec3_t *vec2, vec4_t *quat)
{
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  double v18; 
  float v19; 
  double v21; 
  float v22; 
  float v23; 
  vec3_t v24; 
  vec4_t v25; 
  vec4_t in1; 
  vec3_t cross; 
  vec4_t v28; 

  _XMM9 = 0i64;
  if ( (float)((float)((float)(vec1->v[0] * vec1->v[0]) + (float)(vec1->v[1] * vec1->v[1])) + (float)(vec1->v[2] * vec1->v[2])) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4030, ASSERT_TYPE_ASSERT, "(Vec3Length( vec1 ) > 0.0f)", (const char *)&queryFormat, "Vec3Length( vec1 ) > 0.0f") )
    __debugbreak();
  v7 = vec2->v[1];
  v8 = vec2->v[0];
  v9 = vec2->v[2];
  if ( (float)((float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v9 * v9)) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4031, ASSERT_TYPE_ASSERT, "(Vec3Length( vec2 ) > 0.0f)", (const char *)&queryFormat, "Vec3Length( vec2 ) > 0.0f") )
    __debugbreak();
  v10 = vec1->v[1];
  v11 = vec1->v[0];
  v12 = vec1->v[2];
  v13 = (float)((float)(v8 * vec1->v[0]) + (float)(v10 * v7)) + (float)(v12 * v9);
  if ( v13 >= -0.75 )
  {
    Vec3Cross(vec1, vec2, &cross);
    v22 = cross.v[1];
    quat->v[0] = cross.v[0];
    v23 = cross.v[2];
    quat->v[1] = v22;
    quat->v[2] = v23;
    quat->v[3] = fsqrt((float)((float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v9 * v9)) * (float)((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v12 * v12))) + v13;
    Vec4Normalize(quat);
  }
  else
  {
    _XMM3 = LODWORD(quat->v[0]);
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [r14+4], 10h
      vinsertps xmm3, xmm3, dword ptr [r14+8], 20h ; ' '
      vinsertps xmm3, xmm3, dword ptr [r14+0Ch], 30h ; '0'
    }
    v18 = *(double *)vec1->v;
    v19 = vec1->v[2];
    __asm { vunpcklps xmm6, xmm9, xmm9 }
    cross.v[2] = 0.0;
    v28 = _XMM3;
    v25 = _XMM3;
    in1.v[2] = 0.0;
    in1.v[1] = 0.0;
    in1.v[0] = 0.0;
    *(double *)cross.v = *(double *)&_XMM6;
    *(double *)v24.v = v18;
    v24.v[2] = v19;
    GetRotationQuatFromVectors(&v24, &cross, &v25);
    v21 = *(double *)vec2->v;
    v24.v[2] = vec2->v[2];
    cross.v[2] = 0.0;
    v25.v[3] = in1.v[3];
    *(double *)v24.v = v21;
    v25.v[0] = 0.0;
    v25.v[1] = 0.0;
    v25.v[2] = 0.0;
    *(double *)cross.v = *(double *)&_XMM6;
    GetRotationQuatFromVectors(&cross, &v24, &v25);
    QuatMultiply(&in1, &v28, quat);
  }
}

/*
==============
FlightDynamics::GetSoundData
==============
*/
FlightDynamics::SoundData *FlightDynamics::GetSoundData(FlightDynamics *this)
{
  return &this->m_sound;
}

/*
==============
FlightDynamics::GetSoundValuesFD
==============
*/
void FlightDynamics::GetSoundValuesFD(FlightDynamics *this, const int clientNum, int time, float *outThrottle, float *outBrake, float *outRpmNormal, float *outGear, float *outMph, bool *outTurbineStart, bool *outTurbineStop, vec3_t *outPosition)
{
  *outRpmNormal = 0.0;
  *outThrottle = 0.0;
  *outGear = 0.0;
  *outBrake = 0.0;
  *outMph = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(this->m_transform.m[0].v[1] * this->m_linearVelocityWs.v[1]) + (float)(this->m_transform.m[0].v[0] * this->m_linearVelocityWs.v[0])) + (float)(this->m_transform.m[0].v[2] * this->m_linearVelocityWs.v[2])) & _xmm) * 0.056818184;
  *outTurbineStart = 0;
  *outTurbineStop = 0;
  *outPosition = this->m_Position;
}

/*
==============
TerrainFollowingRadarControl::Initialize
==============
*/
void TerrainFollowingRadarControl::Initialize(TerrainFollowingRadarControl *this, int newClipMask)
{
  *(_WORD *)this->m_modeInitizalied = 0;
  this->m_modeInitizalied[2] = 0;
  TerrainFollowingRadarControl::LoadTFRParameters(this);
  TerrainFollowingRadarControl::ComputeDirectionVectorsForRays(this);
  this->m_clipMask = newClipMask;
  this->m_minSpeed = TFR_LOW_SPEED_VALUE;
  this->m_maxSpeed = TFR_HIGH_SPEED_VALUE;
}

/*
==============
FlightDynamics::IsInAir
==============
*/
char FlightDynamics::IsInAir(FlightDynamics *this)
{
  return 1;
}

/*
==============
FlightDynamics::LoadControlInputs
==============
*/
void FlightDynamics::LoadControlInputs(FlightDynamics *this, const usercmd_s *cmd, float *rawControlInputs)
{
  char v6; 
  int v7; 
  char v8; 
  int m_StickMode; 
  char rightmove; 
  unsigned __int64 buttons; 

  if ( !rawControlInputs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2444, ASSERT_TYPE_ASSERT, "(rawControlInputs)", (const char *)&queryFormat, "rawControlInputs") )
    __debugbreak();
  v6 = cmd->pitchmove + cmd->remoteControlMove[0];
  LOBYTE(v7) = cmd->yawmove + cmd->remoteControlMove[1];
  v8 = cmd->forwardmove + cmd->remoteControlMove[2];
  m_StickMode = this->m_StickMode;
  rightmove = cmd->rightmove;
  if ( m_StickMode )
  {
    if ( m_StickMode == 2 )
    {
      rawControlInputs[2] = (float)v8;
      rawControlInputs[4] = 0.0;
      *rawControlInputs = (float)(char)v7;
      rawControlInputs[1] = (float)-v6;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2489, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Stick mode is not valid for this FD tyte\n") )
        __debugbreak();
      rawControlInputs[2] = (float)v8;
      *rawControlInputs = (float)rightmove;
      rawControlInputs[4] = 0.0;
      rawControlInputs[3] = (float)(char)v7;
      rawControlInputs[1] = (float)v6;
      buttons = cmd->buttons;
      if ( (cmd->buttons & 0x10000000000i64) != 0 )
      {
        rawControlInputs[4] = -127.0;
        buttons = cmd->buttons;
      }
      if ( (buttons & 0x20000000000i64) != 0 )
        rawControlInputs[4] = 127.0;
    }
  }
  else
  {
    rawControlInputs[2] = (float)v8;
    v7 = (char)v7;
    if ( !this->GetFlyByWireStatus(this) )
    {
      rawControlInputs[3] = (float)(char)v7;
      v7 = rightmove;
    }
    *rawControlInputs = (float)-v7;
    rawControlInputs[1] = (float)v6;
    *((_QWORD *)rawControlInputs + 2) = 0i64;
    if ( (cmd->buttons & 2) != 0 )
      rawControlInputs[7] = 127.0;
  }
}

/*
==============
FlightDynamicsFlightDynamicsParameters::LoadDefaultAtmosphericConditions
==============
*/
void FlightDynamicsFlightDynamicsParameters::LoadDefaultAtmosphericConditions(FlightDynamicsFlightDynamicsParameters *this)
{
  this->m_Parameter[0] = 2.0;
  this->m_Parameter[26] = 0.0;
  this->m_Parameter[48] = 0.0;
  this->m_Parameter[64] = 0.0;
  this->m_Parameter[88] = 0.0;
  this->m_Parameter[1] = 2.0;
  this->m_Parameter[2] = 16.0;
  this->m_Parameter[3] = 0.69999999;
  this->m_Parameter[4] = 5500.0;
  this->m_Parameter[5] = 1.5;
  this->m_Parameter[6] = 1.0;
  this->m_Parameter[7] = 0.5;
  this->m_Parameter[8] = 0.125;
  this->m_Parameter[9] = 0.5;
  this->m_Parameter[10] = 0.1;
  this->m_Parameter[11] = 0.0024999999;
  this->m_Parameter[12] = 0.5;
  this->m_Parameter[13] = 0.1;
  this->m_Parameter[14] = 0.0099999998;
  this->m_Parameter[15] = 2.0;
  this->m_Parameter[16] = 0.125;
  this->m_Parameter[17] = 0.125;
  this->m_Parameter[18] = 8.0;
  this->m_Parameter[19] = 2.0;
  *(_QWORD *)&this->m_Parameter[20] = 1056964608i64;
  this->m_Parameter[22] = 25000.0;
  this->m_Parameter[23] = -0.050000001;
  this->m_Parameter[24] = 20.0;
  this->m_Parameter[29] = 1500.0;
  this->m_Parameter[30] = 750.0;
  this->m_Parameter[31] = 3000.0;
  this->m_Parameter[28] = 250.0;
  this->m_Parameter[34] = 4500.0;
  this->m_Parameter[32] = 4000.0;
  this->m_Parameter[33] = 0.125;
  this->m_Parameter[25] = -0.1;
  this->m_Parameter[27] = 0.22499999;
  *(_QWORD *)&this->m_Parameter[35] = 1156415488i64;
  this->m_Parameter[37] = 2.8499999;
  this->m_Parameter[38] = 0.5;
  *(_QWORD *)&this->m_Parameter[39] = 1036831949i64;
  this->m_Parameter[41] = 1.0;
  *(_QWORD *)&this->m_Parameter[42] = 1065353216i64;
  this->m_Parameter[44] = 2.0;
  this->m_Parameter[45] = 0.2;
  *(_QWORD *)&this->m_Parameter[46] = 1077936128i64;
  *(_QWORD *)&this->m_Parameter[49] = 1036831949i64;
  this->m_Parameter[51] = 3.0;
  this->m_Parameter[52] = 6.0;
  this->m_Parameter[53] = 5.0;
  this->m_Parameter[54] = 4.0;
  this->m_Parameter[55] = 1.0;
  this->m_Parameter[56] = 8.0;
  this->m_Parameter[57] = 10.0;
  *(_QWORD *)&this->m_Parameter[58] = 1082130432i64;
  this->m_Parameter[60] = 1.0;
  this->m_Parameter[73] = 1.0;
  this->m_Parameter[75] = 0.1;
  this->m_Parameter[76] = 1800.0;
  this->m_Parameter[74] = 0.5;
  this->m_Parameter[77] = 0.1;
  this->m_Parameter[61] = 4350.0;
  *(_QWORD *)&this->m_Parameter[62] = 0x40000000i64;
  this->m_Parameter[65] = 1.5;
  this->m_Parameter[66] = 1.0;
  this->m_Parameter[85] = 0.5;
  this->m_Parameter[87] = 1.0;
  this->m_Parameter[86] = 3.0;
  this->m_Parameter[67] = -0.1;
  this->m_Parameter[68] = -0.1;
  *(_QWORD *)&this->m_Parameter[69] = 0i64;
  *(_QWORD *)&this->m_Parameter[71] = 0i64;
  strcpy((char *)&this->m_Parameter[79], "млл=млл=");
  BYTE1(this->m_Parameter[81]) = 0;
  HIWORD(this->m_Parameter[81]) = 0;
  this->m_Parameter[82] = -9.8000002;
  this->m_Parameter[83] = 25000.0;
  this->m_Parameter[84] = 0.0099999998;
  this->m_Parameter[89] = 40.0;
  this->m_Parameter[90] = 0.2;
  this->m_Parameter[91] = 12.0;
  this->m_Parameter[92] = 15.5;
  strcpy((char *)&this->m_Parameter[93], "млл=млл=");
  BYTE1(this->m_Parameter[95]) = 0;
  HIWORD(this->m_Parameter[95]) = 0;
  this->m_Parameter[97] = 2000.0;
  this->m_Parameter[99] = 7000.0;
  this->m_Parameter[100] = 5000.0;
  this->m_Parameter[98] = 3500.0;
  this->m_Parameter[96] = 8.0;
}

/*
==============
TerrainFollowingRadarControl::LoadTFRParameters
==============
*/
void TerrainFollowingRadarControl::LoadTFRParameters(TerrainFollowingRadarControl *this)
{
  *(_WORD *)&this->m_modeInitizalied[1] = 257;
  this->m_parameters[2][0] = 100.0;
  this->m_parameters[2][1] = -50.0;
  this->m_parameters[2][2] = 50.0;
  this->m_parameters[2][3] = 150.0;
  this->m_parameters[2][4] = 1.0;
  this->m_parameters[2][5] = 1.0;
  this->m_parameters[2][6] = 0.75;
  this->m_parameters[2][7] = 1000.0;
  this->m_parameters[2][8] = 10.0;
  this->m_parameters[2][9] = 22.0;
  this->m_parameters[2][10] = 1.0;
  this->m_parameters[2][11] = 1.0;
  this->m_parameters[2][12] = 1.0;
  *(_QWORD *)&this->m_parameters[2][13] = 1065353216i64;
  this->m_parameters[2][15] = 0.75;
  this->m_parameters[2][16] = -1.0;
  *(_QWORD *)&this->m_parameters[2][17] = 1065353216i64;
  this->m_parameters[2][19] = 4.0;
  this->m_parameters[2][20] = 0.25;
  this->m_parameters[2][21] = -2.0;
  this->m_parameters[2][22] = 0.2;
  this->m_parameters[2][23] = 10.0;
  this->m_parameters[2][24] = 1.0;
  this->m_parameters[2][25] = -1.0;
  this->m_parameters[3][0] = 100.0;
  this->m_parameters[3][1] = -50.0;
  this->m_parameters[3][2] = 50.0;
  this->m_parameters[3][3] = 250.0;
  this->m_parameters[3][4] = 1.0;
  this->m_parameters[3][5] = 1.0;
  this->m_parameters[3][6] = 0.75;
  this->m_parameters[3][7] = 1000.0;
  this->m_parameters[3][8] = 16.0;
  this->m_parameters[3][9] = 16.0;
  this->m_parameters[3][10] = 1.0;
  this->m_parameters[3][11] = 1.0;
  this->m_parameters[3][12] = 1.0;
  *(_QWORD *)&this->m_parameters[3][13] = 1065353216i64;
  this->m_parameters[3][15] = 1.5;
  this->m_parameters[3][16] = -1.0;
  this->m_parameters[3][17] = 0.60000002;
  this->m_parameters[3][18] = 2.0;
  this->m_parameters[3][19] = 1.0;
  this->m_parameters[3][20] = 0.25;
  this->m_parameters[3][21] = -2.0;
  this->m_parameters[3][22] = 1.0;
  this->m_parameters[3][23] = 6.0;
  this->m_parameters[3][24] = 75.0;
  this->m_parameters[3][25] = -1.0;
  this->m_parameters[4][0] = 200.0;
  this->m_parameters[4][1] = -100.0;
  this->m_parameters[4][2] = 50.0;
  this->m_parameters[4][3] = 0.25;
  this->m_parameters[4][4] = 1.0;
  this->m_parameters[4][5] = 1.0;
  this->m_parameters[4][6] = 0.75;
  this->m_parameters[4][7] = 1000.0;
  this->m_parameters[4][8] = 3.0;
  this->m_parameters[4][9] = 2.0;
  this->m_parameters[4][10] = 1.0;
  this->m_parameters[4][11] = 1.0;
  this->m_parameters[4][12] = 1.0;
  *(_QWORD *)&this->m_parameters[4][13] = 1065353216i64;
  this->m_parameters[4][15] = 10.5;
  this->m_parameters[4][16] = -1.0;
  this->m_parameters[4][17] = 1.0;
  this->m_parameters[4][18] = 1.0;
  this->m_parameters[4][19] = 4.0;
  this->m_parameters[4][20] = 0.25;
  this->m_parameters[4][21] = -2.0;
  this->m_parameters[4][22] = 0.2;
  this->m_parameters[4][23] = 2.0;
  this->m_parameters[4][24] = 1.0;
  this->m_parameters[4][25] = -1.0;
  this->m_parameters[5][0] = 200.0;
  this->m_parameters[5][1] = -100.0;
  this->m_parameters[5][2] = 50.0;
  this->m_parameters[5][3] = 1.0;
  this->m_parameters[5][4] = 1.0;
  this->m_parameters[5][5] = 1.0;
  this->m_parameters[5][6] = 0.75;
  this->m_parameters[5][7] = 1000.0;
  this->m_parameters[5][8] = 4.0;
  this->m_parameters[5][9] = 16.0;
  this->m_parameters[5][10] = 1.0;
  this->m_parameters[5][11] = 1.0;
  this->m_parameters[5][12] = 1.0;
  *(_QWORD *)&this->m_parameters[5][13] = 1065353216i64;
  this->m_parameters[5][15] = 12.5;
  this->m_parameters[5][16] = -1.0;
  this->m_parameters[5][17] = 0.60000002;
  this->m_parameters[5][18] = 2.0;
  this->m_parameters[5][19] = 1.0;
  this->m_parameters[5][20] = 0.25;
  this->m_parameters[5][21] = -2.0;
  this->m_parameters[5][22] = 1.0;
  this->m_parameters[5][23] = 6.0;
  this->m_parameters[5][24] = 75.0;
  this->m_parameters[5][25] = -1.0;
}

/*
==============
FlightDynamics::NormalizePlayerInputs
==============
*/
void FlightDynamics::NormalizePlayerInputs(FlightDynamics *this)
{
  float *m_ControlInputsNormalized; 
  __int64 v2; 
  __int128 v3; 
  float v4; 
  __int128 v5; 
  float v7; 
  __int128 v11; 
  float v12; 
  __int128 v13; 
  float v15; 
  __int128 v19; 
  float v20; 
  __int128 v21; 
  float v23; 
  __int128 v27; 
  float v28; 
  __int128 v29; 
  float v31; 
  __int128 v35; 
  float v36; 
  __int128 v37; 
  float v39; 
  __int128 v43; 
  float v44; 
  __int128 v45; 
  float v47; 
  __int128 v51; 
  float v52; 
  __int128 v53; 
  float v55; 

  m_ControlInputsNormalized = this->m_ControlInputsNormalized;
  v2 = 2i64;
  do
  {
    v3 = *((unsigned int *)m_ControlInputsNormalized - 14);
    v5 = v3;
    *(float *)&v5 = *(float *)&v3 * 0.0078740157;
    v4 = *(float *)&v3 * 0.0078740157;
    *m_ControlInputsNormalized = *(float *)&v3 * 0.0078740157;
    if ( this->m_EnableInputDeadZone )
    {
      _XMM4 = LODWORD(FD_DEFAULT_DEADZONE);
      if ( COERCE_FLOAT(v5 & _xmm) > FD_DEFAULT_DEADZONE )
      {
        __asm { vcmpltss xmm0, xmm4, xmm3 }
        *(float *)&v5 = *(float *)&v5 + FD_DEFAULT_DEADZONE;
        _XMM2 = v5;
        __asm { vblendvps xmm3, xmm2, xmm1, xmm0 }
        v7 = *(float *)&_XMM3 / (float)(1.0 - FD_DEFAULT_DEADZONE);
      }
      else
      {
        v7 = 0.0;
      }
      v4 = v7 * this->m_InputStrengthModifier;
      *m_ControlInputsNormalized = v4;
    }
    *(m_ControlInputsNormalized - 28) = v4;
    v11 = *((unsigned int *)m_ControlInputsNormalized - 13);
    v13 = v11;
    *(float *)&v13 = *(float *)&v11 * 0.0078740157;
    v12 = *(float *)&v11 * 0.0078740157;
    m_ControlInputsNormalized[1] = *(float *)&v11 * 0.0078740157;
    if ( this->m_EnableInputDeadZone )
    {
      _XMM5 = LODWORD(FD_DEFAULT_DEADZONE);
      if ( COERCE_FLOAT(v13 & _xmm) > FD_DEFAULT_DEADZONE )
      {
        __asm { vcmpltss xmm0, xmm5, xmm4 }
        *(float *)&v13 = *(float *)&v13 + FD_DEFAULT_DEADZONE;
        _XMM2 = v13;
        __asm { vblendvps xmm3, xmm2, xmm1, xmm0 }
        v15 = *(float *)&_XMM3 / (float)(1.0 - FD_DEFAULT_DEADZONE);
      }
      else
      {
        v15 = 0.0;
      }
      v12 = v15 * this->m_InputStrengthModifier;
      m_ControlInputsNormalized[1] = v12;
    }
    *(m_ControlInputsNormalized - 27) = v12;
    v19 = *((unsigned int *)m_ControlInputsNormalized - 12);
    v21 = v19;
    *(float *)&v21 = *(float *)&v19 * 0.0078740157;
    v20 = *(float *)&v19 * 0.0078740157;
    m_ControlInputsNormalized[2] = *(float *)&v19 * 0.0078740157;
    if ( this->m_EnableInputDeadZone )
    {
      _XMM4 = LODWORD(FD_DEFAULT_DEADZONE);
      if ( COERCE_FLOAT(v21 & _xmm) > FD_DEFAULT_DEADZONE )
      {
        __asm { vcmpltss xmm0, xmm4, xmm3 }
        *(float *)&v21 = *(float *)&v21 + FD_DEFAULT_DEADZONE;
        _XMM2 = v21;
        __asm { vblendvps xmm3, xmm2, xmm1, xmm0 }
        v23 = *(float *)&_XMM3 / (float)(1.0 - FD_DEFAULT_DEADZONE);
      }
      else
      {
        v23 = 0.0;
      }
      v20 = v23 * this->m_InputStrengthModifier;
      m_ControlInputsNormalized[2] = v20;
    }
    *(m_ControlInputsNormalized - 26) = v20;
    v27 = *((unsigned int *)m_ControlInputsNormalized - 11);
    v29 = v27;
    *(float *)&v29 = *(float *)&v27 * 0.0078740157;
    v28 = *(float *)&v27 * 0.0078740157;
    m_ControlInputsNormalized[3] = *(float *)&v27 * 0.0078740157;
    if ( this->m_EnableInputDeadZone )
    {
      _XMM5 = LODWORD(FD_DEFAULT_DEADZONE);
      if ( COERCE_FLOAT(v29 & _xmm) > FD_DEFAULT_DEADZONE )
      {
        __asm { vcmpltss xmm0, xmm5, xmm4 }
        *(float *)&v29 = *(float *)&v29 + FD_DEFAULT_DEADZONE;
        _XMM2 = v29;
        __asm { vblendvps xmm3, xmm2, xmm1, xmm0 }
        v31 = *(float *)&_XMM3 / (float)(1.0 - FD_DEFAULT_DEADZONE);
      }
      else
      {
        v31 = 0.0;
      }
      v28 = v31 * this->m_InputStrengthModifier;
      m_ControlInputsNormalized[3] = v28;
    }
    *(m_ControlInputsNormalized - 25) = v28;
    v35 = *((unsigned int *)m_ControlInputsNormalized - 10);
    v37 = v35;
    *(float *)&v37 = *(float *)&v35 * 0.0078740157;
    v36 = *(float *)&v35 * 0.0078740157;
    m_ControlInputsNormalized[4] = *(float *)&v35 * 0.0078740157;
    if ( this->m_EnableInputDeadZone )
    {
      _XMM4 = LODWORD(FD_DEFAULT_DEADZONE);
      if ( COERCE_FLOAT(v37 & _xmm) > FD_DEFAULT_DEADZONE )
      {
        __asm { vcmpltss xmm0, xmm4, xmm3 }
        *(float *)&v37 = *(float *)&v37 + FD_DEFAULT_DEADZONE;
        _XMM2 = v37;
        __asm { vblendvps xmm3, xmm2, xmm1, xmm0 }
        v39 = *(float *)&_XMM3 / (float)(1.0 - FD_DEFAULT_DEADZONE);
      }
      else
      {
        v39 = 0.0;
      }
      v36 = v39 * this->m_InputStrengthModifier;
      m_ControlInputsNormalized[4] = v36;
    }
    *(m_ControlInputsNormalized - 24) = v36;
    v43 = *((unsigned int *)m_ControlInputsNormalized - 9);
    v45 = v43;
    *(float *)&v45 = *(float *)&v43 * 0.0078740157;
    v44 = *(float *)&v43 * 0.0078740157;
    m_ControlInputsNormalized[5] = *(float *)&v43 * 0.0078740157;
    if ( this->m_EnableInputDeadZone )
    {
      _XMM5 = LODWORD(FD_DEFAULT_DEADZONE);
      if ( COERCE_FLOAT(v45 & _xmm) > FD_DEFAULT_DEADZONE )
      {
        __asm { vcmpltss xmm0, xmm5, xmm4 }
        *(float *)&v45 = *(float *)&v45 + FD_DEFAULT_DEADZONE;
        _XMM2 = v45;
        __asm { vblendvps xmm3, xmm2, xmm1, xmm0 }
        v47 = *(float *)&_XMM3 / (float)(1.0 - FD_DEFAULT_DEADZONE);
      }
      else
      {
        v47 = 0.0;
      }
      v44 = v47 * this->m_InputStrengthModifier;
      m_ControlInputsNormalized[5] = v44;
    }
    *(m_ControlInputsNormalized - 23) = v44;
    v51 = *((unsigned int *)m_ControlInputsNormalized - 8);
    v53 = v51;
    *(float *)&v53 = *(float *)&v51 * 0.0078740157;
    v52 = *(float *)&v51 * 0.0078740157;
    m_ControlInputsNormalized[6] = *(float *)&v51 * 0.0078740157;
    if ( this->m_EnableInputDeadZone )
    {
      _XMM4 = LODWORD(FD_DEFAULT_DEADZONE);
      if ( COERCE_FLOAT(v53 & _xmm) > FD_DEFAULT_DEADZONE )
      {
        __asm { vcmpltss xmm0, xmm4, xmm3 }
        *(float *)&v53 = *(float *)&v53 + FD_DEFAULT_DEADZONE;
        _XMM2 = v53;
        __asm { vblendvps xmm3, xmm2, xmm1, xmm0 }
        v55 = *(float *)&_XMM3 / (float)(1.0 - FD_DEFAULT_DEADZONE);
      }
      else
      {
        v55 = 0.0;
      }
      v52 = v55 * this->m_InputStrengthModifier;
      m_ControlInputsNormalized[6] = v52;
    }
    *(m_ControlInputsNormalized - 22) = v52;
    m_ControlInputsNormalized += 7;
    --v2;
  }
  while ( v2 );
}

/*
==============
FlightDynamics::PerformAutomaticControl
==============
*/
void FlightDynamics::PerformAutomaticControl(FlightDynamics *this, float dT)
{
  ;
}

/*
==============
FlightDynamics::PerformControlSurfaces
==============
*/
void FlightDynamics::PerformControlSurfaces(FlightDynamics *this, float dT)
{
  ;
}

/*
==============
FlightDynamics::PerformCoordinatedFlight
==============
*/
void FlightDynamics::PerformCoordinatedFlight(FlightDynamics *this)
{
  ;
}

/*
==============
FlightDynamics::PerformFlyByWire
==============
*/
void FlightDynamics::PerformFlyByWire(FlightDynamics *this, float dT)
{
  ;
}

/*
==============
FlightDynamics::PerformTerrainFollowingRadar
==============
*/
void FlightDynamics::PerformTerrainFollowingRadar(FlightDynamics *this, float dT)
{
  ;
}

/*
==============
FlightDynamics::PerformThrusterControl
==============
*/
void FlightDynamics::PerformThrusterControl(FlightDynamics *this, float dT)
{
  ;
}

/*
==============
FlightDynamics::QuatToQuatDistance
==============
*/
float FlightDynamics::QuatToQuatDistance(vec4_t *quat1, vec4_t *quat2)
{
  float v2; 
  float v3; 
  float v4; 
  float angleOut; 
  vec4_t in2; 
  vec4_t out; 
  vec3_t axisOut; 

  LODWORD(v2) = LODWORD(quat1->v[1]) ^ _xmm;
  LODWORD(in2.v[0]) = LODWORD(quat1->v[0]) ^ _xmm;
  v3 = quat1->v[2];
  in2.v[1] = v2;
  v4 = quat1->v[3];
  LODWORD(in2.v[2]) = LODWORD(v3) ^ _xmm;
  in2.v[3] = v4;
  QuatMultiply(quat2, &in2, &out);
  FD_QuatToAngleAxis(&out, &angleOut, &axisOut);
  return angleOut;
}

/*
==============
FlightDynamics::QuatToUnitQuatDistance
==============
*/
float FlightDynamics::QuatToUnitQuatDistance(vec4_t *quat1)
{
  float v1; 
  float v2; 
  float v3; 
  float angleOut; 
  vec4_t in1; 
  vec4_t in2; 
  vec4_t out; 
  vec3_t axisOut; 

  LODWORD(v1) = LODWORD(quat1->v[1]) ^ _xmm;
  LODWORD(in2.v[0]) = LODWORD(quat1->v[0]) ^ _xmm;
  LODWORD(v2) = LODWORD(quat1->v[2]) ^ _xmm;
  in2.v[1] = v1;
  v3 = quat1->v[3];
  in1 = (vec4_t)_xmm;
  in2.v[2] = v2;
  in2.v[3] = v3;
  QuatMultiply(&in1, &in2, &out);
  FD_QuatToAngleAxis(&out, &angleOut, &axisOut);
  return angleOut;
}

/*
==============
FlightDynamics::RecalculateDirectionVectors
==============
*/
void FlightDynamics::RecalculateDirectionVectors(FlightDynamics *this)
{
  QuatTransform(&this->m_RotationQuaternion, &sFlightDynamicsManager.m_ElevatorAxis, &this->m_sideVector);
  QuatTransform(&this->m_RotationQuaternion, &sFlightDynamicsManager.m_ForwardAxis, &this->m_forwardVector);
  QuatTransform(&this->m_RotationQuaternion, &sFlightDynamicsManager.m_UpAxis, &this->m_upVector);
}

/*
==============
FlightDynamicsManager::RegisterDvars
==============
*/

void __fastcall FlightDynamicsManager::RegisterDvars(FlightDynamicsManager *this)
{
  FD_RegisterDvars();
}

/*
==============
FlightDynamics::Reset
==============
*/
void FlightDynamics::Reset(FlightDynamics *this)
{
  BgVehiclePhysics::Reset(this);
  this->m_Status = FD_DISABLED;
  *(_QWORD *)this->m_RotationQuaternion.v = 0i64;
  this->m_RotationQuaternion.v[2] = 0.0;
  *(_QWORD *)(&this->m_RotationQuaternion.xyz + 1) = 1065353216i64;
  *(_QWORD *)&this->m_PreviousRotationQuaternion.xyz.y = 0i64;
  *(_QWORD *)(&this->m_PreviousRotationQuaternion.xyz + 1) = 1065353216i64;
  *(_QWORD *)&this->m_RotationVelocity.xyz.y = 0i64;
  *(_QWORD *)(&this->m_RotationVelocity.xyz + 1) = 1065353216i64;
  *(_QWORD *)&this->m_PreviousRotationVelocity.xyz.y = 0i64;
  *(_QWORD *)(&this->m_PreviousRotationVelocity.xyz + 1) = 1065353216i64;
  *(_QWORD *)&this->m_RotationInertiaQuat.xyz.y = 0i64;
  *(_QWORD *)(&this->m_RotationInertiaQuat.xyz + 1) = 1065353216i64;
  *(_QWORD *)&this->m_SavedRotationQuaternion.xyz.y = 0i64;
  this->m_SavedRotationQuaternion.v[3] = 0.0;
}

/*
==============
FlightDynamics::SoundData::Reset
==============
*/
void FlightDynamics::SoundData::Reset(FlightDynamics::SoundData *this)
{
  *(_QWORD *)&this->ImpactHard = 0i64;
  *(_QWORD *)&this->RotorImpactHard = 0i64;
  this->Horn = 0;
}

/*
==============
FlightDynamicsManager::ResetCameraData
==============
*/
void FlightDynamicsManager::ResetCameraData(FlightDynamicsManager *this, LocalClientNum_t thisClient)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = thisClient;
  if ( (unsigned int)thisClient >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 452, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( thisClient ) ) < (unsigned)( 2 )", "static_cast<int>( thisClient ) doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", thisClient, v6) )
      __debugbreak();
  }
  v4 = v2;
  memset_0(&this->m_fdCameraData[v4].offsetEntityNum + 1, 0, 0x116ui64);
  *(_WORD *)&this->m_fdCameraData[v4].resetParams = 257;
  this->m_fdCameraData[v4].offsetEntityNum = 2047;
  this->m_fdCameraData[v4].angleDelta.v[3] = 1.0;
  this->m_fdCameraData[v4].contentsOfdVarQuat.v[3] = 1.0;
  this->m_fdCameraData[v4].prevViewQuat.v[3] = 1.0;
  this->m_fdCameraData[v4].localFBWquat.v[3] = 1.0;
}

/*
==============
FlightDynamics::ResetInputControls
==============
*/
void FlightDynamics::ResetInputControls(FlightDynamics *this)
{
  *(_QWORD *)this->m_ControlInputsRaw = 0i64;
  *(_QWORD *)&this->m_ControlInputsRaw[2] = 0i64;
  *(_QWORD *)&this->m_ControlInputsRaw[4] = 0i64;
  *(_QWORD *)&this->m_ControlInputsRaw[6] = 0i64;
  *(_QWORD *)&this->m_ControlInputsRaw[8] = 0i64;
  *(_QWORD *)&this->m_ControlInputsRaw[10] = 0i64;
  *(_QWORD *)&this->m_ControlInputsRaw[12] = 0i64;
}

/*
==============
FlightDynamics::ResetRotationQuaternion
==============
*/
void FlightDynamics::ResetRotationQuaternion(FlightDynamics *this)
{
  *(_QWORD *)this->m_RotationQuaternion.v = 0i64;
  this->m_RotationQuaternion.v[2] = 0.0;
  *(vec4_t *)((char *)&this->m_RotationQuaternion + 12) = (vec4_t)0x3F800000ui64;
  *(vec4_t *)((char *)&this->m_PreviousRotationQuaternion + 12) = (vec4_t)0x3F800000ui64;
  *(vec4_t *)((char *)&this->m_RotationVelocity + 12) = (vec4_t)0x3F800000ui64;
  *(vec4_t *)((char *)&this->m_PreviousRotationVelocity + 12) = (vec4_t)0x3F800000ui64;
  *(vec4_t *)((char *)&this->m_RotationInertiaQuat + 12) = (vec4_t)0x3F800000ui64;
  this->m_SavedRotationQuaternion.v[3] = 0.0;
}

/*
==============
TerrainFollowingRadarControl::ScanTerrainAhead
==============
*/
void TerrainFollowingRadarControl::ScanTerrainAhead(TerrainFollowingRadarControl *this, float dT, vec3_t *position, vec3_t *velocity, vec4_t *noseRotationQuat, float enginePower, Physics_WorldId worldId)
{
  float v11; 
  __int128 v12; 
  float v13; 
  __int128 v14; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v21; 
  float v22; 
  double Param; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  float v27; 
  __int128 v32; 
  float v33; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float *p_currentObstacleRangeNormalized; 
  TerrainFollowingRadarControl::RadarBeamInfo *m_radarBeams; 
  __int64 v45; 
  float v46; 
  int m_clipMask; 
  double v48; 
  float v49; 
  double v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  __int128 v59; 
  float v63; 
  float v64; 
  float v65; 
  __int128 v66; 
  float v67; 
  float v68; 
  __int128 v72; 
  float v73; 
  __int128 m_totalRangeStrength_low; 
  vec3_t *v75; 
  double v76; 
  __int128 v77; 
  float v78; 
  float v83; 
  double v84; 
  vec4_t v85; 
  vec4_t v86; 
  vec3_t *start; 
  vec3_t v88; 
  __int64 v89; 
  vec3_t end; 
  vec3_t m_ForwardAxis; 
  vec3_t out; 
  vec3_t v93; 
  vec3_t v94; 
  vec3_t v95; 
  vec3_t v96; 

  v89 = -2i64;
  start = position;
  if ( this->m_modeInitizalied[this->m_currentOperatingMode] )
  {
    Sys_ProfBeginNamedEvent(0xFF008008, "ScanTerrainAhead");
    v11 = velocity->v[0];
    v12 = LODWORD(velocity->v[1]);
    v13 = velocity->v[2];
    v14 = v12;
    *(float *)&v14 = fsqrt((float)((float)(*(float *)&v12 * *(float *)&v12) + (float)(v11 * v11)) + (float)(v13 * v13));
    _XMM6 = v14;
    __asm
    {
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm1, xmm6, xmm15, xmm0
    }
    v19 = LODWORD(velocity->v[0]);
    *(float *)&v19 = velocity->v[0] * (float)(1.0 / *(float *)&_XMM1);
    v18 = v19;
    v21 = v12;
    *(float *)&v21 = *(float *)&v12 * (float)(1.0 / *(float *)&_XMM1);
    v20 = v21;
    this->m_speedMagnitude = *(float *)&_XMM6;
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM6, this->m_minSpeed, this->m_maxSpeed);
    v22 = *(float *)&_XMM6;
    this->m_clampedSpeedMagnitude = *(float *)&_XMM0;
    if ( *(float *)&_XMM6 > 0.001 )
    {
      QuatTransform(noseRotationQuat, &sFlightDynamicsManager.m_ForwardAxis, &out);
      QuatTransform(noseRotationQuat, &sFlightDynamicsManager.m_UpAxis, &v95);
      QuatTransform(noseRotationQuat, &sFlightDynamicsManager.m_ElevatorAxis, &v96);
      Param = TerrainFollowingRadarControl::GetParam(this, TFR_BEAM_NOSE_AFFECT_THROTTLE);
      v25 = v18;
      *(float *)&v25 = *(float *)&v18 + (float)((float)(*(float *)&Param * enginePower) * out.v[0]);
      v24 = v25;
      v26 = v20;
      v27 = (float)(v13 * (float)(1.0 / *(float *)&_XMM1)) + (float)((float)(*(float *)&Param * enginePower) * out.v[2]);
      *(float *)&v26 = fsqrt((float)((float)((float)(*(float *)&v20 + (float)((float)(*(float *)&Param * enginePower) * out.v[1])) * (float)(*(float *)&v20 + (float)((float)(*(float *)&Param * enginePower) * out.v[1]))) + (float)(*(float *)&v24 * *(float *)&v24)) + (float)(v27 * v27));
      _XMM3 = v26;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm15, xmm0
      }
      v32 = v24;
      *(float *)&v32 = *(float *)&v24 * (float)(1.0 / *(float *)&_XMM1);
      _XMM3 = v32;
      v94.v[2] = v27 * (float)(1.0 / *(float *)&_XMM1);
      v85.v[0] = 0.0;
      v85.v[1] = 0.0;
      v85.v[2] = 0.0;
      v33 = v86.v[3];
      v85.v[3] = v86.v[3];
      __asm { vunpcklps xmm0, xmm3, xmm2 }
      *(double *)end.v = *(double *)&_XMM0;
      end.v[2] = v94.v[2];
      m_ForwardAxis = sFlightDynamicsManager.m_ForwardAxis;
      GetRotationQuatFromVectors(&m_ForwardAxis, &end, &v85);
      v35 = position->v[0];
      v36 = position->v[1];
      v37 = position->v[2];
      *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(this, TFR_BEAM_RANGE_AHEAD_SPEED_MULTIPLIER);
      v38 = (float)(*(float *)&_XMM0 - this->m_lookAheadDecrease) * dT;
      end.v[0] = (float)(v11 * v38) + v35;
      end.v[1] = (float)(*(float *)&v12 * v38) + v36;
      end.v[2] = (float)(v13 * v38) + v37;
      TerrainFollowingRadarControl::GetParam(this, TFR_BEAM_DECAY);
      v39 = (float)(v13 * v38) + v37;
      *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(this, TFR_BEAM_DOPPLER_DECAY);
      v40 = *(float *)&_XMM0;
      *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(this, TFR_BEAM_DOPPLER_MULITPLIER);
      v41 = *(float *)&_XMM0;
      *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(this, TFR_BEAM_RANGE_EXPO);
      v42 = *(float *)&_XMM0;
      this->m_totalRangeStrength = 0.0;
      m_ForwardAxis.v[2] = 0.0;
      m_ForwardAxis.v[1] = 0.0;
      m_ForwardAxis.v[0] = 0.0;
      v93.v[2] = 0.0;
      *(_QWORD *)v93.v = 0i64;
      p_currentObstacleRangeNormalized = &this->m_radarBeams[0].currentObstacleRangeNormalized;
      m_radarBeams = this->m_radarBeams;
      v45 = 16i64;
      v46 = end.v[2];
      do
      {
        m_clipMask = this->m_clipMask;
        v48 = TerrainFollowingRadarControl::GetParam(this, TFR_BEAM_RANGE_SPEEDMULT);
        v49 = *(float *)&v48 * v22;
        v50 = TerrainFollowingRadarControl::GetParam(this, TFR_BEAM_RANGE);
        v88 = v93;
        v85.xyz = m_ForwardAxis;
        v86.v[0] = 0.0;
        v86.v[1] = 0.0;
        v86.v[2] = 0.0;
        v86.v[3] = v33;
        *(double *)v94.v = *(double *)end.v;
        v94.v[2] = v46;
        TerrainFollowingRadarControl::RadarBeamInfo::FireBeam(m_radarBeams, &v94, &v86, *(float *)&v50 * v22, v49, (vec3_t *)&v85, m_clipMask, v42, &v88, worldId);
        v51 = *p_currentObstacleRangeNormalized;
        p_currentObstacleRangeNormalized[1] = *p_currentObstacleRangeNormalized;
        v52 = (float)(dT * p_currentObstacleRangeNormalized[2]) + v51;
        v53 = (float)((float)((float)(v52 - v51) * dT) * v41) + p_currentObstacleRangeNormalized[3];
        v54 = (float)(v52 * v39) * dT;
        if ( COERCE_FLOAT(LODWORD(v54) & _xmm) <= COERCE_FLOAT(LODWORD(v52) & _xmm) )
          v55 = v52 - v54;
        else
          v55 = 0.0;
        *p_currentObstacleRangeNormalized = v55;
        v56 = (float)(v53 * v40) * dT;
        if ( COERCE_FLOAT(LODWORD(v56) & _xmm) <= COERCE_FLOAT(LODWORD(v53) & _xmm) )
          v57 = v53 - v56;
        else
          v57 = 0.0;
        p_currentObstacleRangeNormalized[3] = v57;
        v58 = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
        if ( v55 > TFR_MAX_BEAM_NORMALIZED_DISTANCE )
        {
          *p_currentObstacleRangeNormalized = TFR_MAX_BEAM_NORMALIZED_DISTANCE;
          v55 = v58;
        }
        this->m_totalRangeStrength = (float)(powf_0(v55 * v57, p_currentObstacleRangeNormalized[5]) * p_currentObstacleRangeNormalized[4]) + this->m_totalRangeStrength;
        ++m_radarBeams;
        p_currentObstacleRangeNormalized += 9;
        --v45;
      }
      while ( v45 );
      v59 = LODWORD(out.v[1]);
      *(float *)&v59 = fsqrt((float)((float)(*(float *)&v59 * *(float *)&v59) + (float)(out.v[0] * out.v[0])) + (float)(out.v[2] * out.v[2]));
      _XMM3 = v59;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm15, xmm0
      }
      v63 = out.v[1] * (float)(1.0 / *(float *)&_XMM1);
      v64 = out.v[2] * (float)(1.0 / *(float *)&_XMM1);
      v65 = dT * TFR_VECTOR_TIME_LERP;
      v66 = LODWORD(this->m_fbwAvoidanceVector.v[0]);
      v67 = (float)((float)(this->m_fbwAvoidanceVector.v[0] - (float)((float)(1.0 / *(float *)&_XMM1) * out.v[0])) * (float)(dT * TFR_VECTOR_TIME_LERP)) + (float)((float)(1.0 / *(float *)&_XMM1) * out.v[0]);
      this->m_fbwAvoidanceVector.v[0] = v67;
      v68 = (float)((float)(this->m_fbwAvoidanceVector.v[1] - v63) * v65) + v63;
      this->m_fbwAvoidanceVector.v[1] = v68;
      *(float *)&_XMM3 = (float)((float)(this->m_fbwAvoidanceVector.v[2] - v64) * v65) + v64;
      this->m_fbwAvoidanceVector.v[2] = *(float *)&_XMM3;
      *(float *)&v66 = fsqrt((float)((float)(v67 * v67) + (float)(v68 * v68)) + (float)(*(float *)&_XMM3 * *(float *)&_XMM3));
      _XMM3 = v66;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm15, xmm0
      }
      v72 = LODWORD(FLOAT_1_0);
      this->m_fbwAvoidanceVector.v[0] = (float)(1.0 / *(float *)&_XMM1) * v67;
      this->m_fbwAvoidanceVector.v[1] = (float)(1.0 / *(float *)&_XMM1) * this->m_fbwAvoidanceVector.v[1];
      this->m_fbwAvoidanceVector.v[2] = (float)(1.0 / *(float *)&_XMM1) * this->m_fbwAvoidanceVector.v[2];
      v73 = TFR_MAX_CONTROL_SURFACE_STRENGTH;
      *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(this, TFR_CONTROL_SURFACE_MAGNITUDE_MULTIPLIER);
      *(float *)&v72 = *(float *)&_XMM0 * this->m_totalRangeStrength;
      *(double *)&_XMM0 = I_fclamp(*(float *)&v72, 0.0, v73);
      m_totalRangeStrength_low = v72;
      this->m_blockageFactor = 0.0;
      this->m_totalRangeStrength = *(float *)&_XMM0;
      *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(this, TFR_CONTROL_BLOCKED_PERCENT);
      v75 = start;
      if ( (float)(*(float *)&_XMM0 * *(float *)&v72) > 0.0 )
      {
        m_totalRangeStrength_low = LODWORD(this->m_totalRangeStrength);
        v76 = TerrainFollowingRadarControl::GetParam(this, TFR_CONTROL_BLOCKED_PERCENT);
        this->m_blockageFactor = *(float *)&v76 * *(float *)&m_totalRangeStrength_low;
      }
      v77 = m_totalRangeStrength_low;
      *(float *)&v77 = (float)((float)(*(float *)&m_totalRangeStrength_low * TFR_LOOKAHEAD_MULTIPLIER) * dT) + this->m_lookAheadDecrease;
      this->m_lookAheadDecrease = *(float *)&v77;
      v78 = (float)(*(float *)&v77 * TFR_LOOKAHEAD_DECAY) * dT;
      if ( COERCE_FLOAT(LODWORD(v78) & _xmm) <= COERCE_FLOAT(v77 & _xmm) )
      {
        *(float *)&v77 = *(float *)&v77 - v78;
        _XMM0 = v77;
      }
      else
      {
        _XMM0 = 0i64;
      }
      this->m_lookAheadDecrease = *(float *)&_XMM0;
      _XMM2 = LODWORD(TFR_LOOKAHEAD_MAX);
      __asm
      {
        vcmpltss xmm1, xmm2, xmm0
        vblendvps xmm1, xmm0, xmm2, xmm1
      }
      this->m_lookAheadDecrease = *(float *)&_XMM1;
      this->m_controlSurfaces[3] = 0.0;
      *(_QWORD *)this->m_controlSurfaces = 0i64;
      v83 = TFR_MAX_CONTROL_SURFACE_STRENGTH;
      TerrainFollowingRadarControl::GetParam(this, TFR_CONTROL_SURFACE_MAGNITUDE_MULTIPLIER);
      v84 = I_fclamp(0.0, 0.0, v83);
      this->m_totalRangeStrength = *(float *)&v84;
      if ( Physics_IsPredictiveWorld(worldId) && FD_GetDrawAvoidanceTracesDvar() )
      {
        end.v[0] = (float)(5000.0 * this->m_fbwAvoidanceVector.v[0]) + v75->v[0];
        end.v[1] = (float)(5000.0 * this->m_fbwAvoidanceVector.v[1]) + v75->v[1];
        end.v[2] = (float)(5000.0 * this->m_fbwAvoidanceVector.v[2]) + v75->v[2];
        FD_DebugLine(v75, &end, &colorWhite, 0, 1);
      }
    }
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
FlightDynamics::SelectStickMode
==============
*/
void FlightDynamics::SelectStickMode(FlightDynamics *this)
{
  ;
}

/*
==============
TerrainFollowingRadarControl::SetClipMask
==============
*/
void TerrainFollowingRadarControl::SetClipMask(TerrainFollowingRadarControl *this, int newClipMask)
{
  this->m_clipMask = newClipMask;
}

/*
==============
FlightDynamicsManager::SetDefaultAxis
==============
*/
void FlightDynamicsManager::SetDefaultAxis(FlightDynamicsManager *this)
{
  *(_QWORD *)this->m_UpAxis.v = 0i64;
  this->m_UpAxis.v[2] = 1.0;
  *(_OWORD *)this->m_ForwardAxis.v = 0x3F800000ui64;
  *(_QWORD *)&this->m_ElevatorAxis.y = 1065353216i64;
}

/*
==============
FlightDynamicsManager::SetFlightDynamicMode
==============
*/
void FlightDynamicsManager::SetFlightDynamicMode(FlightDynamicsManager *this, float percent)
{
  ;
}

/*
==============
FlightDynamicsManager::SetFlightDynamicsModeImmediate
==============
*/
void FlightDynamicsManager::SetFlightDynamicsModeImmediate(FlightDynamicsManager *this, int newMode)
{
  ;
}

/*
==============
FlightDynamics::SetFlyByWireInputVector
==============
*/
void FlightDynamics::SetFlyByWireInputVector(FlightDynamics *this, vec3_t *fbwVector)
{
  this->m_FlyByWireInputVector = *fbwVector;
}

/*
==============
FlightDynamics::SetFlyByWireStatus
==============
*/
void FlightDynamics::SetFlyByWireStatus(FlightDynamics *this, bool enabled)
{
  this->m_EnableFlyByWire = enabled;
}

/*
==============
FlightDynamics::SetInitialState
==============
*/
void FlightDynamics::SetInitialState(FlightDynamics *this, vec3_t *position, vec4_t *orientation, vec3_t *velocity, int clipMask, FlightDynamicsStatus status)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v12; 
  float v13; 
  FlightDynamics_vtbl *v14; 

  v6 = orientation->v[0];
  v7 = orientation->v[1];
  v8 = orientation->v[2];
  v9 = orientation->v[3];
  v10 = velocity->v[0];
  *(_QWORD *)&this->m_RotationQuaternion.xyz.y = 0i64;
  *(vec4_t *)((char *)&this->m_RotationQuaternion + 12) = (vec4_t)0x3F800000ui64;
  *(vec4_t *)((char *)&this->m_PreviousRotationQuaternion + 12) = (vec4_t)0x3F800000ui64;
  *(vec4_t *)((char *)&this->m_RotationVelocity + 12) = (vec4_t)0x3F800000ui64;
  *(vec4_t *)((char *)&this->m_PreviousRotationVelocity + 12) = (vec4_t)0x3F800000ui64;
  *(vec4_t *)((char *)&this->m_RotationInertiaQuat + 12) = (vec4_t)0x3F800000ui64;
  this->m_SavedRotationQuaternion.v[3] = 0.0;
  v12 = position->v[0];
  this->m_InputStrengthModifier = 1.0;
  this->m_Position.v[0] = v12;
  *(_QWORD *)&this->m_Position.y = *(_QWORD *)&position->y;
  v13 = velocity->v[1];
  this->m_RotationQuaternion.v[0] = v6;
  this->m_RotationQuaternion.v[1] = v7;
  this->m_RotationQuaternion.v[2] = v8;
  this->m_RotationQuaternion.v[3] = v9;
  this->m_Velocity.v[1] = v13;
  this->m_Velocity.v[2] = velocity->v[2];
  this->m_Velocity.v[0] = v10;
  this->m_PreviousVelocity.v[0] = v10;
  *(_QWORD *)&this->m_PreviousVelocity.y = *(_QWORD *)&this->m_Velocity.y;
  this->m_PreviousRotationVelocity = this->m_RotationVelocity;
  this->m_RotationQuaternion.v[0] = v6;
  this->m_RotationQuaternion.v[1] = v7;
  this->m_RotationQuaternion.v[2] = v8;
  this->m_RotationQuaternion.v[3] = v9;
  this->m_PreviousRotationQuaternion.v[0] = v6;
  this->m_PreviousRotationQuaternion.v[1] = v7;
  this->m_PreviousRotationQuaternion.v[2] = v8;
  this->m_PreviousRotationQuaternion.v[3] = v9;
  v14 = this->__vftable;
  this->m_EnableFlyByWire = 1;
  ((void (*)(void))v14->ResetInputControls)();
  this->m_Status = status;
}

/*
==============
FlightDynamics::SetPilotInputStrength
==============
*/
void FlightDynamics::SetPilotInputStrength(FlightDynamics *this, float strength)
{
  this->m_InputStrengthModifier = strength;
}

/*
==============
FlightDynamics::SetRotationLocal
==============
*/
void FlightDynamics::SetRotationLocal(FlightDynamics *this, const vec3_t *rotationNormalVector, float angle)
{
  float v5; 
  float s; 
  vec4_t out; 
  vec4_t in1; 

  if ( (LODWORD(this->m_RotationQuaternion.v[0]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2109, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_X] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_X] )") )
    __debugbreak();
  if ( (LODWORD(this->m_RotationQuaternion.v[1]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2110, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_Y] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_Y] )") )
    __debugbreak();
  if ( (LODWORD(this->m_RotationQuaternion.v[2]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2111, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_Z] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_Z] )") )
    __debugbreak();
  if ( (LODWORD(this->m_RotationQuaternion.v[3]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2112, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_W] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_W] )") )
    __debugbreak();
  if ( (LODWORD(this->m_RotationVelocity.v[0]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2114, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationVelocity[FD_X] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationVelocity[FD_X] )") )
    __debugbreak();
  if ( (LODWORD(this->m_RotationVelocity.v[1]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2115, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationVelocity[FD_Y] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationVelocity[FD_Y] )") )
    __debugbreak();
  if ( (LODWORD(this->m_RotationVelocity.v[2]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2116, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationVelocity[FD_Z] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationVelocity[FD_Z] )") )
    __debugbreak();
  if ( (LODWORD(this->m_RotationVelocity.v[3]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2117, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationVelocity[FD_W] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationVelocity[FD_W] )") )
    __debugbreak();
  if ( !rotationNormalVector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2119, ASSERT_TYPE_ASSERT, "(rotationNormalVector)", (const char *)&queryFormat, "rotationNormalVector") )
    __debugbreak();
  if ( (float)((float)((float)(rotationNormalVector->v[0] * rotationNormalVector->v[0]) + (float)(rotationNormalVector->v[1] * rotationNormalVector->v[1])) + (float)(rotationNormalVector->v[2] * rotationNormalVector->v[2])) < 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2120, ASSERT_TYPE_ASSERT, "(Vec3LengthSq( *rotationNormalVector ) >= 0.001f)", (const char *)&queryFormat, "Vec3LengthSq( *rotationNormalVector ) >= EQUAL_EPSILON") )
    __debugbreak();
  FastSinCos(angle * 0.5, &s, &in1.v[3]);
  v5 = s * rotationNormalVector->v[1];
  in1.v[0] = s * rotationNormalVector->v[0];
  in1.v[2] = s * rotationNormalVector->v[2];
  in1.v[1] = v5;
  QuatMultiply(&in1, &this->m_RotationQuaternion, &out);
  this->m_RotationQuaternion = out;
  QuatMultiply(&in1, &this->m_RotationVelocity, &out);
  this->m_RotationVelocity = out;
  if ( (LODWORD(this->m_RotationQuaternion.v[0]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2141, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_X] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_X] )") )
    __debugbreak();
  if ( (LODWORD(this->m_RotationQuaternion.v[1]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2142, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_Y] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_Y] )") )
    __debugbreak();
  if ( (LODWORD(this->m_RotationQuaternion.v[2]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2143, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_Z] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_Z] )") )
    __debugbreak();
  if ( (LODWORD(this->m_RotationQuaternion.v[3]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2144, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_W] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_W] )") )
    __debugbreak();
}

/*
==============
FlightDynamics::SetRotationNonLocal
==============
*/
void FlightDynamics::SetRotationNonLocal(FlightDynamics *this, const vec3_t *rotationNormalVector, float angle)
{
  float v5; 
  float s; 
  vec4_t out; 
  vec4_t in2; 

  if ( !rotationNormalVector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2151, ASSERT_TYPE_ASSERT, "(rotationNormalVector)", (const char *)&queryFormat, "rotationNormalVector") )
    __debugbreak();
  FastSinCos(angle * 0.5, &s, &in2.v[3]);
  v5 = s * rotationNormalVector->v[1];
  in2.v[0] = s * rotationNormalVector->v[0];
  in2.v[2] = s * rotationNormalVector->v[2];
  in2.v[1] = v5;
  QuatMultiply(&this->m_RotationQuaternion, &in2, &out);
  this->m_RotationQuaternion = out;
  QuatMultiply(&this->m_RotationVelocity, &in2, &out);
  this->m_RotationVelocity = out;
  if ( (LODWORD(this->m_RotationQuaternion.v[0]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2172, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_X] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_X] )") )
    __debugbreak();
  if ( (LODWORD(this->m_RotationQuaternion.v[1]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2173, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_Y] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_Y] )") )
    __debugbreak();
  if ( (LODWORD(this->m_RotationQuaternion.v[2]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2174, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_Z] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_Z] )") )
    __debugbreak();
  if ( (LODWORD(this->m_RotationQuaternion.v[3]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2175, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_W] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_W] )") )
    __debugbreak();
}

/*
==============
FlightDynamicsManager::SetSpeedCruiseControlVelocity
==============
*/
void FlightDynamicsManager::SetSpeedCruiseControlVelocity(FlightDynamicsManager *this, float minSpeed, float maxSpeed, float boostSpeed)
{
  ;
}

/*
==============
FlightDynamics::Setup
==============
*/
char FlightDynamics::Setup(FlightDynamics *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int vehicleId, int entityNumber, unsigned int vehDefIndex, const VehicleDef *vehDef)
{
  if ( BgVehiclePhysics::Setup(this, vehicleSystem, worldId, vehicleId, entityNumber, vehDefIndex, vehDef) )
  {
    *(_QWORD *)&this->m_Status = 0i64;
    *(_QWORD *)(&this->m_SavedRotationQuaternion.xyz + 1) = 0i64;
    *(_QWORD *)&this->m_AverageDT = 998803593i64;
    this->m_EnableInputDeadZone = 1;
    this->m_EnableFlyByWire = 1;
    *(_QWORD *)this->m_RotationQuaternion.v = 0i64;
    this->m_RotationQuaternion.v[2] = 0.0;
    *(_QWORD *)(&this->m_RotationQuaternion.xyz + 1) = 1065353216i64;
    *(_QWORD *)&this->m_PreviousRotationQuaternion.xyz.y = 0i64;
    *(_QWORD *)(&this->m_PreviousRotationQuaternion.xyz + 1) = 1065353216i64;
    *(_QWORD *)&this->m_RotationVelocity.xyz.y = 0i64;
    *(_QWORD *)(&this->m_RotationVelocity.xyz + 1) = 1065353216i64;
    *(_QWORD *)&this->m_PreviousRotationVelocity.xyz.y = 0i64;
    *(_QWORD *)(&this->m_PreviousRotationVelocity.xyz + 1) = 1065353216i64;
    *(_QWORD *)&this->m_RotationInertiaQuat.xyz.y = 0i64;
    *(_QWORD *)(&this->m_RotationInertiaQuat.xyz + 1) = 1065353216i64;
    *(_QWORD *)&this->m_SavedRotationQuaternion.xyz.y = 0i64;
    if ( Physics_IsPredictiveWorld(this->m_worldId) )
      FlightDynamics::SoundData::Setup(&this->m_sound, vehDef);
    return 1;
  }
  else
  {
    Com_PrintWarning(16, "[FlightDynamics::Setup() - failed to create helicopter.");
    return 0;
  }
}

/*
==============
FlightDynamics::SoundData::Setup
==============
*/
void FlightDynamics::SoundData::Setup(FlightDynamics::SoundData *this, const VehicleDef *vehDef)
{
  const char *name; 
  unsigned int v5; 
  char v6; 
  unsigned int v7; 
  char v8; 
  const char *v9; 
  char v10; 
  unsigned int v11; 
  char v12; 
  const char *v13; 
  char v14; 
  unsigned int v15; 
  char v16; 
  const char *v17; 
  char v18; 
  unsigned int v19; 
  char v20; 
  const char *v21; 
  char v22; 
  char v23; 

  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 562, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  name = vehDef->vehiclePhysicsDef.sndImpactHard.alias.name;
  v5 = 5381;
  if ( name && (v6 = *name) != 0 )
  {
    v7 = 5381;
    do
    {
      ++name;
      v8 = v6 | 0x20;
      if ( (unsigned int)(v6 - 65) >= 0x1A )
        v8 = v6;
      v7 = 65599 * v7 + v8;
      v6 = *name;
    }
    while ( *name );
    if ( !v7 )
      v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  this->ImpactHard = v7;
  v9 = vehDef->vehiclePhysicsDef.sndImpactLight.alias.name;
  if ( v9 && (v10 = *v9) != 0 )
  {
    v11 = 5381;
    do
    {
      ++v9;
      v12 = v10 | 0x20;
      if ( (unsigned int)(v10 - 65) >= 0x1A )
        v12 = v10;
      v11 = 65599 * v11 + v12;
      v10 = *v9;
    }
    while ( *v9 );
    if ( !v11 )
      v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  this->ImpactLight = v11;
  v13 = vehDef->vehiclePhysicsDef.sndBrakingHard.alias.name;
  if ( v13 && (v14 = *v13) != 0 )
  {
    v15 = 5381;
    do
    {
      ++v13;
      v16 = v14 | 0x20;
      if ( (unsigned int)(v14 - 65) >= 0x1A )
        v16 = v14;
      v15 = 65599 * v15 + v16;
      v14 = *v13;
    }
    while ( *v13 );
    if ( !v15 )
      v15 = 1;
  }
  else
  {
    v15 = 0;
  }
  this->RotorImpactHard = v15;
  v17 = vehDef->vehiclePhysicsDef.sndBrakingLight.alias.name;
  if ( v17 && (v18 = *v17) != 0 )
  {
    v19 = 5381;
    do
    {
      ++v17;
      v20 = v18 | 0x20;
      if ( (unsigned int)(v18 - 65) >= 0x1A )
        v20 = v18;
      v19 = 65599 * v19 + v20;
      v18 = *v17;
    }
    while ( *v17 );
    if ( !v19 )
      v19 = 1;
  }
  else
  {
    v19 = 0;
  }
  this->RotorImpactLight = v19;
  v21 = vehDef->vehiclePhysicsDef.sndDlc1.alias.name;
  if ( v21 && (v22 = *v21) != 0 )
  {
    do
    {
      ++v21;
      v23 = v22 | 0x20;
      if ( (unsigned int)(v22 - 65) >= 0x1A )
        v23 = v22;
      v5 = 65599 * v5 + v23;
      v22 = *v21;
    }
    while ( *v21 );
    if ( !v5 )
      v5 = 1;
    this->Horn = v5;
  }
  else
  {
    this->Horn = 0;
  }
}

/*
==============
FlightDynamics::SimulateTurbineOperation
==============
*/
void FlightDynamics::SimulateTurbineOperation(FlightDynamics *this, float dT)
{
  ;
}

/*
==============
FlightDynamics::StartPlayerControlling
==============
*/
void FlightDynamics::StartPlayerControlling(FlightDynamics *this)
{
  Com_Printf(16, "[FlightDynamics::StartPlayerControlling() - FD type %d object becomes player controlled.\n", (unsigned int)this->m_DynamicsModel);
  BgVehiclePhysics::StartPlayerControlling(this);
}

/*
==============
FlightDynamics::Step
==============
*/
char FlightDynamics::Step(FlightDynamics *this, float deltaTime)
{
  float v2; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  __m128 v8; 
  double v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  __m128 v15; 
  float v16; 
  __m128 v17; 
  float v18; 
  __m128 v19; 
  float v20; 
  float v21; 
  __m128 v22; 
  float v26; 
  float v27; 
  float v28; 
  hknpWorld *world; 
  __m128 v34; 
  __m128 v37; 
  const hkTransformf *(__fastcall *getBodyTransform)(hknpWorldReader *, hknpBodyId); 
  unsigned int PhysicsBodyId; 
  const hkRotationImpl<float> *v40; 
  __m128 m_quad; 
  __m128 v42; 
  __m128 v54; 
  __m128 v59; 
  __m128 v60; 
  __m128 v65; 
  __m128 v72; 
  float v77; 
  float v78; 
  float v79; 
  double v80; 
  float v81; 
  double v84; 
  vec3_t v86; 
  vec4_t quat_8; 
  __int64 v88; 
  vec3_t axis; 
  vec4_t out; 
  vec3_t in; 
  vec3_t v92; 
  vec4_t result; 
  hkQuaternionf v94; 
  hkQuaternionf v95; 
  hkSimdFloat32 v96; 

  v88 = -2i64;
  v2 = deltaTime;
  if ( !Physics_IsPredictiveWorld(this->m_worldId) )
  {
LABEL_10:
    this->m_AverageDT = v2;
    goto LABEL_11;
  }
  if ( deltaTime >= (float)(FD_SIMULATION_LOCKED_STEP_DELTATIME - 0.001) )
  {
    v7 = FD_STEP_ROLLING_AVERAGE_FRAME_COUNT / deltaTime;
    v2 = v2 + this->m_AccumulatedDT;
    if ( v7 > 1.0 )
      v2 = (float)((float)(1.0 / v7) * v2) + (float)(this->m_AverageDT - (float)((float)(1.0 / v7) * this->m_AverageDT));
    this->m_AccumulatedDT = 0.0;
    goto LABEL_10;
  }
  v5 = deltaTime + this->m_AccumulatedDT;
  v4 = v5;
  this->m_AccumulatedDT = v5;
  if ( v5 >= FD_SIMULATION_LOCKED_STEP_DELTATIME )
  {
    v6 = FD_STEP_ROLLING_AVERAGE_FRAME_COUNT / deltaTime;
    if ( (float)(FD_STEP_ROLLING_AVERAGE_FRAME_COUNT / v2) > 1.0 )
      v5 = (float)((float)(1.0 / v6) * v5) + (float)(this->m_AverageDT - (float)((float)(1.0 / v6) * this->m_AverageDT));
    v2 = v5;
    this->m_AverageDT = v5;
    this->m_AccumulatedDT = v4 - FD_SIMULATION_LOCKED_STEP_DELTATIME;
LABEL_11:
    v8 = (__m128)LODWORD(FD_SIMULATION_LOCKED_STEP_DELTATIME);
    v9 = I_fclamp(v2 / FD_SIMULATION_LOCKED_STEP_DELTATIME, 0.1, FD_MAX_ALLOWED_EXTRAPOLATION_DELTATIME_RATIO);
    v10 = *(float *)&v9;
    Sys_ProfBeginNamedEvent(0xFFFF0000, "FlightDynamics::Step");
    BgVehiclePhysics::Step(this, v8.m128_f32[0]);
    if ( ((LODWORD(this->m_RotationQuaternion.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(this->m_RotationQuaternion.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(this->m_RotationQuaternion.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(this->m_RotationQuaternion.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 930, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_RotationQuaternion )[0] ) && !IS_NAN( ( m_RotationQuaternion )[1] ) && !IS_NAN( ( m_RotationQuaternion )[2] ) && !IS_NAN( ( m_RotationQuaternion )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_RotationQuaternion )[0] ) && !IS_NAN( ( m_RotationQuaternion )[1] ) && !IS_NAN( ( m_RotationQuaternion )[2] ) && !IS_NAN( ( m_RotationQuaternion )[3] )") )
      __debugbreak();
    Axis43ToQuat(&this->m_transform, &out);
    if ( (float)((float)((float)(this->m_linearVelocityWs.v[0] * this->m_linearVelocityWs.v[0]) + (float)(this->m_linearVelocityWs.v[1] * this->m_linearVelocityWs.v[1])) + (float)(this->m_linearVelocityWs.v[2] * this->m_linearVelocityWs.v[2])) <= 12390400.0 )
    {
      v14 = out.v[3];
      v13 = out.v[2];
      v12 = out.v[1];
      v11 = out.v[0];
    }
    else
    {
      this->m_linearVelocityWs.v[0] = this->m_Velocity.v[0];
      this->m_linearVelocityWs.v[1] = this->m_Velocity.v[1];
      this->m_linearVelocityWs.v[2] = this->m_Velocity.v[2];
      v11 = this->m_RotationQuaternion.v[0];
      out.v[0] = v11;
      v12 = this->m_RotationQuaternion.v[1];
      out.v[1] = v12;
      v13 = this->m_RotationQuaternion.v[2];
      out.v[2] = v13;
      v14 = this->m_RotationQuaternion.v[3];
      out.v[3] = v14;
    }
    v15 = (__m128)*(unsigned __int64 *)this->m_linearVelocityWs.v;
    v16 = this->m_linearVelocityWs.v[2];
    v17 = (__m128)*(unsigned __int64 *)this->m_transform.row3.v;
    quat_8 = out;
    LODWORD(v18) = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
    if ( this->m_Status == FD_ENABLED )
    {
      v86.v[2] = v16;
      axis.v[2] = this->m_transform.m[3].v[2];
      this->m_Position.v[0] = v17.m128_f32[0];
      this->m_Position.v[1] = v18;
      this->m_Position.v[2] = axis.v[2];
      this->m_PreviousRotationQuaternion.v[0] = this->m_RotationQuaternion.v[0];
      this->m_PreviousRotationQuaternion.v[1] = this->m_RotationQuaternion.v[1];
      this->m_PreviousRotationQuaternion.v[2] = this->m_RotationQuaternion.v[2];
      this->m_PreviousRotationQuaternion.v[3] = this->m_RotationQuaternion.v[3];
      this->m_RotationQuaternion.v[0] = v11;
      this->m_RotationQuaternion.v[1] = v12;
      this->m_RotationQuaternion.v[2] = v13;
      this->m_RotationQuaternion.v[3] = v14;
      this->m_Velocity.v[0] = v15.m128_f32[0];
      *(double *)v86.v = *(double *)v15.m128_u64;
      this->m_Velocity.v[1] = _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
      this->m_Velocity.v[2] = v86.v[2];
    }
    else
    {
      axis.v[2] = v16;
      v86.v[2] = this->m_transform.m[3].v[2];
      *(_QWORD *)&this->m_RotationQuaternion.xyz.y = 0i64;
      *(_QWORD *)(&this->m_RotationQuaternion.xyz + 1) = 1065353216i64;
      *(_QWORD *)&this->m_PreviousRotationQuaternion.xyz.y = 0i64;
      *(_QWORD *)(&this->m_PreviousRotationQuaternion.xyz + 1) = 1065353216i64;
      *(_QWORD *)&this->m_RotationVelocity.xyz.y = 0i64;
      *(_QWORD *)(&this->m_RotationVelocity.xyz + 1) = 1065353216i64;
      *(_QWORD *)&this->m_PreviousRotationVelocity.xyz.y = 0i64;
      *(_QWORD *)(&this->m_PreviousRotationVelocity.xyz + 1) = 1065353216i64;
      *(_QWORD *)&this->m_RotationInertiaQuat.xyz.y = 0i64;
      *(_QWORD *)(&this->m_RotationInertiaQuat.xyz + 1) = 1065353216i64;
      *(_QWORD *)&this->m_SavedRotationQuaternion.xyz.y = 0i64;
      this->m_SavedRotationQuaternion.v[3] = 0.0;
      this->m_InputStrengthModifier = 1.0;
      this->m_Position.v[0] = v17.m128_f32[0];
      *(double *)v86.v = *(double *)v17.m128_u64;
      this->m_Position.v[1] = v18;
      this->m_Position.v[2] = v86.v[2];
      this->m_RotationQuaternion.v[0] = v11;
      this->m_RotationQuaternion.v[1] = v12;
      this->m_RotationQuaternion.v[2] = v13;
      this->m_RotationQuaternion.v[3] = v14;
      *(double *)axis.v = *(double *)v15.m128_u64;
      this->m_Velocity.v[0] = v15.m128_f32[0];
      this->m_Velocity.v[1] = axis.v[1];
      this->m_Velocity.v[2] = axis.v[2];
      this->m_PreviousVelocity.v[0] = v15.m128_f32[0];
      this->m_PreviousVelocity.v[1] = this->m_Velocity.v[1];
      this->m_PreviousVelocity.v[2] = this->m_Velocity.v[2];
      this->m_PreviousRotationVelocity.v[0] = this->m_RotationVelocity.v[0];
      this->m_PreviousRotationVelocity.v[1] = this->m_RotationVelocity.v[1];
      this->m_PreviousRotationVelocity.v[2] = this->m_RotationVelocity.v[2];
      this->m_PreviousRotationVelocity.v[3] = this->m_RotationVelocity.v[3];
      this->m_RotationQuaternion.v[0] = v11;
      this->m_RotationQuaternion.v[1] = v12;
      this->m_RotationQuaternion.v[2] = v13;
      this->m_RotationQuaternion.v[3] = v14;
      this->m_PreviousRotationQuaternion.v[0] = v11;
      this->m_PreviousRotationQuaternion.v[1] = v12;
      this->m_PreviousRotationQuaternion.v[2] = v13;
      this->m_PreviousRotationQuaternion.v[3] = v14;
      this->m_EnableFlyByWire = 1;
      this->ResetInputControls(this);
      this->m_Status = FD_PROPOSE_ENABLE;
      quat_8 = this->m_RotationInertiaQuat;
      v19 = (__m128)*(unsigned __int64 *)this->m_angularVelocityWs.v;
      v86.v[2] = this->m_angularVelocityWs.v[2];
      v20 = v19.m128_f32[0] * v8.m128_f32[0];
      *(double *)v86.v = *(double *)v19.m128_u64;
      v22 = _mm_shuffle_ps(v19, v19, 85);
      v21 = v22.m128_f32[0] * v8.m128_f32[0];
      v22.m128_f32[0] = fsqrt((float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)((float)(v8.m128_f32[0] * v86.v[2]) * (float)(v8.m128_f32[0] * v86.v[2])));
      _XMM0 = v22;
      __asm
      {
        vcmpless xmm1, xmm0, cs:__real@80000000
        vblendvps xmm2, xmm0, xmm9, xmm1
      }
      axis.v[0] = (float)(1.0 / *(float *)&_XMM2) * v20;
      axis.v[1] = (float)(1.0 / *(float *)&_XMM2) * v21;
      axis.v[2] = (float)(1.0 / *(float *)&_XMM2) * (float)(v8.m128_f32[0] * v86.v[2]);
      AngleRadAxisToQuat(v22.m128_f32[0], &axis, &quat_8);
    }
    v26 = this->m_linearVelocityWs.v[0];
    v27 = this->m_linearVelocityWs.v[1];
    v28 = this->m_linearVelocityWs.v[2];
    FlightDynamics::UpdateFlightDynamics(this, v8.m128_f32[0], 1);
    world = HavokPhysics_GetConstWorld(this->m_worldId)->world;
    if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 1000, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
      __debugbreak();
    in.v[0] = this->m_Position.v[0] - this->m_centerOfMassWs.v[0];
    in.v[1] = this->m_Position.v[1] - this->m_centerOfMassWs.v[1];
    in.v[2] = this->m_Position.v[2] - this->m_centerOfMassWs.v[2];
    QuatSlerp(&out, &this->m_RotationQuaternion, v10, &result);
    this->m_Velocity.v[0] = (float)((float)(this->m_Velocity.v[0] - v26) * v10) + v26;
    this->m_Velocity.v[1] = (float)((float)(this->m_Velocity.v[1] - v27) * v10) + v27;
    this->m_Velocity.v[2] = (float)((float)(this->m_Velocity.v[2] - v28) * v10) + v28;
    _XMM6 = LODWORD(result.v[0]);
    __asm
    {
      vinsertps xmm6, xmm6, dword ptr [rbp+0C0h+result+4], 10h
      vinsertps xmm6, xmm6, dword ptr [rbp+0C0h+result+8], 20h
      vinsertps xmm6, xmm6, dword ptr [rbp+0C0h+result+0Ch], 30h
    }
    v34 = v8;
    v34.m128_f32[0] = v8.m128_f32[0] * v10;
    _XMM2 = _mm_shuffle_ps(v34, v34, 0);
    __asm { vrcpps  xmm3, xmm2 }
    v37 = _mm128_mul_ps(_XMM3, _mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM3, _XMM2)));
    getBodyTransform = world->getBodyTransform;
    PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
    v40 = (const hkRotationImpl<float> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))getBodyTransform)(&world->hknpWorldReader, PhysicsBodyId);
    hkQuaternionf::set(&v95, v40);
    m_quad = v95.m_vec.m_quad;
    v42 = _mm128_sub_ps(_mm128_mul_ps(v95.m_vec.m_quad, _mm_shuffle_ps(_XMM6, _XMM6, 201)), _mm128_mul_ps(_XMM6, _mm_shuffle_ps(m_quad, m_quad, 201)));
    _XMM3 = _mm128_add_ps(_mm128_sub_ps(_mm_shuffle_ps(v42, v42, 201), _mm128_mul_ps(v95.m_vec.m_quad, _mm_shuffle_ps(_XMM6, _XMM6, 255))), _mm128_mul_ps(_XMM6, _mm_shuffle_ps(m_quad, m_quad, 255)));
    __asm
    {
      vdpps   xmm0, xmm6, xmm5, 0FFh
      vblendps xmm4, xmm3, xmm0, 8
      vdpps   xmm0, xmm4, xmm4, 0FFh
      vrsqrtps xmm1, xmm0
    }
    v94.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM1), _XMM1)), _mm128_mul_ps(_XMM1, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM4);
    __asm { vbroadcastss xmm6, cs:__real@3bf5c28f }
    hkQuaternionf::getAngleSr(&v94, &v96);
    if ( v96.m_real.m128_f32[0] <= *(float *)&_XMM6 )
    {
      __asm { vbroadcastss xmm2, cs:__real@2f800000 }
      _XMM11 = v94.m_vec.m_quad;
      __asm { vdpps   xmm12, xmm11, xmm11, 7Fh }
      _XMM4 = _mm128_mul_ps(_XMM12, g_vectorfConstants[9]);
      v65 = 0i64;
      if ( _XMM4.m128_f32[0] <= *(float *)&_XMM2 )
      {
LABEL_31:
        QuatTransform(&this->m_RotationInertiaQuat, &in, &v92);
        v77 = v92.v[2] - in.v[2];
        v92.v[0] = (float)(v92.v[0] - in.v[0]) * v10;
        v92.v[1] = (float)(v92.v[1] - in.v[1]) * v10;
        v78 = v92.v[1];
        v92.v[2] = (float)(v92.v[2] - in.v[2]) * v10;
        v79 = FD_ANGULAR_TO_LINEAR_OFFSET_MULTIPLIER;
        this->m_Velocity.v[0] = (float)(v92.v[0] * FD_ANGULAR_TO_LINEAR_OFFSET_MULTIPLIER) + this->m_Velocity.v[0];
        this->m_Velocity.v[1] = (float)(v78 * v79) + this->m_Velocity.v[1];
        this->m_Velocity.v[2] = (float)((float)(v77 * v10) * v79) + this->m_Velocity.v[2];
        v80 = I_fclamp((float)(v8.m128_f32[0] * FD_ANGULAR_INERTIA_TRANSFER_RATE) * v10, 0.0, 1.0);
        v81 = (float)((float)(1.0 - *(float *)&v80) * this->m_angularVelocityWs.v[0]) + (float)(v65.m128_f32[0] * *(float *)&v80);
        _mm_shuffle_ps(v65, v65, 85);
        this->m_angularVelocityWs.v[2] = (float)((float)(1.0 - *(float *)&v80) * this->m_angularVelocityWs.v[2]) + (float)(_mm_shuffle_ps(v65, v65, 170).m128_f32[0] * *(float *)&v80);
        quat_8 = this->m_RotationInertiaQuat;
        _XMM2 = *(unsigned __int64 *)this->m_angularVelocityWs.v;
        __asm { vinsertps xmm0, xmm2, xmm4, 10h }
        HIDWORD(v84) = DWORD1(_XMM0);
        *(float *)&v84 = v81;
        *(double *)this->m_angularVelocityWs.v = v84;
        *(double *)v86.v = v84;
        v86.v[2] = this->m_angularVelocityWs.v[2];
        FlightDynamics::CalculateDeltaQuatFromAngularVelocity(&v86, v8.m128_f32[0] * v10, &quat_8);
        this->m_linearVelocityWs.v[0] = this->m_Velocity.v[0];
        this->m_linearVelocityWs.v[1] = this->m_Velocity.v[1];
        this->m_linearVelocityWs.v[2] = this->m_Velocity.v[2];
        Sys_ProfEndNamedEvent();
        return 1;
      }
      __asm
      {
        vcmpleps xmm3, xmm4, xmm8
        vrsqrtps xmm1, xmm4
      }
      _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM1), _XMM1)), _mm128_mul_ps(_XMM1, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM4);
      __asm
      {
        vandnps xmm7, xmm3, xmm2
        vcmpleps xmm4, xmm12, xmm8
        vrsqrtps xmm1, xmm12
      }
      _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM12), _XMM1)), _mm128_mul_ps(_XMM1, *(__m128 *)hkMath::hkSse_floatHalf));
      __asm { vandnps xmm1, xmm4, xmm0 }
      v72 = _mm128_mul_ps(_XMM1, v94.m_vec.m_quad);
      _XMM0 = _mm_shuffle_ps(v94.m_vec.m_quad, v94.m_vec.m_quad, 255);
      __asm
      {
        vcmpltps xmm1, xmm0, xmm8
        vpsrld  xmm2, xmm1, 1Fh
        vpslld  xmm0, xmm2, 1Fh
      }
      v59 = _mm128_mul_ps(_XMM7, v37);
      v60 = (__m128)(*(_OWORD *)&v72 ^ _XMM0);
    }
    else
    {
      _XMM6 = v94.m_vec.m_quad;
      __asm
      {
        vdpps   xmm0, xmm6, xmm6, 7Fh
        vcmpleps xmm3, xmm0, xmm5
        vrsqrtps xmm1, xmm0
      }
      _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM0), _XMM1)), _mm128_mul_ps(_XMM1, *(__m128 *)hkMath::hkSse_floatHalf));
      __asm { vandnps xmm0, xmm3, xmm2 }
      v54 = _mm128_mul_ps(_XMM0, v94.m_vec.m_quad);
      _XMM1 = _mm_shuffle_ps(_XMM6, _XMM6, 255);
      __asm
      {
        vcmpltps xmm0, xmm1, xmm5
        vpsrld  xmm2, xmm0, 1Fh
        vpslld  xmm3, xmm2, 1Fh
      }
      v59 = _mm128_mul_ps(v37, v96.m_real);
      v60 = (__m128)(*(_OWORD *)&v54 ^ _XMM3);
    }
    v65 = _mm128_mul_ps(v60, v59);
    goto LABEL_31;
  }
  return 1;
}

/*
==============
FlightDynamics::StopPlayerControlling
==============
*/
void FlightDynamics::StopPlayerControlling(FlightDynamics *this)
{
  VehiclePhysicsNetcodeType m_netcodeType; 
  BgVehiclePhysicsManager *v3; 
  BgVehiclePhysics *ObjectForPmove; 
  BGVehicles *m_vehicleSystem; 
  __int64 v6; 

  Com_Printf(16, "[FlightDynamics::StopPlayerControlling() - FD type %d object becomes not player controlled.\n", (unsigned int)this->m_DynamicsModel);
  m_netcodeType = this->m_netcodeType;
  if ( m_netcodeType == VEH_NETCODE_CLIENT_PRED || m_netcodeType == VEH_NETCODE_CLIENT_PRED_SB )
  {
    v3 = this->m_vehicleSystem->PhysicsGetVehiclePhysicsManager(this->m_vehicleSystem);
    ObjectForPmove = BgVehiclePhysicsManager::GetObjectForPmove(v3, this);
    memset_0(ObjectForPmove, 0, 0xD20ui64);
    this->m_minTimeDynamic = FD_ABANDONED_TO_KEYFRAMED_TIME_SEC;
  }
  if ( !this->m_pmoveObject )
  {
    if ( this == (FlightDynamics *)-152i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    this->m_deferActionMgr.actionBits[0] |= 2u;
  }
  m_vehicleSystem = this->m_vehicleSystem;
  this->m_controls.timeToAcceptInput = 0.0;
  this->m_driverEntNum = 2047;
  v6 = (__int64)m_vehicleSystem->PhysicsGetEventSystem(m_vehicleSystem);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8i64))(v6);
}

/*
==============
FlightDynamics::SupportsFeature
==============
*/
bool FlightDynamics::SupportsFeature(FlightDynamics *this, BgVehiclePhysicsFeature feat)
{
  __int32 v2; 
  __int32 v3; 
  __int32 v4; 
  const dvar_t *v6; 

  v2 = feat - 10;
  if ( !v2 )
    return 1;
  v3 = v2 - 1;
  if ( !v3 )
    return 1;
  v4 = v3 - 4;
  if ( v4 )
  {
    return v4 == 12;
  }
  else
  {
    v6 = DVARINT_fd_helicopter_fbw_status;
    if ( !DVARINT_fd_helicopter_fbw_status && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_fbw_status") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    return v6->current.integer == 0;
  }
}

/*
==============
FlightDynamics::TerrainFollowingRadar
==============
*/
float FlightDynamics::TerrainFollowingRadar(FlightDynamics *this, bool useEnemyToVector, float range)
{
  return FLOAT_1_0;
}

/*
==============
TerrainFollowingRadarControl::RadarBeamInfo::UpdateBeam
==============
*/

void __fastcall TerrainFollowingRadarControl::RadarBeamInfo::UpdateBeam(TerrainFollowingRadarControl::RadarBeamInfo *this, double dT, float decay, float dopplerMultiplier, float dopplerDecay)
{
  float currentObstacleRangeNormalized; 
  __int128 v6; 
  float v7; 
  float v8; 
  float v9; 
  __int128 v10; 
  float v11; 

  currentObstacleRangeNormalized = this->currentObstacleRangeNormalized;
  v6 = *(_OWORD *)&dT;
  *(float *)&v6 = (float)(*(float *)&dT * this->beamRawDistance) + currentObstacleRangeNormalized;
  this->previousObstacleRangeNormalized = currentObstacleRangeNormalized;
  v7 = (float)((float)((float)(*(float *)&v6 - currentObstacleRangeNormalized) * *(float *)&dT) * dopplerMultiplier) + this->dopplerSpeedNormalized;
  v8 = (float)(*(float *)&v6 * decay) * *(float *)&dT;
  v9 = 0.0;
  if ( COERCE_FLOAT(LODWORD(v8) & _xmm) <= COERCE_FLOAT(v6 & _xmm) )
  {
    *(float *)&v6 = *(float *)&v6 - v8;
    v10 = v6;
  }
  else
  {
    v10 = 0i64;
  }
  v11 = (float)(v7 * dopplerDecay) * *(float *)&dT;
  this->currentObstacleRangeNormalized = *(float *)&v10;
  if ( COERCE_FLOAT(LODWORD(v11) & _xmm) <= COERCE_FLOAT(LODWORD(v7) & _xmm) )
    v9 = v7 - v11;
  this->dopplerSpeedNormalized = v9;
  _XMM2 = LODWORD(TFR_MAX_BEAM_NORMALIZED_DISTANCE);
  __asm { vcmpltss xmm1, xmm2, xmm3 }
  _XMM0 = v10;
  __asm { vblendvps xmm1, xmm0, xmm2, xmm1 }
  this->currentObstacleRangeNormalized = *(float *)&_XMM1;
}

/*
==============
FlightDynamics::UpdateCollider
==============
*/
void FlightDynamics::UpdateCollider(FlightDynamics *this, unsigned int colliderBodyId, const vec3_t *hitPos)
{
  float v3; 

  this->m_lastColliderBodyId = colliderBodyId;
  *(_QWORD *)&this->m_timeSinceLastCollisionBody = 0i64;
  v3 = hitPos->v[0] - this->m_transform.m[3].v[0];
  this->m_lastCollisionBodyPosLs.v[0] = v3;
  this->m_lastCollisionBodyPosLs.v[1] = hitPos->v[1] - this->m_transform.m[3].v[1];
  this->m_lastCollisionBodyPosLs.v[2] = hitPos->v[2] - this->m_transform.m[3].v[2];
  this->m_lastCollisionPosLs.v[0] = v3;
  *(_QWORD *)&this->m_lastCollisionPosLs.y = *(_QWORD *)&this->m_lastCollisionBodyPosLs.y;
}

/*
==============
FlightDynamics::UpdateFlightDynamics
==============
*/
void FlightDynamics::UpdateFlightDynamics(FlightDynamics *this, float dT, bool allowUserControl)
{
  __int64 v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  int fmt; 

  if ( dT <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 3553, ASSERT_TYPE_ASSERT, "(dT > 0.0f)", (const char *)&queryFormat, "dT > 0.0f", -2i64) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "FlightDynamics::UpdateFlightDynamics");
  if ( this->m_Status == FD_DISABLED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 3558, ASSERT_TYPE_ASSERT, "(GetStatus() != FD_DISABLED)", (const char *)&queryFormat, "GetStatus() != FD_DISABLED") )
    __debugbreak();
  this->m_Status = FD_ENABLED;
  FlightDynamics::NormalizePlayerInputs(this);
  QuatTransform(&this->m_RotationQuaternion, &sFlightDynamicsManager.m_ElevatorAxis, &this->m_sideVector);
  QuatTransform(&this->m_RotationQuaternion, &sFlightDynamicsManager.m_ForwardAxis, &this->m_forwardVector);
  QuatTransform(&this->m_RotationQuaternion, &sFlightDynamicsManager.m_UpAxis, &this->m_upVector);
  this->m_PreviousVelocity.v[0] = this->m_Velocity.v[0];
  this->m_PreviousVelocity.v[1] = this->m_Velocity.v[1];
  this->m_PreviousVelocity.v[2] = this->m_Velocity.v[2];
  this->m_PreviousRotationVelocity.v[0] = this->m_RotationVelocity.v[0];
  this->m_PreviousRotationVelocity.v[1] = this->m_RotationVelocity.v[1];
  this->m_PreviousRotationVelocity.v[2] = this->m_RotationVelocity.v[2];
  this->m_PreviousRotationVelocity.v[3] = this->m_RotationVelocity.v[3];
  *(_QWORD *)this->m_RotationVelocity.v = 0i64;
  *(_QWORD *)&this->m_RotationVelocity.xyz.z = 0i64;
  this->m_RotationVelocity.v[3] = 1.0;
  ((void (__fastcall *)(FlightDynamics *))this->ApplyGravity)(this);
  this->PerformCoordinatedFlight(this);
  ((void (__fastcall *)(FlightDynamics *))this->ComputeLiftForces)(this);
  LOBYTE(fmt) = 0;
  ((void (__fastcall *)(FlightDynamics *, __int64, _QWORD, __int64, int))this->CalculateFlyByWireVector)(this, v5, 0i64, 1i64, fmt);
  ((void (__fastcall *)(FlightDynamics *))this->PerformAutomaticControl)(this);
  ((void (__fastcall *)(FlightDynamics *))this->PerformControlSurfaces)(this);
  ((void (__fastcall *)(FlightDynamics *))this->PerformThrusterControl)(this);
  v6 = dT * this->m_Velocity.v[1];
  v7 = dT * this->m_Velocity.v[2];
  this->m_Position.v[0] = (float)(dT * this->m_Velocity.v[0]) + this->m_Position.v[0];
  this->m_Position.v[1] = v6 + this->m_Position.v[1];
  this->m_Position.v[2] = v7 + this->m_Position.v[2];
  ((void (__fastcall *)(FlightDynamics *))this->SimulateTurbineOperation)(this);
  ((void (__fastcall *)(FlightDynamics *))this->PerformFlyByWire)(this);
  v8 = this->m_PreviousVelocity.v[0] - this->m_Velocity.v[0];
  this->m_GforceVector.v[0] = v8;
  v9 = this->m_PreviousVelocity.v[1] - this->m_Velocity.v[1];
  this->m_GforceVector.v[1] = v9;
  v10 = this->m_PreviousVelocity.v[2] - this->m_Velocity.v[2];
  this->m_GforceVector.v[2] = v10;
  this->m_GforceMagnitude = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10)) * (float)(1.0 / dT);
  Sys_ProfEndNamedEvent();
}

/*
==============
FlightDynamicsFlightDynamicsParameters::UpdateForBoatConditions
==============
*/
void FlightDynamicsFlightDynamicsParameters::UpdateForBoatConditions(FlightDynamicsFlightDynamicsParameters *this)
{
  this->m_Parameter[58] = 10.0;
  *(_QWORD *)&this->m_Parameter[56] = 0i64;
  this->m_Parameter[98] = 0.0;
  this->m_Parameter[85] = 0.0;
  *(_QWORD *)&this->m_Parameter[38] = 0i64;
  this->m_Parameter[40] = 0.0;
  this->m_Parameter[43] = 0.0;
  this->m_Parameter[88] = -1.0;
  this->m_Parameter[52] = 2.0;
  this->m_Parameter[53] = 2.0;
  this->m_Parameter[54] = 8.0;
  this->m_Parameter[73] = 1.5;
  this->m_Parameter[74] = 1.0;
  *(_QWORD *)&this->m_Parameter[61] = 1125515264i64;
  this->m_Parameter[76] = 250.0;
  this->m_Parameter[97] = -50.0;
  this->m_Parameter[99] = 1000.0;
  this->m_Parameter[100] = 1000.0;
  this->m_Parameter[81] = -9.8000002;
  this->m_Parameter[79] = 0.89999998;
  this->m_Parameter[80] = 0.15000001;
  this->m_Parameter[87] = 1.0;
  this->m_Parameter[86] = 2.0;
  *(_QWORD *)&this->m_Parameter[41] = 1065353216i64;
  this->m_Parameter[44] = 1.0;
  this->m_Parameter[45] = 0.2;
  this->m_Parameter[46] = 3.0;
}

/*
==============
FlightDynamicsFlightDynamicsParameters::UpdateForRotaryWingConditions
==============
*/
void FlightDynamicsFlightDynamicsParameters::UpdateForRotaryWingConditions(FlightDynamicsFlightDynamicsParameters *this)
{
  this->m_Parameter[79] = 0.001;
  *(_QWORD *)&this->m_Parameter[38] = 0i64;
  this->m_Parameter[40] = 0.0;
  this->m_Parameter[43] = 0.0;
  this->m_Parameter[80] = 0.001;
  *(_QWORD *)&this->m_Parameter[41] = 1065353216i64;
  this->m_Parameter[44] = 1.0;
  this->m_Parameter[45] = 0.2;
  this->m_Parameter[46] = 3.0;
}

/*
==============
FlightDynamics::UpdateFromVectors
==============
*/
void FlightDynamics::UpdateFromVectors(FlightDynamics *this, vec3_t *position, vec4_t *quaternion, vec3_t *velocity, vec3_t *fbwVector)
{
  this->m_Position = *position;
  this->m_PreviousRotationQuaternion = this->m_RotationQuaternion;
  this->m_RotationQuaternion = *quaternion;
  this->m_Velocity = *velocity;
  if ( fbwVector )
    this->m_FlyByWireInputVector = *fbwVector;
}

/*
==============
FlightDynamics::UpdatePlayerInputControls
==============
*/
void FlightDynamics::UpdatePlayerInputControls(FlightDynamics *this, const usercmd_s *cmd, const playerState_s *ps)
{
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 1085, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  ((void (__fastcall *)(FlightDynamics *, const usercmd_s *, const playerState_s *))this->SelectStickMode)(this, cmd, ps);
  this->LoadControlInputs(this, cmd, this->m_ControlInputsRaw);
}

/*
==============
FlightDynamics::UpdatePosition
==============
*/
void FlightDynamics::UpdatePosition(FlightDynamics *this, float dT)
{
  this->m_Position.v[0] = (float)(dT * this->m_Velocity.v[0]) + this->m_Position.v[0];
  this->m_Position.v[1] = (float)(dT * this->m_Velocity.v[1]) + this->m_Position.v[1];
  this->m_Position.v[2] = (float)(dT * this->m_Velocity.v[2]) + this->m_Position.v[2];
}

/*
==============
FlightDynamicsGyroscope::UpdateTailrotor
==============
*/
void FlightDynamicsGyroscope::UpdateTailrotor(FlightDynamicsGyroscope *this, const tmat43_t<vec3_t> *matrix, const vec3_t *linearVelocity, const vec3_t *angularVelocity, float dT, float *rudderOutput)
{
  double v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  float v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v21; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  bool v31; 
  float m_GyroRudderStrength; 
  double v33; 
  float v34; 
  float v35; 
  float v36; 
  __int128 v37; 
  float v38; 
  float v39; 
  int v43; 
  float v44; 
  float v45; 
  float v46; 
  __int128 v47; 
  float v48; 
  __int128 v52; 
  __int128 v56; 
  float v57; 
  float v58; 
  float v62; 
  float v63; 
  vec3_t row2; 
  float v65; 
  float v66; 
  float v67; 
  vec3_t v0; 
  vec3_t cross; 
  vec3_t v1; 
  vec3_t v71; 
  vec3_t v72; 

  v10 = I_fclamp(dT, 0.0041666669, 0.016666668);
  this->m_fbwOutputs.v[0] = this->m_ControlInputs[8];
  *(_QWORD *)&this->m_fbwOutputs.y = LODWORD(this->m_ControlInputs[9]);
  v12 = matrix->m[0].v[1];
  v13 = matrix->m[0].v[2];
  v14 = matrix->m[1].v[2];
  v15 = matrix->m[1].v[0];
  v16 = LODWORD(matrix->m[1].v[1]);
  v17 = *(float *)&v10;
  v62 = this->m_ControlInputs[2];
  row2 = matrix->row2;
  v0.v[0] = matrix->m[0].v[0];
  v11 = v0.v[0];
  v0.v[1] = v12;
  v0.v[2] = v13;
  Vec3Cross(&v0, angularVelocity, &cross);
  v18 = v16;
  v19 = (float)((float)((float)(*(float *)&v16 * cross.v[1]) + (float)(v15 * cross.v[0])) + (float)(v14 * cross.v[2])) * FD_GYRO_ANGULAR_VELOCITY_SCALE;
  v65 = v19;
  v20 = (float)((float)(v19 * FD_GYRO_ANGULAR_VELOCITY_MULTIPLIER) * v15) + v11;
  v21 = (float)((float)(v19 * FD_GYRO_ANGULAR_VELOCITY_MULTIPLIER) * *(float *)&v16) + v12;
  *(float *)&v18 = fsqrt((float)(v21 * v21) + (float)(v20 * v20));
  _XMM3 = v18;
  __asm
  {
    vcmpless xmm0, xmm3, xmm1
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  v25 = 1.0 / *(float *)&_XMM0;
  LODWORD(v26) = LODWORD(this->m_ControlInputs[0]) ^ _xmm;
  v27 = v21 * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&_XMM0 = (float)(1.0 - COERCE_FLOAT(LODWORD(v26) & _xmm)) * this->m_ControlInputs[4];
  this->m_GyroVelocityDelta = *linearVelocity;
  v63 = *(float *)&_XMM0;
  v28 = v20 * v25;
  v67 = v27;
  v29 = (float)((float)(this->m_GyroRudderForwardVector.v[1] * linearVelocity->v[1]) + (float)(linearVelocity->v[0] * this->m_GyroRudderForwardVector.v[0])) + (float)(this->m_GyroRudderForwardVector.v[2] * linearVelocity->v[2]);
  *(double *)&_XMM0 = I_fclamp(v29 / FD_SPEED_LIMITER, 0.0, 1.0);
  v66 = *(float *)&_XMM0;
  if ( v29 >= -0.001 )
    v30 = (float)((float)(1.0 - (float)(v17 * FD_GYRO_REVERSE_ACTUATOR_REACTION_TIME)) * this->m_GyroRudderReverseActuator) + (float)(v17 * FD_GYRO_REVERSE_ACTUATOR_REACTION_TIME);
  else
    v30 = (float)((float)(1.0 - (float)(v17 * FD_GYRO_REVERSE_ACTUATOR_REACTION_TIME)) * this->m_GyroRudderReverseActuator) - (float)(v17 * FD_GYRO_REVERSE_ACTUATOR_REACTION_TIME);
  v31 = !this->m_GyroRudderForwardVectorSet;
  this->m_GyroRudderReverseActuator = v30;
  if ( v31 )
  {
    this->m_GyroRudderForwardVectorSet = 1;
    this->m_GyroRudderForwardVector.v[0] = v28;
    this->m_GyroRudderForwardVector.v[1] = v27;
    this->m_GyroRudderForwardVector.v[2] = 0.0;
  }
  if ( COERCE_FLOAT(LODWORD(v26) & _xmm) <= 0.001 || (m_GyroRudderStrength = this->m_GyroRudderStrength, COERCE_FLOAT(COERCE_UNSIGNED_INT(m_GyroRudderStrength - v26) & _xmm) >= 1.0) )
    *(float *)&v33 = (float)(1.0 - (float)(v17 * FD_GYRO_RUDDER_HEADHOLD_TO_RATE_DECAY)) * this->m_GyroRudderStrength;
  else
    v33 = I_fclamp((float)((float)(1.0 - (float)(v17 * FD_GYRO_RUDDER_HEADHOLD_TO_RATE_SMOOTHING)) * m_GyroRudderStrength) + (float)((float)(v17 * FD_GYRO_RUDDER_HEADHOLD_TO_RATE_SMOOTHING) * v26), -0.5, 0.5);
  this->m_GyroRudderStrength = *(float *)&v33;
  v34 = (float)((float)(1.0 - (float)(v17 * FD_GYRO_AILERON_TO_STRAFE_REACTION_TIME)) * this->m_GyroAileronRate) + (float)((float)(v17 * FD_GYRO_AILERON_TO_STRAFE_REACTION_TIME) * v63);
  this->m_GyroAileronRate = v34;
  v35 = v34 * FD_GYRO_PROPOSED_FBW_CHANGE_MULTIPLIER;
  v36 = (float)(v15 * (float)(v34 * FD_GYRO_PROPOSED_FBW_CHANGE_MULTIPLIER)) + v28;
  v37 = v16;
  v38 = (float)(*(float *)&v16 * v35) + v27;
  v39 = v35 * v14;
  *(float *)&v37 = fsqrt((float)((float)(v38 * v38) + (float)(v36 * v36)) + (float)(v39 * v39));
  _XMM4 = v37;
  __asm
  {
    vcmpless xmm0, xmm4, xmm12
    vblendvps xmm0, xmm4, xmm8, xmm0
  }
  v1.v[0] = v36 * (float)(1.0 / *(float *)&_XMM0);
  v1.v[2] = v39 * (float)(1.0 / *(float *)&_XMM0);
  v1.v[1] = v38 * (float)(1.0 / *(float *)&_XMM0);
  Vec3Cross(&this->m_GyroRudderForwardVector, &v1, &v71);
  *(double *)&_XMM0 = FD_ComputeExpo((float)((float)((float)(v71.v[0] * row2.v[0]) + (float)(v71.v[1] * row2.v[1])) + (float)(v71.v[2] * row2.v[2])) * FD_GYRO_TAIL_LOCK_STRENGTH, FD_GYRO_TAIL_LOCK_STRENGTH_EXPO);
  v43 = _XMM0;
  *(double *)&_XMM0 = I_fclamp((float)((float)(1.0 - COERCE_FLOAT(LODWORD(this->m_GyroRudderStrength) & _xmm)) * *(float *)&_XMM0) - (float)(COERCE_FLOAT(LODWORD(this->m_GyroRudderStrength) & _xmm) * (float)((float)((float)((float)((float)(v26 * FD_GYRO_TAIL_MAX_TURN_RATE) * this->m_GyroRudderReverseActuator) - (float)((float)(FD_GYRO_ANGULAR_VELOCITY_MULTIPLIER * v65) * this->m_GyroRudderReverseActuator)) * FD_GYRO_TAIL_MAX_TURN_RATE_STRENGTH) * v17)), -1.0, 1.0);
  *(double *)&_XMM0 = I_fclamp((float)((float)(*(float *)&_XMM0 * this->m_GyroRudderReverseActuator) * (float)(v17 * FD_GYRO_ACTUATOR_RESPONSE_REACTION_TIME)) + (float)((float)(1.0 - (float)(v17 * FD_GYRO_ACTUATOR_RESPONSE_REACTION_TIME)) * this->m_GyroRudderOutput), -1.0, 1.0);
  this->m_GyroRudderOutput = *(float *)&_XMM0;
  *rudderOutput = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_fclamp(2.0 - v62, 0.0, 1.0);
  v44 = *(float *)&_XMM0 * COERCE_FLOAT(v43 & _xmm);
  *(double *)&_XMM0 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(v29 * v62) ^ _xmm), 0.0, 1.0);
  I_fclamp((float)((float)((float)((float)(1.0 - (float)((float)(1.0 - *(float *)&_XMM0) * v44)) * FD_GYRO_ACCELERATOR_MIX_ZERO_FBW_DELTA) + (float)((float)((float)(1.0 - *(float *)&_XMM0) * v44) * FD_GYRO_ACCELERATOR_MIX_FULL_FBW_DELTA)) * v17) * v62, -1.0, 1.0);
  v45 = v26 * FD_GYRO_RUDDER_RATE;
  *rudderOutput = (float)((float)(1.0 - v66) * v26) + (float)(v66 * this->m_GyroRudderOutput);
  *(double *)&_XMM0 = I_fclamp((float)(COERCE_FLOAT(LODWORD(v45) & _xmm) * FD_HFD_FBW_GYRO_RUDDER_RATE_MANUAL_VECTOR) * v17, 0.0, 1.0);
  *(float *)&v37 = (float)((float)(v28 - this->m_GyroRudderForwardVector.v[0]) * *(float *)&_XMM0) + this->m_GyroRudderForwardVector.v[0];
  this->m_GyroRudderForwardVector.v[0] = *(float *)&v37;
  this->m_GyroRudderForwardVector.v[1] = (float)((float)(v67 - this->m_GyroRudderForwardVector.v[1]) * *(float *)&_XMM0) + this->m_GyroRudderForwardVector.v[1];
  *(float *)&v37 = *(float *)&v37 - v0.v[0];
  this->m_GyroRudderForwardVector.v[2] = (float)(1.0 - (float)(*(float *)&_XMM0 * 1.0)) * this->m_GyroRudderForwardVector.v[2];
  v46 = (float)(*(float *)&v37 * v66) + v0.v[0];
  this->m_GyroRudderForwardVector.v[0] = v46;
  v47 = LODWORD(this->m_GyroRudderForwardVector.v[1]);
  *(float *)&v47 = (float)((float)(this->m_GyroRudderForwardVector.v[1] - v0.v[1]) * v66) + v0.v[1];
  this->m_GyroRudderForwardVector.v[1] = *(float *)&v47;
  v48 = (float)((float)(this->m_GyroRudderForwardVector.v[2] - v0.v[2]) * v66) + v0.v[2];
  this->m_GyroRudderForwardVector.v[2] = v48;
  *(float *)&v47 = fsqrt((float)((float)(*(float *)&v47 * *(float *)&v47) + (float)(v46 * v46)) + (float)(v48 * v48));
  _XMM3 = v47;
  __asm
  {
    vcmpless xmm0, xmm3, xmm12
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  this->m_GyroRudderForwardVector.v[0] = v46 * (float)(1.0 / *(float *)&_XMM0);
  this->m_GyroRudderForwardVector.v[1] = (float)(1.0 / *(float *)&_XMM0) * this->m_GyroRudderForwardVector.v[1];
  this->m_GyroRudderForwardVector.v[2] = (float)(1.0 / *(float *)&_XMM0) * this->m_GyroRudderForwardVector.v[2];
  Vec3Cross(&sFlightDynamicsManager.m_UpAxis, &this->m_GyroRudderForwardVector, &v72);
  v52 = LODWORD(v72.v[0]);
  *(float *)&v52 = fsqrt((float)((float)(*(float *)&v52 * *(float *)&v52) + (float)(v72.v[1] * v72.v[1])) + (float)(v72.v[2] * v72.v[2]));
  _XMM3 = v52;
  __asm
  {
    vcmpless xmm0, xmm3, xmm12
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  *(float *)&_XMM3 = v72.v[1] * (float)(1.0 / *(float *)&_XMM0);
  v56 = LODWORD(v72.v[0]);
  *(float *)&v56 = (float)((float)(v72.v[0] * (float)(1.0 / *(float *)&_XMM0)) * (float)(v45 * v17)) + this->m_GyroRudderForwardVector.v[0];
  this->m_GyroRudderForwardVector.v[0] = *(float *)&v56;
  v57 = *(float *)&v56;
  v58 = (float)(*(float *)&_XMM3 * (float)(v45 * v17)) + this->m_GyroRudderForwardVector.v[1];
  this->m_GyroRudderForwardVector.v[1] = v58;
  this->m_GyroRudderForwardVector.v[2] = 0.0;
  *(float *)&v56 = fsqrt((float)((float)(*(float *)&v56 * *(float *)&v56) + (float)(v58 * v58)) + (float)(this->m_GyroRudderForwardVector.v[2] * this->m_GyroRudderForwardVector.v[2]));
  _XMM4 = v56;
  __asm
  {
    vcmpless xmm0, xmm4, xmm12
    vblendvps xmm0, xmm4, xmm8, xmm0
  }
  this->m_GyroRudderForwardVector.v[0] = (float)(1.0 / *(float *)&_XMM0) * v57;
  this->m_GyroRudderForwardVector.v[1] = (float)(1.0 / *(float *)&_XMM0) * this->m_GyroRudderForwardVector.v[1];
  this->m_GyroRudderForwardVector.v[2] = (float)(1.0 / *(float *)&_XMM0) * this->m_GyroRudderForwardVector.v[2];
}

