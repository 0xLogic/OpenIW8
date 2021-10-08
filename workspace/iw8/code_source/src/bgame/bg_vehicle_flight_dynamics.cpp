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
  _RBX = this;
  TerrainFollowingRadarControl::LoadTFRParameters(this);
  TerrainFollowingRadarControl::ComputeDirectionVectorsForRays(_RBX);
  __asm
  {
    vmovss  xmm0, cs:?TFR_LOW_SPEED_VALUE@@3MA; float TFR_LOW_SPEED_VALUE
    vmovss  dword ptr [rbx+50Ch], xmm0
    vmovss  xmm1, cs:?TFR_HIGH_SPEED_VALUE@@3MA; float TFR_HIGH_SPEED_VALUE
    vmovss  dword ptr [rbx+510h], xmm1
  }
}

/*
==============
FlightDynamics::ApplyForceAtNonLocal
==============
*/

void __fastcall FlightDynamics::ApplyForceAtNonLocal(FlightDynamics *this, vec3_t *forceVector, vec3_t *pointofApplication, double dT, float distanceMultiplier)
{
  FlightDynamics *v16; 
  vec3_t cross; 
  vec3_t v1; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmulss  xmm0, xmm3, dword ptr [rdx]
    vaddss  xmm1, xmm0, dword ptr [rcx+2E4h]
    vmulss  xmm0, xmm3, dword ptr [rdx+4]
    vmovss  xmm2, dword ptr [r8+4]
    vmovss  dword ptr [rcx+2E4h], xmm1
    vaddss  xmm1, xmm0, dword ptr [rcx+2E8h]
    vmulss  xmm0, xmm3, dword ptr [rdx+8]
    vmovss  dword ptr [rcx+2E8h], xmm1
    vaddss  xmm1, xmm0, dword ptr [rcx+2ECh]
    vmovss  xmm0, dword ptr [r8]
    vmovss  dword ptr [rcx+2ECh], xmm1
    vsubss  xmm1, xmm0, dword ptr [rcx+2D8h]
    vsubss  xmm0, xmm2, dword ptr [rcx+2DCh]
  }
  v16 = this;
  __asm
  {
    vmovss  dword ptr [rsp+68h+v1], xmm1
    vmovss  xmm1, dword ptr [r8+8]
    vsubss  xmm2, xmm1, dword ptr [rcx+2E0h]
    vmovss  dword ptr [rsp+68h+v1+8], xmm2
    vmovss  dword ptr [rsp+68h+v1+4], xmm0
    vmovaps xmm6, xmm3
  }
  Vec3Cross(forceVector, &v1, &cross);
  __asm
  {
    vmovss  xmm2, [rsp+68h+arg_20]
    vmulss  xmm1, xmm2, dword ptr [rsp+68h+cross+4]
    vmulss  xmm4, xmm2, dword ptr [rsp+68h+cross]
    vmulss  xmm3, xmm2, dword ptr [rsp+68h+cross+8]
    vmovss  dword ptr [rsp+68h+cross+4], xmm1
    vmulss  xmm1, xmm1, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmulss  xmm2, xmm0, xmm6; angle
    vmovss  dword ptr [rsp+68h+cross], xmm4
    vmovss  dword ptr [rsp+68h+cross+8], xmm3
  }
  FlightDynamics::SetRotationNonLocal(v16, &cross, *(float *)&_XMM2);
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
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

void __fastcall FlightDynamics::ApplyRotationDrag(FlightDynamics *this, double coeff)
{
  FlightDynamics *v22; 
  __int64 v41; 
  float angleOut; 
  vec3_t axisOut; 
  vec4_t quat; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm5, dword ptr [rcx+368h]
    vmovss  xmm6, dword ptr [rcx+36Ch]
    vmovss  xmm7, dword ptr [rcx+370h]
    vmovss  xmm8, dword ptr [rcx+374h]
    vxorps  xmm4, xmm4, xmm4
    vmovaps xmm9, xmm1
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vucomiss xmm1, xmm4
    vmovss  dword ptr [rsp+98h+axisOut+8], xmm4
    vmovss  dword ptr [rsp+98h+axisOut+4], xmm4
    vmovss  dword ptr [rsp+98h+axisOut], xmm4
    vmovss  dword ptr [rsp+98h+quat], xmm5
    vmovss  dword ptr [rsp+98h+quat+4], xmm6
    vmovss  dword ptr [rsp+98h+quat+8], xmm7
    vmovss  dword ptr [rsp+98h+quat+0Ch], xmm8
  }
  v22 = this;
  if ( (unsigned __int64)&v41 != _security_cookie )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm2, xmm0, xmm1
      vmulss  xmm1, xmm2, xmm5
      vmulss  xmm0, xmm2, xmm6
      vmovss  dword ptr [rsp+98h+quat], xmm1
      vmovss  dword ptr [rsp+98h+quat+4], xmm0
      vmulss  xmm1, xmm2, xmm7
      vmulss  xmm0, xmm2, xmm8
      vmovss  dword ptr [rsp+98h+quat+8], xmm1
      vmovss  dword ptr [rsp+98h+quat+0Ch], xmm0
    }
  }
  FD_QuatToAngleAxis(&quat, &angleOut, &axisOut);
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+98h+axisOut+4]
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rsp+98h+axisOut]
    vxorps  xmm1, xmm0, xmm3
    vxorps  xmm0, xmm2, xmm3
    vmovss  dword ptr [rsp+98h+axisOut], xmm1
    vmovss  xmm1, dword ptr [rsp+98h+axisOut+8]
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+98h+axisOut+8], xmm2
    vmulss  xmm2, xmm9, [rsp+98h+angleOut]; angle
    vmovss  dword ptr [rsp+98h+axisOut+4], xmm0
  }
  FlightDynamics::SetRotationLocal(v22, &axisOut, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
    vmovaps xmm9, [rsp+98h+var_48]
  }
}

/*
==============
FlightDynamics::ApplyRotationDragAroundAxis
==============
*/

void __fastcall FlightDynamics::ApplyRotationDragAroundAxis(vec4_t *quat, vec3_t *axisDrag, double coeff, double dT, vec4_t *quatOut)
{
  __int64 v59; 
  float outRadians; 
  float s; 
  vec3_t outAxis; 
  vec4_t quata; 
  vec4_t in2; 
  char v65; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovss  xmm4, dword ptr [rcx]
    vmovss  xmm5, dword ptr [rcx+4]
    vmovss  xmm6, dword ptr [rcx+8]
    vmovss  xmm7, dword ptr [rcx+0Ch]
    vmovss  xmm9, cs:__real@3f800000
    vxorps  xmm8, xmm8, xmm8
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vmovaps xmm10, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vmovaps xmm11, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vucomiss xmm1, xmm8
    vmovss  dword ptr [rbp+4Fh+outAxis+8], xmm8
    vmovss  dword ptr [rbp+4Fh+outAxis+4], xmm8
    vmovss  dword ptr [rbp+4Fh+outAxis], xmm8
    vmovss  dword ptr [rbp+4Fh+quat], xmm4
    vmovss  dword ptr [rbp+4Fh+quat+4], xmm5
    vmovss  dword ptr [rbp+4Fh+quat+8], xmm6
    vmovss  dword ptr [rbp+4Fh+quat+0Ch], xmm7
  }
  if ( (unsigned __int64)&v59 != _security_cookie )
  {
    __asm
    {
      vdivss  xmm2, xmm9, xmm1
      vmulss  xmm0, xmm2, xmm4
      vmulss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rbp+4Fh+quat], xmm0
      vmovss  dword ptr [rbp+4Fh+quat+4], xmm1
      vmulss  xmm0, xmm2, xmm6
      vmulss  xmm1, xmm2, xmm7
      vmovss  dword ptr [rbp+4Fh+quat+8], xmm0
      vmovss  dword ptr [rbp+4Fh+quat+0Ch], xmm1
    }
  }
  QuatToAngleRadAxis(&quata, &outRadians, &outAxis);
  __asm
  {
    vmovss  xmm1, [rbp+4Fh+outRadians]
    vmulss  xmm3, xmm1, dword ptr [rbp+4Fh+outAxis]
    vmulss  xmm4, xmm1, dword ptr [rbp+4Fh+outAxis+4]
    vmulss  xmm5, xmm1, dword ptr [rbp+4Fh+outAxis+8]
    vmulss  xmm0, xmm4, dword ptr [rbx+4]
    vmovss  dword ptr [rbp+4Fh+outAxis], xmm3
    vmulss  xmm3, xmm3, dword ptr [rbx]
    vmovss  dword ptr [rbp+4Fh+outAxis+4], xmm4
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm3, xmm5, dword ptr [rbx+8]
    vmulss  xmm0, xmm11, xmm10; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
    vaddss  xmm6, xmm4, xmm3
    vmovss  dword ptr [rbp+4Fh+outAxis+8], xmm5
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm0, xmm1, cs:__real@3f000000; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &in2.v[3]);
  __asm
  {
    vmovss  xmm0, [rbp+4Fh+s]
    vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm2, dword ptr [rbx]
    vmulss  xmm0, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rbp+4Fh+in2], xmm1
    vmulss  xmm1, xmm2, dword ptr [rbx+8]
    vmovss  dword ptr [rbp+4Fh+in2+8], xmm1
    vmovss  dword ptr [rbp+4Fh+in2+4], xmm0
  }
  QuatMultiply(&quata, &in2, quatOut);
  Vec4Normalize(quatOut);
  _R11 = &v65;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
FlightDynamics::ApplyRotationDragToQuat
==============
*/

void __fastcall FlightDynamics::ApplyRotationDragToQuat(vec4_t *quat, const float coeff, double dT, vec4_t *quatOut)
{
  vec4_t to; 
  vec4_t from; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rsp+78h+from], xmm0
    vmovaps xmm6, xmm2
  }
  if ( !quatOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2308, ASSERT_TYPE_ASSERT, "(quatOut)", (const char *)&queryFormat, "quatOut") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
    vmovaps xmm2, xmm6; frac
    vmovups xmmword ptr [rsp+78h+to], xmm0
  }
  QuatSlerp(&from, &to, *(float *)&_XMM2, quatOut);
  Vec4Normalize(quatOut);
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
}

/*
==============
FlightDynamics::ApplyTorqueAtNonLocal
==============
*/

void __fastcall FlightDynamics::ApplyTorqueAtNonLocal(FlightDynamics *this, vec3_t *torqueVector, vec3_t *pointofApplication, double dT, float distanceMultiplier)
{
  vec3_t *v18; 
  vec3_t v1; 
  vec3_t cross; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm2, dword ptr [rdx+4]
    vmovss  xmm4, dword ptr [rdx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmulss  xmm2, xmm0, xmm3; angle
    vmovaps xmm6, xmm3
  }
  _RBX = pointofApplication;
  v18 = torqueVector;
  _RSI = this;
  FlightDynamics::SetRotationNonLocal(this, torqueVector, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm0, dword ptr [rsi+2D8h]
    vmovss  xmm2, dword ptr [rbx+4]
    vsubss  xmm0, xmm2, dword ptr [rsi+2DCh]
    vmovss  dword ptr [rsp+78h+v1], xmm1
    vmovss  xmm1, dword ptr [rbx+8]
    vsubss  xmm2, xmm1, dword ptr [rsi+2E0h]
    vmovss  dword ptr [rsp+78h+v1+8], xmm2
    vmovss  dword ptr [rsp+78h+v1+4], xmm0
  }
  Vec3Cross(v18, &v1, &cross);
  __asm
  {
    vmovss  xmm4, [rsp+78h+arg_20]
    vmulss  xmm1, xmm4, dword ptr [rsp+78h+cross]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rsi+2E4h]
    vmulss  xmm1, xmm4, dword ptr [rsp+78h+cross+4]
    vmulss  xmm2, xmm1, xmm6
    vmulss  xmm1, xmm4, dword ptr [rsp+78h+cross+8]
    vmovss  dword ptr [rsi+2E4h], xmm3
    vaddss  xmm3, xmm2, dword ptr [rsi+2E8h]
    vmulss  xmm2, xmm1, xmm6
    vmovss  dword ptr [rsi+2E8h], xmm3
    vaddss  xmm3, xmm2, dword ptr [rsi+2ECh]
    vmovss  dword ptr [rsi+2ECh], xmm3
    vmovaps xmm6, [rsp+78h+var_28]
  }
}

/*
==============
BG_FD_AdjustSensitivyDividers
==============
*/

void __fastcall BG_FD_AdjustSensitivyDividers(double hSensDiv, double vSensDiv, double lerpSpeed)
{
  __asm
  {
    vmovss  cs:?FBW_USER_INPUT_RUDDER_EXPO@@3MA, xmm0; float FBW_USER_INPUT_RUDDER_EXPO
    vmovss  cs:?FBW_USER_INPUT_ELEVATOR_EXPO@@3MA, xmm1; float FBW_USER_INPUT_ELEVATOR_EXPO
    vmovss  cs:?FBW_ELEVATOR_TO_FBW_MULTIPLIER@@3MA, xmm2; float FBW_ELEVATOR_TO_FBW_MULTIPLIER
  }
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

void __fastcall FlightDynamics::BlendToPmoveObject(FlightDynamics *this, double deltaTime, const BgVehiclePhysics *pmoveObj, vec3_t *inOutLinearVelWs, vec3_t *inOutAngularVelWs)
{
  const dvar_t *v11; 
  float v17; 
  float v18; 
  unsigned int PhysicsBodyId; 
  char v25; 
  bool v26; 
  bool v27; 
  float v68; 
  int v86; 
  int v87; 
  int v88; 
  vec4_t position; 
  vec4_t cur; 
  vec4_t orientation; 
  vec4_t in2; 

  __asm { vmovaps [rsp+130h+var_50], xmm6 }
  v11 = DVARBOOL_fd_pmove_use_alternate_blend;
  _RBX = inOutAngularVelWs;
  _R14 = inOutLinearVelWs;
  _RDI = pmoveObj;
  __asm { vmovaps xmm6, xmm1 }
  if ( !DVARBOOL_fd_pmove_use_alternate_blend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_pmove_use_alternate_blend") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    if ( BgVehiclePhysics::IsPhysicsBodyIdValid(this) )
    {
      this->m_pmoveTargetPosition.v[0] = _RDI->m_manualIntegratedPos.v[0];
      v17 = _RDI->m_manualIntegratedPos.v[1];
      __asm { vmovaps [rsp+130h+var_60], xmm7 }
      this->m_pmoveTargetPosition.v[1] = v17;
      v18 = _RDI->m_manualIntegratedPos.v[2];
      __asm { vmovaps [rsp+130h+var_70], xmm8 }
      this->m_pmoveTargetPosition.v[2] = v18;
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi+1E4h]
        vmovaps [rsp+130h+var_80], xmm9
        vmovaps [rsp+130h+var_90], xmm10
        vmovups xmmword ptr [rbp+4Fh+in2], xmm0
        vmovaps [rsp+130h+var_A0], xmm11
      }
      if ( BgVehiclePhysics::IsPhysicsBodyIdValid(this) )
      {
        PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(this);
        Physics_GetRigidBodyTransform((const Physics_WorldId)this->m_worldId, PhysicsBodyId, (vec3_t *)&position, &orientation);
      }
      _RDI = DCONST_DVARFLT_bg_vehNetLerpSpeed;
      cur.v[2] = position.v[2];
      __asm
      {
        vmovsd  xmm0, qword ptr [rsp+130h+position]
        vmovsd  qword ptr [rsp+130h+cur], xmm0
      }
      if ( !DCONST_DVARFLT_bg_vehNetLerpSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehNetLerpSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+28h]; speed
        vmovaps xmm2, xmm6; frameTime
      }
      BgVehiclePhysics::DampLerp((vec3_t *)&cur, &this->m_pmoveTargetPosition, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm { vcomiss xmm6, cs:__real@3a83126f }
      if ( v25 | v26 )
      {
        v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 677, ASSERT_TYPE_ASSERT, "(deltaTime > 0.001f)", (const char *)&queryFormat, "deltaTime > EQUAL_EPSILON");
        v25 = 0;
        v26 = !v27;
        if ( v27 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovss  xmm1, dword ptr [rsp+130h+cur]
        vmovss  xmm2, dword ptr [rsp+130h+cur+4]
        vdivss  xmm8, xmm0, xmm6
        vsubss  xmm0, xmm1, dword ptr [rsp+130h+position]
        vsubss  xmm1, xmm2, dword ptr [rsp+130h+position+4]
        vmulss  xmm9, xmm0, xmm8
        vmovss  xmm0, dword ptr [rsp+130h+cur+8]
        vsubss  xmm2, xmm0, dword ptr [rsp+130h+position+8]
        vmulss  xmm10, xmm1, xmm8
        vcvtss2sd xmm1, xmm6, xmm6
        vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
        vmulss  xmm11, xmm2, xmm8
      }
      if ( v25 | v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics.inl", 693, ASSERT_TYPE_ASSERT, "(deltaTime > 1.0E-6)", (const char *)&queryFormat, "deltaTime > ZERO_EPSILON") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+4Fh+orientation]
        vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovss  xmm2, dword ptr [rbp+4Fh+orientation+4]
        vxorps  xmm1, xmm0, xmm7
        vxorps  xmm0, xmm2, xmm7
        vmovss  dword ptr [rsp+130h+position], xmm1
        vmovss  xmm1, dword ptr [rbp+4Fh+orientation+8]
        vmovss  dword ptr [rsp+130h+position+4], xmm0
        vmovss  xmm0, dword ptr [rbp+4Fh+orientation+0Ch]
        vxorps  xmm2, xmm1, xmm7
        vmovss  dword ptr [rsp+130h+position+8], xmm2
        vmovss  [rsp+130h+var_DC], xmm0
      }
      QuatMultiply(&position, &in2, &cur);
      __asm
      {
        vmovss  xmm5, [rbp+4Fh+var_CC]
        vmovss  xmm2, dword ptr [rsp+130h+cur]
        vmulss  xmm6, xmm8, cs:__real@3f000000
        vxorps  xmm1, xmm2, xmm7
        vxorps  xmm3, xmm3, xmm3
        vcmpless xmm0, xmm3, xmm5
        vblendvps xmm0, xmm1, xmm2, xmm0
        vmovss  xmm2, dword ptr [rsp+130h+cur+4]
        vmulss  xmm4, xmm0, xmm6
        vxorps  xmm1, xmm2, xmm7
        vcmpless xmm0, xmm3, xmm5
        vblendvps xmm0, xmm1, xmm2, xmm0
        vmovss  xmm2, dword ptr [rsp+130h+cur+8]
        vmulss  xmm8, xmm0, xmm6
        vxorps  xmm1, xmm2, xmm7
        vmovaps xmm7, [rsp+130h+var_60]
        vcmpless xmm0, xmm3, xmm5
        vmovss  [rsp+130h+var_F0], xmm4
        vblendvps xmm0, xmm1, xmm2, xmm0
        vmulss  xmm3, xmm0, xmm6
        vmovss  dword ptr [rsp+130h+position+8], xmm3
        vmovss  dword ptr [rsp+130h+position], xmm4
        vmovss  dword ptr [rsp+130h+position+4], xmm8
      }
      if ( (v86 & 0x7F800000) == 2139095040 )
        goto LABEL_21;
      __asm { vmovss  [rsp+130h+var_F0], xmm8 }
      if ( (v87 & 0x7F800000) == 2139095040 )
        goto LABEL_21;
      __asm { vmovss  [rsp+130h+var_F0], xmm3 }
      if ( (v88 & 0x7F800000) == 2139095040 )
      {
LABEL_21:
        v68 = 0.0;
        *(_QWORD *)inOutAngularVelWs->v = 0i64;
      }
      else
      {
        __asm { vmovsd  xmm0, qword ptr [rsp+130h+position] }
        v68 = position.v[2];
        __asm { vmovsd  qword ptr [rbx], xmm0 }
      }
      inOutAngularVelWs->v[2] = v68;
      __asm
      {
        vmovss  xmm4, cs:?FD_PMOVELWEIGHT@@3MA; float FD_PMOVELWEIGHT
        vmovss  xmm3, cs:?FD_SIMVELWEIGHT@@3MA; float FD_SIMVELWEIGHT
        vmulss  xmm0, xmm3, dword ptr [r14]
        vmulss  xmm1, xmm9, xmm4
        vaddss  xmm1, xmm1, xmm0
        vmulss  xmm0, xmm3, dword ptr [r14+4]
        vmovss  dword ptr [r14], xmm1
        vmulss  xmm2, xmm10, xmm4
        vaddss  xmm1, xmm2, xmm0
        vmovss  dword ptr [r14+4], xmm1
        vmulss  xmm1, xmm3, dword ptr [r14+8]
        vmulss  xmm0, xmm11, xmm4
        vaddss  xmm1, xmm1, xmm0
        vmovss  dword ptr [r14+8], xmm1
      }
      this->ClipVelocities(this, _R14, inOutAngularVelWs);
      __asm
      {
        vmovaps xmm11, [rsp+130h+var_A0]
        vmovaps xmm10, [rsp+130h+var_90]
        vmovaps xmm9, [rsp+130h+var_80]
        vmovaps xmm8, [rsp+130h+var_70]
      }
    }
  }
  else
  {
    __asm { vmovaps xmm1, xmm6; deltaTime }
    BgVehiclePhysics::BlendToPmoveObject(this, *(float *)&_XMM1, _RDI, _R14, inOutAngularVelWs);
  }
  __asm { vmovaps xmm6, [rsp+130h+var_50] }
}

/*
==============
FlightDynamics::CalculateFlyByWireOffset
==============
*/

void __fastcall FlightDynamics::CalculateFlyByWireOffset(FlightDynamics *this, double scale, vec3_t *result)
{
  __asm
  {
    vmulss  xmm0, xmm1, dword ptr [rcx+4C8h]
    vmovss  dword ptr [r8], xmm0
    vmulss  xmm2, xmm1, dword ptr [rcx+4CCh]
    vmovss  dword ptr [r8+4], xmm2
    vmulss  xmm0, xmm1, dword ptr [rcx+4D0h]
    vmovss  dword ptr [r8+8], xmm0
  }
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
  char v17; 
  char v18; 
  unsigned __int8 v21; 
  char v23; 
  bool v24; 
  vec3_t vec; 
  vec3_t outVelLs; 

  _RDI = inOutLinearVelWs;
  _RBX = this;
  if ( !this->SupportsFeature(this, VPFEAT_NO_SPEED_LIMITER) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+178h]
      vmovss  xmm1, dword ptr [rdi]
      vmulss  xmm3, xmm0, dword ptr [rdi+4]
      vmulss  xmm2, xmm1, dword ptr [rbx+174h]
      vmovss  xmm0, dword ptr [rdi+8]
      vmulss  xmm1, xmm0, dword ptr [rbx+17Ch]
      vaddss  xmm4, xmm3, xmm2
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovaps [rsp+0C8h+var_48], xmm7
      vaddss  xmm7, xmm4, xmm1
    }
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(_RBX);
    __asm
    {
      vmovss  dword ptr [rsp+0C8h+vec], xmm0
      vmovaps xmm6, xmm0
    }
    *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedReverse(_RBX);
    __asm
    {
      vmovss  xmm1, cs:__real@3a83126f
      vcomiss xmm6, xmm1
      vmovss  dword ptr [rsp+0C8h+vec+4], xmm0
    }
    if ( v17 | v18 )
      goto LABEL_5;
    __asm { vcomiss xmm7, xmm6 }
    if ( v17 | v18 )
    {
LABEL_5:
      v21 = 0;
      v17 = 0;
      v18 = 1;
    }
    else
    {
      v21 = 1;
    }
    __asm
    {
      vcomiss xmm0, xmm1
      vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    }
    if ( v17 | v18 )
      goto LABEL_9;
    __asm
    {
      vxorps  xmm0, xmm0, xmm6
      vcomiss xmm7, xmm0
    }
    if ( !v17 )
LABEL_9:
      v23 = 0;
    else
      v23 = 1;
    v24 = v21 == 0;
    if ( v21 || (v24 = v23 == 0, v23) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vmovss  xmm2, cs:__real@358637be
        vmulss  xmm1, xmm0, xmm0
        vcomiss xmm1, xmm2
      }
      if ( !v24 )
        goto LABEL_14;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+4]
        vmulss  xmm1, xmm0, xmm0
        vcomiss xmm1, xmm2
      }
      if ( !v24 )
      {
LABEL_14:
        __asm { vmovaps [rsp+0C8h+var_58], xmm8 }
        if ( v21 == v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 757, ASSERT_TYPE_ASSERT, "( clipFwSpeed != clipBwSpeed )", "BgVehiclePhysics::ClipPlaneVelocities: to clip forward and backward speed at same time!") )
          __debugbreak();
        BgVehiclePhysics::ComputeVelocityLocalSpace(_RBX, _RDI, &outVelLs);
        __asm
        {
          vmovss  xmm4, dword ptr [rsp+0C8h+outVelLs]
          vmovss  xmm3, dword ptr [rsp+0C8h+outVelLs+4]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm3, xmm3
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vmovss  xmm1, cs:__real@3f800000
          vcmpless xmm0, xmm2, cs:__real@80000000
          vblendvps xmm0, xmm2, xmm1, xmm0
          vdivss  xmm1, xmm1, xmm0
          vmulss  xmm7, xmm4, xmm1
          vmulss  xmm8, xmm3, xmm1
        }
        if ( 1 - (unsigned int)v21 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", 1 - v21, 2) )
          __debugbreak();
        __asm
        {
          vmulss  xmm0, xmm7, dword ptr [rax]
          vmulss  xmm1, xmm8, dword ptr [rax]
          vmovss  dword ptr [rsp+0C8h+outVelLs], xmm0
          vmovss  dword ptr [rsp+0C8h+outVelLs+4], xmm1
        }
        AxisTransformVec3((const tmat33_t<vec3_t> *)&_RBX->m_transform, &outVelLs, _RDI);
        __asm { vmovaps xmm8, [rsp+0C8h+var_58] }
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+0C8h+var_48]
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rbx+1FCh]
    }
    if ( !v24 )
      goto LABEL_24;
    __asm { vucomiss xmm0, dword ptr [rbx+200h] }
    if ( !v24 )
      goto LABEL_24;
    __asm { vucomiss xmm0, dword ptr [rbx+204h] }
    if ( !v24 )
    {
LABEL_24:
      BgVehiclePhysics::ComputeVelocityLocalSpace(_RBX, inOutAngularVelWs, &vec);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+1FCh]; max
        vmovss  xmm0, dword ptr [rsp+0C8h+vec]; val
        vxorps  xmm1, xmm2, xmm6; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+200h]; max
        vmovss  dword ptr [rsp+0C8h+vec], xmm0
        vmovss  xmm0, dword ptr [rsp+0C8h+vec+4]; val
        vxorps  xmm1, xmm2, xmm6; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+204h]; max
        vmovss  dword ptr [rsp+0C8h+vec+4], xmm0
        vmovss  xmm0, dword ptr [rsp+0C8h+vec+8]; val
        vxorps  xmm1, xmm2, xmm6; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rsp+0C8h+vec+8], xmm0 }
      AxisTransformVec3((const tmat33_t<vec3_t> *)&_RBX->m_transform, &vec, inOutAngularVelWs);
    }
    *(double *)&_XMM0 = BgVehiclePhysics::GetGlobalTopSpeed(_RBX);
    __asm
    {
      vxorps  xmm1, xmm0, xmm6; min
      vmovaps xmm2, xmm0; max
      vmovss  xmm0, dword ptr [rbx+1ACh]; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm6, [rsp+0C8h+var_38]
      vmovss  dword ptr [rbx+1ACh], xmm0
    }
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
  char v2; 
  char v3; 

  __asm
  {
    vandps  xmm2, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, xmm1
    vmovaps xmm4, xmm1
  }
  if ( v2 | v3 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vaddss  xmm2, xmm0, xmm4
      vsubss  xmm1, xmm0, xmm4
      vcmpltss xmm0, xmm4, xmm0
      vblendvps xmm3, xmm2, xmm1, xmm0
      vmovss  xmm1, cs:__real@3f800000
      vsubss  xmm2, xmm1, xmm4
      vdivss  xmm0, xmm3, xmm2
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
FlightDynamics::ComputeDeadzoneRange
==============
*/

float __fastcall FlightDynamics::ComputeDeadzoneRange(double value, double deadzone, double range)
{
  char v3; 
  char v4; 

  __asm
  {
    vandps  xmm3, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm3, xmm1
    vmovaps xmm5, xmm2
    vmovaps xmm4, xmm1
  }
  if ( v3 | v4 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vsubss  xmm1, xmm0, xmm4
      vaddss  xmm2, xmm0, xmm4
      vcmpltss xmm0, xmm4, xmm0
      vblendvps xmm2, xmm2, xmm1, xmm0
      vsubss  xmm1, xmm5, xmm4
      vdivss  xmm0, xmm2, xmm1
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
TerrainFollowingRadarControl::ComputeDirectionVectorsForRays
==============
*/
void TerrainFollowingRadarControl::ComputeDirectionVectorsForRays(TerrainFollowingRadarControl *this)
{
  FlightDynamicsTerrainFollowingRadarModes m_currentOperatingMode; 
  int v12; 
  __int64 v17; 
  __int64 v22; 
  char v207; 
  void *retaddr; 

  _RAX = &retaddr;
  m_currentOperatingMode = this->m_currentOperatingMode;
  _RDI = this;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  v12 = 2 * m_currentOperatingMode;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0C8h+var_88], xmm12
  }
  if ( (unsigned int)v12 >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 3967, ASSERT_TYPE_ASSERT, "(unsigned)( modeIndex ) < (unsigned)( TFR_MODES_TOTAL * TFR_PARAMETER_BLOCKS_MAX )", "modeIndex doesn't index TFR_MODES_TOTAL * TFR_PARAMETER_BLOCKS_MAX\n\t%i not in [0, %i)", v12, 6) )
    __debugbreak();
  __asm
  {
    vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm10, cs:__real@80000000
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm11, cs:__real@3f490fdb
  }
  v17 = 2i64;
  _RSI = v12;
  __asm
  {
    vxorps  xmm12, xmm12, xmm12
    vxorps  xmm6, xmm6, xmm6
  }
  _RBX = (_DWORD *)&_RDI->m_radarBeams[1].beamDirectionVector.v[2];
  v22 = 2i64;
  __asm { vmovss  xmm8, dword ptr [rsi+rdi+30h] }
  do
  {
    __asm
    {
      vmovaps xmm1, xmm6
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm0, xmm0, xmm1
      vmovss  dword ptr [rbx-2Ch], xmm8
    }
    *(double *)&_XMM0 = j___libm_sse2_sincosf_();
    __asm
    {
      vmovss  dword ptr [rbx-28h], xmm0
      vshufps xmm0, xmm0, xmm0, 1
      vxorps  xmm3, xmm0, xmm9
      vmovss  dword ptr [rbx-24h], xmm3
      vmovss  xmm4, dword ptr [rbx-2Ch]
      vmovss  xmm0, dword ptr [rbx-28h]
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rbx-2Ch], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx-28h]
      vmovss  dword ptr [rbx-28h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx-24h]
      vmovss  dword ptr [rbx-24h], xmm0
      vmovss  xmm1, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
      vmovss  dword ptr [rbx-1Ch], xmm1
      vmovss  xmm0, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
      vmovss  dword ptr [rbx-20h], xmm0
    }
    *(_RBX - 5) = 0;
    *(_RBX - 4) = LODWORD(_RDI->m_parameters[_RSI][10]);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    *(_RBX - 3) = LODWORD(_RDI->m_parameters[_RSI][11]);
    __asm
    {
      vaddss  xmm6, xmm6, xmm11
      vmovaps xmm1, xmm6
      vmovss  xmm0, xmm0, xmm1
      vmovss  dword ptr [rbx-8], xmm8
    }
    *(double *)&_XMM0 = j___libm_sse2_sincosf_();
    __asm
    {
      vmovss  dword ptr [rbx-4], xmm0
      vshufps xmm0, xmm0, xmm0, 1
      vxorps  xmm3, xmm0, xmm9
      vmovss  dword ptr [rbx], xmm3
      vmovss  xmm2, dword ptr [rbx-4]
      vmovss  xmm4, dword ptr [rbx-8]
      vmulss  xmm0, xmm2, xmm2
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rbx-8], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx-4]
      vmovss  dword ptr [rbx-4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
      vmovss  dword ptr [rbx+8], xmm1
      vmovss  xmm0, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
      vmovss  dword ptr [rbx+4], xmm0
    }
    _RBX[4] = 0;
    _RBX[5] = LODWORD(_RDI->m_parameters[_RSI][10]);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    _RBX[6] = LODWORD(_RDI->m_parameters[_RSI][11]);
    __asm
    {
      vaddss  xmm6, xmm6, xmm11
      vmovaps xmm1, xmm6
      vmovss  xmm0, xmm0, xmm1
      vmovss  dword ptr [rbx+1Ch], xmm8
    }
    *(double *)&_XMM0 = j___libm_sse2_sincosf_();
    __asm
    {
      vmovss  dword ptr [rbx+20h], xmm0
      vshufps xmm0, xmm0, xmm0, 1
      vxorps  xmm3, xmm0, xmm9
      vmovss  dword ptr [rbx+24h], xmm3
      vmovss  xmm4, dword ptr [rbx+1Ch]
      vmovss  xmm0, dword ptr [rbx+20h]
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rbx+1Ch], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx+20h]
      vmovss  dword ptr [rbx+20h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+24h]
      vmovss  dword ptr [rbx+24h], xmm0
      vmovss  xmm1, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
      vmovss  dword ptr [rbx+2Ch], xmm1
      vmovss  xmm0, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
      vmovss  dword ptr [rbx+28h], xmm0
    }
    _RBX[13] = 0;
    _RBX[14] = LODWORD(_RDI->m_parameters[_RSI][10]);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    _RBX[15] = LODWORD(_RDI->m_parameters[_RSI][11]);
    __asm
    {
      vaddss  xmm6, xmm6, xmm11
      vmovaps xmm1, xmm6
      vmovss  xmm0, xmm0, xmm1
      vmovss  dword ptr [rbx+40h], xmm8
    }
    *(double *)&_XMM0 = j___libm_sse2_sincosf_();
    __asm { vmovss  dword ptr [rbx+44h], xmm0 }
    _RBX += 36;
    __asm
    {
      vshufps xmm0, xmm0, xmm0, 1
      vxorps  xmm3, xmm0, xmm9
      vmovss  dword ptr [rbx-48h], xmm3
      vmovss  xmm0, dword ptr [rbx-4Ch]
      vmovss  xmm4, dword ptr [rbx-50h]
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rbx-50h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx-4Ch]
      vmovss  dword ptr [rbx-4Ch], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx-48h]
      vmovss  dword ptr [rbx-48h], xmm0
      vmovss  xmm1, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
      vmovss  dword ptr [rbx-40h], xmm1
      vmovss  xmm0, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
      vmovss  dword ptr [rbx-44h], xmm0
    }
    *(_RBX - 14) = 0;
    *(_RBX - 13) = LODWORD(_RDI->m_parameters[_RSI][10]);
    *(_RBX - 12) = LODWORD(_RDI->m_parameters[_RSI][11]);
    __asm { vaddss  xmm6, xmm6, xmm11 }
    --v22;
  }
  while ( v22 );
  __asm { vaddss  xmm8, xmm8, dword ptr [rsi+rdi+34h] }
  _RBX = (_DWORD *)&_RDI->m_radarBeams[9].beamDirectionVector.v[2];
  do
  {
    __asm
    {
      vmovaps xmm1, xmm12
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm0, xmm0, xmm1
      vmovss  dword ptr [rbx-2Ch], xmm8
    }
    *(double *)&_XMM0 = j___libm_sse2_sincosf_();
    __asm
    {
      vmovss  dword ptr [rbx-28h], xmm0
      vshufps xmm0, xmm0, xmm0, 1
      vxorps  xmm3, xmm0, xmm9
      vmovss  dword ptr [rbx-24h], xmm3
      vmovss  xmm4, dword ptr [rbx-2Ch]
      vmovss  xmm0, dword ptr [rbx-28h]
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rbx-2Ch], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx-28h]
      vmovss  dword ptr [rbx-28h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx-24h]
      vmovss  dword ptr [rbx-24h], xmm0
      vmovss  xmm1, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
      vmovss  dword ptr [rbx-1Ch], xmm1
      vmovss  xmm0, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
      vmovss  dword ptr [rbx-20h], xmm0
    }
    *(_RBX - 5) = 0;
    *(_RBX - 4) = LODWORD(_RDI->m_parameters[_RSI][12]);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    *(_RBX - 3) = LODWORD(_RDI->m_parameters[_RSI][13]);
    __asm
    {
      vaddss  xmm6, xmm12, xmm11
      vmovaps xmm1, xmm6
      vmovss  xmm0, xmm0, xmm1
      vmovss  dword ptr [rbx-8], xmm8
    }
    *(double *)&_XMM0 = j___libm_sse2_sincosf_();
    __asm
    {
      vmovss  dword ptr [rbx-4], xmm0
      vshufps xmm0, xmm0, xmm0, 1
      vxorps  xmm4, xmm0, xmm9
      vmovss  dword ptr [rbx], xmm4
      vmovss  xmm1, dword ptr [rbx-4]
      vmovss  xmm5, dword ptr [rbx-8]
      vmulss  xmm2, xmm1, xmm1
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, xmm10
      vblendvps xmm0, xmm4, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbx-8], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx-4]
      vmovss  dword ptr [rbx-4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
      vmovss  dword ptr [rbx+8], xmm1
      vmovss  xmm0, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
      vmovss  dword ptr [rbx+4], xmm0
    }
    _RBX[4] = 0;
    _RBX[5] = LODWORD(_RDI->m_parameters[_RSI][12]);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    _RBX[6] = LODWORD(_RDI->m_parameters[_RSI][13]);
    __asm
    {
      vaddss  xmm6, xmm6, xmm11
      vmovaps xmm1, xmm6
      vmovss  xmm0, xmm0, xmm1
      vmovss  dword ptr [rbx+1Ch], xmm8
    }
    *(double *)&_XMM0 = j___libm_sse2_sincosf_();
    __asm
    {
      vmovss  dword ptr [rbx+20h], xmm0
      vshufps xmm0, xmm0, xmm0, 1
      vxorps  xmm3, xmm0, xmm9
      vmovss  dword ptr [rbx+24h], xmm3
      vmovss  xmm4, dword ptr [rbx+1Ch]
      vmovss  xmm0, dword ptr [rbx+20h]
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rbx+1Ch], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx+20h]
      vmovss  dword ptr [rbx+20h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+24h]
      vmovss  dword ptr [rbx+24h], xmm0
      vmovss  xmm1, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
      vmovss  dword ptr [rbx+2Ch], xmm1
      vmovss  xmm0, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
      vmovss  dword ptr [rbx+28h], xmm0
    }
    _RBX[13] = 0;
    _RBX[14] = LODWORD(_RDI->m_parameters[_RSI][12]);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    _RBX[15] = LODWORD(_RDI->m_parameters[_RSI][13]);
    __asm
    {
      vaddss  xmm6, xmm6, xmm11
      vmovaps xmm1, xmm6
      vmovss  xmm0, xmm0, xmm1
      vmovss  dword ptr [rbx+40h], xmm8
    }
    *(double *)&_XMM0 = j___libm_sse2_sincosf_();
    __asm { vmovss  dword ptr [rbx+44h], xmm0 }
    _RBX += 36;
    __asm
    {
      vshufps xmm0, xmm0, xmm0, 1
      vxorps  xmm3, xmm0, xmm9
      vmovss  dword ptr [rbx-48h], xmm3
      vmovss  xmm0, dword ptr [rbx-4Ch]
      vmovss  xmm4, dword ptr [rbx-50h]
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm0, xmm3, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rbx-50h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx-4Ch]
      vmovss  dword ptr [rbx-4Ch], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx-48h]
      vmovss  dword ptr [rbx-48h], xmm0
      vmovss  xmm1, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
      vmovss  dword ptr [rbx-40h], xmm1
      vmovss  xmm0, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
      vmovss  dword ptr [rbx-44h], xmm0
    }
    *(_RBX - 14) = 0;
    *(_RBX - 13) = LODWORD(_RDI->m_parameters[_RSI][12]);
    *(_RBX - 12) = LODWORD(_RDI->m_parameters[_RSI][13]);
    __asm { vaddss  xmm12, xmm6, xmm11 }
    --v17;
  }
  while ( v17 );
  _R11 = &v207;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
FlightDynamics::ComputeGForceMagnitude
==============
*/

float __fastcall FlightDynamics::ComputeGForceMagnitude(FlightDynamics *this, double dT)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+2F0h]
    vsubss  xmm5, xmm0, dword ptr [rcx+2E4h]
    vmovss  dword ptr [rcx+50Ch], xmm5
    vmovss  xmm2, dword ptr [rcx+2F4h]
    vsubss  xmm3, xmm2, dword ptr [rcx+2E8h]
    vmovss  dword ptr [rcx+510h], xmm3
    vmovss  xmm0, dword ptr [rcx+2F8h]
    vsubss  xmm4, xmm0, dword ptr [rcx+2ECh]
    vmovaps [rsp+18h+var_18], xmm6
    vmovaps xmm6, xmm1
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vdivss  xmm1, xmm0, xmm6
    vmovaps xmm6, [rsp+18h+var_18]
    vsqrtss xmm3, xmm2, xmm2
    vmulss  xmm0, xmm3, xmm1
    vmovss  dword ptr [rcx+514h], xmm4
    vmovss  dword ptr [rcx+518h], xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
FlightDynamics::ComputeGForceMagnitudeFromVelocities
==============
*/
float FlightDynamics::ComputeGForceMagnitudeFromVelocities(const vec3_t *initialVelocity, const vec3_t *newVelocity)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm3, xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rcx+4]
    vsubss  xmm2, xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm4, xmm0, dword ptr [rdx+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm0, xmm2, xmm2
  }
  return *(float *)&_XMM0;
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

void __fastcall FD_MouseSensitivityAdjustment(LocalClientNum_t thisClient, const vec2_t coords, vec2_t outputCoords, double dT)
{
  char v28; 
  char v29; 
  vec2_t v91; 
  char v93; 
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
  }
  _RBX = thisClient;
  _RDI = &sFlightDynamicsManager;
  v91 = coords;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+var_78]
    vmovaps xmm8, xmm3
    vsubss  xmm9, xmm0, dword ptr [rdi+rbx*8+0A4h]
    vmovss  xmm0, dword ptr [rsp+98h+var_78+4]
    vsubss  xmm10, xmm0, dword ptr [rdi+rbx*8+0A8h]
    vmulss  xmm1, xmm10, xmm10
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vmulss  xmm0, xmm2, cs:__real@3c010204; value
    vmovss  xmm1, cs:?FD_MOUSE_INPUT_STRENGTH_EXPO@@3MA; expo
  }
  *(double *)&_XMM0 = I_pow(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm11, cs:__real@3f800000
    vmovaps xmm2, xmm11; max
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm6, xmm6, xmm6
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm4, dword ptr [rdi+rbx*8+0B4h]
    vmovaps xmm2, xmm0
    vmulss  xmm2, xmm2, cs:?FD_MOUSE_NO_INPUT_DRAG@@3MA; float FD_MOUSE_NO_INPUT_DRAG
    vsubss  xmm0, xmm11, xmm0
    vmulss  xmm3, xmm0, cs:?FD_MOUSE_FULL_INPUT_DRAG@@3MA; float FD_MOUSE_FULL_INPUT_DRAG
    vaddss  xmm7, xmm3, xmm2
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm0, xmm7, xmm4
    vmulss  xmm5, xmm0, xmm8
    vandps  xmm1, xmm5, xmm3
    vandps  xmm0, xmm4, xmm3
    vcomiss xmm1, xmm0
  }
  if ( v28 | v29 )
    __asm { vsubss  xmm0, xmm4, xmm5 }
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  __asm
  {
    vmovss  dword ptr [rdi+rbx*8+0B4h], xmm0
    vmovss  xmm2, dword ptr [rdi+rbx*8+0B8h]
    vmulss  xmm0, xmm7, xmm2
    vmulss  xmm4, xmm0, xmm8
    vandps  xmm1, xmm4, xmm3
    vandps  xmm0, xmm2, xmm3
    vcomiss xmm1, xmm0
  }
  if ( v28 | v29 )
    __asm { vsubss  xmm6, xmm2, xmm4 }
  __asm
  {
    vmovss  xmm1, cs:?FD_MOUSE_ACCELERATION_DAMPENER_EXPO@@3MA; expo
    vmovss  dword ptr [rdi+rbx*8+0B8h], xmm6
    vmulss  xmm6, xmm9, cs:?FD_MOUSE_VELOCITY_SCALE_H@@3MA; float FD_MOUSE_VELOCITY_SCALE_H
    vmovaps xmm0, xmm9; value
  }
  *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:?FD_MOUSE_ACCELERATION_DAMPENER_MULT@@3MA; float FD_MOUSE_ACCELERATION_DAMPENER_MULT
    vsubss  xmm7, xmm6, xmm1
    vmovss  xmm1, cs:?FD_MOUSE_ACCELERATION_DAMPENER_EXPO@@3MA; expo
    vmulss  xmm6, xmm10, cs:?FD_MOUSE_VELOCITY_SCALE_V@@3MA; float FD_MOUSE_VELOCITY_SCALE_V
    vmovaps xmm0, xmm10; value
  }
  *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:?FD_MOUSE_ACCELERATION_DAMPENER_MULT@@3MA; float FD_MOUSE_ACCELERATION_DAMPENER_MULT
    vmulss  xmm2, xmm7, xmm8
    vaddss  xmm0, xmm2, dword ptr [rdi+rbx*8+0B4h]
    vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rdi+rbx*8+0B4h], xmm0
    vsubss  xmm3, xmm6, xmm1
    vmulss  xmm1, xmm3, xmm8
    vaddss  xmm2, xmm1, dword ptr [rdi+rbx*8+0B8h]
    vmovss  dword ptr [rdi+rbx*8+0B8h], xmm2
    vmovss  xmm2, cs:?FD_MOUSE_MAX_VELOCITY@@3MA; max
    vmovss  xmm0, dword ptr [rdi+rbx*8+0B4h]; val
    vxorps  xmm1, xmm2, xmm7; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:?FD_MOUSE_MAX_VELOCITY@@3MA; max
    vmovss  dword ptr [rdi+rbx*8+0B4h], xmm0
    vmovss  xmm0, dword ptr [rdi+rbx*8+0B8h]; val
    vxorps  xmm1, xmm2, xmm7; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rdi+rbx*8+0B8h], xmm0
    vmulss  xmm1, xmm8, dword ptr [rdi+rbx*8+0B4h]
    vaddss  xmm0, xmm1, dword ptr [rdi+rbx*8+0A4h]
    vmovss  dword ptr [rdi+rbx*8+0A4h], xmm0
    vmulss  xmm0, xmm8, dword ptr [rdi+rbx*8+0B8h]
    vaddss  xmm1, xmm0, dword ptr [rdi+rbx*8+0A8h]
    vmovss  dword ptr [rdi+rbx*8+0A8h], xmm1
    vmovss  xmm1, cs:__real@bf800000; min
    vmovss  xmm0, dword ptr [rdi+rbx*8+0A4h]; val
    vmovaps xmm2, xmm11; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, cs:__real@bf800000; min
    vmovss  dword ptr [rdi+rbx*8+0A4h], xmm0
    vmovss  xmm0, dword ptr [rdi+rbx*8+0A8h]; val
    vmovaps xmm2, xmm11; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:?FD_MAX_MOUSE_THROW@@3MA; max
    vmovss  dword ptr [rdi+rbx*8+0A8h], xmm0
    vmovss  xmm0, dword ptr [rdi+rbx*8+0A4h]; val
    vxorps  xmm1, xmm2, xmm7; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:?FD_MAX_MOUSE_THROW@@3MA; max
    vmovss  dword ptr [rdi+rbx*8+0A4h], xmm0
    vmovss  xmm0, dword ptr [rdi+rbx*8+0A8h]; val
    vxorps  xmm1, xmm2, xmm7; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [rdi+rbx*8+0A8h], xmm0 }
  _R11 = &v93;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
FD_ScaleClamp
==============
*/

float __fastcall FD_ScaleClamp(double valueIn, double thresholdLow, double thresholdHigh)
{
  char v3; 
  char v4; 

  __asm
  {
    vcomiss xmm0, xmm1
    vmovaps xmm3, xmm1
  }
  if ( v3 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm { vcomiss xmm0, xmm2 }
    if ( v3 | v4 )
    {
      __asm
      {
        vsubss  xmm1, xmm0, xmm3
        vsubss  xmm0, xmm2, xmm3
        vdivss  xmm0, xmm1, xmm0
      }
    }
    else
    {
      __asm { vmovss  xmm0, cs:__real@3f800000 }
    }
  }
  return *(float *)&_XMM0;
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

float __fastcall TerrainFollowingRadarControl::RadarBeamInfo::FireBeam(TerrainFollowingRadarControl::RadarBeamInfo *this, vec3_t *position, vec4_t *orientationQuat, double beamRange, float forwardIncrease, vec3_t *rotatedBeam, int clipMask, float beamExpo, vec3_t *rotatedBeamScaled, Physics_WorldId worldId)
{
  vec3_t v52; 
  vec4_t v53; 
  vec3_t in; 
  trace_t v55; 
  char v56; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovss  xmm6, dword ptr [rcx]
  }
  _RDI = rotatedBeamScaled;
  _RSI = position;
  _R14 = this;
  this->beamDirectionVector.v[0] = 0.0;
  __asm { vmovaps xmm7, xmm3 }
  QuatTransform(orientationQuat, &this->beamDirectionVector, rotatedBeam);
  __asm
  {
    vmovss  dword ptr [r14], xmm6
    vmulss  xmm0, xmm7, dword ptr [r14+4]
    vmulss  xmm1, xmm7, dword ptr [r14+8]
    vmovss  dword ptr [rsp+140h+in+4], xmm0
    vmulss  xmm0, xmm6, xmm7
    vaddss  xmm2, xmm0, [rbp+40h+arg_20]
    vmovss  dword ptr [rsp+140h+in], xmm2
    vmovss  dword ptr [rsp+140h+in+8], xmm1
  }
  QuatTransform(orientationQuat, &in, rotatedBeamScaled);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vaddss  xmm3, xmm0, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rsi+4]
    vaddss  xmm2, xmm0, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm1
    vmovsd  xmm0, qword ptr [rdi]
    vmovss  xmm0, xmm0, xmm3
    vinsertps xmm1, xmm0, xmm2, 10h
    vmovsd  xmm0, qword ptr [rsi]
    vmovsd  qword ptr [rdi], xmm1
  }
  v52.v[2] = rotatedBeamScaled->v[2];
  v53.v[2] = _RSI->v[2];
  __asm
  {
    vmovsd  qword ptr [rsp+140h+var_100], xmm1
    vmovsd  qword ptr [rsp+140h+var_F0], xmm0
  }
  FD_Trace(worldId, &v55, (const vec3_t *)&v53, &v52, NULL, clipMask, NULL);
  __asm { vmovss  xmm9, cs:__real@3f800000 }
  if ( FD_GetDrawAvoidanceTracesDvar() )
  {
    if ( FD_GetDrawAvoidanceTracesAsDoppler() )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [r14+18h]
        vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmulss  xmm3, xmm0, cs:TFR_DEBUG_DOPPLER_LINES_INTENSITY
        vxorps  xmm2, xmm2, xmm2
        vcomiss xmm1, xmm2
        vmovss  [rsp+140h+var_E4], xmm3
        vmovss  [rsp+140h+var_F0], xmm2
        vmovss  [rsp+140h+var_EC], xmm2
        vmovss  [rsp+140h+var_E8], xmm3
      }
      FD_DebugLine(_RSI, rotatedBeamScaled, &v53, 0, 0);
    }
    else
    {
      __asm
      {
        vmovss  xmm0, [rsp+140h+var_D0.fraction]
        vcomiss xmm0, xmm9
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm0, dword ptr [r14+4]
      }
      FD_DebugLine(_RSI, rotatedBeamScaled, &colorYellow, 0, 0);
    }
  }
  __asm
  {
    vmovss  xmm1, [rbp+40h+arg_38]; Y
    vmovss  xmm0, [rsp+140h+var_D0.fraction]; X
  }
  powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vsubss  xmm8, xmm9, xmm0
    vmovss  dword ptr [r14+14h], xmm8
    vmovaps xmm0, xmm8
  }
  _R11 = &v56;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return *(float *)&_XMM0;
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
  __asm { vmovss  xmm0, dword ptr [rcx+504h] }
  return *(float *)&_XMM0;
}

/*
==============
TerrainFollowingRadarControl::GetBlockageFactor
==============
*/
float TerrainFollowingRadarControl::GetBlockageFactor(TerrainFollowingRadarControl *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+508h] }
  return *(float *)&_XMM0;
}

/*
==============
TerrainFollowingRadarControl::GetControlSurfaceActuators
==============
*/
void TerrainFollowingRadarControl::GetControlSurfaceActuators(TerrainFollowingRadarControl *this, float *elevatorStrength, float *rudderStrength, float *aileronStrength, float followTargetStrength)
{
  bool v12; 
  bool v13; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = aileronStrength;
  __asm { vmovaps [rsp+58h+var_28], xmm7 }
  _RDI = rudderStrength;
  _RSI = elevatorStrength;
  if ( !elevatorStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4425, ASSERT_TYPE_ASSERT, "(elevatorStrength)", (const char *)&queryFormat, "elevatorStrength") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4426, ASSERT_TYPE_ASSERT, "(rudderStrength)", (const char *)&queryFormat, "rudderStrength") )
    __debugbreak();
  v12 = _RBX == NULL;
  if ( !_RBX )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4427, ASSERT_TYPE_ASSERT, "(aileronStrength)", (const char *)&queryFormat, "aileronStrength");
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, [rsp+58h+followTargetStrength]
    vcomiss xmm6, cs:__real@bf800000
  }
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4429, ASSERT_TYPE_ASSERT, "(followTargetStrength > -1.0f)", (const char *)&queryFormat, "followTargetStrength > -1.0f") )
    __debugbreak();
  *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(this, TFR_CONTROL_TARGETLOCK_STRENGTH);
  __asm
  {
    vmulss  xmm1, xmm0, xmm6
    vaddss  xmm2, xmm1, cs:__real@3f800000
    vmulss  xmm7, xmm2, dword ptr [rbp+504h]
    vmovss  xmm2, cs:?TFR_MAX_CONTROL@@3MA; max
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm7, dword ptr [rbp+4C0h]; val
    vxorps  xmm1, xmm2, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm2, cs:?TFR_MAX_CONTROL@@3MA; max
    vmulss  xmm0, xmm7, dword ptr [rbp+4C4h]; val
    vxorps  xmm1, xmm2, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm2, cs:?TFR_MAX_CONTROL@@3MA; max
    vmulss  xmm0, xmm7, dword ptr [rbp+4CCh]; val
    vxorps  xmm1, xmm2, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovss  dword ptr [rbx], xmm0
  }
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
  vec4_t *p_m_RotationInertiaQuat; 
  vec4_t in1; 
  vec4_t out; 
  vec4_t quat; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovss  xmm2, cs:__real@3c8efa35
    vmulss  xmm0, xmm2, dword ptr [r8]
    vmovss  dword ptr [r8], xmm0
    vmulss  xmm0, xmm2, dword ptr [r8+4]
    vmovss  dword ptr [r8+4], xmm0
    vmulss  xmm0, xmm2, dword ptr [r8+8]
  }
  _RDI = this;
  __asm { vmovss  dword ptr [r8+8], xmm0 }
  AnglesToQuat(angVel, &quat);
  __asm
  {
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rdi+368h]
    vmovss  xmm1, dword ptr [rdi+36Ch]
    vxorps  xmm2, xmm1, xmm3
    vxorps  xmm0, xmm0, xmm3
    vmovss  dword ptr [rsp+88h+in1], xmm0
    vmovss  xmm0, dword ptr [rdi+370h]
    vmovss  dword ptr [rsp+88h+in1+4], xmm2
    vmovss  xmm2, dword ptr [rdi+374h]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rsp+88h+in1+8], xmm1
    vmovss  dword ptr [rsp+88h+in1+0Ch], xmm2
  }
  QuatMultiply(&in1, externalRotation, &out);
  p_m_RotationInertiaQuat = &_RDI->m_RotationInertiaQuat;
  QuatMultiply(&out, p_m_RotationInertiaQuat, &in1);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+88h+in1]
    vmovss  xmm6, cs:?FD_EXTERNAL_ROTATION_FACTOR@@3MA; float FD_EXTERNAL_ROTATION_FACTOR
    vmovdqa xmmword ptr [rsp+88h+in1], xmm0
  }
  if ( !p_m_RotationInertiaQuat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2308, ASSERT_TYPE_ASSERT, "(quatOut)", (const char *)&queryFormat, "quatOut", *(_OWORD *)&in1) )
    __debugbreak();
  __asm
  {
    vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
    vmovaps xmm2, xmm6; frac
    vmovups xmmword ptr [rsp+88h+out], xmm0
  }
  QuatSlerp(&in1, &out, *(float *)&_XMM2, p_m_RotationInertiaQuat);
  Vec4Normalize(p_m_RotationInertiaQuat);
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
}

/*
==============
FlightDynamics::GetFlightDynamicsParameter
==============
*/
void FlightDynamics::GetFlightDynamicsParameter(FlightDynamics *this, vec3_t *position, vec3_t *orientation, vec3_t *velocity, tmat33_t<vec3_t> *matrix, vec4_t *quaternion, vec4_t *angularVelocity, vec3_t *fbwVector, float *cruiseLow, float *cruiseHigh, float *cruiseBoost)
{
  __int64 m_DynamicsModel; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  tmat33_t<vec3_t> axis; 

  _RBX = this;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+368h]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 3473, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_X] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_X] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+36Ch]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 3474, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_Y] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_Y] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+370h]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v31 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 3475, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_Z] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_Z] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+374h]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 3476, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_W] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_W] )") )
    __debugbreak();
  if ( orientation )
  {
    QuatToAxis(&_RBX->m_RotationQuaternion, &axis);
    AxisToAngles(&axis, orientation);
  }
  if ( matrix )
  {
    QuatToAxis(&_RBX->m_RotationQuaternion, matrix);
    AxisToAngles(matrix, orientation);
  }
  if ( quaternion )
    *quaternion = _RBX->m_RotationQuaternion;
  if ( angularVelocity )
    *angularVelocity = _RBX->m_RotationVelocity;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+2E4h]
    vmovss  xmm2, dword ptr [rbx+2E8h]
    vmovss  xmm3, dword ptr [rbx+2ECh]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vcomiss xmm0, cs:FD_EXCESSIVE_PHYSICS_SPEED
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 3506, ASSERT_TYPE_ASSERT, "(velocityMagnitude < FD_EXCESSIVE_PHYSICS_SPEED)", (const char *)&queryFormat, "velocityMagnitude < FD_EXCESSIVE_PHYSICS_SPEED") )
    __debugbreak();
  if ( velocity )
  {
    velocity->v[0] = _RBX->m_Velocity.v[0];
    velocity->v[1] = _RBX->m_Velocity.v[1];
    velocity->v[2] = _RBX->m_Velocity.v[2];
  }
  if ( position )
  {
    position->v[0] = _RBX->m_Position.v[0];
    position->v[1] = _RBX->m_Position.v[1];
    position->v[2] = _RBX->m_Position.v[2];
  }
  if ( fbwVector )
    *fbwVector = _RBX->m_FlyByWireInputVector;
  m_DynamicsModel = _RBX->m_DynamicsModel;
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
  __asm
  {
    vmovss  xmm4, dword ptr [rcx+4]
    vmovss  xmm5, dword ptr [rcx]
    vmulss  xmm1, xmm5, dword ptr cs:sFlightDynamicsManager.m_UpAxis
    vmulss  xmm0, xmm4, dword ptr cs:sFlightDynamicsManager.m_UpAxis+4
    vaddss  xmm2, xmm1, xmm0
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, dword ptr [rcx+8]
    vmulss  xmm1, xmm6, dword ptr cs:sFlightDynamicsManager.m_UpAxis+8
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, cs:__real@bf400000
  }
  Vec3Cross(in, &sFlightDynamicsManager.m_UpAxis, perpVector);
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
TerrainFollowingRadarControl::GetParam
==============
*/
float TerrainFollowingRadarControl::GetParam(TerrainFollowingRadarControl *this, FlightDynamicsTerrainFollowingRadarParamType param)
{
  FlightDynamicsTerrainFollowingRadarModes m_currentOperatingMode; 
  int v22; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+510h]
    vsubss  xmm2, xmm0, dword ptr [rcx+50Ch]
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm2, xmm1
    vmovaps [rsp+58h+var_18], xmm6
  }
  _RBX = this;
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+50Ch]
    vmovss  xmm0, dword ptr [rbx+518h]
    vmovss  xmm1, dword ptr [rbx+510h]
    vsubss  xmm3, xmm0, xmm2
    vsubss  xmm2, xmm1, xmm2
    vdivss  xmm6, xmm3, xmm2
  }
  if ( this->m_currentOperatingMode >= (unsigned int)TFR_MODES_TOTAL )
  {
    v22 = 3;
    m_currentOperatingMode = this->m_currentOperatingMode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4226, ASSERT_TYPE_ASSERT, "(unsigned)( m_currentOperatingMode ) < (unsigned)( TFR_MODES_TOTAL )", "m_currentOperatingMode doesn't index TFR_MODES_TOTAL\n\t%i not in [0, %i)", m_currentOperatingMode, v22) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, dword ptr [rbx+rax*4+10h]
    vmulss  xmm0, xmm6, dword ptr [rbx+rax*4+78h]
    vmovaps xmm6, [rsp+58h+var_18]
    vaddss  xmm0, xmm2, xmm0
  }
  return *(float *)&_XMM0;
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
  bool v13; 
  bool v26; 
  _BYTE v68[32]; 
  vec3_t cross; 
  __int64 v70; 
  char v71; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v70;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
  }
  v13 = (unsigned __int64)v68 == _security_cookie;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm2, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm4, xmm2, xmm1
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm4, xmm9
  }
  _R14 = quat;
  _RDI = vec2;
  _RSI = vec1;
  if ( (unsigned __int64)v68 == _security_cookie )
  {
    v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4030, ASSERT_TYPE_ASSERT, "(Vec3Length( vec1 ) > 0.0f)", (const char *)&queryFormat, "Vec3Length( vec1 ) > 0.0f");
    v13 = !v26;
    if ( v26 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+4]
    vmovss  xmm7, dword ptr [rdi]
    vmovss  xmm8, dword ptr [rdi+8]
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, xmm9
  }
  if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 4031, ASSERT_TYPE_ASSERT, "(Vec3Length( vec2 ) > 0.0f)", (const char *)&queryFormat, "Vec3Length( vec2 ) > 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm10, dword ptr [rsi+4]
    vmovss  xmm11, dword ptr [rsi]
    vmovss  xmm12, dword ptr [rsi+8]
    vmulss  xmm1, xmm7, xmm11
    vmulss  xmm0, xmm10, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm12, xmm8
    vaddss  xmm13, xmm2, xmm1
    vcomiss xmm13, cs:__real@bf400000
  }
  Vec3Cross(_RSI, _RDI, &cross);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+130h+cross]
    vmovss  xmm1, dword ptr [rsp+130h+cross+4]
    vmovss  dword ptr [r14], xmm0
    vmovss  xmm0, dword ptr [rsp+130h+cross+8]
    vmovss  dword ptr [r14+4], xmm1
    vmovss  dword ptr [r14+8], xmm0
    vmulss  xmm2, xmm7, xmm7
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm2, xmm11, xmm11
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm12, xmm12
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm4, xmm2
    vsqrtss xmm3, xmm1, xmm1
    vaddss  xmm0, xmm3, xmm13
    vmovss  dword ptr [r14+0Ch], xmm0
  }
  Vec4Normalize(_R14);
  _R11 = &v71;
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
  _RDX = this;
  *outRpmNormal = 0.0;
  *outThrottle = 0.0;
  *outGear = 0.0;
  *outBrake = 0.0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+178h]
    vmulss  xmm3, xmm0, dword ptr [rdx+1A8h]
    vmovss  xmm1, dword ptr [rdx+174h]
    vmulss  xmm2, xmm1, dword ptr [rdx+1A4h]
    vmovss  xmm0, dword ptr [rdx+17Ch]
    vmulss  xmm1, xmm0, dword ptr [rdx+1ACh]
  }
  _RAX = outMph;
  __asm
  {
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm0, xmm2, cs:__real@3d68ba2f
    vmovss  dword ptr [rax], xmm0
  }
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
  _RDI = this;
  this->m_modeInitizalied[2] = 0;
  TerrainFollowingRadarControl::LoadTFRParameters(this);
  TerrainFollowingRadarControl::ComputeDirectionVectorsForRays(_RDI);
  _RDI->m_clipMask = newClipMask;
  __asm
  {
    vmovss  xmm0, cs:?TFR_LOW_SPEED_VALUE@@3MA; float TFR_LOW_SPEED_VALUE
    vmovss  dword ptr [rdi+50Ch], xmm0
    vmovss  xmm1, cs:?TFR_HIGH_SPEED_VALUE@@3MA; float TFR_HIGH_SPEED_VALUE
    vmovss  dword ptr [rdi+510h], xmm1
  }
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
  int m_StickMode; 
  unsigned __int64 buttons; 

  _RBX = rawControlInputs;
  if ( !rawControlInputs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2444, ASSERT_TYPE_ASSERT, "(rawControlInputs)", (const char *)&queryFormat, "rawControlInputs") )
    __debugbreak();
  m_StickMode = this->m_StickMode;
  if ( m_StickMode )
  {
    if ( m_StickMode == 2 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  dword ptr [rbx+8], xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
      }
      _RBX[4] = 0.0;
      __asm
      {
        vmovss  dword ptr [rbx], xmm1
        vmovss  dword ptr [rbx+4], xmm0
      }
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2489, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Stick mode is not valid for this FD tyte\n") )
        __debugbreak();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  dword ptr [rbx], xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
      }
      _RBX[4] = 0.0;
      __asm
      {
        vmovss  dword ptr [rbx+0Ch], xmm0
        vmovss  dword ptr [rbx+4], xmm1
      }
      buttons = cmd->buttons;
      if ( (cmd->buttons & 0x10000000000i64) != 0 )
      {
        _RBX[4] = -127.0;
        buttons = cmd->buttons;
      }
      if ( (buttons & 0x20000000000i64) != 0 )
        _RBX[4] = 127.0;
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rbx+8], xmm0
    }
    if ( !this->GetFlyByWireStatus(this) )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, esi
        vmovss  dword ptr [rbx+0Ch], xmm0
      }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vcvtsi2ss xmm0, xmm0, esi
      vmovss  dword ptr [rbx], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
    *((_QWORD *)_RBX + 2) = 0i64;
    if ( (cmd->buttons & 2) != 0 )
      _RBX[7] = 127.0;
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
  __int64 v6; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RAX = this->m_ControlInputsNormalized;
  __asm
  {
    vmovss  xmm6, cs:__real@3c010204
    vmovaps [rsp+38h+var_28], xmm7
  }
  v6 = 2i64;
  __asm
  {
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+38h+var_38], xmm8
    vmovss  xmm8, cs:__real@3f800000
  }
  do
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax-38h]
      vmulss  xmm3, xmm0, xmm6
      vmovss  dword ptr [rax], xmm3
    }
    if ( this->m_EnableInputDeadZone )
    {
      __asm
      {
        vmovss  xmm4, cs:?FD_DEFAULT_DEADZONE@@3MA; float FD_DEFAULT_DEADZONE
        vandps  xmm0, xmm3, xmm7
        vcomiss xmm0, xmm4
      }
      if ( this->m_EnableInputDeadZone )
      {
        __asm
        {
          vsubss  xmm1, xmm3, xmm4
          vcmpltss xmm0, xmm4, xmm3
          vaddss  xmm2, xmm3, xmm4
          vblendvps xmm3, xmm2, xmm1, xmm0
          vsubss  xmm1, xmm8, xmm4
          vdivss  xmm0, xmm3, xmm1
        }
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      __asm
      {
        vmulss  xmm3, xmm0, dword ptr [rcx+3D0h]
        vmovss  dword ptr [rax], xmm3
      }
    }
    __asm
    {
      vmovss  dword ptr [rax-70h], xmm3
      vmovss  xmm0, dword ptr [rax-34h]
      vmulss  xmm4, xmm0, xmm6
      vmovss  dword ptr [rax+4], xmm4
    }
    if ( this->m_EnableInputDeadZone )
    {
      __asm
      {
        vmovss  xmm5, cs:?FD_DEFAULT_DEADZONE@@3MA; float FD_DEFAULT_DEADZONE
        vandps  xmm0, xmm4, xmm7
        vcomiss xmm0, xmm5
      }
      if ( this->m_EnableInputDeadZone )
      {
        __asm
        {
          vsubss  xmm1, xmm4, xmm5
          vcmpltss xmm0, xmm5, xmm4
          vaddss  xmm2, xmm4, xmm5
          vblendvps xmm3, xmm2, xmm1, xmm0
          vsubss  xmm1, xmm8, xmm5
          vdivss  xmm0, xmm3, xmm1
        }
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      __asm
      {
        vmulss  xmm4, xmm0, dword ptr [rcx+3D0h]
        vmovss  dword ptr [rax+4], xmm4
      }
    }
    __asm
    {
      vmovss  dword ptr [rax-6Ch], xmm4
      vmovss  xmm0, dword ptr [rax-30h]
      vmulss  xmm3, xmm0, xmm6
      vmovss  dword ptr [rax+8], xmm3
    }
    if ( this->m_EnableInputDeadZone )
    {
      __asm
      {
        vmovss  xmm4, cs:?FD_DEFAULT_DEADZONE@@3MA; float FD_DEFAULT_DEADZONE
        vandps  xmm0, xmm3, xmm7
        vcomiss xmm0, xmm4
      }
      if ( this->m_EnableInputDeadZone )
      {
        __asm
        {
          vsubss  xmm1, xmm3, xmm4
          vcmpltss xmm0, xmm4, xmm3
          vaddss  xmm2, xmm3, xmm4
          vblendvps xmm3, xmm2, xmm1, xmm0
          vsubss  xmm1, xmm8, xmm4
          vdivss  xmm0, xmm3, xmm1
        }
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      __asm
      {
        vmulss  xmm3, xmm0, dword ptr [rcx+3D0h]
        vmovss  dword ptr [rax+8], xmm3
      }
    }
    __asm
    {
      vmovss  dword ptr [rax-68h], xmm3
      vmovss  xmm0, dword ptr [rax-2Ch]
      vmulss  xmm4, xmm0, xmm6
      vmovss  dword ptr [rax+0Ch], xmm4
    }
    if ( this->m_EnableInputDeadZone )
    {
      __asm
      {
        vmovss  xmm5, cs:?FD_DEFAULT_DEADZONE@@3MA; float FD_DEFAULT_DEADZONE
        vandps  xmm0, xmm4, xmm7
        vcomiss xmm0, xmm5
      }
      if ( this->m_EnableInputDeadZone )
      {
        __asm
        {
          vsubss  xmm1, xmm4, xmm5
          vcmpltss xmm0, xmm5, xmm4
          vaddss  xmm2, xmm4, xmm5
          vblendvps xmm3, xmm2, xmm1, xmm0
          vsubss  xmm1, xmm8, xmm5
          vdivss  xmm0, xmm3, xmm1
        }
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      __asm
      {
        vmulss  xmm4, xmm0, dword ptr [rcx+3D0h]
        vmovss  dword ptr [rax+0Ch], xmm4
      }
    }
    __asm
    {
      vmovss  dword ptr [rax-64h], xmm4
      vmovss  xmm0, dword ptr [rax-28h]
      vmulss  xmm3, xmm0, xmm6
      vmovss  dword ptr [rax+10h], xmm3
    }
    if ( this->m_EnableInputDeadZone )
    {
      __asm
      {
        vmovss  xmm4, cs:?FD_DEFAULT_DEADZONE@@3MA; float FD_DEFAULT_DEADZONE
        vandps  xmm0, xmm3, xmm7
        vcomiss xmm0, xmm4
      }
      if ( this->m_EnableInputDeadZone )
      {
        __asm
        {
          vsubss  xmm1, xmm3, xmm4
          vcmpltss xmm0, xmm4, xmm3
          vaddss  xmm2, xmm3, xmm4
          vblendvps xmm3, xmm2, xmm1, xmm0
          vsubss  xmm1, xmm8, xmm4
          vdivss  xmm0, xmm3, xmm1
        }
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      __asm
      {
        vmulss  xmm3, xmm0, dword ptr [rcx+3D0h]
        vmovss  dword ptr [rax+10h], xmm3
      }
    }
    __asm
    {
      vmovss  dword ptr [rax-60h], xmm3
      vmovss  xmm0, dword ptr [rax-24h]
      vmulss  xmm4, xmm0, xmm6
      vmovss  dword ptr [rax+14h], xmm4
    }
    if ( this->m_EnableInputDeadZone )
    {
      __asm
      {
        vmovss  xmm5, cs:?FD_DEFAULT_DEADZONE@@3MA; float FD_DEFAULT_DEADZONE
        vandps  xmm0, xmm4, xmm7
        vcomiss xmm0, xmm5
      }
      if ( this->m_EnableInputDeadZone )
      {
        __asm
        {
          vsubss  xmm1, xmm4, xmm5
          vcmpltss xmm0, xmm5, xmm4
          vaddss  xmm2, xmm4, xmm5
          vblendvps xmm3, xmm2, xmm1, xmm0
          vsubss  xmm1, xmm8, xmm5
          vdivss  xmm0, xmm3, xmm1
        }
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      __asm
      {
        vmulss  xmm4, xmm0, dword ptr [rcx+3D0h]
        vmovss  dword ptr [rax+14h], xmm4
      }
    }
    __asm
    {
      vmovss  dword ptr [rax-5Ch], xmm4
      vmovss  xmm0, dword ptr [rax-20h]
      vmulss  xmm3, xmm0, xmm6
      vmovss  dword ptr [rax+18h], xmm3
    }
    if ( this->m_EnableInputDeadZone )
    {
      __asm
      {
        vmovss  xmm4, cs:?FD_DEFAULT_DEADZONE@@3MA; float FD_DEFAULT_DEADZONE
        vandps  xmm0, xmm3, xmm7
        vcomiss xmm0, xmm4
      }
      if ( this->m_EnableInputDeadZone )
      {
        __asm
        {
          vsubss  xmm1, xmm3, xmm4
          vcmpltss xmm0, xmm4, xmm3
          vaddss  xmm2, xmm3, xmm4
          vblendvps xmm3, xmm2, xmm1, xmm0
          vsubss  xmm1, xmm8, xmm4
          vdivss  xmm0, xmm3, xmm1
        }
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      __asm
      {
        vmulss  xmm3, xmm0, dword ptr [rcx+3D0h]
        vmovss  dword ptr [rax+18h], xmm3
      }
    }
    __asm { vmovss  dword ptr [rax-58h], xmm3 }
    _RAX += 7;
    --v6;
  }
  while ( v6 );
  __asm
  {
    vmovaps xmm6, [rsp+38h+var_18]
    vmovaps xmm7, [rsp+38h+var_28]
    vmovaps xmm8, [rsp+38h+var_38]
  }
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
  float angleOut; 
  vec4_t in2; 
  vec4_t out; 
  vec3_t axisOut; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm1, dword ptr [rcx+4]
    vxorps  xmm2, xmm1, xmm3
    vxorps  xmm0, xmm0, xmm3
    vmovss  dword ptr [rsp+68h+in2], xmm0
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rsp+68h+in2+4], xmm2
    vmovss  xmm2, dword ptr [rcx+0Ch]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rsp+68h+in2+8], xmm1
    vmovss  dword ptr [rsp+68h+in2+0Ch], xmm2
  }
  QuatMultiply(quat2, &in2, &out);
  FD_QuatToAngleAxis(&out, &angleOut, &axisOut);
  __asm { vmovss  xmm0, [rsp+68h+angleOut] }
  return *(float *)&_XMM0;
}

/*
==============
FlightDynamics::QuatToUnitQuatDistance
==============
*/
float FlightDynamics::QuatToUnitQuatDistance(vec4_t *quat1)
{
  float angleOut; 
  vec4_t in1; 
  vec4_t in2; 
  vec4_t out; 
  vec3_t axisOut; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm1, dword ptr [rcx+4]
    vxorps  xmm0, xmm0, xmm3
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+78h+in2], xmm0
    vmovss  xmm0, dword ptr [rcx+8]
    vxorps  xmm1, xmm0, xmm3
    vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
    vmovss  dword ptr [rsp+78h+in2+4], xmm2
    vmovss  xmm2, dword ptr [rcx+0Ch]
    vmovups xmmword ptr [rsp+78h+in1], xmm0
    vmovss  dword ptr [rsp+78h+in2+8], xmm1
    vmovss  dword ptr [rsp+78h+in2+0Ch], xmm2
  }
  QuatMultiply(&in1, &in2, &out);
  FD_QuatToAngleAxis(&out, &angleOut, &axisOut);
  __asm { vmovss  xmm0, [rsp+78h+angleOut] }
  return *(float *)&_XMM0;
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

void __fastcall TerrainFollowingRadarControl::ScanTerrainAhead(TerrainFollowingRadarControl *this, double dT, vec3_t *position, vec3_t *velocity, vec4_t *noseRotationQuat, float enginePower, Physics_WorldId worldId)
{
  TerrainFollowingRadarControl::RadarBeamInfo *m_radarBeams; 
  __int64 v82; 
  float v84; 
  int m_clipMask; 
  char v91; 
  char v92; 
  char v159; 
  char v160; 
  vec3_t *v163; 
  int duration; 
  float v199; 
  vec4_t v200; 
  vec4_t v201; 
  vec3_t *start; 
  vec3_t v203; 
  __int64 v204; 
  vec3_t end; 
  vec3_t v206; 
  vec3_t out; 
  float v209; 
  vec3_t v210; 
  vec3_t v211; 
  vec3_t v212; 
  char v213; 
  void *retaddr; 

  _RAX = &retaddr;
  v204 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _RBX = velocity;
  _R12 = position;
  start = position;
  __asm { vmovaps xmm10, xmm1 }
  _RDI = this;
  if ( this->m_modeInitizalied[this->m_currentOperatingMode] )
  {
    Sys_ProfBeginNamedEvent(0xFF008008, "ScanTerrainAhead");
    __asm
    {
      vmovss  xmm12, dword ptr [rbx]
      vmovss  xmm13, dword ptr [rbx+4]
      vmovss  xmm14, dword ptr [rbx+8]
      vmulss  xmm1, xmm13, xmm13
      vmulss  xmm0, xmm12, xmm12
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm14, xmm14
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm6, xmm2, xmm2
      vcmpless xmm0, xmm6, cs:__real@80000000
      vmovss  xmm15, cs:__real@3f800000
      vblendvps xmm1, xmm6, xmm15, xmm0
      vdivss  xmm0, xmm15, xmm1
      vmulss  xmm7, xmm12, xmm0
      vmulss  xmm8, xmm13, xmm0
      vmulss  xmm9, xmm14, xmm0
      vmovss  dword ptr [rdi+514h], xmm6
      vmovss  xmm2, dword ptr [rdi+510h]; max
      vmovss  xmm1, dword ptr [rdi+50Ch]; min
      vmovaps xmm0, xmm6; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm11, xmm0
      vmovss  dword ptr [rdi+518h], xmm0
      vcomiss xmm6, cs:__real@3a83126f
    }
    if ( !(v91 | v92) )
    {
      QuatTransform(noseRotationQuat, &sFlightDynamicsManager.m_ForwardAxis, &out);
      QuatTransform(noseRotationQuat, &sFlightDynamicsManager.m_UpAxis, &v211);
      QuatTransform(noseRotationQuat, &sFlightDynamicsManager.m_ElevatorAxis, &v212);
      *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(_RDI, TFR_BEAM_NOSE_AFFECT_THROTTLE);
      __asm
      {
        vmulss  xmm2, xmm0, [rbp+100h+arg_28]
        vmulss  xmm4, xmm2, dword ptr [rbp+100h+out]
        vmulss  xmm3, xmm2, dword ptr [rbp+100h+out+4]
        vmulss  xmm2, xmm2, dword ptr [rbp+100h+out+8]
        vaddss  xmm5, xmm7, xmm4
        vaddss  xmm4, xmm8, xmm3
        vaddss  xmm6, xmm9, xmm2
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm15, xmm0
        vdivss  xmm0, xmm15, xmm1
        vmulss  xmm3, xmm5, xmm0
        vmulss  xmm2, xmm4, xmm0
        vmulss  xmm0, xmm6, xmm0
        vmovss  [rbp+100h+var_108], xmm0
        vxorps  xmm9, xmm9, xmm9
        vmovss  [rsp+200h+var_1A0], xmm9
        vmovss  [rsp+200h+var_19C], xmm9
        vmovss  [rsp+200h+var_198], xmm9
        vmovss  xmm15, [rsp+200h+var_184]
        vmovss  [rsp+200h+var_194], xmm15
        vunpcklps xmm0, xmm3, xmm2
        vmovsd  qword ptr [rbp+100h+end], xmm0
      }
      end.v[2] = v210.v[2];
      __asm
      {
        vmovsd  xmm0, qword ptr cs:sFlightDynamicsManager.m_ForwardAxis
        vmovsd  [rbp+100h+var_140], xmm0
      }
      v206.v[2] = sFlightDynamicsManager.m_ForwardAxis.v[2];
      GetRotationQuatFromVectors(&v206, &end, &v200);
      __asm
      {
        vmovss  xmm6, dword ptr [r12]
        vmovss  xmm7, dword ptr [r12+4]
        vmovss  xmm8, dword ptr [r12+8]
      }
      *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(_RDI, TFR_BEAM_RANGE_AHEAD_SPEED_MULTIPLIER);
      __asm
      {
        vsubss  xmm1, xmm0, dword ptr [rdi+51Ch]
        vmulss  xmm2, xmm1, xmm10
        vmulss  xmm3, xmm12, xmm2
        vmulss  xmm4, xmm13, xmm2
        vmulss  xmm5, xmm14, xmm2
        vaddss  xmm0, xmm3, xmm6
        vmovss  dword ptr [rbp+100h+end], xmm0
        vaddss  xmm1, xmm4, xmm7
        vmovss  dword ptr [rbp+100h+end+4], xmm1
        vaddss  xmm0, xmm5, xmm8
        vmovss  dword ptr [rbp+100h+end+8], xmm0
      }
      *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(_RDI, TFR_BEAM_DECAY);
      __asm { vmovaps xmm12, xmm0 }
      *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(_RDI, TFR_BEAM_DOPPLER_DECAY);
      __asm { vmovaps xmm7, xmm0 }
      *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(_RDI, TFR_BEAM_DOPPLER_MULITPLIER);
      __asm { vmovaps xmm13, xmm0 }
      *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(_RDI, TFR_BEAM_RANGE_EXPO);
      __asm { vmovaps xmm14, xmm0 }
      _RDI->m_totalRangeStrength = 0.0;
      __asm
      {
        vmovss  [rbp+100h+var_138], xmm9
        vmovss  dword ptr [rbp+100h+var_140+4], xmm9
        vmovss  dword ptr [rbp+100h+var_140], xmm9
        vmovss  [rbp+100h+var_118], xmm9
        vmovss  dword ptr [rbp+100h+var_120+4], xmm9
        vmovss  dword ptr [rbp+100h+var_120], xmm9
      }
      _RSI = &_RDI->m_radarBeams[0].currentObstacleRangeNormalized;
      m_radarBeams = _RDI->m_radarBeams;
      v82 = 16i64;
      __asm { vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
      v84 = end.v[2];
      do
      {
        m_clipMask = _RDI->m_clipMask;
        *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(_RDI, TFR_BEAM_RANGE_SPEEDMULT);
        __asm { vmulss  xmm6, xmm0, xmm11 }
        *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(_RDI, TFR_BEAM_RANGE);
        __asm
        {
          vmulss  xmm3, xmm0, xmm11
          vmovsd  xmm0, [rbp+100h+var_120]
          vmovsd  [rbp+100h+var_170], xmm0
        }
        v203.v[2] = v209;
        __asm
        {
          vmovsd  xmm0, [rbp+100h+var_140]
          vmovsd  qword ptr [rsp+200h+var_1A0], xmm0
        }
        v200.v[2] = v206.v[2];
        __asm
        {
          vmovss  [rsp+200h+var_190], xmm9
          vmovss  [rsp+200h+var_18C], xmm9
          vmovss  [rsp+200h+var_188], xmm9
          vmovss  [rsp+200h+var_184], xmm15
          vmovsd  xmm0, qword ptr [rbp+100h+end]
          vmovsd  [rbp+100h+var_110], xmm0
        }
        v210.v[2] = v84;
        __asm
        {
          vmovss  dword ptr [rsp+200h+var_1C8], xmm14
          vmovss  [rsp+200h+duration], xmm6
        }
        TerrainFollowingRadarControl::RadarBeamInfo::FireBeam(m_radarBeams, &v210, &v201, *(float *)&_XMM3, *(float *)&duration, (vec3_t *)&v200, m_clipMask, v199, &v203, worldId);
        __asm
        {
          vmovss  xmm1, dword ptr [rsi]
          vmovss  dword ptr [rsi+4], xmm1
          vmulss  xmm0, xmm10, dword ptr [rsi+8]
          vaddss  xmm3, xmm0, xmm1
          vsubss  xmm1, xmm3, xmm1
          vmulss  xmm2, xmm1, xmm10
          vmulss  xmm0, xmm2, xmm13
          vaddss  xmm4, xmm0, dword ptr [rsi+0Ch]
          vmulss  xmm1, xmm3, xmm12
          vmulss  xmm5, xmm1, xmm10
          vandps  xmm2, xmm5, xmm8
          vandps  xmm0, xmm3, xmm8
          vcomiss xmm2, xmm0
        }
        if ( v91 | v92 )
          __asm { vsubss  xmm2, xmm3, xmm5 }
        else
          __asm { vmovaps xmm2, xmm9 }
        __asm
        {
          vmovss  dword ptr [rsi], xmm2
          vmulss  xmm0, xmm4, xmm7
          vmulss  xmm3, xmm0, xmm10
          vandps  xmm1, xmm3, xmm8
          vandps  xmm0, xmm4, xmm8
          vcomiss xmm1, xmm0
        }
        if ( v91 | v92 )
          __asm { vsubss  xmm0, xmm4, xmm3 }
        else
          __asm { vmovaps xmm0, xmm9 }
        __asm
        {
          vmovss  dword ptr [rsi+0Ch], xmm0
          vmovss  xmm1, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
          vcomiss xmm2, xmm1
        }
        if ( !(v91 | v92) )
        {
          __asm
          {
            vmovss  dword ptr [rsi], xmm1
            vmovaps xmm2, xmm1
          }
        }
        __asm
        {
          vmulss  xmm0, xmm2, xmm0; X
          vmovss  xmm1, dword ptr [rsi+14h]; Y
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmulss  xmm1, xmm0, dword ptr [rsi+10h]
          vaddss  xmm2, xmm1, dword ptr [rdi+504h]
          vmovss  dword ptr [rdi+504h], xmm2
        }
        ++m_radarBeams;
        _RSI += 9;
        --v82;
      }
      while ( v82 );
      __asm
      {
        vmovss  xmm4, dword ptr [rbp+100h+out]
        vmovss  xmm5, dword ptr [rbp+100h+out+4]
        vmovss  xmm6, dword ptr [rbp+100h+out+8]
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vmovss  xmm15, cs:__real@3f800000
        vblendvps xmm1, xmm3, xmm15, xmm0
        vdivss  xmm0, xmm15, xmm1
        vmulss  xmm3, xmm0, xmm4
        vmulss  xmm4, xmm5, xmm0
        vmulss  xmm6, xmm6, xmm0
        vmulss  xmm5, xmm10, cs:?TFR_VECTOR_TIME_LERP@@3MA; float TFR_VECTOR_TIME_LERP
        vmovss  xmm1, dword ptr [rdi+4F8h]
        vsubss  xmm0, xmm1, xmm3
        vmulss  xmm2, xmm0, xmm5
        vaddss  xmm7, xmm2, xmm3
        vmovss  dword ptr [rdi+4F8h], xmm7
        vmovss  xmm0, dword ptr [rdi+4FCh]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm4, xmm2, xmm4
        vmovss  dword ptr [rdi+4FCh], xmm4
        vmovss  xmm0, dword ptr [rdi+500h]
        vsubss  xmm1, xmm0, xmm6
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm3, xmm2, xmm6
        vmovss  dword ptr [rdi+500h], xmm3
        vmulss  xmm1, xmm7, xmm7
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm15, xmm0
        vdivss  xmm2, xmm15, xmm1
        vmulss  xmm0, xmm2, xmm7
        vmovss  dword ptr [rdi+4F8h], xmm0
        vmulss  xmm1, xmm2, dword ptr [rdi+4FCh]
        vmovss  dword ptr [rdi+4FCh], xmm1
        vmulss  xmm0, xmm2, dword ptr [rdi+500h]
        vmovss  dword ptr [rdi+500h], xmm0
        vmovss  xmm6, cs:?TFR_MAX_CONTROL_SURFACE_STRENGTH@@3MA; float TFR_MAX_CONTROL_SURFACE_STRENGTH
      }
      *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(_RDI, (FlightDynamicsTerrainFollowingRadarParamType)((unsigned __int8)v82 + 3));
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr [rdi+504h]; val
        vmovaps xmm2, xmm6; max
        vmovaps xmm1, xmm9; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
      _RDI->m_blockageFactor = 0.0;
      __asm { vmovss  dword ptr [rdi+504h], xmm0 }
      *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(_RDI, TFR_CONTROL_BLOCKED_PERCENT);
      __asm
      {
        vmulss  xmm1, xmm0, xmm6
        vcomiss xmm9, xmm1
      }
      v163 = start;
      if ( v159 )
      {
        __asm { vmovss  xmm6, dword ptr [rdi+504h] }
        *(double *)&_XMM0 = TerrainFollowingRadarControl::GetParam(_RDI, TFR_CONTROL_BLOCKED_PERCENT);
        __asm
        {
          vmulss  xmm1, xmm0, xmm6
          vmovss  dword ptr [rdi+508h], xmm1
        }
      }
      __asm
      {
        vmulss  xmm0, xmm6, cs:?TFR_LOOKAHEAD_MULTIPLIER@@3MA; float TFR_LOOKAHEAD_MULTIPLIER
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm1, dword ptr [rdi+51Ch]
        vmovss  dword ptr [rdi+51Ch], xmm2
        vmulss  xmm0, xmm2, cs:?TFR_LOOKAHEAD_DECAY@@3MA; float TFR_LOOKAHEAD_DECAY
        vmulss  xmm3, xmm0, xmm10
        vandps  xmm1, xmm3, xmm8
        vandps  xmm0, xmm2, xmm8
        vcomiss xmm1, xmm0
      }
      if ( v159 | v160 )
        __asm { vsubss  xmm0, xmm2, xmm3 }
      else
        __asm { vmovaps xmm0, xmm9 }
      __asm
      {
        vmovss  dword ptr [rdi+51Ch], xmm0
        vmovss  xmm2, cs:?TFR_LOOKAHEAD_MAX@@3MA; float TFR_LOOKAHEAD_MAX
        vcmpltss xmm1, xmm2, xmm0
        vblendvps xmm1, xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi+51Ch], xmm1
      }
      _RDI->m_controlSurfaces[3] = 0.0;
      *(_QWORD *)_RDI->m_controlSurfaces = 0i64;
      __asm { vmovss  xmm6, cs:?TFR_MAX_CONTROL_SURFACE_STRENGTH@@3MA; float TFR_MAX_CONTROL_SURFACE_STRENGTH }
      TerrainFollowingRadarControl::GetParam(_RDI, TFR_CONTROL_SURFACE_MAGNITUDE_MULTIPLIER);
      __asm
      {
        vmovaps xmm2, xmm6; max
        vmovaps xmm1, xmm9; min
        vmovaps xmm0, xmm9; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rdi+504h], xmm0 }
      if ( Physics_IsPredictiveWorld(worldId) && FD_GetDrawAvoidanceTracesDvar() )
      {
        __asm
        {
          vmovss  xmm3, cs:__real@459c4000
          vmulss  xmm0, xmm3, dword ptr [rdi+4F8h]
          vaddss  xmm1, xmm0, dword ptr [r12]
          vmovss  dword ptr [rbp+100h+end], xmm1
          vmulss  xmm0, xmm3, dword ptr [rdi+4FCh]
          vaddss  xmm1, xmm0, dword ptr [r12+4]
          vmovss  dword ptr [rbp+100h+end+4], xmm1
          vmulss  xmm0, xmm3, dword ptr [rdi+500h]
          vaddss  xmm1, xmm0, dword ptr [r12+8]
          vmovss  dword ptr [rbp+100h+end+8], xmm1
        }
        FD_DebugLine(v163, &end, &colorWhite, 0, 1);
      }
    }
    Sys_ProfEndNamedEvent();
  }
  _R11 = &v213;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
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
  FlightDynamics *v11; 
  float v12; 
  float v13; 
  FlightDynamics_vtbl *v14; 

  __asm
  {
    vmovss  xmm4, dword ptr [r8]
    vmovss  xmm3, dword ptr [r8+4]
    vmovss  xmm2, dword ptr [r8+8]
    vmovss  xmm1, dword ptr [r8+0Ch]
    vmovss  xmm0, dword ptr [r9]
  }
  v11 = this;
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
  __asm
  {
    vmovss  dword ptr [rcx+368h], xmm4
    vmovss  dword ptr [rcx+36Ch], xmm3
    vmovss  dword ptr [rcx+370h], xmm2
    vmovss  dword ptr [rcx+374h], xmm1
  }
  this->m_Velocity.v[1] = v13;
  this->m_Velocity.v[2] = velocity->v[2];
  __asm
  {
    vmovss  dword ptr [rcx+2E4h], xmm0
    vmovss  dword ptr [rcx+2F0h], xmm0
  }
  *(_QWORD *)&this->m_PreviousVelocity.y = *(_QWORD *)&this->m_Velocity.y;
  this->m_PreviousRotationVelocity = this->m_RotationVelocity;
  __asm
  {
    vmovss  dword ptr [rcx+368h], xmm4
    vmovss  dword ptr [rcx+36Ch], xmm3
    vmovss  dword ptr [rcx+370h], xmm2
    vmovss  dword ptr [rcx+374h], xmm1
    vmovss  dword ptr [rcx+378h], xmm4
    vmovss  dword ptr [rcx+37Ch], xmm3
    vmovss  dword ptr [rcx+380h], xmm2
    vmovss  dword ptr [rcx+384h], xmm1
  }
  v14 = this->__vftable;
  this->m_EnableFlyByWire = 1;
  ((void (*)(void))v14->ResetInputControls)();
  v11->m_Status = status;
}

/*
==============
FlightDynamics::SetPilotInputStrength
==============
*/

void __fastcall FlightDynamics::SetPilotInputStrength(FlightDynamics *this, double strength)
{
  __asm { vmovss  dword ptr [rcx+3D0h], xmm1 }
}

/*
==============
FlightDynamics::SetRotationLocal
==============
*/

void __fastcall FlightDynamics::SetRotationLocal(FlightDynamics *this, const vec3_t *rotationNormalVector, double angle)
{
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
  float s; 
  vec4_t out; 
  vec4_t in1; 

  __asm
  {
    vmovaps [rsp+0A8h+var_48], xmm6
    vmovss  xmm0, dword ptr [rcx+368h]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  _RDI = rotationNormalVector;
  _RBX = this;
  __asm { vmovaps xmm6, xmm2 }
  if ( (v35 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2109, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_X] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_X] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+36Ch]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v36 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2110, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_Y] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_Y] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+370h]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v37 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2111, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_Z] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_Z] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+374h]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v38 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2112, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_W] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_W] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+388h]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v39 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2114, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationVelocity[FD_X] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationVelocity[FD_X] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38Ch]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v40 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2115, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationVelocity[FD_Y] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationVelocity[FD_Y] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+390h]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v41 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2116, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationVelocity[FD_Z] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationVelocity[FD_Z] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+394h]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v42 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2117, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationVelocity[FD_W] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationVelocity[FD_W] )") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2119, ASSERT_TYPE_ASSERT, "(rotationNormalVector)", (const char *)&queryFormat, "rotationNormalVector") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm2, dword ptr [rdi+4]
    vmovss  xmm3, dword ptr [rdi+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, cs:__real@3a83126f
    vmulss  xmm0, xmm6, cs:__real@3f000000; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &in1.v[3]);
  __asm
  {
    vmovss  xmm2, [rsp+0A8h+s]
    vmulss  xmm0, xmm2, dword ptr [rdi]
    vmulss  xmm1, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+0A8h+in1], xmm0
    vmulss  xmm0, xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+0A8h+in1+8], xmm0
    vmovss  dword ptr [rsp+0A8h+in1+4], xmm1
  }
  QuatMultiply(&in1, &_RBX->m_RotationQuaternion, &out);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+0A8h+out]
    vmovups xmmword ptr [rbx+368h], xmm0
  }
  QuatMultiply(&in1, &_RBX->m_RotationVelocity, &out);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+0A8h+out]
    vmovups xmmword ptr [rbx+388h], xmm0
    vmovss  xmm0, dword ptr [rbx+368h]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v43 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2141, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_X] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_X] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+36Ch]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v44 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2142, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_Y] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_Y] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+370h]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v45 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2143, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_Z] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_Z] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+374h]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v46 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2144, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_W] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_W] )") )
    __debugbreak();
  __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
}

/*
==============
FlightDynamics::SetRotationNonLocal
==============
*/

void __fastcall FlightDynamics::SetRotationNonLocal(FlightDynamics *this, const vec3_t *rotationNormalVector, double angle)
{
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  float s; 
  vec4_t out; 
  vec4_t in2; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  _RSI = this;
  __asm { vmovaps xmm6, xmm2 }
  if ( !rotationNormalVector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2151, ASSERT_TYPE_ASSERT, "(rotationNormalVector)", (const char *)&queryFormat, "rotationNormalVector") )
    __debugbreak();
  __asm { vmulss  xmm0, xmm6, cs:__real@3f000000; radians }
  FastSinCos(*(const float *)&_XMM0, &s, &in2.v[3]);
  __asm
  {
    vmovss  xmm2, [rsp+88h+s]
    vmulss  xmm0, xmm2, dword ptr [rbx]
    vmulss  xmm1, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+88h+in2], xmm0
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vmovss  dword ptr [rsp+88h+in2+8], xmm0
    vmovss  dword ptr [rsp+88h+in2+4], xmm1
  }
  QuatMultiply(&_RSI->m_RotationQuaternion, &in2, &out);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+88h+out]
    vmovups xmmword ptr [rsi+368h], xmm0
  }
  QuatMultiply(&_RSI->m_RotationVelocity, &in2, &out);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+88h+out]
    vmovups xmmword ptr [rsi+388h], xmm0
    vmovss  xmm0, dword ptr [rsi+368h]
    vmovss  [rsp+88h+var_58], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2172, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_X] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_X] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+36Ch]
    vmovss  [rsp+88h+var_58], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2173, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_Y] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_Y] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+370h]
    vmovss  [rsp+88h+var_58], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2174, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_Z] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_Z] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+374h]
    vmovss  [rsp+88h+var_58], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 2175, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_RotationQuaternion[FD_W] ))", (const char *)&queryFormat, "!IS_NAN( m_RotationQuaternion[FD_W] )") )
    __debugbreak();
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
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

bool __fastcall FlightDynamics::Step(FlightDynamics *this, double deltaTime)
{
  float v51; 
  hknpWorld *world; 
  const hkTransformf *(__fastcall *getBodyTransform)(hknpWorldReader *, hknpBodyId); 
  unsigned int PhysicsBodyId; 
  const hkRotationImpl<float> *v125; 
  char v151; 
  char v152; 
  bool v243; 
  int v255; 
  int v256; 
  int v257; 
  int v258; 
  vec3_t v259; 
  vec4_t quat_8; 
  __int64 v261; 
  vec3_t axis; 
  vec4_t out; 
  vec3_t in; 
  vec3_t v265; 
  vec4_t result; 
  hkQuaternionf v267; 
  hkQuaternionf v268; 
  hkSimdFloat32 v269; 
  char v270; 
  void *retaddr; 

  _RAX = &retaddr;
  v261 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovaps xmm6, xmm1
  }
  _RSI = this;
  __asm { vmovss  xmm9, cs:__real@3f800000 }
  if ( Physics_IsPredictiveWorld(this->m_worldId) )
  {
    __asm
    {
      vmovss  xmm0, cs:?FD_SIMULATION_LOCKED_STEP_DELTATIME@@3MA; float FD_SIMULATION_LOCKED_STEP_DELTATIME
      vsubss  xmm1, xmm0, cs:__real@3a83126f
      vcomiss xmm6, xmm1
      vmovss  xmm0, cs:?FD_STEP_ROLLING_AVERAGE_FRAME_COUNT@@3MA; float FD_STEP_ROLLING_AVERAGE_FRAME_COUNT
      vdivss  xmm1, xmm0, xmm6
      vaddss  xmm6, xmm6, dword ptr [rsi+300h]
      vmovss  xmm2, dword ptr [rsi+2FCh]
      vcomiss xmm1, xmm9
      vdivss  xmm1, xmm9, xmm1
      vmulss  xmm0, xmm1, xmm2
      vsubss  xmm2, xmm2, xmm0
      vmulss  xmm1, xmm1, xmm6
      vaddss  xmm6, xmm1, xmm2
    }
    _RSI->m_AccumulatedDT = 0.0;
  }
  __asm
  {
    vmovss  dword ptr [rsi+2FCh], xmm6
    vmovss  xmm10, cs:?FD_SIMULATION_LOCKED_STEP_DELTATIME@@3MA; float FD_SIMULATION_LOCKED_STEP_DELTATIME
    vdivss  xmm0, xmm6, xmm10; val
    vmovss  xmm2, cs:?FD_MAX_ALLOWED_EXTRAPOLATION_DELTATIME_RATIO@@3MA; max
    vmovss  xmm1, cs:__real@3dcccccd; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm13, xmm0 }
  Sys_ProfBeginNamedEvent(0xFFFF0000, "FlightDynamics::Step");
  __asm { vmovaps xmm1, xmm10; deltaTime }
  BgVehiclePhysics::Step(_RSI, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+368h]
    vmovss  [rsp+1C0h+var_190], xmm1
  }
  if ( (v255 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+36Ch]
    vmovss  [rsp+1C0h+var_190], xmm0
  }
  if ( (v256 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+370h]
    vmovss  [rsp+1C0h+var_190], xmm0
  }
  if ( (v257 & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+374h]
    vmovss  [rsp+1C0h+var_190], xmm0
  }
  if ( (v258 & 0x7F800000) == 2139095040 )
  {
LABEL_28:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 930, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_RotationQuaternion )[0] ) && !IS_NAN( ( m_RotationQuaternion )[1] ) && !IS_NAN( ( m_RotationQuaternion )[2] ) && !IS_NAN( ( m_RotationQuaternion )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_RotationQuaternion )[0] ) && !IS_NAN( ( m_RotationQuaternion )[1] ) && !IS_NAN( ( m_RotationQuaternion )[2] ) && !IS_NAN( ( m_RotationQuaternion )[3] )") )
      __debugbreak();
  }
  Axis43ToQuat(&_RSI->m_transform, &out);
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+1A8h]
    vmovss  xmm0, dword ptr [rsi+1A4h]
    vmovss  xmm3, dword ptr [rsi+1ACh]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, cs:__real@4b3d1000
  }
  if ( v151 | v152 )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+0C0h+out+0Ch]
      vmovss  xmm5, dword ptr [rbp+0C0h+out+8]
      vmovss  xmm4, dword ptr [rbp+0C0h+out+4]
      vmovss  xmm3, dword ptr [rbp+0C0h+out]
    }
  }
  else
  {
    _RSI->m_linearVelocityWs.v[0] = _RSI->m_Velocity.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+2E8h]
      vmovss  dword ptr [rsi+1A8h], xmm0
      vmovss  xmm1, dword ptr [rsi+2ECh]
      vmovss  dword ptr [rsi+1ACh], xmm1
      vmovss  xmm3, dword ptr [rsi+368h]
      vmovss  dword ptr [rbp+0C0h+out], xmm3
      vmovss  xmm4, dword ptr [rsi+36Ch]
      vmovss  dword ptr [rbp+0C0h+out+4], xmm4
      vmovss  xmm5, dword ptr [rsi+370h]
      vmovss  dword ptr [rbp+0C0h+out+8], xmm5
      vmovss  xmm6, dword ptr [rsi+374h]
      vmovss  dword ptr [rbp+0C0h+out+0Ch], xmm6
    }
  }
  __asm { vmovsd  xmm2, qword ptr [rsi+1A4h] }
  v51 = _RSI->m_linearVelocityWs.v[2];
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0C0h+out]
    vmovsd  xmm1, qword ptr [rsi+198h]
    vmovdqa xmmword ptr [rsp+1C0h+quat+8], xmm0
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
  }
  if ( _RSI->m_Status == FD_ENABLED )
  {
    v259.v[2] = v51;
    axis.v[2] = _RSI->m_transform.m[3].v[2];
    __asm
    {
      vmovss  dword ptr [rsi+2D8h], xmm1
      vmovss  dword ptr [rsi+2DCh], xmm0
      vmovss  xmm0, dword ptr [rsp+1C0h+axis+8]
      vmovss  dword ptr [rsi+2E0h], xmm0
    }
    _RSI->m_PreviousRotationQuaternion.v[0] = _RSI->m_RotationQuaternion.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+36Ch]
      vmovss  dword ptr [rsi+37Ch], xmm0
      vmovss  xmm1, dword ptr [rsi+370h]
      vmovss  dword ptr [rsi+380h], xmm1
      vmovss  xmm0, dword ptr [rsi+374h]
      vmovss  dword ptr [rsi+384h], xmm0
      vmovss  dword ptr [rsi+368h], xmm3
      vmovss  dword ptr [rsi+36Ch], xmm4
      vmovss  dword ptr [rsi+370h], xmm5
      vmovss  dword ptr [rsi+374h], xmm6
      vmovss  dword ptr [rsi+2E4h], xmm2
      vshufps xmm0, xmm2, xmm2, 55h ; 'U'
      vmovsd  [rsp+1C0h+var_180], xmm2
      vmovss  dword ptr [rsi+2E8h], xmm0
      vmovss  xmm0, dword ptr [rsp+1C0h+quat]
      vmovss  dword ptr [rsi+2ECh], xmm0
    }
  }
  else
  {
    axis.v[2] = v51;
    v259.v[2] = _RSI->m_transform.m[3].v[2];
    *(_QWORD *)&_RSI->m_RotationQuaternion.xyz.y = 0i64;
    *(_QWORD *)(&_RSI->m_RotationQuaternion.xyz + 1) = 1065353216i64;
    *(_QWORD *)&_RSI->m_PreviousRotationQuaternion.xyz.y = 0i64;
    *(_QWORD *)(&_RSI->m_PreviousRotationQuaternion.xyz + 1) = 1065353216i64;
    *(_QWORD *)&_RSI->m_RotationVelocity.xyz.y = 0i64;
    *(_QWORD *)(&_RSI->m_RotationVelocity.xyz + 1) = 1065353216i64;
    *(_QWORD *)&_RSI->m_PreviousRotationVelocity.xyz.y = 0i64;
    *(_QWORD *)(&_RSI->m_PreviousRotationVelocity.xyz + 1) = 1065353216i64;
    *(_QWORD *)&_RSI->m_RotationInertiaQuat.xyz.y = 0i64;
    *(_QWORD *)(&_RSI->m_RotationInertiaQuat.xyz + 1) = 1065353216i64;
    *(_QWORD *)&_RSI->m_SavedRotationQuaternion.xyz.y = 0i64;
    _RSI->m_SavedRotationQuaternion.v[3] = 0.0;
    _RSI->m_InputStrengthModifier = 1.0;
    __asm
    {
      vmovss  dword ptr [rsi+2D8h], xmm1
      vmovsd  [rsp+1C0h+var_180], xmm1
      vmovss  dword ptr [rsi+2DCh], xmm0
      vmovss  xmm0, dword ptr [rsp+1C0h+quat]
      vmovss  dword ptr [rsi+2E0h], xmm0
      vmovss  dword ptr [rsi+368h], xmm3
      vmovss  dword ptr [rsi+36Ch], xmm4
      vmovss  dword ptr [rsi+370h], xmm5
      vmovss  dword ptr [rsi+374h], xmm6
      vmovsd  qword ptr [rsp+1C0h+axis], xmm2
      vmovss  dword ptr [rsi+2E4h], xmm2
      vmovss  xmm0, dword ptr [rsp+1C0h+axis+4]
      vmovss  dword ptr [rsi+2E8h], xmm0
      vmovss  xmm1, dword ptr [rsp+1C0h+axis+8]
      vmovss  dword ptr [rsi+2ECh], xmm1
      vmovss  dword ptr [rsi+2F0h], xmm2
      vmovss  xmm0, dword ptr [rsi+2E8h]
      vmovss  dword ptr [rsi+2F4h], xmm0
      vmovss  xmm1, dword ptr [rsi+2ECh]
      vmovss  dword ptr [rsi+2F8h], xmm1
    }
    _RSI->m_PreviousRotationVelocity.v[0] = _RSI->m_RotationVelocity.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+38Ch]
      vmovss  dword ptr [rsi+39Ch], xmm0
      vmovss  xmm1, dword ptr [rsi+390h]
      vmovss  dword ptr [rsi+3A0h], xmm1
      vmovss  xmm0, dword ptr [rsi+394h]
      vmovss  dword ptr [rsi+3A4h], xmm0
      vmovss  dword ptr [rsi+368h], xmm3
      vmovss  dword ptr [rsi+36Ch], xmm4
      vmovss  dword ptr [rsi+370h], xmm5
      vmovss  dword ptr [rsi+374h], xmm6
      vmovss  dword ptr [rsi+378h], xmm3
      vmovss  dword ptr [rsi+37Ch], xmm4
      vmovss  dword ptr [rsi+380h], xmm5
      vmovss  dword ptr [rsi+384h], xmm6
    }
    _RSI->m_EnableFlyByWire = 1;
    _RSI->ResetInputControls(_RSI);
    _RSI->m_Status = FD_PROPOSE_ENABLE;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi+3A8h]
      vmovups xmmword ptr [rsp+1C0h+quat+8], xmm0
      vmovsd  xmm1, qword ptr [rsi+1B0h]
    }
    v259.v[2] = _RSI->m_angularVelocityWs.v[2];
    __asm
    {
      vmulss  xmm6, xmm1, xmm10
      vshufps xmm0, xmm1, xmm1, 55h ; 'U'
      vmovsd  [rsp+1C0h+var_180], xmm1
      vmulss  xmm5, xmm0, xmm10
      vmulss  xmm4, xmm10, dword ptr [rsp+1C0h+quat]
      vmulss  xmm2, xmm5, xmm5
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm0, xmm2, xmm2; radians
      vcmpless xmm1, xmm0, cs:__real@80000000
      vblendvps xmm2, xmm0, xmm9, xmm1
      vdivss  xmm3, xmm9, xmm2
      vmulss  xmm1, xmm3, xmm6
      vmovss  dword ptr [rsp+1C0h+axis], xmm1
      vmulss  xmm2, xmm3, xmm5
      vmovss  dword ptr [rsp+1C0h+axis+4], xmm2
      vmulss  xmm1, xmm3, xmm4
      vmovss  dword ptr [rsp+1C0h+axis+8], xmm1
    }
    AngleRadAxisToQuat(*(float *)&_XMM0, &axis, &quat_8);
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rsi+1A4h]
    vmovss  xmm7, dword ptr [rsi+1A8h]
    vmovss  xmm8, dword ptr [rsi+1ACh]
    vmovaps xmm1, xmm10; dT
  }
  FlightDynamics::UpdateFlightDynamics(_RSI, *(float *)&_XMM1, 1);
  world = HavokPhysics_GetConstWorld(_RSI->m_worldId)->world;
  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 1000, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+2D8h]
    vsubss  xmm1, xmm0, dword ptr [rsi+22Ch]
    vmovss  dword ptr [rbp+0C0h+in], xmm1
    vmovss  xmm2, dword ptr [rsi+2DCh]
    vsubss  xmm0, xmm2, dword ptr [rsi+230h]
    vmovss  dword ptr [rbp+0C0h+in+4], xmm0
    vmovss  xmm1, dword ptr [rsi+2E0h]
    vsubss  xmm2, xmm1, dword ptr [rsi+234h]
    vmovss  dword ptr [rbp+0C0h+in+8], xmm2
    vmovaps xmm2, xmm13; frac
  }
  QuatSlerp(&out, &_RSI->m_RotationQuaternion, *(float *)&_XMM2, &result);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+2E4h]
    vsubss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm13
    vaddss  xmm3, xmm2, xmm6
    vmovss  dword ptr [rsi+2E4h], xmm3
    vmovss  xmm0, dword ptr [rsi+2E8h]
    vsubss  xmm1, xmm0, xmm7
    vmulss  xmm2, xmm1, xmm13
    vaddss  xmm3, xmm2, xmm7
    vmovss  dword ptr [rsi+2E8h], xmm3
    vmovss  xmm0, dword ptr [rsi+2ECh]
    vsubss  xmm1, xmm0, xmm8
    vmulss  xmm2, xmm1, xmm13
    vaddss  xmm3, xmm2, xmm8
    vmovss  dword ptr [rsi+2ECh], xmm3
    vmovss  xmm6, dword ptr [rbp+0C0h+result]
    vinsertps xmm6, xmm6, dword ptr [rbp+0C0h+result+4], 10h
    vinsertps xmm6, xmm6, dword ptr [rbp+0C0h+result+8], 20h
    vinsertps xmm6, xmm6, dword ptr [rbp+0C0h+result+0Ch], 30h
    vmulss  xmm15, xmm10, xmm13
    vmovaps xmm1, xmm15
    vshufps xmm2, xmm1, xmm1, 0
    vrcpps  xmm3, xmm2
    vmulps  xmm1, xmm3, xmm2
    vmovups xmm0, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
    vsubps  xmm1, xmm0, xmm1
    vmulps  xmm14, xmm3, xmm1
  }
  getBodyTransform = world->getBodyTransform;
  PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(_RSI);
  v125 = (const hkRotationImpl<float> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))getBodyTransform)(&world->hknpWorldReader, PhysicsBodyId);
  hkQuaternionf::set(&v268, v125);
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0C9h ; 'и'
    vmovups xmm5, xmmword ptr [rbp+0C0h+var_F0.m_vec.m_quad]
    vmulps  xmm2, xmm5, xmm0
    vshufps xmm0, xmm5, xmm5, 0C9h ; 'и'
    vmulps  xmm1, xmm6, xmm0
    vsubps  xmm4, xmm2, xmm1
    vshufps xmm0, xmm6, xmm6, 0FFh
    vmulps  xmm3, xmm5, xmm0
    vshufps xmm1, xmm5, xmm5, 0FFh
    vmulps  xmm2, xmm6, xmm1
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'и'
    vsubps  xmm1, xmm0, xmm3
    vaddps  xmm3, xmm1, xmm2
    vdpps   xmm0, xmm6, xmm5, 0FFh
    vblendps xmm4, xmm3, xmm0, 8
    vdpps   xmm0, xmm4, xmm4, 0FFh
    vrsqrtps xmm1, xmm0
    vmulps  xmm2, xmm1, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
    vmulps  xmm0, xmm0, xmm1
    vmulps  xmm1, xmm0, xmm1
    vmovups xmm0, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
    vsubps  xmm1, xmm0, xmm1
    vmulps  xmm2, xmm1, xmm2
    vmulps  xmm0, xmm2, xmm4
    vmovups xmmword ptr [rbp+0C0h+var_100.m_vec.m_quad], xmm0
    vbroadcastss xmm6, cs:__real@3bf5c28f
  }
  hkQuaternionf::getAngleSr(&v267, &v269);
  __asm
  {
    vmovups xmm7, xmmword ptr [rbp+0C0h+var_E0.m_real]
    vucomiss xmm7, xmm6
  }
  if ( !(v151 | v152) )
  {
    __asm
    {
      vmovups xmm6, xmmword ptr [rbp+0C0h+var_100.m_vec.m_quad]
      vdpps   xmm0, xmm6, xmm6, 7Fh
      vxorps  xmm5, xmm5, xmm5
      vcmpleps xmm3, xmm0, xmm5
      vrsqrtps xmm1, xmm0
      vmulps  xmm2, xmm1, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
      vmulps  xmm0, xmm1, xmm0
      vmulps  xmm1, xmm0, xmm1
      vmovups xmm0, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
      vsubps  xmm1, xmm0, xmm1
      vmulps  xmm2, xmm1, xmm2
      vandnps xmm0, xmm3, xmm2
      vmulps  xmm4, xmm0, xmm6
      vshufps xmm1, xmm6, xmm6, 0FFh
      vcmpltps xmm0, xmm1, xmm5
      vpsrld  xmm2, xmm0, 1Fh
      vpslld  xmm3, xmm2, 1Fh
      vmulps  xmm1, xmm14, xmm7
      vxorps  xmm0, xmm4, xmm3
    }
LABEL_24:
    __asm { vmulps  xmm8, xmm0, xmm1 }
    goto LABEL_25;
  }
  __asm
  {
    vbroadcastss xmm2, cs:__real@2f800000
    vmovups xmm11, xmmword ptr [rbp+0C0h+var_100.m_vec.m_quad]
    vdpps   xmm12, xmm11, xmm11, 7Fh
    vmulps  xmm4, xmm12, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+90h; __m128 const near * const g_vectorfConstants
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm4, xmm2
  }
  if ( !(v151 | v152) )
  {
    __asm
    {
      vcmpleps xmm3, xmm4, xmm8
      vrsqrtps xmm1, xmm4
      vmulps  xmm2, xmm1, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
      vmulps  xmm0, xmm4, xmm1
      vmulps  xmm1, xmm0, xmm1
      vmovups xmm5, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
      vsubps  xmm0, xmm5, xmm1
      vmulps  xmm1, xmm0, xmm2
      vmulps  xmm2, xmm1, xmm4
      vandnps xmm7, xmm3, xmm2
      vcmpleps xmm4, xmm12, xmm8
      vrsqrtps xmm1, xmm12
      vmulps  xmm3, xmm1, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
      vmulps  xmm0, xmm1, xmm12
      vmulps  xmm1, xmm0, xmm1
      vsubps  xmm2, xmm5, xmm1
      vmulps  xmm0, xmm2, xmm3
      vandnps xmm1, xmm4, xmm0
      vmulps  xmm3, xmm1, xmm11
      vshufps xmm0, xmm11, xmm11, 0FFh
      vcmpltps xmm1, xmm0, xmm8
      vpsrld  xmm2, xmm1, 1Fh
      vpslld  xmm0, xmm2, 1Fh
      vmulps  xmm1, xmm7, xmm14
      vxorps  xmm0, xmm3, xmm0
    }
    goto LABEL_24;
  }
LABEL_25:
  QuatTransform(&_RSI->m_RotationInertiaQuat, &in, &v265);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0C0h+var_120]
    vsubss  xmm2, xmm0, dword ptr [rbp+0C0h+in]
    vmovss  xmm1, dword ptr [rbp+0C0h+var_120+4]
    vsubss  xmm3, xmm1, dword ptr [rbp+0C0h+in+4]
    vmovss  xmm0, dword ptr [rbp+0C0h+var_120+8]
    vsubss  xmm4, xmm0, dword ptr [rbp+0C0h+in+8]
    vmulss  xmm1, xmm2, xmm13
    vmovss  dword ptr [rbp+0C0h+var_120], xmm1
    vmulss  xmm5, xmm3, xmm13
    vmovss  dword ptr [rbp+0C0h+var_120+4], xmm5
    vmulss  xmm4, xmm4, xmm13
    vmovss  dword ptr [rbp+0C0h+var_120+8], xmm4
    vmovss  xmm3, cs:?FD_ANGULAR_TO_LINEAR_OFFSET_MULTIPLIER@@3MA; float FD_ANGULAR_TO_LINEAR_OFFSET_MULTIPLIER
    vmulss  xmm0, xmm1, xmm3
    vaddss  xmm1, xmm0, dword ptr [rsi+2E4h]
    vmovss  dword ptr [rsi+2E4h], xmm1
    vmulss  xmm2, xmm5, xmm3
    vaddss  xmm0, xmm2, dword ptr [rsi+2E8h]
    vmovss  dword ptr [rsi+2E8h], xmm0
    vmulss  xmm1, xmm4, xmm3
    vaddss  xmm2, xmm1, dword ptr [rsi+2ECh]
    vmovss  dword ptr [rsi+2ECh], xmm2
    vmulss  xmm0, xmm10, cs:?FD_ANGULAR_INERTIA_TRANSFER_RATE@@3MA; float FD_ANGULAR_INERTIA_TRANSFER_RATE
    vmulss  xmm0, xmm0, xmm13; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, xmm0
    vsubss  xmm5, xmm9, xmm0
    vmulss  xmm2, xmm5, dword ptr [rsi+1B0h]
    vmulss  xmm1, xmm8, xmm0
    vaddss  xmm7, xmm2, xmm1
    vshufps xmm3, xmm8, xmm8, 55h ; 'U'
    vmulss  xmm1, xmm5, dword ptr [rsi+1B4h]
    vmulss  xmm0, xmm3, xmm0
    vaddss  xmm4, xmm1, xmm0
    vshufps xmm2, xmm8, xmm8, 0AAh ; '╙'
    vmulss  xmm1, xmm5, dword ptr [rsi+1B8h]
    vmulss  xmm0, xmm2, xmm6
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rsi+1B8h], xmm1
    vmovups xmm0, xmmword ptr [rsi+3A8h]
    vmovups xmmword ptr [rsp+1C0h+quat+8], xmm0
    vmovsd  xmm2, qword ptr [rsi+1B0h]
    vinsertps xmm0, xmm2, xmm4, 10h
    vmovss  xmm0, xmm0, xmm7
    vmovsd  qword ptr [rsi+1B0h], xmm0
    vmovsd  [rsp+1C0h+var_180], xmm0
  }
  v259.v[2] = _RSI->m_angularVelocityWs.v[2];
  __asm { vmovaps xmm1, xmm15 }
  FlightDynamics::CalculateDeltaQuatFromAngularVelocity(&v259, *(const float *)&_XMM1, &quat_8);
  _RSI->m_linearVelocityWs.v[0] = _RSI->m_Velocity.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+2E8h]
    vmovss  dword ptr [rsi+1A8h], xmm0
    vmovss  xmm1, dword ptr [rsi+2ECh]
    vmovss  dword ptr [rsi+1ACh], xmm1
  }
  Sys_ProfEndNamedEvent();
  v243 = 1;
  _R11 = &v270;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return v243;
}

/*
==============
FlightDynamics::StopPlayerControlling
==============
*/

void __fastcall FlightDynamics::StopPlayerControlling(FlightDynamics *this, double _XMM1_8)
{
  VehiclePhysicsNetcodeType m_netcodeType; 
  BgVehiclePhysicsManager *v4; 
  BgVehiclePhysics *ObjectForPmove; 
  BGVehicles *m_vehicleSystem; 
  __int64 v8; 

  _RBX = this;
  Com_Printf(16, "[FlightDynamics::StopPlayerControlling() - FD type %d object becomes not player controlled.\n", (unsigned int)this->m_DynamicsModel);
  m_netcodeType = _RBX->m_netcodeType;
  if ( m_netcodeType == VEH_NETCODE_CLIENT_PRED || m_netcodeType == VEH_NETCODE_CLIENT_PRED_SB )
  {
    v4 = _RBX->m_vehicleSystem->PhysicsGetVehiclePhysicsManager(_RBX->m_vehicleSystem);
    ObjectForPmove = BgVehiclePhysicsManager::GetObjectForPmove(v4, _RBX);
    memset_0(ObjectForPmove, 0, 0xD20ui64);
    __asm
    {
      vmovss  xmm0, cs:?FD_ABANDONED_TO_KEYFRAMED_TIME_SEC@@3MA; float FD_ABANDONED_TO_KEYFRAMED_TIME_SEC
      vmovss  dword ptr [rbx+38h], xmm0
    }
  }
  if ( !_RBX->m_pmoveObject )
  {
    if ( _RBX == (FlightDynamics *)-152i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    _RBX->m_deferActionMgr.actionBits[0] |= 2u;
  }
  m_vehicleSystem = _RBX->m_vehicleSystem;
  _RBX->m_controls.timeToAcceptInput = 0.0;
  _RBX->m_driverEntNum = 2047;
  v8 = (__int64)m_vehicleSystem->PhysicsGetEventSystem(m_vehicleSystem);
  __asm { vxorps  xmm1, xmm1, xmm1 }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8i64))(v8);
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
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  return *(float *)&_XMM0;
}

/*
==============
TerrainFollowingRadarControl::RadarBeamInfo::UpdateBeam
==============
*/

void __fastcall TerrainFollowingRadarControl::RadarBeamInfo::UpdateBeam(TerrainFollowingRadarControl::RadarBeamInfo *this, double dT, double decay, float dopplerMultiplier)
{
  __asm
  {
    vmovss  xmm4, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm1, dword ptr [rcx+14h]
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+38h+var_28], xmm7
    vaddss  xmm7, xmm0, xmm4
    vmovss  dword ptr [rcx+10h], xmm4
    vsubss  xmm4, xmm7, xmm4
    vmulss  xmm0, xmm4, xmm1
    vmulss  xmm3, xmm0, xmm3
    vaddss  xmm5, xmm3, dword ptr [rcx+18h]
    vmulss  xmm0, xmm7, xmm2
    vmulss  xmm3, xmm0, xmm1
    vmovaps [rsp+38h+var_38], xmm8
    vmovaps xmm8, xmm1
    vandps  xmm1, xmm3, xmm6
    vandps  xmm0, xmm7, xmm6
    vcomiss xmm1, xmm0
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm3, xmm3, xmm3
    vmulss  xmm0, xmm5, [rsp+38h+dopplerDecay]
    vmulss  xmm4, xmm0, xmm8
    vandps  xmm1, xmm4, xmm6
    vandps  xmm0, xmm5, xmm6
    vcomiss xmm1, xmm0
    vmovss  dword ptr [rcx+0Ch], xmm3
    vmovaps xmm6, [rsp+38h+var_18]
    vmovaps xmm7, [rsp+38h+var_28]
    vmovaps xmm8, [rsp+38h+var_38]
    vmovss  dword ptr [rcx+18h], xmm2
    vmovss  xmm2, cs:?TFR_MAX_BEAM_NORMALIZED_DISTANCE@@3MA; float TFR_MAX_BEAM_NORMALIZED_DISTANCE
    vcmpltss xmm1, xmm2, xmm3
    vmovaps xmm0, xmm3
    vblendvps xmm1, xmm0, xmm2, xmm1
    vmovss  dword ptr [rcx+0Ch], xmm1
  }
}

/*
==============
FlightDynamics::UpdateCollider
==============
*/
void FlightDynamics::UpdateCollider(FlightDynamics *this, unsigned int colliderBodyId, const vec3_t *hitPos)
{
  this->m_lastColliderBodyId = colliderBodyId;
  *(_QWORD *)&this->m_timeSinceLastCollisionBody = 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vsubss  xmm3, xmm0, dword ptr [rcx+198h]
    vmovss  dword ptr [rcx+2BCh], xmm3
    vmovss  xmm1, dword ptr [r8+4]
    vsubss  xmm0, xmm1, dword ptr [rcx+19Ch]
    vmovss  dword ptr [rcx+2C0h], xmm0
    vmovss  xmm2, dword ptr [r8+8]
    vsubss  xmm1, xmm2, dword ptr [rcx+1A0h]
    vmovss  dword ptr [rcx+2C4h], xmm1
    vmovss  dword ptr [rcx+2C8h], xmm3
  }
  *(_QWORD *)&this->m_lastCollisionPosLs.y = *(_QWORD *)&this->m_lastCollisionBodyPosLs.y;
}

/*
==============
FlightDynamics::UpdateFlightDynamics
==============
*/

void __fastcall FlightDynamics::UpdateFlightDynamics(FlightDynamics *this, double dT, bool allowUserControl)
{
  __int64 v16; 
  int fmt; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  _RDI = this;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  Sys_ProfBeginNamedEvent(0xFFFF0000, "FlightDynamics::UpdateFlightDynamics");
  if ( _RDI->m_Status == FD_DISABLED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.cpp", 3558, ASSERT_TYPE_ASSERT, "(GetStatus() != FD_DISABLED)", (const char *)&queryFormat, "GetStatus() != FD_DISABLED", -2i64) )
    __debugbreak();
  _RDI->m_Status = FD_ENABLED;
  FlightDynamics::NormalizePlayerInputs(_RDI);
  QuatTransform(&_RDI->m_RotationQuaternion, &sFlightDynamicsManager.m_ElevatorAxis, &_RDI->m_sideVector);
  QuatTransform(&_RDI->m_RotationQuaternion, &sFlightDynamicsManager.m_ForwardAxis, &_RDI->m_forwardVector);
  QuatTransform(&_RDI->m_RotationQuaternion, &sFlightDynamicsManager.m_UpAxis, &_RDI->m_upVector);
  _RDI->m_PreviousVelocity.v[0] = _RDI->m_Velocity.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+2E8h]
    vmovss  dword ptr [rdi+2F4h], xmm0
    vmovss  xmm1, dword ptr [rdi+2ECh]
    vmovss  dword ptr [rdi+2F8h], xmm1
  }
  _RDI->m_PreviousRotationVelocity.v[0] = _RDI->m_RotationVelocity.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+38Ch]
    vmovss  dword ptr [rdi+39Ch], xmm0
    vmovss  xmm1, dword ptr [rdi+390h]
    vmovss  dword ptr [rdi+3A0h], xmm1
    vmovss  xmm0, dword ptr [rdi+394h]
    vmovss  dword ptr [rdi+3A4h], xmm0
  }
  *(_QWORD *)_RDI->m_RotationVelocity.v = 0i64;
  *(_QWORD *)&_RDI->m_RotationVelocity.xyz.z = 0i64;
  _RDI->m_RotationVelocity.v[3] = 1.0;
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(FlightDynamics *))_RDI->ApplyGravity)(_RDI);
  _RDI->PerformCoordinatedFlight(_RDI);
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(FlightDynamics *))_RDI->ComputeLiftForces)(_RDI);
  LOBYTE(fmt) = 0;
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(FlightDynamics *, __int64, _QWORD, __int64, int))_RDI->CalculateFlyByWireVector)(_RDI, v16, 0i64, 1i64, fmt);
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(FlightDynamics *))_RDI->PerformAutomaticControl)(_RDI);
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(FlightDynamics *))_RDI->PerformControlSurfaces)(_RDI);
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(FlightDynamics *))_RDI->PerformThrusterControl)(_RDI);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rdi+2E4h]
    vmulss  xmm1, xmm6, dword ptr [rdi+2E8h]
    vmulss  xmm2, xmm6, dword ptr [rdi+2ECh]
    vaddss  xmm0, xmm0, dword ptr [rdi+2D8h]
    vmovss  dword ptr [rdi+2D8h], xmm0
    vaddss  xmm1, xmm1, dword ptr [rdi+2DCh]
    vmovss  dword ptr [rdi+2DCh], xmm1
    vaddss  xmm0, xmm2, dword ptr [rdi+2E0h]
    vmovss  dword ptr [rdi+2E0h], xmm0
    vmovaps xmm1, xmm6
  }
  ((void (__fastcall *)(FlightDynamics *))_RDI->SimulateTurbineOperation)(_RDI);
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(FlightDynamics *))_RDI->PerformFlyByWire)(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+2F0h]
    vsubss  xmm4, xmm0, dword ptr [rdi+2E4h]
    vmovss  dword ptr [rdi+50Ch], xmm4
    vmovss  xmm1, dword ptr [rdi+2F4h]
    vsubss  xmm2, xmm1, dword ptr [rdi+2E8h]
    vmovss  dword ptr [rdi+510h], xmm2
    vmovss  xmm0, dword ptr [rdi+2F8h]
    vsubss  xmm3, xmm0, dword ptr [rdi+2ECh]
    vmovss  dword ptr [rdi+514h], xmm3
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm3, xmm1
    vmovss  dword ptr [rdi+518h], xmm2
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
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

void __fastcall FlightDynamics::UpdatePosition(FlightDynamics *this, double dT)
{
  __asm
  {
    vmulss  xmm0, xmm1, dword ptr [rcx+2E4h]
    vaddss  xmm2, xmm0, dword ptr [rcx+2D8h]
    vmovss  dword ptr [rcx+2D8h], xmm2
    vmovaps xmm5, xmm1
    vmulss  xmm1, xmm1, dword ptr [rcx+2E8h]
    vaddss  xmm0, xmm1, dword ptr [rcx+2DCh]
    vmovss  dword ptr [rcx+2DCh], xmm0
    vmulss  xmm2, xmm5, dword ptr [rcx+2ECh]
    vaddss  xmm1, xmm2, dword ptr [rcx+2E0h]
    vmovss  dword ptr [rcx+2E0h], xmm1
  }
}

/*
==============
FlightDynamicsGyroscope::UpdateTailrotor
==============
*/
void FlightDynamicsGyroscope::UpdateTailrotor(FlightDynamicsGyroscope *this, const tmat43_t<vec3_t> *matrix, const vec3_t *linearVelocity, const vec3_t *angularVelocity, float dT, float *rudderOutput)
{
  char v75; 
  bool v83; 
  vec3_t v0; 
  vec3_t cross; 
  vec3_t v1; 
  vec3_t v272; 
  vec3_t v273; 
  char v274; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
    vmovss  xmm2, cs:__real@3c888889; max
    vmovss  xmm1, cs:__real@3b888889; min
    vmovss  xmm0, [rsp+158h+dT]; val
  }
  _R14 = rudderOutput;
  _RSI = linearVelocity;
  _RBX = matrix;
  _RBP = this;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RBP->m_fbwOutputs.v[0] = _RBP->m_ControlInputs[8];
  *(_QWORD *)&_RBP->m_fbwOutputs.y = LODWORD(_RBP->m_ControlInputs[9]);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm7, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rbx+8]
    vmovss  xmm8, dword ptr [rbx+14h]
    vmovss  xmm12, dword ptr [rbx+0Ch]
    vmovss  xmm13, dword ptr [rbx+10h]
    vmovaps xmm9, xmm0
    vmovss  xmm0, dword ptr [rbp+74h]
    vmovss  [rsp+158h+var_138], xmm0
    vmovss  xmm0, dword ptr [rbx+18h]
    vmovss  [rsp+158h+var_128], xmm0
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  [rsp+158h+var_124], xmm0
    vmovss  xmm0, dword ptr [rbx+20h]
    vmovss  [rsp+158h+var_120], xmm0
    vmovss  dword ptr [rsp+158h+v0], xmm6
    vmovss  dword ptr [rsp+158h+v0+4], xmm7
    vmovss  dword ptr [rsp+158h+v0+8], xmm1
    vmovss  [rsp+158h+var_130], xmm8
  }
  Vec3Cross(&v0, angularVelocity, &cross);
  __asm
  {
    vmulss  xmm1, xmm8, dword ptr [rsp+158h+cross+8]
    vmovss  xmm8, cs:__real@3f800000
    vmulss  xmm3, xmm13, dword ptr [rsp+158h+cross+4]
    vmulss  xmm2, xmm12, dword ptr [rsp+158h+cross]
    vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm1, xmm2, cs:?FD_GYRO_ANGULAR_VELOCITY_SCALE@@3MA; float FD_GYRO_ANGULAR_VELOCITY_SCALE
    vmulss  xmm3, xmm1, cs:?FD_GYRO_ANGULAR_VELOCITY_MULTIPLIER@@3MA; float FD_GYRO_ANGULAR_VELOCITY_MULTIPLIER
    vmovss  [rsp+158h+var_11C], xmm1
    vmulss  xmm1, xmm3, xmm12
    vaddss  xmm5, xmm1, xmm6
    vmulss  xmm0, xmm3, xmm13
    vaddss  xmm4, xmm0, xmm7
    vmulss  xmm2, xmm4, xmm4
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vmovss  xmm1, cs:__real@80000000
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, xmm1
    vblendvps xmm0, xmm3, xmm8, xmm0
    vmovss  [rsp+158h+var_12C], xmm1
    vdivss  xmm1, xmm8, xmm0
    vmovss  xmm0, dword ptr [rbp+6Ch]
    vxorps  xmm10, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm7, xmm4, xmm1
    vandps  xmm6, xmm10, xmm11
    vsubss  xmm0, xmm8, xmm6
    vmulss  xmm0, xmm0, dword ptr [rbp+7Ch]
  }
  _RBP->m_GyroVelocityDelta = *_RSI;
  __asm
  {
    vmovss  [rsp+158h+var_134], xmm0
    vmovss  xmm0, dword ptr [rbp+1Ch]
    vmulss  xmm3, xmm0, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rbp+20h]
    vmulss  xmm15, xmm5, xmm1
    vmovss  xmm1, dword ptr [rsi]
    vmulss  xmm2, xmm1, dword ptr [rbp+18h]
    vaddss  xmm4, xmm3, xmm2
    vmovss  [rsp+158h+var_114], xmm7
    vmulss  xmm1, xmm0, dword ptr [rsi+8]
    vaddss  xmm14, xmm4, xmm1
    vdivss  xmm0, xmm14, cs:?FD_SPEED_LIMITER@@3MA; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcomiss xmm14, cs:__real@ba83126f
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( v75 )
  {
    __asm
    {
      vmulss  xmm3, xmm9, cs:?FD_GYRO_REVERSE_ACTUATOR_REACTION_TIME@@3MA; float FD_GYRO_REVERSE_ACTUATOR_REACTION_TIME
      vsubss  xmm2, xmm8, xmm3
      vmulss  xmm1, xmm2, dword ptr [rbp+30h]
      vsubss  xmm4, xmm1, xmm3
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm2, xmm9, cs:?FD_GYRO_REVERSE_ACTUATOR_REACTION_TIME@@3MA; float FD_GYRO_REVERSE_ACTUATOR_REACTION_TIME
      vsubss  xmm1, xmm8, xmm2
      vmulss  xmm0, xmm1, dword ptr [rbp+30h]
      vaddss  xmm4, xmm0, xmm2
    }
  }
  v83 = !_RBP->m_GyroRudderForwardVectorSet;
  __asm { vmovss  dword ptr [rbp+30h], xmm4 }
  if ( v83 )
  {
    _RBP->m_GyroRudderForwardVectorSet = 1;
    __asm
    {
      vmovss  dword ptr [rbp+18h], xmm15
      vmovss  dword ptr [rbp+1Ch], xmm7
    }
    _RBP->m_GyroRudderForwardVector.v[2] = 0.0;
  }
  __asm { vcomiss xmm6, cs:__real@3a83126f }
  if ( !v83 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+28h]
      vsubss  xmm0, xmm2, xmm10
      vandps  xmm0, xmm0, xmm11
      vcomiss xmm0, xmm8
    }
  }
  __asm
  {
    vmulss  xmm1, xmm9, cs:?FD_GYRO_RUDDER_HEADHOLD_TO_RATE_DECAY@@3MA; float FD_GYRO_RUDDER_HEADHOLD_TO_RATE_DECAY
    vsubss  xmm1, xmm8, xmm1
    vmulss  xmm0, xmm1, dword ptr [rbp+28h]
    vmovss  dword ptr [rbp+28h], xmm0
    vmulss  xmm1, xmm9, cs:?FD_GYRO_AILERON_TO_STRAFE_REACTION_TIME@@3MA; float FD_GYRO_AILERON_TO_STRAFE_REACTION_TIME
    vsubss  xmm0, xmm8, xmm1
    vmulss  xmm2, xmm0, dword ptr [rbp+58h]
    vmulss  xmm1, xmm1, [rsp+158h+var_134]
    vaddss  xmm3, xmm2, xmm1
    vmovss  dword ptr [rbp+58h], xmm3
    vmulss  xmm4, xmm3, cs:?FD_GYRO_PROPOSED_FBW_CHANGE_MULTIPLIER@@3MA; float FD_GYRO_PROPOSED_FBW_CHANGE_MULTIPLIER
    vmulss  xmm0, xmm12, xmm4
    vmovss  xmm12, [rsp+158h+var_12C]
    vaddss  xmm5, xmm0, xmm15
    vmulss  xmm1, xmm13, xmm4
    vaddss  xmm6, xmm1, xmm7
    vmulss  xmm7, xmm4, [rsp+158h+var_130]
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm2, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, xmm12
    vblendvps xmm0, xmm4, xmm8, xmm0
    vdivss  xmm2, xmm8, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+158h+v1], xmm0
    vmulss  xmm0, xmm7, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+158h+v1+8], xmm0
    vmovss  dword ptr [rsp+158h+v1+4], xmm1
  }
  Vec3Cross(&_RBP->m_GyroRudderForwardVector, &v1, &v272);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+158h+var_E0+4]
    vmulss  xmm2, xmm1, [rsp+158h+var_124]
    vmovss  xmm0, dword ptr [rsp+158h+var_E0]
    vmulss  xmm3, xmm0, [rsp+158h+var_128]
    vmovss  xmm0, dword ptr [rsp+158h+var_E0+8]
    vmulss  xmm1, xmm0, [rsp+158h+var_120]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm0, xmm2, cs:?FD_GYRO_TAIL_LOCK_STRENGTH@@3MA; value
    vmovss  xmm1, cs:?FD_GYRO_TAIL_LOCK_STRENGTH_EXPO@@3MA; expo
  }
  *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm3, cs:?FD_GYRO_ANGULAR_VELOCITY_MULTIPLIER@@3MA; float FD_GYRO_ANGULAR_VELOCITY_MULTIPLIER
    vmulss  xmm1, xmm3, [rsp+158h+var_11C]
    vmulss  xmm2, xmm10, cs:?FD_GYRO_TAIL_MAX_TURN_RATE@@3MA; float FD_GYRO_TAIL_MAX_TURN_RATE
    vmulss  xmm4, xmm2, dword ptr [rbp+30h]
    vmulss  xmm2, xmm1, dword ptr [rbp+30h]
    vmovss  xmm1, dword ptr [rbp+28h]
    vmovss  xmm7, cs:__real@bf800000
    vsubss  xmm4, xmm4, xmm2
    vmulss  xmm3, xmm4, cs:?FD_GYRO_TAIL_MAX_TURN_RATE_STRENGTH@@3MA; float FD_GYRO_TAIL_MAX_TURN_RATE_STRENGTH
    vandps  xmm1, xmm1, xmm11
    vmovaps xmm6, xmm0
    vsubss  xmm0, xmm8, xmm1
    vmulss  xmm2, xmm0, xmm6
    vmulss  xmm5, xmm3, xmm9
    vmulss  xmm1, xmm1, xmm5
    vsubss  xmm0, xmm2, xmm1; val
    vmovaps xmm2, xmm8; max
    vmovaps xmm1, xmm7; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm0, xmm0, dword ptr [rbp+30h]
    vmulss  xmm3, xmm9, cs:?FD_GYRO_ACTUATOR_RESPONSE_REACTION_TIME@@3MA; float FD_GYRO_ACTUATOR_RESPONSE_REACTION_TIME
    vmulss  xmm2, xmm0, xmm3
    vsubss  xmm1, xmm8, xmm3
    vmulss  xmm0, xmm1, dword ptr [rbp+34h]
    vaddss  xmm0, xmm2, xmm0; val
    vmovaps xmm2, xmm8; max
    vmovaps xmm1, xmm7; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbp+34h], xmm0
    vmovss  dword ptr [r14], xmm0
    vmovss  xmm0, cs:__real@40000000
    vsubss  xmm0, xmm0, [rsp+158h+var_138]; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vandps  xmm6, xmm6, xmm11
    vmulss  xmm6, xmm0, xmm6
    vmulss  xmm0, xmm14, [rsp+158h+var_138]
    vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm0, xmm8, xmm0
    vmulss  xmm3, xmm0, xmm6
    vmulss  xmm0, xmm3, cs:?FD_GYRO_ACCELERATOR_MIX_FULL_FBW_DELTA@@3MA; float FD_GYRO_ACCELERATOR_MIX_FULL_FBW_DELTA
    vsubss  xmm1, xmm8, xmm3
    vmulss  xmm2, xmm1, cs:?FD_GYRO_ACCELERATOR_MIX_ZERO_FBW_DELTA@@3MA; float FD_GYRO_ACCELERATOR_MIX_ZERO_FBW_DELTA
    vaddss  xmm2, xmm2, xmm0
    vmulss  xmm1, xmm2, xmm9
    vmulss  xmm0, xmm1, [rsp+158h+var_138]; val
    vmovaps xmm1, xmm7; min
    vmovaps xmm2, xmm8; max
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm7, xmm10, cs:?FD_GYRO_RUDDER_RATE@@3MA; float FD_GYRO_RUDDER_RATE
    vmovss  xmm6, [rsp+158h+var_118]
    vmulss  xmm0, xmm6, dword ptr [rbp+34h]
    vsubss  xmm2, xmm8, xmm6
    vmulss  xmm3, xmm2, xmm10
    vaddss  xmm2, xmm3, xmm0
    vmovss  dword ptr [r14], xmm2
    vandps  xmm0, xmm7, xmm11
    vmulss  xmm0, xmm0, cs:?FD_HFD_FBW_GYRO_RUDDER_RATE_MANUAL_VECTOR@@3MA; float FD_HFD_FBW_GYRO_RUDDER_RATE_MANUAL_VECTOR
    vmulss  xmm0, xmm0, xmm9; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm1, xmm15, dword ptr [rbp+18h]
    vmulss  xmm2, xmm1, xmm0
    vaddss  xmm5, xmm2, dword ptr [rbp+18h]
    vmovss  xmm1, [rsp+158h+var_114]
    vmovss  dword ptr [rbp+18h], xmm5
    vsubss  xmm1, xmm1, dword ptr [rbp+1Ch]
    vmulss  xmm2, xmm1, xmm0
    vaddss  xmm3, xmm2, dword ptr [rbp+1Ch]
    vmovss  dword ptr [rbp+1Ch], xmm3
    vmulss  xmm0, xmm0, xmm8
    vsubss  xmm0, xmm8, xmm0
    vmulss  xmm1, xmm0, dword ptr [rbp+20h]
    vsubss  xmm0, xmm5, dword ptr [rsp+158h+v0]
    vmovss  dword ptr [rbp+20h], xmm1
    vmulss  xmm1, xmm0, xmm6
    vaddss  xmm5, xmm1, dword ptr [rsp+158h+v0]
    vmovss  dword ptr [rbp+18h], xmm5
    vmovss  xmm0, dword ptr [rbp+1Ch]
    vsubss  xmm0, xmm0, dword ptr [rsp+158h+v0+4]
    vmulss  xmm1, xmm0, xmm6
    vaddss  xmm4, xmm1, dword ptr [rsp+158h+v0+4]
    vmovss  dword ptr [rbp+1Ch], xmm4
    vmovss  xmm0, dword ptr [rbp+20h]
    vsubss  xmm0, xmm0, dword ptr [rsp+158h+v0+8]
    vmulss  xmm1, xmm0, xmm6
    vaddss  xmm3, xmm1, dword ptr [rsp+158h+v0+8]
    vmovss  dword ptr [rbp+20h], xmm3
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm12
    vblendvps xmm0, xmm3, xmm8, xmm0
    vdivss  xmm2, xmm8, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+18h], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbp+1Ch]
    vmovss  dword ptr [rbp+1Ch], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbp+20h]
    vmovss  dword ptr [rbp+20h], xmm0
  }
  Vec3Cross(&sFlightDynamicsManager.m_UpAxis, &_RBP->m_GyroRudderForwardVector, &v273);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+158h+var_D0+4]
    vmovss  xmm6, dword ptr [rsp+158h+var_D0]
    vmovss  xmm4, dword ptr [rsp+158h+var_D0+8]
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, xmm12
    vblendvps xmm0, xmm3, xmm8, xmm0
    vdivss  xmm1, xmm8, xmm0
    vmulss  xmm3, xmm5, xmm1
    vmulss  xmm0, xmm6, xmm1
    vmulss  xmm4, xmm7, xmm9
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, dword ptr [rbp+18h]
    vmovss  dword ptr [rbp+18h], xmm2
    vmovaps xmm5, xmm2
    vmulss  xmm0, xmm3, xmm4
    vaddss  xmm1, xmm0, dword ptr [rbp+1Ch]
    vmovss  dword ptr [rbp+1Ch], xmm1
  }
  _RBP->m_GyroRudderForwardVector.v[2] = 0.0;
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+20h]
    vmovaps xmm0, xmm1
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, xmm12
    vblendvps xmm0, xmm4, xmm8, xmm0
    vdivss  xmm2, xmm8, xmm0
    vmulss  xmm0, xmm2, xmm5
    vmovss  dword ptr [rbp+18h], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbp+1Ch]
    vmovss  dword ptr [rbp+1Ch], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbp+20h]
    vmovss  dword ptr [rbp+20h], xmm0
  }
  _R11 = &v274;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

